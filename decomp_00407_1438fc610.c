// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438fc610 FUN_1438fc610 body=183 status=ok
// SIG undefined FUN_1438fc610(void)

void FUN_1438fc610(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  uVar4 = param_1[0x16];
  lVar5 = param_1[0x17];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  *(longlong *)(lVar3 + 0x38) = lVar5;
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
  plVar6 = (longlong *)param_1[0x17];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001438fc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1438fc6c7 FUN_1438fc6c7 body=2436 status=ok
// SIG undefined FUN_1438fc6c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438fc6c7(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_7c;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb2d4e0);
  if (cVar1 == '\0') {
    _DAT_14cb2d4e0 = 0;
    uRam000000014cb2d4e8 = 0;
  }
  if (local_78 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_70 = FUN_145e64384;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2d608,&local_78);
  local_70 = FUN_145f0e288;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2d730,&local_78);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb2d740,L"fx.Niagara.AsyncGpuTrace.GlobalSdfEnabled",&DAT_14c7627bc,
                L"If disabled AsyncGpuTrace will not be supported against Global SDF.");
  atexit(FUN_1438f7c68);
  local_70 = FUN_145f5c9ae;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2d868,&local_78);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb2d878,L"fx.Niagara.AsyncGpuTrace.HWRayTraceEnabled",&DAT_14c7627c0,
                L"If disabled AsyncGpuTrace will not be supported against the HW ray tracing scene."
               );
  atexit(FUN_1438f8067);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb2d888,L"fx.Niagara.AsyncGpuTrace.HWRayTrace.Inline",&DAT_14c7627c4,
                L"If disabled AsyncGpuTrace will not be supported against the HW ray tracing scene."
               );
  atexit(FUN_1438f80ac);
  _DAT_14ca98648 = 0;
  DAT_14ca98790 = DAT_14ca98790 | 0x80;
  _DAT_14ca9872c = 0x28;
  local_70 = FUN_145e23a5c;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2d9b0,&local_78);
  local_70 = FUN_14609730a;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2dad8,&local_78);
  local_70 = FUN_146086266;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2dc00,&local_78);
  local_70 = FUN_1460864cc;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2dd28,&local_78);
  local_70 = FUN_145e9b9da;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2de50,&local_78);
  local_70 = FUN_145e4bdae;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2df78,&local_78);
  local_70 = FUN_145e648ee;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e0a0,&local_78);
  local_70 = FUN_145e64e58;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e1c8,&local_78);
  local_70 = FUN_145e653c2;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e2f0,&local_78);
  local_70 = FUN_145e6592c;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e418,&local_78);
  local_70 = FUN_145e65e96;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e540,&local_78);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb2e550,L"fx.Niagara.GpuComputeDebug.ShowNaNInf",&DAT_14c7627c8,
                L"When enabled will show NaNs as flashing colors.");
  atexit(FUN_1438f97f0);
  local_98._0_4_ = 0;
  FUN_141471170(&DAT_14cb2e568,L"fx.Niagara.GpuComputeDebug.FourComponentMode",&DAT_14cb2e560,
                L"Adjust how we visualize four component types\n0 = Visualize RGB (defaut)\n1 = Visualize A\n"
               );
  atexit(FUN_1438f9835);
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  FUN_1415c789c(&DAT_14cb2e578,L"fx.Niagara.GpuComputeDebug.OccludedLineColorScale",&DAT_14c7627cc,
                L"Scalar value to adjust occluded lines, where 0 means transparent and 1 is opaque.  Default is 0.05 or 5%"
               );
  atexit(FUN_1438f987a);
  local_70 = FUN_145f38768;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e6a0,&local_78);
  local_70 = FUN_145e66400;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e7c8,&local_78);
  local_70 = FUN_145edfc2a;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2e8f0,&local_78);
  local_70 = FUN_145e6696a;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2ea18,&local_78);
  FUN_14098d3d2(FUN_1438f98ef,L"/Script/NiagaraShader",L"ENiagaraMipMapGenerationType",
                &DAT_14cb2ea28);
  local_70 = FUN_145f38d5c;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2eb58,&local_78);
  local_70 = FUN_144a93508;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2ec80,&local_78);
  local_70 = FUN_14153dade;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2eda8,&local_78);
  local_70 = FUN_1415d2600;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2eed0,&local_78);
  local_70 = FUN_14156b00c;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2eff8,&local_78);
  local_70 = FUN_1415d2720;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2f120,&local_78);
  local_70 = FUN_14159ac30;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2f248,&local_78);
  local_70 = FUN_1415a0c24;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2f370,&local_78);
  local_70 = FUN_14159e54c;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2f498,&local_78);
  local_70 = FUN_14157dd56;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb2f5c0,&local_78);
  local_90 = &PTR_FUN_14ad47ea0;
  local_88 = 3;
  local_98 = 1;
  FUN_14282b410(L"/Script/NiagaraShader",&PTR_FUN_14ad47f30,1,&PTR_FUN_14ad47f00);
  local_70 = FUN_1415c94e0;
  local_78 = (code *)&DAT_146063940;
  FUN_1412df486(&DAT_14cb2f760,&local_78);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb2f778,L"niagara.CreateShadersOnLoad",&DAT_14cb2f770,
                L"Whether to create Niagara\'s simulation shaders on load, which can reduce hitching, but use more memory.  Otherwise they will be created as needed."
               );
  atexit(FUN_1438fa29c);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb2f788,L"fx.SkipVectorVMBackendOptimizations",&DAT_14c7627d0,
                L"If 1, skip HLSLCC\'s backend optimization passes during VectorVM compilation. \n")
  ;
  atexit(FUN_1438fa2e1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb2f7a0,L"fx.Niagara.Shader.ForceBindEverything",&DAT_14cb2f798,
                L"Forces Niagara to display errors about missing shader bindings.");
  atexit(FUN_1438fa326);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb2f7b0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb2f7b0,4000);
  atexit((_func_5014 *)&LAB_1438fa36b);
  lVar3 = 0x48;
  do {
    *(undefined8 *)(lVar3 + 0x14cb2f7b8) = 0;
    *(undefined4 *)(lVar3 + 0x14cb2f7c0) = 0;
    *(undefined8 *)((longlong)&DAT_14cb2f798 + lVar3) = 0;
    *(undefined8 *)(&DAT_14cb2f7a0 + lVar3) = 0;
    *(undefined8 *)(lVar3 + 0x14cb2f7c4) = 0xffffffff00000080;
    *(undefined4 *)(lVar3 + 0x14cb2f7cc) = 0;
    *(undefined8 *)(lVar3 + 0x14cb2f7d8) = 0;
    *(undefined4 *)(&DAT_14cb2f7e0 + lVar3) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0x30b8);
  atexit(FUN_1438fa379);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb32850,L"niagara.ShowShaderCompilerWarnings",&DAT_14cb32860,
                L"When set to 1, will display all warnings from Niagara shader compiles.");
  atexit(FUN_1438fa65a);
  local_78 = (code *)0x800000014ad484a2;
  local_7c = 0xd;
  uVar2 = FUN_14577453c();
  local_70._0_5_ = CONCAT14(1,uVar2);
  FUN_14646089a(&local_78);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb32878,L"Niagara.WaveIntrinsics",&DAT_14cb32870,&DAT_149dfb77a);
  atexit(FUN_1438fa69f);
  local_70 = FUN_1407fe00a;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb329a0,&local_78);
  local_70 = FUN_14804e55c;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb32ac8,&local_78);
  local_70 = FUN_14804e76e;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb32bf0,&local_78);
  local_90 = &PTR_FUN_14ad49660;
  local_88 = 2;
  local_98 = 5;
  FUN_14282b410(L"/Script/NiagaraShader",0,0,&PTR_FUN_14ad496a0);
  local_68 = 0;
  local_58 = &PTR_LAB_149e01e20;
  local_50 = FUN_1438fbe8e;
  local_78 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb32d18,6,&local_78);
  local_68 = 0;
  local_58 = &PTR_LAB_149e01e20;
  local_50 = FUN_1438fbea8;
  local_78 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb32d88,6,&local_78);
  local_68 = 0;
  local_58 = &PTR_LAB_149e01e20;
  local_50 = FUN_1438fbec2;
  local_78 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb32df8,6,&local_78);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb32e00,L"fx.Niagara.FailIfNotSetSeverity",&DAT_14c7627d4,
                L"The severity of messages emitted by Parameters with Default Mode \"Fail If Not Set\". 3 = Error, 2 = Warning, 1= Log, 0 = Disabled.\n"
               );
  atexit(FUN_1438fa7a2);
  local_70 = FUN_145f77ca4;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb32f28,&local_78);
  local_70 = FUN_145f6fcc8;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb33050,&local_78);
  local_70 = FUN_145f7d1f6;
  local_78 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb33178,&local_78);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438fd04c FUN_1438fd04c body=55 status=ok
// SIG undefined FUN_1438fd04c(void)

void FUN_1438fd04c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35bd8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35bd8 = FUN_14171c317(FUN_1464640f2,uVar1,L"ENiagaraAssetLibraryAssetTypes");
  }
  return;
}



// FUNCTION 1438fd083 FUN_1438fd083 body=55 status=ok
// SIG undefined FUN_1438fd083(void)

void FUN_1438fd083(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35bf0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35bf0 = FUN_14171c317(FUN_146464121,uVar1,L"ENiagaraAssetTagDefinitionImportance");
  }
  return;
}



// FUNCTION 1438fd0ba FUN_1438fd0ba body=55 status=ok
// SIG undefined FUN_1438fd0ba(void)

void FUN_1438fd0ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35c50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35c50 = FUN_14171c317(FUN_1464642e9,uVar1,L"ENiagaraCollisionMode");
  }
  return;
}



// FUNCTION 1438fd0f1 FUN_1438fd0f1 body=55 status=ok
// SIG undefined FUN_1438fd0f1(void)

void FUN_1438fd0f1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35c68 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35c68 = FUN_14171c317(FUN_146464318,uVar1,L"ENiagaraBaseTypes");
  }
  return;
}



// FUNCTION 1438fd128 FUN_1438fd128 body=55 status=ok
// SIG undefined FUN_1438fd128(void)

void FUN_1438fd128(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35c80 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35c80 = FUN_14171c317(FUN_146464347,uVar1,L"ENiagaraGpuBufferFormat");
  }
  return;
}



// FUNCTION 1438fd15f FUN_1438fd15f body=55 status=ok
// SIG undefined FUN_1438fd15f(void)

void FUN_1438fd15f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35c98 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35c98 = FUN_14171c317(FUN_146464378,uVar1,L"ENiagaraGpuSyncMode");
  }
  return;
}



// FUNCTION 1438fd196 FUN_1438fd196 body=55 status=ok
// SIG undefined FUN_1438fd196(void)

void FUN_1438fd196(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35cb0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35cb0 = FUN_14171c317(FUN_1464643a9,uVar1,L"ENiagaraMipMapGeneration");
  }
  return;
}



// FUNCTION 1438fd1cd FUN_1438fd1cd body=55 status=ok
// SIG undefined FUN_1438fd1cd(void)

void FUN_1438fd1cd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35cc8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35cc8 = FUN_14171c317(FUN_1464643d8,uVar1,L"ENiagaraDefaultMode");
  }
  return;
}



// FUNCTION 1438fd204 FUN_1438fd204 body=55 status=ok
// SIG undefined FUN_1438fd204(void)

void FUN_1438fd204(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35ce0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35ce0 = FUN_14171c317(FUN_146464407,uVar1,L"ENiagaraDefaultRendererMotionVectorSetting")
    ;
  }
  return;
}



// FUNCTION 1438fd23b FUN_1438fd23b body=55 status=ok
// SIG undefined FUN_1438fd23b(void)

void FUN_1438fd23b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35cf8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35cf8 = FUN_14171c317(FUN_146464436,uVar1,L"ENiagaraRendererMotionVectorSetting");
  }
  return;
}



// FUNCTION 1438fd272 FUN_1438fd272 body=55 status=ok
// SIG undefined FUN_1438fd272(void)

void FUN_1438fd272(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d10 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d10 = FUN_14171c317(FUN_146464465,uVar1,L"ENiagaraSimTarget");
  }
  return;
}



// FUNCTION 1438fd2a9 FUN_1438fd2a9 body=55 status=ok
// SIG undefined FUN_1438fd2a9(void)

void FUN_1438fd2a9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d28 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d28 = FUN_14171c317(FUN_146464496,uVar1,L"ENiagaraAgeUpdateMode");
  }
  return;
}



// FUNCTION 1438fd2e0 FUN_1438fd2e0 body=55 status=ok
// SIG undefined FUN_1438fd2e0(void)

void FUN_1438fd2e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d40 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d40 = FUN_14171c317(FUN_1464644c7,uVar1,L"ENiagaraStatEvaluationType");
  }
  return;
}



// FUNCTION 1438fd317 FUN_1438fd317 body=55 status=ok
// SIG undefined FUN_1438fd317(void)

void FUN_1438fd317(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d58 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d58 = FUN_14171c317(FUN_1464644f6,uVar1,L"ENiagaraStatDisplayMode");
  }
  return;
}



// FUNCTION 1438fd34e FUN_1438fd34e body=55 status=ok
// SIG undefined FUN_1438fd34e(void)

void FUN_1438fd34e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d70 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d70 = FUN_14171c317(FUN_146464525,uVar1,L"ENiagaraDataSetType");
  }
  return;
}



// FUNCTION 1438fd385 FUN_1438fd385 body=55 status=ok
// SIG undefined FUN_1438fd385(void)

void FUN_1438fd385(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d88 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d88 = FUN_14171c317(FUN_146464554,uVar1,L"ENiagaraInputNodeUsage");
  }
  return;
}



// FUNCTION 1438fd3bc FUN_1438fd3bc body=55 status=ok
// SIG undefined FUN_1438fd3bc(void)

void FUN_1438fd3bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35da0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35da0 = FUN_14171c317(FUN_146464583,uVar1,L"ENiagaraScriptCompileStatus");
  }
  return;
}



// FUNCTION 1438fd3f3 FUN_1438fd3f3 body=55 status=ok
// SIG undefined FUN_1438fd3f3(void)

void FUN_1438fd3f3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f20 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f20 = FUN_14171c317(FUN_146464e09,uVar1,L"ENiagaraScriptUsage");
  }
  return;
}



// FUNCTION 1438fd42a FUN_1438fd42a body=55 status=ok
// SIG undefined FUN_1438fd42a(void)

void FUN_1438fd42a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f38 = FUN_14171c317(FUN_146464e38,uVar1,L"ENiagaraCompileUsageStaticSwitch");
  }
  return;
}



// FUNCTION 1438fd461 FUN_1438fd461 body=55 status=ok
// SIG undefined FUN_1438fd461(void)

void FUN_1438fd461(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f50 = FUN_14171c317(FUN_146464e67,uVar1,L"ENiagaraScriptContextStaticSwitch");
  }
  return;
}



// FUNCTION 1438fd498 FUN_1438fd498 body=55 status=ok
// SIG undefined FUN_1438fd498(void)

void FUN_1438fd498(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f68 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f68 = FUN_14171c317(FUN_146464e96,uVar1,L"ENiagaraScriptGroup");
  }
  return;
}



// FUNCTION 1438fd4cf FUN_1438fd4cf body=55 status=ok
// SIG undefined FUN_1438fd4cf(void)

void FUN_1438fd4cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f80 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f80 = FUN_14171c317(FUN_146464ec5,uVar1,L"ENiagaraBindingSource");
  }
  return;
}



// FUNCTION 1438fd506 FUN_1438fd506 body=55 status=ok
// SIG undefined FUN_1438fd506(void)

void FUN_1438fd506(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35fb0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35fb0 = FUN_14171c317(FUN_146464f85,uVar1,L"ENiagaraRendererSourceDataMode");
  }
  return;
}



// FUNCTION 1438fd53d FUN_1438fd53d body=55 status=ok
// SIG undefined FUN_1438fd53d(void)

void FUN_1438fd53d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36040 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36040 = FUN_14171c317(FUN_146465233,uVar1,L"ENiagaraLegacyTrailWidthMode");
  }
  return;
}



// FUNCTION 1438fd574 FUN_1438fd574 body=57 status=ok
// SIG undefined FUN_1438fd574(void)

void FUN_1438fd574(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36070 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36070 = FUN_14171c317(FUN_1464652f3,uVar1,L"ENiagaraSystemInstanceState");
  }
  return;
}



// FUNCTION 1438fd5ad FUN_1438fd5ad body=55 status=ok
// SIG undefined FUN_1438fd5ad(void)

void FUN_1438fd5ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36070 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36070 = FUN_14171c317(FUN_1464652f3,uVar1,L"ENiagaraSystemInstanceState");
  }
  return;
}



// FUNCTION 1438fd5e4 FUN_1438fd5e4 body=55 status=ok
// SIG undefined FUN_1438fd5e4(void)

void FUN_1438fd5e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36088 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36088 = FUN_14171c317(FUN_146465322,uVar1,L"ENiagaraFunctionDebugState");
  }
  return;
}



// FUNCTION 1438fd61b FUN_1438fd61b body=55 status=ok
// SIG undefined FUN_1438fd61b(void)

void FUN_1438fd61b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb360a0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb360a0 = FUN_14171c317(FUN_146465351,uVar1,L"ENiagaraGpuComputeTickStage");
  }
  return;
}



// FUNCTION 1438fd652 FUN_1438fd652 body=55 status=ok
// SIG undefined FUN_1438fd652(void)

void FUN_1438fd652(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb360b8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb360b8 = FUN_14171c317(FUN_146465380,uVar1,L"ENiagaraConditionalOperator");
  }
  return;
}



// FUNCTION 1438fd689 FUN_1438fd689 body=55 status=ok
// SIG undefined FUN_1438fd689(void)

void FUN_1438fd689(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36128 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36128 = FUN_14171c317(FUN_146465565,uVar1,L"ENCPoolMethod");
  }
  return;
}



// FUNCTION 1438fd8e8 FUN_1438fd8e8 body=484 status=ok
// SIG undefined FUN_1438fd8e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438fd8e8(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad517e0,1,&PTR_FUN_14ad517b0);
  uStack_48 = 2;
  ppuStack_50 = &PTR_FUN_14ad52200;
  local_58 = 2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad52290,1,&PTR_FUN_14ad52240);
  FUN_14098d3d2(FUN_1438fd0ba,L"/Script/Niagara",L"ENiagaraCollisionMode",&DAT_14cb35c48);
  ppuStack_50 = &PTR_FUN_14ad563d0;
  uStack_48 = 0x19;
  local_58 = 0x16;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad566f0);
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cb360c8);
  if (cVar1 == '\0') {
    _DAT_14cb360c8 = 0;
    uRam000000014cb360d0 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad56e70);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad570d0);
  FUN_14098d3d2(FUN_1438fd689,L"/Script/Niagara",L"ENCPoolMethod",&DAT_14cb36120);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad574f0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad5a240,2,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438fdad0 FUN_1438fdad0 body=55 status=ok
// SIG undefined FUN_1438fdad0(void)

void FUN_1438fdad0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36320 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36320 = FUN_14171c317(FUN_146466481,uVar1,L"ENiagraDataChannel_IslandMode");
  }
  return;
}



// FUNCTION 1438fdb07 FUN_1438fdb07 body=55 status=ok
// SIG undefined FUN_1438fdb07(void)

void FUN_1438fdb07(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb363a8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb363a8 = FUN_14171c317(FUN_146466637,uVar1,L"ENiagaraDataChannelAllocationMode");
  }
  return;
}



// FUNCTION 1438fdb3e FUN_1438fdb3e body=55 status=ok
// SIG undefined FUN_1438fdb3e(void)

void FUN_1438fdb3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36408 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36408 = FUN_14171c317(FUN_14646681d,uVar1,L"ENDIDataChannelSpawnMode");
  }
  return;
}



// FUNCTION 1438fdb75 FUN_1438fdb75 body=55 status=ok
// SIG undefined FUN_1438fdb75(void)

void FUN_1438fdb75(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36420 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36420 = FUN_14171c317(FUN_14646684c,uVar1,L"ENDIDataChannelSpawnScaleMode");
  }
  return;
}



// FUNCTION 1438fdbac FUN_1438fdbac body=228 status=ok
// SIG undefined FUN_1438fdbac(void)

longlong FUN_1438fdbac(void)

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
  if (DAT_14cb3a798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7874c;
    local_38 = &LAB_14811919b;
    local_40 = FUN_14646e15f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterface",&DAT_14cb3a798,&DAT_14811919a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3a798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438fdc91 FUN_1438fdc91 body=55 status=ok
// SIG undefined FUN_1438fdc91(void)

void FUN_1438fdc91(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb364f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb364f8 = FUN_14171c317(FUN_146466c23,uVar1,L"ENiagaraSortMode");
  }
  return;
}



// FUNCTION 1438fdcc8 FUN_1438fdcc8 body=55 status=ok
// SIG undefined FUN_1438fdcc8(void)

void FUN_1438fdcc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb365d0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb365d0 = FUN_14171c317(FUN_146466f94,uVar1,L"ENDISkelMesh_GpuMaxInfluences");
  }
  return;
}



// FUNCTION 1438fdcff FUN_1438fdcff body=55 status=ok
// SIG undefined FUN_1438fdcff(void)

void FUN_1438fdcff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb365e8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb365e8 = FUN_14171c317(FUN_146466fc3,uVar1,L"ENDISkelMesh_GpuUniformSamplingFormat");
  }
  return;
}



// FUNCTION 1438fdd36 FUN_1438fdd36 body=55 status=ok
// SIG undefined FUN_1438fdd36(void)

void FUN_1438fdd36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36600 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36600 = FUN_14171c317(FUN_146466ff2,uVar1,L"ENDISkelMesh_AdjacencyTriangleIndexFormat");
  }
  return;
}



// FUNCTION 1438fdd6d FUN_1438fdd6d body=55 status=ok
// SIG undefined FUN_1438fdd6d(void)

void FUN_1438fdd6d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36618 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36618 = FUN_14171c317(FUN_146467021,uVar1,L"ENiagaraDefaultRendererPixelCoverageMode");
  }
  return;
}



// FUNCTION 1438fdda4 FUN_1438fdda4 body=55 status=ok
// SIG undefined FUN_1438fdda4(void)

void FUN_1438fdda4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36630 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36630 = FUN_14171c317(FUN_146467050,uVar1,L"ENiagaraDefaultSortPrecision");
  }
  return;
}



// FUNCTION 1438fdddb FUN_1438fdddb body=55 status=ok
// SIG undefined FUN_1438fdddb(void)

void FUN_1438fdddb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36648 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36648 = FUN_14171c317(FUN_14646707f,uVar1,L"ENiagaraDefaultGpuTranslucentLatency");
  }
  return;
}



// FUNCTION 1438fde12 FUN_1438fde12 body=55 status=ok
// SIG undefined FUN_1438fde12(void)

void FUN_1438fde12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36660 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36660 = FUN_14171c317(FUN_1464670ae,uVar1,L"ENiagaraCompileErrorSeverity");
  }
  return;
}



// FUNCTION 1438fde49 FUN_1438fde49 body=55 status=ok
// SIG undefined FUN_1438fde49(void)

void FUN_1438fde49(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36678 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36678 = FUN_14171c317(FUN_1464670dd,uVar1,L"ENDICollisionQuery_AsyncGpuTraceProvider");
  }
  return;
}



// FUNCTION 1438fde80 FUN_1438fde80 body=55 status=ok
// SIG undefined FUN_1438fde80(void)

void FUN_1438fde80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36690 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36690 = FUN_14171c317(FUN_14646710c,uVar1,L"ENiagaraStripScriptByteCodeOption");
  }
  return;
}



// FUNCTION 1438fdeb7 FUN_1438fdeb7 body=55 status=ok
// SIG undefined FUN_1438fdeb7(void)

void FUN_1438fdeb7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36768 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36768 = FUN_14171c317(FUN_1464674d3,uVar1,L"ENiagaraStatelessFeatureMask");
  }
  return;
}



// FUNCTION 1438fdeee FUN_1438fdeee body=55 status=ok
// SIG undefined FUN_1438fdeee(void)

void FUN_1438fdeee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36780 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36780 = FUN_14171c317(FUN_146467502,uVar1,L"ENiagaraDistributionMode");
  }
  return;
}



// FUNCTION 1438fdf34 FUN_1438fdf34 body=1 status=ok
// SIG undefined FUN_1438fdf34(void)

void FUN_1438fdf34(void)

{
  return;
}



// FUNCTION 1438fe12e FUN_1438fe12e body=1038 status=ok
// SIG undefined FUN_1438fe12e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438fe12e(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad5e780,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad5f000,1,&PTR_FUN_14ad5ef80);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad5f410,2,0);
  ppuStack_60 = &PTR_FUN_14ad600c0;
  local_58 = 1;
  local_68 = 2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad60130,2,&PTR_FUN_14ad600e0);
  FUN_1400b22c2(local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_50,&DAT_14cb36390);
  if (cVar1 == '\0') {
    _DAT_14cb36390 = 0;
    uRam000000014cb36398 = 0;
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ad60990;
  local_68 = 3;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad609b0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14ad61200;
  local_68 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad61240,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad62500,2,&PTR_FUN_14ad62480);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad62b10);
  FUN_14098d3d2(FUN_1438fdc91,L"/Script/Niagara",L"ENiagaraSortMode",&DAT_14cb364f0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad62f40,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad62fe0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad63220);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad635c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad63930,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad63d60);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad64120,1,0);
  ppuStack_60 = &PTR_FUN_14ad65970;
  local_68 = 0;
  local_58 = 9;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad65a90,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad65e30);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad661b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad66760,1,&PTR_FUN_14ad66730);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad66a10);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad66c90);
  FUN_14098d3d2(FUN_1438fdeb7,L"/Script/Niagara",L"ENiagaraStatelessFeatureMask",&DAT_14cb36760);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14ad67c30;
  local_68 = 0xb;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad67c50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438fe540 FUN_1438fe540 body=55 status=ok
// SIG undefined FUN_1438fe540(void)

void FUN_1438fe540(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36930 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36930 = FUN_14171c317(FUN_1464681fb,uVar1,L"ENSM_VelocityType");
  }
  return;
}



// FUNCTION 1438fe577 FUN_1438fe577 body=55 status=ok
// SIG undefined FUN_1438fe577(void)

void FUN_1438fe577(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36990 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36990 = FUN_14171c317(FUN_1464682db,uVar1,L"ENSM_NoiseMode");
  }
  return;
}



// FUNCTION 1438fe5ae FUN_1438fe5ae body=55 status=ok
// SIG undefined FUN_1438fe5ae(void)

void FUN_1438fe5ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36a38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36a38 = FUN_14171c317(FUN_1464684cf,uVar1,L"ENSMInitialMeshOrientationMode");
  }
  return;
}



// FUNCTION 1438fe5e5 FUN_1438fe5e5 body=55 status=ok
// SIG undefined FUN_1438fe5e5(void)

void FUN_1438fe5e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36b40 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36b40 = FUN_14171c317(FUN_1464687d1,uVar1,L"ENSM_ShapePrimitive");
  }
  return;
}



// FUNCTION 1438fe61c FUN_1438fe61c body=55 status=ok
// SIG undefined FUN_1438fe61c(void)

void FUN_1438fe61c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36bb8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36bb8 = FUN_14171c317(FUN_146468932,uVar1,L"ENSMSubUVAnimation_Mode");
  }
  return;
}



// FUNCTION 1438fe653 FUN_1438fe653 body=55 status=ok
// SIG undefined FUN_1438fe653(void)

void FUN_1438fe653(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36be8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36be8 = FUN_14171c317(FUN_1464689de,uVar1,L"ENiagaraStatelessSpawnInfoType");
  }
  return;
}



// FUNCTION 1438fe68a FUN_1438fe68a body=55 status=ok
// SIG undefined FUN_1438fe68a(void)

void FUN_1438fe68a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c18 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c18 = FUN_14171c317(FUN_146468a76,uVar1,L"ENiagaraSystemInactiveResponse");
  }
  return;
}



// FUNCTION 1438fe6c1 FUN_1438fe6c1 body=55 status=ok
// SIG undefined FUN_1438fe6c1(void)

void FUN_1438fe6c1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c30 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c30 = FUN_14171c317(FUN_146468aa5,uVar1,L"ENiagaraEmitterInactiveResponse");
  }
  return;
}



// FUNCTION 1438fe6f8 FUN_1438fe6f8 body=55 status=ok
// SIG undefined FUN_1438fe6f8(void)

void FUN_1438fe6f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c48 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c48 = FUN_14171c317(FUN_146468ad4,uVar1,L"ENiagaraLoopBehavior");
  }
  return;
}



// FUNCTION 1438fe72f FUN_1438fe72f body=55 status=ok
// SIG undefined FUN_1438fe72f(void)

void FUN_1438fe72f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c60 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c60 = FUN_14171c317(FUN_146468b03,uVar1,L"ENiagaraLoopDurationMode");
  }
  return;
}



// FUNCTION 1438fe766 FUN_1438fe766 body=55 status=ok
// SIG undefined FUN_1438fe766(void)

void FUN_1438fe766(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36ca8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36ca8 = FUN_14171c317(FUN_146468c30,uVar1,L"ENiagaraTickBehavior");
  }
  return;
}



// FUNCTION 1438fe79d FUN_1438fe79d body=55 status=ok
// SIG undefined FUN_1438fe79d(void)

void FUN_1438fe79d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36d08 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36d08 = FUN_14171c317(FUN_146468de8,uVar1,L"ENiagaraInputWidgetType");
  }
  return;
}



// FUNCTION 1438fe7d4 FUN_1438fe7d4 body=55 status=ok
// SIG undefined FUN_1438fe7d4(void)

void FUN_1438fe7d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36d80 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36d80 = FUN_14171c317(FUN_146469070,uVar1,L"ENiagaraBoolDisplayMode");
  }
  return;
}



// FUNCTION 1438fe80c FUN_1438fe80c body=2767 status=ok
// SIG undefined FUN_1438fe80c(void)

void FUN_1438fe80c(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar18 = (longlong)(*(int *)(param_2 + 5) + 0xf) & 0xfffffffffffffff0;
  *(int *)(param_2 + 5) = (int)uVar18 + 0x120;
  uVar12 = *param_2;
  lVar15 = param_2[3];
  uVar17 = *(int *)(param_2 + 7) + 0xfU & 0xfffffff0;
  uVar19 = (ulonglong)uVar17;
  lVar8 = FUN_145de160c();
  *(uint *)(param_2 + 7) = uVar17 + *(int *)(lVar8 + 0x3c);
  lVar8 = param_2[6];
  *(float *)(lVar8 + uVar19) = *(float *)(lVar15 + 8 + uVar18) - *(float *)(lVar15 + 4 + uVar18);
  *(undefined4 *)(lVar8 + 4 + uVar19) = *(undefined4 *)(lVar15 + 4 + uVar18);
  *(float *)(lVar8 + 8 + uVar19) =
       *(float *)(lVar15 + 0x14 + uVar18) - *(float *)(lVar15 + 0x10 + uVar18);
  *(undefined4 *)(lVar8 + 0xc + uVar19) = *(undefined4 *)(lVar15 + 0x10 + uVar18);
  fStack_80 = *(float *)(lVar15 + 0x34 + uVar18) - *(float *)(lVar15 + 0x28 + uVar18);
  local_88 = (undefined1 *)
             CONCAT44(*(float *)(lVar15 + 0x30 + uVar18) - *(float *)(lVar15 + 0x24 + uVar18),
                      *(float *)(lVar15 + 0x2c + uVar18) - *(float *)(lVar15 + 0x20 + uVar18));
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x18 + uVar18),0);
  *(float *)(lVar8 + 0x18 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0x10 + uVar19) = local_98;
  fStack_80 = *(float *)(lVar15 + 0x28 + uVar18);
  local_88 = *(undefined1 **)(lVar15 + 0x20 + uVar18);
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x18 + uVar18),0);
  *(float *)(lVar8 + 0x28 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0x20 + uVar19) = local_98;
  fStack_80 = *(float *)(lVar15 + 0x54 + uVar18) - *(float *)(lVar15 + 0x48 + uVar18);
  local_88 = (undefined1 *)
             CONCAT44(*(float *)(lVar15 + 0x50 + uVar18) - *(float *)(lVar15 + 0x44 + uVar18),
                      *(float *)(lVar15 + 0x4c + uVar18) - *(float *)(lVar15 + 0x40 + uVar18));
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x38 + uVar18),0);
  *(float *)(lVar8 + 0x38 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0x30 + uVar19) = local_98;
  fStack_80 = *(float *)(lVar15 + 0x48 + uVar18);
  local_88 = *(undefined1 **)(lVar15 + 0x40 + uVar18);
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x38 + uVar18),0);
  *(float *)(lVar8 + 0x48 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0x40 + uVar19) = local_98;
  fStack_80 = *(float *)(lVar15 + 0x74 + uVar18) - *(float *)(lVar15 + 0x68 + uVar18);
  local_88 = (undefined1 *)
             CONCAT44(*(float *)(lVar15 + 0x70 + uVar18) - *(float *)(lVar15 + 100 + uVar18),
                      *(float *)(lVar15 + 0x6c + uVar18) - *(float *)(lVar15 + 0x60 + uVar18));
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x58 + uVar18),0);
  *(float *)(lVar8 + 0x58 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0x50 + uVar19) = local_98;
  fStack_80 = *(float *)(lVar15 + 0x68 + uVar18);
  local_88 = *(undefined1 **)(lVar15 + 0x60 + uVar18);
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x58 + uVar18),0);
  *(float *)(lVar8 + 0x68 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0x60 + uVar19) = local_98;
  fStack_80 = *(float *)(lVar15 + 0x90 + uVar18) - *(float *)(lVar15 + 0x84 + uVar18);
  local_88 = (undefined1 *)
             CONCAT44(*(float *)(lVar15 + 0x8c + uVar18) - *(float *)(lVar15 + 0x80 + uVar18),
                      *(float *)(lVar15 + 0x88 + uVar18) - *(float *)(lVar15 + 0x7c + uVar18));
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,1,0);
  *(float *)(lVar8 + 0x50 + uVar19) = (float)local_98 + *(float *)(lVar8 + 0x50 + uVar19);
  *(float *)(lVar8 + 0x54 + uVar19) = local_98._4_4_ + *(float *)(lVar8 + 0x54 + uVar19);
  *(float *)(lVar8 + 0x58 + uVar19) = fStack_90 + *(float *)(lVar8 + 0x58 + uVar19);
  fStack_80 = *(float *)(lVar15 + 0x84 + uVar18);
  local_88 = *(undefined1 **)(lVar15 + 0x7c + uVar18);
  local_a8 = &local_88;
  FUN_148200dca(uVar12,&local_98,1,0);
  *(float *)(lVar8 + 0x60 + uVar19) = (float)local_98 + *(float *)(lVar8 + 0x60 + uVar19);
  *(float *)(lVar8 + 100 + uVar19) = local_98._4_4_ + *(float *)(lVar8 + 100 + uVar19);
  *(float *)(lVar8 + 0x68 + uVar19) = fStack_90 + *(float *)(lVar8 + 0x68 + uVar19);
  *(uint *)(lVar8 + 0x6c + uVar19) = (uint)*(byte *)(lVar15 + 0x94 + uVar18);
  puVar2 = (undefined8 *)(lVar15 + 0xa0 + uVar18);
  local_88 = (undefined1 *)*puVar2;
  fStack_80 = *(float *)(puVar2 + 1);
  uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_a8 = &local_88;
  FUN_148200c98(uVar12,&local_98,*(undefined4 *)(lVar15 + 0x98 + uVar18),0);
  puVar2 = (undefined8 *)(lVar8 + 0x70 + uVar19);
  *puVar2 = local_98;
  puVar2[1] = CONCAT44(uStack_8c,fStack_90);
  *(float *)(lVar8 + 0x80 + uVar19) =
       *(float *)(lVar15 + 0xb8 + uVar18) - *(float *)(lVar15 + 0xb4 + uVar18);
  *(undefined4 *)(lVar8 + 0x84 + uVar19) = *(undefined4 *)(lVar15 + 0xb4 + uVar18);
  *(float *)(lVar8 + 0x88 + uVar19) =
       (*(float *)(lVar15 + 0xbc + uVar18) - *(float *)(lVar15 + 0xc0 + uVar18)) * 0.008726646;
  *(float *)(lVar8 + 0x8c + uVar19) = *(float *)(lVar15 + 0xc0 + uVar18) * 0.008726646;
  *(undefined4 *)(lVar8 + 0x90 + uVar19) = *(undefined4 *)(lVar15 + 0xc4 + uVar18);
  *(uint *)(lVar8 + 0x94 + uVar19) = (uint)*(byte *)(lVar15 + 200 + uVar18);
  *(float *)(lVar8 + 0x98 + uVar19) =
       *(float *)(lVar15 + 0xd8 + uVar18) - *(float *)(lVar15 + 0xd4 + uVar18);
  *(undefined4 *)(lVar8 + 0x9c + uVar19) = *(undefined4 *)(lVar15 + 0xd4 + uVar18);
  fStack_80 = *(float *)(lVar15 + 0xe8 + uVar18);
  local_88 = *(undefined1 **)(lVar15 + 0xe0 + uVar18);
  local_a8 = &local_88;
  FUN_148200d2a(uVar12,&local_98,*(undefined4 *)(lVar15 + 0xcc + uVar18),0);
  *(float *)(lVar8 + 0xa8 + uVar19) = fStack_90;
  *(longlong *)(lVar8 + 0xa0 + uVar19) = local_98;
  *(uint *)(lVar8 + 0xac + uVar19) = (uint)*(byte *)(lVar15 + 0xec + uVar18);
  *(undefined4 *)(lVar8 + 0xb0 + uVar19) = *(undefined4 *)(lVar15 + 0xf0 + uVar18);
  uVar3 = *(undefined4 *)(lVar15 + 0xf4 + uVar18);
  *(undefined4 *)(lVar8 + 0xc0 + uVar19) = uVar3;
  *(undefined4 *)(lVar8 + 0xc4 + uVar19) = uVar3;
  *(undefined4 *)(lVar8 + 200 + uVar19) = uVar3;
  *(undefined4 *)(lVar8 + 0xe0 + uVar19) = *(undefined4 *)(lVar15 + 0x100 + uVar18);
  *(undefined4 *)(lVar8 + 0xe4 + uVar19) = *(undefined4 *)(lVar15 + 0x104 + uVar18);
  *(undefined4 *)(lVar8 + 0xe8 + uVar19) = *(undefined4 *)(lVar15 + 0x108 + uVar18);
  *(undefined4 *)(lVar8 + 0xec + uVar19) = *(undefined4 *)(lVar15 + 0x10c + uVar18);
  lVar15 = *(longlong *)(lVar15 + 0xf8 + uVar18);
  if (lVar15 == 0) {
LAB_1438feda0:
    lVar15 = 0;
  }
  else {
    lVar9 = FUN_145885776();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_1438feda0;
  }
  FUN_140d5a412(local_a0,lVar15);
  local_98 = lVar8 + uVar19;
  FUN_1417f835a(&fStack_90,local_a0);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1438feded;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1438ff23b;
      goto LAB_1438fedf6;
    }
  }
  else {
LAB_1438feded:
    if (iVar5 != 0x10) {
LAB_1438fedf6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar15 + 0xc60), iVar5 == 2))
        goto LAB_1438ff23b;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_1438ff23b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1438fefb6;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_1438ff643);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1438fefb6:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
          uVar17 = puVar11[0x12];
          if (puVar14 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar4 = *puVar11;
            *puVar11 = *puVar11 + uVar17 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar17) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar17 = 0;
            if (puVar14 <= puVar11 + 0x4000) {
              uVar17 = 1;
              goto LAB_1438ff036;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_1438ff036:
        *(uint **)(puVar11 + 0x10) = puVar14;
        puVar11[0x12] = uVar17;
        iVar5 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ad7a560;
        puVar16[0x15] = local_98;
        FUN_1417f835a(puVar16 + 0x16,&fStack_90);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar5 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar15 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar15 == 0) {
          uVar18 = 1;
          if ((char)uVar19 != '\x06') {
            uVar18 = uVar19;
          }
          uVar19 = uVar18;
          uVar12 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar15 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar5;
        if (puVar16 == (undefined8 *)0x0) {
          local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = (undefined1 *)0x0;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14ad7a520;
        local_60 = local_98;
        FUN_1417f835a(local_58,&fStack_90);
        local_88 = &LAB_1480703d4;
        local_a8 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FNaughtyTest",&DAT_14cb36dc0);
        if (local_88 != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1438feea9;
    }
  }
LAB_1438ff23b:
  FUN_1480702d8(&local_98);
LAB_1438feea9:
  FUN_1417f83cc(&fStack_90);
  FUN_1417f83cc(local_a0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1438ff384 FUN_1438ff384 body=703 status=ok
// SIG undefined FUN_1438ff384(void)

undefined8 * FUN_1438ff384(undefined8 *param_1)

{
  longlong *plVar1;
  
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
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 2) = 0x4b;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x2f] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 1438ff66a FUN_1438ff66a body=282 status=ok
// SIG undefined FUN_1438ff66a(void)

undefined8 * FUN_1438ff66a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1438ff643);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1438ff784 FUN_1438ff784 body=1192 status=ok
// SIG undefined FUN_1438ff784(void)

void FUN_1438ff784(void)

{
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6c990,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6d3f0,3,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6d810,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6dca0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6e590,1,0,0,&PTR_FUN_14ad6e570,1);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6e940,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6ed40,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6f320,1,0,0,&PTR_FUN_14ad6f300,1);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad6f700,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad70160,1,&PTR_FUN_14ad70130,1,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad70550,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad70c70,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad71270,1,0,0,&PTR_FUN_14ad71250,1);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad717b0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad71bb0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad72120,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad72510,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad72a10,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad72f90,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad73460,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad73980,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad742b0,1,0,0,&PTR_FUN_14ad74290,1);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad74660,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad74b80,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad74f70,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad756a0,1,0,0,&PTR_FUN_14ad75680,1);
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad75a70,1,&PTR_FUN_14ad75a50,1);
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad76b10,2,&PTR_FUN_14ad76a90,4);
  FUN_14098d3d2(FUN_1438fe766,L"/Script/Niagara",L"ENiagaraTickBehavior",&DAT_14cb36ca0);
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad76fc0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14ad78b00,8,&PTR_FUN_14ad78ac0,2);
  return;
}



// FUNCTION 1438ffc2c FUN_1438ffc2c body=323 status=ok
// SIG undefined FUN_1438ffc2c(void)

undefined8 FUN_1438ffc2c(uint *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[3] == 0) {
LAB_1438ffd3c:
    lVar5 = 0;
  }
  else {
    uVar2 = param_1[2];
    lVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[3] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_1438ffd3c;
      lVar5 = *plVar3;
    }
  }
  if (param_1[1] == 0) {
LAB_1438ffd44:
    lVar4 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((*(uint *)(plVar3 + 2) != param_1[1] || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_1438ffd44;
      lVar4 = *plVar3;
    }
  }
  if (((lVar5 != 0) && (lVar4 != 0)) && ((*(byte *)(lVar5 + 0x9e) & 0x10) != 0)) {
    uVar2 = param_1[0x15];
    if ((int)uVar2 % (int)param_1[0x10] == 0) {
      cVar1 = FUN_1481e480a(lVar4,lVar5);
      if (cVar1 == '\0') {
        if (*(longlong *)(lVar4 + 0x40) == 0) {
          FUN_148070982(param_1);
        }
        if ((param_1[0x11] & 1) == 0) {
          return 1;
        }
        uVar2 = param_1[0x16];
        param_1[0x16] = uVar2 + 1;
        if ((int)uVar2 <= (int)param_1[0x12]) {
          return 1;
        }
        goto LAB_1438ffd17;
      }
      uVar2 = param_1[0x15];
    }
    param_1[0x16] = 0;
    param_1[0x15] = uVar2 + 1;
    if ((param_1[0xe] & 2) == 0) {
      return 1;
    }
    if ((int)uVar2 < (int)((param_1[0xf] - 1) * param_1[0x10])) {
      return 1;
    }
  }
LAB_1438ffd17:
  FUN_148070982(param_1);
  return 1;
}



// FUNCTION 1438ffd6f FUN_1438ffd6f body=55 status=ok
// SIG undefined FUN_1438ffd6f(void)

void FUN_1438ffd6f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36de0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36de0 = FUN_14171c317(FUN_146469833,uVar1,L"ENDIActorComponentSourceMode");
  }
  return;
}



// FUNCTION 1438ffdea FUN_1438ffdea body=1259 status=ok
// SIG undefined FUN_1438ffdea(void)

void FUN_1438ffdea(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143900230;
    if (iVar7 != 1) goto LAB_1438ffe48;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143900230;
  }
  else {
LAB_1438ffe48:
    if (iVar7 == 0x10) goto LAB_143900230;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143900230:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143900230;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_1438fffb5;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14390a065);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_1438fffb5:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143900035;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143900035:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad7fc50;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad7fc30;
    local_68[0] = &LAB_14390a01e;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cb37b7c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439002ea FUN_1439002ea body=1836 status=ok
// SIG undefined FUN_1439002ea(void)

ulonglong FUN_1439002ea(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 unaff_RSI;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_158 [32];
  code **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  int local_bc;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  undefined8 **local_90;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = *(undefined8 *)(param_3 + 0x100);
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  uVar17 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_c8 = param_2;
  if (*(char *)(param_1 + 0x40) == '\x03') goto LAB_143900329;
  local_a8 = 0;
  local_98 = &PTR_LAB_14ad7fc60;
  local_90 = &local_c8;
  local_b8 = &LAB_14390a21c;
  FUN_140bb9115(param_1,param_3);
  if (DAT_14cb366a0 == (longlong *)0x0) {
    local_100 = local_78;
    local_78[0] = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = &LAB_140eca530;
    local_108 = &LAB_148063819;
    local_110 = &LAB_1460672b6;
    local_118 = L"Niagara";
    local_120 = 0;
    local_128 = 0x10000006;
    local_130 = 8;
    local_138 = (code **)CONCAT44(local_138._4_4_,0x130);
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  plVar14 = DAT_14cb366a0;
  lVar15 = DAT_14cb366a0[0x22];
  if (lVar15 == 0) {
    (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
    lVar15 = plVar14[0x22];
  }
  iVar6 = FUN_14804b320(*(undefined1 *)(param_1 + 0x40),lVar15 + 0xf8);
  *(int *)(local_c8 + 1) = iVar6;
  if (iVar6 == 3) {
    uVar17 = 0;
    goto LAB_143900329;
  }
  if ((*(char *)((longlong)local_c8 + 0xc) != '\x01') ||
     (iVar6 = *(int *)(param_1 + 0x38), iVar6 == 0)) goto LAB_143900329;
  local_e8 = *(longlong *)(param_1 + 0x28);
  uStack_dc = *(undefined4 *)(param_1 + 0x3c);
  local_d8 = *(undefined4 *)(local_c8 + 1);
  uStack_d0 = *(undefined8 *)(param_3 + 0x100);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar15 + 0xc60);
  iStack_e0 = iVar6;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 == 2) goto LAB_143900867;
    if (iVar4 != 1) goto LAB_143900450;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143900867;
LAB_143900459:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar15 + 0xc60), iVar6 == 2)) {
LAB_1439009ac:
        lVar15 = local_e8;
        local_78[0] = (code *)&uStack_d0;
        FUN_148086cd0(local_e8 + 0x10,&local_bc);
        lVar15 = *(longlong *)(lVar15 + 0x10);
        goto LAB_1439009d7;
      }
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1439009ac;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_1439005dc;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_1439005dc:
        puVar18 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x19);
        uVar13 = puVar10[0x12];
        if (puVar16 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar18 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar13 = 0;
          if (puVar16 <= puVar10 + 0x4000) {
            uVar13 = 1;
            goto LAB_14390065c;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14390065c:
      *(uint **)(puVar10 + 0x10) = puVar16;
      puVar10[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14ad7fca0;
      *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar18 + 0xac) = local_e8._4_4_;
      *(int *)(puVar18 + 0x16) = iStack_e0;
      *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_dc;
      *(undefined4 *)(puVar18 + 0x17) = local_d8;
      *(undefined4 *)((longlong)puVar18 + 0xbc) = uStack_d4;
      *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_d0._4_4_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar18[0xf] = uVar11;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar6;
      if (puVar18 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x28,8);
      *local_68 = (longlong)&PTR_LAB_14ad7fc80;
      *(undefined4 *)(local_68 + 3) = local_d8;
      *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_d4;
      *(undefined4 *)(local_68 + 4) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)local_68 + 0x24) = uStack_d0._4_4_;
      *(undefined4 *)(local_68 + 1) = (undefined4)local_e8;
      *(undefined4 *)((longlong)local_68 + 0xc) = local_e8._4_4_;
      *(int *)(local_68 + 2) = iStack_e0;
      *(undefined4 *)((longlong)local_68 + 0x14) = uStack_dc;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = FUN_14390a2a2;
      }
      local_138 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb37b80);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  else {
LAB_143900450:
    if (iVar4 != 0x10) goto LAB_143900459;
LAB_143900867:
    lVar15 = local_e8;
    local_78[0] = (code *)&uStack_d0;
    FUN_148086cd0(local_e8 + 0x10,&local_bc);
    lVar15 = *(longlong *)(lVar15 + 0x10);
LAB_1439009d7:
    lVar12 = (longlong)local_bc * 0x20;
    *(int *)(lVar15 + 8 + lVar12) = iStack_e0;
    *(undefined4 *)(lVar15 + 0xc + lVar12) = uStack_dc;
    *(undefined1 *)(lVar15 + 0x10 + lVar12) = (undefined1)local_d8;
  }
LAB_143900329:
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143900a18 FUN_143900a18 body=1239 status=ok
// SIG undefined FUN_143900a18(void)

void FUN_143900a18(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143900e4a;
    if (iVar7 != 1) goto LAB_143900a62;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143900e4a;
  }
  else {
LAB_143900a62:
    if (iVar7 == 0x10) goto LAB_143900e4a;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143900e4a:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143900e4a;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143900bcf;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14390a065);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143900bcf:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143900c4f;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143900c4f:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad7fcd0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad7fcb0;
    local_68[0] = &LAB_14390a544;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb37b84);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143900f04 FUN_143900f04 body=1251 status=ok
// SIG undefined FUN_143900f04(void)

void FUN_143900f04(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  local_70 = FUN_1480d7c38(*(undefined1 *)(param_1 + 0x40));
  uStack_78 = *(undefined4 *)(param_1 + 0x38);
  uStack_74 = *(undefined4 *)(param_1 + 0x3c);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_80 = uVar11;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143900f69;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143900f6e;
      goto LAB_143900f98;
    }
  }
  else {
LAB_143900f69:
    if (iVar6 != 0x10) {
LAB_143900f98:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143900f6e;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143900f6e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143901102;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14390a065);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143901102:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143901182;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143901182:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ad7fe60;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_74;
        puVar16[0x17] = CONCAT44(uStack_6c,local_70);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ad7fe40;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = CONCAT44(uStack_6c,local_70);
        local_68[0] = &LAB_14390a8c4;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb37c0c);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14390103d;
    }
  }
LAB_143900f6e:
  FUN_14390a728(&local_80);
LAB_14390103d:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439013e8 FUN_1439013e8 body=1263 status=ok
// SIG undefined FUN_1439013e8(void)

void FUN_1439013e8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148072e52(param_2);
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_1439014f6;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143901832;
    if (iVar7 != 1) goto LAB_14390144a;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143901832;
  }
  else {
LAB_14390144a:
    if (iVar7 == 0x10) goto LAB_143901832;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143901832:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143901832;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_1439015b7;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14390a065);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_1439015b7:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143901637;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143901637:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad7fec8;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad7fe70;
    local_68[0] = &LAB_14390aa74;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDIConsoleVariable_InitRT",&DAT_14cb37c10);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_1439014f6:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439018ec FUN_1439018ec body=69 status=ok
// SIG undefined FUN_1439018ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439018ec(void)

{
  _DAT_14cb36ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014390192e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb36ed0,1);
  return;
}



// FUNCTION 143901932 FUN_143901932 body=899 status=ok
// SIG undefined FUN_143901932(void)

void FUN_143901932(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  uint *local_e0;
  uint *local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < (int)param_2[1]) {
    lVar1 = param_1[1];
    local_78 = lVar1 + 0x18;
    local_80 = lVar1 + 0x14;
    lVar9 = 8;
    lVar8 = 0;
    do {
      lVar6 = *param_2;
      local_64 = 0xffffffff;
      local_68 = 0xffffffff;
      local_6c = 0xffffffff;
      puVar3 = (ushort *)FUN_140aa93c6(*param_1,lVar9 + lVar6 + -8);
      if (puVar3 != (ushort *)0x0) {
        local_64 = (uint)*puVar3;
        local_68 = (uint)puVar3[1];
        local_6c = (uint)puVar3[2];
      }
      plVar4 = (longlong *)FUN_144741050(lVar6 + lVar9);
      lVar6 = DAT_14cb420c0;
      if ((short)plVar4[1] == 3) goto LAB_143901a52;
      lVar5 = *plVar4;
      if (lVar5 == 0) {
LAB_143901bce:
        lVar6 = 0;
      }
      else {
        if (DAT_14c948f88 == 0) {
          local_60 = (code *)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_90 = DAT_14c948f88;
          FUN_1446f470e(local_58,L"Struct",1);
          local_b0 = &local_60;
          local_b8 = &LAB_146891313;
          local_c0 = FUN_146272f63;
          local_d0 = L"Engine";
          local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
          local_d8 = (uint *)0x8;
          local_e0._0_4_ = 0x10000020;
          local_e8._0_4_ = 8;
          FUN_14574b4b2(local_90);
          DAT_14c948f88 = local_90;
          local_88 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_50 = FUN_1449e2820;
            local_a0 = FUN_14081d0ea;
            local_a8 = FUN_14081d0ea;
            local_b0 = &local_50;
            local_b8 = &LAB_146856450;
            local_c0 = FUN_1427b121c;
            local_c8 = L"Engine";
            local_d0 = (wchar_t *)0x0;
            local_d8 = (uint *)CONCAT44(local_d8._4_4_,0x10000021);
            local_e0._0_4_ = 8;
            local_e8._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_90 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_90;
          local_88 = DAT_14c927740;
          uVar7 = FUN_1400163b0();
          local_e8 = L"Struct";
          FUN_14574b446(uVar7,local_90,local_88,L"/Script/CoreUObject");
          lVar5 = *plVar4;
          if (lVar5 == 0) goto LAB_143901bce;
        }
        if (DAT_14c948f88 == 0) goto LAB_143901bce;
        lVar2 = *(longlong *)(lVar5 + 0x10);
        lVar6 = 0;
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) goto LAB_143901bce;
          lVar6 = lVar5;
          if (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) !=
              DAT_14c948f88 + 0x30) {
            lVar6 = 0;
          }
        }
      }
LAB_143901a52:
      local_d0 = (wchar_t *)&local_6c;
      local_d8 = &local_68;
      local_e0 = &local_64;
      local_e8 = (wchar_t *)local_78;
      FUN_14807382a(lVar1,lVar6,lVar1 + 0x10,local_80);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0xc;
    } while (lVar8 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143901cb6 FUN_143901cb6 body=126 status=ok
// SIG undefined FUN_143901cb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143901cb6(void)

{
  _DAT_14cb36ef8 = &PTR_FUN_14ad800e0;
  FUN_144725486(&DAT_14cb36ef8);
  _DAT_14cb36ef8 = &PTR_FUN_14ad80110;
  FUN_14476820c(&DAT_14cb36f10);
  _DAT_14cb36ef8 = &PTR_FUN_14a38cd70;
  DAT_14cb36f06 = 2;
  if ((DAT_14cb36f00 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 143901d34 FUN_143901d34 body=126 status=ok
// SIG undefined FUN_143901d34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143901d34(void)

{
  _DAT_14cb36f40 = &PTR_FUN_14ad800e0;
  FUN_144725486(&DAT_14cb36f40);
  _DAT_14cb36f40 = &PTR_FUN_14ad80110;
  FUN_14476820c(&DAT_14cb36f58);
  _DAT_14cb36f40 = &PTR_FUN_14a38cd70;
  DAT_14cb36f4e = 2;
  if ((DAT_14cb36f48 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 143901db2 FUN_143901db2 body=126 status=ok
// SIG undefined FUN_143901db2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143901db2(void)

{
  _DAT_14cb36f88 = &PTR_FUN_14ad800e0;
  FUN_144725486(&DAT_14cb36f88);
  _DAT_14cb36f88 = &PTR_FUN_14ad80110;
  FUN_14476820c(&DAT_14cb36fa0);
  _DAT_14cb36f88 = &PTR_FUN_14a38cd70;
  DAT_14cb36f96 = 2;
  if ((DAT_14cb36f90 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 143901e30 FUN_143901e30 body=69 status=ok
// SIG undefined FUN_143901e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143901e30(void)

{
  _DAT_14cb36fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143901e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb36fd8,1);
  return;
}



// FUNCTION 143901e75 FUN_143901e75 body=69 status=ok
// SIG undefined FUN_143901e75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143901e75(void)

{
  _DAT_14cb36fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143901eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb36fe8,1);
  return;
}



// FUNCTION 143901eba FUN_143901eba body=602 status=ok
// SIG undefined FUN_143901eba(void)

longlong * FUN_143901eba(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined ***local_d0;
  code **local_c8;
  undefined1 local_c0;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0 [2];
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_84;
  undefined **local_80;
  undefined2 local_78;
  longlong local_70 [2];
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = (longlong)*(int *)(param_2 + 0x30);
  if (lVar3 != 0) {
    plVar1 = *(longlong **)(param_2 + 0x28);
    lVar5 = lVar3 << 4;
    plVar7 = plVar1;
    do {
      if (*plVar7 == DAT_14cb36ff8) goto LAB_143901f16;
      plVar7 = plVar7 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
    plVar7 = (longlong *)0x0;
LAB_143901f16:
    lVar8 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)((longlong)plVar1 + lVar8) == DAT_14cb37000) {
        if ((plVar7 != (longlong *)0x0) && ((longlong)plVar1 - lVar5 != 0)) {
          FUN_140056680(local_70,&DAT_149dfb77a);
          local_78 = 0;
          local_80 = &PTR_FUN_149e98010;
          if (DAT_14cb43cc0 == 0) {
            uVar4 = FUN_140aec9fd();
            DAT_14cb43cc0 = FUN_140002ddd(FUN_14647b421,uVar4,L"NiagaraTypeDefinition");
          }
          lVar3 = DAT_14cb43cc0;
          local_90 = 0;
          local_88 = 0;
          local_86 = 0;
          local_84 = 0xffffffff;
          local_58 = *(code **)(DAT_14cb43cc0 + 0x18);
          FUN_1400021e4(&local_58,local_a0);
          FUN_1400021e4(((longlong)plVar1 - lVar5) + 8,&local_b0);
          puVar6 = &DAT_149dfb77a;
          if (local_a8 != 0) {
            puVar6 = local_b0;
          }
          local_50 = &local_60;
          local_58 = FUN_1427ded96;
          local_d0 = &local_80;
          local_c0 = 1;
          local_d8 = 0;
          local_c8 = &local_58;
          local_60 = local_a0;
          lVar3 = FUN_1408de6dc(lVar3,puVar6,&local_90,0);
          if (local_b0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_a0[0] != 0) {
            FUN_1400020a8();
          }
          if (lVar3 != 0) {
            *param_1 = plVar7[1];
            uVar2 = FUN_144830b78(param_1 + 1,&local_90);
            *(undefined4 *)(param_1 + 1) = uVar2;
            if (local_70[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_1439020ba;
          }
          if (local_70[0] != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar5 = lVar5 + -0x10;
      lVar8 = lVar8 + 0x10;
    } while (-lVar5 != lVar3 * 0x10);
  }
  *param_1 = 0;
  uVar2 = FUN_144830b78(param_1 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 1) = uVar2;
LAB_1439020ba:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14390216a FUN_14390216a body=2128 status=ok
// SIG undefined FUN_14390216a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14390216a(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_c0 = CONCAT71(local_c0._1_7_,param_4);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  LOCK();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  UNLOCK();
  uVar23 = 0;
  uVar8 = *(uint *)(param_1 + 0xf0);
  local_b8 = param_2;
  if (uVar8 == 0) {
    uVar17 = 1;
    iVar18 = 0;
    uVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0xd8);
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar18 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar18 = uVar8 - 1;
      }
      uVar23 = 0;
      uVar17 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar17 = uVar23;
      }
      iVar18 = 0;
      do {
        if (uVar17 == uVar23) goto LAB_143902239;
        iVar18 = iVar18 + 0x20;
        uVar7 = puVar9[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar23 = 0;
      iVar18 = 0;
    }
    uVar17 = (ulonglong)(-uVar7 & uVar7);
    uVar3 = uVar17 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar7 = (iVar18 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar7) {
      uVar7 = uVar8;
    }
  }
  puVar9 = (uint *)(ulonglong)uVar7;
  if (uVar7 != uVar8) {
    uVar7 = 0xffffffff;
    do {
      FUN_148077058(*(longlong *)(param_1 + 200) + (longlong)(int)puVar9 * 0x70 + 8);
      uVar7 = ~(uint)uVar17 & uVar7;
      puVar9 = *(uint **)(param_1 + 0xe8);
      if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0xd8);
      }
      uVar4 = *(uint *)(param_1 + 0xf0);
      iVar19 = (int)uVar23;
      lVar10 = (longlong)iVar19;
      uVar21 = puVar9[lVar10] & uVar7;
      if (uVar21 == 0) {
        iVar13 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar13 = uVar4 - 1;
        }
        iVar13 = iVar13 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar19) {
          iVar14 = iVar19;
        }
        if (iVar19 < iVar13) {
          lVar20 = 0;
          do {
            uVar21 = puVar9[lVar10 + lVar20 + 1];
            if (uVar21 != 0) {
              uVar23 = (ulonglong)(iVar19 + (int)lVar20 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14390232a;
            }
            iVar18 = iVar18 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar14 - lVar10 != lVar20);
          uVar7 = 0xffffffff;
          lVar10 = (longlong)iVar14;
        }
        uVar23 = lVar10 + 1U & 0xffffffff;
        uVar21 = uVar4;
      }
      else {
LAB_14390232a:
        uVar17 = (ulonglong)(-uVar21 & uVar21);
        uVar3 = uVar17 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar21 = (iVar18 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar21) {
          uVar21 = uVar4;
        }
      }
      puVar9 = (uint *)(ulonglong)uVar21;
    } while (uVar21 != uVar8);
  }
LAB_143902239:
  plVar22 = local_b8;
  if ((*(char *)((longlong)local_b8 + 0xac) == '\0') &&
     (uVar11 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1),
     *(char *)((longlong)local_b8 + 0xad) != '\x01')) goto LAB_14390225e;
  *(longlong *)(param_1 + 0x118) = param_3;
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (((((uVar8 = *(uint *)(param_1 + 8), (int)uVar8 < 0 || (DAT_14c9647dc <= (int)uVar8)) ||
        (plVar15 = (longlong *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
        plVar15 == (longlong *)0x0)) ||
       (((int)plVar15[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))
       )) || (plVar15 = (longlong *)*plVar15, plVar15 == (longlong *)0x0)))) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_148076f9c(param_1,&local_58,local_b8);
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    lVar10 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
    if (lVar10 == 0) goto LAB_143902746;
    if ((plVar22[7] != 0) &&
       (plVar15 = (longlong *)
                  FUN_1481153e0(*(undefined8 *)(lVar10 + 0x1c78),*(undefined8 *)(plVar22[7] + 0x28))
       , plVar15 != (longlong *)0x0)) {
      uVar8 = *(uint *)((longlong)plVar15 + 0xc);
      *(uint *)(param_1 + 8) = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar18 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar18 = *(int *)(lVar10 + 0x10);
        bVar26 = iVar18 == 0;
        if (bVar26) {
          *(int *)(lVar10 + 0x10) = iVar19;
          iVar18 = 0;
        }
        UNLOCK();
        plVar22 = local_b8;
        if (bVar26) {
          iVar18 = iVar19;
        }
      }
      *(int *)(param_1 + 0xc) = iVar18;
      goto LAB_14390245b;
    }
  }
  else {
LAB_14390245b:
    if (((*(longlong *)(param_1 + 0x10) == 0) ||
        (cVar6 = FUN_148114dd6(*(longlong *)(param_1 + 0x10),plVar15), cVar6 == '\0')) ||
       (*(char *)((longlong)plVar22 + 0x41) == '\x01')) {
      if ((((*(int *)(param_3 + 0x4c) == 0) || (uVar8 = *(uint *)(param_3 + 0x48), (int)uVar8 < 0))
          || ((DAT_14c9647dc <= (int)uVar8 ||
              ((plVar16 = (longlong *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(param_3 + 0x4c))))))) ||
         ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) {
        local_68 = DAT_14c8464f0;
        local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_70 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_b0 = 0;
      }
      else {
        lVar10 = *plVar16;
        if (lVar10 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar10);
        }
        local_68 = DAT_14c8464f0;
        local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_70 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_b0 = lVar10;
        if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar10);
        }
      }
      local_98 = local_68;
      local_a8 = (undefined4)local_78;
      uStack_a4 = local_78._4_4_;
      uStack_a0 = (undefined4)uStack_70;
      uStack_9c = uStack_70._4_4_;
      local_90 = 0;
      (**(code **)(*plVar15 + 0x2c8))(plVar15,local_88,&local_b0,0);
      FUN_148076f9c(param_1,local_88,plVar22);
    }
    if (*(int *)((longlong)plVar15 + 0x2c) == 0) {
LAB_1439028ff:
      uVar11 = 0;
    }
    else {
      uVar8 = *(uint *)(plVar15 + 5);
      if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
          (plVar16 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
          plVar16 != (longlong *)0x0)) &&
         (((int)plVar16[2] == *(int *)((longlong)plVar15 + 0x2c) &&
          ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) {
        if (((*plVar16 != 0 && (char)local_c0 == '\0') &&
            ((*(char *)(*plVar16 + 0x39) == '\x01' && ((char)plVar22[8] == '\x01')))) &&
           ((lVar10 = plVar15[8], iVar18 = (**(code **)(*plVar22 + 0x3b0))(plVar22,0),
            (int)lVar10 < iVar18 &&
            ((*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14cb37470 && (FUN_144b3d300(&DAT_14cb37470), DAT_14cb37470 == -1)))))) {
          _DAT_14cb37468 = FUN_14786402d();
          _Init_thread_footer(&DAT_14cb37470);
        }
      }
      if (*(int *)((longlong)plVar15 + 0x2c) == 0) goto LAB_1439028ff;
      uVar8 = *(uint *)(plVar15 + 5);
      uVar11 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)((longlong)plVar15 + 0x2c) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1439028ff;
        uVar11 = *puVar12;
      }
    }
    FUN_148112dec(uVar11,&local_78);
    plVar16 = uStack_70;
    lVar10 = local_78;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    if (*(int *)((longlong)plVar15 + 0x2c) == 0) {
LAB_143902906:
      uVar11 = 0;
    }
    else {
      uVar8 = *(uint *)(plVar15 + 5);
      uVar11 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)((longlong)plVar15 + 0x2c) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_143902906;
        uVar11 = *puVar12;
      }
    }
    FUN_148112dec(uVar11,&local_78);
    plVar15 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_70 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    uVar8 = FUN_148073748(lVar10 + 0x10);
    if (*(ulonglong *)(param_1 + 0x20) != (ulonglong)uVar8) {
      *(ulonglong *)(param_1 + 0x20) = (ulonglong)uVar8;
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)((longlong)plVar22 + 0xad);
      iVar18 = (int)plVar22[10];
      FUN_1480770b0(param_1 + 0x30,iVar18);
      if (0 < (longlong)iVar18) {
        local_c0 = (longlong)iVar18 * 0x28;
        lVar25 = 8;
        lVar20 = 0;
        do {
          lVar5 = plVar22[9];
          lVar24 = *(longlong *)(param_1 + 0xb0);
          uVar11 = FUN_148073c5c();
          FUN_148073d58(uVar11,&local_78,lVar5 + lVar20,lVar10 + 0x10);
          plVar22 = uStack_70;
          if (lVar24 == 0) {
            lVar24 = param_1 + 0x30;
          }
          *(longlong *)(lVar24 + -8 + lVar25) = local_78;
          local_78 = 0;
          plVar15 = *(longlong **)(lVar24 + lVar25);
          if (uStack_70 == plVar15) {
LAB_1439028ba:
            plVar22 = uStack_70;
            if (uStack_70 != (longlong *)0x0) {
              LOCK();
              plVar15 = uStack_70 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*uStack_70)(uStack_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar22 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
          }
          else {
            uStack_70 = (longlong *)0x0;
            *(longlong **)(lVar24 + lVar25) = plVar22;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar22 = plVar15 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
              goto LAB_1439028ba;
            }
          }
          lVar20 = lVar20 + 0x28;
          lVar25 = lVar25 + 0x10;
          plVar22 = local_b8;
        } while (local_c0 != lVar20);
      }
    }
LAB_143902746:
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar8 = *(uint *)(param_1 + 8);
      uVar11 = 0;
      if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_14390225e;
      lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      if ((lVar10 != 0) &&
         ((*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0xc) &&
          ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
        iVar18 = *(int *)(param_1 + 0xb8);
        if (iVar18 == (int)plVar22[10]) {
          lVar10 = *(longlong *)(param_1 + 0xb0);
          lVar20 = param_1 + 0x30;
          if (lVar10 != 0) {
            lVar20 = lVar10;
          }
          uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          if (iVar18 != 0) {
            lVar10 = 0;
            do {
              if ((*(longlong *)(lVar20 + lVar10) == 0) ||
                 (*(int *)(*(longlong *)(lVar20 + lVar10) + 0x20) == 0)) goto LAB_1439027e1;
              lVar10 = lVar10 + 0x10;
            } while ((longlong)iVar18 * 0x10 != lVar10);
          }
          goto LAB_14390225e;
        }
      }
    }
  }
LAB_1439027e1:
  uVar11 = 0;
LAB_14390225e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1439029bc FUN_1439029bc body=1294 status=ok
// SIG undefined FUN_1439029bc(void)

void FUN_1439029bc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (undefined1 *)0x0;
  uStack_70 = 0;
  FUN_148076f9c(param_2,&local_78,param_1);
  (**(code **)*param_2)(param_2,0);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143902e25;
    if (iVar7 != 1) goto LAB_143902a36;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143902e25;
  }
  else {
LAB_143902a36:
    if (iVar7 == 0x10) goto LAB_143902e25;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143902e25:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143902e25;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143902baa;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14390a065);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143902baa:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143902c2a;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143902c2a:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad80180;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14ad80160;
    local_78 = &LAB_14390b2ba;
    local_88 = &local_78;
    local_50 = uVar12;
    local_48 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cb37d04);
    if (local_78 != (undefined1 *)0x0) {
      pppuVar14 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar14 = &local_58;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143902ee4 FUN_143902ee4 body=44 status=ok
// SIG undefined FUN_143902ee4(void)

byte FUN_143902ee4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((param_2 != 0) && (DAT_14c76292d != '\0')) {
    bVar1 = FUN_14390216a(param_2,param_1,param_3,0);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 143902f22 FUN_143902f22 body=2982 status=ok
// SIG undefined FUN_143902f22(void)

void FUN_143902f22(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  short sVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_148074020();
  if (*param_2 == DAT_14cb37008) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    *local_58 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_58[2] = lVar10;
    ppuVar9 = &PTR_FUN_14ad80190;
LAB_143902fc3:
    local_50 = 2;
    *local_58 = ppuVar9;
    local_58[3] = param_1;
  }
  else {
    FUN_14807434d();
    if (*param_2 == DAT_14cb370a8) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      *local_58 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      local_58[2] = lVar10;
      ppuVar9 = &PTR_FUN_14ad80200;
      goto LAB_143902fc3;
    }
    FUN_148075c4c();
    if (*param_2 == DAT_14cb37328) {
      FUN_143901eba(&local_68,param_2);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28);
      lVar10 = (longlong)*(int *)(lVar14 + 0x30);
      if (lVar10 != 0) {
        plVar12 = *(longlong **)(lVar14 + 0x28);
        lVar10 = lVar10 * 0xc;
        do {
          if (*plVar12 == local_68) {
            plVar6 = (longlong *)FUN_144741050(plVar12 + 1);
            plVar7 = (longlong *)FUN_144741050(local_60);
            lVar14 = *plVar7;
            if ((lVar14 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar14);
            }
            if (((*plVar6 == lVar14) && ((short)plVar6[1] == (short)plVar7[1])) &&
               (*(char *)((longlong)plVar6 + 10) == *(char *)((longlong)plVar7 + 10))) {
              if (plVar12 != (longlong *)0x0) {
                lVar14 = *plVar12;
                puVar8 = (undefined8 *)FUN_144741050(plVar12 + 1);
                puVar1 = (undefined8 *)*puVar8;
                if ((DAT_14c950c29 == 1) && (puVar1 != (undefined8 *)0x0)) {
                  FUN_1456cec3c(puVar1);
                }
                puVar4 = DAT_14cb420d0;
                uVar2 = puVar8[1];
                if ((DAT_14cb420d0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(DAT_14cb420d0);
                }
                if (((puVar1 == puVar4) && (DAT_14cb420d8 == (short)uVar2)) &&
                   (DAT_14cb420da == (char)((ulonglong)uVar2 >> 0x10))) {
                  local_58 = (undefined8 *)0x0;
                  local_50 = 0;
                  FUN_1446efa72(&local_58,0,3,0x10);
                  *local_58 = &PTR_LAB_14ad81180;
                  LOCK();
                  UNLOCK();
                  lVar11 = DAT_14c758608 + 1;
                  lVar10 = DAT_14c758608 + 1;
                  if (lVar11 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar11 = DAT_14c758608 + 2;
                    lVar10 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar10;
                  local_58[2] = lVar11;
                  ppuVar9 = &PTR_FUN_14ad80270;
                  goto LAB_14390335f;
                }
              }
              break;
            }
          }
          plVar12 = (longlong *)((longlong)plVar12 + 0xc);
          lVar10 = lVar10 + -0xc;
        } while (lVar10 != 0);
      }
      goto LAB_143903043;
    }
    FUN_148076605();
    if (*param_2 == DAT_14cb373c8) {
      FUN_143901eba(&local_68,param_2);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28);
      lVar10 = (longlong)*(int *)(lVar14 + 0x30);
      if (lVar10 == 0) goto LAB_143903043;
      plVar12 = *(longlong **)(lVar14 + 0x28);
      lVar10 = lVar10 * 0xc;
LAB_143903215:
      if (*plVar12 != local_68) {
LAB_143903270:
        plVar12 = (longlong *)((longlong)plVar12 + 0xc);
        lVar10 = lVar10 + -0xc;
        if (lVar10 == 0) goto LAB_143903043;
        goto LAB_143903215;
      }
      plVar6 = (longlong *)FUN_144741050(plVar12 + 1);
      plVar7 = (longlong *)FUN_144741050(local_60);
      lVar14 = *plVar7;
      if ((lVar14 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar14);
      }
      if (((*plVar6 != lVar14) || ((short)plVar6[1] != (short)plVar7[1])) ||
         (*(char *)((longlong)plVar6 + 10) != *(char *)((longlong)plVar7 + 10))) goto LAB_143903270;
      if (plVar12 == (longlong *)0x0) goto LAB_143903043;
      lVar14 = *plVar12;
      puVar8 = (undefined8 *)FUN_144741050(plVar12 + 1);
      puVar1 = (undefined8 *)*puVar8;
      if ((DAT_14c950c29 == 1) && (puVar1 != (undefined8 *)0x0)) {
        FUN_1456cec3c(puVar1);
      }
      puVar4 = DAT_14cb420d0;
      uVar2 = puVar8[1];
      if ((DAT_14cb420d0 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb420d0);
      }
      sVar13 = (short)uVar2;
      cVar3 = (char)((ulonglong)uVar2 >> 0x10);
      if (((puVar1 == puVar4) && (DAT_14cb420d8 == sVar13)) && (DAT_14cb420da == cVar3)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        *local_58 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_58[2] = lVar11;
        ppuVar9 = &PTR_FUN_14ad802e0;
        goto LAB_14390335f;
      }
      FUN_1481f9c60(&local_58);
      puVar8 = local_58;
      if ((local_58 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_58);
      }
      if (((puVar1 == puVar8) && ((short)local_50 == sVar13)) && (local_50._2_1_ == cVar3)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        *local_58 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_58[2] = lVar11;
        ppuVar9 = &PTR_FUN_14ad80350;
        goto LAB_14390335f;
      }
      FUN_1481f96b0(&local_58);
      puVar8 = local_58;
      if ((local_58 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_58);
      }
      if (((puVar1 == puVar8) && ((short)local_50 == sVar13)) && (local_50._2_1_ == cVar3)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        *local_58 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_58[2] = lVar11;
        ppuVar9 = &PTR_FUN_14ad803c0;
        goto LAB_14390335f;
      }
      FUN_1408c4b2a(&local_58);
      puVar8 = local_58;
      if ((local_58 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_58);
      }
      if (((puVar1 == puVar8) && ((short)local_50 == sVar13)) && (local_50._2_1_ == cVar3)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        *local_58 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_58[2] = lVar11;
        ppuVar9 = &PTR_FUN_14ad80430;
        goto LAB_14390335f;
      }
      FUN_1481f96f2(&local_58);
      puVar8 = local_58;
      if ((local_58 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_58);
      }
      puVar4 = DAT_14cb42130;
      if (((puVar1 == puVar8) && ((short)local_50 == sVar13)) && (local_50._2_1_ == cVar3)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        *local_58 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_58[2] = lVar11;
        ppuVar9 = &PTR_FUN_14ad804a0;
        goto LAB_14390335f;
      }
      if ((DAT_14cb42130 != (undefined8 *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42130);
      }
      if (((puVar1 != puVar4) || (DAT_14cb42138 != sVar13)) || (DAT_14cb4213a != cVar3))
      goto LAB_143903043;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      *local_58 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      local_58[2] = lVar11;
      ppuVar9 = &PTR_FUN_14ad80510;
LAB_14390335f:
      local_50 = 3;
      *local_58 = ppuVar9;
      local_58[3] = param_1;
      local_58[4] = lVar14;
    }
    else {
      uVar5 = FUN_148073f86(param_1 + 0x48,*param_2,param_2 + 7,param_2 + 9);
      FUN_148074b4f();
      if (*param_2 == DAT_14cb37148) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        *local_58 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        local_58[2] = lVar10;
        ppuVar9 = &PTR_FUN_14ad80580;
      }
      else {
        FUN_148074ee9();
        if (*param_2 == DAT_14cb371e8) {
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          *local_58 = &PTR_LAB_14ad81180;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          local_58[2] = lVar10;
          ppuVar9 = &PTR_FUN_14ad805f0;
        }
        else {
          FUN_148075461();
          if (*param_2 != DAT_14cb37288) goto LAB_143903043;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          *local_58 = &PTR_LAB_14ad81180;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          local_58[2] = lVar10;
          ppuVar9 = &PTR_FUN_14ad80660;
        }
      }
      local_50 = 3;
      *local_58 = ppuVar9;
      local_58[3] = param_1;
      *(undefined4 *)(local_58 + 4) = uVar5;
    }
  }
  uVar5 = local_50;
  puVar1 = local_58;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  if ((int)param_4[1] == 0) {
LAB_143902fee:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar8 = (undefined8 *)*param_4;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143902fee;
    }
  }
  *param_4 = (longlong)puVar1;
  *(undefined4 *)(param_4 + 1) = uVar5;
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_143903043;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143903043:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143903aca FUN_143903aca body=402 status=ok
// SIG undefined FUN_143903aca(void)

void FUN_143903aca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  
  lVar15 = *param_2;
  plVar2 = (longlong *)param_1[1];
  uVar14 = *(uint *)(*(longlong *)(*param_1 + 8) + 0xc4);
  puVar3 = (uint *)*plVar2;
  *plVar2 = (longlong)(puVar3 + (int)plVar2[2]);
  uVar1 = *puVar3;
  lVar9 = 0;
  uVar11 = uVar14;
  uVar10 = 0;
  do {
    iVar12 = *(int *)((longlong)param_2 + lVar9 * 4 + 0x10);
    uVar13 = (0x8000U >> ((byte)lVar9 & 0x1f)) * iVar12 + uVar10;
    if (uVar1 < uVar13) {
      uVar11 = *(uint *)(lVar15 + (longlong)
                                  (int)((uVar1 - uVar10 >> (0xf - (byte)lVar9 & 0x1f)) + uVar11) * 4
                        );
      if (uVar11 < uVar14) {
        plVar2 = (longlong *)param_1[2];
        puVar3 = (uint *)*plVar2;
        *plVar2 = (longlong)(puVar3 + (int)plVar2[1]);
        *puVar3 = uVar11;
        uVar14 = *(uint *)(lVar15 + (longlong)(int)uVar11 * 4);
        plVar2 = (longlong *)param_1[3];
        puVar3 = (uint *)*plVar2;
        *plVar2 = (longlong)(puVar3 + (int)plVar2[1]);
        *puVar3 = uVar14;
        plVar2 = (longlong *)param_1[4];
        if ((longlong)(int)plVar2[1] < 1) {
          return;
        }
        lVar15 = 0;
        bVar8 = 0xf;
        iVar12 = 0;
        uVar11 = 0;
        goto LAB_143903b9c;
      }
      break;
    }
    uVar11 = uVar11 + iVar12;
    lVar9 = lVar9 + 1;
    uVar10 = uVar13;
  } while (lVar9 != 0x10);
  puVar4 = (undefined8 *)param_1[2];
  puVar5 = (undefined4 *)*puVar4;
  *puVar4 = puVar5 + *(int *)(puVar4 + 1);
  *puVar5 = 0xffffffff;
  puVar4 = (undefined8 *)param_1[3];
  puVar5 = (undefined4 *)*puVar4;
  *puVar4 = puVar5 + *(int *)(puVar4 + 1);
  *puVar5 = 0xffffffff;
  puVar4 = (undefined8 *)param_1[4];
  puVar5 = (undefined4 *)*puVar4;
  *puVar4 = puVar5 + *(int *)(puVar4 + 1);
  *puVar5 = 0xffffffff;
  return;
LAB_143903b9c:
  bVar7 = (byte)lVar15;
  uVar10 = 0x8000 >> (bVar7 & 0x1f);
  iVar16 = ((-0x8000 >> (bVar7 & 0x1f) & uVar14) >> (bVar8 & 0x1f)) * uVar10;
  uVar13 = *(int *)((longlong)param_2 + lVar15 * 4 + 0x10) * uVar10 + uVar11;
  if ((uVar1 < uVar13) && (iVar16 != 0)) {
    iVar12 = (iVar12 + uVar1) - ((uVar1 - uVar11 >> (bVar8 & 0x1f)) * uVar10 + uVar11);
    goto LAB_143903c4e;
  }
  uVar14 = uVar14 & 0x7fffU >> (bVar7 & 0x1f);
  lVar15 = lVar15 + 1;
  iVar12 = iVar12 + iVar16;
  bVar8 = bVar8 - 1;
  uVar11 = uVar13;
  if (lVar15 == 0x10) {
LAB_143903c4e:
    piVar6 = (int *)*plVar2;
    *plVar2 = (longlong)(piVar6 + (int)plVar2[1]);
    *piVar6 = iVar12;
    return;
  }
  goto LAB_143903b9c;
}



// FUNCTION 143903c5c FUN_143903c5c body=802 status=ok
// SIG undefined FUN_143903c5c(void)

void FUN_143903c5c(longlong param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  undefined1 auStack_3d8 [32];
  longlong *local_3b8;
  char *local_3b0;
  ulonglong local_3a8;
  int *local_3a0;
  undefined4 *local_398;
  int local_390;
  undefined1 local_388 [8];
  longlong local_380;
  undefined1 local_378 [816];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  FUN_148078098(local_388);
  if (*param_2 == '\x01') {
    iVar10 = *(int *)(param_2 + 0x30);
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar10);
    *(int *)(param_2 + 0x30) = iVar10 + 1;
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar10 * 8);
    piVar4 = (int *)(param_2 + 0x44);
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar8 = uVar1 & 0x7fff;
    lVar5 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar7 = (ulonglong)(uVar8 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70);
    }
    else {
      iVar10 = **(int **)(lVar5 + 0x20);
      lVar7 = 0;
      if (iVar10 <= (int)uVar8) {
        do {
          uVar8 = uVar8 - iVar10;
          iVar10 = (*(int **)(lVar5 + 0x20))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (iVar10 <= (int)uVar8);
      }
      lVar7 = (longlong)(int)uVar8 + *(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar7 * 8);
    }
    uVar9 = (ulonglong)(uVar1 >> 0xf);
    piVar4 = (int *)(lVar5 + 0x4c);
  }
  iVar10 = *piVar4;
  FUN_140126e42(&local_398,param_2);
  if ((param_3 < 0) || (*(int *)(local_380 + 0xb8) <= param_3)) {
    local_3b8 = (longlong *)0x0;
  }
  else {
    lVar5 = local_380 + 0x30;
    if (*(longlong *)(local_380 + 0xb0) != 0) {
      lVar5 = *(longlong *)(local_380 + 0xb0);
    }
    local_3b8 = *(longlong **)(lVar5 + (longlong)param_3 * 0x10);
  }
  FUN_148078656(local_378);
  lVar5 = *(longlong *)(local_380 + 0x10);
  local_3b0 = param_2;
  if (lVar5 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x78);
    }
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
      UNLOCK();
      if ((local_3b8 != (longlong *)0x0) && (DAT_14c76292d == '\x01')) {
        local_3a0 = (int *)(param_2 + 0x3c);
        piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar4 = local_3a0;
        }
        if (0 < *piVar4) {
          puVar11 = (uint *)(lVar7 + (longlong)iVar10 * uVar9 * 4);
          iVar10 = 0;
          local_3a8 = uVar9;
          do {
            uVar8 = *puVar11;
            uVar2 = *(uint *)(lVar5 + 0x120);
            if (uVar8 < uVar2) {
              if ((int)local_3b8[1] != 0) {
                uVar8 = *(uint *)(*local_3b8 + 4);
                    /* WARNING: Could not recover jumptable at 0x000143903e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_14ad81200 +
                          *(int *)(&DAT_14ad81200 + (ulonglong)(uVar8 >> 0x1e) * 4)))
                          (*local_3b8,0,1,uVar8 & 0x3fffffff);
                return;
              }
            }
            else {
              FUN_148078866(local_378);
            }
            if (0 < (longlong)local_390) {
              uVar6 = 0xffffffff;
              if (uVar2 <= uVar8) {
                uVar6 = 0;
              }
              *local_398 = uVar6;
              local_398 = local_398 + local_390;
            }
            puVar11 = puVar11 + local_3a8;
            iVar10 = iVar10 + 1;
            piVar4 = (int *)(*(longlong *)(local_3b0 + 0x80) + 0x40);
            if (*local_3b0 != '\0') {
              piVar4 = local_3a0;
            }
          } while (iVar10 < *piVar4);
        }
        goto LAB_143904036;
      }
    }
  }
  FUN_148078866(local_378);
  if (0 < local_390) {
    piVar4 = (int *)(*(longlong *)(local_3b0 + 0x80) + 0x40);
    if (*local_3b0 != '\0') {
      piVar4 = (int *)(param_2 + 0x3c);
    }
    memset(local_398,0,(longlong)*piVar4 << 2);
  }
LAB_143904036:
  FUN_1480789ea(local_378);
  if ((local_48 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143904098 FUN_143904098 body=1062 status=ok
// SIG undefined FUN_143904098(void)

void FUN_143904098(longlong param_1,char *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  char *local_3c0;
  ulonglong local_3b8;
  int *local_3b0;
  int *local_3a8;
  uint local_3a0;
  int local_39c;
  int *local_398;
  int local_390;
  undefined1 local_388 [8];
  longlong local_380;
  undefined1 local_378 [816];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  FUN_148078098(local_388);
  if (*param_2 == '\x01') {
    iVar14 = *(int *)(param_2 + 0x30);
    uVar10 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    piVar6 = (int *)(param_2 + 0x44);
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar13 = uVar3 & 0x7fff;
    lVar7 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar15 = (ulonglong)(uVar13 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar7 + 0x20);
      lVar15 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar7 + 0x20))[lVar15 + 1];
          lVar15 = lVar15 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar15 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar7 + 0x18) + lVar15 * 8);
    }
    uVar10 = (ulonglong)(uVar3 >> 0xf);
    piVar6 = (int *)(lVar7 + 0x4c);
  }
  iVar14 = *piVar6;
  FUN_140126e42(&local_398,param_2);
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    local_3a0 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    local_3a8 = (int *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
                       *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar13 = uVar3 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_3a8 = &local_39c;
      local_3a0 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_3a0 = 1;
      local_3a8 = (int *)((ulonglong)(uVar13 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70)
                         + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  if ((param_3 < 0) || (*(int *)(local_380 + 0xb8) <= param_3)) {
    local_3c8 = (longlong *)0x0;
  }
  else {
    lVar7 = local_380 + 0x30;
    if (*(longlong *)(local_380 + 0xb0) != 0) {
      lVar7 = *(longlong *)(local_380 + 0xb0);
    }
    local_3c8 = *(longlong **)(lVar7 + (longlong)param_3 * 0x10);
  }
  FUN_148078656(local_378,param_2);
  lVar7 = *(longlong *)(local_380 + 0x10);
  if (lVar7 != 0) {
    if ((*(char *)(param_1 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
      lVar7 = *(longlong *)(lVar7 + 0x28);
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x78);
    }
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + -1;
      UNLOCK();
      if ((local_3c8 != (longlong *)0x0) && (DAT_14c76292d == '\x01')) {
        local_3b0 = (int *)(param_2 + 0x3c);
        piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar6 = local_3b0;
        }
        if (0 < *piVar6) {
          piVar6 = (int *)(lVar15 + (longlong)iVar14 * uVar10 * 4);
          iVar14 = 0;
          plVar11 = local_3c8;
          local_3c0 = param_2;
          local_3b8 = uVar10;
          do {
            if (*piVar6 == 0) {
LAB_143904438:
              FUN_148078866(local_378,1);
              iVar5 = -1;
              iVar12 = 0;
              plVar11 = local_3c8;
            }
            else {
              LOCK();
              piVar8 = (int *)(local_380 + 0xc0);
              iVar5 = *piVar8;
              *piVar8 = *piVar8 + 1;
              UNLOCK();
              if ((iVar5 < 0) || (*(int *)(lVar7 + 0x120) <= iVar5)) {
                LOCK();
                *(int *)(local_380 + 0xc0) = *(int *)(lVar7 + 0x120);
                UNLOCK();
                goto LAB_143904438;
              }
              if ((longlong)(int)plVar11[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143904306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_14ad81220 +
                          *(int *)(&DAT_14ad81220 + (ulonglong)(*(uint *)(*plVar11 + 4) >> 0x1e) * 4
                                  )))((longlong)(int)plVar11[1] << 3,*plVar11,iVar5,1);
                return;
              }
              iVar12 = 1;
            }
            if (0 < (longlong)local_390) {
              *local_398 = -iVar12;
              local_398 = local_398 + local_390;
            }
            if (0 < (longlong)(int)local_3a0) {
              *local_3a8 = iVar5;
              local_3a8 = local_3a8 + (int)local_3a0;
            }
            piVar6 = piVar6 + local_3b8;
            iVar14 = iVar14 + 1;
            piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
            if (*param_2 != '\0') {
              piVar8 = local_3b0;
            }
          } while (iVar14 < *piVar8);
        }
        goto LAB_143904538;
      }
    }
  }
  puVar1 = (uint *)(param_2 + 0x3c);
  puVar9 = (uint *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    puVar9 = puVar1;
  }
  uVar10 = (ulonglong)*puVar9;
  FUN_148078866(local_378);
  if (0 < local_390) {
    puVar9 = (uint *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      puVar9 = puVar1;
    }
    uVar10 = 0;
    memset(local_398,0,(longlong)(int)*puVar9 << 2);
  }
  if (0 < (int)local_3a0) {
    puVar9 = (uint *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      puVar9 = puVar1;
    }
    memset(local_398,(int)CONCAT71((int7)(uVar10 >> 8),0xff),(longlong)(int)*puVar9 << 2);
  }
LAB_143904538:
  FUN_1480789ea(local_378);
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1439045de FUN_1439045de body=1874 status=ok
// SIG undefined FUN_1439045de(void)

void FUN_1439045de(ulonglong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_5a8 [40];
  ulonglong local_580;
  uint local_574;
  longlong local_570;
  longlong *local_568;
  ulonglong local_560;
  longlong *local_558;
  int local_550;
  int local_54c;
  longlong local_548;
  ulonglong local_540;
  undefined1 local_538 [8];
  longlong local_530;
  undefined1 local_520 [1200];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  FUN_148078098(local_538);
  lVar11 = *(longlong *)(local_530 + 0x118);
  if (lVar11 != 0) {
    if (((int)param_3 < 0) || (*(int *)(local_530 + 0xb8) <= (int)param_3)) {
      local_568 = (longlong *)0x0;
    }
    else {
      lVar14 = local_530 + 0x30;
      if (*(longlong *)(local_530 + 0xb0) != 0) {
        lVar14 = *(longlong *)(local_530 + 0xb0);
      }
      local_568 = *(longlong **)(lVar14 + (ulonglong)param_3 * 0x10);
    }
    if (*param_2 == 1) {
      iVar7 = *(int *)(param_2 + 0x30);
      bVar12 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
      *(int *)(param_2 + 0x30) = iVar7 + 1;
      local_570 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
      local_574 = (uint)bVar12 * *(int *)(param_2 + 0x44);
      bVar12 = 1;
    }
    else {
      puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar2 = *puVar4;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
      uVar18 = uVar2 & 0x7fff;
      lVar14 = *(longlong *)(param_2 + 0x80);
      if ((short)uVar2 < 0) {
        local_570 = (ulonglong)(uVar18 * *(int *)(lVar14 + 0x80)) + *(longlong *)(lVar14 + 0x70);
      }
      else {
        iVar7 = **(int **)(lVar14 + 0x20);
        lVar15 = 0;
        if (iVar7 <= (int)uVar18) {
          do {
            uVar18 = uVar18 - iVar7;
            iVar7 = (*(int **)(lVar14 + 0x20))[lVar15 + 1];
            lVar15 = lVar15 + 1;
          } while (iVar7 <= (int)uVar18);
        }
        local_570 = (longlong)(int)uVar18 + *(longlong *)(*(longlong *)(lVar14 + 0x18) + lVar15 * 8)
        ;
      }
      local_574 = (uint)(uVar2 >> 0xf) * *(int *)(lVar14 + 0x4c);
      bVar12 = *param_2;
    }
    if ((bVar12 & 1) == 0) {
      puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar2 = *puVar4;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
      uVar18 = uVar2 & 0x7fff;
      lVar15 = *(longlong *)(param_2 + 0x80);
      if ((short)uVar2 < 0) {
        lVar14 = (ulonglong)(uVar18 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70);
      }
      else {
        iVar7 = **(int **)(lVar15 + 0x20);
        lVar14 = 0;
        if (iVar7 <= (int)uVar18) {
          do {
            uVar18 = uVar18 - iVar7;
            iVar7 = (*(int **)(lVar15 + 0x20))[lVar14 + 1];
            lVar14 = lVar14 + 1;
          } while (iVar7 <= (int)uVar18);
        }
        lVar14 = (longlong)(int)uVar18 + *(longlong *)(*(longlong *)(lVar15 + 0x18) + lVar14 * 8);
      }
      iVar7 = (uint)(uVar2 >> 0xf) * *(int *)(lVar15 + 0x4c);
      bVar12 = *param_2;
    }
    else {
      iVar7 = *(int *)(param_2 + 0x30);
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
      *(int *)(param_2 + 0x30) = iVar7 + 1;
      lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
      iVar7 = (uint)bVar1 * *(int *)(param_2 + 0x44);
    }
    if ((bVar12 & 1) == 0) {
      puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar2 = *puVar4;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
      uVar18 = uVar2 & 0x7fff;
      lVar16 = *(longlong *)(param_2 + 0x80);
      if ((short)uVar2 < 0) {
        lVar15 = (ulonglong)(uVar18 * *(int *)(lVar16 + 0x80)) + *(longlong *)(lVar16 + 0x70);
      }
      else {
        iVar19 = **(int **)(lVar16 + 0x20);
        lVar15 = 0;
        if (iVar19 <= (int)uVar18) {
          do {
            uVar18 = uVar18 - iVar19;
            iVar19 = (*(int **)(lVar16 + 0x20))[lVar15 + 1];
            lVar15 = lVar15 + 1;
          } while (iVar19 <= (int)uVar18);
        }
        lVar15 = (longlong)(int)uVar18 + *(longlong *)(*(longlong *)(lVar16 + 0x18) + lVar15 * 8);
      }
      local_54c = (uint)(uVar2 >> 0xf) * *(int *)(lVar16 + 0x4c);
      bVar12 = *param_2;
    }
    else {
      iVar19 = *(int *)(param_2 + 0x30);
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar19);
      *(int *)(param_2 + 0x30) = iVar19 + 1;
      lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar19 * 8);
      local_54c = (uint)bVar1 * *(int *)(param_2 + 0x44);
    }
    if ((bVar12 & 1) == 0) {
      puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar2 = *puVar4;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
      uVar18 = uVar2 & 0x7fff;
      if (-1 < (short)uVar2) {
        piVar5 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
        iVar19 = *piVar5;
        lVar16 = 0;
        if (iVar19 <= (int)uVar18) {
          do {
            uVar18 = uVar18 - iVar19;
            iVar19 = piVar5[lVar16 + 1];
            lVar16 = lVar16 + 1;
          } while (iVar19 <= (int)uVar18);
        }
      }
      local_550 = (uint)(uVar2 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
      bVar12 = *param_2;
    }
    else {
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      local_550 = (uint)bVar1 * *(int *)(param_2 + 0x44);
    }
    if ((bVar12 & 1) == 0) {
      puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar2 = *puVar4;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
      uVar18 = uVar2 & 0x7fff;
      lVar13 = *(longlong *)(param_2 + 0x80);
      if ((short)uVar2 < 0) {
        lVar16 = (ulonglong)(uVar18 * *(int *)(lVar13 + 0x80)) + *(longlong *)(lVar13 + 0x70);
      }
      else {
        iVar19 = **(int **)(lVar13 + 0x20);
        lVar16 = 0;
        if (iVar19 <= (int)uVar18) {
          do {
            uVar18 = uVar18 - iVar19;
            iVar19 = (*(int **)(lVar13 + 0x20))[lVar16 + 1];
            lVar16 = lVar16 + 1;
          } while (iVar19 <= (int)uVar18);
        }
        lVar16 = (longlong)(int)uVar18 + *(longlong *)(*(longlong *)(lVar13 + 0x18) + lVar16 * 8);
      }
      iVar19 = (uint)(uVar2 >> 0xf) * *(int *)(lVar13 + 0x4c);
      bVar12 = *param_2;
    }
    else {
      iVar19 = *(int *)(param_2 + 0x30);
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar19);
      *(int *)(param_2 + 0x30) = iVar19 + 1;
      lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar19 * 8);
      iVar19 = (uint)bVar1 * *(int *)(param_2 + 0x44);
    }
    local_558 = (longlong *)(longlong)iVar7;
    if ((bVar12 & 1) == 0) {
      puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar2 = *puVar4;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
      uVar18 = uVar2 & 0x7fff;
      lVar6 = *(longlong *)(param_2 + 0x80);
      if ((short)uVar2 < 0) {
        lVar13 = (ulonglong)(uVar18 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70);
      }
      else {
        iVar7 = **(int **)(lVar6 + 0x20);
        lVar13 = 0;
        if (iVar7 <= (int)uVar18) {
          do {
            uVar18 = uVar18 - iVar7;
            iVar7 = (*(int **)(lVar6 + 0x20))[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (iVar7 <= (int)uVar18);
        }
        lVar13 = (longlong)(int)uVar18 + *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar13 * 8);
      }
      uVar18 = (uint)(uVar2 >> 0xf);
      pbVar10 = (byte *)(lVar6 + 0x4c);
    }
    else {
      iVar7 = *(int *)(param_2 + 0x30);
      uVar18 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
      *(int *)(param_2 + 0x30) = iVar7 + 1;
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
      pbVar10 = param_2 + 0x44;
    }
    local_580 = CONCAT44(local_580._4_4_,uVar18);
    local_548 = (longlong)*(int *)pbVar10;
    local_560 = param_1;
    FUN_148078a32(local_520,param_2,local_568);
    iVar7 = *(int *)(lVar14 + (longlong)local_558 * 4);
    if (((longlong)iVar7 < 0) || (*(int *)(lVar11 + 0x110) <= iVar7)) {
      local_540 = 0;
    }
    else {
      local_540 = *(ulonglong *)(*(longlong *)(lVar11 + 0x108) + (longlong)iVar7 * 0x10);
    }
    lVar11 = *(longlong *)(local_530 + 0x10);
    if (lVar11 != 0) {
      if ((*(char *)(local_560 + 0x40) == '\0') || ((DAT_14cb36ff0 & 1) != 0)) {
        lVar11 = *(longlong *)(lVar11 + 0x28);
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x20) + 0x78);
      }
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
        UNLOCK();
        if (DAT_14c76292d == '\x01') {
          uVar18 = *(uint *)(lVar11 + 0x120);
          uVar20 = (ulonglong)uVar18;
          if ((((local_540 != 0 && uVar20 != 0) && (*(int *)(local_540 + 0xd4) == 0)) &&
              (*(int *)(local_570 + (longlong)(int)local_574 * 4) != 0)) &&
             (uVar3 = *(uint *)(lVar15 + (longlong)local_54c * 4), uVar3 < 2)) {
            iVar7 = *(int *)(lVar16 + (longlong)iVar19 * 4);
            uVar17 = 0;
            if (iVar7 < 1) {
              iVar7 = 0;
            }
            iVar19 = *(int *)(lVar13 + local_548 * (local_580 & 0xffffffff) * 4);
            uVar8 = ((uint)(local_540 >> 0x14) & 0xffff ^ (uint)(local_540 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar11 = FUN_14808b838(local_530 + 200,uVar8 >> 0x10 ^ uVar8,&local_540);
            local_558 = (longlong *)(lVar11 + 0x50);
            FUN_148078c6e(local_558,uVar20);
            if (0 < (int)uVar18) {
              if (iVar19 < 1) {
                iVar19 = 0;
              }
              local_570 = CONCAT44(local_570._4_4_,iVar7);
              local_574 = uVar3;
              local_560 = uVar20;
              do {
                local_580 = uVar17;
                if (local_568 == (longlong *)0x0) {
                  FUN_14807af6a();
                }
                else if ((int)local_568[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143904c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_14ad81230 +
                            *(int *)(&DAT_14ad81230 +
                                    (ulonglong)(*(uint *)(*local_568 + 4) >> 0x1e) * 4)))
                            (local_520,
                             &DAT_14ad81230 +
                             *(int *)(&DAT_14ad81230 +
                                     (ulonglong)(*(uint *)(*local_568 + 4) >> 0x1e) * 4));
                  return;
                }
                FUN_148078cdc(local_520);
                if (*param_2 == 0) {
                  lVar11 = *(longlong *)(param_2 + 0x80) + 0x88;
                }
                else {
                  lVar11 = *(longlong *)(param_2 + 0x58);
                }
                uVar18 = *(int *)(lVar11 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar11 + 4) = uVar18;
                iVar9 = (int)(((float)(uVar18 >> 9 | 0x3f800000) + -1.0) *
                             (float)((iVar19 - iVar7) + 1)) + iVar7;
                if ((uVar3 & 1) != 0) {
                  iVar9 = iVar9 + *(int *)(*local_558 + local_580 * 8);
                }
                *(int *)(*local_558 + local_580 * 8) = iVar9;
                uVar17 = local_580 + 1;
              } while (uVar17 != uVar20);
            }
          }
        }
      }
    }
    FUN_148078d90(local_520);
  }
  if ((local_70 ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143904fc4 FUN_143904fc4 body=69 status=ok
// SIG undefined FUN_143904fc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143904fc4(void)

{
  _DAT_14cb37478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143905006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb37480,1);
  return;
}



// FUNCTION 143905009 FUN_143905009 body=69 status=ok
// SIG undefined FUN_143905009(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143905009(void)

{
  _DAT_14cb37488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014390504b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb37490,1);
  return;
}



// FUNCTION 143905094 FUN_143905094 body=1253 status=ok
// SIG undefined FUN_143905094(void)

void FUN_143905094(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14807a2bc(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_1439054d4;
    if (iVar7 != 1) goto LAB_1439050ec;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1439054d4;
  }
  else {
LAB_1439050ec:
    if (iVar7 == 0x10) goto LAB_1439054d4;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_1439054d4:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1439054d4;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143905259;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14390a065);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143905259:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_1439052d9;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1439052d9:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad80840;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ad80820;
    local_68[0] = &LAB_14390c7a2;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cb37d8c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14390558e FUN_14390558e body=1714 status=ok
// SIG undefined FUN_14390558e(void)

ulonglong FUN_14390558e(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 unaff_RBP;
  undefined7 uVar15;
  ulonglong uVar14;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  uint *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar15 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar14 = CONCAT71(uVar15,1);
  if ((param_2 == (uint *)0x0) || (DAT_14c76292d == '\0')) goto LAB_143905a83;
  param_2[0x2e] = 0;
  LOCK();
  param_2[0x2c] = 0;
  UNLOCK();
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x31] = *(uint *)(param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x2f) = *(undefined8 *)(param_3 + 0xc);
  if ((*(char *)(param_1 + 0x48) != '\0') ||
     ((*(char *)(param_1 + 0x49) != '\0' || (*(char *)(param_1 + 0x4a) == '\x01')))) {
    if ((param_2[1] == 0) ||
       (((((uVar6 = *param_2, (int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
          (plVar10 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          plVar10 == (longlong *)0x0)) ||
         ((*(uint *)(plVar10 + 2) != param_2[1] || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0))))
        || (plVar10 = (longlong *)*plVar10, plVar10 == (longlong *)0x0)))) {
      lVar7 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
      if (lVar7 == 0) goto LAB_143905a39;
      uVar14 = CONCAT71(uVar15,1);
      if ((*(longlong *)(param_1 + 0x50) == 0) ||
         (plVar10 = (longlong *)
                    FUN_1481153e0(*(undefined8 *)(lVar7 + 0x1c78),
                                  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28)),
         plVar10 == (longlong *)0x0)) goto LAB_143905a83;
      uVar6 = *(uint *)((longlong)plVar10 + 0xc);
      *param_2 = uVar6;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar6 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar13 = DAT_14c964868 + 1;
        uVar14 = (ulonglong)uVar13;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar14);
        }
        LOCK();
        uVar6 = *(uint *)(lVar7 + 0x10);
        bVar17 = uVar6 == 0;
        if (bVar17) {
          *(uint *)(lVar7 + 0x10) = uVar13;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar17) {
          uVar6 = uVar13;
        }
      }
      param_2[1] = uVar6;
    }
    if (((*(longlong *)(param_2 + 2) == 0) ||
        (cVar5 = FUN_148114dd6(*(longlong *)(param_2 + 2),plVar10), cVar5 == '\0')) ||
       (*(char *)(param_1 + 0x4b) == '\x01')) {
      if ((((*(int *)(param_3 + 0x4c) == 0) || (uVar6 = *(uint *)(param_3 + 0x48), (int)uVar6 < 0))
          || ((DAT_14c9647dc <= (int)uVar6 ||
              ((plVar11 = (longlong *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
               plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_3 + 0x4c))))))) ||
         ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) {
        local_58 = DAT_14c8464f0;
        local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_a0 = 0;
      }
      else {
        lVar7 = *plVar11;
        if (lVar7 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar7);
        }
        local_58 = DAT_14c8464f0;
        local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_a0 = lVar7;
        if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar7);
        }
      }
      local_88 = local_58;
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (undefined4)uStack_60;
      uStack_8c = uStack_60._4_4_;
      local_80 = 0;
      (**(code **)(*plVar10 + 0x2c8))(plVar10,&local_78,&local_a0,1);
      plVar11 = local_70;
      if (param_2 + 2 != (uint *)&local_78) {
        *(undefined8 *)(param_2 + 2) = local_78;
        local_78 = 0;
        plVar3 = *(longlong **)(param_2 + 4);
        if (local_70 != plVar3) {
          local_70 = (longlong *)0x0;
          *(longlong **)(param_2 + 4) = plVar11;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar3 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
      plVar11 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_70)(local_70);
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
    lVar7 = *(longlong *)(param_2 + 2);
    if ((lVar7 != 0) && (*(char *)(param_1 + 0xbc) == '\x01')) {
      if (*(longlong *)(lVar7 + 0x20) == 0) {
        param_2[0x32] = 0;
        param_2[0x33] = 0;
      }
      else {
        lVar7 = FUN_1481b9708();
        *(longlong *)(param_2 + 0x32) = lVar7;
        if (((lVar7 != 0) && (*(char *)(param_1 + 0x40) == '\0')) &&
           ((FUN_14009337e(lVar7,*(undefined4 *)(param_1 + 0x44),0), DAT_14c7627dc == 2 ||
            ((DAT_14c7627dc == 1 && (*(char *)(param_1 + 0xc0) == '\x01')))))) {
          lVar7 = *(longlong *)(param_2 + 0x32);
          if (*(void **)(lVar7 + 0x18) != (void *)0x0) {
            memset(*(void **)(lVar7 + 0x18),0,(longlong)*(int *)(lVar7 + 0x20));
          }
          if (*(void **)(lVar7 + 0x28) != (void *)0x0) {
            memset(*(void **)(lVar7 + 0x28),0,(longlong)*(int *)(lVar7 + 0x30));
          }
          if (*(void **)(lVar7 + 0x38) != (void *)0x0) {
            memset(*(void **)(lVar7 + 0x38),0,(longlong)*(int *)(lVar7 + 0x40));
          }
        }
      }
    }
    if (*(int *)((longlong)plVar10 + 0x2c) == 0) {
LAB_143905bbe:
      uVar8 = 0;
    }
    else {
      uVar6 = *(uint *)(plVar10 + 5);
      uVar8 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar9 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar9 == (undefined8 *)0x0) ||
           ((*(int *)(puVar9 + 2) != *(int *)((longlong)plVar10 + 0x2c) ||
            ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143905bbe;
        uVar8 = *puVar9;
      }
    }
    FUN_148112dec(uVar8,&local_68);
    plVar11 = uStack_60;
    lVar7 = local_68;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = uStack_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (*(int *)((longlong)plVar10 + 0x2c) == 0) {
LAB_143905bc5:
      uVar8 = 0;
    }
    else {
      uVar6 = *(uint *)(plVar10 + 5);
      uVar8 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar9 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar9 == (undefined8 *)0x0) ||
           ((*(int *)(puVar9 + 2) != *(int *)((longlong)plVar10 + 0x2c) ||
            ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143905bc5;
        uVar8 = *puVar9;
      }
    }
    FUN_148112dec(uVar8,&local_68);
    plVar10 = uStack_60;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = uStack_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    uVar6 = FUN_148073748(lVar7 + 0x10);
    if (*(ulonglong *)(param_2 + 6) != (ulonglong)uVar6) {
      *(ulonglong *)(param_2 + 6) = (ulonglong)uVar6;
      *(undefined1 *)(param_2 + 0x2d) = *(undefined1 *)(param_1 + 0xbd);
      iVar2 = *(int *)(param_1 + 0x60);
      local_a8 = param_2 + 8;
      FUN_1480770b0(local_a8,iVar2);
      if (0 < (longlong)iVar2) {
        local_b0 = (longlong)iVar2 * 0x28;
        lVar16 = 8;
        uVar14 = 0;
        do {
          lVar4 = *(longlong *)(param_1 + 0x58);
          puVar12 = *(uint **)(param_2 + 0x28);
          uVar8 = FUN_148073c5c();
          FUN_148073d58(uVar8,&local_68,lVar4 + uVar14,lVar7 + 0x10);
          plVar10 = uStack_60;
          if (puVar12 == (uint *)0x0) {
            puVar12 = local_a8;
          }
          *(longlong *)((longlong)puVar12 + lVar16 + -8) = local_68;
          local_68 = 0;
          plVar11 = *(longlong **)((longlong)puVar12 + lVar16);
          if (uStack_60 == plVar11) {
LAB_143905b7e:
            plVar10 = uStack_60;
            if (uStack_60 != (longlong *)0x0) {
              LOCK();
              plVar11 = uStack_60 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*uStack_60)(uStack_60);
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
          else {
            uStack_60 = (longlong *)0x0;
            *(longlong **)((longlong)puVar12 + lVar16) = plVar10;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar11 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
              goto LAB_143905b7e;
            }
          }
          uVar14 = uVar14 + 0x28;
          lVar16 = lVar16 + 0x10;
        } while (local_b0 != uVar14);
      }
    }
  }
LAB_143905a39:
  uVar6 = *(uint *)(param_1 + 0x60);
  uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
  if (uVar6 == param_2[0x2a]) {
    puVar12 = param_2 + 8;
    if (*(uint **)(param_2 + 0x28) != (uint *)0x0) {
      puVar12 = *(uint **)(param_2 + 0x28);
    }
    if (uVar6 == 0) {
      uVar14 = 0;
    }
    else {
      lVar7 = 0;
      do {
        bVar17 = *(longlong *)((longlong)puVar12 + lVar7) == 0;
        uVar14 = CONCAT71((int7)(uVar14 >> 8),bVar17);
        if (bVar17) break;
        bVar17 = (longlong)(int)uVar6 * 0x10 + -0x10 != lVar7;
        lVar7 = lVar7 + 0x10;
      } while (bVar17);
    }
  }
LAB_143905a83:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 143905c42 FUN_143905c42 body=556 status=ok
// SIG undefined FUN_143905c42(void)

ulonglong FUN_143905c42(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_70 [2];
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_54;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = uVar6;
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 200) + 0x124);
    if (*(uint *)(param_1 + 0xb0) < uVar7) {
      uVar7 = *(uint *)(param_1 + 0xb0);
    }
    *(uint *)(*(longlong *)(param_1 + 200) + 0x120) = uVar7;
    if (DAT_14cb37474 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 200);
      local_38 = 0;
      if (*(longlong *)(param_2 + 0x50) == 0) {
        local_70[0] = 0;
      }
      else {
        local_70[0] = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x18);
      }
      FUN_1400021e4(local_70,&local_48);
      puVar8 = local_48;
      if (local_40 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      FUN_140002266(local_70,L"=== Data Channle Write: %d Elements --> %s ===",
                    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120),puVar8);
      local_78 = &local_38;
      FUN_143a774ea(uVar3,0,*(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120),local_70);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (((*(longlong *)(param_1 + 8) != 0) &&
        (((*(char *)(param_2 + 0x48) != '\0' || (*(char *)(param_2 + 0x49) != '\0')) ||
         (*(char *)(param_2 + 0x4a) == '\x01')))) &&
       (lVar4 = *(longlong *)(param_1 + 200), *(int *)(lVar4 + 0x120) != 0)) {
      LOCK();
      if (*(int *)(lVar4 + 8) == -1) {
        *(int *)(lVar4 + 8) = 1;
      }
      UNLOCK();
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
        UNLOCK();
      }
      uStack_59 = 0;
      uStack_60 = 0;
      local_70[1] = 0;
      uStack_58 = *(undefined1 *)(param_2 + 0x48);
      uStack_57 = *(undefined1 *)(param_2 + 0x49);
      uStack_56 = *(undefined1 *)(param_2 + 0x4a);
      local_4c = *(undefined4 *)(param_3 + 0x14);
      local_54 = *(undefined8 *)(param_3 + 0xc);
      local_70[0] = lVar4;
      FUN_143a07162(*(undefined8 *)(param_1 + 8),local_70);
      plVar5 = (longlong *)CONCAT17(uStack_59,uStack_60);
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
      if (local_70[0] != 0) {
        LOCK();
        *(int *)(local_70[0] + 8) = *(int *)(local_70[0] + 8) + -1;
        UNLOCK();
      }
    }
    LOCK();
    uVar7 = *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xb0) = 0;
    uVar6 = (ulonglong)uVar7;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143905e70 FUN_143905e70 body=1542 status=ok
// SIG undefined FUN_143905e70(void)

longlong FUN_143905e70(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = FUN_14807a5e9(param_2);
  lVar19 = param_1 + -0x38;
  if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar19);
  }
  *(longlong *)(lVar10 + 0x58) = lVar19;
  lVar19 = *(longlong *)(param_3 + 0x100);
  *(longlong *)(lVar10 + 0x60) = lVar19;
  lVar4 = *(longlong *)(param_1 + -0x10);
  if (lVar4 == 0) goto LAB_143906046;
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar16 + 0xc60);
  iVar5 = (int)((ulonglong)lVar19 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143905ef6;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143905eff;
      goto LAB_143905fa3;
    }
  }
  else {
LAB_143905ef6:
    if (iVar7 != 0x10) {
LAB_143905fa3:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar16 + 0xc60), iVar7 == 2)) {
LAB_1439063d3:
          if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
            lVar16 = lVar4 + 0x48;
            if (*(longlong *)(lVar4 + 0x50) != 0) {
              lVar16 = *(longlong *)(lVar4 + 0x50);
            }
            iVar7 = *(int *)(lVar16 + (ulonglong)
                                      (*(int *)(lVar4 + 0x58) - 1U & (int)lVar19 + iVar5 * 0x17) * 4
                            );
            if (iVar7 != -1) {
              do {
                lVar16 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 0xe0;
                if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 0xe0) == lVar19)
                goto LAB_14390643f;
                iVar7 = *(int *)(lVar16 + 0xd8);
              } while (iVar7 != -1);
            }
          }
          goto LAB_143906046;
        }
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1439063d3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14390610f;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14390a065);
          }
          lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar16 + 0x310);
          *(undefined8 *)(lVar16 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14390610f:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar17 <= puVar12 + 0x4000) break;
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
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x17);
            uVar14 = 0;
            if (puVar17 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14390618f;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14390618f:
        *(uint **)(puVar12 + 0x10) = puVar17;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14ad808a8;
        puVar18[0x15] = lVar4;
        puVar18[0x16] = lVar19;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar7 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar19 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar19 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar19 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad80850;
        local_78[0] = &LAB_14390c97a;
        local_50 = lVar4;
        local_48 = lVar19;
        FUN_14005a792(&DAT_14ca9a440,L"NDISimCacheGPUBeginWrite",&DAT_14cb37d90);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar15 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar15 = &local_58;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_143906046;
    }
  }
LAB_143905eff:
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar16 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar16 = *(longlong *)(lVar4 + 0x50);
    }
    iVar7 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar4 + 0x58) - 1U & (int)lVar19 + iVar5 * 0x17)
                              * 4);
    if (iVar7 != -1) {
      do {
        lVar16 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 0xe0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 0xe0) == lVar19)
        goto LAB_14390643f;
        iVar7 = *(int *)(lVar16 + 0xd8);
      } while (iVar7 != -1);
    }
  }
LAB_143906046:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14390643f:
  if ((lVar16 + 8U & 0xfffffffffffffff7) != 0) {
    *(undefined1 *)(lVar16 + 0xc4) = 1;
  }
  goto LAB_143906046;
}



// FUNCTION 143906478 FUN_143906478 body=1534 status=ok
// SIG undefined FUN_143906478(void)

undefined8 FUN_143906478(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_14390649a;
  lVar10 = FUN_145b10258();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
      != lVar10 + 0x30)) goto LAB_14390649a;
  if ((*(longlong *)(param_2 + 0x58) == 0) ||
     (lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x28), lVar10 == 0))
  goto LAB_143906664;
  lVar4 = *(longlong *)(param_2 + 0x60);
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar16 + 0xc60);
  iVar5 = (int)((ulonglong)lVar4 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143906529;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143906532;
      goto LAB_1439065c5;
    }
  }
  else {
LAB_143906529:
    if (iVar7 != 0x10) {
LAB_1439065c5:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar16 + 0xc60), iVar7 == 2)) {
LAB_1439069d3:
          if (*(int *)(lVar10 + 0x18) != *(int *)(lVar10 + 0x44)) {
            lVar16 = lVar10 + 0x48;
            if (*(longlong *)(lVar10 + 0x50) != 0) {
              lVar16 = *(longlong *)(lVar10 + 0x50);
            }
            iVar7 = *(int *)(lVar16 + (ulonglong)
                                      (*(int *)(lVar10 + 0x58) - 1U & (int)lVar4 + iVar5 * 0x17) * 4
                            );
            if (iVar7 != -1) {
              do {
                lVar16 = *(longlong *)(lVar10 + 0x10) + (longlong)iVar7 * 0xe0;
                if (*(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar7 * 0xe0) == lVar4)
                goto LAB_143906a3f;
                iVar7 = *(int *)(lVar16 + 0xd8);
              } while (iVar7 != -1);
            }
          }
          goto LAB_143906664;
        }
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1439069d3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14390670f;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14390a065);
          }
          lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar16 + 0x310);
          *(undefined8 *)(lVar16 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14390670f:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar17 <= puVar12 + 0x4000) break;
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
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x17);
            uVar14 = 0;
            if (puVar17 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14390678f;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14390678f:
        *(uint **)(puVar12 + 0x10) = puVar17;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14ad808e0;
        puVar18[0x15] = lVar10;
        puVar18[0x16] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar7 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar6 = 1;
          if ((char)uVar19 != '\x06') {
            uVar6 = uVar19;
          }
          uVar19 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad808c0;
        local_78[0] = &LAB_14390cbfe;
        local_50 = lVar10;
        local_48 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"NDISimCacheGPUBeginWrite",&DAT_14cb37d94);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar15 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar15 = &local_58;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_143906664;
    }
  }
LAB_143906532:
  if (*(int *)(lVar10 + 0x18) != *(int *)(lVar10 + 0x44)) {
    lVar16 = lVar10 + 0x48;
    if (*(longlong *)(lVar10 + 0x50) != 0) {
      lVar16 = *(longlong *)(lVar10 + 0x50);
    }
    iVar7 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar10 + 0x58) - 1U & (int)lVar4 + iVar5 * 0x17)
                              * 4);
    if (iVar7 != -1) {
      do {
        lVar16 = *(longlong *)(lVar10 + 0x10) + (longlong)iVar7 * 0xe0;
        if (*(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar7 * 0xe0) == lVar4)
        goto LAB_143906a3f;
        iVar7 = *(int *)(lVar16 + 0xd8);
      } while (iVar7 != -1);
    }
  }
  goto LAB_143906664;
LAB_143906a3f:
  if ((lVar16 + 8U & 0xfffffffffffffff7) != 0) {
    *(undefined1 *)(lVar16 + 0xc4) = 0;
  }
LAB_143906664:
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
LAB_14390649a:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143906a78 FUN_143906a78 body=3010 status=ok
// SIG undefined FUN_143906a78(void)

/* WARNING: Removing unreachable block (ram,0x000143906bda) */

ulonglong FUN_143906a78(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined1 *puVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  wchar_t *pwVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) == 0)) {
    pwVar18 = L"Missing data channel asset for data channel writer DI";
LAB_143906b68:
    FUN_140056680(&local_88,pwVar18);
    iVar5 = *(int *)(param_6 + 0x10);
    *(uint *)(param_6 + 0x10) = iVar5 + 1U;
    if (*(uint *)(param_6 + 0x14) < iVar5 + 1U) {
      FUN_1447a1bd6((longlong *)(param_6 + 8),iVar5);
    }
    lVar11 = *(longlong *)(param_6 + 8);
    lVar8 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar11 + lVar8) = 0;
    *(undefined1 **)(lVar11 + lVar8) = local_88;
    local_88 = (undefined1 *)0x0;
    *(undefined4 *)(lVar11 + 8 + lVar8) = (undefined4)uStack_80;
    *(undefined4 *)(lVar11 + 0xc + lVar8) = uStack_80._4_4_;
    uStack_80 = (longlong *)0x0;
  }
  else {
    if (param_5 == 0) {
      pwVar18 = L"Missing per instance data for data channel writer DI";
      goto LAB_143906b68;
    }
    lVar11 = *(longlong *)(param_4 + 0x30);
    if (lVar11 == 0) {
      pwVar18 = L"Missing world for data channel writer DI\'s System Instace.";
      goto LAB_143906b68;
    }
    if (param_2 != 0) {
      lVar8 = FUN_145b10258();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
        FUN_1400bbfc4(&local_88,*(undefined8 *)(param_1 + 0x18));
        *(undefined4 *)(param_2 + 0x38) = (undefined4)local_88;
        *(undefined4 *)(param_2 + 0x3c) = local_88._4_4_;
        *(undefined4 *)(param_2 + 0x40) = (undefined4)uStack_80;
        *(undefined4 *)(param_2 + 0x44) = uStack_80._4_4_;
        if ((undefined8 *)(param_2 + 0x38) == &local_88) {
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_2 + 0x48) != 0) {
            FUN_1400020a8();
          }
          *(longlong **)(param_2 + 0x48) = local_78;
          local_78 = (longlong *)0x0;
          *(undefined4 *)(param_2 + 0x50) = local_70;
          *(undefined4 *)(param_2 + 0x54) = local_6c;
        }
        puVar9 = (undefined4 *)FUN_14807a67e(param_2 + 0x28);
        uVar23 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        if ((*(longlong *)(param_5 + 8) == 0) ||
           (((*(char *)(param_1 + 0x10) == '\0' && (*(char *)(param_1 + 0x11) == '\0')) &&
            (*(char *)(param_1 + 0x12) != '\x01')))) goto LAB_143906be1;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = (undefined8 *)0x0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        FUN_148112c0c(&local_c8,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
        if ((*(longlong *)(param_5 + 200) != 0) &&
           (*(int *)(*(longlong *)(param_5 + 200) + 0x120) != 0)) {
          local_d0 = *(undefined4 *)(param_4 + 0x14);
          local_d8 = *(undefined8 *)(param_4 + 0xc);
          FUN_148113a84(&local_c8);
        }
        plVar16 = *(longlong **)(lVar11 + 0x218);
        if (((plVar16 != (longlong *)0x0) &&
            (puVar10 = (undefined8 *)(**(code **)(*plVar16 + 0x420))(), puVar10 != (undefined8 *)0x0
            )) && ((lVar11 = (**(code **)*puVar10)(puVar10,&DAT_14cb3e918), lVar11 != 0 &&
                   (*(char *)(param_1 + 0x85) != '\0')))) {
          local_118 = *(longlong *)(param_1 + -0x10);
          local_e8 = (undefined4 *)0x0;
          uStack_e0 = 0;
          lStack_110 = *(longlong *)(param_4 + 0x100);
          local_108 = *(longlong *)(param_5 + 8);
          plStack_100 = *(longlong **)(param_5 + 0x10);
          if (plStack_100 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
            UNLOCK();
          }
          local_f8 = &local_e8;
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar5 = *(int *)(lVar8 + 0xc60);
          uStack_f0 = lVar11;
          if (DAT_14c86a9fc == 0) {
            if (iVar5 != 2) {
              if (iVar5 != 1) goto LAB_143906db2;
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              if (DVar6 == DVar7) goto LAB_143906dbb;
              goto LAB_143907180;
            }
LAB_143906dbb:
            FUN_14390ce82(&local_118,&DAT_14ca85100);
          }
          else {
LAB_143906db2:
            if (iVar5 == 0x10) goto LAB_143906dbb;
LAB_143907180:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
              goto LAB_143906dbb;
              if (iVar5 == 1) {
                DVar6 = FUN_140ad26c0();
                DVar7 = GetCurrentThreadId();
                if (DVar6 == DVar7) goto LAB_143906dbb;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar10 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar14 = (uint *)*puVar10;
              if (puVar14 != (uint *)0x0) goto LAB_14390726b;
              do {
                uVar28 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar28 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar28 | 1;
                  __tlregdtor(&LAB_14390a065);
                }
                lVar11 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar13 = *(undefined4 **)(lVar11 + 0x310);
                *(undefined8 *)(lVar11 + 0x310) = 0;
                if (puVar13 == (undefined4 *)0x0) {
                  puVar13 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar13 = 0xffffffff;
                *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
                puVar13[0x12] = 0;
                *puVar10 = puVar13;
                FUN_140217a48(puVar10);
                puVar14 = (uint *)*puVar10;
LAB_14390726b:
                uVar24 = *(longlong *)(puVar14 + 0x10) + 7;
                uVar28 = puVar14[0x12];
                while( true ) {
                  puVar12 = (undefined8 *)(uVar24 & 0xfffffffffffffff8);
                  if (puVar12 + 0x1b <= puVar14 + 0x4000) {
                    *(undefined8 **)(puVar14 + 0x10) = puVar12 + 0x1b;
                    puVar14[0x12] = uVar28 + 1;
                    iVar5 = 0;
                    FUN_1447247dc(puVar12,0);
                    *puVar12 = &PTR_FUN_14ad80948;
                    puVar12[0x15] = local_118;
                    puVar12[0x16] = lStack_110;
                    puVar12[0x17] = local_108;
                    puVar12[0x18] = plStack_100;
                    local_108 = 0;
                    plStack_100 = (longlong *)0x0;
                    *(undefined4 *)(puVar12 + 0x19) = (undefined4)local_f8;
                    *(undefined4 *)((longlong)puVar12 + 0xcc) = local_f8._4_4_;
                    *(undefined4 *)(puVar12 + 0x1a) = (undefined4)uStack_f0;
                    *(undefined4 *)((longlong)puVar12 + 0xd4) = uStack_f0._4_4_;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar28 = DAT_14c7585c8 >> 10 & 3;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
                        uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
                        iVar5 = 0;
                      }
                      else {
                        uVar24 = 2;
                      }
                    }
                    else {
                      iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                      uVar24 = 5;
                    }
                    if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
                    }
                    puVar12[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar12[9] = puVar12;
                    puVar12[10] = puVar12;
                    lVar11 = *(longlong *)
                              (*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x2b8);
                    if (lVar11 == 0) {
                      uVar26 = 1;
                      if ((char)uVar24 != '\x06') {
                        uVar26 = uVar24;
                      }
                      uVar24 = uVar26;
                      uVar15 = 0;
                    }
                    else {
                      if ((char)uVar24 == '\x06') {
                        uVar24 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
                      }
                      uVar15 = *(undefined8 *)(lVar11 + 0x30);
                    }
                    puVar12[0xf] = uVar15;
                    puVar12[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
                    *(int *)((longlong)puVar12 + 0x1c) = iVar5;
                    if (puVar12 == (undefined8 *)0x0) {
                      local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
                      FUN_1447439e4(0);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                      UNLOCK();
                      local_88 = (undefined1 *)CONCAT71(local_88._1_7_,1);
                      FUN_1447439e4(puVar12);
                      LOCK();
                      piVar2 = (int *)(puVar12 + 1);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)*puVar12)(puVar12,1);
                      }
                    }
                    goto LAB_143906dcc;
                  }
                  *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
                  LOCK();
                  uVar19 = *puVar14;
                  *puVar14 = *puVar14 + uVar28 + 1;
                  UNLOCK();
                  if ((uVar19 ^ uVar28) != 0xffffffff) break;
                  puVar14 = (uint *)*puVar10;
                  *puVar14 = 0xffffffff;
                  *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
                  puVar14[0x12] = 0;
                  *puVar10 = puVar14;
                  uVar24 = (longlong)puVar14 + 0x5f;
                  uVar28 = 0;
                }
              } while( true );
            }
            local_88 = (undefined1 *)0x0;
            local_78 = (longlong *)0x0;
            local_78 = (longlong *)FUN_14001cc68(0x38,8);
            *local_78 = (longlong)&PTR_LAB_14ad808f0;
            local_78[1] = local_118;
            local_78[2] = lStack_110;
            local_78[3] = local_108;
            local_78[4] = (longlong)plStack_100;
            local_108 = 0;
            plStack_100 = (longlong *)0x0;
            *(undefined4 *)(local_78 + 5) = (undefined4)local_f8;
            *(undefined4 *)((longlong)local_78 + 0x2c) = local_f8._4_4_;
            *(undefined4 *)(local_78 + 6) = (undefined4)uStack_f0;
            *(undefined4 *)((longlong)local_78 + 0x34) = uStack_f0._4_4_;
            if (local_78 + 1 != (longlong *)0x0) {
              local_88 = &LAB_14390d106;
            }
            local_138 = &local_88;
            FUN_14005a792(&DAT_14ca9a440,L"NDISimCacheGPUWriteFrame");
            if (local_88 != (undefined1 *)0x0) {
              plVar16 = local_78;
              if (local_78 == (longlong *)0x0) {
                plVar16 = local_68;
              }
              (**(code **)(*plVar16 + 0x10))();
            }
          }
LAB_143906dcc:
          plVar16 = plStack_100;
          if (plStack_100 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_100 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_100)(plStack_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar16 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          FUN_14080c2b4();
          local_130 = local_e8;
          lVar11 = (longlong)(int)uStack_e0;
          uVar24 = 0;
          if (lVar11 != 0) {
            lVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_5 + 8) + 0x20) == 0) {
                lVar27 = 0;
              }
              else {
                lVar27 = FUN_1481b9708();
              }
              FUN_1481bb948(*(undefined8 *)((longlong)local_130 + lVar8),lVar27);
              local_120 = *(undefined4 *)(param_4 + 0x14);
              local_128 = *(undefined8 *)(param_4 + 0xc);
              LOCK();
              if (*(int *)(lVar27 + 8) == -1) {
                *(int *)(lVar27 + 8) = 1;
              }
              UNLOCK();
              FUN_148113a84(&local_c8,lVar27);
              if (lVar27 != 0) {
                LOCK();
                *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + -1;
                UNLOCK();
              }
              lVar8 = lVar8 + 0x10;
            } while (lVar11 * 0x10 != lVar8);
            uVar24 = uStack_e0 & 0xffffffff;
          }
          local_130 = local_e8;
          FUN_14808d4e3(local_e8,uVar24);
          if (local_e8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
        }
        *puVar9 = (undefined4)local_a8;
        if ((longlong)(int)uStack_b0 != 0) {
          local_130 = puVar9 + 2;
          lVar11 = (longlong)(int)uStack_b0 * 0x28;
          puVar10 = local_b8;
          do {
            puVar12 = (undefined8 *)FUN_14807a6ba(local_130);
            *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar10 + 4);
            if (puVar10 != puVar12) {
              iVar5 = *(int *)(puVar10 + 1);
              _Src = (void *)*puVar10;
              *(int *)(puVar12 + 1) = iVar5;
              if (iVar5 == 0 && *(int *)((longlong)puVar12 + 0xc) == 0) {
                *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
              }
              else {
                FUN_1447a127e(puVar12,iVar5);
                if (iVar5 != 0) {
                  memcpy((void *)*puVar12,_Src,(longlong)iVar5);
                }
              }
            }
            puVar10 = puVar10 + 5;
            lVar11 = lVar11 + -0x28;
          } while (lVar11 != 0);
        }
        FUN_148112dec(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
        plVar16 = uStack_80;
        puVar4 = local_88;
        if (uStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_80)(uStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        iVar5 = *(int *)(puVar4 + 200);
        if (iVar5 == 0) {
          uVar25 = 1;
          uVar24 = 0;
          iVar17 = 0;
          iVar22 = 0;
        }
        else {
          puVar14 = *(uint **)(puVar4 + 0xc0);
          if (*(uint **)(puVar4 + 0xc0) == (uint *)0x0) {
            puVar14 = (uint *)(puVar4 + 0xb0);
          }
          uVar28 = *puVar14;
          if (uVar28 == 0) {
            iVar17 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar17 = iVar5 + -1;
            }
            uVar24 = 0;
            uVar26 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar26 = uVar24;
            }
            iVar17 = 0;
            do {
              if (uVar26 == uVar24) goto LAB_14390702b;
              iVar17 = iVar17 + 0x20;
              uVar28 = puVar14[uVar24 + 1];
              uVar24 = uVar24 + 1;
            } while (uVar28 == 0);
          }
          else {
            uVar24 = 0;
            iVar17 = 0;
          }
          uVar25 = (ulonglong)(-uVar28 & uVar28);
          uVar26 = uVar25 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar22 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar22) {
            iVar22 = iVar5;
          }
        }
        if (iVar22 != iVar5) {
          uVar28 = 0xffffffff;
          do {
            lVar11 = *(longlong *)(puVar4 + 0xa0);
            lVar27 = (longlong)iVar22;
            lVar8 = *(longlong *)(puVar9 + 2);
            lVar29 = (longlong)*(int *)(lVar11 + 0xc + lVar27 * 0x18) * 0x20;
            *(undefined4 *)(lVar8 + 0x1c + lVar29) = *(undefined4 *)(lVar11 + 8 + lVar27 * 0x18);
            *(undefined8 *)(lVar8 + 0x14 + lVar29) = *(undefined8 *)(lVar11 + lVar27 * 0x18);
            uVar28 = ~(uint)uVar25 & uVar28;
            puVar14 = *(uint **)(puVar4 + 0xc0);
            if (*(uint **)(puVar4 + 0xc0) == (uint *)0x0) {
              puVar14 = (uint *)(puVar4 + 0xb0);
            }
            iVar3 = *(int *)(puVar4 + 200);
            iVar22 = (int)uVar24;
            lVar11 = (longlong)iVar22;
            uVar19 = puVar14[lVar11] & uVar28;
            if (uVar19 == 0) {
              iVar20 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar20 = iVar3 + -1;
              }
              iVar20 = iVar20 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar21 = iVar20;
              if (iVar20 < iVar22) {
                iVar21 = iVar22;
              }
              if (iVar22 < iVar20) {
                lVar8 = 0;
                do {
                  uVar19 = puVar14[lVar11 + lVar8 + 1];
                  if (uVar19 != 0) {
                    uVar24 = (ulonglong)(iVar22 + (int)lVar8 + 1);
                    uVar28 = 0xffffffff;
                    goto LAB_143907105;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar8 = lVar8 + 1;
                } while (iVar21 - lVar11 != lVar8);
                uVar28 = 0xffffffff;
                lVar11 = (longlong)iVar21;
              }
              uVar24 = lVar11 + 1U & 0xffffffff;
              iVar22 = iVar3;
            }
            else {
LAB_143907105:
              uVar25 = (ulonglong)(-uVar19 & uVar19);
              uVar26 = uVar25 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar22 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar22) {
                iVar22 = iVar3;
              }
            }
          } while (iVar22 != iVar5);
        }
LAB_14390702b:
        *(undefined1 *)(puVar9 + 6) = *(undefined1 *)(param_1 + 0x10);
        *(undefined1 *)((longlong)puVar9 + 0x19) = *(undefined1 *)(param_1 + 0x11);
        *(undefined1 *)((longlong)puVar9 + 0x1a) = *(undefined1 *)(param_1 + 0x12);
        FUN_14807a6f6(&local_c8);
        goto LAB_143906be1;
      }
    }
  }
  uVar23 = 0;
LAB_143906be1:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 14390763c FUN_14390763c body=1079 status=ok
// SIG undefined FUN_14390763c(void)

ulonglong FUN_14390763c(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *local_80;
  undefined1 local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*(longlong *)(param_1 + 0x18) == 0) ||
       (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28), lVar10 == 0)) ||
      (lVar8 = FUN_1400bd118(*(undefined8 *)(param_6 + 0x30)), lVar8 == 0)) ||
     (plVar9 = (longlong *)FUN_1481153e0(*(undefined8 *)(lVar8 + 0x1c78),lVar10),
     plVar9 == (longlong *)0x0)) {
    uVar12 = 0;
    goto LAB_14390769c;
  }
  if ((((*(int *)(param_6 + 0x4c) == 0) || (uVar6 = *(uint *)(param_6 + 0x48), (int)uVar6 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar6 ||
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
        plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_6 + 0x4c))))))) ||
     ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) {
    local_b8 = DAT_14c8464f0;
    local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_c0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_98 = 0;
  }
  else {
    lVar10 = *plVar11;
    if (lVar10 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar10);
    }
    local_b8 = DAT_14c8464f0;
    local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_c0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_98 = lVar10;
    if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar10);
    }
  }
  local_80 = local_b8;
  local_90 = (undefined4)local_c8;
  uStack_8c = local_c8._4_4_;
  uStack_88 = (undefined4)uStack_c0;
  uStack_84 = uStack_c0._4_4_;
  local_78 = 0;
  (**(code **)(*plVar9 + 0x2c8))(plVar9,&local_70,&local_98,1);
  plVar11 = local_68;
  plVar9 = local_70;
  if (param_2 == 0 || local_70 == (longlong *)0x0) {
LAB_1439077d6:
    uVar12 = 0;
  }
  else {
    lVar10 = FUN_145b10258();
    if ((((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) || ((int)param_3 < 0)) ||
       (*(int *)(param_2 + 0x30) <= (int)param_3)) goto LAB_1439077d6;
    lVar10 = *(longlong *)(param_2 + 0x28);
    lVar8 = (ulonglong)param_3 * 0x20;
    puVar4 = (undefined4 *)(lVar10 + lVar8);
    local_c8 = 0;
    uStack_c0 = (longlong *)0x0;
    local_b8 = (longlong *)0x0;
    local_ac = DAT_14c846330;
    local_a4 = DAT_14c846338;
    local_b0 = *(undefined1 *)(lVar10 + 0x18 + lVar8);
    local_af = *(undefined1 *)(lVar10 + 0x19 + lVar8);
    local_ae = *(undefined1 *)(lVar10 + 0x1a + lVar8);
    local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
    local_68[1] = (longlong)&DAT_100000001;
    *local_68 = (longlong)&PTR_FUN_14ad81030;
    local_70 = local_68 + 2;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[6] = 0;
    local_68[7] = 0;
    local_68[8] = 0;
    local_68[9] = 0;
    FUN_14808d816(&local_70);
    plVar3 = local_68;
    plVar2 = local_b8;
    if (local_68 == (longlong *)0x0) {
      uStack_c0 = local_70;
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      uStack_c0 = local_70;
      if (local_68 == local_b8) {
        LOCK();
        plVar2 = local_68 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x00014390797d:
          if (iVar5 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      else {
        local_b8 = local_68;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar2 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
            plVar3 = plVar2;
            goto joined_r0x00014390797d;
          }
        }
      }
      plVar3 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_68)(local_68);
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
    plVar3 = uStack_c0;
    FUN_148112c0c(uStack_c0,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28));
    FUN_14811310e(plVar3,*puVar4);
    if (0 < (int)puVar4[4]) {
      lVar8 = 0x14;
      lVar10 = 0;
      do {
        lVar7 = *(longlong *)(puVar4 + 2);
        local_d8 = *(undefined8 *)(lVar7 + -0x14 + lVar8);
        local_d0 = *(undefined4 *)(lVar7 + -0xc + lVar8);
        FUN_1481140a2(plVar3,lVar7 + lVar8,&local_d8,*(undefined4 *)(lVar7 + -4 + lVar8));
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 0x20;
      } while (lVar10 < (int)puVar4[4]);
    }
    FUN_143a07162(plVar9,&local_c8);
    plVar9 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_c8 != 0) {
      LOCK();
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + -1;
      UNLOCK();
    }
    uVar12 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14390769c:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143907a74 FUN_143907a74 body=722 status=ok
// SIG undefined FUN_143907a74(void)

void FUN_143907a74(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148079752();
  if (*param_2 == DAT_14cb37498) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_38[2] = lVar7;
    *local_38 = &PTR_FUN_14ad80960;
    local_38[3] = param_1;
  }
  else {
    uVar5 = FUN_148073f86(param_1 + 0x58,*param_2,param_2 + 7,param_2 + 9);
    FUN_148079990();
    if (*param_2 == DAT_14cb37538) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      *local_38 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_38[2] = lVar7;
      ppuVar6 = &PTR_FUN_14ad809d0;
    }
    else {
      FUN_148079dbd();
      if (*param_2 != DAT_14cb37600) goto LAB_143907b8e;
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      *local_38 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_38[2] = lVar7;
      ppuVar6 = &PTR_FUN_14ad80a40;
    }
    local_30 = 3;
    *local_38 = ppuVar6;
    local_38[3] = param_1;
    *(undefined4 *)(local_38 + 4) = uVar5;
  }
  iVar3 = local_30;
  puVar2 = local_38;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  if ((int)param_4[1] == 0) {
LAB_143907b39:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143907b39;
    }
  }
  *param_4 = (longlong)puVar2;
  *(int *)(param_4 + 1) = iVar3;
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_143907b8e;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143907b8e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143907d48 FUN_143907d48 body=1083 status=ok
// SIG undefined FUN_143907d48(void)

void FUN_143907d48(byte *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_578 [32];
  byte *local_558;
  ulonglong local_550;
  int local_544;
  longlong local_540;
  longlong *local_538;
  ulonglong local_530;
  ulonglong local_528;
  byte *local_520;
  undefined4 *local_518;
  int local_510;
  undefined1 local_508 [8];
  longlong local_500;
  undefined1 local_4f8 [1200];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_578;
  FUN_14807aed6(local_508,param_1);
  if (*param_1 == 1) {
    iVar13 = *(int *)(param_1 + 0x30);
    uVar10 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar13);
    *(int *)(param_1 + 0x30) = iVar13 + 1;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_1 + 0x44) * uVar10;
    bVar3 = 1;
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar2 + 1;
    uVar8 = uVar1 & 0x7fff;
    uVar10 = (uint)(uVar1 >> 0xf);
    lVar6 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar1 < 0) {
      lVar9 = (ulonglong)(uVar8 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar6 + 0x20);
      lVar9 = 0;
      if (iVar13 <= (int)uVar8) {
        do {
          uVar8 = uVar8 - iVar13;
          iVar13 = (*(int **)(lVar6 + 0x20))[lVar9 + 1];
          lVar9 = lVar9 + 1;
        } while (iVar13 <= (int)uVar8);
      }
      lVar9 = (longlong)(int)uVar8 + *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar9 * 8);
    }
    iVar13 = *(int *)(lVar6 + 0x4c) * uVar10;
    bVar3 = *param_1;
  }
  if ((bVar3 & 1) == 0) {
    puVar2 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar2 + 1;
    uVar8 = uVar1 & 0x7fff;
    lVar7 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar1 < 0) {
      lVar6 = (ulonglong)(uVar8 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar7 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar8) {
        do {
          uVar8 = uVar8 - iVar5;
          iVar5 = (*(int **)(lVar7 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar8);
      }
      lVar6 = (longlong)(int)uVar8 + *(longlong *)(*(longlong *)(lVar7 + 0x18) + lVar6 * 8);
    }
    uVar11 = (ulonglong)(uVar1 >> 0xf);
    pbVar4 = (byte *)(lVar7 + 0x4c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x30);
    uVar11 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5);
    *(int *)(param_1 + 0x30) = iVar5 + 1;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8);
    pbVar4 = param_1 + 0x44;
  }
  if (((int)param_2 < 0) || (*(int *)(local_500 + 0xa8) <= (int)param_2)) {
    plVar15 = (longlong *)0x0;
  }
  else {
    lVar7 = local_500 + 0x20;
    if (*(longlong *)(local_500 + 0xa0) != 0) {
      lVar7 = *(longlong *)(local_500 + 0xa0);
    }
    plVar15 = *(longlong **)(lVar7 + (ulonglong)param_2 * 0x10);
  }
  iVar5 = *(int *)pbVar4;
  FUN_148078a32(local_4f8,param_1,plVar15);
  local_558 = param_1;
  FUN_140126e42(&local_518,param_1);
  if (((plVar15 == (longlong *)0x0) || (*(longlong *)(local_500 + 200) == 0)) ||
     (DAT_14c76292d != '\x01')) {
    bVar3 = *local_558;
    lVar9 = *(longlong *)(local_558 + 0x80);
    pbVar4 = (byte *)(lVar9 + 0x40);
    if (bVar3 != 0) {
      pbVar4 = local_558 + 0x3c;
    }
    if (0 < *(int *)pbVar4) {
      iVar13 = 0;
      do {
        if (0 < (longlong)local_510) {
          *local_518 = 0;
          bVar3 = *local_558;
          lVar9 = *(longlong *)(local_558 + 0x80);
          local_518 = local_518 + local_510;
        }
        iVar13 = iVar13 + 1;
        pbVar4 = (byte *)(lVar9 + 0x40);
        if ((bVar3 & 1) != 0) {
          pbVar4 = local_558 + 0x3c;
        }
      } while (iVar13 < *(int *)pbVar4);
    }
  }
  else {
    local_520 = local_558 + 0x3c;
    pbVar4 = (byte *)(*(longlong *)(local_558 + 0x80) + 0x40);
    if (*local_558 != 0) {
      pbVar4 = local_520;
    }
    local_538 = plVar15;
    if (0 < *(int *)pbVar4) {
      local_540 = local_500;
      piVar14 = (int *)(lVar9 + (longlong)iVar13 * 4);
      puVar12 = (uint *)(lVar6 + (longlong)iVar5 * uVar11 * 4);
      local_544 = *(int *)(*(longlong *)(local_500 + 200) + 0x124);
      local_530 = (ulonglong)uVar10;
      iVar13 = 0;
      local_550 = 0xffffffff;
      local_528 = uVar11;
      do {
        uVar10 = *puVar12;
        if ((((int)uVar10 < 0) || (*piVar14 == 0)) || (local_544 <= (int)uVar10)) {
          FUN_14807af6a(local_4f8);
          if (0 < (longlong)local_510) {
            *local_518 = 0;
            local_518 = local_518 + local_510;
          }
        }
        else {
          iVar5 = (int)local_550;
          local_550 = local_550 & 0xffffffff;
          if (iVar5 <= (int)uVar10) {
            local_550 = (ulonglong)uVar10;
          }
          if ((longlong)(int)local_538[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143907fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_14ad81298 +
                      *(int *)(&DAT_14ad81298 + (ulonglong)(*(uint *)(*local_538 + 4) >> 0x1e) * 4))
            )(1,(longlong)(int)local_538[1] << 3);
            return;
          }
          if (0 < (longlong)local_510) {
            *local_518 = 0xffffffff;
            local_518 = local_518 + local_510;
          }
        }
        puVar12 = puVar12 + local_528;
        piVar14 = piVar14 + local_530;
        iVar13 = iVar13 + 1;
        pbVar4 = (byte *)(*(longlong *)(local_558 + 0x80) + 0x40);
        if (*local_558 != 0) {
          pbVar4 = local_520;
        }
      } while (iVar13 < *(int *)pbVar4);
      uVar10 = (uint)local_550;
      if ((uVar10 != 0xffffffff) && (uVar8 = *(uint *)(local_540 + 0xb0), uVar8 <= uVar10)) {
        do {
          LOCK();
          bVar16 = uVar8 == *(uint *)(local_540 + 0xb0);
          if (bVar16) {
            *(uint *)(local_540 + 0xb0) = uVar10 + 1;
          }
          UNLOCK();
        } while ((!bVar16) && (uVar8 = *(uint *)(local_540 + 0xb0), uVar8 <= uVar10));
      }
    }
  }
  FUN_148078d90(local_4f8);
  if ((local_48 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143908296 FUN_143908296 body=1446 status=ok
// SIG undefined FUN_143908296(void)

void FUN_143908296(byte *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 unaff_XMM7 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auStack_618 [36];
  uint local_5f4;
  uint local_5f0;
  uint local_5ec;
  longlong *local_5e8;
  ulonglong local_5e0;
  longlong local_5d8;
  uint *local_5d0;
  longlong local_5c8;
  undefined4 *local_5c0;
  int local_5b8;
  undefined1 local_5b0 [8];
  longlong local_5a8;
  undefined1 local_5a0 [1200];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_618;
  FUN_14807aed6(local_5b0,param_1);
  if (*param_1 == 1) {
    iVar13 = *(int *)(param_1 + 0x30);
    uVar15 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar13);
    *(int *)(param_1 + 0x30) = iVar13 + 1;
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 8);
    pbVar7 = param_1 + 0x44;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
    uVar15 = uVar1 & 0x7fff;
    lVar11 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar1 < 0) {
      lVar16 = (ulonglong)(uVar15 * *(int *)(lVar11 + 0x80)) + *(longlong *)(lVar11 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar11 + 0x20);
      lVar16 = 0;
      if (iVar13 <= (int)uVar15) {
        do {
          uVar15 = uVar15 - iVar13;
          iVar13 = (*(int **)(lVar11 + 0x20))[lVar16 + 1];
          lVar16 = lVar16 + 1;
        } while (iVar13 <= (int)uVar15);
      }
      lVar16 = (longlong)(int)uVar15 + *(longlong *)(*(longlong *)(lVar11 + 0x18) + lVar16 * 8);
    }
    uVar15 = (uint)(uVar1 >> 0xf);
    pbVar7 = (byte *)(lVar11 + 0x4c);
  }
  if (((int)param_2 < 0) || (*(int *)(local_5a8 + 0xa8) <= (int)param_2)) {
    local_5e8 = (longlong *)0x0;
  }
  else {
    lVar11 = local_5a8 + 0x20;
    if (*(longlong *)(local_5a8 + 0xa0) != 0) {
      lVar11 = *(longlong *)(local_5a8 + 0xa0);
    }
    local_5e8 = *(longlong **)(lVar11 + (ulonglong)param_2 * 0x10);
  }
  iVar13 = *(int *)pbVar7;
  FUN_148078a32(local_5a0,param_1,local_5e8);
  FUN_140126e42(&local_5c0,param_1);
  if (((local_5e8 != (longlong *)0x0) && (*(longlong *)(local_5a8 + 200) != 0)) &&
     (DAT_14c76292d == '\x01')) {
    piVar17 = (int *)(lVar16 + (longlong)(int)(iVar13 * uVar15) * 4);
    if (uVar15 == 0) {
      if (*piVar17 != 0) {
        puVar8 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          puVar8 = (uint *)(param_1 + 0x3c);
        }
        uVar10 = *puVar8;
LAB_143908484:
        if (uVar10 != 0) {
          local_5f0 = *(uint *)(*(longlong *)(local_5a8 + 200) + 0x124);
          LOCK();
          puVar8 = (uint *)(local_5a8 + 0xb0);
          uVar6 = *puVar8;
          *puVar8 = *puVar8 + uVar10;
          UNLOCK();
          local_5d0 = (uint *)(param_1 + 0x3c);
          puVar8 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != 0) {
            puVar8 = local_5d0;
          }
          local_5f4 = uVar6;
          if (uVar10 == *puVar8) {
            if ((int)local_5e8[1] != 0) {
              puVar4 = (undefined4 *)*local_5e8;
              uVar15 = local_5f0 - uVar6;
              if (local_5f0 < uVar6) {
                uVar15 = 0;
              }
              if (uVar10 < uVar15) {
                uVar15 = uVar10;
              }
              local_5e8 = (longlong *)((ulonglong)uVar15 * 2);
              local_5d8 = (ulonglong)uVar15 * 4;
              uVar12 = (ulonglong)(uVar15 + (uVar15 == 0));
              local_5c8 = (ulonglong)uVar6 * 2 + 0xe;
              local_5e0 = (ulonglong)uVar6 * 4 + 0xc;
              local_5ec = (uint)CONCAT71((int7)(local_5e0 >> 8),1);
              pmovsxbq(unaff_XMM7,0x706);
              pmovsxbq(unaff_XMM8,0x504);
              pmovsxbq(unaff_XMM9,0x302);
              pmovsxbq(unaff_XMM10,0x100);
              pmovsxbq(unaff_XMM13,0x808);
              pmovsxbq(unaff_XMM14,0x404);
                    /* WARNING: Could not recover jumptable at 0x0001439086bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_14ad812b8 +
                        *(int *)(&DAT_14ad812b8 + (ulonglong)((uint)puVar4[1] >> 0x1e) * 4)))
                        (uVar12 - 1,uVar12 + 3,*puVar4);
              return;
            }
            if (0 < local_5b8) {
              puVar8 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
              if (*param_1 != 0) {
                puVar8 = local_5d0;
              }
              if (0 < (int)*puVar8) {
                iVar13 = 0;
                do {
                  puVar4 = local_5c0 + local_5b8;
                  *local_5c0 = 0xffffffff;
                  iVar13 = iVar13 + 1;
                  puVar8 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
                  if (*param_1 != 0) {
                    puVar8 = local_5d0;
                  }
                  local_5c0 = puVar4;
                } while (iVar13 < (int)*puVar8);
              }
            }
          }
          else if ((0 < (int)*puVar8) && (uVar6 < local_5f0)) {
            local_5e0 = (ulonglong)uVar15;
            iVar13 = 0;
            do {
              iVar2 = *piVar17;
              local_5d8 = CONCAT44(local_5d8._4_4_,iVar2);
              local_5ec = CONCAT31(local_5ec._1_3_,iVar2 != 0);
              local_5f4 = uVar6;
              if (iVar2 == 0) {
                FUN_14807af6a(local_5a0);
              }
              else if ((longlong)(int)local_5e8[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143908c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_14ad812a8 +
                          *(int *)(&DAT_14ad812a8 +
                                  (ulonglong)(*(uint *)(*local_5e8 + 4) >> 0x1e) * 4)))
                          ((longlong)(int)local_5e8[1] << 3,*local_5e8,uVar6);
                return;
              }
              if (0 < (longlong)local_5b8) {
                uVar5 = 0xffffffff;
                if ((int)local_5d8 == 0) {
                  uVar5 = 0;
                }
                *local_5c0 = uVar5;
                local_5c0 = local_5c0 + local_5b8;
              }
              iVar13 = iVar13 + 1;
              puVar8 = (uint *)(*(longlong *)(param_1 + 0x80) + 0x40);
              if (*param_1 != 0) {
                puVar8 = local_5d0;
              }
              if ((int)*puVar8 <= iVar13) break;
              uVar6 = local_5f4 + (local_5ec & 0xff);
              piVar17 = piVar17 + local_5e0;
            } while (uVar6 < local_5f0);
          }
          goto LAB_1439084eb;
        }
      }
    }
    else {
      pbVar7 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar7 = param_1 + 0x3c;
      }
      iVar13 = *(int *)pbVar7;
      if (0 < iVar13) {
        uVar10 = 0;
        piVar14 = piVar17;
        do {
          uVar10 = (uVar10 + 1) - (uint)(*piVar14 == 0);
          piVar14 = (int *)((longlong)piVar14 + (ulonglong)(uVar15 * 4));
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        goto LAB_143908484;
      }
    }
  }
  bVar9 = *param_1;
  lVar16 = *(longlong *)(param_1 + 0x80);
  pbVar7 = (byte *)(lVar16 + 0x40);
  if (bVar9 != 0) {
    pbVar7 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar7) {
    iVar13 = 0;
    do {
      if (0 < (longlong)local_5b8) {
        *local_5c0 = 0;
        bVar9 = *param_1;
        lVar16 = *(longlong *)(param_1 + 0x80);
        local_5c0 = local_5c0 + local_5b8;
      }
      iVar13 = iVar13 + 1;
      pbVar7 = (byte *)(lVar16 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar7 = param_1 + 0x3c;
      }
    } while (iVar13 < *(int *)pbVar7);
  }
LAB_1439084eb:
  FUN_148078d90(local_5a0);
  if ((local_f0 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143908e95 FUN_143908e95 body=69 status=ok
// SIG undefined FUN_143908e95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143908e95(void)

{
  _DAT_14cb37798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143908ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb377a0,1);
  return;
}



// FUNCTION 143908eda FUN_143908eda body=107 status=ok
// SIG undefined FUN_143908eda(void)

void FUN_143908eda(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x230;
  do {
    plVar1 = (longlong *)((longlong)&DAT_14cb378b0 + lVar3);
    if (*(int *)(&DAT_14cb378b8 + lVar3) == 0) {
LAB_143908f22:
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar2 = (undefined8 *)*plVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(&DAT_14cb378b8 + lVar3) = 0;
        goto LAB_143908f22;
      }
    }
    lVar3 = lVar3 + -0x18;
    if (lVar3 == -0x10) {
      return;
    }
  } while( true );
}



// FUNCTION 143908f46 FUN_143908f46 body=1264 status=ok
// SIG undefined FUN_143908f46(void)

void FUN_143908f46(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1480913ea(*(longlong *)(param_1 + 0x28) + 0x10,*(undefined8 *)(param_3 + 0x100));
  lVar4 = *(longlong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143908fae;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143908fb3;
      goto LAB_14390900b;
    }
  }
  else {
LAB_143908fae:
    if (iVar7 != 0x10) {
LAB_14390900b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143908fb3;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143908fb3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1439090e1;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14390a065);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1439090e1:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143909161;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143909161:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14ad80cf8;
        puVar17[0x15] = lVar4;
        puVar17[0x16] = uVar12;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
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
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad80ca0;
        local_78[0] = &LAB_14390d816;
        local_50 = lVar4;
        local_48 = uVar12;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIDynamicMesh_RemoveProxy",&DAT_14cb37eac);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar14 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar14 = &local_58;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143908fc2;
    }
  }
LAB_143908fb3:
  FUN_1480914a8(lVar4 + 0x60,uVar12);
LAB_143908fc2:
  FUN_148082896(param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143909438 FUN_143909438 body=1739 status=ok
// SIG undefined FUN_143909438(void)

undefined8 FUN_143909438(longlong param_1,char *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_178 [32];
  code **local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [176];
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar20 = 0;
    lVar18 = 0;
    lVar19 = 0;
    do {
      lVar15 = *(longlong *)(param_2 + 0x80);
      uVar12 = *(uint *)(lVar15 + 8 + lVar18);
      if (((((ulonglong)uVar12 == 0xffffffff) || ((int)uVar12 < 0)) ||
          (lVar14 = *(longlong *)(lVar15 + 0x10 + lVar18), *(int *)(lVar14 + 0x48) <= (int)uVar12))
         || (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x40) + (ulonglong)uVar12 * 8),
            lVar14 == 0)) {
LAB_1439094dc:
        plVar16 = (longlong *)(lVar15 + lVar19 * 0x40);
        lVar14 = 0;
      }
      else {
        lVar8 = FUN_1402d2740();
        if (*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) {
          lVar15 = *(longlong *)(param_2 + 0x80);
          goto LAB_1439094dc;
        }
        lVar15 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30) goto LAB_1439094dc;
        plVar16 = (longlong *)(lVar15 + lVar18);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar14);
        }
      }
      *plVar16 = lVar14;
      if (*(longlong *)(*(longlong *)(param_2 + 0x80) + lVar18) == 0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar20);
        if (lVar15 == 0) {
          FUN_14003fbd6();
          lVar15 = DAT_14caea080;
          if (DAT_14caea080 != 0 && DAT_14c950c29 == 1) goto LAB_143909561;
        }
        else if (DAT_14c950c29 != 0) {
LAB_143909561:
          FUN_1456cec3c(lVar15);
        }
        lVar14 = *(longlong *)(param_2 + 0x80);
        if ((lVar15 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar15);
        }
        *(longlong *)(lVar14 + lVar18) = lVar15;
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x40;
      lVar20 = lVar20 + 0x28;
    } while (lVar19 < *(int *)(param_1 + 0x58));
  }
  if (*param_2 == '\0') goto LAB_14390959d;
  *param_2 = '\0';
  local_148 = *(longlong *)(param_1 + 0x28);
  uStack_140 = *(undefined8 *)(param_2 + 8);
  FUN_148082a2a(local_138,param_2);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar18 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143909617;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14390961c;
      goto LAB_14390967f;
    }
LAB_14390961c:
    uVar9 = FUN_148091618(local_148 + 0x60,
                          (int)((ulonglong)uStack_140 >> 0x20) * 0x17 + (int)uStack_140,&uStack_140)
    ;
    FUN_14390d9ee(uVar9,&DAT_14ca85100,local_138);
  }
  else {
LAB_143909617:
    if (iVar5 == 0x10) goto LAB_14390961c;
LAB_14390967f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar18 + 0xc60), iVar5 == 2))
      goto LAB_14390961c;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14390961c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143909759;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_143909759:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(puVar17 + 0x2d);
        uVar12 = puVar11[0x12];
        if (puVar13 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar17 + 0x2d);
          uVar12 = 0;
          if (puVar13 <= puVar11 + 0x4000) {
            uVar12 = 1;
            goto LAB_1439097d9;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_1439097d9:
      *(uint **)(puVar11 + 0x10) = puVar13;
      puVar11[0x12] = uVar12;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ad80e28;
      *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_148;
      *(undefined4 *)((longlong)puVar17 + 0xac) = local_148._4_4_;
      *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_140._4_4_;
      FUN_148092024(puVar17 + 0x17,local_138);
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar5 = 0;
        }
        else {
          uVar21 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
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
      lVar18 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar18 == 0) {
        uVar4 = 1;
        if ((char)uVar21 != '\x06') {
          uVar4 = uVar21;
        }
        uVar21 = uVar4;
        uVar9 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
        }
        uVar9 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar17[0xf] = uVar9;
      puVar17[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
      if (puVar17 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
      local_88[0] = (code *)0x0;
      plVar16 = (longlong *)FUN_14001cc68(200,8);
      *plVar16 = (longlong)&PTR_LAB_14ad80dd0;
      *(undefined4 *)(plVar16 + 1) = (undefined4)local_148;
      *(undefined4 *)((longlong)plVar16 + 0xc) = local_148._4_4_;
      *(undefined4 *)(plVar16 + 2) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)plVar16 + 0x14) = uStack_140._4_4_;
      local_78 = plVar16;
      FUN_148092024(plVar16 + 3,local_138);
      if (plVar16 != (longlong *)&DAT_fffffffffffffff8) {
        local_88[0] = FUN_14390ea20;
      }
      local_158 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"FNDIDynamicMesh_UpdateData",&DAT_14cb37eb0);
      if (local_88[0] != (code *)0x0) {
        plVar16 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar16 = local_68;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
    }
  }
  FUN_148086434(local_138);
LAB_14390959d:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143909b4c FUN_143909b4c body=46 status=ok
// SIG undefined FUN_143909b4c(void)

undefined8 FUN_143909b4c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(param_1 + lVar1) != *(longlong *)(param_2 + lVar1)) ||
         (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 143909b7a FUN_143909b7a body=29 status=ok
// SIG undefined FUN_143909b7a(void)

undefined8 FUN_143909b7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143909bac FUN_143909bac body=93 status=ok
// SIG undefined FUN_143909bac(void)

void FUN_143909bac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143909c0a FUN_143909c0a body=93 status=ok
// SIG undefined FUN_143909c0a(void)

void FUN_143909c0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143909c68 FUN_143909c68 body=126 status=ok
// SIG undefined FUN_143909c68(void)

void FUN_143909c68(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7fae0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143909cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143909cee FUN_143909cee body=19 status=ok
// SIG undefined FUN_143909cee(void)

undefined1 FUN_143909cee(undefined8 param_1,undefined8 param_2)

{
  FUN_148071caa(param_2);
  return 1;
}



// FUNCTION 143909d02 FUN_143909d02 body=29 status=ok
// SIG undefined FUN_143909d02(void)

undefined8 FUN_143909d02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143909d34 FUN_143909d34 body=93 status=ok
// SIG undefined FUN_143909d34(void)

void FUN_143909d34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fb50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143909d92 FUN_143909d92 body=93 status=ok
// SIG undefined FUN_143909d92(void)

void FUN_143909d92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fb50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143909df0 FUN_143909df0 body=126 status=ok
// SIG undefined FUN_143909df0(void)

void FUN_143909df0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7fb50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143909e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143909e76 FUN_143909e76 body=19 status=ok
// SIG undefined FUN_143909e76(void)

undefined1 FUN_143909e76(undefined8 param_1,undefined8 param_2)

{
  FUN_148072274(param_2);
  return 1;
}



// FUNCTION 143909e8a FUN_143909e8a body=29 status=ok
// SIG undefined FUN_143909e8a(void)

undefined8 FUN_143909e8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143909ebc FUN_143909ebc body=93 status=ok
// SIG undefined FUN_143909ebc(void)

void FUN_143909ebc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fbc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143909f1a FUN_143909f1a body=93 status=ok
// SIG undefined FUN_143909f1a(void)

void FUN_143909f1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fbc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143909f78 FUN_143909f78 body=126 status=ok
// SIG undefined FUN_143909f78(void)

void FUN_143909f78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7fbc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143909fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143909ffe FUN_143909ffe body=19 status=ok
// SIG undefined FUN_143909ffe(void)

undefined1 FUN_143909ffe(undefined8 param_1,undefined8 param_2)

{
  FUN_148072548(param_2);
  return 1;
}



// FUNCTION 14390a03c FUN_14390a03c body=12 status=ok
// SIG undefined FUN_14390a03c(void)

void FUN_14390a03c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390a045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390a048 FUN_14390a048 body=29 status=ok
// SIG undefined FUN_14390a048(void)

undefined8 FUN_14390a048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390a08c FUN_14390a08c body=282 status=ok
// SIG undefined FUN_14390a08c(void)

undefined8 * FUN_14390a08c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390a1a6 FUN_14390a1a6 body=117 status=ok
// SIG undefined FUN_14390a1a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390a1a6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148086bf8(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148086bf8(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390a211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390a284 FUN_14390a284 body=29 status=ok
// SIG undefined FUN_14390a284(void)

undefined8 FUN_14390a284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390a2a2 FUN_14390a2a2 body=119 status=ok
// SIG undefined FUN_14390a2a2(void)

void FUN_14390a2a2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 3;
  FUN_148086cd0(lVar1 + 0x10,&local_24);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar2 = (longlong)local_24 * 0x20;
  *(int *)(lVar1 + 8 + lVar2) = (int)param_1[1];
  *(undefined4 *)(lVar1 + 0xc + lVar2) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(char *)(lVar1 + 0x10 + lVar2) = (char)param_1[2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14390a324 FUN_14390a324 body=29 status=ok
// SIG undefined FUN_14390a324(void)

void FUN_14390a324(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14390a342 FUN_14390a342 body=29 status=ok
// SIG undefined FUN_14390a342(void)

undefined8 FUN_14390a342(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390a360 FUN_14390a360 body=282 status=ok
// SIG undefined FUN_14390a360(void)

undefined8 * FUN_14390a360(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390a47a FUN_14390a47a body=180 status=ok
// SIG undefined FUN_14390a47a(void)

void FUN_14390a47a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xc0;
  FUN_148086cd0(lVar2 + 0x10,&local_24);
  lVar3 = (longlong)local_24 * 0x20;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined1 *)(lVar2 + 0x10 + lVar3) = *(undefined1 *)(param_1 + 0xb8);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14390a562 FUN_14390a562 body=12 status=ok
// SIG undefined FUN_14390a562(void)

void FUN_14390a562(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390a56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390a56e FUN_14390a56e body=29 status=ok
// SIG undefined FUN_14390a56e(void)

undefined8 FUN_14390a56e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390a58c FUN_14390a58c body=282 status=ok
// SIG undefined FUN_14390a58c(void)

undefined8 * FUN_14390a58c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390a6a6 FUN_14390a6a6 body=117 status=ok
// SIG undefined FUN_14390a6a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390a6a6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480871ae(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480871ae(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390a711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390a728 FUN_14390a728 body=411 status=ok
// SIG undefined FUN_14390a728(void)

void FUN_14390a728(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x38);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar3 + 0x30);
    if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
      puVar7 = (uint *)(lVar3 + 0x20);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      if ((int)param_1[1] == 0) {
        FUN_148087214((longlong *)(lVar3 + 0x10));
      }
      else {
        lVar11 = *(longlong *)(lVar3 + 0x10);
        lVar9 = (longlong)iVar8 * 0x20;
        *(int *)(lVar11 + 8 + lVar9) = (int)param_1[1];
        *(undefined4 *)(lVar11 + 0xc + lVar9) = *(undefined4 *)((longlong)param_1 + 0xc);
        *(char *)(lVar11 + 0x10 + lVar9) = (char)param_1[2];
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = *(uint **)(lVar3 + 0x30);
      if (*(uint **)(lVar3 + 0x30) == (uint *)0x0) {
        puVar7 = (uint *)(lVar3 + 0x20);
      }
      iVar2 = *(int *)(lVar3 + 0x38);
      iVar8 = (int)uVar14;
      lVar11 = (longlong)iVar8;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar5 <= iVar8) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar11 == lVar9) {
            return;
          }
        }
        uVar14 = (ulonglong)(iVar8 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar2);
  }
  return;
}



// FUNCTION 14390a8d4 FUN_14390a8d4 body=12 status=ok
// SIG undefined FUN_14390a8d4(void)

void FUN_14390a8d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390a8dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390a8e0 FUN_14390a8e0 body=29 status=ok
// SIG undefined FUN_14390a8e0(void)

undefined8 FUN_14390a8e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390a8fe FUN_14390a8fe body=282 status=ok
// SIG undefined FUN_14390a8fe(void)

undefined8 * FUN_14390a8fe(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390aa18 FUN_14390aa18 body=91 status=ok
// SIG undefined FUN_14390aa18(void)

void FUN_14390aa18(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14390a728(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14390a728(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390aa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390aa92 FUN_14390aa92 body=12 status=ok
// SIG undefined FUN_14390aa92(void)

void FUN_14390aa92(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390aa9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390aa9e FUN_14390aa9e body=29 status=ok
// SIG undefined FUN_14390aa9e(void)

undefined8 FUN_14390aa9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390aabc FUN_14390aabc body=282 status=ok
// SIG undefined FUN_14390aabc(void)

undefined8 * FUN_14390aabc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390abd6 FUN_14390abd6 body=117 status=ok
// SIG undefined FUN_14390abd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390abd6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148087516(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148087516(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390ac41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390ac4c FUN_14390ac4c body=29 status=ok
// SIG undefined FUN_14390ac4c(void)

undefined8 FUN_14390ac4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390ac7e FUN_14390ac7e body=93 status=ok
// SIG undefined FUN_14390ac7e(void)

void FUN_14390ac7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fee0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390acdc FUN_14390acdc body=93 status=ok
// SIG undefined FUN_14390acdc(void)

void FUN_14390acdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7fee0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390ad3a FUN_14390ad3a body=126 status=ok
// SIG undefined FUN_14390ad3a(void)

void FUN_14390ad3a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7fee0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390ada9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390adca FUN_14390adca body=29 status=ok
// SIG undefined FUN_14390adca(void)

undefined8 FUN_14390adca(longlong param_1,undefined8 param_2)

{
  FUN_1480875f5(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1c));
  return 1;
}



// FUNCTION 14390ade8 FUN_14390ade8 body=29 status=ok
// SIG undefined FUN_14390ade8(void)

undefined8 FUN_14390ade8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390ae1a FUN_14390ae1a body=93 status=ok
// SIG undefined FUN_14390ae1a(void)

void FUN_14390ae1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7ff50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390ae78 FUN_14390ae78 body=93 status=ok
// SIG undefined FUN_14390ae78(void)

void FUN_14390ae78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7ff50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390aed6 FUN_14390aed6 body=126 status=ok
// SIG undefined FUN_14390aed6(void)

void FUN_14390aed6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7ff50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390af45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390af66 FUN_14390af66 body=29 status=ok
// SIG undefined FUN_14390af66(void)

undefined8 FUN_14390af66(longlong param_1,undefined8 param_2)

{
  FUN_148087768(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1c));
  return 1;
}



// FUNCTION 14390af84 FUN_14390af84 body=29 status=ok
// SIG undefined FUN_14390af84(void)

undefined8 FUN_14390af84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390afb6 FUN_14390afb6 body=93 status=ok
// SIG undefined FUN_14390afb6(void)

void FUN_14390afb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7ffc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390b014 FUN_14390b014 body=93 status=ok
// SIG undefined FUN_14390b014(void)

void FUN_14390b014(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad7ffc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390b072 FUN_14390b072 body=126 status=ok
// SIG undefined FUN_14390b072(void)

void FUN_14390b072(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad7ffc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390b0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390b102 FUN_14390b102 body=29 status=ok
// SIG undefined FUN_14390b102(void)

undefined8 FUN_14390b102(longlong param_1,undefined8 param_2)

{
  FUN_148087844(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1c));
  return 1;
}



// FUNCTION 14390b12c FUN_14390b12c body=29 status=ok
// SIG undefined FUN_14390b12c(void)

undefined8 FUN_14390b12c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390b15e FUN_14390b15e body=85 status=ok
// SIG undefined FUN_14390b15e(void)

void FUN_14390b15e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80050;
  return;
}



// FUNCTION 14390b1b4 FUN_14390b1b4 body=85 status=ok
// SIG undefined FUN_14390b1b4(void)

void FUN_14390b1b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80050;
  return;
}



// FUNCTION 14390b20a FUN_14390b20a body=118 status=ok
// SIG undefined FUN_14390b20a(void)

void FUN_14390b20a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80050;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390b271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390b280 FUN_14390b280 body=21 status=ok
// SIG undefined FUN_14390b280(void)

void FUN_14390b280(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148073c5c();
  FUN_148073d18(uVar1);
  return;
}



// FUNCTION 14390b296 FUN_14390b296 body=24 status=ok
// SIG undefined FUN_14390b296(void)

undefined1 FUN_14390b296(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148073c5c();
  FUN_148073d18(uVar1);
  return 1;
}



// FUNCTION 14390b2d8 FUN_14390b2d8 body=12 status=ok
// SIG undefined FUN_14390b2d8(void)

void FUN_14390b2d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390b2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390b2e4 FUN_14390b2e4 body=29 status=ok
// SIG undefined FUN_14390b2e4(void)

undefined8 FUN_14390b2e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390b302 FUN_14390b302 body=282 status=ok
// SIG undefined FUN_14390b302(void)

undefined8 * FUN_14390b302(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390b41c FUN_14390b41c body=117 status=ok
// SIG undefined FUN_14390b41c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390b41c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480888f0(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480888f0(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390b487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390b492 FUN_14390b492 body=29 status=ok
// SIG undefined FUN_14390b492(void)

undefined8 FUN_14390b492(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390b4c4 FUN_14390b4c4 body=93 status=ok
// SIG undefined FUN_14390b4c4(void)

void FUN_14390b4c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390b522 FUN_14390b522 body=93 status=ok
// SIG undefined FUN_14390b522(void)

void FUN_14390b522(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390b580 FUN_14390b580 body=126 status=ok
// SIG undefined FUN_14390b580(void)

void FUN_14390b580(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80190;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390b5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390b608 FUN_14390b608 body=20 status=ok
// SIG undefined FUN_14390b608(void)

undefined1 FUN_14390b608(longlong param_1)

{
  FUN_148077fae(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14390b61c FUN_14390b61c body=29 status=ok
// SIG undefined FUN_14390b61c(void)

undefined8 FUN_14390b61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390b64e FUN_14390b64e body=93 status=ok
// SIG undefined FUN_14390b64e(void)

void FUN_14390b64e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390b6ac FUN_14390b6ac body=93 status=ok
// SIG undefined FUN_14390b6ac(void)

void FUN_14390b6ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390b70a FUN_14390b70a body=126 status=ok
// SIG undefined FUN_14390b70a(void)

void FUN_14390b70a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80200;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390b779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390b792 FUN_14390b792 body=20 status=ok
// SIG undefined FUN_14390b792(void)

undefined1 FUN_14390b792(longlong param_1)

{
  FUN_14807812c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14390b7a6 FUN_14390b7a6 body=29 status=ok
// SIG undefined FUN_14390b7a6(void)

undefined8 FUN_14390b7a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390b7d8 FUN_14390b7d8 body=93 status=ok
// SIG undefined FUN_14390b7d8(void)

void FUN_14390b7d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390b836 FUN_14390b836 body=93 status=ok
// SIG undefined FUN_14390b836(void)

void FUN_14390b836(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80270;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390b894 FUN_14390b894 body=126 status=ok
// SIG undefined FUN_14390b894(void)

void FUN_14390b894(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80270;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390b903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390b922 FUN_14390b922 body=27 status=ok
// SIG undefined FUN_14390b922(void)

undefined8 FUN_14390b922(longlong param_1,undefined8 param_2)

{
  FUN_148088a60(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390b93e FUN_14390b93e body=29 status=ok
// SIG undefined FUN_14390b93e(void)

undefined8 FUN_14390b93e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390b970 FUN_14390b970 body=93 status=ok
// SIG undefined FUN_14390b970(void)

void FUN_14390b970(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad802e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390b9ce FUN_14390b9ce body=93 status=ok
// SIG undefined FUN_14390b9ce(void)

void FUN_14390b9ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad802e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390ba2c FUN_14390ba2c body=126 status=ok
// SIG undefined FUN_14390ba2c(void)

void FUN_14390ba2c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad802e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390ba9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390baba FUN_14390baba body=27 status=ok
// SIG undefined FUN_14390baba(void)

undefined8 FUN_14390baba(longlong param_1,undefined8 param_2)

{
  FUN_148088e52(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390bad6 FUN_14390bad6 body=29 status=ok
// SIG undefined FUN_14390bad6(void)

undefined8 FUN_14390bad6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390bb08 FUN_14390bb08 body=93 status=ok
// SIG undefined FUN_14390bb08(void)

void FUN_14390bb08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390bb66 FUN_14390bb66 body=93 status=ok
// SIG undefined FUN_14390bb66(void)

void FUN_14390bb66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390bbc4 FUN_14390bbc4 body=126 status=ok
// SIG undefined FUN_14390bbc4(void)

void FUN_14390bbc4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80350;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390bc33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390bc52 FUN_14390bc52 body=27 status=ok
// SIG undefined FUN_14390bc52(void)

undefined8 FUN_14390bc52(longlong param_1,undefined8 param_2)

{
  FUN_14808940e(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390bc6e FUN_14390bc6e body=29 status=ok
// SIG undefined FUN_14390bc6e(void)

undefined8 FUN_14390bc6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390bca0 FUN_14390bca0 body=93 status=ok
// SIG undefined FUN_14390bca0(void)

void FUN_14390bca0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad803c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390bcfe FUN_14390bcfe body=93 status=ok
// SIG undefined FUN_14390bcfe(void)

void FUN_14390bcfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad803c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390bd5c FUN_14390bd5c body=126 status=ok
// SIG undefined FUN_14390bd5c(void)

void FUN_14390bd5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad803c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390bdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390bdea FUN_14390bdea body=27 status=ok
// SIG undefined FUN_14390bdea(void)

undefined8 FUN_14390bdea(longlong param_1,undefined8 param_2)

{
  FUN_1480898c0(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390be06 FUN_14390be06 body=29 status=ok
// SIG undefined FUN_14390be06(void)

undefined8 FUN_14390be06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390be38 FUN_14390be38 body=93 status=ok
// SIG undefined FUN_14390be38(void)

void FUN_14390be38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390be96 FUN_14390be96 body=93 status=ok
// SIG undefined FUN_14390be96(void)

void FUN_14390be96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390bef4 FUN_14390bef4 body=126 status=ok
// SIG undefined FUN_14390bef4(void)

void FUN_14390bef4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80430;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390bf63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390bf82 FUN_14390bf82 body=27 status=ok
// SIG undefined FUN_14390bf82(void)

undefined8 FUN_14390bf82(longlong param_1,undefined8 param_2)

{
  FUN_148089dfe(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390bf9e FUN_14390bf9e body=29 status=ok
// SIG undefined FUN_14390bf9e(void)

undefined8 FUN_14390bf9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390bfd0 FUN_14390bfd0 body=93 status=ok
// SIG undefined FUN_14390bfd0(void)

void FUN_14390bfd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad804a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c02e FUN_14390c02e body=93 status=ok
// SIG undefined FUN_14390c02e(void)

void FUN_14390c02e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad804a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c08c FUN_14390c08c body=126 status=ok
// SIG undefined FUN_14390c08c(void)

void FUN_14390c08c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad804a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390c0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390c11a FUN_14390c11a body=27 status=ok
// SIG undefined FUN_14390c11a(void)

undefined8 FUN_14390c11a(longlong param_1,undefined8 param_2)

{
  FUN_14808a312(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390c136 FUN_14390c136 body=29 status=ok
// SIG undefined FUN_14390c136(void)

undefined8 FUN_14390c136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390c168 FUN_14390c168 body=93 status=ok
// SIG undefined FUN_14390c168(void)

void FUN_14390c168(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c1c6 FUN_14390c1c6 body=93 status=ok
// SIG undefined FUN_14390c1c6(void)

void FUN_14390c1c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c224 FUN_14390c224 body=126 status=ok
// SIG undefined FUN_14390c224(void)

void FUN_14390c224(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80510;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390c293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390c2b2 FUN_14390c2b2 body=27 status=ok
// SIG undefined FUN_14390c2b2(void)

undefined8 FUN_14390c2b2(longlong param_1,undefined8 param_2)

{
  FUN_14808a8be(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390c2ce FUN_14390c2ce body=29 status=ok
// SIG undefined FUN_14390c2ce(void)

undefined8 FUN_14390c2ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390c300 FUN_14390c300 body=93 status=ok
// SIG undefined FUN_14390c300(void)

void FUN_14390c300(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c35e FUN_14390c35e body=93 status=ok
// SIG undefined FUN_14390c35e(void)

void FUN_14390c35e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c3bc FUN_14390c3bc body=126 status=ok
// SIG undefined FUN_14390c3bc(void)

void FUN_14390c3bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80580;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390c42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390c44a FUN_14390c44a body=27 status=ok
// SIG undefined FUN_14390c44a(void)

undefined8 FUN_14390c44a(longlong param_1,undefined8 param_2)

{
  FUN_143903c5c(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390c466 FUN_14390c466 body=29 status=ok
// SIG undefined FUN_14390c466(void)

undefined8 FUN_14390c466(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390c498 FUN_14390c498 body=93 status=ok
// SIG undefined FUN_14390c498(void)

void FUN_14390c498(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad805f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c4f6 FUN_14390c4f6 body=93 status=ok
// SIG undefined FUN_14390c4f6(void)

void FUN_14390c4f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad805f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c554 FUN_14390c554 body=126 status=ok
// SIG undefined FUN_14390c554(void)

void FUN_14390c554(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad805f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390c5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390c5e2 FUN_14390c5e2 body=27 status=ok
// SIG undefined FUN_14390c5e2(void)

undefined8 FUN_14390c5e2(longlong param_1,undefined8 param_2)

{
  FUN_143904098(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390c5fe FUN_14390c5fe body=29 status=ok
// SIG undefined FUN_14390c5fe(void)

undefined8 FUN_14390c5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390c630 FUN_14390c630 body=93 status=ok
// SIG undefined FUN_14390c630(void)

void FUN_14390c630(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c68e FUN_14390c68e body=93 status=ok
// SIG undefined FUN_14390c68e(void)

void FUN_14390c68e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390c6ec FUN_14390c6ec body=126 status=ok
// SIG undefined FUN_14390c6ec(void)

void FUN_14390c6ec(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80660;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390c75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390c77a FUN_14390c77a body=27 status=ok
// SIG undefined FUN_14390c77a(void)

undefined8 FUN_14390c77a(longlong param_1,undefined8 param_2)

{
  FUN_1439045de(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390c7c0 FUN_14390c7c0 body=12 status=ok
// SIG undefined FUN_14390c7c0(void)

void FUN_14390c7c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390c7c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390c7cc FUN_14390c7cc body=29 status=ok
// SIG undefined FUN_14390c7cc(void)

undefined8 FUN_14390c7cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390c7ea FUN_14390c7ea body=282 status=ok
// SIG undefined FUN_14390c7ea(void)

undefined8 * FUN_14390c7ea(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390c904 FUN_14390c904 body=117 status=ok
// SIG undefined FUN_14390c904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390c904(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14808d2de(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14808d2de(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390c96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390ca06 FUN_14390ca06 body=12 status=ok
// SIG undefined FUN_14390ca06(void)

void FUN_14390ca06(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390ca0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390ca12 FUN_14390ca12 body=29 status=ok
// SIG undefined FUN_14390ca12(void)

undefined8 FUN_14390ca12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390ca30 FUN_14390ca30 body=282 status=ok
// SIG undefined FUN_14390ca30(void)

undefined8 * FUN_14390ca30(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390cc8a FUN_14390cc8a body=12 status=ok
// SIG undefined FUN_14390cc8a(void)

void FUN_14390cc8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390cc93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390cc96 FUN_14390cc96 body=29 status=ok
// SIG undefined FUN_14390cc96(void)

undefined8 FUN_14390cc96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390ccb4 FUN_14390ccb4 body=282 status=ok
// SIG undefined FUN_14390ccb4(void)

undefined8 * FUN_14390ccb4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390ce82 FUN_14390ce82 body=643 status=ok
// SIG undefined FUN_14390ce82(void)

void FUN_14390ce82(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar13 = *param_1;
  if (*(int *)(lVar13 + 0x18) != *(int *)(lVar13 + 0x44)) {
    lVar12 = param_1[1];
    lVar11 = lVar13 + 0x48;
    if (*(longlong *)(lVar13 + 0x50) != 0) {
      lVar11 = *(longlong *)(lVar13 + 0x50);
    }
    iVar8 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(lVar13 + 0x58) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        lVar11 = *(longlong *)(lVar13 + 0x10) + (longlong)iVar8 * 0xe0;
        if (*(longlong *)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar8 * 0xe0) == lVar12) {
          if ((lVar11 + 8U & 0xfffffffffffffff7) != 0) {
            lVar13 = *(longlong *)(lVar11 + 200);
            uVar9 = 0;
            if ((longlong)*(int *)(lVar11 + 0xd0) != 0) {
              local_88 = (longlong)*(int *)(lVar11 + 0xd0) << 3;
              lVar12 = 0;
              local_80 = lVar13;
              do {
                plVar2 = (longlong *)param_1[4];
                local_68 = (longlong *)FUN_14001cc68(0x88,0x10);
                local_68[1] = (longlong)&DAT_100000001;
                *local_68 = (longlong)&PTR_FUN_14ad81010;
                local_70 = local_68 + 2;
                local_68[2] = 0;
                local_68[3] = 0;
                local_68[4] = 0;
                local_68[5] = 0;
                local_68[6] = 0;
                local_68[7] = 0;
                local_68[8] = 0;
                local_68[9] = 0;
                local_68[10] = 0;
                local_68[0xb] = 0;
                local_68[0xc] = 0;
                local_68[0xd] = 0;
                local_68[0xe] = 0;
                local_68[0xf] = 0;
                local_68[0x10] = 0;
                FUN_14808d638(&local_70);
                plVar6 = local_68;
                plVar5 = local_70;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                  UNLOCK();
                }
                iVar8 = (int)plVar2[1];
                *(uint *)(plVar2 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)plVar2 + 0xc) < iVar8 + 1U) {
                  FUN_14808d52c(plVar2,iVar8);
                }
                plVar7 = local_68;
                lVar13 = *plVar2;
                lVar10 = (longlong)iVar8 * 0x10;
                *(longlong **)(lVar13 + lVar10) = plVar5;
                *(longlong **)(lVar13 + 8 + lVar10) = plVar6;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_68 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar7 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
                uVar3 = *(undefined8 *)(lVar13 + lVar10);
                local_98 = param_1[5];
                uVar4 = *(undefined8 *)(local_98 + 0x28);
                local_78 = *(longlong *)(local_80 + lVar12);
                if (local_78 != 0) {
                  LOCK();
                  *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
                  UNLOCK();
                }
                local_98 = local_98 + 0x38;
                FUN_1481bb036(uVar3,param_2,&local_78,uVar4);
                lVar12 = lVar12 + 8;
              } while (local_88 != lVar12);
              uVar9 = *(undefined4 *)(lVar11 + 0xd0);
              lVar13 = *(longlong *)(lVar11 + 200);
            }
            iVar8 = *(int *)(lVar11 + 0xd4);
            FUN_1480859e8(lVar13,uVar9);
            *(undefined4 *)(lVar11 + 0xd0) = 0;
            if ((iVar8 < 0) && (*(int *)(lVar11 + 0xd4) != 0)) {
              FUN_14808d6dc(lVar11 + 200,0);
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar11 + 0xd8);
      } while (iVar8 != -1);
    }
  }
  FUN_143a96774(*(undefined8 *)(param_1[5] + 0x28),param_2);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14390d116 FUN_14390d116 body=29 status=ok
// SIG undefined FUN_14390d116(void)

void FUN_14390d116(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14390d134 FUN_14390d134 body=83 status=ok
// SIG undefined FUN_14390d134(void)

undefined8 * FUN_14390d134(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ad808f0;
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



// FUNCTION 14390d188 FUN_14390d188 body=282 status=ok
// SIG undefined FUN_14390d188(void)

undefined8 * FUN_14390d188(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14390a065);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14390d2a2 FUN_14390d2a2 body=126 status=ok
// SIG undefined FUN_14390d2a2(void)

void FUN_14390d2a2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14390ce82(param_1 + 0x15,&DAT_14ca85100);
  plVar3 = (longlong *)param_1[0x18];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390d315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14390d320 FUN_14390d320 body=29 status=ok
// SIG undefined FUN_14390d320(void)

undefined8 FUN_14390d320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390d352 FUN_14390d352 body=93 status=ok
// SIG undefined FUN_14390d352(void)

void FUN_14390d352(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14390d3b0 FUN_14390d3b0 body=93 status=ok
// SIG undefined FUN_14390d3b0(void)

void FUN_14390d3b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80960;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


