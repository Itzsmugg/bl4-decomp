// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425410a0 FUN_1425410a0 body=29 status=ok
// SIG undefined FUN_1425410a0(void)

undefined8 FUN_1425410a0(longlong param_1,undefined8 param_2)

{
  FUN_1424a6be0(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 1425410c0 FUN_1425410c0 body=5 status=ok
// SIG undefined FUN_1425410c0(void)

longlong FUN_1425410c0(longlong param_1)

{
  return param_1 + 0x4d;
}



// FUNCTION 1425410d0 FUN_1425410d0 body=5 status=ok
// SIG undefined FUN_1425410d0(void)

undefined1 FUN_1425410d0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x4c);
}



// FUNCTION 1425410e0 FUN_1425410e0 body=60 status=ok
// SIG undefined FUN_1425410e0(void)

undefined8 * FUN_1425410e0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::NumberingSystem::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142541120 FUN_142541120 body=8 status=ok
// SIG undefined FUN_142541120(void)

undefined * FUN_142541120(void)

{
  return &DAT_14c793308;
}



// FUNCTION 142541130 FUN_142541130 body=674 status=ok
// SIG undefined FUN_142541130(void)

undefined8 * FUN_142541130(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = icu_64::DecimalFormatSymbols::vftable;
  puVar2 = param_1 + 0xe1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  param_1[0x21] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22) = 2;
  param_1[0x29] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a) = 2;
  param_1[0x31] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x32) = 2;
  param_1[0x39] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3a) = 2;
  param_1[0x41] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x42) = 2;
  param_1[0x49] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4a) = 2;
  param_1[0x51] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x52) = 2;
  param_1[0x59] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5a) = 2;
  param_1[0x61] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x62) = 2;
  param_1[0x69] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6a) = 2;
  param_1[0x71] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x72) = 2;
  param_1[0x79] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7a) = 2;
  param_1[0x81] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x82) = 2;
  param_1[0x89] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8a) = 2;
  param_1[0x91] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x92) = 2;
  param_1[0x99] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9a) = 2;
  param_1[0xa1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa2) = 2;
  param_1[0xa9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xaa) = 2;
  param_1[0xb1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb2) = 2;
  param_1[0xb9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xba) = 2;
  param_1[0xc1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  param_1[0xc9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xca) = 2;
  param_1[0xd1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  param_1[0xd9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xda) = 2;
  param_1[0xe1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe2) = 2;
  puVar1 = param_1 + 0xea;
  FUN_1424a3c00(puVar1);
  param_1[0x12e] = 0;
  param_1[0x12f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x130) = 2;
  param_1[0x137] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x138) = 2;
  param_1[0x13f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x140) = 2;
  param_1[0x147] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x148) = 2;
  param_1[0x14f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x150) = 2;
  param_1[0x157] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x158) = 2;
  FUN_1425415e0(param_1,puVar1,param_2,1,0,puVar2,puVar1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1425413e0 Unwind@1425413e0 body=118 status=ok
// SIG undefined Unwind@1425413e0(void)

void Unwind_1425413e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_140859a90(lVar1 + 0xab8);
  FUN_140859a90(lVar1 + 0xa78);
  FUN_140859a90(lVar1 + 0xa38);
  FUN_140859a90(lVar1 + 0x9f8);
  FUN_140859a90(lVar1 + 0x9b8);
  FUN_140859a90(lVar1 + 0x978);
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142541460 Unwind@142541460 body=381 status=ok
// SIG undefined Unwind@142541460(void)

void Unwind_142541460(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_140859a90(lVar1 + 0x6c8);
  FUN_140859a90(lVar1 + 0x688);
  FUN_140859a90(lVar1 + 0x648);
  FUN_140859a90(lVar1 + 0x608);
  FUN_140859a90(lVar1 + 0x5c8);
  FUN_140859a90(lVar1 + 0x588);
  FUN_140859a90(lVar1 + 0x548);
  FUN_140859a90(lVar1 + 0x508);
  FUN_140859a90(lVar1 + 0x4c8);
  FUN_140859a90(lVar1 + 0x488);
  FUN_140859a90(lVar1 + 0x448);
  FUN_140859a90(lVar1 + 0x408);
  FUN_140859a90(lVar1 + 0x3c8);
  FUN_140859a90(lVar1 + 0x388);
  FUN_140859a90(lVar1 + 0x348);
  FUN_140859a90(lVar1 + 0x308);
  FUN_140859a90(lVar1 + 0x2c8);
  FUN_140859a90(lVar1 + 0x288);
  FUN_140859a90(lVar1 + 0x248);
  FUN_140859a90(lVar1 + 0x208);
  FUN_140859a90(lVar1 + 0x1c8);
  FUN_140859a90(lVar1 + 0x188);
  FUN_140859a90(lVar1 + 0x148);
  FUN_140859a90(lVar1 + 0x108);
  FUN_140859a90(lVar1 + 200);
  FUN_140859a90(lVar1 + 0x88);
  FUN_140859a90(lVar1 + 0x48);
  FUN_140859a90(lVar1 + 8);
  FUN_1424b70d0(lVar1);
  return;
}



// FUNCTION 1425415e0 FUN_1425415e0 body=2593 status=ok
// SIG undefined FUN_1425415e0(void)

/* WARNING: Removing unreachable block (ram,0x000142541ac7) */

void FUN_1425415e0(longlong param_1,longlong param_2,int *param_3,char param_4,longlong *param_5)

{
  short sVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  ulonglong uVar15;
  char cVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  undefined1 auVar17 [16];
  char cVar25;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  undefined1 auVar26 [16];
  undefined **local_1f0;
  undefined2 local_1e8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined **local_168;
  longlong local_160;
  undefined2 local_158;
  undefined1 local_128 [8];
  undefined **local_120;
  longlong local_118;
  char local_110;
  char cStack_10f;
  char cStack_10e;
  char cStack_10d;
  char cStack_10c;
  char cStack_10b;
  char cStack_10a;
  char cStack_109;
  char cStack_108;
  char cStack_107;
  char cStack_106;
  char cStack_105;
  char cStack_104;
  char cStack_103;
  char cStack_102;
  char cStack_101;
  char local_100;
  char cStack_ff;
  char cStack_fe;
  char cStack_fd;
  char cStack_fc;
  char cStack_fb;
  char cStack_fa;
  char cStack_f9;
  char local_f8;
  char local_f7;
  char local_f6;
  char local_f5;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  char *local_80;
  int local_74;
  longlong local_70;
  int local_64 [9];
  
  local_64[1] = -2;
  local_64[2] = -1;
  if (0 < *param_3) {
    return;
  }
  *(undefined1 *)(param_1 + 0x830) = 0;
  *(undefined1 *)(param_1 + 0x8cd) = 0;
  local_70 = param_2;
  FUN_142542d60();
  if (param_5 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    plVar7 = (longlong *)FUN_142540ae0(local_70,param_3);
    param_5 = plVar7;
  }
  else {
    plVar7 = (longlong *)0x0;
  }
  pcVar14 = "latn";
  local_e0 = plVar7;
  if (((*param_3 < 1) && (local_88 = plVar7, iVar4 = FUN_142541090(param_5), iVar4 == 10)) &&
     (local_88 = plVar7, cVar2 = FUN_1425410d0(param_5), cVar2 == '\0')) {
    local_88 = plVar7;
    pcVar14 = (char *)FUN_1425410c0(param_5);
    local_88 = plVar7;
    (**(code **)(*param_5 + 0x10))(param_5,&local_d0);
    local_90 = CONCAT71(local_90._1_7_,param_4);
    local_80 = pcVar14;
    uVar5 = FUN_1424a8030(&local_d0,0);
    FUN_1424a8e40(param_1 + 0x108);
    if (*(short *)(param_1 + 0x110) < 0) {
      iVar4 = *(int *)(param_1 + 0x114);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x110) >> 5;
    }
    iVar12 = 0;
    FUN_1424a90a0(param_1 + 0x108,0,iVar4,uVar5);
    uVar15 = 0x12;
    do {
      iVar12 = (iVar12 - (uint)(uVar5 < 0x10000)) + 2;
      uVar5 = FUN_1424a8030(&local_d0,iVar12);
      lVar11 = uVar15 * 0x40;
      lVar10 = param_1 + lVar11 + 8;
      FUN_1424a8e40(lVar10);
      sVar1 = *(short *)(param_1 + 0x10 + lVar11);
      if (sVar1 < 0) {
        iVar4 = *(int *)(param_1 + 0x14 + lVar11);
      }
      else {
        iVar4 = (int)sVar1 >> 5;
      }
      FUN_1424a90a0(lVar10,0,iVar4,uVar5);
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 < 0x1b);
    FUN_140859a90(&local_d0);
    pcVar14 = local_80;
    param_4 = (char)local_90;
  }
  uVar8 = *(undefined8 *)(local_70 + 0x28);
  local_80 = (char *)FUN_1424ebfe0(0,uVar8,param_3);
  lVar10 = FUN_1424ec1c0(local_80,"NumberElements",0,param_3);
  local_90 = lVar10;
  if (0 < *param_3) {
    if (param_4 != '\0') {
      *param_3 = -0x7f;
      FUN_142542d60(param_1);
    }
    goto LAB_142541fb7;
  }
  local_1a8 = param_1 + 0x830;
  local_1b0 = param_1 + 0x8cd;
  local_170 = uVar8;
  uVar8 = FUN_1424ed0b0(lVar10,0,param_3);
  uVar9 = FUN_1424ed0b0(lVar10,1,param_3);
  FUN_1425321b0(&local_1b0,uVar9,uVar8);
  local_120 = icu_64::_anon_7CDC379D::DecFmtSymDataSink::vftable;
  local_110 = '\0';
  cStack_10f = '\0';
  cStack_10e = '\0';
  cStack_10d = '\0';
  cStack_10c = '\0';
  cStack_10b = '\0';
  cStack_10a = '\0';
  cStack_109 = '\0';
  cStack_108 = '\0';
  cStack_107 = '\0';
  cStack_106 = '\0';
  cStack_105 = '\0';
  cStack_104 = '\0';
  cStack_103 = '\0';
  cStack_102 = '\0';
  cStack_101 = '\0';
  local_100 = '\0';
  cStack_ff = '\0';
  cStack_fe = '\0';
  cStack_fd = '\0';
  cStack_fc = '\0';
  cStack_fb = '\0';
  cStack_fa = '\0';
  cStack_f9 = '\0';
  local_f8 = '\0';
  local_f7 = '\0';
  local_f6 = '\0';
  local_f5 = '\0';
  local_118 = param_1;
  iVar4 = strcmp(pcVar14,"latn");
  if (iVar4 == 0) {
    cVar2 = '\0';
    cVar3 = '\0';
    cVar16 = '\0';
    cVar18 = '\0';
    cVar19 = '\0';
    cVar20 = '\0';
    cVar21 = '\0';
    cVar22 = '\0';
    cVar23 = '\0';
    cVar24 = '\0';
    cVar25 = '\0';
    cVar27 = '\0';
    cVar28 = '\0';
    cVar29 = '\0';
    cVar30 = '\0';
    cVar31 = '\0';
    cVar32 = '\0';
    cVar33 = '\0';
    cVar34 = '\0';
    cVar35 = '\0';
    cVar36 = '\0';
    cVar37 = '\0';
    cVar38 = '\0';
    cVar39 = '\0';
    cVar40 = '\0';
    cVar41 = '\0';
LAB_142541a00:
    auVar26[0] = -(cVar25 == '\0');
    auVar26[1] = -(cVar27 == '\0');
    auVar26[2] = -(cVar28 == '\0');
    auVar26[3] = -(cVar29 == '\0');
    auVar26[4] = -(cVar30 == '\0');
    auVar26[5] = -(cVar31 == '\0');
    auVar26[6] = -(cVar32 == '\0');
    auVar26[7] = -(cVar33 == '\0');
    auVar26[8] = -(cVar34 == '\0');
    auVar26[9] = -(cVar35 == '\0');
    auVar26[10] = -(cVar36 == '\0');
    auVar26[0xb] = -(cVar37 == '\0');
    auVar26[0xc] = -(cVar38 == '\0');
    auVar26[0xd] = -(cVar39 == '\0');
    auVar26[0xe] = -(cVar40 == '\0');
    auVar26[0xf] = -(cVar41 == '\0');
    auVar17[0] = -(cVar16 == '\0');
    auVar17[1] = -(cVar18 == '\0');
    auVar17[2] = -(cVar19 == '\0');
    auVar17[3] = -(cVar20 == '\0');
    auVar17[4] = -(cVar21 == '\0');
    auVar17[5] = -(cVar22 == '\0');
    auVar17[6] = -(cVar23 == '\0');
    auVar17[7] = -(cVar24 == '\0');
    auVar17[8] = 0xff;
    auVar17[9] = 0xff;
    auVar17[10] = 0xff;
    auVar17[0xb] = 0xff;
    auVar17[0xc] = 0xff;
    auVar17[0xd] = 0xff;
    auVar17[0xe] = 0xff;
    auVar17[0xf] = 0xff;
    if (((((cVar3 != '\0' && cVar2 != '\0') &&
          (((((((((SUB161(auVar17 >> 7,0) & 1) == 0 && (SUB161(auVar17 >> 0xf,0) & 1) == 0) &&
                (SUB161(auVar17 >> 0x17,0) & 1) == 0) && (SUB161(auVar17 >> 0x1f,0) & 1) == 0) &&
              (SUB161(auVar17 >> 0x27,0) & 1) == 0) && (SUB161(auVar17 >> 0x2f,0) & 1) == 0) &&
            (SUB161(auVar17 >> 0x37,0) & 1) == 0) && (SUB161(auVar17 >> 0x3f,0) & 1) == 0) &&
          ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) == 0 && (SUB161(auVar26 >> 0xf,0) & 1) == 0)
                       && (SUB161(auVar26 >> 0x17,0) & 1) == 0) &&
                      (SUB161(auVar26 >> 0x1f,0) & 1) == 0) && (SUB161(auVar26 >> 0x27,0) & 1) == 0)
                    && (SUB161(auVar26 >> 0x2f,0) & 1) == 0) && (SUB161(auVar26 >> 0x37,0) & 1) == 0
                   ) && (SUB161(auVar26 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar26 >> 0x47,0) & 1) == 0) && (SUB161(auVar26 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar26 >> 0x57,0) & 1) == 0) && (SUB161(auVar26 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar26 >> 0x67,0) & 1) == 0) && (SUB161(auVar26 >> 0x6f,0) & 1) == 0) &&
           (SUB161(auVar26 >> 0x77,0) & 1) == 0) && -1 < auVar26[0xf]))) && local_f6 != '\0') &&
        (local_f5 != '\0')) ||
       (FUN_1424ec6e0(local_80,"NumberElements/latn/symbols",&local_120,param_3), *param_3 < 1)) {
      if (cStack_106 == '\0') {
        FUN_1424a7c80(local_118 + 0x288,param_1 + 8);
      }
      if (cStack_ff == '\0') {
        FUN_1424a7c80(local_118 + 0x448,param_1 + 0x48);
      }
      uVar5 = 0;
      iVar4 = -1;
      while( true ) {
        lVar10 = (ulonglong)uVar5 * 0x40 + 0x448 + param_1;
        if (uVar5 == 0) {
          lVar10 = param_1 + 0x108;
        }
        iVar6 = FUN_1424a8140(lVar10,0,0x7fffffff);
        iVar12 = -1;
        if (iVar6 != 1) break;
        iVar6 = FUN_1424a8030(lVar10);
        if (uVar5 == 0) {
          uVar5 = 1;
          iVar4 = iVar6;
        }
        else if ((iVar6 != uVar5 + iVar4) || (uVar5 = uVar5 + 1, iVar12 = iVar4, 9 < uVar5)) break;
      }
      uVar8 = local_170;
      *(int *)(param_1 + 0x748) = iVar12;
      local_74 = 0;
      local_1f0 = &PTR_FUN_149e18960;
      local_1e8 = 2;
      iVar4 = FUN_14253b540(local_170,local_128,4,&local_74);
      if ((local_74 < 1) &&
         ((iVar4 == 3 && (FUN_14253d820(local_128,uVar8,&local_1f0,&local_74), local_74 < 1)))) {
        FUN_1424a8e40(param_1 + 0x248);
        if (*(short *)(param_1 + 0x250) < 0) {
          iVar4 = *(int *)(param_1 + 0x254);
        }
        else {
          iVar4 = (int)*(short *)(param_1 + 0x250) >> 5;
        }
        FUN_1424a9130(param_1 + 0x248,0,iVar4,local_128,0,3);
        FUN_1424a7c80(param_1 + 0x208,&local_1f0);
      }
      local_f0 = 0;
      local_64[0] = 0;
      iVar4 = FUN_14253b540(*(undefined8 *)(local_70 + 0x28),&local_f0,4,local_64);
      if ((local_64[0] < 1) && (0 < iVar4)) {
        local_e8 = 0;
        FUN_14250ae10(&local_f0,&local_e8,iVar4);
        lVar10 = FUN_1424ebfe0("icudt64l-curr",uVar8,local_64);
        lVar11 = FUN_1424ec1c0(lVar10,"Currencies",0,local_64);
        FUN_1424ec1c0(lVar11,&local_e8,lVar11,local_64);
        if ((local_64[0] < 1) && (iVar4 = FUN_1424eaf70(lVar11), 2 < iVar4)) {
          local_d8 = lVar10;
          FUN_1424ebd50(lVar11,2,lVar11,local_64);
          local_e4 = 0;
          uVar9 = FUN_1424ebec0(lVar11,0,&local_e4,local_64);
          *(undefined8 *)(param_1 + 0x970) = uVar9;
          local_70 = lVar11;
          FUN_142543e90(&local_d0,lVar11,1,local_64);
          FUN_142543e90(&local_168,local_70,2,local_64);
          if (local_64[0] < 1) {
            FUN_1424a7c80(param_1 + 0x448,&local_168);
            FUN_1424a7c80(param_1 + 0x288,&local_d0);
            *param_3 = local_64[0];
          }
          FUN_140859a90(&local_168);
          FUN_140859a90(&local_d0);
          lVar10 = local_d8;
          lVar11 = local_70;
        }
        if (lVar11 != 0) {
          FUN_1424ea9f0(lVar11);
        }
        if (lVar10 != 0) {
          FUN_1424ea9f0(lVar10);
        }
      }
      lVar11 = FUN_1424ebfe0("icudt64l-curr",uVar8,param_3);
      local_168 = icu_64::_anon_7CDC379D::CurrencySpacingSink::vftable;
      local_158 = 0;
      local_160 = param_1;
      FUN_1424ec6e0(lVar11,"currencySpacing",&local_168,param_3);
      lVar10 = local_160;
      if (((char)local_158 == '\0') || (local_158._1_1_ == '\0')) {
        local_70 = lVar11;
        FUN_1424a7220(&local_d0,"[:letter:]",0xffffffff,0);
        FUN_1424a7c80(lVar10 + 0xa38,&local_d0);
        FUN_140859a90(&local_d0);
        lVar10 = local_160;
        FUN_1424a7220(&local_d0,"[:digit:]",0xffffffff,0);
        FUN_1424a7c80(lVar10 + 0xa78,&local_d0);
        FUN_140859a90(&local_d0);
        lVar10 = local_160;
        FUN_1424a7220(&local_d0,&DAT_149dfc0cb,0xffffffff,0);
        FUN_1424a7c80(lVar10 + 0xab8,&local_d0);
        FUN_140859a90(&local_d0);
        lVar10 = local_160;
        FUN_1424a7220(&local_d0,"[:letter:]",0xffffffff,0);
        FUN_1424a7c80(lVar10 + 0x978,&local_d0);
        FUN_140859a90(&local_d0);
        lVar10 = local_160;
        FUN_1424a7220(&local_d0,"[:digit:]",0xffffffff,0);
        FUN_1424a7c80(lVar10 + 0x9b8,&local_d0);
        FUN_140859a90(&local_d0);
        lVar10 = local_160;
        FUN_1424a7220(&local_d0,&DAT_149dfc0cb,0xffffffff,0);
        FUN_1424a7c80(lVar10 + 0x9f8,&local_d0);
        FUN_140859a90(&local_d0);
        lVar11 = local_70;
      }
      thunk_FUN_1424b70d0(&local_168);
      if (lVar11 != 0) {
        FUN_1424ea9f0(lVar11);
      }
      FUN_140859a90(&local_1f0);
    }
  }
  else {
    local_d0 = (longlong)&local_c4 + 1;
    local_c8 = 0x28;
    local_c4 = 0;
    local_98 = 0;
    FUN_1425038b0(&local_1a0,"NumberElements");
    uVar8 = FUN_142503520(&local_d0,local_1a0,local_198,param_3);
    uVar8 = FUN_1425034d0(uVar8,0x2f,param_3);
    FUN_1425038b0(&local_190,pcVar14);
    uVar8 = FUN_142503520(uVar8,local_190,local_188,param_3);
    uVar8 = FUN_1425034d0(uVar8,0x2f,param_3);
    FUN_1425038b0(&local_180,"symbols");
    FUN_142503520(uVar8,local_180,local_178,param_3);
    FUN_1424ec6e0(local_80,local_d0,&local_120,param_3);
    if (*param_3 == 2) {
      *param_3 = 0;
LAB_1425419cd:
      cVar2 = local_f8;
      cVar3 = local_f7;
      cVar16 = local_100;
      cVar18 = cStack_ff;
      cVar19 = cStack_fe;
      cVar20 = cStack_fd;
      cVar21 = cStack_fc;
      cVar22 = cStack_fb;
      cVar23 = cStack_fa;
      cVar24 = cStack_f9;
      cVar25 = local_110;
      cVar27 = cStack_10f;
      cVar28 = cStack_10e;
      cVar29 = cStack_10d;
      cVar30 = cStack_10c;
      cVar31 = cStack_10b;
      cVar32 = cStack_10a;
      cVar33 = cStack_109;
      cVar34 = cStack_108;
      cVar35 = cStack_107;
      cVar36 = cStack_106;
      cVar37 = cStack_105;
      cVar38 = cStack_104;
      cVar39 = cStack_103;
      cVar40 = cStack_102;
      cVar41 = cStack_101;
      if ((char)local_c4 != '\0') {
        FUN_1424da110(local_d0);
        cVar2 = local_f8;
        cVar3 = local_f7;
        cVar16 = local_100;
        cVar18 = cStack_ff;
        cVar19 = cStack_fe;
        cVar20 = cStack_fd;
        cVar21 = cStack_fc;
        cVar22 = cStack_fb;
        cVar23 = cStack_fa;
        cVar24 = cStack_f9;
        cVar25 = local_110;
        cVar27 = cStack_10f;
        cVar28 = cStack_10e;
        cVar29 = cStack_10d;
        cVar30 = cStack_10c;
        cVar31 = cStack_10b;
        cVar32 = cStack_10a;
        cVar33 = cStack_109;
        cVar34 = cStack_108;
        cVar35 = cStack_107;
        cVar36 = cStack_106;
        cVar37 = cStack_105;
        cVar38 = cStack_104;
        cVar39 = cStack_103;
        cVar40 = cStack_102;
        cVar41 = cStack_101;
      }
      goto LAB_142541a00;
    }
    if (*param_3 < 1) goto LAB_1425419cd;
    if ((char)local_c4 != '\0') {
      FUN_1424da110(local_d0);
    }
  }
  thunk_FUN_1424b70d0(&local_120);
LAB_142541fb7:
  if (local_90 != 0) {
    FUN_1424ea9f0();
  }
  plVar7 = local_e0;
  if (local_80 != (char *)0x0) {
    FUN_1424ea9f0();
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)*plVar7)(plVar7,1);
  }
  return;
}



// FUNCTION 142542010 Unwind@142542010 body=82 status=ok
// SIG undefined Unwind@142542010(void)

void Unwind_142542010(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x158);
  *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_2 + 0x148);
  return;
}



// FUNCTION 142542070 Unwind@142542070 body=78 status=ok
// SIG undefined Unwind@142542070(void)

void Unwind_142542070(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x164) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x158));
  }
  return;
}



// FUNCTION 1425420c0 Unwind@1425420c0 body=66 status=ok
// SIG undefined Unwind@1425420c0(void)

void Unwind_1425420c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xc0);
  return;
}



// FUNCTION 142542110 Unwind@142542110 body=69 status=ok
// SIG undefined Unwind@142542110(void)

void Unwind_142542110(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x158);
  return;
}



// FUNCTION 142542160 Unwind@142542160 body=99 status=ok
// SIG undefined Unwind@142542160(void)

void Unwind_142542160(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    FUN_1424ea9f0(*(longlong *)(param_2 + 0x1b8));
  }
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x150));
  }
  return;
}



// FUNCTION 1425421d0 Unwind@1425421d0 body=69 status=ok
// SIG undefined Unwind@1425421d0(void)

void Unwind_1425421d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x158);
  return;
}



// FUNCTION 142542220 Unwind@142542220 body=88 status=ok
// SIG undefined Unwind@142542220(void)

void Unwind_142542220(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xc0);
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x1b8));
  }
  return;
}



// FUNCTION 142542280 Unwind@142542280 body=66 status=ok
// SIG undefined Unwind@142542280(void)

void Unwind_142542280(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425422d0 Unwind@1425422d0 body=69 status=ok
// SIG undefined Unwind@1425422d0(void)

void Unwind_1425422d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x108);
  return;
}



// FUNCTION 142542320 Unwind@142542320 body=115 status=ok
// SIG undefined Unwind@142542320(void)

void Unwind_142542320(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x198) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x198));
  }
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x1a8));
  }
  *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_2 + 0x148);
  return;
}



// FUNCTION 1425423a0 Unwind@1425423a0 body=78 status=ok
// SIG undefined Unwind@1425423a0(void)

void Unwind_1425423a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x1a0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1425423f0 FUN_1425423f0 body=674 status=ok
// SIG undefined FUN_1425423f0(void)

undefined8 * FUN_1425423f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = icu_64::DecimalFormatSymbols::vftable;
  puVar2 = param_1 + 0xe1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  param_1[0x21] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22) = 2;
  param_1[0x29] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a) = 2;
  param_1[0x31] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x32) = 2;
  param_1[0x39] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3a) = 2;
  param_1[0x41] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x42) = 2;
  param_1[0x49] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4a) = 2;
  param_1[0x51] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x52) = 2;
  param_1[0x59] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5a) = 2;
  param_1[0x61] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x62) = 2;
  param_1[0x69] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6a) = 2;
  param_1[0x71] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x72) = 2;
  param_1[0x79] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7a) = 2;
  param_1[0x81] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x82) = 2;
  param_1[0x89] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8a) = 2;
  param_1[0x91] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x92) = 2;
  param_1[0x99] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9a) = 2;
  param_1[0xa1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa2) = 2;
  param_1[0xa9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xaa) = 2;
  param_1[0xb1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb2) = 2;
  param_1[0xb9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xba) = 2;
  param_1[0xc1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  param_1[0xc9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xca) = 2;
  param_1[0xd1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  param_1[0xd9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xda) = 2;
  param_1[0xe1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe2) = 2;
  puVar1 = param_1 + 0xea;
  FUN_1424a3ce0(puVar1);
  param_1[0x12e] = 0;
  param_1[0x12f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x130) = 2;
  param_1[0x137] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x138) = 2;
  param_1[0x13f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x140) = 2;
  param_1[0x147] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x148) = 2;
  param_1[0x14f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x150) = 2;
  param_1[0x157] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x158) = 2;
  FUN_1425415e0(param_1,puVar1,param_3,0,0,puVar2,puVar1,param_1,uVar3);
  return param_1;
}



// FUNCTION 1425426a0 Unwind@1425426a0 body=118 status=ok
// SIG undefined Unwind@1425426a0(void)

void Unwind_1425426a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_140859a90(lVar1 + 0xab8);
  FUN_140859a90(lVar1 + 0xa78);
  FUN_140859a90(lVar1 + 0xa38);
  FUN_140859a90(lVar1 + 0x9f8);
  FUN_140859a90(lVar1 + 0x9b8);
  FUN_140859a90(lVar1 + 0x978);
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142542720 Unwind@142542720 body=381 status=ok
// SIG undefined Unwind@142542720(void)

void Unwind_142542720(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_140859a90(lVar1 + 0x6c8);
  FUN_140859a90(lVar1 + 0x688);
  FUN_140859a90(lVar1 + 0x648);
  FUN_140859a90(lVar1 + 0x608);
  FUN_140859a90(lVar1 + 0x5c8);
  FUN_140859a90(lVar1 + 0x588);
  FUN_140859a90(lVar1 + 0x548);
  FUN_140859a90(lVar1 + 0x508);
  FUN_140859a90(lVar1 + 0x4c8);
  FUN_140859a90(lVar1 + 0x488);
  FUN_140859a90(lVar1 + 0x448);
  FUN_140859a90(lVar1 + 0x408);
  FUN_140859a90(lVar1 + 0x3c8);
  FUN_140859a90(lVar1 + 0x388);
  FUN_140859a90(lVar1 + 0x348);
  FUN_140859a90(lVar1 + 0x308);
  FUN_140859a90(lVar1 + 0x2c8);
  FUN_140859a90(lVar1 + 0x288);
  FUN_140859a90(lVar1 + 0x248);
  FUN_140859a90(lVar1 + 0x208);
  FUN_140859a90(lVar1 + 0x1c8);
  FUN_140859a90(lVar1 + 0x188);
  FUN_140859a90(lVar1 + 0x148);
  FUN_140859a90(lVar1 + 0x108);
  FUN_140859a90(lVar1 + 200);
  FUN_140859a90(lVar1 + 0x88);
  FUN_140859a90(lVar1 + 0x48);
  FUN_140859a90(lVar1 + 8);
  FUN_1424b70d0(lVar1);
  return;
}



// FUNCTION 1425428a0 FUN_1425428a0 body=677 status=ok
// SIG undefined FUN_1425428a0(void)

undefined8 *
FUN_1425428a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = icu_64::DecimalFormatSymbols::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  param_1[0x21] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22) = 2;
  param_1[0x29] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a) = 2;
  param_1[0x31] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x32) = 2;
  param_1[0x39] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3a) = 2;
  param_1[0x41] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x42) = 2;
  param_1[0x49] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4a) = 2;
  param_1[0x51] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x52) = 2;
  param_1[0x59] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5a) = 2;
  param_1[0x61] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x62) = 2;
  param_1[0x69] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6a) = 2;
  param_1[0x71] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x72) = 2;
  param_1[0x79] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7a) = 2;
  param_1[0x81] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x82) = 2;
  param_1[0x89] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8a) = 2;
  param_1[0x91] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x92) = 2;
  param_1[0x99] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9a) = 2;
  param_1[0xa1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa2) = 2;
  param_1[0xa9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xaa) = 2;
  param_1[0xb1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb2) = 2;
  param_1[0xb9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xba) = 2;
  param_1[0xc1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  param_1[0xc9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xca) = 2;
  param_1[0xd1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  param_1[0xd9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xda) = 2;
  param_1[0xe1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe2) = 2;
  FUN_1424a3ce0(param_1 + 0xea);
  param_1[0x12e] = 0;
  param_1[0x12f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x130) = 2;
  param_1[0x137] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x138) = 2;
  param_1[0x13f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x140) = 2;
  param_1[0x147] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x148) = 2;
  param_1[0x14f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x150) = 2;
  param_1[0x157] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x158) = 2;
  FUN_1425415e0(param_1,param_1 + 0xea,param_4,0,param_3);
  return param_1;
}



// FUNCTION 142542b50 Unwind@142542b50 body=122 status=ok
// SIG undefined Unwind@142542b50(void)

void Unwind_142542b50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  FUN_140859a90(lVar1 + 0xab8);
  FUN_140859a90(lVar1 + 0xa78);
  FUN_140859a90(lVar1 + 0xa38);
  FUN_140859a90(lVar1 + 0x9f8);
  FUN_140859a90(lVar1 + 0x9b8);
  FUN_140859a90(lVar1 + 0x978);
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 142542bd0 Unwind@142542bd0 body=385 status=ok
// SIG undefined Unwind@142542bd0(void)

void Unwind_142542bd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  lVar1 = *(longlong *)(param_2 + 0x40);
  FUN_140859a90(lVar1 + 0x6c8);
  FUN_140859a90(lVar1 + 0x688);
  FUN_140859a90(lVar1 + 0x648);
  FUN_140859a90(lVar1 + 0x608);
  FUN_140859a90(lVar1 + 0x5c8);
  FUN_140859a90(lVar1 + 0x588);
  FUN_140859a90(lVar1 + 0x548);
  FUN_140859a90(lVar1 + 0x508);
  FUN_140859a90(lVar1 + 0x4c8);
  FUN_140859a90(lVar1 + 0x488);
  FUN_140859a90(lVar1 + 0x448);
  FUN_140859a90(lVar1 + 0x408);
  FUN_140859a90(lVar1 + 0x3c8);
  FUN_140859a90(lVar1 + 0x388);
  FUN_140859a90(lVar1 + 0x348);
  FUN_140859a90(lVar1 + 0x308);
  FUN_140859a90(lVar1 + 0x2c8);
  FUN_140859a90(lVar1 + 0x288);
  FUN_140859a90(lVar1 + 0x248);
  FUN_140859a90(lVar1 + 0x208);
  FUN_140859a90(lVar1 + 0x1c8);
  FUN_140859a90(lVar1 + 0x188);
  FUN_140859a90(lVar1 + 0x148);
  FUN_140859a90(lVar1 + 0x108);
  FUN_140859a90(lVar1 + 200);
  FUN_140859a90(lVar1 + 0x88);
  FUN_140859a90(lVar1 + 0x48);
  FUN_140859a90(lVar1 + 8);
  FUN_1424b70d0(lVar1);
  return;
}



// FUNCTION 142542d60 FUN_142542d60 body=1846 status=ok
// SIG undefined FUN_142542d60(void)

void FUN_142542d60(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1a = 0x2e;
  if (*(short *)(param_1 + 0x10) < 0) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x10) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 8,0,iVar2,&local_1a);
  uVar1 = *(ushort *)(param_1 + 0x50) & 0x1f;
  if ((*(ushort *)(param_1 + 0x50) & 1) != 0) {
    uVar1 = 2;
  }
  *(ushort *)(param_1 + 0x50) = uVar1;
  local_1a = 0x3b;
  if (*(short *)(param_1 + 0x90) < 0) {
    iVar2 = *(int *)(param_1 + 0x94);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x90) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x88,0,iVar2,&local_1a);
  local_1a = 0x25;
  if (*(short *)(param_1 + 0xd0) < 0) {
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0xd0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 200,0,iVar2,&local_1a);
  local_1a = 0x30;
  if (*(short *)(param_1 + 0x110) < 0) {
    iVar2 = *(int *)(param_1 + 0x114);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x110) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x108,0,iVar2,&local_1a);
  local_1a = 0x31;
  if (*(short *)(param_1 + 0x490) < 0) {
    iVar2 = *(int *)(param_1 + 0x494);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x490) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x488,0,iVar2,&local_1a);
  local_1a = 0x32;
  if (*(short *)(param_1 + 0x4d0) < 0) {
    iVar2 = *(int *)(param_1 + 0x4d4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x4d0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x4c8,0,iVar2,&local_1a);
  local_1a = 0x33;
  if (*(short *)(param_1 + 0x510) < 0) {
    iVar2 = *(int *)(param_1 + 0x514);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x510) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x508,0,iVar2,&local_1a);
  local_1a = 0x34;
  if (*(short *)(param_1 + 0x550) < 0) {
    iVar2 = *(int *)(param_1 + 0x554);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x550) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x548,0,iVar2,&local_1a);
  local_1a = 0x35;
  if (*(short *)(param_1 + 0x590) < 0) {
    iVar2 = *(int *)(param_1 + 0x594);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x590) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x588,0,iVar2,&local_1a);
  local_1a = 0x36;
  if (*(short *)(param_1 + 0x5d0) < 0) {
    iVar2 = *(int *)(param_1 + 0x5d4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x5d0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x5c8,0,iVar2,&local_1a);
  local_1a = 0x37;
  if (*(short *)(param_1 + 0x610) < 0) {
    iVar2 = *(int *)(param_1 + 0x614);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x610) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x608,0,iVar2,&local_1a);
  local_1a = 0x38;
  if (*(short *)(param_1 + 0x650) < 0) {
    iVar2 = *(int *)(param_1 + 0x654);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x650) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x648,0,iVar2,&local_1a);
  local_1a = 0x39;
  if (*(short *)(param_1 + 0x690) < 0) {
    iVar2 = *(int *)(param_1 + 0x694);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x690) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x688,0,iVar2,&local_1a);
  local_1a = 0x23;
  if (*(short *)(param_1 + 0x150) < 0) {
    iVar2 = *(int *)(param_1 + 0x154);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x150) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x148,0,iVar2,&local_1a);
  local_1a = 0x2b;
  if (*(short *)(param_1 + 0x1d0) < 0) {
    iVar2 = *(int *)(param_1 + 0x1d4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x1d0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x1c8,0,iVar2,&local_1a);
  local_1a = 0x2d;
  if (*(short *)(param_1 + 400) < 0) {
    iVar2 = *(int *)(param_1 + 0x194);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 400) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x188,0,iVar2,&local_1a);
  local_1a = 0xa4;
  if (*(short *)(param_1 + 0x210) < 0) {
    iVar2 = *(int *)(param_1 + 0x214);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x210) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x208,0,iVar2,&local_1a);
  FUN_1424a8f10(param_1 + 0x248,1,&DAT_1499df7e0,2);
  local_1a = 0x2e;
  if (*(short *)(param_1 + 0x290) < 0) {
    iVar2 = *(int *)(param_1 + 0x294);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x290) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x288,0,iVar2,&local_1a);
  local_1a = 0x45;
  if (*(short *)(param_1 + 0x2d0) < 0) {
    iVar2 = *(int *)(param_1 + 0x2d4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x2d0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x2c8,0,iVar2,&local_1a);
  local_1a = 0x2030;
  if (*(short *)(param_1 + 0x310) < 0) {
    iVar2 = *(int *)(param_1 + 0x314);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x310) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x308,0,iVar2,&local_1a);
  local_1a = 0x2a;
  if (*(short *)(param_1 + 0x350) < 0) {
    iVar2 = *(int *)(param_1 + 0x354);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x350) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x348,0,iVar2,&local_1a);
  local_1a = 0x221e;
  if (*(short *)(param_1 + 0x390) < 0) {
    iVar2 = *(int *)(param_1 + 0x394);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x390) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x388,0,iVar2,&local_1a);
  local_1a = 0xfffd;
  if (*(short *)(param_1 + 0x3d0) < 0) {
    iVar2 = *(int *)(param_1 + 0x3d4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x3d0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x3c8,0,iVar2,&local_1a);
  local_1a = 0x40;
  if (*(short *)(param_1 + 0x410) < 0) {
    iVar2 = *(int *)(param_1 + 0x414);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x410) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x408,0,iVar2,&local_1a);
  uVar1 = 2;
  if ((*(ushort *)(param_1 + 0x450) & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x450) & 0x1f;
  }
  *(ushort *)(param_1 + 0x450) = uVar1;
  local_1a = 0xd7;
  if (*(short *)(param_1 + 0x6d0) < 0) {
    iVar2 = *(int *)(param_1 + 0x6d4);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x6d0) >> 5;
  }
  local_30 = 1;
  local_38 = 0;
  FUN_1424a9130(param_1 + 0x6c8,0,iVar2,&local_1a);
  *(undefined2 *)(param_1 + 0xaf8) = 0;
  *(undefined4 *)(param_1 + 0x748) = 0x30;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1425434a0 FUN_1425434a0 body=468 status=ok
// SIG undefined FUN_1425434a0(void)

void FUN_1425434a0(undefined8 *param_1)

{
  *param_1 = icu_64::DecimalFormatSymbols::vftable;
  FUN_140859a90(param_1 + 0x157);
  FUN_140859a90(param_1 + 0x14f);
  FUN_140859a90(param_1 + 0x147);
  FUN_140859a90(param_1 + 0x13f);
  FUN_140859a90(param_1 + 0x137);
  FUN_140859a90(param_1 + 0x12f);
  FUN_1414b3f60(param_1 + 0xea);
  FUN_140859a90(param_1 + 0xe1);
  FUN_140859a90(param_1 + 0xd9);
  FUN_140859a90(param_1 + 0xd1);
  FUN_140859a90(param_1 + 0xc9);
  FUN_140859a90(param_1 + 0xc1);
  FUN_140859a90(param_1 + 0xb9);
  FUN_140859a90(param_1 + 0xb1);
  FUN_140859a90(param_1 + 0xa9);
  FUN_140859a90(param_1 + 0xa1);
  FUN_140859a90(param_1 + 0x99);
  FUN_140859a90(param_1 + 0x91);
  FUN_140859a90(param_1 + 0x89);
  FUN_140859a90(param_1 + 0x81);
  FUN_140859a90(param_1 + 0x79);
  FUN_140859a90(param_1 + 0x71);
  FUN_140859a90(param_1 + 0x69);
  FUN_140859a90(param_1 + 0x61);
  FUN_140859a90(param_1 + 0x59);
  FUN_140859a90(param_1 + 0x51);
  FUN_140859a90(param_1 + 0x49);
  FUN_140859a90(param_1 + 0x41);
  FUN_140859a90(param_1 + 0x39);
  FUN_140859a90(param_1 + 0x31);
  FUN_140859a90(param_1 + 0x29);
  FUN_140859a90(param_1 + 0x21);
  FUN_140859a90(param_1 + 0x19);
  FUN_140859a90(param_1 + 0x11);
  FUN_140859a90(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142543680 FUN_142543680 body=643 status=ok
// SIG undefined FUN_142543680(void)

undefined8 *
FUN_142543680(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = icu_64::DecimalFormatSymbols::vftable;
  puVar1 = param_1 + 0xe1;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  param_1[0x21] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x22) = 2;
  param_1[0x29] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2a) = 2;
  param_1[0x31] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x32) = 2;
  param_1[0x39] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3a) = 2;
  param_1[0x41] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x42) = 2;
  param_1[0x49] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4a) = 2;
  param_1[0x51] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x52) = 2;
  param_1[0x59] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5a) = 2;
  param_1[0x61] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x62) = 2;
  param_1[0x69] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x6a) = 2;
  param_1[0x71] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x72) = 2;
  param_1[0x79] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x7a) = 2;
  param_1[0x81] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x82) = 2;
  param_1[0x89] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8a) = 2;
  param_1[0x91] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x92) = 2;
  param_1[0x99] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9a) = 2;
  param_1[0xa1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa2) = 2;
  param_1[0xa9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xaa) = 2;
  param_1[0xb1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb2) = 2;
  param_1[0xb9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xba) = 2;
  param_1[0xc1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  param_1[0xc9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xca) = 2;
  param_1[0xd1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  param_1[0xd9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xda) = 2;
  param_1[0xe1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe2) = 2;
  puVar2 = param_1 + 0xea;
  FUN_1424a3c00();
  param_1[0x12f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x130) = 2;
  param_1[0x137] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x138) = 2;
  param_1[0x13f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x140) = 2;
  param_1[0x147] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x148) = 2;
  param_1[0x14f] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x150) = 2;
  param_1[0x157] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x158) = 2;
  FUN_142543b10(param_1,param_2,param_3,param_4,puVar1,puVar2,param_1,uVar3);
  return param_1;
}



// FUNCTION 142543910 Unwind@142543910 body=116 status=ok
// SIG undefined Unwind@142543910(void)

void Unwind_142543910(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  FUN_140859a90(lVar1 + 0xab8);
  FUN_140859a90(lVar1 + 0xa78);
  FUN_140859a90(lVar1 + 0xa38);
  FUN_140859a90(lVar1 + 0x9f8);
  FUN_140859a90(lVar1 + 0x9b8);
  FUN_140859a90(lVar1 + 0x978);
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142543990 Unwind@142543990 body=379 status=ok
// SIG undefined Unwind@142543990(void)

void Unwind_142543990(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  lVar1 = *(longlong *)(param_2 + 0x30);
  FUN_140859a90(lVar1 + 0x6c8);
  FUN_140859a90(lVar1 + 0x688);
  FUN_140859a90(lVar1 + 0x648);
  FUN_140859a90(lVar1 + 0x608);
  FUN_140859a90(lVar1 + 0x5c8);
  FUN_140859a90(lVar1 + 0x588);
  FUN_140859a90(lVar1 + 0x548);
  FUN_140859a90(lVar1 + 0x508);
  FUN_140859a90(lVar1 + 0x4c8);
  FUN_140859a90(lVar1 + 0x488);
  FUN_140859a90(lVar1 + 0x448);
  FUN_140859a90(lVar1 + 0x408);
  FUN_140859a90(lVar1 + 0x3c8);
  FUN_140859a90(lVar1 + 0x388);
  FUN_140859a90(lVar1 + 0x348);
  FUN_140859a90(lVar1 + 0x308);
  FUN_140859a90(lVar1 + 0x2c8);
  FUN_140859a90(lVar1 + 0x288);
  FUN_140859a90(lVar1 + 0x248);
  FUN_140859a90(lVar1 + 0x208);
  FUN_140859a90(lVar1 + 0x1c8);
  FUN_140859a90(lVar1 + 0x188);
  FUN_140859a90(lVar1 + 0x148);
  FUN_140859a90(lVar1 + 0x108);
  FUN_140859a90(lVar1 + 200);
  FUN_140859a90(lVar1 + 0x88);
  FUN_140859a90(lVar1 + 0x48);
  FUN_140859a90(lVar1 + 8);
  FUN_1424b70d0(lVar1);
  return;
}



// FUNCTION 142543b10 FUN_142543b10 body=278 status=ok
// SIG undefined FUN_142543b10(void)

longlong FUN_142543b10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = 8;
    do {
      thunk_FUN_1424a7600(param_1 + lVar1,param_2 + lVar1);
      lVar1 = lVar1 + 0x40;
    } while (lVar1 != 0x708);
    thunk_FUN_1424a7600(param_1 + 0x978,param_2 + 0x978);
    thunk_FUN_1424a7600(param_1 + 0xa38,param_2 + 0xa38);
    thunk_FUN_1424a7600(param_1 + 0x9b8,param_2 + 0x9b8);
    thunk_FUN_1424a7600(param_1 + 0xa78,param_2 + 0xa78);
    thunk_FUN_1424a7600(param_1 + 0x9f8,param_2 + 0x9f8);
    thunk_FUN_1424a7600(param_1 + 0xab8,param_2 + 0xab8);
    FUN_1424a3d10(param_1 + 0x750,param_2 + 0x750);
    strcpy((char *)(param_1 + 0x8cd),(char *)(param_2 + 0x8cd));
    strcpy((char *)(param_1 + 0x830),(char *)(param_2 + 0x830));
    *(undefined1 *)(param_1 + 0xaf8) = *(undefined1 *)(param_2 + 0xaf8);
    *(undefined1 *)(param_1 + 0xaf9) = *(undefined1 *)(param_2 + 0xaf9);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_2 + 0x748);
  }
  return param_1;
}



// FUNCTION 142543c30 FUN_142543c30 body=580 status=ok
// SIG undefined FUN_142543c30(void)

bool FUN_142543c30(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_1 == param_2) {
    bVar8 = true;
  }
  else {
    if ((*(char *)(param_1 + 0xaf8) == *(char *)(param_2 + 0xaf8)) &&
       (*(char *)(param_1 + 0xaf9) == *(char *)(param_2 + 0xaf9))) {
      lVar7 = 0;
      do {
        uVar1 = *(ushort *)(param_1 + 0x10 + lVar7);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            iVar5 = *(int *)(param_1 + 0x14 + lVar7);
          }
          else {
            iVar5 = (int)(short)uVar1 >> 5;
          }
          sVar2 = *(short *)(param_2 + 0x10 + lVar7);
          if (sVar2 < 0) {
            iVar6 = *(int *)(param_2 + 0x14 + lVar7);
          }
          else {
            iVar6 = (int)sVar2 >> 5;
          }
          if (((int)sVar2 & 1U) != 0) {
            return false;
          }
          if (iVar5 != iVar6) {
            return false;
          }
          bVar3 = FUN_1412ae090(param_1 + 8 + lVar7,param_2 + 8 + lVar7);
        }
        else {
          bVar3 = *(byte *)(param_2 + 0x10 + lVar7) & 1;
        }
        if (bVar3 == 0) goto LAB_142543cf7;
        lVar7 = lVar7 + 0x40;
      } while (lVar7 != 0x700);
      lVar7 = 0;
      do {
        uVar1 = *(ushort *)(param_1 + 0x980 + lVar7);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            iVar5 = *(int *)(param_1 + 0x984 + lVar7);
          }
          else {
            iVar5 = (int)(short)uVar1 >> 5;
          }
          sVar2 = *(short *)(param_2 + 0x980 + lVar7);
          if (sVar2 < 0) {
            iVar6 = *(int *)(param_2 + 0x984 + lVar7);
          }
          else {
            iVar6 = (int)sVar2 >> 5;
          }
          if (((int)sVar2 & 1U) != 0) {
            return false;
          }
          if (iVar5 != iVar6) {
            return false;
          }
          cVar4 = FUN_1412ae090(param_1 + lVar7 + 0x978,param_2 + lVar7 + 0x978);
          bVar8 = cVar4 != '\0';
        }
        else {
          bVar8 = (bool)(*(byte *)(param_2 + 0x980 + lVar7) & 1);
        }
        if (bVar8 == false) goto LAB_142543cf7;
        uVar1 = *(ushort *)(param_1 + 0xa40 + lVar7);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            iVar5 = *(int *)(param_1 + 0xa44 + lVar7);
          }
          else {
            iVar5 = (int)(short)uVar1 >> 5;
          }
          sVar2 = *(short *)(param_2 + 0xa40 + lVar7);
          if (sVar2 < 0) {
            iVar6 = *(int *)(param_2 + 0xa44 + lVar7);
          }
          else {
            iVar6 = (int)sVar2 >> 5;
          }
          if (((int)sVar2 & 1U) != 0) {
            return false;
          }
          if (iVar5 != iVar6) {
            return false;
          }
          cVar4 = FUN_1412ae090(param_1 + lVar7 + 0xa38,param_2 + lVar7 + 0xa38);
          bVar8 = cVar4 != '\0';
        }
        else {
          bVar8 = (bool)(*(byte *)(param_2 + 0xa40 + lVar7) & 1);
        }
        if (bVar8 == false) goto LAB_142543cf7;
        lVar7 = lVar7 + 0x40;
      } while (lVar7 != 0xc0);
      cVar4 = FUN_1424a3f70(param_1 + 0x750,param_2 + 0x750);
      if ((cVar4 != '\0') &&
         (iVar5 = strcmp((char *)(param_1 + 0x8cd),(char *)(param_2 + 0x8cd)), iVar5 == 0)) {
        iVar5 = strcmp((char *)(param_1 + 0x830),(char *)(param_2 + 0x830));
        return iVar5 == 0;
      }
    }
LAB_142543cf7:
    bVar8 = false;
  }
  return bVar8;
}



// FUNCTION 142543e90 FUN_142543e90 body=114 status=ok
// SIG undefined FUN_142543e90(void)

undefined8 * FUN_142543e90(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  undefined8 uVar1;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  local_24 = 0;
  uVar1 = FUN_1424ebec0(param_2,param_3,&local_24);
  if (*param_4 < 1) {
    FUN_1424a8f10(param_1,1,uVar1,local_24);
  }
  else {
    FUN_1424a7130(param_1);
  }
  return param_1;
}



// FUNCTION 142543f10 Unwind@142543f10 body=34 status=ok
// SIG undefined Unwind@142543f10(void)

void Unwind_142543f10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142543f40 FUN_142543f40 body=48 status=ok
// SIG undefined FUN_142543f40(void)

longlong FUN_142543f40(longlong param_1,int param_2,char param_3,int *param_4)

{
  if (0 < *param_4) {
    return param_1 + 0x708;
  }
  if (param_3 != '\0') {
    return param_1 + (longlong)param_2 * 0x40 + 0x978;
  }
  return param_1 + (longlong)param_2 * 0x40 + 0xa38;
}



// FUNCTION 142543f70 FUN_142543f70 body=38 status=ok
// SIG undefined FUN_142543f70(void)

undefined8 FUN_142543f70(undefined8 param_1,int param_2)

{
  FUN_1425434a0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142543fa0 FUN_142543fa0 body=38 status=ok
// SIG undefined FUN_142543fa0(void)

undefined8 FUN_142543fa0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142543fd0 FUN_142543fd0 body=319 status=ok
// SIG undefined FUN_142543fd0(void)

void FUN_142543fd0(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  char *_Str1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined1 local_c8 [64];
  undefined1 local_88 [40];
  longlong local_60;
  char *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_88,param_5);
  if (*param_5 < 1) {
    iVar6 = 0;
    cVar2 = FUN_14258c4f0(local_88,0,&local_58,param_3);
    local_60 = param_1;
    _Str1 = local_58;
    while (cVar2 != '\0') {
      ppuVar7 = &PTR_s_decimal_1499df880;
      uVar5 = 0;
      local_58 = _Str1;
      do {
        if (((0x7fd2334UL >> (uVar5 & 0x3f) & 1) == 0) &&
           (iVar3 = strcmp(_Str1,*ppuVar7), iVar3 == 0)) {
          if (*(char *)(param_1 + 0x10 + uVar5) == '\0') {
            *(undefined1 *)(param_1 + 0x10 + uVar5) = 1;
            uVar1 = *(undefined8 *)(param_1 + 8);
            local_4c = 0;
            uVar4 = (**(code **)(*param_3 + 0x18))(param_3,&local_4c,param_5);
            FUN_1424a7060(local_c8,1,uVar4,local_4c);
            FUN_142544170(uVar1,uVar5 & 0xffffffff,local_c8,1);
            FUN_140859a90(local_c8);
            param_1 = local_60;
            if (0 < *param_5) {
              return;
            }
          }
          break;
        }
        uVar5 = uVar5 + 1;
        ppuVar7 = ppuVar7 + 1;
      } while (uVar5 != 0x1c);
      iVar6 = iVar6 + 1;
      cVar2 = FUN_14258c4f0(local_88,iVar6,&local_58,param_3);
      _Str1 = local_58;
    }
  }
  return;
}



// FUNCTION 142544130 Unwind@142544130 body=55 status=ok
// SIG undefined Unwind@142544130(void)

void Unwind_142544130(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142544170 FUN_142544170 body=519 status=ok
// SIG undefined FUN_142544170(void)

void FUN_142544170(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 9) {
    *(undefined1 *)(param_1 + 0xaf9) = 1;
  }
  else if (param_2 == 8) {
    *(undefined1 *)(param_1 + 0xaf8) = 1;
  }
  else if (0x1b < param_2) goto LAB_14254436a;
  FUN_1424a7c80(param_1 + (longlong)param_2 * 0x40 + 8,param_3);
  if (param_2 == 4) {
    iVar1 = FUN_1424a8030(param_3,0);
    if (param_4 != '\0') {
      iVar2 = FUN_1424d8db0(iVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_1424a8140(param_3,0,0x7fffffff);
        if (iVar2 == 1) {
          *(int *)(param_1 + 0x748) = iVar1;
          FUN_1424a6c30(local_68,iVar1 + 1);
          FUN_1424a7ca0(param_1 + 0x488,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 2);
          FUN_1424a7ca0(param_1 + 0x4c8,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 3);
          FUN_1424a7ca0(param_1 + 0x508,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 4);
          FUN_1424a7ca0(param_1 + 0x548,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 5);
          FUN_1424a7ca0(param_1 + 0x588,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 6);
          FUN_1424a7ca0(param_1 + 0x5c8,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 7);
          FUN_1424a7ca0(param_1 + 0x608,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 8);
          FUN_1424a7ca0(param_1 + 0x648,local_68);
          FUN_140859a90(local_68);
          FUN_1424a6c30(local_68,iVar1 + 9);
          FUN_1424a7ca0(param_1 + 0x688,local_68);
          FUN_140859a90(local_68);
          goto LAB_14254436a;
        }
      }
    }
  }
  else if (8 < param_2 - 0x12U) goto LAB_14254436a;
  *(undefined4 *)(param_1 + 0x748) = 0xffffffff;
LAB_14254436a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 142544390 FUN_142544390 body=38 status=ok
// SIG undefined FUN_142544390(void)

undefined8 FUN_142544390(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425443c0 FUN_1425443c0 body=581 status=ok
// SIG undefined FUN_1425443c0(void)

void FUN_1425443c0(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,int *param_5)

{
  ushort uVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_f0 [64];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  ulonglong local_60;
  undefined4 local_54;
  char *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_b0,param_5);
  uVar9 = 0;
  cVar4 = FUN_14258c4f0(local_b0,0,&local_50,param_3);
  if (cVar4 != '\0') {
    do {
      pcVar3 = local_50;
      iVar5 = strcmp(local_50,"beforeCurrency");
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x10) = 1;
LAB_142544498:
        local_60 = uVar9;
        (**(code **)(*param_3 + 0x50))(param_3,local_88,param_5);
        cVar4 = FUN_14258c4f0(local_88,0,&local_50,param_3);
        uVar9 = local_60;
        if (cVar4 != '\0') {
          iVar6 = 1;
          do {
            pcVar3 = local_50;
            iVar7 = strcmp(local_50,"currencyMatch");
            if (iVar7 == 0) {
              lVar11 = 0;
LAB_142544556:
              lVar2 = *(longlong *)(param_1 + 8);
              if (*param_5 < 1) {
                if (iVar5 == 0) {
                  uVar1 = *(ushort *)(lVar11 * 0x40 + lVar2 + 0x980);
                }
                else {
                  uVar1 = *(ushort *)(lVar11 * 0x40 + lVar2 + 0xa40);
                }
              }
              else {
                uVar1 = *(ushort *)(lVar2 + 0x710);
              }
              if (uVar1 < 0x20) {
                local_54 = 0;
                uVar8 = (**(code **)(*param_3 + 0x18))(param_3,&local_54,param_5);
                FUN_1424a7060(local_f0,1,uVar8,local_54);
                lVar10 = lVar2 + 0x978;
                if (iVar5 != 0) {
                  lVar10 = lVar2 + 0xa38;
                }
                FUN_1424a7c80(lVar10 + lVar11 * 0x40,local_f0);
                FUN_140859a90(local_f0);
              }
            }
            else {
              iVar7 = strcmp(pcVar3,"surroundingMatch");
              if (iVar7 == 0) {
                lVar11 = 1;
                goto LAB_142544556;
              }
              iVar7 = strcmp(pcVar3,"insertBetween");
              if (iVar7 == 0) {
                lVar11 = 2;
                goto LAB_142544556;
              }
            }
            cVar4 = FUN_14258c4f0(local_88,iVar6,&local_50,param_3);
            iVar6 = iVar6 + 1;
            uVar9 = local_60;
          } while (cVar4 != '\0');
        }
      }
      else {
        iVar6 = strcmp(pcVar3,"afterCurrency");
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 0x11) = 1;
          goto LAB_142544498;
        }
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      cVar4 = FUN_14258c4f0(local_b0,uVar9,&local_50,param_3);
    } while (cVar4 != '\0');
  }
  return;
}



// FUNCTION 142544640 Unwind@142544640 body=55 status=ok
// SIG undefined Unwind@142544640(void)

void Unwind_142544640(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142544680 FUN_142544680 body=266 status=ok
// SIG undefined FUN_142544680(void)

undefined * FUN_142544680(longlong param_1,char *param_2,uint param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int local_44 [3];
  
  local_44[1] = -2;
  local_44[2] = -1;
  if (4 < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar1 = (&PTR_s_decimalFormat_1499dfb78)[(int)param_3];
  lVar3 = FUN_1424ebfe0(0,*(undefined8 *)(param_1 + 0x28),param_4);
  if (*param_4 < 1) {
    local_44[0] = 0;
    puVar4 = (undefined *)FUN_1425447d0(lVar3,param_2,puVar1,param_4,local_44);
    puVar5 = &DAT_14a1778fd;
    if ((*param_4 < 1) && (puVar5 = puVar4, 0 < local_44[0])) {
      iVar2 = strcmp("latn",param_2);
      if (iVar2 != 0) {
        local_44[0] = 0;
        puVar4 = (undefined *)FUN_1425447d0(lVar3,&DAT_1499dfbed,puVar1,param_4,local_44);
        puVar5 = &DAT_14a1778fd;
        if (0 < *param_4) goto LAB_14254470a;
      }
      puVar5 = puVar4;
    }
  }
  else {
    puVar5 = &DAT_14a1778fd;
  }
LAB_14254470a:
  if (lVar3 != 0) {
    FUN_1424ea9f0(lVar3);
  }
  return puVar5;
}



// FUNCTION 142544790 Unwind@142544790 body=55 status=ok
// SIG undefined Unwind@142544790(void)

void Unwind_142544790(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



// FUNCTION 1425447d0 FUN_1425447d0 body=282 status=ok
// SIG undefined FUN_1425447d0(void)

undefined *
FUN_1425447d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_70 = (longlong)&local_64 + 1;
  local_68 = 0x28;
  local_64 = 0;
  local_38 = 0;
  FUN_1425038b0(&local_b0,"NumberElements/");
  FUN_142503520(&local_70,local_b0,local_a8,param_4);
  FUN_1425038b0(&local_a0,param_2);
  FUN_142503520(&local_70,local_a0,local_98,param_4);
  FUN_1425038b0(&local_90,"/patterns/");
  FUN_142503520(&local_70,local_90,local_88,param_4);
  FUN_1425038b0(&local_80,param_3);
  FUN_142503520(&local_70,local_80,local_78,param_4);
  if (*param_4 < 1) {
    puVar1 = (undefined *)FUN_1424ec010(param_1,local_70,0,param_5);
  }
  else {
    puVar1 = &DAT_14a1778fd;
  }
  if ((char)local_64 != '\0') {
    FUN_1424da110(local_70);
  }
  return puVar1;
}



// FUNCTION 1425448f0 Unwind@1425448f0 body=49 status=ok
// SIG undefined Unwind@1425448f0(void)

void Unwind_1425448f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x74) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 142544930 FUN_142544930 body=71 status=ok
// SIG undefined FUN_142544930(void)

longlong * FUN_142544930(longlong *param_1)

{
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0x22;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  FUN_1425ec3a0(param_1 + 8,0);
  FUN_1425ec420(param_1 + 8,3);
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 142544980 FUN_142544980 body=183 status=ok
// SIG undefined FUN_142544980(void)

longlong * FUN_142544980(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = param_1 + 2;
  *param_1 = (longlong)plVar10;
  *(undefined4 *)(param_1 + 1) = 0x22;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar7 = param_2[9];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar8 = param_2[10];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar9 = param_2[0xb];
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(int *)(param_1 + 9) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
  *(int *)(param_1 + 10) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  *(int *)(param_1 + 0xb) = (int)lVar9;
  uVar1 = *(uint *)(param_1 + 8);
  if (0x22 < (int)uVar1) {
    plVar10 = (longlong *)FUN_1424da030((ulonglong)uVar1 + 0xc);
    if (plVar10 == (longlong *)0x0) {
      *param_3 = 7;
      return param_1;
    }
    plVar2 = (longlong *)*param_1;
    *(int *)(plVar10 + 1) = (int)plVar2[1];
    *plVar10 = *plVar2;
    if (*(char *)((longlong)param_1 + 0xc) != '\0') {
      FUN_1424da110(*param_1);
    }
    *param_1 = (longlong)plVar10;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  }
  plVar2 = (longlong *)*param_2;
  *(int *)(plVar10 + 1) = (int)plVar2[1];
  *plVar10 = *plVar2;
  memcpy((void *)(*param_1 + 0xc),(void *)(*param_2 + 0xc),(longlong)(int)param_2[1]);
  return param_1;
}



// FUNCTION 142544a40 FUN_142544a40 body=259 status=ok
// SIG undefined FUN_142544a40(void)

void FUN_142544a40(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_78 = (longlong)&local_6c + 1;
  local_70 = 0x28;
  local_6c = 0;
  local_40 = 0;
  FUN_142503520(&local_78,*param_2,*(undefined4 *)(param_2 + 1),param_3);
  lVar1 = local_78;
  if (*param_3 < 1) {
    uVar5 = *(uint *)(param_2 + 1);
    if ((int)uVar5 < 0x23) {
      puVar4 = (undefined8 *)*param_1;
      uVar5 = 0x22;
    }
    else {
      puVar3 = (undefined8 *)FUN_1424da030((ulonglong)uVar5 + 0xc);
      puVar4 = (undefined8 *)*param_1;
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
        *puVar3 = *puVar4;
        if (*(char *)((longlong)param_1 + 0xc) != '\0') {
          FUN_1424da110(*param_1);
        }
        *param_1 = (longlong)puVar3;
        *(uint *)(param_1 + 1) = uVar5;
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
        puVar4 = puVar3;
      }
    }
    *(uint *)(param_1 + 8) = uVar5;
    FUN_1425ec430(puVar4,lVar1,param_1 + 8);
    iVar2 = 0x10110;
    if ((((*(uint *)((longlong)param_1 + 0x54) & 1) != 0) ||
        (iVar2 = 0x10, *(uint *)((longlong)param_1 + 0x54) != 0)) ||
       ((*(byte *)(*param_1 + 8) & 0x70) != 0)) {
      *param_3 = iVar2;
    }
  }
  if ((char)local_6c != '\0') {
    FUN_1424da110(local_78);
  }
  return;
}



// FUNCTION 142544b50 Unwind@142544b50 body=50 status=ok
// SIG undefined Unwind@142544b50(void)

void Unwind_142544b50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 142544b90 FUN_142544b90 body=178 status=ok
// SIG undefined FUN_142544b90(void)

void FUN_142544b90(longlong *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  sVar2 = strlen(param_2);
  iVar4 = (int)sVar2;
  if (iVar4 < 0x23) {
    puVar5 = (undefined8 *)*param_1;
    iVar4 = 0x22;
  }
  else {
    puVar3 = (undefined8 *)FUN_1424da030((sVar2 & 0xffffffff) + 0xc);
    puVar5 = (undefined8 *)*param_1;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
      *puVar3 = *puVar5;
      if (*(char *)((longlong)param_1 + 0xc) != '\0') {
        FUN_1424da110(*param_1);
      }
      *param_1 = (longlong)puVar3;
      *(int *)(param_1 + 1) = iVar4;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      puVar5 = puVar3;
    }
  }
  *(int *)(param_1 + 8) = iVar4;
  FUN_1425ec430(puVar5,param_2,param_1 + 8);
  uVar1 = 0x10110;
  if ((((*(uint *)((longlong)param_1 + 0x54) & 1) != 0) ||
      (uVar1 = 0x10, *(uint *)((longlong)param_1 + 0x54) != 0)) ||
     ((*(byte *)(*param_1 + 8) & 0x70) != 0)) {
    *param_3 = uVar1;
  }
  return;
}



// FUNCTION 142544c50 FUN_142544c50 body=341 status=ok
// SIG undefined FUN_142544c50(void)

void FUN_142544c50(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  uint *local_78;
  int *local_70;
  int local_64;
  uint local_60;
  undefined1 local_59;
  undefined8 local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = param_2;
  sVar1 = _dtest(local_58);
  if ((sVar1 == 2) || (local_58[0] = param_2, sVar1 = _dtest(local_58), 0 < sVar1)) {
    *param_3 = 0x10;
  }
  else {
    local_70 = &local_64;
    local_78 = &local_60;
    local_80 = &local_59;
    local_88 = 0x17;
    FUN_1425e8b60((int)param_2,0,0,local_58);
    uVar7 = local_60;
    if ((int)local_60 < 0x23) {
      puVar6 = (undefined8 *)*param_1;
      uVar7 = 0x22;
    }
    else {
      puVar4 = (undefined8 *)FUN_1424da030((ulonglong)local_60 + 0xc);
      puVar6 = (undefined8 *)*param_1;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
        *puVar4 = *puVar6;
        if (*(char *)((longlong)param_1 + 0xc) != '\0') {
          FUN_1424da110(*param_1);
        }
        *param_1 = (longlong)puVar4;
        *(uint *)(param_1 + 1) = uVar7;
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
        puVar6 = puVar4;
      }
    }
    *(uint *)(param_1 + 8) = uVar7;
    FUN_1425ec430(puVar6,local_58,param_1 + 8);
    uVar2 = 0x10110;
    if ((((*(uint *)((longlong)param_1 + 0x54) & 1) != 0) ||
        (uVar2 = 0x10, *(uint *)((longlong)param_1 + 0x54) != 0)) ||
       (lVar5 = *param_1, (*(byte *)(lVar5 + 8) & 0x70) != 0)) {
      *param_3 = uVar2;
      lVar5 = *param_1;
    }
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + (local_64 - local_60);
    iVar3 = _dsign((int)param_2);
    *(byte *)(*param_1 + 8) = *(byte *)(*param_1 + 8) | (iVar3 != 0) << 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142544dc0 FUN_142544dc0 body=208 status=ok
// SIG undefined FUN_142544dc0(void)

void FUN_142544dc0(longlong *param_1,undefined8 param_2,uint param_3,int param_4,char param_5,
                  undefined4 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  uVar2 = 0x22;
  if ((0x22 < (int)param_3) &&
     (puVar4 = (undefined8 *)FUN_1424da030((ulonglong)param_3 + 0xc), uVar2 = param_3,
     puVar4 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
    *puVar4 = *puVar1;
    if (*(char *)((longlong)param_1 + 0xc) != '\0') {
      FUN_1424da110(*param_1);
    }
    *param_1 = (longlong)puVar4;
    *(uint *)(param_1 + 1) = param_3;
    *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  }
  *(uint *)(param_1 + 8) = uVar2;
  uVar3 = 0x10;
  if (((0xc4653600 < param_3 + 0xc4653600) && (param_4 <= (int)(1000000000 - param_3))) &&
     ((int)(-0x3b9ac9fe - param_3) <= param_4)) {
    *(uint *)*param_1 = param_3;
    *(int *)(*param_1 + 4) = param_4;
    *(char *)(*param_1 + 8) = param_5 << 7;
    FUN_1425ef590(*param_1,param_2,(ulonglong)param_3);
    uVar3 = 5;
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
      return;
    }
  }
  *param_6 = uVar3;
  return;
}



// FUNCTION 142544e90 FUN_142544e90 body=15 status=ok
// SIG undefined FUN_142544e90(void)

void FUN_142544e90(undefined8 *param_1)

{
  FUN_1425ef1c0(*param_1,*param_1,param_1 + 8);
  return;
}



// FUNCTION 142544ea0 FUN_142544ea0 body=49 status=ok
// SIG undefined FUN_142544ea0(void)

void FUN_142544ea0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_1425eee80(*param_1,*param_1,*param_2,param_1 + 8);
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    *param_3 = 5;
  }
  return;
}



// FUNCTION 142544ee0 FUN_142544ee0 body=55 status=ok
// SIG undefined FUN_142544ee0(void)

void FUN_142544ee0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_1425ed090(*param_1,*param_1,*param_2,param_1 + 8);
  if ((*(uint *)((longlong)param_1 + 0x54) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x54) & 0x20) == 0)) {
    *param_3 = 5;
  }
  return;
}



// FUNCTION 142544f20 FUN_142544f20 body=11 status=ok
// SIG undefined FUN_142544f20(void)

byte FUN_142544f20(longlong *param_1)

{
  return *(byte *)(*param_1 + 8) >> 7;
}



// FUNCTION 142544f30 FUN_142544f30 body=25 status=ok
// SIG undefined FUN_142544f30(void)

undefined8 FUN_142544f30(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((*(char *)((longlong)piVar1 + 9) == '\0') && (*piVar1 == 1)) {
    return CONCAT71((int7)((ulonglong)piVar1 >> 8),(*(byte *)(piVar1 + 2) & 0x70) == 0);
  }
  return 0;
}



// FUNCTION 142544f50 FUN_142544f50 body=8 status=ok
// SIG undefined FUN_142544f50(void)

undefined * FUN_142544f50(void)

{
  return &DAT_14c79330c;
}



// FUNCTION 142544f60 FUN_142544f60 body=2179 status=ok
// SIG undefined FUN_142544f60(void)

void FUN_142544f60(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  int *param_5)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined2 uVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar24;
  int *piVar23;
  undefined1 local_e8 [8];
  ushort local_e0;
  int local_dc;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  ushort local_90;
  undefined1 local_8e [2];
  uint local_8c;
  undefined1 *local_80;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[8] = 0;
  if (0 < *param_5) {
    return;
  }
  if (param_1[0x4f] == 0) {
    puVar7 = (undefined8 *)thunk_FUN_1424da030(0xb00);
    if (puVar7 == (undefined8 *)0x0) {
      if (*param_5 < 1) {
        *param_5 = 7;
      }
    }
    else {
      local_50 = puVar7;
      FUN_1425423f0(puVar7,param_1 + 0x32,param_5);
      if (*param_5 < 1) {
        param_1[0x4f] = local_50;
      }
      else {
        (**(code **)*local_50)(local_50,1);
      }
    }
  }
  FUN_142548310(param_1,param_5);
  FUN_1425484b0(param_1,param_5);
  if (0 < *param_5) {
    return;
  }
  if (param_3 != (longlong *)0x0) {
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
  }
  param_1[0x54] = param_3;
  uVar22 = FUN_1424a6be0(local_98,param_2);
  if ((short)local_90 < 0) {
    if (local_8c == 0) goto LAB_1425455c2;
LAB_14254505f:
    local_a8 = param_2;
    local_a0 = param_3;
    local_50 = param_1;
    FUN_142548650(uVar22,local_98);
    uVar4 = local_8c;
    if (-1 < (short)local_90) {
      uVar4 = (int)(short)local_90 >> 5;
    }
    uVar12 = (int)uVar4 >> 0x1f & uVar4;
    uVar10 = CONCAT44(uVar24,uVar12);
    uVar4 = FUN_1424a8860(local_98,L"%%lenient-parse:",0,0xffffffff,uVar10,uVar4 - uVar12);
    uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (uVar4 != 0xffffffff) {
      if (uVar4 != 0) {
        uVar12 = (int)(short)local_90 >> 5;
        uVar20 = uVar12;
        if ((short)local_90 < 0) {
          uVar20 = local_8c;
        }
        if (uVar4 - 1 < uVar20) {
          puVar14 = local_80;
          if (((int)(short)local_90 & 2U) != 0) {
            puVar14 = local_8e;
          }
          if (*(short *)(puVar14 + (longlong)(int)(uVar4 - 1) * 2) == 0x3b) {
            if (-1 < (int)uVar4) goto LAB_1425450de;
            uVar20 = 0;
            goto LAB_1425450f0;
          }
        }
        goto LAB_1425452c9;
      }
      uVar12 = (int)(short)local_90 >> 5;
LAB_1425450de:
      uVar20 = uVar12;
      if ((short)local_90 < 0) {
        uVar20 = local_8c;
      }
      uVar19 = uVar4;
      if ((int)uVar20 < (int)uVar4) {
LAB_1425450f0:
        uVar19 = uVar20;
      }
      if ((short)local_90 < 0) {
        uVar12 = local_8c;
      }
      uVar10 = CONCAT44(uVar24,uVar19);
      iVar5 = FUN_1424a8860(local_98,&DAT_1499dfc52,0,2,uVar10,uVar12 - uVar19);
      if (iVar5 == -1) {
        uVar12 = local_8c;
        if (-1 < (short)local_90) {
          uVar12 = (int)(short)local_90 >> 5;
        }
        iVar5 = uVar12 - 1;
      }
      sVar6 = wcslen(L"%%lenient-parse:");
      uVar12 = (int)sVar6 + uVar4;
      while( true ) {
        uVar20 = local_8c;
        if (-1 < (short)local_90) {
          uVar20 = (int)(short)local_90 >> 5;
        }
        uVar15 = 0xffff;
        if (uVar12 < uVar20) {
          puVar14 = local_8e;
          if (((int)(short)local_90 & 2U) == 0) {
            puVar14 = local_80;
          }
          uVar15 = *(undefined2 *)(puVar14 + (longlong)(int)uVar12 * 2);
        }
        cVar3 = FUN_1425cc7f0(uVar15);
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (cVar3 == '\0') break;
        uVar12 = uVar12 + 1;
      }
      puVar7 = (undefined8 *)thunk_FUN_1424da030(0x40);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar7 + 1) = 2;
        local_50[0x53] = puVar7;
        FUN_1424a8e40(puVar7);
        if (*(short *)(puVar7 + 1) < 0) {
          iVar17 = *(int *)((longlong)puVar7 + 0xc);
        }
        else {
          iVar17 = (int)*(short *)(puVar7 + 1) >> 5;
        }
        uVar21 = CONCAT44(uVar24,uVar12);
        FUN_1424a9610(puVar7,0,iVar17,local_98,uVar21,iVar5 - uVar12);
        uVar24 = (undefined4)(uVar21 >> 0x20);
        iVar5 = (iVar5 - uVar4) + 1;
        if (((int)uVar4 < 1) && (iVar5 == 0x7fffffff)) {
          uVar11 = local_90 & 0x1f;
          uVar2 = local_90 & 1;
          local_90 = 2;
          if (uVar2 == 0) {
            local_90 = uVar11;
          }
        }
        else {
          uVar21 = uVar21 & 0xffffffff00000000;
          FUN_1424a9130(local_98,uVar4,iVar5,0,uVar21,0);
          uVar24 = (undefined4)(uVar21 >> 0x20);
        }
        goto LAB_1425452c9;
      }
      puVar7 = local_50 + 0x53;
LAB_1425455bb:
      *puVar7 = 0;
      goto LAB_1425455c2;
    }
LAB_1425452c9:
    *(undefined4 *)(local_50 + 0x30) = 0;
    uVar4 = local_8c;
    if (-1 < (short)local_90) {
      uVar4 = (int)(short)local_90 >> 5;
    }
    uVar12 = (int)uVar4 >> 0x1f & uVar4;
    uVar10 = CONCAT44(uVar24,uVar12);
    iVar5 = FUN_1424a8860(local_98,&DAT_1499dfc52,0,2,uVar10,uVar4 - uVar12);
    puVar7 = local_50;
    while( true ) {
      iVar17 = *(int *)(puVar7 + 0x30);
      *(int *)(puVar7 + 0x30) = iVar17 + 1;
      if (iVar5 == -1) break;
      if (iVar5 < -1) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)(short)local_90 >> 5;
        if ((short)local_90 < 0) {
          uVar4 = local_8c;
        }
        if (iVar5 < (int)uVar4) {
          uVar4 = iVar5 + 1;
        }
      }
      uVar12 = (int)(short)local_90 >> 5;
      if ((short)local_90 < 0) {
        uVar12 = local_8c;
      }
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar4);
      iVar5 = FUN_1424a8860(local_98,&DAT_1499dfc52,0,2,uVar10,uVar12 - uVar4);
    }
    lVar8 = FUN_1424da030((longlong)iVar17 * 8 + 0x10);
    puVar7[0x2e] = lVar8;
    if (lVar8 == 0) goto LAB_1425455c2;
    iVar5 = *(int *)(puVar7 + 0x30);
    if (iVar5 < 0) {
LAB_142545407:
      lVar16 = (longlong)iVar5;
      lVar8 = -1;
      if (-1 < iVar5) {
        lVar8 = lVar16 * 0x40 + 8;
      }
      plVar9 = (longlong *)thunk_FUN_1424da030(lVar8);
      if (plVar9 == (longlong *)0x0) {
        puVar7 = puVar7 + 0x2f;
        goto LAB_1425455bb;
      }
      *plVar9 = lVar16;
      plVar18 = plVar9 + 1;
      do {
        *plVar18 = (longlong)&PTR_FUN_149e18960;
        *(undefined2 *)(plVar18 + 1) = 2;
        plVar18 = plVar18 + 8;
      } while (plVar18 != plVar9 + lVar16 * 8 + 1);
      puVar7[0x2f] = plVar9 + 1;
      iVar5 = FUN_1425475e0(local_98,&DAT_1499dfc52,2,0);
      uVar12 = 0;
      uVar4 = 0;
      while( true ) {
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        lVar8 = local_50[0x2f];
        uVar21 = (ulonglong)uVar12;
        if (iVar5 == -1) break;
        lVar16 = uVar21 * 0x40;
        FUN_1424a8e40(lVar8 + lVar16);
        sVar1 = *(short *)(lVar8 + 8 + lVar16);
        if (sVar1 < 0) {
          iVar17 = *(int *)(lVar8 + 0xc + lVar16);
        }
        else {
          iVar17 = (int)sVar1 >> 5;
        }
        uVar20 = iVar5 + 1;
        uVar10 = CONCAT44(uVar24,uVar4);
        FUN_1424a9610(lVar8 + lVar16,0,iVar17,local_98,uVar10,uVar20 - uVar4);
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_58 = thunk_FUN_1424da030(0xa0);
        puVar7 = local_50;
        if (local_58 != 0) {
          piVar23 = param_5;
          FUN_1425efff0(local_58,local_50,local_50[0x2f],uVar12,param_5);
          uVar24 = (undefined4)((ulonglong)piVar23 >> 0x20);
        }
        *(longlong *)(puVar7[0x2e] + uVar21 * 8) = local_58;
        if (*(longlong *)(puVar7[0x2e] + uVar21 * 8) == 0) goto LAB_1425455c2;
        if (iVar5 < -1) {
          uVar4 = 0;
LAB_142545572:
          uVar19 = uVar4;
        }
        else {
          uVar4 = (int)(short)local_90 >> 5;
          if ((short)local_90 < 0) {
            uVar4 = local_8c;
          }
          uVar19 = uVar20;
          if ((int)uVar4 <= iVar5) goto LAB_142545572;
        }
        uVar4 = (int)(short)local_90 >> 5;
        if ((short)local_90 < 0) {
          uVar4 = local_8c;
        }
        uVar10 = CONCAT44(uVar24,uVar19);
        iVar5 = FUN_1424a8860(local_98,&DAT_1499dfc52,0,2,uVar10,uVar4 - uVar19);
        uVar12 = uVar12 + 1;
        uVar4 = uVar20;
      }
      if (-1 < (short)local_90) {
        local_8c = (int)(short)local_90 >> 5;
      }
      FUN_1424bce00(lVar8 + uVar21 * 0x40,local_98,uVar4,local_8c - uVar4);
      local_58 = thunk_FUN_1424da030(0xa0);
      puVar7 = local_50;
      if (local_58 != 0) {
        FUN_1425efff0(local_58,local_50,local_50[0x2f],uVar12,param_5);
      }
      *(longlong *)(puVar7[0x2e] + uVar21 * 8) = local_58;
      iVar5 = 7;
      if (*(longlong *)(puVar7[0x2e] + uVar21 * 8) != 0) {
        FUN_142547f70(puVar7);
        for (uVar4 = 0; (int)uVar4 < *(int *)(local_50 + 0x30); uVar4 = uVar4 + 1) {
          FUN_1425f04c0(*(undefined8 *)(local_50[0x2e] + (ulonglong)uVar4 * 8),
                        (ulonglong)uVar4 * 0x40 + local_50[0x2f],param_5);
        }
        if (local_a0 != (longlong *)0x0) {
          iVar5 = 0;
LAB_1425456d7:
          iVar17 = (**(code **)(*local_a0 + 0x10))();
          if (iVar5 < iVar17) {
            uVar10 = (**(code **)(*local_a0 + 0x18))(local_a0,iVar5);
            FUN_1424a7060(local_e8,1,uVar10,0xffffffff);
            if ((*param_5 < 1) && (plVar9 = (longlong *)local_50[0x2e], plVar9 != (longlong *)0x0))
            {
              lVar8 = *plVar9;
              if (lVar8 != 0) {
                do {
                  plVar9 = plVar9 + 1;
                  uVar2 = *(ushort *)(lVar8 + 8);
                  if ((uVar2 & 1) == 0) {
                    if ((short)uVar2 < 0) {
                      iVar17 = *(int *)(lVar8 + 0xc);
                    }
                    else {
                      iVar17 = (int)(short)uVar2 >> 5;
                    }
                    iVar13 = local_dc;
                    if (-1 < (short)local_e0) {
                      iVar13 = (int)(short)local_e0 >> 5;
                    }
                    if (((((int)(short)local_e0 & 1U) == 0) && (iVar17 == iVar13)) &&
                       (cVar3 = FUN_1412ae090(lVar8,local_e8), cVar3 != '\0')) goto LAB_1425457a5;
                  }
                  else if ((local_e0 & 1) != 0) goto LAB_1425457a5;
                  lVar8 = *plVar9;
                  if (lVar8 == 0) break;
                } while( true );
              }
              *param_5 = 1;
            }
            FUN_140859a90(local_e8);
          }
        }
        FUN_1424a7c80(local_50 + 0x55,local_a8);
        goto LAB_1425455ca;
      }
    }
    else {
      lVar8 = -1;
      do {
        *(undefined8 *)(puVar7[0x2e] + 8 + lVar8 * 8) = 0;
        iVar5 = *(int *)(puVar7 + 0x30);
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
      if (iVar5 != 0) goto LAB_142545407;
      iVar5 = 1;
    }
  }
  else {
    if ((short)local_90 >> 5 != 0) goto LAB_14254505f;
LAB_1425455c2:
    iVar5 = 7;
  }
  *param_5 = iVar5;
LAB_1425455ca:
  FUN_140859a90(local_98);
  return;
LAB_1425457a5:
  if (iVar5 == 0) {
    local_50[0x31] = lVar8;
  }
  FUN_140859a90(local_e8);
  iVar5 = iVar5 + 1;
  goto LAB_1425456d7;
}



// FUNCTION 142545800 Unwind@142545800 body=55 status=ok
// SIG undefined Unwind@142545800(void)

void Unwind_142545800(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 200));
  return;
}



// FUNCTION 142545840 Unwind@142545840 body=55 status=ok
// SIG undefined Unwind@142545840(void)

void Unwind_142545840(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142545880 Unwind@142545880 body=54 status=ok
// SIG undefined Unwind@142545880(void)

void Unwind_142545880(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x80);
  return;
}



// FUNCTION 1425458c0 Unwind@1425458c0 body=55 status=ok
// SIG undefined Unwind@1425458c0(void)

void Unwind_1425458c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 142545900 Unwind@142545900 body=55 status=ok
// SIG undefined Unwind@142545900(void)

void Unwind_142545900(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 142545940 FUN_142545940 body=713 status=ok
// SIG undefined FUN_142545940(void)

undefined8 * FUN_142545940(undefined8 *param_1,uint param_2,undefined8 param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **local_110;
  undefined2 local_108;
  undefined **local_d0;
  short local_c8;
  int local_c4;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_1424babf0();
  *param_1 = icu_64::RuleBasedNumberFormat::vftable;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_68 = param_1;
  FUN_1424a3ce0(param_1 + 0x32,param_3);
  puVar7 = local_68;
  local_68[0x50] = 0;
  local_68[0x51] = 0;
  local_68[0x4e] = 0;
  local_68[0x4f] = 0;
  *(undefined4 *)(local_68 + 0x52) = 7;
  *(undefined1 *)((longlong)local_68 + 0x294) = 0;
  local_68[0x53] = 0;
  local_68[0x54] = 0;
  local_68[0x55] = &PTR_FUN_149e18960;
  *(undefined2 *)(local_68 + 0x56) = 2;
  *(undefined2 *)(local_68 + 0x5d) = 0;
  *(undefined1 *)((longlong)local_68 + 0x2ea) = 0;
  local_68[0x5e] = 0;
  if (*param_4 < 1) {
    if (param_2 < 4) {
      puVar1 = (&PTR_s_SpelloutRules_1499dfc58)[(int)param_2];
      uVar4 = FUN_1424ebfe0("icudt64l-rbnf",local_68[0x37],param_4);
      if (*param_4 < 1) {
        local_80 = puVar7 + 0x55;
        local_88 = param_1 + 0x32;
        uVar5 = FUN_1424ed0b0(uVar4,0,param_4);
        uVar6 = FUN_1424ed0b0(uVar4,1,param_4);
        FUN_142537c10(puVar7,uVar6,uVar5);
        uVar5 = FUN_1424ec1c0(uVar4,"RBNFRules",0,param_4);
        if (0 < *param_4) {
          FUN_1424ea9f0(uVar4);
        }
        uVar6 = FUN_1424ec1c0(uVar5,puVar1,0,param_4);
        if (0 < *param_4) {
          FUN_1424ea9f0(uVar5);
          FUN_1424ea9f0(uVar4);
          return local_68;
        }
        local_110 = &PTR_FUN_149e18960;
        local_108 = 2;
        local_78 = uVar5;
        cVar3 = FUN_1424eaf90(uVar6);
        if (cVar3 != '\0') {
          do {
            local_d0 = &PTR_FUN_149e18960;
            local_c8 = 2;
            local_6c = 0;
            uVar5 = FUN_1424eafb0(uVar6,&local_6c,0,param_4);
            if (*param_4 < 1) {
              FUN_1424a8f10(&local_d0,1,uVar5,local_6c);
            }
            else {
              FUN_1424a7130(&local_d0);
            }
            iVar2 = local_c4;
            if (-1 < local_c8) {
              iVar2 = (int)local_c8 >> 5;
            }
            FUN_1424a9690(&local_110,&local_d0,0,iVar2);
            FUN_140859a90(&local_d0);
            cVar3 = FUN_1424eaf90(uVar6);
          } while (cVar3 != '\0');
        }
        FUN_142544f60(local_68,&local_110,0,&local_d0,param_4);
        FUN_1424ea9f0(uVar6);
        FUN_1424ea9f0(local_78);
        FUN_140859a90(&local_110);
        puVar7 = local_68;
      }
      FUN_1424ea9f0(uVar4);
      local_68 = puVar7;
    }
    else {
      *param_4 = 1;
    }
  }
  return local_68;
}



// FUNCTION 142545c20 Unwind@142545c20 body=64 status=ok
// SIG undefined Unwind@142545c20(void)

void Unwind_142545c20(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 142545c60 Unwind@142545c60 body=73 status=ok
// SIG undefined Unwind@142545c60(void)

void Unwind_142545c60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0xb8));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 142545cb0 Unwind@142545cb0 body=64 status=ok
// SIG undefined Unwind@142545cb0(void)

void Unwind_142545cb0(undefined8 param_1,longlong param_2)

{
  FUN_1424bac40(*(undefined8 *)(param_2 + 0xd0));
  return;
}



// FUNCTION 142545cf0 Unwind@142545cf0 body=64 status=ok
// SIG undefined Unwind@142545cf0(void)

void Unwind_142545cf0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 142545d30 Unwind@142545d30 body=64 status=ok
// SIG undefined Unwind@142545d30(void)

void Unwind_142545d30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142545d70 FUN_142545d70 body=230 status=ok
// SIG undefined FUN_142545d70(void)

undefined8 *
FUN_142545d70(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1424bac50();
  *param_1 = icu_64::RuleBasedNumberFormat::vftable;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_1424a3ce0(param_1 + 0x32,param_2 + 400,param_3,param_4,param_1 + 0x32);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x52) = 7;
  *(undefined1 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x56) = 2;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ea) = 0;
  param_1[0x5e] = 0;
  FUN_142545ed0(param_1,param_2);
  return param_1;
}



// FUNCTION 142545e60 Unwind@142545e60 body=52 status=ok
// SIG undefined Unwind@142545e60(void)

void Unwind_142545e60(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142545ea0 Unwind@142545ea0 body=43 status=ok
// SIG undefined Unwind@142545ea0(void)

void Unwind_142545ea0(undefined8 param_1,longlong param_2)

{
  FUN_1424bac40(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142545ed0 FUN_142545ed0 body=320 status=ok
// SIG undefined FUN_142545ed0(void)

longlong * FUN_142545ed0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 local_c0 [72];
  undefined1 local_78 [68];
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    FUN_1424bad60(param_1);
    local_34 = 0;
    FUN_142546040(param_1);
    FUN_1424a3d10(param_1 + 0x32,param_2 + 0x32);
    *(undefined1 *)((longlong)param_1 + 0x294) = *(undefined1 *)((longlong)param_2 + 0x294);
    (**(code **)(*param_1 + 0x188))(param_1,param_2[0x4f]);
    lVar2 = param_2[0x54];
    if (lVar2 != 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    }
    FUN_142544f60(param_1,param_2 + 0x55,lVar2,local_c0,&local_34);
    (**(code **)(*param_2 + 0x178))(param_2,local_78);
    (**(code **)(*param_1 + 0x170))(param_1,local_78,&local_34);
    FUN_140859a90(local_78);
    uVar1 = (**(code **)(*param_2 + 0x108))(param_2);
    (**(code **)(*param_1 + 0x110))(param_1,uVar1);
    *(char *)(param_1 + 0x5d) = (char)param_2[0x5d];
    *(undefined1 *)((longlong)param_1 + 0x2e9) = *(undefined1 *)((longlong)param_2 + 0x2e9);
    *(undefined1 *)((longlong)param_1 + 0x2ea) = *(undefined1 *)((longlong)param_2 + 0x2ea);
    if ((longlong *)param_2[0x5e] == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*(longlong *)param_2[0x5e] + 0x18))();
    }
    param_1[0x5e] = lVar2;
  }
  return param_1;
}



// FUNCTION 142546010 Unwind@142546010 body=43 status=ok
// SIG undefined Unwind@142546010(void)

void Unwind_142546010(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 142546040 FUN_142546040 body=445 status=ok
// SIG undefined FUN_142546040(void)

void FUN_142546040(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x170);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      do {
        plVar4 = plVar4 + 1;
        FUN_1425f0940(lVar3);
        FUN_1401773f0(lVar3);
        lVar3 = *plVar4;
      } while (lVar3 != 0);
      plVar4 = *(longlong **)(param_1 + 0x170);
    }
    FUN_1424da110(plVar4);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x178);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + -8) != 0) {
      lVar5 = *(longlong *)(lVar3 + -8) << 6;
      do {
        FUN_140859a90(lVar3 + -0x40 + lVar5);
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != 0);
    }
    FUN_1424b70c0(lVar3 + -8);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x270);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x278);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x278) = 0;
  lVar3 = *(longlong *)(param_1 + 0x280);
  if (lVar3 != 0) {
    FUN_1425f22d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1 + 0x280) = 0;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1425f22d0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 *)(param_1 + 0x288) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x298);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x298) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2f0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2a0);
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(int *)(puVar1 + 1) != 0) &&
       (iVar2 = *(int *)(puVar1 + 1) + -1, *(int *)(puVar1 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 142546200 FUN_142546200 body=8 status=ok
// SIG undefined FUN_142546200(void)

undefined8 FUN_142546200(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



// FUNCTION 142546210 FUN_142546210 body=64 status=ok
// SIG undefined FUN_142546210(void)

longlong FUN_142546210(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x2f8);
  if (lVar1 != 0) {
    FUN_142545d70(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 142546250 Unwind@142546250 body=32 status=ok
// SIG undefined Unwind@142546250(void)

void Unwind_142546250(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142546270 FUN_142546270 body=260 status=ok
// SIG undefined FUN_142546270(void)

bool FUN_142546270(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (param_1 == param_2) {
    return true;
  }
  lVar4 = __RTtypeid();
  lVar5 = __RTtypeid(param_2);
  iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
  if (((iVar3 == 0) && (cVar2 = FUN_1424a3f70(param_1 + 400,param_2 + 400), cVar2 != '\0')) &&
     (*(char *)(param_1 + 0x294) == *(char *)(param_2 + 0x294))) {
    if (*(longlong **)(param_1 + 0x2a0) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x2a0) != 0) {
        return false;
      }
    }
    else {
      if (*(longlong *)(param_2 + 0x2a0) == 0) {
        return false;
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 8))();
      if (cVar2 == '\0') {
        return false;
      }
    }
    plVar7 = *(longlong **)(param_1 + 0x170);
    plVar6 = *(longlong **)(param_2 + 0x170);
    bVar8 = plVar7 == (longlong *)0x0 && plVar6 == (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) {
      return bVar8;
    }
    if (plVar6 == (longlong *)0x0) {
      return bVar8;
    }
    lVar4 = *plVar7;
    while (lVar4 != 0) {
      if (*plVar6 == 0) goto LAB_142546369;
      cVar2 = FUN_1425f0a60();
      if (cVar2 == '\0') break;
      plVar6 = plVar6 + 1;
      plVar1 = plVar7 + 1;
      plVar7 = plVar7 + 1;
      lVar4 = *plVar1;
    }
    if (*plVar6 == 0) {
      lVar4 = *plVar7;
LAB_142546369:
      return lVar4 == 0;
    }
  }
  return false;
}



// FUNCTION 142546380 FUN_142546380 body=96 status=ok
// SIG undefined FUN_142546380(void)

undefined8 * FUN_142546380(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  plVar2 = *(longlong **)(param_1 + 0x170);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    while (lVar1 != 0) {
      plVar2 = plVar2 + 1;
      FUN_1425f18a0(lVar1,param_2);
      lVar1 = *plVar2;
    }
  }
  return param_2;
}



// FUNCTION 1425463e0 Unwind@1425463e0 body=32 status=ok
// SIG undefined Unwind@1425463e0(void)

void Unwind_1425463e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142546400 FUN_142546400 body=191 status=ok
// SIG undefined FUN_142546400(void)

undefined8 * FUN_142546400(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x2a0);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x170);
    if (plVar3 != (longlong *)0x0) {
      *param_2 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_2 + 1) = 2;
      lVar1 = *plVar3;
      while (lVar1 != 0) {
        plVar3 = plVar3 + 1;
        if ((*(char *)(lVar1 + 0x99) != '\0') &&
           (bVar4 = param_3 == 0, param_3 = param_3 + -1, bVar4)) {
          FUN_1424a7600(param_2,lVar1,0);
          return param_2;
        }
        lVar1 = *plVar3;
      }
      FUN_140859a90(param_2);
    }
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
    FUN_1424a7060(param_2,1,uVar2,0xffffffff);
  }
  return param_2;
}



// FUNCTION 1425464d0 Unwind@1425464d0 body=32 status=ok
// SIG undefined Unwind@1425464d0(void)

void Unwind_1425464d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425464f0 FUN_1425464f0 body=87 status=ok
// SIG undefined FUN_1425464f0(void)

ulonglong FUN_1425464f0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142546502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))();
    return uVar1;
  }
  plVar2 = *(longlong **)(param_1 + 0x170);
  uVar1 = 0;
  if ((plVar2 != (longlong *)0x0) && (lVar3 = *plVar2, lVar3 != 0)) {
    uVar1 = 0;
    do {
      plVar2 = plVar2 + 1;
      uVar1 = (ulonglong)(((int)uVar1 + 1) - (uint)(*(char *)(lVar3 + 0x99) == '\0'));
      lVar3 = *plVar2;
    } while (lVar3 != 0);
  }
  return uVar1;
}



// FUNCTION 142546550 FUN_142546550 body=22 status=ok
// SIG undefined FUN_142546550(void)

undefined8 FUN_142546550(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014254655f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x20))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 142546570 FUN_142546570 body=372 status=ok
// SIG undefined FUN_142546570(void)

undefined8 FUN_142546570(longlong param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar5;
  undefined1 local_b8 [72];
  undefined1 local_70 [8];
  short local_68;
  int local_64;
  undefined8 local_30;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_30 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    FUN_1412ae150(param_2,&DAT_149e02088,0,0,0);
    return param_2;
  }
  if (((param_3 < 0) || (*(longlong **)(param_1 + 0x2a0) == (longlong *)0x0)) ||
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x20))(), iVar1 <= param_3)) {
    *param_4 = 1;
    FUN_1424a3c00(param_2);
    return param_2;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x28))
                    (*(longlong **)(param_1 + 0x2a0),param_3);
  FUN_1424a7060(local_70,1,uVar2,0xffffffff);
  iVar4 = (int)local_68 >> 5;
  iVar1 = iVar4;
  if (local_68 < 0) {
    iVar1 = local_64;
  }
  if (iVar1 < 0x40) {
    puVar3 = local_b8;
  }
  else {
    puVar3 = (undefined1 *)FUN_1424da030(iVar1 + 1);
    if (puVar3 == (undefined1 *)0x0) {
      *param_4 = 7;
      FUN_1412ae150(param_2,&DAT_149e02088,0,0,0);
      goto LAB_1425466ca;
    }
    iVar4 = (int)local_68 >> 5;
  }
  if (local_68 < 0) {
    iVar4 = local_64;
  }
  FUN_1424a83f0(local_70,0,iVar4,puVar3,CONCAT44(uVar5,iVar1 + 1),0);
  FUN_1412ae150(param_2,puVar3,0,0,0);
  if (puVar3 != local_b8) {
    FUN_1424da110(puVar3);
  }
LAB_1425466ca:
  FUN_140859a90(local_70);
  return param_2;
}



// FUNCTION 1425466f0 Unwind@1425466f0 body=43 status=ok
// SIG undefined Unwind@1425466f0(void)

void Unwind_1425466f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 142546720 FUN_142546720 body=414 status=ok
// SIG undefined FUN_142546720(void)

undefined8 * FUN_142546720(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_80 [8];
  short local_78;
  uint local_74;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_2;
  if (((param_3 < 0) || (*(longlong **)(param_1 + 0x2a0) == (longlong *)0x0)) ||
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))(), iVar3 <= param_3)) {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    FUN_1424a7130(param_2);
  }
  else {
    uVar4 = FUN_1424a5500(param_4);
    FUN_1424a7220(local_80,uVar4,0xffffffff,0);
    if (-1 < local_78) {
      local_74 = (int)local_78 >> 5;
    }
    lVar5 = FUN_140855070(local_80,local_74 + 1);
    uVar8 = (ulonglong)local_74;
LAB_1425467d3:
    if (-1 < (int)uVar8) {
      *(undefined2 *)(lVar5 + uVar8 * 2) = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x38))
                        (*(longlong **)(param_1 + 0x2a0),lVar5);
      if (-1 < iVar3) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x30))
                          (*(longlong **)(param_1 + 0x2a0),iVar3,param_3);
        FUN_1424a7060(param_2,1,uVar4,0xffffffff);
        goto LAB_1425468b6;
      }
      uVar2 = -(uint)((int)uVar8 == 0);
      uVar6 = uVar8;
      do {
        if ((uint)uVar6 < 2) {
          uVar6 = (ulonglong)uVar2;
          uVar7 = uVar2;
          break;
        }
        uVar7 = (uint)uVar6 - 1;
        uVar6 = (ulonglong)uVar7;
      } while (*(short *)(lVar5 + uVar6 * 2) != 0x5f);
      uVar9 = (ulonglong)((int)uVar6 + 1);
      do {
        uVar8 = (ulonglong)((int)uVar7 >> 0x1f & uVar7);
        if ((int)uVar6 < 1) break;
        uVar9 = (ulonglong)((int)uVar9 - 1);
        lVar1 = uVar6 * 2;
        uVar6 = uVar6 - 1;
        uVar8 = uVar9;
      } while (*(short *)(lVar5 + -2 + lVar1) == 0x5f);
      goto LAB_1425467d3;
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x18))
                      (*(longlong **)(param_1 + 0x2a0),param_3);
    FUN_1424a7060(param_2,1,uVar4,0xffffffff);
LAB_1425468b6:
    FUN_140859a90(local_80);
  }
  return local_40;
}



// FUNCTION 1425468d0 Unwind@1425468d0 body=44 status=ok
// SIG undefined Unwind@1425468d0(void)

void Unwind_1425468d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142546900 Unwind@142546900 body=44 status=ok
// SIG undefined Unwind@142546900(void)

void Unwind_142546900(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 142546930 FUN_142546930 body=166 status=ok
// SIG undefined FUN_142546930(void)

undefined8 *
FUN_142546930(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_80 [64];
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_2;
  if (param_1[0x54] == 0) {
    *param_2 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_2 + 1) = 2;
    FUN_1424a7130(param_2);
  }
  else {
    FUN_1424a6be0(local_80,param_3);
    plVar1 = (longlong *)param_1[0x54];
    uVar3 = FUN_1424a8e50(local_80);
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar3);
    (**(code **)(*param_1 + 0x150))(param_1,param_2,uVar2,param_4);
    FUN_140859a90(local_80);
  }
  return local_40;
}



// FUNCTION 1425469e0 Unwind@1425469e0 body=44 status=ok
// SIG undefined Unwind@1425469e0(void)

void Unwind_1425469e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142546a10 Unwind@142546a10 body=44 status=ok
// SIG undefined Unwind@142546a10(void)

void Unwind_142546a10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 142546a40 FUN_142546a40 body=185 status=ok
// SIG undefined FUN_142546a40(void)

longlong FUN_142546a40(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  if ((*param_3 < 1) && (plVar6 = *(longlong **)(param_1 + 0x170), plVar6 != (longlong *)0x0)) {
    lVar2 = *plVar6;
    while (lVar2 != 0) {
      plVar6 = plVar6 + 1;
      uVar1 = *(ushort *)(lVar2 + 8);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar5 = *(int *)(lVar2 + 0xc);
        }
        else {
          iVar5 = (int)(short)uVar1 >> 5;
        }
        uVar1 = *(ushort *)(param_2 + 8);
        if ((short)uVar1 < 0) {
          iVar4 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar4 = (int)(short)uVar1 >> 5;
        }
        if (((uVar1 & 1) == 0) && (iVar5 == iVar4)) {
          bVar3 = FUN_1412ae090(lVar2,param_2);
          goto joined_r0x000142546a88;
        }
      }
      else {
        bVar3 = *(byte *)(param_2 + 8) & 1;
joined_r0x000142546a88:
        if (bVar3 != 0) {
          return lVar2;
        }
      }
      lVar2 = *plVar6;
    }
    *param_3 = 1;
  }
  return 0;
}



// FUNCTION 142546b20 FUN_142546b20 body=402 status=ok
// SIG undefined FUN_142546b20(void)

undefined8
FUN_142546b20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 local_108 [112];
  undefined1 local_98 [72];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    FUN_142537d90(local_98);
    cVar1 = FUN_142539e00(local_98,0);
    if (cVar1 == '\0') {
      FUN_142538510(local_98,0,4,param_5);
      cVar1 = FUN_142539e00(local_98,0);
      if (cVar1 == '\0') {
        plVar3 = (longlong *)FUN_1424bb830(param_1 + 0x32,1,param_5);
        if ((plVar3 == (longlong *)0x0) && (*param_5 < 1)) {
          *param_5 = 7;
        }
        else if (plVar3 != (longlong *)0x0) {
          local_48 = plVar3;
          FUN_14252c810(local_108);
          lVar4 = thunk_FUN_1424da030(0x48);
          if (lVar4 == 0) {
            if (*param_5 < 1) {
              *param_5 = 7;
            }
          }
          else {
            local_50 = lVar4;
            FUN_142537d90(lVar4,param_2);
            FUN_14252d570(local_108,local_50);
            (**(code **)(*local_48 + 0x20))(local_48,local_108,param_3,param_4,param_5);
          }
          FUN_14252d110(local_108);
          (**(code **)*local_48)(local_48,1);
        }
      }
      else {
        uVar5 = FUN_142538d80(param_2);
        (**(code **)(*param_1 + 0x80))(param_1,uVar5,param_3,param_4,param_5);
      }
    }
    else {
      uVar2 = FUN_142538cc0(param_2,0);
      (**(code **)(*param_1 + 0x50))(param_1,uVar2,param_3,param_4,param_5);
    }
    FUN_142537d50(local_98);
  }
  return param_3;
}



// FUNCTION 142546cc0 Unwind@142546cc0 body=51 status=ok
// SIG undefined Unwind@142546cc0(void)

void Unwind_142546cc0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 142546d00 Unwind@142546d00 body=51 status=ok
// SIG undefined Unwind@142546d00(void)

void Unwind_142546d00(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x30);
  return;
}



// FUNCTION 142546d40 Unwind@142546d40 body=56 status=ok
// SIG undefined Unwind@142546d40(void)

void Unwind_142546d40(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0xf0))(*(undefined8 **)(param_2 + 0xf0),1);
  return;
}



// FUNCTION 142546d80 Unwind@142546d80 body=51 status=ok
// SIG undefined Unwind@142546d80(void)

void Unwind_142546d80(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0xa0);
  return;
}



// FUNCTION 142546dc0 FUN_142546dc0 body=402 status=ok
// SIG undefined FUN_142546dc0(void)

undefined8
FUN_142546dc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 local_108 [112];
  undefined1 local_98 [72];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    FUN_142537d90(local_98);
    cVar1 = FUN_142539e00(local_98,0);
    if (cVar1 == '\0') {
      FUN_142538510(local_98,0,4,param_5);
      cVar1 = FUN_142539e00(local_98,0);
      if (cVar1 == '\0') {
        plVar3 = (longlong *)FUN_1424bb830(param_1 + 0x32,1,param_5);
        if ((plVar3 == (longlong *)0x0) && (*param_5 < 1)) {
          *param_5 = 7;
        }
        else if (plVar3 != (longlong *)0x0) {
          local_48 = plVar3;
          FUN_14252c810(local_108);
          lVar4 = thunk_FUN_1424da030(0x48);
          if (lVar4 == 0) {
            if (*param_5 < 1) {
              *param_5 = 7;
            }
          }
          else {
            local_50 = lVar4;
            FUN_142537d90(lVar4,param_2);
            FUN_14252d570(local_108,local_50);
            (**(code **)(*local_48 + 0x28))(local_48,local_108,param_3,param_4,param_5);
          }
          FUN_14252d110(local_108);
          (**(code **)*local_48)(local_48,1);
        }
      }
      else {
        uVar5 = FUN_142538d80(param_2);
        (**(code **)(*param_1 + 0x88))(param_1,uVar5,param_3,param_4,param_5);
      }
    }
    else {
      uVar2 = FUN_142538cc0(param_2,0);
      (**(code **)(*param_1 + 0x58))(param_1,uVar2,param_3,param_4,param_5);
    }
    FUN_142537d50(local_98);
  }
  return param_3;
}



// FUNCTION 142546f60 Unwind@142546f60 body=51 status=ok
// SIG undefined Unwind@142546f60(void)

void Unwind_142546f60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 142546fa0 Unwind@142546fa0 body=51 status=ok
// SIG undefined Unwind@142546fa0(void)

void Unwind_142546fa0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x30);
  return;
}



// FUNCTION 142546fe0 Unwind@142546fe0 body=56 status=ok
// SIG undefined Unwind@142546fe0(void)

void Unwind_142546fe0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0xf0))(*(undefined8 **)(param_2 + 0xf0),1);
  return;
}



// FUNCTION 142547020 Unwind@142547020 body=51 status=ok
// SIG undefined Unwind@142547020(void)

void Unwind_142547020(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0xa0);
  return;
}



// FUNCTION 142547060 FUN_142547060 body=13 status=ok
// SIG undefined FUN_142547060(void)

void FUN_142547060(longlong *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014254706a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,(longlong)param_2);
  return;
}



// FUNCTION 142547070 FUN_142547070 body=74 status=ok
// SIG undefined FUN_142547070(void)

void FUN_142547070(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    local_14 = 0;
    local_28 = &local_14;
    FUN_1425470d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425470d0 FUN_1425470d0 body=357 status=ok
// SIG undefined FUN_1425470d0(void)

longlong FUN_1425470d0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      int *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_stack_ffffffffffffff28;
  undefined1 local_c0 [112];
  undefined **local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (param_2 == -0x8000000000000000) {
      plVar1 = (longlong *)FUN_1424bb830(param_1 + 400,1,param_5);
      if (plVar1 != (longlong *)0x0) {
        FUN_14252c810(local_c0);
        local_50 = icu_64::FieldPosition::vftable;
        local_48 = 0xffffffff;
        local_40 = 0;
        lVar2 = thunk_FUN_1424da030(0x48);
        if (lVar2 == 0) {
          *param_5 = 7;
        }
        else {
          local_38 = lVar2;
          FUN_142537d10(lVar2);
          lVar2 = local_38;
          FUN_142539210(local_38,0x8000000000000000);
          FUN_14252d570(local_c0,lVar2);
          (**(code **)(*plVar1 + 0x28))(plVar1,local_c0,param_4,&local_50,param_5);
        }
        (**(code **)*plVar1)(plVar1,1);
        thunk_FUN_1424b70d0(&local_50);
        FUN_14252d110(local_c0);
      }
    }
    else {
      if (*(short *)(param_4 + 8) < 0) {
        iVar3 = *(int *)(param_4 + 0xc);
      }
      else {
        iVar3 = (int)*(short *)(param_4 + 8) >> 5;
      }
      FUN_1425f0df0(param_3,param_2,param_4,iVar3,in_stack_ffffffffffffff28 & 0xffffffff00000000,
                    param_5);
      FUN_1425477a0(param_1,iVar3,param_4,param_5);
    }
  }
  return param_4;
}



// FUNCTION 142547240 Unwind@142547240 body=43 status=ok
// SIG undefined Unwind@142547240(void)

void Unwind_142547240(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 142547270 Unwind@142547270 body=52 status=ok
// SIG undefined Unwind@142547270(void)

void Unwind_142547270(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xa8);
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 1425472b0 FUN_1425472b0 body=74 status=ok
// SIG undefined FUN_1425472b0(void)

void FUN_1425472b0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    local_28 = &local_14;
    FUN_142547310();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 142547310 FUN_142547310 body=298 status=ok
// SIG undefined FUN_142547310(void)

void FUN_142547310(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_a8 [72];
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  sVar1 = *(short *)(param_4 + 8);
  iVar5 = *(int *)(param_4 + 0xc);
  iVar3 = (**(code **)(*param_1 + 0x108))();
  if (iVar3 != 7) {
    cVar2 = FUN_1424d9700(param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_1424d9730(param_2);
      if (cVar2 == '\0') {
        FUN_142537d10(local_a8);
        FUN_142539590(local_a8,param_2);
        uVar4 = (**(code **)(*param_1 + 0x108))(param_1);
        iVar3 = FUN_1424bbb90(param_1);
        FUN_142538510(local_a8,-iVar3,uVar4,param_5);
        param_2 = FUN_142538d80(local_a8);
        FUN_142537d50(local_a8);
      }
    }
  }
  iVar3 = (int)sVar1 >> 5;
  if (sVar1 < 0) {
    iVar3 = iVar5;
  }
  if (*(short *)(param_4 + 8) < 0) {
    iVar5 = *(int *)(param_4 + 0xc);
  }
  else {
    iVar5 = (int)*(short *)(param_4 + 8) >> 5;
  }
  FUN_1425f0f30(param_3,param_2,param_4,iVar5,0,param_5);
  FUN_1425477a0(param_1,iVar3,param_4,param_5);
  return;
}



// FUNCTION 142547440 Unwind@142547440 body=64 status=ok
// SIG undefined Unwind@142547440(void)

void Unwind_142547440(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x30);
  return;
}



// FUNCTION 142547480 FUN_142547480 body=16 status=ok
// SIG undefined FUN_142547480(void)

void FUN_142547480(longlong *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014254748d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,(longlong)param_2);
  return;
}



// FUNCTION 142547490 FUN_142547490 body=317 status=ok
// SIG undefined FUN_142547490(void)

undefined8
FUN_142547490(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,int *param_6)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  
  if (*param_6 < 1) {
    if (*(short *)(param_3 + 8) < 0) {
      uVar4 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar4 = (int)*(short *)(param_3 + 8) >> 5;
    }
    uVar6 = (int)uVar4 >> 0x1f & uVar4;
    iVar5 = FUN_1424a8860(param_3,&DAT_1499dfc26,0,2,uVar6,uVar4 - uVar6);
    if (iVar5 != 0) {
      if (0 < *param_6) {
        return param_4;
      }
      plVar8 = *(longlong **)(param_1 + 0x170);
      if (plVar8 == (longlong *)0x0) {
        return param_4;
      }
      lVar2 = *plVar8;
      while (lVar2 != 0) {
        plVar8 = plVar8 + 1;
        uVar1 = *(ushort *)(lVar2 + 8);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            iVar5 = *(int *)(lVar2 + 0xc);
          }
          else {
            iVar5 = (int)(short)uVar1 >> 5;
          }
          uVar1 = *(ushort *)(param_3 + 8);
          if ((short)uVar1 < 0) {
            iVar7 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar7 = (int)(short)uVar1 >> 5;
          }
          if (((uVar1 & 1) == 0) && (iVar5 == iVar7)) {
            bVar3 = FUN_1412ae090(lVar2,param_3);
            goto joined_r0x000142547539;
          }
        }
        else {
          bVar3 = *(byte *)(param_3 + 8) & 1;
joined_r0x000142547539:
          if (bVar3 != 0) {
            FUN_1425470d0(param_1,param_2,lVar2,param_4,param_6);
            return param_4;
          }
        }
        lVar2 = *plVar8;
      }
    }
    *param_6 = 1;
  }
  return param_4;
}



// FUNCTION 1425475e0 FUN_1425475e0 body=107 status=ok
// SIG undefined FUN_1425475e0(void)

void FUN_1425475e0(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = *(short *)(param_1 + 8);
  if (param_4 < 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    iVar2 = (int)sVar1 >> 5;
    iVar3 = 0;
  }
  else {
    iVar2 = (int)sVar1 >> 5;
    iVar4 = *(int *)(param_1 + 0xc);
    iVar3 = iVar2;
    if (sVar1 < 0) {
      iVar3 = iVar4;
    }
    if (param_4 <= iVar3) {
      iVar3 = param_4;
    }
  }
  if (sVar1 < 0) {
    iVar2 = iVar4;
  }
  FUN_1424a8860(param_1,param_2,0,param_3,iVar3,iVar2 - iVar3);
  return;
}



// FUNCTION 142547650 FUN_142547650 body=316 status=ok
// SIG undefined FUN_142547650(void)

undefined8
FUN_142547650(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,int *param_6)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  
  if (*param_6 < 1) {
    if (*(short *)(param_3 + 8) < 0) {
      uVar4 = *(uint *)(param_3 + 0xc);
    }
    else {
      uVar4 = (int)*(short *)(param_3 + 8) >> 5;
    }
    uVar6 = (int)uVar4 >> 0x1f & uVar4;
    iVar5 = FUN_1424a8860(param_3,&DAT_1499dfc26,0,2,uVar6,uVar4 - uVar6);
    if (iVar5 != 0) {
      if (0 < *param_6) {
        return param_4;
      }
      plVar8 = *(longlong **)(param_1 + 0x170);
      if (plVar8 == (longlong *)0x0) {
        return param_4;
      }
      lVar2 = *plVar8;
      while (lVar2 != 0) {
        plVar8 = plVar8 + 1;
        uVar1 = *(ushort *)(lVar2 + 8);
        if ((uVar1 & 1) == 0) {
          if ((short)uVar1 < 0) {
            iVar5 = *(int *)(lVar2 + 0xc);
          }
          else {
            iVar5 = (int)(short)uVar1 >> 5;
          }
          uVar1 = *(ushort *)(param_3 + 8);
          if ((short)uVar1 < 0) {
            iVar7 = *(int *)(param_3 + 0xc);
          }
          else {
            iVar7 = (int)(short)uVar1 >> 5;
          }
          if (((uVar1 & 1) == 0) && (iVar5 == iVar7)) {
            bVar3 = FUN_1412ae090(lVar2,param_3);
            goto joined_r0x0001425476f8;
          }
        }
        else {
          bVar3 = *(byte *)(param_3 + 8) & 1;
joined_r0x0001425476f8:
          if (bVar3 != 0) {
            FUN_142547310(param_1,param_2,lVar2,param_4,param_6);
            return param_4;
          }
        }
        lVar2 = *plVar8;
      }
    }
    *param_6 = 1;
  }
  return param_4;
}



// FUNCTION 1425477a0 FUN_1425477a0 body=205 status=ok
// SIG undefined FUN_1425477a0(void)

longlong FUN_1425477a0(longlong *param_1,int param_2,longlong param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,1,param_4);
  if ((param_2 == 0) && (iVar2 != 0x100)) {
    if (*(short *)(param_3 + 8) < 0) {
      if (*(int *)(param_3 + 0xc) < 1) {
        return param_3;
      }
    }
    else if (*(short *)(param_3 + 8) >> 5 < 1) {
      return param_3;
    }
    uVar3 = FUN_1424a8030(param_3,0);
    cVar1 = FUN_1424d8720(uVar3);
    if (((cVar1 != '\0') && (*param_4 < 1)) && (param_1[0x5e] != 0)) {
      if (iVar2 != 0x102) {
        if (iVar2 == 0x104) {
          cVar1 = *(char *)((longlong)param_1 + 0x2ea);
        }
        else {
          if (iVar2 != 0x103) {
            return param_3;
          }
          cVar1 = *(char *)((longlong)param_1 + 0x2e9);
        }
        if (cVar1 == '\0') {
          return param_3;
        }
      }
      FUN_1425f56e0(param_3,param_1[0x5e],param_1 + 0x32,0x300);
    }
  }
  return param_3;
}



// FUNCTION 142547870 FUN_142547870 body=650 status=ok
// SIG undefined FUN_142547870(void)

void FUN_142547870(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  double dVar9;
  undefined1 local_1c0 [112];
  undefined1 local_150 [112];
  undefined1 local_e0 [8];
  short local_d8;
  int local_d4;
  undefined **local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    *(undefined4 *)(param_4 + 0xc) = 0;
  }
  else {
    FUN_1424a7860(local_e0,param_2,*(undefined4 *)(param_4 + 8));
    local_a0 = icu_64::ParsePosition::vftable;
    local_98 = 0xffffffff00000000;
    local_80 = icu_64::ParsePosition::vftable;
    local_78 = 0xffffffff00000000;
    FUN_14252c810(local_150);
    iVar7 = 0;
    iVar5 = -1;
    local_90 = param_3;
    local_88 = param_4;
    for (plVar8 = *(longlong **)(param_1 + 0x170); lVar3 = *plVar8, lVar3 != 0; plVar8 = plVar8 + 1)
    {
      if ((*(char *)(lVar3 + 0x99) != '\0') && (*(char *)(lVar3 + 0x9a) != '\0')) {
        local_70 = icu_64::ParsePosition::vftable;
        local_68 = 0xffffffff00000000;
        FUN_14252c810(local_1c0);
        FUN_1425f1450(lVar3,local_e0,&local_70,0x42b0000000000000,0,local_1c0);
        iVar2 = (int)local_68;
        if (iVar7 < (int)local_68) {
          iVar5 = local_68._4_4_;
          local_78 = local_68;
          FUN_14252ce00(local_150,local_1c0);
          iVar6 = local_d4;
          if (-1 < local_d8) {
            iVar6 = (int)local_d8 >> 5;
          }
          iVar7 = iVar2;
          if (iVar2 == iVar6) {
            FUN_14252d110(local_1c0);
            thunk_FUN_1424b70d0(&local_70);
            break;
          }
        }
        FUN_14252d110(local_1c0);
        thunk_FUN_1424b70d0(&local_70);
      }
    }
    lVar3 = local_90;
    iVar2 = *(int *)(local_88 + 8);
    *(int *)(local_88 + 8) = iVar2 + iVar7;
    iVar6 = 0;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = -1;
    if (iVar7 < 1) {
      iVar5 = iVar6 + iVar2;
    }
    *(int *)(local_88 + 0xc) = iVar5;
    FUN_14252ce00(local_90,local_150);
    iVar5 = FUN_14252d140(lVar3);
    if (iVar5 == 1) {
      dVar1 = *(double *)(lVar3 + 8);
      cVar4 = FUN_1424d9700(dVar1);
      if (((cVar4 == '\0') && (dVar9 = (double)FUN_1424d9830(dVar1), dVar1 <= 2147483647.0)) &&
         (-2147483648.0 <= dVar1)) {
        if ((dVar1 == dVar9) && (!NAN(dVar1) && !NAN(dVar9))) {
          FUN_14252d370(lVar3,(int)dVar1);
        }
      }
    }
    FUN_14252d110(local_150);
    thunk_FUN_1424b70d0(&local_80);
    thunk_FUN_1424b70d0(&local_a0);
    FUN_140859a90(local_e0);
  }
  return;
}



// FUNCTION 142547b00 Unwind@142547b00 body=66 status=ok
// SIG undefined Unwind@142547b00(void)

void Unwind_142547b00(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x38);
  return;
}



// FUNCTION 142547b50 Unwind@142547b50 body=68 status=ok
// SIG undefined Unwind@142547b50(void)

void Unwind_142547b50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x188);
  return;
}



// FUNCTION 142547ba0 Unwind@142547ba0 body=66 status=ok
// SIG undefined Unwind@142547ba0(void)

void Unwind_142547ba0(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0xa8);
  return;
}



// FUNCTION 142547bf0 Unwind@142547bf0 body=92 status=ok
// SIG undefined Unwind@142547bf0(void)

void Unwind_142547bf0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x178);
  thunk_FUN_1424b70d0(param_2 + 0x158);
  FUN_140859a90(param_2 + 0x118);
  return;
}



// FUNCTION 142547c50 FUN_142547c50 body=57 status=ok
// SIG undefined FUN_142547c50(void)

void FUN_142547c50(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  
  *(char *)(param_1 + 0x294) = param_2;
  if ((param_2 == '\0') && (puVar1 = *(undefined8 **)(param_1 + 0x270), puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}



// FUNCTION 142547c90 FUN_142547c90 body=626 status=ok
// SIG undefined FUN_142547c90(void)

void FUN_142547c90(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 local_78 [8];
  ushort local_70;
  undefined1 local_6e [2];
  uint local_6c;
  undefined1 *local_60;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    if (*(ushort *)(param_2 + 8) < 0x20) {
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      if (plVar10 == (longlong *)0x0) {
        FUN_142547f70(param_1);
        return;
      }
      lVar7 = 0;
      uVar5 = (**(code **)(*plVar10 + 0x18))(plVar10,0);
      FUN_1424a7060(local_78,1,uVar5,0xffffffff);
      if ((*param_3 < 1) && (plVar10 = *(longlong **)(param_1 + 0x170), plVar10 != (longlong *)0x0))
      {
        lVar7 = *plVar10;
        if (lVar7 != 0) {
          do {
            plVar10 = plVar10 + 1;
            uVar1 = *(ushort *)(lVar7 + 8);
            if ((uVar1 & 1) == 0) {
              if ((short)uVar1 < 0) {
                uVar8 = *(uint *)(lVar7 + 0xc);
              }
              else {
                uVar8 = (int)(short)uVar1 >> 5;
              }
              uVar2 = local_6c;
              if (-1 < (short)local_70) {
                uVar2 = (int)(short)local_70 >> 5;
              }
              if ((((local_70 & 1) == 0) && (uVar8 == uVar2)) &&
                 (cVar3 = FUN_1412ae090(lVar7,local_78), cVar3 != '\0')) goto LAB_142547ef5;
            }
            else if ((local_70 & 1) != 0) goto LAB_142547ef5;
            lVar7 = *plVar10;
          } while (lVar7 != 0);
        }
        *param_3 = 1;
        lVar7 = 0;
      }
LAB_142547ef5:
      *(longlong *)(param_1 + 0x188) = lVar7;
      FUN_140859a90(local_78);
    }
    else {
      FUN_1424a7060(local_78,1,&DAT_1499dfe6e,0xffffffff);
      if ((local_70 & 1) == 0) {
        if (-1 < (short)local_70) {
          local_6c = (int)(short)local_70 >> 5;
        }
        uVar8 = 0;
        if (0 < (int)local_6c) {
          uVar8 = local_6c;
        }
        if ((local_70 & 2) != 0) {
          local_60 = local_6e;
        }
        cVar3 = FUN_1424a7e30(param_2,0,local_6c,local_60,(int)local_6c >> 0x1f & local_6c,uVar8);
      }
      else {
        cVar3 = (*(byte *)(param_2 + 8) & 1) == 0;
      }
      FUN_140859a90(local_78);
      if (cVar3 != '\0') {
        if (0 < *param_3) {
          return;
        }
        plVar10 = *(longlong **)(param_1 + 0x170);
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        lVar7 = *plVar10;
        while (lVar7 != 0) {
          plVar10 = plVar10 + 1;
          uVar1 = *(ushort *)(lVar7 + 8);
          if ((uVar1 & 1) == 0) {
            if ((short)uVar1 < 0) {
              iVar9 = *(int *)(lVar7 + 0xc);
            }
            else {
              iVar9 = (int)(short)uVar1 >> 5;
            }
            uVar1 = *(ushort *)(param_2 + 8);
            if ((short)uVar1 < 0) {
              iVar6 = *(int *)(param_2 + 0xc);
            }
            else {
              iVar6 = (int)(short)uVar1 >> 5;
            }
            if (((uVar1 & 1) == 0) && (iVar9 == iVar6)) {
              bVar4 = FUN_1412ae090(lVar7,param_2);
              goto joined_r0x000142547e78;
            }
          }
          else {
            bVar4 = *(byte *)(param_2 + 8) & 1;
joined_r0x000142547e78:
            if (bVar4 != 0) {
              *(longlong *)(param_1 + 0x188) = lVar7;
              return;
            }
          }
          lVar7 = *plVar10;
        }
      }
      *param_3 = 1;
    }
  }
  return;
}



// FUNCTION 142547f10 Unwind@142547f10 body=44 status=ok
// SIG undefined Unwind@142547f10(void)

void Unwind_142547f10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142547f40 Unwind@142547f40 body=44 status=ok
// SIG undefined Unwind@142547f40(void)

void Unwind_142547f40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142547f70 FUN_142547f70 body=596 status=ok
// SIG undefined FUN_142547f70(void)

void FUN_142547f70(longlong param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 local_f8 [8];
  ushort local_f0;
  int local_ec;
  undefined1 local_b8 [8];
  ushort local_b0;
  int local_ac;
  undefined1 local_78 [8];
  ushort local_70;
  int local_6c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1424a7060(local_f8,1,L"%spellout-numbering",0xffffffff);
    FUN_1424a7060(local_b8,1,L"%digits-ordinal",0xffffffff);
    FUN_1424a7060(local_78,1,L"%duration",0xffffffff);
    plVar6 = *(longlong **)(param_1 + 0x170);
    lVar4 = *plVar6;
    if (lVar4 != 0) {
      do {
        uVar3 = *(ushort *)(lVar4 + 8);
        if ((uVar3 & 1) == 0) {
          if ((short)uVar3 < 0) {
            iVar5 = *(int *)(lVar4 + 0xc);
          }
          else {
            iVar5 = (int)(short)uVar3 >> 5;
          }
          iVar1 = local_ec;
          if (-1 < (short)local_f0) {
            iVar1 = (int)(short)local_f0 >> 5;
          }
          if (((local_f0 & 1) == 0) && (iVar5 == iVar1)) {
            cVar2 = FUN_1412ae090(lVar4,local_f8);
            lVar4 = *plVar6;
            if (cVar2 == '\0') goto LAB_1425480b9;
            goto LAB_1425481cb;
          }
        }
        else {
          if ((local_f0 & 1) != 0) goto LAB_1425481cb;
LAB_1425480b9:
          uVar3 = *(ushort *)(lVar4 + 8);
        }
        if ((uVar3 & 1) == 0) {
          if ((short)uVar3 < 0) {
            iVar5 = *(int *)(lVar4 + 0xc);
          }
          else {
            iVar5 = (int)(short)uVar3 >> 5;
          }
          iVar1 = local_ac;
          if (-1 < (short)local_b0) {
            iVar1 = (int)(short)local_b0 >> 5;
          }
          if (((local_b0 & 1) == 0) && (iVar5 == iVar1)) {
            cVar2 = FUN_1412ae090(lVar4,local_b8);
            lVar4 = *plVar6;
            if (cVar2 == '\0') goto LAB_142548129;
            goto LAB_1425481cb;
          }
        }
        else {
          if ((local_b0 & 1) != 0) goto LAB_1425481cb;
LAB_142548129:
          uVar3 = *(ushort *)(lVar4 + 8);
        }
        if ((uVar3 & 1) == 0) {
          if ((short)uVar3 < 0) {
            iVar5 = *(int *)(lVar4 + 0xc);
          }
          else {
            iVar5 = (int)(short)uVar3 >> 5;
          }
          iVar1 = local_6c;
          if (-1 < (short)local_70) {
            iVar1 = (int)(short)local_70 >> 5;
          }
          if ((((local_70 & 1) == 0) && (iVar5 == iVar1)) &&
             (cVar2 = FUN_1412ae090(lVar4,local_78), cVar2 != '\0')) {
LAB_1425481c8:
            lVar4 = *plVar6;
            goto LAB_1425481cb;
          }
        }
        else if ((local_70 & 1) != 0) goto LAB_1425481c8;
        lVar4 = plVar6[1];
        plVar6 = plVar6 + 1;
      } while (lVar4 != 0);
    }
    lVar4 = plVar6[-1];
    *(longlong *)(param_1 + 0x188) = lVar4;
    if (*(char *)(lVar4 + 0x99) == '\0') {
      do {
        if (plVar6 + -1 == *(longlong **)(param_1 + 0x170)) goto LAB_1425481d2;
        lVar4 = plVar6[-2];
        plVar6 = plVar6 + -1;
      } while (*(char *)(lVar4 + 0x99) == '\0');
LAB_1425481cb:
      *(longlong *)(param_1 + 0x188) = lVar4;
    }
LAB_1425481d2:
    FUN_140859a90(local_78);
    FUN_140859a90(local_b8);
    FUN_140859a90(local_f8);
  }
  return;
}



// FUNCTION 142548200 Unwind@142548200 body=47 status=ok
// SIG undefined Unwind@142548200(void)

void Unwind_142548200(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 142548230 Unwind@142548230 body=47 status=ok
// SIG undefined Unwind@142548230(void)

void Unwind_142548230(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 142548260 Unwind@142548260 body=47 status=ok
// SIG undefined Unwind@142548260(void)

void Unwind_142548260(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142548290 FUN_142548290 body=93 status=ok
// SIG undefined FUN_142548290(void)

undefined8 *
FUN_142548290(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x99) == '\0')) {
    FUN_1424a7130(param_2);
  }
  else {
    FUN_1424a7600(param_2,lVar1,0,param_4,param_2,0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1425482f0 Unwind@1425482f0 body=30 status=ok
// SIG undefined Unwind@1425482f0(void)

void Unwind_1425482f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142548310 FUN_142548310 body=266 status=ok
// SIG undefined FUN_142548310(void)

longlong FUN_142548310(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined1 local_a8 [64];
  undefined1 local_68 [8];
  short local_60;
  int local_5c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    lVar1 = *(longlong *)(param_1 + 0x280);
    if (lVar1 == 0) {
      FUN_1424a7060(local_a8,1,L"Inf: ",0xffffffff);
      FUN_1424a6be0(local_68,*(longlong *)(param_1 + 0x278) + 0x388);
      if (-1 < local_60) {
        local_5c = (int)local_60 >> 5;
      }
      FUN_1424a9690(local_a8,local_68,0,local_5c);
      FUN_140859a90(local_68);
      lVar1 = thunk_FUN_1424da030(0x70);
      if (lVar1 == 0) {
        if (*param_2 < 1) {
          *param_2 = 7;
        }
      }
      else {
        local_28 = lVar1;
        FUN_1425f1bd0(lVar1,param_1,local_a8,param_2);
        lVar1 = local_28;
        if (*param_2 < 1) {
          *(longlong *)(param_1 + 0x280) = local_28;
        }
        else {
          FUN_1425f22d0(local_28);
          FUN_1401773f0(lVar1);
        }
      }
      FUN_140859a90(local_a8);
      lVar1 = *(longlong *)(param_1 + 0x280);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142548420 Unwind@142548420 body=37 status=ok
// SIG undefined Unwind@142548420(void)

void Unwind_142548420(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 142548450 Unwind@142548450 body=37 status=ok
// SIG undefined Unwind@142548450(void)

void Unwind_142548450(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa0));
  return;
}



// FUNCTION 142548480 Unwind@142548480 body=37 status=ok
// SIG undefined Unwind@142548480(void)

void Unwind_142548480(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1425484b0 FUN_1425484b0 body=266 status=ok
// SIG undefined FUN_1425484b0(void)

longlong FUN_1425484b0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined1 local_a8 [64];
  undefined1 local_68 [8];
  short local_60;
  int local_5c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    lVar1 = *(longlong *)(param_1 + 0x288);
    if (lVar1 == 0) {
      FUN_1424a7060(local_a8,1,&DAT_1499dfefe,0xffffffff);
      FUN_1424a6be0(local_68,*(longlong *)(param_1 + 0x278) + 0x3c8);
      if (-1 < local_60) {
        local_5c = (int)local_60 >> 5;
      }
      FUN_1424a9690(local_a8,local_68,0,local_5c);
      FUN_140859a90(local_68);
      lVar1 = thunk_FUN_1424da030(0x70);
      if (lVar1 == 0) {
        if (*param_2 < 1) {
          *param_2 = 7;
        }
      }
      else {
        local_28 = lVar1;
        FUN_1425f1bd0(lVar1,param_1,local_a8,param_2);
        lVar1 = local_28;
        if (*param_2 < 1) {
          *(longlong *)(param_1 + 0x288) = local_28;
        }
        else {
          FUN_1425f22d0(local_28);
          FUN_1401773f0(lVar1);
        }
      }
      FUN_140859a90(local_a8);
      lVar1 = *(longlong *)(param_1 + 0x288);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1425485c0 Unwind@1425485c0 body=37 status=ok
// SIG undefined Unwind@1425485c0(void)

void Unwind_1425485c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1425485f0 Unwind@1425485f0 body=37 status=ok
// SIG undefined Unwind@1425485f0(void)

void Unwind_1425485f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa0));
  return;
}



// FUNCTION 142548620 Unwind@142548620 body=37 status=ok
// SIG undefined Unwind@142548620(void)

void Unwind_142548620(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142548650 FUN_142548650 body=386 status=ok
// SIG undefined FUN_142548650(void)

void FUN_142548650(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined **local_80;
  undefined2 local_78;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_80 = &PTR_FUN_149e18960;
  local_78 = 2;
  uVar3 = 0;
  while (uVar10 = uVar3, uVar10 != 0xffffffff) {
    uVar7 = (uint)*(short *)(param_2 + 8);
    uVar3 = *(uint *)(param_2 + 0xc);
    uVar8 = (int)uVar7 >> 5;
    if (*(short *)(param_2 + 8) < 0) {
      uVar8 = uVar3;
    }
    if ((int)uVar8 <= (int)uVar10) break;
    while( true ) {
      uVar6 = (ushort)uVar7;
      uVar8 = (int)(short)uVar6 >> 5;
      if ((short)uVar6 < 0) {
        uVar8 = uVar3;
      }
      if ((int)uVar8 <= (int)uVar10) break;
      uVar2 = 0xffff;
      if (uVar10 < uVar8) {
        lVar5 = param_2 + 10;
        if ((uVar7 & 2) == 0) {
          lVar5 = *(longlong *)(param_2 + 0x18);
        }
        uVar2 = *(undefined2 *)(lVar5 + (longlong)(int)uVar10 * 2);
      }
      cVar1 = FUN_1425cc7f0(uVar2);
      uVar6 = *(ushort *)(param_2 + 8);
      uVar7 = (uint)uVar6;
      if (cVar1 == '\0') break;
      uVar10 = uVar10 + 1;
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    if ((int)uVar10 < 0) {
      uVar3 = *(uint *)(param_2 + 0xc);
      uVar9 = 0;
      uVar11 = uVar9;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0xc);
      uVar8 = (int)(short)uVar6 >> 5;
      if ((short)uVar6 < 0) {
        uVar8 = uVar3;
      }
      uVar9 = (ulonglong)uVar8;
      uVar11 = uVar9;
      if ((int)uVar10 <= (int)uVar8) {
        uVar11 = (ulonglong)uVar10;
      }
    }
    uVar8 = (int)(short)uVar6 >> 5;
    if ((short)uVar6 < 0) {
      uVar8 = uVar3;
    }
    iVar4 = FUN_1424a8940(param_2,CONCAT62((int6)(uVar9 >> 0x10),0x3b),uVar11,uVar8 - (int)uVar11);
    if (*(short *)(param_2 + 8) < 0) {
      iVar12 = *(int *)(param_2 + 0xc);
      if (iVar4 != -1) goto LAB_14254879e;
LAB_142548690:
      FUN_1424a9690(&local_80,param_2,uVar10,iVar12 - uVar10);
      uVar3 = 0xffffffff;
    }
    else {
      iVar12 = (int)*(short *)(param_2 + 8) >> 5;
      if (iVar4 == -1) goto LAB_142548690;
LAB_14254879e:
      uVar3 = 0xffffffff;
      if (iVar4 < iVar12) {
        FUN_1424a9690(&local_80,param_2,uVar10,(iVar4 + 1U) - uVar10);
        uVar3 = iVar4 + 1U;
      }
    }
  }
  FUN_1424a7600(param_2,&local_80,0);
  FUN_140859a90(&local_80);
  return;
}



// FUNCTION 142548800 Unwind@142548800 body=48 status=ok
// SIG undefined Unwind@142548800(void)

void Unwind_142548800(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142548830 FUN_142548830 body=194 status=ok
// SIG undefined FUN_142548830(void)

void FUN_142548830(longlong param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  FUN_1424bbce0();
  if (*param_3 < 1) {
    if ((param_2 - 0x103U < 2) && (*(char *)(param_1 + 0x2e8) == '\0')) {
      FUN_142548900(param_1,param_1 + 400);
      *(undefined1 *)(param_1 + 0x2e8) = 1;
    }
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      if (param_2 != 0x102) {
        if (param_2 == 0x104) {
          cVar1 = *(char *)(param_1 + 0x2ea);
        }
        else {
          if (param_2 != 0x103) {
            return;
          }
          cVar1 = *(char *)(param_1 + 0x2e9);
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      *param_3 = 0;
      puVar2 = (undefined8 *)FUN_1424ba430(param_1 + 400,param_3);
      *(undefined8 **)(param_1 + 0x2f0) = puVar2;
      if (0 < *param_3) {
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        *(undefined8 *)(param_1 + 0x2f0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142548900 FUN_142548900 body=269 status=ok
// SIG undefined FUN_142548900(void)

void FUN_142548900(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int local_110 [57];
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  FUN_1412ae150(local_110,0,0,0,0);
  cVar1 = FUN_1424a3f70(param_2,local_110);
  if (cVar1 == '\0') {
    uVar2 = FUN_1424a5500(param_2);
  }
  else {
    uVar2 = 0;
  }
  FUN_1414b3f60(local_110);
  local_110[0] = 0;
  uVar2 = FUN_1424ebfe0(0,uVar2,local_110);
  uVar2 = FUN_1424ec1c0(uVar2,"contextTransforms",uVar2,local_110);
  lVar3 = FUN_1424ec1c0(uVar2,"number-spellout",uVar2,local_110);
  if ((local_110[0] < 1) && (lVar3 != 0)) {
    local_2c[0] = 0;
    puVar4 = (undefined1 *)FUN_1424eaea0(lVar3,local_2c,local_110);
    if ((local_110[0] < 1) && ((puVar4 != (undefined1 *)0x0 && (1 < local_2c[0])))) {
      *(undefined1 *)(param_1 + 0x2e9) = *puVar4;
      *(undefined1 *)(param_1 + 0x2ea) = puVar4[4];
    }
  }
  FUN_1424ea9f0(lVar3);
  return;
}



// FUNCTION 142548a10 Unwind@142548a10 body=39 status=ok
// SIG undefined Unwind@142548a10(void)

void Unwind_142548a10(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 142548a40 FUN_142548a40 body=382 status=ok
// SIG undefined FUN_142548a40(void)

longlong FUN_142548a40(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_78 [64];
  longlong *local_38;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  if (*(longlong *)(param_1 + 0x170) == 0) {
LAB_142548bb0:
    lVar4 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x270) != 0) {
      return *(longlong *)(param_1 + 0x270);
    }
    if (*(char *)(param_1 + 0x294) == '\0') {
      return 0;
    }
    local_2c[0] = 0;
    puVar1 = (undefined8 *)FUN_14003c1a0(param_1 + 400,local_2c);
    if ((local_2c[0] < 1) &&
       (plVar2 = (longlong *)
                 __RTDynamicCast(puVar1,0,&icu_64::Collator::RTTI_Type_Descriptor,
                                 &icu_64::RuleBasedCollator::RTTI_Type_Descriptor,0),
       plVar2 != (longlong *)0x0)) {
      if (*(longlong *)(param_1 + 0x298) == 0) {
        puVar1 = (undefined8 *)0x0;
      }
      else {
        uVar3 = FUN_14255df30(plVar2);
        FUN_1424a6be0(local_78,uVar3);
        lVar4 = *(longlong *)(param_1 + 0x298);
        if (*(short *)(lVar4 + 8) < 0) {
          iVar5 = *(int *)(lVar4 + 0xc);
        }
        else {
          iVar5 = (int)*(short *)(lVar4 + 8) >> 5;
        }
        FUN_1424a9690(local_78,lVar4,0,iVar5);
        local_38 = (longlong *)thunk_FUN_1424da030(0x110);
        if (local_38 == (longlong *)0x0) {
          FUN_140859a90(local_78);
          goto LAB_142548bb0;
        }
        FUN_1425f57f0(local_38,local_78,local_2c);
        FUN_140859a90(local_78);
        plVar2 = local_38;
      }
      if (local_2c[0] < 1) {
        (*(code *)((undefined8 *)*plVar2)[0x16])(plVar2,4,0x11,local_2c);
        *(longlong **)(param_1 + 0x270) = plVar2;
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
      }
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar4 = *(longlong *)(param_1 + 0x270);
  }
  return lVar4;
}



// FUNCTION 142548bc0 Unwind@142548bc0 body=39 status=ok
// SIG undefined Unwind@142548bc0(void)

void Unwind_142548bc0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 142548bf0 Unwind@142548bf0 body=39 status=ok
// SIG undefined Unwind@142548bf0(void)

void Unwind_142548bf0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 142548c20 FUN_142548c20 body=8 status=ok
// SIG undefined FUN_142548c20(void)

undefined8 FUN_142548c20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



// FUNCTION 142548c30 FUN_142548c30 body=8 status=ok
// SIG undefined FUN_142548c30(void)

undefined8 FUN_142548c30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



// FUNCTION 142548c40 FUN_142548c40 body=258 status=ok
// SIG undefined FUN_142548c40(void)

void FUN_142548c40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x278);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong *)(param_1 + 0x278) = param_2;
    local_2c = 0;
    lVar2 = *(longlong *)(param_1 + 0x280);
    if (lVar2 != 0) {
      FUN_1425f22d0(lVar2);
      FUN_1401773f0(lVar2);
    }
    *(undefined8 *)(param_1 + 0x280) = 0;
    FUN_142548310(param_1,&local_2c);
    lVar2 = *(longlong *)(param_1 + 0x288);
    if (lVar2 != 0) {
      FUN_1425f22d0(lVar2);
      FUN_1401773f0(lVar2);
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
    FUN_1425484b0(param_1,&local_2c);
    if ((*(longlong *)(param_1 + 0x170) != 0) && (0 < *(int *)(param_1 + 0x180))) {
      lVar2 = 0;
      do {
        FUN_1425f0c30(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + lVar2 * 8),param_2,&local_2c)
        ;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x180));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 142548d50 FUN_142548d50 body=84 status=ok
// SIG undefined FUN_142548d50(void)

void FUN_142548d50(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0xb00);
  if (lVar1 != 0) {
    FUN_142543680(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000142548da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1,lVar1);
  return;
}



// FUNCTION 142548db0 Unwind@142548db0 body=34 status=ok
// SIG undefined Unwind@142548db0(void)

void Unwind_142548db0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142548de0 FUN_142548de0 body=105 status=ok
// SIG undefined FUN_142548de0(void)

longlong FUN_142548de0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x2c8);
  if (lVar1 == 0) {
    *param_4 = 7;
  }
  else {
    FUN_1425fa040(lVar1,param_1 + 400,param_2,param_3,param_4);
  }
  return lVar1;
}



// FUNCTION 142548e50 Unwind@142548e50 body=40 status=ok
// SIG undefined Unwind@142548e50(void)

void Unwind_142548e50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142548e80 FUN_142548e80 body=7 status=ok
// SIG undefined FUN_142548e80(void)

undefined4 FUN_142548e80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x290);
}



// FUNCTION 142548e90 FUN_142548e90 body=7 status=ok
// SIG undefined FUN_142548e90(void)

void FUN_142548e90(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x290) = param_2;
  return;
}



// FUNCTION 142548ea0 FUN_142548ea0 body=95 status=ok
// SIG undefined FUN_142548ea0(void)

undefined8 * FUN_142548ea0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::RuleBasedNumberFormat::vftable;
  FUN_142546040();
  FUN_140859a90(param_1 + 0x55);
  FUN_1414b3f60(param_1 + 0x32);
  FUN_1424bac40(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142548f00 Unwind@142548f00 body=21 status=ok
// SIG undefined Unwind@142548f00(void)

void Unwind_142548f00(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142548f20 FUN_142548f20 body=8 status=ok
// SIG undefined FUN_142548f20(void)

undefined1 FUN_142548f20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x294);
}



// FUNCTION 142548f30 FUN_142548f30 body=8 status=ok
// SIG undefined FUN_142548f30(void)

undefined * FUN_142548f30(void)

{
  return &DAT_14c793320;
}



// FUNCTION 142548f40 FUN_142548f40 body=427 status=ok
// SIG undefined FUN_142548f40(void)

undefined8 * FUN_142548f40(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  void *_Dst;
  
  FUN_1424bd720();
  *param_1 = icu_64::RelativeDateFormat::vftable;
  param_1[0x2c] = 0;
  FUN_1424a6be0(param_1 + 0x2d,param_2 + 0x168);
  FUN_1424a6be0(param_1 + 0x35,param_2 + 0x1a8);
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  FUN_1424a3ce0(param_1 + 0x3f,param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x2d8);
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x2e8);
  *(undefined1 *)((longlong)param_1 + 0x2e9) = *(undefined1 *)(param_2 + 0x2e9);
  *(undefined1 *)((longlong)param_1 + 0x2ea) = *(undefined1 *)(param_2 + 0x2ea);
  *(undefined1 *)((longlong)param_1 + 0x2eb) = *(undefined1 *)(param_2 + 0x2eb);
  param_1[0x5e] = 0;
  if (*(longlong **)(param_2 + 0x160) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x160) + 0x18))();
    param_1[0x2c] = uVar1;
  }
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    lVar2 = thunk_FUN_1424da030(0x40);
    if (lVar2 != 0) {
      FUN_1424a6be0(lVar2,*(undefined8 *)(param_2 + 0x1e8));
    }
    param_1[0x3d] = lVar2;
  }
  if (0 < (int)*(uint *)(param_1 + 0x5b)) {
    _Dst = (void *)FUN_1424da030((ulonglong)*(uint *)(param_1 + 0x5b) << 4);
    param_1[0x5c] = _Dst;
    memcpy(_Dst,*(void **)(param_2 + 0x2e0),(longlong)*(int *)(param_1 + 0x5b) << 4);
  }
  if (*(longlong **)(param_2 + 0x2f0) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x2f0) + 0x18))();
    param_1[0x5e] = uVar1;
  }
  return param_1;
}



// FUNCTION 1425490f0 Unwind@1425490f0 body=34 status=ok
// SIG undefined Unwind@1425490f0(void)

void Unwind_1425490f0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142549120 Unwind@142549120 body=34 status=ok
// SIG undefined Unwind@142549120(void)

void Unwind_142549120(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142549150 Unwind@142549150 body=34 status=ok
// SIG undefined Unwind@142549150(void)

void Unwind_142549150(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142549180 Unwind@142549180 body=34 status=ok
// SIG undefined Unwind@142549180(void)

void Unwind_142549180(undefined8 param_1,longlong param_2)

{
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425491b0 Unwind@1425491b0 body=34 status=ok
// SIG undefined Unwind@1425491b0(void)

void Unwind_1425491b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425491e0 FUN_1425491e0 body=623 status=ok
// SIG undefined FUN_1425491e0(void)

undefined8 *
FUN_1425491e0(undefined8 *param_1,int param_2,uint param_3,undefined8 param_4,int *param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  FUN_1424bd6e0();
  *param_1 = icu_64::RelativeDateFormat::vftable;
  param_1[0x2c] = 0;
  param_1[0x2d] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2e) = 2;
  param_1[0x35] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x36) = 2;
  param_1[0x3d] = 0;
  *(uint *)(param_1 + 0x3e) = param_3;
  puVar6 = param_1 + 0x3f;
  FUN_1424a3ce0(puVar6,param_4);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5e] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (*param_5 < 1) {
    if (param_2 - 4U < 0xfffffffb) {
      *param_5 = 1;
    }
    else {
      uVar5 = param_3 & 0xffffff7f;
      if ((int)param_3 < 4) {
        uVar5 = param_3;
      }
      if (uVar5 == 0xffffffff) {
        puVar3 = (undefined8 *)FUN_1424bde30(param_2,param_4);
        plVar2 = (longlong *)
                 __RTDynamicCast(puVar3,0,&icu_64::DateFormat::RTTI_Type_Descriptor,
                                 &icu_64::SimpleDateFormat::RTTI_Type_Descriptor,0,puVar6);
        param_1[0x2c] = plVar2;
        if (plVar2 == (longlong *)0x0) {
          *param_5 = 0x10;
          if (puVar3 == (undefined8 *)0x0) {
            return param_1;
          }
          (**(code **)*puVar3)(puVar3,1);
          return param_1;
        }
        (**(code **)(*plVar2 + 0xe8))(plVar2,param_1 + 0x35);
      }
      else {
        uVar1 = FUN_1424bde60(uVar5,param_4);
        plVar2 = (longlong *)
                 __RTDynamicCast(uVar1,0,&icu_64::DateFormat::RTTI_Type_Descriptor,
                                 &icu_64::SimpleDateFormat::RTTI_Type_Descriptor,0,puVar6);
        param_1[0x2c] = plVar2;
        if (plVar2 == (longlong *)0x0) {
          *param_5 = 0x10;
          return param_1;
        }
        (**(code **)(*plVar2 + 0xe8))(plVar2,param_1 + 0x2d);
        if (param_2 != -1) {
          uVar1 = FUN_1424bde30(param_2,param_4);
          plVar2 = (longlong *)
                   __RTDynamicCast(uVar1,0,&icu_64::DateFormat::RTTI_Type_Descriptor,
                                   &icu_64::SimpleDateFormat::RTTI_Type_Descriptor,0);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0xe8))(plVar2,param_1 + 0x35);
            (**(code **)*plVar2)(plVar2,1);
          }
        }
      }
      if (*param_5 < 1) {
        uVar1 = FUN_1424b77f0();
        lVar4 = FUN_1424cc240(uVar1,param_4,param_5);
        param_1[0x29] = lVar4;
        if ((lVar4 == 0) && (*param_5 < 1)) {
          *param_5 = 7;
        }
      }
      FUN_1425494c0(param_1,param_5);
    }
  }
  return param_1;
}



// FUNCTION 142549450 Unwind@142549450 body=40 status=ok
// SIG undefined Unwind@142549450(void)

void Unwind_142549450(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142549480 Unwind@142549480 body=58 status=ok
// SIG undefined Unwind@142549480(void)

void Unwind_142549480(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425494c0 FUN_1425494c0 body=536 status=ok
// SIG undefined FUN_1425494c0(void)

void FUN_1425494c0(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **local_90;
  longlong local_88;
  int local_80;
  longlong local_50;
  undefined8 *local_48;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  uVar3 = FUN_1424a5500(param_1 + 0x1f8);
  uVar3 = FUN_1424ebfe0(0,uVar3,param_2);
  lVar4 = FUN_1424ec1c0(uVar3,"calendar/gregorian/DateTimePatterns",0,param_2);
  if (*param_2 < 1) {
    uVar1 = FUN_1424eaf70(lVar4);
    if (8 < (int)uVar1) {
      local_3c[0] = 0;
      iVar2 = 8;
      if (0xc < uVar1) {
        uVar1 = *(uint *)(param_1 + 0x1f0) & 0xffffff7f;
        iVar2 = 8;
        if (uVar1 < 0x84) {
          iVar2 = uVar1 + 9;
        }
      }
      uVar5 = FUN_1424ebec0(lVar4,iVar2,local_3c,param_2);
      if ((*param_2 < 1) && (2 < local_3c[0])) {
        iVar2 = FUN_142504690(uVar5,&DAT_1499dff80,3);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 0x2e8) = 1;
        }
      }
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x40);
      if (puVar6 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x1e8) = 0;
      }
      else {
        local_50 = lVar4;
        local_48 = puVar6;
        FUN_1424a7060(&local_90,1,uVar5,local_3c[0]);
        *local_48 = &PTR_FUN_149e18960;
        *(undefined2 *)(local_48 + 1) = 2;
        FUN_1425fb600(local_48,&local_90,2,2,param_2);
        *(undefined8 **)(param_1 + 0x1e8) = local_48;
        FUN_140859a90(&local_90);
        lVar4 = local_50;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = 6;
  local_88 = FUN_1424da030(0x60);
  *(longlong *)(param_1 + 0x2e0) = local_88;
  local_80 = *(int *)(param_1 + 0x2d8);
  local_90 = icu_64::_anon_057A3E57::RelDateFmtDataSink::vftable;
  if (0 < local_80) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      *(undefined4 *)(local_88 + lVar7) = 0;
      *(undefined8 *)(local_88 + 8 + lVar7) = 0;
      *(undefined4 *)(local_88 + 4 + lVar7) = 0xffffffff;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < local_80);
  }
  FUN_1424ec6e0(uVar3,"fields/day/relative",&local_90,param_2);
  FUN_1424ea9f0(uVar3);
  if (0 < *param_2) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  thunk_FUN_1424b70d0(&local_90);
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
  return;
}



// FUNCTION 1425496e0 Unwind@1425496e0 body=56 status=ok
// SIG undefined Unwind@1425496e0(void)

void Unwind_1425496e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x70));
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142549720 Unwind@142549720 body=63 status=ok
// SIG undefined Unwind@142549720(void)

void Unwind_142549720(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x70));
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 142549760 FUN_142549760 body=153 status=ok
// SIG undefined FUN_142549760(void)

void FUN_142549760(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = icu_64::RelativeDateFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x2c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[0x3d];
  if (lVar2 != 0) {
    thunk_FUN_140859a90(lVar2);
    FUN_1401773f0(lVar2);
  }
  FUN_1424da110(param_1[0x5c]);
  puVar1 = (undefined8 *)param_1[0x5e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1414b3f60(param_1 + 0x3f);
  FUN_140859a90(param_1 + 0x35);
  FUN_140859a90(param_1 + 0x2d);
  FUN_1424bd8b0(param_1);
  return;
}



// FUNCTION 142549800 FUN_142549800 body=64 status=ok
// SIG undefined FUN_142549800(void)

longlong FUN_142549800(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x2f8);
  if (lVar1 != 0) {
    FUN_142548f40(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 142549840 Unwind@142549840 body=32 status=ok
// SIG undefined Unwind@142549840(void)

void Unwind_142549840(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142549860 FUN_142549860 body=323 status=ok
// SIG undefined FUN_142549860(void)

bool FUN_142549860(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  cVar3 = FUN_1424bd900();
  if ((cVar3 != '\0') && (*(int *)(param_1 + 0x1f0) == *(int *)(param_2 + 0x1f0))) {
    uVar1 = *(ushort *)(param_1 + 0x170);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar6 = *(int *)(param_1 + 0x174);
      }
      else {
        iVar6 = (int)(short)uVar1 >> 5;
      }
      sVar2 = *(short *)(param_2 + 0x170);
      if (sVar2 < 0) {
        iVar5 = *(int *)(param_2 + 0x174);
      }
      else {
        iVar5 = (int)sVar2 >> 5;
      }
      if (((int)sVar2 & 1U) != 0) {
        return false;
      }
      if (iVar6 != iVar5) {
        return false;
      }
      bVar4 = FUN_1412ae090(param_1 + 0x168,param_2 + 0x168);
    }
    else {
      bVar4 = *(byte *)(param_2 + 0x170) & 1;
    }
    if (bVar4 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x1b0);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar6 = *(int *)(param_1 + 0x1b4);
        }
        else {
          iVar6 = (int)(short)uVar1 >> 5;
        }
        sVar2 = *(short *)(param_2 + 0x1b0);
        if (sVar2 < 0) {
          iVar5 = *(int *)(param_2 + 0x1b4);
        }
        else {
          iVar5 = (int)sVar2 >> 5;
        }
        if (((int)sVar2 & 1U) != 0) {
          return false;
        }
        if (iVar6 != iVar5) {
          return false;
        }
        bVar4 = FUN_1412ae090(param_1 + 0x1a8,param_2 + 0x1a8);
      }
      else {
        bVar4 = *(byte *)(param_2 + 0x1b0) & 1;
      }
      if (bVar4 != 0) {
        cVar3 = FUN_1424a3f70(param_1 + 0x1f8,param_2 + 0x1f8);
        return cVar3 != '\0';
      }
    }
  }
  return false;
}



// FUNCTION 1425499b0 FUN_1425499b0 body=1350 status=ok
// SIG undefined FUN_1425499b0(void)

undefined8 FUN_1425499b0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe78;
  undefined1 local_158 [8];
  short local_150;
  int local_14c;
  undefined **local_118;
  undefined2 local_110;
  undefined **local_d8;
  short local_d0;
  int local_cc;
  undefined **local_98;
  short local_90;
  int local_8c;
  undefined8 local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_4c[0] = 0;
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  local_58 = param_4;
  iVar5 = (**(code **)(*param_1 + 200))(param_1,1,local_4c);
  if (local_4c[0] < 1) {
    puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    uVar10 = thunk_FUN_1424d9690();
    FUN_1424ccf20(puVar8,uVar10,local_4c);
    iVar6 = FUN_1424cd2e0(param_2,0x14,local_4c);
    iVar7 = FUN_1424cd2e0(puVar8,0x14,local_4c);
    (**(code **)*puVar8)(puVar8,1);
    if (((local_4c[0] < 1) && (iVar6 = iVar6 - iVar7, -3 < iVar6)) &&
       ((int)(iVar6 + 2U) < (int)param_1[0x5b])) {
      lVar2 = param_1[0x5c];
      lVar9 = (ulonglong)(iVar6 + 2U) * 0x10;
      if ((*(int *)(lVar2 + lVar9) == iVar6) &&
         (lVar3 = *(longlong *)(lVar2 + 8 + lVar9), lVar3 != 0)) {
        uVar10 = *(undefined4 *)(lVar2 + 4 + lVar9);
        FUN_1424a8e40(&local_98);
        iVar6 = local_8c;
        if (-1 < local_90) {
          iVar6 = (int)local_90 >> 5;
        }
        in_stack_fffffffffffffe78 = in_stack_fffffffffffffe78 & 0xffffffff00000000;
        FUN_1424a9130(&local_98,0,iVar6,lVar3,in_stack_fffffffffffffe78,uVar10);
      }
    }
  }
  if (local_90 < 0) {
    if (local_8c < 1) goto LAB_142549adc;
LAB_142549ab2:
    if ((*(ushort *)(param_1 + 0x2e) < 0x20) ||
       (((0x1f < *(ushort *)(param_1 + 0x36) && (param_1[0x3d] != 0)) &&
        ((char)param_1[0x5d] == '\0')))) goto LAB_142549adc;
    uVar10 = FUN_1424a8030(&local_98,0);
    cVar4 = FUN_1424d8720(uVar10);
    if ((cVar4 != '\0') && (param_1[0x5e] != 0)) {
      if (iVar5 != 0x102) {
        if (iVar5 == 0x104) {
          cVar4 = *(char *)((longlong)param_1 + 0x2eb);
        }
        else {
          if (iVar5 != 0x103) goto LAB_142549bf6;
          cVar4 = *(char *)((longlong)param_1 + 0x2ea);
        }
        if (cVar4 == '\0') goto LAB_142549bf6;
      }
      FUN_1425f56e0(&local_98,param_1[0x5e],param_1 + 0x3f,0x300);
    }
LAB_142549bf6:
    (**(code **)(*(longlong *)param_1[0x2c] + 0xc0))((longlong *)param_1[0x2c],0x100,local_4c);
  }
  else {
    if (0 < local_90 >> 5) goto LAB_142549ab2;
LAB_142549adc:
    (**(code **)(*(longlong *)param_1[0x2c] + 0xc0))((longlong *)param_1[0x2c],iVar5,local_4c);
  }
  if (*(ushort *)(param_1 + 0x2e) < 0x20) {
    (**(code **)(*(longlong *)param_1[0x2c] + 0xf8))((longlong *)param_1[0x2c],param_1 + 0x35);
    (**(code **)(*(longlong *)param_1[0x2c] + 0x40))
              ((longlong *)param_1[0x2c],param_2,param_3,local_58);
    goto LAB_142549ead;
  }
  plVar1 = param_1 + 0x2d;
  if ((*(ushort *)(param_1 + 0x36) < 0x20) || (param_1[0x3d] == 0)) {
    if (local_90 < 0) {
      if (0 < local_8c) {
LAB_142549d05:
        FUN_1424a9690(param_3,&local_98,0);
        goto LAB_142549ead;
      }
    }
    else if (0 < local_90 >> 5) goto LAB_142549d05;
    (**(code **)(*(longlong *)param_1[0x2c] + 0xf8))((longlong *)param_1[0x2c],plVar1);
    (**(code **)(*(longlong *)param_1[0x2c] + 0x40))
              ((longlong *)param_1[0x2c],param_2,param_3,local_58);
    goto LAB_142549ead;
  }
  local_118 = &PTR_FUN_149e18960;
  local_110 = 2;
  if (local_90 < 0) {
    if (local_8c < 1) goto LAB_142549c6c;
LAB_142549d27:
    FUN_1424a7060(&local_d8,CONCAT71((int7)((ulonglong)plVar1 >> 8),1),&DAT_1499e0130,2);
    FUN_1424a7060(local_158,1,&DAT_1499e0136,1);
    if (-1 < local_d0) {
      local_cc = (int)local_d0 >> 5;
    }
    if (-1 < local_150) {
      local_14c = (int)local_150 >> 5;
    }
    if (-1 < local_90) {
      local_8c = (int)local_90 >> 5;
    }
    in_stack_fffffffffffffe78 = in_stack_fffffffffffffe78 & 0xffffffff00000000;
    FUN_1424a8b50(&local_98,0,local_8c,local_158,in_stack_fffffffffffffe78,local_14c,&local_d8,0,
                  local_cc);
    FUN_140859a90(local_158);
    FUN_140859a90(&local_d8);
    local_d8._0_2_ = 0x27;
    FUN_1424a9130(&local_98,0,0,&local_d8,in_stack_fffffffffffffe78 & 0xffffffff00000000,1);
    local_d8 = (undefined **)CONCAT62(local_d8._2_6_,0x27);
    FUN_1424a6cf0(&local_98,&local_d8,0,1);
    FUN_1424a7600(&local_118,&local_98,0);
  }
  else {
    if (0 < local_90 >> 5) goto LAB_142549d27;
LAB_142549c6c:
    FUN_1424a7600(&local_118,plVar1,0);
  }
  local_d8 = &PTR_FUN_149e18960;
  local_d0 = 2;
  FUN_1425fba70(param_1[0x3d],param_1 + 0x35,&local_118,&local_d8,local_4c);
  (**(code **)(*(longlong *)param_1[0x2c] + 0xf8))((longlong *)param_1[0x2c],&local_d8);
  (**(code **)(*(longlong *)param_1[0x2c] + 0x40))
            ((longlong *)param_1[0x2c],param_2,param_3,local_58);
  FUN_140859a90(&local_d8);
  FUN_140859a90(&local_118);
LAB_142549ead:
  FUN_140859a90(&local_98);
  return param_3;
}



// FUNCTION 142549f00 Unwind@142549f00 body=55 status=ok
// SIG undefined Unwind@142549f00(void)

void Unwind_142549f00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x50);
  return;
}



// FUNCTION 142549f40 Unwind@142549f40 body=55 status=ok
// SIG undefined Unwind@142549f40(void)

void Unwind_142549f40(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd0);
  return;
}



// FUNCTION 142549f80 Unwind@142549f80 body=55 status=ok
// SIG undefined Unwind@142549f80(void)

void Unwind_142549f80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd0);
  return;
}



// FUNCTION 142549fc0 Unwind@142549fc0 body=55 status=ok
// SIG undefined Unwind@142549fc0(void)

void Unwind_142549fc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x90);
  return;
}



// FUNCTION 14254a000 Unwind@14254a000 body=58 status=ok
// SIG undefined Unwind@14254a000(void)

void Unwind_14254a000(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x110);
  return;
}



// FUNCTION 14254a040 thunk_FUN_1424bd980 body=5 status=ok
// SIG undefined thunk_FUN_1424bd980(void)

void thunk_FUN_1424bd980(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                        int *param_5)

{
  double dVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [36];
  int iStack_44;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_5 < 1) {
    iVar2 = FUN_14252d140(param_2);
    if (iVar2 == 2) {
      dVar1 = (double)*(int *)(param_2 + 8);
    }
    else {
      if ((iVar2 != 1) && (iVar2 != 0)) {
        *param_5 = 1;
        goto LAB_1424bd9b1;
      }
      dVar1 = *(double *)(param_2 + 8);
    }
    if ((longlong *)param_1[0x29] != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))();
      if (puVar3 != (undefined8 *)0x0) {
        iStack_44 = 0;
        FUN_1424ccf20(puVar3,dVar1,&iStack_44);
        if (iStack_44 < 1) {
          (**(code **)(*param_1 + 0x40))(param_1,puVar3,param_3,param_4);
        }
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
LAB_1424bd9b1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 14254a050 FUN_14254a050 body=1034 status=ok
// SIG undefined FUN_14254a050(void)

void FUN_14254a050(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffee8;
  int local_100 [2];
  short local_f8;
  int local_f4;
  undefined **local_c0;
  short local_b8;
  int local_b4;
  undefined **local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  if (*(ushort *)(param_1 + 0x170) < 0x20) {
    plVar5 = *(longlong **)(param_1 + 0x160);
    lVar9 = param_1 + 0x1a8;
    lVar11 = *plVar5;
  }
  else {
    iVar10 = *(int *)(param_4 + 8);
    local_58 = param_1 + 0x168;
    if ((0x1f < *(ushort *)(param_1 + 0x1b0)) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
      local_68 = param_1 + 0x1a8;
      local_60 = param_3;
      FUN_1424a6be0(local_100,param_2);
      local_80 = icu_64::FieldPosition::vftable;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_4c[0] = 0;
      local_50 = 0;
      uVar8 = 0;
      do {
        if (*(int *)(param_1 + 0x2d8) <= (int)uVar8) {
          iVar4 = 0;
          iVar10 = 0;
LAB_14254a319:
          local_c0 = &PTR_FUN_149e18960;
          local_b8 = 2;
          FUN_1425fba70(*(undefined8 *)(param_1 + 0x1e8),local_68,local_58,&local_c0,local_4c);
          plVar5 = local_60;
          (**(code **)(**(longlong **)(param_1 + 0x160) + 0xf8))
                    (*(longlong **)(param_1 + 0x160),&local_c0);
          (**(code **)(**(longlong **)(param_1 + 0x160) + 0x48))
                    (*(longlong **)(param_1 + 0x160),local_100,plVar5,param_4);
          iVar6 = *(int *)(param_4 + 0xc);
          iVar7 = iVar6;
          if (iVar6 < 0) {
            iVar7 = *(int *)(param_4 + 8);
          }
          iVar2 = iVar4;
          if (iVar7 < iVar4) {
            iVar2 = iVar7;
          }
          if (local_50 + iVar4 <= iVar7) {
            iVar2 = (iVar10 - local_50) + iVar7;
          }
          if (iVar6 < 0) {
            *(int *)(param_4 + 8) = iVar2;
          }
          else {
            *(int *)(param_4 + 0xc) = iVar2;
          }
LAB_14254a3ad:
          FUN_140859a90(&local_c0);
          thunk_FUN_1424b70d0(&local_80);
          FUN_140859a90(local_100);
          return;
        }
        lVar11 = (ulonglong)uVar8 * 0x10;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 8 + lVar11);
        if (lVar9 != 0) {
          if (iVar10 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)local_f8 >> 5;
            if (local_f8 < 0) {
              iVar4 = local_f4;
            }
            if (iVar10 <= iVar4) {
              iVar4 = iVar10;
            }
          }
          iVar6 = (int)local_f8 >> 5;
          if (local_f8 < 0) {
            iVar6 = local_f4;
          }
          in_stack_fffffffffffffee8 = CONCAT44((int)(in_stack_fffffffffffffee8 >> 0x20),iVar4);
          iVar4 = FUN_1424a8860(local_100,lVar9,0,
                                *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 4 + lVar11),
                                in_stack_fffffffffffffee8,iVar6 - iVar4);
          if (iVar10 <= iVar4) {
            local_c0 = &PTR_FUN_149e18960;
            local_b8 = 2;
            plVar5 = (longlong *)(**(code **)(*local_60 + 0x10))();
            uVar12 = thunk_FUN_1424d9690();
            FUN_1424ccf20(plVar5,uVar12,local_4c);
            (**(code **)(*plVar5 + 0x28))
                      (plVar5,5,*(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + lVar11),local_4c);
            if (0 < local_4c[0]) {
              *(int *)(param_4 + 0xc) = iVar10;
              (**(code **)*plVar5)(plVar5,1);
              goto LAB_14254a3ad;
            }
            (**(code **)(**(longlong **)(param_1 + 0x160) + 0xf8))
                      (*(longlong **)(param_1 + 0x160),local_58);
            (**(code **)(**(longlong **)(param_1 + 0x160) + 0x40))
                      (*(longlong **)(param_1 + 0x160),plVar5,&local_c0,&local_80);
            iVar10 = *(int *)(*(longlong *)(param_1 + 0x2e0) + 4 + lVar11);
            if (-1 < local_b8) {
              local_b4 = (int)local_b8 >> 5;
            }
            FUN_1424a9610(local_100,iVar4,iVar10,&local_c0,
                          in_stack_fffffffffffffee8 & 0xffffffff00000000,local_b4);
            local_50 = local_b4;
            (**(code **)*plVar5)(plVar5,1);
            FUN_140859a90(&local_c0);
            goto LAB_14254a319;
          }
        }
        uVar8 = uVar8 + 1;
      } while( true );
    }
    if (0 < *(int *)(param_1 + 0x2d8)) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 8 + lVar9);
        if (lVar1 != 0) {
          uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 4 + lVar9);
          in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
          cVar3 = FUN_1424a7e30(param_2,iVar10,uVar12,lVar1,in_stack_fffffffffffffee8,uVar12);
          if (cVar3 == '\0') {
            local_100[0] = 0;
            uVar12 = thunk_FUN_1424d9690();
            FUN_1424ccf20(param_3,uVar12,local_100);
            (**(code **)(*param_3 + 0x28))
                      (param_3,5,*(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + lVar9),local_100);
            if (0 < local_100[0]) {
              *(int *)(param_4 + 0xc) = iVar10;
              return;
            }
            *(int *)(param_4 + 8) = iVar10 + *(int *)(*(longlong *)(param_1 + 0x2e0) + 4 + lVar9);
            return;
          }
        }
        lVar11 = lVar11 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar11 < *(int *)(param_1 + 0x2d8));
    }
    plVar5 = *(longlong **)(param_1 + 0x160);
    lVar11 = *plVar5;
    lVar9 = local_58;
  }
  (**(code **)(lVar11 + 0xf8))(plVar5,lVar9);
                    /* WARNING: Could not recover jumptable at 0x00014254a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x48))
            (*(longlong **)(param_1 + 0x160),param_2,param_3,param_4);
  return;
}



// FUNCTION 14254a480 Unwind@14254a480 body=55 status=ok
// SIG undefined Unwind@14254a480(void)

void Unwind_14254a480(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 14254a4c0 Unwind@14254a4c0 body=55 status=ok
// SIG undefined Unwind@14254a4c0(void)

void Unwind_14254a4c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  return;
}



// FUNCTION 14254a500 Unwind@14254a500 body=64 status=ok
// SIG undefined Unwind@14254a500(void)

void Unwind_14254a500(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0xb8);
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14254a540 thunk_FUN_1424bdc40 body=5 status=ok
// SIG undefined thunk_FUN_1424bdc40(void)

undefined8 thunk_FUN_1424bdc40(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  int aiStack_44 [7];
  
  aiStack_44[1] = -2;
  aiStack_44[2] = -1;
  uVar1 = 0;
  if (0 < *param_3) {
    return 0;
  }
  ppuStack_58 = icu_64::ParsePosition::vftable;
  uStack_50 = 0xffffffff00000000;
  uVar3 = uVar1;
  if (((longlong *)param_1[0x29] != (longlong *)0x0) &&
     (puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(),
     puVar2 != (undefined8 *)0x0)) {
    FUN_1424cb7f0(puVar2);
    (**(code **)(*param_1 + 0x48))(param_1,param_2,puVar2,&ppuStack_58);
    uVar3 = 0;
    if ((int)uStack_50 != 0) {
      aiStack_44[0] = 0;
      uVar3 = FUN_1424cd180(puVar2,aiStack_44);
      if (0 < aiStack_44[0]) {
        uStack_50 = 0;
        uVar3 = uVar1;
      }
    }
    (**(code **)*puVar2)(puVar2,1);
    if ((int)uStack_50 != 0) goto LAB_1424bdd04;
  }
  *param_3 = 1;
LAB_1424bdd04:
  thunk_FUN_1424b70d0(&ppuStack_58);
  return uVar3;
}



// FUNCTION 14254a550 FUN_14254a550 body=129 status=ok
// SIG undefined FUN_14254a550(void)

longlong FUN_14254a550(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  
  if (*param_3 < 1) {
    uVar1 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar1 = *(ushort *)(param_2 + 8) & 0x1f;
    }
    *(ushort *)(param_2 + 8) = uVar1;
    lVar2 = param_1 + 0x1a8;
    if (((*(ushort *)(param_1 + 0x170) < 0x20) ||
        (lVar2 = param_1 + 0x168, *(ushort *)(param_1 + 0x1b0) < 0x20)) ||
       (*(longlong *)(param_1 + 0x1e8) == 0)) {
      FUN_1424a7600(param_2,lVar2,0);
    }
    else {
      FUN_1425fba70(*(longlong *)(param_1 + 0x1e8),param_1 + 0x1a8,lVar2,param_2,param_3);
    }
  }
  return param_2;
}



// FUNCTION 14254a5e0 FUN_14254a5e0 body=67 status=ok
// SIG undefined FUN_14254a5e0(void)

longlong FUN_14254a5e0(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  
  if (*param_3 < 1) {
    uVar1 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar1 = *(ushort *)(param_2 + 8) & 0x1f;
    }
    *(ushort *)(param_2 + 8) = uVar1;
    FUN_1424a7600(param_2,param_1 + 0x168,0);
  }
  return param_2;
}



// FUNCTION 14254a630 FUN_14254a630 body=67 status=ok
// SIG undefined FUN_14254a630(void)

longlong FUN_14254a630(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  
  if (*param_3 < 1) {
    uVar1 = 2;
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      uVar1 = *(ushort *)(param_2 + 8) & 0x1f;
    }
    *(ushort *)(param_2 + 8) = uVar1;
    FUN_1424a7600(param_2,param_1 + 0x1a8,0);
  }
  return param_2;
}



// FUNCTION 14254a680 FUN_14254a680 body=67 status=ok
// SIG undefined FUN_14254a680(void)

void FUN_14254a680(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if (0 < *param_4) {
    return;
  }
  FUN_1424a7600(param_1 + 0x168,param_2,0);
  FUN_1424a7600(param_1 + 0x1a8,param_3,0);
  return;
}



// FUNCTION 14254a6d0 FUN_14254a6d0 body=17 status=ok
// SIG undefined FUN_14254a6d0(void)

void FUN_14254a6d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014254a6da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x108))();
  return;
}



// FUNCTION 14254a6f0 FUN_14254a6f0 body=194 status=ok
// SIG undefined FUN_14254a6f0(void)

void FUN_14254a6f0(longlong param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  FUN_1424be730();
  if (*param_3 < 1) {
    if ((param_2 - 0x103U < 2) && (*(char *)(param_1 + 0x2e9) == '\0')) {
      FUN_14254a7c0(param_1,param_1 + 0x1f8);
      *(undefined1 *)(param_1 + 0x2e9) = 1;
    }
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      if (param_2 != 0x102) {
        if (param_2 == 0x104) {
          cVar1 = *(char *)(param_1 + 0x2eb);
        }
        else {
          if (param_2 != 0x103) {
            return;
          }
          cVar1 = *(char *)(param_1 + 0x2ea);
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      *param_3 = 0;
      puVar2 = (undefined8 *)FUN_1424ba430(param_1 + 0x1f8,param_3);
      *(undefined8 **)(param_1 + 0x2f0) = puVar2;
      if (0 < *param_3) {
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        *(undefined8 *)(param_1 + 0x2f0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14254a7c0 FUN_14254a7c0 body=255 status=ok
// SIG undefined FUN_14254a7c0(void)

void FUN_14254a7c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int local_110 [57];
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  FUN_1412ae150(local_110,0,0,0,0);
  cVar1 = FUN_1424a3f70(param_2,local_110);
  if (cVar1 == '\0') {
    uVar2 = FUN_1424a5500(param_2);
  }
  else {
    uVar2 = 0;
  }
  FUN_1414b3f60(local_110);
  local_110[0] = 0;
  lVar3 = FUN_1424ebfe0(0,uVar2,local_110);
  FUN_1424ec1c0(lVar3,"contextTransforms/relative",lVar3,local_110);
  if (local_110[0] < 1) {
    if (lVar3 == 0) {
      return;
    }
    local_2c[0] = 0;
    puVar4 = (undefined1 *)FUN_1424eaea0(lVar3,local_2c,local_110);
    if (((local_110[0] < 1) && (puVar4 != (undefined1 *)0x0)) && (1 < local_2c[0])) {
      *(undefined1 *)(param_1 + 0x2ea) = *puVar4;
      *(undefined1 *)(param_1 + 0x2eb) = puVar4[4];
    }
  }
  else if (lVar3 == 0) {
    return;
  }
  FUN_1424ea9f0(lVar3);
  return;
}



// FUNCTION 14254a8c0 Unwind@14254a8c0 body=39 status=ok
// SIG undefined Unwind@14254a8c0(void)

void Unwind_14254a8c0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 14254a8f0 FUN_14254a8f0 body=38 status=ok
// SIG undefined FUN_14254a8f0(void)

undefined8 FUN_14254a8f0(undefined8 param_1,int param_2)

{
  FUN_142549760();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14254a920 FUN_14254a920 body=38 status=ok
// SIG undefined FUN_14254a920(void)

undefined8 FUN_14254a920(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14254a950 FUN_14254a950 body=246 status=ok
// SIG undefined FUN_14254a950(void)

void FUN_14254a950(longlong param_1,char *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined1 local_78 [40];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_2;
  (**(code **)(*param_3 + 0x50))(param_3,local_78,param_5);
  local_7c = 0;
  cVar1 = FUN_14258c4f0(local_78,0,&local_50,param_3);
  if (cVar1 != '\0') {
    iVar5 = 1;
    do {
      iVar2 = atoi(local_50);
      if (iVar2 + 2 < *(int *)(param_1 + 0x10)) {
        lVar4 = (longlong)(iVar2 + 2) * 0x10;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + 8 + lVar4) == 0) {
          *(int *)(*(longlong *)(param_1 + 8) + lVar4) = iVar2;
          uVar3 = (**(code **)(*param_3 + 0x18))(param_3,&local_7c,param_5);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + lVar4) = uVar3;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 4 + lVar4) = local_7c;
        }
      }
      cVar1 = FUN_14258c4f0(local_78,iVar5,&local_50,param_3);
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14254aa70 FUN_14254aa70 body=8 status=ok
// SIG undefined FUN_14254aa70(void)

undefined * FUN_14254aa70(void)

{
  return &DAT_14c793324;
}



// FUNCTION 14254aa80 FUN_14254aa80 body=402 status=ok
// SIG undefined FUN_14254aa80(void)

longlong FUN_14254aa80(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_4c;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
  uVar4 = FUN_1424a5500(param_3);
  uVar4 = FUN_1424ebfe0(0,uVar4,param_4);
  uVar5 = FUN_1424ecc30(uVar4,"calendar",0,param_4);
  uVar3 = FUN_1424ec1c0(uVar5,uVar3,0,param_4);
  uVar6 = FUN_1424ec1c0(uVar3,"DateTimePatterns",0,param_4);
  iVar1 = *param_4;
  if (iVar1 == 2) {
    *param_4 = 0;
    uVar3 = FUN_1424ec1c0(uVar5,"gregorian",uVar3,param_4);
    uVar6 = FUN_1424ec1c0(uVar3,"DateTimePatterns",uVar6,param_4);
    iVar1 = *param_4;
  }
  if (iVar1 < 1) {
    local_4c = 0;
    iVar2 = FUN_1424eaf70(uVar6);
    iVar1 = 8;
    if (0xc < iVar2) {
      iVar1 = *(int *)(param_1 + 0x16c) + 5;
    }
    uVar7 = FUN_1424ebec0(uVar6,iVar1,&local_4c,param_4);
    local_48 = thunk_FUN_1424da030(0x40);
    if (local_48 != 0) {
      FUN_1424a7060(local_48,1,uVar7,local_4c);
    }
    FUN_1424ea9f0(uVar6);
    FUN_1424ea9f0(uVar3);
    FUN_1424ea9f0(uVar5);
    FUN_1424ea9f0(uVar4);
  }
  else {
    local_48 = thunk_FUN_1424da030(0x40);
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      FUN_1424a7000(local_48,L"{1} {0}",8);
    }
  }
  return local_48;
}



// FUNCTION 14254ac20 Unwind@14254ac20 body=48 status=ok
// SIG undefined Unwind@14254ac20(void)

void Unwind_14254ac20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14254ac50 Unwind@14254ac50 body=48 status=ok
// SIG undefined Unwind@14254ac50(void)

void Unwind_14254ac50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14254ac80 FUN_14254ac80 body=790 status=ok
// SIG undefined FUN_14254ac80(void)

longlong *
FUN_14254ac80(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  WCHAR local_238 [85];
  short asStack_18e [3];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined6 local_ee;
  undefined2 uStack_e8;
  ulonglong uStack_e6;
  char acStack_db [3];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  LPWSTR local_80;
  WCHAR *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1424bd6e0();
  *param_1 = (longlong)icu_64::Win32DateFormat::vftable;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x16c) = param_3;
  local_68 = param_1 + 0x2e;
  local_48 = param_1;
  FUN_1424a3ce0(local_68,param_4);
  plVar6 = local_48;
  local_48[0x4a] = (longlong)&PTR_FUN_149e18960;
  *(undefined2 *)(local_48 + 0x4b) = 2;
  local_48[0x53] = 0;
  if (*param_5 < 1) {
    local_60 = local_48 + 0x4a;
    local_4c = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_8b = 0;
    uStack_88 = 0;
    FUN_142505a90(*(undefined8 *)(param_4 + 0x28),&local_d8,0x55,0,&local_4c);
    if (local_4c < 1) {
      uStack_e8 = 0;
      uStack_e6 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      local_ee = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      lVar3 = 3;
      while( true ) {
        if (acStack_db[lVar3] == '\0') break;
        asStack_18e[lVar3] = (short)acStack_db[lVar3];
        if (lVar3 == 0x57) goto LAB_14254ae7b;
        if (acStack_db[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + -2;
LAB_14254ae63:
          uVar1 = (uint)lVar3;
          goto joined_r0x00014254ae79;
        }
        asStack_18e[lVar3 + 1] = (short)acStack_db[lVar3 + 1];
        if (acStack_db[lVar3 + 2] == '\0') {
          uVar1 = (int)lVar3 - 1;
          goto joined_r0x00014254ae79;
        }
        asStack_18e[lVar3 + 2] = (short)acStack_db[lVar3 + 2];
        if (*(char *)((longlong)&local_d8 + lVar3) == '\0') goto LAB_14254ae63;
        *(short *)((longlong)&local_188 + lVar3 * 2) = (short)*(char *)((longlong)&local_d8 + lVar3)
        ;
        lVar3 = lVar3 + 4;
      }
      uVar1 = (int)lVar3 - 3;
joined_r0x00014254ae79:
      if (uVar1 < 0x54) {
        *(undefined2 *)((longlong)&local_188 + (ulonglong)uVar1 * 2) = 0;
      }
      else {
LAB_14254ae7b:
        uStack_e6 = uStack_e6 & 0xffffffffffff;
      }
      local_238[0x50] = 0;
      local_238[0x51] = L'\0';
      local_238[0x52] = L'\0';
      local_238[0x53] = L'\0';
      local_238[0x54] = L'\0';
      local_238[0x48] = L'\0';
      local_238[0x49] = L'\0';
      local_238[0x4a] = L'\0';
      local_238[0x4b] = L'\0';
      local_238[0x4c] = 0;
      local_238[0x4d] = L'\0';
      local_238[0x4e] = L'\0';
      local_238[0x4f] = L'\0';
      local_238[0x40] = L'\0';
      local_238[0x41] = L'\0';
      local_238[0x42] = L'\0';
      local_238[0x43] = L'\0';
      local_238[0x44] = L'\0';
      local_238[0x45] = L'\0';
      local_238[0x46] = L'\0';
      local_238[0x47] = L'\0';
      local_238[0x38] = L'\0';
      local_238[0x39] = L'\0';
      local_238[0x3a] = L'\0';
      local_238[0x3b] = L'\0';
      local_238[0x3c] = L'\0';
      local_238[0x3d] = L'\0';
      local_238[0x3e] = L'\0';
      local_238[0x3f] = L'\0';
      local_238[0x30] = L'\0';
      local_238[0x31] = L'\0';
      local_238[0x32] = L'\0';
      local_238[0x33] = L'\0';
      local_238[0x34] = L'\0';
      local_238[0x35] = L'\0';
      local_238[0x36] = L'\0';
      local_238[0x37] = L'\0';
      local_238[0x28] = L'\0';
      local_238[0x29] = L'\0';
      local_238[0x2a] = L'\0';
      local_238[0x2b] = L'\0';
      local_238[0x2c] = L'\0';
      local_238[0x2d] = L'\0';
      local_238[0x2e] = L'\0';
      local_238[0x2f] = L'\0';
      local_238[0x20] = L'\0';
      local_238[0x21] = L'\0';
      local_238[0x22] = L'\0';
      local_238[0x23] = L'\0';
      local_238[0x24] = L'\0';
      local_238[0x25] = L'\0';
      local_238[0x26] = L'\0';
      local_238[0x27] = L'\0';
      local_238[0x18] = L'\0';
      local_238[0x19] = L'\0';
      local_238[0x1a] = L'\0';
      local_238[0x1b] = L'\0';
      local_238[0x1c] = L'\0';
      local_238[0x1d] = L'\0';
      local_238[0x1e] = L'\0';
      local_238[0x1f] = L'\0';
      local_238[0x10] = L'\0';
      local_238[0x11] = L'\0';
      local_238[0x12] = L'\0';
      local_238[0x13] = L'\0';
      local_238[0x14] = L'\0';
      local_238[0x15] = L'\0';
      local_238[0x16] = L'\0';
      local_238[0x17] = L'\0';
      local_238[8] = L'\0';
      local_238[9] = L'\0';
      local_238[10] = L'\0';
      local_238[0xb] = L'\0';
      local_238[0xc] = L'\0';
      local_238[0xd] = L'\0';
      local_238[0xe] = L'\0';
      local_238[0xf] = L'\0';
      local_238[0] = L'\0';
      local_238[1] = L'\0';
      local_238[2] = L'\0';
      local_238[3] = L'\0';
      local_238[4] = L'\0';
      local_238[5] = L'\0';
      local_238[6] = L'\0';
      local_238[7] = L'\0';
      iVar2 = ResolveLocaleName((LPCWSTR)&local_188,local_238,0x55);
      if (0 < iVar2) {
        lVar3 = thunk_FUN_1424da030(0x40);
        if (lVar3 != 0) {
          local_80 = local_238;
          local_58 = lVar3;
          FUN_1424a6c90(lVar3,local_238);
          local_70 = local_238;
          lVar3 = local_58;
          plVar6 = local_48;
        }
        plVar6[0x53] = lVar3;
      }
    }
    puVar4 = (undefined8 *)FUN_1424da030(0xac);
    plVar6[0x52] = (longlong)puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x9c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0xa4) = 0;
    uVar5 = FUN_1424cc3e0(param_4,param_5);
    (**(code **)(*local_48 + 0x80))(local_48,uVar5);
  }
  return local_48;
}



// FUNCTION 14254afa0 Unwind@14254afa0 body=67 status=ok
// SIG undefined Unwind@14254afa0(void)

void Unwind_14254afa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x208));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x200));
  return;
}



// FUNCTION 14254aff0 Unwind@14254aff0 body=55 status=ok
// SIG undefined Unwind@14254aff0(void)

void Unwind_14254aff0(undefined8 param_1,longlong param_2)

{
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x220));
  return;
}



// FUNCTION 14254b030 Unwind@14254b030 body=66 status=ok
// SIG undefined Unwind@14254b030(void)

void Unwind_14254b030(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x1f0) = param_2 + 0x30;
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x210));
  return;
}



// FUNCTION 14254b080 FUN_14254b080 body=260 status=ok
// SIG undefined FUN_14254b080(void)

longlong FUN_14254b080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  
  FUN_1424bd810();
  if (*(longlong *)(param_2 + 0x160) == 0) {
LAB_14254b0d1:
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_1424da030(0x40);
    if (lVar1 == 0) goto LAB_14254b0d1;
    FUN_1424a6be0(lVar1,*(undefined8 *)(param_2 + 0x160));
  }
  *(longlong *)(param_1 + 0x160) = lVar1;
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  FUN_1424a3d10(param_1 + 0x170,param_2 + 0x170);
  FUN_1424a7c80(param_1 + 0x250,param_2 + 0x250);
  _Dst = (void *)FUN_1424da030(0xac);
  *(void **)(param_1 + 0x290) = _Dst;
  memcpy(_Dst,*(void **)(param_2 + 0x290),0xac);
  if (*(longlong *)(param_2 + 0x298) != 0) {
    lVar1 = thunk_FUN_1424da030(0x40);
    if (lVar1 != 0) {
      FUN_1424a6be0(lVar1,*(undefined8 *)(param_2 + 0x298));
      goto LAB_14254b172;
    }
  }
  lVar1 = 0;
LAB_14254b172:
  *(longlong *)(param_1 + 0x298) = lVar1;
  return param_1;
}



// FUNCTION 14254b190 Unwind@14254b190 body=34 status=ok
// SIG undefined Unwind@14254b190(void)

void Unwind_14254b190(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14254b1c0 Unwind@14254b1c0 body=34 status=ok
// SIG undefined Unwind@14254b1c0(void)

void Unwind_14254b1c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14254b1f0 FUN_14254b1f0 body=145 status=ok
// SIG undefined FUN_14254b1f0(void)

undefined8 *
FUN_14254b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x2a0);
  puVar3 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424bd720(puVar1,param_1);
    *puVar3 = icu_64::Win32DateFormat::vftable;
    puVar2 = puVar1 + 0x2e;
    FUN_1424a3c00();
    puVar3[0x4a] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar3 + 0x4b) = 2;
    FUN_14254b080(puVar3,param_1,param_3,param_4,puVar2,puVar1 + 0x4a,puVar3,uVar4);
  }
  return puVar3;
}



// FUNCTION 14254b290 Unwind@14254b290 body=43 status=ok
// SIG undefined Unwind@14254b290(void)

void Unwind_14254b290(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14254b2c0 Unwind@14254b2c0 body=34 status=ok
// SIG undefined Unwind@14254b2c0(void)

void Unwind_14254b2c0(undefined8 param_1,longlong param_2)

{
  FUN_1424bd8b0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14254b2f0 Unwind@14254b2f0 body=34 status=ok
// SIG undefined Unwind@14254b2f0(void)

void Unwind_14254b2f0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14254b320 FUN_14254b320 body=605 status=ok
// SIG undefined FUN_14254b320(void)

undefined8 FUN_14254b320(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *_Str2;
  char *_Str1;
  double dVar3;
  TIME_ZONE_INFORMATION local_224;
  undefined1 local_178 [64];
  _SYSTEMTIME local_138;
  undefined **local_128;
  undefined2 local_120;
  undefined **local_e8;
  undefined2 local_e0;
  undefined **local_a8;
  undefined2 local_a0;
  FILETIME local_64;
  _SYSTEMTIME local_5c;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  memcpy(&local_224,*(void **)(param_1 + 0x290),0xac);
  local_4c = 0;
  uVar2 = FUN_1424ce780(param_2);
  FUN_14254b650(param_1,local_178,&local_224,uVar2);
  FUN_140859a90(local_178);
  dVar3 = (double)FUN_1424cd180(param_2,&local_4c);
  uVar2 = FUN_1425fc0c0((longlong)dVar3,2,&local_4c);
  local_64 = (FILETIME)FUN_1425fc110(uVar2,3,&local_4c);
  FileTimeToSystemTime(&local_64,&local_138);
  SystemTimeToTzSpecificLocalTime(&local_224,&local_138,&local_5c);
  if ((*(int *)(param_1 + 0x16c) == -1) || (*(int *)(param_1 + 0x168) == -1)) {
    if (*(int *)(param_1 + 0x16c) == -1) {
      if (*(int *)(param_1 + 0x168) != -1) {
        FUN_14254ba70(param_1,&local_5c,param_3);
      }
    }
    else {
      FUN_14254b8d0(param_1,&local_5c,param_3);
    }
  }
  else {
    local_128 = &PTR_FUN_149e18960;
    local_120 = 2;
    local_e8 = &PTR_FUN_149e18960;
    local_e0 = 2;
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    FUN_14254b8d0(param_1,&local_5c,&local_128);
    FUN_14254ba70(param_1,&local_5c,&local_e8);
    _Str2 = (char *)(**(code **)(*param_2 + 0xb0))(param_2);
    _Str1 = (char *)(**(code **)(**(longlong **)(param_1 + 0x148) + 0xb0))();
    iVar1 = strcmp(_Str1,_Str2);
    if (iVar1 != 0) {
      uVar2 = FUN_14254aa80(param_1,param_2,param_1 + 0x170,&local_4c);
    }
    local_a8 = &PTR_FUN_149e18960;
    local_a0 = 2;
    FUN_1425fb600(&local_a8,uVar2,2,2,&local_4c);
    FUN_1425fba70(&local_a8,&local_e8,&local_128,param_3,&local_4c);
    thunk_FUN_140859a90(&local_a8);
    FUN_140859a90(&local_e8);
    FUN_140859a90(&local_128);
  }
  return param_3;
}



// FUNCTION 14254b580 Unwind@14254b580 body=58 status=ok
// SIG undefined Unwind@14254b580(void)

void Unwind_14254b580(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(param_2 + 0x1b0);
  return;
}



// FUNCTION 14254b5c0 Unwind@14254b5c0 body=70 status=ok
// SIG undefined Unwind@14254b5c0(void)

void Unwind_14254b5c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x170);
  FUN_140859a90(param_2 + 0x130);
  return;
}



// FUNCTION 14254b610 Unwind@14254b610 body=58 status=ok
// SIG undefined Unwind@14254b610(void)

void Unwind_14254b610(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1b0);
  return;
}



// FUNCTION 14254b650 FUN_14254b650 body=478 status=ok
// SIG undefined FUN_14254b650(void)

undefined8 *
FUN_14254b650(longlong param_1,undefined8 *param_2,LPTIME_ZONE_INFORMATION param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 local_d8 [8];
  short local_d0;
  undefined1 local_ce [2];
  int local_cc;
  undefined1 *local_c0;
  undefined **local_98;
  ushort local_90;
  undefined1 local_8e [2];
  int local_8c;
  undefined1 *local_80;
  LPTIME_ZONE_INFORMATION local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  local_58 = param_3;
  local_50 = param_2;
  FUN_1424a7c80(param_2,param_4 + 8);
  uVar1 = *(ushort *)(param_1 + 600);
  uVar2 = *(ushort *)(local_50 + 1);
  if ((uVar1 & 1) != 0) {
    if ((uVar2 & 1) != 0) {
      return local_50;
    }
    goto LAB_14254b731;
  }
  if ((short)uVar2 < 0) {
    iVar5 = *(int *)((longlong)local_50 + 0xc);
    if (-1 < (short)uVar1) goto LAB_14254b6c2;
LAB_14254b6e6:
    uVar6 = *(uint *)(param_1 + 0x25c);
  }
  else {
    iVar5 = (int)(short)uVar2 >> 5;
    if ((short)uVar1 < 0) goto LAB_14254b6e6;
LAB_14254b6c2:
    uVar6 = (int)(short)uVar1 >> 5;
  }
  uVar7 = uVar6;
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  if ((uVar1 & 2) == 0) {
    param_1 = *(longlong *)(param_1 + 0x268);
  }
  else {
    param_1 = param_1 + 0x25a;
  }
  cVar4 = FUN_1424a7e30(local_50,0,iVar5,param_1,(int)uVar6 >> 0x1f & uVar6,uVar7);
  if (cVar4 == '\0') {
    return local_50;
  }
LAB_14254b731:
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  FUN_1424a7c80(&local_98,param_4 + 8);
  if (-1 < (short)local_90) {
    local_8c = (int)(short)local_90 >> 5;
  }
  if ((local_90 & 0x11) == 0) {
    if ((local_90 & 2) != 0) {
      local_80 = local_8e;
    }
  }
  else {
    local_80 = (undefined1 *)0x0;
  }
  cVar4 = FUN_1425fc1f0(local_58,local_80,local_8c);
  if (cVar4 == '\0') {
    iVar5 = FUN_1424b8170(&local_98);
    iVar9 = 0;
    do {
      if (iVar5 <= iVar9) {
        GetTimeZoneInformation(local_58);
        break;
      }
      FUN_1424b8360(local_d8,&local_98,iVar9);
      uVar6 = (uint)local_d0;
      iVar3 = local_cc;
      if (-1 < local_d0) {
        iVar3 = (int)uVar6 >> 5;
      }
      puVar8 = local_ce;
      if ((uVar6 & 2) == 0) {
        puVar8 = local_c0;
      }
      if ((uVar6 & 0x11) != 0) {
        puVar8 = (undefined1 *)0x0;
      }
      cVar4 = FUN_1425fc1f0(local_58,puVar8,iVar3);
      FUN_140859a90(local_d8);
      iVar9 = iVar9 + 1;
    } while (cVar4 == '\0');
  }
  FUN_140859a90(&local_98);
  return local_50;
}



// FUNCTION 14254b850 Unwind@14254b850 body=55 status=ok
// SIG undefined Unwind@14254b850(void)

void Unwind_14254b850(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0xb8));
  return;
}



// FUNCTION 14254b890 Unwind@14254b890 body=55 status=ok
// SIG undefined Unwind@14254b890(void)

void Unwind_14254b890(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 14254b8d0 FUN_14254b8d0 body=344 status=ok
// SIG undefined FUN_14254b8d0(void)

void FUN_14254b8d0(longlong param_1,SYSTEMTIME *param_2,undefined8 param_3)

{
  int iVar1;
  DWORD DVar2;
  LPCWSTR lpLocaleName;
  LPWSTR lpDateStr;
  size_t sVar3;
  WCHAR local_e8 [64];
  LPCWSTR local_68;
  WCHAR *local_58;
  WCHAR *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x298) == 0) {
    lpLocaleName = (LPCWSTR)0x0;
  }
  else {
    lpLocaleName = (LPCWSTR)FUN_1424a8e50();
    local_68 = lpLocaleName;
  }
  lpDateStr = local_e8;
  iVar1 = GetDateFormatEx(lpLocaleName,
                          *(DWORD *)(L"{1} {0}" + (longlong)*(int *)(param_1 + 0x16c) * 2),param_2,
                          (LPCWSTR)0x0,lpDateStr,0x40,(LPCWSTR)0x0);
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      iVar1 = GetDateFormatEx(lpLocaleName,
                              *(DWORD *)(L"{1} {0}" + (longlong)*(int *)(param_1 + 0x16c) * 2),
                              param_2,(LPCWSTR)0x0,(LPWSTR)0x0,0,(LPCWSTR)0x0);
      lpDateStr = (LPWSTR)FUN_1424da030((longlong)iVar1 * 2);
      GetDateFormatEx(lpLocaleName,*(DWORD *)(L"{1} {0}" + (longlong)*(int *)(param_1 + 0x16c) * 2),
                      param_2,(LPCWSTR)0x0,lpDateStr,iVar1,(LPCWSTR)0x0);
    }
  }
  local_50 = lpDateStr;
  sVar3 = wcslen(lpDateStr);
  FUN_1424a6cf0(param_3,lpDateStr,0,sVar3 & 0xffffffff);
  local_58 = local_50;
  if (local_50 != local_e8) {
    FUN_1424da110();
  }
  return;
}



// FUNCTION 14254ba30 Unwind@14254ba30 body=53 status=ok
// SIG undefined Unwind@14254ba30(void)

void Unwind_14254ba30(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xd8);
  return;
}



// FUNCTION 14254ba70 FUN_14254ba70 body=310 status=ok
// SIG undefined FUN_14254ba70(void)

void FUN_14254ba70(longlong param_1,SYSTEMTIME *param_2,undefined8 param_3)

{
  int iVar1;
  DWORD DVar2;
  LPCWSTR lpLocaleName;
  LPWSTR lpTimeStr;
  size_t sVar3;
  WCHAR local_e8 [64];
  LPCWSTR local_68;
  WCHAR *local_58;
  WCHAR *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x298) == 0) {
    lpLocaleName = (LPCWSTR)0x0;
  }
  else {
    lpLocaleName = (LPCWSTR)FUN_1424a8e50();
    local_68 = lpLocaleName;
  }
  lpTimeStr = local_e8;
  iVar1 = GetTimeFormatEx(lpLocaleName,
                          *(DWORD *)(&DAT_1499e0240 + (longlong)*(int *)(param_1 + 0x168) * 4),
                          param_2,(LPCWSTR)0x0,lpTimeStr,0x40);
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      iVar1 = GetTimeFormatEx(lpLocaleName,
                              *(DWORD *)(&DAT_1499e0240 + (longlong)*(int *)(param_1 + 0x168) * 4),
                              param_2,(LPCWSTR)0x0,(LPWSTR)0x0,0);
      lpTimeStr = (LPWSTR)FUN_1424da030((longlong)iVar1 * 2);
      GetTimeFormatEx(lpLocaleName,
                      *(DWORD *)(&DAT_1499e0240 + (longlong)*(int *)(param_1 + 0x168) * 4),param_2,
                      (LPCWSTR)0x0,lpTimeStr,iVar1);
    }
  }
  local_50 = lpTimeStr;
  sVar3 = wcslen(lpTimeStr);
  FUN_1424a6cf0(param_3,lpTimeStr,0,sVar3 & 0xffffffff);
  local_58 = local_50;
  if (local_50 != local_e8) {
    FUN_1424da110();
  }
  return;
}



// FUNCTION 14254bbb0 Unwind@14254bbb0 body=53 status=ok
// SIG undefined Unwind@14254bbb0(void)

void Unwind_14254bbb0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_2 + 200);
  return;
}



// FUNCTION 14254bbf0 FUN_14254bbf0 body=9 status=ok
// SIG undefined FUN_14254bbf0(void)

void FUN_14254bbf0(void)

{
  longlong in_R9;
  
  *(undefined4 *)(in_R9 + 0xc) = *(undefined4 *)(in_R9 + 8);
  return;
}



// FUNCTION 14254bc00 FUN_14254bc00 body=264 status=ok
// SIG undefined FUN_14254bc00(void)

void FUN_14254bc00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *_Str2;
  char *_Str1;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined4 local_60 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    _Str2 = (char *)(**(code **)(*param_2 + 0xb0))(param_2);
    _Str1 = (char *)(**(code **)(**(longlong **)(param_1 + 0x148) + 0xb0))();
    iVar2 = strcmp(_Str1,_Str2);
    if (iVar2 == 0) goto LAB_14254bca2;
  }
  local_60[0] = 0;
  if ((*(int *)(param_1 + 0x16c) != -1) && (*(int *)(param_1 + 0x168) != -1)) {
    puVar1 = *(undefined8 **)(param_1 + 0x160);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    uVar3 = FUN_14254aa80(param_1,param_2,param_1 + 0x170,local_60);
    *(undefined8 *)(param_1 + 0x160) = uVar3;
  }
LAB_14254bca2:
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(longlong **)(param_1 + 0x148) = param_2;
  uVar3 = FUN_1424ce780(param_2);
  FUN_14254b650(param_1,local_60,*(undefined8 *)(param_1 + 0x290),uVar3);
  FUN_1424a7ca0(param_1 + 0x250,local_60);
  FUN_140859a90(local_60);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 14254bd20 FUN_14254bd20 body=41 status=ok
// SIG undefined FUN_14254bd20(void)

void FUN_14254bd20(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014254bd46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1,uVar1,*(code **)(*param_1 + 0x80));
  return;
}



// FUNCTION 14254bd50 FUN_14254bd50 body=102 status=ok
// SIG undefined FUN_14254bd50(void)

void FUN_14254bd50(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14254b650(param_1,local_60,*(undefined8 *)(param_1 + 0x290),param_2);
  FUN_1424a7ca0(param_1 + 0x250,local_60);
  FUN_140859a90(local_60);
  FUN_1424ccee0(*(undefined8 *)(param_1 + 0x148),param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 14254bdc0 FUN_14254bdc0 body=102 status=ok
// SIG undefined FUN_14254bdc0(void)

void FUN_14254bdc0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14254b650(param_1,local_60,*(undefined8 *)(param_1 + 0x290),param_2);
  FUN_1424a7ca0(param_1 + 0x250,local_60);
  FUN_140859a90(local_60);
  FUN_14153dfe0(*(undefined8 *)(param_1 + 0x148),param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 14254be30 FUN_14254be30 body=131 status=ok
// SIG undefined FUN_14254be30(void)

undefined8 * FUN_14254be30(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Win32DateFormat::vftable;
  FUN_1424da110(param_1[0x52]);
  puVar1 = (undefined8 *)param_1[0x2c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x53];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x4a);
  FUN_1414b3f60(param_1 + 0x2e);
  FUN_1424bd8b0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14254bec0 FUN_14254bec0 body=8 status=ok
// SIG undefined FUN_14254bec0(void)

undefined * FUN_14254bec0(void)

{
  return &DAT_14c793328;
}



// FUNCTION 14254bed0 FUN_14254bed0 body=235 status=ok
// SIG undefined FUN_14254bed0(void)

void FUN_14254bed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = icu_64::SimpleDateFormat::vftable;
  lVar1 = param_1[0x60];
  if (lVar1 != 0) {
    FUN_1425fc660(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = param_1[100];
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_142537ca0();
        *(undefined8 *)(lVar1 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x26);
    FUN_1424da110(lVar1);
  }
  puVar2 = (undefined8 *)param_1[0x61];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1,param_3,param_4,uVar4);
  }
  FUN_14254bfe0(param_1);
  puVar2 = (undefined8 *)param_1[0x6b];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1414b3f60(param_1 + 0x44);
  FUN_140859a90(param_1 + 0x3c);
  FUN_140859a90(param_1 + 0x34);
  FUN_140859a90(param_1 + 0x2c);
  FUN_1424bd8b0(param_1);
  return;
}



// FUNCTION 14254bfc0 Unwind@14254bfc0 body=22 status=ok
// SIG undefined Unwind@14254bfc0(void)

void Unwind_14254bfc0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14254bfe0 FUN_14254bfe0 body=181 status=ok
// SIG undefined FUN_14254bfe0(void)

void FUN_14254bfe0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x328);
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x330);
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x340);
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x348);
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
  }
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  return;
}



// FUNCTION 14254c0a0 FUN_14254c0a0 body=1860 status=ok
// SIG undefined FUN_14254c0a0(void)

void FUN_14254c0a0(longlong param_1,int param_2,int param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char *_Str1;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_1a8 [64];
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  uVar3 = FUN_1424b77f0();
  plVar4 = (longlong *)FUN_1424cc240(uVar3,param_4,param_5);
  *(longlong **)(param_1 + 0x148) = plVar4;
  if (0 < *param_5) {
    return;
  }
  if (plVar4 == (longlong *)0x0) {
    _Str1 = (char *)0x0;
  }
  else {
    _Str1 = (char *)(**(code **)(*plVar4 + 0xb0))(plVar4);
  }
  uVar3 = FUN_1424a5500(param_4);
  lVar5 = FUN_1424ebfe0(0,uVar3,param_5);
  if (0 < *param_5) goto LAB_14254c347;
  if ((_Str1 == (char *)0x0) || (iVar1 = strcmp(_Str1,"gregorian"), iVar1 == 0)) {
    *param_5 = 0;
    lVar7 = FUN_1424ec1c0(lVar5,"calendar/gregorian/DateTimePatterns",0,param_5);
LAB_14254c2a4:
    iVar1 = *param_5;
  }
  else {
    local_78 = 0;
    local_68 = lVar5;
    FUN_1425038b0(&local_e8,"calendar/");
    local_b8 = (longlong)&local_ac + 1;
    local_b0 = 0x28;
    local_ac = 0;
    local_80 = 0;
    FUN_142503520(&local_b8,local_e8,local_e0,param_5);
    FUN_1425038b0(&local_d8,_Str1);
    uVar3 = FUN_142503520(&local_b8,local_d8,local_d0,param_5);
    FUN_1425038b0(&local_c8,"/DateTimePatterns");
    FUN_142503520(uVar3,local_c8,local_c0,param_5);
    lVar5 = local_68;
    lVar6 = FUN_1424ec1c0(local_68,local_b8,0,param_5);
    if ((char)local_ac != '\0') {
      FUN_1424da110(local_b8);
    }
    iVar1 = *param_5;
    lVar7 = lVar6;
    if (iVar1 == 2) {
      *param_5 = 0;
      lVar7 = FUN_1424ec1c0(lVar5,"calendar/gregorian/DateTimePatterns",0,param_5);
      if (lVar6 != 0) {
        FUN_1424ea9f0();
      }
      goto LAB_14254c2a4;
    }
  }
  if (iVar1 < 1) {
    iVar1 = FUN_1424eaf70(lVar7);
    if (iVar1 < 9) {
      *param_5 = 3;
    }
    else {
      local_68 = lVar5;
      uVar3 = FUN_1424ed0b0(lVar7,0,param_5);
      local_60 = lVar7;
      uVar8 = FUN_1424ed0b0(lVar7,1,param_5);
      local_58 = 0;
      FUN_142537c10(param_1,uVar8,uVar3);
      local_58 = 0;
      lVar6 = FUN_1425fc7b0(param_4,param_5);
      *(longlong *)(param_1 + 0x300) = lVar6;
      lVar7 = local_60;
      lVar5 = local_68;
      if (*param_5 < 1) {
        if (lVar6 == 0) {
          *param_5 = 7;
        }
        else {
          local_50 = 0;
          lVar5 = param_1 + 0x1a0;
          local_58 = 0;
          FUN_1424a7130(lVar5);
          local_58 = 0;
          FUN_1424a7130(param_1 + 0x1e0);
          if ((param_2 == -1) || (param_3 == -1)) {
            if (param_2 == -1) {
              if (param_3 == -1) {
                *param_5 = 3;
                lVar6 = 0;
              }
              else {
                lVar6 = FUN_1424ebd50(local_60,param_3,0,param_5);
                if (0 < *param_5) goto LAB_14254c494;
                iVar1 = FUN_1424eaf40(lVar6);
                if (iVar1 == 8) {
                  uVar3 = FUN_1424ebec0(lVar6,0,&local_4c,param_5);
                  uVar8 = FUN_1424ebec0(lVar6,1,&local_50,param_5);
                  local_58 = lVar6;
                  FUN_1424a8f10(lVar5,1,uVar8,local_50);
                }
                else {
                  if (iVar1 != 0) goto LAB_14254c494;
                  uVar3 = FUN_1424eae00(lVar6,&local_4c,param_5);
                }
                local_58 = lVar6;
                FUN_1424a8f10(param_1 + 0x160,1,uVar3,local_4c);
              }
            }
            else {
              lVar6 = FUN_1424ebd50(local_60,param_2,0,param_5);
              if (0 < *param_5) goto LAB_14254c494;
              iVar1 = FUN_1424eaf40(lVar6);
              if (iVar1 == 8) {
                uVar3 = FUN_1424ebec0(lVar6,0,&local_4c,param_5);
                uVar8 = FUN_1424ebec0(lVar6,1,&local_50,param_5);
                local_58 = lVar6;
                FUN_1424a8f10(lVar5,1,uVar8,local_50);
              }
              else {
                if (iVar1 != 0) goto LAB_14254c494;
                uVar3 = FUN_1424eae00(lVar6,&local_4c,param_5);
              }
              local_58 = lVar6;
              FUN_1424a8f10(param_1 + 0x160,1,uVar3,local_4c);
            }
LAB_14254c7ab:
            local_58 = lVar6;
            FUN_14254ca50(param_1,param_4,param_5);
          }
          else {
            lVar6 = FUN_1424ebd50(local_60,param_2,0,param_5);
            if (*param_5 < 1) {
              iVar1 = FUN_1424eaf40(lVar6);
              if (iVar1 == 8) {
                local_70 = FUN_1424ebec0(lVar6,0,&local_4c,param_5);
                uVar3 = FUN_1424ebec0(lVar6,1,&local_50,param_5);
                local_58 = lVar6;
                FUN_1424a8f10(param_1 + 0x1e0,1,uVar3,local_50);
                lVar7 = local_70;
              }
              else {
                if (iVar1 != 0) goto LAB_14254c494;
                lVar7 = FUN_1424eae00(lVar6,&local_4c,param_5);
              }
              local_58 = lVar6;
              FUN_1424a7060(&local_b8,1,lVar7,local_4c);
              local_70 = FUN_1424ebd50(local_60,param_3,0,param_5);
              if (lVar6 != 0) {
                FUN_1424ea9f0(lVar6);
              }
              lVar6 = local_70;
              if (*param_5 < 1) {
                iVar1 = FUN_1424eaf40(local_70);
                if (iVar1 == 8) {
                  uVar3 = FUN_1424ebec0(lVar6,0,&local_4c,param_5);
                  uVar8 = FUN_1424ebec0(lVar6,1,&local_50,param_5);
                  FUN_1424a8f10(lVar5,1,uVar8,local_50);
                }
                else {
                  if (iVar1 != 0) goto LAB_14254c552;
                  uVar3 = FUN_1424eae00(lVar6,&local_4c,param_5);
                }
                FUN_1424a7060(local_1a8,1,uVar3,local_4c);
                lVar5 = local_60;
                iVar2 = FUN_1424eaf70(local_60);
                iVar1 = 8;
                if (0xc < iVar2) {
                  iVar1 = param_3 + 5;
                }
                uVar3 = FUN_1424ebec0(lVar5,iVar1,&local_4c,param_5);
                FUN_1424a7060(local_128,1,uVar3,local_4c);
                FUN_14254e7e0(local_168,local_128,2,2,param_5);
                FUN_1425fba70(local_168,&local_b8,local_1a8,param_1 + 0x160,param_5);
                thunk_FUN_140859a90(local_168);
                FUN_140859a90(local_128);
                FUN_140859a90(local_1a8);
                FUN_140859a90(&local_b8);
                lVar6 = local_70;
                goto LAB_14254c7ab;
              }
LAB_14254c552:
              *param_5 = 3;
              FUN_140859a90(&local_b8);
            }
            else {
LAB_14254c494:
              *param_5 = 3;
            }
          }
          lVar7 = local_60;
          lVar5 = local_68;
          if (lVar6 != 0) {
            FUN_1424ea9f0(lVar6);
          }
        }
      }
    }
  }
  if (lVar7 != 0) {
    FUN_1424ea9f0(lVar7);
  }
LAB_14254c347:
  if (lVar5 != 0) {
    FUN_1424ea9f0(lVar5);
  }
  return;
}



// FUNCTION 14254c7f0 Unwind@14254c7f0 body=55 status=ok
// SIG undefined Unwind@14254c7f0(void)

void Unwind_14254c7f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 14254c830 Unwind@14254c830 body=55 status=ok
// SIG undefined Unwind@14254c830(void)

void Unwind_14254c830(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 14254c870 Unwind@14254c870 body=55 status=ok
// SIG undefined Unwind@14254c870(void)

void Unwind_14254c870(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14254c8b0 Unwind@14254c8b0 body=71 status=ok
// SIG undefined Unwind@14254c8b0(void)

void Unwind_14254c8b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_2 + 0x168);
  return;
}



// FUNCTION 14254c900 Unwind@14254c900 body=77 status=ok
// SIG undefined Unwind@14254c900(void)

void Unwind_14254c900(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 300) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x120));
  }
  *(undefined8 *)(param_2 + 0x160) = 0;
  return;
}



// FUNCTION 14254c950 Unwind@14254c950 body=76 status=ok
// SIG undefined Unwind@14254c950(void)

void Unwind_14254c950(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x180) != 0) {
    FUN_1424ea9f0();
  }
  *(undefined8 *)(param_2 + 0x160) = *(undefined8 *)(param_2 + 0x178);
  return;
}



// FUNCTION 14254c9a0 Unwind@14254c9a0 body=77 status=ok
// SIG undefined Unwind@14254c9a0(void)

void Unwind_14254c9a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 300) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x120));
  }
  *(undefined8 *)(param_2 + 0x160) = 0;
  return;
}



// FUNCTION 14254c9f0 Unwind@14254c9f0 body=85 status=ok
// SIG undefined Unwind@14254c9f0(void)

void Unwind_14254c9f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x160) != 0) {
    FUN_1424ea9f0();
  }
  if (*(longlong *)(param_2 + 0x170) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x170));
  }
  return;
}



// FUNCTION 14254ca50 FUN_14254ca50 body=513 status=ok
// SIG undefined FUN_14254ca50(void)

void FUN_14254ca50(longlong param_1,undefined8 param_2,int *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  char *_Str1;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (*param_3 < 1) {
    *(undefined2 *)(param_1 + 0x318) = 0;
    *(undefined1 *)(param_1 + 0x31a) = 0;
    sVar1 = *(short *)(param_1 + 0x168);
    if (sVar1 < 0) {
      uVar9 = *(uint *)(param_1 + 0x16c);
    }
    else {
      uVar9 = (int)sVar1 >> 5;
    }
    if (0 < (int)uVar9) {
      if (((int)sVar1 & 2U) == 0) {
        lVar6 = *(longlong *)(param_1 + 0x178);
      }
      else {
        lVar6 = param_1 + 0x16a;
      }
      bVar2 = false;
      uVar10 = 0;
      bVar3 = false;
      do {
        sVar1 = *(short *)(lVar6 + uVar10 * 2);
        bVar4 = !bVar3;
        if (sVar1 != 0x27) {
          bVar4 = bVar3;
        }
        bVar3 = bVar4;
        if (sVar1 == 0x5e74) {
          *(undefined1 *)(param_1 + 0x31a) = 1;
          bVar2 = true;
        }
        if (!bVar3) {
          if (sVar1 == 0x73) {
            *(undefined1 *)(param_1 + 0x319) = 1;
          }
          else if (sVar1 == 0x6d) {
            *(undefined1 *)(param_1 + 0x318) = 1;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      if ((((*(byte *)(param_1 + 0x1a8) & 1) != 0) && (bVar2)) &&
         (*(longlong **)(param_1 + 0x148) != (longlong *)0x0)) {
        _Str1 = (char *)(**(code **)(**(longlong **)(param_1 + 0x148) + 0xb0))();
        iVar5 = strcmp(_Str1,"japanese");
        if ((iVar5 == 0) &&
           (*(char *)(param_1 + 0x22a) == '\0' && *(short *)(param_1 + 0x228) == 0x616a)) {
          FUN_1424b9350(param_1 + 0x1a0,L"y=jpanyear",0xffffffff);
        }
      }
    }
    plVar7 = (longlong *)FUN_140236d20(param_2,param_3);
    *(longlong **)(param_1 + 0x150) = plVar7;
    if ((plVar7 != (longlong *)0x0) && (*param_3 < 1)) {
      (**(code **)(*plVar7 + 200))(plVar7,0);
      plVar8 = (longlong *)
               __RTDynamicCast(plVar7,0,&icu_64::NumberFormat::RTTI_Type_Descriptor,
                               &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x208))(plVar8,0);
      }
      (**(code **)(*plVar7 + 0xb0))(plVar7,1);
      (**(code **)(*plVar7 + 0xe8))(plVar7,0);
      FUN_14254e840(param_1,param_2,param_3);
      FUN_14254e380(param_1,param_3);
      return;
    }
    if (*param_3 < 1) {
      *param_3 = 2;
    }
  }
  return;
}


