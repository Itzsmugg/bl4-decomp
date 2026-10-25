// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14923a360 FUN_14923a360 body=1322 status=ok
// SIG undefined FUN_14923a360(void)

void FUN_14923a360(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  char *param_9)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 auStack_508 [32];
  undefined1 *local_4e8;
  uint local_4e0;
  undefined1 local_4d8;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined1 local_498 [440];
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined8 local_2dc;
  undefined2 *local_2d0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined8 uStack_244;
  undefined1 local_23c;
  undefined2 local_23b;
  undefined1 local_239;
  undefined4 local_238;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined2 local_1b7;
  undefined1 local_1b5;
  longlong local_190;
  longlong local_128 [2];
  longlong local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  local_118 = 0;
  uStack_110 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 == '\0') goto LAB_14923a434;
  FUN_1400021e4(param_8,local_128);
  local_4e0 = 0xffffffff;
  local_4e8 = (undefined1 *)((ulonglong)local_4e8 & 0xffffffff00000000);
  FUN_1447ee042(local_128,&DAT_149e31048,1,1);
  *param_9 = '\b';
  param_9[4] = '\0';
  param_9[5] = '\0';
  param_9[6] = '\0';
  param_9[7] = '\0';
  param_9[8] = '\0';
  param_9[9] = '\0';
  param_9[10] = '\0';
  param_9[0xb] = '\0';
  lVar5 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar5 != 0) {
    FUN_1491d73b0(&local_2e0);
    local_2df = 2;
    FUN_1491d74b0(&local_2e0,1,1,1);
    *local_2d0 = *param_5;
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    local_24c = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_278 = 0;
    uStack_270 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_23b = 0;
    local_239 = 0;
    local_23c = 1;
    local_2bc = param_3;
    uVar6 = FUN_1491e6d5e(lVar5);
    local_100._0_4_ = 0xffffffff;
    local_100._4_4_ = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    local_ec = -1;
    if (&local_100 != param_8) {
      local_100._0_4_ = (undefined4)*param_8;
      local_100._4_4_ = (undefined4)((ulonglong)*param_8 >> 0x20);
    }
    FUN_1491dabdc(uVar6,&local_e8,param_7,&local_100);
    uVar7 = (ulonglong)local_e8;
    if (local_e8 == 0xffffffff) {
      uVar3 = 0xffffffff;
      puVar8 = (uint *)&DAT_14cc08210;
      if ((iStack_d4 != -1) && (1 < iStack_d8)) {
        FUN_1446f470e(&local_108,CONCAT44(uStack_dc,uStack_e0),1);
        local_e8 = (uint)local_108;
        uStack_e4 = (undefined4)(local_108 >> 0x20);
        uVar7 = local_108;
        goto LAB_14923a5a9;
      }
    }
    else {
LAB_14923a5a9:
      uVar3 = (uint)uVar7;
      puVar8 = &local_e8;
    }
    local_2dc = *(undefined8 *)puVar8;
    if (iStack_d4 != -1) {
      if (CONCAT44(uStack_dc,uStack_e0) != 0) {
        FUN_1400020a8();
        uVar3 = local_e8;
      }
      uStack_e0 = 0;
      uStack_dc = 0;
      iStack_d8 = 0;
      iStack_d4 = -1;
    }
    if (uVar3 != 0xffffffff) {
      local_e8 = 0xffffffff;
      uStack_e4 = 0;
    }
    if ((local_ec != -1) && (CONCAT44(uStack_f4,uStack_f8) != 0)) {
      FUN_1400020a8();
    }
    if (DAT_14c950c29 == '\x01') {
      if (*param_6 != 0) {
        FUN_1456cec3c();
        goto LAB_14923a653;
      }
      local_190 = 0;
    }
    else {
LAB_14923a653:
      local_190 = *param_6;
      if (local_190 != 0) {
        param_4 = FUN_1404d8156();
      }
    }
    local_1b5 = 0;
    local_1b7 = 0;
    local_234 = 0;
    uStack_22c = 0;
    local_224 = 0;
    uStack_21c = 0;
    local_214 = 0;
    uStack_20c = 0;
    local_204 = 0;
    uStack_1fc = 0;
    local_1f4 = 0;
    uStack_1ec = 0;
    local_1e4 = 0;
    uStack_1dc = 0;
    local_1d4 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    local_1b8 = 1;
    uVar1 = *(undefined4 *)(lVar5 + 0x4c);
    *(uint *)(lVar5 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    local_238 = param_4;
    FUN_14918b1f6(local_498);
    local_4a8 = *param_7;
    local_4a0 = *(undefined4 *)(param_7 + 1);
    local_4d8 = 0;
    local_4e0 = local_4e0 & 0xffffff00;
    local_4e8 = local_498;
    FUN_1491ed744(lVar5,&local_e8,*param_8);
    *(undefined4 *)(param_9 + 8) = uStack_e0;
    *(ulonglong *)param_9 = CONCAT44(uStack_e4,local_e8);
    if ((((uint)*(ushort *)(param_9 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_9 + 4) != 0))
       && (*param_9 != '\0')) {
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      local_65 = 0;
      local_67 = 0;
      local_4b8 = *(undefined8 *)param_9;
      local_4b0 = *(undefined4 *)(param_9 + 8);
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      iStack_d8 = 0;
      iStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      local_a4 = 0;
      uStack_9c = 0;
      local_94 = 0;
      uStack_8c = 0;
      local_84 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_68 = 1;
      local_e8 = param_2;
      uVar4 = FUN_140813180(uVar6);
      local_4e0 = local_4e0 & 0xffffff00;
      local_4e8 = (undefined1 *)((ulonglong)local_4e8 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_e8,0);
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      local_65 = 0;
      local_67 = 0;
      local_4c8 = *(undefined8 *)param_9;
      local_4c0 = *(undefined4 *)(param_9 + 8);
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      iStack_d8 = 0;
      iStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      local_a4 = 0;
      uStack_9c = 0;
      local_94 = 0;
      uStack_8c = 0;
      local_84 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_68 = 1;
      local_e8 = param_2;
      uVar4 = FUN_140813180(uVar6);
      local_4e0 = local_4e0 & 0xffffff00;
      local_4e8 = (undefined1 *)((ulonglong)local_4e8 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_e8,1);
    }
    *(undefined4 *)(lVar5 + 0x4c) = uVar1;
    FUN_14918b3e4(&local_2e0);
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
LAB_14923a434:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923a88c FUN_14923a88c body=83 status=ok
// SIG undefined FUN_14923a88c(void)

void FUN_14923a88c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923a950(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]
                ,puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923a8e0 FUN_14923a8e0 body=111 status=ok
// SIG undefined FUN_14923a8e0(void)

void FUN_14923a8e0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923a950(param_1 + 0x10,param_1 + 0x210,param_1 + 0x220,param_1 + 0x230,param_1 + 0x240,
                param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 14923a950 FUN_14923a950 body=1358 status=ok
// SIG undefined FUN_14923a950(void)

void FUN_14923a950(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,ulonglong *param_8)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_528 [32];
  undefined1 *local_508;
  uint local_500;
  undefined1 local_4f8;
  ulonglong local_4e8;
  undefined4 local_4e0;
  ulonglong local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined1 local_4b8 [440];
  undefined1 local_300;
  undefined1 local_2ff;
  undefined8 local_2fc;
  undefined2 *local_2f0;
  float local_2dc;
  float local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined2 local_25b;
  undefined1 local_259;
  float local_258;
  float local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined2 local_1d7;
  undefined1 local_1d5;
  longlong local_148 [2];
  longlong local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int local_10c;
  undefined8 local_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined2 local_87;
  undefined1 local_85;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_138 = 0;
  uStack_130 = 0;
  cVar5 = FUN_14923c708();
  if (cVar5 == '\0') goto LAB_14923aa30;
  FUN_1400021e4(param_7,local_148);
  local_500 = 0xffffffff;
  local_508 = (undefined1 *)((ulonglong)local_508 & 0xffffffff00000000);
  FUN_1447ee042(local_148,&DAT_149e31048,1,1);
  *(char *)param_8 = '\b';
  pcVar1 = (char *)((longlong)param_8 + 4);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  lVar8 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar8 != 0) {
    FUN_1491d73b0(&local_300);
    local_2ff = 3;
    FUN_1491d74b0(&local_300,1,1,1);
    *local_2f0 = *param_5;
    local_2f0[1] = param_5[1];
    local_2d8 = (float)param_3[1];
    local_2dc = (float)*param_3;
    local_260 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_25b = 0;
    local_259 = 0;
    local_2d4 = 0;
    local_25c = 1;
    local_254 = (float)param_4[1];
    local_258 = (float)*param_4;
    local_1d5 = 0;
    local_1d7 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 1;
    uVar9 = FUN_1491e6d5e(lVar8);
    local_120._0_4_ = 0xffffffff;
    local_120._4_4_ = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    local_10c = -1;
    if (&local_120 != param_7) {
      local_120._0_4_ = (undefined4)*param_7;
      local_120._4_4_ = (undefined4)((ulonglong)*param_7 >> 0x20);
    }
    FUN_1491dabdc(uVar9,&local_108,param_6,&local_120);
    uVar10 = local_108 & 0xffffffff;
    if ((int)local_108 == -1) {
      iVar6 = -1;
      puVar11 = &DAT_14cc08210;
      if ((uStack_f8._4_4_ != -1) && (1 < (int)uStack_f8)) {
        FUN_1446f470e(&local_128,local_100,1);
        local_108 = local_128;
        uVar10 = local_128;
        goto LAB_14923ac4d;
      }
    }
    else {
LAB_14923ac4d:
      iVar6 = (int)uVar10;
      puVar11 = &local_108;
    }
    local_2fc = *puVar11;
    if (uStack_f8._4_4_ != -1) {
      if (local_100 != 0) {
        FUN_1400020a8();
        iVar6 = (int)local_108;
      }
      local_100 = 0;
      uStack_f8 = 0xffffffff00000000;
    }
    if (iVar6 != -1) {
      local_108 = 0xffffffff;
    }
    if ((local_10c != -1) && (CONCAT44(uStack_114,uStack_118) != 0)) {
      FUN_1400020a8();
    }
    dVar2 = *param_2;
    dVar3 = param_2[1];
    uVar4 = *(undefined4 *)(lVar8 + 0x4c);
    *(uint *)(lVar8 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_4b8,&local_300);
    local_4c8 = *param_6;
    local_4c0 = *(undefined4 *)(param_6 + 1);
    local_4f8 = 0;
    local_500 = local_500 & 0xffffff00;
    local_508 = local_4b8;
    FUN_1491ed744(lVar8,&local_108,*param_7);
    *(undefined4 *)(param_8 + 1) = (undefined4)local_100;
    *param_8 = local_108;
    if ((((uint)*(ushort *)((longlong)param_8 + 6) < DAT_14c87eb08 + 1U) &&
        (*(longlong *)((longlong)param_8 + 4) != 0)) && ((char)*param_8 != '\0')) {
      uVar9 = *(undefined8 *)(param_1 + 0x1b0);
      local_85 = 0;
      local_87 = 0;
      local_4d8 = *param_8;
      local_4d0 = (undefined4)param_8[1];
      local_108 = CONCAT44((float)dVar3,(float)dVar2);
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 1;
      uVar7 = FUN_140813180(uVar9);
      local_500 = local_500 & 0xffffff00;
      local_508 = (undefined1 *)((ulonglong)local_508 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar9,uVar7,&local_108,0);
      uVar9 = *(undefined8 *)(param_1 + 0x1b0);
      local_85 = 0;
      local_87 = 0;
      local_4e8 = *param_8;
      local_4e0 = (undefined4)param_8[1];
      local_108 = CONCAT44((float)dVar3,(float)dVar2);
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 1;
      uVar7 = FUN_140813180(uVar9);
      local_500 = local_500 & 0xffffff00;
      local_508 = (undefined1 *)((ulonglong)local_508 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar9,uVar7,&local_108,1);
    }
    *(undefined4 *)(lVar8 + 0x4c) = uVar4;
    FUN_14918b3e4(&local_300);
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
LAB_14923aa30:
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923aea0 FUN_14923aea0 body=83 status=ok
// SIG undefined FUN_14923aea0(void)

void FUN_14923aea0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923af64(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]
                ,puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923aef4 FUN_14923aef4 body=111 status=ok
// SIG undefined FUN_14923aef4(void)

void FUN_14923aef4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923af64(param_1 + 0x10,param_1 + 0x210,param_1 + 0x228,param_1 + 0x240,param_1 + 600,
                param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 14923af64 FUN_14923af64 body=1432 status=ok
// SIG undefined FUN_14923af64(void)

void FUN_14923af64(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,ulonglong *param_8)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  uint local_510;
  undefined1 local_508;
  ulonglong local_4f8;
  undefined4 local_4f0;
  ulonglong local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 local_4c8 [440];
  undefined1 local_310;
  undefined1 local_30f;
  undefined8 local_30c;
  undefined2 *local_300;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined1 local_26c;
  undefined2 local_26b;
  undefined1 local_269;
  float local_268;
  float local_264;
  float local_260;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined2 local_1e7;
  undefined1 local_1e5;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  undefined8 local_118;
  float local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_148 = 0;
  uStack_140 = 0;
  cVar6 = FUN_14923c708();
  if (cVar6 == '\0') goto LAB_14923b04d;
  FUN_1400021e4(param_7,local_158);
  local_510 = 0xffffffff;
  local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffff00000000);
  FUN_1447ee042(local_158,&DAT_149e31048,1,1);
  *(char *)param_8 = '\b';
  pcVar1 = (char *)((longlong)param_8 + 4);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  lVar9 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar9 != 0) {
    FUN_1491d73b0(&local_310);
    local_30f = 4;
    FUN_1491d74b0(&local_310,1,1,1);
    *local_300 = *param_5;
    local_300[1] = param_5[1];
    local_300[2] = param_5[2];
    local_2e4 = (float)param_3[2];
    local_2e8 = (float)param_3[1];
    local_2ec = (float)*param_3;
    local_270 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_26b = 0;
    local_269 = 0;
    local_26c = 1;
    local_260 = (float)param_4[2];
    local_264 = (float)param_4[1];
    local_268 = (float)*param_4;
    local_1e5 = 0;
    local_1e7 = 0;
    local_25c = 0;
    uStack_254 = 0;
    local_24c = 0;
    uStack_244 = 0;
    local_23c = 0;
    uStack_234 = 0;
    local_22c = 0;
    uStack_224 = 0;
    local_21c = 0;
    uStack_214 = 0;
    local_20c = 0;
    uStack_204 = 0;
    local_1fc = 0;
    uStack_1f4 = 0;
    local_1ec = 0;
    local_1e8 = 1;
    uVar10 = FUN_1491e6d5e(lVar9);
    local_130._0_4_ = 0xffffffff;
    local_130._4_4_ = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_11c = -1;
    if (&local_130 != param_7) {
      local_130._0_4_ = (undefined4)*param_7;
      local_130._4_4_ = (undefined4)((ulonglong)*param_7 >> 0x20);
    }
    FUN_1491dabdc(uVar10,&local_118,param_6,&local_130);
    uVar11 = local_118 & 0xffffffff;
    if ((int)local_118 == -1) {
      iVar7 = -1;
      puVar12 = &DAT_14cc08210;
      if ((iStack_104 != -1) && (1 < iStack_108)) {
        FUN_1446f470e(&local_138,CONCAT44(uStack_10c,local_110),1);
        local_118 = local_138;
        uVar11 = local_138;
        goto LAB_14923b294;
      }
    }
    else {
LAB_14923b294:
      iVar7 = (int)uVar11;
      puVar12 = &local_118;
    }
    local_30c = *puVar12;
    if (iStack_104 != -1) {
      if (CONCAT44(uStack_10c,local_110) != 0) {
        FUN_1400020a8();
        iVar7 = (int)local_118;
      }
      local_110 = 0.0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = -1;
    }
    if (iVar7 != -1) {
      local_118 = 0xffffffff;
    }
    if ((local_11c != -1) && (CONCAT44(uStack_124,uStack_128) != 0)) {
      FUN_1400020a8();
    }
    dVar2 = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    uVar5 = *(undefined4 *)(lVar9 + 0x4c);
    *(uint *)(lVar9 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_4c8,&local_310);
    local_4d8 = *param_6;
    local_4d0 = *(undefined4 *)(param_6 + 1);
    local_508 = 0;
    local_510 = local_510 & 0xffffff00;
    local_518 = local_4c8;
    FUN_1491ed744(lVar9,&local_118,*param_7);
    *(float *)(param_8 + 1) = local_110;
    *param_8 = local_118;
    if ((((uint)*(ushort *)((longlong)param_8 + 6) < DAT_14c87eb08 + 1U) &&
        (*(longlong *)((longlong)param_8 + 4) != 0)) && ((char)*param_8 != '\0')) {
      uVar10 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4e8 = *param_8;
      local_4e0 = (undefined4)param_8[1];
      local_118 = CONCAT44((float)dVar4,(float)dVar3);
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      local_98 = 1;
      local_110 = (float)dVar2;
      uVar8 = FUN_140813180(uVar10);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar10,uVar8,&local_118,0);
      uVar10 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4f8 = *param_8;
      local_4f0 = (undefined4)param_8[1];
      local_118 = CONCAT44((float)dVar4,(float)dVar3);
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      local_98 = 1;
      local_110 = (float)dVar2;
      uVar8 = FUN_140813180(uVar10);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar10,uVar8,&local_118,1);
    }
    *(undefined4 *)(lVar9 + 0x4c) = uVar5;
    FUN_14918b3e4(&local_310);
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_14923b04d:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923b4fe FUN_14923b4fe body=83 status=ok
// SIG undefined FUN_14923b4fe(void)

void FUN_14923b4fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923b5c2(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]
                ,puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923b552 FUN_14923b552 body=111 status=ok
// SIG undefined FUN_14923b552(void)

void FUN_14923b552(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923b5c2(param_1 + 0x10,param_1 + 0x210,param_1 + 0x228,param_1 + 0x240,param_1 + 600,
                param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 14923b5c2 FUN_14923b5c2 body=1432 status=ok
// SIG undefined FUN_14923b5c2(void)

void FUN_14923b5c2(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,ulonglong *param_8)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  uint local_510;
  undefined1 local_508;
  ulonglong local_4f8;
  undefined4 local_4f0;
  ulonglong local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 local_4c8 [440];
  undefined1 local_310;
  undefined1 local_30f;
  undefined8 local_30c;
  undefined2 *local_300;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined1 local_26c;
  undefined2 local_26b;
  undefined1 local_269;
  float local_268;
  float local_264;
  float local_260;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined2 local_1e7;
  undefined1 local_1e5;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  undefined8 local_118;
  float local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_148 = 0;
  uStack_140 = 0;
  cVar6 = FUN_14923c708();
  if (cVar6 == '\0') goto LAB_14923b6ab;
  FUN_1400021e4(param_7,local_158);
  local_510 = 0xffffffff;
  local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffff00000000);
  FUN_1447ee042(local_158,&DAT_149e31048,1,1);
  *(char *)param_8 = '\b';
  pcVar1 = (char *)((longlong)param_8 + 4);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  lVar9 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar9 != 0) {
    FUN_1491d73b0(&local_310);
    local_30f = 5;
    FUN_1491d74b0(&local_310,1,1,1);
    *local_300 = *param_5;
    local_300[1] = param_5[1];
    local_300[2] = param_5[2];
    local_2e4 = (float)param_3[2];
    local_2e8 = (float)param_3[1];
    local_2ec = (float)*param_3;
    local_270 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_26b = 0;
    local_269 = 0;
    local_26c = 1;
    local_260 = (float)param_4[2];
    local_264 = (float)param_4[1];
    local_268 = (float)*param_4;
    local_1e5 = 0;
    local_1e7 = 0;
    local_25c = 0;
    uStack_254 = 0;
    local_24c = 0;
    uStack_244 = 0;
    local_23c = 0;
    uStack_234 = 0;
    local_22c = 0;
    uStack_224 = 0;
    local_21c = 0;
    uStack_214 = 0;
    local_20c = 0;
    uStack_204 = 0;
    local_1fc = 0;
    uStack_1f4 = 0;
    local_1ec = 0;
    local_1e8 = 1;
    uVar10 = FUN_1491e6d5e(lVar9);
    local_130._0_4_ = 0xffffffff;
    local_130._4_4_ = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_11c = -1;
    if (&local_130 != param_7) {
      local_130._0_4_ = (undefined4)*param_7;
      local_130._4_4_ = (undefined4)((ulonglong)*param_7 >> 0x20);
    }
    FUN_1491dabdc(uVar10,&local_118,param_6,&local_130);
    uVar11 = local_118 & 0xffffffff;
    if ((int)local_118 == -1) {
      iVar7 = -1;
      puVar12 = &DAT_14cc08210;
      if ((iStack_104 != -1) && (1 < iStack_108)) {
        FUN_1446f470e(&local_138,CONCAT44(uStack_10c,local_110),1);
        local_118 = local_138;
        uVar11 = local_138;
        goto LAB_14923b8f2;
      }
    }
    else {
LAB_14923b8f2:
      iVar7 = (int)uVar11;
      puVar12 = &local_118;
    }
    local_30c = *puVar12;
    if (iStack_104 != -1) {
      if (CONCAT44(uStack_10c,local_110) != 0) {
        FUN_1400020a8();
        iVar7 = (int)local_118;
      }
      local_110 = 0.0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = -1;
    }
    if (iVar7 != -1) {
      local_118 = 0xffffffff;
    }
    if ((local_11c != -1) && (CONCAT44(uStack_124,uStack_128) != 0)) {
      FUN_1400020a8();
    }
    dVar2 = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    uVar5 = *(undefined4 *)(lVar9 + 0x4c);
    *(uint *)(lVar9 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_4c8,&local_310);
    local_4d8 = *param_6;
    local_4d0 = *(undefined4 *)(param_6 + 1);
    local_508 = 0;
    local_510 = local_510 & 0xffffff00;
    local_518 = local_4c8;
    FUN_1491ed744(lVar9,&local_118,*param_7);
    *(float *)(param_8 + 1) = local_110;
    *param_8 = local_118;
    if ((((uint)*(ushort *)((longlong)param_8 + 6) < DAT_14c87eb08 + 1U) &&
        (*(longlong *)((longlong)param_8 + 4) != 0)) && ((char)*param_8 != '\0')) {
      uVar10 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4e8 = *param_8;
      local_4e0 = (undefined4)param_8[1];
      local_118 = CONCAT44((float)dVar4,(float)dVar3);
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      local_98 = 1;
      local_110 = (float)dVar2;
      uVar8 = FUN_140813180(uVar10);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar10,uVar8,&local_118,0);
      uVar10 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4f8 = *param_8;
      local_4f0 = (undefined4)param_8[1];
      local_118 = CONCAT44((float)dVar4,(float)dVar3);
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      local_98 = 1;
      local_110 = (float)dVar2;
      uVar8 = FUN_140813180(uVar10);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar10,uVar8,&local_118,1);
    }
    *(undefined4 *)(lVar9 + 0x4c) = uVar5;
    FUN_14918b3e4(&local_310);
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_14923b6ab:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923bb5c FUN_14923bb5c body=83 status=ok
// SIG undefined FUN_14923bb5c(void)

void FUN_14923bb5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923bc20(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]
                ,puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923bbb0 FUN_14923bbb0 body=111 status=ok
// SIG undefined FUN_14923bbb0(void)

void FUN_14923bbb0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923bc20(param_1 + 0x10,param_1 + 0x210,param_1 + 0x228,param_1 + 0x240,param_1 + 600,
                param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 14923bc20 FUN_14923bc20 body=1493 status=ok
// SIG undefined FUN_14923bc20(void)

void FUN_14923bc20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,double *param_8)

{
  char *pcVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 *puVar11;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  uint local_510;
  undefined1 local_508;
  double local_4f8;
  undefined4 local_4f0;
  double local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 local_4c8 [440];
  undefined1 local_310;
  undefined1 local_30f;
  undefined8 local_30c;
  undefined2 *local_300;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined1 local_26c;
  undefined2 local_26b;
  undefined1 local_269;
  float local_268;
  float local_264;
  float local_260;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined8 uStack_214;
  undefined8 local_20c;
  undefined8 uStack_204;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined2 local_1e7;
  undefined1 local_1e5;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  undefined8 local_118;
  float local_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_148 = 0;
  uStack_140 = 0;
  cVar5 = FUN_14923c708();
  if (cVar5 == '\0') goto LAB_14923bd08;
  FUN_1400021e4(param_7,local_158);
  local_510 = 0xffffffff;
  local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffff00000000);
  FUN_1447ee042(local_158,&DAT_149e31048,1,1);
  *(char *)param_8 = '\b';
  pcVar1 = (char *)((longlong)param_8 + 4);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  lVar8 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar8 != 0) {
    FUN_1491d73b0(&local_310);
    local_30f = 6;
    FUN_1491d74b0(&local_310,1,1,1);
    *local_300 = *param_5;
    local_300[1] = param_5[1];
    local_300[2] = param_5[2];
    FUN_1414d053e(param_3,&local_118);
    local_2e4 = (float)(double)CONCAT44(iStack_104,iStack_108);
    local_2e8 = (float)(double)CONCAT44(uStack_10c,local_110);
    local_2ec = (float)local_118;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    local_26b = 0;
    local_269 = 0;
    local_26c = 1;
    FUN_1414d053e(param_4,&local_118);
    local_260 = (float)(double)CONCAT44(iStack_104,iStack_108);
    local_264 = (float)(double)CONCAT44(uStack_10c,local_110);
    local_268 = (float)local_118;
    local_1e7 = 0;
    local_1e5 = 0;
    local_25c = 0;
    uStack_254 = 0;
    local_24c = 0;
    uStack_244 = 0;
    local_23c = 0;
    uStack_234 = 0;
    local_22c = 0;
    uStack_224 = 0;
    local_21c = 0;
    uStack_214 = 0;
    local_20c = 0;
    uStack_204 = 0;
    local_1fc = 0;
    uStack_1f4 = 0;
    local_1ec = 0;
    local_1e8 = 1;
    uVar9 = FUN_1491e6d5e(lVar8);
    local_130._0_4_ = 0xffffffff;
    local_130._4_4_ = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_11c = -1;
    if (&local_130 != param_7) {
      local_130._0_4_ = (undefined4)*param_7;
      local_130._4_4_ = (undefined4)((ulonglong)*param_7 >> 0x20);
    }
    FUN_1491dabdc(uVar9,&local_118,param_6,&local_130);
    dVar10 = (double)((ulonglong)local_118 & 0xffffffff);
    if ((int)local_118 == -1) {
      iVar6 = -1;
      puVar11 = &DAT_14cc08210;
      if ((iStack_104 != -1) && (1 < iStack_108)) {
        FUN_1446f470e(&local_138,CONCAT44(uStack_10c,local_110),1);
        local_118 = local_138;
        dVar10 = local_138;
        goto LAB_14923bf78;
      }
    }
    else {
LAB_14923bf78:
      iVar6 = SUB84(dVar10,0);
      puVar11 = &local_118;
    }
    local_30c = *puVar11;
    if (iStack_104 != -1) {
      if (CONCAT44(uStack_10c,local_110) != 0) {
        FUN_1400020a8();
        iVar6 = (int)local_118;
      }
      local_110 = 0.0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = -1;
    }
    if (iVar6 != -1) {
      local_118 = 2.12199579047121e-314;
    }
    if ((local_11c != -1) && (CONCAT44(uStack_124,uStack_128) != 0)) {
      FUN_1400020a8();
    }
    FUN_1414d053e(param_2,&local_118);
    dVar4 = local_118;
    dVar3 = (double)CONCAT44(iStack_104,iStack_108);
    dVar10 = (double)CONCAT44(uStack_10c,local_110);
    uVar2 = *(undefined4 *)(lVar8 + 0x4c);
    *(uint *)(lVar8 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_4c8,&local_310);
    local_4d8 = *param_6;
    local_4d0 = *(undefined4 *)(param_6 + 1);
    local_508 = 0;
    local_510 = local_510 & 0xffffff00;
    local_518 = local_4c8;
    FUN_1491ed744(lVar8,&local_118,*param_7);
    *(float *)(param_8 + 1) = local_110;
    *param_8 = local_118;
    if ((((uint)*(ushort *)((longlong)param_8 + 6) < DAT_14c87eb08 + 1U) &&
        (*(longlong *)((longlong)param_8 + 4) != 0)) && (*(char *)param_8 != '\0')) {
      uVar9 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4e8 = *param_8;
      local_4e0 = *(undefined4 *)(param_8 + 1);
      local_118 = (double)CONCAT44((float)dVar10,(float)dVar4);
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      local_98 = 1;
      local_110 = (float)dVar3;
      uVar7 = FUN_140813180(uVar9);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar9,uVar7,&local_118,0);
      uVar9 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4f8 = *param_8;
      local_4f0 = *(undefined4 *)(param_8 + 1);
      local_118 = (double)CONCAT44((float)dVar10,(float)dVar4);
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      local_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      local_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      local_98 = 1;
      local_110 = (float)dVar3;
      uVar7 = FUN_140813180(uVar9);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar9,uVar7,&local_118,1);
    }
    *(undefined4 *)(lVar8 + 0x4c) = uVar2;
    FUN_14918b3e4(&local_310);
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_14923bd08:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c20c FUN_14923c20c body=113 status=ok
// SIG undefined FUN_14923c20c(void)

void FUN_14923c20c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14923c27e(local_1f8,param_1 + 8,param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c27e FUN_14923c27e body=287 status=ok
// SIG undefined FUN_14923c27e(void)

void FUN_14923c27e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8._0_1_ = 1;
  FUN_1446f470e((longlong)&local_b8 + 4,L"Default",1);
  local_ac = 0x3f800000;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0x3f800000;
  puVar7 = &DAT_14c846480;
  puVar8 = local_98;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = &local_b8;
  puVar8 = param_3;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 != 0) {
    uVar5 = FUN_140813180(lVar6,param_2);
    if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar6 + 0xc0))) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar5 * 8), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0x10) == '\x04')) {
      *(undefined1 *)param_3 = *(undefined1 *)(lVar1 + 0x33c);
      uVar2 = *(undefined4 *)(lVar1 + 0x34c);
      uVar3 = *(undefined4 *)(lVar1 + 0x350);
      uVar4 = *(undefined4 *)(lVar1 + 0x354);
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(lVar1 + 0x348);
      *(undefined4 *)(param_3 + 2) = uVar2;
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
      *(undefined4 *)(param_3 + 3) = uVar4;
      *(undefined8 *)((longlong)param_3 + 4) = *(undefined8 *)(lVar1 + 0x340);
      FUN_14449ed30(lVar6,&local_b8,lVar1,0);
      puVar7 = &local_b8;
      puVar8 = param_3 + 4;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c3b4 FUN_14923c3b4 body=54 status=ok
// SIG undefined FUN_14923c3b4(void)

void FUN_14923c3b4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923c3ea(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200);
  return;
}



// FUNCTION 14923c3ea FUN_14923c3ea body=272 status=ok
// SIG undefined FUN_14923c3ea(void)

void FUN_14923c3ea(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    uVar6 = FUN_140813180(lVar1);
    if ((((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar1 + 0xc0))) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar6 * 8), lVar2 != 0)) &&
       (*(char *)(lVar2 + 0x10) == '\x04')) {
      *(undefined1 *)(lVar2 + 0x33c) = *param_3;
      uVar3 = *(undefined4 *)(param_3 + 0x10);
      uVar4 = *(undefined4 *)(param_3 + 0x14);
      uVar5 = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(lVar2 + 0x348) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(lVar2 + 0x34c) = uVar3;
      *(undefined4 *)(lVar2 + 0x350) = uVar4;
      *(undefined4 *)(lVar2 + 0x354) = uVar5;
      *(undefined8 *)(lVar2 + 0x340) = *(undefined8 *)(param_3 + 4);
      FUN_140ad4746(lVar1,7,lVar2);
      puVar8 = (undefined8 *)(param_3 + 0x20);
      puVar9 = local_98;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      local_108 = 0;
      FUN_14918bbd4(lVar1,*(undefined4 *)(lVar2 + 0x1c),local_98,1);
      puVar8 = (undefined8 *)(param_3 + 0x20);
      puVar9 = local_f8;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      local_108 = 0;
      FUN_14918bbd4(lVar1,*(undefined4 *)(lVar2 + 0x1c),local_f8,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c4fc FUN_14923c4fc body=86 status=ok
// SIG undefined FUN_14923c4fc(void)

void FUN_14923c4fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923c5c2(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923c552 FUN_14923c552 body=111 status=ok
// SIG undefined FUN_14923c552(void)

void FUN_14923c552(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923c5c2(param_1 + 0x10,param_1 + 0x210,*(undefined1 *)(param_1 + 0x270),param_1 + 0x274,
                param_1 + 0x288,param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 14923c5c2 FUN_14923c5c2 body=325 status=ok
// SIG undefined FUN_14923c5c2(void)

void FUN_14923c5c2(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [12];
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = 0;
  uStack_50 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      local_108 = local_c8;
      puVar5 = local_108;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_d0 = *(undefined4 *)(param_6 + 1);
      local_d8 = *param_6;
      local_100 = param_3 == '\x01';
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = param_5;
      local_f8 = param_4;
      FUN_1491d8f5c(lVar3,&local_64,*param_7);
      *(undefined4 *)(param_8 + 1) = local_5c;
      *param_8 = local_64;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c708 FUN_14923c708 body=381 status=ok
// SIG undefined FUN_14923c708(void)

undefined8 FUN_14923c708(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    cVar1 = FUN_1492d52f6();
    if (cVar1 == '\0') {
      if (param_2 != (longlong *)0x0) {
        FUN_1446f57c6(&DAT_14cc074e8,&local_40);
        FUN_1400021e4(&local_40,&local_50);
        puVar4 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar4 = local_50;
        }
        FUN_1446f57c6(&DAT_14cc074d8,&local_40);
        FUN_1400021e4(&local_40,&local_60);
        puVar3 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar3 = local_60;
        }
        FUN_140002266(&local_40,L"Node can only run in %s or %s Event",puVar3,puVar4);
        if (&local_40 == param_2) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_40;
          local_40 = 0;
          *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
          local_38 = 0;
        }
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x1b0) >> 8),1);
      if (*(int *)(*(longlong *)(param_1 + 0x1b0) + 0xc0) < *(int *)(param_1 + 0x150))
      goto LAB_14923c852;
      if (param_2 != (longlong *)0x0) {
        FUN_14020fad6(param_2,
                      L"Node has hit the Procedural Element Limit. Check the Class Settings under Hierarchy."
                     );
      }
    }
  }
  uVar2 = 0;
LAB_14923c852:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c886 FUN_14923c886 body=174 status=ok
// SIG undefined FUN_14923c886(void)

undefined8 FUN_14923c886(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &PTR_FUN_14bbe7d80;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_58 = *(undefined8 *)(param_1 + 8);
  local_50 = *(undefined4 *)(param_1 + 0x10);
  FUN_1491bfba4(local_48,param_1 + 0x18);
  FUN_1444888de(local_48 + 2,param_1 + 0x28);
  FUN_1490faf2e(param_2);
  local_60 = &PTR_FUN_14bbe7d80;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923c936 FUN_14923c936 body=82 status=ok
// SIG undefined FUN_14923c936(void)

longlong FUN_14923c936(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_144a74fb4();
  lVar2 = FUN_14570d344(param_1,&DAT_14cc06918,uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14923c988 FUN_14923c988 body=322 status=ok
// SIG undefined FUN_14923c988(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14923c988(double *param_1,double *param_2,char param_3,char *param_4,undefined8 param_5
                      )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_3 == '\x01') && ((uint)*(ushort *)(param_4 + 6) < DAT_14c87eb08 + 1U)) &&
      (*(longlong *)(param_4 + 4) != 0)) && (*param_4 != '\0')) {
    local_98 = *(undefined8 *)param_4;
    local_90 = *(undefined4 *)(param_4 + 8);
    uVar5 = FUN_140813180(param_5);
    FUN_14486750c(param_5,local_88,uVar5,0);
    FUN_1449437a2(param_2,param_1,local_88);
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar3 = param_1[2];
    dVar4 = param_1[3];
    dVar8 = dVar3 * dVar3 + dVar1 * dVar1;
    dVar11 = dVar4 * dVar4 + dVar2 * dVar2;
    auVar9._0_8_ = dVar8 + dVar11;
    auVar9._8_8_ = dVar8 + dVar11;
    auVar10 = sqrtpd(auVar9,auVar9);
    auVar12 = divpd(_DAT_149934d80,auVar10);
    auVar13._0_8_ = auVar12._0_8_ * dVar3;
    auVar13._8_8_ = auVar12._8_8_ * dVar4;
    auVar10._8_8_ = -(ulonglong)(1e-08 <= auVar9._8_8_);
    auVar10._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
    auVar10 = blendvpd(_DAT_149935300,auVar13,auVar10);
    *param_1 = (double)((ulonglong)(dVar1 * auVar12._0_8_) & -(ulonglong)(1e-08 <= auVar9._0_8_));
    param_1[1] = (double)((ulonglong)(dVar2 * auVar12._8_8_) & -(ulonglong)(1e-08 <= auVar9._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
  pdVar7 = param_1;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_2;
    param_2 = param_2 + 1;
    pdVar7 = pdVar7 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923cae2 FUN_14923cae2 body=215 status=ok
// SIG undefined FUN_14923cae2(void)

void FUN_14923cae2(undefined2 *param_1,longlong param_2)

{
  FUN_1491d74b0(param_2,0,0,0);
  **(undefined2 **)(param_2 + 0x10) = *param_1;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 2);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x94) = 0;
  *(undefined8 *)(param_2 + 0x9c) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined2 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(param_2 + 0xac) = 0;
  *(undefined8 *)(param_2 + 0xb4) = 0;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined8 *)(param_2 + 0xd4) = 0;
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xec) = 0;
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined1 *)(param_2 + 0x128) = 1;
  *(undefined2 *)(param_2 + 0x129) = 0;
  *(undefined1 *)(param_2 + 299) = 0;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 6);
  return;
}



// FUNCTION 14923cbba FUN_14923cbba body=193 status=ok
// SIG undefined FUN_14923cbba(void)

void FUN_14923cbba(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  *(bool *)(param_1 + 0x11) = param_3[1] == '\n';
  *(char *)(param_1 + 0x10) = param_3[0xc];
  *(bool *)(param_1 + 0xb0) = *param_3 == '\x02';
  FUN_1444888de(param_1 + 0xb8,param_3 + 0x178);
  *(char *)(param_1 + 200) = param_3[0x12d];
  *(undefined2 *)(param_1 + 0x14) = **(undefined2 **)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0xa8);
  *(char *)(param_1 + 0x20) = param_3[0x20];
  *(char *)(param_1 + 0x30) = param_3[300];
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_3 + 0x130);
  uVar1 = *(undefined4 *)(param_3 + 0x13c);
  uVar2 = *(undefined4 *)(param_3 + 0x140);
  uVar3 = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  lVar4 = FUN_1491f6e42(param_2);
  puVar5 = (undefined8 *)FUN_144b3cbe6(lVar4 + 0x20);
  puVar6 = (undefined8 *)(param_1 + 0x50);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}



// FUNCTION 14923cc7c FUN_14923cc7c body=134 status=ok
// SIG undefined FUN_14923cc7c(void)

void FUN_14923cc7c(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 8);
  param_2[1] = (*(char *)(param_1 + 0x11) != '\0') * '\t' + '\x01';
  param_2[0xc] = *(char *)(param_1 + 0x10);
  *param_2 = *(char *)(param_1 + 0xb0) * '\x02';
  FUN_1444888de(param_2 + 0x178,param_1 + 0xb8);
  param_2[0x12d] = *(char *)(param_1 + 200);
  FUN_14923cae2(param_1 + 0x14,param_2);
  param_2[300] = *(char *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  return;
}



// FUNCTION 14923cd02 FUN_14923cd02 body=231 status=ok
// SIG undefined FUN_14923cd02(void)

void FUN_14923cd02(undefined2 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_1491d74b0(param_2,0,0,0);
  **(undefined2 **)(param_2 + 0x10) = *param_1;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 2);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x94) = 0;
  *(undefined8 *)(param_2 + 0x9c) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined2 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  if (*(longlong *)(param_2 + 0x150) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = FUN_1404d8156();
  }
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0xec) = 0;
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined8 *)(param_2 + 0xd4) = 0;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined8 *)(param_2 + 0xac) = 0;
  *(undefined8 *)(param_2 + 0xb4) = 0;
  *(undefined2 *)(param_2 + 0x129) = 0;
  *(undefined1 *)(param_2 + 299) = 0;
  *(undefined4 *)(param_2 + 0xa8) = uVar1;
  *(undefined1 *)(param_2 + 0x128) = 1;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 6);
  return;
}



// FUNCTION 14923cdea FUN_14923cdea body=223 status=ok
// SIG undefined FUN_14923cdea(void)

void FUN_14923cdea(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  *(char *)(param_1 + 0x10) = param_3[0xc];
  lVar4 = *(longlong *)(param_3 + 0x150);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_3 + 0x150);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  *(bool *)(param_1 + 0xb0) = *param_3 == '\x02';
  FUN_1444888de(param_1 + 0xb8,param_3 + 0x178);
  *(char *)(param_1 + 200) = param_3[0x12d];
  *(undefined2 *)(param_1 + 0x20) = **(undefined2 **)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0xa8);
  *(char *)(param_1 + 0x2c) = param_3[0x20];
  *(char *)(param_1 + 0x30) = param_3[300];
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_3 + 0x130);
  uVar1 = *(undefined4 *)(param_3 + 0x13c);
  uVar2 = *(undefined4 *)(param_3 + 0x140);
  uVar3 = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  lVar4 = FUN_1491f6e42(param_2);
  puVar5 = (undefined8 *)FUN_144b3cbe6(lVar4 + 0x20);
  puVar6 = (undefined8 *)(param_1 + 0x50);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}



// FUNCTION 14923ceca FUN_14923ceca body=159 status=ok
// SIG undefined FUN_14923ceca(void)

void FUN_14923ceca(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 8);
  param_2[1] = '\x02';
  param_2[0xc] = *(char *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_1 + 0x18);
    }
  }
  *(longlong *)(param_2 + 0x150) = lVar2;
  *param_2 = *(char *)(param_1 + 0xb0) * '\x02';
  FUN_1444888de(param_2 + 0x178,param_1 + 0xb8);
  param_2[0x12d] = *(char *)(param_1 + 200);
  FUN_14923cd02(param_1 + 0x20,param_2);
  param_2[300] = *(char *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  return;
}



// FUNCTION 14923cf6a FUN_14923cf6a body=253 status=ok
// SIG undefined FUN_14923cf6a(void)

void FUN_14923cf6a(undefined2 *param_1,longlong param_2)

{
  double dVar1;
  
  FUN_1491d74b0(param_2,0,0,0);
  **(undefined2 **)(param_2 + 0x10) = *param_1;
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 2) = param_1[1];
  dVar1 = *(double *)(param_1 + 8);
  *(float *)(param_2 + 0x24) = (float)*(double *)(param_1 + 4);
  *(float *)(param_2 + 0x28) = (float)dVar1;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(param_2 + 0x74) = 0;
  *(undefined8 *)(param_2 + 0x7c) = 0;
  *(undefined8 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x8c) = 0;
  *(undefined8 *)(param_2 + 0x94) = 0;
  *(undefined8 *)(param_2 + 0x9c) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined2 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  dVar1 = *(double *)(param_1 + 0x10);
  *(float *)(param_2 + 0xa8) = (float)*(double *)(param_1 + 0xc);
  *(float *)(param_2 + 0xac) = (float)dVar1;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined1 *)(param_2 + 0x128) = 1;
  *(undefined2 *)(param_2 + 0x129) = 0;
  *(undefined1 *)(param_2 + 299) = 0;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x14);
  return;
}



// FUNCTION 14923d068 FUN_14923d068 body=243 status=ok
// SIG undefined FUN_14923d068(void)

void FUN_14923d068(longlong param_1,undefined8 param_2,char *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  *(char *)(param_1 + 0x10) = param_3[0xc];
  FUN_1491920d2(param_1 + 0xf0,param_3 + 0x1a0);
  *(bool *)(param_1 + 0xd0) = *param_3 == '\x02';
  FUN_1444888de(param_1 + 0xd8,param_3 + 0x178);
  *(char *)(param_1 + 0xe8) = param_3[0x12d];
  *(undefined2 *)(param_1 + 0x18) = **(undefined2 **)(param_3 + 0x10);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(*(longlong *)(param_3 + 0x10) + 2);
  fVar1 = *(float *)(param_3 + 0x28);
  *(double *)(param_1 + 0x20) = (double)*(float *)(param_3 + 0x24);
  *(double *)(param_1 + 0x28) = (double)fVar1;
  fVar1 = *(float *)(param_3 + 0xac);
  *(double *)(param_1 + 0x30) = (double)*(float *)(param_3 + 0xa8);
  *(double *)(param_1 + 0x38) = (double)fVar1;
  *(char *)(param_1 + 0x40) = param_3[0x20];
  *(char *)(param_1 + 0x50) = param_3[300];
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_3 + 0x130);
  uVar2 = *(undefined4 *)(param_3 + 0x13c);
  uVar3 = *(undefined4 *)(param_3 + 0x140);
  uVar4 = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  lVar5 = FUN_1491f6e42(param_2);
  puVar6 = (undefined8 *)FUN_144b3cbe6(lVar5 + 0x20);
  puVar7 = (undefined8 *)(param_1 + 0x70);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}



// FUNCTION 14923d15c FUN_14923d15c body=140 status=ok
// SIG undefined FUN_14923d15c(void)

void FUN_14923d15c(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 8);
  param_2[1] = '\x03';
  param_2[0xc] = *(char *)(param_1 + 0x10);
  FUN_1491920d2(param_2 + 0x1a0,param_1 + 0xf0);
  *param_2 = *(char *)(param_1 + 0xd0) * '\x02';
  FUN_1444888de(param_2 + 0x178,param_1 + 0xd8);
  param_2[0x12d] = *(char *)(param_1 + 0xe8);
  FUN_14923cf6a(param_1 + 0x18,param_2);
  param_2[300] = *(char *)(param_1 + 0x50);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 0x54);
  uVar1 = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  return;
}



// FUNCTION 14923d1e8 FUN_14923d1e8 body=292 status=ok
// SIG undefined FUN_14923d1e8(void)

void FUN_14923d1e8(undefined2 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  FUN_1491d74b0(param_2,0,0,0);
  **(undefined2 **)(param_2 + 0x10) = *param_1;
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 2) = param_1[1];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 4) = param_1[2];
  dVar1 = *(double *)(param_1 + 0xc);
  dVar2 = *(double *)(param_1 + 8);
  *(float *)(param_2 + 0x24) = (float)*(double *)(param_1 + 4);
  *(float *)(param_2 + 0x28) = (float)dVar2;
  *(float *)(param_2 + 0x2c) = (float)dVar1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined2 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  dVar1 = *(double *)(param_1 + 0x18);
  dVar2 = *(double *)(param_1 + 0x14);
  *(float *)(param_2 + 0xa8) = (float)*(double *)(param_1 + 0x10);
  *(float *)(param_2 + 0xac) = (float)dVar2;
  *(float *)(param_2 + 0xb0) = (float)dVar1;
  *(undefined8 *)(param_2 + 0xb4) = 0;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined8 *)(param_2 + 0xd4) = 0;
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xec) = 0;
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0x11c) = 0;
  *(undefined4 *)(param_2 + 0x124) = 0;
  *(undefined1 *)(param_2 + 0x128) = 1;
  *(undefined2 *)(param_2 + 0x129) = 0;
  *(undefined1 *)(param_2 + 299) = 0;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x1c);
  return;
}



// FUNCTION 14923d30c FUN_14923d30c body=283 status=ok
// SIG undefined FUN_14923d30c(void)

void FUN_14923d30c(longlong param_1,undefined8 param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  *(bool *)(param_1 + 0x11) = param_3[1] == '\x04';
  FUN_1491920d2(param_1 + 0x100,param_3 + 0x1a0);
  *(bool *)(param_1 + 0xe0) = *param_3 == '\x02';
  FUN_1444888de(param_1 + 0xe8,param_3 + 0x178);
  *(char *)(param_1 + 0xf8) = param_3[0x12d];
  *(undefined2 *)(param_1 + 0x18) = **(undefined2 **)(param_3 + 0x10);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(*(longlong *)(param_3 + 0x10) + 2);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(*(longlong *)(param_3 + 0x10) + 4);
  fVar1 = *(float *)(param_3 + 0x2c);
  fVar2 = *(float *)(param_3 + 0x28);
  *(double *)(param_1 + 0x20) = (double)*(float *)(param_3 + 0x24);
  *(double *)(param_1 + 0x28) = (double)fVar2;
  *(double *)(param_1 + 0x30) = (double)fVar1;
  fVar1 = *(float *)(param_3 + 0xb0);
  fVar2 = *(float *)(param_3 + 0xac);
  *(double *)(param_1 + 0x38) = (double)*(float *)(param_3 + 0xa8);
  *(double *)(param_1 + 0x40) = (double)fVar2;
  *(double *)(param_1 + 0x48) = (double)fVar1;
  *(char *)(param_1 + 0x50) = param_3[0x20];
  *(char *)(param_1 + 0x60) = param_3[300];
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_3 + 0x130);
  uVar3 = *(undefined4 *)(param_3 + 0x13c);
  uVar4 = *(undefined4 *)(param_3 + 0x140);
  uVar5 = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  lVar6 = FUN_1491f6e42(param_2);
  puVar7 = (undefined8 *)FUN_144b3cbe6(lVar6 + 0x20);
  puVar8 = (undefined8 *)(param_1 + 0x80);
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}



// FUNCTION 14923d428 FUN_14923d428 body=138 status=ok
// SIG undefined FUN_14923d428(void)

void FUN_14923d428(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 8);
  param_2[1] = *(byte *)(param_1 + 0x11) ^ 5;
  FUN_1491920d2(param_2 + 0x1a0,param_1 + 0x100);
  *param_2 = *(char *)(param_1 + 0xe0) * '\x02';
  FUN_1444888de(param_2 + 0x178,param_1 + 0xe8);
  param_2[0x12d] = *(char *)(param_1 + 0xf8);
  FUN_14923d1e8(param_1 + 0x18,param_2);
  param_2[300] = *(char *)(param_1 + 0x60);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 100);
  uVar1 = *(undefined8 *)(param_1 + 0x74);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  return;
}



// FUNCTION 14923d4b2 FUN_14923d4b2 body=248 status=ok
// SIG undefined FUN_14923d4b2(void)

void FUN_14923d4b2(undefined2 *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = **(undefined2 **)(param_2 + 0x10);
  param_1[1] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 2);
  param_1[2] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 4);
  local_48 = (double)*(float *)(param_2 + 0x2c);
  local_50 = (double)*(float *)(param_2 + 0x28);
  local_58 = (double)*(float *)(param_2 + 0x24);
  FUN_1467fb380(&local_40,&local_58);
  *(undefined8 *)(param_1 + 0xc) = local_30;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_3c,local_40);
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_34,uStack_38);
  local_48 = (double)*(float *)(param_2 + 0xb0);
  local_50 = (double)*(float *)(param_2 + 0xac);
  local_58 = (double)*(float *)(param_2 + 0xa8);
  FUN_1467fb380(&local_40,&local_58);
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined4 *)(param_1 + 0x10) = local_40;
  *(undefined4 *)(param_1 + 0x12) = uStack_3c;
  *(undefined4 *)(param_1 + 0x14) = uStack_38;
  *(undefined4 *)(param_1 + 0x16) = uStack_34;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x20);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923d5ac FUN_14923d5ac body=385 status=ok
// SIG undefined FUN_14923d5ac(void)

void FUN_14923d5ac(undefined2 *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491d74b0(param_2,0,0,0);
  **(undefined2 **)(param_2 + 0x10) = *param_1;
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 2) = param_1[1];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 4) = param_1[2];
  FUN_1414d053e(param_1 + 4,&local_58);
  *(float *)(param_2 + 0x24) = (float)local_58;
  *(float *)(param_2 + 0x28) = (float)local_50;
  *(float *)(param_2 + 0x2c) = (float)local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined2 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  FUN_1414d053e(param_1 + 0x10,&local_58);
  *(float *)(param_2 + 0xa8) = (float)local_58;
  *(float *)(param_2 + 0xac) = (float)local_50;
  *(float *)(param_2 + 0xb0) = (float)local_48;
  *(undefined8 *)(param_2 + 0xb4) = 0;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xc4) = 0;
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined8 *)(param_2 + 0xd4) = 0;
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xec) = 0;
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0x11c) = 0;
  *(undefined4 *)(param_2 + 0x124) = 0;
  *(undefined1 *)(param_2 + 0x128) = 1;
  *(undefined2 *)(param_2 + 0x129) = 0;
  *(undefined1 *)(param_2 + 299) = 0;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x1c);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923d72e FUN_14923d72e body=167 status=ok
// SIG undefined FUN_14923d72e(void)

void FUN_14923d72e(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  FUN_1491920d2(param_1 + 0x100,param_3 + 0x1a0);
  *(bool *)(param_1 + 0xe0) = *param_3 == '\x02';
  FUN_1444888de(param_1 + 0xe8,param_3 + 0x178);
  *(char *)(param_1 + 0xf8) = param_3[0x12d];
  FUN_14923d4b2(param_1 + 0x18,param_3);
  *(char *)(param_1 + 0x60) = param_3[300];
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_3 + 0x130);
  uVar1 = *(undefined4 *)(param_3 + 0x13c);
  uVar2 = *(undefined4 *)(param_3 + 0x140);
  uVar3 = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  lVar4 = FUN_1491f6e42(param_2);
  puVar5 = (undefined8 *)FUN_144b3cbe6(lVar4 + 0x20);
  puVar6 = (undefined8 *)(param_1 + 0x80);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}



// FUNCTION 14923d7d6 FUN_14923d7d6 body=134 status=ok
// SIG undefined FUN_14923d7d6(void)

void FUN_14923d7d6(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 8);
  param_2[1] = '\x06';
  FUN_1491920d2(param_2 + 0x1a0,param_1 + 0x100);
  *param_2 = *(char *)(param_1 + 0xe0) * '\x02';
  FUN_1444888de(param_2 + 0x178,param_1 + 0xe8);
  param_2[0x12d] = *(char *)(param_1 + 0xf8);
  FUN_14923d5ac(param_1 + 0x18,param_2);
  param_2[300] = *(char *)(param_1 + 0x60);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 100);
  uVar1 = *(undefined8 *)(param_1 + 0x74);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  return;
}



// FUNCTION 14923d85c FUN_14923d85c body=418 status=ok
// SIG undefined FUN_14923d85c(void)

void FUN_14923d85c(undefined2 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = **(undefined2 **)(param_2 + 0x10);
  param_1[1] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 2);
  param_1[2] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 4);
  param_1[3] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 6);
  param_1[4] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 8);
  param_1[5] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 10);
  param_1[6] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 0xc);
  param_1[7] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 0xe);
  param_1[8] = *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 0x10);
  fVar1 = *(float *)(param_2 + 0x2c);
  fVar2 = *(float *)(param_2 + 0x28);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x38);
  fVar5 = *(float *)(param_2 + 0x34);
  fVar6 = *(float *)(param_2 + 0x44);
  fVar7 = *(float *)(param_2 + 0x40);
  fVar8 = *(float *)(param_2 + 0x3c);
  *(double *)(param_1 + 0xc) = (double)*(float *)(param_2 + 0x30);
  *(double *)(param_1 + 0x10) = (double)fVar5;
  *(double *)(param_1 + 0x14) = (double)fVar4;
  *(double *)(param_1 + 0x18) = (double)fVar3;
  *(double *)(param_1 + 0x1c) = (double)fVar2;
  *(double *)(param_1 + 0x20) = (double)fVar1;
  *(double *)(param_1 + 0x24) = (double)fVar8;
  *(double *)(param_1 + 0x28) = (double)fVar7;
  *(double *)(param_1 + 0x2c) = (double)fVar6;
  fVar1 = *(float *)(param_2 + 0xb0);
  fVar2 = *(float *)(param_2 + 0xac);
  fVar3 = *(float *)(param_2 + 0xa8);
  fVar4 = *(float *)(param_2 + 0xbc);
  fVar5 = *(float *)(param_2 + 0xb8);
  fVar6 = *(float *)(param_2 + 200);
  fVar7 = *(float *)(param_2 + 0xc4);
  fVar8 = *(float *)(param_2 + 0xc0);
  *(double *)(param_1 + 0x30) = (double)*(float *)(param_2 + 0xb4);
  *(double *)(param_1 + 0x34) = (double)fVar5;
  *(double *)(param_1 + 0x38) = (double)fVar4;
  *(double *)(param_1 + 0x3c) = (double)fVar3;
  *(double *)(param_1 + 0x40) = (double)fVar2;
  *(double *)(param_1 + 0x44) = (double)fVar1;
  *(double *)(param_1 + 0x48) = (double)fVar8;
  *(double *)(param_1 + 0x4c) = (double)fVar7;
  *(double *)(param_1 + 0x50) = (double)fVar6;
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x20);
  return;
}



// FUNCTION 14923d9fe FUN_14923d9fe body=576 status=ok
// SIG undefined FUN_14923d9fe(void)

void FUN_14923d9fe(undefined2 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  FUN_1491d74b0(param_2,0,0,0);
  **(undefined2 **)(param_2 + 0x10) = *param_1;
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 2) = param_1[1];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 4) = param_1[2];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 6) = param_1[3];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 8) = param_1[4];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 10) = param_1[5];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 0xc) = param_1[6];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 0xe) = param_1[7];
  *(undefined2 *)(*(longlong *)(param_2 + 0x10) + 0x10) = param_1[8];
  dVar1 = *(double *)(param_1 + 0x1c);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0xc);
  dVar4 = *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x14);
  dVar6 = *(double *)(param_1 + 0x24);
  dVar7 = *(double *)(param_1 + 0x28);
  dVar8 = *(double *)(param_1 + 0x2c);
  *(float *)(param_2 + 0x24) = (float)*(double *)(param_1 + 0x18);
  *(float *)(param_2 + 0x28) = (float)dVar1;
  *(float *)(param_2 + 0x2c) = (float)dVar2;
  *(float *)(param_2 + 0x30) = (float)dVar3;
  *(float *)(param_2 + 0x34) = (float)dVar4;
  *(float *)(param_2 + 0x38) = (float)dVar5;
  *(float *)(param_2 + 0x3c) = (float)dVar6;
  *(float *)(param_2 + 0x40) = (float)dVar7;
  *(float *)(param_2 + 0x44) = (float)dVar8;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x94) = 0;
  *(undefined8 *)(param_2 + 0x9c) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 1;
  *(undefined2 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  dVar1 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x44);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x34);
  dVar5 = *(double *)(param_1 + 0x38);
  dVar6 = *(double *)(param_1 + 0x48);
  dVar7 = *(double *)(param_1 + 0x4c);
  dVar8 = *(double *)(param_1 + 0x50);
  *(float *)(param_2 + 0xa8) = (float)*(double *)(param_1 + 0x3c);
  *(float *)(param_2 + 0xac) = (float)dVar1;
  *(float *)(param_2 + 0xb0) = (float)dVar2;
  *(float *)(param_2 + 0xb4) = (float)dVar3;
  *(float *)(param_2 + 0xb8) = (float)dVar4;
  *(float *)(param_2 + 0xbc) = (float)dVar5;
  *(float *)(param_2 + 0xc0) = (float)dVar6;
  *(float *)(param_2 + 0xc4) = (float)dVar7;
  *(float *)(param_2 + 200) = (float)dVar8;
  *(undefined8 *)(param_2 + 0xcc) = 0;
  *(undefined8 *)(param_2 + 0xd4) = 0;
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe4) = 0;
  *(undefined8 *)(param_2 + 0xec) = 0;
  *(undefined8 *)(param_2 + 0xf4) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined1 *)(param_2 + 0x128) = 1;
  *(undefined2 *)(param_2 + 0x129) = 0;
  *(undefined1 *)(param_2 + 299) = 0;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x54);
  return;
}



// FUNCTION 14923dc3e FUN_14923dc3e body=197 status=ok
// SIG undefined FUN_14923dc3e(void)

void FUN_14923dc3e(longlong param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  FUN_1491920d2(param_1 + 0x170,param_3 + 0x1a0);
  *(char *)(param_1 + 0x11) = param_3[0x1b1];
  *(char *)(param_1 + 0x12) = param_3[0x1b0];
  *(bool *)(param_1 + 0x150) = *param_3 == '\x02';
  FUN_1444888de(param_1 + 0x158,param_3 + 0x178);
  *(char *)(param_1 + 0x168) = param_3[0x12d];
  FUN_14923d85c(param_1 + 0x18,param_3);
  *(char *)(param_1 + 0xd0) = param_3[300];
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_3 + 0x130);
  uVar1 = *(undefined4 *)(param_3 + 0x13c);
  uVar2 = *(undefined4 *)(param_3 + 0x140);
  uVar3 = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  lVar4 = FUN_1491f6e42(param_2);
  puVar5 = (undefined8 *)FUN_144b3cbe6(lVar4 + 0x20);
  puVar6 = (undefined8 *)(param_1 + 0xf0);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}



// FUNCTION 14923dd04 FUN_14923dd04 body=161 status=ok
// SIG undefined FUN_14923dd04(void)

void FUN_14923dd04(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 8);
  param_2[1] = '\t';
  FUN_1491920d2(param_2 + 0x1a0,param_1 + 0x170);
  param_2[0x1b1] = *(char *)(param_1 + 0x11);
  param_2[0x1b0] = *(char *)(param_1 + 0x12);
  *param_2 = *(char *)(param_1 + 0x150) * '\x02';
  FUN_1444888de(param_2 + 0x178,param_1 + 0x158);
  param_2[0x12d] = *(char *)(param_1 + 0x168);
  FUN_14923d9fe(param_1 + 0x18,param_2);
  param_2[300] = *(char *)(param_1 + 0xd0);
  *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(param_1 + 0xd4);
  uVar1 = *(undefined8 *)(param_1 + 0xe4);
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_1 + 0xdc);
  *(undefined8 *)(param_2 + 0x140) = uVar1;
  return;
}



// FUNCTION 14923dda6 FUN_14923dda6 body=173 status=ok
// SIG undefined FUN_14923dda6(void)

void FUN_14923dda6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14923dee2(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 14923de5a FUN_14923de5a body=135 status=ok
// SIG undefined FUN_14923de5a(void)

void FUN_14923de5a(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x48;
  local_208 = param_1 + 0x28;
  FUN_14923dee2(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923dee2 FUN_14923dee2 body=376 status=ok
// SIG undefined FUN_14923dee2(void)

void FUN_14923dee2(longlong param_1,undefined8 param_2,char param_3,char *param_4,undefined8 param_5
                  ,undefined8 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    FUN_144828dba(param_5,param_2,*(undefined8 *)(param_1 + 0x1b0));
    uVar2 = FUN_1491e0ef2(param_5);
    FUN_1491dba48(*(undefined8 *)(param_1 + 0x1b0),&local_3c,uVar2,0);
    *(undefined4 *)(param_4 + 8) = local_34;
    *(undefined8 *)param_4 = local_3c;
  }
  else {
    cVar1 = FUN_1491e0f6a(param_5,param_2);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_6 + 1);
      *(undefined8 *)param_4 = *param_6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    *param_4 = '\b';
    param_4[4] = '\0';
    param_4[5] = '\0';
    param_4[6] = '\0';
    param_4[7] = '\0';
    param_4[8] = '\0';
    param_4[9] = '\0';
    param_4[10] = '\0';
    param_4[0xb] = '\0';
    *(undefined1 *)param_6 = 0;
    *(undefined8 *)((longlong)param_6 + 4) = 0;
    *(undefined2 *)((longlong)param_6 + 0xc) = 0xffff;
    *(undefined4 *)(param_6 + 2) = 0xffffffff;
    param_6[3] = 0;
    cVar1 = FUN_144828dba(param_5,param_2,*(undefined8 *)(param_1 + 0x1b0));
    if (cVar1 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x1b0);
      puVar3 = (undefined8 *)FUN_1491e0ef2(param_5);
      local_48 = *puVar3;
      local_40 = *(undefined4 *)(puVar3 + 1);
      FUN_1408130c0(uVar2,&local_3c);
      *(undefined4 *)(param_4 + 8) = local_34;
      *(undefined8 *)param_4 = local_3c;
      if ((((uint)*(ushort *)(param_4 + 6) < DAT_14c87eb08 + 1U) &&
          (*(longlong *)(param_4 + 4) != 0)) && (*param_4 != '\0')) {
        FUN_144828dba(param_6,param_4,*(undefined8 *)(param_1 + 0x1b0));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923e05e FUN_14923e05e body=195 status=ok
// SIG undefined FUN_14923e05e(void)

void FUN_14923e05e(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar2 = *(undefined1 *)puVar3[8];
  uVar5 = puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14923e342(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar2) & 0xffffffff,1,uVar5,uVar7,uVar8);
  return;
}



// FUNCTION 14923e12e FUN_14923e12e body=149 status=ok
// SIG undefined FUN_14923e12e(void)

void FUN_14923e12e(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x48;
  local_208 = param_1 + 0x28;
  local_210 = param_1 + 0x18;
  local_218 = 1;
  FUN_14923e342(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923e1c4 FUN_14923e1c4 body=210 status=ok
// SIG undefined FUN_14923e1c4(void)

void FUN_14923e1c4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar1 = *(undefined1 *)puVar4[4];
  uVar2 = *(undefined1 *)puVar4[8];
  uVar3 = *(undefined1 *)puVar4[0xc];
  uVar6 = puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14923e342(*(undefined8 *)(param_1 + 0xc0),uVar5,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar2) & 0xffffffff,uVar3,uVar6,uVar8,
                uVar9);
  return;
}



// FUNCTION 14923e2a8 FUN_14923e2a8 body=153 status=ok
// SIG undefined FUN_14923e2a8(void)

void FUN_14923e2a8(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x48;
  local_208 = param_1 + 0x28;
  local_210 = param_1 + 0x18;
  local_218 = *(undefined1 *)(param_1 + 0x16);
  FUN_14923e342(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923e342 FUN_14923e342 body=1229 status=ok
// SIG undefined FUN_14923e342(void)

void FUN_14923e342(longlong param_1,char *param_2,char param_3,char param_4,char param_5,
                  void **param_6,undefined8 param_7,longlong *param_8)

{
  undefined8 uVar1;
  void *pvVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [35];
  char local_85;
  char local_84;
  undefined2 local_83;
  char local_81;
  longlong local_80;
  void *local_78;
  undefined8 uStack_70;
  char local_68;
  undefined1 uStack_67;
  char cStack_66;
  char cStack_65;
  undefined2 uStack_64;
  ushort uStack_62;
  int local_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_5 == '\0') {
    FUN_144828dba(param_7,param_2,*(undefined8 *)(param_1 + 0x1b0));
    local_78 = (void *)0x0;
    uStack_70 = 0;
    puVar6 = (undefined8 *)FUN_1491e0ef2(param_7);
    uVar1 = *puVar6;
    local_68 = (char)uVar1;
    uStack_67 = (undefined1)((ulonglong)uVar1 >> 8);
    cStack_66 = (char)((ulonglong)uVar1 >> 0x10);
    cStack_65 = (char)((ulonglong)uVar1 >> 0x18);
    uStack_64 = (undefined2)((ulonglong)uVar1 >> 0x20);
    uStack_62 = (ushort)((ulonglong)uVar1 >> 0x30);
    local_60 = *(int *)(puVar6 + 1);
    do {
      uVar3 = uStack_70;
      if (((param_3 != '\0') ||
          (CONCAT44(local_60,CONCAT22(uStack_62,uStack_64)) != *(longlong *)(param_2 + 4))) ||
         (local_68 != *param_2)) {
        lVar10 = (longlong)(int)(uint)uStack_70;
        uVar5 = (uint)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_149192788(&local_78,uVar3 & 0xffffffff);
        }
        *(int *)((longlong)local_78 + lVar10 * 0xc + 8) = local_60;
        *(ulonglong *)((longlong)local_78 + lVar10 * 0xc) =
             CONCAT26(uStack_62,
                      CONCAT24(uStack_64,
                               CONCAT13(cStack_65,CONCAT12(cStack_66,CONCAT11(uStack_67,local_68))))
                     );
      }
      FUN_1491dba48(*(undefined8 *)(param_1 + 0x1b0),&local_58,&local_68,0);
      pvVar2 = local_78;
      local_60 = iStack_50;
      local_68 = (char)local_58;
      uStack_67 = (undefined1)local_58._1_2_;
      cStack_66 = (char)((ushort)local_58._1_2_ >> 8);
      cStack_65 = local_58._3_1_;
      uStack_64 = (undefined2)local_58._4_4_;
      uStack_62 = (ushort)((uint)local_58._4_4_ >> 0x10);
    } while ((((uint)uStack_62 < DAT_14c87eb08 + 1U) && (CONCAT44(iStack_50,local_58._4_4_) != 0))
            && ((char)local_58 != '\0'));
    uVar5 = (uint)uStack_70;
    if ((param_4 != '\0') && (1 < (longlong)(int)(uint)uStack_70)) {
      lVar9 = 0;
      lVar10 = (longlong)(int)(uint)uStack_70 * 0xc;
      do {
        lVar8 = lVar10 + -0xc;
        iStack_50 = *(int *)((longlong)local_78 + lVar9 + 8);
        uVar1 = *(undefined8 *)((longlong)local_78 + lVar9);
        local_58._0_1_ = (char)uVar1;
        local_58._1_2_ = (undefined2)((ulonglong)uVar1 >> 8);
        local_58._3_1_ = (char)((ulonglong)uVar1 >> 0x18);
        local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)((longlong)local_78 + lVar9 + 8) =
             *(undefined4 *)((longlong)local_78 + lVar10 + -4);
        *(undefined8 *)((longlong)local_78 + lVar9) = *(undefined8 *)((longlong)local_78 + lVar8);
        *(int *)((longlong)local_78 + lVar10 + -4) = iStack_50;
        *(undefined8 *)((longlong)local_78 + lVar8) = uVar1;
        lVar9 = lVar9 + 0xc;
        lVar10 = lVar8;
      } while ((ulonglong)((uint)uStack_70 >> 1) * 0xc != lVar9);
    }
    if (&local_78 != param_6) {
      lVar10 = (longlong)(int)(uint)uStack_70;
      *(uint *)(param_6 + 1) = (uint)uStack_70;
      if ((uint)uStack_70 == 0 && *(int *)((longlong)param_6 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_6 + 0xc) = 0;
      }
      else {
        FUN_149192186(param_6,uStack_70 & 0xffffffff);
        if (uVar5 != 0) {
          memcpy(*param_6,pvVar2,lVar10 * 0xc);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar4 = FUN_1491e0f6a(param_7,param_2);
    if (cVar4 == '\0') {
      *(undefined4 *)(param_8 + 1) = 0;
      if (*(int *)((longlong)param_8 + 0xc) < 0) {
        FUN_14920a7da(param_8,0);
      }
      cVar4 = FUN_144828dba(param_7,param_2,*(undefined8 *)(param_1 + 0x1b0));
      if (cVar4 != '\0') {
        local_78 = (void *)0x0;
        uStack_70 = 0;
        local_85 = param_4;
        pcVar7 = (char *)FUN_1491e0ef2(param_7);
        cStack_66 = pcVar7[3];
        local_68 = (char)*(undefined2 *)(pcVar7 + 1);
        uStack_67 = (undefined1)((ushort)*(undefined2 *)(pcVar7 + 1) >> 8);
        lVar10 = *(longlong *)(pcVar7 + 4);
        cVar4 = *pcVar7;
        do {
          uVar3 = uStack_70;
          if (((param_3 != '\0') || (lVar10 != *(longlong *)(param_2 + 4))) || (cVar4 != *param_2))
          {
            lVar9 = (longlong)(int)(uint)uStack_70;
            uVar5 = (uint)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_149192788(&local_78,uVar3 & 0xffffffff);
            }
            *(char *)((longlong)local_78 + lVar9 * 0xc) = cVar4;
            *(ushort *)((longlong)local_78 + lVar9 * 0xc + 1) = CONCAT11(uStack_67,local_68);
            *(char *)((longlong)local_78 + lVar9 * 0xc + 3) = cStack_66;
            *(longlong *)((longlong)local_78 + lVar9 * 0xc + 4) = lVar10;
          }
          local_81 = cStack_66;
          local_83 = CONCAT11(uStack_67,local_68);
          local_84 = cVar4;
          local_80 = lVar10;
          FUN_1408130c0(*(undefined8 *)(param_1 + 0x1b0),&local_58,&local_84);
          pvVar2 = local_78;
          local_68 = (char)local_58._1_2_;
          uStack_67 = (undefined1)((ushort)local_58._1_2_ >> 8);
          cStack_66 = local_58._3_1_;
          lVar10 = CONCAT44(iStack_50,local_58._4_4_);
        } while (((lVar10 != 0) &&
                 (((uint)((ulonglong)lVar10 >> 0x10) & 0xffff) < DAT_14c87eb08 + 1U)) &&
                (cVar4 = (char)local_58, (char)local_58 != '\0'));
        local_58._0_1_ = '\0';
        local_58._1_2_ = 0;
        local_58._3_1_ = '\0';
        local_58._4_4_ = 0;
        lVar10 = (longlong)(int)(uint)uStack_70;
        iStack_50 = (uint)uStack_70;
        if (lVar10 == 0) {
          local_4c = 0;
        }
        else {
          FUN_149192186(&local_58,uStack_70 & 0xffffffff,0);
          memcpy((void *)CONCAT44(local_58._4_4_,
                                  CONCAT13(local_58._3_1_,CONCAT21(local_58._1_2_,(char)local_58))),
                 pvVar2,lVar10 * 0xc);
        }
        cVar4 = local_85;
        if (&local_58 == param_8) {
          if (CONCAT44(local_58._4_4_,
                       CONCAT13(local_58._3_1_,CONCAT21(local_58._1_2_,(char)local_58))) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_8 != 0) {
            FUN_1400020a8();
          }
          *param_8 = CONCAT44(local_58._4_4_,
                              CONCAT13(local_58._3_1_,CONCAT21(local_58._1_2_,(char)local_58)));
          local_58._0_1_ = '\0';
          local_58._1_2_ = 0;
          local_58._3_1_ = '\0';
          local_58._4_4_ = 0;
          *(int *)(param_8 + 1) = iStack_50;
          *(undefined4 *)((longlong)param_8 + 0xc) = local_4c;
        }
        if (cVar4 != '\0') {
          FUN_1491f374e(&local_58,param_8);
          if (&local_58 == param_8) {
            if (CONCAT44(local_58._4_4_,
                         CONCAT13(local_58._3_1_,CONCAT21(local_58._1_2_,(char)local_58))) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_8 != 0) {
              FUN_1400020a8();
            }
            *param_8 = CONCAT44(local_58._4_4_,
                                CONCAT13(local_58._3_1_,CONCAT21(local_58._1_2_,(char)local_58)));
            local_58._0_1_ = '\0';
            local_58._1_2_ = 0;
            local_58._3_1_ = '\0';
            local_58._4_4_ = 0;
            *(int *)(param_8 + 1) = iStack_50;
            *(undefined4 *)((longlong)param_8 + 0xc) = local_4c;
          }
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1444888de(param_6,param_8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14923e810 FUN_14923e810 body=190 status=ok
// SIG undefined FUN_14923e810(void)

void FUN_14923e810(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar2 = *(undefined1 *)puVar3[8];
  uVar5 = puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14923e96c(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar2) & 0xffffffff,uVar5,uVar7,uVar8);
  return;
}



// FUNCTION 14923e8da FUN_14923e8da body=144 status=ok
// SIG undefined FUN_14923e8da(void)

void FUN_14923e8da(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x48;
  local_210 = param_1 + 0x28;
  local_218 = param_1 + 0x18;
  FUN_14923e96c(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923e96c FUN_14923e96c body=605 status=ok
// SIG undefined FUN_14923e96c(void)

void FUN_14923e96c(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,void **param_7)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  void *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_1491e0f6a(param_6,param_2,*(undefined8 *)(param_1 + 0x1b0));
  if (cVar3 == '\0') {
    *(undefined4 *)(param_7 + 1) = 0;
    if (*(int *)((longlong)param_7 + 0xc) < 0) {
      FUN_14920a7da(param_7,0);
    }
    cVar3 = FUN_144828dba(param_6,param_2,*(undefined8 *)(param_1 + 0x1b0));
    if (cVar3 != '\0') {
      puVar4 = (undefined8 *)FUN_1491e0ef2(param_6);
      local_50 = *puVar4;
      local_48 = *(undefined4 *)(puVar4 + 1);
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      if (param_3 != '\0') {
        uStack_60 = 1;
        FUN_149192788(&local_68,0);
        *(undefined4 *)(local_68 + 1) = local_48;
        *local_68 = local_50;
      }
      local_80 = local_48;
      local_88 = local_50;
      FUN_14449fd62(*(undefined8 *)(param_1 + 0x1b0),&local_78,&local_88,param_4);
      uVar2 = uStack_60;
      if ((longlong)(int)local_70 != 0) {
        iVar1 = (uint)uStack_60;
        lVar5 = (longlong)(int)(uint)uStack_60;
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 + local_70);
        if ((uint)(uStack_60._4_4_ - iVar1) < local_70) {
          FUN_149192788(&local_68,uVar2 & 0xffffffff);
        }
        memmove((void *)(lVar5 * 0xc + (longlong)local_68),local_78,(longlong)(int)local_70 * 0xc);
        local_70 = 0;
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = local_68;
      local_78 = (void *)0x0;
      lVar5 = (longlong)(int)(uint)uStack_60;
      local_70 = (uint)uStack_60;
      if (lVar5 == 0) {
        local_6c = 0;
      }
      else {
        FUN_149192186(&local_78,uStack_60 & 0xffffffff,0);
        memcpy(local_78,puVar4,lVar5 * 0xc);
      }
      if (&local_78 == param_7) {
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_7 != (void *)0x0) {
          FUN_1400020a8();
        }
        *param_7 = local_78;
        local_78 = (void *)0x0;
        *(uint *)(param_7 + 1) = local_70;
        *(undefined4 *)((longlong)param_7 + 0xc) = local_6c;
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1444888de(param_5,param_7);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923ebca FUN_14923ebca body=176 status=ok
// SIG undefined FUN_14923ebca(void)

void FUN_14923ebca(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14923ee6c(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,1,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 14923ec80 FUN_14923ec80 body=143 status=ok
// SIG undefined FUN_14923ec80(void)

void FUN_14923ec80(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x48;
  local_210 = param_1 + 0x28;
  local_218 = param_1 + 0x18;
  FUN_14923ee6c(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),1);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923ed10 FUN_14923ed10 body=190 status=ok
// SIG undefined FUN_14923ed10(void)

void FUN_14923ed10(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar2 = *(undefined1 *)puVar3[8];
  uVar5 = puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14923ee6c(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar2) & 0xffffffff,uVar5,uVar7,uVar8);
  return;
}



// FUNCTION 14923edda FUN_14923edda body=144 status=ok
// SIG undefined FUN_14923edda(void)

void FUN_14923edda(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x48;
  local_210 = param_1 + 0x28;
  local_218 = param_1 + 0x18;
  FUN_14923ee6c(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923ee6c FUN_14923ee6c body=1166 status=ok
// SIG undefined FUN_14923ee6c(void)

void FUN_14923ee6c(longlong param_1,char *param_2,char param_3,char param_4,longlong *param_5,
                  undefined8 param_6,char **param_7)

{
  char *pcVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined4 local_b0;
  char *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined2 uStack_84;
  ushort uStack_82;
  undefined4 uStack_80;
  undefined2 local_7c;
  char local_7a;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 **local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == '\0') {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) < 0) {
      FUN_14920a7da(param_5,0);
    }
    lVar9 = *(longlong *)(param_1 + 0x1b0);
    FUN_1491dba48(lVar9,&local_88,param_2,0);
    if (((DAT_14c87eb08 + 1U <= (uint)uStack_82) ||
        (CONCAT44(uStack_80,CONCAT22(uStack_82,uStack_84)) == 0)) || ((char)local_88 == '\0')) {
      FUN_1491db37e(&local_78);
      uStack_80 = (int)uStack_70;
      local_88 = SUB84(local_78,0);
      uStack_84 = (undefined2)((ulonglong)local_78 >> 0x20);
      uStack_82 = (ushort)((ulonglong)local_78 >> 0x30);
    }
    uVar4 = FUN_140813180(lVar9,&local_88);
    if (((int)uVar4 < 0) || (*(int *)(lVar9 + 0xc0) <= (int)uVar4)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar9 + 0xb8) + (ulonglong)uVar4 * 8);
    }
    FUN_1444a0218(lVar9,&local_78,uVar7,0);
    ppuVar8 = local_60;
    if (local_60 == (undefined8 **)0x0) {
      ppuVar8 = &local_78;
    }
    if ((longlong)local_58 != 0) {
      lVar9 = 0;
      do {
        local_a0 = *(int *)(*(longlong *)((longlong)ppuVar8 + lVar9) + 0x18);
        local_a8 = *(char **)(*(longlong *)((longlong)ppuVar8 + lVar9) + 0x10);
        iVar6 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
          FUN_149192788(param_5,iVar6);
        }
        lVar10 = *param_5;
        *(int *)(lVar10 + 8 + (longlong)iVar6 * 0xc) = local_a0;
        *(char **)(lVar10 + (longlong)iVar6 * 0xc) = local_a8;
        lVar9 = lVar9 + 8;
      } while ((longlong)local_58 * 8 != lVar9);
    }
    if (param_3 == '\0') {
      local_a8 = param_2;
      FUN_14920aa12(param_5);
    }
    if (local_60 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar3 = FUN_1491e0f6a(param_6,param_2,*(undefined8 *)(param_1 + 0x1b0));
    if (cVar3 == '\0') {
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) < 0) {
        FUN_14920a7da(param_7,0);
      }
      cVar3 = FUN_144828dba(param_6,param_2,*(undefined8 *)(param_1 + 0x1b0));
      if (cVar3 != '\0') {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        uVar7 = *(undefined8 *)(param_1 + 0x1b0);
        puVar5 = (undefined8 *)FUN_1491e0ef2(param_6);
        local_98 = *puVar5;
        local_90 = *(undefined4 *)(puVar5 + 1);
        FUN_1408130c0(uVar7,&local_88);
        iVar6 = 0;
        if ((((uint)uStack_82 < DAT_14c87eb08 + 1U) &&
            (iVar6 = 0, CONCAT44(uStack_80,CONCAT22(uStack_82,uStack_84)) != 0)) &&
           ((char)local_88 != '\0')) {
          local_b0 = uStack_80;
          FUN_14449fd62(*(undefined8 *)(param_1 + 0x1b0),&local_a8,local_b8,0);
          if ((longlong)local_a0 != 0) {
            pcVar1 = local_a8 + (longlong)local_a0 * 0xc;
            pcVar11 = local_a8;
            do {
              uVar2 = uStack_70;
              cVar3 = *pcVar11;
              local_7a = pcVar11[3];
              local_7c = *(undefined2 *)(pcVar11 + 1);
              lVar9 = *(longlong *)(pcVar11 + 4);
              if (((param_3 != '\0') || (lVar9 != *(longlong *)(param_2 + 4))) ||
                 (cVar3 != *param_2)) {
                lVar10 = (longlong)(int)uStack_70;
                uVar4 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
                if (uStack_70._4_4_ < uVar4) {
                  FUN_149192788(&local_78,uVar2 & 0xffffffff);
                }
                *(char *)((longlong)local_78 + lVar10 * 0xc) = cVar3;
                *(undefined2 *)((longlong)local_78 + lVar10 * 0xc + 1) = local_7c;
                *(char *)((longlong)local_78 + lVar10 * 0xc + 3) = local_7a;
                *(longlong *)((longlong)local_78 + lVar10 * 0xc + 4) = lVar9;
              }
              pcVar11 = pcVar11 + 0xc;
            } while (pcVar11 != pcVar1);
          }
          if (local_a8 != (char *)0x0) {
            FUN_1400020a8(local_a8);
          }
          iVar6 = (int)uStack_70;
        }
        if (param_3 == '\x01' && iVar6 == 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,1);
          if (uStack_70._4_4_ == 0) {
            FUN_149192788(&local_78,0);
          }
          *(undefined4 *)(local_78 + 1) = *(undefined4 *)(param_2 + 8);
          *local_78 = *(undefined8 *)param_2;
          iVar6 = (int)uStack_70;
        }
        puVar5 = local_78;
        local_a8 = (char *)0x0;
        local_a0 = iVar6;
        if (iVar6 == 0) {
          local_9c = 0;
        }
        else {
          FUN_149192186(&local_a8,iVar6,0);
          memcpy(local_a8,puVar5,(longlong)iVar6 * 0xc);
        }
        if (&local_a8 == param_7) {
          if (local_a8 != (char *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_7 != (char *)0x0) {
            FUN_1400020a8();
          }
          *param_7 = local_a8;
          local_a8 = (char *)0x0;
          *(int *)(param_7 + 1) = local_a0;
          *(undefined4 *)((longlong)param_7 + 0xc) = local_9c;
        }
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    FUN_1444888de(param_5,param_7);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14923f2fc FUN_14923f2fc body=291 status=ok
// SIG undefined FUN_14923f2fc(void)

void FUN_14923f2fc(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_RBX;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar1 = *(undefined1 *)puVar4[8];
  uVar2 = *(undefined1 *)puVar4[0xc];
  uVar3 = *(undefined1 *)puVar4[0x10];
  uVar7 = puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_1492342c4(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar2,uVar3,uVar7,
                uVar9,uVar10,uVar11);
  return;
}



// FUNCTION 14923f432 FUN_14923f432 body=171 status=ok
// SIG undefined FUN_14923f432(void)

void FUN_14923f432(longlong param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [488];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_210 = param_1 + 0x78;
  local_218 = param_1 + 0x58;
  local_220 = param_1 + 0x38;
  local_228 = param_1 + 0x28;
  local_230 = *(undefined1 *)(param_1 + 0x22);
  local_238 = *(undefined1 *)(param_1 + 0x21);
  FUN_1492342c4(local_208,param_1 + 8,param_1 + 0x14,*(undefined1 *)(param_1 + 0x20));
  FUN_140f8ccfc(local_208);
  if ((local_20 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f4de FUN_14923f4de body=50 status=ok
// SIG undefined FUN_14923f4de(void)

void FUN_14923f4de(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_14923f5cc(*(undefined8 *)(param_1 + 0xc0),
                CONCAT71((int7)((ulonglong)*param_2 >> 8),*(undefined1 *)*param_2),
                CONCAT71((int7)((ulonglong)param_2[4] >> 8),*(undefined1 *)param_2[4]),param_2[8],
                param_2[0xc]);
  return;
}



// FUNCTION 14923f516 FUN_14923f516 body=181 status=ok
// SIG undefined FUN_14923f516(void)

void FUN_14923f516(longlong param_1)

{
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined1 local_290;
  undefined1 local_288 [432];
  undefined8 local_d8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90 [112];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1412ca278(local_288);
  FUN_1490d751a(local_288);
  local_a0 = *(undefined8 *)(param_1 + 0x10);
  local_298 = &local_a0;
  local_98 = *(undefined4 *)(param_1 + 0x18);
  local_290 = 1;
  FUN_1444a18e6(local_d8,local_90,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  FUN_149185768(param_1 + 0x20,local_90);
  FUN_1401f95f4(local_90);
  FUN_140f8ccfc(local_288);
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f5cc FUN_14923f5cc body=147 status=ok
// SIG undefined FUN_14923f5cc(void)

void FUN_14923f5cc(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = *param_4;
  local_a8 = &local_98;
  local_90 = *(undefined4 *)(param_4 + 1);
  local_a0 = 1;
  FUN_1444a18e6(*(undefined8 *)(param_1 + 0x1b0),local_88,param_2,param_3);
  FUN_149185768(param_5,local_88);
  FUN_1401f95f4(local_88);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f660 FUN_14923f660 body=160 status=ok
// SIG undefined FUN_14923f660(void)

void FUN_14923f660(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2 = (undefined8 *)*param_2;
  uVar1 = param_2[0xc];
  local_98 = *(undefined8 *)param_2[8];
  local_a8 = &local_98;
  local_90 = *(undefined4 *)((undefined8 *)param_2[8] + 1);
  local_a0 = 1;
  FUN_1444a18e6(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1b0),local_88,
                *(undefined1 *)*param_2,
                CONCAT71((int7)((ulonglong)param_2[4] >> 8),*(undefined1 *)param_2[4]));
  FUN_149185768(uVar1,local_88);
  FUN_1401f95f4(local_88);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f708 FUN_14923f708 body=105 status=ok
// SIG undefined FUN_14923f708(void)

void FUN_14923f708(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14923f772(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f772 FUN_14923f772 body=142 status=ok
// SIG undefined FUN_14923f772(void)

void FUN_14923f772(longlong param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_a8 = &local_98;
  local_90 = *(undefined4 *)(param_1 + 0x18);
  local_a0 = 1;
  FUN_1444a18e6(*(undefined8 *)(param_2 + 0x1b0),local_88,*(undefined1 *)(param_1 + 8),
                *(undefined1 *)(param_1 + 9));
  FUN_149185768(param_1 + 0x20,local_88);
  FUN_1401f95f4(local_88);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f802 FUN_14923f802 body=147 status=ok
// SIG undefined FUN_14923f802(void)

void FUN_14923f802(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_2;
  local_20 = *(undefined4 *)puVar1[0x10];
  local_18 = *(undefined8 *)puVar1[0xc];
  local_28 = &local_18;
  local_10 = *(undefined4 *)((undefined8 *)puVar1[0xc] + 1);
  FUN_1444a1d06(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1b0),*puVar1,
                (*(char *)puVar1[8] == '\x01') * '\x02' + '\x01',*(undefined1 *)puVar1[4]);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f896 FUN_14923f896 body=155 status=ok
// SIG undefined FUN_14923f896(void)

void FUN_14923f896(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_30 = *(undefined4 *)(param_1 + 0x278);
  local_20 = *(undefined8 *)(param_1 + 0x268);
  local_38 = &local_20;
  local_18 = *(undefined4 *)(param_1 + 0x270);
  FUN_1444a1d06(*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x1f0,
                (*(char *)(param_1 + 0x261) == '\x01') * '\x02' + '\x01',
                *(undefined1 *)(param_1 + 0x260));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f932 FUN_14923f932 body=147 status=ok
// SIG undefined FUN_14923f932(void)

void FUN_14923f932(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_2;
  local_20 = *(undefined4 *)puVar1[0x10];
  local_18 = *(undefined8 *)puVar1[0xc];
  local_28 = &local_18;
  local_10 = *(undefined4 *)((undefined8 *)puVar1[0xc] + 1);
  FUN_1444a1d06(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1b0),*puVar1,
                (*(char *)puVar1[8] == '\x01') * '\x02' + '\x01',*(undefined1 *)puVar1[4]);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923f9c6 FUN_14923f9c6 body=152 status=ok
// SIG undefined FUN_14923f9c6(void)

void FUN_14923f9c6(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_20 = *(undefined8 *)(param_1 + 0x268);
  local_38 = &local_20;
  local_18 = *(undefined4 *)(param_1 + 0x270);
  local_30 = *(undefined4 *)(param_1 + 0x278);
  FUN_1444a1d06(*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x1f0,
                (*(char *)(param_1 + 0x261) == '\x01') * '\x02' + '\x01',
                *(undefined1 *)(param_1 + 0x260));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923fa78 FUN_14923fa78 body=102 status=ok
// SIG undefined FUN_14923fa78(void)

void FUN_14923fa78(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(bool *)(param_1 + 0x78) = *(int *)(param_1 + 0x10) == 0;
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923faf6 FUN_14923faf6 body=116 status=ok
// SIG undefined FUN_14923faf6(void)

void FUN_14923faf6(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14923fbf8(param_1 + 8,*(undefined1 *)(param_1 + 0x78),param_1 + 0x80);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923fb82 FUN_14923fb82 body=116 status=ok
// SIG undefined FUN_14923fb82(void)

void FUN_14923fb82(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14923fbf8(param_1 + 8,*(undefined1 *)(param_1 + 0x78),param_1 + 0x80);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923fbf8 FUN_14923fbf8 body=158 status=ok
// SIG undefined FUN_14923fbf8(void)

void FUN_14923fbf8(longlong *param_1,byte param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14920a7da(param_3,0);
  }
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      if ((*(byte *)(lVar3 + lVar6) & param_2) != 0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_149192788(param_3,iVar2);
        }
        puVar1 = (undefined8 *)(lVar3 + lVar6);
        lVar4 = *param_3;
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar1 + 1);
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = *puVar1;
      }
      lVar6 = lVar6 + 0x110;
    } while ((longlong)(int)lVar5 * 0x110 - lVar6 != 0);
  }
  return;
}



// FUNCTION 14923fc96 FUN_14923fc96 body=145 status=ok
// SIG undefined FUN_14923fc96(void)

void FUN_14923fc96(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923fe08(*puVar1,puVar1[4],*(undefined4 *)puVar1[8],*(undefined4 *)puVar1[0xc],
                *(undefined4 *)puVar1[0x10],*(undefined4 *)puVar1[0x14],*(undefined1 *)puVar1[0x18],
                *(undefined1 *)puVar1[0x1c],puVar1[0x20],puVar1[0x24],puVar1[0x28]);
  return;
}



// FUNCTION 14923fd30 FUN_14923fd30 body=214 status=ok
// SIG undefined FUN_14923fd30(void)

void FUN_14923fd30(longlong param_1)

{
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x118;
  local_210 = param_1 + 0x110;
  local_218 = param_1 + 0x100;
  local_220 = *(undefined1 *)(param_1 + 0xf9);
  local_228 = *(undefined1 *)(param_1 + 0xf8);
  local_230 = *(undefined4 *)(param_1 + 0xf4);
  local_238 = *(undefined4 *)(param_1 + 0xf0);
  FUN_14923fe08(param_1 + 8,param_1 + 0x78,*(undefined4 *)(param_1 + 0xe8),
                *(undefined4 *)(param_1 + 0xec));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923fe08 FUN_14923fe08 body=1622 status=ok
// SIG undefined FUN_14923fe08(void)

void FUN_14923fe08(longlong *param_1,longlong *param_2,uint param_3,uint param_4,uint param_5,
                  float param_6,byte param_7,char param_8,longlong *param_9,undefined1 *param_10,
                  longlong *param_11)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  *param_10 = 1;
  *(undefined4 *)(param_11 + 1) = 0;
  if (*(int *)((longlong)param_11 + 0xc) < 0) {
    FUN_14920a7da(param_11,0);
  }
  iVar3 = (int)param_1[1];
  iVar4 = (int)param_2[1];
  if (iVar3 == 0 && iVar4 == 0) {
    *param_10 = 1;
    return;
  }
  if (iVar3 == 0 && iVar4 != 0) {
    *param_10 = 0;
  }
  else {
    if (iVar4 != 0 || iVar3 == 0) {
      param_3 = param_3 & 0x7fffffff;
      param_4 = param_4 & 0x7fffffff;
      param_5 = param_5 & 0x7fffffff;
      param_6 = ABS(param_6);
      if ((int)param_9[1] == 0) {
        if (*(int *)((longlong)param_1 + 0x14) != *(int *)((longlong)param_2 + 0x14)) {
          if (0 < iVar3) {
            lVar6 = 0;
            lVar8 = 0;
            do {
              lVar10 = *param_1;
              if ((*(byte *)(lVar10 + lVar6) & param_7) == 0) goto LAB_149240119;
              pcVar1 = (char *)(lVar10 + lVar6);
              iVar3 = FUN_14919fd68(param_2,pcVar1);
              if (iVar3 == -1) {
                *param_10 = 0;
                iVar3 = (int)param_11[1];
                *(uint *)(param_11 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_11 + 0xc) < iVar3 + 1U) {
LAB_1492403ae:
                  FUN_149192788(param_11,iVar3);
                }
LAB_1492401cd:
                lVar10 = *param_11;
                *(undefined4 *)(lVar10 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(pcVar1 + 8);
                *(undefined8 *)(lVar10 + (longlong)iVar3 * 0xc) = *(undefined8 *)pcVar1;
              }
              else {
                lVar5 = (longlong)iVar3 * 0x110 + *param_2;
                if (*pcVar1 == '\b') {
                  if ((1e-08 < param_6) &&
                     (param_6 <= ABS(*(float *)(lVar10 + 0x104 + lVar6) - *(float *)(lVar5 + 0x104))
                     )) {
LAB_14924018f:
                    *param_10 = 0;
                    iVar3 = (int)param_11[1];
                    *(uint *)(param_11 + 1) = iVar3 + 1U;
                    if (*(uint *)((longlong)param_11 + 0xc) < iVar3 + 1U) goto LAB_1492403ae;
                    goto LAB_1492401cd;
                  }
                }
                else {
                  lVar7 = 0x80;
                  if (param_8 == '\x01') {
                    lVar7 = 0x20;
                  }
                  cVar2 = FUN_149241cf4(lVar10 + lVar7 + lVar6,lVar5 + lVar7,param_3,param_4,param_5
                                       );
                  if (cVar2 == '\0') goto LAB_14924018f;
                }
              }
LAB_149240119:
              lVar8 = lVar8 + 1;
              lVar6 = lVar6 + 0x110;
            } while (lVar8 < (int)param_1[1]);
            iVar4 = (int)param_2[1];
          }
          if (iVar4 < 1) {
            return;
          }
          lVar6 = 0;
          lVar8 = 0;
          do {
            if ((*(byte *)(*param_2 + lVar6) & param_7) != 0) {
              lVar10 = *param_2 + lVar6;
              iVar3 = FUN_14919fd68(param_1,lVar10);
              if (iVar3 == -1) {
                *param_10 = 0;
                FUN_149197016(param_11,lVar10);
              }
            }
            lVar8 = lVar8 + 1;
            lVar6 = lVar6 + 0x110;
          } while (lVar8 < (int)param_2[1]);
          return;
        }
        if (iVar3 < 1) {
          return;
        }
        lVar6 = 0x80;
        if (param_8 == '\x01') {
          lVar6 = 0x20;
        }
        lVar10 = 0;
        lVar8 = 0;
        do {
          lVar5 = *param_1;
          if ((*(byte *)(lVar5 + lVar10) & param_7) != 0) {
            if (*(byte *)(lVar5 + lVar10) == 8) {
              if ((1e-08 < param_6) &&
                 (param_6 <=
                  ABS(*(float *)(lVar5 + 0x104 + lVar10) - *(float *)(*param_2 + 0x104 + lVar10))))
              {
LAB_149240060:
                *param_10 = 0;
                iVar3 = (int)param_11[1];
                *(uint *)(param_11 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)param_11 + 0xc) < iVar3 + 1U) {
                  FUN_149192788(param_11,iVar3);
                }
                lVar7 = *param_11;
                *(undefined4 *)(lVar7 + 8 + (longlong)iVar3 * 0xc) =
                     *(undefined4 *)((undefined8 *)(lVar5 + lVar10) + 1);
                *(undefined8 *)(lVar7 + (longlong)iVar3 * 0xc) = *(undefined8 *)(lVar5 + lVar10);
              }
            }
            else {
              cVar2 = FUN_149241cf4(lVar5 + lVar6,*param_2 + lVar6,param_3,param_4,param_5);
              if (cVar2 == '\0') goto LAB_149240060;
            }
          }
          lVar8 = lVar8 + 1;
          lVar6 = lVar6 + 0x110;
          lVar10 = lVar10 + 0x110;
          if ((int)param_1[1] <= lVar8) {
            return;
          }
        } while( true );
      }
      if ((int)param_9[1] < 1) {
        return;
      }
      lVar8 = 0;
      lVar6 = 0;
      do {
        if ((*(byte *)(*param_9 + lVar8) & param_7) == 0) goto LAB_14923ff71;
        puVar9 = (undefined8 *)(*param_9 + lVar8);
        iVar3 = FUN_14919fd68(param_1,puVar9);
        if (iVar3 == -1) {
          *param_10 = 0;
          iVar3 = (int)param_11[1];
          *(uint *)(param_11 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_11 + 0xc) < iVar3 + 1U) {
LAB_149240396:
            FUN_149192788(param_11,iVar3);
          }
LAB_14923ffc7:
          lVar10 = *param_11;
          *(undefined4 *)(lVar10 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(puVar9 + 1);
          *(undefined8 *)(lVar10 + (longlong)iVar3 * 0xc) = *puVar9;
        }
        else {
          iVar4 = FUN_14919fd68(param_2,puVar9);
          if (iVar4 == -1) {
            *param_10 = 0;
            iVar3 = (int)param_11[1];
            *(uint *)(param_11 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_11 + 0xc) < iVar3 + 1U) goto LAB_149240396;
            goto LAB_14923ffc7;
          }
          lVar10 = *param_1 + (longlong)iVar3 * 0x110;
          lVar5 = (longlong)iVar4 * 0x110 + *param_2;
          if (*(char *)(*param_1 + (longlong)iVar3 * 0x110) == '\b') {
            if ((1e-08 < param_6) &&
               (param_6 <= ABS(*(float *)(lVar10 + 0x104) - *(float *)(lVar5 + 0x104)))) {
LAB_149240351:
              *param_10 = 0;
              iVar3 = (int)param_11[1];
              *(uint *)(param_11 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_11 + 0xc) < iVar3 + 1U) goto LAB_149240396;
              goto LAB_14923ffc7;
            }
          }
          else {
            lVar7 = 0x80;
            if (param_8 == '\x01') {
              lVar7 = 0x20;
            }
            cVar2 = FUN_149241cf4(lVar10 + lVar7,lVar5 + lVar7,param_3,param_4,param_5);
            if (cVar2 == '\0') goto LAB_149240351;
          }
        }
LAB_14923ff71:
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0xc;
        if ((int)param_9[1] <= lVar6) {
          return;
        }
      } while( true );
    }
    *param_10 = 0;
    param_2 = param_1;
  }
  FUN_14923fbf8(param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7) & 0xffffffff,param_11);
  return;
}



// FUNCTION 14924045e FUN_14924045e body=275 status=ok
// SIG undefined FUN_14924045e(void)

void FUN_14924045e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)*plVar2;
  lVar4 = plVar2[4];
  cVar1 = *(char *)plVar2[8];
  puVar5 = (undefined1 *)plVar2[0xc];
  puVar12 = (undefined8 *)plVar2[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  piVar8 = (int *)FUN_144828ac0(plVar2 + 0x18,0,
                                *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                                *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  piVar9 = (int *)FUN_144828ac0(*param_2 + 0xe0,0,
                                *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                                *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  *puVar5 = 0;
  puVar10 = &DAT_14c846480;
  puVar11 = puVar12;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*piVar9 == (int)plVar3[2]) {
    iVar6 = *piVar8;
  }
  else {
    *piVar9 = *(int *)((longlong)plVar3 + 0x14);
    iVar6 = FUN_14919fd68(plVar3,lVar4);
    *piVar8 = iVar6;
  }
  if (iVar6 != -1) {
    *puVar5 = 1;
    lVar4 = *plVar3 + 0x80;
    if (cVar1 == '\x01') {
      lVar4 = *plVar3 + 0x20;
    }
    puVar10 = (undefined8 *)(lVar4 + (longlong)*piVar8 * 0x110);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  return;
}



// FUNCTION 14924057a FUN_14924057a body=102 status=ok
// SIG undefined FUN_14924057a(void)

void FUN_14924057a(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492405e2(param_1);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492405e2 FUN_1492405e2 body=174 status=ok
// SIG undefined FUN_1492405e2(void)

void FUN_1492405e2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  cVar1 = *(char *)(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x85) = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_1 + 0x90);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)(param_1 + 0xf8) == *(int *)(param_1 + 0x18)) {
    iVar2 = *(int *)(param_1 + 0xf4);
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x1c);
    iVar2 = FUN_14919fd68(param_1 + 8,param_1 + 0x78);
    *(int *)(param_1 + 0xf4) = iVar2;
  }
  if (iVar2 != -1) {
    *(undefined1 *)(param_1 + 0x85) = 1;
    lVar3 = *(longlong *)(param_1 + 8) + 0x80;
    if (cVar1 == '\x01') {
      lVar3 = *(longlong *)(param_1 + 8) + 0x20;
    }
    puVar5 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x110);
    puVar6 = (undefined8 *)(param_1 + 0x90);
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}



// FUNCTION 1492406b0 FUN_1492406b0 body=120 status=ok
// SIG undefined FUN_1492406b0(void)

void FUN_1492406b0(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14924072a(param_1 + 8,*(undefined1 *)(param_1 + 0x78),param_1 + 0x79,param_1 + 0x80);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924072a FUN_14924072a body=201 status=ok
// SIG undefined FUN_14924072a(void)

void FUN_14924072a(longlong *param_1,char param_2,undefined1 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_3 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1401a2688(param_4,0);
  }
  *param_3 = 1;
  FUN_140ee84a4(param_4);
  if (param_2 == '\x01') {
    if (0 < (int)param_1[1]) {
      lVar1 = 0x20;
      lVar3 = 0;
      lVar6 = 0;
      do {
        puVar4 = (undefined8 *)(*param_1 + lVar1);
        puVar5 = (undefined8 *)(*param_4 + lVar3);
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + 0x60;
        lVar1 = lVar1 + 0x110;
      } while (lVar6 < (int)param_1[1]);
    }
  }
  else if (0 < (int)param_1[1]) {
    lVar1 = 0x80;
    lVar3 = 0;
    lVar6 = 0;
    do {
      puVar4 = (undefined8 *)(*param_1 + lVar1);
      puVar5 = (undefined8 *)(*param_4 + lVar3);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x60;
      lVar1 = lVar1 + 0x110;
    } while (lVar6 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1492407f4 FUN_1492407f4 body=180 status=ok
// SIG undefined FUN_1492407f4(void)

void FUN_1492407f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  uVar5 = puVar1[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar1 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_149240946(uVar2,uVar3,uVar4,uVar5,uVar7,uVar8);
  return;
}



// FUNCTION 1492408b0 FUN_1492408b0 body=148 status=ok
// SIG undefined FUN_1492408b0(void)

void FUN_1492408b0(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x8c;
  local_208 = param_1 + 0x88;
  FUN_149240946(param_1 + 8,param_1 + 0x78,param_1 + 0x80,param_1 + 0x84);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149240946 FUN_149240946 body=172 status=ok
// SIG undefined FUN_149240946(void)

void FUN_149240946(longlong *param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4,
                  int *param_5,int *param_6)

{
  int iVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  *param_4 = 0;
  if (*param_6 == (int)param_1[2]) {
    iVar1 = *param_5;
  }
  else {
    *param_6 = *(int *)((longlong)param_1 + 0x14);
    local_34[0] = 8;
    local_30 = *param_2;
    iVar1 = FUN_14919fd68(param_1,local_34);
    *param_5 = iVar1;
  }
  if (iVar1 != -1) {
    *param_3 = 1;
    *param_4 = *(undefined4 *)(*param_1 + 0x104 + (longlong)*param_5 * 0x110);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492409f4 FUN_1492409f4 body=97 status=ok
// SIG undefined FUN_1492409f4(void)

void FUN_1492409f4(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149240ad8(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18],
                puVar1[0x1c],puVar1[0x20]);
  return;
}



// FUNCTION 149240a56 FUN_149240a56 body=130 status=ok
// SIG undefined FUN_149240a56(void)

void FUN_149240a56(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x350) + 8))(param_1 + 0x350);
  FUN_149240ad8(param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x268,param_1 + 0x280,param_1 + 0x2e0,
                param_1 + 0x340,param_1 + 0x344,param_1 + 0x348,param_1 + 0x34c);
  return;
}



// FUNCTION 149240ad8 FUN_149240ad8 body=390 status=ok
// SIG undefined FUN_149240ad8(void)

void FUN_149240ad8(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,int *param_7,int *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    *param_8 = (int)param_2[1];
    *param_7 = 0;
    FUN_1446f57c6(&DAT_14cc00d40,&local_50);
    *param_1 = local_50;
    iVar2 = *param_7;
  }
  else {
    cVar1 = FUN_1403f35db(*param_1,&DAT_14cc00d40);
    iVar2 = *param_7;
    if (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      *param_7 = iVar2;
    }
  }
  if (iVar2 == *param_8) {
    *(undefined1 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 4) = 0;
    puVar5 = &DAT_14c846480;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_5 = *puVar5;
      puVar5 = puVar5 + 1;
      param_5 = param_5 + 1;
    }
    memmove(param_4,&DAT_14c846480,0x60);
    *param_6 = 0;
    FUN_1446f57c6(&DAT_14cc00db0,&local_50);
    *param_1 = local_50;
  }
  else {
    lVar3 = *param_2;
    puVar5 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x110);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar5 + 1);
    *param_3 = *puVar5;
    puVar5 = puVar5 + 4;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *param_4 = *puVar5;
      puVar5 = puVar5 + 1;
      param_4 = param_4 + 1;
    }
    puVar5 = (undefined8 *)(lVar3 + 0x80 + (longlong)iVar2 * 0x110);
    puVar6 = puVar5;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_5 = *puVar6;
      puVar6 = puVar6 + 1;
      param_5 = param_5 + 1;
    }
    *param_6 = *(undefined4 *)((longlong)puVar5 + 0x84);
  }
  uVar7 = FUN_1490fb5f2(*param_7,*param_8);
  *param_9 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149240c68 FUN_149240c68 body=86 status=ok
// SIG undefined FUN_149240c68(void)

void FUN_149240c68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_149240d44(*(undefined8 *)(param_1 + 0xc0),&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149240cc0 FUN_149240cc0 body=130 status=ok
// SIG undefined FUN_149240cc0(void)

void FUN_149240cc0(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_149240d44(local_208,&local_28,param_1 + 0x18);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149240d44 FUN_149240d44 body=795 status=ok
// SIG undefined FUN_149240d44(void)

void FUN_149240d44(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d0 [24];
  uint local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138 [12];
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1f8);
    }
  }
  else {
    FUN_149241ee0(param_3,*(undefined4 *)(param_2 + 1));
    uVar5 = *(undefined4 *)(lVar2 + 0xa8);
    *(undefined4 *)(param_3 + 2) = uVar5;
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar5;
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      pbVar12 = (byte *)*param_2;
      lVar8 = (longlong)*(int *)(param_2 + 1) << 8;
      do {
        uVar5 = FUN_140813180(lVar2,pbVar12);
        lVar6 = FUN_14920c7b0(lVar2,uVar5);
        if (lVar6 != 0) {
          FUN_1491ddaf6(&local_158);
          local_1b8 = local_1b8 & 0xffffff00;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          uStack_1ac = 0xffff;
          local_1a8 = 0xffffffff;
          FUN_144828dba(&local_1b8,pbVar12,lVar2);
          uStack_14c = CONCAT22(uStack_1aa,uStack_1ac);
          local_158 = local_1b8;
          uStack_154 = uStack_1b4;
          uStack_150 = uStack_1b0;
          local_148 = local_1a8;
          uStack_144 = uStack_1a4;
          uStack_140 = uStack_1a0;
          uStack_13c = uStack_19c;
          FUN_1491dba48(lVar2,&local_1b8,pbVar12,1);
          local_58 = uStack_1b0;
          local_60 = CONCAT44(uStack_1b4,local_1b8);
          pbVar9 = pbVar12 + 0x10;
          puVar10 = local_d8;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *(undefined8 *)pbVar9;
            pbVar9 = pbVar9 + 8;
            puVar10 = puVar10 + 1;
          }
          pbVar9 = pbVar12 + 0x70;
          puVar10 = local_138;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *(undefined8 *)pbVar9;
            pbVar9 = pbVar9 + 8;
            puVar10 = puVar10 + 1;
          }
          local_54 = *(undefined4 *)(pbVar12 + 0xf0);
          local_68 = DAT_14c8464f0;
          local_78 = (undefined4)DAT_14c8464e0;
          uStack_74 = DAT_14c8464e0._4_4_;
          uStack_70 = (undefined4)DAT_14c8464e8;
          uStack_6c = DAT_14c8464e8._4_4_;
          if (*(char *)(lVar6 + 0x10) == '\x04') {
            if (pbVar12[0xd0] == 1) {
              local_68 = *(undefined8 *)(pbVar12 + 0xe8);
              local_78 = *(undefined4 *)(pbVar12 + 0xd8);
              uStack_74 = *(undefined4 *)(pbVar12 + 0xdc);
              uStack_70 = *(undefined4 *)(pbVar12 + 0xe0);
              uStack_6c = *(undefined4 *)(pbVar12 + 0xe4);
            }
            else {
              local_188 = *(undefined8 *)(lVar6 + 0x3f8);
              uVar3 = *(undefined8 *)(lVar6 + 0x3d0);
              local_1a8 = *(undefined4 *)(lVar6 + 0x3d8);
              uStack_1a4 = *(undefined4 *)(lVar6 + 0x3dc);
              uStack_1a0 = *(undefined4 *)(lVar6 + 0x3e0);
              uStack_19c = *(undefined4 *)(lVar6 + 0x3e4);
              local_198 = *(undefined4 *)(lVar6 + 1000);
              uStack_194 = *(undefined4 *)(lVar6 + 0x3ec);
              uStack_190 = *(undefined4 *)(lVar6 + 0x3f0);
              uStack_18c = *(undefined4 *)(lVar6 + 0x3f4);
              local_1b8 = (uint)*(undefined8 *)(lVar6 + 0x3c8);
              uStack_1b4 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x3c8) >> 0x20);
              uStack_1b0 = (undefined4)uVar3;
              uStack_1ac = (undefined2)((ulonglong)uVar3 >> 0x20);
              uStack_1aa = (undefined2)((ulonglong)uVar3 >> 0x30);
              local_178 = *(undefined8 *)(pbVar12 + 0x10);
              uStack_170 = *(undefined8 *)(pbVar12 + 0x18);
              local_168 = *(undefined4 *)(pbVar12 + 0x20);
              uStack_164 = *(undefined4 *)(pbVar12 + 0x24);
              uStack_160 = *(undefined4 *)(pbVar12 + 0x28);
              uStack_15c = *(undefined4 *)(pbVar12 + 0x2c);
              FUN_1448052ee(&local_178,local_1d0);
              local_1d8 = 0;
              FUN_1491def02(&local_1b8,&local_178,local_1d0,0);
              FUN_1491f46a6(&local_1b8,&local_178,0,(undefined1)local_1b8);
              local_68 = CONCAT44(uStack_164,local_168);
              local_78 = (undefined4)local_178;
              uStack_74 = local_178._4_4_;
              uStack_70 = (undefined4)uStack_170;
              uStack_6c = uStack_170._4_4_;
            }
          }
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_14920d438(param_3,iVar1);
          }
          memcpy((void *)((longlong)iVar1 * 0x110 + *param_3),&local_158,0x110);
          uVar3 = *(undefined8 *)(pbVar12 + 4);
          uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar11 = (uint)uVar3 & 0xffff;
          uVar5 = FUN_144a78877(*(undefined4 *)((longlong)param_3 + 0x14),
                                (uint)*pbVar12 +
                                (((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 10);
          *(undefined4 *)((longlong)param_3 + 0x14) = uVar5;
        }
        pbVar12 = pbVar12 + 0x100;
        lVar8 = lVar8 + -0x100;
      } while (lVar8 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14924107e FUN_14924107e body=205 status=ok
// SIG undefined FUN_14924107e(void)

undefined8 FUN_14924107e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  longlong local_60 [2];
  undefined1 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  undefined4 local_40;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &PTR_FUN_14bbea620;
  local_4c = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = 0;
  local_44 = 0xffff;
  local_40 = 0xffffffff;
  local_30 = 0;
  uStack_28 = 0;
  local_62 = 1;
  local_70 = *(undefined8 *)(param_1 + 8);
  local_68 = *(undefined4 *)(param_1 + 0x10);
  local_64 = *(undefined1 *)(param_1 + 0x14);
  local_63 = *(undefined1 *)(param_1 + 0x15);
  FUN_1444888de(local_60,param_1 + 0x18);
  FUN_14924114c(param_2,&local_78);
  local_78 = &PTR_FUN_14bbea620;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924114c FUN_14924114c body=211 status=ok
// SIG undefined FUN_14924114c(void)

undefined8 * FUN_14924114c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466e96b8();
  param_1[2] = uVar1;
  uVar1 = FUN_1466e99f6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149241220 FUN_149241220 body=142 status=ok
// SIG undefined FUN_149241220(void)

undefined8 FUN_149241220(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &PTR_FUN_14bbe1ed0;
  local_30 = 0;
  uStack_28 = 0;
  local_32 = 1;
  local_40 = *(undefined8 *)(param_1 + 8);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_33 = *(undefined1 *)(param_1 + 0x15);
  local_34 = *(undefined1 *)(param_1 + 0x14);
  local_31 = 0xff;
  FUN_1492412b0(param_2,&local_48);
  local_48 = &PTR_FUN_14bbe1ed0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492412b0 FUN_1492412b0 body=211 status=ok
// SIG undefined FUN_1492412b0(void)

undefined8 * FUN_1492412b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466e9d8c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466e0958();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149241384 FUN_149241384 body=182 status=ok
// SIG undefined FUN_149241384(void)

undefined8 FUN_149241384(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  undefined4 local_40;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &PTR_FUN_14bbea6b0;
  local_4c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_44 = 0xffff;
  local_40 = 0xffffffff;
  local_30 = 0;
  uStack_28 = 0;
  local_63 = 1;
  local_70 = *(undefined8 *)(param_1 + 8);
  local_68 = *(undefined4 *)(param_1 + 0x10);
  local_64 = *(undefined1 *)(param_1 + 0x14);
  FUN_14924143c(param_2,&local_78);
  local_78 = &PTR_FUN_14bbea6b0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924143c FUN_14924143c body=211 status=ok
// SIG undefined FUN_14924143c(void)

undefined8 * FUN_14924143c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466ea0ca();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ea3b8();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149241510 FUN_149241510 body=171 status=ok
// SIG undefined FUN_149241510(void)

undefined8 FUN_149241510(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  longlong local_a8 [2];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1492415bc(&local_b8);
  local_b0 = *(undefined1 *)(param_1 + 8);
  local_af = *(undefined1 *)(param_1 + 9);
  FUN_1444888de(local_a8,param_1 + 0x10);
  FUN_14924169e(param_2,&local_b8);
  local_b8 = &PTR_FUN_14bbea740;
  FUN_1401f95f4(local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492415bc FUN_1492415bc body=224 status=ok
// SIG undefined FUN_1492415bc(void)

undefined8 * FUN_1492415bc(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bbea740;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_149185768(param_1 + 4,&local_88);
  FUN_1401f95f4(&local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924169e FUN_14924169e body=211 status=ok
// SIG undefined FUN_14924169e(void)

undefined8 * FUN_14924169e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466eab34();
  param_1[2] = uVar1;
  uVar1 = FUN_1466eadda();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149241772 FUN_149241772 body=208 status=ok
// SIG undefined FUN_149241772(void)

undefined8 FUN_149241772(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [496];
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [80];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 auStack_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_149241844(local_2a8);
  FUN_1491c4070(auStack_b8,param_1 + 0x1f0);
  local_a8 = *(undefined8 *)(param_1 + 0x200);
  local_a0 = *(undefined4 *)(param_1 + 0x208);
  FUN_1459a7e20(local_98,param_1 + 0x210);
  local_48 = *(undefined1 *)(param_1 + 0x260);
  local_47 = *(undefined1 *)(param_1 + 0x261);
  FUN_1444888de(auStack_40,param_1 + 0x268);
  FUN_149241964(param_2,local_2a8);
  FUN_149241a38(local_2a8);
  if ((local_20 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241844 FUN_149241844 body=286 status=ok
// SIG undefined FUN_149241844(void)

undefined8 * FUN_149241844(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbea7d0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_149185768(param_1 + 0x3e,&local_88);
  FUN_1401f95f4(&local_88);
  *(undefined2 *)(param_1 + 0x4c) = 0xff;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241964 FUN_149241964 body=211 status=ok
// SIG undefined FUN_149241964(void)

undefined8 * FUN_149241964(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466eb080();
  param_1[2] = uVar1;
  uVar1 = FUN_1466eb376();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149241a38 FUN_149241a38 body=74 status=ok
// SIG undefined FUN_149241a38(void)

void FUN_149241a38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbea7d0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 0x3e);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149241a82 FUN_149241a82 body=193 status=ok
// SIG undefined FUN_149241a82(void)

undefined8 FUN_149241a82(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [80];
  undefined1 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_149241b44(&local_c0);
  FUN_1491c4070(local_b8,param_1 + 8);
  local_a8 = *(undefined8 *)(param_1 + 0x18);
  local_a0 = *(undefined4 *)(param_1 + 0x20);
  FUN_1459a7e20(local_98,param_1 + 0x28);
  local_48 = *(undefined1 *)(param_1 + 0x78);
  FUN_149241c20(param_2,&local_c0);
  local_c0 = &PTR_FUN_14bbea860;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(local_b8);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241b44 FUN_149241b44 body=219 status=ok
// SIG undefined FUN_149241b44(void)

undefined8 * FUN_149241b44(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bbea860;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_149185768(param_1 + 1,&local_88);
  FUN_1401f95f4(&local_88);
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241c20 FUN_149241c20 body=211 status=ok
// SIG undefined FUN_149241c20(void)

undefined8 * FUN_149241c20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466eb862();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ebab2();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149241cf4 FUN_149241cf4 body=491 status=ok
// SIG undefined FUN_149241cf4(void)

ulonglong FUN_149241cf4(undefined8 *param_1,undefined8 *param_2,float param_3,float param_4,
                       float param_5)

{
  ulonglong uVar1;
  double dVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  ulonglong uVar2;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = local_40;
  if (1e-08 < param_3) {
    dVar3 = (double)param_3;
    uVar1 = 0;
    if (((dVar3 <= ABS((double)param_1[4] - (double)param_2[4])) ||
        (dVar3 <= ABS((double)param_1[5] - (double)param_2[5]))) ||
       (uVar2 = uVar1, dVar3 <= ABS((double)param_1[6] - (double)param_2[6]))) goto LAB_149241eaf;
  }
  if (1e-08 < param_4) {
    local_98 = *param_1;
    uStack_90 = param_1[1];
    local_88 = *(undefined4 *)(param_1 + 2);
    uStack_84 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_80 = *(undefined4 *)(param_1 + 3);
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
    FUN_1448052ee(&local_98,&local_70);
    FUN_1414d053e(&local_70,&local_58);
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = *(undefined4 *)(param_2 + 2);
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_80 = *(undefined4 *)(param_2 + 3);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
    FUN_1448052ee(&local_98,local_b0);
    FUN_1414d053e(local_b0,&local_70);
    dVar3 = (double)param_4;
    uVar2 = 0;
    uVar1 = 0;
    if (((dVar3 <= ABS(local_48 - local_60)) || (dVar3 <= ABS(local_50 - local_68))) ||
       (dVar3 <= ABS(local_58 - local_70))) goto LAB_149241eaf;
  }
  if (1e-08 < param_5) {
    dVar3 = (double)param_5;
    uVar2 = 0;
    uVar1 = 0;
    if (((dVar3 <= ABS((double)param_1[8] - (double)param_2[8])) ||
        (dVar3 <= ABS((double)param_1[9] - (double)param_2[9]))) ||
       (dVar3 <= ABS((double)param_1[10] - (double)param_2[10]))) goto LAB_149241eaf;
  }
  uVar1 = CONCAT71((int7)(uVar2 >> 8),1);
LAB_149241eaf:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241ee0 FUN_149241ee0 body=41 status=ok
// SIG undefined FUN_149241ee0(void)

void FUN_149241ee0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1491c1950();
  return;
}



// FUNCTION 149241f0a FUN_149241f0a body=84 status=ok
// SIG undefined FUN_149241f0a(void)

void FUN_149241f0a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc06a40,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241f60 FUN_149241f60 body=91 status=ok
// SIG undefined FUN_149241f60(void)

void FUN_149241f60(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc06a40,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149241fbc FUN_149241fbc body=84 status=ok
// SIG undefined FUN_149241fbc(void)

void FUN_149241fbc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc074b8,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242012 FUN_149242012 body=91 status=ok
// SIG undefined FUN_149242012(void)

void FUN_149242012(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc074b8,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492420e4 FUN_1492420e4 body=233 status=ok
// SIG undefined FUN_1492420e4(void)

void FUN_1492420e4(longlong param_1)

{
  void **ppvVar1;
  undefined1 auStack_228 [32];
  undefined1 local_208 [340];
  byte local_b4;
  void *local_b0;
  int local_a8;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  ppvVar1 = (void **)(param_1 + 0x10);
  *(bool *)(param_1 + 8) = local_b4 != 0;
  *(byte *)(param_1 + 9) = local_b4 & 1;
  *(byte *)(param_1 + 10) = local_b4 >> 1 & 1;
  *(byte *)(param_1 + 0xb) = local_b4 >> 2 & 1;
  if (ppvVar1 != &local_b0) {
    *(int *)(param_1 + 0x18) = local_a8;
    if (local_a8 == 0 && *(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      FUN_149192186(ppvVar1,local_a8);
      if (local_a8 != 0) {
        memcpy(*ppvVar1,local_b0,(longlong)local_a8 * 0xc);
      }
    }
  }
  FUN_140f8ccfc(local_208);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492421ce FUN_1492421ce body=97 status=ok
// SIG undefined FUN_1492421ce(void)

void FUN_1492421ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  puVar3 = (undefined1 *)puVar1[4];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  uVar4 = FUN_144828dba(uVar6,uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x1b0));
  *puVar3 = uVar4;
  return;
}



// FUNCTION 149242236 FUN_149242236 body=117 status=ok
// SIG undefined FUN_149242236(void)

void FUN_149242236(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [432];
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  uVar1 = FUN_144828dba(param_1 + 0x18,param_1 + 8,local_48);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492422ac FUN_1492422ac body=67 status=ok
// SIG undefined FUN_1492422ac(void)

void FUN_1492422ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  param_2 = (longlong *)*param_2;
  puVar1 = (undefined8 *)*param_2;
  lVar2 = param_2[4];
  lVar3 = param_2[8];
  puVar4 = (undefined8 *)param_2[0xc];
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
  *puVar4 = *puVar1;
  FUN_1491668a6(uVar5,(longlong)puVar1 + 4,lVar2,lVar3,(longlong)puVar4 + 4);
  return;
}



// FUNCTION 1492422f0 FUN_1492422f0 body=140 status=ok
// SIG undefined FUN_1492422f0(void)

void FUN_1492422f0(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 8);
  local_208 = param_1 + 0x28;
  FUN_1491668a6(local_1f8,param_1 + 0xc,param_1 + 0x14,param_1 + 0x1c);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492423ac FUN_1492423ac body=119 status=ok
// SIG undefined FUN_1492423ac(void)

void FUN_1492423ac(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(bool *)(param_1 + 0x20) =
       *(char *)(param_1 + 8) == *(char *)(param_1 + 0x14) &&
       *(longlong *)(param_1 + 0xc) == *(longlong *)(param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242452 FUN_149242452 body=119 status=ok
// SIG undefined FUN_149242452(void)

void FUN_149242452(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(bool *)(param_1 + 0x20) =
       *(char *)(param_1 + 8) != *(char *)(param_1 + 0x14) ||
       *(longlong *)(param_1 + 0xc) != *(longlong *)(param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492424e6 FUN_1492424e6 body=104 status=ok
// SIG undefined FUN_1492424e6(void)

void FUN_1492424e6(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(bool *)(param_1 + 0x20) = *(char *)(param_1 + 8) == *(char *)(param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924256c FUN_14924256c body=104 status=ok
// SIG undefined FUN_14924256c(void)

void FUN_14924256c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(bool *)(param_1 + 0x20) = *(char *)(param_1 + 8) != *(char *)(param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492425e8 FUN_1492425e8 body=217 status=ok
// SIG undefined FUN_1492425e8(void)

void FUN_1492425e8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0xc);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492426c2 FUN_1492426c2 body=46 status=ok
// SIG undefined FUN_1492426c2(void)

undefined8 FUN_1492426c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9680();
  uVar2 = FUN_1466ede50();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 1492426f0 FUN_1492426f0 body=46 status=ok
// SIG undefined FUN_1492426f0(void)

undefined8 FUN_1492426f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1466b9716();
  uVar2 = FUN_1466ee098();
  FUN_1490fafc8(param_2,uVar2,uVar1);
  return param_2;
}



// FUNCTION 149242734 FUN_149242734 body=54 status=ok
// SIG undefined FUN_149242734(void)

void FUN_149242734(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14924276a(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8);
  return;
}



// FUNCTION 14924276a FUN_14924276a body=190 status=ok
// SIG undefined FUN_14924276a(void)

void FUN_14924276a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *param_3 = 0;
    param_3[1] = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x20);
    if (lVar1 != 0) {
      lVar3 = FUN_1401242c6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_68 = 0;
        FUN_14919cabe(lVar1,&local_58,*param_2,0);
        *(undefined4 *)param_3 = local_58;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_54;
        *(undefined4 *)(param_3 + 1) = uStack_50;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_4c;
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924282a FUN_14924282a body=69 status=ok
// SIG undefined FUN_14924282a(void)

void FUN_14924282a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492428d4(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10]
                ,puVar1[0x14]);
  return;
}



// FUNCTION 149242870 FUN_149242870 body=99 status=ok
// SIG undefined FUN_149242870(void)

void FUN_149242870(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492428d4(param_1 + 0x10,param_1 + 0x210,param_1 + 0x270,param_1 + 0x280,param_1 + 0x1f0,
                param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 1492428d4 FUN_1492428d4 body=324 status=ok
// SIG undefined FUN_1492428d4(void)

void FUN_1492428d4(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8 [12];
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_58 = 0;
  uStack_50 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_7 = 8;
    *(undefined8 *)((longlong)param_7 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      local_108 = local_c8;
      puVar5 = local_108;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_110 = *param_4;
      local_d8 = *param_3;
      uStack_d4 = param_3[1];
      uStack_d0 = param_3[2];
      uStack_cc = param_3[3];
      local_118 = &local_d8;
      local_e8 = *param_5;
      local_e0 = *(undefined4 *)(param_5 + 1);
      local_f8 = 0;
      local_100 = 0;
      FUN_1491e4d44(lVar3,&local_64,*param_6);
      *(undefined4 *)(param_7 + 1) = local_5c;
      *param_7 = local_64;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242a1a FUN_149242a1a body=84 status=ok
// SIG undefined FUN_149242a1a(void)

void FUN_149242a1a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc074d8,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242a70 FUN_149242a70 body=91 status=ok
// SIG undefined FUN_149242a70(void)

void FUN_149242a70(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc074d8,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242acc FUN_149242acc body=84 status=ok
// SIG undefined FUN_149242acc(void)

void FUN_149242acc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc074e8,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242b22 FUN_149242b22 body=91 status=ok
// SIG undefined FUN_149242b22(void)

void FUN_149242b22(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc074e8,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242b7e FUN_149242b7e body=48 status=ok
// SIG undefined FUN_149242b7e(void)

void FUN_149242b7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149242c3a(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                puVar1[0xc]);
  return;
}



// FUNCTION 149242bba FUN_149242bba body=126 status=ok
// SIG undefined FUN_149242bba(void)

void FUN_149242bba(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x24;
  FUN_149242c3a(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242c3a FUN_149242c3a body=316 status=ok
// SIG undefined FUN_149242c3a(void)

void FUN_149242c3a(longlong param_1,char *param_2,char param_3,char *param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  ushort uStack_3e;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    uVar3 = FUN_140813180(lVar1,param_2);
    if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar1 + 0xc0))) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar3 * 8), lVar2 != 0)) {
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined8 *)param_4 = *(undefined8 *)(lVar2 + 0x10);
      if (((param_3 != '\0') && ((uint)*(ushort *)(param_4 + 6) < DAT_14c87eb08 + 1U)) &&
         ((*(longlong *)(param_4 + 4) != 0 && (SBORROW1('\0',*param_4))))) {
        local_50 = *(undefined8 *)(lVar2 + 0x10);
        local_48 = *(undefined4 *)(lVar2 + 0x18);
        FUN_1408130c0(lVar1,&local_44);
        if ((((uint)uStack_3e < DAT_14c87eb08 + 1U) &&
            (CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40)) != 0)) && ((char)local_44 != '\0')) {
          *(undefined4 *)(param_4 + 8) = uStack_3c;
          *(ulonglong *)param_4 = CONCAT26(uStack_3e,CONCAT24(uStack_40,local_44));
        }
      }
    }
  }
  *(bool *)param_5 =
       *param_4 != *param_2 || *(longlong *)(param_4 + 4) != *(longlong *)(param_2 + 4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242d8a FUN_149242d8a body=109 status=ok
// SIG undefined FUN_149242d8a(void)

void FUN_149242d8a(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149242df8(local_1f8,param_1 + 8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242df8 FUN_149242df8 body=186 status=ok
// SIG undefined FUN_149242df8(void)

void FUN_149242df8(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1491dab48();
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(param_1 + 0x1c8);
  lVar2 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x1c0);
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
    puVar1 = local_38;
    if (local_30 != 0) goto LAB_149242e7b;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149242e7b:
  FUN_14020fad6(param_2,puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149242eca FUN_149242eca body=113 status=ok
// SIG undefined FUN_149242eca(void)

void FUN_149242eca(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149242f3c(local_1f8,param_1 + 8,param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149242f3c FUN_149242f3c body=178 status=ok
// SIG undefined FUN_149242f3c(void)

void FUN_149242f3c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1491db266(*(longlong *)(param_1 + 0x1b0),local_38,param_2,1);
    puVar1 = (undefined8 *)FUN_1447a1f4a(local_38);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    FUN_1446f470e(&local_28,puVar2,1);
    *param_3 = local_28;
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
      local_28 = *param_3;
    }
    if (local_28 != 0) goto LAB_149242fd0;
  }
  *param_3 = *(longlong *)(param_2 + 4);
LAB_149242fd0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149243010 FUN_149243010 body=117 status=ok
// SIG undefined FUN_149243010(void)

void FUN_149243010(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149243086(local_1f8,param_1 + 8,param_1 + 0x14,param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149243086 FUN_149243086 body=221 status=ok
// SIG undefined FUN_149243086(void)

void FUN_149243086(longlong param_1,undefined8 *param_2,undefined1 *param_3,void **param_4)

{
  void *_Src;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1446f8c06(param_4,0);
  }
  if (*param_4 != (undefined2 *)0x0) {
    *(undefined2 *)*param_4 = 0;
  }
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    local_48 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    FUN_1491da198(*(longlong *)(param_1 + 0x1b0),&local_38);
    _Src = local_38;
    if (1 < (int)local_30) {
      if (&local_38 != param_4) {
        *(uint *)(param_4 + 1) = local_30;
        FUN_1446dd670(param_4,(ulonglong)local_30,*(undefined4 *)((longlong)param_4 + 0xc));
        memcpy(*param_4,_Src,(ulonglong)local_30 * 2);
      }
      *param_3 = 1;
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149243180 FUN_149243180 body=113 status=ok
// SIG undefined FUN_149243180(void)

void FUN_149243180(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492431f2(local_1f8,param_1 + 8,param_1 + 0x14);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492431f2 FUN_1492431f2 body=201 status=ok
// SIG undefined FUN_1492431f2(void)

void FUN_1492431f2(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  FUN_149242df8(param_1,&local_58);
  local_78 = 0;
  uStack_70 = 0;
  FUN_149243086(param_1,param_2,&local_59);
  *param_3 = 0;
  if ((1 < (int)uStack_50) && (1 < (int)uStack_70)) {
    if ((int)uStack_70 == (int)uStack_50) {
      iVar1 = FUN_144a80a00(local_78,local_58);
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = false;
    }
    *param_3 = bVar2;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492432d4 FUN_1492432d4 body=112 status=ok
// SIG undefined FUN_1492432d4(void)

void FUN_1492432d4(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149243346(local_1f8,*(undefined1 *)(param_1 + 8),param_1 + 0x10);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149243346 FUN_149243346 body=603 status=ok
// SIG undefined FUN_149243346(void)

void FUN_149243346(longlong param_1,undefined1 param_2,void **param_3)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  void *local_c8;
  ulonglong uStack_c0;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  undefined4 *local_90;
  void **local_88;
  undefined1 local_7c [4];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
    }
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_149242df8(0,&local_a8);
    if ((int)uStack_a0 < 2) {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_14920a7da(param_3,0);
      }
    }
    else {
      FUN_1446f470e(&local_b0,local_a8,1);
      uVar4 = FUN_1466efd10();
      uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar3 = FUN_144a78877(uVar2 >> 0x10 ^ uVar2,param_2);
      uVar2 = (uint)(local_b0 >> 0x10);
      uVar7 = (uint)local_b0 & 0xffff;
      uVar3 = FUN_144a78877(uVar3,((uint)local_b0 << 0x10 | uVar7) + (int)(local_b0 >> 0x20) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4));
      lVar5 = FUN_149234a94(lVar6,uVar3);
      if (lVar5 == 0) {
        local_c8 = (void *)0x0;
        uStack_c0 = 0;
        local_78[0] = (code *)0x0;
        local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
        *local_68 = &PTR_FUN_14bc058f0;
        local_68[1] = lVar6;
        local_68[2] = local_b0;
        local_68[3] = &local_c8;
        *(undefined1 *)(local_68 + 4) = param_2;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78[0] = FUN_1444b5982;
        }
        FUN_14449bc3c(lVar6,local_78,1);
        local_90 = &local_94;
        local_94 = uVar3;
        local_88 = &local_c8;
        FUN_1492978c2(lVar6 + 0x478,local_7c);
        _Src = local_c8;
        if (&local_c8 != param_3) {
          iVar1 = (int)uStack_c0;
          lVar6 = (longlong)(int)uStack_c0;
          *(int *)(param_3 + 1) = (int)uStack_c0;
          if ((int)uStack_c0 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            FUN_149192186(param_3,uStack_c0 & 0xffffffff);
            if (iVar1 != 0) {
              memcpy(*param_3,_Src,lVar6 * 0xc);
            }
          }
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_1444888de(param_3,lVar5);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492435c8 FUN_1492435c8 body=581 status=ok
// SIG undefined FUN_1492435c8(void)

undefined8 FUN_1492435c8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8 [2];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8 [2];
  undefined **local_398 [2];
  undefined **local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined2 local_370;
  undefined8 local_36c;
  undefined8 uStack_364;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_318 [12];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined **local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined2 local_260;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_208 [12];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_398[0] = &PTR_FUN_14bacfc60;
  local_388 = &PTR_FUN_14bad5c20;
  local_380 = 0;
  uStack_378 = 0;
  local_370 = 0;
  local_36c = 0;
  uStack_364 = 0;
  local_35c = 0;
  local_358 = 0x3f91111111111111;
  local_350 = 0x800;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_318;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_278 = &PTR_FUN_14bad5c20;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  local_25c = 0;
  uStack_254 = 0;
  local_24c = 0;
  local_248 = 0x3f91111111111111;
  local_240 = 0x800;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_208;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_144 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14924380e(param_2,local_398);
  local_3b8 = 0;
  uStack_3b0 = 0;
  FUN_1490fb1d2(param_2,local_3a8);
  if (local_3a8[0] != 0) {
    FUN_1400020a8();
  }
  local_3d8 = 0;
  uStack_3d0 = 0;
  FUN_1490fb1d2(param_2,local_3c8);
  if (local_3c8[0] != 0) {
    FUN_1400020a8();
  }
  local_398[0] = &PTR_FUN_14bacfc60;
  FUN_140f8ceac(&local_168);
  FUN_140f8ceac(&local_278);
  FUN_140f8ceac(&local_388);
  if ((local_50 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924380e FUN_14924380e body=211 status=ok
// SIG undefined FUN_14924380e(void)

undefined8 * FUN_14924380e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466eff06();
  param_1[2] = uVar1;
  uVar1 = FUN_1466818de();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492438e2 FUN_1492438e2 body=150 status=ok
// SIG undefined FUN_1492438e2(void)

void FUN_1492438e2(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar1 = *(undefined4 *)puVar4[8];
  uVar2 = *(undefined1 *)puVar4[0xc];
  uVar3 = *(undefined1 *)puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149243a38(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,uVar1,uVar2,uVar3,uVar8);
  return;
}



// FUNCTION 149243988 FUN_149243988 body=96 status=ok
// SIG undefined FUN_149243988(void)

void FUN_149243988(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149243a38(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260),
                *(undefined1 *)(param_1 + 0x264),*(undefined1 *)(param_1 + 0x265),param_1 + 0x268);
  return;
}



// FUNCTION 1492439e8 FUN_1492439e8 body=79 status=ok
// SIG undefined FUN_1492439e8(void)

void FUN_1492439e8(longlong param_1,undefined8 param_2)

{
  FUN_149243a38(param_2,param_1 + 0x1f0,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260),
                *(undefined1 *)(param_1 + 0x264),*(undefined1 *)(param_1 + 0x265),param_1 + 0x268);
  return;
}



// FUNCTION 149243a38 FUN_149243a38 body=3610 status=ok
// SIG undefined FUN_149243a38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149243a38(longlong param_1,undefined8 *param_2,double *param_3,float param_4,char param_5,
                  undefined1 param_6,longlong param_7)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  ulonglong uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar20 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined1 local_300;
  undefined1 local_2f8;
  float local_2ec;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_284 [4];
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8 [2];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158 [4];
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_284[0] = 1;
    local_280 = *param_2;
    cVar5 = FUN_144828dba(param_7,local_284,lVar1);
    if (cVar5 != '\0') {
      uVar8 = 0xffffffff;
      if (*(ushort *)(param_7 + 0xc) != 0xffff) {
        uVar8 = (uint)*(ushort *)(param_7 + 0xc);
      }
      lVar9 = lVar1;
      uVar6 = FUN_14486750c(lVar1,&local_2e8,uVar8,0);
      auVar39 = _DAT_149934d80;
      dVar18 = local_2a8._0_8_;
      dVar3 = local_2a8._8_8_;
      dVar2 = local_298._0_8_;
      dVar4 = local_298._8_8_;
      dVar21 = (double)DAT_149934d80;
      dVar22 = DAT_149934d80._8_8_;
      if (param_5 == '\0') {
        auVar25 = *(undefined1 (*) [16])(param_3 + 8);
        dVar13 = auVar25._0_8_;
        dVar17 = auVar25._8_8_;
        auVar26 = *(undefined1 (*) [16])(param_3 + 10);
        dVar34 = auVar26._0_8_;
        auVar25 = minpd(auVar25,local_2a8);
        auVar31 = minpd(auVar26,local_298);
        auVar29._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar29._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        iVar7 = movmskpd(uVar6,auVar29);
        auVar25._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar25._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        uVar8 = movmskpd((int)lVar9,auVar25);
        if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar21 = *param_3;
          dVar22 = param_3[1];
          dVar23 = param_3[2];
          dVar32 = param_3[3];
          local_1d8[0] = dVar22 * local_2d8 * -1.0 +
                         dVar23 * dStack_2e0 + dVar32 * local_2e8 * 1.0 + dVar21 * dStack_2d0;
          local_1d8[1] = dVar21 * local_2d8 * 1.0 +
                         dVar32 * dStack_2e0 + dVar23 * local_2e8 * -1.0 + dVar22 * dStack_2d0;
          local_1c8._0_8_ =
               dVar32 * local_2d8 * 1.0 +
               ((local_2e8 * dVar22 * 1.0 + dVar23 * dStack_2d0) - dVar21 * dStack_2e0);
          local_1c8._8_8_ =
               dVar23 * local_2d8 * -1.0 +
               ((local_2e8 * dVar21 * -1.0 + dVar32 * dStack_2d0) - dVar22 * dStack_2e0);
          dVar28 = param_3[4] * dVar18;
          dVar33 = param_3[5] * dVar3;
          dVar23 = param_3[6] * dVar2;
          dVar32 = param_3[7] * dVar4;
          dVar24 = dVar33 * local_2e8 - dStack_2e0 * dVar28;
          dVar38 = dVar23 * dStack_2e0 - local_2d8 * dVar33;
          dVar21 = dVar28 * local_2d8 - local_2e8 * dVar23;
          dVar22 = dVar32 * dStack_2d0 - dStack_2d0 * dVar32;
          dVar38 = dVar38 + dVar38;
          dVar21 = dVar21 + dVar21;
          dVar24 = dVar24 + dVar24;
          dVar22 = dVar22 + dVar22;
          local_f8 = (dVar24 * dStack_2e0 - local_2d8 * dVar21) + dStack_2d0 * dVar38 + dVar28 +
                     local_2c8;
          dStack_f0 = (dVar38 * local_2d8 - dVar24 * local_2e8) + dStack_2d0 * dVar21 + dVar33 +
                      dStack_2c0;
          local_e8 = (dVar21 * local_2e8 - dStack_2e0 * dVar38) + dStack_2d0 * dVar24 + dVar23 +
                     (double)CONCAT44(uStack_2b4,local_2b8);
          dStack_1a0 = (dVar22 * dStack_2d0 - dVar22 * dStack_2d0) + dStack_2d0 * dVar22 + dVar32 +
                       dStack_2b0;
          local_2ec = param_4;
        }
        else {
          dVar24 = dStack_2e0 + dStack_2e0;
          dVar38 = local_2d8 + local_2d8;
          dVar23 = local_2e8 * (local_2e8 + local_2e8);
          dVar28 = (local_2e8 + local_2e8) * dStack_2d0;
          local_1d8[0] = (dVar21 - (local_2d8 * dVar38 + dStack_2e0 * dVar24)) * dVar18;
          dVar32 = (dVar22 - (local_2d8 * dVar38 + dVar23)) * dVar3;
          local_1d8[1] = (dVar24 * local_2e8 + dVar38 * dStack_2d0) * dVar18;
          local_1a8 = (dVar38 * dStack_2e0 + dVar28) * dVar3;
          local_1c8._8_8_ = 0;
          local_1c8._0_8_ = (local_2e8 * dVar38 - dVar24 * dStack_2d0) * dVar18;
          local_1b8._8_4_ = SUB84(dVar32,0);
          local_1b8._0_8_ = (dVar24 * local_2e8 - dVar38 * dStack_2d0) * dVar3;
          local_1b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          dStack_1a0 = 0.0;
          local_198._8_8_ = (dVar38 * dStack_2e0 - dVar28) * dVar2;
          local_198._0_8_ = (dVar24 * dStack_2d0 + local_2e8 * dVar38) * dVar2;
          local_188._8_8_ = 0;
          local_188._0_8_ = (1.0 - (dVar23 + dStack_2e0 * dVar24)) * dVar2;
          local_178 = local_2c8;
          dStack_170 = dStack_2c0;
          local_168 = (double)CONCAT44(uStack_2b4,local_2b8);
          uStack_160 = 0x3ff0000000000000;
          dVar24 = *param_3;
          dVar38 = param_3[1];
          dVar28 = param_3[2];
          dVar33 = dVar38 + dVar38;
          dVar27 = dVar28 + dVar28;
          dVar32 = dVar24 * (dVar24 + dVar24);
          local_208 = (1.0 - (dVar32 + dVar38 * dVar33)) * dVar34;
          dVar23 = param_3[3];
          dVar35 = dVar27 * dVar23;
          dVar36 = (dVar24 + dVar24) * param_3[3];
          dVar23 = dVar33 * dVar23;
          local_218 = (dVar23 + *param_3 * dVar27) * dVar34;
          local_238 = (dVar33 * dVar24 - dVar35) * dVar17;
          dStack_210 = (dVar27 * dVar38 - dVar36) * dVar34;
          local_258 = (dVar21 - (dVar28 * dVar27 + dVar38 * dVar33)) * dVar13;
          dStack_230 = (dVar22 - (dVar28 * dVar27 + dVar32)) * dVar17;
          dStack_250 = (dVar33 * dVar24 + dVar35) * dVar13;
          local_228 = (dVar27 * dVar38 + dVar36) * dVar17;
          local_248 = (*param_3 * dVar27 - dVar23) * dVar13;
          uStack_240 = 0;
          uStack_220 = 0;
          uStack_200 = 0;
          local_1f8 = param_3[4];
          dStack_1f0 = param_3[5];
          local_1e8 = param_3[6];
          uStack_1e0 = 0x3ff0000000000000;
          local_2ec = param_4;
          FUN_1447fea8d(local_158);
          FUN_144a1c686(local_158,0x3e45798ee0000000);
          auVar31._8_8_ = -(ulonglong)(0.0 <= dVar3 * dVar17);
          auVar31._0_8_ = -(ulonglong)(0.0 <= dVar18 * dVar13);
          auVar25 = blendvpd(_DAT_149936790,auVar39,auVar31);
          uVar12 = -(ulonglong)(0.0 <= dVar2 * dVar34);
          dVar21 = (double)(~uVar12 & 0xbff0000000000000 | uVar12 & 0x3ff0000000000000);
          dVar22 = auVar25._0_8_;
          local_158[2] = local_158[2] * dVar22;
          local_158[1] = local_158[1] * dVar22;
          local_158[0] = local_158[0] * dVar22;
          dVar22 = auVar25._8_8_;
          local_128 = local_128 * dVar22;
          local_130 = local_130 * dVar22;
          local_138 = dVar22 * local_138;
          local_108 = local_108 * dVar21;
          local_110 = local_110 * dVar21;
          local_118 = dVar21 * local_118;
          FUN_14481fd10(&local_278,local_158);
          dVar21 = local_268 * local_268 + local_278 * local_278;
          dVar22 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
          auVar20._0_8_ = dVar21 + dVar22;
          auVar20._8_8_ = dVar21 + dVar22;
          auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
          auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
          auVar25 = sqrtpd(auVar20,auVar20);
          auVar39 = divpd(auVar39,auVar25);
          auVar41._0_8_ = auVar39._0_8_ * local_268;
          auVar41._8_8_ = auVar39._8_8_ * dStack_260;
          local_1d8[0] = (double)((ulonglong)(local_278 * auVar39._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
          local_1d8[1] = (double)((ulonglong)(dStack_270 * auVar39._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
          local_1c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar16);
          dStack_1a0 = 0.0;
        }
        dVar23 = dVar4 * auVar26._8_8_;
        dVar17 = dVar3 * dVar17;
        dVar13 = dVar18 * dVar13;
        dVar34 = dVar2 * dVar34;
        param_4 = local_2ec;
      }
      else {
        auVar25 = *(undefined1 (*) [16])(param_3 + 8);
        dVar13 = auVar25._0_8_;
        dVar17 = auVar25._8_8_;
        auVar26 = *(undefined1 (*) [16])(param_3 + 10);
        dVar32 = auVar26._0_8_;
        dVar23 = auVar26._8_8_;
        auVar25 = minpd(local_2a8,auVar25);
        auVar29 = minpd(local_298,auVar26);
        auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        iVar7 = movmskpd(uVar6,auVar26);
        auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
        auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
        uVar8 = movmskpd((int)lVar9,auVar30);
        if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar33 = *param_3;
          dVar27 = param_3[1];
          dVar35 = param_3[2];
          dVar36 = param_3[3];
          dVar22 = param_3[3];
          dVar21 = param_3[3];
          dVar24 = param_3[1];
          dVar34 = param_3[1];
          dVar38 = param_3[2];
          dVar28 = param_3[2];
          local_1d8[0] = dStack_2e0 * dVar38 * -1.0 +
                         local_2d8 * dVar24 + dStack_2d0 * *param_3 * 1.0 + local_2e8 * dVar22;
          local_1d8[1] = local_2e8 * dVar28 * 1.0 +
                         dStack_2d0 * dVar34 + local_2d8 * *param_3 * -1.0 + dStack_2e0 * dVar21;
          local_1c8._0_8_ =
               dStack_2d0 * dVar38 * 1.0 +
               ((*param_3 * dStack_2e0 * 1.0 + local_2d8 * dVar22) - local_2e8 * dVar24);
          local_1c8._8_8_ =
               local_2d8 * dVar28 * -1.0 +
               ((*param_3 * local_2e8 * -1.0 + dStack_2d0 * dVar21) - dStack_2e0 * dVar34);
          local_2c8 = local_2c8 * dVar13;
          dStack_2c0 = dStack_2c0 * dVar17;
          dVar38 = (double)CONCAT44(uStack_2b4,local_2b8) * dVar32;
          dStack_2b0 = dStack_2b0 * dVar23;
          dVar28 = dStack_2c0 * dVar33 - dVar27 * local_2c8;
          dVar37 = dVar38 * dVar27 - dVar35 * dStack_2c0;
          dVar34 = local_2c8 * dVar35 - dVar33 * dVar38;
          dVar24 = dStack_2b0 * dVar36 - dVar36 * dStack_2b0;
          dVar37 = dVar37 + dVar37;
          dVar34 = dVar34 + dVar34;
          dVar28 = dVar28 + dVar28;
          dVar24 = dVar24 + dVar24;
          local_f8 = (dVar28 * dVar27 - dVar35 * dVar34) + dVar22 * dVar37 + local_2c8 + param_3[4];
          dStack_f0 = (dVar37 * dVar35 - dVar28 * dVar33) + dVar21 * dVar34 + dStack_2c0 +
                      param_3[5];
          local_e8 = (dVar34 * dVar33 - dVar27 * dVar37) + dVar22 * dVar28 + dVar38 + param_3[6];
          dStack_1a0 = (dVar24 * dVar36 - dVar24 * dVar36) + dVar21 * dVar24 + dStack_2b0 +
                       param_3[7];
          dVar13 = dVar18 * dVar13;
          dVar17 = dVar3 * dVar17;
          dVar34 = dVar2 * dVar32;
          dVar23 = dVar4 * dVar23;
          local_2ec = param_4;
        }
        else {
          dVar38 = *param_3;
          dVar28 = param_3[1];
          dVar33 = param_3[2];
          dVar27 = dVar28 + dVar28;
          dVar35 = dVar33 + dVar33;
          dVar42 = dVar38 * (dVar38 + dVar38);
          dVar24 = param_3[3];
          dVar36 = dVar35 * dVar24;
          dVar37 = (dVar38 + dVar38) * param_3[3];
          dVar24 = dVar27 * dVar24;
          dVar34 = dVar32 * dVar2;
          dVar23 = dVar23 * dVar4;
          local_1d8[0] = (dVar21 - (dVar33 * dVar35 + dVar28 * dVar27)) * dVar13;
          dVar4 = (dVar22 - (dVar33 * dVar35 + dVar42)) * dVar17;
          local_1d8[1] = (dVar27 * dVar38 + dVar36) * dVar13;
          local_1a8 = (dVar35 * dVar28 + dVar37) * dVar17;
          local_1c8._8_8_ = 0;
          local_1c8._0_8_ = (*param_3 * dVar35 - dVar24) * dVar13;
          local_1b8._8_4_ = SUB84(dVar4,0);
          local_1b8._0_8_ = (dVar27 * dVar38 - dVar36) * dVar17;
          local_1b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          dStack_1a0 = 0.0;
          local_198._8_8_ = (dVar35 * dVar28 - dVar37) * dVar32;
          local_198._0_8_ = (dVar24 + *param_3 * dVar35) * dVar32;
          local_188._8_8_ = 0;
          local_188._0_8_ = (1.0 - (dVar42 + dVar28 * dVar27)) * dVar32;
          local_178 = param_3[4];
          dStack_170 = param_3[5];
          local_168 = param_3[6];
          uStack_160 = 0x3ff0000000000000;
          dVar32 = dStack_2e0 + dStack_2e0;
          dVar24 = local_2d8 + local_2d8;
          dVar4 = local_2e8 * (local_2e8 + local_2e8);
          local_208 = (1.0 - (dVar4 + dStack_2e0 * dVar32)) * dVar2;
          dVar38 = (local_2e8 + local_2e8) * dStack_2d0;
          local_218 = (dVar32 * dStack_2d0 + local_2e8 * dVar24) * dVar2;
          local_238 = (dVar32 * local_2e8 - dVar24 * dStack_2d0) * dVar3;
          dStack_210 = (dVar24 * dStack_2e0 - dVar38) * dVar2;
          dVar13 = dVar13 * dVar18;
          dVar17 = dVar17 * dVar3;
          local_258 = (dVar21 - (local_2d8 * dVar24 + dStack_2e0 * dVar32)) * dVar18;
          dStack_230 = (dVar22 - (local_2d8 * dVar24 + dVar4)) * dVar3;
          dStack_250 = (dVar32 * local_2e8 + dVar24 * dStack_2d0) * dVar18;
          local_228 = (dVar24 * dStack_2e0 + dVar38) * dVar3;
          local_248 = (local_2e8 * dVar24 - dVar32 * dStack_2d0) * dVar18;
          uStack_240 = 0;
          uStack_220 = 0;
          uStack_200 = 0;
          local_1f8 = local_2c8;
          dStack_1f0 = dStack_2c0;
          local_1e8 = (double)CONCAT44(uStack_2b4,local_2b8);
          uStack_1e0 = 0x3ff0000000000000;
          FUN_1447fea8d(local_158);
          FUN_144a1c686(local_158,0x3e45798ee0000000);
          auVar14._8_8_ = -(ulonglong)(0.0 <= dVar17);
          auVar14._0_8_ = -(ulonglong)(0.0 <= dVar13);
          auVar25 = blendvpd(_DAT_149936790,auVar39,auVar14);
          dVar18 = (double)(~-(ulonglong)(0.0 <= dVar34) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar34) & 0x3ff0000000000000);
          dVar21 = auVar25._0_8_;
          local_158[2] = local_158[2] * dVar21;
          local_158[1] = local_158[1] * dVar21;
          local_158[0] = local_158[0] * dVar21;
          dVar21 = auVar25._8_8_;
          local_128 = local_128 * dVar21;
          local_130 = local_130 * dVar21;
          local_138 = dVar21 * local_138;
          local_108 = local_108 * dVar18;
          local_110 = local_110 * dVar18;
          local_118 = dVar18 * local_118;
          FUN_14481fd10(&local_278,local_158);
          dVar18 = local_268 * local_268 + local_278 * local_278;
          dVar21 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
          auVar19._0_8_ = dVar18 + dVar21;
          auVar19._8_8_ = dVar18 + dVar21;
          auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
          auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
          auVar25 = sqrtpd(auVar19,auVar19);
          auVar39 = divpd(auVar39,auVar25);
          auVar40._0_8_ = auVar39._0_8_ * local_268;
          auVar40._8_8_ = auVar39._8_8_ * dStack_260;
          local_1d8[0] = (double)((ulonglong)(local_278 * auVar39._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
          local_1d8[1] = (double)((ulonglong)(dStack_270 * auVar39._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
          local_1c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar15);
          dStack_1a0 = 0.0;
        }
      }
      local_1b8._8_8_ = dStack_f0;
      local_1b8._0_8_ = local_f8;
      local_1a8 = local_e8;
      local_198._8_4_ = SUB84(dVar17,0);
      local_198._0_8_ = dVar13;
      local_198._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_188._8_4_ = SUB84(dVar23,0);
      local_188._0_8_ = dVar34;
      local_188._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      if (1e-08 < ABS(param_4 + -1.0)) {
        FUN_14915b8da(local_158,&local_2e8,local_1d8);
        pdVar10 = local_158;
        pdVar11 = local_1d8;
        for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pdVar11 = *pdVar10;
          pdVar10 = pdVar10 + 1;
          pdVar11 = pdVar11 + 1;
        }
      }
      uVar8 = 0xffffffff;
      if (*(ushort *)(param_7 + 0xc) != 0xffff) {
        uVar8 = (uint)*(ushort *)(param_7 + 0xc);
      }
      pdVar10 = local_1d8;
      pdVar11 = local_158;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pdVar11 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar11 = pdVar11 + 1;
      }
      local_2f8 = 0;
      local_300 = 0;
      local_308 = param_6;
      FUN_144831e8e(lVar1,uVar8,local_158,0);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244854 FUN_149244854 body=331 status=ok
// SIG undefined FUN_149244854(void)

undefined8 FUN_149244854(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined **local_2d8 [2];
  undefined1 local_2c8 [480];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2d8[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2c8);
  local_2d8[0] = &PTR_FUN_14bbedae0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_60 = 0xffffffff;
  local_e4 = *(undefined8 *)(param_1 + 0x1f0);
  local_e8 = 1;
  local_78 = *(undefined4 *)(param_1 + 0x260);
  local_74 = *(undefined1 *)(param_1 + 0x265);
  FUN_1492449a0(param_2,local_2d8);
  FUN_140056680(local_2e8,L"Item.Name");
  FUN_140056680(local_2f8,L"Bone");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  local_2d8[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2c8);
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492449a0 FUN_1492449a0 body=211 status=ok
// SIG undefined FUN_1492449a0(void)

undefined8 * FUN_1492449a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f006a();
  param_1[2] = uVar1;
  uVar1 = FUN_1466fb8c4();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149244a76 FUN_149244a76 body=89 status=ok
// SIG undefined FUN_149244a76(void)

void FUN_149244a76(void)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [488];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_10 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244ad2 FUN_149244ad2 body=89 status=ok
// SIG undefined FUN_149244ad2(void)

void FUN_149244ad2(void)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [488];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_10 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244b2e FUN_149244b2e body=89 status=ok
// SIG undefined FUN_149244b2e(void)

void FUN_149244b2e(void)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [488];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_10 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244b8a FUN_149244b8a body=89 status=ok
// SIG undefined FUN_149244b8a(void)

void FUN_149244b8a(void)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [488];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_10 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244be6 FUN_149244be6 body=89 status=ok
// SIG undefined FUN_149244be6(void)

void FUN_149244be6(void)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [488];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_10 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244c40 FUN_149244c40 body=188 status=ok
// SIG undefined FUN_149244c40(void)

undefined8 FUN_149244c40(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  undefined **local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = &PTR_FUN_14bbee490;
  local_34 = *(undefined8 *)(param_1 + 8);
  local_38 = 1;
  FUN_149244cfe(param_2);
  FUN_140056680(local_50,L"Item.Name");
  FUN_140056680(local_60,L"Bone");
  local_68 = 1;
  FUN_1490fb142(param_2,local_60,local_50,1);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244cfe FUN_149244cfe body=211 status=ok
// SIG undefined FUN_149244cfe(void)

undefined8 * FUN_149244cfe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f06f2();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f03ae();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149244dd2 FUN_149244dd2 body=183 status=ok
// SIG undefined FUN_149244dd2(void)

undefined8 FUN_149244dd2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &PTR_FUN_14bbee490;
  local_2c = *(undefined8 *)(param_1 + 8);
  local_30 = 2;
  FUN_149244e8a(param_2);
  FUN_140056680(local_48,L"Item.Name");
  FUN_140056680(local_58,L"Space");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149244e8a FUN_149244e8a body=211 status=ok
// SIG undefined FUN_149244e8a(void)

undefined8 * FUN_149244e8a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f0894();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f03ae();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149244f5e FUN_149244f5e body=183 status=ok
// SIG undefined FUN_149244f5e(void)

undefined8 FUN_149244f5e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &PTR_FUN_14bbee490;
  local_2c = *(undefined8 *)(param_1 + 8);
  local_30 = 4;
  FUN_149245016(param_2);
  FUN_140056680(local_48,L"Item.Name");
  FUN_140056680(local_58,L"Control");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149245016 FUN_149245016 body=211 status=ok
// SIG undefined FUN_149245016(void)

undefined8 * FUN_149245016(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f0a36();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f03ae();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492450f0 FUN_1492450f0 body=223 status=ok
// SIG undefined FUN_1492450f0(void)

void FUN_1492450f0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined1 *)*puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  *puVar3 = 0;
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_1492469d4(lVar7,puVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492451d6 FUN_1492451d6 body=105 status=ok
// SIG undefined FUN_1492451d6(void)

void FUN_1492451d6(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149245240(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149245240 FUN_149245240 body=100 status=ok
// SIG undefined FUN_149245240(void)

void FUN_149245240(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = 0;
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_1492469d4(param_2,param_1 + 0x30,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492452a4 FUN_1492452a4 body=226 status=ok
// SIG undefined FUN_1492452a4(void)

void FUN_1492452a4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined4 *)*puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  *puVar3 = 0;
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_149246a8a(lVar7,puVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149245386 FUN_149245386 body=105 status=ok
// SIG undefined FUN_149245386(void)

void FUN_149245386(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492453f0(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492453f0 FUN_1492453f0 body=103 status=ok
// SIG undefined FUN_1492453f0(void)

void FUN_1492453f0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_149246a8a(param_2,param_1 + 0x30,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149245458 FUN_149245458 body=226 status=ok
// SIG undefined FUN_149245458(void)

void FUN_149245458(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined4 *)*puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  *puVar3 = 0;
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_149246b4e(lVar7,puVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14924553a FUN_14924553a body=105 status=ok
// SIG undefined FUN_14924553a(void)

void FUN_14924553a(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492455a4(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492455a4 FUN_1492455a4 body=103 status=ok
// SIG undefined FUN_1492455a4(void)

void FUN_1492455a4(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_149246b4e(param_2,param_1 + 0x30,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14924560c FUN_14924560c body=230 status=ok
// SIG undefined FUN_14924560c(void)

void FUN_14924560c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_RBX;
  
  plVar2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*plVar2;
  lVar4 = plVar2[4];
  lVar5 = plVar2[8];
  uVar1 = *(undefined1 *)plVar2[0xc];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(plVar2 + 0x10,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0xa0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  uVar8 = DAT_14c8463f8._4_4_;
  uVar7 = (undefined4)DAT_14c8463f8;
  uVar6 = DAT_14c8463f0._4_4_;
  lVar10 = *(longlong *)(param_1 + 0xc0);
  *puVar3 = (undefined4)DAT_14c8463f0;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  cVar9 = FUN_149246732(*(undefined8 *)(lVar10 + 0x1b0),lVar4,lVar5,uVar11,uVar12);
  if (cVar9 == '\0') {
    return;
  }
  FUN_149246c06(lVar10,puVar3,uVar11,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff)
  ;
  return;
}



// FUNCTION 1492456f2 FUN_1492456f2 body=105 status=ok
// SIG undefined FUN_1492456f2(void)

void FUN_1492456f2(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14924575c(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924575c FUN_14924575c body=107 status=ok
// SIG undefined FUN_14924575c(void)

void FUN_14924575c(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 unaff_RBP;
  
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  cVar5 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar5 == '\0') {
    return;
  }
  FUN_149246c06(param_2,param_1 + 0x30,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492457c8 FUN_1492457c8 body=241 status=ok
// SIG undefined FUN_1492457c8(void)

void FUN_1492457c8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_RBX;
  
  plVar2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*plVar2;
  lVar4 = plVar2[4];
  lVar5 = plVar2[8];
  uVar1 = *(undefined1 *)plVar2[0xc];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(plVar2 + 0x10,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0xa0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  uVar8 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  lVar10 = *(longlong *)(param_1 + 0xc0);
  *puVar3 = (undefined4)DAT_14c8464e0;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(undefined8 *)(puVar3 + 4) = DAT_14c8464f0;
  cVar9 = FUN_149246732(*(undefined8 *)(lVar10 + 0x1b0),lVar4,lVar5,uVar11,uVar12);
  if (cVar9 == '\0') {
    return;
  }
  FUN_149246cd4(lVar10,puVar3,uVar11,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff)
  ;
  return;
}



// FUNCTION 1492458ba FUN_1492458ba body=105 status=ok
// SIG undefined FUN_1492458ba(void)

void FUN_1492458ba(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149245924(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149245924 FUN_149245924 body=118 status=ok
// SIG undefined FUN_149245924(void)

void FUN_149245924(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 unaff_RBP;
  
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
  cVar5 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar5 == '\0') {
    return;
  }
  FUN_149246cd4(param_2,param_1 + 0x30,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14924599a FUN_14924599a body=241 status=ok
// SIG undefined FUN_14924599a(void)

void FUN_14924599a(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_RBX;
  
  plVar2 = (longlong *)*param_2;
  puVar3 = (undefined4 *)*plVar2;
  lVar4 = plVar2[4];
  lVar5 = plVar2[8];
  uVar1 = *(undefined1 *)plVar2[0xc];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(plVar2 + 0x10,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0xa0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  uVar8 = DAT_14c846500._4_4_;
  uVar7 = (undefined4)DAT_14c846500;
  uVar6 = DAT_14c8464f8._4_4_;
  lVar10 = *(longlong *)(param_1 + 0xc0);
  *puVar3 = (undefined4)DAT_14c8464f8;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(undefined8 *)(puVar3 + 4) = DAT_14c846508;
  cVar9 = FUN_149246732(*(undefined8 *)(lVar10 + 0x1b0),lVar4,lVar5,uVar11,uVar12);
  if (cVar9 == '\0') {
    return;
  }
  FUN_149246dbc(lVar10,puVar3,uVar11,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff)
  ;
  return;
}



// FUNCTION 149245a8c FUN_149245a8c body=105 status=ok
// SIG undefined FUN_149245a8c(void)

void FUN_149245a8c(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149245af6(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149245af6 FUN_149245af6 body=118 status=ok
// SIG undefined FUN_149245af6(void)

void FUN_149245af6(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 unaff_RBP;
  
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c846508;
  cVar5 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar5 == '\0') {
    return;
  }
  FUN_149246dbc(param_2,param_1 + 0x30,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149245b6c FUN_149245b6c body=239 status=ok
// SIG undefined FUN_149245b6c(void)

void FUN_149245b6c(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 unaff_RBP;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)*puVar10;
  uVar3 = puVar10[4];
  uVar4 = puVar10[8];
  uVar1 = *(undefined1 *)puVar10[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar10 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = *(longlong *)(param_1 + 0xc0);
  puVar10 = &DAT_14c846480;
  puVar11 = puVar2;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  cVar5 = FUN_149246732(*(undefined8 *)(lVar6 + 0x1b0),uVar3,uVar4,uVar7,uVar8);
  if (cVar5 == '\0') {
    return;
  }
  FUN_149246ec2(lVar6,puVar2,uVar7,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149245c5c FUN_149245c5c body=105 status=ok
// SIG undefined FUN_149245c5c(void)

void FUN_149245c5c(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149245cc6(param_1,local_1f8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149245cc6 FUN_149245cc6 body=126 status=ok
// SIG undefined FUN_149245cc6(void)

void FUN_149245cc6(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  puVar4 = &DAT_14c846480;
  puVar5 = (undefined8 *)(param_1 + 0x30);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_149246ec2(param_2,(undefined8 *)(param_1 + 0x30),param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149245d44 FUN_149245d44 body=222 status=ok
// SIG undefined FUN_149245d44(void)

void FUN_149245d44(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = puVar3[4];
  uVar1 = *(undefined1 *)*puVar3;
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_149247116(lVar7,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar8,
                CONCAT71((int7)((ulonglong)unaff_RSI >> 8),uVar2) & 0xffffffff);
  return;
}



// FUNCTION 149245e2a FUN_149245e2a body=40 status=ok
// SIG undefined FUN_149245e2a(void)

void FUN_149245e2a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_149245e52(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 149245e52 FUN_149245e52 body=94 status=ok
// SIG undefined FUN_149245e52(void)

void FUN_149245e52(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x210);
  cVar3 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar3 == '\0') {
    return;
  }
  FUN_149247116(param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff,
                param_1 + 0x1c,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149245eb0 FUN_149245eb0 body=233 status=ok
// SIG undefined FUN_149245eb0(void)

void FUN_149245eb0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = puVar3[4];
  uVar1 = *(undefined4 *)*puVar3;
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_149247216(lVar7,uVar1,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  return;
}



// FUNCTION 149245f9a FUN_149245f9a body=40 status=ok
// SIG undefined FUN_149245f9a(void)

void FUN_149245f9a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_149245fc2(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 149245fc2 FUN_149245fc2 body=108 status=ok
// SIG undefined FUN_149245fc2(void)

void FUN_149245fc2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x210);
  cVar3 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar3 == '\0') {
    return;
  }
  FUN_149247216(param_2,uVar1,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  return;
}



// FUNCTION 14924602e FUN_14924602e body=221 status=ok
// SIG undefined FUN_14924602e(void)

void FUN_14924602e(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = puVar3[4];
  uVar2 = *(undefined4 *)*puVar3;
  uVar5 = puVar3[8];
  uVar1 = *(undefined1 *)puVar3[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_14924732c(lVar7,uVar2,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14924610c FUN_14924610c body=40 status=ok
// SIG undefined FUN_14924610c(void)

void FUN_14924610c(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_149246134(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 149246134 FUN_149246134 body=93 status=ok
// SIG undefined FUN_149246134(void)

void FUN_149246134(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x210);
  cVar3 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar3 == '\0') {
    return;
  }
  FUN_14924732c(param_2,uVar2,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149246192 FUN_149246192 body=220 status=ok
// SIG undefined FUN_149246192(void)

void FUN_149246192(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_14924742c(lVar7,uVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14924626e FUN_14924626e body=40 status=ok
// SIG undefined FUN_14924626e(void)

void FUN_14924626e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_149246296(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 149246296 FUN_149246296 body=99 status=ok
// SIG undefined FUN_149246296(void)

void FUN_149246296(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_14924742c(param_2,param_1 + 0x210,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492462fa FUN_1492462fa body=220 status=ok
// SIG undefined FUN_1492462fa(void)

void FUN_1492462fa(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_149247542(lVar7,uVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492463d6 FUN_1492463d6 body=40 status=ok
// SIG undefined FUN_1492463d6(void)

void FUN_1492463d6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_1492463fe(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 1492463fe FUN_1492463fe body=99 status=ok
// SIG undefined FUN_1492463fe(void)

void FUN_1492463fe(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_149247542(param_2,param_1 + 0x210,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149246462 FUN_149246462 body=220 status=ok
// SIG undefined FUN_149246462(void)

void FUN_149246462(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_149247668(lVar7,uVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 14924653e FUN_14924653e body=40 status=ok
// SIG undefined FUN_14924653e(void)

void FUN_14924653e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_149246566(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 149246566 FUN_149246566 body=99 status=ok
// SIG undefined FUN_149246566(void)

void FUN_149246566(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_149247668(param_2,param_1 + 0x210,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492465ca FUN_1492465ca body=220 status=ok
// SIG undefined FUN_1492465ca(void)

void FUN_1492465ca(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  cVar6 = FUN_149246732(*(undefined8 *)(lVar7 + 0x1b0),uVar4,uVar5,uVar8,uVar9);
  if (cVar6 == '\0') {
    return;
  }
  FUN_1492477a2(lVar7,uVar3,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 1492466a6 FUN_1492466a6 body=40 status=ok
// SIG undefined FUN_1492466a6(void)

void FUN_1492466a6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1 + 0x30);
  FUN_1492466ce(param_1,param_1 + 0x30);
  return;
}



// FUNCTION 1492466ce FUN_1492466ce body=99 status=ok
// SIG undefined FUN_1492466ce(void)

void FUN_1492466ce(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 unaff_RBP;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  cVar2 = FUN_149246732(*(undefined8 *)(param_2 + 0x1b0),param_1 + 8,param_1 + 0x10,param_1 + 0x1c,
                        param_1 + 0x28);
  if (cVar2 == '\0') {
    return;
  }
  FUN_1492477a2(param_2,param_1 + 0x210,param_1 + 0x1c,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  return;
}



// FUNCTION 149246732 FUN_149246732 body=673 status=ok
// SIG undefined FUN_149246732(void)

ulonglong FUN_149246732(longlong param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                       int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 unaff_RBP;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    if ((DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_4 + 6)) ||
       ((*(longlong *)(param_4 + 4) == 0 || (*param_4 == '\0')))) {
      *param_5 = -1;
    }
    uVar1 = *param_3;
    uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar14 = (uint)uVar1 & 0xffff;
    uVar2 = *param_2;
    uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar6 = (uint)uVar2 & 0xffff;
    uVar7 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4),
                          ((uint)uVar1 << 0x10 | uVar14) + (int)((ulonglong)uVar1 >> 0x20) +
                          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar14 >> 4));
    iVar8 = FUN_144a78877(*(undefined4 *)(param_1 + 0xa8),uVar7);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (iVar8 == *param_5) goto LAB_14924698a;
    local_58 = CONCAT31(local_58._1_3_,4);
    uStack_54 = (undefined4)*param_2;
    uStack_50 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uVar9 = FUN_140813180(param_1);
    if ((((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(param_1 + 0xc0))) &&
        (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar9 * 8), lVar12 != 0))
       && (*(char *)(lVar12 + 0x10) == '\x04')) {
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      FUN_1400021e4(param_3,&local_68);
      FUN_1491d31c2(&local_68,&local_58,&local_68,1);
      FUN_1444a01b2(param_1,&local_78,lVar12);
      if ((longlong)local_70 != 0) {
        lVar12 = 0;
        do {
          lVar3 = *(longlong *)(local_78 + lVar12);
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0x10) == '\x04')) &&
             (*(char *)(lVar3 + 0x210) == '\x01')) {
            lVar11 = lVar3 + 0x214;
            if (*(longlong *)(lVar3 + 0x214) == 0) {
              lVar11 = lVar3 + 0x14;
            }
            FUN_1400021e4(lVar11,&local_88);
            pwVar5 = local_88;
            if (local_80 == local_60) {
              bVar15 = true;
              if (1 < local_80) {
                iVar10 = wcscmp(local_88,local_68);
                bVar15 = iVar10 == 0;
              }
            }
            else {
              bVar15 = local_60 + local_80 == 1;
            }
            if (pwVar5 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar5);
            }
            if (bVar15) {
              *(undefined4 *)(param_4 + 8) = *(undefined4 *)(lVar3 + 0x18);
              *(undefined8 *)param_4 = *(undefined8 *)(lVar3 + 0x10);
              *param_5 = iVar8;
              uVar13 = 1;
              bVar15 = false;
              goto LAB_149246965;
            }
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)local_70 * 8 != lVar12);
      }
      uVar13 = 0;
      bVar15 = true;
LAB_149246965:
      if (local_68 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
      if (!bVar15) goto LAB_14924698a;
    }
  }
  uVar13 = 0;
LAB_14924698a:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1492469d4 FUN_1492469d4 body=180 status=ok
// SIG undefined FUN_1492469d4(void)

void FUN_1492469d4(longlong param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [132];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\0')))) {
    FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),local_ac,*(undefined4 *)(lVar1 + 0x1c),
                  param_4 ^ 1);
    *param_2 = local_ac[0];
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149246a8a FUN_149246a8a body=195 status=ok
// SIG undefined FUN_149246a8a(void)

void FUN_149246a8a(longlong param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_d8 [44];
  undefined4 local_ac [33];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' &&
      ((*(char *)(lVar1 + 0x211) == '\n' || (*(char *)(lVar1 + 0x211) == '\x01')))))) {
    FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),local_ac,*(undefined4 *)(lVar1 + 0x1c),
                  param_4 ^ 1);
    *param_2 = local_ac[0];
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149246b4e FUN_149246b4e body=183 status=ok
// SIG undefined FUN_149246b4e(void)

void FUN_149246b4e(longlong param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_d8 [44];
  undefined4 local_ac [33];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x02')))) {
    FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),local_ac,*(undefined4 *)(lVar1 + 0x1c),
                  param_4 ^ 1);
    *param_2 = local_ac[0];
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149246c06 FUN_149246c06 body=204 status=ok
// SIG undefined FUN_149246c06(void)

void FUN_149246c06(longlong param_1,double *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_d8 [44];
  float local_ac;
  float local_a8;
  ulonglong local_28;
  
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar5 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar5 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x03')))) {
    FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),&local_ac,*(undefined4 *)(lVar1 + 0x1c),
                  param_4 ^ 1);
    *param_2 = (double)local_ac;
    param_2[1] = (double)local_a8;
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149246cd4 FUN_149246cd4 body=230 status=ok
// SIG undefined FUN_149246cd4(void)

void FUN_149246cd4(longlong param_1,double *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_d8 [44];
  float local_ac;
  float local_a8;
  float local_a4;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_2[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar5 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar5 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && ((*(byte *)(lVar1 + 0x211) & 0xfe) == 4)))) {
    FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),&local_ac,*(undefined4 *)(lVar1 + 0x1c),
                  param_4 ^ 1);
    *param_2 = (double)local_ac;
    param_2[1] = (double)local_a8;
    param_2[2] = (double)local_a4;
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149246dbc FUN_149246dbc body=260 status=ok
// SIG undefined FUN_149246dbc(void)

void FUN_149246dbc(longlong param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_2 + 4) = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar5 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar5 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x06')))) {
    FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),&local_ac,*(undefined4 *)(lVar1 + 0x1c),
                  param_4 ^ 1);
    local_d0 = (double)local_a4;
    local_d8 = (double)local_a8;
    local_e0 = (double)local_ac;
    FUN_1467fb380(&local_c8);
    *(undefined8 *)(param_2 + 4) = local_b8;
    *param_2 = local_c8;
    param_2[1] = uStack_c4;
    param_2[2] = uStack_c0;
    param_2[3] = uStack_bc;
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149246ec2 FUN_149246ec2 body=595 status=ok
// SIG undefined FUN_149246ec2(void)

void FUN_149246ec2(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auStack_188 [32];
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  double dStack_130;
  double local_128;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar6 = &DAT_14c846480;
  pauVar7 = param_2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)*pauVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 8);
  }
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  uVar4 = FUN_140813180(lVar5,param_3);
  if ((((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar5 + 0xc0))) &&
      (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar4 * 8), lVar5 != 0)) &&
     (*(char *)(lVar5 + 0x10) == '\x04')) {
    if (*(char *)(lVar5 + 0x211) == '\t') {
      FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),&local_11c,*(undefined4 *)(lVar5 + 0x1c),
                    param_4 ^ 1);
      local_140 = (double)local_114;
      local_148 = (double)local_118;
      local_150 = (double)local_11c;
      local_168 = (double)local_110;
      local_138 = (double)local_104;
      dStack_160 = (double)local_10c;
      local_158 = (double)local_108;
      dStack_130 = (double)local_100;
      local_128 = (double)local_fc;
      FUN_144a7484c(&local_150,&local_98);
      *(undefined8 *)*param_2 = local_98;
      *(undefined8 *)(*param_2 + 8) = uStack_90;
      *(undefined8 *)param_2[1] = local_88;
      *(undefined8 *)(param_2[1] + 8) = uStack_80;
      *(double *)param_2[2] = local_168;
      *(double *)(param_2[2] + 8) = (double)local_10c;
      *(double *)param_2[3] = (double)local_108;
      *(undefined8 *)(param_2[3] + 8) = 0;
      *(undefined4 *)param_2[4] = (undefined4)local_138;
      *(undefined4 *)(param_2[4] + 4) = local_138._4_4_;
      *(double *)(param_2[4] + 8) = (double)local_100;
      *(double *)param_2[5] = (double)local_fc;
      *(undefined8 *)(param_2[5] + 8) = 0;
    }
    else if (*(char *)(lVar5 + 0x211) == '\a') {
      FUN_149181d3e(*(undefined8 *)(param_1 + 0x1b0),&local_11c,*(undefined4 *)(lVar5 + 0x1c),
                    param_4 ^ 1);
      auVar2._8_4_ = SUB84((double)local_118,0);
      auVar2._0_8_ = (double)local_11c;
      auVar2._12_4_ = (int)((ulonglong)(double)local_118 >> 0x20);
      *param_2 = auVar2;
      auVar1._8_4_ = SUB84((double)local_110,0);
      auVar1._0_8_ = (double)local_114;
      auVar1._12_4_ = (int)((ulonglong)(double)local_110 >> 0x20);
      param_2[1] = auVar1;
      *(double *)param_2[2] = (double)local_10c;
      *(double *)(param_2[2] + 8) = (double)local_108;
      *(double *)param_2[3] = (double)local_104;
      *(undefined8 *)(param_2[3] + 8) = 0;
      auVar3._8_4_ = SUB84((double)local_f8,0);
      auVar3._0_8_ = (double)local_fc;
      auVar3._12_4_ = (int)((ulonglong)(double)local_f8 >> 0x20);
      param_2[4] = auVar3;
      *(double *)param_2[5] = (double)local_f4;
      *(undefined8 *)(param_2[5] + 8) = 0;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247116 FUN_149247116 body=255 status=ok
// SIG undefined FUN_149247116(void)

void FUN_149247116(longlong param_1,undefined1 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_ac;
  undefined8 local_ab;
  undefined8 uStack_a3;
  undefined8 local_9b;
  undefined8 uStack_93;
  undefined8 local_8b;
  undefined8 uStack_83;
  undefined8 local_7b;
  undefined8 uStack_73;
  undefined8 local_6b;
  undefined8 uStack_63;
  undefined8 local_5b;
  undefined8 uStack_53;
  undefined8 uStack_4b;
  undefined7 uStack_43;
  undefined1 local_3c;
  undefined7 uStack_3b;
  undefined8 uStack_34;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\0')))) {
    uStack_3b = 0;
    uStack_34 = 0;
    uStack_4b = 0;
    uStack_43 = 0;
    local_3c = 0;
    local_5b = 0;
    uStack_53 = 0;
    local_6b = 0;
    uStack_63 = 0;
    local_7b = 0;
    uStack_73 = 0;
    local_8b = 0;
    uStack_83 = 0;
    local_9b = 0;
    uStack_93 = 0;
    local_ab = 0;
    uStack_a3 = 0;
    local_29 = 0;
    local_2b = 0;
    local_2c = 1;
    local_c0 = 0;
    local_c8 = 0;
    local_ac = param_2;
    FUN_14918c0c6(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar1 + 0x1c),&local_ac,
                  param_4 ^ 1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247216 FUN_149247216 body=277 status=ok
// SIG undefined FUN_149247216(void)

void FUN_149247216(longlong param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' &&
      ((*(char *)(lVar1 + 0x211) == '\n' || (*(char *)(lVar1 + 0x211) == '\x01')))))) {
    local_31 = 0;
    local_33 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_34 = 1;
    local_c0 = 0;
    local_c8 = 0;
    local_b4 = param_2;
    FUN_14918c0c6(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar1 + 0x1c),&local_b4,
                  param_4 ^ 1);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924732c FUN_14924732c body=255 status=ok
// SIG undefined FUN_14924732c(void)

void FUN_14924732c(longlong param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x02')))) {
    local_29 = 0;
    local_2b = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_2c = 1;
    local_c0 = 0;
    local_c8 = 0;
    local_ac = param_2;
    FUN_14918c0c6(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar1 + 0x1c),&local_ac,
                  param_4 ^ 1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924742c FUN_14924742c body=276 status=ok
// SIG undefined FUN_14924742c(void)

void FUN_14924742c(longlong param_1,double *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  float local_ac;
  float local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x03')))) {
    local_a8 = (float)param_2[1];
    local_ac = (float)*param_2;
    local_29 = 0;
    local_2b = 0;
    local_a4 = 0;
    uStack_9c = 0;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = 0;
    uStack_5c = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_44 = 0;
    uStack_3c = 0;
    local_34 = 0;
    local_2c = 1;
    local_c0 = 0;
    local_c8 = 0;
    FUN_14918c0c6(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar1 + 0x1c),&local_ac,
                  param_4 ^ 1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247542 FUN_149247542 body=292 status=ok
// SIG undefined FUN_149247542(void)

void FUN_149247542(longlong param_1,double *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && ((*(byte *)(lVar1 + 0x211) & 0xfe) == 4)))) {
    local_a4 = (float)param_2[2];
    local_a8 = (float)param_2[1];
    local_ac = (float)*param_2;
    local_29 = 0;
    local_2b = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_2c = 1;
    local_c0 = 0;
    local_c8 = 0;
    FUN_14918c0c6(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar1 + 0x1c),&local_ac,
                  param_4 ^ 1);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247668 FUN_149247668 body=313 status=ok
// SIG undefined FUN_149247668(void)

void FUN_149247668(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x10) == '\x04' && (*(char *)(lVar1 + 0x211) == '\x06')))) {
    FUN_1414d053e(param_2,&local_48);
    local_c4 = (float)local_38;
    local_c8 = (float)local_40;
    local_cc = (float)local_48;
    local_49 = 0;
    local_4b = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_4c = 1;
    local_e0 = 0;
    local_e8 = 0;
    FUN_14918c0c6(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar1 + 0x1c),&local_cc,
                  param_4 ^ 1);
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492477a2 FUN_1492477a2 body=699 status=ok
// SIG undefined FUN_1492477a2(void)

void FUN_1492477a2(longlong param_1,double *param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_200;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined1 uStack_16c;
  undefined2 local_16b;
  undefined1 local_169;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined2 local_9b;
  undefined1 local_99;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = FUN_140813180(lVar1,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x10) == '\x04')) {
    if (*(char *)(lVar1 + 0x211) == '\t') {
      local_168 = param_2[4];
      dStack_160 = param_2[5];
      local_158 = param_2[6];
      local_98 = *param_2;
      dStack_90 = param_2[1];
      local_88 = *(undefined4 *)(param_2 + 2);
      uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_80 = *(undefined4 *)(param_2 + 3);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
      FUN_1448052ee(&local_98,&local_150);
      local_138 = param_2[8];
      dStack_130 = param_2[9];
      local_1d0 = (float)param_2[9];
      local_1ec = (float)local_150;
      local_1e8 = (float)local_148;
      local_1e4 = (float)local_140;
      local_1e0 = (float)local_168;
      local_1dc = (float)dStack_160;
      local_1d8 = (float)local_158;
      local_1d4 = (float)local_138;
      local_1cc = (float)param_2[10];
      pfVar4 = &local_1ec;
      local_169 = 0;
      local_16b = 0;
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
    }
    else {
      if (*(char *)(lVar1 + 0x211) != '\a') goto LAB_14924783b;
      local_11c = (float)*param_2;
      local_118 = (float)param_2[1];
      local_114 = (float)param_2[2];
      local_110 = (float)param_2[3];
      local_10c = (float)param_2[4];
      local_108 = (float)param_2[5];
      local_104 = (float)param_2[6];
      local_fc = (float)param_2[8];
      local_f8 = (float)param_2[9];
      local_f4 = (float)param_2[10];
      pfVar4 = &local_11c;
      local_99 = 0;
      local_9b = 0;
      uVar3 = *(undefined8 *)(param_1 + 0x1b0);
      local_100 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
    }
    *(undefined1 *)(pfVar4 + 0x20) = 1;
    local_200 = 0;
    local_208 = 0;
    FUN_14918c0c6(uVar3,*(undefined4 *)(lVar1 + 0x1c),pfVar4,param_4 ^ 1);
  }
LAB_14924783b:
  if ((local_70 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247a88 FUN_149247a88 body=117 status=ok
// SIG undefined FUN_149247a88(void)

void FUN_149247a88(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492469d4(local_1f8,param_1 + 0x18,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247b1c FUN_149247b1c body=117 status=ok
// SIG undefined FUN_149247b1c(void)

void FUN_149247b1c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149246a8a(local_1f8,param_1 + 0x18,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247bb0 FUN_149247bb0 body=117 status=ok
// SIG undefined FUN_149247bb0(void)

void FUN_149247bb0(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149246b4e(local_1f8,param_1 + 0x18,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247c44 FUN_149247c44 body=117 status=ok
// SIG undefined FUN_149247c44(void)

void FUN_149247c44(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149246c06(local_1f8,param_1 + 0x18,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247cd8 FUN_149247cd8 body=117 status=ok
// SIG undefined FUN_149247cd8(void)

void FUN_149247cd8(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149246cd4(local_1f8,param_1 + 0x18,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247d6c FUN_149247d6c body=117 status=ok
// SIG undefined FUN_149247d6c(void)

void FUN_149247d6c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149246dbc(local_1f8,param_1 + 0x18,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247e00 FUN_149247e00 body=117 status=ok
// SIG undefined FUN_149247e00(void)

void FUN_149247e00(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149246ec2(local_1f8,param_1 + 0x20,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149247e9e FUN_149247e9e body=51 status=ok
// SIG undefined FUN_149247e9e(void)

void FUN_149247e9e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_149247116(param_1 + 0x20,*(undefined1 *)(param_1 + 0x200),param_1 + 8,
                *(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 149247ef4 FUN_149247ef4 body=56 status=ok
// SIG undefined FUN_149247ef4(void)

void FUN_149247ef4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_149247216(param_1 + 0x20,*(undefined4 *)(param_1 + 0x200),param_1 + 8,
                *(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 149247f4c FUN_149247f4c body=54 status=ok
// SIG undefined FUN_149247f4c(void)

void FUN_149247f4c(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_14924732c(param_1 + 0x20,*(undefined4 *)(param_1 + 0x200),param_1 + 8,
                *(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 149247fa0 FUN_149247fa0 body=55 status=ok
// SIG undefined FUN_149247fa0(void)

void FUN_149247fa0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_14924742c(param_1 + 0x20,param_1 + 0x200,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 149247ff6 FUN_149247ff6 body=55 status=ok
// SIG undefined FUN_149247ff6(void)

void FUN_149247ff6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_149247542(param_1 + 0x20,param_1 + 0x200,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 14924804c FUN_14924804c body=55 status=ok
// SIG undefined FUN_14924804c(void)

void FUN_14924804c(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_149247668(param_1 + 0x20,param_1 + 0x200,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 1492480a2 FUN_1492480a2 body=55 status=ok
// SIG undefined FUN_1492480a2(void)

void FUN_1492480a2(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
  FUN_1492477a2(param_1 + 0x20,param_1 + 0x200,param_1 + 8,*(undefined1 *)(param_1 + 0x14));
  return;
}



// FUNCTION 1492480da FUN_1492480da body=160 status=ok
// SIG undefined FUN_1492480da(void)

void FUN_1492480da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [36];
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)*puVar1;
  puVar3 = (undefined1 *)puVar1[4];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = 0;
  uVar6 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x1b0) != 0) {
    local_34 = 8;
    local_30 = *puVar2;
    uVar4 = FUN_144828dba(uVar6);
  }
  *puVar3 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248182 FUN_149248182 body=143 status=ok
// SIG undefined FUN_149248182(void)

void FUN_149248182(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_228 [32];
  undefined1 local_208 [432];
  longlong local_58;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  if (local_58 == 0) {
    uVar1 = 0;
  }
  else {
    local_24 = 8;
    local_20 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_144828dba(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248212 FUN_149248212 body=173 status=ok
// SIG undefined FUN_149248212(void)

void FUN_149248212(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_149248356(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 1492482c8 FUN_1492482c8 body=141 status=ok
// SIG undefined FUN_1492482c8(void)

void FUN_1492482c8(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0xa0;
  local_208 = param_1 + 0x80;
  FUN_149248356(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248356 FUN_149248356 body=278 status=ok
// SIG undefined FUN_149248356(void)

void FUN_149248356(longlong param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                  longlong param_5,char *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_98 [104];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    if (*param_6 == '\x01') {
      local_a8 = param_5;
      FUN_14924846e(param_1,param_2,param_3,param_4);
      *param_6 = '\0';
    }
    else {
      local_98[0] = 1;
      local_98._4_8_ = *param_2;
      cVar1 = FUN_144828dba(param_5,local_98,lVar2);
      if (cVar1 != '\0') {
        if ((char)param_3 == '\0') {
          uVar4 = 0xffffffff;
          if (*(ushort *)(param_5 + 0xc) != 0xffff) {
            uVar4 = (uint)*(ushort *)(param_5 + 0xc);
          }
          FUN_144afced8(lVar2,local_98,uVar4,0);
        }
        else {
          if ((param_3 & 0xff) != 1) goto LAB_14924842e;
          uVar4 = 0xffffffff;
          if (*(ushort *)(param_5 + 0xc) != 0xffff) {
            uVar4 = (uint)*(ushort *)(param_5 + 0xc);
          }
          FUN_14486750c(lVar2,local_98,uVar4,0);
        }
        puVar3 = (undefined8 *)local_98;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *param_4 = *puVar3;
          puVar3 = puVar3 + 1;
          param_4 = param_4 + 1;
        }
      }
    }
  }
LAB_14924842e:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924846e FUN_14924846e body=234 status=ok
// SIG undefined FUN_14924846e(void)

void FUN_14924846e(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_88[0] = 1;
    local_88._4_8_ = *param_2;
    cVar1 = FUN_144828dba(param_5,local_88,lVar2);
    if (cVar1 != '\0') {
      if (param_3 == '\0') {
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        }
        FUN_144afced8(lVar2,local_88,uVar4,1);
      }
      else {
        if (param_3 != '\x01') goto LAB_149248532;
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        }
        FUN_14486750c(lVar2,local_88,uVar4,1);
      }
      puVar3 = (undefined8 *)local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *param_4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
LAB_149248532:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14924855a FUN_14924855a body=265 status=ok
// SIG undefined FUN_14924855a(void)

undefined8 FUN_14924855a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined **local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined8 local_a8 [12];
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = &PTR_FUN_14bbf2700;
  local_b3 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  local_44 = 0;
  local_3c = 0xffff;
  local_38 = 0xffffffff;
  local_bc = *(undefined8 *)(param_1 + 8);
  local_c0 = 1;
  local_b4 = *(undefined1 *)(param_1 + 0x10);
  FUN_149248664(param_2,&local_c8);
  FUN_140056680(local_d8,L"Item.Name");
  FUN_140056680(local_e8,L"Bone");
  local_f8 = 1;
  FUN_1490fb142(param_2,local_e8,local_d8,1);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248664 FUN_149248664 body=211 status=ok
// SIG undefined FUN_149248664(void)

undefined8 * FUN_149248664(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466f5e88();
  param_1[2] = uVar1;
  uVar1 = FUN_1466f8754();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149248738 FUN_149248738 body=107 status=ok
// SIG undefined FUN_149248738(void)

void FUN_149248738(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined1 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_149248826(*(undefined8 *)(param_1 + 0xc0),uVar3,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar4,uVar6);
  return;
}



// FUNCTION 1492487a4 FUN_1492487a4 body=129 status=ok
// SIG undefined FUN_1492487a4(void)

void FUN_1492487a4(longlong param_1)

{
  undefined1 auStack_228 [32];
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x80;
  FUN_149248826(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x20);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149248826 FUN_149248826 body=237 status=ok
// SIG undefined FUN_149248826(void)

void FUN_149248826(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [12];
  undefined1 local_34 [4];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_34[0] = 4;
    local_30 = *param_2;
    cVar1 = FUN_144828dba(param_5,local_34,lVar2);
    if (cVar1 != '\0') {
      if (param_3 == '\0') {
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        }
        FUN_144afced8(lVar2,local_98,uVar4,1);
      }
      else {
        if (param_3 != '\x01') goto LAB_1492488ed;
        uVar4 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar4 = (uint)*(ushort *)(param_5 + 0xc);
        }
        FUN_14486750c(lVar2,local_98,uVar4,1);
      }
      puVar3 = local_98;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *param_4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
LAB_1492488ed:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


