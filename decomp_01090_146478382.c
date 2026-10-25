// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146478382 FUN_146478382 body=29 status=ok
// SIG undefined FUN_146478382(void)

undefined8 FUN_146478382(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464783a0 FUN_1464783a0 body=29 status=ok
// SIG undefined FUN_1464783a0(void)

undefined8 FUN_1464783a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464783be FUN_1464783be body=29 status=ok
// SIG undefined FUN_1464783be(void)

undefined8 FUN_1464783be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464783dc FUN_1464783dc body=29 status=ok
// SIG undefined FUN_1464783dc(void)

undefined8 FUN_1464783dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464783fa FUN_1464783fa body=29 status=ok
// SIG undefined FUN_1464783fa(void)

undefined8 FUN_1464783fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146478418 FUN_146478418 body=29 status=ok
// SIG undefined FUN_146478418(void)

undefined8 FUN_146478418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146478436 FUN_146478436 body=29 status=ok
// SIG undefined FUN_146478436(void)

undefined8 FUN_146478436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146478454 FUN_146478454 body=29 status=ok
// SIG undefined FUN_146478454(void)

undefined8 FUN_146478454(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146478472 FUN_146478472 body=29 status=ok
// SIG undefined FUN_146478472(void)

undefined8 FUN_146478472(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146478490 FUN_146478490 body=29 status=ok
// SIG undefined FUN_146478490(void)

undefined8 FUN_146478490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464784ae FUN_1464784ae body=29 status=ok
// SIG undefined FUN_1464784ae(void)

undefined8 FUN_1464784ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464784cc FUN_1464784cc body=29 status=ok
// SIG undefined FUN_1464784cc(void)

undefined8 FUN_1464784cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464784ea FUN_1464784ea body=96 status=ok
// SIG undefined FUN_1464784ea(void)

void FUN_1464784ea(longlong param_1,int param_2)

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



// FUNCTION 14647854a FUN_14647854a body=103 status=ok
// SIG undefined FUN_14647854a(void)

void FUN_14647854a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1464785b2 FUN_1464785b2 body=117 status=ok
// SIG undefined FUN_1464785b2(void)

void FUN_1464785b2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae0eb00;
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146478627 FUN_146478627 body=47 status=ok
// SIG undefined FUN_146478627(void)

longlong FUN_146478627(void)

{
  if (DAT_14cb42cd0 == 0) {
    FUN_1409ce572(&DAT_14cb42cd0,&PTR_FUN_14ae0f760);
  }
  return DAT_14cb42cd0;
}



// FUNCTION 146478656 FUN_146478656 body=47 status=ok
// SIG undefined FUN_146478656(void)

longlong FUN_146478656(void)

{
  if (DAT_14cb42ce8 == 0) {
    FUN_1409ce572(&DAT_14cb42ce8,&PTR_FUN_14ae0f7d0);
  }
  return DAT_14cb42ce8;
}



// FUNCTION 146478685 FUN_146478685 body=47 status=ok
// SIG undefined FUN_146478685(void)

longlong FUN_146478685(void)

{
  if (DAT_14cb42d00 == 0) {
    FUN_1409ce572(&DAT_14cb42d00,&PTR_FUN_14ae0f840);
  }
  return DAT_14cb42d00;
}



// FUNCTION 1464786b4 FUN_1464786b4 body=47 status=ok
// SIG undefined FUN_1464786b4(void)

longlong FUN_1464786b4(void)

{
  if (DAT_14cb42d18 == 0) {
    FUN_1409ce572(&DAT_14cb42d18,&PTR_FUN_14ae0f8d0);
  }
  return DAT_14cb42d18;
}



// FUNCTION 1464786e4 FUN_1464786e4 body=55 status=ok
// SIG undefined FUN_1464786e4(void)

void FUN_1464786e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d38 = FUN_140002ddd(FUN_14647871b,uVar1,L"NiagaraRibbonShapeCustomVertex");
  }
  return;
}



// FUNCTION 14647871b FUN_14647871b body=47 status=ok
// SIG undefined FUN_14647871b(void)

longlong FUN_14647871b(void)

{
  if (DAT_14cb42d30 == 0) {
    FUN_14086a14e(&DAT_14cb42d30,&PTR_FUN_14ae0fa38);
  }
  return DAT_14cb42d30;
}



// FUNCTION 14647874a FUN_14647874a body=48 status=ok
// SIG undefined FUN_14647874a(void)

void FUN_14647874a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14ae1b400;
  return;
}



// FUNCTION 14647877a FUN_14647877a body=47 status=ok
// SIG undefined FUN_14647877a(void)

longlong FUN_14647877a(void)

{
  if (DAT_14cb42d48 == 0) {
    FUN_1409ce572(&DAT_14cb42d48,&PTR_FUN_14ae0fac0);
  }
  return DAT_14cb42d48;
}



// FUNCTION 1464787a9 FUN_1464787a9 body=47 status=ok
// SIG undefined FUN_1464787a9(void)

longlong FUN_1464787a9(void)

{
  if (DAT_14cb42d60 == 0) {
    FUN_1409ce572(&DAT_14cb42d60,&PTR_FUN_14ae0fb30);
  }
  return DAT_14cb42d60;
}



// FUNCTION 1464787d8 FUN_1464787d8 body=47 status=ok
// SIG undefined FUN_1464787d8(void)

longlong FUN_1464787d8(void)

{
  if (DAT_14cb42d78 == 0) {
    FUN_1409ce572(&DAT_14cb42d78,&PTR_FUN_14ae0fbd0);
  }
  return DAT_14cb42d78;
}



// FUNCTION 146478808 FUN_146478808 body=55 status=ok
// SIG undefined FUN_146478808(void)

void FUN_146478808(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42d98 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42d98 = FUN_140002ddd(FUN_14647883f,uVar1,L"NiagaraRibbonUVSettings");
  }
  return;
}



// FUNCTION 14647883f FUN_14647883f body=49 status=ok
// SIG undefined FUN_14647883f(void)

longlong FUN_14647883f(void)

{
  if (DAT_14cb42d90 == 0) {
    FUN_14086a14e(&DAT_14cb42d90,&PTR_FUN_14ae0fff0);
  }
  return DAT_14cb42d90;
}



// FUNCTION 146478870 FUN_146478870 body=48 status=ok
// SIG undefined FUN_146478870(void)

void FUN_146478870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ae1b7d0;
  return;
}



// FUNCTION 1464788a0 FUN_1464788a0 body=47 status=ok
// SIG undefined FUN_1464788a0(void)

longlong FUN_1464788a0(void)

{
  if (DAT_14cb42db0 == 0) {
    FUN_14073dd9a(&DAT_14cb42db0,&PTR_LAB_14ae112a8);
  }
  return DAT_14cb42db0;
}



// FUNCTION 1464788d0 FUN_1464788d0 body=119 status=ok
// SIG undefined FUN_1464788d0(void)

void FUN_1464788d0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = FUN_145a79ab4();
  lVar4 = *(longlong *)(lVar1 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
  }
  FUN_1410d633e(lVar4);
  if ((longlong)DAT_14cb42dd0 != 0) {
    lVar1 = (longlong)DAT_14cb42dd0 << 3;
    lVar4 = DAT_14cb42dc8;
    do {
      lVar2 = FUN_14479d2ce(lVar4);
      if (lVar2 != 0) {
        uVar3 = FUN_14479d2ce(lVar4);
        FUN_1410d633e(uVar3);
      }
      lVar4 = lVar4 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 146478948 FUN_146478948 body=55 status=ok
// SIG undefined FUN_146478948(void)

void FUN_146478948(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42de0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42de0 = FUN_140002ddd(FUN_14647897f,uVar1,L"NiagaraScalabilityManager");
  }
  return;
}



// FUNCTION 14647897f FUN_14647897f body=47 status=ok
// SIG undefined FUN_14647897f(void)

longlong FUN_14647897f(void)

{
  if (DAT_14cb42dd8 == 0) {
    FUN_14086a14e(&DAT_14cb42dd8,&PTR_FUN_14ae118d8);
  }
  return DAT_14cb42dd8;
}



// FUNCTION 1464789ae FUN_1464789ae body=48 status=ok
// SIG undefined FUN_1464789ae(void)

void FUN_1464789ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000e0;
  *puVar1 = &PTR_FUN_14ae1b950;
  return;
}



// FUNCTION 1464789de FUN_1464789de body=35 status=ok
// SIG undefined FUN_1464789de(void)

void FUN_1464789de(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae121c0;
  return;
}



// FUNCTION 146478a01 FUN_146478a01 body=47 status=ok
// SIG undefined FUN_146478a01(void)

longlong FUN_146478a01(void)

{
  if (DAT_14cb42e78 == 0) {
    FUN_14073dd9a(&DAT_14cb42e78,&PTR_LAB_14ae12178);
  }
  return DAT_14cb42e78;
}



// FUNCTION 146478a30 FUN_146478a30 body=47 status=ok
// SIG undefined FUN_146478a30(void)

longlong FUN_146478a30(void)

{
  if (DAT_14cb42e88 == 0) {
    FUN_1409ce572(&DAT_14cb42e88,&PTR_FUN_14ae12500);
  }
  return DAT_14cb42e88;
}



// FUNCTION 146478a5f FUN_146478a5f body=47 status=ok
// SIG undefined FUN_146478a5f(void)

longlong FUN_146478a5f(void)

{
  if (DAT_14cb42ea0 == 0) {
    FUN_1409ce572(&DAT_14cb42ea0,&PTR_FUN_14ae12570);
  }
  return DAT_14cb42ea0;
}



// FUNCTION 146478a8e FUN_146478a8e body=47 status=ok
// SIG undefined FUN_146478a8e(void)

longlong FUN_146478a8e(void)

{
  if (DAT_14cb42eb8 == 0) {
    FUN_1409ce572(&DAT_14cb42eb8,&PTR_FUN_14ae125f0);
  }
  return DAT_14cb42eb8;
}



// FUNCTION 146478abd FUN_146478abd body=47 status=ok
// SIG undefined FUN_146478abd(void)

longlong FUN_146478abd(void)

{
  if (DAT_14cb42ed0 == 0) {
    FUN_1409ce572(&DAT_14cb42ed0,&PTR_FUN_14ae12680);
  }
  return DAT_14cb42ed0;
}



// FUNCTION 146478aec FUN_146478aec body=47 status=ok
// SIG undefined FUN_146478aec(void)

longlong FUN_146478aec(void)

{
  if (DAT_14cb42ee8 == 0) {
    FUN_1409ce572(&DAT_14cb42ee8,&PTR_FUN_14ae12710);
  }
  return DAT_14cb42ee8;
}



// FUNCTION 146478b1b FUN_146478b1b body=47 status=ok
// SIG undefined FUN_146478b1b(void)

longlong FUN_146478b1b(void)

{
  if (DAT_14cb42f00 == 0) {
    FUN_1409ce572(&DAT_14cb42f00,&PTR_FUN_14ae12790);
  }
  return DAT_14cb42f00;
}



// FUNCTION 146478b4a FUN_146478b4a body=47 status=ok
// SIG undefined FUN_146478b4a(void)

longlong FUN_146478b4a(void)

{
  if (DAT_14cb42f18 == 0) {
    FUN_1409ce572(&DAT_14cb42f18,&PTR_FUN_14ae12830);
  }
  return DAT_14cb42f18;
}



// FUNCTION 146478b7a FUN_146478b7a body=55 status=ok
// SIG undefined FUN_146478b7a(void)

void FUN_146478b7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f38 = FUN_140002ddd(FUN_146478bb1,uVar1,L"NiagaraModuleDependency");
  }
  return;
}



// FUNCTION 146478bb1 FUN_146478bb1 body=47 status=ok
// SIG undefined FUN_146478bb1(void)

longlong FUN_146478bb1(void)

{
  if (DAT_14cb42f30 == 0) {
    FUN_14086a14e(&DAT_14cb42f30,&PTR_FUN_14ae12b18);
  }
  return DAT_14cb42f30;
}



// FUNCTION 146478be0 FUN_146478be0 body=48 status=ok
// SIG undefined FUN_146478be0(void)

void FUN_146478be0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14ae1c040;
  return;
}



// FUNCTION 146478c10 FUN_146478c10 body=55 status=ok
// SIG undefined FUN_146478c10(void)

void FUN_146478c10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f50 = FUN_140002ddd(FUN_146478c47,uVar1,L"NiagaraCompilerTag");
  }
  return;
}



// FUNCTION 146478c47 FUN_146478c47 body=47 status=ok
// SIG undefined FUN_146478c47(void)

longlong FUN_146478c47(void)

{
  if (DAT_14cb42f48 == 0) {
    FUN_14086a14e(&DAT_14cb42f48,&PTR_FUN_14ae12c18);
  }
  return DAT_14cb42f48;
}



// FUNCTION 146478c76 FUN_146478c76 body=48 status=ok
// SIG undefined FUN_146478c76(void)

void FUN_146478c76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ae1c1a0;
  return;
}



// FUNCTION 146478ca6 FUN_146478ca6 body=55 status=ok
// SIG undefined FUN_146478ca6(void)

void FUN_146478ca6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f68 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f68 = FUN_140002ddd(FUN_146478cdd,uVar1,L"NiagaraVMExecutableDataId");
  }
  return;
}



// FUNCTION 146478cdd FUN_146478cdd body=47 status=ok
// SIG undefined FUN_146478cdd(void)

longlong FUN_146478cdd(void)

{
  if (DAT_14cb42f60 == 0) {
    FUN_14086a14e(&DAT_14cb42f60,&PTR_FUN_14ae13088);
  }
  return DAT_14cb42f60;
}



// FUNCTION 146478d0c FUN_146478d0c body=48 status=ok
// SIG undefined FUN_146478d0c(void)

void FUN_146478d0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14ae1c300;
  return;
}



// FUNCTION 146478d3c FUN_146478d3c body=55 status=ok
// SIG undefined FUN_146478d3c(void)

void FUN_146478d3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f80 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f80 = FUN_140002ddd(FUN_146478d73,uVar1,L"NiagaraVMExecutableByteCode");
  }
  return;
}



// FUNCTION 146478d73 FUN_146478d73 body=49 status=ok
// SIG undefined FUN_146478d73(void)

longlong FUN_146478d73(void)

{
  if (DAT_14cb42f78 == 0) {
    FUN_14086a14e(&DAT_14cb42f78,&PTR_FUN_14ae131e8);
  }
  return DAT_14cb42f78;
}



// FUNCTION 146478da4 FUN_146478da4 body=48 status=ok
// SIG undefined FUN_146478da4(void)

void FUN_146478da4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ae1c470;
  return;
}



// FUNCTION 146478dd4 FUN_146478dd4 body=55 status=ok
// SIG undefined FUN_146478dd4(void)

void FUN_146478dd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42f98 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42f98 = FUN_140002ddd(FUN_146478e0b,uVar1,L"NiagaraVMExecutableData");
  }
  return;
}



// FUNCTION 146478e0b FUN_146478e0b body=47 status=ok
// SIG undefined FUN_146478e0b(void)

longlong FUN_146478e0b(void)

{
  if (DAT_14cb42f90 == 0) {
    FUN_14086a14e(&DAT_14cb42f90,&PTR_FUN_14ae13c68);
  }
  return DAT_14cb42f90;
}



// FUNCTION 146478e3a FUN_146478e3a body=48 status=ok
// SIG undefined FUN_146478e3a(void)

void FUN_146478e3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a0;
  *puVar1 = &PTR_FUN_14ae1c5e0;
  return;
}



// FUNCTION 146478e6a FUN_146478e6a body=47 status=ok
// SIG undefined FUN_146478e6a(void)

longlong FUN_146478e6a(void)

{
  if (DAT_14cb42fa8 == 0) {
    FUN_1409ce572(&DAT_14cb42fa8,&PTR_FUN_14ae13d00);
  }
  return DAT_14cb42fa8;
}



// FUNCTION 146478e9a FUN_146478e9a body=55 status=ok
// SIG undefined FUN_146478e9a(void)

void FUN_146478e9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42fc8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42fc8 = FUN_140002ddd(FUN_146478ed1,uVar1,L"NiagaraInlineDynamicInputFormatToken");
  }
  return;
}



// FUNCTION 146478ed1 FUN_146478ed1 body=47 status=ok
// SIG undefined FUN_146478ed1(void)

longlong FUN_146478ed1(void)

{
  if (DAT_14cb42fc0 == 0) {
    FUN_14086a14e(&DAT_14cb42fc0,&PTR_FUN_14ae13da0);
  }
  return DAT_14cb42fc0;
}



// FUNCTION 146478f00 FUN_146478f00 body=48 status=ok
// SIG undefined FUN_146478f00(void)

void FUN_146478f00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ae1c850;
  return;
}



// FUNCTION 146478f30 FUN_146478f30 body=55 status=ok
// SIG undefined FUN_146478f30(void)

void FUN_146478f30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb42fe0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb42fe0 = FUN_140002ddd(FUN_146478f67,uVar1,L"VersionedNiagaraScriptData");
  }
  return;
}



// FUNCTION 146478f67 FUN_146478f67 body=47 status=ok
// SIG undefined FUN_146478f67(void)

longlong FUN_146478f67(void)

{
  if (DAT_14cb42fd8 == 0) {
    FUN_14086a14e(&DAT_14cb42fd8,&PTR_FUN_14ae13e30);
  }
  return DAT_14cb42fd8;
}



// FUNCTION 146478f96 FUN_146478f96 body=48 status=ok
// SIG undefined FUN_146478f96(void)

void FUN_146478f96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ae1c9b0;
  return;
}



// FUNCTION 146478fc6 FUN_146478fc6 body=47 status=ok
// SIG undefined FUN_146478fc6(void)

longlong FUN_146478fc6(void)

{
  if (DAT_14cb43000 == 0) {
    FUN_14073dd9a(&DAT_14cb43000,&PTR_LAB_14ae14480);
  }
  return DAT_14cb43000;
}



// FUNCTION 146478ff5 FUN_146478ff5 body=47 status=ok
// SIG undefined FUN_146478ff5(void)

longlong FUN_146478ff5(void)

{
  if (DAT_14cb42ff0 == 0) {
    FUN_14000fc22(&DAT_14cb42ff0,&PTR_FUN_14ae13e88);
  }
  return DAT_14cb42ff0;
}



// FUNCTION 146479024 FUN_146479024 body=34 status=ok
// SIG undefined FUN_146479024(void)

void FUN_146479024(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14585dcc6();
  FUN_14069c8d6(uVar1,&PTR_s_RaiseOnGPUCompilationComplete_14ae13ed0,1);
  return;
}



// FUNCTION 14647904b FUN_14647904b body=47 status=ok
// SIG undefined FUN_14647904b(void)

longlong FUN_14647904b(void)

{
  if (DAT_14cb43128 == 0) {
    FUN_14086a14e(&DAT_14cb43128,&PTR_FUN_14ae15928);
  }
  return DAT_14cb43128;
}



// FUNCTION 14647907a FUN_14647907a body=55 status=ok
// SIG undefined FUN_14647907a(void)

void FUN_14647907a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43118 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43118 = FUN_140002ddd(FUN_1464790b1,uVar1,L"NiagaraScriptExecutionPaddingInfo");
  }
  return;
}



// FUNCTION 1464790b1 FUN_1464790b1 body=47 status=ok
// SIG undefined FUN_1464790b1(void)

longlong FUN_1464790b1(void)

{
  if (DAT_14cb43110 == 0) {
    FUN_14086a14e(&DAT_14cb43110,&PTR_FUN_14ae157e8);
  }
  return DAT_14cb43110;
}



// FUNCTION 1464790e0 FUN_1464790e0 body=48 status=ok
// SIG undefined FUN_1464790e0(void)

void FUN_1464790e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x200000008;
  *puVar1 = &PTR_FUN_14ae1cb20;
  return;
}



// FUNCTION 146479110 FUN_146479110 body=55 status=ok
// SIG undefined FUN_146479110(void)

void FUN_146479110(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43130 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43130 = FUN_140002ddd(FUN_14647904b,uVar1,L"NiagaraScriptExecutionParameterStore");
  }
  return;
}



// FUNCTION 146479148 FUN_146479148 body=48 status=ok
// SIG undefined FUN_146479148(void)

void FUN_146479148(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14ae1cc80;
  return;
}



// FUNCTION 146479178 FUN_146479178 body=55 status=ok
// SIG undefined FUN_146479178(void)

void FUN_146479178(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43148 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43148 = FUN_140002ddd(FUN_1464791af,uVar1,L"NiagaraScriptInstanceParameterStore");
  }
  return;
}



// FUNCTION 1464791af FUN_1464791af body=47 status=ok
// SIG undefined FUN_1464791af(void)

longlong FUN_1464791af(void)

{
  if (DAT_14cb43140 == 0) {
    FUN_14086a14e(&DAT_14cb43140,&PTR_FUN_14ae159d0);
  }
  return DAT_14cb43140;
}



// FUNCTION 1464791de FUN_1464791de body=48 status=ok
// SIG undefined FUN_1464791de(void)

void FUN_1464791de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ae1cde0;
  return;
}



// FUNCTION 14647920e FUN_14647920e body=55 status=ok
// SIG undefined FUN_14647920e(void)

void FUN_14647920e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43160 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43160 = FUN_140002ddd(FUN_146479245,uVar1,L"NiagaraScriptHighlight");
  }
  return;
}



// FUNCTION 146479245 FUN_146479245 body=47 status=ok
// SIG undefined FUN_146479245(void)

longlong FUN_146479245(void)

{
  if (DAT_14cb43158 == 0) {
    FUN_14086a14e(&DAT_14cb43158,&PTR_FUN_14ae15c48);
  }
  return DAT_14cb43158;
}



// FUNCTION 146479274 FUN_146479274 body=48 status=ok
// SIG undefined FUN_146479274(void)

void FUN_146479274(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ae1cf40;
  return;
}



// FUNCTION 1464792a4 FUN_1464792a4 body=47 status=ok
// SIG undefined FUN_1464792a4(void)

longlong FUN_1464792a4(void)

{
  if (DAT_14cb43170 == 0) {
    FUN_1409ce572(&DAT_14cb43170,&PTR_FUN_14ae15d30);
  }
  return DAT_14cb43170;
}



// FUNCTION 1464792d4 FUN_1464792d4 body=55 status=ok
// SIG undefined FUN_1464792d4(void)

void FUN_1464792d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43190 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43190 = FUN_140002ddd(FUN_14647930b,uVar1,L"NiagaraSimCacheCreateParameters");
  }
  return;
}



// FUNCTION 14647930b FUN_14647930b body=49 status=ok
// SIG undefined FUN_14647930b(void)

longlong FUN_14647930b(void)

{
  if (DAT_14cb43188 == 0) {
    FUN_14086a14e(&DAT_14cb43188,&PTR_FUN_14ae163d0);
  }
  return DAT_14cb43188;
}



// FUNCTION 14647933c FUN_14647933c body=48 status=ok
// SIG undefined FUN_14647933c(void)

void FUN_14647933c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14ae1d190;
  return;
}



// FUNCTION 14647936c FUN_14647936c body=55 status=ok
// SIG undefined FUN_14647936c(void)

void FUN_14647936c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb431a8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb431a8 = FUN_140002ddd(FUN_1464793a3,uVar1,L"NiagaraSimCacheDataBuffers");
  }
  return;
}



// FUNCTION 1464793a3 FUN_1464793a3 body=49 status=ok
// SIG undefined FUN_1464793a3(void)

longlong FUN_1464793a3(void)

{
  if (DAT_14cb431a0 == 0) {
    FUN_14086a14e(&DAT_14cb431a0,&PTR_FUN_14ae16548);
  }
  return DAT_14cb431a0;
}



// FUNCTION 1464793d4 FUN_1464793d4 body=48 status=ok
// SIG undefined FUN_1464793d4(void)

void FUN_1464793d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ae1d2f0;
  return;
}



// FUNCTION 146479404 FUN_146479404 body=55 status=ok
// SIG undefined FUN_146479404(void)

void FUN_146479404(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb431c0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb431c0 = FUN_140002ddd(FUN_14647943b,uVar1,L"NiagaraSimCacheEmitterFrame");
  }
  return;
}



// FUNCTION 14647943b FUN_14647943b body=47 status=ok
// SIG undefined FUN_14647943b(void)

longlong FUN_14647943b(void)

{
  if (DAT_14cb431b8 == 0) {
    FUN_14086a14e(&DAT_14cb431b8,&PTR_FUN_14ae166d8);
  }
  return DAT_14cb431b8;
}



// FUNCTION 14647946a FUN_14647946a body=48 status=ok
// SIG undefined FUN_14647946a(void)

void FUN_14647946a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d8;
  *puVar1 = &PTR_FUN_14ae1d450;
  return;
}



// FUNCTION 14647949a FUN_14647949a body=55 status=ok
// SIG undefined FUN_14647949a(void)

void FUN_14647949a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb431d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb431d8 = FUN_140002ddd(FUN_1464794d1,uVar1,L"NiagaraSimCacheSystemFrame");
  }
  return;
}



// FUNCTION 1464794d1 FUN_1464794d1 body=47 status=ok
// SIG undefined FUN_1464794d1(void)

longlong FUN_1464794d1(void)

{
  if (DAT_14cb431d0 == 0) {
    FUN_14086a14e(&DAT_14cb431d0,&PTR_FUN_14ae16810);
  }
  return DAT_14cb431d0;
}



// FUNCTION 146479500 FUN_146479500 body=48 status=ok
// SIG undefined FUN_146479500(void)

void FUN_146479500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d0;
  *puVar1 = &PTR_FUN_14ae1d5b0;
  return;
}



// FUNCTION 146479530 FUN_146479530 body=55 status=ok
// SIG undefined FUN_146479530(void)

void FUN_146479530(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb431f0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb431f0 = FUN_140002ddd(FUN_146479567,uVar1,L"NiagaraSimCacheFrame");
  }
  return;
}



// FUNCTION 146479567 FUN_146479567 body=47 status=ok
// SIG undefined FUN_146479567(void)

longlong FUN_146479567(void)

{
  if (DAT_14cb431e8 == 0) {
    FUN_14086a14e(&DAT_14cb431e8,&PTR_FUN_14ae16ac0);
  }
  return DAT_14cb431e8;
}



// FUNCTION 146479596 FUN_146479596 body=48 status=ok
// SIG undefined FUN_146479596(void)

void FUN_146479596(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000160;
  *puVar1 = &PTR_FUN_14ae1d710;
  return;
}



// FUNCTION 1464795c6 FUN_1464795c6 body=55 status=ok
// SIG undefined FUN_1464795c6(void)

void FUN_1464795c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43208 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43208 = FUN_140002ddd(FUN_1464795fd,uVar1,L"NiagaraSimCacheVariable");
  }
  return;
}



// FUNCTION 1464795fd FUN_1464795fd body=47 status=ok
// SIG undefined FUN_1464795fd(void)

longlong FUN_1464795fd(void)

{
  if (DAT_14cb43200 == 0) {
    FUN_14086a14e(&DAT_14cb43200,&PTR_FUN_14ae16d70);
  }
  return DAT_14cb43200;
}



// FUNCTION 14647962c FUN_14647962c body=48 status=ok
// SIG undefined FUN_14647962c(void)

void FUN_14647962c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14ae1d870;
  return;
}



// FUNCTION 14647965c FUN_14647965c body=55 status=ok
// SIG undefined FUN_14647965c(void)

void FUN_14647965c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43220 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43220 = FUN_140002ddd(FUN_146479693,uVar1,L"NiagaraSimCacheDataBuffersLayout");
  }
  return;
}



// FUNCTION 146479693 FUN_146479693 body=49 status=ok
// SIG undefined FUN_146479693(void)

longlong FUN_146479693(void)

{
  if (DAT_14cb43218 == 0) {
    FUN_14086a14e(&DAT_14cb43218,&PTR_FUN_14ae17288);
  }
  return DAT_14cb43218;
}



// FUNCTION 1464796c4 FUN_1464796c4 body=48 status=ok
// SIG undefined FUN_1464796c4(void)

void FUN_1464796c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14ae1d9e0;
  return;
}



// FUNCTION 1464796f4 FUN_1464796f4 body=55 status=ok
// SIG undefined FUN_1464796f4(void)

void FUN_1464796f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43238 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43238 = FUN_140002ddd(FUN_14647972b,uVar1,L"NiagaraSimCacheLayout");
  }
  return;
}



// FUNCTION 14647972b FUN_14647972b body=47 status=ok
// SIG undefined FUN_14647972b(void)

longlong FUN_14647972b(void)

{
  if (DAT_14cb43230 == 0) {
    FUN_14086a14e(&DAT_14cb43230,&PTR_FUN_14ae17400);
  }
  return DAT_14cb43230;
}



// FUNCTION 14647975a FUN_14647975a body=48 status=ok
// SIG undefined FUN_14647975a(void)

void FUN_14647975a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14ae1db40;
  return;
}



// FUNCTION 14647978a FUN_14647978a body=47 status=ok
// SIG undefined FUN_14647978a(void)

longlong FUN_14647978a(void)

{
  if (DAT_14cb43248 == 0) {
    FUN_14000fc22(&DAT_14cb43248,&PTR_FUN_14ae174e8);
  }
  return DAT_14cb43248;
}



// FUNCTION 1464797b9 FUN_1464797b9 body=47 status=ok
// SIG undefined FUN_1464797b9(void)

longlong FUN_1464797b9(void)

{
  if (DAT_14cb43250 == 0) {
    FUN_14000fc22(&DAT_14cb43250,&PTR_FUN_14ae175c0);
  }
  return DAT_14cb43250;
}



// FUNCTION 1464797e8 FUN_1464797e8 body=47 status=ok
// SIG undefined FUN_1464797e8(void)

longlong FUN_1464797e8(void)

{
  if (DAT_14cb43258 == 0) {
    FUN_14000fc22(&DAT_14cb43258,&PTR_FUN_14ae17690);
  }
  return DAT_14cb43258;
}



// FUNCTION 146479817 FUN_146479817 body=47 status=ok
// SIG undefined FUN_146479817(void)

longlong FUN_146479817(void)

{
  if (DAT_14cb43260 == 0) {
    FUN_14000fc22(&DAT_14cb43260,&PTR_FUN_14ae17710);
  }
  return DAT_14cb43260;
}



// FUNCTION 146479846 FUN_146479846 body=47 status=ok
// SIG undefined FUN_146479846(void)

longlong FUN_146479846(void)

{
  if (DAT_14cb43268 == 0) {
    FUN_14000fc22(&DAT_14cb43268,&PTR_FUN_14ae17790);
  }
  return DAT_14cb43268;
}



// FUNCTION 146479875 FUN_146479875 body=47 status=ok
// SIG undefined FUN_146479875(void)

longlong FUN_146479875(void)

{
  if (DAT_14cb43270 == 0) {
    FUN_14000fc22(&DAT_14cb43270,&PTR_FUN_14ae17820);
  }
  return DAT_14cb43270;
}



// FUNCTION 1464798a4 FUN_1464798a4 body=47 status=ok
// SIG undefined FUN_1464798a4(void)

longlong FUN_1464798a4(void)

{
  if (DAT_14cb43278 == 0) {
    FUN_14000fc22(&DAT_14cb43278,&PTR_FUN_14ae178b8);
  }
  return DAT_14cb43278;
}



// FUNCTION 1464798d3 FUN_1464798d3 body=47 status=ok
// SIG undefined FUN_1464798d3(void)

longlong FUN_1464798d3(void)

{
  if (DAT_14cb43280 == 0) {
    FUN_14000fc22(&DAT_14cb43280,&PTR_FUN_14ae17940);
  }
  return DAT_14cb43280;
}



// FUNCTION 146479902 FUN_146479902 body=47 status=ok
// SIG undefined FUN_146479902(void)

longlong FUN_146479902(void)

{
  if (DAT_14cb43288 == 0) {
    FUN_14000fc22(&DAT_14cb43288,&PTR_FUN_14ae17ae0);
  }
  return DAT_14cb43288;
}



// FUNCTION 146479931 FUN_146479931 body=47 status=ok
// SIG undefined FUN_146479931(void)

longlong FUN_146479931(void)

{
  if (DAT_14cb43290 == 0) {
    FUN_14000fc22(&DAT_14cb43290,&PTR_FUN_14ae17c68);
  }
  return DAT_14cb43290;
}



// FUNCTION 146479960 FUN_146479960 body=47 status=ok
// SIG undefined FUN_146479960(void)

longlong FUN_146479960(void)

{
  if (DAT_14cb43298 == 0) {
    FUN_14000fc22(&DAT_14cb43298,&PTR_FUN_14ae17e00);
  }
  return DAT_14cb43298;
}



// FUNCTION 14647998f FUN_14647998f body=47 status=ok
// SIG undefined FUN_14647998f(void)

longlong FUN_14647998f(void)

{
  if (DAT_14cb432a0 == 0) {
    FUN_14000fc22(&DAT_14cb432a0,&PTR_FUN_14ae17f98);
  }
  return DAT_14cb432a0;
}



// FUNCTION 1464799be FUN_1464799be body=47 status=ok
// SIG undefined FUN_1464799be(void)

longlong FUN_1464799be(void)

{
  if (DAT_14cb432a8 == 0) {
    FUN_14000fc22(&DAT_14cb432a8,&PTR_FUN_14ae18130);
  }
  return DAT_14cb432a8;
}



// FUNCTION 1464799ed FUN_1464799ed body=47 status=ok
// SIG undefined FUN_1464799ed(void)

longlong FUN_1464799ed(void)

{
  if (DAT_14cb432b0 == 0) {
    FUN_14000fc22(&DAT_14cb432b0,&PTR_FUN_14ae18338);
  }
  return DAT_14cb432b0;
}



// FUNCTION 146479a1c FUN_146479a1c body=47 status=ok
// SIG undefined FUN_146479a1c(void)

longlong FUN_146479a1c(void)

{
  if (DAT_14cb432b8 == 0) {
    FUN_14000fc22(&DAT_14cb432b8,&PTR_FUN_14ae18530);
  }
  return DAT_14cb432b8;
}



// FUNCTION 146479a4b FUN_146479a4b body=47 status=ok
// SIG undefined FUN_146479a4b(void)

longlong FUN_146479a4b(void)

{
  if (DAT_14cb432c0 == 0) {
    FUN_14000fc22(&DAT_14cb432c0,&PTR_FUN_14ae18718);
  }
  return DAT_14cb432c0;
}



// FUNCTION 146479a7a FUN_146479a7a body=47 status=ok
// SIG undefined FUN_146479a7a(void)

longlong FUN_146479a7a(void)

{
  if (DAT_14cb432c8 == 0) {
    FUN_14000fc22(&DAT_14cb432c8,&PTR_FUN_14ae18910);
  }
  return DAT_14cb432c8;
}



// FUNCTION 146479aa9 FUN_146479aa9 body=47 status=ok
// SIG undefined FUN_146479aa9(void)

longlong FUN_146479aa9(void)

{
  if (DAT_14cb432d0 == 0) {
    FUN_14000fc22(&DAT_14cb432d0,&PTR_FUN_14ae18ab0);
  }
  return DAT_14cb432d0;
}



// FUNCTION 146479ad8 FUN_146479ad8 body=47 status=ok
// SIG undefined FUN_146479ad8(void)

longlong FUN_146479ad8(void)

{
  if (DAT_14cb432d8 == 0) {
    FUN_14000fc22(&DAT_14cb432d8,&PTR_FUN_14ae18c50);
  }
  return DAT_14cb432d8;
}



// FUNCTION 146479b07 FUN_146479b07 body=47 status=ok
// SIG undefined FUN_146479b07(void)

longlong FUN_146479b07(void)

{
  if (DAT_14cb432e0 == 0) {
    FUN_14000fc22(&DAT_14cb432e0,&PTR_FUN_14ae18df0);
  }
  return DAT_14cb432e0;
}



// FUNCTION 146479b36 FUN_146479b36 body=34 status=ok
// SIG undefined FUN_146479b36(void)

void FUN_146479b36(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14110c9fe();
  FUN_14069c8d6(uVar1,&PTR_s_GetAttributeCaptureMode_14ae18e30,0x14);
  return;
}



// FUNCTION 146479b5d FUN_146479b5d body=49 status=ok
// SIG undefined FUN_146479b5d(void)

longlong FUN_146479b5d(void)

{
  if (DAT_14cb43358 == 0) {
    FUN_14073dd9a(&DAT_14cb43358,&PTR_LAB_14ae1a750);
  }
  return DAT_14cb43358;
}



// FUNCTION 146479b8e FUN_146479b8e body=47 status=ok
// SIG undefined FUN_146479b8e(void)

longlong FUN_146479b8e(void)

{
  if (DAT_14cb43330 == 0) {
    FUN_14000fc22(&DAT_14cb43330,&PTR_FUN_14ae19d68);
  }
  return DAT_14cb43330;
}



// FUNCTION 146479bbd FUN_146479bbd body=47 status=ok
// SIG undefined FUN_146479bbd(void)

longlong FUN_146479bbd(void)

{
  if (DAT_14cb43338 == 0) {
    FUN_14000fc22(&DAT_14cb43338,&PTR_FUN_14ae19f98);
  }
  return DAT_14cb43338;
}



// FUNCTION 146479bec FUN_146479bec body=47 status=ok
// SIG undefined FUN_146479bec(void)

longlong FUN_146479bec(void)

{
  if (DAT_14cb43340 == 0) {
    FUN_14000fc22(&DAT_14cb43340,&PTR_FUN_14ae1a2a0);
  }
  return DAT_14cb43340;
}



// FUNCTION 146479c1b FUN_146479c1b body=47 status=ok
// SIG undefined FUN_146479c1b(void)

longlong FUN_146479c1b(void)

{
  if (DAT_14cb43348 == 0) {
    FUN_14000fc22(&DAT_14cb43348,&PTR_FUN_14ae1a538);
  }
  return DAT_14cb43348;
}



// FUNCTION 146479c4a FUN_146479c4a body=34 status=ok
// SIG undefined FUN_146479c4a(void)

void FUN_146479c4a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d51d4();
  FUN_14069c8d6(uVar1,&PTR_s_CaptureNiagaraSimCache_14ae1a580,3);
  return;
}



// FUNCTION 146479c71 FUN_146479c71 body=47 status=ok
// SIG undefined FUN_146479c71(void)

longlong FUN_146479c71(void)

{
  if (DAT_14cb43380 == 0) {
    FUN_14073dd9a(&DAT_14cb43380,&PTR_LAB_14ae1ae50);
  }
  return DAT_14cb43380;
}



// FUNCTION 146479ca0 FUN_146479ca0 body=47 status=ok
// SIG undefined FUN_146479ca0(void)

longlong FUN_146479ca0(void)

{
  if (DAT_14cb43368 == 0) {
    FUN_14000fc22(&DAT_14cb43368,&PTR_FUN_14ae1ac78);
  }
  return DAT_14cb43368;
}



// FUNCTION 146479ccf FUN_146479ccf body=47 status=ok
// SIG undefined FUN_146479ccf(void)

longlong FUN_146479ccf(void)

{
  if (DAT_14cb43370 == 0) {
    FUN_14000fc22(&DAT_14cb43370,&PTR_FUN_14ae1ad68);
  }
  return DAT_14cb43370;
}



// FUNCTION 146479cfe FUN_146479cfe body=34 status=ok
// SIG undefined FUN_146479cfe(void)

void FUN_146479cfe(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a79ba0();
  FUN_14069c8d6(uVar1,&PTR_s_CaptureNiagaraSimCacheImmediate_14ae1adb0,2);
  return;
}



// FUNCTION 146479d20 FUN_146479d20 body=35 status=ok
// SIG undefined FUN_146479d20(void)

void FUN_146479d20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae1ae90;
  return;
}



// FUNCTION 146479d44 FUN_146479d44 body=122 status=ok
// SIG undefined FUN_146479d44(void)

void FUN_146479d44(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14586acca();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
    lVar1 = *(longlong *)(param_1 + 0x30);
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
      local_11 = false;
    }
    else {
      local_11 = *(longlong *)(lVar1 + 0x40) != 0;
    }
    FUN_1447cd2ec(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146479dc0 FUN_146479dc0 body=40 status=ok
// SIG undefined FUN_146479dc0(void)

undefined8 FUN_146479dc0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479de8 FUN_146479de8 body=40 status=ok
// SIG undefined FUN_146479de8(void)

undefined8 FUN_146479de8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479e10 FUN_146479e10 body=29 status=ok
// SIG undefined FUN_146479e10(void)

undefined8 FUN_146479e10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479e2e FUN_146479e2e body=29 status=ok
// SIG undefined FUN_146479e2e(void)

undefined8 FUN_146479e2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479e4c FUN_146479e4c body=29 status=ok
// SIG undefined FUN_146479e4c(void)

undefined8 FUN_146479e4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479e6a FUN_146479e6a body=29 status=ok
// SIG undefined FUN_146479e6a(void)

undefined8 FUN_146479e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479e88 FUN_146479e88 body=29 status=ok
// SIG undefined FUN_146479e88(void)

undefined8 FUN_146479e88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479ea6 FUN_146479ea6 body=29 status=ok
// SIG undefined FUN_146479ea6(void)

undefined8 FUN_146479ea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479ec4 FUN_146479ec4 body=29 status=ok
// SIG undefined FUN_146479ec4(void)

undefined8 FUN_146479ec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479ee2 FUN_146479ee2 body=29 status=ok
// SIG undefined FUN_146479ee2(void)

undefined8 FUN_146479ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479f00 FUN_146479f00 body=29 status=ok
// SIG undefined FUN_146479f00(void)

undefined8 FUN_146479f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479f1e FUN_146479f1e body=29 status=ok
// SIG undefined FUN_146479f1e(void)

undefined8 FUN_146479f1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479f3c FUN_146479f3c body=29 status=ok
// SIG undefined FUN_146479f3c(void)

undefined8 FUN_146479f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479f5a FUN_146479f5a body=29 status=ok
// SIG undefined FUN_146479f5a(void)

undefined8 FUN_146479f5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479f78 FUN_146479f78 body=29 status=ok
// SIG undefined FUN_146479f78(void)

undefined8 FUN_146479f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479f96 FUN_146479f96 body=29 status=ok
// SIG undefined FUN_146479f96(void)

undefined8 FUN_146479f96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479fb4 FUN_146479fb4 body=29 status=ok
// SIG undefined FUN_146479fb4(void)

undefined8 FUN_146479fb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479fd2 FUN_146479fd2 body=29 status=ok
// SIG undefined FUN_146479fd2(void)

undefined8 FUN_146479fd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146479ff0 FUN_146479ff0 body=29 status=ok
// SIG undefined FUN_146479ff0(void)

undefined8 FUN_146479ff0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a00e FUN_14647a00e body=29 status=ok
// SIG undefined FUN_14647a00e(void)

undefined8 FUN_14647a00e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a02c FUN_14647a02c body=29 status=ok
// SIG undefined FUN_14647a02c(void)

undefined8 FUN_14647a02c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a04a FUN_14647a04a body=29 status=ok
// SIG undefined FUN_14647a04a(void)

undefined8 FUN_14647a04a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a068 FUN_14647a068 body=29 status=ok
// SIG undefined FUN_14647a068(void)

undefined8 FUN_14647a068(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a086 FUN_14647a086 body=29 status=ok
// SIG undefined FUN_14647a086(void)

undefined8 FUN_14647a086(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a0a3 FUN_14647a0a3 body=43 status=ok
// SIG undefined FUN_14647a0a3(void)

void FUN_14647a0a3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14ae1e380;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(byte *)(puVar1 + 7) = *(byte *)(puVar1 + 7) | 1;
  return;
}



// FUNCTION 14647a0d3 FUN_14647a0d3 body=47 status=ok
// SIG undefined FUN_14647a0d3(void)

longlong FUN_14647a0d3(void)

{
  if (DAT_14cb433f8 == 0) {
    FUN_14073dd9a(&DAT_14cb433f8,&PTR_LAB_14ae1e338);
  }
  return DAT_14cb433f8;
}



// FUNCTION 14647a102 FUN_14647a102 body=47 status=ok
// SIG undefined FUN_14647a102(void)

longlong FUN_14647a102(void)

{
  if (DAT_14cb43410 == 0) {
    FUN_14073dd9a(&DAT_14cb43410,&PTR_LAB_14ae1ee28);
  }
  return DAT_14cb43410;
}



// FUNCTION 14647a131 FUN_14647a131 body=47 status=ok
// SIG undefined FUN_14647a131(void)

longlong FUN_14647a131(void)

{
  if (DAT_14cb435c0 == 0) {
    FUN_1409ce572(&DAT_14cb435c0,&PTR_FUN_14ae1f900);
  }
  return DAT_14cb435c0;
}



// FUNCTION 14647a160 FUN_14647a160 body=47 status=ok
// SIG undefined FUN_14647a160(void)

longlong FUN_14647a160(void)

{
  if (DAT_14cb435d8 == 0) {
    FUN_1409ce572(&DAT_14cb435d8,&PTR_FUN_14ae1f9b0);
  }
  return DAT_14cb435d8;
}



// FUNCTION 14647a18f FUN_14647a18f body=47 status=ok
// SIG undefined FUN_14647a18f(void)

longlong FUN_14647a18f(void)

{
  if (DAT_14cb435f0 == 0) {
    FUN_1409ce572(&DAT_14cb435f0,&PTR_FUN_14ae1fa70);
  }
  return DAT_14cb435f0;
}



// FUNCTION 14647a1c9 FUN_14647a1c9 body=47 status=ok
// SIG undefined FUN_14647a1c9(void)

longlong FUN_14647a1c9(void)

{
  if (DAT_14cb43610 == 0) {
    FUN_14073dd9a(&DAT_14cb43610,&PTR_LAB_14ae20cc8);
  }
  return DAT_14cb43610;
}



// FUNCTION 14647a1f8 FUN_14647a1f8 body=123 status=ok
// SIG undefined FUN_14647a1f8(void)

void FUN_14647a1f8(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)FUN_145aa793e();
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  FUN_14011fffe(lVar4);
  if ((longlong)DAT_14cb43628 != 0) {
    lVar5 = (longlong)DAT_14cb43628 << 3;
    lVar4 = DAT_14cb43620;
    do {
      lVar2 = FUN_14479d2ce(lVar4);
      if (lVar2 != 0) {
        uVar3 = FUN_14479d2ce(lVar4);
        FUN_14011fffe(uVar3);
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14647a274 FUN_14647a274 body=55 status=ok
// SIG undefined FUN_14647a274(void)

void FUN_14647a274(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43638 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43638 = FUN_140002ddd(FUN_14647a2ab,uVar1,L"NiagaraEmitterCompiledData");
  }
  return;
}



// FUNCTION 14647a2ab FUN_14647a2ab body=47 status=ok
// SIG undefined FUN_14647a2ab(void)

longlong FUN_14647a2ab(void)

{
  if (DAT_14cb43630 == 0) {
    FUN_14086a14e(&DAT_14cb43630,&PTR_FUN_14ae214c0);
  }
  return DAT_14cb43630;
}



// FUNCTION 14647a2da FUN_14647a2da body=48 status=ok
// SIG undefined FUN_14647a2da(void)

void FUN_14647a2da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000138;
  *puVar1 = &PTR_FUN_14ae25d80;
  return;
}



// FUNCTION 14647a30a FUN_14647a30a body=55 status=ok
// SIG undefined FUN_14647a30a(void)

void FUN_14647a30a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43650 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43650 = FUN_140002ddd(FUN_14647a341,uVar1,L"NiagaraParameterDataSetBinding");
  }
  return;
}



// FUNCTION 14647a341 FUN_14647a341 body=49 status=ok
// SIG undefined FUN_14647a341(void)

longlong FUN_14647a341(void)

{
  if (DAT_14cb43648 == 0) {
    FUN_14086a14e(&DAT_14cb43648,&PTR_FUN_14ae21600);
  }
  return DAT_14cb43648;
}



// FUNCTION 14647a372 FUN_14647a372 body=48 status=ok
// SIG undefined FUN_14647a372(void)

void FUN_14647a372(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14ae25ee0;
  return;
}



// FUNCTION 14647a3a2 FUN_14647a3a2 body=55 status=ok
// SIG undefined FUN_14647a3a2(void)

void FUN_14647a3a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43668 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43668 = FUN_140002ddd(FUN_141839ef5,uVar1,L"NiagaraParameterDataSetBindingCollection");
  }
  return;
}



// FUNCTION 14647a3da FUN_14647a3da body=48 status=ok
// SIG undefined FUN_14647a3da(void)

void FUN_14647a3da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ae26050;
  return;
}



// FUNCTION 14647a40a FUN_14647a40a body=55 status=ok
// SIG undefined FUN_14647a40a(void)

void FUN_14647a40a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43680 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43680 = FUN_140002ddd(FUN_14647a441,uVar1,L"NiagaraSystemCompiledData");
  }
  return;
}



// FUNCTION 14647a441 FUN_14647a441 body=47 status=ok
// SIG undefined FUN_14647a441(void)

longlong FUN_14647a441(void)

{
  if (DAT_14cb43678 == 0) {
    FUN_14086a14e(&DAT_14cb43678,&PTR_FUN_14ae21dc0);
  }
  return DAT_14cb43678;
}



// FUNCTION 14647a470 FUN_14647a470 body=48 status=ok
// SIG undefined FUN_14647a470(void)

void FUN_14647a470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000240;
  *puVar1 = &PTR_FUN_14ae261b0;
  return;
}



// FUNCTION 14647a4a0 FUN_14647a4a0 body=55 status=ok
// SIG undefined FUN_14647a4a0(void)

void FUN_14647a4a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43698 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43698 = FUN_140002ddd(FUN_14647a4d7,uVar1,L"NiagaraSystemScalabilityOverrides");
  }
  return;
}



// FUNCTION 14647a4d7 FUN_14647a4d7 body=47 status=ok
// SIG undefined FUN_14647a4d7(void)

longlong FUN_14647a4d7(void)

{
  if (DAT_14cb43690 == 0) {
    FUN_14086a14e(&DAT_14cb43690,&PTR_FUN_14ae21ef8);
  }
  return DAT_14cb43690;
}



// FUNCTION 14647a506 FUN_14647a506 body=48 status=ok
// SIG undefined FUN_14647a506(void)

void FUN_14647a506(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ae26310;
  return;
}



// FUNCTION 14647a53b FUN_14647a53b body=47 status=ok
// SIG undefined FUN_14647a53b(void)

longlong FUN_14647a53b(void)

{
  if (DAT_14cb436b0 == 0) {
    FUN_14073dd9a(&DAT_14cb436b0,&PTR_LAB_14ae23098);
  }
  return DAT_14cb436b0;
}



// FUNCTION 14647a56a FUN_14647a56a body=40 status=ok
// SIG undefined FUN_14647a56a(void)

undefined8 FUN_14647a56a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a592 FUN_14647a592 body=29 status=ok
// SIG undefined FUN_14647a592(void)

undefined8 FUN_14647a592(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a5b0 FUN_14647a5b0 body=29 status=ok
// SIG undefined FUN_14647a5b0(void)

undefined8 FUN_14647a5b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a5ce FUN_14647a5ce body=29 status=ok
// SIG undefined FUN_14647a5ce(void)

undefined8 FUN_14647a5ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a5ec FUN_14647a5ec body=29 status=ok
// SIG undefined FUN_14647a5ec(void)

undefined8 FUN_14647a5ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a60a FUN_14647a60a body=29 status=ok
// SIG undefined FUN_14647a60a(void)

undefined8 FUN_14647a60a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647a628 FUN_14647a628 body=147 status=ok
// SIG undefined FUN_14647a628(void)

void FUN_14647a628(longlong param_1,int param_2)

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



// FUNCTION 14647a6bc FUN_14647a6bc body=55 status=ok
// SIG undefined FUN_14647a6bc(void)

void FUN_14647a6bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a08 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a08 = FUN_140002ddd(FUN_14647a6f3,uVar1,L"NiagaraWildcard");
  }
  return;
}



// FUNCTION 14647a6f3 FUN_14647a6f3 body=47 status=ok
// SIG undefined FUN_14647a6f3(void)

longlong FUN_14647a6f3(void)

{
  if (DAT_14cb43a00 == 0) {
    FUN_14086a14e(&DAT_14cb43a00,&PTR_FUN_14ae26d78);
  }
  return DAT_14cb43a00;
}



// FUNCTION 14647a722 FUN_14647a722 body=48 status=ok
// SIG undefined FUN_14647a722(void)

void FUN_14647a722(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ae2c500;
  return;
}



// FUNCTION 14647a752 FUN_14647a752 body=55 status=ok
// SIG undefined FUN_14647a752(void)

void FUN_14647a752(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a20 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a20 = FUN_140002ddd(FUN_14647a789,uVar1,L"NiagaraFloat");
  }
  return;
}



// FUNCTION 14647a789 FUN_14647a789 body=47 status=ok
// SIG undefined FUN_14647a789(void)

longlong FUN_14647a789(void)

{
  if (DAT_14cb43a18 == 0) {
    FUN_14086a14e(&DAT_14cb43a18,&PTR_FUN_14ae26e00);
  }
  return DAT_14cb43a18;
}



// FUNCTION 14647a7b8 FUN_14647a7b8 body=48 status=ok
// SIG undefined FUN_14647a7b8(void)

void FUN_14647a7b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14ae2c660;
  return;
}



// FUNCTION 14647a7e8 FUN_14647a7e8 body=55 status=ok
// SIG undefined FUN_14647a7e8(void)

void FUN_14647a7e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a38 = FUN_140002ddd(FUN_14647a81f,uVar1,L"NiagaraInt32");
  }
  return;
}



// FUNCTION 14647a81f FUN_14647a81f body=47 status=ok
// SIG undefined FUN_14647a81f(void)

longlong FUN_14647a81f(void)

{
  if (DAT_14cb43a30 == 0) {
    FUN_14086a14e(&DAT_14cb43a30,&PTR_FUN_14ae26e88);
  }
  return DAT_14cb43a30;
}



// FUNCTION 14647a84e FUN_14647a84e body=48 status=ok
// SIG undefined FUN_14647a84e(void)

void FUN_14647a84e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14ae2c7c0;
  return;
}



// FUNCTION 14647a87e FUN_14647a87e body=55 status=ok
// SIG undefined FUN_14647a87e(void)

void FUN_14647a87e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a50 = FUN_140002ddd(FUN_14647a8b5,uVar1,L"NiagaraBool");
  }
  return;
}



// FUNCTION 14647a8b5 FUN_14647a8b5 body=47 status=ok
// SIG undefined FUN_14647a8b5(void)

longlong FUN_14647a8b5(void)

{
  if (DAT_14cb43a48 == 0) {
    FUN_14086a14e(&DAT_14cb43a48,&PTR_FUN_14ae26f10);
  }
  return DAT_14cb43a48;
}



// FUNCTION 14647a8e4 FUN_14647a8e4 body=48 status=ok
// SIG undefined FUN_14647a8e4(void)

void FUN_14647a8e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14ae2c920;
  return;
}



// FUNCTION 14647a914 FUN_14647a914 body=55 status=ok
// SIG undefined FUN_14647a914(void)

void FUN_14647a914(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a68 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a68 = FUN_140002ddd(FUN_14647a94b,uVar1,L"NiagaraPosition");
  }
  return;
}



// FUNCTION 14647a94b FUN_14647a94b body=47 status=ok
// SIG undefined FUN_14647a94b(void)

longlong FUN_14647a94b(void)

{
  if (DAT_14cb43a60 == 0) {
    FUN_14086a14e(&DAT_14cb43a60,&PTR_FUN_14ae26f48);
  }
  return DAT_14cb43a60;
}



// FUNCTION 14647a97a FUN_14647a97a body=48 status=ok
// SIG undefined FUN_14647a97a(void)

void FUN_14647a97a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ae2ca80;
  return;
}



// FUNCTION 14647a9aa FUN_14647a9aa body=55 status=ok
// SIG undefined FUN_14647a9aa(void)

void FUN_14647a9aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a80 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a80 = FUN_140002ddd(FUN_14647a9e1,uVar1,L"NiagaraHalf");
  }
  return;
}



// FUNCTION 14647a9e1 FUN_14647a9e1 body=47 status=ok
// SIG undefined FUN_14647a9e1(void)

longlong FUN_14647a9e1(void)

{
  if (DAT_14cb43a78 == 0) {
    FUN_14086a14e(&DAT_14cb43a78,&PTR_FUN_14ae26fd0);
  }
  return DAT_14cb43a78;
}



// FUNCTION 14647aa10 FUN_14647aa10 body=48 status=ok
// SIG undefined FUN_14647aa10(void)

void FUN_14647aa10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_200000002;
  *puVar1 = &PTR_FUN_14ae2cbe0;
  return;
}



// FUNCTION 14647aa40 FUN_14647aa40 body=55 status=ok
// SIG undefined FUN_14647aa40(void)

void FUN_14647aa40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43a98 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43a98 = FUN_140002ddd(FUN_14647aa77,uVar1,L"NiagaraHalfVector2");
  }
  return;
}



// FUNCTION 14647aa77 FUN_14647aa77 body=47 status=ok
// SIG undefined FUN_14647aa77(void)

longlong FUN_14647aa77(void)

{
  if (DAT_14cb43a90 == 0) {
    FUN_14086a14e(&DAT_14cb43a90,&PTR_FUN_14ae270a8);
  }
  return DAT_14cb43a90;
}



// FUNCTION 14647aaa6 FUN_14647aaa6 body=48 status=ok
// SIG undefined FUN_14647aaa6(void)

void FUN_14647aaa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x200000004;
  *puVar1 = &PTR_FUN_14ae2cd40;
  return;
}



// FUNCTION 14647aad6 FUN_14647aad6 body=55 status=ok
// SIG undefined FUN_14647aad6(void)

void FUN_14647aad6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ab0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ab0 = FUN_140002ddd(FUN_14647ab0d,uVar1,L"NiagaraHalfVector3");
  }
  return;
}



// FUNCTION 14647ab0d FUN_14647ab0d body=47 status=ok
// SIG undefined FUN_14647ab0d(void)

longlong FUN_14647ab0d(void)

{
  if (DAT_14cb43aa8 == 0) {
    FUN_14086a14e(&DAT_14cb43aa8,&PTR_FUN_14ae271c0);
  }
  return DAT_14cb43aa8;
}



// FUNCTION 14647ab3c FUN_14647ab3c body=48 status=ok
// SIG undefined FUN_14647ab3c(void)

void FUN_14647ab3c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x200000006;
  *puVar1 = &PTR_FUN_14ae2cea0;
  return;
}



// FUNCTION 14647ab6c FUN_14647ab6c body=55 status=ok
// SIG undefined FUN_14647ab6c(void)

void FUN_14647ab6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ac8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ac8 = FUN_140002ddd(FUN_14647aba3,uVar1,L"NiagaraHalfVector4");
  }
  return;
}



// FUNCTION 14647aba3 FUN_14647aba3 body=47 status=ok
// SIG undefined FUN_14647aba3(void)

longlong FUN_14647aba3(void)

{
  if (DAT_14cb43ac0 == 0) {
    FUN_14086a14e(&DAT_14cb43ac0,&PTR_FUN_14ae27318);
  }
  return DAT_14cb43ac0;
}



// FUNCTION 14647abd2 FUN_14647abd2 body=48 status=ok
// SIG undefined FUN_14647abd2(void)

void FUN_14647abd2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x200000008;
  *puVar1 = &PTR_FUN_14ae2d000;
  return;
}



// FUNCTION 14647ac02 FUN_14647ac02 body=55 status=ok
// SIG undefined FUN_14647ac02(void)

void FUN_14647ac02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ae0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ae0 = FUN_140002ddd(FUN_14647ac39,uVar1,L"NiagaraNumeric");
  }
  return;
}



// FUNCTION 14647ac39 FUN_14647ac39 body=47 status=ok
// SIG undefined FUN_14647ac39(void)

longlong FUN_14647ac39(void)

{
  if (DAT_14cb43ad8 == 0) {
    FUN_14086a14e(&DAT_14cb43ad8,&PTR_FUN_14ae27360);
  }
  return DAT_14cb43ad8;
}



// FUNCTION 14647ac68 FUN_14647ac68 body=48 status=ok
// SIG undefined FUN_14647ac68(void)

void FUN_14647ac68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ae2d160;
  return;
}



// FUNCTION 14647ac98 FUN_14647ac98 body=55 status=ok
// SIG undefined FUN_14647ac98(void)

void FUN_14647ac98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43af8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43af8 = FUN_140002ddd(FUN_14647accf,uVar1,L"NiagaraParameterMap");
  }
  return;
}



// FUNCTION 14647accf FUN_14647accf body=47 status=ok
// SIG undefined FUN_14647accf(void)

longlong FUN_14647accf(void)

{
  if (DAT_14cb43af0 == 0) {
    FUN_14086a14e(&DAT_14cb43af0,&PTR_FUN_14ae273b0);
  }
  return DAT_14cb43af0;
}



// FUNCTION 14647acfe FUN_14647acfe body=48 status=ok
// SIG undefined FUN_14647acfe(void)

void FUN_14647acfe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ae2d2c0;
  return;
}



// FUNCTION 14647ad2e FUN_14647ad2e body=55 status=ok
// SIG undefined FUN_14647ad2e(void)

void FUN_14647ad2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43b10 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43b10 = FUN_140002ddd(FUN_14647ad65,uVar1,L"NiagaraDouble");
  }
  return;
}



// FUNCTION 14647ad65 FUN_14647ad65 body=47 status=ok
// SIG undefined FUN_14647ad65(void)

longlong FUN_14647ad65(void)

{
  if (DAT_14cb43b08 == 0) {
    FUN_14086a14e(&DAT_14cb43b08,&PTR_FUN_14ae27458);
  }
  return DAT_14cb43b08;
}



// FUNCTION 14647ad94 FUN_14647ad94 body=48 status=ok
// SIG undefined FUN_14647ad94(void)

void FUN_14647ad94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14ae2d430;
  return;
}



// FUNCTION 14647adc4 FUN_14647adc4 body=55 status=ok
// SIG undefined FUN_14647adc4(void)

void FUN_14647adc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43b28 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43b28 = FUN_140002ddd(FUN_14647adfb,uVar1,L"NiagaraMatrix");
  }
  return;
}



// FUNCTION 14647adfb FUN_14647adfb body=47 status=ok
// SIG undefined FUN_14647adfb(void)

longlong FUN_14647adfb(void)

{
  if (DAT_14cb43b20 == 0) {
    FUN_14086a14e(&DAT_14cb43b20,&PTR_FUN_14ae275e0);
  }
  return DAT_14cb43b20;
}



// FUNCTION 14647ae2a FUN_14647ae2a body=48 status=ok
// SIG undefined FUN_14647ae2a(void)

void FUN_14647ae2a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000040;
  *puVar1 = &PTR_FUN_14ae2d590;
  return;
}



// FUNCTION 14647ae5a FUN_14647ae5a body=55 status=ok
// SIG undefined FUN_14647ae5a(void)

void FUN_14647ae5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43b40 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43b40 = FUN_140002ddd(FUN_14647ae91,uVar1,L"NiagaraEmitterID");
  }
  return;
}



// FUNCTION 14647ae91 FUN_14647ae91 body=47 status=ok
// SIG undefined FUN_14647ae91(void)

longlong FUN_14647ae91(void)

{
  if (DAT_14cb43b38 == 0) {
    FUN_14086a14e(&DAT_14cb43b38,&PTR_FUN_14ae27698);
  }
  return DAT_14cb43b38;
}



// FUNCTION 14647aec0 FUN_14647aec0 body=48 status=ok
// SIG undefined FUN_14647aec0(void)

void FUN_14647aec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14ae2d6f0;
  return;
}



// FUNCTION 14647aef0 FUN_14647aef0 body=55 status=ok
// SIG undefined FUN_14647aef0(void)

void FUN_14647aef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43b58 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43b58 = FUN_140002ddd(FUN_14647af27,uVar1,L"NiagaraAssetVersion");
  }
  return;
}



// FUNCTION 14647af27 FUN_14647af27 body=47 status=ok
// SIG undefined FUN_14647af27(void)

longlong FUN_14647af27(void)

{
  if (DAT_14cb43b50 == 0) {
    FUN_14086a14e(&DAT_14cb43b50,&PTR_FUN_14ae27878);
  }
  return DAT_14cb43b50;
}



// FUNCTION 14647af56 FUN_14647af56 body=48 status=ok
// SIG undefined FUN_14647af56(void)

void FUN_14647af56(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14ae2d850;
  return;
}



// FUNCTION 14647af86 FUN_14647af86 body=47 status=ok
// SIG undefined FUN_14647af86(void)

longlong FUN_14647af86(void)

{
  if (DAT_14cb43b68 == 0) {
    FUN_1409ce572(&DAT_14cb43b68,&PTR_FUN_14ae27930);
  }
  return DAT_14cb43b68;
}



// FUNCTION 14647afb6 FUN_14647afb6 body=55 status=ok
// SIG undefined FUN_14647afb6(void)

void FUN_14647afb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43b88 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43b88 = FUN_140002ddd(FUN_14647afed,uVar1,L"NiagaraStructConversionStep");
  }
  return;
}



// FUNCTION 14647afed FUN_14647afed body=47 status=ok
// SIG undefined FUN_14647afed(void)

longlong FUN_14647afed(void)

{
  if (DAT_14cb43b80 == 0) {
    FUN_14086a14e(&DAT_14cb43b80,&PTR_FUN_14ae27ba0);
  }
  return DAT_14cb43b80;
}



// FUNCTION 14647b01c FUN_14647b01c body=48 status=ok
// SIG undefined FUN_14647b01c(void)

void FUN_14647b01c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14ae2dae0;
  return;
}



// FUNCTION 14647b04c FUN_14647b04c body=55 status=ok
// SIG undefined FUN_14647b04c(void)

void FUN_14647b04c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ba0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ba0 = FUN_140002ddd(FUN_14647b083,uVar1,L"NiagaraLwcStructConverter");
  }
  return;
}



// FUNCTION 14647b083 FUN_14647b083 body=49 status=ok
// SIG undefined FUN_14647b083(void)

longlong FUN_14647b083(void)

{
  if (DAT_14cb43b98 == 0) {
    FUN_14086a14e(&DAT_14cb43b98,&PTR_FUN_14ae27d60);
  }
  return DAT_14cb43b98;
}



// FUNCTION 14647b0b4 FUN_14647b0b4 body=48 status=ok
// SIG undefined FUN_14647b0b4(void)

void FUN_14647b0b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ae2dc40;
  return;
}



// FUNCTION 14647b0e4 FUN_14647b0e4 body=49 status=ok
// SIG undefined FUN_14647b0e4(void)

longlong FUN_14647b0e4(void)

{
  if (DAT_14cb43bb0 == 0) {
    FUN_14086a14e(&DAT_14cb43bb0,&PTR_FUN_14ae27ef8);
  }
  return DAT_14cb43bb0;
}



// FUNCTION 14647b116 FUN_14647b116 body=48 status=ok
// SIG undefined FUN_14647b116(void)

void FUN_14647b116(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ae2dda0;
  return;
}



// FUNCTION 14647b146 FUN_14647b146 body=49 status=ok
// SIG undefined FUN_14647b146(void)

longlong FUN_14647b146(void)

{
  if (DAT_14cb43bc8 == 0) {
    FUN_14086a14e(&DAT_14cb43bc8,&PTR_FUN_14ae27fd0);
  }
  return DAT_14cb43bc8;
}



// FUNCTION 14647b178 FUN_14647b178 body=48 status=ok
// SIG undefined FUN_14647b178(void)

void FUN_14647b178(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14ae2df00;
  return;
}



// FUNCTION 14647b1a8 FUN_14647b1a8 body=55 status=ok
// SIG undefined FUN_14647b1a8(void)

void FUN_14647b1a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43be8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43be8 = FUN_140002ddd(FUN_14647b1df,uVar1,L"NiagaraRandInfo");
  }
  return;
}



// FUNCTION 14647b1df FUN_14647b1df body=47 status=ok
// SIG undefined FUN_14647b1df(void)

longlong FUN_14647b1df(void)

{
  if (DAT_14cb43be0 == 0) {
    FUN_14086a14e(&DAT_14cb43be0,&PTR_FUN_14ae280f8);
  }
  return DAT_14cb43be0;
}



// FUNCTION 14647b20e FUN_14647b20e body=48 status=ok
// SIG undefined FUN_14647b20e(void)

void FUN_14647b20e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ae2e060;
  return;
}


