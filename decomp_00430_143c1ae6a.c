// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c1ae6a FUN_143c1ae6a body=21 status=ok
// SIG undefined FUN_143c1ae6a(void)

undefined8 FUN_143c1ae6a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143c1ae7f FUN_143c1ae7f body=230 status=ok
// SIG undefined FUN_143c1ae7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1ae7f(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = -0x7ffffffeb50344d4;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464aa3e6(&local_28);
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cb53104);
  if (cVar1 == '\0') {
    _DAT_14cb53104 = 0;
    uRam000000014cb5310c = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb53118);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb53118,4000);
  atexit((_func_5014 *)&LAB_143c1ab25);
  DAT_14cb53140 = 0;
  _DAT_14cb53148 = 0;
  atexit((_func_5014 *)&LAB_143c1ab33);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1af84 FUN_143c1af84 body=70 status=ok
// SIG undefined FUN_143c1af84(void)

undefined8 FUN_143c1af84(wchar_t *param_1)

{
  BOOL BVar1;
  size_t sVar2;
  HMODULE hLibModule;
  undefined4 extraout_var;
  
  if ((param_1 != (wchar_t *)0x0) && (sVar2 = wcslen(param_1), (int)sVar2 != 0)) {
    FUN_1458f4e7e();
    hLibModule = (HMODULE)FUN_14155261e(param_1);
    FUN_145be8020();
    if (hLibModule != (HMODULE)0x0) {
      BVar1 = FreeLibrary(hLibModule);
      return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143c1afca FUN_143c1afca body=94 status=ok
// SIG undefined FUN_143c1afca(void)

bool FUN_143c1afca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D11CreateContext");
  *(longlong *)(param_1 + 0x50) = lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D11Execute");
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (lVar1 != 0) {
      lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D11Init");
      *(longlong *)(param_1 + 0x60) = lVar1;
      return lVar1 != 0;
    }
  }
  return false;
}



// FUNCTION 143c1b028 FUN_143c1b028 body=119 status=ok
// SIG undefined FUN_143c1b028(void)

bool FUN_143c1b028(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D12BuildPipelines");
  *(longlong *)(param_1 + 0x50) = lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D12CreateContext");
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (lVar1 != 0) {
      lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D12Execute");
      *(longlong *)(param_1 + 0x60) = lVar1;
      if (lVar1 != 0) {
        lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessD3D12Init");
        *(longlong *)(param_1 + 0x68) = lVar1;
        return lVar1 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 143c1b0a0 FUN_143c1b0a0 body=144 status=ok
// SIG undefined FUN_143c1b0a0(void)

bool FUN_143c1b0a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessVKCreateContext");
  *(longlong *)(param_1 + 0x58) = lVar1;
  if (lVar1 != 0) {
    lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessVKBuildPipelines");
    *(longlong *)(param_1 + 0x50) = lVar1;
    if (lVar1 != 0) {
      lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessVKExecute");
      *(longlong *)(param_1 + 0x60) = lVar1;
      if (lVar1 != 0) {
        lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessVKGetRequiredInstanceExtensions"
                             );
        *(longlong *)(param_1 + 0x68) = lVar1;
        if (lVar1 != 0) {
          lVar1 = FUN_14170ce66(*(undefined8 *)(param_1 + 0x30),L"xessVKInit");
          *(longlong *)(param_1 + 0x70) = lVar1;
          return lVar1 != 0;
        }
      }
    }
  }
  return false;
}



// FUNCTION 143c1b130 FUN_143c1b130 body=125 status=ok
// SIG undefined FUN_143c1b130(void)

void FUN_143c1b130(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb53158 = 0;
  atexit((_func_5014 *)&LAB_143c1af68);
  local_28 = 0x800000014afcbf10;
  local_14 = 7;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464aa54a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1b1c8 FUN_143c1b1c8 body=1650 status=ok
// SIG undefined FUN_143c1b1c8(void)

ulonglong FUN_143c1b1c8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  double dVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char cVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_158 [32];
  int *local_138;
  longlong *local_130;
  undefined8 *local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_95;
  undefined1 local_93;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar4 = *(ulonglong *)(param_4 + 0x30f8);
  uVar5 = *(ulonglong *)(param_4 + 0x3100);
  local_108 = uVar4;
  local_100 = uVar5;
  if (param_7 != '\0') {
    fVar19 = *(float *)(*(longlong *)(param_4 + 8) + 0x110);
    fVar18 = (float)(*(int *)(param_4 + 0x4e4) - *(int *)(param_4 + 0x4dc)) * fVar19 *
             *(float *)(param_4 + 0x45c);
    fVar19 = (float)(*(int *)(param_4 + 0x4e0) - *(int *)(param_4 + 0x4d8)) * fVar19 *
             *(float *)(param_4 + 0x45c);
    local_100 = CONCAT44(-((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1),
                         -((int)ROUND(-0.5 - (fVar19 + fVar19)) >> 1));
    local_108 = DAT_14c967818;
  }
  local_b0 = DAT_14ca83a40;
  uStack_c0 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_b8 = DAT_14ca83a38;
  uStack_b4 = DAT_14ca83a3c;
  local_110 = local_100 >> 0x20;
  local_118 = local_108 >> 0x20;
  iVar17 = (int)(local_100 >> 0x20) - (int)(local_108 >> 0x20);
  iVar16 = (int)local_100 - (int)local_108;
  local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_96 = 0;
  local_c8 = &DAT_00020008;
  local_95 = 0xf;
  local_9c = 0x10001;
  local_98 = 0x101;
  local_a8 = 0;
  local_93 = 0xff;
  local_a4 = DAT_14ca84e40;
  if (iVar16 < DAT_14ca84e40) {
    local_a4 = iVar16;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  local_a0 = DAT_14ca84e40;
  if (iVar17 < DAT_14ca84e40) {
    local_a0 = iVar17;
  }
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar12 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar12 + 0x120;
  local_130 = plVar1;
  local_128 = (undefined8 *)param_3;
  local_120 = param_4;
  local_f8 = param_2;
  if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
    FUN_140023dd8(plVar1,0x128);
    uVar12 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar8 = uVar12 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar12,param_5,&local_c8,1);
  iVar14 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar14 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar14);
  }
  plVar1 = local_130;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar14 * 8) = uVar12;
  *(int *)(uVar12 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar13 + 0x10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_130,0x90);
    puVar13 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar13 + 0x10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar13 = &PTR_FUN_14afcc4e8;
  *(undefined4 *)(puVar13 + 2) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x14) = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar13 + 4) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0;
  *(undefined4 *)(puVar13 + 5) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = 0x3f800000;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  *(undefined1 *)(puVar13 + 9) = 1;
  *(undefined4 *)(puVar13 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar13 + 100) = 0;
  *(undefined4 *)(puVar13 + 0xd) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x6c) = 0x3f800000;
  puVar13[0xf] = 0;
  iVar14 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar14 + 1U;
  local_f0 = uVar12;
  if (*(uint *)(param_1 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar14 * 8) = puVar13;
  lVar9 = FUN_1447e4f80();
  uVar8 = local_f0;
  plVar1 = local_130;
  cVar11 = '\x02';
  if (*(char *)(lVar9 + 0x41) != '\x03') {
    cVar11 = *(char *)(lVar9 + 0x41);
  }
  puVar13[8] = *(undefined8 *)(local_120 + 0x18);
  *(char *)(puVar13 + 9) = cVar11;
  iVar14 = (int)(uVar4 >> 0x20);
  fVar18 = (float)((int)(uVar5 >> 0x20) - iVar14);
  puVar13[6] = local_f8;
  puVar13[7] = local_128;
  *(float *)(puVar13 + 2) = (float)iVar16;
  *(float *)((longlong)puVar13 + 0x14) = (float)iVar17;
  *(float *)(puVar13 + 3) = 1.0 / (float)iVar16;
  *(float *)((longlong)puVar13 + 0x1c) = 1.0 / (float)iVar17;
  *(float *)(puVar13 + 4) = (float)(int)local_108;
  *(float *)((longlong)puVar13 + 0x24) = (float)(int)local_118;
  *(float *)(puVar13 + 5) = (float)(int)local_100;
  *(float *)((longlong)puVar13 + 0x2c) = (float)(int)local_110;
  dVar2 = *(double *)(local_120 + 0x125a8);
  *(float *)(puVar13 + 0xe) = (float)*(double *)(local_120 + 0x125a0);
  *(float *)((longlong)puVar13 + 0x74) = (float)dVar2;
  *(float *)(puVar13 + 10) = (float)(int)uVar4;
  *(float *)((longlong)puVar13 + 0x54) = (float)iVar14;
  fVar19 = (float)((int)uVar5 - (int)uVar4);
  *(float *)(puVar13 + 0xc) = fVar19;
  *(float *)((longlong)puVar13 + 100) = fVar18;
  *(float *)(puVar13 + 0xd) = 1.0 / fVar19;
  *(float *)((longlong)puVar13 + 0x6c) = 1.0 / fVar18;
  uVar3 = *(undefined1 *)(local_f0 + 0x94);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar15 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_130,0x50);
    puVar15 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar10 = puVar15 + 9;
  }
  local_128 = puVar13 + 2;
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar15[1] = *(undefined8 *)(uVar8 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar15 + 5) = 0;
  *puVar15 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar15 + 6) = uVar3;
  *(undefined1 *)(puVar15 + 7) = 0;
  *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
  puVar15[8] = uVar8;
  iVar14 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar14 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar14);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar14 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar13[0xf] = puVar15;
  uVar6 = *(undefined8 *)(local_120 + 0x13818);
  FUN_145f6f0d4();
  FUN_1448e935e(uVar6,&local_c8,&DAT_14cb531e0,param_7);
  FUN_145f6f0d4();
  puVar7 = local_c8;
  local_d8 = local_c8;
  local_d0 = uStack_c0;
  FUN_145f6f342();
  puVar10 = local_128;
  local_c8 = (undefined1 *)0x0;
  uStack_c0 = 0;
  FUN_1448f70da(puVar7,&DAT_14cb533d0,local_128,&local_c8);
  local_e0 = iVar17 + 0xe;
  if (-1 < iVar17 + 7) {
    local_e0 = iVar17 + 7;
  }
  local_e0 = local_e0 >> 3;
  local_e4 = iVar16 + 0xe;
  if (-1 < iVar16 + 7) {
    local_e4 = iVar16 + 7;
  }
  local_e4 = local_e4 >> 3;
  local_138 = &local_e4;
  local_dc = 1;
  FUN_1485fa0df(param_1,param_6,&local_d8,puVar10);
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1b83b FUN_143c1b83b body=1063 status=ok
// SIG undefined FUN_143c1b83b(void)

ulonglong FUN_143c1b83b(longlong param_1,float param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  int *local_d8;
  longlong *local_d0;
  undefined1 local_c5;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined2 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)*param_3;
  if (*(char *)(*param_3 + 0x52) != '\0') {
    plVar6 = (longlong *)0x0;
  }
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  iVar2 = *(int *)(lVar7 + 0x24);
  plVar6 = (longlong *)0x0;
  if (*(char *)(*param_3 + 0x52) == '\0') {
    plVar6 = (longlong *)*param_3;
  }
  lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
  iVar3 = *(int *)(lVar7 + 0x28);
  local_a8 = DAT_14ca83a40;
  local_b8 = DAT_14ca83a30;
  uStack_b4 = DAT_14ca83a34;
  uStack_b0 = DAT_14ca83a38;
  uStack_ac = DAT_14ca83a3c;
  lVar7 = (**(code **)(*(longlong *)*param_3 + 8))();
  local_65 = *(undefined1 *)(lVar7 + 0x33);
  local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_66 = 0;
  local_98 = &DAT_00020008;
  local_64 = 0xff00;
  local_6c = 0x10001;
  local_68 = 0x101;
  uStack_90 = local_b8;
  uStack_8c = uStack_b4;
  uStack_88 = uStack_b0;
  uStack_84 = uStack_ac;
  local_80 = local_a8;
  local_78 = 0;
  local_74 = DAT_14ca84e40;
  if (iVar2 < DAT_14ca84e40) {
    local_74 = iVar2;
  }
  if (local_74 < 2) {
    local_74 = 1;
  }
  local_70 = DAT_14ca84e40;
  if (iVar3 < DAT_14ca84e40) {
    local_70 = iVar3;
  }
  if (local_70 < 2) {
    local_70 = 1;
  }
  plVar6 = (longlong *)(param_1 + 0x70);
  uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar11 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
    FUN_140023dd8(plVar6,0x128);
    uVar11 = *plVar6 + 7U & 0xfffffffffffffff8;
    uVar8 = uVar11 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar11,L"XeFG::UIColorAndAlpha",&local_98,0);
  iVar4 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8) = uVar11;
  *(int *)(uVar11 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar10 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(plVar6,0x40);
    puVar10 = (undefined8 *)(*plVar6 + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar10 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  *puVar10 = &PTR_FUN_14afcc508;
  puVar10[3] = 0;
  puVar10[4] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  local_d0 = plVar6;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  plVar6 = local_d0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar10;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(puVar10 + 2) = param_2;
  puVar10[3] = *param_3;
  uVar1 = *(undefined1 *)(uVar11 + 0x94);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(local_d0,0x50);
    puVar12 = (undefined8 *)(*plVar6 + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar12[1] = *(undefined8 *)(uVar11 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar12 + 5) = 0;
  *puVar12 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar12 + 6) = uVar1;
  *(undefined1 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x35) = 0;
  puVar12[8] = uVar11;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar10[4] = puVar12;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_145e687c2();
  FUN_1448e935e(uVar5,&local_98,&DAT_14cb53308,0);
  FUN_145e687c2();
  local_c0 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    local_c0 = iVar3 + 7;
  }
  local_c0 = local_c0 >> 3;
  local_c4 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    local_c4 = iVar2 + 7;
  }
  local_c4 = local_c4 >> 3;
  local_d8 = &local_c4;
  local_bc = 1;
  FUN_1485f9d7e(param_1,&local_c5,&local_98,puVar10 + 2);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1bc66 FUN_143c1bc66 body=282 status=ok
// SIG undefined FUN_143c1bc66(void)

void FUN_143c1bc66(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = L"XeSS";
  local_70 = 4;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  FUN_140056680(&local_38,L"/Plugin/XeSS");
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1bd9a FUN_143c1bd9a body=481 status=ok
// SIG undefined FUN_143c1bd9a(void)

void FUN_143c1bd9a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1485fa339(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1bf7c FUN_143c1bf7c body=232 status=ok
// SIG undefined FUN_143c1bf7c(void)

void FUN_143c1bf7c(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143c1c064 FUN_143c1c064 body=81 status=ok
// SIG undefined FUN_143c1c064(void)

void FUN_143c1c064(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1485fa3dc(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143c1c0b6 FUN_143c1c0b6 body=481 status=ok
// SIG undefined FUN_143c1c0b6(void)

void FUN_143c1c0b6(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1485fa6f9(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1c298 FUN_143c1c298 body=232 status=ok
// SIG undefined FUN_143c1c298(void)

void FUN_143c1c298(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143c1c380 FUN_143c1c380 body=81 status=ok
// SIG undefined FUN_143c1c380(void)

void FUN_143c1c380(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1485fa79c(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143c1c3e9 FUN_143c1c3e9 body=240 status=ok
// SIG undefined FUN_143c1c3e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1c3e9(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_30,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_30,&DAT_14cb53164);
  if (cVar1 == '\0') {
    _DAT_14cb53164 = 0;
    uRam000000014cb5316c = 0;
  }
  if (local_30 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_28 = FUN_145f6f0d4;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb53290,&local_30);
  local_28 = FUN_145e687c2;
  local_30 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb533b8,&local_30);
  local_30 = (undefined *)0x800000014afcc498;
  local_1c = 0xb;
  uVar2 = FUN_14577453c();
  local_28._0_5_ = CONCAT14(1,uVar2);
  FUN_1464aa68c(&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1c4dc FUN_143c1c4dc body=91 status=ok
// SIG undefined FUN_143c1c4dc(void)

void FUN_143c1c4dc(void)

{
  if (DAT_14cb53548 != 0) {
    if (DAT_14cb53540 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb53540)(DAT_14cb53540,0);
    FUN_1446efa72(&DAT_14cb53540,0,0,0x10);
    DAT_14cb53548 = 0;
  }
  if (DAT_14cb53540 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c1c537 FUN_143c1c537 body=69 status=ok
// SIG undefined FUN_143c1c537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1c537(void)

{
  _DAT_14cb53558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1c579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53560,1);
  return;
}



// FUNCTION 143c1c57c FUN_143c1c57c body=69 status=ok
// SIG undefined FUN_143c1c57c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1c57c(void)

{
  _DAT_14cb53570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1c5be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53578,1);
  return;
}



// FUNCTION 143c1c5c1 FUN_143c1c5c1 body=69 status=ok
// SIG undefined FUN_143c1c5c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1c5c1(void)

{
  _DAT_14cb53588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1c603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53590,1);
  return;
}



// FUNCTION 143c1c606 FUN_143c1c606 body=767 status=ok
// SIG undefined FUN_143c1c606(void)

undefined4 FUN_143c1c606(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  char *pcVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  if (param_2 == 0) {
LAB_143c1c75c:
    lVar10 = 0;
  }
  else {
    lVar4 = FUN_1414fb874(param_2,0);
    lVar10 = 0;
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x430);
      if (lVar5 == 0) goto LAB_143c1c75c;
      if (DAT_14cae9568 == 0) {
        local_60 = local_48;
        local_48[0] = FUN_1417de738;
        local_50 = &LAB_145893408;
        local_58 = &LAB_1458cbbd2;
        local_68 = &LAB_147ba21f1;
        local_70 = &LAB_1463e9233;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x1000000c;
        local_90 = 8;
        local_98 = CONCAT44(local_98._4_4_,0x2b8);
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar5 = *(longlong *)(lVar4 + 0x430);
        if (lVar5 == 0) goto LAB_143c1c75c;
      }
      lVar10 = 0;
      if ((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_143c1c75c;
        lVar10 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30) {
          lVar10 = lVar5;
        }
      }
    }
  }
  local_98 = 0;
  uVar3 = FUN_14063337c(param_3,L"XeLLLatencyMarkers=",&local_38,1);
  if ((char)uVar3 != '\0') {
    puVar6 = local_38;
    if ((int)uStack_30 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    plVar8 = (longlong *)(param_1 + -0x10);
    lVar4 = 0;
    do {
      uVar2 = puVar6[lVar4];
      bVar1 = (&DAT_149dfd150)[lVar4];
      iVar9 = (uint)uVar2 - (uint)bVar1;
      if (iVar9 == 0) {
        if (uVar2 == 0) goto LAB_143c1c879;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_143c1c7fd;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_143c1c7fa;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  goto LAB_143c1c8cb;
LAB_143c1c846:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_143c1c849:
  if (iVar9 != 0) goto LAB_143c1c8cb;
LAB_143c1c84e:
  (**(code **)(*plVar8 + 8))(plVar8,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
  if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0x78) == 0)) ||
     (plVar8 = *(longlong **)(*(longlong *)(lVar10 + 0x78) + 0x40), plVar8 == (longlong *)0x0))
  goto LAB_143c1c8cb;
  pcVar7 = "XeLL Latency Markers: On";
  goto LAB_143c1c8a2;
LAB_143c1c7fa:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_143c1c7fd:
  if (iVar9 != 0) {
    lVar4 = 0;
    do {
      uVar2 = puVar6[lVar4];
      bVar1 = (&DAT_149e377d0)[lVar4];
      iVar9 = (uint)uVar2 - (uint)bVar1;
      if (iVar9 == 0) {
        if (uVar2 == 0) goto LAB_143c1c84e;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_143c1c849;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_143c1c846;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
LAB_143c1c879:
  (**(code **)(*plVar8 + 8))(plVar8,0);
  if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0x78) == 0)) ||
     (plVar8 = *(longlong **)(*(longlong *)(lVar10 + 0x78) + 0x40), plVar8 == (longlong *)0x0))
  goto LAB_143c1c8cb;
  pcVar7 = "XeLL Latency Markers: Off";
LAB_143c1c8a2:
  FUN_1400b22c2(local_48,pcVar7);
  (**(code **)(*plVar8 + 0x2c0))(plVar8,local_48);
  if (local_48[0] != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143c1c8cb:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143c1c906 FUN_143c1c906 body=93 status=ok
// SIG undefined FUN_143c1c906(void)

void FUN_143c1c906(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    uVar1 = *(ulonglong *)(param_1[4] + 0x30);
    if (uVar1 != 0xffffffffffffffff && param_2 <= uVar1) {
      return;
    }
    *(ulonglong *)(param_1[4] + 0x30) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1c954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_2 & 0xffffffff,6);
  return;
}



// FUNCTION 143c1c964 FUN_143c1c964 body=88 status=ok
// SIG undefined FUN_143c1c964(void)

void FUN_143c1c964(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    uVar1 = *(ulonglong *)param_1[4];
    if (uVar1 != 0xffffffffffffffff && param_2 <= uVar1) {
      return;
    }
    *(ulonglong *)param_1[4] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1c9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_2 & 0xffffffff,0);
  return;
}



// FUNCTION 143c1c9bc FUN_143c1c9bc body=114 status=ok
// SIG undefined FUN_143c1c9bc(void)

void FUN_143c1c9bc(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    puVar1 = (ulonglong *)param_1[4];
    if (puVar1[1] != 0xffffffffffffffff && param_2 <= puVar1[1]) {
      return;
    }
    if (*puVar1 < param_2 || *puVar1 == 0xffffffffffffffff) {
      return;
    }
    puVar1[1] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1c9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_2 & 0xffffffff,1);
  return;
}



// FUNCTION 143c1ca2e FUN_143c1ca2e body=114 status=ok
// SIG undefined FUN_143c1ca2e(void)

void FUN_143c1ca2e(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    puVar1 = (ulonglong *)param_1[4];
    if (puVar1[2] != 0xffffffffffffffff && param_2 <= puVar1[2]) {
      return;
    }
    if (*puVar1 < param_2 || *puVar1 == 0xffffffffffffffff) {
      return;
    }
    puVar1[2] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1ca5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_2 & 0xffffffff,2);
  return;
}



// FUNCTION 143c1caa0 FUN_143c1caa0 body=114 status=ok
// SIG undefined FUN_143c1caa0(void)

void FUN_143c1caa0(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    puVar1 = (ulonglong *)param_1[4];
    if (puVar1[3] != 0xffffffffffffffff && param_2 <= puVar1[3]) {
      return;
    }
    if (*puVar1 < param_2 || *puVar1 == 0xffffffffffffffff) {
      return;
    }
    puVar1[3] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1cad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_2 & 0xffffffff,3);
  return;
}



// FUNCTION 143c1cb12 FUN_143c1cb12 body=114 status=ok
// SIG undefined FUN_143c1cb12(void)

void FUN_143c1cb12(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    puVar1 = (ulonglong *)param_1[4];
    if (puVar1[4] != 0xffffffffffffffff && param_2 <= puVar1[4]) {
      return;
    }
    if (*puVar1 < param_2 || *puVar1 == 0xffffffffffffffff) {
      return;
    }
    puVar1[4] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1cb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_2 & 0xffffffff,4);
  return;
}



// FUNCTION 143c1cb84 FUN_143c1cb84 body=155 status=ok
// SIG undefined FUN_143c1cb84(void)

void FUN_143c1cb84(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 != '\0') {
    if (DAT_14cb53580 == 0) {
      puVar1 = (ulonglong *)param_1[4];
      if ((puVar1[5] != 0xffffffffffffffff && param_2 <= puVar1[5]) ||
         (*puVar1 < param_2 || *puVar1 == 0xffffffffffffffff)) goto LAB_143c1cbea;
      puVar1[5] = param_2;
    }
    xellAddMarkerData(param_1[3],param_2 & 0xffffffff,5);
  }
LAB_143c1cbea:
  if (DAT_14cb53540 == (longlong *)0x0 || DAT_14cb53548 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1cc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14cb53540 + 0x60))(DAT_14cb53540,param_2);
  return;
}



// FUNCTION 143c1cc20 FUN_143c1cc20 body=128 status=ok
// SIG undefined FUN_143c1cc20(void)

void FUN_143c1cc20(longlong *param_1,int param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_14cb53580 == 0) {
    puVar1 = (ulonglong *)param_1[4];
    if (puVar1[param_2] != 0xffffffffffffffff && param_3 <= puVar1[param_2]) {
      return;
    }
    if ((param_2 != 0) && (param_2 != 6)) {
      if (*puVar1 == 0xffffffffffffffff) {
        if (param_2 != 0) {
          return;
        }
      }
      else if (*puVar1 < param_3) {
        return;
      }
    }
    puVar1[param_2] = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1cc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xellAddMarkerData(param_1[3],param_3 & 0xffffffff,param_2);
  return;
}



// FUNCTION 143c1cca0 FUN_143c1cca0 body=69 status=ok
// SIG undefined FUN_143c1cca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1cca0(void)

{
  _DAT_14cb535a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1cce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb535a8,1);
  return;
}



// FUNCTION 143c1cce5 FUN_143c1cce5 body=69 status=ok
// SIG undefined FUN_143c1cce5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1cce5(void)

{
  _DAT_14cb535b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1cd27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb535b8,1);
  return;
}



// FUNCTION 143c1cd40 FUN_143c1cd40 body=880 status=ok
// SIG undefined FUN_143c1cd40(void)

ulonglong FUN_143c1cd40(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  char *pcVar7;
  longlong *plVar8;
  uint uVar9;
  undefined7 uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58 [2];
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_30 = param_3;
  if (param_2 == 0) {
LAB_143c1ce9e:
    lVar12 = 0;
  }
  else {
    lVar4 = FUN_1414fb874(param_2,0);
    lVar12 = 0;
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x430);
      if (lVar5 == 0) goto LAB_143c1ce9e;
      if (DAT_14cae9568 == 0) {
        local_70 = local_58;
        local_58[0] = FUN_1417de738;
        local_60 = &LAB_145893408;
        local_68 = &LAB_1458cbbd2;
        local_78 = &LAB_147ba21f1;
        local_80 = &LAB_1463e9233;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x1000000c;
        local_a0 = 8;
        local_a8 = CONCAT44(local_a8._4_4_,0x2b8);
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar5 = *(longlong *)(lVar4 + 0x430);
        if (lVar5 == 0) goto LAB_143c1ce9e;
      }
      lVar12 = 0;
      if ((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_143c1ce9e;
        lVar12 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30) {
          lVar12 = lVar5;
        }
      }
    }
  }
  plVar8 = (longlong *)(param_1 + -0x10);
  local_a8 = 0;
  cVar3 = FUN_14063337c(param_3,L"XeLLMode=",&local_48,1);
  if (cVar3 != '\0') {
    puVar6 = local_48;
    if ((int)uStack_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    lVar4 = 0;
    do {
      uVar2 = puVar6[lVar4];
      bVar1 = (&DAT_149dfd150)[lVar4];
      iVar11 = (uint)uVar2 - (uint)bVar1;
      if (iVar11 == 0) {
        if (uVar2 == 0) goto LAB_143c1cfe8;
      }
      else {
        uVar9 = (uint)bVar1 | (uint)uVar2;
        param_3 = (ulonglong)uVar9;
        if (0x7f < uVar9) goto LAB_143c1cf79;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_143c1cf76;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  cVar3 = FUN_140988638(&local_30,L"XeLLModeToggle",1);
  if (cVar3 == '\0') {
    param_3 = 0;
    goto LAB_143c1d076;
  }
  cVar3 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (cVar3 != '\0') {
    (**(code **)(*plVar8 + 8))(plVar8,0);
    goto LAB_143c1cff3;
  }
  uVar10 = (undefined7)(param_3 >> 8);
  (**(code **)(*plVar8 + 8))(plVar8,1);
  goto LAB_143c1d021;
LAB_143c1cf76:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_143c1cf79:
  if (iVar11 != 0) {
    lVar4 = 0;
    do {
      uVar2 = puVar6[lVar4];
      bVar1 = (&DAT_149e377d0)[lVar4];
      iVar11 = (uint)uVar2 - (uint)bVar1;
      if (iVar11 == 0) {
        if (uVar2 == 0) goto LAB_143c1cfd8;
      }
      else {
        uVar9 = (uint)bVar1 | (uint)uVar2;
        param_3 = (ulonglong)uVar9;
        if (0x7f < uVar9) goto LAB_143c1cfcc;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_143c1cfc9;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
LAB_143c1cfe8:
  (**(code **)(*plVar8 + 8))(plVar8,0);
LAB_143c1cff3:
  param_3 = CONCAT71((int7)(param_3 >> 8),1);
  if (((lVar12 == 0) || (*(longlong *)(lVar12 + 0x78) == 0)) ||
     (plVar8 = *(longlong **)(*(longlong *)(lVar12 + 0x78) + 0x40), plVar8 == (longlong *)0x0))
  goto LAB_143c1d076;
  pcVar7 = "XeLL Low Latency mode: Off";
  goto LAB_143c1d04d;
LAB_143c1cfc9:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_143c1cfcc:
  param_3 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
  if (iVar11 != 0) goto LAB_143c1d076;
LAB_143c1cfd8:
  uVar10 = (undefined7)(param_3 >> 8);
  (**(code **)(*plVar8 + 8))(plVar8,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
LAB_143c1d021:
  param_3 = CONCAT71(uVar10,1);
  (**(code **)(*plVar8 + 0x20))(plVar8,1);
  if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0x78) != 0)) &&
     (plVar8 = *(longlong **)(*(longlong *)(lVar12 + 0x78) + 0x40), plVar8 != (longlong *)0x0)) {
    pcVar7 = "XeLL Low Latency mode: On";
LAB_143c1d04d:
    FUN_1400b22c2(local_58,pcVar7);
    (**(code **)(*plVar8 + 0x2c0))(plVar8,local_58);
    if (local_58[0] != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143c1d076:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffffff;
}



// FUNCTION 143c1d0b2 FUN_143c1d0b2 body=454 status=ok
// SIG undefined FUN_143c1d0b2(void)

undefined8 FUN_143c1d0b2(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x18))();
  lVar1 = DAT_14cb535c0;
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_143c1d238;
  }
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar8 = 0;
  }
  else if (iVar3 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar8 = 1;
  }
  iVar3 = *(int *)(lVar1 + uVar8 * 4);
  if (iVar3 < 0) {
    fVar9 = (float)(-(uint)(0.0 < param_2) & (uint)((1000.0 / param_2) * 1000.0));
  }
  else {
    fVar9 = (float)iVar3;
  }
  if ((char)param_1[3] == '\x01') {
    if (fVar9 != *(float *)((longlong)param_1 + 0x1c) ||
        (int)param_1[5] != *(int *)((longlong)param_1 + 0x24)) {
      if ((int)param_1[5] != *(int *)((longlong)param_1 + 0x24)) {
        FUN_14080c2b4();
      }
      *(float *)((longlong)param_1 + 0x1c) = fVar9;
      local_48 = CONCAT44((uint)*(byte *)(param_1 + 4) +
                          (uint)*(byte *)((longlong)param_1 + 0x21) * 2,(int)(longlong)fVar9);
      iVar3 = xellSetSleepMode(param_1[6]);
      uVar7 = *(uint *)((longlong)param_1 + 0x24);
      if (((char)param_1[4] == '\x01') && (iVar3 != 0)) {
        uVar7 = uVar7 & 0xfffffffe;
        *(uint *)((longlong)param_1 + 0x24) = uVar7;
        *(undefined1 *)(param_1 + 4) = 0;
      }
      *(uint *)(param_1 + 5) = uVar7;
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
    }
    xellSleep(param_1[6],(undefined4)DAT_14c872be0);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x19) == '\0') {
      if ((*(float *)((longlong)param_1 + 0x1c) == fVar9) &&
         (!NAN(*(float *)((longlong)param_1 + 0x1c)) && !NAN(fVar9))) goto LAB_143c1d22f;
    }
    else {
      FUN_14080c2b4();
    }
    *(float *)((longlong)param_1 + 0x1c) = fVar9;
    local_48 = (longlong)fVar9 & 0xffffffff;
    xellSetSleepMode(param_1[6]);
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
    *(undefined2 *)(param_1 + 4) = 1;
  }
LAB_143c1d22f:
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
LAB_143c1d238:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1d279 FUN_143c1d279 body=69 status=ok
// SIG undefined FUN_143c1d279(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1d279(void)

{
  _DAT_14cb535c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1d2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb535d0,1);
  return;
}



// FUNCTION 143c1d2be FUN_143c1d2be body=69 status=ok
// SIG undefined FUN_143c1d2be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1d2be(void)

{
  _DAT_14cb535e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1d300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb535e8,1);
  return;
}



// FUNCTION 143c1d303 FUN_143c1d303 body=69 status=ok
// SIG undefined FUN_143c1d303(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1d303(void)

{
  _DAT_14cb535f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1d345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53600,1);
  return;
}



// FUNCTION 143c1d348 FUN_143c1d348 body=69 status=ok
// SIG undefined FUN_143c1d348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1d348(void)

{
  _DAT_14cb53610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1d38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53618,1);
  return;
}



// FUNCTION 143c1d38d FUN_143c1d38d body=69 status=ok
// SIG undefined FUN_143c1d38d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1d38d(void)

{
  _DAT_14cb53628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1d3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53630,1);
  return;
}



// FUNCTION 143c1d3d6 FUN_143c1d3d6 body=224 status=ok
// SIG undefined FUN_143c1d3d6(void)

undefined8 FUN_143c1d3d6(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_143c1af84(L"libxell.dll");
  if (cVar1 != '\0') {
    DAT_14cb53640 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_143c1ea58(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      FUN_143c1ea88(param_1 + 0x58);
    }
    FUN_1458f4e7e();
    plVar4 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
    uVar5 = (**(code **)(*plVar4 + 0x528))(plVar4,0);
    iVar2 = xellD3D12CreateContext(uVar5,&DAT_14cb53640);
    FUN_145be8020();
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*DAT_14cb53618 + 0xb0))();
      if ((3 < uVar3) ||
         (iVar2 = xellSetLoggingCallback(DAT_14cb53640,uVar3,&DAT_143c1d4b6), iVar2 == 0)) {
        return 1;
      }
    }
    else {
      DAT_14cb53640 = 0;
    }
  }
  return 0;
}



// FUNCTION 143c1d4b8 FUN_143c1d4b8 body=490 status=ok
// SIG undefined FUN_143c1d4b8(void)

void FUN_143c1d4b8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb53640 != 0) {
    xellDestroyContext();
    DAT_14cb53640 = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x38) + 8;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar1 = 0;
    }
    FUN_1401c23cc(&local_28);
    (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_28,lVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x30) + 8;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar1 = 0;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0d2a8) {
      FUN_144b3d300(&DAT_14cb0d2a8);
      if (DAT_14cb0d2a8 == -1) {
        FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
        _Init_thread_footer(&DAT_14cb0d2a8);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,DAT_14cb0d2a0,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1d6ae FUN_143c1d6ae body=1309 status=ok
// SIG undefined FUN_143c1d6ae(void)

void FUN_143c1d6ae(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar3 = DAT_14cb53640;
  *puVar6 = &PTR__purecall_14afccec0;
  *(undefined1 *)(puVar6 + 1) = 0;
  FUN_14118b488(puVar6 + 2);
  ppuVar7 = &PTR_FUN_14afccad0;
  *puVar6 = &PTR_FUN_14afccad0;
  puVar6[2] = &PTR_FUN_14afccb10;
  *(undefined2 *)(puVar6 + 3) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x1a) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0xbf800000;
  *(undefined2 *)(puVar6 + 4) = 1;
  *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
  puVar6[6] = uVar3;
  lVar11 = *(longlong *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = puVar6;
  if (lVar11 != 0) {
    (*(code *)**(undefined8 **)(lVar11 + 0x10))(lVar11 + 0x10,1);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    ppuVar7 = (undefined **)*puVar6;
  }
  (*(code *)*ppuVar7)(puVar6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  lVar11 = *(longlong *)(param_1 + 0x38) + 8;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar11 = 0;
  }
  FUN_1401c23cc(&local_50);
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,local_50,lVar11);
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  uVar3 = DAT_14cb53640;
  *puVar6 = &PTR__purecall_14afc85d0;
  FUN_1409e1656(puVar6 + 1);
  FUN_14118b488(puVar6 + 2);
  *puVar6 = &PTR_FUN_14afcc7a0;
  puVar6[1] = &PTR_LAB_14afcc890;
  puVar6[2] = &PTR_FUN_14afcc8e0;
  puVar6[3] = uVar3;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 6) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar6 + 99) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x6b) = 0;
  local_48 = (longlong *)0xffffffffffffffff;
  FUN_1485faa44(puVar6 + 4,&local_48);
  plVar8 = (longlong *)(**(code **)(*DAT_14cb53578 + 0xd0))();
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = (longlong)&PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_48[2] = lVar9;
  *local_48 = (longlong)&PTR_FUN_14afccf00;
  local_48[3] = (longlong)puVar6;
  if ((local_48 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_48 + 0x30))(), cVar4 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_143c1d9e2;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_143c1d9cc;
    }
  }
  else {
    if (*(int *)((longlong)plVar8 + 0x14) < 1) {
      iVar1 = (int)plVar8[1];
      iVar5 = (int)plVar8[2] + -1;
      *(int *)(plVar8 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar8,iVar10);
              FUN_14005b248(plVar8);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar5 = (int)plVar8[1];
          } while (iVar10 < iVar5);
        }
        iVar10 = 2;
        if (2 < iVar5 * 2) {
          iVar10 = iVar5 * 2;
        }
        *(int *)(plVar8 + 2) = iVar10;
        if ((iVar10 < iVar1) && (*(int *)((longlong)plVar8 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    iVar1 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar8 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(plVar8,iVar1);
    }
    lVar11 = *plVar8;
    lVar9 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar11 + lVar9) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
    *(longlong **)(lVar11 + lVar9) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar9) = local_40;
LAB_143c1d9cc:
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143c1d9e2:
  lVar11 = *(longlong *)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  if (lVar11 != 0) {
    (**(code **)(*(longlong *)(lVar11 + 8) + 0x30))(lVar11 + 8,1);
    puVar6 = *(undefined8 **)(param_1 + 0x30);
  }
  (**(code **)*puVar6)(puVar6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1)) {
    FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
    _Init_thread_footer(&DAT_14cb0d2a8);
  }
  lVar9 = lVar11 + 8;
  if (lVar11 == 0) {
    lVar9 = 0;
  }
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,DAT_14cb0d2a0,lVar9);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1dbcc FUN_143c1dbcc body=410 status=ok
// SIG undefined FUN_143c1dbcc(void)

undefined8 FUN_143c1dbcc(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb53650) && (FUN_144b3d300(&DAT_14cb53650), DAT_14cb53650 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb53648 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.Enabled",1);
    _Init_thread_footer(&DAT_14cb53650);
  }
  plVar5 = DAT_14cb53600;
  uVar3 = *DAT_14cb53608;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar3 != uVar1) {
    if (uVar3 < 2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb53660) && (FUN_144b3d300(&DAT_14cb53660), DAT_14cb53660 == -1))
      {
        DAT_14cb53658 = (longlong *)FUN_143c18d94(param_1 + -0x18);
        _Init_thread_footer(&DAT_14cb53660);
      }
      cVar2 = (**(code **)(*DAT_14cb53658 + 0xa8))();
      if (cVar2 == '\0') {
        return 1;
      }
      if (((DAT_14cb53648 == (longlong *)0x0) ||
          (iVar4 = (**(code **)(*DAT_14cb53648 + 0xb0))(), plVar5 = DAT_14cb53600, uVar3 != 0)) ||
         (iVar4 == 0)) {
        FUN_143c1dd66(param_1 + -0x18,uVar3);
        *(uint *)(param_1 + 0x28) = uVar3;
        return 1;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar3 = (**(code **)(*DAT_14cb53600 + 0x18))(DAT_14cb53600);
    }
    else {
      uVar3 = (**(code **)(*DAT_14cb53600 + 0x18))(DAT_14cb53600);
    }
    FUN_140635eb8(plVar5,uVar1,uVar3 & 0xff000000,0);
    return 1;
  }
  return 1;
}



// FUNCTION 143c1dd66 FUN_143c1dd66 body=1848 status=ok
// SIG undefined FUN_143c1dd66(void)

void FUN_143c1dd66(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_a8 [36];
  uint local_84;
  ulonglong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 < 2) {
    local_84 = param_2;
    if (param_2 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_1401c23cc(&local_80);
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      iVar7 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_80);
      if (0 < iVar7) {
        iVar13 = 0;
        do {
          lVar10 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_80,iVar13);
          uVar5 = uStack_50;
          lVar12 = lVar10 + -8;
          if (lVar10 == 0) {
            lVar12 = 0;
          }
          lVar10 = (longlong)(int)uStack_50;
          uVar8 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
          if (uStack_50._4_4_ < uVar8) {
            FUN_1401c24ca(&local_58,uVar5 & 0xffffffff);
          }
          local_58[lVar10] = lVar12;
          iVar13 = iVar13 + 1;
        } while (iVar7 != iVar13);
      }
      if ((longlong)(int)uStack_50 != 0) {
        plVar3 = local_58 + (int)uStack_50;
        plVar11 = local_58;
        do {
          if ((longlong)*(int *)(param_1 + 0x50) != 0) {
            plVar2 = (longlong *)*plVar11;
            lVar12 = *(longlong *)(param_1 + 0x48);
            lVar10 = 0;
            do {
              if (*(longlong **)(lVar12 + lVar10) == plVar2) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
                (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined4 *)(lVar12 + 8 + lVar10));
                break;
              }
              lVar10 = lVar10 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x50) * 0x10 != lVar10);
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar3);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1))
      {
        FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
        _Init_thread_footer(&DAT_14cb0d2a8);
      }
      uVar4 = DAT_14cb0d2a0;
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      iVar7 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
      if (0 < iVar7) {
        iVar13 = 0;
        do {
          lVar10 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar4);
          uVar5 = uStack_70;
          lVar12 = lVar10 + -8;
          if (lVar10 == 0) {
            lVar12 = 0;
          }
          lVar10 = (longlong)(int)uStack_70;
          uVar8 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
          if (uStack_70._4_4_ < uVar8) {
            FUN_1448c32a0(&local_78,uVar5 & 0xffffffff);
          }
          local_78[lVar10] = lVar12;
          iVar13 = iVar13 + 1;
        } while (iVar7 != iVar13);
        if ((longlong)(int)uStack_70 != 0) {
          plVar3 = local_78 + (int)uStack_70;
          plVar11 = local_78;
          do {
            if ((longlong)*(int *)(param_1 + 0x60) != 0) {
              plVar2 = (longlong *)*plVar11;
              lVar12 = 0;
              do {
                if (*(longlong **)(*(longlong *)(param_1 + 0x58) + lVar12) == plVar2) {
                  (**(code **)(*plVar2 + 8))
                            (plVar2,CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),1
                                            ));
                  break;
                }
                lVar12 = lVar12 + 8;
              } while ((longlong)*(int *)(param_1 + 0x60) * 8 != lVar12);
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar3);
        }
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        FUN_143c1ea58(param_1 + 0x48);
      }
      uVar8 = local_84;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 100) != 0) {
        FUN_143c1ea88(param_1 + 0x58);
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_1401c23cc(&local_60);
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      iVar7 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_60);
      if (0 < iVar7) {
        iVar13 = 0;
        do {
          lVar10 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_60,iVar13);
          uVar5 = uStack_50;
          lVar12 = lVar10 + -8;
          if (lVar10 == 0) {
            lVar12 = 0;
          }
          lVar10 = (longlong)(int)uStack_50;
          uVar8 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
          if (uStack_50._4_4_ < uVar8) {
            FUN_1401c24ca(&local_58,uVar5 & 0xffffffff);
          }
          local_58[lVar10] = lVar12;
          iVar13 = iVar13 + 1;
        } while (iVar7 != iVar13);
      }
      plVar3 = local_58;
      lVar12 = (longlong)(int)uStack_50;
      if (lVar12 != 0) {
        lVar10 = 0;
        do {
          plVar11 = *(longlong **)((longlong)plVar3 + lVar10);
          if ((plVar11 != *(longlong **)(param_1 + 0x38)) &&
             (cVar6 = (**(code **)(*plVar11 + 0x10))(plVar11), cVar6 != '\0')) {
            uVar9 = (**(code **)(*plVar11 + 0x28))(plVar11);
            iVar7 = *(int *)(param_1 + 0x50);
            *(uint *)(param_1 + 0x50) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
              FUN_143c1eab8((longlong *)(param_1 + 0x48),iVar7);
            }
            lVar1 = *(longlong *)(param_1 + 0x48);
            *(longlong **)(lVar1 + (longlong)iVar7 * 0x10) = plVar11;
            *(undefined4 *)(lVar1 + 8 + (longlong)iVar7 * 0x10) = uVar9;
          }
          (**(code **)(*plVar11 + 8))(plVar11,0);
          (**(code **)(*plVar11 + 0x20))(plVar11);
          lVar10 = lVar10 + 8;
        } while (lVar12 * 8 != lVar10);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0d2a8) && (FUN_144b3d300(&DAT_14cb0d2a8), DAT_14cb0d2a8 == -1))
      {
        FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
        _Init_thread_footer(&DAT_14cb0d2a8);
      }
      uVar4 = DAT_14cb0d2a0;
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      iVar7 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
      if (0 < iVar7) {
        iVar13 = 0;
        do {
          lVar10 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar4,iVar13);
          uVar5 = uStack_70;
          lVar12 = lVar10 + -8;
          if (lVar10 == 0) {
            lVar12 = 0;
          }
          lVar10 = (longlong)(int)uStack_70;
          uVar8 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
          if (uStack_70._4_4_ < uVar8) {
            FUN_1448c32a0(&local_78,uVar5 & 0xffffffff);
          }
          plVar3 = local_78;
          local_78[lVar10] = lVar12;
          iVar13 = iVar13 + 1;
        } while (iVar7 != iVar13);
        lVar12 = (longlong)(int)uStack_70;
        if (lVar12 != 0) {
          lVar10 = 0;
          do {
            plVar11 = *(longlong **)((longlong)plVar3 + lVar10);
            if ((plVar11 != *(longlong **)(param_1 + 0x30)) &&
               (cVar6 = (**(code **)(*plVar11 + 0x10))(plVar11), cVar6 != '\0')) {
              iVar7 = *(int *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar7 + 1U;
              if (*(uint *)(param_1 + 100) < iVar7 + 1U) {
                FUN_1448c32a0((longlong *)(param_1 + 0x58),iVar7);
              }
              *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 8) = plVar11;
            }
            (**(code **)(*plVar11 + 8))(plVar11,0);
            lVar10 = lVar10 + 8;
          } while (lVar12 * 8 != lVar10);
        }
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8(local_78);
        }
      }
      uVar8 = local_84;
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
        uVar8 = local_84;
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,uVar8 != 0);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),uVar8);
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c1e4a0 FUN_143c1e4a0 body=191 status=ok
// SIG undefined FUN_143c1e4a0(void)

ulonglong FUN_143c1e4a0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 == '\0') goto LAB_143c1e4db;
  local_20 = 0;
  iVar2 = xellGetSleepMode(DAT_14cb53640);
  if (iVar2 == 0) {
    if ((local_20 & 0x100000000) == 0) {
      local_20 = local_20 | 0x100000000;
      iVar2 = xellSetSleepMode(DAT_14cb53640);
      if (iVar2 != 0) goto LAB_143c1e4d9;
    }
    iVar2 = (**(code **)(*DAT_14cb53600 + 0xb0))();
    plVar1 = DAT_14cb53600;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*DAT_14cb53600 + 0x18))(DAT_14cb53600);
      FUN_140635eb8(plVar1,1,uVar3 & 0xff000000,0);
    }
  }
  else {
LAB_143c1e4d9:
    uVar4 = 0;
  }
LAB_143c1e4db:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1e560 FUN_143c1e560 body=812 status=ok
// SIG undefined FUN_143c1e560(void)

undefined8 FUN_143c1e560(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  FUN_1401c23cc(&local_60);
  local_58 = 0;
  uStack_50 = 0;
  uVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_60);
  uVar9 = 0;
  if (0 < (int)uVar4) {
    do {
      lVar7 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_60);
      uVar3 = uStack_50;
      lVar10 = lVar7 + -8;
      if (lVar7 == 0) {
        lVar10 = 0;
      }
      lVar7 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1401c24ca(&local_58,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar7 * 8) = lVar10;
      uVar5 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar5;
    } while (uVar4 != uVar5);
    if ((longlong)(int)uStack_50 != 0) {
      lVar10 = 0;
      do {
        plVar1 = *(longlong **)(local_58 + lVar10);
        if ((plVar1 != (longlong *)0x0) && (plVar1 == *(longlong **)(param_1 + 0x38))) {
          uVar4 = (**(code **)(*plVar1 + 0x18))();
          uVar9 = (ulonglong)uVar4;
          goto LAB_143c1e671;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)uStack_50 * 8 != lVar10);
    }
    uVar9 = 0;
  }
LAB_143c1e671:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d2a8) {
    FUN_144b3d300(&DAT_14cb0d2a8);
    if (DAT_14cb0d2a8 == -1) {
      FUN_1446f470e(&DAT_14cb0d2a0,L"LatencyMarker",1);
      _Init_thread_footer(&DAT_14cb0d2a8);
    }
  }
  uVar2 = DAT_14cb0d2a0;
  local_78 = 0;
  uStack_70 = 0;
  iVar6 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cb0d2a0);
  iVar8 = 0;
  if (0 < iVar6) {
    do {
      lVar7 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar2);
      uVar3 = uStack_70;
      lVar10 = lVar7 + -8;
      if (lVar7 == 0) {
        lVar10 = 0;
      }
      lVar7 = (longlong)(int)uStack_70;
      uVar4 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
      if (uStack_70._4_4_ < uVar4) {
        FUN_1448c32a0(&local_78,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_78 + lVar7 * 8) = lVar10;
      iVar8 = iVar8 + 1;
    } while (iVar6 != iVar8);
    if ((longlong)(int)uStack_70 != 0) {
      lVar10 = 0;
      do {
        plVar1 = *(longlong **)(local_78 + lVar10);
        if ((plVar1 != (longlong *)0x0) && (plVar1 == *(longlong **)(param_1 + 0x30))) {
          iVar8 = (**(code **)(*plVar1 + 0x18))(plVar1);
          goto LAB_143c1e780;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)uStack_70 * 8 != lVar10);
    }
    iVar8 = 0;
LAB_143c1e780:
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 & (byte)iVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1e892 FUN_143c1e892 body=39 status=ok
// SIG undefined FUN_143c1e892(void)

longlong FUN_143c1e892(longlong param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x10);
  }
  return param_1 + -0x10;
}



// FUNCTION 143c1e8ba FUN_143c1e8ba body=29 status=ok
// SIG undefined FUN_143c1e8ba(void)

undefined8 FUN_143c1e8ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c1e8ec FUN_143c1e8ec body=93 status=ok
// SIG undefined FUN_143c1e8ec(void)

void FUN_143c1e8ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afccf00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c1e94a FUN_143c1e94a body=93 status=ok
// SIG undefined FUN_143c1e94a(void)

void FUN_143c1e94a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afccf00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c1e9a8 FUN_143c1e9a8 body=126 status=ok
// SIG undefined FUN_143c1e9a8(void)

void FUN_143c1e9a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afccf00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c1ea17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c1ea58 FUN_143c1ea58 body=48 status=ok
// SIG undefined FUN_143c1ea58(void)

void FUN_143c1ea58(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 143c1ea88 FUN_143c1ea88 body=48 status=ok
// SIG undefined FUN_143c1ea88(void)

void FUN_143c1ea88(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 143c1eab8 FUN_143c1eab8 body=262 status=ok
// SIG undefined FUN_143c1eab8(void)

void FUN_143c1eab8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143c1ec38 FUN_143c1ec38 body=145 status=ok
// SIG undefined FUN_143c1ec38(void)

undefined8 * FUN_143c1ec38(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  param_1[-3] = &PTR_FUN_14afccff0;
  *param_1 = &PTR_FUN_14afcd0a0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10,1);
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x30))(lVar1 + 8,1);
  }
  FUN_145bfbed6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -3);
  }
  return param_1 + -3;
}



// FUNCTION 143c1ecc9 FUN_143c1ecc9 body=690 status=ok
// SIG undefined FUN_143c1ecc9(void)

void FUN_143c1ecc9(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cb53540 = 0;
  DAT_14cb53548 = 0;
  atexit(FUN_143c1c4dc);
  local_48 = 0;
  FUN_141471170(&DAT_14cb53558,L"r.XeLL.DisableLatencyMarkers",&DAT_14cb53550,
                L"Disable XeLL Latency Markers");
  atexit(FUN_143c1c537);
  local_48 = 0;
  FUN_141471170(&DAT_14cb53570,L"r.XeLL.EnableLatencyResult",&DAT_14cb53568,
                L"Enable XeLL Latency Result.(Not available)");
  atexit(FUN_143c1c57c);
  local_48 = 0;
  FUN_141471170(&DAT_14cb53588,L"r.XeLL.AllowRepeatedMarkers",&DAT_14cb53580,
                L"Allow repeated markers sent to SDK.");
  atexit(FUN_143c1c5c1);
  local_48 = 0;
  FUN_141471170(&DAT_14cb535a0,L"r.XeLL.DisableTickRateHandler",&DAT_14cb53598,
                L"Disable XeLL Tick Rate Handler");
  atexit(FUN_143c1cca0);
  local_40 = CONCAT44(local_40._4_4_,0xffffffff);
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cb535b0,L"r.XeLL.MinIntervalUS",&local_40,
                L"The XeLL minimum interval time in us. -1: using engine default > 0: override engine settings"
               );
  atexit(FUN_143c1cce5);
  local_40 = local_40 & 0xffffffffffffff00;
  local_48 = 4;
  FUN_140bd5914(&DAT_14cb535c8,L"r.XeLL.ModuleDisabled",&local_40,
                L"If XeLL module(s) are disabled via command line option -XeLLDisabled.");
  atexit(FUN_143c1d279);
  local_40 = local_40 & 0xffffffffffffff00;
  local_48 = 4;
  FUN_140bd5914(&DAT_14cb535e0,L"r.XeLL.Supported",&local_40,L"If XeLL is supported.");
  atexit(FUN_143c1d2be);
  local_40 = local_40 & 0xffffffff00000000;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cb535f8,L"r.XeLL.Enabled",&local_40,L"0: off, 1: low latency enabled");
  atexit(FUN_143c1d303);
  local_40 = CONCAT44(local_40._4_4_,1);
  local_48 = 4;
  FUN_14078dbce(&DAT_14cb53610,L"r.XeLL.LogLevel",&local_40,
                L"[default: 1] Minimum log level of XeLL SDK, set it via command line -XeLLLogLevel=\n 0: Debug\n 1: Info\n 2: Warning\n 3: Error\n Other values: Logging disabled"
               );
  atexit(FUN_143c1d348);
  FUN_140056680(&local_40,L"Unknown");
  local_48 = 4;
  FUN_140f510cc(&DAT_14cb53628,L"r.XeLL.Version",&local_40,L"Show XeLL SDK\'s version.");
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_143c1d38d);
  local_40 = 0x800000014afcceaa;
  local_2c = 8;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_1464aa8de(&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1ef7c FUN_143c1ef7c body=298 status=ok
// SIG undefined FUN_143c1ef7c(void)

uint FUN_143c1ef7c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined *local_60;
  longlong **local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 8) == '\0') {
    local_58 = &local_50;
    local_50 = (longlong *)0x0;
    local_60 = &DAT_14afcd0c0;
    local_68 = param_2;
    iVar3 = FUN_143c1f0aa(*(undefined8 *)(param_1 + 0x10),param_4,param_5,param_6);
    plVar1 = local_50;
    if (-1 < iVar3) {
      (**(code **)*local_50)(local_50,&DAT_14afcd0c0,param_8);
      *(undefined1 *)(param_1 + 8) = 1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))(local_50);
    }
  }
  local_58 = (longlong **)param_8;
  local_60 = (undefined *)param_7;
  local_68 = (longlong *)param_6;
  uVar2 = (**(code **)(*param_2 + 0x78))(param_2,param_3,param_4,param_5);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)uVar2 >> 0x1f & uVar2;
}



// FUNCTION 143c1f0aa FUN_143c1f0aa body=1828 status=ok
// SIG undefined FUN_143c1f0aa(void)

undefined8
FUN_143c1f0aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar3 = (**(code **)(*DAT_14cb536b0 + 0xb0))();
  local_68 = CONCAT44(local_68._4_4_,uVar3);
  local_a8 = 0;
  local_9c = (**(code **)(*DAT_14cb53710 + 0xb0))();
  local_a0 = *(undefined4 *)(param_1 + 0x10);
  plVar5 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  local_c8 = (**(code **)(*plVar5 + 0x520))(plVar5);
  local_c0 = param_5;
  local_b8 = &local_a8;
  iVar4 = xefgSwapChainD3D12InitFromSwapChainDesc
                    (*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
  uVar6 = 0x80004005;
  if (iVar4 != 0) goto LAB_143c1f6c0;
  local_b0 = 0;
  iVar4 = xefgSwapChainD3D12GetSwapChainPtr(*(undefined8 *)(param_1 + 0x18),param_6);
  uVar6 = 0x80004005;
  if (iVar4 != 0) goto LAB_143c1f6c0;
  *param_7 = local_b0;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xd0))();
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14afcdcc0;
  local_60[3] = param_1;
  local_60[4] = (longlong)FUN_143c20194;
  FUN_14110d2ba(uVar6,&local_50,&local_60);
  if (local_58 == 0) {
LAB_143c1f2a0:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (longlong *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143c1f2a0;
  }
  uVar6 = (**(code **)(*DAT_14cb536f8 + 0xd0))();
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14afcdcc0;
  local_60[3] = param_1;
  local_60[4] = (longlong)FUN_143c201bc;
  FUN_14110d2ba(uVar6,&local_50,&local_60);
  if (local_58 == 0) {
LAB_143c1f386:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (longlong *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143c1f386;
  }
  uVar6 = (**(code **)(*DAT_14cb53698 + 0xd0))();
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14afcdcc0;
  local_60[3] = param_1;
  local_60[4] = (longlong)FUN_143c20232;
  FUN_14110d2ba(uVar6,&local_50,&local_60);
  if (local_58 == 0) {
LAB_143c1f46c:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (longlong *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143c1f46c;
  }
  uVar6 = (**(code **)(*DAT_14cb536f8 + 0x38))();
  FUN_143c201bc(param_1,uVar6);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))();
  FUN_143c203a2(param_1,iVar4 == 1);
  iVar4 = (**(code **)(*DAT_14cb53698 + 0xb0))();
  xefgSwapChainSetUiCompositionState(*(undefined8 *)(param_1 + 0x18),iVar4 != 0);
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14afcdd30;
  local_60[3] = param_1;
  local_60[4] = (longlong)FUN_143c1fd26;
  if ((local_60 == (longlong *)0x0) ||
     (cVar2 = (**(code **)(*local_60 + 0x30))(), uVar1 = DAT_14cadbe50, cVar2 == '\0')) {
    if (local_58 == 0) {
      uVar6 = 0;
      goto LAB_143c1f6b1;
    }
    if (local_60 != (longlong *)0x0) {
      uVar6 = 0;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_143c1f69e;
    }
    uVar6 = 0;
  }
  else {
    if ((DAT_14cadbe5c < 1) &&
       (DAT_14cadbe58 = DAT_14cadbe58 + -1, DAT_14cadbe58 <= (int)DAT_14cadbe50)) {
      if (0 < (int)DAT_14cadbe50) {
        iVar4 = 0;
        do {
          if (((*(int *)(DAT_14cadbe48 + 8 + (longlong)iVar4 * 0x10) == 0) ||
              (plVar5 = *(longlong **)(DAT_14cadbe48 + (longlong)iVar4 * 0x10),
              plVar5 == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*plVar5 + 0x28))(), cVar2 != '\0')) {
            FUN_14005b288(&DAT_14cadbe48,iVar4);
            FUN_14005b248(&DAT_14cadbe48);
          }
          else {
            iVar4 = iVar4 + 1;
          }
        } while (iVar4 < (int)DAT_14cadbe50);
      }
      DAT_14cadbe58 = 2;
      if (2 < (int)(DAT_14cadbe50 * 2)) {
        DAT_14cadbe58 = DAT_14cadbe50 * 2;
      }
      if ((DAT_14cadbe58 < (int)uVar1) && (DAT_14cadbe54 != DAT_14cadbe50)) {
        FUN_14045812c();
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    uVar1 = DAT_14cadbe50;
    lVar8 = (longlong)(int)DAT_14cadbe50;
    DAT_14cadbe50 = DAT_14cadbe50 + 1;
    if (DAT_14cadbe54 < DAT_14cadbe50) {
      FUN_1447a71f6(&DAT_14cadbe48,uVar1);
    }
    lVar7 = DAT_14cadbe48;
    lVar8 = lVar8 * 0x10;
    *(undefined8 *)(DAT_14cadbe48 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(longlong **)(lVar7 + lVar8) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar8) = local_58;
LAB_143c1f69e:
    local_58 = 0;
LAB_143c1f6b1:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  uVar6 = 0;
LAB_143c1f6c0:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1f7d0 FUN_143c1f7d0 body=388 status=ok
// SIG undefined FUN_143c1f7d0(void)

int FUN_143c1f7d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined *local_90;
  undefined8 *local_88;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  ulonglong uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 8) == '\0') {
    local_64 = 0;
    local_70 = (longlong *)*param_4;
    local_68 = *(undefined4 *)(param_4 + 2);
    uStack_60 = (undefined4)*(undefined8 *)((longlong)param_4 + 0x1c);
    uStack_5c = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x1c) >> 0x20);
    uStack_58 = *(undefined4 *)((longlong)param_4 + 0x24);
    _local_54 = CONCAT44(1,*(undefined4 *)(param_4 + 5));
    uStack_4c = (ulonglong)*(uint *)((longlong)param_4 + 0x3c);
    local_44 = *(undefined4 *)(param_4 + 8);
    local_78 = (longlong *)0x0;
    (**(code **)*param_2)(param_2,&DAT_14a343f00,&local_78);
    local_88 = param_5;
    local_90 = &DAT_14a345280;
    local_98 = local_78;
    iVar1 = FUN_143c1f0aa(*(undefined8 *)(param_1 + 0x10),param_4[6],&local_70,0);
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 8) = 1;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      iVar1 = 0;
      goto LAB_143c1f910;
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  local_70 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2,param_3,param_4);
  if (-1 < iVar1) {
    *param_5 = local_70;
    (**(code **)(*local_70 + 8))();
    iVar1 = 0;
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
LAB_143c1f910:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 143c1f956 FUN_143c1f956 body=173 status=ok
// SIG undefined FUN_143c1f956(void)

undefined1 FUN_143c1f956(void)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb53670) {
    FUN_144b3d300(&DAT_14cb53670);
    if (DAT_14cb53670 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.Supported",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14cb53668 = (undefined1 *)0x0;
      }
      else {
        DAT_14cb53668 = (undefined1 *)(**(code **)(*plVar2 + 0x60))(plVar2);
      }
      _Init_thread_footer(&DAT_14cb53670);
    }
  }
  if (DAT_14ca84df4 == 0x8086) {
    uVar1 = *DAT_14cb53668;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143c1fa03 FUN_143c1fa03 body=69 status=ok
// SIG undefined FUN_143c1fa03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fa03(void)

{
  _DAT_14cb53678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fa45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53680,1);
  return;
}



// FUNCTION 143c1fa48 FUN_143c1fa48 body=69 status=ok
// SIG undefined FUN_143c1fa48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fa48(void)

{
  _DAT_14cb53690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fa8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53698,1);
  return;
}



// FUNCTION 143c1fa8d FUN_143c1fa8d body=69 status=ok
// SIG undefined FUN_143c1fa8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fa8d(void)

{
  _DAT_14cb536a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1facf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb536b0,1);
  return;
}



// FUNCTION 143c1fad2 FUN_143c1fad2 body=69 status=ok
// SIG undefined FUN_143c1fad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fad2(void)

{
  _DAT_14cb536c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb536c8,1);
  return;
}



// FUNCTION 143c1fb17 FUN_143c1fb17 body=69 status=ok
// SIG undefined FUN_143c1fb17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fb17(void)

{
  _DAT_14cb536d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fb59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb536e0,1);
  return;
}



// FUNCTION 143c1fb5c FUN_143c1fb5c body=69 status=ok
// SIG undefined FUN_143c1fb5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fb5c(void)

{
  _DAT_14cb536f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fb9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb536f8,1);
  return;
}



// FUNCTION 143c1fba1 FUN_143c1fba1 body=69 status=ok
// SIG undefined FUN_143c1fba1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c1fba1(void)

{
  _DAT_14cb53708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fbe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53710,1);
  return;
}



// FUNCTION 143c1fbe6 FUN_143c1fbe6 body=108 status=ok
// SIG undefined FUN_143c1fbe6(void)

undefined8 * FUN_143c1fbe6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14afcdb48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.Enabled",1);
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 143c1fc52 FUN_143c1fc52 body=211 status=ok
// SIG undefined FUN_143c1fc52(void)

bool FUN_143c1fc52(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  iVar3 = xefgSwapChainGetProperties(*(undefined8 *)(param_1 + 0x18));
  uVar2 = local_28;
  plVar1 = DAT_14cb53710;
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*DAT_14cb53710 + 0x18))(DAT_14cb53710);
    FUN_140635eb8(plVar1,uVar2 & 0xffffffff,uVar4 & 0xff000000,0);
    iVar5 = (**(code **)(*DAT_14cb536f8 + 0xb0))();
    if (iVar5 == 0) {
      uVar6 = (**(code **)(*DAT_14cb53710 + 0xb0))();
      plVar1 = DAT_14cb536f8;
      uVar4 = (**(code **)(*DAT_14cb536f8 + 0x18))(DAT_14cb536f8);
      FUN_140635eb8(plVar1,uVar6,uVar4 & 0xff000000,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c1fd26 FUN_143c1fd26 body=291 status=ok
// SIG undefined FUN_143c1fd26(void)

void FUN_143c1fd26(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  lVar4 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar7 = FUN_1413f862e();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30)) && (plVar3 = *(longlong **)(lVar4 + 0x1368), plVar3 != (longlong *)0x0))
    {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_143c1fd6b;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      if (((*(longlong *)(lVar4 + 0x1360) == 0) || (DAT_14c98e618 == 0)) ||
         ((*(longlong **)(DAT_14c98e618 + 0x20) == (longlong *)0x0 ||
          (puVar8 = (undefined8 *)(**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0xb8))(),
          puVar8 == (undefined8 *)0x0)))) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*puVar8;
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
      if (plVar9 != (longlong *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar9 + 8))(plVar9);
        local_28 = (longlong *)0x0;
        iVar6 = (**(code **)*puVar8)(puVar8,&DAT_14afcdb70,&local_28);
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + 0x10))();
        }
        bVar10 = -1 < iVar6;
        goto LAB_143c1fd6d;
      }
    }
  }
LAB_143c1fd6b:
  bVar10 = false;
LAB_143c1fd6d:
  *(bool *)(param_1 + 0x2e) = bVar10;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c1fe4a FUN_143c1fe4a body=106 status=ok
// SIG undefined FUN_143c1fe4a(void)

ulonglong FUN_143c1fe4a(ulonglong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.LogLevel",1);
  uVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4);
  if (uVar2 < 4) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    param_1 = 0;
    iVar3 = xefgSwapChainSetLoggingCallback(*puVar1,uVar2,&DAT_143c1feb4,0);
    if (iVar3 != 0) goto LAB_143c1feac;
  }
  param_1 = CONCAT71((int7)(param_1 >> 8),1);
LAB_143c1feac:
  return param_1 & 0xffffffff;
}



// FUNCTION 143c1feb6 FUN_143c1feb6 body=459 status=ok
// SIG undefined FUN_143c1feb6(void)

void FUN_143c1feb6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = (**(code **)(*DAT_14cb536e0 + 0xa8))();
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    ppuVar6 = &PTR_FUN_14afcdc10;
    *puVar3 = &PTR_FUN_14afcdc10;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3[2] = param_1;
    plVar1 = *(longlong **)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
      puVar3 = *(undefined8 **)(param_1 + 8);
      ppuVar6 = (undefined **)*puVar3;
    }
    cVar2 = (*(code *)*ppuVar6)(puVar3,3);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
      if (cVar2 != '\0') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c8338a0) {
          FUN_144b3d300(&DAT_14c8338a0);
          if (DAT_14c8338a0 == -1) {
            FUN_1456d85e6(&DAT_14c8337f0);
            atexit((_func_5014 *)&LAB_142748837);
            _Init_thread_footer(&DAT_14c8338a0);
          }
        }
        lVar5 = *(longlong *)(param_1 + 8) + 8;
        if (*(longlong *)(param_1 + 8) == 0) {
          lVar5 = 0;
        }
        FUN_146319cd6(&local_28);
        (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,local_28,lVar5);
        if (DAT_14cb53548 != 3) {
          FUN_1446efa72(&DAT_14cb53540,0,3,0x10);
          DAT_14cb53548 = 3;
        }
        puVar3 = DAT_14cb53540;
        *DAT_14cb53540 = &PTR_LAB_14acb8d40;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        puVar3[2] = lVar4;
        *puVar3 = &PTR_FUN_14afcdc50;
        puVar3[3] = param_1;
        puVar3[4] = FUN_143c20082;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c20082 FUN_143c20082 body=127 status=ok
// SIG undefined FUN_143c20082(void)

void FUN_143c20082(longlong param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_38 [36];
  uint local_14 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar1 = xefgSwapChainGetLastPresentStatus(*(undefined8 *)(param_1 + 0x18),local_14);
  fVar2 = DAT_14cb0d290;
  if (iVar1 == 0) {
    fVar2 = (float)local_14[0] * DAT_14cb0d290;
  }
  DAT_14cb0d278 = DAT_14cb0d278 * 0.9 + fVar2 * 0.1;
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c20102 FUN_143c20102 body=145 status=ok
// SIG undefined FUN_143c20102(void)

undefined8 FUN_143c20102(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  FUN_1458f4e7e();
  plVar3 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar4 = (**(code **)(*plVar3 + 0x528))(plVar3,0);
  iVar2 = xefgSwapChainD3D12CreateContext(uVar4,(undefined8 *)(param_1 + 0x18));
  FUN_145be8020();
  if ((((iVar2 == 0) && (cVar1 = FUN_143c1fc52(param_1), cVar1 != '\0')) &&
      (cVar1 = FUN_143c1fe4a(param_1), cVar1 != '\0')) &&
     ((DAT_14cb53640 != 0 &&
      (iVar2 = xefgSwapChainSetLatencyReduction(*(undefined8 *)(param_1 + 0x18)), iVar2 == 0)))) {
    FUN_143c1feb6(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 143c20194 FUN_143c20194 body=39 status=ok
// SIG undefined FUN_143c20194(void)

void FUN_143c20194(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  FUN_143c203a2(param_1,iVar1 == 1);
  return;
}



// FUNCTION 143c201bc FUN_143c201bc body=118 status=ok
// SIG undefined FUN_143c201bc(void)

void FUN_143c201bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_14cb53718 < 1) {
    return;
  }
  iVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
  iVar1 = DAT_14cb53718;
  if (DAT_14cb53718 < iVar2 || iVar2 < 1) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    FUN_140635eb8(param_2,iVar1,uVar3 & 0xff000000,0);
    return;
  }
  xefgSwapChainSetNumInterpolatedFrames(*(undefined8 *)(param_1 + 0x18),iVar2);
  return;
}



// FUNCTION 143c20232 FUN_143c20232 body=41 status=ok
// SIG undefined FUN_143c20232(void)

void FUN_143c20232(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  xefgSwapChainSetUiCompositionState(*(undefined8 *)(param_1 + 0x18),iVar1 != 0);
  return;
}



// FUNCTION 143c2025c FUN_143c2025c body=196 status=ok
// SIG undefined FUN_143c2025c(void)

void FUN_143c2025c(longlong param_1,undefined4 param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
    uVar3 = (**(code **)(*plVar2 + 0x538))(plVar2,param_4,0);
    uStack_40 = 0;
    local_38 = 0;
    local_58 = 4;
    uStack_50 = *(undefined8 *)param_3;
    _local_48 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
    xefgSwapChainD3D12TagFrameResource(*(undefined8 *)(param_1 + 0x18),uVar3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c20322 FUN_143c20322 body=127 status=ok
// SIG undefined FUN_143c20322(void)

void FUN_143c20322(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))();
  if (iVar1 == 1) {
    if ((*(int *)(param_1 + 0x28) == param_2) && (*(char *)(param_1 + 0x2c) != '\x01')) {
      FUN_143c203da(param_1,3,param_2,param_3,param_4,param_5);
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else if (*(char *)(param_1 + 0x2d) == '\x01') {
      iVar1 = xefgSwapChainSetEnabled(*(undefined8 *)(param_1 + 0x18),0);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x2d) = 0;
      }
    }
  }
  return;
}



// FUNCTION 143c203a2 FUN_143c203a2 body=55 status=ok
// SIG undefined FUN_143c203a2(void)

void FUN_143c203a2(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2d) != param_2) {
    cVar1 = FUN_143c1e4a0(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      iVar2 = xefgSwapChainSetEnabled(*(undefined8 *)(param_1 + 0x18),param_2);
      if (iVar2 == 0) {
        *(char *)(param_1 + 0x2d) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 143c203da FUN_143c203da body=385 status=ok
// SIG undefined FUN_143c203da(void)

void FUN_143c203da(longlong param_1,uint param_2,undefined4 param_3,longlong *param_4,int *param_5,
                  undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [56];
  uint local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(**(code **)(*param_4 + 0x20))(param_4);
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar4 = 0;
  uVar3 = (**(code **)(*plVar2 + 0x538))(plVar2,param_6,0);
  local_50 = 0;
  (**(code **)(*plVar1 + 0x50))(plVar1,local_a8);
  if (param_2 < 4) {
    uVar4 = *(undefined4 *)(&DAT_14afcde94 + (ulonglong)param_2 * 4);
  }
  local_70 = param_2;
  local_6c = (**(code **)(*DAT_14cb536c8 + 0xb0))();
  local_68 = *param_5;
  local_64 = param_5[1];
  local_60 = param_5[2] - local_68;
  local_5c = param_5[3] - local_64;
  local_50 = CONCAT44(local_50._4_4_,uVar4);
  local_58 = plVar1;
  if (param_2 == 1) {
    local_b8 = param_6;
    FUN_143c18cb4(param_4,0x10,uVar4,1);
    xefgSwapChainD3D12TagFrameResource(*(undefined8 *)(param_1 + 0x18),uVar3,param_3,&local_70);
    local_b8 = param_6;
    FUN_143c18cb4(param_4,uVar4,0x10,1);
  }
  else {
    xefgSwapChainD3D12TagFrameResource(*(undefined8 *)(param_1 + 0x18),uVar3,param_3,&local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c2055c FUN_143c2055c body=286 status=ok
// SIG undefined FUN_143c2055c(void)

void FUN_143c2055c(longlong param_1,longlong param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [64];
  undefined1 local_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = 0;
  puVar4 = local_c0;
  memset(puVar4,0,0x98);
  local_38 = (**(code **)(*DAT_14cb53680 + 0xb8))();
  local_40 = *(undefined4 *)(param_2 + 0x4c);
  local_3c = *(undefined4 *)(param_2 + 0x50);
  lVar2 = param_2 + 0x60;
  local_34 = local_38;
  do {
    lVar3 = 0;
    do {
      pdVar1 = (double *)(lVar2 + lVar3 * 8);
      *(ulonglong *)(puVar4 + lVar3 * 4) = CONCAT44((float)pdVar1[1],(float)*pdVar1);
      lVar3 = lVar3 + 2;
    } while (lVar3 != 4);
    lVar5 = lVar5 + 1;
    lVar2 = lVar2 + 0x20;
    puVar4 = puVar4 + 0x10;
  } while (lVar5 != 4);
  puVar4 = local_80;
  lVar2 = param_2 + 0xe0;
  lVar5 = 0;
  do {
    lVar3 = 0;
    do {
      pdVar1 = (double *)(lVar2 + lVar3 * 8);
      *(ulonglong *)(puVar4 + lVar3 * 4) = CONCAT44((float)pdVar1[1],(float)*pdVar1);
      lVar3 = lVar3 + 2;
    } while (lVar3 != 4);
    lVar5 = lVar5 + 1;
    lVar2 = lVar2 + 0x20;
    puVar4 = puVar4 + 0x10;
  } while (lVar5 != 4);
  local_30 = (uint)*(byte *)(param_2 + 0x160);
  xefgSwapChainTagFrameConstants(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x48));
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c2067c FUN_143c2067c body=235 status=ok
// SIG undefined FUN_143c2067c(void)

void FUN_143c2067c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))();
  if (cVar1 != '\0') {
    FUN_143c2055c(param_1,param_2);
    FUN_143c203da(param_1,0,*(undefined4 *)(param_2 + 9),*param_2,param_2 + 1,param_3);
    FUN_143c203da(param_1,2,*(undefined4 *)(param_2 + 9),param_2[3],param_2 + 4,param_3);
    FUN_143c203da(param_1,1,*(undefined4 *)(param_2 + 9),param_2[6],param_2 + 7,param_3);
    iVar2 = xefgSwapChainSetPresentId(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 9));
    if ((iVar2 == 0) && (*(char *)(param_1 + 0x2d) == '\0')) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))();
      if ((iVar2 == 1) && (*(char *)(param_1 + 0x2d) == '\0')) {
        iVar2 = xefgSwapChainSetEnabled(*(undefined8 *)(param_1 + 0x18),1);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 0x2d) = 1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 143c20768 FUN_143c20768 body=477 status=ok
// SIG undefined FUN_143c20768(void)

void FUN_143c20768(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_141369f9a(&DAT_14c846b20,L"XeFGUIMode=",&local_24);
  if (cVar1 != '\0') {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    uVar2 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.UIMode",1);
    FUN_140635eb8(uVar2,local_24,0xc000000,0);
  }
  local_28 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_141369f9a(&DAT_14c846b20,L"XeFGResourceValidity=",&local_28);
  if (cVar1 != '\0') {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    uVar2 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.ResourceValidity",1);
    FUN_140635eb8(uVar2,local_28,0xc000000,0);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"XeFGOverrideSwapChainDisabled");
  if (cVar1 != '\0') {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.OverrideSwapChain",1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c20962 FUN_143c20962 body=29 status=ok
// SIG undefined FUN_143c20962(void)

undefined8 FUN_143c20962(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c2099c FUN_143c2099c body=93 status=ok
// SIG undefined FUN_143c2099c(void)

void FUN_143c2099c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcdd30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c209fa FUN_143c209fa body=93 status=ok
// SIG undefined FUN_143c209fa(void)

void FUN_143c209fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afcdd30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c20a58 FUN_143c20a58 body=126 status=ok
// SIG undefined FUN_143c20a58(void)

void FUN_143c20a58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afcdd30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c20ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c20ae2 FUN_143c20ae2 body=21 status=ok
// SIG undefined FUN_143c20ae2(void)

undefined8 FUN_143c20ae2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143c20b08 FUN_143c20b08 body=489 status=ok
// SIG undefined FUN_143c20b08(void)

void FUN_143c20b08(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40._0_4_ = 0x3f800000;
  local_48 = 0;
  FUN_140a6b41e(&DAT_14cb53678,L"r.XeFG.MotionVectorScale",&local_40,
                L"[default: 1.0f] Scale applied to motion vector.");
  atexit(FUN_143c1fa03);
  local_40._0_4_ = 0;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb53690,L"r.XeFG.UICompositionState",&local_40,
                L"[default: 0] UI composition state. If something is wrong with your UI, try to enable UI composition. 0: Disabled\n 1: Enabled"
               );
  atexit(FUN_143c1fa48);
  local_40._0_4_ = 5;
  local_48 = 4;
  FUN_14078dbce(&DAT_14cb536a8,L"r.XeFG.UIMode",&local_40,
                L"[default: 5] UI mode. 0: Determine UI handling mode automatically, based on provided inputs: hudless color and UI texture\n 1: Interpolate on backbuffer, without any UI handling\n 2: Interpolate on backbuffer, refine UI using UI texture + alpha\n 3: Interpolate on hudless color, blend UI from UI texture + alpha\n 4: Interpolate on hudless color, extract UI from backbuffer\n 5: Interpolate on hudless color, blend UI from UI texture + alpha and refine it by extracting from backbuffer"
               );
  atexit(FUN_143c1fa8d);
  local_40 = CONCAT44(local_40._4_4_,1);
  local_48 = 4;
  FUN_14078dbce(&DAT_14cb536c0,L"r.XeFG.ResourceValidity",&local_40,
                L"[default: 1] Validity of input resources of XeFG, set it via command line -XeFGResourceValidity=\n 0: XEFG_SWAPCHAIN_RV_UNTIL_NEXT_PRESENT\n 1: XEFG_SWAPCHAIN_RV_ONLY_NOW"
               );
  atexit(FUN_143c1fad2);
  local_40 = CONCAT71(local_40._1_7_,1);
  local_48 = 4;
  FUN_140bd5914(&DAT_14cb536d8,L"r.XeFG.OverrideSwapChain",&local_40,
                L"[default: true] If override swap chain, it should help prevent conflicts with other similar plugins."
               );
  atexit(FUN_143c1fb17);
  local_40 = local_40 & 0xffffffff00000000;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb536f0,L"r.XeFG.MaxInterpolatedFrames",&local_40,
                L"[default: 0] Max frames XeFG interpolates. 0: auto (uses r.XeFG.MaxInterpolatedFramesSupported). Explicit values must be in range [1, r.XeFG.MaxInterpolatedFramesSupported]."
               );
  atexit(FUN_143c1fb5c);
  local_48 = 4;
  FUN_141471170(&DAT_14cb53708,L"r.XeFG.MaxInterpolatedFramesSupported",&DAT_14cb53718,
                L"Max interpolated frames supported by XeFG.");
  atexit(FUN_143c1fba1);
  local_40 = 0x800000014afcdc00;
  local_2c = 7;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_1464aaa24(&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c20cf4 FUN_143c20cf4 body=69 status=ok
// SIG undefined FUN_143c20cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c20cf4(void)

{
  _DAT_14cb53730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c20d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53738,1);
  return;
}



// FUNCTION 143c20d39 FUN_143c20d39 body=69 status=ok
// SIG undefined FUN_143c20d39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c20d39(void)

{
  _DAT_14cb53748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c20d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53750,1);
  return;
}



// FUNCTION 143c20d7e FUN_143c20d7e body=1065 status=ok
// SIG undefined FUN_143c20d7e(void)

void FUN_143c20d7e(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined6 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auStack_718 [32];
  undefined1 local_6f8;
  undefined1 local_6e9;
  longlong local_6e8;
  undefined8 *local_6e0;
  longlong local_6d8;
  undefined *local_6d0;
  undefined1 local_6c8 [112];
  undefined8 *local_658;
  undefined8 *local_650;
  longlong local_630;
  uint local_628;
  uint local_624;
  longlong local_560;
  uint local_558;
  uint local_554;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_718;
  if ((DAT_14cb0d2b0 != 0) && (lVar15 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar15 != 0)) {
    plVar14 = *(longlong **)(lVar15 + 0x118);
    if (plVar14 == (longlong *)0x0) {
LAB_143c20e23:
      if (param_2 != 0) goto LAB_143c20f0c;
    }
    else {
      iVar9 = (int)plVar14[1];
      do {
        if (iVar9 == 0) goto LAB_143c20e23;
        LOCK();
        iVar7 = (int)plVar14[1];
        bVar19 = iVar9 == iVar7;
        if (bVar19) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar19);
      lVar15 = *(longlong *)(lVar15 + 0x110);
      LOCK();
      plVar11 = plVar14 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if (lVar15 != param_2) goto LAB_143c20f0c;
    }
    local_6e8 = *param_3;
    if (local_6e8 != 0) {
      LOCK();
      *(int *)(local_6e8 + 8) = *(int *)(local_6e8 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar5 = **(undefined8 **)(param_1 + 8);
      uVar6 = (*(undefined8 **)(param_1 + 8))[1];
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_143c22ce0(param_1 + 8);
      }
      iVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0x30) + 0xb0))();
      if (((((iVar9 == 1) && (DAT_14cb0d2b0 != 0)) &&
           (lVar15 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar15 != 0)) &&
          ((*(char *)(lVar15 + 0x70) == '\0' && ((*(byte *)(lVar15 + 0x6c) & 2) == 0)))) &&
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2e) == '\x01')) {
        uVar20 = *(undefined4 *)(DAT_14cb53758 + 4);
        FUN_1407779ba(local_6c8,&DAT_14ca85100);
        puVar17 = (undefined8 *)((longlong)local_658 + 0xfU & 0xfffffffffffffff0);
        puVar13 = puVar17 + 6;
        if (local_650 < puVar13) {
          FUN_140023dd8(&local_658,0x40);
          puVar17 = (undefined8 *)((longlong)local_658 + 0xfU & 0xfffffffffffffff0);
          puVar13 = puVar17 + 6;
        }
        uVar3 = local_628;
        *puVar17 = &PTR_FUN_14afce4a8;
        puVar17[2] = 0;
        puVar17[3] = 0;
        *(undefined8 *)((longlong)puVar17 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar17 + 0x24) = 0;
        lVar15 = (longlong)(int)local_628;
        local_628 = local_628 + 1;
        local_658 = puVar13;
        if (local_624 < local_628) {
          FUN_1448cfae8(&local_630,uVar3);
        }
        *(undefined8 **)(local_630 + lVar15 * 8) = puVar17;
        cVar8 = (**(code **)(*DAT_14cb53738 + 0xa8))();
        if (cVar8 == '\0') {
          uVar20 = 0x40000000;
        }
        uVar12 = FUN_143c1b83b(local_6c8,uVar20,&local_6e8);
        puVar17[2] = uVar12;
        FUN_1485fb23c();
        FUN_140069376(local_6c8);
        uVar16 = (undefined6)((ulonglong)local_6c8 >> 0x10);
        uVar20 = (undefined4)CONCAT62(uVar16,0x33);
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
          uVar20 = (undefined4)CONCAT62(uVar16,0x35);
        }
        puVar18 = (undefined8 *)((longlong)local_658 + 7U & 0xfffffffffffffff8);
        puVar13 = puVar18 + 0x3b;
        if (local_650 < puVar13) {
          FUN_140023dd8(&local_658,0x1e0);
          puVar18 = (undefined8 *)((longlong)local_658 + 7U & 0xfffffffffffffff8);
          puVar13 = puVar18 + 0x3b;
        }
        local_6d8 = DAT_14cb53880;
        if (DAT_14cb53880 != 0) {
          LOCK();
          *(int *)(DAT_14cb53880 + 8) = *(int *)(DAT_14cb53880 + 8) + 1;
          UNLOCK();
        }
        local_6d0 = &DAT_14cb53838;
        local_6f8 = 0;
        local_6e0 = puVar17 + 2;
        local_658 = puVar13;
        FUN_140068f1a(puVar18,&local_6e9,&local_6e0,uVar20);
        uVar3 = local_558;
        *puVar18 = &PTR_FUN_14afce4b0;
        puVar18[0x37] = param_1;
        puVar18[0x38] = puVar17 + 2;
        puVar18[0x39] = uVar5;
        puVar18[0x3a] = uVar6;
        lVar15 = (longlong)(int)local_558;
        local_558 = local_558 + 1;
        if (local_554 < local_558) {
          FUN_14470e57a(&local_560,uVar3);
        }
        *(undefined8 **)(local_560 + lVar15 * 8) = puVar18;
        *(uint *)((longlong)puVar18 + 0x2c) = local_558 - 1;
        FUN_140069100(local_6c8,puVar18);
        FUN_140779360(local_6c8);
        FUN_140778010(local_6c8);
      }
    }
    lVar15 = local_6e8;
    if (local_6e8 != 0) {
      LOCK();
      puVar2 = (uint *)(local_6e8 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_6e8 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_6e8 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar14 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar19 = plVar14 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar19) {
                plVar14 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar19 = plVar11 != DAT_14ca843c8;
              plVar14 = plVar10;
              if (bVar19) {
                plVar11 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
LAB_143c20f0c:
  if ((local_50 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c211a8 FUN_143c211a8 body=91 status=ok
// SIG undefined FUN_143c211a8(void)

void FUN_143c211a8(void)

{
  if (DAT_14cb53768 != 0) {
    if (DAT_14cb53760 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb53760)(DAT_14cb53760,0);
    FUN_1446efa72(&DAT_14cb53760,0,0,0x10);
    DAT_14cb53768 = 0;
  }
  if (DAT_14cb53760 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c21239 FUN_143c21239 body=69 status=ok
// SIG undefined FUN_143c21239(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c21239(void)

{
  _DAT_14cb53780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c2127b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53788,1);
  return;
}



// FUNCTION 143c2127e FUN_143c2127e body=69 status=ok
// SIG undefined FUN_143c2127e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c2127e(void)

{
  _DAT_14cb53798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c212c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb537a0,1);
  return;
}



// FUNCTION 143c212c3 FUN_143c212c3 body=69 status=ok
// SIG undefined FUN_143c212c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c212c3(void)

{
  _DAT_14cb537b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c21305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb537b8,1);
  return;
}



// FUNCTION 143c21308 FUN_143c21308 body=69 status=ok
// SIG undefined FUN_143c21308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c21308(void)

{
  _DAT_14cb537c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c2134a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb537d0,1);
  return;
}



// FUNCTION 143c2134d FUN_143c2134d body=69 status=ok
// SIG undefined FUN_143c2134d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c2134d(void)

{
  _DAT_14cb537e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c2138f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb537e8,1);
  return;
}



// FUNCTION 143c21392 FUN_143c21392 body=69 status=ok
// SIG undefined FUN_143c21392(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c21392(void)

{
  _DAT_14cb537f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c213d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53800,1);
  return;
}



// FUNCTION 143c213dc FUN_143c213dc body=1484 status=ok
// SIG undefined FUN_143c213dc(void)

ulonglong FUN_143c213dc(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  _RTL_CRITICAL_SECTION *p_Var14;
  ulonglong uVar15;
  _LIST_ENTRY *p_Var16;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  _LIST_ENTRY *local_88;
  undefined1 local_80 [8];
  _RTL_CRITICAL_SECTION local_78;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((DAT_14ca84df4 == 0x8086) || (*DAT_14cb53808 == '\0')) &&
     (cVar7 = FUN_143c1af84(L"libxess_fg.dll"), cVar7 != '\0')) {
    FUN_1446f470e(&local_90,L"XeLLCore",1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    DAT_14cb53810 = FUN_1402c9134(&DAT_14c874628,local_90,&local_78,1);
    FUN_1446f470e(&local_98,L"XeFGRHI",1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    FUN_1402c9134(&DAT_14c874628,local_98,&local_78,1);
    uVar6 = DAT_14cb53810;
    puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    FUN_143c1fbe6(puVar9,uVar6);
    puVar5 = DAT_14cb53778;
    puVar10 = DAT_14cb53778;
    if ((DAT_14cb53778 != puVar9) && (puVar10 = puVar9, DAT_14cb53778 != (undefined8 *)0x0)) {
      puVar10 = (undefined8 *)*DAT_14cb53778;
      DAT_14cb53778 = puVar9;
      (*(code *)*puVar10)(puVar5,1);
      puVar10 = DAT_14cb53778;
    }
    DAT_14cb53778 = puVar10;
    if (DAT_14cb53778 != (undefined8 *)0x0) {
      cVar7 = FUN_143c20102(DAT_14cb53778);
      puVar5 = DAT_14cb53778;
      if (cVar7 != '\0') {
        puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        puVar5 = DAT_14cb53778;
        *puVar10 = &PTR_FUN_14afcdfb0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = puVar5;
        lVar2 = *(longlong *)(DAT_14c98e618 + 0x20);
        InitializeCriticalSection(&local_78);
        SetCriticalSectionSpinCount(&local_78,4000);
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        EnterCriticalSection(&local_78);
        if (local_48 != 3) {
          FUN_1446efa72(&local_50,0,3,0x10);
          local_48 = 3;
        }
        *local_50 = &PTR_LAB_14a5885e0;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_50[2] = lVar11;
        *local_50 = &PTR_FUN_14afce3d0;
        local_50[3] = puVar10;
        local_50[4] = FUN_143c20d7e;
        LeaveCriticalSection(&local_78);
        FUN_14574c986(lVar2 + 0x78,&local_88,&local_78);
        FUN_1401cb1ee(&local_78);
        lVar2 = DAT_14c98e618;
        local_78.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        local_78.LockCount = 0;
        p_Var14 = &local_78;
        FUN_1446efa72(p_Var14,0,2,0x10);
        local_78.LockCount = 2;
        *(undefined ***)local_78.DebugInfo = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        p_Var16 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
        lVar13 = DAT_14c758608 + 1;
        if (p_Var16 == (_LIST_ENTRY *)0x0) {
          LOCK();
          UNLOCK();
          p_Var16 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        ((local_78.DebugInfo)->ProcessLocksList).Flink = p_Var16;
        *(undefined ***)local_78.DebugInfo = &PTR_FUN_14afce440;
        ((local_78.DebugInfo)->ProcessLocksList).Blink = local_88;
        if ((local_78.DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) ||
           (cVar7 = (**(code **)(*(longlong *)local_78.DebugInfo + 0x30))(), cVar7 == '\0')) {
          if (local_78.LockCount == 0) goto LAB_143c21850;
          if (local_78.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            (*(code *)**(undefined8 **)local_78.DebugInfo)(local_78.DebugInfo,0);
            FUN_1446efa72(&local_78,0,0,0x10);
            goto LAB_143c21843;
          }
        }
        else {
          p_Var14 = (_RTL_CRITICAL_SECTION *)(lVar2 + 0x580);
          if (*(int *)(lVar2 + 0x594) < 1) {
            iVar1 = *(int *)(lVar2 + 0x588);
            iVar8 = *(int *)(lVar2 + 0x590) + -1;
            *(int *)(lVar2 + 0x590) = iVar8;
            if (iVar8 <= iVar1) {
              iVar8 = iVar1;
              if (0 < iVar1) {
                iVar12 = 0;
                do {
                  if (((*(int *)(&p_Var14->DebugInfo->CriticalSection + (longlong)iVar12 * 2) == 0)
                      || (plVar3 = *(longlong **)(&p_Var14->DebugInfo->Type + (longlong)iVar12 * 8),
                         plVar3 == (longlong *)0x0)) ||
                     (cVar7 = (**(code **)(*plVar3 + 0x28))(), cVar7 != '\0')) {
                    FUN_14005b288(p_Var14,iVar12);
                    FUN_14005b248(p_Var14);
                  }
                  else {
                    iVar12 = iVar12 + 1;
                  }
                  iVar8 = *(int *)(lVar2 + 0x588);
                } while (iVar12 < iVar8);
              }
              iVar12 = 2;
              if (2 < iVar8 * 2) {
                iVar12 = iVar8 * 2;
              }
              *(int *)(lVar2 + 0x590) = iVar12;
              if ((iVar12 < iVar1) && (*(int *)(lVar2 + 0x58c) != iVar8)) {
                FUN_14045812c();
              }
            }
          }
          if ((local_78.LockCount != 0) && (local_78.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0))
          {
            (**(code **)(*(longlong *)local_78.DebugInfo + 0x38))(local_78.DebugInfo,local_80);
          }
          iVar1 = *(int *)(lVar2 + 0x588);
          lVar13 = (longlong)iVar1;
          *(uint *)(lVar2 + 0x588) = iVar1 + 1U;
          if (*(uint *)(lVar2 + 0x58c) < iVar1 + 1U) {
            FUN_1447a71f6(p_Var14,iVar1);
          }
          p_Var4 = p_Var14->DebugInfo;
          *(undefined8 *)(&p_Var4->Type + lVar13 * 8) = 0;
          *(undefined4 *)(&p_Var4->CriticalSection + lVar13 * 2) = 0;
          *(PRTL_CRITICAL_SECTION_DEBUG *)(&p_Var4->Type + lVar13 * 8) = local_78.DebugInfo;
          local_78.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          *(LONG *)(&p_Var4->CriticalSection + lVar13 * 2) = local_78.LockCount;
LAB_143c21843:
          local_78.LockCount = 0;
LAB_143c21850:
          if (local_78.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            FUN_1400020a8();
          }
        }
        puVar5 = DAT_14cb53770;
        uVar15 = CONCAT71((int7)((ulonglong)p_Var14 >> 8),1);
        puVar9 = DAT_14cb53770;
        if ((DAT_14cb53770 != puVar10) && (puVar9 = puVar10, DAT_14cb53770 != (undefined8 *)0x0)) {
          puVar9 = (undefined8 *)*DAT_14cb53770;
          DAT_14cb53770 = puVar10;
          (*(code *)*puVar9)(puVar5,1);
          puVar9 = DAT_14cb53770;
        }
        goto LAB_143c21571;
      }
      if (DAT_14cb53778 != (undefined8 *)0x0) {
        DAT_14cb53778 = (undefined8 *)0x0;
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  uVar15 = 0;
  puVar9 = DAT_14cb53770;
LAB_143c21571:
  DAT_14cb53770 = puVar9;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c219aa FUN_143c219aa body=333 status=ok
// SIG undefined FUN_143c219aa(void)

void FUN_143c219aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  puVar4 = DAT_14cb53770;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb53770 != (undefined8 *)0x0) {
    DAT_14cb53770 = (undefined8 *)0x0;
    (**(code **)*puVar4)(puVar4,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  puVar4 = DAT_14cb53778;
  if (DAT_14cb53778 != (undefined8 *)0x0) {
    DAT_14cb53778 = (undefined8 *)0x0;
    (**(code **)*puVar4)(puVar4,1);
  }
  DAT_14cb53810 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  FUN_1446f470e(&local_20,L"XeLLCore",1);
  FUN_14156ce54(&DAT_14c874628,local_20,1,1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c21b00 FUN_143c21b00 body=524 status=ok
// SIG undefined FUN_143c21b00(void)

void FUN_143c21b00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  uVar5 = DAT_14cb53778;
  uVar4 = DAT_14cb53770;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *puVar6 = &PTR_FUN_14afce510;
  puVar6[5] = uVar5;
  puVar6[6] = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14afce5f0;
  plVar7[2] = (longlong)puVar6;
  local_30 = plVar7;
  if (puVar6 == (undefined8 *)0x0) {
    local_38 = (undefined8 *)0x0;
    if (plVar7 != (longlong *)0x0) goto LAB_143c21bff;
LAB_143c21c8d:
    FUN_141332b2e(&local_38);
    *(undefined8 **)(param_1 + 0x18) = puVar6;
    plVar8 = *(longlong **)(param_1 + 0x20);
    if (plVar8 == (longlong *)0x0) goto LAB_143c21cff;
    *(longlong **)(param_1 + 0x20) = plVar7;
    bVar3 = true;
LAB_143c21ca6:
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (bVar3) goto LAB_143c21cff;
  }
  else {
    local_38 = puVar6;
    if (plVar7 == (longlong *)0x0) {
      puVar6[1] = puVar6;
      local_30 = (longlong *)0x0;
      goto LAB_143c21c8d;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    puVar6[1] = puVar6;
    if ((longlong *)puVar6[2] != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)puVar6[2];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      puVar6[2] = plVar7;
    }
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
LAB_143c21bff:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_141332b2e();
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(undefined8 **)(param_1 + 0x18) = puVar6;
    plVar8 = *(longlong **)(param_1 + 0x20);
    if (plVar7 != plVar8) {
      *(longlong **)(param_1 + 0x20) = plVar7;
      if (plVar8 == (longlong *)0x0) goto LAB_143c21cc8;
      bVar3 = false;
      goto LAB_143c21ca6;
    }
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143c21cc8:
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_143c21cff:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c21d20 FUN_143c21d20 body=69 status=ok
// SIG undefined FUN_143c21d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c21d20(void)

{
  _DAT_14cb53820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c21d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb53828,1);
  return;
}



// FUNCTION 143c21d66 FUN_143c21d66 body=123 status=ok
// SIG undefined FUN_143c21d66(void)

undefined8 FUN_143c21d66(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x28;
    if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) {
      lVar2 = 0;
    }
    if ((((lVar2 == *(longlong *)(*(longlong *)(param_2 + 8) + 0x30)) &&
         (iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x30) + 0xb0))(),
         iVar1 == 1)) && (DAT_14cb0d2b0 != 0)) &&
       (((lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar2 != 0 &&
         (*(char *)(lVar2 + 0x70) == '\0')) && ((*(byte *)(lVar2 + 0x6c) & 2) == 0)))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),
                      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2e));
    }
  }
  return 0;
}



// FUNCTION 143c21de2 FUN_143c21de2 body=2937 status=ok
// SIG undefined FUN_143c21de2(void)

void FUN_143c21de2(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_2c8 [32];
  wchar_t *local_2a8;
  undefined1 local_2a0 [16];
  char *local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined8 **local_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined1 local_260;
  ulonglong *local_258;
  longlong local_250;
  ulonglong local_248;
  int local_23c;
  int local_238;
  undefined4 local_234;
  longlong *local_230;
  longlong local_228;
  undefined8 *local_220;
  undefined8 local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d9;
  undefined8 local_1d8 [17];
  undefined1 local_14c [12];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined6 uStack_8a;
  ulonglong local_80;
  undefined6 uVar20;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x30) + 8))();
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
  uVar3 = *(undefined8 *)(lVar9 + 0x1c8);
  lVar9 = *(longlong *)(lVar9 + 0x2f0);
  if ((*(byte *)(lVar9 + 0x24) & 4) == 0) {
    lVar9 = FUN_14476842e(param_2,&DAT_14ca63b28,L"BlackDummy",2);
  }
  uVar11 = *(undefined8 *)(param_3 + 0x4d8);
  uVar4 = *(undefined8 *)(param_3 + 0x4e0);
  if ((DAT_14cb53760 != (longlong *)0x0 && DAT_14cb53768 != 0) &&
     (cVar5 = (**(code **)(*DAT_14cb53760 + 0x30))(), cVar5 != '\0')) {
    plVar15 = DAT_14cb53760;
    if (DAT_14cb53768 == 0) {
      plVar15 = (longlong *)0x0;
    }
    cVar5 = (**(code **)(*plVar15 + 0x58))(plVar15,param_3);
    if (cVar5 != '\0') goto LAB_143c21ed3;
  }
  if (*(char *)(param_3 + 0x30ea) == '\0') {
    local_1f8 = *(undefined8 *)(param_3 + 0x30f8);
    local_200 = *(undefined8 *)(param_3 + 0x3100);
    local_238 = *(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc);
    fVar2 = *(float *)(*(longlong *)(param_3 + 8) + 0x110);
    fVar23 = *(float *)(param_3 + 0x45c);
    local_23c = *(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8);
    local_218 = DAT_14c967818;
    local_208 = *(undefined8 *)(param_1 + 0x28);
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_1d8[0] = 0;
    local_1d8[1] = 0;
    local_1d8[2] = 0;
    local_1d8[3] = 0;
    local_1d8[4] = 0;
    local_1d8[5] = 0;
    local_1d8[6] = 0;
    local_1d8[7] = 0;
    local_1d8[8] = 0;
    local_1d8[9] = 0;
    local_1d8[10] = 0;
    local_1d8[0xb] = 0;
    local_1d8[0xc] = 0;
    local_1d8[0xd] = 0;
    local_1d8[0xe] = 0;
    local_1d8[0xf] = 0;
    puVar1 = (ulonglong *)(param_2 + 0x70);
    local_220 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar12 = local_220 + 6;
    local_258 = puVar1;
    local_1f0 = uVar4;
    local_1e8 = uVar11;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x40);
      local_220 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar12 = local_220 + 6;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    *local_220 = &PTR_FUN_14afce730;
    local_220[2] = 0;
    local_220[3] = 0;
    local_220[4] = 0;
    iVar6 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar6);
    }
    puVar1 = local_258;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar6 * 8) = local_220;
    uStack_94 = *(undefined4 *)(lVar8 + 0x8c);
    uStack_90 = *(undefined2 *)(lVar8 + 0x90);
    local_b8 = *(undefined4 *)(lVar8 + 0x68);
    uStack_8e = (undefined2)*(undefined4 *)(lVar8 + 0x92);
    uStack_8c = (undefined2)((uint)*(undefined4 *)(lVar8 + 0x92) >> 0x10);
    local_c0 = (undefined8 *)&DAT_00020008;
    uStack_b4 = (undefined4)*(undefined8 *)(lVar8 + 0x6c);
    uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x6c) >> 0x20);
    uStack_ac = (undefined4)*(undefined8 *)(lVar8 + 0x74);
    uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x74) >> 0x20);
    iVar13 = (int)*(undefined8 *)(lVar8 + 0x84);
    iVar6 = DAT_14ca84e40;
    if (iVar13 < DAT_14ca84e40) {
      iVar6 = iVar13;
    }
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    iVar14 = (int)((ulonglong)*(undefined8 *)(lVar8 + 0x84) >> 0x20);
    iVar13 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      iVar13 = iVar14;
    }
    uStack_a4 = (undefined4)*(undefined8 *)(lVar8 + 0x7c);
    uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x7c) >> 0x20);
    if (iVar13 < 2) {
      iVar13 = 1;
    }
    local_9c = CONCAT44(iVar13,iVar6);
    uVar21 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar10 = uVar21 + 0x120;
    local_228 = lVar8;
    if (*(ulonglong *)(param_2 + 0x78) < uVar10) {
      FUN_140023dd8(local_258,0x128);
      uVar21 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar10 = uVar21 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar10;
    local_250 = param_1;
    local_230 = (longlong *)(param_2 + 0x98);
    FUN_1456bbb8c(uVar21,L"XeFG::HUDlessColor",&local_c0,0);
    iVar6 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar6 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar6);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar6 * 8) = uVar21;
    *(int *)(uVar21 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    local_b8 = DAT_14c9a52a0;
    local_c0 = DAT_14c9a5298;
    uStack_ac = DAT_14c9a52a0;
    uStack_a0 = DAT_14c9a52a0;
    local_9c = 0;
    uStack_94 = 1;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    uStack_8a = 0x10000;
    uStack_b4 = (undefined4)DAT_14c967818;
    uStack_b0 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
    uStack_a8 = uStack_b4;
    uStack_a4 = uStack_b0;
    FUN_1400e8d41(param_2,local_228,uVar21,&local_c0);
    puVar12 = local_220;
    local_234 = DAT_14c7590b0;
    local_210 = (ulonglong)(uint)(float)*(double *)(param_3 + 0x125a0);
    local_248 = (ulonglong)(uint)(float)*(double *)(param_3 + 0x125a8);
    puVar17 = (undefined8 *)(param_3 + 0x8b0);
    puVar16 = local_1d8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar16 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar19 = (undefined4 *)(param_3 + 0xc30);
    puVar17 = &local_140;
    for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined4 *)puVar17 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar17 = (undefined8 *)((longlong)puVar17 + 4);
    }
    local_220[3] = uVar21;
    local_2a8 = L"XeFG::FlattenedVelocity";
    local_2a0[8] = 0;
    local_2a0._0_8_ = &local_c0;
    uVar11 = FUN_143c1b1c8(param_2,uVar3,lVar9,param_3);
    puVar12[4] = uVar11;
    puVar12[2] = uVar3;
    FUN_1485fb6e0();
    FUN_140069376(param_2);
    lVar9 = local_250;
    puVar1 = local_258;
    uVar20 = (undefined6)((ulonglong)puVar19 >> 0x10);
    uVar18 = (undefined4)CONCAT62(uVar20,0x33);
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar18 = (undefined4)CONCAT62(uVar20,0x35);
    }
    lVar8 = local_248 << 0x20;
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar16 + 0x68;
    if (*(undefined8 **)(param_2 + 0x78) < puVar17) {
      FUN_140023dd8(local_258,0x350);
      puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar16 + 0x68;
    }
    lVar8 = lVar8 + local_210;
    *local_258 = (ulonglong)puVar17;
    local_b8 = (undefined4)DAT_14cb53908;
    uStack_b4 = (undefined4)((ulonglong)DAT_14cb53908 >> 0x20);
    if (DAT_14cb53908 != 0) {
      LOCK();
      *(int *)(DAT_14cb53908 + 8) = *(int *)(DAT_14cb53908 + 8) + 1;
      UNLOCK();
    }
    uStack_b0 = 0x4cb538c0;
    uStack_ac = 1;
    local_2a8 = (wchar_t *)((ulonglong)local_2a8 & 0xffffffffffffff00);
    local_c0 = puVar12 + 2;
    FUN_140068f1a(puVar16,&local_1d9,&local_c0,uVar18);
    *puVar16 = &PTR_FUN_14afce740;
    puVar16[0x38] = local_208;
    puVar16[0x39] = puVar12 + 2;
    puVar16[0x3a] = 0;
    puVar16[0x3b] = local_1e8;
    puVar16[0x3c] = local_1f0;
    puVar16[0x3d] = 0;
    puVar16[0x3e] = local_1f8;
    puVar16[0x3f] = local_200;
    puVar16[0x40] = 0;
    puVar16[0x41] = local_1f8;
    puVar16[0x42] = local_200;
    *(undefined4 *)(puVar16 + 0x43) = local_234;
    *(longlong *)((longlong)puVar16 + 0x21c) = lVar8;
    memcpy((void *)((longlong)puVar16 + 0x224),local_14c,0x8c);
    puVar12 = local_1d8;
    puVar17 = puVar16 + 0x56;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar17 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar17 = puVar17 + 1;
    }
    *(undefined1 *)(puVar16 + 0x66) = 0;
    iVar6 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar6);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar16);
    iVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar9 + 0x28) + 0x30) + 0xb0))();
    puVar1 = local_258;
    if ((iVar6 == 1) && (*(int *)(DAT_14cb53830 + 4) != 0)) {
      fVar22 = (float)local_238 * fVar2 * fVar23;
      fVar23 = (float)local_23c * fVar2 * fVar23;
      puVar17 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar12 = puVar17 + 0x22;
      if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
        FUN_140023dd8(local_258,0x120);
        puVar17 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar12 = puVar17 + 0x22;
      }
      *local_258 = (ulonglong)puVar12;
      *puVar17 = &PTR_FUN_14a1fbd30;
      lVar9 = 0x22;
      do {
        puVar12 = (undefined8 *)((longlong)puVar17 + lVar9 + -0x12);
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined4 *)((longlong)puVar17 + lVar9 + -2) = 0xffff0000;
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0xe2);
      *(undefined4 *)((longlong)puVar17 + 0xe4) = 0;
      puVar17[0x1a] = 0;
      puVar17[0x1b] = 0;
      *(undefined2 *)(puVar17 + 0x1c) = 0;
      *(undefined4 *)(puVar17 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar17 + 0xec) = 0xffffffff;
      *(undefined4 *)(puVar17 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar17 + 0xf4) = 0xffffffff;
      *(undefined4 *)(puVar17 + 0x1f) = 0;
      *(undefined2 *)((longlong)puVar17 + 0xfc) = 0;
      puVar17[0x20] = 0;
      iVar6 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar6 + 1U) {
        FUN_1448cfae8(local_230,iVar6);
      }
      *(undefined8 **)(*local_230 + (longlong)iVar6 * 8) = puVar17;
      puVar17[2] = local_228;
      puVar17[3] = 0;
      *(undefined4 *)(puVar17 + 4) = 0xffff0000;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1))
      {
        FUN_145fddb1e(&local_c0);
        local_260 = 0;
        local_270 = 0;
        local_290 = "Unknown";
        local_2a0 = (undefined1  [16])0x0;
        local_2a8 = L"FRenderTargetParameters";
        local_268 = 0;
        local_280 = 0x100;
        local_288 = 0x7af;
        local_278 = &local_c0;
        FUN_140b49562(&DAT_14c9c1000,0,1);
        if (local_c0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143c23810);
        _Init_thread_footer(&DAT_14c9c1080);
      }
      FUN_140069376(param_2);
      puVar1 = local_258;
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar16 + 0x39;
      if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
        FUN_140023dd8(local_258,0x1d0);
        puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar16 + 0x39;
      }
      *local_258 = (ulonglong)puVar12;
      local_b8 = (undefined4)DAT_14c9c1048;
      uStack_b4 = (undefined4)((ulonglong)DAT_14c9c1048 >> 0x20);
      if (DAT_14c9c1048 != 0) {
        LOCK();
        *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
        UNLOCK();
      }
      uStack_b0 = 0x4c9c1000;
      uStack_ac = 1;
      local_2a8 = (wchar_t *)CONCAT71(local_2a8._1_7_,1);
      local_c0 = puVar17 + 2;
      FUN_140068f1a(puVar16,&local_1d9,&local_c0,1);
      lVar9 = local_250;
      *puVar16 = &PTR_FUN_14afce7b0;
      puVar16[0x37] = local_218;
      puVar16[0x38] =
           CONCAT44(-((int)ROUND(-0.5 - (fVar22 + fVar22)) >> 1),
                    -((int)ROUND(-0.5 - (fVar23 + fVar23)) >> 1));
      iVar6 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0x174) < iVar6 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar6);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar6 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar16);
    }
    lVar9 = *(longlong *)(lVar9 + 0x30);
    plVar15 = (longlong *)(lVar9 + 8);
    *(undefined4 *)(lVar9 + 0x10) = 0;
    if (*(int *)(lVar9 + 0x14) == 0) {
      uVar7 = 0;
      iVar6 = 0;
    }
    else {
      FUN_143c22ce0(plVar15);
      iVar6 = *(int *)(lVar9 + 0x10);
      uVar7 = *(uint *)(lVar9 + 0x14);
    }
    uVar3 = *(undefined8 *)(param_3 + 0x4d8);
    uVar11 = *(undefined8 *)(param_3 + 0x4e0);
    *(uint *)(lVar9 + 0x10) = iVar6 + 1U;
    if (uVar7 < iVar6 + 1U) {
      FUN_143c2301e(plVar15,iVar6);
    }
    lVar9 = *plVar15;
    *(undefined8 *)(lVar9 + (longlong)iVar6 * 0x10) = uVar3;
    *(undefined8 *)(lVar9 + 8 + (longlong)iVar6 * 0x10) = uVar11;
  }
LAB_143c21ed3:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2295c FUN_143c2295c body=57 status=ok
// SIG undefined FUN_143c2295c(void)

undefined8 * FUN_143c2295c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afcdfb0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c22996 FUN_143c22996 body=29 status=ok
// SIG undefined FUN_143c22996(void)

undefined8 FUN_143c22996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c229d0 FUN_143c229d0 body=93 status=ok
// SIG undefined FUN_143c229d0(void)

void FUN_143c229d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afce3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c22a2e FUN_143c22a2e body=93 status=ok
// SIG undefined FUN_143c22a2e(void)

void FUN_143c22a2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afce3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143c22a8c FUN_143c22a8c body=126 status=ok
// SIG undefined FUN_143c22a8c(void)

void FUN_143c22a8c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afce3d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c22afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c22b18 FUN_143c22b18 body=21 status=ok
// SIG undefined FUN_143c22b18(void)

undefined8 FUN_143c22b18(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143c22b2e FUN_143c22b2e body=29 status=ok
// SIG undefined FUN_143c22b2e(void)

undefined8 FUN_143c22b2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c22b60 FUN_143c22b60 body=93 status=ok
// SIG undefined FUN_143c22b60(void)

void FUN_143c22b60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afce440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c22bbe FUN_143c22bbe body=93 status=ok
// SIG undefined FUN_143c22bbe(void)

void FUN_143c22bbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afce440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143c22c1c FUN_143c22c1c body=126 status=ok
// SIG undefined FUN_143c22c1c(void)

void FUN_143c22c1c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afce440;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c22c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143c22cb8 FUN_143c22cb8 body=40 status=ok
// SIG undefined FUN_143c22cb8(void)

undefined8 FUN_143c22cb8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_141092d32(*(longlong *)(DAT_14c98e618 + 0x20) + 0x78);
  }
  return 1;
}



// FUNCTION 143c22ce0 FUN_143c22ce0 body=48 status=ok
// SIG undefined FUN_143c22ce0(void)

void FUN_143c22ce0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 143c22d10 FUN_143c22d10 body=38 status=ok
// SIG undefined FUN_143c22d10(void)

undefined8 FUN_143c22d10(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c22d36 FUN_143c22d36 body=657 status=ok
// SIG undefined FUN_143c22d36(void)

void FUN_143c22d36(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = (int)local_a8;
  if ((longlong)(int)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar5 = &local_b8;
    if (uStack_b0 != (undefined8 *)0x0) {
      puVar5 = uStack_b0;
    }
    FUN_1446fe144(puVar7 + 2,(int)local_a8,0);
    puVar6 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar6 = puVar7 + 2;
    }
    memcpy(puVar6,puVar5,(longlong)(int)local_a8);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar5 = local_60;
    if (local_60 == (undefined8 *)0x0) {
      puVar5 = &local_a0;
    }
    FUN_1446fe1b8(puVar7 + 5,local_58,0);
    puVar6 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar7 + 5;
    }
    memcpy(puVar6,puVar5,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar7 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_44;
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (uStack_b0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = DAT_14c7590b0;
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  uStack_b0 = *(undefined8 **)(**(longlong **)(param_1 + 0x1c0) + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(param_1 + 0x1d0);
  local_98 = DAT_14c7590b0;
  local_b8 = lVar1;
  local_a8 = uVar2;
  local_a0 = uVar3;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    local_c8 = param_2;
    FUN_143c20322(*(undefined8 *)(lVar1 + 0x18),DAT_14c7590b0,uStack_b0,&local_a8);
    FUN_143c2025c(*(undefined8 *)(lVar1 + 0x18),uVar4,&local_a8,param_2);
  }
  else {
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 7;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x40);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar7 + 7;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar7;
    param_2[6] = (ulonglong)(puVar7 + 1);
    puVar7[1] = 0;
    *puVar7 = &PTR_FUN_14afce4c8;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_b0._4_4_;
    puVar7[4] = uVar2;
    puVar7[5] = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c22fc8 FUN_143c22fc8 body=74 status=ok
// SIG undefined FUN_143c22fc8(void)

void FUN_143c22fc8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_143c20322(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x18),param_1 + 0x20,param_2);
  FUN_143c2025c(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(param_1 + 0x30),param_1 + 0x20,param_2
               );
  return;
}



// FUNCTION 143c2301e FUN_143c2301e body=262 status=ok
// SIG undefined FUN_143c2301e(void)

void FUN_143c2301e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143c23126 FUN_143c23126 body=83 status=ok
// SIG undefined FUN_143c23126(void)

undefined8 * FUN_143c23126(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afce680;
  plVar3 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c231f4 FUN_143c231f4 body=38 status=ok
// SIG undefined FUN_143c231f4(void)

undefined8 FUN_143c231f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c2321a FUN_143c2321a body=838 status=ok
// SIG undefined FUN_143c2321a(void)

void FUN_143c2321a(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_218 [40];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 *local_170;
  int local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_144b1c6fa(param_1 + 0x10,&local_1c8);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = (int)local_1b8;
  if ((longlong)(int)local_1b8 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar7 = &local_1c8;
    if (local_1c0 != (undefined8 *)0x0) {
      puVar7 = local_1c0;
    }
    FUN_1446fe144(puVar9 + 2,(int)local_1b8,0);
    puVar8 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar8 = puVar9 + 2;
    }
    memcpy(puVar8,puVar7,(longlong)(int)local_1b8);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_168;
  if ((longlong)local_168 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar7 = local_170;
    if (local_170 == (undefined8 *)0x0) {
      puVar7 = &local_1b0;
    }
    FUN_1446fe1b8(puVar9 + 5,local_168,0);
    puVar8 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar9 + 5;
    }
    memcpy(puVar8,puVar7,(longlong)local_168 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_160;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_15c;
  *(undefined4 *)(puVar9 + 0x10) = uStack_158;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_154;
  if (local_170 != (undefined8 *)0x0) {
    FUN_1400020a8(local_170);
  }
  if (local_1c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  uVar2 = *(undefined8 *)(plVar1[1] + 0x10);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  uVar3 = *(undefined8 *)(*plVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x200) = uVar3;
  uVar4 = *(undefined8 *)(plVar1[2] + 0x10);
  *(undefined8 *)(param_1 + 0x1e8) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x1c0);
  local_1d0 = *(undefined8 *)(param_1 + 0x1d8);
  local_1d8 = *(undefined8 *)(param_1 + 0x1e0);
  local_1e0 = *(undefined8 *)(param_1 + 0x1f0);
  local_1e8 = *(undefined8 *)(param_1 + 0x1f8);
  local_1f0 = *(undefined8 *)(param_1 + 0x208);
  uVar6 = *(undefined8 *)(param_1 + 0x210);
  local_1c8 = uVar5;
  local_1b8 = uVar2;
  local_1b0 = local_1d0;
  local_1a8 = local_1d8;
  local_1a0 = uVar4;
  local_198 = local_1e0;
  local_190 = local_1e8;
  local_188 = uVar3;
  local_180 = local_1f0;
  local_178 = uVar6;
  memcpy(&local_170,(void *)(param_1 + 0x218),0x119);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_143c2067c(uVar5,&local_1b8,param_2);
  }
  else {
    puVar9 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar9 + 0x32;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x1a0);
      puVar9 = (undefined8 *)(*param_2 + 0xf & 0xfffffffffffffff0);
      puVar7 = puVar9 + 0x32;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14afce758;
    puVar9[2] = uVar5;
    puVar9[4] = uVar2;
    puVar9[5] = local_1d0;
    puVar9[6] = local_1d8;
    puVar9[7] = uVar4;
    puVar9[8] = local_1e0;
    puVar9[9] = local_1e8;
    puVar9[10] = uVar3;
    puVar9[0xb] = local_1f0;
    puVar9[0xc] = uVar6;
    memcpy(puVar9 + 0xd,&local_170,0x119);
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c23582 FUN_143c23582 body=38 status=ok
// SIG undefined FUN_143c23582(void)

undefined8 FUN_143c23582(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c235a8 FUN_143c235a8 body=615 status=ok
// SIG undefined FUN_143c235a8(void)

void FUN_143c235a8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar6 = local_b8;
    }
    FUN_1446fe144(puVar7 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 2;
    }
    memcpy(puVar5,puVar6,(longlong)local_b0);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar7 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 5;
    }
    memcpy(puVar5,puVar6,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar7 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar3 = *(int *)(param_1 + 0x1b8);
  iVar4 = *(int *)(param_1 + 0x1bc);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar7 + 2) = (float)iVar3;
  *(float *)((longlong)puVar7 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(float *)((longlong)puVar7 + 0x1c) = (float)iVar2;
  *(float *)(puVar7 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  FUN_1431f0c86(param_2,0);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c2381c FUN_143c2381c body=753 status=ok
// SIG undefined FUN_143c2381c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c2381c(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb53720);
  if (cVar1 == '\0') {
    _DAT_14cb53720 = 0;
    uRam000000014cb53728 = 0;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_40._0_4_ = 1;
  local_48 = 0x20;
  FUN_14078dbce(&DAT_14cb53730,L"r.XeFG.TagUI",&local_40,L"[default: 1] Tag UI color and alpha.");
  atexit(FUN_143c20cf4);
  local_40 = (ulonglong)local_40._4_4_ << 0x20;
  local_48 = 0x20;
  FUN_140a6b41e(&DAT_14cb53748,L"r.XeFG.TagUIAlphaThreshold",&local_40,
                L"[default: 0.0] UI extraction pass alpha threshold value.");
  atexit(FUN_143c20d39);
  DAT_14cb53760 = 0;
  DAT_14cb53768 = 0;
  atexit(FUN_143c211a8);
  DAT_14cb53770 = 0;
  atexit((_func_5014 *)&LAB_143c21203);
  DAT_14cb53778 = 0;
  atexit((_func_5014 *)&LAB_143c2121e);
  local_40 = local_40 & 0xffffffffffffff00;
  local_48 = 4;
  FUN_140bd5914(&DAT_14cb53780,L"r.XeFG.ModuleDisabled",&local_40,
                L"If XeFG module(s) are disabled via command line option -XeFGDisabled.");
  atexit(FUN_143c21239);
  local_40 = local_40 & 0xffffffffffffff00;
  local_48 = 4;
  FUN_140bd5914(&DAT_14cb53798,L"r.XeFG.Supported",&local_40,L"If XeFG is supported.");
  atexit(FUN_143c2127e);
  local_40 = local_40 & 0xffffffff00000000;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb537b0,L"r.XeFG.Enabled",&local_40,L"[default: 0] Set to 1 to enable XeFG.")
  ;
  atexit(FUN_143c212c3);
  local_40 = CONCAT44(local_40._4_4_,1);
  local_48 = 4;
  FUN_14078dbce(&DAT_14cb537c8,L"r.XeFG.LogLevel",&local_40,
                L"[default: 1] Minimum log level of XeFG SDK, set it via command line -XeFGLogLevel=\n 0: Debug\n 1: Info\n 2: Warning\n 3: Error\n Other values: Logging disabled"
               );
  atexit(FUN_143c21308);
  FUN_140056680(&local_40,L"Unknown");
  local_48 = 4;
  FUN_140f510cc(&DAT_14cb537e0,L"r.XeFG.Version",&local_40,L"Show XeFG SDK\'s version.");
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_143c2134d);
  local_40 = CONCAT71(local_40._1_7_,1);
  local_48 = 4;
  FUN_140bd5914(&DAT_14cb537f8,L"r.gbx.XeFG.VendorLockToIntel",&local_40,
                L"If we should vender lock XeSS FG to intel");
  atexit(FUN_143c21392);
  local_40 = 0x800000014afce2fe;
  local_2c = 8;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_1464aab88(&local_40);
  local_40 = CONCAT44(local_40._4_4_,1);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cb53820,L"r.XeFG.ClearSceneColorAlpha",&local_40,
                L"[default: 1] if clear scene color alpha value.");
  atexit(FUN_143c21d20);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c23b10 FUN_143c23b10 body=57 status=ok
// SIG undefined FUN_143c23b10(void)

void FUN_143c23b10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53968 == 0) {
    uVar1 = FUN_1464aaccd();
    DAT_14cb53968 = FUN_14171c317(FUN_1464aacfc,uVar1,L"EXeFGMode");
  }
  return;
}



// FUNCTION 143c23b49 FUN_143c23b49 body=57 status=ok
// SIG undefined FUN_143c23b49(void)

void FUN_143c23b49(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53980 == 0) {
    uVar1 = FUN_1464aaccd();
    DAT_14cb53980 = FUN_14171c317(FUN_143c23b82,uVar1,L"EXeFGUICompositionState");
  }
  return;
}



// FUNCTION 143c23b82 FUN_143c23b82 body=47 status=ok
// SIG undefined FUN_143c23b82(void)

longlong FUN_143c23b82(void)

{
  if (DAT_14cb53978 == 0) {
    FUN_1409ce572(&DAT_14cb53978,&PTR_FUN_14afce900);
  }
  return DAT_14cb53978;
}



// FUNCTION 143c23bb2 FUN_143c23bb2 body=265 status=ok
// SIG undefined FUN_143c23bb2(void)

longlong * FUN_143c23bb2(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cb53968 == 0) {
    uVar7 = FUN_1464aaccd();
    DAT_14cb53968 = FUN_14171c317(FUN_1464aacfc,uVar7,L"EXeFGMode");
  }
  lVar3 = DAT_14cb53968;
  if (1 < *(int *)(DAT_14cb53968 + 0x48)) {
    lVar8 = 8;
    lVar9 = 0;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(lVar3 + 0x40) + lVar8);
      uVar2 = (uint)uVar1 & 0xff;
      if (uVar2 - 2 < 3) {
        iVar5 = (**(code **)(*DAT_14cb53a00 + 0xb0))();
        if (iVar5 < (int)(((uint)uVar1 & 0xff) - 1)) goto LAB_143c23c5b;
LAB_143c23c45:
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1485fbbda(param_1,iVar5);
        }
        *(char *)(*param_1 + (longlong)iVar5) = (char)uVar1;
      }
      else {
        if ((uVar1 & 0xff) == 0) goto LAB_143c23c45;
        if ((uVar2 == 1) && (DAT_14cb539e0 != 0)) {
          plVar6 = (longlong *)FUN_143c18d94();
          cVar4 = (**(code **)(*plVar6 + 0xa8))(plVar6);
          if (cVar4 != '\0') goto LAB_143c23c45;
        }
      }
LAB_143c23c5b:
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar9 < (longlong)*(int *)(lVar3 + 0x48) + -1);
  }
  return param_1;
}



// FUNCTION 143c23cbc FUN_143c23cbc body=89 status=ok
// SIG undefined FUN_143c23cbc(void)

uint FUN_143c23cbc(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*DAT_14cb539f0 + 0xb0))();
  if (iVar1 == 1) {
    uVar2 = (**(code **)(*DAT_14cb539f8 + 0xb0))();
    if (uVar2 == 0) {
      uVar2 = (**(code **)(*DAT_14cb53a00 + 0xb0))();
    }
    if (uVar2 < 4) {
      return 0x4030200 >> ((byte)(uVar2 << 3) & 0x1f);
    }
  }
  return 0;
}



// FUNCTION 143c23d15 FUN_143c23d15 body=47 status=ok
// SIG undefined FUN_143c23d15(void)

longlong FUN_143c23d15(void)

{
  if (DAT_14cb539a0 == 0) {
    FUN_14000fc22(&DAT_14cb539a0,&PTR_FUN_14afcebf0);
  }
  return DAT_14cb539a0;
}



// FUNCTION 143c23d44 FUN_143c23d44 body=48 status=ok
// SIG undefined FUN_143c23d44(void)

void FUN_143c23d44(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*DAT_14cb53a08 + 0xb0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143c23d74 FUN_143c23d74 body=67 status=ok
// SIG undefined FUN_143c23d74(void)

void FUN_143c23d74(undefined8 param_1,longlong param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cb539e8 != 0) {
    cVar1 = FUN_143c23cbc();
    if (cVar1 != '\0') {
      bVar2 = *(byte *)(DAT_14cb539e8 + 0x2e) ^ 1;
      goto LAB_143c23daf;
    }
  }
  bVar2 = 0;
LAB_143c23daf:
  *param_3 = bVar2;
  return;
}



// FUNCTION 143c23db8 FUN_143c23db8 body=65 status=ok
// SIG undefined FUN_143c23db8(void)

void FUN_143c23db8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cb539e0 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_143c18d94();
    uVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 143c23dfa FUN_143c23dfa body=45 status=ok
// SIG undefined FUN_143c23dfa(void)

undefined8 FUN_143c23dfa(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (DAT_14cb539e0 != 0) {
    plVar1 = (longlong *)FUN_143c18d94();
                    /* WARNING: Could not recover jumptable at 0x000143c23e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143c23e28 FUN_143c23e28 body=1109 status=ok
// SIG undefined FUN_143c23e28(void)

void FUN_143c23e28(uint param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined2 **ppuVar10;
  undefined2 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb53968 == (longlong *)0x0) {
    uVar8 = FUN_1464aaccd();
    DAT_14cb53968 = (longlong *)FUN_14171c317(FUN_1464aacfc,uVar8);
  }
  uVar7 = (ulonglong)(int)DAT_14cb53968[9];
  if ((longlong)uVar7 < 1) {
LAB_143c23e99:
    FUN_140002266(&local_48,L"SetXeFGMode called with invalid enum value: %d",param_1);
    puVar11 = local_48;
    if (local_40 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar11,2,0);
    goto LAB_143c23ece;
  }
  uVar13 = (ulonglong)(byte)param_1;
  if (*(ulonglong *)(DAT_14cb53968[8] + 8) != uVar13) {
    uVar15 = 0;
    puVar12 = (ulonglong *)(DAT_14cb53968[8] + 0x18);
    do {
      if (uVar7 - 1 == uVar15) goto LAB_143c23e99;
      uVar15 = uVar15 + 1;
      uVar1 = *puVar12;
      puVar12 = puVar12 + 2;
    } while (uVar1 != uVar13);
    if (uVar7 <= uVar15) goto LAB_143c23e99;
  }
  uVar7 = FUN_1404d8156();
  if (uVar7 == uVar13) goto LAB_143c23e99;
  switch(param_1 & 0xff) {
  case 1:
    iVar6 = 1;
    bVar3 = false;
    iVar14 = 0;
    break;
  case 2:
    iVar14 = 1;
    bVar3 = true;
    iVar6 = 1;
    break;
  case 3:
    iVar14 = 2;
    goto LAB_143c23f65;
  case 4:
    iVar14 = 3;
LAB_143c23f65:
    iVar6 = 1;
    bVar3 = true;
    break;
  default:
    bVar3 = false;
    iVar14 = 0;
    iVar6 = 0;
  }
  iVar4 = (**(code **)(*DAT_14cb53a00 + 0xb0))();
  plVar9 = DAT_14cb53968;
  if ((bool)(bVar3 ^ 1) || iVar14 <= iVar4) {
    iVar4 = (**(code **)(*DAT_14cb539f0 + 0xb0))();
    plVar9 = DAT_14cb539f0;
    if (iVar4 != iVar6) {
      uVar5 = (**(code **)(*DAT_14cb539f0 + 0x18))(DAT_14cb539f0);
      FUN_140635eb8(plVar9,iVar6,uVar5 & 0xff000000,0);
    }
    if ((bVar3) && (iVar6 = (**(code **)(*DAT_14cb539f8 + 0xb0))(), iVar14 != iVar6)) {
      (**(code **)(*DAT_14cb539f8 + 0x18))(DAT_14cb539f8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    goto LAB_143c23edd;
  }
  if (DAT_14cb53968 == (longlong *)0x0) {
    uVar8 = FUN_1464aaccd();
    plVar9 = (longlong *)FUN_14171c317(FUN_1464aacfc,uVar8,L"EXeFGMode");
    DAT_14cb53968 = plVar9;
    FUN_140056680(&local_48);
    if (plVar9 != (longlong *)0x0) goto LAB_143c23fc2;
  }
  else {
    FUN_140056680(&local_48);
LAB_143c23fc2:
    uVar7 = 0xffffffff;
    if (0 < (longlong)(int)plVar9[9]) {
      puVar12 = (ulonglong *)(plVar9[8] + 8);
      uVar15 = 0;
      do {
        if (*puVar12 == uVar13) {
          uVar7 = uVar15 & 0xffffffff;
          break;
        }
        uVar15 = uVar15 + 1;
        puVar12 = puVar12 + 2;
      } while ((longlong)(int)plVar9[9] != uVar15);
    }
    (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_58,uVar7);
    plVar9 = local_58;
    if (*(code **)(*local_58 + 0x50) != FUN_144828418) {
      plVar9 = (longlong *)(**(code **)(*local_58 + 0x50))();
    }
    FUN_1447a1fc0(plVar9);
    pcVar2 = *(code **)(*local_58 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar9 = local_58 + 3;
      if (local_58[5] != 0) {
        plVar9 = (longlong *)(local_58[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar9 = local_58 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar2)(local_58);
    }
    if (1 < (int)plVar9[1]) {
      plVar9 = local_58;
      if (*(code **)(*local_58 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*local_58 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      pcVar2 = *(code **)(*local_58 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        ppuVar10 = (undefined2 **)(local_58 + 3);
        if (local_58[5] != 0) {
          ppuVar10 = (undefined2 **)(local_58[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        ppuVar10 = (undefined2 **)(local_58 + 2);
      }
      else {
        ppuVar10 = (undefined2 **)(*pcVar2)(local_58);
      }
      if (&local_48 != ppuVar10) {
        iVar6 = *(int *)(ppuVar10 + 1);
        puVar11 = *ppuVar10;
        local_40 = iVar6;
        if (iVar6 == 0 && local_3c == 0) {
          local_3c = 0;
        }
        else {
          FUN_1446dd670(&local_48,iVar6);
          if (iVar6 != 0) {
            memcpy(local_48,puVar11,(longlong)iVar6 * 2);
          }
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  puVar11 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar11 = local_48;
  }
  local_68 = iVar14;
  local_60 = iVar4;
  FUN_140002266(&local_58,
                L"Unsupported XeFG mode \'%s\' (value: %d): Requires %d interpolated frames, but hardware supports a maximum of %d interpolated frames"
                ,puVar11,param_1 & 0xff);
  plVar9 = (longlong *)&DAT_149dfb77a;
  if (local_50 != 0) {
    plVar9 = local_58;
  }
  FUN_1415b7ec4(plVar9,2,0);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143c23ece:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143c23edd:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2429a FUN_143c2429a body=47 status=ok
// SIG undefined FUN_143c2429a(void)

longlong FUN_143c2429a(void)

{
  if (DAT_14cb539c0 == 0) {
    FUN_14000fc22(&DAT_14cb539c0,&PTR_FUN_14afcef00);
  }
  return DAT_14cb539c0;
}



// FUNCTION 143c242ca FUN_143c242ca body=756 status=ok
// SIG undefined FUN_143c242ca(void)

void FUN_143c242ca(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 *_Src;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  
  uStack_20 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_19 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x38);
  local_21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_21);
            goto LAB_143c24493;
          }
        }
        _Src = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_21) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_21,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_21,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = CONCAT44(local_40._4_4_,(int)plVar4[6]);
        local_48 = local_48 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_21,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_21,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (undefined1)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_21);
    }
  }
LAB_143c24493:
  uVar7 = local_21;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = DAT_14cb53a08;
  uVar9 = (**(code **)(*DAT_14cb53a08 + 0x18))(DAT_14cb53a08);
  FUN_140635eb8(plVar4,uVar7,uVar9 & 0xff000000,0);
  if ((CONCAT17(uStack_19,uStack_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c245c0 FUN_143c245c0 body=230 status=ok
// SIG undefined FUN_143c245c0(void)

void FUN_143c245c0(undefined8 param_1,undefined8 param_2)

{
  DAT_14cb539e8 = DAT_14cb53778;
  DAT_14cb539e0 = param_2;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  DAT_14cb539f0 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.Enabled",1);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  DAT_14cb539f8 =
       (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.MaxInterpolatedFrames",1);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  DAT_14cb53a00 =
       (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.MaxInterpolatedFramesSupported",1)
  ;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  DAT_14cb53a08 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.XeFG.UICompositionState",1);
  return;
}



// FUNCTION 143c246b6 FUN_143c246b6 body=160 status=ok
// SIG undefined FUN_143c246b6(void)

void FUN_143c246b6(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14afcf350;
  local_38 = 2;
  local_48 = 0;
  FUN_14282b410(L"/Script/XeFGBlueprint",&PTR_FUN_14afcf390,1,0);
  local_28 = 0x800000014afcf51c;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464aae90(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c24758 FUN_143c24758 body=67 status=ok
// SIG undefined FUN_143c24758(void)

bool FUN_143c24758(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (((lVar1 != 0) && (lVar1 = (**(code **)(*param_1 + 0x10))(param_1), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x151) == '\0')) {
    lVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    return lVar1 != 0;
  }
  return false;
}



// FUNCTION 143c247cc FUN_143c247cc body=335 status=ok
// SIG undefined FUN_143c247cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c247cc(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxFaceFX",0,0,&PTR_FUN_14afcf940);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxFaceFX",&PTR_FUN_14afcfff0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxFaceFX",&PTR_FUN_14afd0490,1,0);
  local_48 = "AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb53a88 = (ulonglong)uVar1;
  FUN_140056680(&DAT_14cb53a90,L"FaceFXAnimSet_");
  atexit((_func_5014 *)&LAB_143c2479b);
  FUN_140056680(&DAT_14cb53aa0,L"Preload_");
  atexit((_func_5014 *)&LAB_143c247ac);
  local_48 = (char *)0x800000014afd0508;
  local_34 = 9;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1464ab18e(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c2491c FUN_143c2491c body=57 status=ok
// SIG undefined FUN_143c2491c(void)

void FUN_143c2491c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53af8 == 0) {
    uVar1 = FUN_145c5b643();
    DAT_14cb53af8 = FUN_14171c317(FUN_1464ab39b,uVar1,L"EGbxCloudLayerType");
  }
  return;
}



// FUNCTION 143c24a32 FUN_143c24a32 body=46 status=ok
// SIG undefined FUN_143c24a32(void)

void FUN_143c24a32(void)

{
  longlong lVar1;
  
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)&DAT_14cb53c60 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 143c24a68 FUN_143c24a68 body=48 status=ok
// SIG undefined FUN_143c24a68(void)

longlong FUN_143c24a68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c24ac7 FUN_143c24ac7 body=887 status=ok
// SIG undefined FUN_143c24ac7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c24ac7(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxCloudscape",&PTR_FUN_14afd10c0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14afd1820;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxCloudscape",&PTR_FUN_14afd1870,1,&PTR_FUN_14afd1840);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb53b38);
  if (cVar1 == '\0') {
    _DAT_14cb53b38 = 0;
    uRam000000014cb53b40 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxCloudscape",&PTR_FUN_14afd26f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxCloudscape",&PTR_FUN_14afd2d30,1,0);
  local_48 = -0x7ffffffeb502d2a8;
  local_34 = 0xd;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1464ab5c6(&local_48);
  FUN_140056680(&DAT_14cb53ba0,L"current_enableLayer");
  atexit((_func_5014 *)&LAB_143c24955);
  FUN_140056680(&DAT_14cb53bb0,L"current_cloudTransform");
  atexit((_func_5014 *)&LAB_143c24966);
  FUN_140056680(&DAT_14cb53bc0,L"current_cloudTex");
  atexit((_func_5014 *)&LAB_143c24977);
  FUN_140056680(&DAT_14cb53bd0,L"current_cloudIsTile");
  atexit((_func_5014 *)&LAB_143c24988);
  FUN_140056680(&DAT_14cb53be0,L"current_cloudLayerType");
  atexit((_func_5014 *)&LAB_143c24999);
  FUN_140056680(&DAT_14cb53bf0,L"next_enableLayer");
  atexit((_func_5014 *)&LAB_143c249aa);
  FUN_140056680(&DAT_14cb53c00,L"next_cloudTransform");
  atexit((_func_5014 *)&LAB_143c249bb);
  FUN_140056680(&DAT_14cb53c10,L"next_cloudTex");
  atexit((_func_5014 *)&LAB_143c249cc);
  FUN_140056680(&DAT_14cb53c20,L"next_cloudIsTile");
  atexit((_func_5014 *)&LAB_143c249dd);
  FUN_140056680(&DAT_14cb53c30,L"next_cloudLayerType");
  atexit((_func_5014 *)&LAB_143c249ee);
  FUN_140056680(&DAT_14cb53c40,L"enableProcLayer");
  atexit((_func_5014 *)&LAB_143c249ff);
  FUN_140056680(&DAT_14cb53c50,L"cloudscapeBounds");
  atexit((_func_5014 *)&LAB_143c24a10);
  FUN_140056680(&DAT_14cb53c60,L"transitionTime");
  atexit((_func_5014 *)&LAB_143c24a21);
  FUN_140056680(&DAT_14cb53c70,&DAT_149e25dfc);
  FUN_140056680(&DAT_14cb53c80,&DAT_149e0209e);
  FUN_140056680(&DAT_14cb53c90,&DAT_149e01eac);
  FUN_140056680(&DAT_14cb53ca0,&DAT_149e01ea4);
  FUN_140056680(&DAT_14cb53cb0,&DAT_149e014fa);
  FUN_140056680(&DAT_14cb53cc0,&DAT_149e014fe);
  atexit(FUN_143c24a32);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c24e40 FUN_143c24e40 body=55 status=ok
// SIG undefined FUN_143c24e40(void)

void FUN_143c24e40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fe8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fe8 = FUN_14171c317(FUN_1464ab8c8,uVar1,L"ETimeOfDayState");
  }
  return;
}



// FUNCTION 143c24e77 FUN_143c24e77 body=47 status=ok
// SIG undefined FUN_143c24e77(void)

longlong FUN_143c24e77(void)

{
  if (DAT_14cb54058 == 0) {
    FUN_14073dd9a(&DAT_14cb54058,&PTR_LAB_14afd7a50);
  }
  return DAT_14cb54058;
}



// FUNCTION 143c24ea6 FUN_143c24ea6 body=47 status=ok
// SIG undefined FUN_143c24ea6(void)

longlong FUN_143c24ea6(void)

{
  if (DAT_14cb54048 == 0) {
    FUN_14000fc22(&DAT_14cb54048,&PTR_FUN_14afd7728);
  }
  return DAT_14cb54048;
}



// FUNCTION 143c24ed6 FUN_143c24ed6 body=1382 status=ok
// SIG undefined FUN_143c24ed6(void)

void FUN_143c24ed6(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined7 *_Src;
  undefined1 *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  uStack_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_30);
            goto LAB_143c250a8;
          }
        }
        _Src = (undefined7 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_30,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_30,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined7)uVar2;
      uStack_29 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
LAB_143c250a8:
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_31);
            goto LAB_143c25258;
          }
        }
        _Src_00 = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_31) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_31,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_31,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_31,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_31,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_31);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_31 = (undefined1)uVar2;
      uStack_30 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_31);
    }
  }
LAB_143c25258:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143c2f4f4(param_1,CONCAT17(uStack_29,uStack_30),local_31);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c2543e FUN_143c2543e body=34 status=ok
// SIG undefined FUN_143c2543e(void)

void FUN_143c2543e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143c25466();
  FUN_14069c8d6(uVar1,&PTR_s_OnBrushComponentPhysicsStateChan_14afd7770,1);
  return;
}



// FUNCTION 143c25466 FUN_143c25466 body=227 status=ok
// SIG undefined FUN_143c25466(void)

longlong FUN_143c25466(void)

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
  if (DAT_14cb54050 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_143c2554a;
    local_40 = &LAB_143c2554d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxTimeOfDay",L"BasicTimeOfDayWeatherOverrideVolume",&DAT_14cb54050,
                  FUN_143c2543e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb54050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c25570 FUN_143c25570 body=632 status=ok
// SIG undefined FUN_143c25570(void)

void FUN_143c25570(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54150) {
    FUN_144b3d300(&DAT_14cb54150);
    if (DAT_14cb54150 == -1) {
      FUN_1446f470e(&DAT_14cb54148,L"TimeOfDay",1);
      _Init_thread_footer(&DAT_14cb54150);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5415c) {
    FUN_144b3d300(&DAT_14cb5415c);
    if (DAT_14cb5415c == -1) {
      FUN_1446f470e(&DAT_14cb54154,L"CycleCount",1);
      _Init_thread_footer(&DAT_14cb5415c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54168) {
    FUN_144b3d300(&DAT_14cb54168);
    if (DAT_14cb54168 == -1) {
      FUN_1446f470e(&DAT_14cb54160,L"bTimeOfDayPaused",1);
      _Init_thread_footer(&DAT_14cb54168);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54174) {
    FUN_144b3d300(&DAT_14cb54174);
    if (DAT_14cb54174 == -1) {
      FUN_1446f470e(&DAT_14cb5416c,L"WorldWeatherData",1);
      _Init_thread_footer(&DAT_14cb54174);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54180) {
    FUN_144b3d300(&DAT_14cb54180);
    if (DAT_14cb54180 == -1) {
      FUN_1446f470e(&DAT_14cb54178,L"WorldBaseLayerOverrides",1);
      _Init_thread_footer(&DAT_14cb54180);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb5418c) {
    FUN_144b3d300(&DAT_14cb5418c);
    if (DAT_14cb5418c == -1) {
      FUN_1446f470e(&DAT_14cb54184,L"LastSkyLightEnvMapUpdateTime",1);
      _Init_thread_footer(&DAT_14cb5418c);
      return;
    }
  }
  return;
}



// FUNCTION 143c257e8 FUN_143c257e8 body=48 status=ok
// SIG undefined FUN_143c257e8(void)

longlong FUN_143c257e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145a27cce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c25818 FUN_143c25818 body=48 status=ok
// SIG undefined FUN_143c25818(void)

longlong FUN_143c25818(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145c99b5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c25848 FUN_143c25848 body=48 status=ok
// SIG undefined FUN_143c25848(void)

longlong FUN_143c25848(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145aa869c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c25878 FUN_143c25878 body=48 status=ok
// SIG undefined FUN_143c25878(void)

longlong FUN_143c25878(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1410dd384(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c258b0 FUN_143c258b0 body=38 status=ok
// SIG undefined FUN_143c258b0(void)

undefined8 FUN_143c258b0(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c258da FUN_143c258da body=48 status=ok
// SIG undefined FUN_143c258da(void)

longlong FUN_143c258da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145c695f8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c25912 FUN_143c25912 body=48 status=ok
// SIG undefined FUN_143c25912(void)

longlong FUN_143c25912(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145c695f8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c259f9 FUN_143c259f9 body=73 status=ok
// SIG undefined FUN_143c259f9(void)

void FUN_143c259f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143c25a42 FUN_143c25a42 body=549 status=ok
// SIG undefined FUN_143c25a42(void)

undefined8 * FUN_143c25a42(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1485fec30(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0x1c);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1485fecaa(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 0x28);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_140817052(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar3 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1485fed1e(param_1 + 10,iVar1,0);
    FUN_1485fed91(param_1[10],uVar3,iVar1);
  }
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 100);
  uVar6 = *(undefined4 *)(param_2 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x6d);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x71);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x75);
  *(undefined4 *)((longlong)param_1 + 0x69) = *(undefined4 *)((longlong)param_2 + 0x69);
  *(undefined4 *)((longlong)param_1 + 0x6d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x71) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x75) = uVar10;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0xd) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar7;
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  uVar3 = param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x10,iVar1,0);
    FUN_140b8566a(param_1[0x10],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 143c25c68 FUN_143c25c68 body=57 status=ok
// SIG undefined FUN_143c25c68(void)

void FUN_143c25c68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e38 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e38 = FUN_140002ddd(FUN_1464abd0c,uVar1,L"TimeOfDayCycleDef");
  }
  return;
}



// FUNCTION 143c25cec FUN_143c25cec body=57 status=ok
// SIG undefined FUN_143c25cec(void)

void FUN_143c25cec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e68 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e68 = FUN_140002ddd(FUN_1464abe34,uVar1,L"TimeOfDayParameterKey");
  }
  return;
}



// FUNCTION 143c25d56 FUN_143c25d56 body=57 status=ok
// SIG undefined FUN_143c25d56(void)

void FUN_143c25d56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e80 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e80 = FUN_140002ddd(FUN_1464abe94,uVar1,L"TimeOfDayEventKey");
  }
  return;
}



// FUNCTION 143c25e44 FUN_143c25e44 body=57 status=ok
// SIG undefined FUN_143c25e44(void)

void FUN_143c25e44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53ec8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53ec8 = FUN_140002ddd(FUN_1464abfec,uVar1,L"TimeOfDayForecastKey");
  }
  return;
}



// FUNCTION 143c25ed0 FUN_143c25ed0 body=57 status=ok
// SIG undefined FUN_143c25ed0(void)

void FUN_143c25ed0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53ee0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53ee0 = FUN_140002ddd(FUN_1464ac04c,uVar1,L"TimeOfDayCloudscapeKey");
  }
  return;
}



// FUNCTION 143c25f96 FUN_143c25f96 body=57 status=ok
// SIG undefined FUN_143c25f96(void)

void FUN_143c25f96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f40 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f40 = FUN_140002ddd(FUN_1464ac214,uVar1,L"TimeOfDayPropertyParameterFloat");
  }
  return;
}



// FUNCTION 143c25ffc FUN_143c25ffc body=57 status=ok
// SIG undefined FUN_143c25ffc(void)

void FUN_143c25ffc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f58 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f58 = FUN_140002ddd(FUN_1464ac274,uVar1,L"TimeOfDayPropertyParameterInteger");
  }
  return;
}



// FUNCTION 143c26062 FUN_143c26062 body=57 status=ok
// SIG undefined FUN_143c26062(void)

void FUN_143c26062(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f70 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f70 = FUN_140002ddd(FUN_1464ac2d4,uVar1,L"TimeOfDayPropertyParameterColor");
  }
  return;
}



// FUNCTION 143c260d0 FUN_143c260d0 body=57 status=ok
// SIG undefined FUN_143c260d0(void)

void FUN_143c260d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f88 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f88 = FUN_140002ddd(FUN_1464ac334,uVar1,L"TimeOfDayPropertyParameterLinearColor");
  }
  return;
}



// FUNCTION 143c26136 FUN_143c26136 body=57 status=ok
// SIG undefined FUN_143c26136(void)

void FUN_143c26136(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fa0 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fa0 = FUN_140002ddd(FUN_1464ac394,uVar1,L"TimeOfDayPropertyParameterBoolean");
  }
  return;
}



// FUNCTION 143c261b4 FUN_143c261b4 body=57 status=ok
// SIG undefined FUN_143c261b4(void)

void FUN_143c261b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53fb8 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53fb8 = FUN_140002ddd(FUN_1464ac42d,uVar1,L"TimeOfDayPropertyParameterVector4");
  }
  return;
}



// FUNCTION 143c26240 FUN_143c26240 body=648 status=ok
// SIG undefined FUN_143c26240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c26240(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd32f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd33a0,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb53d18 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd3470,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd4290,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd4ab0,3,&PTR_FUN_14afd4a60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxTimeOfDay",0,0,&PTR_FUN_14afd5170);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 7;
  FUN_14282b410(L"/Script/GbxTimeOfDay",0,0,&PTR_FUN_14afd5b00);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxTimeOfDay",0,0,&PTR_FUN_14afd6000);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd64c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxTimeOfDay",0,0,&PTR_FUN_14afd6c20);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14afd6f00;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxTimeOfDay",0,0,&PTR_FUN_14afd6f20);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd7620,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd7b30,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxTimeOfDay",0,0,&PTR_FUN_14afd7e70);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxTimeOfDay",&PTR_FUN_14afd9aa0,1,&PTR_FUN_14afd9a70);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c26506 FUN_143c26506 body=410 status=ok
// SIG undefined FUN_143c26506(void)

void FUN_143c26506(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (lVar7 = FUN_140d3be2e(param_1 + 0x3f0), lVar7 != 0)
     ) {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_143c265a8:
      (**(code **)(*(longlong *)(param_1 + 0x3c8) + 0x40))(param_1 + 0x3c8,param_2);
      uVar8 = FUN_1447210f0(param_1);
      FUN_1404d1e78(&local_48,uVar8);
      if (((local_48 != 0) && (local_40 != (longlong *)0x0)) && (0 < (int)local_40[1])) {
        iVar6 = (int)local_40[1];
        do {
          if (iVar6 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_40[1];
          bVar12 = iVar6 == iVar4;
          if (bVar12) {
            *(int *)(local_40 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
          plVar10 = local_40;
        } while (!bVar12);
        lVar7 = 0;
        if (plVar10 != (longlong *)0x0) {
          lVar7 = local_48;
        }
        local_78 = (undefined4)*param_2;
        uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_70 = (undefined4)param_2[1];
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_68 = (undefined4)param_2[2];
        uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_60 = (undefined4)param_2[3];
        uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_58 = (undefined4)param_2[4];
        FUN_148606c60(lVar7,param_1 + 0x3c8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    else if ((longlong)*(int *)(lVar7 + 0x98) != 0) {
      puVar11 = *(undefined8 **)(lVar7 + 0x90);
      lVar7 = (longlong)*(int *)(lVar7 + 0x98) * 0x90;
      do {
        puVar9 = &DAT_149dfb77a;
        if (*(int *)(puVar11 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar11;
        }
        cVar5 = FUN_1402ca022(lVar3,puVar9);
        if (cVar5 != '\0') {
          if (puVar11 != (undefined8 *)0x0) goto LAB_143c265a8;
          break;
        }
        puVar11 = puVar11 + 0x12;
        lVar7 = lVar7 + -0x90;
      } while (lVar7 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c266a2 FUN_143c266a2 body=410 status=ok
// SIG undefined FUN_143c266a2(void)

void FUN_143c266a2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (lVar7 = FUN_140d3be2e(param_1 + 0x410), lVar7 != 0)
     ) {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_143c26744:
      (**(code **)(*(longlong *)(param_1 + 0x3a0) + 0x40))(param_1 + 0x3a0,param_2);
      uVar8 = FUN_1447210f0(param_1);
      FUN_1404d1e78(&local_48,uVar8);
      if (((local_48 != 0) && (local_40 != (longlong *)0x0)) && (0 < (int)local_40[1])) {
        iVar6 = (int)local_40[1];
        do {
          if (iVar6 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar4 = (int)local_40[1];
          bVar12 = iVar6 == iVar4;
          if (bVar12) {
            *(int *)(local_40 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
          plVar10 = local_40;
        } while (!bVar12);
        lVar7 = 0;
        if (plVar10 != (longlong *)0x0) {
          lVar7 = local_48;
        }
        local_78 = (undefined4)*param_2;
        uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_70 = (undefined4)param_2[1];
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_68 = (undefined4)param_2[2];
        uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_60 = (undefined4)param_2[3];
        uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_58 = (undefined4)param_2[4];
        FUN_148606c60(lVar7,param_1 + 0x3a0);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    else if ((longlong)*(int *)(lVar7 + 0x98) != 0) {
      puVar11 = *(undefined8 **)(lVar7 + 0x90);
      lVar7 = (longlong)*(int *)(lVar7 + 0x98) * 0x90;
      do {
        puVar9 = &DAT_149dfb77a;
        if (*(int *)(puVar11 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar11;
        }
        cVar5 = FUN_1402ca022(lVar3,puVar9);
        if (cVar5 != '\0') {
          if (puVar11 != (undefined8 *)0x0) goto LAB_143c26744;
          break;
        }
        puVar11 = puVar11 + 0x12;
        lVar7 = lVar7 + -0x90;
      } while (lVar7 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2683e FUN_143c2683e body=191 status=ok
// SIG undefined FUN_143c2683e(void)

void FUN_143c2683e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14afdf7a0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 **)((longlong)param_1 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x34) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x3c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x44) = &DAT_3f8000003f800000;
  puVar2 = param_1 + 0x1a;
  lVar3 = 0x50;
  do {
    *(undefined8 *)((longlong)param_1 + lVar3) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 8) = 0;
    lVar4 = 0;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar4 + -0x48) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x40) = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar4 + -0x68);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar4 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x34) = 0;
      *(undefined8 *)((longlong)puVar2 + lVar4 + -0x28) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x20) = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar4 + -0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -8) = 0x7f7fffff;
      *(undefined2 *)((longlong)puVar2 + lVar4 + -4) = 0x404;
      *(undefined **)((longlong)puVar2 + lVar4 + -0x70) = &DAT_14a176f00;
      *(undefined8 *)((longlong)puVar2 + lVar4) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar4))[1] = 0;
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != 0x200);
    lVar3 = lVar3 + 0x210;
    puVar2 = puVar2 + 0x42;
  } while (lVar3 != 0x470);
  return;
}



// FUNCTION 143c269b5 FUN_143c269b5 body=69 status=ok
// SIG undefined FUN_143c269b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c269b5(void)

{
  _DAT_14cb541e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c269f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb541f0,1);
  return;
}



// FUNCTION 143c269fa FUN_143c269fa body=41 status=ok
// SIG undefined FUN_143c269fa(void)

void FUN_143c269fa(void)

{
  DAT_14cb54250 = 0;
  if (DAT_14cb54248 != 0) {
    FUN_1400020a8();
  }
  FUN_145d63b22();
  return;
}



// FUNCTION 143c26a4a FUN_143c26a4a body=69 status=ok
// SIG undefined FUN_143c26a4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c26a4a(void)

{
  _DAT_14cb54350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c26a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb54358,1);
  return;
}



// FUNCTION 143c26a8f FUN_143c26a8f body=69 status=ok
// SIG undefined FUN_143c26a8f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c26a8f(void)

{
  _DAT_14cb54368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c26ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb54370,1);
  return;
}



// FUNCTION 143c26ad4 FUN_143c26ad4 body=69 status=ok
// SIG undefined FUN_143c26ad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c26ad4(void)

{
  _DAT_14cb54380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c26b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb54388,1);
  return;
}



// FUNCTION 143c26b19 FUN_143c26b19 body=69 status=ok
// SIG undefined FUN_143c26b19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c26b19(void)

{
  _DAT_14cb54398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c26b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb543a0,1);
  return;
}



// FUNCTION 143c26b5e FUN_143c26b5e body=694 status=ok
// SIG undefined FUN_143c26b5e(void)

void FUN_143c26b5e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_141245f18();
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  if (param_2 == 0) {
    bVar7 = false;
  }
  else {
    iVar3 = FUN_14490d72a(param_2);
    bVar7 = iVar3 != 3;
  }
  *(bool *)(param_1 + 0x298) = bVar7;
  FUN_145844196(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    FUN_1464adaa2(param_1 + 0x208);
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_143c30a2a(param_1 + 0x218);
  }
  FUN_145777871(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_1464adad2(param_1 + 0x1d0);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_147bf1112(param_1 + 0x1e0,0);
  }
  plVar2 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (*(int *)(param_1 + 0x3c4) != 0) {
    FUN_1447a8aa0(param_1 + 0x3b8,0);
  }
  FUN_1459a2e1a(param_1 + 0x368);
  FUN_14571d7ac(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    FUN_14012d2da(param_1 + 0x420,0);
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  if (*(int *)(param_1 + 0x444) != 0) {
    FUN_14860a51c(param_1 + 0x438);
  }
  FUN_14594efa0(param_1 + 0x448);
  FUN_1458e5170(param_1 + 0x498);
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    FUN_1464adb02(param_1 + 0x4e8);
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if (*(int *)(param_1 + 0x504) != 0) {
    FUN_14860a726(param_1 + 0x4f8);
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (*(char *)(param_1 + 0x51c) == '\x01') {
    if (*(char *)(param_1 + 0x518) == '\x01') {
      *(undefined1 *)(param_1 + 0x518) = 0;
    }
    *(undefined1 *)(param_1 + 0x51c) = 0;
  }
  *(undefined1 *)(param_1 + 0x1fe) = 0;
  *(undefined2 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x430) = 0;
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = (uint)uVar5;
  if ((((uVar5 >> 0x20 == 0) || ((int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) ||
     (((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar5 >> 0xd) & 0x3fff8)),
       lVar6 == 0 || (*(int *)(lVar6 + 0x10) != (int)(uVar5 >> 0x20))) ||
      ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) {
    uVar5 = 0;
  }
  *(ulonglong *)(param_1 + 0x288) = uVar5;
  return;
}



// FUNCTION 143c26eb0 FUN_143c26eb0 body=11611 status=ok
// SIG undefined FUN_143c26eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c26eb0(longlong param_1,float param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  uint *puVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined2 *puVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  ulonglong *puVar34;
  undefined8 uVar35;
  int *piVar36;
  bool bVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auStack_7d8 [40];
  uint *local_7b0;
  uint *local_7a8;
  uint *local_7a0;
  longlong local_798;
  longlong local_790;
  longlong local_788;
  int local_77c;
  longlong local_778;
  undefined8 *local_770;
  undefined8 *local_768;
  undefined8 *local_760;
  undefined8 *local_758;
  longlong *local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  double local_738;
  int local_72c;
  undefined8 local_728;
  longlong local_720;
  ulonglong local_718;
  longlong local_710;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined8 local_6f8;
  longlong local_6e8;
  undefined8 *puStack_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  uint *local_6c8;
  int local_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  ulonglong local_6b4;
  undefined4 local_6ac;
  longlong local_6a8;
  ulonglong local_6a0;
  undefined4 local_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_670;
  undefined4 local_668;
  undefined8 local_664;
  undefined4 local_65c;
  undefined8 local_650;
  undefined4 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_620;
  undefined4 local_618;
  undefined8 local_614;
  undefined4 local_60c;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined8 local_5c4;
  undefined4 local_5bc;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_580;
  undefined4 local_578;
  undefined8 local_574;
  undefined4 local_56c;
  undefined8 local_560;
  undefined4 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_524;
  undefined4 local_51c;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d4;
  undefined4 local_4cc;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_484;
  undefined4 local_47c;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined4 local_42c;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d0;
  undefined4 local_3c8;
  int local_3c0;
  float local_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  uint local_318 [8];
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined4 local_2e4;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 local_230;
  int *local_228;
  ulonglong *puStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  lVar32 = param_1 + -0x20;
  if (((*(char *)(param_1 + 0x1dc) == '\x01') && (*(longlong *)(param_1 + 0x1e0) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0xa0) & 1) != 0)) {
    FUN_1449cea6e(lVar32);
    *(undefined1 *)(param_1 + 0x1dc) = 0;
  }
  bVar14 = *(byte *)(param_1 + 0x278);
  if (bVar14 == 1) {
    puVar12 = (uint *)(param_1 + 0x438);
    iVar29 = *(int *)(param_1 + 0x450);
    if (iVar29 == 0) {
      uVar28 = 1;
      uVar27 = 0;
      iVar33 = 0;
      iVar7 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x448);
      if (*(uint **)(param_1 + 0x448) == (uint *)0x0) {
        puVar10 = puVar12;
      }
      uVar24 = *puVar10;
      if (uVar24 == 0) {
        iVar7 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar7 = iVar29 + -1;
        }
        uVar27 = 0;
        uVar28 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar28 = uVar27;
        }
        iVar33 = 0;
        do {
          if (uVar28 == uVar27) goto LAB_143c27340;
          iVar33 = iVar33 + 0x20;
          uVar24 = puVar10[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar24 == 0);
      }
      else {
        uVar27 = 0;
        iVar33 = 0;
      }
      uVar28 = (ulonglong)(-uVar24 & uVar24);
      uVar26 = uVar28 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar7 = (iVar33 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (iVar29 <= iVar7) {
        iVar7 = iVar29;
      }
    }
    if (iVar7 != iVar29) {
      local_7b0 = (uint *)(param_1 + 0x4c8);
      uVar24 = 0xffffffff;
      local_798 = lVar32;
      do {
        uVar26 = local_6d8;
        plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x428) + 8 + (longlong)iVar7 * 0x20);
        plVar21 = *(longlong **)(*(longlong *)(param_1 + 0x428) + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
        }
        if ((plVar18 != (longlong *)0x0) && (*(char *)((longlong)plVar18 + 0x4c) == '\x01')) {
          if (0.0 < *(float *)(plVar18 + 10)) {
            *(float *)(plVar18 + 10) = *(float *)(plVar18 + 10) - param_2;
          }
          if ((((char)plVar18[0xb] == '\x01') && (0.0 < *(float *)((longlong)plVar18 + 0x54))) &&
             (fVar39 = *(float *)((longlong)plVar18 + 0x54) - param_2,
             *(float *)((longlong)plVar18 + 0x54) = fVar39, fVar39 <= 0.0)) {
            local_6d0 = 0x4120000000000000;
            local_6c8 = (uint *)((ulonglong)local_6c8 & 0xffffffffffffff00);
            uVar20 = *(uint *)((longlong)plVar18 + 0x44);
            local_6d8 = CONCAT44((int)(local_6d8 >> 0x20),uVar20) & 0xffffff00ffffffff;
            uVar5 = local_6d8;
            puStack_6e0 = (undefined8 *)((ulonglong)uVar20 << 0x20);
            local_790 = plVar18[4];
            if (&local_6e8 != plVar18 + 5) {
              *(undefined4 *)(plVar18 + 9) = local_6c8._0_4_;
              *(uint *)(plVar18 + 7) = uVar20;
              *(undefined1 *)((longlong)plVar18 + 0x3c) = 0;
              local_6d8._5_2_ = SUB82(uVar26,5);
              *(undefined2 *)((longlong)plVar18 + 0x3d) = local_6d8._5_2_;
              local_6d8._7_1_ = SUB81(uVar26,7);
              *(undefined1 *)((longlong)plVar18 + 0x3f) = local_6d8._7_1_;
              plVar18[8] = 0x4120000000000000;
              plVar18[5] = local_790;
              *(undefined4 *)(plVar18 + 6) = 0;
              *(uint *)((longlong)plVar18 + 0x34) = uVar20;
              *(undefined1 *)((longlong)plVar18 + 0x4c) = 1;
            }
            *(uint *)(plVar18 + 10) = uVar20;
            *(undefined1 *)(plVar18 + 0xb) = 0;
            local_788 = *plVar18;
            local_7a0 = (uint *)(longlong)*(int *)(param_1 + 0x4d0);
            uVar8 = *(int *)(param_1 + 0x4d0) + 1;
            *(uint *)(param_1 + 0x4d0) = uVar8;
            local_7a8 = puVar12;
            local_6e8 = local_790;
            local_6d8 = uVar5;
            if (*(uint *)(param_1 + 0x4d4) < uVar8) {
              FUN_1457d97f6(local_7b0,local_7a0);
            }
            lVar32 = *(longlong *)local_7b0;
            *(longlong *)(lVar32 + (longlong)local_7a0 * 0x14) = local_788;
            *(longlong *)(lVar32 + 8 + (longlong)local_7a0 * 0x14) = local_790;
            *(uint *)(lVar32 + 0x10 + (longlong)local_7a0 * 0x14) = uVar20;
            puVar12 = local_7a8;
            if ((longlong)(int)plVar18[2] != 0) {
              puVar10 = (uint *)plVar18[1];
              local_7a0 = puVar10 + (longlong)(int)plVar18[2] * 4;
              do {
                plVar18 = *(longlong **)(puVar10 + 2);
                if (((((puVar10[1] != 0 && plVar18 != (longlong *)0x0) &&
                      (uVar20 = *puVar10, -1 < (int)uVar20)) && ((int)uVar20 < DAT_14c9647dc)) &&
                    ((lVar32 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8),
                     lVar32 != 0 && (*(uint *)(lVar32 + 0x10) == puVar10[1])))) &&
                   ((*(uint *)(lVar32 + 8) & 0x10200000) == 0)) {
                  (**(code **)(*plVar18 + 0x40))(plVar18,&local_6e8);
                }
                puVar10 = puVar10 + 4;
                puVar12 = local_7a8;
              } while (puVar10 != local_7a0);
            }
          }
        }
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar21 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar36 = (int *)((longlong)plVar21 + 0xc);
            *piVar36 = *piVar36 + -1;
            UNLOCK();
            if (*piVar36 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        uVar24 = uVar24 & ~(uint)uVar28;
        puVar10 = *(uint **)(param_1 + 0x448);
        if (*(uint **)(param_1 + 0x448) == (uint *)0x0) {
          puVar10 = puVar12;
        }
        iVar25 = *(int *)(param_1 + 0x450);
        iVar7 = (int)uVar27;
        lVar32 = (longlong)iVar7;
        uVar20 = puVar10[lVar32] & uVar24;
        if (uVar20 == 0) {
          iVar16 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar16 = iVar25 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar33 = iVar33 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar7) {
            iVar17 = iVar7;
          }
          if (iVar7 < iVar16) {
            lVar30 = 0;
            do {
              uVar20 = puVar10[lVar32 + lVar30 + 1];
              if (uVar20 != 0) {
                uVar27 = (ulonglong)(iVar7 + (int)lVar30 + 1);
                uVar24 = 0xffffffff;
                goto LAB_143c270ea;
              }
              iVar33 = iVar33 + 0x20;
              lVar30 = lVar30 + 1;
            } while (iVar17 - lVar32 != lVar30);
            uVar24 = 0xffffffff;
            iVar7 = iVar17;
          }
          uVar27 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar25;
        }
        else {
LAB_143c270ea:
          uVar28 = (ulonglong)(-uVar20 & uVar20);
          uVar26 = uVar28 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          iVar7 = (iVar33 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if (iVar25 <= iVar7) {
            iVar7 = iVar25;
          }
        }
      } while (iVar7 != iVar29);
      bVar14 = *(byte *)(param_1 + 0x278);
      lVar32 = local_798;
    }
  }
LAB_143c27340:
  if (((((bVar14 & 1) != 0) && (0 < *(int *)(param_1 + 0x4e0))) &&
      ((*(int *)(param_1 + 0x21c) != 0 &&
       (((uVar24 = *(uint *)(param_1 + 0x218), -1 < (int)uVar24 && ((int)uVar24 < DAT_14c9647dc)) &&
        (puVar13 = (undefined8 *)
                   ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
        puVar13 != (undefined8 *)0x0)))))) &&
     ((*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x21c) &&
      ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
      uVar35 = *puVar13;
    }
    else {
      uVar35 = 0;
    }
    FUN_1486075a6(uVar35,param_1 + 0x4d8);
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      FUN_14860a726();
    }
  }
  if ((((*(char *)(param_1 + 0x278) == '\x01') && (0 < *(int *)(param_1 + 0x4d0))) &&
      ((*(int *)(param_1 + 0x21c) != 0 &&
       (((uVar24 = *(uint *)(param_1 + 0x218), -1 < (int)uVar24 && ((int)uVar24 < DAT_14c9647dc)) &&
        (puVar13 = (undefined8 *)
                   ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
        puVar13 != (undefined8 *)0x0)))))) &&
     ((*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x21c) &&
      ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
      uVar35 = *puVar13;
    }
    else {
      uVar35 = 0;
    }
    FUN_1418431ec(uVar35,param_1 + 0x4c8);
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    if (*(int *)(param_1 + 0x4d4) != 0) {
      FUN_1464adb02();
    }
  }
  puVar12 = (uint *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x21c) == 0) {
LAB_143c27401:
    cVar15 = '\0';
LAB_143c27403:
    cVar6 = cVar15;
    cVar15 = '\0';
  }
  else {
    uVar24 = *puVar12;
    cVar6 = '\0';
    cVar15 = '\0';
    if ((int)uVar24 < 0) goto LAB_143c27403;
    cVar15 = '\0';
    if ((int)uVar24 < DAT_14c9647dc) {
      plVar18 = (longlong *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
      if ((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)(param_1 + 0x21c)))
      goto LAB_143c27401;
      if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
        if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
          lVar30 = *plVar18;
        }
        else {
          lVar30 = 0;
        }
        cVar6 = *(char *)(lVar30 + 0x458);
      }
      else {
        cVar6 = '\0';
      }
      cVar15 = cVar6;
      if ((*(uint *)(plVar18 + 1) & 0x10200000) != 0) goto LAB_143c27403;
      if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
        lVar30 = *plVar18;
      }
      else {
        lVar30 = 0;
      }
      cVar15 = *(char *)(lVar30 + 0x470);
    }
  }
  if (((*(float *)(param_1 + 0x224) <= 0.0) && (cVar6 == '\0')) && (cVar15 == '\0')) {
    puVar10 = (uint *)(param_1 + 0x208);
    lVar30 = 0x3a0;
    puVar19 = puVar12;
    if (((*(int *)(param_1 + 0x20c) != 0) && (uVar24 = *puVar10, -1 < (int)uVar24)) &&
       (((int)uVar24 < DAT_14c9647dc &&
        ((lVar31 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8), lVar31 != 0 &&
         (*(int *)(lVar31 + 0x10) == *(int *)(param_1 + 0x20c))))))) {
      bVar37 = (*(uint *)(lVar31 + 8) & 0x10200000) == 0;
      if (bVar37) {
        puVar19 = puVar10;
      }
      lVar30 = 0x3a0;
      if (bVar37) {
        lVar30 = 0x3c8;
      }
    }
    if (((((puVar19[1] != 0) && (uVar24 = *puVar19, -1 < (int)uVar24)) &&
         ((int)uVar24 < DAT_14c9647dc)) &&
        ((plVar18 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
         plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == puVar19[1])))) &&
       (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
        ((*plVar18 != 0 && (plVar18 = (longlong *)(*plVar18 + lVar30), plVar18 != (longlong *)0x0)))
        ))) {
      lVar30 = plVar18[1];
      fVar39 = *(float *)(plVar18 + 2);
      lVar31 = *(longlong *)((longlong)plVar18 + 0x14);
      fVar40 = *(float *)((longlong)plVar18 + 0x1c);
      lVar11 = (**(code **)(*plVar18 + 0x20))(plVar18);
      if (*(char *)(param_1 + 0x4fc) == '\x01') {
        if (*(char *)(param_1 + 0x4f8) == '\x01') {
          fVar40 = *(float *)(param_1 + 0x4f4);
          FUN_141842e6e(lVar32);
          if (*(char *)(param_1 + 0x4fc) != '\0') goto LAB_143c29131;
        }
        else {
          FUN_141842e6e(lVar32);
          if (*(char *)(param_1 + 0x4fc) == '\0') {
            fVar40 = (float)(**(code **)(*plVar18 + 0x30))(plVar18);
          }
          else {
LAB_143c29131:
            lVar31 = *(longlong *)(param_1 + 0x4e8);
            fVar40 = *(float *)(param_1 + 0x4f0);
          }
        }
      }
      else {
        FUN_141842e6e(lVar32);
        if (*(char *)(param_1 + 0x4fc) == '\x01') goto LAB_143c29131;
      }
      if (((lVar11 != 0) &&
          (*(longlong *)(param_1 + 0x168) != 0 || *(longlong *)(param_1 + 0x160) != 0)) &&
         (lVar30 != 0)) {
        lVar22 = 1;
        if (*(longlong *)(param_1 + 0x168) == 0) {
          lVar22 = -(ulonglong)(*(longlong *)(param_1 + 0x160) == 0);
        }
        fVar42 = fVar39;
        if (((lVar30 != *(longlong *)(param_1 + 0x170 + lVar22 * 8)) ||
            (fVar42 = fVar40, lVar31 != *(longlong *)(param_1 + 0x180 + lVar22 * 8))) ||
           (fVar42 = fVar39, lVar11 != *(longlong *)(param_1 + 0x160 + lVar22 * 8))) {
          lVar30 = 0x3a0;
          puVar19 = puVar12;
          if (((*(int *)(param_1 + 0x20c) != 0) && (uVar24 = *puVar10, -1 < (int)uVar24)) &&
             (((int)uVar24 < DAT_14c9647dc &&
              (((lVar31 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8),
                lVar31 != 0 && (*(int *)(lVar31 + 0x10) == *(int *)(param_1 + 0x20c))) &&
               (lVar30 = 0x3c8, puVar19 = puVar10, (*(uint *)(lVar31 + 8) & 0x10200000) != 0)))))) {
            lVar30 = 0x3a0;
            puVar19 = puVar12;
          }
          local_7b0 = puVar12;
          local_798 = lVar32;
          if (((puVar19[1] != 0) && (uVar24 = *puVar19, -1 < (int)uVar24)) &&
             ((((int)uVar24 < DAT_14c9647dc &&
               ((plVar18 = (longlong *)
                           ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
                plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == puVar19[1])))) &&
              (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
               (plVar21 = (longlong *)(lVar30 + *plVar18),
               plVar21 != (longlong *)0x0 && *plVar18 != 0)))))) {
            fVar39 = fVar42 / *(float *)(param_1 + 0x1d8);
            if (1.0 <= fVar39) {
              fVar39 = 1.0;
            }
            if (fVar39 <= 0.0) {
              fVar39 = 0.0;
            }
            lVar32 = *(longlong *)(param_1 + 0x1e0);
            if (fVar39 <= 1e-08) {
              if ((lVar32 != 0) && ((*(byte *)(lVar32 + 0xa0) & 1) == 0)) {
                FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
              }
              lVar32 = 0x3a0;
              puVar12 = local_7b0;
              if (((((*(int *)(param_1 + 0x20c) != 0) && (uVar24 = *puVar10, -1 < (int)uVar24)) &&
                   ((int)uVar24 < DAT_14c9647dc)) &&
                  ((lVar30 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8),
                   lVar30 != 0 && (*(int *)(lVar30 + 0x10) == *(int *)(param_1 + 0x20c))))) &&
                 (lVar32 = 0x3c8, puVar12 = puVar10, (*(uint *)(lVar30 + 8) & 0x10200000) != 0)) {
                lVar32 = 0x3a0;
                puVar12 = local_7b0;
              }
              if ((((puVar12[1] != 0) && (uVar24 = *puVar12, -1 < (int)uVar24)) &&
                  (((int)uVar24 < DAT_14c9647dc &&
                   (((plVar18 = (longlong *)
                                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
                     plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == puVar12[1])) &&
                    ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) &&
                 (plVar21 = (longlong *)(lVar32 + *plVar18),
                 plVar21 != (longlong *)0x0 && *plVar18 != 0)) {
                lVar32 = plVar21[1];
                lVar30 = *(longlong *)((longlong)plVar21 + 0x14);
                lVar31 = (**(code **)(*plVar21 + 0x20))();
                bVar37 = *(longlong *)(param_1 + 0x160) == 0;
                bVar38 = *(longlong *)(param_1 + 0x168) == 0;
                iVar29 = 1;
                if (bVar38) {
                  iVar29 = -(uint)bVar37;
                }
                if (!bVar38 || !bVar37) {
                  FUN_141842e6e(local_798);
                  lVar11 = local_798;
                  if (*(char *)(param_1 + 0x4fc) == '\x01') {
                    lVar30 = *(longlong *)(param_1 + 0x4e8);
                  }
                  if ((lVar32 != 0 && lVar31 != 0) &&
                     (((lVar22 = (longlong)iVar29,
                       lVar31 != *(longlong *)(param_1 + 0x160 + lVar22 * 8) ||
                       (lVar32 != *(longlong *)(param_1 + 0x170 + lVar22 * 8))) ||
                      (lVar30 != *(longlong *)(param_1 + 0x180 + lVar22 * 8))))) {
                    *(longlong *)(param_1 + 0x160 + lVar22 * 8) = lVar31;
                    *(longlong *)(param_1 + 0x170 + lVar22 * 8) = lVar32;
                    *(longlong *)(param_1 + 0x180 + lVar22 * 8) = lVar30;
                    FUN_14093b8fc(local_798);
                    uVar35 = 0;
                    FUN_1457d922a(lVar11,*(undefined4 *)(param_1 + 0x1d4),0);
                    if (*(int *)(param_1 + -0x14) != 0) {
                      uVar24 = *(uint *)(param_1 + -0x18);
                      uVar35 = 0;
                      if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
                        puVar13 = (undefined8 *)
                                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
                        if ((puVar13 == (undefined8 *)0x0) ||
                           ((*(int *)(puVar13 + 2) != *(int *)(param_1 + -0x14) ||
                            ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
                          uVar35 = 0;
                        }
                        else {
                          uVar35 = *puVar13;
                        }
                      }
                    }
                    FUN_14093b762(param_1 + 0x280,lVar32,uVar35);
                    FUN_14093b762(param_1 + 0x298,lVar30,uVar35);
                    local_6d8 = *(ulonglong *)(param_1 + 0x1a4);
                    local_6e8 = *(longlong *)(param_1 + 0x194);
                    puStack_6e0 = *(undefined8 **)(param_1 + 0x19c);
                    FUN_14093b810(param_1 + 0x2c8,&local_6e8,uVar35);
                  }
                }
              }
              *(undefined4 *)(param_1 + 0x224) = 0;
              puVar12 = local_7b0;
              lVar32 = local_798;
            }
            else {
              if ((lVar32 != 0) && ((*(byte *)(lVar32 + 0xa0) & 1) == 0)) {
                FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
              }
              local_788 = plVar21[1];
              local_790 = *(longlong *)((longlong)plVar21 + 0x14);
              local_7a8 = (uint *)(**(code **)(*plVar21 + 0x20))(plVar21);
              bVar37 = *(longlong *)(param_1 + 0x160) == 0;
              bVar38 = *(longlong *)(param_1 + 0x168) == 0;
              local_77c = 1;
              if (bVar38) {
                local_77c = -(uint)bVar37;
              }
              puVar12 = local_7b0;
              lVar32 = local_798;
              if (!bVar38 || !bVar37) {
                if (*(char *)(param_1 + 0x4fc) == '\x01') {
                  local_790 = *(longlong *)(param_1 + 0x4e8);
                }
                if (((local_788 != 0 && local_7a8 != (uint *)0x0) &&
                    (((local_778 = (longlong)local_77c,
                      local_7a8 != *(uint **)(param_1 + 0x160 + local_778 * 8) ||
                      (local_788 != *(longlong *)(param_1 + 0x170 + local_778 * 8))) ||
                     (local_790 != *(longlong *)(param_1 + 0x180 + local_778 * 8))))) &&
                   ((longlong)*(int *)(param_1 + 0x1b8) != 0)) {
                  puVar13 = *(undefined8 **)(param_1 + 0x1b0);
                  lVar30 = (longlong)*(int *)(param_1 + 0x1b8) * 0x18;
LAB_143c2800a:
                  if ((uint *)*puVar13 != local_7a8) goto code_r0x000143c28013;
                  if (puVar13 != (undefined8 *)0x0) {
                    local_208 = 0;
                    local_200 = 0;
                    local_228 = (int *)0x0;
                    puStack_220 = (ulonglong *)0x0;
                    local_1fc = 0xffffffff00000080;
                    local_1f4 = 0;
                    local_1e8 = 0;
                    local_1e0 = 0;
                    local_1b8 = 0;
                    local_1b0 = 0;
                    local_1d8 = 0;
                    uStack_1d0 = 0;
                    local_1ac = 0xffffffff00000080;
                    local_1a4 = 0;
                    local_198 = 0;
                    local_190 = 0;
                    local_168 = 0;
                    local_160 = 0;
                    local_188 = 0;
                    uStack_180 = 0;
                    local_15c = 0xffffffff00000080;
                    local_154 = 0;
                    local_148 = 0;
                    local_140 = 0;
                    local_770 = &local_138;
                    local_118 = 0;
                    local_110 = 0;
                    local_138 = 0;
                    uStack_130 = 0;
                    local_10c = 0xffffffff00000080;
                    local_104 = 0;
                    local_f8 = 0;
                    local_f0 = 0;
                    local_768 = &local_e8;
                    local_c8 = 0;
                    local_c0 = 0;
                    local_e8 = 0;
                    uStack_e0 = 0;
                    local_bc = 0xffffffff00000080;
                    local_b4 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_398 = 0;
                    local_390 = 0;
                    local_3b8 = 0;
                    uStack_3b0 = 0;
                    local_38c = 0xffffffff00000080;
                    local_384 = 0;
                    local_378 = 0;
                    local_370 = 0;
                    local_348 = 0;
                    local_340 = 0;
                    local_368 = 0;
                    uStack_360 = 0;
                    local_33c = 0xffffffff00000080;
                    local_334 = 0;
                    local_328 = 0;
                    local_320 = 0;
                    local_7a0 = local_318;
                    local_2f8 = 0;
                    local_2f0 = 0;
                    local_318[0] = 0;
                    local_318[1] = 0;
                    local_318[2] = 0;
                    local_318[3] = 0;
                    local_2ec = 0xffffffff00000080;
                    local_2e4 = 0;
                    local_2d8 = 0;
                    local_2d0 = 0;
                    local_760 = &local_2c8;
                    local_2a8 = 0;
                    local_2a0 = 0;
                    local_2c8 = 0;
                    uStack_2c0 = 0;
                    local_29c = 0xffffffff00000080;
                    local_294 = 0;
                    local_288 = 0;
                    local_280 = 0;
                    local_758 = &local_278;
                    local_258 = 0;
                    local_250 = 0;
                    local_278 = 0;
                    uStack_270 = 0;
                    local_24c = 0xffffffff00000080;
                    local_244 = 0;
                    local_238 = 0;
                    local_230 = 0;
                    local_6f8 = DAT_14cb54774;
                    local_708 = _DAT_14cb54764;
                    uStack_704 = uRam000000014cb54768;
                    uStack_700 = DAT_14cb5476c;
                    uStack_6fc = DAT_14cb54770;
                    if ((longlong)*(int *)(puVar13 + 2) != 0) {
                      plVar18 = (longlong *)puVar13[1];
                      local_750 = plVar18 + (longlong)*(int *)(puVar13 + 2) * 0x13;
                      do {
                        lVar32 = *plVar18;
                        if ((*plVar18 == local_790) &&
                           (lVar32 = local_790, (char)plVar18[1] == '\x01')) {
                          if ((longlong)(int)plVar18[6] != 0) {
                            lVar32 = plVar18[5];
                            lVar30 = (longlong)(int)plVar18[6] * 0x90;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_141530994(&local_3b8,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x90;
                              lVar30 = lVar30 + -0x90;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[8] != 0) {
                            lVar32 = plVar18[7];
                            lVar30 = (longlong)(int)plVar18[8] * 0x90;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_1415c9e34(&local_368,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x90;
                              lVar30 = lVar30 + -0x90;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[10] != 0) {
                            lVar32 = plVar18[9];
                            lVar30 = (longlong)(int)plVar18[10] * 0x210;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_141562c58(local_7a0,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x210;
                              lVar30 = lVar30 + -0x210;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[0xc] != 0) {
                            lVar32 = plVar18[0xb];
                            lVar30 = (longlong)(int)plVar18[0xc] * 0x48;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_14860a9c4(local_760,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x48;
                              lVar30 = lVar30 + -0x48;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[0xe] != 0) {
                            lVar32 = plVar18[0xd];
                            lVar30 = (longlong)(int)plVar18[0xe] << 5;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_145bc9fcc(local_758,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x20;
                              lVar30 = lVar30 + -0x20;
                            } while (lVar30 != 0);
                          }
                          local_6f8 = *(undefined8 *)((longlong)plVar18 + 0x1c);
                          local_708 = *(undefined4 *)((longlong)plVar18 + 0xc);
                          uStack_704 = (undefined4)plVar18[2];
                          uStack_700 = *(undefined4 *)((longlong)plVar18 + 0x14);
                          uStack_6fc = (undefined4)plVar18[3];
                          lVar32 = *plVar18;
                        }
                        if ((lVar32 == local_788) && ((char)plVar18[1] == '\0')) {
                          if ((longlong)(int)plVar18[6] != 0) {
                            lVar32 = plVar18[5];
                            lVar30 = (longlong)(int)plVar18[6] * 0x90;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_141530994(&local_228,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x90;
                              lVar30 = lVar30 + -0x90;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[8] != 0) {
                            lVar32 = plVar18[7];
                            lVar30 = (longlong)(int)plVar18[8] * 0x90;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_1415c9e34(&local_1d8,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x90;
                              lVar30 = lVar30 + -0x90;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[10] != 0) {
                            lVar32 = plVar18[9];
                            lVar30 = (longlong)(int)plVar18[10] * 0x210;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_141562c58(&local_188,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x210;
                              lVar30 = lVar30 + -0x210;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[0xc] != 0) {
                            lVar32 = plVar18[0xb];
                            lVar30 = (longlong)(int)plVar18[0xc] * 0x48;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_14860a9c4(local_770,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x48;
                              lVar30 = lVar30 + -0x48;
                            } while (lVar30 != 0);
                          }
                          if ((longlong)(int)plVar18[0xe] != 0) {
                            lVar32 = plVar18[0xd];
                            lVar30 = (longlong)(int)plVar18[0xe] << 5;
                            do {
                              local_748 = (double)lVar32;
                              local_6e8 = lVar32;
                              puStack_6e0 = &local_748;
                              FUN_145bc9fcc(local_768,&local_718,&local_6e8);
                              lVar32 = lVar32 + 0x20;
                              lVar30 = lVar30 + -0x20;
                            } while (lVar30 != 0);
                          }
                        }
                        plVar18 = plVar18 + 0x13;
                      } while (plVar18 != local_750);
                    }
                    local_6e8 = local_798;
                    local_6c0 = 0;
                    uStack_6bc = 0;
                    uStack_6b8 = 0;
                    puStack_6e0 = (undefined8 *)0x0;
                    local_6d8 = 0;
                    local_6b4 = 0xffffffff00000080;
                    local_6ac = 0;
                    local_6a0 = 0;
                    local_698 = 0;
                    FUN_145aa736e(&puStack_6e0,&local_228);
                    local_670 = 0;
                    local_668 = 0;
                    local_690 = 0;
                    uStack_688 = 0;
                    local_664 = 0xffffffff00000080;
                    local_65c = 0;
                    local_650 = 0;
                    local_648 = 0;
                    FUN_145aa7460(&local_690,&local_1d8);
                    local_620 = 0;
                    local_618 = 0;
                    local_640 = 0;
                    uStack_638 = 0;
                    local_614 = 0xffffffff00000080;
                    local_60c = 0;
                    local_600 = 0;
                    local_5f8 = 0;
                    FUN_145aa7552(&local_640,&local_188);
                    local_5d0 = 0;
                    local_5c8 = 0;
                    local_5f0 = 0;
                    uStack_5e8 = 0;
                    local_5c4 = 0xffffffff00000080;
                    local_5bc = 0;
                    local_5b0 = 0;
                    local_5a8 = 0;
                    FUN_145ab7360(&local_5f0,local_770);
                    local_580 = 0;
                    local_578 = 0;
                    local_5a0 = 0;
                    uStack_598 = 0;
                    local_574 = 0xffffffff00000080;
                    local_56c = 0;
                    local_560 = 0;
                    local_558 = 0;
                    FUN_145aa7644(&local_5a0,local_768);
                    local_530 = 0;
                    local_528 = 0;
                    local_550 = 0;
                    uStack_548 = 0;
                    local_524 = 0xffffffff00000080;
                    local_51c = 0;
                    local_510 = 0;
                    local_508 = 0;
                    FUN_145aa736e(&local_550,&local_3b8);
                    local_4e0 = 0;
                    local_4d8 = 0;
                    local_500 = 0;
                    uStack_4f8 = 0;
                    local_4d4 = 0xffffffff00000080;
                    local_4cc = 0;
                    local_4c0 = 0;
                    local_4b8 = 0;
                    FUN_145aa7460(&local_500,&local_368);
                    local_490 = 0;
                    local_488 = 0;
                    local_4b0 = 0;
                    uStack_4a8 = 0;
                    local_484 = 0xffffffff00000080;
                    local_47c = 0;
                    local_470 = 0;
                    local_468 = 0;
                    FUN_145aa7552(&local_4b0,local_7a0);
                    local_440 = 0;
                    local_438 = 0;
                    local_460 = 0;
                    uStack_458 = 0;
                    local_434 = 0xffffffff00000080;
                    local_42c = 0;
                    local_420 = 0;
                    local_418 = 0;
                    FUN_145ab7360(&local_460,local_760);
                    local_3f0 = 0;
                    local_3e8 = 0;
                    local_410 = 0;
                    uStack_408 = 0;
                    local_3e4 = 0xffffffff00000080;
                    local_3dc = 0;
                    local_3d0 = 0;
                    iVar7 = 0;
                    local_3c8 = 0;
                    FUN_145aa7644(&local_410,local_758);
                    local_3c0 = local_77c;
                    iVar29 = *(int *)(param_1 + 0x38);
                    local_3bc = fVar39;
                    if (iVar29 == 0) {
                      uVar28 = 1;
                      uVar27 = 0;
                      iVar33 = 0;
LAB_143c28ab9:
                      if (iVar33 != iVar29) {
                        uVar24 = 0xffffffff;
                        do {
                          lVar32 = *(longlong *)(param_1 + 0x10);
                          lVar30 = (longlong)iVar33 * 0x20;
                          local_748 = *(double *)(lVar32 + 8 + lVar30);
                          uStack_740 = *(double *)(lVar32 + 0x10 + lVar30);
                          if (uStack_740 != 0.0) {
                            LOCK();
                            *(int *)((longlong)uStack_740 + 8) =
                                 *(int *)((longlong)uStack_740 + 8) + 1;
                            UNLOCK();
                          }
                          FUN_143c29ff4(&local_6e8,*(undefined8 *)(lVar32 + lVar30),&local_748);
                          uVar24 = uVar24 & ~(uint)uVar28;
                          puVar12 = *(uint **)(param_1 + 0x30);
                          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
                            puVar12 = (uint *)(param_1 + 0x20);
                          }
                          iVar25 = *(int *)(param_1 + 0x38);
                          iVar33 = (int)uVar27;
                          lVar32 = (longlong)iVar33;
                          uVar20 = puVar12[lVar32] & uVar24;
                          if (uVar20 == 0) {
                            iVar16 = iVar25 + 0x1e;
                            if (-1 < iVar25 + -1) {
                              iVar16 = iVar25 + -1;
                            }
                            iVar16 = iVar16 >> 5;
                            iVar7 = iVar7 + 0x20;
                            iVar17 = iVar16;
                            if (iVar16 < iVar33) {
                              iVar17 = iVar33;
                            }
                            if (iVar33 < iVar16) {
                              lVar30 = 0;
                              do {
                                uVar20 = puVar12[lVar32 + lVar30 + 1];
                                if (uVar20 != 0) {
                                  uVar27 = (ulonglong)(iVar33 + (int)lVar30 + 1);
                                  uVar24 = 0xffffffff;
                                  goto LAB_143c28c12;
                                }
                                iVar7 = iVar7 + 0x20;
                                lVar30 = lVar30 + 1;
                              } while (iVar17 - lVar32 != lVar30);
                              uVar24 = 0xffffffff;
                              iVar33 = iVar17;
                            }
                            uVar27 = (ulonglong)(iVar33 + 1);
                            iVar33 = iVar25;
                          }
                          else {
LAB_143c28c12:
                            uVar28 = (ulonglong)(-uVar20 & uVar20);
                            uVar26 = uVar28 * 2 + 1;
                            lVar32 = 0x3f;
                            if (uVar26 != 0) {
                              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                              }
                            }
                            iVar33 = (iVar7 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                            if (iVar25 <= iVar33) {
                              iVar33 = iVar25;
                            }
                          }
                        } while (iVar33 != iVar29);
                      }
                    }
                    else {
                      puVar12 = *(uint **)(param_1 + 0x30);
                      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
                        puVar12 = (uint *)(param_1 + 0x20);
                      }
                      uVar24 = *puVar12;
                      if (uVar24 != 0) {
                        iVar7 = 0;
                        uVar27 = 0;
LAB_143c289a1:
                        uVar28 = (ulonglong)(-uVar24 & uVar24);
                        uVar26 = uVar28 * 2 + 1;
                        lVar32 = 0x3f;
                        if (uVar26 != 0) {
                          for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                          }
                        }
                        iVar33 = (iVar7 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                        if (iVar29 <= iVar33) {
                          iVar33 = iVar29;
                        }
                        goto LAB_143c28ab9;
                      }
                      iVar7 = iVar29 + 0x1e;
                      if (-1 < iVar29 + -1) {
                        iVar7 = iVar29 + -1;
                      }
                      uVar27 = 0;
                      uVar28 = (ulonglong)(uint)(iVar7 >> 5);
                      if (iVar7 >> 5 < 1) {
                        uVar28 = uVar27;
                      }
                      iVar7 = 0;
                      while (uVar28 != uVar27) {
                        iVar7 = iVar7 + 0x20;
                        uVar24 = puVar12[uVar27 + 1];
                        uVar27 = uVar27 + 1;
                        if (uVar24 != 0) goto LAB_143c289a1;
                      }
                    }
                    iVar29 = *(int *)(param_1 + 0x88);
                    if (iVar29 == 0) {
                      uVar28 = 1;
                      uVar27 = 0;
                      iVar33 = 0;
                      iVar7 = 0;
LAB_143c28c5f:
                      if (iVar7 != iVar29) {
                        uVar24 = 0xffffffff;
                        do {
                          lVar32 = *(longlong *)(param_1 + 0x60);
                          lVar30 = (longlong)iVar7 * 0x20;
                          local_718 = *(ulonglong *)(lVar32 + 8 + lVar30);
                          local_710 = *(longlong *)(lVar32 + 0x10 + lVar30);
                          if (local_710 != 0) {
                            LOCK();
                            *(int *)(local_710 + 8) = *(int *)(local_710 + 8) + 1;
                            UNLOCK();
                          }
                          FUN_143c29ff4(&local_6e8,*(undefined8 *)(lVar32 + lVar30),&local_718);
                          uVar24 = uVar24 & ~(uint)uVar28;
                          puVar12 = *(uint **)(param_1 + 0x80);
                          if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
                            puVar12 = (uint *)(param_1 + 0x70);
                          }
                          iVar25 = *(int *)(param_1 + 0x88);
                          iVar7 = (int)uVar27;
                          lVar32 = (longlong)iVar7;
                          uVar20 = puVar12[lVar32] & uVar24;
                          if (uVar20 == 0) {
                            iVar16 = iVar25 + 0x1e;
                            if (-1 < iVar25 + -1) {
                              iVar16 = iVar25 + -1;
                            }
                            iVar16 = iVar16 >> 5;
                            iVar33 = iVar33 + 0x20;
                            iVar17 = iVar16;
                            if (iVar16 < iVar7) {
                              iVar17 = iVar7;
                            }
                            if (iVar7 < iVar16) {
                              lVar30 = 0;
                              do {
                                uVar20 = puVar12[lVar32 + lVar30 + 1];
                                if (uVar20 != 0) {
                                  uVar27 = (ulonglong)(iVar7 + (int)lVar30 + 1);
                                  uVar24 = 0xffffffff;
                                  goto LAB_143c28dbf;
                                }
                                iVar33 = iVar33 + 0x20;
                                lVar30 = lVar30 + 1;
                              } while (iVar17 - lVar32 != lVar30);
                              uVar24 = 0xffffffff;
                              iVar7 = iVar17;
                            }
                            uVar27 = (ulonglong)(iVar7 + 1);
                            iVar7 = iVar25;
                          }
                          else {
LAB_143c28dbf:
                            uVar28 = (ulonglong)(-uVar20 & uVar20);
                            uVar26 = uVar28 * 2 + 1;
                            lVar32 = 0x3f;
                            if (uVar26 != 0) {
                              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                              }
                            }
                            iVar7 = (iVar33 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                            if (iVar25 <= iVar7) {
                              iVar7 = iVar25;
                            }
                          }
                        } while (iVar7 != iVar29);
                      }
                    }
                    else {
                      puVar12 = *(uint **)(param_1 + 0x80);
                      if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
                        puVar12 = (uint *)(param_1 + 0x70);
                      }
                      uVar24 = *puVar12;
                      if (uVar24 != 0) {
                        uVar27 = 0;
                        iVar33 = 0;
LAB_143c28b21:
                        uVar28 = (ulonglong)(-uVar24 & uVar24);
                        uVar26 = uVar28 * 2 + 1;
                        lVar32 = 0x3f;
                        if (uVar26 != 0) {
                          for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                          }
                        }
                        iVar7 = (iVar33 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                        if (iVar29 <= iVar7) {
                          iVar7 = iVar29;
                        }
                        goto LAB_143c28c5f;
                      }
                      iVar7 = iVar29 + 0x1e;
                      if (-1 < iVar29 + -1) {
                        iVar7 = iVar29 + -1;
                      }
                      uVar27 = 0;
                      uVar28 = (ulonglong)(uint)(iVar7 >> 5);
                      if (iVar7 >> 5 < 1) {
                        uVar28 = uVar27;
                      }
                      iVar33 = 0;
                      while (uVar28 != uVar27) {
                        iVar33 = iVar33 + 0x20;
                        uVar24 = puVar12[uVar27 + 1];
                        uVar27 = uVar27 + 1;
                        if (uVar24 != 0) goto LAB_143c28b21;
                      }
                    }
                    iVar29 = *(int *)(param_1 + 0xd8);
                    if (iVar29 == 0) {
                      uVar28 = 1;
                      uVar27 = 0;
                      iVar33 = 0;
                      iVar7 = 0;
LAB_143c28e0b:
                      if (iVar7 != iVar29) {
                        uVar24 = 0xffffffff;
                        do {
                          lVar32 = *(longlong *)(param_1 + 0xb0);
                          lVar30 = (longlong)iVar7 * 0x20;
                          local_728 = *(undefined8 *)(lVar32 + 8 + lVar30);
                          local_720 = *(longlong *)(lVar32 + 0x10 + lVar30);
                          if (local_720 != 0) {
                            LOCK();
                            *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
                            UNLOCK();
                          }
                          FUN_143c29ff4(&local_6e8,*(undefined8 *)(lVar32 + lVar30),&local_728);
                          uVar24 = uVar24 & ~(uint)uVar28;
                          puVar12 = *(uint **)(param_1 + 0xd0);
                          if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
                            puVar12 = (uint *)(param_1 + 0xc0);
                          }
                          iVar25 = *(int *)(param_1 + 0xd8);
                          iVar7 = (int)uVar27;
                          lVar32 = (longlong)iVar7;
                          uVar20 = puVar12[lVar32] & uVar24;
                          if (uVar20 == 0) {
                            iVar16 = iVar25 + 0x1e;
                            if (-1 < iVar25 + -1) {
                              iVar16 = iVar25 + -1;
                            }
                            iVar16 = iVar16 >> 5;
                            iVar33 = iVar33 + 0x20;
                            iVar17 = iVar16;
                            if (iVar16 < iVar7) {
                              iVar17 = iVar7;
                            }
                            if (iVar7 < iVar16) {
                              lVar30 = 0;
                              do {
                                uVar20 = puVar12[lVar32 + lVar30 + 1];
                                if (uVar20 != 0) {
                                  uVar27 = (ulonglong)(iVar7 + (int)lVar30 + 1);
                                  uVar24 = 0xffffffff;
                                  goto LAB_143c28fff;
                                }
                                iVar33 = iVar33 + 0x20;
                                lVar30 = lVar30 + 1;
                              } while (iVar17 - lVar32 != lVar30);
                              uVar24 = 0xffffffff;
                              iVar7 = iVar17;
                            }
                            uVar27 = (ulonglong)(iVar7 + 1);
                            iVar7 = iVar25;
                          }
                          else {
LAB_143c28fff:
                            uVar28 = (ulonglong)(-uVar20 & uVar20);
                            uVar26 = uVar28 * 2 + 1;
                            lVar32 = 0x3f;
                            if (uVar26 != 0) {
                              for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                              }
                            }
                            iVar7 = (iVar33 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                            if (iVar25 <= iVar7) {
                              iVar7 = iVar25;
                            }
                          }
                        } while (iVar7 != iVar29);
                      }
                    }
                    else {
                      puVar12 = *(uint **)(param_1 + 0xd0);
                      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
                        puVar12 = (uint *)(param_1 + 0xc0);
                      }
                      uVar24 = *puVar12;
                      if (uVar24 != 0) {
                        uVar27 = 0;
                        iVar33 = 0;
LAB_143c28cca:
                        uVar28 = (ulonglong)(-uVar24 & uVar24);
                        uVar26 = uVar28 * 2 + 1;
                        lVar32 = 0x3f;
                        if (uVar26 != 0) {
                          for (; uVar26 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                          }
                        }
                        iVar7 = (iVar33 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                        if (iVar29 <= iVar7) {
                          iVar7 = iVar29;
                        }
                        goto LAB_143c28e0b;
                      }
                      iVar7 = iVar29 + 0x1e;
                      if (-1 < iVar29 + -1) {
                        iVar7 = iVar29 + -1;
                      }
                      uVar27 = 0;
                      uVar28 = (ulonglong)(uint)(iVar7 >> 5);
                      if (iVar7 >> 5 < 1) {
                        uVar28 = uVar27;
                      }
                      iVar33 = 0;
                      while (uVar28 != uVar27) {
                        iVar33 = iVar33 + 0x20;
                        uVar24 = puVar12[uVar27 + 1];
                        uVar27 = uVar27 + 1;
                        if (uVar24 != 0) goto LAB_143c28cca;
                      }
                    }
                    *(uint **)(param_1 + 0x160 + local_778 * 8) = local_7a8;
                    *(longlong *)(param_1 + 0x170 + local_778 * 8) = local_788;
                    *(longlong *)(param_1 + 0x180 + local_778 * 8) = local_790;
                    *(undefined8 *)(param_1 + 0x1a4) = local_6f8;
                    *(undefined4 *)(param_1 + 0x194) = local_708;
                    *(undefined4 *)(param_1 + 0x198) = uStack_704;
                    *(undefined4 *)(param_1 + 0x19c) = uStack_700;
                    *(undefined4 *)(param_1 + 0x1a0) = uStack_6fc;
                    *(float *)(param_1 + 0x224) = fVar42;
                    if (*(int *)(param_1 + -0x14) == 0) {
LAB_143c2905d:
                      uVar35 = 0;
                    }
                    else {
                      uVar24 = *(uint *)(param_1 + -0x18);
                      uVar35 = 0;
                      if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
                        puVar13 = (undefined8 *)
                                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
                        if ((puVar13 == (undefined8 *)0x0) ||
                           ((*(int *)(puVar13 + 2) != *(int *)(param_1 + -0x14) ||
                            ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143c2905d;
                        uVar35 = *puVar13;
                      }
                    }
                    FUN_14093b762(param_1 + 0x280,local_788,uVar35);
                    FUN_14093b762(param_1 + 0x298,local_790,uVar35);
                    FUN_14093b810(param_1 + 0x2c8,&local_708,uVar35);
                    FUN_143c2a684(&local_550);
                    FUN_143c2a684(&puStack_6e0);
                    FUN_143c2a684(&local_3b8);
                    FUN_143c2a684(&local_228);
                    puVar12 = local_7b0;
                    lVar32 = local_798;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143c275b0:
  if (((((((*(int *)(param_1 + 0x21c) != 0) && (uVar24 = *puVar12, -1 < (int)uVar24)) &&
         ((int)uVar24 < DAT_14c9647dc)) &&
        ((plVar18 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
         plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(param_1 + 0x21c))))) &&
       ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
      (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar30 = *plVar18, lVar30 != 0)))) &&
     (0.0 <= *(float *)(param_1 + 0x228))) {
    fVar39 = *(float *)(param_1 + 0x22c) * param_2 + *(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x228) = fVar39;
    if (1.0 <= fVar39) {
      FUN_140fa3796();
      *(undefined4 *)(param_1 + 0x228) = 0xbf800000;
      if (((*(longlong *)(param_1 + 0x230) != 0) &&
          (plVar18 = *(longlong **)(param_1 + 0x238), plVar18 != (longlong *)0x0)) &&
         (0 < (int)plVar18[1])) {
        uVar35 = 0;
        iVar29 = (int)plVar18[1];
        do {
          iVar7 = iVar29;
          if (iVar7 == 0) {
            plVar18 = (longlong *)0x0;
            goto LAB_143c27c2e;
          }
          LOCK();
          iVar29 = (int)plVar18[1];
          bVar37 = iVar7 == iVar29;
          if (bVar37) {
            *(int *)(plVar18 + 1) = iVar7 + 1;
            iVar29 = iVar7;
          }
          UNLOCK();
        } while (!bVar37);
        uVar35 = *(undefined8 *)(param_1 + 0x230);
LAB_143c27c2e:
        FUN_140fa35bc(lVar32,uVar35);
        plVar21 = *(longlong **)(param_1 + 0x238);
        *(undefined8 *)(param_1 + 0x230) = 0;
        *(undefined8 *)(param_1 + 0x238) = 0;
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          piVar36 = (int *)((longlong)plVar21 + 0xc);
          *piVar36 = *piVar36 + -1;
          UNLOCK();
          if (*piVar36 == 0) {
            (**(code **)(*plVar21 + 0x10))();
          }
        }
        if (iVar7 != 0) {
          LOCK();
          plVar21 = plVar18 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar36 = (int *)((longlong)plVar18 + 0xc);
            *piVar36 = *piVar36 + -1;
            UNLOCK();
            if (*piVar36 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
    }
    else {
      FUN_140fa38fc(*(undefined8 *)(lVar30 + 0x3f8));
    }
  }
  local_738 = DAT_14c8464f0;
  local_748 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_740 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  if ((((*(int *)(param_1 + -0x14) == 0) || (uVar24 = *(uint *)(param_1 + -0x18), (int)uVar24 < 0))
      || ((DAT_14c9647dc <= (int)uVar24 ||
          ((plVar18 = (longlong *)
                      ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
           plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + -0x14))))))) ||
     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) {
LAB_143c27658:
    if (0 < *(int *)(param_1 + 0x3a0)) {
      FUN_143c29c0c(lVar32);
    }
  }
  else {
    if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
      lVar30 = *plVar18;
    }
    else {
      lVar30 = 0;
    }
    bVar14 = *(byte *)(lVar30 + 0x152);
    if ((bVar14 != 1) && ((6 < bVar14 || ((0x68U >> (bVar14 & 0x1f) & 1) == 0))))
    goto LAB_143c27658;
    if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
      lVar30 = *plVar18;
    }
    else {
      lVar30 = 0;
    }
    if (*(int *)(lVar30 + 0x238) < 1) goto LAB_143c27658;
    plVar18 = (longlong *)(param_1 + 0x398);
    local_7a0 = (uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
    ;
    lVar31 = 0;
    bVar37 = true;
    uVar24 = 0;
    local_7b0 = puVar12;
    local_798 = lVar32;
    do {
      iVar29 = *(int *)(*(longlong *)(lVar30 + 0x230) + 4 + lVar31 * 8);
      if (((((iVar29 != 0) &&
            (uVar20 = *(uint *)(*(longlong *)(lVar30 + 0x230) + lVar31 * 8), -1 < (int)uVar20)) &&
           ((int)uVar20 < DAT_14c9647dc)) &&
          ((plVar21 = (longlong *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
           plVar21 != (longlong *)0x0 && ((int)plVar21[2] == iVar29)))) &&
         ((((*(uint *)(plVar21 + 1) & 0x10200000) == 0 &&
           ((plVar21 = (longlong *)*plVar21, plVar21 != (longlong *)0x0 &&
            ((*(byte *)(plVar21 + 0x84) & 2) != 0)))) &&
          (cVar6 = (**(code **)(*plVar21 + 0x6c8))(plVar21), cVar6 != '\0')))) {
        local_738 = DAT_14c8464f0;
        local_748 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_740 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        (**(code **)(*plVar21 + 0x718))(plVar21,&local_748,&local_6e8);
        lVar32 = DAT_14cb54360;
        if ((int)uVar24 < 0) {
          FUN_14051b394(plVar18,uVar24 + 1,1);
        }
        else {
          if ((int)uVar24 < *(int *)(param_1 + 0x3a0)) {
            lVar11 = *plVar18;
            uVar27 = (ulonglong)uVar24;
            dVar2 = *(double *)(lVar11 + 0x10 + uVar27 * 0x18) - local_738;
            dVar4 = *(double *)(lVar11 + 8 + uVar27 * 0x18) - uStack_740;
            dVar3 = *(double *)(lVar11 + uVar27 * 0x18) - local_748;
            uVar20 = *local_7a0;
            if (uVar20 == 0x40000002) {
              uVar27 = 0;
            }
            else {
              bVar38 = true;
              if ((DAT_14c86a9f8 == '\x01') && (uVar20 != 2)) {
                if (uVar20 == 1) {
                  uVar41 = FUN_140ad26c0();
                  local_7a8 = (uint *)CONCAT44(local_7a8._4_4_,uVar41);
                  DVar9 = GetCurrentThreadId();
                  bVar38 = (DWORD)local_7a8 == DVar9;
                }
                else {
                  bVar38 = false;
                }
              }
              uVar27 = (ulonglong)(bVar38 ^ 1);
            }
            fVar39 = *(float *)(lVar32 + uVar27 * 4);
            bVar37 = (bool)(bVar37 & (double)(fVar39 * fVar39) <
                                     dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4);
          }
          else {
            FUN_14051b394(plVar18,uVar24 + 1,1);
          }
          if ((int)uVar24 < *(int *)(param_1 + 0x3a0)) {
            lVar32 = *plVar18;
            *(double *)(lVar32 + 0x10 + (ulonglong)uVar24 * 0x18) = local_738;
            puVar1 = (undefined4 *)(lVar32 + (ulonglong)uVar24 * 0x18);
            *puVar1 = (undefined4)local_748;
            puVar1[1] = local_748._4_4_;
            puVar1[2] = (undefined4)uStack_740;
            puVar1[3] = uStack_740._4_4_;
          }
        }
        uVar24 = uVar24 + 1;
      }
      lVar31 = lVar31 + 1;
    } while ((int)lVar31 < *(int *)(lVar30 + 0x238));
    puVar12 = local_7b0;
    lVar32 = local_798;
    if (bVar37) goto LAB_143c27658;
  }
  fVar39 = *(float *)(param_1 + 0x224);
  fVar40 = fVar39 - param_2;
  *(float *)(param_1 + 0x224) = fVar40;
  if (0.0 < fVar40) goto LAB_143c29a93;
  if ((0.0 < fVar39) && (fVar40 <= 0.0)) {
    FUN_143c29cb8(lVar32);
  }
  fVar39 = *(float *)(param_1 + 0x220);
  param_2 = fVar39 - param_2;
  *(float *)(param_1 + 0x220) = param_2;
  if (0.0 < param_2) goto LAB_143c29a93;
  if (0.0 < fVar39) {
    if ((*(longlong *)(param_1 + 0x1e0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
    }
    FUN_141282b42(lVar32);
  }
  if (((((*(int *)(param_1 + -0x14) == 0) || (uVar24 = *(uint *)(param_1 + -0x18), (int)uVar24 < 0))
       || (DAT_14c9647dc <= (int)uVar24)) ||
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + -0x14))))) ||
     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_143c29a93;
  if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
    lVar30 = *plVar18;
  }
  else {
    lVar30 = 0;
  }
  bVar14 = *(byte *)(lVar30 + 0x152);
  if (((bVar14 != 1) && ((6 < bVar14 || ((0x68U >> (bVar14 & 0x1f) & 1) == 0)))) ||
     (*(int *)(param_1 + 0x3a0) < 1)) goto LAB_143c29a93;
  iVar29 = *(int *)(param_1 + 0x1f0);
  local_7b0 = puVar12;
  local_798 = lVar32;
  if ((longlong)iVar29 == 0) {
    local_7a8 = (uint *)0x0;
  }
  else {
    lVar32 = *(longlong *)(param_1 + 0x1e8);
    local_7a8 = (uint *)0x0;
    lVar30 = 0;
    do {
      uVar27 = *(ulonglong *)(lVar32 + lVar30);
      if (((uVar27 >> 0x20 != 0) && (uVar24 = (uint)uVar27, -1 < (int)uVar24)) &&
         ((int)uVar24 < DAT_14c9647dc)) {
        uVar28 = (ulonglong)((uint)(uVar27 >> 0x10) & 0x7fff);
        plVar18 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar28 * 8)
                  );
        if (((plVar18 != (longlong *)0x0) &&
            (iVar7 = (int)(uVar27 >> 0x20), (int)plVar18[2] == iVar7)) &&
           ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
            lVar31 = *plVar18;
          }
          else {
            lVar31 = 0;
          }
          puVar13 = *(undefined8 **)(param_1 + 0x398);
          local_3a8 = puVar13[2];
          local_3b8 = *puVar13;
          uStack_3b0 = puVar13[1];
          plVar18 = *(longlong **)(lVar31 + 0x3a8);
          if (((plVar18 != (longlong *)0x0) &&
              (cVar6 = (**(code **)(*plVar18 + 0x7c0))(plVar18,&local_3b8,&local_228,&local_6e8),
              cVar6 != '\0')) && ((0.0 <= local_228._0_4_ && (local_228._0_4_ <= 0.0)))) {
            if ((int)uVar24 < DAT_14c9647dc) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + uVar28 * 8));
              if (((puVar13 == (undefined8 *)0x0) || (*(int *)(puVar13 + 2) != iVar7)) ||
                 ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) {
                local_7a8 = (uint *)0x0;
              }
              else {
                local_7a8 = (uint *)*puVar13;
              }
            }
            else {
              local_7a8 = (uint *)0x0;
            }
            break;
          }
        }
      }
      lVar30 = lVar30 + 8;
    } while ((longlong)iVar29 * 8 != lVar30);
  }
  local_7a0 = (uint *)CONCAT71(local_7a0._1_7_,
                               *(longlong *)(param_1 + 0x160) == 0 &&
                               *(longlong *)(param_1 + 0x168) == 0);
  local_6c8 = (uint *)0x0;
  local_6c0 = 0;
  local_6e8 = 0;
  puStack_6e0 = (undefined8 *)0x0;
  uStack_6bc = 0x80;
  uStack_6b8 = 0xffffffff;
  local_6b4 = local_6b4 & 0xffffffff00000000;
  local_6a8 = 0;
  local_6a0 = local_6a0 & 0xffffffff00000000;
  local_72c = 0;
  if (*(int *)(param_1 + 0x3a0) < 1) {
LAB_143c295dd:
    *(undefined4 *)(param_1 + 0x210) = 0;
    uVar28 = 0;
    uVar27 = 0xffffffff;
    iVar29 = 0;
  }
  else {
    do {
      local_718 = 0;
      iVar29 = *(int *)(param_1 + 0x200);
      if ((longlong)iVar29 != 0) {
        lVar32 = *(longlong *)(param_1 + 0x1f8);
        lVar30 = 0;
        do {
          uVar27 = *(ulonglong *)(lVar32 + lVar30);
          if (((uVar27 >> 0x20 != 0) && (uVar24 = (uint)uVar27, -1 < (int)uVar24)) &&
             ((int)uVar24 < DAT_14c9647dc)) {
            uVar20 = uVar24 & 0xffff;
            uVar28 = (ulonglong)((uint)(uVar27 >> 0x10) & 0x7fff);
            puVar13 = (undefined8 *)
                      ((ulonglong)(uVar20 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar28 * 8));
            if (((puVar13 != (undefined8 *)0x0) &&
                (iVar7 = (int)(uVar27 >> 0x20), *(int *)(puVar13 + 2) == iVar7)) &&
               ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
                plVar18 = (longlong *)*puVar13;
              }
              else {
                plVar18 = (longlong *)0x0;
              }
              cVar6 = (**(code **)(*plVar18 + 0x668))();
              if (cVar6 != '\0') {
                if (((((int)uVar24 < DAT_14c9647dc) &&
                     (plVar18 = (longlong *)
                                ((ulonglong)(uVar20 * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + uVar28 * 8)),
                     plVar18 != (longlong *)0x0)) && ((int)plVar18[2] == iVar7)) &&
                   ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) {
                  lVar31 = *plVar18;
                }
                else {
                  lVar31 = 0;
                }
                local_6f8 = *(undefined8 *)
                             (*(longlong *)(param_1 + 0x398) + 0x10 + (longlong)local_72c * 0x18);
                puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x398) + (longlong)local_72c * 0x18)
                ;
                local_708 = *puVar1;
                uStack_704 = puVar1[1];
                uStack_700 = puVar1[2];
                uStack_6fc = puVar1[3];
                plVar18 = *(longlong **)(lVar31 + 0x3a8);
                if (((plVar18 != (longlong *)0x0) &&
                    (cVar6 = (**(code **)(*plVar18 + 0x7c0))
                                       (plVar18,&local_708,&local_728,&local_228), cVar6 != '\0'))
                   && ((0.0 <= (float)local_728 && ((float)local_728 <= 0.0)))) {
                  if ((((int)uVar24 < DAT_14c9647dc) &&
                      (puVar34 = (ulonglong *)
                                 ((ulonglong)(uVar20 * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + uVar28 * 8)),
                      puVar34 != (ulonglong *)0x0)) &&
                     (((int)puVar34[2] == iVar7 && ((puVar34[1] & 0x10200000) == 0)))) {
                    local_718 = *puVar34;
                  }
                  else {
                    local_718 = 0;
                  }
                  break;
                }
              }
            }
          }
          lVar30 = lVar30 + 8;
        } while ((longlong)iVar29 * 8 != lVar30);
      }
      local_228 = &local_72c;
      puStack_220 = &local_718;
      FUN_143c31248(&local_6e8,&local_728);
      local_72c = local_72c + 1;
    } while (local_72c < *(int *)(param_1 + 0x3a0));
    if (local_6c0 == 0) goto LAB_143c295dd;
    puVar12 = local_6c8;
    if (local_6c8 == (uint *)0x0) {
      puVar12 = (uint *)&local_6d8;
    }
    uVar24 = *puVar12;
    if (uVar24 == 0) {
      iVar29 = local_6c0 + 0x1e;
      if (-1 < local_6c0 + -1) {
        iVar29 = local_6c0 + -1;
      }
      uVar27 = 0;
      uVar20 = iVar29 >> 5;
      if (iVar29 >> 5 < 1) {
        uVar20 = 0;
      }
      iVar29 = 0;
      do {
        if (uVar20 == uVar27) goto LAB_143c295dd;
        iVar29 = iVar29 + 0x20;
        uVar24 = puVar12[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar27 = 0;
      iVar29 = 0;
    }
    uVar26 = (ulonglong)(-uVar24 & uVar24);
    uVar28 = uVar26 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar7 = (iVar29 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (local_6c0 <= iVar7) goto LAB_143c295dd;
    iVar33 = local_6c0 + 0x1e;
    if (-1 < local_6c0 + -1) {
      iVar33 = local_6c0 + -1;
    }
    iVar33 = iVar33 >> 5;
    uVar24 = 0xffffffff;
    lVar32 = 0;
    do {
      lVar30 = *(longlong *)(local_6e8 + 8 + (longlong)iVar7 * 0x18);
      lVar31 = lVar30;
      if (((lVar32 != 0) && (lVar31 = lVar32, lVar30 != 0)) &&
         (*(int *)(lVar32 + 0x3d4) < *(int *)(lVar30 + 0x3d4))) {
        lVar31 = lVar30;
      }
      uVar24 = uVar24 & ~(uint)uVar26;
      iVar7 = (int)uVar27;
      lVar32 = (longlong)iVar7;
      uVar20 = puVar12[lVar32] & uVar24;
      if (uVar20 == 0) {
        iVar25 = iVar33;
        if (iVar33 < iVar7) {
          iVar25 = iVar7;
        }
        if (iVar33 <= iVar7) break;
        lVar30 = 0;
        while( true ) {
          iVar29 = iVar29 + 0x20;
          uVar20 = puVar12[lVar32 + lVar30 + 1];
          if (uVar20 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar25 - lVar32 == lVar30) goto LAB_143c2954d;
        }
        uVar27 = (ulonglong)(iVar7 + (int)lVar30 + 1);
        uVar24 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar20 & uVar20);
      uVar28 = uVar26 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar7 = (iVar29 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      lVar32 = lVar31;
    } while (iVar7 < local_6c0);
LAB_143c2954d:
    if (lVar31 == 0) goto LAB_143c295dd;
    uVar27 = *(ulonglong *)(lVar31 + 0x3cc);
    uVar24 = *(uint *)(lVar31 + 0xc);
    *(uint *)(param_1 + 0x210) = uVar24;
    if ((int)uVar24 < DAT_14c9647dc) {
      lVar32 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
    }
    else {
      lVar32 = 0;
    }
    uVar28 = uVar27 & 0xffffffff00000000;
    iVar29 = *(int *)(lVar32 + 0x10);
    if (*(int *)(lVar32 + 0x10) == 0) {
      LOCK();
      iVar29 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar37 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar29;
      if (bVar37) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar29 = *(int *)(lVar32 + 0x10);
      bVar37 = iVar29 == 0;
      if (bVar37) {
        *(int *)(lVar32 + 0x10) = iVar7;
        iVar29 = 0;
      }
      UNLOCK();
      if (bVar37) {
        iVar29 = iVar7;
      }
    }
  }
  lVar32 = local_798;
  *(int *)(param_1 + 0x214) = iVar29;
  if (*(int *)(param_1 + 0x20c) == 0) {
LAB_143c29af4:
    puVar12 = (uint *)0x0;
  }
  else {
    uVar24 = *(uint *)(param_1 + 0x208);
    puVar12 = (uint *)0x0;
    if ((-1 < (int)uVar24) && ((int)uVar24 < DAT_14c9647dc)) {
      puVar13 = (undefined8 *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
      if ((puVar13 == (undefined8 *)0x0) ||
         ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x20c) ||
          ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143c29af4;
      puVar12 = (uint *)*puVar13;
    }
  }
  if ((~(byte)local_7a0 & puVar12 == local_7a8) == 0) {
    uVar24 = 0xffffffff;
    bVar37 = true;
    if ((((*(int *)(param_1 + 0x21c) == 0) || (uVar20 = *local_7b0, (int)uVar20 < 0)) ||
        (DAT_14c9647dc <= (int)uVar20)) ||
       (((plVar18 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
         plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + 0x21c))) ||
        (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 ||
         (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (lVar30 = *plVar18, lVar30 == 0)))))))) {
      lVar30 = 0;
      uVar26 = 0;
LAB_143c296c5:
      local_228 = (int *)&DAT_ffffffff;
    }
    else {
      if (*(char *)(lVar30 + 0x458) == '\x01') {
        if (*(int *)(lVar30 + 0x468) == 0) {
          puVar23 = &DAT_149dfb77a;
        }
        else {
          puVar23 = *(undefined2 **)(lVar30 + 0x460);
        }
        FUN_1446f470e(&local_228,puVar23,1);
        uVar26 = (ulonglong)local_228 >> 0x20;
        piVar36 = local_228;
      }
      else {
        piVar36 = (int *)&DAT_ffffffff;
        uVar26 = 0;
      }
      uVar24 = (uint)piVar36;
      if (*(char *)(lVar30 + 0x470) != '\x01') {
        bVar37 = false;
        goto LAB_143c296c5;
      }
      if (*(int *)(lVar30 + 0x480) == 0) {
        puVar23 = &DAT_149dfb77a;
      }
      else {
        puVar23 = *(undefined2 **)(lVar30 + 0x478);
      }
      FUN_1446f470e(&local_228,puVar23,1);
      if ((int)local_228 == -1) {
        bVar37 = false;
        goto LAB_143c296c5;
      }
      bVar37 = false;
    }
    puVar12 = local_7a8;
    if ((int)uVar27 == -1) {
      puStack_220 = (ulonglong *)&DAT_ffffffff;
    }
    else {
      puStack_220 = (ulonglong *)(uVar28 | uVar27 & 0xffffffff);
    }
    puVar10 = (uint *)(param_1 + 0x10);
    if (((local_7a8 == (uint *)0x0) || (*(longlong *)(local_7a8 + 0xfc) == 0)) ||
       (0xfffffffd < local_7a8[0xfe] - 1)) {
      if ((!bVar37) && (lVar31 = FUN_140d3be2e(lVar30 + 0x410), lVar31 != 0)) {
        if ((*(longlong *)(param_1 + 0x1e0) != 0) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0xa0) & 1) == 0)) {
          FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
        }
        uVar41 = 0;
        if ((byte)local_7a0 == '\0') {
          uVar41 = *(undefined4 *)(lVar30 + 0x488);
        }
        *(undefined4 *)(param_1 + 0x220) = uVar41;
        if (uVar24 == 0xffffffff) {
          uVar27 = *(ulonglong *)(lVar30 + 0x3a8);
        }
        else {
          uVar27 = (ulonglong)uVar24 | uVar26 << 0x20;
        }
        local_7b0 = puVar10;
        if ((uVar27 != 0) && ((longlong)*(int *)(lVar31 + 0x88) != 0)) {
          puVar13 = *(undefined8 **)(lVar31 + 0x80);
          lVar11 = (longlong)*(int *)(lVar31 + 0x88) * 0x90;
          do {
            puVar23 = &DAT_149dfb77a;
            if (*(int *)(puVar13 + 1) != 0) {
              puVar23 = (undefined2 *)*puVar13;
            }
            cVar6 = FUN_1402ca022(uVar27,puVar23);
            if (cVar6 != '\0') {
              if (puVar13 != (undefined8 *)0x0) goto LAB_143c298e2;
              break;
            }
            puVar13 = puVar13 + 0x12;
            lVar11 = lVar11 + -0x90;
          } while (lVar11 != 0);
        }
        FUN_1486069ac(lVar31,&local_718);
        uVar27 = local_718;
LAB_143c298e2:
        FUN_143c2db24(&local_228,&local_718,lVar31,*(undefined8 *)(lVar30 + 0x3b4));
        FUN_14093b610(lVar32,lVar31,uVar27,local_718);
        uVar41 = 0;
        if ((byte)local_7a0 == '\0') {
          uVar41 = 0x3f800000;
        }
        FUN_140fa15fa(local_7b0,*(undefined4 *)(param_1 + 0x1d4),uVar41);
        puVar12 = local_7a8;
      }
LAB_143c29a22:
      if (puVar12 != (uint *)0x0) goto LAB_143c29a2b;
      *(undefined4 *)(param_1 + 0x208) = 0;
      iVar29 = 0;
    }
    else {
      lVar32 = FUN_140d3be2e(local_7a8 + 0xfc);
      if (lVar32 != 0) {
        if ((*(longlong *)(param_1 + 0x1e0) != 0) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0xa0) & 1) == 0)) {
          FUN_14009fd82(DAT_14c82b500,param_1 + 0x1e0,0xff);
        }
        uVar20 = 0;
        if ((byte)local_7a0 == '\0') {
          uVar20 = puVar12[0xfa];
        }
        *(uint *)(param_1 + 0x220) = uVar20;
        if (uVar24 == 0xffffffff) {
          uVar27 = *(ulonglong *)(puVar12 + 0xf4);
        }
        else {
          uVar27 = (ulonglong)uVar24 | uVar26 << 0x20;
        }
        local_7b0 = puVar10;
        if ((uVar27 != 0) && ((longlong)*(int *)(lVar32 + 0x88) != 0)) {
          puVar13 = *(undefined8 **)(lVar32 + 0x80);
          lVar30 = (longlong)*(int *)(lVar32 + 0x88) * 0x90;
          do {
            puVar23 = &DAT_149dfb77a;
            if (*(int *)(puVar13 + 1) != 0) {
              puVar23 = (undefined2 *)*puVar13;
            }
            cVar6 = FUN_1402ca022(uVar27,puVar23);
            if (cVar6 != '\0') {
              if (puVar13 != (undefined8 *)0x0) goto LAB_143c299c8;
              break;
            }
            puVar13 = puVar13 + 0x12;
            lVar30 = lVar30 + -0x90;
          } while (lVar30 != 0);
        }
        FUN_1486069ac(lVar32,&local_718);
        uVar27 = local_718;
LAB_143c299c8:
        FUN_143c2db24(&local_228,&local_718,lVar32,*(undefined8 *)(puVar12 + 0xf7));
        FUN_14093b610(local_798,lVar32,uVar27,local_718);
        uVar41 = 0;
        if ((byte)local_7a0 == '\0') {
          uVar41 = 0x3f800000;
        }
        FUN_140fa15fa(local_7b0,*(undefined4 *)(param_1 + 0x1d4),uVar41);
        goto LAB_143c29a22;
      }
LAB_143c29a2b:
      uVar24 = puVar12[3];
      *(uint *)(param_1 + 0x208) = uVar24;
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar32 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar32 = 0;
      }
      iVar29 = *(int *)(lVar32 + 0x10);
      if (*(int *)(lVar32 + 0x10) == 0) {
        LOCK();
        iVar29 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar37 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar29;
        if (bVar37) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar29 = *(int *)(lVar32 + 0x10);
        bVar37 = iVar29 == 0;
        if (bVar37) {
          *(int *)(lVar32 + 0x10) = iVar7;
          iVar29 = 0;
        }
        UNLOCK();
        if (bVar37) {
          iVar29 = iVar7;
        }
      }
    }
    *(int *)(param_1 + 0x20c) = iVar29;
  }
  local_6a0 = local_6a0 & 0xffffffff00000000;
  if (local_6a8 != 0) {
    FUN_1400020a8();
  }
  FUN_143c309aa(&local_6e8);
LAB_143c29a93:
  if ((local_90 ^ (ulonglong)auStack_7d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143c28013:
  puVar13 = puVar13 + 3;
  lVar30 = lVar30 + -0x18;
  if (lVar30 == 0) goto LAB_143c275b0;
  goto LAB_143c2800a;
}



// FUNCTION 143c29c0c FUN_143c29c0c body=171 status=ok
// SIG undefined FUN_143c29c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c29c0c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  uVar3 = DAT_14cb54770;
  uVar2 = DAT_14cb5476c;
  uVar1 = uRam000000014cb54768;
  *(undefined4 *)(param_1 + 0x1b4) = _DAT_14cb54764;
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  *(undefined8 *)(param_1 + 0x1c4) = DAT_14cb54774;
  FUN_14093c894(param_1 + 0x30,0);
  FUN_14093c894(param_1 + 0x30,1);
  *(undefined2 *)(param_1 + 0x1fd) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
  return;
}



// FUNCTION 143c29cb8 FUN_143c29cb8 body=117 status=ok
// SIG undefined FUN_143c29cb8(void)

void FUN_143c29cb8(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  if (*(longlong *)(param_1 + 0x188) == 0 && *(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    iVar1 = -(uint)(*(longlong *)(param_1 + 0x180) == 0);
  }
  FUN_14093b8fc(param_1,iVar1);
  return;
}



// FUNCTION 143c29d2e FUN_143c29d2e body=364 status=ok
// SIG undefined FUN_143c29d2e(void)

void FUN_143c29d2e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  bVar5 = *(longlong *)(param_1 + 0x180) == 0;
  bVar6 = *(longlong *)(param_1 + 0x188) != 0;
  iVar2 = 1;
  if (!bVar6) {
    iVar2 = -(uint)bVar5;
  }
  if (bVar6 || !bVar5) {
    if (*(char *)(param_1 + 0x51c) == '\x01') {
      if (*(char *)(param_1 + 0x518) == '\x01') {
        *(undefined1 *)(param_1 + 0x518) = 0;
      }
      *(undefined1 *)(param_1 + 0x51c) = 0;
    }
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined8 *)(param_1 + 0x1a0 + (longlong)iVar2 * 8) = param_2;
    FUN_14093b8fc(param_1);
    uVar4 = 0;
    FUN_1457d922a(param_1,*(undefined4 *)(param_1 + 500),0);
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
      uVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar3 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar3 == (undefined8 *)0x0) ||
           ((*(int *)(puVar3 + 2) != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar3;
        }
      }
    }
    FUN_14093b762(param_1 + 0x2b8,param_2,uVar4);
    local_28 = *(undefined8 *)(param_1 + 0x1c4);
    local_38 = *(undefined4 *)(param_1 + 0x1b4);
    uStack_34 = *(undefined4 *)(param_1 + 0x1b8);
    uStack_30 = *(undefined4 *)(param_1 + 0x1bc);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c0);
    FUN_14093b810(param_1 + 0x2e8,&local_38,uVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c29e9c FUN_143c29e9c body=343 status=ok
// SIG undefined FUN_143c29e9c(void)

void FUN_143c29e9c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x200) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
    FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
  }
  bVar7 = *(longlong *)(param_1 + 0x180) == 0;
  bVar8 = *(longlong *)(param_1 + 0x188) != 0;
  iVar3 = 1;
  if (!bVar8) {
    iVar3 = -(uint)bVar7;
  }
  if (bVar8 || !bVar7) {
    lVar6 = (longlong)iVar3;
    *(undefined8 *)(param_1 + 400 + lVar6 * 8) = param_2;
    lVar2 = *(longlong *)(param_1 + 0x180 + lVar6 * 8);
    if (lVar2 != 0) {
      FUN_140d3bf04(lVar2,&local_38,param_2);
      *(undefined8 *)(param_1 + 0x1a0 + lVar6 * 8) = local_38;
    }
    FUN_14093b8fc(param_1,iVar3);
    uVar4 = 0;
    FUN_1457d922a(param_1,*(undefined4 *)(param_1 + 500),0);
    *(undefined4 *)(param_1 + 0x244) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
      uVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar5;
        }
      }
    }
    FUN_14093b762(param_1 + 0x2a0,param_2,uVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c29ff4 FUN_143c29ff4 body=1680 status=ok
// SIG undefined FUN_143c29ff4(void)

void FUN_143c29ff4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar7 = *param_1;
  uVar9 = (uint)param_2;
  iVar5 = (int)((ulonglong)param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_2 >> 0x10);
  if ((int)param_1[0x34] != *(int *)((longlong)param_1 + 0x1cc)) {
    plVar6 = param_1 + 0x3a;
    if ((longlong *)param_1[0x3b] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x3b];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x3c] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x33] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a380;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[0x3e] != *(int *)((longlong)param_1 + 0x21c)) {
    plVar6 = param_1 + 0x44;
    if ((longlong *)param_1[0x45] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x45];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x46] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x3d] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a44f;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[0x48] != *(int *)((longlong)param_1 + 0x26c)) {
    plVar6 = param_1 + 0x4e;
    if ((longlong *)param_1[0x4f] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x4f];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x50] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x47] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a51e;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[0x5c] != *(int *)((longlong)param_1 + 0x30c)) {
    plVar6 = param_1 + 0x62;
    if ((longlong *)param_1[99] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[99];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[100] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x5b] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a658;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar6 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[9];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[10] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[1] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a380;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    plVar6 = param_1 + 0x12;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x13];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x14] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0xb] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a44f;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[0x16] != *(int *)((longlong)param_1 + 0xdc)) {
    plVar6 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1d];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x1e] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x15] + (longlong)iVar4 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a51e;
          break;
        }
        iVar4 = (int)plVar6[2];
      } while (iVar4 != -1);
    }
  }
  if ((int)param_1[0x2a] != *(int *)((longlong)param_1 + 0x17c)) {
    plVar6 = param_1 + 0x30;
    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x31];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[0x32] - 1U &
                    iVar5 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar9 & 0xffff) >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(param_1[0x29] + (longlong)iVar5 * 0x18);
        if (*plVar6 == param_2) {
          plVar8 = plVar6 + 1;
          if (plVar8 != (longlong *)0x0 && plVar6 != (longlong *)0x0) goto LAB_143c2a658;
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  (**(code **)(*(longlong *)*param_3 + 0x68))
            ((longlong *)*param_3,(int)param_1[0x65],0,*(undefined4 *)(lVar7 + 500),
             *(undefined4 *)((longlong)param_1 + 0x32c),1);
  (**(code **)(*(longlong *)*param_3 + 0x70))
            ((longlong *)*param_3,(int)param_1[0x65],0,*(undefined4 *)(lVar7 + 500),
             *(undefined4 *)((longlong)param_1 + 0x32c),1);
  (**(code **)(*(longlong *)*param_3 + 0x78))
            ((longlong *)*param_3,(int)param_1[0x65],0,*(undefined4 *)(lVar7 + 500),
             *(undefined4 *)((longlong)param_1 + 0x32c),1);
  plVar6 = (longlong *)*param_3;
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x32c);
  uVar11 = *(undefined4 *)(lVar7 + 500);
  uVar2 = (undefined4)param_1[0x65];
  lVar7 = *plVar6;
  lVar10 = 0;
LAB_143c2a619:
  (**(code **)(lVar7 + 0x80))(plVar6,uVar2,lVar10,uVar11,uVar12,1);
LAB_143c2a61f:
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c2a64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
LAB_143c2a380:
  (**(code **)(*(longlong *)*param_3 + 0x68))
            ((longlong *)*param_3,(int)param_1[0x65],*plVar8,*(undefined4 *)(lVar7 + 500),
             *(undefined4 *)((longlong)param_1 + 0x32c),1);
  goto LAB_143c2a61f;
LAB_143c2a44f:
  (**(code **)(*(longlong *)*param_3 + 0x70))
            ((longlong *)*param_3,(int)param_1[0x65],*plVar8,*(undefined4 *)(lVar7 + 500),
             *(undefined4 *)((longlong)param_1 + 0x32c),1);
  goto LAB_143c2a61f;
LAB_143c2a51e:
  (**(code **)(*(longlong *)*param_3 + 0x78))
            ((longlong *)*param_3,(int)param_1[0x65],*plVar8,*(undefined4 *)(lVar7 + 500),
             *(undefined4 *)((longlong)param_1 + 0x32c),1);
  goto LAB_143c2a61f;
LAB_143c2a658:
  plVar6 = (longlong *)*param_3;
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x32c);
  uVar11 = *(undefined4 *)(lVar7 + 500);
  lVar10 = *plVar8;
  uVar2 = (undefined4)param_1[0x65];
  lVar7 = *plVar6;
  goto LAB_143c2a619;
}



// FUNCTION 143c2a684 FUN_143c2a684 body=209 status=ok
// SIG undefined FUN_143c2a684(void)

void FUN_143c2a684(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_14585ec14(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_14585f462(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_14585ecc6(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14585ed78(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14585ee2a(param_1);
  return;
}



// FUNCTION 143c2a756 FUN_143c2a756 body=13261 status=ok
// SIG undefined FUN_143c2a756(void)

void FUN_143c2a756(longlong *param_1,longlong *param_2,char param_3,float param_4)

{
  int *piVar1;
  void **ppvVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong *****ppppplVar5;
  longlong *****ppppplVar6;
  longlong *****ppppplVar7;
  undefined1 auVar8 [8];
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong ******pppppplVar15;
  longlong ******pppppplVar16;
  float *pfVar17;
  undefined8 *puVar18;
  byte bVar19;
  int iVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  float fVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  longlong ******pppppplVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  longlong lVar38;
  undefined4 *puVar39;
  undefined8 *puVar40;
  longlong lVar41;
  longlong lVar42;
  bool bVar43;
  undefined1 auStack_358 [32];
  ulonglong local_338;
  undefined8 local_330;
  undefined8 local_328;
  code *local_320;
  char local_311;
  longlong *local_310;
  uint *local_308;
  longlong local_300;
  longlong *local_2f8;
  int local_2ec;
  longlong *****local_2e8 [3];
  undefined1 local_2cc [4];
  undefined1 local_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  void *pvStack_2b0;
  ulonglong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong ****local_278;
  undefined8 uStack_270;
  ulonglong uStack_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong lStack_250;
  undefined4 local_248;
  uint uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  longlong local_230;
  undefined4 local_228;
  longlong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  void *pvStack_208;
  ulonglong uStack_200;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (*param_2 == 0) goto LAB_143c2c010;
  local_300 = *param_1;
  local_2e8[2] = *(longlong ******)(*param_2 + 8);
  local_308 = (uint *)CONCAT71(local_308._1_7_,(char)param_1[0x14]);
  lVar13 = param_1[0x16];
  local_311 = param_3;
  local_310 = param_1;
  local_2f8 = param_2;
  if ((longlong)(int)lVar13 != 0) {
    lVar38 = param_1[0x15];
    lVar42 = 0;
    do {
      ppppplVar5 = local_2e8[2];
      local_288 = (longlong ******)0x0;
      uVar31 = *(uint *)(lVar38 + 8 + lVar42);
      pvVar4 = *(void **)(lVar38 + lVar42);
      uStack_280 = (longlong ******)CONCAT44(uStack_280._4_4_,uVar31);
      if ((longlong)(int)uVar31 == 0) {
        uStack_280 = (longlong ******)(ulonglong)uVar31;
      }
      else {
        FUN_1446dd670(&local_288,uVar31,0);
        memcpy(local_288,pvVar4,(longlong)(int)uVar31 * 2);
      }
      cVar9 = FUN_1402ca054(ppppplVar5,local_288);
      if (local_288 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
      if (cVar9 != '\0') {
        iVar32 = 0;
        goto LAB_143c2a8a0;
      }
      lVar42 = lVar42 + 0x10;
    } while ((longlong)(int)lVar13 * 0x10 != lVar42);
  }
  iVar32 = 2;
LAB_143c2a8a0:
  plVar24 = local_2f8;
  lVar13 = *local_2f8;
  if (lVar13 == 0) goto LAB_143c2c010;
  uVar12 = FUN_1418424a4();
  cVar9 = FUN_1448093f4(lVar13,uVar12);
  if (cVar9 == '\0') {
    lVar13 = *plVar24;
    if (lVar13 == 0) goto LAB_143c2c010;
    uVar12 = FUN_1418424de();
    cVar9 = FUN_1448093f4(lVar13,uVar12);
    plVar23 = local_310;
    if (cVar9 != '\0') {
      plVar22 = (longlong *)local_310[2];
      iVar30 = (int)plVar22[1];
      iVar20 = *(int *)((longlong)plVar22 + 0x34);
      if (iVar30 != iVar20) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        plVar37 = plVar22 + 7;
        if ((longlong *)plVar22[8] != (longlong *)0x0) {
          plVar37 = (longlong *)plVar22[8];
        }
        iVar10 = *(int *)((longlong)plVar37 +
                         (ulonglong)
                         ((int)plVar22[9] - 1U &
                         (int)((ulonglong)local_2e8[2] >> 0x20) +
                         ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff)
                         + (uVar25 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong *******)(*plVar22 + (longlong)iVar10 * 0xa0) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2ad82;
            iVar10 = *(int *)((longlong)iVar10 * 0xa0 + *plVar22 + 0x98);
          } while (iVar10 != -1);
        }
      }
      uStack_2c0 = (longlong ******)&local_288;
      lStack_250 = 0;
      local_248 = 0;
      uStack_270 = (void *)0x0;
      uStack_268 = 0;
      uStack_244 = 0x80;
      uStack_240 = 0xffffffff;
      local_23c = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_278 = (longlong ****)&PTR_FUN_14a46be50;
      local_210 = 0;
      pvStack_208 = (void *)0x0;
      uStack_200 = CONCAT35(uStack_200._5_3_,0x7fffffff);
      local_288 = (longlong ******)local_2e8[2];
      uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
      local_2c8 = (undefined1  [8])(local_2e8 + 2);
      FUN_1413d80fc(plVar22,&local_298);
      local_278 = (longlong ****)&PTR_FUN_14a46be50;
      if (local_210 != 0) {
        FUN_1400020a8();
      }
      local_278 = (longlong ****)&PTR_FUN_14a177080;
      if (local_220 != 0) {
        FUN_1400020a8();
      }
      plVar24 = local_2f8;
      local_228 = 0;
      if (local_230 != 0) {
        FUN_1400020a8();
      }
      uVar14 = uStack_268 >> 0x20;
      uStack_268 = uStack_268 & 0xffffffff00000000;
      if ((int)uVar14 != 0) {
        FUN_14472eb64(&uStack_270,0);
      }
      uStack_240 = 0xffffffff;
      local_23c = 0;
      local_248 = 0;
      if (0x80 < uStack_244) {
        uStack_244 = 0x80;
        FUN_1446efbd8(&uStack_260,0);
      }
      if (lStack_250 != 0) {
        FUN_1400020a8();
      }
      if (uStack_270 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar22 = (longlong *)plVar23[2];
      iVar30 = (int)plVar22[1];
      iVar20 = *(int *)((longlong)plVar22 + 0x34);
LAB_143c2ad82:
      if (iVar30 != iVar20) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        plVar23 = plVar22 + 7;
        if ((longlong *)plVar22[8] != (longlong *)0x0) {
          plVar23 = (longlong *)plVar22[8];
        }
        iVar30 = *(int *)((longlong)plVar23 +
                         (ulonglong)
                         ((int)plVar22[9] - 1U &
                         (int)((ulonglong)local_2e8[2] >> 0x20) +
                         ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff)
                         + (uVar25 >> 4)) * 4);
        if (iVar30 != -1) {
          do {
            lVar13 = *plVar22 + (longlong)iVar30 * 0xa0;
            if (*(longlong *******)(*plVar22 + (longlong)iVar30 * 0xa0) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2adff;
            iVar30 = *(int *)(lVar13 + 0x98);
          } while (iVar30 != -1);
        }
      }
      lVar13 = 0;
LAB_143c2adff:
      local_2e8[0] = (longlong *****)((ulonglong)local_2e8[0] & 0xffffffff00000000);
      (**(code **)(*(longlong *)*plVar24 + 0x10))();
      if (local_311 == '\0') {
        iVar30 = 0;
        do {
          LOCK();
          UNLOCK();
          local_338 = CONCAT44(local_338._4_4_,DAT_14c761474 + 1);
          DAT_14c761474 = DAT_14c761474 + 1;
          FUN_140da67de(lVar13 + 0x18,&local_288,(float)iVar30 + param_4,
                        (ulonglong)local_2e8[0] & 0xffffffff);
          iVar30 = iVar30 + 1;
        } while (iVar32 + 1 != iVar30);
      }
      else {
        *(undefined4 *)(lVar13 + 0x90) = local_2e8[0]._0_4_;
      }
      plVar24 = (longlong *)(local_300 + 0x80);
      if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        lVar13 = local_300 + 0xb8;
        if (*(longlong *)(local_300 + 0xc0) != 0) {
          lVar13 = *(longlong *)(local_300 + 0xc0);
        }
        iVar32 = *(int *)(lVar13 + (ulonglong)
                                   (*(int *)(local_300 + 200) - 1U &
                                   (int)((ulonglong)local_2e8[2] >> 0x20) +
                                   ((uint)local_2e8[2] << 0x10 | uVar25) +
                                   (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
        if (iVar32 != -1) {
          do {
            if (*(longlong *******)(*plVar24 + (longlong)iVar32 * 0x20) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2c010;
            iVar32 = *(int *)((longlong)iVar32 * 0x20 + *plVar24 + 0x18);
          } while (iVar32 != -1);
        }
      }
      pppppplVar15 = (longlong ******)FUN_14001cc68(0x150,0x10);
      pppppplVar15[1] = (longlong *****)&DAT_100000001;
      *pppppplVar15 = (longlong *****)&PTR_FUN_14afe28b0;
      auVar8 = (undefined1  [8])(pppppplVar15 + 2);
      FUN_1486043bc(auVar8);
      if (pppppplVar15 != (longlong ******)0x0) {
        LOCK();
        *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
        UNLOCK();
        LOCK();
        pppppplVar16 = pppppplVar15 + 1;
        *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
        UNLOCK();
        if (*(int *)pppppplVar16 == 0) {
          (*(code *)**pppppplVar15)(pppppplVar15);
          LOCK();
          piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pppppplVar15)[2])(pppppplVar15);
          }
        }
      }
      lVar13 = (longlong)*(int *)((undefined8 *)local_310[0x17] + 1);
      if (lVar13 != 0) {
        puVar18 = *(undefined8 **)local_310[0x17];
        lVar13 = lVar13 << 5;
        do {
          if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
            if (((puVar18 != (undefined8 *)0x0) && (puVar18[1] != 0)) && (puVar18[2] != 0)) {
              uVar3 = *(undefined4 *)(puVar18[2] + (longlong)*(int *)(puVar18[1] + 0x44));
              *(undefined4 *)((longlong)pppppplVar15 + 0x1c) = uVar3;
              *(undefined4 *)(pppppplVar15 + 0x15) = uVar3;
              *(undefined4 *)(pppppplVar15 + 0x27) = uVar3;
            }
            break;
          }
          puVar18 = puVar18 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      goto LAB_143c2bf88;
    }
    lVar13 = *plVar24;
    if (lVar13 == 0) goto LAB_143c2c010;
    uVar12 = FUN_14184258c();
    cVar9 = FUN_1448093f4(lVar13,uVar12);
    plVar23 = local_310;
    if (cVar9 != '\0') {
      plVar22 = (longlong *)local_310[2];
      iVar30 = (int)plVar22[1];
      iVar20 = *(int *)((longlong)plVar22 + 0x34);
      if (iVar30 != iVar20) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        plVar37 = plVar22 + 7;
        if ((longlong *)plVar22[8] != (longlong *)0x0) {
          plVar37 = (longlong *)plVar22[8];
        }
        iVar10 = *(int *)((longlong)plVar37 +
                         (ulonglong)
                         ((int)plVar22[9] - 1U &
                         (int)((ulonglong)local_2e8[2] >> 0x20) +
                         ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff)
                         + (uVar25 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong *******)(*plVar22 + (longlong)iVar10 * 0xa0) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2b039;
            iVar10 = *(int *)((longlong)iVar10 * 0xa0 + *plVar22 + 0x98);
          } while (iVar10 != -1);
        }
      }
      uStack_2c0 = (longlong ******)&local_288;
      lStack_250 = 0;
      local_248 = 0;
      uStack_270 = (void *)0x0;
      uStack_268 = 0;
      uStack_244 = 0x80;
      uStack_240 = 0xffffffff;
      local_23c = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_278 = (longlong ****)&PTR_FUN_14a46be50;
      local_210 = 0;
      pvStack_208 = (void *)0x0;
      uStack_200 = CONCAT35(uStack_200._5_3_,0x7fffffff);
      local_288 = (longlong ******)local_2e8[2];
      uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
      local_2c8 = (undefined1  [8])(local_2e8 + 2);
      FUN_1413d80fc(plVar22,&local_298);
      local_278 = (longlong ****)&PTR_FUN_14a46be50;
      if (local_210 != 0) {
        FUN_1400020a8();
      }
      local_278 = (longlong ****)&PTR_FUN_14a177080;
      if (local_220 != 0) {
        FUN_1400020a8();
      }
      plVar24 = local_2f8;
      local_228 = 0;
      if (local_230 != 0) {
        FUN_1400020a8();
      }
      uVar14 = uStack_268 >> 0x20;
      uStack_268 = uStack_268 & 0xffffffff00000000;
      if ((int)uVar14 != 0) {
        FUN_14472eb64(&uStack_270,0);
      }
      uStack_240 = 0xffffffff;
      local_23c = 0;
      local_248 = 0;
      if (0x80 < uStack_244) {
        uStack_244 = 0x80;
        FUN_1446efbd8(&uStack_260,0);
      }
      if (lStack_250 != 0) {
        FUN_1400020a8();
      }
      if (uStack_270 != (void *)0x0) {
        FUN_1400020a8();
      }
      plVar22 = (longlong *)plVar23[2];
      iVar30 = (int)plVar22[1];
      iVar20 = *(int *)((longlong)plVar22 + 0x34);
LAB_143c2b039:
      if (iVar30 != iVar20) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        plVar23 = plVar22 + 7;
        if ((longlong *)plVar22[8] != (longlong *)0x0) {
          plVar23 = (longlong *)plVar22[8];
        }
        iVar30 = *(int *)((longlong)plVar23 +
                         (ulonglong)
                         ((int)plVar22[9] - 1U &
                         (int)((ulonglong)local_2e8[2] >> 0x20) +
                         ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff)
                         + (uVar25 >> 4)) * 4);
        if (iVar30 != -1) {
          do {
            lVar13 = *plVar22 + (longlong)iVar30 * 0xa0;
            if (*(longlong *******)(*plVar22 + (longlong)iVar30 * 0xa0) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2b0b6;
            iVar30 = *(int *)(lVar13 + 0x98);
          } while (iVar30 != -1);
        }
      }
      lVar13 = 0;
LAB_143c2b0b6:
      local_2e8[0] = (longlong *****)((ulonglong)local_2e8[0] & 0xffffffffffffff00);
      (**(code **)(*(longlong *)*plVar24 + 0x10))();
      if (local_311 == '\0') {
        iVar30 = 0;
        do {
          LOCK();
          UNLOCK();
          local_338 = CONCAT44(local_338._4_4_,DAT_14c761474 + 1);
          DAT_14c761474 = DAT_14c761474 + 1;
          FUN_140da67de(lVar13 + 0x18,&local_288,(float)iVar30 + param_4,
                        (ulonglong)local_2e8[0] & 0xff);
          iVar30 = iVar30 + 1;
        } while (iVar32 + 1 != iVar30);
      }
      else {
        *(uint *)(lVar13 + 0x90) = (uint)(byte)local_2e8[0];
      }
      plVar23 = local_310;
      plVar24 = (longlong *)(local_300 + 0x80);
      if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        lVar13 = local_300 + 0xb8;
        if (*(longlong *)(local_300 + 0xc0) != 0) {
          lVar13 = *(longlong *)(local_300 + 0xc0);
        }
        iVar32 = *(int *)(lVar13 + (ulonglong)
                                   (*(int *)(local_300 + 200) - 1U &
                                   (int)((ulonglong)local_2e8[2] >> 0x20) +
                                   ((uint)local_2e8[2] << 0x10 | uVar25) +
                                   (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
        if (iVar32 != -1) {
          do {
            if (*(longlong *******)(*plVar24 + (longlong)iVar32 * 0x20) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2c010;
            iVar32 = *(int *)((longlong)iVar32 * 0x20 + *plVar24 + 0x18);
          } while (iVar32 != -1);
        }
      }
      pppppplVar15 = (longlong ******)FUN_14001cc68(0x150,0x10);
      pppppplVar15[1] = (longlong *****)&DAT_100000001;
      *pppppplVar15 = (longlong *****)&PTR_FUN_14afe28d0;
      auVar8 = (undefined1  [8])(pppppplVar15 + 2);
      pppppplVar15[2] = (longlong *****)&PTR_FUN_14afdf9d0;
      *(undefined2 *)(pppppplVar15 + 3) = 0;
      lVar13 = 0xac;
      do {
        *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x8c) = 0;
        *(undefined1 *)((longlong)pppppplVar15 + lVar13 + -0x84) = 0;
        *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x54) = 0;
        *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -0x4c) = 0;
        puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x74);
        *puVar18 = 0;
        puVar18[1] = 0;
        *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x48) = 0xffffffff00000080;
        *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -0x40) = 0;
        *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x34) = 0;
        *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -0x2c) = 0;
        puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x24);
        *puVar18 = 0;
        puVar18[1] = 0;
        *(undefined ***)((longlong)pppppplVar15 + lVar13 + -0x7c) = &PTR_FUN_14a46be50;
        puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x14);
        *puVar18 = 0;
        puVar18[1] = 0;
        *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -4) = 0x7fffffff;
        *(undefined1 *)((longlong)pppppplVar15 + lVar13) = 0;
        lVar13 = lVar13 + 0x90;
      } while (lVar13 != 0x1cc);
      pppppplVar15[0x28] = (longlong *****)0x0;
      pppppplVar15[0x29] = (longlong *****)0x0;
      if (pppppplVar15 != (longlong ******)0x0) {
        LOCK();
        *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
        UNLOCK();
        LOCK();
        pppppplVar16 = pppppplVar15 + 1;
        *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
        UNLOCK();
        if (*(int *)pppppplVar16 == 0) {
          (*(code *)**pppppplVar15)(pppppplVar15);
          LOCK();
          piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pppppplVar15)[2])(pppppplVar15);
          }
        }
      }
      lVar13 = (longlong)*(int *)((undefined8 *)plVar23[0x17] + 1);
      if (lVar13 != 0) {
        puVar18 = *(undefined8 **)plVar23[0x17];
        lVar13 = lVar13 << 5;
        do {
          if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
            if (((puVar18 != (undefined8 *)0x0) && (lVar13 = puVar18[1], lVar13 != 0)) &&
               (puVar18[2] != 0)) {
              puVar40 = *(undefined8 **)(lVar13 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951d20) &&
                 (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
                local_328 = FUN_1446ddbd2();
                local_320 = FUN_14067a048;
                local_330 = 0;
                local_338 = 0x28001;
                FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
                atexit(FUN_142811fe5);
                _Init_thread_footer(&DAT_14c951d20);
              }
              if (DAT_14c951cd8 == 0) {
                bVar43 = puVar40 != (undefined8 *)0x0;
                if (puVar40 == &DAT_14c951cd0 || !bVar43) goto LAB_143c2cb7a;
                goto LAB_143c2cb65;
              }
              if ((puVar40[3] & DAT_14c951cd8) != 0) goto LAB_143c2bf53;
            }
            break;
          }
          puVar18 = puVar18 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      goto LAB_143c2bf88;
    }
    lVar13 = *plVar24;
    if (lVar13 == 0) goto LAB_143c2c010;
    uVar12 = FUN_141842518();
    cVar9 = FUN_1448093f4(lVar13,uVar12);
    if (cVar9 == '\0') {
      lVar13 = *plVar24;
      if (lVar13 == 0) goto LAB_143c2c010;
      uVar12 = FUN_141842552();
      cVar9 = FUN_1448093f4(lVar13,uVar12);
      if (cVar9 == '\0') {
        lVar13 = *plVar24;
        if (lVar13 == 0) goto LAB_143c2c010;
        uVar12 = FUN_1464ac3f4();
        cVar9 = FUN_1448093f4(lVar13,uVar12);
        if (cVar9 == '\0') {
          lVar13 = *plVar24;
          if (lVar13 != 0) {
            uVar12 = FUN_1464ac48c();
            cVar9 = FUN_1448093f4(lVar13,uVar12);
            if (cVar9 != '\0') {
              plVar24 = (longlong *)local_310[4];
              iVar30 = (int)plVar24[1];
              iVar20 = *(int *)((longlong)plVar24 + 0x34);
              if (iVar30 != iVar20) {
                uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
                uVar25 = (uint)local_2e8[2] & 0xffff;
                plVar23 = plVar24 + 7;
                if ((longlong *)plVar24[8] != (longlong *)0x0) {
                  plVar23 = (longlong *)plVar24[8];
                }
                iVar10 = *(int *)((longlong)plVar23 +
                                 (ulonglong)
                                 ((int)plVar24[9] - 1U &
                                 (int)((ulonglong)local_2e8[2] >> 0x20) +
                                 ((uint)local_2e8[2] << 0x10 | uVar25) +
                                 (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
                if (iVar10 != -1) {
                  do {
                    if (*(longlong *******)(*plVar24 + (longlong)iVar10 * 0x58) ==
                        (longlong ******)local_2e8[2]) goto LAB_143c2cda6;
                    iVar10 = *(int *)((longlong)iVar10 * 0x58 + *plVar24 + 0x50);
                  } while (iVar10 != -1);
                }
              }
              local_258 = 0;
              lStack_250 = 0;
              uStack_268 = 0;
              uStack_260 = 0;
              local_278 = (longlong ****)0x0;
              uStack_270 = (void *)0x0;
              local_248 = 0;
              uStack_244 = 0;
              local_288 = (longlong ******)local_2e8[2];
              uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
              local_2c8 = (undefined1  [8])(local_2e8 + 2);
              uStack_2c0 = (longlong ******)&local_288;
              FUN_148608678(plVar24,&local_298);
              FUN_148603a84(&local_288);
              plVar24 = (longlong *)local_310[4];
              iVar30 = (int)plVar24[1];
              iVar20 = *(int *)((longlong)plVar24 + 0x34);
LAB_143c2cda6:
              if (iVar30 != iVar20) {
                uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
                uVar25 = (uint)local_2e8[2] & 0xffff;
                plVar23 = plVar24 + 7;
                if ((longlong *)plVar24[8] != (longlong *)0x0) {
                  plVar23 = (longlong *)plVar24[8];
                }
                iVar30 = *(int *)((longlong)plVar23 +
                                 (ulonglong)
                                 ((int)plVar24[9] - 1U &
                                 (int)((ulonglong)local_2e8[2] >> 0x20) +
                                 ((uint)local_2e8[2] << 0x10 | uVar25) +
                                 (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
                if (iVar30 != -1) {
                  do {
                    lVar13 = *plVar24 + (longlong)iVar30 * 0x58;
                    if (*(longlong *******)(*plVar24 + (longlong)iVar30 * 0x58) ==
                        (longlong ******)local_2e8[2]) goto LAB_143c2ce1a;
                    iVar30 = *(int *)(lVar13 + 0x50);
                  } while (iVar30 != -1);
                }
              }
              lVar13 = 0;
LAB_143c2ce1a:
              local_2b8 = (longlong *****)0x0;
              pvStack_2b0 = (void *)0x0;
              local_2c8 = (undefined1  [8])0x0;
              uStack_2c0 = (longlong ******)0x0;
              local_2a8 = 0;
              (**(code **)(*(longlong *)*local_2f8 + 0x10))((longlong *)*local_2f8,local_2c8);
              pvVar4 = pvStack_2b0;
              if (local_311 == '\0') {
                plVar24 = (longlong *)(lVar13 + 0x18);
                iVar30 = 0;
                do {
                  uVar31 = *(uint *)(lVar13 + 0x20);
                  uVar14 = 0;
                  if (0 < (int)uVar31) {
                    pfVar17 = (float *)(*plVar24 + 4);
                    uVar14 = 0;
                    do {
                      if ((float)iVar30 + param_4 < *pfVar17) goto LAB_143c2d23d;
                      uVar14 = uVar14 + 1;
                      pfVar17 = pfVar17 + 0xc;
                    } while (uVar31 != uVar14);
                    uVar14 = (ulonglong)uVar31;
                  }
LAB_143c2d23d:
                  *(uint *)(lVar13 + 0x20) = uVar31 + 1;
                  if (*(uint *)(lVar13 + 0x24) == uVar31) {
                    FUN_148608c26(plVar24,uVar31);
                  }
                  lVar42 = (uVar14 & 0xffffffff) * 0x30;
                  memmove((void *)(*plVar24 + lVar42 + 0x30),(void *)(*plVar24 + lVar42),
                          (ulonglong)(uVar31 - (int)uVar14) * 0x30);
                  pvVar4 = pvStack_2b0;
                  lVar38 = *plVar24;
                  local_288 = (longlong ******)local_2c8;
                  uStack_280 = uStack_2c0;
                  local_278 = (longlong ****)local_2b8;
                  uStack_270 = (void *)0x0;
                  lVar41 = (longlong)(int)local_2a8;
                  uStack_268 = CONCAT44(uStack_268._4_4_,(int)local_2a8);
                  if (lVar41 == 0) {
                    uStack_268 = local_2a8 & 0xffffffff;
                  }
                  else {
                    FUN_1446dd670(&uStack_270,local_2a8 & 0xffffffff,0);
                    memcpy(uStack_270,pvVar4,lVar41 * 2);
                  }
                  FUN_148608b9c(lVar38 + lVar42,(float)iVar30 + param_4,&local_288);
                  bVar43 = iVar30 != iVar32;
                  iVar30 = iVar30 + 1;
                } while (bVar43);
              }
              else {
                *(undefined1 (*) [8])(lVar13 + 0x28) = local_2c8;
                *(undefined4 *)(lVar13 + 0x30) = (undefined4)uStack_2c0;
                *(undefined4 *)(lVar13 + 0x34) = uStack_2c0._4_4_;
                *(undefined4 *)(lVar13 + 0x38) = (undefined4)local_2b8;
                *(undefined4 *)(lVar13 + 0x3c) = local_2b8._4_4_;
                ppvVar2 = (void **)(lVar13 + 0x40);
                if (ppvVar2 != &pvStack_2b0) {
                  iVar32 = (int)local_2a8;
                  lVar38 = (longlong)(int)local_2a8;
                  *(int *)(lVar13 + 0x48) = (int)local_2a8;
                  if ((int)local_2a8 == 0 && *(int *)(lVar13 + 0x4c) == 0) {
                    *(undefined4 *)(lVar13 + 0x4c) = 0;
                  }
                  else {
                    FUN_1446dd670(ppvVar2,local_2a8 & 0xffffffff);
                    if (iVar32 != 0) {
                      memcpy(*ppvVar2,pvVar4,lVar38 * 2);
                    }
                  }
                }
              }
              plVar24 = (longlong *)(local_300 + 0x80);
              if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
                uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
                uVar25 = (uint)local_2e8[2] & 0xffff;
                lVar13 = local_300 + 0xb8;
                if (*(longlong *)(local_300 + 0xc0) != 0) {
                  lVar13 = *(longlong *)(local_300 + 0xc0);
                }
                iVar32 = *(int *)(lVar13 + (ulonglong)
                                           (*(int *)(local_300 + 200) - 1U &
                                           (int)((ulonglong)local_2e8[2] >> 0x20) +
                                           ((uint)local_2e8[2] << 0x10 | uVar25) +
                                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
                if (iVar32 != -1) {
                  lVar13 = *plVar24;
                  do {
                    if (*(longlong *******)(lVar13 + (longlong)iVar32 * 0x20) ==
                        (longlong ******)local_2e8[2]) goto LAB_143c2d7c5;
                    iVar32 = *(int *)((longlong)iVar32 * 0x20 + lVar13 + 0x18);
                  } while (iVar32 != -1);
                }
              }
              pppppplVar15 = (longlong ******)FUN_14001cc68(0x110,0x10);
              pppppplVar15[1] = (longlong *****)&DAT_100000001;
              *pppppplVar15 = (longlong *****)&PTR_FUN_14afe2950;
              pppppplVar15[2] = (longlong *****)&PTR_FUN_14afdfcd0;
              pppppplVar15[3] = (longlong *****)0x0;
              pppppplVar15[4] = (longlong *****)0x0;
              pppppplVar15[5] = (longlong *****)0x0;
              pppppplVar15[6] = (longlong *****)0x0;
              pppppplVar15[7] = (longlong *****)0x0;
              pppppplVar15[8] = (longlong *****)0x0;
              pppppplVar15[9] = (longlong *****)0x0;
              pppppplVar15[10] = (longlong *****)0x0;
              pppppplVar15[0xb] = (longlong *****)0x0;
              pppppplVar15[0xc] = (longlong *****)0x0;
              *(undefined1 *)(pppppplVar15 + 0xd) = 0;
              lVar13 = 0x80;
              do {
                *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x10) = 0;
                *(undefined1 *)((longlong)pppppplVar15 + lVar13 + -8) = 0;
                *(undefined8 *)((longlong)pppppplVar15 + lVar13) = 0;
                ((undefined8 *)((longlong)pppppplVar15 + lVar13))[1] = 0;
                puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + 0x10);
                *puVar18 = 0;
                puVar18[1] = 0;
                puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + 0x20);
                *puVar18 = 0;
                puVar18[1] = 0;
                *(undefined8 *)((longlong)pppppplVar15 + lVar13 + 0x30) = 0;
                lVar13 = lVar13 + 0x48;
              } while (lVar13 != 0x110);
              pppppplVar15[0x20] = (longlong *****)0x0;
              pppppplVar15[0x21] = (longlong *****)0x0;
              if (pppppplVar15 != (longlong ******)0x0) {
                LOCK();
                *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
                UNLOCK();
                LOCK();
                pppppplVar16 = pppppplVar15 + 1;
                *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
                UNLOCK();
                if (*(int *)pppppplVar16 == 0) {
                  (*(code *)**pppppplVar15)(pppppplVar15);
                  LOCK();
                  piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppppplVar15)[2])(pppppplVar15);
                  }
                }
              }
              lVar13 = (longlong)*(int *)((undefined8 *)local_310[0x17] + 1);
              if (lVar13 != 0) {
                puVar18 = *(undefined8 **)local_310[0x17];
                lVar13 = lVar13 << 5;
                do {
                  if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
                    if (((puVar18 != (undefined8 *)0x0) && (puVar18[1] != 0)) && (puVar18[2] != 0))
                    {
                      lVar13 = *(longlong *)(puVar18[2] + (longlong)*(int *)(puVar18[1] + 0x44));
                      if ((DAT_14c950c29 == 1) && (lVar13 != 0)) {
                        FUN_1456cec3c(lVar13);
                      }
                      if (((DAT_14c950c29 & 1) == 0) || (lVar13 == 0)) {
                        if (lVar13 != 0) goto LAB_143c2d513;
                        pppppplVar15[8] = (longlong *****)0x0;
                        pppppplVar15[9] = (longlong *****)0x0;
                        pppppplVar15[10] = (longlong *****)0x0;
                        *(undefined4 *)(pppppplVar15 + 0xc) = 0;
                        if (*(int *)((longlong)pppppplVar15 + 100) < 0) {
                          FUN_1446f8c06(pppppplVar15 + 0xb,0);
                        }
                        ppppplVar5 = pppppplVar15[0xb];
                        if (ppppplVar5 != (longlong *****)0x0) {
                          *(undefined2 *)ppppplVar5 = 0;
                        }
                      }
                      else {
                        FUN_1456cec3c(lVar13);
LAB_143c2d513:
                        FUN_1400bbfc4(&local_288,lVar13);
                        *(undefined4 *)(pppppplVar15 + 9) = (undefined4)local_288;
                        *(undefined4 *)((longlong)pppppplVar15 + 0x4c) = local_288._4_4_;
                        *(undefined4 *)(pppppplVar15 + 10) = (undefined4)uStack_280;
                        *(undefined4 *)((longlong)pppppplVar15 + 0x54) = uStack_280._4_4_;
                        if (pppppplVar15[0xb] != (longlong *****)0x0) {
                          FUN_1400020a8();
                        }
                        pppppplVar15[0xb] = (longlong *****)local_278;
                        local_278 = (longlong ****)0x0;
                        *(undefined4 *)(pppppplVar15 + 0xc) = (undefined4)uStack_270;
                        *(undefined4 *)((longlong)pppppplVar15 + 100) = uStack_270._4_4_;
                        cVar9 = (*(code *)PTR_FUN_14c758760)();
                        iVar32 = DAT_14c9647dc;
                        uVar31 = *(uint *)(lVar13 + 0xc);
                        if (cVar9 != '\0') {
                          if ((int)uVar31 < DAT_14c9647dc) {
                            lVar13 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8);
                          }
                          else {
                            lVar13 = 0;
                          }
                          if ((*(uint *)(lVar13 + 8) & 0x8400000) != 0) {
                            pppppplVar15[8] = (longlong *****)0x0;
                            goto LAB_143c2d667;
                          }
                        }
                        *(uint *)(pppppplVar15 + 8) = uVar31;
                        if ((int)uVar31 < iVar32) {
                          lVar13 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8);
                        }
                        else {
                          lVar13 = 0;
                        }
                        iVar32 = *(int *)(lVar13 + 0x10);
                        if (*(int *)(lVar13 + 0x10) == 0) {
                          LOCK();
                          iVar32 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar30 = DAT_14c964868 + 1;
                          bVar43 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar32;
                          if (bVar43) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar30);
                          }
                          LOCK();
                          iVar32 = *(int *)(lVar13 + 0x10);
                          bVar43 = iVar32 == 0;
                          if (bVar43) {
                            *(int *)(lVar13 + 0x10) = iVar30;
                            iVar32 = 0;
                          }
                          UNLOCK();
                          if (bVar43) {
                            iVar32 = iVar30;
                          }
                        }
                        *(int *)((longlong)pppppplVar15 + 0x44) = iVar32;
                      }
LAB_143c2d667:
                      pppppplVar15[0x12] = pppppplVar15[8];
                      *(undefined4 *)(pppppplVar15 + 0x13) = *(undefined4 *)(pppppplVar15 + 9);
                      *(undefined4 *)((longlong)pppppplVar15 + 0x9c) =
                           *(undefined4 *)((longlong)pppppplVar15 + 0x4c);
                      *(undefined4 *)(pppppplVar15 + 0x14) = *(undefined4 *)(pppppplVar15 + 10);
                      *(undefined4 *)((longlong)pppppplVar15 + 0xa4) =
                           *(undefined4 *)((longlong)pppppplVar15 + 0x54);
                      iVar32 = *(int *)(pppppplVar15 + 0xc);
                      ppppplVar5 = pppppplVar15[0xb];
                      *(int *)(pppppplVar15 + 0x16) = iVar32;
                      if (iVar32 == 0 && *(int *)((longlong)pppppplVar15 + 0xb4) == 0) {
                        *(undefined4 *)((longlong)pppppplVar15 + 0xb4) = 0;
                      }
                      else {
                        FUN_1446dd670(pppppplVar15 + 0x15,iVar32);
                        if (iVar32 != 0) {
                          memcpy(pppppplVar15[0x15],ppppplVar5,(longlong)iVar32 * 2);
                        }
                      }
                      ppppplVar5 = pppppplVar15[0xb];
                      pppppplVar15[0x1b] = pppppplVar15[8];
                      *(undefined4 *)(pppppplVar15 + 0x1c) = *(undefined4 *)(pppppplVar15 + 9);
                      *(undefined4 *)((longlong)pppppplVar15 + 0xe4) =
                           *(undefined4 *)((longlong)pppppplVar15 + 0x4c);
                      *(undefined4 *)(pppppplVar15 + 0x1d) = *(undefined4 *)(pppppplVar15 + 10);
                      *(undefined4 *)((longlong)pppppplVar15 + 0xec) =
                           *(undefined4 *)((longlong)pppppplVar15 + 0x54);
                      iVar32 = *(int *)(pppppplVar15 + 0xc);
                      *(int *)(pppppplVar15 + 0x1f) = iVar32;
                      if (iVar32 == 0 && *(int *)((longlong)pppppplVar15 + 0xfc) == 0) {
                        *(undefined4 *)((longlong)pppppplVar15 + 0xfc) = 0;
                      }
                      else {
                        FUN_1446dd670(pppppplVar15 + 0x1e,iVar32);
                        if (iVar32 != 0) {
                          memcpy(pppppplVar15[0x1e],ppppplVar5,(longlong)iVar32 * 2);
                        }
                      }
                    }
                    break;
                  }
                  puVar18 = puVar18 + 4;
                  lVar13 = lVar13 + -0x20;
                } while (lVar13 != 0);
              }
              if (pppppplVar15 != (longlong ******)0x0) {
                LOCK();
                *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
                UNLOCK();
              }
              local_288 = local_2e8 + 2;
              uStack_280 = (longlong ******)&local_298;
              local_298 = pppppplVar15 + 2;
              uStack_290 = pppppplVar15;
              FUN_141538728(plVar24,local_2e8);
              pppppplVar16 = uStack_290;
              if (uStack_290 != (longlong ******)0x0) {
                LOCK();
                pppppplVar33 = uStack_290 + 1;
                *(int *)pppppplVar33 = *(int *)pppppplVar33 + -1;
                UNLOCK();
                if (*(int *)pppppplVar33 == 0) {
                  (*(code *)**uStack_290)(uStack_290);
                  LOCK();
                  piVar1 = (int *)((longlong)pppppplVar16 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppppplVar16)[2])(pppppplVar16);
                  }
                }
              }
              if (pppppplVar15 != (longlong ******)0x0) {
                LOCK();
                pppppplVar16 = pppppplVar15 + 1;
                *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
                UNLOCK();
                if (*(int *)pppppplVar16 == 0) {
                  (*(code *)**pppppplVar15)(pppppplVar15);
                  LOCK();
                  piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppppplVar15)[2])(pppppplVar15);
                  }
                }
              }
LAB_143c2d7c5:
              if (pvStack_2b0 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          goto LAB_143c2c010;
        }
        plVar24 = (longlong *)local_310[3];
        iVar30 = (int)plVar24[1];
        iVar20 = *(int *)((longlong)plVar24 + 0x34);
        if (iVar30 != iVar20) {
          uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
          uVar25 = (uint)local_2e8[2] & 0xffff;
          plVar23 = plVar24 + 7;
          if ((longlong *)plVar24[8] != (longlong *)0x0) {
            plVar23 = (longlong *)plVar24[8];
          }
          iVar10 = *(int *)((longlong)plVar23 +
                           (ulonglong)
                           ((int)plVar24[9] - 1U &
                           (int)((ulonglong)local_2e8[2] >> 0x20) +
                           ((uint)local_2e8[2] << 0x10 | uVar25) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(longlong *******)(*plVar24 + (longlong)iVar10 * 0x220) ==
                  (longlong ******)local_2e8[2]) goto LAB_143c2c60c;
              iVar10 = *(int *)((longlong)iVar10 * 0x220 + *plVar24 + 0x218);
            } while (iVar10 != -1);
          }
        }
        lVar13 = 0x80;
        do {
          *(undefined8 *)(&stack0xfffffffffffffd30 + lVar13) = 0;
          *(undefined4 *)(local_2c8 + lVar13) = 0;
          *(undefined8 *)(&stack0xfffffffffffffd10 + lVar13) = 0;
          *(undefined8 *)((longlong)local_2e8 + lVar13) = 0;
          *(undefined8 *)(local_2c8 + lVar13 + 4) = 0xffffffff00000080;
          *(undefined4 *)((longlong)&uStack_2c0 + lVar13 + 4) = 0;
          *(undefined8 *)((longlong)&pvStack_2b0 + lVar13) = 0;
          *(undefined4 *)((longlong)&local_2a8 + lVar13) = 0;
          *(undefined8 *)((longlong)&uStack_2a0 + lVar13) = 0;
          *(undefined8 *)((longlong)&local_298 + lVar13) = 0;
          *(undefined4 *)((longlong)&uStack_290 + lVar13) = 0x7f7fffff;
          *(undefined2 *)((longlong)&uStack_290 + lVar13 + 4) = 0x404;
          *(undefined **)((longlong)&local_2f8 + lVar13) = &DAT_14a176f00;
          *(undefined8 *)((longlong)&local_288 + lVar13) = 0;
          *(undefined8 *)((longlong)&uStack_280 + lVar13) = 0;
          lVar13 = lVar13 + 0x80;
        } while (lVar13 != 0x280);
        local_288 = (longlong ******)local_2e8[2];
        uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
        local_2c8 = (undefined1  [8])(local_2e8 + 2);
        uStack_2c0 = (longlong ******)&local_288;
        FUN_1412ef66c(plVar24,&local_298);
        FUN_140b623da(&local_288);
        plVar24 = (longlong *)local_310[3];
        iVar30 = (int)plVar24[1];
        iVar20 = *(int *)((longlong)plVar24 + 0x34);
LAB_143c2c60c:
        if (iVar30 != iVar20) {
          uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
          uVar25 = (uint)local_2e8[2] & 0xffff;
          plVar23 = plVar24 + 7;
          if ((longlong *)plVar24[8] != (longlong *)0x0) {
            plVar23 = (longlong *)plVar24[8];
          }
          iVar30 = *(int *)((longlong)plVar23 +
                           (ulonglong)
                           ((int)plVar24[9] - 1U &
                           (int)((ulonglong)local_2e8[2] >> 0x20) +
                           ((uint)local_2e8[2] << 0x10 | uVar25) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
          if (iVar30 != -1) {
            do {
              puVar39 = (undefined4 *)(*plVar24 + (longlong)iVar30 * 0x220);
              if (*(longlong *******)(*plVar24 + (longlong)iVar30 * 0x220) ==
                  (longlong ******)local_2e8[2]) goto LAB_143c2c689;
              iVar30 = puVar39[0x86];
            } while (iVar30 != -1);
          }
        }
        puVar39 = (undefined4 *)0x0;
LAB_143c2c689:
        local_278 = (longlong ****)0x0;
        uStack_270 = (void *)0x0;
        local_288 = (longlong ******)0x0;
        uStack_280 = (longlong ******)0x0;
        (**(code **)(*(longlong *)*local_2f8 + 0x10))((longlong *)*local_2f8,&local_288);
        local_298 = (longlong ******)CONCAT44((float)(double)uStack_280,(float)(double)local_288);
        uStack_290 = (longlong ******)CONCAT44((float)(double)uStack_270,(float)(double)local_278);
        if (local_311 == '\0') {
          lVar13 = 0;
          do {
            iVar30 = 0;
            do {
              LOCK();
              UNLOCK();
              local_330 = CONCAT44(local_330._4_4_,DAT_14c761474 + 1);
              local_338 = local_338 & 0xffffffffffffff00;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1406507bc(puVar39 + lVar13 * 0x20 + 6,local_2c8,(float)iVar30 + param_4,
                            *(undefined4 *)((longlong)&local_298 + lVar13 * 4));
              iVar30 = iVar30 + 1;
            } while (iVar32 + 1 != iVar30);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 4);
        }
        else {
          lVar13 = 0;
          do {
            puVar39 = puVar39 + 0x20;
            *puVar39 = *(undefined4 *)((longlong)&local_298 + lVar13 * 4);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 4);
        }
        plVar24 = (longlong *)(local_300 + 0x80);
        if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
          uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
          uVar25 = (uint)local_2e8[2] & 0xffff;
          lVar13 = local_300 + 0xb8;
          if (*(longlong *)(local_300 + 0xc0) != 0) {
            lVar13 = *(longlong *)(local_300 + 0xc0);
          }
          iVar32 = *(int *)(lVar13 + (ulonglong)
                                     (*(int *)(local_300 + 200) - 1U &
                                     (int)((ulonglong)local_2e8[2] >> 0x20) +
                                     ((uint)local_2e8[2] << 0x10 | uVar25) +
                                     (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
          if (iVar32 != -1) {
            do {
              if (*(longlong *******)(*plVar24 + (longlong)iVar32 * 0x20) ==
                  (longlong ******)local_2e8[2]) goto LAB_143c2c010;
              iVar32 = *(int *)((longlong)iVar32 * 0x20 + *plVar24 + 0x18);
            } while (iVar32 != -1);
          }
        }
        pppppplVar15 = (longlong ******)FUN_14001cc68(0x490);
        pppppplVar15[1] = (longlong *****)&DAT_100000001;
        *pppppplVar15 = (longlong *****)&PTR_FUN_14afe2930;
        pppppplVar15[2] = (longlong *****)&PTR_FUN_14afdfc10;
        pppppplVar15[4] = (longlong *****)0x0;
        pppppplVar15[5] = (longlong *****)0x0;
        pppppplVar15[6] = (longlong *****)0x0;
        pppppplVar15[7] = (longlong *****)0x0;
        pppppplVar15[8] = (longlong *****)0x0;
        pppppplVar15[9] = (longlong *****)0x0;
        pppppplVar15[10] = (longlong *****)0x0;
        pppppplVar15[0xb] = (longlong *****)0x0;
        pppppplVar16 = pppppplVar15 + 0x1c;
        lVar13 = 0x50;
        do {
          *(undefined8 *)((longlong)(pppppplVar15 + 2) + lVar13) = 0;
          *(undefined1 *)((longlong)pppppplVar15 + lVar13 + 0x18) = 0;
          lVar38 = 0;
          do {
            *(undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x48) = 0;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -0x40) = 0;
            puVar18 = (undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x68);
            *puVar18 = 0;
            puVar18[1] = 0;
            *(undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x3c) = 0xffffffff00000080;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -0x34) = 0;
            *(undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x28) = 0;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -0x20) = 0;
            puVar18 = (undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x18);
            *puVar18 = 0;
            puVar18[1] = 0;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -8) = 0x7f7fffff;
            *(undefined2 *)((longlong)pppppplVar16 + lVar38 + -4) = 0x404;
            *(undefined **)((longlong)pppppplVar16 + lVar38 + -0x70) = &DAT_14a176f00;
            *(undefined8 *)((longlong)pppppplVar16 + lVar38) = 0;
            ((undefined8 *)((longlong)pppppplVar16 + lVar38))[1] = 0;
            lVar38 = lVar38 + 0x80;
          } while (lVar38 != 0x200);
          lVar13 = lVar13 + 0x210;
          pppppplVar16 = pppppplVar16 + 0x42;
        } while (lVar13 != 0x470);
        pppppplVar15[0x90] = (longlong *****)0x0;
        pppppplVar15[0x91] = (longlong *****)0x0;
        if (pppppplVar15 != (longlong ******)0x0) {
          LOCK();
          *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
          UNLOCK();
          LOCK();
          pppppplVar16 = pppppplVar15 + 1;
          *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
          UNLOCK();
          if (*(int *)pppppplVar16 == 0) {
            (*(code *)**pppppplVar15)(pppppplVar15);
            LOCK();
            piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppppplVar15)[2])(pppppplVar15);
            }
          }
        }
        lVar13 = (longlong)*(int *)((undefined8 *)local_310[0x17] + 1);
        if (lVar13 != 0) {
          puVar18 = *(undefined8 **)local_310[0x17];
          lVar13 = lVar13 << 5;
          do {
            if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
              if (((puVar18 != (undefined8 *)0x0) && (puVar18[1] != 0)) &&
                 (lVar13 = puVar18[2], lVar13 != 0)) {
                lVar38 = (longlong)*(int *)(puVar18[1] + 0x44);
                plVar23 = (longlong *)(lVar13 + lVar38);
                ppppplVar5 = (longlong *****)plVar23[1];
                plVar22 = (longlong *)(lVar13 + 0x10 + lVar38);
                ppppplVar6 = (longlong *****)*plVar22;
                ppppplVar7 = (longlong *****)plVar22[1];
                pppppplVar15[8] = (longlong *****)*plVar23;
                pppppplVar15[9] = ppppplVar5;
                pppppplVar15[10] = ppppplVar6;
                pppppplVar15[0xb] = ppppplVar7;
                local_2c8._4_4_ = (float)(double)pppppplVar15[9];
                local_2c8._0_4_ = (float)(double)pppppplVar15[8];
                uStack_2c0 = (longlong ******)
                             CONCAT44((float)(double)pppppplVar15[0xb],
                                      (float)(double)pppppplVar15[10]);
                pppppplVar16 = pppppplVar15 + 0x1b;
                lVar13 = 0;
                do {
                  uVar3 = *(undefined4 *)(local_2c8 + lVar13 * 4);
                  *(undefined4 *)pppppplVar16 = uVar3;
                  *(undefined4 *)(pppppplVar16 + 0x42) = uVar3;
                  lVar13 = lVar13 + 1;
                  pppppplVar16 = pppppplVar16 + 0x10;
                } while (lVar13 != 4);
              }
              break;
            }
            puVar18 = puVar18 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        if (pppppplVar15 != (longlong ******)0x0) {
          LOCK();
          *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
          UNLOCK();
        }
        plVar23 = (longlong *)local_2c8;
        local_2e8[0] = (longlong *****)(pppppplVar15 + 2);
      }
      else {
        plVar23 = (longlong *)local_310[3];
        iVar30 = (int)plVar23[1];
        iVar20 = *(int *)((longlong)plVar23 + 0x34);
        if (iVar30 != iVar20) {
          uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
          uVar25 = (uint)local_2e8[2] & 0xffff;
          plVar22 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar22 = (longlong *)plVar23[8];
          }
          iVar10 = *(int *)((longlong)plVar22 +
                           (ulonglong)
                           ((int)plVar23[9] - 1U &
                           (int)((ulonglong)local_2e8[2] >> 0x20) +
                           ((uint)local_2e8[2] << 0x10 | uVar25) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(longlong *******)(*plVar23 + (longlong)iVar10 * 0x220) ==
                  (longlong ******)local_2e8[2]) goto LAB_143c2be26;
              iVar10 = *(int *)((longlong)iVar10 * 0x220 + *plVar23 + 0x218);
            } while (iVar10 != -1);
          }
        }
        lVar13 = 0x80;
        do {
          *(undefined8 *)(&stack0xfffffffffffffd30 + lVar13) = 0;
          *(undefined4 *)(local_2c8 + lVar13) = 0;
          *(undefined8 *)(&stack0xfffffffffffffd10 + lVar13) = 0;
          *(undefined8 *)((longlong)local_2e8 + lVar13) = 0;
          *(undefined8 *)(local_2c8 + lVar13 + 4) = 0xffffffff00000080;
          *(undefined4 *)((longlong)&uStack_2c0 + lVar13 + 4) = 0;
          *(undefined8 *)((longlong)&pvStack_2b0 + lVar13) = 0;
          *(undefined4 *)((longlong)&local_2a8 + lVar13) = 0;
          *(undefined8 *)((longlong)&uStack_2a0 + lVar13) = 0;
          *(undefined8 *)((longlong)&local_298 + lVar13) = 0;
          *(undefined4 *)((longlong)&uStack_290 + lVar13) = 0x7f7fffff;
          *(undefined2 *)((longlong)&uStack_290 + lVar13 + 4) = 0x404;
          *(undefined **)((longlong)&local_2f8 + lVar13) = &DAT_14a176f00;
          *(undefined8 *)((longlong)&local_288 + lVar13) = 0;
          *(undefined8 *)((longlong)&uStack_280 + lVar13) = 0;
          lVar13 = lVar13 + 0x80;
        } while (lVar13 != 0x280);
        local_288 = (longlong ******)local_2e8[2];
        uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
        local_2c8 = (undefined1  [8])(local_2e8 + 2);
        uStack_2c0 = (longlong ******)&local_288;
        FUN_1412ef66c(plVar23,&local_298);
        FUN_140b623da(&local_288);
        plVar23 = (longlong *)local_310[3];
        iVar30 = (int)plVar23[1];
        iVar20 = *(int *)((longlong)plVar23 + 0x34);
LAB_143c2be26:
        if (iVar30 != iVar20) {
          uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
          uVar25 = (uint)local_2e8[2] & 0xffff;
          plVar22 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar22 = (longlong *)plVar23[8];
          }
          iVar30 = *(int *)((longlong)plVar22 +
                           (ulonglong)
                           ((int)plVar23[9] - 1U &
                           (int)((ulonglong)local_2e8[2] >> 0x20) +
                           ((uint)local_2e8[2] << 0x10 | uVar25) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
          if (iVar30 != -1) {
            do {
              puVar39 = (undefined4 *)(*plVar23 + (longlong)iVar30 * 0x220);
              if (*(longlong *******)(*plVar23 + (longlong)iVar30 * 0x220) ==
                  (longlong ******)local_2e8[2]) goto LAB_143c2bea2;
              iVar30 = puVar39[0x86];
            } while (iVar30 != -1);
          }
        }
        puVar39 = (undefined4 *)0x0;
LAB_143c2bea2:
        local_2c8 = (undefined1  [8])&DAT_3f8000003f800000;
        uStack_2c0 = (longlong ******)&DAT_3f8000003f800000;
        (**(code **)(*(longlong *)*plVar24 + 0x10))((longlong *)*plVar24,local_2c8);
        local_298 = (longlong ******)local_2c8;
        uStack_290 = uStack_2c0;
        if (local_311 == '\0') {
          lVar13 = 0;
          do {
            iVar30 = 0;
            do {
              LOCK();
              UNLOCK();
              local_330 = CONCAT44(local_330._4_4_,DAT_14c761474 + 1);
              local_338 = local_338 & 0xffffffffffffff00;
              DAT_14c761474 = DAT_14c761474 + 1;
              FUN_1406507bc(puVar39 + lVar13 * 0x20 + 6,&local_288,(float)iVar30 + param_4,
                            *(undefined4 *)((longlong)&local_298 + lVar13 * 4));
              iVar30 = iVar30 + 1;
            } while (iVar32 + 1 != iVar30);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 4);
        }
        else {
          lVar13 = 0;
          do {
            puVar39 = puVar39 + 0x20;
            *puVar39 = *(undefined4 *)((longlong)&local_298 + lVar13 * 4);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 4);
        }
        plVar24 = (longlong *)(local_300 + 0x80);
        if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
          uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
          uVar25 = (uint)local_2e8[2] & 0xffff;
          lVar13 = local_300 + 0xb8;
          if (*(longlong *)(local_300 + 0xc0) != 0) {
            lVar13 = *(longlong *)(local_300 + 0xc0);
          }
          iVar32 = *(int *)(lVar13 + (ulonglong)
                                     (*(int *)(local_300 + 200) - 1U &
                                     (int)((ulonglong)local_2e8[2] >> 0x20) +
                                     ((uint)local_2e8[2] << 0x10 | uVar25) +
                                     (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
          if (iVar32 != -1) {
            do {
              if (*(longlong *******)(*plVar24 + (longlong)iVar32 * 0x20) ==
                  (longlong ******)local_2e8[2]) goto LAB_143c2c010;
              iVar32 = *(int *)((longlong)iVar32 * 0x20 + *plVar24 + 0x18);
            } while (iVar32 != -1);
          }
        }
        pppppplVar15 = (longlong ******)FUN_14001cc68(0x468);
        pppppplVar15[1] = (longlong *****)&DAT_100000001;
        *pppppplVar15 = (longlong *****)&PTR_FUN_14afe2910;
        pppppplVar15[2] = (longlong *****)&PTR_FUN_14afdfb50;
        pppppplVar15[3] = (longlong *****)&DAT_3f8000003f800000;
        pppppplVar15[4] = (longlong *****)&DAT_3f8000003f800000;
        pppppplVar15[5] = (longlong *****)&DAT_3f8000003f800000;
        pppppplVar15[6] = (longlong *****)&DAT_3f8000003f800000;
        pppppplVar16 = pppppplVar15 + 0x17;
        lVar13 = 0x28;
        do {
          *(undefined8 *)((longlong)(pppppplVar15 + 2) + lVar13) = 0;
          *(undefined1 *)((longlong)pppppplVar15 + lVar13 + 0x18) = 0;
          lVar38 = 0;
          do {
            *(undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x48) = 0;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -0x40) = 0;
            puVar18 = (undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x68);
            *puVar18 = 0;
            puVar18[1] = 0;
            *(undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x3c) = 0xffffffff00000080;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -0x34) = 0;
            *(undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x28) = 0;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -0x20) = 0;
            puVar18 = (undefined8 *)((longlong)pppppplVar16 + lVar38 + -0x18);
            *puVar18 = 0;
            puVar18[1] = 0;
            *(undefined4 *)((longlong)pppppplVar16 + lVar38 + -8) = 0x7f7fffff;
            *(undefined2 *)((longlong)pppppplVar16 + lVar38 + -4) = 0x404;
            *(undefined **)((longlong)pppppplVar16 + lVar38 + -0x70) = &DAT_14a176f00;
            *(undefined8 *)((longlong)pppppplVar16 + lVar38) = 0;
            ((undefined8 *)((longlong)pppppplVar16 + lVar38))[1] = 0;
            lVar38 = lVar38 + 0x80;
          } while (lVar38 != 0x200);
          lVar13 = lVar13 + 0x210;
          pppppplVar16 = pppppplVar16 + 0x42;
        } while (lVar13 != 0x448);
        pppppplVar15[0x8b] = (longlong *****)0x0;
        pppppplVar15[0x8c] = (longlong *****)0x0;
        if (pppppplVar15 != (longlong ******)0x0) {
          LOCK();
          *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
          UNLOCK();
          LOCK();
          pppppplVar16 = pppppplVar15 + 1;
          *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
          UNLOCK();
          if (*(int *)pppppplVar16 == 0) {
            (*(code *)**pppppplVar15)(pppppplVar15);
            LOCK();
            piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppppplVar15)[2])(pppppplVar15);
            }
          }
        }
        lVar13 = (longlong)*(int *)((undefined8 *)local_310[0x17] + 1);
        if (lVar13 != 0) {
          puVar18 = *(undefined8 **)local_310[0x17];
          lVar13 = lVar13 << 5;
          do {
            if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
              if (((puVar18 != (undefined8 *)0x0) && (puVar18[1] != 0)) && (puVar18[2] != 0)) {
                plVar23 = (longlong *)(puVar18[2] + (longlong)*(int *)(puVar18[1] + 0x44));
                ppppplVar5 = (longlong *****)plVar23[1];
                pppppplVar15[5] = (longlong *****)*plVar23;
                pppppplVar15[6] = ppppplVar5;
                local_288 = (longlong ******)pppppplVar15[5];
                uStack_280 = (longlong ******)pppppplVar15[6];
                pppppplVar16 = pppppplVar15 + 0x16;
                lVar13 = 0;
                do {
                  uVar3 = *(undefined4 *)((longlong)&local_288 + lVar13 * 4);
                  *(undefined4 *)pppppplVar16 = uVar3;
                  *(undefined4 *)(pppppplVar16 + 0x42) = uVar3;
                  lVar13 = lVar13 + 1;
                  pppppplVar16 = pppppplVar16 + 0x10;
                } while (lVar13 != 4);
              }
              break;
            }
            puVar18 = puVar18 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        if (pppppplVar15 != (longlong ******)0x0) {
          LOCK();
          *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
          UNLOCK();
        }
        plVar23 = &local_288;
        local_2e8[0] = (longlong *****)(pppppplVar15 + 2);
      }
      *plVar23 = (longlong)(local_2e8 + 2);
      pppppplVar33 = local_2e8;
      plVar23[1] = (longlong)pppppplVar33;
      pppppplVar16 = (longlong ******)local_2cc;
      local_2e8[1] = (longlong *****)pppppplVar15;
    }
    else {
      plVar23 = (longlong *)local_310[3];
      iVar30 = (int)plVar23[1];
      iVar20 = *(int *)((longlong)plVar23 + 0x34);
      if (iVar30 != iVar20) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        plVar22 = plVar23 + 7;
        if ((longlong *)plVar23[8] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar23[8];
        }
        iVar10 = *(int *)((longlong)plVar22 +
                         (ulonglong)
                         ((int)plVar23[9] - 1U &
                         (int)((ulonglong)local_2e8[2] >> 0x20) +
                         ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff)
                         + (uVar25 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong *******)(*plVar23 + (longlong)iVar10 * 0x220) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2b92b;
            iVar10 = *(int *)((longlong)iVar10 * 0x220 + *plVar23 + 0x218);
          } while (iVar10 != -1);
        }
      }
      lVar13 = 0x80;
      do {
        *(undefined8 *)(&stack0xfffffffffffffd30 + lVar13) = 0;
        *(undefined4 *)(local_2c8 + lVar13) = 0;
        *(undefined8 *)(&stack0xfffffffffffffd10 + lVar13) = 0;
        *(undefined8 *)((longlong)local_2e8 + lVar13) = 0;
        *(undefined8 *)(local_2c8 + lVar13 + 4) = 0xffffffff00000080;
        *(undefined4 *)((longlong)&uStack_2c0 + lVar13 + 4) = 0;
        *(undefined8 *)((longlong)&pvStack_2b0 + lVar13) = 0;
        *(undefined4 *)((longlong)&local_2a8 + lVar13) = 0;
        *(undefined8 *)((longlong)&uStack_2a0 + lVar13) = 0;
        *(undefined8 *)((longlong)&local_298 + lVar13) = 0;
        *(undefined4 *)((longlong)&uStack_290 + lVar13) = 0x7f7fffff;
        *(undefined2 *)((longlong)&uStack_290 + lVar13 + 4) = 0x404;
        *(undefined **)((longlong)&local_2f8 + lVar13) = &DAT_14a176f00;
        *(undefined8 *)((longlong)&local_288 + lVar13) = 0;
        *(undefined8 *)((longlong)&uStack_280 + lVar13) = 0;
        lVar13 = lVar13 + 0x80;
      } while (lVar13 != 0x280);
      local_288 = (longlong ******)local_2e8[2];
      uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
      local_2c8 = (undefined1  [8])(local_2e8 + 2);
      uStack_2c0 = (longlong ******)&local_288;
      FUN_1412ef66c(plVar23,&local_298);
      FUN_140b623da(&local_288);
      plVar23 = (longlong *)local_310[3];
      iVar30 = (int)plVar23[1];
      iVar20 = *(int *)((longlong)plVar23 + 0x34);
LAB_143c2b92b:
      if (iVar30 != iVar20) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        plVar22 = plVar23 + 7;
        if ((longlong *)plVar23[8] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar23[8];
        }
        fVar26 = *(float *)((longlong)plVar22 +
                           (ulonglong)
                           ((int)plVar23[9] - 1U &
                           (int)((ulonglong)local_2e8[2] >> 0x20) +
                           ((uint)local_2e8[2] << 0x10 | uVar25) +
                           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
        if (fVar26 != -NAN) {
          do {
            pfVar17 = (float *)(*plVar23 + (longlong)(int)fVar26 * 0x220);
            if (*(longlong *******)(*plVar23 + (longlong)(int)fVar26 * 0x220) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2b9a7;
            fVar26 = pfVar17[0x86];
          } while (fVar26 != -NAN);
        }
      }
      pfVar17 = (float *)0x0;
LAB_143c2b9a7:
      local_2cc = (undefined1  [4])0xffffffff;
      (**(code **)(*(longlong *)*plVar24 + 0x10))((longlong *)*plVar24,local_2cc);
      local_2c8._5_3_ = 0;
      local_2c8._0_5_ = CONCAT14(local_2cc[1],(uint)local_2cc >> 0x10) & 0xff000000ff;
      uStack_2c0 = (longlong ******)(ulonglong)(CONCAT14(local_2cc[3],local_2cc) & 0xff000000ff);
      if (local_311 == '\0') {
        lVar13 = 0;
        do {
          iVar30 = 0;
          do {
            LOCK();
            UNLOCK();
            local_330 = CONCAT44(local_330._4_4_,DAT_14c761474 + 1);
            local_338 = local_338 & 0xffffffffffffff00;
            DAT_14c761474 = DAT_14c761474 + 1;
            FUN_1406507bc(pfVar17 + lVar13 * 0x20 + 6,&local_288,(float)iVar30 + param_4,
                          (float)*(int *)(local_2c8 + lVar13 * 4));
            iVar30 = iVar30 + 1;
          } while (iVar32 + 1 != iVar30);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 4);
      }
      else {
        lVar13 = 0;
        do {
          pfVar17 = pfVar17 + 0x20;
          *pfVar17 = (float)*(int *)(local_2c8 + lVar13 * 4);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 4);
      }
      plVar23 = local_310;
      plVar24 = (longlong *)(local_300 + 0x80);
      if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
        uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
        uVar25 = (uint)local_2e8[2] & 0xffff;
        lVar13 = local_300 + 0xb8;
        if (*(longlong *)(local_300 + 0xc0) != 0) {
          lVar13 = *(longlong *)(local_300 + 0xc0);
        }
        iVar32 = *(int *)(lVar13 + (ulonglong)
                                   (*(int *)(local_300 + 200) - 1U &
                                   (int)((ulonglong)local_2e8[2] >> 0x20) +
                                   ((uint)local_2e8[2] << 0x10 | uVar25) +
                                   (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
        if (iVar32 != -1) {
          do {
            if (*(longlong *******)(*plVar24 + (longlong)iVar32 * 0x20) ==
                (longlong ******)local_2e8[2]) goto LAB_143c2c010;
            iVar32 = *(int *)((longlong)iVar32 * 0x20 + *plVar24 + 0x18);
          } while (iVar32 != -1);
        }
      }
      pppppplVar15 = (longlong ******)FUN_14001cc68(0x450,0x10);
      FUN_143c308da(pppppplVar15);
      if (pppppplVar15 != (longlong ******)0x0) {
        LOCK();
        *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
        UNLOCK();
        LOCK();
        pppppplVar16 = pppppplVar15 + 1;
        *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
        UNLOCK();
        if (*(int *)pppppplVar16 == 0) {
          (*(code *)**pppppplVar15)(pppppplVar15);
          LOCK();
          piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pppppplVar15)[2])(pppppplVar15);
          }
        }
      }
      local_298 = pppppplVar15 + 2;
      lVar13 = (longlong)*(int *)((undefined8 *)plVar23[0x17] + 1);
      if (lVar13 != 0) {
        puVar18 = *(undefined8 **)plVar23[0x17];
        lVar13 = lVar13 << 5;
        do {
          if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
            if (((puVar18 != (undefined8 *)0x0) && (puVar18[1] != 0)) && (puVar18[2] != 0)) {
              uVar31 = *(uint *)(puVar18[2] + (longlong)*(int *)(puVar18[1] + 0x44));
              *(uint *)((longlong)pppppplVar15 + 0x1c) = uVar31;
              local_288 = (longlong ******)
                          CONCAT44((float)(uVar31 >> 8 & 0xff),(float)(uVar31 >> 0x10 & 0xff));
              uStack_280 = (longlong ******)CONCAT44((float)(uVar31 >> 0x18),(float)(uVar31 & 0xff))
              ;
              pppppplVar16 = pppppplVar15 + 0x13;
              lVar13 = 0;
              do {
                uVar3 = *(undefined4 *)((longlong)&local_288 + lVar13 * 4);
                *(undefined4 *)pppppplVar16 = uVar3;
                *(undefined4 *)(pppppplVar16 + 0x42) = uVar3;
                lVar13 = lVar13 + 1;
                pppppplVar16 = pppppplVar16 + 0x10;
              } while (lVar13 != 4);
            }
            break;
          }
          puVar18 = puVar18 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      if (pppppplVar15 != (longlong ******)0x0) {
        LOCK();
        *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
        UNLOCK();
      }
      local_288 = local_2e8 + 2;
      pppppplVar33 = (longlong ******)&local_298;
      pppppplVar16 = local_2e8;
      uStack_290 = pppppplVar15;
      uStack_280 = pppppplVar33;
    }
  }
  else {
    plVar23 = (longlong *)local_310[1];
    iVar30 = (int)plVar23[1];
    iVar20 = *(int *)((longlong)plVar23 + 0x34);
    if (iVar30 != iVar20) {
      uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
      uVar25 = (uint)local_2e8[2] & 0xffff;
      plVar22 = plVar23 + 7;
      if ((longlong *)plVar23[8] != (longlong *)0x0) {
        plVar22 = (longlong *)plVar23[8];
      }
      iVar10 = *(int *)((longlong)plVar22 +
                       (ulonglong)
                       ((int)plVar23[9] - 1U &
                       (int)((ulonglong)local_2e8[2] >> 0x20) +
                       ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff) +
                       (uVar25 >> 4)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(longlong *******)(*plVar23 + (longlong)iVar10 * 0xa0) ==
              (longlong ******)local_2e8[2]) goto LAB_143c2b2de;
          iVar10 = *(int *)((longlong)iVar10 * 0xa0 + *plVar23 + 0x98);
        } while (iVar10 != -1);
      }
    }
    lStack_250 = 0;
    local_248 = 0;
    uStack_270 = (void *)0x0;
    uStack_268 = 0;
    uStack_244 = 0x80;
    uStack_240 = 0xffffffff;
    local_23c = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_210 = CONCAT26(local_210._6_2_,0x4047f7fffff);
    local_278 = (longlong ****)&DAT_14a176f00;
    pvStack_208 = (void *)0x0;
    uStack_200 = 0;
    local_288 = (longlong ******)local_2e8[2];
    uStack_280 = (longlong ******)CONCAT71(uStack_280._1_7_,local_308._0_1_);
    if (*(int *)((longlong)plVar23 + 0x34) == 0) {
      iVar30 = (int)plVar23[1];
      *(int *)(plVar23 + 1) = iVar30 + 1;
      if (*(int *)((longlong)plVar23 + 0xc) == iVar30) {
        FUN_1413d87fe(plVar23,iVar30);
      }
      iVar20 = (int)plVar23[5];
      if (iVar20 == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar10 = iVar20 + -1;
        }
        iVar10 = iVar10 >> 5;
      }
      plVar24 = plVar23 + 2;
      iVar27 = iVar20 + 1;
      iVar29 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar29 = iVar20;
      }
      if (iVar29 >> 5 == iVar10) {
        *(int *)(plVar23 + 5) = iVar27;
      }
      else {
        if (*(int *)((longlong)plVar23 + 0x2c) <= iVar20) {
          iVar10 = iVar20;
          if (iVar20 + 0x20U < 0xa0) {
            iVar27 = 0x80;
          }
          else {
            uVar31 = iVar20 + 0x20U >> 5;
            if (*(int *)((longlong)plVar23 + 0x2c) + 0x1fU < 0xa0) {
              uVar25 = 4;
              if (4 < uVar31) {
                uVar25 = uVar31;
              }
            }
            else {
              uVar25 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
            }
            uVar14 = (ulonglong)(uVar25 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar35 = (uint)(uVar14 + 0xf);
                if (uVar25 < 0x1ffd) {
                  uVar14 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar14 + 0xf >> 4]];
                }
                else {
                  uVar28 = (ulonglong)(uVar35 & 0xfffffff0);
                  if (uVar28 < 0x7ff1) {
                    bVar19 = (&DAT_14c841e00)[uVar35 >> 4];
                    uVar34 = 0x32;
                    if (0x32 < bVar19) {
                      uVar34 = (ulonglong)bVar19;
                    }
                    uVar36 = 0x32 - (ulonglong)bVar19;
                    do {
                      uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0) goto LAB_143c2cc15;
                      lVar13 = uVar34 + 1 + uVar36;
                      uVar36 = uVar36 - 1;
                    } while (lVar13 != 0x33);
                  }
                  uVar14 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar14 = (ulonglong)DAT_14c841df8;
                  }
                  uVar14 = -uVar14 & (uVar28 + uVar14) - 1;
                }
              }
              else {
                local_308 = (uint *)(ulonglong)uVar31;
                uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
                uVar31 = (uint)local_308;
                iVar10 = (int)plVar23[5];
              }
            }
LAB_143c2cc15:
            iVar11 = (int)(uVar14 >> 2);
            iVar27 = -0x20;
            if ((int)uVar31 <= iVar11) {
              iVar27 = iVar11 << 5;
            }
          }
          *(int *)((longlong)plVar23 + 0x2c) = iVar27;
          FUN_1446efbd8(plVar24,iVar10);
          iVar27 = (int)plVar23[5] + 1;
        }
        iVar10 = iVar27 + 0x1f;
        if (-1 < iVar27) {
          iVar10 = iVar27;
        }
        *(int *)(plVar23 + 5) = iVar27;
        if (iVar27 % 0x20 != 0) {
          plVar22 = (longlong *)plVar23[4];
          if ((longlong *)plVar23[4] == (longlong *)0x0) {
            plVar22 = plVar24;
          }
          bVar19 = -(char)(iVar27 % 0x20);
          *(uint *)((longlong)plVar22 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar10 >> 5) * 4) << (bVar19 & 0x1f))
               >> (bVar19 & 0x1f);
        }
      }
      lVar13 = (longlong)iVar30;
      if ((longlong *)plVar23[4] != (longlong *)0x0) {
        plVar24 = (longlong *)plVar23[4];
      }
      bVar19 = (byte)iVar20 & 0x1f;
      puVar21 = (uint *)((longlong)plVar24 + (longlong)(iVar29 >> 5) * 4);
      *puVar21 = *puVar21 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
    }
    else {
      iVar30 = (int)plVar23[6];
      lVar13 = (longlong)iVar30;
      iVar20 = *(int *)(*plVar23 + 4 + lVar13 * 0xa0);
      *(int *)(plVar23 + 6) = iVar20;
      iVar10 = *(int *)((longlong)plVar23 + 0x34) + -1;
      *(int *)((longlong)plVar23 + 0x34) = iVar10;
      if (iVar10 != 0) {
        *(undefined4 *)(*plVar23 + (longlong)iVar20 * 0xa0) = 0xffffffff;
      }
    }
    pvVar4 = pvStack_208;
    plVar24 = local_2f8;
    local_308 = (uint *)(plVar23 + 2);
    puVar21 = (uint *)plVar23[4];
    if ((uint *)plVar23[4] == (uint *)0x0) {
      puVar21 = local_308;
    }
    iVar20 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar20 = iVar30;
    }
    puVar21[iVar20 >> 5] = puVar21[iVar20 >> 5] | 1 << ((byte)iVar30 & 0x1f);
    lVar38 = *plVar23;
    lVar13 = lVar13 * 0xa0;
    puVar18 = (undefined8 *)(lVar38 + lVar13);
    *(longlong ******)(lVar38 + lVar13) = local_2e8[2];
    *(longlong *******)(lVar38 + 8 + lVar13) = local_288;
    *(undefined4 *)(lVar38 + 0x10 + lVar13) = (undefined4)uStack_280;
    *(undefined8 *)(lVar38 + 0x40 + lVar13) = 0;
    *(undefined4 *)(lVar38 + 0x48 + lVar13) = 0;
    puVar40 = (undefined8 *)(lVar38 + 0x20 + lVar13);
    *puVar40 = 0;
    puVar40[1] = 0;
    *(undefined8 *)(lVar38 + 0x4c + lVar13) = 0xffffffff00000080;
    *(undefined4 *)(lVar38 + 0x54 + lVar13) = 0;
    *(undefined8 *)(lVar38 + 0x60 + lVar13) = 0;
    *(undefined4 *)(lVar38 + 0x68 + lVar13) = 0;
    puVar40 = (undefined8 *)(lVar38 + 0x70 + lVar13);
    *puVar40 = 0;
    puVar40[1] = 0;
    *(undefined ***)(lVar38 + 0x18 + lVar13) = &PTR_FUN_14a176fc0;
    *(undefined4 *)(lVar38 + 0x80 + lVar13) = (undefined4)local_210;
    *(undefined2 *)(lVar38 + 0x84 + lVar13) = local_210._4_2_;
    *(undefined **)(lVar38 + 0x18 + lVar13) = &DAT_14a176f00;
    *(undefined8 *)(lVar38 + 0x88 + lVar13) = 0;
    lVar42 = (longlong)(int)uStack_200;
    *(int *)(lVar38 + 0x90 + lVar13) = (int)uStack_200;
    if (lVar42 == 0) {
      *(undefined4 *)((longlong)puVar18 + 0x94) = 0;
      pppppplVar15 = (longlong ******)local_2e8[2];
    }
    else {
      FUN_140501c24(lVar38 + lVar13 + 0x88,uStack_200 & 0xffffffff,0);
      memcpy((void *)puVar18[0x11],pvVar4,lVar42 * 0x1c);
      pppppplVar15 = (longlong ******)*puVar18;
    }
    *(undefined4 *)(puVar18 + 0x13) = 0xffffffff;
    uVar31 = (uint)((ulonglong)pppppplVar15 >> 0x10);
    uVar25 = (uint)pppppplVar15 & 0xffff;
    uVar25 = ((uint)pppppplVar15 << 0x10 | uVar25) + (int)((ulonglong)pppppplVar15 >> 0x20) +
             (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4);
    uVar35 = (int)plVar23[1] - *(int *)((longlong)plVar23 + 0x34);
    uVar31 = 1;
    if (uVar35 != 1) {
      if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
        plVar22 = plVar23 + 7;
        if ((longlong *)plVar23[8] != (longlong *)0x0) {
          plVar22 = (longlong *)plVar23[8];
        }
        iVar20 = *(int *)((longlong)plVar22 + (ulonglong)((int)plVar23[9] - 1U & uVar25) * 4);
        if (iVar20 != -1) {
          do {
            pvVar4 = (void *)(*plVar23 + (longlong)iVar20 * 0xa0);
            if (*(longlong *******)(*plVar23 + (longlong)iVar20 * 0xa0) == pppppplVar15) {
              *(undefined **)((longlong)pvVar4 + 0x18) = &DAT_14a176f00;
              if (*(longlong *)((longlong)pvVar4 + 0x88) != 0) {
                FUN_1400020a8();
              }
              *(undefined ***)((longlong)pvVar4 + 0x18) = &PTR_FUN_14a177080;
              if (*(longlong *)((longlong)pvVar4 + 0x70) != 0) {
                FUN_1400020a8();
              }
              *(undefined4 *)((longlong)pvVar4 + 0x68) = 0;
              if (*(longlong *)((longlong)pvVar4 + 0x60) != 0) {
                FUN_1400020a8();
              }
              *(undefined4 *)((longlong)pvVar4 + 0x28) = 0;
              if (*(int *)((longlong)pvVar4 + 0x2c) != 0) {
                FUN_14472eb64((longlong *)((longlong)pvVar4 + 0x20),0);
              }
              *(undefined8 *)((longlong)pvVar4 + 0x50) = 0xffffffff;
              *(undefined4 *)((longlong)pvVar4 + 0x48) = 0;
              if (0x80 < *(uint *)((longlong)pvVar4 + 0x4c)) {
                *(undefined4 *)((longlong)pvVar4 + 0x4c) = 0x80;
                FUN_1446efbd8((longlong)pvVar4 + 0x30,0);
              }
              if (*(longlong *)((longlong)pvVar4 + 0x40) != 0) {
                FUN_1400020a8();
              }
              if (*(longlong *)((longlong)pvVar4 + 0x20) != 0) {
                FUN_1400020a8();
              }
              memmove(pvVar4,puVar18,0x98);
              FUN_148608388(plVar23,iVar30);
              plVar24 = local_2f8;
              goto LAB_143c2b20b;
            }
            iVar20 = *(int *)((longlong)pvVar4 + 0x98);
          } while (iVar20 != -1);
        }
      }
      if (3 < uVar35) {
        uVar14 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
        lVar13 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar31 = 1 << ((byte)lVar13 & 0x1f);
      }
    }
    if (((int)uVar35 < 1) || ((int)uVar31 <= (int)plVar23[9])) {
      uVar25 = (int)plVar23[9] - 1U & uVar25;
      *(uint *)((longlong)puVar18 + 0x9c) = uVar25;
      plVar22 = (longlong *)plVar23[8];
      if ((longlong *)plVar23[8] == (longlong *)0x0) {
        plVar22 = plVar23 + 7;
      }
      *(undefined4 *)(puVar18 + 0x13) =
           *(undefined4 *)
            ((longlong)plVar22 + ((longlong)(int)plVar23[9] - 1U & (longlong)(int)uVar25) * 4);
      plVar22 = (longlong *)plVar23[8];
      if ((longlong *)plVar23[8] == (longlong *)0x0) {
        plVar22 = plVar23 + 7;
      }
      *(int *)((longlong)plVar22 + ((longlong)(int)plVar23[9] - 1U & (longlong)(int)uVar25) * 4) =
           iVar30;
    }
    else {
      *(uint *)(plVar23 + 9) = uVar31;
      plVar22 = plVar23 + 8;
      if (plVar23[8] != 0) {
        FUN_1446efa72(plVar22,0,0,4);
        uVar31 = *(uint *)(plVar23 + 9);
      }
      plVar37 = plVar23 + 7;
      if (uVar31 == 1) {
        if (*plVar22 != 0) {
          FUN_1446efa72(plVar22,0,0,4);
        }
LAB_143c2c06d:
        uVar25 = 0;
        do {
          plVar22 = (longlong *)plVar23[8];
          if ((longlong *)plVar23[8] == (longlong *)0x0) {
            plVar22 = plVar37;
          }
          *(undefined4 *)
           ((longlong)plVar22 + (ulonglong)((int)plVar23[9] + 0x7fffffffU & uVar25) * 4) =
               0xffffffff;
          uVar25 = uVar25 + 1;
        } while (uVar31 != uVar25);
      }
      else {
        if (uVar31 == 0) goto LAB_143c2b20b;
        FUN_1446efa72(plVar22,0,uVar31,4);
        if (0 < (int)uVar31) goto LAB_143c2c06d;
      }
      iVar30 = (int)plVar23[5];
      if (iVar30 == 0) {
        uVar14 = 0;
        uVar28 = 1;
        iVar10 = 0;
        iVar20 = 0;
      }
      else {
        puVar21 = (uint *)plVar23[4];
        if ((uint *)plVar23[4] == (uint *)0x0) {
          puVar21 = local_308;
        }
        uVar31 = *puVar21;
        if (uVar31 == 0) {
          iVar20 = iVar30 + 0x1e;
          if (-1 < iVar30 + -1) {
            iVar20 = iVar30 + -1;
          }
          uVar14 = 0;
          uVar28 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar28 = uVar14;
          }
          iVar20 = 0;
          do {
            if (uVar28 == uVar14) goto LAB_143c2b20b;
            iVar20 = iVar20 + 0x20;
            uVar31 = puVar21[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar31 == 0);
        }
        else {
          uVar14 = 0;
          iVar20 = 0;
        }
        uVar28 = (ulonglong)(-uVar31 & uVar31);
        uVar34 = uVar28 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar30 <= iVar10) {
          iVar10 = iVar30;
        }
      }
      if (iVar10 < iVar30) {
        uVar31 = 0xffffffff;
        do {
          local_2ec = iVar20;
          lVar13 = *plVar23;
          lVar38 = (longlong)iVar10 * 0xa0;
          uVar12 = *(undefined8 *)(lVar13 + lVar38);
          uVar25 = (uint)((ulonglong)uVar12 >> 0x10);
          uVar35 = (uint)uVar12 & 0xffff;
          uVar34 = (longlong)
                   (int)(((uint)uVar12 << 0x10 | uVar35) + (int)((ulonglong)uVar12 >> 0x20) +
                         (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar35 >> 4)) &
                   (longlong)(int)plVar23[9] - 1U;
          iVar30 = (int)uVar34;
          *(int *)(lVar13 + 0x9c + lVar38) = iVar30;
          plVar24 = (longlong *)plVar23[8];
          if ((longlong *)plVar23[8] == (longlong *)0x0) {
            plVar24 = plVar37;
          }
          *(undefined4 *)(lVar13 + 0x98 + lVar38) =
               *(undefined4 *)((longlong)plVar24 + ((longlong)(int)plVar23[9] - 1U & uVar34) * 4);
          plVar24 = (longlong *)plVar23[8];
          if ((longlong *)plVar23[8] == (longlong *)0x0) {
            plVar24 = plVar37;
          }
          *(int *)((longlong)plVar24 + ((longlong)iVar30 & (longlong)(int)plVar23[9] - 1U) * 4) =
               iVar10;
          uVar31 = ~(uint)uVar28 & uVar31;
          puVar21 = (uint *)plVar23[4];
          if ((uint *)plVar23[4] == (uint *)0x0) {
            puVar21 = local_308;
          }
          iVar30 = (int)plVar23[5];
          iVar10 = (int)uVar14;
          lVar13 = (longlong)iVar10;
          uVar25 = puVar21[lVar13] & uVar31;
          iVar20 = local_2ec;
          plVar24 = local_2f8;
          if (uVar25 == 0) {
            iVar27 = iVar30 + 0x1e;
            if (-1 < iVar30 + -1) {
              iVar27 = iVar30 + -1;
            }
            iVar27 = iVar27 >> 5;
            iVar29 = iVar27;
            if (iVar27 < iVar10) {
              iVar29 = iVar10;
            }
            if (iVar27 <= iVar10) break;
            lVar38 = 0;
            while( true ) {
              iVar20 = iVar20 + 0x20;
              uVar25 = puVar21[lVar13 + lVar38 + 1];
              if (uVar25 != 0) break;
              lVar38 = lVar38 + 1;
              if (iVar29 - lVar13 == lVar38) goto LAB_143c2b20b;
            }
            uVar14 = (ulonglong)(iVar10 + (int)lVar38 + 1);
            uVar31 = 0xffffffff;
          }
          uVar28 = (ulonglong)(-uVar25 & uVar25);
          uVar34 = uVar28 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar10 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar10 < iVar30);
      }
    }
LAB_143c2b20b:
    local_278 = (longlong ****)&DAT_14a176f00;
    if (pvStack_208 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar23 = local_310;
    local_278 = (longlong ****)&PTR_FUN_14a177080;
    if (local_220 != 0) {
      FUN_1400020a8();
    }
    local_228 = 0;
    if (local_230 != 0) {
      FUN_1400020a8();
    }
    uVar14 = uStack_268 >> 0x20;
    uStack_268 = uStack_268 & 0xffffffff00000000;
    if ((int)uVar14 != 0) {
      FUN_14472eb64(&uStack_270,0);
    }
    uStack_240 = 0xffffffff;
    local_23c = 0;
    local_248 = 0;
    if (0x80 < uStack_244) {
      uStack_244 = 0x80;
      FUN_1446efbd8(&uStack_260,0);
    }
    if (lStack_250 != 0) {
      FUN_1400020a8();
    }
    if (uStack_270 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar23 = (longlong *)plVar23[1];
    iVar30 = (int)plVar23[1];
    iVar20 = *(int *)((longlong)plVar23 + 0x34);
LAB_143c2b2de:
    if (iVar30 != iVar20) {
      uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
      uVar25 = (uint)local_2e8[2] & 0xffff;
      plVar22 = plVar23 + 7;
      if ((longlong *)plVar23[8] != (longlong *)0x0) {
        plVar22 = (longlong *)plVar23[8];
      }
      iVar30 = *(int *)((longlong)plVar22 +
                       (ulonglong)
                       ((int)plVar23[9] - 1U &
                       (int)((ulonglong)local_2e8[2] >> 0x20) +
                       ((uint)local_2e8[2] << 0x10 | uVar25) + (uVar31 << 0x13 | uVar31 & 0xffff) +
                       (uVar25 >> 4)) * 4);
      if (iVar30 != -1) {
        do {
          lVar13 = *plVar23 + (longlong)iVar30 * 0xa0;
          if (*(longlong *******)(*plVar23 + (longlong)iVar30 * 0xa0) ==
              (longlong ******)local_2e8[2]) goto LAB_143c2b355;
          iVar30 = *(int *)(lVar13 + 0x98);
        } while (iVar30 != -1);
      }
    }
    lVar13 = 0;
LAB_143c2b355:
    local_2e8[0] = (longlong *****)((ulonglong)local_2e8[0] & 0xffffffff00000000);
    (**(code **)(*(longlong *)*plVar24 + 0x10))();
    if (local_311 == '\0') {
      iVar30 = 0;
      do {
        LOCK();
        UNLOCK();
        local_330 = CONCAT44(local_330._4_4_,DAT_14c761474 + 1);
        local_338 = local_338 & 0xffffffffffffff00;
        DAT_14c761474 = DAT_14c761474 + 1;
        FUN_1406507bc(lVar13 + 0x18,&local_288,(float)iVar30 + param_4,local_2e8[0]._0_4_);
        iVar30 = iVar30 + 1;
      } while (iVar32 + 1 != iVar30);
    }
    else {
      *(undefined4 *)(lVar13 + 0x80) = local_2e8[0]._0_4_;
    }
    plVar23 = local_310;
    plVar24 = (longlong *)(local_300 + 0x80);
    if (*(int *)(local_300 + 0x88) != *(int *)(local_300 + 0xb4)) {
      uVar31 = (uint)((ulonglong)local_2e8[2] >> 0x10);
      uVar25 = (uint)local_2e8[2] & 0xffff;
      lVar13 = local_300 + 0xb8;
      if (*(longlong *)(local_300 + 0xc0) != 0) {
        lVar13 = *(longlong *)(local_300 + 0xc0);
      }
      iVar32 = *(int *)(lVar13 + (ulonglong)
                                 (*(int *)(local_300 + 200) - 1U &
                                 (int)((ulonglong)local_2e8[2] >> 0x20) +
                                 ((uint)local_2e8[2] << 0x10 | uVar25) +
                                 (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar25 >> 4)) * 4);
      if (iVar32 != -1) {
        do {
          if (*(longlong *******)(*plVar24 + (longlong)iVar32 * 0x20) ==
              (longlong ******)local_2e8[2]) goto LAB_143c2c010;
          iVar32 = *(int *)((longlong)iVar32 * 0x20 + *plVar24 + 0x18);
        } while (iVar32 != -1);
      }
    }
    pppppplVar15 = (longlong ******)FUN_14001cc68(0x150,0x10);
    pppppplVar15[1] = (longlong *****)&DAT_100000001;
    *pppppplVar15 = (longlong *****)&PTR_FUN_14afe2890;
    auVar8 = (undefined1  [8])(pppppplVar15 + 2);
    pppppplVar15[2] = (longlong *****)&PTR_FUN_14afdf850;
    pppppplVar15[3] = (longlong *****)0x0;
    lVar13 = 0xa0;
    do {
      *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x80) = 0;
      *(undefined1 *)((longlong)pppppplVar15 + lVar13 + -0x78) = 0;
      *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x48) = 0;
      *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -0x40) = 0;
      puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x68);
      *puVar18 = 0;
      puVar18[1] = 0;
      *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -0x34) = 0;
      *(undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x28) = 0;
      *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -0x20) = 0;
      puVar18 = (undefined8 *)((longlong)pppppplVar15 + lVar13 + -0x18);
      *puVar18 = 0;
      puVar18[1] = 0;
      *(undefined4 *)((longlong)pppppplVar15 + lVar13 + -8) = 0x7f7fffff;
      *(undefined2 *)((longlong)pppppplVar15 + lVar13 + -4) = 0x404;
      *(undefined **)((longlong)pppppplVar15 + lVar13 + -0x70) = &DAT_14a176f00;
      *(undefined8 *)((longlong)pppppplVar15 + lVar13) = 0;
      ((undefined8 *)((longlong)pppppplVar15 + lVar13))[1] = 0;
      lVar13 = lVar13 + 0x90;
    } while (lVar13 != 0x1c0);
    pppppplVar15[0x28] = (longlong *****)0x0;
    pppppplVar15[0x29] = (longlong *****)0x0;
    if (pppppplVar15 != (longlong ******)0x0) {
      LOCK();
      *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
      UNLOCK();
      LOCK();
      pppppplVar16 = pppppplVar15 + 1;
      *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
      UNLOCK();
      if (*(int *)pppppplVar16 == 0) {
        (*(code *)**pppppplVar15)(pppppplVar15);
        LOCK();
        piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppppplVar15)[2])(pppppplVar15);
        }
      }
    }
    lVar13 = (longlong)*(int *)((undefined8 *)plVar23[0x17] + 1);
    if (lVar13 != 0) {
      puVar18 = *(undefined8 **)plVar23[0x17];
      lVar13 = lVar13 << 5;
      do {
        if ((longlong ******)*puVar18 == (longlong ******)local_2e8[2]) {
          if (((puVar18 != (undefined8 *)0x0) && (puVar18[1] != 0)) && (puVar18[2] != 0)) {
            uVar3 = *(undefined4 *)(puVar18[2] + (longlong)*(int *)(puVar18[1] + 0x44));
            *(undefined4 *)((longlong)pppppplVar15 + 0x1c) = uVar3;
            *(undefined4 *)(pppppplVar15 + 0x13) = uVar3;
            *(undefined4 *)(pppppplVar15 + 0x25) = uVar3;
          }
          break;
        }
        puVar18 = puVar18 + 4;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
    }
LAB_143c2bf88:
    local_2c8 = auVar8;
    if (pppppplVar15 != (longlong ******)0x0) {
      LOCK();
      *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
      UNLOCK();
    }
    local_288 = local_2e8 + 2;
    pppppplVar33 = (longlong ******)local_2c8;
    pppppplVar16 = (longlong ******)&local_298;
    uStack_2c0 = pppppplVar15;
    uStack_280 = pppppplVar33;
  }
  FUN_141538728(plVar24,pppppplVar16);
  ppppplVar5 = pppppplVar33[1];
  if (ppppplVar5 != (longlong *****)0x0) {
    LOCK();
    ppppplVar6 = ppppplVar5 + 1;
    *(int *)ppppplVar6 = *(int *)ppppplVar6 + -1;
    UNLOCK();
    if (*(int *)ppppplVar6 == 0) {
      (*(code *)**ppppplVar5)(ppppplVar5);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppplVar5)[2])(ppppplVar5);
      }
    }
  }
  if (pppppplVar15 != (longlong ******)0x0) {
    LOCK();
    pppppplVar16 = pppppplVar15 + 1;
    *(int *)pppppplVar16 = *(int *)pppppplVar16 + -1;
    UNLOCK();
    if (*(int *)pppppplVar16 == 0) {
      (*(code *)**pppppplVar15)(pppppplVar15);
      LOCK();
      piVar1 = (int *)((longlong)pppppplVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppppplVar15)[2])(pppppplVar15);
      }
    }
  }
LAB_143c2c010:
  if ((local_70 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (puVar40 != (undefined8 *)0x0) {
LAB_143c2cb65:
    puVar40 = (undefined8 *)puVar40[6];
    bVar43 = puVar40 != (undefined8 *)0x0;
    if (puVar40 == &DAT_14c951cd0) break;
  }
LAB_143c2cb7a:
  if (bVar43) {
LAB_143c2bf53:
    bVar43 = (*(byte *)((ulonglong)*(byte *)(lVar13 + 0x71) +
                       (longlong)*(int *)(lVar13 + 0x44) + puVar18[2]) & *(byte *)(lVar13 + 0x73))
             != 0;
    *(bool *)((longlong)pppppplVar15 + 0x19) = bVar43;
    uVar31 = (uint)bVar43;
    *(uint *)(pppppplVar15 + 0x15) = uVar31;
    *(uint *)(pppppplVar15 + 0x27) = uVar31;
  }
  goto LAB_143c2bf88;
}



// FUNCTION 143c2db24 FUN_143c2db24 body=362 status=ok
// SIG undefined FUN_143c2db24(void)

longlong * FUN_143c2db24(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)*param_1 == -1) {
LAB_143c2dbad:
    if ((int)param_1[1] != -1) {
      lVar5 = param_1[1];
      if (lVar5 == 0) goto LAB_143c2dc75;
      if ((longlong)*(int *)(param_3 + 0x98) != 0) {
        puVar3 = *(undefined8 **)(param_3 + 0x90);
        lVar4 = (longlong)*(int *)(param_3 + 0x98) * 0x90;
        do {
          puVar2 = &DAT_149dfb77a;
          if (*(int *)(puVar3 + 1) != 0) {
            puVar2 = (undefined2 *)*puVar3;
          }
          cVar1 = FUN_1402ca022(lVar5,puVar2);
          if (cVar1 != '\0') {
            if (puVar3 != (undefined8 *)0x0) {
              param_4 = param_1[1];
              goto LAB_143c2dc77;
            }
            break;
          }
          puVar3 = puVar3 + 0x12;
          lVar4 = lVar4 + -0x90;
        } while (lVar4 != 0);
      }
    }
    if ((param_4 != 0) && ((longlong)*(int *)(param_3 + 0x98) != 0)) {
      puVar3 = *(undefined8 **)(param_3 + 0x90);
      lVar5 = (longlong)*(int *)(param_3 + 0x98) * 0x90;
      do {
        puVar2 = &DAT_149dfb77a;
        if (*(int *)(puVar3 + 1) != 0) {
          puVar2 = (undefined2 *)*puVar3;
        }
        cVar1 = FUN_1402ca022(param_4,puVar2);
        if (cVar1 != '\0') goto LAB_143c2dc6c;
        puVar3 = puVar3 + 0x12;
        lVar5 = lVar5 + -0x90;
      } while (lVar5 != 0);
      puVar3 = (undefined8 *)0x0;
LAB_143c2dc6c:
      if (puVar3 == (undefined8 *)0x0) {
        param_4 = 0;
      }
      goto LAB_143c2dc77;
    }
  }
  else {
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if ((longlong)*(int *)(param_3 + 0x98) != 0) {
        puVar3 = *(undefined8 **)(param_3 + 0x90);
        lVar4 = (longlong)*(int *)(param_3 + 0x98) * 0x90;
        do {
          puVar2 = &DAT_149dfb77a;
          if (*(int *)(puVar3 + 1) != 0) {
            puVar2 = (undefined2 *)*puVar3;
          }
          cVar1 = FUN_1402ca022(lVar5,puVar2);
          if (cVar1 != '\0') {
            if (puVar3 != (undefined8 *)0x0) {
              param_4 = *param_1;
              goto LAB_143c2dc77;
            }
            break;
          }
          puVar3 = puVar3 + 0x12;
          lVar4 = lVar4 + -0x90;
        } while (lVar4 != 0);
      }
      goto LAB_143c2dbad;
    }
  }
LAB_143c2dc75:
  param_4 = 0;
LAB_143c2dc77:
  *param_2 = param_4;
  return param_2;
}



// FUNCTION 143c2dc8e FUN_143c2dc8e body=4786 status=ok
// SIG undefined FUN_143c2dc8e(void)

void FUN_143c2dc8e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  longlong *local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 local_390;
  int local_388;
  float local_384;
  int *local_380;
  undefined8 *local_378;
  undefined8 local_368;
  longlong lStack_360;
  uint local_358 [4];
  uint *local_348;
  int local_340;
  undefined8 local_33c;
  undefined4 local_334;
  longlong local_328;
  undefined4 local_320;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (param_2 == (longlong *)0x0) goto LAB_143c2eebc;
  uVar5 = *(uint *)((longlong)param_2 + 0xc);
  local_368 = (ulonglong)uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  iVar25 = *(int *)(lVar15 + 0x10);
  local_3b8 = param_1;
  local_3b0 = param_2;
  if (*(int *)(lVar15 + 0x10) == 0) {
    LOCK();
    iVar25 = DAT_14c964868 + 1;
    UNLOCK();
    iVar13 = DAT_14c964868 + 1;
    bVar29 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar25;
    if (bVar29) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar13);
    }
    LOCK();
    iVar25 = *(int *)(lVar15 + 0x10);
    bVar29 = iVar25 == 0;
    if (bVar29) {
      *(int *)(lVar15 + 0x10) = iVar13;
      iVar25 = 0;
    }
    UNLOCK();
    uVar5 = (uint)local_368;
    if (bVar29) {
      iVar25 = iVar13;
    }
  }
  local_368._0_4_ = uVar5;
  plVar16 = (longlong *)(local_3b8 + 0x218);
  local_368 = CONCAT44(iVar25,(uint)local_368);
  iVar25 = *(int *)(local_3b8 + 0x220);
  if ((longlong)iVar25 != 0) {
    lVar15 = *(longlong *)(local_3b8 + 0x218);
    uVar18 = 0;
    do {
      cVar4 = FUN_143c31954(lVar15 + uVar18);
      if (cVar4 != '\0') {
        if ((int)(~uVar18 >> 3) != 0) goto LAB_143c2dd96;
        break;
      }
      uVar18 = uVar18 + 8;
    } while ((longlong)iVar25 * 8 != uVar18);
  }
  iVar25 = *(int *)(local_3b8 + 0x220);
  uVar5 = iVar25 + 1;
  *(uint *)(local_3b8 + 0x220) = uVar5;
  if (*(uint *)(local_3b8 + 0x224) < uVar5) {
    FUN_143c319f4(plVar16);
  }
  *(ulonglong *)(*plVar16 + (longlong)iVar25 * 8) = local_368;
LAB_143c2dd96:
  iVar25 = *(int *)(local_3b8 + 0x220);
  if (1 < (longlong)iVar25) {
    lVar15 = *plVar16;
    memset(local_358,0,0x2f0);
    lStack_360 = lVar15 + (longlong)iVar25 * 8 + -8;
    local_368 = lVar15;
    fVar30 = logf((float)iVar25);
    local_358[0] = (uint)(longlong)(fVar30 + fVar30);
    puVar28 = &local_368;
    do {
      puVar9 = (uint *)*puVar28;
      puVar7 = (uint *)puVar28[1];
      iVar25 = *(int *)(puVar28 + 2);
      iVar13 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar9) >> 3);
      uVar18 = (ulonglong)(iVar13 + 1);
      if (iVar25 != 0) {
LAB_143c2de19:
        if (8 < (int)(uint)uVar18) {
          uVar18 = (ulonglong)((uint)uVar18 >> 1);
          uVar2 = *(undefined8 *)(puVar9 + uVar18 * 2);
          *(undefined8 *)(puVar9 + uVar18 * 2) = *(undefined8 *)puVar9;
          *(undefined8 *)puVar9 = uVar2;
          puVar27 = puVar7 + 2;
          puVar8 = puVar9;
          do {
            puVar8 = puVar8 + 2;
            if (puVar8 <= puVar7) {
              do {
                if ((((((puVar9[1] != 0) && (uVar5 = *puVar9, -1 < (int)uVar5)) &&
                      ((int)uVar5 < DAT_14c9647dc)) &&
                     (((plVar16 = (longlong *)
                                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                       plVar16 != (longlong *)0x0 && (*(uint *)(plVar16 + 2) == puVar9[1])) &&
                      (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 &&
                       ((puVar8[1] != 0 && (uVar5 = *puVar8, -1 < (int)uVar5)))))))) &&
                    ((int)uVar5 < DAT_14c9647dc)) &&
                   (((plVar19 = (longlong *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                     plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == puVar8[1])) &&
                    ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                    lVar15 = *plVar16;
                  }
                  else {
                    lVar15 = 0;
                  }
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                    lVar10 = *plVar19;
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                    lVar11 = *plVar16;
                  }
                  else {
                    lVar11 = 0;
                  }
                  if (*(int *)(lVar15 + 0x3d4) == *(int *)(lVar10 + 0x3d4)) {
                    if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                      lVar15 = *plVar19;
                    }
                    else {
                      lVar15 = 0;
                    }
                    iVar13 = (int)*(undefined8 *)(lVar11 + 0x18) -
                             (int)*(undefined8 *)(lVar15 + 0x18);
                    if (iVar13 == 0) {
                      iVar13 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) -
                               (int)((ulonglong)*(undefined8 *)(lVar15 + 0x18) >> 0x20);
                    }
                    if (iVar13 < 0) break;
                  }
                  else {
                    if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                      lVar15 = *plVar19;
                    }
                    else {
                      lVar15 = 0;
                    }
                    if (*(int *)(lVar15 + 0x3d4) < *(int *)(lVar11 + 0x3d4)) break;
                  }
                }
                puVar8 = puVar8 + 2;
              } while (puVar8 <= puVar7);
            }
joined_r0x000143c2de4f:
            do {
              do {
                puVar21 = puVar27;
                puVar27 = puVar21 + -2;
                if (puVar27 <= puVar9) goto LAB_143c2e159;
              } while ((((puVar27[1] == 0) || (uVar5 = *puVar27, (int)uVar5 < 0)) ||
                       ((DAT_14c9647dc <= (int)uVar5 ||
                        ((plVar16 = (longlong *)
                                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                         plVar16 == (longlong *)0x0 || (*(uint *)(plVar16 + 2) != puVar27[1]))))))
                      || (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
                          (((((puVar9[1] == 0 || (uVar5 = *puVar9, (int)uVar5 < 0)) ||
                             (DAT_14c9647dc <= (int)uVar5)) ||
                            ((plVar19 = (longlong *)
                                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                             plVar19 == (longlong *)0x0 || (*(uint *)(plVar19 + 2) != puVar9[1]))))
                           || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0))))));
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar15 = *plVar16;
              }
              else {
                lVar15 = 0;
              }
              if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                lVar10 = *plVar19;
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar11 = *plVar16;
              }
              else {
                lVar11 = 0;
              }
              if (*(int *)(lVar15 + 0x3d4) == *(int *)(lVar10 + 0x3d4)) {
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar15 = *plVar19;
                }
                else {
                  lVar15 = 0;
                }
                iVar13 = (int)*(undefined8 *)(lVar11 + 0x18) - (int)*(undefined8 *)(lVar15 + 0x18);
                if (iVar13 == 0) {
                  iVar13 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) -
                           (int)((ulonglong)*(undefined8 *)(lVar15 + 0x18) >> 0x20);
                }
                if (iVar13 < 0) {
                  puVar21 = puVar27 + 2;
                  break;
                }
                goto joined_r0x000143c2de4f;
              }
              if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                lVar15 = *plVar19;
              }
              else {
                lVar15 = 0;
              }
            } while (*(int *)(lVar11 + 0x3d4) <= *(int *)(lVar15 + 0x3d4));
LAB_143c2e159:
            if (puVar27 < puVar8) goto LAB_143c2e17b;
            uVar2 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = *(undefined8 *)puVar27;
            *(undefined8 *)puVar27 = uVar2;
          } while( true );
        }
        for (; puVar8 = puVar9, puVar27 = puVar9, puVar9 < puVar7; puVar7 = puVar7 + -2) {
joined_r0x000143c2e966:
          puVar27 = puVar27 + 2;
          if (puVar27 <= puVar7) {
            if (((((puVar8[1] != 0) && (uVar5 = *puVar8, -1 < (int)uVar5)) &&
                 (((int)uVar5 < DAT_14c9647dc &&
                  (((plVar16 = (longlong *)
                               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                    plVar16 != (longlong *)0x0 && (*(uint *)(plVar16 + 2) == puVar8[1])) &&
                   ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))))) &&
                ((puVar27[1] != 0 && (uVar5 = *puVar27, -1 < (int)uVar5)))) &&
               (((int)uVar5 < DAT_14c9647dc &&
                (((plVar19 = (longlong *)
                             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                  plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == puVar27[1])) &&
                 ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))) {
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar15 = *plVar16;
              }
              else {
                lVar15 = 0;
              }
              if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                lVar10 = *plVar19;
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar11 = *plVar16;
              }
              else {
                lVar11 = 0;
              }
              if (*(int *)(lVar15 + 0x3d4) == *(int *)(lVar10 + 0x3d4)) {
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar15 = *plVar19;
                }
                else {
                  lVar15 = 0;
                }
                iVar25 = (int)*(undefined8 *)(lVar11 + 0x18) - (int)*(undefined8 *)(lVar15 + 0x18);
                if (iVar25 == 0) {
                  iVar25 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) -
                           (int)((ulonglong)*(undefined8 *)(lVar15 + 0x18) >> 0x20);
                }
                if (-1 < iVar25) goto joined_r0x000143c2e966;
              }
              else {
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar15 = *plVar19;
                }
                else {
                  lVar15 = 0;
                }
                if (*(int *)(lVar11 + 0x3d4) <= *(int *)(lVar15 + 0x3d4))
                goto joined_r0x000143c2e966;
              }
              puVar8 = puVar27;
            }
            goto joined_r0x000143c2e966;
          }
          uVar2 = *(undefined8 *)puVar8;
          *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar7 = uVar2;
        }
        goto LAB_143c2eb06;
      }
LAB_143c2e203:
      iVar25 = (int)uVar18;
      if (iVar25 != 0) {
        iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
        iVar26 = iVar13;
joined_r0x000143c2e22a:
        do {
          iVar23 = iVar13 * 2 + 1;
          if (iVar23 < iVar25) {
            iVar22 = iVar13 * 2 + 2;
            if (iVar25 <= iVar22) goto LAB_143c2e39d;
            lVar15 = (longlong)iVar22;
            if (((((puVar9[lVar15 * 2 + 1] != 0) && (uVar5 = puVar9[lVar15 * 2], -1 < (int)uVar5))
                 && ((int)uVar5 < DAT_14c9647dc)) &&
                ((plVar16 = (longlong *)
                            ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                 plVar16 != (longlong *)0x0 && (*(uint *)(plVar16 + 2) == puVar9[lVar15 * 2 + 1]))))
               && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) {
              if (((puVar9[(longlong)iVar23 * 2 + 1] != 0) &&
                  (uVar5 = puVar9[(longlong)iVar23 * 2], -1 < (int)uVar5)) &&
                 (((int)uVar5 < DAT_14c9647dc &&
                  (((plVar19 = (longlong *)
                               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                    plVar19 != (longlong *)0x0 &&
                    (*(uint *)(plVar19 + 2) == puVar9[(longlong)iVar23 * 2 + 1])) &&
                   ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))) {
                if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                  lVar10 = *plVar16;
                }
                else {
                  lVar10 = 0;
                }
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar11 = *plVar19;
                }
                else {
                  lVar11 = 0;
                }
                if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                  lVar6 = *plVar16;
                }
                else {
                  lVar6 = 0;
                }
                if (*(int *)(lVar10 + 0x3d4) == *(int *)(lVar11 + 0x3d4)) {
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                    lVar10 = *plVar19;
                  }
                  else {
                    lVar10 = 0;
                  }
                  iVar14 = (int)*(undefined8 *)(lVar6 + 0x18) - (int)*(undefined8 *)(lVar10 + 0x18);
                  if (iVar14 == 0) {
                    iVar14 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) -
                             (int)((ulonglong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
                  }
                  if (iVar14 < 0) {
LAB_143c2e39d:
                    lVar15 = (longlong)iVar23;
                    iVar22 = iVar23;
                  }
                }
                else {
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                    lVar10 = *plVar19;
                  }
                  else {
                    lVar10 = 0;
                  }
                  if (*(int *)(lVar10 + 0x3d4) < *(int *)(lVar6 + 0x3d4)) goto LAB_143c2e39d;
                }
              }
            }
            lVar10 = (longlong)iVar13;
            if (((((puVar9[lVar10 * 2 + 1] != 0) && (uVar5 = puVar9[lVar10 * 2], -1 < (int)uVar5))
                 && (((int)uVar5 < DAT_14c9647dc &&
                     ((plVar16 = (longlong *)
                                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                      plVar16 != (longlong *)0x0 &&
                      (*(uint *)(plVar16 + 2) == puVar9[lVar10 * 2 + 1])))))) &&
                ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) &&
               (((((puVar9[lVar15 * 2 + 1] != 0 && (uVar5 = puVar9[lVar15 * 2], -1 < (int)uVar5)) &&
                  ((int)uVar5 < DAT_14c9647dc)) &&
                 ((plVar19 = (longlong *)
                             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                  plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == puVar9[lVar15 * 2 + 1])))
                 ) && ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar11 = *plVar16;
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                lVar6 = *plVar19;
              }
              else {
                lVar6 = 0;
              }
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar17 = *plVar16;
              }
              else {
                lVar17 = 0;
              }
              if (*(int *)(lVar11 + 0x3d4) == *(int *)(lVar6 + 0x3d4)) {
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar11 = *plVar19;
                }
                else {
                  lVar11 = 0;
                }
                iVar13 = (int)*(undefined8 *)(lVar17 + 0x18) - (int)*(undefined8 *)(lVar11 + 0x18);
                if (iVar13 == 0) {
                  iVar13 = (int)((ulonglong)*(undefined8 *)(lVar17 + 0x18) >> 0x20) -
                           (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
                }
                if (iVar13 < 0) {
LAB_143c2e502:
                  uVar2 = *(undefined8 *)(puVar9 + lVar10 * 2);
                  *(undefined8 *)(puVar9 + lVar10 * 2) = *(undefined8 *)(puVar9 + lVar15 * 2);
                  *(undefined8 *)(puVar9 + lVar15 * 2) = uVar2;
                  iVar13 = iVar22;
                  goto joined_r0x000143c2e22a;
                }
              }
              else {
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar11 = *plVar19;
                }
                else {
                  lVar11 = 0;
                }
                if (*(int *)(lVar11 + 0x3d4) < *(int *)(lVar17 + 0x3d4)) goto LAB_143c2e502;
              }
            }
          }
          bVar29 = iVar26 != 0;
          iVar13 = iVar26 + -1;
          iVar26 = iVar13;
        } while (bVar29);
        if (1 < iVar25) {
          uVar2 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar9 = *(undefined8 *)(puVar9 + uVar18 * 2 + -2);
          *(undefined8 *)(puVar9 + uVar18 * 2 + -2) = uVar2;
          if (iVar25 != 2) {
            do {
              uVar18 = uVar18 - 1;
              iVar13 = 0;
              iVar25 = 1;
              iVar26 = 0;
              do {
                iVar23 = iVar13 + 2;
                lVar15 = (longlong)iVar23;
                if ((longlong)uVar18 <= lVar15) goto LAB_143c2e731;
                if (((puVar9[lVar15 * 2 + 1] != 0) && (uVar5 = puVar9[lVar15 * 2], -1 < (int)uVar5))
                   && (((int)uVar5 < DAT_14c9647dc &&
                       (((plVar16 = (longlong *)
                                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                         plVar16 != (longlong *)0x0 &&
                         (*(uint *)(plVar16 + 2) == puVar9[lVar15 * 2 + 1])) &&
                        ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))))) {
                  if ((((puVar9[(longlong)iVar25 * 2 + 1] != 0) &&
                       (uVar5 = puVar9[(longlong)iVar25 * 2], -1 < (int)uVar5)) &&
                      ((int)uVar5 < DAT_14c9647dc)) &&
                     (((plVar19 = (longlong *)
                                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                       plVar19 != (longlong *)0x0 &&
                       (*(uint *)(plVar19 + 2) == puVar9[(longlong)iVar25 * 2 + 1])) &&
                      ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))) {
                    if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                      lVar10 = *plVar16;
                    }
                    else {
                      lVar10 = 0;
                    }
                    if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                      lVar11 = *plVar19;
                    }
                    else {
                      lVar11 = 0;
                    }
                    if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                      lVar6 = *plVar16;
                    }
                    else {
                      lVar6 = 0;
                    }
                    if (*(int *)(lVar10 + 0x3d4) == *(int *)(lVar11 + 0x3d4)) {
                      if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                        lVar10 = *plVar19;
                      }
                      else {
                        lVar10 = 0;
                      }
                      iVar13 = (int)*(undefined8 *)(lVar6 + 0x18) -
                               (int)*(undefined8 *)(lVar10 + 0x18);
                      if (iVar13 == 0) {
                        iVar13 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) -
                                 (int)((ulonglong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
                      }
                      if (iVar13 < 0) {
LAB_143c2e731:
                        lVar15 = (longlong)iVar25;
                        iVar23 = iVar25;
                      }
                    }
                    else {
                      if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                        lVar10 = *plVar19;
                      }
                      else {
                        lVar10 = 0;
                      }
                      if (*(int *)(lVar10 + 0x3d4) < *(int *)(lVar6 + 0x3d4)) goto LAB_143c2e731;
                    }
                  }
                }
                lVar10 = (longlong)iVar26;
                if (((((puVar9[lVar10 * 2 + 1] == 0) || (uVar5 = puVar9[lVar10 * 2], (int)uVar5 < 0)
                      ) || (DAT_14c9647dc <= (int)uVar5)) ||
                    ((plVar16 = (longlong *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                     plVar16 == (longlong *)0x0 ||
                     (*(uint *)(plVar16 + 2) != puVar9[lVar10 * 2 + 1])))) ||
                   (((((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
                      ((puVar9[lVar15 * 2 + 1] == 0 || (uVar5 = puVar9[lVar15 * 2], (int)uVar5 < 0))
                      )) || (DAT_14c9647dc <= (int)uVar5)) ||
                    (((plVar19 = (longlong *)
                                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                      plVar19 == (longlong *)0x0 ||
                      (*(uint *)(plVar19 + 2) != puVar9[lVar15 * 2 + 1])) ||
                     ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))))) break;
                if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                  lVar11 = *plVar16;
                }
                else {
                  lVar11 = 0;
                }
                if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                  lVar6 = *plVar19;
                }
                else {
                  lVar6 = 0;
                }
                if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                  lVar17 = *plVar16;
                }
                else {
                  lVar17 = 0;
                }
                if (*(int *)(lVar11 + 0x3d4) == *(int *)(lVar6 + 0x3d4)) {
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                    lVar11 = *plVar19;
                  }
                  else {
                    lVar11 = 0;
                  }
                  iVar25 = (int)*(undefined8 *)(lVar17 + 0x18) - (int)*(undefined8 *)(lVar11 + 0x18)
                  ;
                  if (iVar25 == 0) {
                    iVar25 = (int)((ulonglong)*(undefined8 *)(lVar17 + 0x18) >> 0x20) -
                             (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
                  }
                  if (-1 < iVar25) break;
                }
                else {
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                    lVar11 = *plVar19;
                  }
                  else {
                    lVar11 = 0;
                  }
                  if (*(int *)(lVar17 + 0x3d4) <= *(int *)(lVar11 + 0x3d4)) break;
                }
                uVar2 = *(undefined8 *)(puVar9 + lVar10 * 2);
                *(undefined8 *)(puVar9 + lVar10 * 2) = *(undefined8 *)(puVar9 + lVar15 * 2);
                *(undefined8 *)(puVar9 + lVar15 * 2) = uVar2;
                iVar13 = iVar23 * 2;
                iVar25 = iVar23 * 2 + 1;
                iVar26 = iVar23;
              } while ((longlong)iVar25 < (longlong)uVar18);
              uVar2 = *(undefined8 *)puVar9;
              *(undefined8 *)puVar9 = *(undefined8 *)(puVar9 + uVar18 * 2 + -2);
              *(undefined8 *)(puVar9 + uVar18 * 2 + -2) = uVar2;
            } while (2 < uVar18);
          }
        }
      }
LAB_143c2eb06:
      puVar28 = puVar28 + -3;
    } while (&local_368 <= puVar28);
  }
  if (((char)local_3b0[0x7b] != '\x01') ||
     (cVar4 = (**(code **)(*local_3b0 + 0x668))(), cVar4 == '\0')) goto LAB_143c2eebc;
  local_348 = (uint *)0x0;
  local_340 = 0;
  local_368 = 0;
  lStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_388 = 0;
  if (*(int *)(local_3b8 + 0x3c0) < 1) {
LAB_143c2ee81:
    plVar19 = (longlong *)0x0;
  }
  else {
    do {
      local_390 = 0;
      iVar25 = *(int *)(local_3b8 + 0x220);
      if ((longlong)iVar25 != 0) {
        lVar15 = *(longlong *)(local_3b8 + 0x218);
        lVar11 = 0;
        lVar10 = local_3b8;
        do {
          uVar18 = *(ulonglong *)(lVar15 + lVar11);
          if (((uVar18 >> 0x20 != 0) && (uVar5 = (uint)uVar18, -1 < (int)uVar5)) &&
             ((int)uVar5 < DAT_14c9647dc)) {
            uVar20 = (ulonglong)((uint)(uVar18 >> 0x10) & 0x7fff);
            plVar16 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + uVar20 * 8));
            if (((plVar16 != (longlong *)0x0) &&
                (iVar13 = (int)(uVar18 >> 0x20), (int)plVar16[2] == iVar13)) &&
               ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                lVar6 = *plVar16;
              }
              else {
                lVar6 = 0;
              }
              local_398 = *(undefined8 *)
                           (*(longlong *)(lVar10 + 0x3b8) + 0x10 + (longlong)local_388 * 0x18);
              puVar1 = (undefined4 *)(*(longlong *)(lVar10 + 0x3b8) + (longlong)local_388 * 0x18);
              local_3a8 = *puVar1;
              uStack_3a4 = puVar1[1];
              uStack_3a0 = puVar1[2];
              uStack_39c = puVar1[3];
              plVar16 = *(longlong **)(lVar6 + 0x3a8);
              if (((plVar16 != (longlong *)0x0) &&
                  (cVar4 = (**(code **)(*plVar16 + 0x7c0))(plVar16,&local_3a8,&local_384,&local_380)
                  , lVar10 = local_3b8, cVar4 != '\0')) &&
                 ((0.0 <= local_384 && (local_384 <= 0.0)))) {
                if ((((int)uVar5 < DAT_14c9647dc) &&
                    (puVar28 = (undefined8 *)
                               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + uVar20 * 8)),
                    puVar28 != (undefined8 *)0x0)) &&
                   ((*(int *)(puVar28 + 2) == iVar13 && ((*(uint *)(puVar28 + 1) & 0x10200000) == 0)
                    ))) {
                  local_390 = *puVar28;
                }
                else {
                  local_390 = 0;
                }
                break;
              }
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar25 * 8 != lVar11);
      }
      local_380 = &local_388;
      local_378 = &local_390;
      FUN_143c31248(&local_368,&local_384,&local_380);
      local_388 = local_388 + 1;
    } while (local_388 < *(int *)(local_3b8 + 0x3c0));
    plVar16 = (longlong *)0x0;
    if (local_340 == 0) goto LAB_143c2ee81;
    puVar7 = local_348;
    if (local_348 == (uint *)0x0) {
      puVar7 = local_358;
    }
    uVar5 = *puVar7;
    iVar25 = 0;
    if (uVar5 == 0) {
      iVar25 = local_340 + 0x1e;
      if (-1 < local_340 + -1) {
        iVar25 = local_340 + -1;
      }
      plVar19 = (longlong *)0x0;
      plVar24 = (longlong *)(ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        plVar24 = plVar19;
      }
      plVar16 = (longlong *)0x0;
      iVar25 = 0;
      do {
        if (plVar24 == plVar16) goto LAB_143c2ee84;
        iVar25 = iVar25 + 0x20;
        uVar5 = puVar7[(longlong)plVar16 + 1];
        plVar16 = (longlong *)((longlong)plVar16 + 1);
      } while (uVar5 == 0);
    }
    uVar20 = (ulonglong)(-uVar5 & uVar5);
    uVar18 = uVar20 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar13 = (iVar25 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (local_340 <= iVar13) goto LAB_143c2ee81;
    iVar26 = local_340 + 0x1e;
    if (-1 < local_340 + -1) {
      iVar26 = local_340 + -1;
    }
    iVar26 = iVar26 >> 5;
    uVar5 = 0xffffffff;
    plVar24 = (longlong *)0x0;
    do {
      plVar3 = *(longlong **)(local_368 + 8 + (longlong)iVar13 * 0x18);
      plVar19 = plVar3;
      if (((plVar24 != (longlong *)0x0) && (plVar19 = plVar24, plVar3 != (longlong *)0x0)) &&
         (*(int *)((longlong)plVar24 + 0x3d4) < *(int *)((longlong)plVar3 + 0x3d4))) {
        plVar19 = plVar3;
      }
      uVar5 = uVar5 & ~(uint)uVar20;
      iVar13 = (int)plVar16;
      lVar15 = (longlong)iVar13;
      uVar12 = puVar7[lVar15] & uVar5;
      if (uVar12 == 0) {
        iVar23 = iVar26;
        if (iVar26 < iVar13) {
          iVar23 = iVar13;
        }
        if (iVar26 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar25 = iVar25 + 0x20;
          uVar12 = puVar7[lVar15 + lVar10 + 1];
          if (uVar12 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar23 - lVar15 == lVar10) goto LAB_143c2ee84;
        }
        plVar16 = (longlong *)(ulonglong)(iVar13 + (int)lVar10 + 1);
        uVar5 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar12 & uVar12);
      uVar18 = uVar20 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar25 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      plVar24 = plVar19;
    } while (iVar13 < local_340);
  }
LAB_143c2ee84:
  if (plVar19 == local_3b0) {
    FUN_143c29c0c(local_3b8);
  }
  local_320 = 0;
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  FUN_143c309aa(&local_368);
LAB_143c2eebc:
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143c2e17b:
  uVar2 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar9 = *(undefined8 *)puVar27;
  *(undefined8 *)puVar27 = uVar2;
  iVar25 = iVar25 + -1;
  puVar21 = puVar21 + -4;
  if ((longlong)puVar21 - (longlong)puVar9 < (longlong)puVar7 - (longlong)puVar8) {
    if (puVar8 < puVar7) {
      *puVar28 = puVar8;
      puVar28[1] = puVar7;
      *(int *)(puVar28 + 2) = iVar25;
      puVar28 = puVar28 + 3;
    }
    if (puVar27 <= puVar9 + 2) goto LAB_143c2eb06;
  }
  else {
    if (puVar9 + 2 < puVar27) {
      *puVar28 = puVar9;
      puVar28[1] = puVar21;
      *(int *)(puVar28 + 2) = iVar25;
      puVar28 = puVar28 + 3;
    }
    puVar21 = puVar7;
    puVar9 = puVar8;
    if (puVar7 <= puVar8) goto LAB_143c2eb06;
  }
  iVar13 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar9) >> 3);
  uVar18 = (ulonglong)(iVar13 + 1);
  puVar7 = puVar21;
  if (iVar25 == 0) goto LAB_143c2e203;
  goto LAB_143c2de19;
}



// FUNCTION 143c2ef42 FUN_143c2ef42 body=377 status=ok
// SIG undefined FUN_143c2ef42(void)

void FUN_143c2ef42(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0;
  if (param_2 == 0) {
    local_40 = 0;
    iVar2 = 0;
  }
  else {
    local_40 = *(uint *)(param_2 + 0xc);
    if ((int)local_40 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_40 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_38 = &local_40;
  local_3c = iVar2;
  FUN_143c31b4e();
  if ((param_2 == 0) || (*(char *)(param_2 + 0x3d9) == '\0')) goto LAB_143c2f03b;
  if (*(int *)(param_1 + 0x234) == 0) {
LAB_143c2f06c:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x230);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0x234) ||
          ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_143c2f06c;
      lVar5 = *plVar3;
    }
  }
  if ((lVar5 == param_2) && (*(char *)(param_2 + 0x3d8) == '\x01')) {
    FUN_143c29c0c(param_1);
  }
LAB_143c2f03b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2f0bc FUN_143c2f0bc body=49 status=ok
// SIG undefined FUN_143c2f0bc(void)

void FUN_143c2f0bc(void)

{
  FUN_144760e21(DAT_14cb54798,DAT_14cb547a0);
  if (DAT_14cb54798 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c2f0ed FUN_143c2f0ed body=49 status=ok
// SIG undefined FUN_143c2f0ed(void)

void FUN_143c2f0ed(void)

{
  FUN_144760e21(DAT_14cb543b8,DAT_14cb543c0);
  if (DAT_14cb543b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c2f12a FUN_143c2f12a body=49 status=ok
// SIG undefined FUN_143c2f12a(void)

void FUN_143c2f12a(void)

{
  FUN_141843ed1(DAT_14cb54430,DAT_14cb54438);
  if (DAT_14cb54430 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c2f192 FUN_143c2f192 body=411 status=ok
// SIG undefined FUN_143c2f192(void)

void FUN_143c2f192(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_140d3be2e(param_1 + 0x28);
  if ((param_2 != 0 && lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x88) != 0)) {
    puVar11 = *(undefined8 **)(lVar6 + 0x80);
    lVar10 = (longlong)*(int *)(lVar6 + 0x88) * 0x90;
    do {
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(puVar11 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar11;
      }
      cVar4 = FUN_1402ca022(param_2,puVar8);
      if (cVar4 != '\0') {
        if ((puVar11 != (undefined8 *)0x0) && (*(longlong *)(param_1 + 8) != param_2)) {
          *(longlong *)(param_1 + 8) = param_2;
          *(undefined4 *)(param_1 + 0x10) = param_3;
          FUN_140d3bf04(lVar6,&local_60,param_2);
          *(longlong *)(param_1 + 0x14) = local_60;
          *(undefined4 *)(param_1 + 0x1c) = param_3;
          uVar7 = FUN_1447210f0(param_1 + -0x3c8);
          FUN_1404d1e78(&local_60,uVar7);
          if ((local_60 == 0) || ((local_58 == (longlong *)0x0 || ((int)local_58[1] < 1))))
          goto LAB_143c2f297;
          iVar5 = (int)local_58[1];
          goto LAB_143c2f2dc;
        }
        break;
      }
      puVar11 = puVar11 + 0x12;
      lVar10 = lVar10 + -0x90;
    } while (lVar10 != 0);
  }
  goto LAB_143c2f2ad;
  while( true ) {
    LOCK();
    iVar3 = (int)local_58[1];
    bVar12 = iVar5 == iVar3;
    if (bVar12) {
      *(int *)(local_58 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar9 = local_58;
    if (bVar12) break;
LAB_143c2f2dc:
    if (iVar5 == 0) {
      plVar9 = (longlong *)0x0;
      break;
    }
  }
  lVar6 = 0;
  if (plVar9 != (longlong *)0x0) {
    lVar6 = local_60;
  }
  FUN_148606b52(lVar6,param_1);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_143c2f297:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_143c2f2ad:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2f32e FUN_143c2f32e body=147 status=ok
// SIG undefined FUN_143c2f32e(void)

undefined8 * FUN_143c2f32e(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14afde230;
  *(undefined4 *)(param_1 + 0x79) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined2 *)(param_1 + 0x7b) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x3da) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x41200000;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(byte *)(param_1[0x75] + 0x2d3) = *(byte *)(param_1[0x75] + 0x2d3) | 4;
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xffffff00;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  return param_1;
}



// FUNCTION 143c2f3c2 FUN_143c2f3c2 body=304 status=ok
// SIG undefined FUN_143c2f3c2(void)

void FUN_143c2f3c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = DAT_14caca278;
  if (DAT_14caca280 == 0) {
    plVar7 = (longlong *)0x0;
  }
  (**(code **)(*plVar7 + 0x58))(plVar7,param_1);
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) {
    uVar6 = FUN_1447210f0(param_1);
    FUN_1404d1e78(&local_30,uVar6);
    if ((local_30 != 0) && ((local_28 != (longlong *)0x0 && (0 < (int)local_28[1])))) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      lVar5 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar5 = local_30;
      }
      FUN_143c2ef42(lVar5,param_1);
      if (plVar7 != (longlong *)0x0) {
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
    }
    lVar5 = *(longlong *)(param_1 + 0x3a8);
    if (lVar5 != 0) {
      FUN_141078a6c(&local_38);
      FUN_1410789fe(lVar5 + 0x59e,param_1,local_38);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2f4f4 FUN_143c2f4f4 body=127 status=ok
// SIG undefined FUN_143c2f4f4(void)

void FUN_143c2f4f4(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x668))();
    if (cVar2 != '\0') {
      FUN_143c2f79c(param_1);
    }
    lVar1 = param_1[0x75];
    if (lVar1 != 0) {
      FUN_141078a6c(&local_28);
      FUN_1410789fe(lVar1 + 0x59e,param_1,local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c2f574 FUN_143c2f574 body=528 status=ok
// SIG undefined FUN_143c2f574(void)

void FUN_143c2f574(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar6 = (longlong *)0x0;
  }
  (**(code **)(*plVar6 + 0x58))(plVar6,param_1);
  FUN_14020684a(param_1);
  lVar1 = param_1[0x75];
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x9c) & 8) != 0)) {
    cVar4 = (**(code **)(*param_1 + 0x668))(param_1);
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
    }
  }
  else {
    FUN_141078a6c(&local_60);
    if (param_1 == (longlong *)0x0) {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar5 = *(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar5 = *(uint *)(lVar8 + 0x10);
        bVar11 = uVar5 == 0;
        if (bVar11) {
          *(uint *)(lVar8 + 0x10) = uVar7;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          uVar5 = uVar7;
        }
      }
      uVar9 = (ulonglong)uVar5;
      if (local_60 == 0) {
        local_60 = 0;
      }
      else if (uVar5 == 0) {
        uVar9 = 0;
      }
      else if ((((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) &&
               (plVar6 = (longlong *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0)) &&
              (((*(uint *)(plVar6 + 2) == uVar5 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
               (*plVar6 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar6 + 0x10),local_60,1);
      }
    }
    local_50 = (ulonglong)uVar10 | uVar9 << 0x20;
    local_48 = local_60;
    FUN_14015716c(lVar1 + 0x59e,&local_58);
    bVar3 = FUN_140819c20(lVar1,local_58,&local_50);
    *(byte *)(lVar1 + 0x59e) = *(byte *)(lVar1 + 0x59e) | bVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2f79c FUN_143c2f79c body=194 status=ok
// SIG undefined FUN_143c2f79c(void)

void FUN_143c2f79c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_28;
    }
    FUN_143c2dc8e(lVar6,param_1);
    if (plVar7 != (longlong *)0x0) {
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2f860 FUN_143c2f860 body=994 status=ok
// SIG undefined FUN_143c2f860(void)

void FUN_143c2f860(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x458) == param_2) goto LAB_143c2f983;
  *(char *)(param_1 + 0x458) = param_2;
  uVar6 = FUN_1447210f0();
  FUN_1404d1e78(&local_50,uVar6);
  if (((local_50 != 0) && (local_48 != (longlong *)0x0)) && (0 < (int)local_48[1])) {
    iVar4 = (int)local_48[1];
    do {
      if (iVar4 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_48[1];
      bVar15 = iVar4 == iVar2;
      if (bVar15) {
        *(int *)(local_48 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar10 = local_48;
    } while (!bVar15);
    lVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar11 = local_50;
    }
    if (*(int *)(lVar11 + 0x23c) == 0) {
LAB_143c2fada:
      lVar13 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar11 + 0x238);
      lVar13 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != *(int *)(lVar11 + 0x23c) ||
            ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_143c2fada;
        lVar13 = *plVar7;
      }
    }
    if (lVar13 == param_1) {
      uVar5 = 1;
      if (*(longlong *)(lVar11 + 0x188) == 0) {
        uVar5 = -(uint)(*(longlong *)(lVar11 + 0x180) == 0);
      }
      if (*(char *)(param_1 + 0x458) == '\0') {
        if ((uVar5 < 2) &&
           (lVar13 = *(longlong *)(lVar11 + 0x180 + (ulonglong)uVar5 * 8), lVar13 != 0)) {
          if (((*(int *)(lVar11 + 0x22c) == 0) ||
              ((((uVar5 = *(uint *)(lVar11 + 0x228), (int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)
                 ) || (plVar7 = (longlong *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                      plVar7 == (longlong *)0x0)) ||
               (((int)plVar7[2] != *(int *)(lVar11 + 0x22c) ||
                ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) || (*plVar7 == 0)) {
            lVar9 = *(longlong *)(param_1 + 0x3a8);
            if ((lVar9 != 0) && ((longlong)*(int *)(lVar13 + 0x88) != 0)) {
              puVar14 = *(undefined8 **)(lVar13 + 0x80);
              lVar12 = (longlong)*(int *)(lVar13 + 0x88) * 0x90;
              do {
                puVar8 = &DAT_149dfb77a;
                if (*(int *)(puVar14 + 1) != 0) {
                  puVar8 = (undefined2 *)*puVar14;
                }
                cVar3 = FUN_1402ca022(lVar9,puVar8);
                if (cVar3 != '\0') goto LAB_143c2fb3a;
                puVar14 = puVar14 + 0x12;
                lVar12 = lVar12 + -0x90;
              } while (lVar12 != 0);
            }
          }
          else {
            lVar9 = *(longlong *)(*plVar7 + 0x3d0);
            if ((lVar9 != 0) && ((longlong)*(int *)(lVar13 + 0x88) != 0)) {
              puVar14 = *(undefined8 **)(lVar13 + 0x80);
              lVar12 = (longlong)*(int *)(lVar13 + 0x88) * 0x90;
              do {
                puVar8 = &DAT_149dfb77a;
                if (*(int *)(puVar14 + 1) != 0) {
                  puVar8 = (undefined2 *)*puVar14;
                }
                cVar3 = FUN_1402ca022(lVar9,puVar8);
                if (cVar3 != '\0') goto LAB_143c2fb3a;
                puVar14 = puVar14 + 0x12;
                lVar12 = lVar12 + -0x90;
              } while (lVar12 != 0);
            }
          }
          goto LAB_143c2fb3f;
        }
      }
      else if ((uVar5 < 2) &&
              (lVar13 = *(longlong *)(lVar11 + 0x180 + (ulonglong)uVar5 * 8), lVar13 != 0)) {
        if (*(int *)(param_1 + 0x468) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 0x460);
        }
        FUN_1446f470e(&local_58,puVar8,1);
        if ((local_58 != 0) && ((longlong)*(int *)(lVar13 + 0x88) != 0)) {
          puVar14 = *(undefined8 **)(lVar13 + 0x80);
          lVar13 = (longlong)*(int *)(lVar13 + 0x88) * 0x90;
          do {
            puVar8 = &DAT_149dfb77a;
            if (*(int *)(puVar14 + 1) != 0) {
              puVar8 = (undefined2 *)*puVar14;
            }
            cVar3 = FUN_1402ca022(local_58,puVar8);
            if (cVar3 != '\0') {
              if (puVar14 != (undefined8 *)0x0) {
                if (*(int *)(param_1 + 0x468) == 0) {
                  puVar8 = &DAT_149dfb77a;
                }
                else {
                  puVar8 = *(undefined2 **)(param_1 + 0x460);
                }
                FUN_1446f470e(&local_60,puVar8,1);
                lVar9 = local_60;
                goto LAB_143c2fb5b;
              }
              break;
            }
            puVar14 = puVar14 + 0x12;
            lVar13 = lVar13 + -0x90;
          } while (lVar13 != 0);
        }
      }
    }
    goto LAB_143c2f94b;
  }
  goto LAB_143c2f96d;
LAB_143c2fb3a:
  if (puVar14 == (undefined8 *)0x0) {
LAB_143c2fb3f:
    FUN_1486069ac(lVar13,&local_60);
    lVar9 = local_60;
  }
  if (lVar9 != 0) {
LAB_143c2fb5b:
    if ((int)lVar9 != -1) {
      fVar16 = (float)FUN_1404fc0d6(lVar11);
      if (0.0 < fVar16) {
        FUN_141282b42(lVar11);
      }
      FUN_143c29e9c(lVar11,lVar9);
    }
  }
LAB_143c2f94b:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_143c2f96d:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
LAB_143c2f983:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2fc44 FUN_143c2fc44 body=784 status=ok
// SIG undefined FUN_143c2fc44(void)

void FUN_143c2fc44(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(param_1 + 0x460);
  iVar5 = *(int *)(param_1 + 0x468);
  iVar3 = (int)param_2[1];
  if (iVar5 == iVar3) {
    if (1 < iVar5) {
      lVar10 = *param_2;
      lVar8 = 0;
      while( true ) {
        uVar12 = *(ushort *)(*plVar2 + lVar8);
        uVar13 = (ulonglong)uVar12;
        uVar14 = *(ushort *)(lVar10 + lVar8);
        if (uVar12 != uVar14) break;
        if (uVar12 == 0) goto LAB_143c2ff20;
LAB_143c2fcb0:
        lVar8 = lVar8 + 2;
      }
      if ((uVar14 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        uVar15 = (ulonglong)uVar14;
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_143c2fcb0;
      }
      if (uVar12 != uVar14) goto LAB_143c2fcef;
    }
    goto LAB_143c2ff20;
  }
  if (iVar5 + iVar3 == 1) goto LAB_143c2ff20;
  lVar10 = *param_2;
LAB_143c2fcef:
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  FUN_1402980a2(plVar2,lVar10,iVar5);
  if (*(char *)(param_1 + 0x458) != '\x01') goto LAB_143c2ff20;
  uVar7 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_58,uVar7);
  if (((local_58 != 0) && (local_50 != (longlong *)0x0)) && (0 < (int)local_50[1])) {
    iVar5 = (int)local_50[1];
    do {
      if (iVar5 == 0) {
        plVar17 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_50[1];
      bVar18 = iVar5 == iVar3;
      if (bVar18) {
        *(int *)(local_50 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar17 = local_50;
    } while (!bVar18);
    lVar10 = 0;
    if (plVar17 != (longlong *)0x0) {
      lVar10 = local_58;
    }
    if (*(int *)(lVar10 + 0x23c) == 0) {
LAB_143c2fe8f:
      lVar8 = 0;
    }
    else {
      uVar6 = *(uint *)(lVar10 + 0x238);
      lVar8 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(lVar10 + 0x23c) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143c2fe8f;
        lVar8 = *plVar9;
      }
    }
    if (lVar8 == param_1) {
      uVar6 = 1;
      if (*(longlong *)(lVar10 + 0x188) == 0) {
        uVar6 = -(uint)(*(longlong *)(lVar10 + 0x180) == 0);
      }
      if ((uVar6 < 2) && (lVar8 = *(longlong *)(lVar10 + 0x180 + (ulonglong)uVar6 * 8), lVar8 != 0))
      {
        if (*(int *)(param_1 + 0x468) == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = (undefined2 *)*plVar2;
        }
        FUN_1446f470e(&local_60,puVar11,1);
        if ((local_60 != 0) && ((longlong)*(int *)(lVar8 + 0x88) != 0)) {
          puVar16 = *(undefined8 **)(lVar8 + 0x80);
          lVar8 = (longlong)*(int *)(lVar8 + 0x88) * 0x90;
          do {
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(puVar16 + 1) != 0) {
              puVar11 = (undefined2 *)*puVar16;
            }
            cVar4 = FUN_1402ca022(local_60,puVar11);
            if (cVar4 != '\0') {
              if (puVar16 != (undefined8 *)0x0) {
                fVar19 = (float)FUN_1404fc0d6(lVar10);
                if (0.0 < fVar19) {
                  FUN_141282b42(lVar10);
                }
                if (*(int *)(param_1 + 0x468) == 0) {
                  puVar11 = &DAT_149dfb77a;
                }
                else {
                  puVar11 = (undefined2 *)*plVar2;
                }
                FUN_1446f470e(&local_68,puVar11,1);
                FUN_143c29e9c(lVar10,local_68);
              }
              break;
            }
            puVar16 = puVar16 + 0x12;
            lVar8 = lVar8 + -0x90;
          } while (lVar8 != 0);
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_143c2ff20:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c2ff56 FUN_143c2ff56 body=838 status=ok
// SIG undefined FUN_143c2ff56(void)

void FUN_143c2ff56(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x470) == param_2) goto LAB_143c30079;
  *(char *)(param_1 + 0x470) = param_2;
  uVar6 = FUN_1447210f0();
  FUN_1404d1e78(&local_50,uVar6);
  if (((local_50 != 0) && (local_48 != (longlong *)0x0)) && (0 < (int)local_48[1])) {
    iVar4 = (int)local_48[1];
    do {
      if (iVar4 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_48[1];
      bVar14 = iVar4 == iVar2;
      if (bVar14) {
        *(int *)(local_48 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar10 = local_48;
    } while (!bVar14);
    lVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar11 = local_50;
    }
    if (*(int *)(lVar11 + 0x23c) == 0) {
LAB_143c301a9:
      lVar12 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar11 + 0x238);
      lVar12 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != *(int *)(lVar11 + 0x23c) ||
            ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_143c301a9;
        lVar12 = *plVar8;
      }
    }
    if (lVar12 == param_1) {
      uVar5 = 1;
      if (*(longlong *)(lVar11 + 0x188) == 0) {
        uVar5 = -(uint)(*(longlong *)(lVar11 + 0x180) == 0);
      }
      if (*(char *)(param_1 + 0x470) == '\0') {
        if ((uVar5 < 2) &&
           (lVar12 = *(longlong *)(lVar11 + 0x180 + (ulonglong)uVar5 * 8), lVar12 != 0)) {
          FUN_141842e6e(lVar11);
          if (*(char *)(lVar11 + 0x51c) == '\x01') {
            lVar7 = *(longlong *)(lVar11 + 0x508);
            goto LAB_143c3025e;
          }
          lVar7 = FUN_1464ad5e2(lVar11);
          if (lVar7 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x14);
            if (lVar7 == 0) {
              lVar7 = 0;
              goto LAB_143c30267;
            }
            if ((longlong)*(int *)(lVar12 + 0x98) != 0) {
              puVar13 = *(undefined8 **)(lVar12 + 0x90);
              lVar12 = (longlong)*(int *)(lVar12 + 0x98) * 0x90;
              do {
                puVar9 = &DAT_149dfb77a;
                if (*(int *)(puVar13 + 1) != 0) {
                  puVar9 = (undefined2 *)*puVar13;
                }
                cVar3 = FUN_1402ca022(lVar7,puVar9);
                if (cVar3 != '\0') {
                  if (puVar13 != (undefined8 *)0x0) goto LAB_143c3025e;
                  break;
                }
                puVar13 = puVar13 + 0x12;
                lVar12 = lVar12 + -0x90;
              } while (lVar12 != 0);
            }
          }
        }
      }
      else if ((uVar5 < 2) &&
              (lVar12 = *(longlong *)(lVar11 + 0x180 + (ulonglong)uVar5 * 8), lVar12 != 0)) {
        if (*(int *)(param_1 + 0x480) == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = *(undefined2 **)(param_1 + 0x478);
        }
        FUN_1446f470e(&local_58,puVar9,1);
        if (local_58 == 0) {
LAB_143c3022f:
          if (*(int *)(param_1 + 0x480) == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = *(undefined2 **)(param_1 + 0x478);
          }
          FUN_1446f470e(&local_60,puVar9,1);
          lVar7 = local_60;
LAB_143c3025e:
          if ((int)lVar7 != -1) {
LAB_143c30267:
            fVar15 = (float)FUN_1404fc0d6(lVar11);
            if (0.0 < fVar15) {
              FUN_141282b42(lVar11);
            }
            FUN_143c29d2e(lVar11,lVar7);
          }
        }
        else if ((longlong)*(int *)(lVar12 + 0x98) != 0) {
          puVar13 = *(undefined8 **)(lVar12 + 0x90);
          lVar12 = (longlong)*(int *)(lVar12 + 0x98) * 0x90;
          do {
            puVar9 = &DAT_149dfb77a;
            if (*(int *)(puVar13 + 1) != 0) {
              puVar9 = (undefined2 *)*puVar13;
            }
            cVar3 = FUN_1402ca022(local_58,puVar9);
            if (cVar3 != '\0') {
              if (puVar13 != (undefined8 *)0x0) goto LAB_143c3022f;
              break;
            }
            puVar13 = puVar13 + 0x12;
            lVar12 = lVar12 + -0x90;
          } while (lVar12 != 0);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
LAB_143c30079:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c3029e FUN_143c3029e body=780 status=ok
// SIG undefined FUN_143c3029e(void)

void FUN_143c3029e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(param_1 + 0x478);
  iVar5 = *(int *)(param_1 + 0x480);
  iVar3 = (int)param_2[1];
  if (iVar5 == iVar3) {
    if (1 < iVar5) {
      lVar10 = *param_2;
      lVar8 = 0;
      while( true ) {
        uVar12 = *(ushort *)(*plVar2 + lVar8);
        uVar13 = (ulonglong)uVar12;
        uVar14 = *(ushort *)(lVar10 + lVar8);
        if (uVar12 != uVar14) break;
        if (uVar12 == 0) goto LAB_143c30576;
LAB_143c3030a:
        lVar8 = lVar8 + 2;
      }
      if ((uVar14 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        uVar15 = (ulonglong)uVar14;
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_143c3030a;
      }
      if (uVar12 != uVar14) goto LAB_143c30349;
    }
    goto LAB_143c30576;
  }
  if (iVar5 + iVar3 == 1) goto LAB_143c30576;
  lVar10 = *param_2;
LAB_143c30349:
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  FUN_1402980a2(plVar2,lVar10,iVar5);
  if (*(char *)(param_1 + 0x470) != '\x01') goto LAB_143c30576;
  uVar7 = FUN_1447210f0(param_1);
  FUN_1404d1e78(&local_58,uVar7);
  if (((local_58 != 0) && (local_50 != (longlong *)0x0)) && (0 < (int)local_50[1])) {
    iVar5 = (int)local_50[1];
    do {
      if (iVar5 == 0) {
        plVar17 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_50[1];
      bVar18 = iVar5 == iVar3;
      if (bVar18) {
        *(int *)(local_50 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar17 = local_50;
    } while (!bVar18);
    lVar10 = 0;
    if (plVar17 != (longlong *)0x0) {
      lVar10 = local_58;
    }
    if (*(int *)(lVar10 + 0x23c) == 0) {
LAB_143c304e5:
      lVar8 = 0;
    }
    else {
      uVar6 = *(uint *)(lVar10 + 0x238);
      lVar8 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(lVar10 + 0x23c) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143c304e5;
        lVar8 = *plVar9;
      }
    }
    if (lVar8 == param_1) {
      uVar6 = 1;
      if (*(longlong *)(lVar10 + 0x188) == 0) {
        uVar6 = -(uint)(*(longlong *)(lVar10 + 0x180) == 0);
      }
      if ((uVar6 < 2) && (lVar8 = *(longlong *)(lVar10 + 0x180 + (ulonglong)uVar6 * 8), lVar8 != 0))
      {
        if (*(int *)(param_1 + 0x480) == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = (undefined2 *)*plVar2;
        }
        FUN_1446f470e(&local_60,puVar11,1);
        if (local_60 == 0) {
LAB_143c304f1:
          fVar19 = (float)FUN_1404fc0d6(lVar10);
          if (0.0 < fVar19) {
            FUN_141282b42(lVar10);
          }
          if (*(int *)(param_1 + 0x480) == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          else {
            puVar11 = (undefined2 *)*plVar2;
          }
          FUN_1446f470e(&local_68,puVar11,1);
          FUN_143c29d2e(lVar10,local_68);
        }
        else if ((longlong)*(int *)(lVar8 + 0x98) != 0) {
          puVar16 = *(undefined8 **)(lVar8 + 0x90);
          lVar8 = (longlong)*(int *)(lVar8 + 0x98) * 0x90;
          do {
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(puVar16 + 1) != 0) {
              puVar11 = (undefined2 *)*puVar16;
            }
            cVar4 = FUN_1402ca022(local_60,puVar11);
            if (cVar4 != '\0') {
              if (puVar16 != (undefined8 *)0x0) goto LAB_143c304f1;
              break;
            }
            puVar16 = puVar16 + 0x12;
            lVar8 = lVar8 + -0x90;
          } while (lVar8 != 0);
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar17 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_143c30576:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c305ac FUN_143c305ac body=405 status=ok
// SIG undefined FUN_143c305ac(void)

void FUN_143c305ac(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_140d3be2e(param_1 + 0x70);
  if ((param_2 != 0 && lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x88) != 0)) {
    puVar11 = *(undefined8 **)(lVar6 + 0x80);
    lVar10 = (longlong)*(int *)(lVar6 + 0x88) * 0x90;
    do {
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(puVar11 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar11;
      }
      cVar4 = FUN_1402ca022(param_2,puVar8);
      if (cVar4 != '\0') {
        if (puVar11 != (undefined8 *)0x0) {
          *(longlong *)(param_1 + 8) = param_2;
          *(undefined4 *)(param_1 + 0x10) = param_3;
          FUN_140d3bf04(lVar6,&local_60,param_2);
          *(longlong *)(param_1 + 0x14) = local_60;
          *(undefined4 *)(param_1 + 0x1c) = param_3;
          uVar7 = FUN_1447210f0(param_1 + -0x3a0);
          FUN_1404d1e78(&local_60,uVar7);
          if (((local_60 == 0) || (local_58 == (longlong *)0x0)) || ((int)local_58[1] < 1))
          goto LAB_143c306ab;
          iVar5 = (int)local_58[1];
          goto LAB_143c306f0;
        }
        break;
      }
      puVar11 = puVar11 + 0x12;
      lVar10 = lVar10 + -0x90;
    } while (lVar10 != 0);
  }
  goto LAB_143c306c1;
  while( true ) {
    LOCK();
    iVar3 = (int)local_58[1];
    bVar12 = iVar5 == iVar3;
    if (bVar12) {
      *(int *)(local_58 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar9 = local_58;
    if (bVar12) break;
LAB_143c306f0:
    if (iVar5 == 0) {
      plVar9 = (longlong *)0x0;
      break;
    }
  }
  lVar6 = 0;
  if (plVar9 != (longlong *)0x0) {
    lVar6 = local_60;
  }
  FUN_148606b52(lVar6,param_1);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_143c306ab:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_143c306c1:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c30742 FUN_143c30742 body=69 status=ok
// SIG undefined FUN_143c30742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c30742(void)

{
  _DAT_14cb54458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c30784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb54460,1);
  return;
}



// FUNCTION 143c30787 FUN_143c30787 body=69 status=ok
// SIG undefined FUN_143c30787(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c30787(void)

{
  _DAT_14cb54470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c307c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb54478,1);
  return;
}



// FUNCTION 143c307cc FUN_143c307cc body=69 status=ok
// SIG undefined FUN_143c307cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c307cc(void)

{
  _DAT_14cb54488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c3080e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb54490,1);
  return;
}



// FUNCTION 143c30811 FUN_143c30811 body=69 status=ok
// SIG undefined FUN_143c30811(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c30811(void)

{
  _DAT_14cb544a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c30853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb544a8,1);
  return;
}



// FUNCTION 143c30856 FUN_143c30856 body=91 status=ok
// SIG undefined FUN_143c30856(void)

void FUN_143c30856(void)

{
  if (DAT_14cb54788 != 0) {
    if (DAT_14cb54780 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb54780)(DAT_14cb54780,0);
    FUN_1446efa72(&DAT_14cb54780,0,0,0x10);
    DAT_14cb54788 = 0;
  }
  if (DAT_14cb54780 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c308ba FUN_143c308ba body=31 status=ok
// SIG undefined FUN_143c308ba(void)

undefined8 FUN_143c308ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c308da FUN_143c308da body=208 status=ok
// SIG undefined FUN_143c308da(void)

void FUN_143c308da(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14afe28f0;
  param_1[2] = &PTR_FUN_14afdfa90;
  param_1[3] = 0xffffffffffffffff;
  puVar2 = param_1 + 0x14;
  lVar3 = 0x10;
  do {
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x10) = 0;
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x18) = 0;
    lVar4 = 0;
    do {
      *(undefined8 *)((longlong)puVar2 + lVar4 + -0x48) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x40) = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar4 + -0x68);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar2 + lVar4 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x34) = 0;
      *(undefined8 *)((longlong)puVar2 + lVar4 + -0x28) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x20) = 0;
      puVar1 = (undefined8 *)((longlong)puVar2 + lVar4 + -0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -8) = 0x7f7fffff;
      *(undefined2 *)((longlong)puVar2 + lVar4 + -4) = 0x404;
      *(undefined **)((longlong)puVar2 + lVar4 + -0x70) = &DAT_14a176f00;
      *(undefined8 *)((longlong)puVar2 + lVar4) = 0;
      ((undefined8 *)((longlong)puVar2 + lVar4))[1] = 0;
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != 0x200);
    lVar3 = lVar3 + 0x210;
    puVar2 = puVar2 + 0x42;
  } while (lVar3 != 0x430);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  return;
}



// FUNCTION 143c309aa FUN_143c309aa body=113 status=ok
// SIG undefined FUN_143c309aa(void)

void FUN_143c309aa(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c30a2a FUN_143c30a2a body=48 status=ok
// SIG undefined FUN_143c30a2a(void)

void FUN_143c30a2a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 143c30a5a FUN_143c30a5a body=128 status=ok
// SIG undefined FUN_143c30a5a(void)

void FUN_143c30a5a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*param_1 != 0) && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) &&
     (0 < (int)plVar3[1])) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1449cffd4(0,*(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[2]);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_1449cffd4(*param_1,*(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[2]);
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
                    /* WARNING: Could not recover jumptable at 0x000143c30ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c30af0 FUN_143c30af0 body=64 status=ok
// SIG undefined FUN_143c30af0(void)

undefined8 * FUN_143c30af0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14afe2ea0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c30b30 FUN_143c30b30 body=310 status=ok
// SIG undefined FUN_143c30b30(void)

void FUN_143c30b30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  puVar4 = (undefined8 *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if ((((lVar3 != 0) && (*(char *)(lVar3 + 0xc) == '\x01')) && (0.0 <= *(float *)(lVar3 + 8))) &&
     ((*(float *)(lVar3 + 8) < *(float *)(param_1 + 1) && ((longlong)*(int *)(lVar3 + 0x18) != 0))))
  {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6) == *param_1) {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x18 + lVar6);
        iVar5 = 0;
        do {
          LOCK();
          UNLOCK();
          local_50 = DAT_14c761474 + 1;
          local_58 = 0;
          DAT_14c761474 = DAT_14c761474 + 1;
          FUN_1406507bc(param_1[2] + 0x10,local_44,
                        (float)iVar5 + *(float *)(lVar3 + 8) / *(float *)(param_1 + 1),uVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 3);
        break;
      }
      lVar6 = lVar6 + 0x1c;
    } while ((longlong)*(int *)(lVar3 + 0x18) * 0x1c != lVar6);
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c30c80 FUN_143c30c80 body=68 status=ok
// SIG undefined FUN_143c30c80(void)

undefined8 * FUN_143c30c80(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14afe2ee0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c30cec FUN_143c30cec body=360 status=ok
// SIG undefined FUN_143c30cec(void)

void FUN_143c30cec(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_90;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_2;
  puVar5 = (undefined8 *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0xc) == '\x01')) && (0.0 <= *(float *)(lVar4 + 8))) &&
     ((*(float *)(lVar4 + 8) < *(float *)(param_1 + 1) && ((longlong)*(int *)(lVar4 + 0x28) != 0))))
  {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + lVar6) == *param_1) {
        puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x18 + lVar6);
        local_78 = *puVar8;
        uStack_70 = puVar8[1];
        iVar7 = 0;
        do {
          fVar2 = *(float *)(lVar4 + 8);
          fVar3 = *(float *)(param_1 + 1);
          lVar6 = 0x10;
          puVar8 = &local_78;
          do {
            LOCK();
            UNLOCK();
            local_90 = DAT_14c761474 + 1;
            local_98 = 0;
            DAT_14c761474 = DAT_14c761474 + 1;
            FUN_1406507bc(param_1[2] + lVar6,local_7c,(float)iVar7 + fVar2 / fVar3,
                          *(undefined4 *)puVar8);
            lVar6 = lVar6 + 0x80;
            puVar8 = (undefined8 *)((longlong)puVar8 + 4);
          } while (lVar6 != 0x210);
          iVar7 = iVar7 + 1;
        } while (iVar7 != 3);
        break;
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)*(int *)(lVar4 + 0x28) * 0x28 != lVar6);
  }
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c30e74 FUN_143c30e74 body=198 status=ok
// SIG undefined FUN_143c30e74(void)

void FUN_143c30e74(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar5 = *param_2;
  plVar6 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xc) == '\x01')) {
    fVar3 = *(float *)(lVar5 + 8);
    if ((0.0 <= fVar3) &&
       ((fVar4 = *(float *)(param_1 + 0xc0), fVar3 < fVar4 && (0 < *(int *)(lVar5 + 0x38))))) {
      lVar7 = 0;
      do {
        FUN_14029cd3e();
        FUN_143c2a756(param_1,(ulonglong)
                              ((uint)*(ushort *)(*(longlong *)(lVar5 + 0x30) + lVar7 * 2) * 0x18) +
                              DAT_14cb54430,0,fVar3 / fVar4);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar5 + 0x38));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c30f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c30f3a FUN_143c30f3a body=782 status=ok
// SIG undefined FUN_143c30f3a(void)

void FUN_143c30f3a(float *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  
  lVar18 = *param_2;
  plVar14 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if ((lVar18 != 0) && (*(char *)(lVar18 + 0xc) == '\x01')) {
    fVar4 = *(float *)(lVar18 + 8);
    if ((0.0 <= fVar4) && ((fVar5 = *param_1, fVar4 < fVar5 && (0 < *(int *)(lVar18 + 0x18))))) {
      plVar16 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar16[1] = (longlong)&DAT_100000001;
      *plVar16 = (longlong)&PTR_FUN_14afe2ca0;
      plVar16[2] = 0;
      plVar16[3] = 0;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      plVar1 = plVar16 + 2;
      if ((longlong)*(int *)(lVar18 + 0x18) != 0) {
        puVar17 = *(undefined8 **)(lVar18 + 0x10);
        puVar3 = (undefined8 *)((longlong)puVar17 + (longlong)*(int *)(lVar18 + 0x18) * 0x24);
        do {
          uVar15 = *puVar17;
          uVar6 = *(undefined4 *)(puVar17 + 1);
          fVar7 = *(float *)((longlong)puVar17 + 0xc);
          fVar8 = *param_1;
          fVar9 = *(float *)(puVar17 + 2);
          uVar12 = *(undefined1 *)((longlong)puVar17 + 0x14);
          fVar10 = *(float *)(puVar17 + 3);
          fVar11 = *(float *)((longlong)puVar17 + 0x1c);
          iVar13 = (int)plVar16[3];
          lVar18 = (longlong)iVar13;
          *(uint *)(plVar16 + 3) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar16 + 0x1c) < iVar13 + 1U) {
            FUN_140fa103c(plVar1,iVar13);
          }
          lVar19 = *plVar1;
          *(undefined8 *)(lVar19 + lVar18 * 0x24) = uVar15;
          *(undefined4 *)(lVar19 + 8 + lVar18 * 0x24) = uVar6;
          *(float *)(lVar19 + 0xc + lVar18 * 0x24) = fVar7 / fVar8;
          *(float *)(lVar19 + 0x10 + lVar18 * 0x24) = fVar9 / fVar8;
          *(undefined1 *)(lVar19 + 0x14 + lVar18 * 0x24) = uVar12;
          *(float *)(lVar19 + 0x18 + lVar18 * 0x24) = fVar10 / fVar8;
          *(float *)(lVar19 + 0x1c + lVar18 * 0x24) = fVar11 / fVar8;
          *(undefined1 *)(lVar19 + 0x20 + lVar18 * 0x24) = 0;
          puVar17 = (undefined8 *)((longlong)puVar17 + 0x24);
        } while (puVar17 != puVar3);
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      lVar18 = *(longlong *)(param_1 + 2);
      iVar13 = *(int *)(lVar18 + 0x18);
      lVar19 = (longlong)iVar13;
      *(uint *)(lVar18 + 0x18) = iVar13 + 1U;
      if (*(uint *)(lVar18 + 0x1c) < iVar13 + 1U) {
        FUN_1404fc222((longlong *)(lVar18 + 0x10),iVar13);
      }
      lVar18 = *(longlong *)(lVar18 + 0x10);
      *(float *)(lVar18 + lVar19 * 0x18) = fVar4 / fVar5;
      *(longlong **)(lVar18 + 8 + lVar19 * 0x18) = plVar1;
      *(longlong **)(lVar18 + 0x10 + lVar19 * 0x18) = plVar16;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar14 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c311f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar14 + 0x10))(plVar14);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c31248 FUN_143c31248 body=1649 status=ok
// SIG undefined FUN_143c31248(void)

uint * FUN_143c31248(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  uint *puVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar20 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar20 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar20) {
      FUN_14482b872(param_1,uVar20);
    }
    iVar26 = (int)param_1[5];
    if (iVar26 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar5 = iVar26 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar12 = iVar26 + 1;
    iVar13 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar13 = iVar26;
    }
    if (iVar13 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar26) {
        iVar5 = iVar26;
        if (iVar26 + 0x20U < 0xa0) {
          iVar12 = 0x80;
        }
        else {
          uVar19 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar19) {
              uVar6 = uVar19;
            }
          }
          else {
            uVar6 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar9 = (ulonglong)(uVar6 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar9 + 0xf);
              if (uVar6 < 0x1ffd) {
                uVar9 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 + 0xf >> 4]];
              }
              else {
                uVar17 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar17 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar27 = 0x32;
                  if (0x32 < bVar10) {
                    uVar27 = (ulonglong)bVar10;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_143c317c8;
                    lVar14 = uVar27 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar14 != 0x33);
                }
                uVar9 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar9 = (ulonglong)DAT_14c841df8;
                }
                uVar9 = -uVar9 & (uVar17 + uVar9) - 1;
              }
            }
            else {
              uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
              iVar5 = (int)param_1[5];
            }
          }
LAB_143c317c8:
          iVar8 = (int)(uVar9 >> 2);
          iVar12 = -0x20;
          if ((int)uVar19 <= iVar8) {
            iVar12 = iVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar15,iVar5);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar5 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar5 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar15;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar14 = (longlong)(int)uVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar26 & 0x1f;
    puVar28 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
    *puVar28 = *puVar28 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    uVar20 = *(uint *)(param_1 + 6);
    lVar14 = (longlong)(int)uVar20;
    iVar26 = *(int *)(*param_1 + 4 + lVar14 * 0x18);
    *(int *)(param_1 + 6) = iVar26;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar26 * 0x18) = 0xffffffff;
    }
  }
  uVar6 = 1 << ((byte)uVar20 & 0x1f);
  puVar28 = (uint *)(param_1 + 2);
  uVar19 = 1;
  puVar16 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar16 = puVar28;
  }
  uVar11 = uVar20 + 0x1f;
  if (-1 < (int)uVar20) {
    uVar11 = uVar20;
  }
  puVar16[(int)uVar11 >> 5] = puVar16[(int)uVar11 >> 5] | uVar6;
  puVar16 = (uint *)(*param_1 + lVar14 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *puVar16 = uVar7;
  *(undefined8 *)(puVar16 + 2) = *puVar3;
  puVar16[4] = 0xffffffff;
  uVar25 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar25) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    uVar24 = *(uint *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (uVar24 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar24 * 0x18);
        if (*puVar1 == uVar7) {
          uVar4 = *(undefined8 *)(puVar16 + 2);
          *(undefined8 *)puVar1 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar1 + 2) = uVar4;
          lVar14 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(uint *)(lVar14 + (longlong)(int)param_1[6] * 0x18) = uVar20;
          }
          puVar2 = (undefined4 *)(lVar14 + (longlong)(int)uVar20 * 0x18);
          *puVar2 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar21 = 0xffffffff;
          }
          else {
            uVar21 = (undefined4)param_1[6];
          }
          puVar2[1] = uVar21;
          *(uint *)(param_1 + 6) = uVar20;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          if ((uint *)param_1[4] != (uint *)0x0) {
            puVar28 = (uint *)param_1[4];
          }
          puVar28[(int)uVar11 >> 5] = puVar28[(int)uVar11 >> 5] & ~uVar6;
          uVar20 = uVar24;
          goto LAB_143c31529;
        }
        uVar24 = puVar1[4];
      } while (uVar24 != 0xffffffff);
    }
  }
  if (3 < uVar25) {
    uVar9 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar25 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar7 = (int)param_1[9] - 1U & uVar7;
    puVar16[5] = uVar7;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    puVar16[4] = *(uint *)((longlong)plVar15 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(uint *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         uVar20;
    goto LAB_143c31529;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar15 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar15,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  if (uVar19 == 0) goto LAB_143c31529;
  plVar18 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar15 != 0) {
      FUN_1446efa72(plVar15,0,0,4);
    }
LAB_143c31431:
    uVar6 = 0;
    do {
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar18;
      }
      *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
           0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar19 != uVar6);
  }
  else {
    FUN_1446efa72(plVar15,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_143c31431;
  }
  iVar26 = (int)param_1[5];
  if (iVar26 == 0) {
    uVar9 = 0;
    uVar17 = 1;
    iVar12 = 0;
    iVar5 = 0;
  }
  else {
    puVar16 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar16 = puVar28;
    }
    uVar19 = *puVar16;
    if (uVar19 == 0) {
      iVar5 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar5 = iVar26 + -1;
      }
      uVar9 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar9;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar9) goto LAB_143c31529;
        iVar12 = iVar12 + 0x20;
        uVar19 = puVar16[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar9 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19);
    uVar27 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar26 <= iVar5) {
      iVar5 = iVar26;
    }
  }
  if (iVar5 < iVar26) {
    uVar19 = 0xffffffff;
    do {
      lVar14 = *param_1;
      lVar22 = (longlong)iVar5;
      uVar27 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar14 + lVar22 * 0x18);
      iVar26 = (int)uVar27;
      *(int *)(lVar14 + 0x14 + lVar22 * 0x18) = iVar26;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar18;
      }
      *(undefined4 *)(lVar14 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & uVar27) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar18;
      }
      *(int *)((longlong)plVar15 + ((longlong)iVar26 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar19 = ~(uint)uVar17 & uVar19;
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puVar28;
      }
      iVar26 = (int)param_1[5];
      iVar5 = (int)uVar9;
      lVar14 = (longlong)iVar5;
      uVar6 = puVar16[lVar14] & uVar19;
      if (uVar6 == 0) {
        iVar13 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar13 = iVar26 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar8 = iVar13;
        if (iVar13 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar13 <= iVar5) break;
        lVar22 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar16[lVar14 + lVar22 + 1];
          if (uVar6 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar8 - lVar14 == lVar22) goto LAB_143c31529;
        }
        uVar9 = (ulonglong)(iVar5 + (int)lVar22 + 1);
        uVar19 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar27 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar26);
  }
LAB_143c31529:
  *param_2 = uVar20;
  return param_2;
}



// FUNCTION 143c318ba FUN_143c318ba body=153 status=ok
// SIG undefined FUN_143c318ba(void)

void FUN_143c318ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  
  lVar5 = *param_2;
  plVar6 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xc) == '\x01')) {
    fVar3 = *(float *)(lVar5 + 8);
    if ((0.0 <= fVar3) &&
       ((fVar4 = *(float *)(param_1 + 1), fVar3 < fVar4 && (*(char *)(lVar5 + 0x10) != '\0')))) {
      pfVar7 = (float *)FUN_145ad287c(*param_1 + 0x3d0,*(char *)(lVar5 + 0x10),lVar5 + 0x10);
      *pfVar7 = fVar3 / fVar4;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c31927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c31954 FUN_143c31954 body=159 status=ok
// SIG undefined FUN_143c31954(void)

bool FUN_143c31954(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 != 0) &&
       ((((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)) &&
        ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
      return false;
    }
    if (((param_2[1] != 0) && (-1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
         (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
      return (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
    }
  }
  return true;
}



// FUNCTION 143c319f4 FUN_143c319f4 body=346 status=ok
// SIG undefined FUN_143c319f4(void)

void FUN_143c319f4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c31a86;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_143c31a86:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 143c31b4e FUN_143c31b4e body=275 status=ok
// SIG undefined FUN_143c31b4e(void)

int FUN_143c31b4e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar3 = FUN_143c31954(lVar1,*param_2);
    iVar12 = 0;
    iVar8 = 0;
    do {
      lVar11 = (longlong)iVar8;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar6) {
        iVar2 = iVar6;
      }
      lVar13 = lVar1 + 8 + lVar11 * 8;
      iVar9 = iVar8;
      lVar5 = lVar11;
      do {
        lVar5 = lVar5 + 1;
        iVar10 = iVar2;
        if (lVar7 <= lVar5) break;
        bVar4 = FUN_143c31954(lVar13,*param_2);
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + 8;
        iVar10 = iVar9;
      } while ((bVar3 & 1) == bVar4);
      if ((bVar3 & 1) == 0) {
        if (iVar12 != iVar8) {
          memmove((void *)(lVar1 + (longlong)iVar12 * 8),(void *)(lVar1 + lVar11 * 8),
                  (longlong)(iVar10 - iVar8) << 3);
        }
        iVar12 = iVar12 + (iVar10 - iVar8);
      }
      iVar8 = iVar10;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar7);
    *(int *)(param_1 + 1) = iVar12;
    iVar6 = iVar6 - iVar12;
  }
  return iVar6;
}



// FUNCTION 143c31c62 FUN_143c31c62 body=31 status=ok
// SIG undefined FUN_143c31c62(void)

undefined8 FUN_143c31c62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c31c81 FUN_143c31c81 body=1371 status=ok
// SIG undefined FUN_143c31c81(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c31c81(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined1 *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446f470e(&DAT_14cb54190,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cb54198,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cb541a0,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cb541a8,L"TimeOfDayForecastEvents",1);
  local_78 = "nexus";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb541b0 = (ulonglong)uVar2;
  local_78 = (char *)0x800000014afd3120;
  local_7c = 0xc;
  local_70 = FUN_14577453c();
  local_6c = 1;
  FUN_1464acf6a(&local_78);
  local_78 = "AssetRegistry";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cb541c0 = (ulonglong)uVar2;
  _DAT_14cb541d0 = &LAB_143c264cc;
  _DAT_14cb541d8 = 0x44a72000;
  DAT_14cb541dc = 1;
  DAT_14cb541c8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb541c8;
  atexit((_func_5014 *)&LAB_143c264d1);
  local_78 = (char *)CONCAT71(local_78._1_7_,1);
  local_88 = 0;
  FUN_140bd5914(&DAT_14cb541e8,L"r.TimeOfDay.InitForecastCurves",&local_78,
                L"If true, forecast curves are initialized so that the previous most recent forecast is executed."
               );
  atexit(FUN_143c269b5);
  DAT_14cb54260 = 0;
  _DAT_14cb54268 = 0;
  local_68 = 0;
  local_58 = &PTR_LAB_14a1795c0;
  local_50 = &LAB_143c30a24;
  local_78 = &DAT_14011fc1e;
  FUN_14617bb4a(&local_78);
  atexit((_func_5014 *)&LAB_143c26a23);
  _DAT_14cb542f0 = 0;
  uRam000000014cb542f8 = 0;
  _DAT_14cb54300 = 0;
  DAT_14cb54308 = 0;
  uRam000000014cb54310 = 0;
  FUN_1446ddda2(&DAT_14cb542f0,"OverridePropertyParameters",0);
  atexit((_func_5014 *)&LAB_143c26a28);
  _DAT_14cb54318 = 0;
  uRam000000014cb54320 = 0;
  _DAT_14cb54328 = 0;
  DAT_14cb54330 = 0;
  uRam000000014cb54338 = 0;
  FUN_1446ddda2(&DAT_14cb54318,"OverridePropertyParameters",0);
  atexit((_func_5014 *)&LAB_143c26a39);
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb54340);
  if (cVar1 == '\0') {
    _DAT_14cb54340 = 0;
    uRam000000014cb54348 = 0;
  }
  if (local_78 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_78._0_4_ = 0x461c4000;
  local_88 = 0;
  FUN_140a6b41e(&DAT_14cb54350,L"r.TimeOfDay.BypassTransitionDistance",&local_78,
                L"A change in player location that exceeds this distance between ticks will bypass zone transitions."
               );
  atexit(FUN_143c26a4a);
  local_78._0_4_ = 0xffffffff;
  local_88 = 0;
  FUN_14078dbce(&DAT_14cb54368,L"r.TimeOfDay.EnableForecasts",&local_78,
                L"-1: Setting on the world time of day actor is respected.0: Disables forecasts.1: Enables forecasts."
               );
  atexit(FUN_143c26a8f);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x41200000);
  local_88 = 0;
  FUN_140a6b41e(&DAT_14cb54380,L"r.TimeOfDay.MinimumCloudscapeTransitionTime",&local_78,
                L"Fallback minimum transition time (in seconds) for cloudscapes.");
  atexit(FUN_143c26ad4);
  local_78 = (char *)CONCAT71(local_78._1_7_,1);
  local_88 = 0;
  FUN_140bd5914(&DAT_14cb54398,L"r.TimeOfDay.EnableWeatherOverrideVolumes",&local_78,
                L"Enables or disables weather override volumes.");
  atexit(FUN_143c26b19);
  local_78 = "TimeOfDay";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cb543b0 = (ulonglong)uVar2;
  local_88 = 0;
  FUN_1412cc41e(&DAT_14cb543d0,L"FTimeOfDayManager",0,1);
  DAT_14cb54798 = 0;
  _DAT_14cb547a0 = 0;
  _DAT_14cb547a8 = 2;
  atexit(FUN_143c2f0bc);
  DAT_14cb543b8 = 0;
  _DAT_14cb543c0 = 0;
  _DAT_14cb543c8 = 2;
  atexit(FUN_143c2f0ed);
  local_78 = "time_of_day";
  local_70 = 0xb;
  local_6c = 0;
  uVar3 = FUN_14001a6c0(&local_78,1);
  FUN_141544bf8(&DAT_14cb543e8,uVar3,&DAT_149dfb77a,0x54);
  _DAT_14cb543e8 = &PTR_FUN_14afe2968;
  atexit((_func_5014 *)&LAB_143c2f11e);
  _DAT_14cb54764 = 0;
  _DAT_14cb5476c = 0;
  DAT_14cb54774 = 0;
  local_78._0_4_ = 1;
  local_88 = 0;
  FUN_14078dbce(&DAT_14cb54458,L"TimeOfDay.BlockUnoptimizedPropertyChanges",&local_78,
                L"0: Allow all property changes\n1: Blocks property changes that result in a significant performance hit"
               );
  atexit(FUN_143c30742);
  local_78._0_4_ = 0;
  local_88 = 0;
  FUN_14078dbce(&DAT_14cb54470,L"TimeOfDay.BlockDirectionalLightRotationChanges",&local_78,
                L"0: Allow directional light rotation property changes\n1: Blocks directional light rotation property changes"
               );
  atexit(FUN_143c30787);
  local_78._0_4_ = 0;
  local_88 = 0;
  FUN_140a6b41e(&DAT_14cb54488,L"TimeOfDay.ThrottleDirectionalLightRotationChanges",&local_78,
                L" 0: No throttle\n>0: Seconds between allowing a rotation change for the directional light"
               );
  atexit(FUN_143c307cc);
  local_78 = (char *)((ulonglong)local_78._4_4_ << 0x20);
  local_88 = 0;
  FUN_14078dbce(&DAT_14cb544a0,L"TimeOfDay.DisableMoonDirectionalLightRotationChanges",&local_78,
                L"0: Changes to moonlight rotation are enabled.\n1: Changes to moonlight rotation are disabled."
               );
  atexit(FUN_143c30811);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c321f1 FUN_143c321f1 body=109 status=ok
// SIG undefined FUN_143c321f1(void)

void FUN_143c321f1(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afe3ef2;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cb547c0,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c32260 FUN_143c32260 body=123 status=ok
// SIG undefined FUN_143c32260(void)

undefined8 FUN_143c32260(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[7] = 0;
  *param_3 = 0x800030040;
  iVar1 = FUN_1424ffeb0(param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)param_3 = 0x2003c;
    *(byte *)((longlong)param_3 + 4) = *(byte *)((longlong)param_3 + 4) | 8;
    iVar1 = FUN_1424ffeb0(param_2,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)param_3 = 0x10024;
      *(byte *)((longlong)param_3 + 4) = *(byte *)((longlong)param_3 + 4) | 8;
      uVar2 = FUN_1424ffeb0(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143c322dc FUN_143c322dc body=103 status=ok
// SIG undefined FUN_143c322dc(void)

ulonglong FUN_143c322dc(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar1 = FUN_1412968b8();
  FUN_143c32260(uVar1,param_1,&local_58);
  uVar1 = FUN_1412968b8();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),local_58._4_1_) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c32344 FUN_143c32344 body=95 status=ok
// SIG undefined FUN_143c32344(void)

bool FUN_143c32344(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1412968b8();
  local_14 = 2;
  FUN_142500120(param_1);
  FUN_1412968b8();
  iVar1 = FUN_1425002c0(param_1,1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c323a4 FUN_143c323a4 body=93 status=ok
// SIG undefined FUN_143c323a4(void)

bool FUN_143c323a4(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = FUN_1412968b8();
  FUN_143c32402(uVar2,param_1);
  FUN_1412968b8();
  local_14 = 1;
  iVar1 = FUN_142500120(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c32402 FUN_143c32402 body=116 status=ok
// SIG undefined FUN_143c32402(void)

undefined8 FUN_143c32402(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  uStack_1c = 0;
  local_34 = 0;
  uStack_2c = 0;
  local_14 = 0;
  local_44 = 0x20034;
  uStack_40 = 1;
  uStack_3c = 2;
  uStack_38 = 0;
  iVar1 = FUN_1424fff80(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_44 = 0x10028;
    uVar2 = FUN_1424fff80(param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c32478 FUN_143c32478 body=78 status=ok
// SIG undefined FUN_143c32478(void)

bool FUN_143c32478(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1412968b8();
  local_14 = 1;
  iVar1 = FUN_142500120(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c324c8 FUN_143c324c8 body=84 status=ok
// SIG undefined FUN_143c324c8(void)

bool FUN_143c324c8(undefined4 param_1)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1412968b8();
  FUN_1425001f0(param_1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c == 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c3251e FUN_143c3251e body=44 status=ok
// SIG undefined FUN_143c3251e(void)

bool FUN_143c3251e(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_1412968b8();
  *param_2 = 0x1001c;
  iVar1 = FUN_142500050(param_1,param_2);
  return iVar1 == 0;
}



// FUNCTION 143c3254a FUN_143c3254a body=42 status=ok
// SIG undefined FUN_143c3254a(void)

void FUN_143c3254a(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb547e8;
  if (DAT_14cb547e8 != 0) {
    FUN_142500a50();
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 143c32574 FUN_143c32574 body=109 status=ok
// SIG undefined FUN_143c32574(void)

void FUN_143c32574(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014afe3f20;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cb547e0,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c325e4 FUN_143c325e4 body=618 status=ok
// SIG undefined FUN_143c325e4(void)

void FUN_143c325e4(longlong *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined8 ****ppppuVar6;
  uint uVar7;
  wchar_t *_Str;
  undefined1 auStack_188 [44];
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char local_118 [128];
  char *local_98;
  char *local_90;
  int local_88;
  undefined8 ***local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar3 = FUN_1414ce356(param_1,&local_15c);
  uVar1 = local_15c;
  if (cVar3 != '\0') {
    local_118[0x30] = '\0';
    local_118[0x31] = '\0';
    local_118[0x32] = '\0';
    local_118[0x33] = '\0';
    local_118[0x34] = '\0';
    local_118[0x35] = '\0';
    local_118[0x36] = '\0';
    local_118[0x37] = '\0';
    local_118[0x38] = '\0';
    local_118[0x39] = '\0';
    local_118[0x3a] = '\0';
    local_118[0x3b] = '\0';
    local_118[0x3c] = '\0';
    local_118[0x3d] = '\0';
    local_118[0x3e] = '\0';
    local_118[0x3f] = '\0';
    local_118[0x20] = '\0';
    local_118[0x21] = '\0';
    local_118[0x22] = '\0';
    local_118[0x23] = '\0';
    local_118[0x24] = '\0';
    local_118[0x25] = '\0';
    local_118[0x26] = '\0';
    local_118[0x27] = '\0';
    local_118[0x28] = '\0';
    local_118[0x29] = '\0';
    local_118[0x2a] = '\0';
    local_118[0x2b] = '\0';
    local_118[0x2c] = '\0';
    local_118[0x2d] = '\0';
    local_118[0x2e] = '\0';
    local_118[0x2f] = '\0';
    local_118[0x10] = '\0';
    local_118[0x11] = '\0';
    local_118[0x12] = '\0';
    local_118[0x13] = '\0';
    local_118[0x14] = '\0';
    local_118[0x15] = '\0';
    local_118[0x16] = '\0';
    local_118[0x17] = '\0';
    local_118[0x18] = '\0';
    local_118[0x19] = '\0';
    local_118[0x1a] = '\0';
    local_118[0x1b] = '\0';
    local_118[0x1c] = '\0';
    local_118[0x1d] = '\0';
    local_118[0x1e] = '\0';
    local_118[0x1f] = '\0';
    local_118[0] = '\0';
    local_118[1] = '\0';
    local_118[2] = '\0';
    local_118[3] = '\0';
    local_118[4] = '\0';
    local_118[5] = '\0';
    local_118[6] = '\0';
    local_118[7] = '\0';
    local_118[8] = '\0';
    local_118[9] = '\0';
    local_118[10] = '\0';
    local_118[0xb] = '\0';
    local_118[0xc] = '\0';
    local_118[0xd] = '\0';
    local_118[0xe] = '\0';
    local_118[0xf] = '\0';
    uVar4 = FUN_1412968b8();
    FUN_143c32260(uVar4,uVar1,local_118);
    cVar3 = FUN_1414ce2ec(local_15c);
    if (cVar3 == '\0') {
      FUN_143c323a4(local_15c);
    }
    else {
      FUN_143c32344();
    }
  }
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_98 = (char *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_90 = (char *)0x0;
      local_88 = 0;
      goto LAB_143c3271c;
    }
  }
  local_98 = (char *)0x0;
  sVar5 = wcslen(_Str);
  local_88 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
  uVar7 = local_88 + 1;
  local_90 = (char *)0x0;
  if (0x80 < uVar7) {
    FUN_1446efa72(&local_98,0,uVar7,1);
    local_90 = local_98;
  }
  if (local_90 == (char *)0x0) {
    local_90 = local_118;
  }
  FUN_14475a98a(local_90,uVar7,_Str,(int)sVar5 + 1);
LAB_143c3271c:
  pcVar2 = local_90;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  sVar5 = strlen(local_90);
  FUN_140cd1a74(&local_78,pcVar2,sVar5);
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  ppppuVar6 = &local_78;
  if (0xf < uStack_60) {
    ppppuVar6 = (undefined8 ****)local_78;
  }
  FUN_1401d9f72(&local_138,ppppuVar6,local_68);
  cVar3 = FUN_14861010a(&local_138);
  if (cVar3 != '\0') {
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    ppppuVar6 = (undefined8 ****)local_78;
    if (uStack_60 < 0x10) {
      ppppuVar6 = &local_78;
    }
    FUN_1401d9f72(&local_158,ppppuVar6,local_68);
    FUN_14860fbfc(&local_158);
  }
  FUN_1401d9a90(&local_78);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143c3285e FUN_143c3285e body=150 status=ok
// SIG undefined FUN_143c3285e(void)

void FUN_143c3285e(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/Hdr10PlusGpuApi",0,0,&PTR_FUN_14afe4440);
  local_28 = 0x800000014afe44f2;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cb54830,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c328f8 FUN_143c328f8 body=55 status=ok
// SIG undefined FUN_143c328f8(void)

void FUN_143c328f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54860 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54860 = FUN_14171c317(FUN_1464adfd2,uVar1,L"EStartConditionFailBehavior");
  }
  return;
}



// FUNCTION 143c3292f FUN_143c3292f body=55 status=ok
// SIG undefined FUN_143c3292f(void)

void FUN_143c3292f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54878 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54878 = FUN_14171c317(FUN_1464ae001,uVar1,L"EAdditionalAreaTags");
  }
  return;
}


