// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463bb20c FUN_1463bb20c body=47 status=ok
// SIG undefined FUN_1463bb20c(void)

longlong FUN_1463bb20c(void)

{
  if (DAT_14cad2248 == 0) {
    FUN_14000fc22(&DAT_14cad2248,&PTR_FUN_14a868178);
  }
  return DAT_14cad2248;
}



// FUNCTION 1463bb23b FUN_1463bb23b body=47 status=ok
// SIG undefined FUN_1463bb23b(void)

longlong FUN_1463bb23b(void)

{
  if (DAT_14cad2250 == 0) {
    FUN_14000fc22(&DAT_14cad2250,&PTR_FUN_14a868268);
  }
  return DAT_14cad2250;
}



// FUNCTION 1463bb26a FUN_1463bb26a body=47 status=ok
// SIG undefined FUN_1463bb26a(void)

longlong FUN_1463bb26a(void)

{
  if (DAT_14cad2258 == 0) {
    FUN_14000fc22(&DAT_14cad2258,&PTR_FUN_14a868308);
  }
  return DAT_14cad2258;
}



// FUNCTION 1463bb29a FUN_1463bb29a body=34 status=ok
// SIG undefined FUN_1463bb29a(void)

void FUN_1463bb29a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140de3fe6();
  FUN_14069c8d6(uVar1,&PTR_s_ClearHiddenComponents_14a868350,0xb);
  return;
}



// FUNCTION 1463bb2c8 FUN_1463bb2c8 body=626 status=ok
// SIG undefined FUN_1463bb2c8(void)

void FUN_1463bb2c8(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  uVar14 = *(undefined4 *)(param_1 + 0x264);
  uVar15 = *(undefined4 *)(param_1 + 0x268);
  uVar4 = *(undefined4 *)(param_1 + 0x26c);
  dVar1 = *(double *)(param_1 + 0x270);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)((longlong)param_3 + 4) = uVar14;
  *(undefined4 *)(param_3 + 1) = uVar15;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  param_3[2] = dVar1;
  dVar1 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar7 = *(double *)(param_1 + 600);
  pdVar10 = *(double **)(param_1 + 0x228);
  lVar12 = param_1;
  local_88 = dVar1;
  uStack_80 = dVar5;
  local_78 = dVar6;
  uStack_70 = dVar7;
  local_50 = dVar9;
  if (pdVar10 == (double *)0x0) {
    lVar12 = 0x40;
    pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
    dVar9 = DAT_14c8463d8;
    *pdVar10 = DAT_14c8463d0;
    pdVar10[1] = dVar9;
    dVar9 = DAT_14c8463e8;
    pdVar10[2] = DAT_14c8463e0;
    pdVar10[3] = dVar9;
    dVar9 = DAT_14c846500;
    pdVar10[4] = DAT_14c8464f8;
    pdVar10[5] = dVar9;
    dVar9 = DAT_14c846508;
    pdVar10[6] = DAT_14c846508;
    *(double **)(param_1 + 0x228) = pdVar10;
  }
  auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
  auVar2._0_8_ = -(ulonglong)(dVar1 != *pdVar10);
  auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
  iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
  auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
  auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
  auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
  uVar11 = movmskpd((int)lVar12,auVar3);
  if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
    *(undefined4 *)(pdVar10 + 2) = (undefined4)local_78;
    *(undefined4 *)((longlong)pdVar10 + 0x14) = local_78._4_4_;
    *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_70._4_4_;
    *(undefined4 *)pdVar10 = (undefined4)local_88;
    *(undefined4 *)((longlong)pdVar10 + 4) = local_88._4_4_;
    *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_80._4_4_;
    FUN_1448052ee(&local_88,&local_68);
    pdVar10[6] = local_58;
    pdVar10[4] = local_68;
    pdVar10[5] = dStack_60;
  }
  dVar1 = pdVar10[4];
  dVar5 = pdVar10[5];
  param_3[5] = pdVar10[6];
  param_3[3] = dVar1;
  param_3[4] = dVar5;
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 0x38c);
  lVar12 = *(longlong *)(param_1 + 0x3a8);
  if (lVar12 == 0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = (float)*(int *)(lVar12 + 0x140) / (float)*(int *)(lVar12 + 0x144);
  }
  *(float *)((longlong)param_3 + 0x94) = fVar13;
  *(byte *)(param_3 + 0x14) = *(byte *)(param_3 + 0x14) & 0xfb;
  *(undefined1 *)((longlong)param_3 + 0xa4) = *(undefined1 *)(param_1 + 0x388);
  *(undefined4 *)(param_3 + 0xf) = *(undefined4 *)(param_1 + 0x390);
  *(undefined1 *)((longlong)param_3 + 0x7c) = *(undefined1 *)(param_1 + 0x394);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x398);
  *(undefined1 *)((longlong)param_3 + 0x84) = *(undefined1 *)(param_1 + 0x39c);
  *(undefined1 *)((longlong)param_3 + 0x85) = *(undefined1 *)(param_1 + 0x39d);
  FUN_1407e3ca0(param_3,*(undefined4 *)(param_1 + 0x3a0),0,0);
  if ((*(char *)(param_1 + 0x394) == '\x01') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
    if (lVar12 == 0) {
      pdVar10 = (double *)&DAT_14c8464e0;
      uVar14 = (undefined4)DAT_14c8464f0;
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar14 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
      pdVar10 = (double *)(lVar12 + 0x260);
    }
    dVar1 = pdVar10[1];
    param_3[0x142] = *pdVar10 - *param_3;
    param_3[0x143] = dVar1 - param_3[1];
    param_3[0x144] = (double)CONCAT44(uVar15,uVar14) - param_3[2];
  }
  if (((ulonglong)local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463bb53c FUN_1463bb53c body=415 status=ok
// SIG undefined FUN_1463bb53c(void)

void FUN_1463bb53c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [8];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[0x16];
  if ((((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
      (*(longlong *)(lVar4 + 0x218) != 0)) &&
     ((cVar3 = (**(code **)(*param_1 + 0x4e8))(param_1), cVar3 != '\0' &&
      (cVar3 = FUN_140c70d96(param_1), cVar3 == '\0')))) {
    *(byte *)((longlong)param_1 + 0x2aa) = *(byte *)((longlong)param_1 + 0x2aa) & 0xef;
    FUN_14083337a(lVar4);
    (**(code **)(*param_1 + 0x5f0))(param_1,*(undefined8 *)(lVar4 + 0x218));
  }
  if ((*(byte *)((longlong)param_1 + 0x2aa) & 1) != 0) {
    FUN_1446ddc76(local_80,"Blueprint",1);
    FUN_14276766e(local_78,local_80);
    local_38 = L"CaptureScene";
    local_30 = 0xc;
    FUN_1446e940c(local_84,&local_38);
    local_38 = L"SceneCaptureComponent";
    local_30 = 0x15;
    FUN_1446e940c(local_88,&local_38);
    FUN_140208bae(&local_38,local_88,local_84,
                  L"CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency."
                 );
    FUN_1427679d4(local_78,local_48,&local_38);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    FUN_1427678c0(local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1463bb6ee FUN_1463bb6ee body=54 status=ok
// SIG undefined FUN_1463bb6ee(void)

void FUN_1463bb6ee(longlong param_1)

{
  undefined8 *puVar1;
  
  switchD_143c3d4dc::caseD_1f();
  puVar1 = *(undefined8 **)(param_1 + 0x3d0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  return;
}



// FUNCTION 1463bb724 FUN_1463bb724 body=91 status=ok
// SIG undefined FUN_1463bb724(void)

void FUN_1463bb724(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x370);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x368) + lVar3 * 8) + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x370);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_144a7958c(param_1,param_2);
  return;
}



// FUNCTION 1463bb77f FUN_1463bb77f body=49 status=ok
// SIG undefined FUN_1463bb77f(void)

longlong FUN_1463bb77f(void)

{
  if (DAT_14cad2408 == 0) {
    FUN_14073dd9a(&DAT_14cad2408,&PTR_LAB_14a86a7d0);
  }
  return DAT_14cad2408;
}



// FUNCTION 1463bb7b0 FUN_1463bb7b0 body=47 status=ok
// SIG undefined FUN_1463bb7b0(void)

longlong FUN_1463bb7b0(void)

{
  if (DAT_14cad23f8 == 0) {
    FUN_14000fc22(&DAT_14cad23f8,&PTR_FUN_14a86a438);
  }
  return DAT_14cad23f8;
}



// FUNCTION 1463bb7e0 FUN_1463bb7e0 body=34 status=ok
// SIG undefined FUN_1463bb7e0(void)

void FUN_1463bb7e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e2e6d8();
  FUN_14069c8d6(uVar1,&PTR_s_SetLineThickness_14a86a480,1);
  return;
}



// FUNCTION 1463bb812 FUN_1463bb812 body=47 status=ok
// SIG undefined FUN_1463bb812(void)

longlong FUN_1463bb812(void)

{
  if (DAT_14cad2440 == 0) {
    FUN_14000fc22(&DAT_14cad2440,&PTR_FUN_14a86b3e8);
  }
  return DAT_14cad2440;
}



// FUNCTION 1463bb841 FUN_1463bb841 body=47 status=ok
// SIG undefined FUN_1463bb841(void)

longlong FUN_1463bb841(void)

{
  if (DAT_14cad2448 == 0) {
    FUN_14000fc22(&DAT_14cad2448,&PTR_FUN_14a86b458);
  }
  return DAT_14cad2448;
}



// FUNCTION 1463bb870 FUN_1463bb870 body=49 status=ok
// SIG undefined FUN_1463bb870(void)

longlong FUN_1463bb870(void)

{
  if (DAT_14cad2450 == 0) {
    FUN_1409ce572(&DAT_14cad2450,&PTR_FUN_14a86b4f0);
  }
  return DAT_14cad2450;
}



// FUNCTION 1463bb8a1 FUN_1463bb8a1 body=47 status=ok
// SIG undefined FUN_1463bb8a1(void)

longlong FUN_1463bb8a1(void)

{
  if (DAT_14cad2468 == 0) {
    FUN_1409ce572(&DAT_14cad2468,&PTR_FUN_14a86b590);
  }
  return DAT_14cad2468;
}



// FUNCTION 1463bb8d0 FUN_1463bb8d0 body=49 status=ok
// SIG undefined FUN_1463bb8d0(void)

longlong FUN_1463bb8d0(void)

{
  if (DAT_14cad2480 == 0) {
    FUN_1409ce572(&DAT_14cad2480,&PTR_FUN_14a86b620);
  }
  return DAT_14cad2480;
}



// FUNCTION 1463bb901 FUN_1463bb901 body=47 status=ok
// SIG undefined FUN_1463bb901(void)

longlong FUN_1463bb901(void)

{
  if (DAT_14cad2498 == 0) {
    FUN_1409ce572(&DAT_14cad2498,&PTR_FUN_14a86b6b0);
  }
  return DAT_14cad2498;
}



// FUNCTION 1463bb930 FUN_1463bb930 body=55 status=ok
// SIG undefined FUN_1463bb930(void)

void FUN_1463bb930(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad24b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad24b8 =
         FUN_140002ddd(FUN_1463bb967,uVar1,L"SkeletalMeshComponentEndPhysicsTickFunction");
  }
  return;
}



// FUNCTION 1463bb967 FUN_1463bb967 body=47 status=ok
// SIG undefined FUN_1463bb967(void)

longlong FUN_1463bb967(void)

{
  if (DAT_14cad24b0 == 0) {
    FUN_14086a14e(&DAT_14cad24b0,&PTR_FUN_14a86b768);
  }
  return DAT_14cad24b0;
}



// FUNCTION 1463bb996 FUN_1463bb996 body=48 status=ok
// SIG undefined FUN_1463bb996(void)

void FUN_1463bb996(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a878c80;
  return;
}



// FUNCTION 1463bb9c6 FUN_1463bb9c6 body=55 status=ok
// SIG undefined FUN_1463bb9c6(void)

void FUN_1463bb9c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad24d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad24d0 = FUN_140002ddd(FUN_1463bb9fd,uVar1,L"SkeletalMeshComponentClothTickFunction");
  }
  return;
}



// FUNCTION 1463bb9fd FUN_1463bb9fd body=47 status=ok
// SIG undefined FUN_1463bb9fd(void)

longlong FUN_1463bb9fd(void)

{
  if (DAT_14cad24c8 == 0) {
    FUN_14086a14e(&DAT_14cad24c8,&PTR_FUN_14a86b818);
  }
  return DAT_14cad24c8;
}



// FUNCTION 1463bba2c FUN_1463bba2c body=48 status=ok
// SIG undefined FUN_1463bba2c(void)

void FUN_1463bba2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a878de0;
  return;
}



// FUNCTION 1463bba5c FUN_1463bba5c body=47 status=ok
// SIG undefined FUN_1463bba5c(void)

longlong FUN_1463bba5c(void)

{
  if (DAT_14cad24e0 == 0) {
    FUN_14000fc22(&DAT_14cad24e0,&PTR_FUN_14a86b978);
  }
  return DAT_14cad24e0;
}



// FUNCTION 1463bba8b FUN_1463bba8b body=47 status=ok
// SIG undefined FUN_1463bba8b(void)

longlong FUN_1463bba8b(void)

{
  if (DAT_14cad24e8 == 0) {
    FUN_14000fc22(&DAT_14cad24e8,&PTR_FUN_14a86ba98);
  }
  return DAT_14cad24e8;
}



// FUNCTION 1463bbaba FUN_1463bbaba body=47 status=ok
// SIG undefined FUN_1463bbaba(void)

longlong FUN_1463bbaba(void)

{
  if (DAT_14cad24f0 == 0) {
    FUN_14000fc22(&DAT_14cad24f0,&PTR_FUN_14a86bc10);
  }
  return DAT_14cad24f0;
}



// FUNCTION 1463bbae9 FUN_1463bbae9 body=47 status=ok
// SIG undefined FUN_1463bbae9(void)

longlong FUN_1463bbae9(void)

{
  if (DAT_14cad24f8 == 0) {
    FUN_14000fc22(&DAT_14cad24f8,&PTR_FUN_14a86bd90);
  }
  return DAT_14cad24f8;
}



// FUNCTION 1463bbb18 FUN_1463bbb18 body=47 status=ok
// SIG undefined FUN_1463bbb18(void)

longlong FUN_1463bbb18(void)

{
  if (DAT_14cad2500 == 0) {
    FUN_14000fc22(&DAT_14cad2500,&PTR_FUN_14a86be90);
  }
  return DAT_14cad2500;
}



// FUNCTION 1463bbb47 FUN_1463bbb47 body=47 status=ok
// SIG undefined FUN_1463bbb47(void)

longlong FUN_1463bbb47(void)

{
  if (DAT_14cad2508 == 0) {
    FUN_14000fc22(&DAT_14cad2508,&PTR_FUN_14a86bef0);
  }
  return DAT_14cad2508;
}



// FUNCTION 1463bbb76 FUN_1463bbb76 body=47 status=ok
// SIG undefined FUN_1463bbb76(void)

longlong FUN_1463bbb76(void)

{
  if (DAT_14cad2510 == 0) {
    FUN_14000fc22(&DAT_14cad2510,&PTR_FUN_14a86c008);
  }
  return DAT_14cad2510;
}



// FUNCTION 1463bbba5 FUN_1463bbba5 body=47 status=ok
// SIG undefined FUN_1463bbba5(void)

longlong FUN_1463bbba5(void)

{
  if (DAT_14cad2518 == 0) {
    FUN_14000fc22(&DAT_14cad2518,&PTR_FUN_14a86c048);
  }
  return DAT_14cad2518;
}



// FUNCTION 1463bbbd4 FUN_1463bbbd4 body=47 status=ok
// SIG undefined FUN_1463bbbd4(void)

longlong FUN_1463bbbd4(void)

{
  if (DAT_14cad2520 == 0) {
    FUN_14000fc22(&DAT_14cad2520,&PTR_FUN_14a86c128);
  }
  return DAT_14cad2520;
}



// FUNCTION 1463bbc03 FUN_1463bbc03 body=47 status=ok
// SIG undefined FUN_1463bbc03(void)

longlong FUN_1463bbc03(void)

{
  if (DAT_14cad2528 == 0) {
    FUN_14000fc22(&DAT_14cad2528,&PTR_FUN_14a86c188);
  }
  return DAT_14cad2528;
}



// FUNCTION 1463bbc32 FUN_1463bbc32 body=47 status=ok
// SIG undefined FUN_1463bbc32(void)

longlong FUN_1463bbc32(void)

{
  if (DAT_14cad2530 == 0) {
    FUN_14000fc22(&DAT_14cad2530,&PTR_FUN_14a86c1f0);
  }
  return DAT_14cad2530;
}



// FUNCTION 1463bbc61 FUN_1463bbc61 body=47 status=ok
// SIG undefined FUN_1463bbc61(void)

longlong FUN_1463bbc61(void)

{
  if (DAT_14cad2538 == 0) {
    FUN_14000fc22(&DAT_14cad2538,&PTR_FUN_14a86c290);
  }
  return DAT_14cad2538;
}



// FUNCTION 1463bbc90 FUN_1463bbc90 body=47 status=ok
// SIG undefined FUN_1463bbc90(void)

longlong FUN_1463bbc90(void)

{
  if (DAT_14cad2540 == 0) {
    FUN_14000fc22(&DAT_14cad2540,&PTR_FUN_14a86c338);
  }
  return DAT_14cad2540;
}



// FUNCTION 1463bbcbf FUN_1463bbcbf body=47 status=ok
// SIG undefined FUN_1463bbcbf(void)

longlong FUN_1463bbcbf(void)

{
  if (DAT_14cad2548 == 0) {
    FUN_14000fc22(&DAT_14cad2548,&PTR_FUN_14a86c3e0);
  }
  return DAT_14cad2548;
}



// FUNCTION 1463bbcee FUN_1463bbcee body=47 status=ok
// SIG undefined FUN_1463bbcee(void)

longlong FUN_1463bbcee(void)

{
  if (DAT_14cad2550 == 0) {
    FUN_14000fc22(&DAT_14cad2550,&PTR_FUN_14a86c480);
  }
  return DAT_14cad2550;
}



// FUNCTION 1463bbd1d FUN_1463bbd1d body=47 status=ok
// SIG undefined FUN_1463bbd1d(void)

longlong FUN_1463bbd1d(void)

{
  if (DAT_14cad2558 == 0) {
    FUN_14000fc22(&DAT_14cad2558,&PTR_FUN_14a86c520);
  }
  return DAT_14cad2558;
}



// FUNCTION 1463bbd4c FUN_1463bbd4c body=47 status=ok
// SIG undefined FUN_1463bbd4c(void)

longlong FUN_1463bbd4c(void)

{
  if (DAT_14cad2560 == 0) {
    FUN_14000fc22(&DAT_14cad2560,&PTR_FUN_14a86c5a8);
  }
  return DAT_14cad2560;
}



// FUNCTION 1463bbd7b FUN_1463bbd7b body=47 status=ok
// SIG undefined FUN_1463bbd7b(void)

longlong FUN_1463bbd7b(void)

{
  if (DAT_14cad2568 == 0) {
    FUN_14000fc22(&DAT_14cad2568,&PTR_FUN_14a86c688);
  }
  return DAT_14cad2568;
}



// FUNCTION 1463bbdaa FUN_1463bbdaa body=47 status=ok
// SIG undefined FUN_1463bbdaa(void)

longlong FUN_1463bbdaa(void)

{
  if (DAT_14cad2570 == 0) {
    FUN_14000fc22(&DAT_14cad2570,&PTR_FUN_14a86c7b8);
  }
  return DAT_14cad2570;
}



// FUNCTION 1463bbdd9 FUN_1463bbdd9 body=47 status=ok
// SIG undefined FUN_1463bbdd9(void)

longlong FUN_1463bbdd9(void)

{
  if (DAT_14cad2578 == 0) {
    FUN_14000fc22(&DAT_14cad2578,&PTR_FUN_14a86c860);
  }
  return DAT_14cad2578;
}



// FUNCTION 1463bbe08 FUN_1463bbe08 body=47 status=ok
// SIG undefined FUN_1463bbe08(void)

longlong FUN_1463bbe08(void)

{
  if (DAT_14cad2580 == 0) {
    FUN_14000fc22(&DAT_14cad2580,&PTR_FUN_14a86c900);
  }
  return DAT_14cad2580;
}



// FUNCTION 1463bbe37 FUN_1463bbe37 body=47 status=ok
// SIG undefined FUN_1463bbe37(void)

longlong FUN_1463bbe37(void)

{
  if (DAT_14cad2588 == 0) {
    FUN_14000fc22(&DAT_14cad2588,&PTR_FUN_14a86ca50);
  }
  return DAT_14cad2588;
}



// FUNCTION 1463bbe66 FUN_1463bbe66 body=47 status=ok
// SIG undefined FUN_1463bbe66(void)

longlong FUN_1463bbe66(void)

{
  if (DAT_14cad2590 == 0) {
    FUN_14000fc22(&DAT_14cad2590,&PTR_FUN_14a86cb88);
  }
  return DAT_14cad2590;
}



// FUNCTION 1463bbe95 FUN_1463bbe95 body=47 status=ok
// SIG undefined FUN_1463bbe95(void)

longlong FUN_1463bbe95(void)

{
  if (DAT_14cad2598 == 0) {
    FUN_14000fc22(&DAT_14cad2598,&PTR_FUN_14a86cdb8);
  }
  return DAT_14cad2598;
}



// FUNCTION 1463bbec4 FUN_1463bbec4 body=47 status=ok
// SIG undefined FUN_1463bbec4(void)

longlong FUN_1463bbec4(void)

{
  if (DAT_14cad25a0 == 0) {
    FUN_14000fc22(&DAT_14cad25a0,&PTR_FUN_14a86cf48);
  }
  return DAT_14cad25a0;
}



// FUNCTION 1463bbef3 FUN_1463bbef3 body=47 status=ok
// SIG undefined FUN_1463bbef3(void)

longlong FUN_1463bbef3(void)

{
  if (DAT_14cad25a8 == 0) {
    FUN_14000fc22(&DAT_14cad25a8,&PTR_FUN_14a86cfe8);
  }
  return DAT_14cad25a8;
}



// FUNCTION 1463bbf22 FUN_1463bbf22 body=47 status=ok
// SIG undefined FUN_1463bbf22(void)

longlong FUN_1463bbf22(void)

{
  if (DAT_14cad25b0 == 0) {
    FUN_14000fc22(&DAT_14cad25b0,&PTR_FUN_14a86d090);
  }
  return DAT_14cad25b0;
}



// FUNCTION 1463bbf51 FUN_1463bbf51 body=47 status=ok
// SIG undefined FUN_1463bbf51(void)

longlong FUN_1463bbf51(void)

{
  if (DAT_14cad25b8 == 0) {
    FUN_14000fc22(&DAT_14cad25b8,&PTR_FUN_14a86d2e0);
  }
  return DAT_14cad25b8;
}



// FUNCTION 1463bbf80 FUN_1463bbf80 body=47 status=ok
// SIG undefined FUN_1463bbf80(void)

longlong FUN_1463bbf80(void)

{
  if (DAT_14cad25c0 == 0) {
    FUN_14000fc22(&DAT_14cad25c0,&PTR_FUN_14a86d4d8);
  }
  return DAT_14cad25c0;
}



// FUNCTION 1463bbfaf FUN_1463bbfaf body=47 status=ok
// SIG undefined FUN_1463bbfaf(void)

longlong FUN_1463bbfaf(void)

{
  if (DAT_14cad25c8 == 0) {
    FUN_14000fc22(&DAT_14cad25c8,&PTR_FUN_14a86d710);
  }
  return DAT_14cad25c8;
}



// FUNCTION 1463bbfde FUN_1463bbfde body=47 status=ok
// SIG undefined FUN_1463bbfde(void)

longlong FUN_1463bbfde(void)

{
  if (DAT_14cad25d0 == 0) {
    FUN_14000fc22(&DAT_14cad25d0,&PTR_FUN_14a86d908);
  }
  return DAT_14cad25d0;
}



// FUNCTION 1463bc00d FUN_1463bc00d body=47 status=ok
// SIG undefined FUN_1463bc00d(void)

longlong FUN_1463bc00d(void)

{
  if (DAT_14cad25d8 == 0) {
    FUN_14000fc22(&DAT_14cad25d8,&PTR_FUN_14a86d9d0);
  }
  return DAT_14cad25d8;
}



// FUNCTION 1463bc03c FUN_1463bc03c body=47 status=ok
// SIG undefined FUN_1463bc03c(void)

longlong FUN_1463bc03c(void)

{
  if (DAT_14cad25e0 == 0) {
    FUN_14000fc22(&DAT_14cad25e0,&PTR_FUN_14a86dad8);
  }
  return DAT_14cad25e0;
}



// FUNCTION 1463bc06b FUN_1463bc06b body=47 status=ok
// SIG undefined FUN_1463bc06b(void)

longlong FUN_1463bc06b(void)

{
  if (DAT_14cad25e8 == 0) {
    FUN_14000fc22(&DAT_14cad25e8,&PTR_FUN_14a86dbb0);
  }
  return DAT_14cad25e8;
}



// FUNCTION 1463bc09a FUN_1463bc09a body=47 status=ok
// SIG undefined FUN_1463bc09a(void)

longlong FUN_1463bc09a(void)

{
  if (DAT_14cad25f0 == 0) {
    FUN_14000fc22(&DAT_14cad25f0,&PTR_FUN_14a86dc80);
  }
  return DAT_14cad25f0;
}



// FUNCTION 1463bc0c9 FUN_1463bc0c9 body=47 status=ok
// SIG undefined FUN_1463bc0c9(void)

longlong FUN_1463bc0c9(void)

{
  if (DAT_14cad25f8 == 0) {
    FUN_14000fc22(&DAT_14cad25f8,&PTR_FUN_14a86dd50);
  }
  return DAT_14cad25f8;
}



// FUNCTION 1463bc0f8 FUN_1463bc0f8 body=47 status=ok
// SIG undefined FUN_1463bc0f8(void)

longlong FUN_1463bc0f8(void)

{
  if (DAT_14cad2600 == 0) {
    FUN_14000fc22(&DAT_14cad2600,&PTR_FUN_14a86ddd0);
  }
  return DAT_14cad2600;
}



// FUNCTION 1463bc127 FUN_1463bc127 body=47 status=ok
// SIG undefined FUN_1463bc127(void)

longlong FUN_1463bc127(void)

{
  if (DAT_14cad2608 == 0) {
    FUN_14000fc22(&DAT_14cad2608,&PTR_FUN_14a86de50);
  }
  return DAT_14cad2608;
}



// FUNCTION 1463bc156 FUN_1463bc156 body=47 status=ok
// SIG undefined FUN_1463bc156(void)

longlong FUN_1463bc156(void)

{
  if (DAT_14cad2610 == 0) {
    FUN_14000fc22(&DAT_14cad2610,&PTR_FUN_14a86def0);
  }
  return DAT_14cad2610;
}



// FUNCTION 1463bc185 FUN_1463bc185 body=47 status=ok
// SIG undefined FUN_1463bc185(void)

longlong FUN_1463bc185(void)

{
  if (DAT_14cad2618 == 0) {
    FUN_14000fc22(&DAT_14cad2618,&PTR_FUN_14a86df90);
  }
  return DAT_14cad2618;
}



// FUNCTION 1463bc1b4 FUN_1463bc1b4 body=47 status=ok
// SIG undefined FUN_1463bc1b4(void)

longlong FUN_1463bc1b4(void)

{
  if (DAT_14cad2620 == 0) {
    FUN_14000fc22(&DAT_14cad2620,&PTR_FUN_14a86e030);
  }
  return DAT_14cad2620;
}



// FUNCTION 1463bc1e3 FUN_1463bc1e3 body=47 status=ok
// SIG undefined FUN_1463bc1e3(void)

longlong FUN_1463bc1e3(void)

{
  if (DAT_14cad2628 == 0) {
    FUN_14000fc22(&DAT_14cad2628,&PTR_FUN_14a86e260);
  }
  return DAT_14cad2628;
}



// FUNCTION 1463bc212 FUN_1463bc212 body=47 status=ok
// SIG undefined FUN_1463bc212(void)

longlong FUN_1463bc212(void)

{
  if (DAT_14cad2630 == 0) {
    FUN_14000fc22(&DAT_14cad2630,&PTR_FUN_14a86e458);
  }
  return DAT_14cad2630;
}



// FUNCTION 1463bc241 FUN_1463bc241 body=47 status=ok
// SIG undefined FUN_1463bc241(void)

longlong FUN_1463bc241(void)

{
  if (DAT_14cad2638 == 0) {
    FUN_14000fc22(&DAT_14cad2638,&PTR_FUN_14a86e4f8);
  }
  return DAT_14cad2638;
}



// FUNCTION 1463bc270 FUN_1463bc270 body=47 status=ok
// SIG undefined FUN_1463bc270(void)

longlong FUN_1463bc270(void)

{
  if (DAT_14cad2640 == 0) {
    FUN_14000fc22(&DAT_14cad2640,&PTR_FUN_14a86e598);
  }
  return DAT_14cad2640;
}



// FUNCTION 1463bc29f FUN_1463bc29f body=47 status=ok
// SIG undefined FUN_1463bc29f(void)

longlong FUN_1463bc29f(void)

{
  if (DAT_14cad2648 == 0) {
    FUN_14000fc22(&DAT_14cad2648,&PTR_FUN_14a86e7e0);
  }
  return DAT_14cad2648;
}



// FUNCTION 1463bc2ce FUN_1463bc2ce body=47 status=ok
// SIG undefined FUN_1463bc2ce(void)

longlong FUN_1463bc2ce(void)

{
  if (DAT_14cad2650 == 0) {
    FUN_14000fc22(&DAT_14cad2650,&PTR_FUN_14a86e9e0);
  }
  return DAT_14cad2650;
}



// FUNCTION 1463bc2fd FUN_1463bc2fd body=47 status=ok
// SIG undefined FUN_1463bc2fd(void)

longlong FUN_1463bc2fd(void)

{
  if (DAT_14cad2658 == 0) {
    FUN_14000fc22(&DAT_14cad2658,&PTR_FUN_14a86ea88);
  }
  return DAT_14cad2658;
}



// FUNCTION 1463bc32c FUN_1463bc32c body=47 status=ok
// SIG undefined FUN_1463bc32c(void)

longlong FUN_1463bc32c(void)

{
  if (DAT_14cad2660 == 0) {
    FUN_14000fc22(&DAT_14cad2660,&PTR_FUN_14a86eb68);
  }
  return DAT_14cad2660;
}



// FUNCTION 1463bc35b FUN_1463bc35b body=47 status=ok
// SIG undefined FUN_1463bc35b(void)

longlong FUN_1463bc35b(void)

{
  if (DAT_14cad2668 == 0) {
    FUN_14000fc22(&DAT_14cad2668,&PTR_FUN_14a86ec10);
  }
  return DAT_14cad2668;
}



// FUNCTION 1463bc38a FUN_1463bc38a body=47 status=ok
// SIG undefined FUN_1463bc38a(void)

longlong FUN_1463bc38a(void)

{
  if (DAT_14cad2670 == 0) {
    FUN_14000fc22(&DAT_14cad2670,&PTR_FUN_14a86ec98);
  }
  return DAT_14cad2670;
}



// FUNCTION 1463bc3b9 FUN_1463bc3b9 body=47 status=ok
// SIG undefined FUN_1463bc3b9(void)

longlong FUN_1463bc3b9(void)

{
  if (DAT_14cad2678 == 0) {
    FUN_14000fc22(&DAT_14cad2678,&PTR_FUN_14a86eeb8);
  }
  return DAT_14cad2678;
}



// FUNCTION 1463bc3e8 FUN_1463bc3e8 body=47 status=ok
// SIG undefined FUN_1463bc3e8(void)

longlong FUN_1463bc3e8(void)

{
  if (DAT_14cad2680 == 0) {
    FUN_14000fc22(&DAT_14cad2680,&PTR_FUN_14a86ef48);
  }
  return DAT_14cad2680;
}



// FUNCTION 1463bc417 FUN_1463bc417 body=47 status=ok
// SIG undefined FUN_1463bc417(void)

longlong FUN_1463bc417(void)

{
  if (DAT_14cad2688 == 0) {
    FUN_14000fc22(&DAT_14cad2688,&PTR_FUN_14a86f020);
  }
  return DAT_14cad2688;
}



// FUNCTION 1463bc446 FUN_1463bc446 body=47 status=ok
// SIG undefined FUN_1463bc446(void)

longlong FUN_1463bc446(void)

{
  if (DAT_14cad2690 == 0) {
    FUN_14000fc22(&DAT_14cad2690,&PTR_FUN_14a86f1e0);
  }
  return DAT_14cad2690;
}



// FUNCTION 1463bc475 FUN_1463bc475 body=47 status=ok
// SIG undefined FUN_1463bc475(void)

longlong FUN_1463bc475(void)

{
  if (DAT_14cad2698 == 0) {
    FUN_14000fc22(&DAT_14cad2698,&PTR_FUN_14a86f268);
  }
  return DAT_14cad2698;
}



// FUNCTION 1463bc4a4 FUN_1463bc4a4 body=47 status=ok
// SIG undefined FUN_1463bc4a4(void)

longlong FUN_1463bc4a4(void)

{
  if (DAT_14cad26a0 == 0) {
    FUN_14000fc22(&DAT_14cad26a0,&PTR_FUN_14a86f350);
  }
  return DAT_14cad26a0;
}



// FUNCTION 1463bc4d3 FUN_1463bc4d3 body=47 status=ok
// SIG undefined FUN_1463bc4d3(void)

longlong FUN_1463bc4d3(void)

{
  if (DAT_14cad26a8 == 0) {
    FUN_14000fc22(&DAT_14cad26a8,&PTR_FUN_14a86f3a8);
  }
  return DAT_14cad26a8;
}



// FUNCTION 1463bc502 FUN_1463bc502 body=47 status=ok
// SIG undefined FUN_1463bc502(void)

longlong FUN_1463bc502(void)

{
  if (DAT_14cad26b0 == 0) {
    FUN_14000fc22(&DAT_14cad26b0,&PTR_FUN_14a86f4a0);
  }
  return DAT_14cad26b0;
}



// FUNCTION 1463bc531 FUN_1463bc531 body=47 status=ok
// SIG undefined FUN_1463bc531(void)

longlong FUN_1463bc531(void)

{
  if (DAT_14cad26b8 == 0) {
    FUN_14000fc22(&DAT_14cad26b8,&PTR_FUN_14a86f548);
  }
  return DAT_14cad26b8;
}



// FUNCTION 1463bc560 FUN_1463bc560 body=47 status=ok
// SIG undefined FUN_1463bc560(void)

longlong FUN_1463bc560(void)

{
  if (DAT_14cad26c0 == 0) {
    FUN_14000fc22(&DAT_14cad26c0,&PTR_FUN_14a86f5a8);
  }
  return DAT_14cad26c0;
}



// FUNCTION 1463bc58f FUN_1463bc58f body=47 status=ok
// SIG undefined FUN_1463bc58f(void)

longlong FUN_1463bc58f(void)

{
  if (DAT_14cad26c8 == 0) {
    FUN_14000fc22(&DAT_14cad26c8,&PTR_FUN_14a86f608);
  }
  return DAT_14cad26c8;
}



// FUNCTION 1463bc5be FUN_1463bc5be body=47 status=ok
// SIG undefined FUN_1463bc5be(void)

longlong FUN_1463bc5be(void)

{
  if (DAT_14cad26d0 == 0) {
    FUN_14000fc22(&DAT_14cad26d0,&PTR_FUN_14a86f700);
  }
  return DAT_14cad26d0;
}



// FUNCTION 1463bc5ed FUN_1463bc5ed body=47 status=ok
// SIG undefined FUN_1463bc5ed(void)

longlong FUN_1463bc5ed(void)

{
  if (DAT_14cad26d8 == 0) {
    FUN_14000fc22(&DAT_14cad26d8,&PTR_FUN_14a86f760);
  }
  return DAT_14cad26d8;
}



// FUNCTION 1463bc61c FUN_1463bc61c body=47 status=ok
// SIG undefined FUN_1463bc61c(void)

longlong FUN_1463bc61c(void)

{
  if (DAT_14cad26e0 == 0) {
    FUN_14000fc22(&DAT_14cad26e0,&PTR_FUN_14a86f7b8);
  }
  return DAT_14cad26e0;
}



// FUNCTION 1463bc64b FUN_1463bc64b body=47 status=ok
// SIG undefined FUN_1463bc64b(void)

longlong FUN_1463bc64b(void)

{
  if (DAT_14cad26e8 == 0) {
    FUN_14000fc22(&DAT_14cad26e8,&PTR_FUN_14a86f818);
  }
  return DAT_14cad26e8;
}



// FUNCTION 1463bc67a FUN_1463bc67a body=47 status=ok
// SIG undefined FUN_1463bc67a(void)

longlong FUN_1463bc67a(void)

{
  if (DAT_14cad26f0 == 0) {
    FUN_14000fc22(&DAT_14cad26f0,&PTR_FUN_14a86f948);
  }
  return DAT_14cad26f0;
}



// FUNCTION 1463bc6a9 FUN_1463bc6a9 body=47 status=ok
// SIG undefined FUN_1463bc6a9(void)

longlong FUN_1463bc6a9(void)

{
  if (DAT_14cad26f8 == 0) {
    FUN_14000fc22(&DAT_14cad26f8,&PTR_FUN_14a86fac8);
  }
  return DAT_14cad26f8;
}



// FUNCTION 1463bc6d8 FUN_1463bc6d8 body=47 status=ok
// SIG undefined FUN_1463bc6d8(void)

longlong FUN_1463bc6d8(void)

{
  if (DAT_14cad2700 == 0) {
    FUN_14000fc22(&DAT_14cad2700,&PTR_FUN_14a86fc00);
  }
  return DAT_14cad2700;
}



// FUNCTION 1463bc707 FUN_1463bc707 body=47 status=ok
// SIG undefined FUN_1463bc707(void)

longlong FUN_1463bc707(void)

{
  if (DAT_14cad2708 == 0) {
    FUN_14000fc22(&DAT_14cad2708,&PTR_FUN_14a86fd50);
  }
  return DAT_14cad2708;
}



// FUNCTION 1463bc736 FUN_1463bc736 body=47 status=ok
// SIG undefined FUN_1463bc736(void)

longlong FUN_1463bc736(void)

{
  if (DAT_14cad2710 == 0) {
    FUN_14000fc22(&DAT_14cad2710,&PTR_FUN_14a86fe40);
  }
  return DAT_14cad2710;
}



// FUNCTION 1463bc765 FUN_1463bc765 body=47 status=ok
// SIG undefined FUN_1463bc765(void)

longlong FUN_1463bc765(void)

{
  if (DAT_14cad2718 == 0) {
    FUN_14000fc22(&DAT_14cad2718,&PTR_FUN_14a86fee8);
  }
  return DAT_14cad2718;
}



// FUNCTION 1463bc794 FUN_1463bc794 body=47 status=ok
// SIG undefined FUN_1463bc794(void)

longlong FUN_1463bc794(void)

{
  if (DAT_14cad2720 == 0) {
    FUN_14000fc22(&DAT_14cad2720,&PTR_FUN_14a870060);
  }
  return DAT_14cad2720;
}



// FUNCTION 1463bc7c3 FUN_1463bc7c3 body=47 status=ok
// SIG undefined FUN_1463bc7c3(void)

longlong FUN_1463bc7c3(void)

{
  if (DAT_14cad2728 == 0) {
    FUN_14000fc22(&DAT_14cad2728,&PTR_FUN_14a8701a0);
  }
  return DAT_14cad2728;
}



// FUNCTION 1463bc7f2 FUN_1463bc7f2 body=47 status=ok
// SIG undefined FUN_1463bc7f2(void)

longlong FUN_1463bc7f2(void)

{
  if (DAT_14cad2730 == 0) {
    FUN_14000fc22(&DAT_14cad2730,&PTR_FUN_14a8702e0);
  }
  return DAT_14cad2730;
}



// FUNCTION 1463bc821 FUN_1463bc821 body=47 status=ok
// SIG undefined FUN_1463bc821(void)

longlong FUN_1463bc821(void)

{
  if (DAT_14cad2738 == 0) {
    FUN_14000fc22(&DAT_14cad2738,&PTR_FUN_14a870398);
  }
  return DAT_14cad2738;
}



// FUNCTION 1463bc850 FUN_1463bc850 body=47 status=ok
// SIG undefined FUN_1463bc850(void)

longlong FUN_1463bc850(void)

{
  if (DAT_14cad2740 == 0) {
    FUN_14000fc22(&DAT_14cad2740,&PTR_FUN_14a870438);
  }
  return DAT_14cad2740;
}



// FUNCTION 1463bc87f FUN_1463bc87f body=47 status=ok
// SIG undefined FUN_1463bc87f(void)

longlong FUN_1463bc87f(void)

{
  if (DAT_14cad2748 == 0) {
    FUN_14000fc22(&DAT_14cad2748,&PTR_FUN_14a870568);
  }
  return DAT_14cad2748;
}



// FUNCTION 1463bc8ae FUN_1463bc8ae body=47 status=ok
// SIG undefined FUN_1463bc8ae(void)

longlong FUN_1463bc8ae(void)

{
  if (DAT_14cad2750 == 0) {
    FUN_14000fc22(&DAT_14cad2750,&PTR_FUN_14a870670);
  }
  return DAT_14cad2750;
}



// FUNCTION 1463bc8dd FUN_1463bc8dd body=47 status=ok
// SIG undefined FUN_1463bc8dd(void)

longlong FUN_1463bc8dd(void)

{
  if (DAT_14cad2758 == 0) {
    FUN_14000fc22(&DAT_14cad2758,&PTR_FUN_14a8707b0);
  }
  return DAT_14cad2758;
}



// FUNCTION 1463bc90c FUN_1463bc90c body=47 status=ok
// SIG undefined FUN_1463bc90c(void)

longlong FUN_1463bc90c(void)

{
  if (DAT_14cad2760 == 0) {
    FUN_14000fc22(&DAT_14cad2760,&PTR_FUN_14a870848);
  }
  return DAT_14cad2760;
}



// FUNCTION 1463bc93b FUN_1463bc93b body=47 status=ok
// SIG undefined FUN_1463bc93b(void)

longlong FUN_1463bc93b(void)

{
  if (DAT_14cad2768 == 0) {
    FUN_14000fc22(&DAT_14cad2768,&PTR_FUN_14a870968);
  }
  return DAT_14cad2768;
}



// FUNCTION 1463bc96a FUN_1463bc96a body=47 status=ok
// SIG undefined FUN_1463bc96a(void)

longlong FUN_1463bc96a(void)

{
  if (DAT_14cad2770 == 0) {
    FUN_14000fc22(&DAT_14cad2770,&PTR_FUN_14a870a20);
  }
  return DAT_14cad2770;
}



// FUNCTION 1463bc999 FUN_1463bc999 body=47 status=ok
// SIG undefined FUN_1463bc999(void)

longlong FUN_1463bc999(void)

{
  if (DAT_14cad2778 == 0) {
    FUN_14000fc22(&DAT_14cad2778,&PTR_FUN_14a870b10);
  }
  return DAT_14cad2778;
}



// FUNCTION 1463bc9c8 FUN_1463bc9c8 body=47 status=ok
// SIG undefined FUN_1463bc9c8(void)

longlong FUN_1463bc9c8(void)

{
  if (DAT_14cad2780 == 0) {
    FUN_14000fc22(&DAT_14cad2780,&PTR_FUN_14a870bf8);
  }
  return DAT_14cad2780;
}



// FUNCTION 1463bc9f7 FUN_1463bc9f7 body=47 status=ok
// SIG undefined FUN_1463bc9f7(void)

longlong FUN_1463bc9f7(void)

{
  if (DAT_14cad2788 == 0) {
    FUN_14000fc22(&DAT_14cad2788,&PTR_FUN_14a870c98);
  }
  return DAT_14cad2788;
}



// FUNCTION 1463bca26 FUN_1463bca26 body=47 status=ok
// SIG undefined FUN_1463bca26(void)

longlong FUN_1463bca26(void)

{
  if (DAT_14cad2790 == 0) {
    FUN_14000fc22(&DAT_14cad2790,&PTR_FUN_14a870dd0);
  }
  return DAT_14cad2790;
}



// FUNCTION 1463bca55 FUN_1463bca55 body=47 status=ok
// SIG undefined FUN_1463bca55(void)

longlong FUN_1463bca55(void)

{
  if (DAT_14cad2798 == 0) {
    FUN_14000fc22(&DAT_14cad2798,&PTR_FUN_14a870ec0);
  }
  return DAT_14cad2798;
}



// FUNCTION 1463bca84 FUN_1463bca84 body=47 status=ok
// SIG undefined FUN_1463bca84(void)

longlong FUN_1463bca84(void)

{
  if (DAT_14cad27a0 == 0) {
    FUN_14000fc22(&DAT_14cad27a0,&PTR_FUN_14a870f78);
  }
  return DAT_14cad27a0;
}



// FUNCTION 1463bcab3 FUN_1463bcab3 body=47 status=ok
// SIG undefined FUN_1463bcab3(void)

longlong FUN_1463bcab3(void)

{
  if (DAT_14cad27a8 == 0) {
    FUN_14000fc22(&DAT_14cad27a8,&PTR_FUN_14a871038);
  }
  return DAT_14cad27a8;
}



// FUNCTION 1463bcae2 FUN_1463bcae2 body=47 status=ok
// SIG undefined FUN_1463bcae2(void)

longlong FUN_1463bcae2(void)

{
  if (DAT_14cad27b0 == 0) {
    FUN_14000fc22(&DAT_14cad27b0,&PTR_FUN_14a871118);
  }
  return DAT_14cad27b0;
}



// FUNCTION 1463bcb11 FUN_1463bcb11 body=47 status=ok
// SIG undefined FUN_1463bcb11(void)

longlong FUN_1463bcb11(void)

{
  if (DAT_14cad27b8 == 0) {
    FUN_14000fc22(&DAT_14cad27b8,&PTR_FUN_14a871250);
  }
  return DAT_14cad27b8;
}



// FUNCTION 1463bcb40 FUN_1463bcb40 body=47 status=ok
// SIG undefined FUN_1463bcb40(void)

longlong FUN_1463bcb40(void)

{
  if (DAT_14cad27c0 == 0) {
    FUN_14000fc22(&DAT_14cad27c0,&PTR_FUN_14a871310);
  }
  return DAT_14cad27c0;
}



// FUNCTION 1463bcb6f FUN_1463bcb6f body=47 status=ok
// SIG undefined FUN_1463bcb6f(void)

longlong FUN_1463bcb6f(void)

{
  if (DAT_14cad27c8 == 0) {
    FUN_14000fc22(&DAT_14cad27c8,&PTR_FUN_14a871438);
  }
  return DAT_14cad27c8;
}



// FUNCTION 1463bcb9e FUN_1463bcb9e body=47 status=ok
// SIG undefined FUN_1463bcb9e(void)

longlong FUN_1463bcb9e(void)

{
  if (DAT_14cad27d0 == 0) {
    FUN_14000fc22(&DAT_14cad27d0,&PTR_FUN_14a871570);
  }
  return DAT_14cad27d0;
}



// FUNCTION 1463bcbcd FUN_1463bcbcd body=47 status=ok
// SIG undefined FUN_1463bcbcd(void)

longlong FUN_1463bcbcd(void)

{
  if (DAT_14cad27d8 == 0) {
    FUN_14000fc22(&DAT_14cad27d8,&PTR_FUN_14a8716a0);
  }
  return DAT_14cad27d8;
}



// FUNCTION 1463bcbfc FUN_1463bcbfc body=47 status=ok
// SIG undefined FUN_1463bcbfc(void)

longlong FUN_1463bcbfc(void)

{
  if (DAT_14cad27e0 == 0) {
    FUN_14000fc22(&DAT_14cad27e0,&PTR_FUN_14a871738);
  }
  return DAT_14cad27e0;
}



// FUNCTION 1463bcc2b FUN_1463bcc2b body=47 status=ok
// SIG undefined FUN_1463bcc2b(void)

longlong FUN_1463bcc2b(void)

{
  if (DAT_14cad27e8 == 0) {
    FUN_14000fc22(&DAT_14cad27e8,&PTR_FUN_14a8717b8);
  }
  return DAT_14cad27e8;
}



// FUNCTION 1463bcc5a FUN_1463bcc5a body=47 status=ok
// SIG undefined FUN_1463bcc5a(void)

longlong FUN_1463bcc5a(void)

{
  if (DAT_14cad27f0 == 0) {
    FUN_14000fc22(&DAT_14cad27f0,&PTR_FUN_14a871890);
  }
  return DAT_14cad27f0;
}



// FUNCTION 1463bcc89 FUN_1463bcc89 body=47 status=ok
// SIG undefined FUN_1463bcc89(void)

longlong FUN_1463bcc89(void)

{
  if (DAT_14cad27f8 == 0) {
    FUN_14000fc22(&DAT_14cad27f8,&PTR_FUN_14a871930);
  }
  return DAT_14cad27f8;
}



// FUNCTION 1463bccb8 FUN_1463bccb8 body=47 status=ok
// SIG undefined FUN_1463bccb8(void)

longlong FUN_1463bccb8(void)

{
  if (DAT_14cad2800 == 0) {
    FUN_14000fc22(&DAT_14cad2800,&PTR_FUN_14a8719d0);
  }
  return DAT_14cad2800;
}



// FUNCTION 1463bcce7 FUN_1463bcce7 body=47 status=ok
// SIG undefined FUN_1463bcce7(void)

longlong FUN_1463bcce7(void)

{
  if (DAT_14cad2808 == 0) {
    FUN_14000fc22(&DAT_14cad2808,&PTR_FUN_14a871a70);
  }
  return DAT_14cad2808;
}



// FUNCTION 1463bcd16 FUN_1463bcd16 body=47 status=ok
// SIG undefined FUN_1463bcd16(void)

longlong FUN_1463bcd16(void)

{
  if (DAT_14cad2810 == 0) {
    FUN_14000fc22(&DAT_14cad2810,&PTR_FUN_14a871b28);
  }
  return DAT_14cad2810;
}



// FUNCTION 1463bcd45 FUN_1463bcd45 body=47 status=ok
// SIG undefined FUN_1463bcd45(void)

longlong FUN_1463bcd45(void)

{
  if (DAT_14cad2818 == 0) {
    FUN_14000fc22(&DAT_14cad2818,&PTR_FUN_14a871bc8);
  }
  return DAT_14cad2818;
}



// FUNCTION 1463bcd74 FUN_1463bcd74 body=47 status=ok
// SIG undefined FUN_1463bcd74(void)

longlong FUN_1463bcd74(void)

{
  if (DAT_14cad2820 == 0) {
    FUN_14000fc22(&DAT_14cad2820,&PTR_FUN_14a871c50);
  }
  return DAT_14cad2820;
}



// FUNCTION 1463bcda3 FUN_1463bcda3 body=47 status=ok
// SIG undefined FUN_1463bcda3(void)

longlong FUN_1463bcda3(void)

{
  if (DAT_14cad2828 == 0) {
    FUN_14000fc22(&DAT_14cad2828,&PTR_FUN_14a871c90);
  }
  return DAT_14cad2828;
}



// FUNCTION 1463bcdd2 FUN_1463bcdd2 body=47 status=ok
// SIG undefined FUN_1463bcdd2(void)

longlong FUN_1463bcdd2(void)

{
  if (DAT_14cad2830 == 0) {
    FUN_14000fc22(&DAT_14cad2830,&PTR_FUN_14a871cf0);
  }
  return DAT_14cad2830;
}



// FUNCTION 1463bce01 FUN_1463bce01 body=47 status=ok
// SIG undefined FUN_1463bce01(void)

longlong FUN_1463bce01(void)

{
  if (DAT_14cad2838 == 0) {
    FUN_14000fc22(&DAT_14cad2838,&PTR_FUN_14a871d80);
  }
  return DAT_14cad2838;
}



// FUNCTION 1463bce30 FUN_1463bce30 body=47 status=ok
// SIG undefined FUN_1463bce30(void)

longlong FUN_1463bce30(void)

{
  if (DAT_14cad2840 == 0) {
    FUN_14000fc22(&DAT_14cad2840,&PTR_FUN_14a871de8);
  }
  return DAT_14cad2840;
}



// FUNCTION 1463bce5f FUN_1463bce5f body=47 status=ok
// SIG undefined FUN_1463bce5f(void)

longlong FUN_1463bce5f(void)

{
  if (DAT_14cad2848 == 0) {
    FUN_14000fc22(&DAT_14cad2848,&PTR_FUN_14a871eb0);
  }
  return DAT_14cad2848;
}



// FUNCTION 1463bce8e FUN_1463bce8e body=47 status=ok
// SIG undefined FUN_1463bce8e(void)

longlong FUN_1463bce8e(void)

{
  if (DAT_14cad2850 == 0) {
    FUN_14000fc22(&DAT_14cad2850,&PTR_FUN_14a871f40);
  }
  return DAT_14cad2850;
}



// FUNCTION 1463bcebe FUN_1463bcebe body=34 status=ok
// SIG undefined FUN_1463bcebe(void)

void FUN_1463bcebe(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a74fb4();
  FUN_14069c8d6(uVar1,&PTR_s_AccumulateAllBodiesBelowPhysicsB_14a871f80,0x6f);
  return;
}



// FUNCTION 1463bcee0 FUN_1463bcee0 body=120 status=ok
// SIG undefined FUN_1463bcee0(void)

undefined8 FUN_1463bcee0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14009d848(&local_30,param_3);
  FUN_1448b6402(param_1 + 0x1158,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463bcf70 FUN_1463bcf70 body=40 status=ok
// SIG undefined FUN_1463bcf70(void)

undefined8 FUN_1463bcf70(undefined8 param_1,int param_2)

{
  FUN_140b87324();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bcf98 FUN_1463bcf98 body=105 status=ok
// SIG undefined FUN_1463bcf98(void)

undefined8 * FUN_1463bcf98(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a865560;
  param_1[5] = &PTR_LAB_14a865b50;
  param_1[6] = &PTR_LAB_14a865b90;
  puVar2 = (undefined8 *)param_1[0x61];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd002 FUN_1463bd002 body=40 status=ok
// SIG undefined FUN_1463bd002(void)

undefined8 FUN_1463bd002(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd02a FUN_1463bd02a body=40 status=ok
// SIG undefined FUN_1463bd02a(void)

undefined8 FUN_1463bd02a(undefined8 param_1,int param_2)

{
  FUN_1458271e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd052 FUN_1463bd052 body=40 status=ok
// SIG undefined FUN_1463bd052(void)

undefined8 FUN_1463bd052(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd07a FUN_1463bd07a body=40 status=ok
// SIG undefined FUN_1463bd07a(void)

undefined8 FUN_1463bd07a(undefined8 param_1,int param_2)

{
  FUN_1403c5294();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd0a2 FUN_1463bd0a2 body=40 status=ok
// SIG undefined FUN_1463bd0a2(void)

undefined8 FUN_1463bd0a2(undefined8 param_1,int param_2)

{
  FUN_1403c5b3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd0ca FUN_1463bd0ca body=29 status=ok
// SIG undefined FUN_1463bd0ca(void)

undefined8 FUN_1463bd0ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd0e8 FUN_1463bd0e8 body=29 status=ok
// SIG undefined FUN_1463bd0e8(void)

undefined8 FUN_1463bd0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd106 FUN_1463bd106 body=29 status=ok
// SIG undefined FUN_1463bd106(void)

undefined8 FUN_1463bd106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463bd124 FUN_1463bd124 body=24 status=ok
// SIG undefined FUN_1463bd124(void)

bool FUN_1463bd124(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463bd13c FUN_1463bd13c body=55 status=ok
// SIG undefined FUN_1463bd13c(void)

void FUN_1463bd13c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2c08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2c08 = FUN_140002ddd(FUN_1463bd173,uVar1,L"TentDistribution");
  }
  return;
}



// FUNCTION 1463bd173 FUN_1463bd173 body=47 status=ok
// SIG undefined FUN_1463bd173(void)

longlong FUN_1463bd173(void)

{
  if (DAT_14cad2c00 == 0) {
    FUN_14086a14e(&DAT_14cad2c00,&PTR_FUN_14a879af0);
  }
  return DAT_14cad2c00;
}



// FUNCTION 1463bd1a2 FUN_1463bd1a2 body=48 status=ok
// SIG undefined FUN_1463bd1a2(void)

void FUN_1463bd1a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a897d40;
  return;
}



// FUNCTION 1463bd1d2 FUN_1463bd1d2 body=47 status=ok
// SIG undefined FUN_1463bd1d2(void)

longlong FUN_1463bd1d2(void)

{
  if (DAT_14cad2c18 == 0) {
    FUN_1409ce572(&DAT_14cad2c18,&PTR_FUN_14a879b80);
  }
  return DAT_14cad2c18;
}



// FUNCTION 1463bd201 FUN_1463bd201 body=47 status=ok
// SIG undefined FUN_1463bd201(void)

longlong FUN_1463bd201(void)

{
  if (DAT_14cad2c30 == 0) {
    FUN_14000fc22(&DAT_14cad2c30,&PTR_FUN_14a879c90);
  }
  return DAT_14cad2c30;
}



// FUNCTION 1463bd230 FUN_1463bd230 body=47 status=ok
// SIG undefined FUN_1463bd230(void)

longlong FUN_1463bd230(void)

{
  if (DAT_14cad2c38 == 0) {
    FUN_14000fc22(&DAT_14cad2c38,&PTR_FUN_14a879df8);
  }
  return DAT_14cad2c38;
}



// FUNCTION 1463bd25f FUN_1463bd25f body=47 status=ok
// SIG undefined FUN_1463bd25f(void)

longlong FUN_1463bd25f(void)

{
  if (DAT_14cad2c40 == 0) {
    FUN_14000fc22(&DAT_14cad2c40,&PTR_FUN_14a879f08);
  }
  return DAT_14cad2c40;
}



// FUNCTION 1463bd28e FUN_1463bd28e body=47 status=ok
// SIG undefined FUN_1463bd28e(void)

longlong FUN_1463bd28e(void)

{
  if (DAT_14cad2c48 == 0) {
    FUN_14000fc22(&DAT_14cad2c48,&PTR_FUN_14a879ff8);
  }
  return DAT_14cad2c48;
}



// FUNCTION 1463bd2bd FUN_1463bd2bd body=47 status=ok
// SIG undefined FUN_1463bd2bd(void)

longlong FUN_1463bd2bd(void)

{
  if (DAT_14cad2c50 == 0) {
    FUN_14000fc22(&DAT_14cad2c50,&PTR_FUN_14a87a0e8);
  }
  return DAT_14cad2c50;
}



// FUNCTION 1463bd2ec FUN_1463bd2ec body=47 status=ok
// SIG undefined FUN_1463bd2ec(void)

longlong FUN_1463bd2ec(void)

{
  if (DAT_14cad2c58 == 0) {
    FUN_14000fc22(&DAT_14cad2c58,&PTR_FUN_14a87a190);
  }
  return DAT_14cad2c58;
}



// FUNCTION 1463bd31b FUN_1463bd31b body=47 status=ok
// SIG undefined FUN_1463bd31b(void)

longlong FUN_1463bd31b(void)

{
  if (DAT_14cad2c60 == 0) {
    FUN_14000fc22(&DAT_14cad2c60,&PTR_FUN_14a87a238);
  }
  return DAT_14cad2c60;
}



// FUNCTION 1463bd34a FUN_1463bd34a body=47 status=ok
// SIG undefined FUN_1463bd34a(void)

longlong FUN_1463bd34a(void)

{
  if (DAT_14cad2c68 == 0) {
    FUN_14000fc22(&DAT_14cad2c68,&PTR_FUN_14a87a2d0);
  }
  return DAT_14cad2c68;
}



// FUNCTION 1463bd379 FUN_1463bd379 body=47 status=ok
// SIG undefined FUN_1463bd379(void)

longlong FUN_1463bd379(void)

{
  if (DAT_14cad2c70 == 0) {
    FUN_14000fc22(&DAT_14cad2c70,&PTR_FUN_14a87a360);
  }
  return DAT_14cad2c70;
}



// FUNCTION 1463bd3a8 FUN_1463bd3a8 body=47 status=ok
// SIG undefined FUN_1463bd3a8(void)

longlong FUN_1463bd3a8(void)

{
  if (DAT_14cad2c78 == 0) {
    FUN_14000fc22(&DAT_14cad2c78,&PTR_FUN_14a87a3f8);
  }
  return DAT_14cad2c78;
}



// FUNCTION 1463bd3d7 FUN_1463bd3d7 body=47 status=ok
// SIG undefined FUN_1463bd3d7(void)

longlong FUN_1463bd3d7(void)

{
  if (DAT_14cad2c80 == 0) {
    FUN_14000fc22(&DAT_14cad2c80,&PTR_FUN_14a87a498);
  }
  return DAT_14cad2c80;
}



// FUNCTION 1463bd406 FUN_1463bd406 body=47 status=ok
// SIG undefined FUN_1463bd406(void)

longlong FUN_1463bd406(void)

{
  if (DAT_14cad2c88 == 0) {
    FUN_14000fc22(&DAT_14cad2c88,&PTR_FUN_14a87a520);
  }
  return DAT_14cad2c88;
}



// FUNCTION 1463bd435 FUN_1463bd435 body=47 status=ok
// SIG undefined FUN_1463bd435(void)

longlong FUN_1463bd435(void)

{
  if (DAT_14cad2c90 == 0) {
    FUN_14000fc22(&DAT_14cad2c90,&PTR_FUN_14a87a5c0);
  }
  return DAT_14cad2c90;
}



// FUNCTION 1463bd464 FUN_1463bd464 body=47 status=ok
// SIG undefined FUN_1463bd464(void)

longlong FUN_1463bd464(void)

{
  if (DAT_14cad2c98 == 0) {
    FUN_14000fc22(&DAT_14cad2c98,&PTR_FUN_14a87a658);
  }
  return DAT_14cad2c98;
}



// FUNCTION 1463bd493 FUN_1463bd493 body=47 status=ok
// SIG undefined FUN_1463bd493(void)

longlong FUN_1463bd493(void)

{
  if (DAT_14cad2ca0 == 0) {
    FUN_14000fc22(&DAT_14cad2ca0,&PTR_FUN_14a87a6f0);
  }
  return DAT_14cad2ca0;
}



// FUNCTION 1463bd4c2 FUN_1463bd4c2 body=47 status=ok
// SIG undefined FUN_1463bd4c2(void)

longlong FUN_1463bd4c2(void)

{
  if (DAT_14cad2ca8 == 0) {
    FUN_14000fc22(&DAT_14cad2ca8,&PTR_FUN_14a87a790);
  }
  return DAT_14cad2ca8;
}



// FUNCTION 1463bd4f1 FUN_1463bd4f1 body=47 status=ok
// SIG undefined FUN_1463bd4f1(void)

longlong FUN_1463bd4f1(void)

{
  if (DAT_14cad2cb0 == 0) {
    FUN_14000fc22(&DAT_14cad2cb0,&PTR_FUN_14a87a830);
  }
  return DAT_14cad2cb0;
}



// FUNCTION 1463bd520 FUN_1463bd520 body=47 status=ok
// SIG undefined FUN_1463bd520(void)

longlong FUN_1463bd520(void)

{
  if (DAT_14cad2cb8 == 0) {
    FUN_14000fc22(&DAT_14cad2cb8,&PTR_FUN_14a87a8c8);
  }
  return DAT_14cad2cb8;
}



// FUNCTION 1463bd54f FUN_1463bd54f body=47 status=ok
// SIG undefined FUN_1463bd54f(void)

longlong FUN_1463bd54f(void)

{
  if (DAT_14cad2cc0 == 0) {
    FUN_14000fc22(&DAT_14cad2cc0,&PTR_FUN_14a87a968);
  }
  return DAT_14cad2cc0;
}



// FUNCTION 1463bd57e FUN_1463bd57e body=47 status=ok
// SIG undefined FUN_1463bd57e(void)

longlong FUN_1463bd57e(void)

{
  if (DAT_14cad2cc8 == 0) {
    FUN_14000fc22(&DAT_14cad2cc8,&PTR_FUN_14a87aa08);
  }
  return DAT_14cad2cc8;
}



// FUNCTION 1463bd5ad FUN_1463bd5ad body=47 status=ok
// SIG undefined FUN_1463bd5ad(void)

longlong FUN_1463bd5ad(void)

{
  if (DAT_14cad2cd0 == 0) {
    FUN_14000fc22(&DAT_14cad2cd0,&PTR_FUN_14a87aaa0);
  }
  return DAT_14cad2cd0;
}



// FUNCTION 1463bd5dc FUN_1463bd5dc body=47 status=ok
// SIG undefined FUN_1463bd5dc(void)

longlong FUN_1463bd5dc(void)

{
  if (DAT_14cad2cd8 == 0) {
    FUN_14000fc22(&DAT_14cad2cd8,&PTR_FUN_14a87ab48);
  }
  return DAT_14cad2cd8;
}



// FUNCTION 1463bd60b FUN_1463bd60b body=47 status=ok
// SIG undefined FUN_1463bd60b(void)

longlong FUN_1463bd60b(void)

{
  if (DAT_14cad2ce0 == 0) {
    FUN_14000fc22(&DAT_14cad2ce0,&PTR_FUN_14a87abe8);
  }
  return DAT_14cad2ce0;
}



// FUNCTION 1463bd63a FUN_1463bd63a body=47 status=ok
// SIG undefined FUN_1463bd63a(void)

longlong FUN_1463bd63a(void)

{
  if (DAT_14cad2ce8 == 0) {
    FUN_14000fc22(&DAT_14cad2ce8,&PTR_FUN_14a87ac88);
  }
  return DAT_14cad2ce8;
}



// FUNCTION 1463bd669 FUN_1463bd669 body=47 status=ok
// SIG undefined FUN_1463bd669(void)

longlong FUN_1463bd669(void)

{
  if (DAT_14cad2cf0 == 0) {
    FUN_14000fc22(&DAT_14cad2cf0,&PTR_FUN_14a87ad10);
  }
  return DAT_14cad2cf0;
}



// FUNCTION 1463bd698 FUN_1463bd698 body=47 status=ok
// SIG undefined FUN_1463bd698(void)

longlong FUN_1463bd698(void)

{
  if (DAT_14cad2cf8 == 0) {
    FUN_14000fc22(&DAT_14cad2cf8,&PTR_FUN_14a87adb0);
  }
  return DAT_14cad2cf8;
}



// FUNCTION 1463bd6c8 FUN_1463bd6c8 body=34 status=ok
// SIG undefined FUN_1463bd6c8(void)

void FUN_1463bd6c8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415495a0();
  FUN_14069c8d6(uVar1,&PTR_s_GetAtmosphereTransmitanceOnGroun_14a87adf0,0x1a);
  return;
}



// FUNCTION 1463bd6f0 FUN_1463bd6f0 body=135 status=ok
// SIG undefined FUN_1463bd6f0(void)

void FUN_1463bd6f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_14010df0a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if ((((iVar1 < 0x2e) || ((*(byte *)(param_2 + 5) & 1) == 0)) &&
      ((*(byte *)(param_2 + 5) & 4) == 0)) && ((*(byte *)(param_1 + 0x3a0) & 1) != 0)) {
    return;
  }
  FUN_1402ac1b3(param_2,param_1 + 0x390);
  return;
}



// FUNCTION 1463bd777 FUN_1463bd777 body=47 status=ok
// SIG undefined FUN_1463bd777(void)

longlong FUN_1463bd777(void)

{
  if (DAT_14cad2d20 == 0) {
    FUN_14073dd9a(&DAT_14cad2d20,&PTR_LAB_14a87c238);
  }
  return DAT_14cad2d20;
}



// FUNCTION 1463bd7b2 FUN_1463bd7b2 body=276 status=ok
// SIG undefined FUN_1463bd7b2(void)

void FUN_1463bd7b2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  FUN_14098242c(param_1,param_2);
  if (0x1ff < (int)param_2[8]) {
    iVar1 = FUN_1448332aa(param_2);
    if (iVar1 < 9) {
      memset(local_c8,0,0x90);
      uVar2 = FUN_147a3a7b3(param_2,local_c8);
      uVar2 = FUN_147a3a7b3(uVar2,local_98);
      FUN_147a3a7b3(uVar2,local_68);
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar1 < 0x35) {
      *(byte *)(param_1 + 0x2d8) = (byte)(*(uint *)(param_1 + 0x2d4) >> 7) & 2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463bd8c7 FUN_1463bd8c7 body=49 status=ok
// SIG undefined FUN_1463bd8c7(void)

longlong FUN_1463bd8c7(void)

{
  if (DAT_14cad2df8 == 0) {
    FUN_14073dd9a(&DAT_14cad2df8,&PTR_LAB_14a87d3f0);
  }
  return DAT_14cad2df8;
}



// FUNCTION 1463bd8f8 FUN_1463bd8f8 body=47 status=ok
// SIG undefined FUN_1463bd8f8(void)

longlong FUN_1463bd8f8(void)

{
  if (DAT_14cad2dd0 == 0) {
    FUN_14000fc22(&DAT_14cad2dd0,&PTR_FUN_14a87d0b0);
  }
  return DAT_14cad2dd0;
}



// FUNCTION 1463bd927 FUN_1463bd927 body=47 status=ok
// SIG undefined FUN_1463bd927(void)

longlong FUN_1463bd927(void)

{
  if (DAT_14cad2dd8 == 0) {
    FUN_14000fc22(&DAT_14cad2dd8,&PTR_FUN_14a87d130);
  }
  return DAT_14cad2dd8;
}



// FUNCTION 1463bd956 FUN_1463bd956 body=47 status=ok
// SIG undefined FUN_1463bd956(void)

longlong FUN_1463bd956(void)

{
  if (DAT_14cad2de0 == 0) {
    FUN_14000fc22(&DAT_14cad2de0,&PTR_FUN_14a87d1c8);
  }
  return DAT_14cad2de0;
}



// FUNCTION 1463bd985 FUN_1463bd985 body=47 status=ok
// SIG undefined FUN_1463bd985(void)

longlong FUN_1463bd985(void)

{
  if (DAT_14cad2de8 == 0) {
    FUN_14000fc22(&DAT_14cad2de8,&PTR_FUN_14a87d2a0);
  }
  return DAT_14cad2de8;
}



// FUNCTION 1463bd9b4 FUN_1463bd9b4 body=34 status=ok
// SIG undefined FUN_1463bd9b4(void)

void FUN_1463bd9b4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140f974a4();
  FUN_14069c8d6(uVar1,&PTR_s_GetScaledSphereRadius_14a87d2e0,4);
  return;
}



// FUNCTION 1463bd9db FUN_1463bd9db body=49 status=ok
// SIG undefined FUN_1463bd9db(void)

longlong FUN_1463bd9db(void)

{
  if (DAT_14cad2e08 == 0) {
    FUN_1409ce572(&DAT_14cad2e08,&PTR_FUN_14a87e020);
  }
  return DAT_14cad2e08;
}



// FUNCTION 1463bda0c FUN_1463bda0c body=35 status=ok
// SIG undefined FUN_1463bda0c(void)

void FUN_1463bda0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a87e160;
  return;
}



// FUNCTION 1463bda2f FUN_1463bda2f body=47 status=ok
// SIG undefined FUN_1463bda2f(void)

longlong FUN_1463bda2f(void)

{
  if (DAT_14cad2e40 == 0) {
    FUN_14073dd9a(&DAT_14cad2e40,&PTR_LAB_14a87e118);
  }
  return DAT_14cad2e40;
}



// FUNCTION 1463bda5e FUN_1463bda5e body=55 status=ok
// SIG undefined FUN_1463bda5e(void)

void FUN_1463bda5e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2e58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2e58 = FUN_140002ddd(FUN_1463bda95,uVar1,L"SplineCurves");
  }
  return;
}



// FUNCTION 1463bda95 FUN_1463bda95 body=49 status=ok
// SIG undefined FUN_1463bda95(void)

longlong FUN_1463bda95(void)

{
  if (DAT_14cad2e50 == 0) {
    FUN_14086a14e(&DAT_14cad2e50,&PTR_FUN_14a87e5e8);
  }
  return DAT_14cad2e50;
}



// FUNCTION 1463bdac6 FUN_1463bdac6 body=48 status=ok
// SIG undefined FUN_1463bdac6(void)

void FUN_1463bdac6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14a898340;
  return;
}



// FUNCTION 1463bdaf6 FUN_1463bdaf6 body=55 status=ok
// SIG undefined FUN_1463bdaf6(void)

void FUN_1463bdaf6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cad2e70 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cad2e70 = FUN_140002ddd(FUN_1463bdb2d,uVar1,L"SplinePoint");
  }
  return;
}



// FUNCTION 1463bdb2d FUN_1463bdb2d body=49 status=ok
// SIG undefined FUN_1463bdb2d(void)

longlong FUN_1463bdb2d(void)

{
  if (DAT_14cad2e68 == 0) {
    FUN_14086a14e(&DAT_14cad2e68,&PTR_FUN_14a87e848);
  }
  return DAT_14cad2e68;
}



// FUNCTION 1463bdb5e FUN_1463bdb5e body=48 status=ok
// SIG undefined FUN_1463bdb5e(void)

void FUN_1463bdb5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14a8984a0;
  return;
}



// FUNCTION 1463bdb8e FUN_1463bdb8e body=47 status=ok
// SIG undefined FUN_1463bdb8e(void)

longlong FUN_1463bdb8e(void)

{
  if (DAT_14cad2e80 == 0) {
    FUN_14000fc22(&DAT_14cad2e80,&PTR_FUN_14a87e930);
  }
  return DAT_14cad2e80;
}



// FUNCTION 1463bdbbd FUN_1463bdbbd body=47 status=ok
// SIG undefined FUN_1463bdbbd(void)

longlong FUN_1463bdbbd(void)

{
  if (DAT_14cad2e88 == 0) {
    FUN_14000fc22(&DAT_14cad2e88,&PTR_FUN_14a87ea58);
  }
  return DAT_14cad2e88;
}



// FUNCTION 1463bdbec FUN_1463bdbec body=47 status=ok
// SIG undefined FUN_1463bdbec(void)

longlong FUN_1463bdbec(void)

{
  if (DAT_14cad2e90 == 0) {
    FUN_14000fc22(&DAT_14cad2e90,&PTR_FUN_14a87eaf8);
  }
  return DAT_14cad2e90;
}



// FUNCTION 1463bdc1b FUN_1463bdc1b body=47 status=ok
// SIG undefined FUN_1463bdc1b(void)

longlong FUN_1463bdc1b(void)

{
  if (DAT_14cad2e98 == 0) {
    FUN_14000fc22(&DAT_14cad2e98,&PTR_FUN_14a87ec38);
  }
  return DAT_14cad2e98;
}



// FUNCTION 1463bdc4a FUN_1463bdc4a body=47 status=ok
// SIG undefined FUN_1463bdc4a(void)

longlong FUN_1463bdc4a(void)

{
  if (DAT_14cad2ea0 == 0) {
    FUN_14000fc22(&DAT_14cad2ea0,&PTR_FUN_14a87eda8);
  }
  return DAT_14cad2ea0;
}



// FUNCTION 1463bdc79 FUN_1463bdc79 body=47 status=ok
// SIG undefined FUN_1463bdc79(void)

longlong FUN_1463bdc79(void)

{
  if (DAT_14cad2ea8 == 0) {
    FUN_14000fc22(&DAT_14cad2ea8,&PTR_FUN_14a87ee48);
  }
  return DAT_14cad2ea8;
}



// FUNCTION 1463bdca8 FUN_1463bdca8 body=47 status=ok
// SIG undefined FUN_1463bdca8(void)

longlong FUN_1463bdca8(void)

{
  if (DAT_14cad2eb0 == 0) {
    FUN_14000fc22(&DAT_14cad2eb0,&PTR_FUN_14a87eee8);
  }
  return DAT_14cad2eb0;
}



// FUNCTION 1463bdcd7 FUN_1463bdcd7 body=47 status=ok
// SIG undefined FUN_1463bdcd7(void)

longlong FUN_1463bdcd7(void)

{
  if (DAT_14cad2eb8 == 0) {
    FUN_14000fc22(&DAT_14cad2eb8,&PTR_FUN_14a87f130);
  }
  return DAT_14cad2eb8;
}



// FUNCTION 1463bdd06 FUN_1463bdd06 body=47 status=ok
// SIG undefined FUN_1463bdd06(void)

longlong FUN_1463bdd06(void)

{
  if (DAT_14cad2ec0 == 0) {
    FUN_14000fc22(&DAT_14cad2ec0,&PTR_FUN_14a87f2e0);
  }
  return DAT_14cad2ec0;
}



// FUNCTION 1463bdd35 FUN_1463bdd35 body=47 status=ok
// SIG undefined FUN_1463bdd35(void)

longlong FUN_1463bdd35(void)

{
  if (DAT_14cad2ec8 == 0) {
    FUN_14000fc22(&DAT_14cad2ec8,&PTR_FUN_14a87f648);
  }
  return DAT_14cad2ec8;
}



// FUNCTION 1463bdd64 FUN_1463bdd64 body=47 status=ok
// SIG undefined FUN_1463bdd64(void)

longlong FUN_1463bdd64(void)

{
  if (DAT_14cad2ed0 == 0) {
    FUN_14000fc22(&DAT_14cad2ed0,&PTR_FUN_14a87f9e0);
  }
  return DAT_14cad2ed0;
}



// FUNCTION 1463bdd93 FUN_1463bdd93 body=47 status=ok
// SIG undefined FUN_1463bdd93(void)

longlong FUN_1463bdd93(void)

{
  if (DAT_14cad2ed8 == 0) {
    FUN_14000fc22(&DAT_14cad2ed8,&PTR_FUN_14a87fc20);
  }
  return DAT_14cad2ed8;
}



// FUNCTION 1463bddc2 FUN_1463bddc2 body=47 status=ok
// SIG undefined FUN_1463bddc2(void)

longlong FUN_1463bddc2(void)

{
  if (DAT_14cad2ee0 == 0) {
    FUN_14000fc22(&DAT_14cad2ee0,&PTR_FUN_14a87fea0);
  }
  return DAT_14cad2ee0;
}



// FUNCTION 1463bddf1 FUN_1463bddf1 body=47 status=ok
// SIG undefined FUN_1463bddf1(void)

longlong FUN_1463bddf1(void)

{
  if (DAT_14cad2ee8 == 0) {
    FUN_14000fc22(&DAT_14cad2ee8,&PTR_FUN_14a880168);
  }
  return DAT_14cad2ee8;
}



// FUNCTION 1463bde20 FUN_1463bde20 body=47 status=ok
// SIG undefined FUN_1463bde20(void)

longlong FUN_1463bde20(void)

{
  if (DAT_14cad2ef0 == 0) {
    FUN_14000fc22(&DAT_14cad2ef0,&PTR_FUN_14a8802b0);
  }
  return DAT_14cad2ef0;
}



// FUNCTION 1463bde4f FUN_1463bde4f body=47 status=ok
// SIG undefined FUN_1463bde4f(void)

longlong FUN_1463bde4f(void)

{
  if (DAT_14cad2ef8 == 0) {
    FUN_14000fc22(&DAT_14cad2ef8,&PTR_FUN_14a8803a8);
  }
  return DAT_14cad2ef8;
}



// FUNCTION 1463bde7e FUN_1463bde7e body=47 status=ok
// SIG undefined FUN_1463bde7e(void)

longlong FUN_1463bde7e(void)

{
  if (DAT_14cad2f00 == 0) {
    FUN_14000fc22(&DAT_14cad2f00,&PTR_FUN_14a8804f0);
  }
  return DAT_14cad2f00;
}



// FUNCTION 1463bdead FUN_1463bdead body=47 status=ok
// SIG undefined FUN_1463bdead(void)

longlong FUN_1463bdead(void)

{
  if (DAT_14cad2f08 == 0) {
    FUN_14000fc22(&DAT_14cad2f08,&PTR_FUN_14a880630);
  }
  return DAT_14cad2f08;
}



// FUNCTION 1463bdedc FUN_1463bdedc body=47 status=ok
// SIG undefined FUN_1463bdedc(void)

longlong FUN_1463bdedc(void)

{
  if (DAT_14cad2f10 == 0) {
    FUN_14000fc22(&DAT_14cad2f10,&PTR_FUN_14a880768);
  }
  return DAT_14cad2f10;
}



// FUNCTION 1463bdf0b FUN_1463bdf0b body=47 status=ok
// SIG undefined FUN_1463bdf0b(void)

longlong FUN_1463bdf0b(void)

{
  if (DAT_14cad2f18 == 0) {
    FUN_14000fc22(&DAT_14cad2f18,&PTR_FUN_14a8808b0);
  }
  return DAT_14cad2f18;
}



// FUNCTION 1463bdf3a FUN_1463bdf3a body=47 status=ok
// SIG undefined FUN_1463bdf3a(void)

longlong FUN_1463bdf3a(void)

{
  if (DAT_14cad2f20 == 0) {
    FUN_14000fc22(&DAT_14cad2f20,&PTR_FUN_14a8809a0);
  }
  return DAT_14cad2f20;
}



// FUNCTION 1463bdf69 FUN_1463bdf69 body=47 status=ok
// SIG undefined FUN_1463bdf69(void)

longlong FUN_1463bdf69(void)

{
  if (DAT_14cad2f28 == 0) {
    FUN_14000fc22(&DAT_14cad2f28,&PTR_FUN_14a880ae0);
  }
  return DAT_14cad2f28;
}



// FUNCTION 1463bdf98 FUN_1463bdf98 body=47 status=ok
// SIG undefined FUN_1463bdf98(void)

longlong FUN_1463bdf98(void)

{
  if (DAT_14cad2f30 == 0) {
    FUN_14000fc22(&DAT_14cad2f30,&PTR_FUN_14a880c78);
  }
  return DAT_14cad2f30;
}



// FUNCTION 1463bdfc7 FUN_1463bdfc7 body=47 status=ok
// SIG undefined FUN_1463bdfc7(void)

longlong FUN_1463bdfc7(void)

{
  if (DAT_14cad2f38 == 0) {
    FUN_14000fc22(&DAT_14cad2f38,&PTR_FUN_14a880dc0);
  }
  return DAT_14cad2f38;
}



// FUNCTION 1463bdff6 FUN_1463bdff6 body=47 status=ok
// SIG undefined FUN_1463bdff6(void)

longlong FUN_1463bdff6(void)

{
  if (DAT_14cad2f40 == 0) {
    FUN_14000fc22(&DAT_14cad2f40,&PTR_FUN_14a880f08);
  }
  return DAT_14cad2f40;
}



// FUNCTION 1463be025 FUN_1463be025 body=47 status=ok
// SIG undefined FUN_1463be025(void)

longlong FUN_1463be025(void)

{
  if (DAT_14cad2f48 == 0) {
    FUN_14000fc22(&DAT_14cad2f48,&PTR_FUN_14a880ff8);
  }
  return DAT_14cad2f48;
}



// FUNCTION 1463be054 FUN_1463be054 body=47 status=ok
// SIG undefined FUN_1463be054(void)

longlong FUN_1463be054(void)

{
  if (DAT_14cad2f50 == 0) {
    FUN_14000fc22(&DAT_14cad2f50,&PTR_FUN_14a881130);
  }
  return DAT_14cad2f50;
}



// FUNCTION 1463be083 FUN_1463be083 body=47 status=ok
// SIG undefined FUN_1463be083(void)

longlong FUN_1463be083(void)

{
  if (DAT_14cad2f58 == 0) {
    FUN_14000fc22(&DAT_14cad2f58,&PTR_FUN_14a881268);
  }
  return DAT_14cad2f58;
}



// FUNCTION 1463be0b2 FUN_1463be0b2 body=47 status=ok
// SIG undefined FUN_1463be0b2(void)

longlong FUN_1463be0b2(void)

{
  if (DAT_14cad2f60 == 0) {
    FUN_14000fc22(&DAT_14cad2f60,&PTR_FUN_14a881398);
  }
  return DAT_14cad2f60;
}



// FUNCTION 1463be0e1 FUN_1463be0e1 body=47 status=ok
// SIG undefined FUN_1463be0e1(void)

longlong FUN_1463be0e1(void)

{
  if (DAT_14cad2f68 == 0) {
    FUN_14000fc22(&DAT_14cad2f68,&PTR_FUN_14a881508);
  }
  return DAT_14cad2f68;
}



// FUNCTION 1463be110 FUN_1463be110 body=47 status=ok
// SIG undefined FUN_1463be110(void)

longlong FUN_1463be110(void)

{
  if (DAT_14cad2f70 == 0) {
    FUN_14000fc22(&DAT_14cad2f70,&PTR_FUN_14a881640);
  }
  return DAT_14cad2f70;
}



// FUNCTION 1463be13f FUN_1463be13f body=47 status=ok
// SIG undefined FUN_1463be13f(void)

longlong FUN_1463be13f(void)

{
  if (DAT_14cad2f78 == 0) {
    FUN_14000fc22(&DAT_14cad2f78,&PTR_FUN_14a881728);
  }
  return DAT_14cad2f78;
}



// FUNCTION 1463be16e FUN_1463be16e body=47 status=ok
// SIG undefined FUN_1463be16e(void)

longlong FUN_1463be16e(void)

{
  if (DAT_14cad2f80 == 0) {
    FUN_14000fc22(&DAT_14cad2f80,&PTR_FUN_14a881818);
  }
  return DAT_14cad2f80;
}



// FUNCTION 1463be19d FUN_1463be19d body=47 status=ok
// SIG undefined FUN_1463be19d(void)

longlong FUN_1463be19d(void)

{
  if (DAT_14cad2f88 == 0) {
    FUN_14000fc22(&DAT_14cad2f88,&PTR_FUN_14a881940);
  }
  return DAT_14cad2f88;
}



// FUNCTION 1463be1cc FUN_1463be1cc body=47 status=ok
// SIG undefined FUN_1463be1cc(void)

longlong FUN_1463be1cc(void)

{
  if (DAT_14cad2f90 == 0) {
    FUN_14000fc22(&DAT_14cad2f90,&PTR_FUN_14a881a68);
  }
  return DAT_14cad2f90;
}



// FUNCTION 1463be1fb FUN_1463be1fb body=47 status=ok
// SIG undefined FUN_1463be1fb(void)

longlong FUN_1463be1fb(void)

{
  if (DAT_14cad2f98 == 0) {
    FUN_14000fc22(&DAT_14cad2f98,&PTR_FUN_14a881b58);
  }
  return DAT_14cad2f98;
}



// FUNCTION 1463be22a FUN_1463be22a body=47 status=ok
// SIG undefined FUN_1463be22a(void)

longlong FUN_1463be22a(void)

{
  if (DAT_14cad2fa0 == 0) {
    FUN_14000fc22(&DAT_14cad2fa0,&PTR_FUN_14a881c48);
  }
  return DAT_14cad2fa0;
}



// FUNCTION 1463be259 FUN_1463be259 body=47 status=ok
// SIG undefined FUN_1463be259(void)

longlong FUN_1463be259(void)

{
  if (DAT_14cad2fa8 == 0) {
    FUN_14000fc22(&DAT_14cad2fa8,&PTR_FUN_14a881d30);
  }
  return DAT_14cad2fa8;
}



// FUNCTION 1463be288 FUN_1463be288 body=47 status=ok
// SIG undefined FUN_1463be288(void)

longlong FUN_1463be288(void)

{
  if (DAT_14cad2fb0 == 0) {
    FUN_14000fc22(&DAT_14cad2fb0,&PTR_FUN_14a881e68);
  }
  return DAT_14cad2fb0;
}



// FUNCTION 1463be2b7 FUN_1463be2b7 body=47 status=ok
// SIG undefined FUN_1463be2b7(void)

longlong FUN_1463be2b7(void)

{
  if (DAT_14cad2fb8 == 0) {
    FUN_14000fc22(&DAT_14cad2fb8,&PTR_FUN_14a881fc0);
  }
  return DAT_14cad2fb8;
}



// FUNCTION 1463be2e6 FUN_1463be2e6 body=47 status=ok
// SIG undefined FUN_1463be2e6(void)

longlong FUN_1463be2e6(void)

{
  if (DAT_14cad2fc0 == 0) {
    FUN_14000fc22(&DAT_14cad2fc0,&PTR_FUN_14a882148);
  }
  return DAT_14cad2fc0;
}



// FUNCTION 1463be315 FUN_1463be315 body=47 status=ok
// SIG undefined FUN_1463be315(void)

longlong FUN_1463be315(void)

{
  if (DAT_14cad2fc8 == 0) {
    FUN_14000fc22(&DAT_14cad2fc8,&PTR_FUN_14a882280);
  }
  return DAT_14cad2fc8;
}



// FUNCTION 1463be344 FUN_1463be344 body=47 status=ok
// SIG undefined FUN_1463be344(void)

longlong FUN_1463be344(void)

{
  if (DAT_14cad2fd0 == 0) {
    FUN_14000fc22(&DAT_14cad2fd0,&PTR_FUN_14a8823b8);
  }
  return DAT_14cad2fd0;
}



// FUNCTION 1463be373 FUN_1463be373 body=47 status=ok
// SIG undefined FUN_1463be373(void)

longlong FUN_1463be373(void)

{
  if (DAT_14cad2fd8 == 0) {
    FUN_14000fc22(&DAT_14cad2fd8,&PTR_FUN_14a8824e8);
  }
  return DAT_14cad2fd8;
}



// FUNCTION 1463be3a2 FUN_1463be3a2 body=47 status=ok
// SIG undefined FUN_1463be3a2(void)

longlong FUN_1463be3a2(void)

{
  if (DAT_14cad2fe0 == 0) {
    FUN_14000fc22(&DAT_14cad2fe0,&PTR_FUN_14a882658);
  }
  return DAT_14cad2fe0;
}



// FUNCTION 1463be3d1 FUN_1463be3d1 body=47 status=ok
// SIG undefined FUN_1463be3d1(void)

longlong FUN_1463be3d1(void)

{
  if (DAT_14cad2fe8 == 0) {
    FUN_14000fc22(&DAT_14cad2fe8,&PTR_FUN_14a8826f0);
  }
  return DAT_14cad2fe8;
}



// FUNCTION 1463be400 FUN_1463be400 body=47 status=ok
// SIG undefined FUN_1463be400(void)

longlong FUN_1463be400(void)

{
  if (DAT_14cad2ff0 == 0) {
    FUN_14000fc22(&DAT_14cad2ff0,&PTR_FUN_14a882790);
  }
  return DAT_14cad2ff0;
}



// FUNCTION 1463be42f FUN_1463be42f body=47 status=ok
// SIG undefined FUN_1463be42f(void)

longlong FUN_1463be42f(void)

{
  if (DAT_14cad2ff8 == 0) {
    FUN_14000fc22(&DAT_14cad2ff8,&PTR_FUN_14a8828d0);
  }
  return DAT_14cad2ff8;
}



// FUNCTION 1463be45e FUN_1463be45e body=47 status=ok
// SIG undefined FUN_1463be45e(void)

longlong FUN_1463be45e(void)

{
  if (DAT_14cad3000 == 0) {
    FUN_14000fc22(&DAT_14cad3000,&PTR_FUN_14a882a08);
  }
  return DAT_14cad3000;
}



// FUNCTION 1463be48d FUN_1463be48d body=47 status=ok
// SIG undefined FUN_1463be48d(void)

longlong FUN_1463be48d(void)

{
  if (DAT_14cad3008 == 0) {
    FUN_14000fc22(&DAT_14cad3008,&PTR_FUN_14a882b38);
  }
  return DAT_14cad3008;
}



// FUNCTION 1463be4bc FUN_1463be4bc body=47 status=ok
// SIG undefined FUN_1463be4bc(void)

longlong FUN_1463be4bc(void)

{
  if (DAT_14cad3010 == 0) {
    FUN_14000fc22(&DAT_14cad3010,&PTR_FUN_14a882ca8);
  }
  return DAT_14cad3010;
}



// FUNCTION 1463be4eb FUN_1463be4eb body=47 status=ok
// SIG undefined FUN_1463be4eb(void)

longlong FUN_1463be4eb(void)

{
  if (DAT_14cad3018 == 0) {
    FUN_14000fc22(&DAT_14cad3018,&PTR_FUN_14a882dd8);
  }
  return DAT_14cad3018;
}



// FUNCTION 1463be51a FUN_1463be51a body=47 status=ok
// SIG undefined FUN_1463be51a(void)

longlong FUN_1463be51a(void)

{
  if (DAT_14cad3020 == 0) {
    FUN_14000fc22(&DAT_14cad3020,&PTR_FUN_14a882f00);
  }
  return DAT_14cad3020;
}



// FUNCTION 1463be549 FUN_1463be549 body=47 status=ok
// SIG undefined FUN_1463be549(void)

longlong FUN_1463be549(void)

{
  if (DAT_14cad3028 == 0) {
    FUN_14000fc22(&DAT_14cad3028,&PTR_FUN_14a883020);
  }
  return DAT_14cad3028;
}


