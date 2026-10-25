// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14512b4c0 FUN_14512b4c0 body=2687 status=ok
// SIG undefined FUN_14512b4c0(void)

void FUN_14512b4c0(longlong param_1,longlong *param_2,float param_3,float param_4)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar11 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  lVar8 = *(longlong *)(param_1 + 0x10);
  fVar18 = 0.0;
  uVar7 = *(uint *)(param_2 + 1) >> 0xc & 0x63f;
  fVar13 = *(float *)(lVar8 + 8) * 0.05;
  if ((fVar13 < -37.0) || (37.0 < fVar13)) {
    fVar13 = 0.0;
  }
  else {
    uVar3 = (uint)(longlong)(fVar13 * 27866352.0 + 1.0653532e+09);
    fVar13 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar13 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  fVar14 = *(float *)(lVar8 + 0xc) * 0.05;
  if ((fVar14 < -37.0) || (37.0 < fVar14)) {
    fVar14 = 0.0;
  }
  else {
    uVar3 = (uint)(longlong)(fVar14 * 27866352.0 + 1.0653532e+09);
    fVar14 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar14 = ((fVar14 * 0.32518977 + 0.020805772) * fVar14 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  fVar15 = *(float *)(lVar8 + 0x10) * 0.05;
  if ((fVar15 < -37.0) || (37.0 < fVar15)) {
    fVar15 = 0.0;
  }
  else {
    uVar3 = (uint)(longlong)(fVar15 * 27866352.0 + 1.0653532e+09);
    fVar15 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar15 = ((fVar15 * 0.32518977 + 0.020805772) * fVar15 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  fVar16 = *(float *)(lVar8 + 0x14) * 0.05;
  if ((fVar16 < -37.0) || (37.0 < fVar16)) {
    fVar16 = 0.0;
  }
  else {
    uVar3 = (uint)(longlong)(fVar16 * 27866352.0 + 1.0653532e+09);
    fVar16 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar16 = ((fVar16 * 0.32518977 + 0.020805772) * fVar16 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  fVar17 = *(float *)(lVar8 + 0x18) * 0.05;
  if ((-37.0 <= fVar17) && (fVar17 <= 37.0)) {
    uVar3 = (uint)(longlong)(fVar17 * 27866352.0 + 1.0653532e+09);
    fVar18 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar18 = ((fVar18 * 0.32518977 + 0.020805772) * fVar18 + 0.65304345) *
             (float)(uVar3 & 0xff800000);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x30);
  uVar4 = (uint)*(ushort *)((longlong)param_2 + 0x12);
  pfVar10 = (float *)0x0;
  uVar3 = uVar11;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x30) + 2);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  if (uVar7 < 0x604) {
    if (uVar7 == 0x603) {
switchD_14512b974_caseD_60b:
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar15,param_3,param_4
                    ,1,2);
      uVar6 = (ulonglong)*(ushort *)(param_2 + 2) * 3;
LAB_14512bde7:
      lVar8 = *param_2 + uVar6 * 4;
    }
    else {
      switch(uVar7) {
      case 4:
      case 0xc:
        FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar13,param_3,param_4,1,2);
        lVar8 = *param_2;
        break;
      default:
        goto switchD_14512b83d_caseD_5;
      case 7:
      case 0xf:
        FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                      *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar13,param_3,
                      param_4,1,2);
        FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                      *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11);
      case 3:
      case 0xb:
        FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
        uVar6 = (ulonglong)*(ushort *)(param_2 + 2);
        goto LAB_14512bde7;
      case 8:
        FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar18,param_3,param_4,1,2);
        lVar8 = *param_2;
      }
    }
  }
  else {
    switch(uVar7) {
    case 0x607:
    case 0x60f:
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar13,param_3,param_4
                    ,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,uVar11,fVar15,param_3,
                    param_4,1,2);
      lVar8 = (ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2;
      break;
    default:
      goto switchD_14512b83d_caseD_5;
    case 0x60b:
      goto switchD_14512b974_caseD_60b;
    case 0x633:
    case 0x63b:
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar16,param_3,param_4
                    ,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    (ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2,uVar11,fVar15,param_3,
                    param_4,1,2);
      uVar6 = (ulonglong)*(ushort *)(param_2 + 2) * 5;
      goto LAB_14512bde7;
    case 0x637:
    case 0x63f:
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11,fVar13,param_3,param_4
                    ,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),*param_2,uVar11,fVar14,param_3,param_4,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0xc,uVar11,fVar16,param_3,
                    param_4,1,2);
      FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,
                    (ulonglong)*(ushort *)(param_2 + 2) * 0x10 + *param_2,uVar11);
      FUN_14512c040(*(undefined8 *)(param_1 + 0x30),
                    *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0x14,uVar11,fVar15,param_3,
                    param_4,1,2);
      lVar8 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 0x18;
    }
  }
  FUN_14512c040(*(longlong *)(param_1 + 0x30) + 2,lVar8,uVar11);
switchD_14512b83d_caseD_5:
  if ((*(uint *)(param_2 + 1) & 0x8000) != 0) {
    psVar9 = *(short **)(param_1 + 0x30);
    pfVar12 = (float *)(*param_2 +
                       (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                       (ulonglong)*(ushort *)(param_2 + 2) * 4);
    fVar13 = param_3;
    uVar7 = uVar11;
    do {
      fVar14 = fVar13 * fVar18;
      fVar13 = fVar13 + param_4;
      iVar5 = (int)*psVar9 - (int)(fVar14 * *pfVar12 * -32767.0);
      if (iVar5 < 0x8000) {
        sVar2 = (short)iVar5;
        if (iVar5 < -0x8000) {
          sVar2 = -0x8000;
        }
      }
      else {
        sVar2 = 0x7fff;
      }
      *psVar9 = sVar2;
      pfVar12 = pfVar12 + 1;
      psVar9 = psVar9 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
      pfVar10 = (float *)(*param_2 +
                         (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                         (ulonglong)*(ushort *)(param_2 + 2) * 4);
    }
    psVar9 = (short *)(*(longlong *)(param_1 + 0x30) + 2);
    do {
      fVar13 = param_3 * fVar18;
      param_3 = param_3 + param_4;
      iVar5 = (int)*psVar9 - (int)(fVar13 * *pfVar10 * -32767.0);
      if (iVar5 < 0x8000) {
        sVar2 = (short)iVar5;
        if (iVar5 < -0x8000) {
          sVar2 = -0x8000;
        }
      }
      else {
        sVar2 = 0x7fff;
      }
      *psVar9 = sVar2;
      pfVar10 = pfVar10 + 1;
      psVar9 = psVar9 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 14512bfd0 FUN_14512bfd0 body=98 status=ok
// SIG undefined FUN_14512bfd0(void)

undefined8 * FUN_14512bfd0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149c33670;
  if (param_1[4] != 0) {
    if (param_1[5] != 0) {
      FUN_14512c940();
    }
    *(int *)(param_1[4] + 8) = *(int *)(param_1[4] + 8) + -1;
  }
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14512c040 FUN_14512c040 body=135 status=ok
// SIG undefined FUN_14512c040(void)

void FUN_14512c040(short *param_1,float *param_2,int param_3,float param_4,float param_5,
                  float param_6,int param_7,int param_8)

{
  short sVar1;
  int iVar2;
  float fVar3;
  
  do {
    fVar3 = param_4 * param_5;
    param_5 = param_5 + param_6;
    iVar2 = (int)*param_1 - (int)(fVar3 * *param_2 * -32767.0);
    if (iVar2 < 0x8000) {
      sVar1 = (short)iVar2;
      if (iVar2 < -0x8000) {
        sVar1 = -0x8000;
      }
    }
    else {
      sVar1 = 0x7fff;
    }
    *param_1 = sVar1;
    param_2 = param_2 + param_7;
    param_1 = param_1 + param_8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14512c0d0 FUN_14512c0d0 body=105 status=ok
// SIG undefined FUN_14512c0d0(void)

undefined8 * FUN_14512c0d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x50,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderFX.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *puVar1 = &PTR_FUN_149c33670;
    *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
    *(uint *)((longlong)puVar1 + 0x3c) = *(uint *)((longlong)puVar1 + 0x3c) & 0xff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 9) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14512c140 FUN_14512c140 body=214 status=ok
// SIG undefined FUN_14512c140(void)

undefined8 * FUN_14512c140(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x230,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderFXParams.cpp"
                      ,0x29);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_149c33760;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = 4;
    puVar4[1] = *(undefined8 *)(param_1 + 8);
    puVar4[2] = uVar1;
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
    puVar2 = (undefined8 *)(param_1 + 0x1c);
    puVar3 = (undefined8 *)((longlong)puVar4 + 0x1c);
    do {
      puVar7 = puVar3;
      puVar6 = puVar2;
      uVar1 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      uVar1 = puVar6[3];
      puVar7[2] = puVar6[2];
      puVar7[3] = uVar1;
      uVar1 = puVar6[5];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar1;
      uVar1 = puVar6[7];
      puVar7[6] = puVar6[6];
      puVar7[7] = uVar1;
      uVar1 = puVar6[9];
      puVar7[8] = puVar6[8];
      puVar7[9] = uVar1;
      uVar1 = puVar6[0xb];
      puVar7[10] = puVar6[10];
      puVar7[0xb] = uVar1;
      uVar1 = puVar6[0xd];
      puVar7[0xc] = puVar6[0xc];
      puVar7[0xd] = uVar1;
      uVar1 = puVar6[0xf];
      puVar7[0xe] = puVar6[0xe];
      puVar7[0xf] = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar6 + 0x10;
      puVar3 = puVar7 + 0x10;
    } while (lVar5 != 0);
    puVar7[0x10] = puVar6[0x10];
    *(undefined4 *)(puVar7 + 0x11) = *(undefined4 *)(puVar6 + 0x11);
    *(undefined2 *)((longlong)puVar7 + 0x8c) = *(undefined2 *)((longlong)puVar6 + 0x8c);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14512c270 FUN_14512c270 body=56 status=ok
// SIG undefined FUN_14512c270(void)

undefined8 FUN_14512c270(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14512c2b0 FUN_14512c2b0 body=202 status=ok
// SIG undefined FUN_14512c2b0(void)

undefined8 FUN_14512c2b0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  LPCSTR pCVar3;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  lVar2 = -1;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 5);
  MultiByteToWideChar(0xfde9,0,(LPCSTR)((longlong)param_2 + 0x16),-1,(LPWSTR)(param_1 + 0x20),0x104)
  ;
  do {
    lVar1 = lVar2 + 0x17;
    lVar2 = lVar2 + 1;
  } while (*(char *)((longlong)param_2 + lVar1) != '\0');
  pCVar3 = (LPCSTR)((longlong)param_2 + 0x16) + ((int)lVar2 + 1);
  *(undefined2 *)(param_1 + 0x226) = 0;
  *(CHAR *)(param_1 + 0x228) = *pCVar3;
  *(CHAR *)(param_1 + 0x229) = pCVar3[1];
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(pCVar3 + 2);
  return 1;
}



// FUNCTION 14512c380 FUN_14512c380 body=307 status=ok
// SIG undefined FUN_14512c380(void)

undefined8 FUN_14512c380(longlong param_1,undefined2 param_2,LPCSTR param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_3;
    return 1;
  case 1:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_3;
    return 1;
  case 2:
    break;
  case 3:
    *(CHAR *)(param_1 + 0x228) = *param_3;
    return 1;
  case 4:
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)param_3;
    return 1;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)param_3;
    return 1;
  case 6:
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_3;
    return 1;
  case 7:
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)param_3;
    return 1;
  case 8:
    *(CHAR *)(param_1 + 0x229) = *param_3;
    return 1;
  case 9:
    MultiByteToWideChar(0xfde9,0,param_3,-1,(LPWSTR)(param_1 + 0x20),0x104);
    *(undefined2 *)(param_1 + 0x226) = 0;
    return 1;
  case 10:
    *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)param_3;
    return 1;
  default:
    uVar1 = 0x1f;
  }
  return uVar1;
}



// FUNCTION 14512c4e0 FUN_14512c4e0 body=43 status=ok
// SIG undefined FUN_14512c4e0(void)

undefined8 * FUN_14512c4e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 14512c510 FUN_14512c510 body=53 status=ok
// SIG undefined FUN_14512c510(void)

void FUN_14512c510(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x230,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderFXParams.cpp"
                      ,0x13);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c33760;
    return;
  }
  return;
}



// FUNCTION 14512c550 FUN_14512c550 body=584 status=ok
// SIG undefined FUN_14512c550(void)

undefined8
FUN_14512c550(undefined8 *param_1,longlong param_2,uint param_3,int param_4,short param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  bool bVar9;
  
  plVar6 = (longlong *)
           (**(code **)(*(longlong *)*param_1 + 8))
                     ((longlong *)*param_1,0x80,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderManager.cpp"
                      ,0x79);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    plVar6[5] = 0;
    if (param_1[3] == 0) {
      param_1[3] = plVar6;
      *plVar6 = 0;
    }
    else {
      *plVar6 = param_1[3];
      param_1[3] = plVar6;
    }
    *(short *)((longlong)plVar6 + 0x7a) = param_5;
    plVar6[1] = param_2;
    *(undefined4 *)((longlong)plVar6 + 0x74) = 0;
    uVar8 = 0;
    *(undefined1 *)(plVar6 + 0xf) = 0;
    *(undefined4 *)(plVar6 + 6) = 0x46464952;
    *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
    *(undefined4 *)(plVar6 + 7) = 0x45564157;
    *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x20746d66;
    *(undefined2 *)((longlong)plVar6 + 0x44) = 0xfffe;
    *(short *)((longlong)plVar6 + 0x46) = (short)(param_3 & 0xff);
    *(int *)(plVar6 + 9) = param_4;
    iVar1 = (param_3 & 0xff) * 2;
    *(int *)((longlong)plVar6 + 0x4c) = param_4 * iVar1;
    *(short *)(plVar6 + 10) = (short)iVar1;
    *(undefined2 *)((longlong)plVar6 + 0x52) = 0x10;
    *(undefined2 *)((longlong)plVar6 + 0x56) = 0;
    if (param_5 == 0) {
      *(undefined4 *)(plVar6 + 8) = 0x28;
      *(uint *)(plVar6 + 0xb) = param_3 >> 0xc;
      bVar9 = (param_3 & 0xf00) != 0x200;
      *(undefined2 *)((longlong)plVar6 + 0x54) = 0x16;
      uVar5 = 0x721;
      if (bVar9) {
        uVar5 = 0;
      }
      *(undefined4 *)((longlong)plVar6 + 0x5c) = 1;
      *(undefined2 *)(plVar6 + 0xc) = uVar5;
      uVar7 = 0x44;
      uVar5 = 0x11d3;
      if (bVar9) {
        uVar5 = 0x10;
      }
      *(undefined2 *)((longlong)plVar6 + 0x62) = uVar5;
      uVar2 = 0x86;
      if (bVar9) {
        uVar2 = 0x80;
      }
      *(undefined1 *)((longlong)plVar6 + 100) = uVar2;
      uVar2 = 0x44;
      if (bVar9) {
        uVar2 = uVar8;
      }
      *(undefined1 *)((longlong)plVar6 + 0x65) = uVar2;
      uVar3 = 0;
      uVar2 = 200;
      if (bVar9) {
        uVar2 = uVar3;
      }
      *(undefined1 *)((longlong)plVar6 + 0x66) = uVar2;
      uVar2 = 0xc1;
      if (bVar9) {
        uVar2 = 0xaa;
      }
      *(undefined1 *)((longlong)plVar6 + 0x67) = uVar2;
      uVar2 = 0xca;
      if (bVar9) {
        uVar2 = uVar3;
      }
      *(undefined1 *)(plVar6 + 0xd) = uVar2;
      uVar2 = uVar8;
      if (bVar9) {
        uVar2 = 0x38;
      }
      *(undefined1 *)((longlong)plVar6 + 0x69) = uVar2;
      if (bVar9) {
        uVar8 = 0x9b;
      }
      *(undefined1 *)((longlong)plVar6 + 0x6a) = uVar8;
      if (bVar9) {
        uVar3 = 0x71;
      }
      *(undefined1 *)((longlong)plVar6 + 0x6b) = uVar3;
      *(undefined8 *)((longlong)plVar6 + 0x6c) = 0x61746164;
    }
    else {
      *(undefined4 *)(plVar6 + 8) = 0x18;
      uVar7 = 0x34;
      *(undefined2 *)((longlong)plVar6 + 0x54) = 0;
      *(uint *)(plVar6 + 0xb) = param_3;
      *(undefined8 *)((longlong)plVar6 + 0x5c) = 0x61746164;
    }
    *(undefined4 *)((longlong)plVar6 + 0x34) = 0xffffffff;
    if (*(short *)((longlong)plVar6 + 0x7a) == 0) {
      *(undefined4 *)(plVar6 + 0xe) = 0xffffffff;
    }
    else {
      *(undefined4 *)(plVar6 + 0xc) = 0xffffffff;
    }
    cVar4 = FUN_14512c7a0(param_1,param_2,plVar6 + 6,uVar7);
    if (cVar4 != '\0') {
      *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
      if (*(short *)((longlong)plVar6 + 0x7a) != 0) {
        *(undefined4 *)(plVar6 + 0xc) = 0;
        return 1;
      }
      *(undefined4 *)(plVar6 + 0xe) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14512c7a0 FUN_14512c7a0 body=402 status=ok
// SIG undefined FUN_14512c7a0(void)

undefined8 FUN_14512c7a0(longlong param_1,longlong param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if (puVar1[1] == param_2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  do {
    if (param_4 == 0) {
      return 1;
    }
    if (*(int *)(puVar1 + 4) == 0) {
      lVar6 = puVar1[5];
      plVar2 = (longlong *)*DAT_14c79d200;
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*plVar2 + 8))
                          (plVar2,0x20000,
                           "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderManager.cpp"
                           ,0x3b);
      }
      uVar7 = *(uint *)(puVar1 + 3);
      if ((uVar7 < *(uint *)((longlong)puVar1 + 0x1c)) ||
         ((cVar3 = FUN_14512ca90(puVar1 + 2), cVar3 != '\0' &&
          (uVar7 < *(uint *)((longlong)puVar1 + 0x1c))))) {
        uVar7 = *(uint *)(puVar1 + 3);
        *(uint *)(puVar1 + 3) = uVar7 + 1;
        plVar8 = (longlong *)(puVar1[2] + (ulonglong)uVar7 * 8);
      }
      else {
        plVar8 = (longlong *)0x0;
      }
      if ((lVar6 == 0) || (plVar8 == (longlong *)0x0)) {
        if (puVar1[5] != 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,lVar6);
          puVar1[5] = 0;
        }
        if (plVar8 == (longlong *)0x0) {
          return 0;
        }
        *(int *)(puVar1 + 3) = *(int *)(puVar1 + 3) + -1;
        return 0;
      }
      *plVar8 = lVar6;
      puVar1[5] = 0;
    }
    uVar4 = 0x20000 - *(uint *)(puVar1 + 4);
    uVar7 = param_4;
    if (uVar4 < param_4) {
      uVar7 = uVar4;
    }
    memcpy((void *)((ulonglong)*(uint *)(puVar1 + 4) +
                   *(longlong *)(puVar1[2] + -8 + (ulonglong)*(uint *)(puVar1 + 3) * 8)),param_3,
           (ulonglong)uVar7);
    if (*(short *)((longlong)puVar1 + 0x7a) == 0) {
      *(uint *)(puVar1 + 0xe) = *(int *)(puVar1 + 0xe) + uVar7;
      iVar5 = *(int *)(puVar1 + 0xe) + 0x3c;
    }
    else {
      *(uint *)(puVar1 + 0xc) = *(int *)(puVar1 + 0xc) + uVar7;
      iVar5 = *(int *)(puVar1 + 0xc) + 0x2c;
    }
    *(int *)((longlong)puVar1 + 0x34) = iVar5;
    *(uint *)(puVar1 + 4) = *(int *)(puVar1 + 4) + uVar7;
    if (*(int *)(puVar1 + 4) == 0x20000) {
      *(undefined4 *)(puVar1 + 4) = 0;
    }
    param_3 = (void *)((longlong)param_3 + (ulonglong)uVar7);
    param_4 = param_4 - uVar7;
  } while( true );
}



// FUNCTION 14512c940 FUN_14512c940 body=36 status=ok
// SIG undefined FUN_14512c940(void)

void FUN_14512c940(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    while (plVar1[1] != param_2) {
      plVar1 = (longlong *)*plVar1;
      if (plVar1 == (longlong *)0x0) {
        return;
      }
    }
    *(undefined1 *)(plVar1 + 0xf) = 1;
  }
  return;
}



// FUNCTION 14512c970 FUN_14512c970 body=186 status=ok
// SIG undefined FUN_14512c970(void)

void FUN_14512c970(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14c79d200;
  if (DAT_14c79d200 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == 0x80) {
    for (puVar1 = (undefined8 *)DAT_14c79d200[3]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      *(undefined1 *)(puVar1 + 0xf) = 1;
    }
    if (puVar2[3] == 0) goto LAB_14512c9ff;
    do {
      FUN_14512cc50(puVar2);
      for (puVar1 = (undefined8 *)puVar2[3]; puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        (**(code **)(*(longlong *)puVar1[1] + 0x68))();
      }
    } while (puVar2[3] != 0);
  }
  else {
    FUN_14512cc50(DAT_14c79d200);
  }
  if (puVar2[3] != 0) {
    return;
  }
LAB_14512c9ff:
  if (*(int *)(puVar2 + 1) != 0) {
    return;
  }
  puVar2[3] = 0;
  DAT_14c79d200 = (undefined8 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014512ca20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,puVar2);
  return;
}



// FUNCTION 14512ca30 FUN_14512ca30 body=93 status=ok
// SIG undefined FUN_14512ca30(void)

undefined8 * FUN_14512ca30(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (((DAT_14c79d200 == (undefined8 *)0x0) && (param_1 != (longlong *)0x0)) &&
     (puVar1 = (undefined8 *)
               (**(code **)(*param_1 + 8))
                         (param_1,0x20,
                          "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderManager.cpp"
                          ,0xeb), puVar1 != (undefined8 *)0x0)) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    DAT_14c79d200 = puVar1;
    return puVar1;
  }
  return DAT_14c79d200;
}



// FUNCTION 14512ca90 FUN_14512ca90 body=235 status=ok
// SIG undefined FUN_14512ca90(void)

undefined8 FUN_14512ca90(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  void *_Src;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  _Src = (void *)*param_1;
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Dst = (void *)(**(code **)(*(longlong *)*DAT_14c79d200 + 8))
                           ((longlong *)*DAT_14c79d200,(ulonglong)(iVar2 + uVar1) << 3,
                            "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkRecorder\\AkRecorderManager.h"
                            ,0x34);
  if (_Src == (void *)0x0) {
    if (_Dst == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 == (void *)0x0) || ((void *)*param_1 == _Dst)) goto LAB_14512cb57;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        *(undefined8 *)((longlong)_Dst + uVar3 * 8) = *(undefined8 *)(*param_1 + uVar3 * 8);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    _Src = (void *)*param_1;
  }
  else {
    if (_Dst == (void *)0x0) {
      return 0;
    }
    memcpy(_Dst,_Src,uVar4 * 8);
  }
  (**(code **)(*(longlong *)*DAT_14c79d200 + 0x10))((longlong *)*DAT_14c79d200,_Src);
LAB_14512cb57:
  *param_1 = (longlong)_Dst;
  *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
  return 1;
}



// FUNCTION 14512cb80 FUN_14512cb80 body=197 status=ok
// SIG undefined FUN_14512cb80(void)

longlong FUN_14512cb80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)*DAT_14c79d200;
  if ((*(int *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(param_1 + 0x18) != 0)) {
    do {
      (**(code **)(*plVar1 + 0x10))
                (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(*(longlong *)*DAT_14c79d200 + 0x10))();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14512cc50 FUN_14512cc50 body=590 status=ok
// SIG undefined FUN_14512cc50(void)

void FUN_14512cc50(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  int local_res8 [2];
  undefined1 local_res10 [16];
  
  puVar2 = (undefined8 *)param_1[3];
  puVar5 = (undefined8 *)0x0;
joined_r0x00014512cc67:
  do {
    puVar4 = puVar2;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    iVar7 = 1;
    if ((*(int *)((longlong)puVar4 + 0x74) == 1) &&
       (iVar6 = (**(code **)(*(longlong *)puVar4[1] + 0x60))(), iVar6 != 2)) {
      if (iVar6 == 1) {
        if (*(int *)(puVar4 + 3) == 0) {
LAB_14512cd06:
          if (*(char *)(puVar4 + 0xf) != '\0') {
            (**(code **)(*(longlong *)puVar4[1] + 0x48))((longlong *)puVar4[1],0,0);
            uVar8 = 0x34;
            if (*(short *)((longlong)puVar4 + 0x7a) == 0) {
              uVar8 = 0x44;
            }
            iVar7 = (**(code **)(*(longlong *)puVar4[1] + 0x38))
                              ((longlong *)puVar4[1],puVar4 + 6,uVar8,0,0x32,
                               1.31072e+08 / (float)*(uint *)((longlong)puVar4 + 0x4c),local_res10);
            *(undefined4 *)((longlong)puVar4 + 0x74) = 2;
            goto LAB_14512cd85;
          }
        }
        else {
          if (puVar4[5] != 0) {
            (**(code **)(*(longlong *)*DAT_14c79d200 + 0x10))();
          }
          puVar2 = (undefined8 *)puVar4[2];
          puVar4[5] = *puVar2;
          if (1 < *(uint *)(puVar4 + 3)) {
            memmove(puVar2,puVar2 + 1,(ulonglong)(*(uint *)(puVar4 + 3) * 8 - 8));
          }
          *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + -1;
          if (*(int *)(puVar4 + 3) == 0) goto LAB_14512cd06;
        }
        *(undefined4 *)((longlong)puVar4 + 0x74) = 0;
      }
      else {
        iVar7 = 2;
      }
    }
LAB_14512cd85:
    if (*(int *)((longlong)puVar4 + 0x74) == 0) {
      uVar1 = *(uint *)(puVar4 + 3);
      if (uVar1 < 2) {
        if (uVar1 != 1) {
          bVar9 = *(char *)(puVar4 + 0xf) == '\0';
          goto LAB_14512ce2f;
        }
        if (*(char *)(puVar4 + 0xf) == '\0') goto LAB_14512ce31;
      }
      local_res8[0] = 0x20000;
      if (((uVar1 == 1) && (*(char *)(puVar4 + 0xf) != '\0')) && (*(int *)(puVar4 + 4) != 0)) {
        local_res8[0] = *(int *)(puVar4 + 4);
      }
      iVar7 = (**(code **)(*(longlong *)puVar4[1] + 0x38))
                        ((longlong *)puVar4[1],*(undefined8 *)puVar4[2],local_res8[0],0,0x32,
                         1.31072e+08 / (float)*(uint *)((longlong)puVar4 + 0x4c),local_res8);
      *(undefined4 *)((longlong)puVar4 + 0x74) = 1;
LAB_14512ce31:
      if (iVar7 == 1) {
        puVar2 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        goto joined_r0x00014512cc67;
      }
    }
    else {
      if (*(int *)((longlong)puVar4 + 0x74) != 2) goto LAB_14512ce31;
      iVar6 = (**(code **)(*(longlong *)puVar4[1] + 0x60))();
      bVar9 = iVar6 == 2;
LAB_14512ce2f:
      if (bVar9) goto LAB_14512ce31;
    }
    puVar2 = (undefined8 *)*puVar4;
    if (puVar4 == (undefined8 *)param_1[3]) {
      param_1[3] = puVar2;
    }
    else {
      *puVar5 = puVar2;
    }
    plVar3 = (longlong *)*param_1;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_14512cb80(puVar4,0);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  } while( true );
}



// FUNCTION 14512cea0 FUN_14512cea0 body=60 status=ok
// SIG undefined FUN_14512cea0(void)

void FUN_14512cea0(longlong *param_1,int param_2)

{
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x40))(param_1,0x14512c903,0,0x84,FUN_14512c970,0x90,0);
  }
  return;
}



// FUNCTION 14512cee0 FUN_14512cee0 body=640 status=ok
// SIG undefined FUN_14512cee0(void)

int FUN_14512cee0(longlong *param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_1[4] == 0) {
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,param_3[1] << 10,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\audio_master.h"
                       ,0x9a);
    param_1[4] = lVar1;
    if (lVar1 == 0) {
      return -0x7f7ffff6;
    }
  }
  iVar2 = 0;
  iVar5 = param_3[1] << 10;
  if (*param_1 == 0) {
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,iVar5,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\audio_master_common.h"
                       ,0x109);
    *param_1 = lVar1;
  }
  if (param_1[1] == 0) {
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,iVar5,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\audio_master_common.h"
                       ,0x10b);
    param_1[1] = lVar1;
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,iVar5,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\audio_master_common.h"
                       ,0x10d);
    param_1[2] = lVar1;
  }
  if (((*param_1 == 0) || (param_1[1] == 0)) || (lVar1 == 0)) {
    iVar2 = -0x7f7ffff6;
  }
  if ((char)param_3[0xf] == '\x01') {
    if (iVar2 != 0) {
      return iVar2;
    }
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,0x400,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\audio_master_common.h"
                       ,0x117);
    param_1[3] = lVar1;
    if (lVar1 == 0) {
      iVar2 = -0x7f7ffff6;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = 0;
  if (param_1[0xb3] == 0) {
    uVar3 = param_3[1];
    _Dst = (void *)(**(code **)(*param_2 + 8))
                             (param_2,(ulonglong)(uVar3 << 9),
                              "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\modules\\limiter.h"
                              ,0x70);
    param_1[0xb3] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      iVar2 = -0x7f7ffff6;
    }
    else {
      memset(_Dst,0,(ulonglong)(uVar3 << 9));
    }
  }
  if ((char)param_3[0xf] == '\x01') {
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = 0;
    if (*param_3 != 0) {
      do {
        if ((uVar3 == 0) && (param_1[0xb4] == 0)) {
          lVar1 = (**(code **)(*param_2 + 8))
                            (param_2,0x400,
                             "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\modules\\limiter.h"
                             ,0x7d);
          param_1[0xb4] = lVar1;
          if (lVar1 == 0) {
            return -0x7f7ffff6;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_3);
    }
  }
  if (iVar2 == 0) {
    plVar6 = param_1 + 0x329;
    uVar3 = 0;
    do {
      iVar2 = 0;
      if ((((char)param_3[0xf] == '\x01') && (uVar3 < *(uint *)(param_1 + 0x175))) &&
         (uVar4 = 0, *param_3 != 0)) {
        do {
          if ((uVar4 == 0) && (plVar6[0x42] == 0)) {
            lVar1 = (**(code **)(*param_2 + 8))
                              (param_2,0x400,
                               "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\audiomaster\\include\\modules\\compressor.h"
                               ,0x6a);
            plVar6[0x42] = lVar1;
            if (lVar1 == 0) {
              iVar2 = -0x7f7ffff6;
              goto LAB_14512d135;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *param_3);
      }
      uVar3 = uVar3 + 1;
      plVar6 = plVar6 + 0x4e;
    } while (uVar3 < 4);
LAB_14512d135:
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x461) = 1;
    }
  }
  return iVar2;
}



// FUNCTION 14512d160 FUN_14512d160 body=1492 status=ok
// SIG undefined FUN_14512d160(void)

undefined8
FUN_14512d160(longlong param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5,
             uint param_6,uint param_7,undefined4 param_8,undefined4 param_9,undefined1 param_10,
             uint param_11,undefined8 param_12)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 local_118 [2];
  longlong alStack_110 [7];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_b8 [2];
  undefined4 *local_b0;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar2 = 0;
  if (((param_6 == 0) || (((param_1 != 0 && (param_2 != 0)) && (param_5 != 0)))) &&
     (((param_4 != 0 && (param_6 < 0x101)) && (param_7 < 0xd)))) {
    if ((param_11 & 1) == 0) {
      if (param_7 != *(uint *)(param_4 + 0x34)) goto LAB_14512d714;
    }
    else {
      FUN_1453c9200(param_9,param_7,&local_68);
      local_9c = local_68;
      uStack_94 = uStack_60;
      local_a8 = param_7;
      local_a4 = param_8;
      local_a0 = param_9;
      local_7c = local_48;
      uStack_78 = uStack_44;
      uStack_74 = uStack_40;
      uStack_70 = uStack_3c;
      local_6c = param_10;
      local_8c = local_58;
      uStack_88 = uStack_54;
      uStack_84 = uStack_50;
      uStack_80 = uStack_4c;
      iVar1 = FUN_14512cee0(param_4,param_12,&local_a8);
      if (iVar1 != 0) {
        return 0x80800005;
      }
      local_c4 = param_9;
      local_c0 = param_10;
      local_cc = param_7;
      local_c8 = param_8;
      local_d4 = 48000;
      local_d8 = 0x100;
      local_d0 = 0xc;
      uVar2 = FUN_1453c8450(param_4 + 0x28,&local_d8,param_11 >> 0x10);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    lVar5 = param_4 + 0x28;
    if ((param_11 & 2) != 0) {
      if (param_3 == (int *)0x0) goto LAB_14512d714;
      iVar1 = *param_3;
      uVar6 = 0;
      if (iVar1 == 1) {
        if ((param_11 & 4) != 0) {
          param_3[0x19] = 1;
        }
        uVar7 = 0;
        do {
          uVar2 = 0;
          uVar8 = 1 << ((byte)uVar7 & 0x1f);
          if (uVar8 == 1) {
            lVar3 = 8;
            local_118[uVar7 * 4] = 0;
          }
          else if (uVar8 == 2) {
            uVar2 = 1;
            lVar3 = 0x58;
            local_118[uVar7 * 4] = 1;
          }
          else if (uVar8 == 4) {
            uVar2 = 2;
            lVar3 = 0xcc;
            local_118[uVar7 * 4] = 2;
          }
          else {
            if (uVar8 != 8) {
              return 0;
            }
            uVar2 = 3;
            lVar3 = 0xdc;
            local_118[uVar7 * 4] = 3;
          }
          alStack_110[uVar7 * 2] = lVar3 + (longlong)param_3;
          uVar2 = FUN_1453c8870(lVar5,uVar2,(param_3[1] & uVar8) != 0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar6 = (short)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < 4);
      }
      else if (iVar1 == 2) {
        if ((param_11 & 4) != 0) {
          param_3[0x19] = 1;
          iVar1 = param_3[0x35];
          param_3[0x35] = iVar1;
          param_3[0x36] = iVar1;
          param_3[0x37] = iVar1;
          param_3[0x38] = iVar1;
          param_3[0x39] = iVar1;
          param_3[0x3a] = iVar1;
          param_3[0x3b] = iVar1;
          param_3[0x3c] = iVar1;
        }
        uVar7 = 0;
        do {
          uVar2 = 0;
          uVar8 = 1 << ((byte)uVar7 & 0x1f);
          if (uVar8 == 1) {
            lVar3 = 8;
            local_118[uVar7 * 4] = 0;
          }
          else if (uVar8 == 2) {
            uVar2 = 1;
            lVar3 = 0x58;
            local_118[uVar7 * 4] = 1;
          }
          else if (uVar8 == 4) {
            uVar2 = 2;
            lVar3 = 0xcc;
            local_118[uVar7 * 4] = 2;
          }
          else {
            if (uVar8 != 8) {
              return 0;
            }
            uVar2 = 3;
            lVar3 = 0xfc;
            local_118[uVar7 * 4] = 3;
          }
          alStack_110[uVar7 * 2] = lVar3 + (longlong)param_3;
          uVar2 = FUN_1453c8870(lVar5,uVar2,(param_3[1] & uVar8) != 0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar6 = (short)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < 4);
      }
      else if (iVar1 == 3) {
        if ((param_11 & 4) != 0) {
          param_3[0x21] = 1;
          param_3[0x55] = 1;
          iVar1 = param_3[0x44];
          param_3[0x44] = iVar1;
          param_3[0x45] = iVar1;
          param_3[0x46] = iVar1;
          param_3[0x47] = iVar1;
          param_3[0x48] = iVar1;
          param_3[0x49] = iVar1;
          param_3[0x4a] = iVar1;
          param_3[0x4b] = iVar1;
        }
        uVar7 = 0;
        do {
          uVar2 = 0;
          uVar8 = 1 << ((byte)uVar7 & 0x1f);
          if (uVar8 == 1) {
            lVar3 = 8;
            local_118[uVar7 * 4] = 0;
          }
          else if (uVar8 == 2) {
            uVar2 = 1;
            lVar3 = 0x78;
            local_118[uVar7 * 4] = 1;
          }
          else if (uVar8 == 4) {
            uVar2 = 2;
            lVar3 = 0x108;
            local_118[uVar7 * 4] = 2;
          }
          else {
            if (uVar8 != 8) {
              return 0;
            }
            uVar2 = 3;
            lVar3 = 0x138;
            local_118[uVar7 * 4] = 3;
          }
          alStack_110[uVar7 * 2] = lVar3 + (longlong)param_3;
          uVar2 = FUN_1453c8870(lVar5,uVar2,(param_3[1] & uVar8) != 0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar6 = (short)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < 4);
      }
      else {
        if (iVar1 != 4) {
          return 0x80800007;
        }
        if ((param_11 & 4) != 0) {
          param_3[0x21] = 1;
          param_3[0x59] = 1;
          iVar1 = param_3[0x44];
          param_3[0x44] = iVar1;
          param_3[0x45] = iVar1;
          param_3[0x46] = iVar1;
          param_3[0x47] = iVar1;
          param_3[0x48] = iVar1;
          param_3[0x49] = iVar1;
          param_3[0x4a] = iVar1;
          param_3[0x4b] = iVar1;
          param_3[0x4c] = iVar1;
          param_3[0x4d] = iVar1;
          param_3[0x4e] = iVar1;
          param_3[0x4f] = iVar1;
        }
        do {
          uVar2 = 0;
          uVar8 = 1 << ((byte)uVar6 & 0x1f);
          if (uVar8 == 1) {
            lVar4 = (ulonglong)uVar6 * 0x10;
            lVar3 = 8;
            local_118[(ulonglong)uVar6 * 4] = 0;
          }
          else if (uVar8 == 2) {
            uVar2 = 1;
            lVar4 = (ulonglong)uVar6 * 0x10;
            lVar3 = 0x78;
            local_118[(ulonglong)uVar6 * 4] = 1;
          }
          else if (uVar8 == 4) {
            uVar2 = 2;
            lVar4 = (ulonglong)uVar6 * 0x10;
            lVar3 = 0x108;
            local_118[(ulonglong)uVar6 * 4] = 2;
          }
          else {
            if (uVar8 != 8) {
              return 0;
            }
            uVar2 = 3;
            lVar4 = (ulonglong)uVar6 * 0x10;
            lVar3 = 0x148;
            local_118[(ulonglong)uVar6 * 4] = 3;
          }
          *(longlong *)((longlong)alStack_110 + lVar4) = lVar3 + (longlong)param_3;
          uVar2 = FUN_1453c8870(lVar5,uVar2,(param_3[1] & uVar8) != 0);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 4);
      }
      local_b0 = local_118;
      local_b8[0] = 4;
      uVar2 = FUN_1453c8740(lVar5,local_b8,0xffff,param_11 >> 0x10,param_12);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if ((param_6 != 0) &&
       (uVar2 = FUN_1453c88e0(lVar5,param_1,param_2,param_4,param_6), (int)uVar2 == 0)) {
      uVar2 = FUN_1453c8a20(lVar5,param_5);
    }
  }
  else {
LAB_14512d714:
    uVar2 = 0x80260201;
  }
  return uVar2;
}



// FUNCTION 14512d740 FUN_14512d740 body=928 status=ok
// SIG undefined FUN_14512d740(void)

undefined8 FUN_14512d740(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_a8 [8];
  int *local_a0;
  int *local_90;
  int *local_80;
  int *local_70;
  undefined4 local_68 [2];
  int *local_60;
  undefined4 local_58;
  int *local_50;
  undefined4 local_48;
  int *local_40;
  undefined4 local_38;
  int *local_30;
  undefined4 local_28 [2];
  undefined1 *local_20;
  undefined4 local_18 [2];
  undefined4 *local_10;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar1 = *param_1;
  if (3 < iVar1 - 1U) {
    return 0x80800007;
  }
  local_10 = local_68;
  local_18[0] = 4;
  local_20 = local_a8;
  local_28[0] = 4;
  local_68[0] = 0;
  local_58 = 1;
  local_48 = 2;
  local_38 = 3;
  if (iVar1 == 1) {
    if (param_1[0x3f] != 0) {
      return 0x80800008;
    }
    if (param_1[0x40] != 0) {
      return 0x80800008;
    }
    local_50 = param_1 + 0x16;
    local_40 = param_1 + 0x33;
    local_30 = param_1 + 0x37;
  }
  else if (iVar1 == 2) {
    if (param_1[0x47] != 0) {
      return 0x80800008;
    }
    if (param_1[0x48] != 0) {
      return 0x80800008;
    }
    local_50 = param_1 + 0x16;
    local_40 = param_1 + 0x33;
    local_30 = param_1 + 0x3f;
  }
  else if (iVar1 == 3) {
    if (param_1[0x56] != 0) {
      return 0x80800008;
    }
    if (param_1[0x57] != 0) {
      return 0x80800008;
    }
    local_50 = param_1 + 0x1e;
    local_40 = param_1 + 0x42;
    local_30 = param_1 + 0x4e;
  }
  else {
    if (iVar1 != 4) {
      return 0x80800008;
    }
    if (param_1[0x5a] != 0) {
      return 0x80800008;
    }
    if (param_1[0x5b] != 0) {
      return 0x80800008;
    }
    local_50 = param_1 + 0x1e;
    local_40 = param_1 + 0x42;
    local_30 = param_1 + 0x52;
  }
  local_60 = param_1 + 2;
  iVar2 = param_1[1];
  iVar3 = *param_2;
  if (iVar3 == 1) {
LAB_14512d8fb:
    if (iVar3 == 1) {
      param_2[1] = iVar2;
      local_90 = param_2 + 0x16;
      local_80 = param_2 + 0x33;
      local_70 = param_2 + 0x37;
      param_2[0x3f] = 0;
      param_2[0x40] = 0;
      goto LAB_14512da9b;
    }
LAB_14512d936:
    if (iVar3 == 2) {
      local_80 = param_2 + 0x33;
      local_90 = param_2 + 0x16;
      local_70 = param_2 + 0x3f;
      *local_80 = 0x1020002;
      param_2[0x34] = 0x30;
      param_2[1] = iVar2;
      param_2[0x47] = 0;
      param_2[0x48] = 0;
      goto LAB_14512da9b;
    }
LAB_14512d982:
    if (iVar3 == 3) {
      local_90 = param_2 + 0x1e;
      local_80 = param_2 + 0x42;
      local_70 = param_2 + 0x4e;
      param_2[2] = 0x1020000;
      param_2[3] = 0x70;
      *local_90 = 0x1020001;
      param_2[0x1f] = 0x90;
      *local_80 = 0x1020002;
      param_2[0x43] = 0x30;
      *local_70 = 0x1020003;
      param_2[0x4f] = 0x20;
      param_2[1] = iVar2;
      param_2[0x56] = 0;
      param_2[0x57] = 0;
      goto LAB_14512da9b;
    }
  }
  else {
    if (iVar3 == 2) goto LAB_14512d936;
    if (iVar3 == 3) goto LAB_14512d982;
    if (iVar3 != 4) {
      *param_2 = iVar1;
      iVar3 = iVar1;
      goto LAB_14512d8fb;
    }
  }
  if (iVar3 != 4) {
    return 0x80800008;
  }
  local_90 = param_2 + 0x1e;
  local_80 = param_2 + 0x42;
  local_70 = param_2 + 0x52;
  param_2[2] = 0x1020000;
  param_2[3] = 0x70;
  *local_90 = 0x1020001;
  param_2[0x1f] = 0x90;
  *local_80 = 0x1030002;
  param_2[0x43] = 0x40;
  *local_70 = 0x1020003;
  param_2[0x53] = 0x20;
  param_2[1] = iVar2;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
LAB_14512da9b:
  local_a0 = param_2 + 2;
  uVar4 = FUN_1453c8c60(local_18,local_28,param_3);
  return uVar4;
}



// FUNCTION 14512dae0 FUN_14512dae0 body=329 status=ok
// SIG undefined FUN_14512dae0(void)

void FUN_14512dae0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1453c8690(param_1 + 5);
  if (param_1[4] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[4] = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[3] = 0;
  }
  if (param_1[0xb3] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0xb3] = 0;
  }
  plVar1 = param_1 + 0xb4;
  lVar3 = 0xc;
  do {
    if (*plVar1 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 4;
  plVar1 = param_1 + 0x36b;
  do {
    lVar4 = 0xc;
    plVar2 = plVar1;
    do {
      if (*plVar2 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    plVar1 = plVar1 + 0x4e;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined1 *)(param_1 + 0x461) = 0;
  return;
}



// FUNCTION 14512dc30 FUN_14512dc30 body=117 status=ok
// SIG undefined FUN_14512dc30(void)

undefined8 * FUN_14512dc30(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_149c33b60;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 1) = 4;
  *(undefined4 *)(param_1 + 2) = 0x1020000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x70;
  *(undefined4 *)(param_1 + 0x10) = 0x1020001;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x90;
  *(undefined4 *)(param_1 + 0x22) = 0x1030002;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x40;
  *(undefined4 *)(param_1 + 0x2a) = 0x1020003;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x20;
  return param_1;
}



// FUNCTION 14512dcb0 FUN_14512dcb0 body=291 status=ok
// SIG undefined FUN_14512dcb0(void)

undefined8 * FUN_14512dcb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar4 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x198,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\MasteringSuiteFXParams.cpp"
                      ,0xb5);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 2;
    *puVar4 = &PTR_FUN_149c33b60;
    puVar2 = (undefined8 *)(param_1 + 8);
    puVar3 = puVar4 + 1;
    do {
      puVar6 = puVar3;
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar1;
      uVar1 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar1;
      uVar1 = puVar5[5];
      puVar6[4] = puVar5[4];
      puVar6[5] = uVar1;
      uVar1 = puVar5[7];
      puVar6[6] = puVar5[6];
      puVar6[7] = uVar1;
      uVar1 = puVar5[9];
      puVar6[8] = puVar5[8];
      puVar6[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar6[10] = puVar5[10];
      puVar6[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar6[0xc] = puVar5[0xc];
      puVar6[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar6[0xe] = puVar5[0xe];
      puVar6[0xf] = uVar1;
      lVar7 = lVar7 + -1;
      puVar2 = puVar5 + 0x10;
      puVar3 = puVar6 + 0x10;
    } while (lVar7 != 0);
    uVar1 = puVar5[0x11];
    puVar6[0x10] = puVar5[0x10];
    puVar6[0x11] = uVar1;
    uVar1 = puVar5[0x13];
    puVar6[0x12] = puVar5[0x12];
    puVar6[0x13] = uVar1;
    uVar1 = puVar5[0x15];
    puVar6[0x14] = puVar5[0x14];
    puVar6[0x15] = uVar1;
    uVar1 = puVar5[0x17];
    puVar6[0x16] = puVar5[0x16];
    puVar6[0x17] = uVar1;
    uVar1 = puVar5[0x19];
    puVar6[0x18] = puVar5[0x18];
    puVar6[0x19] = uVar1;
    uVar1 = puVar5[0x1b];
    puVar6[0x1a] = puVar5[0x1a];
    puVar6[0x1b] = uVar1;
    uVar1 = puVar5[0x1d];
    puVar6[0x1c] = puVar5[0x1c];
    puVar6[0x1d] = uVar1;
    *(undefined1 *)(puVar4 + 0x2f) = *(undefined1 *)(param_1 + 0x178);
    uVar1 = *(undefined8 *)(param_1 + 0x184);
    *(undefined8 *)((longlong)puVar4 + 0x17c) = *(undefined8 *)(param_1 + 0x17c);
    *(undefined8 *)((longlong)puVar4 + 0x184) = uVar1;
    *(undefined8 *)((longlong)puVar4 + 0x18c) = *(undefined8 *)(param_1 + 0x18c);
    *(undefined4 *)((longlong)puVar4 + 0x194) = *(undefined4 *)(param_1 + 0x194);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14512dde0 FUN_14512dde0 body=580 status=ok
// SIG undefined FUN_14512dde0(void)

undefined8 FUN_14512dde0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined8 local_14;
  undefined4 local_c;
  
  if (param_4 == 0) {
    uStack_dc = 0x447a000043160000;
    uStack_d4 = 0x45bb8000;
    lVar7 = 2;
    uStack_160 = 0;
    local_cc = 0x3d4ccccd40000000;
    uStack_c4 = 0x3d4ccccd;
    uStack_150 = 0;
    local_bc = 0;
    uStack_b4 = 0x3d4ccccd40000000;
    uStack_140 = 0;
    local_ac = 0x3d4ccccd;
    uStack_a4 = 0;
    uStack_130 = 0;
    local_9c = 0x3d4ccccd40000000;
    uStack_94 = 0x3d4ccccd;
    uStack_120 = 0;
    uStack_110 = 0;
    local_8c = 0;
    uStack_84 = 0x3d4ccccd40000000;
    uStack_ec = 0;
    uStack_e4 = 0;
    local_74 = 0;
    local_38 = 0;
    local_c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_178 = 4;
    local_58 = 0;
    uStack_50 = 0;
    uStack_170 = 0x1020000;
    local_48 = 0;
    uStack_40 = 0;
    uStack_16c = 0x70;
    local_24 = 0;
    uStack_1c = 0;
    local_168 = 6;
    uStack_15c = 0x42c80000;
    local_158 = 0x3f800000;
    uStack_14c = 0x43480000;
    local_148 = 0x3f800000;
    uStack_13c = 0x43fa0000;
    local_138 = 0x3f800000;
    uStack_12c = 0x447a0000;
    local_128 = 0x3f800000;
    uStack_11c = 0x453b8000;
    local_118 = 0x3f800000;
    uStack_10c = 0x45bb8000;
    local_108 = 0x3f800000;
    uStack_100 = 0x1020001;
    uStack_fc = 0x90;
    local_f8 = 4;
    uStack_f4 = 1;
    local_7c = 0x3d4ccccd;
    local_70 = 0x1030002;
    local_6c = 0x40;
    local_30 = 0x1020003;
    local_2c = 0x20;
    local_28 = 2;
    local_14 = 1;
    plVar5 = param_1 + 1;
    plVar6 = &local_178;
    do {
      plVar10 = plVar6;
      plVar9 = plVar5;
      lVar1 = plVar10[1];
      lVar2 = plVar10[2];
      lVar3 = plVar10[3];
      *plVar9 = *plVar10;
      plVar9[1] = lVar1;
      lVar1 = plVar10[4];
      lVar4 = plVar10[5];
      plVar9[2] = lVar2;
      plVar9[3] = lVar3;
      lVar2 = plVar10[6];
      lVar3 = plVar10[7];
      plVar9[4] = lVar1;
      plVar9[5] = lVar4;
      lVar1 = plVar10[8];
      lVar4 = plVar10[9];
      plVar9[6] = lVar2;
      plVar9[7] = lVar3;
      lVar2 = plVar10[10];
      lVar3 = plVar10[0xb];
      plVar9[8] = lVar1;
      plVar9[9] = lVar4;
      lVar1 = plVar10[0xc];
      lVar4 = plVar10[0xd];
      plVar9[10] = lVar2;
      plVar9[0xb] = lVar3;
      lVar2 = plVar10[0xe];
      lVar3 = plVar10[0xf];
      plVar9[0xc] = lVar1;
      plVar9[0xd] = lVar4;
      plVar9[0xe] = lVar2;
      plVar9[0xf] = lVar3;
      lVar7 = lVar7 + -1;
      plVar5 = plVar9 + 0x10;
      plVar6 = plVar10 + 0x10;
    } while (lVar7 != 0);
    lVar7 = plVar10[0x10];
    lVar1 = plVar10[0x11];
    *(undefined1 *)(param_1 + 0x2f) = 1;
    lVar2 = plVar10[0x12];
    lVar3 = plVar10[0x13];
    plVar9[0x10] = lVar7;
    plVar9[0x11] = lVar1;
    lVar7 = plVar10[0x14];
    lVar1 = plVar10[0x15];
    plVar9[0x12] = lVar2;
    plVar9[0x13] = lVar3;
    lVar2 = plVar10[0x16];
    lVar3 = plVar10[0x17];
    plVar9[0x14] = lVar7;
    plVar9[0x15] = lVar1;
    lVar7 = plVar10[0x18];
    lVar1 = plVar10[0x19];
    plVar9[0x16] = lVar2;
    plVar9[0x17] = lVar3;
    lVar2 = plVar10[0x1a];
    lVar3 = plVar10[0x1b];
    plVar9[0x18] = lVar7;
    plVar9[0x19] = lVar1;
    lVar7 = plVar10[0x1c];
    lVar1 = plVar10[0x1d];
    plVar9[0x1a] = lVar2;
    plVar9[0x1b] = lVar3;
    plVar9[0x1c] = lVar7;
    plVar9[0x1d] = lVar1;
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014512e020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar8;
}



// FUNCTION 14512e030 FUN_14512e030 body=56 status=ok
// SIG undefined FUN_14512e030(void)

undefined8 FUN_14512e030(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14512e070 FUN_14512e070 body=1558 status=ok
// SIG undefined FUN_14512e070(void)

undefined8 FUN_14512e070(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  cVar1 = *param_2;
  *(uint *)(param_1 + 0xc) = (uint)(cVar1 == '\0');
  uVar2 = uVar5;
  if (param_2[1] == '\0') {
    uVar2 = 2;
  }
  uVar2 = uVar2 | cVar1 == '\0';
  *(uint *)(param_1 + 0xc) = uVar2;
  uVar4 = uVar5;
  if (param_2[2] == '\0') {
    uVar4 = 4;
  }
  uVar4 = uVar4 | uVar2;
  *(uint *)(param_1 + 0xc) = uVar4;
  uVar2 = uVar5;
  if (param_2[3] == '\0') {
    uVar2 = 8;
  }
  *(uint *)(param_1 + 0xc) = uVar2 | uVar4;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar4 = 0;
  uVar2 = uVar4;
  if (param_2[8] == '\0') {
    uVar2 = 0xffffffff;
  }
  uVar3 = (uVar2 ^ *(uint *)(param_1 + 0x194)) & 1 ^ *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = uVar3;
  uVar2 = uVar4;
  if (param_2[9] == '\0') {
    uVar2 = 0xffffffff;
  }
  uVar3 = (uVar2 ^ uVar3) & 2 ^ uVar3;
  *(uint *)(param_1 + 0x194) = uVar3;
  uVar2 = uVar4;
  if (param_2[10] == '\0') {
    uVar2 = 0xffffffff;
  }
  uVar3 = (uVar2 ^ uVar3) & 4 ^ uVar3;
  *(uint *)(param_1 + 0x194) = uVar3;
  uVar2 = uVar4;
  if (param_2[0xb] == '\0') {
    uVar2 = 0xffffffff;
  }
  uVar3 = (uVar2 ^ uVar3) & 8 ^ uVar3;
  *(uint *)(param_1 + 0x194) = uVar3;
  uVar2 = uVar4;
  if (param_2[0xc] == '\0') {
    uVar2 = 0xffffffff;
  }
  uVar3 = (uVar2 ^ uVar3) & 0x10 ^ uVar3;
  *(uint *)(param_1 + 0x194) = uVar3;
  uVar2 = uVar4;
  if (param_2[0xd] == '\0') {
    uVar2 = 0xffffffff;
  }
  *(uint *)(param_1 + 0x194) = (uVar2 ^ uVar3) & 0x20 ^ uVar3;
  uVar2 = *(uint *)(param_2 + 0xe);
  *(uint *)(param_1 + 0x17c) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1a);
  if ((*(byte *)(param_1 + 0x194) & 1) != 0) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  uVar2 = *(uint *)(param_2 + 0x1e);
  *(uint *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2a);
  if ((*(byte *)(param_1 + 0x194) & 2) != 0) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  uVar2 = *(uint *)(param_2 + 0x2e);
  *(uint *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x3a);
  if ((*(byte *)(param_1 + 0x194) & 4) != 0) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x40) = uVar2;
  uVar2 = *(uint *)(param_2 + 0x3e);
  *(uint *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x42);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x46);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x4a);
  if ((*(byte *)(param_1 + 0x194) & 8) != 0) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
  uVar2 = *(uint *)(param_2 + 0x4e);
  *(uint *)(param_1 + 0x18c) = uVar2;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x52);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x56);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x5a);
  if ((*(byte *)(param_1 + 0x194) & 0x10) != 0) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  uVar2 = *(uint *)(param_2 + 0x5e);
  *(uint *)(param_1 + 400) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x6a);
  if ((*(byte *)(param_1 + 0x194) & 0x20) != 0) {
    uVar2 = uVar5;
  }
  *(uint *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x72);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x76);
  cVar1 = param_2[0x7a];
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(uint *)(param_1 + 0x94) = (uint)(cVar1 != '\0');
  cVar1 = param_2[0x7b];
  *(uint *)(param_1 + 0x98) = (uint)(cVar1 == '\0');
  uVar2 = 2;
  if (param_2[0x7c] != '\0') {
    uVar2 = uVar4;
  }
  uVar2 = uVar2 | cVar1 == '\0';
  *(uint *)(param_1 + 0x98) = uVar2;
  uVar5 = 4;
  if (param_2[0x7d] != '\0') {
    uVar5 = uVar4;
  }
  uVar5 = uVar5 | uVar2;
  *(uint *)(param_1 + 0x98) = uVar5;
  uVar2 = 8;
  if (param_2[0x7e] != '\0') {
    uVar2 = uVar4;
  }
  *(uint *)(param_1 + 0x98) = uVar2 | uVar5;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x7f);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x83);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x87);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x8b);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x8f);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x93);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x97);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x9b);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x9f);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0xa3);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xa7);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xab);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xaf);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xb3);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xb7);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xbb);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xbf);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xc3);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 199);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xcb);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xcf);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xd3);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xd7);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0xdb);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0xdf);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0xe3);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0xeb);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0xef);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0xf3);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0xf7);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0xfb);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 0xff);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x103);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x107);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x10b);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x10f);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x113);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x117);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x11b);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x11f);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x123);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x127);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 299);
  cVar1 = param_2[0x12f];
  *(undefined1 *)(param_1 + 0x178) = 1;
  *(uint *)(param_1 + 0x16c) = (uint)(cVar1 != '\0');
  return 1;
}



// FUNCTION 14512e690 FUN_14512e690 body=920 status=ok
// SIG undefined FUN_14512e690(void)

undefined8 FUN_14512e690(longlong param_1,short param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if (param_2 < 0xc9) {
    if (param_2 == 200) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)param_3;
      goto LAB_14512ea14;
    }
    switch(param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
      uVar1 = 1 << ((byte)param_2 & 0x1f);
      if (*param_3 == '\0') {
        *(uint *)(param_1 + 0xc) = uVar1 | *(uint *)(param_1 + 0xc);
      }
      else {
        *(uint *)(param_1 + 0xc) = ~uVar1 & *(uint *)(param_1 + 0xc);
      }
      break;
    default:
      goto switchD_14512e6e5_caseD_4;
    case 100:
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_3;
      break;
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
      uVar1 = 0;
      if (*param_3 == '\0') {
        uVar1 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x194) =
           (uVar1 ^ *(uint *)(param_1 + 0x194)) & 1 << ((byte)(param_2 + -0x65) & 0x1f) ^
           *(uint *)(param_1 + 0x194);
      FUN_14512ec10(param_1,param_2 + -0x65);
      break;
    case 0x6e:
    case 0x78:
    case 0x82:
    case 0x8c:
    case 0x96:
    case 0xa0:
      *(undefined4 *)(param_1 + 0x17c + (ulonglong)(uint)((param_2 + -0x6e) / 10) * 4) =
           *(undefined4 *)param_3;
      FUN_14512ec10(param_1);
      break;
    case 0x6f:
    case 0x79:
    case 0x83:
    case 0x8d:
    case 0x97:
    case 0xa1:
      *(undefined4 *)(param_1 + 0x24 + (ulonglong)(uint)((param_2 + -0x6f) / 10) * 0x10) =
           *(undefined4 *)param_3;
      break;
    case 0x70:
    case 0x7a:
    case 0x84:
    case 0x8e:
    case 0x98:
    case 0xa2:
      *(undefined4 *)(param_1 + 0x28 + (ulonglong)(uint)((param_2 + -0x70) / 10) * 0x10) =
           *(undefined4 *)param_3;
      break;
    case 0x71:
    case 0x7b:
    case 0x85:
    case 0x8f:
    case 0x99:
    case 0xa3:
      *(undefined4 *)(param_1 + 0x2c + (ulonglong)(uint)((param_2 + -0x71) / 10) * 0x10) =
           *(undefined4 *)param_3;
    }
    goto LAB_14512ea14;
  }
  iVar2 = (int)param_2;
  if (iVar2 < 0x1f6) {
    if (iVar2 == 0x1f5) goto LAB_14512ea14;
    switch(iVar2) {
    case 0xc9:
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)param_3;
      break;
    case 0xca:
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)param_3;
      break;
    case 0xcb:
      *(uint *)(param_1 + 0x94) = (uint)(*param_3 != '\0');
      break;
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
      uVar1 = 1 << ((byte)param_2 + 0x34 & 0x1f);
      if (*param_3 == '\0') {
        *(uint *)(param_1 + 0x98) = uVar1 | *(uint *)(param_1 + 0x98);
      }
      else {
        *(uint *)(param_1 + 0x98) = ~uVar1 & *(uint *)(param_1 + 0x98);
      }
      break;
    case 0xd0:
    case 0xd1:
    case 0xd2:
      *(undefined4 *)(param_1 + 0xa4 + (ulonglong)((int)param_2 - 0xd0) * 4) =
           *(undefined4 *)param_3;
      break;
    default:
      goto switchD_14512e6e5_caseD_4;
    case 0xdc:
    case 0xe6:
    case 0xf0:
    case 0xfa:
      *(undefined4 *)(param_1 + 0xb0 + (ulonglong)(uint)((param_2 + -0xdc) / 10) * 0x18) =
           *(undefined4 *)param_3;
      break;
    case 0xdd:
    case 0xe7:
    case 0xf1:
    case 0xfb:
      *(undefined4 *)(param_1 + 0xb4 + (ulonglong)(uint)((param_2 + -0xdd) / 10) * 0x18) =
           *(undefined4 *)param_3;
      break;
    case 0xde:
    case 0xe8:
    case 0xf2:
    case 0xfc:
      *(undefined4 *)(param_1 + 0xb8 + (ulonglong)(uint)((param_2 + -0xde) / 10) * 0x18) =
           *(undefined4 *)param_3;
      break;
    case 0xdf:
    case 0xe9:
    case 0xf3:
    case 0xfd:
      *(undefined4 *)(param_1 + 0xbc + (ulonglong)(uint)((param_2 + -0xdf) / 10) * 0x18) =
           *(undefined4 *)param_3;
      break;
    case 0xe0:
    case 0xea:
    case 0xf4:
    case 0xfe:
      *(undefined4 *)(param_1 + ((ulonglong)(uint)((param_2 + -0xe0) / 10) + 8) * 0x18) =
           *(undefined4 *)param_3;
      break;
    case 0xe1:
    case 0xeb:
    case 0xf5:
    case 0xff:
      *(undefined4 *)(param_1 + 0xc4 + (ulonglong)(uint)((param_2 + -0xe1) / 10) * 0x18) =
           *(undefined4 *)param_3;
      break;
    case 300:
    case 0x12d:
    case 0x12e:
    case 0x12f:
    case 0x130:
    case 0x131:
    case 0x132:
    case 0x133:
    case 0x134:
    case 0x135:
    case 0x136:
    case 0x137:
      *(undefined4 *)(param_1 + 0x118 + (ulonglong)((int)param_2 - 300) * 4) =
           *(undefined4 *)param_3;
      break;
    case 400:
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)param_3;
      break;
    case 0x191:
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)param_3;
      break;
    case 0x192:
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)param_3;
      break;
    case 0x193:
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)param_3;
      break;
    case 0x194:
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)param_3;
      break;
    case 0x195:
      *(uint *)(param_1 + 0x16c) = (uint)(*param_3 != '\0');
    }
  }
  else {
    if (iVar2 == 0x7fff) goto LAB_14512ea14;
switchD_14512e6e5_caseD_4:
    uVar3 = 0x1f;
  }
LAB_14512ea14:
  *(undefined1 *)(param_1 + 0x178) = 1;
  return uVar3;
}



// FUNCTION 14512ec10 FUN_14512ec10 body=46 status=ok
// SIG undefined FUN_14512ec10(void)

void FUN_14512ec10(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((*(uint *)(param_1 + 0x194) >> (param_2 & 0x1f) & 1) != 0) {
    *(undefined4 *)(param_1 + (uVar1 + 2) * 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + (uVar1 + 2) * 0x10) = *(undefined4 *)(param_1 + 0x17c + uVar1 * 4);
  return;
}



// FUNCTION 14512ec40 FUN_14512ec40 body=43 status=ok
// SIG undefined FUN_14512ec40(void)

undefined8 * FUN_14512ec40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 14512ec70 FUN_14512ec70 body=180 status=ok
// SIG undefined FUN_14512ec70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14512ec70(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  uint param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 auStack_40 [5];
  undefined4 auStack_18 [4];
  
  uVar4 = (ulonglong)param_5;
  uVar5 = (ulonglong)param_5 * 0x10 + 0xf;
  if (uVar5 <= (ulonglong)param_5 * 0x10) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x14512ecc1;
  lVar3 = -(uVar5 & 0xfffffffffffffff0);
  if (param_5 != 0) {
    param_3 = param_3 - (longlong)param_2;
    puVar6 = (undefined8 *)(&stack0xfffffffffffffff8 + lVar3);
    do {
      uVar1 = *(undefined8 *)(param_3 + (longlong)param_2);
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar6 = uVar2;
      puVar6[1] = uVar1;
      uVar4 = uVar4 - 1;
      puVar6 = puVar6 + 2;
    } while (uVar4 != 0);
  }
  *(undefined4 *)((longlong)auStack_18 + lVar3) = param_6;
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x14512ed0f;
  FUN_14512ed30(&stack0xfffffffffffffff8 + lVar3,param_4,param_1);
  return;
}



// FUNCTION 14512ed30 FUN_14512ed30 body=2071 status=ok
// SIG undefined FUN_14512ed30(void)

void FUN_14512ed30(longlong *param_1,longlong param_2,longlong *param_3,uint param_4,uint param_5)

{
  float fVar1;
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
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  float *pfVar24;
  float *pfVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *plVar29;
  ulonglong uVar30;
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  
  uVar27 = (ulonglong)param_4;
  if ((param_5 & 3) != 0) {
    uVar28 = 4 - (param_5 & 3);
    plVar29 = param_1;
    uVar30 = uVar27;
    if (param_4 != 0) {
      do {
        if (uVar28 != 0) {
          memset((void *)(*plVar29 + (ulonglong)param_5 * 4),0,(ulonglong)uVar28 << 2);
        }
        uVar30 = uVar30 - 1;
        plVar29 = plVar29 + 2;
      } while (uVar30 != 0);
    }
    param_5 = param_5 + uVar28;
  }
  uVar28 = *(uint *)((longlong)param_3 + 0xc);
  if (((uVar28 >> 2 & 1) != 0) &&
     (uVar23 = param_4,
     (ulonglong)(uVar28 >> 1 & 1) * 0x60 + (ulonglong)(uVar28 & 1) * 0x80 + *param_3 != 0)) {
    while (3 < uVar23) {
      uVar28 = *(uint *)((longlong)param_3 + 0xc);
      uVar23 = param_4 - (int)uVar27;
      uVar30 = (ulonglong)uVar23;
      plVar29 = (longlong *)(param_2 + (ulonglong)uVar23 * 8);
      pfVar25 = *(float **)(param_2 + (ulonglong)uVar23 * 8);
      fVar41 = *pfVar25;
      fVar34 = pfVar25[1];
      fVar59 = pfVar25[2];
      fVar51 = pfVar25[3];
      pfVar25 = (float *)plVar29[1];
      fVar43 = *pfVar25;
      fVar35 = pfVar25[1];
      fVar60 = pfVar25[2];
      fVar52 = pfVar25[3];
      pfVar25 = (float *)plVar29[2];
      fVar45 = *pfVar25;
      fVar37 = pfVar25[1];
      fVar61 = pfVar25[2];
      fVar53 = pfVar25[3];
      pfVar25 = (float *)plVar29[3];
      fVar46 = *pfVar25;
      fVar39 = pfVar25[1];
      fVar62 = pfVar25[2];
      fVar54 = pfVar25[3];
      if ((uVar28 >> 2 & 1) == 0) {
        pfVar25 = (float *)0x0;
      }
      else {
        pfVar25 = (float *)((ulonglong)(uVar28 >> 1 & 1) * 0x60 + (ulonglong)(uVar28 & 1) * 0x80 +
                           *param_3);
      }
      fVar1 = *pfVar25;
      fVar2 = pfVar25[1];
      fVar3 = pfVar25[2];
      fVar4 = pfVar25[3];
      lVar13 = param_1[uVar30 * 2];
      lVar14 = (param_1 + uVar30 * 2)[1];
      lVar15 = param_1[uVar30 * 2 + 2];
      lVar16 = (param_1 + uVar30 * 2 + 2)[1];
      fVar5 = pfVar25[4];
      uVar26 = 0;
      lVar17 = param_1[uVar30 * 2 + 4];
      lVar18 = (param_1 + uVar30 * 2 + 4)[1];
      lVar19 = param_1[uVar30 * 2 + 6];
      lVar20 = (param_1 + uVar30 * 2 + 6)[1];
      fVar55 = fVar34;
      fVar56 = fVar35;
      fVar57 = fVar37;
      fVar58 = fVar39;
      local_138 = fVar41;
      fStack_134 = fVar43;
      fStack_130 = fVar45;
      fStack_12c = fVar46;
      if (param_5 != 0) {
        do {
          pfVar25 = (float *)(lVar13 + uVar26 * 4);
          fVar6 = *pfVar25;
          fVar7 = pfVar25[1];
          fVar55 = pfVar25[2];
          fVar41 = pfVar25[3];
          pfVar25 = (float *)(lVar17 + uVar26 * 4);
          fVar8 = *pfVar25;
          fVar9 = pfVar25[1];
          fVar57 = pfVar25[2];
          fVar45 = pfVar25[3];
          pfVar25 = (float *)(lVar15 + uVar26 * 4);
          fVar10 = *pfVar25;
          fVar11 = pfVar25[1];
          fVar56 = pfVar25[2];
          fVar43 = pfVar25[3];
          pfVar25 = (float *)(lVar19 + uVar26 * 4);
          fVar12 = *pfVar25;
          fVar44 = pfVar25[1];
          fVar58 = pfVar25[2];
          fVar46 = pfVar25[3];
          fVar34 = fVar3 * fVar34 + fVar2 * local_138 + fVar6 * fVar1 + fVar5 * fVar51 +
                   fVar4 * fVar59;
          fVar35 = fVar3 * fVar35 + fVar2 * fStack_134 + fVar10 * fVar1 + fVar5 * fVar52 +
                   fVar4 * fVar60;
          fVar37 = fVar3 * fVar37 + fVar2 * fStack_130 + fVar8 * fVar1 + fVar5 * fVar53 +
                   fVar4 * fVar61;
          fVar39 = fVar3 * fVar39 + fVar2 * fStack_12c + fVar12 * fVar1 + fVar5 * fVar54 +
                   fVar4 * fVar62;
          fVar47 = fVar6 * fVar2 + fVar3 * local_138 + fVar7 * fVar1 + fVar5 * fVar59 +
                   fVar34 * fVar4;
          fVar48 = fVar10 * fVar2 + fVar3 * fStack_134 + fVar11 * fVar1 + fVar5 * fVar60 +
                   fVar35 * fVar4;
          fVar49 = fVar8 * fVar2 + fVar3 * fStack_130 + fVar9 * fVar1 + fVar5 * fVar61 +
                   fVar37 * fVar4;
          fVar50 = fVar12 * fVar2 + fVar3 * fStack_12c + fVar44 * fVar1 + fVar5 * fVar62 +
                   fVar39 * fVar4;
          fVar51 = fVar6 * fVar3 + fVar7 * fVar2 + fVar55 * fVar1 + fVar34 * fVar5 + fVar47 * fVar4;
          fVar52 = fVar10 * fVar3 + fVar11 * fVar2 + fVar56 * fVar1 + fVar35 * fVar5 +
                   fVar48 * fVar4;
          fVar53 = fVar8 * fVar3 + fVar9 * fVar2 + fVar57 * fVar1 + fVar37 * fVar5 + fVar49 * fVar4;
          fVar54 = fVar12 * fVar3 + fVar44 * fVar2 + fVar58 * fVar1 + fVar39 * fVar5 +
                   fVar50 * fVar4;
          fVar59 = fVar7 * fVar3 + fVar55 * fVar2 + fVar41 * fVar1 + fVar47 * fVar5 + fVar51 * fVar4
          ;
          fVar60 = fVar11 * fVar3 + fVar56 * fVar2 + fVar43 * fVar1 + fVar48 * fVar5 +
                   fVar52 * fVar4;
          fVar61 = fVar9 * fVar3 + fVar57 * fVar2 + fVar45 * fVar1 + fVar49 * fVar5 + fVar53 * fVar4
          ;
          fVar62 = fVar44 * fVar3 + fVar58 * fVar2 + fVar46 * fVar1 + fVar50 * fVar5 +
                   fVar54 * fVar4;
          pfVar25 = (float *)(lVar14 + uVar26 * 4);
          *pfVar25 = fVar34;
          pfVar25[1] = fVar47;
          pfVar25[2] = fVar51;
          pfVar25[3] = fVar59;
          pfVar25 = (float *)(lVar16 + uVar26 * 4);
          *pfVar25 = fVar35;
          pfVar25[1] = fVar48;
          pfVar25[2] = fVar52;
          pfVar25[3] = fVar60;
          pfVar25 = (float *)(lVar18 + uVar26 * 4);
          *pfVar25 = fVar37;
          pfVar25[1] = fVar49;
          pfVar25[2] = fVar53;
          pfVar25[3] = fVar61;
          pfVar25 = (float *)(lVar20 + uVar26 * 4);
          *pfVar25 = fVar39;
          pfVar25[1] = fVar50;
          pfVar25[2] = fVar54;
          pfVar25[3] = fVar62;
          uVar28 = (int)uVar26 + 4;
          uVar26 = (ulonglong)uVar28;
          fVar34 = fVar55;
          fVar35 = fVar56;
          fVar37 = fVar57;
          fVar39 = fVar58;
          local_138 = fVar41;
          fStack_134 = fVar43;
          fStack_130 = fVar45;
          fStack_12c = fVar46;
        } while (uVar28 < param_5);
      }
      pfVar25 = (float *)*plVar29;
      uVar23 = (int)uVar27 - 4;
      uVar27 = (ulonglong)uVar23;
      *pfVar25 = fVar41;
      pfVar25[1] = fVar55;
      pfVar25[2] = fVar59;
      pfVar25[3] = fVar51;
      pfVar25 = (float *)plVar29[1];
      *pfVar25 = fVar43;
      pfVar25[1] = fVar56;
      pfVar25[2] = fVar60;
      pfVar25[3] = fVar52;
      pfVar25 = (float *)plVar29[2];
      *pfVar25 = fVar45;
      pfVar25[1] = fVar57;
      pfVar25[2] = fVar61;
      pfVar25[3] = fVar53;
      pfVar25 = (float *)plVar29[3];
      *pfVar25 = fVar46;
      pfVar25[1] = fVar58;
      pfVar25[2] = fVar62;
      pfVar25[3] = fVar54;
    }
  }
  if ((((*(uint *)((longlong)param_3 + 0xc) >> 1 & 1) != 0) &&
      (pfVar25 = (float *)(*param_3 + (ulonglong)(*(uint *)((longlong)param_3 + 0xc) & 1) * 0x80),
      pfVar25 != (float *)0x0)) && (uVar28 = (uint)uVar27, 1 < uVar28)) {
    fVar45 = *pfVar25;
    fVar37 = pfVar25[1];
    fVar61 = pfVar25[2];
    fVar53 = pfVar25[3];
    fVar46 = pfVar25[4];
    fVar39 = pfVar25[5];
    fVar62 = pfVar25[6];
    fVar54 = pfVar25[7];
    uVar23 = param_4 - uVar28;
    pfVar24 = *(float **)(param_2 + (ulonglong)uVar23 * 8);
    plVar29 = (longlong *)(param_2 + (ulonglong)uVar23 * 8);
    fVar1 = pfVar25[8];
    fVar2 = pfVar25[9];
    fVar3 = pfVar25[10];
    fVar4 = pfVar25[0xb];
    fVar5 = pfVar25[0xc];
    fVar55 = pfVar25[0xd];
    fVar57 = pfVar25[0xe];
    fVar56 = pfVar25[0xf];
    fVar58 = pfVar25[0x10];
    fVar6 = pfVar25[0x11];
    fVar7 = pfVar25[0x12];
    fVar8 = pfVar25[0x13];
    fVar41 = *pfVar24;
    fVar34 = pfVar24[1];
    fVar59 = pfVar24[2];
    fVar51 = pfVar24[3];
    uVar27 = 0;
    fVar9 = pfVar25[0x14];
    fVar10 = pfVar25[0x15];
    fVar11 = pfVar25[0x16];
    fVar12 = pfVar25[0x17];
    pfVar25 = (float *)plVar29[1];
    fVar43 = *pfVar25;
    fVar35 = pfVar25[1];
    fVar60 = pfVar25[2];
    fVar52 = pfVar25[3];
    lVar13 = param_1[(ulonglong)uVar23 * 2];
    lVar14 = (param_1 + (ulonglong)uVar23 * 2)[1];
    lVar15 = param_1[(ulonglong)uVar23 * 2 + 2];
    lVar16 = (param_1 + (ulonglong)uVar23 * 2 + 2)[1];
    fVar44 = fVar34;
    fVar47 = fVar35;
    fVar48 = fVar41;
    fVar49 = fVar43;
    if (param_5 != 0) {
      do {
        pfVar25 = (float *)(lVar13 + uVar27 * 4);
        fVar50 = *pfVar25;
        fVar31 = pfVar25[1];
        fVar34 = pfVar25[2];
        fVar41 = pfVar25[3];
        pfVar25 = (float *)(lVar15 + uVar27 * 4);
        fVar32 = *pfVar25;
        fVar33 = pfVar25[1];
        fVar35 = pfVar25[2];
        fVar43 = pfVar25[3];
        fVar42 = fVar5 * fVar44 + fVar1 * fVar48 + fVar50 * fVar45 + fVar50 * fVar46 +
                 fVar58 * fVar59 + fVar9 * fVar51;
        fVar44 = fVar55 * fVar44 + fVar2 * fVar48 + fVar31 * fVar37 + fVar50 * fVar39 +
                 fVar6 * fVar59 + fVar10 * fVar51;
        fVar48 = fVar57 * fVar47 + fVar3 * fVar49 + fVar32 * fVar61 + fVar32 * fVar62 +
                 fVar7 * fVar60 + fVar11 * fVar52;
        fVar47 = fVar56 * fVar47 + fVar4 * fVar49 + fVar33 * fVar53 + fVar32 * fVar54 +
                 fVar8 * fVar60 + fVar12 * fVar52;
        fVar51 = fVar31 * fVar1 + fVar50 * fVar5 + fVar34 * fVar45 + fVar34 * fVar46 +
                 fVar44 * fVar58 + fVar42 * fVar9;
        fVar59 = fVar31 * fVar2 + fVar50 * fVar55 + fVar41 * fVar37 + fVar34 * fVar39 +
                 fVar44 * fVar6 + fVar42 * fVar10;
        fVar52 = fVar33 * fVar3 + fVar32 * fVar57 + fVar35 * fVar61 + fVar35 * fVar62 +
                 fVar47 * fVar7 + fVar48 * fVar11;
        fVar60 = fVar33 * fVar4 + fVar32 * fVar56 + fVar43 * fVar53 + fVar35 * fVar54 +
                 fVar47 * fVar8 + fVar48 * fVar12;
        pfVar25 = (float *)(lVar14 + uVar27 * 4);
        *pfVar25 = fVar42;
        pfVar25[1] = fVar44;
        pfVar25[2] = fVar51;
        pfVar25[3] = fVar59;
        pfVar25 = (float *)(lVar16 + uVar27 * 4);
        *pfVar25 = fVar48;
        pfVar25[1] = fVar47;
        pfVar25[2] = fVar52;
        pfVar25[3] = fVar60;
        uVar23 = (int)uVar27 + 4;
        uVar27 = (ulonglong)uVar23;
        fVar44 = fVar34;
        fVar47 = fVar35;
        fVar48 = fVar41;
        fVar49 = fVar43;
      } while (uVar23 < param_5);
    }
    uVar27 = (ulonglong)(uVar28 - 2);
    *(float *)*plVar29 = fVar41;
    *(float *)(*plVar29 + 4) = fVar34;
    *(float *)(*plVar29 + 8) = fVar59;
    *(float *)(*plVar29 + 0xc) = fVar51;
    *(float *)plVar29[1] = fVar43;
    *(float *)(plVar29[1] + 4) = fVar35;
    *(float *)(plVar29[1] + 8) = fVar60;
    *(float *)(plVar29[1] + 0xc) = fVar52;
  }
  if (((*(byte *)((longlong)param_3 + 0xc) & 1) != 0) && (*param_3 != 0)) {
    uVar28 = (uint)uVar27;
    while (uVar28 != 0) {
      uVar28 = param_4 - (int)uVar27;
      pfVar25 = *(float **)(param_2 + (ulonglong)uVar28 * 8);
      fVar41 = *pfVar25;
      fVar34 = pfVar25[1];
      fVar59 = pfVar25[2];
      fVar51 = pfVar25[3];
      if ((*(byte *)((longlong)param_3 + 0xc) & 1) == 0) {
        pfVar24 = (float *)0x0;
      }
      else {
        pfVar24 = (float *)*param_3;
      }
      uVar21 = *(undefined8 *)(pfVar24 + 0x1c);
      uVar22 = *(undefined8 *)(pfVar24 + 0x1e);
      uVar30 = 0;
      fVar43 = *pfVar24;
      fVar35 = pfVar24[1];
      fVar60 = pfVar24[2];
      fVar52 = pfVar24[3];
      fVar45 = pfVar24[4];
      fVar37 = pfVar24[5];
      fVar61 = pfVar24[6];
      fVar53 = pfVar24[7];
      fVar46 = pfVar24[8];
      fVar39 = pfVar24[9];
      fVar62 = pfVar24[10];
      fVar54 = pfVar24[0xb];
      fVar1 = pfVar24[0xc];
      fVar2 = pfVar24[0xd];
      fVar3 = pfVar24[0xe];
      fVar4 = pfVar24[0xf];
      fVar5 = pfVar24[0x10];
      fVar55 = pfVar24[0x11];
      fVar57 = pfVar24[0x12];
      fVar56 = pfVar24[0x13];
      fVar58 = pfVar24[0x14];
      fVar6 = pfVar24[0x15];
      fVar7 = pfVar24[0x16];
      fVar8 = pfVar24[0x17];
      fVar9 = pfVar24[0x18];
      fVar10 = pfVar24[0x19];
      fVar11 = pfVar24[0x1a];
      fVar12 = pfVar24[0x1b];
      if (param_5 != 0) {
        do {
          fVar42 = fVar5 * fVar41;
          fVar36 = fVar55 * fVar41;
          fVar38 = fVar57 * fVar41;
          fVar40 = fVar56 * fVar41;
          fVar50 = fVar58 * fVar34;
          fVar31 = fVar6 * fVar34;
          fVar32 = fVar7 * fVar34;
          fVar33 = fVar8 * fVar34;
          pfVar24 = (float *)(param_1[(ulonglong)uVar28 * 2] + uVar30 * 4);
          fVar44 = *pfVar24;
          fVar47 = pfVar24[1];
          fVar34 = pfVar24[2];
          fVar41 = pfVar24[3];
          fVar48 = fVar9 * fVar59;
          fVar49 = fVar10 * fVar59;
          local_138 = (float)uVar21;
          fStack_134 = (float)((ulonglong)uVar21 >> 0x20);
          fStack_130 = (float)uVar22;
          fStack_12c = (float)((ulonglong)uVar22 >> 0x20);
          local_138 = local_138 * fVar51;
          fStack_134 = fStack_134 * fVar51;
          fStack_12c = fStack_12c * fVar51;
          fVar51 = fVar47 * fVar62 + fVar61 * fVar34 + fVar38 + fVar34 * fVar60 + fVar32 +
                   fVar44 * fVar3 + fVar11 * fVar59 + fStack_130 * fVar51;
          fVar59 = fVar47 * fVar54 + fVar53 * fVar34 + fVar40 + fVar41 * fVar52 + fVar33 +
                   fVar44 * fVar4 + fVar12 * fVar59 + fStack_12c;
          pfVar24 = (float *)(param_1[(ulonglong)uVar28 * 2 + 1] + uVar30 * 4);
          *pfVar24 = fVar47 * fVar46 + fVar45 * fVar34 + fVar42 + fVar44 * fVar43 + fVar50 +
                     fVar44 * fVar1 + fVar48 + local_138;
          pfVar24[1] = fVar47 * fVar39 + fVar37 * fVar34 + fVar36 + fVar47 * fVar35 + fVar31 +
                       fVar44 * fVar2 + fVar49 + fStack_134;
          pfVar24[2] = fVar51;
          pfVar24[3] = fVar59;
          uVar23 = (int)uVar30 + 4;
          uVar30 = (ulonglong)uVar23;
        } while (uVar23 < param_5);
      }
      uVar28 = (int)uVar27 - 1;
      uVar27 = (ulonglong)uVar28;
      *pfVar25 = fVar41;
      pfVar25[1] = fVar34;
      pfVar25[2] = fVar59;
      pfVar25[3] = fVar51;
    }
  }
  return;
}



// FUNCTION 14512f550 FUN_14512f550 body=1093 status=ok
// SIG undefined FUN_14512f550(void)

/* WARNING: Removing unreachable block (ram,0x00014512f83b) */
/* WARNING: Removing unreachable block (ram,0x00014512f91d) */

int FUN_14512f550(int *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint local_res8;
  
  uVar3 = param_3[1];
  *(undefined8 *)param_1 = *param_3;
  *(undefined8 *)(param_1 + 2) = uVar3;
  iVar4 = *(int *)((longlong)param_3 + 0x14);
  iVar1 = *(int *)(param_3 + 3);
  iVar2 = *(int *)((longlong)param_3 + 0x1c);
  param_1[4] = *(int *)(param_3 + 2);
  param_1[5] = iVar4;
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  iVar4 = *(int *)((longlong)param_3 + 0x24);
  iVar1 = *(int *)(param_3 + 5);
  iVar2 = *(int *)((longlong)param_3 + 0x2c);
  param_1[8] = *(int *)(param_3 + 4);
  param_1[9] = iVar4;
  param_1[10] = iVar1;
  param_1[0xb] = iVar2;
  if ((*(char *)((longlong)param_1 + 9) == '\0') && ((char)param_1[2] == '\0')) {
    return 1;
  }
  if ((*param_1 == -1) || (param_1[1] == 0)) {
    return 0x1f;
  }
  lVar5 = (**(code **)(*param_2 + 8))
                    (param_2,param_1[3] * 0x170,
                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\ChannelContext.cpp"
                     ,0x2d);
  *(longlong *)(param_1 + 0x13c) = lVar5;
  if (lVar5 == 0) {
    return 2;
  }
  uVar13 = 0;
  uVar9 = uVar13;
  if (param_1[3] != 0) {
    do {
      puVar7 = (undefined4 *)(uVar9 * 0x170 + *(longlong *)(param_1 + 0x13c));
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 0x5a) = 0xffffffffffffffff;
      memset(puVar7 + 1,0,0x160);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < (uint)param_1[3]);
  }
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    lVar5 = (**(code **)(*param_2 + 8))
                      (param_2,0x2e0,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\ChannelContext.cpp"
                       ,0x3a);
    *(longlong *)(param_1 + 0x13e) = lVar5;
    if (lVar5 == 0) {
      return 2;
    }
    uVar9 = uVar13;
    if ((-(*(char *)((longlong)param_1 + 9) != '\0') & 2U) != 0) {
      do {
        puVar7 = (undefined4 *)(uVar9 * 0x170 + *(longlong *)(param_1 + 0x13e));
        *puVar7 = 1;
        *(undefined8 *)(puVar7 + 0x5a) = 0xffffffffffffffff;
        memset(puVar7 + 1,0,0x160);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < (-(uint)(*(char *)((longlong)param_1 + 9) != '\0') & 2));
    }
  }
  if (((char)param_1[2] != '\0') && (iVar4 = param_1[5], iVar4 != 0)) {
    param_1[0x144] = iVar4;
    lVar5 = (**(code **)(*param_2 + 8))
                      (param_2,iVar4 * 0x178,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\MasteringSuite\\ChannelContext.cpp"
                       ,0x4a);
    *(longlong *)(param_1 + 0x140) = lVar5;
    if (lVar5 == 0) {
      return 0x34;
    }
    *(ulonglong *)(param_1 + 0x142) = (ulonglong)(uint)(iVar4 * 0x170) + lVar5;
    uVar9 = uVar13;
    if (param_1[0x144] != 0) {
      do {
        puVar7 = (undefined4 *)(uVar9 * 0x170 + *(longlong *)(param_1 + 0x140));
        *puVar7 = 2;
        *(undefined8 *)(puVar7 + 0x5a) = 0xffffffffffffffff;
        memset(puVar7 + 1,0,0x160);
        uVar8 = (int)uVar9 + 1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x142) + uVar9 * 8) = 0xffffffffffffffff;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < (uint)param_1[0x144]);
    }
  }
  puVar10 = (uint *)(param_1 + 0x126);
  iVar4 = 1;
  uVar9 = uVar13;
  do {
    if (iVar4 != 1) break;
    puVar10[1] = puVar10[1] | 7;
    if (*(longlong *)(puVar10 + -2) != 0) {
      (**(code **)(*param_2 + 0x10))();
      puVar10[-2] = 0;
      puVar10[-1] = 0;
    }
    uVar8 = puVar10[1];
    uVar8 = (uVar8 & 1) * 0x80 +
            (-(uint)((uVar8 >> 1 & 1) != 0) & 0x60) + (-(uint)((uVar8 >> 2 & 1) != 0) & 0x14);
    *puVar10 = uVar8;
    pvVar6 = (void *)(**(code **)(*param_2 + 0x18))
                               (param_2,uVar8,0x10,
                                "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\BiquadFilterSimd.h"
                                ,0x32c);
    *(void **)(puVar10 + -2) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      iVar4 = 0x34;
    }
    else {
      memset(pvVar6,0,(ulonglong)*puVar10);
      iVar4 = 1;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    puVar10 = puVar10 + 4;
  } while (uVar8 < 6);
  local_res8 = 0;
  do {
    uVar12 = 0;
    uVar9 = uVar12;
    if (iVar4 != 1) {
      return iVar4;
    }
    do {
      if (iVar4 != 1) break;
      plVar11 = (longlong *)(param_1 + (uVar13 + 0x39 + uVar12) * 4);
      *(uint *)((longlong)plVar11 + 0xc) = *(uint *)((longlong)plVar11 + 0xc) | 7;
      if (*plVar11 != 0) {
        (**(code **)(*param_2 + 0x10))();
        *plVar11 = 0;
        *(int *)(plVar11 + 1) = 0;
      }
      uVar8 = *(uint *)((longlong)plVar11 + 0xc);
      iVar4 = (uVar8 & 1) * 0x80 +
              (-(uint)((uVar8 >> 1 & 1) != 0) & 0x60) + (-(uint)((uVar8 >> 2 & 1) != 0) & 0x14);
      *(int *)(plVar11 + 1) = iVar4;
      pvVar6 = (void *)(**(code **)(*param_2 + 0x18))
                                 (param_2,iVar4,0x10,
                                  "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\Common\\BiquadFilterSimd.h"
                                  ,0x32c);
      *plVar11 = (longlong)pvVar6;
      if (pvVar6 == (void *)0x0) {
        iVar4 = 0x34;
      }
      else {
        memset(pvVar6,0,(ulonglong)*(uint *)(plVar11 + 1));
        iVar4 = 1;
      }
      uVar8 = (int)uVar9 + 1;
      uVar12 = uVar12 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < 4);
    uVar13 = uVar13 + 4;
    local_res8 = local_res8 + 1;
    if (3 < local_res8) {
      return iVar4;
    }
  } while( true );
}



// FUNCTION 14512f9a0 FUN_14512f9a0 body=482 status=ok
// SIG undefined FUN_14512f9a0(void)

void FUN_14512f9a0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x4f0) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4f0) = 0;
    }
    if (*(longlong *)(param_1 + 0x4f8) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4f8) = 0;
    }
    if (*(longlong *)(param_1 + 0x500) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x500) = 0;
      *(undefined8 *)(param_1 + 0x508) = 0;
    }
    if (*(longlong *)(param_1 + 0x490) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x490) = 0;
      *(undefined4 *)(param_1 + 0x498) = 0;
    }
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      *(undefined4 *)(param_1 + 0x4a8) = 0;
    }
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
      *(undefined4 *)(param_1 + 0x4b8) = 0;
    }
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4c0) = 0;
      *(undefined4 *)(param_1 + 0x4c8) = 0;
    }
    if (*(longlong *)(param_1 + 0x4d0) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4d0) = 0;
      *(undefined4 *)(param_1 + 0x4d8) = 0;
    }
    if (*(longlong *)(param_1 + 0x4e0) != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      *(undefined8 *)(param_1 + 0x4e0) = 0;
      *(undefined4 *)(param_1 + 0x4e8) = 0;
    }
    puVar1 = (undefined4 *)(param_1 + 0x3b8);
    lVar2 = 4;
    do {
      if (*(longlong *)(puVar1 + -10) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(puVar1 + -10) = 0;
        puVar1[-8] = 0;
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(puVar1 + -6) = 0;
        puVar1[-4] = 0;
      }
      if (*(longlong *)(puVar1 + -2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(puVar1 + -2) = 0;
        *puVar1 = 0;
      }
      if (*(longlong *)(puVar1 + 2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1[4] = 0;
      }
      puVar1 = puVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14512fb90 FUN_14512fb90 body=290 status=ok
// SIG undefined FUN_14512fb90(void)

void FUN_14512fb90(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  if (*param_2 == 0) {
    return;
  }
LAB_14512fbc0:
  uVar7 = *(uint *)(param_1 + 0x510);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 4) + uVar8 * 8);
  uVar2 = 0;
  if (0 < (int)uVar7) {
    lVar6 = *plVar1;
    plVar5 = *(longlong **)(param_1 + 0x508);
    do {
      if (*plVar5 == lVar6) {
        if (uVar2 < uVar7) {
          if (*(longlong *)((ulonglong)uVar2 * 0x170 + 0x168 + *(longlong *)(param_1 + 0x500)) ==
              lVar6) goto LAB_14512fc8d;
          iVar4 = 0;
          lVar3 = 0;
          goto LAB_14512fc20;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      plVar5 = plVar5 + 1;
    } while ((int)uVar2 < (int)uVar7);
  }
  goto LAB_14512fc42;
  while( true ) {
    iVar4 = iVar4 + 1;
    lVar3 = lVar3 + 1;
    if ((int)uVar7 <= iVar4) break;
LAB_14512fc20:
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + lVar3 * 8) == lVar6) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + lVar3 * 8) = 0xffffffffffffffff;
      break;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x510);
LAB_14512fc42:
  uVar2 = FUN_145130350(param_1);
  if (uVar2 < uVar7) {
    *(longlong *)(*(longlong *)(param_1 + 0x508) + (ulonglong)uVar2 * 8) = *plVar1;
    lVar6 = (ulonglong)uVar2 * 0x170 + *(longlong *)(param_1 + 0x500);
    memset((void *)(lVar6 + 4),0,0x160);
    *(longlong *)(lVar6 + 0x168) = *plVar1;
    *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + 1;
  }
LAB_14512fc8d:
  uVar7 = (int)uVar8 + 1;
  uVar8 = (ulonglong)uVar7;
  if (*param_2 <= uVar7) {
    return;
  }
  goto LAB_14512fbc0;
}



// FUNCTION 14512fcc0 FUN_14512fcc0 body=234 status=ok
// SIG undefined FUN_14512fcc0(void)

void FUN_14512fcc0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (*param_2 != 0) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_2 + 2) + uVar3 * 8) + 0xc) == 0x11) {
        uVar2 = *(uint *)(param_1 + 0x510);
        uVar1 = 0;
        lVar4 = 0;
        if (0 < (int)uVar2) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x508) + lVar4 * 8) ==
                **(longlong **)(uVar3 * 8 + *(longlong *)(param_2 + 4))) {
              *(undefined8 *)(*(longlong *)(param_1 + 0x508) + lVar4 * 8) = 0xffffffffffffffff;
              uVar2 = uVar1;
              break;
            }
            uVar1 = uVar1 + 1;
            lVar4 = lVar4 + 1;
          } while ((int)uVar1 < (int)uVar2);
        }
        if (uVar2 < *(uint *)(param_1 + 0x510)) {
          lVar4 = (ulonglong)uVar2 * 0x170 + *(longlong *)(param_1 + 0x500);
          memset((void *)(lVar4 + 4),0,0x160);
          *(undefined8 *)(lVar4 + 0x168) = 0xffffffffffffffff;
          *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + -1;
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *param_2);
  }
  return;
}



// FUNCTION 14512fdb0 FUN_14512fdb0 body=613 status=ok
// SIG undefined FUN_14512fdb0(void)

void FUN_14512fdb0(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,uint param_5,
                  undefined4 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_88 [2];
  longlong alStack_80 [4];
  longlong alStack_60 [4];
  int aiStack_40 [6];
  
  uVar7 = 0;
  local_88[0] = 0;
  if ((*(longlong *)(param_1 + 0x4f0) != 0) && (uVar5 = 0, *(int *)(param_1 + 0xc) != 0)) {
    do {
      alStack_80[uVar7] = uVar5 * 0x170 + *(longlong *)(param_1 + 0x4f0);
      alStack_60[local_88[0]] =
           *param_2 + (*(ushort *)(param_2 + 2) * uVar5 + (ulonglong)param_5) * 4;
      aiStack_40[local_88[0]] = (int)uVar5;
      local_88[0] = local_88[0] + 1;
      if (local_88[0] == 4) {
        FUN_145130460(param_1,local_88,param_6);
      }
      uVar7 = (ulonglong)local_88[0];
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  if ((*(longlong *)(param_1 + 0x4f8) != 0) &&
     (uVar5 = 0, (-(*(char *)(param_1 + 9) != '\0') & 2U) != 0)) {
    do {
      alStack_80[uVar7] = uVar5 * 0x170 + *(longlong *)(param_1 + 0x4f8);
      alStack_60[local_88[0]] =
           *param_3 + (*(ushort *)(param_3 + 2) * uVar5 + (ulonglong)param_5) * 4;
      aiStack_40[local_88[0]] = (int)uVar5;
      local_88[0] = local_88[0] + 1;
      if (local_88[0] == 4) {
        FUN_145130460(param_1,local_88,param_6);
      }
      uVar7 = (ulonglong)local_88[0];
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < (-(uint)(*(char *)(param_1 + 9) != '\0') & 2));
  }
  if ((*(longlong *)(param_1 + 0x500) != 0) && (uVar8 = 0, uVar5 = uVar8, *param_4 != 0)) {
    do {
      uVar4 = *(uint *)(param_1 + 0x510);
      plVar1 = *(longlong **)(uVar5 * 8 + *(longlong *)(param_4 + 2));
      if (0 < (int)uVar4) {
        plVar2 = *(longlong **)(param_1 + 0x508);
        uVar3 = uVar8;
        uVar6 = uVar8;
        do {
          if (*plVar2 == **(longlong **)(uVar5 * 8 + *(longlong *)(param_4 + 4))) {
            if (((uint)uVar6 < uVar4) && (*(short *)((longlong)plVar1 + 0x12) != 0)) {
              alStack_80[uVar7] = uVar6 * 0x170 + *(longlong *)(param_1 + 0x500);
              alStack_60[local_88[0]] = *plVar1 + (ulonglong)param_5 * 4;
              aiStack_40[local_88[0]] = 0;
              local_88[0] = local_88[0] + 1;
              uVar7 = (ulonglong)local_88[0];
              if (local_88[0] == 4) {
                FUN_145130460(param_1,local_88,param_6);
                uVar7 = (ulonglong)local_88[0];
              }
            }
            break;
          }
          uVar6 = (ulonglong)((uint)uVar6 + 1);
          uVar3 = uVar3 + 1;
          plVar2 = plVar2 + 1;
        } while ((longlong)uVar3 < (longlong)(int)uVar4);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *param_4);
  }
  FUN_145130460(param_1,local_88,param_6);
  return;
}



// FUNCTION 145130020 FUN_145130020 body=573 status=ok
// SIG undefined FUN_145130020(void)

void FUN_145130020(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 8) != '\0')) {
    lVar4 = 4;
    puVar2 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar5 = param_2;
      puVar3 = puVar2;
      uVar1 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar1;
      uVar1 = puVar5[3];
      puVar3[2] = puVar5[2];
      puVar3[3] = uVar1;
      uVar1 = puVar5[5];
      puVar3[4] = puVar5[4];
      puVar3[5] = uVar1;
      uVar1 = puVar5[7];
      puVar3[6] = puVar5[6];
      puVar3[7] = uVar1;
      uVar1 = puVar5[9];
      puVar3[8] = puVar5[8];
      puVar3[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar3[10] = puVar5[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar3[0xc] = puVar5[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar3[0xe] = puVar5[0xe];
      puVar3[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar3 + 0x10;
      param_2 = puVar5 + 0x10;
    } while (lVar4 != 0);
    uVar1 = puVar5[0x11];
    puVar6 = (undefined4 *)(param_1 + 0x44);
    lVar4 = param_1 + 0x490;
    puVar3[0x10] = puVar5[0x10];
    puVar3[0x11] = uVar1;
    lVar9 = 6;
    uVar1 = puVar5[0x13];
    puVar3[0x12] = puVar5[0x12];
    puVar3[0x13] = uVar1;
    uVar1 = puVar5[0x15];
    puVar3[0x14] = puVar5[0x14];
    puVar3[0x15] = uVar1;
    uVar1 = puVar5[0x17];
    puVar3[0x16] = puVar5[0x16];
    puVar3[0x17] = uVar1;
    uVar1 = puVar5[0x19];
    puVar3[0x18] = puVar5[0x18];
    puVar3[0x19] = uVar1;
    uVar1 = puVar5[0x1b];
    puVar3[0x1a] = puVar5[0x1a];
    puVar3[0x1b] = uVar1;
    uVar1 = puVar5[0x1d];
    puVar3[0x1c] = puVar5[0x1c];
    puVar3[0x1d] = uVar1;
    do {
      FUN_14510b8c0(lVar4,puVar6[-3],puVar6[-2],puVar6[-1],*puVar6,puVar6[1]);
      lVar4 = lVar4 + 0x10;
      puVar6 = puVar6 + 5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar6 = (undefined4 *)(param_1 + 0xdc);
    lVar4 = param_1 + 0x390;
    lVar9 = 4;
    do {
      lVar10 = 4;
      puVar7 = puVar6;
      do {
        FUN_14510b8c0(lVar4,puVar7[-3],puVar7[-2],puVar7[-1],*puVar7,puVar7[1]);
        lVar4 = lVar4 + 0x10;
        puVar7 = puVar7 + 5;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      puVar6 = puVar6 + 0x1a;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar8 = 0;
    if ((*(longlong *)(param_1 + 0x4f0) != 0) && (uVar12 = uVar8, *(int *)(param_1 + 0xc) != 0)) {
      do {
        FUN_145130390(param_1,uVar12 * 0x170 + *(longlong *)(param_1 + 0x4f0));
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_1 + 0xc));
    }
    if (*(longlong *)(param_1 + 0x4f8) != 0) {
      lVar4 = 2;
      uVar12 = uVar8;
      do {
        FUN_145130390(param_1,*(longlong *)(param_1 + 0x4f8) + uVar12);
        uVar12 = uVar12 + 0x170;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if ((*(longlong *)(param_1 + 0x500) != 0) && (*(int *)(param_1 + 0x510) != 0)) {
      do {
        FUN_145130390(param_1,uVar8 * 0x170 + *(longlong *)(param_1 + 0x500));
        uVar11 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_1 + 0x510));
    }
  }
  return;
}



// FUNCTION 145130260 FUN_145130260 body=236 status=ok
// SIG undefined FUN_145130260(void)

void FUN_145130260(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 0x4f0) != 0) && (uVar3 = uVar4, *(int *)(param_1 + 0xc) != 0)) {
    do {
      memset((void *)(uVar3 * 0x170 + *(longlong *)(param_1 + 0x4f0) + 4),0,0x160);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xc));
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    lVar1 = 2;
    uVar3 = uVar4;
    do {
      memset((void *)(*(longlong *)(param_1 + 0x4f8) + 4 + uVar3),0,0x160);
      uVar3 = uVar3 + 0x170;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if ((*(longlong *)(param_1 + 0x500) != 0) && (*(int *)(param_1 + 0x510) != 0)) {
    do {
      memset((void *)(uVar4 * 0x170 + *(longlong *)(param_1 + 0x500) + 4),0,0x160);
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x510));
  }
  return;
}



// FUNCTION 145130350 FUN_145130350 body=52 status=ok
// SIG undefined FUN_145130350(void)

ulonglong FUN_145130350(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x510);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(uVar3 * 0x170 + 0x168 + *(longlong *)(param_1 + 0x500)) == -1) {
        return uVar3;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  return (ulonglong)uVar1;
}



// FUNCTION 145130390 FUN_145130390 body=207 status=ok
// SIG undefined FUN_145130390(void)

void FUN_145130390(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 < 6) {
    memset((void *)((ulonglong)uVar1 * 0x10 + 0x104 + param_2),0,(ulonglong)((6 - uVar1) * 0x10));
  }
  uVar1 = *(uint *)(param_1 + 0xb4);
  if (uVar1 < 4) {
    memset((void *)((ulonglong)uVar1 * 0x40 + 4 + param_2),0,(ulonglong)((4 - uVar1) * 0x40));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    do {
      uVar1 = *(uint *)(uVar2 * 0x68 + 0xbc + param_1);
      if (uVar1 < 4) {
        memset((void *)(((ulonglong)uVar1 + uVar2 * 4) * 0x10 + 4 + param_2),0,
               (ulonglong)((4 - uVar1) * 0x10));
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb4));
  }
  return;
}



// FUNCTION 145130460 FUN_145130460 body=1053 status=ok
// SIG undefined FUN_145130460(void)

void FUN_145130460(longlong param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  void *_Dst;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong lVar43;
  ulonglong uVar44;
  uint uVar45;
  ulonglong uVar46;
  uint uVar47;
  longlong lVar48;
  longlong lVar49;
  float fVar50;
  longlong local_98 [8];
  longlong local_58 [4];
  
  if (*param_2 != 0) {
    uVar41 = 0;
    lVar48 = *(longlong *)(param_1 + 0x20);
    lVar49 = *(longlong *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*param_2 != 0) {
      do {
        _Dst = (void *)(lVar49 + (ulonglong)(uint)((int)uVar41 << 8) * 4);
        memcpy(_Dst,*(void **)(param_2 + uVar41 * 2 + 10),(ulonglong)(param_3 * 4));
        if ((param_3 & 0xf) != 0) {
          memset((void *)((longlong)_Dst + (ulonglong)param_3 * 4),0,
                 (ulonglong)((0x10 - (param_3 & 0xf)) * 4));
        }
        uVar42 = (int)uVar41 + 1;
        uVar41 = (ulonglong)uVar42;
      } while (uVar42 < *param_2);
    }
    lVar43 = lVar48;
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar41 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          uVar42 = *param_2;
          uVar45 = 0;
          if (uVar42 != 0) {
            lVar43 = 0;
            do {
              uVar39 = uVar45 << 8;
              uVar45 = uVar45 + 1;
              *(longlong *)((longlong)local_98 + lVar43) = lVar49 + (ulonglong)uVar39 * 4;
              lVar7 = *(longlong *)
                       ((longlong)param_2 + (8 - (longlong)local_98) + (longlong)local_98 + lVar43);
              *(ulonglong *)((longlong)local_58 + lVar43) = lVar48 + (ulonglong)uVar39 * 4;
              *(ulonglong *)((longlong)local_98 + lVar43 + 0x20) = lVar7 + 0x104 + uVar41 * 0x10;
              lVar43 = lVar43 + 8;
            } while (uVar45 < uVar42);
          }
          FUN_14512ec70((uVar41 + 0x49) * 0x10 + param_1,local_98,local_58,local_98 + 4,uVar42,
                        param_3);
          uVar42 = (int)uVar41 + 1;
          uVar41 = (ulonglong)uVar42;
          lVar49 = lVar48;
        } while (uVar42 < *(uint *)(param_1 + 0x34));
      }
      lVar43 = *(longlong *)(param_1 + 0x20);
      lVar49 = lVar48;
      if (lVar48 == lVar43) {
        lVar43 = *(longlong *)(param_1 + 0x18);
      }
    }
    lVar48 = lVar43;
    if (*(char *)(param_1 + 0xb0) != '\0') {
      FUN_145130880(param_1,param_2,(ulonglong)param_3,lVar49,lVar43,uVar6);
      lVar48 = *(longlong *)(param_1 + 0x20);
      lVar49 = lVar43;
      if (lVar43 == lVar48) {
        lVar48 = *(longlong *)(param_1 + 0x18);
      }
    }
    lVar43 = lVar48;
    if (*(char *)(param_1 + 600) != '\0') {
      uVar41 = 0;
      if (*param_2 != 0) {
        uVar42 = param_3 & 0xfffffff0;
        do {
          uVar40 = (ulonglong)(uint)((int)uVar41 << 8);
          lVar43 = lVar48 + uVar40 * 4;
          lVar7 = lVar49 + uVar40 * 4;
          if (**(int **)(param_2 + uVar41 * 2 + 2) == 2) {
            fVar50 = *(float *)(param_1 + 0x28c);
          }
          else {
            fVar50 = *(float *)(param_1 + 0x25c + (ulonglong)param_2[uVar41 + 0x12] * 4);
          }
          uVar45 = uVar42;
          if ((param_3 & 0xfffffff0) != 0) {
            uVar40 = 8;
            do {
              iVar9 = (int)uVar40;
              pfVar2 = (float *)(lVar7 + (ulonglong)(iVar9 + 4) * 4);
              fVar10 = *pfVar2;
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              pfVar2 = (float *)(lVar7 + (ulonglong)(iVar9 - 8) * 4);
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar3 = (float *)(lVar7 + (ulonglong)(iVar9 - 4) * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(lVar7 + uVar40 * 4);
              fVar21 = *pfVar3;
              fVar22 = pfVar3[1];
              fVar23 = pfVar3[2];
              fVar24 = pfVar3[3];
              pfVar3 = (float *)(lVar43 + (ulonglong)(iVar9 - 8) * 4);
              *pfVar3 = *pfVar2 * fVar50;
              pfVar3[1] = fVar14 * fVar50;
              pfVar3[2] = fVar15 * fVar50;
              pfVar3[3] = fVar16 * fVar50;
              pfVar2 = (float *)(lVar43 + (ulonglong)(iVar9 - 4) * 4);
              *pfVar2 = fVar17 * fVar50;
              pfVar2[1] = fVar18 * fVar50;
              pfVar2[2] = fVar19 * fVar50;
              pfVar2[3] = fVar20 * fVar50;
              pfVar2 = (float *)(lVar43 + uVar40 * 4);
              *pfVar2 = fVar21 * fVar50;
              pfVar2[1] = fVar22 * fVar50;
              pfVar2[2] = fVar23 * fVar50;
              pfVar2[3] = fVar24 * fVar50;
              pfVar2 = (float *)(lVar43 + (ulonglong)(iVar9 + 4) * 4);
              *pfVar2 = fVar10 * fVar50;
              pfVar2[1] = fVar11 * fVar50;
              pfVar2[2] = fVar12 * fVar50;
              pfVar2[3] = fVar13 * fVar50;
              uVar40 = (ulonglong)(iVar9 + 0x10);
            } while (iVar9 + 8U < uVar42);
          }
          for (; uVar45 < param_3; uVar45 = uVar45 + 4) {
            pfVar2 = (float *)(lVar7 + (ulonglong)uVar45 * 4);
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            pfVar3 = (float *)(lVar43 + (ulonglong)uVar45 * 4);
            *pfVar3 = *pfVar2 * fVar50;
            pfVar3[1] = fVar10 * fVar50;
            pfVar3[2] = fVar11 * fVar50;
            pfVar3[3] = fVar12 * fVar50;
          }
          uVar45 = (int)uVar41 + 1;
          uVar41 = (ulonglong)uVar45;
        } while (uVar45 < *param_2);
      }
      lVar43 = *(longlong *)(param_1 + 0x20);
      lVar49 = lVar48;
      if (lVar48 == lVar43) {
        lVar43 = *(longlong *)(param_1 + 0x18);
      }
    }
    lVar48 = lVar49;
    if ((*(char *)(param_1 + 0x290) != '\0') && (uVar42 = 0, lVar48 = lVar43, *param_2 != 0)) {
      uVar45 = param_3 & 0xfffffff0;
      do {
        lVar8 = *(longlong *)(param_1 + 0x298);
        lVar7 = lVar43 + (ulonglong)(uVar42 << 8) * 4;
        lVar4 = lVar49 + (ulonglong)(uVar42 << 8) * 4;
        uVar39 = uVar45;
        if ((param_3 & 0xfffffff0) != 0) {
          uVar47 = 8;
          do {
            uVar41 = (ulonglong)(uVar47 + 4);
            uVar40 = (ulonglong)uVar47;
            pfVar2 = (float *)(lVar8 + uVar41 * 4);
            fVar50 = *pfVar2;
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            uVar46 = (ulonglong)(uVar47 - 8);
            pfVar2 = (float *)(lVar8 + uVar46 * 4);
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            uVar44 = (ulonglong)(uVar47 - 4);
            pfVar3 = (float *)(lVar4 + uVar46 * 4);
            fVar16 = pfVar3[1];
            fVar17 = pfVar3[2];
            fVar18 = pfVar3[3];
            pfVar5 = (float *)(lVar8 + uVar44 * 4);
            fVar19 = *pfVar5;
            fVar20 = pfVar5[1];
            fVar21 = pfVar5[2];
            fVar22 = pfVar5[3];
            pfVar5 = (float *)(lVar4 + uVar40 * 4);
            fVar23 = *pfVar5;
            fVar24 = pfVar5[1];
            fVar25 = pfVar5[2];
            fVar26 = pfVar5[3];
            pfVar5 = (float *)(lVar4 + uVar44 * 4);
            fVar27 = *pfVar5;
            fVar28 = pfVar5[1];
            fVar29 = pfVar5[2];
            fVar30 = pfVar5[3];
            pfVar5 = (float *)(lVar8 + uVar40 * 4);
            fVar31 = *pfVar5;
            fVar32 = pfVar5[1];
            fVar33 = pfVar5[2];
            fVar34 = pfVar5[3];
            pfVar5 = (float *)(lVar4 + uVar41 * 4);
            fVar35 = *pfVar5;
            fVar36 = pfVar5[1];
            fVar37 = pfVar5[2];
            fVar38 = pfVar5[3];
            pfVar5 = (float *)(lVar7 + uVar46 * 4);
            *pfVar5 = *pfVar3 * *pfVar2;
            pfVar5[1] = fVar16 * fVar13;
            pfVar5[2] = fVar17 * fVar14;
            pfVar5[3] = fVar18 * fVar15;
            pfVar2 = (float *)(lVar7 + uVar44 * 4);
            *pfVar2 = fVar19 * fVar27;
            pfVar2[1] = fVar20 * fVar28;
            pfVar2[2] = fVar21 * fVar29;
            pfVar2[3] = fVar22 * fVar30;
            pfVar2 = (float *)(lVar7 + uVar40 * 4);
            *pfVar2 = fVar23 * fVar31;
            pfVar2[1] = fVar24 * fVar32;
            pfVar2[2] = fVar25 * fVar33;
            pfVar2[3] = fVar26 * fVar34;
            pfVar2 = (float *)(lVar7 + uVar41 * 4);
            *pfVar2 = fVar50 * fVar35;
            pfVar2[1] = fVar10 * fVar36;
            pfVar2[2] = fVar11 * fVar37;
            pfVar2[3] = fVar12 * fVar38;
            uVar1 = uVar47 + 8;
            uVar47 = uVar47 + 0x10;
          } while (uVar1 < uVar45);
        }
        for (; uVar39 < param_3; uVar39 = uVar39 + 4) {
          uVar41 = (ulonglong)uVar39;
          pfVar2 = (float *)(lVar8 + uVar41 * 4);
          fVar50 = pfVar2[1];
          fVar10 = pfVar2[2];
          fVar11 = pfVar2[3];
          pfVar3 = (float *)(lVar4 + uVar41 * 4);
          fVar12 = pfVar3[1];
          fVar13 = pfVar3[2];
          fVar14 = pfVar3[3];
          pfVar5 = (float *)(lVar7 + uVar41 * 4);
          *pfVar5 = *pfVar2 * *pfVar3;
          pfVar5[1] = fVar50 * fVar12;
          pfVar5[2] = fVar10 * fVar13;
          pfVar5[3] = fVar11 * fVar14;
        }
        uVar42 = uVar42 + 1;
      } while (uVar42 < *param_2);
    }
    uVar41 = 0;
    if (*param_2 != 0) {
      do {
        memcpy(*(void **)(param_2 + uVar41 * 2 + 10),
               (void *)(lVar48 + (ulonglong)(uint)((int)uVar41 << 8) * 4),(ulonglong)(param_3 * 4));
        uVar42 = (int)uVar41 + 1;
        uVar41 = (ulonglong)uVar42;
      } while (uVar42 < *param_2);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 145130880 FUN_145130880 body=1004 status=ok
// SIG undefined FUN_145130880(void)

void FUN_145130880(longlong param_1,uint *param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
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
  longlong lVar56;
  ulonglong uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  ulonglong uVar62;
  longlong lVar63;
  longlong lVar64;
  uint local_a8;
  longlong local_a0;
  longlong local_98 [8];
  longlong local_58 [4];
  
  uVar59 = 0;
  uVar61 = 0;
  if (*param_2 != 0) {
    do {
      memset((void *)(param_5 + (ulonglong)(uVar59 << 8) * 4),0,(ulonglong)(param_3 * 4));
      uVar61 = *param_2;
      uVar59 = uVar59 + 1;
    } while (uVar59 < uVar61);
  }
  uVar59 = *(uint *)(param_1 + 0xb4);
  local_a8 = 0;
  if (uVar59 != 0) {
    do {
      uVar62 = (ulonglong)local_a8;
      local_a0 = param_4;
      if (1 < uVar59) {
        uVar57 = 0;
        lVar63 = param_1 + uVar62 * 0x68;
        lVar64 = param_4;
        local_a0 = param_6;
        if (*(int *)(lVar63 + 0xbc) != 0) {
          do {
            uVar61 = *param_2;
            uVar59 = 0;
            if (uVar61 != 0) {
              lVar56 = 0;
              do {
                uVar58 = uVar59 << 8;
                uVar59 = uVar59 + 1;
                lVar6 = (ulonglong)uVar58 * 4;
                *(longlong *)((longlong)local_98 + lVar56) = lVar6 + lVar64;
                lVar9 = *(longlong *)
                         ((longlong)param_2 + (8 - (longlong)local_98) + (longlong)local_98 + lVar56
                         );
                *(longlong *)((longlong)local_58 + lVar56) = lVar6 + param_6;
                *(ulonglong *)((longlong)local_98 + lVar56 + 0x20) =
                     lVar9 + 4 + (uVar62 * 4 + uVar57) * 0x10;
                lVar56 = lVar56 + 8;
              } while (uVar59 < uVar61);
            }
            FUN_14512ec70((uVar62 * 4 + 0x39 + uVar57) * 0x10 + param_1,local_98,local_58,
                          local_98 + 4,uVar61,param_3);
            uVar61 = (int)uVar57 + 1;
            uVar57 = (ulonglong)uVar61;
            lVar64 = param_6;
          } while (uVar61 < *(uint *)(lVar63 + 0xbc));
          uVar61 = *param_2;
        }
      }
      uVar59 = 0;
      if (uVar61 != 0) {
        uVar58 = param_3 & 0xfffffff0;
        lVar64 = param_1 + uVar62 * 0x68;
        do {
          lVar63 = param_5 + (ulonglong)(uVar59 << 8) * 4;
          lVar56 = local_a0 + (ulonglong)(uVar59 << 8) * 4;
          if (*(char *)(lVar64 + 0xb8) == '\0') {
            lVar6 = *(longlong *)(lVar64 + 200);
            uVar61 = uVar58;
            if (uVar58 != 0) {
              uVar62 = 8;
              do {
                iVar10 = (int)uVar62;
                lVar9 = (ulonglong)(iVar10 - 8) * 4;
                pfVar2 = (float *)(lVar9 + lVar6);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                pfVar3 = (float *)(lVar9 + lVar63);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                lVar7 = (ulonglong)(iVar10 - 4) * 4;
                pfVar4 = (float *)(lVar9 + lVar56);
                fVar17 = pfVar4[1];
                fVar18 = pfVar4[2];
                fVar19 = pfVar4[3];
                pfVar5 = (float *)(lVar7 + lVar56);
                fVar20 = *pfVar5;
                fVar21 = pfVar5[1];
                fVar22 = pfVar5[2];
                fVar23 = pfVar5[3];
                lVar8 = uVar62 * 4;
                uVar57 = (ulonglong)(iVar10 + 4);
                uVar62 = (ulonglong)(iVar10 + 0x10);
                pfVar5 = (float *)(lVar7 + lVar6);
                fVar24 = *pfVar5;
                fVar25 = pfVar5[1];
                fVar26 = pfVar5[2];
                fVar27 = pfVar5[3];
                pfVar5 = (float *)(lVar56 + uVar57 * 4);
                fVar28 = *pfVar5;
                fVar29 = pfVar5[1];
                fVar30 = pfVar5[2];
                fVar31 = pfVar5[3];
                pfVar5 = (float *)(lVar8 + lVar56);
                fVar32 = *pfVar5;
                fVar33 = pfVar5[1];
                fVar34 = pfVar5[2];
                fVar35 = pfVar5[3];
                pfVar5 = (float *)(lVar8 + lVar6);
                fVar36 = *pfVar5;
                fVar37 = pfVar5[1];
                fVar38 = pfVar5[2];
                fVar39 = pfVar5[3];
                pfVar5 = (float *)(lVar7 + lVar63);
                fVar40 = *pfVar5;
                fVar41 = pfVar5[1];
                fVar42 = pfVar5[2];
                fVar43 = pfVar5[3];
                pfVar5 = (float *)(lVar6 + uVar57 * 4);
                fVar44 = *pfVar5;
                fVar45 = pfVar5[1];
                fVar46 = pfVar5[2];
                fVar47 = pfVar5[3];
                pfVar5 = (float *)(lVar8 + lVar63);
                fVar48 = *pfVar5;
                fVar49 = pfVar5[1];
                fVar50 = pfVar5[2];
                fVar51 = pfVar5[3];
                pfVar5 = (float *)(lVar63 + uVar57 * 4);
                fVar52 = *pfVar5;
                fVar53 = pfVar5[1];
                fVar54 = pfVar5[2];
                fVar55 = pfVar5[3];
                pfVar5 = (float *)(lVar9 + lVar63);
                *pfVar5 = *pfVar4 * *pfVar2 + *pfVar3;
                pfVar5[1] = fVar17 * fVar11 + fVar14;
                pfVar5[2] = fVar18 * fVar12 + fVar15;
                pfVar5[3] = fVar19 * fVar13 + fVar16;
                pfVar2 = (float *)(lVar7 + lVar63);
                *pfVar2 = fVar20 * fVar24 + fVar40;
                pfVar2[1] = fVar21 * fVar25 + fVar41;
                pfVar2[2] = fVar22 * fVar26 + fVar42;
                pfVar2[3] = fVar23 * fVar27 + fVar43;
                pfVar2 = (float *)(lVar8 + lVar63);
                *pfVar2 = fVar32 * fVar36 + fVar48;
                pfVar2[1] = fVar33 * fVar37 + fVar49;
                pfVar2[2] = fVar34 * fVar38 + fVar50;
                pfVar2[3] = fVar35 * fVar39 + fVar51;
                pfVar2 = (float *)(lVar63 + uVar57 * 4);
                *pfVar2 = fVar28 * fVar44 + fVar52;
                pfVar2[1] = fVar29 * fVar45 + fVar53;
                pfVar2[2] = fVar30 * fVar46 + fVar54;
                pfVar2[3] = fVar31 * fVar47 + fVar55;
              } while (iVar10 + 8U < uVar58);
            }
            for (; uVar61 < param_3; uVar61 = uVar61 + 4) {
              uVar62 = (ulonglong)uVar61;
              pfVar2 = (float *)(lVar56 + uVar62 * 4);
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              pfVar3 = (float *)(lVar6 + uVar62 * 4);
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar4 = (float *)(lVar63 + uVar62 * 4);
              fVar17 = pfVar4[1];
              fVar18 = pfVar4[2];
              fVar19 = pfVar4[3];
              pfVar5 = (float *)(lVar63 + uVar62 * 4);
              *pfVar5 = *pfVar2 * *pfVar3 + *pfVar4;
              pfVar5[1] = fVar11 * fVar14 + fVar17;
              pfVar5[2] = fVar12 * fVar15 + fVar18;
              pfVar5[3] = fVar13 * fVar16 + fVar19;
            }
          }
          else {
            uVar61 = uVar58;
            if (uVar58 != 0) {
              uVar60 = 8;
              do {
                lVar6 = (ulonglong)(uVar60 - 8) * 4;
                pfVar2 = (float *)(lVar6 + lVar63);
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                pfVar3 = (float *)(lVar6 + lVar56);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                lVar9 = (ulonglong)(uVar60 - 4) * 4;
                pfVar4 = (float *)(lVar9 + lVar56);
                fVar17 = *pfVar4;
                fVar18 = pfVar4[1];
                fVar19 = pfVar4[2];
                fVar20 = pfVar4[3];
                pfVar4 = (float *)(lVar9 + lVar63);
                fVar21 = *pfVar4;
                fVar22 = pfVar4[1];
                fVar23 = pfVar4[2];
                fVar24 = pfVar4[3];
                lVar7 = (ulonglong)uVar60 * 4;
                pfVar4 = (float *)(lVar7 + lVar56);
                fVar25 = *pfVar4;
                fVar26 = pfVar4[1];
                fVar27 = pfVar4[2];
                fVar28 = pfVar4[3];
                uVar62 = (ulonglong)(uVar60 + 4);
                pfVar4 = (float *)(lVar56 + uVar62 * 4);
                fVar29 = *pfVar4;
                fVar30 = pfVar4[1];
                fVar31 = pfVar4[2];
                fVar32 = pfVar4[3];
                pfVar4 = (float *)(lVar7 + lVar63);
                fVar33 = *pfVar4;
                fVar34 = pfVar4[1];
                fVar35 = pfVar4[2];
                fVar36 = pfVar4[3];
                pfVar4 = (float *)(lVar63 + uVar62 * 4);
                fVar37 = *pfVar4;
                fVar38 = pfVar4[1];
                fVar39 = pfVar4[2];
                fVar40 = pfVar4[3];
                pfVar4 = (float *)(lVar6 + lVar63);
                *pfVar4 = *pfVar3 + *pfVar2;
                pfVar4[1] = fVar14 + fVar11;
                pfVar4[2] = fVar15 + fVar12;
                pfVar4[3] = fVar16 + fVar13;
                pfVar2 = (float *)(lVar9 + lVar63);
                *pfVar2 = fVar17 + fVar21;
                pfVar2[1] = fVar18 + fVar22;
                pfVar2[2] = fVar19 + fVar23;
                pfVar2[3] = fVar20 + fVar24;
                pfVar2 = (float *)(lVar7 + lVar63);
                *pfVar2 = fVar25 + fVar33;
                pfVar2[1] = fVar26 + fVar34;
                pfVar2[2] = fVar27 + fVar35;
                pfVar2[3] = fVar28 + fVar36;
                pfVar2 = (float *)(lVar63 + uVar62 * 4);
                *pfVar2 = fVar29 + fVar37;
                pfVar2[1] = fVar30 + fVar38;
                pfVar2[2] = fVar31 + fVar39;
                pfVar2[3] = fVar32 + fVar40;
                uVar1 = uVar60 + 8;
                uVar60 = uVar60 + 0x10;
              } while (uVar1 < uVar58);
            }
            for (; uVar61 < param_3; uVar61 = uVar61 + 4) {
              uVar62 = (ulonglong)uVar61;
              pfVar2 = (float *)(lVar56 + uVar62 * 4);
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              pfVar3 = (float *)(lVar63 + uVar62 * 4);
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              pfVar4 = (float *)(lVar63 + uVar62 * 4);
              *pfVar4 = *pfVar2 + *pfVar3;
              pfVar4[1] = fVar11 + fVar14;
              pfVar4[2] = fVar12 + fVar15;
              pfVar4[3] = fVar13 + fVar16;
            }
          }
          uVar61 = *param_2;
          uVar59 = uVar59 + 1;
        } while (uVar59 < uVar61);
      }
      uVar59 = *(uint *)(param_1 + 0xb4);
      local_a8 = local_a8 + 1;
    } while (local_a8 < uVar59);
  }
  return;
}



// FUNCTION 145130c70 FUN_145130c70 body=192 status=ok
// SIG undefined FUN_145130c70(void)

void FUN_145130c70(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 2);
    uVar4 = *(uint *)((longlong)param_1 + 0xc) -
            *(uint *)((longlong)param_1 + 0x14) % *(uint *)((longlong)param_1 + 0xc);
    if (param_2 - uVar3 <= uVar4) {
      uVar4 = param_2 - uVar3;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      do {
        uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x14) %
                (ulonglong)*(uint *)((longlong)param_1 + 0xc);
        memset((void *)(*param_1 +
                       ((ulonglong)
                        (((*(uint *)((longlong)param_1 + 0x14) - (int)uVar1) %
                         *(uint *)(param_1 + 1)) * uVar5) +
                        (ulonglong)(*(uint *)((longlong)param_1 + 0xc) * uVar2) + uVar1) * 4),0,
               (ulonglong)(uVar4 * 4));
        uVar5 = *(uint *)(param_1 + 2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar5);
    }
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + uVar4;
    uVar3 = uVar3 + uVar4;
  } while (uVar3 < param_2);
  return;
}



// FUNCTION 145130d30 FUN_145130d30 body=494 status=ok
// SIG undefined FUN_145130d30(void)

void FUN_145130d30(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8;
  
  if (*param_1 != 0) {
    uVar4 = *(uint *)((longlong)param_1 + 0x2c);
    if (uVar4 != 0) {
      uVar2 = (*(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x14)) +
              *(uint *)(param_1 + 1);
      if (uVar2 <= uVar4) {
        uVar4 = uVar2;
      }
      FUN_145130c70(param_1,uVar4);
      *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) - uVar4;
    }
    if (*(uint *)((longlong)param_1 + 0x24) < (uint)*(ushort *)((longlong)param_2 + 0x12)) {
      uVar2 = (uint)*(ushort *)((longlong)param_2 + 0x12) - *(uint *)((longlong)param_1 + 0x24);
      uVar4 = *(uint *)((longlong)param_1 + 0x14);
      uVar3 = (*(int *)((longlong)param_1 + 0x1c) - uVar4) + (int)param_1[1];
      local_res8 = 0;
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      do {
        uVar4 = *(uint *)((longlong)param_1 + 0xc) - uVar4 % *(uint *)((longlong)param_1 + 0xc);
        if (uVar2 - local_res8 <= uVar4) {
          uVar4 = uVar2 - local_res8;
        }
        uVar6 = 0;
        if ((int)param_1[2] != 0) {
          uVar3 = *(uint *)(param_1 + 2);
          do {
            uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x14) %
                    (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            memcpy((void *)(*param_1 +
                           ((ulonglong)
                            (((*(uint *)((longlong)param_1 + 0x14) - (int)uVar1) %
                             *(uint *)(param_1 + 1)) * uVar3) +
                            (ulonglong)(*(uint *)((longlong)param_1 + 0xc) * (int)uVar6) + uVar1) *
                           4),
                   (void *)(*param_2 +
                           ((ulonglong)*(uint *)((longlong)param_1 + 0x24) +
                           uVar6 * *(ushort *)(param_2 + 2) + (ulonglong)local_res8) * 4),
                   (ulonglong)(uVar4 * 4));
            uVar3 = *(uint *)(param_1 + 2);
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < uVar3);
        }
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + uVar4;
        local_res8 = local_res8 + uVar4;
        uVar4 = *(uint *)((longlong)param_1 + 0x14);
      } while (local_res8 < uVar2);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + local_res8;
    }
  }
  return;
}



// FUNCTION 145130f20 FUN_145130f20 body=1213 status=ok
// SIG undefined FUN_145130f20(void)

ulonglong FUN_145130f20(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 local_res8 [2];
  uint local_res10;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar16;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  *(longlong **)(param_1 + 0x118) = param_2;
  *(undefined8 *)(param_1 + 0x110) = param_4;
  *(longlong **)(param_1 + 8) = param_3;
  FUN_145135440(param_4,param_1 + 0x18);
  piVar4 = (int *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  plVar10 = (longlong *)0x0;
  local_res18 = 0;
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x20);
  param_5._0_4_ = 0;
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(param_1 + 0xac) = piVar4[1];
  *(int *)(param_1 + 0xbc) = *piVar4;
  *(undefined4 *)(param_1 + 200) = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),0,&local_res18,&param_5);
  lVar13 = local_res18;
  if (local_res18 == 0) {
    (**(code **)(*param_3 + 0x40))
              (param_3,"Plug-in media unavailable: Could not find Impulse Response",2);
    return 0x4f;
  }
  if (*(int *)(local_res18 + 8) != *piVar4) {
    (**(code **)(*param_3 + 0x40))
              (param_3,
               "Soundbanks have been generated with convolution reverb parameters that do not match sound engine runtime conditions. No wet path will be heard."
               ,2);
    return 2;
  }
  plVar8 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
  cVar5 = (**(code **)(*plVar8 + 8))(plVar8,0x40);
  uVar14 = -(uint)(cVar5 != '\0') & 0x40;
  plVar8 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
  cVar5 = (**(code **)(*plVar8 + 8))(plVar8,0x20);
  uVar7 = uVar14 | 0x20;
  if (cVar5 == '\0') {
    uVar7 = uVar14;
  }
  plVar8 = (longlong *)(**(code **)(*param_3 + 0x58))(param_3);
  cVar5 = (**(code **)(*plVar8 + 8))(plVar8,0x80);
  sVar2 = *(short *)(lVar13 + 2);
  local_res10 = uVar7 | 0x80;
  if (cVar5 == '\0') {
    local_res10 = uVar7;
  }
  if (sVar2 == 0) {
    lVar9 = (**(code **)(*param_2 + 8))
                      (param_2,0x90,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                      );
    if (lVar9 != 0) {
      plVar10 = (longlong *)FUN_1453c94a0(lVar9);
    }
  }
  else {
    if (sVar2 != 2) {
      (**(code **)(*param_3 + 0x40))
                (param_3,
                 "Convolution reverb media type is not compatible with plug-in. Soundbanks may need to be re-generated due to plug-in version differences, or were generated for the wrong platform."
                 ,2);
      return 4;
    }
    lVar9 = (**(code **)(*param_2 + 8))
                      (param_2,0xb0,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                      );
    if (lVar9 != 0) {
      plVar10 = (longlong *)FUN_1453c9ea0(lVar9);
    }
  }
  *(longlong **)(param_1 + 0x10) = plVar10;
  if (plVar10 == (longlong *)0x0) {
    return 0x34;
  }
  if (*(short *)(lVar13 + 2) != 3) {
    uVar7 = (**(code **)(*plVar10 + 8))
                      (plVar10,param_2,local_res18,(undefined4)param_5,CONCAT44(uVar16,local_res10))
    ;
    if (uVar7 == 0x1f) {
      (**(code **)(*param_3 + 0x40))
                (param_3,"Convolution reverb plugin parameters are invalid, effect is disabled",2);
      return 0x1f;
    }
    if (uVar7 != 1) {
      return (ulonglong)uVar7;
    }
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  uVar16 = *(undefined4 *)(*plVar10 + 0x1c);
  uVar11 = FUN_145132850(param_1,piVar4[1],uVar16);
  if ((int)uVar11 != 1) {
    return uVar11;
  }
  uVar7 = *(uint *)(param_1 + 0xb0);
  uVar11 = FUN_145132a90(param_1,uVar7,uVar16);
  if ((int)uVar11 != 1) {
    return uVar11;
  }
  local_res8[0] =
       (undefined4)(longlong)(*(float *)(param_1 + 0x18) * 0.001 * (float)*(uint *)(param_1 + 0xbc))
  ;
  plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
  lVar13 = *(longlong *)*plVar10;
  uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar7 = (**(code **)(lVar13 + 0x28))
                    (*plVar10,param_2,uVar7 & 0xff,uVar6,*(undefined8 *)(param_1 + 0xc0),local_res8)
  ;
  if (uVar7 != 1) {
    if (uVar7 != 9) {
      return (ulonglong)uVar7;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
              (*(longlong **)(param_1 + 8),
               "Maximum Impulse Response length of hardware Convolution Reverb reached.",2);
    return 9;
  }
  *(uint *)(param_1 + 0xa8) =
       (int)(longlong)
            ((*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x18)) * 0.001 *
            (float)*(uint *)(param_1 + 0xbc)) +
       (uint)*(ushort *)(*plVar10 + 0x10) * *(int *)(*plVar10 + 0x2c);
  uVar11 = FUN_1451320d0(param_1,local_res8[0]);
  if ((int)uVar11 != 1) {
    return uVar11;
  }
  uVar11 = FUN_1451321d0(param_1);
  if ((int)uVar11 != 1) {
    return uVar11;
  }
  plVar12 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  bVar1 = *(byte *)(piVar4 + 1);
  plVar8 = *(longlong **)(param_1 + 0x118);
  uVar3 = *(ushort *)(*plVar10 + 0x10);
  uVar11 = (**(code **)(*plVar12 + 0x10))(plVar12);
  uVar11 = uVar11 & 0xffff;
  uVar15 = 1;
  uVar7 = (uint)uVar3;
  if ((uint)uVar11 < (uint)uVar3) {
    *(uint *)(param_1 + 0xe0) = uVar7;
    *(uint *)(param_1 + 0x108) = (uVar3 - 1) - (int)((ulonglong)(uVar3 - 1) % uVar11);
    uVar14 = uVar7;
    if ((int)((ulonglong)uVar7 % uVar11) != 0) goto LAB_14513133a;
  }
  else {
    if (((uint)uVar11 <= (uint)uVar3) || ((int)(uVar11 % (ulonglong)uVar7) == 0)) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      goto LAB_14513139f;
    }
LAB_14513133a:
    uVar14 = (uint)uVar3 + (uint)uVar3;
    *(uint *)(param_1 + 0x108) = uVar7;
    *(uint *)(param_1 + 0xe0) = uVar14;
  }
  if (uVar14 != 0) {
    lVar13 = (**(code **)(*plVar8 + 8))
                       (plVar8,(ulonglong)(uVar14 * bVar1) << 2,
                        "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkMismatchBuffering.h"
                        ,0x74);
    *(longlong *)(param_1 + 0xd8) = lVar13;
    if (lVar13 == 0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      uVar15 = 2;
    }
  }
LAB_14513139f:
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(uint *)(param_1 + 0xe4) = uVar7;
  *(uint *)(param_1 + 0xe8) = (uint)bVar1;
  *(undefined8 *)(param_1 + 0xec) = 0;
  return uVar15;
}



// FUNCTION 1451313e0 FUN_1451313e0 body=264 status=ok
// SIG undefined FUN_1451313e0(void)

undefined4 FUN_1451313e0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      (**(code **)(*param_2 + 0x10))(param_2,puVar1);
    }
    param_1[2] = 0;
  }
  FUN_145132460(param_1);
  FUN_1451324f0(param_1);
  if (param_1[0x1b] != 0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
    param_1[0x1b] = 0;
  }
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x18] != 0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
    param_1[0x1a] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return uVar2;
}



// FUNCTION 1451314f0 FUN_1451314f0 body=208 status=ok
// SIG undefined FUN_1451314f0(void)

undefined4 FUN_1451314f0(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = 1;
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  if ((*(longlong *)(param_1 + 0x90) != 0) && (uVar3 = uVar4, *(int *)(param_1 + 0xb4) != 0)) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0x90) + uVar3 * 0x18);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xb4));
  }
  if ((*(longlong *)(param_1 + 0x98) != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0x98) + uVar4 * 0x18);
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xb8));
  }
  return uVar1;
}



// FUNCTION 1451315e0 FUN_1451315e0 body=2717 status=ok
// SIG undefined FUN_1451315e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1451315e0(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 *puVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  ushort uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  longlong lVar39;
  int *local_res20;
  undefined8 auStack_100 [5];
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  uint local_c8 [4];
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  uint uStack_a0;
  undefined8 *local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ushort local_68;
  ushort local_66;
  longlong *local_60;
  ulonglong uVar26;
  ulonglong uVar31;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    auStack_100[0] = 0x145131622;
    cVar10 = FUN_145132640(param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x10));
    if (cVar10 != '\0') {
      local_ac = 0x2b;
      local_60 = (longlong *)(param_1 + 0xd8);
      local_b0 = 0;
      local_b8 = 0;
      if ((*local_60 != 0) &&
         (*(undefined8 *)(param_1 + 0xfc) = 0, *(int *)((longlong)param_2 + 0xc) != 0x11)) {
        if ((uint)((*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xf4)) + *(int *)(param_1 + 0x104)
                  ) < *(uint *)(param_1 + 0x108)) {
          *(uint *)(param_1 + 0x104) =
               (*(uint *)(param_1 + 0x108) - *(int *)(param_1 + 0xec)) + *(int *)(param_1 + 0xf4);
        }
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        uVar14 = *(uint *)(param_1 + 0xb0);
      }
      else {
        uVar14 = *(uint *)(param_1 + 0xac);
      }
      uVar30 = uVar14 & 0xff;
      uVar31 = (ulonglong)uVar30;
      uVar18 = uVar31 * 8 + 0xf;
      if (uVar18 <= uVar31 * 8) {
        uVar18 = 0xffffffffffffff0;
      }
      auStack_100[0] = 0x1451316ba;
      lVar8 = -(uVar18 & 0xfffffffffffffff0);
      local_98 = (undefined8 *)((longlong)&local_b8 + lVar8);
      local_8c = (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x10);
LAB_1451316e0:
      uVar29 = local_8c;
      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x1451316eb;
      FUN_145130d30(param_1 + 0xd8,param_2);
      uVar18 = local_ac >> 0x30;
      uVar26 = local_ac >> 0x20 & 0xffff;
      do {
        local_res20 = (int *)(param_1 + 0xf0);
        lVar25 = *(longlong *)(param_1 + 0xd8);
        if (lVar25 == 0) {
          if (*(int *)(param_1 + 0xf8) != 0x2b) goto LAB_145132044;
          local_b8 = *param_2;
          uVar18 = (ulonglong)*(ushort *)((longlong)param_2 + 0x12);
          uVar13 = *(ushort *)(param_2 + 2);
          local_b0 = (undefined4)param_2[1];
          local_ac._0_6_ = (uint6)*(uint *)((longlong)param_2 + 0xc);
          local_ac = CONCAT26(*(ushort *)((longlong)param_2 + 0x12),(uint6)local_ac);
        }
        else {
          uVar23 = *(uint *)(param_1 + 0xe4);
          uVar24 = (ulonglong)uVar23;
          uVar16 = *(int *)(param_1 + 0xec) - *local_res20;
          if (*(int *)((longlong)param_2 + 0xc) == 0x2d) {
            if (uVar16 < uVar23) goto LAB_145131eb2;
            local_ac = 0x2d;
          }
          else {
            if (*(int *)((longlong)param_2 + 0xc) != 0x11) goto LAB_145131eb2;
            if (uVar16 < uVar23) {
              if ((*(uint *)(param_1 + 0xfc) < (uint)*(ushort *)((longlong)param_2 + 0x12)) ||
                 ((uVar16 == 0 && (*(int *)(param_1 + 0xa0) == 0)))) goto LAB_145131eb2;
              if ((uint)((*(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xe0)) -
                        *(int *)(param_1 + 0xec)) < uVar23 - uVar16) goto LAB_145131eab;
              if (*(int *)(param_1 + 0xa0) == 0) {
                *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14513179f;
                FUN_145130c70((longlong *)(param_1 + 0xd8));
                local_ac = 0x11;
              }
              else {
                uVar24 = (ulonglong)uVar16;
                local_ac = 0x11;
              }
            }
            else {
              uVar23 = 0x11;
              if (*(uint *)(param_1 + 0xfc) < (uint)*(ushort *)((longlong)param_2 + 0x12)) {
                uVar23 = 0x2d;
              }
              local_ac = (ulonglong)uVar23;
            }
          }
          uVar18 = uVar24 & 0xffff;
          uVar13 = *(ushort *)(param_1 + 0xe4);
          local_ac = CONCAT26((short)uVar24,(uint6)local_ac);
          local_b8 = *(longlong *)(param_1 + 0xd8) +
                     (ulonglong)
                     ((*(uint *)(param_1 + 0xf0) % *(uint *)(param_1 + 0xe0)) *
                     *(int *)(param_1 + 0xe8)) * 4;
          local_b0 = (undefined4)param_2[1];
        }
        uVar26 = (ulonglong)uVar13;
        local_ac._0_6_ = CONCAT24(uVar13,(int)local_ac);
        if ((int)local_ac != 0x2e) {
          uVar23 = *(uint *)(param_1 + 0xa8);
          if ((int)local_ac == 0x11) {
            uVar16 = *(uint *)(param_1 + 0xa0);
            uVar32 = (ushort)uVar18;
            if ((uVar16 != 0) || (uVar32 != 0)) {
              uVar17 = uVar23;
              if ((uVar16 == 0xffffffff) || (uVar32 != 0)) {
LAB_14513187a:
                uVar16 = uVar17;
                *(uint *)(param_1 + 0xa4) = uVar23;
              }
              else if (*(uint *)(param_1 + 0xa4) < uVar23) {
                uVar17 = (uVar16 - *(uint *)(param_1 + 0xa4)) + uVar23;
                goto LAB_14513187a;
              }
              uVar17 = (uint)uVar13 - (int)uVar18;
              uVar23 = uVar16;
              if (uVar17 <= uVar16) {
                uVar23 = uVar17;
              }
              iVar19 = uVar16 - uVar23;
              *(int *)(param_1 + 0xa0) = iVar19;
              uVar12 = uVar13;
              if (uVar32 < uVar13) {
                uVar12 = uVar32;
              }
              iVar28 = (uint)uVar13 - (uint)uVar12;
              if (iVar28 != 0) {
                if ((byte)local_b0 != 0) {
                  lVar25 = 0;
                  uVar18 = (ulonglong)(byte)local_b0;
                  do {
                    pvVar1 = (void *)(local_b8 + (uVar26 * lVar25 + (ulonglong)(uint)uVar12) * 4);
                    *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x1451318ed;
                    memset(pvVar1,0,(ulonglong)(uint)(iVar28 * 4));
                    uVar26 = local_ac >> 0x20 & 0xffff;
                    lVar25 = lVar25 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                  iVar19 = *(int *)(param_1 + 0xa0);
                  uVar29 = local_8c;
                }
                local_ac = CONCAT26((short)uVar26,(uint6)local_ac);
                uVar18 = uVar26;
              }
              if (iVar19 != 0) {
                local_ac = CONCAT44(local_ac._4_4_,0x2d);
              }
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
          }
          local_90 = (uint)uVar18;
          if (local_90 != 0) {
            lVar25 = **(longlong **)(param_1 + 0x118);
            pcVar6 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x30);
            *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x14513194e;
            uVar15 = (*pcVar6)();
            uVar7 = *(undefined8 *)(param_1 + 0x118);
            *(undefined4 *)((longlong)auStack_d8 + lVar8) = 0x378;
            pcVar6 = *(code **)(lVar25 + 0x18);
            *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131976;
            lVar25 = (*pcVar6)(uVar7,uVar26 * uVar31 * 4,uVar15,
                               "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                              );
            local_80 = lVar25;
            if (lVar25 != 0) {
              if (*(int *)(param_1 + 0x48) == 0) {
                uVar15 = *(undefined4 *)(param_1 + 0x68);
                uVar3 = *(undefined4 *)(param_1 + 0xb0);
                *(undefined4 *)((longlong)local_c8 + lVar8 + 8) = *(undefined4 *)(param_1 + 0x2c);
                uVar2 = *(undefined4 *)(param_1 + 0x28);
                *(undefined4 *)((longlong)local_c8 + lVar8) = uVar15;
                uVar15 = *(undefined4 *)(param_1 + 100);
                local_70 = uVar3;
                *(undefined4 *)((longlong)&uStack_d0 + lVar8) = uVar2;
                *(undefined4 *)((longlong)auStack_d8 + lVar8) = uVar15;
                local_6c = 0x2b;
                local_78 = lVar25;
                local_68 = (ushort)uVar18;
                local_66 = (ushort)uVar18;
                *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x1451319ee;
                FUN_1453cb320(&local_b8,&local_78);
                uVar18 = 0;
                do {
                  puVar27 = local_98;
                  uVar26 = 0;
                  iVar19 = (int)uVar18;
                  auVar34._4_4_ = iVar19;
                  auVar34._0_4_ = iVar19;
                  if (uVar30 != 0) {
                    uVar24 = uVar26;
                    if ((7 < uVar30) && (uVar24 = 0, 5 < DAT_14c707900)) {
                      auVar33 = pshuflw(ZEXT416((uint)(int)(short)local_68),
                                        ZEXT416((uint)(int)(short)local_68),0);
                      in_XMM4 = pmovzxwq(in_XMM4,auVar33);
                      auVar34._8_8_ = 0;
                      in_XMM5 = pmovzxdq(in_XMM5,auVar34);
                      uVar24 = uVar26;
                      uVar23 = 4;
                      do {
                        iVar28 = (int)uVar24;
                        uVar16 = uVar23 - 2;
                        auVar33._4_4_ = iVar28 + 1;
                        auVar33._0_4_ = iVar28;
                        auVar33._8_4_ = iVar28;
                        auVar33._12_4_ = iVar28;
                        auVar34 = pmovzxdq(auVar33,auVar33);
                        auVar34 = vpmullq_avx512vl(in_XMM4,auVar34);
                        lVar25 = in_XMM5._0_8_;
                        lVar39 = in_XMM5._8_8_;
                        local_98[uVar24] = (auVar34._0_8_ + lVar25) * 4 + local_78;
                        (local_98 + uVar24)[1] = (auVar34._8_8_ + lVar39) * 4 + local_78;
                        uVar17 = iVar28 + 8;
                        uVar24 = (ulonglong)uVar17;
                        auVar35._4_4_ = uVar23 - 1;
                        auVar35._0_4_ = uVar16;
                        auVar35._8_4_ = uVar16;
                        auVar35._12_4_ = uVar16;
                        auVar34 = pmovzxdq(auVar35,auVar35);
                        auVar34 = vpmullq_avx512vl(in_XMM4,auVar34);
                        local_98[uVar16] = (auVar34._0_8_ + lVar25) * 4 + local_78;
                        (local_98 + uVar16)[1] = (auVar34._8_8_ + lVar39) * 4 + local_78;
                        auVar36._4_4_ = uVar23 + 1;
                        auVar36._0_4_ = uVar23;
                        auVar36._8_4_ = uVar23;
                        auVar36._12_4_ = uVar23;
                        auVar34 = pmovzxdq(auVar36,auVar36);
                        auVar34 = vpmullq_avx512vl(in_XMM4,auVar34);
                        local_98[uVar23] = (auVar34._0_8_ + lVar25) * 4 + local_78;
                        (local_98 + uVar23)[1] = (auVar34._8_8_ + lVar39) * 4 + local_78;
                        uVar16 = uVar23 + 2;
                        auVar37._4_4_ = uVar23 + 3;
                        auVar37._0_4_ = uVar16;
                        auVar37._8_4_ = uVar16;
                        auVar37._12_4_ = uVar16;
                        auVar34 = pmovzxdq(auVar37,auVar37);
                        auVar34 = vpmullq_avx512vl(in_XMM4,auVar34);
                        auVar38._0_8_ = (auVar34._0_8_ + lVar25) * 4 + local_78;
                        auVar38._8_8_ = (auVar34._8_8_ + lVar39) * 4 + local_78;
                        *(undefined1 (*) [16])(local_98 + uVar16) = auVar38;
                        uVar23 = uVar23 + 8;
                      } while (uVar17 < (uVar14 & 0xf8));
                      if (uVar30 <= uVar17) goto LAB_145131b80;
                    }
                    plVar21 = local_98 + uVar24;
                    lVar25 = local_78 + (uVar24 * local_68 + uVar18) * 4;
                    uVar18 = (ulonglong)(uVar30 - (int)uVar24);
                    do {
                      *plVar21 = lVar25;
                      plVar21 = plVar21 + 1;
                      lVar25 = lVar25 + (ulonglong)local_68 * 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
LAB_145131b80:
                  plVar21 = *(longlong **)(param_1 + 0x10);
                  uVar15 = *(undefined4 *)(param_1 + 0x4c);
                  *(undefined8 *)((longlong)&uStack_d0 + lVar8) = *(undefined8 *)(param_1 + 0xc0);
                  lVar25 = *plVar21;
                  *(undefined4 *)((longlong)auStack_d8 + lVar8) = uVar15;
                  pcVar6 = *(code **)(lVar25 + 0x38);
                  *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131bab;
                  (*pcVar6)(plVar21,puVar27,uVar29,uVar31);
                  uVar18 = uVar26;
                  if (uVar30 != 0) {
                    do {
                      lVar25 = *(longlong *)(param_1 + 0x90);
                      if ((lVar25 != 0) && (*(int *)(lVar25 + uVar18) != 0)) {
                        uVar7 = *puVar27;
                        *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131bdb;
                        FUN_1453be2f0(lVar25 + uVar26 * 0x18,uVar7,uVar29);
                      }
                      uVar23 = (int)uVar26 + 1;
                      uVar26 = (ulonglong)uVar23;
                      uVar18 = uVar18 + 0x18;
                      puVar27 = puVar27 + 1;
                    } while (uVar23 < uVar30);
                  }
                  uVar18 = (ulonglong)(iVar19 + uVar29);
                } while (iVar19 + uVar29 < local_90);
                *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131c0a;
                FUN_1451331a0(param_1,&local_b8,&local_78);
              }
              else {
                local_84 = *(uint *)(param_1 + 0xac) & 0x210000;
                local_88 = *(uint *)(param_1 + 0xac) >> 0xe & 0xffffff01 | 2;
                bVar11 = (char)local_88 + 2;
                uVar23 = local_88;
                if ((*(int **)(param_1 + 0x98) == (int *)0x0) || (**(int **)(param_1 + 0x98) == 0))
                {
                  bVar9 = false;
                  uStack_a0 = 0;
                }
                else {
                  bVar9 = true;
                  uStack_a0 = 0;
                }
                do {
                  lVar25 = local_80;
                  puVar27 = local_98;
                  bVar22 = 0;
                  if (uVar30 != 0) {
                    uVar16 = 0;
                    uVar18 = (ulonglong)uStack_a0;
                    do {
                      pvVar1 = (void *)(local_b8 +
                                       ((local_ac >> 0x20 & 0xffff) * (ulonglong)bVar22 + uVar18) *
                                       4);
                      puVar27[bVar22] = pvVar1;
                      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131cc2;
                      memcpy((void *)((ulonglong)(uVar16 * uVar29) * 4 + lVar25),pvVar1,
                             (ulonglong)(uVar29 * 4));
                      bVar22 = bVar22 + 1;
                      uVar16 = (uint)bVar22;
                      uVar23 = local_88;
                    } while (bVar22 < uVar30);
                  }
                  puVar27 = local_98;
                  plVar21 = *(longlong **)(param_1 + 0x10);
                  uVar15 = *(undefined4 *)(param_1 + 0x4c);
                  lVar25 = *plVar21;
                  *(undefined8 *)((longlong)&uStack_d0 + lVar8) = *(undefined8 *)(param_1 + 0xc0);
                  *(undefined4 *)((longlong)auStack_d8 + lVar8) = uVar15;
                  pcVar6 = *(code **)(lVar25 + 0x38);
                  *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131d07;
                  (*pcVar6)(plVar21,puVar27,uVar29,uVar31);
                  uVar18 = 0;
                  if (uVar30 != 0) {
                    do {
                      lVar25 = *(longlong *)(param_1 + 0x90);
                      bVar22 = (byte)uVar18;
                      uVar7 = puVar27[uVar18];
                      if ((lVar25 != 0) && (*(int *)(lVar25 + uVar18 * 0x18) != 0)) {
                        *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131d4d;
                        FUN_1453be2f0(lVar25 + uVar18 * 0x18,uVar7,uVar29);
                      }
                      iVar19 = (int)uVar18;
                      if ((!bVar9) || (local_84 == 0)) goto LAB_145131dc1;
                      if (bVar22 == (byte)uVar23) {
                        lVar25 = *(longlong *)(param_1 + 0x98);
LAB_145131db6:
                        *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131dc1;
                        FUN_1453be2f0(lVar25,uVar7,uVar29);
                      }
                      else {
                        if (iVar19 == (uVar23 & 0xff) + 1) {
                          lVar25 = *(longlong *)(param_1 + 0x98) + 0x18;
                          goto LAB_145131db6;
                        }
                        if (local_84 == 0x210000) {
                          if (bVar22 == bVar11) {
                            lVar25 = *(longlong *)(param_1 + 0x98) + 0x30;
                          }
                          else {
                            if (iVar19 != bVar11 + 1) goto LAB_145131dc1;
                            lVar25 = *(longlong *)(param_1 + 0x98) + 0x48;
                          }
                          goto LAB_145131db6;
                        }
                      }
LAB_145131dc1:
                      lVar25 = local_80;
                      uVar15 = *(undefined4 *)(param_1 + 0x40);
                      uVar2 = *(undefined4 *)(param_1 + 0x7c);
                      *(uint *)((longlong)local_c8 + lVar8) = uVar29;
                      *(undefined4 *)((longlong)&uStack_d0 + lVar8) = uVar15;
                      *(undefined4 *)((longlong)auStack_d8 + lVar8) = uVar2;
                      *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131dfc;
                      FUN_1453baf30(uVar7,lVar25 + (ulonglong)(iVar19 * uVar29) * 4);
                      uVar18 = (ulonglong)(byte)(bVar22 + 1);
                      puVar27 = local_98;
                    } while ((byte)(bVar22 + 1) < uVar30);
                  }
                  uStack_a0 = uStack_a0 + uVar29;
                } while (uStack_a0 < local_90);
              }
              lVar25 = local_80;
              *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x20);
              *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x28);
              *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x30);
              *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x38);
              *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x48);
              *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x50);
              plVar21 = *(longlong **)(param_1 + 0x118);
              pcVar6 = *(code **)(*plVar21 + 0x10);
              *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131e60;
              (*pcVar6)(plVar21,lVar25);
            }
            uVar26 = local_ac >> 0x20 & 0xffff;
            uVar18 = local_ac >> 0x30;
          }
        }
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          uVar16 = (int)uVar18 + *(int *)(param_1 + 0xf0);
          *(uint *)(param_1 + 0xf0) = uVar16;
          uVar23 = *(uint *)(param_1 + 0xec);
          if (*(uint *)(param_1 + 0xec) <= uVar16) {
            uVar23 = uVar16;
          }
          *(uint *)(param_1 + 0xec) = uVar23;
        }
        *(int *)(param_1 + 0xf8) = (int)local_ac;
      } while( true );
    }
  }
  return;
LAB_145131eab:
  lVar25 = *(longlong *)(param_1 + 0xd8);
LAB_145131eb2:
  local_ac = CONCAT44(local_ac._4_4_,0x2e);
  if (lVar25 == 0) {
LAB_145132044:
    *param_2 = local_b8;
    *(undefined4 *)(param_2 + 1) = local_b0;
    *(int *)((longlong)param_2 + 0xc) = (int)local_ac;
    *(short *)(param_2 + 2) = (short)uVar26;
    *(short *)((longlong)param_2 + 0x12) = (short)uVar18;
    *(undefined4 *)(param_1 + 0xf8) = 0x2b;
    return;
  }
  if ((*(int *)((longlong)param_2 + 0xc) == 0x11) &&
     ((uint)*(ushort *)((longlong)param_2 + 0x12) <= *(uint *)(param_1 + 0xfc))) {
    uVar29 = (uint)*(ushort *)(param_2 + 2);
  }
  else {
    uVar29 = *(uint *)(param_1 + 0xfc);
  }
  do {
    uVar23 = *(uint *)(param_1 + 0xe4);
    uVar16 = *(uint *)(param_1 + 0xf0) - *(int *)(param_1 + 0xf4);
    uVar23 = uVar23 - *(uint *)(param_1 + 0xf4) % uVar23;
    uVar20 = uVar29 - *(int *)(param_1 + 0x100);
    uVar17 = uVar23;
    if (uVar20 <= uVar23) {
      uVar17 = uVar20;
    }
    if ((uVar17 <= uVar16) && (uVar16 = uVar20, uVar23 < uVar20)) {
      uVar16 = uVar23;
    }
    uVar23 = 0;
    if ((char)param_2[1] != '\0') {
      do {
        uVar17 = *(uint *)(param_1 + 0xf4);
        uVar20 = *(uint *)(param_1 + 0xe4);
        uVar18 = (ulonglong)uVar17 % (ulonglong)uVar20;
        uVar4 = *(uint *)(param_1 + 0xe0);
        iVar19 = *(int *)(param_1 + 0xe8);
        lVar25 = *(longlong *)(param_1 + 0xd8);
        uVar13 = *(ushort *)(param_2 + 2);
        uVar5 = *(uint *)(param_1 + 0x100);
        lVar39 = *param_2;
        *(undefined8 *)((longlong)auStack_100 + lVar8) = 0x145131fb3;
        memcpy((void *)(lVar39 + ((ulonglong)uVar13 * (ulonglong)uVar23 + (ulonglong)uVar5) * 4),
               (void *)(lVar25 + ((ulonglong)(((uVar17 - (int)uVar18) % uVar4) * iVar19) +
                                  (ulonglong)(uVar20 * uVar23) + uVar18) * 4),
               (ulonglong)(uVar16 * 4));
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(byte *)(param_2 + 1));
    }
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + uVar16;
    uVar16 = *(int *)(param_1 + 0x100) + uVar16;
    *(uint *)(param_1 + 0x100) = uVar16;
  } while ((*(uint *)(param_1 + 0xf4) < *(uint *)(param_1 + 0xf0)) && (uVar16 < uVar29));
  if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
    uVar13 = *(ushort *)(param_2 + 2);
  }
  else {
    uVar13 = *(ushort *)((longlong)param_2 + 0x12);
  }
  plVar21 = local_60;
  if ((uVar16 == uVar13) ||
     (plVar21 = (longlong *)(param_1 + 0xd8), *(int *)(param_1 + 0xf8) == 0x11)) {
    *(short *)((longlong)param_2 + 0x12) = (short)uVar16;
    uVar15 = 0x2d;
    if (*(uint *)((longlong)plVar21 + 0x14) <= *(uint *)((longlong)plVar21 + 0x1c)) {
      uVar15 = (undefined4)plVar21[4];
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar15;
    return;
  }
  goto LAB_1451316e0;
}



// FUNCTION 1451320d0 FUN_1451320d0 body=253 status=ok
// SIG undefined FUN_1451320d0(void)

undefined8 FUN_1451320d0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xb0);
    uVar9 = (ulonglong)(uint)bVar2;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))
                      (*(longlong **)(param_1 + 0x118),(ulonglong)bVar2 * 0x18,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                       ,0x19b);
    *(longlong *)(param_1 + 0x90) = lVar3;
    if (lVar3 == 0) {
      return 2;
    }
    uVar8 = (uint)bVar2;
    if (bVar2 == 0) {
      *(uint *)(param_1 + 0xb4) = uVar8;
    }
    else {
      uVar7 = 0;
      uVar5 = uVar7;
      do {
        puVar1 = (undefined4 *)(uVar5 + lVar3);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar3 = *(longlong *)(param_1 + 0x90);
        }
        uVar5 = uVar5 + 0x18;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      *(uint *)(param_1 + 0xb4) = uVar8;
      do {
        uVar4 = FUN_1453be220(*(longlong *)(param_1 + 0x90) + uVar7 * 0x18,
                              *(undefined8 *)(param_1 + 0x118),param_2);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar8);
    }
  }
  return 1;
}



// FUNCTION 1451321d0 FUN_1451321d0 body=646 status=ok
// SIG undefined FUN_1451321d0(void)

int FUN_1451321d0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = 0;
  iVar2 = 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar9 = (ulonglong)(*(float *)(param_1 + 0x1c) * 0.001 * (float)*(uint *)(param_1 + 0xbc));
  if ((int)uVar9 == 0) {
    return 1;
  }
  uVar6 = *(uint *)(param_1 + 0xac);
  if ((uVar6 & 0xf00) == 0x100) {
    if ((uVar6 & 0x210000) == 0x210000) {
      uVar7 = 4;
    }
    else {
      if ((uVar6 & 0x210000) == 0) {
        return 1;
      }
      uVar7 = 2;
    }
    uVar8 = (ulonglong)uVar7;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))
                      (*(longlong **)(param_1 + 0x118),uVar8 * 0x18,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                       ,0x1c8);
    *(longlong *)(param_1 + 0x98) = lVar3;
    if (lVar3 != 0) {
      do {
        puVar1 = (undefined4 *)(uVar4 + lVar3);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar3 = *(longlong *)(param_1 + 0x98);
        }
        uVar4 = uVar4 + 0x18;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      *(uint *)(param_1 + 0xb8) = uVar7;
      if ((uVar6 & 0x210000) == 0) {
        return 1;
      }
      iVar2 = FUN_1453be220(lVar3,*(undefined8 *)(param_1 + 0x118),uVar9 & 0xffffffff);
      if (iVar2 == 1) {
        iVar2 = FUN_1453be220(*(longlong *)(param_1 + 0x98) + 0x18,*(undefined8 *)(param_1 + 0x118),
                              uVar9 & 0xffffffff);
      }
      if ((uVar6 & 0x210000) != 0x210000) {
        return iVar2;
      }
      if (iVar2 != 1) {
        return iVar2;
      }
      iVar2 = FUN_1453be220(*(longlong *)(param_1 + 0x98) + 0x30,*(undefined8 *)(param_1 + 0x118),
                            uVar9 & 0xffffffff);
      if (iVar2 != 1) {
        return iVar2;
      }
      iVar2 = FUN_1453be220(*(longlong *)(param_1 + 0x98) + 0x48,*(undefined8 *)(param_1 + 0x118),
                            uVar9 & 0xffffffff);
      return iVar2;
    }
  }
  else {
    if ((uVar6 & 0xf00) != 0x200) {
      return 1;
    }
    uVar6 = *(uint *)(param_1 + 200);
    if (uVar6 == 0) {
      return 1;
    }
    uVar6 = (uVar6 - (uVar6 >> 1)) - 1;
    uVar8 = (ulonglong)uVar6;
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))
                      (*(longlong **)(param_1 + 0x118),(ulonglong)uVar6 * 0x18,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                       ,0x1e4);
    *(longlong *)(param_1 + 0x98) = lVar3;
    if (lVar3 != 0) {
      uVar5 = uVar4;
      if (uVar6 == 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        return 1;
      }
      do {
        puVar1 = (undefined4 *)(uVar5 + lVar3);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          *(undefined8 *)(puVar1 + 2) = 0;
          puVar1[4] = 0;
          lVar3 = *(longlong *)(param_1 + 0x98);
        }
        uVar8 = uVar8 - 1;
        uVar5 = uVar5 + 0x18;
      } while (uVar8 != 0);
      *(uint *)(param_1 + 0xb8) = uVar6;
      do {
        if (iVar2 != 1) {
          return iVar2;
        }
        iVar2 = FUN_1453be220(*(longlong *)(param_1 + 0x98) + uVar4 * 0x18,
                              *(undefined8 *)(param_1 + 0x118),uVar9 & 0xffffffff);
        uVar7 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar7;
      } while (uVar7 < uVar6);
      return iVar2;
    }
  }
  return 2;
}



// FUNCTION 145132460 FUN_145132460 body=142 status=ok
// SIG undefined FUN_145132460(void)

void FUN_145132460(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      do {
        FUN_1453be280(*(longlong *)(param_1 + 0x90) + uVar2 * 0x18,*(undefined8 *)(param_1 + 0x118))
        ;
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xb4));
    }
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))
              (*(longlong **)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 1451324f0 FUN_1451324f0 body=142 status=ok
// SIG undefined FUN_1451324f0(void)

void FUN_1451324f0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb8) != 0) {
      do {
        FUN_1453be280(*(longlong *)(param_1 + 0x98) + uVar2 * 0x18,*(undefined8 *)(param_1 + 0x118))
        ;
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xb8));
    }
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))
              (*(longlong **)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 145132580 FUN_145132580 body=89 status=ok
// SIG undefined FUN_145132580(void)

void FUN_145132580(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0x90) != 0) && (uVar2 = 0, *(int *)(param_1 + 0xb4) != 0)) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0x90) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb4));
  }
  return;
}



// FUNCTION 1451325e0 FUN_1451325e0 body=89 status=ok
// SIG undefined FUN_1451325e0(void)

void FUN_1451325e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0x98) != 0) && (uVar2 = 0, *(int *)(param_1 + 0xb8) != 0)) {
    do {
      FUN_1453be2c0(*(longlong *)(param_1 + 0x98) + uVar2 * 0x18);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 145132640 FUN_145132640 body=524 status=ok
// SIG undefined FUN_145132640(void)

undefined8 FUN_145132640(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  
  pfVar1 = (float *)(param_1 + 0x18);
  FUN_145135440(*(undefined8 *)(param_1 + 0x110),pfVar1);
  if ((*pfVar1 != *(float *)(param_1 + 0x54)) ||
     (*(int *)(param_1 + 0x84) != *(int *)(param_1 + 0x48))) {
    local_res8[0] = (undefined4)(longlong)(*pfVar1 * 0.001 * (float)*(uint *)(param_1 + 0xbc));
    iVar4 = FUN_145132850(param_1,*(undefined4 *)(param_1 + 0xac),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1c));
    if (iVar4 != 1) {
      return 0;
    }
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
    lVar2 = **(longlong **)(param_1 + 0x10);
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    iVar4 = (**(code **)(lVar2 + 0x28))
                      (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x118),
                       *(undefined1 *)(param_1 + 0xb0),uVar3,*(undefined8 *)(param_1 + 0xc0),
                       local_res8);
    if (iVar4 != 1) {
      return 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    FUN_145132460(param_1);
    iVar4 = FUN_1451320d0(param_1,local_res8[0]);
    if (iVar4 != 1) {
      return 0;
    }
    FUN_145132580(param_1);
    *(uint *)(param_1 + 0xa8) =
         (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x10) *
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x2c) +
         (int)(longlong)
              ((*pfVar1 + *(float *)(param_1 + 0x1c)) * 0.001 * (float)*(uint *)(param_1 + 0xbc));
  }
  if (*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x58)) {
    FUN_1451324f0(param_1);
    iVar4 = FUN_1451321d0(param_1);
    if (iVar4 != 1) {
      return 0;
    }
    FUN_1451325e0(param_1);
    *(uint *)(param_1 + 0xa8) =
         (int)(longlong)
              ((*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x1c)) * 0.001 *
              (float)*(uint *)(param_1 + 0xbc)) +
         (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + 0x10) *
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x2c);
  }
  if (((*(uint *)(param_1 + 0xac) & 0xf00) == 0x200) &&
     ((*(float *)(param_1 + 0x30) != *(float *)(param_1 + 0x6c) ||
      (*(float *)(param_1 + 0x34) != *(float *)(param_1 + 0x70))))) {
    FUN_145134910(*(float *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                  *(undefined4 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  }
  return 1;
}



// FUNCTION 145132850 FUN_145132850 body=572 status=ok
// SIG undefined FUN_145132850(void)

undefined8 FUN_145132850(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 >> 8 & 0xf;
  uVar4 = param_3 >> 8 & 0xf;
  bVar3 = (byte)param_2;
  if ((((uVar4 == uVar5) || (uVar4 == 0)) || ((byte)param_3 < 2)) || (bVar3 < 2)) {
    if (*(int *)(param_1 + 0x48) == 1) {
      *(uint *)(param_1 + 0xb0) = param_2;
      return 1;
    }
    if ((uVar5 != 0) && ((uVar2 = param_3 & 0xff, uVar4 != 0 || (uVar2 < 2)))) {
      *(uint *)(param_1 + 0xb0) = param_3;
      if (uVar5 == 1) {
        if (((byte)((byte)param_3 - ((byte)(param_3 >> 0xf) & 1)) == '\x01') && (1 < bVar3)) {
          uVar4 = 3;
          bVar3 = 0;
          do {
            bVar3 = bVar3 + 1;
            uVar4 = uVar4 & uVar4 - 1;
          } while (uVar4 != 0);
          *(byte *)(param_1 + 0xb0) = bVar3;
          *(uint *)(param_1 + 0xb0) = bVar3 | 0x3100;
          return 1;
        }
        uVar4 = (param_2 & param_3) >> 0xc;
        if (uVar4 == 0) {
          uVar4 = 4;
          bVar3 = 0;
          do {
            bVar3 = bVar3 + 1;
            uVar4 = uVar4 & uVar4 - 1;
          } while (uVar4 != 0);
          *(byte *)(param_1 + 0xb0) = bVar3;
          *(uint *)(param_1 + 0xb0) = bVar3 | 0x4100;
          return 1;
        }
        bVar3 = 0;
        uVar5 = uVar4;
        do {
          bVar3 = bVar3 + 1;
          uVar5 = uVar5 & uVar5 - 1;
        } while (uVar5 != 0);
        *(byte *)(param_1 + 0xb0) = bVar3;
        *(uint *)(param_1 + 0xb0) = (uint)bVar3 | uVar4 << 0xc | 0x100;
        return 1;
      }
      uVar4 = param_2 & 0xff;
      if (uVar2 == 1) {
        *(byte *)(param_1 + 0xb0) = bVar3;
        param_2 = param_2 & 0xff;
      }
      else {
        if (uVar4 <= uVar2) {
          uVar2 = uVar4;
        }
        uVar4 = uVar2;
        *(char *)(param_1 + 0xb0) = (char)uVar4;
        param_2 = uVar4 | 0x200;
      }
      *(uint *)(param_1 + 0xb0) = param_2;
      if ((uVar4 == 4) || (uVar4 == 1)) {
        uVar4 = 4;
      }
      else if ((uVar4 != 9) && (uVar4 != 0x10)) {
        return 0x4e;
      }
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 8))
                        (*(longlong **)(param_1 + 0x118),(uVar4 + 7 >> 3) * uVar4 * 0x20,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                         ,0x26e);
      *(longlong *)(param_1 + 0xd0) = lVar1;
      if (lVar1 != 0) {
        FUN_145134910(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),uVar4,lVar1);
        *(uint *)(param_1 + 200) = uVar4;
        return 1;
      }
      return 2;
    }
  }
  return 0x4e;
}



// FUNCTION 145132a90 FUN_145132a90 body=1801 status=ok
// SIG undefined FUN_145132a90(void)

undefined8 FUN_145132a90(longlong param_1,ulonglong param_2,uint param_3)

{
  void *_Dst;
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  
  _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x118) + 8))
                           (*(longlong **)(param_1 + 0x118),param_2 & 0xff,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                            ,0x11c);
  *(void **)(param_1 + 0xc0) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  memset(_Dst,0,param_2 & 0xff);
  if ((param_3 & 0xff) < 2) {
    return 1;
  }
  uVar4 = (uint)param_2;
  if ((uVar4 & 0xf00) != 0x100) {
    if ((char)param_2 == '\0') {
      return 1;
    }
    uVar3 = 0;
    uVar7 = 0;
    do {
      bVar5 = (char)uVar7 + 1;
      *(char *)(uVar7 + *(longlong *)(param_1 + 0xc0)) = (char)(uVar3 % (param_3 & 0xff));
      uVar3 = (uint)bVar5;
      uVar7 = (ulonglong)bVar5;
    } while (uVar3 < (uVar4 & 0xff));
    return 1;
  }
  **(undefined1 **)(param_1 + 0xc0) = 0;
  if (1 < (uVar4 & 0xff)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 1) = 1;
  }
  uVar3 = uVar4 >> 0xc;
  if ((((byte)(uVar4 >> 0x15) ^ (byte)(param_2 >> 0x10)) & 1) != 0) {
    uVar3 = uVar3 & 0xffffffcf | 0x600;
  }
  uVar4 = param_3 >> 0xc;
  uVar8 = uVar4 & uVar3;
  if ((uVar8 & 4) != 0) {
    cVar2 = '\0';
    for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    bVar5 = 0;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      bVar5 = bVar5 + 1;
    }
    *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    bVar5 = 0;
    if ((uVar4 & 0x210) == 0) {
      for (uVar1 = uVar3 & 0x3f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(undefined1 *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = 1;
    }
    else {
      for (uVar1 = uVar4 & 0x3f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      bVar6 = 0;
      for (uVar1 = uVar3 & 0x3f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar6 = bVar6 + 1;
      }
      *(byte *)((ulonglong)bVar6 + *(longlong *)(param_1 + 0xc0)) = bVar5;
    }
  }
  if ((uVar3 >> 9 & 1) != 0) {
    if ((uVar4 & 0x210) == 0) {
      bVar5 = 0;
      for (uVar1 = uVar3 & 0x1f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(undefined1 *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = 0;
    }
    else {
      cVar2 = '\0';
      for (uVar1 = uVar4 & 0x1f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar1 = uVar3 & 0x1f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
    }
  }
  if ((uVar3 & 0x20) != 0) {
    if ((uVar4 & 0x210) == 0x210) {
      cVar2 = '\0';
      for (uVar1 = uVar4 & 0x17; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      uVar1 = uVar3 & 0x17;
      if (uVar1 == 0) {
LAB_145132cec:
        *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
      }
      else {
        do {
          bVar5 = bVar5 + 1;
          uVar1 = uVar1 & uVar1 - 1;
        } while (uVar1 != 0);
        *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
      }
    }
    else {
      if ((uVar4 & 0x210) != 0) {
        cVar2 = '\0';
        for (uVar1 = uVar4 & 0x3f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
          cVar2 = cVar2 + '\x01';
        }
        bVar5 = 0;
        for (uVar1 = uVar3 & 0x17; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
          bVar5 = bVar5 + 1;
        }
        goto LAB_145132cec;
      }
      bVar5 = 0;
      for (uVar1 = uVar3 & 0x17; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(undefined1 *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = 1;
    }
  }
  if ((uVar3 & 0x10) != 0) {
    if ((uVar4 & 0x210) == 0x210) {
      bVar5 = 0;
      for (uVar1 = uVar3 & 7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      cVar2 = '\0';
      uVar1 = uVar4 & 7;
      if (uVar1 == 0) {
LAB_145132d9c:
        *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
      }
      else {
        do {
          cVar2 = cVar2 + '\x01';
          uVar1 = uVar1 & uVar1 - 1;
        } while (uVar1 != 0);
        *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
      }
    }
    else {
      if ((uVar4 & 0x210) != 0) {
        cVar2 = '\0';
        for (uVar1 = uVar4 & 0x1f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
          cVar2 = cVar2 + '\x01';
        }
        bVar5 = 0;
        for (uVar1 = uVar3 & 7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
          bVar5 = bVar5 + 1;
        }
        goto LAB_145132d9c;
      }
      bVar5 = 0;
      for (uVar1 = uVar3 & 7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(undefined1 *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = 0;
    }
  }
  if ((uVar3 & 0xfffff9c0) == 0) {
    return 1;
  }
  if ((uVar8 >> 0xb & 1) != 0) {
    cVar2 = '\0';
    for (uVar1 = uVar4 & 0x7f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    bVar5 = 0;
    for (uVar1 = uVar3 & 0x7f7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      bVar5 = bVar5 + 1;
    }
    *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
  }
  if ((uVar8 >> 0xc & 1) != 0) {
    cVar2 = '\0';
    for (uVar8 = uVar4 & 0xff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    bVar5 = 0;
    for (uVar8 = uVar3 & 0xff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      bVar5 = bVar5 + 1;
    }
    *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    if ((param_3 >> 0x19 & 1) == 0) {
      if ((uVar4 & 4) == 0) goto LAB_145132ede;
      cVar2 = '\0';
      for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar8 = uVar3 & 0x1ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
    }
    else {
      cVar2 = '\0';
      for (uVar8 = uVar4 & 0x1ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar8 = uVar3 & 0x1ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
    }
    *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
  }
LAB_145132ede:
  if ((uVar3 >> 0xe & 1) != 0) {
    if ((param_3 >> 0x1a & 1) == 0) {
      bVar5 = 0;
      for (uVar8 = uVar3 & 0x3ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(undefined1 *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = 1;
    }
    else {
      cVar2 = '\0';
      for (uVar8 = uVar4 & 0x3ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar8 = uVar3 & 0x3ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
    }
  }
  if ((uVar3 >> 0xf & 1) != 0) {
    if ((param_3 >> 0x1b & 1) == 0) {
      if ((param_3 >> 0x15 & 1) == 0) goto LAB_145132fd7;
      cVar2 = '\0';
      for (uVar8 = uVar4 & 0x7ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar8 = uVar3 & 0x7ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
    }
    else {
      cVar2 = '\0';
      for (uVar8 = uVar4 & 0x7ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar8 = uVar3 & 0x7ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
    }
    *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
  }
LAB_145132fd7:
  if ((uVar3 >> 0x10 & 1) == 0) goto LAB_14513309d;
  if ((param_3 >> 0x1c & 1) == 0) {
    if ((param_3 >> 0x19 & 1) != 0) {
      cVar2 = '\0';
      for (uVar8 = uVar4 & 0x1ff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar8 = uVar3 & 0xfff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        bVar5 = bVar5 + 1;
      }
      *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
      goto LAB_14513309d;
    }
    if ((uVar4 & 4) == 0) goto LAB_14513309d;
    bVar5 = 0;
    for (uVar8 = uVar3 & 0xfff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      bVar5 = bVar5 + 1;
    }
    cVar2 = '\0';
    for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      cVar2 = cVar2 + '\x01';
    }
  }
  else {
    cVar2 = '\0';
    for (uVar8 = uVar4 & 0xfff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      cVar2 = cVar2 + '\x01';
    }
    bVar5 = 0;
    for (uVar8 = uVar3 & 0xfff7; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      bVar5 = bVar5 + 1;
    }
  }
  *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
LAB_14513309d:
  if ((uVar3 >> 0x11 & 1) != 0) {
    if ((param_3 >> 0x1d & 1) == 0) {
      if ((param_3 >> 0x16 & 1) == 0) {
        bVar5 = 0;
        for (uVar3 = uVar3 & 0x1fff7; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
          bVar5 = bVar5 + 1;
        }
        *(undefined1 *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = 1;
        return 1;
      }
      cVar2 = '\0';
      for (uVar4 = uVar4 & 0x3f7; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      for (uVar3 = uVar3 & 0x1fff7; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        bVar5 = bVar5 + 1;
      }
    }
    else {
      cVar2 = '\0';
      for (uVar4 = uVar4 & 0x1fff7; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        cVar2 = cVar2 + '\x01';
      }
      bVar5 = 0;
      uVar3 = uVar3 & 0x1fff7;
      if (uVar3 != 0) {
        do {
          bVar5 = bVar5 + 1;
          uVar3 = uVar3 & uVar3 - 1;
        } while (uVar3 != 0);
        *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
        return 1;
      }
    }
    *(char *)((ulonglong)bVar5 + *(longlong *)(param_1 + 0xc0)) = cVar2;
  }
  return 1;
}



// FUNCTION 1451331a0 FUN_1451331a0 body=4530 status=ok
// SIG undefined FUN_1451331a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1451331a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  void *pvVar18;
  longlong lVar19;
  void *pvVar20;
  int iVar21;
  uint uVar22;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  size_t _Size;
  undefined1 *puVar28;
  uint uVar29;
  ulonglong uVar30;
  byte bVar31;
  float *pfVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined2 uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  size_t local_res8;
  uint local_res10;
  float *local_res20;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  float local_f8 [2];
  ulonglong local_f0;
  uint local_e8 [2];
  uint local_e0;
  ulonglong local_d8;
  float *local_d0;
  ulonglong local_c8;
  uint local_c0;
  longlong *local_b8;
  longlong local_b0;
  void *local_a8;
  uint local_a0;
  undefined4 local_9c;
  ushort local_98;
  ushort local_96;
  ulonglong uVar23;
  
  uStack_120 = 0x1451331ef;
  plVar16 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
  uStack_120 = 0x1451331fe;
  local_b8 = (longlong *)(**(code **)(*plVar16 + 200))(plVar16,0);
  uVar38 = *(uint *)(param_1 + 0xac);
  uVar8 = *(ushort *)((longlong)param_2 + 0x12);
  uVar36 = (ulonglong)uVar8;
  local_c8 = CONCAT44(local_c8._4_4_,(uint)uVar8);
  uVar22 = (uint)uVar8;
  uVar12 = (uint)uVar8;
  if (uVar38 >> 0xc == 8) {
    fVar40 = *(float *)(param_1 + 0x78);
    fVar41 = *(float *)(param_1 + 0x3c);
  }
  else {
    if (uVar38 >> 0xc != 4) {
      if ((uVar38 & 0xf00) != 0x200) {
        uVar38 = uVar38 - (uVar38 >> 0xf & 0x1ffe0001) & 0xff;
        if (2 < uVar38) {
          uVar38 = 2;
        }
        uStack_120 = 0x145133aaf;
        pvVar18 = (void *)(**(code **)(**(longlong **)(param_1 + 0x118) + 8))
                                    (*(longlong **)(param_1 + 0x118),uVar38 * uVar36 * 4,
                                     "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                                     ,0x4dc);
        if (pvVar18 == (void *)0x0) {
          return;
        }
        local_9c = 0x2b;
        uVar29 = (uVar38 != 2) + 3;
        bVar31 = 0;
        uVar38 = uVar29;
        do {
          bVar31 = bVar31 + 1;
          uVar38 = uVar38 & uVar38 - 1;
        } while (uVar38 != 0);
        local_a0 = uVar29 * 0x1000 | (uint)bVar31 | 0x100;
        uVar38 = *(uint *)(param_1 + 0xac) >> 0xc & 7;
        uVar29 = (uint)uVar8;
        local_a8 = pvVar18;
        if (uVar38 == 3) {
          pvVar20 = (void *)((longlong)pvVar18 + uVar36 * 4);
          local_e8[0] = *(uint *)(param_1 + 0x20);
          local_f0._0_4_ = *(float *)(param_1 + 0x5c);
          uStack_120 = 0x145133e2b;
          local_f8[0] = (float)(uint)uVar8;
          local_98 = uVar8;
          local_96 = uVar8;
          FUN_1453caea0(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,pvVar18,pvVar20)
          ;
          local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x30);
          local_f8[0] = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x80);
          uStack_120 = 0x145133e68;
          local_e8[0] = uVar29;
          FUN_1453baf30(*param_2,pvVar18,*(undefined4 *)(param_1 + 0x7c),
                        *(undefined4 *)(param_1 + 0x40));
          local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x30);
          local_f8[0] = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x80);
          uStack_120 = 0x145133eae;
          local_e8[0] = uVar29;
          FUN_1453baf30(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,pvVar20,
                        *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
        }
        else if (uVar38 == 4) {
          local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x30);
          local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x6c);
          uStack_120 = 0x145133dee;
          local_e8[0] = uVar12;
          local_98 = uVar8;
          local_96 = uVar8;
          FUN_1453baf30(*param_2,*param_3,*(undefined4 *)(param_1 + 0x7c),
                        *(undefined4 *)(param_1 + 0x40));
        }
        else {
          local_98 = uVar8;
          local_96 = uVar8;
          if (uVar38 == 7) {
            uVar38 = *(uint *)(param_3 + 1) & 0x7000;
            if ((uVar38 == 0x3000) || ((uVar38 == 0 && ((byte)*(uint *)(param_3 + 1) < 3)))) {
              local_e8[0] = 0x3ee8b439;
              local_f0._0_4_ = 0.4545;
              local_f8[0] = 0.4545;
              uStack_120 = 0x145133c3e;
              local_e0 = uVar29;
              FUN_1453bac80(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,pvVar18);
              local_f0._0_4_ = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x44);
              local_f8[0] = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x80);
              uStack_120 = 0x145133c84;
              local_e8[0] = uVar29;
              FUN_1453baf30(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8,pvVar18,
                            *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
              local_e8[0] = 0xbdef9db2;
              local_f0._0_4_ = -0.117;
              local_f8[0] = 0.883;
              uStack_120 = 0x145133cc4;
              local_e0 = uVar29;
              FUN_1453bac80(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,pvVar18,
                            0x3f620c4a);
              pvVar20 = (void *)((longlong)pvVar18 + uVar36 * 4);
              local_e8[0] = 0xbdef9db2;
              local_f0._0_4_ = -0.117;
              local_f8[0] = 0.883;
              uStack_120 = 0x145133cfc;
              local_e0 = uVar29;
              FUN_1453bac80(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,*param_3,pvVar20,
                            0x3f620c4a);
              local_f8[0] = *(float *)(param_1 + 0x20);
              uStack_120 = 0x145133d1e;
              FUN_1453caa80(pvVar18,pvVar20,uVar29,*(undefined4 *)(param_1 + 0x5c));
              local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x30);
              local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x6c);
              uStack_120 = 0x145133d5b;
              local_e8[0] = uVar29;
              FUN_1453baf30(*param_2,pvVar18,*(undefined4 *)(param_1 + 0x7c),
                            *(undefined4 *)(param_1 + 0x40));
              local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x30);
              lVar27 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4;
            }
            else {
              local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x30);
              local_f8[0] = *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x80);
              uStack_120 = 0x145133b8f;
              local_e8[0] = uVar12;
              FUN_1453baf30(*param_2,*param_3,*(undefined4 *)(param_1 + 0x7c),
                            *(undefined4 *)(param_1 + 0x40));
              local_f0._0_4_ = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x44);
              local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x6c);
              uStack_120 = 0x145133be0;
              local_e8[0] = uVar29;
              FUN_1453baf30(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 4,
                            *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,
                            *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
              local_f0._0_4_ = *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x44);
              lVar27 = *param_2 + (ulonglong)*(ushort *)(param_2 + 2) * 8;
              pvVar20 = (void *)(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 8);
            }
            local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x6c);
            uStack_120 = 0x145133dab;
            local_e8[0] = uVar29;
            FUN_1453baf30(lVar27,pvVar20,*(undefined4 *)(param_1 + 0x7c),
                          *(undefined4 *)(param_1 + 0x40));
          }
        }
        uVar30 = 0;
        if ((*(uint *)(param_1 + 0xac) & 0x210000) != 0) {
          if ((*(uint *)(param_3 + 1) >> 0xc & 0x210) == 0) {
            local_res8 = (size_t)((uint)uVar8 * 4);
            uStack_120 = 0x145133eeb;
            memcpy(pvVar18,(void *)*param_3,(ulonglong)((uint)uVar8 * 4));
            uVar17 = (ulonglong)*(ushort *)(param_3 + 2);
          }
          else {
            uVar38 = 0;
            uVar17 = uVar30;
            for (uVar26 = *(uint *)(param_3 + 1) >> 0xc & 7; uVar26 != 0;
                uVar26 = uVar26 & uVar26 - 1) {
              uVar38 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar38;
            }
            local_res8 = (size_t)((uint)uVar8 * 4);
            uStack_120 = 0x145133f3f;
            memcpy(pvVar18,(void *)(*param_3 + uVar17 * *(ushort *)(param_3 + 2) * 4),local_res8);
            uVar17 = (ulonglong)(uVar38 + 1) * (ulonglong)*(ushort *)(param_3 + 2);
          }
          uStack_120 = 0x145133f69;
          memcpy((void *)((longlong)pvVar18 + uVar36 * 4),(void *)(*param_3 + uVar17 * 4),local_res8
                );
          local_f0._0_4_ = (float)(*(uint *)(param_1 + 0xac) >> 0xe & 1 | 2);
          local_f8[0] = 0.0;
          uStack_120 = 0x145133f92;
          FUN_145134360(param_1,param_2,&local_a8,uVar29);
          if ((*(uint *)(param_1 + 0xac) & 0x210000) == 0x210000) {
            uVar38 = *(uint *)(param_1 + 0xac) >> 0xe;
            if ((*(uint *)(param_3 + 1) & 0x210000) == 0x210000) {
              uVar17 = ((ulonglong)(*(uint *)(param_3 + 1) & 0x4000) | 0x10000) >> 0xe;
              uStack_120 = 0x1451340aa;
              memcpy(pvVar18,(void *)(*param_3 + *(ushort *)(param_3 + 2) * uVar17 * 4),local_res8);
              uStack_120 = 0x1451340d0;
              memcpy((void *)((longlong)pvVar18 + uVar36 * 4),
                     (void *)(*param_3 + (uVar17 + 1) * (ulonglong)*(ushort *)(param_3 + 2) * 4),
                     local_res8);
              local_f0._0_4_ = (float)(uVar38 & 1 | 4);
              local_f8[0] = 1.4013e-45;
              uStack_120 = 0x1451340fb;
              FUN_145134360(param_1,param_2,&local_a8,uVar29);
            }
            else {
              uVar17 = (ulonglong)(uVar38 & 1) | 4;
              local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x34);
              local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x70);
              uStack_120 = 0x145134020;
              local_e8[0] = uVar12;
              FUN_1453baf30(*param_2 + *(ushort *)(param_2 + 2) * uVar17 * 4,pvVar18,
                            *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
              local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x34);
              local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x70);
              uStack_120 = 0x145134075;
              local_e8[0] = uVar12;
              FUN_1453baf30(*param_2 + (uVar17 + 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4,
                            (void *)((longlong)pvVar18 + uVar36 * 4),*(undefined4 *)(param_1 + 0x7c)
                            ,*(undefined4 *)(param_1 + 0x40));
            }
          }
        }
        if ((*(uint *)(param_1 + 0xac) & 0x8000) != 0) {
          uVar36 = uVar30;
          if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
            uVar36 = *param_2 +
                     (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
                     (ulonglong)*(ushort *)(param_2 + 2) * 4;
          }
          local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x3c);
          local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x78);
          uStack_120 = 0x145134166;
          local_e8[0] = uVar22;
          FUN_1453baf30(uVar36,*param_3,*(undefined4 *)(param_1 + 0x7c),
                        *(undefined4 *)(param_1 + 0x40));
        }
        uVar38 = *(uint *)(param_1 + 0xac) >> 0xc;
        if ((uVar38 & 0xff9c0) != 0) {
          for (uVar12 = uVar38 & 0x637; uVar29 = (uint)uVar30, uVar12 != 0;
              uVar12 = uVar12 & uVar12 - 1) {
            uVar30 = (ulonglong)(uVar29 + 1);
          }
          uVar26 = *(uint *)(param_1 + 0xac) & 0xff;
          uVar12 = uVar26 - 1;
          if ((uVar38 & 8) == 0) {
            uVar12 = uVar26;
          }
          if (uVar29 < uVar12) {
            uVar36 = (ulonglong)(uVar12 - uVar29);
            do {
              uStack_120 = 0x1451341d2;
              FUN_1451344f0(*param_2 + *(ushort *)(param_2 + 2) * uVar30 * 4,
                            *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40),uVar22);
              uVar30 = uVar30 + 1;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
        }
        uStack_120 = 0x1451341eb;
        (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))
                  (*(longlong **)(param_1 + 0x118),pvVar18);
        return;
      }
      uVar38 = *(uint *)(param_1 + 200);
      uVar30 = (ulonglong)uVar38;
      fVar40 = *(float *)(param_1 + 0x5c) * 0.0055555557;
      fVar41 = *(float *)(param_1 + 0x20) * 0.0055555557;
      local_c0 = uVar38;
      if (((*(longlong *)(param_1 + 0x98) == 0) && (*(float *)(param_1 + 0x30) == 1.0)) &&
         (*(float *)(param_1 + 0x34) == 1.0)) {
        local_f0._0_4_ = *(float *)(param_1 + 0x44);
        local_f8[0] = *(float *)(param_1 + 0x80);
        uStack_120 = 0x1451332d8;
        local_e8[0] = uVar12;
        FUN_1453baf30(*param_2,*param_3,*(undefined4 *)(param_1 + 0x7c),
                      *(undefined4 *)(param_1 + 0x40));
        puVar28 = auStack_118;
        if (1 < uVar38) {
          lVar27 = 1;
          uVar30 = (ulonglong)(uVar38 - 1);
          do {
            local_f0._0_4_ = fVar41 * *(float *)(param_1 + 0x44);
            local_f8[0] = fVar40 * *(float *)(param_1 + 0x80);
            uStack_120 = 0x145133346;
            local_e8[0] = uVar12;
            FUN_1453baf30(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar27 * 4,
                          *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar27 * 4,
                          *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
            lVar27 = lVar27 + 1;
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
          uVar30 = (ulonglong)local_c0;
          puVar28 = auStack_118;
        }
      }
      else {
        uVar29 = uVar38 + 7 >> 3;
        uVar12 = uVar38 * uVar29 * 0x20;
        uVar25 = (ulonglong)uVar12;
        uVar17 = (ulonglong)uVar12 + 0xf;
        if (uVar17 <= uVar25) {
          uVar17 = 0xffffffffffffff0;
        }
        uStack_120 = 0x14513339d;
        uVar34 = *(ulonglong *)(param_1 + 0xd0);
        lVar27 = -(uVar17 & 0xfffffffffffffff0);
        uVar4 = *(undefined4 *)(param_1 + 0x34);
        uVar5 = *(undefined4 *)(param_1 + 0x30);
        local_d0 = (float *)((longlong)&local_d8 + lVar27);
        local_d8 = uVar34;
        if (*(longlong *)(param_1 + 0x98) == 0) {
          uVar17 = uVar25 + 0xf;
          if (uVar17 <= uVar25) {
            uVar17 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x1451333df;
          lVar19 = -(uVar17 & 0xfffffffffffffff0);
          lVar10 = (longlong)&local_d8 + lVar19 + lVar27;
          *(longlong *)((longlong)local_f8 + lVar19 + lVar27) = lVar10;
          *(undefined8 *)(auStack_118 + lVar19 + lVar27 + -8) = 0x1451333f7;
          FUN_145134c20(uVar5,uVar4,uVar38);
          uVar12 = 0;
          puVar28 = auStack_118 + lVar19 + lVar27;
          if (uVar38 != 0) {
            uVar36 = 0;
            do {
              local_d8 = uVar30;
              uVar25 = (ulonglong)(uVar12 * uVar29 * 8);
              uVar17 = uVar36;
              do {
                iVar33 = 2;
                fVar39 = 0.0;
                uVar23 = uVar36;
                uVar35 = uVar36;
                if (uVar38 < 4) {
LAB_1451334e9:
                  pfVar32 = (float *)((uVar35 + uVar25) * 4 + uVar34);
                  do {
                    iVar33 = (int)uVar23;
                    uVar22 = iVar33 + 1;
                    uVar23 = (ulonglong)uVar22;
                    fVar6 = *pfVar32;
                    pfVar32 = pfVar32 + 1;
                    fVar39 = fVar39 + *(float *)(lVar10 + (iVar33 * uVar29 * 8 + uVar17) * 4) *
                                      fVar6;
                  } while (uVar22 < uVar38);
                }
                else {
                  pfVar32 = (float *)(uVar34 + 8 + uVar25 * 4);
                  do {
                    iVar21 = (int)uVar23;
                    uVar22 = iVar21 + 4;
                    uVar23 = (ulonglong)uVar22;
                    iVar13 = iVar33 + -1;
                    pfVar1 = pfVar32 + -2;
                    pfVar2 = pfVar32 + -1;
                    iVar14 = iVar33 * uVar29;
                    iVar15 = iVar33 + 1;
                    fVar6 = *pfVar32;
                    iVar33 = iVar33 + 4;
                    pfVar3 = pfVar32 + 1;
                    pfVar32 = pfVar32 + 4;
                    fVar39 = *(float *)(lVar10 + (iVar21 * uVar29 * 8 + uVar17) * 4) * *pfVar1 +
                             fVar39 + *(float *)(lVar10 + (iVar13 * uVar29 * 8 + uVar17) * 4) *
                                      *pfVar2 +
                             *(float *)(lVar10 + ((uint)(iVar14 * 8) + uVar17) * 4) * fVar6 +
                             *(float *)(lVar10 + (iVar15 * uVar29 * 8 + uVar17) * 4) * *pfVar3;
                  } while (uVar22 < uVar38 - 3);
                  uVar35 = (ulonglong)((uVar38 - 4 >> 2) + 1) << 2;
                  if (uVar22 < uVar38) goto LAB_1451334e9;
                }
                local_d0[uVar25 + uVar17] = fVar39;
                uVar17 = uVar17 + 1;
                local_d8 = local_d8 - 1;
              } while (local_d8 != 0);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar38);
            uVar36 = local_c8 & 0xffffffff;
            puVar28 = auStack_118 + lVar19 + lVar27;
          }
        }
        else {
          *(float **)((longlong)local_f8 + lVar27) = local_d0;
          *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x145133581;
          FUN_145134c20(uVar5,uVar4,uVar38,uVar34);
          plVar16 = *(longlong **)(param_1 + 0x118);
          _Size = uVar30 * uVar36 * 4;
          pcVar11 = *(code **)(*plVar16 + 8);
          *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x1451335a9;
          pvVar18 = (void *)(*pcVar11)(plVar16,_Size,
                                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                                       ,0x475);
          pfVar32 = local_d0;
          if (pvVar18 == (void *)0x0) {
            uVar12 = uVar38 * uVar29 * 8;
            puVar28 = auStack_118 + lVar27;
            if (uVar12 != 0) {
              *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x14513371a;
              memset(pfVar32,0,(ulonglong)uVar12 << 2);
              puVar28 = auStack_118 + lVar27;
            }
          }
          else {
            pvVar20 = (void *)*param_3;
            *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x1451335c8;
            memcpy(pvVar18,pvVar20,_Size);
            pvVar20 = (void *)*param_3;
            *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x1451335d6;
            memset(pvVar20,0,_Size);
            uVar17 = local_d8;
            lVar10 = param_3[1];
            *(undefined1 *)(param_3 + 1) = 0;
            *(ulonglong *)((longlong)local_e8 + lVar27) = local_d8;
            *(ulonglong *)((longlong)&local_f0 + lVar27) = uVar17;
            plVar16 = local_b8;
            local_a0 = uVar38 & 0xff | 0x200;
            *(uint *)(param_3 + 1) = local_a0;
            *(ushort *)(param_3 + 2) = uVar8;
            *(ushort *)((longlong)param_3 + 0x12) = uVar8;
            local_a8 = pvVar18;
            *(undefined4 *)((longlong)local_f8 + lVar27) = 0x3f800000;
            local_9c = 0x2b;
            pcVar11 = *(code **)(*plVar16 + 8);
            local_98 = uVar8;
            local_96 = uVar8;
            *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x145133643;
            (*pcVar11)(plVar16,&local_a8,param_3,0x3f800000);
            *(undefined1 *)(param_3 + 1) = 0;
            *(ushort *)(param_3 + 2) = uVar8;
            *(int *)(param_3 + 1) = (int)lVar10;
            *(ushort *)((longlong)param_3 + 0x12) = uVar8;
            plVar16 = *(longlong **)(param_1 + 0x118);
            pcVar11 = *(code **)(*plVar16 + 0x10);
            *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x14513366e;
            (*pcVar11)(plVar16,pvVar18);
            uVar12 = (uVar38 >> 1) + 1;
            uVar26 = 0;
            puVar28 = auStack_118 + lVar27;
            if (uVar38 != uVar12) {
              local_d8 = 0;
              do {
                lVar10 = *(longlong *)(param_1 + 0x98);
                if (*(int *)(local_d8 + lVar10) != 0) {
                  uVar8 = *(ushort *)(param_3 + 2);
                  lVar19 = *param_3;
                  *(undefined8 *)(auStack_118 + lVar27 + -8) = 0x1451336d6;
                  FUN_1453be2f0(lVar10 + (ulonglong)uVar26 * 0x18,
                                lVar19 + (ulonglong)(uVar26 + uVar12) * (ulonglong)uVar8 * 4,uVar22)
                  ;
                }
                local_d8 = local_d8 + 0x18;
                uVar26 = uVar26 + 1;
                puVar28 = auStack_118 + lVar27;
              } while (uVar26 < uVar38 - uVar12);
            }
          }
        }
        uVar4 = *(undefined4 *)(param_1 + 0x7c);
        uVar5 = *(undefined4 *)(param_1 + 0x40);
        lVar27 = *param_3;
        fVar39 = *local_d0;
        fVar6 = *(float *)(param_1 + 0x44);
        lVar10 = *param_2;
        fVar7 = *(float *)(param_1 + 0x80);
        *(int *)(puVar28 + 0x30) = (int)uVar36;
        *(float *)(puVar28 + 0x28) = fVar39 * fVar6;
        *(float *)(puVar28 + 0x20) = fVar39 * fVar7;
        *(undefined8 *)(puVar28 + -8) = 0x14513376e;
        FUN_1453baf30(lVar10,lVar27,uVar4,uVar5);
        plVar16 = local_b8;
        local_d8 = 1;
        local_res10 = 1;
        pfVar32 = local_d0;
        if (1 < uVar38) {
          do {
            fVar39 = pfVar32[local_res10 * uVar29 * 8] * *(float *)(param_1 + 0x44);
            uVar37 = (undefined2)uVar36;
            if ((fVar39 != 0.0) &&
               (pfVar32[local_res10 * uVar29 * 8] * *(float *)(param_1 + 0x80) != 0.0)) {
              uVar8 = *(ushort *)(param_3 + 2);
              lVar27 = *plVar16;
              lVar10 = *param_2;
              lVar19 = *param_3;
              *(undefined2 *)(puVar28 + 0x28) = uVar37;
              *(float *)(puVar28 + 0x20) = fVar39;
              pcVar11 = *(code **)(lVar27 + 0x18);
              *(undefined8 *)(puVar28 + -8) = 0x1451337e5;
              (*pcVar11)(plVar16,lVar19 + (ulonglong)uVar8 * (ulonglong)local_res10 * 4,lVar10);
              pfVar32 = local_d0;
            }
            local_res10 = local_res10 + 1;
          } while (local_res10 < uVar38);
          uVar17 = 1;
          local_c8 = 1;
          lVar27 = 1;
          while( true ) {
            uVar25 = local_c8;
            uVar4 = *(undefined4 *)(param_1 + 0x40);
            fVar39 = *(float *)(param_1 + 0x44);
            *(int *)(puVar28 + 0x30) = (int)uVar36;
            fVar6 = *(float *)(param_1 + 0x80);
            lVar19 = (int)uVar17 * uVar29 * 8 + uVar25;
            uVar8 = *(ushort *)(param_3 + 2);
            fVar7 = pfVar32[lVar19];
            lVar10 = *param_3;
            local_b0 = lVar27;
            *(float *)(puVar28 + 0x28) = fVar41 * fVar39 * pfVar32[lVar19];
            uVar5 = *(undefined4 *)(param_1 + 0x7c);
            *(float *)(puVar28 + 0x20) = fVar40 * fVar6 * fVar7;
            uVar9 = *(ushort *)(param_2 + 2);
            lVar19 = *param_2;
            *(undefined8 *)(puVar28 + -8) = 0x14513387b;
            FUN_1453baf30(lVar19 + (ulonglong)uVar9 * lVar27 * 4,
                          lVar10 + (ulonglong)uVar8 * lVar27 * 4,uVar5,uVar4);
            plVar16 = local_b8;
            uVar12 = 0;
            uVar38 = 0;
            uVar17 = local_d8;
            uVar25 = local_c8;
            pfVar32 = local_d0;
            if ((int)local_d8 != 0) {
              do {
                fVar39 = fVar41 * *(float *)(param_1 + 0x44) * pfVar32[uVar12 * uVar29 * 8 + uVar25]
                ;
                if ((fVar39 != 0.0) &&
                   (fVar40 * *(float *)(param_1 + 0x80) * pfVar32[uVar12 * uVar29 * 8 + uVar25] !=
                    0.0)) {
                  lVar27 = *param_2;
                  lVar24 = (ulonglong)*(ushort *)(param_2 + 2) * local_b0;
                  lVar10 = *plVar16;
                  *(undefined2 *)(puVar28 + 0x28) = uVar37;
                  *(float *)(puVar28 + 0x20) = fVar39;
                  uVar8 = *(ushort *)(param_3 + 2);
                  lVar19 = *param_3;
                  pcVar11 = *(code **)(lVar10 + 0x18);
                  *(undefined8 *)(puVar28 + -8) = 0x145133912;
                  (*pcVar11)(plVar16,lVar19 + (ulonglong)uVar8 * (ulonglong)uVar12 * 4,
                             lVar27 + lVar24 * 4);
                  uVar17 = local_d8;
                  uVar25 = local_c8;
                  pfVar32 = local_d0;
                }
                uVar12 = uVar12 + 1;
                uVar38 = (uint)uVar17;
              } while (uVar12 < uVar38);
              uVar30 = (ulonglong)local_c0;
            }
            uVar38 = uVar38 + 1;
            uVar25 = local_c8;
            pfVar32 = local_d0;
            uVar12 = uVar38;
            if ((uint)uVar30 <= uVar38) break;
            do {
              plVar16 = local_b8;
              fVar39 = fVar41 * *(float *)(param_1 + 0x44) * pfVar32[uVar12 * uVar29 * 8 + uVar25];
              if ((fVar39 != 0.0) &&
                 (fVar40 * *(float *)(param_1 + 0x80) * pfVar32[uVar12 * uVar29 * 8 + uVar25] != 0.0
                 )) {
                lVar27 = *param_2;
                lVar24 = (ulonglong)*(ushort *)(param_2 + 2) * local_b0;
                lVar10 = *local_b8;
                *(undefined2 *)(puVar28 + 0x28) = uVar37;
                *(float *)(puVar28 + 0x20) = fVar39;
                uVar8 = *(ushort *)(param_3 + 2);
                lVar19 = *param_3;
                pcVar11 = *(code **)(lVar10 + 0x18);
                *(undefined8 *)(puVar28 + -8) = 0x1451339c6;
                (*pcVar11)(plVar16,lVar19 + (ulonglong)uVar8 * (ulonglong)uVar12 * 4,
                           lVar27 + lVar24 * 4);
                uVar25 = local_c8;
                pfVar32 = local_d0;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < (uint)uVar30);
            uVar17 = (ulonglong)uVar38;
            lVar27 = local_b0 + 1;
            local_c8 = uVar25 + 1;
            local_d8 = uVar17;
          }
        }
      }
      local_res20 = (float *)(param_1 + 0x7c);
      if ((uint)*(byte *)(param_2 + 1) <= (uint)uVar30) {
        return;
      }
      do {
        fVar40 = *(float *)(param_1 + 0x40);
        fVar41 = *local_res20;
        lVar27 = *param_2 + *(ushort *)(param_2 + 2) * uVar30 * 4;
        if (fVar40 == fVar41) {
          *(undefined8 *)(puVar28 + -8) = 0x145133a48;
          FUN_145134640(lVar27,fVar41,uVar36);
        }
        else {
          *(undefined8 *)(puVar28 + -8) = 0x145133a52;
          FUN_1451344f0(lVar27,fVar41,fVar40,uVar36);
        }
        uVar38 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar38;
      } while (uVar38 < *(byte *)(param_2 + 1));
      return;
    }
    fVar40 = 1.0;
    fVar41 = 1.0;
    if ((*(uint *)(param_3 + 1) & 0xf00) == 0x100) {
      fVar40 = *(float *)(param_1 + 0x6c);
      fVar41 = *(float *)(param_1 + 0x30);
    }
  }
  uVar29 = *(uint *)(param_3 + 1);
  uVar38 = uVar38 - (uVar38 >> 0xf & 0x1ffe0001) & 0xff;
  if ((uVar29 & 0xff) < uVar38) {
    uVar38 = uVar29 - (uVar29 >> 0xf & 1) & 0xff;
  }
  if (uVar38 != 0) {
    lVar27 = 0;
    uVar36 = (ulonglong)uVar38;
    do {
      local_f0._0_4_ = fVar41 * *(float *)(param_1 + 0x44);
      local_f8[0] = fVar40 * *(float *)(param_1 + 0x80);
      uStack_120 = 0x1451342b5;
      local_e8[0] = uVar22;
      FUN_1453baf30(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar27 * 4,
                    *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar27 * 4,
                    *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
      lVar27 = lVar27 + 1;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  lVar27 = 0;
  if ((*(uint *)(param_1 + 0xac) & 0x8000) != 0) {
    local_f8[0] = *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x78);
    local_f0._0_4_ = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x3c);
    if ((*(uint *)(param_2 + 1) >> 0xf & 1) != 0) {
      lVar27 = *param_2 +
               (ulonglong)((*(uint *)(param_2 + 1) & 0xff) - 1) *
               (ulonglong)*(ushort *)(param_2 + 2) * 4;
    }
    uStack_120 = 0x145134329;
    local_e8[0] = uVar12;
    FUN_1453baf30(lVar27,*param_3,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 145134360 FUN_145134360 body=341 status=ok
// SIG undefined FUN_145134360(void)

void FUN_145134360(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  int param_5,uint param_6)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1453be2f0(*(longlong *)(param_1 + 0x98) + (ulonglong)(uint)(param_5 * 2) * 0x18,*param_3,
                  param_4);
    FUN_1453be2f0(*(longlong *)(param_1 + 0x98) + (ulonglong)(param_5 * 2 + 1) * 0x18,
                  *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4);
  }
  FUN_1453caa80(*param_3,*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,param_4,
                *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x20));
  FUN_1453baf30(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)param_6 * 4,*param_3,
                *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x40),
                *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x80),
                *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x44),param_4);
  FUN_1453baf30(*param_2 + (ulonglong)(param_6 + 1) * (ulonglong)*(ushort *)(param_2 + 2) * 4,
                *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * 4,*(undefined4 *)(param_1 + 0x7c),
                *(undefined4 *)(param_1 + 0x40),
                *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x80),
                *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x44),param_4);
  return;
}



// FUNCTION 1451344c0 FUN_1451344c0 body=43 status=ok
// SIG undefined FUN_1451344c0(void)

undefined8 * FUN_1451344c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1451344f0 FUN_1451344f0 body=334 status=ok
// SIG undefined FUN_1451344f0(void)

void FUN_1451344f0(float *param_1,float param_2,float param_3,uint param_4)

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



// FUNCTION 145134640 FUN_145134640 body=309 status=ok
// SIG undefined FUN_145134640(void)

void FUN_145134640(float *param_1,float param_2,ulonglong param_3)

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



// FUNCTION 145134780 FUN_145134780 body=369 status=ok
// SIG undefined FUN_145134780(void)

undefined8 * FUN_145134780(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x120,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFX.cpp"
                      ,0x25);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0x43340000;
    *puVar1 = &PTR_FUN_149c33d30;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0xac) = 0;
    *(uint *)((longlong)puVar1 + 0xac) = *(uint *)((longlong)puVar1 + 0xac) & 0xff;
    *(undefined1 *)(puVar1 + 0x16) = 0;
    *(uint *)(puVar1 + 0x16) = *(uint *)(puVar1 + 0x16) & 0xff;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x43340000;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    puVar1[7] = 0x3f800000;
    *(undefined4 *)(puVar1 + 8) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0x3e800000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined2 *)(puVar1 + 10) = 2;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x43340000;
    puVar1[0xc] = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd) = 0x43340000;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xe) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x74) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    puVar1[0x10] = 0x3e800000;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x8c) = 2;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xf4) = 0;
    puVar1[0x1f] = 0x2b;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x21) = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145134910 FUN_145134910 body=778 status=ok
// SIG undefined FUN_145134910(void)

void FUN_145134910(float param_1,float param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined *_Dst;
  float fVar19;
  
  if (param_3 == 4) {
    puVar16 = &DAT_149c34030;
  }
  else if (param_3 == 9) {
    puVar16 = &DAT_149c34070;
  }
  else if (param_3 == 0x10) {
    puVar16 = &DAT_149c341c0;
  }
  else {
    puVar16 = (undefined *)0x0;
    if (param_3 == 0) {
      return;
    }
  }
  uVar15 = 0;
  do {
    uVar12 = 0;
    _Dst = (undefined *)((ulonglong)((param_3 + 7 & 0xfffffff8) * uVar15) * 4 + param_4);
    if (param_3 < 4) {
LAB_1451349e8:
      if (param_3 != 0) {
        uVar13 = uVar12;
        if (3 < param_3) {
          uVar13 = (ulonglong)((param_3 - 4 >> 2) + 1) << 2;
          puVar11 = (undefined4 *)(_Dst + 8);
          do {
            uVar14 = param_3 * uVar15 + (int)uVar12;
            uVar8 = (int)uVar12 + 4;
            uVar12 = (ulonglong)uVar8;
            puVar11[-2] = *(undefined4 *)(puVar16 + (ulonglong)uVar14 * 4);
            puVar11[-1] = *(undefined4 *)(puVar16 + (ulonglong)(uVar14 + 1) * 4);
            *puVar11 = *(undefined4 *)(puVar16 + (ulonglong)(uVar14 + 2) * 4);
            puVar11[1] = *(undefined4 *)(puVar16 + (ulonglong)(uVar14 + 3) * 4);
            puVar11 = puVar11 + 4;
          } while (uVar8 < param_3 - 3);
          if (param_3 <= uVar8) goto LAB_145134a62;
        }
        puVar11 = (undefined4 *)(_Dst + uVar13 * 4);
        do {
          iVar4 = (int)uVar12;
          uVar14 = iVar4 + 1;
          uVar12 = (ulonglong)uVar14;
          *puVar11 = *(undefined4 *)(puVar16 + (ulonglong)(param_3 * uVar15 + iVar4) * 4);
          puVar11 = puVar11 + 1;
        } while (uVar14 < param_3);
      }
    }
    else {
      if ((_Dst <= puVar16 + (ulonglong)(uVar15 * param_3 + (param_3 - 1)) * 4) &&
         (puVar16 + (ulonglong)(uVar15 * param_3) * 4 <= _Dst + (ulonglong)(param_3 - 1) * 4))
      goto LAB_1451349e8;
      memcpy(_Dst,puVar16 + (ulonglong)(uVar15 * param_3) * 4,(ulonglong)param_3 << 2);
      do {
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
      } while (uVar14 < param_3);
    }
LAB_145134a62:
    uVar15 = uVar15 + 1;
  } while (uVar15 < param_3);
  if (9 < param_3) {
    dVar3 = log10((double)(param_1 / param_2));
    uVar15 = 9;
    fVar19 = 1.0 - (float)(ABS(dVar3) * 0.20833300054073334);
    do {
      uVar12 = 0;
      lVar18 = (ulonglong)((param_3 + 7 & 0xfffffff8) * uVar15) * 4 + param_4;
      if (0xf < param_3) {
        uVar14 = 8;
        do {
          pfVar9 = (float *)(lVar18 + uVar12 * 4);
          fVar5 = pfVar9[1];
          fVar6 = pfVar9[2];
          fVar7 = pfVar9[3];
          pfVar2 = (float *)(lVar18 + uVar12 * 4);
          *pfVar2 = *pfVar9 * fVar19;
          pfVar2[1] = fVar5 * fVar19;
          pfVar2[2] = fVar6 * fVar19;
          pfVar2[3] = fVar7 * fVar19;
          uVar10 = (int)uVar12 + 0x10;
          uVar12 = (ulonglong)uVar10;
          pfVar9 = (float *)(lVar18 + (ulonglong)(uVar14 - 4) * 4);
          fVar5 = pfVar9[1];
          fVar6 = pfVar9[2];
          fVar7 = pfVar9[3];
          pfVar2 = (float *)(lVar18 + (ulonglong)(uVar14 - 4) * 4);
          *pfVar2 = fVar19 * *pfVar9;
          pfVar2[1] = fVar19 * fVar5;
          pfVar2[2] = fVar19 * fVar6;
          pfVar2[3] = fVar19 * fVar7;
          pfVar9 = (float *)(lVar18 + (ulonglong)uVar14 * 4);
          fVar5 = pfVar9[1];
          fVar6 = pfVar9[2];
          fVar7 = pfVar9[3];
          pfVar2 = (float *)(lVar18 + (ulonglong)uVar14 * 4);
          *pfVar2 = *pfVar9 * fVar19;
          pfVar2[1] = fVar5 * fVar19;
          pfVar2[2] = fVar6 * fVar19;
          pfVar2[3] = fVar7 * fVar19;
          uVar8 = uVar14 + 4;
          uVar14 = uVar14 + 0x10;
          pfVar9 = (float *)(lVar18 + (ulonglong)uVar8 * 4);
          fVar5 = pfVar9[1];
          fVar6 = pfVar9[2];
          fVar7 = pfVar9[3];
          pfVar2 = (float *)(lVar18 + (ulonglong)uVar8 * 4);
          *pfVar2 = *pfVar9 * fVar19;
          pfVar2[1] = fVar5 * fVar19;
          pfVar2[2] = fVar6 * fVar19;
          pfVar2[3] = fVar7 * fVar19;
        } while (uVar10 < (param_3 & 0xfffffff0));
      }
      uVar14 = (uint)uVar12;
      if (uVar14 < param_3) {
        uVar13 = uVar12;
        if (3 < param_3 - uVar14) {
          lVar1 = uVar12 + 2;
          uVar8 = ((param_3 - uVar14) - 4 >> 2) + 1;
          uVar17 = (ulonglong)uVar8;
          uVar14 = uVar14 + uVar8 * 4;
          uVar13 = (ulonglong)uVar14;
          uVar12 = uVar12 + (ulonglong)uVar8 * 4;
          pfVar9 = (float *)(lVar18 + lVar1 * 4);
          do {
            pfVar9[-2] = fVar19 * pfVar9[-2];
            pfVar9[-1] = fVar19 * pfVar9[-1];
            *pfVar9 = fVar19 * *pfVar9;
            pfVar9[1] = fVar19 * pfVar9[1];
            uVar17 = uVar17 - 1;
            pfVar9 = pfVar9 + 4;
          } while (uVar17 != 0);
          if (param_3 <= uVar14) goto LAB_145134bf3;
        }
        uVar13 = (ulonglong)(param_3 - (int)uVar13);
        pfVar9 = (float *)(lVar18 + uVar12 * 4);
        do {
          *pfVar9 = fVar19 * *pfVar9;
          uVar13 = uVar13 - 1;
          pfVar9 = pfVar9 + 1;
        } while (uVar13 != 0);
      }
LAB_145134bf3:
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_3);
  }
  return;
}



// FUNCTION 145134c20 FUN_145134c20 body=589 status=ok
// SIG undefined FUN_145134c20(void)

void FUN_145134c20(float param_1,float param_2,uint param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar5 = param_3 + 7;
  uVar7 = 0;
  do {
    uVar4 = 0;
    lVar1 = param_5 + (ulonglong)((uVar5 >> 3) * uVar7 * 8) * 4;
    if (param_3 < 4) {
      if (param_3 != 0) {
        lVar11 = 0;
        goto LAB_145134d2c;
      }
    }
    else {
      uVar8 = (ulonglong)uVar7;
      iVar6 = 2;
      uVar10 = uVar5 & 0xfffffff8;
      lVar11 = (ulonglong)((param_3 - 4 >> 2) + 1) << 2;
      pfVar9 = (float *)(lVar1 + 8);
      uVar4 = 0;
      do {
        iVar2 = (uVar5 >> 3) * uVar4;
        uVar4 = uVar4 + 4;
        pfVar9[-2] = param_1 * *(float *)(param_4 + ((uint)(iVar2 * 8) + uVar8) * 4);
        uVar3 = uVar10 * iVar6;
        pfVar9[-1] = param_1 * *(float *)(param_4 + ((iVar6 + -1) * uVar10 + uVar8) * 4);
        iVar2 = iVar6 + 1;
        iVar6 = iVar6 + 4;
        *pfVar9 = param_1 * *(float *)(param_4 + (uVar3 + uVar8) * 4);
        pfVar9[1] = param_1 * *(float *)(param_4 + (iVar2 * uVar10 + uVar8) * 4);
        pfVar9 = pfVar9 + 4;
      } while (uVar4 < param_3 - 3);
      if (uVar4 < param_3) {
LAB_145134d2c:
        pfVar9 = (float *)(lVar1 + lVar11 * 4);
        do {
          uVar10 = (uVar5 & 0xfffffff8) * uVar4;
          uVar4 = uVar4 + 1;
          *pfVar9 = param_1 * *(float *)(param_4 + ((ulonglong)uVar10 + (ulonglong)uVar7) * 4);
          pfVar9 = pfVar9 + 1;
        } while (uVar4 < param_3);
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < (param_3 >> 1) + 1);
  uVar5 = uVar5 & 0xfffffff8;
  do {
    uVar4 = 0;
    lVar1 = param_5 + (ulonglong)(uVar5 * uVar7) * 4;
    if (param_3 < 4) {
      if (param_3 != 0) {
        lVar11 = 0;
        goto LAB_145134e1e;
      }
    }
    else {
      uVar8 = (ulonglong)uVar7;
      iVar6 = 2;
      lVar11 = (ulonglong)((param_3 - 4 >> 2) + 1) << 2;
      pfVar9 = (float *)(lVar1 + 8);
      do {
        uVar10 = uVar5 * uVar4;
        uVar4 = uVar4 + 4;
        pfVar9[-2] = param_2 * *(float *)(param_4 + (uVar10 + uVar8) * 4);
        uVar10 = uVar5 * iVar6;
        pfVar9[-1] = param_2 * *(float *)(param_4 + ((iVar6 + -1) * uVar5 + uVar8) * 4);
        iVar2 = iVar6 + 1;
        iVar6 = iVar6 + 4;
        *pfVar9 = param_2 * *(float *)(param_4 + (uVar10 + uVar8) * 4);
        pfVar9[1] = param_2 * *(float *)(param_4 + (iVar2 * uVar5 + uVar8) * 4);
        pfVar9 = pfVar9 + 4;
      } while (uVar4 < param_3 - 3);
      if (uVar4 < param_3) {
LAB_145134e1e:
        pfVar9 = (float *)(lVar1 + lVar11 * 4);
        do {
          uVar10 = uVar5 * uVar4;
          uVar4 = uVar4 + 1;
          *pfVar9 = param_2 * *(float *)(param_4 + ((ulonglong)uVar10 + (ulonglong)uVar7) * 4);
          pfVar9 = pfVar9 + 1;
        } while (uVar4 < param_3);
      }
    }
    uVar7 = uVar7 + 1;
    if (param_3 <= uVar7) {
      return;
    }
  } while( true );
}



// FUNCTION 145134e70 FUN_145134e70 body=189 status=ok
// SIG undefined FUN_145134e70(void)

undefined8 * FUN_145134e70(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x48,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFXParams.cpp"
                     );
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 2) = 0x43340000;
    *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x43340000;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x3f800000;
    puVar2[5] = 0x3f800000;
    *(undefined4 *)(puVar2 + 6) = 0x3f800000;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0x3e800000;
    *(undefined2 *)(puVar2 + 8) = 2;
    *puVar2 = &PTR_FUN_149c34640;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145134f50 FUN_145134f50 body=56 status=ok
// SIG undefined FUN_145134f50(void)

undefined8 FUN_145134f50(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145134f90 FUN_145134f90 body=319 status=ok
// SIG undefined FUN_145134f90(void)

undefined8 FUN_145134f90(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  fVar1 = powf(10.0,(float)param_2[3] * 0.05);
  *(float *)(param_1 + 0x14) = fVar1;
  fVar1 = powf(10.0,(float)param_2[4] * 0.05);
  *(float *)(param_1 + 0x18) = fVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  fVar1 = powf(10.0,(float)param_2[6] * 0.05);
  *(float *)(param_1 + 0x20) = fVar1;
  fVar1 = powf(10.0,(float)param_2[7] * 0.05);
  *(float *)(param_1 + 0x24) = fVar1;
  fVar1 = powf(10.0,(float)param_2[8] * 0.05);
  *(float *)(param_1 + 0x28) = fVar1;
  fVar1 = powf(10.0,(float)param_2[9] * 0.05);
  *(float *)(param_1 + 0x2c) = fVar1;
  fVar1 = powf(10.0,(float)param_2[10] * 0.05);
  *(float *)(param_1 + 0x30) = fVar1;
  fVar1 = powf(10.0,(float)param_2[0xb] * 0.05);
  *(float *)(param_1 + 0x34) = fVar1;
  *(undefined4 *)(param_1 + 0x38) = param_2[0xc];
  fVar1 = powf(10.0,(float)param_2[0xd] * 0.05);
  *(float *)(param_1 + 0x3c) = fVar1;
  *(ushort *)(param_1 + 0x40) = (ushort)*(byte *)(param_2 + 0xe);
  return 1;
}



// FUNCTION 1451350d0 FUN_1451350d0 body=783 status=ok
// SIG undefined FUN_1451350d0(void)

undefined4 FUN_1451350d0(longlong param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 8) = *param_3;
    return 1;
  case 1:
    *(float *)(param_1 + 0xc) = *param_3;
    return 1;
  case 2:
    fVar1 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 180.0 <= fVar1)) {
      fVar2 = 180.0;
    }
    *(float *)(param_1 + 0x10) = fVar2;
    return 1;
  case 10:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x14) = fVar1;
    return 1;
  case 0xb:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x18) = fVar1;
    return 1;
  case 0x14:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x20) = fVar1;
    return 1;
  case 0x15:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x24) = fVar1;
    return 1;
  case 0x16:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x28) = fVar1;
    return 1;
  case 0x17:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x2c) = fVar1;
    return 1;
  case 0x1e:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
      fVar2 = 24.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x30) = fVar1;
    return 1;
  case 0x1f:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
      fVar2 = 24.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x34) = fVar1;
    return 1;
  case 0x20:
    *(float *)(param_1 + 0x38) = *param_3;
    return 1;
  case 0x21:
    fVar1 = *param_3;
    fVar2 = 0.0;
    if ((0.0 <= fVar1) && (fVar2 = fVar1, 180.0 <= fVar1)) {
      fVar2 = 180.0;
    }
    *(float *)(param_1 + 0x1c) = fVar2;
    return 1;
  case 0x22:
    fVar1 = *param_3;
    fVar2 = -96.3;
    if ((-96.3 <= fVar1) && (fVar2 = fVar1, 24.0 <= fVar1)) {
      fVar2 = 24.0;
    }
    fVar1 = powf(10.0,fVar2 * 0.05);
    *(float *)(param_1 + 0x3c) = fVar1;
  }
  return 1;
}



// FUNCTION 145135440 FUN_145135440 body=40 status=ok
// SIG undefined FUN_145135440(void)

void FUN_145135440(longlong param_1,undefined8 *param_2)

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
  param_2[6] = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 145135470 FUN_145135470 body=43 status=ok
// SIG undefined FUN_145135470(void)

undefined8 * FUN_145135470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1451354a0 FUN_1451354a0 body=130 status=ok
// SIG undefined FUN_1451354a0(void)

undefined8 * FUN_1451354a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x48,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Effects\\AkConvolutionReverb\\AkConvolutionReverbFXParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0x43340000;
    *puVar1 = &PTR_FUN_149c34640;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x43340000;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
    puVar1[5] = 0x3f800000;
    *(undefined4 *)(puVar1 + 6) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0x3e800000;
    *(undefined2 *)(puVar1 + 8) = 2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145135530 FUN_145135530 body=3 status=ok
// SIG undefined FUN_145135530(void)

void FUN_145135530(void)

{
  return;
}



// FUNCTION 145135540 FUN_145135540 body=235 status=ok
// SIG undefined FUN_145135540(void)

undefined8 FUN_145135540(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar4 = *(uint *)(param_2 + 0x10);
  if (*(uint *)((longlong)param_1 + 0x14) < uVar4) {
    plVar1 = (longlong *)*param_1;
    if (param_1[1] == 0) {
      lVar2 = (**(code **)(*plVar1 + 8))
                        (plVar1,(ulonglong)uVar4 << 2,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                         ,0xcc);
      if (lVar2 != 0) {
        if ((param_1[1] != 0) && (param_1[1] != lVar2)) {
          (**(code **)(*(longlong *)*param_1 + 0x10))();
        }
        goto LAB_1451355d8;
      }
    }
    else {
      lVar2 = (**(code **)(*plVar1 + 0x20))
                        (plVar1,param_1[1],(ulonglong)uVar4 << 2,
                         "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                         ,0xcd);
      if (lVar2 != 0) {
LAB_1451355d8:
        param_1[1] = lVar2;
        *(uint *)((longlong)param_1 + 0x14) = uVar4;
        goto LAB_1451355e0;
      }
    }
    uVar3 = 2;
  }
  else {
LAB_1451355e0:
    *(uint *)(param_1 + 2) = uVar4;
    if (*(int *)(param_2 + 0x10) != 0) {
      do {
        lVar2 = uVar5 * 4;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined4 *)(lVar2 + param_1[1]) = *(undefined4 *)(lVar2 + *(longlong *)(param_2 + 8));
      } while (uVar4 < *(uint *)(param_2 + 0x10));
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 145135640 FUN_145135640 body=43 status=ok
// SIG undefined FUN_145135640(void)

undefined8 * FUN_145135640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c346f0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145135670 FUN_145135670 body=43 status=ok
// SIG undefined FUN_145135670(void)

undefined8 * FUN_145135670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c346f8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1451356a0 FUN_1451356a0 body=749 status=ok
// SIG undefined FUN_1451356a0(void)

undefined8
FUN_1451356a0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined8 local_78;
  undefined8 uStack_70;
  
  plVar6 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar5 = (**(code **)(*plVar6 + 0xd8))(plVar6);
  iVar10 = 0;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(longlong **)(param_1 + 8) = param_3;
  uVar7 = (**(code **)(*param_3 + 8))(param_3);
  lVar8 = FUN_145138250(param_2,uVar7);
  *(longlong *)(param_1 + 0x18) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(lVar8 + 0x98);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar8 + 0x90);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    uVar7 = *(undefined8 *)(lVar8 + 0xa8);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar8 + 0xa0);
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    uVar7 = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar8 + 0xb0);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    uVar5 = *(undefined4 *)(lVar8 + 0xc4);
    uVar1 = *(undefined4 *)(lVar8 + 200);
    uVar2 = *(undefined4 *)(lVar8 + 0xcc);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar8 + 0xc0);
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar8 + 0xd0);
    if (0 < *(int *)(lVar8 + 0xe8)) {
      *param_5 = 48000;
      *(undefined4 *)(param_1 + 0x20) = 48000;
      *(undefined2 *)(param_1 + 0x9a) = 0;
      *(undefined1 *)(param_1 + 0x86) = 0;
      FUN_145136310(param_1);
      if (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0xe8)) {
        do {
          plVar6 = *(longlong **)(param_1 + 8);
          local_res10 = (undefined8 *)0x0;
          (**(code **)(*plVar6 + 0x20))(plVar6,(int)(short)iVar10,&local_res10,local_res8);
          if (local_res10 == (undefined8 *)0x0) {
            snprintf(&local_78,0x50,"Plugin media at index %d not available",(int)(short)iVar10);
            (**(code **)(*plVar6 + 0x40))(plVar6,&local_78,2);
            iVar9 = 2;
          }
          else {
            iVar9 = 1;
          }
          if (iVar9 == 1) {
            local_78 = *local_res10;
            uStack_70 = local_res10[1];
            uVar3 = *(uint *)(local_res10 + 4);
            if (*(uint *)(param_1 + 0x78) < *(uint *)(local_res10 + 3)) {
              *(uint *)(param_1 + 0x78) = *(uint *)(local_res10 + 3);
            }
            if ((uint)(int)*(char *)(param_1 + 0x7c) < uVar3) {
              *(char *)(param_1 + 0x7c) = (char)uVar3;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(*(longlong *)(param_1 + 0x28) + 0xe8));
      }
      FUN_145137b80();
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
      FUN_145138390(*(undefined8 *)(param_1 + 0x18),uVar5,param_1 + 0x82,param_1 + 0x84);
      FUN_145136e00(param_1);
      lVar8 = *(longlong *)(param_1 + 0x28);
      FUN_145136c70(param_1,*(undefined2 *)(lVar8 + 0x1c),lVar8 + 0x48,*(undefined2 *)(lVar8 + 0x18)
                    ,(undefined2 *)(param_1 + 0x7e));
      uVar7 = FUN_145136550(param_1,*(undefined8 *)(param_1 + 0x10),1);
      if ((int)uVar7 == 1) {
        FUN_145136d60(param_1);
        lVar8 = *(longlong *)(param_1 + 0x28);
        FUN_145136c70(param_1,*(undefined2 *)(lVar8 + 0x1e),lVar8 + 0x78,
                      *(undefined2 *)(lVar8 + 0x1a),(undefined2 *)(param_1 + 0x80));
        uVar7 = FUN_1451367d0(param_1,*(undefined8 *)(param_1 + 0x10),1);
        if ((int)uVar7 == 1) {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
          FUN_1451382d0(*(undefined8 *)(param_1 + 0x18),uVar5,*(undefined2 *)(param_1 + 0x7e),
                        *(undefined2 *)(param_1 + 0x80));
          FUN_145136be0(param_1);
          *(undefined1 *)(param_1 + 0x86) = 0;
          uVar4 = (**(code **)(*param_3 + 0x70))(param_3);
          *(undefined2 *)(param_1 + 0x98) = uVar4;
          FUN_1451361d0(param_1);
          uVar7 = 1;
        }
      }
      return uVar7;
    }
    (**(code **)(*param_3 + 0x40))(param_3,"No input files for Impact",2);
  }
  return 2;
}



// FUNCTION 145135990 FUN_145135990 body=213 status=ok
// SIG undefined FUN_145135990(void)

undefined8 FUN_145135990(undefined8 *param_1,longlong *param_2)

{
  if (param_1[0x25] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x26] = 0;
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[0x24] = 0;
  }
  FUN_1453cbf70(param_1 + 0x28,param_2);
  FUN_1453cd7a0(param_1 + 0x2c,param_2);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145135a70 FUN_145135a70 body=196 status=ok
// SIG undefined FUN_145135a70(void)

undefined8 FUN_145135a70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0xb0);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 200);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0xc0);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0xd0);
  *(undefined2 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_1453cd7c0(param_1 + 0x160,*(undefined4 *)(param_1 + 0x50));
  FUN_1453cdb00(param_1 + 0x30,*(undefined8 *)(param_1 + 0x170),*(undefined1 *)(param_1 + 0x168));
  FUN_1453cbf90(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  return 1;
}



// FUNCTION 145135ba0 FUN_145135ba0 body=1576 status=ok
// SIG undefined FUN_145135ba0(void)

void FUN_145135ba0(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  void *_Dst;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  void *pvVar18;
  bool bVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar27;
  
  uVar27 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar20 = 0;
  bVar19 = true;
  uVar14 = 0;
  if (*(char *)(param_1 + 0x86) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar4 + 0x90);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    uVar8 = *(undefined8 *)(lVar4 + 0xa8);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    uVar8 = *(undefined8 *)(lVar4 + 0xb8);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar4 + 0xb0);
    *(undefined8 *)(param_1 + 0x58) = uVar8;
    uVar10 = *(undefined4 *)(lVar4 + 0xc4);
    uVar6 = *(undefined4 *)(lVar4 + 200);
    uVar7 = *(undefined4 *)(lVar4 + 0xcc);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar4 + 0xc0);
    *(undefined4 *)(param_1 + 100) = uVar10;
    *(undefined4 *)(param_1 + 0x68) = uVar6;
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar4 + 0xd0);
    if (*(int *)(lVar4 + 0xe8) < 2) {
      FUN_145136310();
      if (*(int *)(param_1 + 0xb8) != 0) {
        fVar24 = powf(2.0,*(float *)(param_1 + 0x40) * 0.00083333335);
        fVar24 = fVar24 * (*(float *)(param_1 + 0xa0) / (float)*(uint *)(param_1 + 0x20));
        *(float *)(param_1 + 0x104) = fVar24;
        uVar16 = uVar14;
        if (fVar24 != 0.0) {
          uVar16 = (uint)(longlong)((float)*(uint *)(param_1 + 0xb8) / fVar24);
        }
        *(uint *)(param_1 + 0x13c) = uVar16 + 0xf & 0xfffffff0;
        FUN_145136fd0((float *)(param_1 + 0xa0));
      }
      FUN_145136420(param_1);
    }
    else {
      uVar10 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
      FUN_145138390(*(undefined8 *)(param_1 + 0x18),uVar10,param_1 + 0x82,param_1 + 0x84);
      FUN_145136310(param_1);
      FUN_145136e00(param_1);
      lVar4 = *(longlong *)(param_1 + 0x28);
      FUN_145136c70(param_1,*(undefined2 *)(lVar4 + 0x1c),lVar4 + 0x48,*(undefined2 *)(lVar4 + 0x18)
                    ,(undefined2 *)(param_1 + 0x7e));
      iVar11 = FUN_145136550(param_1,*(undefined8 *)(param_1 + 0x10),0);
      FUN_145136d60(param_1);
      lVar4 = *(longlong *)(param_1 + 0x28);
      FUN_145136c70(param_1,*(undefined2 *)(lVar4 + 0x1e),lVar4 + 0x78,*(undefined2 *)(lVar4 + 0x1a)
                    ,(undefined2 *)(param_1 + 0x80));
      iVar12 = FUN_1451367d0(param_1,*(undefined8 *)(param_1 + 0x10),0,0);
      bVar19 = iVar12 == 1 && iVar11 == 1;
      uVar10 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
      FUN_1451382d0(*(undefined8 *)(param_1 + 0x18),uVar10,*(undefined2 *)(param_1 + 0x7e),
                    *(undefined2 *)(param_1 + 0x80));
    }
    FUN_145136be0(param_1);
    FUN_145136ea0(param_1 + 0xa0,param_1 + 0x30);
    *(short *)(param_1 + 0x9a) = *(short *)(param_1 + 0x9a) + 1;
    FUN_1451361d0(param_1);
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  uVar10 = 0x2d;
  uVar16 = *(uint *)(param_1 + 0x8c);
  *(ushort *)((longlong)param_2 + 0x12) = uVar1;
  uVar15 = (uint)uVar1;
  if (*(short *)(param_1 + 0x94) != 0) {
    uVar13 = (int)*(short *)(param_1 + 0x94) * *(int *)(param_1 + 0x88);
    if (*(uint *)(param_1 + 0x8c) < uVar13) {
      uVar13 = uVar13 - *(uint *)(param_1 + 0x8c);
      if (uVar1 < uVar13) goto LAB_145135e16;
      *(short *)((longlong)param_2 + 0x12) = (short)uVar13;
      uVar14 = uVar13 & 0xffff;
    }
    else {
      *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    }
    uVar10 = 0x11;
    uVar15 = uVar14;
  }
LAB_145135e16:
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar15;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
  if (((*(short *)(param_1 + 0x94) == 0) ||
      (*(uint *)(param_1 + 0x8c) / *(uint *)(param_1 + 0x88) < (uint)(int)*(short *)(param_1 + 0x94)
      )) && (uVar16 / *(uint *)(param_1 + 0x88) !=
             *(uint *)(param_1 + 0x8c) / *(uint *)(param_1 + 0x88))) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0x86) = uVar9;
  uVar1 = *(ushort *)((longlong)param_2 + 0x12);
  uVar14 = (uint)uVar1;
  if (bVar19) {
    fVar21 = 1.0;
    fVar24 = *(float *)(param_1 + 0x30);
    if (0.0 <= fVar24) {
      if (1.0 <= fVar24) {
        fVar24 = 1.0;
      }
    }
    else {
      fVar24 = 0.0;
    }
    fVar26 = *(float *)(param_1 + 0x4c);
    if (0.0 <= fVar26) {
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar22 = *(float *)(param_1 + 0x44);
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    fVar23 = *(float *)(param_1 + 0x58);
    uVar2 = *(undefined2 *)(param_1 + 0x168);
    if (0.0 <= fVar23) {
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      fVar23 = fVar23 * 1.7888544;
    }
    else {
      fVar23 = 0.0;
    }
    fVar25 = *(float *)(param_1 + 0x54);
    if (0.0 <= fVar25) {
      if (1.0 <= fVar25) {
        fVar25 = 1.0;
      }
    }
    else {
      fVar25 = 0.0;
    }
    _Dst = (void *)*param_2;
    memset(_Dst,0,(ulonglong)((uint)uVar1 * 4));
    uVar16 = (uint)uVar1;
    uVar15 = (uint)uVar1;
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar13 = *(uint *)(param_1 + 0x114);
      uVar3 = *(uint *)(param_1 + 0x10c);
      uVar17 = uVar20;
      if (uVar13 < uVar3) {
        uVar5 = uVar3 - uVar13;
        if (uVar16 < uVar3 - uVar13) {
          uVar5 = uVar15;
        }
        uVar17 = (ulonglong)uVar5;
        uVar13 = uVar13 + uVar5;
        uVar16 = uVar16 - uVar5;
        *(uint *)(param_1 + 0x114) = uVar13;
      }
      if ((uVar13 == uVar3) && (uVar16 != 0)) {
        uVar13 = *(uint *)(param_1 + 0x138);
        if (uVar13 < *(int *)(param_1 + 0x13c) - uVar16) {
          if (0.0 < fVar22) {
            fVar22 = powf(10.0,fVar22 * 3.0);
            fVar21 = (float)(uVar13 + uVar16) / (float)*(uint *)(param_1 + 0x13c);
            fVar22 = (fVar22 - 1.0) * 0.1001001;
            if (1.0 <= fVar21) {
              fVar21 = 0.0;
            }
            else if (fVar22 == 2.0) {
              fVar21 = 1.0 - fVar21;
            }
            else {
              fVar21 = (fVar22 / ((1.0 - fVar22 * 0.5) * fVar21 - 1.0) + 2.0) / (2.0 - fVar22);
            }
          }
          pvVar18 = (void *)(uVar17 * 4 + (longlong)_Dst);
          FUN_1453cbfc0(param_1 + 0x140,*(longlong *)(param_1 + 0x130) + (ulonglong)uVar13 * 4,
                        uVar16,fVar24,fVar25,fVar21 * *(float *)(param_1 + 0x5c),
                        *(undefined4 *)(param_1 + 100),pvVar18);
          uVar27 = (undefined4)((ulonglong)pvVar18 >> 0x20);
        }
        uVar13 = *(uint *)(param_1 + 0x138);
        if (uVar13 < *(uint *)(param_1 + 0x13c)) {
          *(uint *)(param_1 + 0x138) = uVar13 + uVar16;
        }
      }
    }
    if ((*(int *)(param_1 + 0xe0) != 0) && (*(int *)(param_1 + 0xe4) != 0)) {
      uVar16 = *(uint *)(param_1 + 0x110);
      uVar13 = *(uint *)(param_1 + 0x108);
      if (uVar16 < uVar13) {
        uVar14 = uVar13 - uVar16;
        if (uVar15 < uVar13 - uVar16) {
          uVar14 = uVar15;
        }
        uVar20 = (ulonglong)uVar14;
        uVar16 = uVar16 + uVar14;
        uVar14 = uVar15 - uVar14;
        *(uint *)(param_1 + 0x110) = uVar16;
      }
      if ((uVar16 == uVar13) && (uVar14 != 0)) {
        FUN_1453cdcd0(fVar24,fVar26,fVar23,fVar25,*(undefined8 *)(param_1 + 0x170),(char)uVar2,
                      *(undefined4 *)(param_1 + 0x100),CONCAT44(uVar27,uVar14),
                      *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                      (void *)(uVar20 * 4 + (longlong)_Dst));
      }
    }
  }
  return;
}



// FUNCTION 1451361d0 FUN_1451361d0 body=313 status=ok
// SIG undefined FUN_1451361d0(void)

void FUN_1451361d0(longlong param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = *(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x10c);
  if (*(float *)(param_1 + 0x100) == 0.0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(longlong)((float)*(uint *)(param_1 + 0xec) / *(float *)(param_1 + 0x100));
  }
  uVar4 = iVar3 + *(int *)(param_1 + 0x108);
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar5 < uVar4) {
    uVar5 = uVar4;
  }
  fVar8 = (float)uVar2;
  fVar6 = powf(2.0,*(float *)(param_1 + 0x48) * 0.00083333335);
  fVar7 = powf(2.0,*(float *)(param_1 + 0x40) * 0.00083333335);
  fVar1 = *(float *)(param_1 + 0x3c);
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  fVar7 = (float)uVar5 / (fVar6 * fVar8);
  fVar6 = 0.001;
  if ((0.001 <= fVar1) && (fVar6 = fVar1, 10.0 <= fVar1)) {
    fVar6 = 10.0;
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  *(uint *)(param_1 + 0x90) = uVar2;
  *(short *)(param_1 + 0x94) = *(short *)(param_1 + 0x98) - *(short *)(param_1 + 0x9a);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(uint *)(param_1 + 0x88) = (int)(longlong)(fVar6 * fVar8) + 3U & 0xfffffffc;
  return;
}



// FUNCTION 145136310 FUN_145136310 body=268 status=ok
// SIG undefined FUN_145136310(void)

void FUN_145136310(longlong param_1)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  uVar2 = *(int *)(param_1 + 0x9c) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x9c) = uVar2;
  FUN_145137bc0(*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x68),
                (float)uVar2 * 2.3283064e-10 * fVar1);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xdc);
  uVar2 = *(int *)(param_1 + 0x9c) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x9c) = uVar2;
  FUN_145137cf0(*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x6c),
                (float)uVar2 * 2.3283064e-10 * fVar1);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xe0);
  uVar2 = *(int *)(param_1 + 0x9c) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x9c) = uVar2;
  FUN_145137d50(*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x70),
                (float)uVar2 * 2.3283064e-10 * fVar1);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xe4);
  uVar2 = *(int *)(param_1 + 0x9c) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x9c) = uVar2;
  FUN_145137d90(*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x74),
                (float)uVar2 * 2.3283064e-10 * fVar1);
  return;
}



// FUNCTION 145136420 FUN_145136420 body=290 status=ok
// SIG undefined FUN_145136420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145136420(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  undefined8 auStack_40 [5];
  longlong alStack_18 [2];
  
  if ((*(int *)(param_1 + 0xe0) != 0) && (uVar2 = *(uint *)(param_1 + 0xe4), uVar2 != 0)) {
    auStack_40[0] = 0x14513646f;
    fVar11 = powf(2.0,*(float *)(param_1 + 0x48) * 0.00083333335);
    uVar9 = (ulonglong)(uVar2 >> 1) * 0x18;
    uVar8 = uVar9 + 0xf;
    *(float *)(param_1 + 0x100) =
         fVar11 * (*(float *)(param_1 + 0xd0) / (float)*(uint *)(param_1 + 0x20));
    if (uVar8 <= uVar9) {
      uVar8 = 0xffffffffffffff0;
    }
    auStack_40[0] = 0x1451364ba;
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    lVar6 = -(uVar8 & 0xfffffffffffffff0);
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    *(undefined1 **)((longlong)alStack_18 + lVar6) = &stack0xfffffffffffffff8 + lVar6;
    *(undefined8 *)((longlong)auStack_40 + lVar6) = 0x1451364e2;
    iVar7 = FUN_1453cc4c0(uVar4,uVar3,uVar2,uVar1);
    if (iVar7 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0xd8);
      *(undefined8 *)((longlong)auStack_40 + lVar6) = 0x1451364fe;
      FUN_1453cc7c0(param_1 + 0x140,&stack0xfffffffffffffff8 + lVar6,uVar1);
      if (*(uint *)(param_1 + 0xf0) != 0) {
        lVar10 = 0;
        uVar8 = (ulonglong)*(uint *)(param_1 + 0xf0);
        do {
          lVar5 = *(longlong *)(param_1 + 0x170);
          uVar1 = *(undefined4 *)(param_1 + 0x50);
          *(undefined8 *)((longlong)auStack_40 + lVar6) = 0x145136524;
          FUN_1453ccdf0(lVar5 + lVar10,uVar1);
          lVar10 = lVar10 + 0x4380;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 145136550 FUN_145136550 body=636 status=ok
// SIG undefined FUN_145136550(void)

undefined8 FUN_145136550(longlong param_1,longlong *param_2,char param_3)

{
  float *pfVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  ulonglong _Size;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined8 *local_res20;
  undefined1 local_88 [96];
  
  plVar3 = *(longlong **)(param_1 + 8);
  sVar2 = *(short *)(param_1 + 0x7e);
  iVar7 = 0;
  local_res20 = (undefined8 *)0x0;
  (**(code **)(*plVar3 + 0x20))(plVar3,(int)sVar2,&local_res20,local_res8);
  if (local_res20 == (undefined8 *)0x0) {
    snprintf(local_88,0x50,"Plugin media at index %d not available",(int)sVar2);
    (**(code **)(*plVar3 + 0x40))(plVar3,local_88,2);
    return 2;
  }
  uVar5 = local_res20[1];
  pfVar1 = (float *)(param_1 + 0xa0);
  *(undefined8 *)pfVar1 = *local_res20;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  uVar5 = local_res20[3];
  *(undefined8 *)(param_1 + 0xb0) = local_res20[2];
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  uVar5 = local_res20[5];
  puVar6 = local_res20 + 6;
  *(undefined8 *)(param_1 + 0xc0) = local_res20[4];
  *(undefined8 *)(param_1 + 200) = uVar5;
  if (*(int *)(param_1 + 0xb8) != 0) {
    local_res20 = puVar6;
    fVar8 = powf(2.0,*(float *)(param_1 + 0x40) * 0.00083333335);
    fVar8 = fVar8 * (*pfVar1 / (float)*(uint *)(param_1 + 0x20));
    *(float *)(param_1 + 0x104) = fVar8;
    iVar4 = iVar7;
    if (fVar8 != 0.0) {
      iVar4 = (int)(longlong)((float)*(uint *)(param_1 + 0xb8) / fVar8);
    }
    *(uint *)(param_1 + 0x13c) = iVar4 + 0xfU & 0xfffffff0;
    if (((param_3 != '\0') || (*(longlong *)(param_1 + 0x128) == 0)) ||
       (*(longlong *)(param_1 + 0x130) == 0)) {
      FUN_145136f10(pfVar1);
      iVar4 = *(int *)(param_1 + 0x78);
      if (0 < iVar4) {
        uVar5 = (**(code **)(*param_2 + 8))
                          (param_2,(ulonglong)(uint)(iVar4 * 4),
                           "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacter.cpp"
                           ,0x35);
        *(undefined8 *)(param_1 + 0x128) = uVar5;
      }
      if (*(void **)(param_1 + 0x128) == (void *)0x0) {
        return 2;
      }
      memset(*(void **)(param_1 + 0x128),0,(ulonglong)(uint)(iVar4 * 4));
      fVar8 = ABS(DAT_14c79d208) * *pfVar1 * 2.0833333e-05;
      if (fVar8 != 0.0) {
        iVar7 = (int)(longlong)((float)iVar4 / fVar8);
      }
      _Size = (ulonglong)((iVar7 + 0xfU & 0xfffffff0) << 2);
      _Dst = (void *)(**(code **)(*param_2 + 8))
                               (param_2,_Size,
                                "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacter.cpp"
                                ,0x42);
      *(void **)(param_1 + 0x130) = _Dst;
      if (_Dst == (void *)0x0) {
        return 2;
      }
      memset(_Dst,0,_Size);
      puVar6 = local_res20;
    }
    local_res20 = puVar6 + (ulonglong)*(uint *)(param_1 + 0xb4) +
                           (ulonglong)*(uint *)(param_1 + 0xb0);
    if (*(void **)(param_1 + 0x128) != (void *)0x0) {
      memcpy(*(void **)(param_1 + 0x128),local_res20,(ulonglong)*(uint *)(param_1 + 0xb8) << 2);
    }
    FUN_145136fd0(param_1 + 0xa0);
  }
  return 1;
}



// FUNCTION 1451367d0 FUN_1451367d0 body=1030 status=ok
// SIG undefined FUN_1451367d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1451367d0(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  void *_Dst;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong lVar17;
  float fVar18;
  undefined1 local_res8 [8];
  undefined8 auStack_d0 [5];
  longlong alStack_a8 [2];
  byte *local_98;
  uint *local_90;
  undefined1 local_88 [80];
  
  plVar9 = *(longlong **)(param_1 + 8);
  sVar6 = *(short *)(param_1 + 0x80);
  lVar17 = 0;
  local_98 = (byte *)0x0;
  auStack_d0[0] = 0x14513682b;
  (**(code **)(*plVar9 + 0x20))(plVar9,(int)sVar6,&local_98,local_res8);
  if (local_98 == (byte *)0x0) {
    auStack_d0[0] = 0x14513684a;
    snprintf(local_88,0x50,"Plugin media at index %d not available",(int)sVar6);
    auStack_d0[0] = 0x14513685b;
    (**(code **)(*plVar9 + 0x40))(plVar9,local_88,2);
LAB_14513685b:
    uVar12 = 2;
  }
  else {
    uVar12 = *(undefined8 *)(local_98 + 8);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)local_98;
    *(undefined8 *)(param_1 + 0xd8) = uVar12;
    uVar12 = *(undefined8 *)(local_98 + 0x18);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(local_98 + 0x10);
    *(undefined8 *)(param_1 + 0xe8) = uVar12;
    uVar12 = *(undefined8 *)(local_98 + 0x28);
    pbVar16 = local_98 + 0x30;
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(local_98 + 0x20);
    *(undefined8 *)(param_1 + 0xf8) = uVar12;
    if ((*(int *)(param_1 + 0xe0) == 0) || (piVar1 = (int *)(param_1 + 0xe4), *piVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0xa8);
    }
    else {
      auStack_d0[0] = 0x1451368c3;
      local_98 = pbVar16;
      fVar18 = powf(2.0,*(float *)(param_1 + 0x48) * 0.00083333335);
      *(float *)(param_1 + 0x100) =
           fVar18 * (*(float *)(param_1 + 0xd0) / (float)*(uint *)(param_1 + 0x20));
      if (((param_3 != '\0') || (*(longlong *)(param_1 + 0x120) == 0)) ||
         (local_90 = (uint *)piVar1, *(longlong *)(param_1 + 0x118) == 0)) {
        auStack_d0[0] = 0x14513691b;
        FUN_145136f70(param_1 + 0xa0,param_2);
        auStack_d0[0] = 0x145136940;
        uVar12 = (**(code **)(*param_2 + 8))
                           (param_2,*piVar1 << 3,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacter.cpp"
                            ,0x28);
        *(undefined8 *)(param_1 + 0x118) = uVar12;
        auStack_d0[0] = 0x145136965;
        lVar13 = (**(code **)(*param_2 + 8))
                           (param_2,*(int *)(param_1 + 0xe0) << 3,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacter.cpp"
                            ,0x29);
        _Dst = *(void **)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x120) = lVar13;
        if ((_Dst == (void *)0x0) || (lVar13 == 0)) goto LAB_14513685b;
        auStack_d0[0] = 0x145136993;
        memset(_Dst,0,(ulonglong)(uint)(*piVar1 << 3));
        auStack_d0[0] = 0x1451369a8;
        memset(*(void **)(param_1 + 0x120),0,(ulonglong)(uint)(*(int *)(param_1 + 0xe0) << 3));
        pbVar16 = local_98;
      }
      local_90 = (uint *)(param_1 + 0xe4);
      auStack_d0[0] = 0x1451369ca;
      memcpy(*(void **)(param_1 + 0x118),pbVar16,(ulonglong)(uint)(*piVar1 << 3));
      local_98 = local_98 + (ulonglong)*local_90 * 8;
      auStack_d0[0] = 0x1451369ef;
      memcpy(*(void **)(param_1 + 0x120),local_98,(ulonglong)(uint)(*(int *)(param_1 + 0xe0) << 3));
      uVar7 = *local_90;
      local_98 = local_98 + (ulonglong)*(uint *)(param_1 + 0xe0) * 8;
      if ((param_3 != '\0') || (*(longlong *)(param_1 + 0x148) == 0)) {
        auStack_d0[0] = 0x145136a38;
        FUN_1453cbf70(param_1 + 0x140,param_2);
        auStack_d0[0] = 0x145136a46;
        uVar12 = FUN_1453cbeb0(param_1 + 0x140,param_2,(ulonglong)(uVar7 >> 1));
        if ((int)uVar12 != 1) {
          return uVar12;
        }
      }
      uVar15 = (ulonglong)(uVar7 >> 1) * 0x18;
      uVar14 = uVar15 + 0xf;
      if (uVar14 <= uVar15) {
        uVar14 = 0xffffffffffffff0;
      }
      auStack_d0[0] = 0x145136a77;
      uVar7 = *local_90;
      lVar13 = -(uVar14 & 0xfffffffffffffff0);
      uVar2 = *(undefined4 *)(param_1 + 0x50);
      uVar12 = *(undefined8 *)(param_1 + 0x120);
      uVar10 = *(undefined8 *)(param_1 + 0x118);
      *(longlong *)((longlong)alStack_a8 + lVar13) = (longlong)&local_98 + lVar13;
      *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x145136a98;
      uVar12 = FUN_1453cc4c0(uVar10,uVar12,uVar7,uVar2);
      if ((int)uVar12 != 1) {
        return uVar12;
      }
      uVar2 = *(undefined4 *)(param_1 + 0xd8);
      *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x145136ab4;
      FUN_1453cc7c0(param_1 + 0x140,(longlong)&local_98 + lVar13,uVar2);
      plVar9 = (longlong *)(param_1 + 0x170);
      uVar7 = *(uint *)(param_1 + 0xf0);
      uVar14 = (ulonglong)uVar7;
      local_98 = local_98 + (ulonglong)*(uint *)(param_1 + 0xe8) * 4;
      if ((param_4 != '\0') || (*plVar9 == 0)) {
        *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x145136af1;
        FUN_1453cd7a0(param_1 + 0x160,param_2);
        cVar4 = *(char *)(param_1 + 0x7c);
        *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x145136b05;
        uVar12 = FUN_1453cd760(param_1 + 0x160,param_2,(int)cVar4);
        if ((int)uVar12 != 1) {
          return uVar12;
        }
      }
      *(uint *)(param_1 + 0x168) = uVar7;
      if (uVar7 != 0) {
        do {
          uVar2 = *(undefined4 *)local_98;
          lVar11 = *plVar9;
          uVar3 = *(undefined4 *)(local_98 + 4);
          local_98 = local_98 + 8;
          if (lVar11 != 0) {
            uVar8 = *(undefined4 *)(param_1 + 0x20);
            *(undefined4 *)((longlong)alStack_a8 + lVar13) = *(undefined4 *)(param_1 + 0x50);
            *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x145136b67;
            FUN_1453cca00(lVar17 + lVar11,uVar8,uVar2,uVar3);
          }
          bVar5 = *local_98;
          pbVar16 = local_98 + 4;
          lVar11 = *plVar9;
          local_98 = pbVar16;
          if (lVar11 != 0) {
            uVar2 = *(undefined4 *)(param_1 + 0xec);
            *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x145136b93;
            FUN_1453cca80(lVar17 + lVar11,(ulonglong)bVar5,uVar2,pbVar16);
          }
          lVar17 = lVar17 + 0x4380;
          local_98 = local_98 + (ulonglong)bVar5 * 8;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    uVar12 = 1;
  }
  return uVar12;
}



// FUNCTION 145136be0 FUN_145136be0 body=130 status=ok
// SIG undefined FUN_145136be0(void)

void FUN_145136be0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  fVar2 = *(float *)(param_1 + 0xd4);
  fVar1 = powf(2.0,*(float *)(param_1 + 0x40) * -0.00083333335);
  fVar1 = fVar1 * *(float *)(param_1 + 0xa4);
  if ((fVar2 < fVar1) && (fVar2 = ABS(fVar2 - fVar1), 0.01 < fVar2)) {
    *(uint *)(param_1 + 0x108) =
         (uint)(longlong)((float)*(uint *)(param_1 + 0x20) * fVar2) & 0xfffffffc;
  }
  return;
}



// FUNCTION 145136c70 FUN_145136c70 body=226 status=ok
// SIG undefined FUN_145136c70(void)

void FUN_145136c70(longlong param_1,short param_2,longlong param_3,short param_4,short *param_5)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 0x10);
  if (iVar3 == 0) {
    *param_5 = 0;
    return;
  }
  if (param_2 == 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xe8) + -1;
    if (iVar3 <= param_4) {
      param_4 = (short)iVar3;
    }
    *param_5 = param_4;
  }
  else if (param_2 == 1) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
    iVar1 = (**(code **)(*plVar2 + 0xd8))(plVar2);
    if ((float)iVar1 * 4.656613e-10 == 1.0) {
      *param_5 = *(short *)(*(longlong *)(param_3 + 8) + (ulonglong)(iVar3 - 1) * 4);
      return;
    }
    *param_5 = *(short *)(*(longlong *)(param_3 + 8) +
                         (ulonglong)(uint)(int)((float)iVar3 * (float)iVar1 * 4.656613e-10) * 4);
    return;
  }
  return;
}



// FUNCTION 145136d60 FUN_145136d60 body=158 status=ok
// SIG undefined FUN_145136d60(void)

void FUN_145136d60(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int *_Dst;
  
  FUN_145135540(*(longlong *)(param_1 + 0x28) + 0x78,*(longlong *)(param_1 + 0x28) + 0x60);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (((*(short *)(lVar1 + 0x1e) != 0) && (1 < *(uint *)(lVar1 + 0x70))) &&
     (*(uint *)(lVar1 + 0x40) < 2)) {
    piVar2 = *(int **)(lVar1 + 0x80);
    _Dst = piVar2;
    if (piVar2 != piVar2 + *(uint *)(lVar1 + 0x88)) {
      while (*_Dst != (int)*(short *)(param_1 + 0x84)) {
        _Dst = _Dst + 1;
        if (_Dst == piVar2 + *(uint *)(lVar1 + 0x88)) {
          return;
        }
      }
      if (_Dst < piVar2 + (*(uint *)(lVar1 + 0x88) - 1)) {
        memmove(_Dst,_Dst + 1,
                (ulonglong)((int)(piVar2 + (*(uint *)(lVar1 + 0x88) - 1)) - (int)_Dst & 0xfffffffc))
        ;
      }
      *(int *)(lVar1 + 0x88) = *(int *)(lVar1 + 0x88) + -1;
    }
  }
  return;
}



// FUNCTION 145136e00 FUN_145136e00 body=149 status=ok
// SIG undefined FUN_145136e00(void)

void FUN_145136e00(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int *_Dst;
  
  FUN_145135540(*(longlong *)(param_1 + 0x28) + 0x48,*(longlong *)(param_1 + 0x28) + 0x30);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(short *)(lVar1 + 0x1c) != 0) && (1 < *(uint *)(lVar1 + 0x40))) {
    piVar2 = *(int **)(lVar1 + 0x50);
    _Dst = piVar2;
    if (piVar2 != piVar2 + *(uint *)(lVar1 + 0x58)) {
      while (*_Dst != (int)*(short *)(param_1 + 0x82)) {
        _Dst = _Dst + 1;
        if (_Dst == piVar2 + *(uint *)(lVar1 + 0x58)) {
          return;
        }
      }
      if (_Dst < piVar2 + (*(uint *)(lVar1 + 0x58) - 1)) {
        memmove(_Dst,_Dst + 1,
                (ulonglong)((int)(piVar2 + (*(uint *)(lVar1 + 0x58) - 1)) - (int)_Dst & 0xfffffffc))
        ;
      }
      *(int *)(lVar1 + 0x58) = *(int *)(lVar1 + 0x58) + -1;
    }
  }
  return;
}



// FUNCTION 145136ea0 FUN_145136ea0 body=101 status=ok
// SIG undefined FUN_145136ea0(void)

void FUN_145136ea0(longlong param_1,longlong param_2)

{
  FUN_1453cd7c0(param_1 + 0xc0,*(undefined4 *)(param_2 + 0x20));
  FUN_1453cdb00(param_2,*(undefined8 *)(param_1 + 0xd0),*(undefined1 *)(param_1 + 200));
  FUN_1453cbf90(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  return;
}



// FUNCTION 145136f10 FUN_145136f10 body=91 status=ok
// SIG undefined FUN_145136f10(void)

void FUN_145136f10(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 145136f70 FUN_145136f70 body=85 status=ok
// SIG undefined FUN_145136f70(void)

void FUN_145136f70(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 145136fd0 FUN_145136fd0 body=257 status=ok
// SIG undefined FUN_145136fd0(void)

void FUN_145136fd0(longlong param_1)

{
  uint uVar1;
  longlong in_RAX;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  
  uVar4 = 0;
  fVar9 = 0.0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    do {
      uVar1 = (uint)in_RAX;
      if ((float)*(uint *)(param_1 + 0x18) <= fVar9) {
        return;
      }
      iVar3 = (int)fVar9;
      fVar5 = fVar9;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar9)) {
        auVar6._4_4_ = fVar9;
        auVar6._0_4_ = fVar9;
        auVar6._8_8_ = 0;
        uVar1 = movmskps(uVar1,auVar6);
        uVar1 = uVar1 & 1;
        fVar5 = (float)(int)(iVar3 - uVar1);
      }
      iVar3 = (int)fVar9;
      fVar7 = fVar9;
      if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar9)) {
        auVar8._4_4_ = fVar9;
        auVar8._0_4_ = fVar9;
        auVar8._8_8_ = 0;
        uVar1 = movmskps(uVar1,auVar8);
        fVar7 = (float)(int)(iVar3 + (uVar1 & 1 ^ 1));
      }
      uVar1 = *(uint *)(param_1 + 0x18) - 1;
      uVar2 = (ulonglong)uVar1;
      if ((uint)(longlong)fVar5 <= uVar1) {
        uVar2 = (longlong)fVar5 & 0xffffffff;
      }
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x88) + uVar2 * 4);
      uVar2 = (ulonglong)uVar1;
      if ((uint)(longlong)fVar7 <= uVar1) {
        uVar2 = (longlong)fVar7 & 0xffffffff;
      }
      in_RAX = *(longlong *)(param_1 + 0x90);
      *(float *)(in_RAX + uVar4 * 4) =
           (*(float *)(*(longlong *)(param_1 + 0x88) + uVar2 * 4) - fVar5) *
           (fVar9 - (float)(int)fVar9) + fVar5;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
      fVar9 = fVar9 + *(float *)(param_1 + 100);
    } while (uVar1 < *(uint *)(param_1 + 0x9c));
  }
  return;
}



// FUNCTION 1451370e0 FUN_1451370e0 body=71 status=ok
// SIG undefined FUN_1451370e0(void)

undefined8 * FUN_1451370e0(undefined8 *param_1,ulonglong param_2)

{
  param_1[0x2c] = &PTR_FUN_149c346f8;
  param_1[0x28] = &PTR_FUN_149c346f0;
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 145137130 FUN_145137130 body=321 status=ok
// SIG undefined FUN_145137130(void)

undefined8 * FUN_145137130(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x180,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacter.cpp"
                      ,0xbb);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c34700;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 100) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x7c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7e) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x82) = 0xffffffff;
    *(undefined1 *)((longlong)puVar1 + 0x86) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    puVar1[0x20] = 0x3f800000;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    FUN_1453cbe90(puVar1 + 0x28);
    FUN_1453cd740(puVar1 + 0x2c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145137280 FUN_145137280 body=597 status=ok
// SIG undefined FUN_145137280(void)

undefined8 * FUN_145137280(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0xf0,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacterParams.cpp"
                      ,0x70);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_149c34838;
    *(undefined2 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x10001;
    puVar5[4] = 0x7fffffffffffffff;
    puVar5[5] = 0x7fffffffffffffff;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    *(undefined8 *)((longlong)puVar5 + 0xd4) = 0;
    puVar5[0x12] = 0x3f800000;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    *(undefined4 *)(puVar5 + 0x17) = 0;
    *(undefined4 *)((longlong)puVar5 + 0xbc) = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x18) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0xc4) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar5 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    puVar5[0x12] = *(undefined8 *)(param_1 + 0x90);
    puVar5[0x13] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    puVar5[0x14] = *(undefined8 *)(param_1 + 0xa0);
    puVar5[0x15] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    puVar5[0x16] = *(undefined8 *)(param_1 + 0xb0);
    puVar5[0x17] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 200);
    puVar5[0x18] = *(undefined8 *)(param_1 + 0xc0);
    puVar5[0x19] = uVar4;
    puVar5[0x1a] = *(undefined8 *)(param_1 + 0xd0);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    puVar5[0x1b] = *(undefined8 *)(param_1 + 0xd8);
    puVar5[0x1c] = uVar4;
    *(undefined2 *)(puVar5 + 1) = 0xffff;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[2] = param_2;
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      puVar5[0x12] = *(undefined8 *)(param_1 + 0x90);
      puVar5[0x13] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      puVar5[0x14] = *(undefined8 *)(param_1 + 0xa0);
      puVar5[0x15] = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      puVar5[0x16] = *(undefined8 *)(param_1 + 0xb0);
      puVar5[0x17] = uVar4;
      uVar1 = *(undefined4 *)(param_1 + 0xc4);
      uVar2 = *(undefined4 *)(param_1 + 200);
      uVar3 = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)((longlong)puVar5 + 0xc4) = uVar1;
      *(undefined4 *)(puVar5 + 0x19) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0xcc) = uVar3;
      puVar5[0x1a] = *(undefined8 *)(param_1 + 0xd0);
      puVar5[3] = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(puVar5 + 0x1d) = *(undefined4 *)(param_1 + 0xe8);
      puVar5[4] = *(undefined8 *)(param_1 + 0x20);
      puVar5[5] = *(undefined8 *)(param_1 + 0x28);
      puVar5[6] = param_2;
      FUN_145135540(puVar5 + 6,param_1 + 0x30);
      puVar5[9] = param_2;
      FUN_145135540(puVar5 + 9,param_1 + 0x48);
      puVar5[0xc] = param_2;
      FUN_145135540(puVar5 + 0xc,param_1 + 0x60);
      puVar5[0xf] = param_2;
      FUN_145135540(puVar5 + 0xf,param_1 + 0x78);
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      puVar5[0x1b] = *(undefined8 *)(param_1 + 0xd8);
      puVar5[0x1c] = uVar4;
    }
    return puVar5;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145137590 FUN_145137590 body=199 status=ok
// SIG undefined FUN_145137590(void)

undefined8 FUN_145137590(undefined8 *param_1,longlong *param_2)

{
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
    param_1[0xd] = 0;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
    param_1[10] = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
    param_1[0x10] = 0;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145137660 FUN_145137660 body=420 status=ok
// SIG undefined FUN_145137660(void)

undefined8 FUN_145137660(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_145137bc0(param_1,*param_2,0);
  fVar3 = (float)param_2[1];
  if (0.05 <= fVar3) {
    fVar2 = fVar3;
    if (1.0 <= fVar3) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.05;
  }
  *(float *)(param_1 + 0x98) = fVar2;
  *(float *)(param_1 + 0xcc) = fVar3;
  *(float *)(param_1 + 0x90) = fVar2;
  FUN_145137ec0(param_1);
  FUN_145137e20(param_1);
  *(undefined4 *)(param_1 + 0x9c) = param_2[2];
  fVar3 = (float)param_2[3];
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
    if (1.0 <= fVar3) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0xb4) = fVar2;
  *(float *)(param_1 + 0xd0) = fVar3;
  fVar3 = (float)param_2[4];
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0xb8) = fVar2;
  *(float *)(param_1 + 0xd4) = fVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0x10001;
  *(undefined4 *)(param_1 + 0xe8) = param_2[5];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 6);
  FUN_145138140(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  FUN_145138140(param_1 + 0x60,uVar1,*(undefined4 *)(param_1 + 0xe8));
  fVar3 = (float)param_2[10];
  if (-96.0 <= fVar3) {
    if (24.0 <= fVar3) {
      fVar3 = 24.0;
    }
    if (-96.0 < fVar3) {
      fVar3 = powf(10.0,fVar3 * 0.05);
      *(float *)(param_1 + 0xc4) = fVar3;
      goto LAB_1451377bb;
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
LAB_1451377bb:
  *(undefined4 *)(param_1 + 0xd8) = param_2[0xb];
  *(undefined4 *)(param_1 + 0xdc) = param_2[0xc];
  *(undefined4 *)(param_1 + 0xe0) = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe4) = param_2[0xe];
  *(undefined2 *)(param_1 + 8) = 0xffff;
  return 1;
}



// FUNCTION 145137810 FUN_145137810 body=802 status=ok
// SIG undefined FUN_145137810(void)

undefined8 FUN_145137810(longlong param_1,short param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = 1;
  if (param_2 != 0x7fff) {
    switch(param_2) {
    case 0:
      FUN_145137bc0(param_1,*param_3,0);
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
      return 1;
    case 1:
      *(float *)(param_1 + 0xd8) = *param_3;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
      return 1;
    case 2:
      FUN_145137cf0(param_1,*param_3,0);
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
      return 1;
    case 3:
      *(float *)(param_1 + 0xdc) = *param_3;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
      return 1;
    case 4:
      fVar1 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 <= fVar1)) {
        fVar3 = 1.0;
      }
      *(float *)(param_1 + 0xb4) = fVar3;
      *(float *)(param_1 + 0xd0) = fVar1;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x10;
      return 1;
    case 5:
      *(float *)(param_1 + 0xe0) = *param_3;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x20;
      return 1;
    case 6:
      fVar1 = *param_3;
      fVar3 = 0.0;
      if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 <= fVar1)) {
        fVar3 = 1.0;
      }
      *(float *)(param_1 + 0xb8) = fVar3;
      *(float *)(param_1 + 0xd4) = fVar1;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x40;
      return 1;
    case 7:
      *(float *)(param_1 + 0xe4) = *param_3;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x80;
      return 1;
    case 8:
      *(float *)(param_1 + 0x9c) = *param_3;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
      return 1;
    case 9:
      fVar1 = *param_3;
      fVar3 = -96.0;
      if ((-96.0 <= fVar1) && (fVar3 = fVar1, 24.0 <= fVar1)) {
        fVar3 = 24.0;
      }
      FUN_145137dd0(param_1,fVar3);
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
      return 1;
    case 10:
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)param_3;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 4;
      return 1;
    case 0xb:
      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)param_3;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 8;
      return 1;
    case 0xc:
      *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)param_3;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x10;
      return 1;
    case 0xd:
      *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)param_3;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x20;
      return 1;
    case 0xe:
      *(float *)(param_1 + 0xe8) = *param_3;
      FUN_145138140(param_1 + 0x30,*(undefined8 *)(param_1 + 0x20));
      FUN_145138140(param_1 + 0x60,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xe8));
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x40;
      return 1;
    case 0xf:
      uVar2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      FUN_145138140(param_1 + 0x30,uVar2,*(undefined4 *)(param_1 + 0xe8));
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
      return 1;
    case 0x10:
      uVar2 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      FUN_145138140(param_1 + 0x60,uVar2,*(undefined4 *)(param_1 + 0xe8));
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      return 1;
    default:
      uVar2 = 0x1f;
    }
  }
  return uVar2;
}



// FUNCTION 145137b80 FUN_145137b80 body=54 status=ok
// SIG undefined FUN_145137b80(void)

void FUN_145137b80(longlong param_1)

{
  FUN_145138140(param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0xe8));
  FUN_145138140(param_1 + 0x60,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xe8));
  return;
}



// FUNCTION 145137bc0 FUN_145137bc0 body=290 status=ok
// SIG undefined FUN_145137bc0(void)

void FUN_145137bc0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_3 = param_2 + param_3;
  fVar5 = 0.0;
  *(float *)(param_1 + 200) = param_2;
  if (0.01 <= param_3) {
    if (2.0 <= param_3) {
      param_3 = 2.0;
    }
    *(float *)(param_1 + 0x94) = param_3;
    param_3 = param_3 - 1.0;
    if (param_3 < 0.0) goto LAB_145137c0a;
    param_3 = DAT_14c72f634 * param_3;
  }
  else {
    param_3 = -0.99;
    *(undefined4 *)(param_1 + 0x94) = 0x3c23d70a;
LAB_145137c0a:
    param_3 = -(DAT_14c72f630 * param_3);
  }
  *(float *)(param_1 + 0xb0) = param_3;
  FUN_145137e20();
  fVar2 = DAT_14c72f62c;
  fVar1 = *(float *)(param_1 + 0x94);
  if (1.0 <= fVar1) {
    fVar3 = (fVar1 - 1.0) * DAT_14c72f620;
    if (0.0 <= fVar3) goto LAB_145137c52;
    *(undefined4 *)(param_1 + 0xa0) = 0;
LAB_145137cab:
    fVar1 = (fVar1 - 1.0) * fVar2;
    if (fVar1 < 0.0) goto LAB_145137cc3;
  }
  else {
    fVar3 = 0.0;
LAB_145137c52:
    fVar4 = DAT_14c72f620;
    if (fVar3 <= DAT_14c72f620) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + 0xa0) = fVar4 * -4800.0;
    if (1.0 <= fVar1) goto LAB_145137cab;
    fVar1 = 0.0;
  }
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  fVar5 = fVar2 * -4800.0;
LAB_145137cc3:
  *(float *)(param_1 + 0xa8) = fVar5;
  FUN_145137ec0(param_1);
  return;
}



// FUNCTION 145137cf0 FUN_145137cf0 body=82 status=ok
// SIG undefined FUN_145137cf0(void)

void FUN_145137cf0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  
  param_3 = param_2 + param_3;
  fVar1 = 0.05;
  if ((0.05 <= param_3) && (fVar1 = param_3, 1.0 <= param_3)) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x98) = fVar1;
  *(float *)(param_1 + 0xcc) = param_2;
  *(float *)(param_1 + 0x90) = fVar1;
  FUN_145137ec0();
  FUN_145137e20(param_1);
  return;
}



// FUNCTION 145137d50 FUN_145137d50 body=49 status=ok
// SIG undefined FUN_145137d50(void)

void FUN_145137d50(longlong param_1,float param_2,float param_3)

{
  *(float *)(param_1 + 0xd0) = param_2;
  param_2 = param_2 + param_3;
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0xb4) = param_2;
  return;
}



// FUNCTION 145137d90 FUN_145137d90 body=49 status=ok
// SIG undefined FUN_145137d90(void)

void FUN_145137d90(longlong param_1,float param_2,float param_3)

{
  *(float *)(param_1 + 0xd4) = param_2;
  param_2 = param_2 + param_3;
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0xb8) = param_2;
  return;
}



// FUNCTION 145137dd0 FUN_145137dd0 body=69 status=ok
// SIG undefined FUN_145137dd0(void)

void FUN_145137dd0(longlong param_1,float param_2)

{
  float fVar1;
  
  if (param_2 <= -96.0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    return;
  }
  fVar1 = powf(10.0,param_2 * 0.05);
  *(float *)(param_1 + 0xc4) = fVar1;
  return;
}



// FUNCTION 145137e20 FUN_145137e20 body=148 status=ok
// SIG undefined FUN_145137e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145137e20(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x94);
  if (fVar1 < 1.0) {
    fVar3 = 1.0 - fVar1;
  }
  else {
    fVar3 = 0.0;
  }
  fVar2 = 1.0 - *(float *)(param_1 + 0x98);
  fVar3 = fVar2 + fVar3;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    fVar3 = fVar3 * _DAT_14c72f624;
  }
  else {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0xa4) = fVar3;
  if (fVar1 < 1.0) {
    fVar1 = 1.0 - fVar1;
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = fVar2 + fVar1;
  if (fVar2 < 0.0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    return;
  }
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0xac) = fVar1 * _DAT_14c72f628;
  return;
}



// FUNCTION 145137ec0 FUN_145137ec0 body=111 status=ok
// SIG undefined FUN_145137ec0(void)

void FUN_145137ec0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (0.1 <= *(float *)(param_1 + 0x98)) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x98) * 10.0;
  }
  fVar1 = *(float *)(param_1 + 0x94);
  fVar3 = 1.0;
  if (1.0 < fVar1) {
    fVar2 = fVar1 * fVar2;
    fVar3 = fVar1;
  }
  if (2.0 <= fVar3) {
    fVar3 = 2.0;
  }
  *(float *)(param_1 + 0xbc) = fVar3;
  if (fVar2 < 0.0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return;
  }
  if (2.0 <= fVar2) {
    fVar2 = 2.0;
  }
  *(float *)(param_1 + 0xc0) = fVar2;
  return;
}



// FUNCTION 145137f30 FUN_145137f30 body=205 status=ok
// SIG undefined FUN_145137f30(void)

undefined8 FUN_145137f30(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0x14) + param_2;
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = (longlong *)*param_1;
  lVar3 = (ulonglong)uVar5 << 2;
  if (param_1[1] == 0) {
    lVar3 = (**(code **)(*plVar2 + 8))
                      (plVar2,lVar3,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcc);
    if (lVar3 == 0) {
      return 0;
    }
    if ((param_1[1] != 0) && (param_1[1] != lVar3)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined4 *)(lVar3 + uVar4 * 4) = *(undefined4 *)(param_1[1] + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
    }
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,param_1[1],lVar3,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcd);
    if (lVar3 == 0) {
      return 0;
    }
  }
  param_1[1] = lVar3;
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  return 1;
}



// FUNCTION 145138000 FUN_145138000 body=43 status=ok
// SIG undefined FUN_145138000(void)

undefined8 * FUN_145138000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 145138030 FUN_145138030 body=262 status=ok
// SIG undefined FUN_145138030(void)

undefined8 * FUN_145138030(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0xf0,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkImpacterParams.cpp"
                      ,0x5c);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149c34838;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x10001;
    puVar1[4] = 0x7fffffffffffffff;
    puVar1[5] = 0x7fffffffffffffff;
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
    puVar1[0x12] = 0x3f800000;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145138140 FUN_145138140 body=172 status=ok
// SIG undefined FUN_145138140(void)

void FUN_145138140(longlong param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < param_3) {
    uVar7 = 1;
    do {
      if ((param_2 & uVar7) != 0) {
        uVar2 = *(uint *)(param_1 + 0x10);
        uVar3 = *(uint *)(param_1 + 0x14);
        if (uVar3 <= uVar2) {
          iVar4 = (uVar3 >> 1) + uVar3;
          if (uVar3 == 0) {
            iVar4 = 1;
          }
          cVar5 = FUN_145137f30(param_1,iVar4);
          if (cVar5 == '\0') goto LAB_1451381c4;
        }
        if (uVar2 < *(uint *)(param_1 + 0x14)) {
          uVar2 = *(uint *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x10) = uVar2 + 1;
          piVar1 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar6;
          }
        }
      }
LAB_1451381c4:
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    } while (iVar6 < param_3);
  }
  return;
}



// FUNCTION 1451381f0 FUN_1451381f0 body=94 status=ok
// SIG undefined FUN_1451381f0(void)

void FUN_1451381f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14c79d210;
  if (DAT_14c79d210 != (undefined8 *)0x0) {
    if (DAT_14c79d210[2] != 0) {
      *(undefined4 *)(DAT_14c79d210 + 3) = 0;
      (**(code **)(*(longlong *)puVar1[1] + 0x10))();
      puVar1[2] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    }
    DAT_14c79d210 = (undefined8 *)0x0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(puVar1 + 4));
    (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,puVar1);
  }
  return;
}



// FUNCTION 145138250 FUN_145138250 body=128 status=ok
// SIG undefined FUN_145138250(void)

undefined8 * FUN_145138250(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (DAT_14c79d210 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)
             (**(code **)(*param_1 + 8))
                       (param_1,0x48,
                        "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Sources\\AkImpacter\\AkMediaSelectionMgr.cpp"
                       );
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 4));
    DAT_14c79d210 = puVar1;
    puVar1[1] = param_1;
  }
  return DAT_14c79d210;
}



// FUNCTION 1451382d0 FUN_1451382d0 body=178 status=ok
// SIG undefined FUN_1451382d0(void)

void FUN_1451382d0(longlong param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined4 local_res18;
  
  piVar4 = *(int **)(param_1 + 0x10);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x18);
  local_res18 = CONCAT22(param_4,param_3);
  piVar1 = piVar4 + uVar6 * 2;
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 2) {
  }
  piVar5 = piVar4 + 1;
  if (piVar4 == piVar1) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    if (((uVar6 < *(uint *)(param_1 + 0x1c)) || (cVar3 = FUN_1451383e0(param_1 + 8), cVar3 != '\0'))
       && (uVar6 < *(uint *)(param_1 + 0x1c))) {
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 8);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = local_res18;
        *piVar1 = param_2;
      }
    }
    return;
  }
  *piVar5 = local_res18;
  return;
}



// FUNCTION 145138390 FUN_145138390 body=78 status=ok
// SIG undefined FUN_145138390(void)

void FUN_145138390(longlong param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 2;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
  }
  piVar3 = piVar2 + 1;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    *param_3 = 0xffff;
    *param_4 = 0xffff;
    return;
  }
  *param_3 = (short)*piVar3;
  *param_4 = *(undefined2 *)((longlong)piVar3 + 2);
  return;
}



// FUNCTION 1451383e0 FUN_1451383e0 body=223 status=ok
// SIG undefined FUN_1451383e0(void)

undefined8 FUN_1451383e0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 2);
  iVar4 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar4 = 1;
  }
  plVar3 = (longlong *)*param_1;
  lVar6 = (ulonglong)(iVar4 + uVar1) << 3;
  if (param_1[1] == 0) {
    lVar6 = (**(code **)(*plVar3 + 8))
                      (plVar3,lVar6,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcc);
    if (lVar6 != 0) {
      if ((param_1[1] != 0) && (param_1[1] != lVar6)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)(lVar6 + uVar5 * 8) = *(undefined8 *)(param_1[1] + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
      }
      goto LAB_1451384a1;
    }
  }
  else {
    lVar6 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,param_1[1],lVar6,
                       "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcd);
    if (lVar6 != 0) {
LAB_1451384a1:
      param_1[1] = lVar6;
      *(uint *)((longlong)param_1 + 0x14) = iVar4 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1451384c0 FUN_1451384c0 body=60 status=ok
// SIG undefined FUN_1451384c0(void)

void FUN_1451384c0(longlong *param_1,int param_2)

{
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x40))(param_1,0x145138102,0,0xb8,FUN_1451381f0,0x80,0);
  }
  return;
}



// FUNCTION 145138500 FUN_145138500 body=14 status=ok
// SIG undefined FUN_145138500(void)

undefined8 * FUN_145138500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c34960;
  return param_1;
}



// FUNCTION 145138510 FUN_145138510 body=232 status=ok
// SIG undefined FUN_145138510(void)

undefined8 * FUN_145138510(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0xb0,
                      "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\Partners\\McDSP\\McDSPFutzBox\\SoundEnginePlugin\\McDSPFutzBoxFXParams.cpp"
                      ,0x2b);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c34960;
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
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    puVar2[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar2[0x14] = uVar1;
    *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined1 *)(puVar2 + 4) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x34) = 1;
    *(undefined1 *)(puVar2 + 9) = 1;
    *(undefined1 *)((longlong)puVar2 + 100) = 1;
    *(undefined1 *)((longlong)puVar2 + 0x7c) = 1;
    *(undefined1 *)(puVar2 + 0x11) = 1;
    *(undefined1 *)(puVar2 + 0x13) = 1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145138700 FUN_145138700 body=56 status=ok
// SIG undefined FUN_145138700(void)

undefined8 FUN_145138700(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145138740 FUN_145138740 body=497 status=ok
// SIG undefined FUN_145138740(void)

undefined8 FUN_145138740(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  
  *(undefined1 *)(param_1 + 0x21) = *param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x35) = param_2[0x19];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x49) = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x37);
  *(undefined1 *)(param_1 + 0x65) = param_2[0x3b];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x89) = param_2[0x54];
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x7d) = param_2[0x5d];
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined1 *)(param_1 + 0x99) = param_2[0x72];
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x73);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x77);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x7b);
  fVar1 = powf(10.0,*(float *)(param_2 + 0x7f) * 0.05);
  *(float *)(param_1 + 0x9c) = fVar1;
  fVar1 = powf(10.0,*(float *)(param_2 + 0x83) * 0.05);
  *(float *)(param_1 + 0xa0) = fVar1;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  return 1;
}



// FUNCTION 145138940 FUN_145138940 body=1158 status=ok
// SIG undefined FUN_145138940(void)

undefined4 FUN_145138940(longlong param_1,undefined2 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    *(bool *)(param_1 + 0x35) = cVar1 != '\0';
    return 1;
  case 1:
    *(float *)(param_1 + 0x24) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 0x28) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  case 3:
    *(float *)(param_1 + 0x2c) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  case 4:
    *(float *)(param_1 + 0x30) = *param_3;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return 1;
  default:
    return 0x1f;
  case 10:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(bool *)(param_1 + 0x7d) = cVar1 != '\0';
    return 1;
  case 0xb:
    *(float *)(param_1 + 0x68) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xc:
    *(float *)(param_1 + 0x6c) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xd:
    *(float *)(param_1 + 0x70) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xe:
    *(float *)(param_1 + 0x74) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0xf:
    *(float *)(param_1 + 0x78) = *param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return 1;
  case 0x14:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x88) = 1;
    *(bool *)(param_1 + 0x89) = cVar1 != '\0';
    return 1;
  case 0x15:
    *(float *)(param_1 + 0x80) = *param_3;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return 1;
  case 0x16:
    *(float *)(param_1 + 0x84) = *param_3;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return 1;
  case 0x1e:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(bool *)(param_1 + 0x99) = cVar1 != '\0';
    return 1;
  case 0x1f:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(int *)(param_1 + 0x8c) = (int)fVar2;
    return 1;
  case 0x20:
    fVar2 = *param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(int *)(param_1 + 0x90) = (int)fVar2;
    return 1;
  case 0x21:
    *(float *)(param_1 + 0x94) = *param_3;
    *(undefined1 *)(param_1 + 0x98) = 1;
    return 1;
  case 0x28:
    fVar2 = powf(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0x9c) = fVar2;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 1;
  case 0x29:
    fVar2 = powf(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0xa0) = fVar2;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 1;
  case 0x2a:
    *(float *)(param_1 + 0xa4) = *param_3;
    *(undefined1 *)(param_1 + 0xa8) = 1;
    return 1;
  case 0x32:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(bool *)(param_1 + 0x21) = cVar1 != '\0';
    return 1;
  case 0x33:
    *(float *)(param_1 + 8) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x34:
    *(float *)(param_1 + 0xc) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x35:
    *(float *)(param_1 + 0x10) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x36:
    *(float *)(param_1 + 0x14) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x37:
    *(float *)(param_1 + 0x18) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x38:
    *(float *)(param_1 + 0x1c) = *param_3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x3c:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    *(bool *)(param_1 + 0x49) = cVar1 != '\0';
    return 1;
  case 0x3d:
    *(float *)(param_1 + 0x38) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x3e:
    *(float *)(param_1 + 0x3c) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x3f:
    *(float *)(param_1 + 0x40) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x40:
    *(float *)(param_1 + 0x44) = *param_3;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  case 0x46:
    cVar1 = *(char *)param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    *(bool *)(param_1 + 0x65) = cVar1 != '\0';
    return 1;
  case 0x47:
    *(float *)(param_1 + 0x4c) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x48:
    *(float *)(param_1 + 0x50) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x49:
    *(float *)(param_1 + 0x54) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x4a:
    *(float *)(param_1 + 0x58) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x4b:
    *(float *)(param_1 + 0x5c) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 0x4c:
    *(float *)(param_1 + 0x60) = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  }
}



// FUNCTION 145138ec0 FUN_145138ec0 body=43 status=ok
// SIG undefined FUN_145138ec0(void)

undefined8 * FUN_145138ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 145138ef0 FUN_145138ef0 body=20 status=ok
// SIG undefined FUN_145138ef0(void)

undefined4 * FUN_145138ef0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 145138f10 FUN_145138f10 body=3 status=ok
// SIG undefined FUN_145138f10(void)

void FUN_145138f10(void)

{
  return;
}



// FUNCTION 145138f20 FUN_145138f20 body=114 status=ok
// SIG undefined FUN_145138f20(void)

undefined8 FUN_145138f20(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*param_2 + 8))
                           (param_2,param_3,
                            "C:\\Jenkins\\ws\\wwise_v2022.1\\Wwise\\Partners\\McDSP\\Common\\SoundEngine\\PooledMemoryAllocator.cpp"
                            ,0x22);
  *(void **)(param_1 + 4) = _Dst;
  *(void **)(param_1 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  memset(_Dst,0,param_3);
  *param_1 = (int)param_3;
  *(ulonglong *)(param_1 + 6) = (param_3 & 0xffffffff) + *(longlong *)(param_1 + 4);
  return 1;
}



// FUNCTION 145138fa0 FUN_145138fa0 body=52 status=ok
// SIG undefined FUN_145138fa0(void)

void FUN_145138fa0(undefined4 *param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 2) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 145138fe0 FUN_145138fe0 body=14 status=ok
// SIG undefined FUN_145138fe0(void)

undefined8 FUN_145138fe0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  return *(undefined8 *)(param_1 + 2);
}



// FUNCTION 145138ff0 FUN_145138ff0 body=12 status=ok
// SIG undefined FUN_145138ff0(void)

void FUN_145138ff0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x10) = param_2 + *(longlong *)(param_1 + 0x10);
  return;
}



// FUNCTION 145139000 FUN_145139000 body=10 status=ok
// SIG undefined FUN_145139000(void)

undefined4 * FUN_145139000(undefined4 *param_1)

{
  *param_1 = 0xbf7c9;
  return param_1;
}



// FUNCTION 145139010 FUN_145139010 body=209 status=ok
// SIG undefined FUN_145139010(void)

void FUN_145139010(int *param_1,float *param_2,ulonglong param_3)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = param_2 + (param_3 & 0xffffffff);
  if (param_2 < pfVar1) {
    if (3 < (param_3 & 0xffffffff)) {
      iVar2 = *param_1;
      do {
        iVar2 = iVar2 * 0x343fd + 0x269ec3;
        *param_2 = (float)iVar2 * 2.3283064e-10;
        iVar2 = iVar2 * 0x343fd + 0x269ec3;
        param_2[1] = (float)iVar2 * 2.3283064e-10;
        iVar2 = iVar2 * 0x343fd + 0x269ec3;
        param_2[2] = (float)iVar2 * 2.3283064e-10;
        iVar2 = iVar2 * 0x343fd + 0x269ec3;
        param_2[3] = (float)iVar2 * 2.3283064e-10;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      *param_1 = iVar2;
      if (pfVar1 <= param_2) {
        return;
      }
    }
    do {
      iVar2 = *param_1 * 0x343fd + 0x269ec3;
      *param_1 = iVar2;
      *param_2 = (float)iVar2 * 2.3283064e-10;
      param_2 = param_2 + 1;
    } while (param_2 < pfVar1);
  }
  return;
}



// FUNCTION 1451390f0 FUN_1451390f0 body=832 status=ok
// SIG undefined FUN_1451390f0(void)

undefined8 * FUN_1451390f0(undefined8 *param_1,longlong param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  float local_148;
  float fStack_140;
  float local_138;
  float fStack_130;
  float local_128;
  float fStack_120;
  float local_118;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar1 = *(float *)(param_1 + 2);
  fVar2 = *(float *)((longlong)param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 7);
  fVar4 = *(float *)((longlong)param_1 + 0x4c);
  fVar13 = *(float *)(param_1 + 0xc);
  local_148 = *(float *)((longlong)param_1 + 100);
  fVar14 = *(float *)(param_1 + 0xd);
  fStack_140 = *(float *)((longlong)param_1 + 0x6c);
  local_138 = *(float *)((longlong)param_1 + 0x7c);
  fVar11 = *(float *)(param_1 + 0x10);
  fStack_130 = *(float *)((longlong)param_1 + 0x84);
  local_128 = *(float *)((longlong)param_1 + 0x94);
  fStack_120 = *(float *)((longlong)param_1 + 0x9c);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x14);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x1c);
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = *(undefined8 *)((longlong)param_1 + 0x3c);
  uVar10 = *(undefined8 *)((longlong)param_1 + 0x44);
  fVar15 = *(float *)(param_1 + 0x15);
  local_118 = *(float *)((longlong)param_1 + 0xac);
  fVar12 = *(float *)(param_1 + 0x16);
  fStack_110 = *(float *)((longlong)param_1 + 0xb4);
  fVar16 = *(float *)(param_1 + 0xf);
  fVar18 = *(float *)(param_1 + 0x12);
  fVar19 = *(float *)(param_1 + 0x13);
  if (param_4 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fStack_fc = (float)((ulonglong)param_1[1] >> 0x20);
    fStack_100 = (float)param_1[1];
    fStack_104 = (float)((ulonglong)*param_1 >> 0x20);
    local_108 = (float)*param_1;
    fVar17 = fStack_140;
    fVar20 = local_148;
    fVar21 = fStack_130;
    fVar22 = local_138;
    fVar23 = fStack_120;
    fVar24 = local_128;
    fVar25 = fStack_110;
    fVar26 = local_118;
    do {
      fStack_110 = fVar12;
      local_118 = fVar15;
      fStack_120 = fVar19;
      local_128 = fVar18;
      fStack_130 = fVar11;
      local_138 = fVar16;
      fStack_140 = fVar14;
      local_148 = fVar13;
      fVar13 = *(float *)(param_2 + (longlong)param_3);
      fStack_e8 = (float)uVar6;
      fStack_d0 = (float)uVar8;
      fStack_b8 = (float)uVar10;
      fStack_ec = (float)((ulonglong)uVar5 >> 0x20);
      local_f0 = (float)uVar5;
      fVar14 = ((local_148 * fStack_104 + local_108 * fVar13 + fVar20 * fStack_100) -
               fStack_140 * fStack_fc) - fVar17 * fVar1;
      fStack_e4 = (float)((ulonglong)uVar6 >> 0x20);
      fStack_d4 = (float)((ulonglong)uVar7 >> 0x20);
      local_d8 = (float)uVar7;
      fVar11 = ((local_138 * fStack_ec + local_f0 * fVar14 + fVar22 * fStack_e8) -
               fStack_130 * fStack_e4) - fVar21 * fVar2;
      fStack_cc = (float)((ulonglong)uVar8 >> 0x20);
      fStack_bc = (float)((ulonglong)uVar9 >> 0x20);
      local_c0 = (float)uVar9;
      fVar15 = ((local_128 * fStack_d4 + local_d8 * fVar11 + fVar24 * fStack_d0) -
               fStack_120 * fStack_cc) - fVar23 * fVar3;
      fStack_b4 = (float)((ulonglong)uVar10 >> 0x20);
      fVar12 = ((local_118 * fStack_bc + local_c0 * fVar15 + fVar26 * fStack_b8) -
               fStack_110 * fStack_b4) - fVar25 * fVar4;
      *param_3 = fVar12;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      fVar16 = fVar14;
      fVar18 = fVar11;
      fVar17 = fStack_140;
      fVar19 = fVar15;
      fVar20 = local_148;
      fVar21 = fStack_130;
      fVar22 = local_138;
      fVar23 = fStack_120;
      fVar24 = local_128;
      fVar25 = fStack_110;
      fVar26 = local_118;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 0xc) = fVar13;
  *(float *)((longlong)param_1 + 100) = local_148;
  *(float *)(param_1 + 0xd) = fVar14;
  *(float *)((longlong)param_1 + 0x6c) = fStack_140;
  *(float *)(param_1 + 0xf) = fVar16;
  *(float *)((longlong)param_1 + 0x7c) = local_138;
  *(float *)(param_1 + 0x10) = fVar11;
  *(float *)((longlong)param_1 + 0x84) = fStack_130;
  *(float *)(param_1 + 0x12) = fVar18;
  *(float *)((longlong)param_1 + 0x94) = local_128;
  *(float *)(param_1 + 0x13) = fVar19;
  *(float *)((longlong)param_1 + 0x9c) = fStack_120;
  *(float *)(param_1 + 0x15) = fVar15;
  *(float *)((longlong)param_1 + 0xac) = local_118;
  *(float *)(param_1 + 0x16) = fVar12;
  *(float *)((longlong)param_1 + 0xb4) = fStack_110;
  return param_1 + 0x18;
}



// FUNCTION 145139430 FUN_145139430 body=23 status=ok
// SIG undefined FUN_145139430(void)

undefined8 FUN_145139430(undefined8 param_1)

{
  FUN_1453ce1e0();
  return param_1;
}



// FUNCTION 145139450 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 145139460 FUN_145139460 body=7 status=ok
// SIG undefined FUN_145139460(void)

int FUN_145139460(undefined8 param_1,int param_2)

{
  return param_2 * 0xc0;
}



// FUNCTION 145139470 FUN_145139470 body=87 status=ok
// SIG undefined FUN_145139470(void)

undefined8 FUN_145139470(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  param_1[4] = 0;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0xc0) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0xc0) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1451394d0 FUN_1451394d0 body=693 status=ok
// SIG undefined FUN_1451394d0(void)

void FUN_1451394d0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_88 [112];
  
  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
    auVar10._0_8_ = (double)param_2[1] * 0.01;
    auVar10._8_8_ = 0;
    if (0.0 < auVar10._0_8_) {
      auVar10 = sqrtpd(auVar10,auVar10);
    }
    uVar11 = SUB84(1.414 - auVar10._0_8_ * 1.1312,0);
    FUN_1453ce740(*param_1,*param_2,uVar11,local_88);
    if (*(int *)(param_2 + 2) != 1) goto LAB_145139532;
    FUN_1453ce740(*param_1,*param_2,uVar11,local_118);
  }
  else {
    FUN_1453ce470(local_88);
LAB_145139532:
    FUN_1453ce470(local_118);
  }
  uVar2 = 0;
  uVar4 = uVar2;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_88,*(longlong *)(param_1 + 2) + uVar4 * 0xc0,0);
      FUN_1453ce3d0(param_1,local_118,*(longlong *)(param_1 + 2) + uVar4 * 0xc0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  if (*(char *)((longlong)param_3 + 0x14) == '\0') {
    auVar9._0_8_ = (double)param_3[1] * 0.01;
    auVar9._8_8_ = 0;
    if (0.0 < auVar9._0_8_) {
      auVar10 = sqrtpd(auVar9,auVar9);
      auVar9._0_8_ = auVar10._0_8_;
    }
    uVar11 = SUB84(1.414 - auVar9._0_8_ * 1.1312,0);
    FUN_1453ce8a0(*param_1,*param_3,uVar11,local_88);
    if (*(int *)(param_3 + 2) == 1) {
      FUN_1453ce8a0(*param_1,*param_3,uVar11,local_118);
      goto LAB_1451395b1;
    }
  }
  else {
    FUN_1453ce470(local_88);
  }
  FUN_1453ce470(local_118);
LAB_1451395b1:
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_88,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,10);
      FUN_1453ce3d0(param_1,local_118,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,0xf);
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  puVar1 = *(undefined8 **)(param_1 + 2);
  local_e8 = *puVar1;
  uStack_e0 = puVar1[1];
  local_d8 = *(undefined4 *)(puVar1 + 2);
  local_c0 = *(undefined4 *)((longlong)puVar1 + 0x24);
  local_d0 = *(undefined8 *)((longlong)puVar1 + 0x14);
  uStack_c8 = *(undefined8 *)((longlong)puVar1 + 0x1c);
  local_a8 = *(undefined4 *)(puVar1 + 7);
  local_90 = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_b8 = puVar1[5];
  uStack_b0 = puVar1[6];
  local_a0 = *(undefined8 *)((longlong)puVar1 + 0x3c);
  uStack_98 = *(undefined8 *)((longlong)puVar1 + 0x44);
  fVar5 = (float)FUN_1453cede0(&local_e8);
  fVar6 = (float)FUN_1453cede0(&local_d0);
  fVar7 = (float)FUN_1453cede0(&local_b8);
  fVar8 = (float)FUN_1453cede0(&local_a0);
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  if ((fVar7 == fVar6) || (fVar7 == fVar8)) {
    fVar7 = fVar7 * 1.6931472;
  }
  param_1[4] = (int)(longlong)(fVar7 * 6.91);
  return;
}



// FUNCTION 145139790 FUN_145139790 body=27 status=ok
// SIG undefined FUN_145139790(void)

longlong FUN_145139790(longlong param_1)

{
  FUN_14513a2e0();
  return param_1 + 0x498;
}



// FUNCTION 1451397b0 FUN_1451397b0 body=857 status=ok
// SIG undefined FUN_1451397b0(void)

void FUN_1451397b0(undefined4 *param_1,double param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar6;
  undefined8 local_res8;
  
  param_2 = param_2 * 0.01;
  if (0.0 < param_2) {
    param_2 = SQRT(param_2);
  }
  switch(param_3) {
  case 0:
    uVar5 = FUN_1453cf600(*param_1,param_2 * 7.800000000000001 + 4.35);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,0.85 - param_2 * 0.5);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 1:
    uVar5 = FUN_1453cf600(*param_1,param_2 * 17.1 + 1.15);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,0.25 - param_2 * 0.15);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 2:
    uVar5 = FUN_1453cf600(*param_1,2.35 - param_2 * 0.9500000000000002);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,0.35 - param_2 * 0.09999999999999998);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 3:
    uVar5 = FUN_1453cf600(*param_1,0.95 - param_2 * 0.19999999999999996);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,0.25 - param_2 * 0.15);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 4:
    uVar5 = FUN_1453cf600(*param_1,8.25 - param_2 * 7.9);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,0x3fd0000000000000);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 5:
    uVar5 = FUN_1453cf600(*param_1,2.15 - param_2 * 1.9);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,0.5 - param_2 * 0.3);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 6:
    dVar6 = 0.7 - param_2 * 0.5499999999999999;
    uVar5 = FUN_1453cf600(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 7:
    dVar6 = 0.35 - param_2 * 0.24999999999999997;
    uVar5 = FUN_1453cf600(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 8:
    dVar6 = 0.25 - param_2 * 0.2;
    uVar5 = FUN_1453cf600(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  case 9:
    dVar6 = 0.1 - param_2 * 0.09000000000000001;
    uVar5 = FUN_1453cf600(*param_1,dVar6);
    uVar3 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = FUN_1453cf5e0(*param_1,dVar6);
    uVar4 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    break;
  default:
    uVar4 = (undefined4)local_res8;
    uVar8 = (undefined4)((ulonglong)local_res8 >> 0x20);
    uVar3 = uVar4;
    uVar7 = uVar8;
  }
  dVar6 = (double)FUN_1453cf5e0(*param_1,0x3f847ae147ae147b);
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      lVar1 = (ulonglong)uVar2 * 0x498;
      FUN_1453ce210(param_1,CONCAT44(uVar8,uVar4),*(longlong *)(param_1 + 2) + lVar1,8);
      FUN_1453ce210(param_1,dVar6 - (double)CONCAT44(uVar8,uVar4),*(longlong *)(param_1 + 2) + lVar1
                    ,9);
      FUN_1453ce210(param_1,CONCAT44(uVar7,uVar3),*(longlong *)(param_1 + 2) + lVar1,7);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 145139b40 FUN_145139b40 body=31 status=ok
// SIG undefined FUN_145139b40(void)

longlong FUN_145139b40(longlong param_1)

{
  FUN_1453ce1e0();
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 145139b60 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 145139b70 FUN_145139b70 body=7 status=ok
// SIG undefined FUN_145139b70(void)

int FUN_145139b70(undefined8 param_1,int param_2)

{
  return param_2 * 0x498;
}



// FUNCTION 145139b80 FUN_145139b80 body=80 status=ok
// SIG undefined FUN_145139b80(void)

undefined8 FUN_145139b80(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x498) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x498) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 145139bd0 FUN_145139bd0 body=1756 status=ok
// SIG undefined FUN_145139bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145139bd0(undefined4 *param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar16;
  double dVar17;
  double local_res8;
  undefined1 local_c8 [160];
  
  uVar9 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce210(param_1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
  }
  auVar3 = _DAT_149934d80;
  uVar16 = 0x3ff0000000000000;
  dVar11 = 1.0;
  if (*(char *)((longlong)param_2 + 0x1c) == '\0') {
    uVar16 = 0x3f704e74cc73ee83;
    dVar11 = *param_2 * 0.09 + 1.0;
  }
  puVar10 = (undefined8 *)&DAT_14c79d220;
  auVar15._8_8_ = dVar11;
  auVar15._0_8_ = dVar11;
  divpd(_DAT_149934d80,auVar15);
  iVar5 = 0;
  do {
    auVar14._0_8_ = (double)iVar5 * 0.00390625;
    auVar14._8_8_ = (double)(iVar5 + 1) * 0.00390625;
    auVar2._8_4_ = (int)uVar16;
    auVar2._0_8_ = uVar16;
    auVar2._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    auVar15 = divpd(auVar14,auVar2);
    uVar12 = thunk_FUN_145579b90(auVar15._0_8_ + auVar3._0_8_);
    *puVar10 = uVar12;
    puVar10[1] = extraout_XMM0_Qb;
    puVar10 = puVar10 + 2;
    iVar5 = iVar5 + 2;
  } while (iVar5 < 0x100);
  uVar8 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce250(param_1,&DAT_14c79d220,0x100,*(longlong *)(param_1 + 2) + 0x50 + uVar8 * 0x498,
                    0x12);
      uVar4 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar4;
    } while (uVar4 < (uint)param_1[1]);
    uVar6 = 0;
    uVar4 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_1453ce230(param_1,0x12,(ulonglong)uVar6 * 0x498 + *(longlong *)(param_1 + 2),3);
        uVar4 = param_1[1];
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  uVar7 = 0;
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1);
      uVar6 = param_1[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  dVar13 = 1.0;
  dVar17 = 0.0;
  dVar11 = 0.0;
  if (*(char *)((longlong)param_2 + 0x1c) == '\0') {
    dVar13 = 0.003981071705534969;
    dVar11 = *param_2 * 0.01;
    dVar17 = dVar11 * *(double *)(&DAT_14c72f640 + (longlong)*(int *)(param_2 + 3) * 8);
  }
  iVar5 = (int)(dVar11 * 20.0);
  dVar1 = *(double *)(&DAT_14c72f690 + (longlong)iVar5 * 8);
  dVar13 = pow((1.0 - dVar13) / dVar13 + 1.0,1.0 - 1.0 / (dVar11 * 9.0 + 1.0));
  dVar11 = log10(((dVar13 - 1.0) * dVar11 + 1.0) *
                 ((*(double *)(&DAT_14c72f698 + (longlong)iVar5 * 8) - dVar1) *
                  (dVar11 * 20.0 - (double)iVar5) + dVar1));
  pow(10.0,dVar11 + dVar17 * 0.05);
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      FUN_1453ce210(param_1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
  }
  FUN_1451397b0(param_1,*param_2,*(undefined4 *)(param_2 + 3));
  dVar11 = local_res8;
  dVar17 = local_res8;
  switch(*(undefined4 *)(param_2 + 3)) {
  case 0:
    local_res8 = 150.0;
    dVar11 = 100.0;
    dVar17 = 17500.0;
    break;
  case 1:
    local_res8 = 300.0;
    dVar11 = 100.0;
    dVar17 = 20000.0;
    break;
  case 2:
    local_res8 = 300.0;
    dVar11 = 300.0;
    dVar17 = 10000.0;
    break;
  case 3:
    local_res8 = 300.0;
    dVar11 = 150.0;
    dVar17 = 12000.0;
    break;
  case 4:
    local_res8 = 200.0;
    dVar11 = 100.0;
    dVar17 = 14000.0;
    break;
  case 5:
    local_res8 = 300.0;
    dVar11 = 150.0;
    dVar17 = 16000.0;
    break;
  case 6:
    local_res8 = 400.0;
    dVar11 = 200.0;
    dVar17 = 18000.0;
    break;
  case 7:
    local_res8 = 1000.0;
    dVar11 = 100.0;
    dVar17 = 20000.0;
    break;
  case 8:
    local_res8 = 2000.0;
    dVar11 = 200.0;
    dVar17 = 20000.0;
    break;
  case 9:
    local_res8 = 1500.0;
    dVar11 = 150.0;
    dVar17 = 20000.0;
  }
  FUN_1453ce810(*param_1,(((dVar17 - local_res8) * param_2[1] * 0.01 + local_res8) - dVar11) *
                         *param_2 * 0.01 + dVar11,&DAT_14c79da20);
  uVar8 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce430(param_1,&DAT_14c79da20,uVar8 * 0x498 + *(longlong *)(param_1 + 2),4);
      uVar4 = param_1[1];
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
    } while (uVar6 < uVar4);
  }
  uVar7 = 0;
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1);
      uVar6 = param_1[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      FUN_1453ce210(param_1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
  }
  FUN_1453ce6b0(*param_1);
  uVar6 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_c8,(ulonglong)uVar6 * 0x498 + *(longlong *)(param_1 + 2),0xc);
      uVar4 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  uVar7 = 0;
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1);
      FUN_1453ce210(param_1);
      uVar6 = param_1[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar7 = 0;
  uVar4 = 0;
  if (uVar6 != 0) {
    do {
      FUN_1453ce230(param_1,1,(ulonglong)uVar7 * 0x498 + *(longlong *)(param_1 + 2),0x11);
      uVar4 = param_1[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[1]);
    if (param_1[1] != 0) {
      do {
        FUN_1453ce210(param_1);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)param_1[1]);
    }
  }
  return;
}



// FUNCTION 14513a2e0 FUN_14513a2e0 body=614 status=ok
// SIG undefined FUN_14513a2e0(void)

void FUN_14513a2e0(longlong param_1,float *param_2,float *param_3,int param_4)

{
  uint uVar1;
  longlong in_RAX;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  while (param_4 != 0) {
    param_4 = param_4 + -1;
    fVar8 = *(float *)(param_1 + 0x50) * *param_2;
    param_2 = param_2 + 1;
    *(float *)(param_1 + 0x54) = fVar8;
    fVar4 = *(float *)(param_1 + 0x58);
    fVar3 = ABS(fVar8);
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    fVar3 = fVar3 - *(float *)(param_1 + 8);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0x58) = fVar3;
    fVar3 = (fVar4 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x10) * fVar3) * 0.5 -
            *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x5c) = fVar3;
    fVar6 = fVar3 * 255.0;
    iVar2 = (int)fVar6;
    fVar4 = fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
      auVar5._4_4_ = fVar6;
      auVar5._0_4_ = fVar6;
      auVar5._8_8_ = 0;
      uVar1 = movmskps((int)in_RAX,auVar5);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar7 = *(float *)(param_1 + 0x1c);
    in_RAX = (longlong)(int)fVar6;
    fVar4 = ((fVar6 - fVar4) * *(float *)(param_1 + 0x50 + (longlong)((int)fVar6 + 0x13) * 4) -
            ((fVar6 - fVar4) - *(float *)(param_1 + 0x60)) * *(float *)(param_1 + 0x98 + in_RAX * 4)
            ) - *(float *)(param_1 + 100);
    if (fVar4 < 0.0) {
      fVar7 = *(float *)(param_1 + 0x20);
    }
    fVar3 = (fVar3 * *(float *)(param_1 + 0x24) + fVar7) * fVar4 + *(float *)(param_1 + 100);
    fVar4 = 0.0;
    *(float *)(param_1 + 100) = fVar3;
    fVar3 = fVar3 * fVar8 * *(float *)(param_1 + 0x6c);
    if (fVar3 < *(float *)(param_1 + 0x2c)) {
      fVar4 = *(float *)(param_1 + 0x70);
    }
    fVar6 = *(float *)(param_1 + 0x74);
    fVar3 = (fVar4 + 1.0) * fVar3;
    if (1.0 <= fVar3) {
      fVar3 = 1.0;
    }
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    *(float *)(param_1 + 0x74) = fVar3;
    fVar4 = *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = fVar6;
    fVar7 = *(float *)(param_1 + 0x80);
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x7c);
    fVar4 = ((fVar3 * *(float *)(param_1 + 0x30) + fVar6 * *(float *)(param_1 + 0x34) +
             fVar4 * *(float *)(param_1 + 0x38)) -
            *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x3c)) -
            *(float *)(param_1 + 0x40) * fVar7;
    *(float *)(param_1 + 0x7c) = fVar4;
    *param_3 = fVar8 * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * fVar4 * *(float *)(param_1 + 0x8c);
    param_3 = param_3 + 1;
  }
  return;
}



// FUNCTION 14513a550 FUN_14513a550 body=292 status=ok
// SIG undefined FUN_14513a550(void)

undefined8 * FUN_14513a550(undefined8 *param_1,longlong param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar1 = *(float *)(param_1 + 2);
  fVar2 = *(float *)(param_1 + 3);
  fVar3 = *(float *)((longlong)param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 4);
  fVar4 = *(float *)((longlong)param_1 + 0x24);
  if (param_4 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fStack_7c = (float)((ulonglong)param_1[1] >> 0x20);
    fStack_80 = (float)param_1[1];
    fStack_84 = (float)((ulonglong)*param_1 >> 0x20);
    local_88 = (float)*param_1;
    fVar6 = fVar4;
    fVar7 = fVar3;
    do {
      fVar3 = fVar2;
      fVar4 = fVar5;
      fVar2 = *(float *)(param_2 + (longlong)param_3);
      fVar5 = ((fVar3 * fStack_84 + local_88 * fVar2 + fVar7 * fStack_80) - fVar4 * fStack_7c) -
              fVar6 * fVar1;
      *param_3 = fVar5;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      fVar6 = fVar4;
      fVar7 = fVar3;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 3) = fVar2;
  *(float *)((longlong)param_1 + 0x1c) = fVar3;
  *(float *)(param_1 + 4) = fVar5;
  *(float *)((longlong)param_1 + 0x24) = fVar4;
  return param_1 + 6;
}



// FUNCTION 14513a680 FUN_14513a680 body=31 status=ok
// SIG undefined FUN_14513a680(void)

longlong FUN_14513a680(longlong param_1)

{
  FUN_1453ce1e0();
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14513a6a0 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 14513a6b0 FUN_14513a6b0 body=7 status=ok
// SIG undefined FUN_14513a6b0(void)

int FUN_14513a6b0(undefined8 param_1,int param_2)

{
  return param_2 * 0x30;
}



// FUNCTION 14513a6c0 FUN_14513a6c0 body=87 status=ok
// SIG undefined FUN_14513a6c0(void)

undefined8 FUN_14513a6c0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  param_1[4] = 0;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x30) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x30) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14513a720 FUN_14513a720 body=363 status=ok
// SIG undefined FUN_14513a720(void)

void FUN_14513a720(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_40 [56];
  
  FUN_1453ce470(local_40);
  if (*(char *)((longlong)param_2 + 0x1c) == '\0') {
    iVar1 = *(int *)(param_2 + 3);
    if (iVar1 == 0) {
      auVar7._0_8_ = (double)param_2[1] * 0.01;
      auVar7._8_8_ = 0;
      if (0.0 < auVar7._0_8_) {
        auVar7 = sqrtpd(auVar7,auVar7);
      }
      FUN_1453ce740(*param_1,*param_2,1.414 - auVar7._0_8_ * 1.1312,local_40);
    }
    else if (iVar1 == 1) {
      FUN_1453ce4a0(*param_1,*param_2,
                    (double)param_2[1] * (double)param_2[1] * 0.0009000000000000001 + 1.0,param_2[2]
                    ,local_40);
    }
    else if (iVar1 == 2) {
      auVar6._0_8_ = (double)param_2[1] * 0.01;
      auVar6._8_8_ = 0;
      if (0.0 < auVar6._0_8_) {
        auVar7 = sqrtpd(auVar6,auVar6);
        auVar6._0_8_ = auVar7._0_8_;
      }
      FUN_1453ce8a0(*param_1,*param_2,1.414 - auVar6._0_8_ * 1.1312,local_40);
    }
  }
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_40,uVar4 * 0x30 + *(longlong *)(param_1 + 2),0);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  puVar2 = *(undefined4 **)(param_1 + 2);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_48 = puVar2[4];
  fVar5 = (float)FUN_1453cede0(&local_58);
  param_1[4] = (int)(longlong)(fVar5 * 6.91);
  return;
}



// FUNCTION 14513a890 FUN_14513a890 body=29 status=ok
// SIG undefined FUN_14513a890(void)

longlong FUN_14513a890(longlong param_1)

{
  FUN_14513ad90();
  return param_1 + 0xa8;
}



// FUNCTION 14513a8b0 FUN_14513a8b0 body=31 status=ok
// SIG undefined FUN_14513a8b0(void)

longlong FUN_14513a8b0(longlong param_1)

{
  FUN_1453ce1e0();
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14513a8d0 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 14513a8e0 FUN_14513a8e0 body=7 status=ok
// SIG undefined FUN_14513a8e0(void)

int FUN_14513a8e0(undefined8 param_1,int param_2)

{
  return param_2 * 0xa8;
}



// FUNCTION 14513a8f0 FUN_14513a8f0 body=177 status=ok
// SIG undefined FUN_14513a8f0(void)

undefined8 FUN_14513a8f0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0xa8) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0xa8) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + 0x54 + (ulonglong)uVar3 * 0xa8,0x11);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
    return 1;
  }
  return 0x34;
}



// FUNCTION 14513a9b0 FUN_14513a9b0 body=987 status=ok
// SIG undefined FUN_14513a9b0(void)

void FUN_14513a9b0(undefined4 *param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_68 [80];
  
  uVar6 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce230(param_1,0,(ulonglong)uVar2 * 0xa8 + *(longlong *)(param_1 + 2),0);
      uVar3 = param_1[1];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar9 = 0;
  uVar10 = 0;
  if ((*(char *)(param_2 + 6) == '\0') && (-143.0 <= *param_2 - 6.0)) {
    dVar7 = pow(10.0,(*param_2 - 6.0) * 0.05);
    uVar9 = SUB84(dVar7,0);
    uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1453ce210(param_1,CONCAT44(uVar10,uVar9),*(longlong *)(param_1 + 2) + 0x54 + uVar4 * 0xa8,
                    1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  cVar1 = *(char *)(param_2 + 6);
  dVar7 = param_2[1];
  FUN_1453ce470(local_68);
  if (cVar1 == '\0') {
    FUN_1453ce740(*param_1,dVar7,0x76c8b439,local_68);
  }
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_68,uVar4 * 0xa8 + *(longlong *)(param_1 + 2),1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  cVar1 = *(char *)(param_2 + 6);
  dVar7 = param_2[2];
  FUN_1453ce470(local_68);
  if (cVar1 == '\0') {
    FUN_1453ce8a0(*param_1,dVar7,0x76c8b439,local_68);
  }
  uVar2 = 0;
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_68,(ulonglong)uVar2 * 0xa8 + *(longlong *)(param_1 + 2),6);
      uVar3 = param_1[1];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar4 = 0;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1453ce230(param_1,0xe,uVar4 * 0xa8 + *(longlong *)(param_1 + 2),0x12);
      uVar2 = param_1[1];
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar2);
  }
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1453ce230(param_1,0,(ulonglong)uVar5 * 0xa8 + *(longlong *)(param_1 + 2),0xb);
      uVar3 = param_1[1];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  dVar7 = pow(10.0,param_2[3] * 0.05);
  uVar4 = 0;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1453ce210(param_1,dVar7,uVar4 * 0xa8 + *(longlong *)(param_1 + 2),0xc);
      uVar2 = param_1[1];
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar2);
  }
  dVar7 = pow(10.0,param_2[4] * 0.05);
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1453ce210(param_1,dVar7,(ulonglong)uVar5 * 0xa8 + *(longlong *)(param_1 + 2),0xe);
      uVar3 = param_1[1];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      FUN_1453ce210(param_1,0x3ff0000000000000,*(longlong *)(param_1 + 2) + uVar4 * 0xa8 + 0x54,0xf)
      ;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  uVar8 = FUN_1453cf5e0(*param_1,param_2[5]);
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce210(param_1,uVar8,(ulonglong)uVar3 * 0xa8 + *(longlong *)(param_1 + 2),0x11);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1]);
  }
  uVar9 = FUN_1453cf620(*param_1,0x3ff0000000000000);
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce230(param_1,uVar9,uVar4 * 0xa8 + *(longlong *)(param_1 + 2),0xf);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[1]);
  }
  uVar8 = FUN_1453cf600(*param_1,0x3ff0000000000000);
  if (param_1[1] != 0) {
    do {
      FUN_1453ce210(param_1,uVar8,(ulonglong)uVar6 * 0xa8 + *(longlong *)(param_1 + 2),0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 14513ad90 FUN_14513ad90 body=724 status=ok
// SIG undefined FUN_14513ad90(void)

void FUN_14513ad90(float *param_1,longlong param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  uVar3 = *(undefined8 *)(param_1 + 1);
  uVar4 = *(undefined8 *)(param_1 + 3);
  fVar1 = param_1[5];
  fVar12 = param_1[0x18];
  fVar11 = param_1[0x19];
  fVar13 = param_1[0x1a];
  fVar2 = param_1[10];
  uVar5 = *(undefined8 *)(param_1 + 6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  fVar10 = param_1[0x1d];
  fVar8 = param_1[0x1e];
  fVar14 = param_1[0x1f];
  fVar9 = param_1[0x20];
  fVar15 = param_1[0x17];
  if (param_5 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fVar7 = fVar13;
    fVar16 = fVar12;
    fVar17 = fVar9;
    fVar18 = fVar8;
    do {
      fVar8 = fVar10;
      fVar9 = fVar14;
      fVar12 = fVar15;
      fVar13 = fVar11;
      fStack_d4 = (float)((ulonglong)uVar5 >> 0x20);
      param_5 = param_5 + -1;
      param_1[0x15] = *(float *)(param_2 + (longlong)param_3);
      fVar10 = *param_3;
      param_3 = param_3 + 1;
      local_d8 = (float)uVar5;
      fStack_d0 = (float)uVar6;
      fStack_b8 = (float)uVar4;
      *param_1 = fVar10;
      fVar10 = fVar10 * param_1[0x16];
      fStack_cc = (float)((ulonglong)uVar6 >> 0x20);
      fStack_bc = (float)((ulonglong)uVar3 >> 0x20);
      local_c0 = (float)uVar3;
      fVar14 = ((fVar8 * fStack_d4 + local_d8 * fVar10 + fVar18 * fStack_d0) - fVar9 * fStack_cc) -
               fVar17 * fVar2;
      fStack_b4 = (float)((ulonglong)uVar4 >> 0x20);
      fVar11 = ((fVar12 * fStack_bc + local_c0 * fVar14 + fVar16 * fStack_b8) - fVar13 * fStack_b4)
               - fVar7 * fVar1;
      param_1[0x23] = fVar11;
      fVar15 = param_1[0x24];
      if (ABS(param_1[0xc]) < ABS(param_1[0x15])) {
        fVar15 = param_1[0xe];
      }
      fVar7 = param_1[0x25];
      if (ABS(param_1[0xc]) < ABS(param_1[0x15])) {
        fVar7 = param_1[0xf];
      }
      fVar7 = fVar7 - 1.0;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (0.0 < fVar7) {
        fVar15 = param_1[0xe];
      }
      param_1[0x25] = fVar7;
      fVar7 = param_1[0x10];
      fVar15 = fVar15 - param_1[0x26];
      if (0.0 < fVar15) {
        fVar7 = param_1[0x11];
      }
      fVar15 = fVar7 * fVar15 + param_1[0x26];
      param_1[0x26] = fVar15;
      fVar15 = fVar15 * param_1[0x23];
      param_1[0x28] = fVar15;
      fVar15 = fVar15 + param_1[0x15];
      param_1[0x29] = fVar15;
      *param_4 = fVar15;
      param_4 = param_4 + 1;
      fVar15 = fVar14;
      fVar7 = fVar13;
      fVar16 = fVar12;
      fVar17 = fVar9;
      fVar18 = fVar8;
    } while (param_5 != 0);
  }
  param_1[0x17] = fVar15;
  param_1[0x18] = fVar12;
  param_1[0x19] = fVar11;
  param_1[0x1a] = fVar13;
  param_1[0x1d] = fVar10;
  param_1[0x1e] = fVar8;
  param_1[0x1f] = fVar14;
  param_1[0x20] = fVar9;
  return;
}



// FUNCTION 14513b070 FUN_14513b070 body=225 status=ok
// SIG undefined FUN_14513b070(void)

longlong FUN_14513b070(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  while (param_4 != 0) {
    fVar3 = *param_2;
    param_2 = param_2 + 1;
    *(float *)(param_1 + 0x34) = fVar3;
    param_4 = param_4 + -1;
    fVar3 = ABS(fVar3);
    fVar2 = *(float *)(param_1 + 0x38);
    if (fVar3 < ABS(*(float *)(param_1 + 0xc))) {
      fVar2 = *(float *)(param_1 + 0x14);
    }
    fVar1 = *(float *)(param_1 + 0x3c);
    if (ABS(*(float *)(param_1 + 0xc)) <= fVar3) {
      fVar1 = *(float *)(param_1 + 0x18);
    }
    fVar1 = fVar1 - 1.0;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    if (0.0 < fVar1) {
      fVar2 = *(float *)(param_1 + 0x38);
    }
    *(float *)(param_1 + 0x3c) = fVar1;
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar2 = fVar2 - *(float *)(param_1 + 0x40);
    if (0.0 < fVar2) {
      fVar3 = *(float *)(param_1 + 0x20);
    }
    fVar3 = fVar3 * fVar2 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = fVar3;
    *(float *)(param_1 + 0x28) = fVar3;
    fVar3 = fVar3 * *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x48) = fVar3;
    *param_3 = fVar3;
    param_3 = param_3 + 1;
  }
  return param_1 + 0x4c;
}



// FUNCTION 14513b160 FUN_14513b160 body=23 status=ok
// SIG undefined FUN_14513b160(void)

undefined8 FUN_14513b160(undefined8 param_1)

{
  FUN_1453ce1e0();
  return param_1;
}



// FUNCTION 14513b180 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 14513b190 FUN_14513b190 body=4 status=ok
// SIG undefined FUN_14513b190(void)

int FUN_14513b190(undefined8 param_1,int param_2)

{
  return param_2 * 0x4c;
}



// FUNCTION 14513b1a0 FUN_14513b1a0 body=174 status=ok
// SIG undefined FUN_14513b1a0(void)

undefined8 FUN_14513b1a0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x4c) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x4c) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + 0x34 + (ulonglong)uVar3 * 0x4c,3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
    return 1;
  }
  return 0x34;
}



// FUNCTION 14513b250 FUN_14513b250 body=612 status=ok
// SIG undefined FUN_14513b250(void)

void FUN_14513b250(undefined4 *param_1,double *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce230(param_1,0,(ulonglong)uVar4 * 0x4c + *(longlong *)(param_1 + 2),9);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
    uVar3 = 0;
    uVar4 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_1453ce230(param_1,0,uVar3 * 0x4c + *(longlong *)(param_1 + 2),2);
        uVar4 = param_1[1];
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < uVar4);
    }
    dVar7 = pow(10.0,*param_2 * 0.05);
    uVar6 = 0;
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        FUN_1453ce210(param_1,dVar7,(ulonglong)uVar6 * 0x4c + *(longlong *)(param_1 + 2),3);
        uVar5 = param_1[1];
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  uVar1 = 0;
  uVar9 = 0x3ff00000;
  if (*(char *)(param_2 + 5) == '\0') {
    dVar7 = pow(10.0,param_2[1] * 0.05);
    uVar1 = SUB84(dVar7,0);
    uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
  }
  uVar6 = 0;
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      FUN_1453ce210(param_1,CONCAT44(uVar9,uVar1),
                    (ulonglong)uVar6 * 0x4c + *(longlong *)(param_1 + 2),5);
      uVar4 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1,0x3ff0000000000000,*(longlong *)(param_1 + 2) + uVar3 * 0x4c + 0x34,1);
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while (uVar5 < (uint)param_1[1]);
  }
  uVar8 = FUN_1453cf5e0(*param_1,param_2[2]);
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce210(param_1,uVar8,(ulonglong)uVar5 * 0x4c + *(longlong *)(param_1 + 2),8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
  }
  uVar1 = FUN_1453cf620(*param_1,param_2[3]);
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce230(param_1,uVar1,uVar3 * 0x4c + *(longlong *)(param_1 + 2),6);
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
    } while (uVar5 < (uint)param_1[1]);
  }
  uVar8 = FUN_1453cf600(*param_1,param_2[4]);
  if (param_1[1] != 0) {
    do {
      FUN_1453ce210(param_1,uVar8,(ulonglong)uVar2 * 0x4c + *(longlong *)(param_1 + 2),7);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}



// FUNCTION 14513b4c0 FUN_14513b4c0 body=21 status=ok
// SIG undefined FUN_14513b4c0(void)

longlong FUN_14513b4c0(longlong param_1)

{
  FUN_14513ba40();
  return param_1 + 0x168;
}



// FUNCTION 14513b4e0 FUN_14513b4e0 body=31 status=ok
// SIG undefined FUN_14513b4e0(void)

longlong FUN_14513b4e0(longlong param_1)

{
  FUN_1453ce1e0();
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14513b500 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 14513b510 FUN_14513b510 body=7 status=ok
// SIG undefined FUN_14513b510(void)

int FUN_14513b510(undefined8 param_1,int param_2)

{
  return param_2 * 0x168;
}



// FUNCTION 14513b520 FUN_14513b520 body=87 status=ok
// SIG undefined FUN_14513b520(void)

undefined8 FUN_14513b520(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  param_1[4] = 0;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(0x168) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(0x168) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14513b580 FUN_14513b580 body=1212 status=ok
// SIG undefined FUN_14513b580(void)

void FUN_14513b580(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined4 uVar16;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [48];
  undefined1 local_1a0 [48];
  undefined1 local_170 [48];
  undefined1 local_140 [48];
  undefined1 local_110 [48];
  undefined1 local_e0 [48];
  undefined1 local_b0 [152];
  
  FUN_1453cf650(*param_1,*param_2,*(double *)(param_2 + 2) * 0.01,local_1d0,local_1a0,local_170,
                local_140,local_110,local_e0,local_b0);
  plVar1 = (longlong *)(param_1 + 2);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    do {
      lVar2 = (ulonglong)uVar4 * 0x168;
      FUN_1453ce3d0(param_1,local_1d0,*plVar1 + lVar2,2);
      FUN_1453ce3d0(param_1,local_1a0,*plVar1 + lVar2,7);
      FUN_1453ce3d0(param_1,local_170,*plVar1 + lVar2,0xc);
      FUN_1453ce3d0(param_1,local_140,*plVar1 + lVar2,0x11);
      FUN_1453ce3d0(param_1,local_110,*plVar1 + lVar2,0x16);
      FUN_1453ce3d0(param_1,local_e0,*plVar1 + lVar2,0x1b);
      FUN_1453ce3d0(param_1,local_b0,*plVar1 + lVar2,0x20);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
    uVar7 = 0;
    uVar5 = 0;
    if (param_1[1] != 0) {
      do {
        FUN_1453ce230(param_1,1,uVar7 * 0x168 + *plVar1,0x25);
        uVar5 = param_1[1];
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
      } while (uVar4 < uVar5);
    }
  }
  uVar16 = 0;
  if (*(char *)(param_2 + 4) == '\0') {
    dVar15 = (double)FUN_1453d98f0(*param_2);
    uVar16 = SUB84(dVar15,0);
    uVar5 = param_1[1];
    if (dVar15 < 0.0) {
      dVar15 = pow(10.0,dVar15 * 0.05);
      uVar16 = SUB84(dVar15,0);
    }
  }
  uVar7 = 0;
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      FUN_1453ce210(param_1,uVar16,*(longlong *)(param_1 + 2) + uVar7 * 0x168,0x26);
      FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + uVar7 * 0x168,0x27);
      uVar4 = param_1[1];
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < uVar4);
  }
  uVar6 = 0;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + 0xac + (ulonglong)uVar6 * 0x168,0x2d);
      FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + 0xac + (ulonglong)uVar6 * 0x168,0x2e);
      uVar5 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  uVar7 = 0;
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      FUN_1453ce230(param_1,1,uVar7 * 0x168 + *(longlong *)(param_1 + 2),0x28);
      uVar4 = param_1[1];
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < uVar4);
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + (ulonglong)uVar5 * 0x168 + 0xac,0);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[1]);
    if (param_1[1] != 0) {
      do {
        FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 0x168 + 0xac,0x2c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[1]);
    }
  }
  lVar2 = *(longlong *)(param_1 + 2);
  local_278 = *(undefined8 *)(lVar2 + 8);
  uStack_270 = *(undefined8 *)(lVar2 + 0x10);
  local_268 = *(undefined4 *)(lVar2 + 0x18);
  local_250 = *(undefined4 *)(lVar2 + 0x2c);
  local_260 = *(undefined8 *)(lVar2 + 0x1c);
  uStack_258 = *(undefined8 *)(lVar2 + 0x24);
  local_238 = *(undefined4 *)(lVar2 + 0x40);
  local_220 = *(undefined4 *)(lVar2 + 0x54);
  local_248 = *(undefined8 *)(lVar2 + 0x30);
  uStack_240 = *(undefined8 *)(lVar2 + 0x38);
  local_208 = *(undefined4 *)(lVar2 + 0x68);
  local_1f0 = *(undefined4 *)(lVar2 + 0x7c);
  local_230 = *(undefined8 *)(lVar2 + 0x44);
  uStack_228 = *(undefined8 *)(lVar2 + 0x4c);
  local_1d8 = *(undefined4 *)(lVar2 + 0x90);
  local_218 = *(undefined8 *)(lVar2 + 0x58);
  uStack_210 = *(undefined8 *)(lVar2 + 0x60);
  local_200 = *(undefined8 *)(lVar2 + 0x6c);
  uStack_1f8 = *(undefined8 *)(lVar2 + 0x74);
  local_1e8 = *(undefined4 *)(lVar2 + 0x80);
  uStack_1e4 = *(undefined4 *)(lVar2 + 0x84);
  uStack_1e0 = *(undefined4 *)(lVar2 + 0x88);
  uStack_1dc = *(undefined4 *)(lVar2 + 0x8c);
  fVar8 = (float)thunk_FUN_1453cede0(&local_278);
  fVar9 = (float)thunk_FUN_1453cede0(&local_260);
  fVar10 = (float)thunk_FUN_1453cede0(&local_248);
  fVar11 = (float)thunk_FUN_1453cede0(&local_230);
  fVar12 = (float)thunk_FUN_1453cede0(&local_218);
  fVar13 = (float)thunk_FUN_1453cede0(&local_200);
  fVar14 = (float)thunk_FUN_1453cede0(&local_1e8);
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  if (fVar9 <= fVar10) {
    fVar9 = fVar10;
  }
  if (fVar9 <= fVar11) {
    fVar9 = fVar11;
  }
  if (fVar9 <= fVar12) {
    fVar9 = fVar12;
  }
  if (fVar9 <= fVar13) {
    fVar9 = fVar13;
  }
  if (fVar14 <= fVar9) {
    fVar14 = fVar9;
  }
  param_1[4] = (int)(longlong)(fVar14 * 6.91);
  return;
}



// FUNCTION 14513ba40 FUN_14513ba40 body=1525 status=ok
// SIG undefined FUN_14513ba40(void)

void FUN_14513ba40(longlong param_1,longlong param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float local_res8;
  float local_res20;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float fStack_1c0;
  float local_1b8;
  float fStack_1b0;
  float local_1a8;
  float fStack_1a0;
  float local_198;
  float fStack_190;
  float local_188;
  float fStack_180;
  float local_178;
  float fStack_170;
  float local_168;
  float fStack_160;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0x2c);
  fVar5 = *(float *)(param_1 + 0x40);
  fVar6 = *(float *)(param_1 + 0x54);
  fVar7 = *(float *)(param_1 + 0x68);
  fVar8 = *(float *)(param_1 + 0x7c);
  fVar1 = *(float *)(param_1 + 0x98);
  fVar9 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x9c);
  fVar24 = *(float *)(param_1 + 0xb4);
  local_1c8 = *(float *)(param_1 + 0xb8);
  fVar20 = *(float *)(param_1 + 0xbc);
  fStack_1c0 = *(float *)(param_1 + 0xc0);
  local_1b8 = *(float *)(param_1 + 0xd0);
  fVar26 = *(float *)(param_1 + 0xd4);
  fStack_1b0 = *(float *)(param_1 + 0xd8);
  local_1a8 = *(float *)(param_1 + 0xe8);
  fVar21 = *(float *)(param_1 + 0xec);
  fStack_1a0 = *(float *)(param_1 + 0xf0);
  local_198 = *(float *)(param_1 + 0x100);
  fVar27 = *(float *)(param_1 + 0x104);
  fStack_190 = *(float *)(param_1 + 0x108);
  local_188 = *(float *)(param_1 + 0x118);
  fVar22 = *(float *)(param_1 + 0x11c);
  fStack_180 = *(float *)(param_1 + 0x120);
  local_178 = *(float *)(param_1 + 0x130);
  fStack_170 = *(float *)(param_1 + 0x138);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x44);
  uVar13 = *(undefined8 *)(param_1 + 0x4c);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x6c);
  uVar17 = *(undefined8 *)(param_1 + 0x74);
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  uVar19 = *(undefined8 *)(param_1 + 0x88);
  fVar28 = *(float *)(param_1 + 0x144);
  local_168 = *(float *)(param_1 + 0x148);
  fVar23 = *(float *)(param_1 + 0x14c);
  fStack_160 = *(float *)(param_1 + 0x150);
  fVar29 = *(float *)(param_1 + 0xcc);
  fVar30 = *(float *)(param_1 + 0xe4);
  fVar31 = *(float *)(param_1 + 0xfc);
  fVar32 = *(float *)(param_1 + 0x114);
  fVar33 = *(float *)(param_1 + 300);
  fVar34 = *(float *)(param_1 + 0x134);
  if (param_4 != 0) {
    param_2 = param_2 - (longlong)param_3;
    fStack_144 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fStack_148 = (float)*(undefined8 *)(param_1 + 0x10);
    fStack_14c = (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
    local_150 = (float)*(undefined8 *)(param_1 + 8);
    fStack_12c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
    fStack_130 = (float)*(undefined8 *)(param_1 + 0x24);
    fStack_134 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    local_138 = (float)*(undefined8 *)(param_1 + 0x1c);
    fVar25 = fStack_1c0;
    local_res8 = local_1b8;
    local_res20 = local_1c8;
    local_1f8 = fStack_1b0;
    local_1f4 = local_1a8;
    local_1f0 = fStack_1a0;
    local_1ec = local_198;
    local_1e8 = fStack_190;
    local_1e4 = local_188;
    local_1e0 = fStack_180;
    local_1dc = local_178;
    local_1d8 = fStack_170;
    local_1d4 = local_168;
    local_1d0 = fStack_160;
    do {
      fStack_160 = fVar23;
      local_168 = fVar28;
      fStack_170 = fVar34;
      local_178 = fVar33;
      fStack_180 = fVar22;
      local_188 = fVar32;
      fStack_190 = fVar27;
      local_198 = fVar31;
      fStack_1a0 = fVar21;
      local_1a8 = fVar30;
      fStack_1b0 = fVar26;
      local_1b8 = fVar29;
      fStack_1c0 = fVar20;
      local_1c8 = fVar24;
      fVar24 = *(float *)(param_2 + (longlong)param_3);
      fVar20 = local_res20 * fStack_148;
      local_res20 = local_1c8;
      fVar20 = ((local_1c8 * fStack_14c + local_150 * fVar24 + fVar20) - fStack_1c0 * fStack_144) -
               fVar25 * fVar3;
      fVar26 = ((local_1b8 * fStack_134 + local_138 * fVar20 + local_res8 * fStack_130) -
               fStack_1b0 * fStack_12c) - local_1f8 * fVar4;
      local_res8 = local_1b8;
      local_1f8 = fStack_1b0;
      local_120 = (float)uVar10;
      fStack_11c = (float)((ulonglong)uVar10 >> 0x20);
      fStack_118 = (float)uVar11;
      fStack_114 = (float)((ulonglong)uVar11 >> 0x20);
      fVar21 = ((local_1a8 * fStack_11c + local_120 * fVar26 + local_1f4 * fStack_118) -
               fStack_1a0 * fStack_114) - local_1f0 * fVar5;
      local_1f4 = local_1a8;
      local_1f0 = fStack_1a0;
      local_108 = (float)uVar12;
      fStack_104 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_100 = (float)uVar13;
      fStack_fc = (float)((ulonglong)uVar13 >> 0x20);
      fVar27 = ((local_198 * fStack_104 + local_108 * fVar21 + local_1ec * fStack_100) -
               fStack_190 * fStack_fc) - local_1e8 * fVar6;
      local_1ec = local_198;
      local_1e8 = fStack_190;
      local_f0 = (float)uVar14;
      fStack_ec = (float)((ulonglong)uVar14 >> 0x20);
      fStack_e8 = (float)uVar15;
      fStack_e4 = (float)((ulonglong)uVar15 >> 0x20);
      fVar22 = ((local_188 * fStack_ec + local_f0 * fVar27 + local_1e4 * fStack_e8) -
               fStack_180 * fStack_e4) - local_1e0 * fVar7;
      local_1e4 = local_188;
      local_1e0 = fStack_180;
      local_d8 = (float)uVar16;
      fStack_d4 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_d0 = (float)uVar17;
      fStack_cc = (float)((ulonglong)uVar17 >> 0x20);
      fVar28 = ((local_178 * fStack_d4 + local_d8 * fVar22 + local_1dc * fStack_d0) -
               fStack_170 * fStack_cc) - local_1d8 * fVar8;
      local_1dc = local_178;
      local_1d8 = fStack_170;
      local_c0 = (float)uVar18;
      fStack_bc = (float)((ulonglong)uVar18 >> 0x20);
      fStack_b8 = (float)uVar19;
      fStack_b4 = (float)((ulonglong)uVar19 >> 0x20);
      fVar23 = ((local_168 * fStack_bc + local_c0 * fVar28 + local_1d4 * fStack_b8) -
               fStack_160 * fStack_b4) - local_1d0 * fVar9;
      local_1d4 = local_168;
      local_1d0 = fStack_160;
      *param_3 = fVar23 * fVar1 + fVar24 * fVar2;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      fVar29 = fVar20;
      fVar25 = fStack_1c0;
      fVar30 = fVar26;
      fVar31 = fVar21;
      fVar32 = fVar27;
      fVar33 = fVar22;
      fVar34 = fVar28;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 300) = fVar33;
  *(float *)(param_1 + 0x130) = local_178;
  *(float *)(param_1 + 0x134) = fVar34;
  *(float *)(param_1 + 0x138) = fStack_170;
  *(float *)(param_1 + 0xb4) = fVar24;
  *(float *)(param_1 + 0xb8) = local_1c8;
  *(float *)(param_1 + 0xbc) = fVar20;
  *(float *)(param_1 + 0xc0) = fStack_1c0;
  *(float *)(param_1 + 0xcc) = fVar29;
  *(float *)(param_1 + 0xd0) = local_1b8;
  *(float *)(param_1 + 0xd4) = fVar26;
  *(float *)(param_1 + 0xd8) = fStack_1b0;
  *(float *)(param_1 + 0xe4) = fVar30;
  *(float *)(param_1 + 0xe8) = local_1a8;
  *(float *)(param_1 + 0xec) = fVar21;
  *(float *)(param_1 + 0xf0) = fStack_1a0;
  *(float *)(param_1 + 0xfc) = fVar31;
  *(float *)(param_1 + 0x100) = local_198;
  *(float *)(param_1 + 0x104) = fVar27;
  *(float *)(param_1 + 0x108) = fStack_190;
  *(float *)(param_1 + 0x114) = fVar32;
  *(float *)(param_1 + 0x118) = local_188;
  *(float *)(param_1 + 0x11c) = fVar22;
  *(float *)(param_1 + 0x120) = fStack_180;
  *(float *)(param_1 + 0x144) = fVar28;
  *(float *)(param_1 + 0x148) = local_168;
  *(float *)(param_1 + 0x14c) = fVar23;
  *(float *)(param_1 + 0x150) = fStack_160;
  return;
}



// FUNCTION 14513c040 FUN_14513c040 body=601 status=ok
// SIG undefined FUN_14513c040(void)

longlong FUN_14513c040(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  fVar1 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar11 = *(float *)(param_1 + 0x44);
  fVar7 = *(float *)(param_1 + 0x48);
  fVar12 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 0x20);
  dVar3 = pow(2.0,(double)-fVar1);
  if (param_4 != 0) {
    fStack_bc = (float)((ulonglong)uVar5 >> 0x20);
    fStack_c0 = (float)uVar5;
    fVar9 = fVar12;
    fVar10 = fVar11;
    do {
      fVar11 = fVar6;
      fVar12 = fVar7;
      param_4 = param_4 + -1;
      fVar6 = *(float *)(param_1 + 0x30) * *param_2;
      param_2 = param_2 + 1;
      *(float *)(param_1 + 0x34) = fVar6;
      fVar7 = fVar6 * 8388607.0 * (float)dVar3;
      if (fVar7 <= 0.0) {
        fVar7 = fVar7 - 0.5;
      }
      else {
        fVar7 = fVar7 + 0.5;
      }
      fVar8 = *(float *)(param_1 + 0x3c) - 1.0;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar6 = *(float *)(param_1 + 0x38);
      if (fVar8 <= 0.0) {
        fVar8 = *(float *)(param_1 + 0xc);
        fVar6 = (float)((int)fVar7 << ((byte)(int)fVar1 & 0x1f)) * 1.192093e-07;
      }
      *(float *)(param_1 + 0x3c) = fVar8;
      fStack_c4 = (float)((ulonglong)uVar4 >> 0x20);
      local_c8 = (float)uVar4;
      *(float *)(param_1 + 0x38) = fVar6;
      fVar7 = ((fVar11 * fStack_c4 + local_c8 * fVar6 + fVar10 * fStack_c0) - fVar12 * fStack_bc) -
              fVar9 * fVar2;
      *param_3 = fVar7 * *(float *)(param_1 + 0x58);
      param_3 = param_3 + 1;
      fVar9 = fVar12;
      fVar10 = fVar11;
    } while (param_4 != 0);
  }
  *(float *)(param_1 + 0x40) = fVar6;
  *(float *)(param_1 + 0x44) = fVar11;
  *(float *)(param_1 + 0x48) = fVar7;
  *(float *)(param_1 + 0x4c) = fVar12;
  return param_1 + 100;
}



// FUNCTION 14513c2a0 FUN_14513c2a0 body=31 status=ok
// SIG undefined FUN_14513c2a0(void)

longlong FUN_14513c2a0(longlong param_1)

{
  FUN_1453ce1e0();
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14513c2c0 thunk_FUN_1453ce200 body=5 status=ok
// SIG undefined thunk_FUN_1453ce200(void)

void thunk_FUN_1453ce200(void)

{
  return;
}



// FUNCTION 14513c2d0 FUN_14513c2d0 body=4 status=ok
// SIG undefined FUN_14513c2d0(void)

int FUN_14513c2d0(undefined8 param_1,int param_2)

{
  return param_2 * 100;
}



// FUNCTION 14513c2e0 FUN_14513c2e0 body=80 status=ok
// SIG undefined FUN_14513c2e0(void)

undefined8 FUN_14513c2e0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[1] = param_3;
  *param_1 = param_4;
  uVar1 = SUB168(ZEXT816(100) * ZEXT416(param_3),0);
  if (SUB168(ZEXT816(100) * ZEXT416(param_3),8) != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  lVar2 = FUN_145138ff0(param_2,uVar1);
  *(longlong *)(param_1 + 2) = lVar2;
  uVar1 = 0x34;
  if (lVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14513c330 FUN_14513c330 body=673 status=ok
// SIG undefined FUN_14513c330(void)

void FUN_14513c330(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 local_78 [80];
  
  uVar4 = 0;
  iVar5 = 0;
  if ((char)param_2[4] == '\0') {
    iVar5 = 0x18 - *(int *)(&DAT_149c34bd0 + (longlong)*param_2 * 4);
  }
  uVar3 = 0;
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce230(param_1,iVar5,uVar3 * 100 + *(longlong *)(param_1 + 2),2);
      uVar1 = param_1[1];
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  iVar5 = 0;
  if (((char)param_2[4] == '\0') && (iVar5 = param_2[1], 48000 < *param_1)) {
    iVar5 = iVar5 * 2;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1453ce230(param_1,iVar5,(ulonglong)uVar2 * 100 + *(longlong *)(param_1 + 2),3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1[1]);
  }
  auVar7._0_8_ = 20000.0;
  if ((char)param_2[4] == '\0') {
    auVar7._0_8_ = *(double *)(param_2 + 2) * 0.01;
    auVar7._8_8_ = 0;
    if (0.0 < auVar7._0_8_) {
      auVar7 = sqrtpd(auVar7,auVar7);
    }
    auVar7._0_8_ = 20000.0 - auVar7._0_8_ * 19000.0;
  }
  FUN_1453ce970(*param_1,0x4034000000000000,auVar7._0_8_,local_78);
  uVar3 = 0;
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_1453ce3d0(param_1,local_78,uVar3 * 100 + *(longlong *)(param_1 + 2),4);
      uVar1 = param_1[1];
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  uVar6 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1453ce210(param_1,0x3ff0000000000000,
                    *(longlong *)(param_1 + 2) + 0x30 + (ulonglong)uVar6 * 100,0xb);
      FUN_1453ce210(param_1,0,*(longlong *)(param_1 + 2) + 0x30 + (ulonglong)uVar6 * 100,0xc);
      uVar2 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  uVar3 = 0;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1453ce230(param_1,1,uVar3 * 100 + *(longlong *)(param_1 + 2),9);
      uVar1 = param_1[1];
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < uVar1);
  }
  uVar6 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1453ce210(param_1,0x3ff0000000000000,
                    *(longlong *)(param_1 + 2) + (ulonglong)uVar6 * 100 + 0x30,0);
      uVar2 = param_1[1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  if (uVar2 != 0) {
    do {
      FUN_1453ce210(param_1,0x3ff0000000000000,
                    *(longlong *)(param_1 + 2) + (ulonglong)uVar4 * 100 + 0x30,10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1[1]);
  }
  return;
}



// FUNCTION 14513c5e0 FUN_14513c5e0 body=381 status=ok
// SIG undefined FUN_14513c5e0(void)

void FUN_14513c5e0(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((param_4 == param_3) && (param_6 == param_5)) {
    pfVar1 = param_1 + param_7;
    if (param_1 < pfVar1) {
      lVar4 = (longlong)param_2 - (longlong)param_1;
      do {
        pfVar2 = (float *)(lVar4 + (longlong)param_1);
        fVar7 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar5 = pfVar2[3];
        *param_1 = *pfVar2 * param_6 + param_4 * *param_1;
        param_1[1] = fVar7 * param_6 + param_4 * param_1[1];
        param_1[2] = fVar10 * param_6 + param_4 * param_1[2];
        param_1[3] = fVar5 * param_6 + param_4 * param_1[3];
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
      return;
    }
  }
  else {
    uVar3 = (ulonglong)param_7;
    pfVar1 = param_1 + uVar3;
    fVar7 = (param_4 - param_3) * (1.0 / (float)uVar3);
    fVar10 = (param_6 - param_5) * (1.0 / (float)uVar3);
    if (param_1 < pfVar1) {
      if (3 < uVar3) {
        do {
          fVar5 = param_3 + fVar7 + fVar7;
          *param_1 = param_3 * *param_1 + param_5 * *param_2;
          fVar8 = param_5 + fVar10 + fVar10;
          fVar6 = fVar5 + fVar7;
          param_1[1] = (param_5 + fVar10) * param_2[1] + (param_3 + fVar7) * param_1[1];
          fVar9 = fVar8 + fVar10;
          param_3 = fVar6 + fVar7;
          param_1[2] = fVar8 * param_2[2] + fVar5 * param_1[2];
          pfVar2 = param_2 + 3;
          param_5 = fVar9 + fVar10;
          param_2 = param_2 + 4;
          param_1[3] = fVar9 * *pfVar2 + fVar6 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        fVar6 = param_3 * *param_1;
        param_3 = param_3 + fVar7;
        fVar5 = param_5 * *param_2;
        param_5 = param_5 + fVar10;
        param_2 = param_2 + 1;
        *param_1 = fVar6 + fVar5;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 14513c760 FUN_14513c760 body=197 status=ok
// SIG undefined FUN_14513c760(void)

void FUN_14513c760(longlong param_1,char *param_2)

{
  char *_Dst;
  longlong lVar1;
  rsize_t _MaxCount;
  ulonglong _SizeInBytes;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1400020a8();
  }
  if (param_2 != (char *)0x0) {
    _SizeInBytes = 0xffffffffffffffff;
    do {
      _MaxCount = _SizeInBytes;
      _SizeInBytes = _MaxCount + 1;
    } while (param_2[_SizeInBytes] != '\0');
    if (_SizeInBytes != 0) {
      _Dst = (char *)FUN_144a7d36f(_MaxCount + 2);
      *(char **)(param_1 + 8) = _Dst;
      lVar1 = -1;
      do {
        lVar2 = lVar1;
        lVar1 = lVar2 + 1;
      } while (param_2[lVar1] != '\0');
      if (lVar2 + 2U <= _MaxCount) {
        lVar1 = -1;
        do {
          lVar2 = lVar1;
          lVar1 = lVar2 + 1;
        } while (param_2[lVar1] != '\0');
        _MaxCount = lVar2 + 2;
      }
      strncpy_s(_Dst,_SizeInBytes,param_2,_MaxCount);
      _Dst[_MaxCount] = '\0';
      *(undefined1 *)(_SizeInBytes + *(longlong *)(param_1 + 8)) = 0;
    }
  }
  return;
}



// FUNCTION 14513c830 FUN_14513c830 body=51 status=ok
// SIG undefined FUN_14513c830(void)

undefined8 * FUN_14513c830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c34c28;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14513c870 FUN_14513c870 body=372 status=ok
// SIG undefined FUN_14513c870(void)

undefined8 * FUN_14513c870(longlong param_1,longlong *param_2)

{
  char *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *_Dst;
  longlong lVar6;
  rsize_t _MaxCount;
  ulonglong _SizeInBytes;
  longlong lVar7;
  
  puVar5 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x60,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustEffectPlugin\\SoundEnginePlugin\\FaustEffectPluginFXParams.cpp"
                      ,0x31);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar5 = &PTR_FUN_149c34c28;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  puVar5[0xb] = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar5[3] = *(undefined8 *)(param_1 + 0x18);
  puVar5[4] = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar1;
  *(undefined4 *)(puVar5 + 6) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x34) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar1;
  *(undefined4 *)(puVar5 + 8) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uVar3;
  *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(param_1 + 0x50);
  _Src = *(char **)(param_1 + 0x58);
  if (puVar5[0xb] != 0) {
    thunk_FUN_1400020a8();
  }
  if (_Src != (char *)0x0) {
    _SizeInBytes = 0xffffffffffffffff;
    do {
      _MaxCount = _SizeInBytes;
      _SizeInBytes = _MaxCount + 1;
    } while (_Src[_SizeInBytes] != '\0');
    if (_SizeInBytes != 0) {
      _Dst = (char *)FUN_144a7d36f(_MaxCount + 2);
      puVar5[0xb] = _Dst;
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (_Src[lVar6] != '\0');
      if (lVar7 + 2U <= _MaxCount) {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (_Src[lVar6] != '\0');
        _MaxCount = lVar7 + 2;
      }
      strncpy_s(_Dst,_SizeInBytes,_Src,_MaxCount);
      _Dst[_MaxCount] = '\0';
      *(undefined1 *)(_SizeInBytes + puVar5[0xb]) = 0;
    }
  }
  return puVar5;
}



// FUNCTION 14513c9f0 FUN_14513c9f0 body=80 status=ok
// SIG undefined FUN_14513c9f0(void)

undefined8 FUN_14513c9f0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    if (param_1[0xb] != 0) {
      thunk_FUN_1400020a8();
    }
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014513ca3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 14513ca40 FUN_14513ca40 body=73 status=ok
// SIG undefined FUN_14513ca40(void)

undefined8 FUN_14513ca40(undefined8 *param_1,longlong *param_2)

{
  if (param_1[0xb] != 0) {
    thunk_FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14513ca90 FUN_14513ca90 body=183 status=ok
// SIG undefined FUN_14513ca90(void)

undefined8 FUN_14513ca90(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2 + 1;
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  FUN_14513c760(param_1 + 0x50,puVar2);
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)((longlong)puVar2 + lVar1) != '\0');
  puVar2 = (undefined4 *)((longlong)puVar2 + (ulonglong)((int)lVar1 + 1));
  *(undefined4 *)(param_1 + 8) = *puVar2;
  *(undefined4 *)(param_1 + 0xc) = puVar2[1];
  *(undefined4 *)(param_1 + 0x10) = puVar2[2];
  *(undefined4 *)(param_1 + 0x14) = puVar2[3];
  *(undefined4 *)(param_1 + 0x18) = puVar2[4];
  *(undefined4 *)(param_1 + 0x1c) = puVar2[5];
  *(undefined4 *)(param_1 + 0x20) = puVar2[6];
  *(undefined4 *)(param_1 + 0x24) = puVar2[7];
  *(undefined4 *)(param_1 + 0x28) = puVar2[8];
  *(undefined4 *)(param_1 + 0x2c) = puVar2[9];
  *(undefined4 *)(param_1 + 0x30) = puVar2[10];
  *(undefined4 *)(param_1 + 0x34) = puVar2[0xb];
  *(undefined4 *)(param_1 + 0x38) = puVar2[0xc];
  *(undefined4 *)(param_1 + 0x3c) = puVar2[0xd];
  *(undefined4 *)(param_1 + 0x40) = puVar2[0xe];
  *(undefined4 *)(param_1 + 0x44) = puVar2[0xf];
  *(undefined4 *)(param_1 + 0x48) = puVar2[0x10];
  return 1;
}



// FUNCTION 14513cb50 FUN_14513cb50 body=125 status=ok
// SIG undefined FUN_14513cb50(void)

undefined8 FUN_14513cb50(longlong param_1,short param_2,undefined4 *param_3)

{
  if (param_2 < 3) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x50) = *param_3;
      return 1;
    }
    if (param_2 == 1) {
      FUN_14513c760(param_1 + 0x50,param_3);
      return 1;
    }
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 8) = *param_3;
      return 1;
    }
  }
  else if ((short)(param_2 + -3) < 0x10) {
    *(undefined4 *)(param_1 + (longlong)param_2 * 4) = *param_3;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 14513cbd0 FUN_14513cbd0 body=43 status=ok
// SIG undefined FUN_14513cbd0(void)

undefined8 * FUN_14513cbd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14513cc00 FUN_14513cc00 body=427 status=ok
// SIG undefined FUN_14513cc00(void)

undefined8 * FUN_14513cc00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c34c58;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x42fe0000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x42fe0000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x42fe0000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x42fe0000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x42fe0000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x42fe0000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x42fe0000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x42fe0000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x42fe0000;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x42fe0000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x42fe0000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x42fe0000;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x42fe0000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x42fe0000;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x42fe0000;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x42fe0000;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x42fe0000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x42fe0000;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x42fe0000;
  return param_1;
}



// FUNCTION 14513ce30 FUN_14513ce30 body=488 status=ok
// SIG undefined FUN_14513ce30(void)

void FUN_14513ce30(longlong param_1,char *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_18;
  
  lVar9 = -1;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_2[uVar2] != '\0');
  if ((((uVar2 < 5) || (*param_2 != 'r')) || (param_2[1] != 't')) ||
     ((param_2[2] != 'p' || (param_2[3] != 'c')))) {
    lVar9 = 0;
    lVar8 = lVar9;
    while (lVar6 = lVar8 + 1, lVar7 = lVar9, param_2[lVar8] == (&DAT_1499ab730)[lVar8]) {
      lVar8 = lVar6;
      if (lVar6 == 5) {
        *(undefined4 *)(param_1 + 400) = param_5;
        *(undefined4 *)(param_1 + 0x194) = param_6;
        *(undefined4 *)(param_1 + 0x198) = param_4;
        *(undefined8 *)(param_1 + 0x188) = param_3;
        return;
      }
    }
    while (lVar8 = lVar7 + 1, param_2[lVar7] == (&DAT_149c34d64)[lVar7]) {
      lVar7 = lVar8;
      if (lVar8 == 5) {
        *(undefined4 *)(param_1 + 0x1a8) = param_5;
        *(undefined4 *)(param_1 + 0x1ac) = param_6;
        *(undefined4 *)(param_1 + 0x1b0) = param_4;
        *(undefined8 *)(param_1 + 0x1a0) = param_3;
        return;
      }
    }
    do {
      lVar8 = lVar9 + 1;
      if (param_2[lVar9] != (&DAT_14998d870)[lVar9]) {
        return;
      }
      lVar9 = lVar8;
    } while (lVar8 != 5);
    *(undefined4 *)(param_1 + 0x1c0) = param_5;
    *(undefined4 *)(param_1 + 0x1c4) = param_6;
    *(undefined4 *)(param_1 + 0x1c8) = param_4;
    *(undefined8 *)(param_1 + 0x1b8) = param_3;
  }
  else {
    uVar3 = 0;
    bVar5 = param_2[4] - 0x30;
    if (bVar5 < 10) {
      uVar3 = (int)param_2[4] - 0x30;
    }
    bVar1 = bVar5 < 10;
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != '\0');
    if (lVar9 == 6) {
      bVar5 = param_2[5] - 0x30;
      iVar4 = param_2[5] + -0x30;
      if (9 < bVar5) {
        iVar4 = local_18;
      }
      bVar1 = bVar1 && bVar5 < 10;
      uVar3 = iVar4 + uVar3 * 10;
    }
    if ((bVar1) && (uVar3 < 0x10)) {
      lVar9 = (longlong)(int)uVar3;
      *(undefined4 *)(param_1 + 0x10 + lVar9 * 0x18) = param_5;
      *(undefined4 *)(param_1 + 0x14 + lVar9 * 0x18) = param_6;
      *(undefined4 *)(param_1 + 0x18 + lVar9 * 0x18) = param_4;
      *(undefined8 *)(param_1 + 8 + lVar9 * 0x18) = param_3;
      return;
    }
  }
  return;
}



// FUNCTION 14513d060 FUN_14513d060 body=766 status=ok
// SIG undefined FUN_14513d060(void)

void FUN_14513d060(longlong param_1)

{
  if (*(float **)(param_1 + 8) != (float *)0x0) {
    **(float **)(param_1 + 8) =
         (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0x18) *
         0.007874016 + *(float *)(param_1 + 0x10);
  }
  if (*(float **)(param_1 + 0x20) != (float *)0x0) {
    **(float **)(param_1 + 0x20) =
         (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28)) * *(float *)(param_1 + 0x30) *
         0.007874016 + *(float *)(param_1 + 0x28);
  }
  if (*(float **)(param_1 + 0x38) != (float *)0x0) {
    **(float **)(param_1 + 0x38) =
         (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40)) * *(float *)(param_1 + 0x48) *
         0.007874016 + *(float *)(param_1 + 0x40);
  }
  if (*(float **)(param_1 + 0x50) != (float *)0x0) {
    **(float **)(param_1 + 0x50) =
         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x58)) * *(float *)(param_1 + 0x60) *
         0.007874016 + *(float *)(param_1 + 0x58);
  }
  if (*(float **)(param_1 + 0x68) != (float *)0x0) {
    **(float **)(param_1 + 0x68) =
         (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) * *(float *)(param_1 + 0x78) *
         0.007874016 + *(float *)(param_1 + 0x70);
  }
  if (*(float **)(param_1 + 0x80) != (float *)0x0) {
    **(float **)(param_1 + 0x80) =
         (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x88)) * *(float *)(param_1 + 0x90) *
         0.007874016 + *(float *)(param_1 + 0x88);
  }
  if (*(float **)(param_1 + 0x98) != (float *)0x0) {
    **(float **)(param_1 + 0x98) =
         (*(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa0)) * *(float *)(param_1 + 0xa8) *
         0.007874016 + *(float *)(param_1 + 0xa0);
  }
  if (*(float **)(param_1 + 0xb0) != (float *)0x0) {
    **(float **)(param_1 + 0xb0) =
         (*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb8)) * *(float *)(param_1 + 0xc0) *
         0.007874016 + *(float *)(param_1 + 0xb8);
  }
  if (*(float **)(param_1 + 200) != (float *)0x0) {
    **(float **)(param_1 + 200) =
         (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xd0)) * *(float *)(param_1 + 0xd8) *
         0.007874016 + *(float *)(param_1 + 0xd0);
  }
  if (*(float **)(param_1 + 0xe0) != (float *)0x0) {
    **(float **)(param_1 + 0xe0) =
         (*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe8)) * *(float *)(param_1 + 0xf0) *
         0.007874016 + *(float *)(param_1 + 0xe8);
  }
  if (*(float **)(param_1 + 0xf8) != (float *)0x0) {
    **(float **)(param_1 + 0xf8) =
         (*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0x108) *
         0.007874016 + *(float *)(param_1 + 0x100);
  }
  if (*(float **)(param_1 + 0x110) != (float *)0x0) {
    **(float **)(param_1 + 0x110) =
         (*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x118)) * *(float *)(param_1 + 0x120) *
         0.007874016 + *(float *)(param_1 + 0x118);
  }
  if (*(float **)(param_1 + 0x128) != (float *)0x0) {
    **(float **)(param_1 + 0x128) =
         (*(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x130)) * *(float *)(param_1 + 0x138) *
         0.007874016 + *(float *)(param_1 + 0x130);
  }
  if (*(float **)(param_1 + 0x140) != (float *)0x0) {
    **(float **)(param_1 + 0x140) =
         (*(float *)(param_1 + 0x14c) - *(float *)(param_1 + 0x148)) * *(float *)(param_1 + 0x150) *
         0.007874016 + *(float *)(param_1 + 0x148);
  }
  if (*(float **)(param_1 + 0x158) != (float *)0x0) {
    **(float **)(param_1 + 0x158) =
         (*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x160)) * *(float *)(param_1 + 0x168) *
         0.007874016 + *(float *)(param_1 + 0x160);
  }
  if (*(float **)(param_1 + 0x170) != (float *)0x0) {
    **(float **)(param_1 + 0x170) =
         (*(float *)(param_1 + 0x17c) - *(float *)(param_1 + 0x178)) * *(float *)(param_1 + 0x180) *
         0.007874016 + *(float *)(param_1 + 0x178);
  }
  return;
}



// FUNCTION 14513d360 FUN_14513d360 body=56 status=ok
// SIG undefined FUN_14513d360(void)

void FUN_14513d360(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x10) {
    uVar2 = (ulonglong)param_2;
    pfVar1 = *(float **)(param_1 + 8 + uVar2 * 0x18);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (*(float *)(param_1 + 0x14 + uVar2 * 0x18) -
                *(float *)(param_1 + 0x10 + uVar2 * 0x18)) * param_3 * 0.007874016 +
                *(float *)(param_1 + 0x10 + uVar2 * 0x18);
    }
  }
  return;
}



// FUNCTION 14513d3a0 FUN_14513d3a0 body=37 status=ok
// SIG undefined FUN_14513d3a0(void)

void FUN_14513d3a0(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x188);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 != '\0') {
      *puVar1 = 0x3f800000;
      return;
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 14513d3d0 FUN_14513d3d0 body=17 status=ok
// SIG undefined FUN_14513d3d0(void)

void FUN_14513d3d0(longlong param_1,undefined4 param_2)

{
  if (*(undefined4 **)(param_1 + 0x1a0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x1a0) = param_2;
  }
  return;
}



// FUNCTION 14513d3f0 FUN_14513d3f0 body=53 status=ok
// SIG undefined FUN_14513d3f0(void)

void FUN_14513d3f0(longlong param_1,float param_2)

{
  if (*(float **)(param_1 + 0x1b8) != (float *)0x0) {
    **(float **)(param_1 + 0x1b8) =
         (*(float *)(param_1 + 0x1c4) - *(float *)(param_1 + 0x1c0)) * param_2 * 0.007874016 +
         *(float *)(param_1 + 0x1c0);
  }
  return;
}



// FUNCTION 14513d430 FUN_14513d430 body=43 status=ok
// SIG undefined FUN_14513d430(void)

undefined8 * FUN_14513d430(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1ff8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14513d460 FUN_14513d460 body=197 status=ok
// SIG undefined FUN_14513d460(void)

void FUN_14513d460(longlong param_1,char *param_2)

{
  char *_Dst;
  longlong lVar1;
  rsize_t _MaxCount;
  ulonglong _SizeInBytes;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1400020a8();
  }
  if (param_2 != (char *)0x0) {
    _SizeInBytes = 0xffffffffffffffff;
    do {
      _MaxCount = _SizeInBytes;
      _SizeInBytes = _MaxCount + 1;
    } while (param_2[_SizeInBytes] != '\0');
    if (_SizeInBytes != 0) {
      _Dst = (char *)FUN_144a7d36f(_MaxCount + 2);
      *(char **)(param_1 + 8) = _Dst;
      lVar1 = -1;
      do {
        lVar2 = lVar1;
        lVar1 = lVar2 + 1;
      } while (param_2[lVar1] != '\0');
      if (lVar2 + 2U <= _MaxCount) {
        lVar1 = -1;
        do {
          lVar2 = lVar1;
          lVar1 = lVar2 + 1;
        } while (param_2[lVar1] != '\0');
        _MaxCount = lVar2 + 2;
      }
      strncpy_s(_Dst,_SizeInBytes,param_2,_MaxCount);
      _Dst[_MaxCount] = '\0';
      *(undefined1 *)(_SizeInBytes + *(longlong *)(param_1 + 8)) = 0;
    }
  }
  return;
}



// FUNCTION 14513d530 FUN_14513d530 body=60 status=ok
// SIG undefined FUN_14513d530(void)

undefined8 * FUN_14513d530(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *param_1 = &PTR_FUN_149c34d70;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14513d570 FUN_14513d570 body=372 status=ok
// SIG undefined FUN_14513d570(void)

undefined8 * FUN_14513d570(longlong param_1,longlong *param_2)

{
  char *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *_Dst;
  longlong lVar6;
  rsize_t _MaxCount;
  ulonglong _SizeInBytes;
  longlong lVar7;
  
  puVar5 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x60,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\FaustDSP\\FaustSynthPlugin\\SoundEnginePlugin\\FaustSynthPluginSourceParams.cpp"
                      ,0x31);
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar5 + 1) = 0x3f800000;
  *(undefined8 *)((longlong)puVar5 + 0xc) = 0x3e4ccccd;
  *puVar5 = &PTR_FUN_149c34d70;
  *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x4c) = 0;
  puVar5[0xb] = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar5[3] = *(undefined8 *)(param_1 + 0x18);
  puVar5[4] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  puVar5[6] = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar1;
  *(undefined4 *)(puVar5 + 8) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uVar3;
  puVar5[9] = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(param_1 + 0x50);
  _Src = *(char **)(param_1 + 0x58);
  if (puVar5[0xb] != 0) {
    thunk_FUN_1400020a8();
  }
  if (_Src != (char *)0x0) {
    _SizeInBytes = 0xffffffffffffffff;
    do {
      _MaxCount = _SizeInBytes;
      _SizeInBytes = _MaxCount + 1;
    } while (_Src[_SizeInBytes] != '\0');
    if (_SizeInBytes != 0) {
      _Dst = (char *)FUN_144a7d36f(_MaxCount + 2);
      puVar5[0xb] = _Dst;
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (_Src[lVar6] != '\0');
      if (lVar7 + 2U <= _MaxCount) {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (_Src[lVar6] != '\0');
        _MaxCount = lVar7 + 2;
      }
      strncpy_s(_Dst,_SizeInBytes,_Src,_MaxCount);
      _Dst[_MaxCount] = '\0';
      *(undefined1 *)(_SizeInBytes + puVar5[0xb]) = 0;
    }
  }
  return puVar5;
}



// FUNCTION 14513d6f0 FUN_14513d6f0 body=87 status=ok
// SIG undefined FUN_14513d6f0(void)

undefined8 FUN_14513d6f0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 1) = 0xc1c00000;
    *(undefined4 *)(param_1 + 10) = 0;
    if (param_1[0xb] != 0) {
      thunk_FUN_1400020a8();
    }
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014513d743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return uVar1;
}



// FUNCTION 14513d750 FUN_14513d750 body=73 status=ok
// SIG undefined FUN_14513d750(void)

undefined8 FUN_14513d750(undefined8 *param_1,longlong *param_2)

{
  if (param_1[0xb] != 0) {
    thunk_FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14513d7a0 FUN_14513d7a0 body=214 status=ok
// SIG undefined FUN_14513d7a0(void)

undefined8 FUN_14513d7a0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  
  puVar1 = param_2 + 1;
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  FUN_14513d460(param_1 + 0x50,puVar1);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)((longlong)puVar1 + lVar2) != '\0');
  pfVar3 = (float *)((longlong)puVar1 + (ulonglong)((int)lVar2 + 1));
  fVar4 = powf(10.0,*pfVar3 * 0.05);
  *(float *)(param_1 + 8) = fVar4;
  *(float *)(param_1 + 0xc) = pfVar3[1];
  *(float *)(param_1 + 0x10) = pfVar3[2];
  *(float *)(param_1 + 0x14) = pfVar3[3];
  *(float *)(param_1 + 0x18) = pfVar3[4];
  *(float *)(param_1 + 0x1c) = pfVar3[5];
  *(float *)(param_1 + 0x20) = pfVar3[6];
  *(float *)(param_1 + 0x24) = pfVar3[7];
  *(float *)(param_1 + 0x28) = pfVar3[8];
  *(float *)(param_1 + 0x2c) = pfVar3[9];
  *(float *)(param_1 + 0x30) = pfVar3[10];
  *(float *)(param_1 + 0x34) = pfVar3[0xb];
  *(float *)(param_1 + 0x38) = pfVar3[0xc];
  *(float *)(param_1 + 0x3c) = pfVar3[0xd];
  *(float *)(param_1 + 0x40) = pfVar3[0xe];
  *(float *)(param_1 + 0x44) = pfVar3[0xf];
  *(float *)(param_1 + 0x48) = pfVar3[0x10];
  *(float *)(param_1 + 0x4c) = pfVar3[0x11];
  return 1;
}



// FUNCTION 14513d880 FUN_14513d880 body=177 status=ok
// SIG undefined FUN_14513d880(void)

undefined8 FUN_14513d880(longlong param_1,short param_2,float *param_3)

{
  float fVar1;
  
  if (param_2 < 4) {
    if (param_2 == 0) {
      *(float *)(param_1 + 0x50) = *param_3;
      return 1;
    }
    if (param_2 == 1) {
      FUN_14513d460(param_1 + 0x50,param_3);
      return 1;
    }
    if (param_2 == 2) {
      fVar1 = powf(10.0,*param_3 * 0.05);
      *(float *)(param_1 + 8) = fVar1;
      return 1;
    }
    if (param_2 == 3) {
      *(float *)(param_1 + 0xc) = *param_3;
      return 1;
    }
  }
  else if ((short)(param_2 + -4) < 0x10) {
    *(float *)(param_1 + (longlong)param_2 * 4) = *param_3;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 14513d940 FUN_14513d940 body=43 status=ok
// SIG undefined FUN_14513d940(void)

undefined8 * FUN_14513d940(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14513d970 FUN_14513d970 body=186 status=ok
// SIG undefined FUN_14513d970(void)

undefined8 * FUN_14513d970(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  *param_1 = &PTR_FUN_149c34da0;
  puVar1 = param_1 + 1;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x42fe0000;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x42fe0000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x42fe0000;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x42fe0000;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x42fe0000;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0x42fe0000;
  return param_1;
}



// FUNCTION 14513dab0 FUN_14513dab0 body=648 status=ok
// SIG undefined FUN_14513dab0(void)

void FUN_14513dab0(longlong param_1,char *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  int local_28;
  
  lVar3 = -1;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_2[uVar2] != '\0');
  if ((((uVar2 < 5) || (*param_2 != 'r')) || (param_2[1] != 't')) ||
     ((param_2[2] != 'p' || (param_2[3] != 'c')))) {
    lVar9 = 0;
    lVar3 = lVar9;
    do {
      lVar4 = lVar3 + 1;
      lVar5 = lVar9;
      if (param_2[lVar3] != (&DAT_1499928d0)[lVar3]) {
        do {
          lVar4 = lVar5 + 1;
          lVar3 = lVar9;
          if (param_2[lVar5] != (&DAT_149c34eb8)[lVar5]) {
            do {
              lVar5 = lVar3 + 1;
              if (param_2[lVar3] != (&DAT_1499ab730)[lVar3]) {
                iVar1 = strcmp(param_2,"duration");
                if (iVar1 == 0) {
                  *(undefined4 *)(param_1 + 0x1d8) = param_5;
                  *(undefined4 *)(param_1 + 0x1dc) = param_6;
                  *(undefined4 *)(param_1 + 0x1e0) = param_4;
                  *(undefined8 *)(param_1 + 0x1d0) = param_3;
                  return;
                }
                do {
                  lVar3 = lVar9 + 1;
                  if (param_2[lVar9] != (&DAT_14998d870)[lVar9]) {
                    return;
                  }
                  lVar9 = lVar3;
                } while (lVar3 != 5);
                *(undefined4 *)(param_1 + 0x1f0) = param_5;
                *(undefined4 *)(param_1 + 500) = param_6;
                *(undefined4 *)(param_1 + 0x1f8) = param_4;
                *(undefined8 *)(param_1 + 0x1e8) = param_3;
                return;
              }
              lVar3 = lVar5;
            } while (lVar5 != 5);
            *(undefined4 *)(param_1 + 0x1c0) = param_5;
            *(undefined4 *)(param_1 + 0x1c4) = param_6;
            *(undefined4 *)(param_1 + 0x1c8) = param_4;
            *(undefined8 *)(param_1 + 0x1b8) = param_3;
            return;
          }
          lVar5 = lVar4;
        } while (lVar4 != 5);
        *(undefined4 *)(param_1 + 0x1a8) = param_5;
        *(undefined4 *)(param_1 + 0x1ac) = param_6;
        *(undefined4 *)(param_1 + 0x1b0) = param_4;
        *(undefined8 *)(param_1 + 0x1a0) = param_3;
        return;
      }
      lVar3 = lVar4;
    } while (lVar4 != 5);
    *(undefined4 *)(param_1 + 400) = param_5;
    *(undefined4 *)(param_1 + 0x194) = param_6;
    *(undefined4 *)(param_1 + 0x198) = param_4;
    *(undefined8 *)(param_1 + 0x188) = param_3;
    return;
  }
  uVar8 = 0;
  bVar6 = param_2[4] - 0x30;
  if (bVar6 < 10) {
    uVar8 = (int)param_2[4] - 0x30;
  }
  bVar7 = bVar6 < 10;
  do {
    lVar3 = lVar3 + 1;
  } while (param_2[lVar3] != '\0');
  if (lVar3 == 6) {
    bVar6 = param_2[5] - 0x30;
    if (bVar6 < 10) {
      local_28 = param_2[5] + -0x30;
    }
    bVar7 = bVar7 && bVar6 < 10;
    uVar8 = local_28 + uVar8 * 10;
  }
  if (!bVar7) {
    return;
  }
  if (0xf < uVar8) {
    return;
  }
  lVar3 = (longlong)(int)uVar8;
  *(undefined4 *)(param_1 + 0x10 + lVar3 * 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x14 + lVar3 * 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x18 + lVar3 * 0x18) = param_4;
  *(undefined8 *)(param_1 + 8 + lVar3 * 0x18) = param_3;
  return;
}



// FUNCTION 14513dd80 FUN_14513dd80 body=818 status=ok
// SIG undefined FUN_14513dd80(void)

void FUN_14513dd80(longlong param_1)

{
  if (*(float **)(param_1 + 8) != (float *)0x0) {
    **(float **)(param_1 + 8) =
         (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0x18) *
         0.007874016 + *(float *)(param_1 + 0x10);
  }
  if (*(float **)(param_1 + 0x20) != (float *)0x0) {
    **(float **)(param_1 + 0x20) =
         (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28)) * *(float *)(param_1 + 0x30) *
         0.007874016 + *(float *)(param_1 + 0x28);
  }
  if (*(float **)(param_1 + 0x38) != (float *)0x0) {
    **(float **)(param_1 + 0x38) =
         (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40)) * *(float *)(param_1 + 0x48) *
         0.007874016 + *(float *)(param_1 + 0x40);
  }
  if (*(float **)(param_1 + 0x50) != (float *)0x0) {
    **(float **)(param_1 + 0x50) =
         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x58)) * *(float *)(param_1 + 0x60) *
         0.007874016 + *(float *)(param_1 + 0x58);
  }
  if (*(float **)(param_1 + 0x68) != (float *)0x0) {
    **(float **)(param_1 + 0x68) =
         (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) * *(float *)(param_1 + 0x78) *
         0.007874016 + *(float *)(param_1 + 0x70);
  }
  if (*(float **)(param_1 + 0x80) != (float *)0x0) {
    **(float **)(param_1 + 0x80) =
         (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x88)) * *(float *)(param_1 + 0x90) *
         0.007874016 + *(float *)(param_1 + 0x88);
  }
  if (*(float **)(param_1 + 0x98) != (float *)0x0) {
    **(float **)(param_1 + 0x98) =
         (*(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa0)) * *(float *)(param_1 + 0xa8) *
         0.007874016 + *(float *)(param_1 + 0xa0);
  }
  if (*(float **)(param_1 + 0xb0) != (float *)0x0) {
    **(float **)(param_1 + 0xb0) =
         (*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb8)) * *(float *)(param_1 + 0xc0) *
         0.007874016 + *(float *)(param_1 + 0xb8);
  }
  if (*(float **)(param_1 + 200) != (float *)0x0) {
    **(float **)(param_1 + 200) =
         (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xd0)) * *(float *)(param_1 + 0xd8) *
         0.007874016 + *(float *)(param_1 + 0xd0);
  }
  if (*(float **)(param_1 + 0xe0) != (float *)0x0) {
    **(float **)(param_1 + 0xe0) =
         (*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe8)) * *(float *)(param_1 + 0xf0) *
         0.007874016 + *(float *)(param_1 + 0xe8);
  }
  if (*(float **)(param_1 + 0xf8) != (float *)0x0) {
    **(float **)(param_1 + 0xf8) =
         (*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0x108) *
         0.007874016 + *(float *)(param_1 + 0x100);
  }
  if (*(float **)(param_1 + 0x110) != (float *)0x0) {
    **(float **)(param_1 + 0x110) =
         (*(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x118)) * *(float *)(param_1 + 0x120) *
         0.007874016 + *(float *)(param_1 + 0x118);
  }
  if (*(float **)(param_1 + 0x128) != (float *)0x0) {
    **(float **)(param_1 + 0x128) =
         (*(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x130)) * *(float *)(param_1 + 0x138) *
         0.007874016 + *(float *)(param_1 + 0x130);
  }
  if (*(float **)(param_1 + 0x140) != (float *)0x0) {
    **(float **)(param_1 + 0x140) =
         (*(float *)(param_1 + 0x14c) - *(float *)(param_1 + 0x148)) * *(float *)(param_1 + 0x150) *
         0.007874016 + *(float *)(param_1 + 0x148);
  }
  if (*(float **)(param_1 + 0x158) != (float *)0x0) {
    **(float **)(param_1 + 0x158) =
         (*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x160)) * *(float *)(param_1 + 0x168) *
         0.007874016 + *(float *)(param_1 + 0x160);
  }
  if (*(float **)(param_1 + 0x170) != (float *)0x0) {
    **(float **)(param_1 + 0x170) =
         (*(float *)(param_1 + 0x17c) - *(float *)(param_1 + 0x178)) * *(float *)(param_1 + 0x180) *
         0.007874016 + *(float *)(param_1 + 0x178);
  }
  if (*(float **)(param_1 + 0x188) != (float *)0x0) {
    **(float **)(param_1 + 0x188) =
         (*(float *)(param_1 + 0x194) - *(float *)(param_1 + 400)) * *(float *)(param_1 + 0x198) *
         0.007874016 + *(float *)(param_1 + 400);
  }
  return;
}



// FUNCTION 14513e0c0 FUN_14513e0c0 body=56 status=ok
// SIG undefined FUN_14513e0c0(void)

void FUN_14513e0c0(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x10) {
    uVar2 = (ulonglong)param_2;
    pfVar1 = *(float **)(param_1 + 8 + uVar2 * 0x18);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (*(float *)(param_1 + 0x14 + uVar2 * 0x18) -
                *(float *)(param_1 + 0x10 + uVar2 * 0x18)) * param_3 * 0.007874016 +
                *(float *)(param_1 + 0x10 + uVar2 * 0x18);
    }
  }
  return;
}



// FUNCTION 14513e100 FUN_14513e100 body=105 status=ok
// SIG undefined FUN_14513e100(void)

void FUN_14513e100(longlong param_1,float param_2,float param_3)

{
  if (*(float **)(param_1 + 0x188) != (float *)0x0) {
    **(float **)(param_1 + 0x188) =
         (*(float *)(param_1 + 0x194) - *(float *)(param_1 + 400)) * param_2 * 0.007874016 +
         *(float *)(param_1 + 400);
  }
  if (*(float **)(param_1 + 0x1a0) != (float *)0x0) {
    **(float **)(param_1 + 0x1a0) =
         (*(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1a8)) * param_3 * 0.007874016 +
         *(float *)(param_1 + 0x1a8);
  }
  return;
}



// FUNCTION 14513e170 FUN_14513e170 body=37 status=ok
// SIG undefined FUN_14513e170(void)

void FUN_14513e170(longlong param_1,char param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1b8);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 != '\0') {
      *puVar1 = 0x3f800000;
      return;
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 14513e1a0 FUN_14513e1a0 body=23 status=ok
// SIG undefined FUN_14513e1a0(void)

undefined8 FUN_14513e1a0(longlong param_1)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 0x1b8);
  if (pfVar1 != (float *)0x0) {
    return CONCAT71((int7)((ulonglong)pfVar1 >> 8),0.0 < *pfVar1);
  }
  return 0;
}



// FUNCTION 14513e1c0 FUN_14513e1c0 body=12 status=ok
// SIG undefined FUN_14513e1c0(void)

bool FUN_14513e1c0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x1b8) != 0;
}



// FUNCTION 14513e1d0 FUN_14513e1d0 body=17 status=ok
// SIG undefined FUN_14513e1d0(void)

void FUN_14513e1d0(longlong param_1,undefined4 param_2)

{
  if (*(undefined4 **)(param_1 + 0x1d0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x1d0) = param_2;
  }
  return;
}



// FUNCTION 14513e1f0 FUN_14513e1f0 body=53 status=ok
// SIG undefined FUN_14513e1f0(void)

void FUN_14513e1f0(longlong param_1,float param_2)

{
  if (*(float **)(param_1 + 0x1e8) != (float *)0x0) {
    **(float **)(param_1 + 0x1e8) =
         (*(float *)(param_1 + 500) - *(float *)(param_1 + 0x1f0)) * param_2 * 0.007874016 +
         *(float *)(param_1 + 0x1f0);
  }
  return;
}



// FUNCTION 14513e230 FUN_14513e230 body=43 status=ok
// SIG undefined FUN_14513e230(void)

undefined8 * FUN_14513e230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1ff8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 14513e260 FUN_14513e260 body=59 status=ok
// SIG undefined FUN_14513e260(void)

undefined8 * FUN_14513e260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c34ed0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3e19999a;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 14513e2a0 FUN_14513e2a0 body=163 status=ok
// SIG undefined FUN_14513e2a0(void)

undefined8 * FUN_14513e2a0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x48,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\GbxPlugins\\AcousticsMixer\\SoundEnginePlugin\\AcousticsMixerFXParams.cpp"
                      ,0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_149c34ed0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3e19999a;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    *(undefined2 *)(puVar2 + 1) = 0xffff;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14513e390 FUN_14513e390 body=56 status=ok
// SIG undefined FUN_14513e390(void)

undefined8 FUN_14513e390(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14513e3d0 FUN_14513e3d0 body=200 status=ok
// SIG undefined FUN_14513e3d0(void)

undefined8 FUN_14513e3d0(longlong param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = powf(10.0,*param_2 * 0.05);
  *(float *)(param_1 + 0xc) = fVar1;
  *(float *)(param_1 + 0x10) = param_2[1];
  *(float *)(param_1 + 0x14) = param_2[2];
  *(float *)(param_1 + 0x18) = param_2[3];
  *(float *)(param_1 + 0x1c) = param_2[4];
  *(float *)(param_1 + 0x20) = param_2[5];
  *(float *)(param_1 + 0x24) = param_2[6];
  *(float *)(param_1 + 0x28) = param_2[7];
  *(float *)(param_1 + 0x2c) = param_2[8];
  *(float *)(param_1 + 0x30) = param_2[9];
  *(float *)(param_1 + 0x34) = param_2[10];
  *(float *)(param_1 + 0x38) = param_2[0xb];
  *(float *)(param_1 + 0x3c) = param_2[0xc];
  *(float *)(param_1 + 0x40) = param_2[0xd];
  *(float *)(param_1 + 0x44) = param_2[0xe];
  *(undefined2 *)(param_1 + 8) = 0xffff;
  return 1;
}



// FUNCTION 14513e4a0 FUN_14513e4a0 body=248 status=ok
// SIG undefined FUN_14513e4a0(void)

undefined8 FUN_14513e4a0(longlong param_1,ushort param_2,float *param_3)

{
  int iVar1;
  ulonglong uVar2;
  float fVar3;
  
  if ((short)param_2 < 3) {
    uVar2 = (ulonglong)(uint)(int)(short)param_2;
  }
  else {
    if ((short)param_2 < 7) {
      *(float *)(param_1 + -0xc + (longlong)(short)param_2 * 0xc) = *param_3;
      return 1;
    }
    if ((short)param_2 < 0xb) {
      *(float *)(param_1 + -0x38 + (longlong)(short)param_2 * 0xc) = *param_3;
      return 1;
    }
    uVar2 = (ulonglong)(short)param_2;
    if (param_2 < 0xf) {
      *(float *)(param_1 + -100 + uVar2 * 0xc) = *param_3;
      return 1;
    }
  }
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    fVar3 = powf(10.0,*param_3 * 0.05);
    *(float *)(param_1 + 0xc) = fVar3;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    return 1;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0x1f;
    }
    *(float *)(param_1 + 0x14) = *param_3;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
    return 1;
  }
  *(float *)(param_1 + 0x10) = *param_3;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return 1;
}



// FUNCTION 14513e5a0 FUN_14513e5a0 body=43 status=ok
// SIG undefined FUN_14513e5a0(void)

undefined8 * FUN_14513e5a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14513e5d0 FUN_14513e5d0 body=51 status=ok
// SIG undefined FUN_14513e5d0(void)

uint FUN_14513e5d0(byte *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 >> 8 ^
            *(uint *)(&DAT_14c72f740 + (((ulonglong)bVar1 ^ (ulonglong)uVar2) & 0xff) * 4);
  }
  return ~uVar2;
}



// FUNCTION 14513e610 FUN_14513e610 body=120 status=ok
// SIG undefined FUN_14513e610(void)

longlong FUN_14513e610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _Mtx_init_in_situ(param_1,0x102);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return param_1;
}



// FUNCTION 14513e690 FUN_14513e690 body=15 status=ok
// SIG undefined FUN_14513e690(void)

void FUN_14513e690(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _Mtx_destroy_in_situ();
  return;
}



// FUNCTION 14513e6a0 FUN_14513e6a0 body=528 status=ok
// SIG undefined FUN_14513e6a0(void)

void FUN_14513e6a0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar2 = _Mtx_lock();
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x68) = *param_3;
    *(undefined8 *)(param_1 + 0x70) = param_3[1];
    *(longlong *)(param_1 + 0x78) = param_2;
    uVar3 = (*(code *)*param_4)(param_2 * 0x68,0,param_4[2]);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    uVar6 = 0;
    uVar4 = uVar6;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      FUN_1453d9ea0(*(longlong *)(param_1 + 0x80) + uVar4);
      uVar4 = uVar4 + 0x68;
    }
    uVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x20);
    uVar4 = uVar6;
    uVar5 = uVar6;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      do {
        FUN_1453d9f00(*(longlong *)(param_1 + 0x80) + uVar4,uVar8,param_4);
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 + 0x68;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x78));
    }
    uVar3 = (*(code *)*param_4)(uVar8 * 4,0,param_4[2]);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    uVar3 = (*(code *)*param_4)(uVar8 * 4,0,param_4[2]);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    if (3 < uVar8) {
      uVar4 = uVar6;
      do {
        lVar7 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 0x88) + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x30 + lVar7);
        *(undefined4 *)(*(longlong *)(param_1 + 0x90) + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x34 + lVar7);
        lVar7 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 4 + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x40 + lVar7);
        *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 4 + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x44 + lVar7);
        lVar7 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8 + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x50 + lVar7);
        *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8 + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x54 + lVar7);
        lVar7 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xc + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 0x60 + lVar7);
        *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xc + uVar6 * 4) =
             *(undefined4 *)(uVar4 + 100 + lVar7);
        uVar6 = uVar6 + 4;
        uVar4 = uVar4 + 0x40;
      } while (uVar6 < uVar8 - 3);
    }
    if (uVar6 < uVar8) {
      lVar7 = uVar6 << 4;
      do {
        lVar1 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 0x88) + uVar6 * 4) =
             *(undefined4 *)(lVar7 + 0x30 + lVar1);
        *(undefined4 *)(*(longlong *)(param_1 + 0x90) + uVar6 * 4) =
             *(undefined4 *)(lVar7 + 0x34 + lVar1);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar6 < uVar8);
    }
    _Mtx_unlock(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar2);
}



// FUNCTION 14513e8c0 FUN_14513e8c0 body=273 status=ok
// SIG undefined FUN_14513e8c0(void)

void FUN_14513e8c0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar2);
  }
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20);
  uVar4 = 0;
  uVar3 = 0;
  uVar6 = uVar4;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    do {
      FUN_1453da080(*(longlong *)(param_1 + 0x80) + uVar4,uVar1,param_2);
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 0x68;
      uVar3 = *(ulonglong *)(param_1 + 0x78);
    } while (uVar6 < uVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x80);
  lVar7 = uVar3 * 0x68 + lVar5;
  if (lVar5 != lVar7) {
    do {
      if (lVar5 != 0) {
        FUN_1453d9ef0(lVar5);
      }
      lVar5 = lVar5 + 0x68;
    } while (lVar5 != lVar7);
    lVar5 = *(longlong *)(param_1 + 0x80);
  }
  (**(code **)(param_2 + 8))(lVar5,0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x80) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x88) = 0;
  (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  _Mtx_unlock(param_1);
  return;
}



// FUNCTION 14513e9e0 FUN_14513e9e0 body=101 status=ok
// SIG undefined FUN_14513e9e0(void)

undefined8 FUN_14513e9e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar1);
  }
  uVar3 = 0;
  if (*(ulonglong *)(param_1 + 0x78) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x80);
    do {
      if (*plVar2 != 0) {
        uVar4 = 0;
        goto LAB_14513ea24;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0xd;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x78));
  }
  uVar4 = 1;
LAB_14513ea24:
  _Mtx_unlock(param_1);
  return uVar4;
}



// FUNCTION 14513ea50 FUN_14513ea50 body=23 status=ok
// SIG undefined FUN_14513ea50(void)

undefined8 FUN_14513ea50(longlong param_1,longlong param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x50) >> 8),
                  *(longlong *)(**(longlong **)(param_2 + 0x20) + 0x18) ==
                  *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18));
}



// FUNCTION 14513ea70 FUN_14513ea70 body=201 status=ok
// SIG undefined FUN_14513ea70(void)

undefined8 FUN_14513ea70(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar1);
  }
  if (*param_3 == 0xffffffff) {
    uVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x78) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x80);
      do {
        if (*plVar2 == 0) {
          FUN_1453da130(plVar2,param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20));
          *param_3 = uVar3;
          uVar4 = 1;
          goto LAB_14513ead4;
        }
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 0xd;
      } while (uVar3 < *(ulonglong *)(param_1 + 0x78));
    }
  }
  else {
    plVar2 = (longlong *)(*param_3 * 0x68 + *(longlong *)(param_1 + 0x80));
    if (*plVar2 == 0) {
      FUN_1453da130(plVar2,param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20));
      uVar4 = 1;
      goto LAB_14513ead4;
    }
  }
  uVar4 = 0;
LAB_14513ead4:
  _Mtx_unlock(param_1);
  return uVar4;
}



// FUNCTION 14513eb40 FUN_14513eb40 body=105 status=ok
// SIG undefined FUN_14513eb40(void)

bool FUN_14513eb40(longlong param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar1);
  }
  bVar2 = (*(uint *)(param_1 + 0x98) >> 1 & 1) == 0;
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x9c) = param_2;
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 2;
  }
  _Mtx_unlock(param_1);
  return bVar2;
}



// FUNCTION 14513ebb0 FUN_14513ebb0 body=191 status=ok
// SIG undefined FUN_14513ebb0(void)

undefined8 FUN_14513ebb0(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar2);
  }
  uVar3 = *(uint *)(param_1 + 0x98);
  if ((uVar3 >> 1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x9c);
    uVar5 = 0;
    uVar7 = uVar5;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x80) + uVar5);
        if (*plVar4 != 0) {
          FUN_1453dad60(plVar4,param_2 - fVar1);
        }
        uVar7 = uVar7 + 1;
        uVar5 = uVar5 + 0x68;
      } while (uVar7 < *(ulonglong *)(param_1 + 0x78));
      uVar3 = *(uint *)(param_1 + 0x98);
    }
    *(uint *)(param_1 + 0x98) = uVar3 & 0xfffffffd;
    uVar6 = 1;
  }
  _Mtx_unlock(param_1);
  return uVar6;
}



// FUNCTION 14513ec70 FUN_14513ec70 body=141 status=ok
// SIG undefined FUN_14513ec70(void)

void FUN_14513ec70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar1);
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    do {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x80) + uVar3);
      if (*plVar2 != 0) {
        FUN_1453da130(plVar2,0,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20));
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x68;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x78));
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffc | 4;
  _Mtx_unlock(param_1);
  return;
}



// FUNCTION 14513ed00 FUN_14513ed00 body=222 status=ok
// SIG undefined FUN_14513ed00(void)

void FUN_14513ed00(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_C_error(iVar2);
  }
  bVar1 = false;
  plVar4 = (longlong *)(param_2 * 0x68 + *(longlong *)(param_1 + 0x80));
  bVar6 = *plVar4 != 0;
  if (bVar6) {
    FUN_1453da130(plVar4,0,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20));
  }
  uVar5 = 0;
  if (*(ulonglong *)(param_1 + 0x78) == 0) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffe;
    uVar3 = *(uint *)(param_1 + 0x98);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x80);
    do {
      if (*plVar4 != 0) {
        uVar3 = *(uint *)(param_1 + 0x98) & 0xfffffffe | 1;
        *(uint *)(param_1 + 0x98) = uVar3;
        bVar1 = true;
        goto LAB_14513edaa;
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 0xd;
    } while (uVar5 < *(ulonglong *)(param_1 + 0x78));
    uVar3 = *(uint *)(param_1 + 0x98) & 0xfffffffe;
    *(uint *)(param_1 + 0x98) = uVar3;
  }
LAB_14513edaa:
  if ((bVar6) && (!bVar1)) {
    *(uint *)(param_1 + 0x98) = uVar3 & 0xfffffffd | 4;
  }
  _Mtx_unlock(param_1);
  return;
}



// FUNCTION 14513ede0 FUN_14513ede0 body=119 status=ok
// SIG undefined FUN_14513ede0(void)

void FUN_14513ede0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock();
  if (iVar2 == 0) {
    cVar1 = FUN_14513ee60(param_1,param_2,param_3,0,0);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x98) & 1) != 0)) {
      FUN_14513f1c0(param_1,param_3);
    }
    _Mtx_unlock(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar2);
}



// FUNCTION 14513ee60 FUN_14513ee60 body=859 status=ok
// SIG undefined FUN_14513ee60(void)

byte FUN_14513ee60(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined4 local_res8 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    memset(*(void **)(param_3 + 0x88),0,*(longlong *)(param_1 + 0x78) * 4);
  }
  local_res8[0] = 0;
  FUN_144d60520(*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_1 + 0x78),local_res8);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    memset(*(void **)(param_3 + 0x98),0,*(longlong *)(param_1 + 0x78) * 8);
  }
  bVar9 = ~(byte)(*(uint *)(param_1 + 0x98) >> 1);
  if ((bVar9 & 1) == 0) {
    uVar7 = uVar6;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_3 + 0x88) + uVar7 * 4);
        *puVar1 = *puVar1 | 4;
        if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x80)) != 0) {
          *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 1;
          *(undefined8 *)(*(longlong *)(param_3 + 0x98) + uVar7 * 8) =
               *(undefined8 *)(uVar6 + 8 + *(longlong *)(param_1 + 0x80));
          *(undefined4 *)(*(longlong *)(param_3 + 0x90) + uVar7 * 4) =
               *(undefined4 *)(uVar6 + 0x14 + *(longlong *)(param_1 + 0x80));
          puVar1 = (uint *)(*(longlong *)(param_3 + 0x88) + uVar7 * 4);
          *puVar1 = *puVar1 | 1;
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 + 0x68;
      } while (uVar7 < *(ulonglong *)(param_1 + 0x78));
    }
  }
  else {
    local_res8[0] = 0;
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffe;
    uVar4 = *(undefined8 *)(param_3 + 0xa0);
    uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0x50) + 0x20);
    FUN_144d60520(uVar4,uVar2,local_res8);
    local_78 = *(undefined8 *)(param_1 + 0x70);
    local_70 = *(undefined8 *)(param_1 + 0x60);
    local_68 = 0;
    uVar7 = 0;
    uVar8 = uVar6;
    uVar10 = uVar6;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      do {
        if (*(longlong *)(uVar10 + *(longlong *)(param_1 + 0x80)) != 0) {
          *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 1;
          *(undefined8 *)(*(longlong *)(param_3 + 0x98) + uVar8 * 8) =
               *(undefined8 *)(uVar10 + 8 + *(longlong *)(param_1 + 0x80));
          local_60 = uVar8;
          uVar5 = FUN_1453da430(*(longlong *)(param_1 + 0x80) + uVar10,param_2,uVar2,&local_78,
                                *(undefined8 *)(param_1 + 0x68));
          *(undefined4 *)(*(longlong *)(param_3 + 0x88) + uVar8 * 4) = uVar5;
          *(undefined4 *)(*(longlong *)(param_3 + 0x90) + uVar8 * 4) =
               *(undefined4 *)(uVar10 + 0x14 + *(longlong *)(param_1 + 0x80));
        }
        uVar7 = *(ulonglong *)(param_1 + 0x78);
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 + 0x68;
      } while (uVar8 < uVar7);
    }
    if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
      if (param_4 == 0) {
        uVar8 = uVar6;
        if (uVar7 != 0) {
          do {
            uVar3 = *(uint *)(*(longlong *)(param_3 + 0x88) + uVar6 * 4);
            if (((uVar3 & 1) != 0) &&
               (FUN_1453dad80(*(longlong *)(param_1 + 0x80) + uVar8,uVar4,uVar2),
               (uVar3 & 0x20) != 0)) {
              FUN_1453da130(*(longlong *)(param_1 + 0x80) + uVar8,0,uVar2);
            }
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 0x68;
          } while (uVar6 < *(ulonglong *)(param_1 + 0x78));
        }
      }
      else {
        uVar8 = uVar6;
        if (uVar7 != 0) {
          do {
            uVar3 = *(uint *)(*(longlong *)(param_3 + 0x88) + uVar6 * 4);
            if (((uVar3 & 1) != 0) &&
               (FUN_1453daeb0(*(longlong *)(param_1 + 0x80) + uVar8,uVar4,uVar2,
                              *(undefined4 *)(param_4 + uVar6 * 4)), (uVar3 & 0x20) != 0)) {
              FUN_1453da130(*(longlong *)(param_1 + 0x80) + uVar8,0,uVar2);
            }
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 0x68;
          } while (uVar6 < *(ulonglong *)(param_1 + 0x78));
        }
      }
    }
  }
  *(undefined4 *)(param_3 + 0xa8) = *(undefined4 *)(param_1 + 0x98);
  if ((*(uint *)(param_1 + 0x98) & 4) != 0) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffb;
  }
  return bVar9 & 1;
}



// FUNCTION 14513f1c0 FUN_14513f1c0 body=489 status=ok
// SIG undefined FUN_14513f1c0(void)

void FUN_14513f1c0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar17 = 0;
  lVar3 = *(longlong *)(param_1 + 0x88);
  lVar4 = *(longlong *)(param_1 + 0x90);
  lVar5 = *(longlong *)(param_2 + 0xa0);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x50) + 0x20);
  uVar12 = (ulonglong)uVar2;
  if (uVar12 != 0) {
    if (7 < uVar12) {
      pauVar13 = (undefined1 (*) [16])(lVar5 + 0x10);
      do {
        auVar25 = pauVar13[-1];
        pfVar11 = (float *)((lVar3 - lVar5) + (longlong)pauVar13);
        uVar17 = uVar17 + 8;
        pfVar1 = (float *)((lVar3 - lVar5) + -0x10 + (longlong)pauVar13);
        fVar22 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar6 = pfVar1[3];
        uVar18 = -(uint)(auVar25._0_4_ < *pfVar1);
        uVar19 = -(uint)(auVar25._4_4_ < fVar22);
        uVar20 = -(uint)(auVar25._8_4_ < fVar23);
        uVar21 = -(uint)(auVar25._12_4_ < fVar6);
        fVar7 = *pfVar11;
        fVar8 = pfVar11[1];
        fVar9 = pfVar11[2];
        fVar10 = pfVar11[3];
        auVar24 = minps(*(undefined1 (*) [16])((longlong)pauVar13 + (lVar4 - lVar5) + -0x10),auVar25
                       );
        auVar25 = *(undefined1 (*) [16])((longlong)pfVar11 + (lVar4 - lVar3));
        *(uint *)pauVar13[-1] = ~uVar18 & auVar24._0_4_ | uVar18 & (uint)*pfVar1;
        *(uint *)(pauVar13[-1] + 4) = ~uVar19 & auVar24._4_4_ | uVar19 & (uint)fVar22;
        *(uint *)(pauVar13[-1] + 8) = ~uVar20 & auVar24._8_4_ | uVar20 & (uint)fVar23;
        *(uint *)(pauVar13[-1] + 0xc) = ~uVar21 & auVar24._12_4_ | uVar21 & (uint)fVar6;
        auVar24 = *pauVar13;
        uVar18 = -(uint)(auVar24._0_4_ < fVar7);
        uVar19 = -(uint)(auVar24._4_4_ < fVar8);
        uVar20 = -(uint)(auVar24._8_4_ < fVar9);
        uVar21 = -(uint)(auVar24._12_4_ < fVar10);
        auVar25 = minps(auVar25,auVar24);
        *(uint *)*pauVar13 = ~uVar18 & auVar25._0_4_ | uVar18 & (uint)fVar7;
        *(uint *)(*pauVar13 + 4) = ~uVar19 & auVar25._4_4_ | uVar19 & (uint)fVar8;
        *(uint *)(*pauVar13 + 8) = ~uVar20 & auVar25._8_4_ | uVar20 & (uint)fVar9;
        *(uint *)(*pauVar13 + 0xc) = ~uVar21 & auVar25._12_4_ | uVar21 & (uint)fVar10;
        pauVar13 = pauVar13 + 2;
      } while (uVar17 < ((ulonglong)uVar2 & 0xfffffffffffffff8));
      if (uVar12 <= uVar17) {
        return;
      }
    }
    if (3 < uVar12 - uVar17) {
      pfVar11 = (float *)(lVar5 + 4 + uVar17 * 4);
      lVar16 = lVar3 - lVar5;
      lVar14 = lVar4 - lVar5;
      lVar15 = ((uVar12 - uVar17) - 4 >> 2) + 1;
      uVar17 = uVar17 + lVar15 * 4;
      do {
        fVar22 = *(float *)(lVar16 + -4 + (longlong)pfVar11);
        fVar23 = pfVar11[-1];
        if ((fVar22 <= fVar23) &&
           (fVar22 = *(float *)(lVar14 + -4 + (longlong)pfVar11), fVar23 <= fVar22)) {
          fVar22 = fVar23;
        }
        fVar23 = *pfVar11;
        pfVar11[-1] = fVar22;
        fVar22 = *(float *)(lVar14 + (longlong)pfVar11 + (lVar3 - lVar4));
        if ((fVar22 <= fVar23) &&
           (fVar22 = *(float *)(lVar14 + (longlong)pfVar11), fVar23 <= fVar22)) {
          fVar22 = fVar23;
        }
        fVar23 = pfVar11[1];
        *pfVar11 = fVar22;
        fVar22 = *(float *)(lVar16 + 4 + (longlong)pfVar11);
        if ((fVar22 <= fVar23) &&
           (fVar22 = *(float *)(lVar14 + 4 + (longlong)pfVar11), fVar23 <= fVar22)) {
          fVar22 = fVar23;
        }
        fVar23 = pfVar11[2];
        pfVar11[1] = fVar22;
        fVar22 = *(float *)(lVar16 + 8 + (longlong)pfVar11);
        if ((fVar22 <= fVar23) &&
           (fVar22 = *(float *)(lVar14 + 8 + (longlong)pfVar11), fVar23 <= fVar22)) {
          fVar22 = fVar23;
        }
        pfVar11[2] = fVar22;
        pfVar11 = pfVar11 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if (uVar12 <= uVar17) {
        return;
      }
    }
    pfVar11 = (float *)(lVar5 + uVar17 * 4);
    lVar14 = uVar12 - uVar17;
    do {
      fVar22 = *pfVar11;
      pfVar1 = (float *)((lVar4 - lVar5) + (longlong)pfVar11);
      fVar23 = *(float *)((longlong)pfVar1 + (lVar3 - lVar4));
      if ((fVar23 <= fVar22) && (fVar23 = *pfVar1, fVar22 <= fVar23)) {
        fVar23 = fVar22;
      }
      *pfVar11 = fVar23;
      pfVar11 = pfVar11 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 14513f3c0 FUN_14513f3c0 body=111 status=ok
// SIG undefined FUN_14513f3c0(void)

longlong FUN_14513f3c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  _Mtx_init_in_situ(param_1,0x102);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  *(longlong *)(param_1 + 0x50) = param_2;
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)*(ushort *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return param_1;
}



// FUNCTION 14513f430 FUN_14513f430 body=15 status=ok
// SIG undefined FUN_14513f430(void)

void FUN_14513f430(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _Mtx_destroy_in_situ();
  return;
}



// FUNCTION 14513f440 FUN_14513f440 body=206 status=ok
// SIG undefined FUN_14513f440(void)

void FUN_14513f440(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Dst;
  
  iVar1 = _Mtx_lock();
  if (iVar1 == 0) {
    FUN_14513f750(param_1,param_2,param_3);
    uVar2 = (*(code *)*param_3)(*(longlong *)(param_1 + 0x60) * 0x28,0,param_3[2]);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    FUN_14513fc30(param_1,param_2);
    _Dst = (void *)(*(code *)*param_3)(*(longlong *)(param_1 + 0x60) * 0x28,0,param_3[2]);
    *(void **)(param_1 + 0x88) = _Dst;
    memmove(_Dst,*(void **)(param_1 + 0x98),*(longlong *)(param_1 + 0x60) * 0x28);
    uVar2 = (*(code *)*param_3)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x1a) * 4,0,
                                param_3[2]);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    _Mtx_unlock(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar1);
}



// FUNCTION 14513f510 FUN_14513f510 body=180 status=ok
// SIG undefined FUN_14513f510(void)

void FUN_14513f510(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock();
  if (iVar1 == 0) {
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x78),0,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x78) = 0;
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x80),0,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x80) = 0;
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x98),0,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x98) = 0;
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x88) = 0;
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_1 + 0x90),0,*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_1 + 0x90) = 0;
    _Mtx_unlock(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar1);
}



// FUNCTION 14513f5d0 FUN_14513f5d0 body=255 status=ok
// SIG undefined FUN_14513f5d0(void)

void FUN_14513f5d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  iVar2 = _Mtx_lock();
  if (iVar2 == 0) {
    uVar4 = 0;
    lVar1 = *(longlong *)(param_2 + 0xa0);
    uVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x50) + 0x1a);
    if (3 < uVar6) {
      lVar3 = (uVar6 - 4 >> 2) + 1;
      uVar4 = lVar3 * 4;
      puVar5 = (undefined4 *)(lVar1 + 8);
      do {
        *(undefined4 *)((longlong)puVar5 + *(longlong *)(param_1 + 0x90) + -lVar1 + -8) = puVar5[-2]
        ;
        *(undefined4 *)((longlong)puVar5 + *(longlong *)(param_1 + 0x90) + -lVar1 + -4) = puVar5[-1]
        ;
        *(undefined4 *)((longlong)puVar5 + (*(longlong *)(param_1 + 0x90) - lVar1)) = *puVar5;
        *(undefined4 *)((longlong)puVar5 + *(longlong *)(param_1 + 0x90) + (4 - lVar1)) = puVar5[1];
        lVar3 = lVar3 + -1;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + uVar4 * 4) =
           *(undefined4 *)(lVar1 + uVar4 * 4);
    }
    _Mtx_unlock(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar2);
}



// FUNCTION 14513f6d0 FUN_14513f6d0 body=113 status=ok
// SIG undefined FUN_14513f6d0(void)

void FUN_14513f6d0(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = _Mtx_lock();
  if (iVar1 == 0) {
    if ((((byte)param_2 & 3) == 1) || ((param_2 >> 2 & 1) != 0)) {
      FUN_14513ff20(param_1);
    }
    memcpy(param_3,*(void **)(param_1 + 0x88),*(longlong *)(param_1 + 0x60) * 0x28);
    _Mtx_unlock(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_C_error(iVar1);
}



// FUNCTION 14513f750 FUN_14513f750 body=1245 status=ok
// SIG undefined FUN_14513f750(void)

void FUN_14513f750(longlong param_1,int param_2,undefined8 *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong local_68;
  ulonglong local_60;
  
  lVar12 = *(longlong *)(param_1 + 0x60);
  uVar13 = 0;
  *(longlong *)(param_1 + 0x70) = lVar12;
  lVar14 = 0;
  if (lVar12 != 0) {
    lVar17 = *(longlong *)(param_1 + 0x68);
    piVar16 = (int *)(*(longlong *)(param_1 + 0x50) + 0x20);
    uVar10 = uVar13;
    lVar14 = lVar12;
    do {
      iVar21 = *piVar16;
      uVar15 = (longlong)piVar16 + (longlong)iVar21;
      if (iVar21 == 0) {
        uVar15 = uVar13;
      }
      lVar14 = (ulonglong)*(ushort *)(uVar15 + 0xe + uVar10) + lVar14;
      *(longlong *)(param_1 + 0x70) = lVar14;
      puVar1 = (ushort *)(uVar15 + 0xe + uVar10);
      uVar10 = uVar10 + 0x38;
      lVar17 = lVar17 + (ulonglong)*puVar1 * 10;
      *(longlong *)(param_1 + 0x68) = lVar17;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar6 = (*(code *)*param_3)(lVar14 * 4,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  uVar6 = (*(code *)*param_3)(*(longlong *)(param_1 + 0x68) * 4,0,param_3[2]);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    memset(*(void **)(param_1 + 0x78),0,*(longlong *)(param_1 + 0x70) * 4);
  }
  local_68 = 0;
  local_60 = 0;
  uVar10 = uVar13;
  uVar15 = uVar13;
  uVar20 = uVar13;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    do {
      piVar16 = (int *)(*(longlong *)(param_1 + 0x50) + 0x20);
      iVar21 = *piVar16;
      uVar19 = (longlong)piVar16 + (longlong)iVar21;
      if (iVar21 == 0) {
        uVar19 = uVar13;
      }
      lVar12 = -1;
      local_res20 = 0;
      lVar17 = -1;
      local_res8 = 0;
      *(uint *)(*(longlong *)(param_1 + 0x78) + uVar10 * 4) =
           (uint)*(ushort *)(uVar19 + 0xe + uVar20);
      uVar10 = uVar10 + 1;
      uVar3 = *(ushort *)(uVar19 + 8 + uVar20);
      uVar8 = *(ushort *)(uVar19 + 10 + uVar20);
      uVar7 = (ulonglong)uVar8;
      local_res18 = 0;
      lVar14 = -1;
      if (uVar3 != 0) {
        lVar14 = local_68;
      }
      if (uVar8 != 0) {
        lVar12 = (ulonglong)uVar3 + local_68;
      }
      uVar8 = *(ushort *)(uVar19 + 0xc + uVar20);
      if (uVar8 != 0) {
        lVar17 = uVar3 + uVar7 + local_68;
      }
      while (((lVar14 != -1 || (lVar12 != -1)) || (lVar17 != -1))) {
        iVar9 = 0x7fffffff;
        iVar21 = 0x7fffffff;
        if (-1 < lVar14) {
          iVar9 = (int)*(short *)(*(longlong *)(param_1 + 0x50) + 0x24 + lVar14 * 0x14);
        }
        iVar11 = iVar21;
        if (-1 < lVar12) {
          iVar11 = (int)*(short *)(*(longlong *)(param_1 + 0x50) + 0x24 + lVar12 * 0x14);
        }
        if (-1 < lVar17) {
          iVar21 = (int)*(short *)(*(longlong *)(param_1 + 0x50) + 0x24 + lVar17 * 0x14);
        }
        iVar18 = iVar9;
        if (iVar11 < iVar9) {
          iVar18 = iVar11;
        }
        if (iVar21 < iVar18) {
          iVar18 = iVar21;
        }
        *(int *)(*(longlong *)(param_1 + 0x78) + uVar10 * 4) = iVar18;
        uVar10 = uVar10 + 1;
        if (iVar9 == iVar18) {
          lVar4 = *(longlong *)(param_1 + 0x50);
          local_res20 = local_res20 + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x28 + lVar14 * 0x14);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 4 + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x2c + lVar14 * 0x14);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 8 + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x30 + lVar14 * 0x14);
          lVar14 = lVar14 + 1;
        }
        else {
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 4 + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 8 + uVar15 * 4) = 0;
        }
        if (iVar11 == iVar18) {
          lVar4 = *(longlong *)(param_1 + 0x50);
          local_res8 = local_res8 + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0xc + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x28 + lVar12 * 0x14);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x10 + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x2c + lVar12 * 0x14);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x14 + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x30 + lVar12 * 0x14);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x18 + uVar15 * 4) =
               *(undefined4 *)(lVar4 + 0x34 + lVar12 * 0x14);
          lVar12 = lVar12 + 1;
        }
        else {
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0xc + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x10 + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x14 + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x18 + uVar15 * 4) = 0;
        }
        if (iVar21 == iVar18) {
          lVar5 = *(longlong *)(param_1 + 0x50);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x1c + uVar15 * 4) =
               *(undefined4 *)(lVar5 + 0x28 + lVar17 * 0x14);
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20 + uVar15 * 4) =
               *(undefined4 *)(lVar5 + 0x2c + lVar17 * 0x14);
          lVar4 = lVar17 * 0x14;
          local_res18 = local_res18 + 1;
          lVar17 = lVar17 + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x24 + uVar15 * 4) =
               *(undefined4 *)(lVar5 + 0x30 + lVar4);
        }
        else {
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x1c + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20 + uVar15 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x24 + uVar15 * 4) = 0;
        }
        uVar15 = uVar15 + 10;
        uVar8 = *(ushort *)(uVar19 + 0xc + uVar20);
        uVar7 = (ulonglong)*(ushort *)(uVar19 + 10 + uVar20);
        if (local_res20 == *(ushort *)(uVar19 + 8 + uVar20)) {
          lVar14 = -1;
        }
        if (local_res8 == uVar7) {
          lVar12 = -1;
        }
        if (local_res18 == uVar8) {
          lVar17 = -1;
        }
      }
      local_60 = local_60 + 1;
      local_68 = (ulonglong)*(ushort *)(uVar19 + 8 + uVar20) + local_68 + uVar7 + uVar8;
      uVar20 = uVar20 + 0x38;
    } while (local_60 < *(ulonglong *)(param_1 + 0x60));
  }
  if ((param_2 < 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    lVar12 = 0x10;
    do {
      lVar17 = *(longlong *)(param_1 + 0x80);
      lVar14 = lVar12 + 0x28;
      uVar13 = uVar13 + 10;
      uVar2 = *(undefined4 *)(lVar17 + -0x38 + lVar14);
      *(undefined4 *)(lVar17 + -0x38 + lVar14) = *(undefined4 *)(lVar17 + -0x30 + lVar14);
      *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -0x30 + lVar14) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -0x34 + lVar14);
      *(undefined4 *)(lVar12 + -0xc + *(longlong *)(param_1 + 0x80)) = uVar2;
      lVar17 = *(longlong *)(param_1 + 0x80);
      uVar2 = *(undefined4 *)(lVar17 + -0x28 + lVar14);
      *(undefined4 *)(lVar17 + -0x28 + lVar14) = *(undefined4 *)(lVar17 + -0x20 + lVar14);
      *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -0x20 + lVar14) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -0x24 + lVar14);
      *(undefined4 *)(lVar12 + 4 + *(longlong *)(param_1 + 0x80)) = uVar2;
      lVar17 = *(longlong *)(param_1 + 0x80);
      uVar2 = *(undefined4 *)(lVar17 + -0x1c + lVar14);
      *(undefined4 *)(lVar17 + -0x1c + lVar14) = *(undefined4 *)(lVar17 + -0x14 + lVar14);
      *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -0x14 + lVar14) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x80) + -0x18 + lVar14);
      *(undefined4 *)(lVar12 + 0x10 + *(longlong *)(param_1 + 0x80)) = uVar2;
      lVar12 = lVar14;
    } while (uVar13 < *(ulonglong *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 14513fc30 FUN_14513fc30 body=746 status=ok
// SIG undefined FUN_14513fc30(void)

void FUN_14513fc30(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar5 = *(longlong *)(param_1 + 0x98);
  uVar13 = 0;
  uVar6 = *(ulonglong *)(param_1 + 0x60);
  uVar7 = uVar6;
  uVar11 = uVar13;
  if ((param_2 & 1) == 0) {
    if (uVar6 != 0) {
      piVar12 = (int *)(*(longlong *)(param_1 + 0x50) + 0x20);
      iVar3 = *piVar12;
      uVar7 = uVar13;
      uVar11 = uVar6;
      uVar14 = uVar13;
      do {
        uVar9 = (longlong)piVar12 + (longlong)iVar3;
        if (iVar3 == 0) {
          uVar9 = uVar13;
        }
        *(undefined4 *)(lVar5 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x10 + uVar9);
        uVar7 = uVar7 + 10;
        *(undefined4 *)(lVar5 + -0x24 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x14 + uVar9);
        *(undefined4 *)(lVar5 + -0x20 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x18 + uVar9);
        *(undefined4 *)(lVar5 + -0x1c + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x1c + uVar9);
        *(undefined4 *)(lVar5 + -0x18 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x20 + uVar9);
        *(undefined4 *)(lVar5 + -0x14 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x24 + uVar9);
        *(undefined4 *)(lVar5 + -0x10 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x28 + uVar9);
        *(undefined4 *)(lVar5 + -0xc + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x2c + uVar9);
        *(undefined4 *)(lVar5 + -8 + uVar7 * 4) = *(undefined4 *)(uVar14 + 0x30 + uVar9);
        lVar10 = uVar14 + 0x34;
        uVar14 = uVar14 + 0x38;
        *(undefined4 *)(lVar5 + -4 + uVar7 * 4) = *(undefined4 *)(lVar10 + uVar9);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined8 *)(lVar5 + uVar11 * 4) = 0;
      *(undefined4 *)(lVar5 + 8 + uVar11 * 4) = 0;
      *(undefined8 *)(lVar5 + 0xc + uVar11 * 4) = 0x3f800000;
      *(undefined8 *)(lVar5 + 0x14 + uVar11 * 4) = 0;
      *(undefined8 *)(lVar5 + 0x1c + uVar11 * 4) = 0;
      *(undefined4 *)(lVar5 + 0x24 + uVar11 * 4) = 0;
      uVar11 = uVar11 + 10;
    }
  }
  if ((int)param_2 < 0) {
    uVar7 = uVar13;
    if (3 < uVar6) {
      puVar8 = (undefined4 *)(lVar5 + 4);
      lVar10 = (uVar6 - 4 >> 2) + 1;
      uVar13 = lVar10 * 0x28;
      uVar7 = lVar10 * 4;
      do {
        uVar1 = puVar8[-1];
        uVar2 = puVar8[3];
        puVar8[-1] = puVar8[1];
        puVar8[1] = *puVar8;
        puVar8[3] = puVar8[5];
        puVar8[5] = puVar8[4];
        *puVar8 = uVar1;
        uVar1 = puVar8[6];
        puVar8[6] = puVar8[8];
        puVar8[8] = puVar8[7];
        puVar8[4] = uVar2;
        uVar2 = puVar8[9];
        puVar8[9] = puVar8[0xb];
        puVar8[0xb] = puVar8[10];
        puVar8[7] = uVar1;
        uVar1 = puVar8[0xd];
        puVar8[0xd] = puVar8[0xf];
        puVar8[0xf] = puVar8[0xe];
        puVar8[10] = uVar2;
        uVar2 = puVar8[0x10];
        puVar8[0x10] = puVar8[0x12];
        puVar8[0x12] = puVar8[0x11];
        puVar8[0xe] = uVar1;
        uVar1 = puVar8[0x13];
        puVar8[0x13] = puVar8[0x15];
        puVar8[0x15] = puVar8[0x14];
        puVar8[0x11] = uVar2;
        uVar2 = puVar8[0x17];
        puVar8[0x17] = puVar8[0x19];
        puVar8[0x19] = puVar8[0x18];
        puVar8[0x14] = uVar1;
        uVar1 = puVar8[0x1a];
        puVar8[0x1a] = puVar8[0x1c];
        puVar8[0x1c] = puVar8[0x1b];
        puVar8[0x18] = uVar2;
        uVar2 = puVar8[0x1d];
        puVar8[0x1d] = puVar8[0x1f];
        puVar8[0x1f] = puVar8[0x1e];
        puVar8[0x1b] = uVar1;
        uVar1 = puVar8[0x21];
        puVar8[0x21] = puVar8[0x23];
        puVar8[0x23] = puVar8[0x22];
        puVar8[0x1e] = uVar2;
        uVar2 = puVar8[0x24];
        puVar8[0x24] = puVar8[0x26];
        uVar4 = puVar8[0x25];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar4;
        puVar8[0x22] = uVar1;
        puVar8 = puVar8 + 0x28;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (uVar7 < uVar6) {
      lVar10 = uVar6 - uVar7;
      puVar8 = (undefined4 *)(lVar5 + 4 + uVar13 * 4);
      do {
        uVar1 = puVar8[-1];
        uVar2 = puVar8[3];
        puVar8[-1] = puVar8[1];
        puVar8[1] = *puVar8;
        puVar8[3] = puVar8[5];
        puVar8[5] = puVar8[4];
        *puVar8 = uVar1;
        uVar1 = puVar8[6];
        puVar8[6] = puVar8[8];
        uVar4 = puVar8[7];
        puVar8[7] = uVar1;
        puVar8[8] = uVar4;
        puVar8[4] = uVar2;
        puVar8 = puVar8 + 10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}



// FUNCTION 14513ff20 FUN_14513ff20 body=947 status=ok
// SIG undefined FUN_14513ff20(void)

void FUN_14513ff20(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  void *_Dst;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar18 = *(longlong *)(param_1 + 0x60);
  _Dst = *(void **)(param_1 + 0x88);
  memcpy(_Dst,*(void **)(param_1 + 0x98),lVar18 * 0x28);
  lVar10 = *(longlong *)(param_1 + 0x90);
  lVar15 = 0;
  lVar11 = *(longlong *)(param_1 + 0x78);
  lVar13 = lVar15;
  lVar14 = lVar15;
  for (; lVar18 != 0; lVar18 = lVar18 + -1) {
    uVar9 = *(uint *)(lVar11 + lVar14 * 4);
    bVar12 = false;
    lVar14 = lVar14 + 1;
    if (uVar9 != 0) {
      lVar16 = lVar13 * 4;
      uVar17 = (ulonglong)uVar9;
      do {
        lVar1 = lVar14 * 4;
        lVar14 = lVar14 + 1;
        fVar19 = *(float *)(lVar10 + (ulonglong)*(uint *)(lVar11 + lVar1) * 4);
        if (fVar19 != 0.0) {
          lVar1 = *(longlong *)(param_1 + 0x80);
          bVar12 = true;
          fVar4 = *(float *)(lVar16 + 4 + lVar1);
          fVar22 = fVar19 * *(float *)(lVar16 + 0x10 + lVar1);
          fVar5 = *(float *)((longlong)_Dst + lVar15 * 4 + 4);
          fVar21 = fVar19 * *(float *)(lVar16 + 0x14 + lVar1);
          fVar20 = fVar19 * *(float *)(lVar16 + 0x18 + lVar1);
          fVar6 = *(float *)(lVar16 + 0xc + lVar1);
          *(float *)((longlong)_Dst + lVar15 * 4) =
               fVar19 * *(float *)(lVar16 + lVar1) + *(float *)((longlong)_Dst + lVar15 * 4);
          fVar7 = *(float *)(lVar16 + 8 + lVar1);
          *(float *)((longlong)_Dst + lVar15 * 4 + 4) = fVar19 * fVar4 + fVar5;
          fVar23 = fVar19 * fVar6 + 1.0;
          *(float *)((longlong)_Dst + lVar15 * 4 + 8) =
               fVar19 * fVar7 + *(float *)((longlong)_Dst + lVar15 * 4 + 8);
          fVar4 = *(float *)((longlong)_Dst + lVar15 * 4 + 0xc);
          fVar5 = *(float *)((longlong)_Dst + lVar15 * 4 + 0x10);
          fVar6 = *(float *)((longlong)_Dst + lVar15 * 4 + 0x14);
          fVar7 = *(float *)((longlong)_Dst + lVar15 * 4 + 0x18);
          *(float *)((longlong)_Dst + lVar15 * 4 + 0xc) =
               ((fVar4 * fVar23 - fVar5 * fVar22) - fVar6 * fVar21) - fVar7 * fVar20;
          *(float *)((longlong)_Dst + lVar15 * 4 + 0x10) =
               (fVar5 * fVar23 + fVar4 * fVar22 + fVar6 * fVar20) - fVar7 * fVar21;
          fVar8 = *(float *)(lVar16 + 0x1c + lVar1);
          *(float *)((longlong)_Dst + lVar15 * 4 + 0x14) =
               (fVar4 * fVar21 - fVar5 * fVar20) + fVar6 * fVar23 + fVar7 * fVar22;
          *(float *)((longlong)_Dst + lVar15 * 4 + 0x18) =
               ((fVar4 * fVar20 + fVar5 * fVar21) - fVar6 * fVar22) + fVar7 * fVar23;
          *(float *)((longlong)_Dst + lVar15 * 4 + 0x1c) =
               fVar19 * fVar8 + *(float *)((longlong)_Dst + lVar15 * 4 + 0x1c);
          fVar4 = *(float *)(lVar16 + 0x24 + lVar1);
          *(float *)((longlong)_Dst + lVar15 * 4 + 0x20) =
               fVar19 * *(float *)(lVar16 + 0x20 + lVar1) +
               *(float *)((longlong)_Dst + lVar15 * 4 + 0x20);
          *(float *)((longlong)_Dst + lVar15 * 4 + 0x24) =
               fVar19 * fVar4 + *(float *)((longlong)_Dst + lVar15 * 4 + 0x24);
        }
        lVar16 = lVar16 + 0x28;
        lVar13 = lVar13 + 10;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if (bVar12) {
        fVar19 = *(float *)((longlong)_Dst + lVar15 * 4 + 0x10);
        fVar4 = *(float *)((longlong)_Dst + lVar15 * 4 + 0xc);
        fVar5 = *(float *)((longlong)_Dst + lVar15 * 4 + 0x14);
        fVar6 = *(float *)((longlong)_Dst + lVar15 * 4 + 0x18);
        fVar19 = fVar4 * fVar4 + fVar19 * fVar19 + fVar5 * fVar5 + fVar6 * fVar6;
        if ((1.1920929e-07 <= fVar19 - 1.0) || (fVar19 - 1.0 <= -1.1920929e-07)) {
          if (fVar19 < 0.0) {
            fVar19 = sqrtf(fVar19);
          }
          else {
            fVar19 = SQRT(fVar19);
          }
          fVar19 = 1.0 / fVar19;
          pfVar2 = (float *)((longlong)_Dst + lVar15 * 4 + 0xc);
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
          pfVar3 = (float *)((longlong)_Dst + lVar15 * 4 + 0xc);
          *pfVar3 = fVar19 * *pfVar2;
          pfVar3[1] = fVar19 * fVar4;
          pfVar3[2] = fVar19 * fVar5;
          pfVar3[3] = fVar19 * fVar6;
        }
      }
    }
    lVar15 = lVar15 + 10;
  }
  return;
}



// FUNCTION 1451402e0 FUN_1451402e0 body=1109 status=ok
// SIG undefined FUN_1451402e0(void)

bool FUN_1451402e0(wchar_t *param_1,char param_2,uint param_3,undefined8 param_4,char param_5)

{
  wchar_t wVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  BOOL BVar4;
  HWND hWnd;
  longlong lVar5;
  FILE *pFVar6;
  wchar_t *_Memory;
  wchar_t *_Filename;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  wchar_t *_Mode;
  code *pcVar11;
  bool bVar12;
  uint local_res18 [2];
  DWORD local_38 [2];
  HKEY local_30;
  
  if (DAT_14c79da58 != (FILE *)0x0) {
    fclose(DAT_14c79da58);
    DAT_14c79da58 = (FILE *)0x0;
  }
  local_res18[0] = 0;
  LVar2 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,L"SOFTWARE\\NVIDIA Corporation\\Global\\NGXCore"
                        ,0,0x20019,&local_30);
  if (LVar2 == 0) {
    local_38[0] = 4;
    LVar2 = RegQueryValueExW(local_30,L"LogLevel",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&DAT_14c79da68,
                             local_38);
    local_38[0] = 4;
    if (LVar2 != 0) {
      DAT_14c79da68 = 0;
    }
    LVar2 = RegQueryValueExW(local_30,L"EnableConsoleLogging",(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPBYTE)local_res18,local_38);
    if (LVar2 != 0) {
      local_res18[0] = 0;
    }
    RegCloseKey(local_30);
  }
  if ((int)DAT_14c79da68 < (int)param_3) {
    DAT_14c79da68 = param_3;
  }
  if (DAT_14c79da68 == 0) {
    return true;
  }
  DAT_14c79da50 = OutputDebugStringA_exref;
  if (param_5 != '\0') {
    DAT_14c79da50 = (code *)0x0;
  }
  DAT_14c79da60 = param_4;
  if (((1 < DAT_14c79da68) && (local_res18[0] != 0)) && (param_5 == '\0')) {
    hWnd = GetConsoleWindow();
    local_38[0] = 0;
    GetWindowThreadProcessId(hWnd,local_38);
    DVar3 = GetCurrentProcessId();
    if (DVar3 != local_38[0]) {
      BVar4 = AllocConsole();
      DAT_14c79da6c = BVar4 == 1;
      SetConsoleTitleA("NGX");
    }
  }
  bVar12 = DAT_14c79da6c == '\0';
  if (param_5 != '\0') {
    DAT_14c79da6c = '\0';
  }
  DAT_14c79da6d = param_5 == '\0' && bVar12;
  if (param_1 != (wchar_t *)0x0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_1[lVar5] != L'\0');
    if ((lVar5 != 0) && ((param_5 == '\0' || (DAT_14c79da68 == 0x100)))) {
      _Mode = L"wt";
      if (param_2 != '\0') {
        _Mode = L"at";
      }
      DAT_14c79da58 = _wfsopen(param_1,_Mode,0x20);
      if (DAT_14c79da58 == (FILE *)0x0) {
        pFVar6 = _wfsopen(param_1,L"r",0x40);
        if (pFVar6 == (FILE *)0x0) {
          FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/common/util-log.cpp"
                        ,0xe2,"ngx::util::setLogFilename",
                        "Warning: Log file directory (%S) appears unwritable.  Logging to file is disabled"
                        ,param_1);
          bVar12 = false;
        }
        else {
          fclose(pFVar6);
          FUN_145140770("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/common/util-log.cpp"
                        ,0xe9,"ngx::util::setLogFilename",
                        "Warning: Log file (%S) exists but is unwritable.  Trying renamed file for logging."
                        ,param_1);
          _Memory = _wcsdup(param_1);
          lVar5 = -1;
          if (_Memory != (wchar_t *)0x0) {
            do {
              lVar9 = lVar5;
              lVar5 = lVar9 + 1;
            } while (param_1[lVar9 + 1] != L'\0');
            lVar5 = lVar9;
            while( true ) {
              pcVar11 = (code *)0x0;
              if (((lVar5 == 0) || (wVar1 = _Memory[lVar5], pcVar11 = (code *)0x0, wVar1 == L'/'))
                 || (pcVar11 = (code *)0x0, wVar1 == L'\\')) goto LAB_14514062b;
              if (wVar1 == L'.') break;
              lVar5 = lVar5 + -1;
            }
            _Memory[lVar5] = L'\0';
            pcVar11 = (code *)(_Memory + lVar5 + 1);
LAB_14514062b:
            lVar9 = lVar9 + 9;
            _Filename = malloc(lVar9 * 2);
            if (_Filename == (wchar_t *)0x0) {
              free(_Memory);
              return false;
            }
            iVar8 = 1;
            pFVar6 = DAT_14c79da58;
            do {
              DAT_14c79da58 = pFVar6;
              if (pcVar11 == (code *)0x0) {
                FUN_145140a20(_Filename,lVar9,L"%ls_%02d",_Memory,iVar8);
              }
              else {
                FUN_145140a20(_Filename,lVar9,L"%ls_%02d.%ls",_Memory,iVar8,pcVar11);
              }
              DAT_14c79da58 = _wfsopen(_Filename,_Mode,0x20);
              if (DAT_14c79da58 != (FILE *)0x0) {
                pcVar10 = "Warning: Logging to renamed logging file (%S)";
                uVar7 = 0x10c;
                param_1 = _Filename;
                goto LAB_1451406ee;
              }
              iVar8 = iVar8 + 1;
              pFVar6 = (FILE *)0x0;
            } while (iVar8 < 9);
            pcVar10 = 
            "Warning: Could not open any log file in given directory (%S).  Logging to file is disabled"
            ;
            uVar7 = 0x110;
LAB_1451406ee:
            FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/common/util-log.cpp"
                          ,uVar7,"ngx::util::setLogFilename",pcVar10,param_1);
            free(_Memory);
            free(_Filename);
          }
          bVar12 = DAT_14c79da58 != (FILE *)0x0;
        }
      }
      else {
        FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/common/util-log.cpp"
                      ,0xd5,"ngx::util::setLogFilename",
                      "Logging to requested file (%S) enabled successfully",param_1);
        bVar12 = true;
      }
      return bVar12;
    }
  }
  return true;
}



// FUNCTION 145140740 FUN_145140740 body=37 status=ok
// SIG undefined FUN_145140740(void)

void FUN_145140740(void)

{
  FUN_1451407a0();
  return;
}



// FUNCTION 145140770 FUN_145140770 body=46 status=ok
// SIG undefined FUN_145140770(void)

void FUN_145140770(void)

{
  if (1 < DAT_14c79da68) {
    FUN_1451407a0();
  }
  return;
}



// FUNCTION 1451407a0 FUN_1451407a0 body=523 status=ok
// SIG undefined FUN_1451407a0(void)

void FUN_1451407a0(void)

{
  char *pcVar1;
  code *pcVar2;
  errno_t eVar3;
  undefined8 *puVar4;
  HANDLE hConsoleOutput;
  undefined8 uVar5;
  tm *ptVar6;
  longlong lVar7;
  undefined8 in_R9;
  undefined4 in_stack_00000028;
  undefined1 auStackY_a8 [32];
  DWORD local_68 [2];
  __time64_t local_60;
  tm local_58;
  ulonglong local_30;
  longlong lVar8;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  if ((((DAT_14c79da58 != (FILE *)0x0) || (DAT_14c79da50 != (code *)0x0)) || (DAT_14c79da6d != '\0')
      ) || (DAT_14c79da60 != (code *)0x0)) {
    puVar4 = (undefined8 *)FUN_144737586();
    __stdio_common_vsprintf_s(*puVar4,&DAT_14c79da80,0x8000,in_R9);
    local_60 = _time64((__time64_t *)0x0);
    eVar3 = _localtime64_s(&local_58,&local_60);
    ptVar6 = &local_58;
    if (eVar3 != 0) {
      ptVar6 = (tm *)0x0;
    }
    if (ptVar6 == (tm *)0x0) {
      FUN_145140740("C:/dvs/p4/build/sw/devrel/libdev/NGX/core/rel_tot/source/common/util-log.cpp",
                    0x149,"ngx::util::logva","Warning: assertion failed: %s");
      if (DAT_14c7fe154 != '\0') {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    strftime(&DAT_14c7a5a80,0x8000,"[%Y-%m-%d %H:%M:%S] ",&local_58);
    FUN_1451409c0(&DAT_14c7a5a80,0x8000,"%s[%s:%d] %s\n",&DAT_14c7a5a80);
    if (DAT_14c79da58 != (FILE *)0x0) {
      fputs(&DAT_14c7a5a80,DAT_14c79da58);
      fflush(DAT_14c79da58);
    }
    pcVar2 = DAT_14c79da50;
    if (DAT_14c79da50 != (code *)0x0) {
      _guard_check_icall(DAT_14c79da50);
      (*pcVar2)(&DAT_14c7a5a80);
    }
    if (DAT_14c79da6c != '\0') {
      lVar8 = -1;
      do {
        lVar7 = lVar8 + 1;
        pcVar1 = (char *)(lVar8 + 0x14c7a5a81);
        lVar8 = lVar7;
      } while (*pcVar1 != '\0');
      hConsoleOutput = GetStdHandle(0xfffffff5);
      WriteConsoleA(hConsoleOutput,&DAT_14c7a5a80,(DWORD)lVar7,local_68,(LPVOID)0x0);
    }
    if (DAT_14c79da6d != '\0') {
      uVar5 = __acrt_iob_func(1);
      FUN_145140a80(uVar5,&DAT_149dfbe46,&DAT_14c7a5a80);
    }
    pcVar2 = DAT_14c79da60;
    if (DAT_14c79da60 != (code *)0x0) {
      _guard_check_icall(DAT_14c79da60);
      (*pcVar2)(&DAT_14c7a5a80,in_stack_00000028,0x7ffc);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStackY_a8);
}



// FUNCTION 1451409c0 FUN_1451409c0 body=86 status=ok
// SIG undefined FUN_1451409c0(void)

int FUN_1451409c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_144737586();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


