// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14510d450 FUN_14510d450 body=3 status=ok
// SIG undefined FUN_14510d450(void)

void FUN_14510d450(void)

{
  return;
}



// FUNCTION 14510d460 FUN_14510d460 body=35 status=ok
// SIG undefined FUN_14510d460(void)

void FUN_14510d460(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14510d490 FUN_14510d490 body=295 status=ok
// SIG undefined FUN_14510d490(void)

undefined4 FUN_14510d490(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  void *_Dst;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  FUN_14510dae0();
  uVar5 = param_4 & 0xff;
  *(int *)(param_1 + 7) = (int)uVar5;
  cVar2 = *(char *)(param_3 + 0x14);
  *(char *)((longlong)param_1 + 0x44) = cVar2;
  if (((param_4 & 0x8000) != 0) && (cVar2 == '\0')) {
    uVar6 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar6;
    *(uint *)(param_1 + 7) = uVar6;
  }
  iVar7 = (int)uVar5;
  if (iVar7 == 0) {
    uVar3 = 2;
  }
  else {
    uVar6 = *(uint *)((longlong)param_1 + 0x3c);
    fVar1 = *(float *)(param_3 + 0x10);
    _Dst = (void *)(**(code **)(*param_2 + 8))
                             (param_2,uVar5 << 3,
                              "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\DSP\\AkDelayLineMemory.h"
                              ,0x3f);
    *param_1 = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
LAB_14510d524:
      uVar3 = 0x34;
    }
    else {
      memset(_Dst,0,(ulonglong)(uint)(iVar7 * 8));
      *(int *)(param_1 + 2) = iVar7;
      uVar6 = (int)(longlong)((float)uVar6 * fVar1) + 3U & 0xfffffffc;
      uVar5 = 0;
      *(uint *)(param_1 + 1) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      if ((uVar6 != 0) && (iVar7 != 0)) {
        do {
          uVar4 = (**(code **)(*param_2 + 8))
                            (param_2,(ulonglong)*(uint *)(param_1 + 1) << 2,
                             "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\DSP\\AkDelayLineMemory.h"
                             ,0x54);
          *(undefined8 *)(*param_1 + uVar5 * 8) = uVar4;
          if (*(longlong *)(*param_1 + uVar5 * 8) == 0) goto LAB_14510d524;
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 2));
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 14510d5c0 FUN_14510d5c0 body=111 status=ok
// SIG undefined FUN_14510d5c0(void)

void FUN_14510d5c0(longlong *param_1)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  
  if ((int)param_1[1] == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  uVar2 = 0;
  if ((int)param_1[2] == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  do {
    _Dst = *(void **)(*param_1 + uVar2 * 8);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,(ulonglong)(uint)((int)param_1[1] << 2));
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 2));
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 14510d630 thunk_FUN_14510dae0 body=5 status=ok
// SIG undefined thunk_FUN_14510dae0(void)

void thunk_FUN_14510dae0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*param_1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if ((int)param_1[2] != 0) {
    do {
      if (*(longlong *)(uVar1 * 8 + *param_1) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(uVar1 * 8 + *param_1) = 0;
      }
      uVar2 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 2));
  }
  (**(code **)(*param_2 + 0x10))(param_2,*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14510d640 FUN_14510d640 body=109 status=ok
// SIG undefined FUN_14510d640(void)

void FUN_14510d640(longlong param_1,char param_2,float param_3)

{
  float fVar1;
  
  if ((param_2 != '\0') && (param_3 != 0.0)) {
    fVar1 = log10f(param_3);
    if (-0.6 <= fVar1 * 20.0) {
      fVar1 = 100.0;
    }
    else {
      fVar1 = -60.0 / (fVar1 * 20.0);
    }
    *(int *)(param_1 + 0x40) = (int)(longlong)((float)*(uint *)(param_1 + 8) * fVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 8);
  return;
}



// FUNCTION 14510d6b0 FUN_14510d6b0 body=1069 status=ok
// SIG undefined FUN_14510d6b0(void)

void FUN_14510d6b0(longlong *param_1,longlong *param_2,float *param_3)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  
  uVar11 = *(uint *)(param_1 + 8);
  if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    goto LAB_14510d7e3;
  }
  uVar16 = *(uint *)(param_1 + 3);
  if (uVar16 == 0) {
    if (*(short *)((longlong)param_2 + 0x12) == 0) goto LAB_14510d7e3;
LAB_14510d705:
    *(uint *)(param_1 + 3) = uVar11;
    *(uint *)((longlong)param_1 + 0x1c) = uVar11;
    uVar16 = uVar11;
  }
  else {
    if ((uVar16 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) goto LAB_14510d705;
    uVar13 = *(uint *)((longlong)param_1 + 0x1c);
    if (uVar13 < uVar11) {
      *(uint *)((longlong)param_1 + 0x1c) = uVar11;
      uVar16 = (uVar16 - uVar13) + uVar11;
      *(uint *)(param_1 + 3) = uVar16;
    }
  }
  uVar13 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
  uVar11 = uVar16;
  if (uVar13 <= uVar16) {
    uVar11 = uVar13;
  }
  *(uint *)(param_1 + 3) = uVar16 - uVar11;
  uVar1 = *(ushort *)(param_2 + 2);
  uVar10 = *(ushort *)((longlong)param_2 + 0x12);
  uVar17 = (ulonglong)*(byte *)(param_2 + 1);
  if (uVar1 <= uVar10) {
    uVar10 = uVar1;
  }
  iVar14 = (uint)uVar1 - (uint)uVar10;
  if (iVar14 != 0) {
    if (*(byte *)(param_2 + 1) != 0) {
      lVar18 = 0;
      do {
        memset((void *)(*param_2 +
                       ((ulonglong)*(ushort *)(param_2 + 2) * lVar18 + (ulonglong)(uint)uVar10) * 4)
               ,0,(ulonglong)(uint)(iVar14 * 4));
        lVar18 = lVar18 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    *(short *)((longlong)param_2 + 0x12) = (short)param_2[2];
  }
  if ((int)param_1[3] != 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
  }
LAB_14510d7e3:
  uVar1 = *(ushort *)((longlong)param_2 + 0x12);
  if (*(char *)(param_3 + 3) == '\0') {
    *param_3 = 0.0;
  }
  uVar11 = 0;
  uVar17 = 0;
  if ((int)param_1[7] != 0) {
    fVar56 = 1.0 / (float)uVar1;
    do {
      uVar13 = 0;
      fVar39 = *(float *)(param_1 + 5);
      fVar40 = *(float *)(param_1 + 4);
      fVar38 = *(float *)((longlong)param_1 + 0x24);
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      uVar16 = *(uint *)(param_1 + 1);
      fVar35 = (param_3[2] - fVar39) * fVar56;
      fVar37 = (*param_3 - fVar40) * fVar56;
      fVar21 = fVar35 + fVar39;
      fVar53 = fVar35 * 4.0;
      fVar28 = fVar35 + fVar21;
      fVar54 = fVar37 * 4.0;
      fVar22 = fVar37 + fVar40;
      fVar35 = fVar35 + fVar28;
      pfVar20 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar17 * 4);
      fVar29 = fVar37 + fVar22;
      fVar37 = fVar29 + fVar37;
      fVar36 = (param_3[1] - fVar38) * fVar56;
      fVar55 = fVar36 * 4.0;
      fVar23 = fVar36 + fVar38;
      fVar30 = fVar36 + fVar23;
      fVar36 = fVar36 + fVar30;
      fVar24 = 1.0 - fVar38;
      fVar25 = 1.0 - fVar23;
      fVar26 = 1.0 - fVar30;
      fVar27 = 1.0 - fVar36;
      fVar41 = fVar38;
      fVar42 = fVar23;
      fVar43 = fVar30;
      fVar44 = fVar36;
      fVar45 = fVar39;
      fVar46 = fVar21;
      fVar47 = fVar28;
      fVar48 = fVar35;
      fVar49 = fVar40;
      fVar50 = fVar22;
      fVar51 = fVar29;
      fVar52 = fVar37;
      if (uVar1 != 0) {
        do {
          uVar15 = uVar16 - uVar11;
          if (uVar1 - uVar13 <= uVar15) {
            uVar15 = uVar1 - uVar13;
          }
          pfVar19 = (float *)(*(longlong *)(*param_1 + uVar17 * 8) + (ulonglong)uVar11 * 4);
          for (uVar12 = uVar15 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            fVar2 = *pfVar20;
            fVar3 = pfVar20[1];
            fVar4 = pfVar20[2];
            fVar5 = pfVar20[3];
            fVar6 = *pfVar19;
            fVar7 = pfVar19[1];
            fVar8 = pfVar19[2];
            fVar9 = pfVar19[3];
            fVar38 = fVar38 + fVar55;
            fVar23 = fVar23 + fVar55;
            fVar30 = fVar30 + fVar55;
            fVar36 = fVar36 + fVar55;
            fVar31 = fVar2 * fVar24;
            fVar32 = fVar3 * fVar25;
            fVar33 = fVar4 * fVar26;
            fVar34 = fVar5 * fVar27;
            fVar39 = fVar39 + fVar53;
            fVar21 = fVar21 + fVar53;
            fVar28 = fVar28 + fVar53;
            fVar35 = fVar35 + fVar53;
            fVar40 = fVar40 + fVar54;
            fVar22 = fVar22 + fVar54;
            fVar29 = fVar29 + fVar54;
            fVar37 = fVar37 + fVar54;
            fVar24 = 1.0 - fVar38;
            fVar25 = 1.0 - fVar23;
            fVar26 = 1.0 - fVar30;
            fVar27 = 1.0 - fVar36;
            *pfVar20 = (fVar31 + fVar6 * fVar41) * fVar45;
            pfVar20[1] = (fVar32 + fVar7 * fVar42) * fVar46;
            pfVar20[2] = (fVar33 + fVar8 * fVar43) * fVar47;
            pfVar20[3] = (fVar34 + fVar9 * fVar44) * fVar48;
            pfVar20 = pfVar20 + 4;
            *pfVar19 = fVar6 * fVar49 + fVar2;
            pfVar19[1] = fVar7 * fVar50 + fVar3;
            pfVar19[2] = fVar8 * fVar51 + fVar4;
            pfVar19[3] = fVar9 * fVar52 + fVar5;
            pfVar19 = pfVar19 + 4;
            fVar41 = fVar38;
            fVar42 = fVar23;
            fVar43 = fVar30;
            fVar44 = fVar36;
            fVar45 = fVar39;
            fVar46 = fVar21;
            fVar47 = fVar28;
            fVar48 = fVar35;
            fVar49 = fVar40;
            fVar50 = fVar22;
            fVar51 = fVar29;
            fVar52 = fVar37;
          }
          uVar12 = uVar15 + uVar11;
          uVar13 = uVar13 + uVar15;
          uVar11 = 0;
          if (uVar12 != uVar16) {
            uVar11 = uVar12;
          }
        } while (uVar13 < uVar1);
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < *(uint *)(param_1 + 7));
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar11;
  lVar18 = *(longlong *)(param_3 + 2);
  param_1[4] = *(longlong *)param_3;
  param_1[5] = lVar18;
  param_1[6] = *(longlong *)(param_3 + 4);
  return;
}



// FUNCTION 14510dae0 FUN_14510dae0 body=161 status=ok
// SIG undefined FUN_14510dae0(void)

void FUN_14510dae0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*param_1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if ((int)param_1[2] != 0) {
    do {
      if (*(longlong *)(uVar1 * 8 + *param_1) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(uVar1 * 8 + *param_1) = 0;
      }
      uVar2 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 2));
  }
  (**(code **)(*param_2 + 0x10))(param_2,*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14510db90 FUN_14510db90 body=433 status=ok
// SIG undefined FUN_14510db90(void)

undefined8
FUN_14510db90(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  *(longlong *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_4 + 0x1c);
  cVar1 = *(char *)(param_4 + 0x1d);
  *(char *)(param_1 + 0x51) = cVar1;
  *(uint *)(param_1 + 0x1c) = (uint)(byte)param_5[1];
  fVar7 = (float)*param_5;
  *(float *)(param_1 + 0x20) = fVar7;
  fVar6 = *(float *)(param_4 + 0x10);
  *(float *)(param_1 + 0x40) = fVar6;
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  fVar6 = expf(-2.2 / (fVar6 * fVar7));
  *(float *)(param_1 + 0x44) = fVar6;
  fVar6 = *(float *)(param_4 + 0x14);
  *(float *)(param_1 + 0x48) = fVar6;
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  fVar6 = expf(-2.2 / (fVar6 * fVar7));
  *(float *)(param_1 + 0x4c) = fVar6;
  uVar5 = param_5[1] & 0xff;
  *(uint *)(param_1 + 0x24) = uVar5;
  if ((param_5[1] & 0xf00) == 0x300) {
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (((param_5[1] & 0x8000) != 0) && (*(char *)(param_4 + 0x1c) == '\0')) {
      uVar5 = uVar5 - 1;
      *(uint *)(param_1 + 0x24) = uVar5;
    }
  }
  if (cVar1 != '\0') {
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x2c) = uVar5;
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)uVar5 << 3,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkExpander\\AkExpanderFX.cpp"
                     ,0x76);
  *(longlong *)(param_1 + 0x38) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x34;
  }
  else {
    fVar6 = expf(-43.066322 / *(float *)(param_1 + 0x20));
    *(float *)(param_1 + 0x30) = fVar6;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x18);
    plVar4 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
    cVar1 = (**(code **)(*plVar4 + 8))(plVar4,0x80);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0x80;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14510dd50 FUN_14510dd50 body=72 status=ok
// SIG undefined FUN_14510dd50(void)

undefined8 FUN_14510dd50(undefined8 *param_1,longlong *param_2)

{
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14510de00 FUN_14510de00 body=1070 status=ok
// SIG undefined FUN_14510de00(void)

void FUN_14510de00(longlong param_1,uint *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  ushort uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((*param_2 != 0) && ((*param_2 != 1 || (*(short *)(**(longlong **)(param_2 + 2) + 0x12) != 0)))
     ) {
    lVar7 = *(longlong *)(param_1 + 8);
    fVar15 = *(float *)(lVar7 + 0x10);
    if (fVar15 != *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x40) = fVar15;
      if (fVar15 <= 0.001) {
        fVar15 = 0.001;
      }
      fVar15 = expf(-2.2 / (fVar15 * *(float *)(param_1 + 0x20)));
      *(float *)(param_1 + 0x44) = fVar15;
    }
    fVar15 = *(float *)(lVar7 + 0x14);
    if (fVar15 != *(float *)(param_1 + 0x48)) {
      *(float *)(param_1 + 0x48) = fVar15;
      if (fVar15 <= 0.001) {
        fVar15 = 0.001;
      }
      fVar15 = expf(-2.2 / (fVar15 * *(float *)(param_1 + 0x20)));
      *(float *)(param_1 + 0x4c) = fVar15;
    }
    uVar10 = 0;
    uVar11 = 0;
    if (*param_2 != 0) {
      do {
        plVar14 = *(longlong **)(*(longlong *)(param_2 + 4) + uVar10 * 8);
        if (*plVar14 != -1) {
          FUN_14510f0c0(*(undefined8 *)(*(longlong *)(param_2 + 2) + uVar10 * 8),(int)plVar14[10],
                        *(undefined4 *)((longlong)plVar14 + 0x54));
        }
        uVar11 = *param_2;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar11);
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      if ((*(char *)(param_1 + 0x51) == '\0') || (*(int *)(param_1 + 0x1c) == 1)) {
        FUN_14510e240(param_1,**(undefined8 **)(param_2 + 2),*(undefined4 *)(lVar7 + 8),
                      *(float *)(lVar7 + 0xc) - 1.0,*(undefined4 *)(param_1 + 0x24));
      }
      else {
        FUN_14510e6d0(param_1,**(undefined8 **)(param_2 + 2),*(undefined4 *)(lVar7 + 8),
                      *(float *)(lVar7 + 0xc) - 1.0,*(undefined4 *)(param_1 + 0x24));
      }
    }
    else {
      FUN_14510e9a0(param_1,uVar11,*(undefined8 *)(param_2 + 2),*(undefined4 *)(lVar7 + 8),
                    *(float *)(lVar7 + 0xc) - 1.0);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar10 = 0;
    uVar4 = *(undefined4 *)(lVar7 + 0x18);
    if (*param_2 != 0) {
      do {
        plVar14 = *(longlong **)(*(longlong *)(param_2 + 4) + uVar10 * 8);
        if ((*plVar14 == -1) ||
           ((*(char *)(param_1 + 0x50) == '\0' &&
            ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + uVar10 * 8) + 8) & 0x8000) != 0))
           )) {
          fVar15 = *(float *)(lVar7 + 0x18);
          fVar5 = *(float *)(param_1 + 0x18);
          plVar14 = *(longlong **)(*(longlong *)(param_2 + 2) + uVar10 * 8);
          uVar11 = *(uint *)(plVar14 + 1) & 0xff;
          if ((*(char *)(param_1 + 0x50) == '\0') && ((*(uint *)(plVar14 + 1) & 0x8000) != 0)) {
            uVar11 = uVar11 - 1;
          }
          uVar6 = *(ushort *)((longlong)plVar14 + 0x12);
          if (uVar11 != 0) {
            lVar12 = 0;
            uVar13 = (ulonglong)uVar11;
            if (fVar15 == fVar5) {
              do {
                FUN_14510ef80(*plVar14 + (ulonglong)*(ushort *)(plVar14 + 2) * lVar12 * 4,fVar5,
                              uVar6);
                lVar12 = lVar12 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            else {
              do {
                pfVar8 = (float *)(*plVar14 + (ulonglong)*(ushort *)(plVar14 + 2) * lVar12 * 4);
                pfVar1 = pfVar8 + uVar6;
                if (3 < uVar6) {
                  uVar11 = uVar6 & 0xfffffffc;
                  pfVar2 = pfVar8 + uVar11;
                  fVar18 = (fVar15 - fVar5) / (float)uVar11;
                  fVar20 = fVar18 * 4.0;
                  fVar16 = fVar18 + fVar18 + fVar5;
                  fVar19 = fVar5;
                  fVar17 = fVar18 + fVar5;
                  fVar18 = fVar18 + fVar16;
                  for (; pfVar8 < pfVar2; pfVar8 = pfVar8 + 4) {
                    *pfVar8 = *pfVar8 * fVar19;
                    pfVar8[1] = pfVar8[1] * fVar17;
                    pfVar8[2] = pfVar8[2] * fVar16;
                    pfVar8[3] = pfVar8[3] * fVar18;
                    fVar19 = fVar19 + fVar20;
                    fVar17 = fVar17 + fVar20;
                    fVar16 = fVar16 + fVar20;
                    fVar18 = fVar18 + fVar20;
                  }
                }
                if (pfVar8 < pfVar1) {
                  fVar17 = (fVar15 - fVar5) / (float)uVar6;
                  fVar19 = fVar5;
                  if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar8) & 0xfffffffffffffffcU)) {
                    do {
                      *pfVar8 = fVar19 * *pfVar8;
                      fVar16 = fVar19 + fVar17 + fVar17;
                      pfVar8[1] = (fVar19 + fVar17) * pfVar8[1];
                      fVar18 = fVar16 + fVar17;
                      pfVar8[2] = fVar16 * pfVar8[2];
                      fVar19 = fVar18 + fVar17;
                      pfVar8[3] = fVar18 * pfVar8[3];
                      pfVar8 = pfVar8 + 4;
                    } while (pfVar8 < pfVar1 + -3);
                    if (pfVar1 <= pfVar8) goto LAB_14510e1b8;
                  }
                  do {
                    *pfVar8 = fVar19 * *pfVar8;
                    pfVar8 = pfVar8 + 1;
                    fVar19 = fVar19 + fVar17;
                  } while (pfVar8 < pfVar1);
                }
LAB_14510e1b8:
                lVar12 = lVar12 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          lVar12 = *(longlong *)(*(longlong *)(param_2 + 4) + uVar10 * 8);
          *(undefined4 *)(lVar12 + 0x50) = 0x3f800000;
          *(undefined4 *)(lVar12 + 0x54) = 0x3f800000;
        }
        else {
          *(undefined4 *)(plVar14 + 10) = uVar3;
          *(undefined4 *)((longlong)plVar14 + 0x54) = uVar4;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < *param_2);
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar7 + 0x18);
  }
  return;
}



// FUNCTION 14510e240 FUN_14510e240 body=1157 status=ok
// SIG undefined FUN_14510e240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14510e240(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *_Dst;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 auStack_d0 [5];
  longlong lStack_a8;
  float afStack_a0 [10];
  ulonglong local_78;
  float *local_70;
  float *local_68 [6];
  
  uVar6 = *(ushort *)((longlong)param_2 + 0x12);
  local_78 = (ulonglong)uVar6;
  uVar10 = local_78 * 4 + 0xf;
  if (uVar10 <= local_78 * 4) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14510e2ab;
  lVar7 = -(uVar10 & 0xfffffffffffffff0);
  _Dst = (float *)((longlong)&local_78 + lVar7);
  if (param_5 != 0) {
    uVar17 = 0;
    local_70 = (float *)(ulonglong)((uint)uVar6 * 4);
    pfVar2 = _Dst + local_78;
    uVar16 = (ulonglong)param_5;
    uVar10 = uVar17;
    local_68[0] = local_70;
    if (*(int *)(param_1 + 0x54) == 0x80) {
      do {
        pfVar11 = local_68[0];
        pfVar13 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4);
        local_70 = pfVar13;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14510e311;
        memset(_Dst,0,(size_t)pfVar11);
        uVar14 = local_78;
        if (pfVar2 < _Dst) {
          uVar14 = uVar17;
        }
        pfVar11 = _Dst;
        if (((uVar14 != 0) && (0xf < uVar14)) &&
           ((pfVar13 + (uVar14 - 1) < _Dst || (_Dst + (uVar14 - 1) < pfVar13)))) {
          uVar15 = uVar17;
          do {
            uVar15 = uVar15 + 0x10;
            fVar3 = pfVar13[1];
            fVar8 = pfVar13[2];
            fVar9 = pfVar13[3];
            *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
            pfVar11[1] = fVar3 * fVar3 + pfVar11[1];
            pfVar11[2] = fVar8 * fVar8 + pfVar11[2];
            pfVar11[3] = fVar9 * fVar9 + pfVar11[3];
            fVar3 = pfVar13[5];
            fVar8 = pfVar13[6];
            fVar9 = pfVar13[7];
            pfVar11[4] = pfVar13[4] * pfVar13[4] + pfVar11[4];
            pfVar11[5] = fVar3 * fVar3 + pfVar11[5];
            pfVar11[6] = fVar8 * fVar8 + pfVar11[6];
            pfVar11[7] = fVar9 * fVar9 + pfVar11[7];
            fVar3 = pfVar13[9];
            fVar8 = pfVar13[10];
            fVar9 = pfVar13[0xb];
            pfVar11[8] = pfVar13[8] * pfVar13[8] + pfVar11[8];
            pfVar11[9] = fVar3 * fVar3 + pfVar11[9];
            pfVar11[10] = fVar8 * fVar8 + pfVar11[10];
            pfVar11[0xb] = fVar9 * fVar9 + pfVar11[0xb];
            pfVar1 = pfVar13 + 0xc;
            fVar3 = pfVar13[0xd];
            fVar8 = pfVar13[0xe];
            fVar9 = pfVar13[0xf];
            pfVar13 = pfVar13 + 0x10;
            pfVar11[0xc] = *pfVar1 * *pfVar1 + pfVar11[0xc];
            pfVar11[0xd] = fVar3 * fVar3 + pfVar11[0xd];
            pfVar11[0xe] = fVar8 * fVar8 + pfVar11[0xe];
            pfVar11[0xf] = fVar9 * fVar9 + pfVar11[0xf];
            pfVar11 = pfVar11 + 0x10;
          } while (uVar15 < (uVar14 & 0xfffffffffffffff0));
        }
        if (pfVar11 < pfVar2) {
          if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar11)) {
            do {
              *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
              pfVar11[1] = pfVar13[1] * pfVar13[1] + pfVar11[1];
              pfVar11[2] = pfVar13[2] * pfVar13[2] + pfVar11[2];
              pfVar1 = pfVar13 + 3;
              pfVar13 = pfVar13 + 4;
              pfVar11[3] = *pfVar1 * *pfVar1 + pfVar11[3];
              pfVar11 = pfVar11 + 4;
            } while (pfVar11 < pfVar2 + -3);
            if (pfVar2 <= pfVar11) goto LAB_14510e458;
          }
          lVar12 = (longlong)pfVar13 - (longlong)pfVar11;
          do {
            fVar3 = *(float *)(lVar12 + (longlong)pfVar11);
            *pfVar11 = fVar3 * fVar3 + *pfVar11;
            pfVar11 = pfVar11 + 1;
          } while (pfVar11 < pfVar2);
        }
LAB_14510e458:
        lVar12 = *(longlong *)(param_1 + 0x38);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x18) = uVar4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x10) = uVar5;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 8) = param_4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7) = param_3;
        *(ulonglong *)((longlong)&lStack_a8 + lVar7) = lVar12 + uVar10 * 8;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14510e4ae;
        FUN_1453b9660(&local_70,_Dst,1,uVar6);
        uVar16 = uVar16 - 1;
        uVar10 = uVar10 + 1;
      } while (uVar16 != 0);
    }
    else {
      do {
        pfVar11 = local_70;
        pfVar13 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4);
        local_68[0] = pfVar13;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14510e4f1;
        memset(_Dst,0,(size_t)pfVar11);
        uVar14 = local_78;
        if (pfVar2 < _Dst) {
          uVar14 = uVar17;
        }
        pfVar11 = _Dst;
        if (((uVar14 != 0) && (0xf < uVar14)) &&
           ((pfVar13 + (uVar14 - 1) < _Dst || (_Dst + (uVar14 - 1) < pfVar13)))) {
          uVar15 = uVar17;
          do {
            uVar15 = uVar15 + 0x10;
            fVar3 = pfVar13[1];
            fVar8 = pfVar13[2];
            fVar9 = pfVar13[3];
            *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
            pfVar11[1] = fVar3 * fVar3 + pfVar11[1];
            pfVar11[2] = fVar8 * fVar8 + pfVar11[2];
            pfVar11[3] = fVar9 * fVar9 + pfVar11[3];
            fVar3 = pfVar13[5];
            fVar8 = pfVar13[6];
            fVar9 = pfVar13[7];
            pfVar11[4] = pfVar13[4] * pfVar13[4] + pfVar11[4];
            pfVar11[5] = fVar3 * fVar3 + pfVar11[5];
            pfVar11[6] = fVar8 * fVar8 + pfVar11[6];
            pfVar11[7] = fVar9 * fVar9 + pfVar11[7];
            fVar3 = pfVar13[9];
            fVar8 = pfVar13[10];
            fVar9 = pfVar13[0xb];
            pfVar11[8] = pfVar13[8] * pfVar13[8] + pfVar11[8];
            pfVar11[9] = fVar3 * fVar3 + pfVar11[9];
            pfVar11[10] = fVar8 * fVar8 + pfVar11[10];
            pfVar11[0xb] = fVar9 * fVar9 + pfVar11[0xb];
            pfVar1 = pfVar13 + 0xc;
            fVar3 = pfVar13[0xd];
            fVar8 = pfVar13[0xe];
            fVar9 = pfVar13[0xf];
            pfVar13 = pfVar13 + 0x10;
            pfVar11[0xc] = *pfVar1 * *pfVar1 + pfVar11[0xc];
            pfVar11[0xd] = fVar3 * fVar3 + pfVar11[0xd];
            pfVar11[0xe] = fVar8 * fVar8 + pfVar11[0xe];
            pfVar11[0xf] = fVar9 * fVar9 + pfVar11[0xf];
            pfVar11 = pfVar11 + 0x10;
          } while (uVar15 < (uVar14 & 0xfffffffffffffff0));
        }
        if (pfVar11 < pfVar2) {
          if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar11)) {
            do {
              *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
              pfVar11[1] = pfVar13[1] * pfVar13[1] + pfVar11[1];
              pfVar11[2] = pfVar13[2] * pfVar13[2] + pfVar11[2];
              pfVar1 = pfVar13 + 3;
              pfVar13 = pfVar13 + 4;
              pfVar11[3] = *pfVar1 * *pfVar1 + pfVar11[3];
              pfVar11 = pfVar11 + 4;
            } while (pfVar11 < pfVar2 + -3);
            if (pfVar2 <= pfVar11) goto LAB_14510e638;
          }
          lVar12 = (longlong)pfVar13 - (longlong)pfVar11;
          do {
            fVar3 = *(float *)(lVar12 + (longlong)pfVar11);
            *pfVar11 = fVar3 * fVar3 + *pfVar11;
            pfVar11 = pfVar11 + 1;
          } while (pfVar11 < pfVar2);
        }
LAB_14510e638:
        lVar12 = *(longlong *)(param_1 + 0x38);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x18) = uVar4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x10) = uVar5;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 8) = param_4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7) = param_3;
        *(ulonglong *)((longlong)&lStack_a8 + lVar7) = lVar12 + uVar10 * 8;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14510e68e;
        FUN_14510f4b0(local_68,_Dst,1,uVar6);
        uVar16 = uVar16 - 1;
        uVar10 = uVar10 + 1;
      } while (uVar16 != 0);
    }
  }
  return;
}



// FUNCTION 14510e6d0 FUN_14510e6d0 body=712 status=ok
// SIG undefined FUN_14510e6d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14510e6d0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  longlong *plVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  undefined4 auStack_60 [10];
  longlong local_38 [4];
  
  uVar4 = *(ushort *)((longlong)param_2 + 0x12);
  uVar7 = param_5;
  if ((*(uint *)(param_2 + 1) & 0xf00) == 0x200) {
    uVar7 = 1;
  }
  uVar11 = (ulonglong)param_5 * 8 + 0xf;
  if (uVar11 <= (ulonglong)param_5 * 8) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x14510e74c;
  lVar8 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = 0;
  plVar1 = (longlong *)((longlong)local_38 + lVar8);
  if (param_5 != 0) {
    uVar12 = uVar11;
    if ((7 < param_5) && (5 < DAT_14c707900)) {
      lVar10 = *param_2;
      if (((param_2 < plVar1) || (plVar1 + (param_5 - 1) < param_2)) &&
         ((param_2 + 2 < plVar1 || (uVar12 = 0, plVar1 + (param_5 - 1) < param_2 + 2)))) {
        uVar12 = 4;
        auVar20 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22((short)param_2[2],(short)param_2[2])));
        do {
          iVar14 = (int)uVar11;
          iVar5 = (int)uVar12;
          uVar9 = iVar5 - 2;
          auVar16._4_4_ = iVar14 + 1;
          auVar16._0_4_ = iVar14;
          auVar16._8_4_ = iVar14;
          auVar16._12_4_ = iVar14;
          auVar16 = pmovzxdq(auVar16,auVar16);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar11] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar11)[1] = auVar16._8_8_ * 4 + lVar10;
          uVar15 = iVar14 + 8;
          uVar11 = (ulonglong)uVar15;
          auVar17._4_4_ = iVar5 + -1;
          auVar17._0_4_ = uVar9;
          auVar17._8_4_ = uVar9;
          auVar17._12_4_ = uVar9;
          auVar16 = pmovzxdq(auVar17,auVar17);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar9] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar9)[1] = auVar16._8_8_ * 4 + lVar10;
          auVar18._4_4_ = iVar5 + 1;
          auVar18._0_4_ = iVar5;
          auVar18._8_4_ = iVar5;
          auVar18._12_4_ = iVar5;
          auVar16 = pmovzxdq(auVar18,auVar18);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar12] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar12)[1] = auVar16._8_8_ * 4 + lVar10;
          uVar9 = iVar5 + 2;
          uVar12 = (ulonglong)(iVar5 + 8);
          auVar19._4_4_ = iVar5 + 3;
          auVar19._0_4_ = uVar9;
          auVar19._8_4_ = uVar9;
          auVar19._12_4_ = uVar9;
          auVar16 = pmovzxdq(auVar19,auVar19);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar9] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar9)[1] = auVar16._8_8_ * 4 + lVar10;
        } while (uVar15 < (param_5 & 0xfffffff8));
        uVar12 = uVar11;
        if (param_5 <= uVar15) goto LAB_14510e8d1;
      }
    }
    uVar11 = (ulonglong)(param_5 - (int)uVar12);
    plVar13 = plVar1 + uVar12;
    do {
      lVar10 = *(ushort *)(param_2 + 2) * uVar12;
      uVar12 = uVar12 + 1;
      *plVar13 = *param_2 + lVar10 * 4;
      uVar11 = uVar11 - 1;
      plVar13 = plVar13 + 1;
    } while (uVar11 != 0);
  }
LAB_14510e8d1:
  uVar12 = (ulonglong)uVar4 * 4;
  uVar11 = uVar12 + 0xf;
  if (uVar11 <= uVar12) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_90 + lVar8) = 0x14510e8f0;
  lVar10 = -(uVar11 & 0xfffffffffffffff0);
  _Dst = (void *)((longlong)local_38 + lVar10 + lVar8);
  *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x14510e90a;
  memset(_Dst,0,(ulonglong)((uint)uVar4 * 4));
  *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x14510e91b;
  FUN_14510f2d0(uVar7,(ulonglong)uVar4,plVar1,_Dst);
  iVar5 = *(int *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 0x18) = uVar2;
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 0x10) = uVar3;
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 8) = param_4;
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8) = param_3;
  *(undefined8 *)((longlong)&uStack_68 + lVar10 + lVar8) = uVar6;
  if (iVar5 == 0x80) {
    *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x14510e96f;
    FUN_1453b9660();
  }
  else {
    *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x14510e976;
    FUN_14510f4b0(plVar1,_Dst,param_5,uVar4);
  }
  return;
}



// FUNCTION 14510e9a0 FUN_14510e9a0 body=1451 status=ok
// SIG undefined FUN_14510e9a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14510e9a0(longlong param_1,uint param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *_Dst;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 auStack_a0 [5];
  undefined8 uStack_78;
  float afStack_70 [10];
  undefined4 local_48;
  uint local_44;
  
  uVar31 = (ulonglong)param_2;
  auStack_a0[0] = 0x14510e9dc;
  plVar14 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  auStack_a0[0] = 0x14510e9e6;
  uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar21 = 0;
  uVar13 = 0;
  uVar27 = (ulonglong)uVar12;
  local_44 = (uint)uVar12;
  local_48 = 0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar14 = param_3;
    uVar28 = uVar31;
    if (param_2 != 0) {
      do {
        uVar21 = uVar21 + (*(uint *)(*plVar14 + 8) - (*(uint *)(*plVar14 + 8) >> 0xf & 1) & 0xff);
        uVar28 = uVar28 - 1;
        plVar14 = plVar14 + 1;
        local_48 = uVar21;
      } while (uVar28 != 0);
    }
    goto LAB_14510eaa4;
  }
  iVar23 = 0;
  iVar24 = 0;
  iVar25 = 0;
  iVar26 = 0;
  if (param_2 < 2) {
    if (param_2 != 0) {
      lVar17 = 0;
      goto LAB_14510ea60;
    }
  }
  else {
    lVar17 = 0;
    uVar13 = (param_2 - 2 >> 1) + 1;
    uVar28 = (ulonglong)uVar13;
    do {
      lVar11 = lVar17 + 1;
      iVar23 = iVar23 + (uint)*(byte *)(param_3[lVar17] + 8);
      lVar17 = lVar17 + 2;
      iVar25 = iVar25 + (uint)*(byte *)(param_3[lVar11] + 8);
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    iVar24 = iVar23;
    iVar26 = iVar25;
    if (param_2 <= uVar13 * 2) {
      local_48 = iVar25 + iVar23;
      goto LAB_14510eaa4;
    }
LAB_14510ea60:
    uVar13 = (uint)*(byte *)(param_3[lVar17] + 8);
    iVar25 = iVar26;
    iVar23 = iVar24;
  }
  local_48 = uVar13 + iVar25 + iVar23;
LAB_14510eaa4:
  uVar13 = local_48;
  uVar28 = uVar27 * 4 + 0xf;
  if (uVar28 <= uVar27 * 4) {
    uVar28 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x14510eaca;
  lVar17 = -(uVar28 & 0xfffffffffffffff0);
  _Dst = (float *)((longlong)&local_48 + lVar17);
  *(undefined8 *)((longlong)auStack_a0 + lVar17) = 0x14510eae4;
  memset(_Dst,0,(ulonglong)((uint)uVar12 * 4));
  uVar28 = (ulonglong)uVar13 * 8 + 0xf;
  if (uVar28 <= (ulonglong)uVar13 * 8) {
    uVar28 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar17) = 0x14510eb0a;
  lVar8 = -(uVar28 & 0xfffffffffffffff0);
  lVar11 = (longlong)&local_48 + lVar8 + lVar17;
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (param_2 != 0) {
      pfVar2 = _Dst + uVar27;
      uVar27 = 0;
      do {
        lVar18 = 0;
        plVar14 = (longlong *)*param_3;
        uVar13 = *(uint *)(plVar14 + 1) - (*(uint *)(plVar14 + 1) >> 0xf & 1);
        uVar21 = uVar13 & 0xff;
        uVar30 = (ulonglong)uVar21;
        uVar28 = uVar27;
        if ((char)uVar13 != '\0') {
          uVar29 = (ulonglong)uVar21;
          uVar22 = uVar27;
          do {
            lVar15 = (ulonglong)*(ushort *)(plVar14 + 2) * lVar18;
            lVar18 = lVar18 + 1;
            uVar28 = (ulonglong)((int)uVar22 + 1);
            *(longlong *)(lVar11 + uVar22 * 8) = *plVar14 + lVar15 * 4;
            uVar29 = uVar29 - 1;
            uVar22 = uVar28;
          } while (uVar29 != 0);
          puVar20 = (undefined8 *)(lVar11 + uVar27 * 8);
          uVar27 = (ulonglong)((longlong)pfVar2 + (3 - (longlong)_Dst)) >> 2;
          if (pfVar2 < _Dst) {
            uVar27 = 0;
          }
          do {
            uVar22 = 0;
            pfVar19 = (float *)*puVar20;
            pfVar16 = _Dst;
            if (((uVar27 != 0) && (0xf < uVar27)) &&
               ((pfVar19 + (uVar27 - 1) < _Dst || (_Dst + (uVar27 - 1) < pfVar19)))) {
              do {
                uVar22 = uVar22 + 0x10;
                fVar3 = pfVar19[1];
                fVar9 = pfVar19[2];
                fVar10 = pfVar19[3];
                *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
                pfVar16[1] = fVar3 * fVar3 + pfVar16[1];
                pfVar16[2] = fVar9 * fVar9 + pfVar16[2];
                pfVar16[3] = fVar10 * fVar10 + pfVar16[3];
                fVar3 = pfVar19[5];
                fVar9 = pfVar19[6];
                fVar10 = pfVar19[7];
                pfVar16[4] = pfVar19[4] * pfVar19[4] + pfVar16[4];
                pfVar16[5] = fVar3 * fVar3 + pfVar16[5];
                pfVar16[6] = fVar9 * fVar9 + pfVar16[6];
                pfVar16[7] = fVar10 * fVar10 + pfVar16[7];
                fVar3 = pfVar19[9];
                fVar9 = pfVar19[10];
                fVar10 = pfVar19[0xb];
                pfVar16[8] = pfVar19[8] * pfVar19[8] + pfVar16[8];
                pfVar16[9] = fVar3 * fVar3 + pfVar16[9];
                pfVar16[10] = fVar9 * fVar9 + pfVar16[10];
                pfVar16[0xb] = fVar10 * fVar10 + pfVar16[0xb];
                pfVar1 = pfVar19 + 0xc;
                fVar3 = pfVar19[0xd];
                fVar9 = pfVar19[0xe];
                fVar10 = pfVar19[0xf];
                pfVar19 = pfVar19 + 0x10;
                pfVar16[0xc] = *pfVar1 * *pfVar1 + pfVar16[0xc];
                pfVar16[0xd] = fVar3 * fVar3 + pfVar16[0xd];
                pfVar16[0xe] = fVar9 * fVar9 + pfVar16[0xe];
                pfVar16[0xf] = fVar10 * fVar10 + pfVar16[0xf];
                pfVar16 = pfVar16 + 0x10;
              } while (uVar22 < (uVar27 & 0xfffffffffffffff0));
            }
            if (pfVar16 < pfVar2) {
              if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar16)) {
                do {
                  *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
                  pfVar16[1] = pfVar19[1] * pfVar19[1] + pfVar16[1];
                  pfVar16[2] = pfVar19[2] * pfVar19[2] + pfVar16[2];
                  pfVar1 = pfVar19 + 3;
                  pfVar19 = pfVar19 + 4;
                  pfVar16[3] = *pfVar1 * *pfVar1 + pfVar16[3];
                  pfVar16 = pfVar16 + 4;
                } while (pfVar16 < pfVar2 + -3);
                if (pfVar2 <= pfVar16) goto LAB_14510eea8;
              }
              lVar18 = (longlong)pfVar19 - (longlong)pfVar16;
              do {
                fVar3 = *(float *)(lVar18 + (longlong)pfVar16);
                *pfVar16 = fVar3 * fVar3 + *pfVar16;
                pfVar16 = pfVar16 + 1;
              } while (pfVar16 < pfVar2);
            }
LAB_14510eea8:
            puVar20 = puVar20 + 1;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        param_3 = param_3 + 1;
        uVar31 = uVar31 - 1;
        uVar27 = uVar28;
        uVar13 = local_48;
      } while (uVar31 != 0);
    }
  }
  else if (param_2 != 0) {
    pfVar2 = _Dst + uVar27;
    uVar27 = 0;
    do {
      lVar18 = 0;
      plVar14 = (longlong *)*param_3;
      bVar6 = *(byte *)(plVar14 + 1);
      uVar30 = (ulonglong)bVar6;
      uVar28 = uVar27;
      if (bVar6 != 0) {
        uVar29 = (ulonglong)bVar6;
        uVar22 = uVar27;
        do {
          lVar15 = (ulonglong)*(ushort *)(plVar14 + 2) * lVar18;
          lVar18 = lVar18 + 1;
          uVar28 = (ulonglong)((int)uVar22 + 1);
          *(longlong *)(lVar11 + uVar22 * 8) = *plVar14 + lVar15 * 4;
          uVar29 = uVar29 - 1;
          uVar22 = uVar28;
        } while (uVar29 != 0);
        puVar20 = (undefined8 *)(lVar11 + uVar27 * 8);
        uVar27 = (ulonglong)((longlong)pfVar2 + (3 - (longlong)_Dst)) >> 2;
        if (pfVar2 < _Dst) {
          uVar27 = 0;
        }
        do {
          uVar22 = 0;
          pfVar19 = (float *)*puVar20;
          pfVar16 = _Dst;
          if (((uVar27 != 0) && (0xf < uVar27)) &&
             ((pfVar19 + (uVar27 - 1) < _Dst || (_Dst + (uVar27 - 1) < pfVar19)))) {
            do {
              uVar22 = uVar22 + 0x10;
              fVar3 = pfVar19[1];
              fVar9 = pfVar19[2];
              fVar10 = pfVar19[3];
              *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
              pfVar16[1] = fVar3 * fVar3 + pfVar16[1];
              pfVar16[2] = fVar9 * fVar9 + pfVar16[2];
              pfVar16[3] = fVar10 * fVar10 + pfVar16[3];
              fVar3 = pfVar19[5];
              fVar9 = pfVar19[6];
              fVar10 = pfVar19[7];
              pfVar16[4] = pfVar19[4] * pfVar19[4] + pfVar16[4];
              pfVar16[5] = fVar3 * fVar3 + pfVar16[5];
              pfVar16[6] = fVar9 * fVar9 + pfVar16[6];
              pfVar16[7] = fVar10 * fVar10 + pfVar16[7];
              fVar3 = pfVar19[9];
              fVar9 = pfVar19[10];
              fVar10 = pfVar19[0xb];
              pfVar16[8] = pfVar19[8] * pfVar19[8] + pfVar16[8];
              pfVar16[9] = fVar3 * fVar3 + pfVar16[9];
              pfVar16[10] = fVar9 * fVar9 + pfVar16[10];
              pfVar16[0xb] = fVar10 * fVar10 + pfVar16[0xb];
              pfVar1 = pfVar19 + 0xc;
              fVar3 = pfVar19[0xd];
              fVar9 = pfVar19[0xe];
              fVar10 = pfVar19[0xf];
              pfVar19 = pfVar19 + 0x10;
              pfVar16[0xc] = *pfVar1 * *pfVar1 + pfVar16[0xc];
              pfVar16[0xd] = fVar3 * fVar3 + pfVar16[0xd];
              pfVar16[0xe] = fVar9 * fVar9 + pfVar16[0xe];
              pfVar16[0xf] = fVar10 * fVar10 + pfVar16[0xf];
              pfVar16 = pfVar16 + 0x10;
            } while (uVar22 < (uVar27 & 0xfffffffffffffff0));
          }
          if (pfVar16 < pfVar2) {
            if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar16)) {
              do {
                *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
                pfVar16[1] = pfVar19[1] * pfVar19[1] + pfVar16[1];
                pfVar16[2] = pfVar19[2] * pfVar19[2] + pfVar16[2];
                pfVar1 = pfVar19 + 3;
                pfVar19 = pfVar19 + 4;
                pfVar16[3] = *pfVar1 * *pfVar1 + pfVar16[3];
                pfVar16 = pfVar16 + 4;
              } while (pfVar16 < pfVar2 + -3);
              if (pfVar2 <= pfVar16) goto LAB_14510ecc8;
            }
            lVar18 = (longlong)pfVar19 - (longlong)pfVar16;
            do {
              fVar3 = *(float *)(lVar18 + (longlong)pfVar16);
              *pfVar16 = fVar3 * fVar3 + *pfVar16;
              pfVar16 = pfVar16 + 1;
            } while (pfVar16 < pfVar2);
          }
LAB_14510ecc8:
          puVar20 = puVar20 + 1;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      param_3 = param_3 + 1;
      uVar31 = uVar31 - 1;
      uVar27 = uVar28;
      uVar13 = local_48;
    } while (uVar31 != 0);
  }
  uVar21 = local_44;
  iVar24 = *(int *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 0x18) = uVar4;
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 0x10) = uVar5;
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 8) = param_5;
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17) = param_4;
  *(undefined8 *)((longlong)&uStack_78 + lVar8 + lVar17) = uVar7;
  if (iVar24 == 0x80) {
    *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar17) = 0x14510ef26;
    FUN_1453b9660();
  }
  else {
    *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar17) = 0x14510ef2d;
    FUN_14510f4b0(lVar11,_Dst,uVar13,uVar21);
  }
  return;
}



// FUNCTION 14510ef50 FUN_14510ef50 body=43 status=ok
// SIG undefined FUN_14510ef50(void)

undefined8 * FUN_14510ef50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14510ef80 FUN_14510ef80 body=309 status=ok
// SIG undefined FUN_14510ef80(void)

void FUN_14510ef80(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 14510f0c0 FUN_14510f0c0 body=528 status=ok
// SIG undefined FUN_14510f0c0(void)

void FUN_14510f0c0(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_14510ef80(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_14510f2a8;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_14510f2a8:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14510f2d0 FUN_14510f2d0 body=398 status=ok
// SIG undefined FUN_14510f2d0(void)

void FUN_14510f2d0(uint param_1,uint param_2,undefined8 *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pfVar2 = param_4 + param_2;
  if (param_1 != 0) {
    uVar11 = (ulonglong)param_2;
    if (pfVar2 < param_4) {
      uVar11 = 0;
    }
    uVar9 = (ulonglong)param_1;
    do {
      pfVar7 = (float *)*param_3;
      pfVar6 = param_4;
      if (((uVar11 != 0) && (0xf < uVar11)) &&
         ((pfVar7 + (uVar11 - 1) < param_4 || (param_4 + (uVar11 - 1) < pfVar7)))) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 0x10;
          fVar3 = pfVar7[1];
          fVar4 = pfVar7[2];
          fVar5 = pfVar7[3];
          *pfVar6 = *pfVar7 * *pfVar7 + *pfVar6;
          pfVar6[1] = fVar3 * fVar3 + pfVar6[1];
          pfVar6[2] = fVar4 * fVar4 + pfVar6[2];
          pfVar6[3] = fVar5 * fVar5 + pfVar6[3];
          fVar3 = pfVar7[5];
          fVar4 = pfVar7[6];
          fVar5 = pfVar7[7];
          pfVar6[4] = pfVar7[4] * pfVar7[4] + pfVar6[4];
          pfVar6[5] = fVar3 * fVar3 + pfVar6[5];
          pfVar6[6] = fVar4 * fVar4 + pfVar6[6];
          pfVar6[7] = fVar5 * fVar5 + pfVar6[7];
          fVar3 = pfVar7[9];
          fVar4 = pfVar7[10];
          fVar5 = pfVar7[0xb];
          pfVar6[8] = pfVar7[8] * pfVar7[8] + pfVar6[8];
          pfVar6[9] = fVar3 * fVar3 + pfVar6[9];
          pfVar6[10] = fVar4 * fVar4 + pfVar6[10];
          pfVar6[0xb] = fVar5 * fVar5 + pfVar6[0xb];
          pfVar1 = pfVar7 + 0xc;
          fVar3 = pfVar7[0xd];
          fVar4 = pfVar7[0xe];
          fVar5 = pfVar7[0xf];
          pfVar7 = pfVar7 + 0x10;
          pfVar6[0xc] = *pfVar1 * *pfVar1 + pfVar6[0xc];
          pfVar6[0xd] = fVar3 * fVar3 + pfVar6[0xd];
          pfVar6[0xe] = fVar4 * fVar4 + pfVar6[0xe];
          pfVar6[0xf] = fVar5 * fVar5 + pfVar6[0xf];
          pfVar6 = pfVar6 + 0x10;
        } while (uVar10 < (uVar11 & 0xfffffffffffffff0));
      }
      if (pfVar6 < pfVar2) {
        if (0xf < ((longlong)pfVar2 + (3 - (longlong)pfVar6) & 0xfffffffffffffffcU)) {
          do {
            *pfVar6 = *pfVar7 * *pfVar7 + *pfVar6;
            pfVar6[1] = pfVar7[1] * pfVar7[1] + pfVar6[1];
            pfVar6[2] = pfVar7[2] * pfVar7[2] + pfVar6[2];
            pfVar1 = pfVar7 + 3;
            pfVar7 = pfVar7 + 4;
            pfVar6[3] = *pfVar1 * *pfVar1 + pfVar6[3];
            pfVar6 = pfVar6 + 4;
          } while (pfVar6 < pfVar2 + -3);
          if (pfVar2 <= pfVar6) goto LAB_14510f438;
        }
        lVar8 = (longlong)pfVar7 - (longlong)pfVar6;
        do {
          fVar3 = *(float *)(lVar8 + (longlong)pfVar6);
          *pfVar6 = fVar3 * fVar3 + *pfVar6;
          pfVar6 = pfVar6 + 1;
        } while (pfVar6 < pfVar2);
      }
LAB_14510f438:
      param_3 = param_3 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 14510f460 FUN_14510f460 body=75 status=ok
// SIG undefined FUN_14510f460(void)

undefined8 * FUN_14510f460(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x58,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkExpander\\AkExpanderFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b1a0;
    puVar1[1] = 0;
    puVar1[7] = 0;
    puVar1[2] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14510f4b0 FUN_14510f4b0 body=5003 status=ok
// SIG undefined FUN_14510f4b0(void)

void FUN_14510f4b0(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3,ulonglong param_4,
                  float *param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar24;
  uint uVar25;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  uint uVar44;
  uint uVar45;
  float fVar46;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar47;
  float fVar48;
  
  fVar30 = param_5[1];
  fVar48 = *param_5;
  fVar36 = param_10 * param_10;
  fVar27 = fVar36 * param_10;
  uVar7 = (param_4 & 0xfffffffc) * 4;
  pauVar6 = (undefined1 (*) [16])((longlong)*param_2 + (param_4 & 0xfffffffc) * 4);
  pauVar1 = (undefined1 (*) [16])((longlong)*param_2 + (param_4 & 0xffffffff) * 4);
  fVar10 = fVar27 * param_10;
  fVar28 = 1.0 - param_10;
  fVar11 = fVar28 * param_10;
  fVar12 = fVar11 * param_10;
  fVar13 = fVar12 * param_10;
  pauVar3 = param_2;
  if (param_2 < pauVar6) {
    pauVar4 = param_2;
    if (0x3f < uVar7) {
      do {
        fVar29 = *(float *)*pauVar4 + 1e-25;
        fVar31 = *(float *)((longlong)*pauVar4 + 4) + 1e-25;
        fVar32 = *(float *)((longlong)*pauVar4 + 8) + 1e-25;
        fVar34 = *(float *)((longlong)*pauVar4 + 0xc) + 1e-25;
        fVar46 = fVar32 * fVar11 + fVar34 * fVar28 + fVar31 * fVar12 + fVar29 * fVar13 +
                 fVar10 * fVar30;
        *(float *)*pauVar4 =
             fVar32 * 0.0 + fVar34 * 0.0 + fVar31 * 0.0 + fVar29 * fVar28 + param_10 * fVar30;
        *(float *)((longlong)*pauVar4 + 4) =
             fVar32 * 0.0 + fVar34 * 0.0 + fVar31 * fVar28 + fVar29 * fVar11 + fVar36 * fVar30;
        *(float *)((longlong)*pauVar4 + 8) =
             fVar32 * fVar28 + fVar34 * 0.0 + fVar31 * fVar11 + fVar29 * fVar12 + fVar27 * fVar30;
        *(float *)((longlong)*pauVar4 + 0xc) = fVar46;
        fVar30 = *(float *)pauVar4[1] + 1e-25;
        fVar29 = *(float *)((longlong)pauVar4[1] + 4) + 1e-25;
        fVar31 = *(float *)((longlong)pauVar4[1] + 8) + 1e-25;
        fVar32 = *(float *)((longlong)pauVar4[1] + 0xc) + 1e-25;
        fVar34 = fVar31 * fVar11 + fVar32 * fVar28 + fVar29 * fVar12 + fVar30 * fVar13 +
                 fVar46 * fVar10;
        *(float *)pauVar4[1] =
             fVar31 * 0.0 + fVar32 * 0.0 + fVar29 * 0.0 + fVar30 * fVar28 + fVar46 * param_10;
        *(float *)((longlong)pauVar4[1] + 4) =
             fVar31 * 0.0 + fVar32 * 0.0 + fVar29 * fVar28 + fVar30 * fVar11 + fVar46 * fVar36;
        *(float *)((longlong)pauVar4[1] + 8) =
             fVar31 * fVar28 + fVar32 * 0.0 + fVar29 * fVar11 + fVar30 * fVar12 + fVar46 * fVar27;
        *(float *)((longlong)pauVar4[1] + 0xc) = fVar34;
        fVar30 = *(float *)pauVar4[2] + 1e-25;
        fVar29 = *(float *)((longlong)pauVar4[2] + 4) + 1e-25;
        fVar31 = *(float *)((longlong)pauVar4[2] + 8) + 1e-25;
        fVar32 = *(float *)((longlong)pauVar4[2] + 0xc) + 1e-25;
        fVar46 = fVar31 * fVar11 + fVar32 * fVar28 + fVar29 * fVar12 + fVar30 * fVar13 +
                 fVar34 * fVar10;
        *(float *)pauVar4[2] =
             fVar31 * 0.0 + fVar32 * 0.0 + fVar29 * 0.0 + fVar30 * fVar28 + fVar34 * param_10;
        *(float *)((longlong)pauVar4[2] + 4) =
             fVar31 * 0.0 + fVar32 * 0.0 + fVar29 * fVar28 + fVar30 * fVar11 + fVar34 * fVar36;
        *(float *)((longlong)pauVar4[2] + 8) =
             fVar31 * fVar28 + fVar32 * 0.0 + fVar29 * fVar11 + fVar30 * fVar12 + fVar34 * fVar27;
        *(float *)((longlong)pauVar4[2] + 0xc) = fVar46;
        fVar29 = *(float *)pauVar4[3] + 1e-25;
        fVar31 = *(float *)((longlong)pauVar4[3] + 4) + 1e-25;
        fVar32 = *(float *)((longlong)pauVar4[3] + 8) + 1e-25;
        fVar34 = *(float *)((longlong)pauVar4[3] + 0xc) + 1e-25;
        fVar30 = fVar32 * fVar11 + fVar34 * fVar28 + fVar31 * fVar12 + fVar29 * fVar13 +
                 fVar46 * fVar10;
        *(float *)pauVar4[3] =
             fVar32 * 0.0 + fVar34 * 0.0 + fVar31 * 0.0 + fVar29 * fVar28 + fVar46 * param_10;
        *(float *)((longlong)pauVar4[3] + 4) =
             fVar32 * 0.0 + fVar34 * 0.0 + fVar31 * fVar28 + fVar29 * fVar11 + fVar46 * fVar36;
        *(float *)((longlong)pauVar4[3] + 8) =
             fVar32 * fVar28 + fVar34 * 0.0 + fVar31 * fVar11 + fVar29 * fVar12 + fVar46 * fVar27;
        *(float *)((longlong)pauVar4[3] + 0xc) = fVar30;
        pauVar4 = pauVar4 + 4;
      } while (pauVar4 < pauVar6 + -3);
      if (pauVar6 <= pauVar4) goto LAB_14510f821;
    }
    do {
      fVar34 = *(float *)*pauVar4 + 1e-25;
      fVar46 = *(float *)((longlong)*pauVar4 + 4) + 1e-25;
      fVar33 = *(float *)((longlong)*pauVar4 + 8) + 1e-25;
      fVar35 = *(float *)((longlong)*pauVar4 + 0xc) + 1e-25;
      fVar29 = param_10 * fVar30;
      fVar31 = fVar36 * fVar30;
      fVar32 = fVar27 * fVar30;
      fVar30 = fVar33 * fVar11 + fVar35 * fVar28 + fVar46 * fVar12 + fVar34 * fVar13 +
               fVar10 * fVar30;
      *(float *)*pauVar4 = fVar33 * 0.0 + fVar35 * 0.0 + fVar46 * 0.0 + fVar34 * fVar28 + fVar29;
      *(float *)((longlong)*pauVar4 + 4) =
           fVar33 * 0.0 + fVar35 * 0.0 + fVar46 * fVar28 + fVar34 * fVar11 + fVar31;
      *(float *)((longlong)*pauVar4 + 8) =
           fVar33 * fVar28 + fVar35 * 0.0 + fVar46 * fVar11 + fVar34 * fVar12 + fVar32;
      *(float *)((longlong)*pauVar4 + 0xc) = fVar30;
      pauVar4 = pauVar4 + 1;
    } while (pauVar4 < pauVar6);
LAB_14510f82d:
    pauVar4 = param_2;
    if (0x3f < uVar7) {
      do {
        fVar10 = (float)(((uint)*(float *)*pauVar4 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)*pauVar4 + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)*pauVar4 + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)*pauVar4 + 0xc) & 0x7fffff) + 0x3f800000);
        fVar27 = fVar10 + 1.0;
        fVar36 = fVar11 + 1.0;
        fVar29 = fVar12 + 1.0;
        fVar31 = fVar13 + 1.0;
        auVar39._0_4_ = fVar27 * fVar27 * fVar27;
        auVar39._4_4_ = fVar36 * fVar36 * fVar36;
        auVar39._8_4_ = fVar29 * fVar29 * fVar29;
        auVar39._12_4_ = fVar31 * fVar31 * fVar31;
        auVar38._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar38._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar38._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar38._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar39 = divps(auVar38,auVar39);
        auVar15._0_4_ =
             param_6 - (auVar39._0_4_ +
                       ((float)((uint)ABS(*(float *)*pauVar4) >> 0x17) - 127.0) * 0.30103) * 10.0;
        auVar15._4_4_ =
             param_6 - (auVar39._4_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 4)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar15._8_4_ =
             param_6 - (auVar39._8_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 8)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar15._12_4_ =
             param_6 - (auVar39._12_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 0xc)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar39 = maxps(auVar15,ZEXT816(0));
        *pauVar4 = auVar39;
        fVar10 = (float)(((uint)*(float *)pauVar4[1] & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)pauVar4[1] + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)pauVar4[1] + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)pauVar4[1] + 0xc) & 0x7fffff) + 0x3f800000);
        fVar27 = fVar10 + 1.0;
        fVar36 = fVar11 + 1.0;
        fVar29 = fVar12 + 1.0;
        fVar31 = fVar13 + 1.0;
        auVar16._0_4_ = fVar27 * fVar27 * fVar27;
        auVar16._4_4_ = fVar36 * fVar36 * fVar36;
        auVar16._8_4_ = fVar29 * fVar29 * fVar29;
        auVar16._12_4_ = fVar31 * fVar31 * fVar31;
        auVar40._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar40._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar40._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar40._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar39 = divps(auVar40,auVar16);
        auVar17._0_4_ =
             param_6 - (auVar39._0_4_ +
                       ((float)((uint)ABS(*(float *)pauVar4[1]) >> 0x17) - 127.0) * 0.30103) * 10.0;
        auVar17._4_4_ =
             param_6 - (auVar39._4_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[1] + 4)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar17._8_4_ =
             param_6 - (auVar39._8_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[1] + 8)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar17._12_4_ =
             param_6 - (auVar39._12_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[1] + 0xc)) >> 0x17) - 127.0)
                       * 0.30103) * 10.0;
        auVar39 = maxps(auVar17,ZEXT816(0));
        pauVar4[1] = auVar39;
        fVar10 = (float)(((uint)*(float *)pauVar4[2] & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)pauVar4[2] + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)pauVar4[2] + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)pauVar4[2] + 0xc) & 0x7fffff) + 0x3f800000);
        fVar27 = fVar10 + 1.0;
        fVar36 = fVar11 + 1.0;
        fVar29 = fVar12 + 1.0;
        fVar31 = fVar13 + 1.0;
        auVar18._0_4_ = fVar27 * fVar27 * fVar27;
        auVar18._4_4_ = fVar36 * fVar36 * fVar36;
        auVar18._8_4_ = fVar29 * fVar29 * fVar29;
        auVar18._12_4_ = fVar31 * fVar31 * fVar31;
        auVar41._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar41._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar41._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar41._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar39 = divps(auVar41,auVar18);
        auVar19._0_4_ =
             param_6 - (auVar39._0_4_ +
                       ((float)((uint)ABS(*(float *)pauVar4[2]) >> 0x17) - 127.0) * 0.30103) * 10.0;
        auVar19._4_4_ =
             param_6 - (auVar39._4_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[2] + 4)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar19._8_4_ =
             param_6 - (auVar39._8_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[2] + 8)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar19._12_4_ =
             param_6 - (auVar39._12_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[2] + 0xc)) >> 0x17) - 127.0)
                       * 0.30103) * 10.0;
        auVar39 = maxps(auVar19,ZEXT816(0));
        pauVar4[2] = auVar39;
        fVar10 = (float)(((uint)*(float *)pauVar4[3] & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)pauVar4[3] + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)pauVar4[3] + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)pauVar4[3] + 0xc) & 0x7fffff) + 0x3f800000);
        fVar27 = fVar10 + 1.0;
        fVar36 = fVar11 + 1.0;
        fVar29 = fVar12 + 1.0;
        fVar31 = fVar13 + 1.0;
        auVar20._0_4_ = fVar27 * fVar27 * fVar27;
        auVar20._4_4_ = fVar36 * fVar36 * fVar36;
        auVar20._8_4_ = fVar29 * fVar29 * fVar29;
        auVar20._12_4_ = fVar31 * fVar31 * fVar31;
        auVar42._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar42._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar42._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar42._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar39 = divps(auVar42,auVar20);
        auVar21._0_4_ =
             param_6 - (auVar39._0_4_ +
                       ((float)((uint)ABS(*(float *)pauVar4[3]) >> 0x17) - 127.0) * 0.30103) * 10.0;
        auVar21._4_4_ =
             param_6 - (auVar39._4_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[3] + 4)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar21._8_4_ =
             param_6 - (auVar39._8_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[3] + 8)) >> 0x17) - 127.0) *
                       0.30103) * 10.0;
        auVar21._12_4_ =
             param_6 - (auVar39._12_4_ +
                       ((float)((uint)ABS(*(float *)((longlong)pauVar4[3] + 0xc)) >> 0x17) - 127.0)
                       * 0.30103) * 10.0;
        auVar39 = maxps(auVar21,ZEXT816(0));
        pauVar4[3] = auVar39;
        pauVar4 = pauVar4 + 4;
      } while (pauVar4 < pauVar6 + -3);
      if (pauVar6 <= pauVar4) goto LAB_14510fad9;
    }
    do {
      fVar10 = (float)(((uint)*(float *)*pauVar4 & 0x7fffff) + 0x3f800000);
      fVar11 = (float)(((uint)*(float *)((longlong)*pauVar4 + 4) & 0x7fffff) + 0x3f800000);
      fVar12 = (float)(((uint)*(float *)((longlong)*pauVar4 + 8) & 0x7fffff) + 0x3f800000);
      fVar13 = (float)(((uint)*(float *)((longlong)*pauVar4 + 0xc) & 0x7fffff) + 0x3f800000);
      fVar27 = fVar10 + 1.0;
      fVar36 = fVar11 + 1.0;
      fVar29 = fVar12 + 1.0;
      fVar31 = fVar13 + 1.0;
      auVar22._0_4_ = fVar27 * fVar27 * fVar27;
      auVar22._4_4_ = fVar36 * fVar36 * fVar36;
      auVar22._8_4_ = fVar29 * fVar29 * fVar29;
      auVar22._12_4_ = fVar31 * fVar31 * fVar31;
      auVar43._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
      auVar43._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
      auVar43._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
      auVar43._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
      auVar39 = divps(auVar43,auVar22);
      auVar23._0_4_ =
           param_6 - (auVar39._0_4_ +
                     ((float)((uint)ABS(*(float *)*pauVar4) >> 0x17) - 127.0) * 0.30103) * 10.0;
      auVar23._4_4_ =
           param_6 - (auVar39._4_4_ +
                     ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 4)) >> 0x17) - 127.0) *
                     0.30103) * 10.0;
      auVar23._8_4_ =
           param_6 - (auVar39._8_4_ +
                     ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 8)) >> 0x17) - 127.0) *
                     0.30103) * 10.0;
      auVar23._12_4_ =
           param_6 - (auVar39._12_4_ +
                     ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 0xc)) >> 0x17) - 127.0) *
                     0.30103) * 10.0;
      auVar39 = maxps(auVar23,ZEXT816(0));
      *pauVar4 = auVar39;
      pauVar4 = pauVar4 + 1;
    } while (pauVar4 < pauVar6);
LAB_14510faf0:
    do {
      fVar11 = *(float *)((longlong)*pauVar3 + 0xc);
      fVar10 = param_9;
      if (0.0 <= fVar48 - *(float *)*pauVar3) {
        fVar10 = param_8;
      }
      fVar10 = (1.0 - fVar10) * *(float *)*pauVar3 + fVar10 * fVar48;
      fVar48 = param_9;
      if (0.0 <= fVar10 - *(float *)((longlong)*pauVar3 + 4)) {
        fVar48 = param_8;
      }
      fVar12 = (1.0 - fVar48) * *(float *)((longlong)*pauVar3 + 4) + fVar48 * fVar10;
      fVar48 = param_9;
      if (0.0 <= fVar12 - *(float *)((longlong)*pauVar3 + 8)) {
        fVar48 = param_8;
      }
      fVar13 = (1.0 - fVar48) * *(float *)((longlong)*pauVar3 + 8) + fVar48 * fVar12;
      fVar48 = param_9;
      if (0.0 <= fVar13 - fVar11) {
        fVar48 = param_8;
      }
      *(float *)*pauVar3 = -fVar10;
      *(float *)((longlong)*pauVar3 + 4) = -fVar12;
      *(float *)((longlong)*pauVar3 + 8) = -fVar13;
      fVar48 = (1.0 - fVar48) * fVar11 + fVar48 * fVar13;
      *(float *)((longlong)*pauVar3 + 0xc) = -fVar48;
      pauVar3 = pauVar3 + 1;
    } while (pauVar3 < pauVar6);
    pauVar3 = param_2;
    if (0x3f < uVar7) {
      do {
        fVar10 = *(float *)*pauVar3 * param_7 * 0.05;
        fVar11 = *(float *)((longlong)*pauVar3 + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)*pauVar3 + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)*pauVar3 + 0xc) * param_7 * 0.05;
        uVar37 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar37 & (uint)fVar10 | uVar37 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar24 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar25 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar26 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar24 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar25 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar26 & 0x7fffff) + 0x3f800000);
        *(uint *)*pauVar3 =
             ~uVar37 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar24 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar25 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar26 & 0xff800000));
        fVar10 = *(float *)pauVar3[1] * param_7 * 0.05;
        fVar11 = *(float *)((longlong)pauVar3[1] + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)pauVar3[1] + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)pauVar3[1] + 0xc) * param_7 * 0.05;
        uVar37 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar37 & (uint)fVar10 | uVar37 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar24 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar25 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar26 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar24 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar25 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar26 & 0x7fffff) + 0x3f800000);
        *(uint *)pauVar3[1] =
             ~uVar37 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)pauVar3[1] + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar24 & 0xff800000));
        *(uint *)((longlong)pauVar3[1] + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar25 & 0xff800000));
        *(uint *)((longlong)pauVar3[1] + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar26 & 0xff800000));
        fVar10 = *(float *)pauVar3[2] * param_7 * 0.05;
        fVar11 = *(float *)((longlong)pauVar3[2] + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)pauVar3[2] + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)pauVar3[2] + 0xc) * param_7 * 0.05;
        uVar37 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar37 & (uint)fVar10 | uVar37 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar24 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar25 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar26 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar24 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar25 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar26 & 0x7fffff) + 0x3f800000);
        *(uint *)pauVar3[2] =
             ~uVar37 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)pauVar3[2] + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar24 & 0xff800000));
        *(uint *)((longlong)pauVar3[2] + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar25 & 0xff800000));
        *(uint *)((longlong)pauVar3[2] + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar26 & 0xff800000));
        fVar10 = *(float *)pauVar3[3] * param_7 * 0.05;
        fVar11 = *(float *)((longlong)pauVar3[3] + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)pauVar3[3] + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)pauVar3[3] + 0xc) * param_7 * 0.05;
        uVar37 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar37 & (uint)fVar10 | uVar37 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar24 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar25 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar26 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar24 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar25 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar26 & 0x7fffff) + 0x3f800000);
        *(uint *)pauVar3[3] =
             ~uVar37 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)pauVar3[3] + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar24 & 0xff800000));
        *(uint *)((longlong)pauVar3[3] + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar25 & 0xff800000));
        *(uint *)((longlong)pauVar3[3] + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar26 & 0xff800000));
        pauVar3 = pauVar3 + 4;
      } while (pauVar3 < pauVar6 + -3);
    }
    if (pauVar3 < pauVar6) {
      fVar10 = param_7 * 0.05;
      do {
        fVar11 = fVar10 * *(float *)*pauVar3;
        fVar12 = fVar10 * *(float *)((longlong)*pauVar3 + 4);
        fVar13 = fVar10 * *(float *)((longlong)*pauVar3 + 8);
        fVar27 = fVar10 * *(float *)((longlong)*pauVar3 + 0xc);
        uVar37 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar44 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar45 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar47 = -(uint)(37.0 < fVar27 || fVar27 < -37.0);
        uVar14 = (uint)((float)(~uVar37 & (uint)fVar11 | uVar37 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar24 = (uint)((float)(~uVar44 & (uint)fVar12 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar25 = (uint)((float)(~uVar45 & (uint)fVar13 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar26 = (uint)((float)(~uVar47 & (uint)fVar27 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar11 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar24 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar25 & 0x7fffff) + 0x3f800000);
        fVar27 = (float)((uVar26 & 0x7fffff) + 0x3f800000);
        *(uint *)*pauVar3 =
             ~uVar37 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 4) =
             ~uVar44 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar24 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 8) =
             ~uVar45 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar25 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 0xc) =
             ~uVar47 & (uint)(((fVar27 * 0.32518977 + 0.020805772) * fVar27 + 0.65304345) *
                             (float)(uVar26 & 0xff800000));
        pauVar3 = pauVar3 + 1;
      } while (pauVar3 < pauVar6);
    }
  }
  else {
LAB_14510f821:
    if (param_2 < pauVar6) goto LAB_14510f82d;
LAB_14510fad9:
    if (param_2 < pauVar6) goto LAB_14510faf0;
  }
  if (pauVar6 < pauVar1) {
    if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar6) & 0xfffffffffffffffcU)) {
      do {
        fVar11 = (*(float *)*pauVar6 + 1e-25) * fVar28 + fVar30 * param_10;
        fVar30 = (float)(((uint)fVar11 & 0x7fffff) + 0x3f800000);
        fVar10 = fVar30 + 1.0;
        fVar30 = param_6 - ((11.581186 / (fVar10 * fVar10 * fVar10)) *
                            (fVar30 * fVar30 * fVar30 - 1.0) +
                           ((float)((uint)fVar11 >> 0x17 & 0xff) - 127.0) * 3.0103002);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar10 = param_9;
        if (0.0 <= fVar48 - fVar30) {
          fVar10 = param_8;
        }
        fVar48 = (1.0 - fVar10) * fVar30 + fVar10 * fVar48;
        fVar30 = fVar48 * param_7 * -0.05;
        if ((fVar30 < -37.0) || (37.0 < fVar30)) {
          fVar30 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar30 * 27866352.0 + 1.0653532e+09);
          fVar30 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar30 = ((fVar30 * 0.32518977 + 0.020805772) * fVar30 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        fVar10 = *(float *)((longlong)*pauVar6 + 4);
        *(float *)*pauVar6 = fVar30;
        fVar11 = (fVar10 + 1e-25) * fVar28 + fVar11 * param_10;
        fVar30 = (float)(((uint)fVar11 & 0x7fffff) + 0x3f800000);
        fVar10 = fVar30 + 1.0;
        fVar30 = param_6 - ((11.581186 / (fVar10 * fVar10 * fVar10)) *
                            (fVar30 * fVar30 * fVar30 - 1.0) +
                           ((float)((uint)fVar11 >> 0x17 & 0xff) - 127.0) * 3.0103002);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar10 = param_9;
        if (0.0 <= fVar48 - fVar30) {
          fVar10 = param_8;
        }
        fVar48 = (1.0 - fVar10) * fVar30 + fVar10 * fVar48;
        fVar30 = fVar48 * param_7 * -0.05;
        if ((fVar30 < -37.0) || (37.0 < fVar30)) {
          fVar30 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar30 * 27866352.0 + 1.0653532e+09);
          fVar30 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar30 = ((fVar30 * 0.32518977 + 0.020805772) * fVar30 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)((longlong)*pauVar6 + 4) = fVar30;
        fVar11 = (*(float *)((longlong)*pauVar6 + 8) + 1e-25) * fVar28 + fVar11 * param_10;
        fVar30 = (float)(((uint)fVar11 & 0x7fffff) + 0x3f800000);
        fVar10 = fVar30 + 1.0;
        fVar30 = param_6 - ((11.581186 / (fVar10 * fVar10 * fVar10)) *
                            (fVar30 * fVar30 * fVar30 - 1.0) +
                           ((float)((uint)fVar11 >> 0x17 & 0xff) - 127.0) * 3.0103002);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar10 = param_9;
        if (0.0 <= fVar48 - fVar30) {
          fVar10 = param_8;
        }
        fVar48 = (1.0 - fVar10) * fVar30 + fVar10 * fVar48;
        fVar30 = fVar48 * param_7 * -0.05;
        if ((fVar30 < -37.0) || (37.0 < fVar30)) {
          fVar30 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar30 * 27866352.0 + 1.0653532e+09);
          fVar30 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar30 = ((fVar30 * 0.32518977 + 0.020805772) * fVar30 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)((longlong)*pauVar6 + 8) = fVar30;
        fVar30 = (*(float *)((longlong)*pauVar6 + 0xc) + 1e-25) * fVar28 + fVar11 * param_10;
        fVar10 = (float)(((uint)fVar30 & 0x7fffff) + 0x3f800000);
        fVar11 = fVar10 + 1.0;
        fVar10 = param_6 - ((11.581186 / (fVar11 * fVar11 * fVar11)) *
                            (fVar10 * fVar10 * fVar10 - 1.0) +
                           ((float)((uint)fVar30 >> 0x17 & 0xff) - 127.0) * 3.0103002);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar11 = param_9;
        if (0.0 <= fVar48 - fVar10) {
          fVar11 = param_8;
        }
        fVar48 = (1.0 - fVar11) * fVar10 + fVar11 * fVar48;
        fVar10 = fVar48 * param_7 * -0.05;
        if ((fVar10 < -37.0) || (37.0 < fVar10)) {
          fVar10 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar10 * 27866352.0 + 1.0653532e+09);
          fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar10 = ((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)((longlong)*pauVar6 + 0xc) = fVar10;
        pauVar6 = pauVar6 + 1;
      } while (pauVar6 < (undefined1 (*) [16])((longlong)pauVar1[-1] + 4));
      if (pauVar1 <= pauVar6) goto LAB_145110691;
    }
    do {
      fVar30 = (*(float *)*pauVar6 + 1e-25) * fVar28 + fVar30 * param_10;
      fVar10 = (float)(((uint)fVar30 & 0x7fffff) + 0x3f800000);
      fVar11 = fVar10 + 1.0;
      fVar10 = param_6 - ((11.581186 / (fVar11 * fVar11 * fVar11)) *
                          (fVar10 * fVar10 * fVar10 - 1.0) +
                         ((float)((uint)fVar30 >> 0x17 & 0xff) - 127.0) * 3.0103002);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = param_9;
      if (0.0 <= fVar48 - fVar10) {
        fVar11 = param_8;
      }
      fVar48 = (1.0 - fVar11) * fVar10 + fVar11 * fVar48;
      fVar10 = fVar48 * param_7 * -0.05;
      if ((fVar10 < -37.0) || (37.0 < fVar10)) {
        fVar10 = 0.0;
      }
      else {
        uVar14 = (uint)(longlong)(fVar10 * 27866352.0 + 1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar10 = ((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                 (float)(uVar14 & 0xff800000);
      }
      *(float *)*pauVar6 = fVar10;
      pauVar6 = (undefined1 (*) [16])((longlong)*pauVar6 + 4);
    } while (pauVar6 < pauVar1);
  }
LAB_145110691:
  *param_5 = fVar48;
  param_5[1] = fVar30;
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
    uVar7 = param_4 & 0xffffffff;
    if (pauVar1 < param_2) {
      uVar7 = 0;
    }
    do {
      pfVar5 = (float *)*param_1;
      pauVar6 = param_2;
      if (((uVar7 != 0) && (0xf < uVar7)) &&
         (((float *)((longlong)param_2[-1] + (uVar7 + 3) * 4) < pfVar5 ||
          ((undefined1 (*) [16])(pfVar5 + (uVar7 - 1)) < param_2)))) {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 0x10;
          fVar30 = *(float *)((longlong)*pauVar6 + 4);
          fVar48 = *(float *)((longlong)*pauVar6 + 8);
          fVar10 = *(float *)((longlong)*pauVar6 + 0xc);
          *pfVar5 = *(float *)*pauVar6 * *pfVar5;
          pfVar5[1] = fVar30 * pfVar5[1];
          pfVar5[2] = fVar48 * pfVar5[2];
          pfVar5[3] = fVar10 * pfVar5[3];
          fVar30 = *(float *)((longlong)pauVar6[1] + 4);
          fVar48 = *(float *)((longlong)pauVar6[1] + 8);
          fVar10 = *(float *)((longlong)pauVar6[1] + 0xc);
          pfVar5[4] = *(float *)pauVar6[1] * pfVar5[4];
          pfVar5[5] = fVar30 * pfVar5[5];
          pfVar5[6] = fVar48 * pfVar5[6];
          pfVar5[7] = fVar10 * pfVar5[7];
          fVar30 = *(float *)((longlong)pauVar6[2] + 4);
          fVar48 = *(float *)((longlong)pauVar6[2] + 8);
          fVar10 = *(float *)((longlong)pauVar6[2] + 0xc);
          pfVar5[8] = *(float *)pauVar6[2] * pfVar5[8];
          pfVar5[9] = fVar30 * pfVar5[9];
          pfVar5[10] = fVar48 * pfVar5[10];
          pfVar5[0xb] = fVar10 * pfVar5[0xb];
          auVar39 = *(undefined1 (*) [16])(pfVar5 + 0xc);
          pauVar3 = pauVar6 + 3;
          fVar30 = *(float *)((longlong)pauVar6[3] + 4);
          fVar48 = *(float *)((longlong)pauVar6[3] + 8);
          fVar10 = *(float *)((longlong)pauVar6[3] + 0xc);
          pauVar6 = pauVar6 + 4;
          pfVar5[0xc] = *(float *)*pauVar3 * auVar39._0_4_;
          pfVar5[0xd] = fVar30 * auVar39._4_4_;
          pfVar5[0xe] = fVar48 * auVar39._8_4_;
          pfVar5[0xf] = fVar10 * auVar39._12_4_;
          pfVar5 = pfVar5 + 0x10;
        } while (uVar8 < (uVar7 & 0xfffffffffffffff0));
      }
      if (pauVar6 < pauVar1) {
        if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar6) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = *(float *)*pauVar6 * *pfVar5;
            pfVar5[1] = *(float *)((longlong)*pauVar6 + 4) * pfVar5[1];
            pfVar5[2] = *(float *)((longlong)*pauVar6 + 8) * pfVar5[2];
            pfVar2 = (float *)*pauVar6;
            pauVar6 = pauVar6 + 1;
            pfVar5[3] = pfVar2[3] * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pauVar6 < (undefined1 (*) [16])((longlong)pauVar1[-1] + 4));
          if (pauVar1 <= pauVar6) goto LAB_14511081a;
        }
        do {
          pfVar2 = (float *)*pauVar6;
          pauVar6 = (undefined1 (*) [16])((longlong)*pauVar6 + 4);
          *pfVar5 = *pfVar2 * *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (pauVar6 < pauVar1);
      }
LAB_14511081a:
      param_1 = param_1 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 145110840 FUN_145110840 body=83 status=ok
// SIG undefined FUN_145110840(void)

void FUN_145110840(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkExpander\\AkExpanderFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2b350;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 1451108f0 FUN_1451108f0 body=56 status=ok
// SIG undefined FUN_1451108f0(void)

undefined8 FUN_1451108f0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145110930 FUN_145110930 body=116 status=ok
// SIG undefined FUN_145110930(void)

undefined8 FUN_145110930(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  fVar1 = powf(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x15);
  return 1;
}



// FUNCTION 1451109b0 FUN_1451109b0 body=345 status=ok
// SIG undefined FUN_1451109b0(void)

undefined4 FUN_1451109b0(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      fVar1 = *param_3;
      fVar2 = -96.3;
      if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 8) = fVar2;
      return 1;
    case 1:
      *(float *)(param_1 + 0xc) = *param_3;
      return 1;
    case 2:
      fVar1 = *param_3;
      fVar2 = 0.0;
      if ((0.0 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
        fVar2 = 2.0;
      }
      *(float *)(param_1 + 0x10) = fVar2;
      return 1;
    case 3:
      fVar1 = *param_3;
      fVar2 = 0.0;
      if ((0.0 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
        fVar2 = 2.0;
      }
      break;
    case 4:
      fVar1 = *param_3;
      fVar2 = -24.0;
      if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
        fVar2 = 24.0;
      }
      fVar1 = powf(10.0,fVar2 * 0.05);
      *(float *)(param_1 + 0x18) = fVar1;
      return 1;
    case 5:
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)param_3;
      return 1;
    case 6:
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)param_3;
      return 1;
    default:
      return 0x1f;
    }
    *(float *)(param_1 + 0x14) = fVar2;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 145110b30 FUN_145110b30 body=43 status=ok
// SIG undefined FUN_145110b30(void)

undefined8 * FUN_145110b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145110b60 FUN_145110b60 body=52 status=ok
// SIG undefined FUN_145110b60(void)

void FUN_145110b60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkExpander\\AkExpanderFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b350;
    return;
  }
  return;
}



// FUNCTION 145110ba0 FUN_145110ba0 body=313 status=ok
// SIG undefined FUN_145110ba0(void)

ulonglong FUN_145110ba0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  *(longlong *)(param_1 + 0x18) = param_4;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x2c);
  uVar2 = *(undefined4 *)(param_4 + 0x30);
  uVar3 = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_4 + 0x3c);
  uVar2 = *(undefined4 *)(param_4 + 0x40);
  uVar3 = *(undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_1451130f0(param_4,0);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x6c);
  uVar7 = param_5[1];
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar6 = uVar7 >> 0xc & 0xffff7;
    uVar7 = uVar7 & 0xf00 | uVar7 - ((uVar7 >> 0xc) - uVar6 >> 3) & 0xff | uVar6 << 0xc;
  }
  uVar6 = uVar7 >> 0xc;
  if ((((byte)uVar6 & 7) == 7) && (*(char *)(param_1 + 0x6d) == '\0')) {
    uVar7 = uVar7 & 0xf00 | uVar7 - (uVar6 - (uVar6 & 0xffffb) >> 2) & 0xff |
            (uVar6 & 0xffffb) << 0xc;
  }
  *(uint *)(param_1 + 0xb8) = uVar7 & 0xff;
  *(undefined4 *)(param_1 + 0xbc) = *param_5;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar5 = FUN_1451115a0(param_1,uVar7);
  if ((int)uVar5 == 1) {
    uVar6 = FUN_1451117f0(param_1,uVar7);
    uVar7 = 1;
    if (uVar6 != 1) {
      uVar7 = uVar6;
    }
    uVar5 = (ulonglong)uVar7;
  }
  return uVar5;
}



// FUNCTION 145110ce0 FUN_145110ce0 body=137 status=ok
// SIG undefined FUN_145110ce0(void)

undefined8 FUN_145110ce0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_1451118a0();
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
      *plVar1 = 0;
    }
    *(undefined4 *)(plVar1 + 1) = 0;
    if (param_1[2] != 0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
    }
    param_1[2] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 145110d70 FUN_145110d70 body=91 status=ok
// SIG undefined FUN_145110d70(void)

undefined8 FUN_145110d70(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(uint *)(param_1 + 0xb8) != 0)) {
    lVar1 = 0;
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xb8);
    do {
      FUN_1453bb410(*(longlong *)(param_1 + 8) + lVar1);
      lVar1 = lVar1 + 0x38;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 1;
}



// FUNCTION 145110df0 FUN_145110df0 body=1947 status=ok
// SIG undefined FUN_145110df0(void)

void FUN_145110df0(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8 [2];
  uint local_res18 [2];
  void *local_res20;
  undefined8 in_stack_ffffffffffffff38;
  uint *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(lVar11 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar11 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(lVar11 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar11 + 0x18);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar23 = *(undefined4 *)(lVar11 + 0x2c);
  uVar1 = *(undefined4 *)(lVar11 + 0x30);
  uVar2 = *(undefined4 *)(lVar11 + 0x34);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar11 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar23;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar23 = *(undefined4 *)(lVar11 + 0x3c);
  uVar1 = *(undefined4 *)(lVar11 + 0x40);
  uVar2 = *(undefined4 *)(lVar11 + 0x44);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar11 + 0x38);
  *(undefined4 *)(param_1 + 100) = uVar23;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  FUN_1451130f0(lVar11,0);
  uVar15 = 0;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 0x6f) != '\0') {
    iVar8 = FUN_145111920(param_1,param_2);
    if (iVar8 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (*(char *)(param_1 + 100) != '\0') {
    uVar16 = uVar15;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        FUN_1453bb440(uVar16 * 0x38 + *(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x38),
                      *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                      *(undefined4 *)(param_1 + 0x3c));
        uVar12 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(param_1 + 0xb8));
    }
    plVar4 = *(longlong **)(param_1 + 0x10);
    if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x6c) != '\0')) {
      uVar12 = *(uint *)(param_1 + 0xbc);
      FUN_145111ec0(uVar12,param_1 + 0x40,local_res18,local_res8);
      if ((int)plVar4[1] != 0) {
        fVar18 = (float)uVar12;
        uVar16 = uVar15;
        do {
          lVar11 = uVar16 * 0x20 + *plVar4;
          if (fVar18 <= *(float *)(param_1 + 0x44)) {
            fVar17 = 1.0;
          }
          else {
            fVar17 = *(float *)(param_1 + 0x44) / fVar18;
          }
          *(float *)(lVar11 + 0x10) = fVar17;
          if (*(int *)(param_1 + 0x40) == 0) {
            *(float *)(lVar11 + 0x10) = fVar17 * 6.2831855;
          }
          *(uint *)(lVar11 + 4) = local_res18[0];
          *(uint *)(lVar11 + 8) = local_res8[0];
          if (*(int *)(lVar11 + 0x14) != *(int *)(param_1 + 0x40)) {
            if (*(int *)(lVar11 + 0x14) == 0) {
              fVar17 = *(float *)(lVar11 + 0xc) * 0.15915494;
            }
            else {
              if (*(int *)(param_1 + 0x40) != 0) goto LAB_145110fb8;
              fVar17 = *(float *)(lVar11 + 0xc) * 6.2831855;
            }
            *(float *)(lVar11 + 0xc) = fVar17;
          }
LAB_145110fb8:
          uVar12 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar12;
          *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)(param_1 + 0x40);
        } while (uVar12 < *(uint *)(plVar4 + 1));
      }
    }
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    return;
  }
  if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
    uVar12 = *(uint *)(param_1 + 0xb0);
    uVar13 = (uint)(longlong)(*(float *)(param_1 + 0x68) * 0.001 * (float)*(uint *)(param_1 + 0xbc))
    ;
    if (uVar12 == 0) {
      if (*(short *)((longlong)param_2 + 0x12) == 0) goto LAB_145111122;
LAB_14511102a:
      *(uint *)(param_1 + 0xb0) = uVar13;
      uVar12 = uVar13;
LAB_145111036:
      *(uint *)(param_1 + 0xb4) = uVar13;
    }
    else {
      if ((uVar12 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) goto LAB_14511102a;
      if (*(uint *)(param_1 + 0xb4) < uVar13) {
        uVar12 = (uVar12 - *(uint *)(param_1 + 0xb4)) + uVar13;
        *(uint *)(param_1 + 0xb0) = uVar12;
        goto LAB_145111036;
      }
    }
    uVar10 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
    uVar13 = uVar12;
    if (uVar10 <= uVar12) {
      uVar13 = uVar10;
    }
    *(uint *)(param_1 + 0xb0) = uVar12 - uVar13;
    uVar3 = *(ushort *)(param_2 + 2);
    uVar7 = *(ushort *)((longlong)param_2 + 0x12);
    uVar16 = (ulonglong)*(byte *)(param_2 + 1);
    if (uVar3 <= uVar7) {
      uVar7 = uVar3;
    }
    iVar8 = (uint)uVar3 - (uint)uVar7;
    if (iVar8 != 0) {
      if (*(byte *)(param_2 + 1) != 0) {
        uVar14 = uVar15;
        do {
          memset((void *)(*param_2 +
                         (*(ushort *)(param_2 + 2) * uVar14 + (ulonglong)(uint)uVar7) * 4),0,
                 (ulonglong)(uint)(iVar8 * 4));
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      *(short *)((longlong)param_2 + 0x12) = (short)param_2[2];
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
LAB_145111122:
  uVar12 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  if (uVar12 < 0x20) {
    return;
  }
  uVar13 = *(uint *)(param_2 + 1);
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar10 = uVar13 >> 0xc & 0xffff7;
    uVar13 = uVar13 - ((uVar13 >> 0xc) - uVar10 >> 3) & 0xff | uVar10 << 0xc;
  }
  if ((*(char *)(param_1 + 0x6d) == '\0') && ((uVar13 & 0x7000) == 0x7000)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_res8[0] = uVar12;
  pvVar9 = (void *)(**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                             (*(longlong **)(param_1 + 0x20),
                              (ulonglong)*(ushort *)(param_2 + 2) << 2,
                              "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFX.cpp"
                              ,0x118);
  if (pvVar9 == (void *)0x0) {
    return;
  }
  fVar18 = *(float *)(param_1 + 0xa0);
  fVar19 = 1.0 - fVar18;
  fVar17 = *(float *)(param_1 + 0x60);
  fVar20 = 1.0 - fVar17;
  local_res20 = pvVar9;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar10 = uVar13 & 0xff;
    uVar16 = uVar15;
    local_res8[0] = uVar10;
    if ((char)uVar13 != '\0') {
      do {
        uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
        if ((!bVar6) || ((int)uVar15 != 2)) {
          _Src = (void *)(*param_2 + uVar15 * *(ushort *)(param_2 + 2) * 4);
          memcpy(pvVar9,_Src,(ulonglong)(uVar12 * 4));
          FUN_1453bb4b0(uVar16 * 0x38 + *(longlong *)(param_1 + 8),_Src,uVar12,0);
          uVar16 = (ulonglong)((int)uVar16 + 1);
          in_stack_ffffffffffffff38 = CONCAT44(uVar23,uVar12);
          FUN_1453baf30(_Src,local_res20,*(float *)(param_1 + 0x9c) * fVar18,
                        *(float *)(param_1 + 0x5c) * fVar17,*(float *)(param_1 + 0x9c) * fVar19,
                        *(float *)(param_1 + 0x5c) * fVar20,in_stack_ffffffffffffff38);
          pvVar9 = local_res20;
          uVar10 = local_res8[0];
        }
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar10);
    }
  }
  else {
    lVar11 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                       (*(longlong **)(param_1 + 0x20),(ulonglong)uVar12 << 2,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFX.cpp"
                        ,0x124);
    uVar12 = local_res8[0];
    uVar23 = *(undefined4 *)(param_1 + 0x4c);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    uVar10 = uVar13 & 0xff;
    local_res18[0] = uVar10;
    if ((char)uVar13 != '\0') {
      uVar16 = uVar15;
      if (lVar11 == 0) {
        do {
          uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
          if ((!bVar6) || ((int)uVar15 != 2)) {
            pvVar9 = (void *)(*param_2 + uVar15 * *(ushort *)(param_2 + 2) * 4);
            memcpy(local_res20,pvVar9,(ulonglong)(uVar12 * 4));
            FUN_1453bb4b0(uVar16 * 0x38 + *(longlong *)(param_1 + 8),pvVar9,uVar12,0);
            uVar16 = (ulonglong)((int)uVar16 + 1);
            in_stack_ffffffffffffff38 = CONCAT44(uVar23,uVar12);
            FUN_1453baf30(pvVar9,local_res20,*(float *)(param_1 + 0x9c) * fVar18,
                          *(float *)(param_1 + 0x5c) * fVar17,*(float *)(param_1 + 0x9c) * fVar19,
                          *(float *)(param_1 + 0x5c) * fVar20,in_stack_ffffffffffffff38);
            uVar10 = local_res18[0];
          }
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
        } while (uVar13 < uVar10);
        goto LAB_145111501;
      }
      do {
        if ((!bVar6) || ((int)uVar15 != 2)) {
          puVar21 = local_res8;
          FUN_145111fc0(uVar16 * 0x20 + **(longlong **)(param_1 + 0x10),lVar11,uVar12,uVar1,uVar2,
                        uVar23,puVar21);
          uVar22 = (undefined4)((ulonglong)puVar21 >> 0x20);
          pvVar9 = (void *)(*param_2 + uVar15 * *(ushort *)(param_2 + 2) * 4);
          memcpy(local_res20,pvVar9,(ulonglong)(uVar12 * 4));
          FUN_1453bb4b0(uVar16 * 0x38 + *(longlong *)(param_1 + 8),pvVar9,uVar12,lVar11);
          uVar16 = (ulonglong)((int)uVar16 + 1);
          FUN_1453baf30(pvVar9,local_res20,*(float *)(param_1 + 0x9c) * fVar18,
                        *(float *)(param_1 + 0x5c) * fVar17,*(float *)(param_1 + 0x9c) * fVar19,
                        *(float *)(param_1 + 0x5c) * fVar20,CONCAT44(uVar22,uVar12));
          uVar10 = local_res18[0];
        }
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar10);
    }
    if (lVar11 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    }
  }
LAB_145111501:
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),local_res20);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  return;
}



// FUNCTION 1451115a0 FUN_1451115a0 body=577 status=ok
// SIG undefined FUN_1451115a0(void)

undefined8 FUN_1451115a0(longlong param_1,byte param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                    (*(longlong **)(param_1 + 0x20),(ulonglong)param_2 * 0x38,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFX.cpp"
                     ,0x62);
  *(longlong *)(param_1 + 8) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  uVar9 = 0;
  uVar11 = 0;
  if (param_2 < 4) {
    uVar7 = uVar9;
    if (param_2 != 0) goto LAB_145111701;
  }
  else {
    uVar2 = (param_2 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar2;
    uVar11 = uVar2 * 4;
    uVar7 = uVar9;
    do {
      puVar6 = (undefined8 *)(uVar7 + lVar3);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
      }
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x38 + uVar7);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
      }
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x70 + uVar7);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
      }
      lVar3 = *(longlong *)(param_1 + 8);
      puVar6 = (undefined8 *)(lVar3 + 0xa8 + uVar7);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
        lVar3 = *(longlong *)(param_1 + 8);
      }
      uVar7 = uVar7 + 0xe0;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar7 = (ulonglong)uVar2 * 4;
    if (param_2 <= uVar11) {
      uVar7 = (ulonglong)((float)*(uint *)(param_1 + 0xbc) * *(float *)(param_1 + 0x68) * 0.001);
      goto LAB_145111763;
    }
LAB_145111701:
    lVar8 = uVar7 * 0x38;
    uVar7 = (ulonglong)(param_2 - uVar11);
    do {
      puVar6 = (undefined8 *)(lVar8 + lVar3);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
        lVar3 = *(longlong *)(param_1 + 8);
      }
      lVar8 = lVar8 + 0x38;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = (ulonglong)(*(float *)(param_1 + 0x68) * 0.001 * (float)*(uint *)(param_1 + 0xbc));
  if (param_2 == 0) {
    return 1;
  }
LAB_145111763:
  do {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
    uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar5 = FUN_1453bb2e0(uVar9 * 0x38 + *(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                          uVar7 & 0xffffffff,uVar1,*(undefined4 *)(param_1 + 0x38),
                          *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
                          *(undefined4 *)(param_1 + 0x3c));
    if ((int)uVar5 != 1) {
      return uVar5;
    }
    uVar11 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar11;
  } while (uVar11 < param_2);
  return 1;
}



// FUNCTION 1451117f0 FUN_1451117f0 body=170 status=ok
// SIG undefined FUN_1451117f0(void)

undefined8 FUN_1451117f0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 1;
  if ((*(char *)(param_1 + 0x6c) != '\0') && ((char)param_2 != '\0')) {
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                       (*(longlong **)(param_1 + 0x20),0x10,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFX.cpp"
                       );
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      uVar1 = FUN_145111b40(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),uVar1,
                            param_2,*(undefined4 *)(param_1 + 0xbc),param_1 + 0x40);
      return uVar1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = 0x34;
  }
  return uVar1;
}



// FUNCTION 1451118a0 FUN_1451118a0 body=115 status=ok
// SIG undefined FUN_1451118a0(void)

void FUN_1451118a0(longlong param_1)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        FUN_1453bb3e0((ulonglong)uVar1 * 0x38 + *(longlong *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x20));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xb8));
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
              (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 145111920 FUN_145111920 body=344 status=ok
// SIG undefined FUN_145111920(void)

undefined8 FUN_145111920(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_2 + 8);
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar7 = uVar3 >> 0xc & 0xffff7;
    uVar3 = uVar3 & 0xf00 | uVar3 - ((uVar3 >> 0xc) - uVar7 >> 3) & 0xff | uVar7 << 0xc;
  }
  uVar7 = uVar3 >> 0xc;
  if ((((byte)uVar7 & 7) == 7) && (*(char *)(param_1 + 0x6d) == '\0')) {
    uVar3 = uVar3 & 0xf00 | uVar3 - (uVar7 - (uVar7 & 0xffffb) >> 2) & 0xff |
            (uVar7 & 0xffffb) << 0xc;
  }
  lVar6 = 0;
  uVar7 = *(uint *)(param_1 + 0xb8);
  uVar5 = uVar3 & 0xff;
  uVar4 = (ulonglong)uVar5;
  if ((*(char *)(param_1 + 0xac) != *(char *)(param_1 + 0x6c)) || (uVar5 != uVar7)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *plVar1 = 0;
      }
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    uVar2 = FUN_1451117f0(param_1,uVar3);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
  }
  if ((*(float *)(param_1 + 0x68) != *(float *)(param_1 + 0xa8)) || (uVar5 != uVar7)) {
    FUN_1451118a0(param_1);
    uVar2 = FUN_1451115a0(param_1,uVar3);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    if ((*(longlong *)(param_1 + 8) != 0) && ((char)uVar3 != '\0')) {
      do {
        FUN_1453bb410(*(longlong *)(param_1 + 8) + lVar6);
        lVar6 = lVar6 + 0x38;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(uint *)(param_1 + 0xb8) = uVar5;
  return 1;
}



// FUNCTION 145111a80 FUN_145111a80 body=43 status=ok
// SIG undefined FUN_145111a80(void)

undefined8 * FUN_145111a80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 145111ab0 FUN_145111ab0 body=142 status=ok
// SIG undefined FUN_145111ab0(void)

undefined8 * FUN_145111ab0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0xc0,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFX.cpp"
                      ,0x17);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
    *puVar1 = &PTR_FUN_149c2b408;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145111b40 FUN_145111b40 body=738 status=ok
// SIG undefined FUN_145111b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145111b40(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
             undefined4 param_5,int *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 auStack_110 [5];
  undefined4 auStack_e8 [4];
  longlong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  int iStack_bc;
  longlong lStack_b8;
  
  if (*param_1 != 0) {
    auStack_110[0] = 0x145111ba6;
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((char)(param_4 & 0xffffffff) != '\0') {
    auStack_110[0] = 0x145111bd7;
    lVar3 = (**(code **)(*param_2 + 8))
                      (param_2,(param_4 & 0xff) << 5,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\LFOMultiChannel.h"
                       ,0x43);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    *(int *)(param_1 + 1) = (int)(param_4 & 0xff);
    uVar4 = (param_4 & 0xff) * 4;
    uVar5 = uVar4 + 0xf;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffff0;
    }
    auStack_110[0] = 0x145111c13;
    lVar3 = -(uVar5 & 0xfffffffffffffff0);
    local_d8 = (longlong)&local_d8 + lVar3;
    *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x145111c37;
    FUN_1453ba8e0(param_3,param_4 & 0xffffffff,param_6 + 4,(longlong)&local_d8 + lVar3);
    uVar5 = 0;
    if ((int)param_1[1] != 0) {
      do {
        puVar6 = (undefined8 *)(*param_1 + uVar5 * 0x20);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        pcVar1 = *(code **)(*param_3 + 0xd8);
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x145111cba;
        iVar2 = (*pcVar1)(param_3);
        puVar6 = (undefined8 *)(uVar5 * 0x20 + *param_1);
        fVar8 = *(float *)(local_d8 + uVar5 * 4);
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x145111ce6;
        FUN_145111ec0(param_5,param_6,local_res8,local_res20);
        *(undefined4 *)((longlong)auStack_e8 + lVar3) = local_res20[0];
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x145111d0d;
        FUN_145111e30(puVar6,param_5,param_6,local_res8[0]);
        local_d0 = *puVar6;
        local_c0 = *(undefined4 *)(puVar6 + 2);
        iStack_bc = *(int *)((longlong)puVar6 + 0x14);
        lStack_b8 = puVar6[3];
        if (*param_6 == 0) {
          fVar9 = 6.2831855;
        }
        else {
          fVar9 = 1.0;
        }
        fVar8 = fVar9 * fVar8 * 0.0027777778;
        uStack_c8._0_4_ = (undefined4)puVar6[1];
        uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        if (iStack_bc == 1) {
          fVar8 = fVar8 + 0.25;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        else if (iStack_bc == 3) {
          fVar8 = fVar8 + 0.5;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        else if (iStack_bc == 5) {
          lStack_b8 = (longlong)iVar2 * 0x5851f42d4c957f2d + 1;
        }
        if (fVar8 < 0.0) {
          fVar8 = fVar8 + fVar9;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        if (fVar9 <= fVar8) {
          fVar8 = fVar8 - fVar9;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        *puVar6 = local_d0;
        puVar6[1] = uStack_c8;
        *(undefined4 *)(puVar6 + 2) = local_c0;
        *(int *)((longlong)puVar6 + 0x14) = iStack_bc;
        puVar6[3] = lStack_b8;
        if (iStack_bc == 0) {
          fVar9 = 6.2831855;
LAB_145111dc0:
          *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x145111dc5;
          fVar8 = fmodf(fVar8,fVar9);
          *(float *)((longlong)puVar6 + 0xc) = fVar8;
        }
        else if (iStack_bc != 5) {
          fVar9 = 1.0;
          goto LAB_145111dc0;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
  }
  return 1;
}



// FUNCTION 145111e30 FUN_145111e30 body=143 status=ok
// SIG undefined FUN_145111e30(void)

void FUN_145111e30(longlong param_1,uint param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  float fVar2;
  
  if ((float)param_2 <= (float)param_3[1]) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)param_3[1] / (float)param_2;
  }
  *(float *)(param_1 + 0x10) = fVar2;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = fVar2 * 6.2831855;
  }
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 4) = param_4;
  iVar1 = *param_3;
  if (*(int *)(param_1 + 0x14) != iVar1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.15915494;
      *(int *)(param_1 + 0x14) = *param_3;
      return;
    }
    if (iVar1 == 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 6.2831855;
      iVar1 = *param_3;
    }
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 145111ec0 FUN_145111ec0 body=253 status=ok
// SIG undefined FUN_145111ec0(void)

void FUN_145111ec0(uint param_1,longlong param_2,float *param_3,float *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  undefined8 extraout_XMM0_Qb;
  
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 == 0.0) {
    *param_4 = 0.0;
    *param_3 = 1.0;
    return;
  }
  dVar5 = (double)param_1;
  dVar1 = (double)*(float *)(param_2 + 4);
  if (dVar5 <= (double)*(float *)(param_2 + 4)) {
    dVar1 = dVar5;
  }
  dVar1 = log((dVar5 * 0.5) / dVar1);
  dVar1 = exp(-(dVar1 * (double)fVar4));
  auVar2._0_8_ = cos(((dVar1 * dVar5 * 0.5) / dVar5) * 6.283185307179586);
  auVar2._8_8_ = extraout_XMM0_Qb;
  dVar5 = 2.0 - auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 - 1.0;
  auVar3 = sqrtpd(auVar2,auVar3);
  fVar4 = (float)(auVar3._0_8_ - dVar5);
  *param_4 = fVar4;
  *param_3 = fVar4 + 1.0;
  return;
}



// FUNCTION 145111fc0 FUN_145111fc0 body=3012 status=ok
// SIG undefined FUN_145111fc0(void)

void FUN_145111fc0(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float param_6)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float _X;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b0;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  pfVar1 = param_2 + param_3;
  fVar21 = *(float *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar9 = param_1[3];
  fVar22 = (param_4 - param_5) / (float)param_3;
  bVar2 = fVar21 != 0.0;
  if (fVar21 <= 1e-08) {
    fVar21 = 1e-08;
  }
  uStack_c0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  uStack_c0._0_4_ = (float)uVar5;
  auVar10._0_4_ = (float)uStack_c0;
  local_c8._0_4_ = (float)uVar4;
  local_c8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar23 = local_c8._4_4_;
  _X = uStack_c0._4_4_;
  uStack_b0 = uVar9;
  local_c8 = uVar4;
  uStack_c0 = uVar5;
  switch(iVar3) {
  case 0:
    if (param_2 < pfVar1) {
      fVar23 = 1.0 / fVar21;
      do {
        auVar10._0_4_ = (1.5707964 - _X) * fVar23;
        iVar8 = (int)auVar10._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar10._0_4_)) {
          auVar10._4_4_ = auVar10._0_4_;
          auVar10._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar10);
          auVar10._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar10._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        for (; param_2 < pfVar7; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar10._0_4_ = _X * _X;
          *param_2 = (((0.008306325 - auVar10._0_4_ * 0.00018363654) * auVar10._0_4_ - 0.16664828) *
                      auVar10._0_4_ + 0.9999966) * _X * param_5;
        }
        auVar11._0_4_ = (3.1415927 - _X) * fVar23;
        iVar8 = (int)auVar11._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar11._0_4_)) {
          auVar11._4_4_ = auVar11._0_4_;
          auVar11._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar11);
          auVar11._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar11._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        for (; param_2 < pfVar7; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          auVar11._0_4_ = 3.1415927 - _X;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar10._0_4_ = auVar11._0_4_ * auVar11._0_4_;
          *param_2 = (((0.008306325 - auVar10._0_4_ * 0.00018363654) * auVar10._0_4_ - 0.16664828) *
                      auVar10._0_4_ + 0.9999966) * auVar11._0_4_ * param_5;
        }
        auVar12._0_4_ = (4.712389 - _X) * fVar23;
        iVar8 = (int)auVar12._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar12._0_4_)) {
          auVar12._4_4_ = auVar12._0_4_;
          auVar12._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar12);
          auVar12._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar12._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        for (; param_2 < pfVar7; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar11._0_4_ = _X - 3.1415927;
          auVar10._0_4_ = auVar11._0_4_ * auVar11._0_4_;
          *param_2 = ((0.16664828 - (0.008306325 - auVar10._0_4_ * 0.00018363654) * auVar10._0_4_) *
                      auVar10._0_4_ - 0.9999966) * auVar11._0_4_ * param_5;
        }
        auVar13._0_4_ = (6.2831855 - _X) * fVar23;
        iVar8 = (int)auVar13._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar13._0_4_)) {
          auVar13._4_4_ = auVar13._0_4_;
          auVar13._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar13);
          auVar13._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar13._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        for (; param_2 < register0x00000020; param_2 = param_2 + 1) {
          _X = _X + fVar21;
          param_5 = param_5 + fVar22;
          auVar11._0_4_ = 6.2831855 - _X;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          auVar10._0_4_ = auVar11._0_4_ * auVar11._0_4_;
          *param_2 = ((0.16664828 - (0.008306325 - auVar10._0_4_ * 0.00018363654) * auVar10._0_4_) *
                      auVar10._0_4_ - 0.9999966) * auVar11._0_4_ * param_5;
        }
        if (6.2831855 <= _X) {
          _X = _X + -6.2831855;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 1:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar14._0_4_ = (0.5 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar14._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar14._0_4_)) {
          auVar14._4_4_ = auVar14._0_4_;
          auVar14._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar14);
          auVar14._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar14._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        if (param_2 < pfVar7) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = (_X * 4.0 - 1.0) * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_ * param_5;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        auVar15._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar15._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar15._0_4_)) {
          auVar15._4_4_ = auVar15._0_4_;
          auVar15._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar15);
          auVar15._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar15._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = ((1.0 - _X) * 4.0 - 1.0) * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_ * param_5;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 2:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar16._0_4_ = (param_6 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar16._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar16._0_4_)) {
          auVar16._4_4_ = auVar16._0_4_;
          auVar16._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar16);
          auVar16._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar16._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar7 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar7 = param_2 + (int)uVar6;
        }
        if (param_2 < pfVar7) {
          do {
            param_5 = param_5 + fVar22;
            _X = _X + fVar21;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = fVar23 * param_5 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        auVar17._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar17._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar17._0_4_)) {
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_8_ = 0;
          uVar6 = movmskps((int)pfVar7,auVar17);
          auVar17._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar17._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            param_5 = param_5 + fVar22;
            _X = _X + fVar21;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = -(fVar23 * param_5) - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 3:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar18._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar18._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar18._0_4_)) {
          auVar18._4_4_ = auVar18._0_4_;
          auVar18._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar18);
          auVar18._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar18._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = ((_X + _X) - 1.0) * param_5 * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 4:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar19._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar19._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar19._0_4_)) {
          auVar19._4_4_ = auVar19._0_4_;
          auVar19._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar19);
          auVar19._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar19._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          register0x00000020 = (BADSPACEBASE *)(param_2 + (int)uVar6);
        }
        if (param_2 < register0x00000020) {
          do {
            _X = _X + fVar21;
            param_5 = param_5 + fVar22;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ = (1.0 - (_X + _X)) * param_5 * fVar23 - auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < register0x00000020);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
    break;
  case 5:
    if (param_2 < pfVar1) {
      auVar11._0_4_ = (float)local_c8;
      do {
        auVar20._0_4_ = (1.0 - _X) * (1.0 / fVar21);
        iVar8 = (int)auVar20._0_4_;
        if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar20._0_4_)) {
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar20);
          auVar20._0_4_ = (float)(int)(iVar8 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar20._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar7 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar7 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar7) {
          register0x00000020 = (BADSPACEBASE *)(uVar9 >> 0x21);
          do {
            param_5 = param_5 + fVar22;
            _X = _X + fVar21;
            uStack_c0 = CONCAT44(_X,(float)uStack_c0);
            auVar11._0_4_ =
                 (float)(longlong)register0x00000020 * 4.656613e-10 * param_5 * fVar23 -
                 auVar11._0_4_ * auVar10._0_4_;
            *param_2 = auVar11._0_4_;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_c8 = CONCAT44(local_c8._4_4_,auVar11._0_4_);
        }
        if (1.0 <= _X) {
          _X = _X + -1.0;
          uVar9 = uVar9 * 0x5851f42d4c957f2d + 1;
          uStack_c0 = CONCAT44(_X,(float)uStack_c0);
          uStack_b0 = uVar9;
        }
        uVar4 = local_c8;
        uVar5 = uStack_c0;
      } while (param_2 < pfVar1);
    }
  }
  uStack_c0 = uVar5;
  local_c8 = uVar4;
  if (bVar2) {
    *param_1 = local_c8;
    param_1[1] = uStack_c0;
    param_1[2] = CONCAT44(iVar3,fVar21);
    param_1[3] = uStack_b0;
    if (iVar3 == 0) {
      fVar21 = 6.2831855;
    }
    else {
      if (iVar3 == 5) {
        return;
      }
      fVar21 = 1.0;
    }
    fVar21 = fmodf(_X,fVar21);
    *(float *)((longlong)param_1 + 0xc) = fVar21;
  }
  return;
}



// FUNCTION 145112ba0 FUN_145112ba0 body=105 status=ok
// SIG undefined FUN_145112ba0(void)

void FUN_145112ba0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x48,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2b570;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x47) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x3c) = 1;
    return;
  }
  return;
}



// FUNCTION 145112c70 FUN_145112c70 body=56 status=ok
// SIG undefined FUN_145112c70(void)

undefined8 FUN_145112c70(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145112cb0 FUN_145112cb0 body=262 status=ok
// SIG undefined FUN_145112cb0(void)

undefined8 FUN_145112cb0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar3 = (float)param_2[4];
  *(float *)(param_1 + 0x14) = fVar3;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x18) = param_2[6];
  fVar1 = (float)param_2[7];
  *(float *)(param_1 + 0x20) = fVar1;
  fVar2 = (float)param_2[8];
  *(float *)(param_1 + 0x24) = fVar2;
  *(undefined4 *)(param_1 + 0x28) = param_2[9];
  *(undefined4 *)(param_1 + 0x30) = param_2[10];
  *(undefined4 *)(param_1 + 0x2c) = param_2[0xb];
  *(float *)(param_1 + 0x24) = fVar2 * 0.01;
  *(float *)(param_1 + 0x14) = fVar3 * 0.01;
  *(float *)(param_1 + 0x20) = fVar1 * 0.01;
  fVar3 = powf(10.0,(float)param_2[0xc] * 0.05);
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x38) = (float)param_2[0xd] * 0.01;
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)((longlong)param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 1;
}



// FUNCTION 145112dc0 FUN_145112dc0 body=720 status=ok
// SIG undefined FUN_145112dc0(void)

undefined4 FUN_145112dc0(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x40) = *param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    break;
  case 1:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x38) = fVar2 * 0.01;
    return 1;
  case 2:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(bool *)(param_1 + 0x46) = cVar1 != '\0';
    return 1;
  case 5:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
      fVar2 = 1.0;
    }
    *(float *)(param_1 + 8) = fVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 6:
    fVar3 = *param_3;
    fVar2 = -1.0;
    if ((-1.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
      fVar2 = 1.0;
    }
    *(float *)(param_1 + 0xc) = fVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 7:
    fVar3 = *param_3;
    fVar2 = -1.0;
    if ((-1.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
      fVar2 = 1.0;
    }
    *(float *)(param_1 + 0x10) = fVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 8:
    fVar3 = *param_3;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(int *)(param_1 + 0x18) = (int)(longlong)fVar3;
    return 1;
  case 9:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 10:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x14) = fVar2 * 0.01;
    return 1;
  case 0xe:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(bool *)(param_1 + 0x44) = cVar1 != '\0';
    return 1;
  case 0x10:
    fVar3 = *param_3;
    fVar2 = -24.0;
    if ((-24.0 <= fVar3) && (fVar2 = fVar3, 24.0 <= fVar3)) {
      fVar2 = 24.0;
    }
    fVar3 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x34) = fVar3;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return 1;
  case 0x11:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(bool *)(param_1 + 0x45) = cVar1 != '\0';
    return 1;
  case 0x12:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x20) = fVar2 * 0.01;
    return 1;
  case 0x13:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 100.0 <= fVar3)) {
      fVar2 = 100.0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(float *)(param_1 + 0x24) = fVar2 * 0.01;
    return 1;
  case 0x14:
    fVar3 = *param_3;
    fVar2 = -180.0;
    if ((-180.0 <= fVar3) && (fVar2 = fVar3, 180.0 <= fVar3)) {
      fVar2 = 180.0;
    }
    *(float *)(param_1 + 0x28) = fVar2;
    return 1;
  case 0x15:
    *(int *)(param_1 + 0x30) = (int)(longlong)*param_3;
    return 1;
  case 0x16:
    fVar3 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar3) && (fVar2 = fVar3, 180.0 <= fVar3)) {
      fVar2 = 180.0;
    }
    *(float *)(param_1 + 0x2c) = fVar2;
    return 1;
  }
  return 1;
}



// FUNCTION 1451130f0 FUN_1451130f0 body=7 status=ok
// SIG undefined FUN_1451130f0(void)

void FUN_1451130f0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x47) = param_2;
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  return;
}



// FUNCTION 145113100 FUN_145113100 body=43 status=ok
// SIG undefined FUN_145113100(void)

undefined8 * FUN_145113100(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145113130 FUN_145113130 body=52 status=ok
// SIG undefined FUN_145113130(void)

void FUN_145113130(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x48,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkFlanger\\AkFlangerFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b570;
    return;
  }
  return;
}



// FUNCTION 145113170 FUN_145113170 body=433 status=ok
// SIG undefined FUN_145113170(void)

undefined8
FUN_145113170(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,uint *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  *(longlong *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_4 + 0x1c);
  cVar1 = *(char *)(param_4 + 0x1d);
  *(char *)(param_1 + 0x51) = cVar1;
  *(uint *)(param_1 + 0x1c) = (uint)(byte)param_5[1];
  fVar7 = (float)*param_5;
  *(float *)(param_1 + 0x20) = fVar7;
  fVar6 = *(float *)(param_4 + 0x10);
  *(float *)(param_1 + 0x40) = fVar6;
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  fVar6 = expf(-2.2 / (fVar6 * fVar7));
  *(float *)(param_1 + 0x44) = fVar6;
  fVar6 = *(float *)(param_4 + 0x14);
  *(float *)(param_1 + 0x48) = fVar6;
  if (fVar6 <= 0.001) {
    fVar6 = 0.001;
  }
  fVar6 = expf(-2.2 / (fVar6 * fVar7));
  *(float *)(param_1 + 0x4c) = fVar6;
  uVar5 = param_5[1] & 0xff;
  *(uint *)(param_1 + 0x24) = uVar5;
  if ((param_5[1] & 0xf00) == 0x300) {
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (((param_5[1] & 0x8000) != 0) && (*(char *)(param_4 + 0x1c) == '\0')) {
      uVar5 = uVar5 - 1;
      *(uint *)(param_1 + 0x24) = uVar5;
    }
  }
  if (cVar1 != '\0') {
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x2c) = uVar5;
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)uVar5 << 3,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkCompressor\\AkCompressorFX.cpp"
                     ,0x76);
  *(longlong *)(param_1 + 0x38) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x34;
  }
  else {
    fVar6 = expf(-43.066322 / *(float *)(param_1 + 0x20));
    *(float *)(param_1 + 0x30) = fVar6;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x18);
    plVar4 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
    cVar1 = (**(code **)(*plVar4 + 8))(plVar4,0x80);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0x80;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 145113330 FUN_145113330 body=72 status=ok
// SIG undefined FUN_145113330(void)

undefined8 FUN_145113330(undefined8 *param_1,longlong *param_2)

{
  if (param_1[7] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 1451133e0 FUN_1451133e0 body=1086 status=ok
// SIG undefined FUN_1451133e0(void)

void FUN_1451133e0(longlong param_1,uint *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  ushort uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((*param_2 != 0) && ((*param_2 != 1 || (*(short *)(**(longlong **)(param_2 + 2) + 0x12) != 0)))
     ) {
    lVar7 = *(longlong *)(param_1 + 8);
    fVar14 = *(float *)(lVar7 + 0x10);
    if (fVar14 != *(float *)(param_1 + 0x40)) {
      *(float *)(param_1 + 0x40) = fVar14;
      if (fVar14 <= 0.001) {
        fVar14 = 0.001;
      }
      fVar14 = expf(-2.2 / (fVar14 * *(float *)(param_1 + 0x20)));
      *(float *)(param_1 + 0x44) = fVar14;
    }
    fVar14 = *(float *)(lVar7 + 0x14);
    if (fVar14 != *(float *)(param_1 + 0x48)) {
      *(float *)(param_1 + 0x48) = fVar14;
      if (fVar14 <= 0.001) {
        fVar14 = 0.001;
      }
      fVar14 = expf(-2.2 / (fVar14 * *(float *)(param_1 + 0x20)));
      *(float *)(param_1 + 0x4c) = fVar14;
    }
    uVar10 = 0;
    if (*param_2 != 0) {
      do {
        plVar13 = *(longlong **)(*(longlong *)(param_2 + 4) + uVar10 * 8);
        if (*plVar13 != -1) {
          FUN_1451146b0(*(undefined8 *)(*(longlong *)(param_2 + 2) + uVar10 * 8),(int)plVar13[10],
                        *(undefined4 *)((longlong)plVar13 + 0x54));
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *param_2);
    }
    if (*(char *)(param_1 + 0x28) == '\0') {
      if ((*(char *)(param_1 + 0x51) == '\0') || (*(int *)(param_1 + 0x1c) == 1)) {
        FUN_145113830(param_1,**(undefined8 **)(param_2 + 2),*(undefined4 *)(lVar7 + 8),
                      1.0 / *(float *)(lVar7 + 0xc) - 1.0,*(undefined4 *)(param_1 + 0x24));
      }
      else {
        FUN_145113cc0(param_1,**(undefined8 **)(param_2 + 2),*(undefined4 *)(lVar7 + 8),
                      1.0 / *(float *)(lVar7 + 0xc) - 1.0,*(undefined4 *)(param_1 + 0x24));
      }
    }
    else {
      fVar14 = 1.0 / *(float *)(lVar7 + 0xc) - 1.0;
      FUN_145113f90(param_1,fVar14,*(undefined8 *)(param_2 + 2),*(undefined4 *)(lVar7 + 8),fVar14);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar10 = 0;
    uVar4 = *(undefined4 *)(lVar7 + 0x18);
    if (*param_2 != 0) {
      do {
        plVar13 = *(longlong **)(*(longlong *)(param_2 + 4) + uVar10 * 8);
        if ((*plVar13 == -1) ||
           ((*(char *)(param_1 + 0x50) == '\0' &&
            ((*(uint *)(*(longlong *)(*(longlong *)(param_2 + 2) + uVar10 * 8) + 8) & 0x8000) != 0))
           )) {
          fVar14 = *(float *)(lVar7 + 0x18);
          fVar5 = *(float *)(param_1 + 0x18);
          plVar13 = *(longlong **)(*(longlong *)(param_2 + 2) + uVar10 * 8);
          uVar9 = *(uint *)(plVar13 + 1) & 0xff;
          if ((*(char *)(param_1 + 0x50) == '\0') && ((*(uint *)(plVar13 + 1) & 0x8000) != 0)) {
            uVar9 = uVar9 - 1;
          }
          uVar6 = *(ushort *)((longlong)plVar13 + 0x12);
          if (uVar9 != 0) {
            lVar11 = 0;
            uVar12 = (ulonglong)uVar9;
            if (fVar14 == fVar5) {
              do {
                FUN_145114570(*plVar13 + (ulonglong)*(ushort *)(plVar13 + 2) * lVar11 * 4,fVar5,
                              uVar6);
                lVar11 = lVar11 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            else {
              do {
                pfVar8 = (float *)(*plVar13 + (ulonglong)*(ushort *)(plVar13 + 2) * lVar11 * 4);
                pfVar1 = pfVar8 + uVar6;
                if (3 < uVar6) {
                  uVar9 = uVar6 & 0xfffffffc;
                  pfVar2 = pfVar8 + uVar9;
                  fVar17 = (fVar14 - fVar5) / (float)uVar9;
                  fVar19 = fVar17 * 4.0;
                  fVar15 = fVar17 + fVar17 + fVar5;
                  fVar18 = fVar5;
                  fVar16 = fVar17 + fVar5;
                  fVar17 = fVar17 + fVar15;
                  for (; pfVar8 < pfVar2; pfVar8 = pfVar8 + 4) {
                    *pfVar8 = *pfVar8 * fVar18;
                    pfVar8[1] = pfVar8[1] * fVar16;
                    pfVar8[2] = pfVar8[2] * fVar15;
                    pfVar8[3] = pfVar8[3] * fVar17;
                    fVar18 = fVar18 + fVar19;
                    fVar16 = fVar16 + fVar19;
                    fVar15 = fVar15 + fVar19;
                    fVar17 = fVar17 + fVar19;
                  }
                }
                if (pfVar8 < pfVar1) {
                  fVar16 = (fVar14 - fVar5) / (float)uVar6;
                  fVar18 = fVar5;
                  if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar8) & 0xfffffffffffffffcU)) {
                    do {
                      *pfVar8 = fVar18 * *pfVar8;
                      fVar15 = fVar18 + fVar16 + fVar16;
                      pfVar8[1] = (fVar18 + fVar16) * pfVar8[1];
                      fVar17 = fVar15 + fVar16;
                      pfVar8[2] = fVar15 * pfVar8[2];
                      fVar18 = fVar17 + fVar16;
                      pfVar8[3] = fVar17 * pfVar8[3];
                      pfVar8 = pfVar8 + 4;
                    } while (pfVar8 < pfVar1 + -3);
                    if (pfVar1 <= pfVar8) goto LAB_1451137a8;
                  }
                  do {
                    *pfVar8 = fVar18 * *pfVar8;
                    pfVar8 = pfVar8 + 1;
                    fVar18 = fVar18 + fVar16;
                  } while (pfVar8 < pfVar1);
                }
LAB_1451137a8:
                lVar11 = lVar11 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 4) + uVar10 * 8);
          *(undefined4 *)(lVar11 + 0x50) = 0x3f800000;
          *(undefined4 *)(lVar11 + 0x54) = 0x3f800000;
        }
        else {
          *(undefined4 *)(plVar13 + 10) = uVar3;
          *(undefined4 *)((longlong)plVar13 + 0x54) = uVar4;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *param_2);
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar7 + 0x18);
  }
  return;
}



// FUNCTION 145113830 FUN_145113830 body=1157 status=ok
// SIG undefined FUN_145113830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145113830(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *_Dst;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 auStack_d0 [5];
  longlong lStack_a8;
  float afStack_a0 [10];
  ulonglong local_78;
  float *local_70;
  float *local_68 [6];
  
  uVar6 = *(ushort *)((longlong)param_2 + 0x12);
  local_78 = (ulonglong)uVar6;
  uVar10 = local_78 * 4 + 0xf;
  if (uVar10 <= local_78 * 4) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14511389b;
  lVar7 = -(uVar10 & 0xfffffffffffffff0);
  _Dst = (float *)((longlong)&local_78 + lVar7);
  if (param_5 != 0) {
    uVar17 = 0;
    local_70 = (float *)(ulonglong)((uint)uVar6 * 4);
    pfVar2 = _Dst + local_78;
    uVar16 = (ulonglong)param_5;
    uVar10 = uVar17;
    local_68[0] = local_70;
    if (*(int *)(param_1 + 0x54) == 0x80) {
      do {
        pfVar11 = local_68[0];
        pfVar13 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4);
        local_70 = pfVar13;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x145113901;
        memset(_Dst,0,(size_t)pfVar11);
        uVar14 = local_78;
        if (pfVar2 < _Dst) {
          uVar14 = uVar17;
        }
        pfVar11 = _Dst;
        if (((uVar14 != 0) && (0xf < uVar14)) &&
           ((pfVar13 + (uVar14 - 1) < _Dst || (_Dst + (uVar14 - 1) < pfVar13)))) {
          uVar15 = uVar17;
          do {
            uVar15 = uVar15 + 0x10;
            fVar3 = pfVar13[1];
            fVar8 = pfVar13[2];
            fVar9 = pfVar13[3];
            *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
            pfVar11[1] = fVar3 * fVar3 + pfVar11[1];
            pfVar11[2] = fVar8 * fVar8 + pfVar11[2];
            pfVar11[3] = fVar9 * fVar9 + pfVar11[3];
            fVar3 = pfVar13[5];
            fVar8 = pfVar13[6];
            fVar9 = pfVar13[7];
            pfVar11[4] = pfVar13[4] * pfVar13[4] + pfVar11[4];
            pfVar11[5] = fVar3 * fVar3 + pfVar11[5];
            pfVar11[6] = fVar8 * fVar8 + pfVar11[6];
            pfVar11[7] = fVar9 * fVar9 + pfVar11[7];
            fVar3 = pfVar13[9];
            fVar8 = pfVar13[10];
            fVar9 = pfVar13[0xb];
            pfVar11[8] = pfVar13[8] * pfVar13[8] + pfVar11[8];
            pfVar11[9] = fVar3 * fVar3 + pfVar11[9];
            pfVar11[10] = fVar8 * fVar8 + pfVar11[10];
            pfVar11[0xb] = fVar9 * fVar9 + pfVar11[0xb];
            pfVar1 = pfVar13 + 0xc;
            fVar3 = pfVar13[0xd];
            fVar8 = pfVar13[0xe];
            fVar9 = pfVar13[0xf];
            pfVar13 = pfVar13 + 0x10;
            pfVar11[0xc] = *pfVar1 * *pfVar1 + pfVar11[0xc];
            pfVar11[0xd] = fVar3 * fVar3 + pfVar11[0xd];
            pfVar11[0xe] = fVar8 * fVar8 + pfVar11[0xe];
            pfVar11[0xf] = fVar9 * fVar9 + pfVar11[0xf];
            pfVar11 = pfVar11 + 0x10;
          } while (uVar15 < (uVar14 & 0xfffffffffffffff0));
        }
        if (pfVar11 < pfVar2) {
          if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar11)) {
            do {
              *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
              pfVar11[1] = pfVar13[1] * pfVar13[1] + pfVar11[1];
              pfVar11[2] = pfVar13[2] * pfVar13[2] + pfVar11[2];
              pfVar1 = pfVar13 + 3;
              pfVar13 = pfVar13 + 4;
              pfVar11[3] = *pfVar1 * *pfVar1 + pfVar11[3];
              pfVar11 = pfVar11 + 4;
            } while (pfVar11 < pfVar2 + -3);
            if (pfVar2 <= pfVar11) goto LAB_145113a48;
          }
          lVar12 = (longlong)pfVar13 - (longlong)pfVar11;
          do {
            fVar3 = *(float *)(lVar12 + (longlong)pfVar11);
            *pfVar11 = fVar3 * fVar3 + *pfVar11;
            pfVar11 = pfVar11 + 1;
          } while (pfVar11 < pfVar2);
        }
LAB_145113a48:
        lVar12 = *(longlong *)(param_1 + 0x38);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x18) = uVar4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x10) = uVar5;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 8) = param_4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7) = param_3;
        *(ulonglong *)((longlong)&lStack_a8 + lVar7) = lVar12 + uVar10 * 8;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x145113a9e;
        FUN_1453bbca0(&local_70,_Dst,1,uVar6);
        uVar16 = uVar16 - 1;
        uVar10 = uVar10 + 1;
      } while (uVar16 != 0);
    }
    else {
      do {
        pfVar11 = local_70;
        pfVar13 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4);
        local_68[0] = pfVar13;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x145113ae1;
        memset(_Dst,0,(size_t)pfVar11);
        uVar14 = local_78;
        if (pfVar2 < _Dst) {
          uVar14 = uVar17;
        }
        pfVar11 = _Dst;
        if (((uVar14 != 0) && (0xf < uVar14)) &&
           ((pfVar13 + (uVar14 - 1) < _Dst || (_Dst + (uVar14 - 1) < pfVar13)))) {
          uVar15 = uVar17;
          do {
            uVar15 = uVar15 + 0x10;
            fVar3 = pfVar13[1];
            fVar8 = pfVar13[2];
            fVar9 = pfVar13[3];
            *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
            pfVar11[1] = fVar3 * fVar3 + pfVar11[1];
            pfVar11[2] = fVar8 * fVar8 + pfVar11[2];
            pfVar11[3] = fVar9 * fVar9 + pfVar11[3];
            fVar3 = pfVar13[5];
            fVar8 = pfVar13[6];
            fVar9 = pfVar13[7];
            pfVar11[4] = pfVar13[4] * pfVar13[4] + pfVar11[4];
            pfVar11[5] = fVar3 * fVar3 + pfVar11[5];
            pfVar11[6] = fVar8 * fVar8 + pfVar11[6];
            pfVar11[7] = fVar9 * fVar9 + pfVar11[7];
            fVar3 = pfVar13[9];
            fVar8 = pfVar13[10];
            fVar9 = pfVar13[0xb];
            pfVar11[8] = pfVar13[8] * pfVar13[8] + pfVar11[8];
            pfVar11[9] = fVar3 * fVar3 + pfVar11[9];
            pfVar11[10] = fVar8 * fVar8 + pfVar11[10];
            pfVar11[0xb] = fVar9 * fVar9 + pfVar11[0xb];
            pfVar1 = pfVar13 + 0xc;
            fVar3 = pfVar13[0xd];
            fVar8 = pfVar13[0xe];
            fVar9 = pfVar13[0xf];
            pfVar13 = pfVar13 + 0x10;
            pfVar11[0xc] = *pfVar1 * *pfVar1 + pfVar11[0xc];
            pfVar11[0xd] = fVar3 * fVar3 + pfVar11[0xd];
            pfVar11[0xe] = fVar8 * fVar8 + pfVar11[0xe];
            pfVar11[0xf] = fVar9 * fVar9 + pfVar11[0xf];
            pfVar11 = pfVar11 + 0x10;
          } while (uVar15 < (uVar14 & 0xfffffffffffffff0));
        }
        if (pfVar11 < pfVar2) {
          if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar11)) {
            do {
              *pfVar11 = *pfVar13 * *pfVar13 + *pfVar11;
              pfVar11[1] = pfVar13[1] * pfVar13[1] + pfVar11[1];
              pfVar11[2] = pfVar13[2] * pfVar13[2] + pfVar11[2];
              pfVar1 = pfVar13 + 3;
              pfVar13 = pfVar13 + 4;
              pfVar11[3] = *pfVar1 * *pfVar1 + pfVar11[3];
              pfVar11 = pfVar11 + 4;
            } while (pfVar11 < pfVar2 + -3);
            if (pfVar2 <= pfVar11) goto LAB_145113c28;
          }
          lVar12 = (longlong)pfVar13 - (longlong)pfVar11;
          do {
            fVar3 = *(float *)(lVar12 + (longlong)pfVar11);
            *pfVar11 = fVar3 * fVar3 + *pfVar11;
            pfVar11 = pfVar11 + 1;
          } while (pfVar11 < pfVar2);
        }
LAB_145113c28:
        lVar12 = *(longlong *)(param_1 + 0x38);
        uVar4 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x18) = uVar4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 0x10) = uVar5;
        *(undefined4 *)((longlong)afStack_a0 + lVar7 + 8) = param_4;
        *(undefined4 *)((longlong)afStack_a0 + lVar7) = param_3;
        *(ulonglong *)((longlong)&lStack_a8 + lVar7) = lVar12 + uVar10 * 8;
        *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x145113c7e;
        FUN_145114aa0(local_68,_Dst,1,uVar6);
        uVar16 = uVar16 - 1;
        uVar10 = uVar10 + 1;
      } while (uVar16 != 0);
    }
  }
  return;
}



// FUNCTION 145113cc0 FUN_145113cc0 body=712 status=ok
// SIG undefined FUN_145113cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145113cc0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  longlong *plVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  undefined4 auStack_60 [10];
  longlong local_38 [4];
  
  uVar4 = *(ushort *)((longlong)param_2 + 0x12);
  uVar7 = param_5;
  if ((*(uint *)(param_2 + 1) & 0xf00) == 0x200) {
    uVar7 = 1;
  }
  uVar11 = (ulonglong)param_5 * 8 + 0xf;
  if (uVar11 <= (ulonglong)param_5 * 8) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x145113d3c;
  lVar8 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = 0;
  plVar1 = (longlong *)((longlong)local_38 + lVar8);
  if (param_5 != 0) {
    uVar12 = uVar11;
    if ((7 < param_5) && (5 < DAT_14c707900)) {
      lVar10 = *param_2;
      if (((param_2 < plVar1) || (plVar1 + (param_5 - 1) < param_2)) &&
         ((param_2 + 2 < plVar1 || (uVar12 = 0, plVar1 + (param_5 - 1) < param_2 + 2)))) {
        uVar12 = 4;
        auVar20 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22((short)param_2[2],(short)param_2[2])));
        do {
          iVar14 = (int)uVar11;
          iVar5 = (int)uVar12;
          uVar9 = iVar5 - 2;
          auVar16._4_4_ = iVar14 + 1;
          auVar16._0_4_ = iVar14;
          auVar16._8_4_ = iVar14;
          auVar16._12_4_ = iVar14;
          auVar16 = pmovzxdq(auVar16,auVar16);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar11] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar11)[1] = auVar16._8_8_ * 4 + lVar10;
          uVar15 = iVar14 + 8;
          uVar11 = (ulonglong)uVar15;
          auVar17._4_4_ = iVar5 + -1;
          auVar17._0_4_ = uVar9;
          auVar17._8_4_ = uVar9;
          auVar17._12_4_ = uVar9;
          auVar16 = pmovzxdq(auVar17,auVar17);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar9] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar9)[1] = auVar16._8_8_ * 4 + lVar10;
          auVar18._4_4_ = iVar5 + 1;
          auVar18._0_4_ = iVar5;
          auVar18._8_4_ = iVar5;
          auVar18._12_4_ = iVar5;
          auVar16 = pmovzxdq(auVar18,auVar18);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar12] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar12)[1] = auVar16._8_8_ * 4 + lVar10;
          uVar9 = iVar5 + 2;
          uVar12 = (ulonglong)(iVar5 + 8);
          auVar19._4_4_ = iVar5 + 3;
          auVar19._0_4_ = uVar9;
          auVar19._8_4_ = uVar9;
          auVar19._12_4_ = uVar9;
          auVar16 = pmovzxdq(auVar19,auVar19);
          auVar16 = vpmullq_avx512vl(auVar20,auVar16);
          plVar1[uVar9] = auVar16._0_8_ * 4 + lVar10;
          (plVar1 + uVar9)[1] = auVar16._8_8_ * 4 + lVar10;
        } while (uVar15 < (param_5 & 0xfffffff8));
        uVar12 = uVar11;
        if (param_5 <= uVar15) goto LAB_145113ec1;
      }
    }
    uVar11 = (ulonglong)(param_5 - (int)uVar12);
    plVar13 = plVar1 + uVar12;
    do {
      lVar10 = *(ushort *)(param_2 + 2) * uVar12;
      uVar12 = uVar12 + 1;
      *plVar13 = *param_2 + lVar10 * 4;
      uVar11 = uVar11 - 1;
      plVar13 = plVar13 + 1;
    } while (uVar11 != 0);
  }
LAB_145113ec1:
  uVar12 = (ulonglong)uVar4 * 4;
  uVar11 = uVar12 + 0xf;
  if (uVar11 <= uVar12) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_90 + lVar8) = 0x145113ee0;
  lVar10 = -(uVar11 & 0xfffffffffffffff0);
  _Dst = (void *)((longlong)local_38 + lVar10 + lVar8);
  *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x145113efa;
  memset(_Dst,0,(ulonglong)((uint)uVar4 * 4));
  *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x145113f0b;
  FUN_1451148c0(uVar7,(ulonglong)uVar4,plVar1,_Dst);
  iVar5 = *(int *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 0x18) = uVar2;
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 0x10) = uVar3;
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8 + 8) = param_4;
  *(undefined4 *)((longlong)auStack_60 + lVar10 + lVar8) = param_3;
  *(undefined8 *)((longlong)&uStack_68 + lVar10 + lVar8) = uVar6;
  if (iVar5 == 0x80) {
    *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x145113f5f;
    FUN_1453bbca0();
  }
  else {
    *(undefined8 *)((longlong)auStack_90 + lVar10 + lVar8) = 0x145113f66;
    FUN_145114aa0(plVar1,_Dst,param_5,uVar4);
  }
  return;
}



// FUNCTION 145113f90 FUN_145113f90 body=1451 status=ok
// SIG undefined FUN_145113f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145113f90(longlong param_1,uint param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *_Dst;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 auStack_a0 [5];
  undefined8 uStack_78;
  float afStack_70 [10];
  undefined4 local_48;
  uint local_44;
  
  uVar31 = (ulonglong)param_2;
  auStack_a0[0] = 0x145113fcc;
  plVar14 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  auStack_a0[0] = 0x145113fd6;
  uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
  uVar21 = 0;
  uVar13 = 0;
  uVar27 = (ulonglong)uVar12;
  local_44 = (uint)uVar12;
  local_48 = 0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar14 = param_3;
    uVar28 = uVar31;
    if (param_2 != 0) {
      do {
        uVar21 = uVar21 + (*(uint *)(*plVar14 + 8) - (*(uint *)(*plVar14 + 8) >> 0xf & 1) & 0xff);
        uVar28 = uVar28 - 1;
        plVar14 = plVar14 + 1;
        local_48 = uVar21;
      } while (uVar28 != 0);
    }
    goto LAB_145114094;
  }
  iVar23 = 0;
  iVar24 = 0;
  iVar25 = 0;
  iVar26 = 0;
  if (param_2 < 2) {
    if (param_2 != 0) {
      lVar17 = 0;
      goto LAB_145114050;
    }
  }
  else {
    lVar17 = 0;
    uVar13 = (param_2 - 2 >> 1) + 1;
    uVar28 = (ulonglong)uVar13;
    do {
      lVar11 = lVar17 + 1;
      iVar23 = iVar23 + (uint)*(byte *)(param_3[lVar17] + 8);
      lVar17 = lVar17 + 2;
      iVar25 = iVar25 + (uint)*(byte *)(param_3[lVar11] + 8);
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    iVar24 = iVar23;
    iVar26 = iVar25;
    if (param_2 <= uVar13 * 2) {
      local_48 = iVar25 + iVar23;
      goto LAB_145114094;
    }
LAB_145114050:
    uVar13 = (uint)*(byte *)(param_3[lVar17] + 8);
    iVar25 = iVar26;
    iVar23 = iVar24;
  }
  local_48 = uVar13 + iVar25 + iVar23;
LAB_145114094:
  uVar13 = local_48;
  uVar28 = uVar27 * 4 + 0xf;
  if (uVar28 <= uVar27 * 4) {
    uVar28 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x1451140ba;
  lVar17 = -(uVar28 & 0xfffffffffffffff0);
  _Dst = (float *)((longlong)&local_48 + lVar17);
  *(undefined8 *)((longlong)auStack_a0 + lVar17) = 0x1451140d4;
  memset(_Dst,0,(ulonglong)((uint)uVar12 * 4));
  uVar28 = (ulonglong)uVar13 * 8 + 0xf;
  if (uVar28 <= (ulonglong)uVar13 * 8) {
    uVar28 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar17) = 0x1451140fa;
  lVar8 = -(uVar28 & 0xfffffffffffffff0);
  lVar11 = (longlong)&local_48 + lVar8 + lVar17;
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (param_2 != 0) {
      pfVar2 = _Dst + uVar27;
      uVar27 = 0;
      do {
        lVar18 = 0;
        plVar14 = (longlong *)*param_3;
        uVar13 = *(uint *)(plVar14 + 1) - (*(uint *)(plVar14 + 1) >> 0xf & 1);
        uVar21 = uVar13 & 0xff;
        uVar30 = (ulonglong)uVar21;
        uVar28 = uVar27;
        if ((char)uVar13 != '\0') {
          uVar29 = (ulonglong)uVar21;
          uVar22 = uVar27;
          do {
            lVar15 = (ulonglong)*(ushort *)(plVar14 + 2) * lVar18;
            lVar18 = lVar18 + 1;
            uVar28 = (ulonglong)((int)uVar22 + 1);
            *(longlong *)(lVar11 + uVar22 * 8) = *plVar14 + lVar15 * 4;
            uVar29 = uVar29 - 1;
            uVar22 = uVar28;
          } while (uVar29 != 0);
          puVar20 = (undefined8 *)(lVar11 + uVar27 * 8);
          uVar27 = (ulonglong)((longlong)pfVar2 + (3 - (longlong)_Dst)) >> 2;
          if (pfVar2 < _Dst) {
            uVar27 = 0;
          }
          do {
            uVar22 = 0;
            pfVar19 = (float *)*puVar20;
            pfVar16 = _Dst;
            if (((uVar27 != 0) && (0xf < uVar27)) &&
               ((pfVar19 + (uVar27 - 1) < _Dst || (_Dst + (uVar27 - 1) < pfVar19)))) {
              do {
                uVar22 = uVar22 + 0x10;
                fVar3 = pfVar19[1];
                fVar9 = pfVar19[2];
                fVar10 = pfVar19[3];
                *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
                pfVar16[1] = fVar3 * fVar3 + pfVar16[1];
                pfVar16[2] = fVar9 * fVar9 + pfVar16[2];
                pfVar16[3] = fVar10 * fVar10 + pfVar16[3];
                fVar3 = pfVar19[5];
                fVar9 = pfVar19[6];
                fVar10 = pfVar19[7];
                pfVar16[4] = pfVar19[4] * pfVar19[4] + pfVar16[4];
                pfVar16[5] = fVar3 * fVar3 + pfVar16[5];
                pfVar16[6] = fVar9 * fVar9 + pfVar16[6];
                pfVar16[7] = fVar10 * fVar10 + pfVar16[7];
                fVar3 = pfVar19[9];
                fVar9 = pfVar19[10];
                fVar10 = pfVar19[0xb];
                pfVar16[8] = pfVar19[8] * pfVar19[8] + pfVar16[8];
                pfVar16[9] = fVar3 * fVar3 + pfVar16[9];
                pfVar16[10] = fVar9 * fVar9 + pfVar16[10];
                pfVar16[0xb] = fVar10 * fVar10 + pfVar16[0xb];
                pfVar1 = pfVar19 + 0xc;
                fVar3 = pfVar19[0xd];
                fVar9 = pfVar19[0xe];
                fVar10 = pfVar19[0xf];
                pfVar19 = pfVar19 + 0x10;
                pfVar16[0xc] = *pfVar1 * *pfVar1 + pfVar16[0xc];
                pfVar16[0xd] = fVar3 * fVar3 + pfVar16[0xd];
                pfVar16[0xe] = fVar9 * fVar9 + pfVar16[0xe];
                pfVar16[0xf] = fVar10 * fVar10 + pfVar16[0xf];
                pfVar16 = pfVar16 + 0x10;
              } while (uVar22 < (uVar27 & 0xfffffffffffffff0));
            }
            if (pfVar16 < pfVar2) {
              if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar16)) {
                do {
                  *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
                  pfVar16[1] = pfVar19[1] * pfVar19[1] + pfVar16[1];
                  pfVar16[2] = pfVar19[2] * pfVar19[2] + pfVar16[2];
                  pfVar1 = pfVar19 + 3;
                  pfVar19 = pfVar19 + 4;
                  pfVar16[3] = *pfVar1 * *pfVar1 + pfVar16[3];
                  pfVar16 = pfVar16 + 4;
                } while (pfVar16 < pfVar2 + -3);
                if (pfVar2 <= pfVar16) goto LAB_145114498;
              }
              lVar18 = (longlong)pfVar19 - (longlong)pfVar16;
              do {
                fVar3 = *(float *)(lVar18 + (longlong)pfVar16);
                *pfVar16 = fVar3 * fVar3 + *pfVar16;
                pfVar16 = pfVar16 + 1;
              } while (pfVar16 < pfVar2);
            }
LAB_145114498:
            puVar20 = puVar20 + 1;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        param_3 = param_3 + 1;
        uVar31 = uVar31 - 1;
        uVar27 = uVar28;
        uVar13 = local_48;
      } while (uVar31 != 0);
    }
  }
  else if (param_2 != 0) {
    pfVar2 = _Dst + uVar27;
    uVar27 = 0;
    do {
      lVar18 = 0;
      plVar14 = (longlong *)*param_3;
      bVar6 = *(byte *)(plVar14 + 1);
      uVar30 = (ulonglong)bVar6;
      uVar28 = uVar27;
      if (bVar6 != 0) {
        uVar29 = (ulonglong)bVar6;
        uVar22 = uVar27;
        do {
          lVar15 = (ulonglong)*(ushort *)(plVar14 + 2) * lVar18;
          lVar18 = lVar18 + 1;
          uVar28 = (ulonglong)((int)uVar22 + 1);
          *(longlong *)(lVar11 + uVar22 * 8) = *plVar14 + lVar15 * 4;
          uVar29 = uVar29 - 1;
          uVar22 = uVar28;
        } while (uVar29 != 0);
        puVar20 = (undefined8 *)(lVar11 + uVar27 * 8);
        uVar27 = (ulonglong)((longlong)pfVar2 + (3 - (longlong)_Dst)) >> 2;
        if (pfVar2 < _Dst) {
          uVar27 = 0;
        }
        do {
          uVar22 = 0;
          pfVar19 = (float *)*puVar20;
          pfVar16 = _Dst;
          if (((uVar27 != 0) && (0xf < uVar27)) &&
             ((pfVar19 + (uVar27 - 1) < _Dst || (_Dst + (uVar27 - 1) < pfVar19)))) {
            do {
              uVar22 = uVar22 + 0x10;
              fVar3 = pfVar19[1];
              fVar9 = pfVar19[2];
              fVar10 = pfVar19[3];
              *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
              pfVar16[1] = fVar3 * fVar3 + pfVar16[1];
              pfVar16[2] = fVar9 * fVar9 + pfVar16[2];
              pfVar16[3] = fVar10 * fVar10 + pfVar16[3];
              fVar3 = pfVar19[5];
              fVar9 = pfVar19[6];
              fVar10 = pfVar19[7];
              pfVar16[4] = pfVar19[4] * pfVar19[4] + pfVar16[4];
              pfVar16[5] = fVar3 * fVar3 + pfVar16[5];
              pfVar16[6] = fVar9 * fVar9 + pfVar16[6];
              pfVar16[7] = fVar10 * fVar10 + pfVar16[7];
              fVar3 = pfVar19[9];
              fVar9 = pfVar19[10];
              fVar10 = pfVar19[0xb];
              pfVar16[8] = pfVar19[8] * pfVar19[8] + pfVar16[8];
              pfVar16[9] = fVar3 * fVar3 + pfVar16[9];
              pfVar16[10] = fVar9 * fVar9 + pfVar16[10];
              pfVar16[0xb] = fVar10 * fVar10 + pfVar16[0xb];
              pfVar1 = pfVar19 + 0xc;
              fVar3 = pfVar19[0xd];
              fVar9 = pfVar19[0xe];
              fVar10 = pfVar19[0xf];
              pfVar19 = pfVar19 + 0x10;
              pfVar16[0xc] = *pfVar1 * *pfVar1 + pfVar16[0xc];
              pfVar16[0xd] = fVar3 * fVar3 + pfVar16[0xd];
              pfVar16[0xe] = fVar9 * fVar9 + pfVar16[0xe];
              pfVar16[0xf] = fVar10 * fVar10 + pfVar16[0xf];
              pfVar16 = pfVar16 + 0x10;
            } while (uVar22 < (uVar27 & 0xfffffffffffffff0));
          }
          if (pfVar16 < pfVar2) {
            if (0xf < (ulonglong)((longlong)pfVar2 - (longlong)pfVar16)) {
              do {
                *pfVar16 = *pfVar19 * *pfVar19 + *pfVar16;
                pfVar16[1] = pfVar19[1] * pfVar19[1] + pfVar16[1];
                pfVar16[2] = pfVar19[2] * pfVar19[2] + pfVar16[2];
                pfVar1 = pfVar19 + 3;
                pfVar19 = pfVar19 + 4;
                pfVar16[3] = *pfVar1 * *pfVar1 + pfVar16[3];
                pfVar16 = pfVar16 + 4;
              } while (pfVar16 < pfVar2 + -3);
              if (pfVar2 <= pfVar16) goto LAB_1451142b8;
            }
            lVar18 = (longlong)pfVar19 - (longlong)pfVar16;
            do {
              fVar3 = *(float *)(lVar18 + (longlong)pfVar16);
              *pfVar16 = fVar3 * fVar3 + *pfVar16;
              pfVar16 = pfVar16 + 1;
            } while (pfVar16 < pfVar2);
          }
LAB_1451142b8:
          puVar20 = puVar20 + 1;
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      param_3 = param_3 + 1;
      uVar31 = uVar31 - 1;
      uVar27 = uVar28;
      uVar13 = local_48;
    } while (uVar31 != 0);
  }
  uVar21 = local_44;
  iVar24 = *(int *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 0x20) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 0x18) = uVar4;
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 0x10) = uVar5;
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17 + 8) = param_5;
  *(undefined4 *)((longlong)afStack_70 + lVar8 + lVar17) = param_4;
  *(undefined8 *)((longlong)&uStack_78 + lVar8 + lVar17) = uVar7;
  if (iVar24 == 0x80) {
    *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar17) = 0x145114516;
    FUN_1453bbca0();
  }
  else {
    *(undefined8 *)((longlong)auStack_a0 + lVar8 + lVar17) = 0x14511451d;
    FUN_145114aa0(lVar11,_Dst,uVar13,uVar21);
  }
  return;
}



// FUNCTION 145114540 FUN_145114540 body=43 status=ok
// SIG undefined FUN_145114540(void)

undefined8 * FUN_145114540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145114570 FUN_145114570 body=309 status=ok
// SIG undefined FUN_145114570(void)

void FUN_145114570(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1451146b0 FUN_1451146b0 body=528 status=ok
// SIG undefined FUN_1451146b0(void)

void FUN_1451146b0(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_145114570(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_145114898;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_145114898:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1451148c0 FUN_1451148c0 body=398 status=ok
// SIG undefined FUN_1451148c0(void)

void FUN_1451148c0(uint param_1,uint param_2,undefined8 *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pfVar2 = param_4 + param_2;
  if (param_1 != 0) {
    uVar11 = (ulonglong)param_2;
    if (pfVar2 < param_4) {
      uVar11 = 0;
    }
    uVar9 = (ulonglong)param_1;
    do {
      pfVar7 = (float *)*param_3;
      pfVar6 = param_4;
      if (((uVar11 != 0) && (0xf < uVar11)) &&
         ((pfVar7 + (uVar11 - 1) < param_4 || (param_4 + (uVar11 - 1) < pfVar7)))) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 0x10;
          fVar3 = pfVar7[1];
          fVar4 = pfVar7[2];
          fVar5 = pfVar7[3];
          *pfVar6 = *pfVar7 * *pfVar7 + *pfVar6;
          pfVar6[1] = fVar3 * fVar3 + pfVar6[1];
          pfVar6[2] = fVar4 * fVar4 + pfVar6[2];
          pfVar6[3] = fVar5 * fVar5 + pfVar6[3];
          fVar3 = pfVar7[5];
          fVar4 = pfVar7[6];
          fVar5 = pfVar7[7];
          pfVar6[4] = pfVar7[4] * pfVar7[4] + pfVar6[4];
          pfVar6[5] = fVar3 * fVar3 + pfVar6[5];
          pfVar6[6] = fVar4 * fVar4 + pfVar6[6];
          pfVar6[7] = fVar5 * fVar5 + pfVar6[7];
          fVar3 = pfVar7[9];
          fVar4 = pfVar7[10];
          fVar5 = pfVar7[0xb];
          pfVar6[8] = pfVar7[8] * pfVar7[8] + pfVar6[8];
          pfVar6[9] = fVar3 * fVar3 + pfVar6[9];
          pfVar6[10] = fVar4 * fVar4 + pfVar6[10];
          pfVar6[0xb] = fVar5 * fVar5 + pfVar6[0xb];
          pfVar1 = pfVar7 + 0xc;
          fVar3 = pfVar7[0xd];
          fVar4 = pfVar7[0xe];
          fVar5 = pfVar7[0xf];
          pfVar7 = pfVar7 + 0x10;
          pfVar6[0xc] = *pfVar1 * *pfVar1 + pfVar6[0xc];
          pfVar6[0xd] = fVar3 * fVar3 + pfVar6[0xd];
          pfVar6[0xe] = fVar4 * fVar4 + pfVar6[0xe];
          pfVar6[0xf] = fVar5 * fVar5 + pfVar6[0xf];
          pfVar6 = pfVar6 + 0x10;
        } while (uVar10 < (uVar11 & 0xfffffffffffffff0));
      }
      if (pfVar6 < pfVar2) {
        if (0xf < ((longlong)pfVar2 + (3 - (longlong)pfVar6) & 0xfffffffffffffffcU)) {
          do {
            *pfVar6 = *pfVar7 * *pfVar7 + *pfVar6;
            pfVar6[1] = pfVar7[1] * pfVar7[1] + pfVar6[1];
            pfVar6[2] = pfVar7[2] * pfVar7[2] + pfVar6[2];
            pfVar1 = pfVar7 + 3;
            pfVar7 = pfVar7 + 4;
            pfVar6[3] = *pfVar1 * *pfVar1 + pfVar6[3];
            pfVar6 = pfVar6 + 4;
          } while (pfVar6 < pfVar2 + -3);
          if (pfVar2 <= pfVar6) goto LAB_145114a28;
        }
        lVar8 = (longlong)pfVar7 - (longlong)pfVar6;
        do {
          fVar3 = *(float *)(lVar8 + (longlong)pfVar6);
          *pfVar6 = fVar3 * fVar3 + *pfVar6;
          pfVar6 = pfVar6 + 1;
        } while (pfVar6 < pfVar2);
      }
LAB_145114a28:
      param_3 = param_3 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 145114a50 FUN_145114a50 body=75 status=ok
// SIG undefined FUN_145114a50(void)

undefined8 * FUN_145114a50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x58,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkCompressor\\AkCompressorFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b628;
    puVar1[1] = 0;
    puVar1[7] = 0;
    puVar1[2] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145114aa0 FUN_145114aa0 body=4939 status=ok
// SIG undefined FUN_145114aa0(void)

void FUN_145114aa0(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3,ulonglong param_4,
                  float *param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar19;
  uint uVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  uint uVar44;
  uint uVar45;
  float fVar46;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar47;
  float fVar48;
  
  fVar25 = param_5[1];
  fVar48 = *param_5;
  fVar31 = param_10 * param_10;
  fVar22 = fVar31 * param_10;
  uVar7 = (param_4 & 0xfffffffc) * 4;
  pauVar6 = (undefined1 (*) [16])((longlong)*param_2 + (param_4 & 0xfffffffc) * 4);
  pauVar1 = (undefined1 (*) [16])((longlong)*param_2 + (param_4 & 0xffffffff) * 4);
  fVar10 = fVar22 * param_10;
  fVar23 = 1.0 - param_10;
  fVar11 = fVar23 * param_10;
  fVar12 = fVar11 * param_10;
  fVar13 = fVar12 * param_10;
  pauVar3 = param_2;
  if (param_2 < pauVar6) {
    pauVar4 = param_2;
    if (0x3f < uVar7) {
      do {
        fVar24 = *(float *)*pauVar4 + 1e-25;
        fVar26 = *(float *)((longlong)*pauVar4 + 4) + 1e-25;
        fVar27 = *(float *)((longlong)*pauVar4 + 8) + 1e-25;
        fVar29 = *(float *)((longlong)*pauVar4 + 0xc) + 1e-25;
        fVar46 = fVar27 * fVar11 + fVar29 * fVar23 + fVar26 * fVar12 + fVar24 * fVar13 +
                 fVar10 * fVar25;
        *(float *)*pauVar4 =
             fVar27 * 0.0 + fVar29 * 0.0 + fVar26 * 0.0 + fVar24 * fVar23 + param_10 * fVar25;
        *(float *)((longlong)*pauVar4 + 4) =
             fVar27 * 0.0 + fVar29 * 0.0 + fVar26 * fVar23 + fVar24 * fVar11 + fVar31 * fVar25;
        *(float *)((longlong)*pauVar4 + 8) =
             fVar27 * fVar23 + fVar29 * 0.0 + fVar26 * fVar11 + fVar24 * fVar12 + fVar22 * fVar25;
        *(float *)((longlong)*pauVar4 + 0xc) = fVar46;
        fVar25 = *(float *)pauVar4[1] + 1e-25;
        fVar24 = *(float *)((longlong)pauVar4[1] + 4) + 1e-25;
        fVar26 = *(float *)((longlong)pauVar4[1] + 8) + 1e-25;
        fVar27 = *(float *)((longlong)pauVar4[1] + 0xc) + 1e-25;
        fVar29 = fVar26 * fVar11 + fVar27 * fVar23 + fVar24 * fVar12 + fVar25 * fVar13 +
                 fVar46 * fVar10;
        *(float *)pauVar4[1] =
             fVar26 * 0.0 + fVar27 * 0.0 + fVar24 * 0.0 + fVar25 * fVar23 + fVar46 * param_10;
        *(float *)((longlong)pauVar4[1] + 4) =
             fVar26 * 0.0 + fVar27 * 0.0 + fVar24 * fVar23 + fVar25 * fVar11 + fVar46 * fVar31;
        *(float *)((longlong)pauVar4[1] + 8) =
             fVar26 * fVar23 + fVar27 * 0.0 + fVar24 * fVar11 + fVar25 * fVar12 + fVar46 * fVar22;
        *(float *)((longlong)pauVar4[1] + 0xc) = fVar29;
        fVar25 = *(float *)pauVar4[2] + 1e-25;
        fVar24 = *(float *)((longlong)pauVar4[2] + 4) + 1e-25;
        fVar26 = *(float *)((longlong)pauVar4[2] + 8) + 1e-25;
        fVar27 = *(float *)((longlong)pauVar4[2] + 0xc) + 1e-25;
        fVar46 = fVar26 * fVar11 + fVar27 * fVar23 + fVar24 * fVar12 + fVar25 * fVar13 +
                 fVar29 * fVar10;
        *(float *)pauVar4[2] =
             fVar26 * 0.0 + fVar27 * 0.0 + fVar24 * 0.0 + fVar25 * fVar23 + fVar29 * param_10;
        *(float *)((longlong)pauVar4[2] + 4) =
             fVar26 * 0.0 + fVar27 * 0.0 + fVar24 * fVar23 + fVar25 * fVar11 + fVar29 * fVar31;
        *(float *)((longlong)pauVar4[2] + 8) =
             fVar26 * fVar23 + fVar27 * 0.0 + fVar24 * fVar11 + fVar25 * fVar12 + fVar29 * fVar22;
        *(float *)((longlong)pauVar4[2] + 0xc) = fVar46;
        fVar24 = *(float *)pauVar4[3] + 1e-25;
        fVar26 = *(float *)((longlong)pauVar4[3] + 4) + 1e-25;
        fVar27 = *(float *)((longlong)pauVar4[3] + 8) + 1e-25;
        fVar29 = *(float *)((longlong)pauVar4[3] + 0xc) + 1e-25;
        fVar25 = fVar27 * fVar11 + fVar29 * fVar23 + fVar26 * fVar12 + fVar24 * fVar13 +
                 fVar46 * fVar10;
        *(float *)pauVar4[3] =
             fVar27 * 0.0 + fVar29 * 0.0 + fVar26 * 0.0 + fVar24 * fVar23 + fVar46 * param_10;
        *(float *)((longlong)pauVar4[3] + 4) =
             fVar27 * 0.0 + fVar29 * 0.0 + fVar26 * fVar23 + fVar24 * fVar11 + fVar46 * fVar31;
        *(float *)((longlong)pauVar4[3] + 8) =
             fVar27 * fVar23 + fVar29 * 0.0 + fVar26 * fVar11 + fVar24 * fVar12 + fVar46 * fVar22;
        *(float *)((longlong)pauVar4[3] + 0xc) = fVar25;
        pauVar4 = pauVar4 + 4;
      } while (pauVar4 < pauVar6 + -3);
      if (pauVar6 <= pauVar4) goto LAB_145114e11;
    }
    do {
      fVar29 = *(float *)*pauVar4 + 1e-25;
      fVar46 = *(float *)((longlong)*pauVar4 + 4) + 1e-25;
      fVar28 = *(float *)((longlong)*pauVar4 + 8) + 1e-25;
      fVar30 = *(float *)((longlong)*pauVar4 + 0xc) + 1e-25;
      fVar24 = param_10 * fVar25;
      fVar26 = fVar31 * fVar25;
      fVar27 = fVar22 * fVar25;
      fVar25 = fVar28 * fVar11 + fVar30 * fVar23 + fVar46 * fVar12 + fVar29 * fVar13 +
               fVar10 * fVar25;
      *(float *)*pauVar4 = fVar28 * 0.0 + fVar30 * 0.0 + fVar46 * 0.0 + fVar29 * fVar23 + fVar24;
      *(float *)((longlong)*pauVar4 + 4) =
           fVar28 * 0.0 + fVar30 * 0.0 + fVar46 * fVar23 + fVar29 * fVar11 + fVar26;
      *(float *)((longlong)*pauVar4 + 8) =
           fVar28 * fVar23 + fVar30 * 0.0 + fVar46 * fVar11 + fVar29 * fVar12 + fVar27;
      *(float *)((longlong)*pauVar4 + 0xc) = fVar25;
      pauVar4 = pauVar4 + 1;
    } while (pauVar4 < pauVar6);
LAB_145114e1d:
    pauVar4 = param_2;
    if (0x3f < uVar7) {
      do {
        fVar10 = (float)(((uint)*(float *)*pauVar4 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)*pauVar4 + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)*pauVar4 + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)*pauVar4 + 0xc) & 0x7fffff) + 0x3f800000);
        fVar22 = fVar10 + 1.0;
        fVar31 = fVar11 + 1.0;
        fVar24 = fVar12 + 1.0;
        fVar26 = fVar13 + 1.0;
        auVar34._0_4_ = fVar22 * fVar22 * fVar22;
        auVar34._4_4_ = fVar31 * fVar31 * fVar31;
        auVar34._8_4_ = fVar24 * fVar24 * fVar24;
        auVar34._12_4_ = fVar26 * fVar26 * fVar26;
        auVar33._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar33._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar33._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar33._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar34 = divps(auVar33,auVar34);
        auVar35._0_4_ =
             (auVar34._0_4_ + ((float)((uint)ABS(*(float *)*pauVar4) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar35._4_4_ =
             (auVar34._4_4_ +
             ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 4)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar35._8_4_ =
             (auVar34._8_4_ +
             ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 8)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar35._12_4_ =
             (auVar34._12_4_ +
             ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 0xc)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar34 = maxps(auVar35,ZEXT816(0));
        *pauVar4 = auVar34;
        fVar10 = (float)(((uint)*(float *)pauVar4[1] & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)pauVar4[1] + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)pauVar4[1] + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)pauVar4[1] + 0xc) & 0x7fffff) + 0x3f800000);
        fVar22 = fVar10 + 1.0;
        fVar31 = fVar11 + 1.0;
        fVar24 = fVar12 + 1.0;
        fVar26 = fVar13 + 1.0;
        auVar15._0_4_ = fVar22 * fVar22 * fVar22;
        auVar15._4_4_ = fVar31 * fVar31 * fVar31;
        auVar15._8_4_ = fVar24 * fVar24 * fVar24;
        auVar15._12_4_ = fVar26 * fVar26 * fVar26;
        auVar36._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar36._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar36._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar36._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar34 = divps(auVar36,auVar15);
        auVar37._0_4_ =
             (auVar34._0_4_ + ((float)((uint)ABS(*(float *)pauVar4[1]) >> 0x17) - 127.0) * 0.30103)
             * 10.0 - param_6;
        auVar37._4_4_ =
             (auVar34._4_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[1] + 4)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar37._8_4_ =
             (auVar34._8_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[1] + 8)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar37._12_4_ =
             (auVar34._12_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[1] + 0xc)) >> 0x17) - 127.0) * 0.30103)
             * 10.0 - param_6;
        auVar34 = maxps(auVar37,ZEXT816(0));
        pauVar4[1] = auVar34;
        fVar10 = (float)(((uint)*(float *)pauVar4[2] & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)pauVar4[2] + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)pauVar4[2] + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)pauVar4[2] + 0xc) & 0x7fffff) + 0x3f800000);
        fVar22 = fVar10 + 1.0;
        fVar31 = fVar11 + 1.0;
        fVar24 = fVar12 + 1.0;
        fVar26 = fVar13 + 1.0;
        auVar16._0_4_ = fVar22 * fVar22 * fVar22;
        auVar16._4_4_ = fVar31 * fVar31 * fVar31;
        auVar16._8_4_ = fVar24 * fVar24 * fVar24;
        auVar16._12_4_ = fVar26 * fVar26 * fVar26;
        auVar38._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar38._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar38._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar38._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar34 = divps(auVar38,auVar16);
        auVar39._0_4_ =
             (auVar34._0_4_ + ((float)((uint)ABS(*(float *)pauVar4[2]) >> 0x17) - 127.0) * 0.30103)
             * 10.0 - param_6;
        auVar39._4_4_ =
             (auVar34._4_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[2] + 4)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar39._8_4_ =
             (auVar34._8_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[2] + 8)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar39._12_4_ =
             (auVar34._12_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[2] + 0xc)) >> 0x17) - 127.0) * 0.30103)
             * 10.0 - param_6;
        auVar34 = maxps(auVar39,ZEXT816(0));
        pauVar4[2] = auVar34;
        fVar10 = (float)(((uint)*(float *)pauVar4[3] & 0x7fffff) + 0x3f800000);
        fVar11 = (float)(((uint)*(float *)((longlong)pauVar4[3] + 4) & 0x7fffff) + 0x3f800000);
        fVar12 = (float)(((uint)*(float *)((longlong)pauVar4[3] + 8) & 0x7fffff) + 0x3f800000);
        fVar13 = (float)(((uint)*(float *)((longlong)pauVar4[3] + 0xc) & 0x7fffff) + 0x3f800000);
        fVar22 = fVar10 + 1.0;
        fVar31 = fVar11 + 1.0;
        fVar24 = fVar12 + 1.0;
        fVar26 = fVar13 + 1.0;
        auVar17._0_4_ = fVar22 * fVar22 * fVar22;
        auVar17._4_4_ = fVar31 * fVar31 * fVar31;
        auVar17._8_4_ = fVar24 * fVar24 * fVar24;
        auVar17._12_4_ = fVar26 * fVar26 * fVar26;
        auVar40._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
        auVar40._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
        auVar40._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
        auVar40._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
        auVar34 = divps(auVar40,auVar17);
        auVar41._0_4_ =
             (auVar34._0_4_ + ((float)((uint)ABS(*(float *)pauVar4[3]) >> 0x17) - 127.0) * 0.30103)
             * 10.0 - param_6;
        auVar41._4_4_ =
             (auVar34._4_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[3] + 4)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar41._8_4_ =
             (auVar34._8_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[3] + 8)) >> 0x17) - 127.0) * 0.30103) *
             10.0 - param_6;
        auVar41._12_4_ =
             (auVar34._12_4_ +
             ((float)((uint)ABS(*(float *)((longlong)pauVar4[3] + 0xc)) >> 0x17) - 127.0) * 0.30103)
             * 10.0 - param_6;
        auVar34 = maxps(auVar41,ZEXT816(0));
        pauVar4[3] = auVar34;
        pauVar4 = pauVar4 + 4;
      } while (pauVar4 < pauVar6 + -3);
      if (pauVar6 <= pauVar4) goto LAB_1451150ba;
    }
    do {
      fVar10 = (float)(((uint)*(float *)*pauVar4 & 0x7fffff) + 0x3f800000);
      fVar11 = (float)(((uint)*(float *)((longlong)*pauVar4 + 4) & 0x7fffff) + 0x3f800000);
      fVar12 = (float)(((uint)*(float *)((longlong)*pauVar4 + 8) & 0x7fffff) + 0x3f800000);
      fVar13 = (float)(((uint)*(float *)((longlong)*pauVar4 + 0xc) & 0x7fffff) + 0x3f800000);
      fVar22 = fVar10 + 1.0;
      fVar31 = fVar11 + 1.0;
      fVar24 = fVar12 + 1.0;
      fVar26 = fVar13 + 1.0;
      auVar18._0_4_ = fVar22 * fVar22 * fVar22;
      auVar18._4_4_ = fVar31 * fVar31 * fVar31;
      auVar18._8_4_ = fVar24 * fVar24 * fVar24;
      auVar18._12_4_ = fVar26 * fVar26 * fVar26;
      auVar42._0_4_ = (fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186;
      auVar42._4_4_ = (fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186;
      auVar42._8_4_ = (fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186;
      auVar42._12_4_ = (fVar13 * fVar13 * fVar13 - 1.0) * 1.1581186;
      auVar34 = divps(auVar42,auVar18);
      auVar43._0_4_ =
           (auVar34._0_4_ + ((float)((uint)ABS(*(float *)*pauVar4) >> 0x17) - 127.0) * 0.30103) *
           10.0 - param_6;
      auVar43._4_4_ =
           (auVar34._4_4_ +
           ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 4)) >> 0x17) - 127.0) * 0.30103) *
           10.0 - param_6;
      auVar43._8_4_ =
           (auVar34._8_4_ +
           ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 8)) >> 0x17) - 127.0) * 0.30103) *
           10.0 - param_6;
      auVar43._12_4_ =
           (auVar34._12_4_ +
           ((float)((uint)ABS(*(float *)((longlong)*pauVar4 + 0xc)) >> 0x17) - 127.0) * 0.30103) *
           10.0 - param_6;
      auVar34 = maxps(auVar43,ZEXT816(0));
      *pauVar4 = auVar34;
      pauVar4 = pauVar4 + 1;
    } while (pauVar4 < pauVar6);
LAB_1451150d0:
    do {
      fVar11 = *(float *)((longlong)*pauVar3 + 0xc);
      fVar10 = param_8;
      if (0.0 <= fVar48 - *(float *)*pauVar3) {
        fVar10 = param_9;
      }
      fVar10 = (1.0 - fVar10) * *(float *)*pauVar3 + fVar10 * fVar48;
      fVar48 = param_8;
      if (0.0 <= fVar10 - *(float *)((longlong)*pauVar3 + 4)) {
        fVar48 = param_9;
      }
      fVar12 = (1.0 - fVar48) * *(float *)((longlong)*pauVar3 + 4) + fVar48 * fVar10;
      fVar48 = param_8;
      if (0.0 <= fVar12 - *(float *)((longlong)*pauVar3 + 8)) {
        fVar48 = param_9;
      }
      fVar13 = (1.0 - fVar48) * *(float *)((longlong)*pauVar3 + 8) + fVar48 * fVar12;
      fVar48 = param_8;
      if (0.0 <= fVar13 - fVar11) {
        fVar48 = param_9;
      }
      *(float *)*pauVar3 = fVar10;
      *(float *)((longlong)*pauVar3 + 4) = fVar12;
      *(float *)((longlong)*pauVar3 + 8) = fVar13;
      fVar48 = (1.0 - fVar48) * fVar11 + fVar48 * fVar13;
      *(float *)((longlong)*pauVar3 + 0xc) = fVar48;
      pauVar3 = pauVar3 + 1;
    } while (pauVar3 < pauVar6);
    pauVar3 = param_2;
    if (0x3f < uVar7) {
      do {
        fVar10 = *(float *)*pauVar3 * param_7 * 0.05;
        fVar11 = *(float *)((longlong)*pauVar3 + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)*pauVar3 + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)*pauVar3 + 0xc) * param_7 * 0.05;
        uVar32 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar32 & (uint)fVar10 | uVar32 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar19 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar20 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar21 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar20 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar21 & 0x7fffff) + 0x3f800000);
        *(uint *)*pauVar3 =
             ~uVar32 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar19 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar20 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar21 & 0xff800000));
        fVar10 = *(float *)pauVar3[1] * param_7 * 0.05;
        fVar11 = *(float *)((longlong)pauVar3[1] + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)pauVar3[1] + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)pauVar3[1] + 0xc) * param_7 * 0.05;
        uVar32 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar32 & (uint)fVar10 | uVar32 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar19 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar20 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar21 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar20 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar21 & 0x7fffff) + 0x3f800000);
        *(uint *)pauVar3[1] =
             ~uVar32 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)pauVar3[1] + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar19 & 0xff800000));
        *(uint *)((longlong)pauVar3[1] + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar20 & 0xff800000));
        *(uint *)((longlong)pauVar3[1] + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar21 & 0xff800000));
        fVar10 = *(float *)pauVar3[2] * param_7 * 0.05;
        fVar11 = *(float *)((longlong)pauVar3[2] + 4) * param_7 * 0.05;
        fVar12 = *(float *)((longlong)pauVar3[2] + 8) * param_7 * 0.05;
        fVar13 = *(float *)((longlong)pauVar3[2] + 0xc) * param_7 * 0.05;
        uVar32 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar32 & (uint)fVar10 | uVar32 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar19 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar20 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar21 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar20 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar21 & 0x7fffff) + 0x3f800000);
        *(uint *)pauVar3[2] =
             ~uVar32 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)pauVar3[2] + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar19 & 0xff800000));
        *(uint *)((longlong)pauVar3[2] + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar20 & 0xff800000));
        *(uint *)((longlong)pauVar3[2] + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar21 & 0xff800000));
        fVar10 = param_7 * *(float *)pauVar3[3] * 0.05;
        fVar11 = param_7 * *(float *)((longlong)pauVar3[3] + 4) * 0.05;
        fVar12 = param_7 * *(float *)((longlong)pauVar3[3] + 8) * 0.05;
        fVar13 = param_7 * *(float *)((longlong)pauVar3[3] + 0xc) * 0.05;
        uVar32 = -(uint)(37.0 < fVar10 || fVar10 < -37.0);
        uVar44 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar45 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar47 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar14 = (uint)((float)(~uVar32 & (uint)fVar10 | uVar32 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar19 = (uint)((float)(~uVar44 & (uint)fVar11 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar20 = (uint)((float)(~uVar45 & (uint)fVar12 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar21 = (uint)((float)(~uVar47 & (uint)fVar13 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar11 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar20 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar21 & 0x7fffff) + 0x3f800000);
        *(uint *)pauVar3[3] =
             ~uVar32 & (uint)(((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)pauVar3[3] + 4) =
             ~uVar44 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar19 & 0xff800000));
        *(uint *)((longlong)pauVar3[3] + 8) =
             ~uVar45 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar20 & 0xff800000));
        *(uint *)((longlong)pauVar3[3] + 0xc) =
             ~uVar47 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar21 & 0xff800000));
        pauVar3 = pauVar3 + 4;
      } while (pauVar3 < pauVar6 + -3);
    }
    if (pauVar3 < pauVar6) {
      fVar10 = param_7 * 0.05;
      do {
        fVar11 = fVar10 * *(float *)*pauVar3;
        fVar12 = fVar10 * *(float *)((longlong)*pauVar3 + 4);
        fVar13 = fVar10 * *(float *)((longlong)*pauVar3 + 8);
        fVar22 = fVar10 * *(float *)((longlong)*pauVar3 + 0xc);
        uVar32 = -(uint)(37.0 < fVar11 || fVar11 < -37.0);
        uVar44 = -(uint)(37.0 < fVar12 || fVar12 < -37.0);
        uVar45 = -(uint)(37.0 < fVar13 || fVar13 < -37.0);
        uVar47 = -(uint)(37.0 < fVar22 || fVar22 < -37.0);
        uVar14 = (uint)((float)(~uVar32 & (uint)fVar11 | uVar32 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar19 = (uint)((float)(~uVar44 & (uint)fVar12 | uVar44 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar20 = (uint)((float)(~uVar45 & (uint)fVar13 | uVar45 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        uVar21 = (uint)((float)(~uVar47 & (uint)fVar22 | uVar47 & 0xc2140000) * 27866352.0 +
                       1.0653532e+09);
        fVar11 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar12 = (float)((uVar19 & 0x7fffff) + 0x3f800000);
        fVar13 = (float)((uVar20 & 0x7fffff) + 0x3f800000);
        fVar22 = (float)((uVar21 & 0x7fffff) + 0x3f800000);
        *(uint *)*pauVar3 =
             ~uVar32 & (uint)(((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
                             (float)(uVar14 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 4) =
             ~uVar44 & (uint)(((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                             (float)(uVar19 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 8) =
             ~uVar45 & (uint)(((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                             (float)(uVar20 & 0xff800000));
        *(uint *)((longlong)*pauVar3 + 0xc) =
             ~uVar47 & (uint)(((fVar22 * 0.32518977 + 0.020805772) * fVar22 + 0.65304345) *
                             (float)(uVar21 & 0xff800000));
        pauVar3 = pauVar3 + 1;
      } while (pauVar3 < pauVar6);
    }
  }
  else {
LAB_145114e11:
    if (param_2 < pauVar6) goto LAB_145114e1d;
LAB_1451150ba:
    if (param_2 < pauVar6) goto LAB_1451150d0;
  }
  if (pauVar6 < pauVar1) {
    if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar6) & 0xfffffffffffffffcU)) {
      do {
        fVar11 = (*(float *)*pauVar6 + 1e-25) * fVar23 + fVar25 * param_10;
        fVar25 = (float)(((uint)fVar11 & 0x7fffff) + 0x3f800000);
        fVar10 = fVar25 + 1.0;
        fVar25 = ((11.581186 / (fVar10 * fVar10 * fVar10)) * (fVar25 * fVar25 * fVar25 - 1.0) +
                 ((float)((uint)fVar11 >> 0x17 & 0xff) - 127.0) * 3.0103002) - param_6;
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar10 = param_8;
        if (0.0 <= fVar48 - fVar25) {
          fVar10 = param_9;
        }
        fVar48 = (1.0 - fVar10) * fVar25 + fVar10 * fVar48;
        fVar25 = fVar48 * param_7 * 0.05;
        if ((fVar25 < -37.0) || (37.0 < fVar25)) {
          fVar25 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar25 * 27866352.0 + 1.0653532e+09);
          fVar25 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar25 = ((fVar25 * 0.32518977 + 0.020805772) * fVar25 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        fVar10 = *(float *)((longlong)*pauVar6 + 4);
        *(float *)*pauVar6 = fVar25;
        fVar11 = (fVar10 + 1e-25) * fVar23 + fVar11 * param_10;
        fVar25 = (float)(((uint)fVar11 & 0x7fffff) + 0x3f800000);
        fVar10 = fVar25 + 1.0;
        fVar25 = ((11.581186 / (fVar10 * fVar10 * fVar10)) * (fVar25 * fVar25 * fVar25 - 1.0) +
                 ((float)((uint)fVar11 >> 0x17 & 0xff) - 127.0) * 3.0103002) - param_6;
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar10 = param_8;
        if (0.0 <= fVar48 - fVar25) {
          fVar10 = param_9;
        }
        fVar48 = (1.0 - fVar10) * fVar25 + fVar10 * fVar48;
        fVar25 = fVar48 * param_7 * 0.05;
        if ((fVar25 < -37.0) || (37.0 < fVar25)) {
          fVar25 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar25 * 27866352.0 + 1.0653532e+09);
          fVar25 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar25 = ((fVar25 * 0.32518977 + 0.020805772) * fVar25 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)((longlong)*pauVar6 + 4) = fVar25;
        fVar11 = (*(float *)((longlong)*pauVar6 + 8) + 1e-25) * fVar23 + fVar11 * param_10;
        fVar25 = (float)(((uint)fVar11 & 0x7fffff) + 0x3f800000);
        fVar10 = fVar25 + 1.0;
        fVar25 = ((11.581186 / (fVar10 * fVar10 * fVar10)) * (fVar25 * fVar25 * fVar25 - 1.0) +
                 ((float)((uint)fVar11 >> 0x17 & 0xff) - 127.0) * 3.0103002) - param_6;
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        fVar10 = param_8;
        if (0.0 <= fVar48 - fVar25) {
          fVar10 = param_9;
        }
        fVar48 = (1.0 - fVar10) * fVar25 + fVar10 * fVar48;
        fVar25 = fVar48 * param_7 * 0.05;
        if ((fVar25 < -37.0) || (37.0 < fVar25)) {
          fVar25 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar25 * 27866352.0 + 1.0653532e+09);
          fVar25 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar25 = ((fVar25 * 0.32518977 + 0.020805772) * fVar25 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)((longlong)*pauVar6 + 8) = fVar25;
        fVar25 = (*(float *)((longlong)*pauVar6 + 0xc) + 1e-25) * fVar23 + fVar11 * param_10;
        fVar10 = (float)(((uint)fVar25 & 0x7fffff) + 0x3f800000);
        fVar11 = fVar10 + 1.0;
        fVar10 = ((11.581186 / (fVar11 * fVar11 * fVar11)) * (fVar10 * fVar10 * fVar10 - 1.0) +
                 ((float)((uint)fVar25 >> 0x17 & 0xff) - 127.0) * 3.0103002) - param_6;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar11 = param_8;
        if (0.0 <= fVar48 - fVar10) {
          fVar11 = param_9;
        }
        fVar48 = (1.0 - fVar11) * fVar10 + fVar11 * fVar48;
        fVar10 = fVar48 * param_7 * 0.05;
        if ((fVar10 < -37.0) || (37.0 < fVar10)) {
          fVar10 = 0.0;
        }
        else {
          uVar14 = (uint)(longlong)(fVar10 * 27866352.0 + 1.0653532e+09);
          fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
          fVar10 = ((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)((longlong)*pauVar6 + 0xc) = fVar10;
        pauVar6 = pauVar6 + 1;
      } while (pauVar6 < (undefined1 (*) [16])((longlong)pauVar1[-1] + 4));
      if (pauVar1 <= pauVar6) goto LAB_145115c3d;
    }
    do {
      fVar25 = (*(float *)*pauVar6 + 1e-25) * fVar23 + fVar25 * param_10;
      fVar10 = (float)(((uint)fVar25 & 0x7fffff) + 0x3f800000);
      fVar11 = fVar10 + 1.0;
      fVar10 = ((11.581186 / (fVar11 * fVar11 * fVar11)) * (fVar10 * fVar10 * fVar10 - 1.0) +
               ((float)((uint)fVar25 >> 0x17 & 0xff) - 127.0) * 3.0103002) - param_6;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = param_8;
      if (0.0 <= fVar48 - fVar10) {
        fVar11 = param_9;
      }
      fVar48 = (1.0 - fVar11) * fVar10 + fVar11 * fVar48;
      fVar10 = fVar48 * param_7 * 0.05;
      if ((fVar10 < -37.0) || (37.0 < fVar10)) {
        fVar10 = 0.0;
      }
      else {
        uVar14 = (uint)(longlong)(fVar10 * 27866352.0 + 1.0653532e+09);
        fVar10 = (float)((uVar14 & 0x7fffff) + 0x3f800000);
        fVar10 = ((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                 (float)(uVar14 & 0xff800000);
      }
      *(float *)*pauVar6 = fVar10;
      pauVar6 = (undefined1 (*) [16])((longlong)*pauVar6 + 4);
    } while (pauVar6 < pauVar1);
  }
LAB_145115c3d:
  *param_5 = fVar48;
  param_5[1] = fVar25;
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
    uVar7 = param_4 & 0xffffffff;
    if (pauVar1 < param_2) {
      uVar7 = 0;
    }
    do {
      pfVar5 = (float *)*param_1;
      pauVar6 = param_2;
      if (((uVar7 != 0) && (0xf < uVar7)) &&
         (((float *)((longlong)param_2[-1] + (uVar7 + 3) * 4) < pfVar5 ||
          ((undefined1 (*) [16])(pfVar5 + (uVar7 - 1)) < param_2)))) {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 0x10;
          fVar25 = *(float *)((longlong)*pauVar6 + 4);
          fVar48 = *(float *)((longlong)*pauVar6 + 8);
          fVar10 = *(float *)((longlong)*pauVar6 + 0xc);
          *pfVar5 = *(float *)*pauVar6 * *pfVar5;
          pfVar5[1] = fVar25 * pfVar5[1];
          pfVar5[2] = fVar48 * pfVar5[2];
          pfVar5[3] = fVar10 * pfVar5[3];
          fVar25 = *(float *)((longlong)pauVar6[1] + 4);
          fVar48 = *(float *)((longlong)pauVar6[1] + 8);
          fVar10 = *(float *)((longlong)pauVar6[1] + 0xc);
          pfVar5[4] = *(float *)pauVar6[1] * pfVar5[4];
          pfVar5[5] = fVar25 * pfVar5[5];
          pfVar5[6] = fVar48 * pfVar5[6];
          pfVar5[7] = fVar10 * pfVar5[7];
          fVar25 = *(float *)((longlong)pauVar6[2] + 4);
          fVar48 = *(float *)((longlong)pauVar6[2] + 8);
          fVar10 = *(float *)((longlong)pauVar6[2] + 0xc);
          pfVar5[8] = *(float *)pauVar6[2] * pfVar5[8];
          pfVar5[9] = fVar25 * pfVar5[9];
          pfVar5[10] = fVar48 * pfVar5[10];
          pfVar5[0xb] = fVar10 * pfVar5[0xb];
          pauVar3 = pauVar6 + 3;
          fVar25 = *(float *)((longlong)pauVar6[3] + 4);
          fVar48 = *(float *)((longlong)pauVar6[3] + 8);
          fVar10 = *(float *)((longlong)pauVar6[3] + 0xc);
          pauVar6 = pauVar6 + 4;
          pfVar5[0xc] = *(float *)*pauVar3 * pfVar5[0xc];
          pfVar5[0xd] = fVar25 * pfVar5[0xd];
          pfVar5[0xe] = fVar48 * pfVar5[0xe];
          pfVar5[0xf] = fVar10 * pfVar5[0xf];
          pfVar5 = pfVar5 + 0x10;
        } while (uVar8 < (uVar7 & 0xfffffffffffffff0));
      }
      if (pauVar6 < pauVar1) {
        if (0xf < ((longlong)pauVar1 + (3 - (longlong)pauVar6) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = *(float *)*pauVar6 * *pfVar5;
            pfVar5[1] = *(float *)((longlong)*pauVar6 + 4) * pfVar5[1];
            pfVar5[2] = *(float *)((longlong)*pauVar6 + 8) * pfVar5[2];
            pfVar2 = (float *)*pauVar6;
            pauVar6 = pauVar6 + 1;
            pfVar5[3] = pfVar2[3] * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pauVar6 < (undefined1 (*) [16])((longlong)pauVar1[-1] + 4));
          if (pauVar1 <= pauVar6) goto LAB_145115dca;
        }
        do {
          pfVar2 = (float *)*pauVar6;
          pauVar6 = (undefined1 (*) [16])((longlong)*pauVar6 + 4);
          *pfVar5 = *pfVar2 * *pfVar5;
          pfVar5 = pfVar5 + 1;
        } while (pauVar6 < pauVar1);
      }
LAB_145115dca:
      param_1 = param_1 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 145115df0 FUN_145115df0 body=83 status=ok
// SIG undefined FUN_145115df0(void)

void FUN_145115df0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkCompressor\\AkCompressorFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2b6f8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 145115ea0 FUN_145115ea0 body=56 status=ok
// SIG undefined FUN_145115ea0(void)

undefined8 FUN_145115ea0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145115ee0 FUN_145115ee0 body=116 status=ok
// SIG undefined FUN_145115ee0(void)

undefined8 FUN_145115ee0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  fVar1 = powf(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x15);
  return 1;
}



// FUNCTION 145115f60 FUN_145115f60 body=345 status=ok
// SIG undefined FUN_145115f60(void)

undefined4 FUN_145115f60(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      fVar1 = *param_3;
      fVar2 = -96.3;
      if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 8) = fVar2;
      return 1;
    case 1:
      *(float *)(param_1 + 0xc) = *param_3;
      return 1;
    case 2:
      fVar1 = *param_3;
      fVar2 = 0.0;
      if ((0.0 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
        fVar2 = 2.0;
      }
      *(float *)(param_1 + 0x10) = fVar2;
      return 1;
    case 3:
      fVar1 = *param_3;
      fVar2 = 0.0;
      if ((0.0 <= fVar1) && (fVar2 = fVar1, 2.0 <= fVar1)) {
        fVar2 = 2.0;
      }
      break;
    case 4:
      fVar1 = *param_3;
      fVar2 = -24.0;
      if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
        fVar2 = 24.0;
      }
      fVar1 = powf(10.0,fVar2 * 0.05);
      *(float *)(param_1 + 0x18) = fVar1;
      return 1;
    case 5:
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)param_3;
      return 1;
    case 6:
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)param_3;
      return 1;
    default:
      return 0x1f;
    }
    *(float *)(param_1 + 0x14) = fVar2;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1451160e0 FUN_1451160e0 body=43 status=ok
// SIG undefined FUN_1451160e0(void)

undefined8 * FUN_1451160e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145116110 FUN_145116110 body=52 status=ok
// SIG undefined FUN_145116110(void)

void FUN_145116110(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkCompressor\\AkCompressorFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b6f8;
    return;
  }
  return;
}



// FUNCTION 145116150 FUN_145116150 body=116 status=ok
// SIG undefined FUN_145116150(void)

undefined8
FUN_145116150(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  float fVar1;
  
  *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_5 + 1);
  *(undefined4 *)(param_1 + 0x14) = *param_5;
  *(longlong *)(param_1 + 8) = param_4;
  fVar1 = powf(10.0,*(float *)(param_4 + 8) * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = powf(10.0,*(float *)(param_4 + 0xc) * 0.05);
  *(float *)(param_1 + 0x1c) = fVar1;
  return 1;
}



// FUNCTION 1451161d0 FUN_1451161d0 body=56 status=ok
// SIG undefined FUN_1451161d0(void)

undefined8 FUN_1451161d0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145116240 FUN_145116240 body=235 status=ok
// SIG undefined FUN_145116240(void)

void FUN_145116240(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(short *)((longlong)param_2 + 0x12) != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    fVar3 = powf(10.0,*(float *)(lVar2 + 8) * 0.05);
    fVar4 = powf(10.0,*(float *)(lVar2 + 0xc) * 0.05);
    FUN_145116600(param_2,*(undefined4 *)(param_1 + 0x18),fVar3,0);
    fVar1 = *(float *)(param_1 + 0x1c);
    if ((*(uint *)(param_2 + 1) & 0x8000) != 0) {
      lVar2 = *param_2 +
              (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) * (ulonglong)*(ushort *)(param_2 + 2)
              * 4;
      if (fVar4 == fVar1) {
        FUN_1451164c0(lVar2,fVar1,*(undefined2 *)((longlong)param_2 + 0x12));
      }
      else {
        FUN_145116370(lVar2,fVar1,fVar4);
      }
    }
    *(float *)(param_1 + 0x18) = fVar3;
    *(float *)(param_1 + 0x1c) = fVar4;
  }
  return;
}



// FUNCTION 145116340 FUN_145116340 body=43 status=ok
// SIG undefined FUN_145116340(void)

undefined8 * FUN_145116340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145116370 FUN_145116370 body=334 status=ok
// SIG undefined FUN_145116370(void)

void FUN_145116370(float *param_1,float param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = param_1 + param_4;
  if (3 < param_4) {
    pfVar2 = param_1 + (param_4 & 0xfffffffc);
    fVar5 = (param_3 - param_2) / (float)(param_4 & 0xfffffffc);
    fVar7 = fVar5 * 4.0;
    fVar4 = fVar5 + param_2 + fVar5;
    fVar6 = fVar5 + param_2;
    fVar5 = fVar4 + fVar5;
    fVar3 = param_2;
    for (; param_1 < pfVar2; param_1 = param_1 + 4) {
      *param_1 = *param_1 * fVar3;
      param_1[1] = param_1[1] * fVar6;
      param_1[2] = param_1[2] * fVar4;
      param_1[3] = param_1[3] * fVar5;
      fVar6 = fVar6 + fVar7;
      fVar4 = fVar4 + fVar7;
      fVar5 = fVar5 + fVar7;
      fVar3 = fVar3 + fVar7;
    }
  }
  if (param_1 < pfVar1) {
    fVar6 = (param_3 - param_2) / (float)param_4;
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      do {
        *param_1 = param_2 * *param_1;
        fVar4 = param_2 + fVar6 + fVar6;
        param_1[1] = (param_2 + fVar6) * param_1[1];
        fVar5 = fVar4 + fVar6;
        param_1[2] = fVar4 * param_1[2];
        param_2 = fVar5 + fVar6;
        param_1[3] = fVar5 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1 + -3);
      if (pfVar1 <= param_1) {
        return;
      }
    }
    do {
      *param_1 = param_2 * *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + fVar6;
    } while (param_1 < pfVar1);
  }
  return;
}



// FUNCTION 1451164c0 FUN_1451164c0 body=309 status=ok
// SIG undefined FUN_1451164c0(void)

void FUN_1451164c0(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 145116600 FUN_145116600 body=528 status=ok
// SIG undefined FUN_145116600(void)

void FUN_145116600(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_1451164c0(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_1451167e8;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_1451167e8:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 145116810 FUN_145116810 body=52 status=ok
// SIG undefined FUN_145116810(void)

void FUN_145116810(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGain\\AkGainFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b7c0;
    return;
  }
  return;
}



// FUNCTION 145116850 FUN_145116850 body=75 status=ok
// SIG undefined FUN_145116850(void)

void FUN_145116850(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x10,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGain\\AkGainFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b888;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1451168c0 FUN_1451168c0 body=56 status=ok
// SIG undefined FUN_1451168c0(void)

undefined8 FUN_1451168c0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1451169a0 FUN_1451169a0 body=43 status=ok
// SIG undefined FUN_1451169a0(void)

undefined8 * FUN_1451169a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1451169d0 FUN_1451169d0 body=52 status=ok
// SIG undefined FUN_1451169d0(void)

void FUN_1451169d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x10,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGain\\AkGainFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b888;
    return;
  }
  return;
}



// FUNCTION 145116a10 FUN_145116a10 body=2326 status=ok
// SIG undefined FUN_145116a10(void)

void FUN_145116a10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar2 = param_7 * 0.45;
  if (param_8 <= param_7 * 0.45) {
    fVar2 = param_8;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  if (param_6 == 3) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar2 = 1.0 / fVar2;
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 + fVar8;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else if (param_6 == 4) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 * -2.0;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else {
    if (param_6 == 5) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = (float)uVar3 * (0.5 / param_10);
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar7 = 1.0 - fVar8;
      fVar9 = -fVar8;
      fVar11 = fVar8;
    }
    else if (param_6 == 6) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = 1.0;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar9 = 1.0;
      fVar11 = (float)uVar3 * (0.5 / param_10);
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    else {
      if (param_6 == 0) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar7 = fVar4 * fVar2;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar2 = fVar6 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar8 = (fVar5 + fVar9) * fVar11;
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar5 + fVar7;
        fVar7 = fVar7 - fVar5;
        goto LAB_1451172a0;
      }
      if (param_6 == 7) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar7 = fVar4 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar2 = fVar6 * fVar2;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar8 = (fVar9 + fVar5) * fVar11;
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1451172a0;
      }
      if (param_6 == 2) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1451172a0;
      }
      if (param_6 == 8) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_1451172a0;
      }
      if (param_6 != 1) goto LAB_1451172a0;
      param_7 = (fVar2 * 6.2831855) / param_7;
      fVar4 = cosf(param_7);
      param_9 = param_9 * 0.025;
      if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
        uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      fVar11 = sinf(param_7);
      fVar4 = fVar4 * -2.0;
      fVar11 = fVar11 * (0.5 / param_10);
      fVar8 = fVar11 * fVar7;
      fVar11 = fVar11 / fVar7;
      fVar9 = 1.0 - fVar8;
      fVar8 = fVar8 + 1.0;
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    fVar11 = fVar11 + 1.0;
  }
LAB_1451172a0:
  fVar11 = 1.0 / fVar11;
  *param_1 = fVar11 * fVar8;
  *param_2 = fVar11 * fVar6;
  *param_3 = fVar11 * fVar9;
  *param_4 = fVar11 * fVar4;
  *param_5 = fVar11 * fVar7;
  return;
}



// FUNCTION 145117330 FUN_145117330 body=356 status=ok
// SIG undefined FUN_145117330(void)

ulonglong FUN_145117330(longlong *param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  uint *puVar1;
  void *_Dst;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 1);
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *puVar1 = 0;
  }
  uVar5 = (uint)param_3;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  uVar3 = ((uVar5 & 1) +
          (((uint)((param_3 & 0xffffffff) >> 1) & 1) + (int)((param_3 & 0xffffffff) >> 2)) * 4) *
          0x10;
  *puVar1 = uVar3;
  _Dst = (void *)(**(code **)(*param_2 + 0x18))
                           (param_2,uVar3,0x10,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\BiquadFilterSimd.h"
                            ,0x39e);
  *param_1 = (longlong)_Dst;
  if (_Dst == (void *)0x0) {
    uVar4 = 2;
  }
  else {
    memset(_Dst,0,(ulonglong)*puVar1);
    if (((param_3 & 1) == 0) && (param_4 == '\0')) {
      uVar3 = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffe;
    }
    else {
      uVar3 = *(uint *)((longlong)param_1 + 0x1c) | 1;
    }
    if (((param_3 & 2) == 0) || (param_4 != '\0')) {
      uVar3 = uVar3 & 0xfffffffd;
    }
    else {
      uVar3 = uVar3 | 2;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar3;
    if ((uVar5 < 4) || (param_4 != '\0')) {
      uVar3 = uVar3 & 0xfffffffb;
    }
    else {
      uVar3 = uVar3 | 4;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar3;
    uVar2 = FUN_14510b800(param_1 + 2,param_2);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 == 1) {
      return uVar2;
    }
  }
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return uVar4;
}



// FUNCTION 1451174a0 FUN_1451174a0 body=87 status=ok
// SIG undefined FUN_1451174a0(void)

void FUN_1451174a0(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 145117500 FUN_145117500 body=152 status=ok
// SIG undefined FUN_145117500(void)

void FUN_145117500(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 local_res8 [32];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_145116a10(&local_c,&local_10,&local_14,local_18,local_res8,param_2,param_3,param_4,param_5,
                param_6);
  FUN_14510b8c0(param_1 + 0x10,local_c,local_10,local_14);
  return;
}



// FUNCTION 1451175a0 FUN_1451175a0 body=363 status=ok
// SIG undefined FUN_1451175a0(void)

undefined8
FUN_1451175a0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0x1a4) = (uint)*(byte *)(param_5 + 1);
  FUN_1451189e0(param_4,(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x174) = *(undefined8 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x1a8) = *param_5;
  FUN_145117b00(param_1,param_5[1]);
  uVar1 = param_5[1];
  if (*(char *)(param_1 + 0x134) != '\0' || *(char *)(param_1 + 0x118) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x1a0);
    if (((uVar2 & uVar1) >> 0xc != 0) ||
       ((((char)uVar2 == (char)uVar1 && (((uVar2 ^ uVar1) & 0xf00) == 0)) &&
        (uVar1 >> 0xc == uVar2 >> 0xc)))) {
      uVar7 = 1;
      goto LAB_145117692;
    }
  }
  uVar7 = 0;
LAB_145117692:
  *(undefined1 *)(param_1 + 0x1ac) = uVar7;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  plVar5 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
  cVar4 = (**(code **)(*plVar5 + 8))(plVar5,0x80);
  if (cVar4 != '\0') {
    *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 0x80;
  }
  uVar6 = FUN_145117d60(param_1);
  if (((int)uVar6 == 1) && (uVar6 = FUN_145117fc0(param_1), (int)uVar6 == 1)) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar6 = 1;
    *(undefined2 *)(lVar3 + 8) = 0;
    *(undefined1 *)(lVar3 + 10) = 0;
  }
  return uVar6;
}



// FUNCTION 145117710 FUN_145117710 body=72 status=ok
// SIG undefined FUN_145117710(void)

undefined8 FUN_145117710(undefined8 *param_1,longlong *param_2)

{
  FUN_145117e70();
  FUN_1451180d0(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145117760 FUN_145117760 body=78 status=ok
// SIG undefined FUN_145117760(void)

undefined8 FUN_145117760(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_145117f40();
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0xf8) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x1a4));
  }
  return 1;
}



// FUNCTION 1451177d0 FUN_1451177d0 body=795 status=ok
// SIG undefined FUN_1451177d0(void)

void FUN_1451177d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar6;
  ulonglong uVar5;
  
  FUN_1451189e0(*(undefined8 *)(param_1 + 8),param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  iVar6 = 0;
  do {
    if (*(char *)(uVar5 + 8 + lVar3) != '\0') {
      if (((*(byte *)(lVar3 + 8) & 0x80) != 0) || ((*(byte *)(lVar3 + 9) & 0x40) != 0)) {
        FUN_145117e70(param_1);
        iVar2 = FUN_145117d60(param_1,*(undefined4 *)(param_1 + 0x1b0));
        if (iVar2 != 1) {
          return;
        }
        FUN_145117f40(param_1);
      }
      bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 8);
      if (((((bVar1 & 0x20) != 0) || ((bVar1 & 0x40) != 0)) ||
          ((*(byte *)(*(longlong *)(param_1 + 8) + 9) & 0x20) != 0)) ||
         (((bVar1 & 1) != 0 || ((bVar1 & 2) != 0)))) {
        FUN_145117e70(param_1);
        FUN_1451180d0(param_1);
        FUN_145117b00(param_1,*(undefined4 *)(param_2 + 8));
        FUN_145117cf0(param_1,*(undefined4 *)(param_2 + 8));
        iVar2 = FUN_145117d60(param_1,*(undefined4 *)(param_1 + 0x1b0));
        if (iVar2 != 1) {
          return;
        }
        iVar2 = FUN_145117fc0(param_1);
        if (iVar2 != 1) {
          return;
        }
        FUN_145117f40(param_1);
        FUN_145118150(param_1);
      }
      if ((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 4) != 0) {
        FUN_1451180d0(param_1);
        iVar2 = FUN_145117fc0(param_1);
        if (iVar2 != 1) {
          return;
        }
        FUN_145118150(param_1);
      }
      bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 9);
      if ((((bVar1 & 2) != 0) || ((bVar1 & 8) != 0)) ||
         (((bVar1 & 4) != 0 || ((bVar1 & 0x10) != 0)))) {
        if (*(int *)(param_1 + 0x100) == 0) {
          FUN_1451174a0(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x10));
        }
        else {
          if (((*(longlong *)(param_1 + 0xb8) == 0) || (*(longlong *)(param_1 + 200) == 0)) &&
             (iVar2 = FUN_145117330(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x10),
                                    *(undefined1 *)(param_1 + 0x1a0),1), iVar2 != 1)) {
            return;
          }
          FUN_145117500(param_1 + 0xb8,*(int *)(param_1 + 0x100) + -1,
                        (float)*(uint *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x108),
                        *(undefined4 *)(param_1 + 0x104),*(undefined4 *)(param_1 + 0x10c));
        }
      }
      bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 10);
      if ((((bVar1 & 1) != 0) || ((bVar1 & 4) != 0)) || (((bVar1 & 2) != 0 || ((bVar1 & 8) != 0))))
      {
        if (*(int *)(param_1 + 0x11c) == 0) {
          FUN_1451174a0(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x10));
        }
        else {
          if (((*(longlong *)(param_1 + 0xd8) == 0) || (*(longlong *)(param_1 + 0xe8) == 0)) &&
             (iVar2 = FUN_145117330(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x10),
                                    *(undefined1 *)(param_1 + 0x1a0),1), iVar2 != 1)) {
            return;
          }
          FUN_145117500(param_1 + 0xd8,*(int *)(param_1 + 0x11c) + -1,
                        (float)*(uint *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x124),
                        *(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
        }
      }
      break;
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while (uVar4 < 3);
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined2 *)(lVar3 + 8) = 0;
  *(undefined1 *)(lVar3 + 10) = 0;
  if (*(char *)(param_1 + 0x118) != '\0') {
    iVar6 = *(int *)(param_1 + 0x40) << 2;
  }
  if (*(char *)(param_1 + 0x134) != '\0') {
    iVar6 = *(int *)(param_1 + 0x90) << 2;
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),iVar6 + (uint)*(ushort *)(param_2 + 0x10) * 8,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkHarmonizer\\AkHarmonizerFX.cpp"
                     ,0x16e);
  if (lVar3 != 0) {
    FUN_1453be500(param_2,param_1 + 0x18,lVar3);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar3);
  }
  return;
}



// FUNCTION 145117b00 FUN_145117b00 body=460 status=ok
// SIG undefined FUN_145117b00(void)

void FUN_145117b00(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 0:
    if (*(char *)(param_1 + 0x148) == '\0') {
      uVar3 = param_2 >> 0xc & 0xffff7;
      param_2 = param_2 & 0xf00 | param_2 - ((param_2 >> 0xc) - uVar3 >> 3) & 0xff | uVar3 << 0xc;
    }
    *(uint *)(param_1 + 0x1a0) = param_2;
    return;
  case 1:
    cVar2 = '\0';
    uVar3 = 4;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 2:
    cVar2 = '\0';
    uVar3 = 3;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar3 = 0xb;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 3:
    cVar2 = '\0';
    uVar3 = 7;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar3 = 0xf;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 4:
    cVar2 = '\0';
    uVar3 = 0x603;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar3 = 0x60b;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 5:
    cVar2 = '\0';
    uVar3 = 0x607;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar3 = 0x60f;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 6:
    cVar2 = '\0';
    uVar3 = 1;
    if (*(char *)(param_1 + 0x148) != '\0') {
      uVar3 = 9;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  default:
    goto switchD_145117b28_default;
  }
  *(char *)(param_1 + 0x1a0) = cVar2;
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0xff;
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) | uVar3 << 0xc | 0x100;
switchD_145117b28_default:
  return;
}



// FUNCTION 145117cf0 FUN_145117cf0 body=103 status=ok
// SIG undefined FUN_145117cf0(void)

void FUN_145117cf0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x134) != '\0' || *(char *)(param_1 + 0x118) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x1a0);
    if (((uVar1 & param_2) >> 0xc != 0) ||
       ((((char)uVar1 == (char)param_2 && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
        (param_2 >> 0xc == uVar1 >> 0xc)))) {
      *(undefined1 *)(param_1 + 0x1ac) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  return;
}



// FUNCTION 145117d60 FUN_145117d60 body=270 status=ok
// SIG undefined FUN_145117d60(void)

ulonglong FUN_145117d60(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0x10c);
  uVar4 = 0;
  do {
    if (*(char *)(puVar3 + 3) != '\0') {
      uVar2 = FUN_1453bd1b0(uVar4 * 0x50 + 0x18 + param_1,*(undefined8 *)(param_1 + 0x10),
                            *(undefined1 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),
                            *(undefined4 *)(param_1 + 0x144),param_2);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      if ((puVar3[-3] != 0) && (uVar5 = *(uint *)(param_1 + 0x1a0) & 0xff, uVar5 != 0)) {
        lVar1 = uVar4 * 0x20 + param_1;
        uVar2 = FUN_145117330(lVar1 + 0xb8,*(undefined8 *)(param_1 + 0x10),uVar5,uVar2 & 0xff);
        if ((int)uVar2 != 1) {
          return uVar2;
        }
        FUN_145117500(lVar1 + 0xb8,puVar3[-3] + -1,(float)*(uint *)(param_1 + 0x1a8),puVar3[-1],
                      puVar3[-2],*puVar3);
      }
    }
    uVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar5;
    puVar3 = puVar3 + 7;
  } while (uVar5 < 2);
  return 1;
}



// FUNCTION 145117e70 FUN_145117e70 body=205 status=ok
// SIG undefined FUN_145117e70(void)

void FUN_145117e70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  FUN_1453bd350(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_1453bd350(param_1 + 0x68,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145117f40 FUN_145117f40 body=118 status=ok
// SIG undefined FUN_145117f40(void)

void FUN_145117f40(longlong param_1)

{
  if (*(char *)(param_1 + 0x118) != '\0') {
    FUN_1453bd400(param_1 + 0x18,1,0);
    if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
      memset(*(void **)(param_1 + 0xb8),0,(ulonglong)*(uint *)(param_1 + 0xc0));
    }
  }
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_1453bd400(param_1 + 0x68,1,0);
    if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
      memset(*(void **)(param_1 + 0xd8),0,(ulonglong)*(uint *)(param_1 + 0xe0));
      return;
    }
  }
  return;
}



// FUNCTION 145117fc0 FUN_145117fc0 body=257 status=ok
// SIG undefined FUN_145117fc0(void)

undefined8 FUN_145117fc0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x1a4) != 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0x1a4) * 0x18,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkHarmonizer\\AkHarmonizerFX.cpp"
                       ,0xb2);
    *(longlong *)(param_1 + 0xf8) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    uVar7 = 0;
    uVar6 = uVar8;
    if (*(int *)(param_1 + 0x1a4) != 0) {
      do {
        puVar1 = (undefined4 *)(lVar3 + uVar6 * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar3 = *(longlong *)(param_1 + 0xf8);
        }
        uVar7 = *(uint *)(param_1 + 0x1a4);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar7);
    }
  }
  if (((*(char *)(param_1 + 0x149) != '\0') && (*(char *)(param_1 + 0x1ac) != '\0')) &&
     (uVar2 = *(undefined4 *)(param_1 + 0x144), uVar7 != 0)) {
    do {
      uVar4 = FUN_1453be220(*(longlong *)(param_1 + 0xf8) + uVar8 * 0x18,
                            *(undefined8 *)(param_1 + 0x10),uVar2);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x1a4));
  }
  return 1;
}



// FUNCTION 1451180d0 FUN_1451180d0 body=126 status=ok
// SIG undefined FUN_1451180d0(void)

void FUN_1451180d0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x1a4) != 0) {
      do {
        FUN_1453be280(*(longlong *)(param_1 + 0xf8) + uVar2 * 0x18,*(undefined8 *)(param_1 + 0x10));
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1a4));
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 145118150 FUN_145118150 body=73 status=ok
// SIG undefined FUN_145118150(void)

void FUN_145118150(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0xf8) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x1a4));
  }
  return;
}



// FUNCTION 1451181a0 FUN_1451181a0 body=85 status=ok
// SIG undefined FUN_1451181a0(void)

undefined8 * FUN_1451181a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c2b940;
  FUN_1453bcf30(param_1 + 0xd);
  FUN_1453bcf30(param_1 + 3);
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 145118200 FUN_145118200 body=590 status=ok
// SIG undefined FUN_145118200(void)

undefined8 * FUN_145118200(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x1b8,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkHarmonizer\\AkHarmonizerFX.cpp"
                      ,0x15);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2b940;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_1453bcf10(puVar1 + 3);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    FUN_1453bcf10(puVar1 + 0xd);
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x104) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x21) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x10c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x114) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0x23) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x11c) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x25) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 300) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x26) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x134) = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x28) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0x400;
    *(undefined2 *)(puVar1 + 0x29) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14c) = 0;
    *(undefined4 *)(puVar1 + 0x2a) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x154) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x2b) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x15c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2c) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x164) = 0;
    *(undefined4 *)(puVar1 + 0x2d) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x16c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2e) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x174) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2f) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0x30) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x184) = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x18c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x32) = 0x400;
    *(undefined2 *)((longlong)puVar1 + 0x194) = 0;
    *(undefined1 *)(puVar1 + 0x34) = 0;
    *(uint *)(puVar1 + 0x34) = *(uint *)(puVar1 + 0x34) & 0xff;
    *(undefined4 *)(puVar1 + 0x33) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x19c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0;
    *(undefined4 *)(puVar1 + 0x36) = 0;
    puVar1[0x1f] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145118450 FUN_145118450 body=256 status=ok
// SIG undefined FUN_145118450(void)

undefined8 * FUN_145118450(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x58,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkHarmonizer\\AkHarmonizerFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2ba18;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 6) = 0x447a0000;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
    *(undefined1 *)(puVar2 + 8) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 9) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 10) = 0x400;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((longlong)puVar2 + 0x34) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)((longlong)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)((longlong)puVar2 + 0x44) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0x4c) = *(undefined8 *)(param_1 + 0x4c);
    *(undefined4 *)((longlong)puVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    *(undefined1 *)((longlong)puVar2 + 10) = 0xff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145118570 FUN_145118570 body=56 status=ok
// SIG undefined FUN_145118570(void)

undefined8 FUN_145118570(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1451185b0 FUN_1451185b0 body=357 status=ok
// SIG undefined FUN_1451185b0(void)

undefined8 FUN_1451185b0(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  
  *(undefined1 *)(param_1 + 0x24) = *param_2;
  fVar1 = powf(2.0,*(float *)(param_2 + 1) * 0.00083333335);
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = powf(10.0,*(float *)(param_2 + 5) * 0.05);
  *(float *)(param_1 + 0x20) = fVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x40) = param_2[0x19];
  fVar1 = powf(2.0,*(float *)(param_2 + 0x1a) * 0.00083333335);
  *(float *)(param_1 + 0x38) = fVar1;
  fVar1 = powf(10.0,*(float *)(param_2 + 0x1e) * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x32);
  fVar1 = powf(10.0,*(float *)(param_2 + 0x36) * 0.05);
  *(float *)(param_1 + 0x48) = fVar1;
  fVar1 = powf(10.0,*(float *)(param_2 + 0x3a) * 0.05);
  *(float *)(param_1 + 0x4c) = fVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x54) = param_2[0x42];
  *(undefined1 *)(param_1 + 0x55) = param_2[0x43];
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  return 1;
}



// FUNCTION 145118720 FUN_145118720 body=621 status=ok
// SIG undefined FUN_145118720(void)

undefined4 FUN_145118720(longlong param_1,short param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      *(float *)(param_1 + 0x44) = *param_3;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)param_3;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)param_3;
      break;
    case 3:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x48) = fVar2;
      break;
    case 4:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x4c) = fVar2;
      break;
    case 5:
      *(float *)(param_1 + 0x50) = *param_3;
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)param_3;
      break;
    case 7:
      fVar2 = powf(2.0,*param_3 * 0.00083333335);
      *(float *)(param_1 + 0x1c) = fVar2;
      break;
    case 8:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x20) = fVar2;
      break;
    case 9:
      *(int *)(param_1 + 0xc) = (int)(longlong)*param_3;
      break;
    case 10:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      *(float *)(param_1 + 0x10) = fVar3;
      break;
    case 0xb:
      *(float *)(param_1 + 0x14) = *param_3;
      break;
    case 0xc:
      *(float *)(param_1 + 0x18) = *param_3;
      break;
    case 0xd:
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)param_3;
      break;
    case 0xe:
      fVar2 = powf(2.0,*param_3 * 0.00083333335);
      *(float *)(param_1 + 0x38) = fVar2;
      break;
    case 0xf:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x3c) = fVar2;
      break;
    case 0x10:
      *(int *)(param_1 + 0x28) = (int)(longlong)*param_3;
      break;
    case 0x11:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      *(float *)(param_1 + 0x2c) = fVar3;
      break;
    case 0x12:
      *(float *)(param_1 + 0x30) = *param_3;
      break;
    case 0x13:
      *(float *)(param_1 + 0x34) = *param_3;
    }
    uVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    *(byte *)((ulonglong)uVar1 + 8 + param_1) =
         *(byte *)((ulonglong)uVar1 + 8 + param_1) | (byte)(1 << ((int)param_2 + uVar1 * -8 & 0x1f))
    ;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1451189e0 FUN_1451189e0 body=48 status=ok
// SIG undefined FUN_1451189e0(void)

void FUN_1451189e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  param_2[2] = *(undefined8 *)(param_1 + 0x1c);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  param_2[6] = *(undefined8 *)(param_1 + 0x3c);
  param_2[7] = uVar1;
  param_2[8] = *(undefined8 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_1 + 0x54);
  return;
}



// FUNCTION 145118a10 FUN_145118a10 body=43 status=ok
// SIG undefined FUN_145118a10(void)

undefined8 * FUN_145118a10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145118a40 FUN_145118a40 body=179 status=ok
// SIG undefined FUN_145118a40(void)

undefined8 * FUN_145118a40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x58,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkHarmonizer\\AkHarmonizerFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2ba18;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 6) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 9) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 10) = 0x400;
    *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145118b00 FUN_145118b00 body=440 status=ok
// SIG undefined FUN_145118b00(void)

void FUN_145118b00(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_5 + 1);
  *(undefined4 *)(param_1 + 100) = *param_5;
  FUN_1451199e0(param_4,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
  plVar4 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  iVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  *(undefined4 *)(param_1 + 300) = 0;
  fVar6 = -*(float *)(param_1 + 0x20);
  uVar5 = iVar2 * 0x343fd + 0x269ec3;
  uVar3 = uVar5 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x130) = uVar3;
  fVar7 = -*(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x68) =
       (float)uVar5 * 2.3283064e-10 * (*(float *)(param_1 + 0x20) - fVar6) + fVar6;
  *(float *)(param_1 + 0x6c) =
       (float)uVar3 * 2.3283064e-10 * (*(float *)(param_1 + 0x28) - fVar7) + fVar7;
  plVar4 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
  cVar1 = (**(code **)(*plVar4 + 8))(plVar4,0x80);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x80;
  }
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x34) == '\0') {
    FUN_1453bd1b0(param_1 + 0xd0,param_2,*(undefined1 *)(param_5 + 1),*param_5,
                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 300));
  }
  else {
    FUN_1453bef60(param_1 + 0x70,param_2,*(undefined1 *)(param_5 + 1),*param_5,
                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 300),
                  (uint *)(param_1 + 0x130),*(int *)(param_1 + 0x38) == 1);
  }
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}



// FUNCTION 145118cc0 FUN_145118cc0 body=83 status=ok
// SIG undefined FUN_145118cc0(void)

undefined8 FUN_145118cc0(undefined8 *param_1,longlong *param_2)

{
  FUN_1453bf1e0(param_1 + 0xe);
  FUN_1453bd350(param_1 + 0x1a,param_2);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145118d20 FUN_145118d20 body=48 status=ok
// SIG undefined FUN_145118d20(void)

undefined8 FUN_145118d20(longlong param_1)

{
  FUN_1453bf2c0(param_1 + 0x70,1);
  FUN_1453bd400(param_1 + 0xd0,0,1);
  return 1;
}



// FUNCTION 145118d70 FUN_145118d70 body=786 status=ok
// SIG undefined FUN_145118d70(void)

void FUN_145118d70(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_1451199e0(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
  if (((*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x3c)) ||
      (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x58))) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x5c))) {
    FUN_1453bd350(param_1 + 0xd0,*(undefined8 *)(param_1 + 0x10));
    FUN_1453bf1e0(param_1 + 0x70,*(undefined8 *)(param_1 + 0x10));
    if (*(char *)(param_1 + 0x34) == '\0') {
      iVar1 = FUN_1453bd1b0(param_1 + 0xd0,*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                            *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 300));
    }
    else {
      iVar1 = FUN_1453bef60(param_1 + 0x70,*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                            *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 300),
                            param_1 + 0x130,*(int *)(param_1 + 0x38) == 1);
    }
    if (iVar1 != 1) goto LAB_145119040;
    FUN_1453bf2c0(param_1 + 0x70,1);
    FUN_1453bd400(param_1 + 0xd0,0,1);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
  }
  fVar5 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x24);
  if (1600.0 <= fVar5) {
    fVar5 = 1600.0;
  }
  if (2400.0 <= fVar4) {
    fVar4 = 2400.0;
  }
  if (fVar5 <= 25.0) {
    fVar5 = 25.0;
  }
  if (fVar4 <= -2400.0) {
    fVar4 = -2400.0;
  }
  if ((fVar5 == 100.0) && (fVar4 == 0.0)) {
    if ((*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x40) == 100.0) &&
       (*(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x48) == 0.0)) {
      cVar3 = *(char *)(param_1 + 0x120);
    }
    else {
      cVar3 = '\0';
      *(undefined2 *)(param_1 + 0x120) = 0x100;
    }
    if (*(char *)(param_1 + 0x121) != '\0') {
      cVar3 = cVar3 + '\x01';
      *(char *)(param_1 + 0x120) = cVar3;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x120) = 0;
    cVar3 = '\0';
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),
                     (*(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x98)) * 4,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTimeStretch\\AkTimeStretchFX.cpp"
                     ,0xfc);
  if (lVar2 != 0) {
    fVar4 = powf(2.0,fVar4 * 0.00083333335);
    if (*(char *)(param_1 + 0x34) == '\0') {
      FUN_1453bda60(param_1 + 0xd0,param_2,param_3,param_4,100.0 / fVar5,fVar4,cVar3 == '\b',lVar2);
    }
    else {
      FUN_1453bf320(param_1 + 0x70,param_2,param_3,param_4,100.0 / fVar5,fVar4,cVar3 == '\b',lVar2,
                    *(undefined4 *)(param_1 + 0x30));
    }
    if (cVar3 == '\b') {
      *(undefined2 *)(param_1 + 0x120) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar2);
    if ((*(int *)(param_4 + 0xc) != 0x2d) && (*(int *)(param_4 + 0xc) != 0x11)) {
      return;
    }
    FUN_1451193d0(param_4,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x2c),1);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
    return;
  }
LAB_145119040:
  FUN_145119090(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 145119090 FUN_145119090 body=255 status=ok
// SIG undefined FUN_145119090(void)

void FUN_145119090(undefined8 param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((byte)*(uint *)(param_4 + 1) <= (byte)*(uint *)(param_2 + 1)) {
    uVar1 = *(uint *)(param_4 + 1);
  }
  uVar4 = (uint)*(ushort *)(param_4 + 2) - (uint)*(ushort *)((longlong)param_4 + 0x12);
  if ((int)(uint)*(ushort *)((longlong)param_2 + 0x12) < (int)uVar4) {
    uVar4 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  }
  uVar5 = 0;
  if ((char)uVar1 != '\0') {
    do {
      memcpy((void *)(*param_4 +
                     ((ulonglong)*(ushort *)(param_4 + 2) * (ulonglong)uVar5 +
                     (ulonglong)*(ushort *)((longlong)param_4 + 0x12)) * 4),
             (void *)(*param_2 +
                     ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar5 + (ulonglong)param_3) *
                     4),(ulonglong)(uVar4 * 4));
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar1 & 0xff));
  }
  *(short *)((longlong)param_4 + 0x12) = *(short *)((longlong)param_4 + 0x12) + (short)uVar4;
  sVar2 = *(short *)((longlong)param_2 + 0x12) - (short)uVar4;
  *(short *)((longlong)param_2 + 0x12) = sVar2;
  if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (sVar2 == 0)) {
    *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
    return;
  }
  uVar3 = 0x2b;
  if (*(short *)((longlong)param_4 + 0x12) == (short)param_4[2]) {
    uVar3 = 0x2d;
  }
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar3;
  return;
}



// FUNCTION 145119190 FUN_145119190 body=151 status=ok
// SIG undefined FUN_145119190(void)

undefined8 FUN_145119190(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  float fVar2;
  
  if (*param_2 == 0) {
    return 0x11;
  }
  FUN_1451199e0(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x1c);
  if (1600.0 <= fVar2) {
    fVar2 = 1600.0;
  }
  if (fVar2 <= 25.0) {
    fVar2 = 25.0;
  }
  fVar2 = ((float)*param_2 * 100.0) / fVar2 + *(float *)(param_1 + 0x128);
  uVar1 = (ulonglong)fVar2;
  *param_2 = (uint)uVar1;
  *(float *)(param_1 + 0x128) = fVar2 - (float)(uVar1 & 0xffffffff);
  return 0x2d;
}



// FUNCTION 145119230 FUN_145119230 body=88 status=ok
// SIG undefined FUN_145119230(void)

undefined8 * FUN_145119230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c2bae8;
  FUN_1453bcf30(param_1 + 0x1a);
  FUN_1453bcf30(param_1 + 0xe);
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 145119290 FUN_145119290 body=309 status=ok
// SIG undefined FUN_145119290(void)

void FUN_145119290(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1451193d0 FUN_1451193d0 body=528 status=ok
// SIG undefined FUN_1451193d0(void)

void FUN_1451193d0(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_145119290(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_1451195b8;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_1451195b8:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1451195e0 FUN_1451195e0 body=225 status=ok
// SIG undefined FUN_1451195e0(void)

undefined8 * FUN_1451195e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x138,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTimeStretch\\AkTimeStretchFX.cpp"
                      ,0x16);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2bae8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x800;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 6) = 0x3c23d70a;
    *(undefined1 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x800;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 10) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0x3c23d70a;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    FUN_1453bef30(puVar1 + 0xe);
    FUN_1453bcf10(puVar1 + 0x1a);
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1451196d0 FUN_1451196d0 body=130 status=ok
// SIG undefined FUN_1451196d0(void)

undefined8 * FUN_1451196d0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x30,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTimeStretch\\AkTimeStretchFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0x800;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar2 + 4) = 0x3c23d70a;
    *puVar2 = &PTR_FUN_149c2bbc8;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145119780 FUN_145119780 body=56 status=ok
// SIG undefined FUN_145119780(void)

undefined8 FUN_145119780(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1451197c0 FUN_1451197c0 body=181 status=ok
// SIG undefined FUN_1451197c0(void)

undefined8 FUN_1451197c0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  fVar1 = powf(10.0,(float)param_2[5] * 0.05);
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = expf((float)param_2[6] * -0.06);
  fVar1 = 1.0 - (1.0024788 - fVar1);
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  *(int *)(param_1 + 0x28) = (int)*(short *)(param_2 + 7);
  *(bool *)(param_1 + 0x24) = *(short *)((longlong)param_2 + 0x1e) == 1;
  return 1;
}



// FUNCTION 145119880 FUN_145119880 body=313 status=ok
// SIG undefined FUN_145119880(void)

undefined4 FUN_145119880(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      *(float *)(param_1 + 8) = *param_3;
      return 1;
    case 1:
      *(float *)(param_1 + 0xc) = *param_3;
      return 1;
    case 2:
      fVar1 = *param_3;
      fVar2 = -24.0;
      if ((-24.0 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
        fVar2 = 24.0;
      }
      fVar1 = powf(10.0,fVar2 * 0.05);
      *(float *)(param_1 + 0x1c) = fVar1;
      return 1;
    case 3:
      *(float *)(param_1 + 0x10) = *param_3;
      return 1;
    case 4:
      *(float *)(param_1 + 0x14) = *param_3;
      return 1;
    case 5:
      *(float *)(param_1 + 0x18) = *param_3;
      return 1;
    case 6:
      fVar1 = expf(*param_3 * -0.06);
      fVar1 = 1.0 - (1.0024788 - fVar1);
      if (fVar1 <= 0.0001) {
        fVar1 = 0.0001;
      }
      *(float *)(param_1 + 0x20) = fVar1;
      return 1;
    case 7:
      *(int *)(param_1 + 0x28) = (int)*(short *)param_3;
      return 1;
    case 8:
      *(bool *)(param_1 + 0x24) = *(short *)param_3 == 1;
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1451199e0 FUN_1451199e0 body=22 status=ok
// SIG undefined FUN_1451199e0(void)

void FUN_1451199e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = *(undefined8 *)(param_1 + 0x18);
  param_2[3] = uVar1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 145119a00 FUN_145119a00 body=43 status=ok
// SIG undefined FUN_145119a00(void)

undefined8 * FUN_145119a00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145119a30 FUN_145119a30 body=93 status=ok
// SIG undefined FUN_145119a30(void)

undefined8 * FUN_145119a30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x30,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTimeStretch\\AkTimeStretchFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0x800;
    *puVar1 = &PTR_FUN_149c2bbc8;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 4) = 0x3c23d70a;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145119a90 FUN_145119a90 body=210 status=ok
// SIG undefined FUN_145119a90(void)

undefined8
FUN_145119a90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  *(uint *)(param_1 + 0xbc) = (uint)*(byte *)(param_5 + 1);
  FUN_14511a860(param_4,param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x84);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xc0) = *param_5;
  FUN_145119eb0(param_1,param_5[1]);
  *(int *)(param_1 + 0xc4) =
       (int)(longlong)(*(float *)(param_1 + 0x88) * 0.001 * (float)*(uint *)(param_1 + 0xc0));
  uVar1 = FUN_14511a060(param_1);
  if ((int)uVar1 == 1) {
    uVar1 = FUN_14511a1e0();
    if ((int)uVar1 == 1) {
      *(undefined2 *)(*(longlong *)(param_1 + 8) + 8) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}



// FUNCTION 145119b70 FUN_145119b70 body=72 status=ok
// SIG undefined FUN_145119b70(void)

undefined8 FUN_145119b70(undefined8 *param_1,longlong *param_2)

{
  FUN_14511a120();
  FUN_14511a2d0(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145119bc0 FUN_145119bc0 body=134 status=ok
// SIG undefined FUN_145119bc0(void)

undefined8 FUN_145119bc0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_1453c0ee0(param_1 + 0x18);
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40));
    }
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0x58) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xbc));
  }
  return 1;
}



// FUNCTION 145119c70 FUN_145119c70 body=557 status=ok
// SIG undefined FUN_145119c70(void)

void FUN_145119c70(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  FUN_14511a860(*(undefined8 *)(param_1 + 8),param_1 + 0x68);
  uVar5 = 0;
  do {
    if (*(char *)(uVar5 + 8 + *(longlong *)(param_1 + 8)) != '\0') {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 8);
      if ((((bVar1 & 0x20) != 0) || ((bVar1 & 1) != 0)) || ((bVar1 & 2) != 0)) {
        FUN_14511a120(param_1);
        FUN_14511a2d0(param_1);
        *(int *)(param_1 + 0xc4) =
             (int)(longlong)(*(float *)(param_1 + 0x88) * 0.001 * (float)*(uint *)(param_1 + 0xc0));
        FUN_145119eb0(param_1,*(undefined4 *)(param_2 + 8));
        iVar2 = FUN_14511a060(param_1);
        if (iVar2 != 1) {
          return;
        }
        iVar2 = FUN_14511a1e0(param_1);
        if (iVar2 != 1) {
          return;
        }
        FUN_14511a1a0(param_1);
        FUN_14511a350();
      }
      if ((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 4) != 0) {
        FUN_14511a2d0(param_1);
        iVar2 = FUN_14511a1e0(param_1);
        if (iVar2 != 1) {
          return;
        }
        FUN_14511a350();
      }
      if ((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 0x40) != 0) {
        FUN_1453c0f80(param_1 + 0x18,*(undefined4 *)(param_1 + 0x78));
      }
      if ((((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 0x80) != 0) ||
          (bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 9), (bVar1 & 2) != 0)) ||
         (((bVar1 & 1) != 0 || ((bVar1 & 4) != 0)))) {
        if (*(int *)(param_1 + 0x68) == 0) {
          FUN_1451174a0(param_1 + 0x38,*(undefined8 *)(param_1 + 0x10));
        }
        else {
          if (((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x48) == 0)) &&
             (iVar2 = FUN_145117330(param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),
                                    *(undefined1 *)(param_1 + 0xb8),1), iVar2 != 1)) {
            return;
          }
          FUN_145117500(param_1 + 0x38,*(int *)(param_1 + 0x68) + -1,
                        (float)*(uint *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x70),
                        *(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x74));
        }
      }
      break;
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while (uVar4 < 2);
  *(undefined2 *)(*(longlong *)(param_1 + 8) + 8) = 0;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_1453c12b0(param_2,param_1 + 0x18,0,0);
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(ushort *)(param_2 + 0x10) << 2,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPitchShifter\\AkPitchShifterFX.cpp"
                       ,0x131);
    if (lVar3 != 0) {
      FUN_1453c12b0(param_2,param_1 + 0x18,lVar3,0);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar3);
    }
  }
  return;
}



// FUNCTION 145119eb0 FUN_145119eb0 body=396 status=ok
// SIG undefined FUN_145119eb0(void)

void FUN_145119eb0(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    if (*(char *)(param_1 + 0x8c) == '\0') {
      uVar3 = param_2 >> 0xc & 0xffff7;
      param_2 = param_2 & 0xf00 | param_2 - ((param_2 >> 0xc) - uVar3 >> 3) & 0xff | uVar3 << 0xc;
    }
    *(uint *)(param_1 + 0xb8) = param_2;
    return;
  case 1:
    cVar2 = '\0';
    uVar3 = 4;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar3 = 0xc;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 2:
    cVar2 = '\0';
    uVar3 = 3;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar3 = 0xb;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 3:
    cVar2 = '\0';
    uVar3 = 7;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar3 = 0xf;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 4:
    cVar2 = '\0';
    uVar3 = 0x603;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar3 = 0x60b;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  case 5:
    cVar2 = '\0';
    uVar3 = 0x607;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar3 = 0x60f;
    }
    uVar3 = uVar3 & param_2 >> 0xc;
    for (uVar1 = uVar3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    break;
  default:
    goto switchD_145119ed5_default;
  }
  *(char *)(param_1 + 0xb8) = cVar2;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xff;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | uVar3 << 0xc | 0x100;
switchD_145119ed5_default:
  return;
}



// FUNCTION 14511a060 FUN_14511a060 body=189 status=ok
// SIG undefined FUN_14511a060(void)

undefined8 FUN_14511a060(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xb8) & 0xff;
  if (uVar2 != 0) {
    uVar1 = FUN_1453c0bb0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x88),uVar2,*(undefined4 *)(param_1 + 0xc0));
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    FUN_1453c0f80(param_1 + 0x18,*(undefined4 *)(param_1 + 0x78));
    if (*(int *)(param_1 + 0x68) != 0) {
      uVar1 = FUN_145117330(param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),
                            *(undefined1 *)(param_1 + 0xb8),1);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      FUN_145117500(param_1 + 0x38,*(int *)(param_1 + 0x68) + -1,(float)*(uint *)(param_1 + 0xc0),
                    *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x6c),
                    *(undefined4 *)(param_1 + 0x74));
    }
  }
  return 1;
}



// FUNCTION 14511a120 FUN_14511a120 body=121 status=ok
// SIG undefined FUN_14511a120(void)

void FUN_14511a120(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_1453c0de0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  return;
}



// FUNCTION 14511a1a0 FUN_14511a1a0 body=60 status=ok
// SIG undefined FUN_14511a1a0(void)

void FUN_14511a1a0(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_1453c0ee0(param_1 + 0x18);
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40));
      return;
    }
  }
  return;
}



// FUNCTION 14511a1e0 FUN_14511a1e0 body=238 status=ok
// SIG undefined FUN_14511a1e0(void)

undefined8 FUN_14511a1e0(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xc4);
  if (*(char *)(param_1 + 0x8d) != '\0') {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),(ulonglong)*(uint *)(param_1 + 0xbc) * 0x18,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPitchShifter\\AkPitchShifterFX.cpp"
                       ,0x9c);
    *(longlong *)(param_1 + 0x58) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    uVar7 = 0;
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0xbc) != 0) {
      do {
        puVar1 = (undefined4 *)(lVar3 + uVar6 * 0x18);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar3 = *(longlong *)(param_1 + 0x58);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xbc));
      if (*(uint *)(param_1 + 0xbc) != 0) {
        do {
          uVar4 = FUN_1453be220(*(longlong *)(param_1 + 0x58) + uVar7 * 0x18,
                                *(undefined8 *)(param_1 + 0x10),uVar2 >> 1);
          if ((int)uVar4 != 1) {
            return uVar4;
          }
          uVar5 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0xbc));
      }
    }
  }
  return 1;
}



// FUNCTION 14511a2d0 FUN_14511a2d0 body=117 status=ok
// SIG undefined FUN_14511a2d0(void)

void FUN_14511a2d0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      do {
        FUN_1453be280(*(longlong *)(param_1 + 0x58) + uVar3 * 0x18,*(undefined8 *)(param_1 + 0x10));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0xbc));
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14511a350 FUN_14511a350 body=70 status=ok
// SIG undefined FUN_14511a350(void)

void FUN_14511a350(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) && (uVar2 = 0, *(int *)(param_1 + 0xbc) != 0)) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0x58) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xbc));
  }
  return;
}



// FUNCTION 14511a3a0 FUN_14511a3a0 body=43 status=ok
// SIG undefined FUN_14511a3a0(void)

undefined8 * FUN_14511a3a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,200);
  }
  return param_1;
}



// FUNCTION 14511a3d0 FUN_14511a3d0 body=283 status=ok
// SIG undefined FUN_14511a3d0(void)

undefined8 * FUN_14511a3d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,200,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPitchShifter\\AkPitchShifterFX.cpp"
                      ,0x15);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *puVar1 = &PTR_FUN_149c2bc98;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    *(uint *)(puVar1 + 0x17) = *(uint *)(puVar1 + 0x17) & 0xff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined8 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xe) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0x3f800000;
    puVar1[0xf] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x10) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x11) = 0x42480000;
    *(undefined2 *)((longlong)puVar1 + 0x8c) = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x13) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0x3f800000;
    puVar1[0x14] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x15) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x16) = 0x42480000;
    *(undefined2 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[0xb] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511a4f0 FUN_14511a4f0 body=160 status=ok
// SIG undefined FUN_14511a4f0(void)

void FUN_14511a4f0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x38,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPitchShifter\\AkPitchShifterFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2bd68;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar2 + 3) = 0x3f800000;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x3f800000;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x42480000;
    *(undefined2 *)(puVar2 + 6) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    return;
  }
  return;
}



// FUNCTION 14511a5b0 FUN_14511a5b0 body=56 status=ok
// SIG undefined FUN_14511a5b0(void)

undefined8 FUN_14511a5b0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14511a5f0 FUN_14511a5f0 body=188 status=ok
// SIG undefined FUN_14511a5f0(void)

undefined8 FUN_14511a5f0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  fVar1 = powf(10.0,(float)param_2[1] * 0.05);
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = powf(10.0,(float)param_2[2] * 0.05);
  *(float *)(param_1 + 0x28) = fVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_2[3];
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x11);
  fVar1 = powf(2.0,*(float *)((longlong)param_2 + 0x12) * 0.00083333335);
  *(float *)(param_1 + 0x1c) = fVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined2 *)(param_1 + 8) = 0xffff;
  return 1;
}



// FUNCTION 14511a6b0 FUN_14511a6b0 body=388 status=ok
// SIG undefined FUN_14511a6b0(void)

undefined4 FUN_14511a6b0(longlong param_1,short param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 0:
      *(float *)(param_1 + 0x20) = *param_3;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)param_3;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)param_3;
      break;
    case 3:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x24) = fVar2;
      break;
    case 4:
      fVar2 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x28) = fVar2;
      break;
    case 5:
      *(float *)(param_1 + 0x2c) = *param_3;
      break;
    case 6:
      fVar2 = *param_3;
      fVar3 = -2400.0;
      if ((-2400.0 <= fVar2) && (fVar3 = fVar2, 2400.0 <= fVar2)) {
        fVar3 = 2400.0;
      }
      fVar2 = powf(2.0,fVar3 * 0.00083333335);
      *(float *)(param_1 + 0x1c) = fVar2;
      break;
    case 7:
      *(int *)(param_1 + 0xc) = (int)(longlong)*param_3;
      break;
    case 8:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      *(float *)(param_1 + 0x10) = fVar3;
      break;
    case 9:
      *(float *)(param_1 + 0x14) = *param_3;
      break;
    case 10:
      *(float *)(param_1 + 0x18) = *param_3;
    }
    uVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    *(byte *)((ulonglong)uVar1 + 8 + param_1) =
         *(byte *)((ulonglong)uVar1 + 8 + param_1) | (byte)(1 << ((int)param_2 + uVar1 * -8 & 0x1f))
    ;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 14511a860 FUN_14511a860 body=26 status=ok
// SIG undefined FUN_14511a860(void)

void FUN_14511a860(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  param_2[2] = *(undefined8 *)(param_1 + 0x1c);
  param_2[3] = uVar1;
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  return;
}



// FUNCTION 14511a880 FUN_14511a880 body=43 status=ok
// SIG undefined FUN_14511a880(void)

undefined8 * FUN_14511a880(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14511a8b0 FUN_14511a8b0 body=115 status=ok
// SIG undefined FUN_14511a8b0(void)

void FUN_14511a8b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x38,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkPitchShifter\\AkPitchShifterFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2bd68;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x447a0000;
    *(undefined4 *)(puVar1 + 3) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x42480000;
    *(undefined2 *)(puVar1 + 6) = 0;
    return;
  }
  return;
}



// FUNCTION 14511a930 FUN_14511a930 body=384 status=ok
// SIG undefined FUN_14511a930(void)

undefined8
FUN_14511a930(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  float *pfVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  
  if ((((uint)param_5[1] >> 0xc & 1) == 0) && (((uint)param_5[1] >> 0xc & 4) == 0)) {
    return 0x4e;
  }
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x1ac) = *param_5;
  plVar3 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  pfVar1 = (float *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x1b0) = (uint)uVar2;
  FUN_14511b5b0(*(undefined8 *)(param_1 + 8),pfVar1);
  uVar6 = 0;
  if (*(char *)(param_1 + 0x15c) == '\0') {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(char *)(param_1 + 0x15d) == '\0') {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  fVar7 = (float)*(uint *)(param_1 + 0x1b0) / (float)*(uint *)(param_1 + 0x1ac);
  if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) {
    *pfVar1 = fVar7;
  }
  if (*(float *)(param_1 + 300) <= fVar7 && fVar7 != *(float *)(param_1 + 300)) {
    *(float *)(param_1 + 300) = fVar7;
  }
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)pfVar1;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x158);
  param_5._0_4_ = *pfVar1;
  param_5._4_4_ = *(undefined4 *)(param_1 + 300);
  do {
    uVar4 = FUN_1453c21f0(uVar6 * 0x58 + 0x18 + param_1,param_2,&param_5,
                          *(undefined4 *)(param_1 + 0x1ac));
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  *(byte *)(*(longlong *)(param_1 + 8) + 9) = *(byte *)(*(longlong *)(param_1 + 8) + 9) & 0xfb;
  *(byte *)(*(longlong *)(param_1 + 8) + 9) = *(byte *)(*(longlong *)(param_1 + 8) + 9) & 0xbf;
  return 1;
}



// FUNCTION 14511aab0 FUN_14511aab0 body=111 status=ok
// SIG undefined FUN_14511aab0(void)

undefined8 FUN_14511aab0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = param_1 + 3;
  lVar2 = 3;
  do {
    FUN_1453c2320(puVar1,param_2);
    puVar1 = puVar1 + 0xb;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14511ab20 FUN_14511ab20 body=51 status=ok
// SIG undefined FUN_14511ab20(void)

undefined4 FUN_14511ab20(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x18;
  lVar1 = 3;
  do {
    FUN_1453c2390(param_1);
    param_1 = param_1 + 0x58;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 1;
}



// FUNCTION 14511ab80 FUN_14511ab80 body=724 status=ok
// SIG undefined FUN_14511ab80(void)

void FUN_14511ab80(longlong param_1,longlong param_2)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  undefined4 local_resc;
  
  pfVar1 = (float *)(param_1 + 0x120);
  FUN_14511b5b0(*(undefined8 *)(param_1 + 8),pfVar1);
  uVar7 = 0;
  if (*(char *)(param_1 + 0x15c) == '\0') {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(char *)(param_1 + 0x15d) == '\0') {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  fVar11 = (float)*(uint *)(param_1 + 0x1b0) / (float)*(uint *)(param_1 + 0x1ac);
  if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
    *pfVar1 = fVar11;
  }
  if (*(float *)(param_1 + 300) <= fVar11 && fVar11 != *(float *)(param_1 + 300)) {
    *(float *)(param_1 + 300) = fVar11;
  }
  lVar5 = *(longlong *)(param_1 + 8);
  if (((((*(byte *)(lVar5 + 8) & 1) != 0) || ((*(byte *)(lVar5 + 8) & 2) != 0)) ||
      (bVar2 = *(byte *)(lVar5 + 9), (bVar2 & 4) != 0)) ||
     ((((bVar2 & 8) != 0 || ((bVar2 & 0x10) != 0)) ||
      (((bVar2 & 0x40) != 0 || (((bVar2 & 0x80) != 0 || ((*(byte *)(lVar5 + 10) & 1) != 0)))))))) {
    fVar11 = *(float *)(param_1 + 300);
    if (*(char *)(param_1 + 0x15c) == '\0') {
      fVar8 = fVar11;
      if (fVar11 <= *pfVar1) {
        fVar8 = *pfVar1;
      }
    }
    else {
      fVar8 = log10f(*(float *)(param_1 + 0x124));
      fVar8 = fVar8 * 20.0;
      if (-0.1 <= fVar8) {
        fVar8 = -0.1;
      }
      fVar8 = (-60.0 / fVar8) * *pfVar1;
      fVar9 = log10f(*(float *)(param_1 + 0x130));
      fVar9 = fVar9 * 20.0;
      if (-0.1 <= fVar9) {
        fVar9 = -0.1;
      }
      fVar9 = (-60.0 / fVar9) * fVar11;
      if (fVar8 <= fVar9) {
        fVar8 = fVar9;
      }
    }
    if (*(char *)(param_1 + 0x15d) != '\0') {
      fVar9 = log10f(*(float *)(param_1 + 0x134) * *(float *)(param_1 + 0x128));
      fVar9 = fVar9 * 20.0;
      if (-0.1 <= fVar9) {
        fVar9 = -0.1;
      }
      if (*(char *)(param_1 + 0x15c) == '\0') {
        fVar10 = 1.0;
      }
      else {
        fVar10 = 2.0;
      }
      fVar8 = fVar8 + (fVar11 + *pfVar1) * fVar10 * (-60.0 / fVar9);
    }
    if (60.0 <= fVar8) {
      fVar8 = 60.0;
    }
    *(int *)(param_1 + 0x1a8) = (int)(longlong)(fVar8 * (float)*(uint *)(param_1 + 0x1ac));
  }
  if (((*(byte *)(lVar5 + 9) & 0x40) != 0) || ((*(byte *)(lVar5 + 9) & 4) != 0)) {
    local_res8 = *pfVar1;
    local_resc = *(undefined4 *)(param_1 + 300);
    do {
      lVar5 = uVar7 * 0x58 + 0x18 + param_1;
      FUN_1453c2320(lVar5,*(undefined8 *)(param_1 + 0x10));
      iVar3 = FUN_1453c21f0(lVar5,*(undefined8 *)(param_1 + 0x10),&local_res8,
                            *(undefined4 *)(param_1 + 0x1ac));
      if (iVar3 != 1) {
        return;
      }
      FUN_1453c2390(lVar5);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < 3);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  bVar2 = *(byte *)(lVar5 + 8);
  if (((((bVar2 & 0x20) == 0) && ((bVar2 & 0x40) == 0)) && ((bVar2 & 0x80) == 0)) &&
     ((*(byte *)(lVar5 + 9) & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x1b4) = uVar4;
  *(undefined2 *)(lVar5 + 8) = 0;
  *(undefined1 *)(lVar5 + 10) = 0;
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                    (*(longlong **)(param_1 + 0x10),(ulonglong)*(ushort *)(param_2 + 0x10) << 4,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkStereoDelay\\AkStereoDelayFX.cpp"
                     ,0xe3);
  if (lVar5 != 0) {
    FUN_1453c2b10(param_2,param_1 + 0x18,lVar5);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar5);
  }
  return;
}



// FUNCTION 14511ae70 FUN_14511ae70 body=43 status=ok
// SIG undefined FUN_14511ae70(void)

undefined8 * FUN_14511ae70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14511aea0 FUN_14511aea0 body=419 status=ok
// SIG undefined FUN_14511aea0(void)

undefined8 * FUN_14511aea0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x1b8,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkStereoDelay\\AkStereoDelayFX.cpp"
                      ,0x15);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2be30;
    lVar2 = (longlong)puVar1 + 100;
    puVar1[1] = 0;
    puVar1[2] = 0;
    lVar3 = 3;
    do {
      *(undefined8 *)(lVar2 + -0x4c) = 0;
      *(undefined8 *)(lVar2 + -0x44) = 0;
      *(undefined4 *)(lVar2 + -0x3c) = 0;
      *(undefined8 *)(lVar2 + -0x34) = 0;
      *(undefined8 *)(lVar2 + -0x2c) = 0;
      *(undefined4 *)(lVar2 + -0x24) = 0;
      *(undefined8 *)(lVar2 + -0x1c) = 0;
      *(undefined8 *)(lVar2 + -0x14) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      lVar2 = lVar2 + 0x58;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(puVar1 + 0x24) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x25) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 300) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x26) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0x134) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x29) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x14c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2a) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x154) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x2c) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x164) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x2d) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x16c) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x2e) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0x174) = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x30) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x17c) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x19c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x184) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x31) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x18c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x32) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x194) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0xffffffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511b050 FUN_14511b050 body=217 status=ok
// SIG undefined FUN_14511b050(void)

undefined8 * FUN_14511b050(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkStereoDelay\\AkStereoDelayFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2bf08;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined1 *)((longlong)puVar2 + 10) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f000000;
    *(undefined4 *)(puVar2 + 2) = 0x3e800000;
    *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3e800000;
    *(undefined4 *)(puVar2 + 3) = 0x3f000000;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x3e800000;
    puVar2[4] = 0x3e800000;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined2 *)(puVar2 + 9) = 0;
    *(undefined4 *)(puVar2 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0x447a0000;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
    puVar2[8] = 0x3f800000;
    uVar1 = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)((longlong)puVar2 + 0x24) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)((longlong)puVar2 + 0x34) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)((longlong)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)((longlong)puVar2 + 0x44) = uVar1;
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    *(undefined1 *)((longlong)puVar2 + 10) = 0xff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511b150 FUN_14511b150 body=56 status=ok
// SIG undefined FUN_14511b150(void)

undefined8 FUN_14511b150(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14511b190 FUN_14511b190 body=305 status=ok
// SIG undefined FUN_14511b190(void)

undefined8 FUN_14511b190(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  fVar1 = powf(10.0,(float)param_2[2] * 0.05);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar1 = powf(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  fVar1 = powf(10.0,(float)param_2[6] * 0.05);
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = powf(10.0,(float)param_2[7] * 0.05);
  *(float *)(param_1 + 0x20) = fVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_2[8];
  *(undefined4 *)(param_1 + 0x30) = param_2[9];
  *(undefined4 *)(param_1 + 0x34) = param_2[10];
  *(undefined4 *)(param_1 + 0x38) = param_2[0xb];
  fVar1 = powf(10.0,(float)param_2[0xc] * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0xd] * 0.05);
  *(float *)(param_1 + 0x40) = fVar1;
  *(undefined4 *)(param_1 + 0x44) = param_2[0xe];
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  return 1;
}



// FUNCTION 14511b2d0 FUN_14511b2d0 body=662 status=ok
// SIG undefined FUN_14511b2d0(void)

undefined8 FUN_14511b2d0(longlong param_1,short param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    if (*param_3 == 0.0) {
      *(undefined1 *)(param_1 + 0x49) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
    break;
  case 1:
    if (*param_3 == 0.0) {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    break;
  case 2:
    fVar2 = *param_3;
    fVar3 = -96.0;
    if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
      fVar3 = 24.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x3c) = fVar2;
    break;
  case 3:
    fVar2 = *param_3;
    fVar3 = -96.0;
    if ((-96.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
      fVar3 = 24.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x40) = fVar2;
    break;
  case 4:
    fVar2 = *param_3;
    fVar3 = -100.0;
    if ((-100.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
      fVar3 = 100.0;
    }
    *(float *)(param_1 + 0x44) = fVar3;
    break;
  case 5:
    *(int *)(param_1 + 0x2c) = (int)(longlong)*param_3;
    break;
  case 6:
    fVar2 = *param_3;
    fVar3 = -24.0;
    if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
      fVar3 = 24.0;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    break;
  case 7:
    *(float *)(param_1 + 0x34) = *param_3;
    break;
  case 8:
    *(float *)(param_1 + 0x38) = *param_3;
    break;
  case 9:
    *(float *)(param_1 + 0x24) = *param_3;
    break;
  case 10:
    *(float *)(param_1 + 0xc) = *param_3;
    break;
  case 0xb:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x10) = fVar2;
    break;
  case 0xc:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x14) = fVar2;
    break;
  case 0xd:
    *(float *)(param_1 + 0x28) = *param_3;
    break;
  case 0xe:
    *(float *)(param_1 + 0x18) = *param_3;
    break;
  case 0xf:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x1c) = fVar2;
    break;
  case 0x10:
    fVar2 = *param_3;
    fVar3 = -48.0;
    if ((-48.0 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x20) = fVar2;
    break;
  default:
    return 0x1f;
  }
  uVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  *(byte *)((ulonglong)uVar1 + 8 + param_1) =
       *(byte *)((ulonglong)uVar1 + 8 + param_1) | (byte)(1 << ((int)param_2 + uVar1 * -8 & 0x1f));
  return 1;
}



// FUNCTION 14511b5b0 FUN_14511b5b0 body=32 status=ok
// SIG undefined FUN_14511b5b0(void)

void FUN_14511b5b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *param_2 = *(undefined8 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  param_2[2] = *(undefined8 *)(param_1 + 0x1c);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  param_2[4] = *(undefined8 *)(param_1 + 0x2c);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x44);
  param_2[6] = *(undefined8 *)(param_1 + 0x3c);
  param_2[7] = uVar1;
  return;
}



// FUNCTION 14511b5d0 FUN_14511b5d0 body=43 status=ok
// SIG undefined FUN_14511b5d0(void)

undefined8 * FUN_14511b5d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14511b600 FUN_14511b600 body=154 status=ok
// SIG undefined FUN_14511b600(void)

undefined8 * FUN_14511b600(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkStereoDelay\\AkStereoDelayFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2bf08;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f000000;
    *(undefined4 *)(puVar1 + 2) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3e800000;
    *(undefined4 *)(puVar1 + 3) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3e800000;
    puVar1[4] = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x447a0000;
    *(undefined4 *)(puVar1 + 7) = 0x3f800000;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    puVar1[8] = 0x3f800000;
    *(undefined2 *)(puVar1 + 9) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511b6a0 FUN_14511b6a0 body=209 status=ok
// SIG undefined FUN_14511b6a0(void)

undefined8
FUN_14511b6a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x30) = *param_5;
  lVar2 = FUN_14511ce50(param_2);
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    return 2;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar2 + 0x2c);
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  if (*(int *)(lVar2 + 0x24) == 1) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    if (lVar2 != 0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
      *(undefined8 *)(param_1 + 0x68) = uVar4;
    }
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(bool *)(param_1 + 0x81) = (param_5[1] & 0xf00) == 0x300;
  FUN_14511cd00(*(undefined8 *)(param_1 + 0x28),param_1);
  return 1;
}



// FUNCTION 14511b780 FUN_14511b780 body=78 status=ok
// SIG undefined FUN_14511b780(void)

undefined8 FUN_14511b780(undefined8 *param_1,longlong *param_2)

{
  if (param_1[5] != 0) {
    *(undefined1 *)(param_1 + 0xf) = 1;
    return 1;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14511b840 FUN_14511b840 body=967 status=ok
// SIG undefined FUN_14511b840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14511b840(longlong param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_res8 [2];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  float local_58 [2];
  longlong alStack_50 [3];
  float local_38 [4];
  
  puVar16 = auStack_78;
  uStack_80 = 0x14511b873;
  plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  uStack_80 = 0x14511b87d;
  uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar1 = uVar8;
  if (*param_2 == 1) {
    uVar1 = *(ushort *)(**(longlong **)(param_2 + 2) + 0x12);
  }
  lVar18 = *(longlong *)(param_1 + 0x10);
  fVar23 = 1.0;
  fVar22 = 1.0;
  if ((*(char *)(lVar18 + 0x28) != '\0') && (uVar1 != 0)) {
    uStack_80 = 0x14511b8c6;
    fVar22 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    if (*(char *)(param_1 + 0x80) == '\0') {
      fVar23 = *(float *)(param_1 + 0x7c);
    }
    else {
      *(undefined1 *)(param_1 + 0x80) = 0;
      fVar23 = fVar22;
    }
    lVar18 = *(longlong *)(param_1 + 0x10);
    *(float *)(param_1 + 0x7c) = fVar22;
  }
  uVar17 = 0;
  iVar15 = 0x11;
  local_res8[0] = 0x11;
  puVar7 = auStack_78;
  if (*param_2 != 0) {
    if (*(char *)(param_1 + 0x81) == '\0') {
      if (uVar1 == 0) {
        local_58[0] = 0.0;
      }
      else {
        local_58[0] = (fVar22 * *(float *)(**(longlong **)(param_2 + 4) + 0x54) -
                      fVar23 * *(float *)(**(longlong **)(param_2 + 4) + 0x50)) / (float)uVar1;
      }
      uVar19 = lVar18 + 8;
      if (lVar18 == 0) {
        uVar19 = uVar17;
      }
      uStack_80 = 0x14511b966;
      fVar23 = (float)FUN_14511bf30(**(undefined8 **)(param_2 + 2),uVar19,0);
      iVar15 = *(int *)(**(longlong **)(param_2 + 2) + 0xc);
    }
    else {
      uVar13 = (ulonglong)*param_2 * 4;
      uVar19 = uVar13 + 0xf;
      if (uVar19 <= uVar13) {
        uVar19 = 0xffffffffffffff0;
      }
      uStack_80 = 0x14511b9a0;
      lVar18 = -(uVar19 & 0xfffffffffffffff0);
      uVar19 = uVar13 + 0xf;
      if (uVar19 <= uVar13) {
        uVar19 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_78 + lVar18 + -8) = 0x14511b9bd;
      lVar6 = -(uVar19 & 0xfffffffffffffff0);
      puVar16 = auStack_78 + lVar6 + lVar18;
      lVar11 = (longlong)local_38 + lVar6 + lVar18;
      uVar19 = uVar17;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 4) + uVar19 * 8);
        fVar21 = *(float *)(lVar3 + 0x54);
        fVar20 = *(float *)(lVar3 + 0x50) * fVar23;
        uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_2 + 2) + uVar19 * 8) + 0x12);
        *(float *)((longlong)local_38 + lVar18 + uVar19 * 4) = fVar20;
        if (uVar1 == 0) {
          fVar21 = 0.0;
        }
        else {
          fVar21 = (fVar21 * fVar22 - fVar20) / (float)uVar1;
        }
        *(float *)(lVar11 + uVar19 * 4) = fVar21;
        uVar14 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
        uVar2 = *param_2;
      } while (uVar14 < uVar2);
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar19 = *(longlong *)(param_1 + 0x10) + 8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        uVar19 = uVar17;
      }
      *(int **)((longlong)alStack_50 + lVar6 + lVar18 + 0x10) = local_res8;
      *(longlong *)((longlong)alStack_50 + lVar6 + lVar18 + 8) = lVar11;
      *(longlong *)((longlong)alStack_50 + lVar6 + lVar18) = (longlong)local_38 + lVar18;
      *(undefined8 *)((longlong)local_58 + lVar6 + lVar18) = 0;
      *(undefined8 *)(auStack_78 + lVar6 + lVar18 + -8) = 0x14511ba5e;
      fVar23 = (float)FUN_14511c530(uVar2,uVar5,uVar8,uVar19);
      iVar15 = local_res8[0];
    }
    puVar7 = puVar16;
    if (0.0 < fVar23) {
      *(undefined8 *)(puVar16 + -8) = 0x14511ba6c;
      fVar23 = log10f(fVar23);
      fVar23 = fVar23 * 20.0;
      goto LAB_14511ba7e;
    }
  }
  puVar16 = puVar7;
  fVar23 = -200.0;
LAB_14511ba7e:
  lVar18 = *(longlong *)(param_1 + 0x10);
  fVar22 = *(float *)(lVar18 + 0x10);
  if (*(float *)(lVar18 + 0x10) <= fVar23) {
    fVar22 = fVar23;
  }
  if (*(float *)(lVar18 + 0x14) <= fVar22) {
    fVar22 = *(float *)(lVar18 + 0x14);
  }
  fVar23 = fVar22;
  if ((*(char *)(lVar18 + 0x1c) != '\0') &&
     (fVar23 = *(float *)(param_1 + 0x3c), *(float *)(param_1 + 0x3c) <= fVar22)) {
    fVar23 = fVar22;
  }
  uVar19 = lVar18 + 8;
  if (lVar18 == 0) {
    uVar19 = uVar17;
  }
  *(undefined8 *)(puVar16 + -8) = 0x14511babb;
  FUN_14511c190(fVar23,uVar8,uVar19,param_1 + 0x30);
  if (((iVar15 == 0x11) &&
      (*(float *)(*(longlong *)(param_1 + 0x10) + 0x10) < *(float *)(param_1 + 0x3c))) &&
     (*param_2 != 0)) {
    plVar10 = (longlong *)**(longlong **)(param_2 + 2);
    uVar1 = *(ushort *)(plVar10 + 2);
    uVar8 = *(ushort *)((longlong)plVar10 + 0x12);
    if (uVar1 <= *(ushort *)((longlong)plVar10 + 0x12)) {
      uVar8 = uVar1;
    }
    iVar15 = (uint)uVar1 - (uint)uVar8;
    if (iVar15 != 0) {
      if (*(byte *)(plVar10 + 1) != 0) {
        uVar19 = (ulonglong)*(byte *)(plVar10 + 1);
        do {
          uVar1 = *(ushort *)(plVar10 + 2);
          lVar18 = *plVar10;
          *(undefined8 *)(puVar16 + -8) = 0x14511bb3c;
          memset((void *)(lVar18 + (uVar1 * uVar17 + (ulonglong)(uint)uVar8) * 4),0,
                 (ulonglong)(uint)(iVar15 * 4));
          uVar17 = uVar17 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      *(short *)((longlong)plVar10 + 0x12) = (short)plVar10[2];
    }
    *(undefined4 *)(**(longlong **)(param_2 + 2) + 0xc) = 0x2d;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*plVar10 + 0x10);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*plVar10 + 0x20);
  pcVar4 = *(code **)(**(longlong **)(param_1 + 0x18) + 0x60);
  *(undefined8 *)(puVar16 + -8) = 0x14511bb7b;
  uVar9 = (*pcVar4)();
  *(undefined4 *)(param_1 + 0x70) = uVar9;
  lVar18 = -1;
  if (*(int *)(*plVar10 + 0x24) == 1) {
    pcVar4 = *(code **)(**(longlong **)(param_1 + 0x18) + 0x10);
    *(undefined8 *)(puVar16 + -8) = 0x14511bb98;
    lVar11 = (*pcVar4)();
    if (lVar11 != 0) {
      pcVar4 = *(code **)(**(longlong **)(param_1 + 0x18) + 0x10);
      *(undefined8 *)(puVar16 + -8) = 0x14511bba7;
      plVar12 = (longlong *)(*pcVar4)();
      pcVar4 = *(code **)(*plVar12 + 8);
      *(undefined8 *)(puVar16 + -8) = 0x14511bbb0;
      lVar18 = (*pcVar4)(plVar12);
    }
  }
  if ((*(longlong *)(param_1 + 0x68) != lVar18) ||
     (*(int *)(param_1 + 100) != *(int *)(*plVar10 + 0x2c))) {
    *(longlong *)(param_1 + 0x68) = lVar18;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*plVar10 + 0x2c);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(puVar16 + -8) = 0x14511bbdd;
    FUN_14511cdb0(uVar5,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(puVar16 + -8) = 0x14511bbe9;
    FUN_14511cd00(uVar5,param_1);
  }
  return;
}



// FUNCTION 14511bc10 FUN_14511bc10 body=43 status=ok
// SIG undefined FUN_14511bc10(void)

undefined8 * FUN_14511bc10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14511bc40 FUN_14511bc40 body=400 status=ok
// SIG undefined FUN_14511bc40(void)

void FUN_14511bc40(float *param_1,float param_2,float param_3,ulonglong param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_XMM3_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  auVar16 = ZEXT816(0);
  auVar22 = ZEXT816(0);
  pfVar1 = param_1 + (param_4 & 0xffffffff);
  pfVar2 = param_1 + (param_4 & 0xfffffffc);
  fVar9 = param_3 * 4.0;
  fVar19 = param_2 + 0.0;
  fVar20 = param_3 + param_2;
  fVar21 = param_3 + param_3 + param_2;
  param_2 = param_3 * 3.0 + param_2;
  while (param_1 < pfVar2) {
    fVar11 = *param_1;
    pfVar5 = param_1 + 1;
    pfVar6 = param_1 + 2;
    pfVar7 = param_1 + 3;
    param_1 = param_1 + 4;
    auVar10._0_4_ = fVar11 * fVar19;
    auVar10._4_4_ = *pfVar5 * fVar20;
    auVar10._8_4_ = *pfVar6 * fVar21;
    auVar10._12_4_ = *pfVar7 * param_2;
    fVar19 = fVar19 + fVar9;
    fVar20 = fVar20 + fVar9;
    fVar21 = fVar21 + fVar9;
    param_2 = param_2 + fVar9;
    auVar16 = minps(auVar16,auVar10);
    auVar22 = maxps(auVar22,auVar10);
  }
  auVar22 = maxps(ZEXT816(0),auVar22);
  auVar10 = minps(ZEXT816(0),auVar16);
  auVar3._4_8_ = auVar16._8_8_;
  auVar3._0_4_ = auVar22._4_4_;
  auVar17._0_8_ = auVar3._0_8_ << 0x20;
  auVar17._8_4_ = auVar22._8_4_;
  auVar17._12_4_ = auVar22._12_4_;
  auVar18._8_8_ = auVar17._8_8_;
  auVar18._0_8_ = auVar22._8_8_;
  auVar4._4_8_ = in_XMM3_Qb;
  auVar4._0_4_ = auVar10._4_4_;
  auVar14._0_8_ = auVar4._0_8_ << 0x20;
  auVar14._8_4_ = auVar10._8_4_;
  auVar14._12_4_ = auVar10._12_4_;
  auVar15._8_8_ = auVar14._8_8_;
  auVar15._0_8_ = auVar10._8_8_;
  auVar22 = maxps(auVar18,auVar22);
  auVar16 = minps(auVar15,auVar10);
  if (auVar22._0_4_ <= auVar22._4_4_) {
    auVar22._4_12_ = auVar22._4_12_;
    auVar22._0_4_ = auVar22._4_4_;
  }
  if (auVar16._4_4_ <= auVar16._0_4_) {
    auVar16._4_12_ = auVar16._4_12_;
    auVar16._0_4_ = auVar16._4_4_;
  }
  if (param_1 < pfVar1) {
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      do {
        fVar11 = fVar19 * *param_1;
        fVar9 = fVar11;
        if (fVar11 <= auVar22._0_4_) {
          fVar9 = auVar22._0_4_;
        }
        if (auVar16._0_4_ <= fVar11) {
          fVar11 = auVar16._0_4_;
        }
        fVar12 = (fVar19 + param_3) * param_1[1];
        fVar19 = fVar19 + param_3 + param_3;
        fVar13 = fVar12;
        if (fVar12 <= fVar9) {
          fVar13 = fVar9;
        }
        if (fVar11 <= fVar12) {
          fVar12 = fVar11;
        }
        fVar9 = fVar19 * param_1[2];
        fVar19 = fVar19 + param_3;
        fVar11 = fVar9;
        if (fVar9 <= fVar13) {
          fVar11 = fVar13;
        }
        if (fVar12 <= fVar9) {
          fVar9 = fVar12;
        }
        fVar12 = fVar19 * param_1[3];
        fVar19 = fVar19 + param_3;
        param_1 = param_1 + 4;
        auVar16._4_4_ = fVar20;
        auVar16._0_4_ = fVar12;
        auVar16._8_4_ = fVar21;
        auVar16._12_4_ = param_2;
        fVar13 = fVar12;
        if (fVar12 <= fVar11) {
          fVar13 = fVar11;
        }
        if (fVar9 <= fVar12) {
          auVar16._0_4_ = fVar9;
        }
        auVar22._4_4_ = fVar20;
        auVar22._0_4_ = fVar13;
        auVar22._8_4_ = fVar21;
        auVar22._12_4_ = param_2;
      } while (param_1 < pfVar1 + -3);
      if (pfVar1 <= param_1) {
        return;
      }
    }
    do {
      fVar11 = fVar19 * *param_1;
      param_1 = param_1 + 1;
      auVar8._4_4_ = fVar20;
      auVar8._0_4_ = fVar11;
      auVar8._8_4_ = fVar21;
      auVar8._12_4_ = param_2;
      fVar9 = fVar11;
      if (fVar11 <= auVar22._0_4_) {
        fVar9 = auVar22._0_4_;
      }
      if (auVar16._0_4_ <= fVar11) {
        auVar8._0_4_ = auVar16._0_4_;
      }
      auVar22._4_4_ = fVar20;
      auVar22._0_4_ = fVar9;
      auVar22._8_4_ = fVar21;
      auVar22._12_4_ = param_2;
      auVar16 = auVar8;
      fVar19 = fVar19 + param_3;
    } while (param_1 < pfVar1);
  }
  return;
}



// FUNCTION 14511bdd0 FUN_14511bdd0 body=343 status=ok
// SIG undefined FUN_14511bdd0(void)

undefined8 FUN_14511bdd0(float *param_1,float param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar1 = param_1 + param_4;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  pfVar2 = param_1 + ((ulonglong)param_4 & 0xfffffffc);
  fVar7 = param_3 * 4.0;
  fVar8 = param_2 + 0.0;
  fVar9 = param_3 + param_2;
  fVar10 = param_3 + param_3 + param_2;
  param_2 = param_3 * 3.0 + param_2;
  for (; param_1 < pfVar2; param_1 = param_1 + 4) {
    fVar3 = *param_1 * fVar8;
    fVar4 = param_1[1] * fVar9;
    fVar5 = param_1[2] * fVar10;
    fVar6 = param_1[3] * param_2;
    fVar8 = fVar8 + fVar7;
    fVar9 = fVar9 + fVar7;
    fVar10 = fVar10 + fVar7;
    param_2 = param_2 + fVar7;
    fVar11 = fVar11 + fVar3 * fVar3;
    fVar12 = fVar12 + fVar4 * fVar4;
    fVar13 = fVar13 + fVar5 * fVar5;
    fVar14 = fVar14 + fVar6 * fVar6;
  }
  fVar9 = fVar14 + fVar13 + fVar12 + fVar11;
  if (param_1 < pfVar1) {
    if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
      do {
        fVar10 = fVar8 * *param_1;
        fVar3 = (fVar8 + param_3) * param_1[1];
        fVar7 = fVar8 + param_3 + param_3;
        fVar8 = fVar7 + param_3;
        fVar7 = fVar7 * param_1[2];
        fVar4 = fVar8 * param_1[3];
        fVar8 = fVar8 + param_3;
        param_1 = param_1 + 4;
        fVar9 = fVar9 + fVar10 * fVar10 + fVar3 * fVar3 + fVar7 * fVar7 + fVar4 * fVar4;
      } while (param_1 < pfVar1 + -3);
      if (pfVar1 <= param_1) goto LAB_14511bf0c;
    }
    do {
      fVar10 = *param_1;
      param_1 = param_1 + 1;
      fVar9 = fVar9 + fVar8 * fVar10 * fVar8 * fVar10;
      fVar8 = fVar8 + param_3;
    } while (param_1 < pfVar1);
  }
LAB_14511bf0c:
  return CONCAT44(fVar13 + fVar14 + fVar11 + fVar12,fVar9 / (float)param_4);
}



// FUNCTION 14511bf30 FUN_14511bf30 body=598 status=ok
// SIG undefined FUN_14511bf30(void)

float FUN_14511bf30(longlong *param_1,longlong param_2,float *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  sVar1 = *(short *)((longlong)param_1 + 0x12);
  uVar6 = *(uint *)(param_1 + 1);
  fVar13 = 0.0;
  fVar12 = 0.0;
  uVar5 = uVar6 & 0xff;
  uVar4 = (ulonglong)uVar5;
  cVar3 = (char)uVar6;
  if (sVar1 == 0) {
    fVar12 = 0.0;
    if ((param_3 != (float *)0x0) && (fVar12 = 0.0, cVar3 != '\0')) {
      for (; fVar12 = 0.0, uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_3 = -96.3;
        param_3 = param_3 + 1;
      }
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar8 = uVar4;
      pfVar10 = param_3;
      if (cVar3 == '\0') {
        fVar12 = 0.0;
      }
      else {
        do {
          fVar13 = (float)FUN_14511bc40(*param_1 + *(ushort *)(param_1 + 2) * uVar4 * 4,param_4,
                                        param_5,sVar1);
          if (param_3 != (float *)0x0) {
            if (fVar13 <= 0.0) {
              *pfVar10 = -200.0;
            }
            else {
              fVar11 = log10f(fVar13);
              *pfVar10 = fVar11 * 20.0;
            }
          }
          if ((((int)uVar8 == 0) || (fVar11 = fVar12, (*(uint *)(param_1 + 1) & 0xf00) != 0x200)) &&
             (fVar11 = fVar13, fVar13 <= fVar12)) {
            fVar11 = fVar12;
          }
          fVar12 = fVar11;
          uVar6 = (int)uVar8 + 1;
          uVar4 = uVar4 + 1;
          uVar8 = (ulonglong)uVar6;
          pfVar10 = pfVar10 + 1;
        } while (uVar6 < uVar5);
      }
    }
    else {
      if (cVar3 != '\0') {
        uVar8 = uVar4;
        if (param_3 != (float *)0x0) {
          do {
            fVar12 = (float)FUN_14511bdd0(*param_1 + *(ushort *)(param_1 + 2) * uVar4 * 4,param_4,
                                          param_5,sVar1);
            fVar11 = log10f(fVar12);
            *param_3 = fVar11 * 10.0;
            if (((int)uVar8 == 0) || ((*(uint *)(param_1 + 1) & 0xf00) != 0x200)) {
              fVar13 = fVar13 + fVar12;
            }
            uVar6 = (int)uVar8 + 1;
            uVar4 = uVar4 + 1;
            param_3 = param_3 + 1;
            uVar8 = (ulonglong)uVar6;
          } while (uVar6 < uVar5);
          return SQRT(fVar13);
        }
        uVar2 = *(ushort *)(param_1 + 2);
        lVar9 = *param_1;
        do {
          fVar12 = (float)FUN_14511bdd0(lVar9,param_4,param_5,sVar1);
          if (((int)uVar4 == 0) || ((uVar6 & 0xf00) != 0x200)) {
            fVar13 = fVar13 + fVar12;
          }
          uVar7 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar7;
          lVar9 = lVar9 + (ulonglong)uVar2 * 4;
        } while (uVar7 < uVar5);
      }
      fVar12 = SQRT(fVar13);
    }
  }
  return fVar12;
}



// FUNCTION 14511c190 FUN_14511c190 body=913 status=ok
// SIG undefined FUN_14511c190(void)

void FUN_14511c190(float param_1,uint param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  if ((float)param_4[3] < param_1) {
    param_4[1] = 0;
    param_4[4] = (uint)param_3[2];
    param_4[5] = (uint)param_3[2];
    param_4[6] = (uint)param_3[2];
    param_4[7] = (uint)param_3[2];
    param_4[8] = (uint)param_3[2];
    param_4[9] = (uint)param_3[2];
    param_4[10] = (uint)param_3[2];
    param_4[0xb] = (uint)param_3[2];
    fVar15 = param_1;
    if ((*param_3 != 0.0) &&
       (fVar15 = ((float)param_2 / ((float)*param_4 * *param_3)) * 10.0 + (float)param_4[3],
       param_1 <= fVar15)) {
      fVar15 = param_1;
    }
    param_4[3] = (uint)fVar15;
    param_4[2] = (uint)fVar15;
    return;
  }
  uVar1 = *param_4;
  fVar14 = (float)param_2 / (float)uVar1 + (float)param_4[1];
  param_4[1] = (uint)fVar14;
  fVar15 = param_3[4];
  if (fVar14 < fVar15) {
    iVar6 = (int)((fVar14 / fVar15) * 8.0 + 0.5);
    if ((0 < iVar6) &&
       ((float)param_4[(longlong)iVar6 + 3] <= param_1 &&
        param_1 != (float)param_4[(longlong)iVar6 + 3])) {
      param_4[(longlong)iVar6 + 3] = (uint)param_1;
    }
    fVar14 = (float)param_4[2];
    if ((float)param_4[2] < param_1) {
      param_4[2] = (uint)param_1;
      fVar14 = param_1;
    }
    goto LAB_14511c4ec;
  }
  fVar14 = (float)param_4[4];
  lVar11 = 0;
  iVar6 = 0;
  iVar13 = 0;
  if (fVar14 < param_1) {
    iVar6 = 8;
    fVar14 = param_1;
  }
  if (fVar14 <= (float)param_4[5]) {
    iVar6 = 1;
    fVar14 = (float)param_4[5];
  }
  if (fVar14 <= (float)param_4[6]) {
    iVar6 = 2;
    fVar14 = (float)param_4[6];
  }
  if (fVar14 <= (float)param_4[7]) {
    iVar6 = 3;
    fVar14 = (float)param_4[7];
  }
  if (fVar14 <= (float)param_4[8]) {
    iVar6 = 4;
    fVar14 = (float)param_4[8];
  }
  if (fVar14 <= (float)param_4[9]) {
    iVar6 = 5;
    fVar14 = (float)param_4[9];
  }
  if (fVar14 <= (float)param_4[10]) {
    iVar6 = 6;
    fVar14 = (float)param_4[10];
  }
  if (fVar14 <= (float)param_4[0xb]) {
    iVar6 = 7;
    fVar14 = (float)param_4[0xb];
  }
  uVar9 = (ulonglong)(iVar6 + 1);
  param_4[1] = (uint)((float)(8 - iVar6) * fVar15 * 0.11111111);
  if (uVar9 < 8) {
    if (3 < (longlong)(8 - uVar9)) {
      lVar7 = (4 - uVar9 >> 2) + 1;
      lVar11 = lVar7 * 4;
      uVar10 = uVar9 + lVar11;
      iVar13 = (int)lVar7 * 4;
      puVar3 = param_4;
      do {
        puVar8 = puVar3 + 4;
        *puVar8 = puVar8[uVar9];
        puVar3[5] = puVar3[uVar9 + 5];
        puVar3[6] = puVar8[uVar9 + 2];
        puVar3[7] = puVar8[uVar9 + 3];
        lVar7 = lVar7 + -1;
        puVar3 = puVar8;
      } while (lVar7 != 0);
      uVar9 = uVar10;
      if (7 < (longlong)uVar10) goto LAB_14511c418;
    }
    lVar7 = 8 - uVar9;
    iVar13 = iVar13 + (int)lVar7;
    puVar3 = param_4 + uVar9 + 4;
    puVar8 = param_4 + lVar11 + 4;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar8 = uVar2;
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_14511c418:
  lVar11 = (longlong)iVar13;
  if (lVar11 < 8) {
    pfVar5 = param_3 + 2;
    if (3 < 8 - lVar11) {
      lVar7 = lVar11 + 5;
      lVar12 = (4U - lVar11 >> 2) + 1;
      lVar11 = lVar11 + lVar12 * 4;
      pfVar4 = (float *)(param_4 + lVar7);
      do {
        pfVar4[-1] = *pfVar5;
        *pfVar4 = *pfVar5;
        pfVar4[1] = *pfVar5;
        pfVar4[2] = *pfVar5;
        lVar12 = lVar12 + -1;
        pfVar4 = pfVar4 + 4;
      } while (lVar12 != 0);
      if (7 < lVar11) goto LAB_14511c494;
    }
    lVar7 = 8 - lVar11;
    pfVar4 = (float *)(param_4 + lVar11 + 4);
    do {
      *pfVar4 = *pfVar5;
      pfVar4 = pfVar4 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_14511c494:
  param_4[2] = (uint)fVar14;
LAB_14511c4ec:
  pfVar5 = (float *)(param_4 + 3);
  if (param_3[1] == 0.0) {
    *pfVar5 = fVar14;
    return;
  }
  fVar15 = *pfVar5 - (((float)param_2 / (float)uVar1) / param_3[1]) * 10.0;
  if (fVar15 <= fVar14) {
    fVar15 = fVar14;
  }
  *pfVar5 = fVar15;
  return;
}



// FUNCTION 14511c530 FUN_14511c530 body=1073 status=ok
// SIG undefined FUN_14511c530(void)

float FUN_14511c530(uint param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                   longlong param_5,undefined4 *param_6,longlong param_7,int *param_8)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  *param_8 = 0x11;
  if (param_5 == 0) {
    if (*(int *)(param_4 + 0x18) == 0) {
      if (param_1 == 0) {
        fVar10 = 0.0;
      }
      else {
        param_7 = param_7 - (longlong)param_6;
        uVar4 = (ulonglong)param_1;
        do {
          plVar7 = (longlong *)*param_2;
          uVar2 = 0;
          bVar1 = *(byte *)(plVar7 + 1);
          if (bVar1 != 0) {
            do {
              iVar6 = (int)uVar2;
              if ((iVar6 == 0) || (fVar11 = fVar9, (*(uint *)(plVar7 + 1) & 0xf00) != 0x200)) {
                fVar10 = (float)FUN_14511bc40(*plVar7 + *(ushort *)(plVar7 + 2) * uVar2 * 4,*param_6
                                              ,*(undefined4 *)((longlong)param_6 + param_7),
                                              *(undefined2 *)((longlong)plVar7 + 0x12));
                fVar11 = fVar10;
                if (fVar10 <= fVar9) {
                  fVar10 = fVar9;
                  fVar11 = fVar9;
                }
              }
              fVar9 = fVar11;
              uVar2 = (ulonglong)(iVar6 + 1U);
            } while (iVar6 + 1U < (uint)bVar1);
          }
          if (*(int *)((longlong)plVar7 + 0xc) != 0x11) {
            *param_8 = *(int *)((longlong)plVar7 + 0xc);
          }
          param_2 = param_2 + 1;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
      if (param_1 != 0) {
        param_7 = param_7 - (longlong)param_6;
        uVar4 = (ulonglong)param_1;
        do {
          plVar7 = (longlong *)*param_2;
          uVar2 = 0;
          bVar1 = *(byte *)(plVar7 + 1);
          if (bVar1 != 0) {
            do {
              iVar6 = (int)uVar2;
              if ((iVar6 == 0) || ((*(uint *)(plVar7 + 1) & 0xf00) != 0x200)) {
                fVar10 = (float)FUN_14511bdd0(*plVar7 + *(ushort *)(plVar7 + 2) * uVar2 * 4,*param_6
                                              ,*(undefined4 *)((longlong)param_6 + param_7),
                                              *(undefined2 *)((longlong)plVar7 + 0x12));
                fVar11 = fVar11 + fVar10;
              }
              uVar2 = (ulonglong)(iVar6 + 1U);
            } while (iVar6 + 1U < (uint)bVar1);
          }
          if (*(int *)((longlong)plVar7 + 0xc) != 0x11) {
            *param_8 = *(int *)((longlong)plVar7 + 0xc);
          }
          param_2 = param_2 + 1;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      fVar10 = SQRT(fVar11);
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_4 + 0x18) == 0) {
      if (param_1 == 0) {
        fVar10 = 0.0;
      }
      else {
        param_7 = param_7 - (longlong)param_6;
        uVar2 = (ulonglong)param_1;
        do {
          plVar7 = (longlong *)*param_2;
          uVar3 = 0;
          bVar1 = *(byte *)(plVar7 + 1);
          if (bVar1 != 0) {
            lVar5 = 0;
            uVar8 = uVar4;
            do {
              fVar9 = (float)FUN_14511bc40(*plVar7 + (ulonglong)*(ushort *)(plVar7 + 2) * lVar5 * 4,
                                           *param_6,*(undefined4 *)((longlong)param_6 + param_7),
                                           *(undefined2 *)((longlong)plVar7 + 0x12));
              if (fVar9 <= 0.0) {
                fVar11 = -200.0;
              }
              else {
                fVar11 = log10f(fVar9);
                fVar11 = fVar11 * 20.0;
              }
              uVar4 = (ulonglong)((int)uVar8 + 1);
              *(float *)(param_5 + uVar8 * 4) = fVar11;
              if (((uVar3 == 0) || (fVar11 = fVar10, (*(uint *)(plVar7 + 1) & 0xf00) != 0x200)) &&
                 (fVar11 = fVar9, fVar9 <= fVar10)) {
                fVar11 = fVar10;
              }
              fVar10 = fVar11;
              uVar3 = uVar3 + 1;
              lVar5 = lVar5 + 1;
              uVar8 = uVar4;
            } while (uVar3 < bVar1);
          }
          if (*(int *)((longlong)plVar7 + 0xc) != 0x11) {
            *param_8 = *(int *)((longlong)plVar7 + 0xc);
          }
          param_2 = param_2 + 1;
          param_6 = param_6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
    }
    else {
      if (param_1 != 0) {
        param_7 = param_7 - (longlong)param_6;
        uVar2 = (ulonglong)param_1;
        do {
          plVar7 = (longlong *)*param_2;
          uVar3 = 0;
          bVar1 = *(byte *)(plVar7 + 1);
          if (bVar1 != 0) {
            lVar5 = 0;
            do {
              fVar10 = (float)FUN_14511bdd0(*plVar7 + (ulonglong)*(ushort *)(plVar7 + 2) * lVar5 * 4
                                            ,*param_6,*(undefined4 *)((longlong)param_6 + param_7),
                                            *(undefined2 *)((longlong)plVar7 + 0x12));
              fVar9 = log10f(fVar10);
              *(float *)(param_5 + uVar4 * 4) = fVar9 * 10.0;
              uVar4 = (ulonglong)((int)uVar4 + 1);
              if ((uVar3 == 0) || ((*(uint *)(plVar7 + 1) & 0xf00) != 0x200)) {
                fVar11 = fVar11 + fVar10;
              }
              uVar3 = uVar3 + 1;
              lVar5 = lVar5 + 1;
            } while (uVar3 < bVar1);
          }
          if (*(int *)((longlong)plVar7 + 0xc) != 0x11) {
            *param_8 = *(int *)((longlong)plVar7 + 0xc);
          }
          param_2 = param_2 + 1;
          param_6 = param_6 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      fVar10 = SQRT(fVar11);
    }
  }
  return fVar10;
}



// FUNCTION 14511c970 FUN_14511c970 body=93 status=ok
// SIG undefined FUN_14511c970(void)

undefined8 * FUN_14511c970(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x88,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkMeter\\AkMeterFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    *puVar1 = &PTR_FUN_149c2bfd8;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)(puVar1 + 0x10) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511c9d0 FUN_14511c9d0 body=91 status=ok
// SIG undefined FUN_14511c9d0(void)

void FUN_14511c9d0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x30,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkMeter\\AkMeterFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2c0a8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    return;
  }
  return;
}



// FUNCTION 14511ca80 FUN_14511ca80 body=56 status=ok
// SIG undefined FUN_14511ca80(void)

undefined8 FUN_14511ca80(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14511cc90 FUN_14511cc90 body=43 status=ok
// SIG undefined FUN_14511cc90(void)

undefined8 * FUN_14511cc90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14511ccc0 FUN_14511ccc0 body=52 status=ok
// SIG undefined FUN_14511ccc0(void)

void FUN_14511ccc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x30,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkMeter\\AkMeterFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2c0a8;
    return;
  }
  return;
}



// FUNCTION 14511cd00 FUN_14511cd00 body=168 status=ok
// SIG undefined FUN_14511cd00(void)

void FUN_14511cd00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    if (((*(uint *)(lVar1 + 100) <= *(uint *)(param_2 + 100)) &&
        ((*(uint *)(param_2 + 100) != *(uint *)(lVar1 + 100) ||
         (*(ulonglong *)(lVar1 + 0x68) <= *(ulonglong *)(param_2 + 0x68))))) &&
       ((*(ulonglong *)(param_2 + 0x68) != *(ulonglong *)(lVar1 + 0x68) ||
        (*(uint *)(lVar1 + 0x70) <= *(uint *)(param_2 + 0x70))))) break;
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
  }
  *(longlong *)(param_2 + 8) = lVar1;
  if (lVar2 == 0) {
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  else {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  if (lVar1 == 0) {
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00014511cda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14511cdb0 FUN_14511cdb0 body=126 status=ok
// SIG undefined FUN_14511cdb0(void)

void FUN_14511cdb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = 0;
  do {
    lVar1 = lVar3;
    if (lVar1 == 0) {
LAB_14511ce14:
                    /* WARNING: Could not recover jumptable at 0x00014511ce27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      return;
    }
    if (lVar1 == param_2) {
      if (lVar1 == *(longlong *)(param_1 + 0x20)) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 8);
      }
      else {
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
      }
      if (lVar1 == *(longlong *)(param_1 + 0x18)) {
        *(longlong *)(param_1 + 0x18) = lVar2;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      goto LAB_14511ce14;
    }
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = lVar1;
  } while( true );
}



// FUNCTION 14511ce50 FUN_14511ce50 body=117 status=ok
// SIG undefined FUN_14511ce50(void)

undefined8 * FUN_14511ce50(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (DAT_14c79d1f8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)
             (**(code **)(*param_1 + 8))
                       (param_1,0x50,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkMeter\\AkMeterManager.cpp"
                        ,0xe4);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = param_1;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
    DAT_14c79d1f8 = puVar1;
  }
  return DAT_14c79d1f8;
}



// FUNCTION 14511ced0 FUN_14511ced0 body=1006 status=ok
// SIG undefined FUN_14511ced0(void)

void FUN_14511ced0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_f8 [2];
  longlong local_f0;
  float local_e4;
  int local_e0;
  float local_dc;
  
  iVar8 = 0;
  lVar9 = -1;
  iVar10 = 0;
  fVar14 = 0.0;
  local_e4 = 0.0;
  fVar13 = -3.4028235e+38;
  local_dc = -3.4028235e+38;
  local_f8[0] = 0;
  local_f0 = 0xffffffffffffffff;
  local_e0 = 0;
  puVar3 = (undefined8 *)param_1[4];
  puVar6 = (undefined8 *)0x0;
  while (puVar5 = puVar6, puVar6 = puVar3, puVar6 != (undefined8 *)0x0) {
    iVar1 = *(int *)((longlong)puVar6 + 100);
    if (iVar1 != 0) {
      lVar2 = puVar6[0xd];
      if ((iVar10 != iVar1) || (lVar9 != lVar2)) {
        if (iVar10 != 0) {
          fVar12 = -3.4028235e+38;
          if (iVar8 != 0) {
            fVar12 = (float)(((uint)fVar14 & 0x7fffff) + 0x3f800000);
            fVar11 = fVar12 + 1.0;
            fVar12 = (((fVar12 * fVar12 * fVar12 - 1.0) * 1.1581186) / (fVar11 * fVar11 * fVar11)) *
                     10.0 + ((float)((uint)fVar14 >> 0x17 & 0xff) - 127.0) * 3.0103002;
          }
          if (fVar13 <= fVar12) {
            fVar13 = fVar12;
          }
          (**(code **)(*(longlong *)param_1[1] + 0x118))
                    ((longlong *)param_1[1],iVar10,fVar13,lVar9,0,4,0);
        }
        fVar14 = 0.0;
        iVar8 = 0;
        fVar13 = -3.4028235e+38;
        local_e4 = 0.0;
        local_dc = -3.4028235e+38;
        local_e0 = 0;
        lVar9 = lVar2;
        iVar10 = iVar1;
      }
      fVar12 = *(float *)((longlong)puVar6 + 0x3c);
      if (*(char *)(puVar6 + 0xf) != '\0') {
        fVar12 = *(float *)(puVar6 + 0xc);
      }
      if (*(int *)((longlong)puVar6 + 0x74) == 1) {
        fVar12 = fVar12 * 0.05;
        if ((fVar12 < -37.0) || (37.0 < fVar12)) {
          fVar12 = 0.0;
        }
        else {
          uVar7 = (uint)(longlong)(fVar12 * 27866352.0 + 1.0653532e+09);
          fVar12 = (float)((uVar7 & 0x7fffff) + 0x3f800000);
          fVar12 = ((fVar12 * 0.32518977 + 0.020805772) * fVar12 + 0.65304345) *
                   (float)(uVar7 & 0xff800000);
        }
        iVar8 = iVar8 + 1;
        fVar14 = fVar14 + fVar12 * fVar12;
        local_e4 = fVar14;
        local_e0 = iVar8;
      }
      else {
        local_dc = fVar13;
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
          local_dc = fVar12;
        }
      }
    }
    puVar3 = (undefined8 *)puVar6[1];
    if (*(char *)(puVar6 + 0xf) != '\0') {
      if (puVar6 == (undefined8 *)param_1[4]) {
        param_1[4] = puVar3;
      }
      else {
        puVar5[1] = puVar3;
      }
      if (puVar6 == (undefined8 *)param_1[3]) {
        param_1[3] = puVar5;
      }
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
      plVar4 = (longlong *)*param_1;
      (**(code **)*puVar6)(puVar6,0);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      puVar6 = puVar5;
    }
  }
  local_f8[0] = iVar10;
  local_f0 = lVar9;
  FUN_14511d320(local_f8,param_1[1]);
  if (param_1[4] == 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    DAT_14c79d1f8 = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1);
  }
  return;
}



// FUNCTION 14511d2c0 FUN_14511d2c0 body=95 status=ok
// SIG undefined FUN_14511d2c0(void)

void FUN_14511d2c0(longlong *param_1,int param_2)

{
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x40))(param_1,0x14511ce03,0,0x81,&LAB_14511ce30,0xa0,0);
    return;
  }
  if (param_2 == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00014511d316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,&LAB_14511ce30,0xa0);
    return;
  }
  return;
}



// FUNCTION 14511d320 FUN_14511d320 body=223 status=ok
// SIG undefined FUN_14511d320(void)

void FUN_14511d320(int *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*param_1 != 0) {
    fVar2 = -3.4028235e+38;
    if (param_1[6] != 0) {
      fVar2 = (float)((param_1[5] & 0x7fffffU) + 0x3f800000);
      fVar1 = fVar2 + 1.0;
      fVar2 = (((fVar2 * fVar2 * fVar2 - 1.0) * 1.1581186) / (fVar1 * fVar1 * fVar1)) * 10.0 +
              ((float)((uint)param_1[5] >> 0x17 & 0xff) - 127.0) * 3.0103002;
    }
    fVar1 = (float)param_1[7];
    if ((float)param_1[7] <= fVar2) {
      fVar1 = fVar2;
    }
    (**(code **)(*param_2 + 0x118))(param_2,*param_1,fVar1,*(undefined8 *)(param_1 + 2),0,4,0);
  }
  return;
}



// FUNCTION 14511d400 FUN_14511d400 body=404 status=ok
// SIG undefined FUN_14511d400(void)

undefined8
FUN_14511d400(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(longlong **)(param_1 + 0x10) = param_2;
  uVar4 = param_5[1];
  *(uint *)(param_1 + 0x104) = uVar4 & 0xff;
  *(undefined4 *)(param_1 + 0x108) = *param_5;
  uVar2 = FUN_1453c4090(param_1 + 0x20,param_2,uVar4 & 0xff,3);
  if (((int)uVar2 == 1) &&
     (uVar2 = FUN_1453c4090(param_1 + 0x30,param_2,*(undefined2 *)(param_1 + 0x104),3),
     (int)uVar2 == 1)) {
    lVar3 = (**(code **)(*param_2 + 8))
                      (param_2,(ulonglong)*(uint *)(param_1 + 0x104) * 0xc,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGuitarDistortion\\AkGuitarDistortionFX.cpp"
                      );
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      do {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar5 * 0xc);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
        }
        uVar4 = (int)uVar5 + 1;
        *(float *)(*(longlong *)(param_1 + 0x18) + 8 + uVar5 * 0xc) =
             1.0 - 251.32742 / (float)*(uint *)(param_1 + 0x108);
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < *(uint *)(param_1 + 0x104));
    }
    FUN_14511e560(*(undefined8 *)(param_1 + 8),param_1 + 0x70);
    FUN_14511d9e0(param_1,param_1 + 0x70);
    FUN_1453c4520(param_1 + 0x40,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),
                  *(undefined4 *)(param_1 + 0xf0),1);
    FUN_1453c5a90(param_1 + 0x5c,*(undefined4 *)(param_1 + 0xf4),1);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14511d5a0 FUN_14511d5a0 body=101 status=ok
// SIG undefined FUN_14511d5a0(void)

undefined8 FUN_14511d5a0(undefined8 *param_1,longlong *param_2)

{
  FUN_1453c4290(param_1 + 4);
  FUN_1453c4290(param_1 + 6,param_2);
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[3] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14511d610 FUN_14511d610 body=83 status=ok
// SIG undefined FUN_14511d610(void)

undefined8 FUN_14511d610(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_1453c4330(param_1 + 0x20);
  FUN_1453c4330(param_1 + 0x30);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    do {
      uVar1 = (int)uVar2 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 0xc) = 0;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x104));
  }
  return 1;
}



// FUNCTION 14511d690 FUN_14511d690 body=831 status=ok
// SIG undefined FUN_14511d690(void)

void FUN_14511d690(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  uint in_stack_ffffffffffffff78;
  
  FUN_14511e560(*(undefined8 *)(param_1 + 8),param_1 + 0x70);
  FUN_14511d9e0(param_1,param_1 + 0x70);
  if (*(char *)(param_1 + 0xf8) != '\0') {
    FUN_1453c4520(param_1 + 0x40,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),
                  *(undefined4 *)(param_1 + 0xf0),in_stack_ffffffffffffff78 & 0xffffff00);
    FUN_1453c5a90(param_1 + 0x5c,*(undefined4 *)(param_1 + 0xf4),0);
  }
  uVar7 = *(ushort *)((longlong)param_2 + 0x12);
  if (0x1f < uVar7) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar11 = (ulonglong)*(byte *)(param_2 + 1);
    uVar3 = uVar7;
    if (uVar2 <= uVar7) {
      uVar3 = uVar2;
    }
    uVar12 = 0;
    iVar4 = (uint)uVar2 - (uint)uVar3;
    if (iVar4 != 0) {
      if (*(byte *)(param_2 + 1) != 0) {
        uVar10 = uVar12;
        do {
          memset((void *)(*param_2 +
                         (*(ushort *)(param_2 + 2) * uVar10 + (ulonglong)(uint)uVar3) * 4),0,
                 (ulonglong)(uint)(iVar4 * 4));
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar7 = *(ushort *)(param_2 + 2);
      *(ushort *)((longlong)param_2 + 0x12) = uVar7;
      uVar2 = uVar7;
    }
    uVar8 = (uint)uVar2;
    uVar5 = (uint)uVar7;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),
                       (ulonglong)(uVar8 * *(int *)(param_1 + 0x104)) << 2,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGuitarDistortion\\AkGuitarDistortionFX.cpp"
                       ,0xc2);
    if (lVar6 != 0) {
      if (*(int *)(param_1 + 0x104) != 0) {
        uVar11 = uVar12;
        do {
          memcpy((void *)(lVar6 + (ulonglong)((int)uVar11 * uVar8) * 4),
                 (void *)(*param_2 + *(ushort *)(param_2 + 2) * uVar11 * 4),(ulonglong)(uVar5 * 4));
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 0x104));
      }
      FUN_1453c4490(param_1 + 0x20,param_2);
      FUN_1453c45a0(param_1 + 0x40,param_2);
      FUN_1453c5af0(param_1 + 0x5c,param_2);
      FUN_1453c4490(param_1 + 0x30,param_2);
      fVar14 = (100.0 - *(float *)(param_1 + 0x110)) * 0.01;
      fVar13 = (100.0 - *(float *)(param_1 + 0x100)) * 0.01;
      if (*(int *)(param_1 + 0x104) != 0) {
        do {
          lVar1 = *param_2 + *(ushort *)(param_2 + 2) * uVar12 * 4;
          FUN_1453baf30(lVar1,lVar6 + (ulonglong)((int)uVar12 * uVar8) * 4,
                        *(float *)(param_1 + 0x10c) * (1.0 - fVar14),
                        *(float *)(param_1 + 0xfc) * (1.0 - fVar13),
                        *(float *)(param_1 + 0x10c) * fVar14,*(float *)(param_1 + 0xfc) * fVar13,
                        uVar5);
          FUN_1453c5d70(*(longlong *)(param_1 + 0x18) + uVar12 * 0xc,lVar1,uVar5);
          uVar9 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 0x104));
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar6);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
    }
  }
  return;
}



// FUNCTION 14511d9e0 FUN_14511d9e0 body=522 status=ok
// SIG undefined FUN_14511d9e0(void)

void FUN_14511d9e0(longlong param_1,undefined4 *param_2)

{
  if (*(char *)((longlong)param_2 + 0x11) != '\0') {
    FUN_1453c4390(param_1 + 0x20,0,*(undefined4 *)(param_1 + 0x108),*param_2,param_2[2],param_2[1],
                  param_2[3]);
    FUN_1453c4460(param_1 + 0x20,0,*(undefined1 *)(param_2 + 4));
  }
  if (*(char *)((longlong)param_2 + 0x25) != '\0') {
    FUN_1453c4390(param_1 + 0x20,1,*(undefined4 *)(param_1 + 0x108),param_2[5],param_2[7],param_2[6]
                  ,param_2[8]);
    FUN_1453c4460(param_1 + 0x20,1,*(undefined1 *)(param_2 + 9));
  }
  if (*(char *)((longlong)param_2 + 0x39) != '\0') {
    FUN_1453c4390(param_1 + 0x20,2,*(undefined4 *)(param_1 + 0x108),param_2[10],param_2[0xc],
                  param_2[0xb],param_2[0xd]);
    FUN_1453c4460(param_1 + 0x20,2,*(undefined1 *)(param_2 + 0xe));
  }
  if (*(char *)((longlong)param_2 + 0x4d) != '\0') {
    FUN_1453c4390(param_1 + 0x30,0,*(undefined4 *)(param_1 + 0x108),param_2[0xf],param_2[0x11],
                  param_2[0x10],param_2[0x12]);
    FUN_1453c4460(param_1 + 0x30,0,*(undefined1 *)(param_2 + 0x13));
  }
  if (*(char *)((longlong)param_2 + 0x61) != '\0') {
    FUN_1453c4390(param_1 + 0x30,1,*(undefined4 *)(param_1 + 0x108),param_2[0x14],param_2[0x16],
                  param_2[0x15],param_2[0x17]);
    FUN_1453c4460(param_1 + 0x30,1,*(undefined1 *)(param_2 + 0x18));
  }
  if (*(char *)((longlong)param_2 + 0x75) != '\0') {
    FUN_1453c4390(param_1 + 0x30,2,*(undefined4 *)(param_1 + 0x108),param_2[0x19],param_2[0x1b],
                  param_2[0x1a],param_2[0x1c]);
    FUN_1453c4460(param_1 + 0x30,2,*(undefined1 *)(param_2 + 0x1d));
  }
  return;
}



// FUNCTION 14511dbf0 FUN_14511dbf0 body=43 status=ok
// SIG undefined FUN_14511dbf0(void)

undefined8 * FUN_14511dbf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14511dc20 FUN_14511dc20 body=405 status=ok
// SIG undefined FUN_14511dc20(void)

undefined8 * FUN_14511dc20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x118,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGuitarDistortion\\AkGuitarDistortionFX.cpp"
                      ,0x16);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2c1f0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_1453c4070(puVar1 + 4);
    FUN_1453c4070(puVar1 + 6);
    FUN_1453c4500(puVar1 + 8);
    FUN_1453c5a80((longlong)puVar1 + 0x5c);
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x10) = 0x100;
    *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x12) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0x94) = 0x100;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x15) = 0x100;
    *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0xbc) = 0x100;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0x447a0000;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x3f800000;
    *(undefined2 *)(puVar1 + 0x1a) = 0x100;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0x447a0000;
    *(undefined4 *)(puVar1 + 0x1c) = 0x3f800000;
    *(undefined2 *)((longlong)puVar1 + 0xe4) = 0x100;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xec) = 0x42480000;
    puVar1[0x1e] = 0x42480000;
    *(undefined1 *)(puVar1 + 0x1f) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xfc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x20) = 0x42c80000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511ddc0 FUN_14511ddc0 body=197 status=ok
// SIG undefined FUN_14511ddc0(void)

undefined8 * FUN_14511ddc0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x447a0000;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined2 *)(param_1 + 2) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x447a0000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined2 *)(param_1 + 7) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x100;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xc) = 0x100;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x100;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x42480000;
  param_1[0x10] = 0x42480000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x42c80000;
  return param_1;
}



// FUNCTION 14511de90 FUN_14511de90 body=229 status=ok
// SIG undefined FUN_14511de90(void)

undefined8 * FUN_14511de90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0xa0,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGuitarDistortion\\AkGuitarDistortionFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2c2d8;
    FUN_14511ddc0(puVar2 + 1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    puVar2[0xe] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    puVar2[0xf] = *(undefined8 *)(param_1 + 0x78);
    puVar2[0x10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    puVar2[0x11] = *(undefined8 *)(param_1 + 0x88);
    puVar2[0x12] = uVar1;
    *(undefined4 *)(puVar2 + 0x13) = *(undefined4 *)(param_1 + 0x98);
    *(undefined1 *)((longlong)puVar2 + 0x19) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x2d) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x41) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x55) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x69) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x7d) = 1;
    *(undefined1 *)(puVar2 + 0x12) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511dfa0 FUN_14511dfa0 body=56 status=ok
// SIG undefined FUN_14511dfa0(void)

undefined8 FUN_14511dfa0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14511dfe0 FUN_14511dfe0 body=411 status=ok
// SIG undefined FUN_14511dfe0(void)

undefined8 FUN_14511dfe0(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)((longlong)param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x37);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x58) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x60) = param_2[0x13];
  *(undefined4 *)(param_1 + 100) = param_2[0x14];
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x61);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x72);
  fVar1 = powf(10.0,*(float *)((longlong)param_2 + 0x76) * 0.05);
  *(float *)(param_1 + 0x94) = fVar1;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  return 1;
}



// FUNCTION 14511e180 FUN_14511e180 body=962 status=ok
// SIG undefined FUN_14511e180(void)

undefined8 FUN_14511e180(longlong param_1,short param_2,float *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = (int)param_2;
  if (param_3 != (float *)0x0) {
    if (iVar3 < 0x3c) {
      uVar1 = (ulonglong)(uint)(iVar3 / 10);
      iVar2 = iVar3 % 10;
      if (-1 < param_2) {
        if (iVar3 < 0x1e) {
          if (iVar2 == 0) {
            fVar5 = *param_3;
            param_1 = param_1 + uVar1 * 0x14;
            *(undefined1 *)(param_1 + 0x19) = 1;
            *(int *)(param_1 + 8) = (int)(longlong)fVar5;
            return 1;
          }
          if (iVar2 == 1) {
            fVar5 = *param_3;
            param_1 = param_1 + uVar1 * 0x14;
            fVar4 = -48.0;
            if ((-48.0 <= fVar5) && (fVar4 = fVar5, 48.0 <= fVar5)) {
              fVar4 = 48.0;
            }
            *(float *)(param_1 + 0xc) = fVar4;
            *(undefined1 *)(param_1 + 0x19) = 1;
            return 1;
          }
          if (iVar2 == 2) {
            param_1 = param_1 + uVar1 * 0x14;
            *(float *)(param_1 + 0x10) = *param_3;
            *(undefined1 *)(param_1 + 0x19) = 1;
            return 1;
          }
          if (iVar2 == 3) {
            param_1 = param_1 + uVar1 * 0x14;
            *(float *)(param_1 + 0x14) = *param_3;
            *(undefined1 *)(param_1 + 0x19) = 1;
            return 1;
          }
          if (iVar2 == 4) {
            if (*param_3 == 0.0) {
              param_1 = param_1 + uVar1 * 0x14;
              *(undefined1 *)(param_1 + 0x18) = 0;
              *(undefined1 *)(param_1 + 0x19) = 1;
              return 1;
            }
            param_1 = param_1 + uVar1 * 0x14;
            *(undefined1 *)(param_1 + 0x18) = 1;
            *(undefined1 *)(param_1 + 0x19) = 1;
            return 1;
          }
        }
        else {
          uVar1 = (ulonglong)(uint)((iVar3 + -0x1e) / 10);
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x44 + uVar1 * 0x14) = (int)(longlong)*param_3;
            *(undefined1 *)(param_1 + 0x55 + uVar1 * 0x14) = 1;
            return 1;
          }
          if (iVar2 == 1) {
            fVar5 = *param_3;
            fVar4 = -48.0;
            if ((-48.0 <= fVar5) && (fVar4 = fVar5, 48.0 <= fVar5)) {
              fVar4 = 48.0;
            }
            *(float *)(param_1 + 0x48 + uVar1 * 0x14) = fVar4;
            *(undefined1 *)(param_1 + 0x55 + uVar1 * 0x14) = 1;
            return 1;
          }
          if (iVar2 == 2) {
            *(float *)(param_1 + 0x4c + uVar1 * 0x14) = *param_3;
            *(undefined1 *)(param_1 + 0x55 + uVar1 * 0x14) = 1;
            return 1;
          }
          if (iVar2 == 3) {
            *(float *)(param_1 + (uVar1 + 4) * 0x14) = *param_3;
            *(undefined1 *)(param_1 + 0x55 + uVar1 * 0x14) = 1;
            return 1;
          }
          if (iVar2 == 4) {
            if (*param_3 == 0.0) {
              *(undefined1 *)(param_1 + 0x54 + uVar1 * 0x14) = 0;
              *(undefined1 *)(param_1 + 0x55 + uVar1 * 0x14) = 1;
              return 1;
            }
            *(undefined1 *)(param_1 + 0x54 + uVar1 * 0x14) = 1;
            *(undefined1 *)(param_1 + 0x55 + uVar1 * 0x14) = 1;
            return 1;
          }
        }
      }
    }
    else {
      switch(iVar3) {
      case 0x3c:
        fVar5 = *param_3;
        *(undefined1 *)(param_1 + 0x90) = 1;
        *(int *)(param_1 + 0x80) = (int)(longlong)fVar5;
        return 1;
      case 0x3d:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x84) = fVar4;
        *(undefined1 *)(param_1 + 0x90) = 1;
        return 1;
      case 0x3e:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x88) = fVar4;
        *(undefined1 *)(param_1 + 0x90) = 1;
        return 1;
      case 0x3f:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x8c) = fVar4;
        *(undefined1 *)(param_1 + 0x90) = 1;
        return 1;
      case 0x40:
        fVar5 = *param_3;
        fVar4 = -24.0;
        if ((-24.0 <= fVar5) && (fVar4 = fVar5, 24.0 <= fVar5)) {
          fVar4 = 24.0;
        }
        fVar5 = powf(10.0,fVar4 * 0.05);
        *(float *)(param_1 + 0x94) = fVar5;
        return 1;
      case 0x41:
        fVar5 = *param_3;
        fVar4 = 0.0;
        if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
          fVar4 = 100.0;
        }
        *(float *)(param_1 + 0x98) = fVar4;
        return 1;
      }
    }
  }
  return 0x1f;
}



// FUNCTION 14511e560 FUN_14511e560 body=121 status=ok
// SIG undefined FUN_14511e560(void)

void FUN_14511e560(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = *(undefined8 *)(param_1 + 0x18);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = *(undefined8 *)(param_1 + 0x28);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  param_2[6] = *(undefined8 *)(param_1 + 0x38);
  param_2[7] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  param_2[8] = *(undefined8 *)(param_1 + 0x48);
  param_2[9] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  param_2[10] = *(undefined8 *)(param_1 + 0x58);
  param_2[0xb] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  param_2[0xc] = *(undefined8 *)(param_1 + 0x68);
  param_2[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  param_2[0xe] = *(undefined8 *)(param_1 + 0x78);
  param_2[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  param_2[0x10] = *(undefined8 *)(param_1 + 0x88);
  param_2[0x11] = uVar1;
  *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 14511e5e0 FUN_14511e5e0 body=43 status=ok
// SIG undefined FUN_14511e5e0(void)

undefined8 * FUN_14511e5e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14511e610 FUN_14511e610 body=103 status=ok
// SIG undefined FUN_14511e610(void)

undefined8 * FUN_14511e610(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0xa0,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkGuitarDistortion\\AkGuitarDistortionFXParams.cpp"
                      ,0x12);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2c2d8;
    FUN_14511ddc0(puVar1 + 1);
    *(undefined1 *)((longlong)puVar1 + 0x19) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x2d) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x41) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x55) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x69) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x7d) = 1;
    *(undefined1 *)(puVar1 + 0x12) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511e680 FUN_14511e680 body=150 status=ok
// SIG undefined FUN_14511e680(void)

void FUN_14511e680(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(longlong *)(param_1 + 8) = param_4;
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x1c);
  uVar2 = *(undefined4 *)(param_4 + 0x20);
  uVar3 = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 0x30);
  FUN_1451214a0(param_4,0);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x78) = *param_5;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_14511eaa0(param_1,param_5[1]);
  return;
}



// FUNCTION 14511e720 FUN_14511e720 body=56 status=ok
// SIG undefined FUN_14511e720(void)

undefined8 FUN_14511e720(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14511e790 FUN_14511e790 body=766 status=ok
// SIG undefined FUN_14511e790(void)

void FUN_14511e790(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  undefined4 local_res18 [2];
  
  lVar8 = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar8 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar1 = *(undefined4 *)(lVar8 + 0x1c);
  uVar2 = *(undefined4 *)(lVar8 + 0x20);
  uVar3 = *(undefined4 *)(lVar8 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar8 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar8 + 0x30);
  FUN_1451214a0(lVar8,0);
  if ((*(char *)(param_1 + 0x4a) != '\0') &&
     ((*(char *)(param_1 + 0x75) != *(char *)(param_1 + 0x49) ||
      (*(char *)(param_1 + 0x74) != *(char *)(param_1 + 0x48))))) {
    FUN_14511eaa0(param_1,(int)param_2[1]);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar12 = 0;
    if (*(char *)(param_1 + 0x44) != '\0') {
      uVar7 = *(uint *)(param_1 + 0x78);
      FUN_14511efe0(uVar7,param_1 + 0x24,local_res18,&local_res8);
      uVar11 = 0;
      if (*(int *)(param_1 + 0x88) != 0) {
        fVar14 = (float)uVar7;
        do {
          lVar8 = (ulonglong)uVar11 * 0x20 + *(longlong *)(param_1 + 0x80);
          if (fVar14 <= *(float *)(param_1 + 0x28)) {
            fVar13 = 1.0;
          }
          else {
            fVar13 = *(float *)(param_1 + 0x28) / fVar14;
          }
          *(float *)(lVar8 + 0x10) = fVar13;
          if (*(int *)(param_1 + 0x24) == 0) {
            *(float *)(lVar8 + 0x10) = fVar13 * 6.2831855;
          }
          *(undefined4 *)(lVar8 + 4) = local_res18[0];
          *(float *)(lVar8 + 8) = local_res8;
          if (*(int *)(lVar8 + 0x14) != *(int *)(param_1 + 0x24)) {
            if (*(int *)(lVar8 + 0x14) == 0) {
              fVar13 = *(float *)(lVar8 + 0xc) * 0.15915494;
            }
            else {
              if (*(int *)(param_1 + 0x24) != 0) goto LAB_14511e91b;
              fVar13 = *(float *)(lVar8 + 0xc) * 6.2831855;
            }
            *(float *)(lVar8 + 0xc) = fVar13;
          }
LAB_14511e91b:
          uVar11 = uVar11 + 1;
          *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(param_1 + 0x24);
        } while (uVar11 < *(uint *)(param_1 + 0x88));
      }
    }
    uVar7 = *(uint *)(param_2 + 1);
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar11 = uVar7 >> 0xc & 0xffff7;
      uVar7 = uVar7 - ((uVar7 >> 0xc) - uVar11 >> 3) & 0xff | uVar11 << 0xc;
    }
    if ((*(char *)(param_1 + 0x48) == '\0') && ((uVar7 & 0x7000) == 0x7000)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar4 = *(ushort *)((longlong)param_2 + 0x12);
    fVar14 = *(float *)(param_1 + 0x40);
    uVar10 = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    fVar13 = *(float *)(param_1 + 0x6c);
    if ((char)uVar7 != '\0') {
      do {
        if ((!bVar6) || ((int)uVar10 != 2)) {
          uVar9 = (ulonglong)uVar12;
          uVar12 = uVar12 + 1;
          local_res8 = fVar14;
          local_resc = (fVar14 - fVar13) / (float)uVar4;
          FUN_14511f0e0(uVar9 * 0x20 + *(longlong *)(param_1 + 0x80),
                        *param_2 + *(ushort *)(param_2 + 2) * uVar10 * 4,uVar4,uVar1,uVar2,uVar3,
                        &local_res8);
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while (uVar11 < (uVar7 & 0xff));
    }
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 14511eaa0 FUN_14511eaa0 body=188 status=ok
// SIG undefined FUN_14511eaa0(void)

void FUN_14511eaa0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar6 = param_2 >> 0xc & 0xfffff;
    uVar4 = (uint)uVar6;
    if (((byte)uVar6 & 7) == 7) {
      uVar2 = uVar4 & 0xffffb;
      uVar5 = (ulonglong)
              ((uint)param_2 & 0xf00 | (uint)param_2 - (uVar4 - uVar2 >> 2) & 0xff | uVar2 << 0xc);
    }
  }
  uVar4 = (uint)uVar5;
  if (*(char *)(param_1 + 0x49) == '\0') {
    uVar2 = (uint)(uVar5 >> 0xc);
    uVar3 = uVar2 & 0xffff7;
    uVar4 = uVar4 & 0xf00 | uVar4 - (uVar2 - uVar3 >> 3) & 0xff | uVar3 << 0xc;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
  FUN_14511eb60(param_1 + 0x80,*(undefined8 *)(param_1 + 0x10),uVar1,uVar4,
                *(undefined4 *)(param_1 + 0x78),param_1 + 0x24);
  return;
}



// FUNCTION 14511eb60 FUN_14511eb60 body=738 status=ok
// SIG undefined FUN_14511eb60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14511eb60(longlong *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
             undefined4 param_5,int *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  undefined8 auStack_110 [5];
  undefined4 auStack_e8 [4];
  longlong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  int iStack_bc;
  longlong lStack_b8;
  
  if (*param_1 != 0) {
    auStack_110[0] = 0x14511ebc6;
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((char)(param_4 & 0xffffffff) != '\0') {
    auStack_110[0] = 0x14511ebf7;
    lVar3 = (**(code **)(*param_2 + 8))
                      (param_2,(param_4 & 0xff) << 5,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\LFOMultiChannel.h"
                       ,0x43);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    *(int *)(param_1 + 1) = (int)(param_4 & 0xff);
    uVar4 = (param_4 & 0xff) * 4;
    uVar5 = uVar4 + 0xf;
    if (uVar5 <= uVar4) {
      uVar5 = 0xffffffffffffff0;
    }
    auStack_110[0] = 0x14511ec33;
    lVar3 = -(uVar5 & 0xfffffffffffffff0);
    local_d8 = (longlong)&local_d8 + lVar3;
    *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14511ec57;
    FUN_1453ba8e0(param_3,param_4 & 0xffffffff,param_6 + 4,(longlong)&local_d8 + lVar3);
    uVar5 = 0;
    if ((int)param_1[1] != 0) {
      do {
        puVar6 = (undefined8 *)(*param_1 + uVar5 * 0x20);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        pcVar1 = *(code **)(*param_3 + 0xd8);
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14511ecda;
        iVar2 = (*pcVar1)(param_3);
        puVar6 = (undefined8 *)(uVar5 * 0x20 + *param_1);
        fVar8 = *(float *)(local_d8 + uVar5 * 4);
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14511ed06;
        FUN_14511efe0(param_5,param_6,local_res8,local_res20);
        *(undefined4 *)((longlong)auStack_e8 + lVar3) = local_res20[0];
        *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14511ed2d;
        FUN_14511ef50(puVar6,param_5,param_6,local_res8[0]);
        local_d0 = *puVar6;
        local_c0 = *(undefined4 *)(puVar6 + 2);
        iStack_bc = *(int *)((longlong)puVar6 + 0x14);
        lStack_b8 = puVar6[3];
        if (*param_6 == 0) {
          fVar9 = 6.2831855;
        }
        else {
          fVar9 = 1.0;
        }
        fVar8 = fVar9 * fVar8 * 0.0027777778;
        uStack_c8._0_4_ = (undefined4)puVar6[1];
        uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        if (iStack_bc == 1) {
          fVar8 = fVar8 + 0.25;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        else if (iStack_bc == 3) {
          fVar8 = fVar8 + 0.5;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        else if (iStack_bc == 5) {
          lStack_b8 = (longlong)iVar2 * 0x5851f42d4c957f2d + 1;
        }
        if (fVar8 < 0.0) {
          fVar8 = fVar8 + fVar9;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        if (fVar9 <= fVar8) {
          fVar8 = fVar8 - fVar9;
          uStack_c8 = CONCAT44(fVar8,(undefined4)uStack_c8);
        }
        *puVar6 = local_d0;
        puVar6[1] = uStack_c8;
        *(undefined4 *)(puVar6 + 2) = local_c0;
        *(int *)((longlong)puVar6 + 0x14) = iStack_bc;
        puVar6[3] = lStack_b8;
        if (iStack_bc == 0) {
          fVar9 = 6.2831855;
LAB_14511ede0:
          *(undefined8 *)((longlong)auStack_110 + lVar3) = 0x14511ede5;
          fVar8 = fmodf(fVar8,fVar9);
          *(float *)((longlong)puVar6 + 0xc) = fVar8;
        }
        else if (iStack_bc != 5) {
          fVar9 = 1.0;
          goto LAB_14511ede0;
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
  }
  return 1;
}



// FUNCTION 14511ee50 FUN_14511ee50 body=116 status=ok
// SIG undefined FUN_14511ee50(void)

undefined8 * FUN_14511ee50(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149c2c3b0;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    if (param_1[0x10] != 0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
      param_1[0x10] = 0;
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14511eed0 FUN_14511eed0 body=116 status=ok
// SIG undefined FUN_14511eed0(void)

undefined8 * FUN_14511eed0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x90,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTremolo\\AkTremoloFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2c3b0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar1 + 100) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14511ef50 FUN_14511ef50 body=143 status=ok
// SIG undefined FUN_14511ef50(void)

void FUN_14511ef50(longlong param_1,uint param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  float fVar2;
  
  if ((float)param_2 <= (float)param_3[1]) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)param_3[1] / (float)param_2;
  }
  *(float *)(param_1 + 0x10) = fVar2;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = fVar2 * 6.2831855;
  }
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 4) = param_4;
  iVar1 = *param_3;
  if (*(int *)(param_1 + 0x14) != iVar1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.15915494;
      *(int *)(param_1 + 0x14) = *param_3;
      return;
    }
    if (iVar1 == 0) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 6.2831855;
      iVar1 = *param_3;
    }
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 14511efe0 FUN_14511efe0 body=253 status=ok
// SIG undefined FUN_14511efe0(void)

void FUN_14511efe0(uint param_1,longlong param_2,float *param_3,float *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  undefined8 extraout_XMM0_Qb;
  
  fVar4 = *(float *)(param_2 + 8);
  if (fVar4 == 0.0) {
    *param_4 = 0.0;
    *param_3 = 1.0;
    return;
  }
  dVar5 = (double)param_1;
  dVar1 = (double)*(float *)(param_2 + 4);
  if (dVar5 <= (double)*(float *)(param_2 + 4)) {
    dVar1 = dVar5;
  }
  dVar1 = log((dVar5 * 0.5) / dVar1);
  dVar1 = exp(-(dVar1 * (double)fVar4));
  auVar2._0_8_ = cos(((dVar1 * dVar5 * 0.5) / dVar5) * 6.283185307179586);
  auVar2._8_8_ = extraout_XMM0_Qb;
  dVar5 = 2.0 - auVar2._0_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 - 1.0;
  auVar3 = sqrtpd(auVar2,auVar3);
  fVar4 = (float)(auVar3._0_8_ - dVar5);
  *param_4 = fVar4;
  *param_3 = fVar4 + 1.0;
  return;
}



// FUNCTION 14511f0e0 FUN_14511f0e0 body=8101 status=ok
// SIG undefined FUN_14511f0e0(void)

void FUN_14511f0e0(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float param_6,float *param_7)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c0;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  fVar24 = *(float *)(param_1 + 2);
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  uVar10 = param_1[3];
  pfVar1 = param_2 + param_3;
  fVar25 = (param_4 - param_5) / (float)param_3;
  bVar2 = fVar24 != 0.0;
  if (fVar24 <= 1e-08) {
    fVar24 = 1e-08;
  }
  uStack_d0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  uStack_d0._0_4_ = (float)uVar5;
  auVar12._0_4_ = (float)uStack_d0;
  local_d8._0_4_ = (float)uVar4;
  local_d8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar11 = local_d8._4_4_;
  fVar23 = uStack_d0._4_4_;
  uStack_c0 = uVar10;
  local_d8 = uVar4;
  uStack_d0 = uVar5;
  switch(iVar3) {
  case 0:
    if (param_2 < pfVar1) {
      fVar11 = 1.0 / fVar24;
      do {
        auVar12._0_4_ = (1.5707964 - fVar23) * fVar11;
        iVar9 = (int)auVar12._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar12._0_4_)) {
          auVar12._4_4_ = auVar12._0_4_;
          auVar12._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar12);
          auVar12._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar12._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar8 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar8 = param_2 + (int)uVar6;
        }
        if (param_2 < pfVar8) {
          pfVar7 = (float *)((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) &
                            0xfffffffffffffffc);
          if (&DAT_0000000f < pfVar7) {
            pfVar7 = pfVar8 + -3;
            do {
              auVar12._0_4_ = *param_7;
              fVar23 = fVar23 + fVar24;
              param_5 = param_5 + fVar25;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar13._0_4_ = fVar23 * fVar23;
              auVar21._0_4_ = fVar23 + fVar24;
              auVar22._0_4_ = auVar21._0_4_ * auVar21._0_4_;
              auVar18._0_4_ = param_5 + fVar25;
              *param_2 = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                            0.08332414) * auVar13._0_4_ + 0.4999983) * fVar23 + 0.5) * param_5 +
                         (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * *param_2;
              fVar23 = *param_7;
              *param_7 = fVar23 + param_7[1];
              auVar20._0_4_ = auVar21._0_4_ + fVar24;
              auVar13._0_4_ = auVar20._0_4_ * auVar20._0_4_;
              auVar19._0_4_ = auVar18._0_4_ + fVar25;
              param_2[1] = (((((0.0041531627 - auVar22._0_4_ * 9.181827e-05) * auVar22._0_4_ -
                              0.08332414) * auVar22._0_4_ + 0.4999983) * auVar21._0_4_ + 0.5) *
                            auVar18._0_4_ + (1.0 - auVar18._0_4_)) * (fVar23 + param_7[1]) *
                           param_2[1];
              auVar12._0_4_ = *param_7;
              *param_7 = auVar12._0_4_ + param_7[1];
              fVar23 = auVar20._0_4_ + fVar24;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              auVar22._0_4_ = fVar23 * fVar23;
              param_5 = auVar19._0_4_ + fVar25;
              param_2[2] = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                              0.08332414) * auVar13._0_4_ + 0.4999983) * auVar20._0_4_ + 0.5) *
                            auVar19._0_4_ + (1.0 - auVar19._0_4_)) * (auVar12._0_4_ + param_7[1]) *
                           param_2[2];
              auVar12._0_4_ = *param_7;
              *param_7 = auVar12._0_4_ + param_7[1];
              param_2[3] = (((((0.0041531627 - auVar22._0_4_ * 9.181827e-05) * auVar22._0_4_ -
                              0.08332414) * auVar22._0_4_ + 0.4999983) * fVar23 + 0.5) * param_5 +
                           (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < pfVar7);
          }
          uVar6 = (uint)pfVar7;
          for (; param_2 < pfVar8; param_2 = param_2 + 1) {
            fVar23 = fVar23 + fVar24;
            auVar12._0_4_ = *param_7;
            param_5 = param_5 + fVar25;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            auVar13._0_4_ = fVar23 * fVar23;
            *param_7 = param_7[1] + auVar12._0_4_;
            *param_2 = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                          0.08332414) * auVar13._0_4_ + 0.4999983) * fVar23 + 0.5) * param_5 +
                       (1.0 - param_5)) * (param_7[1] + auVar12._0_4_) * *param_2;
          }
        }
        auVar13._0_4_ = (3.1415927 - fVar23) * fVar11;
        iVar9 = (int)auVar13._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar13._0_4_)) {
          auVar13._4_4_ = auVar13._0_4_;
          auVar13._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar13);
          auVar13._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar13._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar8 = pfVar1;
        if (param_2 + (int)uVar6 < pfVar1) {
          pfVar8 = param_2 + (int)uVar6;
        }
        if (param_2 < pfVar8) {
          pfVar7 = (float *)((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) &
                            0xfffffffffffffffc);
          if (&DAT_0000000f < pfVar7) {
            pfVar7 = pfVar8 + -3;
            do {
              auVar12._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              auVar21._0_4_ = 3.1415927 - (fVar23 + fVar24);
              *param_7 = auVar12._0_4_ + param_7[1];
              fVar23 = fVar23 + fVar24 + fVar24;
              auVar13._0_4_ = auVar21._0_4_ * auVar21._0_4_;
              auVar20._0_4_ = 3.1415927 - fVar23;
              fVar23 = fVar23 + fVar24;
              auVar22._0_4_ = auVar20._0_4_ * auVar20._0_4_;
              auVar18._0_4_ = param_5 + fVar25;
              *param_2 = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                            0.08332414) * auVar13._0_4_ + 0.4999983) * auVar21._0_4_ + 0.5) *
                          param_5 + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * *param_2;
              auVar12._0_4_ = *param_7;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar21._0_4_ = 3.1415927 - fVar23;
              fVar23 = fVar23 + fVar24;
              auVar13._0_4_ = auVar21._0_4_ * auVar21._0_4_;
              auVar19._0_4_ = auVar18._0_4_ + fVar25;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              param_2[1] = (((((0.0041531627 - auVar22._0_4_ * 9.181827e-05) * auVar22._0_4_ -
                              0.08332414) * auVar22._0_4_ + 0.4999983) * auVar20._0_4_ + 0.5) *
                            auVar18._0_4_ + (1.0 - auVar18._0_4_)) * (auVar12._0_4_ + param_7[1]) *
                           param_2[1];
              auVar12._0_4_ = *param_7;
              *param_7 = auVar12._0_4_ + param_7[1];
              param_5 = auVar19._0_4_ + fVar25;
              param_2[2] = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                              0.08332414) * auVar13._0_4_ + 0.4999983) * auVar21._0_4_ + 0.5) *
                            auVar19._0_4_ + (1.0 - auVar19._0_4_)) * (auVar12._0_4_ + param_7[1]) *
                           param_2[2];
              auVar12._0_4_ = *param_7;
              auVar22._0_4_ = 3.1415927 - fVar23;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              param_2[3] = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                              0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_ + 0.5) *
                            param_5 + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < pfVar7);
          }
          uVar6 = (uint)pfVar7;
          for (; param_2 < pfVar8; param_2 = param_2 + 1) {
            auVar12._0_4_ = *param_7;
            fVar23 = fVar23 + fVar24;
            param_5 = param_5 + fVar25;
            auVar22._0_4_ = 3.1415927 - fVar23;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            *param_7 = auVar12._0_4_ + param_7[1];
            auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
            *param_2 = (((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                          0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_ + 0.5) * param_5
                       + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * *param_2;
          }
        }
        auVar14._0_4_ = (4.712389 - fVar23) * fVar11;
        iVar9 = (int)auVar14._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar14._0_4_)) {
          auVar14._4_4_ = auVar14._0_4_;
          auVar14._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar14);
          auVar14._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar14._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar8 = (float *)(longlong)(int)uVar6;
        pfVar7 = pfVar1;
        if (param_2 + (longlong)pfVar8 < pfVar1) {
          pfVar7 = param_2 + (longlong)pfVar8;
        }
        if (param_2 < pfVar7) {
          pfVar8 = (float *)((ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) &
                            0xfffffffffffffffc);
          if (&DAT_0000000f < pfVar8) {
            pfVar8 = pfVar7 + -3;
            do {
              auVar12._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              auVar21._0_4_ = fVar23 + fVar24 + fVar24;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar13._0_4_ = (fVar23 + fVar24) - 3.1415927;
              fVar23 = auVar13._0_4_ * auVar13._0_4_;
              auVar22._0_4_ = auVar21._0_4_ - 3.1415927;
              auVar21._0_4_ = auVar21._0_4_ + fVar24;
              auVar20._0_4_ = param_5 + fVar25;
              *param_2 = ((0.5 - (((0.0041531627 - fVar23 * 9.181827e-05) * fVar23 - 0.08332414) *
                                  fVar23 + 0.4999983) * auVar13._0_4_) * param_5 + (1.0 - param_5))
                         * (auVar12._0_4_ + param_7[1]) * *param_2;
              fVar23 = *param_7;
              auVar12._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              *param_7 = fVar23 + param_7[1];
              auVar13._0_4_ = auVar21._0_4_ - 3.1415927;
              param_5 = auVar20._0_4_ + fVar25;
              param_2[1] = ((0.5 - (((0.0041531627 - auVar12._0_4_ * 9.181827e-05) * auVar12._0_4_ -
                                    0.08332414) * auVar12._0_4_ + 0.4999983) * auVar22._0_4_) *
                            auVar20._0_4_ + (1.0 - auVar20._0_4_)) * (fVar23 + param_7[1]) *
                           param_2[1];
              fVar23 = *param_7;
              auVar12._0_4_ = auVar13._0_4_ * auVar13._0_4_;
              *param_7 = fVar23 + param_7[1];
              param_2[2] = ((0.5 - (((0.0041531627 - auVar12._0_4_ * 9.181827e-05) * auVar12._0_4_ -
                                    0.08332414) * auVar12._0_4_ + 0.4999983) * auVar13._0_4_) *
                            param_5 + (1.0 - param_5)) * (fVar23 + param_7[1]) * param_2[2];
              auVar12._0_4_ = *param_7;
              fVar23 = auVar21._0_4_ + fVar24;
              param_5 = param_5 + fVar25;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              auVar22._0_4_ = fVar23 - 3.1415927;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              param_2[3] = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                    0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_) *
                            param_5 + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < pfVar8);
            if (pfVar7 <= param_2) goto LAB_14511facf;
          }
          do {
            auVar12._0_4_ = *param_7;
            fVar23 = fVar23 + fVar24;
            param_5 = param_5 + fVar25;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            auVar22._0_4_ = fVar23 - 3.1415927;
            *param_7 = auVar12._0_4_ + param_7[1];
            auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
            *param_2 = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_) * param_5
                       + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
        }
LAB_14511facf:
        auVar15._0_4_ = (6.2831855 - fVar23) * fVar11;
        iVar9 = (int)auVar15._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar15._0_4_)) {
          auVar15._4_4_ = auVar15._0_4_;
          auVar15._8_8_ = 0;
          uVar6 = movmskps((int)pfVar8,auVar15);
          auVar15._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar15._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar8 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar8 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar8) {
          register0x00000020 =
               (BADSPACEBASE *)
               ((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) & 0xfffffffffffffffc);
          if (&DAT_0000000f < register0x00000020) {
            register0x00000020 = (BADSPACEBASE *)(pfVar8 + -3);
            do {
              auVar12._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              auVar22._0_4_ = 6.2831855 - (fVar23 + fVar24);
              fVar23 = fVar23 + fVar24 + fVar24;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              auVar21._0_4_ = 6.2831855 - fVar23;
              fVar23 = fVar23 + fVar24;
              auVar20._0_4_ = param_5 + fVar25;
              *param_2 = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                  0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_) *
                          param_5 + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * *param_2;
              auVar12._0_4_ = *param_7;
              auVar13._0_4_ = auVar21._0_4_ * auVar21._0_4_;
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar22._0_4_ = 6.2831855 - fVar23;
              param_5 = auVar20._0_4_ + fVar25;
              param_2[1] = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                    0.08332414) * auVar13._0_4_ + 0.4999983) * auVar21._0_4_) *
                            auVar20._0_4_ + (1.0 - auVar20._0_4_)) * (auVar12._0_4_ + param_7[1]) *
                           param_2[1];
              auVar12._0_4_ = *param_7;
              auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              *param_7 = auVar12._0_4_ + param_7[1];
              param_2[2] = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                    0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_) *
                            param_5 + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * param_2[2];
              fVar23 = fVar23 + fVar24;
              auVar12._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              auVar22._0_4_ = 6.2831855 - fVar23;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              *param_7 = auVar12._0_4_ + param_7[1];
              auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
              param_2[3] = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                    0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_) *
                            param_5 + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < register0x00000020);
            if (pfVar8 <= param_2) goto LAB_14511fde9;
          }
          do {
            fVar23 = fVar23 + fVar24;
            auVar12._0_4_ = *param_7;
            param_5 = param_5 + fVar25;
            auVar22._0_4_ = 6.2831855 - fVar23;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            *param_7 = auVar12._0_4_ + param_7[1];
            auVar13._0_4_ = auVar22._0_4_ * auVar22._0_4_;
            *param_2 = ((0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                0.08332414) * auVar13._0_4_ + 0.4999983) * auVar22._0_4_) * param_5
                       + (1.0 - param_5)) * (auVar12._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar8);
        }
LAB_14511fde9:
        if (6.2831855 <= fVar23) {
          fVar23 = fVar23 + -6.2831855;
          uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
        }
        uVar5 = uStack_d0;
      } while (param_2 < pfVar1);
    }
    break;
  case 1:
    if (param_2 < pfVar1) {
      auVar13._0_4_ = (float)local_d8;
      do {
        auVar16._0_4_ = (0.5 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar16._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar16._0_4_)) {
          auVar16._4_4_ = auVar16._0_4_;
          auVar16._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar16);
          auVar16._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar16._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar8 = (float *)(longlong)(int)uVar6;
        pfVar7 = pfVar1;
        if (param_2 + (longlong)pfVar8 < pfVar1) {
          pfVar7 = param_2 + (longlong)pfVar8;
        }
        if (param_2 < pfVar7) {
          pfVar8 = (float *)((ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) &
                            0xfffffffffffffffc);
          if (&DAT_0000000f < pfVar8) {
            pfVar8 = pfVar7 + -3;
            do {
              auVar22._0_4_ = *param_7;
              fVar23 = fVar23 + fVar24;
              param_5 = param_5 + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar21._0_4_ = fVar23 + fVar24;
              auVar13._0_4_ = (fVar23 + fVar23) * fVar11 - auVar13._0_4_ * auVar12._0_4_;
              auVar18._0_4_ = auVar21._0_4_ + fVar24;
              auVar19._0_4_ = param_5 + fVar25;
              fVar23 = auVar18._0_4_ + fVar24;
              auVar20._0_4_ =
                   (auVar21._0_4_ + auVar21._0_4_) * fVar11 - auVar12._0_4_ * auVar13._0_4_;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              *param_2 = (auVar13._0_4_ * param_5 + (1.0 - param_5)) * (auVar22._0_4_ + param_7[1])
                         * *param_2;
              auVar13._0_4_ = *param_7;
              auVar16._0_4_ = auVar19._0_4_ + fVar25;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar21._0_4_ =
                   (auVar18._0_4_ + auVar18._0_4_) * fVar11 - auVar12._0_4_ * auVar20._0_4_;
              param_2[1] = (auVar20._0_4_ * auVar19._0_4_ + (1.0 - auVar19._0_4_)) *
                           (auVar13._0_4_ + param_7[1]) * param_2[1];
              auVar22._0_4_ = *param_7;
              param_5 = auVar16._0_4_ + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar13._0_4_ = (fVar23 + fVar23) * fVar11 - auVar12._0_4_ * auVar21._0_4_;
              param_2[2] = (auVar21._0_4_ * auVar16._0_4_ + (1.0 - auVar16._0_4_)) *
                           (auVar22._0_4_ + param_7[1]) * param_2[2];
              auVar22._0_4_ = *param_7;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[3] = (auVar13._0_4_ * param_5 + (1.0 - param_5)) *
                           (auVar22._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < pfVar8);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar7 <= param_2) goto LAB_1451200a9;
          }
          do {
            auVar22._0_4_ = *param_7;
            fVar23 = fVar23 + fVar24;
            param_5 = param_5 + fVar25;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            *param_7 = auVar22._0_4_ + param_7[1];
            auVar13._0_4_ = (fVar23 + fVar23) * fVar11 - auVar13._0_4_ * auVar12._0_4_;
            *param_2 = (auVar13._0_4_ * param_5 + (1.0 - param_5)) * (auVar22._0_4_ + param_7[1]) *
                       *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_1451200a9:
        auVar17._0_4_ = (1.0 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar17._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar17._0_4_)) {
          auVar17._4_4_ = auVar17._0_4_;
          auVar17._8_8_ = 0;
          uVar6 = movmskps((int)pfVar8,auVar17);
          auVar17._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar17._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar8 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar8 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar8) {
          register0x00000020 =
               (BADSPACEBASE *)
               ((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) & 0xfffffffffffffffc);
          if (&DAT_0000000f < register0x00000020) {
            register0x00000020 = (BADSPACEBASE *)(pfVar8 + -3);
            do {
              auVar22._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar21._0_4_ = 1.0 - (fVar23 + fVar24);
              fVar23 = fVar23 + fVar24 + fVar24;
              auVar13._0_4_ =
                   (auVar21._0_4_ + auVar21._0_4_) * fVar11 - auVar13._0_4_ * auVar12._0_4_;
              auVar20._0_4_ = 1.0 - fVar23;
              fVar23 = fVar23 + fVar24;
              auVar18._0_4_ = param_5 + fVar25;
              auVar21._0_4_ = 1.0 - fVar23;
              fVar23 = fVar23 + fVar24;
              auVar20._0_4_ =
                   (auVar20._0_4_ + auVar20._0_4_) * fVar11 - auVar12._0_4_ * auVar13._0_4_;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              *param_2 = (auVar13._0_4_ * param_5 + (1.0 - param_5)) * (auVar22._0_4_ + param_7[1])
                         * *param_2;
              auVar13._0_4_ = *param_7;
              auVar19._0_4_ = auVar18._0_4_ + fVar25;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar21._0_4_ =
                   (auVar21._0_4_ + auVar21._0_4_) * fVar11 - auVar12._0_4_ * auVar20._0_4_;
              param_2[1] = (auVar20._0_4_ * auVar18._0_4_ + (1.0 - auVar18._0_4_)) *
                           (auVar13._0_4_ + param_7[1]) * param_2[1];
              auVar22._0_4_ = *param_7;
              param_5 = auVar19._0_4_ + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar13._0_4_ =
                   ((1.0 - fVar23) + (1.0 - fVar23)) * fVar11 - auVar12._0_4_ * auVar21._0_4_;
              param_2[2] = (auVar21._0_4_ * auVar19._0_4_ + (1.0 - auVar19._0_4_)) *
                           (auVar22._0_4_ + param_7[1]) * param_2[2];
              auVar22._0_4_ = *param_7;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[3] = (auVar13._0_4_ * param_5 + (1.0 - param_5)) *
                           (auVar22._0_4_ + param_7[1]) * param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < register0x00000020);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar8 <= param_2) goto LAB_14512030d;
          }
          do {
            auVar22._0_4_ = *param_7;
            fVar23 = fVar23 + fVar24;
            param_5 = param_5 + fVar25;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            *param_7 = auVar22._0_4_ + param_7[1];
            auVar13._0_4_ =
                 ((1.0 - fVar23) + (1.0 - fVar23)) * fVar11 - auVar13._0_4_ * auVar12._0_4_;
            *param_2 = (auVar13._0_4_ * param_5 + (1.0 - param_5)) * (auVar22._0_4_ + param_7[1]) *
                       *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar8);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_14512030d:
        if (1.0 <= fVar23) {
          fVar23 = fVar23 + -1.0;
          uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
        }
        uVar4 = local_d8;
        uVar5 = uStack_d0;
      } while (param_2 < pfVar1);
    }
    break;
  case 2:
    if (param_2 < pfVar1) {
      auVar13._0_4_ = (float)local_d8;
      do {
        auVar18._0_4_ = (param_6 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar18._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar18._0_4_)) {
          auVar18._4_4_ = auVar18._0_4_;
          auVar18._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar18);
          auVar18._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar18._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        pfVar8 = (float *)(longlong)(int)uVar6;
        pfVar7 = pfVar1;
        if (param_2 + (longlong)pfVar8 < pfVar1) {
          pfVar7 = param_2 + (longlong)pfVar8;
        }
        if (param_2 < pfVar7) {
          pfVar8 = (float *)((ulonglong)((longlong)pfVar7 + (3 - (longlong)param_2)) &
                            0xfffffffffffffffc);
          if (&DAT_0000000f < pfVar8) {
            pfVar8 = pfVar7 + -3;
            do {
              auVar22._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar20._0_4_ = param_5 + fVar25;
              auVar21._0_4_ = fVar11 * param_5 - auVar13._0_4_ * auVar12._0_4_;
              fVar23 = fVar23 + fVar24 + fVar24 + fVar24 + fVar24;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              *param_2 = ((1.0 - param_5) + auVar21._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2
              ;
              auVar13._0_4_ = *param_7;
              auVar22._0_4_ = fVar11 * auVar20._0_4_ - auVar12._0_4_ * auVar21._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar18._0_4_ = auVar20._0_4_ + fVar25;
              param_2[1] = ((1.0 - auVar20._0_4_) + auVar22._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              auVar21._0_4_ = fVar11 * auVar18._0_4_ - auVar12._0_4_ * auVar22._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_5 = auVar18._0_4_ + fVar25;
              param_2[2] = ((1.0 - auVar18._0_4_) + auVar21._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[2];
              auVar22._0_4_ = *param_7;
              auVar13._0_4_ = fVar11 * param_5 - auVar12._0_4_ * auVar21._0_4_;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < pfVar8);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar7 <= param_2) goto LAB_1451205a2;
          }
          do {
            param_5 = param_5 + fVar25;
            fVar23 = fVar23 + fVar24;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            auVar22._0_4_ = *param_7;
            auVar13._0_4_ = fVar11 * param_5 - auVar13._0_4_ * auVar12._0_4_;
            *param_7 = auVar22._0_4_ + param_7[1];
            *param_2 = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar7);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_1451205a2:
        auVar19._0_4_ = (1.0 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar19._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar19._0_4_)) {
          auVar19._4_4_ = auVar19._0_4_;
          auVar19._8_8_ = 0;
          uVar6 = movmskps((int)pfVar8,auVar19);
          auVar19._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar19._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar8 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar8 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar8) {
          register0x00000020 =
               (BADSPACEBASE *)
               ((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) & 0xfffffffffffffffc);
          if (&DAT_0000000f < register0x00000020) {
            register0x00000020 = (BADSPACEBASE *)(pfVar8 + -3);
            do {
              auVar22._0_4_ = *param_7;
              auVar18._0_4_ = auVar13._0_4_ * auVar12._0_4_;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar19._0_4_ = param_5 + fVar25 + fVar25;
              auVar21._0_4_ = -(auVar12._0_4_ * -auVar18._0_4_);
              auVar20._0_4_ = -(auVar12._0_4_ * auVar21._0_4_);
              fVar23 = fVar23 + fVar24 + fVar24 + fVar24 + fVar24;
              auVar13._0_4_ = -(auVar12._0_4_ * auVar20._0_4_);
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              *param_2 = ((1.0 - (param_5 + fVar25)) + -auVar18._0_4_) *
                         (auVar22._0_4_ + param_7[1]) * *param_2;
              auVar22._0_4_ = *param_7;
              auVar18._0_4_ = auVar19._0_4_ + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[1] = ((1.0 - auVar19._0_4_) + auVar21._0_4_) * (auVar22._0_4_ + param_7[1]) *
                           param_2[1];
              auVar22._0_4_ = *param_7;
              param_5 = auVar18._0_4_ + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[2] = ((1.0 - auVar18._0_4_) + auVar20._0_4_) * (auVar22._0_4_ + param_7[1]) *
                           param_2[2];
              auVar22._0_4_ = *param_7;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < register0x00000020);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar8 <= param_2) goto LAB_145120794;
          }
          do {
            auVar22._0_4_ = *param_7;
            param_5 = param_5 + fVar25;
            fVar23 = fVar23 + fVar24;
            *param_7 = auVar22._0_4_ + param_7[1];
            auVar13._0_4_ = -(auVar13._0_4_ * auVar12._0_4_);
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            *param_2 = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar8);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_145120794:
        if (1.0 <= fVar23) {
          fVar23 = fVar23 + -1.0;
          uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
        }
        uVar4 = local_d8;
        uVar5 = uStack_d0;
      } while (param_2 < pfVar1);
    }
    break;
  case 3:
    if (param_2 < pfVar1) {
      auVar13._0_4_ = (float)local_d8;
      do {
        auVar20._0_4_ = (1.0 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar20._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar20._0_4_)) {
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar20);
          auVar20._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar20._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar8 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar8 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar8) {
          register0x00000020 =
               (BADSPACEBASE *)
               ((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) & 0xfffffffffffffffc);
          if (&DAT_0000000f < register0x00000020) {
            register0x00000020 = (BADSPACEBASE *)(pfVar8 + -3);
            do {
              auVar22._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              auVar20._0_4_ = fVar23 + fVar24 + fVar24;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar19._0_4_ = param_5 + fVar25;
              auVar21._0_4_ = (fVar23 + fVar24) * param_5 * fVar11 - auVar13._0_4_ * auVar12._0_4_;
              auVar18._0_4_ = auVar20._0_4_ + fVar24;
              *param_2 = ((1.0 - param_5) + auVar21._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2
              ;
              auVar13._0_4_ = *param_7;
              fVar23 = auVar18._0_4_ + fVar24;
              auVar22._0_4_ = auVar20._0_4_ * auVar19._0_4_ * fVar11 - auVar12._0_4_ * auVar21._0_4_
              ;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar20._0_4_ = auVar19._0_4_ + fVar25;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              param_2[1] = ((1.0 - auVar19._0_4_) + auVar22._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              auVar21._0_4_ = auVar18._0_4_ * auVar20._0_4_ * fVar11 - auVar12._0_4_ * auVar22._0_4_
              ;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_5 = auVar20._0_4_ + fVar25;
              param_2[2] = ((1.0 - auVar20._0_4_) + auVar21._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[2];
              auVar22._0_4_ = *param_7;
              auVar13._0_4_ = fVar23 * param_5 * fVar11 - auVar12._0_4_ * auVar21._0_4_;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < register0x00000020);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar8 <= param_2) goto LAB_145120a21;
          }
          do {
            fVar23 = fVar23 + fVar24;
            param_5 = param_5 + fVar25;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            auVar22._0_4_ = *param_7;
            auVar13._0_4_ = fVar23 * param_5 * fVar11 - auVar13._0_4_ * auVar12._0_4_;
            *param_7 = auVar22._0_4_ + param_7[1];
            *param_2 = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar8);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_145120a21:
        if (1.0 <= fVar23) {
          fVar23 = fVar23 + -1.0;
          uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
        }
        uVar4 = local_d8;
        uVar5 = uStack_d0;
      } while (param_2 < pfVar1);
    }
    break;
  case 4:
    if (param_2 < pfVar1) {
      auVar13._0_4_ = (float)local_d8;
      do {
        auVar21._0_4_ = (1.0 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar21._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar21._0_4_)) {
          auVar21._4_4_ = auVar21._0_4_;
          auVar21._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar21);
          auVar21._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar21._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar8 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar8 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar8) {
          register0x00000020 =
               (BADSPACEBASE *)
               ((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) & 0xfffffffffffffffc);
          if (&DAT_0000000f < register0x00000020) {
            register0x00000020 = (BADSPACEBASE *)(pfVar8 + -3);
            do {
              auVar22._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              *param_7 = auVar22._0_4_ + param_7[1];
              auVar20._0_4_ = fVar23 + fVar24 + fVar24;
              auVar19._0_4_ = param_5 + fVar25;
              auVar21._0_4_ =
                   (1.0 - (fVar23 + fVar24)) * param_5 * fVar11 - auVar13._0_4_ * auVar12._0_4_;
              auVar18._0_4_ = auVar20._0_4_ + fVar24;
              *param_2 = ((1.0 - param_5) + auVar21._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2
              ;
              auVar13._0_4_ = *param_7;
              fVar23 = auVar18._0_4_ + fVar24;
              auVar22._0_4_ =
                   (1.0 - auVar20._0_4_) * auVar19._0_4_ * fVar11 - auVar12._0_4_ * auVar21._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar20._0_4_ = auVar19._0_4_ + fVar25;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              param_2[1] = ((1.0 - auVar19._0_4_) + auVar22._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              auVar21._0_4_ =
                   (1.0 - auVar18._0_4_) * auVar20._0_4_ * fVar11 - auVar12._0_4_ * auVar22._0_4_;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_5 = auVar20._0_4_ + fVar25;
              param_2[2] = ((1.0 - auVar20._0_4_) + auVar21._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[2];
              auVar22._0_4_ = *param_7;
              auVar13._0_4_ = (1.0 - fVar23) * param_5 * fVar11 - auVar12._0_4_ * auVar21._0_4_;
              *param_7 = auVar22._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < register0x00000020);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar8 <= param_2) goto LAB_145120cc5;
          }
          do {
            fVar23 = fVar23 + fVar24;
            param_5 = param_5 + fVar25;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            auVar22._0_4_ = *param_7;
            auVar13._0_4_ = (1.0 - fVar23) * param_5 * fVar11 - auVar13._0_4_ * auVar12._0_4_;
            *param_7 = auVar22._0_4_ + param_7[1];
            *param_2 = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar8);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_145120cc5:
        if (1.0 <= fVar23) {
          fVar23 = fVar23 + -1.0;
          uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
        }
        uVar4 = local_d8;
        uVar5 = uStack_d0;
      } while (param_2 < pfVar1);
    }
    break;
  case 5:
    if (param_2 < pfVar1) {
      auVar13._0_4_ = (float)local_d8;
      do {
        auVar22._0_4_ = (1.0 - fVar23) * (1.0 / fVar24);
        iVar9 = (int)auVar22._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar22._0_4_)) {
          auVar22._4_4_ = auVar22._0_4_;
          auVar22._8_8_ = 0;
          uVar6 = movmskps((int)register0x00000020,auVar22);
          auVar22._0_4_ = (float)(int)(iVar9 + (uVar6 & 1 ^ 1));
        }
        uVar6 = (uint)auVar22._0_4_;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
        }
        else if ((int)param_3 < (int)uVar6) {
          uVar6 = param_3;
        }
        register0x00000020 = (BADSPACEBASE *)(longlong)(int)uVar6;
        pfVar8 = pfVar1;
        if (param_2 + (longlong)register0x00000020 < pfVar1) {
          pfVar8 = param_2 + (longlong)register0x00000020;
        }
        if (param_2 < pfVar8) {
          if (0xf < ((ulonglong)((longlong)pfVar8 + (3 - (longlong)param_2)) & 0xfffffffffffffffc))
          {
            register0x00000020 = (BADSPACEBASE *)(uVar10 >> 0x21);
            auVar22._0_4_ = (float)(longlong)register0x00000020 * 4.656613e-10;
            do {
              auVar21._0_4_ = *param_7;
              param_5 = param_5 + fVar25;
              *param_7 = auVar21._0_4_ + param_7[1];
              auVar18._0_4_ = param_5 + fVar25;
              auVar20._0_4_ = auVar22._0_4_ * param_5 * fVar11 - auVar13._0_4_ * auVar12._0_4_;
              fVar23 = fVar23 + fVar24 + fVar24 + fVar24 + fVar24;
              uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
              *param_2 = ((1.0 - param_5) + auVar20._0_4_) * (auVar21._0_4_ + param_7[1]) * *param_2
              ;
              auVar13._0_4_ = *param_7;
              auVar21._0_4_ = auVar22._0_4_ * auVar18._0_4_ * fVar11 - auVar12._0_4_ * auVar20._0_4_
              ;
              *param_7 = auVar13._0_4_ + param_7[1];
              auVar19._0_4_ = auVar18._0_4_ + fVar25;
              param_2[1] = ((1.0 - auVar18._0_4_) + auVar21._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[1];
              auVar13._0_4_ = *param_7;
              auVar20._0_4_ = auVar22._0_4_ * auVar19._0_4_ * fVar11 - auVar12._0_4_ * auVar21._0_4_
              ;
              *param_7 = auVar13._0_4_ + param_7[1];
              param_5 = auVar19._0_4_ + fVar25;
              param_2[2] = ((1.0 - auVar19._0_4_) + auVar20._0_4_) * (auVar13._0_4_ + param_7[1]) *
                           param_2[2];
              auVar21._0_4_ = *param_7;
              auVar13._0_4_ = auVar22._0_4_ * param_5 * fVar11 - auVar12._0_4_ * auVar20._0_4_;
              *param_7 = auVar21._0_4_ + param_7[1];
              param_2[3] = ((1.0 - param_5) + auVar13._0_4_) * (auVar21._0_4_ + param_7[1]) *
                           param_2[3];
              param_2 = param_2 + 4;
            } while (param_2 < pfVar8 + -3);
            local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
            if (pfVar8 <= param_2) goto LAB_145120fab;
          }
          register0x00000020 = (BADSPACEBASE *)(uVar10 >> 0x21);
          do {
            param_5 = param_5 + fVar25;
            fVar23 = fVar23 + fVar24;
            uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
            auVar22._0_4_ = *param_7;
            auVar13._0_4_ =
                 (float)(longlong)register0x00000020 * 4.656613e-10 * param_5 * fVar11 -
                 auVar13._0_4_ * auVar12._0_4_;
            *param_7 = auVar22._0_4_ + param_7[1];
            *param_2 = ((1.0 - param_5) + auVar13._0_4_) * (auVar22._0_4_ + param_7[1]) * *param_2;
            param_2 = param_2 + 1;
          } while (param_2 < pfVar8);
          local_d8 = CONCAT44(local_d8._4_4_,auVar13._0_4_);
        }
LAB_145120fab:
        if (1.0 <= fVar23) {
          fVar23 = fVar23 + -1.0;
          uVar10 = uVar10 * 0x5851f42d4c957f2d + 1;
          uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
          uStack_c0 = uVar10;
        }
        uVar4 = local_d8;
        uVar5 = uStack_d0;
      } while (param_2 < pfVar1);
    }
  }
  uStack_d0 = uVar5;
  local_d8 = uVar4;
  if (bVar2) {
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
    param_1[2] = CONCAT44(iVar3,fVar24);
    param_1[3] = uStack_c0;
    if (iVar3 == 0) {
      fVar24 = 6.2831855;
    }
    else {
      if (iVar3 == 5) {
        return;
      }
      fVar24 = 1.0;
    }
    fVar24 = fmodf(fVar23,fVar24);
    *(float *)((longlong)param_1 + 0xc) = fVar24;
  }
  return;
}



// FUNCTION 1451210a0 FUN_1451210a0 body=105 status=ok
// SIG undefined FUN_1451210a0(void)

void FUN_1451210a0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x38,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTremolo\\AkTremoloFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c2c480;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar2 + 0x32) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = 1;
    return;
  }
  return;
}



// FUNCTION 145121160 FUN_145121160 body=56 status=ok
// SIG undefined FUN_145121160(void)

undefined8 FUN_145121160(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 1451211a0 FUN_1451211a0 body=227 status=ok
// SIG undefined FUN_1451211a0(void)

undefined8 FUN_1451211a0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0x10) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  fVar2 = param_2[3];
  *(float *)(param_1 + 0x14) = fVar2;
  fVar3 = param_2[4];
  *(float *)(param_1 + 0x18) = fVar3;
  *(float *)(param_1 + 0x1c) = param_2[5];
  *(float *)(param_1 + 0x24) = param_2[6];
  *(float *)(param_1 + 0x20) = param_2[7];
  fVar4 = powf(10.0,param_2[8] * 0.05);
  *(float *)(param_1 + 0x28) = fVar4;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(float *)(param_1 + 8) = fVar1 * 0.01;
  *(float *)(param_1 + 0x14) = fVar2 * 0.01;
  *(float *)(param_1 + 0x18) = fVar3 * 0.01;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return 1;
}



// FUNCTION 145121290 FUN_145121290 body=483 status=ok
// SIG undefined FUN_145121290(void)

undefined4 FUN_145121290(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 != (float *)0x0) {
    switch(param_2) {
    case 1:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
        fVar3 = 100.0;
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(float *)(param_1 + 8) = fVar3 * 0.01;
      return 1;
    case 2:
      *(float *)(param_1 + 0x10) = *param_3;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      return 1;
    case 3:
      fVar2 = *param_3;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(int *)(param_1 + 0xc) = (int)(longlong)fVar2;
      return 1;
    case 4:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
        fVar3 = 100.0;
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(float *)(param_1 + 0x14) = fVar3 * 0.01;
      return 1;
    case 5:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
        fVar3 = 100.0;
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
      *(float *)(param_1 + 0x18) = fVar3 * 0.01;
      return 1;
    case 6:
      fVar2 = *param_3;
      fVar3 = -180.0;
      if ((-180.0 <= fVar2) && (fVar3 = fVar2, 180.0 <= fVar2)) {
        fVar3 = 180.0;
      }
      *(float *)(param_1 + 0x1c) = fVar3;
      return 1;
    case 7:
      *(int *)(param_1 + 0x24) = (int)(longlong)*param_3;
      return 1;
    case 8:
      fVar2 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 180.0 <= fVar2)) {
        fVar3 = 180.0;
      }
      *(float *)(param_1 + 0x20) = fVar3;
      return 1;
    case 9:
      fVar2 = *param_3;
      fVar3 = -24.0;
      if ((-24.0 <= fVar2) && (fVar3 = fVar2, 24.0 <= fVar2)) {
        fVar3 = 24.0;
      }
      fVar2 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0x28) = fVar2;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      return 1;
    case 10:
      cVar1 = *(char *)param_3;
      *(undefined1 *)(param_1 + 0x32) = 1;
      *(bool *)(param_1 + 0x30) = cVar1 != '\0';
      return 1;
    case 0xb:
      cVar1 = *(char *)param_3;
      *(undefined1 *)(param_1 + 0x32) = 1;
      *(bool *)(param_1 + 0x31) = cVar1 != '\0';
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1451214a0 FUN_1451214a0 body=7 status=ok
// SIG undefined FUN_1451214a0(void)

void FUN_1451214a0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x32) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 1451214b0 FUN_1451214b0 body=43 status=ok
// SIG undefined FUN_1451214b0(void)

undefined8 * FUN_1451214b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1451214e0 FUN_1451214e0 body=52 status=ok
// SIG undefined FUN_1451214e0(void)

void FUN_1451214e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x38,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkTremolo\\AkTremoloFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c2c480;
    return;
  }
  return;
}



// FUNCTION 145121520 FUN_145121520 body=33 status=ok
// SIG undefined FUN_145121520(void)

longlong FUN_145121520(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 0xf & 1) != 0) {
    return *param_1 +
           (ulonglong)((*(uint *)(param_1 + 1) & 0xff) - 1) * (ulonglong)*(ushort *)(param_1 + 2) *
           4;
  }
  return 0;
}



// FUNCTION 145121550 FUN_145121550 body=2326 status=ok
// SIG undefined FUN_145121550(void)

void FUN_145121550(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float param_7,float param_8,float param_9,float param_10)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = 0.0;
  fVar4 = 0.0;
  fVar2 = param_7 * 0.45;
  if (param_8 <= param_7 * 0.45) {
    fVar2 = param_8;
  }
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  if (param_6 == 3) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar2 = 1.0 / fVar2;
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 + fVar8;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else if (param_6 == 4) {
    fVar2 = tanf((fVar2 * 3.1415927) / param_7);
    fVar11 = 1.0;
    fVar6 = fVar2 * fVar2 + 1.0;
    fVar8 = 1.0 / (fVar6 + fVar2 * 1.4142135);
    fVar7 = (fVar6 - fVar2 * 1.4142135) * fVar8;
    fVar6 = fVar8 * -2.0;
    fVar4 = (1.0 - fVar2 * fVar2) * fVar6;
    fVar9 = fVar8;
  }
  else {
    if (param_6 == 5) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = (float)uVar3 * (0.5 / param_10);
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar7 = 1.0 - fVar8;
      fVar9 = -fVar8;
      fVar11 = fVar8;
    }
    else if (param_6 == 6) {
      uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
      fVar8 = 1.0;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20) * -2.0;
      fVar9 = 1.0;
      fVar11 = (float)uVar3 * (0.5 / param_10);
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    else {
      if (param_6 == 0) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar7 = fVar4 * fVar2;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar2 = fVar6 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar8 = (fVar5 + fVar9) * fVar11;
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar5 + fVar7;
        fVar7 = fVar7 - fVar5;
        goto LAB_145121de0;
      }
      if (param_6 == 7) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar4 = fVar11 - 1.0;
        fVar6 = fVar11 + 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar7 = fVar4 * fVar2;
        fVar9 = fVar6 - fVar7;
        fVar2 = fVar6 * fVar2;
        fVar7 = fVar7 + fVar6;
        fVar6 = (fVar11 + fVar11) * (fVar4 - fVar2);
        fVar8 = (fVar9 + fVar5) * fVar11;
        fVar4 = fVar4 * -2.0 - (fVar2 + fVar2);
        fVar9 = (fVar9 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_145121de0;
      }
      if (param_6 == 2) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * SQRT(fVar11) * 1.4142135;
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_145121de0;
      }
      if (param_6 == 8) {
        param_9 = param_9 * 0.025;
        if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
          uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
          fVar6 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
          fVar11 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                   (float)(uVar1 & 0xff800000);
        }
        uVar3 = FUN_145376c80((fVar2 * 6.2831855) / param_7);
        fVar2 = (float)((ulonglong)uVar3 >> 0x20);
        fVar7 = fVar11 + 1.0;
        fVar9 = fVar11 - 1.0;
        fVar5 = (float)uVar3 * (0.5 / param_10) * (SQRT(fVar11) + SQRT(fVar11));
        fVar6 = fVar7 * fVar2;
        fVar2 = fVar9 * fVar2;
        fVar4 = fVar9 - fVar6;
        fVar10 = fVar2 + fVar7;
        fVar7 = fVar7 - fVar2;
        fVar4 = fVar4 + fVar4;
        fVar6 = (fVar6 + fVar9) * fVar11 * -2.0;
        fVar8 = (fVar10 + fVar5) * fVar11;
        fVar9 = (fVar10 - fVar5) * fVar11;
        fVar11 = fVar7 + fVar5;
        fVar7 = fVar7 - fVar5;
        goto LAB_145121de0;
      }
      if (param_6 != 1) goto LAB_145121de0;
      param_7 = (fVar2 * 6.2831855) / param_7;
      fVar4 = cosf(param_7);
      param_9 = param_9 * 0.025;
      if ((-37.0 <= param_9) && (param_9 <= 37.0)) {
        uVar1 = (uint)(longlong)(param_9 * 27866352.0 + 1.0653532e+09);
        fVar2 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar7 = ((fVar2 * 0.32518977 + 0.020805772) * fVar2 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      fVar11 = sinf(param_7);
      fVar4 = fVar4 * -2.0;
      fVar11 = fVar11 * (0.5 / param_10);
      fVar8 = fVar11 * fVar7;
      fVar11 = fVar11 / fVar7;
      fVar9 = 1.0 - fVar8;
      fVar8 = fVar8 + 1.0;
      fVar7 = 1.0 - fVar11;
      fVar6 = fVar4;
    }
    fVar11 = fVar11 + 1.0;
  }
LAB_145121de0:
  fVar11 = 1.0 / fVar11;
  *param_1 = fVar11 * fVar8;
  *param_2 = fVar11 * fVar6;
  *param_3 = fVar11 * fVar9;
  *param_4 = fVar11 * fVar4;
  *param_5 = fVar11 * fVar7;
  return;
}



// FUNCTION 145121e70 FUN_145121e70 body=566 status=ok
// SIG undefined FUN_145121e70(void)

void FUN_145121e70(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res8 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c [13];
  
  FUN_145121550(&local_44,&local_40,local_3c,local_res8,&local_48,param_2,param_3,param_4,param_5,
                param_6);
  local_res8[0] = -local_res8[0];
  local_48 = -local_48;
  if (param_1 != (float *)0x0) {
    *param_1 = local_44;
    param_1[1] = local_44;
    param_1[2] = local_44;
    param_1[3] = local_44;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[0x14] = local_3c[0];
    fVar1 = local_res8[0] * local_44 + local_40;
    fVar4 = local_res8[0] * local_48;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[0x10] = local_40;
    param_1[0x18] = local_res8[0];
    param_1[0xc] = 0.0;
    param_1[7] = fVar1;
    param_1[10] = fVar1;
    param_1[0xd] = fVar1;
    fVar2 = local_48 * local_40;
    fVar1 = fVar1 * local_res8[0] + local_3c[0] + local_48 * local_44;
    param_1[0xb] = fVar1;
    param_1[0xe] = fVar1;
    param_1[0xf] = fVar4 * local_44 + fVar1 * local_res8[0] + fVar2;
    fVar1 = local_res8[0] * local_40 + local_3c[0];
    param_1[0x11] = fVar1;
    fVar1 = fVar1 * local_res8[0] + fVar2;
    param_1[0x12] = fVar1;
    param_1[0x15] = local_res8[0] * local_3c[0];
    fVar3 = local_res8[0] * local_3c[0] * local_res8[0];
    param_1[0x13] = (fVar1 + fVar2) * local_res8[0] + local_48 * local_3c[0];
    fVar1 = local_res8[0] * local_res8[0];
    param_1[0x16] = fVar3 + local_48 * local_3c[0];
    param_1[0x17] = ((local_3c[0] + local_3c[0]) * local_48 + fVar3) * local_res8[0];
    param_1[0x19] = fVar1 + local_48;
    param_1[0x1a] = (local_48 + local_48 + fVar1) * local_res8[0];
    param_1[0x1d] = fVar4;
    param_1[0x1b] = (local_48 * 3.0 + fVar1) * local_res8[0] * local_res8[0] + local_48 * local_48;
    param_1[0x1c] = local_48;
    param_1[0x1e] = fVar4 * local_res8[0] + local_48 * local_48;
    param_1[0x1f] = ((local_48 + local_48) * local_48 + fVar4 * local_res8[0]) * local_res8[0];
  }
  return;
}



// FUNCTION 1451220b0 FUN_1451220b0 body=1485 status=ok
// SIG undefined FUN_1451220b0(void)

ulonglong FUN_1451220b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                       uint *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 local_78 [16];
  undefined4 local_68 [16];
  
  uVar3 = *param_5;
  *(uint *)(param_1 + 0x130) = uVar3;
  *(longlong *)(param_1 + 0x158) = param_4;
  *(longlong **)(param_1 + 0x160) = param_2;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_4 + 0x74);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_1 + 400) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x50);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_4 + 0x48);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_4 + 0x58);
  *(byte *)(param_1 + 0x138) = -(*(char *)(param_4 + 0x99) != '\0') & 2;
  if ((param_5[1] & 0xfffff000) == 0x8000) {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  fVar12 = 6.2831855 / (float)uVar3;
  *(float *)(param_1 + 0x78) = 1.0 - fVar12 * *(float *)(param_4 + 0xbc);
  *(float *)(param_1 + 0x84) = 1.0 - fVar12 * *(float *)(param_4 + 0xbc);
  *(float *)(param_1 + 0x90) = 1.0 - fVar12 * *(float *)(param_4 + 0xbc);
  *(float *)(param_1 + 0x9c) = 1.0 - fVar12 * *(float *)(param_4 + 0xbc);
  *(float *)(param_1 + 0xa8) = 1.0 - fVar12 * *(float *)(param_4 + 0xbc);
  *(float *)(param_1 + 0xb4) = 1.0 - fVar12 * *(float *)(param_4 + 0xbc);
  uVar4 = FUN_1451230d0(param_1);
  if (((int)uVar4 == 1) && (uVar4 = FUN_1451232a0(param_1,param_2), (int)uVar4 == 1)) {
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x158);
      fVar11 = powf(2.0,*(float *)(lVar1 + 100) * 0.01);
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x5c);
      fVar12 = fVar11 * *(float *)(&PTR_DAT_149c32c50)[uVar4 * 5];
      if (fVar11 * *(float *)(&PTR_DAT_149c32c40)[uVar4 * 5] <=
          fVar11 * *(float *)(&PTR_DAT_149c32c50)[uVar4 * 5]) {
        fVar12 = fVar11 * *(float *)(&PTR_DAT_149c32c40)[uVar4 * 5];
      }
      if (((int)(longlong)(fVar12 * (float)*(uint *)(param_1 + 0x130) * 0.001) != 0) &&
         (uVar4 = FUN_1453c6a00(param_1 + 0xb8,param_2), (int)uVar4 != 1)) {
        return uVar4;
      }
    }
    uVar5 = FUN_145123250(param_1,param_2);
    uVar4 = uVar5;
    if ((int)uVar5 == 1) {
      uVar9 = uVar5 & 0xffffffff;
      uVar8 = 0;
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x158) + 0x5c);
      uVar3 = 1;
      if (*(char *)(param_1 + 0x138) != '\0') {
        puVar6 = (undefined4 *)
                 (**(code **)(*param_2 + 8))
                           (param_2,800,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x1b0);
        if (puVar6 == (undefined4 *)0x0) {
          *(undefined8 *)(param_1 + 0x150) = 0;
          return 0x34;
        }
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        puVar6[4] = 0;
        *(undefined8 *)(puVar6 + 0xc5) = 0;
        memset(puVar6 + 5,0,0x100);
        memset(puVar6 + 0x45,0,0x100);
        *(undefined8 *)(puVar6 + 0x85) = 0;
        *(undefined8 *)(puVar6 + 0x87) = 0;
        *(undefined8 *)(puVar6 + 0x89) = 0;
        *(undefined8 *)(puVar6 + 0x8b) = 0;
        *(undefined8 *)(puVar6 + 0x8d) = 0;
        *(undefined8 *)(puVar6 + 0x8f) = 0;
        *(undefined8 *)(puVar6 + 0x91) = 0;
        *(undefined8 *)(puVar6 + 0x93) = 0;
        *(undefined8 *)(puVar6 + 0x95) = 0;
        *(undefined8 *)(puVar6 + 0x97) = 0;
        *(undefined8 *)(puVar6 + 0x99) = 0;
        *(undefined8 *)(puVar6 + 0x9b) = 0;
        *(undefined8 *)(puVar6 + 0x9d) = 0;
        *(undefined8 *)(puVar6 + 0x9f) = 0;
        *(undefined8 *)(puVar6 + 0xa1) = 0;
        *(undefined8 *)(puVar6 + 0xa3) = 0;
        *(undefined8 *)(puVar6 + 0xa5) = 0;
        *(undefined8 *)(puVar6 + 0xa7) = 0;
        *(undefined8 *)(puVar6 + 0xa9) = 0;
        *(undefined8 *)(puVar6 + 0xab) = 0;
        *(undefined8 *)(puVar6 + 0xad) = 0;
        *(undefined8 *)(puVar6 + 0xaf) = 0;
        *(undefined8 *)(puVar6 + 0xb1) = 0;
        *(undefined8 *)(puVar6 + 0xb3) = 0;
        *(undefined8 *)(puVar6 + 0xb5) = 0;
        *(undefined8 *)(puVar6 + 0xb7) = 0;
        *(undefined8 *)(puVar6 + 0xb9) = 0;
        *(undefined8 *)(puVar6 + 0xbb) = 0;
        *(undefined8 *)(puVar6 + 0xbd) = 0;
        *(undefined8 *)(puVar6 + 0xbf) = 0;
        *(undefined8 *)(puVar6 + 0xc1) = 0;
        *(undefined8 *)(puVar6 + 0xc3) = 0;
        *(undefined4 **)(param_1 + 0x150) = puVar6;
        uVar3 = FUN_1453c5f70(puVar6,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 100),
                              (&PTR_DAT_149c32c40)[uVar4 * 5],(&PTR_DAT_149c32c50)[uVar4 * 5],
                              *(undefined4 *)(&DAT_149c32c38 + uVar4 * 0x28),
                              *(undefined4 *)(&DAT_149c32c48 + uVar4 * 0x28),
                              *(undefined4 *)(param_1 + 0x130));
      }
      if (uVar3 == 1) {
        if ((((*(char *)(param_1 + 0x138) == '\0') ||
             (uVar10 = (ulonglong)
                       (*(float *)(*(longlong *)(param_1 + 0x158) + 0x68) * 0.001 *
                       (float)*(uint *)(param_1 + 0x130)), (int)uVar10 == 0)) ||
            (((uVar3 = param_5[1] & 0xf00, uVar3 != 0x100 || ((param_5[1] & 0x210000) == 0)) &&
             (uVar3 != 0x200)))) ||
           ((uVar4 = FUN_1453c6a00(param_1 + 0xe8,param_2,uVar10 & 0xffffffff), (int)uVar4 == 1 &&
            (uVar4 = FUN_1453c6a00(param_1 + 0x100,param_2,uVar10 & 0xffffffff), (int)uVar4 == 1))))
        {
          FUN_145129510(4,*(longlong *)(param_1 + 0x158) + 0x9c,local_78);
          FUN_145129730(local_78,*(undefined4 *)(param_1 + 0x130),4,local_68);
          puVar6 = local_68;
          do {
            fVar12 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x10) * 0.0247212 -
                     (float)(3 - (int)uVar8) * 0.61803;
            if (fVar12 <= 0.0) {
              fVar12 = 0.0;
            }
            if (0.61803 <= fVar12) {
              fVar12 = 0.61803;
            }
            uVar4 = FUN_1453c6720(param_1 + uVar8 * 0x18 + 8,param_2,*puVar6,fVar12);
            if ((int)uVar4 != 1) {
              return uVar4;
            }
            uVar3 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar3;
            puVar6 = puVar6 + 1;
          } while (uVar3 < 4);
          *(int *)(param_1 + 0x120) =
               (int)(longlong)
                    ((*(float *)(*(longlong *)(param_1 + 0x158) + 0x60) * 0.001 +
                     *(float *)(*(longlong *)(param_1 + 0x158) + 8)) *
                    (float)*(uint *)(param_1 + 0x130));
          uVar4 = uVar9;
          if ((((param_5[1] & 0xf00) == 0x200) && (uVar3 = param_5[1] & 0xff, 4 < uVar3)) &&
             (DAT_14c72f5e8 == 2)) {
            iVar7 = uVar3 - 6;
            *(int *)(param_1 + 300) = iVar7;
            uVar3 = FUN_145129b30(param_2,iVar7,param_1 + 0x68);
            uVar4 = uVar5 & 0xffffffff;
            if (uVar3 != 1) {
              uVar4 = (ulonglong)uVar3;
            }
          }
        }
      }
      else {
        uVar4 = (ulonglong)uVar3;
      }
    }
  }
  return uVar4;
}



// FUNCTION 145122680 FUN_145122680 body=350 status=ok
// SIG undefined FUN_145122680(void)

undefined8 FUN_145122680(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  FUN_1453c6a60(param_1 + 0x17);
  FUN_1453c6a60(param_1 + 0x1a,param_2);
  FUN_1453c6a60(param_1 + 0x1d,param_2);
  FUN_1453c6a60(param_1 + 0x20,param_2);
  uVar4 = 0;
  if ((*(char *)(param_1 + 0x27) != '\0') && (param_1[0x2a] != 0)) {
    FUN_1453c6250(param_1[0x2a],param_2);
    if (param_1[0x2a] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x29] = 0;
  }
  FUN_1451235d0(param_1,param_2);
  puVar3 = param_1 + 1;
  lVar1 = 4;
  do {
    FUN_1453c67a0(puVar3,param_2);
    puVar3 = puVar3 + 3;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  if (param_1[0xd] != 0) {
    if (*(int *)((longlong)param_1 + 300) != 0) {
      do {
        FUN_1453c67a0(param_1[0xd] + uVar4 * 0x18,param_2);
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)((longlong)param_1 + 300));
    }
    (**(code **)(*param_2 + 0x10))(param_2,param_1[0xd]);
    param_1[0xd] = 0;
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 1451227e0 FUN_1451227e0 body=309 status=ok
// SIG undefined FUN_1451227e0(void)

undefined8 FUN_1451227e0(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  FUN_1453c6aa0(param_1 + 0xb8);
  FUN_1453c6aa0(param_1 + 0xd0);
  FUN_1453c6aa0(param_1 + 0xe8);
  FUN_1453c6aa0(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1453c6290();
  }
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (uVar3 = uVar6, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      uVar2 = (int)uVar3 + 1;
      puVar1 = (undefined8 *)(uVar3 * 0xa0 + *(longlong *)(param_1 + 0x148));
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(byte *)(param_1 + 0x134));
  }
  FUN_1451236d0(param_1);
  lVar5 = param_1 + 8;
  lVar4 = 4;
  do {
    FUN_1453c67e0(lVar5);
    lVar5 = lVar5 + 0x18;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 300) != 0)) {
    do {
      FUN_1453c67e0(*(longlong *)(param_1 + 0x68) + uVar6 * 0x18);
      uVar2 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 300));
  }
  return 1;
}



// FUNCTION 145122940 FUN_145122940 body=682 status=ok
// SIG undefined FUN_145122940(void)

void FUN_145122940(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x9a) != '\0') &&
     (cVar4 = FUN_1451237a0(), cVar4 != '\0')) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x158) + 0x58) != '\0') {
    FUN_145124160(param_1);
  }
  uVar6 = *(uint *)(param_1 + 0x120);
  if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
    uVar11 = *(uint *)(param_1 + 0x118);
    if (uVar11 != 0) {
      if ((uVar11 == 0xffffffff) || (*(short *)((longlong)param_2 + 0x12) != 0)) goto LAB_1451229b1;
      if (*(uint *)(param_1 + 0x11c) < uVar6) {
        uVar11 = (uVar11 - *(uint *)(param_1 + 0x11c)) + uVar6;
        *(uint *)(param_1 + 0x118) = uVar11;
        goto LAB_1451229bd;
      }
LAB_1451229c3:
      uVar7 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((longlong)param_2 + 0x12);
      uVar6 = uVar11;
      if (uVar7 <= uVar11) {
        uVar6 = uVar7;
      }
      *(uint *)(param_1 + 0x118) = uVar11 - uVar6;
      uVar1 = *(ushort *)(param_2 + 2);
      uVar5 = *(ushort *)((longlong)param_2 + 0x12);
      if (uVar1 <= uVar5) {
        uVar5 = uVar1;
      }
      iVar10 = (uint)uVar1 - (uint)uVar5;
      if (iVar10 != 0) {
        if (*(byte *)(param_2 + 1) != 0) {
          uVar8 = (ulonglong)*(byte *)(param_2 + 1);
          lVar9 = 0;
          do {
            memset((void *)(*param_2 +
                           ((ulonglong)*(ushort *)(param_2 + 2) * lVar9 + (ulonglong)(uint)uVar5) *
                           4),0,(ulonglong)(uint)(iVar10 * 4));
            lVar9 = lVar9 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        *(short *)((longlong)param_2 + 0x12) = (short)param_2[2];
      }
      if (*(int *)(param_1 + 0x118) != 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
      }
      goto LAB_145122ad4;
    }
    sVar2 = 0;
    if (*(short *)((longlong)param_2 + 0x12) != 0) {
LAB_1451229b1:
      *(uint *)(param_1 + 0x118) = uVar6;
      uVar11 = uVar6;
LAB_1451229bd:
      *(uint *)(param_1 + 0x11c) = uVar6;
      goto LAB_1451229c3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
LAB_145122ad4:
    sVar2 = *(short *)((longlong)param_2 + 0x12);
  }
  if (sVar2 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_2 + 1);
  if ((uVar6 & 0xf00) != 0x100) {
    if ((uVar6 & 0xf00) == 0x200) {
      if ((byte)uVar6 < 5) {
        FUN_145127320();
      }
      else {
        FUN_145127df0(param_1,param_2);
      }
    }
    goto switchD_145122b23_caseD_5;
  }
  uVar6 = uVar6 >> 0xc & 0x63f;
  if (0x603 < uVar6) {
    switch(uVar6) {
    case 0x607:
    case 0x60b:
    case 0x60f:
      FUN_145125940(param_1,param_2);
      break;
    case 0x633:
    case 0x637:
    case 0x63b:
    case 0x63f:
      FUN_1451264a0(param_1,param_2);
    }
    goto switchD_145122b23_caseD_5;
  }
  if (uVar6 == 0x603) {
switchD_145122b23_caseD_7:
    FUN_145124d40(param_1,param_2);
  }
  else {
    switch(uVar6) {
    case 3:
    case 4:
    case 8:
    case 0xb:
    case 0xc:
      FUN_1451244e0(param_1,param_2);
      break;
    case 7:
    case 0xf:
      goto switchD_145122b23_caseD_7;
    }
  }
switchD_145122b23_caseD_5:
  lVar9 = *(longlong *)(param_1 + 0x158);
  uVar3 = *(undefined8 *)(lVar9 + 0x10);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar9 + 8);
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  uVar3 = *(undefined8 *)(lVar9 + 0x20);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(lVar9 + 0x18);
  *(undefined8 *)(param_1 + 0x180) = uVar3;
  uVar3 = *(undefined8 *)(lVar9 + 0x30);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(param_1 + 400) = uVar3;
  uVar3 = *(undefined8 *)(lVar9 + 0x40);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar9 + 0x38);
  *(undefined8 *)(param_1 + 0x1a0) = uVar3;
  uVar3 = *(undefined8 *)(lVar9 + 0x50);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar9 + 0x58);
  return;
}



// FUNCTION 145122c80 FUN_145122c80 body=368 status=ok
// SIG undefined FUN_145122c80(void)

void FUN_145122c80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x80) != 0)) &&
     ((*(int *)(lVar1 + 0x80) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    FUN_145121e70((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 +
                  *(longlong *)(param_1 + 0x148) + 0x10,*(undefined4 *)(lVar1 + 0x84),
                  (float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x1c),
                  *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
    *(undefined4 *)
     ((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x90 + *(longlong *)(param_1 + 0x148)) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x80);
    lVar1 = *(longlong *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x80) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      FUN_145121e70((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 +
                    *(longlong *)(param_1 + 0x148) + 0xb0,*(undefined4 *)(lVar1 + 0x84),
                    (float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x1c),
                    *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
      *(undefined4 *)
       ((ulonglong)*(byte *)(param_1 + 0x135) * 0xa0 + 0x130 + *(longlong *)(param_1 + 0x148)) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x80);
    }
  }
  return;
}



// FUNCTION 145122df0 FUN_145122df0 body=368 status=ok
// SIG undefined FUN_145122df0(void)

void FUN_145122df0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x88) != 0)) &&
     ((*(int *)(lVar1 + 0x88) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    FUN_145121e70((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 +
                  *(longlong *)(param_1 + 0x148) + 0x10,*(undefined4 *)(lVar1 + 0x8c),
                  (float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x28),
                  *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x2c));
    *(undefined4 *)
     ((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x90 + *(longlong *)(param_1 + 0x148)) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x88);
    lVar1 = *(longlong *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x88) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      FUN_145121e70((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 +
                    *(longlong *)(param_1 + 0x148) + 0xb0,*(undefined4 *)(lVar1 + 0x8c),
                    (float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x28),
                    *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x2c));
      *(undefined4 *)
       ((ulonglong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x130 + *(longlong *)(param_1 + 0x148)) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x88);
    }
  }
  return;
}



// FUNCTION 145122f60 FUN_145122f60 body=368 status=ok
// SIG undefined FUN_145122f60(void)

void FUN_145122f60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x90) != 0)) &&
     ((*(int *)(lVar1 + 0x90) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) {
    FUN_145121e70((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 +
                  *(longlong *)(param_1 + 0x148) + 0x10,*(undefined4 *)(lVar1 + 0x94),
                  (float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x34),
                  *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38));
    *(undefined4 *)
     ((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 + 0x90 + *(longlong *)(param_1 + 0x148)) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x90);
    lVar1 = *(longlong *)(param_1 + 0x158);
    if ((*(int *)(lVar1 + 0x90) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) {
      FUN_145121e70((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 +
                    *(longlong *)(param_1 + 0x148) + 0xb0,*(undefined4 *)(lVar1 + 0x94),
                    (float)*(uint *)(param_1 + 0x130),*(undefined4 *)(lVar1 + 0x34),
                    *(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38));
      *(undefined4 *)
       ((ulonglong)*(byte *)(param_1 + 0x137) * 0xa0 + 0x130 + *(longlong *)(param_1 + 0x148)) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x90);
    }
  }
  return;
}



// FUNCTION 1451230d0 FUN_1451230d0 body=372 status=ok
// SIG undefined FUN_1451230d0(void)

undefined4 FUN_1451230d0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar4 = 0;
  lVar3 = *(longlong *)(param_1 + 0x158);
  uVar5 = 0;
  if (*(char *)(lVar3 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x135) = 0;
    iVar2 = *(int *)(lVar3 + 0x80);
    if (iVar2 == 1) {
      uVar5 = (uint)*(byte *)(param_1 + 0x138);
    }
    else if ((iVar2 == 2) || (uVar5 = 0, iVar2 == 3)) {
      uVar5 = 1;
    }
    *(char *)(param_1 + 0x136) = (char)uVar5;
    iVar2 = *(int *)(lVar3 + 0x88);
    if (iVar2 == 1) {
      uVar5 = uVar5 + *(byte *)(param_1 + 0x138);
    }
    else if ((iVar2 == 2) || (iVar2 == 3)) {
      uVar5 = uVar5 + 1;
    }
    *(char *)(param_1 + 0x137) = (char)uVar5;
    iVar2 = *(int *)(lVar3 + 0x90);
    if (iVar2 == 1) {
      uVar5 = uVar5 + *(byte *)(param_1 + 0x138);
    }
    else if ((iVar2 == 2) || (iVar2 == 3)) {
      uVar5 = uVar5 + 1;
    }
  }
  *(char *)(param_1 + 0x134) = (char)uVar5;
  if (uVar5 != 0) {
    uVar6 = (ulonglong)uVar5;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                      (*(longlong **)(param_1 + 0x160),uVar6 * 0xa0,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                       ,0x163);
    *(longlong *)(param_1 + 0x148) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    if (uVar5 != 0) {
      do {
        puVar1 = (undefined8 *)(lVar4 + lVar3);
        if (puVar1 != (undefined8 *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0xf] = 0;
          puVar1[0x10] = 0;
          puVar1[0x11] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar3 = *(longlong *)(param_1 + 0x148);
        }
        lVar4 = lVar4 + 0xa0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  FUN_145122c80(param_1);
  FUN_145122df0(param_1);
  FUN_145122f60(param_1);
  return 1;
}



// FUNCTION 145123250 FUN_145123250 body=66 status=ok
// SIG undefined FUN_145123250(void)

undefined8 FUN_145123250(longlong param_1)

{
  undefined8 uVar1;
  
  if ((int)(longlong)
           (*(float *)(*(longlong *)(param_1 + 0x158) + 0x60) * 0.001 *
           (float)*(uint *)(param_1 + 0x130)) != 0) {
    uVar1 = FUN_1453c6a00(param_1 + 0xd0);
    return uVar1;
  }
  return 1;
}



// FUNCTION 1451232a0 FUN_1451232a0 body=809 status=ok
// SIG undefined FUN_1451232a0(void)

undefined8 FUN_1451232a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  void *_Dst;
  uint uVar9;
  float local_398 [16];
  undefined4 auStack_358 [16];
  undefined4 local_318 [64];
  undefined4 local_218 [64];
  undefined1 local_118 [256];
  
  lVar3 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)*(uint *)(param_1 + 0x128) * 0xa8,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                     ,0x1c1);
  *(longlong *)(param_1 + 0x140) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar6 = 0;
  uVar4 = uVar7;
  if (*(int *)(param_1 + 0x128) != 0) {
    do {
      _Dst = (void *)(uVar4 * 0xa8 + lVar3);
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,0xa8);
        *(undefined8 *)((longlong)_Dst + 0x60) = 0;
        *(undefined8 *)((longlong)_Dst + 0x68) = 0;
        *(undefined8 *)((longlong)_Dst + 0x70) = 0;
        *(undefined8 *)((longlong)_Dst + 0x78) = 0;
        *(undefined8 *)((longlong)_Dst + 0x80) = 0;
        *(undefined8 *)((longlong)_Dst + 0x88) = 0;
        *(undefined4 *)((longlong)_Dst + 0x90) = 0;
        *(undefined8 *)((longlong)_Dst + 0x98) = 0;
        *(undefined4 *)((longlong)_Dst + 0xa0) = 0;
        lVar3 = *(longlong *)(param_1 + 0x140);
      }
      uVar6 = *(uint *)(param_1 + 0x128);
      uVar8 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar8;
    } while (uVar8 < uVar6);
  }
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  if (1 < uVar6) {
    *(float *)(param_1 + 0x124) = 1.0 / SQRT((float)uVar6);
  }
  lVar3 = *(longlong *)(param_1 + 0x158);
  FUN_145129060(*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 0x70),uVar6 * 4,lVar3 + 0x9c,
                local_118);
  FUN_145129730(local_118,*(undefined4 *)(param_1 + 0x130),*(int *)(param_1 + 0x128) << 2,local_318)
  ;
  uVar6 = *(uint *)(param_1 + 0x128);
  if (uVar6 == 0) {
    FUN_145129320(0,*(longlong *)(param_1 + 0x158) + 0x9c,local_398);
  }
  else {
    do {
      uVar2 = uVar9 * 4;
      uVar4 = (ulonglong)uVar9;
      uVar8 = uVar6 * 2 + uVar9;
      uVar1 = uVar9 + uVar6 * 3;
      uVar9 = uVar9 + 1;
      local_218[uVar2] = local_318[uVar4];
      local_218[uVar2 + 1] = local_318[uVar8 - uVar6];
      local_218[uVar2 + 2] = local_318[uVar8];
      local_218[uVar2 + 3] = local_318[uVar1];
    } while (uVar9 < uVar6);
    FUN_145129320(uVar6,*(longlong *)(param_1 + 0x158) + 0x9c,local_398);
    uVar9 = *(uint *)(param_1 + 0x130);
    uVar4 = uVar7;
    do {
      uVar8 = (int)uVar4 + 1;
      auStack_358[uVar4] = (int)(longlong)(local_398[uVar4] * 0.001 * (float)uVar9);
      uVar4 = (ulonglong)uVar8;
    } while (uVar8 < uVar6);
    do {
      uVar5 = FUN_1453c6d10(*(longlong *)(param_1 + 0x140) + uVar7 * 0xa8,param_2,
                            local_218 + (uint)((int)uVar7 * 4),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 8),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0xc),
                            *(undefined4 *)(param_1 + 0x130));
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      uVar5 = FUN_1453c6a00(*(longlong *)(param_1 + 0x140) + 0x90 + uVar7 * 0xa8,param_2,
                            auStack_358[uVar7]);
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x128));
  }
  return 1;
}



// FUNCTION 1451235d0 FUN_1451235d0 body=159 status=ok
// SIG undefined FUN_1451235d0(void)

void FUN_1451235d0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      do {
        FUN_1453c6e50(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar1 * 0xa8,param_2);
        FUN_1453c6a60(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar1 * 0xa8,param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x128));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return;
}



// FUNCTION 145123670 FUN_145123670 body=85 status=ok
// SIG undefined FUN_145123670(void)

void FUN_145123670(longlong param_1,longlong *param_2)

{
  if ((*(char *)(param_1 + 0x138) != '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
    FUN_1453c6250();
    if (*(longlong *)(param_1 + 0x150) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1451236d0 FUN_1451236d0 body=120 status=ok
// SIG undefined FUN_1451236d0(void)

void FUN_1451236d0(longlong param_1)

{
  uint uVar1;
  
  if ((*(longlong *)(param_1 + 0x140) != 0) && (uVar1 = 0, *(int *)(param_1 + 0x128) != 0)) {
    do {
      FUN_1453c6ea0(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar1 * 0xa8);
      FUN_1453c6aa0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar1 * 0xa8);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x128));
  }
  return;
}



// FUNCTION 145123750 FUN_145123750 body=68 status=ok
// SIG undefined FUN_145123750(void)

void FUN_145123750(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (uVar4 = 0, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      lVar1 = uVar4 * 0xa0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      puVar2 = (undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x148));
      *puVar2 = 0;
      puVar2[1] = 0;
    } while (uVar3 < *(byte *)(param_1 + 0x134));
  }
  return;
}



// FUNCTION 1451237a0 FUN_1451237a0 body=2488 status=ok
// SIG undefined FUN_1451237a0(void)

undefined8 FUN_1451237a0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  lVar7 = *(longlong *)(param_1 + 0x158);
  if (((*(int *)(param_1 + 0x1d4) != *(int *)(lVar7 + 0x74)) ||
      (*(float *)(lVar7 + 0x70) != *(float *)(param_1 + 0x1d0))) ||
     (*(float *)(lVar7 + 0x6c) != *(float *)(param_1 + 0x1cc))) {
    FUN_1451235d0(param_1,*(undefined8 *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x74);
    iVar4 = FUN_1451232a0(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar4 != 1) {
      return 1;
    }
    FUN_1451236d0(param_1);
  }
  if (*(char *)(param_1 + 0x1f9) != *(char *)(*(longlong *)(param_1 + 0x158) + 0x99)) {
    FUN_1453c6a60(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x160));
    FUN_1453c6a60(param_1 + 0x100,*(undefined8 *)(param_1 + 0x160));
    FUN_1453c6a60(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x160));
    FUN_145123670(param_1,*(undefined8 *)(param_1 + 0x160));
    lVar7 = *(longlong *)(param_1 + 0x158);
    if ((*(char *)(lVar7 + 0x98) != '\0') &&
       ((((*(int *)(lVar7 + 0x80) != 0 || (*(int *)(lVar7 + 0x88) != 0)) ||
         (*(int *)(lVar7 + 0x90) != 0)) && (*(longlong *)(param_1 + 0x148) != 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160));
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x158) + 0x99);
    *(byte *)(param_1 + 0x138) = -(cVar1 != '\0') & 2;
    if ((*(uint *)(param_2 + 8) & 0xfffff000) == 0x8000) {
      *(undefined1 *)(param_1 + 0x138) = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x160);
      if ((cVar1 != '\0') &&
         (uVar8 = (ulonglong)
                  (*(float *)(*(longlong *)(param_1 + 0x158) + 0x68) * 0.001 *
                  (float)*(uint *)(param_1 + 0x130)), (int)uVar8 != 0)) {
        uVar5 = *(uint *)(param_2 + 8) & 0xf00;
        if (uVar5 == 0x100) {
          if ((*(uint *)(param_2 + 8) & 0x210000) != 0) {
LAB_145123990:
            iVar4 = FUN_1453c6a00(param_1 + 0xe8,uVar3,uVar8 & 0xffffffff);
            if (iVar4 != 1) {
              return 1;
            }
            iVar4 = FUN_1453c6a00(param_1 + 0x100,uVar3,uVar8 & 0xffffffff);
            if (iVar4 != 1) {
              return 1;
            }
          }
        }
        else if (uVar5 == 0x200) goto LAB_145123990;
      }
    }
    FUN_1453c6aa0(param_1 + 0xe8);
    FUN_1453c6aa0(param_1 + 0x100);
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar7 = *(longlong *)(param_1 + 0x158);
      fVar9 = powf(2.0,*(float *)(lVar7 + 100) * 0.01);
      uVar8 = (ulonglong)*(uint *)(lVar7 + 0x5c);
      fVar10 = fVar9 * *(float *)(&PTR_DAT_149c32c50)[uVar8 * 5];
      if (fVar9 * *(float *)(&PTR_DAT_149c32c40)[uVar8 * 5] <=
          fVar9 * *(float *)(&PTR_DAT_149c32c50)[uVar8 * 5]) {
        fVar10 = fVar9 * *(float *)(&PTR_DAT_149c32c40)[uVar8 * 5];
      }
      if (((int)(longlong)(fVar10 * (float)*(uint *)(param_1 + 0x130) * 0.001) != 0) &&
         (iVar4 = FUN_1453c6a00(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x160)), iVar4 != 1)) {
        return 1;
      }
    }
    FUN_1453c6aa0(param_1 + 0xb8);
    plVar2 = *(longlong **)(param_1 + 0x160);
    uVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x158) + 0x5c);
    if (*(char *)(param_1 + 0x138) != '\0') {
      puVar6 = (undefined4 *)
               (**(code **)(*plVar2 + 8))
                         (plVar2,800,
                          "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                          ,0x1b0);
      if (puVar6 == (undefined4 *)0x0) goto LAB_145123be3;
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      puVar6[4] = 0;
      *(undefined8 *)(puVar6 + 0xc5) = 0;
      memset(puVar6 + 5,0,0x100);
      memset(puVar6 + 0x45,0,0x100);
      *(undefined8 *)(puVar6 + 0x85) = 0;
      *(undefined8 *)(puVar6 + 0x87) = 0;
      *(undefined8 *)(puVar6 + 0x89) = 0;
      *(undefined8 *)(puVar6 + 0x8b) = 0;
      *(undefined8 *)(puVar6 + 0x8d) = 0;
      *(undefined8 *)(puVar6 + 0x8f) = 0;
      *(undefined8 *)(puVar6 + 0x91) = 0;
      *(undefined8 *)(puVar6 + 0x93) = 0;
      *(undefined8 *)(puVar6 + 0x95) = 0;
      *(undefined8 *)(puVar6 + 0x97) = 0;
      *(undefined8 *)(puVar6 + 0x99) = 0;
      *(undefined8 *)(puVar6 + 0x9b) = 0;
      *(undefined8 *)(puVar6 + 0x9d) = 0;
      *(undefined8 *)(puVar6 + 0x9f) = 0;
      *(undefined8 *)(puVar6 + 0xa1) = 0;
      *(undefined8 *)(puVar6 + 0xa3) = 0;
      *(undefined8 *)(puVar6 + 0xa5) = 0;
      *(undefined8 *)(puVar6 + 0xa7) = 0;
      *(undefined8 *)(puVar6 + 0xa9) = 0;
      *(undefined8 *)(puVar6 + 0xab) = 0;
      *(undefined8 *)(puVar6 + 0xad) = 0;
      *(undefined8 *)(puVar6 + 0xaf) = 0;
      *(undefined8 *)(puVar6 + 0xb1) = 0;
      *(undefined8 *)(puVar6 + 0xb3) = 0;
      *(undefined8 *)(puVar6 + 0xb5) = 0;
      *(undefined8 *)(puVar6 + 0xb7) = 0;
      *(undefined8 *)(puVar6 + 0xb9) = 0;
      *(undefined8 *)(puVar6 + 0xbb) = 0;
      *(undefined8 *)(puVar6 + 0xbd) = 0;
      *(undefined8 *)(puVar6 + 0xbf) = 0;
      *(undefined8 *)(puVar6 + 0xc1) = 0;
      *(undefined8 *)(puVar6 + 0xc3) = 0;
      *(undefined4 **)(param_1 + 0x150) = puVar6;
      iVar4 = FUN_1453c5f70(puVar6,plVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 100),
                            (&PTR_DAT_149c32c40)[uVar8 * 5],(&PTR_DAT_149c32c50)[uVar8 * 5],
                            *(undefined4 *)(&DAT_149c32c38 + uVar8 * 0x28),
                            *(undefined4 *)(&DAT_149c32c48 + uVar8 * 0x28),
                            *(undefined4 *)(param_1 + 0x130));
      if (iVar4 != 1) {
        return 1;
      }
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_1453c6290();
    }
    lVar7 = *(longlong *)(param_1 + 0x158);
    if ((*(char *)(lVar7 + 0x98) != '\0') &&
       (((*(int *)(lVar7 + 0x80) != 0 || (*(int *)(lVar7 + 0x88) != 0)) ||
        (*(int *)(lVar7 + 0x90) != 0)))) {
      iVar4 = FUN_1451230d0(param_1);
      if (iVar4 != 1) {
        return 1;
      }
      FUN_145123750(param_1);
    }
  }
  if (*(float *)(*(longlong *)(param_1 + 0x158) + 0x68) != *(float *)(param_1 + 0x1c8)) {
    lVar7 = param_1 + 0xe8;
    FUN_1453c6a60(lVar7,*(undefined8 *)(param_1 + 0x160));
    FUN_1453c6a60(param_1 + 0x100,*(undefined8 *)(param_1 + 0x160));
    uVar3 = *(undefined8 *)(param_1 + 0x160);
    if ((*(char *)(param_1 + 0x138) != '\0') &&
       (uVar8 = (ulonglong)
                (*(float *)(*(longlong *)(param_1 + 0x158) + 0x68) * 0.001 *
                (float)*(uint *)(param_1 + 0x130)), (int)uVar8 != 0)) {
      uVar5 = *(uint *)(param_2 + 8) & 0xf00;
      if (uVar5 == 0x100) {
        if ((*(uint *)(param_2 + 8) & 0x210000) != 0) {
LAB_145123cfd:
          iVar4 = FUN_1453c6a00(lVar7,uVar3,uVar8 & 0xffffffff);
          if (iVar4 != 1) {
            return 1;
          }
          iVar4 = FUN_1453c6a00(param_1 + 0x100,uVar3,uVar8 & 0xffffffff);
          if (iVar4 != 1) {
            return 1;
          }
        }
      }
      else if (uVar5 == 0x200) goto LAB_145123cfd;
    }
    FUN_1453c6aa0(lVar7);
    FUN_1453c6aa0(param_1 + 0x100);
  }
  lVar7 = *(longlong *)(param_1 + 0x158);
  if (*(float *)(lVar7 + 0x60) != *(float *)(param_1 + 0x1c0)) {
    FUN_1453c6a60(param_1 + 0xd0,*(undefined8 *)(param_1 + 0x160));
    iVar4 = FUN_145123250(param_1,*(undefined8 *)(param_1 + 0x160));
    if (iVar4 != 1) {
      return 1;
    }
    FUN_1453c6aa0(param_1 + 0xd0);
    lVar7 = *(longlong *)(param_1 + 0x158);
    *(int *)(param_1 + 0x120) =
         (int)(longlong)
              ((*(float *)(lVar7 + 0x60) * 0.001 + *(float *)(lVar7 + 8)) *
              (float)*(uint *)(param_1 + 0x130));
  }
  if ((*(int *)(param_1 + 0x1bc) != *(int *)(lVar7 + 0x5c)) ||
     (*(float *)(lVar7 + 100) != *(float *)(param_1 + 0x1c4))) {
    FUN_1453c6a60(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x160));
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar7 = *(longlong *)(param_1 + 0x158);
      fVar9 = powf(2.0,*(float *)(lVar7 + 100) * 0.01);
      uVar8 = (ulonglong)*(uint *)(lVar7 + 0x5c);
      fVar10 = fVar9 * *(float *)(&PTR_DAT_149c32c50)[uVar8 * 5];
      if (fVar9 * *(float *)(&PTR_DAT_149c32c40)[uVar8 * 5] <=
          fVar9 * *(float *)(&PTR_DAT_149c32c50)[uVar8 * 5]) {
        fVar10 = fVar9 * *(float *)(&PTR_DAT_149c32c40)[uVar8 * 5];
      }
      if (((int)(longlong)(fVar10 * (float)*(uint *)(param_1 + 0x130) * 0.001) != 0) &&
         (iVar4 = FUN_1453c6a00(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x160)), iVar4 != 1)) {
        return 1;
      }
    }
    FUN_1453c6aa0(param_1 + 0xb8);
    plVar2 = *(longlong **)(param_1 + 0x160);
    if ((*(char *)(param_1 + 0x138) != '\0') && (*(longlong *)(param_1 + 0x150) != 0)) {
      FUN_1453c6250(*(longlong *)(param_1 + 0x150),plVar2);
      if (*(longlong *)(param_1 + 0x150) != 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    plVar2 = *(longlong **)(param_1 + 0x160);
    uVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x158) + 0x5c);
    if (*(char *)(param_1 + 0x138) != '\0') {
      puVar6 = (undefined4 *)
               (**(code **)(*plVar2 + 8))
                         (plVar2,800,
                          "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                          ,0x1b0);
      if (puVar6 == (undefined4 *)0x0) {
LAB_145123be3:
        *(undefined8 *)(param_1 + 0x150) = 0;
        return 1;
      }
      *puVar6 = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      puVar6[4] = 0;
      *(undefined8 *)(puVar6 + 0xc5) = 0;
      memset(puVar6 + 5,0,0x100);
      memset(puVar6 + 0x45,0,0x100);
      *(undefined8 *)(puVar6 + 0x85) = 0;
      *(undefined8 *)(puVar6 + 0x87) = 0;
      *(undefined8 *)(puVar6 + 0x89) = 0;
      *(undefined8 *)(puVar6 + 0x8b) = 0;
      *(undefined8 *)(puVar6 + 0x8d) = 0;
      *(undefined8 *)(puVar6 + 0x8f) = 0;
      *(undefined8 *)(puVar6 + 0x91) = 0;
      *(undefined8 *)(puVar6 + 0x93) = 0;
      *(undefined8 *)(puVar6 + 0x95) = 0;
      *(undefined8 *)(puVar6 + 0x97) = 0;
      *(undefined8 *)(puVar6 + 0x99) = 0;
      *(undefined8 *)(puVar6 + 0x9b) = 0;
      *(undefined8 *)(puVar6 + 0x9d) = 0;
      *(undefined8 *)(puVar6 + 0x9f) = 0;
      *(undefined8 *)(puVar6 + 0xa1) = 0;
      *(undefined8 *)(puVar6 + 0xa3) = 0;
      *(undefined8 *)(puVar6 + 0xa5) = 0;
      *(undefined8 *)(puVar6 + 0xa7) = 0;
      *(undefined8 *)(puVar6 + 0xa9) = 0;
      *(undefined8 *)(puVar6 + 0xab) = 0;
      *(undefined8 *)(puVar6 + 0xad) = 0;
      *(undefined8 *)(puVar6 + 0xaf) = 0;
      *(undefined8 *)(puVar6 + 0xb1) = 0;
      *(undefined8 *)(puVar6 + 0xb3) = 0;
      *(undefined8 *)(puVar6 + 0xb5) = 0;
      *(undefined8 *)(puVar6 + 0xb7) = 0;
      *(undefined8 *)(puVar6 + 0xb9) = 0;
      *(undefined8 *)(puVar6 + 0xbb) = 0;
      *(undefined8 *)(puVar6 + 0xbd) = 0;
      *(undefined8 *)(puVar6 + 0xbf) = 0;
      *(undefined8 *)(puVar6 + 0xc1) = 0;
      *(undefined8 *)(puVar6 + 0xc3) = 0;
      *(undefined4 **)(param_1 + 0x150) = puVar6;
      iVar4 = FUN_1453c5f70(puVar6,plVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 100),
                            (&PTR_DAT_149c32c40)[uVar8 * 5],(&PTR_DAT_149c32c50)[uVar8 * 5],
                            *(undefined4 *)(&DAT_149c32c38 + uVar8 * 0x28),
                            *(undefined4 *)(&DAT_149c32c48 + uVar8 * 0x28),
                            *(undefined4 *)(param_1 + 0x130));
      if (iVar4 != 1) {
        return 1;
      }
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_1453c6290();
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x158);
  if (((((*(char *)(param_1 + 0x1f8) != *(char *)(lVar7 + 0x98)) ||
        (*(int *)(param_1 + 0x1e0) != *(int *)(lVar7 + 0x80))) ||
       (*(int *)(param_1 + 0x1e8) != *(int *)(lVar7 + 0x88))) ||
      (*(int *)(param_1 + 0x1f0) != *(int *)(lVar7 + 0x90))) &&
     ((*(char *)(lVar7 + 0x98) != '\0' &&
      (((*(int *)(lVar7 + 0x80) != 0 || (*(int *)(lVar7 + 0x88) != 0)) ||
       (*(int *)(lVar7 + 0x90) != 0)))))) {
    if (*(longlong *)(param_1 + 0x148) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))();
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    iVar4 = FUN_1451230d0(param_1);
    if (iVar4 != 1) {
      return 1;
    }
    FUN_145123750(param_1);
  }
  if (*(int *)(param_1 + 0x1e4) != *(int *)(*(longlong *)(param_1 + 0x158) + 0x84)) {
    FUN_145122c80(param_1);
  }
  if (*(int *)(param_1 + 0x1ec) != *(int *)(*(longlong *)(param_1 + 0x158) + 0x8c)) {
    FUN_145122df0(param_1);
  }
  if (*(int *)(param_1 + 500) != *(int *)(*(longlong *)(param_1 + 0x158) + 0x94)) {
    FUN_145122f60(param_1);
  }
  lVar7 = *(longlong *)(param_1 + 0x158);
  uVar3 = *(undefined8 *)(lVar7 + 100);
  *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(lVar7 + 0x5c);
  *(undefined8 *)(param_1 + 0x1c4) = uVar3;
  uVar3 = *(undefined8 *)(lVar7 + 0x74);
  *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(lVar7 + 0x6c);
  *(undefined8 *)(param_1 + 0x1d4) = uVar3;
  uVar3 = *(undefined8 *)(lVar7 + 0x84);
  *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(lVar7 + 0x7c);
  *(undefined8 *)(param_1 + 0x1e4) = uVar3;
  uVar3 = *(undefined8 *)(lVar7 + 0x94);
  *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(lVar7 + 0x8c);
  *(undefined8 *)(param_1 + 500) = uVar3;
  *(undefined1 *)(lVar7 + 0x9a) = 0;
  return 0;
}



// FUNCTION 145124160 FUN_145124160 body=525 status=ok
// SIG undefined FUN_145124160(void)

void FUN_145124160(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  
  plVar1 = (longlong *)(param_1 + 0x158);
  lVar2 = *plVar1;
  if ((*(float *)(param_1 + 0x168) != *(float *)(lVar2 + 8)) ||
     (*(float *)(param_1 + 0x16c) != *(float *)(lVar2 + 0xc))) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      do {
        FUN_1453c7e30((ulonglong)uVar3 * 0xa8 + *(longlong *)(param_1 + 0x140),
                      *(undefined4 *)(*plVar1 + 8),*(undefined4 *)(*plVar1 + 0xc),
                      *(undefined4 *)(param_1 + 0x130));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x128));
    }
    lVar2 = *plVar1;
    *(int *)(param_1 + 0x120) =
         (int)(longlong)
              ((*(float *)(lVar2 + 0x60) * 0.001 + *(float *)(lVar2 + 8)) *
              (float)*(uint *)(param_1 + 0x130));
  }
  if (*(float *)(lVar2 + 0x10) != *(float *)(param_1 + 0x170)) {
    fVar4 = *(float *)(lVar2 + 0x10) * 0.0247212 - 1.85409;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (0.61803 <= fVar4) {
      fVar4 = 0.61803;
    }
    *(float *)(param_1 + 0x1c) = fVar4;
    fVar4 = *(float *)(lVar2 + 0x10) * 0.0247212 - 1.23606;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (0.61803 <= fVar4) {
      fVar4 = 0.61803;
    }
    *(float *)(param_1 + 0x34) = fVar4;
    fVar4 = *(float *)(lVar2 + 0x10) * 0.0247212 - 0.61803;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (0.61803 <= fVar4) {
      fVar4 = 0.61803;
    }
    *(float *)(param_1 + 0x4c) = fVar4;
    fVar4 = *(float *)(lVar2 + 0x10) * 0.0247212;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (0.61803 <= fVar4) {
      fVar4 = 0.61803;
    }
    *(float *)(param_1 + 100) = fVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x158);
  if (((*(float *)(param_1 + 0x178) != *(float *)(lVar2 + 0x18)) ||
      (*(float *)(param_1 + 0x17c) != *(float *)(lVar2 + 0x1c))) ||
     (*(float *)(param_1 + 0x180) != *(float *)(lVar2 + 0x20))) {
    FUN_145122c80(param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x158);
  if (((*(float *)(param_1 + 0x184) != *(float *)(lVar2 + 0x24)) ||
      (*(float *)(param_1 + 0x188) != *(float *)(lVar2 + 0x28))) ||
     (*(float *)(param_1 + 0x18c) != *(float *)(lVar2 + 0x2c))) {
    FUN_145122df0(param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x158);
  if (((*(float *)(param_1 + 400) != *(float *)(lVar2 + 0x30)) ||
      (*(float *)(param_1 + 0x194) != *(float *)(lVar2 + 0x34))) ||
     (*(float *)(param_1 + 0x198) != *(float *)(lVar2 + 0x38))) {
    FUN_145122f60(param_1);
    lVar2 = *(longlong *)(param_1 + 0x158);
  }
  *(undefined1 *)(lVar2 + 0x58) = 0;
  return;
}



// FUNCTION 145124370 FUN_145124370 body=199 status=ok
// SIG undefined FUN_145124370(void)

void FUN_145124370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined8 local_res8;
  
  FUN_1453c7f80(param_2,param_4,param_5,param_3,
                *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x78),
                *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x7c));
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (bVar2 = 0, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      lVar1 = (ulonglong)bVar2 * 0xa0 + *(longlong *)(param_1 + 0x148);
      if (*(int *)(lVar1 + 0x90) == 3) {
        local_res8 = param_3;
        FUN_145129ce0(&local_res8,param_4,0,lVar1 + 0x10,lVar1);
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)(param_1 + 0x134));
  }
  return;
}



// FUNCTION 145124440 FUN_145124440 body=151 status=ok
// SIG undefined FUN_145124440(void)

void FUN_145124440(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 local_res8;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
     (bVar2 = 0, *(char *)(param_1 + 0x134) != '\0')) {
    do {
      lVar1 = (ulonglong)bVar2 * 0xa0 + *(longlong *)(param_1 + 0x148);
      if (*(int *)(lVar1 + 0x90) == 2) {
        local_res8 = param_2;
        FUN_145129ce0(&local_res8,param_3,0,lVar1 + 0x10,lVar1);
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)(param_1 + 0x134));
  }
  return;
}



// FUNCTION 1451244e0 FUN_1451244e0 body=2141 status=ok
// SIG undefined FUN_1451244e0(void)

undefined4 FUN_1451244e0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
  ulonglong uVar2;
  void *_Src;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_res8;
  ulonglong local_e8;
  longlong local_e0 [20];
  
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x400,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x3fa);
  if (_Src != (void *)0x0) {
    uVar7 = 0;
    _Dst = (void *)((longlong)_Src + 0x400);
    local_e0[0] = (longlong)_Src + 0x800;
    fVar13 = 0.0;
    fVar15 = 0.0;
    local_e0[1] = (longlong)_Src + 0xc00;
    fVar12 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
    uVar9 = (longlong)_Src + 0x1400;
    uVar2 = (longlong)_Src + 0x1000;
    if (*(char *)(param_1 + 0x138) == '\0') {
      uVar9 = uVar7;
      uVar2 = uVar7;
    }
    fVar11 = 1.0 - fVar12 * fVar12;
    if (0.0 < fVar11) {
      fVar13 = SQRT(fVar11);
    }
    fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar11 = 1.0 - fVar14 * fVar14;
    if (0.0 < fVar11) {
      fVar15 = SQRT(fVar11);
    }
    local_res8 = 0;
    for (uVar3 = (uint)*(ushort *)((longlong)param_2 + 0x12); uVar3 != 0; uVar3 = uVar3 - uVar1) {
      uVar1 = 0x100;
      if (uVar3 < 0x100) {
        uVar1 = uVar3;
      }
      FUN_145124370(param_1,param_2,_Src,uVar1,uVar7);
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy(_Dst,_Src,(ulonglong)(uVar1 * 4));
      }
      else {
        FUN_1453c6b80(param_1 + 0xd0,_Src,_Dst,uVar1);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        FUN_1453c6ac0((int *)(param_1 + 0xb8),_Src,uVar1);
      }
      if (((*(char *)(param_1 + 0x138) != '\0') &&
          (FUN_1453c62b0(*(undefined8 *)(param_1 + 0x150),_Src,uVar2,uVar9,uVar1),
          *(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0')) &&
         (bVar5 = 0, *(char *)(param_1 + 0x134) != '\0')) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x148) + (ulonglong)bVar5 * 0xa0;
          if (*(int *)(lVar4 + 0x90) == 1) {
            local_e8 = uVar2;
            FUN_145129ce0(&local_e8,uVar1,0,lVar4 + 0x10,lVar4);
            lVar4 = *(longlong *)(param_1 + 0x148) + 0xa0 + (ulonglong)bVar5 * 0xa0;
            local_e8 = uVar9;
            FUN_145129ce0(&local_e8,uVar1,0,lVar4 + 0x10,lVar4);
            bVar5 = bVar5 + 1;
          }
          bVar5 = bVar5 + 1;
        } while (bVar5 < *(byte *)(param_1 + 0x134));
      }
      lVar4 = param_1 + 8;
      lVar8 = 4;
      do {
        FUN_1453c6800(lVar4,_Dst,uVar1);
        lVar4 = lVar4 + 0x18;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      FUN_145124440(param_1,_Dst,uVar1);
      memset((void *)((longlong)_Src + 0x800),0,0x800);
      uVar10 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          FUN_1453c6ac0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar10 * 0xa8,_Dst,uVar1)
          ;
          FUN_1453c6ee0(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar10 * 0xa8,_Dst,
                        local_e0[uVar10 & 1],uVar1);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x128));
      }
      fVar11 = *(float *)(param_1 + 0x124);
      plVar6 = local_e0;
      lVar4 = param_1 + 0x70;
      lVar8 = 2;
      do {
        FUN_1453c5e50(lVar4,*plVar6,uVar1,fVar11 * 1.4142135);
        lVar4 = lVar4 + 0xc;
        plVar6 = plVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar7 = 0;
      uVar10 = *(uint *)(param_2 + 1) >> 0xc;
      if ((uVar10 & 1) != 0) {
        lVar4 = *param_2 + (ulonglong)local_res8 * 4;
        fVar11 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        FUN_1453c8200(lVar4,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      *(float *)(param_1 + 0x1b4) * fVar12,fVar11 * fVar14,
                      *(float *)(param_1 + 0x1b4) * fVar13,fVar11 * fVar15,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar11 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50);
          FUN_1453c8200(lVar4,uVar2,uVar9,0x3f800000,0x3f800000,*(float *)(param_1 + 0x1b0) * fVar12
                        ,fVar11 * fVar14,*(float *)(param_1 + 0x1b0) * fVar13,fVar11 * fVar15,uVar1)
          ;
        }
        uVar7 = 1;
      }
      if ((uVar10 & 2) != 0) {
        lVar4 = *param_2 + (*(ushort *)(param_2 + 2) * uVar7 + (ulonglong)local_res8) * 4;
        fVar11 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        FUN_1453c8200(lVar4,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      *(float *)(param_1 + 0x1b4) * fVar13,fVar11 * fVar15,
                      *(float *)(param_1 + 0x1b4) * fVar12,fVar11 * fVar14,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar11 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50);
          FUN_1453c8200(lVar4,uVar2,uVar9,0x3f800000,0x3f800000,*(float *)(param_1 + 0x1b0) * fVar13
                        ,fVar11 * fVar15,*(float *)(param_1 + 0x1b0) * fVar12,fVar11 * fVar14,uVar1)
          ;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      if ((uVar10 & 4) != 0) {
        fVar12 = *(float *)(param_1 + 0x1b4) * 0.707106;
        lVar4 = *param_2 + (*(ushort *)(param_2 + 2) * uVar7 + (ulonglong)local_res8) * 4;
        fVar13 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x54) * 0.707106;
        FUN_1453c8200(lVar4,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),fVar12,fVar13,fVar12,
                      fVar13,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar13 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) * 0.707106;
          fVar12 = *(float *)(param_1 + 0x1b0) * 0.707106;
          FUN_1453c8200(lVar4,uVar2,uVar9,0x3f800000,0x3f800000,fVar12,fVar13,fVar12,fVar13,uVar1);
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      if ((uVar10 & 8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x158);
        fVar12 = *(float *)(param_1 + 0x1a8) * *(float *)(param_1 + 0x1b4) * 0.707106;
        fVar13 = *(float *)(lVar4 + 0x54) * *(float *)(lVar4 + 0x48) * 0.707106;
        FUN_1453c8200(*param_2 + (*(ushort *)(param_2 + 2) * uVar7 + (ulonglong)local_res8) * 4,
                      (longlong)_Src + 0x800,(longlong)_Src + 0xc00,*(undefined4 *)(param_1 + 0x1ac)
                      ,*(undefined4 *)(lVar4 + 0x4c),fVar12,fVar13,fVar12,fVar13,uVar1);
      }
      lVar4 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar4 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar4 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar4 + 0x48);
      local_res8 = local_res8 + uVar1;
      uVar7 = (ulonglong)local_res8;
      fVar12 = fVar14;
      fVar13 = fVar15;
    }
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
    return 1;
  }
  return 0x34;
}



// FUNCTION 145124d40 FUN_145124d40 body=3055 status=ok
// SIG undefined FUN_145124d40(void)

undefined4 FUN_145124d40(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res8;
  uint local_res20;
  longlong in_stack_fffffffffffffe88;
  undefined4 uVar20;
  undefined8 uVar19;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_118 [27];
  
  uVar5 = *(uint *)(param_2 + 1) >> 0xc;
  uVar2 = uVar5 & 0x210;
  uVar8 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x158) + 0x99) != '\0') {
    uVar8 = -(uint)(uVar2 != 0) & 2;
  }
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            (ulonglong)(*(byte *)(param_1 + 0x138) + 6 + uVar8) << 10,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x4d5);
  if (_Src == (void *)0x0) {
    return 0x34;
  }
  _Dst = (void *)((longlong)_Src + 0x400);
  local_118[5] = (longlong)_Src + 0x800;
  local_118[6] = (longlong)_Src + 0xc00;
  local_118[7] = (longlong)_Src + 0x1000;
  local_118[8] = (longlong)_Src + 0x1400;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    lVar10 = 0;
    local_138 = 0;
  }
  else {
    local_138 = (longlong)_Src + 0x1c00;
    lVar10 = (longlong)_Src + 0x1800;
    if (uVar8 == 2) {
      local_148 = (longlong)_Src + 0x2400;
      local_140 = (longlong)_Src + 0x2000;
      goto LAB_145124ede;
    }
  }
  local_148 = 0;
  local_140 = 0;
LAB_145124ede:
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar15 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
  fVar13 = 1.0 - fVar15 * fVar15;
  if (0.0 < fVar13) {
    fVar18 = SQRT(fVar13);
  }
  fVar16 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
  fVar13 = 1.0 - fVar16 * fVar16;
  if (0.0 < fVar13) {
    fVar17 = SQRT(fVar13);
  }
  if (uVar2 == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x3c) = 0x3f800000;
    *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x40) = 0x3f800000;
  }
  local_res8 = 0;
  local_res20 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  if (local_res20 != 0) {
    do {
      in_stack_fffffffffffffe88 =
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),local_res8);
      uVar1 = 0x100;
      if (local_res20 < 0x100) {
        uVar1 = local_res20;
      }
      FUN_145124370(param_1,param_2,_Src,uVar1,in_stack_fffffffffffffe88);
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy(_Dst,_Src,(ulonglong)(uVar1 * 4));
      }
      else {
        FUN_1453c6b80(param_1 + 0xd0,_Src,_Dst,uVar1);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        FUN_1453c6ac0(param_1 + 0xb8,_Src,uVar1);
      }
      lVar6 = local_148;
      lVar9 = local_140;
      if (*(char *)(param_1 + 0x138) != '\0') {
        in_stack_fffffffffffffe88 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),uVar1);
        FUN_1453c62b0(*(undefined8 *)(param_1 + 0x150),_Src,lVar10,local_138,
                      in_stack_fffffffffffffe88);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar4 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar3 = *(longlong *)(param_1 + 0x148) + (ulonglong)bVar4 * 0xa0;
            if (*(int *)(lVar3 + 0x90) == 1) {
              local_118[0] = lVar10;
              FUN_145129ce0(local_118,uVar1,0,lVar3 + 0x10,lVar3);
              in_stack_fffffffffffffe88 =
                   *(longlong *)(param_1 + 0x148) + 0xa0 + (ulonglong)bVar4 * 0xa0;
              local_118[0] = local_138;
              FUN_145129ce0(local_118,uVar1,0,in_stack_fffffffffffffe88 + 0x10,
                            in_stack_fffffffffffffe88);
              bVar4 = bVar4 + 1;
            }
            bVar4 = bVar4 + 1;
          } while (bVar4 < *(byte *)(param_1 + 0x134));
        }
        if ((uVar8 == 2) && (lVar6 = local_138, lVar9 = lVar10, *(int *)(param_1 + 0xe8) != 0)) {
          FUN_1453c6b80((int *)(param_1 + 0xe8),lVar10,local_140,uVar1);
          FUN_1453c6b80(param_1 + 0x100,local_138,local_148,uVar1);
          lVar6 = local_148;
          lVar9 = local_140;
        }
      }
      local_140 = lVar9;
      local_148 = lVar6;
      lVar6 = param_1 + 8;
      lVar9 = 4;
      do {
        FUN_1453c6800(lVar6,_Dst,uVar1);
        lVar6 = lVar6 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      FUN_145124440(param_1,_Dst,uVar1);
      memset((void *)((longlong)_Src + 0x800),0,0x1000);
      uVar11 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
          FUN_1453c6ac0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar11 * 0xa8,_Dst,uVar1)
          ;
          in_stack_fffffffffffffe88 = CONCAT44(uVar20,uVar1);
          FUN_1453c7380(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar11 * 0xa8,_Dst,
                        local_118[(ulonglong)(uVar11 & 1) + 5],
                        local_118[(ulonglong)((uVar11 & 1) + 2) + 5],in_stack_fffffffffffffe88);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_1 + 0x128));
      }
      fVar13 = *(float *)(param_1 + 0x124);
      plVar7 = local_118 + 5;
      lVar6 = param_1 + 0x70;
      lVar9 = 4;
      do {
        FUN_1453c5e50(lVar6,*plVar7,uVar1,fVar13 * 1.4142135);
        lVar6 = lVar6 + 0xc;
        plVar7 = plVar7 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar11 = 0;
      if ((uVar5 & 1) != 0) {
        fVar13 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        lVar6 = *param_2 + (ulonglong)local_res8 * 4;
        lVar9 = *(longlong *)(param_1 + 0x158);
        fVar14 = *(float *)(lVar9 + 0x54) * *(float *)(lVar9 + 0x3c);
        in_stack_fffffffffffffe88 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),
                      *(undefined4 *)(lVar9 + 0x4c));
        FUN_1453c8200(lVar6,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar13 * fVar15,
                      fVar14 * fVar16,fVar13 * fVar18,fVar14 * fVar17,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar13 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          in_stack_fffffffffffffe88 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),0x3f800000);
          FUN_1453c8200(lVar6,lVar10,local_138,0x3f800000,in_stack_fffffffffffffe88,fVar13 * fVar15,
                        fVar14 * fVar16,fVar13 * fVar18,fVar14 * fVar17,uVar1);
        }
        uVar11 = 1;
      }
      if ((uVar5 & 2) != 0) {
        fVar13 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
        lVar6 = *param_2 +
                ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar11 + (ulonglong)local_res8) *
                4;
        lVar9 = *(longlong *)(param_1 + 0x158);
        fVar14 = *(float *)(lVar9 + 0x54) * *(float *)(lVar9 + 0x3c);
        in_stack_fffffffffffffe88 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),
                      *(undefined4 *)(lVar9 + 0x4c));
        FUN_1453c8200(lVar6,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar13 * fVar18,
                      fVar14 * fVar17,fVar13 * fVar15,fVar14 * fVar16,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar13 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          in_stack_fffffffffffffe88 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),0x3f800000);
          FUN_1453c8200(lVar6,lVar10,local_138,0x3f800000,in_stack_fffffffffffffe88,fVar13 * fVar18,
                        fVar14 * fVar17,fVar13 * fVar15,fVar14 * fVar16,uVar1);
        }
        uVar11 = uVar11 + 1;
      }
      uVar12 = (ulonglong)local_res8;
      if ((uVar5 & 4) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x158);
        fVar13 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a4) * 0.707106;
        fVar14 = *(float *)(lVar6 + 0x54) * *(float *)(lVar6 + 0x44) * 0.707106;
        in_stack_fffffffffffffe88 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),
                      *(undefined4 *)(lVar6 + 0x4c));
        FUN_1453c8200(*param_2 +
                      ((ulonglong)uVar11 * (ulonglong)*(ushort *)(param_2 + 2) + uVar12) * 4,
                      (longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar13,fVar14,
                      fVar13,fVar14,uVar1);
        uVar11 = uVar11 + 1;
      }
      if (uVar2 != 0) {
        fVar13 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar6 = *param_2 + ((ulonglong)uVar11 * (ulonglong)*(ushort *)(param_2 + 2) + uVar12) * 4;
        lVar9 = *(longlong *)(param_1 + 0x158);
        fVar14 = *(float *)(lVar9 + 0x54) * *(float *)(lVar9 + 0x40);
        uVar19 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),
                          *(undefined4 *)(lVar9 + 0x4c));
        FUN_1453c8200(lVar6,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                      *(undefined4 *)(param_1 + 0x1ac),uVar19,fVar13 * fVar15,fVar14 * fVar16,
                      fVar13 * fVar18,fVar14 * fVar17,uVar1);
        uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar13 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0);
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          uVar19 = CONCAT44(uVar20,0x3f800000);
          FUN_1453c8200(lVar6,local_140,local_148,0x3f800000,uVar19,fVar13 * fVar15,fVar14 * fVar16,
                        fVar13 * fVar18,fVar14 * fVar17,uVar1);
          uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
        }
        fVar13 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar6 = *param_2 +
                ((ulonglong)(uVar11 + 1) * (ulonglong)*(ushort *)(param_2 + 2) + uVar12) * 4;
        lVar9 = *(longlong *)(param_1 + 0x158);
        fVar14 = *(float *)(lVar9 + 0x54) * *(float *)(lVar9 + 0x40);
        in_stack_fffffffffffffe88 = CONCAT44(uVar20,*(undefined4 *)(lVar9 + 0x4c));
        FUN_1453c8200(lVar6,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar13 * fVar18,
                      fVar14 * fVar17,fVar13 * fVar15,fVar14 * fVar16,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar13 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0);
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          in_stack_fffffffffffffe88 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),0x3f800000);
          FUN_1453c8200(lVar6,local_140,local_148,0x3f800000,in_stack_fffffffffffffe88,
                        fVar13 * fVar18,fVar14 * fVar17,fVar13 * fVar15,fVar14 * fVar16,uVar1);
        }
        uVar11 = uVar11 + 2;
      }
      if ((uVar5 & 8) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x158);
        fVar15 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a8) * 0.707106;
        fVar18 = *(float *)(lVar6 + 0x54) * *(float *)(lVar6 + 0x48) * 0.707106;
        in_stack_fffffffffffffe88 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),
                      *(undefined4 *)(lVar6 + 0x4c));
        FUN_1453c8200(*param_2 +
                      ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar11 +
                      (ulonglong)local_res8) * 4,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar15,fVar18,
                      fVar15,fVar18,uVar1);
      }
      lVar6 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar6 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar6 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar6 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar6 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar6 + 0x40);
      local_res8 = local_res8 + uVar1;
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar6 + 0x48);
      local_res20 = local_res20 - uVar1;
      fVar15 = fVar16;
      fVar18 = fVar17;
    } while (local_res20 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
  return 1;
}



// FUNCTION 145125940 FUN_145125940 body=2893 status=ok
// SIG undefined FUN_145125940(void)

undefined4 FUN_145125940(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  uint local_res18;
  undefined8 in_stack_fffffffffffffe88;
  undefined8 uVar18;
  undefined4 uVar19;
  longlong local_148;
  longlong local_140;
  longlong local_128;
  longlong local_120 [4];
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x800,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x5f3);
  if (_Src != (void *)0x0) {
    _Dst = (void *)((longlong)_Src + 0x400);
    local_120[0] = (longlong)_Src + 0x800;
    local_120[1] = (longlong)_Src + 0xc00;
    local_120[2] = (longlong)_Src + 0x1000;
    local_120[3] = (longlong)_Src + 0x1400;
    local_100 = (longlong)_Src + 0x1800;
    local_f8 = (longlong)_Src + 0x1c00;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    if (*(char *)(param_1 + 0x138) == '\0') {
      lVar10 = 0;
      lVar8 = 0;
      local_148 = 0;
      local_140 = 0;
    }
    else {
      local_148 = (longlong)_Src + 0x2c00;
      lVar8 = (longlong)_Src + 0x2000;
      lVar10 = (longlong)_Src + 0x2400;
      local_140 = (longlong)_Src + 0x2800;
    }
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar14 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
    fVar12 = 1.0 - fVar14 * fVar14;
    if (0.0 < fVar12) {
      fVar17 = SQRT(fVar12);
    }
    fVar15 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
    fVar12 = 1.0 - fVar15 * fVar15;
    if (0.0 < fVar12) {
      fVar16 = SQRT(fVar12);
    }
    local_res8 = 0;
    local_res18 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    if (local_res18 != 0) {
      do {
        lVar4 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),local_res8);
        uVar2 = 0x100;
        if (local_res18 < 0x100) {
          uVar2 = local_res18;
        }
        FUN_145124370(param_1,param_2,_Src,uVar2,lVar4);
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(_Dst,_Src,(ulonglong)(uVar2 * 4));
        }
        else {
          FUN_1453c6b80(param_1 + 0xd0,_Src,_Dst,uVar2);
        }
        if (*(int *)(param_1 + 0xb8) != 0) {
          FUN_1453c6ac0(param_1 + 0xb8,_Src,uVar2);
        }
        lVar3 = local_148;
        lVar7 = local_140;
        if (*(char *)(param_1 + 0x138) != '\0') {
          lVar4 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),uVar2);
          FUN_1453c62b0(*(undefined8 *)(param_1 + 0x150),_Src,lVar8,lVar10,lVar4);
          if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar5 = 0, *(char *)(param_1 + 0x134) != '\0')) {
            do {
              lVar3 = *(longlong *)(param_1 + 0x148) + (ulonglong)bVar5 * 0xa0;
              if (*(int *)(lVar3 + 0x90) == 1) {
                local_128 = lVar8;
                FUN_145129ce0(&local_128,uVar2,0,lVar3 + 0x10,lVar3);
                lVar4 = *(longlong *)(param_1 + 0x148) + 0xa0 + (ulonglong)bVar5 * 0xa0;
                local_128 = lVar10;
                FUN_145129ce0(&local_128,uVar2,0,lVar4 + 0x10,lVar4);
                bVar5 = bVar5 + 1;
              }
              bVar5 = bVar5 + 1;
            } while (bVar5 < *(byte *)(param_1 + 0x134));
          }
          lVar3 = lVar10;
          lVar7 = lVar8;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN_1453c6b80((int *)(param_1 + 0xe8),lVar8,local_140,uVar2);
            FUN_1453c6b80(param_1 + 0x100,lVar10,local_148,uVar2);
            lVar3 = local_148;
            lVar7 = local_140;
          }
        }
        local_140 = lVar7;
        local_148 = lVar3;
        lVar3 = param_1 + 8;
        lVar7 = 4;
        do {
          FUN_1453c6800(lVar3,_Dst,uVar2);
          lVar3 = lVar3 + 0x18;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        FUN_145124440(param_1,_Dst,uVar2);
        memset((void *)((longlong)_Src + 0x800),0,0x1800);
        uVar9 = 0;
        if (*(int *)(param_1 + 0x128) != 0) {
          do {
            FUN_1453c6ac0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar9 * 0xa8,_Dst,uVar2
                         );
            lVar4 = local_120[(uVar9 & 1) + 4];
            FUN_1453c78a0(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar9 * 0xa8,_Dst,
                          local_120[uVar9 & 1],local_120[(uVar9 & 1) + 2],lVar4,uVar2);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x128));
        }
        fVar12 = *(float *)(param_1 + 0x124);
        plVar6 = local_120;
        lVar3 = param_1 + 0x70;
        lVar7 = 6;
        do {
          FUN_1453c5e50(lVar3,*plVar6,uVar2,fVar12 * 1.4142135);
          lVar3 = lVar3 + 0xc;
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        fVar12 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b4);
        uVar11 = (ulonglong)local_res8;
        lVar3 = *param_2 + uVar11 * 4;
        lVar7 = *(longlong *)(param_1 + 0x158);
        fVar13 = *(float *)(lVar7 + 0x54) * *(float *)(lVar7 + 0x3c);
        uVar18 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),*(undefined4 *)(lVar7 + 0x4c));
        FUN_1453c8200(lVar3,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar12 * fVar14,fVar13 * fVar15,
                      fVar12 * fVar17,fVar13 * fVar16,uVar2);
        uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar12 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
          fVar13 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          uVar18 = CONCAT44(uVar19,0x3f800000);
          FUN_1453c8200(lVar3,lVar8,lVar10,0x3f800000,uVar18,fVar12 * fVar14,fVar13 * fVar15,
                        fVar12 * fVar17,fVar13 * fVar16,uVar2);
          uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        }
        fVar12 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b4);
        lVar4 = *param_2 + (*(ushort *)(param_2 + 2) + uVar11) * 4;
        lVar3 = *(longlong *)(param_1 + 0x158);
        fVar13 = *(float *)(lVar3 + 0x54) * *(float *)(lVar3 + 0x3c);
        uVar18 = CONCAT44(uVar19,*(undefined4 *)(lVar3 + 0x4c));
        FUN_1453c8200(lVar4,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar12 * fVar17,fVar13 * fVar16,
                      fVar12 * fVar14,fVar13 * fVar15,uVar2);
        uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar12 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
          fVar13 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          uVar18 = CONCAT44(uVar19,0x3f800000);
          FUN_1453c8200(lVar4,lVar8,lVar10,0x3f800000,uVar18,fVar12 * fVar17,fVar13 * fVar16,
                        fVar12 * fVar14,fVar13 * fVar15,uVar2);
          uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        }
        lVar4 = 2;
        if ((uVar1 >> 0xc & 4) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x158);
          fVar12 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a4) * 0.707106;
          fVar13 = *(float *)(lVar4 + 0x54) * *(float *)(lVar4 + 0x44) * 0.707106;
          uVar18 = CONCAT44(uVar19,*(undefined4 *)(lVar4 + 0x4c));
          FUN_1453c8200(*param_2 + (uVar11 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,
                        (longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                        *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar12,fVar13,fVar12,fVar13,uVar2);
          uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
          lVar4 = 3;
        }
        fVar12 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar3 = *param_2 + (lVar4 * (ulonglong)*(ushort *)(param_2 + 2) + uVar11) * 4;
        lVar7 = *(longlong *)(param_1 + 0x158);
        fVar13 = *(float *)(lVar7 + 0x54) * *(float *)(lVar7 + 0x40);
        uVar18 = CONCAT44(uVar19,*(undefined4 *)(lVar7 + 0x4c));
        FUN_1453c8200(lVar3,(longlong)_Src + 0x1800,(longlong)_Src + 0x1c00,
                      *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar12 * fVar14,fVar13 * fVar15,
                      fVar12 * fVar17,fVar13 * fVar16,uVar2);
        uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar12 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar13 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          uVar18 = CONCAT44(uVar19,0x3f800000);
          FUN_1453c8200(lVar3,local_140,local_148,0x3f800000,uVar18,fVar12 * fVar14,fVar13 * fVar15,
                        fVar12 * fVar17,fVar13 * fVar16,uVar2);
          uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        }
        fVar12 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a0);
        lVar3 = *param_2 +
                ((ulonglong)((int)lVar4 + 1) * (ulonglong)*(ushort *)(param_2 + 2) + uVar11) * 4;
        lVar7 = *(longlong *)(param_1 + 0x158);
        fVar13 = *(float *)(lVar7 + 0x54) * *(float *)(lVar7 + 0x40);
        in_stack_fffffffffffffe88 = CONCAT44(uVar19,*(undefined4 *)(lVar7 + 0x4c));
        FUN_1453c8200(lVar3,(longlong)_Src + 0x1800,(longlong)_Src + 0x1c00,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar12 * fVar17,
                      fVar13 * fVar16,fVar12 * fVar14,fVar13 * fVar15,uVar2);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar12 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
          fVar13 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          in_stack_fffffffffffffe88 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),0x3f800000);
          FUN_1453c8200(lVar3,local_140,local_148,0x3f800000,in_stack_fffffffffffffe88,
                        fVar12 * fVar17,fVar13 * fVar16,fVar12 * fVar14,fVar13 * fVar15,uVar2);
        }
        if ((uVar1 >> 0xc & 8) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x158);
          fVar14 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a8) * 0.707106;
          fVar17 = *(float *)(lVar3 + 0x54) * *(float *)(lVar3 + 0x48) * 0.707106;
          in_stack_fffffffffffffe88 =
               CONCAT44((int)((ulonglong)in_stack_fffffffffffffe88 >> 0x20),
                        *(undefined4 *)(lVar3 + 0x4c));
          FUN_1453c8200(*param_2 +
                        ((ulonglong)((int)lVar4 + 2) * (ulonglong)*(ushort *)(param_2 + 2) + uVar11)
                        * 4,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                        *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe88,fVar14,fVar17,
                        fVar14,fVar17,uVar2);
        }
        lVar4 = *(longlong *)(param_1 + 0x158);
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar4 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar4 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar4 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar4 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar4 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar4 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar4 + 0x48);
        local_res8 = local_res8 + uVar2;
        local_res18 = local_res18 - uVar2;
        fVar14 = fVar15;
        fVar17 = fVar16;
      } while (local_res18 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
    return 1;
  }
  return 0x34;
}



// FUNCTION 1451264a0 FUN_1451264a0 body=3702 status=ok
// SIG undefined FUN_1451264a0(void)

undefined4 FUN_1451264a0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res8;
  uint local_res10;
  uint local_res20;
  undefined8 in_stack_fffffffffffffe58;
  undefined8 uVar26;
  undefined4 uVar27;
  longlong local_178;
  longlong local_170;
  longlong local_160;
  longlong local_158;
  uint local_150;
  uint local_14c;
  uint local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118 [4];
  longlong local_f8;
  longlong local_f0;
  
  uVar2 = *(uint *)(param_2 + 1);
  local_14c = uVar2 - (uVar2 >> 0xf & 1) & 0xff;
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x800,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x70c);
  if (_Src == (void *)0x0) {
    return 0x34;
  }
  local_118[0] = (longlong)_Src + 0x800;
  local_118[1] = (longlong)_Src + 0xc00;
  local_118[2] = (longlong)_Src + 0x1000;
  local_118[3] = (longlong)_Src + 0x1400;
  local_f8 = (longlong)_Src + 0x1800;
  local_f0 = (longlong)_Src + 0x1c00;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    lVar8 = 0;
    local_158 = 0;
    local_178 = 0;
    local_170 = 0;
  }
  else {
    local_178 = (longlong)_Src + 0x2c00;
    local_158 = (longlong)_Src + 0x2000;
    lVar8 = (longlong)_Src + 0x2400;
    local_170 = (longlong)_Src + 0x2800;
  }
  fVar25 = 0.0;
  local_res8 = 0.0;
  fVar19 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
  fVar16 = 1.0 - fVar19 * fVar19;
  if (0.0 < fVar16) {
    fVar25 = SQRT(fVar16);
  }
  fVar18 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
  fVar16 = 1.0 - fVar18 * fVar18;
  if (0.0 < fVar16) {
    local_res8 = SQRT(fVar16);
  }
  local_res10 = 0;
  local_res20 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  if (local_res20 != 0) {
    local_150 = uVar2 & 0x4000;
    local_148 = uVar2 & 0x8000;
    do {
      lVar9 = local_158;
      lVar4 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe58 >> 0x20),local_res10);
      uVar2 = 0x100;
      if (local_res20 < 0x100) {
        uVar2 = local_res20;
      }
      FUN_145124370(param_1,param_2,_Src,uVar2,lVar4);
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy((void *)((longlong)_Src + 0x400),_Src,(ulonglong)(uVar2 * 4));
      }
      else {
        FUN_1453c6b80(param_1 + 0xd0,_Src,(void *)((longlong)_Src + 0x400),uVar2);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        FUN_1453c6ac0(param_1 + 0xb8,_Src,uVar2);
      }
      lVar3 = local_178;
      lVar13 = local_170;
      if (*(char *)(param_1 + 0x138) != '\0') {
        lVar4 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),uVar2);
        FUN_1453c62b0(*(undefined8 *)(param_1 + 0x150),_Src,lVar9,lVar8,lVar4);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar6 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar3 = *(longlong *)(param_1 + 0x148) + (ulonglong)bVar6 * 0xa0;
            if (*(int *)(lVar3 + 0x90) == 1) {
              local_160 = lVar9;
              FUN_145129ce0(&local_160,uVar2,0,lVar3 + 0x10,lVar3);
              lVar4 = *(longlong *)(param_1 + 0x148) + 0xa0 + (ulonglong)bVar6 * 0xa0;
              local_160 = lVar8;
              FUN_145129ce0(&local_160,uVar2,0,lVar4 + 0x10,lVar4);
              bVar6 = bVar6 + 1;
            }
            bVar6 = bVar6 + 1;
          } while (bVar6 < *(byte *)(param_1 + 0x134));
        }
        lVar3 = lVar8;
        lVar13 = lVar9;
        if (*(int *)(param_1 + 0xe8) != 0) {
          FUN_1453c6b80((int *)(param_1 + 0xe8),lVar9,local_170,uVar2);
          FUN_1453c6b80(param_1 + 0x100,lVar8,local_178,uVar2);
          lVar3 = local_178;
          lVar13 = local_170;
        }
      }
      local_170 = lVar13;
      local_178 = lVar3;
      lVar13 = (longlong)_Src + 0x400;
      lVar9 = param_1 + 8;
      lVar3 = 4;
      do {
        FUN_1453c6800(lVar9,lVar13,uVar2);
        lVar9 = lVar9 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      FUN_145124440(param_1,lVar13,uVar2);
      memset((void *)((longlong)_Src + 0x800),0,0x1800);
      uVar14 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          FUN_1453c6ac0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar14 * 0xa8,lVar13,
                        uVar2);
          lVar4 = local_118[(uVar14 & 1) + 4];
          FUN_1453c78a0(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar14 * 0xa8,lVar13,
                        local_118[uVar14 & 1],local_118[(uVar14 & 1) + 2],lVar4,uVar2);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(param_1 + 0x128));
      }
      fVar16 = *(float *)(param_1 + 0x124);
      plVar10 = local_118;
      lVar9 = param_1 + 0x70;
      lVar3 = 6;
      do {
        FUN_1453c5e50(lVar9,*plVar10,uVar2,fVar16 * 1.4142135);
        lVar9 = lVar9 + 0xc;
        plVar10 = plVar10 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar9 = *(longlong *)(param_1 + 0x158);
      fVar16 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
      fVar17 = *(float *)(lVar9 + 0x54) * *(float *)(lVar9 + 0x3c);
      uVar15 = (ulonglong)local_res10;
      local_160 = uVar15 * 4;
      lVar3 = *param_2 + local_160;
      uVar26 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),*(undefined4 *)(lVar9 + 0x4c));
      FUN_1453c8200(lVar3,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar26,fVar16 * fVar19,fVar17 * fVar18,
                    fVar16 * fVar25,fVar17 * local_res8,uVar2);
      lVar4 = local_158;
      uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar16 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
        fVar17 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar26 = CONCAT44(uVar27,0x3f800000);
        FUN_1453c8200(lVar3,local_158,lVar8,0x3f800000,uVar26,fVar16 * fVar19,fVar17 * fVar18,
                      fVar16 * fVar25,fVar17 * local_res8,uVar2);
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      }
      fVar16 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x19c);
      lVar9 = *param_2 + (*(ushort *)(param_2 + 2) + uVar15) * 4;
      lVar3 = *(longlong *)(param_1 + 0x158);
      fVar17 = *(float *)(lVar3 + 0x54) * *(float *)(lVar3 + 0x3c);
      uVar26 = CONCAT44(uVar27,*(undefined4 *)(lVar3 + 0x4c));
      FUN_1453c8200(lVar9,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar26,fVar16 * fVar25,fVar17 * local_res8,
                    fVar16 * fVar19,fVar17 * fVar18,uVar2);
      uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar16 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x19c);
        fVar17 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar26 = CONCAT44(uVar27,0x3f800000);
        FUN_1453c8200(lVar9,lVar4,lVar8,0x3f800000,uVar26,fVar16 * fVar25,fVar17 * local_res8,
                      fVar16 * fVar19,fVar17 * fVar18,uVar2);
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      }
      lVar4 = 2;
      if (local_150 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x158);
        fVar16 = *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x1a4) * 0.707106;
        fVar17 = *(float *)(lVar4 + 0x54) * *(float *)(lVar4 + 0x44) * 0.707106;
        uVar26 = CONCAT44(uVar27,*(undefined4 *)(lVar4 + 0x4c));
        FUN_1453c8200(*param_2 + (uVar15 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,
                      (longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                      *(undefined4 *)(param_1 + 0x1ac),uVar26,fVar16,fVar17,fVar16,fVar17,uVar2);
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
        lVar4 = 3;
      }
      lVar9 = *(longlong *)(param_1 + 0x158);
      fVar21 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b4);
      fVar16 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0);
      iVar7 = (int)lVar4;
      fVar22 = *(float *)(lVar9 + 0x40) * *(float *)(lVar9 + 0x54);
      fVar17 = *(float *)(lVar9 + 0x40) * *(float *)(lVar9 + 0x50);
      fVar23 = fVar22 * local_res8;
      fVar22 = fVar22 * fVar18;
      fVar24 = fVar21 * fVar19;
      fVar19 = fVar16 * fVar19;
      fVar21 = fVar21 * fVar25;
      fVar20 = fVar17 * fVar18;
      lVar4 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * lVar4 + uVar15) * 4;
      fVar17 = fVar17 * local_res8;
      uVar26 = CONCAT44(uVar27,*(undefined4 *)(lVar9 + 0x4c));
      fVar16 = fVar16 * fVar25;
      FUN_1453c8200(lVar4,(longlong)_Src + 0x1800,(longlong)_Src + 0x1c00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar26,fVar24,fVar22,fVar21,fVar23,uVar2);
      uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        uVar26 = CONCAT44(uVar27,0x3f800000);
        FUN_1453c8200(lVar4,local_170,local_178,0x3f800000,uVar26,fVar19,fVar20,fVar16,fVar17,uVar2)
        ;
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      }
      lVar4 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(iVar7 + 1) + uVar15) * 4
      ;
      uVar26 = CONCAT44(uVar27,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar4,(longlong)_Src + 0x1800,(longlong)_Src + 0x1c00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar26,fVar21,fVar23,fVar24,fVar22,uVar2);
      uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        uVar26 = CONCAT44(uVar27,0x3f800000);
        FUN_1453c8200(lVar4,local_170,local_178,0x3f800000,uVar26,fVar16,fVar17,fVar19,fVar20,uVar2)
        ;
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      }
      lVar4 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(iVar7 + 2) + uVar15) * 4
      ;
      uVar26 = CONCAT44(uVar27,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar4,(longlong)_Src + 0x1800,(longlong)_Src + 0x1c00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar26,fVar24,fVar22,fVar21,fVar23,uVar2);
      uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        uVar26 = CONCAT44(uVar27,0x3f800000);
        FUN_1453c8200(lVar4,local_170,local_178,0x3f800000,uVar26,fVar19,fVar20,fVar16,fVar17,uVar2)
        ;
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
      }
      lVar4 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)(iVar7 + 3) + uVar15) * 4
      ;
      in_stack_fffffffffffffe58 =
           CONCAT44(uVar27,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar4,(longlong)_Src + 0x1800,(longlong)_Src + 0x1c00,
                    *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe58,fVar21,fVar23,fVar24,
                    fVar22,uVar2);
      if (*(char *)(param_1 + 0x138) != '\0') {
        in_stack_fffffffffffffe58 =
             CONCAT44((int)((ulonglong)in_stack_fffffffffffffe58 >> 0x20),0x3f800000);
        FUN_1453c8200(lVar4,local_170,local_178,0x3f800000,in_stack_fffffffffffffe58,fVar16,fVar17,
                      fVar19,fVar20,uVar2);
      }
      uVar14 = iVar7 + 4;
      if (uVar14 < local_14c) {
        uVar12 = (ulonglong)uVar14;
        uVar11 = (ulonglong)(local_14c - uVar14);
        do {
          lVar4 = *param_2;
          fVar19 = *(float *)(param_1 + 0x1ac);
          fVar25 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x4c);
          lVar9 = *(ushort *)(param_2 + 2) * uVar12 + uVar15;
          pfVar5 = (float *)(lVar4 + lVar9 * 4);
          if (fVar25 == fVar19) {
            FUN_145129870(pfVar5,fVar19,uVar2);
          }
          else {
            pfVar1 = (float *)(lVar4 + ((ulonglong)uVar2 + lVar9) * 4);
            if (3 < uVar2) {
              fVar21 = (fVar25 - fVar19) / (float)(uVar2 & 0xfffffffc);
              fVar22 = fVar21 * 4.0;
              fVar20 = fVar21 + fVar19 + fVar21;
              fVar16 = fVar19;
              fVar17 = fVar21 + fVar19;
              fVar21 = fVar20 + fVar21;
              for (; pfVar5 < (float *)(lVar4 + ((ulonglong)(uVar2 & 0xfffffffc) + lVar9) * 4);
                  pfVar5 = pfVar5 + 4) {
                *pfVar5 = *pfVar5 * fVar16;
                pfVar5[1] = pfVar5[1] * fVar17;
                pfVar5[2] = pfVar5[2] * fVar20;
                pfVar5[3] = pfVar5[3] * fVar21;
                fVar16 = fVar16 + fVar22;
                fVar17 = fVar17 + fVar22;
                fVar20 = fVar20 + fVar22;
                fVar21 = fVar21 + fVar22;
              }
            }
            if (pfVar5 < pfVar1) {
              fVar25 = (fVar25 - fVar19) / (float)uVar2;
              if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
                do {
                  *pfVar5 = fVar19 * *pfVar5;
                  fVar16 = fVar19 + fVar25 + fVar25;
                  pfVar5[1] = (fVar19 + fVar25) * pfVar5[1];
                  fVar17 = fVar16 + fVar25;
                  pfVar5[2] = fVar16 * pfVar5[2];
                  fVar19 = fVar17 + fVar25;
                  pfVar5[3] = fVar17 * pfVar5[3];
                  pfVar5 = pfVar5 + 4;
                } while (pfVar5 < pfVar1 + -3);
                if (pfVar1 <= pfVar5) goto LAB_145127148;
              }
              do {
                *pfVar5 = fVar19 * *pfVar5;
                pfVar5 = pfVar5 + 1;
                fVar19 = fVar19 + fVar25;
              } while (pfVar5 < pfVar1);
            }
          }
LAB_145127148:
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
      if (local_148 != 0) {
        lVar9 = FUN_145121520(param_2);
        lVar4 = *(longlong *)(param_1 + 0x158);
        fVar19 = *(float *)(param_1 + 0x1a8) * *(float *)(param_1 + 0x1b4) * 0.707106;
        fVar25 = *(float *)(lVar4 + 0x54) * *(float *)(lVar4 + 0x48) * 0.707106;
        in_stack_fffffffffffffe58 = CONCAT44(uVar27,*(undefined4 *)(lVar4 + 0x4c));
        FUN_1453c8200(lVar9 + local_160,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                      *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe58,fVar19,fVar25,
                      fVar19,fVar25,uVar2);
      }
      lVar4 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar4 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar4 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar4 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar4 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar4 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar4 + 0x48);
      local_res10 = local_res10 + uVar2;
      local_res20 = local_res20 - uVar2;
      fVar19 = fVar18;
      fVar25 = local_res8;
    } while (local_res20 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
  return 1;
}



// FUNCTION 145127320 FUN_145127320 body=2756 status=ok
// SIG undefined FUN_145127320(void)

undefined4 FUN_145127320(longlong param_1,longlong *param_2)

{
  void *_Dst;
  uint uVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  uint local_res18;
  longlong local_res20;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar19;
  undefined8 uVar18;
  longlong local_138;
  longlong local_128;
  longlong local_120 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            ((ulonglong)*(byte *)(param_1 + 0x138) + 3) * 0x800,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x86d);
  if (_Src != (void *)0x0) {
    _Dst = (void *)((longlong)_Src + 0x400);
    local_120[0] = (longlong)_Src + 0x800;
    local_120[1] = (longlong)_Src + 0xc00;
    local_120[2] = (longlong)_Src + 0x1000;
    local_120[3] = (longlong)_Src + 0x1400;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (*(char *)(param_1 + 0x138) == '\0') {
      lVar10 = 0;
      lVar8 = 0;
      local_res20 = 0;
      local_138 = 0;
    }
    else {
      local_138 = (longlong)_Src + 0x2000;
      lVar8 = (longlong)_Src + 0x1800;
      local_res20 = (longlong)_Src + 0x2400;
      lVar10 = (longlong)_Src + 0x1c00;
    }
    fVar15 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14);
    fVar17 = fVar15 * 0.0027777778;
    local_res8 = 0;
    fVar15 = fVar15 * 0.003928371;
    local_res18 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    fVar16 = SQRT(fVar17);
    if (local_res18 != 0) {
      fVar13 = *(float *)(param_1 + 0x174) * 0.003928371;
      fVar12 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
      do {
        lVar3 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),local_res8);
        uVar1 = 0x100;
        if (local_res18 < 0x100) {
          uVar1 = local_res18;
        }
        FUN_145124370(param_1,param_2,_Src,uVar1,lVar3);
        if (*(int *)(param_1 + 0xd0) == 0) {
          memcpy(_Dst,_Src,(ulonglong)(uVar1 * 4));
        }
        else {
          FUN_1453c6b80(param_1 + 0xd0,_Src,_Dst,uVar1);
        }
        if (*(int *)(param_1 + 0xb8) != 0) {
          FUN_1453c6ac0((int *)(param_1 + 0xb8),_Src,uVar1);
        }
        lVar2 = local_res20;
        lVar6 = local_138;
        if (*(char *)(param_1 + 0x138) != '\0') {
          lVar3 = CONCAT44((int)((ulonglong)lVar3 >> 0x20),uVar1);
          FUN_1453c62b0(*(undefined8 *)(param_1 + 0x150),_Src,lVar8,lVar10,lVar3);
          if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
             (bVar4 = 0, *(char *)(param_1 + 0x134) != '\0')) {
            do {
              lVar2 = *(longlong *)(param_1 + 0x148) + (ulonglong)bVar4 * 0xa0;
              if (*(int *)(lVar2 + 0x90) == 1) {
                local_128 = lVar8;
                FUN_145129ce0(&local_128,uVar1,0,lVar2 + 0x10,lVar2);
                lVar3 = *(longlong *)(param_1 + 0x148) + 0xa0 + (ulonglong)bVar4 * 0xa0;
                local_128 = lVar10;
                FUN_145129ce0(&local_128,uVar1,0,lVar3 + 0x10,lVar3);
                bVar4 = bVar4 + 1;
              }
              bVar4 = bVar4 + 1;
            } while (bVar4 < *(byte *)(param_1 + 0x134));
          }
          lVar2 = lVar10;
          lVar6 = lVar8;
          if (*(int *)(param_1 + 0xe8) != 0) {
            FUN_1453c6b80((int *)(param_1 + 0xe8),lVar8,local_138,uVar1);
            FUN_1453c6b80(param_1 + 0x100,lVar10,local_res20,uVar1);
            lVar2 = local_res20;
            lVar6 = local_138;
          }
        }
        local_138 = lVar6;
        local_res20 = lVar2;
        lVar2 = param_1 + 8;
        lVar6 = 4;
        do {
          FUN_1453c6800(lVar2,_Dst,uVar1);
          lVar2 = lVar2 + 0x18;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        FUN_145124440(param_1,_Dst,uVar1);
        memset((void *)((longlong)_Src + 0x800),0,0x1000);
        uVar9 = 0;
        if (*(int *)(param_1 + 0x128) != 0) {
          do {
            uVar19 = (undefined4)((ulonglong)lVar3 >> 0x20);
            FUN_1453c6ac0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar9 * 0xa8,_Dst,uVar1
                         );
            lVar3 = CONCAT44(uVar19,uVar1);
            FUN_1453c7380(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar9 * 0xa8,_Dst,
                          local_120[uVar9 & 1],local_120[(uVar9 & 1) + 2],lVar3);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x128));
        }
        fVar11 = *(float *)(param_1 + 0x124);
        plVar5 = local_120;
        lVar2 = param_1 + 0x70;
        lVar6 = 4;
        do {
          FUN_1453c5e50(lVar2,*plVar5,uVar1,fVar11 * 1.4142135);
          lVar2 = lVar2 + 0xc;
          plVar5 = plVar5 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uVar7 = (ulonglong)local_res8;
        lVar2 = *param_2 + uVar7 * 4;
        uVar19 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
        uVar18 = CONCAT44((int)((ulonglong)lVar3 >> 0x20),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
        FUN_1453c8200(lVar2,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                      *(undefined4 *)(param_1 + 0x1ac),uVar18,*(undefined4 *)(param_1 + 0x1b4),
                      uVar19,*(undefined4 *)(param_1 + 0x1b4),uVar19,uVar1);
        uVar19 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x3f800000);
        FUN_1453c8200(lVar2,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,0x3f800000,
                      in_stack_fffffffffffffe98,*(undefined4 *)(param_1 + 0x1b4),uVar19,
                      *(undefined4 *)(param_1 + 0x1b4),uVar19,uVar1);
        if (*(char *)(param_1 + 0x138) != '\0') {
          fVar11 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
          uVar18 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),0x3f800000);
          FUN_1453c8200(lVar2,lVar8,lVar10,0x3f800000,uVar18,fVar11,fVar14,fVar11,fVar14,uVar1);
          fVar11 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0);
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
          in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x3f800000);
          FUN_1453c8200(lVar2,local_138,local_res20,0x3f800000,in_stack_fffffffffffffe98,fVar11,
                        fVar14,fVar11,fVar14,uVar1);
        }
        if (1 < *(byte *)(param_2 + 1)) {
          fVar11 = fVar12 * *(float *)(param_1 + 0x1b4);
          lVar3 = *param_2 + (*(ushort *)(param_2 + 2) + uVar7) * 4;
          fVar14 = fVar16 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          uVar18 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
          FUN_1453c8200(lVar3,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                        *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar11,fVar14,-fVar11,-fVar14,uVar1)
          ;
          uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar11 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar13;
            fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar15;
            uVar18 = CONCAT44(uVar19,0x3f800000);
            FUN_1453c8200(lVar3,lVar8,lVar10,0x3f800000,uVar18,fVar11,fVar14,-fVar11,-fVar14,uVar1);
            fVar11 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0) * fVar13;
            fVar14 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar15;
            uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x3f800000);
            FUN_1453c8200(lVar3,local_138,local_res20,0x3f800000,uVar18,fVar11,fVar14,-fVar11,
                          -fVar14,uVar1);
            uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
          }
          fVar11 = fVar12 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar16 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          uVar18 = CONCAT44(uVar19,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
          FUN_1453c8200(*param_2 + (uVar7 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,
                        (longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                        *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar11,fVar14,-fVar11,-fVar14,uVar1)
          ;
          fVar11 = fVar12 * *(float *)(param_1 + 0x1b4) * fVar12;
          lVar3 = *param_2 + (uVar7 + (ulonglong)*(ushort *)(param_2 + 2) * 3) * 4;
          fVar14 = fVar17 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
          FUN_1453c8200(lVar3,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                        *(undefined4 *)(param_1 + 0x1ac),uVar18,fVar11,fVar14,fVar11,fVar14,uVar1);
          fVar11 = -(fVar17 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54));
          fVar12 = -(fVar12 * *(float *)(param_1 + 0x1b4) * fVar12);
          in_stack_fffffffffffffe98 =
               CONCAT44((int)((ulonglong)uVar18 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
          FUN_1453c8200(lVar3,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                        *(undefined4 *)(param_1 + 0x1ac),in_stack_fffffffffffffe98,fVar12,fVar11,
                        fVar12,fVar11,uVar1);
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar12 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar13;
            fVar11 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                     *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar15;
            uVar18 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),0x3f800000);
            FUN_1453c8200(lVar3,lVar8,lVar10,0x3f800000,uVar18,fVar12,fVar11,fVar12,fVar11,uVar1);
            fVar13 = -(*(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x1b0) * fVar13);
            fVar12 = -(*(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                       *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar15);
            in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x3f800000);
            FUN_1453c8200(lVar3,local_138,local_res20,0x3f800000,in_stack_fffffffffffffe98,fVar13,
                          fVar12,fVar13,fVar12,uVar1);
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x158);
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar3 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar3 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar3 + 0x54);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar3 + 0x3c);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar3 + 0x44);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar3 + 0x40);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar3 + 0x48);
        local_res8 = local_res8 + uVar1;
        local_res18 = local_res18 - uVar1;
        fVar13 = fVar15;
        fVar12 = fVar16;
      } while (local_res18 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
    return 1;
  }
  return 0x34;
}



// FUNCTION 145127df0 FUN_145127df0 body=4625 status=ok
// SIG undefined FUN_145127df0(void)

undefined4 FUN_145127df0(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8;
  uint local_res18;
  undefined8 in_stack_fffffffffffffe98;
  undefined8 uVar21;
  undefined4 uVar22;
  longlong local_138;
  longlong local_130;
  longlong local_120;
  longlong local_118 [4];
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                           (*(longlong **)(param_1 + 0x160),
                            ((ulonglong)*(byte *)(param_1 + 0x138) + 4) * 0x800,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                            ,0x998);
  if (_Src == (void *)0x0) {
    return 0x34;
  }
  local_118[0] = (longlong)_Src + 0x800;
  local_118[1] = (longlong)_Src + 0xc00;
  local_118[2] = (longlong)_Src + 0x1000;
  local_118[3] = (longlong)_Src + 0x1400;
  local_f8 = (longlong)_Src + 0x1800;
  local_f0 = (longlong)_Src + 0x1c00;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    lVar7 = 0;
    lVar12 = 0;
    local_138 = 0;
    local_130 = 0;
  }
  else {
    local_130 = (longlong)_Src + 0x2800;
    lVar12 = (longlong)_Src + 0x2000;
    local_138 = (longlong)_Src + 0x2c00;
    lVar7 = (longlong)_Src + 0x2400;
  }
  fVar19 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x14);
  fVar20 = fVar19 * 0.0027777778;
  fVar19 = fVar19 * 0.003928371;
  local_res8 = 0;
  local_res18 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  fVar18 = SQRT(fVar20);
  if (local_res18 != 0) {
    fVar17 = SQRT(*(float *)(param_1 + 0x174) * 0.0027777778);
    fVar15 = *(float *)(param_1 + 0x174) * 0.003928371;
    do {
      lVar4 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe98 >> 0x20),local_res8);
      uVar2 = 0x100;
      if (local_res18 < 0x100) {
        uVar2 = local_res18;
      }
      FUN_145124370(param_1,param_2,_Src,uVar2,lVar4);
      if (*(int *)(param_1 + 0xd0) == 0) {
        memcpy((void *)((longlong)_Src + 0x400),_Src,(ulonglong)(uVar2 * 4));
      }
      else {
        FUN_1453c6b80(param_1 + 0xd0,_Src,(void *)((longlong)_Src + 0x400),uVar2);
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        FUN_1453c6ac0((int *)(param_1 + 0xb8),_Src,uVar2);
      }
      lVar3 = local_138;
      lVar9 = local_130;
      if (*(char *)(param_1 + 0x138) != '\0') {
        lVar4 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),uVar2);
        FUN_1453c62b0(*(undefined8 *)(param_1 + 0x150),_Src,lVar12,lVar7,lVar4);
        if ((*(char *)(*(longlong *)(param_1 + 0x158) + 0x98) != '\0') &&
           (bVar5 = 0, *(char *)(param_1 + 0x134) != '\0')) {
          do {
            lVar3 = *(longlong *)(param_1 + 0x148) + (ulonglong)bVar5 * 0xa0;
            if (*(int *)(lVar3 + 0x90) == 1) {
              local_120 = lVar12;
              FUN_145129ce0(&local_120,uVar2,0,lVar3 + 0x10,lVar3);
              lVar4 = *(longlong *)(param_1 + 0x148) + 0xa0 + (ulonglong)bVar5 * 0xa0;
              local_120 = lVar7;
              FUN_145129ce0(&local_120,uVar2,0,lVar4 + 0x10,lVar4);
              bVar5 = bVar5 + 1;
            }
            bVar5 = bVar5 + 1;
          } while (bVar5 < *(byte *)(param_1 + 0x134));
        }
        lVar3 = lVar7;
        lVar9 = lVar12;
        if (*(int *)(param_1 + 0xe8) != 0) {
          FUN_1453c6b80((int *)(param_1 + 0xe8),lVar12,local_130,uVar2);
          FUN_1453c6b80(param_1 + 0x100,lVar7,local_138,uVar2);
          lVar3 = local_138;
          lVar9 = local_130;
        }
      }
      local_130 = lVar9;
      local_138 = lVar3;
      lVar10 = (longlong)_Src + 0x400;
      lVar3 = param_1 + 8;
      lVar9 = 4;
      do {
        FUN_1453c6800(lVar3,lVar10,uVar2);
        lVar3 = lVar3 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      FUN_145124440(param_1,lVar10,uVar2);
      memset((void *)((longlong)_Src + 0x800),0,0x1800);
      uVar11 = 0;
      if (*(int *)(param_1 + 0x128) != 0) {
        do {
          FUN_1453c6ac0(*(longlong *)(param_1 + 0x140) + 0x90 + (ulonglong)uVar11 * 0xa8,lVar10,
                        uVar2);
          lVar4 = local_118[(uVar11 & 1) + 4];
          FUN_1453c78a0(*(longlong *)(param_1 + 0x140) + (ulonglong)uVar11 * 0xa8,lVar10,
                        local_118[uVar11 & 1],local_118[(uVar11 & 1) + 2],lVar4,uVar2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_1 + 0x128));
      }
      fVar14 = *(float *)(param_1 + 0x124);
      plVar8 = local_118;
      lVar3 = param_1 + 0x70;
      lVar9 = 6;
      do {
        FUN_1453c5e50(lVar3,*plVar8,uVar2,fVar14 * 1.4142135);
        lVar3 = lVar3 + 0xc;
        plVar8 = plVar8 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar13 = (ulonglong)local_res8;
      lVar3 = *param_2 + uVar13 * 4;
      uVar22 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar21 = CONCAT44((int)((ulonglong)lVar4 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar3,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar21,*(undefined4 *)(param_1 + 0x1b4),uVar22,
                    *(undefined4 *)(param_1 + 0x1b4),uVar22,uVar2);
      uVar22 = *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),0x3f800000);
      FUN_1453c8200(lVar3,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,0x3f800000,uVar21,
                    *(undefined4 *)(param_1 + 0x1b4),uVar22,*(undefined4 *)(param_1 + 0x1b4),uVar22,
                    uVar2);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar14 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0);
        fVar16 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c);
        uVar21 = CONCAT44(uVar22,0x3f800000);
        FUN_1453c8200(lVar3,lVar12,lVar7,0x3f800000,uVar21,fVar14,fVar16,fVar14,fVar16,uVar2);
        fVar14 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0);
        fVar16 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40);
        uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),0x3f800000);
        FUN_1453c8200(lVar3,local_130,local_138,0x3f800000,uVar21,fVar14,fVar16,fVar14,fVar16,uVar2)
        ;
        uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      }
      fVar14 = fVar17 * *(float *)(param_1 + 0x1b4);
      lVar4 = *param_2 + (*(ushort *)(param_2 + 2) + uVar13) * 4;
      fVar16 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar21 = CONCAT44(uVar22,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar4,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar21,fVar14,fVar16,-fVar14,-fVar16,uVar2);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar14 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar15;
        fVar16 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar19;
        uVar21 = CONCAT44(uVar22,0x3f800000);
        FUN_1453c8200(lVar4,lVar12,lVar7,0x3f800000,uVar21,fVar14,fVar16,-fVar14,-fVar16,uVar2);
        fVar14 = *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0) * fVar15;
        fVar16 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar19;
        uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),0x3f800000);
        FUN_1453c8200(lVar4,local_130,local_138,0x3f800000,uVar21,fVar14,fVar16,-fVar14,-fVar16,
                      uVar2);
        uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      }
      fVar14 = fVar17 * *(float *)(param_1 + 0x1b4);
      fVar16 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar21 = CONCAT44(uVar22,*(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,
                    (longlong)_Src + 0x1000,(longlong)_Src + 0x1400,*(undefined4 *)(param_1 + 0x1ac)
                    ,uVar21,fVar14,fVar16,-fVar14,-fVar16,uVar2);
      fVar14 = fVar17 * *(float *)(param_1 + 0x1b4) * fVar17;
      lVar4 = *param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 3) * 4;
      fVar16 = fVar20 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar4,(longlong)_Src + 0x800,(longlong)_Src + 0xc00,
                    *(undefined4 *)(param_1 + 0x1ac),uVar21,fVar14,fVar16,fVar14,fVar16,uVar2);
      fVar16 = -(fVar20 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54));
      fVar14 = -(fVar17 * *(float *)(param_1 + 0x1b4) * fVar17);
      uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c));
      FUN_1453c8200(lVar4,(longlong)_Src + 0x1000,(longlong)_Src + 0x1400,
                    *(undefined4 *)(param_1 + 0x1ac),uVar21,fVar14,fVar16,fVar14,fVar16,uVar2);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar14 = *(float *)(param_1 + 0x19c) * *(float *)(param_1 + 0x1b0) * fVar15;
        fVar16 = *(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                 *(float *)(*(longlong *)(param_1 + 0x158) + 0x3c) * fVar19;
        uVar21 = CONCAT44(uVar22,0x3f800000);
        FUN_1453c8200(lVar4,lVar12,lVar7,0x3f800000,uVar21,fVar14,fVar16,fVar14,fVar16,uVar2);
        fVar15 = -(*(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x1a0) * fVar15);
        fVar14 = -(*(float *)(*(longlong *)(param_1 + 0x158) + 0x50) *
                   *(float *)(*(longlong *)(param_1 + 0x158) + 0x40) * fVar19);
        uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),0x3f800000);
        FUN_1453c8200(lVar4,local_130,local_138,0x3f800000,uVar21,fVar15,fVar14,fVar15,fVar14,uVar2)
        ;
        uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      }
      fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
      fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      uVar21 = CONCAT44(uVar22,fVar15 + fVar15);
      FUN_1453baf30(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 4) * 4,
                    (longlong)_Src + 0x1800,*(undefined4 *)(param_1 + 0x1ac),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),uVar21,fVar14 + fVar14,
                    uVar2);
      fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
      fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
      in_stack_fffffffffffffe98 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),fVar15 + fVar15);
      FUN_1453baf30(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 5) * 4,
                    (longlong)_Src + 0x1c00,*(undefined4 *)(param_1 + 0x1ac),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),in_stack_fffffffffffffe98
                    ,fVar14 + fVar14,uVar2);
      iVar6 = DAT_14c72f5e8;
      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
      pvVar1 = (void *)(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 6) * 4);
      if (DAT_14c72f5e8 == 0) {
        memset(pvVar1,0,(ulonglong)uVar2 << 2);
      }
      else {
        if (DAT_14c72f5e8 != 1) {
          if (DAT_14c72f5e8 != 2) goto LAB_145128938;
          FUN_1453c6800(*(undefined8 *)(param_1 + 0x68),(longlong)_Src + 0x800,uVar2);
        }
        fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
        fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
        FUN_1453baf30(pvVar1,(longlong)_Src + 0x800,*(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
        iVar6 = DAT_14c72f5e8;
      }
LAB_145128938:
      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
      pvVar1 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 7 + uVar13) * 4);
      if (iVar6 == 0) {
        memset(pvVar1,0,(ulonglong)uVar2 << 2);
      }
      else {
        if (iVar6 != 1) {
          if (iVar6 != 2) goto LAB_1451289d8;
          FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0x18,(longlong)_Src + 0xc00,uVar2);
        }
        fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
        fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
        FUN_1453baf30(pvVar1,(longlong)_Src + 0xc00,*(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
        iVar6 = DAT_14c72f5e8;
      }
LAB_1451289d8:
      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
      pvVar1 = (void *)(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 8) * 4);
      if (iVar6 == 0) {
        memset(pvVar1,0,(ulonglong)uVar2 << 2);
      }
      else {
        if (iVar6 != 1) {
          if (iVar6 != 2) goto LAB_145128a75;
          FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0x30,(longlong)_Src + 0x1000,uVar2);
        }
        fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
        fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
        in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
        FUN_1453baf30(pvVar1,(longlong)_Src + 0x1000,*(undefined4 *)(param_1 + 0x1ac),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                      in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
        iVar6 = DAT_14c72f5e8;
      }
LAB_145128a75:
      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
      if (9 < *(byte *)(param_2 + 1)) {
        pvVar1 = (void *)(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 9) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128b20;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0x48,(longlong)_Src + 0x1400,uVar2);
          }
          fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0x1400,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
          iVar6 = DAT_14c72f5e8;
        }
LAB_145128b20:
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        pvVar1 = (void *)(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 10) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128bc1;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0x60,(longlong)_Src + 0x1800,uVar2);
          }
          fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0x1800,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
          iVar6 = DAT_14c72f5e8;
        }
LAB_145128bc1:
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        pvVar1 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xb + uVar13) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128c61;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0x78,(longlong)_Src + 0x1c00,uVar2);
          }
          fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0x1c00,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
          iVar6 = DAT_14c72f5e8;
        }
LAB_145128c61:
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        pvVar1 = (void *)(*param_2 + (uVar13 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128d05;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0x90,(longlong)_Src + 0x800,uVar2);
          }
          fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0x800,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
          iVar6 = DAT_14c72f5e8;
        }
LAB_145128d05:
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        pvVar1 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xd + uVar13) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128da8;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0xa8,(longlong)_Src + 0xc00,uVar2);
          }
          fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0xc00,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
          iVar6 = DAT_14c72f5e8;
        }
LAB_145128da8:
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        pvVar1 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xe + uVar13) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128e4b;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0xc0,(longlong)_Src + 0x1000,uVar2);
          }
          fVar15 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar14 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar15 + fVar15);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0x1000,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar14 + fVar14,uVar2);
          iVar6 = DAT_14c72f5e8;
        }
LAB_145128e4b:
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
        pvVar1 = (void *)(*param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * 0xf + uVar13) * 4);
        if (iVar6 == 0) {
          memset(pvVar1,0,(ulonglong)uVar2 << 2);
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) goto LAB_145128ee5;
            FUN_1453c6800(*(longlong *)(param_1 + 0x68) + 0xd8,(longlong)_Src + 0x1400,uVar2);
          }
          fVar17 = fVar17 * *(float *)(param_1 + 0x1b4);
          fVar15 = fVar18 * *(float *)(*(longlong *)(param_1 + 0x158) + 0x54);
          in_stack_fffffffffffffe98 = CONCAT44(uVar22,fVar17 + fVar17);
          FUN_1453baf30(pvVar1,(longlong)_Src + 0x1400,*(undefined4 *)(param_1 + 0x1ac),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x158) + 0x4c),
                        in_stack_fffffffffffffe98,fVar15 + fVar15,uVar2);
        }
      }
LAB_145128ee5:
      lVar4 = *(longlong *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar4 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar4 + 0x50);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar4 + 0x3c);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar4 + 0x44);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar4 + 0x40);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar4 + 0x48);
      local_res8 = local_res8 + uVar2;
      local_res18 = local_res18 - uVar2;
      fVar17 = fVar18;
      fVar15 = fVar19;
    } while (local_res18 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x10))(*(longlong **)(param_1 + 0x160),_Src);
  return 1;
}



// FUNCTION 145129010 FUN_145129010 body=43 status=ok
// SIG undefined FUN_145129010(void)

undefined8 * FUN_145129010(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 145129060 FUN_145129060 body=695 status=ok
// SIG undefined FUN_145129060(void)

void FUN_145129060(float param_1,float param_2,uint param_3,float *param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = 0x6b4cc7;
  uVar9 = 0;
  fVar12 = (param_4[1] - *param_4) * 0.01 * param_1 + *param_4;
  fVar13 = ((param_4[4] - param_4[3]) * 0.01 * param_2 + param_4[3]) * fVar12;
  fVar12 = (fVar12 - fVar13) + fVar12;
  if (param_3 < 4) {
    uVar5 = uVar9;
    if (param_3 == 0) goto LAB_1451292ee;
  }
  else {
    fVar11 = fVar12 - fVar13;
    uVar7 = 2;
    pfVar6 = (float *)((longlong)param_5 + 8);
    fVar14 = 1.0 / (float)(param_3 - 1);
    uVar5 = uVar9;
    do {
      uVar4 = uVar7 - 1;
      uVar8 = (int)uVar5 + 4;
      uVar9 = (ulonglong)uVar8;
      uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
      uVar3 = uVar2 * 0xbb38435 + 0x3619636b;
      fVar10 = (float)uVar5 * fVar11 * fVar14 + fVar13;
      uVar1 = uVar7 + 1;
      pfVar6[-2] = (float)uVar2 * fVar10 * param_4[2] * 2.3283064e-12 + fVar10;
      uVar5 = (ulonglong)uVar7;
      uVar7 = uVar7 + 4;
      fVar10 = (float)uVar4 * fVar11 * fVar14 + fVar13;
      pfVar6[-1] = (float)uVar3 * fVar10 * param_4[2] * 2.3283064e-12 + fVar10;
      uVar4 = uVar3 * 0xbb38435 + 0x3619636b;
      fVar10 = (float)uVar5 * fVar11 * fVar14 + fVar13;
      uVar2 = uVar4 * 0xbb38435 + 0x3619636b;
      *pfVar6 = (float)uVar4 * fVar10 * param_4[2] * 2.3283064e-12 + fVar10;
      fVar10 = (float)uVar1 * fVar11 * fVar14 + fVar13;
      pfVar6[1] = (float)uVar2 * fVar10 * param_4[2] * 2.3283064e-12 + fVar10;
      pfVar6 = pfVar6 + 4;
      uVar5 = uVar9;
    } while (uVar8 < param_3 - 3);
    uVar5 = (ulonglong)((param_3 - 4 >> 2) + 1) << 2;
    if (param_3 <= uVar8) goto LAB_1451292ee;
  }
  pfVar6 = (float *)((longlong)param_5 + uVar5 * 4);
  do {
    uVar7 = (int)uVar9 + 1;
    uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
    fVar11 = (float)uVar9 * (fVar12 - fVar13) * (1.0 / (float)(param_3 - 1)) + fVar13;
    *pfVar6 = (float)uVar2 * fVar11 * param_4[2] * 2.3283064e-12 + fVar11;
    pfVar6 = pfVar6 + 1;
    uVar9 = (ulonglong)uVar7;
  } while (uVar7 < param_3);
LAB_1451292ee:
                    /* WARNING: Could not recover jumptable at 0x000145129310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(param_5,(ulonglong)param_3,4,(_PtFuncCompare *)&LAB_145129040);
  return;
}



// FUNCTION 145129320 FUN_145129320 body=489 status=ok
// SIG undefined FUN_145129320(void)

void FUN_145129320(uint param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = 0;
  uVar7 = 0;
  uVar1 = 0x1bc0f99;
  if (param_1 < 4) {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    pfVar4 = (float *)(param_3 + 8);
    uVar2 = (param_1 - 4 >> 2) + 1;
    uVar6 = (ulonglong)uVar2;
    uVar7 = uVar2 * 4;
    lVar5 = (ulonglong)uVar2 * 4;
    fVar9 = 1.0 / (float)param_1;
    do {
      fVar8 = fVar9 * *(float *)(param_2 + 0x24);
      uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
      uVar3 = uVar1 * 0xbb38435 + 0x3619636b;
      pfVar4[-2] = (float)uVar1 * fVar8 * *(float *)(param_2 + 0x28) * 2.3283064e-12 + fVar8;
      fVar8 = fVar9 * *(float *)(param_2 + 0x24);
      uVar2 = uVar3 * 0xbb38435 + 0x3619636b;
      pfVar4[-1] = (float)uVar3 * fVar8 * *(float *)(param_2 + 0x28) * 2.3283064e-12 + fVar8;
      fVar8 = fVar9 * *(float *)(param_2 + 0x24);
      uVar1 = uVar2 * 0xbb38435 + 0x3619636b;
      *pfVar4 = (float)uVar2 * fVar8 * *(float *)(param_2 + 0x28) * 2.3283064e-12 + fVar8;
      fVar8 = fVar9 * *(float *)(param_2 + 0x24);
      pfVar4[1] = (float)uVar1 * fVar8 * *(float *)(param_2 + 0x28) * 2.3283064e-12 + fVar8;
      pfVar4 = pfVar4 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (param_1 <= uVar7) {
      return;
    }
  }
  pfVar4 = (float *)(param_3 + lVar5 * 4);
  uVar6 = (ulonglong)(param_1 - uVar7);
  do {
    fVar9 = (1.0 / (float)param_1) * *(float *)(param_2 + 0x24);
    uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
    *pfVar4 = (float)uVar1 * fVar9 * *(float *)(param_2 + 0x28) * 2.3283064e-12 + fVar9;
    pfVar4 = pfVar4 + 1;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}



// FUNCTION 145129510 FUN_145129510 body=532 status=ok
// SIG undefined FUN_145129510(void)

void FUN_145129510(uint param_1,longlong param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = *(float *)(param_2 + 0x18);
  lVar5 = 0;
  uVar7 = 0;
  uVar1 = 0x2ee007;
  if (param_1 < 4) {
    if (param_1 == 0) goto LAB_1451296f6;
  }
  else {
    pfVar4 = (float *)((longlong)param_3 + 8);
    uVar3 = (param_1 - 4 >> 2) + 1;
    uVar6 = (ulonglong)uVar3;
    uVar7 = uVar3 * 4;
    lVar5 = (ulonglong)uVar3 * 4;
    do {
      uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
      fVar8 = *(float *)(param_2 + 0x14) * 0.01 * fVar9;
      uVar3 = uVar1 * 0xbb38435 + 0x3619636b;
      uVar2 = uVar3 * 0xbb38435 + 0x3619636b;
      pfVar4[-2] = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar9 * (float)uVar1 + fVar9;
      fVar9 = *(float *)(param_2 + 0x14) * 0.01 * fVar8;
      pfVar4[-1] = (float)uVar3 * fVar8 * *(float *)(param_2 + 0x1c) * 2.3283064e-12 + fVar8;
      uVar1 = uVar2 * 0xbb38435 + 0x3619636b;
      fVar8 = fVar9 * *(float *)(param_2 + 0x14) * 0.01;
      *pfVar4 = (float)uVar2 * fVar9 * *(float *)(param_2 + 0x1c) * 2.3283064e-12 + fVar9;
      fVar9 = fVar8 * *(float *)(param_2 + 0x14) * 0.01;
      pfVar4[1] = (float)uVar1 * fVar8 * *(float *)(param_2 + 0x1c) * 2.3283064e-12 + fVar8;
      pfVar4 = pfVar4 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (param_1 <= uVar7) goto LAB_1451296f6;
  }
  pfVar4 = (float *)((longlong)param_3 + lVar5 * 4);
  uVar6 = (ulonglong)(param_1 - uVar7);
  do {
    fVar8 = *(float *)(param_2 + 0x14);
    uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
    *pfVar4 = *(float *)(param_2 + 0x1c) * 2.3283064e-12 * fVar9 * (float)uVar1 + fVar9;
    pfVar4 = pfVar4 + 1;
    uVar6 = uVar6 - 1;
    fVar9 = fVar9 * fVar8 * 0.01;
  } while (uVar6 != 0);
LAB_1451296f6:
                    /* WARNING: Could not recover jumptable at 0x00014512971d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(param_3,(ulonglong)param_1,4,(_PtFuncCompare *)&LAB_145129040);
  return;
}



// FUNCTION 145129730 FUN_145129730 body=308 status=ok
// SIG undefined FUN_145129730(void)

void FUN_145129730(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  undefined1 in_XMM1 [16];
  
  if (param_3 != 0) {
    uVar6 = 0;
    puVar9 = param_4;
    do {
      uVar7 = (ulonglong)
              (*(float *)((param_1 - (longlong)param_4) + (longlong)puVar9) * 0.001 * (float)param_2
              );
      uVar4 = (uint)uVar7;
      *puVar9 = uVar4;
      if (uVar6 == 0) {
        if ((uVar7 & 1) == 0) {
          *puVar9 = uVar4 + 1;
          uVar7 = (ulonglong)(uVar4 + 1);
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (double)(uVar7 & 0xffffffff);
        in_XMM1 = sqrtpd(in_XMM1,auVar2);
        iVar8 = (int)in_XMM1._0_8_ + 1;
        while( true ) {
          uVar5 = 3;
          if (3 < iVar8) {
            do {
              if ((int)((uVar7 & 0xffffffff) % uVar5) == 0) goto LAB_1451297d9;
              uVar4 = (int)uVar5 + 2;
              uVar5 = (ulonglong)uVar4;
            } while ((int)uVar4 < iVar8);
          }
          if (*puVar9 != 0) break;
LAB_1451297d9:
          *puVar9 = *puVar9 + 2;
          uVar7 = (ulonglong)*puVar9;
        }
      }
      else {
        uVar1 = param_4[uVar6 - 1];
        if ((uVar7 & 1) == 0) {
          *puVar9 = uVar4 + 1;
          uVar7 = (ulonglong)(uVar4 + 1);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (double)(uVar7 & 0xffffffff);
        in_XMM1 = sqrtpd(in_XMM1,auVar3);
        iVar8 = (int)in_XMM1._0_8_ + 1;
        while( true ) {
          uVar5 = 3;
          if (3 < iVar8) {
            do {
              if ((int)((uVar7 & 0xffffffff) % uVar5) == 0) goto LAB_145129838;
              uVar4 = (int)uVar5 + 2;
              uVar5 = (ulonglong)uVar4;
            } while ((int)uVar4 < iVar8);
          }
          if (*puVar9 != uVar1) break;
LAB_145129838:
          *puVar9 = *puVar9 + 2;
          uVar7 = (ulonglong)*puVar9;
        }
      }
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar6 < param_3);
  }
  return;
}



// FUNCTION 145129870 FUN_145129870 body=309 status=ok
// SIG undefined FUN_145129870(void)

void FUN_145129870(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1451299b0 FUN_1451299b0 body=373 status=ok
// SIG undefined FUN_1451299b0(void)

undefined8 * FUN_1451299b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x200,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                      ,0x33);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c33460;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x11c) = 0;
    *(undefined4 *)((longlong)puVar1 + 300) = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0;
    *(undefined8 *)((longlong)puVar1 + 500) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145129b30 FUN_145129b30 body=432 status=ok
// SIG undefined FUN_145129b30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145129b30(longlong *param_1,uint param_2,longlong *param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined8 auStack_b0 [5];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  
  uVar8 = (ulonglong)param_2;
  auStack_b0[0] = 0x145129b8e;
  lVar5 = (**(code **)(*param_1 + 8))
                    (param_1,uVar8 * 0x18,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFX.cpp"
                     ,0x57);
  *param_3 = lVar5;
  if (lVar5 == 0) {
    uVar6 = 0x34;
  }
  else {
    uVar1 = uVar8 * 4;
    uVar7 = uVar1 + 0xf;
    if (uVar7 <= uVar1) {
      uVar7 = 0xffffffffffffff0;
    }
    auStack_b0[0] = 0x145129bc8;
    uVar10 = 0;
    local_70 = 0x43480000;
    lVar5 = -(uVar7 & 0xfffffffffffffff0);
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_68 = 0;
    local_60 = 0;
    local_74 = 0x42840000;
    local_6c = 0x40a00000;
    *(undefined8 *)((longlong)auStack_b0 + lVar5) = 0x145129c07;
    FUN_145129510(uVar8,&local_88,(longlong)&local_88 + lVar5);
    uVar8 = uVar1 + 0xf;
    if (uVar8 <= uVar1) {
      uVar8 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar5) = 0x145129c23;
    lVar4 = -(uVar8 & 0xfffffffffffffff0);
    puVar11 = (undefined4 *)((longlong)&local_88 + lVar4 + lVar5);
    *(undefined8 *)((longlong)auStack_b0 + lVar4 + lVar5) = 0x145129c3c;
    FUN_145129730((longlong)&local_88 + lVar5,param_4,param_2,puVar11);
    if (param_2 != 0) {
      do {
        uVar2 = *puVar11;
        lVar3 = *param_3;
        fVar12 = 2.47212 - (float)(3 - (int)uVar10) * 0.61803;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (0.61803 <= fVar12) {
          fVar12 = 0.61803;
        }
        *(undefined8 *)((longlong)auStack_b0 + lVar4 + lVar5) = 0x145129c9c;
        uVar6 = FUN_1453c6720(lVar3 + uVar10 * 0x18,param_1,uVar2,fVar12);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        puVar11 = puVar11 + 1;
      } while (uVar9 < param_2);
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 145129ce0 FUN_145129ce0 body=470 status=ok
// SIG undefined FUN_145129ce0(void)

void FUN_145129ce0(longlong *param_1,uint param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  uint uVar34;
  ulonglong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if ((param_2 & 3) != 0) {
    uVar34 = 4 - (param_2 & 3);
    if (uVar34 != 0) {
      memset((void *)(*param_1 + (ulonglong)param_2 * 4),0,(ulonglong)uVar34 << 2);
    }
    param_2 = param_2 + uVar34;
  }
  uVar35 = 0;
  uVar32 = *(undefined8 *)(param_4 + 0x1c);
  uVar33 = *(undefined8 *)(param_4 + 0x1e);
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  fVar6 = param_4[4];
  fVar7 = param_4[5];
  fVar8 = param_4[6];
  fVar9 = param_4[7];
  fVar49 = *param_5;
  fVar48 = param_5[1];
  fVar47 = param_5[2];
  fVar46 = param_5[3];
  fVar10 = param_4[8];
  fVar11 = param_4[9];
  fVar12 = param_4[10];
  fVar13 = param_4[0xb];
  fVar14 = param_4[0xc];
  fVar15 = param_4[0xd];
  fVar16 = param_4[0xe];
  fVar17 = param_4[0xf];
  fVar18 = param_4[0x10];
  fVar19 = param_4[0x11];
  fVar20 = param_4[0x12];
  fVar21 = param_4[0x13];
  fVar22 = param_4[0x14];
  fVar23 = param_4[0x15];
  fVar24 = param_4[0x16];
  fVar25 = param_4[0x17];
  fVar26 = param_4[0x18];
  fVar27 = param_4[0x19];
  fVar28 = param_4[0x1a];
  fVar29 = param_4[0x1b];
  if (param_2 != 0) {
    do {
      fVar36 = fVar18 * fVar49;
      fVar38 = fVar19 * fVar49;
      fVar40 = fVar20 * fVar49;
      fVar41 = fVar21 * fVar49;
      fVar42 = fVar22 * fVar48;
      fVar43 = fVar23 * fVar48;
      fVar44 = fVar24 * fVar48;
      fVar45 = fVar25 * fVar48;
      pfVar1 = (float *)(*param_1 + uVar35 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar48 = pfVar1[2];
      fVar49 = pfVar1[3];
      fVar37 = fVar26 * fVar47;
      fVar39 = fVar27 * fVar47;
      local_b8 = (float)uVar32;
      fStack_b4 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_b0 = (float)uVar33;
      fStack_ac = (float)((ulonglong)uVar33 >> 0x20);
      local_b8 = local_b8 * fVar46;
      fStack_b4 = fStack_b4 * fVar46;
      fStack_ac = fStack_ac * fVar46;
      fVar46 = fVar31 * fVar12 + fVar48 * fVar8 + fVar48 * fVar4 + fVar40 + fVar44 + fVar30 * fVar16
               + fVar28 * fVar47 + fStack_b0 * fVar46;
      fVar47 = fVar31 * fVar13 + fVar48 * fVar9 + fVar49 * fVar5 + fVar41 + fVar45 + fVar30 * fVar17
               + fVar29 * fVar47 + fStack_ac;
      pfVar1 = (float *)(*param_1 + uVar35 * 4);
      *pfVar1 = fVar31 * fVar10 + fVar48 * fVar6 + fVar30 * fVar2 + fVar36 + fVar42 +
                fVar30 * fVar14 + fVar37 + local_b8;
      pfVar1[1] = fVar31 * fVar11 + fVar48 * fVar7 + fVar31 * fVar3 + fVar38 + fVar43 +
                  fVar30 * fVar15 + fVar39 + fStack_b4;
      pfVar1[2] = fVar46;
      pfVar1[3] = fVar47;
      uVar34 = (int)uVar35 + 4;
      uVar35 = (ulonglong)uVar34;
    } while (uVar34 < param_2);
  }
  *param_5 = fVar49;
  param_5[2] = fVar47;
  param_5[3] = fVar46;
  param_5[1] = fVar48;
  return;
}



// FUNCTION 145129ec0 FUN_145129ec0 body=227 status=ok
// SIG undefined FUN_145129ec0(void)

undefined8 * FUN_145129ec0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,200,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFXParams.cpp"
                      ,0x2d);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c33558;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(puVar2 + 0xb) = 1;
    uVar1 = *(undefined8 *)(param_1 + 100);
    *(undefined8 *)((longlong)puVar2 + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
    *(undefined8 *)((longlong)puVar2 + 100) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x74);
    *(undefined8 *)((longlong)puVar2 + 0x6c) = *(undefined8 *)(param_1 + 0x6c);
    *(undefined8 *)((longlong)puVar2 + 0x74) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x84);
    *(undefined8 *)((longlong)puVar2 + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)((longlong)puVar2 + 0x84) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)((longlong)puVar2 + 0x8c) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined8 *)((longlong)puVar2 + 0x94) = uVar1;
    *(undefined1 *)((longlong)puVar2 + 0x9a) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0xa4);
    *(undefined8 *)((longlong)puVar2 + 0x9c) = *(undefined8 *)(param_1 + 0x9c);
    *(undefined8 *)((longlong)puVar2 + 0xa4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0xb4);
    *(undefined8 *)((longlong)puVar2 + 0xac) = *(undefined8 *)(param_1 + 0xac);
    *(undefined8 *)((longlong)puVar2 + 0xb4) = uVar1;
    *(undefined8 *)((longlong)puVar2 + 0xbc) = *(undefined8 *)(param_1 + 0xbc);
    *(undefined4 *)((longlong)puVar2 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14512a110 FUN_14512a110 body=56 status=ok
// SIG undefined FUN_14512a110(void)

undefined8 FUN_14512a110(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14512a150 FUN_14512a150 body=724 status=ok
// SIG undefined FUN_14512a150(void)

undefined8 FUN_14512a150(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  *(undefined4 *)(param_1 + 0x24) = param_2[7];
  *(undefined4 *)(param_1 + 0x28) = param_2[8];
  *(undefined4 *)(param_1 + 0x2c) = param_2[9];
  *(undefined4 *)(param_1 + 0x30) = param_2[10];
  *(undefined4 *)(param_1 + 0x34) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x38) = param_2[0xc];
  fVar1 = powf(10.0,(float)param_2[0xd] * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0xe] * 0.05);
  *(float *)(param_1 + 0x40) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0xf] * 0.05);
  *(float *)(param_1 + 0x44) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0x10] * 0.05);
  *(float *)(param_1 + 0x48) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0x11] * 0.05);
  *(float *)(param_1 + 0x4c) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0x12] * 0.05);
  *(float *)(param_1 + 0x50) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0x13] * 0.05 - 0.15);
  *(float *)(param_1 + 0x54) = fVar1;
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x51);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x61);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x69);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)((longlong)param_2 + 0x6d);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x72);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x76);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x7a);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x7e);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x82);
  fVar1 = powf(10.0,*(float *)((longlong)param_2 + 0x86) * 0.05);
  *(float *)(param_1 + 0x78) = fVar1;
  fVar1 = powf(10.0,*(float *)((longlong)param_2 + 0x8a) * 0.05);
  *(float *)(param_1 + 0x7c) = fVar1;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x8e);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0x92);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x96);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0x9a);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x9e);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xa2);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xa6);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xaa);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xae);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 0xb2);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xb6);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  return 1;
}



// FUNCTION 14512a430 FUN_14512a430 body=1668 status=ok
// SIG undefined FUN_14512a430(void)

undefined4 FUN_14512a430(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x5c) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 1:
    *(float *)(param_1 + 0x60) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 100) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x68) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 4:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    *(bool *)(param_1 + 0x99) = cVar1 != '\0';
    return 1;
  case 10:
    *(float *)(param_1 + 8) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0xb:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0xc:
    *(float *)(param_1 + 0x6c) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0xd:
    *(float *)(param_1 + 0x70) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0xe:
    *(float *)(param_1 + 0x74) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0xf:
    fVar2 = *param_3;
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 100.0 <= fVar2)) {
      fVar3 = 100.0;
    }
    *(float *)(param_1 + 0x10) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x10:
    fVar2 = *param_3;
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 180.0 <= fVar2)) {
      fVar3 = 180.0;
    }
    *(float *)(param_1 + 0x14) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x14:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    *(bool *)(param_1 + 0x98) = cVar1 != '\0';
    return 1;
  case 0x15:
    *(float *)(param_1 + 0x80) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x16:
    *(float *)(param_1 + 0x84) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x17:
    fVar2 = *param_3;
    fVar3 = -32.0;
    if ((-32.0 <= fVar2) && (fVar3 = fVar2, 32.0 <= fVar2)) {
      fVar3 = 32.0;
    }
    *(float *)(param_1 + 0x18) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x18:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x19:
    *(float *)(param_1 + 0x20) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1a:
    *(float *)(param_1 + 0x88) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x1b:
    *(float *)(param_1 + 0x8c) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x1c:
    fVar2 = *param_3;
    fVar3 = -32.0;
    if ((-32.0 <= fVar2) && (fVar3 = fVar2, 32.0 <= fVar2)) {
      fVar3 = 32.0;
    }
    *(float *)(param_1 + 0x24) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1d:
    *(float *)(param_1 + 0x28) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1e:
    *(float *)(param_1 + 0x2c) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x1f:
    *(float *)(param_1 + 0x90) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x20:
    *(float *)(param_1 + 0x94) = *param_3;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x21:
    fVar2 = *param_3;
    fVar3 = -32.0;
    if ((-32.0 <= fVar2) && (fVar3 = fVar2, 32.0 <= fVar2)) {
      fVar3 = 32.0;
    }
    *(float *)(param_1 + 0x30) = fVar3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x22:
    *(float *)(param_1 + 0x34) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x23:
    *(float *)(param_1 + 0x38) = *param_3;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x28:
    fVar2 = powf(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0x78) = fVar2;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x29:
    fVar2 = powf(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0x7c) = fVar2;
    *(undefined1 *)(param_1 + 0x9a) = 1;
    return 1;
  case 0x32:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x3c) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x33:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x40) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x34:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x44) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x35:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x48) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x3c:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x4c) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x3d:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05);
    *(float *)(param_1 + 0x50) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 0x3e:
    fVar2 = *param_3;
    fVar3 = -96.3;
    if ((-96.3 <= fVar2) && (fVar3 = fVar2, 0.0 <= fVar2)) {
      fVar3 = 0.0;
    }
    fVar2 = powf(10.0,fVar3 * 0.05 - 0.15);
    *(float *)(param_1 + 0x54) = fVar2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    return 1;
  case 100:
    *(float *)(param_1 + 0x9c) = *param_3;
    return 1;
  case 0x65:
    *(float *)(param_1 + 0xa0) = *param_3;
    return 1;
  case 0x66:
    *(float *)(param_1 + 0xa4) = *param_3;
    return 1;
  case 0x67:
    *(float *)(param_1 + 0xa8) = *param_3;
    return 1;
  case 0x68:
    *(float *)(param_1 + 0xac) = *param_3;
    return 1;
  case 0x69:
    *(float *)(param_1 + 0xb0) = *param_3;
    return 1;
  case 0x6a:
    *(float *)(param_1 + 0xb4) = *param_3;
    return 1;
  case 0x6b:
    *(float *)(param_1 + 0xb8) = *param_3;
    return 1;
  case 0x6c:
    *(float *)(param_1 + 0xbc) = *param_3;
    return 1;
  case 0x6d:
    *(float *)(param_1 + 0xc0) = *param_3;
    return 1;
  case 0x6e:
    *(float *)(param_1 + 0xc4) = *param_3;
  }
  return 1;
}



// FUNCTION 14512abf0 FUN_14512abf0 body=43 status=ok
// SIG undefined FUN_14512abf0(void)

undefined8 * FUN_14512abf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,200);
  }
  return param_1;
}



// FUNCTION 14512ac20 FUN_14512ac20 body=53 status=ok
// SIG undefined FUN_14512ac20(void)

void FUN_14512ac20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,200,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRoomVerb\\AkRoomVerbFXParams.cpp"
                      ,0x14);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c33558;
    return;
  }
  return;
}



// FUNCTION 14512ac60 FUN_14512ac60 body=306 status=ok
// SIG undefined FUN_14512ac60(void)

int FUN_14512ac60(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                 undefined4 *param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  byte bVar8;
  
  *(longlong **)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x10) = param_4;
  *(longlong **)(param_1 + 0x18) = param_3;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(short *)(param_4 + 0x20 + uVar4 * 2) != 0);
  if (0x102 < uVar4) {
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0x40) = *param_5;
  uVar7 = param_5[1];
  *(uint *)(param_1 + 0x3c) = uVar7;
  if (*(char *)(param_4 + 0x228) != '\0') {
    cVar1 = FUN_14512b430(param_1);
    if (cVar1 != '\0') {
      uVar7 = 3;
      bVar8 = 0;
      do {
        bVar8 = bVar8 + 1;
        uVar7 = uVar7 & uVar7 - 1;
      } while (uVar7 != 0);
      uVar7 = bVar8 | 0x3100;
      *(byte *)(param_1 + 0x3c) = bVar8;
      *(uint *)(param_1 + 0x3c) = uVar7;
    }
  }
  *(uint *)(param_1 + 0x38) = uVar7 & 0xff;
  lVar5 = FUN_14512ca30(param_2);
  *(longlong *)(param_1 + 0x20) = lVar5;
  if (lVar5 == 0) {
    iVar3 = 2;
  }
  else {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    if (*(short *)(*(longlong *)(param_1 + 0x10) + 0x20) == 0) {
      iVar3 = 1;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
      lVar5 = *param_2;
      uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = (**(code **)(lVar5 + 8))
                        (param_2,(ulonglong)*(uint *)(param_1 + 0x38) * (ulonglong)uVar2 * 2,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderFX.cpp"
                         ,0x8c);
      *(longlong *)(param_1 + 0x30) = lVar5;
      iVar3 = 2 - (uint)(lVar5 != 0);
    }
  }
  return iVar3;
}



// FUNCTION 14512ada0 FUN_14512ada0 body=72 status=ok
// SIG undefined FUN_14512ada0(void)

undefined8 FUN_14512ada0(undefined8 *param_1,longlong *param_2)

{
  if (param_1[6] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14512ae20 FUN_14512ae20 body=1524 status=ok
// SIG undefined FUN_14512ae20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14512ae20(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  void *_Dst;
  longlong *plVar12;
  undefined2 *puVar13;
  float *pfVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res10 [2];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong local_b8 [2];
  void *local_a8;
  undefined4 uStack_a0;
  char acStack_9c [4];
  uint local_98;
  char acStack_94 [20];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  
  uVar1 = *(ushort *)((longlong)param_2 + 0x12);
  if (uVar1 == 0) {
    return;
  }
  plVar12 = (longlong *)(param_1 + 0x28);
  uVar16 = 0;
  if (*plVar12 == 0) {
    if (*(short *)(*(longlong *)(param_1 + 0x10) + 0x20) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x49) != '\0') {
      return;
    }
    uStack_f0 = 0x14512ae9d;
    plVar11 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    uStack_f0 = 0x14512aea6;
    plVar11 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11);
    puVar15 = auStack_e8;
    if (plVar11 == (longlong *)0x0) goto LAB_14512b3aa;
    local_c0[0] = 0;
    local_64 = 0xffffffff;
    local_5c = 0;
    local_80 = 0;
    local_7c = 1;
    local_68 = 0;
    local_70 = 0;
    uStack_f0 = 0x14512aef0;
    local_c8 = plVar12;
    iVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,*(longlong *)(param_1 + 0x10) + 0x20,&local_80,2)
    ;
    puVar15 = auStack_e8;
    if (iVar9 != 1) goto LAB_14512b3aa;
    local_c8 = (longlong *)
               CONCAT62(local_c8._2_6_,*(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x1c));
    uStack_f0 = 0x14512af1a;
    cVar8 = FUN_14512c550(*(undefined8 *)(param_1 + 0x20),*plVar12,*(undefined4 *)(param_1 + 0x3c),
                          *(undefined4 *)(param_1 + 0x40));
    if (cVar8 == '\0') {
      uStack_f0 = 0x14512af27;
      (**(code **)(*(longlong *)*plVar12 + 8))();
      *plVar12 = 0;
      puVar15 = auStack_e8;
      goto LAB_14512b3aa;
    }
  }
  fVar25 = 0.0;
  fVar26 = 1.0;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x229) != '\0') {
    if (*(char *)(param_1 + 0x48) == '\0') {
      fVar26 = *(float *)(param_1 + 0x44);
      uStack_f0 = 0x14512af71;
      fVar25 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 0;
      uStack_f0 = 0x14512af5f;
      fVar25 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
      fVar26 = fVar25;
    }
    *(float *)(param_1 + 0x44) = fVar25;
    fVar25 = (fVar25 - fVar26) / (float)uVar1;
  }
  uVar17 = *(uint *)(param_2 + 1);
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar22 = (uint)uVar1;
  if (*(char *)(lVar2 + 0x228) == '\0') {
LAB_14512afd3:
    uVar18 = (uint)uVar1;
    if (((uVar17 >> 0xf & 1) == 0) || ((uVar17 & 0xf00) != 0x100)) {
      if (((uVar17 & 0xf00) == 0x200) && (((byte)uVar17 < 0x11 && (*(short *)(lVar2 + 0x1e) == 1))))
      {
        uStack_f0 = 0x14512b1b2;
        _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 8))
                                 (*(longlong **)(param_1 + 8),
                                  (ulonglong)((uVar17 & 0xff) * uVar22) << 2,
                                  "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderFX.cpp"
                                  ,0x1b7);
        puVar15 = auStack_e8;
        if (_Dst != (void *)0x0) {
          uStack_f0 = 0x14512b1d5;
          memset(_Dst,0,(ulonglong)(*(byte *)(param_2 + 1) * uVar18) << 2);
          uVar17 = *(uint *)(param_2 + 1);
          uVar10 = uVar17 & 0xff;
          uVar19 = (ulonglong)((uVar10 + 7 >> 3) * uVar10 * 0x20);
          uVar20 = uVar19 + 0xf;
          if (uVar20 <= uVar19) {
            uVar20 = 0xffffffffffffff0;
          }
          uStack_f0 = 0x14512b209;
          lVar7 = -(uVar20 & 0xfffffffffffffff0);
          lVar2 = (longlong)&local_a8 + lVar7;
          *(undefined8 *)(auStack_e8 + lVar7 + -8) = 0x14512b219;
          FUN_1450a31c0(uVar17,lVar2);
          uStack_a0 = (undefined4)param_2[1];
          acStack_9c[0] = '+';
          acStack_9c[1] = '\0';
          acStack_9c[2] = '\0';
          acStack_9c[3] = '\0';
          local_98 = (uint)uVar1;
          pcVar6 = *(code **)(**(longlong **)(param_1 + 0x18) + 8);
          local_a8 = _Dst;
          *(undefined8 *)(auStack_e8 + lVar7 + -8) = 0x14512b23e;
          plVar12 = (longlong *)(*pcVar6)();
          pcVar6 = *(code **)(*plVar12 + 200);
          *(undefined8 *)(auStack_e8 + lVar7 + -8) = 0x14512b24d;
          plVar12 = (longlong *)(*pcVar6)(plVar12,0);
          *(longlong *)((longlong)local_b8 + lVar7) = lVar2;
          *(longlong *)(local_c0 + lVar7) = lVar2;
          *(undefined4 *)(local_c0 + lVar7 + -8) = 0x3f800000;
          pcVar6 = *(code **)(*plVar12 + 8);
          *(undefined8 *)(auStack_e8 + lVar7 + -8) = 0x14512b271;
          (*pcVar6)(plVar12,param_2,&local_a8,0x3f800000);
          if ((char)param_2[1] != '\0') {
            do {
              pfVar14 = (float *)((longlong)local_a8 + (ushort)local_98 * uVar16 * 4);
              puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar16 * 2);
              iVar9 = *(int *)(param_1 + 0x38);
              fVar24 = fVar26;
              uVar17 = uVar18;
              do {
                fVar23 = fVar24 * *pfVar14;
                pfVar14 = pfVar14 + 1;
                if (fVar23 <= -1.0) {
                  fVar23 = -1.0;
                }
                if (1.0 <= fVar23) {
                  fVar23 = 1.0;
                }
                *puVar13 = (short)(int)(fVar23 * 32767.0);
                puVar13 = puVar13 + iVar9;
                uVar17 = uVar17 - 1;
                fVar24 = fVar24 + fVar25;
              } while (uVar17 != 0);
              uVar17 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar17;
            } while (uVar17 < *(byte *)(param_2 + 1));
          }
          plVar12 = *(longlong **)(param_1 + 8);
          pcVar6 = *(code **)(*plVar12 + 0x10);
          *(undefined8 *)(auStack_e8 + lVar7 + -8) = 0x14512b304;
          (*pcVar6)(plVar12,_Dst);
          puVar15 = auStack_e8 + lVar7;
        }
      }
      else {
        puVar15 = auStack_e8;
        if ((byte)uVar17 != 0) {
          do {
            pfVar14 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar16 * 4);
            puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar16 * 2);
            iVar9 = *(int *)(param_1 + 0x38);
            fVar24 = fVar26;
            uVar17 = uVar22;
            do {
              fVar23 = fVar24 * *pfVar14;
              pfVar14 = pfVar14 + 1;
              if (fVar23 <= -1.0) {
                fVar23 = -1.0;
              }
              if (1.0 <= fVar23) {
                fVar23 = 1.0;
              }
              *puVar13 = (short)(int)(fVar23 * 32767.0);
              puVar13 = puVar13 + iVar9;
              uVar17 = uVar17 - 1;
              fVar24 = fVar24 + fVar25;
            } while (uVar17 != 0);
            uVar17 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar17;
            puVar15 = auStack_e8;
          } while (uVar17 < *(byte *)(param_2 + 1));
        }
      }
    }
    else {
      uVar21 = uVar17 >> 0xc & 2;
      uVar10 = uVar21 + 1;
      if ((uVar17 >> 0xe & 1) == 0) {
        uVar10 = uVar21;
      }
      uVar20 = (ulonglong)uVar10;
      uVar19 = uVar20;
      if (uVar10 != 0) {
        do {
          iVar9 = *(int *)(param_1 + 0x38);
          pfVar14 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar16 * 4);
          puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar16 * 2);
          fVar24 = fVar26;
          uVar17 = uVar18;
          do {
            fVar23 = fVar24 * *pfVar14;
            pfVar14 = pfVar14 + 1;
            if (fVar23 <= -1.0) {
              fVar23 = -1.0;
            }
            if (1.0 <= fVar23) {
              fVar23 = 1.0;
            }
            *puVar13 = (short)(int)(fVar23 * 32767.0);
            puVar13 = puVar13 + iVar9;
            uVar17 = uVar17 - 1;
            fVar24 = fVar24 + fVar25;
          } while (uVar17 != 0);
          uVar16 = uVar16 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      uVar17 = *(byte *)(param_2 + 1) - 1;
      pfVar14 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar17 * 4);
      iVar9 = *(int *)(param_1 + 0x38);
      puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + uVar20 * 2);
      fVar24 = fVar26;
      do {
        fVar23 = fVar24 * *pfVar14;
        pfVar14 = pfVar14 + 1;
        if (fVar23 <= -1.0) {
          fVar23 = -1.0;
        }
        if (1.0 <= fVar23) {
          fVar23 = 1.0;
        }
        *puVar13 = (short)(int)(fVar23 * 32767.0);
        puVar13 = puVar13 + iVar9;
        uVar18 = uVar18 - 1;
        fVar24 = fVar24 + fVar25;
      } while (uVar18 != 0);
      puVar15 = auStack_e8;
      if (uVar10 < uVar17) {
        uVar16 = (ulonglong)(uVar17 - uVar10);
        do {
          iVar9 = *(int *)(param_1 + 0x38);
          pfVar14 = (float *)(*param_2 + *(ushort *)(param_2 + 2) * uVar20 * 4);
          puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + 2 + uVar20 * 2);
          fVar24 = fVar26;
          uVar17 = uVar22;
          do {
            fVar23 = fVar24 * *pfVar14;
            pfVar14 = pfVar14 + 1;
            if (fVar23 <= -1.0) {
              fVar23 = -1.0;
            }
            if (1.0 <= fVar23) {
              fVar23 = 1.0;
            }
            *puVar13 = (short)(int)(fVar23 * 32767.0);
            puVar13 = puVar13 + iVar9;
            uVar17 = uVar17 - 1;
            fVar24 = fVar24 + fVar25;
          } while (uVar17 != 0);
          uVar20 = uVar20 + 1;
          uVar16 = uVar16 - 1;
          puVar15 = auStack_e8;
        } while (uVar16 != 0);
      }
    }
  }
  else {
    uStack_f0 = 0x14512afb8;
    local_res10[0] = uVar17;
    cVar8 = FUN_14512b430(param_1,local_res10);
    if (cVar8 == '\0') goto LAB_14512afd3;
    uStack_f0 = 0x14512afce;
    FUN_14512b4c0(param_1,param_2,fVar26,fVar25);
    puVar15 = auStack_e8;
  }
  iVar9 = *(int *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar15 + -8) = 0x14512b3a1;
  cVar8 = FUN_14512c7a0(uVar5,uVar4,uVar3,uVar22 * iVar9 * 2);
  if (cVar8 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    return;
  }
LAB_14512b3aa:
  plVar12 = *(longlong **)(param_1 + 0x18);
  builtin_strncpy(acStack_94 + 0xc,"ile",4);
  local_a8 = (void *)0x726564726f636552;
  uStack_a0._0_1_ = ':';
  uStack_a0._1_1_ = ' ';
  uStack_a0._2_1_ = 'C';
  uStack_a0._3_1_ = 'a';
  builtin_strncpy(acStack_9c,"nnot",4);
  local_98._0_1_ = ' ';
  local_98._1_1_ = 'c';
  local_98._2_1_ = 'r';
  local_98._3_1_ = 'e';
  builtin_strncpy(acStack_94,"ate output f",0xc);
  pcVar6 = *(code **)(*plVar12 + 0x40);
  *(undefined8 *)(puVar15 + -8) = 0x14512b3dd;
  (*pcVar6)(plVar12,&local_a8,2);
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



// FUNCTION 14512b430 FUN_14512b430 body=142 status=ok
// SIG undefined FUN_14512b430(void)

uint FUN_14512b430(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 & 0xf00;
  if (uVar1 != 0x100) {
    return uVar1;
  }
  uVar1 = *param_2 & 0x63f000;
  if (((((uVar1 != 0x637000) && (uVar1 != 0x63f000)) && (uVar1 != 0x633000)) &&
      (((uVar1 != 0x63b000 && (uVar1 != 0x607000)) &&
       ((uVar1 != 0x60f000 && ((uVar1 != 0x603000 && (uVar1 != 0x60b000)))))))) &&
     ((uVar1 != 0x7000 &&
      ((((uVar1 != 0xf000 && (uVar1 != 0x3000)) && (uVar1 != 0xb000)) && (uVar1 != 0xc000)))))) {
    return CONCAT31(1,uVar1 == 0x8000);
  }
  return 0x101;
}


