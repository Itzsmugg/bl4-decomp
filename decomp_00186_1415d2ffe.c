// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415d2ffe FUN_1415d2ffe body=281 status=ok
// SIG undefined FUN_1415d2ffe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2ffe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8eda0) {
    FUN_144b3d300(&DAT_14cb8eda0);
    if (DAT_14cb8eda0 == -1) {
      FUN_146092a7a();
      FUN_140db5666(&DAT_14cb8ecf8,0,&DAT_14cb8ec90,L"FRenoirVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohRenoirShaderVS.usf",
                    L"RenoirShaderVS",0,1,FUN_1489c09f2,FUN_1489c0994,&LAB_1489c0990,&LAB_1489c098c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14cb8ecf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7847a);
      _Init_thread_footer(&DAT_14cb8eda0);
    }
  }
  return &DAT_14cb8ecf8;
}



// FUNCTION 1415d3118 FUN_1415d3118 body=281 status=ok
// SIG undefined FUN_1415d3118(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3118(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8eec8) {
    FUN_144b3d300(&DAT_14cb8eec8);
    if (DAT_14cb8eec8 == -1) {
      FUN_146092bce();
      FUN_140db5666(&DAT_14cb8ee20,0,&DAT_14cb8edb8,L"FRenoirPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohRenoirShaderPS.usf",
                    L"RenoirShaderPS",3,1,FUN_1489c0a8c,FUN_1489c0a64,&LAB_1489c0a60,&LAB_1489c0a5c,
                    &LAB_14712ac0c,&LAB_14712ac08,0x110,0);
      _DAT_14cb8ee20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78486);
      _Init_thread_footer(&DAT_14cb8eec8);
    }
  }
  return &DAT_14cb8ee20;
}



// FUNCTION 1415d3232 FUN_1415d3232 body=281 status=ok
// SIG undefined FUN_1415d3232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3232(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f118) {
    FUN_144b3d300(&DAT_14cb8f118);
    if (DAT_14cb8f118 == -1) {
      FUN_146092d22();
      FUN_140db5666(&DAT_14cb8f070,0,&DAT_14cb8f008,L"FRenoirStencilRarePS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStencilRarePS.usf",L"StencilRarePS"
                    ,3,1,FUN_1489c0bc8,FUN_1489c0ba0,&LAB_1489c0b9c,&LAB_1489c0b98,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8f070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7849e);
      _Init_thread_footer(&DAT_14cb8f118);
    }
  }
  return &DAT_14cb8f070;
}



// FUNCTION 1415d334c FUN_1415d334c body=281 status=ok
// SIG undefined FUN_1415d334c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d334c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f240) {
    FUN_144b3d300(&DAT_14cb8f240);
    if (DAT_14cb8f240 == -1) {
      FUN_146092e76();
      FUN_140db5666(&DAT_14cb8f198,0,&DAT_14cb8f130,L"FRenoirStencilPathPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStencilPathPS.usf",L"StencilPathPS"
                    ,3,1,FUN_1489c0c66,FUN_1489c0c3e,&LAB_1489c0c3a,&LAB_1489c0c36,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8f198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784aa);
      _Init_thread_footer(&DAT_14cb8f240);
    }
  }
  return &DAT_14cb8f198;
}



// FUNCTION 1415d3466 FUN_1415d3466 body=281 status=ok
// SIG undefined FUN_1415d3466(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3466(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f368) {
    FUN_144b3d300(&DAT_14cb8f368);
    if (DAT_14cb8f368 == -1) {
      FUN_146092fca();
      FUN_140db5666(&DAT_14cb8f2c0,0,&DAT_14cb8f258,L"FTexturesWithColorMixPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohColorMixingPS.usf",L"ColorMixingPS"
                    ,3,1,FUN_1489c0d04,FUN_1489c0cdc,&LAB_1489c0cd8,&LAB_1489c0cd4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8f2c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784b6);
      _Init_thread_footer(&DAT_14cb8f368);
    }
  }
  return &DAT_14cb8f2c0;
}



// FUNCTION 1415d3580 FUN_1415d3580 body=281 status=ok
// SIG undefined FUN_1415d3580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3580(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f6e0) {
    FUN_144b3d300(&DAT_14cb8f6e0);
    if (DAT_14cb8f6e0 == -1) {
      FUN_14609311e();
      FUN_140db5666(&DAT_14cb8f638,0,&DAT_14cb8f5d0,L"FRenoirGenerateSDFVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohGenerateSDFVS.usf",L"GenerateSDFVS"
                    ,0,1,FUN_1489c0f46,FUN_1489c0ee8,&LAB_1489c0ee4,&LAB_1489c0ee0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb8f638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784da);
      _Init_thread_footer(&DAT_14cb8f6e0);
    }
  }
  return &DAT_14cb8f638;
}



// FUNCTION 1415d369a FUN_1415d369a body=281 status=ok
// SIG undefined FUN_1415d369a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d369a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f808) {
    FUN_144b3d300(&DAT_14cb8f808);
    if (DAT_14cb8f808 == -1) {
      FUN_146093272();
      FUN_140db5666(&DAT_14cb8f760,0,&DAT_14cb8f6f8,L"FRenoirGenerateSDFPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohGenerateSDFPS.usf",L"GenerateSDFPS"
                    ,3,1,FUN_1489c0fe0,FUN_1489c0fb8,&LAB_1489c0fb4,&LAB_1489c0fb0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8f760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784e6);
      _Init_thread_footer(&DAT_14cb8f808);
    }
  }
  return &DAT_14cb8f760;
}



// FUNCTION 1415d37b4 FUN_1415d37b4 body=703 status=ok
// SIG undefined FUN_1415d37b4(void)

void FUN_1415d37b4(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  undefined8 local_70;
  undefined4 local_68;
  code *local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 == 0) goto LAB_1415d399f;
  if (DAT_14cbadd90 == 0) {
    local_90 = &local_60;
    local_60 = FUN_141030f22;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1459f2e4c;
    local_98 = &LAB_148c39de3;
    local_a0 = &LAB_1457a9eb2;
    local_a8 = &DAT_149e063b2;
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1415d399f;
  plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958);
  if (plVar5 == (longlong *)0x0) goto LAB_1415d399f;
  lVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
  if (lVar4 == 0) goto LAB_1415d399f;
  FUN_1449027d0(param_1,&local_60);
  lVar2 = *(longlong *)(local_60 + 0x2f0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xc0));
  *(int *)(lVar2 + 0xb8) = *(int *)(lVar2 + 0xb8) + 1;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  lVar4 = *(longlong *)(lVar4 + 200);
  if (lVar4 == 0) {
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    local_68 = *(undefined4 *)(lVar4 + 0x10);
    local_70 = *(undefined8 *)(lVar4 + 8);
  }
  FUN_1448075d0(&local_60,&local_70);
  lVar4 = FUN_14060eaf6(&local_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar7 = lVar4 + 0x4f0;
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  uVar6 = 0;
  if (param_2 == '\0') {
LAB_1415d398f:
    *(undefined4 *)(lVar2 + 0xa0) = uVar6;
  }
  else {
    *(undefined4 *)(lVar2 + 0xa0) = 1;
    if (lVar7 != 0) {
      cVar3 = FUN_1407a73f8(lVar7,&DAT_14cbcdde0);
      uVar6 = 2;
      if (cVar3 == '\0') {
        cVar3 = FUN_1407a73f8(lVar7,&DAT_14cbcdde8);
        uVar6 = 3;
        if (cVar3 == '\0') {
          cVar3 = FUN_1407a73f8(lVar7,&DAT_14cbcddf0);
          if (cVar3 == '\0') {
            cVar3 = FUN_1407a73f8(lVar7,&DAT_14cbcddf8);
            if (cVar3 == '\0') goto LAB_1415d3996;
          }
        }
      }
      goto LAB_1415d398f;
    }
  }
LAB_1415d3996:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xc0));
LAB_1415d399f:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d3a74 FUN_1415d3a74 body=164 status=ok
// SIG undefined FUN_1415d3a74(void)

void FUN_1415d3a74(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_140208c1e(&DAT_14caec180,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d3b1a FUN_1415d3b1a body=281 status=ok
// SIG undefined FUN_1415d3b1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3b1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb062a0) {
    FUN_144b3d300(&DAT_14cb062a0);
    if (DAT_14cb062a0 == -1) {
      FUN_146096f0e();
      FUN_140db5666(&DAT_14cb061f8,0,&DAT_14cb06190,L"FSimpleElementGammaPS_SRGB",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,FUN_147d14164,
                    FUN_147d14106,&LAB_147d14102,&LAB_147d140fe,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14cb061f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b14);
      _Init_thread_footer(&DAT_14cb062a0);
    }
  }
  return &DAT_14cb061f8;
}



// FUNCTION 1415d3c34 FUN_1415d3c34 body=281 status=ok
// SIG undefined FUN_1415d3c34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3c34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb063c8) {
    FUN_144b3d300(&DAT_14cb063c8);
    if (DAT_14cb063c8 == -1) {
      FUN_146097062();
      FUN_140db5666(&DAT_14cb06320,0,&DAT_14cb062b8,L"FSimpleElementGammaPS_Linear",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaMain",3,1,FUN_147d1423c,
                    FUN_147d141de,&LAB_147d141da,&LAB_147d141d6,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14cb06320 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b20);
      _Init_thread_footer(&DAT_14cb063c8);
    }
  }
  return &DAT_14cb06320;
}



// FUNCTION 1415d3d4e FUN_1415d3d4e body=281 status=ok
// SIG undefined FUN_1415d3d4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3d4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb064f0) {
    FUN_144b3d300(&DAT_14cb064f0);
    if (DAT_14cb064f0 == -1) {
      FUN_1460971b6();
      FUN_140db5666(&DAT_14cb06448,0,&DAT_14cb063e0,L"FSimpleElementGammaAlphaOnlyPS",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"GammaAlphaOnlyMain",3,1,
                    FUN_147d14314,FUN_147d142b6,&LAB_147d142b2,&LAB_147d142ae,&LAB_14712ac0c,
                    &LAB_14712ac08,0x108,0);
      _DAT_14cb06448 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b2c);
      _Init_thread_footer(&DAT_14cb064f0);
    }
  }
  return &DAT_14cb06448;
}



// FUNCTION 1415d3e68 FUN_1415d3e68 body=93 status=ok
// SIG undefined FUN_1415d3e68(void)

void FUN_1415d3e68(char *param_1,undefined8 param_2,int *param_3)

{
  FUN_1400bc8c2();
  if (((*param_1 == '\0') && (*param_3 != 0)) && (*(longlong *)(param_3 + 2) != 0)) {
    FUN_140c125e6(param_3,&DAT_14cbd92d8);
    FUN_140c125e6(param_3,&DAT_14cbd92e0);
    FUN_140c125e6(param_3,&DAT_14cbd92f8);
    return;
  }
  return;
}



// FUNCTION 1415d3ec6 FUN_1415d3ec6 body=284 status=ok
// SIG undefined FUN_1415d3ec6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3ec6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6bde8) {
    FUN_144b3d300(&DAT_14ca6bde8);
    if (DAT_14ca6bde8 == -1) {
      FUN_14609c8f8();
      FUN_140db5666(&DAT_14ca6bd40,2,&DAT_14ca6bcd8,L"TVoxelizeVolumeVS<VMode_Object_Box>",
                    L"/Engine/Private/VolumetricFogVoxelization.usf",L"VoxelizeVS",0,1,FUN_147335248
                    ,FUN_1473351ea,FUN_14310b35a,&LAB_1473351e6,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca6bd40 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14310b3fd);
      _Init_thread_footer(&DAT_14ca6bde8);
    }
  }
  return &DAT_14ca6bd40;
}



// FUNCTION 1415d3fe2 FUN_1415d3fe2 body=284 status=ok
// SIG undefined FUN_1415d3fe2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d3fe2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c038) {
    FUN_144b3d300(&DAT_14ca6c038);
    if (DAT_14ca6c038 == -1) {
      FUN_14609ca4c();
      FUN_140db5666(&DAT_14ca6bf90,2,&DAT_14ca6bf28,L"TVoxelizeVolumeGS<VMode_Object_Box>",
                    L"/Engine/Private/VolumetricFogVoxelization.usf",L"VoxelizeGS",4,1,FUN_147335440
                    ,FUN_1473353e2,&LAB_141786cf4,&LAB_1473353de,&LAB_14712ac0c,&LAB_14712ac08,0x110
                    ,0);
      _DAT_14ca6bf90 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14310b415);
      _Init_thread_footer(&DAT_14ca6c038);
    }
  }
  return &DAT_14ca6bf90;
}



// FUNCTION 1415d40fe FUN_1415d40fe body=284 status=ok
// SIG undefined FUN_1415d40fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d40fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c288) {
    FUN_144b3d300(&DAT_14ca6c288);
    if (DAT_14ca6c288 == -1) {
      FUN_14609cba0();
      FUN_140db5666(&DAT_14ca6c1e0,2,&DAT_14ca6c178,L"TVoxelizeVolumePS<VMode_Object_Box>",
                    L"/Engine/Private/VolumetricFogVoxelization.usf",L"VoxelizePS",3,1,FUN_1473355b8
                    ,FUN_147335590,FUN_14310b4d2,&LAB_14733558c,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14ca6c1e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14310b575);
      _Init_thread_footer(&DAT_14ca6c288);
    }
  }
  return &DAT_14ca6c1e0;
}



// FUNCTION 1415d421a FUN_1415d421a body=223 status=ok
// SIG undefined FUN_1415d421a(void)

ulonglong FUN_1415d421a(undefined8 *param_1)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pwVar3 = L"false";
  if (DAT_14c9ac110 == '\x01') {
    if (DAT_14ca84df4 == 0x10de) {
      local_30 = DAT_14c9ac114;
      iVar1 = (*(code *)*param_1)(param_1[1]);
      if (iVar1 == 1) {
        pwVar3 = L"false";
        if (DAT_14c9ac110 != '\0') {
          pwVar3 = L"true";
        }
        uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        goto LAB_1415d428e;
      }
    }
    DAT_14c9ac110 = '\0';
  }
  uVar2 = 0;
LAB_1415d428e:
  FUN_140056680(&local_30,pwVar3);
  FUN_140056680(local_40,L"RHI.Aftermath");
  FUN_14152eab6(local_40,&local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_2c,local_30) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d42fa FUN_1415d42fa body=197 status=ok
// SIG undefined FUN_1415d42fa(void)

void FUN_1415d42fa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = (int)((ulonglong)(param_2[1] - *param_2) >> 4) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140e83416(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14482b9e8(param_1);
    }
  }
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if (lVar5 != lVar1) {
    do {
      FUN_14482b35e(param_1,local_2c,lVar5,0);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d43c2 FUN_1415d43c2 body=2422 status=ok
// SIG undefined FUN_1415d43c2(void)

void FUN_1415d43c2(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  byte param_6)

{
  double dVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *plVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_c38 [32];
  longlong local_c18 [2];
  longlong local_c08;
  longlong *local_bf8;
  longlong local_be8 [4];
  int local_bc8;
  longlong local_bc0;
  longlong *local_818;
  uint local_810;
  undefined8 local_808;
  undefined8 uStack_800;
  longlong local_7f8;
  longlong *local_7e8;
  longlong local_7d8 [4];
  undefined1 local_7b8 [1024];
  undefined1 *local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  longlong *local_388;
  longlong local_378 [4];
  int local_358;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_c38;
  if ((((*param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
      (iVar4 = FUN_14490d72a(lVar5), iVar4 != 3)) && (lVar6 = FUN_140877338(lVar5), lVar6 != 0)) {
    local_3b8 = (undefined1 *)0x0;
    local_3b0 = 0x4000000000;
    FUN_14189b054(lVar6,&local_808,param_1);
    FUN_140ed5bce(&local_808,local_c18);
    FUN_14189ab14(&local_808,&local_3a8);
    if (local_bc8 != local_358) {
      do {
        lVar6 = local_bc0;
        if (local_bc8 < 0) {
          if ((local_358 < 0) || ((int)local_3a8[0x76] <= local_358)) break;
        }
        else if (local_358 < 0) {
          if (*(int *)(local_c18[0] + 0x3b0) <= local_bc8) break;
        }
        else if (local_358 < (int)local_3a8[0x76] == local_bc8 < *(int *)(local_c18[0] + 0x3b0))
        break;
        if (((*(uint *)(local_bc0 + 0x100) & 4) != 0) ||
           (((*(uint *)(local_bc0 + 0x100) >> 0x1b & 1) == 0 &&
            (*(float *)(local_bc0 + 0x334) <= 0.0)))) {
          lVar23 = *(longlong *)(local_bc0 + 0x278);
          if (lVar23 == 0) {
            uVar15 = 0;
          }
          else {
            lVar7 = FUN_140717404(lVar23);
            if (lVar7 == 0) {
              lVar7 = lVar23;
            }
            uVar15 = *(undefined4 *)(lVar7 + 0xc);
          }
          uVar13 = local_3b0;
          lVar23 = (longlong)(int)(uint)local_3b0;
          uVar16 = (uint)local_3b0 + 1;
          local_3b0 = CONCAT44(local_3b0._4_4_,uVar16);
          if (local_3b0._4_4_ < uVar16) {
            FUN_143ddd8dc(local_7b8,uVar13 & 0xffffffff);
          }
          puVar10 = local_3b8;
          if (local_3b8 == (undefined1 *)0x0) {
            puVar10 = local_7b8;
          }
          *(longlong *)(puVar10 + lVar23 * 0x10) = lVar6;
          *(undefined4 *)(puVar10 + lVar23 * 0x10 + 8) = uVar15;
        }
        local_bc8 = local_bc8 + 1;
        FUN_140ed5cca(local_c18);
      } while (local_bc8 != local_358);
    }
    if (CONCAT44(uStack_394,local_398) != 0) {
      if (local_388 == (longlong *)0x0) {
        local_388 = local_378;
      }
      (**(code **)(*local_388 + 0x10))();
    }
    if (local_c08 != 0) {
      if (local_bf8 == (longlong *)0x0) {
        local_bf8 = local_be8;
      }
      (**(code **)(*local_bf8 + 0x10))();
    }
    if (local_7f8 != 0) {
      if (local_7e8 == (longlong *)0x0) {
        local_7e8 = local_7d8;
      }
      (**(code **)(*local_7e8 + 0x10))();
    }
    lVar6 = (longlong)(int)(uint)local_3b0;
    if (0.0 < param_2 && 1 < lVar6) {
      local_818 = (longlong *)0x0;
      local_810 = (uint)local_3b0;
      puVar10 = local_3b8;
      if (local_3b8 == (undefined1 *)0x0) {
        puVar10 = local_7b8;
      }
      FUN_143ddda68(local_c18,local_3b0 & 0xffffffff);
      plVar9 = local_818;
      if (local_818 == (longlong *)0x0) {
        plVar9 = local_c18;
      }
      memcpy(plVar9,puVar10,lVar6 << 4);
      uVar16 = local_810;
      lVar6 = (longlong)(int)local_810;
      if (1 < lVar6) {
        plVar9 = local_818;
        if (local_818 == (longlong *)0x0) {
          plVar9 = local_c18;
        }
        memset(&local_398,0,0x2f0);
        local_3a0 = plVar9 + lVar6 * 2 + -2;
        local_3a8 = plVar9;
        fVar32 = logf((float)(int)uVar16);
        local_398 = (int)(longlong)(fVar32 + fVar32);
        pplVar8 = &local_3a8;
        do {
          plVar12 = *pplVar8;
          plVar9 = pplVar8[1];
          iVar4 = *(int *)(pplVar8 + 2);
          iVar20 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar12) >> 4);
          uVar16 = iVar20 + 1;
          plVar22 = plVar9;
          plVar26 = plVar12;
          if (iVar4 != 0) {
LAB_1415d4751:
            if (8 < (int)uVar16) {
              lVar6 = plVar12[(ulonglong)(uVar16 >> 1) * 2];
              lVar23 = (plVar12 + (ulonglong)(uVar16 >> 1) * 2)[1];
              lVar7 = plVar12[1];
              plVar12[(ulonglong)(uVar16 >> 1) * 2] = *plVar12;
              (plVar12 + (ulonglong)(uVar16 >> 1) * 2)[1] = lVar7;
              *plVar12 = lVar6;
              plVar12[1] = lVar23;
              plVar21 = plVar9 + 2;
              plVar11 = plVar12;
              do {
                plVar2 = plVar11 + 2;
                plVar17 = plVar11 + 2;
                do {
                  plVar11 = plVar17;
                  plVar29 = plVar2;
                  if (plVar9 < plVar11) break;
                  plVar2 = plVar29 + 2;
                  plVar17 = plVar11 + 2;
                } while (*(uint *)(plVar12 + 1) <= *(uint *)(plVar11 + 1));
                plVar2 = plVar21 + -4;
                do {
                  plVar17 = plVar21;
                  plVar24 = plVar2;
                  plVar21 = plVar17 + -2;
                  if (plVar21 <= plVar12) break;
                  plVar2 = plVar24 + -2;
                } while (*(uint *)(plVar17 + -1) <= *(uint *)(plVar12 + 1));
                if (plVar21 < plVar11) goto LAB_1415d47fb;
                lVar6 = *plVar11;
                lVar23 = plVar11[1];
                lVar7 = plVar17[-1];
                *plVar11 = *plVar21;
                plVar11[1] = lVar7;
                *plVar21 = lVar6;
                plVar17[-1] = lVar23;
              } while( true );
            }
            for (; plVar26 = plVar12, plVar22 = plVar12, plVar12 < plVar9; plVar9 = plVar9 + -2) {
              while (plVar21 = plVar26, plVar22 = plVar22 + 2, plVar22 <= plVar9) {
                plVar26 = plVar22;
                if (*(uint *)(plVar21 + 1) <= *(uint *)(plVar22 + 1)) {
                  plVar26 = plVar21;
                }
              }
              local_808 = *plVar21;
              uStack_800 = plVar21[1];
              lVar23 = local_808;
              lVar7 = uStack_800;
              lVar6 = plVar9[1];
              *plVar21 = *plVar9;
              plVar21[1] = lVar6;
              local_808._4_4_ = (undefined4)((ulonglong)local_808 >> 0x20);
              uStack_800._4_4_ = (undefined4)((ulonglong)uStack_800 >> 0x20);
              *(undefined4 *)plVar9 = (undefined4)local_808;
              *(undefined4 *)((longlong)plVar9 + 4) = local_808._4_4_;
              *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_800;
              *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_800._4_4_;
              local_808 = lVar23;
              uStack_800 = lVar7;
            }
            goto LAB_1415d4abc;
          }
LAB_1415d48a3:
          if (uVar16 != 0) {
            iVar4 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
            iVar20 = iVar4;
joined_r0x0001415d48c4:
            do {
              iVar19 = iVar4 * 2 + 1;
              if (iVar19 < (int)uVar16) {
                iVar18 = iVar4 * 2 + 2;
                if ((iVar18 < (int)uVar16) &&
                   (*(uint *)(plVar12 + (longlong)iVar18 * 2 + 1) <=
                    *(uint *)(plVar12 + (longlong)iVar19 * 2 + 1))) {
                  iVar19 = iVar18;
                }
                if (*(uint *)(plVar12 + (longlong)iVar19 * 2 + 1) <
                    *(uint *)(plVar12 + (longlong)iVar4 * 2 + 1)) {
                  plVar9 = plVar12 + (longlong)iVar4 * 2;
                  plVar22 = plVar12 + (longlong)iVar19 * 2;
                  local_808 = *plVar9;
                  uStack_800 = plVar9[1];
                  lVar23 = local_808;
                  lVar7 = uStack_800;
                  lVar6 = plVar22[1];
                  *plVar9 = *plVar22;
                  plVar9[1] = lVar6;
                  local_808._4_4_ = (undefined4)((ulonglong)local_808 >> 0x20);
                  uStack_800._4_4_ = (undefined4)((ulonglong)uStack_800 >> 0x20);
                  *(undefined4 *)plVar22 = (undefined4)local_808;
                  *(undefined4 *)((longlong)plVar22 + 4) = local_808._4_4_;
                  *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_800;
                  *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_800._4_4_;
                  local_808 = lVar23;
                  uStack_800 = lVar7;
                  iVar4 = iVar19;
                  goto joined_r0x0001415d48c4;
                }
              }
              bVar30 = iVar20 != 0;
              iVar4 = iVar20 + -1;
              iVar20 = iVar4;
            } while (bVar30);
            if (1 < (int)uVar16) {
              uVar13 = (ulonglong)uVar16 - 1;
              local_808 = *plVar12;
              uStack_800 = plVar12[1];
              lVar23 = local_808;
              lVar7 = uStack_800;
              lVar6 = (plVar12 + uVar13 * 2)[1];
              *plVar12 = plVar12[uVar13 * 2];
              plVar12[1] = lVar6;
              local_808._4_4_ = (undefined4)((ulonglong)local_808 >> 0x20);
              uStack_800._4_4_ = (undefined4)((ulonglong)uStack_800 >> 0x20);
              plVar9 = plVar12 + uVar13 * 2;
              *(undefined4 *)plVar9 = (undefined4)local_808;
              *(undefined4 *)((longlong)plVar9 + 4) = local_808._4_4_;
              *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_800;
              *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_800._4_4_;
              local_808 = lVar23;
              uStack_800 = lVar7;
              if (uVar16 != 2) {
                do {
                  iVar4 = 0;
                  iVar19 = 1;
                  iVar20 = 0;
                  do {
                    iVar4 = iVar4 + 2;
                    iVar18 = iVar19;
                    if (((longlong)iVar4 < (longlong)uVar13) &&
                       (*(uint *)(plVar12 + (longlong)iVar4 * 2 + 1) <=
                        *(uint *)(plVar12 + (longlong)iVar19 * 2 + 1))) {
                      iVar18 = iVar4;
                    }
                    if (*(uint *)(plVar12 + (longlong)iVar20 * 2 + 1) <=
                        *(uint *)(plVar12 + (longlong)iVar18 * 2 + 1)) break;
                    plVar9 = plVar12 + (longlong)iVar20 * 2;
                    plVar22 = plVar12 + (longlong)iVar18 * 2;
                    lVar6 = *plVar9;
                    lVar23 = plVar9[1];
                    lVar7 = plVar22[1];
                    *plVar9 = *plVar22;
                    plVar9[1] = lVar7;
                    *plVar22 = lVar6;
                    plVar22[1] = lVar23;
                    iVar4 = iVar18 * 2;
                    iVar19 = iVar18 * 2 + 1;
                    iVar20 = iVar18;
                  } while ((longlong)iVar19 < (longlong)uVar13);
                  uVar14 = uVar13 - 1;
                  local_808 = *plVar12;
                  uStack_800 = plVar12[1];
                  lVar23 = local_808;
                  lVar7 = uStack_800;
                  lVar6 = (plVar12 + uVar14 * 2)[1];
                  *plVar12 = plVar12[uVar14 * 2];
                  plVar12[1] = lVar6;
                  local_808._4_4_ = (undefined4)((ulonglong)local_808 >> 0x20);
                  uStack_800._4_4_ = (undefined4)((ulonglong)uStack_800 >> 0x20);
                  plVar9 = plVar12 + uVar14 * 2;
                  *(undefined4 *)plVar9 = (undefined4)local_808;
                  *(undefined4 *)((longlong)plVar9 + 4) = local_808._4_4_;
                  *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_800;
                  *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_800._4_4_;
                  bVar30 = 2 < uVar13;
                  uVar13 = uVar14;
                  local_808 = lVar23;
                  uStack_800 = lVar7;
                } while (bVar30);
              }
            }
          }
LAB_1415d4abc:
          pplVar8 = pplVar8 + -3;
        } while (&local_3a8 <= pplVar8);
      }
      if (0 < (int)local_810) {
        uVar14 = (ulonglong)local_810;
        uVar16 = 1;
        uVar25 = 0;
        uVar13 = 0;
        do {
          uVar27 = uVar13 + 1;
          iVar4 = (int)uVar25;
          if (uVar27 == uVar14) {
LAB_1415d4b3c:
            uVar25 = (ulonglong)iVar4;
            plVar9 = local_818;
            if (local_818 == (longlong *)0x0) {
              plVar9 = local_c18;
            }
            lVar6 = uVar25 * 0x10;
            cVar3 = FUN_146555920(plVar9[uVar25 * 2],1);
            if (cVar3 == '\0') {
              fVar32 = 0.0;
            }
            else {
              fVar32 = (float)((int)uVar13 - iVar4) * param_2;
            }
            if ((0.0 < fVar32) && ((longlong)uVar25 <= (longlong)uVar13)) {
              fVar31 = param_3;
              if (fVar32 <= param_3) {
                fVar31 = fVar32;
              }
              do {
                plVar9 = local_818;
                if (local_818 == (longlong *)0x0) {
                  plVar9 = local_c18;
                }
                *(float *)(*(longlong *)((longlong)plVar9 + lVar6) + 0x88) =
                     *(float *)(*(longlong *)((longlong)plVar9 + lVar6) + 0x88) +
                     (float)(~-(uint)(0.0 < param_3) & (uint)fVar32 |
                            (uint)fVar31 & -(uint)(0.0 < param_3));
                uVar28 = (int)uVar25 + 1;
                uVar25 = (ulonglong)uVar28;
                lVar6 = lVar6 + 0x10;
              } while (uVar16 != uVar28);
            }
            uVar25 = uVar27 & 0xffffffff;
          }
          else {
            plVar9 = local_818;
            if (local_818 == (longlong *)0x0) {
              plVar9 = local_c18;
            }
            if ((int)plVar9[uVar27 * 2 + 1] != (int)plVar9[(longlong)iVar4 * 2 + 1])
            goto LAB_1415d4b3c;
          }
          uVar16 = uVar16 + 1;
          uVar13 = uVar27;
        } while (uVar27 != uVar14);
      }
      if (local_818 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (0 < (int)(uint)local_3b0) {
      uVar13 = (ulonglong)(uint)local_3b0;
      lVar6 = 0;
      fVar32 = 0.0;
      do {
        puVar10 = local_3b8;
        if (local_3b8 == (undefined1 *)0x0) {
          puVar10 = local_7b8;
        }
        lVar23 = *(longlong *)(puVar10 + lVar6);
        uVar16 = *(uint *)(lVar23 + 0x100);
        if (((uVar16 & 4) != 0) ||
           (((uVar16 >> 0x1b & 1) == 0 && (*(float *)(lVar23 + 0x334) <= 0.0)))) {
          if (((uVar16 & 0x10) == 0 & param_6) == 0) {
            FUN_14163f334(lVar23,fVar32,1);
          }
          else {
            dVar1 = *(double *)(lVar5 + 0x6d0);
            *(uint *)(lVar23 + 0x100) = uVar16 | 0x8000000;
            *(float *)(lVar23 + 0x7a8) = (float)((double)fVar32 + dVar1);
          }
          uVar16 = rand();
          fVar32 = fVar32 + ((float)(uVar16 & 0x7fff) / 32767.0) * (param_5 - param_4) + param_4;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar13 << 4 != lVar6);
    }
    if (local_3b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_c38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1415d47fb:
  local_808 = *plVar12;
  uStack_800 = plVar12[1];
  lVar23 = local_808;
  lVar7 = uStack_800;
  lVar6 = plVar17[-1];
  *plVar12 = *plVar21;
  plVar12[1] = lVar6;
  local_808._4_4_ = (undefined4)((ulonglong)local_808 >> 0x20);
  uStack_800._4_4_ = (undefined4)((ulonglong)uStack_800 >> 0x20);
  *(undefined4 *)plVar21 = (undefined4)local_808;
  *(undefined4 *)((longlong)plVar17 + -0xc) = local_808._4_4_;
  *(undefined4 *)(plVar17 + -1) = (undefined4)uStack_800;
  *(undefined4 *)((longlong)plVar17 + -4) = uStack_800._4_4_;
  iVar4 = iVar4 + -1;
  plVar17 = plVar17 + -4;
  local_808 = lVar23;
  uStack_800 = lVar7;
  if ((longlong)plVar24 - (longlong)plVar26 < (longlong)plVar22 - (longlong)plVar29) {
    if (plVar11 < plVar9) {
      *pplVar8 = plVar11;
      pplVar8[1] = plVar9;
      *(int *)(pplVar8 + 2) = iVar4;
      pplVar8 = pplVar8 + 3;
    }
    plVar29 = plVar12;
    if (plVar21 <= plVar12 + 2) goto LAB_1415d4abc;
  }
  else {
    if (plVar12 + 2 < plVar21) {
      *pplVar8 = plVar12;
      pplVar8[1] = plVar17;
      *(int *)(pplVar8 + 2) = iVar4;
      pplVar8 = pplVar8 + 3;
    }
    plVar12 = plVar11;
    plVar17 = plVar9;
    plVar24 = plVar9;
    if (plVar9 <= plVar11) goto LAB_1415d4abc;
  }
  iVar20 = (int)((ulonglong)((longlong)plVar24 - (longlong)plVar29) >> 4);
  uVar16 = iVar20 + 1;
  plVar9 = plVar17;
  plVar22 = plVar24;
  plVar26 = plVar29;
  if (iVar4 == 0) goto LAB_1415d48a3;
  goto LAB_1415d4751;
}



// FUNCTION 1415d4d3a FUN_1415d4d3a body=383 status=ok
// SIG undefined FUN_1415d4d3a(void)

void FUN_1415d4d3a(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14cc1c820;
  if (DAT_14cc1c828 != (undefined4 *)0x0) {
    puVar5 = DAT_14cc1c828;
  }
  iVar4 = DAT_14cc1c830 + 3;
  if (-1 < DAT_14cc1c830) {
    iVar4 = DAT_14cc1c830;
  }
  if (DAT_14cc1c7f0 - DAT_14cc1c81c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cc1c7f8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cc1c810 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cc1c810;
    }
    local_78 = &DAT_14cc1c7e8;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cc1c7f8)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0xb4 + (longlong)iVar3 * 0xc0)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cc1c7e8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cc1c7f8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cc1c830) {
      lVar2 = 0;
      do {
        puVar5[lVar2] = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14cc1c830);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d4eba FUN_1415d4eba body=547 status=ok
// SIG undefined FUN_1415d4eba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415d4eba(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0x100000000;
  local_58 = &DAT_14cc1c7f8;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14cc1c810 == 0) {
    uVar16 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar16 = local_60 >> 0x20;
  }
  puVar6 = local_58;
  iVar15 = (int)local_60;
  uVar12 = (uint)local_50;
  iVar8 = local_50._4_4_;
  iVar11 = local_48;
  if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
    do {
      lVar13 = DAT_14cc1c7e8;
      lVar14 = (longlong)iVar8 * 0xc0;
      if (*(longlong *)(DAT_14cc1c7e8 + 0xa0 + lVar14) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar13 + 0x60 + lVar14) != 0) {
        plVar9 = *(longlong **)(lVar13 + lVar14 + 0x70);
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)(lVar13 + lVar14 + 0x80);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (*(longlong *)(lVar13 + 0x20 + lVar14) != 0) {
        plVar9 = *(longlong **)(lVar13 + lVar14 + 0x30);
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)(lVar13 + lVar14 + 0x40);
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = *(longlong **)(lVar13 + 0x18 + lVar14);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar12 = uVar12 & ~(uint)uVar16;
      puVar10 = *(undefined **)(puVar6 + 0x10);
      if (*(undefined **)(puVar6 + 0x10) == (undefined *)0x0) {
        puVar10 = puVar6;
      }
      iVar4 = *(int *)(puVar6 + 0x18);
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)(puVar10 + lVar13 * 4) & uVar12;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar14 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)(puVar10 + lVar14 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar5 - lVar13 == lVar14) goto LAB_1415d5057;
        }
        iVar15 = iVar15 + (int)lVar14 + 1;
        uVar12 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_1415d5057:
  DAT_14cc1c7f0 = 0;
  if (DAT_14cc1c7f4 < 0) {
    FUN_1457dd8f6(&DAT_14cc1c7e8,0);
  }
  _DAT_14cc1c818 = 0xffffffff;
  DAT_14cc1c810 = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d50de FUN_1415d50de body=157 status=ok
// SIG undefined FUN_1415d50de(void)

void FUN_1415d50de(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa4cfb0;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_1415d517b(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) goto LAB_1415d513b;
  while ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    param_1[0xf] = *(undefined8 *)param_1[0xf];
LAB_1415d513b:
    FUN_1400020a8();
  }
  FUN_1460b38f8(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_1415d5167;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_1415d5167:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1415d517b FUN_1415d517b body=90 status=ok
// SIG undefined FUN_1415d517b(void)

void FUN_1415d517b(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar1 + 0x10) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1415d51d6 FUN_1415d51d6 body=789 status=ok
// SIG undefined FUN_1415d51d6(void)

undefined8 * FUN_1415d51d6(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab66bf0;
  FUN_1412cbb62(param_1 + 4);
  *param_1 = &PTR_FUN_14ab66aa0;
  param_1[4] = &PTR_FUN_14ab66b50;
  lVar1 = FUN_14092c0b8();
  param_1[6] = lVar1;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
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
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ca) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d2) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x282) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x52;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 8;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[0xcb] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  local_58 = FUN_147e257bc;
  local_50 = 0;
  FUN_14641aec8(local_48,param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d54ec FUN_1415d54ec body=1476 status=ok
// SIG undefined FUN_1415d54ec(void)

ulonglong FUN_1415d54ec(longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  undefined2 **_Str;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_118 [40];
  undefined2 *local_f0;
  uint local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined2 local_e0 [64];
  undefined2 *local_60;
  undefined2 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)(**(code **)(*param_4 + 0x20))(param_4);
  if (plVar4 == (longlong *)0x0) {
    uVar8 = 0;
    goto LAB_1415d5a81;
  }
  uVar7 = *(uint *)(param_1 + 1);
  _Str = (undefined2 **)(longlong)(int)uVar7;
  if (_Str != (undefined2 **)0x0) {
    if (param_3 == 2) {
LAB_1415d5627:
      local_e0[0] = 0xfeff;
      (**(code **)(*plVar4 + 0x170))(plVar4,local_e0,2);
      _Str = (undefined2 **)*param_1;
      uVar7 = 0;
      if (_Str != (undefined2 **)0x0) {
        uVar7 = *(uint *)(param_1 + 1);
        if ((int)uVar7 < 1) {
          if (uVar7 == 0xffffffff) {
            sVar5 = wcslen((wchar_t *)_Str);
            uVar7 = (uint)sVar5;
          }
        }
        else if (*(wchar_t *)((longlong)_Str + (ulonglong)(uVar7 - 1) * 2) == L'\0') {
          uVar7 = uVar7 - 1;
        }
      }
      (**(code **)(*plVar4 + 0x170))(plVar4,_Str,(longlong)(int)uVar7 * 2);
    }
    else {
      bVar18 = false;
      if (param_3 == 0) {
        lVar13 = 0;
        do {
          uVar1 = *(ushort *)(*param_1 + lVar13 * 2);
          bVar18 = 0x7f < uVar1;
          if (0x7f < uVar1) break;
          bVar17 = (longlong)_Str + -1 != lVar13;
          lVar13 = lVar13 + 1;
        } while (bVar17);
      }
      if (param_3 == 4) {
        puVar16 = (ushort *)*param_1;
        local_60 = (undefined2 *)0x0;
        if (puVar16 != (ushort *)0x0) {
          if ((int)uVar7 < 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = (uint)(puVar16[uVar7 - 1] == 0);
            if (puVar16[uVar7 - 1] == 0) {
              uVar7 = uVar7 - 1;
            }
            _Str = (undefined2 **)(ulonglong)uVar7;
          }
          local_e8 = 0;
          local_f0 = (undefined2 *)CONCAT44(local_f0._4_4_,0x7fffffff);
          uVar8 = (ulonglong)_Str & 0xffffffff;
          puVar12 = puVar16;
          do {
            iVar15 = (int)uVar8;
            if (iVar15 < 1) {
LAB_1415d594a:
              local_50 = local_e8;
              goto LAB_1415d594e;
            }
            uVar1 = *puVar12;
            uVar7 = (uint)uVar1;
            puVar10 = puVar12 + 1;
            uVar9 = iVar15 - 1;
            if ((uVar1 & 0xfc00) == 0xd800) {
              if (iVar15 == 1) {
                cVar3 = FUN_140024707(uVar7,&local_e8,&local_f0);
                local_50 = 0xffffffff;
                if (cVar3 != '\0') goto LAB_1415d594a;
                goto LAB_1415d594e;
              }
              if ((*puVar10 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)uVar1 * 0x400 + (uint)*puVar10 + 0xfca02400;
                puVar10 = puVar12 + 2;
                uVar9 = iVar15 - 2;
              }
            }
            cVar3 = FUN_140024707(uVar7,&local_e8,&local_f0);
            uVar8 = (ulonglong)uVar9;
            puVar12 = puVar10;
          } while (cVar3 != '\0');
          local_50 = 0xffffffff;
LAB_1415d594e:
          uVar7 = local_50 + uVar14;
          if (uVar7 < 0x81) {
            local_f0 = (undefined2 *)0x0;
          }
          else {
            FUN_1446efa72(&local_60,0,uVar7,1);
            local_f0 = local_60;
          }
          if (local_f0 == (undefined2 *)0x0) {
            local_f0 = local_e0;
          }
          iVar15 = uVar14 + (int)_Str;
          local_e8 = uVar7;
          local_58 = local_f0;
          do {
            if (iVar15 < 1) break;
            uVar1 = *puVar16;
            uVar7 = (uint)uVar1;
            puVar12 = puVar16 + 1;
            iVar2 = iVar15 + -1;
            if ((uVar1 & 0xfc00) == 0xd800) {
              if (iVar15 == 1) goto LAB_1415d5a21;
              if ((*puVar12 & 0xfc00) == 0xdc00) {
                uVar7 = (uint)uVar1 * 0x400 + (uint)*puVar12 + 0xfca02400;
                puVar12 = puVar16 + 2;
                iVar2 = iVar15 + -2;
              }
            }
            iVar15 = iVar2;
            puVar16 = puVar12;
            cVar3 = FUN_1400247af(uVar7,&local_f0,&local_e8);
          } while (cVar3 != '\0');
          goto LAB_1415d5a32;
        }
LAB_1415d5696:
        local_60 = (undefined2 *)0x0;
        local_58 = (undefined2 *)0x0;
        local_50 = 0;
        lVar13 = 0;
      }
      else if (param_3 == 3) {
        local_e2 = 0xbf;
        local_e4 = 0xbbef;
        (**(code **)(*plVar4 + 0x170))(plVar4,&local_e4,3);
        uVar7 = *(uint *)(param_1 + 1);
        puVar16 = (ushort *)*param_1;
        local_60 = (undefined2 *)0x0;
        if (puVar16 == (ushort *)0x0) goto LAB_1415d5696;
        if ((int)uVar7 < 1) {
          uVar14 = 0;
        }
        else {
          uVar14 = (uint)(puVar16[uVar7 - 1] == 0);
          if (puVar16[uVar7 - 1] == 0) {
            uVar7 = uVar7 - 1;
          }
        }
        local_e8 = 0;
        local_f0 = (undefined2 *)CONCAT44(local_f0._4_4_,0x7fffffff);
        puVar12 = puVar16;
        uVar9 = uVar7;
        do {
          if ((int)uVar9 < 1) {
LAB_1415d5855:
            local_50 = local_e8;
            goto LAB_1415d5859;
          }
          uVar1 = *puVar12;
          uVar6 = (uint)uVar1;
          puVar10 = puVar12 + 1;
          uVar11 = uVar9 - 1;
          if ((uVar1 & 0xfc00) == 0xd800) {
            if (uVar9 == 1) {
              cVar3 = FUN_140024707(uVar6,&local_e8,&local_f0);
              local_50 = 0xffffffff;
              if (cVar3 != '\0') goto LAB_1415d5855;
              goto LAB_1415d5859;
            }
            if ((*puVar10 & 0xfc00) == 0xdc00) {
              uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar10 + 0xfca02400;
              puVar10 = puVar12 + 2;
              uVar11 = uVar9 - 2;
            }
          }
          cVar3 = FUN_140024707(uVar6,&local_e8,&local_f0);
          puVar12 = puVar10;
          uVar9 = uVar11;
        } while (cVar3 != '\0');
        local_50 = 0xffffffff;
LAB_1415d5859:
        uVar9 = local_50 + uVar14;
        if (uVar9 < 0x81) {
          local_f0 = (undefined2 *)0x0;
        }
        else {
          FUN_1446efa72(&local_60,0,uVar9,1);
          local_f0 = local_60;
        }
        if (local_f0 == (undefined2 *)0x0) {
          local_f0 = local_e0;
        }
        iVar15 = uVar14 + uVar7;
        local_e8 = uVar9;
        local_58 = local_f0;
        do {
          if (iVar15 < 1) break;
          uVar1 = *puVar16;
          uVar7 = (uint)uVar1;
          puVar12 = puVar16 + 1;
          iVar2 = iVar15 + -1;
          if ((uVar1 & 0xfc00) == 0xd800) {
            if (iVar15 == 1) goto LAB_1415d5a21;
            if ((*puVar12 & 0xfc00) == 0xdc00) {
              uVar7 = (uint)uVar1 * 0x400 + (uint)*puVar12 + 0xfca02400;
              puVar12 = puVar16 + 2;
              iVar2 = iVar15 + -2;
            }
          }
          iVar15 = iVar2;
          cVar3 = FUN_1400247af(uVar7,&local_f0,&local_e8);
          puVar16 = puVar12;
        } while (cVar3 != '\0');
LAB_1415d5a32:
        _Str = &local_f0;
        lVar13 = (longlong)(int)local_50;
      }
      else {
        if (bVar18) goto LAB_1415d5627;
        lVar13 = *param_1;
        local_60 = (undefined2 *)0x0;
        if (lVar13 == 0) goto LAB_1415d5696;
        if ((int)uVar7 < 1) {
          bVar18 = false;
        }
        else {
          bVar18 = *(short *)(lVar13 + (ulonglong)(uVar7 - 1) * 2) == 0;
          if (bVar18) {
            uVar7 = uVar7 - 1;
          }
          _Str = (undefined2 **)(ulonglong)uVar7;
        }
        FUN_1449b853c(local_e0,lVar13,(ulonglong)_Str & 0xffffffff,bVar18);
        lVar13 = (longlong)(int)local_50;
      }
      (**(code **)(*plVar4 + 0x170))(plVar4,local_58,lVar13);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  (**(code **)(*plVar4 + 0x1f8))(plVar4);
  uVar8 = CONCAT71((int7)((ulonglong)_Str >> 8),(*(byte *)((longlong)plVar4 + 0x29) & 6) == 0);
  (**(code **)*plVar4)(plVar4,1);
LAB_1415d5a81:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
LAB_1415d5a21:
  FUN_1400247af(uVar7,&local_f0,&local_e8);
  goto LAB_1415d5a32;
}



// FUNCTION 1415d5ab2 FUN_1415d5ab2 body=287 status=ok
// SIG undefined FUN_1415d5ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d5ab2(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca896e8) {
    FUN_144b3d300(&DAT_14ca896e8);
    if (DAT_14ca896e8 == -1) {
      uVar1 = FUN_1404e1e84();
      FUN_1460d1290();
      FUN_140db5666(&DAT_14ca89640,0,&DAT_14ca895d8,L"FCopyRectPS",L"/Engine/Private/ScreenPass.usf"
                    ,L"CopyRectPS",3,1,FUN_1474196d0,FUN_147419676,&LAB_147419672,&LAB_14741966e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca89640 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21d8);
      _Init_thread_footer(&DAT_14ca896e8);
    }
  }
  return &DAT_14ca89640;
}



// FUNCTION 1415d5bd2 FUN_1415d5bd2 body=287 status=ok
// SIG undefined FUN_1415d5bd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d5bd2(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90c08) {
    FUN_144b3d300(&DAT_14ca90c08);
    if (DAT_14ca90c08 == -1) {
      uVar1 = FUN_141472624();
      FUN_1460d13e4();
      FUN_140db5666(&DAT_14ca90b60,0,&DAT_14ca90af8,L"TOneColorPixelShaderMRT",
                    L"/Engine/Private/OneColorShader.usf",L"MainPixelShaderMRT",3,0x80,FUN_147421ca2
                    ,FUN_147421c48,&LAB_1431f822e,&LAB_147421c44,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    uVar1);
      _DAT_14ca90b60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f829d);
      _Init_thread_footer(&DAT_14ca90c08);
    }
  }
  return &DAT_14ca90b60;
}



// FUNCTION 1415d5cf2 FUN_1415d5cf2 body=289 status=ok
// SIG undefined FUN_1415d5cf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d5cf2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13cd0) {
    FUN_144b3d300(&DAT_14ca13cd0);
    if (DAT_14ca13cd0 == -1) {
      FUN_141520a96();
      FUN_1460d2178();
      FUN_140db5666(&DAT_14ca13c28,0,&DAT_14ca13bc0,L"FEmitSceneStencilPS_DisableEdgeDetection",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",
                    L"EmitSceneStencilEdgeDetectionPS",3,1,FUN_14725134c,FUN_147251324,
                    &LAB_1462eeca4,&LAB_147251320,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca173e0)
      ;
      _DAT_14ca13c28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02c98);
      _Init_thread_footer(&DAT_14ca13cd0);
    }
  }
  return &DAT_14ca13c28;
}



// FUNCTION 1415d5e14 FUN_1415d5e14 body=289 status=ok
// SIG undefined FUN_1415d5e14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d5e14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13df8) {
    FUN_144b3d300(&DAT_14ca13df8);
    if (DAT_14ca13df8 == -1) {
      FUN_141520a96();
      FUN_1460d22cc();
      FUN_140db5666(&DAT_14ca13d50,0,&DAT_14ca13ce8,L"FEmitSceneStencilPS_DisableInkHighlight",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",
                    L"EmitSceneStencilInkHighlightPS",3,1,FUN_147251432,FUN_14725140a,&LAB_1462eecae
                    ,&LAB_147251406,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca173e0);
      _DAT_14ca13d50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02ca4);
      _Init_thread_footer(&DAT_14ca13df8);
    }
  }
  return &DAT_14ca13d50;
}



// FUNCTION 1415d5f36 FUN_1415d5f36 body=289 status=ok
// SIG undefined FUN_1415d5f36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d5f36(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13f20) {
    FUN_144b3d300(&DAT_14ca13f20);
    if (DAT_14ca13f20 == -1) {
      FUN_141520a96();
      FUN_1460d2420();
      FUN_140db5666(&DAT_14ca13e78,0,&DAT_14ca13e10,L"FEmitSceneStencilPS_SecondaryDecals",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",
                    L"EmitSceneStencilSecondaryDecalsPS",3,1,FUN_147251518,FUN_1472514f0,
                    &LAB_1462eecb8,&LAB_1472514ec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca173e0)
      ;
      _DAT_14ca13e78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02cb0);
      _Init_thread_footer(&DAT_14ca13f20);
    }
  }
  return &DAT_14ca13e78;
}



// FUNCTION 1415d6058 FUN_1415d6058 body=1373 status=ok
// SIG undefined FUN_1415d6058(void)

void FUN_1415d6058(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  void *pvVar13;
  size_t _Size;
  uint uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined4 local_1a0;
  int local_19c;
  void *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong *puStack_180;
  byte local_15e;
  byte local_94;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  puVar1 = (ulonglong *)param_2[1];
  piVar2 = (int *)*puVar1 + 1;
  if ((int *)puVar1[1] < piVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1b4,4);
    }
    else {
      FUN_14572512c(param_2,&local_1b4);
    }
  }
  else {
    local_1b4 = *(int *)*puVar1;
    *puVar1 = (ulonglong)piVar2;
  }
  local_1c0 = (longlong *)0x0;
  (**(code **)(*param_2 + 0x150))(param_2,&local_1c0);
  if (local_1c0 == (longlong *)0x0) goto LAB_1415d60e3;
  uVar8 = *(uint *)((longlong)local_1c0 + 0xc);
  local_188 = (void *)(ulonglong)uVar8;
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  uVar6 = *(uint *)(lVar15 + 0x10);
  if (*(uint *)(lVar15 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    uVar14 = DAT_14c964868 + 1;
    bVar17 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar17) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar14);
    }
    LOCK();
    uVar6 = *(uint *)(lVar15 + 0x10);
    bVar17 = uVar6 == 0;
    if (bVar17) {
      *(uint *)(lVar15 + 0x10) = uVar14;
      uVar6 = 0;
    }
    UNLOCK();
    uVar8 = (uint)local_188;
    if (bVar17) {
      uVar6 = uVar14;
    }
  }
  local_188._0_4_ = uVar8;
  local_188 = (void *)CONCAT44(uVar6,(uint)local_188);
  plVar9 = (longlong *)FUN_145d6a70c(param_1 + 0xe,uVar6 ^ (uint)local_188);
  plVar11 = local_1c0;
  if (local_1b4 != 0xb) goto LAB_1415d60e3;
  if ((char)plVar9[3] != '\x01') {
    plVar11 = plVar9 + 2;
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,plVar11,4);
      }
      else {
        FUN_14572512c(param_2,plVar11);
      }
    }
    else {
      *(int *)plVar11 = *piVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar16 = (undefined4 *)((longlong)plVar9 + 0x14);
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar16,4);
      }
      else {
        FUN_14572512c(param_2,puVar16);
      }
    }
    else {
      *puVar16 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    if ((0 < (int)*plVar11) &&
       (*(undefined1 *)(plVar9 + 3) = 1, *(int *)((longlong)plVar9 + 0xc) < (int)*plVar11)) {
      FUN_144893a1c(plVar9);
    }
    goto LAB_1415d60e3;
  }
  if (local_1c0 == (longlong *)0x0) {
LAB_1415d61cd:
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar10 = FUN_140ba0042();
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,uVar10);
    if (plVar11 == (longlong *)0x0) goto LAB_1415d61cd;
    uVar10 = FUN_140ba0042();
    plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
    if (plVar11 == plVar12) goto LAB_1415d61cd;
  }
  local_198 = (void *)0x0;
  uStack_190 = 0;
  local_19c = 0;
  puVar1 = (ulonglong *)param_2[1];
  piVar2 = (int *)*puVar1 + 1;
  if ((int *)puVar1[1] < piVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_19c,4);
    }
    else {
      FUN_14572512c(param_2,&local_19c);
    }
  }
  else {
    local_19c = *(int *)*puVar1;
    *puVar1 = (ulonglong)piVar2;
  }
  uStack_190 = CONCAT44(uStack_190._4_4_,local_19c);
  if (local_19c == 0) {
    pvVar13 = (void *)0x0;
    lVar15 = 0;
  }
  else {
    FUN_1447403be(&local_198,0);
    lVar15 = (longlong)local_19c;
    pvVar13 = local_198;
  }
  (**(code **)(*param_2 + 0x170))(param_2,pvVar13,lVar15);
  _Size = (size_t)(int)(uint)uStack_190;
  if (_Size != 0) {
    iVar7 = (int)plVar9[1];
    *(uint *)(plVar9 + 1) = iVar7 + (uint)uStack_190;
    if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar7) < (uint)uStack_190) {
      FUN_1447403be(plVar9,iVar7);
    }
    memcpy((void *)((longlong)iVar7 + *plVar9),local_198,_Size);
  }
  iVar7 = (int)plVar9[1];
  if (iVar7 == *(int *)((longlong)plVar9 + 0x14)) {
    *(undefined1 *)(plVar9 + 3) = 0;
    local_188 = (void *)0x0;
    puStack_180 = (ulonglong *)(ulonglong)*(uint *)(plVar9 + 2);
    if (*(uint *)(plVar9 + 2) == 0) {
      lVar15 = 0;
    }
    else {
      FUN_1447403be(&local_188,0);
      lVar15 = (longlong)(int)plVar9[2];
      iVar7 = *(int *)((longlong)plVar9 + 0x14);
    }
    pvVar13 = local_188;
    lVar4 = *plVar9;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = (longlong)iVar7;
    cVar5 = FUN_140aa9920(DAT_14c892f44,pvVar13,lVar15,lVar4);
    if (cVar5 != '\0') {
      FUN_1400ec3e6(plVar9,(int)plVar9[2]);
      uVar8 = *(uint *)(plVar9 + 2);
      lVar15 = plVar9[1];
      *(uint *)(plVar9 + 1) = (int)lVar15 + uVar8;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - (int)lVar15) < uVar8) {
        FUN_1447403be(plVar9);
        uVar8 = *(uint *)(plVar9 + 2);
      }
      memcpy((void *)*plVar9,local_188,(longlong)(int)uVar8);
    }
    if (local_188 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x40))(plVar12,plVar9);
    }
    *(undefined4 *)(plVar9 + 1) = 0;
    if (*(int *)((longlong)plVar9 + 0xc) != 0) {
      FUN_144893a1c(plVar9,0);
    }
    FUN_1449daf8c(&local_188,param_1,0);
    local_94 = local_94 | 0x10;
    local_1a0 = 0x2a;
    puVar3 = (undefined4 *)*puStack_180 + 1;
    if ((undefined4 *)puStack_180[1] < puVar3) {
      if ((local_15e & 2) == 0) {
        (**(code **)((longlong)local_188 + 0x170))(&local_188,&local_1a0,4);
      }
      else {
        FUN_14572512c(&local_188,&local_1a0);
      }
    }
    else {
      local_1a0 = *(undefined4 *)*puStack_180;
      *puStack_180 = (ulonglong)puVar3;
    }
    local_1a8 = (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_1403f2d54(&local_188);
    (**(code **)(*param_1 + 0x308))(param_1,local_1b0,&local_188,0);
    FUN_1449daebe(&local_188);
  }
  else if (*(int *)((longlong)plVar9 + 0x14) < iVar7) {
    *(undefined1 *)(plVar9 + 3) = 0;
    FUN_147a491c6(param_1[5]);
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1415d60e3:
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d65b6 FUN_1415d65b6 body=416 status=ok
// SIG undefined FUN_1415d65b6(void)

void FUN_1415d65b6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  local_30 = 0;
  (**(code **)(*param_2 + 0x150))(param_2);
  if (local_24 == 0x2a) {
    if (local_30 != 0) {
      uStack_34 = 0;
      local_38 = *(uint *)(local_30 + 0xc);
      if ((int)local_38 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar4 = *(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar4 = *(uint *)(lVar5 + 0x10);
        bVar7 = uVar4 == 0;
        if (bVar7) {
          *(uint *)(lVar5 + 0x10) = uVar6;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          uVar4 = uVar6;
        }
      }
      uStack_34 = uVar4;
      lVar5 = FUN_145d6a70c(param_1 + 0x70,uVar4 ^ local_38);
      *(undefined4 *)(lVar5 + 8) = 0;
      if (*(int *)(lVar5 + 0xc) != 0) {
        FUN_144893a1c(lVar5,0);
      }
      *(undefined4 *)(lVar5 + 0x10) = 0;
      *(undefined1 *)(lVar5 + 0x18) = 0;
    }
  }
  else if ((local_24 == 7) && (local_30 != 0)) {
    FUN_141407870(param_1);
    FUN_14656324a(param_1,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d6758 FUN_1415d6758 body=351 status=ok
// SIG undefined FUN_1415d6758(void)

void FUN_1415d6758(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14619e1b0();
  if (lVar4 != 0) {
    if ((longlong)*(int *)(param_1 + 0x398) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x390);
      lVar6 = (longlong)*(int *)(param_1 + 0x398) * 0x58;
      do {
        FUN_141486f2e(param_1,lVar4);
        lVar4 = lVar4 + 0x58;
        lVar6 = lVar6 + -0x58;
      } while (lVar6 != 0);
    }
    if (0 < (longlong)*(int *)(param_1 + 0x3a8)) {
      lVar4 = (longlong)*(int *)(param_1 + 0x3a8);
      do {
        lVar6 = (lVar4 + -1) * 0x10;
        local_40 = *(longlong *)(*(longlong *)(param_1 + 0x3a0) + lVar6);
        local_38 = *(longlong **)(*(longlong *)(param_1 + 0x3a0) + 8 + lVar6);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        if ((longlong)*(int *)(param_1 + 0x398) != 0) {
          plVar5 = *(longlong **)(param_1 + 0x390);
          lVar6 = (longlong)*(int *)(param_1 + 0x398) * 0x58;
          do {
            if ((local_40 != 0) && (*(longlong *)(local_40 + 8) == *plVar5)) {
              if ((*(double *)(local_40 + 0x10) == (double)plVar5[1]) &&
                 (!NAN(*(double *)(local_40 + 0x10)) && !NAN((double)plVar5[1]))) {
                if ((*(double *)(local_40 + 0x18) == (double)plVar5[2]) &&
                   (!NAN(*(double *)(local_40 + 0x18)) && !NAN((double)plVar5[2]))) {
                  if ((*(double *)(local_40 + 0x20) == (double)plVar5[3]) &&
                     (!NAN(*(double *)(local_40 + 0x20)) && !NAN((double)plVar5[3]))) {
                    if (plVar5 != (longlong *)0x0) goto LAB_1415d6864;
                    break;
                  }
                }
              }
            }
            plVar5 = plVar5 + 0xb;
            lVar6 = lVar6 + -0x58;
          } while (lVar6 != 0);
        }
        FUN_14619e128(param_1,&local_40);
LAB_1415d6864:
        plVar5 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        bVar3 = 1 < lVar4;
        lVar4 = lVar4 + -1;
      } while (bVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d68b8 FUN_1415d68b8 body=622 status=ok
// SIG undefined FUN_1415d68b8(void)

void FUN_1415d68b8(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_578 [32];
  undefined8 local_558;
  undefined8 uStack_550;
  wchar_t *local_548;
  int local_540 [2];
  char *local_538;
  undefined4 local_530;
  char *local_528;
  undefined4 local_520;
  char *local_518;
  undefined4 local_510;
  char *local_508;
  undefined4 local_500;
  char *local_4f8;
  undefined4 local_4f0;
  char *local_4e8;
  undefined4 local_4e0;
  char *local_4d8;
  undefined4 local_4d0;
  char *local_4c8;
  undefined4 local_4c0;
  char *local_4b8;
  undefined4 local_4b0;
  undefined1 *local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_498;
  char local_490;
  undefined1 local_488 [1035];
  undefined1 local_7d [5];
  longlong local_78 [7];
  
  local_78[3] = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_78[0] = *(longlong *)(param_2 + 4);
  local_78[1] = *(undefined8 *)(param_2 + 0xc);
  local_78[2] = *(undefined8 *)(param_2 + 0x14);
  lVar4 = 0;
  do {
    if (*(wchar_t **)((longlong)local_78 + lVar4) != (wchar_t *)0x0) {
      local_490 = '\0';
      local_498 = local_7d;
      local_548 = *(wchar_t **)((longlong)local_78 + lVar4);
      local_4a8 = local_488;
      local_4a0 = local_488;
      FUN_14001b87a(&local_548,&local_4a8);
      local_548 = L"/Disabled";
      local_540[0] = 1;
      local_538 = "Script/";
      local_530 = 7;
      local_528 = "Temp/";
      local_520 = 5;
      local_518 = "Extra/";
      local_510 = 6;
      local_508 = "Memory/";
      local_500 = 7;
      local_4f8 = "Config/";
      local_4f0 = 7;
      local_4e8 = "Game/";
      local_4e0 = 5;
      local_4d8 = "Engine/";
      local_4d0 = 7;
      local_4c8 = "Transient/";
      local_4c0 = 10;
      local_4b8 = "Niagara/";
      local_4b0 = 8;
      lVar5 = 8;
      do {
        iVar1 = *(int *)((longlong)local_540 + lVar5 + -8);
        if ((-1 < (longlong)iVar1) && (iVar1 < (int)local_4a0 - (int)local_4a8)) {
          if (iVar1 != 0) {
            iVar3 = FUN_14018695a(*(undefined8 *)((longlong)&uStack_550 + lVar5),local_4a8,
                                  (longlong)iVar1);
            if (iVar3 != 0) goto LAB_1415d6a90;
          }
          local_558 = 0;
          uStack_550 = 0;
          FUN_1415d6b28(&local_4a8,0,iVar1,&local_558);
        }
LAB_1415d6a90:
        puVar2 = local_4a8;
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != 0xa8);
      FUN_1415d6bee(param_1 + 0x40,local_4a8,(int)local_4a0 - (int)local_4a8);
      if (local_490 == '\x01') {
        FUN_1400020a8(puVar2);
      }
    }
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x18) {
      if ((local_78[3] ^ (ulonglong)auStack_578) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1415d6b28 FUN_1415d6b28 body=197 status=ok
// SIG undefined FUN_1415d6b28(void)

void FUN_1415d6b28(longlong *param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  
  uVar4 = *(int *)(param_4 + 1) - param_3;
  if ((int)uVar4 < 0) {
    puVar5 = (undefined1 *)(param_1[1] + (longlong)(int)uVar4);
    param_1[1] = (longlong)puVar5;
    puVar6 = (undefined1 *)((longlong)param_2 + *param_1);
    if (puVar6 != puVar5) {
      do {
        *puVar6 = puVar6[-(longlong)(int)uVar4];
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar5);
    }
  }
  else {
    if (uVar4 == 0) goto LAB_1415d6b71;
    lVar3 = param_1[1];
    uVar7 = (ulonglong)uVar4;
    if ((ulonglong)param_1[2] <= lVar3 + uVar7) {
      FUN_1402134d6(param_1,uVar7);
      lVar3 = param_1[1];
    }
    puVar5 = (undefined1 *)(lVar3 + uVar7);
    param_1[1] = (longlong)puVar5;
    lVar2 = *param_1;
    iVar1 = *(int *)(param_4 + 1);
    while (puVar5 != (undefined1 *)((longlong)iVar1 + param_2 + lVar2)) {
      puVar6 = (undefined1 *)(lVar3 + -1);
      puVar5 = (undefined1 *)(lVar3 + uVar7 + -1);
      lVar3 = lVar3 + -1;
      *puVar5 = *puVar6;
    }
  }
  param_3 = *(int *)(param_4 + 1);
LAB_1415d6b71:
  if (param_3 == 0) {
    return;
  }
  memcpy((void *)((longlong)param_2 + *param_1),(void *)*param_4,(longlong)param_3);
  return;
}



// FUNCTION 1415d6bee FUN_1415d6bee body=738 status=ok
// SIG undefined FUN_1415d6bee(void)

void FUN_1415d6bee(uint *param_1,byte *param_2,uint param_3)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  ushort uVar22;
  byte bVar23;
  ushort uVar24;
  byte bVar25;
  byte bVar26;
  ushort uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  
  uVar24 = (ushort)param_3;
  bVar2 = 0;
  bVar3 = 0;
  bVar32 = 0;
  bVar4 = 0;
  bVar11 = 0;
  bVar29 = 0;
  bVar5 = 0;
  bVar21 = 0;
  bVar25 = 0;
  bVar20 = 0;
  bVar23 = 0;
  bVar33 = 0;
  bVar31 = 0;
  bVar28 = 0;
  bVar30 = 0;
  bVar19 = 0;
  bVar16 = 0;
  bVar15 = 0;
  bVar14 = 0;
  bVar13 = 0;
  bVar12 = 0;
  bVar26 = 0;
  switch(param_3 & 0xffff) {
  default:
    bVar2 = param_2[7];
  case 7:
    bVar3 = param_2[6];
  case 6:
    bVar4 = param_2[5];
    bVar32 = bVar3;
  case 5:
    bVar5 = param_2[4];
    bVar11 = bVar32;
    bVar29 = bVar4;
  case 4:
    bVar23 = param_2[3];
    bVar21 = bVar11;
    bVar25 = bVar29;
    bVar20 = bVar5;
  case 3:
    bVar19 = param_2[2];
    bVar33 = bVar21;
    bVar31 = bVar25;
    bVar28 = bVar20;
    bVar30 = bVar23;
  case 2:
    bVar26 = param_2[1];
    bVar16 = bVar33;
    bVar15 = bVar31;
    bVar14 = bVar28;
    bVar13 = bVar30;
    bVar12 = bVar19;
  case 1:
    uVar22 = (ushort)(uVar24 != 7) << 3 | 0xfff3;
    if (uVar24 < 7) {
      uVar22 = 0xffff;
    }
    uVar6 = (ushort)(uVar24 != 6) << 5 | 0xffcf;
    if (uVar24 < 6) {
      uVar6 = 0xffff;
    }
    uVar27 = 0xffff;
    uVar7 = (ushort)(uVar24 != 5) << 7 | 0xff3f;
    if (uVar24 < 5) {
      uVar7 = uVar27;
    }
    uVar8 = (ushort)(uVar24 != 4) << 9 | 0xfcff;
    if (uVar24 < 4) {
      uVar8 = uVar27;
    }
    uVar9 = (ushort)(uVar24 != 3) << 0xb | 0xf3ff;
    if (uVar24 < 3) {
      uVar9 = uVar27;
    }
    uVar10 = (ushort)(uVar24 != 2) << 0xd | 0xcfff;
    if (uVar24 < 2) {
      uVar10 = uVar27;
    }
    bVar3 = *param_2;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar3 * 2 + 0x202);
    *puVar1 = *puVar1 & (ushort)(uVar24 < 2) * -0x8000 + 0xbfff;
    bVar26 = bVar3 * '\b' ^ bVar26;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar26 * 2 + 0x202);
    *puVar1 = *puVar1 & uVar10;
    bVar12 = bVar26 * '\b' ^ bVar12;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar12 * 2 + 0x202);
    *puVar1 = *puVar1 & uVar9;
    bVar13 = bVar12 * '\b' ^ bVar13;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar13 * 2 + 0x202);
    *puVar1 = *puVar1 & uVar8;
    bVar14 = bVar13 * '\b' ^ bVar14;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar14 * 2 + 0x202);
    *puVar1 = *puVar1 & uVar7;
    bVar15 = bVar14 * '\b' ^ bVar15;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar15 * 2 + 0x202);
    *puVar1 = *puVar1 & uVar6;
    bVar16 = bVar15 * '\b' ^ bVar16;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)bVar16 * 2 + 0x202);
    *puVar1 = *puVar1 & uVar22;
    puVar1 = (ushort *)((longlong)param_1 + (ulonglong)(byte)(bVar16 * '\b' ^ bVar2) * 2 + 0x202);
    *puVar1 = *puVar1 & (-(ushort)(uVar24 < 8) | 0xfffc);
    uVar17 = *param_1;
    if (uVar24 <= (ushort)*param_1) {
      uVar17 = param_3;
    }
    *(short *)param_1 = (short)uVar17;
    if ((short)uVar17 != 0) {
      uVar18 = 0;
      do {
        bVar2 = (byte)uVar18 & 0x1f;
        puVar1 = (ushort *)((longlong)param_1 + (ulonglong)param_2[uVar18] * 2 + 2);
        *puVar1 = *puVar1 & ((ushort)(-2 << bVar2) | (ushort)(0xfffffffe >> 0x20 - bVar2));
        uVar18 = uVar18 + 1;
      } while ((uVar17 & 0xffff) != uVar18);
    }
    return;
  }
}



// FUNCTION 1415d6ed0 FUN_1415d6ed0 body=607 status=ok
// SIG undefined FUN_1415d6ed0(void)

void FUN_1415d6ed0(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,7);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar5 = (ulonglong)uVar4 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_1415d6f21;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1415d6f21:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar6 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar6 + 0x1e) == param_1[1]) {
        if ((longlong)puVar1 + lVar6 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar6)) {
            *(int *)(lVar5 + 4 + lVar7 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar6) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            lVar5 = *param_3;
            uVar4 = *(ushort *)(param_2 + 0xc);
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x20;
    } while ((ulonglong)uVar4 << 5 != lVar6);
    if (uVar4 != 0) {
      uVar2 = (uint)uVar4;
      lVar6 = 0;
      do {
        if (*(short *)((longlong)puVar1 + lVar6 + 0x1e) == param_1[2]) {
          if ((longlong)puVar1 + lVar6 != 0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar6)) {
              *(int *)(lVar5 + 8 + lVar7 * 4) =
                   (int)*(ulonglong *)((longlong)puVar1 + lVar6) -
                   (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        lVar6 = lVar6 + 0x20;
      } while ((ulonglong)uVar4 << 5 != lVar6);
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[3]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20)
              ;
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[4]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar5 + 0x10 + lVar7 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
      puVar3 = puVar1;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == param_1[5]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
              *(int *)(lVar5 + 0x14 + lVar7 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
              uVar2 = (uint)*(ushort *)(param_2 + 0xc);
              if (*(ushort *)(param_2 + 0xc) == 0) {
                return;
              }
              lVar5 = *param_3;
              puVar1 = *(ulonglong **)(param_2 + 0x28);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
      } while (puVar3 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
      puVar3 = (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1);
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[6]) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
            return;
          }
          *(int *)(lVar5 + 0x18 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
          return;
        }
        puVar1 = puVar1 + 4;
      } while (puVar1 != puVar3);
    }
  }
  return;
}



// FUNCTION 1415d712f FUN_1415d712f body=232 status=ok
// SIG undefined FUN_1415d712f(void)

void FUN_1415d712f(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [136];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  DAT_14c872d28 = (longlong *)FUN_142796e20();
  FUN_1405d5a96(local_a0);
  FUN_1416323f2(DAT_14c872d28);
  cVar1 = (**(code **)(*DAT_14c872d28 + 0xb8))();
  plVar3 = DAT_14c872d28;
  plVar2 = DAT_14c872d28;
  if (cVar1 == '\0') {
    plVar2 = malloc(0x38);
    *plVar2 = (longlong)&PTR_FUN_149e16c60;
    plVar2[1] = (longlong)plVar3;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plVar2 + 2));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar2 + 2),4000);
  }
  DAT_14c872d28 = plVar2;
  plVar3 = malloc(0x590);
  FUN_1416421a6(plVar3,plVar2);
  DAT_14c872d28 = plVar3;
  (**(code **)(*plVar3 + 0xd0))(plVar3);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d7218 FUN_1415d7218 body=278 status=ok
// SIG undefined FUN_1415d7218(void)

void FUN_1415d7218(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4dc720;
  param_1[6] = &PTR_FUN_14b4dca58;
  plVar3 = (longlong *)param_1[0x2a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x28];
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
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145e37dba(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_143f12e52(param_1 + 0x13);
  FUN_1456d172d(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14b4dfb18;
  if (param_1[7] != 0) {
    FUN_1411ebbe4();
    param_1[7] = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1415d732e FUN_1415d732e body=143 status=ok
// SIG undefined FUN_1415d732e(void)

void FUN_1415d732e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  void *_Src;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (1 < (int)uVar1) {
    if ((undefined8 *)(param_1 + 0x48) != param_2) {
      _Src = (void *)*param_2;
      *(uint *)(param_1 + 0x50) = uVar1;
      FUN_1446dd670((undefined8 *)(param_1 + 0x48),(ulonglong)uVar1,*(undefined4 *)(param_1 + 0x54))
      ;
      memcpy(*(void **)(param_1 + 0x48),_Src,(ulonglong)uVar1 * 2);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    FUN_143f46faa(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 4;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001415d7375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))
              (plVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30),param_1 + 0x38,0);
    return;
  }
  return;
}



// FUNCTION 1415d73be FUN_1415d73be body=278 status=ok
// SIG undefined FUN_1415d73be(void)

void FUN_1415d73be(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 != 0) && ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8)) &&
      (iVar1 = FUN_14487fd02(param_2), iVar1 != 3)) &&
     ((*(char *)(param_1 + 0xb0) != '\0' && (*(char *)(param_1 + 0xb0) != '\t')))) {
    FUN_148d7ffd0(param_1 + 0x148);
    local_2c = 0;
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
    local_2c = iVar1;
    FUN_145a5d306(param_1 + 0x148);
    FUN_1441aaf86(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d74d6 FUN_1415d74d6 body=313 status=ok
// SIG undefined FUN_1415d74d6(void)

ulonglong FUN_1415d74d6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
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
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1417de738;
      local_20 = &LAB_145893408;
      local_28 = &LAB_1458cbbd2;
      local_38 = &LAB_147ba21f1;
      local_40 = &LAB_1463e9233;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) &&
        (lVar1 = *(longlong *)(param_2 + 0x78), lVar1 != 0)) && (*(longlong *)(lVar1 + 0x80) != 0))
    {
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(param_2 + 0x2b0)) ^ 1;
      goto LAB_1415d754b;
    }
  }
  uVar2 = 0;
LAB_1415d754b:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d7610 FUN_1415d7610 body=165 status=ok
// SIG undefined FUN_1415d7610(void)

undefined4 * FUN_1415d7610(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144bfc2c0(&DAT_14c6e4920,&local_1c);
  if (-1 < local_1c) {
    FUN_144bfc2c0(&DAT_14c6e4990,&local_20);
    if (-1 < local_20) {
      FUN_144bfc2c0(&DAT_14c6e4958,&local_24);
      if (-1 < local_24) {
        FUN_144bfc2c0(&DAT_14c6e49c8,&local_28);
        uVar1 = 0;
        if (-1 < local_28) goto LAB_1415d7693;
      }
    }
  }
  uVar1 = 0x80040200;
LAB_1415d7693:
  *param_1 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d76b6 FUN_1415d76b6 body=228 status=ok
// SIG undefined FUN_1415d76b6(void)

longlong FUN_1415d76b6(void)

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
  if (DAT_14cc285c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14980b55f;
    local_40 = &LAB_146247fcf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x158;
    FUN_14081cfa3(L"/Script/GbxWeatherOcclusion",L"GbxWeatherOcclusionSettings",&DAT_14cc285c0,
                  &DAT_14980b55e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc285c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d779c FUN_1415d779c body=581 status=ok
// SIG undefined FUN_1415d779c(void)

void FUN_1415d779c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (((*(longlong *)(lVar3 + 0x200) == 0) || (*(longlong *)(lVar3 + 0x208) == 0)) ||
     (*(int *)(*(longlong *)(lVar3 + 0x208) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b9dcbd0;
    local_58[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar9;
    puVar5[4] = FUN_1460d8630;
    *(undefined4 *)(puVar5 + 5) = 0;
    local_68 = 0;
    FUN_1405f67fc(uVar6,&local_48,&local_58,L"UOakTrackerObjectManager.PopulateTrackerData");
    *(undefined8 *)(lVar3 + 0x200) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x208);
    *(longlong **)(lVar3 + 0x208) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
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
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_1415d7953;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1415d7953:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d79e2 FUN_1415d79e2 body=158 status=ok
// SIG undefined FUN_1415d79e2(void)

undefined8 * FUN_1415d79e2(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a46bfe0;
  *(undefined2 *)(param_1 + 10) = 0x404;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  memset(param_1 + 0xe,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  return param_1;
}



// FUNCTION 1415d7a80 FUN_1415d7a80 body=86 status=ok
// SIG undefined FUN_1415d7a80(void)

void FUN_1415d7a80(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 < param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1) < (ulonglong)(param_2 - lVar1)) {
      FUN_14112c458();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < lVar1) && (*(longlong *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1467af034();
      return;
    }
  }
  return;
}



// FUNCTION 1415d7ad8 FUN_1415d7ad8 body=648 status=ok
// SIG undefined FUN_1415d7ad8(void)

ulonglong FUN_1415d7ad8(longlong param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  DWORD DVar3;
  char cVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  longlong lVar6;
  LPVOID lpTlsValue;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined **local_f8 [5];
  byte local_cf;
  longlong *local_a0;
  longlong local_80;
  longlong local_60;
  longlong local_48;
  undefined1 local_31;
  uint local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_30 = 0x13;
  uStack_2c = uStack_2c & 0xffffff00;
  FUN_145bf8e88();
  if (param_4 != (uint *)0x0) {
    *param_4 = local_30;
  }
  local_108 = 2;
  uVar7 = 0;
  FUN_145c78a6c(&local_31,0,0,0);
  if (3 < (int)local_30) {
    if (local_30 < 8) {
      FUN_147011c54(local_f8,param_2);
      FUN_147011cc8(param_1,local_f8,&local_30,param_3);
      local_f8[0] = &PTR_FUN_149fcb0a0;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      local_f8[0] = &PTR__purecall_149e35f70;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
    }
    else {
      FUN_14614a106(local_f8,param_2,*(undefined4 *)(param_3 + 4),CONCAT44(uStack_2c,local_30));
      if ((local_cf & 2) != 0) {
        FUN_145a4210a(local_f8);
        uVar7 = 0;
        goto LAB_1415d7c98;
      }
      FUN_1407ddf1a(param_1,local_f8,&local_30,param_3);
      lVar2 = local_48;
      if (local_48 != 0) {
        do {
          do {
            lVar6 = lVar2;
            lVar2 = 0;
          } while (lVar6 == 0);
          plVar1 = *(longlong **)(lVar6 + 0x70);
          cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
          lVar2 = local_48;
        } while (cVar4 == '\0');
      }
      FUN_1456cff4a(param_1 + 0x270,local_f8,param_3);
      FUN_145a4210a(local_f8);
    }
    uVar7 = CONCAT71((int7)((ulonglong)local_f8 >> 8),(*(byte *)(param_2 + 0x29) & 2) == 0);
  }
LAB_1415d7c98:
  dwTlsIndex = DAT_14c75ebfc;
  if (DAT_14c75ebfc == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar8 = DAT_14c75ebfc != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar8) {
      DVar5 = DAT_14c75ebfc;
      DVar3 = DAT_14c75ebfc;
    }
    DAT_14c75ebfc = DVar3;
    UNLOCK();
    if (bVar8) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_146271634(local_f8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  *(int *)((longlong)lpTlsValue + 0x18) = *(int *)((longlong)lpTlsValue + 0x18) + -1;
  FUN_145a9f146((longlong)lpTlsValue + 0x10);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1415d7d62 FUN_1415d7d62 body=180 status=ok
// SIG undefined FUN_1415d7d62(void)

undefined8 * FUN_1415d7d62(undefined8 *param_1)

{
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf5) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  memset(param_1 + 6,0,0x91);
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 1415d7e16 FUN_1415d7e16 body=282 status=ok
// SIG undefined FUN_1415d7e16(void)

void FUN_1415d7e16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7ade90;
  FUN_1447a1747(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1415d7f30 FUN_1415d7f30 body=10 status=ok
// SIG undefined FUN_1415d7f30(void)

void FUN_1415d7f30(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415d7f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 1415d7f3a FUN_1415d7f3a body=159 status=ok
// SIG undefined FUN_1415d7f3a(void)

void FUN_1415d7f3a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  
  *param_1 = *param_2;
  plVar4 = (longlong *)param_2[1];
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[1];
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    param_1[1] = plVar4;
  }
  puVar2 = param_1 + 2;
  if (puVar2 != param_3) {
    iVar3 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_1 + 3) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415d7fda FUN_1415d7fda body=226 status=ok
// SIG undefined FUN_1415d7fda(void)

longlong * FUN_1415d7fda(longlong *param_1)

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
  pcVar13 = FUN_1462f1ac0;
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



// FUNCTION 1415d80be FUN_1415d80be body=199 status=ok
// SIG undefined FUN_1415d80be(void)

void FUN_1415d80be(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x170) != 0)) {
    lVar3 = FUN_140425b9a();
    lVar2 = *(longlong *)(lVar2 + 0x170);
    if (((lVar2 != 0) &&
        (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x3f0) != 0)))) {
      lVar3 = FUN_14030d660();
      lVar2 = *(longlong *)(lVar2 + 0x3f0);
      if ((lVar2 != 0) &&
         ((((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
               lVar3 + 0x30 && (*(char *)(lVar2 + 0x5f5) == '\x01')) &&
             (*(longlong *)(param_1 + 0xf40) != 0)))))) &&
          (*(char *)(*(longlong *)(param_1 + 0xf40) + 0x73eb) == '\x01')))) {
        FUN_1440ac134();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415d8186 FUN_1415d8186 body=121 status=ok
// SIG undefined FUN_1415d8186(void)

void FUN_1415d8186(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)param_2 & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar2 + uVar4 * 4);
    if (iVar1 != -1) {
      piVar3 = (int *)((longlong)plVar2 + uVar4 * 4);
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_147bf2c16(param_1);
        }
        else {
          piVar3 = (int *)(*param_1 + (longlong)iVar1 * 0x10 + 8);
        }
        iVar1 = *piVar3;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1415d8200 FUN_1415d8200 body=1105 status=ok
// SIG undefined FUN_1415d8200(void)

longlong * FUN_1415d8200(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  lVar14 = *param_3;
  iVar9 = *(int *)(lVar14 + 0x80);
  if (iVar9 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9 + 1);
  }
  if (-1 < iVar9) {
    FUN_1461075e0();
    lVar14 = *param_3;
  }
  uVar7 = uStack_50;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar18 = (longlong)(int)uStack_50;
  uVar8 = (int)uStack_50 + 1;
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
  local_68 = param_3;
  if (uStack_50._4_4_ < uVar8) {
    FUN_1417b93bc(&local_58,uVar7 & 0xffffffff);
  }
  *(longlong *)(local_58 + lVar18 * 0x10) = lVar14;
  *(longlong *)(local_58 + 8 + lVar18 * 0x10) = lVar3;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)uStack_50) {
    lVar14 = 0;
    do {
      lVar3 = *(longlong *)(local_58 + lVar14 * 0x10);
      local_78 = *(longlong **)(local_58 + 8 + lVar14 * 0x10);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
      }
      local_70 = lVar14;
      if (lVar3 != 0) {
        FUN_146107582(&local_58,lVar3 + 0x78);
        if ((longlong)*(int *)(lVar3 + 0x70) != 0) {
          puVar16 = *(undefined8 **)(lVar3 + 0x68);
          local_60 = puVar16 + (longlong)*(int *)(lVar3 + 0x70) * 4;
          do {
            iVar9 = *(int *)(puVar16 + 3);
            uVar8 = 0;
            iVar12 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar12 = 0;
            }
            if (0 < iVar12) {
              puVar11 = &DAT_149dfb77a;
              if (iVar9 != 0) {
                puVar11 = (undefined2 *)puVar16[2];
              }
              lVar14 = 0;
              do {
                uVar13 = ((uint)(0x19 < (ushort)puVar11[lVar14] - 0x61) * 0x20 +
                         (uint)(ushort)puVar11[lVar14]) - 0x20;
                uVar8 = uVar8 >> 8 ^
                        *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar13) & 0xff) * 4);
                uVar8 = uVar8 >> 8 ^
                        *(uint *)(&DAT_14c75d150 +
                                 (ulonglong)(uVar8 & 0xff ^ uVar13 >> 8 & 0xff) * 4);
                lVar14 = lVar14 + 1;
              } while (iVar12 != (int)lVar14);
            }
            uVar4 = *puVar16;
            uVar5 = puVar16[1];
            uVar13 = (uint)((ulonglong)uVar5 >> 0x10);
            uVar15 = (uint)uVar5 & 0xffff;
            uVar10 = (uint)((ulonglong)uVar4 >> 0x10);
            uVar17 = (uint)uVar4 & 0xffff;
            uVar10 = ((uint)uVar4 << 0x10 | uVar17) + (int)((ulonglong)uVar4 >> 0x20) +
                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar17 >> 4);
            uVar10 = (uVar10 >> 2) + 0x9e3779b9 +
                     ((uint)uVar5 << 0x10 | uVar15) + (int)((ulonglong)uVar5 >> 0x20) +
                     (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar15 >> 4) + uVar10 * 0x40 ^ uVar10;
            uVar15 = uVar10 >> 0xd ^ -uVar10;
            uVar13 = uVar15 << 8 ^ (-0x61c88647 - uVar10) - uVar15;
            uVar17 = uVar13 >> 0xd ^ (uVar10 - uVar15) - uVar13;
            uVar15 = uVar17 >> 0xc ^ (uVar15 - uVar13) - uVar17;
            uVar10 = uVar15 << 0x10 ^ (uVar13 - uVar17) - uVar15;
            uVar13 = uVar10 >> 5 ^ (uVar17 - uVar15) - uVar10;
            uVar15 = uVar13 >> 3 ^ (uVar15 - uVar10) - uVar13;
            uVar10 = uVar15 << 10 ^ (uVar10 - uVar13) - uVar15;
            uVar13 = uVar8 >> 0xd ^ (uVar10 >> 0xf ^ uVar13 - (uVar15 + uVar10)) - uVar8;
            uVar10 = uVar13 << 8 ^ (-0x61c88647 - uVar8) - uVar13;
            uVar15 = uVar10 >> 0xd ^ (uVar8 - uVar13) - uVar10;
            uVar8 = uVar15 >> 0xc ^ (uVar13 - uVar10) - uVar15;
            uVar13 = uVar8 << 0x10 ^ (uVar10 - uVar15) - uVar8;
            uVar15 = uVar13 >> 5 ^ (uVar15 - uVar8) - uVar13;
            uVar10 = uVar15 >> 3 ^ (uVar8 - uVar13) - uVar15;
            uVar8 = uVar10 << 10 ^ (uVar13 - uVar15) - uVar10;
            iVar9 = FUN_1448b08d8((longlong *)(param_1 + 0x10),
                                  uVar8 >> 0xf ^ uVar15 - (uVar10 + uVar8),puVar16);
            if ((((iVar9 != -1) &&
                 (lVar14 = (longlong)iVar9 * 0x30 + *(longlong *)(param_1 + 0x10), lVar14 != 0)) &&
                (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0)) &&
               (*(int *)(lVar14 + 0x28) != -1)) {
              iVar9 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
                FUN_1446f48e2(param_2,iVar9);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar14 + 0x28);
            }
            puVar16 = puVar16 + 4;
          } while (puVar16 != local_60);
        }
      }
      plVar6 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      lVar14 = local_70 + 1;
    } while (lVar14 < (int)uStack_50);
  }
  FUN_14068cddc(local_58);
  plVar6 = local_68;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)plVar6[1];
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415d8652 FUN_1415d8652 body=23 status=ok
// SIG undefined FUN_1415d8652(void)

bool FUN_1415d8652(int param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 == 3) && (param_2 != 0)) {
    bVar1 = (*(byte *)(param_2 + 0x155) & 0x20) == 0;
  }
  return bVar1;
}



// FUNCTION 1415d866a FUN_1415d866a body=311 status=ok
// SIG undefined FUN_1415d866a(void)

void FUN_1415d866a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140457ffc(&DAT_14cb7bad8,param_1);
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_14027ab42(&local_38,uVar5);
  if (plStack_30 != (longlong *)0x0) {
    iVar4 = (int)plStack_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plStack_30[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plStack_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = plStack_30;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
    lVar6 = local_38;
    if (plVar7 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_140457ffc(local_38 + 0x28,param_1);
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        FUN_1404e8c3a(lVar6,&local_38);
        if ((longlong)(int)plStack_30 != 0) {
          lVar8 = (longlong)(int)plStack_30 << 4;
          lVar6 = local_38;
          do {
            FUN_140f8e940(param_1,lVar6,1);
            lVar6 = lVar6 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        if (local_38 != 0) {
          FUN_1400020a8(local_38);
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d87a2 FUN_1415d87a2 body=510 status=ok
// SIG undefined FUN_1415d87a2(void)

void FUN_1415d87a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
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
  FUN_146349d6c(&local_48,param_1 + 0xf8);
  FUN_146349d6c(&local_48,param_1 + 0x200);
  FUN_146349d6c(&local_48,param_1 + 0x308);
  FUN_146349d6c(&local_48,param_1 + 0x410);
  FUN_140f937a0(&local_48,param_1 + 0x518);
  FUN_140f937a0(&local_48,param_1 + 0x628);
  FUN_146349ec4(&local_48,param_1 + 0x738);
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
  plVar1 = local_50;
  if (local_50 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 == (longlong *)0x0) goto LAB_1415d8951;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_1415d891b:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1415d8951;
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
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_58;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (local_50 != plVar4) {
      *(longlong **)(param_1 + 0xe8) = local_50;
      if (plVar4 == (longlong *)0x0) goto LAB_1415d8951;
      goto LAB_1415d891b;
    }
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1415d8951;
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1415d8951:
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_48);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d89a2 FUN_1415d89a2 body=616 status=ok
// SIG undefined FUN_1415d89a2(void)

longlong FUN_1415d89a2(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_d8 [40];
  undefined4 *local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  undefined4 local_50 [2];
  undefined2 *local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 8) != '\0') goto LAB_1415d8a19;
  lVar1 = FUN_140885e8c();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x68) == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(lVar1 + 0x60) - 2U < 0x7fffffff;
    }
    *(bool *)(param_1 + 9) = bVar5;
    pvVar3 = DAT_14cbf4728;
    iVar2 = *(int *)(lVar1 + 0x80);
    if ((iVar2 - 2U < 0x7fffffff) &&
       ((bVar5 != false || (*(int *)(lVar1 + 0x40) - 2U < 0x7fffffff)))) {
      local_70 = (void *)0x0;
      lVar4 = (longlong)DAT_14cbf4730;
      local_68 = DAT_14cbf4730;
      if (lVar4 == 0) {
        local_64 = 0;
        pvVar3 = *(void **)(lVar1 + 0x78);
LAB_1415d8ace:
        local_80 = (void *)0x0;
        local_78 = iVar2;
        FUN_1446dd670(&local_80,iVar2,0);
        memcpy(local_80,pvVar3,(longlong)iVar2 * 2);
      }
      else {
        FUN_1446dd670(&local_70,DAT_14cbf4730,0);
        memcpy(local_70,pvVar3,lVar4 * 2);
        iVar2 = *(int *)(lVar1 + 0x80);
        local_80 = (void *)0x0;
        pvVar3 = *(void **)(lVar1 + 0x78);
        if (iVar2 != 0) goto LAB_1415d8ace;
        local_74 = 0;
        local_78 = iVar2;
      }
      FUN_145c41f3a(&local_60,&local_80,&local_70);
      local_48 = local_60;
      if (local_58 == 0) {
        local_48 = &DAT_149dfb77a;
      }
      local_b0 = local_50;
      local_50[0] = 5;
      local_40 = 0;
      uStack_38 = 0;
      local_a8 = &local_30;
      FUN_1407adb6e(&local_a0);
      FUN_140230a63();
      FUN_140230ad0(&DAT_14c8731a8,&local_90,L"ApiKey {0}",&local_a0);
      if ((longlong *)(param_1 + 0x10) == &local_90) {
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x10) = local_90;
        local_90 = 0;
        *(undefined4 *)(param_1 + 0x18) = (undefined4)local_88;
        *(undefined4 *)(param_1 + 0x1c) = local_88._4_4_;
        local_88 = 0;
      }
      FUN_1407adb3e(local_a0,local_98);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
LAB_1415d8a19:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 + 0x10;
}



// FUNCTION 1415d8c0c FUN_1415d8c0c body=240 status=ok
// SIG undefined FUN_1415d8c0c(void)

undefined8 FUN_1415d8c0c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (DAT_14c872ce0 != 0) {
    FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystemSteam",L"bAllowP2PPacketRelay",param_1 + 0x160,
                  &DAT_14c872ce8);
    FUN_14153841e(DAT_14c872ce0,L"OnlineSubsystemSteam",L"P2PConnectionTimeout",param_1 + 0x164,
                  &DAT_14c872ce8);
    FUN_14612afb8(DAT_14c872ce0,L"OnlineSubsystemSteam",L"P2PCleanupTimeout",param_1 + 0x178,
                  &DAT_14c872ce8);
  }
  plVar1 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c7648f0);
  if (*plVar1 != 0) {
    puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c7648f0);
    (**(code **)(*(longlong *)*puVar2 + 0x38))((longlong *)*puVar2,*(undefined1 *)(param_1 + 0x160))
    ;
  }
  plVar1 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
  if (*plVar1 != 0) {
    puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764930);
    (**(code **)(*(longlong *)*puVar2 + 0x38))((longlong *)*puVar2,*(undefined1 *)(param_1 + 0x160))
    ;
  }
  return 1;
}



// FUNCTION 1415d8cfc FUN_1415d8cfc body=41 status=ok
// SIG undefined FUN_1415d8cfc(void)

byte FUN_1415d8cfc(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_143c09d32();
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_143c09d32();
    bVar2 = DAT_14c763034 == '\0' & bVar2;
  }
  return bVar2;
}



// FUNCTION 1415d8d26 FUN_1415d8d26 body=1820 status=ok
// SIG undefined FUN_1415d8d26(void)

undefined8 * FUN_1415d8d26(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  param_1[1] = 0x44480000;
  *(undefined1 *)(param_1 + 5) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = 0xb;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0xb) = 8;
  param_1[8] = 0x43c80000;
  *(undefined1 *)(param_1 + 0xc) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = 0xb;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x12) = 8;
  param_1[0xf] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13) = 0xb;
  uVar4 = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x14) = uVar3;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x19) = 4;
  *(undefined4 *)(param_1 + 0x16) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x1a) = 3;
  *(char *)(param_1 + 0x1b) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x20) = 4;
  *(undefined4 *)(param_1 + 0x1d) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x21) = 3;
  *(char *)(param_1 + 0x22) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x27) = 8;
  param_1[0x24] = 0x41700000;
  *(undefined1 *)(param_1 + 0x28) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x29) = uVar3;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 8;
  param_1[0x2b] = 0x41700000;
  *(undefined1 *)(param_1 + 0x2f) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x30) = uVar3;
  param_1[0x31] = 0;
  *(undefined2 *)(param_1 + 0x35) = 8;
  param_1[0x32] = 0x41700000;
  *(undefined1 *)(param_1 + 0x36) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x37) = uVar3;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 8;
  param_1[0x39] = 0x3f80000040400000;
  *(undefined1 *)(param_1 + 0x3d) = 0xb;
  uVar4 = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x3e) = uVar3;
  param_1[0x3f] = 0;
  *(undefined2 *)(param_1 + 0x43) = 8;
  param_1[0x40] = 0x4040000041f00000;
  *(undefined1 *)(param_1 + 0x44) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar3;
  param_1[0x46] = 0;
  *(undefined2 *)(param_1 + 0x4a) = 8;
  param_1[0x47] = 0x3f80000040c00000;
  *(undefined1 *)(param_1 + 0x4b) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x4c) = uVar3;
  param_1[0x4d] = 0;
  *(undefined2 *)(param_1 + 0x51) = 8;
  param_1[0x4e] = 0x40a0000041700000;
  *(undefined1 *)(param_1 + 0x52) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x53) = uVar3;
  param_1[0x54] = 0;
  *(undefined2 *)(param_1 + 0x58) = 8;
  param_1[0x55] = 0x40a0000041700000;
  *(undefined1 *)(param_1 + 0x59) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x5a) = uVar3;
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 8;
  param_1[0x5c] = 0x3f80000041200000;
  *(undefined1 *)(param_1 + 0x60) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x61) = uVar3;
  param_1[0x62] = 0;
  *(undefined2 *)(param_1 + 0x66) = 8;
  param_1[99] = 0x40a0000041700000;
  *(undefined1 *)(param_1 + 0x67) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x68) = uVar3;
  param_1[0x69] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 8;
  param_1[0x6a] = 0x40a0000041700000;
  *(undefined1 *)(param_1 + 0x6e) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(param_1 + 0x6f) = uVar3;
  param_1[0x70] = 0;
  *(undefined2 *)(param_1 + 0x74) = 8;
  param_1[0x71] = 0x40a0000041700000;
  *(undefined1 *)(param_1 + 0x75) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x76) = uVar3;
  param_1[0x77] = 0;
  *(undefined2 *)(param_1 + 0x7b) = 8;
  param_1[0x78] = 0x40a0000041700000;
  *(undefined1 *)(param_1 + 0x7c) = 0xb;
  uVar3 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar3 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x7d) = uVar3;
  FUN_14044066a(param_1 + 0x7e,0x14,1);
  FUN_14044066a(param_1 + 0x85,0x14,1);
  FUN_14044066a(param_1 + 0x8c,0x14,1);
  FUN_14044066a(param_1 + 0x93,0x14,1);
  FUN_14044066a(param_1 + 0x9a,0x14,1);
  param_1[0xa1] = 0;
  *(undefined2 *)(param_1 + 0xa5) = 8;
  param_1[0xa2] = 0x40a0000042700000;
  *(undefined1 *)(param_1 + 0xa6) = 0xb;
  uVar3 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xa7) = uVar3;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xac) = 4;
  *(undefined4 *)(param_1 + 0xa9) = 0x41c80000;
  *(undefined1 *)(param_1 + 0xad) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0xae) = cVar1;
  param_1[0xaf] = 0;
  *(undefined2 *)(param_1 + 0xb3) = 4;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb4) = 3;
  *(char *)(param_1 + 0xb5) = cVar1;
  *(undefined2 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x10;
  param_1[0xb9] = 0;
  param_1[0xbb] = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  param_1[0xba] = &PTR_FUN_14b023b20;
  param_1[0xbd] = &PTR_FUN_14b023b40;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = &PTR_FUN_14b00be70;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0xf00000d0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62c) = 1;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0xf00000d0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0xf00000d0;
  param_1[0xcb] = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  *(undefined2 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 6;
  param_1[0xce] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  param_1[0xcf] = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xf00000d0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  lVar5 = 0x730;
  do {
    FUN_1486a765e((longlong)param_1 + lVar5);
    lVar5 = lVar5 + 0x130;
  } while (lVar5 != 0xd20);
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  return param_1;
}



// FUNCTION 1415d9442 FUN_1415d9442 body=370 status=ok
// SIG undefined FUN_1415d9442(void)

undefined8 * FUN_1415d9442(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415d95b6 FUN_1415d95b6 body=258 status=ok
// SIG undefined FUN_1415d95b6(void)

void FUN_1415d95b6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9efde8) {
    FUN_144b3d300(&DAT_14c9efde8);
    if (DAT_14c9efde8 == -1) {
      FUN_1461100ce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xc4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9efd68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261a3);
      _Init_thread_footer(&DAT_14c9efde8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d96ba FUN_1415d96ba body=2237 status=ok
// SIG undefined FUN_1415d96ba(void)

void FUN_1415d96ba(int *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8 [2];
  longlong local_e8;
  longlong *plStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong **local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  int local_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar8 = param_1[0x45];
  if (((char)param_1[0x44] != '\0') || (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    *(undefined1 *)(param_1 + 0x44) = 0;
    param_1[0x45] = iVar8 + 1;
  }
  bVar12 = *(char *)(param_2 + 0x58) == '\x02';
  iVar8 = param_1[0x49];
  if (((bool)(char)param_1[0x48] != bVar12) || (bVar13 = iVar8 == 0, iVar8 = 0, bVar13)) {
    *(bool *)(param_1 + 0x48) = bVar12;
    param_1[0x49] = iVar8 + 1;
  }
  iVar8 = param_1[0x13];
  if ((*(longlong *)(param_2 + 0xd0) != *(longlong *)(param_1 + 0x11)) ||
     (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    *(longlong *)(param_1 + 0x11) = *(longlong *)(param_2 + 0xd0);
    param_1[0x13] = iVar8 + 1;
  }
  FUN_1400021e4(param_1 + 0x11,&local_98);
  local_80[0] = (int)uStack_90;
  uVar9 = (int)uStack_90 - 1;
  if ((int)uStack_90 == 0) {
    uVar9 = 0;
  }
  if (0 < (int)uVar9) {
    uVar10 = 0;
    do {
      uVar3 = *(ushort *)((longlong)local_98 + uVar10 * 2);
      *(ushort *)((longlong)local_98 + uVar10 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  local_88 = local_98;
  local_80[1] = uStack_90._4_4_;
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  FUN_140775538(param_1 + 0x14,&local_88);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = param_1[0x21];
  if ((*(int *)(param_2 + 0xd8) != param_1[0x20]) || (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    param_1[0x20] = *(int *)(param_2 + 0xd8);
    param_1[0x21] = iVar8 + 1;
  }
  FUN_1449a0272(param_1 + 0x1a,param_2 + 0xc0);
  if ((*(int *)(param_2 + 0x88) != *param_1) || (param_1[10] == 0)) {
    FUN_1447715ec(param_1,param_2 + 0x88);
    param_1[10] = param_1[10] + 1;
  }
  if ((((*(int *)(param_2 + 0xb0) == param_1[0xc]) && (*(int *)(param_2 + 0xb4) == param_1[0xd])) &&
      (*(int *)(param_2 + 0xb8) == param_1[0xe])) && (*(int *)(param_2 + 0xbc) == param_1[0xf])) {
    if (param_1[0x10] == 0) {
      iVar8 = 1;
      goto LAB_1415d98a0;
    }
  }
  else {
    iVar8 = param_1[0x10] + 1;
LAB_1415d98a0:
    uVar6 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    param_1[0x10] = iVar8;
  }
  fVar14 = *(float *)(param_2 + 0xdc);
  iVar8 = param_1[0x23];
  if (((fVar14 != (float)param_1[0x22]) || (NAN(fVar14) || NAN((float)param_1[0x22]))) ||
     (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    param_1[0x22] = (int)fVar14;
    param_1[0x23] = iVar8 + 1;
  }
  FUN_140b6da64(&local_e8,param_1 + 0x11);
  FUN_140233b1a(local_d8,&local_e8);
  local_108 = (longlong *)0x0;
  plStack_100 = (longlong *)0x0;
  FUN_1413a454c(local_f8,*(undefined4 *)(param_2 + 0xd8),0);
  FUN_146636f9c(local_128);
  FUN_14023409e(&local_118,local_128,1);
  local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_f8);
  local_68[0] = 4;
  FUN_14023423e(local_58,local_d8);
  local_a0 = &local_48;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_118;
  local_b0 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_c8,&local_b8,&local_98);
  FUN_14007f2db(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar11 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_88 + lVar11) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_88 + lVar11) + 0x10))();
      *(undefined8 *)((longlong)&local_88 + lVar11) = 0;
      *(undefined4 *)((longlong)local_80 + lVar11) = 0;
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0x10);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_110 + 0x10))(local_110);
      }
    }
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if ((param_1[0x3c] == 0) || (cVar7 = FUN_144722c14(param_1 + 0x38,local_c8,0), cVar7 == '\0')) {
    FUN_140008f88(param_1 + 0x38,local_c8);
    param_1[0x3c] = param_1[0x3c] + 1;
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_100 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x2c);
  if ((param_1[0x30] == 0) ||
     (cVar7 = FUN_144722c14(plVar1,(longlong *)(param_2 + 0x118),0), cVar7 == '\0')) {
    plVar4 = *(longlong **)(param_2 + 0x118);
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar4) {
      *plVar1 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    param_1[0x2e] = *(int *)(param_2 + 0x120);
    param_1[0x30] = param_1[0x30] + 1;
  }
  plVar1 = (longlong *)(param_1 + 0x32);
  if ((param_1[0x36] == 0) ||
     (cVar7 = FUN_144722c14(plVar1,(longlong *)(param_2 + 0x138),0), cVar7 == '\0')) {
    plVar4 = *(longlong **)(param_2 + 0x138);
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar4) {
      *plVar1 = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    param_1[0x34] = *(int *)(param_2 + 0x140);
    param_1[0x36] = param_1[0x36] + 1;
  }
  iVar8 = param_1[0x4b];
  if ((*(char *)(param_2 + 0x128) != (char)param_1[0x4a]) ||
     (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    *(char *)(param_1 + 0x4a) = *(char *)(param_2 + 0x128);
    param_1[0x4b] = iVar8 + 1;
  }
  iVar8 = param_1[0x4d];
  if ((*(char *)(param_2 + 0x12a) != (char)param_1[0x4c]) ||
     (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    *(char *)(param_1 + 0x4c) = *(char *)(param_2 + 0x12a);
    param_1[0x4d] = iVar8 + 1;
  }
  fVar14 = *(float *)(param_2 + 0xe8) * 100.0;
  iVar8 = param_1[0x2b];
  if (((fVar14 != (float)param_1[0x2a]) || (NAN(fVar14) || NAN((float)param_1[0x2a]))) ||
     (bVar12 = iVar8 == 0, iVar8 = 0, bVar12)) {
    param_1[0x2a] = (int)fVar14;
    param_1[0x2b] = iVar8 + 1;
  }
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_140407a00(local_138,fVar14,&DAT_14cbd5988);
  FUN_14663704e(&local_108);
  FUN_14023409e(&local_148,&local_108,1);
  local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
  FUN_14023423e(local_78,local_138);
  local_a0 = (ulonglong *)local_68;
  local_a8 = &local_88;
  FUN_14010d304(&local_98);
  local_b8 = local_148;
  local_b0 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_c8,&local_b8,&local_98);
  FUN_14007f2db(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  if ((param_1[0x42] == 0) || (cVar7 = FUN_144722c14(param_1 + 0x3e,local_c8,0), cVar7 == '\0')) {
    FUN_140008f88(param_1 + 0x3e,local_c8);
    param_1[0x42] = param_1[0x42] + 1;
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  plVar1 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_e0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(int *)(param_2 + 8) != param_1[0x96]) || (param_1[0xa0] == 0)) {
    FUN_1447715ec(param_1 + 0x96,param_2 + 8);
    param_1[0xa0] = param_1[0xa0] + 1;
  }
  if (*(longlong *)(param_2 + 0x70) == *(longlong *)(param_1 + 0xb4)) {
    iVar8 = 1;
    if (param_1[0xb6] == 0) goto LAB_1415d9e51;
  }
  else {
    iVar8 = param_1[0xb6] + 1;
LAB_1415d9e51:
    *(longlong *)(param_1 + 0xb4) = *(longlong *)(param_2 + 0x70);
    param_1[0xb6] = iVar8;
  }
  FUN_144240138(iVar8,&local_88,param_2 + 0x70);
  if ((param_1[0xac] == 0) || (cVar7 = FUN_144722c14(param_1 + 0xa8,&local_88,0), cVar7 == '\0')) {
    FUN_140008f88(param_1 + 0xa8,&local_88);
    param_1[0xac] = param_1[0xac] + 1;
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (*(char *)(param_2 + 0x129) == (char)param_1[0x80]) {
    iVar8 = 1;
    if (param_1[0x81] != 0) goto LAB_1415d9edc;
  }
  else {
    iVar8 = param_1[0x81] + 1;
  }
  *(char *)(param_1 + 0x80) = *(char *)(param_2 + 0x129);
  param_1[0x81] = iVar8;
LAB_1415d9edc:
  FUN_145955cf4(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d9f78 FUN_1415d9f78 body=160 status=ok
// SIG undefined FUN_1415d9f78(void)

longlong FUN_1415d9f78(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((param_2 != 0) && (lVar2 = FUN_144a7ba4c(param_2), lVar2 != 0)) &&
      (lVar2 = FUN_1400b6e86(lVar2), lVar2 != 0)) &&
     (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(lVar2 + 0x30), lVar2 != 0)) {
    lVar3 = FUN_140dd10c4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && ((longlong)*(int *)(lVar2 + 0x548) != 0)) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x540) + 0x20 + lVar3);
        if (*param_1 == *(longlong *)(lVar1 + 0x18)) {
          return lVar1;
        }
        lVar3 = lVar3 + 0x50;
      } while ((longlong)*(int *)(lVar2 + 0x548) * 0x50 != lVar3);
    }
  }
  return 0;
}



// FUNCTION 1415da018 FUN_1415da018 body=139 status=ok
// SIG undefined FUN_1415da018(void)

void FUN_1415da018(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x988);
  FUN_1406c9b82(param_1);
  local_28 = 0xab114ffd;
  uStack_24 = 0xad14c14;
  uStack_20 = 0x8bdeea31;
  uStack_1c = 0x9293fc15;
  uVar1 = FUN_1448a256a(param_1);
  if ((int)uVar1 < 0) {
    FUN_148e16502(param_1);
LAB_1415da092:
    FUN_14423f70e(param_1);
  }
  else {
    if (uVar1 < 2) goto LAB_1415da092;
    if (uVar1 != 2) goto LAB_1415da06d;
  }
  FUN_14423f98a(param_1);
LAB_1415da06d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415da0a4 FUN_1415da0a4 body=52 status=ok
// SIG undefined FUN_1415da0a4(void)

void FUN_1415da0a4(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1407fb560();
  puVar1 = *(undefined8 **)(param_1 + 0x3d8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x3d8) = 0;
  }
  return;
}



// FUNCTION 1415da0d8 FUN_1415da0d8 body=446 status=ok
// SIG undefined FUN_1415da0d8(void)

void FUN_1415da0d8(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar11 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar7 * 0x58) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_1415da230;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1415da230:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415da298 FUN_1415da298 body=322 status=ok
// SIG undefined FUN_1415da298(void)

void FUN_1415da298(wchar_t *param_1)

{
  FARPROC pFVar1;
  HANDLE pvVar2;
  size_t sVar3;
  HMODULE hModule;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  DWORD local_20;
  undefined4 local_1c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c4540) {
    FUN_144b3d300(&DAT_14c8c4540);
    if (DAT_14c8c4540 == -1) {
      hModule = GetModuleHandleW(L"kernel32.dll");
      DAT_14c8c4538 = GetProcAddress(hModule,"SetThreadDescription");
      _Init_thread_footer(&DAT_14c8c4540);
    }
  }
  pFVar1 = DAT_14c8c4538;
  if (DAT_14c8c4538 != (FARPROC)0x0) {
    pvVar2 = GetCurrentThread();
    (*pFVar1)(pvVar2);
  }
  local_48 = 0;
  if (param_1 == (wchar_t *)0x0) {
    local_40 = 0;
    local_38 = 0;
  }
  else {
    sVar3 = wcslen(param_1);
    FUN_1449b853c(local_c8,param_1,sVar3 & 0xffffffff,1);
  }
  local_30[0] = 0x1000;
  local_28 = local_40;
  local_20 = GetCurrentThreadId();
  local_1c = 0;
  RaiseException(0x406d1388,0,3,(ULONG_PTR *)local_30);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1415da3da FUN_1415da3da body=1240 status=ok
// SIG undefined FUN_1415da3da(void)

void FUN_1415da3da(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 **ppuVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 **local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  byte local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  int local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8 [4];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78 [4];
  undefined8 **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar14 = param_1[8];
  if ((((((lVar14 == 0) || (*(longlong *)(lVar14 + 0x1b0) == 0)) ||
        (*(int *)((longlong)param_1 + 0x4c) == 0)) ||
       ((uVar3 = *(uint *)(param_1 + 9), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)))) ||
      (plVar9 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
      plVar9 == (longlong *)0x0)) ||
     ((((int)plVar9[2] != *(int *)((longlong)param_1 + 0x4c) ||
       ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
      (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)))) goto LAB_1415da4ad;
  uVar6 = FUN_1401fa540();
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar6);
  if (plVar9 == (longlong *)0x0) goto LAB_1415da4ad;
  uVar6 = FUN_1401fa540();
  plVar7 = (longlong *)FUN_144718840(plVar9,uVar6);
  if (((plVar9 == plVar7) || (plVar7 == (longlong *)0x0)) ||
     (plVar9 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7), plVar9 == (longlong *)0x0))
  goto LAB_1415da4ad;
  local_c8 = *(undefined8 *)(lVar14 + 0x1b0);
  FUN_14886d364(&local_d8);
  if (local_d0 == 0) {
    FUN_140457ffc(plVar9,param_1);
    local_e8 = param_1[0x42];
    param_1[0x42] = 0;
    local_e0 = (int)param_1[0x43];
    local_dc = *(undefined4 *)((longlong)param_1 + 0x21c);
    param_1[0x43] = 0;
    local_78[0] = local_a8;
    local_a8[0] = 0;
    FUN_148872df6(&local_e8,local_78);
    FUN_145971516(&local_c8,plVar9,param_1 + 0x42);
    iVar8 = (int)param_1[0x43];
    if ((DAT_14c950c29 == '\x01') && (0 < iVar8)) {
      lVar14 = param_1[0x42];
      lVar13 = 0;
      do {
        if (*(longlong *)(lVar14 + lVar13 * 8) != 0) {
          FUN_1456cec3c();
          iVar8 = (int)param_1[0x43];
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar8);
    }
    if (iVar8 != 0 || local_e0 != 0) {
      lVar14 = (longlong)local_e0;
      FUN_148872f48(param_1[0x42]);
      lVar13 = local_e8;
      local_58 = (undefined8 **)0x0;
      local_50 = 0x400000000;
      lVar14 = local_e8 + lVar14 * 8;
      local_108 = lVar14;
      local_100 = local_78;
      FUN_1488706b3(local_a8,param_1[0x42],param_1[0x42] + (longlong)(int)param_1[0x43] * 8,local_e8
                   );
      local_88 = (undefined8 *)0x0;
      local_80 = 0x400000000;
      local_108 = param_1[0x42] + (longlong)(int)param_1[0x43] * 8;
      local_100 = (undefined8 **)local_a8;
      FUN_1488706b3(&local_c0,lVar13,lVar14);
      puVar12 = local_88;
      if (local_88 == (undefined8 *)0x0) {
        puVar12 = local_a8;
      }
      lVar14 = (longlong)(int)local_80;
      if (lVar14 != 0) {
        lVar13 = 0;
        do {
          FUN_14886d114(param_1,*(undefined8 *)((longlong)puVar12 + lVar13));
          lVar13 = lVar13 + 8;
        } while (lVar14 * 8 != lVar13);
      }
      ppuVar10 = local_78;
      if (local_58 != (undefined8 **)0x0) {
        ppuVar10 = local_58;
      }
      lVar14 = (longlong)(int)local_50;
      if (lVar14 != 0) {
        lVar13 = 0;
        do {
          (**(code **)(*param_1 + 0x78))
                    (param_1,local_f8,*(undefined8 *)((longlong)ppuVar10 + lVar13));
          plVar7 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_f0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          lVar13 = lVar13 + 8;
        } while (lVar14 * 8 != lVar13);
      }
      FUN_146550156(&local_c0,param_1);
      if (((local_b8 == 0) || (local_c0 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*local_c0 + 0x30))(), cVar4 == '\0')) {
        if (local_b8 == 0) goto LAB_1415da831;
        if (local_c0 != (longlong *)0x0) {
          (**(code **)*local_c0)(local_c0,0);
          FUN_1446efa72(&local_c0,0,0,0x10);
          goto LAB_1415da824;
        }
      }
      else {
        if (*(int *)((longlong)plVar9 + 0x14) < 1) {
          iVar8 = (int)plVar9[1];
          iVar5 = (int)plVar9[2] + -1;
          *(int *)(plVar9 + 2) = iVar5;
          if (iVar5 <= iVar8) {
            iVar5 = iVar8;
            if (0 < iVar8) {
              iVar11 = 0;
              do {
                if (((*(int *)(*plVar9 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                    (plVar7 = *(longlong **)(*plVar9 + (longlong)iVar11 * 0x10),
                    plVar7 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar7 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar9,iVar11);
                  FUN_14005b248(plVar9);
                }
                else {
                  iVar11 = iVar11 + 1;
                }
                iVar5 = (int)plVar9[1];
              } while (iVar11 < iVar5);
            }
            iVar11 = 2;
            if (2 < iVar5 * 2) {
              iVar11 = iVar5 * 2;
            }
            *(int *)(plVar9 + 2) = iVar11;
            if ((iVar11 < iVar8) && (*(int *)((longlong)plVar9 + 0xc) != iVar5)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_b8 != 0) && (local_c0 != (longlong *)0x0)) {
          (**(code **)(*local_c0 + 0x38))(local_c0,local_b0);
        }
        iVar8 = (int)plVar9[1];
        *(uint *)(plVar9 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)plVar9 + 0xc) < iVar8 + 1U) {
          FUN_1447a71f6(plVar9,iVar8);
        }
        lVar14 = *plVar9;
        lVar13 = (longlong)iVar8 * 0x10;
        *(undefined8 *)(lVar14 + lVar13) = 0;
        *(undefined4 *)(lVar14 + 8 + lVar13) = 0;
        *(longlong **)(lVar14 + lVar13) = local_c0;
        local_c0 = (longlong *)0x0;
        *(int *)(lVar14 + 8 + lVar13) = local_b8;
LAB_1415da824:
        local_b8 = 0;
LAB_1415da831:
        if (local_c0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 & 1) == 0) {
    *(int *)(local_d8 + 0x28) = *(int *)(local_d8 + 0x28) + -1;
  }
LAB_1415da4ad:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415da8b4 FUN_1415da8b4 body=920 status=ok
// SIG undefined FUN_1415da8b4(void)

void FUN_1415da8b4(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  ulonglong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar4 = FUN_140ae5f1a(param_3);
  if (cVar4 != '\0') {
    lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar5 != 0) {
      if (DAT_14cba8288 == 0) {
        local_80 = &local_58;
        local_58 = FUN_141864c34;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1464cee30;
        local_88 = &LAB_148bfac22;
        local_90 = &LAB_140f21842;
        local_98 = L"Game";
        local_a0 = 0;
        local_a8 = 0x10000004;
        local_b0 = 0x10;
        local_b8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        FUN_1449027d0(param_1,&local_58);
        lVar5 = *(longlong *)(local_58 + 0x220);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b8));
        plVar3 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (((-1 < (int)param_3) && (param_2 != (longlong *)0x0)) &&
           ((int)param_3 < *(int *)(lVar5 + 400))) {
          lVar6 = (**(code **)(*param_2 + 8))(param_2);
          if (lVar6 != 0) {
            if (DAT_14cbbd498 == 0) {
              local_58 = FUN_140940982;
              local_70 = FUN_14081d0ea;
              local_78 = &LAB_146572ba2;
              local_88 = &LAB_148ca13ba;
              local_90 = &LAB_140e51436;
              local_98 = L"Engine";
              local_a0 = 0;
              local_a8 = 0x10000004;
              local_b0 = 8;
              local_b8 = 0x1068;
              local_80 = &local_58;
              FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
            }
            if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
              *(int *)(lVar5 + 0x198) = *(int *)(lVar5 + 0x198) + 1;
              lVar8 = *(longlong *)(lVar5 + 0x188);
              lVar7 = (ulonglong)param_3 * 0x120;
              local_60 = lVar8 + lVar7 + 0x38;
              cVar4 = FUN_140991644(local_60,lVar6 + 0x3f0);
              if (cVar4 != '\0') {
                lVar8 = lVar8 + lVar7;
                local_68 = (ulonglong)param_3;
                FUN_146649b1c(lVar8 + 8);
                FUN_140c12dec(lVar8 + 0x20,&DAT_149e02088);
                FUN_140b96410(local_60);
                *(int *)(lVar5 + 0x1b0) = *(int *)(lVar5 + 0x1b0) + 1;
                FUN_1449027d0(param_1,&local_58);
                plVar3 = *(longlong **)(local_58 + 0x230);
                AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
                *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
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
                if ((int)param_3 < (int)plVar3[1]) {
                  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
                  FUN_1461d0dd0(local_68 * 0x118 + *plVar3);
                }
                ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
              }
            }
          }
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b8));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dac4e FUN_1415dac4e body=26 status=ok
// SIG undefined FUN_1415dac4e(void)

undefined1 FUN_1415dac4e(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1407c8d60();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x2c);
  }
  return uVar1;
}



// FUNCTION 1415dac68 FUN_1415dac68 body=449 status=ok
// SIG undefined FUN_1415dac68(void)

void FUN_1415dac68(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  short local_98;
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [3];
  longlong local_60 [3];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x57c) == '\x01') {
    if (((*(int *)(param_2 + 0xc0c) != 0) && (uVar1 = *(uint *)(param_2 + 0xc08), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_2 + 0xc0c))) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) goto LAB_1415dace6;
    }
    FUN_140056680(local_60,L"team");
    local_88 = (void *)0x0;
    local_80 = *(int *)(param_3 + 1);
    lVar4 = (longlong)local_80;
    _Src = (void *)*param_3;
    if (lVar4 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,_Src,lVar4 * 2);
    }
    FUN_14126d510(local_78,&local_88,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    bVar2 = false;
    FUN_14000bbd8(local_60,local_78,0);
    FUN_140640824(&local_a0,local_60);
    if (local_a0 != 0) {
      if ((local_98 < 0) || (local_90 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (!bVar2) {
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      local_78[0] = 0;
      local_78[1] = 0;
    }
    FUN_14885ce7a(param_1,param_2,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1415dace6:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dae2a thunk_FUN_1626dde1c body=161 status=ok
// SIG undefined thunk_FUN_1626dde1c(void)

/* WARNING: Instruction at (ram,0x0001626dde70) overlaps instruction at (ram,0x0001626dde6f)
    */
/* WARNING: Removing unreachable block (ram,0x0001626dde94) */
/* WARNING: Removing unreachable block (ram,0x0001626dde9a) */
/* WARNING: Removing unreachable block (ram,0x0001626dde5c) */
/* WARNING: Removing unreachable block (ram,0x00016287510b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffd0 : 0x0001626dde68 */
/* WARNING: Removing unreachable block (ram,0x0001626dde6f) */
/* WARNING: Removing unreachable block (ram,0x0001626ddeb8) */
/* WARNING: Removing unreachable block (ram,0x0001626dde77) */
/* WARNING: Removing unreachable block (ram,0x0001628750b2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 thunk_FUN_1626dde1c(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 1415db286 FUN_1415db286 body=713 status=ok
// SIG undefined FUN_1415db286(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415db286(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0 && param_2 != 0) {
    if (DAT_14ca84e40 < param_2 || DAT_14ca84e40 < param_3) {
      if (param_3 < param_2) {
        param_3 = (uint)(longlong)((float)DAT_14ca84e40 / ((float)param_2 / (float)param_3));
        param_2 = DAT_14ca84e40;
      }
      else {
        param_2 = (uint)(longlong)(((float)param_2 / (float)param_3) * (float)DAT_14ca84e40);
        param_3 = DAT_14ca84e40;
      }
    }
    *(undefined1 *)(param_1 + 0x281) = 1;
    lVar1 = param_1 + 8;
    local_60 = 0;
    local_68 = param_4;
    (**(code **)(*(longlong *)(param_1 + 8) + 0x1e8))(lVar1,0,param_2,param_3);
    uVar5 = (ulonglong)DAT_14c8672b8;
    if (0 < (longlong)uVar5) {
      bVar7 = false;
      DAT_14c8672c4 = DAT_14c8672c4 + 1;
      do {
        lVar10 = uVar5 * 0x10 + -8;
        uVar9 = uVar5;
        while (((*(int *)(DAT_14c8672b0 + lVar10) != 0 &&
                (plVar6 = *(longlong **)(DAT_14c8672b0 + -8 + lVar10), plVar6 != (longlong *)0x0))
               && (cVar4 = (**(code **)(*plVar6 + 0x60))(), cVar4 != '\0'))) {
          lVar10 = lVar10 + -0x10;
          bVar2 = uVar9 < 2;
          uVar9 = uVar9 - 1;
          if (bVar2) {
            DAT_14c8672c4 = DAT_14c8672c4 + -1;
            if (bVar7) goto LAB_1415db3be;
            goto LAB_1415db449;
          }
        }
        uVar5 = uVar9 - 1;
        bVar7 = true;
      } while (1 < uVar9);
      DAT_14c8672c4 = DAT_14c8672c4 + -1;
LAB_1415db3be:
      iVar3 = DAT_14c8672b8;
      if (DAT_14c8672c4 < 1) {
        if (0 < DAT_14c8672b8) {
          iVar8 = 0;
          do {
            if (((*(int *)(DAT_14c8672b0 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(DAT_14c8672b0 + (longlong)iVar8 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar6 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(&DAT_14c8672b0,iVar8);
              FUN_14005b248(&DAT_14c8672b0);
            }
            else {
              iVar8 = iVar8 + 1;
            }
          } while (iVar8 < DAT_14c8672b8);
        }
        _DAT_14c8672c0 = 2;
        if (2 < DAT_14c8672b8 * 2) {
          _DAT_14c8672c0 = DAT_14c8672b8 * 2;
        }
        if ((_DAT_14c8672c0 < iVar3) && (DAT_14c8672bc != DAT_14c8672b8)) {
          FUN_14045812c(&DAT_14c8672b0);
        }
      }
    }
LAB_1415db449:
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x1b8))(lVar1);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x1b0))(lVar1);
      lVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
      if (lVar10 != 0) {
        FUN_14374b164(lVar1,1);
      }
    }
    if (((*(int *)(param_1 + 0x290) != 0) && (*(longlong **)(param_1 + 0x288) != (longlong *)0x0))
       && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x30))(), cVar4 != '\0')) {
      local_48 = (double)param_3;
      local_50 = (double)param_2;
      if (*(int *)(param_1 + 0x290) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x288);
      }
      (**(code **)(*plVar6 + 0x58))();
    }
    *(undefined1 *)(param_1 + 0x281) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415db550 FUN_1415db550 body=352 status=ok
// SIG undefined FUN_1415db550(void)

void FUN_1415db550(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0x5d;
  lVar4 = 0;
  FUN_1447808da(local_28,0);
  puVar3 = &DAT_14c873428;
  do {
    *(undefined4 *)(local_28[0] + lVar4 * 4) = *puVar3;
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 0xc;
  } while (lVar4 != 0x5d);
  FUN_1461188bc(local_28);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  uVar2 = DAT_14ca85550;
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1415db607;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    FUN_1448944a0(&local_29,DAT_14ca85550);
    FUN_1415db6b1(&local_29);
    FUN_1415db6b2(&local_29,uVar2);
  }
LAB_1415db607:
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415db6b1 FUN_1415db6b1 body=1 status=ok
// SIG undefined FUN_1415db6b1(void)

void FUN_1415db6b1(void)

{
  return;
}



// FUNCTION 1415db6b2 FUN_1415db6b2 body=617 status=ok
// SIG undefined FUN_1415db6b2(void)

void FUN_1415db6b2(byte *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_1 & 6) == 0 && (~*param_1 & 1) == 0) {
    local_38 = L"UnableToUseInstancedStereoRenderingText";
    local_30 = 0x27;
    FUN_1446e940c(local_60,&local_38);
    local_38 = L"InstancedStereo";
    local_30 = 0xf;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = 
    L"Cannot render an Instanced Stereo-enabled project due to a missing functionality on the system. Please check log files for more info."
    ;
    local_30 = 0x85;
    FUN_140208c1e(local_48,local_4c,local_60,&local_38);
    cVar2 = FUN_140b3f358();
    if (cVar2 == '\0') {
      local_38 = L"UnableToUseInstancedStereoRendering";
      local_30 = 0x23;
      FUN_1446e940c(local_4c,&local_38);
      local_38 = L"InstancedStereo";
      local_30 = 0xf;
      FUN_1446e940c(local_64,&local_38);
      local_38 = L"Unable to use Instanced Stereo Rendering.";
      local_30 = 0x29;
      FUN_140208c1e(local_60,local_64,local_4c,&local_38);
      plVar3 = local_60[0];
      if (*(code **)(*local_60[0] + 0x50) != FUN_144828418) {
        plVar3 = (longlong *)(**(code **)(*local_60[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar3);
      pcVar1 = *(code **)(*local_60[0] + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar3 = local_60[0] + 3;
        if (local_60[0][5] != 0) {
          plVar3 = (longlong *)(local_60[0][5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar3 = local_60[0] + 2;
      }
      else {
        plVar3 = (longlong *)(*pcVar1)(local_60[0]);
      }
      if ((int)plVar3[1] == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*plVar3;
      }
      plVar3 = local_48[0];
      if (*(code **)(*local_48[0] + 0x50) != FUN_144828418) {
        plVar3 = (longlong *)(**(code **)(*local_48[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar3);
      pcVar1 = *(code **)(*local_48[0] + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar3 = local_48[0] + 3;
        if (local_48[0][5] != 0) {
          plVar3 = (longlong *)(local_48[0][5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar3 = local_48[0] + 2;
      }
      else {
        plVar3 = (longlong *)(*pcVar1)(local_48[0]);
      }
      if ((int)plVar3[1] == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*plVar3;
      }
      FUN_14682f732(0,puVar4,puVar5);
      if (local_60[0] != (longlong *)0x0) {
        (**(code **)(*local_60[0] + 0x10))();
      }
    }
    FUN_142797bc0(1,1,0);
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415db91c FUN_1415db91c body=336 status=ok
// SIG undefined FUN_1415db91c(void)

ulonglong FUN_1415db91c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  undefined7 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  cVar2 = FUN_14126d840();
  if (cVar2 == '\0') {
LAB_1415dba01:
    unaff_RDI = 0;
LAB_1415dba03:
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return unaff_RDI & 0xffffffff;
  }
LAB_1415db978:
  FUN_14126d676(local_58,&local_68);
  iVar1 = (int)param_2[1];
  uVar5 = (undefined7)(unaff_RDI >> 8);
  if (iVar1 == (int)uStack_60) {
    unaff_RDI = CONCAT71(uVar5,1);
    if (1 < iVar1) {
      lVar6 = 0;
      do {
        uVar3 = *(ushort *)(*param_2 + lVar6);
        uVar4 = (ulonglong)uVar3;
        uVar7 = *(ushort *)(local_68 + lVar6);
        if (uVar3 == uVar7) {
          if (uVar3 == 0) break;
        }
        else {
          if (0x7f < (uVar7 | uVar3)) goto LAB_1415db9f8;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar8]) goto LAB_1415db9f8;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
  }
  else {
    if ((int)uStack_60 + iVar1 != 1) goto LAB_1415db99c;
    unaff_RDI = CONCAT71(uVar5,1);
  }
  goto LAB_1415dba03;
LAB_1415db9f8:
  if (uVar3 == uVar7) goto LAB_1415dba03;
LAB_1415db99c:
  cVar2 = FUN_14126d840(param_1,local_58);
  if (cVar2 == '\0') goto LAB_1415dba01;
  goto LAB_1415db978;
}



// FUNCTION 1415dba6e FUN_1415dba6e body=444 status=ok
// SIG undefined FUN_1415dba6e(void)

longlong FUN_1415dba6e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_1[0x7d];
  if (plVar1 == (longlong *)0x0) {
    FUN_14020fad6(param_7,L"Failed to spawn player controller, GameSession is null");
  }
  else {
    (**(code **)(*plVar1 + 0x650))(plVar1,&local_48,param_5);
    if (&local_48 == param_7) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_7 != 0) {
        FUN_1400020a8();
      }
      *param_7 = local_48;
      local_48 = 0;
      *(int *)(param_7 + 1) = local_40;
      *(undefined4 *)((longlong)param_7 + 0xc) = local_3c;
    }
    if ((int)param_7[1] < 2) {
      lVar2 = (**(code **)(*param_1 + 0x788))(param_1,param_3,param_5);
      if (lVar2 == 0) {
        FUN_140002266(&local_48,L"Failed to spawn player controller");
        if (&local_48 == param_7) {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_7 != 0) {
            FUN_1400020a8();
          }
          *param_7 = local_48;
          *(int *)(param_7 + 1) = local_40;
          *(undefined4 *)((longlong)param_7 + 0xc) = local_3c;
        }
      }
      else {
        local_58 = param_5;
        local_50 = param_4;
        (**(code **)(*param_1 + 0x7f0))(param_1,&local_48,lVar2,param_6);
        if (&local_48 == param_7) {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          local_40 = (int)param_7[1];
        }
        else {
          if (*param_7 != 0) {
            FUN_1400020a8();
          }
          *param_7 = local_48;
          local_48 = 0;
          *(int *)(param_7 + 1) = local_40;
          *(undefined4 *)((longlong)param_7 + 0xc) = local_3c;
        }
        if (local_40 < 2) goto LAB_1415dbc03;
        FUN_140aeefbc(lVar2,0,1);
      }
    }
  }
  lVar2 = 0;
LAB_1415dbc03:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dbc30 FUN_1415dbc30 body=10 status=ok
// SIG undefined FUN_1415dbc30(void)

void FUN_1415dbc30(undefined8 param_1,int *param_2)

{
  undefined1 auStack_38 [44];
  undefined4 uStack_c;
  ulonglong uStack_8;
  
  if (0 < *param_2) {
    return;
  }
  uStack_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uStack_c = 0;
  FUN_1424a3290(param_1,&uStack_c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1415dbc3a FUN_1415dbc3a body=422 status=ok
// SIG undefined FUN_1415dbc3a(void)

undefined1 * FUN_1415dbc3a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [28];
  char local_74;
  undefined1 *local_68;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_1447210f0();
  if (1 < *(int *)(param_3 + 1)) {
    FUN_1446f470e(&local_a0,*param_3,1);
    local_a8 = FUN_145983792();
    if ((local_a8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_a8);
    }
    puVar5 = local_98;
    FUN_14578a328(puVar5,lVar4,&local_a8,5);
    bVar2 = true;
    if (local_74 == '\0') {
      do {
        puVar5 = local_68;
        if ((local_68 != (undefined1 *)0x0) && (*(longlong *)(local_68 + 0x3b8) == local_a0)) {
          bVar2 = false;
          break;
        }
        FUN_14578a3ac(local_98);
      } while (local_74 != '\x01');
    }
    if (local_40 == '\x01') {
      FUN_14024445c(local_90);
    }
    if (!bVar2) goto LAB_1415dbcd7;
  }
  cVar3 = (**(code **)(*param_1 + 0x808))(param_1,param_2);
  if ((((((cVar3 == '\0') || (*(int *)(param_2 + 0x3a4) == 0)) ||
        (uVar1 = *(uint *)(param_2 + 0x3a0), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        (plVar6 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar6 == (longlong *)0x0)))) ||
      (((int)plVar6[2] != *(int *)(param_2 + 0x3a4) ||
       (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
        (puVar5 = (undefined1 *)*plVar6, puVar5 == (undefined1 *)0x0)))))) &&
     (puVar5 = (undefined1 *)FUN_145789ca2(param_1,param_2), puVar5 == (undefined1 *)0x0)) {
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = *(undefined1 **)(*(longlong *)(lVar4 + 0x30) + 0x2b0);
    }
  }
LAB_1415dbcd7:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1415dbde2 FUN_1415dbde2 body=499 status=ok
// SIG undefined FUN_1415dbde2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415dbde2(void)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0x100000000;
  local_58 = &DAT_14caf1958;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14caf1970 == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  puVar5 = local_58;
  iVar10 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar12 = local_48;
  if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
    do {
      lVar14 = DAT_14caf1948;
      plVar3 = *(longlong **)(DAT_14caf1948 + 0x30 + (longlong)iVar7 * 0x58);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      lVar14 = lVar14 + (longlong)iVar7 * 0x58;
      plVar3 = *(longlong **)(lVar14 + 0x20);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (*(longlong *)(lVar14 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      puVar8 = *(undefined **)(puVar5 + 0x10);
      if (*(undefined **)(puVar5 + 0x10) == (undefined *)0x0) {
        puVar8 = puVar5;
      }
      iVar2 = *(int *)(puVar5 + 0x18);
      lVar14 = (longlong)iVar10;
      uVar6 = *(uint *)(puVar8 + lVar14 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar10) {
          iVar4 = iVar10;
        }
        if (iVar7 <= iVar10) break;
        lVar9 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = *(uint *)(puVar8 + lVar9 * 4 + lVar14 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar14 == lVar9) goto LAB_1415dbf2c;
        }
        iVar10 = iVar10 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_1415dbf2c:
  _DAT_14caf1950 = 0;
  if (DAT_14caf1954 != 0) {
    FUN_140e91948(&DAT_14caf1948,0);
  }
  _DAT_14caf1978 = 0xffffffff;
  DAT_14caf1970 = 0;
  if (0x80 < DAT_14caf1974) {
    DAT_14caf1974 = 0x80;
    FUN_1446efbd8(&DAT_14caf1958,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dbfd6 FUN_1415dbfd6 body=257 status=ok
// SIG undefined FUN_1415dbfd6(void)

ulonglong FUN_1415dbfd6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong unaff_RDI;
  undefined7 uVar7;
  longlong lVar8;
  
  bVar5 = *(byte *)(param_1 + 0xa1);
  if (bVar5 == 0) {
    if (*(int *)(param_1 + 0x90) < 1) {
      iVar1 = *(int *)(param_1 + 0x60);
      unaff_RDI = (ulonglong)iVar1;
      if ((longlong)unaff_RDI < 1) {
        if (*(int *)(param_1 + 0x80) < 1) {
          unaff_RDI = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
          goto LAB_1415dc036;
        }
        if (iVar1 != 0) goto LAB_1415dc008;
      }
      else {
LAB_1415dc008:
        uVar6 = *(ulonglong *)(param_1 + 0x58);
        unaff_RDI = unaff_RDI * 0x10 + uVar6;
        do {
          if ((*(longlong **)(uVar6 + 8) != (longlong *)0x0) &&
             (cVar4 = (**(code **)(**(longlong **)(uVar6 + 8) + 0x2a0))(), cVar4 == '\0'))
          goto LAB_1415dc034;
          uVar6 = uVar6 + 0x10;
        } while (uVar6 != unaff_RDI);
        bVar5 = *(byte *)(param_1 + 0xa1);
      }
      if ((bVar5 & 1) != 0) goto LAB_1415dc0a8;
      iVar1 = *(int *)(param_1 + 0x80);
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x78);
        lVar8 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + 8 + lVar8);
          if ((plVar3 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*plVar3 + 0x2a0))(), cVar4 == '\0')) goto LAB_1415dc034;
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar8);
        bVar5 = *(byte *)(param_1 + 0xa1);
        if ((bVar5 & 1) != 0) goto LAB_1415dc0a8;
      }
    }
    else {
LAB_1415dc034:
      unaff_RDI = 0;
    }
LAB_1415dc036:
    *(char *)(param_1 + 0xa0) = (char)unaff_RDI;
    *(undefined1 *)(param_1 + 0xa1) = 1;
  }
  else {
LAB_1415dc0a8:
    uVar7 = (undefined7)(unaff_RDI >> 8);
    if ((bVar5 & 1) == 0) {
      unaff_RDI = CONCAT71(uVar7,1);
    }
    else {
      unaff_RDI = CONCAT71(uVar7,*(undefined1 *)(param_1 + 0xa0));
    }
  }
  return unaff_RDI & 0xffffff01;
}



// FUNCTION 1415dc0d8 FUN_1415dc0d8 body=301 status=ok
// SIG undefined FUN_1415dc0d8(void)

void FUN_1415dc0d8(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_178 [40];
  undefined2 *local_150;
  int local_148;
  longlong local_140 [2];
  short local_130 [128];
  longlong local_30;
  short *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (DAT_14cb52b80 != 0) {
    FUN_140270c53(&local_150);
    local_28 = local_130;
    local_30 = 0;
    local_20 = 0x3b;
    lVar1 = 0;
    do {
      local_130[lVar1] = (short)"virtual FStreamlineViewExtension::~FStreamlineViewExtension"[lVar1]
      ;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x3c);
    puVar2 = local_150;
    if (local_148 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(local_140,L"%s Stale Views %s",local_28,puVar2);
    if (local_140[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_150 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x4f0;
  do {
    FUN_1459c8ba0(param_1 + lVar1);
    lVar1 = lVar1 + -0x1e0;
  } while (lVar1 != -0xb0);
  FUN_145806982(param_1);
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dc206 FUN_1415dc206 body=761 status=ok
// SIG undefined FUN_1415dc206(void)

longlong * FUN_1415dc206(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined **local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  longlong *local_80;
  longlong local_60;
  undefined4 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14050cf44(param_1 + 0x240,&local_88);
  *param_2 = (longlong)local_88;
  param_2[1] = (longlong)local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  if (*param_2 != 0) goto LAB_1415dc27a;
  plVar3 = (longlong *)param_2[1];
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
  local_50 = '\0';
  lVar6 = FUN_14050d820(param_3);
  if (lVar6 != 0) {
    lVar7 = FUN_144a78b9e();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) && (*(longlong *)(lVar6 + 0x13f8) == 0)) &&
       (*(int *)(lVar6 + 0x38b8) != *(int *)(lVar6 + 0x38e4))) {
      local_b8 = (longlong *)0x0;
      local_c0 = &PTR_FUN_14affcd20;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      FUN_1487c846e(&local_88,&local_c0);
      local_c0 = &PTR_FUN_14affcd20;
      FUN_14096d529(0,0);
      FUN_1487f169e(lVar6 + 0x3748,&local_88);
    }
  }
  local_b8 = (longlong *)FUN_146122cd9();
  local_c0 = (undefined **)(local_b8 + 2);
  FUN_1413dc5cc(&local_c0);
  plVar3 = local_b8;
  ppuVar4 = local_c0;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (ppuVar4 == (undefined **)0x0) {
LAB_1415dc34a:
    *param_2 = (longlong)ppuVar4;
    param_2[1] = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
LAB_1415dc35b:
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
  }
  else {
    pppuVar8 = (undefined ***)(param_1 + 0x588);
    if (local_50 != '\0') {
      pppuVar8 = &local_88;
    }
    local_c8 = 1;
    cVar5 = FUN_1413dcc0a(ppuVar4,pppuVar8,param_3,0);
    if (cVar5 != '\0') goto LAB_1415dc34a;
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar3 != (longlong *)0x0) goto LAB_1415dc35b;
  }
  if (local_50 == '\x01') {
    local_88 = &PTR_FUN_14affcd20;
    FUN_14096d529(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1415dc27a:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415dc500 FUN_1415dc500 body=306 status=ok
// SIG undefined FUN_1415dc500(void)

void FUN_1415dc500(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14afc4830;
  if (param_1[0x12] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    lVar2 = param_1[0x12] + 8;
    if (param_1[0x12] == 0) {
      lVar2 = 0;
    }
    FUN_146319cd6(&local_28);
    (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_28,lVar2);
    plVar1 = (longlong *)param_1[0x12];
    if (plVar1 != (longlong *)0x0) {
      param_1[0x12] = 0;
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
      plVar1 = (longlong *)param_1[0x12];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
    }
  }
  FUN_143c0b542(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dc634 FUN_1415dc634 body=1782 status=ok
// SIG undefined FUN_1415dc634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415dc634(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar6 == 0) {
LAB_1415dcb41:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (DAT_14cba8288 == 0) {
    local_90 = &local_58;
    local_58 = FUN_141864c34;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464cee30;
    local_98 = &LAB_148bfac22;
    local_a0 = &LAB_140f21842;
    local_a8 = &DAT_149e063b2;
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1415dcb41;
  cVar4 = FUN_140cdaf3c(param_1,lVar6);
  lVar12 = param_3[1];
  plVar3 = (longlong *)param_3[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b99f0b0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar11 = plVar7 + 2;
  *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(byte *)(plVar7 + 7) = *(byte *)(plVar7 + 7) & 0xf0 | cVar4 * '\x02';
  plVar7[2] = (longlong)&PTR_FUN_14b99f0f0;
  plVar7[8] = lVar12;
  plVar7[9] = (longlong)plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar7[2] = (longlong)&PTR_FUN_14b99f0d0;
    plVar7[10] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar7[2] = (longlong)&PTR_FUN_14b99f0d0;
    plVar7[10] = 0;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  local_78 = plVar11;
  local_70 = plVar7;
  if ((plVar11 != (longlong *)0x0) &&
     (((plVar7[3] == 0 || (plVar7[4] == 0)) || (*(int *)(plVar7[4] + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar11 = (longlong *)&DAT_00000020;
      plVar8 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1415dcbd9:
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        *plVar11 = (longlong)plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_1415dc7a8;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7[3] = (longlong)plVar11;
      if ((longlong *)plVar7[4] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar7[4] != (longlong *)0x0) {
          plVar11 = plVar7 + 4;
          plVar8 = (longlong *)plVar7[4];
          goto LAB_1415dcbd9;
        }
        plVar7[4] = (longlong)plVar7;
      }
LAB_1415dc7a8:
      LOCK();
      plVar11 = plVar7 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar3 = local_78;
  uVar2 = *(uint *)(lVar6 + 0xc);
  *(uint *)(local_78 + 8) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  iVar5 = *(int *)(lVar12 + 0x10);
  if (*(int *)(lVar12 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar9 = DAT_14c964868 + 1;
    bVar13 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar13) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar9);
    }
    LOCK();
    iVar5 = *(int *)(lVar12 + 0x10);
    bVar13 = iVar5 == 0;
    if (bVar13) {
      *(int *)(lVar12 + 0x10) = iVar9;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar13) {
      iVar5 = iVar9;
    }
  }
  *(int *)((longlong)plVar3 + 0x44) = iVar5;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_58 = (code *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    plVar3 = local_70;
    local_50 = 4;
    if (local_70 == (longlong *)0x0) {
      *(undefined ***)local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      *(longlong *)(local_58 + 0x10) = lVar10;
      *(undefined ***)local_58 = &PTR_FUN_14b99f180;
      *(longlong **)(local_58 + 0x18) = local_78;
      *(undefined8 *)(local_58 + 0x20) = 0;
      *(code **)(local_58 + 0x28) = FUN_140cdaece;
      *(undefined4 *)(local_58 + 0x30) = 0;
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      *(undefined ***)local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      *(longlong *)(local_58 + 0x10) = lVar10;
      *(undefined ***)local_58 = &PTR_FUN_14b99f180;
      *(longlong **)(local_58 + 0x18) = local_78;
      *(longlong **)(local_58 + 0x20) = local_70;
      LOCK();
      *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
      UNLOCK();
      *(code **)(local_58 + 0x28) = FUN_140cdaece;
      *(undefined4 *)(local_58 + 0x30) = 0;
      LOCK();
      plVar7 = local_70 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1448b6402(lVar6 + 0x7380,&local_68,&local_58);
    if (local_50 != 0) {
      if (local_58 == (code *)0x0) goto LAB_1415dc8f4;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (*(char *)(param_1 + 0x10) == '\0') {
    local_68 = FUN_141188d08;
    local_60 = 0;
    FUN_146123a94(&local_58,&local_78);
    FUN_14490d954(lVar6 + 0x8868,&local_68,&local_58);
    FUN_1449db362(&local_58);
    local_68 = FUN_141188d08;
    local_60 = 0;
    FUN_146123a94(&local_58,&local_78,&local_68);
    FUN_14490d954(lVar6 + 0x8890,&local_68,&local_58);
    FUN_1449db362(&local_58);
    local_68 = FUN_141188d08;
    local_60 = 0;
    FUN_146123a94(&local_58,&local_78,&local_68);
    FUN_14490d954(lVar6 + 35000,&local_68,&local_58);
    FUN_1449db362(&local_58);
  }
LAB_1415dc8f4:
  plVar3 = local_70;
  *param_2 = local_78;
  param_2[1] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_70 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_70)(local_70);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1415dcd2c FUN_1415dcd2c body=640 status=ok
// SIG undefined FUN_1415dcd2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415dcd2c(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x70;
      *(undefined ***)(lVar11 + 0x40 + lVar10) = &PTR_FUN_14b7bd2a0;
      FUN_14104d982(*(undefined8 *)(lVar11 + 0x58 + lVar10),*(undefined4 *)(lVar11 + 0x60 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x58 + lVar10) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(lVar11 + lVar10 + 0x40) = &PTR_FUN_14a171dc0;
      if ((*(char *)(lVar11 + lVar10 + 0x50) != '\0') &&
         (plVar7 = *(longlong **)(lVar11 + 0x48 + lVar10), plVar7 != (longlong *)0x0)) {
        if (plVar7[3] != 0) {
          FUN_1400020a8();
        }
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
        _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
        *plVar7 = (longlong)DAT_14c9a0ea0;
        DAT_14c9a0ea0 = plVar7;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      }
      uVar12 = uVar12 & ~(uint)uVar8;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1415dcf19;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415dcf19:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140875b54(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dcfae FUN_1415dcfae body=310 status=ok
// SIG undefined FUN_1415dcfae(void)

ulonglong FUN_1415dcfae(void)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadc260) {
    FUN_144b3d300(&DAT_14cadc260);
    if (DAT_14cadc260 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadc258 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.gbx.PSOWait.ShowProgressScreenMessage",1);
      _Init_thread_footer(&DAT_14cadc260);
    }
  }
  if (DAT_14cadc258 == (longlong *)0x0) {
    bVar4 = false;
    uVar5 = 0;
  }
  else {
    iVar2 = (**(code **)(*DAT_14cadc258 + 0xb0))();
    bVar4 = 0 < iVar2;
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  }
  plVar3 = DAT_14cadc188;
  if (*(code **)(*DAT_14cadc188 + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*DAT_14cadc188 + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  pcVar1 = *(code **)(*DAT_14cadc188 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = DAT_14cadc188 + 3;
    if (DAT_14cadc188[5] != 0) {
      plVar3 = (longlong *)(DAT_14cadc188[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = DAT_14cadc188 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(DAT_14cadc188);
  }
  return CONCAT71(uVar5,bVar4 & 1 < (int)plVar3[1]) & 0xffffffff;
}



// FUNCTION 1415dd0e4 FUN_1415dd0e4 body=208 status=ok
// SIG undefined FUN_1415dd0e4(void)

undefined8 FUN_1415dd0e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x38) < 1) {
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (DAT_14c947fe0 == 0) {
        lVar3 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar3);
        DAT_14c947fe0 = lVar3;
      }
      FUN_140045924(DAT_14c947fe0,&local_48,lVar1 + lVar4,1);
      if (local_48 == *param_2) {
        uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x28 + lVar4));
        break;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x30;
      uVar2 = 0;
    } while (lVar5 < *(int *)(param_1 + 0x38));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1415dd1b6 FUN_1415dd1b6 body=249 status=ok
// SIG undefined FUN_1415dd1b6(void)

longlong * FUN_1415dd1b6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar3 = (longlong *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) << 6;
    do {
      uVar1 = *param_2;
      local_58 = (void *)0x0;
      local_50 = (int)plVar3[4];
      lVar5 = (longlong)local_50;
      _Src = (void *)plVar3[3];
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar5 * 2);
      }
      bVar2 = FUN_1402ca054(uVar1,local_58);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((bVar2 & *plVar3 != 0) != 0) goto LAB_1415dd285;
      plVar3 = plVar3 + 8;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1415dd285:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dd2b0 FUN_1415dd2b0 body=353 status=ok
// SIG undefined FUN_1415dd2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415dd2b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  ulonglong local_40 [2];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x168);
  if (1 < iVar2) {
    do {
      FUN_1407f1458(**(undefined8 **)(param_1 + 0x160));
      FUN_146124bb8(param_1 + 0x160);
      iVar2 = *(int *)(param_1 + 0x168);
    } while (1 < iVar2);
  }
  if (((iVar2 == 1) && (DAT_14c762910 != 0)) && (DAT_14c762918 <= *(uint *)(param_1 + 0x170))) {
    plVar1 = *(longlong **)(param_1 + 0x160);
    fVar4 = (float)*(uint *)(*plVar1 + 0x30) / _DAT_14c76290c;
    uVar3 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
    if (uVar3 <= DAT_14c762908) {
      uVar3 = DAT_14c762908;
    }
    FUN_1407f1458();
    *(uint *)(*plVar1 + 0x30) = uVar3;
    local_40[0] = 0;
    local_40[1] = 0;
    local_48 = &PTR_FUN_14a355380;
    local_30 = 0;
    FUN_14570f178(local_40,*(int *)(*plVar1 + 0x30) * 5);
    local_78 = *(int *)(*plVar1 + 0x30) * 5;
    local_58 = &local_48;
    local_60 = 0x81;
    local_68 = 0x74;
    local_70 = 0x1c;
    FUN_1407fe5c2(*plVar1,param_2,L"NiagaraGPUDrawIndirectArgs",4);
    *(undefined4 *)(param_1 + 0x170) = 0;
    if (local_40[0] != 0 && (local_40[0] & 1) == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415dd412 FUN_1415dd412 body=495 status=ok
// SIG undefined FUN_1415dd412(void)

void FUN_1415dd412(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x208));
  if (*(int *)(param_1 + 0x238) < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  local_40 = param_1 + 0x70;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_88 = plVar1;
  local_60 = plVar1;
  local_58 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    bVar3 = false;
    do {
      if ((longlong)*(int *)(param_1 + 0x238) != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*local_88 + (longlong)iStack_6c * 0x98) ==
              *(longlong *)(*(longlong *)(param_1 + 0x230) + lVar2)) {
            FUN_14694ebe4(local_60);
            local_50 = CONCAT11(local_50._1_1_,1);
            bVar3 = true;
            break;
          }
          lVar2 = lVar2 + 8;
        } while ((longlong)*(int *)(param_1 + 0x238) * 8 != lVar2);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14694d96a(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  else {
    bVar3 = false;
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_146125c7e(param_1 + 0x230,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x208));
  if (bVar3) {
    FUN_146936706(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dd618 FUN_1415dd618 body=277 status=ok
// SIG undefined FUN_1415dd618(void)

void FUN_1415dd618(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Color";
  local_48 = 5;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Color";
  local_48 = 5;
  FUN_140208c1e(&DAT_14caeb190,local_58,local_54,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeb1a0,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dd72e FUN_1415dd72e body=258 status=ok
// SIG undefined FUN_1415dd72e(void)

void FUN_1415dd72e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e6b00) {
    FUN_144b3d300(&DAT_14c9e6b00);
    if (DAT_14c9e6b00 == -1) {
      FUN_1415dd832(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x234;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6a80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf62a);
      _Init_thread_footer(&DAT_14c9e6b00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415dd832 FUN_1415dd832 body=226 status=ok
// SIG undefined FUN_1415dd832(void)

longlong * FUN_1415dd832(longlong *param_1)

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
  pcVar13 = FUN_1462d42be;
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



// FUNCTION 1415dd916 FUN_1415dd916 body=209 status=ok
// SIG undefined FUN_1415dd916(void)

void FUN_1415dd916(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  if ((((param_1 != (longlong *)0x0) && (DAT_14caa8578 != param_2)) &&
      (lVar5 = (**(code **)(*param_1 + 0x180))(), lVar5 != 0)) &&
     (FUN_14132b09a(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
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
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_143d842f2(local_28,&local_18,0);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415dd9e8 FUN_1415dd9e8 body=331 status=ok
// SIG undefined FUN_1415dd9e8(void)

void FUN_1415dd9e8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1a4 + (longlong)iVar4 * 0x1a8) * 4) =
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



// FUNCTION 1415ddb34 FUN_1415ddb34 body=610 status=ok
// SIG undefined FUN_1415ddb34(void)

void FUN_1415ddb34(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0);
    }
LAB_1415ddb79:
    uVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_1415ddc6b;
    FUN_1446efa72(plVar4,0);
    if (0 < (int)uVar7) goto LAB_1415ddb79;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_1415ddc3d;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_1415ddc3d:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c * 0x1a8;
      uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar2 + lVar5);
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x1a4 + lVar5) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x1a0 + lVar5) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1415ddc6b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ddd98 FUN_1415ddd98 body=96 status=ok
// SIG undefined FUN_1415ddd98(void)

undefined8 * FUN_1415ddd98(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b96e190;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 1415dddf8 FUN_1415dddf8 body=286 status=ok
// SIG undefined FUN_1415dddf8(void)

void FUN_1415dddf8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    lVar5 = param_1 + 0x4140;
    if (*(longlong *)(param_1 + 0x4150) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x4150);
    }
    if ((longlong)*(int *)(param_1 + 0x4158) != 0) {
      pcVar3 = (char *)(param_1 + 0x4138);
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar5 + lVar6) == DAT_14cb760e0) {
          if ((*pcVar3 == '\x01') && (FUN_1400bc8c2(pcVar3,&DAT_14cb760e0), *pcVar3 == '\0')) {
            *(undefined4 *)(param_1 + 0x4164) = 0;
            *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) | 4;
          }
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(param_1 + 0x4158) * 8 != lVar6);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x3170);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x370) & 4) == 0)) {
    FUN_1415ddf16(lVar5 + 0xd8);
  }
  *(undefined1 *)(param_1 + 0x3168) = 0;
  *(undefined8 *)(param_1 + 0x3170) = 0;
  plVar4 = *(longlong **)(param_1 + 0x3178);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x3178) = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415ddf12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415ddf16 FUN_1415ddf16 body=1931 status=ok
// SIG undefined FUN_1415ddf16(void)

void FUN_1415ddf16(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = FUN_140153468();
  if (lVar7 != 0) {
    if (param_1[1] == 0) {
LAB_1415de61a:
      lVar11 = 0;
    }
    else {
      uVar2 = *param_1;
      lVar11 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
        goto LAB_1415de61a;
        lVar11 = *plVar14;
      }
    }
    local_80 = *(undefined8 *)(lVar7 + 0x18);
    FUN_1400bc8c2(lVar11 + 0x1ac8);
    FUN_1409e8446();
  }
  if (param_1[1] == 0) {
LAB_1415de613:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
      goto LAB_1415de613;
      lVar7 = *plVar14;
    }
  }
  plVar14 = *(longlong **)(&DAT_00001ce8 + lVar7);
  lVar7 = FUN_140153468(param_1);
  if ((lVar7 == 0) || (((byte)param_1[0xa6] & 2) != 0)) goto LAB_1415de5ef;
  *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 2;
  lVar7 = FUN_140153468(param_1);
  if (((*(byte *)(lVar7 + 0xfa) & 4) != 0) &&
     (plVar14 != (longlong *)0x0 && (char)plVar14[0x2f] == '\x03')) {
    FUN_14069ce7c();
    plVar8 = (longlong *)(**(code **)(*plVar14 + 0x288))(plVar14);
    if (plVar8 != (longlong *)0x0) {
      uVar9 = FUN_14069ce7c();
      plVar10 = (longlong *)FUN_144718840(plVar8,uVar9);
      if (plVar10 != (longlong *)0x0 && plVar8 != plVar10) {
        lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_1400bc8c2(lVar7 + 0x18,&DAT_14cb76308);
        FUN_1400bc8c2(lVar7 + 0x40);
      }
    }
  }
  FUN_143cf5122(param_1);
  if (*(byte *)(plVar14 + 0x2f) < 2) {
LAB_1415de260:
    lVar7 = FUN_140153468(param_1);
    if (((*(byte *)(lVar7 + 0x101) & 0x40) != 0) && (plVar14 != (longlong *)0x0)) {
      FUN_1407ca880();
      plVar8 = (longlong *)(**(code **)(*plVar14 + 0x288))(plVar14);
      if (plVar8 != (longlong *)0x0) {
        FUN_1407ca880();
        plVar10 = (longlong *)FUN_144718840(plVar8);
        if ((plVar10 != (longlong *)0x0 && plVar8 != plVar10) &&
           (lVar7 = FUN_140153468(param_1), *(longlong *)(lVar7 + 0xb68) != 0)) {
          lVar7 = (**(code **)(*plVar10 + 0x50))(plVar10);
          lVar11 = FUN_140153468(param_1);
          if ((longlong)*(int *)(lVar7 + 0x48) != 0) {
            lVar15 = 0;
            do {
              lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + lVar15);
              if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) == *(longlong *)(lVar11 + 0xb68))) {
                FUN_140153468(param_1);
                (**(code **)(*plVar10 + 0x28))(plVar10);
                break;
              }
              lVar15 = lVar15 + 0x10;
            } while ((longlong)*(int *)(lVar7 + 0x48) * 0x10 != lVar15);
          }
        }
      }
    }
  }
  else {
    if (param_1[1] == 0) {
LAB_1415de644:
      uVar9 = 0;
    }
    else {
      uVar2 = *param_1;
      uVar9 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar12 + 2) != param_1[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
        goto LAB_1415de644;
        uVar9 = *puVar12;
      }
    }
    FUN_1409df526(uVar9);
    if ((char)plVar14[0x2f] != '\x03') goto LAB_1415de260;
    if (plVar14 != (longlong *)0x0) {
      FUN_1407ca880();
      plVar8 = (longlong *)(**(code **)(*plVar14 + 0x288))(plVar14);
      if (plVar8 != (longlong *)0x0) {
        FUN_1407ca880();
        plVar10 = (longlong *)FUN_144718840(plVar8);
        if (plVar10 != (longlong *)0x0 && plVar8 != plVar10) {
          lVar7 = FUN_140153468(param_1);
          if (*(longlong *)(lVar7 + 0xb68) != 0) {
            lVar7 = (**(code **)(*plVar10 + 0x50))(plVar10);
            lVar11 = FUN_140153468(param_1);
            if ((longlong)*(int *)(lVar7 + 0x48) != 0) {
              lVar15 = 0;
              do {
                lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + lVar15);
                if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) == *(longlong *)(lVar11 + 0xb68)))
                {
                  FUN_140153468(param_1);
                  (**(code **)(*plVar10 + 0x28))(plVar10);
                  break;
                }
                lVar15 = lVar15 + 0x10;
              } while ((longlong)*(int *)(lVar7 + 0x48) * 0x10 != lVar15);
            }
          }
          lVar7 = FUN_140153468(param_1);
          if (*(longlong *)(lVar7 + 0xb78) != 0) {
            lVar7 = (**(code **)(*plVar10 + 0x50))(plVar10);
            lVar11 = FUN_140153468(param_1);
            if ((longlong)*(int *)(lVar7 + 0x48) != 0) {
              lVar15 = 0;
              do {
                lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + lVar15);
                if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) == *(longlong *)(lVar11 + 0xb78)))
                {
                  FUN_140153468(param_1);
                  (**(code **)(*plVar10 + 0x28))(plVar10);
                  break;
                }
                lVar15 = lVar15 + 0x10;
              } while ((longlong)*(int *)(lVar7 + 0x48) * 0x10 != lVar15);
            }
          }
        }
      }
      if ((char)plVar14[0x2f] != '\x03') goto LAB_1415de260;
    }
  }
  uVar9 = FUN_140153468(param_1);
  plVar8 = *(longlong **)(param_1 + 4);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    plVar10 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1415de35b;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    plVar10 = *(longlong **)(param_1 + 2);
    bVar4 = false;
  }
LAB_1415de35b:
  local_80 = CONCAT71(CONCAT61(local_80._2_6_,(char)param_1[0x8e]),1);
  if (param_1[0x8d] == 0) {
LAB_1415de621:
    local_78 = 0;
  }
  else {
    uVar2 = param_1[0x8c];
    local_78 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_1[0x8d] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))
         ) goto LAB_1415de621;
      local_78 = *puVar12;
    }
  }
  if (param_1[0x3b] == 0) {
LAB_1415de628:
    local_70 = 0;
  }
  else {
    uVar2 = param_1[0x3a];
    local_70 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_1[0x3b] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))
         ) goto LAB_1415de628;
      local_70 = *puVar12;
    }
  }
  local_40 = *(undefined8 *)(param_1 + 0x60);
  local_50 = *(undefined8 *)(param_1 + 0x5c);
  uStack_48 = *(undefined8 *)(param_1 + 0x5e);
  if (param_1[1] == 0) {
LAB_1415de62f:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         ((*(uint *)(plVar13 + 2) != param_1[1] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
      goto LAB_1415de62f;
      lVar7 = *plVar13;
    }
  }
  local_58 = *(undefined8 *)(lVar7 + 0x138);
  local_68 = *(undefined4 *)(lVar7 + 0x128);
  uStack_64 = *(undefined4 *)(lVar7 + 300);
  uStack_60 = *(undefined4 *)(lVar7 + 0x130);
  uStack_5c = *(undefined4 *)(lVar7 + 0x134);
  FUN_141135066();
  if (plVar10 != (longlong *)0x0) {
    if ((char)plVar14[0x2f] == '\x03') {
      (**(code **)(*plVar14 + 0x578))(plVar14);
      (**(code **)(*plVar10 + 0xd0))(plVar10,1);
    }
    if (param_1[1] == 0) {
LAB_1415de636:
      plVar14 = (longlong *)0x0;
    }
    else {
      uVar2 = *param_1;
      plVar14 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar12 + 2) != param_1[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
        goto LAB_1415de636;
        plVar14 = (longlong *)*puVar12;
      }
    }
    (**(code **)(*plVar14 + 0xe28))(plVar14,uVar9,&local_80);
    (**(code **)(*plVar10 + 0xc0))(plVar10,1);
    plVar10[0x1a] = 0;
    if (param_1[1] == 0) {
LAB_1415de63d:
      plVar14 = (longlong *)0x0;
    }
    else {
      uVar2 = *param_1;
      plVar14 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar12 + 2) != param_1[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
        goto LAB_1415de63d;
        plVar14 = (longlong *)*puVar12;
      }
    }
    (**(code **)(*plVar14 + 0xe40))(plVar14,uVar9,&local_80);
  }
  if (!bVar4) {
    LOCK();
    plVar14 = plVar8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1415de5ef:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415de6a2 FUN_1415de6a2 body=303 status=ok
// SIG undefined FUN_1415de6a2(void)

undefined4 FUN_1415de6a2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong unaff_RBP;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar5 = (**(code **)(*param_1 + 0x20))();
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x100) == 0)) {
    uVar8 = 0;
  }
  else {
    if ((longlong)(int)param_3[1] != 0) {
      puVar10 = (undefined8 *)*param_3;
      puVar9 = puVar10 + (longlong)(int)param_3[1] * 2;
      do {
        iVar1 = *(int *)(lVar5 + 0x140);
        if ((longlong)iVar1 != 0) {
          puVar2 = (undefined8 *)*puVar10;
          lVar3 = *(longlong *)(lVar5 + 0x138);
          lVar6 = 0;
          unaff_RBP = 0;
          do {
            cVar4 = (**(code **)*puVar2)(puVar2,*(undefined8 *)(lVar3 + lVar6));
            iVar7 = (int)unaff_RBP;
            if (cVar4 != '\0') {
              if ((-1 < iVar7) && (iVar7 < *(int *)(lVar5 + 0x140))) {
                FUN_14666d71e(lVar5 + 0x138,unaff_RBP);
                FUN_146036114(lVar5 + 0x138);
              }
              break;
            }
            unaff_RBP = (ulonglong)(iVar7 + 1);
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar6);
        }
        puVar10 = puVar10 + 2;
      } while (puVar10 != puVar9);
    }
    *(int *)(lVar5 + 0x114) = *(int *)(lVar5 + 0x30) - *(int *)(lVar5 + 0x140);
    uVar8 = (undefined4)CONCAT71((int7)(unaff_RBP >> 8),1);
  }
  (**(code **)(*param_1 + 1000))(param_1,param_2,param_3,uVar8);
  return uVar8;
}



// FUNCTION 1415de7d2 FUN_1415de7d2 body=169 status=ok
// SIG undefined FUN_1415de7d2(void)

void FUN_1415de7d2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b99f720;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415de850;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415de850:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415de868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415de87c FUN_1415de87c body=287 status=ok
// SIG undefined FUN_1415de87c(void)

longlong FUN_1415de87c(longlong param_1,undefined8 *param_2,char param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_4;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0;
    do {
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar3 = (undefined2 *)*param_2;
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
      cVar1 = FUN_1402ca022(*(undefined8 *)(lVar2 + 0x18),puVar3);
      if (cVar1 != '\0') goto LAB_1415de8ea;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  lVar2 = 0;
LAB_1415de8ea:
  if ((lVar2 == 0) && (param_3 != '\0')) {
    if (param_4 == 0) {
      FUN_1400b22c2(local_58,"Windows");
    }
    else {
      FUN_1400021e4(&local_48,local_58);
    }
    FUN_140056680(local_68,&DAT_149dfb77a);
    local_78 = 0;
    lVar2 = FUN_1415de99c(param_1,param_2,local_58,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415de99c FUN_1415de99c body=2208 status=ok
// SIG undefined FUN_1415de99c(void)

longlong FUN_1415de99c(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined2 *param_5)

{
  void *pvVar1;
  byte bVar2;
  undefined8 uVar3;
  wchar_t *_Str2;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 **ppuVar8;
  longlong lVar9;
  ushort uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_1e8 [32];
  undefined2 *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined2 *local_190;
  uint local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined2 *local_178;
  int local_170;
  undefined2 *local_168;
  int local_160;
  wchar_t *local_158;
  uint local_150;
  undefined2 *local_148;
  uint local_140;
  int local_13c;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined1 local_120 [216];
  ulonglong local_48;
  
  uVar3 = DAT_14c951640;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((int)param_2[1] == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  uVar6 = FUN_14129a444();
  lVar7 = FUN_140277b32(uVar6,uVar3,puVar13);
  if (lVar7 != 0) goto LAB_1415dea04;
  if (param_5 == (undefined2 *)0x0) {
    local_1b4 = 0;
  }
  else {
    FUN_1446f470e(&local_180,param_5,1);
    lVar7 = FUN_140f7ad96(local_180);
    local_1b4 = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),*(undefined1 *)(lVar7 + 0x18));
  }
  FUN_1408e76da(local_120);
  local_1b0 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872b28);
  local_190 = (undefined2 *)0x0;
  local_188 = *(uint *)(param_4 + 1);
  lVar7 = (longlong)(int)local_188;
  pvVar1 = (void *)*param_4;
  if (lVar7 == 0) {
    local_184 = 0;
LAB_1415deaef:
    lVar7 = FUN_14129a444();
    local_138 = *(undefined8 **)(lVar7 + 0x18);
    FUN_1400021e4(&local_138,&local_148);
    puVar13 = &DAT_149dfb77a;
    puVar14 = &DAT_149dfb77a;
    if (local_140 != 0) {
      puVar14 = local_148;
    }
    if ((int)param_2[1] != 0) {
      puVar13 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_138,L"%s %s",puVar13,puVar14);
    if (local_148 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar11 = local_138;
    if ((int)uStack_130 == 0) {
      puVar11 = (undefined8 *)&DAT_149dfb77a;
    }
    FUN_1412734f2(local_1b0,puVar11,L"BaseProfileName");
    if (local_138 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1446dd670(&local_190,local_188,0);
    memcpy(local_190,pvVar1,lVar7 * 2);
    if (local_188 < 2) goto LAB_1415deaef;
  }
  uVar3 = DAT_14c951640;
  if (local_188 - 2 < 0x7fffffff) {
    if (local_188 == *(uint *)(param_2 + 1)) {
      if ((int)local_188 < 2) goto LAB_1415dec1d;
      lVar9 = 0;
      lVar7 = 0;
      while( true ) {
        uVar10 = *(ushort *)((longlong)local_190 + lVar7);
        uVar12 = (ulonglong)uVar10;
        uVar15 = *(ushort *)(*param_2 + lVar7);
        if (uVar10 != uVar15) {
          if ((uVar15 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar16 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_1415debe2;
          }
          if (uVar10 != uVar15) goto LAB_1415dede1;
          goto LAB_1415dec1d;
        }
        if (uVar10 == 0) break;
LAB_1415debe2:
        lVar7 = lVar7 + 2;
      }
    }
    else {
      if (*(uint *)(param_2 + 1) + local_188 == 1) goto LAB_1415dec1d;
LAB_1415dede1:
      puVar13 = local_190;
      if (local_188 == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      uVar6 = FUN_14129a444();
      lVar9 = FUN_140277b32(uVar6,uVar3,puVar13,0);
      if (lVar9 == 0) {
        local_138 = (undefined8 *)0x0;
        uStack_130 = 1;
        FUN_1447a1bd6(&local_138,0);
        puVar11 = local_138;
        *local_138 = 0;
        iVar4 = (int)param_2[1];
        pvVar1 = (void *)*param_2;
        *(int *)(local_138 + 1) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)local_138 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(local_138,iVar4,0);
          memcpy((void *)*puVar11,pvVar1,(longlong)iVar4 * 2);
        }
        puVar13 = local_190;
        local_148 = (undefined2 *)0x0;
        lVar7 = (longlong)(int)local_188;
        local_140 = local_188;
        local_1a8 = param_3;
        local_1a0 = param_1;
        if (lVar7 == 0) {
          local_13c = 0;
        }
        else {
          FUN_1446dd670(&local_148,local_188,0);
          memcpy(local_148,puVar13,lVar7 * 2);
          puVar13 = local_148;
          uVar5 = local_140;
          while (local_148 = puVar13, local_140 = uVar5, 1 < (int)uVar5) {
            local_158 = (wchar_t *)0x0;
            local_150 = uVar5;
            FUN_1446dd670(&local_158,uVar5,0);
            memcpy(local_158,puVar13,(ulonglong)(uVar5 * 2));
            uVar5 = local_150;
            _Str2 = local_158;
            lVar7 = (longlong)(int)uStack_130;
            bVar2 = 1;
            puVar11 = local_138;
            if (lVar7 != 0) {
              lVar9 = lVar7 * 0x10;
              puVar11 = local_138 + lVar7 * 2;
              puVar17 = local_138;
              do {
                if (*(uint *)(puVar17 + 1) == uVar5) {
                  if (((int)uVar5 < 2) || (iVar4 = wcscmp((wchar_t *)*puVar17,_Str2), iVar4 == 0))
                  goto LAB_1415defd1;
                }
                else if (*(uint *)(puVar17 + 1) + uVar5 == 1) {
LAB_1415defd1:
                  bVar2 = 0;
                  puVar11 = puVar17;
                  break;
                }
                puVar17 = puVar17 + 2;
                lVar9 = lVar9 + -0x10;
              } while (lVar9 != 0);
            }
            if (_Str2 != (wchar_t *)0x0) {
              FUN_1400020a8(_Str2);
            }
            uVar12 = uStack_130;
            if ((bool)(bVar2 | puVar11 == (undefined8 *)0x0)) {
              lVar7 = (longlong)(int)uStack_130;
              uVar5 = (int)uStack_130 + 1;
              uStack_130 = CONCAT44(uStack_130._4_4_,uVar5);
              if (uStack_130._4_4_ < uVar5) {
                FUN_1447a1bd6(&local_138,uVar12 & 0xffffffff);
              }
              puVar13 = local_148;
              puVar11 = local_138 + lVar7 * 2;
              local_138[lVar7 * 2] = 0;
              lVar9 = (longlong)(int)local_140;
              *(uint *)(local_138 + lVar7 * 2 + 1) = local_140;
              if (lVar9 == 0) {
                *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar11,local_140,0);
                memcpy((void *)*puVar11,puVar13,lVar9 * 2);
              }
              lVar7 = FUN_14129a444();
              local_168 = *(undefined2 **)(lVar7 + 0x18);
              FUN_1400021e4(&local_168,&local_178);
              puVar13 = &DAT_149dfb77a;
              if (local_170 != 0) {
                puVar13 = local_178;
              }
              puVar14 = &DAT_149dfb77a;
              if (local_140 != 0) {
                puVar14 = local_148;
              }
              FUN_140002266(&local_168,L"%s %s",puVar14,puVar13);
              if (local_178 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_140 = 0;
              if (local_13c < 0) {
                FUN_1446f8c06(&local_148,0);
              }
              if (local_148 != (undefined2 *)0x0) {
                *local_148 = 0;
              }
              puVar13 = &DAT_149dfb77a;
              if (local_160 != 0) {
                puVar13 = local_168;
              }
              FUN_1412734f2(local_1b0,puVar13,L"BaseProfileName",&local_148);
              puVar13 = local_148;
              uVar5 = local_140;
              if (local_168 != (undefined2 *)0x0) {
                FUN_1400020a8();
                puVar13 = local_148;
                uVar5 = local_140;
              }
            }
            else {
              local_1c8 = &DAT_149dfb77a;
              if (local_140 != 0) {
                local_1c8 = local_148;
              }
              puVar13 = &DAT_149dfb77a;
              if ((int)param_2[1] != 0) {
                puVar13 = (undefined2 *)*param_2;
              }
              FUN_140033559(".\\Runtime/Engine/Private/DeviceProfiles/DeviceProfileManager.cpp",
                            0x304,L"Device Profile %s has a circular dependency on %s",puVar13);
              puVar13 = local_148;
              uVar5 = local_140;
            }
          }
        }
        if (local_148 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_138,uStack_130 & 0xffffffff);
        param_1 = local_1a0;
        param_3 = local_1a8;
        if (local_138 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_138,&DAT_149dfb77a);
        local_1c8 = param_5;
        lVar9 = FUN_1415de99c(param_1,&local_190,param_3,&local_138);
        if (local_138 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
LAB_1415dec1d:
    lVar9 = 0;
  }
  if ((int)param_2[1] == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_198,puVar13,1);
  lVar7 = FUN_1458845ea(DAT_14c951640,local_198);
  if (param_5 != (undefined2 *)0x0) {
    FUN_14020fad6(lVar7 + 0x70,param_5);
    local_1c8 = (undefined2 *)0x0;
    uStack_1c0 = 0;
    FUN_1400033ba(lVar7,0,0,0);
    if ((char)local_1b4 == '\0') {
      FUN_14020fad6(lVar7 + 0x70,&DAT_149dfb77a);
    }
  }
  FUN_140efcff0(lVar7);
  if ((*(int *)(lVar7 + 0x40) < 2) && (puVar11 = (undefined8 *)(lVar7 + 0x38), puVar11 != param_3))
  {
    iVar4 = *(int *)(param_3 + 1);
    pvVar1 = (void *)*param_3;
    *(int *)(lVar7 + 0x40) = iVar4;
    if (iVar4 == 0 && *(int *)(lVar7 + 0x44) == 0) {
      *(undefined4 *)(lVar7 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(puVar11,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar11,pvVar1,(longlong)iVar4 * 2);
      }
    }
  }
  ppuVar8 = (undefined2 **)(lVar7 + 0x48);
  uVar5 = *(uint *)(lVar7 + 0x50);
  if (0x7ffffffe < *(uint *)(lVar7 + 0x50) - 2) {
    ppuVar8 = &local_190;
    uVar5 = local_188;
  }
  iVar4 = uVar5 - 1;
  if (uVar5 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2((undefined2 **)(lVar7 + 0x48),*ppuVar8,iVar4);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(lVar7 + 0x60) = lVar9;
  uVar5 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  FUN_1447f71cc(lVar9,0x40000000);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  iVar4 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
    FUN_1463c4c32((longlong *)(param_1 + 0x28),iVar4);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8) = lVar7;
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  FUN_1447f69b6(param_1 + 0x48);
  if (local_190 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(local_120);
LAB_1415dea04:
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415df23e FUN_1415df23e body=280 status=ok
// SIG undefined FUN_1415df23e(void)

void FUN_1415df23e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 0x48) != 0) {
    uVar3 = *(uint *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x38) != 0) {
      uVar3 = FUN_144a78877(uVar3);
    }
    uVar4 = *(uint *)(param_2 + 0x3c);
    if (*(int *)(param_2 + 0x44) != 0) {
      uVar4 = FUN_144a78877(uVar4);
    }
    uVar5 = *(uint *)(param_2 + 0x48);
    if (*(int *)(param_2 + 0x50) != 0) {
      uVar5 = FUN_144a78877(uVar5);
    }
    iVar2 = FUN_1410b645c((longlong *)(param_1 + 0x4d8),uVar4 ^ uVar3 ^ uVar5,param_2 + 0x30);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x4d8);
      lVar6 = lVar1 + (longlong)iVar2 * 0x50;
      if ((lVar6 != 0) && (lVar1 + (longlong)iVar2 * 0x50 != -0x28)) {
        local_38 = param_2;
        FUN_1410b5ed2();
        if ((*(int *)(lVar6 + 0x30) < 1) && (*(int *)(lVar6 + 0x40) < 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415df36c FUN_1415df36c body=281 status=ok
// SIG undefined FUN_1415df36c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415df36c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae1d28) {
    FUN_144b3d300(&DAT_14cae1d28);
    if (DAT_14cae1d28 == -1) {
      FUN_14612a35c();
      FUN_140db5666(&DAT_14cae1c80,0,&DAT_14cae1c18,L"FRadixSortClearOffsetsCS",
                    L"/Engine/Private/RadixSortShaders.usf",L"RadixSort_ClearOffsets",5,1,
                    FUN_147adda34,FUN_147add9e0,&LAB_147add9dc,&LAB_147add9d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cae1c80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143519d8d);
      _Init_thread_footer(&DAT_14cae1d28);
    }
  }
  return &DAT_14cae1c80;
}



// FUNCTION 1415df485 FUN_1415df485 body=439 status=ok
// SIG undefined FUN_1415df485(void)

void FUN_1415df485(void)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = DAT_14c8407a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3650) {
    FUN_144b3d300(&DAT_14caf3650);
    if (DAT_14caf3650 == -1) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 200))(plVar3,L"r.DetailMode",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14caf3648 = (int *)0x0;
      }
      else {
        DAT_14caf3648 = (int *)(**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14caf3650);
    }
  }
  iVar2 = *DAT_14caf3648;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3658) {
    FUN_144b3d300(&DAT_14caf3658);
    if (DAT_14caf3658 == -1) {
      DAT_14caf3654 = iVar2;
      _Init_thread_footer(&DAT_14caf3658);
    }
  }
  if (DAT_14caf3654 != iVar2) {
    DAT_14caf3654 = iVar2;
    FUN_14612b044(&local_28,0x10,1,0);
    if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
      do {
        pbVar1 = (byte *)(*(longlong *)(local_28 + (ulonglong)local_18 * 8) + 0x690);
        *pbVar1 = *pbVar1 | 0x40;
        lVar4 = (longlong)(int)local_18;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
          local_18 = local_18 + 1;
          if (local_20 <= lVar4) goto LAB_1415df590;
        } while (*(longlong *)(local_28 + lVar4 * 8) == 0);
      } while ((-2 < lVar5) && ((int)local_18 < local_20));
    }
LAB_1415df590:
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415df63e FUN_1415df63e body=3980 status=ok
// SIG undefined FUN_1415df63e(void)

void FUN_1415df63e(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  code *pcVar28;
  uint uVar29;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  char local_11a;
  char local_119;
  uint *local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined1 local_bc [12];
  ulonglong local_b0;
  int local_a8;
  undefined4 local_9c;
  code *local_98;
  longlong *plStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((param_2 == (longlong *)0x0) || (*(int *)(param_1 + 0xf8) == *(int *)(param_1 + 0x124)))
  goto LAB_1415e0365;
  plVar9 = (longlong *)(param_1 + 0x48);
  local_110 = param_1;
  (**(code **)(*param_2 + 0x2d8))(param_2,&local_b0);
  iVar21 = local_a8 + -1;
  if (local_a8 == 0) {
    iVar21 = 0;
  }
  iVar23 = 1;
  FUN_1446f82e2(&local_98,iVar21,local_b0,1);
  pcVar2 = local_98;
  FUN_140a2bc24(plVar9,&local_98);
  lVar18 = local_110;
  local_11a = param_3 == '\x02';
  *plStack_90 = (longlong)pcVar2;
  *(char *)(plStack_90 + 1) = local_11a;
  *(undefined4 *)((longlong)plStack_90 + 0xc) = 0xffffffff;
  pcVar28 = (code *)&local_9c;
  local_9c = local_98._0_4_;
  uVar29 = (uint)((ulonglong)pcVar2 >> 0x10);
  uVar17 = (uint)pcVar2 & 0xffff;
  uVar29 = ((uint)pcVar2 << 0x10 | uVar17) + (int)((ulonglong)pcVar2 >> 0x20) +
           (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar17 >> 4);
  local_178 = 0;
  local_100 = plVar9;
  cVar3 = FUN_140a2bb88(plVar9,uVar29,plStack_90);
  if (cVar3 == '\0') {
    uVar17 = *(int *)(lVar18 + 0x50) - *(int *)(lVar18 + 0x7c);
    if (3 < uVar17) {
      uVar5 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar23 <= *(int *)(lVar18 + 0x90))) {
      uVar29 = *(int *)(lVar18 + 0x90) - 1U & uVar29;
      *(uint *)(plStack_90 + 2) = uVar29;
      lVar19 = *(longlong *)(lVar18 + 0x88);
      if (*(longlong *)(lVar18 + 0x88) == 0) {
        lVar19 = lVar18 + 0x80;
      }
      pcVar28 = (code *)((longlong)*(int *)(lVar18 + 0x90) - 1U & (longlong)(int)uVar29);
      *(undefined4 *)((longlong)plStack_90 + 0xc) = *(undefined4 *)(lVar19 + (longlong)pcVar28 * 4);
      lVar19 = *(longlong *)(lVar18 + 0x88);
      if (*(longlong *)(lVar18 + 0x88) == 0) {
        lVar19 = lVar18 + 0x80;
      }
      *(undefined4 *)(lVar19 + ((longlong)*(int *)(lVar18 + 0x90) - 1U & (longlong)(int)uVar29) * 4)
           = local_9c;
    }
    else {
      *(int *)(lVar18 + 0x90) = iVar23;
      FUN_140a2be0e(local_100);
    }
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar19 = DAT_14cb84f20;
  local_d8 = param_2;
  lVar6 = (**(code **)(*param_2 + 0x180))(param_2);
  uVar5 = 0;
  if (lVar6 == 0) goto LAB_1415df924;
  if (((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) || (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 == 0)
     ) goto LAB_1415df91f;
  if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
    lVar7 = FUN_14019a418(lVar6 + 0x2c0);
    if (lVar7 == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20);
      if (lVar6 != 0) {
        if (DAT_14cb10130 == 0) {
          local_98 = FUN_140754f84;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_148 = &LAB_147da9a76;
          local_150 = FUN_1409f3105;
          local_158 = L"Engine";
          local_160 = 0;
          local_168 = 0x10000000;
          local_170 = 8;
          local_178 = CONCAT44(local_178._4_4_,0x990);
          pcVar28 = FUN_14640e230;
          local_140 = &local_98;
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130);
        }
        if ((((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
            (*(longlong *)(lVar6 + 0x30) != 0)) &&
           (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x2b0), lVar6 != 0))
        goto LAB_1415df8a7;
        goto LAB_1415df91f;
      }
      goto LAB_1415df924;
    }
    lVar6 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x78))(lVar7 + 0x28);
    if (*(longlong *)(lVar6 + 0x30) == 0) goto LAB_1415df924;
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x2b0);
    if (lVar6 == 0) {
LAB_1415df91f:
      uVar25 = 0;
    }
    else {
LAB_1415df8a7:
      if (*(longlong *)(lVar6 + 0x3f0) == 0) goto LAB_1415df91f;
      uVar25 = CONCAT71((int7)((ulonglong)pcVar28 >> 8),
                        *(undefined1 *)(*(longlong *)(lVar6 + 0x3f0) + 0x3b));
    }
  }
  else {
LAB_1415df924:
    uVar25 = 0;
  }
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = (code *)0x0;
  plStack_90 = (longlong *)0x0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar11 = (uint *)(lVar18 + 0x100);
  iVar21 = *(int *)(lVar18 + 0x118);
  local_119 = param_3;
  if (iVar21 == 0) {
    uVar27 = 1;
    iVar20 = 0;
    iVar23 = 0;
  }
  else {
    puVar22 = *(uint **)(lVar18 + 0x110);
    if (*(uint **)(lVar18 + 0x110) == (uint *)0x0) {
      puVar22 = puVar11;
    }
    uVar29 = *puVar22;
    if (uVar29 == 0) {
      iVar23 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar23 = iVar21 + -1;
      }
      uVar17 = iVar23 >> 5;
      if (iVar23 >> 5 < 1) {
        uVar17 = 0;
      }
      uVar5 = 0;
      iVar20 = 0;
      do {
        iVar23 = 0;
        if (uVar17 == uVar5) goto LAB_1415e02b9;
        iVar20 = iVar20 + 0x20;
        uVar29 = puVar22[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar5 = 0;
      iVar20 = 0;
    }
    uVar27 = (ulonglong)(-uVar29 & uVar29);
    uVar26 = uVar27 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar23 = (iVar20 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar23) {
      iVar23 = iVar21;
    }
  }
  if (iVar23 != iVar21) {
    local_d0 = lVar19 + 0x468;
    local_f0 = lVar18 + 0x80;
    local_f8 = lVar18 + 0xd8;
    uVar29 = 0xffffffff;
    local_108 = lVar19;
    cVar3 = local_11a;
    local_118 = puVar11;
    local_e0 = uVar25;
LAB_1415dfa5c:
    if ((*(char *)(*(longlong *)(lVar18 + 0xf0) + 0x28 + (longlong)iVar23 * 0x38) != cVar3) &&
       (*(int *)(lVar19 + 0x438) != *(int *)(lVar19 + 0x464))) {
      puVar22 = (uint *)(*(longlong *)(lVar18 + 0xf0) + (longlong)iVar23 * 0x38);
      lVar18 = *(longlong *)(lVar19 + 0x470);
      if (*(longlong *)(lVar19 + 0x470) == 0) {
        lVar18 = local_d0;
      }
      iVar23 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar19 + 0x478) - 1U & *puVar22) * 4);
      if (iVar23 != -1) {
        do {
          lVar18 = *(longlong *)(lVar19 + 0x430) + (longlong)iVar23 * 0x40;
          if (*(uint *)(*(longlong *)(lVar19 + 0x430) + (longlong)iVar23 * 0x40) == *puVar22) {
            if (lVar18 != 0) {
              (**(code **)(*local_d8 + 0x2d8))(local_d8,&local_b0);
              cVar4 = FUN_14589f39c(lVar18 + 0x28,&local_b0);
              if (local_b0 != 0) {
                FUN_1400020a8();
              }
              puVar11 = local_118;
              lVar19 = local_108;
              cVar3 = local_11a;
              if (cVar4 != '\0') {
                if ((char)local_e0 != '\x01') {
                  if (((local_e0 & 0xff) == 0) && ((longlong)*(int *)(lVar18 + 0x30) != 0)) {
                    plVar10 = *(longlong **)(lVar18 + 0x28);
                    plVar9 = plVar10 + *(int *)(lVar18 + 0x30);
                    do {
                      if (*(int *)(local_110 + 0x50) != *(int *)(local_110 + 0x7c)) {
                        lVar18 = *plVar10;
                        uVar17 = (uint)((ulonglong)lVar18 >> 0x10);
                        uVar14 = (uint)lVar18 & 0xffff;
                        lVar6 = *(longlong *)(local_110 + 0x88);
                        if (*(longlong *)(local_110 + 0x88) == 0) {
                          lVar6 = local_f0;
                        }
                        iVar23 = *(int *)(lVar6 + (ulonglong)
                                                  (*(int *)(local_110 + 0x90) - 1U &
                                                  (int)((ulonglong)lVar18 >> 0x20) +
                                                  ((uint)lVar18 << 0x10 | uVar14) +
                                                  (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar14 >> 4)
                                                  ) * 4);
                        if (iVar23 != -1) {
                          do {
                            plVar1 = (longlong *)(*local_100 + (longlong)iVar23 * 0x14);
                            if (*plVar1 == lVar18) {
                              if ((plVar1 != (longlong *)0x0) && ((char)plVar1[1] != '\0')) {
                                cVar4 = '\x01';
                                goto LAB_1415dfc7a;
                              }
                              break;
                            }
                            iVar23 = *(int *)((longlong)plVar1 + 0xc);
                          } while (iVar23 != -1);
                        }
                      }
                      plVar10 = plVar10 + 1;
                    } while (plVar10 != plVar9);
                    goto LAB_1415dfc46;
                  }
                  goto LAB_1415dfc78;
                }
                cVar4 = '\x01';
                if ((longlong)*(int *)(lVar18 + 0x30) == 0) goto LAB_1415dfc7a;
                if (*(int *)(local_110 + 0x50) == *(int *)(local_110 + 0x7c)) goto LAB_1415dfc78;
                plVar9 = *(longlong **)(lVar18 + 0x28);
                local_e8 = plVar9 + *(int *)(lVar18 + 0x30);
                lVar18 = *(longlong *)(local_110 + 0x88);
                if (*(longlong *)(local_110 + 0x88) == 0) {
                  lVar18 = local_f0;
                }
                goto LAB_1415dfeea;
              }
            }
            break;
          }
          iVar23 = *(int *)(lVar18 + 0x38);
        } while (iVar23 != -1);
      }
    }
    goto LAB_1415dfdec;
  }
LAB_1415e02b7:
  iVar23 = 0;
LAB_1415e02b9:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
    iVar23 = local_70;
  }
  if (iVar23 == 0) {
    uVar27 = 1;
    uVar5 = 0;
    iVar21 = 0;
    iVar20 = 0;
  }
  else {
    puVar11 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar11 = local_88;
    }
    uVar29 = *puVar11;
    if (uVar29 == 0) {
      iVar21 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar21 = iVar23 + -1;
      }
      uVar5 = 0;
      uVar25 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar25 = uVar5;
      }
      iVar21 = 0;
      do {
        if (uVar25 == uVar5) goto LAB_1415e0301;
        iVar21 = iVar21 + 0x20;
        uVar29 = puVar11[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar5 = 0;
      iVar21 = 0;
    }
    uVar27 = (ulonglong)(-uVar29 & uVar29);
    uVar25 = uVar27 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar20 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar20) {
      iVar20 = iVar23;
    }
  }
  if (iVar20 < iVar23) {
    uVar29 = 0xffffffff;
    do {
      if (*(longlong *)(local_98 + (longlong)iVar20 * 0x20 + 8) != 0) {
        FUN_1400020a8();
        iVar23 = local_70;
      }
      uVar29 = uVar29 & ~(uint)uVar27;
      puVar11 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar11 = local_88;
      }
      iVar20 = (int)uVar5;
      lVar18 = (longlong)iVar20;
      uVar17 = puVar11[lVar18] & uVar29;
      if (uVar17 == 0) {
        iVar24 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar24 = iVar23 + -1;
        }
        iVar15 = iVar24 >> 5;
        if (iVar24 >> 5 < iVar20) {
          iVar15 = iVar20;
        }
        lVar19 = 0;
        do {
          if (iVar15 - lVar18 == lVar19) goto LAB_1415e0301;
          iVar21 = iVar21 + 0x20;
          uVar17 = puVar11[lVar18 + lVar19 + 1];
          lVar19 = lVar19 + 1;
        } while (uVar17 == 0);
        uVar5 = (ulonglong)(uint)(iVar20 + (int)lVar19);
        uVar29 = 0xffffffff;
      }
      uVar27 = (ulonglong)(-uVar17 & uVar17);
      uVar25 = uVar27 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar20 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar20 < iVar23);
  }
LAB_1415e0301:
  uVar5 = (ulonglong)plStack_90 >> 0x20;
  plStack_90 = (longlong *)((ulonglong)plStack_90 & 0xffffffff00000000);
  if ((int)uVar5 != 0) {
    FUN_1446f4a44(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1415e0365:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    while (plVar10 = (longlong *)(*local_100 + (longlong)iVar23 * 0x14), *plVar10 != lVar6) {
      iVar23 = *(int *)((longlong)plVar10 + 0xc);
      if (iVar23 == -1) goto LAB_1415dfc46;
    }
    if (plVar10 == (longlong *)0x0) goto LAB_1415dfc46;
    if ((char)plVar10[1] == '\0') goto LAB_1415dfc78;
    plVar9 = plVar9 + 1;
    if (plVar9 == local_e8) break;
LAB_1415dfeea:
    lVar6 = *plVar9;
    uVar17 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar14 = (uint)lVar6 & 0xffff;
    iVar23 = *(int *)(lVar18 + (ulonglong)
                               ((int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar14) +
                                (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar14 >> 4) &
                               *(int *)(local_110 + 0x90) - 1U) * 4);
    if (iVar23 == -1) {
      cVar4 = '\0';
      break;
    }
  }
LAB_1415dfc7a:
  if ((char)puVar22[10] == cVar4) goto LAB_1415dfdec;
  *(char *)(puVar22 + 10) = cVar4;
  uVar8 = FUN_14053bbb8();
  FUN_1400f0e12(puVar22,local_bc,1);
  lVar19 = local_108;
  if (((*puVar22 == 0) || (uVar17 = puVar22[1], uVar17 == 0)) || (*puVar22 == DAT_14c948000)) {
LAB_1415e0044:
    local_c0 = DAT_14c948620;
    local_c8 = DAT_14c948618;
  }
  else {
    if (((int)uVar17 < 2) && ((int)puVar22[9] < 1)) {
      puVar22 = puVar22 + 2;
    }
    else {
      puVar22 = *(uint **)(puVar22 + 6);
    }
    if ((int)uVar17 < 1) goto LAB_1415e0044;
    local_c0 = puVar22[2];
    local_c8 = *(undefined8 *)puVar22;
  }
  plVar9 = (longlong *)FUN_14050b224(local_108,&local_c8,local_bc,uVar8);
  puVar11 = local_118;
  cVar3 = local_11a;
  if ((plVar9 != (longlong *)0x0) &&
     (uVar25 = (**(code **)(*plVar9 + 8))(plVar9), puVar11 = local_118, cVar3 = local_11a,
     *(int *)(local_110 + 0xa8) != *(int *)(local_110 + 0xd4))) {
    uVar17 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    lVar18 = *(longlong *)(local_110 + 0xe0);
    if (*(longlong *)(local_110 + 0xe0) == 0) {
      lVar18 = local_f8;
    }
    iVar23 = *(int *)(lVar18 + (ulonglong)
                               (*(int *)(local_110 + 0xe8) - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
    if (iVar23 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(local_110 + 0xa0) + (longlong)iVar23 * 0x28) == uVar25) {
          local_b0 = (**(code **)(*plVar9 + 8))(plVar9);
          uVar17 = ((uint)(local_b0 >> 0x14) & 0xffff ^ (uint)(local_b0 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          plVar10 = (longlong *)FUN_1489b59fc(&local_98,uVar17 >> 0x10 ^ uVar17,&local_b0);
          iVar23 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar23 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar23 + 1U) {
            FUN_141305c2c(plVar10,iVar23);
          }
          *(longlong **)(*plVar10 + (longlong)iVar23 * 8) = plVar9;
          puVar11 = local_118;
          lVar19 = local_108;
          cVar3 = local_11a;
          break;
        }
        iVar23 = *(int *)(*(longlong *)(local_110 + 0xa0) + (longlong)iVar23 * 0x28 + 0x20);
      } while (iVar23 != -1);
    }
  }
LAB_1415dfdec:
  iVar24 = local_70;
  uVar29 = uVar29 & ~(uint)uVar27;
  puVar22 = *(uint **)(local_110 + 0x110);
  if (*(uint **)(local_110 + 0x110) == (uint *)0x0) {
    puVar22 = puVar11;
  }
  iVar15 = *(int *)(local_110 + 0x118);
  iVar23 = (int)uVar5;
  uVar25 = (ulonglong)iVar23;
  uVar17 = puVar22[uVar25] & uVar29;
  if (uVar17 == 0) {
    iVar12 = iVar15 + 0x1e;
    if (-1 < iVar15 + -1) {
      iVar12 = iVar15 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar20 = iVar20 + 0x20;
    iVar13 = iVar12;
    if (iVar12 < iVar23) {
      iVar13 = iVar23;
    }
    puVar11 = local_118;
    if (iVar23 < iVar12) {
      uVar14 = iVar13 + 1;
      uVar26 = 0;
      do {
        uVar17 = puVar22[uVar25 + uVar26 + 1];
        if (uVar17 != 0) {
          uVar5 = (ulonglong)(iVar23 + (int)uVar26 + 1);
          uVar29 = 0xffffffff;
          uVar25 = uVar26;
          goto LAB_1415dfe84;
        }
        iVar20 = iVar20 + 0x20;
        uVar26 = uVar26 + 1;
      } while ((longlong)iVar13 - uVar25 != uVar26);
      uVar29 = 0xffffffff;
    }
    else {
      uVar26 = uVar25 + 1;
      uVar14 = (uint)uVar26;
    }
    uVar5 = (ulonglong)uVar14;
    uVar25 = uVar26;
    lVar19 = local_108;
    cVar3 = local_11a;
    iVar23 = iVar15;
  }
  else {
LAB_1415dfe84:
    uVar27 = (ulonglong)(-uVar17 & uVar17);
    uVar26 = uVar27 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar23 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar23) {
      iVar23 = iVar15;
    }
  }
  lVar18 = local_110;
  if (iVar23 == iVar21) goto LAB_1415e0094;
  goto LAB_1415dfa5c;
LAB_1415dfc46:
  cVar4 = '\0';
  goto LAB_1415dfc7a;
LAB_1415dfc78:
  cVar4 = '\0';
  goto LAB_1415dfc7a;
LAB_1415e0094:
  if (local_70 == 0) goto LAB_1415e02b7;
  puVar11 = local_78;
  if (local_78 == (uint *)0x0) {
    puVar11 = local_88;
  }
  uVar29 = *puVar11;
  iVar23 = local_70;
  if (uVar29 == 0) {
    iVar21 = local_70 + 0x1e;
    if (-1 < local_70 + -1) {
      iVar21 = local_70 + -1;
    }
    uVar5 = 0;
    uVar27 = (ulonglong)(uint)(iVar21 >> 5);
    if (iVar21 >> 5 < 1) {
      uVar27 = uVar5;
    }
    iVar21 = 0;
    do {
      if (uVar27 == uVar5) goto LAB_1415e02b9;
      iVar21 = iVar21 + 0x20;
      uVar29 = puVar11[uVar5 + 1];
      uVar5 = uVar5 + 1;
    } while (uVar29 == 0);
  }
  else {
    uVar5 = 0;
    iVar21 = 0;
  }
  uVar26 = (ulonglong)(-uVar29 & uVar29);
  uVar27 = uVar26 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  iVar20 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if (iVar20 < local_70) {
    uVar29 = 0xffffffff;
    do {
      lVar18 = (longlong)iVar20 * 0x20;
      if (*(int *)(local_110 + 0xa8) != *(int *)(local_110 + 0xd4)) {
        uVar25 = *(ulonglong *)(local_98 + lVar18);
        uVar17 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        lVar19 = *(longlong *)(local_110 + 0xe0);
        if (*(longlong *)(local_110 + 0xe0) == 0) {
          lVar19 = local_f8;
        }
        iVar23 = *(int *)(lVar19 + (ulonglong)
                                   (*(int *)(local_110 + 0xe8) - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4
                         );
        if (iVar23 != -1) {
          do {
            puVar16 = (ulonglong *)(*(longlong *)(local_110 + 0xa0) + (longlong)iVar23 * 0x28);
            if (*puVar16 == uVar25) goto LAB_1415e01ce;
            iVar23 = (int)puVar16[4];
          } while (iVar23 != -1);
        }
      }
      puVar16 = (ulonglong *)0x0;
LAB_1415e01ce:
      local_b0 = *(ulonglong *)(local_98 + lVar18 + 8);
      local_a8 = *(int *)(local_98 + lVar18 + 0x10);
      FUN_1489b5fa0(puVar16 + 1,&local_b0,CONCAT71((int7)(uVar25 >> 8),local_119 == '\x02'));
      uVar29 = uVar29 & ~(uint)uVar26;
      puVar11 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar11 = local_88;
      }
      iVar23 = (int)uVar5;
      uVar27 = (ulonglong)iVar23;
      uVar17 = puVar11[uVar27] & uVar29;
      uVar25 = uVar27;
      if (uVar17 == 0) {
        iVar20 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar20 = local_70 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar15 = iVar20;
        if (iVar20 < iVar23) {
          iVar15 = iVar23;
        }
        if (iVar23 < iVar20) {
          uVar5 = (longlong)iVar15 + 1;
          uVar25 = 0;
          do {
            uVar17 = puVar11[uVar27 + uVar25 + 1];
            if (uVar17 != 0) {
              uVar5 = (ulonglong)(iVar23 + (int)uVar25 + 1);
              uVar29 = 0xffffffff;
              goto LAB_1415e027c;
            }
            iVar21 = iVar21 + 0x20;
            uVar25 = uVar25 + 1;
          } while ((longlong)iVar15 - uVar27 != uVar25);
          uVar29 = 0xffffffff;
        }
        else {
          uVar5 = uVar27 + 1;
          uVar25 = uVar5;
        }
        uVar5 = uVar5 & 0xffffffff;
        iVar20 = local_70;
      }
      else {
LAB_1415e027c:
        uVar26 = (ulonglong)(-uVar17 & uVar17);
        uVar27 = uVar26 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar20 = (iVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar20) {
          iVar20 = local_70;
        }
      }
      iVar23 = local_70;
    } while (iVar20 != iVar24);
  }
  goto LAB_1415e02b9;
}



// FUNCTION 1415e05cc FUN_1415e05cc body=681 status=ok
// SIG undefined FUN_1415e05cc(void)

undefined8 * FUN_1415e05cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b182850;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 10) = 0x42b40000;
  FUN_1405c5f70(param_1 + 0xb);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0x3f00000040000000;
  *(undefined4 *)(param_1 + 0x16) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xf00000d0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf00000d0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3002;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x4fc71eb4;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar2 = 0x280;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0xc5daac38;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x20) = 0;
    lVar2 = lVar2 + 0x60;
  } while (lVar2 != 0x880);
  lVar2 = 0x880;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x38);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0xc5daac38;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x20) = 0;
    lVar2 = lVar2 + 0x60;
  } while (lVar2 != 0xe80);
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1da] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  *(undefined1 *)(param_1 + 0x1d5) = 0;
  *(undefined4 *)(param_1 + 0x1db) = 0x3f800000;
  FUN_14109baa4(param_1 + 0x1dc);
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  param_1[0x1ee] = 0;
  *(undefined4 *)(param_1 + 0x1ef) = 0x4fc71eb4;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  *(undefined4 *)(param_1 + 0x1f2) = 0x4fc71eb4;
  param_1[499] = 0;
  return param_1;
}



// FUNCTION 1415e0876 FUN_1415e0876 body=226 status=ok
// SIG undefined FUN_1415e0876(void)

longlong * FUN_1415e0876(longlong *param_1)

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
  pcVar13 = FUN_14645faac;
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



// FUNCTION 1415e095a FUN_1415e095a body=284 status=ok
// SIG undefined FUN_1415e095a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415e095a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6a6d0) {
    FUN_144b3d300(&DAT_14ca6a6d0);
    if (DAT_14ca6a6d0 == -1) {
      FUN_14612c494();
      FUN_140db5666(&DAT_14ca6a628,2,&DAT_14ca6a5c0,L"FRenderVolumetricCloudRenderViewCS",
                    L"/Engine/Private/VolumetricCloud.usf",L"MainCS",5,0x80,FUN_147334394,
                    FUN_14733436c,FUN_1430f77ec,&LAB_147334368,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14ca6a628 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430f789d);
      _Init_thread_footer(&DAT_14ca6a6d0);
    }
  }
  return &DAT_14ca6a628;
}



// FUNCTION 1415e0a78 FUN_1415e0a78 body=115 status=ok
// SIG undefined FUN_1415e0a78(void)

void FUN_1415e0a78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  if (*(longlong *)(param_1 + 0xb8) != lVar3) {
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0xc0);
    *(longlong *)(param_1 + 0xb8) = lVar3;
    *(longlong *)(param_1 + 0xc0) = lVar4;
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
    FUN_1447f69b6(param_1 + 0x80);
    return;
  }
  return;
}



// FUNCTION 1415e0aeb FUN_1415e0aeb body=446 status=ok
// SIG undefined FUN_1415e0aeb(void)

void FUN_1415e0aeb(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  do {
    *param_1 = 0xffffffffffffffff;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(undefined1 *)(param_1 + 0x16) = 0x1f;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x38] = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 1;
    param_1[0x3e] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[0x3c] = DAT_14c8464e0;
    param_1[0x3d] = uVar1;
    uVar1 = DAT_14c8464e8;
    param_1[0x3f] = DAT_14c8464e0;
    param_1[0x40] = uVar1;
    param_1[0x41] = DAT_14c8464f0;
    param_1[0x42] = 0;
    param_1[0x45] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[0x43] = DAT_14c8464e0;
    param_1[0x44] = uVar1;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined4 *)((longlong)param_1 + 0x234) = 0;
    uVar1 = DAT_14c8463d8;
    param_1[0x48] = DAT_14c8463d0;
    param_1[0x49] = uVar1;
    uVar1 = DAT_14c8463e8;
    param_1[0x4a] = DAT_14c8463e0;
    param_1[0x4b] = uVar1;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x264) = 0x3f80000000000000;
    *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
    param_1[0x52] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
    param_1[0x56] = 0;
    *(undefined4 *)(param_1 + 0x57) = 0;
    param_1 = param_1 + 0x58;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1415e0caa FUN_1415e0caa body=188 status=ok
// SIG undefined FUN_1415e0caa(void)

void FUN_1415e0caa(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined8 *)(param_1 + 0x568) = param_2;
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x40000000);
  FUN_1456ffa26(&DAT_14c8673d8,local_18,param_1,FUN_145e3e666);
  FUN_1462a3314(&DAT_14c9485c0,local_18,param_1,&DAT_1470a07c8);
  FUN_1462a3314(&DAT_14c9485d8,local_18,param_1,&DAT_1470a07ca);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e0d68 FUN_1415e0d68 body=183 status=ok
// SIG undefined FUN_1415e0d68(void)

undefined8 *
FUN_1415e0d68(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  *param_1 = &PTR_LAB_14aa96270;
  param_1[2] = &PTR_FUN_14aa962a0;
  param_1[3] = &PTR_FUN_14aa962f0;
  param_1[4] = &PTR_FUN_14aa96300;
  *(undefined4 *)(param_1 + 6) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_3;
  param_1[7] = param_6;
  param_1[8] = *param_5;
  lVar3 = param_5[1];
  param_1[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 10) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x51) = param_7;
  plVar4 = (longlong *)param_5[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415e0e20 FUN_1415e0e20 body=405 status=ok
// SIG undefined FUN_1415e0e20(void)

void FUN_1415e0e20(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar9 = 0;
  if ((int)uVar1 < 1) {
LAB_1415e0e39:
    if (uVar9 != uVar1) {
      uVar4 = uVar1;
      do {
        if (*(longlong *)
             (*(longlong *)(param_1[2] + (longlong)((int)uVar9 / 0x9249) * 8) + 8 +
             (longlong)((int)uVar9 % 0x9249) * 0x38) != 0) {
          FUN_1400020a8();
          uVar4 = *(uint *)(param_1 + 1);
        }
        uVar5 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar4) {
          uVar5 = uVar4;
        }
        uVar7 = uVar9;
        do {
          uVar9 = uVar5;
          if (uVar5 - 1 == uVar7) break;
          uVar9 = uVar7 + 1;
          puVar6 = (undefined8 *)param_1[6];
          if ((undefined8 *)param_1[6] == (undefined8 *)0x0) {
            puVar6 = param_1 + 4;
          }
          uVar8 = uVar7 + 0x20;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          uVar7 = uVar9;
        } while ((*(uint *)((longlong)puVar6 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar9 & 0x1f) &
                 1) == 0);
      } while (uVar9 != uVar1);
    }
  }
  else {
    uVar9 = 0;
    do {
      puVar6 = (undefined8 *)param_1[6];
      if ((undefined8 *)param_1[6] == (undefined8 *)0x0) {
        puVar6 = param_1 + 4;
      }
      if ((*(uint *)((longlong)puVar6 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
      goto LAB_1415e0e39;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
  }
  iVar2 = *(int *)(param_1 + 3);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[2];
    lVar10 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)(lVar3 + lVar10));
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1461310ae(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1415e0fb6 FUN_1415e0fb6 body=281 status=ok
// SIG undefined FUN_1415e0fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415e0fb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca87780) {
    FUN_144b3d300(&DAT_14ca87780);
    if (DAT_14ca87780 == -1) {
      FUN_146131f12();
      FUN_140db5666(&DAT_14ca876d8,0,&DAT_14ca87670,
                    L"FClearReplacementCS_Texture2DArray_Float4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_1474176f0,
                    FUN_147417698,&LAB_147417694,&LAB_147417690,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca876d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f17);
      _Init_thread_footer(&DAT_14ca87780);
    }
  }
  return &DAT_14ca876d8;
}



// FUNCTION 1415e10d0 FUN_1415e10d0 body=281 status=ok
// SIG undefined FUN_1415e10d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415e10d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca878a8) {
    FUN_144b3d300(&DAT_14ca878a8);
    if (DAT_14ca878a8 == -1) {
      FUN_1461320d2();
      FUN_140db5666(&DAT_14ca87800,0,&DAT_14ca87798,L"FClearReplacementCS_Texture2D_Float4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147417822,
                    FUN_1474177ca,&LAB_1474177c6,&LAB_1474177c2,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca87800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1f23);
      _Init_thread_footer(&DAT_14ca878a8);
    }
  }
  return &DAT_14ca87800;
}



// FUNCTION 1415e11ea FUN_1415e11ea body=281 status=ok
// SIG undefined FUN_1415e11ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415e11ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca888d8) {
    FUN_144b3d300(&DAT_14ca888d8);
    if (DAT_14ca888d8 == -1) {
      FUN_146132292();
      FUN_140db5666(&DAT_14ca88830,0,&DAT_14ca887c8,L"FClearReplacementCS_Texture3D_Uint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_14741866e,
                    FUN_147418616,&LAB_147418612,&LAB_14741860e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88830 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fcb);
      _Init_thread_footer(&DAT_14ca888d8);
    }
  }
  return &DAT_14ca88830;
}



// FUNCTION 1415e1304 FUN_1415e1304 body=281 status=ok
// SIG undefined FUN_1415e1304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415e1304(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88a00) {
    FUN_144b3d300(&DAT_14ca88a00);
    if (DAT_14ca88a00 == -1) {
      FUN_146132452();
      FUN_140db5666(&DAT_14ca88958,0,&DAT_14ca888f0,L"FClearReplacementCS_Texture2D_Uint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_1474187a0,
                    FUN_147418748,&LAB_147418744,&LAB_147418740,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88958 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fd7);
      _Init_thread_footer(&DAT_14ca88a00);
    }
  }
  return &DAT_14ca88958;
}



// FUNCTION 1415e141e FUN_1415e141e body=281 status=ok
// SIG undefined FUN_1415e141e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415e141e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca909b8) {
    FUN_144b3d300(&DAT_14ca909b8);
    if (DAT_14ca909b8 == -1) {
      FUN_146132612();
      FUN_140db5666(&DAT_14ca90910,0,&DAT_14ca908a8,L"TOneColorVStruefalse",
                    L"/Engine/Private/OneColorShader.usf",L"MainVertexShader",0,1,FUN_147421a5e,
                    FUN_1474219fe,&LAB_1474219fa,&LAB_1474219f6,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14ca90910 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f8216);
      _Init_thread_footer(&DAT_14ca909b8);
    }
  }
  return &DAT_14ca90910;
}



// FUNCTION 1415e1538 FUN_1415e1538 body=21 status=ok
// SIG undefined FUN_1415e1538(void)

bool FUN_1415e1538(longlong *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x18))();
  return *pcVar1 != '\0';
}



// FUNCTION 1415e1550 FUN_1415e1550 body=45 status=ok
// SIG undefined FUN_1415e1550(void)

byte FUN_1415e1550(longlong *param_1,byte param_2)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0x18))();
  bVar1 = 1;
  if ((*pcVar2 != '\x02') && (pcVar2[1] == '\0')) {
    bVar1 = *pcVar2 == '\x01' & param_2;
  }
  return bVar1;
}



// FUNCTION 1415e157e FUN_1415e157e body=380 status=ok
// SIG undefined FUN_1415e157e(void)

void FUN_1415e157e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0xd48);
  if (lVar2 != 0) {
    if (DAT_14cb94538 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14cb94538);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (param_1 != 0) {
        FUN_1401073f6(param_1 + 0x9d8,*(undefined8 *)(lVar2 + 0x150));
      }
    }
  }
  *(undefined1 *)(param_1 + 0xbda) = 0;
  *(undefined8 *)(param_1 + 0xd48) = 0;
  *(undefined1 *)(param_1 + 0xcd0) = 0;
  *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) & 0xfd;
  FUN_1405e4918(param_1,0x3f800000);
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
  if (*(char *)(param_1 + 0x178) == '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e1712 FUN_1415e1712 body=220 status=ok
// SIG undefined FUN_1415e1712(void)

longlong FUN_1415e1712(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0x1000000000;
  uVar3 = DAT_14ca8b9f8;
  if ((int)DAT_14ca8b9f8 < 1) {
    if ((int)DAT_14ca8b9f8 < 0) {
LAB_1415e17d3:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0x1000000000;
  }
  else {
    *(uint *)(param_1 + 0x50) = DAT_14ca8b9f8;
    if (uVar3 < 0x11) {
      lVar1 = 0;
    }
    else {
      FUN_1472ddbf0(param_1 + 8,0);
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    lVar2 = param_1 + 8;
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
    FUN_1448b6b1e(lVar2,uVar3);
    uVar3 = DAT_14ca8b9f8;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0x1000000000;
    if ((int)uVar3 < 1) {
      if ((int)uVar3 < 0) goto LAB_1415e17d3;
    }
    else {
      *(uint *)(param_1 + 0xa0) = uVar3;
      if (uVar3 < 0x11) {
        lVar1 = 0;
      }
      else {
        FUN_1472ddbf0(param_1 + 0x58,0);
        lVar1 = *(longlong *)(param_1 + 0x98);
      }
      lVar2 = param_1 + 0x58;
      if (lVar1 != 0) {
        lVar2 = lVar1;
      }
      FUN_1448b6b1e(lVar2,uVar3);
    }
  }
  return param_1;
}



// FUNCTION 1415e17ee FUN_1415e17ee body=197 status=ok
// SIG undefined FUN_1415e17ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1415e17ee(void)

{
  longlong *plVar1;
  uint uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae8a70) {
    FUN_144b3d300(&DAT_14cae8a70);
    if (DAT_14cae8a70 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ScreenPercentage",1);
      if (plVar1 == (longlong *)0x0) {
        _DAT_14cae8a68 = 0;
      }
      else {
        _DAT_14cae8a68 = (**(code **)(*plVar1 + 0x70))(plVar1);
      }
      _Init_thread_footer(&DAT_14cae8a70);
    }
  }
  uVar2 = -(uint)(0.0 < *DAT_14cae8a18 / 100.0);
  return ~uVar2 & 0x3f800000 | (uint)(*DAT_14cae8a18 / 100.0) & uVar2;
}



// FUNCTION 1415e18b4 FUN_1415e18b4 body=665 status=ok
// SIG undefined FUN_1415e18b4(void)

void FUN_1415e18b4(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  iVar3 = DAT_14ca8b9f8;
  puVar1 = param_2 + 2;
  iVar2 = param_2[0x14];
  if (iVar2 < DAT_14ca8b9f8) {
    param_2[0x14] = DAT_14ca8b9f8;
    if ((uint)(param_2[0x15] - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_1472ddbf0(puVar1,iVar2);
    }
    puVar5 = *(undefined4 **)(param_2 + 0x12);
    if (*(undefined4 **)(param_2 + 0x12) == (undefined4 *)0x0) {
      puVar5 = puVar1;
    }
    FUN_1448b6b1e(puVar5 + iVar2,iVar3 - iVar2);
  }
  else {
    if (DAT_14ca8b9f8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(DAT_14ca8b9f8);
    }
    if (DAT_14ca8b9f8 < iVar2) {
      param_2[0x14] = DAT_14ca8b9f8;
      FUN_1472ddc66(puVar1);
    }
  }
  if (0 < (int)param_2[0x14]) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined4 **)(param_2 + 0x12);
      if (*(undefined4 **)(param_2 + 0x12) == (undefined4 *)0x0) {
        puVar5 = puVar1;
      }
      puVar5[lVar6] = 0xbf800000;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_2[0x14]);
  }
  iVar3 = DAT_14ca8b9f8;
  puVar5 = param_2 + 0x16;
  iVar2 = param_2[0x28];
  if (iVar2 < DAT_14ca8b9f8) {
    param_2[0x28] = DAT_14ca8b9f8;
    if ((uint)(param_2[0x29] - iVar2) < (uint)(iVar3 - iVar2)) {
      FUN_1472ddbf0(puVar5,iVar2);
    }
    puVar7 = *(undefined4 **)(param_2 + 0x26);
    if (*(undefined4 **)(param_2 + 0x26) == (undefined4 *)0x0) {
      puVar7 = puVar5;
    }
    FUN_1448b6b1e(puVar7 + iVar2,iVar3 - iVar2);
  }
  else {
    if (DAT_14ca8b9f8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(DAT_14ca8b9f8);
    }
    if (DAT_14ca8b9f8 < iVar2) {
      param_2[0x28] = DAT_14ca8b9f8;
      FUN_1472ddc66(puVar5);
    }
  }
  if (0 < (int)param_2[0x28]) {
    lVar6 = 0;
    do {
      puVar7 = *(undefined4 **)(param_2 + 0x26);
      if (*(undefined4 **)(param_2 + 0x26) == (undefined4 *)0x0) {
        puVar7 = puVar5;
      }
      puVar7[lVar6] = 0xbf800000;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_2[0x28]);
  }
  if ((*(longlong **)(param_1 + 0xf28) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x10))(), cVar4 != '\0')) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x48))();
    if (cVar4 == '\0') {
      if (*(char *)(param_1 + 0xf48) == '\x01') {
        *param_2 = 2;
        puVar8 = DAT_14ca8ba00;
      }
      else {
        *param_2 = 1;
        puVar8 = DAT_14ca8ba00;
      }
    }
    else {
      *param_2 = 3;
      (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x28))
                (*(longlong **)(param_1 + 0xf28),local_88);
      FUN_14016d654(puVar1,local_88);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x30))
                (*(longlong **)(param_1 + 0xf28),local_88);
      FUN_14016d654(puVar5,local_88);
      puVar8 = DAT_14ca8ba00;
      if (local_48 != 0) {
        FUN_1400020a8();
        puVar8 = DAT_14ca8ba00;
      }
    }
    for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      puVar7 = *(undefined4 **)(param_2 + 0x26);
      if (*(undefined4 **)(param_2 + 0x26) == (undefined4 *)0x0) {
        puVar7 = puVar5;
      }
      puVar9 = *(undefined4 **)(param_2 + 0x12);
      if (*(undefined4 **)(param_2 + 0x12) == (undefined4 *)0x0) {
        puVar9 = puVar1;
      }
      iVar2 = *(int *)(puVar8[2] + 100);
      fVar10 = (float)puVar9[iVar2];
      if ((float)puVar7[iVar2] <= (float)puVar9[iVar2]) {
        fVar10 = (float)puVar7[iVar2];
      }
      puVar9[iVar2] = fVar10;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e1b4e FUN_1415e1b4e body=443 status=ok
// SIG undefined FUN_1415e1b4e(void)

undefined8 FUN_1415e1b4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    lVar9 = 0;
    do {
      FUN_140b6c84e(*(undefined8 *)(param_1 + 0x50),&local_68,*(undefined4 *)(param_1 + 0x70),
                    *(undefined8 *)(lVar4 + lVar9));
      uVar7 = uStack_50;
      plVar5 = local_60;
      lVar6 = local_68;
      if (local_68 != 0) {
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        lVar10 = (longlong)(int)uStack_50;
        uVar8 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
        if (uStack_50._4_4_ < uVar8) {
          FUN_140b722da(&local_58,uVar7 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar10 * 0x10) = lVar6;
        *(longlong **)(local_58 + 8 + lVar10 * 0x10) = plVar5;
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
      }
      plVar5 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  FUN_143f4527c(param_1,*(undefined4 *)(param_1 + 0x70),&local_58,1);
  FUN_14127b1cd(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_1459b6c3c(param_1 + 0xd0,0);
  }
  plVar5 = *(longlong **)(param_1 + 200);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_140b6c1c2(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e1d0a FUN_1415e1d0a body=30 status=ok
// SIG undefined FUN_1415e1d0a(void)

byte FUN_1415e1d0a(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xf1);
  if (2 < bVar1) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 1 +
                     (ulonglong)*(byte *)(param_2 + 0xf6) * 0x5c);
  }
  return bVar1;
}



// FUNCTION 1415e1d28 FUN_1415e1d28 body=1357 status=ok
// SIG undefined FUN_1415e1d28(void)

void FUN_1415e1d28(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [4];
  wchar_t *pwVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 *puVar9;
  wchar_t *_Dest;
  undefined1 auStack_378 [32];
  undefined1 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined1 local_340;
  undefined1 auStack_33d [8];
  undefined1 auStack_335 [8];
  undefined4 uStack_32d;
  byte bStack_329;
  undefined8 *local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined2 local_314;
  undefined1 local_268 [16];
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 local_240 [7];
  undefined1 auStack_239 [5];
  undefined1 auStack_234 [3];
  undefined1 auStack_231 [5];
  byte abStack_22c [3];
  undefined1 uStack_229;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined1 local_1f8;
  longlong lStack_175;
  undefined1 local_168 [4];
  byte local_164;
  undefined1 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ushort local_78;
  undefined8 local_70;
  ushort local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_228 = &DAT_200000002;
  local_340 = 0;
  local_348 = 1;
  local_358 = param_4;
  local_350 = param_3;
  FUN_1433734d8(param_1,param_2,&local_228,2);
  local_218 = *(undefined8 *)(param_1 + 8);
  local_228 = (undefined1 *)0xffffffffffffffff;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x100000000070;
  local_204 = 0;
  local_1f8 = 0;
  local_320 = CONCAT44(local_320._4_4_,1);
  local_328 = &local_228;
  FUN_144760590(param_2,&local_328,0);
  local_328 = *(undefined8 **)(param_1 + 8);
  lVar7 = 0x15;
  do {
    *(undefined1 (*) [16])(auStack_33d + lVar7) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)&uStack_32d + lVar7) = 0xffffffff;
    (&bStack_329 + lVar7)[0] = 0;
    (&bStack_329 + lVar7)[1] = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd5);
  local_254 = 0;
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_250 = 0xffffffff;
  uStack_24c = 0xffffffff;
  uStack_248 = 0xffffffff;
  uStack_244 = 0xffffffff;
  _local_240 = 0;
  auStack_239._1_4_ = auStack_239._1_4_ & 0xffffff00;
  _auStack_234 = 0;
  auStack_231._1_3_ = 0;
  local_320 = 0;
  local_318 = 0xffffffff;
  local_314 = 0x900;
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar5 = _Dest + 0xd;
  if ((wchar_t *)param_2[1] < pwVar5) {
    FUN_140023dd8(param_2,0x1c);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar5 = _Dest + 0xd;
  }
  *param_2 = (ulonglong)pwVar5;
  wcscpy(_Dest,L"ClearTexture");
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x23;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x120);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x23;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a217b50;
  memcpy(puVar9 + 2,&local_328,0xe8);
  puVar9[0x1f] = 0;
  puVar9[0x20] = CONCAT44(_auStack_234,auStack_239._1_4_);
  *(uint *)((longlong)puVar9 + 0x107) = CONCAT31(auStack_231._1_3_,auStack_231[0]);
  puVar9[0x22] = _Dest;
  lVar7 = 0x11;
  do {
    *(undefined8 *)(local_240 + lVar7 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar7) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd1);
  local_168 = (undefined1  [4])0x0;
  local_164 = 0;
  lVar7 = 0xd9;
  do {
    *(undefined8 *)(local_240 + lVar7 + 7) = 0;
    *(undefined8 *)(auStack_234 + lVar7 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_229 + lVar7) = 0;
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0x199);
  local_a0 = 0;
  local_70 = 0;
  local_68 = local_68 & 0xff;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = local_78 & 0xff00;
  lVar7 = 0x15;
  do {
    if (*(longlong *)(auStack_33d + lVar7) == 0) break;
    *(longlong *)(local_240 + lVar7 + 3) = *(longlong *)(auStack_33d + lVar7);
    bVar1 = *(byte *)((longlong)&local_328 + lVar7);
    bVar8 = bVar1 >> 2;
    auStack_231[lVar7 + 4] = bVar8;
    abStack_22c[lVar7] = bVar1 & 3;
    *(undefined4 *)(auStack_234 + lVar7 + 3) = *(undefined4 *)((longlong)&uStack_32d + lVar7);
    *(uint *)(auStack_239 + lVar7 + 4) = (uint)(&bStack_329)[lVar7];
    local_168 = (undefined1  [4])((int)local_168 + 1);
    local_164 = local_164 | bVar8 == 2;
    lVar2 = *(longlong *)(auStack_335 + lVar7);
    if (lVar2 != 0) {
      local_a0 = 1;
      uVar3 = *(undefined8 *)(auStack_239 + lVar7 + 4);
      *(undefined8 *)((longlong)&lStack_175 + lVar7) = *(undefined8 *)(local_240 + lVar7 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe93 + lVar7) = uVar3;
      *(undefined8 *)(local_168 + lVar7 + 3) = *(undefined8 *)(auStack_231 + lVar7 + 4);
      *(longlong *)((longlong)&lStack_175 + lVar7) = lVar2;
    }
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != 0xd5);
  auVar4 = local_168;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_98 = ZEXT816(0);
  if (0 < (longlong)(int)local_168) {
    memcpy(param_2 + 0x15,&local_228,(longlong)(int)local_168 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar4;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  bVar1 = *(byte *)((longlong)param_2 + 0x17b);
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = bVar1 & 0xfc | 2;
  if ((bVar1 & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 2;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x18);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 2;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  local_218 = *(undefined8 *)(param_1 + 8);
  local_228 = (undefined1 *)0xffffffffffffffff;
  uStack_220 = 0xffffffff;
  local_210 = 1;
  local_20c = 0x7000001000;
  local_204 = 0;
  local_1f8 = 0;
  stack0xfffffffffffffcd0 = 1;
  unique0x10000906 = &local_228;
  FUN_144760590(param_2,auStack_33d + 5,0);
  *(undefined1 *)(param_1 + 0x61) = 1;
  if ((local_60 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e2276 FUN_1415e2276 body=92 status=ok
// SIG undefined FUN_1415e2276(void)

void FUN_1415e2276(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e22d4 FUN_1415e22d4 body=202 status=ok
// SIG undefined FUN_1415e22d4(void)

ulonglong FUN_1415e22d4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar2 = *(longlong **)(param_2 + 0x510);
  plVar3 = *(longlong **)(param_2 + 0x518);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar4 = (**(code **)(*plVar2 + 0xd0))();
  if (cVar4 == '\0') {
    bVar8 = false;
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(param_2 + 0x510) + 0x68))();
    bVar8 = iVar5 == 0;
  }
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
  if (bVar8) {
    plVar2 = *(longlong **)(param_2 + 0x510);
    plVar3 = *(longlong **)(param_2 + 0x518);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415e2397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*plVar2 + 200))();
      return uVar7;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar6 = (**(code **)(*plVar2 + 200))();
    uVar7 = (ulonglong)uVar6;
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
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1415e239e FUN_1415e239e body=1086 status=ok
// SIG undefined FUN_1415e239e(void)

void FUN_1415e239e(longlong param_1,longlong param_2,undefined8 param_3,char param_4,
                  longlong param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  double *pdVar15;
  double *pdVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined8 local_100;
  undefined1 local_f8;
  double local_e8;
  double local_e0;
  int local_d4;
  int local_d0;
  char local_c9;
  double local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar13 + 0xc60);
  if (DAT_14c86a9f8 == '\x01') {
    if (iVar17 != 2) {
      if (iVar17 != 1) goto LAB_1415e23fc;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 != DVar9) goto LAB_1415e23fc;
      iVar17 = *(int *)(lVar13 + 0xc60);
      goto joined_r0x0001415e242d;
    }
  }
  else {
joined_r0x0001415e242d:
    if (iVar17 == 4) goto LAB_1415e23fc;
  }
  local_c9 = FUN_140348454();
  local_d0 = FUN_143204491();
  local_d4 = FUN_143204412();
  local_100 = *(undefined8 *)(param_2 + 0x18);
  local_e8 = (double)*(float *)(param_5 + 0x380);
  local_c8[1] = (double)(*(float *)(param_5 + 0x394) + *(float *)(param_5 + 900));
  local_c8[0] = (double)(*(float *)(param_5 + 0x380) + *(float *)(param_5 + 0x390));
  local_108 = local_c8;
  local_e0 = (double)*(float *)(param_5 + 900);
  FUN_1403485af(&local_d4,&local_d0,&local_c9);
  bVar5 = local_d0 != *(int *)(param_2 + 0xb4);
  bVar6 = local_d4 != *(int *)(param_2 + 0xb8);
  bVar19 = local_c9 == *(char *)(param_2 + 0xbc);
  iVar14 = (int)param_3;
  iVar17 = (int)((ulonglong)param_3 >> 0x20);
  if ((((bVar19 && (!bVar5 && !bVar6)) && (*(int *)(param_2 + 0xa0) == iVar14)) &&
      (*(int *)(param_2 + 0xa4) == iVar17)) &&
     ((*(char *)(param_2 + 0xbd) == param_4 && (*(longlong *)(param_2 + 0x10) != 0))))
  goto LAB_1415e23fc;
  (*(code *)PTR_FUN_14c7590a0)();
  FUN_14080c2b4();
  if (iVar17 < 9) {
    iVar17 = 8;
  }
  iVar18 = 8;
  if (8 < iVar14) {
    iVar18 = iVar14;
  }
  if (0x3fff < iVar18) {
    iVar18 = 0x4000;
  }
  if (0x3fff < iVar17) {
    iVar17 = 0x4000;
  }
  FUN_14179bfad(local_c8,iVar18,iVar17);
  pdVar15 = local_c8;
  pdVar16 = (double *)(param_2 + 0x20);
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *pdVar16 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar16 = pdVar16 + 1;
  }
  *(ulonglong *)(param_2 + 0xa0) = CONCAT44(iVar17,iVar18);
  *(ulonglong *)(param_2 + 0xa8) = CONCAT44(iVar17,iVar18);
  *(char *)(param_2 + 0xbd) = param_4;
  *(int *)(param_2 + 0xb4) = local_d0;
  *(int *)(param_2 + 0xb8) = local_d4;
  *(char *)(param_2 + 0xbc) = local_c9;
  cVar7 = (char)DAT_14ca84f4c;
  if (local_c9 != '\x01') {
    cVar7 = '%';
    if (*(char *)(param_1 + 0x340) == '\0') {
      cVar7 = (DAT_14c760db4 == 1) * '\x02';
    }
  }
  *(char *)(param_2 + 0xb0) = cVar7;
  pdVar15 = (double *)(param_2 + 0x10);
  FUN_145d11ca8(param_1 + 0x48,pdVar15);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_f8 = *(undefined1 *)(param_2 + 0xb0);
    local_100 = CONCAT71(local_100._1_7_,param_4);
    local_108 = (double *)CONCAT44(local_108._4_4_,iVar17);
    (**(code **)(*DAT_14ca83900 + 0x338))
              (DAT_14ca83900,local_c8,*(undefined8 *)(param_2 + 0x18),iVar18);
    if (pdVar15 != local_c8) {
      dVar4 = *pdVar15;
      *pdVar15 = local_c8[0];
      local_c8[0] = 0.0;
      if (dVar4 == 0.0) goto LAB_1415e26fc;
      LOCK();
      puVar1 = (uint *)((longlong)dVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)((longlong)dVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)dVar4 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = (longlong)dVar4;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar20 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar20) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar20 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar20) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
    dVar4 = local_c8[0];
    if (local_c8[0] != 0.0) {
      LOCK();
      puVar1 = (uint *)((longlong)local_c8[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)((longlong)local_c8[0] + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)local_c8[0] + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = (longlong)dVar4;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar20 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar20) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar20 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar20) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
  }
  else {
    local_100 = CONCAT71(local_100._1_7_,*(undefined1 *)(param_2 + 0xb0));
    local_108 = (double *)CONCAT71(local_108._1_7_,param_4);
    (**(code **)(*DAT_14ca83900 + 0x340))(DAT_14ca83900,*(longlong *)(param_2 + 0x10),iVar18,iVar17)
    ;
  }
LAB_1415e26fc:
  FUN_145d11ca8(param_1 + 0x60,pdVar15);
  (*(code *)PTR_FUN_14c7590a8)();
  if (!bVar19 || (bVar5 || bVar6)) {
    FUN_140163244(param_5,2);
  }
LAB_1415e23fc:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e27de FUN_1415e27de body=1323 status=ok
// SIG undefined FUN_1415e27de(void)

void FUN_1415e27de(longlong param_1,double *param_2)

{
  int *piVar1;
  double *pdVar2;
  float fVar3;
  byte bVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  double **ppdVar19;
  double *pdVar20;
  bool bVar21;
  undefined1 auStack_128 [32];
  double **local_108;
  undefined8 local_100;
  char local_f8;
  longlong *local_f0;
  double local_e8;
  double local_e0;
  undefined8 *local_d8;
  undefined1 local_cc [4];
  double *local_c8;
  undefined8 **local_c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    dVar5 = *param_2;
    uVar13 = ((uint)((ulonglong)dVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)dVar5 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    lVar15 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x160);
    }
    iVar7 = *(int *)(lVar15 + (ulonglong)
                              (*(int *)(param_1 + 0x168) - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar7 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x120);
      do {
        if (*(double *)(lVar15 + (longlong)iVar7 * 0x18) == dVar5) goto LAB_1415e2c0d;
        iVar7 = *(int *)(lVar15 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  FUN_14080c2b4();
  dVar5 = *param_2;
  fVar3 = *(float *)((longlong)dVar5 + 0x398);
  lVar15 = (longlong)dVar5 + 0x390;
  if (fVar3 != 0.0) {
    lVar15 = (longlong)dVar5 + 0x398U;
  }
  if (NAN(fVar3)) {
    lVar15 = (longlong)dVar5 + 0x398U;
  }
  fVar3 = *(float *)((longlong)dVar5 + 0x390U + (ulonglong)(-(uint)(fVar3 != 0.0) & 1) * 8);
  iVar14 = (int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1;
  uVar17 = -iVar14;
  iVar7 = (int)ROUND(-0.5 - (*(float *)(lVar15 + 4) + *(float *)(lVar15 + 4))) >> 1;
  uVar13 = -iVar7;
  if ((int)uVar13 < 9) {
    uVar13 = 8;
  }
  if ((int)uVar17 < 9) {
    uVar17 = 8;
  }
  uVar18 = (ulonglong)uVar17;
  if ((iVar14 < -0x4000) || (iVar7 < -0x4000)) {
    if (0x3fff < uVar13) {
      uVar13 = 0x4000;
    }
    uVar18 = (ulonglong)uVar17;
    if (0x3fff < uVar17) {
      uVar18 = 0x4000;
    }
  }
  local_f0 = (longlong *)(param_1 + 0x120);
  puVar8 = (undefined8 *)FUN_14001cc68(0xc0);
  memset(puVar8,0,0xc0);
  *(undefined4 *)(puVar8 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar8 + 0xc) = 0x105;
  *puVar8 = &PTR_FUN_14a451a20;
  puVar8[2] = 0;
  puVar8[3] = 0;
  uVar9 = DAT_14c967818;
  puVar8[0x14] = DAT_14c967818;
  puVar8[0x15] = uVar9;
  *(undefined2 *)((longlong)puVar8 + 0xbc) = 0;
  *(undefined8 *)((longlong)puVar8 + 0xb4) = 0;
  plVar12 = *(longlong **)((longlong)*param_2 + 0x510);
  plVar11 = *(longlong **)((longlong)*param_2 + 0x518);
  local_d8 = puVar8;
  if (plVar11 == (longlong *)0x0) {
    uVar9 = (**(code **)(*plVar12 + 0xc0))();
    puVar8[3] = uVar9;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    uVar9 = (**(code **)(*plVar12 + 0xc0))();
    puVar8[3] = uVar9;
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_14179bfad(&local_c8,uVar18,uVar13);
  puVar8 = local_d8;
  ppdVar19 = &local_c8;
  pdVar20 = (double *)(local_d8 + 4);
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *pdVar20 = (double)*ppdVar19;
    ppdVar19 = ppdVar19 + 1;
    pdVar20 = pdVar20 + 1;
  }
  uVar16 = uVar18 | (ulonglong)uVar13 << 0x20;
  local_d8[0x14] = uVar16;
  local_d8[0x15] = uVar16;
  local_100 = local_d8[3];
  dVar5 = *param_2;
  local_e8 = (double)*(float *)((longlong)dVar5 + 0x380);
  local_c0 = (undefined8 **)
             (double)(*(float *)((longlong)dVar5 + 0x394) + *(float *)((longlong)dVar5 + 900));
  local_c8 = (double *)
             (double)(*(float *)((longlong)dVar5 + 0x380) + *(float *)((longlong)dVar5 + 0x390));
  local_e0 = (double)*(float *)((longlong)dVar5 + 900);
  local_108 = &local_c8;
  FUN_1403485af(local_d8 + 0x17,(longlong)local_d8 + 0xb4,(longlong)local_d8 + 0xbc,&local_e8);
  uVar6 = FUN_1415e22d4(param_1,*param_2);
  local_f8 = (char)DAT_14ca84f4c;
  if (*(char *)((longlong)puVar8 + 0xbc) != '\x01') {
    local_f8 = '%';
    if (*(char *)(param_1 + 0x340) == '\0') {
      local_f8 = (DAT_14c760db4 == 1) * '\x02';
    }
  }
  *(char *)(puVar8 + 0x16) = local_f8;
  local_100 = CONCAT71(local_100._1_7_,uVar6);
  local_108 = (double **)CONCAT44(local_108._4_4_,uVar13);
  (**(code **)(*DAT_14ca83900 + 0x338))(DAT_14ca83900,&local_c8,puVar8[3],uVar18);
  ppdVar19 = (double **)(puVar8 + 2);
  if (ppdVar19 != &local_c8) {
    pdVar20 = *ppdVar19;
    *ppdVar19 = local_c8;
    local_c8 = (double *)0x0;
    if (pdVar20 == (double *)0x0) goto LAB_1415e2bb5;
    LOCK();
    pdVar2 = pdVar20 + 1;
    dVar5 = *pdVar2;
    *(uint *)pdVar2 = *(uint *)pdVar2 - 1;
    UNLOCK();
    if (((ulonglong)dVar5 & 0x3fffffff) == 1) {
      pdVar2 = pdVar20 + 1;
      LOCK();
      uVar13 = *(uint *)pdVar2;
      *(uint *)pdVar2 = *(uint *)pdVar2 | 0x40000000;
      UNLOCK();
      if ((uVar13 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)((longlong)pdVar20 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = (longlong)pdVar20;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar21 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  pdVar20 = local_c8;
  if (local_c8 != (double *)0x0) {
    LOCK();
    pdVar2 = local_c8 + 1;
    dVar5 = *pdVar2;
    *(uint *)pdVar2 = *(uint *)pdVar2 - 1;
    UNLOCK();
    if (((ulonglong)dVar5 & 0x3fffffff) == 1) {
      pdVar2 = local_c8 + 1;
      LOCK();
      uVar13 = *(uint *)pdVar2;
      *(uint *)pdVar2 = *(uint *)pdVar2 | 0x40000000;
      UNLOCK();
      if ((uVar13 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)((longlong)local_c8 + 0xd);
        plVar10 = (longlong *)FUN_14001cc68(0x10,8);
        plVar10[1] = (longlong)pdVar20;
        plVar12 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar12;
            LOCK();
            bVar21 = plVar12 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar12 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
LAB_1415e2bb5:
  *(undefined1 *)((longlong)local_d8 + 0xbd) = uVar6;
  FUN_140308182(local_d8,0);
  local_e8 = *param_2;
  local_c8 = &local_e8;
  local_c0 = &local_d8;
  FUN_14614b4f4(local_f0,local_cc);
  *(byte *)((longlong)*param_2 + 0x36a) =
       *(byte *)((longlong)*param_2 + 0x36a) & 0xfd | *(char *)((longlong)local_d8 + 0xbc) * '\x02';
LAB_1415e2c0d:
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e2d0a FUN_1415e2d0a body=131 status=ok
// SIG undefined FUN_1415e2d0a(void)

void FUN_1415e2d0a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_140a1ada8();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if ((char)param_2[0x14] == '\x01') {
        lVar1 = FUN_1407afa82(param_1);
        if (lVar1 != 0) {
          FUN_14613de1c(param_1 + 0x4780);
        }
      }
      if (*(char *)((longlong)param_2 + 0xa1) == '\x01') {
        FUN_14613dd98(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415e2d8d FUN_1415e2d8d body=1588 status=ok
// SIG undefined FUN_1415e2d8d(void)

longlong *
FUN_1415e2d8d(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,byte *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *param_10,byte *param_11,undefined4 *param_12)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  uint uVar18;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 *local_290;
  longlong *local_288;
  uint *local_280;
  undefined1 *local_278;
  undefined4 *local_270;
  longlong local_260;
  longlong *local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  uint local_220;
  undefined8 local_210 [9];
  float local_1c8 [2];
  undefined1 local_1c0 [24];
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  char local_194;
  uint local_160;
  undefined1 local_15c;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  float local_128;
  longlong local_108;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  char local_88;
  undefined1 local_80 [24];
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (((param_2 == (longlong *)0x0) ||
      (lVar9 = (**(code **)(*param_2 + 0x180))(param_2), lVar9 == 0)) || (param_4 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_2b8);
  }
  local_210[0] = *param_3;
  FUN_1446dcdd4(local_158);
  lVar10 = FUN_140a4bd48(local_158);
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if ((lVar10 == 0) ||
     (((*(byte *)(lVar10 + 0x590) & 1) != 0 && (iVar8 = FUN_14490d72a(lVar9), iVar8 == 3)))) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar15 = param_10;
    puVar16 = &local_1a8;
    for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    if (((local_194 == '\x01') && (local_198 == 0.0)) && ((!NAN(local_198) && (local_1a0 <= 0.0))))
    {
      local_1a0 = (float)FUN_140b536be(lVar10,local_1a0,param_5,param_7);
    }
    puVar5 = param_12;
    FUN_140d4f03f(local_1c0,param_4,param_5,param_7);
    local_298 = (longlong *)param_9;
    FUN_14133f9d4(local_210,param_4,local_1c0,&param_8);
    FUN_14125d732(&local_1a8,local_158,local_210);
    local_228 = local_130;
    local_238 = local_140;
    uStack_230 = uStack_138;
    pfVar13 = local_1c8;
    if (local_194 != '\0') {
      pfVar13 = &local_198;
    }
    uVar18 = -(uint)(*pfVar13 != 0.0);
    uVar18 = ~uVar18 & 0x3f800000 | (uint)(local_128 / *pfVar13) & uVar18;
    local_68 = 0;
    bVar17 = (*param_6 & 0xfd) != 0;
    local_220 = uVar18;
    if (bVar17) {
      FUN_140d0fb16(param_6,local_80,param_4,0);
    }
    local_88 = '\0';
    local_68 = bVar17;
    cVar7 = FUN_1418a5b2c(puVar5);
    if (local_158 != puVar5 && cVar7 == '\x01') {
      if (local_88 == '\x01') {
        local_a8 = (undefined **)&DAT_14a171d50;
        uVar4 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
          FUN_140115c12(&local_98,0);
        }
        local_a0 = 0;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
      }
      local_158[0] = *puVar5;
      local_150 = *(undefined8 *)(puVar5 + 2);
      local_148 = puVar5[4];
      local_140 = 0;
      local_108 = 0;
      puVar14 = puVar5 + 8;
      if (*(undefined4 **)(puVar5 + 0x14) != (undefined4 *)0x0) {
        puVar14 = *(undefined4 **)(puVar5 + 0x14);
      }
      FUN_1400709d4(&uStack_138,puVar14,puVar5[0x16],0);
      local_f8 = puVar5[0x18];
      local_f0 = *(undefined8 *)(puVar5 + 0x1a);
      local_e8 = puVar5[0x1c];
      local_e0 = *(undefined8 *)(puVar5 + 0x1e);
      local_d8 = puVar5[0x20];
      local_d0 = 0;
      local_c8 = *(undefined8 *)(puVar5 + 0x24);
      uStack_c0 = *(undefined8 *)(puVar5 + 0x26);
      local_b8 = puVar5[0x28];
      uStack_b4 = puVar5[0x29];
      uStack_b0 = puVar5[0x2a];
      uStack_ac = puVar5[0x2b];
      local_a8 = (undefined **)&DAT_14a171d50;
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = *(undefined8 *)(puVar5 + 0x2e);
      FUN_1406022fe(&local_98,puVar5 + 0x30);
      local_a8 = &PTR_FUN_14b0394b0;
      local_88 = '\x01';
    }
    local_240 = param_4;
    if ((*param_11 | 2) == 3) {
      local_240 = *(longlong *)(param_11 + 8);
    }
    local_248 = FUN_143e0f1c4(param_11,param_4);
    local_250 = 0;
    if (local_248 != param_4) {
      local_250 = param_4;
    }
    local_15c = (*(byte *)(lVar10 + 0x175) & 1) == 0;
    if ((bool)local_15c) {
      local_160 = uVar18;
    }
    plVar11 = (longlong *)FUN_14001cc68(0x1e0,0x10);
    local_270 = local_158;
    local_278 = local_80;
    local_280 = &local_160;
    local_288 = &local_238;
    local_298 = &local_250;
    local_290 = local_210;
    FUN_146141a66(plVar11,param_3,&local_240,&local_248);
    *param_1 = (longlong)(plVar11 + 2);
    param_1[1] = (longlong)plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar11 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    FUN_140e67fb0(&local_260,lVar9);
    if (local_258 != (longlong *)0x0) {
      iVar8 = (int)local_258[1];
      do {
        if (iVar8 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)local_258[1];
        bVar17 = iVar8 == iVar6;
        if (bVar17) {
          *(int *)(local_258 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
        plVar11 = local_258;
      } while (!bVar17);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_258 + 0x10))();
      }
      lVar9 = local_260;
      if (plVar11 != (longlong *)0x0) {
        if (local_260 != 0) {
          local_260 = *param_1;
          plVar3 = (longlong *)param_1[1];
          local_258 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            FUN_140e67c44(lVar9,&local_260);
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            FUN_140e67c44();
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
        LOCK();
        plVar3 = plVar11 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
    if (local_88 == '\x01') {
      local_a8 = (undefined **)&DAT_14a171d50;
      uVar4 = uStack_90 >> 0x20;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        FUN_140115c12(&local_98,0);
      }
      local_a0 = 0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e33c2 FUN_1415e33c2 body=574 status=ok
// SIG undefined FUN_1415e33c2(void)

void FUN_1415e33c2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x2468);
  if (*(longlong *)(param_1 + 0x2468) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 0x2470);
  uVar4 = local_58;
  if (uVar3 == 0) goto LAB_1415e359f;
  lVar2 = param_1 + 0x2068;
  if ((uVar3 < 0x101) && (*plVar1 == 0)) {
LAB_1415e341c:
    uVar5 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x2468);
      if (*(longlong *)(param_1 + 0x2468) == 0) {
        lVar7 = lVar2;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x2470) + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  else {
    uVar5 = 0;
    if (0x100 < uVar3) {
      uVar5 = uVar3;
    }
    FUN_1446efa72(plVar1,0,uVar5,4);
    if (0 < (int)uVar3) goto LAB_1415e341c;
  }
  local_40 = param_1 + 0x2010;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  local_30 = 0;
  if (*(int *)(param_1 + 0x2058) != 0) {
    FUN_14613f778(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  uVar4 = local_58;
  local_50 = local_30;
  local_4c = local_2c;
  local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
  local_70 = param_1;
  if (local_58._4_4_ < *(int *)(local_40 + 0x48)) {
    iVar6 = local_58._4_4_;
    local_58 = uVar4;
    do {
      lVar7 = *(longlong *)(local_70 + 0x2000);
      if (*(longlong *)(local_70 + 0x2000) == 0) {
        lVar7 = local_70;
      }
      lVar8 = (longlong)iVar6 * 0x10;
      uVar3 = *(uint *)(lVar7 + lVar8);
      uVar10 = (longlong)
               (int)((uVar3 << 0x10 | uVar3 & 0xffff) + ((uVar3 & 0xffff) >> 4) +
                    ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10)) &
               (longlong)*(int *)(param_1 + 0x2470) - 1U;
      iVar9 = (int)uVar10;
      *(int *)(lVar7 + 0xc + lVar8) = iVar9;
      lVar11 = *(longlong *)(param_1 + 0x2468);
      if (*(longlong *)(param_1 + 0x2468) == 0) {
        lVar11 = lVar2;
      }
      *(undefined4 *)(lVar7 + 8 + lVar8) =
           *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x2470) - 1U & uVar10) * 4);
      lVar7 = *(longlong *)(param_1 + 0x2468);
      if (*(longlong *)(param_1 + 0x2468) == 0) {
        lVar7 = lVar2;
      }
      *(int *)(lVar7 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x2470) - 1U) * 4) = iVar6;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_14613f778(&local_68);
      iVar6 = local_58._4_4_;
      uVar4 = local_58;
    } while (local_58._4_4_ < *(int *)(local_60 + 0x48));
  }
LAB_1415e359f:
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e3602 FUN_1415e3602 body=448 status=ok
// SIG undefined FUN_1415e3602(void)

void FUN_1415e3602(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1415e37c4 FUN_1415e37c4 body=684 status=ok
// SIG undefined FUN_1415e37c4(void)

void FUN_1415e37c4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149efef10;
  lVar4 = 0;
  do {
    if (*(char *)((longlong)param_1 + lVar4 + 0x430) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar4 + 0x430) = 0;
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != -0x160);
  FUN_1469b6fa2(param_1 + 0x53);
  plVar3 = (longlong *)param_1[0x52];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1447de57f(param_1[0x4b],*(undefined4 *)(param_1 + 0x4c));
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_1456cb678(param_1 + 0x41);
  plVar3 = (longlong *)param_1[0x40];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x3e];
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
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1461400d8(param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1456cb678(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145af14ea(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145af14ea(param_1 + 0x15);
  plVar3 = (longlong *)param_1[0x13];
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
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1447de57f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[8];
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
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415e3a4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415e3a70 FUN_1415e3a70 body=136 status=ok
// SIG undefined FUN_1415e3a70(void)

undefined8 * FUN_1415e3a70(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9dabd0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 << 3);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1415e3af8 FUN_1415e3af8 body=136 status=ok
// SIG undefined FUN_1415e3af8(void)

undefined8 * FUN_1415e3af8(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9dabe0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 << 3);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1415e3b80 FUN_1415e3b80 body=1630 status=ok
// SIG undefined FUN_1415e3b80(void)

undefined8 *
FUN_1415e3b80(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             longlong param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8,
             undefined4 *param_9,undefined4 *param_10)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b422d20;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[7] = *param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 1);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar11 = 0;
  if (param_3 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_3 + 0xc);
    *(uint *)(param_1 + 0xc) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)param_1 + 100) = iVar11;
  param_1[0xd] = 0;
  iVar11 = 0;
  if (param_4 != 0) {
    uVar2 = *(uint *)(param_4 + 0xc);
    *(uint *)(param_1 + 0xd) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar11;
  param_1[0xe] = 0;
  if (param_5 == 0) {
    iVar11 = 0;
  }
  else {
    uVar2 = *(uint *)(param_5 + 0xc);
    *(uint *)(param_1 + 0xe) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar11 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar12;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x74) = iVar11;
  param_1[0x11] = param_6[2];
  uVar7 = param_6[1];
  param_1[0xf] = *param_6;
  param_1[0x10] = uVar7;
  uVar3 = param_7[1];
  uVar4 = param_7[2];
  uVar5 = param_7[3];
  *(undefined4 *)(param_1 + 0x12) = *param_7;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  param_1[0x14] = *(undefined8 *)(param_7 + 4);
  cVar1 = *(char *)(param_8 + 1);
  *(char *)((longlong)param_1 + 0xac) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x15) = *param_8;
  }
  cVar1 = *(char *)(param_9 + 6);
  *(char *)(param_1 + 0x19) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x18] = *(undefined8 *)(param_9 + 4);
    uVar3 = param_9[1];
    uVar4 = param_9[2];
    uVar5 = param_9[3];
    *(undefined4 *)(param_1 + 0x16) = *param_9;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
    *(undefined4 *)(param_1 + 0x17) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  }
  cVar1 = *(char *)(param_10 + 0x34);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x1a) = *param_10;
    param_1[0x1b] = *(undefined8 *)(param_10 + 2);
    *(undefined4 *)(param_1 + 0x1c) = param_10[4];
    param_1[0x1d] = 0;
    param_1[0x24] = 0;
    puVar10 = param_10 + 8;
    if (*(undefined4 **)(param_10 + 0x14) != (undefined4 *)0x0) {
      puVar10 = *(undefined4 **)(param_10 + 0x14);
    }
    FUN_1400709d4(param_1 + 0x1e,puVar10,param_10[0x16],0);
    *(undefined4 *)(param_1 + 0x26) = param_10[0x18];
    param_1[0x27] = *(undefined8 *)(param_10 + 0x1a);
    *(undefined4 *)(param_1 + 0x28) = param_10[0x1c];
    param_1[0x29] = *(undefined8 *)(param_10 + 0x1e);
    *(undefined4 *)(param_1 + 0x2a) = param_10[0x20];
    param_1[0x2b] = 0;
    uVar7 = *(undefined8 *)(param_10 + 0x26);
    uVar3 = param_10[0x28];
    uVar4 = param_10[0x29];
    uVar5 = param_10[0x2a];
    uVar6 = param_10[0x2b];
    param_1[0x2c] = *(undefined8 *)(param_10 + 0x24);
    param_1[0x2d] = uVar7;
    *(undefined4 *)(param_1 + 0x2e) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x174) = uVar4;
    *(undefined4 *)(param_1 + 0x2f) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x17c) = uVar6;
    param_1[0x30] = &DAT_14a171d50;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x31] = *(undefined8 *)(param_10 + 0x2e);
    FUN_1406022fe(param_1 + 0x32,param_10 + 0x30);
    param_1[0x30] = &PTR_FUN_14b0394b0;
  }
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3002;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  if (param_3 == (longlong *)0x0) goto LAB_1415e3f4b;
  uVar7 = FUN_1403ec9c0();
  plVar8 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar7);
  if (plVar8 == (longlong *)0x0) {
LAB_1415e4002:
    uVar7 = FUN_1406d192e();
    plVar8 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar7);
    if (plVar8 == (longlong *)0x0) goto LAB_1415e3f4b;
    uVar7 = FUN_1406d192e();
    plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
    if ((plVar8 == plVar9) || (plVar9 == (longlong *)0x0)) goto LAB_1415e3f4b;
    uVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
    FUN_144a79b68(&local_50,uVar7);
  }
  else {
    uVar7 = FUN_1403ec9c0();
    plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
    if ((plVar8 == plVar9) || (plVar9 == (longlong *)0x0)) goto LAB_1415e4002;
    lVar13 = (**(code **)(*plVar9 + 0x30))(plVar9);
    if (lVar13 == 0) {
      local_50 = 0;
    }
    else {
      puVar10 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar13 + 8) != (undefined4 *)0x0) {
        puVar10 = *(undefined4 **)(lVar13 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar13 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar13);
        DAT_14c947fe0 = lVar13;
      }
      FUN_140045924(DAT_14c947fe0,&local_50,puVar10,1);
    }
  }
  if (param_1[0x35] != local_50) {
    param_1[0x37] = 0;
  }
  param_1[0x35] = local_50;
LAB_1415e3f4b:
  if (*(char *)(param_8 + 1) == '\x01') {
    *(undefined1 *)(param_8 + 1) = 0;
  }
  if (*(char *)(param_9 + 6) == '\x01') {
    *(undefined1 *)(param_9 + 6) = 0;
  }
  if (*(char *)(param_10 + 0x34) == '\x01') {
    *(undefined2 **)(param_10 + 0x2c) = &DAT_14a171d50;
    param_10[0x32] = 0;
    if (param_10[0x33] != 0) {
      FUN_140115c12(param_10 + 0x30,0);
    }
    *(undefined8 *)(param_10 + 0x2e) = 0;
    if (*(longlong *)(param_10 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_10 + 0x14) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_10 + 0x34) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415e41e0 FUN_1415e41e0 body=365 status=ok
// SIG undefined FUN_1415e41e0(void)

void FUN_1415e41e0(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1415e42db;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_1415e42db:
  local_f8 = (longlong)param_1 + 0x1c;
  FUN_14656f5c8(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e434e FUN_1415e434e body=192 status=ok
// SIG undefined FUN_1415e434e(void)

void FUN_1415e434e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) == '\x03')) {
    lVar2 = (**(code **)(*param_1 + 0x5d8))();
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x5f0))(param_1);
    }
    param_1[0x5a] = 0;
    lVar2 = param_1[0x5d];
    if (lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x5c) = 4;
    }
    else {
      lVar1 = *(longlong *)(lVar2 + 0x2a8);
      lVar3 = *(longlong *)(lVar1 + 0x2d0);
      if (DAT_14c950c29 == '\x01') {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(lVar1 + 0x2d0);
        }
      }
      *(longlong *)(lVar2 + 0x2b8) = lVar3;
      lVar2 = param_1[0x5d];
      *(undefined1 *)(param_1 + 0x5c) = 4;
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x2c0) = *(undefined1 *)(*(longlong *)(lVar2 + 0x2a8) + 0x2e0);
      }
    }
  }
  return;
}



// FUNCTION 1415e440e FUN_1415e440e body=167 status=ok
// SIG undefined FUN_1415e440e(void)

void FUN_1415e440e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    FUN_143f494f8(param_1);
    return;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar3 = *(longlong **)(param_1 + 0x188);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
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
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_148aaf464(param_1);
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_143f48db6(param_1);
    return;
  }
  return;
}



// FUNCTION 1415e44b6 FUN_1415e44b6 body=470 status=ok
// SIG undefined FUN_1415e44b6(void)

longlong * FUN_1415e44b6(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  local_70 = param_1;
  if (iVar11 != 0) {
    FUN_146143f6e(param_2);
  }
  local_60 = local_70 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)local_70[5] == 0) {
    uVar19 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar19 = local_68 >> 0x20;
  }
  plVar8 = local_60;
  plVar17 = local_70;
  iVar11 = (int)local_68;
  uVar18 = (uint)local_58;
  iVar10 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      puVar15 = (undefined4 *)((longlong)iVar10 * 0x18 + *plVar17);
      iVar10 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
        FUN_14880db52(param_2,iVar10);
        plVar17 = local_70;
      }
      uVar5 = puVar15[1];
      uVar6 = puVar15[2];
      uVar7 = puVar15[3];
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar10 * 0x10);
      *puVar1 = *puVar15;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar18 = uVar18 & ~(uint)uVar19;
      plVar12 = (longlong *)plVar8[2];
      if ((longlong *)plVar8[2] == (longlong *)0x0) {
        plVar12 = plVar8;
      }
      iVar3 = (int)plVar8[3];
      lVar16 = (longlong)iVar11;
      uVar9 = *(uint *)((longlong)plVar12 + lVar16 * 4) & uVar18;
      if (uVar9 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar4 = iVar10;
        if (iVar10 < iVar11) {
          iVar4 = iVar11;
        }
        if (iVar10 <= iVar11) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar9 = *(uint *)((longlong)plVar12 + lVar13 * 4 + lVar16 * 4 + 4);
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar4 - lVar16 == lVar13) goto LAB_1415e461e;
        }
        iVar11 = iVar11 + (int)lVar13 + 1;
        uVar18 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar9 & uVar9);
      uVar2 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar3);
  }
LAB_1415e461e:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e468e FUN_1415e468e body=645 status=ok
// SIG undefined FUN_1415e468e(void)

void FUN_1415e468e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_1 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_80;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x58);
  }
  lVar5 = local_60;
  local_78 = (longlong *)(param_1 + 0x30);
  iVar16 = (int)local_68;
  uVar10 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar17 = local_50;
  local_70 = param_1;
  if (local_58._4_4_ != iVar11 || local_60 != local_80) {
    do {
      lVar14 = *local_78;
      plVar3 = *(longlong **)(lVar14 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar3 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0xd0))();
        FUN_140457ffc(uVar6,local_70);
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        (**(code **)(*DAT_14c8407a8 + 0xc0))
                  (DAT_14c8407a8,*(undefined8 *)((longlong)iVar9 * 0x20 + lVar14 + 0x10),1);
      }
      uVar10 = uVar10 & ~(uint)uVar15;
      lVar14 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar14 = lVar5;
      }
      iVar2 = *(int *)(lVar5 + 0x18);
      lVar12 = (longlong)iVar16;
      uVar8 = *(uint *)(lVar14 + lVar12 * 4) & uVar10;
      iVar9 = iVar2;
      if (uVar8 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar16) {
          iVar4 = iVar16;
        }
        if (iVar16 < iVar7) {
          lVar13 = 0;
          do {
            uVar8 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
            if (uVar8 != 0) {
              iVar16 = iVar16 + (int)lVar13 + 1;
              uVar10 = 0xffffffff;
              goto LAB_1415e47f9;
            }
            iVar17 = iVar17 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar4 - lVar12 != lVar13);
          uVar10 = 0xffffffff;
          iVar16 = iVar4 + 1;
        }
        else {
          iVar16 = iVar16 + 1;
        }
      }
      else {
LAB_1415e47f9:
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar9) {
          iVar9 = iVar2;
        }
      }
    } while (iVar9 != iVar11 || lVar5 != local_80);
  }
  FUN_146143fce(local_78);
  lVar5 = local_70;
  FUN_1459cac0e(*(undefined8 *)(local_70 + 0x80),*(undefined4 *)(local_70 + 0x88));
  *(undefined4 *)(lVar5 + 0x88) = 0;
  if (*(int *)(lVar5 + 0x8c) != 0) {
    FUN_1470f4a8c(lVar5 + 0x80);
  }
  *(undefined1 *)(lVar5 + 0x90) = 0;
  FUN_140457ffc(&DAT_14cb10980,lVar5);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e4914 FUN_1415e4914 body=745 status=ok
// SIG undefined FUN_1415e4914(void)

undefined8 * FUN_1415e4914(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14bc66140;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x200000000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  param_1[0x35] = puVar1;
  param_1[0x34] = puVar1;
  *(undefined4 *)(param_1 + 0x36) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x39] = puVar1;
  param_1[0x38] = puVar1;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
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
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  return param_1;
}



// FUNCTION 1415e4bfe FUN_1415e4bfe body=1688 status=ok
// SIG undefined FUN_1415e4bfe(void)

void FUN_1415e4bfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  ushort *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  uint local_68;
  undefined1 local_64;
  undefined2 uStack_63;
  uint uStack_61;
  undefined4 uStack_5d;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    piVar3 = (int *)(param_1 + 0x208);
    FUN_1448d5e3c(&local_88,piVar3);
    pfVar6 = (float *)local_88[0x54];
    AcquireSRWLockShared((PSRWLOCK)(pfVar6 + 0x1a));
    plVar7 = (longlong *)CONCAT44(uStack_7c,uStack_80);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (*(float *)(lVar5 + 0xac) != pfVar6[0x18]) {
      *(float *)(lVar5 + 0xac) = pfVar6[0x18];
      fVar13 = 0.0;
      if (pfVar6[4] <= 0.0) {
        *(undefined4 *)(lVar5 + 0xb0) = 0;
        fVar14 = 0.0;
      }
      else {
        fVar14 = *pfVar6;
        *(float *)(lVar5 + 0xb0) = fVar14;
        fVar13 = pfVar6[4];
        fVar14 = (fVar14 / fVar13) * 100.0;
      }
      *(float *)(lVar5 + 0xb4) = fVar13;
      *(float *)(lVar5 + 0xe8) = fVar14;
      *(float *)(lVar5 + 0x100) = fVar14;
      if (*(float *)(lVar5 + 0x140) != pfVar6[0x13]) {
        *(undefined1 *)(lVar5 + 0x13c) = *(undefined1 *)(pfVar6 + 0x12);
        *(float *)(lVar5 + 0x140) = pfVar6[0x13];
      }
      if (*(float *)(lVar5 + 0x11c) != pfVar6[0xd]) {
        fVar13 = pfVar6[0xc];
        *(float *)(lVar5 + 0x118) = fVar13;
        *(float *)(lVar5 + 0x11c) = pfVar6[0xd];
        if (ABS(fVar13) <= 1e-08) {
          FUN_140056680(&local_58,&DAT_14b9c1890);
          FUN_140233b1a(&local_88,&local_58);
          FUN_140008f88(lVar5 + 0x148,&local_88);
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 0x10))();
          }
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          local_58 = (longlong *)0x0;
          uStack_50 = (longlong *)0x0;
          FUN_140407a00(&local_88,fVar13,param_1 + 0x298);
          FUN_140008f88(lVar5 + 0x148,&local_88);
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 0x10))();
          }
          plVar7 = uStack_50;
          if (uStack_50 != (longlong *)0x0) {
            LOCK();
            plVar9 = uStack_50 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*uStack_50)(uStack_50);
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
      }
      *(float *)(lVar5 + 0x120) = pfVar6[0xe] * 100.0;
      if (*(int *)(lVar5 + 0x170) == 0) {
        local_88 = (longlong *)0x0;
        FUN_140056680(&uStack_80,&DAT_149dfb77a);
        plStack_70 = (longlong *)0x0;
        local_68 = 0;
        local_64 = 0;
        uStack_63 = 0;
        uStack_61 = 0;
        uStack_5d = 0;
        FUN_1400b22c2(&local_58,"coui://uiresources/vehicle_status/assets/skill_panel.png");
        if (CONCAT44(uStack_7c,uStack_80) != 0) {
          FUN_1400020a8();
        }
        uStack_80 = (undefined4)local_58;
        uStack_7c = local_58._4_4_;
        local_78 = (int)uStack_50;
        uStack_74 = uStack_50._4_4_;
        uStack_61 = uStack_61 & 0xff;
        uStack_5d = 0;
        local_88 = DAT_14cbdbda0;
        FUN_140056680(&local_58,&DAT_149dfb77a);
        FUN_1400b22c2(&local_98,"boost");
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = local_68;
        local_58 = (longlong *)CONCAT44(uStack_94,local_98);
        uStack_50 = (longlong *)CONCAT44(uStack_8c,uStack_90);
        lVar11 = (longlong)(int)local_68;
        local_68 = local_68 + 1;
        if (CONCAT13((undefined1)uStack_61,CONCAT21(uStack_63,local_64)) < local_68) {
          FUN_146145d9a(&plStack_70,uVar10);
        }
        plVar7 = plStack_70 + lVar11 * 2;
        plStack_70[lVar11 * 2] = 0;
        lVar12 = (longlong)(int)uStack_50;
        local_a0 = local_58;
        *(int *)(plStack_70 + lVar11 * 2 + 1) = (int)uStack_50;
        if (lVar12 == 0) {
          *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(plVar7,(ulonglong)uStack_50 & 0xffffffff,0);
          memcpy((void *)*plVar7,local_a0,lVar12 * 2);
        }
        iVar4 = *(int *)(lVar5 + 0x170);
        *(uint *)(lVar5 + 0x170) = iVar4 + 1U;
        if (*(uint *)(lVar5 + 0x174) < iVar4 + 1U) {
          FUN_146145e1e((longlong *)(lVar5 + 0x168),iVar4);
        }
        FUN_146145ff2((longlong)iVar4 * 0x30 + *(longlong *)(lVar5 + 0x168),&local_88);
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_145afa252(&local_88);
      }
      if (*(int *)(lVar5 + 0x180) == 0) {
        FUN_140056680(&local_88,&DAT_149dfb77a);
        FUN_140056680(&local_78,&DAT_149dfb77a);
        local_68 = 0;
        local_64 = 0;
        FUN_1400b22c2(&local_58,"exit_vehicle");
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
        local_78 = (undefined4)local_58;
        uStack_74 = local_58._4_4_;
        plStack_70 = uStack_50;
        FUN_1400b22c2(&local_58,&DAT_149e3bafc);
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_88 = local_58;
        uStack_80 = (int)uStack_50;
        uStack_7c = uStack_50._4_4_;
        local_68 = 0;
        local_64 = 0;
        iVar4 = *(int *)(lVar5 + 0x180);
        *(uint *)(lVar5 + 0x180) = iVar4 + 1U;
        if (*(uint *)(lVar5 + 0x184) < iVar4 + 1U) {
          FUN_146145eb2((longlong *)(lVar5 + 0x178),iVar4);
        }
        FUN_146145f46((longlong)iVar4 * 0x28 + *(longlong *)(lVar5 + 0x178),&local_88);
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (*(float *)(lVar5 + 400) != pfVar6[0x17]) {
        *(undefined1 *)(lVar5 + 0x18c) = *(undefined1 *)(pfVar6 + 0x16);
        *(float *)(lVar5 + 400) = pfVar6[0x17];
      }
      puVar8 = *(ushort **)(lVar5 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(pfVar6 + 0x1a));
    lVar5 = *(longlong *)(param_1 + 0x288);
    if ((lVar5 != 0) && (*piVar3 != 0)) {
      FUN_1448d5e3c(&local_88,piVar3);
      plVar7 = (longlong *)local_88[0xa4];
      AcquireSRWLockShared((PSRWLOCK)(plVar7 + 0x2d));
      plVar9 = (longlong *)CONCAT44(uStack_7c,uStack_80);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (*(int *)(param_1 + 0x2b0) != (int)plVar7[0x2c]) {
        *(int *)(param_1 + 0x2b0) = (int)plVar7[0x2c];
        if ((int)plVar7[1] < 1) {
          *(undefined4 *)(lVar5 + 0xb8) = 0;
          fVar13 = 0.0;
        }
        else {
          *(int *)(lVar5 + 0xb8) = (int)*(float *)(*plVar7 + 0x28);
          fVar13 = (*(float *)(*plVar7 + 0x28) / *(float *)(*plVar7 + 0x38)) * 100.0;
        }
        *(float *)(lVar5 + 0xd0) = fVar13;
        puVar8 = *(ushort **)(lVar5 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 0x2d));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e5298 FUN_1415e5298 body=687 status=ok
// SIG undefined FUN_1415e5298(void)

void FUN_1415e5298(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined8 *local_60;
  int local_58;
  undefined1 local_49;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_1402735c8();
  if (*(longlong *)(lVar6 + 0xb18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  lVar7 = FUN_14050fd64();
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar5 = local_60;
  local_58 = 3;
  *local_60 = &PTR_LAB_149e020b0;
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
  local_60[2] = lVar8;
  *local_60 = &PTR_FUN_14b9b4dc0;
  local_60[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar9 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar9 = *(int *)(lVar6 + 0x10);
      bVar11 = iVar9 == 0;
      if (bVar11) {
        *(int *)(lVar6 + 0x10) = iVar10;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar9 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar9;
  puVar5[4] = FUN_1416443a2;
  *(undefined4 *)(puVar5 + 5) = 0;
  lVar6 = FUN_1402735c8();
  local_70 = &local_49;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_140a1e0be(lVar7 + 0x1e8,&local_48,lVar6 + 0xb18,&local_60);
  plVar1 = local_40;
  if ((longlong *)(param_1 + 0x58) != &local_48) {
    *(longlong *)(param_1 + 0x58) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(param_1 + 0x60);
    if (local_40 != plVar4) {
      local_40 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x60) = plVar1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_1415e5498;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415e5498:
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 != 0) {
    FUN_140bd4428(lVar6,0,1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e555c FUN_1415e555c body=358 status=ok
// SIG undefined FUN_1415e555c(void)

void FUN_1415e555c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar2 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 == 1) goto LAB_1415e55ae;
  }
  else {
LAB_1415e55ae:
    if (DAT_14c82b500 != 0) {
      plVar3 = (longlong *)FUN_1405d8a54(1);
      *(longlong **)(param_1 + 0x30) = plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      cVar1 = FUN_145ff268a(param_1);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
      }
      *(undefined1 *)(param_1 + 0x560) = 2;
      uVar4 = FUN_1411d204e();
      local_70 = param_1;
      FUN_146ffc508(local_60);
      FUN_145c15ada(uVar4,&local_68,local_60);
      FUN_1401cb1ee(local_60);
      *(undefined8 *)(param_1 + 0x510) = local_68;
      goto LAB_1415e55bf;
    }
  }
  *(undefined1 *)(param_1 + 0x560) = 1;
LAB_1415e55bf:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e56d4 FUN_1415e56d4 body=436 status=ok
// SIG undefined FUN_1415e56d4(void)

ulonglong FUN_1415e56d4(uint *param_1,uint param_2,short *param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = param_2 & 3;
  psVar1 = param_3;
  if (3 < param_2) {
    param_2 = param_2 >> 2;
    do {
      uVar4 = *param_1;
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      param_1 = param_1 + 1;
      uVar5 = uVar4 % 0x31c84b1;
      uVar6 = uVar5 % 0x95eed;
      uVar7 = uVar6 % 0x1c39;
      *psVar1 = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                       [uVar4 / 0x31c84b1];
      psVar1[1] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                         [(ulonglong)uVar5 / 0x95eed];
      psVar1[2] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                         [(ulonglong)uVar6 / 0x1c39];
      psVar1[3] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                         [uVar7 / 0x55];
      psVar1[4] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                         [uVar7 % 0x55];
      psVar1 = psVar1 + 5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      uVar4 = (uint)*(byte *)((longlong)param_1 + uVar8) | uVar4 << 8;
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    iVar2 = uVar3 - 4;
    do {
      uVar4 = uVar4 * 0x100;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
    *psVar1 = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                     [uVar4 / 0x31c84b1];
    psVar1[1] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                       [(ulonglong)(uVar4 % 0x31c84b1) / 0x95eed];
    if (uVar3 == 1) {
      psVar1 = psVar1 + 2;
    }
    else {
      uVar4 = (uVar4 % 0x31c84b1) % 0x95eed;
      psVar1[2] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                         [(ulonglong)uVar4 / 0x1c39];
      if (uVar3 == 3) {
        psVar1[3] = (short)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                           [(uVar4 % 0x1c39) / 0x55];
        psVar1 = psVar1 + 4;
      }
      else {
        psVar1 = psVar1 + 3;
      }
    }
  }
  return (ulonglong)((longlong)psVar1 - (longlong)param_3) >> 1;
}



// FUNCTION 1415e5888 FUN_1415e5888 body=514 status=ok
// SIG undefined FUN_1415e5888(void)

void FUN_1415e5888(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0 && param_2 != 0) {
    if (DAT_14cb6f900 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_1487a9c57;
      local_60 = FUN_146541d03;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb6f900);
    if (lVar1 != 0) {
      if (DAT_14cb6f900 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_1487a9c57;
        local_60 = FUN_146541d03;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"Usable",&DAT_14cb6f900,&DAT_1487a9c56);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb6f900);
      if (lVar2 != 0 && lVar1 != lVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e5aa6 FUN_1415e5aa6 body=822 status=ok
// SIG undefined FUN_1415e5aa6(void)

void FUN_1415e5aa6(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong *local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) &&
     (plVar2 = (longlong *)FUN_1400d7050(param_1 + 0x30), plVar2 != (longlong *)0x0)) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_50;
      local_50 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
         DAT_14cbadd90 + 0x30)) &&
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x14d0))(plVar2), plVar2 != (longlong *)0x0)) {
      local_60 = (longlong *)(param_1 + 0x50);
      uVar1 = *(uint *)(param_1 + 0x78);
      uVar13 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        uVar11 = 1;
        uVar15 = 0;
        iVar5 = 0;
        uVar4 = 0;
      }
      else {
        puVar3 = *(uint **)(param_1 + 0x70);
        if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 0x60);
        }
        uVar4 = *puVar3;
        if (uVar4 == 0) {
          iVar5 = uVar1 + 0x1e;
          if (-1 < (int)(uVar1 - 1)) {
            iVar5 = uVar1 - 1;
          }
          uVar15 = 0;
          uVar6 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar6 = uVar15;
          }
          iVar5 = 0;
          do {
            if (uVar6 == uVar15) goto LAB_1415e5bf2;
            iVar5 = iVar5 + 0x20;
            uVar4 = puVar3[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar15 = 0;
          iVar5 = 0;
        }
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar11 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar4 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar1 <= (int)uVar4) {
          uVar4 = uVar1;
        }
      }
      if (uVar4 != uVar1) {
        uVar12 = 0xffffffff;
        local_58 = uVar13;
        do {
          lVar7 = *(longlong *)(*local_60 + (longlong)(int)uVar4 * 0x18);
          if (lVar7 != 0) {
            lVar8 = *local_60 + (longlong)(int)uVar4 * 0x18;
            (**(code **)(*plVar2 + 0x30))(plVar2,lVar7 + 0x90,*(undefined8 *)(lVar8 + 8));
            *(undefined8 *)(lVar8 + 8) = 0;
            uVar1 = *(uint *)(param_1 + 0x78);
            uVar13 = local_58;
          }
          uVar12 = uVar12 & ~(uint)uVar11;
          puVar3 = *(uint **)(param_1 + 0x70);
          if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
            puVar3 = (uint *)(param_1 + 0x60);
          }
          iVar14 = (int)uVar15;
          lVar7 = (longlong)iVar14;
          uVar4 = puVar3[lVar7] & uVar12;
          if (uVar4 == 0) {
            iVar9 = uVar1 + 0x1e;
            if (-1 < (int)(uVar1 - 1)) {
              iVar9 = uVar1 - 1;
            }
            iVar9 = iVar9 >> 5;
            iVar5 = iVar5 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar14) {
              iVar10 = iVar14;
            }
            if (iVar14 < iVar9) {
              lVar8 = 0;
              do {
                uVar4 = puVar3[lVar7 + lVar8 + 1];
                if (uVar4 != 0) {
                  uVar15 = (ulonglong)(iVar14 + (int)lVar8 + 1);
                  uVar12 = 0xffffffff;
                  goto LAB_1415e5d0c;
                }
                iVar5 = iVar5 + 0x20;
                lVar8 = lVar8 + 1;
              } while (iVar10 - lVar7 != lVar8);
              uVar12 = 0xffffffff;
              iVar14 = iVar10;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            uVar4 = uVar1;
          }
          else {
LAB_1415e5d0c:
            uVar11 = (ulonglong)(-uVar4 & uVar4);
            uVar6 = uVar11 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar6 != 0) {
              for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar4 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)uVar1 <= (int)uVar4) {
              uVar4 = uVar1;
            }
          }
        } while (uVar4 != (uint)uVar13);
      }
LAB_1415e5bf2:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e5dfc FUN_1415e5dfc body=237 status=ok
// SIG undefined FUN_1415e5dfc(void)

undefined8 * FUN_1415e5dfc(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a1609f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
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
  param_1[0x20] = 0;
  lVar1 = FUN_14150a8f4();
  FUN_14629f2d4(lVar1 + 0x58,local_38,param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e5eea FUN_1415e5eea body=292 status=ok
// SIG undefined FUN_1415e5eea(void)

void FUN_1415e5eea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  ulonglong local_58 [7];
  
  local_58[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)FUN_14001cc68(0x140,0x10);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *plVar1 = lVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar1 + 1),4000);
  plVar1[10] = 0;
  *(undefined4 *)(plVar1 + 0xb) = 0;
  plVar1[6] = 0;
  plVar1[7] = 0;
  *(undefined8 *)((longlong)plVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar1 + 100) = 0;
  plVar1[0xe] = 0;
  *(undefined4 *)(plVar1 + 0xf) = 0;
  plVar1[0x10] = lVar2;
  plVar1[0x11] = 0;
  lVar2 = 0xaa;
  do {
    *(undefined4 *)((longlong)plVar1 + lVar2 + 3) = 0;
    *(undefined4 *)((longlong)plVar1 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x10a);
  *(undefined8 *)((longlong)plVar1 + 0x129) = 0;
  *(undefined8 *)((longlong)plVar1 + 0x131) = 0;
  plVar1[0x24] = 0;
  plVar1[0x25] = 0;
  plVar1[0x22] = 0;
  plVar1[0x23] = 0;
  *(undefined4 *)((longlong)plVar1 + 0x139) = 0xffffffff;
  local_58[4] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[1] = 0;
  local_58[0] = (ulonglong)((1 < *(int *)(*plVar1 + 0xc0)) + 1);
  local_58[5] = 0x80;
  FUN_1406bfd48(plVar1 + 0x10,local_58,0);
  *(longlong **)(param_1 + 0x14e8) = plVar1;
  if ((local_58[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e6010 FUN_1415e6010 body=293 status=ok
// SIG undefined FUN_1415e6010(void)

void FUN_1415e6010(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1427b1d60(param_1,&local_28,param_2);
  if (local_24 == '\x01') {
    local_30 = param_1;
    if (local_28 == 1) {
      plVar2 = (longlong *)*param_1;
      puVar3 = (ulonglong *)plVar2[1];
      if (puVar3[1] < *puVar3 + 4) {
        if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar2 + 0x170))(plVar2,&local_30,4);
        }
        else {
          FUN_14572512c(plVar2,&local_30);
        }
      }
      else {
        *puVar3 = *puVar3 + 4;
      }
      FUN_141585858(param_2);
    }
    else {
      FUN_146867fdc(param_2);
    }
    plVar2 = (longlong *)*param_1;
    puVar3 = (ulonglong *)plVar2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar2 + 0x170))(plVar2,&local_30,4);
      }
      else {
        FUN_14572512c(plVar2,&local_30);
      }
      iVar4 = (int)local_30;
    }
    else {
      iVar4 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (iVar4 != -0x789abcdf) {
      FUN_14572541c(*param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e6136 FUN_1415e6136 body=176 status=ok
// SIG undefined FUN_1415e6136(void)

void FUN_1415e6136(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  if (param_3 == 1) {
    FUN_14170f7b3(param_2);
  }
  else {
    FUN_146868504(param_2);
  }
  plVar2 = (longlong *)*param_1;
  puVar3 = (ulonglong *)plVar2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_18,4);
    }
    else {
      FUN_14572512c(plVar2,&local_18);
    }
    iVar4 = (int)local_18;
  }
  else {
    iVar4 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (iVar4 != -0x789abcdf) {
    FUN_14572541c(*param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e61e8 FUN_1415e61e8 body=1463 status=ok
// SIG undefined FUN_1415e61e8(void)

ulonglong * FUN_1415e61e8(longlong *param_1,ulonglong *param_2,code *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte bVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 uStack_110;
  undefined1 local_f9;
  ulonglong local_f8;
  longlong *plStack_f0;
  undefined1 local_e8;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  longlong local_90;
  undefined ***pppuStack_88;
  undefined **local_78;
  longlong lStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_90 = 0;
  pppuStack_88 = (undefined ***)0x0;
  local_98 = param_3;
  FUN_1427b1d60(&local_98,&local_f8,*param_1);
  if ((local_f8 & 0x100000000) == 0) {
    bVar10 = 0;
    if (*(char *)((longlong)param_1 + 0xc) != '\0') {
      bVar10 = 0;
      goto LAB_1415e6259;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = (undefined4)local_f8;
    bVar10 = 1;
LAB_1415e6259:
    *(byte *)((longlong)param_1 + 0xc) = bVar10;
  }
  if (local_90 != 0) {
    FUN_1400020a8();
    bVar10 = *(byte *)((longlong)param_1 + 0xc);
  }
  bVar6 = (int)param_1[1] == 1;
  if ((bVar10 & 1) == 0) {
    bVar6 = bVar10 != 0;
  }
  if (bVar6) {
    puVar4 = *(ulonglong **)(param_3 + 8);
    puVar11 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar11) {
      if (((byte)param_3[0x2a] & 2) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x170))(param_3,&local_98,4);
      }
      else {
        FUN_14572512c(param_3,&local_98);
      }
    }
    else {
      local_98 = (code *)CONCAT44(local_98._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar11;
    }
    local_118 = 0;
    uStack_110 = 0;
    FUN_140393c76(&local_118,(ulonglong)local_98 & 0xffffffff,1);
    (**(code **)(*(longlong *)param_3 + 0x170))(param_3,local_118,(longlong)(int)uStack_110);
    lVar5 = local_118;
    iVar7 = (int)uStack_110;
    if ((int)uStack_110 != 0) {
      local_d8[0] = 0;
      local_c8 = (longlong *)0x0;
      uStack_64 = uStack_110._4_4_;
      local_118 = 0;
      uStack_110 = 0;
      uStack_60 = *param_1;
      if (uStack_60 != 0) {
        LOCK();
        *(int *)(uStack_60 + 0xc0) = *(int *)(uStack_60 + 0xc0) + 1;
        UNLOCK();
      }
      pppuStack_88 = (undefined ***)0x0;
      local_78 = &PTR_LAB_149e5dd00;
      lStack_70 = lVar5;
      local_68 = iVar7;
      local_98 = FUN_1427b37ea;
      FUN_14170b918(&local_f8,local_d8);
      plVar15 = plStack_f0;
      uVar8 = local_f8;
      local_e8 = 1;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
        UNLOCK();
      }
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_1415e6492;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_1427b3973);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_1415e6492:
        puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar16 = (uint *)(puVar17 + 0x22);
        uVar14 = puVar12[0x12];
        if (puVar16 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar17 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
          puVar16 = (uint *)(puVar17 + 0x22);
          uVar14 = 0;
          if (puVar16 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_1415e6512;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_1415e6512:
      *(uint **)(puVar12 + 0x10) = puVar16;
      puVar12[0x12] = uVar14;
      FUN_1447247dc(puVar17,0);
      *puVar17 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
      puVar17[0x16] = local_98;
      puVar17[0x18] = pppuStack_88;
      pppuStack_88 = (undefined ***)0x0;
      *(int *)(puVar17 + 0x1c) = local_68;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_64;
      *(undefined4 *)(puVar17 + 0x1d) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_60._4_4_;
      puVar17[0x1a] = local_78;
      puVar17[0x1b] = lStack_70;
      if (local_98 != (code *)0x0) {
        local_98 = (code *)0x0;
      }
      puVar17[0x1e] = local_f8;
      puVar17[0x1f] = plStack_f0;
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      *(undefined1 *)(puVar17 + 0x20) = 0;
      *(undefined4 *)(puVar17 + 0x21) = 0xff;
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar13;
      puVar17[0x10] = 0xc80000527800b400;
      *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
      if (puVar17 == (undefined8 *)0x0) {
        local_f9 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_f9 = 1;
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      plVar9 = plStack_f0;
      *param_2 = uVar8;
      param_2[1] = (ulonglong)plVar15;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar15 = plStack_f0 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_98 != (code *)0x0) {
        pppuVar18 = &local_78;
        if (pppuStack_88 != (undefined ***)0x0) {
          pppuVar18 = pppuStack_88;
        }
        (*(code *)(*pppuVar18)[2])(pppuVar18);
      }
      if (local_d8[0] != 0) {
        plVar15 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar15 = local_b8;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (iVar7 != 0) goto LAB_1415e631a;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1415e631a:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e67a0 FUN_1415e67a0 body=1529 status=ok
// SIG undefined FUN_1415e67a0(void)

undefined8 * FUN_1415e67a0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined1 local_d8;
  undefined1 local_c9;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined ***local_78;
  undefined **local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149e3c8b0;
  plVar9[2] = (longlong)puVar8;
  cVar7 = FUN_140393a94(puVar8,param_2);
  if (cVar7 == '\0') {
    param_1[2] = 0;
    param_1[4] = &PTR_LAB_149e3c930;
    param_1[5] = &LAB_1427930de;
    pcVar10 = FUN_14682e154;
  }
  else {
    if ((param_3 != 0) && (30000 < *(int *)(puVar8 + 1))) {
      uVar11 = FUN_1405d8a54(0);
      puVar8[8] = uVar11;
      FUN_140393cc4(puVar8 + 9,*(undefined4 *)(puVar8 + 3));
      local_c8[0] = 0;
      local_b8 = (longlong *)0x0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_149e3c8d0;
      local_88 = FUN_142792e2e;
      puStack_60 = puVar8;
      local_58 = plVar9;
      FUN_14170b918(&local_e8,local_c8);
      plVar1 = plStack_e0;
      local_d8 = 1;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
        UNLOCK();
      }
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar3;
      if (puVar13 != (uint *)0x0) goto LAB_1415e6a54;
      do {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_142792d82);
        }
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar6 + 0x310);
        *(undefined8 *)(lVar6 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar3 = puVar12;
        FUN_140217a48(puVar3);
        puVar13 = (uint *)*puVar3;
LAB_1415e6a54:
        uVar16 = *(longlong *)(puVar13 + 0x10) + 0xf;
        uVar14 = puVar13[0x12];
        while( true ) {
          puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff0);
          if (puVar17 + 0x22 <= puVar13 + 0x4000) {
            *(undefined8 **)(puVar13 + 0x10) = puVar17 + 0x22;
            puVar13[0x12] = uVar14 + 1;
            FUN_1447247dc(puVar17,0);
            *puVar17 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
            puVar17[0x16] = local_88;
            puVar17[0x18] = local_78;
            local_78 = (undefined ***)0x0;
            *(undefined4 *)(puVar17 + 0x1c) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar17 + 0xe4) = local_58._4_4_;
            *(undefined4 *)(puVar17 + 0x1d) = uStack_50;
            *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_4c;
            puVar17[0x1a] = local_68;
            puVar17[0x1b] = puStack_60;
            if (local_88 != (code *)0x0) {
              local_88 = (code *)0x0;
            }
            puVar17[0x1e] = local_e8;
            puVar17[0x1f] = plStack_e0;
            local_e8 = 0;
            plStack_e0 = (longlong *)0x0;
            *(undefined1 *)(puVar17 + 0x20) = 0;
            *(undefined4 *)(puVar17 + 0x21) = 0xff;
            if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
            }
            puVar17[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar17[9] = puVar17;
            puVar17[10] = puVar17;
            lVar6 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar6 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *(undefined8 *)(lVar6 + 0x30);
            }
            puVar17[0xf] = uVar11;
            puVar17[0x10] = 0xc80000527800b400;
            *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
            if (puVar17 == (undefined8 *)0x0) {
              local_c9 = 1;
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
              UNLOCK();
              local_c9 = 1;
              FUN_1447439e4(puVar17);
              LOCK();
              piVar2 = (int *)(puVar17 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)*puVar17)(puVar17,1);
              }
            }
            plVar15 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar4 = plStack_e0 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            if (local_88 != (code *)0x0) {
              pppuVar18 = &local_68;
              if (local_78 != (undefined ***)0x0) {
                pppuVar18 = local_78;
              }
              (*(code *)(*pppuVar18)[2])(pppuVar18);
            }
            if (local_c8[0] != 0) {
              plVar15 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar15 = local_a8;
              }
              (**(code **)(*plVar15 + 0x10))();
            }
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar1 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            param_1[2] = 0;
            param_1[4] = &PTR_LAB_149e3c8f0;
            param_1[5] = puVar8;
            param_1[6] = plVar9;
            pcVar10 = FUN_142792f00;
            goto LAB_1415e68bd;
          }
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar5 = *puVar13;
          *puVar13 = *puVar13 + uVar14 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar14) != 0xffffffff) break;
          puVar13 = (uint *)*puVar3;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar3 = puVar13;
          uVar16 = (longlong)puVar13 + 0x67;
          uVar14 = 0;
        }
      } while( true );
    }
    FUN_144971c36(puVar8,&local_88);
    param_1[2] = 0;
    param_1[4] = &PTR_FUN_149e3c910;
    param_1[5] = local_88;
    local_88 = (code *)0x0;
    *(undefined4 *)(param_1 + 6) = local_80;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_7c;
    pcVar10 = FUN_142792fe4;
  }
LAB_1415e68bd:
  *param_1 = pcVar10;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e6d9a FUN_1415e6d9a body=496 status=ok
// SIG undefined FUN_1415e6d9a(void)

void FUN_1415e6d9a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((0.0 < *(float *)(param_1 + 0x1c4)) || (0.0 < *(float *)(param_1 + 0x1d0))) &&
     (0.0 < *(float *)(param_1 + 0x2d8))) {
    FUN_14614adb2(param_1);
  }
  if (*(char *)(param_1 + 0x2d0) < '\0') {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0) + 0x3c0);
    if (lVar3 != 0) {
      if (DAT_14caf9cd0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1463c0cc2;
        local_48 = &LAB_147c9db5b;
        local_50 = &LAB_1463f9c44;
        local_58 = &DAT_149e063b2;
        local_60 = 0x2000000000;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x448), lVar3 != 0)) {
        uVar1 = FUN_1405e72a0();
        plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
        if (plVar2 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_140457ffc(lVar3 + 0x38,param_1);
        }
      }
    }
    *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) & 0x7f;
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 800) = 0;
  }
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) &&
     (*(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe,
     *(longlong *)(param_1 + 0x30) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e6fa0 FUN_1415e6fa0 body=351 status=ok
// SIG undefined FUN_1415e6fa0(void)

void FUN_1415e6fa0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8d7080;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_145846df0(param_1[0x55],*(undefined4 *)(param_1 + 0x56));
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x52] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x52] + 0x10))();
  }
  if ((longlong *)param_1[0x4f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4f] + 0x10))();
  }
  if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4c] + 0x10))();
  }
  if ((longlong *)param_1[0x49] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x49] + 0x10))();
  }
  if ((longlong *)param_1[0x40] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x40] + 0x10))();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
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
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1415e7100 FUN_1415e7100 body=1341 status=ok
// SIG undefined FUN_1415e7100(void)

void FUN_1415e7100(longlong param_1,byte param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_79;
  undefined8 local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = param_2 & 7;
  plVar15 = *(longlong **)(param_1 + 0x210);
  lVar4 = *(longlong *)(param_1 + 0x218);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_1415e7155;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1415e715a;
      goto LAB_1415e71c6;
    }
  }
  else {
LAB_1415e7155:
    if (iVar8 != 0x10) {
LAB_1415e71c6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
        goto LAB_1415e715a;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_1415e715a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1415e734f;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14365fa42);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1415e734f:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x19);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x19);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1415e73cf;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1415e73cf:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa59ef0;
        puVar17[0x15] = param_1;
        *(byte *)(puVar17 + 0x16) = param_2;
        uVar6 = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar6;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_78._3_4_;
        puVar17[0x17] = plVar15;
        puVar17[0x18] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar7 = 1;
          if ((char)uVar18 != '\x06') {
            uVar7 = uVar18;
          }
          uVar18 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar8;
        if (puVar17 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x28,8);
        *local_68 = (longlong)&PTR_LAB_14aa59ea0;
        local_68[1] = param_1;
        *(byte *)(local_68 + 2) = param_2;
        local_68[3] = (longlong)plVar15;
        local_68[4] = lVar4;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_1436623ba;
        }
        local_88 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"SetLightingChannelsCmd",&DAT_14cafe1cc);
        if (local_78 != (code *)0x0) {
          plVar15 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar15 = local_58;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_1415e728b;
    }
  }
LAB_1415e715a:
  *(byte *)(param_1 + 0x82) = param_2;
  if (lVar4 != 0) {
    (**(code **)(*plVar15 + 0x4c0))(plVar15,lVar4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
LAB_1415e728b:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e765a FUN_1415e765a body=235 status=ok
// SIG undefined FUN_1415e765a(void)

void FUN_1415e765a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  FUN_1415e7746();
  lVar9 = (longlong)*(int *)(param_1 + 0x1a0);
  if (0 < lVar9) {
    uVar7 = lVar9 + 1;
    lVar9 = lVar9 << 0x20;
    iVar8 = -*(int *)(param_1 + 0x1a0);
    do {
      lVar9 = lVar9 + -0x100000000;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + -0x10 + uVar7 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      if (cVar4 != '\0') {
        lVar2 = *(longlong *)(param_1 + 0x198);
        puVar3 = *(undefined8 **)(lVar2 + (lVar9 >> 0x1d));
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar5 = *(int *)(param_1 + 0x1a0);
        iVar6 = iVar8 + iVar5;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)((lVar9 >> 0x1d) + lVar2),(void *)((longlong)(iVar5 - iVar6) * 8 + lVar2),
                  (longlong)iVar6 << 3);
          iVar5 = *(int *)(param_1 + 0x1a0);
        }
        *(int *)(param_1 + 0x1a0) = iVar5 + -1;
      }
      uVar7 = uVar7 - 1;
      iVar8 = iVar8 + 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 1415e7746 FUN_1415e7746 body=647 status=ok
// SIG undefined FUN_1415e7746(void)

void FUN_1415e7746(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < (longlong)*(int *)(param_1 + 0x188)) {
    uVar8 = (longlong)*(int *)(param_1 + 0x188);
    do {
      uVar9 = uVar8 - 1;
      lVar5 = *(longlong *)(param_1 + 0x180);
      iVar1 = *(int *)(lVar5 + 4 + uVar9 * 0x70);
      if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar5 + uVar9 * 0x70), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) &&
          ((plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))) {
        if (DAT_14c927740 == 0) {
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_70 = &local_50;
          local_78 = &LAB_146856450;
          local_80 = FUN_1427b121c;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000021;
          local_a0 = 8;
          local_a8 = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar4 = DAT_14c927740;
        if (DAT_14c951858 == 0) {
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_70 = &local_50;
          local_78 = &LAB_1468c5283;
          local_80 = FUN_142809da0;
          local_88 = L"Engine";
          local_90 = 0x400000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = *(longlong *)(lVar5 + 0x20);
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
               (lVar7 = lVar5,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar4 + 0x30)) {
              lVar7 = 0;
            }
          } while ((lVar7 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
        }
        if (lVar7 == param_2) {
          FUN_1463ba576((longlong *)(param_1 + 0x180),uVar9 & 0xffffffff);
        }
      }
      bVar3 = 1 < uVar8;
      uVar8 = uVar9;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e79ce FUN_1415e79ce body=325 status=ok
// SIG undefined FUN_1415e79ce(void)

void FUN_1415e79ce(longlong *param_1)

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



// FUNCTION 1415e7b14 FUN_1415e7b14 body=5219 status=ok
// SIG undefined FUN_1415e7b14(void)

undefined8 *
FUN_1415e7b14(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             longlong param_5,longlong param_6,undefined4 param_7,char param_8,undefined8 param_9,
             int param_10)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined2 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  undefined *puVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  ulonglong *local_2b0;
  longlong local_2a8;
  undefined8 *local_2a0;
  uint local_298;
  uint local_294;
  undefined8 local_290;
  longlong local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined1 *local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_208;
  undefined8 local_200;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar26 + 0x204;
  local_290 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1);
    puVar26 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar26 + 0x204;
  }
  *puVar1 = (ulonglong)puVar9;
  *puVar26 = &PTR_FUN_14a31a770;
  local_2a0 = puVar26 + 2;
  local_2b0 = puVar1;
  FUN_144887028();
  puVar26[0x16a] = 0;
  *(undefined4 *)(puVar26 + 0x16b) = 0;
  memset(puVar26 + 0x13e,0,0x90);
  puVar26[0x155] = 0;
  puVar26[0x156] = 0;
  puVar26[0x161] = 0;
  puVar26[0x162] = 0;
  puVar26[0x167] = 0;
  puVar26[0x168] = 0;
  *(undefined8 *)((longlong)puVar26 + 0xb5c) = 0x3f800000;
  *(undefined8 *)((longlong)puVar26 + 0xb64) = 0;
  *(undefined4 *)((longlong)puVar26 + 0xb6c) = 0x3f800000;
  puVar26[0x188] = 0;
  puVar26[0x189] = 0;
  puVar26[0x18a] = 0;
  puVar26[0x18b] = 0;
  puVar26[0x18c] = 0;
  puVar26[0x18d] = 0;
  puVar26[0x171] = 0;
  puVar26[0x172] = 0;
  puVar26[0x173] = 0;
  puVar26[0x174] = 0;
  puVar26[0x175] = 0;
  puVar26[0x176] = 0;
  puVar26[0x177] = 0;
  puVar26[0x178] = 0;
  puVar26[0x17a] = 0;
  puVar26[0x17b] = 0;
  puVar26[0x17c] = 0;
  puVar26[0x17d] = 0;
  lVar6 = 0xc7c;
  do {
    puVar9 = (undefined8 *)((longlong)puVar26 + lVar6 + -0xc);
    *puVar9 = 0;
    puVar9[1] = 0x3f80000000000000;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0xcdc);
  lVar6 = 0xcdc;
  do {
    puVar9 = (undefined8 *)((longlong)puVar26 + lVar6 + -0xc);
    *puVar9 = 0;
    puVar9[1] = 0x3f80000000000000;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0xd3c);
  puVar26[0x1ac] = 0;
  puVar26[0x1ad] = 0;
  puVar26[0x1ae] = 0;
  puVar26[0x1b2] = 0;
  puVar26[0x1b3] = 0;
  puVar26[0x1b4] = 0;
  puVar26[0x1b5] = 0;
  puVar26[0x1b6] = 0;
  puVar26[0x1fa] = 0;
  puVar26[0x1fb] = 0x3f80000000000000;
  puVar26[0x1bc] = 0;
  puVar26[0x1bd] = 0;
  puVar26[0x1be] = 0;
  puVar26[0x1bf] = 0;
  puVar26[0x1c0] = 0;
  puVar26[0x1c6] = 0;
  puVar26[0x1c7] = 0;
  puVar26[0x1ff] = 0;
  puVar26[0x200] = 0;
  puVar26[0x201] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar26;
  local_2c8 = local_2a0;
  FUN_144887262(param_1,param_3,param_4,param_8);
  if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) == '\x01') {
    lVar22 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
    lVar6 = 0;
    if (*(char *)(lVar22 + 8) != '\0') {
      lVar6 = lVar22;
    }
  }
  else {
    lVar6 = 0;
  }
  local_2c8 = puVar26 + 0x13e;
  FUN_1448e315a(param_1,lVar6,*(undefined4 *)(param_3 + 0x3090),param_7);
  FUN_144ab9e1f(param_1,param_3,puVar26 + 0x150);
  local_2c8 = puVar26 + 0x158;
  if (*(longlong *)(param_3 + 0x13788) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(param_3 + 0x13788) + 0x18);
  }
  FUN_144abb559(param_1,local_290,param_3,uVar7);
  if (DAT_14c760a84 == -1) {
    local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,0x66);
    FUN_140002266(&local_268,L"%s %s %d",L"FRDGSystemTextures",
                  L".\\Runtime/Renderer/Private/SystemTextures.cpp");
    DAT_14c760a84 = FUN_145d12cf0(&local_268);
    if (local_268 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar1 = local_2b0;
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (local_288 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     local_288 != 0)) {
    local_288 = local_288 + 8;
  }
  else {
    local_288 = 0;
  }
  fVar31 = 1.0 / *(float *)(param_3 + 0x13694);
  if (*(longlong *)(param_3 + 0x136f0) == 0) {
    puVar26[0x171] = *(undefined8 *)(local_288 + 8);
    puVar26[0x172] = DAT_14c9c0d80;
    lVar6 = *(longlong *)(local_288 + 8);
    if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
      uVar15 = *(undefined2 *)(lVar6 + 0x8e);
    }
    else {
      uVar15 = 0;
    }
    uVar2 = *(undefined1 *)(lVar6 + 0x90);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar18 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_2b0,0x48);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar18 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar18[1] = *(undefined8 *)(lVar6 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 1;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *puVar18 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar18 + 5) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar15;
    *(undefined1 *)(puVar18 + 6) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
    puVar18[7] = lVar6;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar26[0x173] = puVar18;
    uVar7 = DAT_14c9c0de0;
    puVar26[0x174] = DAT_14c9c0de0;
    puVar26[0x16e] = 0;
    puVar26[0x16f] = &DAT_3f8000003f800000;
  }
  else {
    puVar26[0x171] = *(longlong *)(param_3 + 0x136f0);
    puVar26[0x172] = DAT_14c9c0d80;
    lVar6 = *(longlong *)(local_288 + 8);
    if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
      uVar15 = *(undefined2 *)(lVar6 + 0x8e);
    }
    else {
      uVar15 = 0;
    }
    uVar2 = *(undefined1 *)(lVar6 + 0x90);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar18 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
      FUN_140023dd8(local_2b0,0x48);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar18 + 8;
    }
    local_2a8 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar9;
    puVar18[1] = *(undefined8 *)(lVar6 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 1;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *puVar18 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar18 + 5) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x2a) = uVar2;
    *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar15;
    *(undefined1 *)(puVar18 + 6) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
    puVar18[7] = lVar6;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_2a8,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    if (*(longlong *)(param_3 + 0x133a8) == 0) {
      if (*(longlong *)(param_3 + 0x131e0) == 0) {
        if (*(longlong *)(param_3 + 0x131d8) != 0) {
          uVar15 = 0;
          lVar6 = FUN_14473c272(param_1,param_3 + 0x131d8,0);
          puVar1 = local_2b0;
          if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
            uVar15 = *(undefined2 *)(lVar6 + 0x8e);
          }
          uVar2 = *(undefined1 *)(lVar6 + 0x90);
          puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar18 + 8;
          if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
            FUN_140023dd8(local_2b0,0x48);
            puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar18 + 8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar9;
          puVar18[1] = *(undefined8 *)(lVar6 + 8);
          puVar18[2] = 0;
          *(undefined1 *)(puVar18 + 3) = 1;
          *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
          *puVar18 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar18 + 5) = 0;
          *(undefined1 *)((longlong)puVar18 + 0x2a) = uVar2;
          *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
          *(undefined2 *)((longlong)puVar18 + 0x2c) = 0;
          *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar15;
          *(undefined1 *)(puVar18 + 6) = 0;
          *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
          puVar18[7] = lVar6;
          iVar5 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
            FUN_1447568fc(local_2a8,iVar5);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
          *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          local_278 = *(undefined8 *)(param_3 + 0x125c0);
          local_270 = *(undefined1 **)(param_3 + 0x125c8);
          goto LAB_1415e8066;
        }
        local_270 = &DAT_100000001;
        local_278 = 0;
      }
      else {
        cVar3 = '\0';
        uVar20 = 0;
        lVar6 = FUN_14473c272(param_1,param_3 + 0x131e0,0);
        puVar1 = local_2b0;
        if (*(char *)(lVar6 + 0x92) == '\x04') {
LAB_1415e80c0:
          uVar12 = (uint)*(ushort *)(param_3 + 0x13208);
          cVar3 = '\x01';
          uVar20 = CONCAT62((int6)(uVar20 >> 0x10),1);
        }
        else {
          uVar12 = 0;
          uVar20 = 0;
          if (*(char *)(lVar6 + 0x92) == '\x01') goto LAB_1415e80c0;
        }
        uVar2 = *(undefined1 *)(lVar6 + 0x90);
        puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar18 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
          local_298 = (uint)uVar20;
          local_294 = uVar12;
          FUN_140023dd8(local_2b0,0x48);
          uVar20 = (ulonglong)local_298;
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar18 + 8;
          uVar12 = local_294;
        }
        *local_2b0 = (ulonglong)puVar9;
        puVar18[1] = *(undefined8 *)(lVar6 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 1;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *puVar18 = &PTR_FUN_14a203858;
        *(undefined2 *)(puVar18 + 5) = 0;
        *(undefined1 *)((longlong)puVar18 + 0x2a) = uVar2;
        *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
        *(short *)((longlong)puVar18 + 0x2c) = (short)uVar12;
        *(short *)((longlong)puVar18 + 0x2e) = (short)uVar20;
        *(undefined1 *)(puVar18 + 6) = 0;
        *(char *)((longlong)puVar18 + 0x32) = cVar3;
        if (cVar3 != '\0') {
          *(undefined1 *)((longlong)puVar18 + 0x31) = 0;
        }
        puVar18[7] = lVar6;
        iVar5 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
          FUN_1447568fc(local_2a8,iVar5);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        local_278 = *(undefined8 *)(param_3 + 0x131f8);
        local_270 = *(undefined1 **)(param_3 + 0x13200);
        fVar31 = 1.0 / *(float *)(param_3 + 0x13170);
      }
    }
    else {
      uVar15 = 0;
      lVar6 = FUN_14473c272(param_1,param_3 + 0x133a8,0);
      puVar1 = local_2b0;
      if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
        uVar15 = *(undefined2 *)(lVar6 + 0x8e);
      }
      uVar2 = *(undefined1 *)(lVar6 + 0x90);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar18 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
        FUN_140023dd8(local_2b0,0x48);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar18 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar9;
      puVar18[1] = *(undefined8 *)(lVar6 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 1;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *puVar18 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar18 + 5) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar18 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar18 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar15;
      *(undefined1 *)(puVar18 + 6) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
      puVar18[7] = lVar6;
      iVar5 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
        FUN_1447568fc(local_2a8,iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      local_278 = *(undefined8 *)(param_3 + 0x133c0);
      local_270 = *(undefined1 **)(param_3 + 0x133c8);
LAB_1415e8066:
      fVar31 = 1.0 / *(float *)(param_3 + 0x13170);
    }
    puVar26[0x173] = puVar18;
    puVar26[0x174] = DAT_14c9c0de0;
    local_280 = *(longlong **)(puVar18[7] + 0x84);
    FUN_144a2c7c2(&local_268);
    puVar26[0x16e] = local_208;
    puVar26[0x16f] = local_200;
    fVar29 = (float)(*(int *)(param_3 + 0x3104) - *(int *)(param_3 + 0x30fc)) /
             (float)(*(int *)(param_3 + 0x137cc) * 2);
    fVar30 = (float)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8)) /
             (float)(*(int *)(param_3 + 0x137c8) * 2);
    *(float *)(puVar26 + 0x16a) = fVar30;
    *(float *)((longlong)puVar26 + 0xb54) = fVar29;
    *(float *)(puVar26 + 0x16b) = 1.0 / fVar30;
    *(float *)((longlong)puVar26 + 0xb5c) = 1.0 / fVar29;
    uVar7 = DAT_14c9c0de0;
  }
  fVar29 = 0.0001;
  if (0.0001 <= *(float *)(DAT_14ca616a0 + 4)) {
    fVar29 = *(float *)(DAT_14ca616a0 + 4);
  }
  *(float *)((longlong)puVar26 + 0xbcc) = fVar29;
  *(undefined4 *)(puVar26 + 0x179) = 0;
  puVar26[0x175] = 0;
  puVar26[0x177] = 0;
  puVar26[0x176] = uVar7;
  puVar26[0x178] = uVar7;
  if (((0 < *(int *)(DAT_14ca6c2c8 + 4)) && (*(longlong *)(param_3 + 0x3108) != 0)) &&
     (cVar3 = FUN_144abb2f3(local_290,*(longlong *)(param_3 + 8) + 0x48), cVar3 != '\0')) {
    lVar6 = *(longlong *)(param_3 + 0x3108);
    if ((*(uint *)(lVar6 + 0x1ef0) & 0xfffffffd) == 1) {
      lVar6 = FUN_14178685e(lVar6 + 0x1e78,param_1);
      if (lVar6 != 0) {
        puVar26[0x175] = lVar6;
        uVar7 = FUN_14178693c(*(longlong *)(param_3 + 0x3108) + 0x1e78,param_1);
        puVar26[0x177] = uVar7;
        *(undefined4 *)(puVar26 + 0x179) = 0x3f800000;
      }
    }
    else {
      local_268 = *(longlong **)(lVar6 + 0x1eb8 + (ulonglong)*(uint *)(lVar6 + 0x1e80) * 8);
      if ((local_268 != (longlong *)0x0) &&
         ((**(code **)(*local_268 + 0x30))(), local_268 != (longlong *)0x0)) {
        local_280 = *(longlong **)
                     (*(longlong *)(param_3 + 0x3108) + 0x1ec8 +
                     (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x3108) + 0x1e80) * 8);
        if (local_280 != (longlong *)0x0) {
          (**(code **)(*local_280 + 0x30))();
        }
        uVar7 = FUN_14473c272(param_1,&local_268,0);
        puVar26[0x175] = uVar7;
        uVar7 = FUN_14473c272(param_1,&local_280,0);
        puVar26[0x177] = uVar7;
        *(undefined4 *)(puVar26 + 0x179) = 0x3f800000;
        if (local_280 != (longlong *)0x0) {
          (**(code **)(*local_280 + 0x38))();
        }
        if (local_268 != (longlong *)0x0) {
          (**(code **)(*local_268 + 0x38))();
        }
      }
    }
  }
  if (puVar26[0x175] == 0) {
    uVar7 = FUN_14476842e(param_1,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
    puVar26[0x175] = uVar7;
    uVar7 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    puVar26[0x177] = uVar7;
  }
  puVar21 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) != '\0') {
    puVar21 = (undefined *)(*(longlong *)(param_3 + 8) + 0x1b8);
  }
  iVar5 = *(int *)(puVar21 + 0x10);
  if (*(int *)(puVar21 + 0x10) < 2) {
    iVar5 = 1;
  }
  iVar4 = 1;
  if (1 < *(int *)(puVar21 + 0x14)) {
    iVar4 = *(int *)(puVar21 + 0x14);
  }
  plVar10 = *(longlong **)(param_3 + 0x133a8);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)(param_3 + 0x131e0);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = *(longlong **)(param_3 + 0x131d8);
      if (plVar10 == (longlong *)0x0) {
        iVar16 = *(int *)(param_3 + 0x30f8);
        iVar27 = *(int *)(param_3 + 0x30fc);
        iVar19 = *(int *)(param_3 + 0x3104) - iVar27;
        iVar28 = *(int *)(param_3 + 0x3100) - iVar16;
        goto LAB_1415e8601;
      }
      piVar8 = (int *)(param_3 + 0x125c0);
      lVar22 = 0x125cc;
      lVar6 = 0x125c8;
      lVar24 = 0x125c4;
    }
    else {
      piVar8 = (int *)(param_3 + 0x131f8);
      lVar22 = 0x13204;
      lVar6 = 0x13200;
      lVar24 = 0x131fc;
    }
  }
  else {
    piVar8 = (int *)(param_3 + 0x133c0);
    lVar22 = 0x133cc;
    lVar6 = 0x133c8;
    lVar24 = 0x133c4;
  }
  iVar16 = *piVar8;
  iVar27 = *(int *)(param_3 + lVar24);
  iVar19 = *(int *)(param_3 + lVar22) - iVar27;
  iVar28 = *(int *)(param_3 + lVar6) - iVar16;
  lVar6 = (**(code **)(*plVar10 + 0x10))();
  iVar5 = *(int *)(lVar6 + 0x2c);
  iVar4 = *(int *)(lVar6 + 0x30);
LAB_1415e8601:
  *(float *)(puVar26 + 0x16c) = (float)iVar28 * 0.5 * (1.0 / (float)iVar5);
  *(float *)((longlong)puVar26 + 0xb64) = (float)-iVar19 * 0.5 * (1.0 / (float)iVar4);
  *(float *)(puVar26 + 0x16d) = ((float)iVar16 + (float)iVar28 * 0.5) * (1.0 / (float)iVar5);
  *(float *)((longlong)puVar26 + 0xb6c) =
       ((float)iVar19 * 0.5 + (float)iVar27) * (1.0 / (float)iVar4);
  *(float *)(puVar26 + 0x170) = fVar31;
  uVar17 = 0;
  if (((*(byte *)(*(longlong *)(param_3 + 8) + 0x50) & 0x20) != 0) &&
     (iVar5 = FUN_1430b3028(), 0 < iVar5)) {
    uVar17 = FUN_1430b3028();
  }
  *(undefined4 *)((longlong)puVar26 + 0xb84) = uVar17;
  if (*(int *)(param_5 + 0x40) == 0) {
    if (DAT_14c760a84 == -1) {
      local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,0x66);
      FUN_140002266(&local_268,L"%s %s %d",L"FRDGSystemTextures",
                    L".\\Runtime/Renderer/Private/SystemTextures.cpp");
      DAT_14c760a84 = FUN_145d12cf0(&local_268);
      if (local_268 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
       (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
       lVar6 != 0)) {
      lVar6 = lVar6 + 8;
    }
    else {
      lVar6 = 0;
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x58);
    uVar11 = uVar7;
    uVar13 = uVar7;
    uVar23 = uVar7;
  }
  else {
    lVar6 = param_5 + 0x48;
    if (*(longlong *)(param_5 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_5 + 0x50);
    }
    piVar8 = (int *)(lVar6 + (longlong)*(int *)(param_3 + 0x1dd8) * 4);
    if (*(int *)(param_5 + 0x38) == 2) {
      piVar8 = (int *)(param_3 + 0x1dd8);
    }
    lVar6 = *(longlong *)(param_5 + 0x10);
    if (*(longlong *)(param_5 + 0x10) == 0) {
      lVar6 = param_5;
    }
    lVar24 = (longlong)*piVar8 * 0x10;
    uVar7 = *(undefined8 *)(lVar6 + lVar24);
    lVar25 = (longlong)(*piVar8 * 2 + 1);
    lVar22 = param_5 + 0x20;
    if (*(longlong *)(param_5 + 0x30) != 0) {
      lVar22 = *(longlong *)(param_5 + 0x30);
    }
    uVar11 = *(undefined8 *)(lVar6 + lVar25 * 8);
    uVar13 = *(undefined8 *)(lVar22 + lVar24);
    uVar23 = *(undefined8 *)(lVar22 + lVar25 * 8);
  }
  puVar9 = local_2a0;
  puVar1 = local_2b0;
  puVar26[0x17a] = uVar7;
  puVar26[0x17b] = uVar11;
  puVar26[0x17c] = uVar13;
  puVar26[0x17d] = uVar23;
  lVar6 = param_3;
  if ((((*(char *)(param_3 + 0x23f2) == '\x01') && (DAT_14c7604d0 != 0)) &&
      (*(int *)(param_3 + 0x1dd0) == 2)) && (lVar22 = *(longlong *)(param_3 + 8), lVar22 != 0)) {
    iVar5 = *(int *)(param_3 + 0x1dd8);
    if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(lVar22 + 0x10))) {
      lVar6 = *(longlong *)(*(longlong *)(lVar22 + 8) + (longlong)iVar5 * 8);
    }
  }
  FUN_144ab197e(&local_268,param_1,lVar6 + 0x138f0,param_3 + 0x13ab8);
  memcpy(puVar26 + 0x17e,&local_268,0x1f0);
  uVar12 = 1;
  if (param_8 != '\0') {
    uVar12 = (uint)(*(int *)(puVar26 + 0x1bb) < 1);
  }
  *(uint *)(puVar26 + 0x138) = uVar12;
  puVar26[0x1bf] = *(undefined8 *)(local_288 + 8);
  puVar26[0x1c0] = DAT_14c9c0de0;
  if (param_6 != 0) {
    puVar26[0x1bf] = param_6;
  }
  plVar10 = *(longlong **)(param_3 + 0x30d8);
  if ((plVar10 == (longlong *)0x0) || ((*(byte *)(plVar10 + 1) & 2) == 0)) {
    local_268 = (longlong *)&DAT_3f8000003f800000;
    uStack_260 = 0x3f800000;
    uStack_25c = 0x3f800000;
    local_2c8 = (undefined8 *)CONCAT44(local_2c8._4_4_,1);
    local_2c0 = &local_268;
    lVar6 = FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar10 + 0x80) == (code *)&LAB_144b15db6) {
      local_268 = (longlong *)plVar10[(ulonglong)*(uint *)(plVar10 + 0xcd) + 0xd1];
    }
    else {
      local_268 = (longlong *)(**(code **)(*plVar10 + 0x80))();
    }
    if (local_268 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_268 + 1) = *(int *)(local_268 + 1) + 1;
      UNLOCK();
    }
    lVar6 = FUN_144735dd8(param_1,&local_268,1);
    if (local_268 != (undefined8 *)0x0) {
      LOCK();
      piVar8 = (int *)(local_268 + 1);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)*local_268)(local_268,1);
      }
    }
  }
  cVar3 = *(char *)(lVar6 + 0x68);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar18 = puVar14 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
    FUN_140023dd8(puVar1,0x50);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar14 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar18;
  puVar14[1] = *(undefined8 *)(lVar6 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 3;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *puVar14 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar14 + 5) = cVar3 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar14 + 0x2c) = 0xffffffff00000000;
  puVar14[7] = 0;
  puVar14[8] = lVar6;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar26[0x1be] = puVar14;
  puVar26[0x1bc] = *(undefined8 *)(DAT_14ca63b68 + 8);
  puVar26[0x1bd] = DAT_14c9c0de0;
  FUN_144ab4053(param_1,param_3,puVar26 + 0x164,param_9);
  if (*(int *)(DAT_14ca66ea0 + 4) < 1) {
    uVar7 = *(undefined8 *)(DAT_14ca63b28 + 8);
    puVar26[0x1c2] = &DAT_100000001;
    *(undefined4 *)(puVar26 + 0x1c3) = 1;
    puVar26[0x1c4] = &DAT_100000001;
    *(undefined4 *)(puVar26 + 0x1c5) = 1;
    puVar26[0x1c6] = uVar7;
    puVar26[0x1c7] = uVar7;
  }
  else {
    FUN_144b0df63(&local_268);
    puVar26[0x1c6] = local_248;
    puVar26[0x1c7] = uStack_240;
    puVar26[0x1c4] = local_258;
    puVar26[0x1c5] = uStack_250;
    *(undefined4 *)(puVar26 + 0x1c2) = (undefined4)local_268;
    *(undefined4 *)((longlong)puVar26 + 0xe14) = local_268._4_4_;
    *(undefined4 *)(puVar26 + 0x1c3) = uStack_260;
    *(undefined4 *)((longlong)puVar26 + 0xe1c) = uStack_25c;
  }
  FUN_144735396(&local_268,param_1,*(undefined8 *)(param_3 + 0x3108));
  memcpy(puVar26 + 0x1c8,&local_268,0x1d0);
  *(uint *)(puVar26 + 0x202) = (uint)(param_10 == 5);
  lVar6 = FUN_144a8ca7c();
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar18 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
    FUN_140023dd8(puVar1,0x50);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar18 + 9;
  }
  *puVar1 = (ulonglong)puVar26;
  puVar18[1] = uVar7;
  puVar18[2] = 0;
  *puVar18 = &PTR_FUN_14a1fb9b8;
  lVar22 = FUN_144a8ca7c();
  puVar18[3] = puVar9;
  lVar6 = *(longlong *)(lVar22 + 0x48);
  puVar18[4] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  puVar18[5] = lVar22;
  puVar18[6] = 0;
  *(undefined4 *)(puVar18 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar18 + 0x3c) = 0;
  *puVar18 = &PTR_FUN_14a31a778;
  puVar18[8] = puVar9;
  iVar5 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar5 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar5 * 8) = puVar18;
  *(int *)(puVar18 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar18;
}



// FUNCTION 1415e8f78 FUN_1415e8f78 body=197 status=ok
// SIG undefined FUN_1415e8f78(void)

longlong FUN_1415e8f78(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1415e9020;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_4;
  FUN_14614d00e(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1415e9020:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1415e903e FUN_1415e903e body=1 status=ok
// SIG undefined FUN_1415e903e(void)

void FUN_1415e903e(void)

{
  return;
}



// FUNCTION 1415e9040 FUN_1415e9040 body=130 status=ok
// SIG undefined FUN_1415e9040(void)

undefined4
FUN_1415e9040(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_1461eb796(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e90c4 FUN_1415e90c4 body=130 status=ok
// SIG undefined FUN_1415e90c4(void)

undefined4
FUN_1415e90c4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_146214ef0(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e9148 FUN_1415e9148 body=160 status=ok
// SIG undefined FUN_1415e9148(void)

undefined4 FUN_1415e9148(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cbc9d68;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_1462172c6(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e91ea FUN_1415e91ea body=269 status=ok
// SIG undefined FUN_1415e91ea(void)

undefined8 *
FUN_1415e91ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  param_1[3] = 0;
  iVar1 = (int)param_5[1];
  _Src = (void *)*param_5;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xde0) == '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(lVar2 + 0xde0) = 1;
    *(undefined8 *)(lVar2 + 0xdd0) = 0;
    *(undefined8 *)(lVar2 + 0xdd8) = 0;
    __tlregdtor(&LAB_14284e3c5);
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xdd8);
  *(uint *)(lVar2 + 0xdd8) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xddc) < iVar1 + 1U) {
    FUN_146152ca8((longlong *)(lVar2 + 0xdd0),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0xdd0) + (longlong)iVar1 * 8) = param_1;
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1415e92f8 FUN_1415e92f8 body=277 status=ok
// SIG undefined FUN_1415e92f8(void)

void FUN_1415e92f8(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [44];
  short local_4c [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_1458c7f24();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,0x17 < *(int *)((longlong)param_1 + 0x44));
    uVar5 = 0x11;
    if (param_2 != 2) {
      if (param_2 == 0) {
        lVar4 = FUN_1414354ce(param_1,0x11);
        if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1e0) != 0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + 0x68), lVar1 != 0)) &&
           (((FUN_1415b584a(lVar1,local_4c,(int)param_1[6]), -1 < local_4c[0] &&
             (*(longlong *)(lVar4 + 0x1e0) != 0)) &&
            (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + 0x30), lVar4 != 0)))) {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          local_30 = 0xffff;
          lVar4 = FUN_140b9fe48(lVar4,local_4c);
          if (lVar4 != 0) {
            *(undefined1 *)(lVar4 + 0x90) = 1;
          }
        }
        FUN_145d7c4e6(param_1);
        if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      uVar5 = 0x12;
    }
  }
  else {
    uVar5 = 0x17;
  }
  uVar3 = FUN_143f2ac96(param_1,uVar5);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 1415e9422 FUN_1415e9422 body=244 status=ok
// SIG undefined FUN_1415e9422(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415e9422(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  DAT_14caf3c60._0_4_ = 0;
  DAT_14caf3c60._4_4_ = 0;
  _DAT_14caf3c68 = 0;
  DAT_14caf3c50 = 0;
  DAT_14caf3c58 = 0;
  DAT_14caf3c5c = 0;
  _DAT_14caf3c6c = 0x20000000200;
  _DAT_14caf3c74 = 0x40000;
  FUN_146154a4a();
  iVar1 = DAT_14caf3c58;
  lVar5 = (longlong)(int)DAT_14caf3c70;
  lVar6 = (longlong)DAT_14caf3c58;
  iVar4 = DAT_14caf3c58 + DAT_14caf3c70;
  uVar2 = DAT_14caf3c5c - DAT_14caf3c58;
  DAT_14caf3c58 = iVar4;
  if (uVar2 < DAT_14caf3c70) {
    FUN_147c0e426(iVar1);
  }
  memset((void *)(lVar6 * 8 + DAT_14caf3c50),0,lVar5 << 3);
  if (0 < (int)DAT_14caf3c70) {
    lVar5 = 0;
    do {
      puVar3 = (undefined8 *)CONCAT44(DAT_14caf3c60._4_4_,(undefined4)DAT_14caf3c60);
      if (puVar3 == (undefined8 *)0x0) {
        _DAT_14caf3c68 = _DAT_14caf3c68 + 1;
        puVar3 = (undefined8 *)FUN_14001cc68(0x10,0);
      }
      else {
        DAT_14caf3c60._0_4_ = (undefined4)*puVar3;
        DAT_14caf3c60._4_4_ = (undefined4)((ulonglong)*puVar3 >> 0x20);
      }
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined2 *)((longlong)puVar3 + 10) = DAT_14caf3c6c;
      *(undefined8 **)(DAT_14caf3c50 + lVar5 * 8) = puVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)DAT_14caf3c70);
  }
  return;
}



// FUNCTION 1415e9516 FUN_1415e9516 body=186 status=ok
// SIG undefined FUN_1415e9516(void)

void FUN_1415e9516(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_145d5b6b2(0,&local_58);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar5);
        if ((lVar1 != 0) && (cVar3 = FUN_143893b9e(lVar1,&local_40), cVar3 != '\0')) {
          FUN_1415e434e(lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e95d2 FUN_1415e95d2 body=366 status=ok
// SIG undefined FUN_1415e95d2(void)

void FUN_1415e95d2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b3fd9b0;
  plVar3 = (longlong *)param_1[0x3b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14654d636(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_14654d66e(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14654d6a6(param_1 + 0xf);
  FUN_14654d5fe(param_1 + 8);
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x0001415e9734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415e9740 FUN_1415e9740 body=629 status=ok
// SIG undefined FUN_1415e9740(void)

void FUN_1415e9740(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (*(char *)(param_1 + 0x321) != param_2) {
    lVar4 = FUN_1407f4ede();
    if (lVar4 != 0) {
      lVar5 = FUN_1407f4df8();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
        uVar10 = (uint)((ulonglong)DAT_14cbdef98 >> 0x10);
        uVar9 = (uint)DAT_14cbdef98 & 0xffff;
        lVar4 = param_1 + 0x110;
        if (*(longlong *)(param_1 + 0x118) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x118);
        }
        iVar7 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x120) - 1U &
                                 (int)((ulonglong)DAT_14cbdef98 >> 0x20) +
                                 ((uint)DAT_14cbdef98 << 0x10 | uVar9) +
                                 (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar7 * 0x18);
            if (*plVar1 == DAT_14cbdef98) {
              plVar8 = plVar1 + 1;
              if (plVar8 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                if (param_2 == '\0') {
                  if (*plVar8 == 0) {
                    uVar10 = 0;
                    uVar6 = 0;
                  }
                  else {
                    uVar10 = *(uint *)(*plVar8 + 0xc);
                    if ((int)uVar10 < DAT_14c9647dc) {
                      lVar4 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                    }
                    else {
                      lVar4 = 0;
                    }
                    uVar6 = (ulonglong)*(uint *)(lVar4 + 0x10);
                    if (*(uint *)(lVar4 + 0x10) == 0) {
                      LOCK();
                      iVar7 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar9 = DAT_14c964868 + 1;
                      bVar11 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar7;
                      if (bVar11) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar9);
                      }
                      LOCK();
                      uVar3 = *(uint *)(lVar4 + 0x10);
                      bVar11 = uVar3 == 0;
                      if (bVar11) {
                        *(uint *)(lVar4 + 0x10) = uVar9;
                        uVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar11) {
                        uVar3 = uVar9;
                      }
                      uVar6 = (ulonglong)uVar3;
                    }
                  }
                  FUN_1412e3bcc(param_1,(ulonglong)uVar10 | uVar6 << 0x20);
                }
                else {
                  iVar7 = *(int *)(param_1 + 0x148);
                  if (*plVar8 == 0) {
                    uVar10 = 0;
                    uVar6 = 0;
                  }
                  else {
                    uVar10 = *(uint *)(*plVar8 + 0xc);
                    if ((int)uVar10 < DAT_14c9647dc) {
                      lVar4 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                    }
                    else {
                      lVar4 = 0;
                    }
                    uVar6 = (ulonglong)*(uint *)(lVar4 + 0x10);
                    if (*(uint *)(lVar4 + 0x10) == 0) {
                      LOCK();
                      iVar2 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar9 = DAT_14c964868 + 1;
                      bVar11 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar2;
                      if (bVar11) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar9);
                      }
                      LOCK();
                      uVar3 = *(uint *)(lVar4 + 0x10);
                      bVar11 = uVar3 == 0;
                      if (bVar11) {
                        *(uint *)(lVar4 + 0x10) = uVar9;
                        uVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar11) {
                        uVar3 = uVar9;
                      }
                      uVar6 = (ulonglong)uVar3;
                    }
                  }
                  FUN_14143058a(param_1,(ulonglong)uVar10 | uVar6 << 0x20,iVar7 + 1);
                }
              }
              break;
            }
            iVar7 = (int)plVar1[2];
          } while (iVar7 != -1);
        }
      }
    }
    *(char *)(param_1 + 0x321) = param_2;
  }
  return;
}



// FUNCTION 1415e99b6 FUN_1415e99b6 body=100 status=ok
// SIG undefined FUN_1415e99b6(void)

void FUN_1415e99b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar3 + 0x598) != 0) {
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  FUN_1441c6abc(param_1);
  return;
}



// FUNCTION 1415e9a1a FUN_1415e9a1a body=190 status=ok
// SIG undefined FUN_1415e9a1a(void)

void FUN_1415e9a1a(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_145d5b6b2(0,&local_58);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar5);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = FUN_143893b9e(plVar1,&local_40), cVar3 != '\0'))
        {
          (**(code **)(*plVar1 + 0x5e8))(plVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415e9ada FUN_1415e9ada body=80 status=ok
// SIG undefined FUN_1415e9ada(void)

void FUN_1415e9ada(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18[0] = 2;
    local_14 = 0;
    local_c = param_2;
    FUN_14654c976(param_1,local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415e9b2c FUN_1415e9b2c body=141 status=ok
// SIG undefined FUN_1415e9b2c(void)

void FUN_1415e9b2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415e9b96;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415e9b96:
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1415e9bba FUN_1415e9bba body=811 status=ok
// SIG undefined FUN_1415e9bba(void)

undefined8 * FUN_1415e9bba(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b9f8();
  puVar1 = (uint *)(param_1 + 0x5a);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_14b464310;
  *(undefined4 *)(param_1 + 0x16) = 0x101012;
  param_1[0x17] = "uistate";
  if (DAT_14cb91a50 == 0) {
    uVar6 = FUN_1410a124d();
    DAT_14cb91a50 = FUN_140002ddd(FUN_14656ab92,uVar6,L"GbxUIState");
    if (DAT_14cb91a50 == 0) {
      puVar1[0] = 0;
      puVar1[1] = 0;
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
      *(undefined4 *)(param_1 + 0x5e) = 0;
      if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
        FUN_1446f8c06(param_1 + 0x5d,0);
      }
      puVar3 = (undefined2 *)param_1[0x5d];
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
      goto LAB_1415e9d9e;
    }
  }
  lVar7 = DAT_14cb91a50;
  FUN_1400bbfc4(&local_48,DAT_14cb91a50);
  *(undefined4 *)(param_1 + 0x5b) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
  *(undefined4 *)(param_1 + 0x5c) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
  if (param_1 + 0x5b == (undefined8 *)&local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x5d] != 0) {
      FUN_1400020a8();
    }
    param_1[0x5d] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x5e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
  }
  cVar4 = (*(code *)PTR_FUN_14c758760)();
  iVar5 = DAT_14c9647dc;
  uVar2 = *(uint *)(lVar7 + 0xc);
  if (cVar4 != '\0') {
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
      param_1[0x5a] = 0;
      goto LAB_1415e9d9e;
    }
  }
  *puVar1 = uVar2;
  if ((int)uVar2 < iVar5) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar5 = *(int *)(lVar7 + 0x10);
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(lVar7 + 0x10) = iVar8;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar5 = iVar8;
    }
  }
  *(int *)((longlong)param_1 + 0x2d4) = iVar5;
LAB_1415e9d9e:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar5 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar5;
  if (iVar5 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar5);
    if (iVar5 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar5 * 2);
    }
  }
  FUN_1400b22c2(local_58,"GbxUI.State");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415e9ee6 FUN_1415e9ee6 body=2785 status=ok
// SIG undefined FUN_1415e9ee6(void)

int FUN_1415e9ee6(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = '\x01';
  if (((((*(int *)(param_3 + 0x94) != 0) && (uVar16 = *(uint *)(param_3 + 0x90), -1 < (int)uVar16))
       && ((int)uVar16 < DAT_14c9647dc)) &&
      ((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
       puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_3 + 0x94))))) &&
     ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
      plVar14 = (longlong *)*puVar11;
    }
    else {
      plVar14 = (longlong *)0x0;
    }
    cVar4 = (**(code **)(*plVar14 + 0x4a8))();
  }
  iVar8 = *(int *)(param_1 + 0x118);
  if ((((iVar8 == 0) || (*(int *)(param_1 + 0x1c) == 0)) ||
      ((uVar16 = *(uint *)(param_1 + 0x18), (int)uVar16 < 0 ||
       (((DAT_14c9647dc <= (int)uVar16 ||
         (lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 == 0)) ||
        (*(int *)(lVar15 + 0x10) != *(int *)(param_1 + 0x1c))))))) ||
     ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)) {
LAB_1415e9fc9:
    *(undefined4 *)(param_1 + 0x118) = 1;
LAB_1415e9fd3:
    if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar16 = *(uint *)(param_1 + 0x18), -1 < (int)uVar16))
        && ((int)uVar16 < DAT_14c9647dc)) &&
       (((lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 != 0 &&
         (*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x1c))) &&
        ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))) {
      puVar3 = *(uint **)(param_1 + 0x10);
      uVar16 = 2;
      if ((puVar3 == (uint *)0x0) ||
         ((((puVar3[1] != 0 && (uVar10 = *puVar3, -1 < (int)uVar10)) &&
           (((((int)uVar10 < DAT_14c9647dc &&
              (((lVar15 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                lVar15 != 0 && (*(uint *)(lVar15 + 0x10) == puVar3[1])) &&
               ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))) &&
             ((*(int *)(param_1 + 0x28) != 0 &&
              (uVar10 = *(uint *)(param_1 + 0x24), -1 < (int)uVar10)))) &&
            ((int)uVar10 < DAT_14c9647dc)))) &&
          (((lVar15 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar15 != 0 &&
            (*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x28))) &&
           ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))))) goto LAB_1415ea54f;
    }
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x10);
    if (puVar3 == (uint *)0x0) {
      if (iVar8 == 1) goto LAB_1415e9fc9;
    }
    else if ((((puVar3[1] == 0) || (uVar16 = *puVar3, (int)uVar16 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar16 ||
              ((lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 == 0
               || (*(uint *)(lVar15 + 0x10) != puVar3[1])))))) ||
            ((((*(uint *)(lVar15 + 8) & 0x10200000) != 0 ||
              (((*(int *)(param_1 + 0x28) == 0 ||
                (uVar16 = *(uint *)(param_1 + 0x24), (int)uVar16 < 0)) ||
               (DAT_14c9647dc <= (int)uVar16)))) ||
             (((lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 == 0
               || (*(int *)(lVar15 + 0x10) != *(int *)(param_1 + 0x28))) ||
              (iVar8 == 1 || (*(uint *)(lVar15 + 8) & 0x10200000) != 0)))))) goto LAB_1415e9fc9;
    iVar8 = 0;
    if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360) != 0)) {
      iVar8 = FUN_14490d72a();
    }
    bVar5 = 1;
    if (((((*(int *)(param_3 + 0x94) != 0) && (uVar16 = *(uint *)(param_3 + 0x90), -1 < (int)uVar16)
          ) && ((int)uVar16 < DAT_14c9647dc)) &&
        ((puVar11 = (undefined8 *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == *(int *)(param_3 + 0x94))))) &&
       ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
        plVar14 = (longlong *)*puVar11;
      }
      else {
        plVar14 = (longlong *)0x0;
      }
      bVar5 = (**(code **)(*plVar14 + 0x4a8))();
    }
    if (iVar8 == 3) {
LAB_1415ea251:
      *(undefined2 *)(param_1 + 0x54) = 0;
    }
    else if (((*(int *)(param_1 + 0x1c) != 0) &&
             (uVar16 = *(uint *)(param_1 + 0x18), -1 < (int)uVar16)) &&
            (((int)uVar16 < DAT_14c9647dc &&
             (((plVar14 = (longlong *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
               plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x1c))) &&
              ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
        lVar15 = *plVar14;
      }
      else {
        lVar15 = 0;
      }
      if ((*(byte *)(lVar15 + 0x39a) & 8) != 0) goto LAB_1415ea251;
    }
    if (*(char *)(param_1 + 0x54) == '\x01') {
      *(undefined4 *)(param_1 + 0x118) = 2;
    }
    if (puVar3 != (uint *)0x0) {
      puVar3 = *(uint **)(param_1 + 0x10);
      uVar16 = 2;
      if ((((-1 < (int)puVar3[2]) && (puVar3[1] != 0)) &&
          ((uVar10 = *puVar3, -1 < (int)uVar10 &&
           (((int)uVar10 < DAT_14c9647dc &&
            (lVar15 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar15 != 0)))
           ))) && ((*(uint *)(lVar15 + 0x10) == puVar3[1] &&
                   ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))) goto LAB_1415ea33d;
      goto LAB_1415ea54f;
    }
LAB_1415ea33d:
    uVar10 = *(uint *)(param_1 + 0x118);
    if (uVar10 < 3) goto LAB_1415ea348;
    if (iVar8 == 3) {
      uVar16 = uVar10;
      if (bVar5 != 1 || uVar10 == 3) goto LAB_1415ea54f;
LAB_1415ea37d:
      uVar16 = 4;
      if ((((((*(int *)(param_1 + 0x30) != 0) &&
             (uVar2 = *(uint *)(param_1 + 0x2c), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
           && ((lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar15 != 0
               && (*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x30))))) &&
          (4 < uVar10 && (*(uint *)(lVar15 + 8) & 0x10200000) == 0)) &&
         (((uVar16 = 5, uVar10 != 5 && *(longlong *)(param_1 + 0x40) != 0 &&
           (uVar16 = 6, 6 < uVar10)) && (*(char *)(param_1 + 0x55) == '\0')))) {
        uVar16 = 7;
        if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(), cVar6 == '\0')) {
          uVar10 = *(uint *)(param_1 + 0x118);
          if (7 < uVar10) {
            uVar16 = 9;
            if ((*(longlong **)(param_1 + 0x38) == (longlong *)0x0) ||
               (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(), cVar6 != '\0'))
            goto LAB_1415ea54f;
            uVar10 = *(uint *)(param_1 + 0x118);
          }
LAB_1415ea348:
          *(uint *)(param_1 + 0x118) = uVar10 + (uVar10 == 0);
          if (uVar10 < 2) goto LAB_1415e9fd3;
          goto LAB_1415ea556;
        }
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x1c);
      if ((((iVar8 == 0) || (uVar16 = *(uint *)(param_1 + 0x18), (int)uVar16 < 0)) ||
          (DAT_14c9647dc <= (int)uVar16)) ||
         ((plVar14 = (longlong *)
                     ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
          plVar14 == (longlong *)0x0 || ((int)plVar14[2] != iVar8)))) {
        uVar16 = 3;
        if (DAT_000004dc != '\0') {
          lVar15 = 0;
LAB_1415ea981:
          lVar13 = 0;
          goto LAB_1415ea51f;
        }
      }
      else {
        if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
          lVar15 = *plVar14;
        }
        else {
          lVar15 = 0;
        }
        if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
          lVar13 = *plVar14;
        }
        else {
          lVar13 = 0;
        }
        uVar16 = 3;
        if (*(char *)(lVar13 + 0x4dc) != '\0') {
          if (((int)plVar14[2] != iVar8) || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
          goto LAB_1415ea981;
          lVar13 = *plVar14;
LAB_1415ea51f:
          uVar16 = 3;
          if (*(char *)(lVar13 + 0x4dd) == '\x01') {
            bVar17 = *(longlong *)(lVar15 + 0x4c4) != 0;
            uVar16 = 3;
            if (bVar17) {
              uVar16 = uVar10;
            }
            if (((bVar17 && uVar10 != 3) & bVar5) != 0) goto LAB_1415ea37d;
          }
        }
      }
    }
LAB_1415ea54f:
    *(uint *)(param_1 + 0x118) = uVar16;
  }
LAB_1415ea556:
  if (((*(longlong *)(param_2 + 0x30) == 0) ||
      (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360) == 0)) ||
     (iVar8 = FUN_14490d72a(), iVar8 != 3)) {
    bVar17 = false;
  }
  else {
    bVar17 = *(longlong *)(param_1 + 0x10) == 0;
  }
  iVar8 = *(int *)(param_1 + 0x118);
  switch(iVar8) {
  case 2:
    if (*(char *)(param_1 + 0x54) == '\x01') {
      if (!bVar17) {
        if ((((*(int *)(param_1 + 0x1c) != 0) &&
             (uVar16 = *(uint *)(param_1 + 0x18), -1 < (int)uVar16)) &&
            (((int)uVar16 < DAT_14c9647dc &&
             ((plVar14 = (longlong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x1c))))))) &&
           ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
            lVar15 = *plVar14;
          }
          else {
            lVar15 = 0;
          }
          if ((*(byte *)(lVar15 + 0x39a) & 8) != 0) goto LAB_1415ea5af;
        }
        goto LAB_1415ea61b;
      }
LAB_1415ea5af:
      *(undefined2 *)(param_1 + 0x54) = 0;
LAB_1415ea623:
      *(undefined4 *)(param_1 + 0x118) = 3;
      goto switchD_1415ea5a1_caseD_3;
    }
LAB_1415ea61b:
    if (*(char *)(param_1 + 0x54) == '\0') goto LAB_1415ea623;
    break;
  case 3:
switchD_1415ea5a1_caseD_3:
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1415ea964:
      lVar15 = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x18);
      lVar15 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(param_1 + 0x1c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_1415ea964;
        lVar15 = *plVar14;
      }
    }
    if ((!bVar17) && ((*(byte *)(lVar15 + 0x4dc) & *(byte *)(lVar15 + 0x4dd)) != 1)) break;
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x118) = 4;
      goto switchD_1415ea5a1_caseD_4;
    }
    *(undefined4 *)(param_1 + 0x118) = 10;
    goto LAB_1415ea8b0;
  case 4:
switchD_1415ea5a1_caseD_4:
    if (((((*(int *)(param_1 + 0x30) != 0) && (uVar16 = *(uint *)(param_1 + 0x2c), -1 < (int)uVar16)
          ) && ((int)uVar16 < DAT_14c9647dc)) &&
        ((lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 != 0 &&
         (*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x30))))) &&
       ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)) {
      *(undefined4 *)(param_1 + 0x118) = 5;
      goto switchD_1415ea5a1_caseD_5;
    }
    break;
  case 5:
switchD_1415ea5a1_caseD_5:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x118) = 6;
      goto switchD_1415ea5a1_caseD_6;
    }
    break;
  case 6:
switchD_1415ea5a1_caseD_6:
    if (*(char *)(param_1 + 0x55) == '\0') {
      *(undefined4 *)(param_1 + 0x118) = 7;
      goto switchD_1415ea5a1_caseD_7;
    }
    break;
  case 7:
switchD_1415ea5a1_caseD_7:
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
      if (cVar4 != '\0') {
        iVar8 = *(int *)(param_1 + 0x118);
        goto switchD_1415ea5a1_default;
      }
LAB_1415ea766:
      *(undefined4 *)(param_1 + 0x118) = 9;
      goto LAB_1415ea770;
    }
    break;
  default:
switchD_1415ea5a1_default:
    if (iVar8 == 9) {
LAB_1415ea770:
      if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
        if (cVar4 == '\0') {
          *(undefined4 *)(param_1 + 0x118) = 10;
          if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_1415ea8b0;
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                    (*(longlong **)(param_1 + 0x38),param_1 + 0x48);
        }
        else if (*(longlong *)(param_1 + 0x48) == 0) {
          plVar14 = *(longlong **)(param_1 + 0x38);
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          FUN_1446efa72(&local_50,0,2,0x10);
          local_48 = 2;
          *local_50 = &PTR_LAB_14b410600;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar15 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar15 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar15;
          local_50[2] = lVar13;
          *local_50 = &PTR_FUN_14b410590;
          local_50[3] = FUN_1415eef76;
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_40,&local_50);
          *(undefined8 *)(param_1 + 0x48) = local_40;
          if (local_48 != 0) {
            if (local_50 == (undefined8 *)0x0) break;
            (**(code **)*local_50)(local_50,0);
            FUN_1446efa72(&local_50,0,0,0x10);
            local_48 = 0;
          }
          if (local_50 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
    else if (iVar8 == 8) goto LAB_1415ea766;
  }
  iVar8 = *(int *)(param_1 + 0x118);
  if (iVar8 == 10) {
LAB_1415ea8b0:
    if (((*(int *)(param_3 + 0x78) != 0) && (*(longlong **)(param_3 + 0x70) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_3 + 0x70) + 0x30))(), cVar4 != '\0')) {
      uVar1 = *(ushort *)(param_1 + 2);
      uVar7 = 0xffff;
      if (((short)uVar1 < 0) || (*(int *)(param_3 + 0x10) <= (int)(short)uVar1)) {
        uVar9 = 0;
      }
      else {
        uVar12 = (ulonglong)uVar1;
        while (lVar15 = *(longlong *)(*(longlong *)(param_3 + 8) + uVar12 * 8),
              -1 < *(short *)(lVar15 + 4)) {
          uVar12 = (ulonglong)*(short *)(lVar15 + 2);
        }
        uVar7 = *(undefined2 *)(lVar15 + 2);
        uVar9 = *(undefined2 *)(lVar15 + 8);
      }
      local_50._0_4_ = CONCAT22(uVar9,uVar7);
      if (*(int *)(param_3 + 0x78) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *(longlong **)(param_3 + 0x70);
      }
      cVar4 = (**(code **)(*plVar14 + 0x58))(plVar14,param_3,&local_50);
      if (cVar4 == '\0') {
        iVar8 = *(int *)(param_1 + 0x118);
        goto LAB_1415ea938;
      }
    }
    *(undefined4 *)(param_1 + 0x118) = 0xb;
    iVar8 = 0xb;
  }
LAB_1415ea938:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 1415ea9c8 FUN_1415ea9c8 body=54 status=ok
// SIG undefined FUN_1415ea9c8(void)

void FUN_1415ea9c8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14aa50910;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 1415ea9fe FUN_1415ea9fe body=54 status=ok
// SIG undefined FUN_1415ea9fe(void)

void FUN_1415ea9fe(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14aa61a50;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 1415eaa34 FUN_1415eaa34 body=124 status=ok
// SIG undefined FUN_1415eaa34(void)

void FUN_1415eaa34(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[2] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  param_1[7] = 0;
  param_1[5] = &DAT_14aa6dc00;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}



// FUNCTION 1415eaab0 FUN_1415eaab0 body=464 status=ok
// SIG undefined FUN_1415eaab0(void)

void FUN_1415eaab0(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *param_1;
  if ((longlong)(int)param_1[1] == 0) {
    uVar6 = 0;
  }
  else {
    lVar13 = (longlong)(int)param_1[1] * 0x78 + lVar9;
    do {
      puVar1 = (uint *)(lVar9 + 0x38);
      iVar3 = *(int *)(lVar9 + 0x50);
      local_64 = 1;
      if (iVar3 == 0) {
        local_50 = 0;
        local_68 = 0;
        local_54 = 0;
      }
      else {
        puVar7 = *(uint **)(lVar9 + 0x48);
        if (*(uint **)(lVar9 + 0x48) == (uint *)0x0) {
          puVar7 = puVar1;
        }
        uVar8 = *puVar7;
        if (uVar8 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          uVar12 = 0;
          uVar11 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar11 = uVar12;
          }
          local_68 = (int)uVar11 + 1;
          local_50 = (int)uVar11 * 0x20 + 0x20;
          iVar10 = 0;
          do {
            local_54 = iVar3;
            if (uVar11 == uVar12) goto LAB_1415eab8e;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar7[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar8 == 0);
          local_68 = (int)uVar12;
          local_50 = iVar10;
        }
        else {
          local_50 = 0;
          local_68 = 0;
        }
        local_64 = -uVar8 & uVar8;
        uVar11 = (ulonglong)local_64 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_54 = (local_50 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar3 <= local_54) {
          local_54 = iVar3;
        }
      }
LAB_1415eab8e:
      plVar2 = (longlong *)(lVar9 + 0x28);
      local_58 = 0xffffffff;
      local_70 = plVar2;
      local_60 = puVar1;
      if (local_54 != iVar3) {
        do {
          plVar4 = *(longlong **)(*local_70 + 8 + (longlong)local_54 * 0x20);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4,0);
          }
          local_58 = local_58 & ~local_64;
          FUN_1449c0562(&local_68);
        } while (((local_54 != iVar3) || (local_60 != puVar1)) || (local_70 != plVar2));
      }
      lVar9 = lVar9 + 0x78;
    } while (lVar9 != lVar13);
    uVar6 = (undefined4)param_1[1];
    lVar9 = *param_1;
  }
  FUN_1415eac81(lVar9,uVar6);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14615bb64(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415eac81 FUN_1415eac81 body=664 status=ok
// SIG undefined FUN_1415eac81(void)

void FUN_1415eac81(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    do {
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1400020a8();
      }
      puVar1 = (uint *)(param_1 + 0x38);
      iVar5 = *(int *)(param_1 + 0x50);
      local_64 = 1;
      if (iVar5 == 0) {
        local_50 = 0;
        local_68 = 0;
        local_54 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar8 = *puVar10;
        if (uVar8 == 0) {
          iVar9 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar9 = iVar5 + -1;
          }
          uVar12 = 0;
          uVar11 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar11 = uVar12;
          }
          local_68 = (int)uVar11 + 1;
          local_50 = (int)uVar11 * 0x20 + 0x20;
          iVar9 = 0;
          do {
            local_54 = iVar5;
            if (uVar11 == uVar12) goto LAB_1415ead69;
            iVar9 = iVar9 + 0x20;
            uVar8 = puVar10[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar8 == 0);
          local_68 = (int)uVar12;
          local_50 = iVar9;
        }
        else {
          local_50 = 0;
          local_68 = 0;
        }
        local_64 = -uVar8 & uVar8;
        uVar11 = (ulonglong)local_64 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_54 = (local_50 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar5 <= local_54) {
          local_54 = iVar5;
        }
      }
LAB_1415ead69:
      plVar2 = (longlong *)(param_1 + 0x28);
      local_58 = 0xffffffff;
      local_70 = plVar2;
      local_60 = puVar1;
      if (local_54 < iVar5) {
        do {
          plVar6 = *(longlong **)(*local_70 + 0x10 + (longlong)local_54 * 0x20);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar6 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar4 = (int *)((longlong)plVar6 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          local_58 = local_58 & ~local_64;
          FUN_1449c0562(&local_68);
        } while (local_54 < (int)local_60[6]);
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_1446f4a44(plVar2);
      }
      *(undefined8 *)(param_1 + 0x58) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (0x80 < *(uint *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x54) = 0x80;
        FUN_1446efbd8(puVar1);
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = (longlong *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x18) == 0) {
LAB_1415eadec:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else if ((undefined8 *)*plVar2 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar2)();
        FUN_1446efa72(plVar2);
        *(undefined4 *)(param_1 + 0x18) = 0;
        goto LAB_1415eadec;
      }
      param_1 = param_1 + 0x78;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415eaf1a FUN_1415eaf1a body=207 status=ok
// SIG undefined FUN_1415eaf1a(void)

void FUN_1415eaf1a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)*param_2;
  local_20 = ((undefined8 *)*param_2)[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1459b6cd8(param_1 + 0x5a0,&local_28);
  if ((((*(char *)(param_1 + 0x21) == '\x01') && (*(longlong *)(param_1 + 0x38) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar2 != 0)) &&
     ((lVar2 = *(longlong *)(lVar2 + 0x360), lVar2 != 0 && (*(longlong *)(lVar2 + 0x1f0) != 0)))) {
    lVar2 = FUN_140cb14ac();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
      FUN_146240950(*(longlong *)(lVar2 + 0x30),param_2);
    }
  }
  if ((*(int *)(param_1 + 0x4f8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x4f0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415eafea FUN_1415eafea body=202 status=ok
// SIG undefined FUN_1415eafea(void)

void FUN_1415eafea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1c8) != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1d0) + 8))) {
    cVar3 = FUN_146586100(*(undefined8 *)(param_1 + 0x10));
    if (cVar3 == '\0') {
      FUN_1401cb356();
      local_20 = *(undefined8 *)(param_1 + 0x1c8);
      local_18 = *(longlong *)(param_1 + 0x1d0);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_20);
      plVar2 = *(longlong **)(param_1 + 0x1d0);
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      FUN_1441ddd70(param_1,param_1 + 0x1d8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415eb0c2 FUN_1415eb0c2 body=1471 status=ok
// SIG undefined FUN_1415eb0c2(void)

void FUN_1415eb0c2(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  char *_Str;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  char *pcVar23;
  longlong lVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb92a30 != (undefined8 *)0x0) {
    local_78 = (longlong *)(param_1 + 0x390);
    local_70 = param_1 + 0x3c8;
    local_80 = param_1 + 0x3a0;
    puVar26 = DAT_14cb92a30;
    do {
      puVar27 = (undefined8 *)*puVar26;
      _Str = (char *)puVar26[3];
      if (_Str != (char *)0x0) {
        sVar7 = strlen(_Str);
        iVar22 = (int)sVar7;
        if (iVar22 == 0) {
LAB_1415eb515:
          uVar8 = 0;
          uVar18 = 0;
        }
        else {
          lVar16 = (longlong)iVar22;
          pcVar23 = _Str + lVar16 + -1;
          if (pcVar23 < _Str) {
            lVar20 = 0;
          }
          else {
            uVar10 = 0;
            do {
              if (9 < (byte)(*pcVar23 - 0x30U)) break;
              uVar10 = uVar10 + 1;
              pcVar23 = pcVar23 + -1;
            } while (_Str <= pcVar23);
            if (((((uVar10 == 0) || (iVar22 <= (int)uVar10)) || (10 < uVar10)) ||
                (lVar24 = -(ulonglong)uVar10, _Str[lVar24 + lVar16 + -1] != '_')) ||
               ((uVar10 != 1 && (_Str[lVar24 + lVar16] == '0')))) {
LAB_1415eb176:
              lVar20 = 0;
            }
            else {
              lVar19 = 0;
              do {
                lVar20 = (longlong)_Str[lVar24 + lVar16] + lVar19 * 10;
                lVar19 = lVar20 + -0x30;
                lVar24 = lVar24 + 1;
              } while (lVar24 != 0);
              if (0x7ffffffe < lVar19) goto LAB_1415eb176;
              iVar22 = ~uVar10 + iVar22;
              lVar20 = lVar20 + -0x2f;
            }
            if (iVar22 == 0) goto LAB_1415eb515;
          }
          local_4c = 0;
          local_58 = _Str;
          local_50 = iVar22;
          uVar10 = FUN_14001a6c0(&local_58,1);
          uVar18 = lVar20 << 0x20;
          uVar8 = (ulonglong)uVar10;
        }
        uVar21 = uVar18 | uVar8;
        iVar22 = *(int *)(param_1 + 0x3c4);
        uVar14 = (uint)uVar8;
        iVar17 = (int)(uVar18 >> 0x20);
        uVar10 = (uint)(uVar8 >> 0x10);
        if (*(int *)(param_1 + 0x398) != iVar22) {
          lVar16 = *(longlong *)(param_1 + 0x3d0);
          if (*(longlong *)(param_1 + 0x3d0) == 0) {
            lVar16 = local_70;
          }
          iVar13 = *(int *)(lVar16 + (ulonglong)
                                     (*(int *)(param_1 + 0x3d8) - 1U &
                                     iVar17 + (uVar14 << 0x10 | uVar14 & 0xffff) +
                                              ((uVar14 & 0xffff) >> 4) + (uVar10 << 0x13 | uVar10))
                                     * 4);
          if (iVar13 != -1) {
            do {
              puVar1 = (ulonglong *)(*local_78 + (longlong)iVar13 * 0x18);
              if (*puVar1 == uVar21) {
                if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) goto LAB_1415eb44d;
                break;
              }
              iVar13 = (int)puVar1[2];
            } while (iVar13 != -1);
          }
        }
        uVar18 = puVar26[1];
        if (uVar18 == 0) {
          if ((code *)puVar26[2] != (code *)0x0) {
            uVar18 = (*(code *)puVar26[2])();
            puVar26[1] = uVar18;
            if (uVar18 != 0) {
              iVar22 = *(int *)(param_1 + 0x3c4);
              goto LAB_1415eb263;
            }
          }
        }
        else {
LAB_1415eb263:
          local_60 = puVar27;
          if (iVar22 == 0) {
            iVar13 = *(int *)(param_1 + 0x398);
            *(int *)(param_1 + 0x398) = iVar13 + 1;
            if (*(int *)(param_1 + 0x39c) == iVar13) {
              FUN_14482b872(local_78,iVar13);
            }
            iVar22 = *(int *)(param_1 + 0x3b8);
            if (iVar22 == 0) {
              iVar6 = -1;
            }
            else {
              iVar6 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar6 = iVar22 + -1;
              }
              iVar6 = iVar6 >> 5;
            }
            iVar11 = iVar22 + 1;
            iVar25 = iVar22 + 0x1f;
            if (-1 < iVar22) {
              iVar25 = iVar22;
            }
            if (iVar25 >> 5 == iVar6) {
              *(int *)(param_1 + 0x3b8) = iVar11;
            }
            else {
              if (*(int *)(param_1 + 0x3bc) <= iVar22) {
                if (iVar22 + 0x20U < 0xa0) {
                  iVar11 = 0x80;
                  iVar6 = iVar22;
                }
                else {
                  uVar15 = iVar22 + 0x20U >> 5;
                  local_68 = (ulonglong)uVar15;
                  if (*(int *)(param_1 + 0x3bc) + 0x1fU < 0xa0) {
                    uVar12 = 4;
                    if (4 < uVar15) {
                      uVar12 = uVar15;
                    }
                  }
                  else {
                    uVar12 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
                  }
                  uVar8 = FUN_144a3809e(uVar12 << 2,0);
                  iVar6 = (int)(uVar8 >> 2);
                  iVar11 = iVar6 << 5;
                  if (iVar6 < (int)local_68) {
                    iVar11 = -0x20;
                  }
                  iVar6 = *(int *)(param_1 + 0x3b8);
                }
                *(int *)(param_1 + 0x3bc) = iVar11;
                FUN_1446efbd8(local_80,iVar6);
                iVar11 = *(int *)(param_1 + 0x3b8) + 1;
              }
              iVar6 = iVar11 + 0x1f;
              if (-1 < iVar11) {
                iVar6 = iVar11;
              }
              *(int *)(param_1 + 0x3b8) = iVar11;
              if (iVar11 % 0x20 != 0) {
                lVar16 = *(longlong *)(param_1 + 0x3b0);
                if (*(longlong *)(param_1 + 0x3b0) == 0) {
                  lVar16 = local_80;
                }
                bVar9 = -(char)(iVar11 % 0x20);
                *(uint *)(lVar16 + (longlong)(iVar6 >> 5) * 4) =
                     (uint)(*(int *)(lVar16 + (longlong)(iVar6 >> 5) * 4) << (bVar9 & 0x1f)) >>
                     (bVar9 & 0x1f);
              }
            }
            lVar16 = (longlong)iVar13;
            lVar20 = *(longlong *)(param_1 + 0x3b0);
            if (*(longlong *)(param_1 + 0x3b0) == 0) {
              lVar20 = local_80;
            }
            bVar9 = (byte)iVar22 & 0x1f;
            puVar2 = (uint *)(lVar20 + (longlong)(iVar25 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
          }
          else {
            iVar13 = *(int *)(param_1 + 0x3c0);
            lVar16 = (longlong)iVar13;
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x390) + 4 + lVar16 * 0x18);
            *(int *)(param_1 + 0x3c0) = iVar6;
            *(int *)(param_1 + 0x3c4) = iVar22 + -1;
            if (iVar22 + -1 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar6 * 0x18) = 0xffffffff;
            }
          }
          puVar27 = local_60;
          lVar20 = *(longlong *)(param_1 + 0x3b0);
          if (*(longlong *)(param_1 + 0x3b0) == 0) {
            lVar20 = local_80;
          }
          iVar22 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar22 = iVar13;
          }
          puVar2 = (uint *)(lVar20 + (longlong)(iVar22 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x390) + lVar16 * 0x18);
          *puVar1 = uVar21;
          puVar1[1] = uVar18;
          *(undefined4 *)(puVar1 + 2) = 0xffffffff;
          uVar10 = (uVar14 << 0x10 | uVar14 & 0xffff) + iVar17 + (uVar10 << 0x13 | uVar10) +
                   ((uVar14 & 0xffff) >> 4);
          uVar14 = *(int *)(param_1 + 0x398) - *(int *)(param_1 + 0x3c4);
          if ((uVar14 != 0) && (uVar14 != 1)) {
            lVar16 = *(longlong *)(param_1 + 0x3d0);
            if (*(longlong *)(param_1 + 0x3d0) == 0) {
              lVar16 = local_70;
            }
            iVar22 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & uVar10) * 4);
            if (iVar22 != -1) {
              do {
                puVar3 = (ulonglong *)(*local_78 + (longlong)iVar22 * 0x18);
                if (*puVar3 == uVar21) {
                  uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
                  uVar18 = puVar1[1];
                  uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
                  *(int *)puVar3 = (int)*puVar1;
                  *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
                  *(int *)(puVar3 + 1) = (int)uVar18;
                  *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
                  FUN_148a0828e(local_78,iVar13);
                  goto LAB_1415eb44d;
                }
                iVar22 = (int)puVar3[2];
              } while (iVar22 != -1);
            }
          }
          if (uVar14 < 4) {
            iVar22 = 1;
          }
          else {
            uVar18 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
            lVar16 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar22 = 1 << ((byte)lVar16 & 0x1f);
          }
          if (((int)uVar14 < 1) || (iVar22 <= *(int *)(param_1 + 0x3d8))) {
            uVar10 = *(int *)(param_1 + 0x3d8) - 1U & uVar10;
            *(uint *)((longlong)puVar1 + 0x14) = uVar10;
            lVar16 = *(longlong *)(param_1 + 0x3d0);
            if (*(longlong *)(param_1 + 0x3d0) == 0) {
              lVar16 = local_70;
            }
            *(undefined4 *)(puVar1 + 2) =
                 *(undefined4 *)
                  (lVar16 + ((longlong)*(int *)(param_1 + 0x3d8) - 1U & (longlong)(int)uVar10) * 4);
            lVar16 = *(longlong *)(param_1 + 0x3d0);
            if (*(longlong *)(param_1 + 0x3d0) == 0) {
              lVar16 = local_70;
            }
            *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x3d8) - 1U & (longlong)(int)uVar10) * 4
                    ) = iVar13;
          }
          else {
            *(int *)(param_1 + 0x3d8) = iVar22;
            FUN_1415eb682(local_78);
          }
        }
      }
LAB_1415eb44d:
      puVar26 = puVar27;
    } while (puVar27 != (undefined8 *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415eb682 FUN_1415eb682 body=594 status=ok
// SIG undefined FUN_1415eb682(void)

void FUN_1415eb682(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1415eb88b;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1415eb88b:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415eb8d6 FUN_1415eb8d6 body=1187 status=ok
// SIG undefined FUN_1415eb8d6(void)

void FUN_1415eb8d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b777d00;
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  if (param_1[0x1ba] != 0) {
    FUN_1400020a8();
  }
  FUN_145c09f9c(param_1 + 0x1b2);
  *(undefined4 *)(param_1 + 0x1b1) = 0;
  if (param_1[0x1b0] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0a04e(param_1 + 0x1a8);
  if (param_1[0x1a6] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (param_1[0x19f] != 0) {
    FUN_1400020a8();
  }
  FUN_145ecffae(param_1 + 0x197);
  *(undefined4 *)(param_1 + 0x196) = 0;
  if (param_1[0x195] != 0) {
    FUN_1400020a8();
  }
  FUN_144047a7a(param_1 + 0x18d);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (param_1[0x18b] != 0) {
    FUN_1400020a8();
  }
  FUN_144047a7a(param_1 + 0x183);
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (param_1[0x17b] != 0) {
    FUN_1400020a8();
  }
  FUN_144047b32(param_1 + 0x173);
  *(undefined4 *)(param_1 + 0x172) = 0;
  if (param_1[0x171] != 0) {
    FUN_1400020a8();
  }
  FUN_144047b32(param_1 + 0x169);
  if (param_1[0x167] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x165] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x161) = 0;
  if (param_1[0x160] != 0) {
    FUN_1400020a8();
  }
  FUN_145abb8b0(param_1 + 0x158);
  if ((longlong *)param_1[0x154] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x154] + 0x10))();
  }
  if ((longlong *)param_1[0x152] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x152] + 0x10))();
  }
  if ((longlong *)param_1[0x150] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x150] + 0x10))();
  }
  if ((longlong *)param_1[0x14e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14e] + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x14d) = 0;
  if (param_1[0x14c] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x144);
  if (param_1[0x141] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c04fa9(param_1[0x136],*(undefined4 *)(param_1 + 0x137));
  if (param_1[0x136] != 0) {
    FUN_1400020a8();
  }
  FUN_145ca2032(param_1 + 0x12a);
  FUN_1459cb2f2(param_1[0x128],*(undefined4 *)(param_1 + 0x129));
  if (param_1[0x128] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb2f2(param_1[0x126],*(undefined4 *)(param_1 + 0x127));
  if (param_1[0x126] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb2f2(param_1[0x124],*(undefined4 *)(param_1 + 0x125));
  if (param_1[0x124] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cb2f2(param_1[0x122],*(undefined4 *)(param_1 + 0x123));
  if (param_1[0x122] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x121) = 0;
  if (param_1[0x120] != 0) {
    FUN_1400020a8();
  }
  FUN_145eeb3ae(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x117) = 0;
  if (param_1[0x116] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c441c(param_1 + 0x10e);
  FUN_1459c43c6(param_1 + 0xfa);
  *(undefined4 *)(param_1 + 0xf9) = 0;
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  FUN_145ecffae(param_1 + 0xf0);
  FUN_1405d7ab2(param_1[0xee],*(undefined4 *)(param_1 + 0xef));
  if (param_1[0xee] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xed) = 0;
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  FUN_145fcdb16(param_1 + 0xe4);
  if (param_1[0xe1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xbd) = 0;
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0a100(param_1 + 0xb4);
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  FUN_145b06482(param_1 + 0x83);
  FUN_145aff56c(param_1 + 0x73);
  FUN_145ab9434(param_1 + 0x37);
  if ((longlong *)param_1[0x35] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x35] + 0x10))();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9ecbc(param_1);
  return;
}



// FUNCTION 1415ebd7a FUN_1415ebd7a body=179 status=ok
// SIG undefined FUN_1415ebd7a(void)

void FUN_1415ebd7a(longlong param_1,char param_2)

{
  int iVar1;
  UINT UVar2;
  DWORD DVar3;
  HKL pHVar4;
  undefined1 auStack_98 [40];
  int local_70;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != '\0') {
    pHVar4 = GetKeyboardLayout(0);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
    if ((-1 < iVar1) && (local_70 == 1)) {
      *(undefined4 *)(param_1 + 8) = 2;
      goto LAB_1415ebe02;
    }
    UVar2 = ImmGetIMEFileNameW(pHVar4,(LPWSTR)0x0,0);
    if (UVar2 != 0) {
      *(undefined4 *)(param_1 + 8) = 1;
      DVar3 = ImmGetProperty(pHVar4,4);
      *(DWORD *)(param_1 + 0x48) = DVar3;
      goto LAB_1415ebe02;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
LAB_1415ebe02:
  FUN_142855fae(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ebe2e FUN_1415ebe2e body=402 status=ok
// SIG undefined FUN_1415ebe2e(void)

undefined8 * FUN_1415ebe2e(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a668cd0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebfa0) {
    FUN_144b3d300(&DAT_14caebfa0);
    if (DAT_14caebfa0 == -1) {
      local_48 = L"Math";
      local_40 = 4;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"MaterialExpression";
      local_40 = 0x12;
      FUN_1446e940c(local_50,&local_48);
      local_48 = L"Math";
      local_40 = 4;
      FUN_140208c1e(&DAT_14caebf90,local_50,local_4c,&local_48);
      atexit((_func_5014 *)&LAB_14356f3a0);
      _Init_thread_footer(&DAT_14caebfa0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ebfc2 FUN_1415ebfc2 body=402 status=ok
// SIG undefined FUN_1415ebfc2(void)

undefined8 * FUN_1415ebfc2(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6690c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebf88) {
    FUN_144b3d300(&DAT_14caebf88);
    if (DAT_14caebf88 == -1) {
      local_48 = L"Logic";
      local_40 = 5;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"MaterialExpression";
      local_40 = 0x12;
      FUN_1446e940c(local_50,&local_48);
      local_48 = L"Logic";
      local_40 = 5;
      FUN_140208c1e(&DAT_14caebf78,local_50,local_4c,&local_48);
      atexit((_func_5014 *)&LAB_14356f38c);
      _Init_thread_footer(&DAT_14caebf88);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ec156 FUN_1415ec156 body=403 status=ok
// SIG undefined FUN_1415ec156(void)

undefined8 * FUN_1415ec156(undefined8 *param_1)

{
  FUN_145cc3058();
  *param_1 = &PTR_FUN_14abdd2f0;
  param_1[5] = &PTR_FUN_14abdd7e0;
  param_1[6] = &PTR_LAB_14abdd820;
  param_1[0x22] = &PTR_FUN_14abdd870;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = param_1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x1e4) = *(byte *)((longlong)param_1 + 0x1e4) & 0xf0;
  param_1[0x3d] = 0xffffffffffffffff;
  param_1[0x3e] = 0;
  *(byte *)((longlong)param_1 + 0x1fb) = *(byte *)((longlong)param_1 + 0x1fb) & 0xfc;
  param_1[0x40] = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xfc;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 1;
  *(byte *)((longlong)param_1 + 0x234) = *(byte *)((longlong)param_1 + 0x234) & 0xfe;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)((longlong)param_1 + 0x2da) = *(byte *)((longlong)param_1 + 0x2da) & 200;
  *(undefined2 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 1415ec2ea FUN_1415ec2ea body=7772 status=ok
// SIG undefined FUN_1415ec2ea(void)

void FUN_1415ec2ea(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong *plVar21;
  undefined ***pppuVar22;
  undefined8 ****ppppuVar23;
  float *pfVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong *puVar28;
  char cVar29;
  longlong lVar30;
  char cVar31;
  int iVar32;
  float *pfVar33;
  bool bVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auStack_358 [40];
  undefined4 local_330;
  char local_329;
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  ulonglong local_320;
  ulonglong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  ulonglong *local_2e8;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  ulonglong local_2c8;
  longlong local_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong local_290;
  ulonglong local_288;
  ulonglong local_280;
  ulonglong local_278;
  undefined1 local_270 [8];
  longlong *local_268;
  int local_260;
  undefined1 local_25c;
  code *local_258 [2];
  undefined ***local_248;
  undefined **local_238;
  longlong *local_230;
  code *local_218;
  undefined ***local_208;
  undefined **local_1f8;
  longlong *local_1f0;
  undefined1 *local_1d8;
  undefined ***local_1c8;
  undefined **local_1b8;
  longlong *local_1b0;
  float local_190;
  undefined4 uStack_18c;
  longlong *local_180;
  ushort local_178;
  byte local_170;
  undefined4 local_168 [2];
  undefined8 ***local_160 [3];
  ushort local_148;
  byte local_140;
  undefined1 *local_138 [2];
  undefined ***local_128;
  undefined **local_118;
  longlong *local_110;
  char local_f8 [16];
  longlong *local_e8;
  undefined4 local_d0 [2];
  float local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (param_2 == 0) goto LAB_1415ed683;
  uVar20 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x52) = uVar20;
  if ((int)uVar20 < DAT_14c9647dc) {
    lVar30 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
  }
  else {
    lVar30 = 0;
  }
  iVar9 = *(int *)(lVar30 + 0x10);
  if (iVar9 == 0) {
    LOCK();
    iVar9 = DAT_14c964868 + 1;
    UNLOCK();
    iVar13 = DAT_14c964868 + 1;
    bVar34 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar9;
    if (bVar34) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar13);
    }
    lVar27 = 0;
    LOCK();
    iVar9 = *(int *)(lVar30 + 0x10);
    bVar34 = iVar9 == 0;
    if (bVar34) {
      *(int *)(lVar30 + 0x10) = iVar13;
      iVar9 = 0;
    }
    UNLOCK();
    if (bVar34) {
      iVar9 = iVar13;
    }
    *(int *)((longlong)param_1 + 0x294) = iVar9;
    if (iVar9 != 0) goto LAB_1415ec389;
  }
  else {
    *(int *)((longlong)param_1 + 0x294) = iVar9;
LAB_1415ec389:
    uVar20 = *(uint *)(param_1 + 0x52);
    lVar27 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      plVar21 = (longlong *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((plVar21 == (longlong *)0x0) ||
         (((int)plVar21[2] != iVar9 || ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))) {
        lVar27 = 0;
      }
      else {
        lVar27 = *plVar21;
      }
    }
  }
  if (*(char *)(lVar27 + 0x7150) != '\x01') goto LAB_1415ed683;
  if (*(char *)(param_1[1] + 0x3d9) == '\x01') {
    iVar9 = *(int *)(param_2 + 0xc);
    lVar30 = param_1[0x4f];
    lVar27 = (longlong)(int)param_1[0x50];
    if (lVar27 != 0) {
      lVar25 = 0;
      do {
        if (*(int *)(lVar30 + lVar25) == iVar9) goto LAB_1415ed683;
        lVar25 = lVar25 + 4;
      } while (lVar27 * 4 - lVar25 != 0);
    }
    uVar20 = (int)param_1[0x50] + 1;
    *(uint *)(param_1 + 0x50) = uVar20;
    if (*(uint *)((longlong)param_1 + 0x284) < uVar20) {
      FUN_1447808da(param_1 + 0x4f);
      lVar30 = param_1[0x4f];
    }
    *(int *)(lVar30 + lVar27 * 4) = iVar9;
  }
  if ((*(char *)((longlong)param_1 + 0x2e1) == '\0') &&
     (lVar30 = param_1[1], *(longlong *)(lVar30 + 0x34) == 0)) {
    lVar27 = *(longlong *)(lVar30 + 0x48);
    if (lVar27 == 0) {
      uVar14 = FUN_14016979c();
      lVar27 = FUN_14477b664(uVar14);
      *(longlong *)(lVar30 + 0x48) = lVar27;
    }
    if (*(longlong *)(lVar30 + 0x50) == 0) {
      if ((lVar27 != 0) && (*(longlong *)(lVar30 + 0x40) != 0)) {
        plVar21 = *(longlong **)(lVar27 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          *(undefined8 *)(lVar30 + 0x50) = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          lVar27 = FUN_144aff482(uVar14);
          *(longlong *)(lVar30 + 0x50) = lVar27;
          if (lVar27 != 0) goto LAB_1415ec4de;
        }
      }
      (**(code **)(*param_1 + 0x40))(param_1);
    }
  }
LAB_1415ec4de:
  if ((*(char *)((longlong)param_1 + 0x2e2) == '\0') &&
     (lVar30 = param_1[1], *(longlong *)(lVar30 + 0x34) == 0)) {
    lVar27 = *(longlong *)(lVar30 + 0x48);
    if (lVar27 == 0) {
      uVar14 = FUN_14016979c();
      lVar27 = FUN_14477b664(uVar14);
      *(longlong *)(lVar30 + 0x48) = lVar27;
    }
    if (*(longlong *)(lVar30 + 0x50) == 0) {
      if ((lVar27 != 0) && (*(longlong *)(lVar30 + 0x40) != 0)) {
        plVar21 = *(longlong **)(lVar27 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          *(undefined8 *)(lVar30 + 0x50) = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          lVar27 = FUN_144aff482(uVar14);
          *(longlong *)(lVar30 + 0x50) = lVar27;
          if (lVar27 != 0) goto LAB_1415ec617;
        }
      }
      lVar30 = param_1[1];
      if (*(longlong *)(lVar30 + 0xdc) == 0) {
        lVar27 = *(longlong *)(lVar30 + 0xf0);
        if (lVar27 == 0) {
          uVar14 = FUN_14016979c();
          lVar27 = FUN_14477b664(uVar14);
          *(longlong *)(lVar30 + 0xf0) = lVar27;
        }
        if (*(longlong *)(lVar30 + 0xf8) == 0) {
          if ((lVar27 == 0) || (*(longlong *)(lVar30 + 0xe8) == 0)) goto LAB_1415ed683;
          plVar21 = *(longlong **)(lVar27 + 0xb8);
          if ((plVar21 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
            *(undefined8 *)(lVar30 + 0xf8) = 0;
            goto LAB_1415ed683;
          }
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          lVar27 = FUN_144aff482(uVar14);
          *(longlong *)(lVar30 + 0xf8) = lVar27;
          if (lVar27 == 0) goto LAB_1415ed683;
        }
      }
    }
  }
LAB_1415ec617:
  if (*(int *)((longlong)param_1 + 0x28c) == 0) {
LAB_1415edc6f:
    uVar14 = 0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 0x51);
    uVar14 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      puVar26 = (undefined8 *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((puVar26 == (undefined8 *)0x0) ||
         ((*(int *)(puVar26 + 2) != *(int *)((longlong)param_1 + 0x28c) ||
          ((*(uint *)(puVar26 + 1) & 0x10200000) != 0)))) goto LAB_1415edc6f;
      uVar14 = *puVar26;
    }
  }
  fVar36 = *(float *)((longlong)param_1 + 0x2dc);
  if (fVar36 <= 0.0001) {
    lVar30 = param_1[1];
    local_f8[0] = '\0';
    local_d0[0] = 0;
    FUN_1456bb102(local_f8,uVar14);
    pfVar24 = &local_c8;
    FUN_1448729ea(lVar30 + 0x1e0);
    if (local_a8 == 3) {
      fVar36 = local_c8;
      bVar8 = 3;
    }
    else {
      pfVar33 = &local_190;
      FUN_1400b56fe(pfVar33);
      fVar36 = local_190;
      if (local_170 == 0) {
        fVar36 = 1.0;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_178) {
          pfVar33 = (float *)CONCAT44(uStack_18c,local_190);
        }
        (*pcVar4)(pfVar33);
      }
      bVar8 = local_a8;
      if (0x18 < local_178) {
        FUN_1400020a8(CONCAT44(uStack_18c,local_190));
        bVar8 = local_a8;
      }
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar24 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar4)(pfVar24);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
    }
    FUN_1448173f8(local_d0);
    if ((local_f8[0] == '\x03') && (local_e8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
    }
  }
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2cc = -0xfffff30;
  uVar37 = 0x3f800000;
  if (*(char *)((longlong)param_1 + 0x2e3) == '\0') {
    fVar38 = *(float *)(param_1 + 0x5b);
    local_2b0 = 0;
    local_2f0 = 0;
    local_2b8 = 0;
    local_2f8 = 0;
    if (fVar38 <= 0.0001) {
      lVar30 = param_1[1];
      fVar38 = *(float *)(lVar30 + 0x230);
      local_2f8 = *(ulonglong *)(lVar30 + 0x238);
      uVar15 = FUN_14477b664(*(undefined8 *)(lVar30 + 0x240));
      local_2f0 = FUN_14477b664(uVar15);
      local_2b0 = *(ulonglong *)(lVar30 + 0x248);
      local_2a8 = *(undefined8 *)(lVar30 + 0x250);
      uStack_2a0 = *(undefined8 *)(lVar30 + 600);
      local_2b8 = *(ulonglong *)(lVar30 + 0x260);
      if ((local_2b8 != 0) || (local_2cc = -0xfffff30, *(int *)(lVar30 + 0x268) != -0xfffff30)) {
        local_2cc = *(int *)(lVar30 + 0x268);
      }
      uVar37 = *(undefined4 *)(lVar30 + 0x278);
    }
  }
  else {
    local_2b0 = 0;
    local_2f0 = 0;
    local_2b8 = 0;
    local_2f8 = 0;
    fVar38 = 1.0;
  }
  local_310 = param_1[1];
  local_322 = *(undefined1 *)(local_310 + 0x31);
  local_321 = *(undefined1 *)(local_310 + 0x32);
  local_128 = (undefined ***)0x0;
  local_118 = &PTR_LAB_14b975f50;
  local_138[0] = &LAB_14416fe12;
  local_328 = *(undefined1 *)(local_310 + 0x80);
  lVar27 = *(longlong *)(local_310 + 0x5c);
  local_325 = *(undefined1 *)(local_310 + 0x58);
  local_320 = *(ulonglong *)(local_310 + 0x34);
  uVar3 = *(undefined4 *)(local_310 + 0x1d0);
  lVar30 = local_310 + 0x180;
  local_f8[0] = '\0';
  local_d0[0] = 0;
  local_110 = param_1;
  FUN_1456bb102(local_f8,uVar14);
  FUN_1448729ea(lVar30,&local_c8,local_f8);
  local_2d0 = FUN_14005fbd2(&local_c8,1);
  lVar30 = param_1[1];
  local_190 = (float)((uint)local_190 & 0xffffff00);
  local_168[0] = 0;
  FUN_1456bb102(&local_190,uVar14);
  FUN_1448729ea(lVar30 + 0x130,local_160,&local_190);
  local_2d4 = FUN_14005fbd2(local_160,1);
  lVar30 = param_1[1];
  uVar35 = 0;
  if (*(char *)(lVar30 + 0x3d8) == '\x01') {
    uVar35 = FUN_148d48dbc(param_1);
    lVar30 = param_1[1];
  }
  local_323 = *(undefined1 *)(lVar30 + 0x30);
  local_324 = *(undefined1 *)(lVar30 + 0x280);
  local_1c8 = (undefined ***)0x0;
  local_1b8 = &PTR_FUN_14b975f30;
  local_1d8 = &LAB_14416fd16;
  local_208 = (undefined ***)0x0;
  local_1f8 = &PTR_FUN_14b975f10;
  local_218 = FUN_14416fb8a;
  local_327 = *(undefined1 *)(lVar30 + 0x128);
  uVar18 = *(ulonglong *)(lVar30 + 0x104);
  local_248 = (undefined ***)0x0;
  local_238 = &PTR_LAB_14b975ef0;
  local_258[0] = FUN_14416f9ee;
  local_326 = *(undefined1 *)(lVar30 + 0x100);
  local_230 = param_1;
  local_1f0 = param_1;
  local_1b0 = param_1;
  if (*(char *)((longlong)param_1 + 0x2e2) == '\x01') {
    local_268 = (longlong *)0x14b9754a3;
    local_260 = 7;
    local_25c = 0;
    uVar20 = FUN_14001a6c0(&local_268,1);
    uVar19 = (ulonglong)uVar20;
  }
  else {
    uVar19 = *(ulonglong *)(lVar30 + 0xdc);
  }
  lVar25 = local_310;
  uVar6 = local_320;
  local_288 = local_320;
  puVar16 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_2c8 = uVar18;
  local_290 = lVar27;
  local_280 = uVar18;
  local_278 = uVar19;
  if ((int)puVar16[0x44] < DAT_14cbcb678) {
    puVar16 = &DAT_14cbcb678;
    FUN_144b3d300();
    if (DAT_14cbcb678 == -1) {
      local_268 = (longlong *)0x14b9754a3;
      local_260 = 7;
      local_25c = 0;
      uVar20 = FUN_14001a6c0(&local_268,1);
      DAT_14cbcb670 = (ulonglong)uVar20;
      puVar16 = &DAT_14cbcb678;
      _Init_thread_footer();
    }
  }
  puVar2 = (ulonglong *)(lVar30 + 0xe8);
  local_308 = lVar30;
  local_300 = lVar27;
  if (uVar19 == 0) {
    lVar27 = *(longlong *)(lVar30 + 0xf0);
    if (lVar27 == 0) {
      puVar16 = (undefined4 *)FUN_14016979c();
      lVar27 = FUN_14477b664();
      *(longlong *)(lVar30 + 0xf0) = lVar27;
    }
    if (*(longlong *)(lVar30 + 0xf8) != 0) {
      local_2d8 = (undefined4)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
      goto LAB_1415ecb7e;
    }
    uVar10 = 0;
    if (lVar27 == 0) {
      local_2d8 = 0;
    }
    else {
      plVar21 = (longlong *)0x0;
      local_2d8 = 0;
      if (*puVar2 != 0) {
        plVar5 = *(longlong **)(lVar27 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (plVar21 = plVar5, cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          lVar30 = 0;
        }
        else {
          plVar21 = (longlong *)(**(code **)(*plVar5 + 0x110))(plVar5);
          lVar30 = FUN_144aff482(plVar21,puVar2);
        }
        *(longlong *)(local_308 + 0xf8) = lVar30;
        local_2d8 = (undefined4)CONCAT71((int7)((ulonglong)plVar21 >> 8),lVar30 != 0);
        lVar30 = local_308;
        goto LAB_1415ecb7e;
      }
    }
  }
  else {
    if (DAT_14cbcb670 != uVar19) {
      puVar17 = &local_278;
      uVar10 = FUN_1441689f4(puVar17);
      local_2d8 = (undefined4)
                  CONCAT71((int7)((ulonglong)puVar17 >> 8),'\x02' - ((char)uVar10 == '\0'));
      goto LAB_1415ecb98;
    }
    local_2d8 = (undefined4)CONCAT71((int7)((ulonglong)puVar16 >> 8),3);
LAB_1415ecb7e:
    uVar10 = 0;
  }
LAB_1415ecb98:
  local_2e8 = (ulonglong *)(lVar25 + 0x40);
  puVar17 = &local_280;
  local_318 = uVar19;
  uVar11 = FUN_1441689f4();
  if (uVar6 == 0) {
    lVar27 = *(longlong *)(lVar25 + 0x48);
    if (lVar27 == 0) {
      puVar17 = (ulonglong *)FUN_14016979c();
      lVar27 = FUN_14477b664();
      *(longlong *)(lVar25 + 0x48) = lVar27;
    }
    if (*(longlong *)(lVar25 + 0x50) == 0) {
      local_330 = 0;
      if (lVar27 == 0) {
        local_2dc = 0;
      }
      else {
        local_2dc = 0;
        if (*local_2e8 != 0) {
          plVar21 = *(longlong **)(lVar27 + 0xb8);
          if ((plVar21 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
            lVar30 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
            lVar30 = FUN_144aff482(uVar14,local_2e8);
          }
          *(longlong *)(local_310 + 0x50) = lVar30;
          local_2dc = (undefined4)CONCAT71((int7)((ulonglong)local_310 >> 8),lVar30 != 0);
          local_330 = 0;
          lVar30 = local_308;
        }
      }
    }
    else {
      local_2dc = (undefined4)CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
LAB_1415ecc7d:
      local_330 = 0;
    }
  }
  else {
    if (DAT_14cbcb670 == uVar6) {
      local_2dc = (undefined4)CONCAT71((int7)((ulonglong)puVar17 >> 8),3);
      goto LAB_1415ecc7d;
    }
    puVar17 = &local_288;
    local_330 = FUN_1441689f4(puVar17);
    local_2dc = (undefined4)
                CONCAT71((int7)((ulonglong)puVar17 >> 8),'\x02' - ((char)local_330 == '\0'));
  }
  uVar12 = FUN_1441689f4(&local_290);
  *(uint *)(param_2 + 0x714c) =
       *(int *)(param_2 + 0x714c) + 1 + (uint)(*(int *)(param_2 + 0x714c) == -1);
  cVar7 = (char)uVar10;
  cVar31 = (char)uVar11;
  cVar29 = (char)uVar12;
  if (((*(char *)(param_2 + 29000) == '\x01') &&
      ((((char)local_330 == '$' || cVar7 == '$') || cVar31 == '$') || cVar29 == '$')) &&
     (iVar9 = *(int *)(param_2 + 0x7154), *(int *)(param_2 + 0x7154) = iVar9 + 1, iVar9 == 0)) {
    FUN_146629b64(param_2 + 0x70d0);
  }
  local_2c0 = param_2 + 0x70d0;
  lVar27 = FUN_1400e8a68(param_2 + 0x70e8);
  if (cVar7 != '\0') {
    FUN_1461eaa86(lVar27 + 0x4f48,uVar10);
  }
  if (cVar31 != '\0') {
    FUN_1461eaa86(lVar27 + 0x4f48,uVar11);
  }
  if ((char)local_330 != '\0') {
    FUN_1461eaa86(lVar27 + 0x4f48,local_330);
  }
  if (cVar29 != '\0') {
    FUN_1461eaa86(lVar27 + 0x4f48,uVar12);
  }
  local_329 = cVar29;
  puVar17 = (ulonglong *)FUN_145935bce(param_2 + 0x70d8);
  puVar17[0x1b] = param_1[0x51];
  *(undefined4 *)(puVar17 + 0x2a) = *(undefined4 *)(param_2 + 0x714c);
  *puVar17 = local_318;
  *(char *)(puVar17 + 2) = cVar7;
  uVar18 = *puVar2;
  if (puVar17[3] != uVar18) {
    puVar17[5] = 0;
  }
  puVar17[3] = uVar18;
  if (puVar17[4] != *(ulonglong *)(lVar30 + 0xf0)) {
    puVar17[5] = 0;
  }
  uVar14 = FUN_14477b664();
  uVar18 = FUN_14477b664(uVar14);
  puVar17[4] = uVar18;
  puVar17[5] = *(ulonglong *)(lVar30 + 0xf8);
  *(undefined1 *)((longlong)puVar17 + 0x14) = local_326;
  FUN_14662adf0(&local_268,local_258);
  FUN_1458882e6(puVar17 + 0xf,local_270,&local_268);
  if (local_260 == 0) {
LAB_1415ece76:
    if (local_268 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_268 != (longlong *)0x0) {
    (**(code **)*local_268)(local_268,0);
    FUN_1446efa72(&local_268,0,0,0x10);
    local_260 = 0;
    goto LAB_1415ece76;
  }
  local_268 = (longlong *)0x0;
  local_260 = 0;
  FUN_1446efa72(&local_268,0,6,0x10);
  local_260 = 6;
  *local_268 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar27 = DAT_14c758608 + 1;
  lVar30 = DAT_14c758608 + 1;
  if (lVar27 == 0) {
    LOCK();
    UNLOCK();
    lVar27 = DAT_14c758608 + 2;
    lVar30 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar30;
  local_268[2] = lVar27;
  *local_268 = (longlong)&PTR_FUN_149e309d0;
  local_268[4] = (longlong)local_218;
  local_268[6] = 0;
  if (local_218 != (code *)0x0) {
    pppuVar22 = local_208;
    if (local_208 == (undefined ***)0x0) {
      pppuVar22 = &local_1f8;
    }
    (*(code *)**pppuVar22)(pppuVar22,local_268 + 6);
  }
  FUN_1448b6402(puVar17 + 0x12,local_270,&local_268);
  if (local_260 == 0) {
LAB_1415ecf86:
    if (local_268 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_268 != (longlong *)0x0) {
    (**(code **)*local_268)(local_268,0);
    FUN_1446efa72(&local_268,0,0,0x10);
    local_260 = 0;
    goto LAB_1415ecf86;
  }
  local_268 = (longlong *)0x0;
  local_260 = 0;
  FUN_1446efa72(&local_268,0,6,0x10);
  local_260 = 6;
  *local_268 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar27 = DAT_14c758608 + 1;
  lVar30 = DAT_14c758608 + 1;
  if (lVar27 == 0) {
    LOCK();
    UNLOCK();
    lVar27 = DAT_14c758608 + 2;
    lVar30 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar30;
  local_268[2] = lVar27;
  *local_268 = (longlong)&PTR_FUN_149e309d0;
  local_268[4] = (longlong)local_1d8;
  local_268[6] = 0;
  if (local_1d8 != (undefined1 *)0x0) {
    pppuVar22 = local_1c8;
    if (local_1c8 == (undefined ***)0x0) {
      pppuVar22 = &local_1b8;
    }
    (*(code *)**pppuVar22)(pppuVar22,local_268 + 6);
  }
  FUN_1448b6402(puVar17 + 0x15,local_270,&local_268);
  lVar30 = local_308;
  if (local_260 == 0) {
LAB_1415ed08c:
    if (local_268 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_268 != (longlong *)0x0) {
    (**(code **)*local_268)(local_268,0);
    FUN_1446efa72(&local_268,0,0,0x10);
    local_260 = 0;
    goto LAB_1415ed08c;
  }
  puVar2 = puVar17 + 3;
  if ((char)puVar17[2] == '\0') {
    uVar18 = puVar17[4];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[4] = uVar18;
    }
    if (puVar17[5] != 0) goto LAB_1415ed0cd;
    if ((uVar18 != 0) && (*puVar2 != 0)) {
      plVar21 = *(longlong **)(uVar18 + 0xb8);
      if ((plVar21 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
        puVar17[5] = 0;
      }
      else {
        uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
        uVar18 = FUN_144aff482(uVar14,puVar2);
        puVar17[5] = uVar18;
        if (uVar18 != 0) goto LAB_1415ed0cd;
      }
    }
  }
  else {
LAB_1415ed0cd:
    *(char *)((longlong)puVar17 + 0x11) = cVar31;
    uVar18 = *(ulonglong *)(lVar30 + 0x110);
    if (puVar17[6] != uVar18) {
      puVar17[8] = 0;
    }
    puVar17[6] = uVar18;
    if (puVar17[7] != *(ulonglong *)(lVar30 + 0x118)) {
      puVar17[8] = 0;
    }
    uVar14 = FUN_14477b664();
    uVar18 = FUN_14477b664(uVar14);
    puVar17[7] = uVar18;
    puVar17[8] = *(ulonglong *)(lVar30 + 0x120);
    *(undefined1 *)((longlong)puVar17 + 0x15) = local_327;
    uVar18 = puVar17[4];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[4] = uVar18;
    }
    if (puVar17[5] == 0) {
      uVar19 = 0;
      if ((uVar18 != 0) && (*puVar2 != 0)) {
        plVar21 = *(longlong **)(uVar18 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          uVar19 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          uVar19 = FUN_144aff482(uVar14,puVar2);
        }
        puVar17[5] = uVar19;
      }
      if (((local_318 != 0) && (uVar19 == 0)) && ((char)puVar17[2] == '\0')) {
        if (*puVar2 != local_318) {
          puVar17[5] = 0;
        }
        *puVar2 = local_318;
      }
    }
    uVar18 = puVar17[7];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[7] = uVar18;
    }
    puVar28 = puVar17 + 6;
    uVar19 = puVar17[8];
    if (uVar19 == 0) {
      uVar19 = 0;
      if ((uVar18 != 0) && (*puVar28 != 0)) {
        plVar21 = *(longlong **)(uVar18 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          uVar19 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          uVar19 = FUN_144aff482(uVar14,puVar28);
        }
        puVar17[8] = uVar19;
      }
      cVar7 = *(char *)((longlong)puVar17 + 0x11);
      if (cVar7 != '\0' || uVar19 != 0) goto LAB_1415ed24c;
      if (local_2c8 != 0) {
        if (*puVar28 != local_2c8) {
          puVar17[8] = 0;
        }
        *puVar28 = local_2c8;
      }
      uVar19 = 0;
    }
    else {
      cVar7 = *(char *)((longlong)puVar17 + 0x11);
LAB_1415ed24c:
      if ((cVar7 != '\0') && (cVar7 != (char)puVar17[2])) goto LAB_1415ed2a9;
    }
    uVar18 = puVar17[7];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[7] = uVar18;
      uVar19 = puVar17[8];
    }
    if (uVar19 == 0) {
      puVar17[8] = 0;
      if ((uVar18 != 0) && (puVar17[6] != 0)) {
        plVar21 = *(longlong **)(uVar18 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          puVar17[8] = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          uVar18 = FUN_144aff482(uVar14,puVar28);
          puVar17[8] = uVar18;
          if (uVar18 != 0) goto LAB_1415ed2a9;
        }
      }
      uVar18 = puVar17[4];
      if (uVar18 == 0) {
        uVar14 = FUN_14016979c();
        uVar18 = FUN_14477b664(uVar14);
        puVar17[4] = uVar18;
      }
      bVar34 = true;
      if (puVar17[5] == 0) {
        uVar19 = 0;
        if ((uVar18 != 0) && (*puVar2 != 0)) {
          plVar21 = *(longlong **)(uVar18 + 0xb8);
          if ((plVar21 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
            uVar19 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
            uVar19 = FUN_144aff482(uVar14,puVar2);
          }
          puVar17[5] = uVar19;
        }
        bVar34 = uVar19 != 0;
      }
      if ((fVar36 <= 0.0001) && (bVar34)) {
        *(char *)((longlong)puVar17 + 0x11) = (char)puVar17[2];
        if (puVar17[6] != puVar17[3]) {
          puVar17[8] = 0;
        }
        puVar17[6] = puVar17[3];
        if (puVar17[7] != puVar17[4]) {
          puVar17[8] = 0;
        }
        uVar14 = FUN_14477b664();
        uVar18 = FUN_14477b664(uVar14);
        puVar17[7] = uVar18;
        puVar17[8] = puVar17[5];
        *(undefined1 *)((longlong)puVar17 + 0x15) = *(undefined1 *)((longlong)puVar17 + 0x14);
        *(undefined1 *)((longlong)puVar17 + 0x15d) = 0;
      }
    }
  }
LAB_1415ed2a9:
  lVar30 = local_310;
  puVar17[1] = local_320;
  *(char *)((longlong)puVar17 + 0x12) = (char)local_330;
  uVar18 = *local_2e8;
  if (puVar17[9] != uVar18) {
    puVar17[0xb] = 0;
  }
  puVar17[9] = uVar18;
  if (puVar17[10] != *(ulonglong *)(local_310 + 0x48)) {
    puVar17[0xb] = 0;
  }
  puVar2 = puVar17 + 9;
  uVar14 = FUN_14477b664();
  uVar19 = FUN_14477b664(uVar14);
  puVar17[10] = uVar19;
  uVar18 = *(ulonglong *)(lVar30 + 0x50);
  puVar17[0xb] = uVar18;
  *(undefined1 *)((longlong)puVar17 + 0x16) = local_325;
  if (*(char *)((longlong)puVar17 + 0x12) == '\0') {
    if (uVar19 == 0) {
      uVar14 = FUN_14016979c();
      uVar19 = FUN_14477b664(uVar14);
      puVar17[10] = uVar19;
      uVar18 = puVar17[0xb];
    }
    if (uVar18 != 0) goto LAB_1415ed883;
    puVar17[0xb] = 0;
    if ((uVar19 != 0) && (puVar17[9] != 0)) {
      plVar21 = *(longlong **)(uVar19 + 0xb8);
      if ((plVar21 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
        puVar17[0xb] = 0;
      }
      else {
        uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
        uVar18 = FUN_144aff482(uVar14,puVar2);
        puVar17[0xb] = uVar18;
        if (uVar18 != 0) goto LAB_1415ed883;
      }
    }
    *(undefined1 *)((longlong)puVar17 + 0x157) = 1;
  }
  else {
LAB_1415ed883:
    *(char *)((longlong)puVar17 + 0x13) = local_329;
    uVar18 = *(ulonglong *)(lVar30 + 0x68);
    if (puVar17[0xc] != uVar18) {
      puVar17[0xe] = 0;
    }
    puVar17[0xc] = uVar18;
    if (puVar17[0xd] != *(ulonglong *)(lVar30 + 0x70)) {
      puVar17[0xe] = 0;
    }
    uVar14 = FUN_14477b664();
    uVar18 = FUN_14477b664(uVar14);
    puVar17[0xd] = uVar18;
    puVar17[0xe] = *(ulonglong *)(lVar30 + 0x78);
    *(undefined1 *)((longlong)puVar17 + 0x17) = local_328;
    FUN_14662aea2(&local_268,local_138);
    if (((local_260 == 0) || (local_268 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*local_268 + 0x30))(), cVar7 == '\0')) {
      lVar30 = local_300;
      if (local_260 == 0) goto LAB_1415edb0a;
      if (local_268 != (longlong *)0x0) {
        (**(code **)*local_268)(local_268,0);
        FUN_1446efa72(&local_268,0,0,0x10);
        goto LAB_1415edaf7;
      }
    }
    else {
      puVar28 = puVar17 + 0x18;
      if (*(int *)((longlong)puVar17 + 0xd4) < 1) {
        iVar9 = (int)puVar17[0x19];
        iVar13 = (int)puVar17[0x1a] + -1;
        *(int *)(puVar17 + 0x1a) = iVar13;
        if (iVar13 <= iVar9) {
          iVar13 = iVar9;
          if (0 < iVar9) {
            iVar32 = 0;
            do {
              if (((*(int *)(*puVar28 + 8 + (longlong)iVar32 * 0x10) == 0) ||
                  (plVar21 = *(longlong **)(*puVar28 + (longlong)iVar32 * 0x10),
                  plVar21 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar21 + 0x28))(), cVar7 != '\0')) {
                FUN_14005b288(puVar28,iVar32);
                FUN_14005b248(puVar28);
              }
              else {
                iVar32 = iVar32 + 1;
              }
              iVar13 = (int)puVar17[0x19];
            } while (iVar32 < iVar13);
          }
          iVar32 = 2;
          if (2 < iVar13 * 2) {
            iVar32 = iVar13 * 2;
          }
          *(int *)(puVar17 + 0x1a) = iVar32;
          if ((iVar32 < iVar9) && (*(int *)((longlong)puVar17 + 0xcc) != iVar13)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_260 != 0) && (local_268 != (longlong *)0x0)) {
        (**(code **)(*local_268 + 0x38))(local_268,local_270);
      }
      lVar30 = local_300;
      iVar9 = (int)puVar17[0x19];
      *(uint *)(puVar17 + 0x19) = iVar9 + 1U;
      if (*(uint *)((longlong)puVar17 + 0xcc) < iVar9 + 1U) {
        FUN_1447a71f6(puVar28,iVar9);
      }
      uVar18 = *puVar28;
      lVar27 = (longlong)iVar9 * 0x10;
      *(undefined8 *)(uVar18 + lVar27) = 0;
      *(undefined4 *)(uVar18 + 8 + lVar27) = 0;
      *(longlong **)(uVar18 + lVar27) = local_268;
      local_268 = (longlong *)0x0;
      *(int *)(uVar18 + 8 + lVar27) = local_260;
LAB_1415edaf7:
      local_260 = 0;
LAB_1415edb0a:
      if (local_268 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar18 = puVar17[10];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[10] = uVar18;
    }
    if (puVar17[0xb] == 0) {
      uVar19 = 0;
      if ((uVar18 != 0) && (*puVar2 != 0)) {
        plVar21 = *(longlong **)(uVar18 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          uVar19 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          uVar19 = FUN_144aff482(uVar14,puVar2);
        }
        puVar17[0xb] = uVar19;
      }
      if (((local_320 != 0) && (uVar19 == 0)) && (*(char *)((longlong)puVar17 + 0x12) == '\0')) {
        if (*puVar2 != local_320) {
          puVar17[0xb] = 0;
        }
        *puVar2 = local_320;
      }
    }
    uVar18 = puVar17[0xd];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[0xd] = uVar18;
    }
    puVar28 = puVar17 + 0xc;
    uVar19 = puVar17[0xe];
    if (uVar19 == 0) {
      uVar19 = 0;
      if ((uVar18 != 0) && (*puVar28 != 0)) {
        plVar21 = *(longlong **)(uVar18 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          uVar19 = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          uVar19 = FUN_144aff482(uVar14,puVar28);
        }
        puVar17[0xe] = uVar19;
      }
      cVar7 = *(char *)((longlong)puVar17 + 0x13);
      if ((lVar30 == 0 || uVar19 != 0) || cVar7 != '\0') goto LAB_1415edc4f;
      if (*puVar28 != local_320) {
        puVar17[0xe] = 0;
      }
      *puVar28 = local_320;
      uVar19 = 0;
    }
    else {
      cVar7 = *(char *)((longlong)puVar17 + 0x13);
LAB_1415edc4f:
      if ((cVar7 != '\0') && (cVar7 != *(char *)((longlong)puVar17 + 0x12))) goto LAB_1415ed39a;
    }
    uVar18 = puVar17[0xd];
    if (uVar18 == 0) {
      uVar14 = FUN_14016979c();
      uVar18 = FUN_14477b664(uVar14);
      puVar17[0xd] = uVar18;
      uVar19 = puVar17[0xe];
    }
    if (uVar19 == 0) {
      puVar17[0xe] = 0;
      if ((uVar18 != 0) && (puVar17[0xc] != 0)) {
        plVar21 = *(longlong **)(uVar18 + 0xb8);
        if ((plVar21 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
          puVar17[0xe] = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
          uVar18 = FUN_144aff482(uVar14,puVar28);
          puVar17[0xe] = uVar18;
          if (uVar18 != 0) goto LAB_1415ed39a;
        }
      }
      uVar18 = puVar17[10];
      if (uVar18 == 0) {
        uVar14 = FUN_14016979c();
        uVar18 = FUN_14477b664(uVar14);
        puVar17[10] = uVar18;
      }
      uVar19 = puVar17[9];
      if (puVar17[0xb] == 0) {
        if (uVar18 != 0 && uVar19 != 0) {
          plVar21 = *(longlong **)(uVar18 + 0xb8);
          if ((plVar21 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar7 == '\0')) {
            puVar17[0xb] = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar21 + 0x110))(plVar21);
            uVar18 = FUN_144aff482(uVar14,puVar2);
            puVar17[0xb] = uVar18;
            if (uVar18 != 0) {
              uVar19 = *puVar2;
              goto LAB_1415edd3d;
            }
          }
        }
      }
      else {
LAB_1415edd3d:
        *(undefined1 *)((longlong)puVar17 + 0x13) = *(undefined1 *)((longlong)puVar17 + 0x12);
        if (puVar17[0xc] != uVar19) {
          puVar17[0xe] = 0;
        }
        puVar17[0xc] = uVar19;
        if (puVar17[0xd] != puVar17[10]) {
          puVar17[0xe] = 0;
        }
        uVar14 = FUN_14477b664();
        uVar18 = FUN_14477b664(uVar14);
        puVar17[0xd] = uVar18;
        puVar17[0xe] = puVar17[0xb];
        *(undefined1 *)((longlong)puVar17 + 0x17) = *(undefined1 *)((longlong)puVar17 + 0x16);
        *(undefined1 *)((longlong)puVar17 + 0x15e) = 0;
      }
    }
  }
LAB_1415ed39a:
  lVar30 = local_308;
  *(float *)(puVar17 + 0x1d) = fVar36;
  *(float *)(puVar17 + 0x1e) = fVar38;
  if (puVar17[0x1f] != local_2f8) {
    puVar17[0x21] = 0;
  }
  puVar17[0x1f] = local_2f8;
  if (puVar17[0x20] != local_2f0) {
    puVar17[0x21] = 0;
  }
  uVar14 = FUN_14477b664();
  uVar18 = FUN_14477b664(uVar14);
  puVar17[0x20] = uVar18;
  puVar17[0x21] = local_2b0;
  *(undefined4 *)(puVar17 + 0x22) = (undefined4)local_2a8;
  *(undefined4 *)((longlong)puVar17 + 0x114) = local_2a8._4_4_;
  *(undefined4 *)(puVar17 + 0x23) = (undefined4)uStack_2a0;
  *(undefined4 *)((longlong)puVar17 + 0x11c) = uStack_2a0._4_4_;
  if ((puVar17[0x24] != local_2b8) || ((int)puVar17[0x25] != local_2cc)) {
    puVar17[0x24] = local_2b8;
    *(int *)(puVar17 + 0x25) = local_2cc;
    puVar17[0x26] = 0;
  }
  *(undefined4 *)(puVar17 + 0x27) = uVar37;
  *(undefined1 *)((longlong)puVar17 + 0x159) = local_324;
  *(char *)((longlong)puVar17 + 0x14c) = (char)local_2d8;
  *(char *)((longlong)puVar17 + 0x14d) = (char)local_2dc;
  *(undefined1 *)((longlong)puVar17 + 0x15a) = local_323;
  puVar17[0x1c] = *(ulonglong *)(lVar30 + 0x1d4);
  *(undefined4 *)((longlong)puVar17 + 0x144) = uVar35;
  *(char *)((longlong)puVar17 + 0x154) = (char)local_2d4;
  *(char *)((longlong)puVar17 + 0x155) = (char)local_2d0;
  *(undefined4 *)(puVar17 + 0x28) = uVar3;
  *(undefined1 *)((longlong)puVar17 + 0x14e) = local_322;
  *(undefined1 *)((longlong)puVar17 + 0x14f) = local_321;
  if ((*(char *)(param_2 + 0x7151) == '\x01') &&
     (((*(char *)((longlong)puVar17 + 0x12) == 'E' || ((char)puVar17[2] == 'E')) &&
      (cVar7 = FUN_140cd88b6(local_2c0,puVar17,0x45,0), cVar7 != '\0')))) {
    FUN_140cd99cc(extraout_XMM0_Da,puVar17,0);
  }
  uVar37 = *(undefined4 *)(param_2 + 0x714c);
  if (local_258[0] != (code *)0x0) {
    pppuVar22 = local_248;
    if (local_248 == (undefined ***)0x0) {
      pppuVar22 = &local_238;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  if (local_218 != (code *)0x0) {
    pppuVar22 = &local_1f8;
    if (local_208 != (undefined ***)0x0) {
      pppuVar22 = local_208;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  if (local_1d8 != (undefined1 *)0x0) {
    pppuVar22 = &local_1b8;
    if (local_1c8 != (undefined ***)0x0) {
      pppuVar22 = local_1c8;
    }
    (*(code *)(*pppuVar22)[2])(pppuVar22);
  }
  if (local_138[0] != (undefined1 *)0x0) {
    pppuVar22 = local_128;
    if (local_128 == (undefined ***)0x0) {
      pppuVar22 = &local_118;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar37;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_140 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar23 = local_160;
    if (0x18 < local_148) {
      ppppuVar23 = (undefined8 ****)local_160[0];
    }
    (*pcVar4)(ppppuVar23);
  }
  if (0x18 < local_148) {
    FUN_1400020a8(local_160[0]);
  }
  FUN_1448173f8(local_168);
  if ((local_190._0_1_ == '\x03') && (local_180 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_180 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_180 + 0x10))();
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pfVar24 = &local_c8;
    if (0x18 < local_b0) {
      pfVar24 = (float *)CONCAT44(uStack_c4,local_c8);
    }
    (*pcVar4)(pfVar24);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
  }
  FUN_1448173f8(local_d0);
  if ((local_f8[0] == '\x03') && (local_e8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
LAB_1415ed683:
  if ((local_a0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ee148 FUN_1415ee148 body=3142 status=ok
// SIG undefined FUN_1415ee148(void)

void FUN_1415ee148(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint *puVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  uint *local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  do {
    uVar26 = param_2;
    if ((int)uVar26 < 0) {
      bVar7 = false;
    }
    else {
      bVar7 = (int)uVar26 < *(int *)(param_1 + 0x30);
    }
  } while ((uVar26 != 0xffffffff) && (param_2 = 0xffffffff, !bVar7));
  uVar21 = *(uint *)(param_1 + 0x38);
  if (uVar21 == uVar26) goto LAB_1415eea54;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = param_1;
  if ((int)uVar21 < 0) {
    if (uVar21 == 0xffffffff) {
      FUN_143e3d07c(param_1,1);
    }
  }
  else if ((int)uVar21 < *(int *)(param_1 + 0x30)) {
    puVar14 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar21 * 0x68);
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar21 * 0x68) + 0x89) ==
        '\x01') {
      FUN_143e3d07c(param_1,0);
    }
    uVar30 = 0;
    FUN_143e3d440(param_1,puVar14,0);
    puVar27 = (uint *)(param_1 + 0x60);
    iVar18 = *(int *)(param_1 + 0x78);
    if (iVar18 == 0) {
      uVar17 = 1;
      iVar22 = 0;
      iVar16 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar13 = puVar27;
      }
      uVar21 = *puVar13;
      if (uVar21 == 0) {
        iVar22 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar22 = iVar18 + -1;
        }
        uVar30 = 0;
        uVar17 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar17 = uVar30;
        }
        iVar16 = 0;
        do {
          if (uVar17 == uVar30) goto LAB_1415ee38d;
          iVar16 = iVar16 + 0x20;
          uVar21 = puVar13[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar30 = 0;
        iVar16 = 0;
      }
      uVar17 = (ulonglong)(-uVar21 & uVar21);
      uVar29 = uVar17 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar22 = (iVar16 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if (iVar18 <= iVar22) {
        iVar22 = iVar18;
      }
    }
    if (iVar22 != iVar18) {
      uVar21 = 0xffffffff;
      iVar20 = iVar18;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)iVar22 * 0x18) == '\x04') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar22 * 0x18 + 8) = 2;
          iVar20 = *(int *)(param_1 + 0x78);
        }
        uVar21 = uVar21 & ~(uint)uVar17;
        puVar13 = *(uint **)(param_1 + 0x70);
        if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
          puVar13 = puVar27;
        }
        iVar22 = (int)uVar30;
        lVar28 = (longlong)iVar22;
        uVar23 = puVar13[lVar28] & uVar21;
        if (uVar23 == 0) {
          iVar24 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar24 = iVar20 + -1;
          }
          iVar24 = iVar24 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar25 = iVar24;
          if (iVar24 < iVar22) {
            iVar25 = iVar22;
          }
          if (iVar22 < iVar24) {
            lVar32 = 0;
            do {
              uVar23 = puVar13[lVar28 + lVar32 + 1];
              if (uVar23 != 0) {
                uVar30 = (ulonglong)(iVar22 + (int)lVar32 + 1);
                uVar21 = 0xffffffff;
                goto LAB_1415ee330;
              }
              iVar16 = iVar16 + 0x20;
              lVar32 = lVar32 + 1;
            } while (iVar25 - lVar28 != lVar32);
            uVar21 = 0xffffffff;
            iVar22 = iVar25;
          }
          uVar30 = (ulonglong)(iVar22 + 1);
          iVar22 = iVar20;
        }
        else {
LAB_1415ee330:
          uVar17 = (ulonglong)(-uVar23 & uVar23);
          uVar29 = uVar17 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          iVar22 = (iVar16 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar22) {
            iVar22 = iVar20;
          }
        }
        param_1 = local_a0;
      } while (iVar22 != iVar18);
    }
LAB_1415ee38d:
    FUN_1418ac73a(param_1,*puVar14 + 0xa0);
    FUN_143e3cfae(param_1,*puVar14 + 0x78);
    if ((longlong)(int)puVar14[10] != 0) {
      lVar28 = 0;
      do {
        if ((*(int *)(puVar14[9] + 8 + lVar28) != 0) && (*(longlong *)(puVar14[9] + lVar28) != 0)) {
          FUN_140898514(puVar14 + 9,0);
          break;
        }
        lVar28 = lVar28 + 0x10;
      } while ((longlong)(int)puVar14[10] * 0x10 != lVar28);
    }
    plVar2 = local_78;
    local_88 = *puVar14;
    uStack_80 = puVar14[3];
    local_78 = (longlong *)puVar14[4];
    if (local_78 == (longlong *)0x0) {
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar2 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  *(uint *)(param_1 + 0x38) = uVar26;
  if ((int)uVar26 < 0) {
    if (uVar26 == 0xffffffff) {
      FUN_148993052(param_1,&local_88);
    }
  }
  else if ((int)uVar26 < *(int *)(param_1 + 0x30)) {
    lVar28 = *(longlong *)(param_1 + 0x28);
    plVar2 = (longlong *)(lVar28 + (ulonglong)uVar26 * 0x68);
    FUN_143e3cdf0(&local_88);
    lVar28 = *(longlong *)(lVar28 + (ulonglong)uVar26 * 0x68);
    if (*(char *)(lVar28 + 0x88) == '\x01') {
      FUN_143e3d07c(param_1);
      lVar28 = *plVar2;
    }
    plVar5 = (longlong *)(param_1 + 0x50);
    puVar27 = (uint *)(param_1 + 0x60);
    iVar18 = *(int *)(param_1 + 0x78);
    if (iVar18 == 0) {
      uVar17 = 1;
      uVar30 = 0;
      iVar22 = 0;
      iVar16 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar13 = puVar27;
      }
      uVar26 = *puVar13;
      if (uVar26 == 0) {
        iVar22 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar22 = iVar18 + -1;
        }
        uVar30 = 0;
        uVar17 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar17 = uVar30;
        }
        iVar16 = 0;
        do {
          if (uVar17 == uVar30) goto LAB_1415ee5e4;
          iVar16 = iVar16 + 0x20;
          uVar26 = puVar13[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar30 = 0;
        iVar16 = 0;
      }
      uVar17 = (ulonglong)(-uVar26 & uVar26);
      uVar29 = uVar17 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar22 = (iVar16 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if (iVar18 <= iVar22) {
        iVar22 = iVar18;
      }
    }
    if (iVar22 != iVar18) {
      uVar26 = 0xffffffff;
      iVar20 = iVar18;
      do {
        if ((*(char *)(lVar28 + 0x30) != '\x01') ||
           (*(char *)(*plVar5 + 8 + (longlong)iVar22 * 0x18) == '\x01')) {
          *(undefined1 *)(*plVar5 + (longlong)iVar22 * 0x18 + 8) = 2;
          iVar20 = *(int *)(param_1 + 0x78);
        }
        uVar26 = uVar26 & ~(uint)uVar17;
        puVar13 = *(uint **)(param_1 + 0x70);
        if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
          puVar13 = puVar27;
        }
        iVar22 = (int)uVar30;
        lVar32 = (longlong)iVar22;
        uVar21 = puVar13[lVar32] & uVar26;
        if (uVar21 == 0) {
          iVar24 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar24 = iVar20 + -1;
          }
          iVar24 = iVar24 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar25 = iVar24;
          if (iVar24 < iVar22) {
            iVar25 = iVar22;
          }
          if (iVar22 < iVar24) {
            lVar31 = 0;
            do {
              uVar21 = puVar13[lVar32 + lVar31 + 1];
              if (uVar21 != 0) {
                uVar30 = (ulonglong)(iVar22 + (int)lVar31 + 1);
                uVar26 = 0xffffffff;
                goto LAB_1415ee5a1;
              }
              iVar16 = iVar16 + 0x20;
              lVar31 = lVar31 + 1;
            } while (iVar25 - lVar32 != lVar31);
            uVar26 = 0xffffffff;
            iVar22 = iVar25;
          }
          uVar30 = (ulonglong)(iVar22 + 1);
          param_1 = local_a0;
          iVar22 = iVar20;
        }
        else {
LAB_1415ee5a1:
          uVar17 = (ulonglong)(-uVar21 & uVar21);
          uVar29 = uVar17 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          iVar22 = (iVar16 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar22) {
            iVar22 = iVar20;
          }
        }
      } while (iVar22 != iVar18);
    }
LAB_1415ee5e4:
    iVar18 = *(int *)(lVar28 + 0x40);
    if ((longlong)iVar18 != 0) {
      lVar32 = *(longlong *)(lVar28 + 0x38);
      local_90 = lVar32 + 8;
      lVar31 = 0;
      do {
        lVar10 = *(longlong *)(lVar32 + 0x10 + lVar31);
        if (lVar10 == 0) {
          uVar15 = FUN_14110242a();
          lVar10 = FUN_14477b664(uVar15);
          *(longlong *)(lVar32 + 0x10 + lVar31) = lVar10;
        }
        uVar30 = *(ulonglong *)(lVar32 + 0x18 + lVar31);
        if (uVar30 == 0) {
          if ((lVar10 != 0) && (*(longlong *)(lVar32 + 8 + lVar31) != 0)) {
            plVar6 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
              *(undefined8 *)(lVar32 + 0x18 + lVar31) = 0;
            }
            else {
              local_98 = (uint *)(local_90 + lVar31);
              uVar15 = (**(code **)(*plVar6 + 0x110))(plVar6);
              uVar30 = FUN_144aff482(uVar15,local_98);
              *(ulonglong *)(lVar32 + 0x18 + lVar31) = uVar30;
              local_58 = uVar30;
              if (uVar30 != 0) goto LAB_1415ee76d;
            }
          }
        }
        else {
LAB_1415ee76d:
          uVar19 = *(undefined1 *)(lVar32 + lVar31);
          uVar26 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
          local_58 = uVar30;
          puVar11 = (undefined1 *)FUN_1414d7300(plVar5,uVar26 >> 0x10 ^ uVar26,&local_58);
          *puVar11 = uVar19;
        }
        lVar31 = lVar31 + 0x20;
      } while ((longlong)iVar18 * 0x20 != lVar31);
    }
    lVar32 = *(longlong *)(lVar28 + 0x20);
    if (lVar32 == 0) {
      uVar15 = FUN_14110242a();
      lVar32 = FUN_14477b664(uVar15);
      *(longlong *)(lVar28 + 0x20) = lVar32;
    }
    uVar30 = *(ulonglong *)(lVar28 + 0x28);
    if (uVar30 == 0) {
      param_1 = local_a0;
      if ((lVar32 != 0) && (*(longlong *)(lVar28 + 0x18) != 0)) {
        plVar6 = *(longlong **)(lVar32 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
          *(undefined8 *)(lVar28 + 0x28) = 0;
          param_1 = local_a0;
        }
        else {
          uVar15 = (**(code **)(*plVar6 + 0x110))(plVar6);
          uVar30 = FUN_144aff482(uVar15,(longlong *)(lVar28 + 0x18));
          *(ulonglong *)(lVar28 + 0x28) = uVar30;
          param_1 = local_a0;
          local_58 = uVar30;
          if (uVar30 != 0) goto LAB_1415ee7d1;
        }
      }
    }
    else {
LAB_1415ee7d1:
      param_1 = local_a0;
      uVar26 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
      uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
      local_58 = uVar30;
      puVar11 = (undefined1 *)FUN_1414d7300(plVar5,uVar26 >> 0x10 ^ uVar26,&local_58);
      *puVar11 = 1;
    }
    FUN_143e3cfae(param_1,*plVar2 + 0x68);
    FUN_1418ac73a(param_1,*plVar2 + 0x90);
    FUN_143e3d440(param_1);
    if ((longlong)(int)plVar2[10] != 0) {
      lVar28 = 0;
      do {
        if ((*(int *)(plVar2[9] + 8 + lVar28) != 0) && (*(longlong *)(plVar2[9] + lVar28) != 0)) {
          FUN_140898514(plVar2 + 9);
          break;
        }
        lVar28 = lVar28 + 0x10;
      } while ((longlong)(int)plVar2[10] * 0x10 != lVar28);
    }
    uVar30 = local_68;
    if (local_68 != 0) {
      if (uStack_80 == local_68) {
        if (*(ulonglong *)(uStack_80 + 0x20) == local_88 || *(ulonglong *)(uStack_80 + 0x20) == 0) {
          *(undefined8 *)(uStack_80 + 0x20) = uStack_70;
        }
      }
      else if (*(longlong *)(local_68 + 0x20) == 0) {
        *(undefined8 *)(local_68 + 0x20) = uStack_70;
        FUN_1415ee148(local_68);
        FUN_1411886c2(uVar30);
      }
    }
    if ((longlong)(int)plVar2[8] != 0) {
      lVar28 = 0;
      do {
        if ((*(byte *)(*(longlong *)(plVar2[7] + lVar28) + 0x38) & 2) != 0) {
          FUN_1415ee148(param_1,*(undefined4 *)(param_1 + 0x3c));
          FUN_1411886c2(param_1);
          break;
        }
        lVar28 = lVar28 + 0x10;
      } while ((longlong)(int)plVar2[8] * 0x10 != lVar28);
    }
  }
  plVar2 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar28 = *(longlong *)(param_1 + 0x10);
  lVar32 = *(longlong *)(lVar28 + 0x58);
  if (lVar32 == 0) {
    uVar15 = FUN_14110242a();
    lVar32 = FUN_14477b664(uVar15);
    *(longlong *)(lVar28 + 0x58) = lVar32;
  }
  uVar30 = *(ulonglong *)(lVar28 + 0x60);
  if (uVar30 == 0) {
    if ((lVar32 != 0) && (*(longlong *)(lVar28 + 0x50) != 0)) {
      plVar2 = *(longlong **)(lVar32 + 0xb8);
      if ((plVar2 == (longlong *)0x0) || (cVar9 = (**(code **)(*plVar2 + 0x108))(), cVar9 == '\0'))
      {
        *(undefined8 *)(lVar28 + 0x60) = 0;
      }
      else {
        uVar15 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar30 = FUN_144aff482(uVar15,(longlong *)(lVar28 + 0x50));
        *(ulonglong *)(lVar28 + 0x60) = uVar30;
        if (uVar30 != 0) goto LAB_1415ee942;
      }
    }
  }
  else {
LAB_1415ee942:
    iVar18 = *(int *)(param_1 + 0x38);
    uVar26 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
    uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
    local_88 = uVar30;
    pcVar12 = (char *)FUN_1414d7300(param_1 + 0x50,uVar26 >> 0x10 ^ uVar26,&local_88);
    *pcVar12 = (iVar18 == -1) * '\x02';
  }
  local_88 = 0;
  uStack_80 = 0;
  puVar27 = (uint *)(param_1 + 0x60);
  local_58 = 0;
  uStack_50 = 0;
  uVar26 = *(uint *)(param_1 + 0x78);
  uVar30 = (ulonglong)uVar26;
  if (uVar26 == 0) {
    uVar17 = 1;
    uVar29 = 0;
    iVar18 = 0;
    uVar21 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar13 = puVar27;
    }
    uVar21 = *puVar13;
    if (uVar21 == 0) {
      iVar18 = uVar26 + 0x1e;
      if (-1 < (int)(uVar26 - 1)) {
        iVar18 = uVar26 - 1;
      }
      uVar29 = 0;
      uVar17 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar17 = uVar29;
      }
      iVar18 = 0;
      do {
        if (uVar17 == uVar29) goto LAB_1415eea14;
        iVar18 = iVar18 + 0x20;
        uVar21 = puVar13[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar29 = 0;
      iVar18 = 0;
    }
    uVar17 = (ulonglong)(-uVar21 & uVar21);
    uVar4 = uVar17 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar21 = (iVar18 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if ((int)uVar26 <= (int)uVar21) {
      uVar21 = uVar26;
    }
  }
  if (uVar21 != uVar26) {
    uVar23 = 0xffffffff;
    local_98 = puVar27;
    local_90 = uVar30;
    do {
      uVar8 = uStack_50;
      uVar4 = uStack_80;
      lVar28 = *(longlong *)(param_1 + 0x50);
      cVar9 = *(char *)(lVar28 + 8 + (longlong)(int)uVar21 * 0x18);
      iVar22 = (int)uStack_50;
      if (cVar9 == '\0') {
        uVar19 = 3;
LAB_1415eeb0d:
        uVar26 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar26);
        if (uStack_50._4_4_ < uVar26) {
          FUN_1418ad754(&local_58,uVar8 & 0xffffffff);
          puVar27 = local_98;
        }
        puVar14 = &local_58;
LAB_1415eeb2a:
        puVar3 = (undefined8 *)(lVar28 + (longlong)(int)uVar21 * 0x18);
        *(undefined8 *)(*puVar14 + (longlong)iVar22 * 8) = *puVar3;
        *(undefined1 *)(puVar3 + 1) = uVar19;
        uVar26 = *(uint *)(local_a0 + 0x78);
        uVar30 = local_90;
      }
      else {
        if (cVar9 == '\x01') {
          uVar19 = 4;
          goto LAB_1415eeb0d;
        }
        if (cVar9 == '\x02') {
          iVar22 = (int)uStack_80;
          uVar26 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar26);
          uVar19 = 5;
          if (uStack_80._4_4_ < uVar26) {
            FUN_1418ad754(&local_88,uVar4 & 0xffffffff);
            puVar27 = local_98;
          }
          puVar14 = &local_88;
          goto LAB_1415eeb2a;
        }
      }
      uVar23 = uVar23 & ~(uint)uVar17;
      puVar13 = *(uint **)(local_a0 + 0x70);
      if (*(uint **)(local_a0 + 0x70) == (uint *)0x0) {
        puVar13 = puVar27;
      }
      iVar22 = (int)uVar29;
      lVar28 = (longlong)iVar22;
      uVar21 = puVar13[lVar28] & uVar23;
      if (uVar21 == 0) {
        iVar16 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar16 = uVar26 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar20 = iVar16;
        if (iVar16 < iVar22) {
          iVar20 = iVar22;
        }
        if (iVar22 < iVar16) {
          lVar32 = 0;
          do {
            uVar21 = puVar13[lVar28 + lVar32 + 1];
            if (uVar21 != 0) {
              uVar29 = (ulonglong)(iVar22 + (int)lVar32 + 1);
              uVar23 = 0xffffffff;
              goto LAB_1415eebbf;
            }
            iVar18 = iVar18 + 0x20;
            lVar32 = lVar32 + 1;
          } while (iVar20 - lVar28 != lVar32);
          uVar23 = 0xffffffff;
          iVar22 = iVar20;
        }
        uVar29 = (ulonglong)(iVar22 + 1);
        uVar30 = local_90;
        puVar27 = local_98;
        uVar21 = uVar26;
      }
      else {
LAB_1415eebbf:
        uVar17 = (ulonglong)(-uVar21 & uVar21);
        uVar4 = uVar17 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar21 = (iVar18 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar21) {
          uVar21 = uVar26;
        }
      }
      param_1 = local_a0;
    } while (uVar21 != (uint)uVar30);
  }
LAB_1415eea14:
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x40), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_88,&local_58);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_1415eea54:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415eed97 FUN_1415eed97 body=144 status=ok
// SIG undefined FUN_1415eed97(void)

void FUN_1415eed97(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1415eee28 FUN_1415eee28 body=334 status=ok
// SIG undefined FUN_1415eee28(void)

void FUN_1415eee28(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1415eee9a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1415eee9a:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1415eef76 FUN_1415eef76 body=394 status=ok
// SIG undefined FUN_1415eef76(void)

void FUN_1415eef76(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  ushort local_2c;
  ushort local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1 == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x14) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar1 ||
       (plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0)) ||
      (((int)plVar5[2] != *(int *)((longlong)param_1 + 0x14) ||
       (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar6 = *plVar5, lVar6 == 0))))))))
  goto LAB_1415ef06c;
  lVar3 = FUN_1447210f0(lVar6);
  if ((lVar3 == 0) || (lVar3 = FUN_1400f6f32(lVar3), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x68);
  }
  if (*(longlong *)(lVar6 + 0x3b0) == 0) {
LAB_1415ef064:
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_140082f10();
    lVar6 = *(longlong *)(lVar6 + 0x3b0);
    if (lVar6 == 0) goto LAB_1415ef064;
    lVar7 = 0;
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_1415ef064;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar7 = lVar6;
      }
    }
  }
  if (lVar3 == 0) goto LAB_1415ef06c;
  FUN_14042af24(lVar3,&local_2c,lVar7);
  if (((param_2 == '\0') && (-1 < (short)local_2c)) &&
     ((int)(short)local_2c < *(int *)(lVar3 + 0x10))) {
    lVar6 = *(longlong *)(*(longlong *)(lVar3 + 8) + (ulonglong)local_2c * 8);
    if ((lVar6 != 0) && (*(uint *)(lVar6 + 8) == (uint)local_2a)) {
      if (-1 < *(short *)(lVar6 + 4)) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)*(short *)(lVar6 + 2) * 8);
        } while (-1 < *(short *)(lVar6 + 4));
        if (lVar6 == 0) goto LAB_1415ef0ef;
      }
      (**(code **)(*param_1 + 0x28))(param_1,lVar6 + 0x48);
    }
  }
LAB_1415ef0ef:
  FUN_145c2ee12(lVar3,&local_2c);
LAB_1415ef06c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ef101 FUN_1415ef101 body=238 status=ok
// SIG undefined FUN_1415ef101(void)

uint FUN_1415ef101(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar3 = FUN_14011c349();
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0x28) = lVar4;
  }
  lVar6 = *(longlong *)(lVar3 + 0x30);
  if (lVar6 == 0) {
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      return 0xffffffff;
    }
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar1 == '\0')) {
      *(undefined8 *)(lVar3 + 0x30) = 0;
      return 0xffffffff;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x20));
    *(longlong *)(lVar3 + 0x30) = lVar6;
    if (lVar6 == 0) {
      return 0xffffffff;
    }
  }
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    uVar2 = 0;
    do {
      if (*(longlong *)(lVar3 + 0xa0) == *plVar7) {
        return -(uint)((int)plVar7[1] == 0) | uVar2;
      }
      uVar2 = uVar2 + (int)plVar7[1];
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
  return 0xffffffff;
}



// FUNCTION 1415ef1f0 FUN_1415ef1f0 body=823 status=ok
// SIG undefined FUN_1415ef1f0(void)

void FUN_1415ef1f0(undefined1 param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined2 *local_1d0;
  int local_1c8;
  undefined2 *local_1c0;
  int local_1b8;
  undefined1 local_3e;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cadb860) && (FUN_144b3d300(&DAT_14cadb860), DAT_14cadb860 == -1)) {
    cVar1 = FUN_145c83bac();
    if ((cVar1 == '\0') || (cVar1 = FUN_145c8409a(), cVar1 == '\0')) {
      DAT_14cadb85c = '\0';
    }
    else {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14cadb85c = FUN_14054d46e(&DAT_14c846b20,L"AutomigrateUserDataToLowIntegrity");
    }
    _Init_thread_footer(&DAT_14cadb860);
  }
  if ((DAT_14cadb85c == '\x01') && (DAT_14cadb864 == '\0')) {
    DAT_14cadb864 = '\x01';
    uVar2 = FUN_140b7d41a();
    FUN_140056680(&local_1d0,uVar2);
    puVar7 = &DAT_149dfb77a;
    if (local_1c8 != 0) {
      puVar7 = local_1d0;
    }
    puVar9 = &DAT_149dfb77a;
    if (DAT_14c872b10 != 0) {
      puVar9 = DAT_14c872b08;
    }
    FUN_140633042(&local_1c0,puVar9,0,puVar7);
    if (local_1d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    _Str = (wchar_t *)FUN_140d69f9e();
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      if (0 < (int)(uint)sVar3) {
        uVar4 = (ulonglong)((uint)sVar3 & 0x7fffffff);
        puVar7 = local_1c0;
        if (local_1b8 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        lVar8 = 0;
        while( true ) {
          uVar10 = *(ushort *)((longlong)puVar7 + lVar8);
          uVar11 = (ulonglong)uVar10;
          uVar12 = *(ushort *)((longlong)_Str + lVar8);
          if (uVar10 != uVar12) break;
          if (uVar10 == 0) goto LAB_1415ef339;
LAB_1415ef304:
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_1415ef339;
          lVar8 = lVar8 + 2;
        }
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1415ef304;
        }
        if (uVar10 != uVar12) goto LAB_1415ef447;
LAB_1415ef339:
        uVar2 = FUN_146830482();
        uVar5 = FUN_140d69f9e();
        local_208 = (longlong *)CONCAT44(local_208._4_4_,1);
        FUN_140807d8e(&local_1c0,&local_1d0,uVar5,uVar2);
        plVar6 = (longlong *)FUN_14054d1d4();
        puVar7 = local_1d0;
        if (local_1c8 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        cVar1 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar7);
        if (cVar1 != '\0') {
          local_1d8 = 0;
          local_1e0 = 0;
          plVar6 = (longlong *)FUN_14054d1d4();
          puVar7 = &DAT_149dfb77a;
          if (local_1b8 != 0) {
            puVar7 = local_1c0;
          }
          puVar9 = &DAT_149dfb77a;
          if (local_1c8 != 0) {
            puVar9 = local_1d0;
          }
          local_208 = &local_1e0;
          (**(code **)(*plVar6 + 0xd8))(plVar6,puVar9,puVar7,&local_1d8);
          if (local_1e0 < local_1d8) {
            plVar6 = (longlong *)FUN_14054d1d4();
            puVar7 = &DAT_149dfb77a;
            if (local_1c8 != 0) {
              puVar7 = local_1d0;
            }
            puVar9 = &DAT_149dfb77a;
            if (local_1b8 != 0) {
              puVar9 = local_1c0;
            }
            local_1e8 = 0;
            local_1f0 = 0;
            local_200 = 0;
            local_208 = (longlong *)((ulonglong)local_208 & 0xffffffffffffff00);
            local_1f8 = 0;
            (**(code **)(*plVar6 + 0x38))(plVar6,puVar9,puVar7,1);
          }
        }
        if (local_1d0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_1415ef447:
    if (local_1c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140d6a6b4(&local_1c0);
  local_3e = param_1;
  FUN_140d6b9d6(&local_1c0,L"GameUserSettings",&DAT_14c872b08);
  FUN_140d6b5be(&local_1c0);
  if ((local_20 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ef528 FUN_1415ef528 body=113 status=ok
// SIG undefined FUN_1415ef528(void)

int FUN_1415ef528(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        plVar2 = *(longlong **)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,*param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1415ef59a FUN_1415ef59a body=412 status=ok
// SIG undefined FUN_1415ef59a(void)

undefined8 * FUN_1415ef59a(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a667f60;
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
              0x110) < DAT_14caebf58) {
    FUN_144b3d300(&DAT_14caebf58);
    if (DAT_14caebf58 == -1) {
      local_48 = L"Logic";
      local_40 = 5;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"MaterialExpression";
      local_40 = 0x12;
      FUN_1446e940c(local_50,&local_48);
      local_48 = L"Logic";
      local_40 = 5;
      FUN_140208c1e(&DAT_14caebf48,local_50,local_4c,&local_48);
      atexit((_func_5014 *)&LAB_14356f364);
      _Init_thread_footer(&DAT_14caebf58);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ef738 FUN_1415ef738 body=412 status=ok
// SIG undefined FUN_1415ef738(void)

undefined8 * FUN_1415ef738(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6688d0;
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
              0x110) < DAT_14caebf28) {
    FUN_144b3d300(&DAT_14caebf28);
    if (DAT_14caebf28 == -1) {
      local_48 = L"Logic";
      local_40 = 5;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"MaterialExpression";
      local_40 = 0x12;
      FUN_1446e940c(local_50,&local_48);
      local_48 = L"Logic";
      local_40 = 5;
      FUN_140208c1e(&DAT_14caebf18,local_50,local_4c,&local_48);
      atexit((_func_5014 *)&LAB_14356f33c);
      _Init_thread_footer(&DAT_14caebf28);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ef8d6 FUN_1415ef8d6 body=412 status=ok
// SIG undefined FUN_1415ef8d6(void)

undefined8 * FUN_1415ef8d6(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6694f0;
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
              0x110) < DAT_14caebf70) {
    FUN_144b3d300(&DAT_14caebf70);
    if (DAT_14caebf70 == -1) {
      local_48 = L"Logic";
      local_40 = 5;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"MaterialExpression";
      local_40 = 0x12;
      FUN_1446e940c(local_50,&local_48);
      local_48 = L"Logic";
      local_40 = 5;
      FUN_140208c1e(&DAT_14caebf60,local_50,local_4c,&local_48);
      atexit((_func_5014 *)&LAB_14356f378);
      _Init_thread_footer(&DAT_14caebf70);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415efa74 FUN_1415efa74 body=2111 status=ok
// SIG undefined FUN_1415efa74(void)

void FUN_1415efa74(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
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
  undefined1 local_110 [16];
  code *local_100;
  int local_f8;
  longlong local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 *local_90;
  int local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1446e0b6e();
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + 0x30);
  if (lVar11 != 0) {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x28);
    lVar10 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar15 + lVar10));
      lVar10 = lVar10 + 8;
    } while (lVar11 * 8 != lVar10);
  }
  lVar11 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x28))();
  iVar4 = *(int *)(lVar11 + 8);
  if ((longlong)iVar4 != 0) {
    lVar11 = 0;
    do {
      FUN_1400337aa();
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar4 * 8 != lVar11);
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar4 != 0) {
    lVar11 = 0;
    do {
      FUN_1400337aa();
      lVar11 = lVar11 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar11);
  }
  lVar11 = *(longlong *)(param_1 + 0x130);
  iVar4 = *(int *)(lVar11 + 0x30);
  if (0 < iVar4) {
    lVar15 = 0;
    bVar8 = false;
    do {
      uVar17 = (uint)lVar15;
      lVar15 = (longlong)(int)uVar17;
      lVar10 = *(longlong *)(lVar11 + 0x28) + lVar15 * 8;
      lVar5 = 0;
      while (*(longlong *)(lVar10 + lVar5 * 8) != 0) {
        lVar16 = lVar15 + lVar5;
        lVar5 = lVar5 + 1;
        if ((longlong)iVar4 <= lVar16 + 1) {
          if (bVar8) goto LAB_1415f024d;
          goto LAB_1415efb0c;
        }
      }
      iVar14 = (int)lVar5;
      if (~uVar17 + iVar4 != iVar14) {
        iVar13 = (~uVar17 + iVar4) - iVar14;
        if (0 < iVar13) {
          iVar13 = 1;
        }
        memmove((void *)(lVar10 + lVar5 * 8),
                (void *)(*(longlong *)(lVar11 + 0x28) + (longlong)(iVar4 - iVar13) * 8),
                (longlong)iVar13 << 3);
        iVar4 = *(int *)(lVar11 + 0x30);
      }
      lVar15 = lVar15 + lVar5;
      iVar4 = iVar4 + -1;
      *(int *)(lVar11 + 0x30) = iVar4;
      bVar8 = true;
    } while ((int)(uVar17 + iVar14) < iVar4);
LAB_1415f024d:
    FUN_1494db9b6();
  }
LAB_1415efb0c:
  lVar11 = *(longlong *)(param_1 + 0x128);
  iVar4 = *(int *)(lVar11 + 0x30);
  if (0 < iVar4) {
    lVar15 = 0;
    bVar8 = false;
    do {
      lVar5 = *(longlong *)(lVar11 + 0x28);
      uVar17 = (uint)lVar15;
      lVar15 = (longlong)(int)uVar17;
      lVar10 = lVar5 + lVar15 * 8;
      lVar16 = 0;
      while (*(longlong *)(lVar10 + lVar16 * 8) != 0) {
        lVar1 = lVar15 + lVar16;
        lVar16 = lVar16 + 1;
        if ((longlong)iVar4 <= lVar1 + 1) {
          if (bVar8) goto LAB_1415f02a7;
          goto LAB_1415efb1e;
        }
      }
      iVar14 = (int)lVar16;
      if (~uVar17 + iVar4 != iVar14) {
        iVar13 = (~uVar17 + iVar4) - iVar14;
        if (0 < iVar13) {
          iVar13 = 1;
        }
        memmove((void *)(lVar10 + lVar16 * 8),(void *)(lVar5 + (longlong)(iVar4 - iVar13) * 8),
                (longlong)iVar13 << 3);
        iVar4 = *(int *)(lVar11 + 0x30);
      }
      lVar15 = lVar15 + lVar16;
      iVar4 = iVar4 + -1;
      *(int *)(lVar11 + 0x30) = iVar4;
      bVar8 = true;
    } while ((int)(uVar17 + iVar14) < iVar4);
LAB_1415f02a7:
    FUN_1494db86c((longlong *)(lVar11 + 0x28));
  }
LAB_1415efb1e:
  local_a8 = 0;
  uStack_a0 = 0;
  local_1a8 = (wchar_t *)((ulonglong)local_1a8._4_4_ << 0x20);
  FUN_14086ecde(param_1,&local_a8,0,0);
  lVar11 = local_a8;
  lVar15 = (longlong)(int)uStack_a0;
  if (lVar15 != 0) {
    lVar10 = 0;
    do {
      plVar12 = *(longlong **)(lVar11 + lVar10);
      if (plVar12 != (longlong *)0x0) {
        if (DAT_14c949118 == 0) {
          local_100 = FUN_140631fbe;
          lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar5;
          FUN_1446f470e(&local_90,L"Class",1);
          local_178 = &LAB_146891e90;
          local_180 = &LAB_146273097;
          local_190 = L"Engine";
          local_188 = 199;
          local_198 = 0x20;
          local_1a0 = 0x10000000;
          local_1a8 = (wchar_t *)CONCAT44(local_1a8._4_4_,8);
          local_170 = &local_100;
          FUN_14574b4b2(lVar5);
          DAT_14c949118 = lVar5;
          uVar7 = FUN_144a7a812();
          lVar5 = DAT_14c949118;
          uVar6 = FUN_1449e2fb2();
          local_1a8 = L"Class";
          FUN_14574b446(uVar6,lVar5,uVar7,L"/Script/CoreUObject");
        }
        if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
            DAT_14c949118 + 0x30)) {
          uVar7 = FUN_144b00ba4(param_1);
          (**(code **)(*plVar12 + 0x170))(plVar12,0,uVar7,0x34);
        }
      }
      lVar10 = lVar10 + 8;
    } while (lVar15 * 8 != lVar10);
  }
  local_b8 = 0x10ca737593ede1aa;
  uStack_b0 = 0x49b157a04df98a28;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 2) {
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x130) + 0x30);
    if (lVar11 != 0) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x28);
      lVar10 = 0;
      do {
        plVar12 = *(longlong **)(lVar15 + lVar10);
        if (*(longlong *)(param_1 + 0x130) != plVar12[4]) {
          (**(code **)(*plVar12 + 0x170))(plVar12,0,*(longlong *)(param_1 + 0x130),0x34);
        }
        lVar10 = lVar10 + 8;
      } while (lVar11 * 8 != lVar10);
    }
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + 0x30);
    if (lVar11 != 0) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x28);
      lVar10 = 0;
      do {
        plVar12 = *(longlong **)(lVar15 + lVar10);
        if (*(longlong *)(param_1 + 0x128) != plVar12[4]) {
          (**(code **)(*plVar12 + 0x170))(plVar12,0,*(longlong *)(param_1 + 0x128),0x34);
        }
        lVar10 = lVar10 + 8;
      } while (lVar11 * 8 != lVar10);
    }
  }
  local_c8 = 0x10ca737593ede1aa;
  uStack_c0 = 0x49b157a04df98a28;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 5) {
    if (*(int *)(*(longlong *)(param_1 + 0x120) + 0x30) == 0) {
      lVar11 = FUN_145ba40dc();
      plVar12 = *(longlong **)(lVar11 + 0x110);
      if (plVar12 == (longlong *)0x0) {
        FUN_140aa6c08(lVar11);
        plVar12 = *(longlong **)(lVar11 + 0x110);
      }
      (**(code **)(*plVar12 + 0x2a8))(plVar12,&local_d0);
      lVar15 = FUN_1494adbc4(param_1,plVar12,local_d0);
      *(undefined1 *)(lVar15 + 0x48) = 1;
      lVar11 = *(longlong *)(param_1 + 0x120);
      if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar15);
      }
      iVar4 = *(int *)(lVar11 + 0x30);
      *(uint *)(lVar11 + 0x30) = iVar4 + 1U;
      if (*(uint *)(lVar11 + 0x34) < iVar4 + 1U) {
        FUN_1494dba52((longlong *)(lVar11 + 0x28),iVar4);
      }
      *(longlong *)(*(longlong *)(lVar11 + 0x28) + (longlong)iVar4 * 8) = lVar15;
      if ((lVar15 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar15);
      }
      FUN_14282b7b8(param_1);
    }
    FUN_1494ae8b4(param_1);
  }
  local_f0[1] = 0x10ca737593ede1aa;
  local_f0[2] = 0x49b157a04df98a28;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 6) {
    local_f0[0] = DAT_14cc1c6c0;
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + 0x30);
    if (lVar11 != 0) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x28);
      lVar10 = 0;
      do {
        plVar12 = *(longlong **)(lVar15 + lVar10);
        if ((char)plVar12[9] == '\x01') {
          FUN_1400021e4(local_f0,&local_90);
          puVar9 = &DAT_149dfb77a;
          if (local_88 != 0) {
            puVar9 = local_90;
          }
          (**(code **)(*plVar12 + 0x170))(plVar12,puVar9,0,0x34);
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          plVar12[5] = local_f0[0];
        }
        lVar10 = lVar10 + 8;
      } while (lVar11 * 8 != lVar10);
    }
    uVar7 = FUN_145ba6740();
    FUN_1494ac5e0(param_1,&local_100,uVar7);
    pcVar3 = local_100;
    if ((longlong)local_f8 != 0) {
      lVar11 = 0;
      do {
        lVar15 = *(longlong *)(pcVar3 + lVar11);
        if (lVar15 != 0) {
          lVar10 = FUN_145ba6740();
          if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
            local_70 = 0;
            local_68 = 0x400000000;
            lVar10 = (**(code **)(*(longlong *)(lVar15 + 0x108) + 0x10))(lVar15 + 0x108,&local_90);
            cVar2 = *(char *)(lVar10 + 0x48);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            if (cVar2 != '\0') {
              FUN_145715fae(local_110,local_f0);
              FUN_1458d0f32(lVar15,local_110);
            }
          }
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)local_f8 * 8 != lVar11);
    }
    if (local_100 != (code *)0x0) {
      FUN_1400020a8(local_100);
    }
  }
  local_128 = 0x10ca737593ede1aa;
  uStack_120 = 0x49b157a04df98a28;
  FUN_1448a256a(param_1);
  local_138 = 0x10ca737593ede1aa;
  uStack_130 = 0x49b157a04df98a28;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 8) {
    FUN_1494af116(param_1);
  }
  local_148 = 0x10ca737593ede1aa;
  uStack_140 = 0x49b157a04df98a28;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 10) {
    FUN_1494af658(param_1);
  }
  local_158 = 0x10ca737593ede1aa;
  uStack_150 = 0x49b157a04df98a28;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 0xc) {
    FUN_1494af73e(param_1);
  }
  if (*(int *)(param_1 + 0x108) == 0) {
    local_168 = 0x10ca737593ede1aa;
    uStack_160 = 0x49b157a04df98a28;
    iVar4 = FUN_1448a256a(param_1);
    if (iVar4 < 0xc) {
      *(undefined4 *)(param_1 + 0x108) = 2;
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415f02b4 FUN_1415f02b4 body=5650 status=ok
// SIG undefined FUN_1415f02b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415f02b4(longlong *param_1,char param_2,char param_3,char param_4,float param_5)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
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
  double dVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  float local_3c0;
  undefined4 *local_3b8;
  undefined1 *local_3b0;
  wchar_t *local_3a8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  code *local_380;
  float local_36c;
  double local_368;
  undefined8 uStack_360;
  float local_350;
  undefined4 local_34c;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  double local_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_234;
  undefined1 local_22b;
  undefined4 local_208;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  uint local_158;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  longlong local_148;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_36c = param_5;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_1459dcd34(param_1,&local_198);
  if ((*(byte *)((longlong)param_1 + 0x2fc) & 1) != 0) {
    if (DAT_14caf84d0 == (longlong *)0x0) {
      local_390 = local_2d8;
      local_2d8._0_8_ = FUN_1449e2820;
      local_380 = FUN_14081d0ea;
      local_388 = &LAB_145a62952;
      local_398 = &LAB_147c8cd45;
      local_3a0 = &LAB_1461468ae;
      local_3a8 = L"Engine";
      local_3b0 = (undefined1 *)0x0;
      local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,0x10000006);
      local_3c0 = 1.12104e-44;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,0x218);
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    plVar3 = DAT_14caf84d0;
    lVar5 = DAT_14caf84d0[0x22];
    if (lVar5 == 0) {
      (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar5 = plVar3[0x22];
    }
    if (*(float *)(lVar5 + 0x160) <= local_36c) {
      local_36c = *(float *)(lVar5 + 0x160);
    }
  }
  auVar30 = _DAT_1499387d0;
  if (param_4 != '\0') {
    dVar35 = DAT_1499387d0._8_8_;
    dVar14 = (double)DAT_1499387d0;
    if ((((*(byte *)(param_1 + 0x5d) & 0x80) == 0) ||
        (local_36c < *(float *)((longlong)param_1 + 0x2f4) ||
         local_36c == *(float *)((longlong)param_1 + 0x2f4))) || (*(float *)(param_1 + 0x5e) <= 0.0)
       ) {
      auVar24._8_8_ = dStack_190;
      auVar24._0_8_ = local_198;
      local_368 = (double)CONCAT44(local_368._4_4_,(int)param_1[0x5e]);
      auVar24 = divpd(auVar24,_DAT_1499387d0);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = local_188;
      auVar25 = divpd(auVar25,_DAT_1499387d0);
      auVar24 = roundpd(auVar24,auVar24,3);
      auVar25 = roundpd(auVar25,auVar25,3);
      dVar9 = (local_198 - auVar24._0_8_ * dVar14) * 0.008726646259971648;
      dVar10 = (dStack_190 - auVar24._8_8_ * dVar35) * 0.008726646259971648;
      dVar6 = (local_188 - auVar25._0_8_ * dVar14) * 0.008726646259971648;
      dVar13 = (0.0 - auVar25._8_8_ * dVar35) * 0.008726646259971648;
      dVar11 = sin(dVar9);
      dVar7 = sin(dVar10);
      dVar8 = sin(dVar6);
      sin(dVar13);
      dVar9 = cos(dVar9);
      dVar10 = cos(dVar10);
      dVar12 = cos(dVar6);
      cos(dVar13);
      dVar6 = -(dVar11 * dVar10 * dVar12) - dVar9 * dVar7 * dVar8;
      local_178._8_4_ = SUB84(dVar6,0);
      local_178._0_8_ = dVar11 * dVar7 * dVar12 - dVar9 * dVar10 * dVar8;
      local_178._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_168._8_8_ = dVar7 * dVar11 * dVar8 + dVar10 * dVar9 * dVar12;
      local_168._0_8_ = -(dVar10 * dVar11 * dVar8) + dVar7 * dVar9 * dVar12;
      auVar24 = *(undefined1 (*) [16])(param_1 + 0x6a);
      auVar25 = divpd(auVar24,auVar30);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = param_1[0x6c];
      auVar29 = divpd(auVar29,auVar30);
      auVar30 = roundpd(auVar25,auVar25,3);
      auVar25 = roundpd(auVar29,auVar29,3);
      dVar7 = (auVar24._0_8_ - auVar30._0_8_ * dVar14) * 0.008726646259971648;
      dVar8 = (auVar24._8_8_ - auVar30._8_8_ * dVar35) * 0.008726646259971648;
      dVar14 = ((double)param_1[0x6c] - auVar25._0_8_ * dVar14) * 0.008726646259971648;
      dVar35 = (0.0 - auVar25._8_8_ * dVar35) * 0.008726646259971648;
      dVar6 = sin(dVar7);
      dVar13 = sin(dVar8);
      dVar11 = sin(dVar14);
      sin(dVar35);
      dVar7 = cos(dVar7);
      dVar8 = cos(dVar8);
      dVar9 = cos(dVar14);
      cos(dVar35);
      dVar14 = -(dVar6 * dVar8 * dVar9) - dVar7 * dVar13 * dVar11;
      local_1d8._8_4_ = SUB84(dVar14,0);
      local_1d8._0_8_ = dVar6 * dVar13 * dVar9 - dVar7 * dVar8 * dVar11;
      local_1d8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_1c8._8_8_ = dVar13 * dVar6 * dVar11 + dVar8 * dVar7 * dVar9;
      local_1c8._0_8_ = -(dVar8 * dVar6 * dVar11) + dVar13 * dVar7 * dVar9;
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,local_368._0_4_);
      FUN_140aff276(local_2d8,local_1d8,local_178);
      FUN_1448052ee(local_2d8,&local_1b8);
      local_188 = local_1a8;
      local_198 = local_1b8;
      dStack_190 = dStack_1b0;
    }
    else {
      dVar6 = (double)param_1[0x6c];
      dVar13 = (double)param_1[0x6a];
      uVar38 = 0;
      dVar11 = (double)param_1[0x6b];
      uVar41 = SUB84(dVar11,0);
      uVar42 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uVar43 = 0;
      uVar44 = 0;
      auVar23._8_8_ = dStack_190 - dVar11;
      auVar23._0_8_ = local_198 - dVar13;
      auVar24 = divpd(auVar23,_DAT_1499387d0);
      auVar17._0_8_ = (local_188 - dVar6) / 360.0;
      auVar17._8_8_ = 0;
      auVar25 = roundpd(auVar24,auVar24,3);
      auVar24 = roundpd(auVar17,auVar17,3);
      auVar34._0_8_ = (local_188 - dVar6) - auVar24._0_8_ * dVar14;
      auVar34._8_8_ = 0.0 - auVar24._8_8_ * dVar35;
      auVar31._0_8_ = (local_198 - dVar13) - auVar25._0_8_ * dVar14;
      auVar31._8_8_ = (dStack_190 - dVar11) - auVar25._8_8_ * dVar35;
      auVar36._0_8_ = auVar31._0_8_ + dVar14;
      auVar36._8_8_ = auVar31._8_8_ + dVar35;
      auVar33._0_8_ = auVar34._0_8_ + dVar14;
      auVar33._8_8_ = auVar34._8_8_ + dVar35;
      auVar18._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
      auVar18._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
      auVar25 = blendvpd(auVar36,auVar31,auVar18);
      auVar19._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
      auVar19._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
      auVar24 = blendvpd(auVar33,auVar34,auVar19);
      auVar26._0_8_ = auVar25._0_8_ + -360.0;
      auVar26._8_8_ = auVar25._8_8_ + -360.0;
      auVar20._8_8_ = -(ulonglong)(180.0 < auVar25._8_8_);
      auVar20._0_8_ = -(ulonglong)(180.0 < auVar25._0_8_);
      auVar25 = blendvpd(auVar25,auVar26,auVar20);
      if (0.0001 < local_36c) {
        dStack_330 = auVar25._8_8_;
        dVar11 = auVar24._0_8_;
        uStack_320 = auVar24._8_8_;
        local_318 = (double)(1.0 / local_36c);
        local_328 = (double)(~-(ulonglong)(180.0 < dVar11) & (ulonglong)dVar11 |
                            (ulonglong)(dVar11 + -360.0) & -(ulonglong)(180.0 < dVar11)) * local_318
        ;
        local_338 = dStack_330 * local_318;
        local_318 = auVar25._0_8_ * local_318;
        local_348._0_4_ = SUB84(dVar6,0);
        local_348._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_348._8_4_ = 0;
        local_348._12_4_ = 0;
        fVar37 = local_36c;
        dStack_310 = dStack_330;
        do {
          local_350 = *(float *)((longlong)param_1 + 0x2f4);
          if (fVar37 <= *(float *)((longlong)param_1 + 0x2f4)) {
            local_350 = fVar37;
          }
          dVar6 = (double)local_350;
          local_368 = dVar13 + dVar6 * local_318;
          dVar11 = (double)CONCAT44(uVar42,uVar41) + local_338 * dVar6;
          local_308._8_4_ = uVar43;
          local_308._0_8_ = dVar11;
          local_308._12_4_ = uVar44;
          dVar6 = (double)CONCAT44(local_348._4_4_,local_348._0_4_) + local_328 * dVar6;
          local_348._0_8_ = dVar6;
          local_34c = (undefined4)param_1[0x5e];
          auVar21._8_8_ = dVar11;
          auVar21._0_8_ = local_368;
          auVar24 = divpd(auVar21,auVar30);
          auVar27._0_8_ = dVar6 / 360.0;
          auVar27._8_8_ = 0;
          auVar24 = roundpd(auVar24,auVar24,3);
          auVar25 = roundpd(auVar27,auVar27,3);
          dVar13 = (local_368 - auVar24._0_8_ * dVar14) * 0.008726646259971648;
          dVar11 = (dVar11 - auVar24._8_8_ * dVar35) * 0.008726646259971648;
          dVar6 = (dVar6 - auVar25._0_8_ * dVar14) * 0.008726646259971648;
          dVar39 = (0.0 - auVar25._8_8_ * dVar35) * 0.008726646259971648;
          fVar37 = fVar37 - local_350;
          uStack_360 = uVar38;
          dVar7 = sin(dVar13);
          dVar8 = sin(dVar11);
          dVar9 = sin(dVar6);
          sin(dVar39);
          dVar10 = cos(dVar13);
          dVar11 = cos(dVar11);
          dVar12 = cos(dVar6);
          cos(dVar39);
          dVar13 = dVar8 * dVar7 * dVar9 + dVar11 * dVar10 * dVar12;
          dVar6 = -(dVar7 * dVar11 * dVar12) - dVar10 * dVar8 * dVar9;
          local_178._8_4_ = SUB84(dVar6,0);
          local_178._0_8_ = dVar7 * dVar8 * dVar12 - dVar10 * dVar11 * dVar9;
          local_178._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          local_168._8_4_ = SUB84(dVar13,0);
          local_168._0_8_ = -(dVar11 * dVar7 * dVar9) + dVar8 * dVar10 * dVar12;
          local_168._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          auVar24 = *(undefined1 (*) [16])(param_1 + 0x6a);
          auVar25 = divpd(auVar24,auVar30);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = param_1[0x6c];
          auVar29 = divpd(auVar28,auVar30);
          auVar25 = roundpd(auVar25,auVar25,3);
          auVar29 = roundpd(auVar29,auVar29,3);
          dVar6 = (auVar24._0_8_ - auVar25._0_8_ * dVar14) * 0.008726646259971648;
          dVar13 = (auVar24._8_8_ - auVar25._8_8_ * dVar35) * 0.008726646259971648;
          dVar11 = ((double)param_1[0x6c] - auVar29._0_8_ * dVar14) * 0.008726646259971648;
          dVar40 = (0.0 - auVar29._8_8_ * dVar35) * 0.008726646259971648;
          dVar7 = sin(dVar6);
          dVar8 = sin(dVar13);
          dVar9 = sin(dVar11);
          sin(dVar40);
          dVar10 = cos(dVar6);
          dVar12 = cos(dVar13);
          dVar39 = cos(dVar11);
          cos(dVar40);
          uVar38 = uStack_360;
          dVar13 = local_368;
          uVar41 = local_308._0_4_;
          uVar42 = local_308._4_4_;
          uVar43 = local_308._8_4_;
          uVar44 = local_308._12_4_;
          dVar11 = dVar8 * dVar7 * dVar9 + dVar12 * dVar10 * dVar39;
          dVar6 = -(dVar7 * dVar12 * dVar39) - dVar10 * dVar8 * dVar9;
          local_1d8._8_4_ = SUB84(dVar6,0);
          local_1d8._0_8_ = dVar7 * dVar8 * dVar39 - dVar10 * dVar12 * dVar9;
          local_1d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          local_1c8._8_4_ = SUB84(dVar11,0);
          local_1c8._0_8_ = -(dVar12 * dVar7 * dVar9) + dVar8 * dVar10 * dVar39;
          local_1c8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,local_34c);
          FUN_140aff276(local_2d8,local_1d8,local_178);
          FUN_1448052ee(local_2d8,&local_1b8);
          local_188 = local_1a8;
          local_198 = local_1b8;
          dStack_190 = dStack_1b0;
          param_1[0x6c] = (longlong)local_1a8;
          param_1[0x6a] = (longlong)local_1b8;
          param_1[0x6b] = (longlong)dStack_1b0;
        } while (0.0001 < fVar37);
      }
    }
  }
  param_1[0x6c] = (longlong)local_188;
  param_1[0x6a] = (longlong)local_198;
  param_1[0x6b] = (longlong)dStack_190;
  dVar35 = (double)param_1[0x4e] + (double)param_1[0x5b];
  dVar6 = (double)param_1[0x4d] + (double)param_1[0x5a];
  dVar14 = (double)param_1[0x4c] + (double)param_1[0x59];
  local_1c8._0_8_ = dVar35;
  local_1b8 = dVar14;
  dStack_1b0 = dVar6;
  local_1a8 = dVar35;
  local_1d8._0_8_ = dVar14;
  local_1d8._8_8_ = dVar6;
  if (param_3 != '\0') {
    if ((((*(byte *)(param_1 + 0x5d) & 0x80) == 0) ||
        (fVar37 = *(float *)((longlong)param_1 + 0x2f4), local_36c <= fVar37)) ||
       (fVar1 = *(float *)((longlong)param_1 + 0x2ec), fVar1 <= 0.0)) {
      local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x2ec))
      ;
      FUN_140b81d26(local_2d8,param_1 + 100,&local_1b8);
      local_1a8 = local_2c8;
      local_1b8 = (double)local_2d8._0_8_;
      dStack_1b0 = (double)local_2d8._8_8_;
    }
    else {
      local_368 = dVar35 - (double)param_1[0x66];
      dVar13 = (double)param_1[0x65];
      local_348._0_8_ = dVar14 - (double)param_1[100];
      dVar11 = (double)param_1[0x66];
      dVar7 = *(double *)*(undefined1 (*) [16])(param_1 + 100);
      dVar8 = (double)param_1[0x65];
      local_2d8 = *(undefined1 (*) [16])(param_1 + 100);
      local_2c8 = dVar11;
      if (0.0001 < local_36c) {
        dVar9 = (double)(1.0 / local_36c);
        local_368 = local_368 * dVar9;
        local_348._0_8_ = (dVar14 - (double)param_1[100]) * dVar9;
        fVar45 = local_36c;
        do {
          fVar2 = fVar37;
          if (fVar45 <= fVar37) {
            fVar2 = fVar45;
          }
          dVar10 = (double)fVar2;
          dVar11 = dVar11 + local_368 * dVar10;
          dVar8 = dVar8 + (dVar6 - dVar13) * dVar9 * dVar10;
          dVar7 = dVar7 + dVar10 * (double)local_348._0_8_;
          local_2d8._8_8_ = dVar8;
          local_2d8._0_8_ = dVar7;
          fVar45 = fVar45 - fVar2;
          local_3c8 = (undefined8 *)CONCAT44(local_3c8._4_4_,fVar1);
          local_2c8 = dVar11;
          FUN_140b81d26(&local_1b8,param_1 + 100,local_2d8);
          param_1[0x66] = (longlong)local_1a8;
          param_1[100] = (longlong)local_1b8;
          param_1[0x65] = (longlong)dStack_1b0;
        } while (0.0001 < fVar45);
      }
    }
    fVar37 = *(float *)(param_1 + 0x5f);
    if (0.0 < fVar37) {
      dVar7 = local_1a8 - dVar35;
      dVar13 = dStack_1b0 - dVar6;
      dVar11 = local_1b8 - dVar14;
      dVar8 = dVar7 * dVar7 + dVar11 * dVar11 + dVar13 * dVar13;
      if ((double)(fVar37 * fVar37) < dVar8) {
        dVar9 = DAT_14c8464e8;
        dVar10 = DAT_14c8464f0;
        dVar12 = DAT_14c8464e0;
        if ((0.0001 <= fVar37) &&
           (dVar39 = (double)fVar37, dVar9 = dVar13, dVar10 = dVar7, dVar12 = dVar11,
           dVar39 * dVar39 < dVar8)) {
          dVar39 = (1.0 / SQRT(dVar8)) * dVar39;
          dVar9 = dVar13 * dVar39;
          dVar10 = dVar7 * dVar39;
          dVar12 = dVar11 * dVar39;
        }
        local_1b8 = dVar14 + dVar12;
        dStack_1b0 = dVar6 + dVar9;
        local_1a8 = dVar35 + dVar10;
      }
    }
  }
  dVar7 = local_1b8;
  param_1[0x69] = local_1c8._0_8_;
  param_1[0x67] = local_1d8._0_8_;
  param_1[0x68] = local_1d8._8_8_;
  param_1[100] = (longlong)local_1b8;
  param_1[0x65] = (longlong)dStack_1b0;
  param_1[0x66] = (longlong)local_1a8;
  dVar14 = (double)FUN_144719204(local_198);
  dVar35 = (double)FUN_144719204(dStack_190);
  dVar6 = sin(dVar14 * 0.017453292519943295);
  dVar8 = cos(dVar14 * 0.017453292519943295);
  dVar14 = sin(dVar35 * 0.017453292519943295);
  dVar9 = cos(dVar35 * 0.017453292519943295);
  dVar22 = (double)*(float *)(param_1 + 0x55);
  dVar13 = dStack_1b0 - dVar14 * dVar8 * dVar22;
  dVar11 = local_1a8 - dVar6 * dVar22;
  dVar35 = local_198 * 0.01745329238474369;
  dVar6 = dStack_190 * 0.01745329238474369;
  dVar14 = local_188 * 0.01745329238474369;
  dVar10 = sin(dVar35);
  dVar12 = sin(dVar6);
  dVar39 = sin(dVar14);
  sin(0.0);
  dVar40 = cos(dVar35);
  dVar15 = cos(dVar6);
  dVar16 = cos(dVar14);
  cos(0.0);
  dVar14 = (double)param_1[0x58];
  dVar35 = (double)param_1[0x56];
  dVar6 = (double)param_1[0x57];
  local_2a8 = (dVar10 * dVar35 - dVar40 * dVar39 * dVar6) + dVar40 * dVar16 * dVar14 +
              DAT_14c8464f0 * 0.0 + dVar11;
  dVar11 = (dVar7 - dVar9 * dVar8 * dVar22) +
           DAT_14c8464e0 * 0.0 +
           dVar14 * -(dVar10 * dVar16 * dVar15 + dVar12 * dVar39) +
           dVar6 * (dVar10 * dVar39 * dVar15 - dVar12 * dVar16) + dVar35 * dVar40 * dVar15;
  dVar13 = DAT_14c8464e8 * 0.0 +
           dVar14 * (dVar15 * dVar39 - dVar12 * dVar10 * dVar16) +
           dVar6 * (dVar10 * dVar39 * dVar12 + dVar15 * dVar16) + dVar35 * dVar12 * dVar40 + dVar13;
  local_1b8 = dVar11;
  dStack_1b0 = dVar13;
  local_1a8 = local_2a8;
  if ((param_2 == '\0') ||
     ((*(float *)(param_1 + 0x55) == 0.0 && (!NAN(*(float *)(param_1 + 0x55)))))) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    param_1[0x61] = (longlong)dVar11;
    param_1[0x62] = (longlong)dVar13;
    param_1[99] = (longlong)local_2a8;
  }
  else {
    *(undefined1 *)(param_1 + 0x60) = 1;
    lVar5 = param_1[0x15];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cadad58) &&
       (FUN_144b3d300(), auVar30 = local_2d8, DAT_14cadad58 == -1)) {
      local_2d8._8_4_ = 9;
      local_2d8._0_8_ = "SpringArm";
      local_2d8._13_3_ = auVar30._13_3_;
      local_2d8[0xc] = 0;
      uVar4 = FUN_14001a6c0(local_2d8,1);
      DAT_14cadad50 = (ulonglong)uVar4;
      _Init_thread_footer();
    }
    uStack_154 = 0;
    uStack_150 = 0x101;
    local_128 = 0;
    local_120 = 0x800000000;
    local_108 = 0;
    local_100 = 0x400000000;
    local_178._8_8_ = 0;
    local_178._0_8_ = DAT_14cadad50;
    local_158 = local_158 & 0xffffff00;
    if (lVar5 != 0) {
      local_118 = *(undefined4 *)(lVar5 + 0xc);
      local_100 = 0x400000001;
      local_178._8_8_ = *(undefined8 *)(lVar5 + 0x18);
    }
    local_168._7_2_ = 0x101;
    local_168._0_7_ = 0x100;
    local_168._12_4_ = 0;
    memset(local_2d8,0,0x100);
    local_208 = 0xffffffff;
    local_2d8._4_4_ = 0x3f800000;
    local_234 = 0xffffffff;
    lVar5 = param_1[0x16];
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
    uStack_2ec = (undefined4)param_1[0x5c];
    local_3b8 = &local_2f0;
    local_2f0 = 2;
    local_3a8 = (wchar_t *)&DAT_14cad0f10;
    local_3b0 = local_178;
    local_3c0 = (float)(uint)*(byte *)((longlong)param_1 + 0x2e4);
    local_3c8 = &DAT_14c8463d0;
    FUN_14021655c(lVar5,local_2d8,local_1d8,&local_1b8);
    param_1[99] = (longlong)local_1a8;
    param_1[0x61] = (longlong)local_1b8;
    param_1[0x62] = (longlong)dStack_1b0;
    local_3c0 = local_36c;
    local_3c8 = (undefined8 *)(CONCAT71(local_3c8._1_7_,local_22b) & 0xffffffffffffff01);
    (**(code **)(*param_1 + 0x5e8))(param_1,&local_2f0,&local_1b8,&local_2c8);
    dVar11 = (double)CONCAT44(uStack_2ec,local_2f0);
    if ((dVar11 == local_1b8) && (!NAN(dVar11) && !NAN(local_1b8))) {
      if ((local_2e8 == dStack_1b0) && (!NAN(local_2e8) && !NAN(dStack_1b0))) {
        if ((local_2e0 == local_1a8) && (!NAN(local_2e0) && !NAN(local_1a8))) {
          *(undefined1 *)(param_1 + 0x60) = 0;
        }
      }
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_2a8 = local_2e0;
    dVar13 = local_2e8;
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
  auVar30._8_8_ = dStack_190;
  auVar30._0_8_ = local_198;
  auVar30 = divpd(auVar30,_DAT_1499387d0);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = local_188;
  auVar24 = divpd(auVar32,_DAT_1499387d0);
  auVar30 = roundpd(auVar30,auVar30,3);
  auVar24 = roundpd(auVar24,auVar24,3);
  dVar8 = (local_198 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar9 = (dStack_190 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar14 = (local_188 - auVar24._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar12 = (0.0 - auVar24._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar35 = sin(dVar8);
  dVar6 = sin(dVar9);
  dVar7 = sin(dVar14);
  sin(dVar12);
  dVar8 = cos(dVar8);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar14);
  cos(dVar12);
  local_2c8 = -(dVar9 * dVar35 * dVar7) + dVar6 * dVar8 * dVar10;
  dStack_2c0 = dVar6 * dVar35 * dVar7 + dVar9 * dVar8 * dVar10;
  dVar14 = -(dVar35 * dVar9 * dVar10) - dVar8 * dVar6 * dVar7;
  local_2d8._8_4_ = SUB84(dVar14,0);
  local_2d8._0_8_ = dVar35 * dVar6 * dVar10 - dVar8 * dVar9 * dVar7;
  local_2d8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_2b8._8_4_ = SUB84(dVar13,0);
  local_2b8._0_8_ = dVar11;
  local_2b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  uStack_2a0 = 0;
  local_298 = 0x3ff0000000000000;
  uStack_290 = 0x3ff0000000000000;
  local_288 = 0x3ff0000000000000;
  uStack_280 = 0;
  FUN_1449437a2(local_2d8,local_178,param_1 + 0x48);
  param_1[0x6d] = CONCAT44(uStack_154,local_158);
  param_1[0x6e] = CONCAT62(uStack_14e,uStack_150);
  param_1[0x6f] = local_148;
  param_1[0x70] = local_178._0_8_;
  param_1[0x71] = local_178._8_8_;
  param_1[0x72] = local_168._0_8_;
  param_1[0x73] = local_168._8_8_;
  FUN_140058d06(param_1,0,0);
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415f18c8 FUN_1415f18c8 body=693 status=ok
// SIG undefined FUN_1415f18c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1415f18c8(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  undefined4 local_88;
  undefined4 local_80;
  code *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = *param_3;
  bVar2 = param_3[4];
  bVar3 = param_3[0xc];
  bVar4 = param_3[0xd];
  iVar5 = *(int *)(param_3 + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9338) {
    FUN_144b3d300(&DAT_14c9f9338);
    if (DAT_14c9f9338 == -1) {
      FUN_144a96200();
      FUN_146164724();
      local_40 = &DAT_14c9fdd60;
      local_50 = &LAB_14712ac08;
      local_58 = &LAB_14712ac0c;
      local_60 = &LAB_142d68e6a;
      local_68 = &LAB_14176b42a;
      local_70 = FUN_1472050b0;
      local_78 = FUN_147205110;
      local_90 = L"LumenSceneDirectLightingShadowMaskFromLightAttenuationCS";
      local_98 = L"/Engine/Private/Lumen/LumenSceneDirectLightingShadowMask.usf";
      local_48 = 0xe0;
      local_80 = 0x40;
      local_88 = 5;
      FUN_140db5666(&DAT_14c9f9290,0,&DAT_14c9f9228,
                    L"FLumenDirectLightingShadowMaskFromLightAttenuationCS");
      _DAT_14c9f9290 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e6d);
      _Init_thread_footer(&DAT_14c9f9338);
    }
  }
  FUN_1448e935e(param_1,&local_30,&DAT_14c9f9290,
                (uint)bVar2 * 2 + ((uint)bVar3 * 4 + (uint)bVar4 * 8 + iVar5) * 4 | (uint)bVar1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9338) {
    FUN_144b3d300(&DAT_14c9f9338);
    if (DAT_14c9f9338 == -1) {
      FUN_144a96200();
      FUN_146164724();
      local_40 = &DAT_14c9fdd60;
      local_50 = &LAB_14712ac08;
      local_58 = &LAB_14712ac0c;
      local_60 = &LAB_142d68e6a;
      local_68 = &LAB_14176b42a;
      local_70 = FUN_1472050b0;
      local_78 = FUN_147205110;
      local_90 = L"LumenSceneDirectLightingShadowMaskFromLightAttenuationCS";
      local_98 = L"/Engine/Private/Lumen/LumenSceneDirectLightingShadowMask.usf";
      local_48 = 0xe0;
      local_80 = 0x40;
      local_88 = 5;
      FUN_140db5666(&DAT_14c9f9290,0,&DAT_14c9f9228,
                    L"FLumenDirectLightingShadowMaskFromLightAttenuationCS");
      _DAT_14c9f9290 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e6d);
      _Init_thread_footer(&DAT_14c9f9338);
    }
  }
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f1b7e FUN_1415f1b7e body=226 status=ok
// SIG undefined FUN_1415f1b7e(void)

longlong * FUN_1415f1b7e(longlong *param_1)

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
  pcVar13 = FUN_14646188c;
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



// FUNCTION 1415f1c62 FUN_1415f1c62 body=621 status=ok
// SIG undefined FUN_1415f1c62(void)

undefined8 * FUN_1415f1c62(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  void **ppvVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  void *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_1401aee1c();
  if (*(char *)(lVar3 + 0x11c) == '\0') {
    FUN_140056680(&local_58,&DAT_149e35230);
    FUN_146168076(&local_68);
    pvVar2 = local_68;
    ppvVar9 = (void **)(lVar3 + 0x78);
    if (ppvVar9 != &local_68) {
      *(int *)(lVar3 + 0x80) = local_60;
      if (local_60 == 0 && *(int *)(lVar3 + 0x84) == 0) {
        *(undefined4 *)(lVar3 + 0x84) = 0;
      }
      else {
        FUN_1446dd670(ppvVar9,local_60);
        if (local_60 != 0) {
          memcpy(*ppvVar9,pvVar2,(longlong)local_60 * 2);
        }
      }
    }
    local_90 = param_1;
    if (local_50 - 2U < 0x7fffffff) {
      uVar8 = 0;
      do {
        uVar4 = local_50 - 1;
        if (local_50 == 0) {
          uVar4 = 0;
        }
        uVar5 = uVar4;
        if ((int)(uint)uVar8 < (int)uVar4) {
          uVar5 = (uint)uVar8;
        }
        uVar6 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          uVar6 = 0;
        }
        uVar8 = uVar8 + 1;
        uVar10 = (longlong)(int)uVar4;
        if ((longlong)uVar8 < (longlong)(int)uVar4) {
          uVar10 = uVar8;
        }
        if ((longlong)uVar10 < (longlong)uVar6) {
          uVar10 = uVar6;
        }
        puVar7 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar7 = local_58;
        }
        FUN_14006620a(&local_78,puVar7 + uVar6,(int)uVar10 - (int)uVar6);
        puVar7 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar7 = local_78;
        }
        local_98 = 0;
        FUN_140807d8e(ppvVar9,&local_88,puVar7,&DAT_149e01f60);
        if (ppvVar9 == &local_88) {
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*ppvVar9 != (void *)0x0) {
            FUN_1400020a8();
          }
          *(void **)(lVar3 + 0x78) = local_88;
          local_88 = (void *)0x0;
          *(undefined4 *)(lVar3 + 0x80) = local_80;
          *(undefined4 *)(lVar3 + 0x84) = local_7c;
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = local_50 - 1;
        if (local_50 == 0) {
          uVar4 = 0;
        }
      } while ((longlong)uVar8 < (longlong)(int)uVar4);
    }
    *(undefined1 *)(lVar3 + 0x11c) = 1;
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_1 = local_90;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  iVar1 = *(int *)(lVar3 + 0x80);
  pvVar2 = *(void **)(lVar3 + 0x78);
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f1ed0 FUN_1415f1ed0 body=590 status=ok
// SIG undefined FUN_1415f1ed0(void)

undefined8 * FUN_1415f1ed0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined2 **local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar6 = DAT_14c872f58;
  if (DAT_14c872f60 < 2) {
    FUN_145cbe856(&local_38);
    iVar2 = (int)local_30;
    iVar4 = ((int)local_30 == 0) + 7;
    local_28 = local_38;
    local_38 = (undefined2 *)0x0;
    local_20 = (int)local_30;
    iVar3 = local_30._4_4_;
    local_1c = local_30._4_4_;
    local_30 = 0;
    iVar5 = iVar4 + iVar2;
    if (iVar5 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar3 < iVar5) {
      FUN_1446f8c06(&local_28);
    }
    FUN_1400020e8(&local_28,L"Config/",7);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_50 = local_28;
    if (local_20 == 0) {
      local_50 = &DAT_149dfb77a;
    }
    local_40 = 0;
    local_48 = DAT_14c872ce0;
    local_58 = 0;
    local_60 = 0;
    local_68 = (undefined2 **)((ulonglong)local_68 & 0xffffffffffffff00);
    FUN_14626b15c(&DAT_14c872f58,L"SourceControlSettings",0,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar6 = DAT_14c872f58;
    if (DAT_14c872f60 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
  }
  uVar1 = DAT_14c872ce0;
  local_38 = (undefined2 *)((ulonglong)local_38 & 0xffffffffffffff00);
  FUN_140056680(&local_28,puVar6);
  local_68 = &local_28;
  FUN_14052bb08(uVar1,L"SourceControl.SourceControlSettings",L"UseGlobalSettings",&local_38);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_38 == '\0') {
    if (DAT_14c872f70 < 2) {
      FUN_140b7d41a();
      FUN_140056680(&local_28);
      local_50 = local_28;
      if (local_20 == 0) {
        local_50 = &DAT_149dfb77a;
      }
      local_40 = 0;
      local_48 = DAT_14c872ce0;
      local_58 = 0;
      local_60 = 0;
      local_68 = (undefined2 **)((ulonglong)local_68 & 0xffffffffffffff00);
      puVar7 = &DAT_14c872f68;
      FUN_14626b15c(&DAT_14c872f68,L"SourceControlSettings",0,0);
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar7 = &DAT_14c872f68;
    }
  }
  else {
    puVar7 = &DAT_14c872f58;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 1415f2120 FUN_1415f2120 body=265 status=ok
// SIG undefined FUN_1415f2120(void)

undefined8 FUN_1415f2120(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf000100000100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f222a FUN_1415f222a body=265 status=ok
// SIG undefined FUN_1415f222a(void)

undefined8 FUN_1415f222a(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf0e01000c0100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2334 FUN_1415f2334 body=265 status=ok
// SIG undefined FUN_1415f2334(void)

undefined8 FUN_1415f2334(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf0100000c0100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f243e FUN_1415f243e body=265 status=ok
// SIG undefined FUN_1415f243e(void)

undefined8 FUN_1415f243e(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf0100000c0000;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2548 FUN_1415f2548 body=265 status=ok
// SIG undefined FUN_1415f2548(void)

undefined8 FUN_1415f2548(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x7000100000800;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2652 FUN_1415f2652 body=265 status=ok
// SIG undefined FUN_1415f2652(void)

undefined8 FUN_1415f2652(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050100050000;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f275c FUN_1415f275c body=265 status=ok
// SIG undefined FUN_1415f275c(void)

undefined8 FUN_1415f275c(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2866 FUN_1415f2866 body=265 status=ok
// SIG undefined FUN_1415f2866(void)

undefined8 FUN_1415f2866(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf040000040100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2970 FUN_1415f2970 body=265 status=ok
// SIG undefined FUN_1415f2970(void)

undefined8 FUN_1415f2970(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050400;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2a7a FUN_1415f2a7a body=265 status=ok
// SIG undefined FUN_1415f2a7a(void)

undefined8 FUN_1415f2a7a(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000010100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2b84 FUN_1415f2b84 body=265 status=ok
// SIG undefined FUN_1415f2b84(void)

undefined8 FUN_1415f2b84(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf010000010100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2c8e FUN_1415f2c8e body=265 status=ok
// SIG undefined FUN_1415f2c8e(void)

undefined8 FUN_1415f2c8e(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf000100000100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf00010000010000;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2d98 FUN_1415f2d98 body=265 status=ok
// SIG undefined FUN_1415f2d98(void)

undefined8 FUN_1415f2d98(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x7010000000800;
  uStack_40 = 0x100010100000008;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2ea2 FUN_1415f2ea2 body=265 status=ok
// SIG undefined FUN_1415f2ea2(void)

undefined8 FUN_1415f2ea2(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf010100010100;
  uStack_40 = 0x1000f0101000101;
  local_38 = 0x1000f01010001;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f2fac FUN_1415f2fac body=265 status=ok
// SIG undefined FUN_1415f2fac(void)

undefined8 FUN_1415f2fac(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf010100010100;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f30b6 FUN_1415f30b6 body=265 status=ok
// SIG undefined FUN_1415f30b6(void)

undefined8 FUN_1415f30b6(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x10000050400;
  uStack_40 = 0x400000100000504;
  local_38 = 0x504000001000005;
  uStack_30 = 0x10000010000;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f31c0 FUN_1415f31c0 body=265 status=ok
// SIG undefined FUN_1415f31c0(void)

undefined8 FUN_1415f31c0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x7000100000800;
  uStack_40 = 0x100030001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f32ca FUN_1415f32ca body=265 status=ok
// SIG undefined FUN_1415f32ca(void)

undefined8 FUN_1415f32ca(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x7010000050400;
  uStack_40 = 0x1000f0001000001;
  local_38 = 0x1000f00010000;
  uStack_30 = 0x1000f000100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f33d4 FUN_1415f33d4 body=265 status=ok
// SIG undefined FUN_1415f33d4(void)

undefined8 FUN_1415f33d4(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050400;
  uStack_40 = 0x100000100;
  local_38 = 0x101000001000001;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f34de FUN_1415f34de body=265 status=ok
// SIG undefined FUN_1415f34de(void)

undefined8 FUN_1415f34de(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x10000010000;
  uStack_40 = 0xf0500000504;
  local_38 = 0x101000001000001;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f35e8 FUN_1415f35e8 body=265 status=ok
// SIG undefined FUN_1415f35e8(void)

undefined8 FUN_1415f35e8(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050400;
  uStack_40 = 0xf0500000504;
  local_38 = 0x101000001000001;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f36f2 FUN_1415f36f2 body=265 status=ok
// SIG undefined FUN_1415f36f2(void)

undefined8 FUN_1415f36f2(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x10000010000;
  uStack_40 = 0x400000100000100;
  local_38 = 0x101000f05000005;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f37fc FUN_1415f37fc body=265 status=ok
// SIG undefined FUN_1415f37fc(void)

undefined8 FUN_1415f37fc(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050400;
  uStack_40 = 0x400000100000100;
  local_38 = 0x101000f05000005;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3906 FUN_1415f3906 body=265 status=ok
// SIG undefined FUN_1415f3906(void)

undefined8 FUN_1415f3906(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x10000010000;
  uStack_40 = 0x4000f0500000504;
  local_38 = 0x101000f05000005;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3a10 FUN_1415f3a10 body=265 status=ok
// SIG undefined FUN_1415f3a10(void)

undefined8 FUN_1415f3a10(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050400;
  uStack_40 = 0x4000f0500000504;
  local_38 = 0x101000f05000005;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3b1a FUN_1415f3b1a body=265 status=ok
// SIG undefined FUN_1415f3b1a(void)

undefined8 FUN_1415f3b1a(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050100;
  uStack_40 = 0x100000100;
  local_38 = 0x101000001000001;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3c24 FUN_1415f3c24 body=265 status=ok
// SIG undefined FUN_1415f3c24(void)

undefined8 FUN_1415f3c24(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x10000010000;
  uStack_40 = 0x100000100000100;
  local_38 = 0x101000f05000005;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3d2e FUN_1415f3d2e body=265 status=ok
// SIG undefined FUN_1415f3d2e(void)

undefined8 FUN_1415f3d2e(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0xf050000050100;
  uStack_40 = 0x100000100000100;
  local_38 = 0x101000f05000005;
  uStack_30 = 0x1000f010100;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3e38 FUN_1415f3e38 body=265 status=ok
// SIG undefined FUN_1415f3e38(void)

undefined8 FUN_1415f3e38(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x10000010000;
  uStack_40 = 0x100000100;
  local_38 = 0x100000001000001;
  uStack_30 = 0x10000010000;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415f3f42 FUN_1415f3f42 body=265 status=ok
// SIG undefined FUN_1415f3f42(void)

undefined8 FUN_1415f3f42(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [26];
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_4e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_4a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_48 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_48 = 0x7010000010400;
  uStack_40 = 0x100000100;
  local_38 = 0x100000001000001;
  uStack_30 = 0x10000010000;
  local_28 = 0x1000001000f0001;
  uStack_20 = 0x1000001000f00;
  local_18 = 0xf0001000001000f;
  lVar1 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_8e + lVar1) = 0x100;
    *(undefined2 *)((longlong)&uStack_8a + lVar1) = 1;
    *(undefined1 *)((longlong)&local_88 + lVar1) = 0xf;
    lVar1 = lVar1 + 7;
  } while (lVar1 != 0x3e);
  local_50 = 1;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_58 = local_18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,param_1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


