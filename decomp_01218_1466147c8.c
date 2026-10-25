// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466147c8 FUN_1466147c8 body=34 status=ok
// SIG undefined FUN_1466147c8(void)

void FUN_1466147c8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140232dfe();
  FUN_14069c8d6(uVar1,&PTR_s_BroadcastEffect_14b917de0,2);
  return;
}



// FUNCTION 1466147f4 FUN_1466147f4 body=105 status=ok
// SIG undefined FUN_1466147f4(void)

void FUN_1466147f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbbfd68) {
    FUN_144b3d300(&DAT_14cbbfd68);
    if (DAT_14cbbfd68 == -1) {
      FUN_1446f470e(&DAT_14cbbfd60,L"bIsUsing",1);
      _Init_thread_footer(&DAT_14cbbfd68);
      return;
    }
  }
  return;
}



// FUNCTION 14661485e FUN_14661485e body=55 status=ok
// SIG undefined FUN_14661485e(void)

void FUN_14661485e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfd78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfd78 = FUN_140002ddd(FUN_146614895,uVar1,L"RepairKitAudioAspect");
  }
  return;
}



// FUNCTION 146614895 FUN_146614895 body=47 status=ok
// SIG undefined FUN_146614895(void)

longlong FUN_146614895(void)

{
  if (DAT_14cbbfd70 == 0) {
    FUN_14086a14e(&DAT_14cbbfd70,&PTR_FUN_14b918618);
  }
  return DAT_14cbbfd70;
}



// FUNCTION 1466148c4 FUN_1466148c4 body=48 status=ok
// SIG undefined FUN_1466148c4(void)

void FUN_1466148c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000f8;
  *puVar1 = &PTR_FUN_14b91b7a0;
  return;
}



// FUNCTION 1466148f4 FUN_1466148f4 body=55 status=ok
// SIG undefined FUN_1466148f4(void)

void FUN_1466148f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfd90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfd90 = FUN_140002ddd(FUN_14661492b,uVar1,L"RepairKitContextResolver");
  }
  return;
}



// FUNCTION 14661492b FUN_14661492b body=47 status=ok
// SIG undefined FUN_14661492b(void)

longlong FUN_14661492b(void)

{
  if (DAT_14cbbfd88 == 0) {
    FUN_14086a14e(&DAT_14cbbfd88,&PTR_FUN_14b9186c8);
  }
  return DAT_14cbbfd88;
}



// FUNCTION 14661495a FUN_14661495a body=48 status=ok
// SIG undefined FUN_14661495a(void)

void FUN_14661495a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b91b950;
  return;
}



// FUNCTION 14661498a FUN_14661498a body=55 status=ok
// SIG undefined FUN_14661498a(void)

void FUN_14661498a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfda8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfda8 = FUN_140002ddd(FUN_1466149c1,uVar1,L"RepairKitCurativeAspect");
  }
  return;
}



// FUNCTION 1466149c1 FUN_1466149c1 body=47 status=ok
// SIG undefined FUN_1466149c1(void)

longlong FUN_1466149c1(void)

{
  if (DAT_14cbbfda0 == 0) {
    FUN_14086a14e(&DAT_14cbbfda0,&PTR_FUN_14b918770);
  }
  return DAT_14cbbfda0;
}



// FUNCTION 1466149f0 FUN_1466149f0 body=48 status=ok
// SIG undefined FUN_1466149f0(void)

void FUN_1466149f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b91bad0;
  return;
}



// FUNCTION 146614a20 FUN_146614a20 body=47 status=ok
// SIG undefined FUN_146614a20(void)

longlong FUN_146614a20(void)

{
  if (DAT_14cbbfdb8 == 0) {
    FUN_14086a14e(&DAT_14cbbfdb8,&PTR_FUN_14b918850);
  }
  return DAT_14cbbfdb8;
}



// FUNCTION 146614a50 FUN_146614a50 body=48 status=ok
// SIG undefined FUN_146614a50(void)

void FUN_146614a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b91bc80;
  return;
}



// FUNCTION 146614a80 FUN_146614a80 body=40 status=ok
// SIG undefined FUN_146614a80(void)

undefined8 FUN_146614a80(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614aa8 FUN_146614aa8 body=40 status=ok
// SIG undefined FUN_146614aa8(void)

undefined8 FUN_146614aa8(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614ad0 FUN_146614ad0 body=40 status=ok
// SIG undefined FUN_146614ad0(void)

undefined8 FUN_146614ad0(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614af8 FUN_146614af8 body=29 status=ok
// SIG undefined FUN_146614af8(void)

undefined8 FUN_146614af8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614b20 FUN_146614b20 body=29 status=ok
// SIG undefined FUN_146614b20(void)

undefined8 FUN_146614b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614b3e FUN_146614b3e body=29 status=ok
// SIG undefined FUN_146614b3e(void)

undefined8 FUN_146614b3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614b82 FUN_146614b82 body=29 status=ok
// SIG undefined FUN_146614b82(void)

undefined8 FUN_146614b82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614ba0 FUN_146614ba0 body=29 status=ok
// SIG undefined FUN_146614ba0(void)

undefined8 FUN_146614ba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614bbe FUN_146614bbe body=29 status=ok
// SIG undefined FUN_146614bbe(void)

undefined8 FUN_146614bbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614bdc FUN_146614bdc body=29 status=ok
// SIG undefined FUN_146614bdc(void)

undefined8 FUN_146614bdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614bfa FUN_146614bfa body=29 status=ok
// SIG undefined FUN_146614bfa(void)

undefined8 FUN_146614bfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614c18 FUN_146614c18 body=29 status=ok
// SIG undefined FUN_146614c18(void)

undefined8 FUN_146614c18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614c36 FUN_146614c36 body=29 status=ok
// SIG undefined FUN_146614c36(void)

undefined8 FUN_146614c36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614c54 FUN_146614c54 body=29 status=ok
// SIG undefined FUN_146614c54(void)

undefined8 FUN_146614c54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614c72 FUN_146614c72 body=29 status=ok
// SIG undefined FUN_146614c72(void)

undefined8 FUN_146614c72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614c90 FUN_146614c90 body=29 status=ok
// SIG undefined FUN_146614c90(void)

undefined8 FUN_146614c90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614cae FUN_146614cae body=29 status=ok
// SIG undefined FUN_146614cae(void)

undefined8 FUN_146614cae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614ccc FUN_146614ccc body=29 status=ok
// SIG undefined FUN_146614ccc(void)

undefined8 FUN_146614ccc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614cea FUN_146614cea body=29 status=ok
// SIG undefined FUN_146614cea(void)

undefined8 FUN_146614cea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614d08 FUN_146614d08 body=29 status=ok
// SIG undefined FUN_146614d08(void)

undefined8 FUN_146614d08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614d26 FUN_146614d26 body=29 status=ok
// SIG undefined FUN_146614d26(void)

undefined8 FUN_146614d26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614d44 FUN_146614d44 body=29 status=ok
// SIG undefined FUN_146614d44(void)

undefined8 FUN_146614d44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614d62 FUN_146614d62 body=29 status=ok
// SIG undefined FUN_146614d62(void)

undefined8 FUN_146614d62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614d80 FUN_146614d80 body=29 status=ok
// SIG undefined FUN_146614d80(void)

undefined8 FUN_146614d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614dac FUN_146614dac body=174 status=ok
// SIG undefined FUN_146614dac(void)

undefined8 FUN_146614dac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar14 = param_3 + 8;
    lVar15 = 0;
    do {
      if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(param_3 + lVar15)) ||
         (*(int *)(param_2 + 8 + lVar15) != *(int *)(lVar14 + lVar15))) {
        *(longlong *)(param_2 + lVar15) = *(longlong *)(param_3 + lVar15);
        *(undefined4 *)(param_2 + 8 + lVar15) = *(undefined4 *)(lVar14 + lVar15);
        *(undefined8 *)(param_2 + 0x10 + lVar15) = 0;
      }
      lVar1 = lVar14 + lVar15;
      FUN_14118c70e(param_2 + 0x18 + lVar15,lVar1 + 0x10);
      uVar3 = *(undefined4 *)(lVar1 + 0x54);
      uVar4 = *(undefined4 *)(lVar1 + 0x58);
      uVar5 = *(undefined4 *)(lVar1 + 0x5c);
      uVar6 = *(undefined4 *)(lVar1 + 0x60);
      uVar7 = *(undefined4 *)(lVar1 + 100);
      uVar8 = *(undefined4 *)(lVar1 + 0x68);
      uVar9 = *(undefined4 *)(lVar1 + 0x6c);
      uVar10 = *(undefined4 *)(lVar1 + 0x6b);
      uVar11 = *(undefined4 *)(lVar1 + 0x6f);
      uVar12 = *(undefined4 *)(lVar1 + 0x73);
      uVar13 = *(undefined4 *)(lVar1 + 0x77);
      puVar2 = (undefined4 *)(param_2 + 0x58 + lVar15);
      *puVar2 = *(undefined4 *)(lVar1 + 0x50);
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar2 = (undefined4 *)(param_2 + 0x68 + lVar15);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar2 = (undefined4 *)(param_2 + 0x73 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      lVar15 = lVar15 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146614e5a FUN_146614e5a body=29 status=ok
// SIG undefined FUN_146614e5a(void)

undefined8 FUN_146614e5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614e78 FUN_146614e78 body=29 status=ok
// SIG undefined FUN_146614e78(void)

undefined8 FUN_146614e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614e96 FUN_146614e96 body=29 status=ok
// SIG undefined FUN_146614e96(void)

undefined8 FUN_146614e96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614ec4 FUN_146614ec4 body=29 status=ok
// SIG undefined FUN_146614ec4(void)

undefined8 FUN_146614ec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614ee2 FUN_146614ee2 body=29 status=ok
// SIG undefined FUN_146614ee2(void)

undefined8 FUN_146614ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614f00 FUN_146614f00 body=29 status=ok
// SIG undefined FUN_146614f00(void)

undefined8 FUN_146614f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614f1e FUN_146614f1e body=29 status=ok
// SIG undefined FUN_146614f1e(void)

undefined8 FUN_146614f1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614f3c FUN_146614f3c body=29 status=ok
// SIG undefined FUN_146614f3c(void)

undefined8 FUN_146614f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614f5a FUN_146614f5a body=29 status=ok
// SIG undefined FUN_146614f5a(void)

undefined8 FUN_146614f5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614f78 FUN_146614f78 body=29 status=ok
// SIG undefined FUN_146614f78(void)

undefined8 FUN_146614f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614f96 FUN_146614f96 body=9 status=ok
// SIG undefined FUN_146614f96(void)

void FUN_146614f96(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 146614fa0 FUN_146614fa0 body=29 status=ok
// SIG undefined FUN_146614fa0(void)

undefined8 FUN_146614fa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146614fc3 FUN_146614fc3 body=47 status=ok
// SIG undefined FUN_146614fc3(void)

longlong FUN_146614fc3(void)

{
  if (DAT_14cbbfdf0 == 0) {
    FUN_14073dd9a(&DAT_14cbbfdf0,&PTR_LAB_14b91dab8);
  }
  return DAT_14cbbfdf0;
}



// FUNCTION 146614ff2 FUN_146614ff2 body=47 status=ok
// SIG undefined FUN_146614ff2(void)

longlong FUN_146614ff2(void)

{
  if (DAT_14cbbfe00 == 0) {
    FUN_14086a14e(&DAT_14cbbfe00,&PTR_FUN_14b91ebc8);
  }
  return DAT_14cbbfe00;
}



// FUNCTION 146615022 FUN_146615022 body=48 status=ok
// SIG undefined FUN_146615022(void)

void FUN_146615022(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14b929c70;
  return;
}



// FUNCTION 146615052 FUN_146615052 body=47 status=ok
// SIG undefined FUN_146615052(void)

longlong FUN_146615052(void)

{
  if (DAT_14cbbfe20 == 0) {
    FUN_14073dd9a(&DAT_14cbbfe20,&PTR_LAB_14b91ec68);
  }
  return DAT_14cbbfe20;
}



// FUNCTION 146615082 FUN_146615082 body=55 status=ok
// SIG undefined FUN_146615082(void)

void FUN_146615082(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfe38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfe38 = FUN_140002ddd(FUN_1466150b9,uVar1,L"ResurrectTravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 1466150b9 FUN_1466150b9 body=47 status=ok
// SIG undefined FUN_1466150b9(void)

longlong FUN_1466150b9(void)

{
  if (DAT_14cbbfe30 == 0) {
    FUN_14086a14e(&DAT_14cbbfe30,&PTR_FUN_14b91ed20);
  }
  return DAT_14cbbfe30;
}



// FUNCTION 1466150e8 FUN_1466150e8 body=48 status=ok
// SIG undefined FUN_1466150e8(void)

void FUN_1466150e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b929dd0;
  return;
}



// FUNCTION 146615118 FUN_146615118 body=47 status=ok
// SIG undefined FUN_146615118(void)

longlong FUN_146615118(void)

{
  if (DAT_14cbbfe48 == 0) {
    FUN_14086a14e(&DAT_14cbbfe48,&PTR_FUN_14b91ee38);
  }
  return DAT_14cbbfe48;
}



// FUNCTION 146615148 FUN_146615148 body=48 status=ok
// SIG undefined FUN_146615148(void)

void FUN_146615148(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000490;
  *puVar1 = &PTR_FUN_14b929f30;
  return;
}



// FUNCTION 146615178 FUN_146615178 body=35 status=ok
// SIG undefined FUN_146615178(void)

void FUN_146615178(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b91ef10;
  return;
}



// FUNCTION 1466151a5 FUN_1466151a5 body=47 status=ok
// SIG undefined FUN_1466151a5(void)

longlong FUN_1466151a5(void)

{
  if (DAT_14cbbfe68 == 0) {
    FUN_14073dd9a(&DAT_14cbbfe68,&PTR_LAB_14b91eec8);
  }
  return DAT_14cbbfe68;
}



// FUNCTION 1466151d4 FUN_1466151d4 body=49 status=ok
// SIG undefined FUN_1466151d4(void)

longlong FUN_1466151d4(void)

{
  if (DAT_14cbbfe90 == 0) {
    FUN_14000fc22(&DAT_14cbbfe90,&PTR_FUN_14b91f618);
  }
  return DAT_14cbbfe90;
}



// FUNCTION 146615205 FUN_146615205 body=49 status=ok
// SIG undefined FUN_146615205(void)

longlong FUN_146615205(void)

{
  if (DAT_14cbbfe98 == 0) {
    FUN_14000fc22(&DAT_14cbbfe98,&PTR_FUN_14b91f6c8);
  }
  return DAT_14cbbfe98;
}



// FUNCTION 146615236 FUN_146615236 body=49 status=ok
// SIG undefined FUN_146615236(void)

longlong FUN_146615236(void)

{
  if (DAT_14cbbfed8 == 0) {
    FUN_14073dd9a(&DAT_14cbbfed8,&PTR_LAB_14b9201c0);
  }
  return DAT_14cbbfed8;
}



// FUNCTION 146615267 FUN_146615267 body=47 status=ok
// SIG undefined FUN_146615267(void)

longlong FUN_146615267(void)

{
  if (DAT_14cbbfea0 == 0) {
    FUN_14000fc22(&DAT_14cbbfea0,&PTR_FUN_14b91f758);
  }
  return DAT_14cbbfea0;
}



// FUNCTION 146615296 FUN_146615296 body=47 status=ok
// SIG undefined FUN_146615296(void)

longlong FUN_146615296(void)

{
  if (DAT_14cbbfea8 == 0) {
    FUN_14000fc22(&DAT_14cbbfea8,&PTR_FUN_14b91f7e8);
  }
  return DAT_14cbbfea8;
}



// FUNCTION 1466152c5 FUN_1466152c5 body=47 status=ok
// SIG undefined FUN_1466152c5(void)

longlong FUN_1466152c5(void)

{
  if (DAT_14cbbfeb0 == 0) {
    FUN_14000fc22(&DAT_14cbbfeb0,&PTR_FUN_14b91f878);
  }
  return DAT_14cbbfeb0;
}



// FUNCTION 1466152f4 FUN_1466152f4 body=47 status=ok
// SIG undefined FUN_1466152f4(void)

longlong FUN_1466152f4(void)

{
  if (DAT_14cbbfeb8 == 0) {
    FUN_14000fc22(&DAT_14cbbfeb8,&PTR_FUN_14b91f908);
  }
  return DAT_14cbbfeb8;
}



// FUNCTION 146615323 FUN_146615323 body=47 status=ok
// SIG undefined FUN_146615323(void)

longlong FUN_146615323(void)

{
  if (DAT_14cbbfec0 == 0) {
    FUN_14000fc22(&DAT_14cbbfec0,&PTR_FUN_14b91f990);
  }
  return DAT_14cbbfec0;
}



// FUNCTION 146615352 FUN_146615352 body=49 status=ok
// SIG undefined FUN_146615352(void)

longlong FUN_146615352(void)

{
  if (DAT_14cbc0008 == 0) {
    FUN_1409ce572(&DAT_14cbc0008,&PTR_FUN_14b9219f0);
  }
  return DAT_14cbc0008;
}



// FUNCTION 146615383 FUN_146615383 body=47 status=ok
// SIG undefined FUN_146615383(void)

longlong FUN_146615383(void)

{
  if (DAT_14cbbfec8 == 0) {
    FUN_14000fc22(&DAT_14cbbfec8,&PTR_FUN_14b91fa78);
  }
  return DAT_14cbbfec8;
}



// FUNCTION 1466153b2 FUN_1466153b2 body=34 status=ok
// SIG undefined FUN_1466153b2(void)

void FUN_1466153b2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401900c0();
  FUN_14069c8d6(uVar1,&PTR_s_GetCapacity_14b91fac0,6);
  return;
}



// FUNCTION 1466153de FUN_1466153de body=55 status=ok
// SIG undefined FUN_1466153de(void)

void FUN_1466153de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfef0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfef0 = FUN_140002ddd(FUN_146615415,uVar1,L"ShieldArmorAspect");
  }
  return;
}



// FUNCTION 146615415 FUN_146615415 body=47 status=ok
// SIG undefined FUN_146615415(void)

longlong FUN_146615415(void)

{
  if (DAT_14cbbfee8 == 0) {
    FUN_14086a14e(&DAT_14cbbfee8,&PTR_FUN_14b920658);
  }
  return DAT_14cbbfee8;
}



// FUNCTION 146615444 FUN_146615444 body=48 status=ok
// SIG undefined FUN_146615444(void)

void FUN_146615444(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14b92a090;
  return;
}



// FUNCTION 146615474 FUN_146615474 body=55 status=ok
// SIG undefined FUN_146615474(void)

void FUN_146615474(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff08 = FUN_140002ddd(FUN_1466154ab,uVar1,L"ShieldAttributeContextResolver");
  }
  return;
}



// FUNCTION 1466154ab FUN_1466154ab body=47 status=ok
// SIG undefined FUN_1466154ab(void)

longlong FUN_1466154ab(void)

{
  if (DAT_14cbbff00 == 0) {
    FUN_14086a14e(&DAT_14cbbff00,&PTR_FUN_14b920718);
  }
  return DAT_14cbbff00;
}



// FUNCTION 1466154da FUN_1466154da body=48 status=ok
// SIG undefined FUN_1466154da(void)

void FUN_1466154da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b92a1f0;
  return;
}



// FUNCTION 14661550a FUN_14661550a body=47 status=ok
// SIG undefined FUN_14661550a(void)

longlong FUN_14661550a(void)

{
  if (DAT_14cbbff18 == 0) {
    FUN_1409ce572(&DAT_14cbbff18,&PTR_FUN_14b9207d0);
  }
  return DAT_14cbbff18;
}



// FUNCTION 14661553a FUN_14661553a body=55 status=ok
// SIG undefined FUN_14661553a(void)

void FUN_14661553a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff38 = FUN_140002ddd(FUN_146615571,uVar1,L"ShieldChargeTriggerAspect");
  }
  return;
}



// FUNCTION 146615571 FUN_146615571 body=47 status=ok
// SIG undefined FUN_146615571(void)

longlong FUN_146615571(void)

{
  if (DAT_14cbbff30 == 0) {
    FUN_14086a14e(&DAT_14cbbff30,&PTR_FUN_14b920af0);
  }
  return DAT_14cbbff30;
}



// FUNCTION 1466155a0 FUN_1466155a0 body=48 status=ok
// SIG undefined FUN_1466155a0(void)

void FUN_1466155a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14b92a410;
  return;
}



// FUNCTION 1466155d0 FUN_1466155d0 body=47 status=ok
// SIG undefined FUN_1466155d0(void)

longlong FUN_1466155d0(void)

{
  if (DAT_14cbbff48 == 0) {
    FUN_1409ce572(&DAT_14cbbff48,&PTR_FUN_14b920be0);
  }
  return DAT_14cbbff48;
}



// FUNCTION 146615600 FUN_146615600 body=55 status=ok
// SIG undefined FUN_146615600(void)

void FUN_146615600(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff68 = FUN_140002ddd(FUN_146615637,uVar1,L"ShieldAugmentPartData");
  }
  return;
}



// FUNCTION 146615637 FUN_146615637 body=47 status=ok
// SIG undefined FUN_146615637(void)

longlong FUN_146615637(void)

{
  if (DAT_14cbbff60 == 0) {
    FUN_14086a14e(&DAT_14cbbff60,&PTR_FUN_14b920e90);
  }
  return DAT_14cbbff60;
}



// FUNCTION 146615666 FUN_146615666 body=48 status=ok
// SIG undefined FUN_146615666(void)

void FUN_146615666(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000120;
  *puVar1 = &PTR_FUN_14b92a660;
  return;
}



// FUNCTION 146615696 FUN_146615696 body=55 status=ok
// SIG undefined FUN_146615696(void)

void FUN_146615696(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff80 = FUN_140002ddd(FUN_1466156cd,uVar1,L"ShieldGlobals");
  }
  return;
}



// FUNCTION 1466156cd FUN_1466156cd body=47 status=ok
// SIG undefined FUN_1466156cd(void)

longlong FUN_1466156cd(void)

{
  if (DAT_14cbbff78 == 0) {
    FUN_14086a14e(&DAT_14cbbff78,&PTR_FUN_14b9210f0);
  }
  return DAT_14cbbff78;
}



// FUNCTION 1466156fc FUN_1466156fc body=48 status=ok
// SIG undefined FUN_1466156fc(void)

void FUN_1466156fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d8;
  *puVar1 = &PTR_FUN_14b92a7d0;
  return;
}



// FUNCTION 14661572c FUN_14661572c body=55 status=ok
// SIG undefined FUN_14661572c(void)

void FUN_14661572c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbff98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbff98 = FUN_140002ddd(FUN_146615763,uVar1,L"ShieldHealthAspect");
  }
  return;
}



// FUNCTION 146615763 FUN_146615763 body=47 status=ok
// SIG undefined FUN_146615763(void)

longlong FUN_146615763(void)

{
  if (DAT_14cbbff90 == 0) {
    FUN_14086a14e(&DAT_14cbbff90,&PTR_FUN_14b921460);
  }
  return DAT_14cbbff90;
}



// FUNCTION 146615792 FUN_146615792 body=48 status=ok
// SIG undefined FUN_146615792(void)

void FUN_146615792(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000f8;
  *puVar1 = &PTR_FUN_14b92a930;
  return;
}



// FUNCTION 1466157c2 FUN_1466157c2 body=55 status=ok
// SIG undefined FUN_1466157c2(void)

void FUN_1466157c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbffb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbffb0 = FUN_140002ddd(FUN_1466157f9,uVar1,L"ShieldOnScreenFXAspect");
  }
  return;
}



// FUNCTION 1466157f9 FUN_1466157f9 body=47 status=ok
// SIG undefined FUN_1466157f9(void)

longlong FUN_1466157f9(void)

{
  if (DAT_14cbbffa8 == 0) {
    FUN_14086a14e(&DAT_14cbbffa8,&PTR_FUN_14b921768);
  }
  return DAT_14cbbffa8;
}



// FUNCTION 146615828 FUN_146615828 body=48 status=ok
// SIG undefined FUN_146615828(void)

void FUN_146615828(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14b92aae0;
  return;
}



// FUNCTION 146615858 FUN_146615858 body=47 status=ok
// SIG undefined FUN_146615858(void)

longlong FUN_146615858(void)

{
  if (DAT_14cbbffc0 == 0) {
    FUN_14086a14e(&DAT_14cbbffc0,&PTR_FUN_14b921808);
  }
  return DAT_14cbbffc0;
}



// FUNCTION 146615888 FUN_146615888 body=48 status=ok
// SIG undefined FUN_146615888(void)

void FUN_146615888(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000220;
  *puVar1 = &PTR_FUN_14b92ac40;
  return;
}



// FUNCTION 1466158b8 FUN_1466158b8 body=55 status=ok
// SIG undefined FUN_1466158b8(void)

void FUN_1466158b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbffe0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbffe0 = FUN_140002ddd(FUN_1466158ef,uVar1,L"ShieldStatsDef");
  }
  return;
}



// FUNCTION 1466158ef FUN_1466158ef body=47 status=ok
// SIG undefined FUN_1466158ef(void)

longlong FUN_1466158ef(void)

{
  if (DAT_14cbbffd8 == 0) {
    FUN_14086a14e(&DAT_14cbbffd8,&PTR_FUN_14b921898);
  }
  return DAT_14cbbffd8;
}



// FUNCTION 14661591e FUN_14661591e body=48 status=ok
// SIG undefined FUN_14661591e(void)

void FUN_14661591e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b92ada0;
  return;
}



// FUNCTION 14661594e FUN_14661594e body=47 status=ok
// SIG undefined FUN_14661594e(void)

longlong FUN_14661594e(void)

{
  if (DAT_14cbbfff0 == 0) {
    FUN_1409ce572(&DAT_14cbbfff0,&PTR_FUN_14b921950);
  }
  return DAT_14cbbfff0;
}



// FUNCTION 14661597d FUN_14661597d body=47 status=ok
// SIG undefined FUN_14661597d(void)

longlong FUN_14661597d(void)

{
  if (DAT_14cbc0020 == 0) {
    FUN_1409ce572(&DAT_14cbc0020,&PTR_FUN_14b921a80);
  }
  return DAT_14cbc0020;
}



// FUNCTION 1466159ac FUN_1466159ac body=47 status=ok
// SIG undefined FUN_1466159ac(void)

longlong FUN_1466159ac(void)

{
  if (DAT_14cbc0058 == 0) {
    FUN_14073dd9a(&DAT_14cbc0058,&PTR_LAB_14b921c58);
  }
  return DAT_14cbc0058;
}



// FUNCTION 1466159db FUN_1466159db body=47 status=ok
// SIG undefined FUN_1466159db(void)

longlong FUN_1466159db(void)

{
  if (DAT_14cbc0090 == 0) {
    FUN_14000fc22(&DAT_14cbc0090,&PTR_FUN_14b921ef8);
  }
  return DAT_14cbc0090;
}



// FUNCTION 146615a0a FUN_146615a0a body=49 status=ok
// SIG undefined FUN_146615a0a(void)

longlong FUN_146615a0a(void)

{
  if (DAT_14cbc00b8 == 0) {
    FUN_14073dd9a(&DAT_14cbc00b8,&PTR_LAB_14b922950);
  }
  return DAT_14cbc00b8;
}



// FUNCTION 146615a3b FUN_146615a3b body=47 status=ok
// SIG undefined FUN_146615a3b(void)

longlong FUN_146615a3b(void)

{
  if (DAT_14cbc0098 == 0) {
    FUN_14000fc22(&DAT_14cbc0098,&PTR_FUN_14b921f48);
  }
  return DAT_14cbc0098;
}



// FUNCTION 146615a6a FUN_146615a6a body=47 status=ok
// SIG undefined FUN_146615a6a(void)

longlong FUN_146615a6a(void)

{
  if (DAT_14cbc00a0 == 0) {
    FUN_14000fc22(&DAT_14cbc00a0,&PTR_FUN_14b921f88);
  }
  return DAT_14cbc00a0;
}



// FUNCTION 146615a99 FUN_146615a99 body=47 status=ok
// SIG undefined FUN_146615a99(void)

longlong FUN_146615a99(void)

{
  if (DAT_14cbc00a8 == 0) {
    FUN_14000fc22(&DAT_14cbc00a8,&PTR_FUN_14b921fd8);
  }
  return DAT_14cbc00a8;
}



// FUNCTION 146615ac8 FUN_146615ac8 body=34 status=ok
// SIG undefined FUN_146615ac8(void)

void FUN_146615ac8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14593f59c();
  FUN_14069c8d6(uVar1,&PTR_s_OnBalloonReady_14b922020,3);
  return;
}



// FUNCTION 146615af0 FUN_146615af0 body=105 status=ok
// SIG undefined FUN_146615af0(void)

void FUN_146615af0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc00d0) {
    FUN_144b3d300(&DAT_14cbc00d0);
    if (DAT_14cbc00d0 == -1) {
      FUN_1446f470e(&DAT_14cbc00c8,L"Sliders",1);
      _Init_thread_footer(&DAT_14cbc00d0);
      return;
    }
  }
  return;
}



// FUNCTION 146615b59 FUN_146615b59 body=47 status=ok
// SIG undefined FUN_146615b59(void)

longlong FUN_146615b59(void)

{
  if (DAT_14cbc00d8 == 0) {
    FUN_14086a14e(&DAT_14cbc00d8,&PTR_FUN_14b9240a8);
  }
  return DAT_14cbc00d8;
}



// FUNCTION 146615b88 FUN_146615b88 body=48 status=ok
// SIG undefined FUN_146615b88(void)

void FUN_146615b88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000610;
  *puVar1 = &PTR_FUN_14b92b0d0;
  return;
}



// FUNCTION 146615bb8 FUN_146615bb8 body=47 status=ok
// SIG undefined FUN_146615bb8(void)

longlong FUN_146615bb8(void)

{
  if (DAT_14cbc00f8 == 0) {
    FUN_14073dd9a(&DAT_14cbc00f8,&PTR_LAB_14b924158);
  }
  return DAT_14cbc00f8;
}



// FUNCTION 146615bed FUN_146615bed body=47 status=ok
// SIG undefined FUN_146615bed(void)

longlong FUN_146615bed(void)

{
  if (DAT_14cbc0110 == 0) {
    FUN_14073dd9a(&DAT_14cbc0110,&PTR_LAB_14b924f28);
  }
  return DAT_14cbc0110;
}



// FUNCTION 146615c1c FUN_146615c1c body=47 status=ok
// SIG undefined FUN_146615c1c(void)

longlong FUN_146615c1c(void)

{
  if (DAT_14cbc0150 == 0) {
    FUN_1409ce572(&DAT_14cbc0150,&PTR_FUN_14b926010);
  }
  return DAT_14cbc0150;
}



// FUNCTION 146615c4b FUN_146615c4b body=47 status=ok
// SIG undefined FUN_146615c4b(void)

longlong FUN_146615c4b(void)

{
  if (DAT_14cbc0178 == 0) {
    FUN_14073dd9a(&DAT_14cbc0178,&PTR_LAB_14b926170);
  }
  return DAT_14cbc0178;
}



// FUNCTION 146615c7a FUN_146615c7a body=47 status=ok
// SIG undefined FUN_146615c7a(void)

longlong FUN_146615c7a(void)

{
  if (DAT_14cbc0168 == 0) {
    FUN_14000fc22(&DAT_14cbc0168,&PTR_FUN_14b9260a8);
  }
  return DAT_14cbc0168;
}



// FUNCTION 146615caa FUN_146615caa body=34 status=ok
// SIG undefined FUN_146615caa(void)

void FUN_146615caa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141215884();
  FUN_14069c8d6(uVar1,&PTR_s_TeleportPlayerToDestination_14b9260f0,1);
  return;
}



// FUNCTION 146615cd1 FUN_146615cd1 body=47 status=ok
// SIG undefined FUN_146615cd1(void)

longlong FUN_146615cd1(void)

{
  if (DAT_14cbc0188 == 0) {
    FUN_14086a14e(&DAT_14cbc0188,&PTR_FUN_14b927258);
  }
  return DAT_14cbc0188;
}



// FUNCTION 146615d00 FUN_146615d00 body=48 status=ok
// SIG undefined FUN_146615d00(void)

void FUN_146615d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14b92b4a0;
  return;
}



// FUNCTION 146615d30 FUN_146615d30 body=65 status=ok
// SIG undefined FUN_146615d30(void)

void FUN_146615d30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141103bac(puVar1);
  *puVar1 = &PTR_FUN_14b927340;
  puVar1[5] = &PTR_FUN_14b9275f0;
  puVar1[10] = &PTR_FUN_14b927620;
  puVar1[0xb] = &PTR_FUN_14b927650;
  return;
}



// FUNCTION 146615d71 FUN_146615d71 body=47 status=ok
// SIG undefined FUN_146615d71(void)

longlong FUN_146615d71(void)

{
  if (DAT_14cbc01a8 == 0) {
    FUN_14073dd9a(&DAT_14cbc01a8,&PTR_LAB_14b9272f8);
  }
  return DAT_14cbc01a8;
}



// FUNCTION 146615da0 FUN_146615da0 body=55 status=ok
// SIG undefined FUN_146615da0(void)

void FUN_146615da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc01c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc01c0 = FUN_140002ddd(FUN_146615dd7,uVar1,L"SoloTravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 146615dd7 FUN_146615dd7 body=47 status=ok
// SIG undefined FUN_146615dd7(void)

longlong FUN_146615dd7(void)

{
  if (DAT_14cbc01b8 == 0) {
    FUN_14086a14e(&DAT_14cbc01b8,&PTR_FUN_14b9276e8);
  }
  return DAT_14cbc01b8;
}



// FUNCTION 146615e06 FUN_146615e06 body=48 status=ok
// SIG undefined FUN_146615e06(void)

void FUN_146615e06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b92b610;
  return;
}



// FUNCTION 146615e36 FUN_146615e36 body=55 status=ok
// SIG undefined FUN_146615e36(void)

void FUN_146615e36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc01d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc01d8 = FUN_140002ddd(FUN_146615e6d,uVar1,L"SoloTravelStationObjectDef");
  }
  return;
}



// FUNCTION 146615e6d FUN_146615e6d body=47 status=ok
// SIG undefined FUN_146615e6d(void)

longlong FUN_146615e6d(void)

{
  if (DAT_14cbc01d0 == 0) {
    FUN_14086a14e(&DAT_14cbc01d0,&PTR_FUN_14b9277f0);
  }
  return DAT_14cbc01d0;
}



// FUNCTION 146615e9c FUN_146615e9c body=48 status=ok
// SIG undefined FUN_146615e9c(void)

void FUN_146615e9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000490;
  *puVar1 = &PTR_FUN_14b92b780;
  return;
}



// FUNCTION 146615ecc FUN_146615ecc body=47 status=ok
// SIG undefined FUN_146615ecc(void)

longlong FUN_146615ecc(void)

{
  if (DAT_14cbc01e8 == 0) {
    FUN_14086a14e(&DAT_14cbc01e8,&PTR_FUN_14b927b40);
  }
  return DAT_14cbc01e8;
}



// FUNCTION 146615efc FUN_146615efc body=48 status=ok
// SIG undefined FUN_146615efc(void)

void FUN_146615efc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000120;
  *puVar1 = &PTR_FUN_14b92ba40;
  return;
}



// FUNCTION 146615f2c FUN_146615f2c body=47 status=ok
// SIG undefined FUN_146615f2c(void)

longlong FUN_146615f2c(void)

{
  if (DAT_14cbc0208 == 0) {
    FUN_14073dd9a(&DAT_14cbc0208,&PTR_LAB_14b927cb8);
  }
  return DAT_14cbc0208;
}



// FUNCTION 146615f5b FUN_146615f5b body=43 status=ok
// SIG undefined FUN_146615f5b(void)

void FUN_146615f5b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf9282(puVar1);
  *puVar1 = &PTR_FUN_14b928110;
  *(undefined1 *)(puVar1 + 6) = 1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 146615f86 FUN_146615f86 body=47 status=ok
// SIG undefined FUN_146615f86(void)

longlong FUN_146615f86(void)

{
  if (DAT_14cbc0220 == 0) {
    FUN_14073dd9a(&DAT_14cbc0220,&PTR_LAB_14b9280c8);
  }
  return DAT_14cbc0220;
}



// FUNCTION 146615fb5 FUN_146615fb5 body=47 status=ok
// SIG undefined FUN_146615fb5(void)

longlong FUN_146615fb5(void)

{
  if (DAT_14cbc0238 == 0) {
    FUN_14073dd9a(&DAT_14cbc0238,&PTR_LAB_14b928598);
  }
  return DAT_14cbc0238;
}



// FUNCTION 146615fef FUN_146615fef body=47 status=ok
// SIG undefined FUN_146615fef(void)

longlong FUN_146615fef(void)

{
  if (DAT_14cbc0250 == 0) {
    FUN_14073dd9a(&DAT_14cbc0250,&PTR_LAB_14b928e08);
  }
  return DAT_14cbc0250;
}



// FUNCTION 14661601e FUN_14661601e body=55 status=ok
// SIG undefined FUN_14661601e(void)

void FUN_14661601e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0268 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0268 = FUN_140002ddd(FUN_146616055,uVar1,L"StructuredInteractableData");
  }
  return;
}



// FUNCTION 146616055 FUN_146616055 body=47 status=ok
// SIG undefined FUN_146616055(void)

longlong FUN_146616055(void)

{
  if (DAT_14cbc0260 == 0) {
    FUN_14086a14e(&DAT_14cbc0260,&PTR_FUN_14b9294d0);
  }
  return DAT_14cbc0260;
}



// FUNCTION 146616084 FUN_146616084 body=48 status=ok
// SIG undefined FUN_146616084(void)

void FUN_146616084(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000200;
  *puVar1 = &PTR_FUN_14b92bba0;
  return;
}



// FUNCTION 1466160b4 FUN_1466160b4 body=47 status=ok
// SIG undefined FUN_1466160b4(void)

longlong FUN_1466160b4(void)

{
  if (DAT_14cbc0298 == 0) {
    FUN_14073dd9a(&DAT_14cbc0298,&PTR_LAB_14b9298b0);
  }
  return DAT_14cbc0298;
}



// FUNCTION 1466160e3 FUN_1466160e3 body=47 status=ok
// SIG undefined FUN_1466160e3(void)

longlong FUN_1466160e3(void)

{
  if (DAT_14cbc0288 == 0) {
    FUN_14000fc22(&DAT_14cbc0288,&PTR_FUN_14b929798);
  }
  return DAT_14cbc0288;
}



// FUNCTION 146616112 FUN_146616112 body=34 status=ok
// SIG undefined FUN_146616112(void)

void FUN_146616112(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8eaf0();
  FUN_14069c8d6(uVar1,&PTR_s_EndStructuredInteraction_14b9297e0,3);
  return;
}



// FUNCTION 146616134 FUN_146616134 body=35 status=ok
// SIG undefined FUN_146616134(void)

void FUN_146616134(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9298f0;
  return;
}



// FUNCTION 146616158 FUN_146616158 body=40 status=ok
// SIG undefined FUN_146616158(void)

undefined8 FUN_146616158(undefined8 param_1,int param_2)

{
  FUN_141001552();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616180 FUN_146616180 body=40 status=ok
// SIG undefined FUN_146616180(void)

undefined8 FUN_146616180(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466161a8 FUN_1466161a8 body=40 status=ok
// SIG undefined FUN_1466161a8(void)

undefined8 FUN_1466161a8(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466161d0 FUN_1466161d0 body=40 status=ok
// SIG undefined FUN_1466161d0(void)

undefined8 FUN_1466161d0(undefined8 param_1,int param_2)

{
  FUN_141052174();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466161f8 FUN_1466161f8 body=40 status=ok
// SIG undefined FUN_1466161f8(void)

undefined8 FUN_1466161f8(undefined8 param_1,int param_2)

{
  FUN_141001552();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616220 FUN_146616220 body=40 status=ok
// SIG undefined FUN_146616220(void)

undefined8 FUN_146616220(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616248 FUN_146616248 body=40 status=ok
// SIG undefined FUN_146616248(void)

undefined8 FUN_146616248(undefined8 param_1,int param_2)

{
  FUN_145bcc354();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616270 FUN_146616270 body=40 status=ok
// SIG undefined FUN_146616270(void)

undefined8 FUN_146616270(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616298 FUN_146616298 body=29 status=ok
// SIG undefined FUN_146616298(void)

undefined8 FUN_146616298(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466162c0 FUN_1466162c0 body=29 status=ok
// SIG undefined FUN_1466162c0(void)

undefined8 FUN_1466162c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466162de FUN_1466162de body=29 status=ok
// SIG undefined FUN_1466162de(void)

undefined8 FUN_1466162de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616322 FUN_146616322 body=29 status=ok
// SIG undefined FUN_146616322(void)

undefined8 FUN_146616322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661634e FUN_14661634e body=29 status=ok
// SIG undefined FUN_14661634e(void)

undefined8 FUN_14661634e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661636c FUN_14661636c body=29 status=ok
// SIG undefined FUN_14661636c(void)

undefined8 FUN_14661636c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661638a FUN_14661638a body=29 status=ok
// SIG undefined FUN_14661638a(void)

undefined8 FUN_14661638a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466163a8 FUN_1466163a8 body=29 status=ok
// SIG undefined FUN_1466163a8(void)

undefined8 FUN_1466163a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466163c6 FUN_1466163c6 body=29 status=ok
// SIG undefined FUN_1466163c6(void)

undefined8 FUN_1466163c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466163e4 FUN_1466163e4 body=29 status=ok
// SIG undefined FUN_1466163e4(void)

undefined8 FUN_1466163e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616410 FUN_146616410 body=29 status=ok
// SIG undefined FUN_146616410(void)

undefined8 FUN_146616410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661642e FUN_14661642e body=29 status=ok
// SIG undefined FUN_14661642e(void)

undefined8 FUN_14661642e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661644c FUN_14661644c body=29 status=ok
// SIG undefined FUN_14661644c(void)

undefined8 FUN_14661644c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616490 FUN_146616490 body=29 status=ok
// SIG undefined FUN_146616490(void)

undefined8 FUN_146616490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466164b8 FUN_1466164b8 body=29 status=ok
// SIG undefined FUN_1466164b8(void)

undefined8 FUN_1466164b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466164d6 FUN_1466164d6 body=29 status=ok
// SIG undefined FUN_1466164d6(void)

undefined8 FUN_1466164d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661651a FUN_14661651a body=29 status=ok
// SIG undefined FUN_14661651a(void)

undefined8 FUN_14661651a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616538 FUN_146616538 body=29 status=ok
// SIG undefined FUN_146616538(void)

undefined8 FUN_146616538(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146616556 FUN_146616556 body=9 status=ok
// SIG undefined FUN_146616556(void)

void FUN_146616556(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 146616560 FUN_146616560 body=29 status=ok
// SIG undefined FUN_146616560(void)

undefined8 FUN_146616560(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14661657e FUN_14661657e body=9 status=ok
// SIG undefined FUN_14661657e(void)

void FUN_14661657e(longlong param_1)

{
  FUN_140d2194c(param_1 + 0x10);
  return;
}



// FUNCTION 146616588 FUN_146616588 body=29 status=ok
// SIG undefined FUN_146616588(void)

undefined8 FUN_146616588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466165a5 FUN_1466165a5 body=47 status=ok
// SIG undefined FUN_1466165a5(void)

longlong FUN_1466165a5(void)

{
  if (DAT_14cbc02d0 == 0) {
    FUN_14073dd9a(&DAT_14cbc02d0,&PTR_LAB_14b92f210);
  }
  return DAT_14cbc02d0;
}



// FUNCTION 1466165d4 FUN_1466165d4 body=47 status=ok
// SIG undefined FUN_1466165d4(void)

longlong FUN_1466165d4(void)

{
  if (DAT_14cbc02b0 == 0) {
    FUN_14000fc22(&DAT_14cbc02b0,&PTR_FUN_14b92efe8);
  }
  return DAT_14cbc02b0;
}



// FUNCTION 146616603 FUN_146616603 body=47 status=ok
// SIG undefined FUN_146616603(void)

longlong FUN_146616603(void)

{
  if (DAT_14cbc02c0 == 0) {
    FUN_14000fc22(&DAT_14cbc02c0,&PTR_FUN_14b92f0d0);
  }
  return DAT_14cbc02c0;
}



// FUNCTION 146616632 FUN_146616632 body=34 status=ok
// SIG undefined FUN_146616632(void)

void FUN_146616632(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458fce16();
  FUN_14069c8d6(uVar1,&PTR_s_ClientSetCurrentInteractable_14b92f160,2);
  return;
}



// FUNCTION 146616659 FUN_146616659 body=91 status=ok
// SIG undefined FUN_146616659(void)

void FUN_146616659(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b92f250;
  puVar1[5] = &PTR_FUN_14b92f6e0;
  puVar1[6] = &PTR_LAB_14b92f720;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  *(undefined4 *)(puVar1 + 0x24) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar1 + 300) = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  return;
}



// FUNCTION 1466166ba FUN_1466166ba body=55 status=ok
// SIG undefined FUN_1466166ba(void)

void FUN_1466166ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc02f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc02f0 = FUN_140002ddd(FUN_1466166f1,uVar1,L"TaggedAnimDef_Oak");
  }
  return;
}



// FUNCTION 1466166f1 FUN_1466166f1 body=47 status=ok
// SIG undefined FUN_1466166f1(void)

longlong FUN_1466166f1(void)

{
  if (DAT_14cbc02e8 == 0) {
    FUN_14086a14e(&DAT_14cbc02e8,&PTR_FUN_14b92f958);
  }
  return DAT_14cbc02e8;
}



// FUNCTION 146616720 FUN_146616720 body=48 status=ok
// SIG undefined FUN_146616720(void)

void FUN_146616720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000258;
  *puVar1 = &PTR_FUN_14b9373c0;
  return;
}



// FUNCTION 146616750 FUN_146616750 body=55 status=ok
// SIG undefined FUN_146616750(void)

void FUN_146616750(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0308 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0308 = FUN_140002ddd(FUN_146616787,uVar1,L"TerminalBarrierAspect");
  }
  return;
}



// FUNCTION 146616787 FUN_146616787 body=47 status=ok
// SIG undefined FUN_146616787(void)

longlong FUN_146616787(void)

{
  if (DAT_14cbc0300 == 0) {
    FUN_14086a14e(&DAT_14cbc0300,&PTR_FUN_14b92fb78);
  }
  return DAT_14cbc0300;
}



// FUNCTION 1466167b6 FUN_1466167b6 body=47 status=ok
// SIG undefined FUN_1466167b6(void)

longlong FUN_1466167b6(void)

{
  if (DAT_14cbc0318 == 0) {
    FUN_14086a14e(&DAT_14cbc0318,&PTR_FUN_14b930048);
  }
  return DAT_14cbc0318;
}



// FUNCTION 1466167e6 FUN_1466167e6 body=48 status=ok
// SIG undefined FUN_1466167e6(void)

void FUN_1466167e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b937560;
  return;
}



// FUNCTION 146616816 FUN_146616816 body=55 status=ok
// SIG undefined FUN_146616816(void)

void FUN_146616816(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0320 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0320 = FUN_140002ddd(FUN_1466167b6,uVar1,L"TerminalBarrierDef");
  }
  return;
}



// FUNCTION 14661684e FUN_14661684e body=48 status=ok
// SIG undefined FUN_14661684e(void)

void FUN_14661684e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000258;
  *puVar1 = &PTR_FUN_14b937710;
  return;
}



// FUNCTION 14661687e FUN_14661687e body=47 status=ok
// SIG undefined FUN_14661687e(void)

longlong FUN_14661687e(void)

{
  if (DAT_14cbc0330 == 0) {
    FUN_1409ce572(&DAT_14cbc0330,&PTR_FUN_14b930100);
  }
  return DAT_14cbc0330;
}



// FUNCTION 1466168ad FUN_1466168ad body=47 status=ok
// SIG undefined FUN_1466168ad(void)

longlong FUN_1466168ad(void)

{
  if (DAT_14cbc0348 == 0) {
    FUN_1409ce572(&DAT_14cbc0348,&PTR_FUN_14b930170);
  }
  return DAT_14cbc0348;
}



// FUNCTION 1466168dc FUN_1466168dc body=55 status=ok
// SIG undefined FUN_1466168dc(void)

void FUN_1466168dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0368 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0368 = FUN_140002ddd(FUN_146616913,uVar1,L"TerminalBehaviorAspect");
  }
  return;
}



// FUNCTION 146616913 FUN_146616913 body=47 status=ok
// SIG undefined FUN_146616913(void)

longlong FUN_146616913(void)

{
  if (DAT_14cbc0360 == 0) {
    FUN_14086a14e(&DAT_14cbc0360,&PTR_FUN_14b930520);
  }
  return DAT_14cbc0360;
}



// FUNCTION 146616942 FUN_146616942 body=47 status=ok
// SIG undefined FUN_146616942(void)

longlong FUN_146616942(void)

{
  if (DAT_14cbc0378 == 0) {
    FUN_14086a14e(&DAT_14cbc0378,&PTR_FUN_14b930770);
  }
  return DAT_14cbc0378;
}



// FUNCTION 146616972 FUN_146616972 body=48 status=ok
// SIG undefined FUN_146616972(void)

void FUN_146616972(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b9379c0;
  return;
}



// FUNCTION 1466169a2 FUN_1466169a2 body=55 status=ok
// SIG undefined FUN_1466169a2(void)

void FUN_1466169a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0380 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0380 = FUN_140002ddd(FUN_146616942,uVar1,L"TerminalBehaviorDef");
  }
  return;
}



// FUNCTION 1466169da FUN_1466169da body=48 status=ok
// SIG undefined FUN_1466169da(void)

void FUN_1466169da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000100;
  *puVar1 = &PTR_FUN_14b937b70;
  return;
}



// FUNCTION 146616a0a FUN_146616a0a body=47 status=ok
// SIG undefined FUN_146616a0a(void)

longlong FUN_146616a0a(void)

{
  if (DAT_14cbc03c0 == 0) {
    FUN_14073dd9a(&DAT_14cbc03c0,&PTR_LAB_14b930940);
  }
  return DAT_14cbc03c0;
}



// FUNCTION 146616a39 FUN_146616a39 body=47 status=ok
// SIG undefined FUN_146616a39(void)

longlong FUN_146616a39(void)

{
  if (DAT_14cbc03b0 == 0) {
    FUN_14000fc22(&DAT_14cbc03b0,&PTR_FUN_14b930838);
  }
  return DAT_14cbc03b0;
}



// FUNCTION 146616a68 FUN_146616a68 body=34 status=ok
// SIG undefined FUN_146616a68(void)

void FUN_146616a68(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8ebdc();
  FUN_14069c8d6(uVar1,&PTR_s_RegisterTerminal_14b930880,1);
  return;
}



// FUNCTION 146616a8a FUN_146616a8a body=55 status=ok
// SIG undefined FUN_146616a8a(void)

void FUN_146616a8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc03d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc03d8 = FUN_140002ddd(FUN_146616ac1,uVar1,L"TerminalObjectBodySettings");
  }
  return;
}



// FUNCTION 146616ac1 FUN_146616ac1 body=47 status=ok
// SIG undefined FUN_146616ac1(void)

longlong FUN_146616ac1(void)

{
  if (DAT_14cbc03d0 == 0) {
    FUN_14086a14e(&DAT_14cbc03d0,&PTR_FUN_14b9315b0);
  }
  return DAT_14cbc03d0;
}



// FUNCTION 146616af0 FUN_146616af0 body=48 status=ok
// SIG undefined FUN_146616af0(void)

void FUN_146616af0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14b937ce0;
  return;
}



// FUNCTION 146616b20 FUN_146616b20 body=68 status=ok
// SIG undefined FUN_146616b20(void)

void FUN_146616b20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14100142e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b931680;
  puVar1[5] = &PTR_FUN_14b931930;
  puVar1[10] = &PTR_FUN_14b931960;
  puVar1[0xb] = &PTR_FUN_14b931990;
  return;
}



// FUNCTION 146616b64 FUN_146616b64 body=47 status=ok
// SIG undefined FUN_146616b64(void)

longlong FUN_146616b64(void)

{
  if (DAT_14cbc03f0 == 0) {
    FUN_14073dd9a(&DAT_14cbc03f0,&PTR_LAB_14b931638);
  }
  return DAT_14cbc03f0;
}



// FUNCTION 146616b94 FUN_146616b94 body=55 status=ok
// SIG undefined FUN_146616b94(void)

void FUN_146616b94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0408 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0408 = FUN_140002ddd(FUN_146616bcb,uVar1,L"TerminalObjectBodyState");
  }
  return;
}



// FUNCTION 146616bcb FUN_146616bcb body=47 status=ok
// SIG undefined FUN_146616bcb(void)

longlong FUN_146616bcb(void)

{
  if (DAT_14cbc0400 == 0) {
    FUN_14086a14e(&DAT_14cbc0400,&PTR_FUN_14b931a08);
  }
  return DAT_14cbc0400;
}



// FUNCTION 146616bfa FUN_146616bfa body=48 status=ok
// SIG undefined FUN_146616bfa(void)

void FUN_146616bfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b937e40;
  return;
}



// FUNCTION 146616c2a FUN_146616c2a body=55 status=ok
// SIG undefined FUN_146616c2a(void)

void FUN_146616c2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0420 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0420 = FUN_140002ddd(FUN_146616c61,uVar1,L"TerminalTypeAspect");
  }
  return;
}



// FUNCTION 146616c61 FUN_146616c61 body=47 status=ok
// SIG undefined FUN_146616c61(void)

longlong FUN_146616c61(void)

{
  if (DAT_14cbc0418 == 0) {
    FUN_14086a14e(&DAT_14cbc0418,&PTR_FUN_14b931d18);
  }
  return DAT_14cbc0418;
}



// FUNCTION 146616c90 FUN_146616c90 body=48 status=ok
// SIG undefined FUN_146616c90(void)

void FUN_146616c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000f8;
  *puVar1 = &PTR_FUN_14b937fa0;
  return;
}



// FUNCTION 146616cc0 FUN_146616cc0 body=55 status=ok
// SIG undefined FUN_146616cc0(void)

void FUN_146616cc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0438 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0438 = FUN_140002ddd(FUN_146616cf7,uVar1,L"TraitMissionTraitChanceOverride");
  }
  return;
}



// FUNCTION 146616cf7 FUN_146616cf7 body=47 status=ok
// SIG undefined FUN_146616cf7(void)

longlong FUN_146616cf7(void)

{
  if (DAT_14cbc0430 == 0) {
    FUN_14086a14e(&DAT_14cbc0430,&PTR_FUN_14b931e80);
  }
  return DAT_14cbc0430;
}



// FUNCTION 146616d26 FUN_146616d26 body=48 status=ok
// SIG undefined FUN_146616d26(void)

void FUN_146616d26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14b938150;
  return;
}



// FUNCTION 146616d56 FUN_146616d56 body=47 status=ok
// SIG undefined FUN_146616d56(void)

longlong FUN_146616d56(void)

{
  if (DAT_14cbc0448 == 0) {
    FUN_14086a14e(&DAT_14cbc0448,&PTR_FUN_14b932330);
  }
  return DAT_14cbc0448;
}



// FUNCTION 146616d86 FUN_146616d86 body=48 status=ok
// SIG undefined FUN_146616d86(void)

void FUN_146616d86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14b9382b0;
  return;
}



// FUNCTION 146616db6 FUN_146616db6 body=47 status=ok
// SIG undefined FUN_146616db6(void)

longlong FUN_146616db6(void)

{
  if (DAT_14cbc0468 == 0) {
    FUN_14073dd9a(&DAT_14cbc0468,&PTR_LAB_14b9323c8);
  }
  return DAT_14cbc0468;
}



// FUNCTION 146616def FUN_146616def body=47 status=ok
// SIG undefined FUN_146616def(void)

longlong FUN_146616def(void)

{
  if (DAT_14cbc0480 == 0) {
    FUN_14073dd9a(&DAT_14cbc0480,&PTR_LAB_14b9324e8);
  }
  return DAT_14cbc0480;
}



// FUNCTION 146616e1e FUN_146616e1e body=49 status=ok
// SIG undefined FUN_146616e1e(void)

longlong FUN_146616e1e(void)

{
  if (DAT_14cbc04d0 == 0) {
    FUN_14073dd9a(&DAT_14cbc04d0,&PTR_LAB_14b933770);
  }
  return DAT_14cbc04d0;
}



// FUNCTION 146616e4f FUN_146616e4f body=49 status=ok
// SIG undefined FUN_146616e4f(void)

longlong FUN_146616e4f(void)

{
  if (DAT_14cbc04a0 == 0) {
    FUN_14000fc22(&DAT_14cbc04a0,&PTR_FUN_14b933118);
  }
  return DAT_14cbc04a0;
}



// FUNCTION 146616e80 FUN_146616e80 body=47 status=ok
// SIG undefined FUN_146616e80(void)

longlong FUN_146616e80(void)

{
  if (DAT_14cbc04a8 == 0) {
    FUN_14000fc22(&DAT_14cbc04a8,&PTR_FUN_14b933198);
  }
  return DAT_14cbc04a8;
}



// FUNCTION 146616eaf FUN_146616eaf body=47 status=ok
// SIG undefined FUN_146616eaf(void)

longlong FUN_146616eaf(void)

{
  if (DAT_14cbc04b8 == 0) {
    FUN_14000fc22(&DAT_14cbc04b8,&PTR_FUN_14b9332d0);
  }
  return DAT_14cbc04b8;
}



// FUNCTION 146616ede FUN_146616ede body=47 status=ok
// SIG undefined FUN_146616ede(void)

longlong FUN_146616ede(void)

{
  if (DAT_14cbc04c0 == 0) {
    FUN_14000fc22(&DAT_14cbc04c0,&PTR_FUN_14b933328);
  }
  return DAT_14cbc04c0;
}



// FUNCTION 146616f0e FUN_146616f0e body=34 status=ok
// SIG undefined FUN_146616f0e(void)

void FUN_146616f0e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141068032();
  FUN_14069c8d6(uVar1,&PTR_s_GetDisplayName_14b933370,4);
  return;
}



// FUNCTION 146616f40 FUN_146616f40 body=104 status=ok
// SIG undefined FUN_146616f40(void)

void FUN_146616f40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc04e8) {
    FUN_144b3d300(&DAT_14cbc04e8);
    if (DAT_14cbc04e8 == -1) {
      FUN_1446f470e(&DAT_14cbc04e0,L"DynamicNexusData",1);
      _Init_thread_footer(&DAT_14cbc04e8);
      return;
    }
  }
  return;
}



// FUNCTION 146616fa8 FUN_146616fa8 body=55 status=ok
// SIG undefined FUN_146616fa8(void)

void FUN_146616fa8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc04f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc04f8 = FUN_140002ddd(FUN_146616fdf,uVar1,L"TravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 146616fdf FUN_146616fdf body=49 status=ok
// SIG undefined FUN_146616fdf(void)

longlong FUN_146616fdf(void)

{
  if (DAT_14cbc04f0 == 0) {
    FUN_14086a14e(&DAT_14cbc04f0,&PTR_FUN_14b933838);
  }
  return DAT_14cbc04f0;
}



// FUNCTION 146617010 FUN_146617010 body=48 status=ok
// SIG undefined FUN_146617010(void)

void FUN_146617010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000228;
  *puVar1 = &PTR_FUN_14b938450;
  return;
}



// FUNCTION 146617040 FUN_146617040 body=55 status=ok
// SIG undefined FUN_146617040(void)

void FUN_146617040(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0510 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0510 = FUN_140002ddd(FUN_146617077,uVar1,L"TravelStationSpawnPoint");
  }
  return;
}



// FUNCTION 146617077 FUN_146617077 body=47 status=ok
// SIG undefined FUN_146617077(void)

longlong FUN_146617077(void)

{
  if (DAT_14cbc0508 == 0) {
    FUN_14086a14e(&DAT_14cbc0508,&PTR_FUN_14b933948);
  }
  return DAT_14cbc0508;
}



// FUNCTION 1466170a6 FUN_1466170a6 body=48 status=ok
// SIG undefined FUN_1466170a6(void)

void FUN_1466170a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b9385c0;
  return;
}



// FUNCTION 1466170de FUN_1466170de body=49 status=ok
// SIG undefined FUN_1466170de(void)

longlong FUN_1466170de(void)

{
  if (DAT_14cbc0528 == 0) {
    FUN_14073dd9a(&DAT_14cbc0528,&PTR_LAB_14b933b38);
  }
  return DAT_14cbc0528;
}



// FUNCTION 146617110 FUN_146617110 body=55 status=ok
// SIG undefined FUN_146617110(void)

void FUN_146617110(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0540 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0540 = FUN_140002ddd(FUN_146617147,uVar1,L"TravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 146617147 FUN_146617147 body=49 status=ok
// SIG undefined FUN_146617147(void)

longlong FUN_146617147(void)

{
  if (DAT_14cbc0538 == 0) {
    FUN_14086a14e(&DAT_14cbc0538,&PTR_FUN_14b933bd0);
  }
  return DAT_14cbc0538;
}



// FUNCTION 146617178 FUN_146617178 body=48 status=ok
// SIG undefined FUN_146617178(void)

void FUN_146617178(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14b938720;
  return;
}



// FUNCTION 1466171a8 FUN_1466171a8 body=49 status=ok
// SIG undefined FUN_1466171a8(void)

longlong FUN_1466171a8(void)

{
  if (DAT_14cbc0550 == 0) {
    FUN_14086a14e(&DAT_14cbc0550,&PTR_FUN_14b933e30);
  }
  return DAT_14cbc0550;
}



// FUNCTION 1466171da FUN_1466171da body=48 status=ok
// SIG undefined FUN_1466171da(void)

void FUN_1466171da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000490;
  *puVar1 = &PTR_FUN_14b938890;
  return;
}



// FUNCTION 14661720a FUN_14661720a body=55 status=ok
// SIG undefined FUN_14661720a(void)

void FUN_14661720a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0588 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0588 = FUN_140002ddd(FUN_146617241,uVar1,L"TurretAugmentAspect");
  }
  return;
}



// FUNCTION 146617241 FUN_146617241 body=47 status=ok
// SIG undefined FUN_146617241(void)

longlong FUN_146617241(void)

{
  if (DAT_14cbc0580 == 0) {
    FUN_14086a14e(&DAT_14cbc0580,&PTR_FUN_14b9341b8);
  }
  return DAT_14cbc0580;
}



// FUNCTION 146617270 FUN_146617270 body=48 status=ok
// SIG undefined FUN_146617270(void)

void FUN_146617270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b938b60;
  return;
}



// FUNCTION 1466172a0 FUN_1466172a0 body=47 status=ok
// SIG undefined FUN_1466172a0(void)

longlong FUN_1466172a0(void)

{
  if (DAT_14cbc0598 == 0) {
    FUN_1409ce572(&DAT_14cbc0598,&PTR_FUN_14b934260);
  }
  return DAT_14cbc0598;
}



// FUNCTION 1466172cf FUN_1466172cf body=49 status=ok
// SIG undefined FUN_1466172cf(void)

longlong FUN_1466172cf(void)

{
  if (DAT_14cbc05d0 == 0) {
    FUN_14073dd9a(&DAT_14cbc05d0,&PTR_LAB_14b9346e0);
  }
  return DAT_14cbc05d0;
}



// FUNCTION 146617300 FUN_146617300 body=47 status=ok
// SIG undefined FUN_146617300(void)

longlong FUN_146617300(void)

{
  if (DAT_14cbc05b0 == 0) {
    FUN_14000fc22(&DAT_14cbc05b0,&PTR_FUN_14b9342f0);
  }
  return DAT_14cbc05b0;
}



// FUNCTION 14661732f FUN_14661732f body=47 status=ok
// SIG undefined FUN_14661732f(void)

longlong FUN_14661732f(void)

{
  if (DAT_14cbc05b8 == 0) {
    FUN_14000fc22(&DAT_14cbc05b8,&PTR_FUN_14b934388);
  }
  return DAT_14cbc05b8;
}



// FUNCTION 14661735e FUN_14661735e body=47 status=ok
// SIG undefined FUN_14661735e(void)

longlong FUN_14661735e(void)

{
  if (DAT_14cbc05c0 == 0) {
    FUN_14000fc22(&DAT_14cbc05c0,&PTR_FUN_14b934428);
  }
  return DAT_14cbc05c0;
}



// FUNCTION 14661738e FUN_14661738e body=34 status=ok
// SIG undefined FUN_14661738e(void)

void FUN_14661738e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8ecc8();
  FUN_14069c8d6(uVar1,&PTR_s_ProjectileDestroyed_14b934470,3);
  return;
}



// FUNCTION 1466173b0 FUN_1466173b0 body=47 status=ok
// SIG undefined FUN_1466173b0(void)

longlong FUN_1466173b0(void)

{
  if (DAT_14cbc05f0 == 0) {
    FUN_1409ce572(&DAT_14cbc05f0,&PTR_FUN_14b935390);
  }
  return DAT_14cbc05f0;
}



// FUNCTION 1466173e0 FUN_1466173e0 body=55 status=ok
// SIG undefined FUN_1466173e0(void)

void FUN_1466173e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0610 = FUN_140002ddd(FUN_146617417,uVar1,L"TurretTypeAspect");
  }
  return;
}



// FUNCTION 146617417 FUN_146617417 body=47 status=ok
// SIG undefined FUN_146617417(void)

longlong FUN_146617417(void)

{
  if (DAT_14cbc0608 == 0) {
    FUN_14086a14e(&DAT_14cbc0608,&PTR_FUN_14b935610);
  }
  return DAT_14cbc0608;
}



// FUNCTION 146617446 FUN_146617446 body=48 status=ok
// SIG undefined FUN_146617446(void)

void FUN_146617446(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d0;
  *puVar1 = &PTR_FUN_14b938e40;
  return;
}



// FUNCTION 146617476 FUN_146617476 body=55 status=ok
// SIG undefined FUN_146617476(void)

void FUN_146617476(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0628 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0628 = FUN_140002ddd(FUN_1466174ad,uVar1,L"TurretWeaponAspect");
  }
  return;
}



// FUNCTION 1466174ad FUN_1466174ad body=47 status=ok
// SIG undefined FUN_1466174ad(void)

longlong FUN_1466174ad(void)

{
  if (DAT_14cbc0620 == 0) {
    FUN_14086a14e(&DAT_14cbc0620,&PTR_FUN_14b935778);
  }
  return DAT_14cbc0620;
}



// FUNCTION 1466174dc FUN_1466174dc body=48 status=ok
// SIG undefined FUN_1466174dc(void)

void FUN_1466174dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b938ff0;
  return;
}


