// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14667853c FUN_14667853c body=34 status=ok
// SIG undefined FUN_14667853c(void)

void FUN_14667853c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141167aa0();
  FUN_14069c8d6(uVar1,&PTR_s_GetDeformedGroupSections_14ba8ec90,0x18);
  return;
}



// FUNCTION 146678563 FUN_146678563 body=140 status=ok
// SIG undefined FUN_146678563(void)

void FUN_146678563(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1);
  *puVar1 = &PTR_FUN_14ba8fa00;
  puVar1[5] = &PTR_FUN_14ba8fca0;
  *(undefined1 *)(puVar1 + 6) = 0;
  memset((void *)((longlong)puVar1 + 0x34),0,0x86);
  *(undefined1 *)((longlong)puVar1 + 0xba) = 8;
  *(undefined4 *)((longlong)puVar1 + 0x124) = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xcd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xd5) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  return;
}



// FUNCTION 1466785ef FUN_1466785ef body=47 status=ok
// SIG undefined FUN_1466785ef(void)

longlong FUN_1466785ef(void)

{
  if (DAT_14cbf7878 == 0) {
    FUN_1409ce572(&DAT_14cbf7878,&PTR_FUN_14ba91d90);
  }
  return DAT_14cbf7878;
}



// FUNCTION 14667861e FUN_14667861e body=47 status=ok
// SIG undefined FUN_14667861e(void)

longlong FUN_14667861e(void)

{
  if (DAT_14cbf7728 == 0) {
    FUN_1409ce572(&DAT_14cbf7728,&PTR_FUN_14ba906e0);
  }
  return DAT_14cbf7728;
}



// FUNCTION 14667864d FUN_14667864d body=47 status=ok
// SIG undefined FUN_14667864d(void)

longlong FUN_14667864d(void)

{
  if (DAT_14cbf7740 == 0) {
    FUN_1409ce572(&DAT_14cbf7740,&PTR_FUN_14ba90750);
  }
  return DAT_14cbf7740;
}



// FUNCTION 14667867c FUN_14667867c body=47 status=ok
// SIG undefined FUN_14667867c(void)

longlong FUN_14667867c(void)

{
  if (DAT_14cbf7758 == 0) {
    FUN_1409ce572(&DAT_14cbf7758,&PTR_FUN_14ba907e0);
  }
  return DAT_14cbf7758;
}



// FUNCTION 1466786ac FUN_1466786ac body=55 status=ok
// SIG undefined FUN_1466786ac(void)

void FUN_1466786ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7778 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7778 = FUN_140002ddd(FUN_1466786e3,uVar1,L"HairGroupCardsInfo");
  }
  return;
}



// FUNCTION 1466786e3 FUN_1466786e3 body=47 status=ok
// SIG undefined FUN_1466786e3(void)

longlong FUN_1466786e3(void)

{
  if (DAT_14cbf7770 == 0) {
    FUN_14086a14e(&DAT_14cbf7770,&PTR_FUN_14ba908e8);
  }
  return DAT_14cbf7770;
}



// FUNCTION 146678712 FUN_146678712 body=48 status=ok
// SIG undefined FUN_146678712(void)

void FUN_146678712(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14ba97fb0;
  return;
}



// FUNCTION 146678742 FUN_146678742 body=55 status=ok
// SIG undefined FUN_146678742(void)

void FUN_146678742(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7790 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7790 = FUN_140002ddd(FUN_146678779,uVar1,L"HairGroupCardsTextures");
  }
  return;
}



// FUNCTION 146678779 FUN_146678779 body=49 status=ok
// SIG undefined FUN_146678779(void)

longlong FUN_146678779(void)

{
  if (DAT_14cbf7788 == 0) {
    FUN_14086a14e(&DAT_14cbf7788,&PTR_FUN_14ba90ca8);
  }
  return DAT_14cbf7788;
}



// FUNCTION 1466787aa FUN_1466787aa body=48 status=ok
// SIG undefined FUN_1466787aa(void)

void FUN_1466787aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ba98110;
  return;
}



// FUNCTION 1466787da FUN_1466787da body=35 status=ok
// SIG undefined FUN_1466787da(void)

void FUN_1466787da(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba90d80;
  return;
}



// FUNCTION 1466787fd FUN_1466787fd body=47 status=ok
// SIG undefined FUN_1466787fd(void)

longlong FUN_1466787fd(void)

{
  if (DAT_14cbf77a8 == 0) {
    FUN_14073dd9a(&DAT_14cbf77a8,&PTR_LAB_14ba90d38);
  }
  return DAT_14cbf77a8;
}



// FUNCTION 14667882c FUN_14667882c body=55 status=ok
// SIG undefined FUN_14667882c(void)

void FUN_14667882c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf77c0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf77c0 = FUN_140002ddd(FUN_14667800a,uVar1,L"HairGroupsCardsSourceDescription");
  }
  return;
}



// FUNCTION 146678864 FUN_146678864 body=48 status=ok
// SIG undefined FUN_146678864(void)

void FUN_146678864(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14ba98270;
  return;
}



// FUNCTION 146678894 FUN_146678894 body=42 status=ok
// SIG undefined FUN_146678894(void)

void FUN_146678894(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba91760;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1466788be FUN_1466788be body=47 status=ok
// SIG undefined FUN_1466788be(void)

longlong FUN_1466788be(void)

{
  if (DAT_14cbf77d8 == 0) {
    FUN_14073dd9a(&DAT_14cbf77d8,&PTR_LAB_14ba91718);
  }
  return DAT_14cbf77d8;
}



// FUNCTION 1466788ed FUN_1466788ed body=47 status=ok
// SIG undefined FUN_1466788ed(void)

longlong FUN_1466788ed(void)

{
  if (DAT_14cbf77e8 == 0) {
    FUN_1409ce572(&DAT_14cbf77e8,&PTR_FUN_14ba91a90);
  }
  return DAT_14cbf77e8;
}



// FUNCTION 14667891c FUN_14667891c body=47 status=ok
// SIG undefined FUN_14667891c(void)

longlong FUN_14667891c(void)

{
  if (DAT_14cbf7800 == 0) {
    FUN_1409ce572(&DAT_14cbf7800,&PTR_FUN_14ba91b30);
  }
  return DAT_14cbf7800;
}



// FUNCTION 14667894b FUN_14667894b body=47 status=ok
// SIG undefined FUN_14667894b(void)

longlong FUN_14667894b(void)

{
  if (DAT_14cbf7818 == 0) {
    FUN_1409ce572(&DAT_14cbf7818,&PTR_FUN_14ba91bb0);
  }
  return DAT_14cbf7818;
}



// FUNCTION 14667897a FUN_14667897a body=47 status=ok
// SIG undefined FUN_14667897a(void)

longlong FUN_14667897a(void)

{
  if (DAT_14cbf7830 == 0) {
    FUN_1409ce572(&DAT_14cbf7830,&PTR_FUN_14ba91c30);
  }
  return DAT_14cbf7830;
}



// FUNCTION 1466789a9 FUN_1466789a9 body=47 status=ok
// SIG undefined FUN_1466789a9(void)

longlong FUN_1466789a9(void)

{
  if (DAT_14cbf7848 == 0) {
    FUN_1409ce572(&DAT_14cbf7848,&PTR_FUN_14ba91cb0);
  }
  return DAT_14cbf7848;
}



// FUNCTION 1466789d8 FUN_1466789d8 body=47 status=ok
// SIG undefined FUN_1466789d8(void)

longlong FUN_1466789d8(void)

{
  if (DAT_14cbf7860 == 0) {
    FUN_1409ce572(&DAT_14cbf7860,&PTR_FUN_14ba91d20);
  }
  return DAT_14cbf7860;
}



// FUNCTION 146678a08 FUN_146678a08 body=55 status=ok
// SIG undefined FUN_146678a08(void)

void FUN_146678a08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7898 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7898 = FUN_140002ddd(FUN_146678a3f,uVar1,L"HairLODSettings");
  }
  return;
}



// FUNCTION 146678a3f FUN_146678a3f body=47 status=ok
// SIG undefined FUN_146678a3f(void)

longlong FUN_146678a3f(void)

{
  if (DAT_14cbf7890 == 0) {
    FUN_14086a14e(&DAT_14cbf7890,&PTR_FUN_14ba92230);
  }
  return DAT_14cbf7890;
}



// FUNCTION 146678a6e FUN_146678a6e body=48 status=ok
// SIG undefined FUN_146678a6e(void)

void FUN_146678a6e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14ba987a0;
  return;
}



// FUNCTION 146678a9e FUN_146678a9e body=55 status=ok
// SIG undefined FUN_146678a9e(void)

void FUN_146678a9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf78b0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf78b0 = FUN_140002ddd(FUN_146678ad5,uVar1,L"HairDecimationSettings");
  }
  return;
}



// FUNCTION 146678ad5 FUN_146678ad5 body=47 status=ok
// SIG undefined FUN_146678ad5(void)

longlong FUN_146678ad5(void)

{
  if (DAT_14cbf78a8 == 0) {
    FUN_14086a14e(&DAT_14cbf78a8,&PTR_FUN_14ba92338);
  }
  return DAT_14cbf78a8;
}



// FUNCTION 146678b04 FUN_146678b04 body=48 status=ok
// SIG undefined FUN_146678b04(void)

void FUN_146678b04(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14ba98900;
  return;
}



// FUNCTION 146678b34 FUN_146678b34 body=55 status=ok
// SIG undefined FUN_146678b34(void)

void FUN_146678b34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf78c8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf78c8 = FUN_140002ddd(FUN_146678b6b,uVar1,L"HairInterpolationSettings");
  }
  return;
}



// FUNCTION 146678b6b FUN_146678b6b body=47 status=ok
// SIG undefined FUN_146678b6b(void)

longlong FUN_146678b6b(void)

{
  if (DAT_14cbf78c0 == 0) {
    FUN_14086a14e(&DAT_14cbf78c0,&PTR_FUN_14ba92740);
  }
  return DAT_14cbf78c0;
}



// FUNCTION 146678b9a FUN_146678b9a body=48 status=ok
// SIG undefined FUN_146678b9a(void)

void FUN_146678b9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14ba98a60;
  return;
}



// FUNCTION 146678bca FUN_146678bca body=55 status=ok
// SIG undefined FUN_146678bca(void)

void FUN_146678bca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf78e0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf78e0 = FUN_140002ddd(FUN_146678c01,uVar1,L"HairDeformationSettings");
  }
  return;
}



// FUNCTION 146678c01 FUN_146678c01 body=47 status=ok
// SIG undefined FUN_146678c01(void)

longlong FUN_146678c01(void)

{
  if (DAT_14cbf78d8 == 0) {
    FUN_14086a14e(&DAT_14cbf78d8,&PTR_FUN_14ba928a0);
  }
  return DAT_14cbf78d8;
}



// FUNCTION 146678c30 FUN_146678c30 body=48 status=ok
// SIG undefined FUN_146678c30(void)

void FUN_146678c30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ba98bc0;
  return;
}



// FUNCTION 146678c60 FUN_146678c60 body=55 status=ok
// SIG undefined FUN_146678c60(void)

void FUN_146678c60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf78f8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf78f8 = FUN_140002ddd(FUN_14667806a,uVar1,L"HairGroupsInterpolation");
  }
  return;
}



// FUNCTION 146678c98 FUN_146678c98 body=48 status=ok
// SIG undefined FUN_146678c98(void)

void FUN_146678c98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000028;
  *puVar1 = &PTR_FUN_14ba98d20;
  return;
}



// FUNCTION 146678cc8 FUN_146678cc8 body=55 status=ok
// SIG undefined FUN_146678cc8(void)

void FUN_146678cc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7910 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7910 = FUN_140002ddd(FUN_1466780ca,uVar1,L"HairGroupsLOD");
  }
  return;
}



// FUNCTION 146678d00 FUN_146678d00 body=48 status=ok
// SIG undefined FUN_146678d00(void)

void FUN_146678d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ba98e80;
  return;
}



// FUNCTION 146678d30 FUN_146678d30 body=55 status=ok
// SIG undefined FUN_146678d30(void)

void FUN_146678d30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7928 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7928 = FUN_140002ddd(FUN_146678159,uVar1,L"HairGroupsMeshesSourceDescription");
  }
  return;
}



// FUNCTION 146678d68 FUN_146678d68 body=48 status=ok
// SIG undefined FUN_146678d68(void)

void FUN_146678d68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14ba98fe0;
  return;
}



// FUNCTION 146678d98 FUN_146678d98 body=47 status=ok
// SIG undefined FUN_146678d98(void)

longlong FUN_146678d98(void)

{
  if (DAT_14cbf7938 == 0) {
    FUN_1409ce572(&DAT_14cbf7938,&PTR_FUN_14ba92fc0);
  }
  return DAT_14cbf7938;
}



// FUNCTION 146678dc7 FUN_146678dc7 body=47 status=ok
// SIG undefined FUN_146678dc7(void)

longlong FUN_146678dc7(void)

{
  if (DAT_14cbf7950 == 0) {
    FUN_1409ce572(&DAT_14cbf7950,&PTR_FUN_14ba93070);
  }
  return DAT_14cbf7950;
}



// FUNCTION 146678df6 FUN_146678df6 body=55 status=ok
// SIG undefined FUN_146678df6(void)

void FUN_146678df6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7988 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7988 = FUN_140002ddd(FUN_146678e2d,uVar1,L"HairSolverSettings");
  }
  return;
}



// FUNCTION 146678e2d FUN_146678e2d body=47 status=ok
// SIG undefined FUN_146678e2d(void)

longlong FUN_146678e2d(void)

{
  if (DAT_14cbf7980 == 0) {
    FUN_14086a14e(&DAT_14cbf7980,&PTR_FUN_14ba93418);
  }
  return DAT_14cbf7980;
}



// FUNCTION 146678e5c FUN_146678e5c body=48 status=ok
// SIG undefined FUN_146678e5c(void)

void FUN_146678e5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14ba99380;
  return;
}



// FUNCTION 146678e8c FUN_146678e8c body=55 status=ok
// SIG undefined FUN_146678e8c(void)

void FUN_146678e8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf79a0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf79a0 = FUN_140002ddd(FUN_146678ec3,uVar1,L"HairExternalForces");
  }
  return;
}



// FUNCTION 146678ec3 FUN_146678ec3 body=47 status=ok
// SIG undefined FUN_146678ec3(void)

longlong FUN_146678ec3(void)

{
  if (DAT_14cbf7998 == 0) {
    FUN_14086a14e(&DAT_14cbf7998,&PTR_FUN_14ba93590);
  }
  return DAT_14cbf7998;
}



// FUNCTION 146678ef2 FUN_146678ef2 body=48 status=ok
// SIG undefined FUN_146678ef2(void)

void FUN_146678ef2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ba994e0;
  return;
}



// FUNCTION 146678f22 FUN_146678f22 body=55 status=ok
// SIG undefined FUN_146678f22(void)

void FUN_146678f22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf79b8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf79b8 = FUN_140002ddd(FUN_146678f59,uVar1,L"HairBendConstraint");
  }
  return;
}



// FUNCTION 146678f59 FUN_146678f59 body=47 status=ok
// SIG undefined FUN_146678f59(void)

longlong FUN_146678f59(void)

{
  if (DAT_14cbf79b0 == 0) {
    FUN_14086a14e(&DAT_14cbf79b0,&PTR_FUN_14ba937b0);
  }
  return DAT_14cbf79b0;
}



// FUNCTION 146678f88 FUN_146678f88 body=48 status=ok
// SIG undefined FUN_146678f88(void)

void FUN_146678f88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ba99640;
  return;
}



// FUNCTION 146678fb8 FUN_146678fb8 body=55 status=ok
// SIG undefined FUN_146678fb8(void)

void FUN_146678fb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf79d0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf79d0 = FUN_140002ddd(FUN_146678fef,uVar1,L"HairStretchConstraint");
  }
  return;
}



// FUNCTION 146678fef FUN_146678fef body=47 status=ok
// SIG undefined FUN_146678fef(void)

longlong FUN_146678fef(void)

{
  if (DAT_14cbf79c8 == 0) {
    FUN_14086a14e(&DAT_14cbf79c8,&PTR_FUN_14ba939e0);
  }
  return DAT_14cbf79c8;
}



// FUNCTION 14667901e FUN_14667901e body=48 status=ok
// SIG undefined FUN_14667901e(void)

void FUN_14667901e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ba997a0;
  return;
}



// FUNCTION 14667904e FUN_14667904e body=55 status=ok
// SIG undefined FUN_14667904e(void)

void FUN_14667904e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf79e8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf79e8 = FUN_140002ddd(FUN_146679085,uVar1,L"HairCollisionConstraint");
  }
  return;
}



// FUNCTION 146679085 FUN_146679085 body=47 status=ok
// SIG undefined FUN_146679085(void)

longlong FUN_146679085(void)

{
  if (DAT_14cbf79e0 == 0) {
    FUN_14086a14e(&DAT_14cbf79e0,&PTR_FUN_14ba93ce8);
  }
  return DAT_14cbf79e0;
}



// FUNCTION 1466790b4 FUN_1466790b4 body=48 status=ok
// SIG undefined FUN_1466790b4(void)

void FUN_1466790b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14ba99900;
  return;
}



// FUNCTION 1466790e4 FUN_1466790e4 body=55 status=ok
// SIG undefined FUN_1466790e4(void)

void FUN_1466790e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a00 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a00 = FUN_140002ddd(FUN_14667911b,uVar1,L"HairMaterialConstraints");
  }
  return;
}



// FUNCTION 14667911b FUN_14667911b body=47 status=ok
// SIG undefined FUN_14667911b(void)

longlong FUN_14667911b(void)

{
  if (DAT_14cbf79f8 == 0) {
    FUN_14086a14e(&DAT_14cbf79f8,&PTR_FUN_14ba93e70);
  }
  return DAT_14cbf79f8;
}



// FUNCTION 14667914a FUN_14667914a body=48 status=ok
// SIG undefined FUN_14667914a(void)

void FUN_14667914a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001d8;
  *puVar1 = &PTR_FUN_14ba99a60;
  return;
}



// FUNCTION 14667917a FUN_14667917a body=55 status=ok
// SIG undefined FUN_14667917a(void)

void FUN_14667917a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a18 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a18 = FUN_140002ddd(FUN_1466791b1,uVar1,L"HairStrandsParameters");
  }
  return;
}



// FUNCTION 1466791b1 FUN_1466791b1 body=47 status=ok
// SIG undefined FUN_1466791b1(void)

longlong FUN_1466791b1(void)

{
  if (DAT_14cbf7a10 == 0) {
    FUN_14086a14e(&DAT_14cbf7a10,&PTR_FUN_14ba940a8);
  }
  return DAT_14cbf7a10;
}



// FUNCTION 1466791e0 FUN_1466791e0 body=48 status=ok
// SIG undefined FUN_1466791e0(void)

void FUN_1466791e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ba99bc0;
  return;
}



// FUNCTION 146679210 FUN_146679210 body=55 status=ok
// SIG undefined FUN_146679210(void)

void FUN_146679210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a30 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a30 = FUN_140002ddd(FUN_1466781b9,uVar1,L"HairGroupsPhysics");
  }
  return;
}



// FUNCTION 146679248 FUN_146679248 body=48 status=ok
// SIG undefined FUN_146679248(void)

void FUN_146679248(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000002e8;
  *puVar1 = &PTR_FUN_14ba99d20;
  return;
}



// FUNCTION 146679278 FUN_146679278 body=55 status=ok
// SIG undefined FUN_146679278(void)

void FUN_146679278(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a48 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a48 = FUN_140002ddd(FUN_1466792af,uVar1,L"HairSimulationSolver");
  }
  return;
}



// FUNCTION 1466792af FUN_1466792af body=47 status=ok
// SIG undefined FUN_1466792af(void)

longlong FUN_1466792af(void)

{
  if (DAT_14cbf7a40 == 0) {
    FUN_14086a14e(&DAT_14cbf7a40,&PTR_FUN_14ba94308);
  }
  return DAT_14cbf7a40;
}



// FUNCTION 1466792de FUN_1466792de body=48 status=ok
// SIG undefined FUN_1466792de(void)

void FUN_1466792de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ba99e80;
  return;
}



// FUNCTION 14667930e FUN_14667930e body=55 status=ok
// SIG undefined FUN_14667930e(void)

void FUN_14667930e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a60 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a60 = FUN_140002ddd(FUN_146679345,uVar1,L"HairSimulationForces");
  }
  return;
}



// FUNCTION 146679345 FUN_146679345 body=47 status=ok
// SIG undefined FUN_146679345(void)

longlong FUN_146679345(void)

{
  if (DAT_14cbf7a58 == 0) {
    FUN_14086a14e(&DAT_14cbf7a58,&PTR_FUN_14ba94460);
  }
  return DAT_14cbf7a58;
}



// FUNCTION 146679374 FUN_146679374 body=48 status=ok
// SIG undefined FUN_146679374(void)

void FUN_146679374(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ba99fe0;
  return;
}



// FUNCTION 1466793a4 FUN_1466793a4 body=55 status=ok
// SIG undefined FUN_1466793a4(void)

void FUN_1466793a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a78 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a78 = FUN_140002ddd(FUN_1466793db,uVar1,L"HairSimulationConstraints");
  }
  return;
}



// FUNCTION 1466793db FUN_1466793db body=47 status=ok
// SIG undefined FUN_1466793db(void)

longlong FUN_1466793db(void)

{
  if (DAT_14cbf7a70 == 0) {
    FUN_14086a14e(&DAT_14cbf7a70,&PTR_FUN_14ba946f0);
  }
  return DAT_14cbf7a70;
}



// FUNCTION 14667940a FUN_14667940a body=48 status=ok
// SIG undefined FUN_14667940a(void)

void FUN_14667940a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14ba9a140;
  return;
}



// FUNCTION 14667943a FUN_14667943a body=55 status=ok
// SIG undefined FUN_14667943a(void)

void FUN_14667943a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7a90 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7a90 = FUN_140002ddd(FUN_146679471,uVar1,L"HairSimulationSetup");
  }
  return;
}



// FUNCTION 146679471 FUN_146679471 body=47 status=ok
// SIG undefined FUN_146679471(void)

longlong FUN_146679471(void)

{
  if (DAT_14cbf7a88 == 0) {
    FUN_14086a14e(&DAT_14cbf7a88,&PTR_FUN_14ba949d0);
  }
  return DAT_14cbf7a88;
}



// FUNCTION 1466794a0 FUN_1466794a0 body=48 status=ok
// SIG undefined FUN_1466794a0(void)

void FUN_1466794a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ba9a2a0;
  return;
}



// FUNCTION 1466794d0 FUN_1466794d0 body=55 status=ok
// SIG undefined FUN_1466794d0(void)

void FUN_1466794d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7aa8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7aa8 = FUN_140002ddd(FUN_146679507,uVar1,L"HairSimulationSettings");
  }
  return;
}



// FUNCTION 146679507 FUN_146679507 body=47 status=ok
// SIG undefined FUN_146679507(void)

longlong FUN_146679507(void)

{
  if (DAT_14cbf7aa0 == 0) {
    FUN_14086a14e(&DAT_14cbf7aa0,&PTR_FUN_14ba94be0);
  }
  return DAT_14cbf7aa0;
}



// FUNCTION 146679536 FUN_146679536 body=48 status=ok
// SIG undefined FUN_146679536(void)

void FUN_146679536(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14ba9a400;
  return;
}



// FUNCTION 146679566 FUN_146679566 body=55 status=ok
// SIG undefined FUN_146679566(void)

void FUN_146679566(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7ac0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7ac0 = FUN_140002ddd(FUN_14667959d,uVar1,L"HairGeometrySettings");
  }
  return;
}



// FUNCTION 14667959d FUN_14667959d body=47 status=ok
// SIG undefined FUN_14667959d(void)

longlong FUN_14667959d(void)

{
  if (DAT_14cbf7ab8 == 0) {
    FUN_14086a14e(&DAT_14cbf7ab8,&PTR_FUN_14ba94fd8);
  }
  return DAT_14cbf7ab8;
}



// FUNCTION 1466795cc FUN_1466795cc body=48 status=ok
// SIG undefined FUN_1466795cc(void)

void FUN_1466795cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ba9a570;
  return;
}



// FUNCTION 1466795fc FUN_1466795fc body=55 status=ok
// SIG undefined FUN_1466795fc(void)

void FUN_1466795fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7ad8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7ad8 = FUN_140002ddd(FUN_146679633,uVar1,L"HairShadowSettings");
  }
  return;
}



// FUNCTION 146679633 FUN_146679633 body=47 status=ok
// SIG undefined FUN_146679633(void)

longlong FUN_146679633(void)

{
  if (DAT_14cbf7ad0 == 0) {
    FUN_14086a14e(&DAT_14cbf7ad0,&PTR_FUN_14ba95178);
  }
  return DAT_14cbf7ad0;
}



// FUNCTION 146679662 FUN_146679662 body=48 status=ok
// SIG undefined FUN_146679662(void)

void FUN_146679662(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ba9a6d0;
  return;
}



// FUNCTION 146679692 FUN_146679692 body=55 status=ok
// SIG undefined FUN_146679692(void)

void FUN_146679692(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7af0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7af0 = FUN_140002ddd(FUN_1466796c9,uVar1,L"HairAdvancedRenderingSettings");
  }
  return;
}



// FUNCTION 1466796c9 FUN_1466796c9 body=47 status=ok
// SIG undefined FUN_1466796c9(void)

longlong FUN_1466796c9(void)

{
  if (DAT_14cbf7ae8 == 0) {
    FUN_14086a14e(&DAT_14cbf7ae8,&PTR_FUN_14ba952a0);
  }
  return DAT_14cbf7ae8;
}



// FUNCTION 1466796f8 FUN_1466796f8 body=48 status=ok
// SIG undefined FUN_1466796f8(void)

void FUN_1466796f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14ba9a830;
  return;
}



// FUNCTION 146679728 FUN_146679728 body=55 status=ok
// SIG undefined FUN_146679728(void)

void FUN_146679728(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7b08 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7b08 = FUN_140002ddd(FUN_146678219,uVar1,L"HairGroupsRendering");
  }
  return;
}



// FUNCTION 146679760 FUN_146679760 body=48 status=ok
// SIG undefined FUN_146679760(void)

void FUN_146679760(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ba9a990;
  return;
}



// FUNCTION 146679790 FUN_146679790 body=55 status=ok
// SIG undefined FUN_146679790(void)

void FUN_146679790(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7b20 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7b20 = FUN_140002ddd(FUN_1466797c7,uVar1,L"GoomBindingGroupInfo");
  }
  return;
}



// FUNCTION 1466797c7 FUN_1466797c7 body=49 status=ok
// SIG undefined FUN_1466797c7(void)

longlong FUN_1466797c7(void)

{
  if (DAT_14cbf7b18 == 0) {
    FUN_14086a14e(&DAT_14cbf7b18,&PTR_FUN_14ba956d8);
  }
  return DAT_14cbf7b18;
}



// FUNCTION 1466797f8 FUN_1466797f8 body=48 status=ok
// SIG undefined FUN_1466797f8(void)

void FUN_1466797f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ba9aaf0;
  return;
}



// FUNCTION 146679828 FUN_146679828 body=49 status=ok
// SIG undefined FUN_146679828(void)

longlong FUN_146679828(void)

{
  if (DAT_14cbf7b30 == 0) {
    FUN_1409ce572(&DAT_14cbf7b30,&PTR_FUN_14ba95750);
  }
  return DAT_14cbf7b30;
}



// FUNCTION 146679859 FUN_146679859 body=47 status=ok
// SIG undefined FUN_146679859(void)

longlong FUN_146679859(void)

{
  if (DAT_14cbf7b48 == 0) {
    FUN_1409ce572(&DAT_14cbf7b48,&PTR_FUN_14ba95870);
  }
  return DAT_14cbf7b48;
}



// FUNCTION 146679888 FUN_146679888 body=47 status=ok
// SIG undefined FUN_146679888(void)

longlong FUN_146679888(void)

{
  if (DAT_14cbf7b60 == 0) {
    FUN_14000fc22(&DAT_14cbf7b60,&PTR_FUN_14ba958f8);
  }
  return DAT_14cbf7b60;
}



// FUNCTION 1466798b7 FUN_1466798b7 body=47 status=ok
// SIG undefined FUN_1466798b7(void)

longlong FUN_1466798b7(void)

{
  if (DAT_14cbf7b68 == 0) {
    FUN_14000fc22(&DAT_14cbf7b68,&PTR_FUN_14ba959e8);
  }
  return DAT_14cbf7b68;
}



// FUNCTION 1466798e6 FUN_1466798e6 body=47 status=ok
// SIG undefined FUN_1466798e6(void)

longlong FUN_1466798e6(void)

{
  if (DAT_14cbf7b70 == 0) {
    FUN_14000fc22(&DAT_14cbf7b70,&PTR_FUN_14ba95ac0);
  }
  return DAT_14cbf7b70;
}



// FUNCTION 146679915 FUN_146679915 body=47 status=ok
// SIG undefined FUN_146679915(void)

longlong FUN_146679915(void)

{
  if (DAT_14cbf7b78 == 0) {
    FUN_14000fc22(&DAT_14cbf7b78,&PTR_FUN_14ba95b58);
  }
  return DAT_14cbf7b78;
}



// FUNCTION 146679944 FUN_146679944 body=47 status=ok
// SIG undefined FUN_146679944(void)

longlong FUN_146679944(void)

{
  if (DAT_14cbf7b80 == 0) {
    FUN_14000fc22(&DAT_14cbf7b80,&PTR_FUN_14ba95bf8);
  }
  return DAT_14cbf7b80;
}



// FUNCTION 146679973 FUN_146679973 body=47 status=ok
// SIG undefined FUN_146679973(void)

longlong FUN_146679973(void)

{
  if (DAT_14cbf7b88 == 0) {
    FUN_14000fc22(&DAT_14cbf7b88,&PTR_FUN_14ba95c98);
  }
  return DAT_14cbf7b88;
}



// FUNCTION 1466799a2 FUN_1466799a2 body=47 status=ok
// SIG undefined FUN_1466799a2(void)

longlong FUN_1466799a2(void)

{
  if (DAT_14cbf7b90 == 0) {
    FUN_14000fc22(&DAT_14cbf7b90,&PTR_FUN_14ba95d38);
  }
  return DAT_14cbf7b90;
}



// FUNCTION 1466799d1 FUN_1466799d1 body=47 status=ok
// SIG undefined FUN_1466799d1(void)

longlong FUN_1466799d1(void)

{
  if (DAT_14cbf7b98 == 0) {
    FUN_14000fc22(&DAT_14cbf7b98,&PTR_FUN_14ba95dd8);
  }
  return DAT_14cbf7b98;
}



// FUNCTION 146679a00 FUN_146679a00 body=47 status=ok
// SIG undefined FUN_146679a00(void)

longlong FUN_146679a00(void)

{
  if (DAT_14cbf7ba0 == 0) {
    FUN_14000fc22(&DAT_14cbf7ba0,&PTR_FUN_14ba95e78);
  }
  return DAT_14cbf7ba0;
}



// FUNCTION 146679a2f FUN_146679a2f body=47 status=ok
// SIG undefined FUN_146679a2f(void)

longlong FUN_146679a2f(void)

{
  if (DAT_14cbf7ba8 == 0) {
    FUN_14000fc22(&DAT_14cbf7ba8,&PTR_FUN_14ba95f18);
  }
  return DAT_14cbf7ba8;
}



// FUNCTION 146679a5e FUN_146679a5e body=47 status=ok
// SIG undefined FUN_146679a5e(void)

longlong FUN_146679a5e(void)

{
  if (DAT_14cbf7bb0 == 0) {
    FUN_14000fc22(&DAT_14cbf7bb0,&PTR_FUN_14ba96018);
  }
  return DAT_14cbf7bb0;
}



// FUNCTION 146679a8d FUN_146679a8d body=47 status=ok
// SIG undefined FUN_146679a8d(void)

longlong FUN_146679a8d(void)

{
  if (DAT_14cbf7bb8 == 0) {
    FUN_14000fc22(&DAT_14cbf7bb8,&PTR_FUN_14ba96100);
  }
  return DAT_14cbf7bb8;
}



// FUNCTION 146679abc FUN_146679abc body=47 status=ok
// SIG undefined FUN_146679abc(void)

longlong FUN_146679abc(void)

{
  if (DAT_14cbf7bc0 == 0) {
    FUN_14000fc22(&DAT_14cbf7bc0,&PTR_FUN_14ba961b0);
  }
  return DAT_14cbf7bc0;
}



// FUNCTION 146679aeb FUN_146679aeb body=47 status=ok
// SIG undefined FUN_146679aeb(void)

longlong FUN_146679aeb(void)

{
  if (DAT_14cbf7bc8 == 0) {
    FUN_14000fc22(&DAT_14cbf7bc8,&PTR_FUN_14ba96270);
  }
  return DAT_14cbf7bc8;
}



// FUNCTION 146679b1a FUN_146679b1a body=47 status=ok
// SIG undefined FUN_146679b1a(void)

longlong FUN_146679b1a(void)

{
  if (DAT_14cbf7bd0 == 0) {
    FUN_14000fc22(&DAT_14cbf7bd0,&PTR_FUN_14ba96320);
  }
  return DAT_14cbf7bd0;
}



// FUNCTION 146679b49 FUN_146679b49 body=47 status=ok
// SIG undefined FUN_146679b49(void)

longlong FUN_146679b49(void)

{
  if (DAT_14cbf7bd8 == 0) {
    FUN_14000fc22(&DAT_14cbf7bd8,&PTR_FUN_14ba963d0);
  }
  return DAT_14cbf7bd8;
}



// FUNCTION 146679b78 FUN_146679b78 body=47 status=ok
// SIG undefined FUN_146679b78(void)

longlong FUN_146679b78(void)

{
  if (DAT_14cbf7be0 == 0) {
    FUN_14000fc22(&DAT_14cbf7be0,&PTR_FUN_14ba96470);
  }
  return DAT_14cbf7be0;
}



// FUNCTION 146679ba7 FUN_146679ba7 body=47 status=ok
// SIG undefined FUN_146679ba7(void)

longlong FUN_146679ba7(void)

{
  if (DAT_14cbf7be8 == 0) {
    FUN_14000fc22(&DAT_14cbf7be8,&PTR_FUN_14ba96510);
  }
  return DAT_14cbf7be8;
}



// FUNCTION 146679bd6 FUN_146679bd6 body=34 status=ok
// SIG undefined FUN_146679bd6(void)

void FUN_146679bd6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141225dee();
  FUN_14069c8d6(uVar1,&PTR_s_GetGroom_14ba96550,0x12);
  return;
}



// FUNCTION 146679bfd FUN_146679bfd body=42 status=ok
// SIG undefined FUN_146679bfd(void)

void FUN_146679bfd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba96fc0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146679c27 FUN_146679c27 body=47 status=ok
// SIG undefined FUN_146679c27(void)

longlong FUN_146679c27(void)

{
  if (DAT_14cbf7c10 == 0) {
    FUN_14073dd9a(&DAT_14cbf7c10,&PTR_LAB_14ba96f78);
  }
  return DAT_14cbf7c10;
}



// FUNCTION 146679c56 FUN_146679c56 body=72 status=ok
// SIG undefined FUN_146679c56(void)

void FUN_146679c56(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ba9b270;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146679c9e FUN_146679c9e body=69 status=ok
// SIG undefined FUN_146679c9e(void)

undefined8 * FUN_146679c9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8baa0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679ce4 FUN_146679ce4 body=69 status=ok
// SIG undefined FUN_146679ce4(void)

undefined8 * FUN_146679ce4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba8be20;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679d2a FUN_146679d2a body=40 status=ok
// SIG undefined FUN_146679d2a(void)

undefined8 FUN_146679d2a(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679d52 FUN_146679d52 body=40 status=ok
// SIG undefined FUN_146679d52(void)

undefined8 FUN_146679d52(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679d7a FUN_146679d7a body=40 status=ok
// SIG undefined FUN_146679d7a(void)

undefined8 FUN_146679d7a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679da2 FUN_146679da2 body=69 status=ok
// SIG undefined FUN_146679da2(void)

undefined8 * FUN_146679da2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba96fc0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679de8 FUN_146679de8 body=29 status=ok
// SIG undefined FUN_146679de8(void)

undefined8 FUN_146679de8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679e06 FUN_146679e06 body=29 status=ok
// SIG undefined FUN_146679e06(void)

undefined8 FUN_146679e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679e24 FUN_146679e24 body=29 status=ok
// SIG undefined FUN_146679e24(void)

undefined8 FUN_146679e24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679e42 FUN_146679e42 body=29 status=ok
// SIG undefined FUN_146679e42(void)

undefined8 FUN_146679e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679e60 FUN_146679e60 body=29 status=ok
// SIG undefined FUN_146679e60(void)

undefined8 FUN_146679e60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679e7e FUN_146679e7e body=29 status=ok
// SIG undefined FUN_146679e7e(void)

undefined8 FUN_146679e7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679e9c FUN_146679e9c body=29 status=ok
// SIG undefined FUN_146679e9c(void)

undefined8 FUN_146679e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679eba FUN_146679eba body=29 status=ok
// SIG undefined FUN_146679eba(void)

undefined8 FUN_146679eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679ed8 FUN_146679ed8 body=29 status=ok
// SIG undefined FUN_146679ed8(void)

undefined8 FUN_146679ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679ef6 FUN_146679ef6 body=29 status=ok
// SIG undefined FUN_146679ef6(void)

undefined8 FUN_146679ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679f14 FUN_146679f14 body=29 status=ok
// SIG undefined FUN_146679f14(void)

undefined8 FUN_146679f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679f32 FUN_146679f32 body=29 status=ok
// SIG undefined FUN_146679f32(void)

undefined8 FUN_146679f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679f50 FUN_146679f50 body=29 status=ok
// SIG undefined FUN_146679f50(void)

undefined8 FUN_146679f50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679f6e FUN_146679f6e body=29 status=ok
// SIG undefined FUN_146679f6e(void)

undefined8 FUN_146679f6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679f8c FUN_146679f8c body=29 status=ok
// SIG undefined FUN_146679f8c(void)

undefined8 FUN_146679f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679faa FUN_146679faa body=29 status=ok
// SIG undefined FUN_146679faa(void)

undefined8 FUN_146679faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679fc8 FUN_146679fc8 body=29 status=ok
// SIG undefined FUN_146679fc8(void)

undefined8 FUN_146679fc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146679fe6 FUN_146679fe6 body=29 status=ok
// SIG undefined FUN_146679fe6(void)

undefined8 FUN_146679fe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a004 FUN_14667a004 body=29 status=ok
// SIG undefined FUN_14667a004(void)

undefined8 FUN_14667a004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a022 FUN_14667a022 body=29 status=ok
// SIG undefined FUN_14667a022(void)

undefined8 FUN_14667a022(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a040 FUN_14667a040 body=29 status=ok
// SIG undefined FUN_14667a040(void)

undefined8 FUN_14667a040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a05e FUN_14667a05e body=29 status=ok
// SIG undefined FUN_14667a05e(void)

undefined8 FUN_14667a05e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a07c FUN_14667a07c body=29 status=ok
// SIG undefined FUN_14667a07c(void)

undefined8 FUN_14667a07c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a09a FUN_14667a09a body=29 status=ok
// SIG undefined FUN_14667a09a(void)

undefined8 FUN_14667a09a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a0b8 FUN_14667a0b8 body=29 status=ok
// SIG undefined FUN_14667a0b8(void)

undefined8 FUN_14667a0b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a0d6 FUN_14667a0d6 body=29 status=ok
// SIG undefined FUN_14667a0d6(void)

undefined8 FUN_14667a0d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a0f4 FUN_14667a0f4 body=29 status=ok
// SIG undefined FUN_14667a0f4(void)

undefined8 FUN_14667a0f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a112 FUN_14667a112 body=29 status=ok
// SIG undefined FUN_14667a112(void)

undefined8 FUN_14667a112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a130 FUN_14667a130 body=29 status=ok
// SIG undefined FUN_14667a130(void)

undefined8 FUN_14667a130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a14e FUN_14667a14e body=29 status=ok
// SIG undefined FUN_14667a14e(void)

undefined8 FUN_14667a14e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a16c FUN_14667a16c body=29 status=ok
// SIG undefined FUN_14667a16c(void)

undefined8 FUN_14667a16c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a18a FUN_14667a18a body=29 status=ok
// SIG undefined FUN_14667a18a(void)

undefined8 FUN_14667a18a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a1a8 FUN_14667a1a8 body=29 status=ok
// SIG undefined FUN_14667a1a8(void)

undefined8 FUN_14667a1a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a1c6 FUN_14667a1c6 body=29 status=ok
// SIG undefined FUN_14667a1c6(void)

undefined8 FUN_14667a1c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667a1e3 FUN_14667a1e3 body=49 status=ok
// SIG undefined FUN_14667a1e3(void)

longlong FUN_14667a1e3(void)

{
  if (DAT_14cbf7cb8 == 0) {
    FUN_14073dd9a(&DAT_14cbf7cb8,&PTR_LAB_14ba9c0a0);
  }
  return DAT_14cbf7cb8;
}



// FUNCTION 14667a214 FUN_14667a214 body=47 status=ok
// SIG undefined FUN_14667a214(void)

longlong FUN_14667a214(void)

{
  if (DAT_14cbf7c88 == 0) {
    FUN_14000fc22(&DAT_14cbf7c88,&PTR_FUN_14ba9b778);
  }
  return DAT_14cbf7c88;
}



// FUNCTION 14667a243 FUN_14667a243 body=47 status=ok
// SIG undefined FUN_14667a243(void)

longlong FUN_14667a243(void)

{
  if (DAT_14cbf7c90 == 0) {
    FUN_14000fc22(&DAT_14cbf7c90,&PTR_FUN_14ba9b9e8);
  }
  return DAT_14cbf7c90;
}



// FUNCTION 14667a272 FUN_14667a272 body=47 status=ok
// SIG undefined FUN_14667a272(void)

longlong FUN_14667a272(void)

{
  if (DAT_14cbf7c98 == 0) {
    FUN_14000fc22(&DAT_14cbf7c98,&PTR_FUN_14ba9bc20);
  }
  return DAT_14cbf7c98;
}



// FUNCTION 14667a2a1 FUN_14667a2a1 body=47 status=ok
// SIG undefined FUN_14667a2a1(void)

longlong FUN_14667a2a1(void)

{
  if (DAT_14cbf7ca0 == 0) {
    FUN_14000fc22(&DAT_14cbf7ca0,&PTR_FUN_14ba9be80);
  }
  return DAT_14cbf7ca0;
}



// FUNCTION 14667a2d0 FUN_14667a2d0 body=47 status=ok
// SIG undefined FUN_14667a2d0(void)

longlong FUN_14667a2d0(void)

{
  if (DAT_14cbf7ca8 == 0) {
    FUN_14000fc22(&DAT_14cbf7ca8,&PTR_FUN_14ba9bf70);
  }
  return DAT_14cbf7ca8;
}



// FUNCTION 14667a300 FUN_14667a300 body=34 status=ok
// SIG undefined FUN_14667a300(void)

void FUN_14667a300(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a91f7c();
  FUN_14069c8d6(uVar1,&PTR_s_CreateNewGeometryCacheGroomBindi_14ba9bfb0,5);
  return;
}



// FUNCTION 14667a322 FUN_14667a322 body=35 status=ok
// SIG undefined FUN_14667a322(void)

void FUN_14667a322(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba9c0e0;
  return;
}



// FUNCTION 14667a353 FUN_14667a353 body=91 status=ok
// SIG undefined FUN_14667a353(void)

void FUN_14667a353(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba9cb20;
  puVar1[5] = &PTR_FUN_14ba9cdc0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4d) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0x8000007f7fffff;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x800000007fffffff;
  *(undefined1 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 14667a3b3 FUN_14667a3b3 body=47 status=ok
// SIG undefined FUN_14667a3b3(void)

longlong FUN_14667a3b3(void)

{
  if (DAT_14cbf7f10 == 0) {
    FUN_14086a14e(&DAT_14cbf7f10,&PTR_FUN_14ba9d4a0);
  }
  return DAT_14cbf7f10;
}



// FUNCTION 14667a3e2 FUN_14667a3e2 body=47 status=ok
// SIG undefined FUN_14667a3e2(void)

longlong FUN_14667a3e2(void)

{
  if (DAT_14cbf7e88 == 0) {
    FUN_14073dd9a(&DAT_14cbf7e88,&PTR_LAB_14ba9cad8);
  }
  return DAT_14cbf7e88;
}



// FUNCTION 14667a411 FUN_14667a411 body=47 status=ok
// SIG undefined FUN_14667a411(void)

longlong FUN_14667a411(void)

{
  if (DAT_14cbf7e98 == 0) {
    FUN_1409ce572(&DAT_14cbf7e98,&PTR_FUN_14ba9cec0);
  }
  return DAT_14cbf7e98;
}



// FUNCTION 14667a440 FUN_14667a440 body=55 status=ok
// SIG undefined FUN_14667a440(void)

void FUN_14667a440(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7eb8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7eb8 = FUN_140002ddd(FUN_14667a477,uVar1,L"GroomAnimationInfo");
  }
  return;
}



// FUNCTION 14667a477 FUN_14667a477 body=47 status=ok
// SIG undefined FUN_14667a477(void)

longlong FUN_14667a477(void)

{
  if (DAT_14cbf7eb0 == 0) {
    FUN_14086a14e(&DAT_14cbf7eb0,&PTR_FUN_14ba9d190);
  }
  return DAT_14cbf7eb0;
}



// FUNCTION 14667a4a6 FUN_14667a4a6 body=48 status=ok
// SIG undefined FUN_14667a4a6(void)

void FUN_14667a4a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14baa2200;
  return;
}



// FUNCTION 14667a4d6 FUN_14667a4d6 body=47 status=ok
// SIG undefined FUN_14667a4d6(void)

longlong FUN_14667a4d6(void)

{
  if (DAT_14cbf7ec8 == 0) {
    FUN_1409ce572(&DAT_14cbf7ec8,&PTR_FUN_14ba9d210);
  }
  return DAT_14cbf7ec8;
}



// FUNCTION 14667a505 FUN_14667a505 body=47 status=ok
// SIG undefined FUN_14667a505(void)

longlong FUN_14667a505(void)

{
  if (DAT_14cbf7ee0 == 0) {
    FUN_1409ce572(&DAT_14cbf7ee0,&PTR_FUN_14ba9d2b0);
  }
  return DAT_14cbf7ee0;
}



// FUNCTION 14667a534 FUN_14667a534 body=47 status=ok
// SIG undefined FUN_14667a534(void)

longlong FUN_14667a534(void)

{
  if (DAT_14cbf7ef8 == 0) {
    FUN_1409ce572(&DAT_14cbf7ef8,&PTR_FUN_14ba9d320);
  }
  return DAT_14cbf7ef8;
}



// FUNCTION 14667a564 FUN_14667a564 body=55 status=ok
// SIG undefined FUN_14667a564(void)

void FUN_14667a564(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7f18 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7f18 = FUN_140002ddd(FUN_14667a3b3,uVar1,L"GroomCacheInfo");
  }
  return;
}



// FUNCTION 14667a59c FUN_14667a59c body=48 status=ok
// SIG undefined FUN_14667a59c(void)

void FUN_14667a59c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000028;
  *puVar1 = &PTR_FUN_14baa2510;
  return;
}



// FUNCTION 14667a5cc FUN_14667a5cc body=49 status=ok
// SIG undefined FUN_14667a5cc(void)

longlong FUN_14667a5cc(void)

{
  if (DAT_14cbf80d8 == 0) {
    FUN_14073dd9a(&DAT_14cbf80d8,&PTR_LAB_14ba9e750);
  }
  return DAT_14cbf80d8;
}



// FUNCTION 14667a5fd FUN_14667a5fd body=47 status=ok
// SIG undefined FUN_14667a5fd(void)

longlong FUN_14667a5fd(void)

{
  if (DAT_14cbf8068 == 0) {
    FUN_14000fc22(&DAT_14cbf8068,&PTR_FUN_14ba9d610);
  }
  return DAT_14cbf8068;
}



// FUNCTION 14667a62c FUN_14667a62c body=47 status=ok
// SIG undefined FUN_14667a62c(void)

longlong FUN_14667a62c(void)

{
  if (DAT_14cbf8070 == 0) {
    FUN_14000fc22(&DAT_14cbf8070,&PTR_FUN_14ba9d6b8);
  }
  return DAT_14cbf8070;
}



// FUNCTION 14667a65b FUN_14667a65b body=47 status=ok
// SIG undefined FUN_14667a65b(void)

longlong FUN_14667a65b(void)

{
  if (DAT_14cbf8078 == 0) {
    FUN_14000fc22(&DAT_14cbf8078,&PTR_FUN_14ba9d780);
  }
  return DAT_14cbf8078;
}



// FUNCTION 14667a68a FUN_14667a68a body=47 status=ok
// SIG undefined FUN_14667a68a(void)

longlong FUN_14667a68a(void)

{
  if (DAT_14cbf8080 == 0) {
    FUN_14000fc22(&DAT_14cbf8080,&PTR_FUN_14ba9d7e0);
  }
  return DAT_14cbf8080;
}



// FUNCTION 14667a6b9 FUN_14667a6b9 body=47 status=ok
// SIG undefined FUN_14667a6b9(void)

longlong FUN_14667a6b9(void)

{
  if (DAT_14cbf8088 == 0) {
    FUN_14000fc22(&DAT_14cbf8088,&PTR_FUN_14ba9d830);
  }
  return DAT_14cbf8088;
}



// FUNCTION 14667a6e8 FUN_14667a6e8 body=47 status=ok
// SIG undefined FUN_14667a6e8(void)

longlong FUN_14667a6e8(void)

{
  if (DAT_14cbf8090 == 0) {
    FUN_14000fc22(&DAT_14cbf8090,&PTR_FUN_14ba9d8c8);
  }
  return DAT_14cbf8090;
}



// FUNCTION 14667a717 FUN_14667a717 body=47 status=ok
// SIG undefined FUN_14667a717(void)

longlong FUN_14667a717(void)

{
  if (DAT_14cbf8098 == 0) {
    FUN_14000fc22(&DAT_14cbf8098,&PTR_FUN_14ba9d980);
  }
  return DAT_14cbf8098;
}



// FUNCTION 14667a746 FUN_14667a746 body=47 status=ok
// SIG undefined FUN_14667a746(void)

longlong FUN_14667a746(void)

{
  if (DAT_14cbf80a0 == 0) {
    FUN_14000fc22(&DAT_14cbf80a0,&PTR_FUN_14ba9da18);
  }
  return DAT_14cbf80a0;
}



// FUNCTION 14667a775 FUN_14667a775 body=47 status=ok
// SIG undefined FUN_14667a775(void)

longlong FUN_14667a775(void)

{
  if (DAT_14cbf80a8 == 0) {
    FUN_14000fc22(&DAT_14cbf80a8,&PTR_FUN_14ba9dac0);
  }
  return DAT_14cbf80a8;
}



// FUNCTION 14667a7a4 FUN_14667a7a4 body=47 status=ok
// SIG undefined FUN_14667a7a4(void)

longlong FUN_14667a7a4(void)

{
  if (DAT_14cbf80b0 == 0) {
    FUN_14000fc22(&DAT_14cbf80b0,&PTR_FUN_14ba9db58);
  }
  return DAT_14cbf80b0;
}



// FUNCTION 14667a7d3 FUN_14667a7d3 body=47 status=ok
// SIG undefined FUN_14667a7d3(void)

longlong FUN_14667a7d3(void)

{
  if (DAT_14cbf80b8 == 0) {
    FUN_14000fc22(&DAT_14cbf80b8,&PTR_FUN_14ba9dc00);
  }
  return DAT_14cbf80b8;
}



// FUNCTION 14667a802 FUN_14667a802 body=47 status=ok
// SIG undefined FUN_14667a802(void)

longlong FUN_14667a802(void)

{
  if (DAT_14cbf80c0 == 0) {
    FUN_14000fc22(&DAT_14cbf80c0,&PTR_FUN_14ba9dc88);
  }
  return DAT_14cbf80c0;
}



// FUNCTION 14667a831 FUN_14667a831 body=47 status=ok
// SIG undefined FUN_14667a831(void)

longlong FUN_14667a831(void)

{
  if (DAT_14cbf80c8 == 0) {
    FUN_14000fc22(&DAT_14cbf80c8,&PTR_FUN_14ba9dd20);
  }
  return DAT_14cbf80c8;
}



// FUNCTION 14667a860 FUN_14667a860 body=34 status=ok
// SIG undefined FUN_14667a860(void)

void FUN_14667a860(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14586a468();
  FUN_14069c8d6(uVar1,&PTR_s_AddCollisionComponent_14ba9dd60,0xd);
  return;
}



// FUNCTION 14667a88d FUN_14667a88d body=66 status=ok
// SIG undefined FUN_14667a88d(void)

void FUN_14667a88d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baa0460;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 100;
  return;
}



// FUNCTION 14667a8cf FUN_14667a8cf body=47 status=ok
// SIG undefined FUN_14667a8cf(void)

longlong FUN_14667a8cf(void)

{
  if (DAT_14cbf82a0 == 0) {
    FUN_14073dd9a(&DAT_14cbf82a0,&PTR_LAB_14baa0418);
  }
  return DAT_14cbf82a0;
}



// FUNCTION 14667a8fe FUN_14667a8fe body=47 status=ok
// SIG undefined FUN_14667a8fe(void)

longlong FUN_14667a8fe(void)

{
  if (DAT_14cbf82b0 == 0) {
    FUN_1409ce572(&DAT_14cbf82b0,&PTR_FUN_14baa0780);
  }
  return DAT_14cbf82b0;
}



// FUNCTION 14667a92e FUN_14667a92e body=55 status=ok
// SIG undefined FUN_14667a92e(void)

void FUN_14667a92e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf82d0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf82d0 = FUN_140002ddd(FUN_14667a965,uVar1,L"FollicleMaskOptions");
  }
  return;
}



// FUNCTION 14667a965 FUN_14667a965 body=47 status=ok
// SIG undefined FUN_14667a965(void)

longlong FUN_14667a965(void)

{
  if (DAT_14cbf82c8 == 0) {
    FUN_14086a14e(&DAT_14cbf82c8,&PTR_FUN_14baa08d0);
  }
  return DAT_14cbf82c8;
}



// FUNCTION 14667a994 FUN_14667a994 body=48 status=ok
// SIG undefined FUN_14667a994(void)

void FUN_14667a994(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14baa2b20;
  return;
}



// FUNCTION 14667a9c4 FUN_14667a9c4 body=56 status=ok
// SIG undefined FUN_14667a9c4(void)

void FUN_14667a9c4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baa0ad0;
  puVar1[5] = 0x800001000;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14667a9fc FUN_14667a9fc body=47 status=ok
// SIG undefined FUN_14667a9fc(void)

longlong FUN_14667a9fc(void)

{
  if (DAT_14cbf82e8 == 0) {
    FUN_14073dd9a(&DAT_14cbf82e8,&PTR_LAB_14baa0a88);
  }
  return DAT_14cbf82e8;
}



// FUNCTION 14667aa2b FUN_14667aa2b body=47 status=ok
// SIG undefined FUN_14667aa2b(void)

longlong FUN_14667aa2b(void)

{
  if (DAT_14cbf82f8 == 0) {
    FUN_1409ce572(&DAT_14cbf82f8,&PTR_FUN_14baa0e40);
  }
  return DAT_14cbf82f8;
}



// FUNCTION 14667aa5a FUN_14667aa5a body=47 status=ok
// SIG undefined FUN_14667aa5a(void)

longlong FUN_14667aa5a(void)

{
  if (DAT_14cbf8310 == 0) {
    FUN_1409ce572(&DAT_14cbf8310,&PTR_FUN_14baa0eb0);
  }
  return DAT_14cbf8310;
}



// FUNCTION 14667aa89 FUN_14667aa89 body=83 status=ok
// SIG undefined FUN_14667aa89(void)

void FUN_14667aa89(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baa13e0;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x800;
  *(undefined1 *)(puVar1 + 6) = 2;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x40400000;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 8;
  return;
}



// FUNCTION 14667aae1 FUN_14667aae1 body=47 status=ok
// SIG undefined FUN_14667aae1(void)

longlong FUN_14667aae1(void)

{
  if (DAT_14cbf8330 == 0) {
    FUN_14073dd9a(&DAT_14cbf8330,&PTR_LAB_14baa1398);
  }
  return DAT_14cbf8330;
}



// FUNCTION 14667ab10 FUN_14667ab10 body=72 status=ok
// SIG undefined FUN_14667ab10(void)

undefined8 FUN_14667ab10(ushort *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140919df9(4,*param_1);
  if ((cVar1 == '\0') ||
     ((lVar2 = (ulonglong)*param_1 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar2) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 3) & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14667ab58 FUN_14667ab58 body=76 status=ok
// SIG undefined FUN_14667ab58(void)

undefined8 FUN_14667ab58(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_140919df9(0,*param_1);
  if (cVar1 != '\0') {
    if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)*param_1 * 0x3c) == DAT_14ca80038) &&
       ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 3) & 1) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 14667aba4 FUN_14667aba4 body=72 status=ok
// SIG undefined FUN_14667aba4(void)

undefined8 FUN_14667aba4(ushort *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140919df9(1,*param_1);
  if ((cVar1 == '\0') ||
     ((lVar2 = (ulonglong)*param_1 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar2) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 3) & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14667abf6 FUN_14667abf6 body=72 status=ok
// SIG undefined FUN_14667abf6(void)

undefined8 FUN_14667abf6(ushort *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140919df9(1,*param_1);
  if ((cVar1 == '\0') ||
     ((lVar2 = (ulonglong)*param_1 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar2) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 3) & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14667ac3e FUN_14667ac3e body=72 status=ok
// SIG undefined FUN_14667ac3e(void)

undefined8 FUN_14667ac3e(ushort *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140919df9(4,*param_1);
  if ((cVar1 == '\0') ||
     ((lVar2 = (ulonglong)*param_1 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar2) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 3) & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14667ac86 FUN_14667ac86 body=72 status=ok
// SIG undefined FUN_14667ac86(void)

undefined8 FUN_14667ac86(ushort *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140919df9(4,*param_1);
  if ((cVar1 == '\0') ||
     ((lVar2 = (ulonglong)*param_1 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar2) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 3) & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14667acce FUN_14667acce body=40 status=ok
// SIG undefined FUN_14667acce(void)

undefined8 FUN_14667acce(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667acf6 FUN_14667acf6 body=40 status=ok
// SIG undefined FUN_14667acf6(void)

undefined8 FUN_14667acf6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ad1e FUN_14667ad1e body=69 status=ok
// SIG undefined FUN_14667ad1e(void)

undefined8 * FUN_14667ad1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baa0ad0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ad64 FUN_14667ad64 body=69 status=ok
// SIG undefined FUN_14667ad64(void)

undefined8 * FUN_14667ad64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baa13e0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667adaa FUN_14667adaa body=136 status=ok
// SIG undefined FUN_14667adaa(void)

code * FUN_14667adaa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPositions";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000f21;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2020e;
}



// FUNCTION 14667ae32 FUN_14667ae32 body=29 status=ok
// SIG undefined FUN_14667ae32(void)

undefined8 FUN_14667ae32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ae50 FUN_14667ae50 body=29 status=ok
// SIG undefined FUN_14667ae50(void)

undefined8 FUN_14667ae50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ae6e FUN_14667ae6e body=29 status=ok
// SIG undefined FUN_14667ae6e(void)

undefined8 FUN_14667ae6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ae8c FUN_14667ae8c body=142 status=ok
// SIG undefined FUN_14667ae8c(void)

code * FUN_14667ae8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd00000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14667af1a;
}



// FUNCTION 14667af1a FUN_14667af1a body=144 status=ok
// SIG undefined FUN_14667af1a(void)

code * FUN_14667af1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc00000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149085962;
}



// FUNCTION 14667afaa FUN_14667afaa body=136 status=ok
// SIG undefined FUN_14667afaa(void)

code * FUN_14667afaa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeformedSamplePositionsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149085a76;
}



// FUNCTION 14667b032 FUN_14667b032 body=142 status=ok
// SIG undefined FUN_14667b032(void)

code * FUN_14667b032(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149086428;
}



// FUNCTION 14667b0c0 FUN_14667b0c0 body=136 status=ok
// SIG undefined FUN_14667b0c0(void)

code * FUN_14667b0c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000113;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9d0e8;
}



// FUNCTION 14667b148 FUN_14667b148 body=138 status=ok
// SIG undefined FUN_14667b148(void)

undefined1 * FUN_14667b148(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9d0e4;
}



// FUNCTION 14667b1d2 FUN_14667b1d2 body=142 status=ok
// SIG undefined FUN_14667b1d2(void)

code * FUN_14667b1d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000177;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e79fb8;
}



// FUNCTION 14667b260 FUN_14667b260 body=138 status=ok
// SIG undefined FUN_14667b260(void)

undefined1 * FUN_14667b260(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x170;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e79f2c;
}



// FUNCTION 14667b2ea FUN_14667b2ea body=142 status=ok
// SIG undefined FUN_14667b2ea(void)

code * FUN_14667b2ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa0000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e07788;
}



// FUNCTION 14667b378 FUN_14667b378 body=138 status=ok
// SIG undefined FUN_14667b378(void)

undefined1 * FUN_14667b378(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e076fc;
}



// FUNCTION 14667b402 FUN_14667b402 body=142 status=ok
// SIG undefined FUN_14667b402(void)

code * FUN_14667b402(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd00000022b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f5e5ee;
}



// FUNCTION 14667b490 FUN_14667b490 body=136 status=ok
// SIG undefined FUN_14667b490(void)

code * FUN_14667b490(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenRestPosition";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000225;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086d52;
}



// FUNCTION 14667b518 FUN_14667b518 body=138 status=ok
// SIG undefined FUN_14667b518(void)

undefined1 * FUN_14667b518(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x217;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14908722c;
}



// FUNCTION 14667b5a2 FUN_14667b5a2 body=142 status=ok
// SIG undefined FUN_14667b5a2(void)

code * FUN_14667b5a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x80000002eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149087230;
}



// FUNCTION 14667b630 FUN_14667b630 body=142 status=ok
// SIG undefined FUN_14667b630(void)

code * FUN_14667b630(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c5dd1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceNames";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FStrings::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000002e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149087348;
}



// FUNCTION 14667b6be FUN_14667b6be body=136 status=ok
// SIG undefined FUN_14667b6be(void)

code * FUN_14667b6be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CharBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint8>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c5e01a;
}



// FUNCTION 14667b746 FUN_14667b746 body=142 status=ok
// SIG undefined FUN_14667b746(void)

code * FUN_14667b746(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x90000003df;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14908756e;
}



// FUNCTION 14667b7d4 FUN_14667b7d4 body=144 status=ok
// SIG undefined FUN_14667b7d4(void)

code * FUN_14667b7d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c5dd1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"GroomNames";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FStrings::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000003da;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14667b864;
}



// FUNCTION 14667b864 FUN_14667b864 body=144 status=ok
// SIG undefined FUN_14667b864(void)

code * FUN_14667b864(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c5dd1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ComponentNames";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FStrings::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000003d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149087682;
}



// FUNCTION 14667b8f4 FUN_14667b8f4 body=86 status=ok
// SIG undefined FUN_14667b8f4(void)

void FUN_14667b8f4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baa3ed0;
  uVar2 = DAT_14c8464e8;
  puVar1[5] = DAT_14c8464e0;
  puVar1[6] = uVar2;
  puVar1[7] = DAT_14c8464f0;
  puVar1[8] = 0x3ff0000000000000;
  puVar1[9] = 0x3ff0000000000000;
  puVar1[10] = 0x3ff0000000000000;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 14667b94f FUN_14667b94f body=49 status=ok
// SIG undefined FUN_14667b94f(void)

longlong FUN_14667b94f(void)

{
  if (DAT_14cbf9728 == 0) {
    FUN_14086a14e(&DAT_14cbf9728,&PTR_FUN_14baa8ca8);
  }
  return DAT_14cbf9728;
}



// FUNCTION 14667b980 FUN_14667b980 body=47 status=ok
// SIG undefined FUN_14667b980(void)

longlong FUN_14667b980(void)

{
  if (DAT_14cbf9308 == 0) {
    FUN_14073dd9a(&DAT_14cbf9308,&PTR_LAB_14baa3e88);
  }
  return DAT_14cbf9308;
}



// FUNCTION 14667b9b0 FUN_14667b9b0 body=55 status=ok
// SIG undefined FUN_14667b9b0(void)

void FUN_14667b9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf9320 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf9320 = FUN_140002ddd(FUN_14667b9e7,uVar1,L"GroomHairGroupPreview");
  }
  return;
}



// FUNCTION 14667b9e7 FUN_14667b9e7 body=47 status=ok
// SIG undefined FUN_14667b9e7(void)

longlong FUN_14667b9e7(void)

{
  if (DAT_14cbf9318 == 0) {
    FUN_14086a14e(&DAT_14cbf9318,&PTR_FUN_14baa43f8);
  }
  return DAT_14cbf9318;
}



// FUNCTION 14667ba16 FUN_14667ba16 body=48 status=ok
// SIG undefined FUN_14667ba16(void)

void FUN_14667ba16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000048;
  *puVar1 = &PTR_FUN_14baa93f0;
  return;
}



// FUNCTION 14667ba46 FUN_14667ba46 body=42 status=ok
// SIG undefined FUN_14667ba46(void)

void FUN_14667ba46(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baa4550;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14667ba70 FUN_14667ba70 body=47 status=ok
// SIG undefined FUN_14667ba70(void)

longlong FUN_14667ba70(void)

{
  if (DAT_14cbf9338 == 0) {
    FUN_14073dd9a(&DAT_14cbf9338,&PTR_LAB_14baa4508);
  }
  return DAT_14cbf9338;
}



// FUNCTION 14667baa0 FUN_14667baa0 body=72 status=ok
// SIG undefined FUN_14667baa0(void)

undefined8 FUN_14667baa0(ushort *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140919df9(4,*param_1);
  if ((cVar1 == '\0') ||
     ((lVar2 = (ulonglong)*param_1 * 0x3c, *(longlong *)(&DAT_14ca814b0 + lVar2) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + lVar2 + 3) & 1) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14667bae8 FUN_14667bae8 body=39 status=ok
// SIG undefined FUN_14667bae8(void)

void FUN_14667bae8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14baa5140;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  return;
}


