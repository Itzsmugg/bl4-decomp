// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475cb9fa FUN_1475cb9fa body=316 status=ok
// SIG undefined FUN_1475cb9fa(void)

void FUN_1475cb9fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_1475cbb38(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cbb38 FUN_1475cbb38 body=1417 status=ok
// SIG undefined FUN_1475cbb38(void)

void FUN_1475cbb38(longlong *param_1,longlong *param_2,int param_3,double *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 auStack_408 [40];
  undefined4 local_3e0;
  int iStack_3dc;
  float local_3d8;
  int iStack_3d4;
  int local_3cc;
  double *local_3c8;
  longlong local_3c0;
  float local_3b8;
  int iStack_3b4;
  undefined4 uStack_3b0;
  undefined8 uStack_3ac;
  undefined8 local_3a4;
  longlong *local_398;
  undefined **local_390;
  longlong *local_388;
  longlong *plStack_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined8 uStack_36c;
  undefined8 local_364;
  undefined8 local_35c;
  undefined8 uStack_354;
  undefined4 local_34c;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined5 uStack_320;
  undefined3 uStack_31b;
  undefined5 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined8 local_2dc;
  undefined8 uStack_2d4;
  undefined4 local_2cc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined **local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined2 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined5 uStack_210;
  undefined3 uStack_20b;
  undefined5 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined4 local_1bc;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  iVar2 = (int)param_1[0x27];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    plVar4 = (longlong *)param_1[0x26];
    lVar3 = lVar6 * 0x338;
    do {
      if ((longlong *)*plVar4 == param_2) {
        if (plVar4 != (longlong *)0x0) goto LAB_1475cbe4b;
        break;
      }
      plVar4 = plVar4 + 0x67;
      lVar3 = lVar3 + -0x338;
    } while (lVar3 != 0);
  }
  local_388 = (longlong *)0x0;
  plStack_380 = (longlong *)0x0;
  local_378 = 2;
  local_374 = 0;
  uStack_36c = 0;
  local_364 = 0x200000000;
  local_35c = 0;
  uStack_354 = 0;
  local_34c = 0;
  local_348 = 2;
  local_390 = &PTR_FUN_14a46ea60;
  local_340 = 0x404;
  local_2f0 = 0;
  local_2e8 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  uStack_31b = 0;
  uStack_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_2e4 = 0xffffffff00000080;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2cc = 0;
  local_2dc = 0;
  uStack_2d4 = 0;
  local_2ac = 0xffffffff00000080;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0x10000ea60;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 2;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0x200000000;
  local_24c = 0;
  uStack_244 = 0;
  local_23c = 0;
  local_238 = 2;
  local_280 = &PTR_FUN_14a46ea60;
  local_230 = 0x404;
  local_1e0 = 0;
  local_1d8 = 0;
  uStack_208 = 0;
  local_218 = 0;
  uStack_210 = 0;
  uStack_20b = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1bc = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0x10000ea60;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 2;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0x200000000;
  local_12c = 0;
  local_13c = 0;
  uStack_134 = 0;
  local_128 = 2;
  local_170 = &PTR_FUN_14a46ea60;
  local_120 = 0x404;
  local_d0 = 0;
  local_c8 = 0;
  uStack_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_fb = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_98 = 0;
  local_90 = 0;
  local_ac = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x10000ea60;
  *(uint *)(param_1 + 0x27) = iVar2 + 1U;
  local_3cc = param_3;
  local_3c8 = param_4;
  local_398 = param_2;
  if (*(uint *)((longlong)param_1 + 0x13c) < iVar2 + 1U) {
    FUN_147652520(param_1 + 0x26,iVar2);
  }
  lVar3 = param_1[0x26];
  lVar6 = lVar6 * 0x338;
  *(longlong *)(lVar3 + lVar6) = (longlong)param_2;
  FUN_147613664((longlong *)(lVar3 + lVar6) + 1,&local_390);
  FUN_147613664(lVar3 + lVar6 + 0x118,&local_280);
  FUN_147613664(lVar3 + lVar6 + 0x228,&local_170);
  FUN_1404dbc70(&local_170);
  FUN_1404dbc70(&local_280);
  FUN_1404dbc70(&local_390);
  plVar4 = (longlong *)(lVar6 + param_1[0x26]);
  (**(code **)(*param_1 + 0x368))(param_1);
  param_4 = local_3c8;
  param_3 = local_3cc;
LAB_1475cbe4b:
  local_388 = plVar4 + 1;
  local_390 = (undefined **)(plVar4 + 0x11);
  plStack_380 = plVar4 + 0xe;
  local_398 = plVar4 + 0xc;
  local_3b8 = (float)*param_4;
  iStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  local_3a4 = 0x200000000;
  FUN_1475b9f0a(&local_398,&local_3c0,param_3,&local_3b8);
  local_388 = plVar4 + 0x23;
  local_390 = (undefined **)(plVar4 + 0x33);
  plStack_380 = plVar4 + 0x30;
  local_398 = plVar4 + 0x2e;
  local_3b8 = (float)param_4[1];
  iStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  local_3a4 = 0x200000000;
  FUN_1475b9f0a(&local_398,&local_3c0,param_3,&local_3b8);
  local_388 = plVar4 + 0x45;
  local_390 = (undefined **)(plVar4 + 0x55);
  plStack_380 = plVar4 + 0x52;
  local_398 = plVar4 + 0x50;
  local_3b8 = (float)param_4[2];
  iStack_3b4 = 0;
  uStack_3b0 = 0;
  uStack_3ac = 0;
  local_3a4 = 0x200000000;
  FUN_1475b9f0a(&local_398,&local_3c0,param_3,&local_3b8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 == '\0') goto LAB_1475cc03e;
  lVar6 = param_1[0x13];
  local_3b8 = (float)lVar6;
  iStack_3b4 = (int)((ulonglong)lVar6 >> 0x20);
  local_3c0 = param_1[0x14];
  local_3d8 = (float)CONCAT31(local_3d8._1_3_,1);
  iStack_3d4 = param_3;
  local_3e0 = CONCAT31(local_3e0._1_3_,1);
  iStack_3dc = param_3;
  cVar1 = (char)local_3c0;
  iVar2 = (int)((ulonglong)local_3c0 >> 0x20);
  pfVar5 = &local_3b8;
  if ((char)lVar6 == '\x02') {
    if (cVar1 == '\x02') {
      plVar4 = &local_3c0;
    }
    else {
      plVar4 = &local_3c0;
      if (iVar2 <= param_3) {
        plVar4 = (longlong *)&local_3e0;
      }
      if (iVar2 < param_3) {
        plVar4 = (longlong *)&local_3e0;
      }
    }
LAB_1475cc01d:
    local_398 = *(longlong **)pfVar5;
    local_390 = (undefined **)*plVar4;
  }
  else {
    plVar4 = &local_3c0;
    if (cVar1 == '\x02') {
LAB_1475cbffa:
      if (param_3 < iStack_3b4) {
        pfVar5 = &local_3d8;
      }
      else if (param_3 <= iStack_3b4) {
        pfVar5 = &local_3d8;
      }
      goto LAB_1475cc01d;
    }
    if ((iStack_3b4 <= iVar2) && ((iStack_3b4 != iVar2 || ((char)lVar6 != '\0' && cVar1 != '\0'))))
    {
      plVar4 = &local_3c0;
      if (iVar2 <= param_3) {
        plVar4 = (longlong *)&local_3e0;
      }
      if (iVar2 < param_3) {
        plVar4 = (longlong *)&local_3e0;
      }
      goto LAB_1475cbffa;
    }
    local_398 = (longlong *)CONCAT44(param_3,local_3d8);
    local_390 = (undefined **)CONCAT44(param_3,local_3e0);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_398);
LAB_1475cc03e:
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475cc0c2 FUN_1475cc0c2 body=242 status=ok
// SIG undefined FUN_1475cc0c2(void)

void FUN_1475cc0c2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1475cc1b6(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc1b6 FUN_1475cc1b6 body=322 status=ok
// SIG undefined FUN_1475cc1b6(void)

void FUN_1475cc1b6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x110);
    lVar2 = (longlong)*(int *)(param_1 + 0x118) * 0x118;
    do {
      FUN_144a13f80(param_2,local_34,lVar1,0);
      lVar1 = lVar1 + 0x118;
      lVar2 = lVar2 + -0x118;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x130);
    lVar2 = (longlong)*(int *)(param_1 + 0x138) * 0x338;
    do {
      FUN_144a13f80(param_2,local_34,lVar1,0);
      lVar1 = lVar1 + 0x338;
      lVar2 = lVar2 + -0x338;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x140);
    lVar2 = (longlong)*(int *)(param_1 + 0x148) * 0x448;
    do {
      FUN_144a13f80(param_2,local_34,lVar1,0);
      lVar1 = lVar1 + 0x448;
      lVar2 = lVar2 + -0x448;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x150);
    lVar2 = (longlong)*(int *)(param_1 + 0x158) * 0x998;
    do {
      FUN_144a13f80(param_2,local_34,lVar1,0);
      lVar1 = lVar1 + 0x998;
      lVar2 = lVar2 + -0x998;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc300 FUN_1475cc300 body=258 status=ok
// SIG undefined FUN_1475cc300(void)

void FUN_1475cc300(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (ulonglong)(int)param_1[0x21];
  if ((longlong)uVar1 < 1) {
LAB_1475cc3a7:
    bVar4 = false;
  }
  else {
    plVar3 = (longlong *)param_1[0x20];
    if (*plVar3 == local_28) {
      bVar4 = true;
    }
    else {
      uVar2 = 0;
      do {
        plVar3 = plVar3 + 0x22;
        if (uVar1 - 1 == uVar2) goto LAB_1475cc3a7;
        uVar2 = uVar2 + 1;
      } while (*plVar3 != local_28);
      bVar4 = uVar2 < uVar1;
    }
    FUN_1475ccb8a();
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  *param_3 = bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc40a FUN_1475cc40a body=163 status=ok
// SIG undefined FUN_1475cc40a(void)

void FUN_1475cc40a(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1475cc4ae(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc4ae FUN_1475cc4ae body=130 status=ok
// SIG undefined FUN_1475cc4ae(void)

ulonglong FUN_1475cc4ae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  longlong *plVar5;
  
  uVar2 = (ulonglong)(int)param_1[0x29];
  if ((longlong)uVar2 < 1) {
LAB_1475cc504:
    uVar2 = 0;
  }
  else {
    plVar1 = param_1 + 0x28;
    plVar5 = (longlong *)*plVar1;
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (*plVar5 == param_2) {
      uVar2 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = 0;
      do {
        plVar5 = plVar5 + 0x89;
        if (uVar2 - 1 == uVar3) goto LAB_1475cc504;
        uVar3 = uVar3 + 1;
      } while (*plVar5 != param_2);
      uVar2 = CONCAT71(uVar4,uVar3 < uVar2);
    }
    FUN_147652b28(plVar1);
    FUN_147652bb6(plVar1);
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1475cc536 FUN_1475cc536 body=258 status=ok
// SIG undefined FUN_1475cc536(void)

void FUN_1475cc536(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (ulonglong)(int)param_1[0x23];
  if ((longlong)uVar1 < 1) {
LAB_1475cc5dd:
    bVar4 = false;
  }
  else {
    plVar3 = (longlong *)param_1[0x22];
    if (*plVar3 == local_28) {
      bVar4 = true;
    }
    else {
      uVar2 = 0;
      do {
        plVar3 = plVar3 + 0x23;
        if (uVar1 - 1 == uVar2) goto LAB_1475cc5dd;
        uVar2 = uVar2 + 1;
      } while (*plVar3 != local_28);
      bVar4 = uVar2 < uVar1;
    }
    FUN_1475ccb26();
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  *param_3 = bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc640 FUN_1475cc640 body=258 status=ok
// SIG undefined FUN_1475cc640(void)

void FUN_1475cc640(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (ulonglong)(int)param_1[0x2b];
  if ((longlong)uVar1 < 1) {
LAB_1475cc6e7:
    bVar4 = false;
  }
  else {
    plVar3 = (longlong *)param_1[0x2a];
    if (*plVar3 == local_28) {
      bVar4 = true;
    }
    else {
      uVar2 = 0;
      do {
        plVar3 = plVar3 + 0x133;
        if (uVar1 - 1 == uVar2) goto LAB_1475cc6e7;
        uVar2 = uVar2 + 1;
      } while (*plVar3 != local_28);
      bVar4 = uVar2 < uVar1;
    }
    FUN_1475ccbee();
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  *param_3 = bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc74a FUN_1475cc74a body=163 status=ok
// SIG undefined FUN_1475cc74a(void)

void FUN_1475cc74a(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1475cc7ee(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc7ee FUN_1475cc7ee body=130 status=ok
// SIG undefined FUN_1475cc7ee(void)

ulonglong FUN_1475cc7ee(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  longlong *plVar5;
  
  uVar2 = (ulonglong)(int)param_1[0x25];
  if ((longlong)uVar2 < 1) {
LAB_1475cc844:
    uVar2 = 0;
  }
  else {
    plVar1 = param_1 + 0x24;
    plVar5 = (longlong *)*plVar1;
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (*plVar5 == param_2) {
      uVar2 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = 0;
      do {
        plVar5 = plVar5 + 0x45;
        if (uVar2 - 1 == uVar3) goto LAB_1475cc844;
        uVar3 = uVar3 + 1;
      } while (*plVar5 != param_2);
      uVar2 = CONCAT71(uVar4,uVar3 < uVar2);
    }
    FUN_1476528d0(plVar1);
    FUN_14765293e(plVar1);
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1475cc876 FUN_1475cc876 body=163 status=ok
// SIG undefined FUN_1475cc876(void)

void FUN_1475cc876(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1475cc91a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cc91a FUN_1475cc91a body=130 status=ok
// SIG undefined FUN_1475cc91a(void)

ulonglong FUN_1475cc91a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  longlong *plVar5;
  
  uVar2 = (ulonglong)(int)param_1[0x27];
  if ((longlong)uVar2 < 1) {
LAB_1475cc970:
    uVar2 = 0;
  }
  else {
    plVar1 = param_1 + 0x26;
    plVar5 = (longlong *)*plVar1;
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (*plVar5 == param_2) {
      uVar2 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = 0;
      do {
        plVar5 = plVar5 + 0x67;
        if (uVar2 - 1 == uVar3) goto LAB_1475cc970;
        uVar3 = uVar3 + 1;
      } while (*plVar5 != param_2);
      uVar2 = CONCAT71(uVar4,uVar3 < uVar2);
    }
    FUN_1476529f2(plVar1);
    FUN_147652a70(plVar1);
    (**(code **)(*param_1 + 0x368))(param_1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1475cc9a0 FUN_1475cc9a0 body=56 status=ok
// SIG undefined FUN_1475cc9a0(void)

void FUN_1475cc9a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_2 + 8);
  FUN_141001072(param_1,lVar1);
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001475cc9d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1);
  return;
}



// FUNCTION 1475cc9d8 FUN_1475cc9d8 body=41 status=ok
// SIG undefined FUN_1475cc9d8(void)

undefined8 * FUN_1475cc9d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_140aec500(param_1 + 1);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1475cca02 FUN_1475cca02 body=53 status=ok
// SIG undefined FUN_1475cca02(void)

undefined8 * FUN_1475cca02(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_1406ed278(param_1 + 1);
  FUN_1406ed278(param_1 + 0x23);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1475cca38 FUN_1475cca38 body=65 status=ok
// SIG undefined FUN_1475cca38(void)

undefined8 * FUN_1475cca38(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_1406ed278(param_1 + 1);
  FUN_1406ed278(param_1 + 0x23);
  FUN_1406ed278(param_1 + 0x45);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1475cca7a FUN_1475cca7a body=124 status=ok
// SIG undefined FUN_1475cca7a(void)

undefined8 * FUN_1475cca7a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = 8;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x338);
  lVar1 = 0x338;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x668);
  lVar1 = 0x668;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x998);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1475ccaf6 FUN_1475ccaf6 body=31 status=ok
// SIG undefined FUN_1475ccaf6(void)

void FUN_1475ccaf6(longlong *param_1)

{
  FUN_147574e9a();
                    /* WARNING: Could not recover jumptable at 0x0001475ccb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1);
  return;
}



// FUNCTION 1475ccb16 FUN_1475ccb16 body=8 status=ok
// SIG undefined FUN_1475ccb16(void)

longlong FUN_1475ccb16(longlong param_1)

{
  return param_1 + 0x100;
}



// FUNCTION 1475ccb1e FUN_1475ccb1e body=8 status=ok
// SIG undefined FUN_1475ccb1e(void)

longlong FUN_1475ccb1e(longlong param_1)

{
  return param_1 + 0x150;
}



// FUNCTION 1475ccb26 FUN_1475ccb26 body=100 status=ok
// SIG undefined FUN_1475ccb26(void)

void FUN_1475ccb26(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_1404dbc70(lVar1 + (longlong)(int)param_2 * 0x118 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x118);
    memmove(_Dst,(void *)((longlong)_Dst + 0x118),(longlong)(int)(~param_2 + iVar2) * 0x118);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_147652768(param_1);
  return;
}



// FUNCTION 1475ccb8a FUN_1475ccb8a body=100 status=ok
// SIG undefined FUN_1475ccb8a(void)

void FUN_1475ccb8a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_140bb7e7c(lVar1 + (longlong)(int)param_2 * 0x110 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x110);
    memmove(_Dst,(void *)((longlong)_Dst + 0x110),(longlong)(int)(~param_2 + iVar2) * 0x110);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_14765281c(param_1);
  return;
}



// FUNCTION 1475ccbee FUN_1475ccbee body=88 status=ok
// SIG undefined FUN_1475ccbee(void)

void FUN_1475ccbee(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x998 + *param_1);
  FUN_1475b1918(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x998),(longlong)(int)(~param_2 + iVar1) * 0x998);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147652c6e(param_1);
  return;
}



// FUNCTION 1475ccc46 FUN_1475ccc46 body=8 status=ok
// SIG undefined FUN_1475ccc46(void)

longlong FUN_1475ccc46(longlong param_1)

{
  return param_1 + 0x110;
}



// FUNCTION 1475ccc4e FUN_1475ccc4e body=8 status=ok
// SIG undefined FUN_1475ccc4e(void)

longlong FUN_1475ccc4e(longlong param_1)

{
  return param_1 + 0x100;
}



// FUNCTION 1475ccc56 FUN_1475ccc56 body=8 status=ok
// SIG undefined FUN_1475ccc56(void)

longlong FUN_1475ccc56(longlong param_1)

{
  return param_1 + 0x120;
}



// FUNCTION 1475ccc5e FUN_1475ccc5e body=8 status=ok
// SIG undefined FUN_1475ccc5e(void)

longlong FUN_1475ccc5e(longlong param_1)

{
  return param_1 + 0x130;
}



// FUNCTION 1475ccc66 FUN_1475ccc66 body=8 status=ok
// SIG undefined FUN_1475ccc66(void)

longlong FUN_1475ccc66(longlong param_1)

{
  return param_1 + 0x140;
}



// FUNCTION 1475ccc6e FUN_1475ccc6e body=8 status=ok
// SIG undefined FUN_1475ccc6e(void)

longlong FUN_1475ccc6e(longlong param_1)

{
  return param_1 + 0x150;
}



// FUNCTION 1475ccc76 FUN_1475ccc76 body=290 status=ok
// SIG undefined FUN_1475ccc76(void)

void FUN_1475ccc76(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_6b8 [32];
  undefined8 local_698;
  undefined8 local_680;
  undefined8 local_668;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  plVar3 = (longlong *)FUN_1475b743e(param_1 + -0xf8);
  if (plVar3 != (longlong *)0x0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    local_668 = param_2;
    FUN_14009d2a0();
    FUN_14038fb82();
    puVar2 = *(undefined4 **)(param_3 + 8);
    if (puVar2 == (undefined4 *)0x0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar7 = *puVar2;
      uVar6 = puVar2[1];
      uVar5 = puVar2[2];
      uVar4 = puVar2[3];
    }
    if ((byte)(uVar1 >> 0x18) < 6) {
      local_680 = param_4;
                    /* WARNING: Could not recover jumptable at 0x0001475ccd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_14a4c80b4 + *(int *)(&DAT_14a4c80b4 + (ulonglong)(uVar1 >> 0x18) * 4)))
                (uVar4,uVar5,uVar6,uVar7);
      return;
    }
    local_698 = param_4;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + -0xf8,local_668,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cdc6e FUN_1475cdc6e body=208 status=ok
// SIG undefined FUN_1475cdc6e(void)

void FUN_1475cdc6e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,8);
  FUN_147652d6c(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c7840;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cdd40 FUN_1475cdd40 body=257 status=ok
// SIG undefined FUN_1475cdd40(void)

void FUN_1475cdd40(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147652e26(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cde42 FUN_1475cde42 body=257 status=ok
// SIG undefined FUN_1475cde42(void)

void FUN_1475cde42(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147652fe2(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cdf44 FUN_1475cdf44 body=139 status=ok
// SIG undefined FUN_1475cdf44(void)

undefined8 *
FUN_1475cdf44(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_48 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  local_30 = param_3;
  FUN_147652f50(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0xf) = uVar1;
  *param_2 = &PTR_FUN_14a4c7880;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cdfd0 FUN_1475cdfd0 body=257 status=ok
// SIG undefined FUN_1475cdfd0(void)

void FUN_1475cdfd0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1476531f4(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce0d2 FUN_1475ce0d2 body=151 status=ok
// SIG undefined FUN_1475ce0d2(void)

undefined8 *
FUN_1475ce0d2(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x60;
  local_48 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  local_30 = param_3;
  FUN_147653136(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *param_2 = &PTR_FUN_14a4c78a0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce16a FUN_1475ce16a body=257 status=ok
// SIG undefined FUN_1475ce16a(void)

void FUN_1475ce16a(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147653a40(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce26c FUN_1475ce26c body=165 status=ok
// SIG undefined FUN_1475ce26c(void)

undefined8 *
FUN_1475ce26c(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_38;
  local_36 = param_5;
  local_30 = *param_4;
  local_28 = 1;
  local_48 = param_1 + 0x78;
  local_50 = param_1 + 0x60;
  local_58 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x90);
  local_38 = param_3;
  FUN_147653332(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x15) = uVar1;
  *param_2 = &PTR_FUN_14a4c78c0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce312 FUN_1475ce312 body=181 status=ok
// SIG undefined FUN_1475ce312(void)

undefined8 *
FUN_1475ce312(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_40;
  local_3e = param_5;
  local_38 = *param_4;
  local_30 = 1;
  local_50 = param_1 + 0x90;
  local_58 = param_1 + 0x78;
  local_60 = param_1 + 0x60;
  local_68 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  local_40 = param_3;
  FUN_147653450(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x18) = uVar1;
  *param_2 = &PTR_FUN_14a4c78e0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce3c8 FUN_1475ce3c8 body=197 status=ok
// SIG undefined FUN_1475ce3c8(void)

undefined8 *
FUN_1475ce3c8(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined2 *local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &local_48;
  local_46 = param_5;
  local_40 = *param_4;
  local_38 = 1;
  local_58 = param_1 + 0xa8;
  local_60 = param_1 + 0x90;
  local_68 = param_1 + 0x78;
  local_70 = param_1 + 0x60;
  local_78 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0xc0);
  local_48 = param_3;
  FUN_147653598(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x1b) = uVar1;
  *param_2 = &PTR_FUN_14a4c7900;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce48e FUN_1475ce48e body=213 status=ok
// SIG undefined FUN_1475ce48e(void)

undefined8 *
FUN_1475ce48e(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined2 *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = &local_50;
  local_4e = param_5;
  local_48 = *param_4;
  local_40 = 1;
  local_60 = param_1 + 0xc0;
  local_68 = param_1 + 0xa8;
  local_70 = param_1 + 0x90;
  local_78 = param_1 + 0x78;
  local_80 = param_1 + 0x60;
  local_88 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0xd8);
  local_50 = param_3;
  FUN_14765370c(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x1e) = uVar1;
  *param_2 = &PTR_FUN_14a4c7920;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce564 FUN_1475ce564 body=235 status=ok
// SIG undefined FUN_1475ce564(void)

undefined8 *
FUN_1475ce564(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined2 *local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = &local_58;
  local_56 = param_5;
  local_50 = *param_4;
  local_48 = 1;
  local_68 = param_1 + 0xd8;
  local_70 = param_1 + 0xc0;
  local_78 = param_1 + 0xa8;
  local_80 = param_1 + 0x90;
  local_88 = param_1 + 0x78;
  local_90 = param_1 + 0x60;
  local_98 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0xf0);
  local_58 = param_3;
  FUN_1476538aa(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x21) = uVar1;
  *param_2 = &PTR_FUN_14a4c7940;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ce654 FUN_1475ce654 body=438 status=ok
// SIG undefined FUN_1475ce654(void)

void FUN_1475ce654(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = FUN_1475545d8(param_4,param_3);
  uVar10 = *(uint *)(param_1 + 0x108);
  iVar1 = *(int *)(param_1 + 0x118);
  uVar2 = *(uint *)(param_1 + 0x128);
  uVar3 = *(uint *)(param_1 + 0x138);
  uVar4 = *(uint *)(param_1 + 0x148);
  uVar5 = *(uint *)(param_1 + 0x158);
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      uVar7 = FUN_14755452a(param_4,param_1,iVar8);
      FUN_147554828(param_4,param_2,uVar7,uVar6);
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  if (0 < (int)uVar10) {
    uVar9 = 0;
    do {
      uVar7 = FUN_14755452a(param_4,param_1,uVar9 | 0x1000000);
      FUN_147554828(param_4,param_2,uVar7,uVar6);
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  if (0 < (int)uVar2) {
    uVar10 = 0;
    do {
      uVar7 = FUN_14755452a(param_4,param_1,uVar10 | 0x2000000);
      FUN_147554828(param_4,param_2,uVar7,uVar6);
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  if (0 < (int)uVar3) {
    uVar10 = 0;
    do {
      uVar7 = FUN_14755452a(param_4,param_1,uVar10 | 0x3000000);
      FUN_147554828(param_4,param_2,uVar7,uVar6);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
  }
  if (0 < (int)uVar4) {
    uVar10 = 0;
    do {
      uVar7 = FUN_14755452a(param_4,param_1,uVar10 | 0x4000000);
      FUN_147554828(param_4,param_2,uVar7,uVar6);
      uVar10 = uVar10 + 1;
    } while (uVar4 != uVar10);
  }
  if (0 < (int)uVar5) {
    uVar10 = 0;
    do {
      uVar7 = FUN_14755452a(param_4,param_1,uVar10 | 0x5000000);
      FUN_147554828(param_4,param_2,uVar7,uVar6);
      uVar10 = uVar10 + 1;
    } while (uVar5 != uVar10);
  }
  return;
}



// FUNCTION 1475ce812 FUN_1475ce812 body=538 status=ok
// SIG undefined FUN_1475ce812(void)

undefined8 FUN_1475ce812(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + -0xf8;
  lVar3 = *(longlong *)(param_1 + 0x60);
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar7 = FUN_1475545d8(param_4,param_3);
  if (uVar2 == 0) {
    uVar8 = FUN_14755452a(param_4,lVar1,0xffffffff);
  }
  else {
    uVar12 = *param_2;
    uVar16 = uVar12 >> 0x20;
    uVar13 = 0;
    if (((char)uVar12 != '\x02') && (0 < (int)uVar2)) {
      uVar13 = 0;
      uVar10 = (ulonglong)uVar2;
      uVar11 = uVar2;
      do {
        uVar10 = uVar10 >> 1;
        uVar14 = (uint)uVar10 + (int)uVar13;
        if (*(int *)(lVar3 + (ulonglong)uVar14 * 4) <=
            *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)uVar12 == '\0') * 4) + (int)(uVar12 >> 0x20)
           ) {
          uVar13 = (ulonglong)(uVar14 + (uVar11 & 1));
        }
        bVar4 = 1 < uVar11;
        uVar11 = (uint)uVar10;
      } while (bVar4);
    }
    uVar10 = (ulonglong)(uVar2 - 1);
    if ((int)uVar13 < (int)(uVar2 - 1)) {
      uVar10 = uVar13;
    }
    local_60 = lVar1;
    if ((int)uVar10 < 0) goto LAB_1475ce9e4;
    uVar13 = uVar12 >> 8;
    local_6c = uVar7;
    local_68 = param_4;
    uVar8 = FUN_14755452a(param_4,lVar1,uVar10);
    puVar15 = (uint *)(lVar3 + uVar10 * 4);
    do {
      iVar9 = (int)uVar13;
      cVar6 = FUN_1400a246c(param_2,puVar15);
      uVar5 = local_68;
      if (cVar6 == '\0') break;
      local_58 = (ulonglong)(uint)(iVar9 << 8) + (uVar12 & 0xff) | uVar16 << 0x20;
      local_50 = (ulonglong)*puVar15 << 0x20;
      if (((char)uVar12 == '\x02') || ((int)uVar16 < (int)*puVar15)) {
        FUN_147554828(local_68,&local_58,uVar8,local_6c);
        uVar16 = (ulonglong)*puVar15;
        uVar8 = FUN_14755452a(uVar5,local_60,uVar10);
        uVar13 = 0;
        uVar12 = 1;
      }
      iVar9 = (int)uVar13;
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      puVar15 = puVar15 + 1;
    } while ((int)uVar11 < (int)uVar2);
    local_50 = param_2[1];
    local_58 = (uVar12 & 0xff) + (ulonglong)(uint)(iVar9 << 8) | uVar16 << 0x20;
    if (((char)local_50 != '\x02' && (char)uVar12 != '\x02') &&
       ((iVar9 = (int)(local_50 >> 0x20), iVar9 < (int)uVar16 ||
        (((int)uVar16 == iVar9 && ((char)local_50 == '\0' || (char)uVar12 == '\0'))))))
    goto LAB_1475ce9e4;
    param_2 = &local_58;
    param_4 = local_68;
    uVar7 = local_6c;
  }
  FUN_147554828(param_4,param_2,uVar8,uVar7);
LAB_1475ce9e4:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1475cea2e FUN_1475cea2e body=23 status=ok
// SIG undefined FUN_1475cea2e(void)

undefined1 FUN_1475cea2e(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1475cea46 FUN_1475cea46 body=358 status=ok
// SIG undefined FUN_1475cea46(void)

void FUN_1475cea46(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  uint local_88;
  longlong local_80;
  undefined1 local_78;
  uint local_70;
  longlong local_68;
  undefined1 local_60;
  uint local_58;
  longlong local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x88) != '\0')) ||
      (*(int *)(param_1 + 0x180) != 0)) ||
     (((*(char *)(param_1 + 0x1a0) != '\0' || (*(int *)(param_1 + 0x298) != 0)) ||
      (*(char *)(param_1 + 0x2b8) == '\x01')))) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_70 = 0x10000;
    local_88 = 0x10000;
    if (*(int *)(param_1 + 0x68) == 0) {
      local_88 = (uint)*(byte *)(param_1 + 0x88) << 0x10;
    }
    if (*(int *)(param_1 + 0x180) == 0) {
      local_70 = (uint)*(byte *)(param_1 + 0x1a0) << 0x10;
    }
    local_80 = param_1 + 8;
    local_90 = *(undefined2 *)(lVar2 + 0x90);
    local_88 = local_88 | *(ushort *)(lVar1 + 0x90);
    local_68 = param_1 + 0x120;
    local_70 = *(ushort *)(lVar1 + 0x92) | local_70;
    local_50 = param_1 + 0x238;
    local_58 = 0x10000;
    if (*(int *)(param_1 + 0x298) == 0) {
      local_58 = (uint)*(byte *)(param_1 + 0x2b8) << 0x10;
    }
    local_58 = *(ushort *)(lVar1 + 0x94) | local_58;
    local_78 = 1;
    local_60 = 1;
    local_48 = 1;
    local_40 = 0;
    local_98 = &PTR_FUN_14a4c6f20;
    local_38 = local_90;
    FUN_1475cebae(&local_98,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cebae FUN_1475cebae body=681 status=ok
// SIG undefined FUN_1475cebae(void)

void FUN_1475cebae(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined **local_148;
  undefined2 local_140;
  undefined4 local_138;
  undefined8 local_130;
  char local_128;
  undefined4 local_120;
  undefined8 local_118;
  char local_110;
  undefined4 local_108;
  undefined8 local_100;
  char local_f8;
  undefined2 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined **local_c8;
  undefined2 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  char local_90;
  undefined4 local_88;
  undefined8 local_80;
  char local_78;
  uint local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined1 local_5c;
  undefined1 local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    local_158 = 0;
    iStack_154 = 0;
    iStack_150 = 0;
    iStack_14c = 0;
  }
  else {
    local_158 = *piVar1;
    iStack_154 = piVar1[1];
    iStack_150 = piVar1[2];
    iStack_14c = piVar1[3];
  }
  lVar4 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_140bc7f26();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        local_f0 = *(undefined2 *)(lVar4 + 0x62);
        local_d0 = *(undefined1 *)(param_1 + 0x58);
        local_140 = *(undefined2 *)(param_1 + 8);
        local_138 = *(undefined4 *)(param_1 + 0x10);
        local_128 = *(char *)(param_1 + 0x20);
        if (local_128 == '\x01') {
          local_130 = *(undefined8 *)(param_1 + 0x18);
        }
        local_120 = *(undefined4 *)(param_1 + 0x28);
        local_110 = *(char *)(param_1 + 0x38);
        if (local_110 == '\x01') {
          local_118 = *(undefined8 *)(param_1 + 0x30);
        }
        local_108 = *(undefined4 *)(param_1 + 0x40);
        local_f8 = *(char *)(param_1 + 0x50);
        if (local_f8 == '\x01') {
          local_100 = *(undefined8 *)(param_1 + 0x48);
        }
        local_d8 = 1;
        local_ec = *(undefined4 *)(lVar2 + 0x100);
        uStack_e8 = *(undefined4 *)(lVar2 + 0x104);
        uStack_e4 = *(undefined4 *)(lVar2 + 0x108);
        uStack_e0 = *(undefined4 *)(lVar2 + 0x10c);
        local_dc = *(undefined4 *)(lVar2 + 0x110);
        local_148 = &PTR_FUN_14a4c79c0;
        local_168 = ((iStack_154 != 0 || local_158 != 0) || iStack_150 != 0) || iStack_14c != 0;
        FUN_147653d2a(&local_148,&local_c8,*(undefined2 *)(lVar4 + 100));
        FUN_147653c28(param_4,&local_c8);
      }
      else {
        cVar3 = FUN_145e0c77a(param_3);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_188);
        }
      }
      goto LAB_1475ced59;
    }
  }
  local_58 = *(undefined1 *)(param_1 + 0x58);
  local_c0 = *(undefined2 *)(param_1 + 8);
  local_b8 = *(undefined4 *)(param_1 + 0x10);
  local_a8 = *(char *)(param_1 + 0x20);
  if (local_a8 == '\x01') {
    local_b0 = *(undefined8 *)(param_1 + 0x18);
  }
  local_a0 = *(undefined4 *)(param_1 + 0x28);
  local_90 = *(char *)(param_1 + 0x38);
  if (local_90 == '\x01') {
    local_98 = *(undefined8 *)(param_1 + 0x30);
  }
  local_88 = *(undefined4 *)(param_1 + 0x40);
  local_78 = *(char *)(param_1 + 0x50);
  if (local_78 == '\x01') {
    local_80 = *(undefined8 *)(param_1 + 0x48);
  }
  local_70 = (uint)CONCAT12(((iStack_154 != 0 || local_158 != 0) || iStack_150 != 0) ||
                            iStack_14c != 0,*(undefined2 *)(lVar4 + 100));
  local_5c = 1;
  local_6c = local_158;
  iStack_68 = iStack_154;
  iStack_64 = iStack_150;
  iStack_60 = iStack_14c;
  local_c8 = &PTR_FUN_14a4c7a00;
  FUN_147653dc4(param_4);
LAB_1475ced59:
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ceed4 FUN_1475ceed4 body=52 status=ok
// SIG undefined FUN_1475ceed4(void)

void FUN_1475ceed4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3906c);
  FUN_141001072(param_1,plVar1);
  return;
}



// FUNCTION 1475cef08 FUN_1475cef08 body=511 status=ok
// SIG undefined FUN_1475cef08(void)

undefined8 FUN_1475cef08(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0x100000000;
  if (0x1ffe < (uint)((ulonglong)*(undefined8 *)(param_1 + 0x118) >> 0x33)) {
    cVar3 = FUN_1432e0f08(param_1 + 0x118);
    if ((cVar3 == '\0') &&
       (plVar4 = (longlong *)FUN_147585980(param_1 + 0x118), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x2e0))(plVar4,&local_48,1);
    }
  }
  FUN_140f937a0(&local_48,param_1 + 0x138);
  local_50 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14a492060;
  local_58 = local_50 + 2;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 2;
  if (local_30 == 0) {
    local_50[9] = local_38;
    *(undefined4 *)(local_50 + 7) = local_48;
    *(undefined4 *)((longlong)local_50 + 0x3c) = uStack_44;
    *(undefined4 *)(local_50 + 8) = uStack_40;
    *(undefined4 *)((longlong)local_50 + 0x44) = uStack_3c;
  }
  local_50[10] = local_30;
  local_30 = 0;
  *(undefined4 *)(local_50 + 0xb) = (undefined4)local_28;
  *(undefined4 *)((longlong)local_50 + 0x5c) = local_28._4_4_;
  local_28 = 0x100000000;
  FUN_140aec6f8(&local_58);
  plVar4 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_1475cf088;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1475cf052:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1475cf088;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_50 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_50;
      if (plVar5 == (longlong *)0x0) goto LAB_1475cf088;
      goto LAB_1475cf052;
    }
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1475cf088;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1475cf088:
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cf108 FUN_1475cf108 body=23 status=ok
// SIG undefined FUN_1475cf108(void)

undefined4 * FUN_1475cf108(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x108);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



// FUNCTION 1475cf120 FUN_1475cf120 body=185 status=ok
// SIG undefined FUN_1475cf120(void)

void FUN_1475cf120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (longlong)*(int *)(param_1 + 0x10c)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x10c),param_2,param_3);
    *(undefined4 *)(param_1 + 0x10c) = local_30[0];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x110)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x110),param_2,param_3);
    *(undefined4 *)(param_1 + 0x110) = local_30[0];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x108)) {
    FUN_144a808d5(local_30,(longlong)*(int *)(param_1 + 0x108),param_2,param_3);
    *(undefined4 *)(param_1 + 0x108) = local_30[0];
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cf1da FUN_1475cf1da body=760 status=ok
// SIG undefined FUN_1475cf1da(void)

undefined1 * FUN_1475cf1da(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined4 local_90 [2];
  char local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_14073751e();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    local_b8 = *(longlong *)(lVar2 + 0x118);
    local_a8 = *(undefined8 *)(param_1 + 0x98);
    uStack_a0 = *(ulonglong *)(param_1 + 0xa0);
    FUN_14040650c(param_1 + 0x100,local_90);
    FUN_14087ad3e(local_90,local_d8);
    FUN_1447bda9c(local_80,local_78);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    dVar4 = (double)(int)local_b8;
    lVar2 = local_b8 >> 0x20;
    dVar6 = (double)((ulonglong)(double)(int)((ulonglong)local_b8 >> 0x20) & 0x8000000000000000);
    dVar7 = ((double)(((longlong)*(int *)(param_1 + 0x10c) + (longlong)*(int *)(param_1 + 0x108)) *
                     lVar2) + dVar6) / dVar4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar7;
    auVar9 = roundpd(auVar9,auVar9,1);
    dVar8 = auVar9._0_8_;
    dVar7 = dVar7 - dVar8;
    if (2147483647.0 <= dVar8) {
      dVar8 = 2147483647.0;
    }
    if (dVar8 <= -2147483648.0) {
      dVar8 = -2147483648.0;
    }
    fVar10 = (float)dVar7;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = fVar10 + 0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (*(longlong **)(param_1 + 0x100) == (longlong *)0x0) {
      dVar7 = 0.0;
    }
    else {
      fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x100) + 0x2b0))();
      dVar7 = (double)fVar3;
      dVar4 = (double)(int)local_b8;
      lVar2 = local_b8 >> 0x20;
      dVar6 = (double)((ulonglong)(double)(int)((ulonglong)local_b8 >> 0x20) & 0x8000000000000000);
    }
    dVar7 = dVar7 - ((double)(*(int *)(param_1 + 0x110) * lVar2) + dVar6) / dVar4;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar7;
    auVar9 = roundpd(auVar5,auVar5,1);
    dVar4 = auVar9._0_8_;
    dVar7 = dVar7 - dVar4;
    if (2147483647.0 <= dVar4) {
      dVar4 = 2147483647.0;
    }
    if (dVar4 <= -2147483648.0) {
      dVar4 = -2147483648.0;
    }
    fVar3 = (float)dVar7;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 + 0.5 + -0.5;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_a8 = CONCAT71(local_a8._1_7_,0xf);
    FUN_1405bad34(local_d8,local_90,CONCAT44(fVar10,(int)dVar8));
    local_a9 = 0xf;
    FUN_1405bad34(local_d8,&local_a8,CONCAT44(fVar3,(int)dVar4));
    if ((local_88 == '\x01') && ((uStack_a0 & 1) != 0)) {
      *param_2 = 1;
      *(undefined4 *)(param_2 + 4) = local_90[0];
      param_2[8] = 0;
      *(int *)(param_2 + 0xc) = (int)local_a8 + 1;
      param_2[0x10] = 1;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1475cf47e;
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  param_2[0x10] = 0;
LAB_1475cf47e:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cf4d4 FUN_1475cf4d4 body=359 status=ok
// SIG undefined FUN_1475cf4d4(void)

void FUN_1475cf4d4(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144757f48(param_1,8);
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    if ((char)param_3 != '\0') {
      uVar2 = FUN_14073751e();
      lVar3 = FUN_144a78ede(param_1,uVar2);
      local_48 = *(undefined8 *)(lVar3 + 0x118);
      local_78 = *(undefined8 *)(param_1 + 0x98);
      uStack_70 = *(undefined8 *)(param_1 + 0xa0);
      FUN_14040650c(param_1 + 0x100,local_68,&local_48);
      FUN_14040645e(local_68,&local_78,*param_2);
      dVar6 = ((double)(int)local_48 * ((double)local_78._4_4_ + (double)(int)local_78)) /
              (double)(int)((ulonglong)local_48 >> 0x20);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar6;
      auVar5 = roundpd(auVar5,auVar5,1);
      dVar4 = auVar5._0_8_;
      dVar6 = dVar6 - dVar4;
      if (2147483647.0 <= dVar4) {
        dVar4 = 2147483647.0;
      }
      if (dVar4 <= -2147483648.0) {
        dVar4 = -2147483648.0;
      }
      *(int *)(param_1 + 0x108) = (int)dVar6 + (int)dVar4;
      FUN_1447bda9c(local_58,local_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    local_88 = *param_2;
    uStack_80 = param_2[1];
    FUN_147575be8(param_1,&local_88,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cf63c FUN_1475cf63c body=413 status=ok
// SIG undefined FUN_1475cf63c(void)

longlong FUN_1475cf63c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined4 *)(param_1 + 0x108);
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  local_68 = *(undefined8 *)(lVar4 + 0x118);
  local_98 = *(int *)(param_1 + 0x98);
  fStack_94 = *(float *)(param_1 + 0x9c);
  uStack_90 = *(undefined4 *)(param_1 + 0xa0);
  uStack_8c = *(undefined4 *)(param_1 + 0xa4);
  FUN_14040650c(param_1 + 0x100,local_88,&local_68);
  FUN_14040645e(local_88,&local_98,*param_2);
  uVar3 = local_68;
  dVar2 = (double)local_98;
  dVar6 = (double)fStack_94;
  local_a8 = *(undefined4 *)param_2;
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_a0 = *(undefined4 *)(param_2 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar4 = FUN_1475759e6(param_1,&local_a8,param_3);
  if (lVar4 != 0) {
    lVar5 = FUN_140f157e0();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      dVar2 = ((double)(int)uVar3 * (dVar2 + dVar6)) / (double)(int)((ulonglong)uVar3 >> 0x20);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar2;
      auVar7 = roundpd(auVar7,auVar7,1);
      dVar6 = auVar7._0_8_;
      dVar2 = dVar2 - dVar6;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      *(int *)(lVar4 + 0x108) = (int)dVar2 + (int)dVar6;
      goto LAB_1475cf728;
    }
  }
  lVar4 = 0;
LAB_1475cf728:
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  FUN_1447bda9c(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475cf7da FUN_1475cf7da body=582 status=ok
// SIG undefined FUN_1475cf7da(void)

void FUN_1475cf7da(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_b8 [32];
  code *local_98;
  longlong **pplStack_90;
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147539898();
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  if (lVar4 != 0) {
    iVar6 = (uint)((char)*(undefined8 *)(param_1 + 0xa0) == '\x01') +
            (int)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    local_98 = *(code **)(param_1 + 0x98);
    pplStack_90 = *(longlong ***)(param_1 + 0xa0);
    local_48 = *(undefined8 *)(lVar4 + 0x118);
    local_58 = param_2;
    FUN_14040650c((longlong *)(param_1 + 0x100),local_78,&local_48,&local_98);
    local_98 = FUN_143301c46;
    pplStack_90 = &local_58;
    cVar2 = FUN_14755ac52(local_78,(uint)((char)uVar3 != '\x01') + (int)((ulonglong)uVar3 >> 0x20),
                          iVar6,&local_98);
    if (cVar2 == '\0') {
      FUN_14087ad3e(local_78,&local_98);
      plVar1 = *(longlong **)(param_1 + 0x100);
      if (plVar1 == (longlong *)0x0) {
        dVar8 = 0.0;
        uVar3 = 0;
      }
      else {
        fVar7 = (float)(**(code **)(*plVar1 + 0x2b0))();
        dVar8 = (double)fVar7;
        uVar3 = extraout_XMM0_Qb;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar8;
      auVar12 = roundpd(auVar11,auVar11,1);
      dVar10 = auVar12._0_8_;
      auVar12._0_8_ = dVar8 - dVar10;
      auVar12._8_8_ = uVar3;
      if (2147483647.0 <= dVar10) {
        dVar10 = 2147483647.0;
      }
      if (dVar10 <= -2147483648.0) {
        dVar10 = -2147483648.0;
      }
      auVar9._4_12_ = auVar12._4_12_;
      fVar7 = (float)auVar12._0_8_;
      if (0.99999994 <= (float)auVar12._0_8_) {
        fVar7 = 0.99999994;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar7 = fVar7 + 0.5 + -0.5;
      if (0.99999994 <= fVar7) {
        fVar7 = 0.99999994;
      }
      auVar9._0_4_ = fVar7;
      lVar4 = auVar9._0_8_;
      if (fVar7 <= 0.0) {
        lVar4 = 0;
      }
      local_49 = 0xf;
      FUN_1405bad34(&local_98,&local_48,(ulonglong)(uint)(int)dVar10 | lVar4 << 0x20);
      plVar1 = local_58;
      if (local_40 == '\x01') {
        iVar5 = (int)local_48;
        fVar7 = (float)((ulonglong)local_48 >> 0x20);
        if ((iVar5 < iVar6) || ((iVar6 == iVar5 && (fVar7 < 0.0)))) {
          iVar6 = (int)local_58[1];
          *(uint *)(local_58 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)local_58 + 0xc) < iVar6 + 1U) {
            FUN_14753e8f2(local_58,iVar6);
          }
          *(uint *)(*plVar1 + (longlong)iVar6 * 4) = (uint)(0.5 <= fVar7) + iVar5;
        }
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447bda9c(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475cfa22 FUN_1475cfa22 body=113 status=ok
// SIG undefined FUN_1475cfa22(void)

void FUN_1475cfa22(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 1.0;
  FUN_1400f01f6(param_1 + 0x138,param_2,&local_34);
  fVar1 = local_34;
  fVar2 = (float)FUN_140cf0978(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2 * fVar1);
}



// FUNCTION 1475cfa94 FUN_1475cfa94 body=107 status=ok
// SIG undefined FUN_1475cfa94(void)

void FUN_1475cfa94(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
    cVar4 = FUN_145c40fca(param_1,1);
    if (cVar4 == '\0') goto LAB_1475cfac1;
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x98) = *param_2;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
LAB_1475cfac1:
  uVar5 = FUN_140734c0a();
  lVar6 = FUN_144a78ede(param_1,uVar5);
  if (lVar6 != 0) {
    uVar5 = FUN_140734c0a();
    lVar7 = FUN_144a78ede(param_1,uVar5);
    lVar6 = lVar7 + 0x110;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *(undefined1 *)(lVar6 + 0x18) = 1;
  }
  return;
}



// FUNCTION 1475cfb00 FUN_1475cfb00 body=74 status=ok
// SIG undefined FUN_1475cfb00(void)

void FUN_1475cfb00(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_147574fa8();
  uVar1 = FUN_140734c0a();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_140734c0a();
    lVar3 = FUN_144a78ede(param_1,uVar1);
    lVar2 = lVar3 + 0x110;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    *(undefined1 *)(lVar2 + 0x18) = 1;
  }
  return;
}



// FUNCTION 1475cfb4a FUN_1475cfb4a body=74 status=ok
// SIG undefined FUN_1475cfb4a(void)

void FUN_1475cfb4a(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14757501e();
  uVar1 = FUN_140734c0a();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_140734c0a();
    lVar3 = FUN_144a78ede(param_1,uVar1);
    lVar2 = lVar3 + 0x110;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    *(undefined1 *)(lVar2 + 0x18) = 1;
  }
  return;
}



// FUNCTION 1475cfb9c FUN_1475cfb9c body=191 status=ok
// SIG undefined FUN_1475cfb9c(void)

undefined8 * FUN_1475cfb9c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  float fVar8;
  
  if (param_1[0x20] != 0) {
    lVar2 = FUN_1402576f0();
    lVar4 = param_1[0x20];
    if ((((lVar4 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
       (((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) &&
        ((*(char *)((longlong)param_1 + 0x374) == '\x01' && ((int)param_1[0x6e] != 0)))))) {
      uVar3 = FUN_14073751e();
      lVar2 = FUN_144a78ede(param_1,uVar3);
      if (lVar2 == 0) {
        fVar8 = 0.0;
      }
      else {
        dVar7 = (double)(**(code **)(*param_1 + 0x368))(param_1,0,*(undefined8 *)(lVar2 + 0x118));
        fVar8 = (float)dVar7;
      }
      FUN_144943c1c(lVar4,param_2,fVar8,0);
      return param_2;
    }
  }
  puVar5 = &DAT_14c846480;
  puVar6 = param_2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_2;
}



// FUNCTION 1475cfc5c FUN_1475cfc5c body=11822 status=ok
// SIG undefined FUN_1475cfc5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1475cfc5c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  double *pdVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar41;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 in_XMM2 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar71;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar72;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar74;
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar92;
  double dVar93;
  double dVar94;
  undefined1 auVar95 [16];
  double dVar97;
  undefined1 auVar96 [16];
  undefined4 uVar98;
  undefined4 uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  float local_2ec;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128;
  char cStack_127;
  undefined6 uStack_126;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_1[0x20] == 0) {
LAB_1475d01a9:
    plVar19 = (longlong *)0x0;
  }
  else {
    lVar11 = FUN_1402576f0();
    plVar12 = (longlong *)param_1[0x20];
    if (plVar12 == (longlong *)0x0) goto LAB_1475d01a9;
    plVar19 = (longlong *)0x0;
    if ((lVar11 != 0) && (lVar3 = plVar12[2], lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar11 + 0x38)) goto LAB_1475d01a9;
      plVar19 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30) {
        plVar19 = plVar12;
      }
    }
  }
  FUN_144a7484c(param_1 + 0x56,&local_168);
  dVar85 = local_168;
  auVar95 = _DAT_149934d80;
  dVar56 = (double)CONCAT44(uStack_160._4_4_,(uint)uStack_160);
  dVar92 = (double)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
  dVar97 = (double)CONCAT71(uStack_14f,uStack_150);
  local_2e8 = local_168;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_1[0x53];
  dVar49 = (double)param_1[0x53];
  dVar58 = (double)param_1[0x54];
  dVar41 = (double)param_1[0x55];
  dStack_2b0 = 0.0;
  dVar71 = (double)DAT_149934d80;
  dVar48 = DAT_149934d80._8_8_;
  local_2a8 = _DAT_149934d80;
  plVar12 = param_1 + 0x5d;
  dStack_2e0 = dVar56;
  local_2d8 = dVar92;
  dStack_2d0 = dVar97;
  local_2c8 = dVar49;
  dStack_2c0 = dVar58;
  local_2b8 = dVar41;
  local_298 = ZEXT816(0x3ff0000000000000);
  uVar9 = FUN_144a7484c(plVar12,&local_168);
  dVar57 = (double)CONCAT44(uStack_160._4_4_,(uint)uStack_160);
  dVar59 = (double)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
  dVar72 = (double)CONCAT71(uStack_14f,uStack_150);
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x5a);
  local_378 = (double)param_1[0x5c];
  dStack_370 = 0.0;
  if (plVar19 == (longlong *)0x0) {
    auVar22 = minpd(auVar95,auVar95);
    auVar42 = minpd(ZEXT816(0x3ff0000000000000),ZEXT816(0x3ff0000000000000));
    auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar23);
    auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    uVar13 = movmskpd((int)plVar12,auVar43);
    if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar71 = dVar56 * dVar59 * -1.0 + dVar92 * dVar57 + dVar97 * local_168 * 1.0 + dVar85 * dVar72
      ;
      dVar48 = dVar85 * dVar59 * 1.0 + dVar97 * dVar57 + dVar92 * local_168 * -1.0 + dVar56 * dVar72
      ;
      auVar80._0_8_ =
           dVar97 * dVar59 * 1.0 + ((local_168 * dVar56 * 1.0 + dVar92 * dVar72) - dVar57 * dVar85);
      auVar80._8_8_ =
           dVar92 * dVar59 * -1.0 +
           ((local_168 * dVar85 * -1.0 + dVar97 * dVar72) - dVar57 * dVar56);
      auVar101._0_8_ = dVar41 * 1.0;
      auVar101._8_8_ = 0;
      auVar95 = blendpd(auVar62,auVar101,2);
      dVar41 = dVar58 * local_168 - dVar49 * dVar57;
      dVar56 = auVar101._0_8_ * dVar57 - dVar58 * dVar59;
      dVar92 = auVar95._0_8_ * dVar59 - auVar101._0_8_ * local_168;
      dVar97 = auVar95._8_8_ * dVar72 - dVar72 * 0.0;
      dVar56 = dVar56 + dVar56;
      dVar92 = dVar92 + dVar92;
      dVar41 = dVar41 + dVar41;
      dVar97 = dVar97 + dVar97;
      local_108 = *(double *)*pauVar2 +
                  (dVar41 * dVar57 - dVar59 * dVar92) + dVar72 * dVar56 + dVar49;
      dStack_100 = (double)param_1[0x5b] +
                   (dVar56 * dVar59 - dVar41 * local_168) + dVar72 * dVar92 + dVar58;
      local_f8 = local_378 +
                 (dVar92 * local_168 - dVar57 * dVar56) + dVar72 * dVar41 + auVar101._0_8_;
      dVar41 = (dVar97 * dVar72 - dVar97 * dVar72) + dVar72 * dVar97 + 0.0 + 0.0;
      auVar95 = _DAT_149934d80;
    }
    else {
      dVar41 = dVar57 + dVar57;
      dVar49 = dVar59 + dVar59;
      dVar58 = local_168 * (local_168 + local_168);
      local_1e8 = dVar71 - (dVar59 * dVar49 + dVar57 * dVar41);
      dStack_1c0 = dVar48 - (dVar59 * dVar49 + dVar58);
      local_198 = 1.0 - (dVar58 + dVar57 * dVar41);
      dStack_1a0 = (local_168 + local_168) * dVar72;
      dStack_1e0 = dVar41 * local_168 + dVar49 * dVar72;
      local_1b8 = dVar49 * dVar57 + dStack_1a0;
      local_1a8 = dVar41 * dVar72 + local_168 * dVar49;
      local_1c8 = dVar41 * local_168 - dVar49 * dVar72;
      dStack_1a0 = dVar49 * dVar57 - dStack_1a0;
      local_1d8 = local_168 * dVar49 - dVar41 * dVar72;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      uStack_190 = 0;
      uStack_170 = 0x3ff0000000000000;
      dVar41 = dVar56 + dVar56;
      dVar49 = dVar92 + dVar92;
      dVar58 = dVar85 * (dVar85 + dVar85);
      local_268 = dVar71 - (dVar92 * dVar49 + dVar56 * dVar41);
      dStack_240 = dVar48 - (dVar92 * dVar49 + dVar58);
      local_218 = 1.0 - (dVar58 + dVar56 * dVar41);
      dStack_220 = (dVar85 + dVar85) * dVar97;
      dStack_260 = dVar41 * dVar85 + dVar49 * dVar97;
      local_238 = dVar49 * dVar56 + dStack_220;
      local_228 = dVar41 * dVar97 + dVar85 * dVar49;
      local_248 = dVar41 * dVar85 - dVar49 * dVar97;
      dStack_220 = dVar49 * dVar56 - dStack_220;
      local_258 = dVar85 * dVar49 - dVar41 * dVar97;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = local_2c8;
      dStack_200 = dStack_2c0;
      local_1f8 = local_2b8;
      uStack_1f0 = 0x3ff0000000000000;
      local_188 = *pauVar2;
      local_178 = local_378;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      FUN_14481fd10(&local_288,&local_168);
      dVar41 = local_278 * local_278 + local_288 * local_288;
      dVar71 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar61._0_8_ = dVar41 + dVar71;
      auVar61._8_8_ = dVar41 + dVar71;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
      auVar62 = sqrtpd(auVar61,auVar61);
      auVar62 = divpd(auVar95,auVar62);
      auVar76._0_8_ = auVar62._0_8_ * local_278;
      auVar76._8_8_ = auVar62._8_8_ * dStack_270;
      dVar71 = (double)((ulonglong)(local_288 * auVar62._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_));
      dVar48 = (double)((ulonglong)(dStack_280 * auVar62._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_));
      auVar80 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar76,auVar24);
      dVar41 = 0.0;
    }
    param_3[0x10] = dVar71;
    param_3[0x11] = dVar48;
    *(undefined1 (*) [16])(param_3 + 0x12) = auVar80;
    param_3[0x14] = local_108;
    param_3[0x15] = dStack_100;
    param_3[0x16] = local_f8;
    param_3[0x17] = dVar41;
    *(undefined1 (*) [16])(param_3 + 0x18) = auVar95;
    param_3[0x1a] = 0x3ff0000000000000;
    param_3[0x1b] = 0;
    puVar17 = param_3 + 0x10;
    puVar18 = param_3 + 4;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
    param_3 = param_3 + 0x1c;
    puVar17 = &DAT_14c846480;
  }
  else {
    local_388 = local_168;
    local_2ec = 1.0;
    dStack_380 = dVar57;
    local_368 = *pauVar2;
    FUN_1400f01f6(param_1 + 0x27,*param_3,&local_2ec);
    fVar8 = local_2ec;
    fVar21 = (float)FUN_140cf0978(param_1,*param_3);
    *(float *)(param_3 + 0x34) = fVar21 * fVar8;
    *(undefined1 *)(param_3 + 2) = 0;
    dVar41 = (double)(**(code **)(*param_1 + 0x368))(param_1,*param_3,param_3[1]);
    dVar71 = (double)(**(code **)(*param_1 + 0x368))(param_1,0,param_3[1]);
    iVar10 = (**(code **)(*plVar19 + 0x3c0))(plVar19);
    *(bool *)(param_3 + 2) = iVar10 != 0;
    FUN_1475cfb9c(param_1,&local_168);
    puVar17 = &local_168;
    puVar18 = param_3 + 0x28;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
    if ((*(char *)((longlong)param_1 + 0x374) == '\x01') && ((int)param_1[0x6e] != 0)) {
      lVar11 = FUN_144b1f722(param_2);
      iVar10 = (int)param_1[0x6e];
      iVar16 = -1;
      if ((-1 < (longlong)iVar10) && (iVar10 < *(int *)(*(longlong *)(lVar11 + 0x10) + 0x88))) {
        iVar16 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x80) + (longlong)iVar10 * 4)
        ;
      }
      uStack_150 = 0;
      uStack_160._0_4_ = (uint)uStack_160 & 0xffffff00;
      uStack_158._4_4_ = 0;
      uStack_160._4_4_ = 0;
      uStack_158._0_4_ = 0;
      cStack_127 = '\0';
      local_148 = 0.0;
      dStack_140 = 0.0;
      local_138 = 0.0;
      dStack_130 = 0.0;
      local_168 = dVar71;
      (**(code **)(*plVar19 + 0x328))(plVar19,param_2,&local_168);
      plVar12 = (longlong *)FUN_144b1f722(param_2);
      lVar11 = *plVar12;
      lVar3 = (longlong)iVar16 * 0x60;
      puVar1 = (undefined4 *)(lVar11 + lVar3);
      uVar9 = *puVar1;
      uVar98 = puVar1[1];
      uVar13 = puVar1[2];
      uVar99 = puVar1[3];
      pdVar15 = (double *)(lVar11 + 0x10 + lVar3);
      dVar49 = *pdVar15;
      dVar58 = pdVar15[1];
      pdVar15 = (double *)(lVar11 + 0x20 + lVar3);
      dVar71 = *pdVar15;
      dVar48 = pdVar15[1];
      pdVar15 = (double *)(lVar11 + 0x30 + lVar3);
      dVar56 = *pdVar15;
      dVar57 = pdVar15[1];
      auVar95 = *(undefined1 (*) [16])(lVar11 + 0x40 + lVar3);
      auVar22 = *(undefined1 (*) [16])(lVar11 + 0x50 + lVar3);
      local_168 = dVar41;
      (**(code **)(*plVar19 + 0x328))(plVar19,param_2,&local_168);
      plVar12 = (longlong *)FUN_144b1f722(param_2);
      puVar17 = (undefined8 *)(lVar3 + *plVar12);
      puVar18 = param_3 + 0x1c;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      if (cStack_127 == '\x01') {
        cStack_127 = '\0';
      }
      if (local_138 != 0.0) {
        FUN_1400020a8();
      }
      dVar41 = local_148;
      if (local_148 != 0.0) {
        FUN_1400020a8();
      }
    }
    else {
      auVar42._4_12_ = in_XMM2._4_12_;
      auVar42._0_4_ = (float)dVar71;
      FUN_144943c1c(plVar19,&local_168,auVar42._0_8_,0);
      dVar57 = dStack_130;
      dVar56 = local_138;
      dVar48 = dStack_140;
      dVar71 = local_148;
      uVar99 = uStack_160._4_4_;
      uVar13 = (uint)uStack_160;
      uVar9 = (undefined4)local_168;
      uVar98 = local_168._4_4_;
      dVar49 = (double)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
      dVar58 = (double)CONCAT71(uStack_14f,uStack_150);
      auVar95[1] = cStack_127;
      auVar95[0] = local_128;
      auVar95._2_6_ = uStack_126;
      auVar95._8_8_ = dStack_120;
      auVar22._8_8_ = uStack_110;
      auVar22._0_8_ = local_118;
      FUN_144943c1c(plVar19,&local_168,(float)dVar41,0);
      puVar17 = &local_168;
      puVar18 = param_3 + 0x1c;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      dVar41 = 0.0;
    }
    auVar62 = _DAT_149934d80;
    if (*(char *)(param_3 + 2) != '\0') goto LAB_1475d0124;
    dVar92 = auVar95._8_8_;
    dVar97 = auVar22._0_8_;
    if (*DAT_14cab53a8 == '\x01') {
      local_398._8_8_ = dVar57;
      local_398._0_8_ = dVar56;
      dVar85 = auVar95._0_8_;
      auVar42 = minpd(auVar95,_DAT_149934d80);
      auVar44 = minpd(auVar22,ZEXT816(0x3ff0000000000000));
      auVar25._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
      auVar25._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
      iVar10 = movmskpd((int)DAT_14cab53a8,auVar25);
      auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
      auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
      uVar14 = movmskpd(SUB84(dVar41,0),auVar45);
      local_328._0_4_ = uVar9;
      local_328._4_4_ = uVar98;
      uStack_320._0_4_ = uVar13;
      uStack_320._4_4_ = uVar99;
      local_358._0_8_ = dVar49;
      local_358._8_8_ = dVar58;
      if ((uVar14 & 0x3fffffff) == 0 && iVar10 == 0) {
        local_348 = (double)CONCAT44(uVar99,uVar13) * dVar59 * -1.0 +
                    dStack_380 * dVar49 +
                    local_388 * dVar58 * 1.0 + dVar72 * (double)CONCAT44(uVar98,uVar9);
        dStack_340 = (double)CONCAT44(uVar98,uVar9) * dVar59 * 1.0 +
                     dStack_380 * dVar58 +
                     local_388 * dVar49 * -1.0 + dVar72 * (double)CONCAT44(uVar99,uVar13);
        auVar96._0_8_ =
             dVar58 * dVar59 * 1.0 +
             ((local_388 * (double)CONCAT44(uVar99,uVar13) * 1.0 + dVar72 * dVar49) -
             dStack_380 * (double)CONCAT44(uVar98,uVar9));
        auVar96._8_8_ =
             dVar49 * dVar59 * -1.0 +
             ((local_388 * (double)CONCAT44(uVar98,uVar9) * -1.0 + dVar72 * dVar58) -
             dStack_380 * (double)CONCAT44(uVar99,uVar13));
        dVar75 = dVar56 * 1.0;
        dVar57 = dVar57 * 0.0;
        dVar49 = dVar48 * local_388 - dStack_380 * dVar71;
        dVar58 = dVar75 * dStack_380 - dVar59 * dVar48;
        dVar74 = dVar71 * dVar59 - local_388 * dVar75;
        dVar79 = dVar57 * dVar72 - dVar72 * dVar57;
        dVar58 = dVar58 + dVar58;
        dVar74 = dVar74 + dVar74;
        dVar49 = dVar49 + dVar49;
        dVar79 = dVar79 + dVar79;
        dVar41 = (double)local_368._0_8_ +
                 (dVar49 * dStack_380 - dVar59 * dVar74) + dVar72 * dVar58 + dVar71;
        dVar59 = (double)local_368._8_8_ +
                 (dVar58 * dVar59 - dVar49 * local_388) + dVar72 * dVar74 + dVar48;
        local_378 = local_378 +
                    (dVar74 * local_388 - dStack_380 * dVar58) + dVar72 * dVar49 + dVar75;
        dStack_370 = dStack_370 + (dVar79 * dVar72 - dVar79 * dVar72) + dVar72 * dVar79 + dVar57;
        uVar9 = 0;
      }
      else {
        dVar57 = dStack_380 + dStack_380;
        dVar74 = dVar59 + dVar59;
        dVar41 = local_388 * (local_388 + local_388);
        local_1e8 = (double)DAT_149934d80 - (dVar59 * dVar74 + dStack_380 * dVar57);
        dStack_1c0 = DAT_149934d80._8_8_ - (dVar59 * dVar74 + dVar41);
        local_198 = 1.0 - (dVar41 + dStack_380 * dVar57);
        dStack_1a0 = (local_388 + local_388) * dVar72;
        dStack_1e0 = dVar57 * local_388 + dVar74 * dVar72;
        local_1b8 = dVar74 * dStack_380 + dStack_1a0;
        local_1c8 = dVar57 * local_388 - dVar74 * dVar72;
        dStack_1a0 = dVar74 * dStack_380 - dStack_1a0;
        local_1a8 = dVar57 * dVar72 + local_388 * dVar74;
        local_1d8 = local_388 * dVar74 - dVar57 * dVar72;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_368;
        local_178 = local_378;
        uStack_170 = 0x3ff0000000000000;
        dVar41 = (double)CONCAT44(uVar98,uVar9) + (double)CONCAT44(uVar98,uVar9);
        dVar57 = (double)CONCAT44(uVar99,uVar13) + (double)CONCAT44(uVar99,uVar13);
        dVar79 = dVar49 + dVar49;
        dVar59 = (double)CONCAT44(uVar98,uVar9) * dVar41;
        dVar72 = (double)CONCAT44(uVar99,uVar13) * dVar57;
        local_268 = ((double)DAT_149934d80 - (dVar49 * dVar79 + dVar72)) * dVar85;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar49 * dVar79 + dVar59)) * dVar92;
        dVar49 = dVar57 * (double)CONCAT44(uVar98,uVar9);
        dVar74 = dVar79 * (double)CONCAT44(uVar99,uVar13);
        dVar75 = (double)CONCAT44(uVar98,uVar9) * dVar79;
        dVar41 = dVar41 * dVar58;
        local_248 = (dVar49 - dVar79 * dVar58) * dVar92;
        dStack_220 = (dVar74 - dVar41) * dVar97;
        local_228 = (dVar75 + dVar57 * dVar58) * dVar97;
        dStack_260 = (dVar49 + dVar79 * dVar58) * dVar85;
        local_238 = (dVar74 + dVar41) * dVar92;
        local_258 = (dVar75 - dVar57 * dVar58) * dVar85;
        uStack_250 = 0;
        uStack_230 = 0;
        local_218 = (1.0 - (dVar59 + dVar72)) * dVar97;
        uStack_210 = 0;
        uStack_1f0 = 0x3ff0000000000000;
        local_208 = dVar71;
        dStack_200 = dVar48;
        local_1f8 = dVar56;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar26._8_8_ = -(ulonglong)(0.0 <= dVar92);
        auVar26._0_8_ = -(ulonglong)(0.0 <= dVar85);
        auVar42 = blendvpd(_DAT_149936790,auVar62,auVar26);
        uVar20 = -(ulonglong)(0.0 <= dVar97 * 1.0);
        dVar41 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
        dVar49 = auVar42._0_8_;
        uStack_158 = (double)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158) * dVar49;
        uStack_160 = (double)CONCAT44(uStack_160._4_4_,(uint)uStack_160) * dVar49;
        local_168 = local_168 * dVar49;
        dVar49 = auVar42._8_8_;
        local_138 = local_138 * dVar49;
        dStack_140 = dStack_140 * dVar49;
        local_148 = dVar49 * local_148;
        local_118 = local_118 * dVar41;
        dStack_120 = dStack_120 * dVar41;
        dVar41 = dVar41 * (double)CONCAT62(uStack_126,CONCAT11(cStack_127,local_128));
        local_128 = SUB81(dVar41,0);
        cStack_127 = (char)((ulonglong)dVar41 >> 8);
        uStack_126 = (undefined6)((ulonglong)dVar41 >> 0x10);
        pdVar15 = &local_288;
        iVar10 = FUN_14481fd10(pdVar15,&local_168);
        uVar9 = SUB84(pdVar15,0);
        dVar41 = local_278 * local_278 + local_288 * local_288;
        dVar49 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar50._0_8_ = dVar41 + dVar49;
        auVar50._8_8_ = dVar41 + dVar49;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
        auVar42 = sqrtpd(auVar50,auVar50);
        auVar62 = divpd(auVar62,auVar42);
        auVar63._0_8_ = auVar62._0_8_ * local_278;
        auVar63._8_8_ = auVar62._8_8_ * dStack_270;
        local_348 = (double)((ulonglong)(local_288 * auVar62._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
        dStack_340 = (double)((ulonglong)(dStack_280 * auVar62._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
        auVar96 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar27);
        local_378 = local_f8;
        dStack_370 = 0.0;
        dVar41 = local_108;
        dVar59 = dStack_100;
      }
      auVar62 = _DAT_149934d80;
      dVar58 = auVar22._8_8_ * 0.0;
      dVar49 = dVar97 * 1.0;
      local_368._8_4_ = SUB84(dVar59,0);
      local_368._0_8_ = dVar41;
      local_368._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
      auVar64._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar92));
      auVar64._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar85));
      uVar13 = movmskpd(iVar10,auVar64);
      auVar65._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar22._8_8_));
      auVar65._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar97));
      iVar10 = movmskpd(uVar9,auVar65);
      uVar14 = iVar10 << 2 | uVar13;
      if (uVar14 == 0) {
        dStack_380 = DAT_14c8464b8;
        local_388 = DAT_14c8464b0;
        auVar51 = _DAT_14c8464c0;
        local_398 = _DAT_14c8464d0;
        dVar56 = DAT_14c846490;
        dVar57 = DAT_14c846498;
        dVar71 = DAT_14c8464a0;
        dVar41 = DAT_14c8464a8;
        dVar92 = DAT_14c846480;
        dVar59 = DAT_14c846488;
      }
      else {
        auVar42 = divpd(_DAT_149934d80,auVar95);
        auVar22 = divpd(ZEXT816(0x3ff0000000000000),auVar22);
        auVar51._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar85)) & auVar42._0_8_);
        auVar51._8_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar92)) & auVar42._8_8_);
        dVar41 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar97)) & auVar22._0_8_);
        auVar105._8_8_ = 0;
        auVar105._0_8_ = dVar41;
        dVar92 = -(double)CONCAT44(local_328._4_4_,(undefined4)local_328);
        dVar59 = -(double)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
        dVar56 = (double)local_358._0_8_ * -1.0;
        dVar57 = (double)local_358._8_8_ * 1.0;
        dVar71 = dVar71 * auVar51._0_8_;
        dVar48 = dVar48 * auVar51._8_8_;
        local_398._0_8_ = (double)local_398._0_8_ * dVar41;
        dVar41 = dVar48 * dVar92 - dVar59 * dVar71;
        dVar97 = (double)local_398._0_8_ * dVar59 - dVar56 * dVar48;
        dVar72 = dVar71 * dVar56 - dVar92 * (double)local_398._0_8_;
        dVar97 = dVar97 + dVar97;
        dVar72 = dVar72 + dVar72;
        dVar41 = dVar41 + dVar41;
        local_388 = 0.0 - (dVar57 * dVar41 + (double)local_398._0_8_ +
                          (dVar72 * dVar92 - dVar97 * dVar59));
        dStack_380 = 0.0;
        local_398 = auVar105;
        dVar71 = 0.0 - ((dVar41 * dVar59 - dVar72 * dVar56) + dVar57 * dVar97 + dVar71);
        dVar41 = 0.0 - (dVar41 * (double)CONCAT44(local_328._4_4_,(undefined4)local_328) +
                        dVar56 * dVar97 + dVar57 * dVar72 + dVar48);
      }
      auVar22 = *(undefined1 (*) [16])(param_3 + 0x24);
      dVar48 = auVar22._0_8_;
      dVar72 = auVar22._8_8_;
      auVar42 = *(undefined1 (*) [16])(param_3 + 0x26);
      dVar97 = auVar42._0_8_;
      auVar22 = minpd(auVar22,auVar51);
      auVar44 = minpd(auVar42,local_398);
      auVar28._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      iVar10 = movmskpd(uVar13,auVar28);
      auVar46._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
      auVar46._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
      uVar13 = movmskpd(uVar14,auVar46);
      dVar85 = auVar51._0_8_;
      dVar74 = auVar51._8_8_;
      local_358 = auVar96;
      local_308 = auVar95;
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar75 = (double)param_3[0x1c];
        dVar79 = (double)param_3[0x1d];
        dVar93 = (double)param_3[0x1e];
        dVar104 = (double)param_3[0x1f];
        dVar60 = dVar79 * dVar56 * -1.0 + dVar93 * dVar59 + dVar92 * dVar104 * 1.0 + dVar57 * dVar75
        ;
        dVar73 = dVar75 * dVar56 * 1.0 + dVar104 * dVar59 + dVar92 * dVar93 * -1.0 + dVar57 * dVar79
        ;
        auVar81._0_8_ =
             dVar104 * dVar56 * 1.0 + ((dVar92 * dVar79 * 1.0 + dVar57 * dVar93) - dVar59 * dVar75);
        auVar81._8_8_ =
             dVar93 * dVar56 * -1.0 +
             ((dVar92 * dVar75 * -1.0 + dVar57 * dVar104) - dVar59 * dVar79);
        dVar84 = (double)param_3[0x20] * dVar85;
        dVar94 = (double)param_3[0x21] * dVar74;
        dVar93 = (double)param_3[0x22] * (double)local_398._0_8_;
        dVar104 = (double)param_3[0x23] * (double)local_398._8_8_;
        dVar75 = dVar94 * dVar92 - dVar59 * dVar84;
        dVar86 = dVar93 * dVar59 - dVar56 * dVar94;
        dVar83 = dVar84 * dVar56 - dVar92 * dVar93;
        dVar79 = dVar104 * dVar57 - dVar57 * dVar104;
        dVar86 = dVar86 + dVar86;
        dVar83 = dVar83 + dVar83;
        dVar75 = dVar75 + dVar75;
        dVar79 = dVar79 + dVar79;
        dVar41 = dVar41 + (dVar86 * dVar56 - dVar75 * dVar92) + dVar57 * dVar83 + dVar94;
        local_338._8_4_ = SUB84(dVar41,0);
        local_338._0_8_ = dVar71 + (dVar75 * dVar59 - dVar56 * dVar83) + dVar57 * dVar86 + dVar84;
        local_338._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        local_388 = local_388 + (dVar83 * dVar92 - dVar59 * dVar86) + dVar57 * dVar75 + dVar93;
        dStack_380 = dStack_380 + (dVar79 * dVar57 - dVar79 * dVar57) + dVar57 * dVar79 + dVar104;
        auVar102._8_8_ = auVar42._8_8_ * (double)local_398._8_8_;
        auVar102._0_8_ = dVar97 * (double)local_398._0_8_;
        auVar106._8_8_ = dVar72 * dVar74;
        auVar106._0_8_ = dVar48 * dVar85;
        uVar9 = 0;
      }
      else {
        dVar79 = dVar59 + dVar59;
        dVar104 = dVar56 + dVar56;
        dVar75 = dVar92 * (dVar92 + dVar92);
        local_1e8 = (1.0 - (dVar56 * dVar104 + dVar59 * dVar79)) * dVar85;
        dStack_1c0 = (1.0 - (dVar56 * dVar104 + dVar75)) * dVar74;
        dVar56 = (dVar92 + dVar92) * dVar57;
        local_1c8 = (dVar79 * dVar92 - dVar104 * dVar57) * dVar74;
        dStack_1a0 = (dVar104 * dVar59 - dVar56) * (double)local_398._0_8_;
        local_1a8 = (dVar92 * dVar104 + dVar79 * dVar57) * (double)local_398._0_8_;
        local_198 = (1.0 - (dVar75 + dVar59 * dVar79)) * (double)local_398._0_8_;
        dVar93 = (double)local_398._0_8_ * dVar97;
        dStack_1e0 = (dVar79 * dVar92 + dVar104 * dVar57) * dVar85;
        local_1b8 = (dVar104 * dVar59 + dVar56) * dVar74;
        local_1d8 = (dVar92 * dVar104 - dVar79 * dVar57) * dVar85;
        auVar102._8_8_ = (double)local_398._8_8_ * auVar42._8_8_;
        auVar102._0_8_ = dVar93;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_4_ = SUB84(dVar41,0);
        local_188._0_8_ = dVar71;
        local_188._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        local_178 = local_388;
        uStack_170 = 0x3ff0000000000000;
        dVar71 = (double)param_3[0x1c];
        dVar56 = (double)param_3[0x1d];
        dVar57 = (double)param_3[0x1e];
        dVar92 = dVar56 + dVar56;
        dVar59 = dVar57 + dVar57;
        dVar104 = dVar71 * (dVar71 + dVar71);
        local_218 = (1.0 - (dVar104 + dVar56 * dVar92)) * dVar97;
        dVar41 = (double)param_3[0x1f];
        dVar75 = dVar59 * dVar41;
        dVar79 = (dVar71 + dVar71) * (double)param_3[0x1f];
        dVar41 = dVar92 * dVar41;
        local_228 = (dVar41 + (double)param_3[0x1c] * dVar59) * dVar97;
        local_248 = (dVar92 * dVar71 - dVar75) * dVar72;
        dStack_220 = (dVar59 * dVar56 - dVar79) * dVar97;
        auVar106._0_8_ = dVar85 * dVar48;
        auVar106._8_8_ = dVar74 * dVar72;
        local_268 = ((double)DAT_149934d80 - (dVar57 * dVar59 + dVar56 * dVar92)) * dVar48;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar57 * dVar59 + dVar104)) * dVar72;
        dStack_260 = (dVar92 * dVar71 + dVar75) * dVar48;
        local_238 = (dVar59 * dVar56 + dVar79) * dVar72;
        local_258 = ((double)param_3[0x1c] * dVar59 - dVar41) * dVar48;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = (double)param_3[0x20];
        dStack_200 = (double)param_3[0x21];
        local_1f8 = (double)param_3[0x22];
        uStack_1f0 = 0x3ff0000000000000;
        local_328 = dVar49;
        uStack_320 = dVar58;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar29._8_8_ = -(ulonglong)(0.0 <= auVar106._8_8_);
        auVar29._0_8_ = -(ulonglong)(0.0 <= auVar106._0_8_);
        auVar95 = blendvpd(_DAT_149936790,auVar62,auVar29);
        uVar20 = -(ulonglong)(0.0 <= dVar93);
        dVar41 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
        dVar71 = auVar95._0_8_;
        uStack_158 = uStack_158 * dVar71;
        uStack_160 = uStack_160 * dVar71;
        local_168 = local_168 * dVar71;
        dVar71 = auVar95._8_8_;
        local_138 = local_138 * dVar71;
        dStack_140 = dStack_140 * dVar71;
        local_148 = dVar71 * local_148;
        local_118 = local_118 * dVar41;
        dStack_120 = dStack_120 * dVar41;
        dVar41 = dVar41 * (double)CONCAT62(uStack_126,CONCAT11(cStack_127,local_128));
        local_128 = SUB81(dVar41,0);
        cStack_127 = (char)((ulonglong)dVar41 >> 8);
        uStack_126 = (undefined6)((ulonglong)dVar41 >> 0x10);
        pdVar15 = &local_288;
        iVar10 = FUN_14481fd10(pdVar15,&local_168);
        uVar9 = SUB84(pdVar15,0);
        dVar41 = local_278 * local_278 + local_288 * local_288;
        dVar71 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar52._0_8_ = dVar41 + dVar71;
        auVar52._8_8_ = dVar41 + dVar71;
        auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
        auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
        auVar95 = sqrtpd(auVar52,auVar52);
        auVar95 = divpd(auVar62,auVar95);
        auVar77._0_8_ = auVar95._0_8_ * local_278;
        auVar77._8_8_ = auVar95._8_8_ * dStack_270;
        dVar60 = (double)((ulonglong)(local_288 * auVar95._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
        dVar73 = (double)((ulonglong)(dStack_280 * auVar95._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
        auVar81 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar77,auVar30);
        local_338._8_8_ = dStack_100;
        local_338._0_8_ = local_108;
        dStack_380 = 0.0;
        local_388 = local_f8;
        dVar49 = local_328;
        dVar58 = uStack_320;
      }
      auVar95 = _DAT_149934d80;
      dVar41 = local_2a8._0_8_;
      dVar48 = local_2a8._8_8_;
      dVar71 = local_298._0_8_;
      dVar56 = local_298._8_8_;
      auVar62 = minpd(auVar106,local_2a8);
      dVar59 = auVar102._0_8_;
      auVar22 = minpd(auVar102,local_298);
      auVar31._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
      auVar31._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
      iVar10 = movmskpd(iVar10,auVar31);
      auVar47._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar13 = movmskpd(uVar9,auVar47);
      dVar57 = auVar81._0_8_;
      dVar92 = auVar81._8_8_;
      local_398._0_8_ = auVar106._0_8_;
      local_398._8_8_ = auVar106._8_8_;
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar74 = dVar73 * local_2d8 * -1.0 +
                 dVar57 * dStack_2e0 + dVar92 * local_2e8 * 1.0 + dVar60 * dStack_2d0;
        dVar75 = dVar60 * local_2d8 * 1.0 +
                 dVar92 * dStack_2e0 + dVar57 * local_2e8 * -1.0 + dVar73 * dStack_2d0;
        auVar100._0_8_ =
             dVar92 * local_2d8 * 1.0 +
             ((local_2e8 * dVar73 * 1.0 + dVar57 * dStack_2d0) - dVar60 * dStack_2e0);
        auVar100._8_8_ =
             dVar57 * local_2d8 * -1.0 +
             ((local_2e8 * dVar60 * -1.0 + dVar92 * dStack_2d0) - dVar73 * dStack_2e0);
        dVar97 = (double)local_338._0_8_ * dVar41;
        dVar79 = (double)local_338._8_8_ * dVar48;
        dVar93 = local_388 * dVar71;
        dVar104 = dStack_380 * dVar56;
        dVar57 = dVar79 * local_2e8 - dVar97 * dStack_2e0;
        dVar85 = dVar93 * dStack_2e0 - dVar79 * local_2d8;
        dVar72 = dVar97 * local_2d8 - dVar93 * local_2e8;
        dVar92 = dVar104 * dStack_2d0 - dVar104 * dStack_2d0;
        dVar85 = dVar85 + dVar85;
        dVar72 = dVar72 + dVar72;
        dVar57 = dVar57 + dVar57;
        dVar92 = dVar92 + dVar92;
        auVar87._0_8_ = (double)local_398._0_8_ * dVar41;
        auVar87._8_8_ = (double)local_398._8_8_ * dVar48;
        local_388 = dVar59 * dVar71;
        dStack_380 = auVar102._8_8_ * dVar56;
        dVar59 = (dVar57 * dStack_2e0 - local_2d8 * dVar72) + dStack_2d0 * dVar85 + dVar97 +
                 local_2c8;
        dVar97 = (dVar85 * local_2d8 - dVar57 * local_2e8) + dStack_2d0 * dVar72 + dVar79 +
                 dStack_2c0;
        dVar41 = (dVar72 * local_2e8 - dStack_2e0 * dVar85) + dStack_2d0 * dVar57 + dVar93 +
                 local_2b8;
        dVar71 = (dVar92 * dStack_2d0 - dVar92 * dStack_2d0) + dStack_2d0 * dVar92 + dVar104 +
                 dStack_2b0;
        uVar9 = 0;
      }
      else {
        dVar72 = dStack_2e0 + dStack_2e0;
        dVar85 = local_2d8 + local_2d8;
        dVar97 = local_2e8 * (local_2e8 + local_2e8);
        local_198 = (1.0 - (dVar97 + dStack_2e0 * dVar72)) * dVar71;
        dVar74 = (local_2e8 + local_2e8) * dStack_2d0;
        local_1a8 = (dVar72 * dStack_2d0 + local_2e8 * dVar85) * dVar71;
        local_1c8 = (dVar72 * local_2e8 - dVar85 * dStack_2d0) * dVar48;
        dStack_1a0 = (dVar85 * dStack_2e0 - dVar74) * dVar71;
        auVar87._0_8_ = (double)local_398._0_8_ * dVar41;
        auVar87._8_8_ = (double)local_398._8_8_ * dVar48;
        local_1e8 = (1.0 - (local_2d8 * dVar85 + dStack_2e0 * dVar72)) * dVar41;
        dStack_1c0 = (1.0 - (local_2d8 * dVar85 + dVar97)) * dVar48;
        dStack_1e0 = (dVar72 * local_2e8 + dVar85 * dStack_2d0) * dVar41;
        local_1b8 = (dVar85 * dStack_2e0 + dVar74) * dVar48;
        local_1d8 = (local_2e8 * dVar85 - dVar72 * dStack_2d0) * dVar41;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_8_ = dStack_2c0;
        local_188._0_8_ = local_2c8;
        local_178 = local_2b8;
        uStack_170 = 0x3ff0000000000000;
        dVar48 = dVar73 + dVar73;
        dVar97 = dVar57 + dVar57;
        dVar41 = dVar60 * (dVar60 + dVar60);
        local_218 = (1.0 - (dVar41 + dVar73 * dVar48)) * dVar59;
        dVar72 = (dVar60 + dVar60) * dVar92;
        local_228 = (dVar60 * dVar97 + dVar48 * dVar92) * dVar59;
        local_248 = (dVar48 * dVar60 - dVar97 * dVar92) * (double)local_398._8_8_;
        dStack_220 = (dVar97 * dVar73 - dVar72) * dVar59;
        local_268 = ((double)DAT_149934d80 - (dVar57 * dVar97 + dVar73 * dVar48)) *
                    (double)local_398._0_8_;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar57 * dVar97 + dVar41)) * (double)local_398._8_8_;
        dStack_260 = (dVar48 * dVar60 + dVar97 * dVar92) * (double)local_398._0_8_;
        local_238 = (dVar97 * dVar73 + dVar72) * (double)local_398._8_8_;
        local_258 = (dVar60 * dVar97 - dVar48 * dVar92) * (double)local_398._0_8_;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = (double)local_338._0_8_;
        dStack_200 = (double)local_338._8_8_;
        uStack_1f0 = 0x3ff0000000000000;
        local_398 = auVar106;
        local_318 = auVar102;
        local_1f8 = local_388;
        local_328 = dVar49;
        uStack_320 = dVar58;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar32._8_8_ = -(ulonglong)(0.0 <= auVar87._8_8_);
        auVar32._0_8_ = -(ulonglong)(0.0 <= auVar87._0_8_);
        auVar62 = blendvpd(_DAT_149936790,auVar95,auVar32);
        uVar20 = -(ulonglong)(0.0 <= dVar59 * dVar71);
        dVar41 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
        dVar48 = auVar62._0_8_;
        uStack_158 = uStack_158 * dVar48;
        uStack_160 = uStack_160 * dVar48;
        local_168 = local_168 * dVar48;
        dVar48 = auVar62._8_8_;
        local_138 = local_138 * dVar48;
        dStack_140 = dStack_140 * dVar48;
        local_148 = dVar48 * local_148;
        local_118 = local_118 * dVar41;
        dStack_120 = dStack_120 * dVar41;
        dVar41 = dVar41 * (double)CONCAT62(uStack_126,CONCAT11(cStack_127,local_128));
        local_128 = SUB81(dVar41,0);
        cStack_127 = (char)((ulonglong)dVar41 >> 8);
        uStack_126 = (undefined6)((ulonglong)dVar41 >> 0x10);
        pdVar15 = &local_288;
        local_388 = dVar59 * dVar71;
        dStack_380 = auVar102._8_8_ * dVar56;
        iVar10 = FUN_14481fd10(pdVar15,&local_168);
        uVar9 = SUB84(pdVar15,0);
        dVar41 = local_278 * local_278 + local_288 * local_288;
        dVar71 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar53._0_8_ = dVar41 + dVar71;
        auVar53._8_8_ = dVar41 + dVar71;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
        auVar62 = sqrtpd(auVar53,auVar53);
        auVar95 = divpd(auVar95,auVar62);
        auVar66._0_8_ = auVar95._0_8_ * local_278;
        auVar66._8_8_ = auVar95._8_8_ * dStack_270;
        dVar74 = (double)((ulonglong)(local_288 * auVar95._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_));
        dVar75 = (double)((ulonglong)(dStack_280 * auVar95._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_));
        auVar100 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar33);
        dVar71 = 0.0;
        dVar41 = local_f8;
        dVar59 = local_108;
        dVar97 = dStack_100;
        dVar49 = local_328;
        dVar58 = uStack_320;
      }
      auVar95 = _DAT_149934d80;
      uStack_320._4_4_ = (undefined4)((ulonglong)dVar58 >> 0x20);
      uStack_320._0_4_ = SUB84(dVar58,0);
      dVar57 = local_308._0_8_;
      dVar72 = local_308._8_8_;
      auVar22 = minpd(auVar87,local_308);
      auVar6._8_8_ = dStack_380;
      auVar6._0_8_ = local_388;
      auVar7._8_4_ = (uint)uStack_320;
      auVar7._0_8_ = dVar49;
      auVar7._12_4_ = uStack_320._4_4_;
      dVar48 = auVar7._8_8_;
      auVar62 = minpd(auVar6,auVar7);
      auVar88._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar88._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      iVar10 = movmskpd(iVar10,auVar88);
      auVar67._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
      auVar67._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
      uVar13 = movmskpd(uVar9,auVar67);
      dVar85 = auVar100._0_8_;
      dVar79 = auVar100._8_8_;
      local_398._0_8_ = auVar87._0_8_;
      local_398._8_8_ = auVar87._8_8_;
      local_398 = auVar87;
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar92 = dVar75 * (double)local_358._0_8_ * -1.0 +
                 dVar85 * dStack_340 + local_348 * dVar79 * 1.0 + (double)local_358._8_8_ * dVar74;
        dVar93 = dVar74 * (double)local_358._0_8_ * 1.0 +
                 dVar79 * dStack_340 + local_348 * dVar85 * -1.0 + (double)local_358._8_8_ * dVar75;
        auVar82._0_8_ =
             dVar79 * (double)local_358._0_8_ * 1.0 +
             ((local_348 * dVar75 * 1.0 + (double)local_358._8_8_ * dVar85) - dStack_340 * dVar74);
        auVar82._8_8_ =
             dVar85 * (double)local_358._0_8_ * -1.0 +
             ((local_348 * dVar74 * -1.0 + (double)local_358._8_8_ * dVar79) - dStack_340 * dVar75);
        dVar59 = dVar59 * dVar57;
        dVar97 = dVar97 * dVar72;
        dVar41 = dVar41 * dVar49;
        dVar71 = dVar71 * dVar48;
        dVar56 = dVar97 * local_348 - dStack_340 * dVar59;
        dVar85 = dVar41 * dStack_340 - (double)local_358._0_8_ * dVar97;
        dVar74 = dVar59 * (double)local_358._0_8_ - local_348 * dVar41;
        dVar75 = dVar71 * (double)local_358._8_8_ - (double)local_358._8_8_ * dVar71;
        dVar85 = dVar85 + dVar85;
        dVar74 = dVar74 + dVar74;
        dVar56 = dVar56 + dVar56;
        dVar75 = dVar75 + dVar75;
        local_108 = (double)local_368._0_8_ +
                    (dVar56 * dStack_340 - (double)local_358._0_8_ * dVar74) +
                    (double)local_358._8_8_ * dVar85 + dVar59;
        dStack_100 = (double)local_368._8_8_ +
                     (dVar85 * (double)local_358._0_8_ - dVar56 * local_348) +
                     (double)local_358._8_8_ * dVar74 + dVar97;
        local_f8 = local_378 +
                   (dVar74 * local_348 - dStack_340 * dVar85) +
                   (double)local_358._8_8_ * dVar56 + dVar41;
        dVar41 = dStack_370 +
                 (dVar75 * (double)local_358._8_8_ - dVar75 * (double)local_358._8_8_) +
                 (double)local_358._8_8_ * dVar75 + dVar71;
        dVar71 = (double)local_398._0_8_ * dVar57;
        dVar56 = (double)local_398._8_8_ * dVar72;
        dVar57 = local_388 * dVar49;
        dVar48 = dStack_380 * dVar48;
      }
      else {
        dVar84 = dStack_340 + dStack_340;
        dVar94 = (double)local_358._0_8_ + (double)local_358._0_8_;
        dVar93 = local_348 * (local_348 + local_348);
        dVar92 = (double)local_358._0_8_ * dVar94;
        dVar60 = dVar94 * (double)local_358._8_8_;
        dVar73 = (local_348 + local_348) * (double)local_358._8_8_;
        dVar104 = dVar84 * (double)local_358._8_8_;
        local_1c8 = (dVar84 * local_348 - dVar60) * dVar72;
        dStack_1a0 = (dVar94 * dStack_340 - dVar73) * dVar49;
        local_358._8_8_ = dVar71;
        local_358._0_8_ = dVar41;
        dVar71 = (double)local_398._0_8_ * dVar57;
        dVar56 = (double)local_398._8_8_ * dVar72;
        local_1e8 = ((double)DAT_149934d80 - (dVar92 + dStack_340 * dVar84)) * dVar57;
        dStack_1c0 = (DAT_149934d80._8_8_ - (dVar92 + dVar93)) * dVar72;
        dStack_1e0 = (dVar84 * local_348 + dVar60) * dVar57;
        local_1b8 = (dVar94 * dStack_340 + dVar73) * dVar72;
        local_1d8 = (local_348 * dVar94 - dVar104) * dVar57;
        local_1a8 = (local_348 * dVar94 + dVar104) * dVar49;
        uStack_1d0 = 0;
        local_198 = (1.0 - (dVar93 + dStack_340 * dVar84)) * dVar49;
        dVar57 = dVar49 * local_388;
        dVar48 = dVar48 * dStack_380;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_368;
        local_178 = local_378;
        uStack_170 = 0x3ff0000000000000;
        dVar93 = dVar75 + dVar75;
        dVar92 = dVar85 + dVar85;
        dVar104 = dVar74 * (dVar74 + dVar74);
        local_218 = (1.0 - (dVar104 + dVar75 * dVar93)) * local_388;
        dVar72 = (dVar74 + dVar74) * dVar79;
        local_228 = (dVar74 * dVar92 + dVar93 * dVar79) * local_388;
        local_248 = (dVar93 * dVar74 - dVar92 * dVar79) * (double)local_398._8_8_;
        dStack_220 = (dVar92 * dVar75 - dVar72) * local_388;
        local_268 = ((double)DAT_149934d80 - (dVar85 * dVar92 + dVar75 * dVar93)) *
                    (double)local_398._0_8_;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar85 * dVar92 + dVar104)) * (double)local_398._8_8_;
        dStack_260 = (dVar93 * dVar74 + dVar92 * dVar79) * (double)local_398._0_8_;
        local_238 = (dVar92 * dVar75 + dVar72) * (double)local_398._8_8_;
        local_258 = (dVar74 * dVar92 - dVar93 * dVar79) * (double)local_398._0_8_;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        uStack_1f0 = 0x3ff0000000000000;
        local_348 = dVar71;
        dStack_340 = dVar56;
        local_208 = dVar59;
        dStack_200 = dVar97;
        local_1f8 = dVar41;
        local_328 = dVar49;
        uStack_320 = dVar58;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar34._8_8_ = -(ulonglong)(0.0 <= dVar56);
        auVar34._0_8_ = -(ulonglong)(0.0 <= dVar71);
        auVar62 = blendvpd(_DAT_149936790,auVar95,auVar34);
        dVar41 = (double)(~-(ulonglong)(0.0 <= dVar57) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar57) & 0x3ff0000000000000);
        dVar49 = auVar62._0_8_;
        uStack_158 = uStack_158 * dVar49;
        uStack_160 = uStack_160 * dVar49;
        local_168 = local_168 * dVar49;
        dVar49 = auVar62._8_8_;
        local_138 = local_138 * dVar49;
        dStack_140 = dStack_140 * dVar49;
        local_148 = dVar49 * local_148;
        local_118 = local_118 * dVar41;
        dStack_120 = dStack_120 * dVar41;
        dVar41 = dVar41 * (double)CONCAT62(uStack_126,CONCAT11(cStack_127,local_128));
        local_128 = SUB81(dVar41,0);
        cStack_127 = (char)((ulonglong)dVar41 >> 8);
        uStack_126 = (undefined6)((ulonglong)dVar41 >> 0x10);
        FUN_14481fd10(&local_288,&local_168);
        auVar54._0_8_ = local_288 * local_288;
        auVar54._8_8_ = dStack_280 * dStack_280;
        dVar41 = local_278 * local_278 + auVar54._0_8_;
        dVar49 = dStack_270 * dStack_270 + auVar54._8_8_;
        auVar68._0_8_ = dVar41 + dVar49;
        auVar68._8_8_ = dVar41 + dVar49;
        auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar68._8_8_);
        auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar68._0_8_);
        auVar62 = sqrtpd(auVar54,auVar68);
        auVar95 = divpd(auVar95,auVar62);
        auVar89._0_8_ = auVar95._0_8_ * local_278;
        auVar89._8_8_ = auVar95._8_8_ * dStack_270;
        dVar92 = (double)((ulonglong)(local_288 * auVar95._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar68._0_8_));
        dVar93 = (double)((ulonglong)(dStack_280 * auVar95._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar68._8_8_));
        dVar49 = local_328;
        dVar58 = uStack_320;
LAB_1475d1fb4:
        auVar82 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar89,auVar35);
        dVar41 = 0.0;
      }
    }
    else {
      dVar71 = local_2a8._0_8_;
      dVar56 = local_2a8._8_8_;
      dVar48 = local_298._0_8_;
      dVar57 = local_298._8_8_;
      auVar95 = *(undefined1 (*) [16])(param_3 + 0x24);
      dVar49 = auVar95._0_8_;
      dVar92 = auVar95._8_8_;
      auVar62 = *(undefined1 (*) [16])(param_3 + 0x26);
      dVar58 = auVar62._0_8_;
      auVar95 = minpd(auVar95,local_2a8);
      auVar22 = minpd(auVar62,local_298);
      auVar44._8_8_ = -(ulonglong)(auVar95._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar95._0_8_ < 0.0);
      iVar10 = movmskpd((int)DAT_14cab53a8,auVar44);
      auVar55._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar55._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar13 = movmskpd(SUB84(dVar41,0),auVar55);
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar41 = (double)param_3[0x1c];
        dVar97 = (double)param_3[0x1d];
        dVar85 = (double)param_3[0x1e];
        dVar74 = (double)param_3[0x1f];
        dVar75 = dVar97 * local_2d8 * -1.0 +
                 dVar85 * dStack_2e0 + dVar74 * local_2e8 * 1.0 + dVar41 * dStack_2d0;
        dVar79 = dVar41 * local_2d8 * 1.0 +
                 dVar74 * dStack_2e0 + dVar85 * local_2e8 * -1.0 + dVar97 * dStack_2d0;
        auVar103._0_8_ =
             dVar74 * local_2d8 * 1.0 +
             ((local_2e8 * dVar97 * 1.0 + dVar85 * dStack_2d0) - dVar41 * dStack_2e0);
        auVar103._8_8_ =
             dVar85 * local_2d8 * -1.0 +
             ((local_2e8 * dVar41 * -1.0 + dVar74 * dStack_2d0) - dVar97 * dStack_2e0);
        dVar41 = (double)param_3[0x20] * dVar71;
        dVar85 = (double)param_3[0x21] * dVar56;
        dVar74 = (double)param_3[0x22] * dVar48;
        dVar93 = (double)param_3[0x23] * dVar57;
        dVar104 = dVar85 * local_2e8 - dStack_2e0 * dVar41;
        dVar84 = dVar74 * dStack_2e0 - local_2d8 * dVar85;
        dVar94 = dVar41 * local_2d8 - local_2e8 * dVar74;
        dVar60 = dVar93 * dStack_2d0 - dStack_2d0 * dVar93;
        dVar84 = dVar84 + dVar84;
        dVar94 = dVar94 + dVar94;
        dVar104 = dVar104 + dVar104;
        dVar60 = dVar60 + dVar60;
        dVar97 = (dVar104 * dStack_2e0 - local_2d8 * dVar94) + dStack_2d0 * dVar84 + dVar41 +
                 local_2c8;
        dVar85 = (dVar84 * local_2d8 - dVar104 * local_2e8) + dStack_2d0 * dVar94 + dVar85 +
                 dStack_2c0;
        dVar41 = (dVar94 * local_2e8 - dStack_2e0 * dVar84) + dStack_2d0 * dVar104 + dVar74 +
                 local_2b8;
        dVar74 = (dVar60 * dStack_2d0 - dVar60 * dStack_2d0) + dStack_2d0 * dVar60 + dVar93 +
                 dStack_2b0;
        auVar90._0_8_ = dVar58 * dVar48;
        auVar90._8_8_ = auVar62._8_8_ * dVar57;
        uVar9 = 0;
      }
      else {
        dVar41 = dStack_2e0 + dStack_2e0;
        dVar85 = local_2d8 + local_2d8;
        dVar97 = local_2e8 * (local_2e8 + local_2e8);
        local_198 = (1.0 - (dVar97 + dStack_2e0 * dVar41)) * dVar48;
        dVar74 = (local_2e8 + local_2e8) * dStack_2d0;
        local_1a8 = (dVar41 * dStack_2d0 + local_2e8 * dVar85) * dVar48;
        auVar90._0_8_ = dVar48 * dVar58;
        auVar90._8_8_ = dVar57 * auVar62._8_8_;
        local_1c8 = (dVar41 * local_2e8 - dVar85 * dStack_2d0) * dVar56;
        dStack_1a0 = (dVar85 * dStack_2e0 - dVar74) * dVar48;
        local_1e8 = (1.0 - (local_2d8 * dVar85 + dStack_2e0 * dVar41)) * dVar71;
        dStack_1c0 = (1.0 - (local_2d8 * dVar85 + dVar97)) * dVar56;
        dStack_1e0 = (dVar41 * local_2e8 + dVar85 * dStack_2d0) * dVar71;
        local_1b8 = (dVar85 * dStack_2e0 + dVar74) * dVar56;
        local_1d8 = (local_2e8 * dVar85 - dVar41 * dStack_2d0) * dVar71;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188._8_8_ = dStack_2c0;
        local_188._0_8_ = local_2c8;
        local_178 = local_2b8;
        uStack_170 = 0x3ff0000000000000;
        dVar48 = (double)param_3[0x1c];
        dVar57 = (double)param_3[0x1d];
        dVar97 = (double)param_3[0x1e];
        dVar85 = dVar57 + dVar57;
        dVar74 = dVar97 + dVar97;
        dVar93 = dVar48 * (dVar48 + dVar48);
        local_218 = (1.0 - (dVar93 + dVar57 * dVar85)) * dVar58;
        dVar41 = (double)param_3[0x1f];
        dVar75 = dVar74 * dVar41;
        dVar79 = (dVar48 + dVar48) * (double)param_3[0x1f];
        dVar41 = dVar85 * dVar41;
        local_228 = (dVar41 + (double)param_3[0x1c] * dVar74) * dVar58;
        local_248 = (dVar85 * dVar48 - dVar75) * dVar92;
        dStack_220 = (dVar74 * dVar57 - dVar79) * dVar58;
        local_268 = (1.0 - (dVar97 * dVar74 + dVar57 * dVar85)) * dVar49;
        dStack_240 = (1.0 - (dVar97 * dVar74 + dVar93)) * dVar92;
        dStack_260 = (dVar85 * dVar48 + dVar75) * dVar49;
        local_238 = (dVar74 * dVar57 + dVar79) * dVar92;
        local_258 = ((double)param_3[0x1c] * dVar74 - dVar41) * dVar49;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = (double)param_3[0x20];
        dStack_200 = (double)param_3[0x21];
        local_1f8 = (double)param_3[0x22];
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar95 = _DAT_149934d80;
        auVar36._8_8_ = -(ulonglong)(0.0 <= dVar56 * dVar92);
        auVar36._0_8_ = -(ulonglong)(0.0 <= dVar71 * dVar49);
        auVar62 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
        dVar41 = (double)(~-(ulonglong)(0.0 <= auVar90._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= auVar90._0_8_) & 0x3ff0000000000000);
        dVar48 = auVar62._0_8_;
        uStack_158 = (double)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158) * dVar48;
        uStack_160 = (double)CONCAT44(uStack_160._4_4_,(uint)uStack_160) * dVar48;
        local_168 = local_168 * dVar48;
        dVar48 = auVar62._8_8_;
        local_138 = local_138 * dVar48;
        dStack_140 = dStack_140 * dVar48;
        local_148 = dVar48 * local_148;
        local_118 = local_118 * dVar41;
        dStack_120 = dStack_120 * dVar41;
        dVar41 = dVar41 * (double)CONCAT62(uStack_126,CONCAT11(cStack_127,local_128));
        local_128 = SUB81(dVar41,0);
        cStack_127 = (char)((ulonglong)dVar41 >> 8);
        uStack_126 = (undefined6)((ulonglong)dVar41 >> 0x10);
        pdVar15 = &local_288;
        iVar10 = FUN_14481fd10(pdVar15,&local_168);
        uVar9 = SUB84(pdVar15,0);
        dVar41 = local_278 * local_278 + local_288 * local_288;
        dVar48 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar69._0_8_ = dVar41 + dVar48;
        auVar69._8_8_ = dVar41 + dVar48;
        auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_);
        auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_);
        auVar62 = sqrtpd(auVar69,auVar69);
        auVar95 = divpd(auVar95,auVar62);
        auVar78._0_8_ = auVar95._0_8_ * local_278;
        auVar78._8_8_ = auVar95._8_8_ * dStack_270;
        dVar75 = (double)((ulonglong)(local_288 * auVar95._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar69._0_8_));
        dVar79 = (double)((ulonglong)(dStack_280 * auVar95._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar69._8_8_));
        auVar103 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar78,auVar37);
        dVar74 = 0.0;
        dVar41 = local_f8;
        dVar97 = local_108;
        dVar85 = dStack_100;
      }
      auVar95 = _DAT_149934d80;
      dVar56 = dVar56 * dVar92;
      dVar71 = dVar71 * dVar49;
      dVar58 = (double)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
      dVar49 = (double)CONCAT44(local_328._4_4_,(undefined4)local_328);
      auVar38._8_8_ = dVar56;
      auVar38._0_8_ = dVar71;
      auVar62 = minpd(auVar38,_DAT_149934d80);
      auVar22 = minpd(auVar90,ZEXT816(0x3ff0000000000000));
      auVar39._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
      auVar39._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
      iVar10 = movmskpd(iVar10,auVar39);
      auVar91._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar91._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar13 = movmskpd(uVar9,auVar91);
      dVar48 = auVar103._0_8_;
      dVar57 = auVar103._8_8_;
      local_398._0_8_ = auVar90._0_8_;
      local_398._8_8_ = auVar90._8_8_;
      local_398 = auVar90;
      if ((uVar13 & 0x3fffffff) != 0 || iVar10 != 0) {
        dVar58 = dStack_380 + dStack_380;
        dVar92 = dVar59 + dVar59;
        dVar49 = local_388 * (local_388 + local_388);
        local_1e8 = (double)DAT_149934d80 - (dVar59 * dVar92 + dStack_380 * dVar58);
        dStack_1c0 = DAT_149934d80._8_8_ - (dVar59 * dVar92 + dVar49);
        local_198 = 1.0 - (dVar49 + dStack_380 * dVar58);
        dStack_1a0 = (local_388 + local_388) * dVar72;
        dStack_1e0 = dVar58 * local_388 + dVar92 * dVar72;
        local_1b8 = dVar92 * dStack_380 + dStack_1a0;
        local_1c8 = dVar58 * local_388 - dVar92 * dVar72;
        dStack_1a0 = dVar92 * dStack_380 - dStack_1a0;
        local_1a8 = dVar58 * dVar72 + local_388 * dVar92;
        local_1d8 = local_388 * dVar92 - dVar58 * dVar72;
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_368;
        local_178 = local_378;
        uStack_170 = 0x3ff0000000000000;
        dVar58 = dVar79 + dVar79;
        dVar92 = dVar48 + dVar48;
        dVar49 = dVar75 * (dVar75 + dVar75);
        local_268 = ((double)DAT_149934d80 - (dVar48 * dVar92 + dVar79 * dVar58)) * dVar71;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar48 * dVar92 + dVar49)) * dVar56;
        dVar48 = (dVar75 + dVar75) * dVar57;
        local_248 = (dVar58 * dVar75 - dVar92 * dVar57) * dVar56;
        dStack_220 = (dVar92 * dVar79 - dVar48) * (double)local_398._0_8_;
        local_228 = (dVar75 * dVar92 + dVar58 * dVar57) * (double)local_398._0_8_;
        dStack_260 = (dVar58 * dVar75 + dVar92 * dVar57) * dVar71;
        local_238 = (dVar92 * dVar79 + dVar48) * dVar56;
        local_258 = (dVar75 * dVar92 - dVar58 * dVar57) * dVar71;
        uStack_250 = 0;
        uStack_230 = 0;
        local_218 = (1.0 - (dVar49 + dVar79 * dVar58)) * (double)local_398._0_8_;
        uStack_210 = 0;
        uStack_1f0 = 0x3ff0000000000000;
        dVar57 = (double)local_398._0_8_ * 1.0;
        dVar48 = (double)local_398._8_8_ * 0.0;
        local_208 = dVar97;
        dStack_200 = dVar85;
        local_1f8 = dVar41;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar40._8_8_ = -(ulonglong)(0.0 <= dVar56);
        auVar40._0_8_ = -(ulonglong)(0.0 <= dVar71);
        auVar62 = blendvpd(_DAT_149936790,auVar95,auVar40);
        dVar41 = (double)(~-(ulonglong)(0.0 <= dVar57) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar57) & 0x3ff0000000000000);
        dVar49 = auVar62._0_8_;
        uStack_158 = uStack_158 * dVar49;
        uStack_160 = uStack_160 * dVar49;
        local_168 = local_168 * dVar49;
        dVar49 = auVar62._8_8_;
        local_138 = local_138 * dVar49;
        dStack_140 = dStack_140 * dVar49;
        local_148 = dVar49 * local_148;
        local_118 = local_118 * dVar41;
        dStack_120 = dStack_120 * dVar41;
        dVar41 = dVar41 * (double)CONCAT62(uStack_126,CONCAT11(cStack_127,local_128));
        local_128 = SUB81(dVar41,0);
        cStack_127 = (char)((ulonglong)dVar41 >> 8);
        uStack_126 = (undefined6)((ulonglong)dVar41 >> 0x10);
        FUN_14481fd10(&local_288,&local_168);
        dVar58 = (double)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
        dVar49 = (double)CONCAT44(local_328._4_4_,(undefined4)local_328);
        dVar41 = local_278 * local_278 + local_288 * local_288;
        dVar92 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar70._0_8_ = dVar41 + dVar92;
        auVar70._8_8_ = dVar41 + dVar92;
        auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
        auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
        auVar62 = sqrtpd(auVar70,auVar70);
        auVar95 = divpd(auVar95,auVar62);
        auVar89._0_8_ = auVar95._0_8_ * local_278;
        auVar89._8_8_ = auVar95._8_8_ * dStack_270;
        dVar92 = (double)((ulonglong)(local_288 * auVar95._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_));
        dVar93 = (double)((ulonglong)(dStack_280 * auVar95._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_));
        goto LAB_1475d1fb4;
      }
      dVar92 = dVar79 * dVar59 * -1.0 +
               dVar48 * dStack_380 + local_388 * dVar57 * 1.0 + dVar72 * dVar75;
      dVar93 = dVar75 * dVar59 * 1.0 +
               dVar57 * dStack_380 + local_388 * dVar48 * -1.0 + dVar72 * dVar79;
      auVar82._0_8_ =
           dVar57 * dVar59 * 1.0 +
           ((local_388 * dVar79 * 1.0 + dVar72 * dVar48) - dStack_380 * dVar75);
      auVar82._8_8_ =
           dVar48 * dVar59 * -1.0 +
           ((local_388 * dVar75 * -1.0 + dVar72 * dVar57) - dStack_380 * dVar79);
      dVar41 = dVar41 * 1.0;
      dVar74 = dVar74 * 0.0;
      dVar48 = dVar85 * local_388 - dStack_380 * dVar97;
      dVar75 = dVar41 * dStack_380 - dVar59 * dVar85;
      dVar79 = dVar97 * dVar59 - local_388 * dVar41;
      dVar57 = dVar74 * dVar72 - dVar72 * dVar74;
      dVar75 = dVar75 + dVar75;
      dVar79 = dVar79 + dVar79;
      dVar48 = dVar48 + dVar48;
      dVar57 = dVar57 + dVar57;
      local_108 = (double)local_368._0_8_ +
                  (dVar48 * dStack_380 - dVar59 * dVar79) + dVar72 * dVar75 + dVar97;
      dStack_100 = (double)local_368._8_8_ +
                   (dVar75 * dVar59 - dVar48 * local_388) + dVar72 * dVar79 + dVar85;
      local_f8 = local_378 + (dVar79 * local_388 - dStack_380 * dVar75) + dVar72 * dVar48 + dVar41;
      dVar41 = dStack_370 + (dVar57 * dVar72 - dVar57 * dVar72) + dVar72 * dVar57 + dVar74;
      dVar57 = (double)local_398._0_8_ * 1.0;
      dVar48 = (double)local_398._8_8_ * 0.0;
    }
    param_3[4] = dVar92;
    param_3[5] = dVar93;
    *(undefined1 (*) [16])(param_3 + 6) = auVar82;
    auVar4._8_4_ = SUB84(dStack_100,0);
    auVar4._0_8_ = local_108;
    auVar4._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 8) = auVar4;
    param_3[10] = local_f8;
    param_3[0xb] = dVar41;
    param_3[0xc] = dVar71;
    param_3[0xd] = dVar56;
    auVar5._8_4_ = SUB84(dVar48,0);
    auVar5._0_8_ = dVar57;
    auVar5._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 0xe) = auVar5;
    puVar17 = &local_168;
    local_328 = dVar49;
    uStack_320 = dVar58;
    FUN_144a2c3ca(&local_2e8,puVar17,param_3 + 4);
    param_3 = param_3 + 0x10;
  }
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *param_3 = *puVar17;
    puVar17 = puVar17 + 1;
    param_3 = param_3 + 1;
  }
LAB_1475d0124:
  if ((local_e0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d2a8c FUN_1475d2a8c body=38 status=ok
// SIG undefined FUN_1475d2a8c(void)

undefined8 FUN_1475d2a8c(undefined8 param_1,int param_2)

{
  FUN_1475b1abc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2ab2 FUN_1475d2ab2 body=55 status=ok
// SIG undefined FUN_1475d2ab2(void)

void FUN_1475d2ab2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4a48 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4a48 = FUN_140002ddd(FUN_1463463eb,uVar1,L"MovieSceneParticleParameterSectionTemplate")
    ;
  }
  return;
}



// FUNCTION 1475d2aea FUN_1475d2aea body=55 status=ok
// SIG undefined FUN_1475d2aea(void)

void FUN_1475d2aea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4a60 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4a60 = FUN_140002ddd(FUN_146346481,uVar1,L"MovieSceneParticleSectionTemplate");
  }
  return;
}



// FUNCTION 1475d2b22 FUN_1475d2b22 body=55 status=ok
// SIG undefined FUN_1475d2b22(void)

void FUN_1475d2b22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4a78 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4a78 = FUN_140002ddd(FUN_146346549,uVar1,L"MovieSceneBoolPropertySectionTemplate");
  }
  return;
}



// FUNCTION 1475d2b60 FUN_1475d2b60 body=38 status=ok
// SIG undefined FUN_1475d2b60(void)

undefined8 FUN_1475d2b60(undefined8 param_1,int param_2)

{
  FUN_14588e3f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2b86 FUN_1475d2b86 body=82 status=ok
// SIG undefined FUN_1475d2b86(void)

void FUN_1475d2b86(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_147654c34();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d2bda FUN_1475d2bda body=48 status=ok
// SIG undefined FUN_1475d2bda(void)

longlong FUN_1475d2bda(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x120;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2c12 FUN_1475d2c12 body=48 status=ok
// SIG undefined FUN_1475d2c12(void)

longlong FUN_1475d2c12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1404db826(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2c4a FUN_1475d2c4a body=48 status=ok
// SIG undefined FUN_1475d2c4a(void)

longlong FUN_1475d2c4a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_1404db826(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2c82 FUN_1475d2c82 body=48 status=ok
// SIG undefined FUN_1475d2c82(void)

longlong FUN_1475d2c82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x130;
  FUN_1404db826(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2cba FUN_1475d2cba body=48 status=ok
// SIG undefined FUN_1475d2cba(void)

longlong FUN_1475d2cba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145f88dae(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2cf2 FUN_1475d2cf2 body=29 status=ok
// SIG undefined FUN_1475d2cf2(void)

undefined8 FUN_1475d2cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2d28 FUN_1475d2d28 body=48 status=ok
// SIG undefined FUN_1475d2d28(void)

longlong FUN_1475d2d28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2d60 FUN_1475d2d60 body=48 status=ok
// SIG undefined FUN_1475d2d60(void)

longlong FUN_1475d2d60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2d98 FUN_1475d2d98 body=48 status=ok
// SIG undefined FUN_1475d2d98(void)

longlong FUN_1475d2d98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2de4 FUN_1475d2de4 body=48 status=ok
// SIG undefined FUN_1475d2de4(void)

longlong FUN_1475d2de4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145887ca0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2e14 FUN_1475d2e14 body=48 status=ok
// SIG undefined FUN_1475d2e14(void)

longlong FUN_1475d2e14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_140fba71e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2e4c FUN_1475d2e4c body=48 status=ok
// SIG undefined FUN_1475d2e4c(void)

longlong FUN_1475d2e4c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_140aeebc2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2e8c FUN_1475d2e8c body=48 status=ok
// SIG undefined FUN_1475d2e8c(void)

longlong FUN_1475d2e8c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1458c56ac(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2ebc FUN_1475d2ebc body=48 status=ok
// SIG undefined FUN_1475d2ebc(void)

longlong FUN_1475d2ebc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145d35054(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d2fe2 FUN_1475d2fe2 body=48 status=ok
// SIG undefined FUN_1475d2fe2(void)

longlong FUN_1475d2fe2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_1458c56ac(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3012 FUN_1475d3012 body=38 status=ok
// SIG undefined FUN_1475d3012(void)

undefined8 FUN_1475d3012(undefined8 param_1,int param_2)

{
  FUN_140e127fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d30e8 FUN_1475d30e8 body=63 status=ok
// SIG undefined FUN_1475d30e8(void)

undefined1 FUN_1475d30e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475b10c0(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1475d3150 FUN_1475d3150 body=59 status=ok
// SIG undefined FUN_1475d3150(void)

undefined8 FUN_1475d3150(longlong *param_1)

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



// FUNCTION 1475d319c FUN_1475d319c body=40 status=ok
// SIG undefined FUN_1475d319c(void)

void FUN_1475d319c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1475b1abc(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1475d3214 FUN_1475d3214 body=52 status=ok
// SIG undefined FUN_1475d3214(void)

undefined8 * FUN_1475d3214(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c06b0;
  FUN_1475d38f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3248 FUN_1475d3248 body=29 status=ok
// SIG undefined FUN_1475d3248(void)

undefined8 FUN_1475d3248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3266 FUN_1475d3266 body=664 status=ok
// SIG undefined FUN_1475d3266(void)

longlong FUN_1475d3266(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined **local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = &PTR_FUN_14a4c06d8;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if ((*(byte *)(param_3 + 0x693) & 0x10) == 0) {
    lVar14 = 0x848;
    cVar10 = FUN_144a61b4f();
    if (cVar10 == '\0') goto LAB_1475d32f4;
  }
  lVar14 = 0x6a0;
LAB_1475d32f4:
  lVar12 = (longlong)*(int *)(param_3 + 8 + lVar14);
  if (lVar12 != 0) {
    lVar14 = *(longlong *)(param_3 + lVar14);
    lVar13 = 0;
    do {
      uVar9 = uStack_a8;
      uVar8 = uStack_b8;
      uVar7 = uStack_c8;
      cVar10 = *(char *)(lVar14 + 8 + lVar13);
      if (cVar10 == '\x05') {
        uVar6 = *(undefined8 *)(lVar14 + lVar13);
        uVar2 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x4a + lVar13)];
        uVar3 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x49 + lVar13)];
        bVar5 = *(byte *)(lVar14 + 0x4b + lVar13);
        uVar4 = (&DAT_14c758c60)[*(byte *)(lVar14 + 0x48 + lVar13)];
        lVar15 = (longlong)(int)uStack_a8;
        uVar11 = (int)uStack_a8 + 1;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar11);
        if (uStack_a8._4_4_ < uVar11) {
          FUN_1475d379e(&local_b0,uVar9 & 0xffffffff);
        }
        *(undefined8 *)(local_b0 + lVar15 * 0x18) = uVar6;
        *(undefined4 *)(local_b0 + 8 + lVar15 * 0x18) = uVar2;
        *(undefined4 *)(local_b0 + 0xc + lVar15 * 0x18) = uVar3;
        *(undefined4 *)(local_b0 + 0x10 + lVar15 * 0x18) = uVar4;
        *(float *)(local_b0 + 0x14 + lVar15 * 0x18) = (float)bVar5 * 0.003921569;
      }
      else if (cVar10 == '\x03') {
        uVar6 = *(undefined8 *)(lVar14 + lVar13);
        local_e8 = *(undefined8 *)(lVar14 + 0x28 + lVar13);
        puVar1 = (undefined4 *)(lVar14 + 0x18 + lVar13);
        local_f8 = *puVar1;
        uStack_f4 = puVar1[1];
        uStack_f0 = puVar1[2];
        uStack_ec = puVar1[3];
        lVar15 = (longlong)(int)uStack_b8;
        uVar11 = (int)uStack_b8 + 1;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar11);
        if (uStack_b8._4_4_ < uVar11) {
          FUN_1475d3718(&local_c0,uVar8 & 0xffffffff);
        }
        lVar15 = lVar15 * 0x20;
        *(undefined8 *)(local_c0 + lVar15) = uVar6;
        puVar1 = (undefined4 *)(local_c0 + 8 + lVar15);
        *puVar1 = local_f8;
        puVar1[1] = uStack_f4;
        puVar1[2] = uStack_f0;
        puVar1[3] = uStack_ec;
        *(undefined8 *)(local_c0 + 0x18 + lVar15) = local_e8;
      }
      else if (cVar10 == '\x01') {
        uVar6 = *(undefined8 *)(lVar14 + lVar13);
        uVar2 = *(undefined4 *)(lVar14 + 0xc + lVar13);
        lVar15 = (longlong)(int)uStack_c8;
        uVar11 = (int)uStack_c8 + 1;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar11);
        if (uStack_c8._4_4_ < uVar11) {
          FUN_1475d3684(&local_d0,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_d0 + lVar15 * 0xc) = uVar6;
        *(undefined4 *)(local_d0 + 8 + lVar15 * 0xc) = uVar2;
      }
      lVar13 = lVar13 + 0xe0;
    } while (lVar12 * 0xe0 - lVar13 != 0);
  }
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfe;
  FUN_1475d3832(param_2,&local_d8);
  FUN_1475d3500(&local_d8);
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475d3500 FUN_1475d3500 body=72 status=ok
// SIG undefined FUN_1475d3500(void)

void FUN_1475d3500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c06d8;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475d3548 FUN_1475d3548 body=38 status=ok
// SIG undefined FUN_1475d3548(void)

undefined8 FUN_1475d3548(undefined8 param_1,int param_2)

{
  FUN_1475d3500();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d356e FUN_1475d356e body=276 status=ok
// SIG undefined FUN_1475d356e(void)

void FUN_1475d356e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      (**(code **)(*param_2 + 0xa08))
                (param_2,*(undefined8 *)(lVar3 + lVar4),*(undefined4 *)(lVar3 + 8 + lVar4));
      lVar4 = lVar4 + 0xc;
    } while ((longlong)iVar2 * 0xc != lVar4);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      local_48 = *(undefined8 *)(lVar3 + 0x18 + lVar4);
      puVar1 = (undefined4 *)(lVar3 + 8 + lVar4);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      (**(code **)(*param_2 + 0xa10))(param_2,*(undefined8 *)(lVar3 + lVar4),&local_58);
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar4);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      puVar1 = (undefined4 *)(lVar3 + 8 + lVar4);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      (**(code **)(*param_2 + 0xa18))(param_2,*(undefined8 *)(lVar3 + lVar4),&local_68);
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d3684 FUN_1475d3684 body=147 status=ok
// SIG undefined FUN_1475d3684(void)

void FUN_1475d3684(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475d3718 FUN_1475d3718 body=132 status=ok
// SIG undefined FUN_1475d3718(void)

void FUN_1475d3718(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475d379e FUN_1475d379e body=147 status=ok
// SIG undefined FUN_1475d379e(void)

void FUN_1475d379e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475d3832 FUN_1475d3832 body=193 status=ok
// SIG undefined FUN_1475d3832(void)

void FUN_1475d3832(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c06d8;
  param_1[1] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[5] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



// FUNCTION 1475d38f4 FUN_1475d38f4 body=116 status=ok
// SIG undefined FUN_1475d38f4(void)

void FUN_1475d38f4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475d39b0 FUN_1475d39b0 body=90 status=ok
// SIG undefined FUN_1475d39b0(void)

undefined8 FUN_1475d39b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_14753b3d4(param_2,param_3);
      param_3 = param_3 + 0x130;
      param_2 = param_2 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475d3a32 FUN_1475d3a32 body=59 status=ok
// SIG undefined FUN_1475d3a32(void)

undefined8 FUN_1475d3a32(longlong *param_1)

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



// FUNCTION 1475d3a7e FUN_1475d3a7e body=49 status=ok
// SIG undefined FUN_1475d3a7e(void)

void FUN_1475d3a7e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *param_2 = &PTR_FUN_14a4c7f00;
    FUN_140e127fe(param_2 + 4);
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  return;
}



// FUNCTION 1475d3b00 FUN_1475d3b00 body=347 status=ok
// SIG undefined FUN_1475d3b00(void)

undefined8 * FUN_1475d3b00(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46bfe0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x80);
  param_1[0x10] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 1475d3c5c FUN_1475d3c5c body=29 status=ok
// SIG undefined FUN_1475d3c5c(void)

undefined8 FUN_1475d3c5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3c7a FUN_1475d3c7a body=92 status=ok
// SIG undefined FUN_1475d3c7a(void)

undefined8 * FUN_1475d3c7a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1475d3cd8(local_28,param_3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_14a4c0878;
  *(undefined1 *)(param_2 + 1) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d3cd8 FUN_1475d3cd8 body=111 status=ok
// SIG undefined FUN_1475d3cd8(void)

undefined8 * FUN_1475d3cd8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a4c0878;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    lVar2 = FUN_14143eef4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      bVar1 = *(byte *)(param_2 + 0x398) >> 2;
      goto LAB_1475d3d2d;
    }
  }
  lVar2 = FUN_1432f52ed(param_2);
  if (lVar2 == 0) {
    return param_1;
  }
  bVar1 = *(byte *)(lVar2 + 0x9e) >> 4;
LAB_1475d3d2d:
  *(byte *)(param_1 + 1) = bVar1 & 1;
  return param_1;
}



// FUNCTION 1475d3d48 FUN_1475d3d48 body=29 status=ok
// SIG undefined FUN_1475d3d48(void)

undefined8 FUN_1475d3d48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3d66 FUN_1475d3d66 body=55 status=ok
// SIG undefined FUN_1475d3d66(void)

void FUN_1475d3d66(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1432f52ed(param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d3d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))
              (plVar1,*(undefined1 *)(param_1 + 8),1,*(code **)(*plVar1 + 0x2b8));
    return;
  }
  return;
}



// FUNCTION 1475d3dec FUN_1475d3dec body=111 status=ok
// SIG undefined FUN_1475d3dec(void)

undefined8 FUN_1475d3dec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined1 *)(param_2 + -0x30) = *(undefined1 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_14753b184(param_2,param_3);
      param_3 = param_3 + 0x140;
      param_2 = param_2 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475d3e84 FUN_1475d3e84 body=59 status=ok
// SIG undefined FUN_1475d3e84(void)

undefined8 FUN_1475d3e84(longlong *param_1)

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



// FUNCTION 1475d3ed0 FUN_1475d3ed0 body=73 status=ok
// SIG undefined FUN_1475d3ed0(void)

void FUN_1475d3ed0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *param_2 = &PTR_FUN_14a4c7eb0;
    FUN_140bb7e7c(param_2 + 7);
    *param_2 = &PTR_FUN_14a47b390;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1475d3f6a FUN_1475d3f6a body=29 status=ok
// SIG undefined FUN_1475d3f6a(void)

undefined8 FUN_1475d3f6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3f9e FUN_1475d3f9e body=29 status=ok
// SIG undefined FUN_1475d3f9e(void)

undefined8 FUN_1475d3f9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d3fc6 FUN_1475d3fc6 body=94 status=ok
// SIG undefined FUN_1475d3fc6(void)

undefined8 * FUN_1475d3fc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a10;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d4024 FUN_1475d4024 body=78 status=ok
// SIG undefined FUN_1475d4024(void)

undefined8 FUN_1475d4024(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d4120();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4074 FUN_1475d4074 body=82 status=ok
// SIG undefined FUN_1475d4074(void)

void FUN_1475d4074(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475d4256(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d40c8 FUN_1475d40c8 body=86 status=ok
// SIG undefined FUN_1475d40c8(void)

void FUN_1475d40c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1475d42aa(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4120 FUN_1475d4120 body=308 status=ok
// SIG undefined FUN_1475d4120(void)

undefined2 * FUN_1475d4120(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1475d4256(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1475d42aa(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4256 FUN_1475d4256 body=83 status=ok
// SIG undefined FUN_1475d4256(void)

void FUN_1475d4256(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  FUN_140dba9e6(*param_1,param_2[0x1c]);
  return;
}



// FUNCTION 1475d42aa FUN_1475d42aa body=100 status=ok
// SIG undefined FUN_1475d42aa(void)

void FUN_1475d42aa(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d43aa(param_2 + 0x24,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d4440(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f80c(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1475d430e FUN_1475d430e body=156 status=ok
// SIG undefined FUN_1475d430e(void)

void FUN_1475d430e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1475d4341;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1475d4341:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 2);
  if (*(int *)(param_1 + 2) != -1) {
    param_1[2] = -1;
    param_1[3] = -1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475d4399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1475d43aa FUN_1475d43aa body=149 status=ok
// SIG undefined FUN_1475d43aa(void)

void FUN_1475d43aa(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1475d43dd;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1475d43dd:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(char *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       (char)param_1[1];
  if (*(char *)((longlong)param_1 + 3) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 3) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475d442e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1475d4440 FUN_1475d4440 body=149 status=ok
// SIG undefined FUN_1475d4440(void)

void FUN_1475d4440(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1475d4473;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1475d4473:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined4 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined4 *)(param_1 + 2);
  if ((char)param_1[4] == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475d44c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1475d44d6 FUN_1475d44d6 body=84 status=ok
// SIG undefined FUN_1475d44d6(void)

undefined8 * FUN_1475d44d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a30;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d452a FUN_1475d452a body=78 status=ok
// SIG undefined FUN_1475d452a(void)

undefined8 FUN_1475d452a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d4626();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d457a FUN_1475d457a body=82 status=ok
// SIG undefined FUN_1475d457a(void)

void FUN_1475d457a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475d475c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d45ce FUN_1475d45ce body=86 status=ok
// SIG undefined FUN_1475d45ce(void)

void FUN_1475d45ce(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1475d47a4(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4626 FUN_1475d4626 body=308 status=ok
// SIG undefined FUN_1475d4626(void)

undefined2 * FUN_1475d4626(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1475d475c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x3c) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1475d47a4(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d475c FUN_1475d475c body=71 status=ok
// SIG undefined FUN_1475d475c(void)

void FUN_1475d475c(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  return;
}



// FUNCTION 1475d47a4 FUN_1475d47a4 body=84 status=ok
// SIG undefined FUN_1475d47a4(void)

void FUN_1475d47a4(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d43aa(param_2 + 0x24,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d4440(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1475d47f8 FUN_1475d47f8 body=92 status=ok
// SIG undefined FUN_1475d47f8(void)

void FUN_1475d47f8(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1475d4854 FUN_1475d4854 body=52 status=ok
// SIG undefined FUN_1475d4854(void)

undefined8 * FUN_1475d4854(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a50;
  FUN_1475d47f8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d4888 FUN_1475d4888 body=78 status=ok
// SIG undefined FUN_1475d4888(void)

undefined8 FUN_1475d4888(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d4986();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d48d8 FUN_1475d48d8 body=85 status=ok
// SIG undefined FUN_1475d48d8(void)

void FUN_1475d48d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475d4abe(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d492e FUN_1475d492e body=86 status=ok
// SIG undefined FUN_1475d492e(void)

void FUN_1475d492e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1475d4b5c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4986 FUN_1475d4986 body=311 status=ok
// SIG undefined FUN_1475d4986(void)

undefined2 * FUN_1475d4986(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1475d4abe(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1475d4b5c(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4abe FUN_1475d4abe body=157 status=ok
// SIG undefined FUN_1475d4abe(void)

void FUN_1475d4abe(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
  }
  if (*(char *)(param_2 + 0x41) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x40]);
    return;
  }
  return;
}



// FUNCTION 1475d4b5c FUN_1475d4b5c body=148 status=ok
// SIG undefined FUN_1475d4b5c(void)

void FUN_1475d4b5c(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d43aa(param_2 + 0x24,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d4440(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x80,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1475d4bf0 FUN_1475d4bf0 body=76 status=ok
// SIG undefined FUN_1475d4bf0(void)

void FUN_1475d4bf0(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1475d4c3c FUN_1475d4c3c body=52 status=ok
// SIG undefined FUN_1475d4c3c(void)

undefined8 * FUN_1475d4c3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a70;
  FUN_1475d4bf0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d4c70 FUN_1475d4c70 body=78 status=ok
// SIG undefined FUN_1475d4c70(void)

undefined8 FUN_1475d4c70(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d4d6e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4cc0 FUN_1475d4cc0 body=85 status=ok
// SIG undefined FUN_1475d4cc0(void)

void FUN_1475d4cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475d4ea6(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4d16 FUN_1475d4d16 body=86 status=ok
// SIG undefined FUN_1475d4d16(void)

void FUN_1475d4d16(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1475d4f2c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4d6e FUN_1475d4d6e body=311 status=ok
// SIG undefined FUN_1475d4d6e(void)

undefined2 * FUN_1475d4d6e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1475d4ea6(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x88) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1475d4f2c(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d4ea6 FUN_1475d4ea6 body=133 status=ok
// SIG undefined FUN_1475d4ea6(void)

void FUN_1475d4ea6(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
    return;
  }
  return;
}



// FUNCTION 1475d4f2c FUN_1475d4f2c body=132 status=ok
// SIG undefined FUN_1475d4f2c(void)

void FUN_1475d4f2c(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d43aa(param_2 + 0x24,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d4440(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1475d4fb0 FUN_1475d4fb0 body=104 status=ok
// SIG undefined FUN_1475d4fb0(void)

undefined8 * FUN_1475d4fb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0a90;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d5018 FUN_1475d5018 body=78 status=ok
// SIG undefined FUN_1475d5018(void)

undefined8 FUN_1475d5018(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d5114();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d5068 FUN_1475d5068 body=82 status=ok
// SIG undefined FUN_1475d5068(void)

void FUN_1475d5068(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475d524a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d50bc FUN_1475d50bc body=86 status=ok
// SIG undefined FUN_1475d50bc(void)

void FUN_1475d50bc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1475d52be(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d5114 FUN_1475d5114 body=308 status=ok
// SIG undefined FUN_1475d5114(void)

undefined2 * FUN_1475d5114(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1475d524a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1475d52be(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d524a FUN_1475d524a body=115 status=ok
// SIG undefined FUN_1475d524a(void)

void FUN_1475d524a(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
    return;
  }
  return;
}



// FUNCTION 1475d52be FUN_1475d52be body=116 status=ok
// SIG undefined FUN_1475d52be(void)

void FUN_1475d52be(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d43aa(param_2 + 0x24,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d4440(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1475d5332 FUN_1475d5332 body=94 status=ok
// SIG undefined FUN_1475d5332(void)

undefined8 * FUN_1475d5332(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0ab0;
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2f) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d5390 FUN_1475d5390 body=78 status=ok
// SIG undefined FUN_1475d5390(void)

undefined8 FUN_1475d5390(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d548c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d53e0 FUN_1475d53e0 body=82 status=ok
// SIG undefined FUN_1475d53e0(void)

void FUN_1475d53e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1475d55c2(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d5434 FUN_1475d5434 body=86 status=ok
// SIG undefined FUN_1475d5434(void)

void FUN_1475d5434(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1475d5624(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d548c FUN_1475d548c body=308 status=ok
// SIG undefined FUN_1475d548c(void)

undefined2 * FUN_1475d548c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1475d55c2(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1475d5624(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d55c2 FUN_1475d55c2 body=97 status=ok
// SIG undefined FUN_1475d55c2(void)

void FUN_1475d55c2(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
    return;
  }
  return;
}



// FUNCTION 1475d5624 FUN_1475d5624 body=100 status=ok
// SIG undefined FUN_1475d5624(void)

void FUN_1475d5624(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d43aa(param_2 + 0x24,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d4440(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1475d5688 FUN_1475d5688 body=49 status=ok
// SIG undefined FUN_1475d5688(void)

undefined8 * FUN_1475d5688(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c0ad0;
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d56ba FUN_1475d56ba body=78 status=ok
// SIG undefined FUN_1475d56ba(void)

undefined8 FUN_1475d56ba(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1475d574e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d570a FUN_1475d570a body=46 status=ok
// SIG undefined FUN_1475d570a(void)

void FUN_1475d570a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1475d574e FUN_1475d574e body=275 status=ok
// SIG undefined FUN_1475d574e(void)

undefined2 * FUN_1475d574e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  }
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_140659abc(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d5900 FUN_1475d5900 body=59 status=ok
// SIG undefined FUN_1475d5900(void)

undefined8 FUN_1475d5900(longlong *param_1)

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



// FUNCTION 1475d59ca FUN_1475d59ca body=90 status=ok
// SIG undefined FUN_1475d59ca(void)

undefined1 FUN_1475d59ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1475d5a4c FUN_1475d5a4c body=59 status=ok
// SIG undefined FUN_1475d5a4c(void)

undefined8 FUN_1475d5a4c(longlong *param_1)

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



// FUNCTION 1475d5b16 FUN_1475d5b16 body=90 status=ok
// SIG undefined FUN_1475d5b16(void)

undefined1 FUN_1475d5b16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1475d5b98 FUN_1475d5b98 body=59 status=ok
// SIG undefined FUN_1475d5b98(void)

undefined8 FUN_1475d5b98(longlong *param_1)

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



// FUNCTION 1475d5cb8 FUN_1475d5cb8 body=59 status=ok
// SIG undefined FUN_1475d5cb8(void)

undefined8 FUN_1475d5cb8(longlong *param_1)

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



// FUNCTION 1475d5d82 FUN_1475d5d82 body=90 status=ok
// SIG undefined FUN_1475d5d82(void)

undefined1 FUN_1475d5d82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1475d5e04 FUN_1475d5e04 body=59 status=ok
// SIG undefined FUN_1475d5e04(void)

undefined8 FUN_1475d5e04(longlong *param_1)

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



// FUNCTION 1475d5ece FUN_1475d5ece body=90 status=ok
// SIG undefined FUN_1475d5ece(void)

undefined1 FUN_1475d5ece(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1475d5f50 FUN_1475d5f50 body=59 status=ok
// SIG undefined FUN_1475d5f50(void)

undefined8 FUN_1475d5f50(longlong *param_1)

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



// FUNCTION 1475d604e FUN_1475d604e body=132 status=ok
// SIG undefined FUN_1475d604e(void)

undefined1 FUN_1475d604e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    bVar8 = DAT_14c950c29;
    do {
      lVar9 = *(longlong *)(param_3 + lVar10);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *(longlong *)(param_3 + lVar10);
          bVar8 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar10);
      *plVar1 = lVar9;
      plVar2 = (longlong *)(param_3 + 8 + lVar10);
      lVar9 = plVar2[1];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      plVar1[1] = *plVar2;
      plVar1[2] = lVar9;
      *(undefined4 *)(plVar1 + 3) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
      *(undefined4 *)(plVar1 + 4) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar7;
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar10);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)(plVar1 + 5) = *puVar3;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar4;
      *(undefined4 *)(plVar1 + 6) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar6;
      plVar1[7] = *(longlong *)(param_3 + 0x38 + lVar10);
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475d60fa FUN_1475d60fa body=59 status=ok
// SIG undefined FUN_1475d60fa(void)

undefined8 FUN_1475d60fa(longlong *param_1)

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



// FUNCTION 1475d61cc FUN_1475d61cc body=111 status=ok
// SIG undefined FUN_1475d61cc(void)

undefined1 FUN_1475d61cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(plVar1 + 3) = *(undefined1 *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475d6264 FUN_1475d6264 body=59 status=ok
// SIG undefined FUN_1475d6264(void)

undefined8 FUN_1475d6264(longlong *param_1)

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



// FUNCTION 1475d6356 FUN_1475d6356 body=38 status=ok
// SIG undefined FUN_1475d6356(void)

undefined8 FUN_1475d6356(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475d63a4 FUN_1475d63a4 body=59 status=ok
// SIG undefined FUN_1475d63a4(void)

undefined8 FUN_1475d63a4(longlong *param_1)

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



// FUNCTION 1475d6446 FUN_1475d6446 body=60 status=ok
// SIG undefined FUN_1475d6446(void)

undefined8 * FUN_1475d6446(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1750;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d6482 FUN_1475d6482 body=60 status=ok
// SIG undefined FUN_1475d6482(void)

undefined8 * FUN_1475d6482(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1760;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d64be FUN_1475d64be body=60 status=ok
// SIG undefined FUN_1475d64be(void)

undefined8 * FUN_1475d64be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1770;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d64fa FUN_1475d64fa body=60 status=ok
// SIG undefined FUN_1475d64fa(void)

undefined8 * FUN_1475d64fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1780;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d6536 FUN_1475d6536 body=60 status=ok
// SIG undefined FUN_1475d6536(void)

undefined8 * FUN_1475d6536(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1790;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d659c FUN_1475d659c body=60 status=ok
// SIG undefined FUN_1475d659c(void)

undefined8 * FUN_1475d659c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c17a0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d65d8 FUN_1475d65d8 body=60 status=ok
// SIG undefined FUN_1475d65d8(void)

undefined8 * FUN_1475d65d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c17b0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d6614 FUN_1475d6614 body=60 status=ok
// SIG undefined FUN_1475d6614(void)

undefined8 * FUN_1475d6614(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c17c0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d667a FUN_1475d667a body=57 status=ok
// SIG undefined FUN_1475d667a(void)

undefined8 * FUN_1475d667a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c17d0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d66b4 FUN_1475d66b4 body=38 status=ok
// SIG undefined FUN_1475d66b4(void)

undefined8 FUN_1475d66b4(undefined8 param_1,int param_2)

{
  FUN_145ec5c42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d66da FUN_1475d66da body=60 status=ok
// SIG undefined FUN_1475d66da(void)

undefined8 * FUN_1475d66da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c17f0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d6716 FUN_1475d6716 body=31 status=ok
// SIG undefined FUN_1475d6716(void)

undefined8 FUN_1475d6716(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d6736 FUN_1475d6736 body=335 status=ok
// SIG undefined FUN_1475d6736(void)

void FUN_1475d6736(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined2 local_106;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = **(undefined2 **)(param_2 + 0x18);
  local_106 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_1461c4c38(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432f53da(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d6886 FUN_1475d6886 body=130 status=ok
// SIG undefined FUN_1475d6886(void)

void FUN_1475d6886(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475d77d0(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d690a FUN_1475d690a body=616 status=ok
// SIG undefined FUN_1475d690a(void)

void FUN_1475d690a(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475d7ad6(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d6b74 FUN_1475d6b74 body=259 status=ok
// SIG undefined FUN_1475d6b74(void)

void FUN_1475d6b74(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_4[1];
  if (0 < iVar2) {
    lVar1 = *param_6;
    lVar4 = 0;
    do {
      if (*(short *)(*param_4 + lVar4 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar3 = (longlong)local_58;
        FUN_1475d7c4e(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) && ((undefined1 *)(local_50 + lVar3) != (undefined1 *)0x0)) {
          *(undefined1 *)(lVar4 + (ulonglong)*(ushort *)(*param_3 + 2) + lVar1) =
               *(undefined1 *)(local_50 + lVar3);
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar2 = (int)param_4[1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d6c7c FUN_1475d6c7c body=29 status=ok
// SIG undefined FUN_1475d6c7c(void)

undefined8 FUN_1475d6c7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d6c9a FUN_1475d6c9a body=127 status=ok
// SIG undefined FUN_1475d6c9a(void)

undefined4 * FUN_1475d6c9a(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475d6d1a FUN_1475d6d1a body=273 status=ok
// SIG undefined FUN_1475d6d1a(void)

void FUN_1475d6d1a(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d6e2c FUN_1475d6e2c body=773 status=ok
// SIG undefined FUN_1475d6e2c(void)

void FUN_1475d6e2c(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar3 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[5]) goto LAB_1475d6e7f;
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1475d6e7f:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_150 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar3 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[4]) goto LAB_1475d6eb5;
      puVar10 = puVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1475d6eb5:
  local_158 = *puVar11;
  local_168 = *(int *)(lVar3 + 0x14);
  if (local_168 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  local_160 = *puVar10;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_128,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_4) goto LAB_1475d6f36;
      puVar9 = puVar9 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475d6f36:
  iVar2 = *(int *)(lVar3 + 0x14);
  local_164 = iVar1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  lVar7 = local_e8;
  lVar8 = local_100;
  lVar3 = local_118;
  uVar6 = local_158;
  uVar5 = local_160;
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar9;
  local_c8 = local_128;
  local_c0 = local_120;
  local_128 = 0;
  local_b8 = local_118;
  local_118 = 0;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_78 = local_168;
  local_70 = local_160;
  local_60 = local_164;
  local_58 = local_158;
  local_e0 = puVar9;
  local_d8 = iVar2;
  local_d0 = uVar4;
  local_80 = puVar10;
  local_68 = puVar11;
  FUN_1432f59b8();
  local_148 = 0;
  lStack_140 = 0;
  local_138 = 0;
  if (lVar3 != 0) {
    local_148 = lVar3;
  }
  if (lVar8 != 0) {
    lStack_140 = lVar8;
  }
  if (lVar7 != 0) {
    local_138 = lVar7;
  }
  local_170 = uVar6;
  local_178 = uVar5;
  FUN_140e8e2c8(local_150,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_148);
  FUN_1475d7132(&local_e0);
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d7132 FUN_1475d7132 body=130 status=ok
// SIG undefined FUN_1475d7132(void)

void FUN_1475d7132(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475d71a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475d71b4 FUN_1475d71b4 body=118 status=ok
// SIG undefined FUN_1475d71b4(void)

longlong FUN_1475d71b4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475d6c9a();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d722c FUN_1475d722c body=38 status=ok
// SIG undefined FUN_1475d722c(void)

undefined8 FUN_1475d722c(undefined8 param_1,int param_2)

{
  FUN_1461dfbee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d725e FUN_1475d725e body=85 status=ok
// SIG undefined FUN_1475d725e(void)

void FUN_1475d725e(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475d7488();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d72b4 FUN_1475d72b4 body=419 status=ok
// SIG undefined FUN_1475d72b4(void)

undefined8 FUN_1475d72b4(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1475d736f;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x40;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x28)])();
    FUN_145d9016c(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x30) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
      FUN_1475d7512(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x30) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
      FUN_1475d7512(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1475d736f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d7462 FUN_1475d7462 body=38 status=ok
// SIG undefined FUN_1475d7462(void)

undefined8 FUN_1475d7462(undefined8 param_1,int param_2)

{
  FUN_1461dfbee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d7488 FUN_1475d7488 body=136 status=ok
// SIG undefined FUN_1475d7488(void)

void FUN_1475d7488(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d7512 FUN_1475d7512 body=109 status=ok
// SIG undefined FUN_1475d7512(void)

void FUN_1475d7512(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x30 + 0x20)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475d7580(param_1);
  return;
}



// FUNCTION 1475d7580 FUN_1475d7580 body=62 status=ok
// SIG undefined FUN_1475d7580(void)

void FUN_1475d7580(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475d75be(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1475d75be FUN_1475d75be body=112 status=ok
// SIG undefined FUN_1475d75be(void)

ulonglong FUN_1475d75be(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475d75f8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1475d75f8:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475d762e FUN_1475d762e body=270 status=ok
// SIG undefined FUN_1475d762e(void)

void FUN_1475d762e(longlong *param_1,int *param_2,undefined1 *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  if ((int)uVar3 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar9 + (ulonglong)uVar1 * 0x30) < *param_2) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar7 < (int)uVar3) && (*(int *)(lVar9 + (ulonglong)uVar7 * 0x30) <= *param_2)) {
      piVar8 = (int *)(lVar9 + (ulonglong)uVar7 * 0x30);
      FUN_1461dfcd5(piVar8,1);
      goto LAB_1475d76ec;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1475d773c(param_1,uVar3);
    lVar9 = *param_1;
  }
  lVar5 = (ulonglong)uVar7 * 0x30;
  memmove((void *)(lVar9 + lVar5 + 0x30),(void *)(lVar9 + lVar5),(ulonglong)(uVar3 - uVar7) * 0x30);
  piVar8 = (int *)(lVar5 + *param_1);
LAB_1475d76ec:
  *piVar8 = *param_2;
  *(undefined1 *)(piVar8 + 2) = *param_3;
  bVar2 = param_3[0x18];
  *(byte *)(piVar8 + 8) = bVar2;
  (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[bVar2])(piVar8 + 4,param_3 + 8);
  *(undefined2 *)(piVar8 + 10) = *(undefined2 *)(param_3 + 0x20);
  return;
}



// FUNCTION 1475d773c FUN_1475d773c body=147 status=ok
// SIG undefined FUN_1475d773c(void)

void FUN_1475d773c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1475d77d0 FUN_1475d77d0 body=772 status=ok
// SIG undefined FUN_1475d77d0(void)

void FUN_1475d77d0(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_1475d7829;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_1475d7829;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar10 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar10 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_1475d7937;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_1475d7937:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_1475d7ad6(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar10 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,*(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 2)
                              ,*(undefined8 *)(param_5 + uVar10),lVar11);
        *(undefined8 *)(lVar9 + uVar10 + lVar3) = uVar5;
        iVar4 = iStack_158;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_1475d7829:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d7ad6 FUN_1475d7ad6 body=185 status=ok
// SIG undefined FUN_1475d7ad6(void)

undefined8 * FUN_1475d7ad6(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1475d7b90(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475d7b90 FUN_1475d7b90 body=113 status=ok
// SIG undefined FUN_1475d7b90(void)

longlong * FUN_1475d7b90(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 + *param_2;
  }
  return param_1;
}



// FUNCTION 1475d7c02 FUN_1475d7c02 body=76 status=ok
// SIG undefined FUN_1475d7c02(void)

void FUN_1475d7c02(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475d7c4e FUN_1475d7c4e body=88 status=ok
// SIG undefined FUN_1475d7c4e(void)

undefined8 * FUN_1475d7c4e(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1475d7b90(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475d7ca6 FUN_1475d7ca6 body=57 status=ok
// SIG undefined FUN_1475d7ca6(void)

undefined8 * FUN_1475d7ca6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1970;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d7ce0 FUN_1475d7ce0 body=55 status=ok
// SIG undefined FUN_1475d7ce0(void)

void FUN_1475d7ce0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1475da590(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1475d7d18 FUN_1475d7d18 body=57 status=ok
// SIG undefined FUN_1475d7d18(void)

undefined8 * FUN_1475d7d18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c1970;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d7d52 FUN_1475d7d52 body=232 status=ok
// SIG undefined FUN_1475d7d52(void)

undefined8 * FUN_1475d7d52(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_1475d7e3c();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c1990;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d7e3c FUN_1475d7e3c body=104 status=ok
// SIG undefined FUN_1475d7e3c(void)

undefined8 FUN_1475d7e3c(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1475d7ea4 FUN_1475d7ea4 body=38 status=ok
// SIG undefined FUN_1475d7ea4(void)

undefined8 FUN_1475d7ea4(undefined8 param_1,int param_2)

{
  FUN_1475d7f40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475d7eca FUN_1475d7eca body=118 status=ok
// SIG undefined FUN_1475d7eca(void)

void FUN_1475d7eca(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_1475d8106(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1475d7f40 FUN_1475d7f40 body=71 status=ok
// SIG undefined FUN_1475d7f40(void)

void FUN_1475d7f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c1990;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1475d7fbc(param_1 + 8);
  FUN_1475d7f88(param_1 + 1);
  return;
}



// FUNCTION 1475d7f88 FUN_1475d7f88 body=52 status=ok
// SIG undefined FUN_1475d7f88(void)

void FUN_1475d7f88(longlong *param_1)

{
  FUN_1475d804a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475d7fbc FUN_1475d7fbc body=52 status=ok
// SIG undefined FUN_1475d7fbc(void)

void FUN_1475d7fbc(longlong *param_1)

{
  FUN_1475d7ff0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475d7ff0 FUN_1475d7ff0 body=89 status=ok
// SIG undefined FUN_1475d7ff0(void)

void FUN_1475d7ff0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1475d804a FUN_1475d804a body=91 status=ok
// SIG undefined FUN_1475d804a(void)

void FUN_1475d804a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1475d80a6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1475d80a6 FUN_1475d80a6 body=96 status=ok
// SIG undefined FUN_1475d80a6(void)

void FUN_1475d80a6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1475d8106 FUN_1475d8106 body=95 status=ok
// SIG undefined FUN_1475d8106(void)

void FUN_1475d8106(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (ulonglong)param_2 * 8) = uVar5;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475d8166 FUN_1475d8166 body=313 status=ok
// SIG undefined FUN_1475d8166(void)

undefined4 *
FUN_1475d8166(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475d82a0(param_1,local_50);
  puVar2 = (undefined8 *)param_3[1];
  *local_48 = *(ushort *)*param_3;
  *(undefined8 *)(local_48 + 4) = *puVar2;
  *puVar2 = 0;
  local_48[8] = 0xffff;
  local_48[9] = 0xffff;
  local_54 = local_50[0];
  uVar1 = *local_48;
  local_68 = param_4;
  cVar3 = FUN_1475d8386(param_1,uVar1,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_48 + 10) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 8) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1475d84c6(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d82a0 FUN_1475d82a0 body=230 status=ok
// SIG undefined FUN_1475d82a0(void)

int * FUN_1475d82a0(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1475d8386 FUN_1475d8386 body=182 status=ok
// SIG undefined FUN_1475d8386(void)

void FUN_1475d8386(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*psVar1 == *param_3) {
          puVar2 = *(undefined8 **)(psVar1 + 4);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          *(undefined4 *)psVar1 = *(undefined4 *)param_3;
          *(undefined4 *)(psVar1 + 2) = uVar3;
          *(undefined4 *)(psVar1 + 4) = uVar4;
          *(undefined4 *)(psVar1 + 6) = uVar5;
          FUN_1475d843c(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1475d83f7;
        }
        iVar8 = *(int *)(psVar1 + 8);
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1475d83f7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1475d843c FUN_1475d843c body=138 status=ok
// SIG undefined FUN_1475d843c(void)

void FUN_1475d843c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1475d84c6 FUN_1475d84c6 body=410 status=ok
// SIG undefined FUN_1475d84c6(void)

void FUN_1475d84c6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0x18);
        *(uint *)(lVar2 + 0x14 + lVar5 * 0x18) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d8662 FUN_1475d8662 body=1082 status=ok
// SIG undefined FUN_1475d8662(void)

void FUN_1475d8662(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_94;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  ushort local_52;
  char local_50;
  char local_4e;
  undefined2 local_4c;
  char local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475d86b7;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1475d86b7:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_78 = *(ulonglong *)(param_1 + 0x40);
  local_8c = *(int *)(param_2 + 0x14);
  if (local_8c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1475d870e;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1475d870e:
  local_a0 = *plVar10;
  local_90 = *(int *)(param_2 + 0x14);
  if (local_90 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475d8761;
      plVar16 = plVar16 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1475d8761:
  lVar5 = *plVar9;
  local_94 = *(int *)(param_2 + 0x14);
  if (local_94 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  local_80 = *plVar16;
  local_70 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_88 = param_1 + 8;
    uVar17 = 0;
    do {
      local_58 = *(int *)(lVar5 + uVar17 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar7 = *(longlong *)(param_1 + 8);
      uVar11 = 0;
      if (0 < (int)uVar2) {
        uVar11 = 0;
        uVar13 = (ulonglong)uVar2;
        uVar14 = uVar2;
        do {
          uVar13 = uVar13 >> 1;
          uVar15 = (uint)uVar13 + (int)uVar11;
          if (*(int *)(lVar7 + (ulonglong)uVar15 * 8) < local_58) {
            uVar11 = (ulonglong)(uVar15 + (uVar14 & 1));
          }
          bVar3 = 1 < uVar14;
          uVar14 = (uint)uVar13;
        } while (bVar3);
      }
      if ((((int)uVar11 < (int)uVar2) && (*(int *)(lVar7 + uVar11 * 8) <= local_58)) &&
         (puVar6 = (undefined1 *)(lVar7 + uVar11 * 8 + 4), puVar6 != (undefined1 *)0x0)) {
        *(undefined1 *)(local_a0 + uVar17) = *puVar6;
      }
      else {
        lVar7 = FUN_1475b443c(local_70);
        if (((lVar7 != 0) && (lVar8 = FUN_14479d2ce(lVar7), lVar8 != 0)) &&
           (*(longlong *)(lVar7 + 8) != 0)) {
          local_68 = *(undefined4 *)(param_1 + 0x30);
          uStack_64 = *(undefined4 *)(param_1 + 0x34);
          uStack_60 = *(undefined4 *)(param_1 + 0x38);
          uStack_5c = *(undefined4 *)(param_1 + 0x3c);
          local_b0 = lVar8;
          FUN_140d4d2ba(&local_52,lVar8,lVar7 + 8,&local_68);
          lVar8 = *(longlong *)(param_1 + 0x48);
          if (lVar8 == 0) {
LAB_1475d887d:
            if (local_4e == '\0') {
              local_4c = 0x100;
              FUN_1475d9098(local_b0,lVar7 + 0x10,&local_4c);
            }
            else if (local_50 == '\x01') {
              local_4c._1_1_ = 1;
              uVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_52))
                                (local_b0);
              local_4c = CONCAT11(local_4c._1_1_,uVar4);
            }
            else {
              local_4c = 0x100;
              FUN_1460d56a8(local_b0,*(undefined2 *)(local_80 + uVar17 * 2),local_52,&local_4c);
            }
            puVar12 = &local_4c;
            *(undefined1 *)(local_a0 + uVar17) = (undefined1)local_4c;
          }
          else {
            local_a8 = lVar8;
            if (local_4e == '\0') {
              FUN_1475d913e(lVar8,&local_4c,local_b0,lVar7 + 0x10);
            }
            else if (local_50 == '\x01') {
              FUN_1475d9960();
            }
            else {
              FUN_1475d9b42(lVar8,&local_4c,local_b0,local_52);
            }
            if (local_4a == '\x01') {
              puVar12 = (undefined2 *)((ulonglong)local_4c * 8 + *(longlong *)(local_a8 + 8));
            }
            else {
              puVar12 = (undefined2 *)0x0;
            }
            if (puVar12 == (undefined2 *)0x0) goto LAB_1475d887d;
            *(undefined1 *)(local_a0 + uVar17) = *(undefined1 *)puVar12;
          }
          FUN_1475d9d24(local_88,&local_58,puVar12);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar1);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_94 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_90 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    uVar17 = plVar10[2];
    if ((ulonglong)plVar10[2] < local_78) {
      uVar17 = local_78;
    }
    plVar10[2] = uVar17;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_8c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d8a9e FUN_1475d8a9e body=1528 status=ok
// SIG undefined FUN_1475d8a9e(void)

void FUN_1475d8a9e(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a1;
  undefined2 local_a0 [4];
  longlong local_98;
  int local_90;
  longlong local_88;
  ushort local_7c;
  char local_7a;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong *local_68;
  ushort local_60;
  char cStack_5e;
  undefined5 uStack_5d;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1475d8af4;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1475d8af4:
  local_d8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_bc = *(int *)(param_2 + 0x14);
  if (local_bc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1475d8b51;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1475d8b51:
  local_d0 = *plVar8;
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_c0 = *(int *)(param_2 + 0x14);
  if (local_c0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1475d8bad;
      plVar11 = plVar11 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1475d8bad:
  local_e0 = *plVar9;
  local_c4 = *(int *)(param_2 + 0x14);
  if (local_c4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1475d8c04;
      plVar12 = plVar12 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1475d8c04:
  local_e8 = *plVar11;
  local_c8 = *(int *)(param_2 + 0x14);
  if (local_c8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  lVar5 = *plVar12;
  FUN_140b325e4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_88 == 0) {
    FUN_1410bd96e(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar3 = local_50;
    if (local_50 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if ((short)local_d8 != 0 && local_68 != (longlong *)0x0) {
        uVar7 = 0;
        plVar10 = local_68;
        do {
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(*plVar10 + 0x58) != 0) {
            puVar6 = *(undefined2 **)(*plVar10 + 0x50);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(local_a0,puVar6,1);
          FUN_1475d913e(uVar2,&local_7c,*(undefined8 *)(local_e8 + uVar7 * 8),local_a0);
          lVar5 = local_e8;
          if (local_7a == '\x01') {
            *(undefined1 *)(local_e0 + uVar7) =
                 *(undefined1 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_7c * 8);
          }
          else {
            local_a1 = FUN_1457bdbaa(*plVar10,*(undefined8 *)(local_e8 + uVar7 * 8));
            *(undefined1 *)(local_e0 + uVar7) = local_a1;
            local_f8 = *plVar10;
            FUN_1475da092(*(undefined8 *)(param_1 + 0x48),local_a0,
                          *(undefined8 *)(lVar5 + uVar7 * 8),&local_a1);
            *(undefined2 *)(local_d0 + uVar7 * 2) = local_a0[0];
          }
          uVar7 = uVar7 + 1;
          plVar10 = plVar10 + 2;
        } while (local_d8 != uVar7);
      }
      lVar5 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_70 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
        }
      }
    }
    else if (local_d8 != 0) {
      uVar7 = 0;
      do {
        FUN_1475d9b42(*(undefined8 *)(param_1 + 0x48),&local_78,
                      *(undefined8 *)(local_e8 + uVar7 * 8),*(undefined2 *)(local_50 + uVar7 * 2));
        if (cStack_76 == '\x01') {
          *(undefined1 *)(local_e0 + uVar7) =
               *(undefined1 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_78 * 8);
        }
        else {
          local_7c = local_7c & 0xff00;
          FUN_1460d56a8(*(undefined8 *)(local_e8 + uVar7 * 8),*(undefined2 *)(lVar5 + uVar7 * 2),
                        *(undefined2 *)(lVar3 + uVar7 * 2),&local_7c);
          *(undefined1 *)(local_e0 + uVar7) = (undefined1)local_7c;
          local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(lVar3 + uVar7 * 2));
          FUN_1475d9fba(*(undefined8 *)(param_1 + 0x48),local_a0,
                        *(undefined8 *)(local_e8 + uVar7 * 8),&local_7c);
          *(undefined2 *)(local_d0 + uVar7 * 2) = local_a0[0];
        }
        uVar7 = uVar7 + 1;
      } while (local_d8 != uVar7);
    }
    lVar5 = CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60));
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_58 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60)) + 8));
      }
    }
  }
  else if (local_d8 != 0) {
    uVar7 = 0;
    do {
      FUN_1475d9960(*(undefined8 *)(param_1 + 0x48),&local_60,*(undefined8 *)(local_e8 + uVar7 * 8),
                    *(undefined2 *)(local_88 + uVar7 * 2));
      if (cStack_5e == '\x01') {
        *(undefined1 *)(local_e0 + uVar7) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_60 * 8);
      }
      else {
        uVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                            (longlong)*(int *)(param_1 + 0x3c) *
                            (ulonglong)*(ushort *)(local_88 + uVar7 * 2)))
                          (*(undefined8 *)(local_e8 + uVar7 * 8));
        local_a0[0] = CONCAT11(local_a0[0]._1_1_,uVar4);
        *(undefined1 *)(local_e0 + uVar7) = uVar4;
        local_f8 = CONCAT62(local_f8._2_6_,*(undefined2 *)(local_88 + uVar7 * 2));
        FUN_1475d9ee2(*(undefined8 *)(param_1 + 0x48),&local_78,
                      *(undefined8 *)(local_e8 + uVar7 * 8),local_a0);
        *(ushort *)(local_d0 + uVar7 * 2) = local_78;
      }
      uVar7 = uVar7 + 1;
    } while (local_d8 != uVar7);
  }
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
    UNLOCK();
    if (local_90 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_c4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    uVar7 = plVar9[2];
    if ((ulonglong)plVar9[2] < local_b8) {
      uVar7 = local_b8;
    }
    plVar9[2] = uVar7;
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_c0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar7 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b0) {
      uVar7 = local_b0;
    }
    plVar8[2] = uVar7;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d9098 FUN_1475d9098 body=164 status=ok
// SIG undefined FUN_1475d9098(void)

void FUN_1475d9098(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  undefined1 local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_48);
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_38,puVar1);
  FUN_1475d9e6c(&local_22,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_21 == '\x01') {
    *param_3 = local_22;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d913e FUN_1475d913e body=483 status=ok
// SIG undefined FUN_1475d913e(void)

undefined8 FUN_1475d913e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475d926c;
        }
        else {
LAB_1475d926c:
          FUN_1475d95c8(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475d9694(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475d9510(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1475d9322(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d9322 FUN_1475d9322 body=493 status=ok
// SIG undefined FUN_1475d9322(void)

undefined2 * FUN_1475d9322(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475d9454;
        }
        else {
LAB_1475d9454:
          FUN_1475d95c8(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1475d9694(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1475d9510(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1475d98a8((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d9510 FUN_1475d9510 body=184 status=ok
// SIG undefined FUN_1475d9510(void)

void FUN_1475d9510(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7 * 8);
          iVar1 = *(int *)(lVar2 + 4 + lVar7 * 8);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7 * 8);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1475d80a6(param_1,iVar5);
  return;
}



// FUNCTION 1475d95c8 FUN_1475d95c8 body=90 status=ok
// SIG undefined FUN_1475d95c8(void)

void FUN_1475d95c8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1475d9622();
  return;
}



// FUNCTION 1475d9622 FUN_1475d9622 body=114 status=ok
// SIG undefined FUN_1475d9622(void)

void FUN_1475d9622(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475d9694 FUN_1475d9694 body=68 status=ok
// SIG undefined FUN_1475d9694(void)

void FUN_1475d9694(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1475d96d8(param_1);
  return;
}



// FUNCTION 1475d96d8 FUN_1475d96d8 body=462 status=ok
// SIG undefined FUN_1475d96d8(void)

void FUN_1475d96d8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475d98a8 FUN_1475d98a8 body=107 status=ok
// SIG undefined FUN_1475d98a8(void)

int FUN_1475d98a8(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1475d9913(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1475d9913 FUN_1475d9913 body=76 status=ok
// SIG undefined FUN_1475d9913(void)

undefined8 FUN_1475d9913(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1475d9960 FUN_1475d9960 body=481 status=ok
// SIG undefined FUN_1475d9960(void)

undefined8 FUN_1475d9960(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475d9a8e;
        }
        else {
LAB_1475d9a8e:
          FUN_1475d95c8(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475d9694(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475d9510(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1475d9322(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d9b42 FUN_1475d9b42 body=481 status=ok
// SIG undefined FUN_1475d9b42(void)

undefined8 FUN_1475d9b42(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1475d9c70;
        }
        else {
LAB_1475d9c70:
          FUN_1475d95c8(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1475d9694(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1475d9510(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1475d9322(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475d9d24 FUN_1475d9d24 body=194 status=ok
// SIG undefined FUN_1475d9d24(void)

void FUN_1475d9d24(longlong *param_1,int *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_1475d9dbd;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1475d9de6(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_1475d9dbd:
  *piVar9 = iVar5;
  *(undefined1 *)(piVar9 + 1) = *param_3;
  return;
}


