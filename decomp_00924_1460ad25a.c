// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460ad25a FUN_1460ad25a body=116 status=ok
// SIG undefined FUN_1460ad25a(void)

void FUN_1460ad25a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1460ad2ce FUN_1460ad2ce body=300 status=ok
// SIG undefined FUN_1460ad2ce(void)

void FUN_1460ad2ce(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      local_70 = 0;
      local_68 = 0x34001;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1405c5fa2();
      local_48 = &DAT_14cb769e8;
      local_40 = 0;
      uStack_38 = 0;
      local_50 = &PTR_FUN_14b0394b0;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_1);
      }
      local_78 = 5;
      local_90 = 0;
      local_98 = 0x3e4ccccd;
      local_80 = param_1;
      FUN_1415d43c2(&local_80,0,0,0x3dcccccd);
      local_50 = (undefined **)&DAT_14a171d50;
      uVar1 = uStack_38 >> 0x20;
      uStack_38 = uStack_38 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        FUN_140115c12(&local_40,0);
      }
      local_48 = (undefined *)0x0;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ad3fc FUN_1460ad3fc body=284 status=ok
// SIG undefined FUN_1460ad3fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ad3fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd7f8) {
    FUN_144b3d300(&DAT_14c9dd7f8);
    if (DAT_14c9dd7f8 == -1) {
      FUN_1460ad518();
      FUN_140db5666(&DAT_14c9dd750,0,&DAT_14c9dd6e8,L"FHdrCustomResolve4xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve4xPS",3,1,
                    FUN_14719914c,FUN_1471990f4,&LAB_1471990f0,&LAB_1471990ec,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9dd750 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8cdec);
      _Init_thread_footer(&DAT_14c9dd7f8);
    }
  }
  return &DAT_14c9dd750;
}



// FUNCTION 1460ad518 FUN_1460ad518 body=206 status=ok
// SIG undefined FUN_1460ad518(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ad518(void)

{
  if ((DAT_14c9dd74f & 2) == 0) {
    DAT_14c9dd74f = DAT_14c9dd74f | 2;
    _DAT_14c9dd6f0 = L"FHdrCustomResolve4xPS";
    _DAT_14c9dd708 = FUN_146826540;
    _DAT_14c9dd710 = FUN_146825d77;
    _DAT_14c9dd718 = FUN_146825fd6;
    _DAT_14c9dd720 = FUN_1407e02ea;
    _DAT_14c9dd728 = FUN_146826273;
    _DAT_14c9dd700 = FUN_1471990be;
    _DAT_14c9dd740 = 0xffffffff000000e8;
    _DAT_14c9dd748 = 8;
    DAT_14c9dd74c = 0;
    _DAT_14c9dd730 = &LAB_1471990e8;
    FUN_1460ad5e6();
    FUN_1407e00cc(&DAT_14c9dd6e8);
  }
  return &DAT_14c9dd6e8;
}



// FUNCTION 1460ad5e6 FUN_1460ad5e6 body=133 status=ok
// SIG undefined FUN_1460ad5e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ad5e6(void)

{
  _DAT_14c9e16f0 = L"BASE";
  DAT_14c9e171a = 4;
  FUN_145d1b2ce();
  _DAT_14c9e1700 = DAT_14c9dd6f8;
  _DAT_14c9e16f8 = &DAT_14c9dd5c0;
  _DAT_14c9e1708 = &LAB_14682652b;
  DAT_14c9dd6f8 = &DAT_14c9e16f0;
  DAT_14c9dd74d = DAT_14c9dd74d + '\x01';
  _DAT_14c9e1710 = 0x100000000;
  if (DAT_14c9dd624 != '\0') {
    DAT_14c9dd74e = DAT_14c9dd74e + '\x01';
  }
  return;
}



// FUNCTION 1460ad66c FUN_1460ad66c body=284 status=ok
// SIG undefined FUN_1460ad66c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ad66c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd920) {
    FUN_144b3d300(&DAT_14c9dd920);
    if (DAT_14c9dd920 == -1) {
      FUN_1460ad788();
      FUN_140db5666(&DAT_14c9dd878,0,&DAT_14c9dd810,L"FHdrCustomResolve8xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve8xPS",3,1,
                    FUN_14719920c,FUN_1471991b4,&LAB_1471991b0,&LAB_1471991ac,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9dd878 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8cdf8);
      _Init_thread_footer(&DAT_14c9dd920);
    }
  }
  return &DAT_14c9dd878;
}



// FUNCTION 1460ad788 FUN_1460ad788 body=206 status=ok
// SIG undefined FUN_1460ad788(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ad788(void)

{
  if ((DAT_14c9dd877 & 2) == 0) {
    DAT_14c9dd877 = DAT_14c9dd877 | 2;
    _DAT_14c9dd818 = L"FHdrCustomResolve8xPS";
    _DAT_14c9dd830 = FUN_146826540;
    _DAT_14c9dd838 = FUN_146825d77;
    _DAT_14c9dd840 = FUN_146825fd6;
    _DAT_14c9dd848 = FUN_1407e02ea;
    _DAT_14c9dd850 = FUN_146826273;
    _DAT_14c9dd828 = FUN_14719917e;
    _DAT_14c9dd868 = 0xffffffff000000e8;
    _DAT_14c9dd870 = 8;
    DAT_14c9dd874 = 0;
    _DAT_14c9dd858 = &LAB_1471991a8;
    FUN_1460ad856();
    FUN_1407e00cc(&DAT_14c9dd810);
  }
  return &DAT_14c9dd810;
}



// FUNCTION 1460ad856 FUN_1460ad856 body=133 status=ok
// SIG undefined FUN_1460ad856(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ad856(void)

{
  _DAT_14c9e1720 = L"BASE";
  DAT_14c9e174a = 4;
  FUN_145d1b2ce();
  _DAT_14c9e1730 = DAT_14c9dd820;
  _DAT_14c9e1728 = &DAT_14c9dd5c0;
  _DAT_14c9e1738 = &LAB_14682652b;
  DAT_14c9dd820 = &DAT_14c9e1720;
  DAT_14c9dd875 = DAT_14c9dd875 + '\x01';
  _DAT_14c9e1740 = 0x100000000;
  if (DAT_14c9dd624 != '\0') {
    DAT_14c9dd876 = DAT_14c9dd876 + '\x01';
  }
  return;
}



// FUNCTION 1460ad8dc FUN_1460ad8dc body=284 status=ok
// SIG undefined FUN_1460ad8dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ad8dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dddc0) {
    FUN_144b3d300(&DAT_14c9dddc0);
    if (DAT_14c9dddc0 == -1) {
      FUN_1460ad9f8();
      FUN_140db5666(&DAT_14c9ddd18,0,&DAT_14c9ddcb0,L"FHdrCustomResolveArrayVS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolveVS",0,1,
                    FUN_14719944e,FUN_147199426,FUN_1462ce37e,&LAB_147199422,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14c9ddd18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce28);
      _Init_thread_footer(&DAT_14c9dddc0);
    }
  }
  return &DAT_14c9ddd18;
}



// FUNCTION 1460ad9f8 FUN_1460ad9f8 body=206 status=ok
// SIG undefined FUN_1460ad9f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ad9f8(void)

{
  if ((DAT_14c9ddd17 & 2) == 0) {
    DAT_14c9ddd17 = DAT_14c9ddd17 | 2;
    _DAT_14c9ddcb8 = L"FHdrCustomResolveArrayVS";
    _DAT_14c9ddcd0 = FUN_146826540;
    _DAT_14c9ddcd8 = FUN_146825d77;
    _DAT_14c9ddce0 = FUN_146825fd6;
    _DAT_14c9ddce8 = FUN_1407e02ea;
    _DAT_14c9ddcf0 = FUN_146826273;
    _DAT_14c9ddcc8 = FUN_1471993f4;
    _DAT_14c9ddd08 = 0xffffffff000000e0;
    _DAT_14c9ddd10 = 8;
    DAT_14c9ddd14 = 0;
    _DAT_14c9ddcf8 = &LAB_14719941e;
    FUN_1460adac6();
    FUN_1407e00cc(&DAT_14c9ddcb0);
  }
  return &DAT_14c9ddcb0;
}



// FUNCTION 1460adac6 FUN_1460adac6 body=133 status=ok
// SIG undefined FUN_1460adac6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460adac6(void)

{
  _DAT_14c9e17e0 = L"BASE";
  DAT_14c9e180a = 4;
  FUN_145ec85ba();
  _DAT_14c9e17f0 = DAT_14c9ddcc0;
  _DAT_14c9e17e8 = &DAT_14c9dd498;
  _DAT_14c9e17f8 = &LAB_14682652b;
  DAT_14c9ddcc0 = &DAT_14c9e17e0;
  DAT_14c9ddd15 = DAT_14c9ddd15 + '\x01';
  _DAT_14c9e1800 = 0x100000000;
  if (DAT_14c9dd4fc != '\0') {
    DAT_14c9ddd16 = DAT_14c9ddd16 + '\x01';
  }
  return;
}



// FUNCTION 1460adb4c FUN_1460adb4c body=284 status=ok
// SIG undefined FUN_1460adb4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460adb4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9de010) {
    FUN_144b3d300(&DAT_14c9de010);
    if (DAT_14c9de010 == -1) {
      FUN_1460adc68();
      FUN_140db5666(&DAT_14c9ddf68,0,&DAT_14c9ddf00,L"FHdrCustomResolveArray4xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve4xPS",3,1,
                    FUN_1471995b4,FUN_14719955c,FUN_1462ce40e,&LAB_147199558,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9ddf68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce40);
      _Init_thread_footer(&DAT_14c9de010);
    }
  }
  return &DAT_14c9ddf68;
}



// FUNCTION 1460adc68 FUN_1460adc68 body=206 status=ok
// SIG undefined FUN_1460adc68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460adc68(void)

{
  if ((DAT_14c9ddf67 & 2) == 0) {
    DAT_14c9ddf67 = DAT_14c9ddf67 | 2;
    _DAT_14c9ddf08 = L"FHdrCustomResolveArray4xPS";
    _DAT_14c9ddf20 = FUN_146826540;
    _DAT_14c9ddf28 = FUN_146825d77;
    _DAT_14c9ddf30 = FUN_146825fd6;
    _DAT_14c9ddf38 = FUN_1407e02ea;
    _DAT_14c9ddf40 = FUN_146826273;
    _DAT_14c9ddf18 = FUN_14719952a;
    _DAT_14c9ddf58 = 0xffffffff000000e8;
    _DAT_14c9ddf60 = 8;
    DAT_14c9ddf64 = 0;
    _DAT_14c9ddf48 = &LAB_147199554;
    FUN_1460add36();
    FUN_1407e00cc(&DAT_14c9ddf00);
  }
  return &DAT_14c9ddf00;
}



// FUNCTION 1460add36 FUN_1460add36 body=133 status=ok
// SIG undefined FUN_1460add36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460add36(void)

{
  _DAT_14c9e1840 = L"BASE";
  DAT_14c9e186a = 4;
  FUN_145d54b3e();
  _DAT_14c9e1850 = DAT_14c9ddf10;
  _DAT_14c9e1848 = &DAT_14c9dddd8;
  _DAT_14c9e1858 = &LAB_14682652b;
  DAT_14c9ddf10 = &DAT_14c9e1840;
  DAT_14c9ddf65 = DAT_14c9ddf65 + '\x01';
  _DAT_14c9e1860 = 0x100000000;
  if (DAT_14c9dde3c != '\0') {
    DAT_14c9ddf66 = DAT_14c9ddf66 + '\x01';
  }
  return;
}



// FUNCTION 1460addbc FUN_1460addbc body=284 status=ok
// SIG undefined FUN_1460addbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460addbc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9de138) {
    FUN_144b3d300(&DAT_14c9de138);
    if (DAT_14c9de138 == -1) {
      FUN_1460aded8();
      FUN_140db5666(&DAT_14c9de090,0,&DAT_14c9de028,L"FHdrCustomResolveArray8xPS",
                    L"/Engine/Private/HdrCustomResolveShaders.usf",L"HdrCustomResolve8xPS",3,1,
                    FUN_147199670,FUN_147199618,FUN_1462ce456,&LAB_147199614,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14c9de090 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8ce4c);
      _Init_thread_footer(&DAT_14c9de138);
    }
  }
  return &DAT_14c9de090;
}



// FUNCTION 1460aded8 FUN_1460aded8 body=206 status=ok
// SIG undefined FUN_1460aded8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aded8(void)

{
  if ((DAT_14c9de08f & 2) == 0) {
    DAT_14c9de08f = DAT_14c9de08f | 2;
    _DAT_14c9de030 = L"FHdrCustomResolveArray8xPS";
    _DAT_14c9de048 = FUN_146826540;
    _DAT_14c9de050 = FUN_146825d77;
    _DAT_14c9de058 = FUN_146825fd6;
    _DAT_14c9de060 = FUN_1407e02ea;
    _DAT_14c9de068 = FUN_146826273;
    _DAT_14c9de040 = FUN_1471995e6;
    _DAT_14c9de080 = 0xffffffff000000e8;
    _DAT_14c9de088 = 8;
    DAT_14c9de08c = 0;
    _DAT_14c9de070 = &LAB_147199610;
    FUN_1460adfa6();
    FUN_1407e00cc(&DAT_14c9de028);
  }
  return &DAT_14c9de028;
}



// FUNCTION 1460adfa6 FUN_1460adfa6 body=133 status=ok
// SIG undefined FUN_1460adfa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460adfa6(void)

{
  _DAT_14c9e1870 = L"BASE";
  DAT_14c9e189a = 4;
  FUN_145d54b3e();
  _DAT_14c9e1880 = DAT_14c9de038;
  _DAT_14c9e1878 = &DAT_14c9dddd8;
  _DAT_14c9e1888 = &LAB_14682652b;
  DAT_14c9de038 = &DAT_14c9e1870;
  DAT_14c9de08d = DAT_14c9de08d + '\x01';
  _DAT_14c9e1890 = 0x100000000;
  if (DAT_14c9dde3c != '\0') {
    DAT_14c9de08e = DAT_14c9de08e + '\x01';
  }
  return;
}



// FUNCTION 1460ae02c FUN_1460ae02c body=295 status=ok
// SIG undefined FUN_1460ae02c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae02c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca163b8) {
    FUN_144b3d300(&DAT_14ca163b8);
    if (DAT_14ca163b8 == -1) {
      FUN_145c7735c();
      FUN_1460ae154();
      FUN_140db5666(&DAT_14ca16310,1,&DAT_14ca162a8,L"FHWRasterizeVS",
                    L"/Engine/Private/Nanite/NaniteRasterizer.usf",L"HWRasterizeVS",0,0x100,
                    FUN_147254294,FUN_147254234,FUN_141771a1c,&LAB_147254230,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,&DAT_14ca184e0);
      _DAT_14ca16310 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a669);
      _Init_thread_footer(&DAT_14ca163b8);
    }
  }
  return &DAT_14ca16310;
}



// FUNCTION 1460ae154 FUN_1460ae154 body=205 status=ok
// SIG undefined FUN_1460ae154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ae154(void)

{
  if ((DAT_14ca1630f & 2) == 0) {
    DAT_14ca1630f = DAT_14ca1630f | 2;
    _DAT_14ca162b0 = L"FHWRasterizeVS";
    _DAT_14ca162c8 = FUN_146826540;
    _DAT_14ca162d0 = FUN_146825d77;
    _DAT_14ca162d8 = FUN_146825fd6;
    _DAT_14ca162e0 = FUN_1407e02ea;
    _DAT_14ca162e8 = FUN_146826273;
    _DAT_14ca162c0 = FUN_1472541f4;
    _DAT_14ca16300 = 0xffffffff000000f8;
    _DAT_14ca16308 = 8;
    DAT_14ca1630c = 0;
    _DAT_14ca162f0 = &LAB_14725422c;
    FUN_1460ae222();
    FUN_1407e00cc(&DAT_14ca162a8);
    return;
  }
  return;
}



// FUNCTION 1460ae222 FUN_1460ae222 body=123 status=ok
// SIG undefined FUN_1460ae222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ae222(void)

{
  _DAT_14ca19460 = L"BASE";
  DAT_14ca1948a = 4;
  _DAT_14ca19468 = FUN_141526006();
  _DAT_14ca19470 = DAT_14ca162b8;
  _DAT_14ca19478 = &LAB_14682652b;
  DAT_14ca162b8 = &DAT_14ca19460;
  DAT_14ca1630d = DAT_14ca1630d + '\x01';
  _DAT_14ca19480 = 0x100000000;
  if (*(char *)(_DAT_14ca19468 + 100) != '\0') {
    DAT_14ca1630e = DAT_14ca1630e + '\x01';
  }
  return;
}



// FUNCTION 1460ae29e FUN_1460ae29e body=284 status=ok
// SIG undefined FUN_1460ae29e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae29e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8c8b8) {
    FUN_144b3d300(&DAT_14ca8c8b8);
    if (DAT_14ca8c8b8 == -1) {
      FUN_1460ae3ba();
      FUN_140db5666(&DAT_14ca8c810,0,&DAT_14ca8c7a8,L"FNULLPS",
                    L"/Engine/Private/NullPixelShader.usf",L"Main",3,1,FUN_14741c85c,FUN_14741c834,
                    &LAB_14741c830,&LAB_14741c82c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca8c810 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f5f77);
      _Init_thread_footer(&DAT_14ca8c8b8);
    }
  }
  return &DAT_14ca8c810;
}



// FUNCTION 1460ae3ba FUN_1460ae3ba body=206 status=ok
// SIG undefined FUN_1460ae3ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae3ba(void)

{
  if ((DAT_14ca8c80f & 2) == 0) {
    DAT_14ca8c80f = DAT_14ca8c80f | 2;
    _DAT_14ca8c7b0 = L"FNULLPS";
    _DAT_14ca8c7c8 = FUN_146826540;
    _DAT_14ca8c7d0 = FUN_146825d77;
    _DAT_14ca8c7d8 = FUN_146825fd6;
    _DAT_14ca8c7e0 = FUN_1407e02ea;
    _DAT_14ca8c7e8 = FUN_146826273;
    _DAT_14ca8c7c0 = FUN_14741c7fc;
    _DAT_14ca8c800 = 0xffffffff000000e0;
    _DAT_14ca8c808 = 8;
    DAT_14ca8c80c = 0;
    _DAT_14ca8c7f0 = &LAB_14741c828;
    FUN_1460ae488();
    FUN_1407e00cc(&DAT_14ca8c7a8);
  }
  return &DAT_14ca8c7a8;
}



// FUNCTION 1460ae488 FUN_1460ae488 body=133 status=ok
// SIG undefined FUN_1460ae488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ae488(void)

{
  _DAT_14ca94488 = L"BASE";
  DAT_14ca944b2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94498 = DAT_14ca8c7b8;
  _DAT_14ca94490 = &DAT_14ca8c6c8;
  _DAT_14ca944a0 = &LAB_14682652b;
  DAT_14ca8c7b8 = &DAT_14ca94488;
  DAT_14ca8c80d = DAT_14ca8c80d + '\x01';
  _DAT_14ca944a8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8c80e = DAT_14ca8c80e + '\x01';
  }
  return;
}



// FUNCTION 1460ae50e FUN_1460ae50e body=284 status=ok
// SIG undefined FUN_1460ae50e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae50e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8d430) {
    FUN_144b3d300(&DAT_14ca8d430);
    if (DAT_14ca8d430 == -1) {
      FUN_1460ae62a();
      FUN_140db5666(&DAT_14ca8d388,0,&DAT_14ca8d320,L"FMediaShadersVS",
                    L"/Engine/Private/MediaShaders.usf",L"MainVertexShader",0,1,FUN_14741d084,
                    FUN_14741d05c,&LAB_14741d058,&LAB_14741d054,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8d388 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f711d);
      _Init_thread_footer(&DAT_14ca8d430);
    }
  }
  return &DAT_14ca8d388;
}



// FUNCTION 1460ae62a FUN_1460ae62a body=206 status=ok
// SIG undefined FUN_1460ae62a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae62a(void)

{
  if ((DAT_14ca8d387 & 2) == 0) {
    DAT_14ca8d387 = DAT_14ca8d387 | 2;
    _DAT_14ca8d328 = L"FMediaShadersVS";
    _DAT_14ca8d340 = FUN_146826540;
    _DAT_14ca8d348 = FUN_146825d77;
    _DAT_14ca8d350 = FUN_146825fd6;
    _DAT_14ca8d358 = FUN_1407e02ea;
    _DAT_14ca8d360 = FUN_146826273;
    _DAT_14ca8d338 = FUN_14741d024;
    _DAT_14ca8d378 = 0xffffffff000000e0;
    _DAT_14ca8d380 = 8;
    DAT_14ca8d384 = 0;
    _DAT_14ca8d368 = &LAB_14741d050;
    FUN_1460ae6f8();
    FUN_1407e00cc(&DAT_14ca8d320);
  }
  return &DAT_14ca8d320;
}



// FUNCTION 1460ae6f8 FUN_1460ae6f8 body=133 status=ok
// SIG undefined FUN_1460ae6f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ae6f8(void)

{
  _DAT_14ca94548 = L"BASE";
  DAT_14ca94572 = 4;
  FUN_140b35ae4();
  _DAT_14ca94558 = DAT_14ca8d330;
  _DAT_14ca94550 = &DAT_14ca8c6c8;
  _DAT_14ca94560 = &LAB_14682652b;
  DAT_14ca8d330 = &DAT_14ca94548;
  DAT_14ca8d385 = DAT_14ca8d385 + '\x01';
  _DAT_14ca94568 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8d386 = DAT_14ca8d386 + '\x01';
  }
  return;
}



// FUNCTION 1460ae77e FUN_1460ae77e body=284 status=ok
// SIG undefined FUN_1460ae77e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae77e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8d7b0) {
    FUN_144b3d300(&DAT_14ca8d7b0);
    if (DAT_14ca8d7b0 == -1) {
      FUN_1460ae89a();
      FUN_140db5666(&DAT_14ca8d708,0,&DAT_14ca8d6a0,L"FBMPConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"BMPConvertPS",3,1,FUN_14741d25c,
                    FUN_14741d234,&LAB_14741d230,&LAB_14741d22c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8d708 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f714d);
      _Init_thread_footer(&DAT_14ca8d7b0);
    }
  }
  return &DAT_14ca8d708;
}



// FUNCTION 1460ae89a FUN_1460ae89a body=206 status=ok
// SIG undefined FUN_1460ae89a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae89a(void)

{
  if ((DAT_14ca8d707 & 2) == 0) {
    DAT_14ca8d707 = DAT_14ca8d707 | 2;
    _DAT_14ca8d6a8 = L"FBMPConvertPS";
    _DAT_14ca8d6c0 = FUN_146826540;
    _DAT_14ca8d6c8 = FUN_146825d77;
    _DAT_14ca8d6d0 = FUN_146825fd6;
    _DAT_14ca8d6d8 = FUN_1407e02ea;
    _DAT_14ca8d6e0 = FUN_146826273;
    _DAT_14ca8d6b8 = FUN_14741d1fc;
    _DAT_14ca8d6f8 = 0xffffffff000000e0;
    _DAT_14ca8d700 = 8;
    DAT_14ca8d704 = 0;
    _DAT_14ca8d6e8 = &LAB_14741d228;
    FUN_1460ae968();
    FUN_1407e00cc(&DAT_14ca8d6a0);
  }
  return &DAT_14ca8d6a0;
}



// FUNCTION 1460ae968 FUN_1460ae968 body=133 status=ok
// SIG undefined FUN_1460ae968(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ae968(void)

{
  _DAT_14ca945a8 = L"BASE";
  DAT_14ca945d2 = 4;
  FUN_140b35ae4();
  _DAT_14ca945b8 = DAT_14ca8d6b0;
  _DAT_14ca945b0 = &DAT_14ca8c6c8;
  _DAT_14ca945c0 = &LAB_14682652b;
  DAT_14ca8d6b0 = &DAT_14ca945a8;
  DAT_14ca8d705 = DAT_14ca8d705 + '\x01';
  _DAT_14ca945c8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8d706 = DAT_14ca8d706 + '\x01';
  }
  return;
}



// FUNCTION 1460ae9ee FUN_1460ae9ee body=284 status=ok
// SIG undefined FUN_1460ae9ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ae9ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8d970) {
    FUN_144b3d300(&DAT_14ca8d970);
    if (DAT_14ca8d970 == -1) {
      FUN_1460aeb0a();
      FUN_140db5666(&DAT_14ca8d8c8,0,&DAT_14ca8d860,L"FNV12ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"NV12ConvertPS",3,1,FUN_14741d576,
                    FUN_14741d54e,&LAB_14741d54a,&LAB_14741d546,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8d8c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f725a);
      _Init_thread_footer(&DAT_14ca8d970);
    }
  }
  return &DAT_14ca8d8c8;
}



// FUNCTION 1460aeb0a FUN_1460aeb0a body=206 status=ok
// SIG undefined FUN_1460aeb0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aeb0a(void)

{
  if ((DAT_14ca8d8c7 & 2) == 0) {
    DAT_14ca8d8c7 = DAT_14ca8d8c7 | 2;
    _DAT_14ca8d868 = L"FNV12ConvertPS";
    _DAT_14ca8d880 = FUN_146826540;
    _DAT_14ca8d888 = FUN_146825d77;
    _DAT_14ca8d890 = FUN_146825fd6;
    _DAT_14ca8d898 = FUN_1407e02ea;
    _DAT_14ca8d8a0 = FUN_146826273;
    _DAT_14ca8d878 = FUN_14741d516;
    _DAT_14ca8d8b8 = 0xffffffff000000e0;
    _DAT_14ca8d8c0 = 8;
    DAT_14ca8d8c4 = 0;
    _DAT_14ca8d8a8 = &LAB_14741d542;
    FUN_1460aebd8();
    FUN_1407e00cc(&DAT_14ca8d860);
  }
  return &DAT_14ca8d860;
}



// FUNCTION 1460aebd8 FUN_1460aebd8 body=133 status=ok
// SIG undefined FUN_1460aebd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aebd8(void)

{
  _DAT_14ca945d8 = L"BASE";
  DAT_14ca94602 = 4;
  FUN_140b35ae4();
  _DAT_14ca945e8 = DAT_14ca8d870;
  _DAT_14ca945e0 = &DAT_14ca8c6c8;
  _DAT_14ca945f0 = &LAB_14682652b;
  DAT_14ca8d870 = &DAT_14ca945d8;
  DAT_14ca8d8c5 = DAT_14ca8d8c5 + '\x01';
  _DAT_14ca945f8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8d8c6 = DAT_14ca8d8c6 + '\x01';
  }
  return;
}



// FUNCTION 1460aec5e FUN_1460aec5e body=284 status=ok
// SIG undefined FUN_1460aec5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aec5e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8db30) {
    FUN_144b3d300(&DAT_14ca8db30);
    if (DAT_14ca8db30 == -1) {
      FUN_1460aed7a();
      FUN_140db5666(&DAT_14ca8da88,0,&DAT_14ca8da20,L"FNV12ConvertAsBytesPS",
                    L"/Engine/Private/MediaShaders.usf",L"NV12ConvertAsBytesPS",3,1,FUN_14741d92c,
                    FUN_14741d904,&LAB_14741d900,&LAB_14741d8fc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8da88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7366);
      _Init_thread_footer(&DAT_14ca8db30);
    }
  }
  return &DAT_14ca8da88;
}



// FUNCTION 1460aed7a FUN_1460aed7a body=206 status=ok
// SIG undefined FUN_1460aed7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aed7a(void)

{
  if ((DAT_14ca8da87 & 2) == 0) {
    DAT_14ca8da87 = DAT_14ca8da87 | 2;
    _DAT_14ca8da28 = L"FNV12ConvertAsBytesPS";
    _DAT_14ca8da40 = FUN_146826540;
    _DAT_14ca8da48 = FUN_146825d77;
    _DAT_14ca8da50 = FUN_146825fd6;
    _DAT_14ca8da58 = FUN_1407e02ea;
    _DAT_14ca8da60 = FUN_146826273;
    _DAT_14ca8da38 = FUN_14741d8cc;
    _DAT_14ca8da78 = 0xffffffff000000e0;
    _DAT_14ca8da80 = 8;
    DAT_14ca8da84 = 0;
    _DAT_14ca8da68 = &LAB_14741d8f8;
    FUN_1460aee48();
    FUN_1407e00cc(&DAT_14ca8da20);
  }
  return &DAT_14ca8da20;
}



// FUNCTION 1460aee48 FUN_1460aee48 body=133 status=ok
// SIG undefined FUN_1460aee48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aee48(void)

{
  _DAT_14ca94608 = L"BASE";
  DAT_14ca94632 = 4;
  FUN_140b35ae4();
  _DAT_14ca94618 = DAT_14ca8da30;
  _DAT_14ca94610 = &DAT_14ca8c6c8;
  _DAT_14ca94620 = &LAB_14682652b;
  DAT_14ca8da30 = &DAT_14ca94608;
  DAT_14ca8da85 = DAT_14ca8da85 + '\x01';
  _DAT_14ca94628 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8da86 = DAT_14ca8da86 + '\x01';
  }
  return;
}



// FUNCTION 1460aeece FUN_1460aeece body=284 status=ok
// SIG undefined FUN_1460aeece(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aeece(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e3f0) {
    FUN_144b3d300(&DAT_14ca8e3f0);
    if (DAT_14ca8e3f0 == -1) {
      FUN_1460aefea();
      FUN_140db5666(&DAT_14ca8e348,0,&DAT_14ca8e2e0,L"FRGBConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"RGBConvertPS",3,1,FUN_14741e5d6,
                    FUN_14741e5ae,&LAB_14741e5aa,&LAB_14741e5a6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8e348 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f76ba);
      _Init_thread_footer(&DAT_14ca8e3f0);
    }
  }
  return &DAT_14ca8e348;
}



// FUNCTION 1460aefea FUN_1460aefea body=206 status=ok
// SIG undefined FUN_1460aefea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aefea(void)

{
  if ((DAT_14ca8e347 & 2) == 0) {
    DAT_14ca8e347 = DAT_14ca8e347 | 2;
    _DAT_14ca8e2e8 = L"FRGBConvertPS";
    _DAT_14ca8e300 = FUN_146826540;
    _DAT_14ca8e308 = FUN_146825d77;
    _DAT_14ca8e310 = FUN_146825fd6;
    _DAT_14ca8e318 = FUN_1407e02ea;
    _DAT_14ca8e320 = FUN_146826273;
    _DAT_14ca8e2f8 = FUN_14741e576;
    _DAT_14ca8e338 = 0xffffffff000000e0;
    _DAT_14ca8e340 = 8;
    DAT_14ca8e344 = 0;
    _DAT_14ca8e328 = &LAB_14741e5a2;
    FUN_1460af0b8();
    FUN_1407e00cc(&DAT_14ca8e2e0);
  }
  return &DAT_14ca8e2e0;
}



// FUNCTION 1460af0b8 FUN_1460af0b8 body=133 status=ok
// SIG undefined FUN_1460af0b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460af0b8(void)

{
  _DAT_14ca946f8 = L"BASE";
  DAT_14ca94722 = 4;
  FUN_140b35ae4();
  _DAT_14ca94708 = DAT_14ca8e2f0;
  _DAT_14ca94700 = &DAT_14ca8c6c8;
  _DAT_14ca94710 = &LAB_14682652b;
  DAT_14ca8e2f0 = &DAT_14ca946f8;
  DAT_14ca8e345 = DAT_14ca8e345 + '\x01';
  _DAT_14ca94718 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8e346 = DAT_14ca8e346 + '\x01';
  }
  return;
}



// FUNCTION 1460af13e FUN_1460af13e body=284 status=ok
// SIG undefined FUN_1460af13e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af13e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e5b0) {
    FUN_144b3d300(&DAT_14ca8e5b0);
    if (DAT_14ca8e5b0 == -1) {
      FUN_1460af25a();
      FUN_140db5666(&DAT_14ca8e508,0,&DAT_14ca8e4a0,L"FYCoCgConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YCoCgConvertPS",3,1,FUN_14741e940,
                    FUN_14741e918,&LAB_14741e914,&LAB_14741e910,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8e508 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f77c6);
      _Init_thread_footer(&DAT_14ca8e5b0);
    }
  }
  return &DAT_14ca8e508;
}



// FUNCTION 1460af25a FUN_1460af25a body=206 status=ok
// SIG undefined FUN_1460af25a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af25a(void)

{
  if ((DAT_14ca8e507 & 2) == 0) {
    DAT_14ca8e507 = DAT_14ca8e507 | 2;
    _DAT_14ca8e4a8 = L"FYCoCgConvertPS";
    _DAT_14ca8e4c0 = FUN_146826540;
    _DAT_14ca8e4c8 = FUN_146825d77;
    _DAT_14ca8e4d0 = FUN_146825fd6;
    _DAT_14ca8e4d8 = FUN_1407e02ea;
    _DAT_14ca8e4e0 = FUN_146826273;
    _DAT_14ca8e4b8 = FUN_14741e8e0;
    _DAT_14ca8e4f8 = 0xffffffff000000e0;
    _DAT_14ca8e500 = 8;
    DAT_14ca8e504 = 0;
    _DAT_14ca8e4e8 = &LAB_14741e90c;
    FUN_1460af328();
    FUN_1407e00cc(&DAT_14ca8e4a0);
  }
  return &DAT_14ca8e4a0;
}



// FUNCTION 1460af328 FUN_1460af328 body=133 status=ok
// SIG undefined FUN_1460af328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460af328(void)

{
  _DAT_14ca94728 = L"BASE";
  DAT_14ca94752 = 4;
  FUN_140b35ae4();
  _DAT_14ca94738 = DAT_14ca8e4b0;
  _DAT_14ca94730 = &DAT_14ca8c6c8;
  _DAT_14ca94740 = &LAB_14682652b;
  DAT_14ca8e4b0 = &DAT_14ca94728;
  DAT_14ca8e505 = DAT_14ca8e505 + '\x01';
  _DAT_14ca94748 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8e506 = DAT_14ca8e506 + '\x01';
  }
  return;
}



// FUNCTION 1460af3ae FUN_1460af3ae body=284 status=ok
// SIG undefined FUN_1460af3ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af3ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ec18) {
    FUN_144b3d300(&DAT_14ca8ec18);
    if (DAT_14ca8ec18 == -1) {
      FUN_1460af4ca();
      FUN_140db5666(&DAT_14ca8eb70,0,&DAT_14ca8eb08,L"FYUVConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YUVConvertPS",3,1,FUN_14741ef6e,
                    FUN_14741ef46,&LAB_14741ef42,&LAB_14741ef3e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8eb70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f790e);
      _Init_thread_footer(&DAT_14ca8ec18);
    }
  }
  return &DAT_14ca8eb70;
}



// FUNCTION 1460af4ca FUN_1460af4ca body=206 status=ok
// SIG undefined FUN_1460af4ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af4ca(void)

{
  if ((DAT_14ca8eb6f & 2) == 0) {
    DAT_14ca8eb6f = DAT_14ca8eb6f | 2;
    _DAT_14ca8eb10 = L"FYUVConvertPS";
    _DAT_14ca8eb28 = FUN_146826540;
    _DAT_14ca8eb30 = FUN_146825d77;
    _DAT_14ca8eb38 = FUN_146825fd6;
    _DAT_14ca8eb40 = FUN_1407e02ea;
    _DAT_14ca8eb48 = FUN_146826273;
    _DAT_14ca8eb20 = FUN_14741ef0e;
    _DAT_14ca8eb60 = 0xffffffff000000e0;
    _DAT_14ca8eb68 = 8;
    DAT_14ca8eb6c = 0;
    _DAT_14ca8eb50 = &LAB_14741ef3a;
    FUN_1460af598();
    FUN_1407e00cc(&DAT_14ca8eb08);
  }
  return &DAT_14ca8eb08;
}



// FUNCTION 1460af598 FUN_1460af598 body=133 status=ok
// SIG undefined FUN_1460af598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460af598(void)

{
  _DAT_14ca947e8 = L"BASE";
  DAT_14ca94812 = 4;
  FUN_140b35ae4();
  _DAT_14ca947f8 = DAT_14ca8eb18;
  _DAT_14ca947f0 = &DAT_14ca8c6c8;
  _DAT_14ca94800 = &LAB_14682652b;
  DAT_14ca8eb18 = &DAT_14ca947e8;
  DAT_14ca8eb6d = DAT_14ca8eb6d + '\x01';
  _DAT_14ca94808 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8eb6e = DAT_14ca8eb6e + '\x01';
  }
  return;
}



// FUNCTION 1460af61e FUN_1460af61e body=284 status=ok
// SIG undefined FUN_1460af61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af61e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8edd8) {
    FUN_144b3d300(&DAT_14ca8edd8);
    if (DAT_14ca8edd8 == -1) {
      FUN_1460af73a();
      FUN_140db5666(&DAT_14ca8ed30,0,&DAT_14ca8ecc8,L"FYUVv216ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YUVv216ConvertPS",3,1,FUN_14741f46c,
                    FUN_14741f444,&LAB_14741f440,&LAB_14741f43c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8ed30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7a1a);
      _Init_thread_footer(&DAT_14ca8edd8);
    }
  }
  return &DAT_14ca8ed30;
}



// FUNCTION 1460af73a FUN_1460af73a body=206 status=ok
// SIG undefined FUN_1460af73a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af73a(void)

{
  if ((DAT_14ca8ed2f & 2) == 0) {
    DAT_14ca8ed2f = DAT_14ca8ed2f | 2;
    _DAT_14ca8ecd0 = L"FYUVv216ConvertPS";
    _DAT_14ca8ece8 = FUN_146826540;
    _DAT_14ca8ecf0 = FUN_146825d77;
    _DAT_14ca8ecf8 = FUN_146825fd6;
    _DAT_14ca8ed00 = FUN_1407e02ea;
    _DAT_14ca8ed08 = FUN_146826273;
    _DAT_14ca8ece0 = FUN_14741f40c;
    _DAT_14ca8ed20 = 0xffffffff000000e0;
    _DAT_14ca8ed28 = 8;
    DAT_14ca8ed2c = 0;
    _DAT_14ca8ed10 = &LAB_14741f438;
    FUN_1460af808();
    FUN_1407e00cc(&DAT_14ca8ecc8);
  }
  return &DAT_14ca8ecc8;
}



// FUNCTION 1460af808 FUN_1460af808 body=133 status=ok
// SIG undefined FUN_1460af808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460af808(void)

{
  _DAT_14ca94818 = L"BASE";
  DAT_14ca94842 = 4;
  FUN_140b35ae4();
  _DAT_14ca94828 = DAT_14ca8ecd8;
  _DAT_14ca94820 = &DAT_14ca8c6c8;
  _DAT_14ca94830 = &LAB_14682652b;
  DAT_14ca8ecd8 = &DAT_14ca94818;
  DAT_14ca8ed2d = DAT_14ca8ed2d + '\x01';
  _DAT_14ca94838 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8ed2e = DAT_14ca8ed2e + '\x01';
  }
  return;
}



// FUNCTION 1460af88e FUN_1460af88e body=284 status=ok
// SIG undefined FUN_1460af88e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af88e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ef98) {
    FUN_144b3d300(&DAT_14ca8ef98);
    if (DAT_14ca8ef98 == -1) {
      FUN_1460af9aa();
      FUN_140db5666(&DAT_14ca8eef0,0,&DAT_14ca8ee88,L"FYUVv210ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YUVv210ConvertPS",3,1,FUN_14741f7f4,
                    FUN_14741f7cc,&LAB_14741f7c8,&LAB_14741f7c4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8eef0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7b26);
      _Init_thread_footer(&DAT_14ca8ef98);
    }
  }
  return &DAT_14ca8eef0;
}



// FUNCTION 1460af9aa FUN_1460af9aa body=206 status=ok
// SIG undefined FUN_1460af9aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460af9aa(void)

{
  if ((DAT_14ca8eeef & 2) == 0) {
    DAT_14ca8eeef = DAT_14ca8eeef | 2;
    _DAT_14ca8ee90 = L"FYUVv210ConvertPS";
    _DAT_14ca8eea8 = FUN_146826540;
    _DAT_14ca8eeb0 = FUN_146825d77;
    _DAT_14ca8eeb8 = FUN_146825fd6;
    _DAT_14ca8eec0 = FUN_1407e02ea;
    _DAT_14ca8eec8 = FUN_146826273;
    _DAT_14ca8eea0 = FUN_14741f794;
    _DAT_14ca8eee0 = 0xffffffff000000e0;
    _DAT_14ca8eee8 = 8;
    DAT_14ca8eeec = 0;
    _DAT_14ca8eed0 = &LAB_14741f7c0;
    FUN_1460afa78();
    FUN_1407e00cc(&DAT_14ca8ee88);
  }
  return &DAT_14ca8ee88;
}



// FUNCTION 1460afa78 FUN_1460afa78 body=133 status=ok
// SIG undefined FUN_1460afa78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460afa78(void)

{
  _DAT_14ca94848 = L"BASE";
  DAT_14ca94872 = 4;
  FUN_140b35ae4();
  _DAT_14ca94858 = DAT_14ca8ee98;
  _DAT_14ca94850 = &DAT_14ca8c6c8;
  _DAT_14ca94860 = &LAB_14682652b;
  DAT_14ca8ee98 = &DAT_14ca94848;
  DAT_14ca8eeed = DAT_14ca8eeed + '\x01';
  _DAT_14ca94868 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8eeee = DAT_14ca8eeee + '\x01';
  }
  return;
}



// FUNCTION 1460afafe FUN_1460afafe body=284 status=ok
// SIG undefined FUN_1460afafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460afafe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8f158) {
    FUN_144b3d300(&DAT_14ca8f158);
    if (DAT_14ca8f158 == -1) {
      FUN_1460afc1a();
      FUN_140db5666(&DAT_14ca8f0b0,0,&DAT_14ca8f048,L"FYUVY416ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YUVY416ConvertPS",3,1,FUN_14741fb2e,
                    FUN_14741fb06,&LAB_14741fb02,&LAB_14741fafe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8f0b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7c32);
      _Init_thread_footer(&DAT_14ca8f158);
    }
  }
  return &DAT_14ca8f0b0;
}



// FUNCTION 1460afc1a FUN_1460afc1a body=206 status=ok
// SIG undefined FUN_1460afc1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460afc1a(void)

{
  if ((DAT_14ca8f0af & 2) == 0) {
    DAT_14ca8f0af = DAT_14ca8f0af | 2;
    _DAT_14ca8f050 = L"FYUVY416ConvertPS";
    _DAT_14ca8f068 = FUN_146826540;
    _DAT_14ca8f070 = FUN_146825d77;
    _DAT_14ca8f078 = FUN_146825fd6;
    _DAT_14ca8f080 = FUN_1407e02ea;
    _DAT_14ca8f088 = FUN_146826273;
    _DAT_14ca8f060 = FUN_14741face;
    _DAT_14ca8f0a0 = 0xffffffff000000e0;
    _DAT_14ca8f0a8 = 8;
    DAT_14ca8f0ac = 0;
    _DAT_14ca8f090 = &LAB_14741fafa;
    FUN_1460afce8();
    FUN_1407e00cc(&DAT_14ca8f048);
  }
  return &DAT_14ca8f048;
}



// FUNCTION 1460afce8 FUN_1460afce8 body=133 status=ok
// SIG undefined FUN_1460afce8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460afce8(void)

{
  _DAT_14ca94878 = L"BASE";
  DAT_14ca948a2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94888 = DAT_14ca8f058;
  _DAT_14ca94880 = &DAT_14ca8c6c8;
  _DAT_14ca94890 = &LAB_14682652b;
  DAT_14ca8f058 = &DAT_14ca94878;
  DAT_14ca8f0ad = DAT_14ca8f0ad + '\x01';
  _DAT_14ca94898 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8f0ae = DAT_14ca8f0ae + '\x01';
  }
  return;
}



// FUNCTION 1460afd6e FUN_1460afd6e body=284 status=ok
// SIG undefined FUN_1460afd6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460afd6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8f318) {
    FUN_144b3d300(&DAT_14ca8f318);
    if (DAT_14ca8f318 == -1) {
      FUN_1460afe8a();
      FUN_140db5666(&DAT_14ca8f270,0,&DAT_14ca8f208,L"FARGB16BigConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"ARGB16BigConvertPS",3,1,FUN_14741fe50,
                    FUN_14741fe28,&LAB_14741fe24,&LAB_14741fe20,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8f270 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7d3e);
      _Init_thread_footer(&DAT_14ca8f318);
    }
  }
  return &DAT_14ca8f270;
}



// FUNCTION 1460afe8a FUN_1460afe8a body=206 status=ok
// SIG undefined FUN_1460afe8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460afe8a(void)

{
  if ((DAT_14ca8f26f & 2) == 0) {
    DAT_14ca8f26f = DAT_14ca8f26f | 2;
    _DAT_14ca8f210 = L"FARGB16BigConvertPS";
    _DAT_14ca8f228 = FUN_146826540;
    _DAT_14ca8f230 = FUN_146825d77;
    _DAT_14ca8f238 = FUN_146825fd6;
    _DAT_14ca8f240 = FUN_1407e02ea;
    _DAT_14ca8f248 = FUN_146826273;
    _DAT_14ca8f220 = FUN_14741fdf0;
    _DAT_14ca8f260 = 0xffffffff000000e0;
    _DAT_14ca8f268 = 8;
    DAT_14ca8f26c = 0;
    _DAT_14ca8f250 = &LAB_14741fe1c;
    FUN_1460aff58();
    FUN_1407e00cc(&DAT_14ca8f208);
  }
  return &DAT_14ca8f208;
}



// FUNCTION 1460aff58 FUN_1460aff58 body=133 status=ok
// SIG undefined FUN_1460aff58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aff58(void)

{
  _DAT_14ca948a8 = L"BASE";
  DAT_14ca948d2 = 4;
  FUN_140b35ae4();
  _DAT_14ca948b8 = DAT_14ca8f218;
  _DAT_14ca948b0 = &DAT_14ca8c6c8;
  _DAT_14ca948c0 = &LAB_14682652b;
  DAT_14ca8f218 = &DAT_14ca948a8;
  DAT_14ca8f26d = DAT_14ca8f26d + '\x01';
  _DAT_14ca948c8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8f26e = DAT_14ca8f26e + '\x01';
  }
  return;
}



// FUNCTION 1460affde FUN_1460affde body=284 status=ok
// SIG undefined FUN_1460affde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460affde(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8f4d8) {
    FUN_144b3d300(&DAT_14ca8f4d8);
    if (DAT_14ca8f4d8 == -1) {
      FUN_1460b00fa();
      FUN_140db5666(&DAT_14ca8f430,0,&DAT_14ca8f3c8,L"FYUY2ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YUY2ConvertPS",3,1,FUN_147420134,
                    FUN_14742010c,&LAB_147420108,&LAB_147420104,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8f430 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7e4a);
      _Init_thread_footer(&DAT_14ca8f4d8);
    }
  }
  return &DAT_14ca8f430;
}



// FUNCTION 1460b00fa FUN_1460b00fa body=206 status=ok
// SIG undefined FUN_1460b00fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b00fa(void)

{
  if ((DAT_14ca8f42f & 2) == 0) {
    DAT_14ca8f42f = DAT_14ca8f42f | 2;
    _DAT_14ca8f3d0 = L"FYUY2ConvertPS";
    _DAT_14ca8f3e8 = FUN_146826540;
    _DAT_14ca8f3f0 = FUN_146825d77;
    _DAT_14ca8f3f8 = FUN_146825fd6;
    _DAT_14ca8f400 = FUN_1407e02ea;
    _DAT_14ca8f408 = FUN_146826273;
    _DAT_14ca8f3e0 = FUN_1474200d4;
    _DAT_14ca8f420 = 0xffffffff000000e0;
    _DAT_14ca8f428 = 8;
    DAT_14ca8f42c = 0;
    _DAT_14ca8f410 = &LAB_147420100;
    FUN_1460b01c8();
    FUN_1407e00cc(&DAT_14ca8f3c8);
  }
  return &DAT_14ca8f3c8;
}



// FUNCTION 1460b01c8 FUN_1460b01c8 body=133 status=ok
// SIG undefined FUN_1460b01c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b01c8(void)

{
  _DAT_14ca948d8 = L"BASE";
  DAT_14ca94902 = 4;
  FUN_140b35ae4();
  _DAT_14ca948e8 = DAT_14ca8f3d8;
  _DAT_14ca948e0 = &DAT_14ca8c6c8;
  _DAT_14ca948f0 = &LAB_14682652b;
  DAT_14ca8f3d8 = &DAT_14ca948d8;
  DAT_14ca8f42d = DAT_14ca8f42d + '\x01';
  _DAT_14ca948f8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8f42e = DAT_14ca8f42e + '\x01';
  }
  return;
}



// FUNCTION 1460b024e FUN_1460b024e body=284 status=ok
// SIG undefined FUN_1460b024e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b024e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ff50) {
    FUN_144b3d300(&DAT_14ca8ff50);
    if (DAT_14ca8ff50 == -1) {
      FUN_1460b036a();
      FUN_140db5666(&DAT_14ca8fea8,0,&DAT_14ca8fe40,L"FVYUConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"VYUConvertPS",3,1,FUN_147420e34,
                    FUN_147420e0c,&LAB_147420e08,&LAB_147420e04,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8fea8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f80b6);
      _Init_thread_footer(&DAT_14ca8ff50);
    }
  }
  return &DAT_14ca8fea8;
}



// FUNCTION 1460b036a FUN_1460b036a body=206 status=ok
// SIG undefined FUN_1460b036a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b036a(void)

{
  if ((DAT_14ca8fea7 & 2) == 0) {
    DAT_14ca8fea7 = DAT_14ca8fea7 | 2;
    _DAT_14ca8fe48 = L"FVYUConvertPS";
    _DAT_14ca8fe60 = FUN_146826540;
    _DAT_14ca8fe68 = FUN_146825d77;
    _DAT_14ca8fe70 = FUN_146825fd6;
    _DAT_14ca8fe78 = FUN_1407e02ea;
    _DAT_14ca8fe80 = FUN_146826273;
    _DAT_14ca8fe58 = FUN_147420dd4;
    _DAT_14ca8fe98 = 0xffffffff000000e0;
    _DAT_14ca8fea0 = 8;
    DAT_14ca8fea4 = 0;
    _DAT_14ca8fe88 = &LAB_147420e00;
    FUN_1460b0438();
    FUN_1407e00cc(&DAT_14ca8fe40);
  }
  return &DAT_14ca8fe40;
}



// FUNCTION 1460b0438 FUN_1460b0438 body=133 status=ok
// SIG undefined FUN_1460b0438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b0438(void)

{
  _DAT_14ca94a28 = L"BASE";
  DAT_14ca94a52 = 4;
  FUN_140b35ae4();
  _DAT_14ca94a38 = DAT_14ca8fe50;
  _DAT_14ca94a30 = &DAT_14ca8c6c8;
  _DAT_14ca94a40 = &LAB_14682652b;
  DAT_14ca8fe50 = &DAT_14ca94a28;
  DAT_14ca8fea5 = DAT_14ca8fea5 + '\x01';
  _DAT_14ca94a48 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8fea6 = DAT_14ca8fea6 + '\x01';
  }
  return;
}



// FUNCTION 1460b04be FUN_1460b04be body=284 status=ok
// SIG undefined FUN_1460b04be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b04be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97620) {
    FUN_144b3d300(&DAT_14ca97620);
    if (DAT_14ca97620 == -1) {
      FUN_1460b05da();
      FUN_140db5666(&DAT_14ca97578,0,&DAT_14ca97510,L"FResolveDepth2XPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_1474315f4,
                    FUN_14743159c,&LAB_147431598,&LAB_147431594,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca97578 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e23);
      _Init_thread_footer(&DAT_14ca97620);
    }
  }
  return &DAT_14ca97578;
}



// FUNCTION 1460b05da FUN_1460b05da body=206 status=ok
// SIG undefined FUN_1460b05da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b05da(void)

{
  if ((DAT_14ca97577 & 2) == 0) {
    DAT_14ca97577 = DAT_14ca97577 | 2;
    _DAT_14ca97518 = L"FResolveDepth2XPS";
    _DAT_14ca97530 = FUN_146826540;
    _DAT_14ca97538 = FUN_146825d77;
    _DAT_14ca97540 = FUN_146825fd6;
    _DAT_14ca97548 = FUN_1407e02ea;
    _DAT_14ca97550 = FUN_146826273;
    _DAT_14ca97528 = FUN_147431564;
    _DAT_14ca97568 = 0xffffffff000000e8;
    _DAT_14ca97570 = 8;
    DAT_14ca97574 = 0;
    _DAT_14ca97558 = &LAB_147431590;
    FUN_1460b06a8();
    FUN_1407e00cc(&DAT_14ca97510);
  }
  return &DAT_14ca97510;
}



// FUNCTION 1460b06a8 FUN_1460b06a8 body=133 status=ok
// SIG undefined FUN_1460b06a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b06a8(void)

{
  _DAT_14ca9a068 = L"BASE";
  DAT_14ca9a092 = 4;
  FUN_145c11738();
  _DAT_14ca9a078 = DAT_14ca97520;
  _DAT_14ca9a070 = &DAT_14ca973e8;
  _DAT_14ca9a080 = &LAB_14682652b;
  DAT_14ca97520 = &DAT_14ca9a068;
  DAT_14ca97575 = DAT_14ca97575 + '\x01';
  _DAT_14ca9a088 = 0x100000000;
  if (DAT_14ca9744c != '\0') {
    DAT_14ca97576 = DAT_14ca97576 + '\x01';
  }
  return;
}



// FUNCTION 1460b072e FUN_1460b072e body=284 status=ok
// SIG undefined FUN_1460b072e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b072e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97748) {
    FUN_144b3d300(&DAT_14ca97748);
    if (DAT_14ca97748 == -1) {
      FUN_1460b084a();
      FUN_140db5666(&DAT_14ca976a0,0,&DAT_14ca97638,L"FResolveDepth4XPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_147431716,
                    FUN_1474316be,&LAB_1474316ba,&LAB_1474316b6,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca976a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e2f);
      _Init_thread_footer(&DAT_14ca97748);
    }
  }
  return &DAT_14ca976a0;
}



// FUNCTION 1460b084a FUN_1460b084a body=206 status=ok
// SIG undefined FUN_1460b084a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b084a(void)

{
  if ((DAT_14ca9769f & 2) == 0) {
    DAT_14ca9769f = DAT_14ca9769f | 2;
    _DAT_14ca97640 = L"FResolveDepth4XPS";
    _DAT_14ca97658 = FUN_146826540;
    _DAT_14ca97660 = FUN_146825d77;
    _DAT_14ca97668 = FUN_146825fd6;
    _DAT_14ca97670 = FUN_1407e02ea;
    _DAT_14ca97678 = FUN_146826273;
    _DAT_14ca97650 = FUN_147431686;
    _DAT_14ca97690 = 0xffffffff000000e8;
    _DAT_14ca97698 = 8;
    DAT_14ca9769c = 0;
    _DAT_14ca97680 = &LAB_1474316b2;
    FUN_1460b0918();
    FUN_1407e00cc(&DAT_14ca97638);
  }
  return &DAT_14ca97638;
}



// FUNCTION 1460b0918 FUN_1460b0918 body=133 status=ok
// SIG undefined FUN_1460b0918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b0918(void)

{
  _DAT_14ca9a098 = L"BASE";
  DAT_14ca9a0c2 = 4;
  FUN_145c11738();
  _DAT_14ca9a0a8 = DAT_14ca97648;
  _DAT_14ca9a0a0 = &DAT_14ca973e8;
  _DAT_14ca9a0b0 = &LAB_14682652b;
  DAT_14ca97648 = &DAT_14ca9a098;
  DAT_14ca9769d = DAT_14ca9769d + '\x01';
  _DAT_14ca9a0b8 = 0x100000000;
  if (DAT_14ca9744c != '\0') {
    DAT_14ca9769e = DAT_14ca9769e + '\x01';
  }
  return;
}



// FUNCTION 1460b099e FUN_1460b099e body=284 status=ok
// SIG undefined FUN_1460b099e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b099e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97870) {
    FUN_144b3d300(&DAT_14ca97870);
    if (DAT_14ca97870 == -1) {
      FUN_1460b0aba();
      FUN_140db5666(&DAT_14ca977c8,0,&DAT_14ca97760,L"FResolveDepth8XPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_147431838,
                    FUN_1474317e0,&LAB_1474317dc,&LAB_1474317d8,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca977c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e3b);
      _Init_thread_footer(&DAT_14ca97870);
    }
  }
  return &DAT_14ca977c8;
}



// FUNCTION 1460b0aba FUN_1460b0aba body=206 status=ok
// SIG undefined FUN_1460b0aba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b0aba(void)

{
  if ((DAT_14ca977c7 & 2) == 0) {
    DAT_14ca977c7 = DAT_14ca977c7 | 2;
    _DAT_14ca97768 = L"FResolveDepth8XPS";
    _DAT_14ca97780 = FUN_146826540;
    _DAT_14ca97788 = FUN_146825d77;
    _DAT_14ca97790 = FUN_146825fd6;
    _DAT_14ca97798 = FUN_1407e02ea;
    _DAT_14ca977a0 = FUN_146826273;
    _DAT_14ca97778 = FUN_1474317a8;
    _DAT_14ca977b8 = 0xffffffff000000e8;
    _DAT_14ca977c0 = 8;
    DAT_14ca977c4 = 0;
    _DAT_14ca977a8 = &LAB_1474317d4;
    FUN_1460b0b88();
    FUN_1407e00cc(&DAT_14ca97760);
  }
  return &DAT_14ca97760;
}



// FUNCTION 1460b0b88 FUN_1460b0b88 body=133 status=ok
// SIG undefined FUN_1460b0b88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b0b88(void)

{
  _DAT_14ca9a0c8 = L"BASE";
  DAT_14ca9a0f2 = 4;
  FUN_145c11738();
  _DAT_14ca9a0d8 = DAT_14ca97770;
  _DAT_14ca9a0d0 = &DAT_14ca973e8;
  _DAT_14ca9a0e0 = &LAB_14682652b;
  DAT_14ca97770 = &DAT_14ca9a0c8;
  DAT_14ca977c5 = DAT_14ca977c5 + '\x01';
  _DAT_14ca9a0e8 = 0x100000000;
  if (DAT_14ca9744c != '\0') {
    DAT_14ca977c6 = DAT_14ca977c6 + '\x01';
  }
  return;
}



// FUNCTION 1460b0c0e FUN_1460b0c0e body=284 status=ok
// SIG undefined FUN_1460b0c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b0c0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97998) {
    FUN_144b3d300(&DAT_14ca97998);
    if (DAT_14ca97998 == -1) {
      FUN_1460b0d2a();
      FUN_140db5666(&DAT_14ca978f0,0,&DAT_14ca97888,L"FResolveDepthArray2XPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_147431956,
                    FUN_1474318fe,FUN_14631fd24,&LAB_1474318fa,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0)
      ;
      _DAT_14ca978f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e47);
      _Init_thread_footer(&DAT_14ca97998);
    }
  }
  return &DAT_14ca978f0;
}



// FUNCTION 1460b0d2a FUN_1460b0d2a body=206 status=ok
// SIG undefined FUN_1460b0d2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b0d2a(void)

{
  if ((DAT_14ca978ef & 2) == 0) {
    DAT_14ca978ef = DAT_14ca978ef | 2;
    _DAT_14ca97890 = L"FResolveDepthArray2XPS";
    _DAT_14ca978a8 = FUN_146826540;
    _DAT_14ca978b0 = FUN_146825d77;
    _DAT_14ca978b8 = FUN_146825fd6;
    _DAT_14ca978c0 = FUN_1407e02ea;
    _DAT_14ca978c8 = FUN_146826273;
    _DAT_14ca978a0 = FUN_1474318ca;
    _DAT_14ca978e0 = 0xffffffff000000e8;
    _DAT_14ca978e8 = 8;
    DAT_14ca978ec = 0;
    _DAT_14ca978d0 = &LAB_1474318f6;
    FUN_1460b0df8();
    FUN_1407e00cc(&DAT_14ca97888);
  }
  return &DAT_14ca97888;
}



// FUNCTION 1460b0df8 FUN_1460b0df8 body=133 status=ok
// SIG undefined FUN_1460b0df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b0df8(void)

{
  _DAT_14ca9a0f8 = L"BASE";
  DAT_14ca9a122 = 4;
  FUN_145c11738();
  _DAT_14ca9a108 = DAT_14ca97898;
  _DAT_14ca9a100 = &DAT_14ca973e8;
  _DAT_14ca9a110 = &LAB_14682652b;
  DAT_14ca97898 = &DAT_14ca9a0f8;
  DAT_14ca978ed = DAT_14ca978ed + '\x01';
  _DAT_14ca9a118 = 0x100000000;
  if (DAT_14ca9744c != '\0') {
    DAT_14ca978ee = DAT_14ca978ee + '\x01';
  }
  return;
}



// FUNCTION 1460b0e7e FUN_1460b0e7e body=284 status=ok
// SIG undefined FUN_1460b0e7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b0e7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97ac0) {
    FUN_144b3d300(&DAT_14ca97ac0);
    if (DAT_14ca97ac0 == -1) {
      FUN_1460b0f9a();
      FUN_140db5666(&DAT_14ca97a18,0,&DAT_14ca979b0,L"FResolveDepthArray4XPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_147431a74,
                    FUN_147431a1c,FUN_14631fd6c,&LAB_147431a18,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0)
      ;
      _DAT_14ca97a18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e53);
      _Init_thread_footer(&DAT_14ca97ac0);
    }
  }
  return &DAT_14ca97a18;
}



// FUNCTION 1460b0f9a FUN_1460b0f9a body=206 status=ok
// SIG undefined FUN_1460b0f9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b0f9a(void)

{
  if ((DAT_14ca97a17 & 2) == 0) {
    DAT_14ca97a17 = DAT_14ca97a17 | 2;
    _DAT_14ca979b8 = L"FResolveDepthArray4XPS";
    _DAT_14ca979d0 = FUN_146826540;
    _DAT_14ca979d8 = FUN_146825d77;
    _DAT_14ca979e0 = FUN_146825fd6;
    _DAT_14ca979e8 = FUN_1407e02ea;
    _DAT_14ca979f0 = FUN_146826273;
    _DAT_14ca979c8 = FUN_1474319e8;
    _DAT_14ca97a08 = 0xffffffff000000e8;
    _DAT_14ca97a10 = 8;
    DAT_14ca97a14 = 0;
    _DAT_14ca979f8 = &LAB_147431a14;
    FUN_1460b1068();
    FUN_1407e00cc(&DAT_14ca979b0);
  }
  return &DAT_14ca979b0;
}



// FUNCTION 1460b1068 FUN_1460b1068 body=133 status=ok
// SIG undefined FUN_1460b1068(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b1068(void)

{
  _DAT_14ca9a128 = L"BASE";
  DAT_14ca9a152 = 4;
  FUN_145c11738();
  _DAT_14ca9a138 = DAT_14ca979c0;
  _DAT_14ca9a130 = &DAT_14ca973e8;
  _DAT_14ca9a140 = &LAB_14682652b;
  DAT_14ca979c0 = &DAT_14ca9a128;
  DAT_14ca97a15 = DAT_14ca97a15 + '\x01';
  _DAT_14ca9a148 = 0x100000000;
  if (DAT_14ca9744c != '\0') {
    DAT_14ca97a16 = DAT_14ca97a16 + '\x01';
  }
  return;
}



// FUNCTION 1460b10ee FUN_1460b10ee body=284 status=ok
// SIG undefined FUN_1460b10ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b10ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97be8) {
    FUN_144b3d300(&DAT_14ca97be8);
    if (DAT_14ca97be8 == -1) {
      FUN_1460b120a();
      FUN_140db5666(&DAT_14ca97b40,0,&DAT_14ca97ad8,L"FResolveDepthArray8XPS",
                    L"/Engine/Private/ResolvePixelShader.usf",L"MainDepth",3,1,FUN_147431b92,
                    FUN_147431b3a,FUN_14631fdb4,&LAB_147431b36,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0)
      ;
      _DAT_14ca97b40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e5f);
      _Init_thread_footer(&DAT_14ca97be8);
    }
  }
  return &DAT_14ca97b40;
}



// FUNCTION 1460b120a FUN_1460b120a body=206 status=ok
// SIG undefined FUN_1460b120a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b120a(void)

{
  if ((DAT_14ca97b3f & 2) == 0) {
    DAT_14ca97b3f = DAT_14ca97b3f | 2;
    _DAT_14ca97ae0 = L"FResolveDepthArray8XPS";
    _DAT_14ca97af8 = FUN_146826540;
    _DAT_14ca97b00 = FUN_146825d77;
    _DAT_14ca97b08 = FUN_146825fd6;
    _DAT_14ca97b10 = FUN_1407e02ea;
    _DAT_14ca97b18 = FUN_146826273;
    _DAT_14ca97af0 = FUN_147431b06;
    _DAT_14ca97b30 = 0xffffffff000000e8;
    _DAT_14ca97b38 = 8;
    DAT_14ca97b3c = 0;
    _DAT_14ca97b20 = &LAB_147431b32;
    FUN_1460b12d8();
    FUN_1407e00cc(&DAT_14ca97ad8);
  }
  return &DAT_14ca97ad8;
}



// FUNCTION 1460b12d8 FUN_1460b12d8 body=133 status=ok
// SIG undefined FUN_1460b12d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b12d8(void)

{
  _DAT_14ca9a158 = L"BASE";
  DAT_14ca9a182 = 4;
  FUN_145c11738();
  _DAT_14ca9a168 = DAT_14ca97ae8;
  _DAT_14ca9a160 = &DAT_14ca973e8;
  _DAT_14ca9a170 = &LAB_14682652b;
  DAT_14ca97ae8 = &DAT_14ca9a158;
  DAT_14ca97b3d = DAT_14ca97b3d + '\x01';
  _DAT_14ca9a178 = 0x100000000;
  if (DAT_14ca9744c != '\0') {
    DAT_14ca97b3e = DAT_14ca97b3e + '\x01';
  }
  return;
}



// FUNCTION 1460b135e FUN_1460b135e body=284 status=ok
// SIG undefined FUN_1460b135e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b135e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97f60) {
    FUN_144b3d300(&DAT_14ca97f60);
    if (DAT_14ca97f60 == -1) {
      FUN_1460b147a();
      FUN_140db5666(&DAT_14ca97eb8,0,&DAT_14ca97e50,L"FResolveArrayVS",
                    L"/Engine/Private/ResolveVertexShader.usf",L"Main",0,1,FUN_147431e96,
                    FUN_147431e6e,FUN_14631fdfc,&LAB_147431e6a,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0)
      ;
      _DAT_14ca97eb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143226e83);
      _Init_thread_footer(&DAT_14ca97f60);
    }
  }
  return &DAT_14ca97eb8;
}



// FUNCTION 1460b147a FUN_1460b147a body=206 status=ok
// SIG undefined FUN_1460b147a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b147a(void)

{
  if ((DAT_14ca97eb7 & 2) == 0) {
    DAT_14ca97eb7 = DAT_14ca97eb7 | 2;
    _DAT_14ca97e58 = L"FResolveArrayVS";
    _DAT_14ca97e70 = FUN_146826540;
    _DAT_14ca97e78 = FUN_146825d77;
    _DAT_14ca97e80 = FUN_146825fd6;
    _DAT_14ca97e88 = FUN_1407e02ea;
    _DAT_14ca97e90 = FUN_146826273;
    _DAT_14ca97e68 = FUN_147431e3a;
    _DAT_14ca97ea8 = 0xffffffff000000f0;
    _DAT_14ca97eb0 = 8;
    DAT_14ca97eb4 = 0;
    _DAT_14ca97e98 = &LAB_147431e66;
    FUN_1460b1548();
    FUN_1407e00cc(&DAT_14ca97e50);
  }
  return &DAT_14ca97e50;
}



// FUNCTION 1460b1548 FUN_1460b1548 body=133 status=ok
// SIG undefined FUN_1460b1548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b1548(void)

{
  _DAT_14ca9a1e8 = L"BASE";
  DAT_14ca9a212 = 4;
  FUN_145ee19b6();
  _DAT_14ca9a1f8 = DAT_14ca97e60;
  _DAT_14ca9a1f0 = &DAT_14ca97d28;
  _DAT_14ca9a200 = &LAB_14682652b;
  DAT_14ca97e60 = &DAT_14ca9a1e8;
  DAT_14ca97eb5 = DAT_14ca97eb5 + '\x01';
  _DAT_14ca9a208 = 0x100000000;
  if (DAT_14ca97d8c != '\0') {
    DAT_14ca97eb6 = DAT_14ca97eb6 + '\x01';
  }
  return;
}



// FUNCTION 1460b15ce FUN_1460b15ce body=284 status=ok
// SIG undefined FUN_1460b15ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b15ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb038d0) {
    FUN_144b3d300(&DAT_14cb038d0);
    if (DAT_14cb038d0 == -1) {
      FUN_1460b16ea();
      FUN_140db5666(&DAT_14cb03828,0,&DAT_14cb037c0,L"FScreenUnwrapSlicesPS",
                    L"/Engine/Private/ScreenPixelShader.usf",L"MainUnwrap",3,1,FUN_147cf1246,
                    FUN_147cf121e,FUN_1463fe44c,&LAB_147cf121a,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0)
      ;
      _DAT_14cb03828 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4eb1);
      _Init_thread_footer(&DAT_14cb038d0);
    }
  }
  return &DAT_14cb03828;
}



// FUNCTION 1460b16ea FUN_1460b16ea body=206 status=ok
// SIG undefined FUN_1460b16ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b16ea(void)

{
  if ((DAT_14cb03827 & 2) == 0) {
    DAT_14cb03827 = DAT_14cb03827 | 2;
    _DAT_14cb037c8 = L"FScreenUnwrapSlicesPS";
    _DAT_14cb037e0 = FUN_146826540;
    _DAT_14cb037e8 = FUN_146825d77;
    _DAT_14cb037f0 = FUN_146825fd6;
    _DAT_14cb037f8 = FUN_1407e02ea;
    _DAT_14cb03800 = FUN_146826273;
    _DAT_14cb037d8 = FUN_147cf11ec;
    _DAT_14cb03818 = 0xffffffff000000e8;
    _DAT_14cb03820 = 8;
    DAT_14cb03824 = 0;
    _DAT_14cb03808 = &LAB_147cf1216;
    FUN_1460b17b8();
    FUN_1407e00cc(&DAT_14cb037c0);
  }
  return &DAT_14cb037c0;
}



// FUNCTION 1460b17b8 FUN_1460b17b8 body=133 status=ok
// SIG undefined FUN_1460b17b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b17b8(void)

{
  _DAT_14cb05208 = L"BASE";
  DAT_14cb05232 = 4;
  FUN_145db0da6();
  _DAT_14cb05218 = DAT_14cb037d0;
  _DAT_14cb05210 = &DAT_14cb03570;
  _DAT_14cb05220 = &LAB_14682652b;
  DAT_14cb037d0 = &DAT_14cb05208;
  DAT_14cb03825 = DAT_14cb03825 + '\x01';
  _DAT_14cb05228 = 0x100000000;
  if (DAT_14cb035d4 != '\0') {
    DAT_14cb03826 = DAT_14cb03826 + '\x01';
  }
  return;
}



// FUNCTION 1460b183e FUN_1460b183e body=284 status=ok
// SIG undefined FUN_1460b183e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b183e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06178) {
    FUN_144b3d300(&DAT_14cb06178);
    if (DAT_14cb06178 == -1) {
      FUN_1460b195a();
      FUN_140db5666(&DAT_14cb060d0,0,&DAT_14cb06068,L"FSimpleElementAlphaOnlyPS",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"AlphaOnlyMain",3,1,
                    FUN_147d14096,FUN_147d1406e,&LAB_147d1406a,&LAB_147d14066,&LAB_14712ac0c,
                    &LAB_14712ac08,0x100,0);
      _DAT_14cb060d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b08);
      _Init_thread_footer(&DAT_14cb06178);
    }
  }
  return &DAT_14cb060d0;
}



// FUNCTION 1460b195a FUN_1460b195a body=206 status=ok
// SIG undefined FUN_1460b195a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b195a(void)

{
  if ((DAT_14cb060cf & 2) == 0) {
    DAT_14cb060cf = DAT_14cb060cf | 2;
    _DAT_14cb06070 = L"FSimpleElementAlphaOnlyPS";
    _DAT_14cb06088 = FUN_146826540;
    _DAT_14cb06090 = FUN_146825d77;
    _DAT_14cb06098 = FUN_146825fd6;
    _DAT_14cb060a0 = FUN_1407e02ea;
    _DAT_14cb060a8 = FUN_146826273;
    _DAT_14cb06080 = FUN_147d14038;
    _DAT_14cb060c0 = 0xffffffff00000100;
    _DAT_14cb060c8 = 8;
    DAT_14cb060cc = 0;
    _DAT_14cb060b0 = &LAB_147d14062;
    FUN_1460b1a28();
    FUN_1407e00cc(&DAT_14cb06068);
  }
  return &DAT_14cb06068;
}



// FUNCTION 1460b1a28 FUN_1460b1a28 body=133 status=ok
// SIG undefined FUN_1460b1a28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b1a28(void)

{
  _DAT_14cb07550 = L"BASE";
  DAT_14cb0757a = 4;
  FUN_145d20fb0();
  _DAT_14cb07560 = DAT_14cb06078;
  _DAT_14cb07558 = &DAT_14cb05f40;
  _DAT_14cb07568 = &LAB_14682652b;
  DAT_14cb06078 = &DAT_14cb07550;
  DAT_14cb060cd = DAT_14cb060cd + '\x01';
  _DAT_14cb07570 = 0x100000000;
  if (DAT_14cb05fa4 != '\0') {
    DAT_14cb060ce = DAT_14cb060ce + '\x01';
  }
  return;
}



// FUNCTION 1460b1aae FUN_1460b1aae body=284 status=ok
// SIG undefined FUN_1460b1aae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b1aae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06740) {
    FUN_144b3d300(&DAT_14cb06740);
    if (DAT_14cb06740 == -1) {
      FUN_1460b1bca();
      FUN_140db5666(&DAT_14cb06698,0,&DAT_14cb06630,L"FSimpleElementMaskedGammaPS_Linear",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMaskedMain",3,1,
                    FUN_147d1446c,FUN_147d14444,&LAB_147d14440,&LAB_147d1443c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb06698 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b44);
      _Init_thread_footer(&DAT_14cb06740);
    }
  }
  return &DAT_14cb06698;
}



// FUNCTION 1460b1bca FUN_1460b1bca body=206 status=ok
// SIG undefined FUN_1460b1bca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b1bca(void)

{
  if ((DAT_14cb06697 & 2) == 0) {
    DAT_14cb06697 = DAT_14cb06697 | 2;
    _DAT_14cb06638 = L"FSimpleElementMaskedGammaPS_Linear";
    _DAT_14cb06650 = FUN_146826540;
    _DAT_14cb06658 = FUN_146825d77;
    _DAT_14cb06660 = FUN_146825fd6;
    _DAT_14cb06668 = FUN_1407e02ea;
    _DAT_14cb06670 = FUN_146826273;
    _DAT_14cb06648 = FUN_147d1440e;
    _DAT_14cb06688 = 0xffffffff00000110;
    _DAT_14cb06690 = 8;
    DAT_14cb06694 = 0;
    _DAT_14cb06678 = &LAB_147d14438;
    FUN_1460b1c98();
    FUN_1407e00cc(&DAT_14cb06630);
  }
  return &DAT_14cb06630;
}



// FUNCTION 1460b1c98 FUN_1460b1c98 body=133 status=ok
// SIG undefined FUN_1460b1c98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b1c98(void)

{
  _DAT_14cb07640 = L"BASE";
  DAT_14cb0766a = 4;
  FUN_145cfa6e4();
  _DAT_14cb07650 = DAT_14cb06640;
  _DAT_14cb07648 = &DAT_14cb05da8;
  _DAT_14cb07658 = &LAB_14682652b;
  DAT_14cb06640 = &DAT_14cb07640;
  DAT_14cb06695 = DAT_14cb06695 + '\x01';
  _DAT_14cb07660 = 0x100000000;
  if (DAT_14cb05e0c != '\0') {
    DAT_14cb06696 = DAT_14cb06696 + '\x01';
  }
  return;
}



// FUNCTION 1460b1d1e FUN_1460b1d1e body=19 status=ok
// SIG undefined FUN_1460b1d1e(void)

void FUN_1460b1d1e(void)

{
  FUN_1460b1d5e();
  FUN_1460b1d32();
  return;
}



// FUNCTION 1460b1d32 FUN_1460b1d32 body=44 status=ok
// SIG undefined FUN_1460b1d32(void)

void FUN_1460b1d32(void)

{
  FUN_140f4f540();
  if (DAT_14cc1c7f0 != DAT_14cc1c81c) {
    FUN_1415d4d3a();
    FUN_1415d4eba();
    return;
  }
  return;
}



// FUNCTION 1460b1d5e FUN_1460b1d5e body=250 status=ok
// SIG undefined FUN_1460b1d5e(void)

void FUN_1460b1d5e(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"AssetRegistry",1);
  plVar1 = (longlong *)FUN_1447c1074(local_28);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar3 = (**(code **)(*plVar2 + 0x390))(plVar2);
    FUN_140f4f540();
    FUN_14126849c(uVar3,&DAT_14cc1c7d8);
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar3 = (**(code **)(*plVar2 + 0x338))(plVar2);
    FUN_140f4f540();
    FUN_14126849c(uVar3,&DAT_14cc1c7d8);
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
    uVar3 = (**(code **)(*plVar1 + 0x348))(plVar1);
    FUN_140f4f540();
    FUN_14126849c(uVar3,&DAT_14cc1c7d8);
  }
  FUN_140f4f540();
  FUN_140457ffc(&DAT_14caccb58,&DAT_14cc1c7d8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460b1e5a FUN_1460b1e5a body=130 status=ok
// SIG undefined FUN_1460b1e5a(void)

void FUN_1460b1e5a(longlong param_1,short *param_2,short param_3)

{
  undefined1 auStack_68 [46];
  short local_3a;
  short *local_38;
  short *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_3;
  local_38 = param_2;
  local_30 = &local_3a;
  FUN_1457011a6(param_1,local_24,&local_38,0);
  if (-1 < local_3a) {
    local_38 = &local_3a;
    local_30 = param_2;
    FUN_1460b1ede(param_1 + 0x50,local_24,&local_38,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460b1ede FUN_1460b1ede body=300 status=ok
// SIG undefined FUN_1460b1ede(void)

undefined4 *
FUN_1460b1ede(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  short sVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  short *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1460b20a6(param_1,local_50);
  puVar2 = (undefined8 *)param_3[1];
  sVar1 = *(short *)*param_3;
  *local_48 = sVar1;
  *(undefined8 *)(local_48 + 2) = *puVar2;
  local_48[6] = -1;
  local_48[7] = -1;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar4 = FUN_1460b200c(param_1,(int)sVar1,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (int)sVar1;
      *(uint *)(local_48 + 8) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1460b218e(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460b200c FUN_1460b200c body=154 status=ok
// SIG undefined FUN_1460b200c(void)

void FUN_1460b200c(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  short *psVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*psVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          *(undefined4 *)(psVar1 + 4) = *(undefined4 *)(param_3 + 4);
          *(undefined8 *)psVar1 = uVar2;
          FUN_148966f6a(param_1,*param_4);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = *(int *)(psVar1 + 6);
        uVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_1460b2030;
    }
  }
  uVar3 = 0;
LAB_1460b2030:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1460b20a6 FUN_1460b20a6 body=231 status=ok
// SIG undefined FUN_1460b20a6(void)

int * FUN_1460b20a6(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1460b218e FUN_1460b218e body=429 status=ok
// SIG undefined FUN_1460b218e(void)

void FUN_1460b218e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(short *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460b2348 FUN_1460b2348 body=1096 status=ok
// SIG undefined FUN_1460b2348(void)

longlong * FUN_1460b2348(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1400ea892();
  *param_1 = (longlong)&PTR_FUN_14ba9e790;
  param_1[5] = (longlong)&PTR_FUN_14ba9f210;
  param_1[6] = (longlong)&PTR_LAB_14ba9f250;
  param_1[0x55] = (longlong)&PTR_FUN_14ba9f2a0;
  param_1[0x56] = (longlong)&PTR_FUN_14ba9f320;
  param_1[0x57] = (longlong)&PTR_FUN_14ba9f330;
  param_1[0xca] = (longlong)&PTR_FUN_14ba9f360;
  param_1[0xcb] = (longlong)&PTR_FUN_14ba9f3c0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  FUN_1460b2790(param_1 + 0xd5);
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  *(undefined2 *)((longlong)param_1 + 0x872) = 1;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0;
  param_1[0x10f] = -0x407fffff40800000;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  bVar1 = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x9e) = bVar1;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) | 0x20;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 2;
  *(undefined2 *)(param_1 + 0x10e) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  if (*(int *)((longlong)param_1 + 0x67c) != 0) {
    FUN_14574ac34(param_1 + 0xce,0);
    bVar1 = *(byte *)((longlong)param_1 + 0x9e);
  }
  param_1[0xd2] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = bVar1 & 0x7f;
  *(bool *)((longlong)param_1 + 0x872) = 0 < DAT_14cbf8110;
  *(undefined2 *)((longlong)param_1 + 0x831) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x833) = 0;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  FUN_14127091c(param_1,0);
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cacfd60,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8208) {
    FUN_144b3d300(&DAT_14cbf8208);
    if (DAT_14cbf8208 == -1) {
      FUN_1458531b6(&DAT_14cbf81f0,L"/HairStrands/Materials/HairDebugMaterial.HairDebugMaterial",0);
      atexit(FUN_144419d1e);
      _Init_thread_footer(&DAT_14cbf8208);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8228) {
    FUN_144b3d300(&DAT_14cbf8228);
    if (DAT_14cbf8228 == -1) {
      FUN_1458531b6(&DAT_14cbf8210,L"/HairStrands/Materials/HairDefaultMaterial.HairDefaultMaterial"
                    ,0);
      atexit(FUN_144419d5d);
      _Init_thread_footer(&DAT_14cbf8228);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8248) {
    FUN_144b3d300(&DAT_14cbf8248);
    if (DAT_14cbf8248 == -1) {
      FUN_1458531b6(&DAT_14cbf8230,
                    L"/HairStrands/Materials/HairCardsDefaultMaterial.HairCardsDefaultMaterial",0);
      atexit(FUN_144419d9c);
      _Init_thread_footer(&DAT_14cbf8248);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8268) {
    FUN_144b3d300(&DAT_14cbf8268);
    if (DAT_14cbf8268 == -1) {
      FUN_1458531b6(&DAT_14cbf8250,
                    L"/HairStrands/Materials/HairMeshesDefaultMaterial.HairMeshesDefaultMaterial",0)
      ;
      atexit(FUN_144419ddb);
      _Init_thread_footer(&DAT_14cbf8268);
    }
  }
  lVar2 = DAT_14cbf8200;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cbf8200 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = DAT_14cbf8200;
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[0xea] = lVar2;
  lVar2 = DAT_14cbf8220;
  if ((bVar1 & 1) != 0) {
    if (DAT_14cbf8220 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = DAT_14cbf8220;
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xeb] = lVar2;
  lVar2 = DAT_14cbf8240;
  if ((bVar1 & 1) != 0) {
    if (DAT_14cbf8240 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = DAT_14cbf8240;
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xec] = lVar2;
  lVar2 = DAT_14cbf8260;
  if ((bVar1 & 1) != 0) {
    if (DAT_14cbf8260 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = DAT_14cbf8260;
    }
  }
  param_1[0xed] = lVar2;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  return param_1;
}



// FUNCTION 1460b2790 FUN_1460b2790 body=140 status=ok
// SIG undefined FUN_1460b2790(void)

undefined1 * FUN_1460b2790(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 1;
  *(undefined1 **)(param_1 + 0xc) = &DAT_3f8000003f800000;
  FUN_1400b22c2(param_1 + 0x18,&DAT_14a418301);
  *(undefined4 *)(param_1 + 0x28) = 0x42480000;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xc08ea80000000000;
  *(undefined4 *)(param_1 + 0x50) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x3c23d70a3a83126f;
  *(undefined8 *)(param_1 + 0x78) = 0x3f8000003a83126f;
  *(undefined8 *)(param_1 + 0x80) = 0x3dcccccd3dcccccd;
  *(undefined8 *)(param_1 + 0x88) = 0x3a83126f3f800000;
  return param_1;
}



// FUNCTION 1460b281c FUN_1460b281c body=358 status=ok
// SIG undefined FUN_1460b281c(void)

void FUN_1460b281c(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &LAB_148a7c402;
  local_28 = 0;
  FUN_1460b2984(*(longlong *)(param_1 + 0x50) + 0x4c0,param_1,&local_30);
  local_30 = &LAB_148a7c410;
  local_28 = 0;
  FUN_1460b2b2c(*(longlong *)(param_1 + 0x50) + 0x4d0,param_1,&local_30);
  local_30 = &LAB_145fd2a8a;
  local_28 = 0;
  FUN_1460b2cd4(*(longlong *)(param_1 + 0x50) + 0x4a0,param_1,&local_30);
  local_30 = &LAB_148a7c41e;
  local_28 = 0;
  FUN_1460b2e7c(*(longlong *)(param_1 + 0x50) + 0x4b0,param_1,&local_30);
  local_30 = &LAB_145b26b20;
  local_28 = 0;
  FUN_1460b3024(*(longlong *)(param_1 + 0x50) + 0x4e0,param_1,&local_30);
  local_30 = &LAB_145d4c946;
  local_28 = 0;
  FUN_1460b31cc(*(longlong *)(param_1 + 0x50) + 0x4f0,param_1,&local_30);
  local_30 = &LAB_148a7c42c;
  local_28 = 0;
  FUN_1460b3374(*(longlong *)(param_1 + 0x50) + 0x500,param_1,&local_30);
  local_30 = &LAB_145fcda22;
  local_28 = 0;
  FUN_1460b351c(*(longlong *)(param_1 + 0x50) + 0x490,param_1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460b2984 FUN_1460b2984 body=423 status=ok
// SIG undefined FUN_1460b2984(void)

void FUN_1460b2984(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b2a5a:
    *puVar5 = &PTR_LAB_14b4ea7b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea740;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b2a5a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4ea7b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea740;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b2b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b2b2c FUN_1460b2b2c body=423 status=ok
// SIG undefined FUN_1460b2b2c(void)

void FUN_1460b2b2c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b2c02:
    *puVar5 = &PTR_LAB_14b4ea890;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea820;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b2c02;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4ea890;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea820;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b2cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b2cd4 FUN_1460b2cd4 body=423 status=ok
// SIG undefined FUN_1460b2cd4(void)

void FUN_1460b2cd4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b2daa:
    *puVar5 = &PTR_LAB_14b4ea970;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea900;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b2daa;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4ea970;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea900;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b2e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b2e7c FUN_1460b2e7c body=423 status=ok
// SIG undefined FUN_1460b2e7c(void)

void FUN_1460b2e7c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b2f52:
    *puVar5 = &PTR_LAB_14b4eaa50;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea9e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b2f52;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4eaa50;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea9e0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b300b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b3024 FUN_1460b3024 body=423 status=ok
// SIG undefined FUN_1460b3024(void)

void FUN_1460b3024(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b30fa:
    *puVar5 = &PTR_LAB_14b4edbf0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eaac0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b30fa;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4edbf0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eaac0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b31b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b31cc FUN_1460b31cc body=423 status=ok
// SIG undefined FUN_1460b31cc(void)

void FUN_1460b31cc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b32a2:
    *puVar5 = &PTR_LAB_14b4eaba0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eab30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b32a2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4eaba0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eab30;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b335b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b3374 FUN_1460b3374 body=423 status=ok
// SIG undefined FUN_1460b3374(void)

void FUN_1460b3374(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b344a:
    *puVar5 = &PTR_LAB_14b4eac80;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eac10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b344a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4eac80;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4eac10;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b3503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b351c FUN_1460b351c body=423 status=ok
// SIG undefined FUN_1460b351c(void)

void FUN_1460b351c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1460b35f2:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e9ed0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1460b35f2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e9ed0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001460b36ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1460b36c4 FUN_1460b36c4 body=180 status=ok
// SIG undefined FUN_1460b36c4(void)

ulonglong FUN_1460b36c4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_1460b3716;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1460b3778(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_1460b3716:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1460b3778 FUN_1460b3778 body=132 status=ok
// SIG undefined FUN_1460b3778(void)

void FUN_1460b3778(longlong param_1,int param_2)

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



// FUNCTION 1460b37fc FUN_1460b37fc body=38 status=ok
// SIG undefined FUN_1460b37fc(void)

undefined8 FUN_1460b37fc(undefined8 param_1,int param_2)

{
  FUN_1460b3822();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460b3822 FUN_1460b3822 body=72 status=ok
// SIG undefined FUN_1460b3822(void)

void FUN_1460b3822(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa4cee0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1460b386a(param_1 + 0x15);
  FUN_1415d50de(param_1);
  return;
}



// FUNCTION 1460b386a FUN_1460b386a body=53 status=ok
// SIG undefined FUN_1460b386a(void)

void FUN_1460b386a(longlong *param_1)

{
  FUN_1460b38a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460b38a0 FUN_1460b38a0 body=88 status=ok
// SIG undefined FUN_1460b38a0(void)

void FUN_1460b38a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14594997e(param_1,0);
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



// FUNCTION 1460b38f8 FUN_1460b38f8 body=53 status=ok
// SIG undefined FUN_1460b38f8(void)

void FUN_1460b38f8(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1460b392e FUN_1460b392e body=73 status=ok
// SIG undefined FUN_1460b392e(void)

undefined8 * FUN_1460b392e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa4d080;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460b3978 FUN_1460b3978 body=65 status=ok
// SIG undefined FUN_1460b3978(void)

undefined8 * FUN_1460b3978(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b61b5e0;
  FUN_144a2da94(param_1 + 0x71);
  FUN_1460b39ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460b39ba FUN_1460b39ba body=91 status=ok
// SIG undefined FUN_1460b39ba(void)

void FUN_1460b39ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1b40a0;
  FUN_144a2da94(param_1 + 0x61);
  FUN_144a2da94(param_1 + 0x5a);
  FUN_144a2da94(param_1 + 0x53);
  FUN_144a2da94(param_1 + 0x4b);
  FUN_144a2da94(param_1 + 0x3b);
  FUN_14129db98(param_1);
  return;
}



// FUNCTION 1460b3a16 FUN_1460b3a16 body=275 status=ok
// SIG undefined FUN_1460b3a16(void)

longlong * FUN_1460b3a16(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1460b3b2c(&local_28);
  *param_2 = local_28;
  plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b9819a0;
  plVar2[2] = local_28;
  param_2[1] = (longlong)plVar2;
  if ((local_28 == 0) ||
     (((*(longlong *)(local_28 + 0x10) != 0 && (*(longlong *)(local_28 + 0x18) != 0)) &&
      (0 < *(int *)(*(longlong *)(local_28 + 0x18) + 8))))) goto LAB_1460b3aac;
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(local_28 + 0x10) = local_28;
    plVar3 = *(longlong **)(local_28 + 0x18);
    if (plVar3 == (longlong *)0x0) goto LAB_1460b3aac;
LAB_1460b3af0:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(local_28 + 0x18) = plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_1460b3aac;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(local_28 + 0x10) = local_28;
    if (*(longlong **)(local_28 + 0x18) != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(local_28 + 0x18);
      if (plVar3 != (longlong *)0x0) goto LAB_1460b3af0;
      *(longlong **)(local_28 + 0x18) = plVar2;
    }
  }
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
LAB_1460b3aac:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1460b3b2c FUN_1460b3b2c body=175 status=ok
// SIG undefined FUN_1460b3b2c(void)

undefined8 * FUN_1460b3b2c(undefined8 *param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x7a0);
  memset(_Dst,0,0x7a0);
  FUN_1460b3bdc(_Dst);
  *_Dst = &PTR_FUN_14b981780;
  _Dst[4] = &PTR_FUN_14b981830;
  _Dst[0xeb] = 0;
  *(undefined4 *)(_Dst + 0xec) = 0;
  _Dst[0xe6] = 0;
  _Dst[0xe7] = 0;
  _Dst[0xe8] = 0;
  *(undefined8 *)((longlong)_Dst + 0x764) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x76c) = 0;
  _Dst[0xef] = 0;
  *(undefined4 *)(_Dst + 0xf0) = 0;
  _Dst[0xf1] = 0;
  *(undefined4 *)(_Dst + 0xf2) = 0;
  LOCK();
  _Dst[0xf1] = 0;
  UNLOCK();
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 1460b3bdc FUN_1460b3bdc body=163 status=ok
// SIG undefined FUN_1460b3bdc(void)

undefined8 * FUN_1460b3bdc(undefined8 *param_1)

{
  FUN_1415d51d6();
  *param_1 = &PTR_FUN_14b981890;
  param_1[4] = &PTR_FUN_14b981940;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  return param_1;
}



// FUNCTION 1460b3c80 FUN_1460b3c80 body=287 status=ok
// SIG undefined FUN_1460b3c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b3c80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9acdc0) {
    FUN_144b3d300(&DAT_14c9acdc0);
    if (DAT_14c9acdc0 == -1) {
      FUN_1460b3da0();
      FUN_140db5666(&DAT_14c9acd18,2,&DAT_14c9accb0,L"TBasePassPSFSelfShadowedTranslucencyPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712af24,
                    FUN_14712aefc,FUN_1417469a0,&LAB_14712aef8,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9acd18 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c253);
      _Init_thread_footer(&DAT_14c9acdc0);
    }
  }
  return &DAT_14c9acd18;
}



// FUNCTION 1460b3da0 FUN_1460b3da0 body=205 status=ok
// SIG undefined FUN_1460b3da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b3da0(void)

{
  if ((DAT_14c9acd17 & 2) == 0) {
    DAT_14c9acd17 = DAT_14c9acd17 | 2;
    _DAT_14c9accb8 = L"TBasePassPSFSelfShadowedTranslucencyPolicy";
    _DAT_14c9accd0 = FUN_146826540;
    _DAT_14c9accd8 = FUN_146825d77;
    _DAT_14c9acce0 = FUN_146825fd6;
    _DAT_14c9acce8 = FUN_1407e02ea;
    _DAT_14c9accf0 = FUN_146826273;
    _DAT_14c9accc8 = FUN_14712aebe;
    _DAT_14c9acd08 = 0xffffffff00000110;
    _DAT_14c9acd10 = 8;
    DAT_14c9acd14 = 0;
    _DAT_14c9accf8 = &LAB_14712aef4;
    FUN_1460b3e6e();
    FUN_1407e00cc(&DAT_14c9accb0);
    return;
  }
  return;
}



// FUNCTION 1460b3e6e FUN_1460b3e6e body=133 status=ok
// SIG undefined FUN_1460b3e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b3e6e(void)

{
  _DAT_14c9b9068 = L"BASE";
  DAT_14c9b9092 = 4;
  FUN_145c860b2();
  _DAT_14c9b9078 = DAT_14c9accc0;
  _DAT_14c9b9070 = &DAT_14c9b8e20;
  _DAT_14c9b9080 = &LAB_14682652b;
  DAT_14c9accc0 = &DAT_14c9b9068;
  DAT_14c9acd15 = DAT_14c9acd15 + '\x01';
  _DAT_14c9b9088 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9acd16 = DAT_14c9acd16 + '\x01';
  }
  return;
}



// FUNCTION 1460b3ef4 FUN_1460b3ef4 body=287 status=ok
// SIG undefined FUN_1460b3ef4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b3ef4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9acee8) {
    FUN_144b3d300(&DAT_14c9acee8);
    if (DAT_14c9acee8 == -1) {
      FUN_1460b4014();
      FUN_140db5666(&DAT_14c9ace40,2,&DAT_14c9acdd8,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicySkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712afd0,
                    FUN_14712afa8,FUN_141746c62,&LAB_14712afa4,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ace40 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c25f);
      _Init_thread_footer(&DAT_14c9acee8);
    }
  }
  return &DAT_14c9ace40;
}



// FUNCTION 1460b4014 FUN_1460b4014 body=205 status=ok
// SIG undefined FUN_1460b4014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4014(void)

{
  if ((DAT_14c9ace3f & 2) == 0) {
    DAT_14c9ace3f = DAT_14c9ace3f | 2;
    _DAT_14c9acde0 = L"TBasePassPSFSelfShadowedTranslucencyPolicySkylightForceVelocity";
    _DAT_14c9acdf8 = FUN_146826540;
    _DAT_14c9ace00 = FUN_146825d77;
    _DAT_14c9ace08 = FUN_146825fd6;
    _DAT_14c9ace10 = FUN_1407e02ea;
    _DAT_14c9ace18 = FUN_146826273;
    _DAT_14c9acdf0 = FUN_14712af6a;
    _DAT_14c9ace30 = 0xffffffff00000110;
    _DAT_14c9ace38 = 8;
    DAT_14c9ace3c = 0;
    _DAT_14c9ace20 = &LAB_14712afa0;
    FUN_1460b40e2();
    FUN_1407e00cc(&DAT_14c9acdd8);
    return;
  }
  return;
}



// FUNCTION 1460b40e2 FUN_1460b40e2 body=133 status=ok
// SIG undefined FUN_1460b40e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b40e2(void)

{
  _DAT_14c9b90b8 = L"BASE";
  DAT_14c9b90e2 = 4;
  FUN_145c860b2();
  _DAT_14c9b90c8 = DAT_14c9acde8;
  _DAT_14c9b90c0 = &DAT_14c9b8e20;
  _DAT_14c9b90d0 = &LAB_14682652b;
  DAT_14c9acde8 = &DAT_14c9b90b8;
  DAT_14c9ace3d = DAT_14c9ace3d + '\x01';
  _DAT_14c9b90d8 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9ace3e = DAT_14c9ace3e + '\x01';
  }
  return;
}



// FUNCTION 1460b4168 FUN_1460b4168 body=287 status=ok
// SIG undefined FUN_1460b4168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b4168(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad138) {
    FUN_144b3d300(&DAT_14c9ad138);
    if (DAT_14c9ad138 == -1) {
      FUN_1460b4288();
      FUN_140db5666(&DAT_14c9ad090,2,&DAT_14c9ad028,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b128,
                    FUN_14712b100,FUN_14174732a,&LAB_14712b0fc,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ad090 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c277);
      _Init_thread_footer(&DAT_14c9ad138);
    }
  }
  return &DAT_14c9ad090;
}



// FUNCTION 1460b4288 FUN_1460b4288 body=205 status=ok
// SIG undefined FUN_1460b4288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4288(void)

{
  if ((DAT_14c9ad08f & 2) == 0) {
    DAT_14c9ad08f = DAT_14c9ad08f | 2;
    _DAT_14c9ad030 = L"TBasePassPSFSelfShadowedTranslucencyPolicySkylightGbxDigi";
    _DAT_14c9ad048 = FUN_146826540;
    _DAT_14c9ad050 = FUN_146825d77;
    _DAT_14c9ad058 = FUN_146825fd6;
    _DAT_14c9ad060 = FUN_1407e02ea;
    _DAT_14c9ad068 = FUN_146826273;
    _DAT_14c9ad040 = FUN_14712b0c2;
    _DAT_14c9ad080 = 0xffffffff00000110;
    _DAT_14c9ad088 = 8;
    DAT_14c9ad08c = 0;
    _DAT_14c9ad070 = &LAB_14712b0f8;
    FUN_1460b4356();
    FUN_1407e00cc(&DAT_14c9ad028);
    return;
  }
  return;
}



// FUNCTION 1460b4356 FUN_1460b4356 body=133 status=ok
// SIG undefined FUN_1460b4356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4356(void)

{
  _DAT_14c9b9158 = L"BASE";
  DAT_14c9b9182 = 4;
  FUN_145c860b2();
  _DAT_14c9b9168 = DAT_14c9ad038;
  _DAT_14c9b9160 = &DAT_14c9b8e20;
  _DAT_14c9b9170 = &LAB_14682652b;
  DAT_14c9ad038 = &DAT_14c9b9158;
  DAT_14c9ad08d = DAT_14c9ad08d + '\x01';
  _DAT_14c9b9178 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9ad08e = DAT_14c9ad08e + '\x01';
  }
  return;
}



// FUNCTION 1460b43dc FUN_1460b43dc body=287 status=ok
// SIG undefined FUN_1460b43dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b43dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad260) {
    FUN_144b3d300(&DAT_14c9ad260);
    if (DAT_14c9ad260 == -1) {
      FUN_1460b44fc();
      FUN_140db5666(&DAT_14c9ad1b8,2,&DAT_14c9ad150,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b1d4,
                    FUN_14712b1ac,FUN_1417476e6,&LAB_14712b1a8,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ad1b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c283);
      _Init_thread_footer(&DAT_14c9ad260);
    }
  }
  return &DAT_14c9ad1b8;
}



// FUNCTION 1460b44fc FUN_1460b44fc body=205 status=ok
// SIG undefined FUN_1460b44fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b44fc(void)

{
  if ((DAT_14c9ad1b7 & 2) == 0) {
    DAT_14c9ad1b7 = DAT_14c9ad1b7 | 2;
    _DAT_14c9ad158 = L"TBasePassPSFSelfShadowedTranslucencyPolicyGbxDigi";
    _DAT_14c9ad170 = FUN_146826540;
    _DAT_14c9ad178 = FUN_146825d77;
    _DAT_14c9ad180 = FUN_146825fd6;
    _DAT_14c9ad188 = FUN_1407e02ea;
    _DAT_14c9ad190 = FUN_146826273;
    _DAT_14c9ad168 = FUN_14712b16e;
    _DAT_14c9ad1a8 = 0xffffffff00000110;
    _DAT_14c9ad1b0 = 8;
    DAT_14c9ad1b4 = 0;
    _DAT_14c9ad198 = &LAB_14712b1a4;
    FUN_1460b45ca();
    FUN_1407e00cc(&DAT_14c9ad150);
    return;
  }
  return;
}



// FUNCTION 1460b45ca FUN_1460b45ca body=133 status=ok
// SIG undefined FUN_1460b45ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b45ca(void)

{
  _DAT_14c9b91a8 = L"BASE";
  DAT_14c9b91d2 = 4;
  FUN_145c860b2();
  _DAT_14c9b91b8 = DAT_14c9ad160;
  _DAT_14c9b91b0 = &DAT_14c9b8e20;
  _DAT_14c9b91c0 = &LAB_14682652b;
  DAT_14c9ad160 = &DAT_14c9b91a8;
  DAT_14c9ad1b5 = DAT_14c9ad1b5 + '\x01';
  _DAT_14c9b91c8 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9ad1b6 = DAT_14c9ad1b6 + '\x01';
  }
  return;
}



// FUNCTION 1460b4650 FUN_1460b4650 body=287 status=ok
// SIG undefined FUN_1460b4650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b4650(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad388) {
    FUN_144b3d300(&DAT_14c9ad388);
    if (DAT_14c9ad388 == -1) {
      FUN_1460b4770();
      FUN_140db5666(&DAT_14c9ad2e0,2,&DAT_14c9ad278,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicySkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b280,
                    FUN_14712b258,FUN_1417479be,&LAB_14712b254,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ad2e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c28f);
      _Init_thread_footer(&DAT_14c9ad388);
    }
  }
  return &DAT_14c9ad2e0;
}



// FUNCTION 1460b4770 FUN_1460b4770 body=205 status=ok
// SIG undefined FUN_1460b4770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4770(void)

{
  if ((DAT_14c9ad2df & 2) == 0) {
    DAT_14c9ad2df = DAT_14c9ad2df | 2;
    _DAT_14c9ad280 = L"TBasePassPSFSelfShadowedTranslucencyPolicySkylightGbxDigiForceVelocity";
    _DAT_14c9ad298 = FUN_146826540;
    _DAT_14c9ad2a0 = FUN_146825d77;
    _DAT_14c9ad2a8 = FUN_146825fd6;
    _DAT_14c9ad2b0 = FUN_1407e02ea;
    _DAT_14c9ad2b8 = FUN_146826273;
    _DAT_14c9ad290 = FUN_14712b21a;
    _DAT_14c9ad2d0 = 0xffffffff00000110;
    _DAT_14c9ad2d8 = 8;
    DAT_14c9ad2dc = 0;
    _DAT_14c9ad2c0 = &LAB_14712b250;
    FUN_1460b483e();
    FUN_1407e00cc(&DAT_14c9ad278);
    return;
  }
  return;
}



// FUNCTION 1460b483e FUN_1460b483e body=133 status=ok
// SIG undefined FUN_1460b483e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b483e(void)

{
  _DAT_14c9b91f8 = L"BASE";
  DAT_14c9b9222 = 4;
  FUN_145c860b2();
  _DAT_14c9b9208 = DAT_14c9ad288;
  _DAT_14c9b9200 = &DAT_14c9b8e20;
  _DAT_14c9b9210 = &LAB_14682652b;
  DAT_14c9ad288 = &DAT_14c9b91f8;
  DAT_14c9ad2dd = DAT_14c9ad2dd + '\x01';
  _DAT_14c9b9218 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9ad2de = DAT_14c9ad2de + '\x01';
  }
  return;
}



// FUNCTION 1460b48c4 FUN_1460b48c4 body=287 status=ok
// SIG undefined FUN_1460b48c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b48c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad4b0) {
    FUN_144b3d300(&DAT_14c9ad4b0);
    if (DAT_14c9ad4b0 == -1) {
      FUN_1460b49e4();
      FUN_140db5666(&DAT_14c9ad408,2,&DAT_14c9ad3a0,
                    L"TBasePassPSFSelfShadowedTranslucencyPolicyGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b32c,
                    FUN_14712b304,FUN_141747da8,&LAB_14712b300,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ad408 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c29b);
      _Init_thread_footer(&DAT_14c9ad4b0);
    }
  }
  return &DAT_14c9ad408;
}



// FUNCTION 1460b49e4 FUN_1460b49e4 body=205 status=ok
// SIG undefined FUN_1460b49e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b49e4(void)

{
  if ((DAT_14c9ad407 & 2) == 0) {
    DAT_14c9ad407 = DAT_14c9ad407 | 2;
    _DAT_14c9ad3a8 = L"TBasePassPSFSelfShadowedTranslucencyPolicyGbxDigiForceVelocity";
    _DAT_14c9ad3c0 = FUN_146826540;
    _DAT_14c9ad3c8 = FUN_146825d77;
    _DAT_14c9ad3d0 = FUN_146825fd6;
    _DAT_14c9ad3d8 = FUN_1407e02ea;
    _DAT_14c9ad3e0 = FUN_146826273;
    _DAT_14c9ad3b8 = FUN_14712b2c6;
    _DAT_14c9ad3f8 = 0xffffffff00000110;
    _DAT_14c9ad400 = 8;
    DAT_14c9ad404 = 0;
    _DAT_14c9ad3e8 = &LAB_14712b2fc;
    FUN_1460b4ab2();
    FUN_1407e00cc(&DAT_14c9ad3a0);
    return;
  }
  return;
}



// FUNCTION 1460b4ab2 FUN_1460b4ab2 body=133 status=ok
// SIG undefined FUN_1460b4ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4ab2(void)

{
  _DAT_14c9b9248 = L"BASE";
  DAT_14c9b9272 = 4;
  FUN_145c860b2();
  _DAT_14c9b9258 = DAT_14c9ad3b0;
  _DAT_14c9b9250 = &DAT_14c9b8e20;
  _DAT_14c9b9260 = &LAB_14682652b;
  DAT_14c9ad3b0 = &DAT_14c9b9248;
  DAT_14c9ad405 = DAT_14c9ad405 + '\x01';
  _DAT_14c9b9268 = 0x100000000;
  if (DAT_14c9b8e84 != '\0') {
    DAT_14c9ad406 = DAT_14c9ad406 + '\x01';
  }
  return;
}



// FUNCTION 1460b4b38 FUN_1460b4b38 body=287 status=ok
// SIG undefined FUN_1460b4b38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b4b38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad700) {
    FUN_144b3d300(&DAT_14c9ad700);
    if (DAT_14c9ad700 == -1) {
      FUN_1460b4c58();
      FUN_140db5666(&DAT_14c9ad658,2,&DAT_14c9ad5f0,L"TBasePassCSFSelfShadowedTranslucencyPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712b49c,
                    FUN_14712b474,FUN_1417483cc,&LAB_14712b470,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9ad658 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2b3);
      _Init_thread_footer(&DAT_14c9ad700);
    }
  }
  return &DAT_14c9ad658;
}



// FUNCTION 1460b4c58 FUN_1460b4c58 body=205 status=ok
// SIG undefined FUN_1460b4c58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4c58(void)

{
  if ((DAT_14c9ad657 & 2) == 0) {
    DAT_14c9ad657 = DAT_14c9ad657 | 2;
    _DAT_14c9ad5f8 = L"TBasePassCSFSelfShadowedTranslucencyPolicy";
    _DAT_14c9ad610 = FUN_146826540;
    _DAT_14c9ad618 = FUN_146825d77;
    _DAT_14c9ad620 = FUN_146825fd6;
    _DAT_14c9ad628 = FUN_1407e02ea;
    _DAT_14c9ad630 = FUN_146826273;
    _DAT_14c9ad608 = FUN_14712b436;
    _DAT_14c9ad648 = 0xffffffff00000128;
    _DAT_14c9ad650 = 8;
    DAT_14c9ad654 = 0;
    _DAT_14c9ad638 = &LAB_14712b46c;
    FUN_1460b4d26();
    FUN_1407e00cc(&DAT_14c9ad5f0);
    return;
  }
  return;
}



// FUNCTION 1460b4d26 FUN_1460b4d26 body=133 status=ok
// SIG undefined FUN_1460b4d26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4d26(void)

{
  _DAT_14c9b9750 = L"BASE";
  DAT_14c9b977a = 4;
  FUN_145d1e6fc();
  _DAT_14c9b9760 = DAT_14c9ad600;
  _DAT_14c9b9758 = &DAT_14c9b92c8;
  _DAT_14c9b9768 = &LAB_14682652b;
  DAT_14c9ad600 = &DAT_14c9b9750;
  DAT_14c9ad655 = DAT_14c9ad655 + '\x01';
  _DAT_14c9b9770 = 0x100000000;
  if (DAT_14c9b932c != '\0') {
    DAT_14c9ad656 = DAT_14c9ad656 + '\x01';
  }
  return;
}



// FUNCTION 1460b4dac FUN_1460b4dac body=287 status=ok
// SIG undefined FUN_1460b4dac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b4dac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad828) {
    FUN_144b3d300(&DAT_14c9ad828);
    if (DAT_14c9ad828 == -1) {
      FUN_1460b4ecc();
      FUN_140db5666(&DAT_14c9ad780,2,&DAT_14c9ad718,
                    L"TBasePassWorkGraphCSFSelfShadowedTranslucencyPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712b560,
                    FUN_14712b538,FUN_1417485de,&LAB_14712b534,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9ad780 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2bf);
      _Init_thread_footer(&DAT_14c9ad828);
    }
  }
  return &DAT_14c9ad780;
}



// FUNCTION 1460b4ecc FUN_1460b4ecc body=205 status=ok
// SIG undefined FUN_1460b4ecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4ecc(void)

{
  if ((DAT_14c9ad77f & 2) == 0) {
    DAT_14c9ad77f = DAT_14c9ad77f | 2;
    _DAT_14c9ad720 = L"TBasePassWorkGraphCSFSelfShadowedTranslucencyPolicySkylight";
    _DAT_14c9ad738 = FUN_146826540;
    _DAT_14c9ad740 = FUN_146825d77;
    _DAT_14c9ad748 = FUN_146825fd6;
    _DAT_14c9ad750 = FUN_1407e02ea;
    _DAT_14c9ad758 = FUN_146826273;
    _DAT_14c9ad730 = FUN_14712b4fa;
    _DAT_14c9ad770 = 0xffffffff00000128;
    _DAT_14c9ad778 = 8;
    DAT_14c9ad77c = 0;
    _DAT_14c9ad760 = &LAB_14712b530;
    FUN_1460b4f9a();
    FUN_1407e00cc(&DAT_14c9ad718);
    return;
  }
  return;
}



// FUNCTION 1460b4f9a FUN_1460b4f9a body=133 status=ok
// SIG undefined FUN_1460b4f9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b4f9a(void)

{
  _DAT_14c9b97a0 = L"BASE";
  DAT_14c9b97ca = 4;
  FUN_145d1e6fc();
  _DAT_14c9b97b0 = DAT_14c9ad728;
  _DAT_14c9b97a8 = &DAT_14c9b92c8;
  _DAT_14c9b97b8 = &LAB_14682652b;
  DAT_14c9ad728 = &DAT_14c9b97a0;
  DAT_14c9ad77d = DAT_14c9ad77d + '\x01';
  _DAT_14c9b97c0 = 0x100000000;
  if (DAT_14c9b932c != '\0') {
    DAT_14c9ad77e = DAT_14c9ad77e + '\x01';
  }
  return;
}



// FUNCTION 1460b5020 FUN_1460b5020 body=287 status=ok
// SIG undefined FUN_1460b5020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b5020(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ad950) {
    FUN_144b3d300(&DAT_14c9ad950);
    if (DAT_14c9ad950 == -1) {
      FUN_1460b5140();
      FUN_140db5666(&DAT_14c9ad8a8,2,&DAT_14c9ad840,
                    L"TBasePassWorkGraphCSFSelfShadowedTranslucencyPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712b624,
                    FUN_14712b5fc,FUN_141748900,&LAB_14712b5f8,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9ad8a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2cb);
      _Init_thread_footer(&DAT_14c9ad950);
    }
  }
  return &DAT_14c9ad8a8;
}



// FUNCTION 1460b5140 FUN_1460b5140 body=205 status=ok
// SIG undefined FUN_1460b5140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5140(void)

{
  if ((DAT_14c9ad8a7 & 2) == 0) {
    DAT_14c9ad8a7 = DAT_14c9ad8a7 | 2;
    _DAT_14c9ad848 = L"TBasePassWorkGraphCSFSelfShadowedTranslucencyPolicy";
    _DAT_14c9ad860 = FUN_146826540;
    _DAT_14c9ad868 = FUN_146825d77;
    _DAT_14c9ad870 = FUN_146825fd6;
    _DAT_14c9ad878 = FUN_1407e02ea;
    _DAT_14c9ad880 = FUN_146826273;
    _DAT_14c9ad858 = FUN_14712b5be;
    _DAT_14c9ad898 = 0xffffffff00000128;
    _DAT_14c9ad8a0 = 8;
    DAT_14c9ad8a4 = 0;
    _DAT_14c9ad888 = &LAB_14712b5f4;
    FUN_1460b520e();
    FUN_1407e00cc(&DAT_14c9ad840);
    return;
  }
  return;
}



// FUNCTION 1460b520e FUN_1460b520e body=133 status=ok
// SIG undefined FUN_1460b520e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b520e(void)

{
  _DAT_14c9b97f0 = L"BASE";
  DAT_14c9b981a = 4;
  FUN_145d1e6fc();
  _DAT_14c9b9800 = DAT_14c9ad850;
  _DAT_14c9b97f8 = &DAT_14c9b92c8;
  _DAT_14c9b9808 = &LAB_14682652b;
  DAT_14c9ad850 = &DAT_14c9b97f0;
  DAT_14c9ad8a5 = DAT_14c9ad8a5 + '\x01';
  _DAT_14c9b9810 = 0x100000000;
  if (DAT_14c9b932c != '\0') {
    DAT_14c9ad8a6 = DAT_14c9ad8a6 + '\x01';
  }
  return;
}



// FUNCTION 1460b5294 FUN_1460b5294 body=287 status=ok
// SIG undefined FUN_1460b5294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b5294(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9adcc8) {
    FUN_144b3d300(&DAT_14c9adcc8);
    if (DAT_14c9adcc8 == -1) {
      FUN_1460b53b4();
      FUN_140db5666(&DAT_14c9adc20,2,&DAT_14c9adbb8,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b876,
                    FUN_14712b84e,FUN_141749062,&LAB_14712b84a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9adc20 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2ef);
      _Init_thread_footer(&DAT_14c9adcc8);
    }
  }
  return &DAT_14c9adc20;
}



// FUNCTION 1460b53b4 FUN_1460b53b4 body=205 status=ok
// SIG undefined FUN_1460b53b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b53b4(void)

{
  if ((DAT_14c9adc1f & 2) == 0) {
    DAT_14c9adc1f = DAT_14c9adc1f | 2;
    _DAT_14c9adbc0 = L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicy";
    _DAT_14c9adbd8 = FUN_146826540;
    _DAT_14c9adbe0 = FUN_146825d77;
    _DAT_14c9adbe8 = FUN_146825fd6;
    _DAT_14c9adbf0 = FUN_1407e02ea;
    _DAT_14c9adbf8 = FUN_146826273;
    _DAT_14c9adbd0 = FUN_14712b810;
    _DAT_14c9adc10 = 0xffffffff00000118;
    _DAT_14c9adc18 = 8;
    DAT_14c9adc1c = 0;
    _DAT_14c9adc00 = &LAB_14712b846;
    FUN_1460b5482();
    FUN_1407e00cc(&DAT_14c9adbb8);
    return;
  }
  return;
}



// FUNCTION 1460b5482 FUN_1460b5482 body=133 status=ok
// SIG undefined FUN_1460b5482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5482(void)

{
  _DAT_14c9b9cb8 = L"BASE";
  DAT_14c9b9ce2 = 4;
  FUN_145cd447a();
  _DAT_14c9b9cc8 = DAT_14c9adbc8;
  _DAT_14c9b9cc0 = &DAT_14c9b9a40;
  _DAT_14c9b9cd0 = &LAB_14682652b;
  DAT_14c9adbc8 = &DAT_14c9b9cb8;
  DAT_14c9adc1d = DAT_14c9adc1d + '\x01';
  _DAT_14c9b9cd8 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9adc1e = DAT_14c9adc1e + '\x01';
  }
  return;
}



// FUNCTION 1460b5508 FUN_1460b5508 body=287 status=ok
// SIG undefined FUN_1460b5508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b5508(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9addf0) {
    FUN_144b3d300(&DAT_14c9addf0);
    if (DAT_14c9addf0 == -1) {
      FUN_1460b5628();
      FUN_140db5666(&DAT_14c9add48,2,&DAT_14c9adce0,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylightForceVelocity"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b92c,
                    FUN_14712b904,FUN_141749338,&LAB_14712b900,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9add48 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2fb);
      _Init_thread_footer(&DAT_14c9addf0);
    }
  }
  return &DAT_14c9add48;
}



// FUNCTION 1460b5628 FUN_1460b5628 body=205 status=ok
// SIG undefined FUN_1460b5628(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5628(void)

{
  if ((DAT_14c9add47 & 2) == 0) {
    DAT_14c9add47 = DAT_14c9add47 | 2;
    _DAT_14c9adce8 =
         L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylightForceVelocity";
    _DAT_14c9add00 = FUN_146826540;
    _DAT_14c9add08 = FUN_146825d77;
    _DAT_14c9add10 = FUN_146825fd6;
    _DAT_14c9add18 = FUN_1407e02ea;
    _DAT_14c9add20 = FUN_146826273;
    _DAT_14c9adcf8 = FUN_14712b8c6;
    _DAT_14c9add38 = 0xffffffff00000118;
    _DAT_14c9add40 = 8;
    DAT_14c9add44 = 0;
    _DAT_14c9add28 = &LAB_14712b8fc;
    FUN_1460b56f6();
    FUN_1407e00cc(&DAT_14c9adce0);
    return;
  }
  return;
}



// FUNCTION 1460b56f6 FUN_1460b56f6 body=133 status=ok
// SIG undefined FUN_1460b56f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b56f6(void)

{
  _DAT_14c9b9d08 = L"BASE";
  DAT_14c9b9d32 = 4;
  FUN_145cd447a();
  _DAT_14c9b9d18 = DAT_14c9adcf0;
  _DAT_14c9b9d10 = &DAT_14c9b9a40;
  _DAT_14c9b9d20 = &LAB_14682652b;
  DAT_14c9adcf0 = &DAT_14c9b9d08;
  DAT_14c9add45 = DAT_14c9add45 + '\x01';
  _DAT_14c9b9d28 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9add46 = DAT_14c9add46 + '\x01';
  }
  return;
}



// FUNCTION 1460b577c FUN_1460b577c body=287 status=ok
// SIG undefined FUN_1460b577c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b577c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9adf18) {
    FUN_144b3d300(&DAT_14c9adf18);
    if (DAT_14c9adf18 == -1) {
      FUN_1460b589c();
      FUN_140db5666(&DAT_14c9ade70,2,&DAT_14c9ade08,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712b9e2,
                    FUN_14712b9ba,FUN_141749712,&LAB_14712b9b6,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9ade70 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c307);
      _Init_thread_footer(&DAT_14c9adf18);
    }
  }
  return &DAT_14c9ade70;
}



// FUNCTION 1460b589c FUN_1460b589c body=205 status=ok
// SIG undefined FUN_1460b589c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b589c(void)

{
  if ((DAT_14c9ade6f & 2) == 0) {
    DAT_14c9ade6f = DAT_14c9ade6f | 2;
    _DAT_14c9ade10 = L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicyForceVelocity";
    _DAT_14c9ade28 = FUN_146826540;
    _DAT_14c9ade30 = FUN_146825d77;
    _DAT_14c9ade38 = FUN_146825fd6;
    _DAT_14c9ade40 = FUN_1407e02ea;
    _DAT_14c9ade48 = FUN_146826273;
    _DAT_14c9ade20 = FUN_14712b97c;
    _DAT_14c9ade60 = 0xffffffff00000118;
    _DAT_14c9ade68 = 8;
    DAT_14c9ade6c = 0;
    _DAT_14c9ade50 = &LAB_14712b9b2;
    FUN_1460b596a();
    FUN_1407e00cc(&DAT_14c9ade08);
    return;
  }
  return;
}



// FUNCTION 1460b596a FUN_1460b596a body=133 status=ok
// SIG undefined FUN_1460b596a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b596a(void)

{
  _DAT_14c9b9d58 = L"BASE";
  DAT_14c9b9d82 = 4;
  FUN_145cd447a();
  _DAT_14c9b9d68 = DAT_14c9ade18;
  _DAT_14c9b9d60 = &DAT_14c9b9a40;
  _DAT_14c9b9d70 = &LAB_14682652b;
  DAT_14c9ade18 = &DAT_14c9b9d58;
  DAT_14c9ade6d = DAT_14c9ade6d + '\x01';
  _DAT_14c9b9d78 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9ade6e = DAT_14c9ade6e + '\x01';
  }
  return;
}



// FUNCTION 1460b59f0 FUN_1460b59f0 body=287 status=ok
// SIG undefined FUN_1460b59f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b59f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae040) {
    FUN_144b3d300(&DAT_14c9ae040);
    if (DAT_14c9ae040 == -1) {
      FUN_1460b5b10();
      FUN_140db5666(&DAT_14c9adf98,2,&DAT_14c9adf30,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ba98,
                    FUN_14712ba70,FUN_141749a16,&LAB_14712ba6c,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9adf98 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c313);
      _Init_thread_footer(&DAT_14c9ae040);
    }
  }
  return &DAT_14c9adf98;
}



// FUNCTION 1460b5b10 FUN_1460b5b10 body=205 status=ok
// SIG undefined FUN_1460b5b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5b10(void)

{
  if ((DAT_14c9adf97 & 2) == 0) {
    DAT_14c9adf97 = DAT_14c9adf97 | 2;
    _DAT_14c9adf38 = L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylightGbxDigi";
    _DAT_14c9adf50 = FUN_146826540;
    _DAT_14c9adf58 = FUN_146825d77;
    _DAT_14c9adf60 = FUN_146825fd6;
    _DAT_14c9adf68 = FUN_1407e02ea;
    _DAT_14c9adf70 = FUN_146826273;
    _DAT_14c9adf48 = FUN_14712ba32;
    _DAT_14c9adf88 = 0xffffffff00000118;
    _DAT_14c9adf90 = 8;
    DAT_14c9adf94 = 0;
    _DAT_14c9adf78 = &LAB_14712ba68;
    FUN_1460b5bde();
    FUN_1407e00cc(&DAT_14c9adf30);
    return;
  }
  return;
}



// FUNCTION 1460b5bde FUN_1460b5bde body=133 status=ok
// SIG undefined FUN_1460b5bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5bde(void)

{
  _DAT_14c9b9da8 = L"BASE";
  DAT_14c9b9dd2 = 4;
  FUN_145cd447a();
  _DAT_14c9b9db8 = DAT_14c9adf40;
  _DAT_14c9b9db0 = &DAT_14c9b9a40;
  _DAT_14c9b9dc0 = &LAB_14682652b;
  DAT_14c9adf40 = &DAT_14c9b9da8;
  DAT_14c9adf95 = DAT_14c9adf95 + '\x01';
  _DAT_14c9b9dc8 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9adf96 = DAT_14c9adf96 + '\x01';
  }
  return;
}



// FUNCTION 1460b5c64 FUN_1460b5c64 body=287 status=ok
// SIG undefined FUN_1460b5c64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b5c64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae168) {
    FUN_144b3d300(&DAT_14c9ae168);
    if (DAT_14c9ae168 == -1) {
      FUN_1460b5d84();
      FUN_140db5666(&DAT_14c9ae0c0,2,&DAT_14c9ae058,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712bb4e,
                    FUN_14712bb26,FUN_141749ddc,&LAB_14712bb22,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9ae0c0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c31f);
      _Init_thread_footer(&DAT_14c9ae168);
    }
  }
  return &DAT_14c9ae0c0;
}



// FUNCTION 1460b5d84 FUN_1460b5d84 body=205 status=ok
// SIG undefined FUN_1460b5d84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5d84(void)

{
  if ((DAT_14c9ae0bf & 2) == 0) {
    DAT_14c9ae0bf = DAT_14c9ae0bf | 2;
    _DAT_14c9ae060 = L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicyGbxDigi";
    _DAT_14c9ae078 = FUN_146826540;
    _DAT_14c9ae080 = FUN_146825d77;
    _DAT_14c9ae088 = FUN_146825fd6;
    _DAT_14c9ae090 = FUN_1407e02ea;
    _DAT_14c9ae098 = FUN_146826273;
    _DAT_14c9ae070 = FUN_14712bae8;
    _DAT_14c9ae0b0 = 0xffffffff00000118;
    _DAT_14c9ae0b8 = 8;
    DAT_14c9ae0bc = 0;
    _DAT_14c9ae0a0 = &LAB_14712bb1e;
    FUN_1460b5e52();
    FUN_1407e00cc(&DAT_14c9ae058);
    return;
  }
  return;
}



// FUNCTION 1460b5e52 FUN_1460b5e52 body=133 status=ok
// SIG undefined FUN_1460b5e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5e52(void)

{
  _DAT_14c9b9df8 = L"BASE";
  DAT_14c9b9e22 = 4;
  FUN_145cd447a();
  _DAT_14c9b9e08 = DAT_14c9ae068;
  _DAT_14c9b9e00 = &DAT_14c9b9a40;
  _DAT_14c9b9e10 = &LAB_14682652b;
  DAT_14c9ae068 = &DAT_14c9b9df8;
  DAT_14c9ae0bd = DAT_14c9ae0bd + '\x01';
  _DAT_14c9b9e18 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9ae0be = DAT_14c9ae0be + '\x01';
  }
  return;
}



// FUNCTION 1460b5ed8 FUN_1460b5ed8 body=287 status=ok
// SIG undefined FUN_1460b5ed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b5ed8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae3b8) {
    FUN_144b3d300(&DAT_14c9ae3b8);
    if (DAT_14c9ae3b8 == -1) {
      FUN_1460b5ff8();
      FUN_140db5666(&DAT_14c9ae310,2,&DAT_14c9ae2a8,
                    L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicyGbxDigiForceVelocity"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712bcba,
                    FUN_14712bc92,FUN_14174a4c0,&LAB_14712bc8e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9ae310 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c337);
      _Init_thread_footer(&DAT_14c9ae3b8);
    }
  }
  return &DAT_14c9ae310;
}



// FUNCTION 1460b5ff8 FUN_1460b5ff8 body=205 status=ok
// SIG undefined FUN_1460b5ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b5ff8(void)

{
  if ((DAT_14c9ae30f & 2) == 0) {
    DAT_14c9ae30f = DAT_14c9ae30f | 2;
    _DAT_14c9ae2b0 =
         L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicyGbxDigiForceVelocity";
    _DAT_14c9ae2c8 = FUN_146826540;
    _DAT_14c9ae2d0 = FUN_146825d77;
    _DAT_14c9ae2d8 = FUN_146825fd6;
    _DAT_14c9ae2e0 = FUN_1407e02ea;
    _DAT_14c9ae2e8 = FUN_146826273;
    _DAT_14c9ae2c0 = FUN_14712bc54;
    _DAT_14c9ae300 = 0xffffffff00000118;
    _DAT_14c9ae308 = 8;
    DAT_14c9ae30c = 0;
    _DAT_14c9ae2f0 = &LAB_14712bc8a;
    FUN_1460b60c6();
    FUN_1407e00cc(&DAT_14c9ae2a8);
    return;
  }
  return;
}



// FUNCTION 1460b60c6 FUN_1460b60c6 body=133 status=ok
// SIG undefined FUN_1460b60c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b60c6(void)

{
  _DAT_14c9b9e98 = L"BASE";
  DAT_14c9b9ec2 = 4;
  FUN_145cd447a();
  _DAT_14c9b9ea8 = DAT_14c9ae2b8;
  _DAT_14c9b9ea0 = &DAT_14c9b9a40;
  _DAT_14c9b9eb0 = &LAB_14682652b;
  DAT_14c9ae2b8 = &DAT_14c9b9e98;
  DAT_14c9ae30d = DAT_14c9ae30d + '\x01';
  _DAT_14c9b9eb8 = 0x100000000;
  if (DAT_14c9b9aa4 != '\0') {
    DAT_14c9ae30e = DAT_14c9ae30e + '\x01';
  }
  return;
}



// FUNCTION 1460b614c FUN_1460b614c body=287 status=ok
// SIG undefined FUN_1460b614c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b614c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae608) {
    FUN_144b3d300(&DAT_14c9ae608);
    if (DAT_14c9ae608 == -1) {
      FUN_1460b626c();
      FUN_140db5666(&DAT_14c9ae560,2,&DAT_14c9ae4f8,
                    L"TBasePassCSFSelfShadowedCachedPointIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712be36,
                    FUN_14712be0e,FUN_14174aafc,&LAB_14712be0a,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9ae560 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c34f);
      _Init_thread_footer(&DAT_14c9ae608);
    }
  }
  return &DAT_14c9ae560;
}



// FUNCTION 1460b626c FUN_1460b626c body=205 status=ok
// SIG undefined FUN_1460b626c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b626c(void)

{
  if ((DAT_14c9ae55f & 2) == 0) {
    DAT_14c9ae55f = DAT_14c9ae55f | 2;
    _DAT_14c9ae500 = L"TBasePassCSFSelfShadowedCachedPointIndirectLightingPolicy";
    _DAT_14c9ae518 = FUN_146826540;
    _DAT_14c9ae520 = FUN_146825d77;
    _DAT_14c9ae528 = FUN_146825fd6;
    _DAT_14c9ae530 = FUN_1407e02ea;
    _DAT_14c9ae538 = FUN_146826273;
    _DAT_14c9ae510 = FUN_14712bdd0;
    _DAT_14c9ae550 = 0xffffffff00000130;
    _DAT_14c9ae558 = 8;
    DAT_14c9ae55c = 0;
    _DAT_14c9ae540 = &LAB_14712be06;
    FUN_1460b633a();
    FUN_1407e00cc(&DAT_14c9ae4f8);
    return;
  }
  return;
}



// FUNCTION 1460b633a FUN_1460b633a body=133 status=ok
// SIG undefined FUN_1460b633a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b633a(void)

{
  _DAT_14c9ba3d0 = L"BASE";
  DAT_14c9ba3fa = 4;
  FUN_145d260e8();
  _DAT_14c9ba3e0 = DAT_14c9ae508;
  _DAT_14c9ba3d8 = &DAT_14c9b9f18;
  _DAT_14c9ba3e8 = &LAB_14682652b;
  DAT_14c9ae508 = &DAT_14c9ba3d0;
  DAT_14c9ae55d = DAT_14c9ae55d + '\x01';
  _DAT_14c9ba3f0 = 0x100000000;
  if (DAT_14c9b9f7c != '\0') {
    DAT_14c9ae55e = DAT_14c9ae55e + '\x01';
  }
  return;
}



// FUNCTION 1460b63c0 FUN_1460b63c0 body=287 status=ok
// SIG undefined FUN_1460b63c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b63c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae730) {
    FUN_144b3d300(&DAT_14c9ae730);
    if (DAT_14c9ae730 == -1) {
      FUN_1460b64e0();
      FUN_140db5666(&DAT_14c9ae688,2,&DAT_14c9ae620,
                    L"TBasePassWorkGraphCSFSelfShadowedCachedPointIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712befc,
                    FUN_14712bed4,FUN_14174ad16,&LAB_14712bed0,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9ae688 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c35b);
      _Init_thread_footer(&DAT_14c9ae730);
    }
  }
  return &DAT_14c9ae688;
}



// FUNCTION 1460b64e0 FUN_1460b64e0 body=205 status=ok
// SIG undefined FUN_1460b64e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b64e0(void)

{
  if ((DAT_14c9ae687 & 2) == 0) {
    DAT_14c9ae687 = DAT_14c9ae687 | 2;
    _DAT_14c9ae628 = L"TBasePassWorkGraphCSFSelfShadowedCachedPointIndirectLightingPolicySkylight";
    _DAT_14c9ae640 = FUN_146826540;
    _DAT_14c9ae648 = FUN_146825d77;
    _DAT_14c9ae650 = FUN_146825fd6;
    _DAT_14c9ae658 = FUN_1407e02ea;
    _DAT_14c9ae660 = FUN_146826273;
    _DAT_14c9ae638 = FUN_14712be96;
    _DAT_14c9ae678 = 0xffffffff00000130;
    _DAT_14c9ae680 = 8;
    DAT_14c9ae684 = 0;
    _DAT_14c9ae668 = &LAB_14712becc;
    FUN_1460b65ae();
    FUN_1407e00cc(&DAT_14c9ae620);
    return;
  }
  return;
}



// FUNCTION 1460b65ae FUN_1460b65ae body=133 status=ok
// SIG undefined FUN_1460b65ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b65ae(void)

{
  _DAT_14c9ba420 = L"BASE";
  DAT_14c9ba44a = 4;
  FUN_145d260e8();
  _DAT_14c9ba430 = DAT_14c9ae630;
  _DAT_14c9ba428 = &DAT_14c9b9f18;
  _DAT_14c9ba438 = &LAB_14682652b;
  DAT_14c9ae630 = &DAT_14c9ba420;
  DAT_14c9ae685 = DAT_14c9ae685 + '\x01';
  _DAT_14c9ba440 = 0x100000000;
  if (DAT_14c9b9f7c != '\0') {
    DAT_14c9ae686 = DAT_14c9ae686 + '\x01';
  }
  return;
}



// FUNCTION 1460b6634 FUN_1460b6634 body=287 status=ok
// SIG undefined FUN_1460b6634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b6634(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae858) {
    FUN_144b3d300(&DAT_14c9ae858);
    if (DAT_14c9ae858 == -1) {
      FUN_1460b6754();
      FUN_140db5666(&DAT_14c9ae7b0,2,&DAT_14c9ae748,
                    L"TBasePassWorkGraphCSFSelfShadowedCachedPointIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712bfc2,
                    FUN_14712bf9a,FUN_14174b04c,&LAB_14712bf96,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9ae7b0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c367);
      _Init_thread_footer(&DAT_14c9ae858);
    }
  }
  return &DAT_14c9ae7b0;
}



// FUNCTION 1460b6754 FUN_1460b6754 body=205 status=ok
// SIG undefined FUN_1460b6754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6754(void)

{
  if ((DAT_14c9ae7af & 2) == 0) {
    DAT_14c9ae7af = DAT_14c9ae7af | 2;
    _DAT_14c9ae750 = L"TBasePassWorkGraphCSFSelfShadowedCachedPointIndirectLightingPolicy";
    _DAT_14c9ae768 = FUN_146826540;
    _DAT_14c9ae770 = FUN_146825d77;
    _DAT_14c9ae778 = FUN_146825fd6;
    _DAT_14c9ae780 = FUN_1407e02ea;
    _DAT_14c9ae788 = FUN_146826273;
    _DAT_14c9ae760 = FUN_14712bf5c;
    _DAT_14c9ae7a0 = 0xffffffff00000130;
    _DAT_14c9ae7a8 = 8;
    DAT_14c9ae7ac = 0;
    _DAT_14c9ae790 = &LAB_14712bf92;
    FUN_1460b6822();
    FUN_1407e00cc(&DAT_14c9ae748);
    return;
  }
  return;
}



// FUNCTION 1460b6822 FUN_1460b6822 body=133 status=ok
// SIG undefined FUN_1460b6822(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6822(void)

{
  _DAT_14c9ba470 = L"BASE";
  DAT_14c9ba49a = 4;
  FUN_145d260e8();
  _DAT_14c9ba480 = DAT_14c9ae758;
  _DAT_14c9ba478 = &DAT_14c9b9f18;
  _DAT_14c9ba488 = &LAB_14682652b;
  DAT_14c9ae758 = &DAT_14c9ba470;
  DAT_14c9ae7ad = DAT_14c9ae7ad + '\x01';
  _DAT_14c9ba490 = 0x100000000;
  if (DAT_14c9b9f7c != '\0') {
    DAT_14c9ae7ae = DAT_14c9ae7ae + '\x01';
  }
  return;
}



// FUNCTION 1460b68a8 FUN_1460b68a8 body=287 status=ok
// SIG undefined FUN_1460b68a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b68a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aebd0) {
    FUN_144b3d300(&DAT_14c9aebd0);
    if (DAT_14c9aebd0 == -1) {
      FUN_1460b69c8();
      FUN_140db5666(&DAT_14c9aeb28,2,&DAT_14c9aeac0,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c216,
                    FUN_14712c1ee,FUN_14174b7ca,&LAB_14712c1ea,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9aeb28 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c38b);
      _Init_thread_footer(&DAT_14c9aebd0);
    }
  }
  return &DAT_14c9aeb28;
}



// FUNCTION 1460b69c8 FUN_1460b69c8 body=205 status=ok
// SIG undefined FUN_1460b69c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b69c8(void)

{
  if ((DAT_14c9aeb27 & 2) == 0) {
    DAT_14c9aeb27 = DAT_14c9aeb27 | 2;
    _DAT_14c9aeac8 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicy";
    _DAT_14c9aeae0 = FUN_146826540;
    _DAT_14c9aeae8 = FUN_146825d77;
    _DAT_14c9aeaf0 = FUN_146825fd6;
    _DAT_14c9aeaf8 = FUN_1407e02ea;
    _DAT_14c9aeb00 = FUN_146826273;
    _DAT_14c9aead8 = FUN_14712c1b0;
    _DAT_14c9aeb18 = 0xffffffff00000118;
    _DAT_14c9aeb20 = 8;
    DAT_14c9aeb24 = 0;
    _DAT_14c9aeb08 = &LAB_14712c1e6;
    FUN_1460b6a96();
    FUN_1407e00cc(&DAT_14c9aeac0);
    return;
  }
  return;
}



// FUNCTION 1460b6a96 FUN_1460b6a96 body=133 status=ok
// SIG undefined FUN_1460b6a96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6a96(void)

{
  _DAT_14c9ba938 = L"BASE";
  DAT_14c9ba962 = 4;
  FUN_145cd4c1c();
  _DAT_14c9ba948 = DAT_14c9aead0;
  _DAT_14c9ba940 = &DAT_14c9ba6c0;
  _DAT_14c9ba950 = &LAB_14682652b;
  DAT_14c9aead0 = &DAT_14c9ba938;
  DAT_14c9aeb25 = DAT_14c9aeb25 + '\x01';
  _DAT_14c9ba958 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9aeb26 = DAT_14c9aeb26 + '\x01';
  }
  return;
}



// FUNCTION 1460b6b1c FUN_1460b6b1c body=287 status=ok
// SIG undefined FUN_1460b6b1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b6b1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aecf8) {
    FUN_144b3d300(&DAT_14c9aecf8);
    if (DAT_14c9aecf8 == -1) {
      FUN_1460b6c3c();
      FUN_140db5666(&DAT_14c9aec50,2,&DAT_14c9aebe8,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c2cc,
                    FUN_14712c2a4,FUN_14174baa0,&LAB_14712c2a0,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9aec50 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c397);
      _Init_thread_footer(&DAT_14c9aecf8);
    }
  }
  return &DAT_14c9aec50;
}



// FUNCTION 1460b6c3c FUN_1460b6c3c body=205 status=ok
// SIG undefined FUN_1460b6c3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6c3c(void)

{
  if ((DAT_14c9aec4f & 2) == 0) {
    DAT_14c9aec4f = DAT_14c9aec4f | 2;
    _DAT_14c9aebf0 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylightForceVelocity";
    _DAT_14c9aec08 = FUN_146826540;
    _DAT_14c9aec10 = FUN_146825d77;
    _DAT_14c9aec18 = FUN_146825fd6;
    _DAT_14c9aec20 = FUN_1407e02ea;
    _DAT_14c9aec28 = FUN_146826273;
    _DAT_14c9aec00 = FUN_14712c266;
    _DAT_14c9aec40 = 0xffffffff00000118;
    _DAT_14c9aec48 = 8;
    DAT_14c9aec4c = 0;
    _DAT_14c9aec30 = &LAB_14712c29c;
    FUN_1460b6d0a();
    FUN_1407e00cc(&DAT_14c9aebe8);
    return;
  }
  return;
}



// FUNCTION 1460b6d0a FUN_1460b6d0a body=133 status=ok
// SIG undefined FUN_1460b6d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6d0a(void)

{
  _DAT_14c9ba988 = L"BASE";
  DAT_14c9ba9b2 = 4;
  FUN_145cd4c1c();
  _DAT_14c9ba998 = DAT_14c9aebf8;
  _DAT_14c9ba990 = &DAT_14c9ba6c0;
  _DAT_14c9ba9a0 = &LAB_14682652b;
  DAT_14c9aebf8 = &DAT_14c9ba988;
  DAT_14c9aec4d = DAT_14c9aec4d + '\x01';
  _DAT_14c9ba9a8 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9aec4e = DAT_14c9aec4e + '\x01';
  }
  return;
}



// FUNCTION 1460b6d90 FUN_1460b6d90 body=287 status=ok
// SIG undefined FUN_1460b6d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b6d90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aee20) {
    FUN_144b3d300(&DAT_14c9aee20);
    if (DAT_14c9aee20 == -1) {
      FUN_1460b6eb0();
      FUN_140db5666(&DAT_14c9aed78,2,&DAT_14c9aed10,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c382,
                    FUN_14712c35a,FUN_14174be7a,&LAB_14712c356,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9aed78 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3a3);
      _Init_thread_footer(&DAT_14c9aee20);
    }
  }
  return &DAT_14c9aed78;
}



// FUNCTION 1460b6eb0 FUN_1460b6eb0 body=205 status=ok
// SIG undefined FUN_1460b6eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6eb0(void)

{
  if ((DAT_14c9aed77 & 2) == 0) {
    DAT_14c9aed77 = DAT_14c9aed77 | 2;
    _DAT_14c9aed18 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicyForceVelocity";
    _DAT_14c9aed30 = FUN_146826540;
    _DAT_14c9aed38 = FUN_146825d77;
    _DAT_14c9aed40 = FUN_146825fd6;
    _DAT_14c9aed48 = FUN_1407e02ea;
    _DAT_14c9aed50 = FUN_146826273;
    _DAT_14c9aed28 = FUN_14712c31c;
    _DAT_14c9aed68 = 0xffffffff00000118;
    _DAT_14c9aed70 = 8;
    DAT_14c9aed74 = 0;
    _DAT_14c9aed58 = &LAB_14712c352;
    FUN_1460b6f7e();
    FUN_1407e00cc(&DAT_14c9aed10);
    return;
  }
  return;
}



// FUNCTION 1460b6f7e FUN_1460b6f7e body=133 status=ok
// SIG undefined FUN_1460b6f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b6f7e(void)

{
  _DAT_14c9ba9d8 = L"BASE";
  DAT_14c9baa02 = 4;
  FUN_145cd4c1c();
  _DAT_14c9ba9e8 = DAT_14c9aed20;
  _DAT_14c9ba9e0 = &DAT_14c9ba6c0;
  _DAT_14c9ba9f0 = &LAB_14682652b;
  DAT_14c9aed20 = &DAT_14c9ba9d8;
  DAT_14c9aed75 = DAT_14c9aed75 + '\x01';
  _DAT_14c9ba9f8 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9aed76 = DAT_14c9aed76 + '\x01';
  }
  return;
}



// FUNCTION 1460b7004 FUN_1460b7004 body=287 status=ok
// SIG undefined FUN_1460b7004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b7004(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aef48) {
    FUN_144b3d300(&DAT_14c9aef48);
    if (DAT_14c9aef48 == -1) {
      FUN_1460b7124();
      FUN_140db5666(&DAT_14c9aeea0,2,&DAT_14c9aee38,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c438,
                    FUN_14712c410,FUN_14174c17e,&LAB_14712c40c,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9aeea0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3af);
      _Init_thread_footer(&DAT_14c9aef48);
    }
  }
  return &DAT_14c9aeea0;
}



// FUNCTION 1460b7124 FUN_1460b7124 body=205 status=ok
// SIG undefined FUN_1460b7124(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7124(void)

{
  if ((DAT_14c9aee9f & 2) == 0) {
    DAT_14c9aee9f = DAT_14c9aee9f | 2;
    _DAT_14c9aee40 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylightGbxDigi";
    _DAT_14c9aee58 = FUN_146826540;
    _DAT_14c9aee60 = FUN_146825d77;
    _DAT_14c9aee68 = FUN_146825fd6;
    _DAT_14c9aee70 = FUN_1407e02ea;
    _DAT_14c9aee78 = FUN_146826273;
    _DAT_14c9aee50 = FUN_14712c3d2;
    _DAT_14c9aee90 = 0xffffffff00000118;
    _DAT_14c9aee98 = 8;
    DAT_14c9aee9c = 0;
    _DAT_14c9aee80 = &LAB_14712c408;
    FUN_1460b71f2();
    FUN_1407e00cc(&DAT_14c9aee38);
    return;
  }
  return;
}



// FUNCTION 1460b71f2 FUN_1460b71f2 body=133 status=ok
// SIG undefined FUN_1460b71f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b71f2(void)

{
  _DAT_14c9baa28 = L"BASE";
  DAT_14c9baa52 = 4;
  FUN_145cd4c1c();
  _DAT_14c9baa38 = DAT_14c9aee48;
  _DAT_14c9baa30 = &DAT_14c9ba6c0;
  _DAT_14c9baa40 = &LAB_14682652b;
  DAT_14c9aee48 = &DAT_14c9baa28;
  DAT_14c9aee9d = DAT_14c9aee9d + '\x01';
  _DAT_14c9baa48 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9aee9e = DAT_14c9aee9e + '\x01';
  }
  return;
}



// FUNCTION 1460b7278 FUN_1460b7278 body=287 status=ok
// SIG undefined FUN_1460b7278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b7278(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af070) {
    FUN_144b3d300(&DAT_14c9af070);
    if (DAT_14c9af070 == -1) {
      FUN_1460b7398();
      FUN_140db5666(&DAT_14c9aefc8,2,&DAT_14c9aef60,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c4ee,
                    FUN_14712c4c6,FUN_14174c544,&LAB_14712c4c2,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9aefc8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3bb);
      _Init_thread_footer(&DAT_14c9af070);
    }
  }
  return &DAT_14c9aefc8;
}



// FUNCTION 1460b7398 FUN_1460b7398 body=205 status=ok
// SIG undefined FUN_1460b7398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7398(void)

{
  if ((DAT_14c9aefc7 & 2) == 0) {
    DAT_14c9aefc7 = DAT_14c9aefc7 | 2;
    _DAT_14c9aef68 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicyGbxDigi";
    _DAT_14c9aef80 = FUN_146826540;
    _DAT_14c9aef88 = FUN_146825d77;
    _DAT_14c9aef90 = FUN_146825fd6;
    _DAT_14c9aef98 = FUN_1407e02ea;
    _DAT_14c9aefa0 = FUN_146826273;
    _DAT_14c9aef78 = FUN_14712c488;
    _DAT_14c9aefb8 = 0xffffffff00000118;
    _DAT_14c9aefc0 = 8;
    DAT_14c9aefc4 = 0;
    _DAT_14c9aefa8 = &LAB_14712c4be;
    FUN_1460b7466();
    FUN_1407e00cc(&DAT_14c9aef60);
    return;
  }
  return;
}



// FUNCTION 1460b7466 FUN_1460b7466 body=133 status=ok
// SIG undefined FUN_1460b7466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7466(void)

{
  _DAT_14c9baa78 = L"BASE";
  DAT_14c9baaa2 = 4;
  FUN_145cd4c1c();
  _DAT_14c9baa88 = DAT_14c9aef70;
  _DAT_14c9baa80 = &DAT_14c9ba6c0;
  _DAT_14c9baa90 = &LAB_14682652b;
  DAT_14c9aef70 = &DAT_14c9baa78;
  DAT_14c9aefc5 = DAT_14c9aefc5 + '\x01';
  _DAT_14c9baa98 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9aefc6 = DAT_14c9aefc6 + '\x01';
  }
  return;
}



// FUNCTION 1460b74ec FUN_1460b74ec body=287 status=ok
// SIG undefined FUN_1460b74ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b74ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af198) {
    FUN_144b3d300(&DAT_14c9af198);
    if (DAT_14c9af198 == -1) {
      FUN_1460b760c();
      FUN_140db5666(&DAT_14c9af0f0,2,&DAT_14c9af088,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c5a4,
                    FUN_14712c57c,FUN_14174c832,&LAB_14712c578,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9af0f0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3c7);
      _Init_thread_footer(&DAT_14c9af198);
    }
  }
  return &DAT_14c9af0f0;
}



// FUNCTION 1460b760c FUN_1460b760c body=205 status=ok
// SIG undefined FUN_1460b760c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b760c(void)

{
  if ((DAT_14c9af0ef & 2) == 0) {
    DAT_14c9af0ef = DAT_14c9af0ef | 2;
    _DAT_14c9af090 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylightGbxDigiForceVelocity"
    ;
    _DAT_14c9af0a8 = FUN_146826540;
    _DAT_14c9af0b0 = FUN_146825d77;
    _DAT_14c9af0b8 = FUN_146825fd6;
    _DAT_14c9af0c0 = FUN_1407e02ea;
    _DAT_14c9af0c8 = FUN_146826273;
    _DAT_14c9af0a0 = FUN_14712c53e;
    _DAT_14c9af0e0 = 0xffffffff00000118;
    _DAT_14c9af0e8 = 8;
    DAT_14c9af0ec = 0;
    _DAT_14c9af0d0 = &LAB_14712c574;
    FUN_1460b76da();
    FUN_1407e00cc(&DAT_14c9af088);
    return;
  }
  return;
}



// FUNCTION 1460b76da FUN_1460b76da body=133 status=ok
// SIG undefined FUN_1460b76da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b76da(void)

{
  _DAT_14c9baac8 = L"BASE";
  DAT_14c9baaf2 = 4;
  FUN_145cd4c1c();
  _DAT_14c9baad8 = DAT_14c9af098;
  _DAT_14c9baad0 = &DAT_14c9ba6c0;
  _DAT_14c9baae0 = &LAB_14682652b;
  DAT_14c9af098 = &DAT_14c9baac8;
  DAT_14c9af0ed = DAT_14c9af0ed + '\x01';
  _DAT_14c9baae8 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9af0ee = DAT_14c9af0ee + '\x01';
  }
  return;
}



// FUNCTION 1460b7760 FUN_1460b7760 body=287 status=ok
// SIG undefined FUN_1460b7760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b7760(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af2c0) {
    FUN_144b3d300(&DAT_14c9af2c0);
    if (DAT_14c9af2c0 == -1) {
      FUN_1460b7880();
      FUN_140db5666(&DAT_14c9af218,2,&DAT_14c9af1b0,
                    L"TBasePassPSFSelfShadowedVolumetricLightmapPolicyGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712c65a,
                    FUN_14712c632,FUN_14174cc28,&LAB_14712c62e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14c9af218 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3d3);
      _Init_thread_footer(&DAT_14c9af2c0);
    }
  }
  return &DAT_14c9af218;
}



// FUNCTION 1460b7880 FUN_1460b7880 body=205 status=ok
// SIG undefined FUN_1460b7880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7880(void)

{
  if ((DAT_14c9af217 & 2) == 0) {
    DAT_14c9af217 = DAT_14c9af217 | 2;
    _DAT_14c9af1b8 = L"TBasePassPSFSelfShadowedVolumetricLightmapPolicyGbxDigiForceVelocity";
    _DAT_14c9af1d0 = FUN_146826540;
    _DAT_14c9af1d8 = FUN_146825d77;
    _DAT_14c9af1e0 = FUN_146825fd6;
    _DAT_14c9af1e8 = FUN_1407e02ea;
    _DAT_14c9af1f0 = FUN_146826273;
    _DAT_14c9af1c8 = FUN_14712c5f4;
    _DAT_14c9af208 = 0xffffffff00000118;
    _DAT_14c9af210 = 8;
    DAT_14c9af214 = 0;
    _DAT_14c9af1f8 = &LAB_14712c62a;
    FUN_1460b794e();
    FUN_1407e00cc(&DAT_14c9af1b0);
    return;
  }
  return;
}



// FUNCTION 1460b794e FUN_1460b794e body=133 status=ok
// SIG undefined FUN_1460b794e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b794e(void)

{
  _DAT_14c9bab18 = L"BASE";
  DAT_14c9bab42 = 4;
  FUN_145cd4c1c();
  _DAT_14c9bab28 = DAT_14c9af1c0;
  _DAT_14c9bab20 = &DAT_14c9ba6c0;
  _DAT_14c9bab30 = &LAB_14682652b;
  DAT_14c9af1c0 = &DAT_14c9bab18;
  DAT_14c9af215 = DAT_14c9af215 + '\x01';
  _DAT_14c9bab38 = 0x100000000;
  if (DAT_14c9ba724 != '\0') {
    DAT_14c9af216 = DAT_14c9af216 + '\x01';
  }
  return;
}



// FUNCTION 1460b79d4 FUN_1460b79d4 body=287 status=ok
// SIG undefined FUN_1460b79d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b79d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af510) {
    FUN_144b3d300(&DAT_14c9af510);
    if (DAT_14c9af510 == -1) {
      FUN_1460b7af4();
      FUN_140db5666(&DAT_14c9af468,2,&DAT_14c9af400,
                    L"TBasePassCSFSelfShadowedVolumetricLightmapPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712c7d6,
                    FUN_14712c7ae,FUN_14174d264,&LAB_14712c7aa,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9af468 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3eb);
      _Init_thread_footer(&DAT_14c9af510);
    }
  }
  return &DAT_14c9af468;
}



// FUNCTION 1460b7af4 FUN_1460b7af4 body=205 status=ok
// SIG undefined FUN_1460b7af4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7af4(void)

{
  if ((DAT_14c9af467 & 2) == 0) {
    DAT_14c9af467 = DAT_14c9af467 | 2;
    _DAT_14c9af408 = L"TBasePassCSFSelfShadowedVolumetricLightmapPolicy";
    _DAT_14c9af420 = FUN_146826540;
    _DAT_14c9af428 = FUN_146825d77;
    _DAT_14c9af430 = FUN_146825fd6;
    _DAT_14c9af438 = FUN_1407e02ea;
    _DAT_14c9af440 = FUN_146826273;
    _DAT_14c9af418 = FUN_14712c770;
    _DAT_14c9af458 = 0xffffffff00000130;
    _DAT_14c9af460 = 8;
    DAT_14c9af464 = 0;
    _DAT_14c9af448 = &LAB_14712c7a6;
    FUN_1460b7bc2();
    FUN_1407e00cc(&DAT_14c9af400);
    return;
  }
  return;
}



// FUNCTION 1460b7bc2 FUN_1460b7bc2 body=133 status=ok
// SIG undefined FUN_1460b7bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7bc2(void)

{
  _DAT_14c9bb050 = L"BASE";
  DAT_14c9bb07a = 4;
  FUN_145d26e38();
  _DAT_14c9bb060 = DAT_14c9af410;
  _DAT_14c9bb058 = &DAT_14c9bab98;
  _DAT_14c9bb068 = &LAB_14682652b;
  DAT_14c9af410 = &DAT_14c9bb050;
  DAT_14c9af465 = DAT_14c9af465 + '\x01';
  _DAT_14c9bb070 = 0x100000000;
  if (DAT_14c9babfc != '\0') {
    DAT_14c9af466 = DAT_14c9af466 + '\x01';
  }
  return;
}



// FUNCTION 1460b7c48 FUN_1460b7c48 body=287 status=ok
// SIG undefined FUN_1460b7c48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b7c48(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af638) {
    FUN_144b3d300(&DAT_14c9af638);
    if (DAT_14c9af638 == -1) {
      FUN_1460b7d68();
      FUN_140db5666(&DAT_14c9af590,2,&DAT_14c9af528,
                    L"TBasePassWorkGraphCSFSelfShadowedVolumetricLightmapPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712c89c,
                    FUN_14712c874,FUN_14174d47e,&LAB_14712c870,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9af590 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c3f7);
      _Init_thread_footer(&DAT_14c9af638);
    }
  }
  return &DAT_14c9af590;
}



// FUNCTION 1460b7d68 FUN_1460b7d68 body=205 status=ok
// SIG undefined FUN_1460b7d68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7d68(void)

{
  if ((DAT_14c9af58f & 2) == 0) {
    DAT_14c9af58f = DAT_14c9af58f | 2;
    _DAT_14c9af530 = L"TBasePassWorkGraphCSFSelfShadowedVolumetricLightmapPolicySkylight";
    _DAT_14c9af548 = FUN_146826540;
    _DAT_14c9af550 = FUN_146825d77;
    _DAT_14c9af558 = FUN_146825fd6;
    _DAT_14c9af560 = FUN_1407e02ea;
    _DAT_14c9af568 = FUN_146826273;
    _DAT_14c9af540 = FUN_14712c836;
    _DAT_14c9af580 = 0xffffffff00000130;
    _DAT_14c9af588 = 8;
    DAT_14c9af58c = 0;
    _DAT_14c9af570 = &LAB_14712c86c;
    FUN_1460b7e36();
    FUN_1407e00cc(&DAT_14c9af528);
    return;
  }
  return;
}



// FUNCTION 1460b7e36 FUN_1460b7e36 body=133 status=ok
// SIG undefined FUN_1460b7e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7e36(void)

{
  _DAT_14c9bb0a0 = L"BASE";
  DAT_14c9bb0ca = 4;
  FUN_145d26e38();
  _DAT_14c9bb0b0 = DAT_14c9af538;
  _DAT_14c9bb0a8 = &DAT_14c9bab98;
  _DAT_14c9bb0b8 = &LAB_14682652b;
  DAT_14c9af538 = &DAT_14c9bb0a0;
  DAT_14c9af58d = DAT_14c9af58d + '\x01';
  _DAT_14c9bb0c0 = 0x100000000;
  if (DAT_14c9babfc != '\0') {
    DAT_14c9af58e = DAT_14c9af58e + '\x01';
  }
  return;
}



// FUNCTION 1460b7ebc FUN_1460b7ebc body=287 status=ok
// SIG undefined FUN_1460b7ebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b7ebc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9af760) {
    FUN_144b3d300(&DAT_14c9af760);
    if (DAT_14c9af760 == -1) {
      FUN_1460b7fdc();
      FUN_140db5666(&DAT_14c9af6b8,2,&DAT_14c9af650,
                    L"TBasePassWorkGraphCSFSelfShadowedVolumetricLightmapPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712c962,
                    FUN_14712c93a,FUN_14174d7b4,&LAB_14712c936,&LAB_14712ac0c,&LAB_14712ac08,0x130,0
                   );
      _DAT_14c9af6b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c403);
      _Init_thread_footer(&DAT_14c9af760);
    }
  }
  return &DAT_14c9af6b8;
}



// FUNCTION 1460b7fdc FUN_1460b7fdc body=205 status=ok
// SIG undefined FUN_1460b7fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b7fdc(void)

{
  if ((DAT_14c9af6b7 & 2) == 0) {
    DAT_14c9af6b7 = DAT_14c9af6b7 | 2;
    _DAT_14c9af658 = L"TBasePassWorkGraphCSFSelfShadowedVolumetricLightmapPolicy";
    _DAT_14c9af670 = FUN_146826540;
    _DAT_14c9af678 = FUN_146825d77;
    _DAT_14c9af680 = FUN_146825fd6;
    _DAT_14c9af688 = FUN_1407e02ea;
    _DAT_14c9af690 = FUN_146826273;
    _DAT_14c9af668 = FUN_14712c8fc;
    _DAT_14c9af6a8 = 0xffffffff00000130;
    _DAT_14c9af6b0 = 8;
    DAT_14c9af6b4 = 0;
    _DAT_14c9af698 = &LAB_14712c932;
    FUN_1460b80aa();
    FUN_1407e00cc(&DAT_14c9af650);
    return;
  }
  return;
}



// FUNCTION 1460b80aa FUN_1460b80aa body=133 status=ok
// SIG undefined FUN_1460b80aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b80aa(void)

{
  _DAT_14c9bb0f0 = L"BASE";
  DAT_14c9bb11a = 4;
  FUN_145d26e38();
  _DAT_14c9bb100 = DAT_14c9af660;
  _DAT_14c9bb0f8 = &DAT_14c9bab98;
  _DAT_14c9bb108 = &LAB_14682652b;
  DAT_14c9af660 = &DAT_14c9bb0f0;
  DAT_14c9af6b5 = DAT_14c9af6b5 + '\x01';
  _DAT_14c9bb110 = 0x100000000;
  if (DAT_14c9babfc != '\0') {
    DAT_14c9af6b6 = DAT_14c9af6b6 + '\x01';
  }
  return;
}



// FUNCTION 1460b8130 FUN_1460b8130 body=287 status=ok
// SIG undefined FUN_1460b8130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b8130(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9afc00) {
    FUN_144b3d300(&DAT_14c9afc00);
    if (DAT_14c9afc00 == -1) {
      FUN_1460b8250();
      FUN_140db5666(&DAT_14c9afb58,2,&DAT_14c9afaf0,
                    L"TBasePassPSFNoLightMapPolicySkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712cf86,
                    FUN_14712cf5e,FUN_14174e058,&LAB_14712cf5a,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9afb58 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c433);
      _Init_thread_footer(&DAT_14c9afc00);
    }
  }
  return &DAT_14c9afb58;
}



// FUNCTION 1460b8250 FUN_1460b8250 body=205 status=ok
// SIG undefined FUN_1460b8250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8250(void)

{
  if ((DAT_14c9afb57 & 2) == 0) {
    DAT_14c9afb57 = DAT_14c9afb57 | 2;
    _DAT_14c9afaf8 = L"TBasePassPSFNoLightMapPolicySkylightForceVelocity";
    _DAT_14c9afb10 = FUN_146826540;
    _DAT_14c9afb18 = FUN_146825d77;
    _DAT_14c9afb20 = FUN_146825fd6;
    _DAT_14c9afb28 = FUN_1407e02ea;
    _DAT_14c9afb30 = FUN_146826273;
    _DAT_14c9afb08 = FUN_14712cf20;
    _DAT_14c9afb48 = 0xffffffff00000110;
    _DAT_14c9afb50 = 8;
    DAT_14c9afb54 = 0;
    _DAT_14c9afb38 = &LAB_14712cf56;
    FUN_1460b831e();
    FUN_1407e00cc(&DAT_14c9afaf0);
    return;
  }
  return;
}



// FUNCTION 1460b831e FUN_1460b831e body=133 status=ok
// SIG undefined FUN_1460b831e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b831e(void)

{
  _DAT_14c9bb540 = L"BASE";
  DAT_14c9bb56a = 4;
  FUN_1456c2396();
  _DAT_14c9bb550 = DAT_14c9afb00;
  _DAT_14c9bb548 = &DAT_14c9bb340;
  _DAT_14c9bb558 = &LAB_14682652b;
  DAT_14c9afb00 = &DAT_14c9bb540;
  DAT_14c9afb55 = DAT_14c9afb55 + '\x01';
  _DAT_14c9bb560 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9afb56 = DAT_14c9afb56 + '\x01';
  }
  return;
}



// FUNCTION 1460b83a4 FUN_1460b83a4 body=287 status=ok
// SIG undefined FUN_1460b83a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b83a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9afd28) {
    FUN_144b3d300(&DAT_14c9afd28);
    if (DAT_14c9afd28 == -1) {
      FUN_1460b84c4();
      FUN_140db5666(&DAT_14c9afc80,2,&DAT_14c9afc18,L"TBasePassPSFNoLightMapPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d034,
                    FUN_14712d00c,FUN_14174e434,&LAB_14712d008,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9afc80 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c43f);
      _Init_thread_footer(&DAT_14c9afd28);
    }
  }
  return &DAT_14c9afc80;
}



// FUNCTION 1460b84c4 FUN_1460b84c4 body=205 status=ok
// SIG undefined FUN_1460b84c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b84c4(void)

{
  if ((DAT_14c9afc7f & 2) == 0) {
    DAT_14c9afc7f = DAT_14c9afc7f | 2;
    _DAT_14c9afc20 = L"TBasePassPSFNoLightMapPolicyForceVelocity";
    _DAT_14c9afc38 = FUN_146826540;
    _DAT_14c9afc40 = FUN_146825d77;
    _DAT_14c9afc48 = FUN_146825fd6;
    _DAT_14c9afc50 = FUN_1407e02ea;
    _DAT_14c9afc58 = FUN_146826273;
    _DAT_14c9afc30 = FUN_14712cfce;
    _DAT_14c9afc70 = 0xffffffff00000110;
    _DAT_14c9afc78 = 8;
    DAT_14c9afc7c = 0;
    _DAT_14c9afc60 = &LAB_14712d004;
    FUN_1460b8592();
    FUN_1407e00cc(&DAT_14c9afc18);
    return;
  }
  return;
}



// FUNCTION 1460b8592 FUN_1460b8592 body=133 status=ok
// SIG undefined FUN_1460b8592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8592(void)

{
  _DAT_14c9bb590 = L"BASE";
  DAT_14c9bb5ba = 4;
  FUN_1456c2396();
  _DAT_14c9bb5a0 = DAT_14c9afc28;
  _DAT_14c9bb598 = &DAT_14c9bb340;
  _DAT_14c9bb5a8 = &LAB_14682652b;
  DAT_14c9afc28 = &DAT_14c9bb590;
  DAT_14c9afc7d = DAT_14c9afc7d + '\x01';
  _DAT_14c9bb5b0 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9afc7e = DAT_14c9afc7e + '\x01';
  }
  return;
}



// FUNCTION 1460b8618 FUN_1460b8618 body=287 status=ok
// SIG undefined FUN_1460b8618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b8618(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b00a0) {
    FUN_144b3d300(&DAT_14c9b00a0);
    if (DAT_14c9b00a0 == -1) {
      FUN_1460b8738();
      FUN_140db5666(&DAT_14c9afff8,2,&DAT_14c9aff90,
                    L"TBasePassPSFNoLightMapPolicySkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d23e,
                    FUN_14712d216,FUN_14174edb4,&LAB_14712d212,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9afff8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c463);
      _Init_thread_footer(&DAT_14c9b00a0);
    }
  }
  return &DAT_14c9afff8;
}



// FUNCTION 1460b8738 FUN_1460b8738 body=205 status=ok
// SIG undefined FUN_1460b8738(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8738(void)

{
  if ((DAT_14c9afff7 & 2) == 0) {
    DAT_14c9afff7 = DAT_14c9afff7 | 2;
    _DAT_14c9aff98 = L"TBasePassPSFNoLightMapPolicySkylightGbxDigiForceVelocity";
    _DAT_14c9affb0 = FUN_146826540;
    _DAT_14c9affb8 = FUN_146825d77;
    _DAT_14c9affc0 = FUN_146825fd6;
    _DAT_14c9affc8 = FUN_1407e02ea;
    _DAT_14c9affd0 = FUN_146826273;
    _DAT_14c9affa8 = FUN_14712d1d8;
    _DAT_14c9affe8 = 0xffffffff00000110;
    _DAT_14c9afff0 = 8;
    DAT_14c9afff4 = 0;
    _DAT_14c9affd8 = &LAB_14712d20e;
    FUN_1460b8806();
    FUN_1407e00cc(&DAT_14c9aff90);
    return;
  }
  return;
}



// FUNCTION 1460b8806 FUN_1460b8806 body=133 status=ok
// SIG undefined FUN_1460b8806(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8806(void)

{
  _DAT_14c9bb680 = L"BASE";
  DAT_14c9bb6aa = 4;
  FUN_1456c2396();
  _DAT_14c9bb690 = DAT_14c9affa0;
  _DAT_14c9bb688 = &DAT_14c9bb340;
  _DAT_14c9bb698 = &LAB_14682652b;
  DAT_14c9affa0 = &DAT_14c9bb680;
  DAT_14c9afff5 = DAT_14c9afff5 + '\x01';
  _DAT_14c9bb6a0 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9afff6 = DAT_14c9afff6 + '\x01';
  }
  return;
}



// FUNCTION 1460b888c FUN_1460b888c body=287 status=ok
// SIG undefined FUN_1460b888c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b888c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b01c8) {
    FUN_144b3d300(&DAT_14c9b01c8);
    if (DAT_14c9b01c8 == -1) {
      FUN_1460b89ac();
      FUN_140db5666(&DAT_14c9b0120,2,&DAT_14c9b00b8,
                    L"TBasePassPSFNoLightMapPolicyGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d2ec,
                    FUN_14712d2c4,FUN_14174f1ac,&LAB_14712d2c0,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0120 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c46f);
      _Init_thread_footer(&DAT_14c9b01c8);
    }
  }
  return &DAT_14c9b0120;
}



// FUNCTION 1460b89ac FUN_1460b89ac body=205 status=ok
// SIG undefined FUN_1460b89ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b89ac(void)

{
  if ((DAT_14c9b011f & 2) == 0) {
    DAT_14c9b011f = DAT_14c9b011f | 2;
    _DAT_14c9b00c0 = L"TBasePassPSFNoLightMapPolicyGbxDigiForceVelocity";
    _DAT_14c9b00d8 = FUN_146826540;
    _DAT_14c9b00e0 = FUN_146825d77;
    _DAT_14c9b00e8 = FUN_146825fd6;
    _DAT_14c9b00f0 = FUN_1407e02ea;
    _DAT_14c9b00f8 = FUN_146826273;
    _DAT_14c9b00d0 = FUN_14712d286;
    _DAT_14c9b0110 = 0xffffffff00000110;
    _DAT_14c9b0118 = 8;
    DAT_14c9b011c = 0;
    _DAT_14c9b0100 = &LAB_14712d2bc;
    FUN_1460b8a7a();
    FUN_1407e00cc(&DAT_14c9b00b8);
    return;
  }
  return;
}



// FUNCTION 1460b8a7a FUN_1460b8a7a body=133 status=ok
// SIG undefined FUN_1460b8a7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8a7a(void)

{
  _DAT_14c9bb6d0 = L"BASE";
  DAT_14c9bb6fa = 4;
  FUN_1456c2396();
  _DAT_14c9bb6e0 = DAT_14c9b00c8;
  _DAT_14c9bb6d8 = &DAT_14c9bb340;
  _DAT_14c9bb6e8 = &LAB_14682652b;
  DAT_14c9b00c8 = &DAT_14c9bb6d0;
  DAT_14c9b011d = DAT_14c9b011d + '\x01';
  _DAT_14c9bb6f0 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9b011e = DAT_14c9b011e + '\x01';
  }
  return;
}



// FUNCTION 1460b8b00 FUN_1460b8b00 body=287 status=ok
// SIG undefined FUN_1460b8b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b8b00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0540) {
    FUN_144b3d300(&DAT_14c9b0540);
    if (DAT_14c9b0540 == -1) {
      FUN_1460b8c20();
      FUN_140db5666(&DAT_14c9b0498,2,&DAT_14c9b0430,L"TBasePassWorkGraphCSFNoLightMapPolicySkylight"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712d526,
                    FUN_14712d4fe,FUN_14174f9d8,&LAB_14712d4fa,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b0498 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5b0);
      _Init_thread_footer(&DAT_14c9b0540);
    }
  }
  return &DAT_14c9b0498;
}



// FUNCTION 1460b8c20 FUN_1460b8c20 body=205 status=ok
// SIG undefined FUN_1460b8c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8c20(void)

{
  if ((DAT_14c9b0497 & 2) == 0) {
    DAT_14c9b0497 = DAT_14c9b0497 | 2;
    _DAT_14c9b0438 = L"TBasePassWorkGraphCSFNoLightMapPolicySkylight";
    _DAT_14c9b0450 = FUN_146826540;
    _DAT_14c9b0458 = FUN_146825d77;
    _DAT_14c9b0460 = FUN_146825fd6;
    _DAT_14c9b0468 = FUN_1407e02ea;
    _DAT_14c9b0470 = FUN_146826273;
    _DAT_14c9b0448 = FUN_14712d4c0;
    _DAT_14c9b0488 = 0xffffffff00000128;
    _DAT_14c9b0490 = 8;
    DAT_14c9b0494 = 0;
    _DAT_14c9b0478 = &LAB_14712d4f6;
    FUN_1460b8cee();
    FUN_1407e00cc(&DAT_14c9b0430);
    return;
  }
  return;
}



// FUNCTION 1460b8cee FUN_1460b8cee body=133 status=ok
// SIG undefined FUN_1460b8cee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8cee(void)

{
  _DAT_14c9bbb90 = L"BASE";
  DAT_14c9bbbba = 4;
  FUN_145783958();
  _DAT_14c9bbba0 = DAT_14c9b0440;
  _DAT_14c9bbb98 = &DAT_14c9bb750;
  _DAT_14c9bbba8 = &LAB_14682652b;
  DAT_14c9b0440 = &DAT_14c9bbb90;
  DAT_14c9b0495 = DAT_14c9b0495 + '\x01';
  _DAT_14c9bbbb0 = 0x100000000;
  if (DAT_14c9bb7b4 != '\0') {
    DAT_14c9b0496 = DAT_14c9b0496 + '\x01';
  }
  return;
}



// FUNCTION 1460b8d74 FUN_1460b8d74 body=287 status=ok
// SIG undefined FUN_1460b8d74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b8d74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0668) {
    FUN_144b3d300(&DAT_14c9b0668);
    if (DAT_14c9b0668 == -1) {
      FUN_1460b8e94();
      FUN_140db5666(&DAT_14c9b05c0,2,&DAT_14c9b0558,L"TBasePassWorkGraphCSFNoLightMapPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712d5ec,
                    FUN_14712d5c4,FUN_14174fcfa,&LAB_14712d5c0,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b05c0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5bc);
      _Init_thread_footer(&DAT_14c9b0668);
    }
  }
  return &DAT_14c9b05c0;
}



// FUNCTION 1460b8e94 FUN_1460b8e94 body=205 status=ok
// SIG undefined FUN_1460b8e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8e94(void)

{
  if ((DAT_14c9b05bf & 2) == 0) {
    DAT_14c9b05bf = DAT_14c9b05bf | 2;
    _DAT_14c9b0560 = L"TBasePassWorkGraphCSFNoLightMapPolicy";
    _DAT_14c9b0578 = FUN_146826540;
    _DAT_14c9b0580 = FUN_146825d77;
    _DAT_14c9b0588 = FUN_146825fd6;
    _DAT_14c9b0590 = FUN_1407e02ea;
    _DAT_14c9b0598 = FUN_146826273;
    _DAT_14c9b0570 = FUN_14712d586;
    _DAT_14c9b05b0 = 0xffffffff00000128;
    _DAT_14c9b05b8 = 8;
    DAT_14c9b05bc = 0;
    _DAT_14c9b05a0 = &LAB_14712d5bc;
    FUN_1460b8f62();
    FUN_1407e00cc(&DAT_14c9b0558);
    return;
  }
  return;
}



// FUNCTION 1460b8f62 FUN_1460b8f62 body=133 status=ok
// SIG undefined FUN_1460b8f62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b8f62(void)

{
  _DAT_14c9bbbe0 = L"BASE";
  DAT_14c9bbc0a = 4;
  FUN_145783958();
  _DAT_14c9bbbf0 = DAT_14c9b0568;
  _DAT_14c9bbbe8 = &DAT_14c9bb750;
  _DAT_14c9bbbf8 = &LAB_14682652b;
  DAT_14c9b0568 = &DAT_14c9bbbe0;
  DAT_14c9b05bd = DAT_14c9b05bd + '\x01';
  _DAT_14c9bbc00 = 0x100000000;
  if (DAT_14c9bb7b4 != '\0') {
    DAT_14c9b05be = DAT_14c9b05be + '\x01';
  }
  return;
}



// FUNCTION 1460b8fe8 FUN_1460b8fe8 body=287 status=ok
// SIG undefined FUN_1460b8fe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b8fe8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b09e0) {
    FUN_144b3d300(&DAT_14c9b09e0);
    if (DAT_14c9b09e0 == -1) {
      FUN_1460b9108();
      FUN_140db5666(&DAT_14c9b0938,2,&DAT_14c9b08d0,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d80e,
                    FUN_14712d7e6,FUN_141750414,&LAB_14712d7e2,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0938 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5e0);
      _Init_thread_footer(&DAT_14c9b09e0);
    }
  }
  return &DAT_14c9b0938;
}



// FUNCTION 1460b9108 FUN_1460b9108 body=205 status=ok
// SIG undefined FUN_1460b9108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9108(void)

{
  if ((DAT_14c9b0937 & 2) == 0) {
    DAT_14c9b0937 = DAT_14c9b0937 | 2;
    _DAT_14c9b08d8 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14c9b08f0 = FUN_146826540;
    _DAT_14c9b08f8 = FUN_146825d77;
    _DAT_14c9b0900 = FUN_146825fd6;
    _DAT_14c9b0908 = FUN_1407e02ea;
    _DAT_14c9b0910 = FUN_146826273;
    _DAT_14c9b08e8 = FUN_14712d7a8;
    _DAT_14c9b0928 = 0xffffffff00000110;
    _DAT_14c9b0930 = 8;
    DAT_14c9b0934 = 0;
    _DAT_14c9b0918 = &LAB_14712d7de;
    FUN_1460b91d6();
    FUN_1407e00cc(&DAT_14c9b08d0);
    return;
  }
  return;
}



// FUNCTION 1460b91d6 FUN_1460b91d6 body=133 status=ok
// SIG undefined FUN_1460b91d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b91d6(void)

{
  _DAT_14c9bbfe0 = L"BASE";
  DAT_14c9bc00a = 4;
  FUN_145c93d7e();
  _DAT_14c9bbff0 = DAT_14c9b08e0;
  _DAT_14c9bbfe8 = &DAT_14c9bbe30;
  _DAT_14c9bbff8 = &LAB_14682652b;
  DAT_14c9b08e0 = &DAT_14c9bbfe0;
  DAT_14c9b0935 = DAT_14c9b0935 + '\x01';
  _DAT_14c9bc000 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b0936 = DAT_14c9b0936 + '\x01';
  }
  return;
}



// FUNCTION 1460b925c FUN_1460b925c body=287 status=ok
// SIG undefined FUN_1460b925c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b925c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0b08) {
    FUN_144b3d300(&DAT_14c9b0b08);
    if (DAT_14c9b0b08 == -1) {
      FUN_1460b937c();
      FUN_140db5666(&DAT_14c9b0a60,2,&DAT_14c9b09f8,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d8bc,
                    FUN_14712d894,FUN_1417506d6,&LAB_14712d890,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0a60 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5ec);
      _Init_thread_footer(&DAT_14c9b0b08);
    }
  }
  return &DAT_14c9b0a60;
}



// FUNCTION 1460b937c FUN_1460b937c body=205 status=ok
// SIG undefined FUN_1460b937c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b937c(void)

{
  if ((DAT_14c9b0a5f & 2) == 0) {
    DAT_14c9b0a5f = DAT_14c9b0a5f | 2;
    _DAT_14c9b0a00 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylightForceVelocity"
    ;
    _DAT_14c9b0a18 = FUN_146826540;
    _DAT_14c9b0a20 = FUN_146825d77;
    _DAT_14c9b0a28 = FUN_146825fd6;
    _DAT_14c9b0a30 = FUN_1407e02ea;
    _DAT_14c9b0a38 = FUN_146826273;
    _DAT_14c9b0a10 = FUN_14712d856;
    _DAT_14c9b0a50 = 0xffffffff00000110;
    _DAT_14c9b0a58 = 8;
    DAT_14c9b0a5c = 0;
    _DAT_14c9b0a40 = &LAB_14712d88c;
    FUN_1460b944a();
    FUN_1407e00cc(&DAT_14c9b09f8);
    return;
  }
  return;
}



// FUNCTION 1460b944a FUN_1460b944a body=133 status=ok
// SIG undefined FUN_1460b944a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b944a(void)

{
  _DAT_14c9bc030 = L"BASE";
  DAT_14c9bc05a = 4;
  FUN_145c93d7e();
  _DAT_14c9bc040 = DAT_14c9b0a08;
  _DAT_14c9bc038 = &DAT_14c9bbe30;
  _DAT_14c9bc048 = &LAB_14682652b;
  DAT_14c9b0a08 = &DAT_14c9bc030;
  DAT_14c9b0a5d = DAT_14c9b0a5d + '\x01';
  _DAT_14c9bc050 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b0a5e = DAT_14c9b0a5e + '\x01';
  }
  return;
}



// FUNCTION 1460b94d0 FUN_1460b94d0 body=287 status=ok
// SIG undefined FUN_1460b94d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b94d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0c30) {
    FUN_144b3d300(&DAT_14c9b0c30);
    if (DAT_14c9b0c30 == -1) {
      FUN_1460b95f0();
      FUN_140db5666(&DAT_14c9b0b88,2,&DAT_14c9b0b20,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d96a,
                    FUN_14712d942,FUN_141750ab8,&LAB_14712d93e,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0b88 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5f8);
      _Init_thread_footer(&DAT_14c9b0c30);
    }
  }
  return &DAT_14c9b0b88;
}



// FUNCTION 1460b95f0 FUN_1460b95f0 body=205 status=ok
// SIG undefined FUN_1460b95f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b95f0(void)

{
  if ((DAT_14c9b0b87 & 2) == 0) {
    DAT_14c9b0b87 = DAT_14c9b0b87 | 2;
    _DAT_14c9b0b28 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicyForceVelocity";
    _DAT_14c9b0b40 = FUN_146826540;
    _DAT_14c9b0b48 = FUN_146825d77;
    _DAT_14c9b0b50 = FUN_146825fd6;
    _DAT_14c9b0b58 = FUN_1407e02ea;
    _DAT_14c9b0b60 = FUN_146826273;
    _DAT_14c9b0b38 = FUN_14712d904;
    _DAT_14c9b0b78 = 0xffffffff00000110;
    _DAT_14c9b0b80 = 8;
    DAT_14c9b0b84 = 0;
    _DAT_14c9b0b68 = &LAB_14712d93a;
    FUN_1460b96be();
    FUN_1407e00cc(&DAT_14c9b0b20);
    return;
  }
  return;
}



// FUNCTION 1460b96be FUN_1460b96be body=133 status=ok
// SIG undefined FUN_1460b96be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b96be(void)

{
  _DAT_14c9bc080 = L"BASE";
  DAT_14c9bc0aa = 4;
  FUN_145c93d7e();
  _DAT_14c9bc090 = DAT_14c9b0b30;
  _DAT_14c9bc088 = &DAT_14c9bbe30;
  _DAT_14c9bc098 = &LAB_14682652b;
  DAT_14c9b0b30 = &DAT_14c9bc080;
  DAT_14c9b0b85 = DAT_14c9b0b85 + '\x01';
  _DAT_14c9bc0a0 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b0b86 = DAT_14c9b0b86 + '\x01';
  }
  return;
}



// FUNCTION 1460b9744 FUN_1460b9744 body=287 status=ok
// SIG undefined FUN_1460b9744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b9744(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0d58) {
    FUN_144b3d300(&DAT_14c9b0d58);
    if (DAT_14c9b0d58 == -1) {
      FUN_1460b9864();
      FUN_140db5666(&DAT_14c9b0cb0,2,&DAT_14c9b0c48,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712da18,
                    FUN_14712d9f0,FUN_141750da6,&LAB_14712d9ec,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0cb0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c604);
      _Init_thread_footer(&DAT_14c9b0d58);
    }
  }
  return &DAT_14c9b0cb0;
}



// FUNCTION 1460b9864 FUN_1460b9864 body=205 status=ok
// SIG undefined FUN_1460b9864(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9864(void)

{
  if ((DAT_14c9b0caf & 2) == 0) {
    DAT_14c9b0caf = DAT_14c9b0caf | 2;
    _DAT_14c9b0c50 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylightGbxDigi";
    _DAT_14c9b0c68 = FUN_146826540;
    _DAT_14c9b0c70 = FUN_146825d77;
    _DAT_14c9b0c78 = FUN_146825fd6;
    _DAT_14c9b0c80 = FUN_1407e02ea;
    _DAT_14c9b0c88 = FUN_146826273;
    _DAT_14c9b0c60 = FUN_14712d9b2;
    _DAT_14c9b0ca0 = 0xffffffff00000110;
    _DAT_14c9b0ca8 = 8;
    DAT_14c9b0cac = 0;
    _DAT_14c9b0c90 = &LAB_14712d9e8;
    FUN_1460b9932();
    FUN_1407e00cc(&DAT_14c9b0c48);
    return;
  }
  return;
}



// FUNCTION 1460b9932 FUN_1460b9932 body=133 status=ok
// SIG undefined FUN_1460b9932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9932(void)

{
  _DAT_14c9bc0d0 = L"BASE";
  DAT_14c9bc0fa = 4;
  FUN_145c93d7e();
  _DAT_14c9bc0e0 = DAT_14c9b0c58;
  _DAT_14c9bc0d8 = &DAT_14c9bbe30;
  _DAT_14c9bc0e8 = &LAB_14682652b;
  DAT_14c9b0c58 = &DAT_14c9bc0d0;
  DAT_14c9b0cad = DAT_14c9b0cad + '\x01';
  _DAT_14c9bc0f0 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b0cae = DAT_14c9b0cae + '\x01';
  }
  return;
}



// FUNCTION 1460b99b8 FUN_1460b99b8 body=287 status=ok
// SIG undefined FUN_1460b99b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b99b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0e80) {
    FUN_144b3d300(&DAT_14c9b0e80);
    if (DAT_14c9b0e80 == -1) {
      FUN_1460b9ad8();
      FUN_140db5666(&DAT_14c9b0dd8,2,&DAT_14c9b0d70,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712dac6,
                    FUN_14712da9e,FUN_14175116a,&LAB_14712da9a,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0dd8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c610);
      _Init_thread_footer(&DAT_14c9b0e80);
    }
  }
  return &DAT_14c9b0dd8;
}



// FUNCTION 1460b9ad8 FUN_1460b9ad8 body=205 status=ok
// SIG undefined FUN_1460b9ad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9ad8(void)

{
  if ((DAT_14c9b0dd7 & 2) == 0) {
    DAT_14c9b0dd7 = DAT_14c9b0dd7 | 2;
    _DAT_14c9b0d78 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicyGbxDigi";
    _DAT_14c9b0d90 = FUN_146826540;
    _DAT_14c9b0d98 = FUN_146825d77;
    _DAT_14c9b0da0 = FUN_146825fd6;
    _DAT_14c9b0da8 = FUN_1407e02ea;
    _DAT_14c9b0db0 = FUN_146826273;
    _DAT_14c9b0d88 = FUN_14712da60;
    _DAT_14c9b0dc8 = 0xffffffff00000110;
    _DAT_14c9b0dd0 = 8;
    DAT_14c9b0dd4 = 0;
    _DAT_14c9b0db8 = &LAB_14712da96;
    FUN_1460b9ba6();
    FUN_1407e00cc(&DAT_14c9b0d70);
    return;
  }
  return;
}



// FUNCTION 1460b9ba6 FUN_1460b9ba6 body=133 status=ok
// SIG undefined FUN_1460b9ba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9ba6(void)

{
  _DAT_14c9bc120 = L"BASE";
  DAT_14c9bc14a = 4;
  FUN_145c93d7e();
  _DAT_14c9bc130 = DAT_14c9b0d80;
  _DAT_14c9bc128 = &DAT_14c9bbe30;
  _DAT_14c9bc138 = &LAB_14682652b;
  DAT_14c9b0d80 = &DAT_14c9bc120;
  DAT_14c9b0dd5 = DAT_14c9b0dd5 + '\x01';
  _DAT_14c9bc140 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b0dd6 = DAT_14c9b0dd6 + '\x01';
  }
  return;
}



// FUNCTION 1460b9c2c FUN_1460b9c2c body=287 status=ok
// SIG undefined FUN_1460b9c2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b9c2c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0fa8) {
    FUN_144b3d300(&DAT_14c9b0fa8);
    if (DAT_14c9b0fa8 == -1) {
      FUN_1460b9d4c();
      FUN_140db5666(&DAT_14c9b0f00,2,&DAT_14c9b0e98,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylightGbxDigiForceVelocity"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712db74,
                    FUN_14712db4c,FUN_141751444,&LAB_14712db48,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0f00 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c61c);
      _Init_thread_footer(&DAT_14c9b0fa8);
    }
  }
  return &DAT_14c9b0f00;
}



// FUNCTION 1460b9d4c FUN_1460b9d4c body=205 status=ok
// SIG undefined FUN_1460b9d4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9d4c(void)

{
  if ((DAT_14c9b0eff & 2) == 0) {
    DAT_14c9b0eff = DAT_14c9b0eff | 2;
    _DAT_14c9b0ea0 =
         L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylightGbxDigiForceVelocity";
    _DAT_14c9b0eb8 = FUN_146826540;
    _DAT_14c9b0ec0 = FUN_146825d77;
    _DAT_14c9b0ec8 = FUN_146825fd6;
    _DAT_14c9b0ed0 = FUN_1407e02ea;
    _DAT_14c9b0ed8 = FUN_146826273;
    _DAT_14c9b0eb0 = FUN_14712db0e;
    _DAT_14c9b0ef0 = 0xffffffff00000110;
    _DAT_14c9b0ef8 = 8;
    DAT_14c9b0efc = 0;
    _DAT_14c9b0ee0 = &LAB_14712db44;
    FUN_1460b9e1a();
    FUN_1407e00cc(&DAT_14c9b0e98);
    return;
  }
  return;
}



// FUNCTION 1460b9e1a FUN_1460b9e1a body=133 status=ok
// SIG undefined FUN_1460b9e1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9e1a(void)

{
  _DAT_14c9bc170 = L"BASE";
  DAT_14c9bc19a = 4;
  FUN_145c93d7e();
  _DAT_14c9bc180 = DAT_14c9b0ea8;
  _DAT_14c9bc178 = &DAT_14c9bbe30;
  _DAT_14c9bc188 = &LAB_14682652b;
  DAT_14c9b0ea8 = &DAT_14c9bc170;
  DAT_14c9b0efd = DAT_14c9b0efd + '\x01';
  _DAT_14c9bc190 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b0efe = DAT_14c9b0efe + '\x01';
  }
  return;
}



// FUNCTION 1460b9ea0 FUN_1460b9ea0 body=287 status=ok
// SIG undefined FUN_1460b9ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460b9ea0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b10d0) {
    FUN_144b3d300(&DAT_14c9b10d0);
    if (DAT_14c9b10d0 == -1) {
      FUN_1460b9fc0();
      FUN_140db5666(&DAT_14c9b1028,2,&DAT_14c9b0fc0,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicyGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712dc22,
                    FUN_14712dbfa,FUN_14175183c,&LAB_14712dbf6,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1028 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c628);
      _Init_thread_footer(&DAT_14c9b10d0);
    }
  }
  return &DAT_14c9b1028;
}



// FUNCTION 1460b9fc0 FUN_1460b9fc0 body=205 status=ok
// SIG undefined FUN_1460b9fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460b9fc0(void)

{
  if ((DAT_14c9b1027 & 2) == 0) {
    DAT_14c9b1027 = DAT_14c9b1027 | 2;
    _DAT_14c9b0fc8 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicyGbxDigiForceVelocity";
    _DAT_14c9b0fe0 = FUN_146826540;
    _DAT_14c9b0fe8 = FUN_146825d77;
    _DAT_14c9b0ff0 = FUN_146825fd6;
    _DAT_14c9b0ff8 = FUN_1407e02ea;
    _DAT_14c9b1000 = FUN_146826273;
    _DAT_14c9b0fd8 = FUN_14712dbbc;
    _DAT_14c9b1018 = 0xffffffff00000110;
    _DAT_14c9b1020 = 8;
    DAT_14c9b1024 = 0;
    _DAT_14c9b1008 = &LAB_14712dbf2;
    FUN_1460ba08e();
    FUN_1407e00cc(&DAT_14c9b0fc0);
    return;
  }
  return;
}



// FUNCTION 1460ba08e FUN_1460ba08e body=133 status=ok
// SIG undefined FUN_1460ba08e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba08e(void)

{
  _DAT_14c9bc1c0 = L"BASE";
  DAT_14c9bc1ea = 4;
  FUN_145c93d7e();
  _DAT_14c9bc1d0 = DAT_14c9b0fd0;
  _DAT_14c9bc1c8 = &DAT_14c9bbe30;
  _DAT_14c9bc1d8 = &LAB_14682652b;
  DAT_14c9b0fd0 = &DAT_14c9bc1c0;
  DAT_14c9b1025 = DAT_14c9b1025 + '\x01';
  _DAT_14c9bc1e0 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b1026 = DAT_14c9b1026 + '\x01';
  }
  return;
}



// FUNCTION 1460ba114 FUN_1460ba114 body=287 status=ok
// SIG undefined FUN_1460ba114(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ba114(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1320) {
    FUN_144b3d300(&DAT_14c9b1320);
    if (DAT_14c9b1320 == -1) {
      FUN_1460ba234();
      FUN_140db5666(&DAT_14c9b1278,2,&DAT_14c9b1210,
                    L"TBasePassCSFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712dd96,
                    FUN_14712dd6e,FUN_141751e62,&LAB_14712dd6a,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b1278 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c640);
      _Init_thread_footer(&DAT_14c9b1320);
    }
  }
  return &DAT_14c9b1278;
}



// FUNCTION 1460ba234 FUN_1460ba234 body=205 status=ok
// SIG undefined FUN_1460ba234(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba234(void)

{
  if ((DAT_14c9b1277 & 2) == 0) {
    DAT_14c9b1277 = DAT_14c9b1277 | 2;
    _DAT_14c9b1218 = L"TBasePassCSFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14c9b1230 = FUN_146826540;
    _DAT_14c9b1238 = FUN_146825d77;
    _DAT_14c9b1240 = FUN_146825fd6;
    _DAT_14c9b1248 = FUN_1407e02ea;
    _DAT_14c9b1250 = FUN_146826273;
    _DAT_14c9b1228 = FUN_14712dd30;
    _DAT_14c9b1268 = 0xffffffff00000128;
    _DAT_14c9b1270 = 8;
    DAT_14c9b1274 = 0;
    _DAT_14c9b1258 = &LAB_14712dd66;
    FUN_1460ba302();
    FUN_1407e00cc(&DAT_14c9b1210);
    return;
  }
  return;
}



// FUNCTION 1460ba302 FUN_1460ba302 body=133 status=ok
// SIG undefined FUN_1460ba302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba302(void)

{
  _DAT_14c9bc630 = L"BASE";
  DAT_14c9bc65a = 4;
  FUN_145d04de2();
  _DAT_14c9bc640 = DAT_14c9b1220;
  _DAT_14c9bc638 = &DAT_14c9bc240;
  _DAT_14c9bc648 = &LAB_14682652b;
  DAT_14c9b1220 = &DAT_14c9bc630;
  DAT_14c9b1275 = DAT_14c9b1275 + '\x01';
  _DAT_14c9bc650 = 0x100000000;
  if (DAT_14c9bc2a4 != '\0') {
    DAT_14c9b1276 = DAT_14c9b1276 + '\x01';
  }
  return;
}


