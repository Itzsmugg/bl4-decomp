// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14611cba6 FUN_14611cba6 body=123 status=ok
// SIG undefined FUN_14611cba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611cba6(void)

{
  _DAT_14cc32158 = L"BASE";
  DAT_14cc32182 = 4;
  _DAT_14cc32160 = FUN_140b35ae4();
  _DAT_14cc32168 = DAT_14cc31b50;
  _DAT_14cc32170 = &LAB_14682652b;
  DAT_14cc31b50 = &DAT_14cc32158;
  DAT_14cc31ba5 = DAT_14cc31ba5 + '\x01';
  _DAT_14cc32178 = 0x100000000;
  if (*(char *)(_DAT_14cc32160 + 100) != '\0') {
    DAT_14cc31ba6 = DAT_14cc31ba6 + '\x01';
  }
  return;
}



// FUNCTION 14611cc22 FUN_14611cc22 body=310 status=ok
// SIG undefined FUN_14611cc22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14611cc22(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31d78) {
    FUN_144b3d300(&DAT_14cc31d78);
    if (DAT_14cc31d78 == -1) {
      FUN_145cfd052();
      FUN_14611cd82();
      FUN_140db5666(&DAT_14cc31cd0,0,&DAT_14cc31c68,L"FHardwareVideoDecodingY416PS",
                    L"/Plugin/WmfMedia/Private/MediaHardwareVideoDecoding.usf",L"Y416ConvertPS",3,1,
                    FUN_1498e3372,FUN_1498e3312,&LAB_1498e32de,&LAB_1498e32da,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc32070);
      _DAT_14cc31cd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1446a3421);
      _Init_thread_footer(&DAT_14cc31d78);
    }
  }
  return &DAT_14cc31cd0;
}



// FUNCTION 14611cd58 Unwind@14611cd58 body=42 status=ok
// SIG undefined Unwind@14611cd58(void)

void Unwind_14611cd58(void)

{
  FUN_144d8db2c(&DAT_14cc31d78);
  return;
}



// FUNCTION 14611cd82 FUN_14611cd82 body=205 status=ok
// SIG undefined FUN_14611cd82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611cd82(void)

{
  if ((DAT_14cc31ccf & 2) == 0) {
    DAT_14cc31ccf = DAT_14cc31ccf | 2;
    _DAT_14cc31c70 = L"FHardwareVideoDecodingY416PS";
    _DAT_14cc31c88 = FUN_146826540;
    _DAT_14cc31c90 = FUN_146825d77;
    _DAT_14cc31c98 = FUN_146825fd6;
    _DAT_14cc31ca0 = FUN_1407e02ea;
    _DAT_14cc31ca8 = FUN_146826273;
    _DAT_14cc31c80 = FUN_1498e32ac;
    _DAT_14cc31cc0 = 0xffffffff000000e0;
    _DAT_14cc31cc8 = 8;
    DAT_14cc31ccc = 0;
    _DAT_14cc31cb0 = &LAB_1498e32d6;
    FUN_14611ce50();
    FUN_1407e00cc(&DAT_14cc31c68);
    return;
  }
  return;
}



// FUNCTION 14611ce50 FUN_14611ce50 body=123 status=ok
// SIG undefined FUN_14611ce50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611ce50(void)

{
  _DAT_14cc32188 = L"BASE";
  DAT_14cc321b2 = 4;
  _DAT_14cc32190 = FUN_140b35ae4();
  _DAT_14cc32198 = DAT_14cc31c78;
  _DAT_14cc321a0 = &LAB_14682652b;
  DAT_14cc31c78 = &DAT_14cc32188;
  DAT_14cc31ccd = DAT_14cc31ccd + '\x01';
  _DAT_14cc321a8 = 0x100000000;
  if (*(char *)(_DAT_14cc32190 + 100) != '\0') {
    DAT_14cc31cce = DAT_14cc31cce + '\x01';
  }
  return;
}



// FUNCTION 14611cecc FUN_14611cecc body=310 status=ok
// SIG undefined FUN_14611cecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14611cecc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31ea0) {
    FUN_144b3d300(&DAT_14cc31ea0);
    if (DAT_14cc31ea0 == -1) {
      FUN_145cfd052();
      FUN_14611d02c();
      FUN_140db5666(&DAT_14cc31df8,0,&DAT_14cc31d90,L"FHardwareVideoDecodingYCoCgPS",
                    L"/Plugin/WmfMedia/Private/MediaHardwareVideoDecoding.usf",L"YCoCgConvertPS",3,1
                    ,FUN_1498e34a4,FUN_1498e3444,&LAB_1498e3410,&LAB_1498e340c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc32070);
      _DAT_14cc31df8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1446a342d);
      _Init_thread_footer(&DAT_14cc31ea0);
    }
  }
  return &DAT_14cc31df8;
}



// FUNCTION 14611d002 Unwind@14611d002 body=42 status=ok
// SIG undefined Unwind@14611d002(void)

void Unwind_14611d002(void)

{
  FUN_144d8db2c(&DAT_14cc31ea0);
  return;
}



// FUNCTION 14611d02c FUN_14611d02c body=205 status=ok
// SIG undefined FUN_14611d02c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611d02c(void)

{
  if ((DAT_14cc31df7 & 2) == 0) {
    DAT_14cc31df7 = DAT_14cc31df7 | 2;
    _DAT_14cc31d98 = L"FHardwareVideoDecodingYCoCgPS";
    _DAT_14cc31db0 = FUN_146826540;
    _DAT_14cc31db8 = FUN_146825d77;
    _DAT_14cc31dc0 = FUN_146825fd6;
    _DAT_14cc31dc8 = FUN_1407e02ea;
    _DAT_14cc31dd0 = FUN_146826273;
    _DAT_14cc31da8 = FUN_1498e33de;
    _DAT_14cc31de8 = 0xffffffff000000e0;
    _DAT_14cc31df0 = 8;
    DAT_14cc31df4 = 0;
    _DAT_14cc31dd8 = &LAB_1498e3408;
    FUN_14611d0fa();
    FUN_1407e00cc(&DAT_14cc31d90);
    return;
  }
  return;
}



// FUNCTION 14611d0fa FUN_14611d0fa body=123 status=ok
// SIG undefined FUN_14611d0fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611d0fa(void)

{
  _DAT_14cc321b8 = L"BASE";
  DAT_14cc321e2 = 4;
  _DAT_14cc321c0 = FUN_140b35ae4();
  _DAT_14cc321c8 = DAT_14cc31da0;
  _DAT_14cc321d0 = &LAB_14682652b;
  DAT_14cc31da0 = &DAT_14cc321b8;
  DAT_14cc31df5 = DAT_14cc31df5 + '\x01';
  _DAT_14cc321d8 = 0x100000000;
  if (*(char *)(_DAT_14cc321c0 + 100) != '\0') {
    DAT_14cc31df6 = DAT_14cc31df6 + '\x01';
  }
  return;
}



// FUNCTION 14611d176 FUN_14611d176 body=310 status=ok
// SIG undefined FUN_14611d176(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14611d176(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31fc8) {
    FUN_144b3d300(&DAT_14cc31fc8);
    if (DAT_14cc31fc8 == -1) {
      FUN_145cfd052();
      FUN_14611d2d6();
      FUN_140db5666(&DAT_14cc31f20,0,&DAT_14cc31eb8,L"FHardwareVideoDecodingYCoCgAlphaPS",
                    L"/Plugin/WmfMedia/Private/MediaHardwareVideoDecoding.usf",
                    L"YCoCgAlphaConvertPS",3,1,FUN_1498e35d6,FUN_1498e3576,&LAB_1498e3542,
                    &LAB_1498e353e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc32070);
      _DAT_14cc31f20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1446a3439);
      _Init_thread_footer(&DAT_14cc31fc8);
    }
  }
  return &DAT_14cc31f20;
}



// FUNCTION 14611d2ac Unwind@14611d2ac body=42 status=ok
// SIG undefined Unwind@14611d2ac(void)

void Unwind_14611d2ac(void)

{
  FUN_144d8db2c(&DAT_14cc31fc8);
  return;
}



// FUNCTION 14611d2d6 FUN_14611d2d6 body=205 status=ok
// SIG undefined FUN_14611d2d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611d2d6(void)

{
  if ((DAT_14cc31f1f & 2) == 0) {
    DAT_14cc31f1f = DAT_14cc31f1f | 2;
    _DAT_14cc31ec0 = L"FHardwareVideoDecodingYCoCgAlphaPS";
    _DAT_14cc31ed8 = FUN_146826540;
    _DAT_14cc31ee0 = FUN_146825d77;
    _DAT_14cc31ee8 = FUN_146825fd6;
    _DAT_14cc31ef0 = FUN_1407e02ea;
    _DAT_14cc31ef8 = FUN_146826273;
    _DAT_14cc31ed0 = FUN_1498e3510;
    _DAT_14cc31f10 = 0xffffffff000000e0;
    _DAT_14cc31f18 = 8;
    DAT_14cc31f1c = 0;
    _DAT_14cc31f00 = &LAB_1498e353a;
    FUN_14611d3a4();
    FUN_1407e00cc(&DAT_14cc31eb8);
    return;
  }
  return;
}



// FUNCTION 14611d3a4 FUN_14611d3a4 body=123 status=ok
// SIG undefined FUN_14611d3a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611d3a4(void)

{
  _DAT_14cc321e8 = L"BASE";
  DAT_14cc32212 = 4;
  _DAT_14cc321f0 = FUN_140b35ae4();
  _DAT_14cc321f8 = DAT_14cc31ec8;
  _DAT_14cc32200 = &LAB_14682652b;
  DAT_14cc31ec8 = &DAT_14cc321e8;
  DAT_14cc31f1d = DAT_14cc31f1d + '\x01';
  _DAT_14cc32208 = 0x100000000;
  if (*(char *)(_DAT_14cc321f0 + 100) != '\0') {
    DAT_14cc31f1e = DAT_14cc31f1e + '\x01';
  }
  return;
}



// FUNCTION 14611d41f FUN_14611d41f body=119 status=ok
// SIG undefined FUN_14611d41f(void)

longlong *
FUN_14611d41f(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_14027c0e6();
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_140d76916(param_1,3);
    FUN_14611d51a(param_1,param_3);
    FUN_14611d496(param_1,&DAT_14cbc32a8,param_4);
    FUN_14611d496(param_1,&DAT_14cbc3298,param_5);
  }
  return param_1;
}



// FUNCTION 14611d496 FUN_14611d496 body=132 status=ok
// SIG undefined FUN_14611d496(void)

longlong * FUN_14611d496(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar4 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar4,iVar1);
    }
    lVar2 = *plVar4;
    lVar5 = (longlong)iVar1 * 0x30;
    uVar3 = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar5) = 0;
    FUN_140aec01a(lVar2 + lVar5,uVar3);
    *(undefined8 *)(lVar2 + 0x28 + lVar5) = *param_2;
  }
  return param_1;
}



// FUNCTION 14611d51a FUN_14611d51a body=259 status=ok
// SIG undefined FUN_14611d51a(void)

longlong * FUN_14611d51a(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar2 = (longlong *)FUN_14027bf48();
    lVar4 = plVar2[1];
    uVar1 = (int)lVar4 + 1;
    *(uint *)(plVar2 + 1) = uVar1;
    if (*(uint *)((longlong)plVar2 + 0xc) < uVar1) {
      FUN_140eed74c();
    }
    puVar5 = (undefined8 *)((longlong)(int)lVar4 * 0x30 + *plVar2);
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar4 = (longlong)local_38;
    _Src = (void *)*param_2;
    if (lVar4 == 0) {
      local_34 = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar4 * 2);
      iVar3 = local_38;
    }
    *puVar5 = local_40;
    *(int *)(puVar5 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_34;
    *(undefined1 *)(puVar5 + 4) = 4;
    puVar5[5] = DAT_14cbc3288;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611d61e FUN_14611d61e body=637 status=ok
// SIG undefined FUN_14611d61e(void)

bool FUN_14611d61e(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1446f8c06(param_4,0);
  }
  if ((undefined2 *)*param_4 != (undefined2 *)0x0) {
    *(undefined2 *)*param_4 = 0;
  }
  dVar9 = (double)FUN_14611d89c(param_1,param_2,param_3);
  uVar12 = (undefined4)param_1;
  if (dVar9 == 0.0) {
    FUN_140002266(&local_88,L"Could not find a starting spot");
    if (&local_88 == param_4) {
      if (local_88 != 0.0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = (longlong)local_88;
      *(undefined4 *)(param_4 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_4 + 0xc) = uStack_80._4_4_;
    }
    goto LAB_14611d756;
  }
  lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
  if (lVar1 == 0) {
    uStack_80 = DAT_14c846500;
LAB_14611d832:
    local_58 = DAT_14c8464f0;
    local_68 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_60 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar11 = *(double **)(lVar1 + 0x228);
    dVar10 = dVar9;
    local_88 = dVar4;
    uStack_80 = dVar5;
    local_78 = dVar6;
    uStack_70 = dVar7;
    if (pdVar11 == (double *)0x0) {
      uVar12 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar10;
      dVar10 = DAT_14c846500;
      pdVar11[4] = DAT_14c8464f8;
      pdVar11[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar11[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar11;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar10,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
    uVar13 = movmskpd(uVar12,auVar3);
    if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar11 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar11[6] = local_58;
      pdVar11[4] = local_68;
      pdVar11[5] = uStack_60;
    }
    uStack_80 = pdVar11[5];
    lVar1 = *(longlong *)((longlong)dVar9 + 0x1c8);
    if (lVar1 == 0) goto LAB_14611d832;
    local_68 = *(double *)(lVar1 + 0x260);
    uStack_60 = *(double *)(lVar1 + 0x268);
    local_58 = *(double *)(lVar1 + 0x270);
  }
  local_78 = 0.0;
  local_88 = 0.0;
  (**(code **)(*param_2 + 0x690))(param_2,&local_68,&local_88);
  FUN_14485c47a(param_2 + 0x74,dVar9);
LAB_14611d756:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return dVar9 != 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611d89c FUN_14611d89c body=203 status=ok
// SIG undefined FUN_14611d89c(void)

void FUN_14611d89c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40 [4];
  
  local_40[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477b072(param_1,DAT_14cadadd0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_48 = param_2;
    FUN_144a787a6(local_40,param_3);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_48);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40[3] ^ (ulonglong)auStack_68);
  }
  if ((local_40[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014611d90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x660))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611d976 FUN_14611d976 body=38 status=ok
// SIG undefined FUN_14611d976(void)

undefined8 FUN_14611d976(undefined8 param_1,int param_2)

{
  FUN_14611d99c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14611d99c FUN_14611d99c body=303 status=ok
// SIG undefined FUN_14611d99c(void)

void FUN_14611d99c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab2e1a0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14584de8c(param_1);
  return;
}



// FUNCTION 14611dad6 FUN_14611dad6 body=329 status=ok
// SIG undefined FUN_14611dad6(void)

undefined8 * FUN_14611dad6(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab80f60;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    plVar1 = param_1 + 0x7c;
    param_1[0x7f] = &DAT_14cb1cd40;
    param_1[0x7e] = param_1;
    lVar3 = DAT_14cb1cd40;
    while( true ) {
      param_1[0x7c] = lVar3;
      LOCK();
      lVar4 = *(longlong *)param_1[0x7f];
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *(longlong *)param_1[0x7f] = (longlong)plVar1;
        lVar4 = lVar3;
      }
      UNLOCK();
      if (bVar5) break;
      param_1[0x7c] = lVar4;
      lVar3 = *(longlong *)param_1[0x7f];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  FUN_1446f470e(&local_20,L"Root",1);
  uVar2 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x39] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14611dc20 FUN_14611dc20 body=155 status=ok
// SIG undefined FUN_14611dc20(void)

void FUN_14611dc20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_141400982();
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    local_30 = 0;
    FUN_14611dcbc(&local_38,param_1,param_2);
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_38);
    FUN_1449db362(&local_38);
  }
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611dcbc FUN_14611dcbc body=185 status=ok
// SIG undefined FUN_14611dcbc(void)

void FUN_14611dcbc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b4c34a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14114e6dc(puVar1 + 1,param_3);
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
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_14b4c3430;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = FUN_148a3c506;
  return;
}



// FUNCTION 14611dd7e FUN_14611dd7e body=2100 status=ok
// SIG undefined FUN_14611dd7e(void)

undefined8 * FUN_14611dd7e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc7c6b0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"SkeletonFactoryNodeUid");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"ImportBoneTracks");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"ImportBoneTracksSampleRate");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"ImportBoneTracksRangeStart");
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_14020fad6(param_1 + 0x32,L"ImportBoneTracksRangeStop");
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_14020fad6(param_1 + 0x34,L"ImportAttributeCurves");
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_14020fad6(param_1 + 0x36,L"DoNotImportCurveWithZero");
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_14020fad6(param_1 + 0x38,L"AddCurveMetadataToSkeleton");
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"RemoveCurveRedundantKeys");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"MaterialDriveParameterOnCustomAttribute");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"DeleteExistingMorphTargetCurves");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"DeleteExistingCustomAttributeCurves");
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_14020fad6(param_1 + 0x42,L"DeleteExistingNonCurveCustomAttributes");
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_14020fad6(param_1 + 0x44);
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  memset(param_1 + 0x46,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_14611e5b4();
  pvVar4 = DAT_14cc0f148;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f150;
  local_58 = DAT_14cc0f150;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f150,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  puVar1 = param_1 + 5;
  FUN_1410835a0(param_1 + 0x46,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e62e();
  pvVar4 = DAT_14cc0f160;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f168;
  local_58 = DAT_14cc0f168;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f168,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  FUN_1410835a0(param_1 + 0x4a,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e6a8();
  pvVar4 = DAT_14cc0f178;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f180;
  local_58 = DAT_14cc0f180;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f180,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  FUN_1410835a0(param_1 + 0x4e,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e722();
  pvVar4 = DAT_14cc0f190;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f198;
  local_58 = DAT_14cc0f198;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f198,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  FUN_1410835a0(param_1 + 0x52,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e79c();
  pvVar4 = DAT_14cc0f1a8;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f1b0;
  local_58 = DAT_14cc0f1b0;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f1b0,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  local_70 = param_1[5];
  local_68 = (longlong *)param_1[6];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x56,&local_70,&local_60);
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e816();
  pvVar4 = DAT_14cc0f1c0;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f1c8;
  local_58 = DAT_14cc0f1c8;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f1c8,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  local_70 = param_1[5];
  local_68 = (longlong *)param_1[6];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  FUN_1415c1980(param_1 + 0x65,&local_70,&local_60);
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e890();
  pvVar4 = DAT_14cc0f1d8;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f1e0;
  local_58 = DAT_14cc0f1e0;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f1e0,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  local_70 = param_1[5];
  local_68 = (longlong *)param_1[6];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x74,&local_70,&local_60);
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14611e90a();
  pvVar4 = DAT_14cc0f1f0;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0f1f8;
  local_58 = DAT_14cc0f1f8;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0f1f8,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  local_70 = param_1[5];
  local_68 = (longlong *)param_1[6];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  FUN_1415c1980(param_1 + 0x83,&local_70,&local_60);
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611e5b4 FUN_14611e5b4 body=121 status=ok
// SIG undefined FUN_14611e5b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e5b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f158) {
    FUN_144b3d300(&DAT_14cc0f158);
    if (DAT_14cc0f158 == -1) {
      DAT_14cc0f148 = 0;
      _DAT_14cc0f150 = 0;
      FUN_14020fad6(&DAT_14cc0f148,L"__AnimatedMeshMorphTargetDependencies__");
      atexit((_func_5014 *)&LAB_1444dda6c);
      _Init_thread_footer(&DAT_14cc0f158);
      return;
    }
  }
  return;
}



// FUNCTION 14611e62e FUN_14611e62e body=121 status=ok
// SIG undefined FUN_14611e62e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e62e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f170) {
    FUN_144b3d300(&DAT_14cc0f170);
    if (DAT_14cc0f170 == -1) {
      DAT_14cc0f160 = 0;
      _DAT_14cc0f168 = 0;
      FUN_14020fad6(&DAT_14cc0f160,L"__AnimatedAttributeCurveNames__");
      atexit((_func_5014 *)&LAB_1444dda7d);
      _Init_thread_footer(&DAT_14cc0f170);
      return;
    }
  }
  return;
}



// FUNCTION 14611e6a8 FUN_14611e6a8 body=121 status=ok
// SIG undefined FUN_14611e6a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e6a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f188) {
    FUN_144b3d300(&DAT_14cc0f188);
    if (DAT_14cc0f188 == -1) {
      DAT_14cc0f178 = 0;
      _DAT_14cc0f180 = 0;
      FUN_14020fad6(&DAT_14cc0f178,L"__AnimatedAttributeStepCurveNames__");
      atexit((_func_5014 *)&LAB_1444dda8e);
      _Init_thread_footer(&DAT_14cc0f188);
      return;
    }
  }
  return;
}



// FUNCTION 14611e722 FUN_14611e722 body=121 status=ok
// SIG undefined FUN_14611e722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e722(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f1a0) {
    FUN_144b3d300(&DAT_14cc0f1a0);
    if (DAT_14cc0f1a0 == -1) {
      DAT_14cc0f190 = 0;
      _DAT_14cc0f198 = 0;
      FUN_14020fad6(&DAT_14cc0f190,L"__AnimatedMaterialCurveSuffixes__");
      atexit((_func_5014 *)&LAB_1444dda9f);
      _Init_thread_footer(&DAT_14cc0f1a0);
      return;
    }
  }
  return;
}



// FUNCTION 14611e79c FUN_14611e79c body=121 status=ok
// SIG undefined FUN_14611e79c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e79c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f1b8) {
    FUN_144b3d300(&DAT_14cc0f1b8);
    if (DAT_14cc0f1b8 == -1) {
      DAT_14cc0f1a8 = 0;
      _DAT_14cc0f1b0 = 0;
      FUN_14020fad6(&DAT_14cc0f1a8,L"__SceneNodeAnimationPayloadKeyUidMap__");
      atexit((_func_5014 *)&LAB_1444ddab0);
      _Init_thread_footer(&DAT_14cc0f1b8);
      return;
    }
  }
  return;
}



// FUNCTION 14611e816 FUN_14611e816 body=121 status=ok
// SIG undefined FUN_14611e816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e816(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f1d0) {
    FUN_144b3d300(&DAT_14cc0f1d0);
    if (DAT_14cc0f1d0 == -1) {
      DAT_14cc0f1c0 = 0;
      _DAT_14cc0f1c8 = 0;
      FUN_14020fad6(&DAT_14cc0f1c0,L"__SceneNodeAnimationPayloadKeyTypeMap__");
      atexit((_func_5014 *)&LAB_1444ddac1);
      _Init_thread_footer(&DAT_14cc0f1d0);
      return;
    }
  }
  return;
}



// FUNCTION 14611e890 FUN_14611e890 body=121 status=ok
// SIG undefined FUN_14611e890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e890(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f1e8) {
    FUN_144b3d300(&DAT_14cc0f1e8);
    if (DAT_14cc0f1e8 == -1) {
      DAT_14cc0f1d8 = 0;
      _DAT_14cc0f1e0 = 0;
      FUN_14020fad6(&DAT_14cc0f1d8,L"__MorphTargetNodePayloadKeyUidMap__");
      atexit((_func_5014 *)&LAB_1444ddad2);
      _Init_thread_footer(&DAT_14cc0f1e8);
      return;
    }
  }
  return;
}



// FUNCTION 14611e90a FUN_14611e90a body=121 status=ok
// SIG undefined FUN_14611e90a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611e90a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0f200) {
    FUN_144b3d300(&DAT_14cc0f200);
    if (DAT_14cc0f200 == -1) {
      DAT_14cc0f1f0 = 0;
      _DAT_14cc0f1f8 = 0;
      FUN_14020fad6(&DAT_14cc0f1f0,L"__MorphTargetNodePayloadKeyTypeMap__");
      atexit((_func_5014 *)&LAB_1444ddae3);
      _Init_thread_footer(&DAT_14cc0f200);
      return;
    }
  }
  return;
}



// FUNCTION 14611e98e FUN_14611e98e body=330 status=ok
// SIG undefined FUN_14611e98e(void)

undefined8 * FUN_14611e98e(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4da7f0;
  param_1[8] = &PTR_FUN_14a4daad0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  uVar1 = FUN_1408bae02();
  *(uint *)(param_1 + 7) = uVar1 | 0x10;
  *param_1 = &PTR_FUN_14a4dcbb0;
  param_1[8] = &PTR_FUN_14a4dce90;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x60);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar2 + 0x68);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_1412217cc();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14099c56c();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611eada FUN_14611eada body=130 status=ok
// SIG undefined FUN_14611eada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611eada(void)

{
  if (DAT_14caf1b70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf1b60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf1b48 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf1ab8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf19a8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14caf1990 = 0;
  if (DAT_14caf1988 != 0) {
    FUN_1400020a8();
  }
  FUN_14611eb5c();
  return;
}



// FUNCTION 14611eb5c FUN_14611eb5c body=54 status=ok
// SIG undefined FUN_14611eb5c(void)

void FUN_14611eb5c(void)

{
  FUN_1415dbde2();
  if (DAT_14caf1968 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf1948 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14611eb92 FUN_14611eb92 body=35 status=ok
// SIG undefined FUN_14611eb92(void)

void FUN_14611eb92(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014611ebb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14611ebb6 FUN_14611ebb6 body=135 status=ok
// SIG undefined FUN_14611ebb6(void)

void FUN_14611ebb6(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x1d0] != 0) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0x40000000;
    (**(code **)(*param_1 + 0x698))(param_1,param_1[0x1d0],param_1 + 0x86);
    FUN_14024f1da(param_1 + 0x86,param_1[0x72]);
    param_1[0x1d0] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14611ec3e FUN_14611ec3e body=205 status=ok
// SIG undefined FUN_14611ec3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611ec3e(void)

{
  if ((DAT_14cb1006f & 2) == 0) {
    DAT_14cb1006f = DAT_14cb1006f | 2;
    _DAT_14cb10010 = L"FWeightedRandomSampler";
    _DAT_14cb10028 = FUN_146826540;
    _DAT_14cb10030 = FUN_146825d77;
    _DAT_14cb10038 = FUN_146825fd6;
    _DAT_14cb10040 = FUN_1407e02ea;
    _DAT_14cb10048 = FUN_146826273;
    _DAT_14cb10020 = FUN_147da94d4;
    _DAT_14cb10060 = 0xffffffff00000030;
    _DAT_14cb10068 = 8;
    DAT_14cb1006c = 2;
    _DAT_14cb10050 = &LAB_147da9504;
    FUN_14611ed0c();
    FUN_1407e00cc(&DAT_14cb10008);
    return;
  }
  return;
}



// FUNCTION 14611ed0c FUN_14611ed0c body=275 status=ok
// SIG undefined FUN_14611ed0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611ed0c(void)

{
  FUN_14611ee20();
  _DAT_14cb10650 = L"Prob";
  DAT_14cb1067a = FUN_140850cc5();
  if ((DAT_14ca76fe7 & 2) == 0) {
    DAT_14ca76fe7 = DAT_14ca76fe7 | 3;
    _DAT_14ca76f88 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca76fa0 = &LAB_14737b570;
    _DAT_14ca76fa8 = FUN_14737b57e;
    _DAT_14ca76fb0 = &LAB_14737b59e;
    _DAT_14ca76fb8 = &LAB_14737b5ac;
    _DAT_14ca76fc0 = &LAB_14737b5ba;
    _DAT_14ca76f98 = FUN_14737b5c6;
    _DAT_14ca76fd8 = 0x1000000010;
    _DAT_14ca76fe0 = 8;
    DAT_14ca76fe4 = 0;
  }
  _DAT_14cb10658 = &DAT_14ca76f80;
  _DAT_14cb10668 = &LAB_14682652b;
  _DAT_14cb10670 = &DAT_100000008;
  _DAT_14cb10678 = 0;
  _DAT_14cb10660 = DAT_14cb10018;
  DAT_14cb10018 = &DAT_14cb10650;
  return;
}



// FUNCTION 14611ee20 FUN_14611ee20 body=276 status=ok
// SIG undefined FUN_14611ee20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611ee20(void)

{
  FUN_14611ef34();
  _DAT_14cb10680 = L"Alias";
  DAT_14cb106aa = FUN_140850cc5();
  if ((DAT_14ca9a347 & 2) == 0) {
    DAT_14ca9a347 = DAT_14ca9a347 | 3;
    _DAT_14ca9a2e8 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca9a300 = &LAB_147437ebc;
    _DAT_14ca9a308 = FUN_147437eca;
    _DAT_14ca9a310 = &LAB_147437eea;
    _DAT_14ca9a318 = &LAB_147437ef8;
    _DAT_14ca9a320 = &LAB_147437f06;
    _DAT_14ca9a2f8 = FUN_147437f12;
    _DAT_14ca9a338 = 0x1000000010;
    _DAT_14ca9a340 = 8;
    DAT_14ca9a344 = 0;
  }
  _DAT_14cb10688 = &DAT_14ca9a2e0;
  _DAT_14cb10698 = &LAB_14682652b;
  _DAT_14cb106a0 = &DAT_100000018;
  _DAT_14cb106a8 = 0;
  _DAT_14cb10690 = DAT_14cb10018;
  DAT_14cb10018 = &DAT_14cb10680;
  return;
}



// FUNCTION 14611ef34 FUN_14611ef34 body=270 status=ok
// SIG undefined FUN_14611ef34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611ef34(void)

{
  _DAT_14cb106b0 = L"TotalWeight";
  DAT_14cb106da = FUN_140850cc5();
  if ((DAT_14c951b7f & 2) == 0) {
    DAT_14c951b7f = DAT_14c951b7f | 3;
    _DAT_14c951b20 = L"float";
    _DAT_14c951b38 = &LAB_1468cb284;
    _DAT_14c951b40 = &LAB_1468cb290;
    _DAT_14c951b48 = &LAB_1468cb2a0;
    _DAT_14c951b50 = &LAB_1468cb2a6;
    _DAT_14c951b58 = &LAB_1468cb2aa;
    _DAT_14c951b30 = &LAB_1468cb2b4;
    _DAT_14c951b70 = 0x400000004;
    _DAT_14c951b78 = 4;
    DAT_14c951b7c = 0;
  }
  _DAT_14cb106b8 = &DAT_14c951b18;
  _DAT_14cb106c8 = &LAB_14682652b;
  _DAT_14cb106d0 = &DAT_100000028;
  _DAT_14cb106d8 = 0;
  _DAT_14cb106c0 = DAT_14cb10018;
  DAT_14cb10018 = &DAT_14cb106b0;
  return;
}



// FUNCTION 14611f042 FUN_14611f042 body=145 status=ok
// SIG undefined FUN_14611f042(void)

void FUN_14611f042(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_140b95084(param_2);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x24);
        if ((((*plVar2 == *param_2) && (plVar2[1] == param_2[1])) &&
            ((int)plVar2[2] == (int)param_2[2])) &&
           (*(char *)((longlong)plVar2 + 0x14) == *(char *)((longlong)param_2 + 0x14))) {
          FUN_14611f0d4(param_1);
          return;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0x1c);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14611f0d4 FUN_14611f0d4 body=85 status=ok
// SIG undefined FUN_14611f0d4(void)

void FUN_14611f0d4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_14611f12a();
  return;
}



// FUNCTION 14611f12a FUN_14611f12a body=112 status=ok
// SIG undefined FUN_14611f12a(void)

void FUN_14611f12a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 14611f19a FUN_14611f19a body=91 status=ok
// SIG undefined FUN_14611f19a(void)

longlong FUN_14611f19a(longlong param_1,longlong param_2)

{
  FUN_14611f1f6();
  FUN_14611f1f6(param_1 + 0x18,param_2 + 0x18);
  if (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    FUN_140cb1718(param_1 + 0x38,param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  return param_1;
}



// FUNCTION 14611f1f6 FUN_14611f1f6 body=80 status=ok
// SIG undefined FUN_14611f1f6(void)

void FUN_14611f1f6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[2];
  if ((int)param_1[2] != iVar1) {
    if (param_1 != param_2) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
      iVar1 = (int)param_2[2];
    }
    *(int *)(param_1 + 2) = iVar1;
  }
  return;
}



// FUNCTION 14611f246 FUN_14611f246 body=205 status=ok
// SIG undefined FUN_14611f246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f246(void)

{
  if ((DAT_14ca9835f & 2) == 0) {
    DAT_14ca9835f = DAT_14ca9835f | 2;
    _DAT_14ca98300 = L"FShaderLooseParameterBufferInfo";
    _DAT_14ca98318 = FUN_146826540;
    _DAT_14ca98320 = FUN_146825d77;
    _DAT_14ca98328 = FUN_146825fd6;
    _DAT_14ca98330 = FUN_1407e02ea;
    _DAT_14ca98338 = FUN_146826273;
    _DAT_14ca98310 = FUN_1474323be;
    _DAT_14ca98350 = 0xffffffff00000018;
    _DAT_14ca98358 = 8;
    DAT_14ca9835c = 0;
    _DAT_14ca98340 = &LAB_1474323f2;
    FUN_14611f314();
    FUN_1407e00cc(&DAT_14ca982f8);
    return;
  }
  return;
}



// FUNCTION 14611f314 FUN_14611f314 body=276 status=ok
// SIG undefined FUN_14611f314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f314(void)

{
  FUN_14611f428();
  _DAT_14ca99b08 = L"BaseIndex";
  DAT_14ca99b32 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99b10 = &DAT_14ca84cb0;
  _DAT_14ca99b20 = &LAB_14682652b;
  _DAT_14ca99b28 = 0x100000000;
  _DAT_14ca99b30 = 0;
  _DAT_14ca99b18 = DAT_14ca98308;
  DAT_14ca98308 = &DAT_14ca99b08;
  return;
}



// FUNCTION 14611f428 FUN_14611f428 body=276 status=ok
// SIG undefined FUN_14611f428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f428(void)

{
  FUN_14611f53c();
  _DAT_14ca99b38 = L"Size";
  DAT_14ca99b62 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99b40 = &DAT_14ca84cb0;
  _DAT_14ca99b50 = &LAB_14682652b;
  _DAT_14ca99b58 = &DAT_100000002;
  _DAT_14ca99b60 = 0;
  _DAT_14ca99b48 = DAT_14ca98308;
  DAT_14ca98308 = &DAT_14ca99b38;
  return;
}



// FUNCTION 14611f53c FUN_14611f53c body=270 status=ok
// SIG undefined FUN_14611f53c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f53c(void)

{
  _DAT_14ca99b68 = L"Parameters";
  DAT_14ca99b92 = FUN_140850cc5();
  if ((DAT_14ca99bff & 2) == 0) {
    DAT_14ca99bff = DAT_14ca99bff | 3;
    _DAT_14ca99ba0 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca99bb8 = &LAB_147438744;
    _DAT_14ca99bc0 = FUN_147438752;
    _DAT_14ca99bc8 = &LAB_147438772;
    _DAT_14ca99bd0 = &LAB_147438780;
    _DAT_14ca99bd8 = FUN_14743878e;
    _DAT_14ca99bb0 = FUN_1474387d8;
    _DAT_14ca99bf0 = 0x1000000010;
    _DAT_14ca99bf8 = 8;
    DAT_14ca99bfc = 0;
  }
  _DAT_14ca99b70 = &DAT_14ca99b98;
  _DAT_14ca99b80 = &LAB_14682652b;
  _DAT_14ca99b88 = &DAT_100000008;
  _DAT_14ca99b90 = 0;
  _DAT_14ca99b78 = DAT_14ca98308;
  DAT_14ca98308 = &DAT_14ca99b68;
  return;
}



// FUNCTION 14611f64a FUN_14611f64a body=205 status=ok
// SIG undefined FUN_14611f64a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f64a(void)

{
  if ((DAT_14caefa57 & 2) == 0) {
    DAT_14caefa57 = DAT_14caefa57 | 2;
    _DAT_14caef9f8 = L"FMaterialUniformPreshaderField";
    _DAT_14caefa10 = FUN_146826540;
    _DAT_14caefa18 = FUN_146825d77;
    _DAT_14caefa20 = FUN_146825fd6;
    _DAT_14caefa28 = FUN_1407e02ea;
    _DAT_14caefa30 = FUN_146826273;
    _DAT_14caefa08 = &LAB_147bc007c;
    _DAT_14caefa48 = 0xffffffff0000000c;
    _DAT_14caefa50 = 4;
    DAT_14caefa54 = 0;
    _DAT_14caefa38 = &LAB_147bc0092;
    FUN_14611f718();
    FUN_1407e00cc(&DAT_14caef9f0);
    return;
  }
  return;
}



// FUNCTION 14611f718 FUN_14611f718 body=276 status=ok
// SIG undefined FUN_14611f718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f718(void)

{
  FUN_14611f82c();
  _DAT_14caf0d70 = L"BufferOffset";
  DAT_14caf0d9a = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0d78 = &DAT_14c87e638;
  _DAT_14caf0d88 = &LAB_14682652b;
  _DAT_14caf0d90 = 0x100000000;
  _DAT_14caf0d98 = 0;
  _DAT_14caf0d80 = DAT_14caefa00;
  DAT_14caefa00 = &DAT_14caf0d70;
  return;
}



// FUNCTION 14611f82c FUN_14611f82c body=276 status=ok
// SIG undefined FUN_14611f82c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f82c(void)

{
  FUN_14611f940();
  _DAT_14caf0da0 = L"ComponentIndex";
  DAT_14caf0dca = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf0da8 = &DAT_14c87e638;
  _DAT_14caf0db8 = &LAB_14682652b;
  _DAT_14caf0dc0 = &DAT_100000004;
  _DAT_14caf0dc8 = 0;
  _DAT_14caf0db0 = DAT_14caefa00;
  DAT_14caefa00 = &DAT_14caf0da0;
  return;
}



// FUNCTION 14611f940 FUN_14611f940 body=270 status=ok
// SIG undefined FUN_14611f940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611f940(void)

{
  _DAT_14caf0dd0 = L"Type";
  DAT_14caf0dfa = FUN_140850cc5();
  if ((DAT_14caf0e67 & 2) == 0) {
    DAT_14caf0e67 = DAT_14caf0e67 | 3;
    _DAT_14caf0e08 = L"UE::Shader::EValueType";
    _DAT_14caf0e20 = &LAB_147bc4f5a;
    _DAT_14caf0e28 = &LAB_147bc4f66;
    _DAT_14caf0e30 = &LAB_147bc4f72;
    _DAT_14caf0e38 = &LAB_147bc4f78;
    _DAT_14caf0e40 = &LAB_147bc4f7c;
    _DAT_14caf0e18 = &LAB_147bc4f82;
    _DAT_14caf0e58 = &DAT_100000001;
    _DAT_14caf0e60 = 1;
    DAT_14caf0e64 = 0;
  }
  _DAT_14caf0dd8 = &DAT_14caf0e00;
  _DAT_14caf0de8 = &LAB_14682652b;
  _DAT_14caf0df0 = &DAT_100000008;
  _DAT_14caf0df8 = 0;
  _DAT_14caf0de0 = DAT_14caefa00;
  DAT_14caefa00 = &DAT_14caf0dd0;
  return;
}



// FUNCTION 14611fa4e FUN_14611fa4e body=205 status=ok
// SIG undefined FUN_14611fa4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611fa4e(void)

{
  if ((DAT_14caefc17 & 2) == 0) {
    DAT_14caefc17 = DAT_14caefc17 | 2;
    _DAT_14caefbb8 = L"FMaterialExternalTextureParameterInfo";
    _DAT_14caefbd0 = FUN_146826540;
    _DAT_14caefbd8 = FUN_146825d77;
    _DAT_14caefbe0 = FUN_146825fd6;
    _DAT_14caefbe8 = FUN_1407e02ea;
    _DAT_14caefbf0 = FUN_146826273;
    _DAT_14caefbc8 = &LAB_147bc00dc;
    _DAT_14caefc08 = 0xffffffff00000020;
    _DAT_14caefc10 = 4;
    DAT_14caefc14 = 0;
    _DAT_14caefbf8 = &LAB_147bc00ec;
    FUN_14611fb1c();
    FUN_1407e00cc(&DAT_14caefbb0);
    return;
  }
  return;
}



// FUNCTION 14611fb1c FUN_14611fb1c body=275 status=ok
// SIG undefined FUN_14611fb1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611fb1c(void)

{
  FUN_14611fc30();
  _DAT_14caf10e8 = L"ParameterName";
  DAT_14caf1112 = FUN_140850cc5();
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  _DAT_14caf10f0 = &DAT_14caf1310;
  _DAT_14caf1100 = &LAB_14682652b;
  _DAT_14caf1108 = 0x100000000;
  _DAT_14caf1110 = 0;
  _DAT_14caf10f8 = DAT_14caefbc0;
  DAT_14caefbc0 = &DAT_14caf10e8;
  return;
}



// FUNCTION 14611fc30 FUN_14611fc30 body=276 status=ok
// SIG undefined FUN_14611fc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611fc30(void)

{
  FUN_14611fd44();
  _DAT_14caf1118 = L"ExternalTextureGuid";
  DAT_14caf1142 = FUN_140850cc5();
  if ((DAT_14caf13df & 2) == 0) {
    DAT_14caf13df = DAT_14caf13df | 3;
    _DAT_14caf1380 = L"FGuid";
    _DAT_14caf1398 = &LAB_147bc26fe;
    _DAT_14caf13a0 = &LAB_147bc270a;
    _DAT_14caf13a8 = &LAB_147bc2718;
    _DAT_14caf13b0 = &LAB_147bc271e;
    _DAT_14caf13b8 = &LAB_147bc2722;
    _DAT_14caf1390 = &LAB_147bc2728;
    _DAT_14caf13d0 = 0x1000000010;
    _DAT_14caf13d8 = 4;
    DAT_14caf13dc = 0;
  }
  _DAT_14caf1120 = &DAT_14caf1378;
  _DAT_14caf1130 = &LAB_14682652b;
  _DAT_14caf1138 = &DAT_10000000c;
  _DAT_14caf1140 = 0;
  _DAT_14caf1128 = DAT_14caefbc0;
  DAT_14caefbc0 = &DAT_14caf1118;
  return;
}



// FUNCTION 14611fd44 FUN_14611fd44 body=271 status=ok
// SIG undefined FUN_14611fd44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14611fd44(void)

{
  _DAT_14caf1148 = L"SourceTextureIndex";
  DAT_14caf1172 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf1150 = &DAT_14c951bf8;
  _DAT_14caf1160 = &LAB_14682652b;
  _DAT_14caf1168 = &DAT_10000001c;
  _DAT_14caf1170 = 0;
  _DAT_14caf1158 = DAT_14caefbc0;
  DAT_14caefbc0 = &DAT_14caf1148;
  return;
}



// FUNCTION 14611ff10 FUN_14611ff10 body=254 status=ok
// SIG undefined FUN_14611ff10(void)

undefined8
FUN_14611ff10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9aee20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9aedb0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_146120010(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146120010 FUN_146120010 body=216 status=ok
// SIG undefined FUN_146120010(void)

undefined8 * FUN_146120010(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1461200f6 FUN_1461200f6 body=24 status=ok
// SIG undefined FUN_1461200f6(void)

bool FUN_1461200f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14612010e FUN_14612010e body=296 status=ok
// SIG undefined FUN_14612010e(void)

void FUN_14612010e(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [44];
  undefined8 local_5c;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar1 != '\0') {
      if (param_3 == '\0') {
        FUN_146120238(param_2,param_1,0);
        local_51 = 0;
        local_5c = 0;
        FUN_14485c47a(&local_5c,param_2);
        local_40 = &local_5c;
        local_38 = &local_51;
        FUN_14612052c(param_1 + 0x26c0,local_2c,&local_40,0);
      }
      else {
        local_48 = (undefined8 *)0x0;
        FUN_14485c47a(&local_48,param_2);
        local_40 = local_48;
        iVar2 = FUN_14612029a(param_1 + 0x26c0,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48)
        ;
        if (iVar2 != -1) {
          FUN_146120238(param_2,param_1,1);
          local_50 = 0;
          FUN_14485c47a(&local_50,param_2);
          FUN_146120356(param_1 + 0x26c0,local_50);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146120238 FUN_146120238 body=96 status=ok
// SIG undefined FUN_146120238(void)

void FUN_146120238(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc98);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612029a FUN_14612029a body=186 status=ok
// SIG undefined FUN_14612029a(void)

int FUN_14612029a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14612031a;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14612031a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146120356 FUN_146120356 body=266 status=ok
// SIG undefined FUN_146120356(void)

undefined8 FUN_146120356(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar8 + uVar9 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_48 = *(undefined8 *)(lVar2 + lVar4 * 0x14);
      local_50 = param_2;
      cVar3 = FUN_1407052fc();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x14);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)((longlong)puVar7 + 0xc);
          if (lVar4 == -1) goto LAB_1461203ec;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
          local_48 = *puVar1;
          local_50 = param_2;
          cVar3 = FUN_1407052fc(&local_48,&local_50);
        } while (cVar3 == '\0');
        puVar6 = (undefined4 *)((longlong)puVar7 + 0xc);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      }
      FUN_146120462(param_1,*puVar6);
      uVar5 = 1;
    }
  }
LAB_1461203ec:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146120462 FUN_146120462 body=85 status=ok
// SIG undefined FUN_146120462(void)

void FUN_146120462(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_1461204b8();
  return;
}



// FUNCTION 1461204b8 FUN_1461204b8 body=116 status=ok
// SIG undefined FUN_1461204b8(void)

void FUN_1461204b8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 14612052c FUN_14612052c body=310 status=ok
// SIG undefined FUN_14612052c(void)

undefined4 *
FUN_14612052c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14112137e(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  local_68 = param_4;
  cVar4 = FUN_1411212da(param_1,uVar9,local_48,&local_54);
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_48 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_141121a6c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146120664 FUN_146120664 body=226 status=ok
// SIG undefined FUN_146120664(void)

longlong * FUN_146120664(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c1a8e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612074c FUN_14612074c body=138 status=ok
// SIG undefined FUN_14612074c(void)

undefined1 * FUN_14612074c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141567cae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FObjectCullVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8498;
  return &LAB_146120748;
}



// FUNCTION 1461207d6 FUN_1461207d6 body=146 status=ok
// SIG undefined FUN_1461207d6(void)

code * FUN_1461207d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141545922();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FObjectCullPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x150000000d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8520;
  return FUN_14612074c;
}



// FUNCTION 146120868 FUN_146120868 body=205 status=ok
// SIG undefined FUN_146120868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120868(void)

{
  if ((DAT_14ca9827f & 2) == 0) {
    DAT_14ca9827f = DAT_14ca9827f | 2;
    _DAT_14ca98220 = L"FShaderResourceParameterInfo";
    _DAT_14ca98238 = FUN_146826540;
    _DAT_14ca98240 = FUN_146825d77;
    _DAT_14ca98248 = FUN_146825fd6;
    _DAT_14ca98250 = FUN_1407e02ea;
    _DAT_14ca98258 = FUN_146826273;
    _DAT_14ca98230 = &LAB_1474323a6;
    _DAT_14ca98270 = 0xffffffff00000004;
    _DAT_14ca98278 = 2;
    DAT_14ca9827c = 0;
    _DAT_14ca98260 = &LAB_1474323ae;
    FUN_146120936();
    FUN_1407e00cc(&DAT_14ca98218);
    return;
  }
  return;
}



// FUNCTION 146120936 FUN_146120936 body=276 status=ok
// SIG undefined FUN_146120936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120936(void)

{
  FUN_146120a4a();
  _DAT_14ca99a18 = L"BaseIndex";
  DAT_14ca99a42 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99a20 = &DAT_14ca84cb0;
  _DAT_14ca99a30 = &LAB_14682652b;
  _DAT_14ca99a38 = 0x100000000;
  _DAT_14ca99a40 = 0;
  _DAT_14ca99a28 = DAT_14ca98228;
  DAT_14ca98228 = &DAT_14ca99a18;
  return;
}



// FUNCTION 146120a4a FUN_146120a4a body=276 status=ok
// SIG undefined FUN_146120a4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120a4a(void)

{
  FUN_146120b5e();
  _DAT_14ca99a48 = L"BufferIndex";
  DAT_14ca99a72 = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14ca99a50 = &DAT_14ca76fe8;
  _DAT_14ca99a60 = &LAB_14682652b;
  _DAT_14ca99a68 = &DAT_100000002;
  _DAT_14ca99a70 = 0;
  _DAT_14ca99a58 = DAT_14ca98228;
  DAT_14ca98228 = &DAT_14ca99a48;
  return;
}



// FUNCTION 146120b5e FUN_146120b5e body=271 status=ok
// SIG undefined FUN_146120b5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120b5e(void)

{
  _DAT_14ca99a78 = L"Type";
  DAT_14ca99aa2 = FUN_140850cc5();
  if ((DAT_14ca9a3c7 & 2) == 0) {
    DAT_14ca9a3c7 = DAT_14ca9a3c7 | 3;
    _DAT_14ca9a368 = L"EShaderParameterType";
    _DAT_14ca9a380 = &LAB_14743871c;
    _DAT_14ca9a388 = &LAB_147438728;
    _DAT_14ca9a390 = &LAB_147438734;
    _DAT_14ca9a398 = &LAB_14322d698;
    _DAT_14ca9a3a0 = &LAB_14743873a;
    _DAT_14ca9a378 = &LAB_147438740;
    _DAT_14ca9a3b8 = &DAT_100000001;
    _DAT_14ca9a3c0 = 1;
    DAT_14ca9a3c4 = 0;
  }
  _DAT_14ca99a80 = &DAT_14ca9a360;
  _DAT_14ca99a90 = &LAB_14682652b;
  _DAT_14ca99a98 = &DAT_100000003;
  _DAT_14ca99aa0 = 0;
  _DAT_14ca99a88 = DAT_14ca98228;
  DAT_14ca98228 = &DAT_14ca99a78;
  return;
}



// FUNCTION 146120c6e FUN_146120c6e body=205 status=ok
// SIG undefined FUN_146120c6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120c6e(void)

{
  if ((DAT_14caefc87 & 2) == 0) {
    DAT_14caefc87 = DAT_14caefc87 | 2;
    _DAT_14caefc28 = L"FMaterialVirtualTextureStack";
    _DAT_14caefc40 = FUN_146826540;
    _DAT_14caefc48 = FUN_146825d77;
    _DAT_14caefc50 = FUN_146825fd6;
    _DAT_14caefc58 = FUN_1407e02ea;
    _DAT_14caefc60 = FUN_146826273;
    _DAT_14caefc38 = &LAB_147bc00f0;
    _DAT_14caefc78 = 0xffffffff00000028;
    _DAT_14caefc80 = 4;
    DAT_14caefc84 = 0;
    _DAT_14caefc68 = &LAB_147bc010e;
    FUN_146120d3c();
    FUN_1407e00cc(&DAT_14caefc20);
    return;
  }
  return;
}



// FUNCTION 146120d3c FUN_146120d3c body=276 status=ok
// SIG undefined FUN_146120d3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120d3c(void)

{
  FUN_146120e50();
  _DAT_14caf1178 = L"NumLayers";
  DAT_14caf11a2 = FUN_140850cc5();
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14caf1180 = &DAT_14c87e638;
  _DAT_14caf1190 = &LAB_14682652b;
  _DAT_14caf1198 = 0x100000000;
  _DAT_14caf11a0 = 0;
  _DAT_14caf1188 = DAT_14caefc30;
  DAT_14caefc30 = &DAT_14caf1178;
  return;
}



// FUNCTION 146120e50 FUN_146120e50 body=276 status=ok
// SIG undefined FUN_146120e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120e50(void)

{
  FUN_146120f64();
  _DAT_14caf11a8 = L"LayerUniformExpressionIndices";
  DAT_14caf11d2 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf11b0 = &DAT_14c951bf8;
  _DAT_14caf11c0 = &LAB_14682652b;
  _DAT_14caf11c8 = 0x800000004;
  _DAT_14caf11d0 = 0;
  _DAT_14caf11b8 = DAT_14caefc30;
  DAT_14caefc30 = &DAT_14caf11a8;
  return;
}



// FUNCTION 146120f64 FUN_146120f64 body=271 status=ok
// SIG undefined FUN_146120f64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146120f64(void)

{
  _DAT_14caf11d8 = L"PreallocatedStackTextureIndex";
  DAT_14caf1202 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf11e0 = &DAT_14c951bf8;
  _DAT_14caf11f0 = &LAB_14682652b;
  _DAT_14caf11f8 = &DAT_100000024;
  _DAT_14caf1200 = 0;
  _DAT_14caf11e8 = DAT_14caefc30;
  DAT_14caefc30 = &DAT_14caf11d8;
  return;
}



// FUNCTION 146121074 FUN_146121074 body=205 status=ok
// SIG undefined FUN_146121074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146121074(void)

{
  if ((DAT_14cb0592f & 2) == 0) {
    DAT_14cb0592f = DAT_14cb0592f | 2;
    _DAT_14cb058d0 = L"UE::Shader::FPreshaderStructType";
    _DAT_14cb058e8 = FUN_146826540;
    _DAT_14cb058f0 = FUN_146825d77;
    _DAT_14cb058f8 = FUN_146825fd6;
    _DAT_14cb05900 = FUN_1407e02ea;
    _DAT_14cb05908 = FUN_146826273;
    _DAT_14cb058e0 = &LAB_147d0c9c0;
    _DAT_14cb05920 = 0xffffffff00000010;
    _DAT_14cb05928 = 8;
    DAT_14cb0592c = 0;
    _DAT_14cb05910 = &LAB_147d0c9cc;
    FUN_146121142();
    FUN_1407e00cc(&DAT_14cb058c8);
    return;
  }
  return;
}



// FUNCTION 146121142 FUN_146121142 body=276 status=ok
// SIG undefined FUN_146121142(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146121142(void)

{
  FUN_146121256();
  _DAT_14cb05c70 = &DAT_149e385f8;
  DAT_14cb05c9a = FUN_140850cc5();
  if ((DAT_14c87e707 & 2) == 0) {
    DAT_14c87e707 = DAT_14c87e707 | 3;
    _DAT_14c87e6a8 = L"unsigned long long";
    _DAT_14c87e6c0 = FUN_146828f6a;
    _DAT_14c87e6c8 = &LAB_146828f9c;
    _DAT_14c87e6d0 = &LAB_146828fa8;
    _DAT_14c87e6d8 = &LAB_146828fae;
    _DAT_14c87e6e0 = FUN_146828fb2;
    _DAT_14c87e6b8 = &LAB_146828fce;
    _DAT_14c87e6f8 = 0x800000008;
    _DAT_14c87e700 = 8;
    DAT_14c87e704 = 0;
  }
  _DAT_14cb05c78 = &DAT_14c87e6a0;
  _DAT_14cb05c88 = &LAB_14682652b;
  _DAT_14cb05c90 = 0x100000000;
  _DAT_14cb05c98 = 0;
  _DAT_14cb05c80 = DAT_14cb058d8;
  DAT_14cb058d8 = &DAT_14cb05c70;
  return;
}



// FUNCTION 146121256 FUN_146121256 body=276 status=ok
// SIG undefined FUN_146121256(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146121256(void)

{
  FUN_14612136a();
  _DAT_14cb05ca0 = L"ComponentTypeIndex";
  DAT_14cb05cca = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14cb05ca8 = &DAT_14c951bf8;
  _DAT_14cb05cb8 = &LAB_14682652b;
  _DAT_14cb05cc0 = &DAT_100000008;
  _DAT_14cb05cc8 = 0;
  _DAT_14cb05cb0 = DAT_14cb058d8;
  DAT_14cb058d8 = &DAT_14cb05ca0;
  return;
}



// FUNCTION 14612136a FUN_14612136a body=271 status=ok
// SIG undefined FUN_14612136a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612136a(void)

{
  _DAT_14cb05cd0 = L"NumComponents";
  DAT_14cb05cfa = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14cb05cd8 = &DAT_14c951bf8;
  _DAT_14cb05ce8 = &LAB_14682652b;
  _DAT_14cb05cf0 = &DAT_10000000c;
  _DAT_14cb05cf8 = 0;
  _DAT_14cb05ce0 = DAT_14cb058d8;
  DAT_14cb058d8 = &DAT_14cb05cd0;
  return;
}



// FUNCTION 146121484 FUN_146121484 body=331 status=ok
// SIG undefined FUN_146121484(void)

undefined8 * FUN_146121484(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14584e116();
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 7) = 0x7f;
  *param_1 = &PTR_FUN_14ac23a90;
  param_1[5] = &PTR_FUN_14ac23d90;
  FUN_145dc33e0(param_1 + 0xe);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf7;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14ac04970;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14ac26040;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_1);
  puVar1[4] = FUN_147f08ffe;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_144a450dc(param_1 + 0x17,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461215dc FUN_1461215dc body=78 status=ok
// SIG undefined FUN_1461215dc(void)

undefined8 * FUN_1461215dc(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b081770;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_14612162a(param_1);
  return param_1;
}



// FUNCTION 14612162a FUN_14612162a body=292 status=ok
// SIG undefined FUN_14612162a(void)

void FUN_14612162a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_20,L"Root",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x1c8) = lVar2;
  FUN_1446f470e(&local_28,L"NiagaraComponent0",1);
  uVar1 = FUN_144a7e9aa();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x3c8) = lVar2;
    if (lVar2 == 0) goto LAB_14612170f;
  }
  else {
    FUN_1456cec3c(lVar2);
    *(longlong *)(param_1 + 0x3c8) = lVar2;
  }
  FUN_140486fc4(lVar2,*(undefined8 *)(param_1 + 0x1c8),0);
  FUN_146121750(param_1);
LAB_14612170f:
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 8;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146121750 FUN_146121750 body=646 status=ok
// SIG undefined FUN_146121750(void)

void FUN_146121750(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_71;
  undefined8 local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_1402d1dc0(param_1 + 0x390);
  if (lVar6 == 0) {
    if (*(longlong *)(param_1 + 0x398) != 0) {
      local_70 = 0;
      FUN_14485c47a(&local_70,param_1);
      lVar7 = FUN_14050fd64();
      uVar5 = local_70;
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar4 = local_88;
      local_80 = 3;
      *local_88 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_88[2] = lVar8;
      *local_88 = &PTR_FUN_14b3e5f30;
      local_88[3] = 0;
      FUN_14485c47a(local_88 + 3,param_1);
      puVar4[4] = uVar5;
      local_90 = &local_71;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = 0;
      FUN_140a1e0be(lVar7 + 0x1e8,&local_68,param_1 + 0x398,&local_88);
      plVar2 = local_60;
      if ((ulonglong *)(param_1 + 0x3d0) != &local_68) {
        *(ulonglong *)(param_1 + 0x3d0) = local_68;
        local_68 = 0;
        plVar3 = *(longlong **)(param_1 + 0x3d8);
        if (local_60 != plVar3) {
          local_60 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x3d8) = plVar2;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar3 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
      }
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      FUN_1449db362(&local_88);
    }
  }
  else {
    lVar6 = FUN_1402d1dc0(param_1 + 0x390);
    plVar2 = *(longlong **)(param_1 + 0x3c8);
    if (lVar6 == 0) {
      FUN_1409d23de(plVar2,0,1);
    }
    else {
      (**(code **)(*plVar2 + 0xa78))(plVar2,lVar6);
      local_68 = local_68 & 0xffffffffffffff00;
      local_40 = 0;
      FUN_1456bb102(&local_68,param_1);
      local_88 = *(undefined8 **)(param_1 + 0x3b8);
      local_80 = *(undefined4 *)(param_1 + 0x3c0);
      FUN_140e99737(*(undefined8 *)(param_1 + 0x3c8),&local_88,&local_68);
      FUN_144a5ac3a(&local_68);
    }
    FUN_14080a7a8(*(undefined8 *)(param_1 + 0x3c8));
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461219e0 FUN_1461219e0 body=335 status=ok
// SIG undefined FUN_1461219e0(void)

undefined8 * FUN_1461219e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140fe66fa();
  *param_1 = &PTR_FUN_14bd878f0;
  param_1[5] = &PTR_FUN_14bd87c80;
  param_1[0x13] = &PTR_FUN_14bd87ca0;
  param_1[0x14] = &PTR_FUN_14bd87cc0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3ff00000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0;
  param_1[0x32] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x33] = DAT_14c8464e0;
  param_1[0x34] = uVar1;
  param_1[0x35] = DAT_14c8464f0;
  param_1[0x38] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 1;
  return param_1;
}



// FUNCTION 146121b30 FUN_146121b30 body=327 status=ok
// SIG undefined FUN_146121b30(void)

void FUN_146121b30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_146121c78(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_1406f90ea;
  local_30 = 3;
  local_148 = param_2;
  FUN_146121da2(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146121c78 FUN_146121c78 body=148 status=ok
// SIG undefined FUN_146121c78(void)

undefined8 * FUN_146121c78(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_146121d0e(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146121d0e FUN_146121d0e body=147 status=ok
// SIG undefined FUN_146121d0e(void)

void FUN_146121d0e(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146121da2 FUN_146121da2 body=554 status=ok
// SIG undefined FUN_146121da2(void)

int * FUN_146121da2(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_14612201a(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_146121f2a;
  }
  plVar5 = (longlong *)FUN_14612208a(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_146121fce(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_145c16f8e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_146121efd;
    }
  }
  else {
LAB_146121efd:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_146121f2a:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146121fce FUN_146121fce body=75 status=ok
// SIG undefined FUN_146121fce(void)

void FUN_146121fce(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  return;
}



// FUNCTION 14612201a FUN_14612201a body=112 status=ok
// SIG undefined FUN_14612201a(void)

undefined8 FUN_14612201a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 14612208a FUN_14612208a body=180 status=ok
// SIG undefined FUN_14612208a(void)

undefined8 * FUN_14612208a(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c19f0;
  puVar4[2] = &PTR_FUN_14a4c1a08;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146122140 FUN_146122140 body=42 status=ok
// SIG undefined FUN_146122140(void)

void FUN_146122140(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415dc0d8(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 146122172 FUN_146122172 body=336 status=ok
// SIG undefined FUN_146122172(void)

undefined8 * FUN_146122172(undefined8 *param_1)

{
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bd90930;
  param_1[5] = &PTR_FUN_14bd90cd0;
  param_1[0x13] = &PTR_FUN_14bd90cf0;
  param_1[0x17] = &PTR_FUN_14bd90d20;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = &DAT_100000004;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = &DAT_100000004;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return param_1;
}



// FUNCTION 1461222c2 FUN_1461222c2 body=247 status=ok
// SIG undefined FUN_1461222c2(void)

ulonglong FUN_1461222c2(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 *local_40;
  void **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_14134e836(plVar6,uVar1,param_2);
  if (iVar2 == -1) {
    _Dst = (void *)FUN_14001cc68(0xb8);
    memset(_Dst,0,0xb8);
    FUN_1461223ba((longlong)_Dst + 0x18);
    *(undefined8 *)((longlong)_Dst + 0x78) = 0;
    *(undefined8 *)((longlong)_Dst + 0x80) = 0;
    *(undefined8 *)((longlong)_Dst + 0x88) = 0;
    *(undefined8 *)((longlong)_Dst + 0x90) = 0;
    *(undefined8 *)((longlong)_Dst + 0x98) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
    local_38 = &local_48;
    local_48 = _Dst;
    local_40 = param_2;
    FUN_1461223f4(plVar6,&local_2c);
    uVar5 = *(ulonglong *)(*plVar6 + 0x10 + (longlong)local_2c * 0x20);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461223ba FUN_1461223ba body=58 status=ok
// SIG undefined FUN_1461223ba(void)

void FUN_1461223ba(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0x5a00000a8c;
  param_1[10] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1461223f4 FUN_1461223f4 body=312 status=ok
// SIG undefined FUN_1461223f4(void)

undefined4 * FUN_1461223f4(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146122604(param_1,local_48);
  FUN_14612252e(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_146122592(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1461226ea(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612252e FUN_14612252e body=100 status=ok
// SIG undefined FUN_14612252e(void)

undefined8 * FUN_14612252e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 146122592 FUN_146122592 body=114 status=ok
// SIG undefined FUN_146122592(void)

undefined8 FUN_146122592(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_14134e836(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_145fd23e4(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146122604 FUN_146122604 body=230 status=ok
// SIG undefined FUN_146122604(void)

int * FUN_146122604(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1461226ea FUN_1461226ea body=485 status=ok
// SIG undefined FUN_1461226ea(void)

void FUN_1461226ea(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461228d0 FUN_1461228d0 body=727 status=ok
// SIG undefined FUN_1461228d0(void)

void FUN_1461228d0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *plStack_60;
  uint local_50;
  undefined1 local_4c [4];
  uint *local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_2;
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    lVar6 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x130);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xf0);
      do {
        if (*(uint *)(lVar6 + (longlong)iVar7 * 0x18) == param_2) goto LAB_146122ae3;
        iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  plVar5 = (longlong *)FUN_140a68038(1);
  if (plVar5 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_68);
    plVar5 = local_68;
    if (local_68 != (longlong *)0x0) {
      local_80 = (undefined8 *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,3,0x10);
      puVar3 = local_80;
      local_78 = 3;
      *local_80 = &PTR_LAB_14b4e4d10;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_80[2] = lVar8;
      *local_80 = &PTR_FUN_14b4eb7e0;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,param_1);
      puVar3[4] = FUN_143f2a3be;
      *(undefined4 *)(puVar3 + 5) = 0;
      (**(code **)(*plVar5 + 0x28))(plVar5,local_70,param_2,&local_80);
      local_48 = &local_50;
      local_40 = local_70;
      FUN_146122ba8((longlong *)(param_1 + 0xf0),local_4c,&local_48,0);
      FUN_1449db362(&local_80);
    }
  }
  if (*(longlong *)(param_1 + 400) == 0) {
    local_48 = (uint *)0x0;
    local_40 = (undefined1 *)((ulonglong)local_40 & 0xffffffff00000000);
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar4 = local_48;
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,3);
    *(undefined ***)local_48 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    *(longlong *)(local_48 + 4) = lVar8;
    *(undefined ***)local_48 = &PTR_FUN_14b4eb850;
    local_48[6] = 0;
    local_48[7] = 0;
    FUN_14485c47a(local_48 + 6,param_1);
    *(longlong *)(puVar4 + 8) = param_1;
    FUN_1448b6402(&DAT_14c872c10,&local_80,&local_48);
    FUN_1449db362(&local_48);
    *(undefined8 **)(param_1 + 400) = local_80;
  }
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_146122ae3:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146122ba8 FUN_146122ba8 body=304 status=ok
// SIG undefined FUN_146122ba8(void)

undefined4 *
FUN_146122ba8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14111b270(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_14111b1d8(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14111b44c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146122cd9 FUN_146122cd9 body=99 status=ok
// SIG undefined FUN_146122cd9(void)

void FUN_146122cd9(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e8cc0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &PTR_FUN_14affef30;
  *(undefined2 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 146122d3c FUN_146122d3c body=38 status=ok
// SIG undefined FUN_146122d3c(void)

undefined8 FUN_146122d3c(undefined8 param_1,int param_2)

{
  FUN_1415dc500();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146122d62 FUN_146122d62 body=63 status=ok
// SIG undefined FUN_146122d62(void)

undefined1 FUN_146122d62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146122da2(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 146122da2 FUN_146122da2 body=282 status=ok
// SIG undefined FUN_146122da2(void)

longlong FUN_146122da2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_1403de7ba(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  FUN_1403de7ba(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_1447715ec(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_1447715ec(param_1 + 0x98,param_2 + 0x98);
  FUN_144983130(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144983130(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar6 = *(undefined4 *)(param_2 + 0x130);
  uVar7 = *(undefined4 *)(param_2 + 0x134);
  uVar8 = *(undefined4 *)(param_2 + 0x138);
  uVar9 = *(undefined4 *)(param_2 + 0x13c);
  uVar10 = *(undefined4 *)(param_2 + 0x144);
  uVar11 = *(undefined4 *)(param_2 + 0x148);
  uVar12 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar10;
  *(undefined4 *)(param_1 + 0x148) = uVar11;
  *(undefined4 *)(param_1 + 0x14c) = uVar12;
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  *(undefined4 *)(param_1 + 0x134) = uVar7;
  *(undefined4 *)(param_1 + 0x138) = uVar8;
  *(undefined4 *)(param_1 + 0x13c) = uVar9;
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  lVar4 = *(longlong *)(param_2 + 0x160);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 146122ebc FUN_146122ebc body=89 status=ok
// SIG undefined FUN_146122ebc(void)

void FUN_146122ebc(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &LAB_145de9d74;
  local_18 = 0;
  FUN_146122f16(&DAT_14c8673d8,local_10,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146122f16 FUN_146122f16 body=254 status=ok
// SIG undefined FUN_146122f16(void)

undefined8
FUN_146122f16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b4fe470;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146123016 FUN_146123016 body=68 status=ok
// SIG undefined FUN_146123016(void)

void FUN_146123016(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x208);
  memset(_Dst,0,0x208);
  FUN_14612305a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14612305a FUN_14612305a body=277 status=ok
// SIG undefined FUN_14612305a(void)

undefined8 * FUN_14612305a(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8c1520;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb1) = 0;
  FUN_140056680(param_1 + 0x17,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x19] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1b] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1c) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1d] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1e) = (int)plVar2[1];
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_1413f03d2(param_1 + 0x2e);
  return param_1;
}



// FUNCTION 14612317a FUN_14612317a body=334 status=ok
// SIG undefined FUN_14612317a(void)

undefined8 * FUN_14612317a(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14bb66560;
  param_1[5] = &PTR_FUN_14bb66f90;
  param_1[6] = &PTR_LAB_14bb66fd0;
  param_1[0x55] = &PTR_FUN_14bb67020;
  param_1[0x56] = &PTR_FUN_14bb670a0;
  param_1[0x57] = &PTR_FUN_14bb670b0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  memset(param_1 + 0xc4,0,0x88);
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 2;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 7;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  param_1[0xd8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x6bc) = 1;
  *(undefined2 *)(param_1 + 0xe7) = 0x100;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0x3f0000003dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0x10101013c23d70a;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return param_1;
}



// FUNCTION 1461232c8 FUN_1461232c8 body=287 status=ok
// SIG undefined FUN_1461232c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1461232c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df7d0) {
    FUN_144b3d300(&DAT_14c9df7d0);
    if (DAT_14c9df7d0 == -1) {
      FUN_1461233e8();
      FUN_140db5666(&DAT_14c9df728,2,&DAT_14c9df6c0,
                    L"FRenderVolumetricShadowMapForLightWithLiveShadingCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingShadows.usf"
                    ,L"RenderVolumetricShadowMapForLightWithLiveShadingCS",5,8,FUN_14719c7f0,
                    FUN_14719c7c8,&LAB_142c9b938,&LAB_14719c7c4,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14c9df728 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142c9b98c);
      _Init_thread_footer(&DAT_14c9df7d0);
    }
  }
  return &DAT_14c9df728;
}



// FUNCTION 1461233e8 FUN_1461233e8 body=320 status=ok
// SIG undefined FUN_1461233e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461233e8(void)

{
  if ((DAT_14c9df727 & 2) == 0) {
    DAT_14c9df727 = DAT_14c9df727 | 2;
    _DAT_14c9df6c8 = L"FRenderVolumetricShadowMapForLightWithLiveShadingCS";
    _DAT_14c9df6e0 = FUN_146826540;
    _DAT_14c9df6e8 = FUN_146825d77;
    _DAT_14c9df6f0 = FUN_146825fd6;
    _DAT_14c9df6f8 = FUN_1407e02ea;
    _DAT_14c9df700 = FUN_146826273;
    _DAT_14c9df6d8 = FUN_14719c78a;
    _DAT_14c9df718 = 0xffffffff00000110;
    _DAT_14c9df720 = 8;
    DAT_14c9df724 = 0;
    _DAT_14c9df708 = &LAB_14719c7c0;
    _DAT_14c9e1098 = L"ShaderLooseBindings";
    DAT_14c9e10c2 = FUN_140850cc5();
    FUN_1461235a4();
    _DAT_14c9e10a0 = &DAT_14c9df650;
    _DAT_14c9e10b0 = &LAB_14682652b;
    _DAT_14c9e10b8 = &DAT_100000108;
    _DAT_14c9e10c0 = 0;
    _DAT_14c9e10a8 = DAT_14c9df6d0;
    DAT_14c9df6d0 = &DAT_14c9e1098;
    FUN_146123528();
    FUN_1407e00cc(&DAT_14c9df6c0);
    return;
  }
  return;
}



// FUNCTION 146123528 FUN_146123528 body=123 status=ok
// SIG undefined FUN_146123528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146123528(void)

{
  _DAT_14c9e1bc8 = L"BASE";
  DAT_14c9e1bf2 = 4;
  _DAT_14c9e1bd0 = FUN_141092e92();
  _DAT_14c9e1bd8 = DAT_14c9df6d0;
  _DAT_14c9e1be0 = &LAB_14682652b;
  DAT_14c9df6d0 = &DAT_14c9e1bc8;
  DAT_14c9df725 = DAT_14c9df725 + '\x01';
  _DAT_14c9e1be8 = 0x100000000;
  if (*(char *)(_DAT_14c9e1bd0 + 100) != '\0') {
    DAT_14c9df726 = DAT_14c9df726 + '\x01';
  }
  return;
}



// FUNCTION 1461235a4 FUN_1461235a4 body=308 status=ok
// SIG undefined FUN_1461235a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461235a4(void)

{
  if ((DAT_14c9df6b7 & 2) == 0) {
    DAT_14c9df6b7 = DAT_14c9df6b7 | 2;
    _DAT_14c9df658 = L"FRenderShadowMapLooseBindings";
    _DAT_14c9df670 = FUN_146826540;
    _DAT_14c9df678 = FUN_146825d77;
    _DAT_14c9df680 = FUN_146825fd6;
    _DAT_14c9df688 = FUN_1407e02ea;
    _DAT_14c9df690 = FUN_146826273;
    _DAT_14c9df668 = &LAB_14719c77e;
    _DAT_14c9df6a8 = 0xffffffff00000004;
    _DAT_14c9df6b0 = 2;
    DAT_14c9df6b4 = 0;
    _DAT_14c9df698 = &LAB_14719c786;
    _DAT_14c9e1068 = L"SceneDepthTextureBinding";
    DAT_14c9e1092 = FUN_140850cc5();
    _DAT_14c9e1070 = FUN_140fb78d0();
    _DAT_14c9e1080 = &LAB_14682652b;
    _DAT_14c9e1088 = 0x100000000;
    _DAT_14c9e1090 = 0;
    _DAT_14c9e1078 = DAT_14c9df660;
    DAT_14c9df660 = &DAT_14c9e1068;
    FUN_1407e00cc(&DAT_14c9df650);
    return;
  }
  return;
}



// FUNCTION 1461236e4 FUN_1461236e4 body=334 status=ok
// SIG undefined FUN_1461236e4(void)

undefined8 * FUN_1461236e4(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aab3460;
  param_1[0x72] = 0;
  FUN_1403121a6(param_1,0);
  FUN_1446f470e(&local_28,L"SplineMeshComponent0",1);
  local_48 = FUN_141235872();
  local_38 = 0;
  local_40 = 1;
  plVar1 = (longlong *)FUN_140486aac(param_2,param_1,local_28,local_48);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x72] = plVar1;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cad0ef8,1);
  *(undefined1 *)(param_1[0x72] + 0x1fb) = 0;
  plVar1 = (longlong *)param_1[0x72];
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) & 0xf7;
    (**(code **)(*plVar1 + 0x958))();
    plVar1 = (longlong *)param_1[0x72];
  }
  *(byte *)((longlong)plVar1 + 0x845) = *(byte *)((longlong)plVar1 + 0x845) | 1;
  lVar2 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146123834 FUN_146123834 body=119 status=ok
// SIG undefined FUN_146123834(void)

void FUN_146123834(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = DAT_14cb8a728;
  lVar3 = (longlong)DAT_14cb8a728;
  if (DAT_14cb8a728 < param_1) {
    uVar4 = param_1 - DAT_14cb8a728;
    uVar2 = DAT_14cb8a72c - DAT_14cb8a728;
    DAT_14cb8a728 = param_1;
    if (uVar2 < uVar4) {
      FUN_1461238ac(iVar1);
    }
    memset((void *)(lVar3 * 8 + DAT_14cb8a720),0,(longlong)(int)uVar4 << 3);
    return;
  }
  if (-1 < param_1) {
    if (DAT_14cb8a728 <= param_1) {
      return;
    }
    DAT_14cb8a728 = param_1;
    FUN_148966e66();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_1);
}



// FUNCTION 1461238ac FUN_1461238ac body=140 status=ok
// SIG undefined FUN_1461238ac(void)

void FUN_1461238ac(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb8a728;
  if (param_1 <= (int)DAT_14cb8a728) {
    if (DAT_14cb8a72c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb8a728) {
        uVar2 = DAT_14cb8a728;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb8a728 + ((ulonglong)((longlong)(int)DAT_14cb8a728 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb8a72c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb8a720,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146123944 FUN_146123944 body=336 status=ok
// SIG undefined FUN_146123944(void)

undefined8 * FUN_146123944(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140ffc8f2();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *param_1 = &PTR_FUN_14a6cdef0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xd] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xe] = uVar1;
  param_1[0xf] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x10] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x1a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x1b] = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1d) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar4;
  param_1[0x1f] = DAT_14c8464f0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x125) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf33b0) {
    FUN_144b3d300(&DAT_14caf33b0);
    if (DAT_14caf33b0 == -1) {
      FUN_1446f470e(&DAT_14caf33a8,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf33b0);
    }
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = DAT_14caf33a8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  return param_1;
}



// FUNCTION 146123a94 FUN_146123a94 body=300 status=ok
// SIG undefined FUN_146123a94(void)

longlong * FUN_146123a94(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
    *puVar5 = &PTR_FUN_14b99f110;
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
    *puVar5 = &PTR_FUN_14b99f110;
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



// FUNCTION 146123bc0 FUN_146123bc0 body=261 status=ok
// SIG undefined FUN_146123bc0(void)

longlong *
FUN_146123bc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_146123cc6(param_1,&DAT_14c9647b8);
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  uVar2 = FUN_14482ca40();
  *(uint *)((longlong)param_1 + 0x24) = uVar2 | param_5 | 0x90000000;
  EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x30));
  plVar3 = (longlong *)param_1[2];
  do {
    if (plVar3 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar3;
    }
    if ((*(uint *)(param_1 + 4) & *(uint *)(lVar6 + 8)) == 0) {
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)((longlong)param_1 + 0x24) & *(uint *)(lVar5 + 8)) == 0) {
        lVar5 = param_1[3];
        lVar4 = FUN_1446f8646();
        if (lVar5 == lVar4) {
          return param_1;
        }
        iVar1 = *(int *)(param_1[3] + 0x38);
        if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8)
            == param_1[3] + 0x30)) {
          return param_1;
        }
      }
    }
    param_1[2] = 0;
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + 1) = uVar2;
      if (*(int *)(*param_1 + 0x24) <= (int)uVar2) {
        return param_1;
      }
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 0x10) * 8);
    } while (*(longlong *)(lVar6 + ((ulonglong)uVar2 & 0xffff) * 0x18) == 0);
    plVar3 = (longlong *)(lVar6 + ((ulonglong)uVar2 & 0xffff) * 0x18);
    param_1[2] = (longlong)plVar3;
  } while( true );
}



// FUNCTION 146123cc6 FUN_146123cc6 body=87 status=ok
// SIG undefined FUN_146123cc6(void)

void FUN_146123cc6(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  uVar2 = 0xffffffff;
  if (param_3 != '\0') {
    uVar2 = *(uint *)(param_2 + 4);
  }
  do {
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 1) = uVar2;
    if (*(int *)(param_2 + 0x24) <= (int)uVar2) {
      return;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar2 >> 0x10) * 8);
  } while (*(longlong *)(lVar1 + (ulonglong)(uVar2 & 0xffff) * 0x18) == 0);
  param_1[2] = lVar1 + (ulonglong)(uVar2 & 0xffff) * 0x18;
  return;
}



// FUNCTION 146123d28 FUN_146123d28 body=336 status=ok
// SIG undefined FUN_146123d28(void)

undefined8 * FUN_146123d28(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4da7f0;
  param_1[8] = &PTR_FUN_14a4daad0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  uVar1 = FUN_1408bae02();
  *(uint *)(param_1 + 7) = uVar1 | 0x10;
  *param_1 = &PTR_FUN_14a4ab460;
  param_1[8] = &PTR_FUN_14a4ab740;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x90);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar2 + 0x98);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146123e82 FUN_146123e82 body=540 status=ok
// SIG undefined FUN_146123e82(void)

undefined8 * FUN_146123e82(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bddd190;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3d0888893727c5ac;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  puVar1 = &DAT_14c846480;
  puVar3 = param_1 + 0x44;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  *puVar1 = 0;
  FUN_14612409e(puVar1 + 1);
  param_1[0x61] = puVar1;
  param_1[0x60] = puVar1;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0xff7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  return param_1;
}



// FUNCTION 14612409e FUN_14612409e body=148 status=ok
// SIG undefined FUN_14612409e(void)

void FUN_14612409e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 146124132 FUN_146124132 body=401 status=ok
// SIG undefined FUN_146124132(void)

longlong *
FUN_146124132(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x218,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a50ce70;
  plVar1 = plVar4 + 2;
  FUN_1461242c4(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_14612434a(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1461241e8;
    param_1[1] = 0;
LAB_146124255:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461241e8;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_1461241e8;
      goto LAB_146124255;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461241e8;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461241e8:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x208;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461242c4 FUN_1461242c4 body=133 status=ok
// SIG undefined FUN_1461242c4(void)

undefined8 * FUN_1461242c4(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f14760;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f170f0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 14612434a FUN_14612434a body=162 status=ok
// SIG undefined FUN_14612434a(void)

void FUN_14612434a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146124389;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146124389;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146124389:
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
                    /* WARNING: Could not recover jumptable at 0x0001461243e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461243ec FUN_1461243ec body=55 status=ok
// SIG undefined FUN_1461243ec(void)

void FUN_1461243ec(longlong *param_1)

{
  FUN_1415dcd2c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146124424 FUN_146124424 body=25 status=ok
// SIG undefined FUN_146124424(void)

byte FUN_146124424(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1415dcfae();
  bVar2 = FUN_14612443e();
  return bVar2 | bVar1;
}



// FUNCTION 14612443e FUN_14612443e body=14 status=ok
// SIG undefined FUN_14612443e(void)

undefined8 FUN_14612443e(void)

{
  return CONCAT71((int7)((ulonglong)DAT_14cadbb70 >> 8),*DAT_14cadbb70 != 0);
}



// FUNCTION 14612444c FUN_14612444c body=68 status=ok
// SIG undefined FUN_14612444c(void)

void FUN_14612444c(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1f0);
  memset(_Dst,0,0x1f0);
  FUN_146124490(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146124490 FUN_146124490 body=281 status=ok
// SIG undefined FUN_146124490(void)

undefined8 * FUN_146124490(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b8be0;
  *(undefined2 *)(param_1 + 0x16) = 0x101;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 5;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14e) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_144a5dc74(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x34) = 8;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | 5;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined4 *)(param_1 + 0x3b) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  return param_1;
}



// FUNCTION 1461245b4 FUN_1461245b4 body=338 status=ok
// SIG undefined FUN_1461245b4(void)

undefined8 * FUN_1461245b4(undefined8 *param_1)

{
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14bc61660;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  param_1[0x4d] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  return param_1;
}



// FUNCTION 146124706 FUN_146124706 body=158 status=ok
// SIG undefined FUN_146124706(void)

bool FUN_146124706(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461247a6 FUN_1461247a6 body=95 status=ok
// SIG undefined FUN_1461247a6(void)

void FUN_1461247a6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (DAT_14cbd5900 != 0) {
    FUN_145b16772(param_1 + 0x30);
    return;
  }
  lVar1 = FUN_14011c349();
  if (*param_2 != *(longlong *)(lVar1 + 0x60)) {
    if (*param_2 == *(longlong *)(lVar1 + 0x48)) {
      FUN_145b16846(param_1);
      return;
    }
    return;
  }
  FUN_145b167ac(param_1);
  return;
}



// FUNCTION 146124806 FUN_146124806 body=247 status=ok
// SIG undefined FUN_146124806(void)

void FUN_146124806(longlong *param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      plVar4 = (longlong *)FUN_141181ea8(param_1);
      lVar3 = *plVar4;
      SRWLock = (PSRWLOCK)(lVar3 + 0x1c0);
      AcquireSRWLockShared(SRWLock);
      lVar3 = FUN_1415dd1b6(lVar3 + 200,param_2);
      ReleaseSRWLockShared(SRWLock);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_141181ea8(param_1);
        lVar3 = *plVar4;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
        *(int *)(lVar3 + 0x1b8) = *(int *)(lVar3 + 0x1b8) + 1;
        *(int *)(lVar3 + 0xd8) = *(int *)(lVar3 + 0xd8) + 1;
        lVar5 = FUN_1415dd1b6(lVar3 + 200,param_2);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
        if (lVar5 != 0) {
          uVar1 = FUN_1415dd0e4(lVar2 + 0x6090,param_2);
          *(undefined1 *)(lVar5 + 0x39) = uVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 146124908 FUN_146124908 body=687 status=ok
// SIG undefined FUN_146124908(void)

undefined8 * FUN_146124908(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140ea0dc2();
  *param_1 = &PTR_FUN_14a51cba0;
  param_1[5] = &PTR_FUN_14a51cef0;
  FUN_144a5dc74(param_1 + 0x31);
  FUN_144a5dc74(param_1 + 0x33);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  FUN_140a581a0(param_1 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0x4a6) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  lVar6 = FUN_140bcc93a();
  FUN_140a5e6b8(param_1 + 0x38,lVar6 + 0x45e0);
  *(undefined4 *)(param_1 + 0x94) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0x4a4) = 0x101;
  FUN_141266e28(param_1,1);
  *(undefined1 *)((longlong)param_1 + 0x4a7) = 0;
  *(byte *)((longlong)param_1 + 0x16d) = *(byte *)((longlong)param_1 + 0x16d) | 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab7f68) && (FUN_144b3d300(&DAT_14cab7f68), DAT_14cab7f68 == -1)) {
    FUN_140056680(&local_a0,L"/Engine/EngineFonts/Roboto");
    local_d8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",&local_a0);
    puVar7 = local_a0;
    if (local_98 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_145b0497c(&DAT_14cab7f50,puVar7,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_143334567);
    _Init_thread_footer(&DAT_14cab7f68);
  }
  local_b8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  FUN_1446ddc76(local_c8,&DAT_149eea5a7,1);
  local_d8 = (undefined8 *)&local_c0;
  FUN_140324f46(&local_a0,DAT_14cab7f60,0x41400000,local_c8);
  plVar1 = local_68;
  local_70 = param_1[0x3f];
  plVar4 = (longlong *)param_1[0x40];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar5 = (undefined8 *)*local_68;
      local_68 = plVar4;
      (*(code *)*puVar5)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      plVar4 = local_68;
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar4 = local_68;
      }
    }
  }
  local_68 = plVar4;
  FUN_1412cc59c(param_1 + 0x39,&local_a0);
  plVar4 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146124bb8 FUN_146124bb8 body=83 status=ok
// SIG undefined FUN_146124bb8(void)

void FUN_146124bb8(undefined8 *param_1)

{
  longlong *_Dst;
  longlong lVar1;
  int iVar2;
  
  _Dst = (longlong *)*param_1;
  lVar1 = *_Dst;
  if (lVar1 != 0) {
    FUN_14476820c(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar2 = 0;
  }
  else {
    memmove(_Dst,_Dst + 1,(longlong)(*(int *)(param_1 + 1) + -1) << 3);
    iVar2 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar2;
  return;
}



// FUNCTION 146124c0c FUN_146124c0c body=38 status=ok
// SIG undefined FUN_146124c0c(void)

undefined8 FUN_146124c0c(undefined8 param_1,int param_2)

{
  FUN_146124c32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146124c32 FUN_146124c32 body=429 status=ok
// SIG undefined FUN_146124c32(void)

void FUN_146124c32(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a9e4be0;
  plVar3 = (longlong *)param_1[0x289];
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
  FUN_146124e5e(param_1 + 0x279);
  if (param_1[0x276] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x275) = 0;
  if (param_1[0x274] != 0) {
    FUN_1400020a8();
  }
  FUN_146124de0(param_1 + 0x26c);
  if (param_1[0x243] != 0) {
    FUN_1400020a8();
  }
  FUN_146124e15(param_1[0x23a],*(undefined4 *)(param_1 + 0x23b));
  if (param_1[0x23a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x232] != 0) {
    plVar3 = param_1 + 0x236;
    if ((longlong *)param_1[0x234] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x234];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x230] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x228] != 0) {
    plVar3 = param_1 + 0x22c;
    if ((longlong *)param_1[0x22a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x226] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21e] != 0) {
    plVar3 = param_1 + 0x222;
    if ((longlong *)param_1[0x220] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x220];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x217] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146124de0 FUN_146124de0 body=53 status=ok
// SIG undefined FUN_146124de0(void)

void FUN_146124de0(longlong *param_1)

{
  FUN_146124f5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146124e15 FUN_146124e15 body=72 status=ok
// SIG undefined FUN_146124e15(void)

void FUN_146124e15(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a9e5108;
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xf;
  }
  return;
}



// FUNCTION 146124e5e FUN_146124e5e body=136 status=ok
// SIG undefined FUN_146124e5e(void)

void FUN_146124e5e(longlong *param_1)

{
  FUN_146124ee6(param_1[0xd],(int)param_1[0xe]);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146124f0e(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146124ee6 FUN_146124ee6 body=40 status=ok
// SIG undefined FUN_146124ee6(void)

void FUN_146124ee6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478cf4c2(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146124f0e FUN_146124f0e body=77 status=ok
// SIG undefined FUN_146124f0e(void)

void FUN_146124f0e(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146124f5c FUN_146124f5c body=378 status=ok
// SIG undefined FUN_146124f5c(void)

void FUN_146124f5c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461250d8 FUN_1461250d8 body=367 status=ok
// SIG undefined FUN_1461250d8(void)

void FUN_1461250d8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x360);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x230) + 0x30);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(lVar3 + 0x38) = lVar1;
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x230) + 0x30);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    plVar2[0x40] = (ulonglong)DAT_14c892fa8;
    (**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(param_2 + 0x360));
    lVar3 = FUN_146125248(*(undefined8 *)(param_2 + 0x360),0);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar2);
    }
    *(longlong **)(lVar3 + 0x10) = plVar2;
    lVar3 = FUN_146125268(*(undefined8 *)(param_2 + 0x360),2);
    if (lVar3 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar2);
      }
      *(longlong **)(lVar3 + 0x10) = plVar2;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x230) + 0x38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(param_2 + 0x360));
    lVar3 = *(longlong *)(param_2 + 0x360);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar2);
    }
    *(longlong **)(lVar3 + 0x108) = plVar2;
    lVar3 = FUN_146125248(*(undefined8 *)(param_2 + 0x360),0);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar2);
    }
    *(longlong **)(lVar3 + 0x18) = plVar2;
  }
  FUN_146125290(*(undefined8 *)(param_2 + 0x360),0);
  return;
}



// FUNCTION 146125248 FUN_146125248 body=32 status=ok
// SIG undefined FUN_146125248(void)

longlong FUN_146125248(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140192022();
  return (longlong)iVar1 * 0x78 + *(longlong *)(param_1 + 0x1a0);
}



// FUNCTION 146125268 FUN_146125268 body=40 status=ok
// SIG undefined FUN_146125268(void)

char * FUN_146125268(longlong param_1,char param_2)

{
  char *pcVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    pcVar1 = *(char **)(param_1 + 0x1a0);
    lVar2 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + 0x78;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  return (char *)0x0;
}



// FUNCTION 146125290 FUN_146125290 body=86 status=ok
// SIG undefined FUN_146125290(void)

void FUN_146125290(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != param_2 && plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,0);
  }
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x168) = param_2;
  return;
}



// FUNCTION 1461252f2 FUN_1461252f2 body=338 status=ok
// SIG undefined FUN_1461252f2(void)

undefined8 * FUN_1461252f2(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abf21c0;
  param_1[5] = &PTR_LAB_14abf24f0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  FUN_1400b22c2(&local_28,"Tag Cooldown");
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
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 4;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  *(undefined1 **)((longlong)param_1 + 0x7c) = &DAT_40a00000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffc3 | 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146125450 FUN_146125450 body=338 status=ok
// SIG undefined FUN_146125450(void)

undefined8 * FUN_146125450(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141254392();
  *param_1 = &PTR_FUN_14ae45af0;
  param_1[5] = &PTR_FUN_14ae45e30;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0x101;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  if (DAT_14cb451c0 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb451d0) {
      FUN_144b3d300(&DAT_14cb451d0);
      if (DAT_14cb451d0 == -1) {
        uVar1 = FUN_14001cc68(0x370,0x10);
        uVar2 = DAT_14c98de08;
        FUN_1446ddc76(&local_30,"NoBorder",1);
        uVar2 = FUN_141492734(uVar2,local_30,0,0);
        FUN_141478cf2(uVar1,uVar2);
        DAT_14cb451c8 = uVar1;
        _Init_thread_footer(&DAT_14cb451d0);
      }
    }
    FUN_1476d38d8(param_1,DAT_14cb451c8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461255a4 FUN_1461255a4 body=68 status=ok
// SIG undefined FUN_1461255a4(void)

void FUN_1461255a4(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1f0);
  memset(_Dst,0,0x1f0);
  FUN_1461255e8(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1461255e8 FUN_1461255e8 body=282 status=ok
// SIG undefined FUN_1461255e8(void)

undefined8 * FUN_1461255e8(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a2ec0;
  FUN_140056680(param_1 + 0x16,&DAT_149dfb77a);
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1d) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x181) = 0;
  *(undefined8 *)((longlong)param_1 + 0x189) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 14612570e FUN_14612570e body=545 status=ok
// SIG undefined FUN_14612570e(void)

undefined8 * FUN_14612570e(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4da000;
  FUN_146125930(param_1 + 8);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0x26;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_28 = FUN_14099c56c();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_38 = FUN_1413336e6();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_38);
    }
    FUN_140909372(&local_38,&local_30);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_48 = FUN_141134102();
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_48);
    }
    FUN_140909372(&local_48,&local_40);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_58 = FUN_1459906fe();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
    lVar2 = FUN_14038fb82();
    uVar1 = *(undefined2 *)(lVar2 + 0x84);
    local_60 = param_1[2];
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_60,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146125930 FUN_146125930 body=144 status=ok
// SIG undefined FUN_146125930(void)

undefined8 * FUN_146125930(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar3 = FUN_144a54ea4(param_1 + 0xc,1);
  puVar5 = (undefined8 *)param_1[0xe];
  if ((undefined8 *)param_1[0xe] == (undefined8 *)0x0) {
    puVar5 = param_1 + 0xc;
  }
  iVar4 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  bVar2 = (byte)iVar3 & 0x1f;
  puVar1 = (uint *)((longlong)puVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return param_1;
}



// FUNCTION 1461259c0 FUN_1461259c0 body=356 status=ok
// SIG undefined FUN_1461259c0(void)

longlong * FUN_1461259c0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x338,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5064b0;
  plVar4 = plVar3 + 2;
  FUN_146125bc8(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_146125b26(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146125a4f;
    param_1[1] = 0;
LAB_146125abe:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146125a4f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_146125a4f;
      goto LAB_146125abe;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146125a4f;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_146125a4f:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x328;
  FUN_140a52e78(*param_1,"SShiftUIWidget",
                ".\\../Plugins/ShiftUI/ShiftUIPlugin/Source/Private/ShiftUIListener.cpp",0x35);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146125b26 FUN_146125b26 body=162 status=ok
// SIG undefined FUN_146125b26(void)

void FUN_146125b26(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146125b65;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146125b65;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146125b65:
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
                    /* WARNING: Could not recover jumptable at 0x000146125bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146125bc8 FUN_146125bc8 body=182 status=ok
// SIG undefined FUN_146125bc8(void)

undefined8 * FUN_146125bc8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_145a31d14();
  *param_1 = &PTR_FUN_14b503900;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0x3dcccccd3f800000;
  param_1[99] = 0;
  param_1[100] = 0;
  plVar1 = (longlong *)FUN_1459d8286();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(lVar2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)(lVar2 + 0x38);
  return param_1;
}



// FUNCTION 146125c7e FUN_146125c7e body=96 status=ok
// SIG undefined FUN_146125c7e(void)

void FUN_146125c7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146125cea FUN_146125cea body=412 status=ok
// SIG undefined FUN_146125cea(void)

undefined8 * FUN_146125cea(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65e3f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb1b0) {
    FUN_144b3d300(&DAT_14caeb1b0);
    if (DAT_14caeb1b0 == -1) {
      FUN_1415dd618();
      atexit(FUN_14356dd5a);
      _Init_thread_footer(&DAT_14caeb1b0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb1c0) {
    FUN_144b3d300(&DAT_14caeb1c0);
    if (DAT_14caeb1c0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caeb1b8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LegacyLuminanceFactors",1);
      _Init_thread_footer(&DAT_14caeb1c0);
    }
  }
  if (DAT_14caeb1b8 != (longlong *)0x0) {
    iVar1 = (**(code **)(*DAT_14caeb1b8 + 0xb0))();
    if (iVar1 != 0) {
      local_28 = 0x3e99999a;
      uStack_24 = 0x3f170a3d;
      uStack_20 = 0x3de147ae;
      uStack_1c = 0;
      goto LAB_146125e45;
    }
  }
  uVar2 = FUN_14029dc1a();
  FUN_145731c30(uVar2,&local_28);
LAB_146125e45:
  *(undefined4 *)(param_1 + 0x20) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x104) = uStack_24;
  *(undefined4 *)(param_1 + 0x21) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146125e92 FUN_146125e92 body=340 status=ok
// SIG undefined FUN_146125e92(void)

undefined8 * FUN_146125e92(undefined8 *param_1)

{
  FUN_145c072de();
  *param_1 = &PTR_FUN_14afe6a90;
  param_1[0x72] = &PTR_FUN_14afe7170;
  param_1[0x73] = &PTR_FUN_14afe71e0;
  param_1[0x74] = &PTR_FUN_14afe7250;
  param_1[0x75] = &PTR_FUN_14afe7280;
  param_1[0x76] = &PTR_FUN_14afe72b0;
  param_1[0x77] = &PTR_FUN_14afe72e0;
  param_1[0x78] = &PTR_FUN_14afe7320;
  param_1[0x79] = &PTR_FUN_14afe7340;
  param_1[0x7a] = &PTR_FUN_14afe7370;
  param_1[0x7b] = &PTR_FUN_14afe7440;
  param_1[0x7c] = &PTR_FUN_14afe7490;
  param_1[0x7d] = &PTR_FUN_14afe7550;
  param_1[0x7e] = &PTR_FUN_14afe7570;
  param_1[0x7f] = &PTR_FUN_14afe75f0;
  param_1[0x80] = &PTR_FUN_14afe7610;
  param_1[0x81] = &PTR_FUN_14afe7620;
  param_1[0x82] = &PTR_FUN_14afe7660;
  param_1[0x83] = &PTR_FUN_14afe76d0;
  param_1[0x84] = &PTR_FUN_14afe7700;
  param_1[0x85] = &PTR_FUN_14afe77a0;
  param_1[0x86] = &PTR_FUN_14afe77c0;
  param_1[0x87] = &PTR_FUN_14afe77e0;
  return param_1;
}



// FUNCTION 146125ff2 FUN_146125ff2 body=340 status=ok
// SIG undefined FUN_146125ff2(void)

undefined8 * FUN_146125ff2(undefined8 *param_1)

{
  FUN_145c072de();
  *param_1 = &PTR_FUN_14afe78b0;
  param_1[0x72] = &PTR_FUN_14afe7f90;
  param_1[0x73] = &PTR_FUN_14afe8000;
  param_1[0x74] = &PTR_FUN_14afe8070;
  param_1[0x75] = &PTR_FUN_14afe80a0;
  param_1[0x76] = &PTR_FUN_14afe80d0;
  param_1[0x77] = &PTR_FUN_14afe8100;
  param_1[0x78] = &PTR_FUN_14afe8140;
  param_1[0x79] = &PTR_FUN_14afe8160;
  param_1[0x7a] = &PTR_FUN_14afe8190;
  param_1[0x7b] = &PTR_FUN_14afe8260;
  param_1[0x7c] = &PTR_FUN_14afe82b0;
  param_1[0x7d] = &PTR_FUN_14afe8370;
  param_1[0x7e] = &PTR_FUN_14afe8390;
  param_1[0x7f] = &PTR_FUN_14afe8410;
  param_1[0x80] = &PTR_FUN_14afe8430;
  param_1[0x81] = &PTR_FUN_14afe8440;
  param_1[0x82] = &PTR_FUN_14afe8480;
  param_1[0x83] = &PTR_FUN_14afe84f0;
  param_1[0x84] = &PTR_FUN_14afe8520;
  param_1[0x85] = &PTR_FUN_14afe85c0;
  param_1[0x86] = &PTR_FUN_14afe85e0;
  param_1[0x87] = &PTR_FUN_14afe8600;
  return param_1;
}



// FUNCTION 146126152 FUN_146126152 body=340 status=ok
// SIG undefined FUN_146126152(void)

undefined8 * FUN_146126152(undefined8 *param_1)

{
  FUN_145c072de();
  *param_1 = &PTR_FUN_14afe86c0;
  param_1[0x72] = &PTR_FUN_14afe8da0;
  param_1[0x73] = &PTR_FUN_14afe8e10;
  param_1[0x74] = &PTR_FUN_14afe8e80;
  param_1[0x75] = &PTR_FUN_14afe8eb0;
  param_1[0x76] = &PTR_FUN_14afe8ee0;
  param_1[0x77] = &PTR_FUN_14afe8f10;
  param_1[0x78] = &PTR_FUN_14afe8f50;
  param_1[0x79] = &PTR_FUN_14afe8f70;
  param_1[0x7a] = &PTR_FUN_14afe8fa0;
  param_1[0x7b] = &PTR_FUN_14afe9070;
  param_1[0x7c] = &PTR_FUN_14afe90c0;
  param_1[0x7d] = &PTR_FUN_14afe9180;
  param_1[0x7e] = &PTR_FUN_14afe91a0;
  param_1[0x7f] = &PTR_FUN_14afe9220;
  param_1[0x80] = &PTR_FUN_14afe9240;
  param_1[0x81] = &PTR_FUN_14afe9250;
  param_1[0x82] = &PTR_FUN_14afe9290;
  param_1[0x83] = &PTR_FUN_14afe9300;
  param_1[0x84] = &PTR_FUN_14afe9330;
  param_1[0x85] = &PTR_FUN_14afe93d0;
  param_1[0x86] = &PTR_FUN_14afe93f0;
  param_1[0x87] = &PTR_FUN_14afe9410;
  return param_1;
}



// FUNCTION 1461262b2 FUN_1461262b2 body=340 status=ok
// SIG undefined FUN_1461262b2(void)

undefined8 * FUN_1461262b2(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14a3dfb70;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1457a1806(param_1,&local_38);
  if (param_1 + 5 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 6) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_2c;
  }
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 1;
  FUN_1400b22c2(&local_38,&DAT_14a3e0310);
  if (param_1 + 10 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = local_38;
    *(undefined4 *)(param_1 + 0xb) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x5c) = local_2c;
  }
  param_1[0x14] = 0x1000000006;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126410 FUN_146126410 body=80 status=ok
// SIG undefined FUN_146126410(void)

undefined8 * FUN_146126410(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8cb80;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 14612646c FUN_14612646c body=164 status=ok
// SIG undefined FUN_14612646c(void)

void FUN_14612646c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == *(uint *)(param_1 + 0x168)) {
    if ((int)uVar1 < 1) {
      return;
    }
    lVar4 = 0;
    bVar5 = false;
    do {
      if (*(int *)(*param_2 + lVar4) == *(int *)(*(longlong *)(param_1 + 0x160) + lVar4)) {
        bVar6 = *(int *)(*param_2 + 8 + lVar4) !=
                *(int *)(*(longlong *)(param_1 + 0x160) + 8 + lVar4);
      }
      else {
        bVar6 = true;
      }
      bVar5 = (bool)(bVar5 | bVar6);
      lVar4 = lVar4 + 0xc;
    } while ((ulonglong)uVar1 * 0xc != lVar4);
    if (!bVar5) {
      return;
    }
  }
  FUN_140d7e6a6();
  *(undefined1 *)(param_1 + 0x15c) = 1;
  cVar2 = FUN_144729dda(param_1 + 0x140);
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = FUN_14479d2ce(param_1 + 0x140);
  FUN_1405f658a(uVar3);
  return;
}



// FUNCTION 146126510 FUN_146126510 body=205 status=ok
// SIG undefined FUN_146126510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146126510(void)

{
  if ((DAT_14c9e577f & 2) == 0) {
    DAT_14c9e577f = DAT_14c9e577f | 2;
    _DAT_14c9e5720 = L"FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs";
    _DAT_14c9e5738 = FUN_146826540;
    _DAT_14c9e5740 = FUN_146825d77;
    _DAT_14c9e5748 = FUN_146825fd6;
    _DAT_14c9e5750 = FUN_1407e02ea;
    _DAT_14c9e5758 = FUN_146826273;
    _DAT_14c9e5730 = FUN_1471be3b0;
    _DAT_14c9e5770 = 0xffffffff000000e0;
    _DAT_14c9e5778 = 8;
    DAT_14c9e577c = 0;
    _DAT_14c9e5760 = &LAB_1471be3da;
    FUN_1461265de();
    FUN_1407e00cc(&DAT_14c9e5718);
    return;
  }
  return;
}



// FUNCTION 1461265de FUN_1461265de body=123 status=ok
// SIG undefined FUN_1461265de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461265de(void)

{
  _DAT_14c9e7178 = L"BASE";
  DAT_14c9e71a2 = 4;
  _DAT_14c9e7180 = FUN_140b35ae4();
  _DAT_14c9e7188 = DAT_14c9e5728;
  _DAT_14c9e7190 = &LAB_14682652b;
  DAT_14c9e5728 = &DAT_14c9e7178;
  DAT_14c9e577d = DAT_14c9e577d + '\x01';
  _DAT_14c9e7198 = 0x100000000;
  if (*(char *)(_DAT_14c9e7180 + 100) != '\0') {
    DAT_14c9e577e = DAT_14c9e577e + '\x01';
  }
  return;
}



// FUNCTION 14612665a FUN_14612665a body=138 status=ok
// SIG undefined FUN_14612665a(void)

code * FUN_14612665a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurrentBatchProcessingMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000025c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c7884;
}



// FUNCTION 1461266e4 FUN_1461266e4 body=138 status=ok
// SIG undefined FUN_1461266e4(void)

code * FUN_1461266e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BatchInds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint32 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000247;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c7efc;
}



// FUNCTION 14612676e FUN_14612676e body=138 status=ok
// SIG undefined FUN_14612676e(void)

code * FUN_14612676e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewIds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint32 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000243;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c8010;
}



// FUNCTION 1461267f8 FUN_1461267f8 body=307 status=ok
// SIG undefined FUN_1461267f8(void)

void FUN_1461267f8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_1461268a2;
  uVar3 = FUN_1400b465c();
  plVar4 = (longlong *)FUN_14001cc68(0x188,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b988f70;
  plVar5 = plVar4 + 2;
  FUN_1461269cc(plVar5,uVar3);
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_14612692c(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_1461268d8:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146126903:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000146126903;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1461268d8;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1461268a2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612692c FUN_14612692c body=159 status=ok
// SIG undefined FUN_14612692c(void)

void FUN_14612692c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_146126969;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_146126969;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146126969:
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
                    /* WARNING: Could not recover jumptable at 0x0001461269c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461269cc FUN_1461269cc body=238 status=ok
// SIG undefined FUN_1461269cc(void)

undefined8 * FUN_1461269cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 146126aba FUN_146126aba body=230 status=ok
// SIG undefined FUN_146126aba(void)

void FUN_146126aba(undefined8 param_1,longlong param_2)

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
  FUN_1415dd916(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126ba2 FUN_146126ba2 body=112 status=ok
// SIG undefined FUN_146126ba2(void)

void FUN_146126ba2(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      FUN_1460d2ade(param_1);
      goto LAB_146126bdf;
    }
  }
  FUN_146126c14(local_18,param_1);
LAB_146126bdf:
  FUN_144757f48(param_1,8);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126c14 FUN_146126c14 body=239 status=ok
// SIG undefined FUN_146126c14(void)

undefined8 FUN_146126c14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  *local_30 = &PTR_FUN_14a49f940;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1460d2ade;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126d10 FUN_146126d10 body=341 status=ok
// SIG undefined FUN_146126d10(void)

undefined8 * FUN_146126d10(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459a19b8();
  *param_1 = &PTR_FUN_14abf3ef0;
  param_1[5] = &PTR_FUN_14abf4210;
  FUN_1400b22c2(&local_38,"Set default focus");
  if (param_1 + 6 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 7) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_2c;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf0 | 3;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfb;
  *(undefined1 *)(param_1 + 0x13) = 0;
  local_40 = FUN_144a6c4d8();
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  FUN_1446f470e(&local_48,L"BlackboardKey",1);
  FUN_1458b8c86(param_1 + 0xe,param_1,local_48,&local_40);
  FUN_1446f470e(&local_50,L"BlackboardKey",1);
  FUN_1458b89d2(param_1 + 0xe,param_1,local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126e66 FUN_146126e66 body=69 status=ok
// SIG undefined FUN_146126e66(void)

void FUN_146126e66(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_146126f8c();
  FUN_146126eac(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126eac FUN_146126eac body=223 status=ok
// SIG undefined FUN_146126eac(void)

undefined8 FUN_146126eac(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4da9f0;
  local_30[3] = param_2;
  local_30[4] = &LAB_145a0579e;
  FUN_1448b6402(&DAT_14c8673d8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146126f8c FUN_146126f8c body=411 status=ok
// SIG undefined FUN_146126f8c(void)

void FUN_146126f8c(void)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  longlong local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457d3d7a(&local_50,L"Windows");
  FUN_1412cfe60(&local_40,&local_50,(local_48 == 0) + '\x1b');
  FUN_1401aebe8(&local_40,L"Plugins/Shift/Binaries/x64",0x1a);
  FUN_140aa5ef8(&local_30,&local_40);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  puVar1 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar1 = local_30;
  }
  FUN_1458f4f8e(puVar1);
  local_40 = (undefined2 *)0x0;
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,(local_28 == 0) + 0xc);
  FUN_14125bce8(&local_40,local_30,local_28,0);
  FUN_1401aebe8(&local_40,L"bifrost.dll",0xb);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  DAT_14cb96650 = FUN_14155261e(puVar1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_145be8130(puVar1);
  if (DAT_14cb96650 == 0) {
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    local_58 = L"bifrost.dll";
    FUN_140033559(".\\../Platforms/Windows/Plugins/Shift/Source/Shift/Private/WindowsPlatformModuleInit.cpp"
                  ,0x26,L"Failed to load bifrost module: %s/%s",puVar1);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146127130 FUN_146127130 body=344 status=ok
// SIG undefined FUN_146127130(void)

undefined8 * FUN_146127130(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457edf72();
  *param_1 = &PTR_FUN_14bc86ea0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_14020fad6(param_1 + 0x49,L"AnimationAssetUidToPlay");
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_14020fad6(param_1 + 0x4b,L"GeometricTransform");
  FUN_140056680(local_40,L"__SlotMaterialDependencies__");
  local_50 = param_1[5];
  local_48 = (longlong *)param_1[6];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x3a,&local_50,local_40);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612728a FUN_14612728a body=37 status=ok
// SIG undefined FUN_14612728a(void)

void FUN_14612728a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1240);
  FUN_1461272b0(param_2);
  return;
}



// FUNCTION 1461272b0 FUN_1461272b0 body=1706 status=ok
// SIG undefined FUN_1461272b0(void)

undefined8 * FUN_1461272b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b76b680;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_146127af4(param_1 + 0x10);
  param_1[0x80] = &PTR_FUN_14b00bdf8;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x474) = 0x404;
  param_1[0x81] = &DAT_14a176f00;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  FUN_14612795a(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x102) = 0x3f800000;
  param_1[0x103] = &PTR_FUN_14b00bdf8;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined8 *)((longlong)param_1 + 0x854) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x88c) = 0x404;
  param_1[0x104] = &DAT_14a176f00;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  FUN_1446f470e(param_1 + 0x11e,L"HealthPercentage",1);
  param_1[0x11f] = &PTR_FUN_14b00bdf8;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(undefined8 *)((longlong)param_1 + 0x934) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0;
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x96c) = 0x404;
  param_1[0x120] = &DAT_14a176f00;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = &PTR_FUN_14b00bdf8;
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9ec) = 0;
  param_1[0x13f] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  *(undefined4 *)(param_1 + 0x143) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xa1c) = 0x404;
  param_1[0x136] = &DAT_14a176f00;
  param_1[0x14a] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  *(undefined4 *)(param_1 + 0x14b) = 0x40000000;
  param_1[0x14c] = &PTR_FUN_14b00bdf8;
  param_1[0x152] = 0;
  *(undefined4 *)(param_1 + 0x153) = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xaa4) = 0;
  param_1[0x156] = 0;
  *(undefined4 *)(param_1 + 0x157) = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xad4) = 0x404;
  param_1[0x14d] = &DAT_14a176f00;
  param_1[0x161] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0x3f800000;
  param_1[0x163] = &PTR_FUN_14b00bdf8;
  param_1[0x169] = 0;
  *(undefined4 *)(param_1 + 0x16a) = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb5c) = 0;
  param_1[0x16d] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  *(undefined4 *)(param_1 + 0x171) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xb8c) = 0x404;
  param_1[0x164] = &DAT_14a176f00;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  FUN_1446f470e(param_1 + 0x17e,L"DeathTimer",1);
  *(undefined1 *)(param_1 + 0x17f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbfc) = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0x4334000042f00000;
  param_1[399] = 0x40400000;
  *(undefined4 *)(param_1 + 400) = 0;
  lVar2 = 0xc98;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0x25ed75a7;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd28);
  lVar2 = 0xd28;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0x3002;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xdb8);
  lVar2 = 0xdd0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0xf00000d0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0xf00000d0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0xef0);
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  *(undefined4 *)(param_1 + 0x1df) = 0x3002;
  param_1[0x1e0] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0x200000000;
  *(undefined4 *)(param_1 + 0x1e9) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1ea) = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  *(undefined4 *)(param_1 + 0x1f1) = 0xf00000d0;
  param_1[0x1f2] = 0;
  *(undefined4 *)(param_1 + 499) = 0x3f800000;
  *(undefined4 *)(param_1 + 500) = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x1fb) = 0xf00000d0;
  param_1[0x1fc] = 0;
  *(undefined4 *)(param_1 + 0x1fd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1fe) = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  *(undefined4 *)(param_1 + 0x205) = 0xf00000d0;
  param_1[0x206] = 0;
  *(undefined4 *)(param_1 + 0x207) = 0x3f800000;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  *(undefined4 *)(param_1 + 0x20d) = 0x3ecccccd;
  param_1[0x212] = 0;
  *(undefined4 *)(param_1 + 0x213) = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x109c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10a4) = 0;
  param_1[0x216] = 0;
  *(undefined4 *)(param_1 + 0x217) = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0x500000005;
  FUN_140fbcb60(param_1 + 0x21b);
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  FUN_1446f470e(param_1 + 0x229,L"KillVolumeLocation",1);
  FUN_1446f470e(param_1 + 0x22a,L"KillVolumeRadius",1);
  param_1[0x22b] = 0x432a000042480000;
  FUN_1446f470e(param_1 + 0x22c,L"NormalizedHitVector",1);
  FUN_1446f470e(param_1 + 0x22d,L"GroundLocation",1);
  FUN_1446f470e(param_1 + 0x22e,L"NormalizedGroundUpVector",1);
  *(undefined4 *)(param_1 + 0x22f) = 0x3f000000;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  FUN_144928b90(param_1 + 0x235,6);
  FUN_144928b90(param_1 + 0x23c,6);
  FUN_1447a97f4(param_1 + 0x243,&DAT_14c9485f0);
  return param_1;
}



// FUNCTION 14612795a FUN_14612795a body=409 status=ok
// SIG undefined FUN_14612795a(void)

void * FUN_14612795a(void *param_1)

{
  memset(param_1,0,400);
  *(undefined4 *)((longlong)param_1 + 400) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x198) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0x3f800000;
  FUN_1446f470e((longlong)param_1 + 0x1a4,L"FireDamageEvent",1);
  FUN_1446f470e((longlong)param_1 + 0x1ac,L"Single",1);
  FUN_1446f470e((longlong)param_1 + 0x1b4,L"LOSDamageEvent",1);
  FUN_1446f470e((longlong)param_1 + 0x1bc,&DAT_149e19f3a,1);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  FUN_1446f470e((longlong)param_1 + 0x1c8,L"Event Counter",1);
  FUN_1446f470e((longlong)param_1 + 0x1d0,L"Flush Particles",1);
  FUN_1446f470e((longlong)param_1 + 0x1d8,L"DamageSeverity",1);
  FUN_1446f470e((longlong)param_1 + 0x1e0,L"DamageDirection",1);
  FUN_1446f470e((longlong)param_1 + 0x1e8,L"DamageFrontal",1);
  FUN_1446f470e((longlong)param_1 + 0x1f0,L"Lifetime",1);
  FUN_1446f470e((longlong)param_1 + 0x1f8,L"LoopDuration",1);
  *(undefined4 *)((longlong)param_1 + 0x200) = 0x3e000000;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0x3dcccccd40000000;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0x453b800040000000;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined4 *)((longlong)param_1 + 0x228) = 0x41200000;
  memset((void *)((longlong)param_1 + 0x230),0,0x120);
  return param_1;
}



// FUNCTION 146127af4 FUN_146127af4 body=673 status=ok
// SIG undefined FUN_146127af4(void)

void * FUN_146127af4(void *param_1)

{
  memset(param_1,0,200);
  *(undefined8 *)((longlong)param_1 + 200) = 0xc038000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0x427000003cf5c28f;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x3e8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0x404;
  *(undefined **)((longlong)param_1 + 0xf0) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined4 *)((longlong)param_1 + 0x178) = 3;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0x4034000000000000;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0xc000000000000000;
  *(undefined4 *)((longlong)param_1 + 0x198) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0x4016000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x401c000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0x4012000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined4 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined4 *)((longlong)param_1 + 0x240) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0x404;
  *(undefined **)((longlong)param_1 + 0x1d8) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined4 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0x404;
  *(undefined **)((longlong)param_1 + 0x260) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0x432a000042340000;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined4 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x338) = 0;
  *(undefined4 *)((longlong)param_1 + 0x340) = 0;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined8 *)((longlong)param_1 + 0x350) = 0;
  *(undefined4 *)((longlong)param_1 + 0x358) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x35c) = 0x404;
  *(undefined **)((longlong)param_1 + 0x2f0) = &DAT_14a176f00;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x368) = 0;
  *(undefined4 *)((longlong)param_1 + 0x378) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = DAT_14cbd0bb0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = DAT_14cbd0bb8;
  FUN_140acda08((longlong)param_1 + 0x1c8,0x3f266666,0x3f59999a,&DAT_14a176f01);
  *(undefined8 *)((longlong)param_1 + 0x1d0) = DAT_14cbd0bc0;
  return param_1;
}



// FUNCTION 146127d96 FUN_146127d96 body=117 status=ok
// SIG undefined FUN_146127d96(void)

void FUN_146127d96(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((iVar3 <= *(int *)(param_1 + 0x48) || (int)param_2 < 1) && *(int *)(param_1 + 0x48) <= iVar3)
  {
    FUN_1415dd9e8(param_1);
    FUN_1401a51be(param_1,param_2);
    return;
  }
  FUN_1401a51be(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1415ddb34(param_1);
  return;
}



// FUNCTION 146127e0c FUN_146127e0c body=1319 status=ok
// SIG undefined FUN_146127e0c(void)

void FUN_146127e0c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  longlong *local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  code *local_a8;
  longlong *local_a0;
  undefined ***local_98;
  undefined **local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14101e326();
  plVar5 = (longlong *)FUN_144a7e30a();
  lVar7 = plVar5[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar7 = plVar5[0x22];
    if (lVar7 == 0) goto LAB_14612811d;
  }
  local_110 = lVar7;
  if ((longlong)*(int *)(lVar7 + 0x108) != 0) {
    lVar3 = *(longlong *)(lVar7 + 0x100);
    local_100 = (longlong)*(int *)(lVar7 + 0x108) * 0x30;
    lVar7 = 0;
    local_108 = param_1;
    do {
      local_b8 = *(longlong **)(lVar3 + 0x20 + lVar7);
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      local_b0 = *(undefined4 *)(lVar3 + 0x28 + lVar7);
      local_c8 = (void *)0x0;
      local_c0 = *(int *)(lVar3 + 8 + lVar7);
      lVar8 = (longlong)local_c0;
      pvVar4 = *(void **)(lVar3 + lVar7);
      if (lVar8 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_c0,0);
        memcpy(local_c8,pvVar4,lVar8 * 2);
      }
      FUN_14100d696(param_1,&local_c8);
      local_e8 = (void *)0x0;
      iVar9 = *(int *)(lVar3 + 8 + lVar7);
      pvVar4 = *(void **)(lVar3 + lVar7);
      uStack_e0._0_4_ = iVar9;
      if ((longlong)iVar9 == 0) {
        uVar10 = 0;
        iVar9 = 0;
      }
      else {
        FUN_1446dd670(&local_e8,iVar9,0);
        memcpy(local_e8,pvVar4,(longlong)iVar9 * 2);
        uVar10 = uStack_e0._4_4_;
        iVar9 = (int)uStack_e0;
      }
      pvVar4 = local_e8;
      plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_14b5414b0;
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_FUN_14b96e190;
      local_e8 = (void *)0x0;
      uStack_e0 = 0;
      local_a8 = FUN_144139862;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[7] = 2;
      plVar5[2] = (longlong)&PTR_FUN_14b5414d0;
      plVar5[8] = (longlong)FUN_144139862;
      plVar5[10] = 0;
      local_80 = pvVar4;
      local_78 = iVar9;
      local_74 = uVar10;
      FUN_1415ddd98(&local_88,plVar5 + 10);
      if (local_a8 != (code *)0x0) {
        pppuVar6 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar6 = &local_88;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      local_d8 = (code *)(plVar5 + 2);
      local_d0 = plVar5;
      FUN_1410e573a(&local_d8);
      plVar5 = local_d0;
      param_1 = local_108;
      local_a8 = local_d8;
      local_a0 = local_d0;
      if (local_d0 == (longlong *)0x0) {
        FUN_1410e57dc(local_108,&local_a8);
      }
      else {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
        FUN_1410e57dc(local_108,&local_a8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      plVar5 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x30;
    } while (local_100 != lVar7);
  }
  local_f8 = (void *)0x0;
  local_f0 = *(int *)(local_110 + 0x168);
  lVar7 = (longlong)local_f0;
  pvVar4 = *(void **)(local_110 + 0x160);
  if (lVar7 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,local_f0,0);
    memcpy(local_f8,pvVar4,lVar7 * 2);
  }
  FUN_1458433a4(param_1,&local_f8);
LAB_14612811d:
  local_d0 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_d0[1] = (longlong)&DAT_100000001;
  *local_d0 = (longlong)&PTR_FUN_14b5414b0;
  local_d8 = (code *)(local_d0 + 2);
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 2;
  local_d0[2] = (longlong)&PTR_FUN_14b5414d0;
  local_d0[8] = (longlong)&LAB_143fa6636;
  local_d0[10] = 0;
  local_d0[0xc] = (longlong)&PTR_LAB_14b54a520;
  local_d0[0xd] = (longlong)FUN_1441398dc;
  FUN_1410e573a(&local_d8);
  plVar5 = local_d0;
  local_a8 = local_d8;
  local_a0 = local_d0;
  if (local_d0 == (longlong *)0x0) {
    FUN_1410e57dc(param_1,&local_a8);
  }
  else {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
    FUN_1410e57dc(param_1);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  plVar5 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146128334 FUN_146128334 body=152 status=ok
// SIG undefined FUN_146128334(void)

bool FUN_146128334(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461283e6 FUN_1461283e6 body=394 status=ok
// SIG undefined FUN_1461283e6(void)

void FUN_1461283e6(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = param_1 + 0xa0;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar3 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar4,lVar3);
        if (lVar3 == 0) goto LAB_146128421;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar4,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_14612848c;
    }
  }
  else {
LAB_14612848c:
    lVar4 = FUN_144a797b2();
    if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) && (lVar4 = FUN_14594a690(), lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) goto LAB_146128429;
  }
LAB_146128421:
  lVar3 = FUN_14594a690();
LAB_146128429:
  lVar4 = FUN_146128571(param_1,lVar3);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(longlong *)(param_1 + 200) = lVar4;
  FUN_14612862e(local_28,param_1);
  FUN_14612871e(local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146128571 FUN_146128571 body=187 status=ok
// SIG undefined FUN_146128571(void)

undefined8 FUN_146128571(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612862e FUN_14612862e body=239 status=ok
// SIG undefined FUN_14612862e(void)

undefined8 FUN_14612862e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  *local_30 = &PTR_FUN_14ab18950;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_145a43340;
  FUN_14123f6f0(&DAT_14cb109f0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612871e FUN_14612871e body=239 status=ok
// SIG undefined FUN_14612871e(void)

undefined8 FUN_14612871e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1c8660;
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
  *local_30 = &PTR_FUN_14ab189c0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_140f1d64e;
  FUN_140aa43ac(&DAT_14cb10a08,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612881a FUN_14612881a body=343 status=ok
// SIG undefined FUN_14612881a(void)

undefined8 * FUN_14612881a(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14afb6c80;
  FUN_1400b22c2(param_1 + 7,&DAT_14afb6f40);
  FUN_1400b22c2(param_1 + 9,&DAT_14afb6f45);
  FUN_1410f2562();
  local_78 = local_88;
  local_70 = local_80 + -1;
  if (local_80 == 0) {
    local_70 = 0;
  }
  local_68 = L"World";
  local_60 = 5;
  local_58 = L"Global";
  local_50 = 6;
  local_48 = L"Presets";
  local_40 = 7;
  local_38 = L"Spline";
  local_30 = 6;
  FUN_140bee87a(param_1 + 0xb,&local_78,5);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(param_1 + 0xd,&DAT_14afb6f5a);
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_1400b22c2(param_1 + 0x10,&DAT_14afb6f5f);
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0x40d86a0000000000;
  FUN_1446ddc76(param_1 + 0x14,"Exclusion",1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612897e FUN_14612897e body=344 status=ok
// SIG undefined FUN_14612897e(void)

undefined8 * FUN_14612897e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1457e6eec();
  *param_1 = &PTR_FUN_14b4af630;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_1446efa72(param_1 + 0xb,0,3,0x10);
  *(undefined4 *)(param_1 + 0xc) = 3;
  puVar1 = (undefined8 *)param_1[0xb];
  *puVar1 = &PTR_LAB_149eae4d0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b4c2150;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_148a2f8aa;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_1446efa72(param_1 + 0xd,0,3,0x10);
  *(undefined4 *)(param_1 + 0xe) = 3;
  puVar1 = (undefined8 *)param_1[0xd];
  *puVar1 = &PTR_LAB_149eae4d0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b4c2150;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_148a2fa36;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  return param_1;
}



// FUNCTION 146128ad6 FUN_146128ad6 body=167 status=ok
// SIG undefined FUN_146128ad6(void)

bool FUN_146128ad6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146128b7e FUN_146128b7e body=186 status=ok
// SIG undefined FUN_146128b7e(void)

void FUN_146128b7e(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != '\0') {
    FUN_1449027d0(param_1,&local_30);
    puVar3 = *(undefined8 **)(local_30 + 0x50);
    AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 0x40));
    *(int *)(puVar3 + 0x3f) = *(int *)(puVar3 + 0x3f) + 1;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    FUN_140f9ed8d(*puVar3,*(undefined4 *)(puVar3 + 1));
    *(undefined4 *)(puVar3 + 1) = 0;
    if (*(int *)((longlong)puVar3 + 0xc) != 0) {
      FUN_140f9edf6(puVar3,0);
    }
    *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 0x40));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146128c44 FUN_146128c44 body=96 status=ok
// SIG undefined FUN_146128c44(void)

undefined8 * FUN_146128c44(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b081130;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  FUN_146128ca4(param_1);
  return param_1;
}



// FUNCTION 146128ca4 FUN_146128ca4 body=441 status=ok
// SIG undefined FUN_146128ca4(void)

void FUN_146128ca4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  for (lVar3 = param_1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
    if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_146128cea;
  }
  if (((*(uint *)(param_1 + 8) & 0x40) == 0) && (*(longlong *)(param_1 + 1000) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x3d8);
    *(longlong **)(param_1 + 0x3f0) = &DAT_14cb70bc0;
    *(longlong *)(param_1 + 1000) = param_1;
    lVar3 = DAT_14cb70bc0;
    while( true ) {
      *(longlong *)(param_1 + 0x3d8) = lVar3;
      LOCK();
      lVar4 = **(longlong **)(param_1 + 0x3f0);
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        **(longlong **)(param_1 + 0x3f0) = (longlong)plVar1;
        lVar4 = lVar3;
      }
      UNLOCK();
      if (bVar5) break;
      *(longlong *)(param_1 + 0x3d8) = lVar4;
      lVar3 = **(longlong **)(param_1 + 0x3f0);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_146128cea:
  FUN_1446f470e(&local_20,L"Root",1);
  uVar2 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x1c8) = lVar3;
  FUN_1446f470e(&local_28,L"NiagaraComponent0",1);
  uVar2 = FUN_144a7e9aa();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x3d0) = lVar3;
    if (lVar3 == 0) goto LAB_146128dbb;
  }
  else {
    FUN_1456cec3c(lVar3);
    *(longlong *)(param_1 + 0x3d0) = lVar3;
  }
  FUN_140486fc4(lVar3,*(undefined8 *)(param_1 + 0x1c8),0);
  FUN_146128e5e(param_1);
LAB_146128dbb:
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146128e5e FUN_146128e5e body=516 status=ok
// SIG undefined FUN_146128e5e(void)

void FUN_146128e5e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1402d1dc0(param_1 + 0x398);
  if (lVar4 == 0) {
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
      lVar5 = FUN_14050fd64();
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar3 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b3e5ec0;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar3[4] = param_1;
      local_80 = &local_78;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      FUN_140a1e0be(lVar5 + 0x1e8,local_68,param_1 + 0x3a0,&local_58);
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
      FUN_1449db362(&local_58);
    }
  }
  else {
    lVar4 = FUN_1402d1dc0(param_1 + 0x398);
    plVar2 = *(longlong **)(param_1 + 0x3d0);
    if (lVar4 == 0) {
      FUN_1409d23de(plVar2,0,1);
    }
    else {
      (**(code **)(*plVar2 + 0xa78))(plVar2,lVar4);
      local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffffffffff00);
      local_30 = 0;
      FUN_1456bb102(&local_58,param_1);
      local_78 = *(undefined8 *)(param_1 + 0x3c0);
      local_70 = *(undefined4 *)(param_1 + 0x3c8);
      FUN_140e99737(*(undefined8 *)(param_1 + 0x3d0),&local_78,&local_58);
      FUN_144a5ac3a(&local_58);
    }
    FUN_14080a7a8(*(undefined8 *)(param_1 + 0x3d0));
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146129064 FUN_146129064 body=318 status=ok
// SIG undefined FUN_146129064(void)

undefined4 FUN_146129064(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1459a3e4e(&local_58,param_3);
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    uVar4 = 0;
    iVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    iVar6 = (int)uStack_40;
    uVar4 = uStack_40._4_4_;
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,iVar6 + 1U);
  if (uVar4 < iVar6 + 1U) {
    FUN_1413eac7e(&local_48,iVar6);
  }
  *(undefined8 *)(local_48 + (longlong)iVar6 * 0x10) = local_58;
  *(longlong **)(local_48 + 8 + (longlong)iVar6 * 0x10) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar3 = (int *)((longlong)local_50 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,param_2,&local_48);
  FUN_14127b1cd(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461291ae FUN_1461291ae body=344 status=ok
// SIG undefined FUN_1461291ae(void)

undefined8 * FUN_1461291ae(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b008e70;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined2 *)((longlong)param_1 + 0x394) = 0;
  *(undefined1 *)((longlong)param_1 + 0x396) = 1;
  *(undefined8 *)((longlong)param_1 + 0x397) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a7) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = uVar1;
  *(undefined4 *)(param_1 + 0x79) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar3;
  param_1[0x7a] = DAT_14c8464f0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  FUN_1446f470e(&local_30,L"RootComponent",1);
  uVar4 = FUN_144a799b0();
  local_40 = 0;
  local_48 = 1;
  plVar5 = (longlong *)FUN_14048696c(param_1,local_30,uVar4,uVar4);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  param_1[0x39] = plVar5;
  (**(code **)(*plVar5 + 0x588))(plVar5,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146129308 FUN_146129308 body=155 status=ok
// SIG undefined FUN_146129308(void)

bool FUN_146129308(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461293a4 FUN_1461293a4 body=110 status=ok
// SIG undefined FUN_1461293a4(void)

void FUN_1461293a4(longlong param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x290);
  if (*(char *)(param_1 + 0x17d) == '\x01') {
    local_18 = DAT_14cb98798;
    FUN_144a13f80(param_1 + 0x240,local_1c,&local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146129428 FUN_146129428 body=345 status=ok
// SIG undefined FUN_146129428(void)

undefined8 * FUN_146129428(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ba613f0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 2;
  return param_1;
}



// FUNCTION 146129582 FUN_146129582 body=355 status=ok
// SIG undefined FUN_146129582(void)

void FUN_146129582(undefined8 param_1)

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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb32868 = param_1;
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = L"Niagara";
  local_70 = 7;
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
  FUN_140056680(&local_38,L"/Plugin/FX/Niagara");
  FUN_141414c4a(&local_38,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_38,L"/Plugin/FX/Niagara/Shared/");
  FUN_1461296e6(&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461296e6 FUN_1461296e6 body=1 status=ok
// SIG undefined FUN_1461296e6(void)

void FUN_1461296e6(void)

{
  return;
}



// FUNCTION 1461296e8 FUN_1461296e8 body=40 status=ok
// SIG undefined FUN_1461296e8(void)

undefined8 FUN_1461296e8(undefined8 param_1,int param_2)

{
  FUN_146129710();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146129710 FUN_146129710 body=317 status=ok
// SIG undefined FUN_146129710(void)

void FUN_146129710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba64460;
  FUN_144760e21(param_1[0x88],*(undefined4 *)(param_1 + 0x89));
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x85],*(undefined4 *)(param_1 + 0x86));
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7a] = &PTR_FUN_14a5af930;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7a] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x7d)])(param_1 + 0x7b);
  param_1[0x74] = &PTR_FUN_14a5af930;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  param_1[0x74] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x77)])(param_1 + 0x75);
  if ((longlong *)param_1[0x72] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x72] + 0x10))();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 146129854 FUN_146129854 body=923 status=ok
// SIG undefined FUN_146129854(void)

void FUN_146129854(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  ulonglong *local_118;
  undefined1 *local_108 [2];
  undefined ***local_f8;
  undefined **local_e8;
  undefined1 *local_e0;
  undefined1 *local_c8;
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  ulonglong local_88 [2];
  longlong *local_78;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = FUN_14060e84c();
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_1461298b5;
  }
  lVar4 = 0;
LAB_1461298b5:
  if (param_1[5] != 0) {
    uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_141495e41(local_88,uVar7);
  }
  plVar11 = param_1 + 0xb;
  iVar12 = *(int *)((longlong)param_1 + 100);
  FUN_14111beba(param_1[0xb],(int)param_1[0xc]);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((iVar12 < 0) && (*(int *)((longlong)param_1 + 100) != 0)) {
    FUN_148d16f38(plVar11,0);
  }
  if (lVar4 != 0) {
    iVar12 = *(int *)(lVar4 + 0x38f8);
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (*(int *)((longlong)param_1 + 100) < iVar12) {
      FUN_148d16f38(plVar11);
      iVar12 = *(int *)(lVar4 + 0x38f8);
    }
    lVar5 = lVar4 + 0x3530;
    if (*(longlong *)(lVar4 + 0x38f0) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x38f0);
    }
    if (iVar12 != 0) {
      lVar4 = 0;
      do {
        iVar3 = FUN_145b010c8(param_1);
        if (iVar3 != 3) goto LAB_146129a83;
        if ((*(longlong *)(lVar5 + 0x10 + lVar4) == 0) ||
           (cVar2 = FUN_144729dda(lVar5 + 8 + lVar4), cVar2 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar5 + 0x10 + lVar4);
        }
        local_88[0] = local_88[0] & 0xffffffffffffff00;
        local_60 = 0;
        FUN_148d16fa4(local_88,uVar7);
        plVar6 = (longlong *)FUN_1447262c2(local_88);
        if (plVar6 == (longlong *)0x0) {
LAB_146129bde:
          FUN_144a5ac3a(local_88);
LAB_146129a83:
          iVar3 = (int)param_1[0xc];
          *(uint *)(param_1 + 0xc) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 100) < iVar3 + 1U) {
            FUN_148d17036(plVar11,iVar3);
          }
          plVar6 = (longlong *)(lVar4 + lVar5 + 0x70);
          lVar1 = *plVar11;
          lVar14 = (longlong)iVar3 * 0x78;
          *(int *)(lVar1 + 0x60 + lVar14) = (int)plVar6[-2];
          plVar8 = plVar6 + -0xe;
          plVar13 = (longlong *)(lVar1 + lVar14);
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *plVar13 = *plVar8;
            plVar8 = plVar8 + 1;
            plVar13 = plVar13 + 1;
          }
          *(longlong *)(lVar1 + 0x68 + lVar14) = plVar6[-1];
          lVar10 = *plVar6;
          *(longlong *)(lVar1 + 0x70 + lVar14) = lVar10;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
        }
        else {
          uVar7 = FUN_14027972a();
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
          if (plVar6 == (longlong *)0x0) goto LAB_146129bde;
          FUN_14027972a();
          plVar8 = (longlong *)FUN_144718840(plVar6);
          if (plVar6 == plVar8) goto LAB_146129bde;
          FUN_144a5ac3a(local_88);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar8 + 0x10))(plVar8), cVar2 == '\0')) goto LAB_146129a83;
          uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8);
          cVar2 = FUN_143d16456(uVar7);
          if (cVar2 == '\0') goto LAB_146129a83;
        }
        lVar4 = lVar4 + 0x78;
      } while ((longlong)iVar12 * 0x78 - lVar4 != 0);
    }
  }
  local_118 = local_88;
  local_88[0] = 0;
  local_78 = (longlong *)0x0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14b968300;
  local_c8 = &LAB_1441148e2;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14b9682e0;
  local_e0 = &LAB_1441148d4;
  local_108[0] = &LAB_148d17144;
  local_a0 = param_1;
  FUN_146129c1c(param_1,plVar11,local_108);
  if (local_108[0] != (undefined1 *)0x0) {
    pppuVar9 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar9 = &local_e8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (local_c8 != (undefined1 *)0x0) {
    pppuVar9 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar9 = &local_a8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (local_88[0] != 0) {
    plVar11 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar11 = &local_68;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146129bf0 FUN_146129bf0 body=12 status=ok
// SIG undefined FUN_146129bf0(void)

void FUN_146129bf0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146129bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146129bfc FUN_146129bfc body=31 status=ok
// SIG undefined FUN_146129bfc(void)

undefined8 FUN_146129bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146129c1c FUN_146129c1c body=707 status=ok
// SIG undefined FUN_146129c1c(void)

void FUN_146129c1c(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      *(undefined2 *)(lVar9 + 0x10 + lVar6) = 0x100;
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    local_68 = (longlong)(int)param_2[1] * 0x78 + lVar9;
    local_70 = param_4 + 4;
    do {
      iVar2 = *(int *)(param_1 + 0x40);
      local_58 = lVar9;
      local_50 = param_3;
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x38);
        lVar8 = 0;
        do {
          cVar3 = FUN_148d170c6(&local_58,lVar8 + lVar6);
          if (cVar3 != '\0') {
            uVar7 = (int)(lVar8 >> 3) * -0x55555555;
            if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x40))) {
              *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18) = 0;
              if ((*param_5 == 0) ||
                 (lVar6 = *(longlong *)(*plVar1 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18),
                 lVar6 == 0)) goto LAB_146129d81;
              lVar8 = FUN_145b8adc2();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_146129d81;
              pcVar10 = (code *)*param_5;
              plVar5 = param_5 + 4;
              if ((longlong *)param_5[2] != (longlong *)0x0) {
                plVar5 = (longlong *)param_5[2];
              }
              goto LAB_146129e21;
            }
            break;
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar8);
      }
      plVar5 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar5 + 2) = 1;
      uVar4 = FUN_145b8adc2();
      FUN_1404e95e0(param_1,&local_60,uVar4);
      if ((*plVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar6 = local_60;
      *plVar5 = local_60;
      if (local_60 != 0) {
        lVar8 = FUN_145b8adc2();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
           (pcVar10 = (code *)*param_4, pcVar10 != (code *)0x0)) {
          plVar5 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar5 = local_70;
          }
LAB_146129e21:
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar10)(uVar4,lVar6,lVar9);
        }
      }
LAB_146129d81:
      lVar9 = lVar9 + 0x78;
    } while (lVar9 != local_68);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar5[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar6 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_60,plVar5[-1]);
          lVar6 = local_60;
        }
        *plVar5 = lVar6;
      }
      else if (*(char *)((longlong)plVar5 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar5);
        }
        FUN_1404e9462(param_1,plVar5 + -1);
      }
      plVar5 = plVar5 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  FUN_146129ee0(plVar1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146129ee0 FUN_146129ee0 body=106 status=ok
// SIG undefined FUN_146129ee0(void)

void FUN_146129ee0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    lVar3 = uVar4 * 0x18 + 0x11;
    while (*(char *)(*param_1 + lVar3) == '\0') {
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_146129f3c;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_146129f3c:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 146129f4a FUN_146129f4a body=401 status=ok
// SIG undefined FUN_146129f4a(void)

void FUN_146129f4a(longlong *param_1,longlong param_2)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pvVar1 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58[0] = local_40[0];
  local_50 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_30;
  local_48 = (int)uStack_30;
  if (lVar3 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,uStack_30 & 0xffffffff,0);
    memcpy(local_50,pvVar1,lVar3 * 2);
  }
  cVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,local_58);
  pvVar1 = local_38;
  if (cVar2 == '\0') {
    DAT_14c949520 = L"ServerGbxConsoleCommand_Validate";
  }
  else {
    local_70[0] = local_40[0];
    local_68 = (void *)0x0;
    lVar3 = (longlong)(int)uStack_30;
    local_60 = (int)uStack_30;
    if (lVar3 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,uStack_30 & 0xffffffff,0);
      memcpy(local_68,pvVar1,lVar3 * 2);
    }
    (**(code **)(*param_1 + 0x7c0))(param_1,local_70);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612a0dc FUN_14612a0dc body=25 status=ok
// SIG undefined FUN_14612a0dc(void)

undefined1 FUN_14612a0dc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 14612a0f6 FUN_14612a0f6 body=108 status=ok
// SIG undefined FUN_14612a0f6(void)

void FUN_14612a0f6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xd40))(param_1,local_28,(longlong *)(param_2 + 8),1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612a164 FUN_14612a164 body=256 status=ok
// SIG undefined FUN_14612a164(void)

void FUN_14612a164(longlong *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    if (param_2[2] != 0) {
      uVar2 = FUN_144a78877(uVar2);
    }
    uVar3 = param_2[3];
    if (param_2[5] != 0) {
      uVar3 = FUN_144a78877(uVar3);
    }
    uVar4 = param_2[6];
    if (param_2[8] != 0) {
      uVar4 = FUN_144a78877(uVar4);
    }
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)(int)(uVar3 ^ uVar2 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar9 * 4);
    if (lVar5 != -1) {
      lVar5 = lVar5 * 0x50 + *param_1;
      cVar1 = FUN_140ac16b0(lVar5,param_2);
      if (cVar1 == '\0') {
        do {
          lVar6 = lVar5;
          lVar5 = (longlong)*(int *)(lVar6 + 0x48);
          if (lVar5 == -1) {
            return;
          }
          lVar5 = lVar5 * 0x50 + *param_1;
          cVar1 = FUN_140ac16b0(lVar5,param_2);
        } while (cVar1 == '\0');
        puVar8 = (undefined4 *)(lVar6 + 0x48);
      }
      else {
        puVar8 = (undefined4 *)((longlong)plVar7 + uVar9 * 4);
      }
      FUN_14612a264(param_1,*puVar8);
      return;
    }
  }
  return;
}



// FUNCTION 14612a264 FUN_14612a264 body=128 status=ok
// SIG undefined FUN_14612a264(void)

void FUN_14612a264(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x50;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x4c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x50 + 0x48);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x48);
  FUN_145c6b660(*param_1 + lVar2 + 0x28);
  FUN_14612a2e4(param_1,param_2);
  return;
}



// FUNCTION 14612a2e4 FUN_14612a2e4 body=120 status=ok
// SIG undefined FUN_14612a2e4(void)

void FUN_14612a2e4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 14612a35c FUN_14612a35c body=313 status=ok
// SIG undefined FUN_14612a35c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612a35c(void)

{
  if ((DAT_14cae1c7f & 2) == 0) {
    DAT_14cae1c7f = DAT_14cae1c7f | 2;
    _DAT_14cae1c20 = L"FRadixSortClearOffsetsCS";
    _DAT_14cae1c38 = FUN_146826540;
    _DAT_14cae1c40 = FUN_146825d77;
    _DAT_14cae1c48 = FUN_146825fd6;
    _DAT_14cae1c50 = FUN_1407e02ea;
    _DAT_14cae1c58 = FUN_146826273;
    _DAT_14cae1c30 = FUN_147add9aa;
    _DAT_14cae1c70 = 0xffffffff000000e8;
    _DAT_14cae1c78 = 8;
    DAT_14cae1c7c = 0;
    _DAT_14cae1c60 = &LAB_147add9d4;
    _DAT_14cae2310 = L"OutOffsets";
    DAT_14cae233a = FUN_140850cc5();
    _DAT_14cae2318 = FUN_140fb78d0();
    _DAT_14cae2328 = &LAB_14682652b;
    _DAT_14cae2330 = 0x1000000e0;
    _DAT_14cae2338 = 0;
    _DAT_14cae2320 = DAT_14cae1c28;
    DAT_14cae1c28 = &DAT_14cae2310;
    FUN_14612a496();
    FUN_1407e00cc(&DAT_14cae1c18);
    return;
  }
  return;
}



// FUNCTION 14612a496 FUN_14612a496 body=123 status=ok
// SIG undefined FUN_14612a496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612a496(void)

{
  _DAT_14cae3930 = L"BASE";
  DAT_14cae395a = 4;
  _DAT_14cae3938 = FUN_140b35ae4();
  _DAT_14cae3940 = DAT_14cae1c28;
  _DAT_14cae3948 = &LAB_14682652b;
  DAT_14cae1c28 = &DAT_14cae3930;
  DAT_14cae1c7d = DAT_14cae1c7d + '\x01';
  _DAT_14cae3950 = 0x100000000;
  if (*(char *)(_DAT_14cae3938 + 100) != '\0') {
    DAT_14cae1c7e = DAT_14cae1c7e + '\x01';
  }
  return;
}



// FUNCTION 14612a512 FUN_14612a512 body=313 status=ok
// SIG undefined FUN_14612a512(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14612a512(void)

{
  if ((DAT_14cb0f5ff & 2) == 0) {
    DAT_14cb0f5ff = DAT_14cb0f5ff | 2;
    _DAT_14cb0f5a0 = L"FWriteToSliceGS";
    _DAT_14cb0f5b8 = FUN_146826540;
    _DAT_14cb0f5c0 = FUN_146825d77;
    _DAT_14cb0f5c8 = FUN_146825fd6;
    _DAT_14cb0f5d0 = FUN_1407e02ea;
    _DAT_14cb0f5d8 = FUN_146826273;
    _DAT_14cb0f5b0 = FUN_147da5420;
    _DAT_14cb0f5f0 = 0xffffffff000000e8;
    _DAT_14cb0f5f8 = 8;
    DAT_14cb0f5fc = 0;
    _DAT_14cb0f5e0 = &LAB_147da544a;
    _DAT_14cb104e0 = L"MinZ";
    DAT_14cb1050a = FUN_140850cc5();
    _DAT_14cb104e8 = FUN_140ec6960();
    _DAT_14cb104f8 = &LAB_14682652b;
    _DAT_14cb10500 = 0x1000000e0;
    _DAT_14cb10508 = 0;
    _DAT_14cb104f0 = DAT_14cb0f5a8;
    DAT_14cb0f5a8 = &DAT_14cb104e0;
    FUN_14612a64c();
    FUN_1407e00cc(&DAT_14cb0f598);
  }
  return &DAT_14cb0f598;
}



// FUNCTION 14612a64c FUN_14612a64c body=123 status=ok
// SIG undefined FUN_14612a64c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14612a64c(void)

{
  _DAT_14cb10710 = L"BASE";
  DAT_14cb1073a = 4;
  _DAT_14cb10718 = FUN_140b35ae4();
  _DAT_14cb10720 = DAT_14cb0f5a8;
  _DAT_14cb10728 = &LAB_14682652b;
  DAT_14cb0f5a8 = &DAT_14cb10710;
  DAT_14cb0f5fd = DAT_14cb0f5fd + '\x01';
  _DAT_14cb10730 = 0x100000000;
  if (*(char *)(_DAT_14cb10718 + 100) != '\0') {
    DAT_14cb0f5fe = DAT_14cb0f5fe + '\x01';
  }
  return;
}



// FUNCTION 14612a6c8 FUN_14612a6c8 body=268 status=ok
// SIG undefined FUN_14612a6c8(void)

void FUN_14612a6c8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_17c [11];
  undefined1 local_171;
  longlong local_170;
  ulonglong *local_168;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_170,lVar2,0);
    local_171 = 0;
    puVar1 = (undefined1 *)*local_168 + 1;
    if ((undefined1 *)local_168[1] < puVar1) {
      (**(code **)(local_170 + 0x170))(&local_170,&local_171,1);
    }
    else {
      local_171 = *(undefined1 *)*local_168;
      *local_168 = (ulonglong)puVar1;
    }
    local_188 = param_5;
    FUN_14612a7d6(&local_170,param_2,param_3,param_4);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_17c,&local_170,1);
    FUN_1449daebe(&local_170);
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612a7d6 FUN_14612a7d6 body=97 status=ok
// SIG undefined FUN_14612a7d6(void)

void FUN_14612a7d6(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14612a838(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 14612a838 FUN_14612a838 body=110 status=ok
// SIG undefined FUN_14612a838(void)

void FUN_14612a838(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14021219d(param_1,param_3);
  FUN_14612a8a6(param_1,param_4);
  return;
}



// FUNCTION 14612a8a6 FUN_14612a8a6 body=62 status=ok
// SIG undefined FUN_14612a8a6(void)

void FUN_14612a8a6(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014612a8cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    return;
  }
  thunk_FUN_1457251a8();
  return;
}



// FUNCTION 14612a8e4 FUN_14612a8e4 body=269 status=ok
// SIG undefined FUN_14612a8e4(void)

undefined4 * FUN_14612a8e4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14612ac5e(param_1,local_48);
  FUN_14612a9f2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_14612ab9e(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14612ad4e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612a9f2 FUN_14612a9f2 body=151 status=ok
// SIG undefined FUN_14612a9f2(void)

undefined8 * FUN_14612a9f2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14612aa8a(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612aa8a FUN_14612aa8a body=125 status=ok
// SIG undefined FUN_14612aa8a(void)

undefined8 * FUN_14612aa8a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14612ab08();
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



// FUNCTION 14612ab08 FUN_14612ab08 body=150 status=ok
// SIG undefined FUN_14612ab08(void)

longlong * FUN_14612ab08(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 14612ab9e FUN_14612ab9e body=191 status=ok
// SIG undefined FUN_14612ab9e(void)

undefined8 FUN_14612ab9e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140c85ee4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1487d8268(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14612ac5e FUN_14612ac5e body=239 status=ok
// SIG undefined FUN_14612ac5e(void)

int * FUN_14612ac5e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14612ad4e FUN_14612ad4e body=486 status=ok
// SIG undefined FUN_14612ad4e(void)

void FUN_14612ad4e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14612af36 FUN_14612af36 body=129 status=ok
// SIG undefined FUN_14612af36(void)

void FUN_14612af36(longlong param_1)

{
  FUN_14612afb8(DAT_14c872ce0,L"OakSkills",L"MovingVelocity",param_1 + 0x28,&DAT_14c872af8);
  FUN_14612afb8(DAT_14c872ce0,L"OakSkills",L"NonMovingVelocity",param_1 + 0x30,&DAT_14c872af8);
  FUN_14612afb8(DAT_14c872ce0,L"OakSkills",L"MovingJitterDelay",param_1 + 0x38,&DAT_14c872af8);
  return;
}



// FUNCTION 14612afb8 FUN_14612afb8 body=139 status=ok
// SIG undefined FUN_14612afb8(void)

undefined4 FUN_14612afb8(void)

{
  undefined4 uVar1;
  wchar_t *_Str;
  double *in_R9;
  double dVar2;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  local_38 = in_stack_00000028;
  uVar1 = FUN_1449da20c();
  if ((char)uVar1 != '\0') {
    _Str = local_28;
    if ((int)uStack_20 == 0) {
      _Str = L"";
    }
    dVar2 = wcstod(_Str,(wchar_t **)0x0);
    *in_R9 = dVar2;
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14612b044 FUN_14612b044 body=187 status=ok
// SIG undefined FUN_14612b044(void)

longlong * FUN_14612b044(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140791f3e();
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_58 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(uVar2,&local_40,param_3,param_2);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612b100 FUN_14612b100 body=235 status=ok
// SIG undefined FUN_14612b100(void)

void FUN_14612b100(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415df63e(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612b1f8 FUN_14612b1f8 body=347 status=ok
// SIG undefined FUN_14612b1f8(void)

undefined8 * FUN_14612b1f8(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *param_1 = &PTR_FUN_14ace3950;
  lVar2 = FUN_14595a9d8();
  FUN_1446f470e(&local_28,L"ReceiveTreeStart",1);
  lVar3 = FUN_1400796d0(param_1[2],local_28,1);
  if (lVar3 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(longlong *)(lVar3 + 0x20) != lVar2;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | bVar4;
  lVar2 = FUN_14595a9d8();
  FUN_1446f470e(&local_30,L"ReceiveTreeStop",1);
  lVar3 = FUN_1400796d0(param_1[2],local_30,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) * '\x02';
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfd | bVar1;
  lVar2 = FUN_14595a9d8();
  FUN_1446f470e(&local_38,L"ReceiveTick",1);
  lVar3 = FUN_1400796d0(param_1[2],local_38,1);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(longlong *)(lVar3 + 0x20) != lVar2) << 2;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612b354 FUN_14612b354 body=37 status=ok
// SIG undefined FUN_14612b354(void)

void FUN_14612b354(undefined8 param_1,void *param_2)

{
  memset(param_2,0,4000);
  FUN_1415e05cc(param_2);
  return;
}



// FUNCTION 14612b37a FUN_14612b37a body=254 status=ok
// SIG undefined FUN_14612b37a(void)

longlong *
FUN_14612b37a(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_14612b47c(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_14612b4f4(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14612b47c FUN_14612b47c body=120 status=ok
// SIG undefined FUN_14612b47c(void)

undefined8 * FUN_14612b47c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99d170;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99d190;
  param_1[6] = &PTR_FUN_14b99d1d0;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14612b4f4 FUN_14612b4f4 body=162 status=ok
// SIG undefined FUN_14612b4f4(void)

void FUN_14612b4f4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_14612b533;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_14612b533;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14612b533:
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
                    /* WARNING: Could not recover jumptable at 0x00014612b592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}


