// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a4135e FUN_143a4135e body=29 status=ok
// SIG undefined FUN_143a4135e(void)

undefined8 FUN_143a4135e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a4137c FUN_143a4137c body=282 status=ok
// SIG undefined FUN_143a4137c(void)

undefined8 * FUN_143a4137c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a41496 FUN_143a41496 body=375 status=ok
// SIG undefined FUN_143a41496(void)

void FUN_143a41496(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar6 = param_1[0x16];
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar5 = param_1[0x17];
    lVar10 = lVar6 + 0x48;
    if (*(longlong *)(lVar6 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar6 + 0x50);
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(lVar6 + 0x58) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
    if (iVar11 != -1) {
      do {
        lVar10 = *(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar11 * 0x120) == lVar5)
        goto LAB_143a41526;
        iVar11 = *(int *)(lVar10 + 0x118);
      } while (iVar11 != -1);
    }
  }
  lVar10 = 0;
LAB_143a41526:
  lVar6 = lVar10 + 8;
  if (lVar10 == 0) {
    lVar6 = 0;
  }
  if ((param_1[0x15] == 0) || (lVar5 = *(longlong *)(param_1[0x15] + 0x10), lVar5 == 0)) {
    lVar10 = *(longlong *)(lVar6 + 0xf0);
    if (lVar10 == 0) goto LAB_143a415ca;
    *(undefined8 *)(lVar6 + 0xf0) = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar6 + 0xf0);
    if (lVar10 == lVar5) goto LAB_143a415ca;
    *(longlong *)(lVar6 + 0xf0) = lVar5;
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    if (lVar10 == 0) goto LAB_143a415ca;
  }
  LOCK();
  puVar1 = (uint *)(lVar10 + 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar3 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar3 >> 0x1e & 1) == 0) {
      bVar4 = *(byte *)(lVar10 + 0xd);
      plVar7 = (longlong *)FUN_14001cc68(0x10,8);
      plVar7[1] = lVar10;
      plVar9 = DAT_14ca843c0;
      plVar8 = DAT_14ca843c8;
      if ((bVar4 & 2) == 0) {
        do {
          *plVar7 = (longlong)plVar9;
          LOCK();
          bVar12 = plVar9 != DAT_14ca843c0;
          plVar8 = plVar7;
          if (bVar12) {
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar8;
          UNLOCK();
        } while (bVar12);
      }
      else {
        do {
          *plVar7 = (longlong)plVar8;
          LOCK();
          bVar12 = plVar8 != DAT_14ca843c8;
          plVar9 = plVar7;
          if (bVar12) {
            plVar8 = DAT_14ca843c8;
            plVar9 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar9;
          UNLOCK();
        } while (bVar12);
      }
    }
  }
LAB_143a415ca:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a415ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a4160e FUN_143a4160e body=226 status=ok
// SIG undefined FUN_143a4160e(void)

void FUN_143a4160e(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
    lVar1 = param_1[1];
    lVar4 = lVar5 + 0x48;
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x50);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar5 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar6 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar6 * 0x120) == lVar1)
        goto LAB_143a41683;
        iVar6 = *(int *)(lVar4 + 0x118);
      } while (iVar6 != -1);
    }
  }
  lVar4 = 0;
LAB_143a41683:
  lVar5 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined8 *)(lVar5 + 0xc) = *(undefined8 *)((longlong)param_1 + 0x14);
  *(longlong *)(lVar5 + 0x18) = param_1[4];
  *(int *)(lVar5 + 0x20) = (int)param_1[5];
  *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(lVar5 + 0x28) = (int)param_1[6];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x3c);
  lVar1 = param_1[8];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x44);
  *(int *)(lVar5 + 0x30) = (int)param_1[7];
  *(undefined4 *)(lVar5 + 0x34) = uVar2;
  *(int *)(lVar5 + 0x38) = (int)lVar1;
  *(undefined4 *)(lVar5 + 0x3c) = uVar3;
  *(longlong *)(lVar5 + 0x40) = param_1[9];
  FUN_141098b4c(lVar5 + 0xa8);
  *(undefined8 *)(lVar5 + 200) = 0;
  *(undefined8 *)(lVar5 + 0xd0) = 0;
  FUN_14011fb0c(lVar5 + 0xd8);
  return;
}



// FUNCTION 143a416fa FUN_143a416fa body=29 status=ok
// SIG undefined FUN_143a416fa(void)

void FUN_143a416fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a41718 FUN_143a41718 body=52 status=ok
// SIG undefined FUN_143a41718(void)

undefined8 * FUN_143a41718(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adcccb0;
  FUN_148167420(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a4174c FUN_143a4174c body=282 status=ok
// SIG undefined FUN_143a4174c(void)

undefined8 * FUN_143a4174c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a3b683);
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



// FUNCTION 143a41866 FUN_143a41866 body=325 status=ok
// SIG undefined FUN_143a41866(void)

void FUN_143a41866(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar7 = param_1[0x15];
  if (*(int *)(lVar7 + 0x18) != *(int *)(lVar7 + 0x44)) {
    lVar2 = param_1[0x16];
    lVar6 = lVar7 + 0x48;
    if (*(longlong *)(lVar7 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar7 + 0x50);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar7 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(lVar7 + 0x10) + (longlong)iVar8 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar8 * 0x120) == lVar2)
        goto LAB_143a418f5;
        iVar8 = *(int *)(lVar6 + 0x118);
      } while (iVar8 != -1);
    }
  }
  lVar6 = 0;
LAB_143a418f5:
  lVar7 = lVar6 + 8;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)((longlong)param_1 + 0xc4);
  *(undefined8 *)(lVar7 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xbc);
  *(undefined8 *)(lVar7 + 0x18) = param_1[0x19];
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x1a);
  *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)((longlong)param_1 + 0xd4);
  *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_1 + 0x1b);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xe4);
  uVar4 = *(undefined4 *)(param_1 + 0x1d);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0xec);
  *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar7 + 0x34) = uVar3;
  *(undefined4 *)(lVar7 + 0x38) = uVar4;
  *(undefined4 *)(lVar7 + 0x3c) = uVar5;
  *(undefined8 *)(lVar7 + 0x40) = param_1[0x1e];
  FUN_141098b4c(lVar7 + 0xa8);
  *(undefined8 *)(lVar7 + 200) = 0;
  *(undefined8 *)(lVar7 + 0xd0) = 0;
  FUN_14011fb0c(lVar7 + 0xd8);
  FUN_148167420(param_1 + 0x17);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a419a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a419ab FUN_143a419ab body=7795 status=ok
// SIG undefined FUN_143a419ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a419ab(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined **ppuStack_c0;
  undefined8 local_b8;
  code *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb3b008);
  if (cVar1 == '\0') {
    _DAT_14cb3b008 = 0;
    uRam000000014cb3b010 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc2150,1,0);
  local_a8 = (code *)0x14adc2178;
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b030 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc218a;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b038 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb3b040,L"_AudioBuffer");
  atexit((_func_5014 *)&LAB_143a2c3b4);
  FUN_140056680(&DAT_14cb3b050,L"_NumChannels");
  atexit((_func_5014 *)&LAB_143a2c3c5);
  local_a8 = (code *)&DAT_14a19662d;
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc2f90,2,0);
  FUN_1446f470e(&DAT_14cb3b090,L"PlayAudioAtLocation",1);
  FUN_1446f470e(&DAT_14cb3b098,L"PlayPersistentAudio",1);
  FUN_1446f470e(&DAT_14cb3b0a0,L"UpdateAudioVolume",1);
  FUN_1446f470e(&DAT_14cb3b0a8,L"UpdateAudioPitch",1);
  FUN_1446f470e(&DAT_14cb3b0b0,L"UpdateAudioLocation",1);
  FUN_1446f470e(&DAT_14cb3b0b8,L"UpdateAudioRotation",1);
  FUN_1446f470e(&DAT_14cb3b0c0,L"SetBooleanParameter",1);
  FUN_1446f470e(&DAT_14cb3b0c8,L"SetIntegerParameter",1);
  FUN_1446f470e(&DAT_14cb3b0d0,L"SetFloatParameter",1);
  FUN_1446f470e(&DAT_14cb3b0d8,L"SetInitialBooleanParameter",1);
  FUN_1446f470e(&DAT_14cb3b0e0,L"SetInitialIntegerParameter",1);
  FUN_1446f470e(&DAT_14cb3b0e8,L"SetInitialFloatParameter",1);
  FUN_1446f470e(&DAT_14cb3b0f0,L"SetPaused",1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc3820,1,0);
  local_a8 = (code *)0x14adc38c8;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b110 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc38d6;
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b118 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb3b120,L"_SpectrumBuffer");
  atexit((_func_5014 *)&LAB_143a2f08e);
  FUN_140056680(&DAT_14cb3b130,L"_NumChannels");
  atexit((_func_5014 *)&LAB_143a2f09f);
  FUN_140056680(&DAT_14cb3b140,L"_Resolution");
  atexit((_func_5014 *)&LAB_143a2f0b0);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc3e80,1,0);
  FUN_1446f470e(&DAT_14cb3b168,L"GetViewPropertiesGPU",1);
  FUN_1446f470e(&DAT_14cb3b170,L"GetClipSpaceTransformsGPU",1);
  FUN_1446f470e(&DAT_14cb3b178,L"GetViewSpaceTransformsGPU",1);
  FUN_1446f470e(&DAT_14cb3b180,L"GetCameraPropertiesCPU/GPU",1);
  FUN_1446f470e(&DAT_14cb3b188,L"GetFieldOfView",1);
  FUN_1446f470e(&DAT_14cb3b190,L"CalculateParticleDistancesCPU",1);
  FUN_1446f470e(&DAT_14cb3b198,L"QueryClosestParticlesCPU",1);
  FUN_1446f470e(&DAT_14cb3b1a0,L"GetTAAJitter",1);
  FUN_1446f470e(&DAT_14cb3b1a8,L"ApplyPreViewTranslationToPositionGPU",1);
  FUN_1446f470e(&DAT_14cb3b1b0,L"RemovePreViewTranslationFromPositionGPU",1);
  FUN_1446f470e(&DAT_14cb3b1b8,L"GbxGetCameraLocation",1);
  FUN_1446f470e(&DAT_14cb3b1c0,L"GbxGetCameraFieldOfView",1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc4600,1,0);
  FUN_1446f470e(&DAT_14cb3b1e0,L"QuerySceneDepthGPU",1);
  FUN_1446f470e(&DAT_14cb3b1e8,L"QueryScenePartialDepthGPU",1);
  FUN_1446f470e(&DAT_14cb3b1f0,L"QueryCustomDepthGPU",1);
  FUN_1446f470e(&DAT_14cb3b1f8,L"QueryMeshDistanceFieldGPU",1);
  FUN_1446f470e(&DAT_14cb3b200,L"PerformCollisionQuerySyncCPU",1);
  FUN_1446f470e(&DAT_14cb3b208,L"PerformCollisionQueryAsyncCPU",1);
  FUN_1446f470e(&DAT_14cb3b210,L"IssueAsyncRayTraceGpu",1);
  FUN_1446f470e(&DAT_14cb3b218,L"CreateAsyncRayTraceGpu",1);
  FUN_1446f470e(&DAT_14cb3b220,L"ReserveAsyncRayTraceGpu",1);
  FUN_1446f470e(&DAT_14cb3b228,L"ReadAsyncRayTraceGpu",1);
  FUN_140056680(&DAT_14cb3b230,L"SystemLWCTile_");
  atexit((_func_5014 *)&LAB_143a2f960);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3b240);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb3b240,4000);
  atexit((_func_5014 *)&LAB_143a2f971);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc4db0,1,0);
  FUN_1446f470e(&DAT_14cb3b280,L"SampleColorCurve",1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc5370,1,0);
  FUN_1446f470e(&DAT_14cb3b2a0,L"SampleCubeTexture",1);
  FUN_1446f470e(&DAT_14cb3b2a8,L"TextureDimensions",1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc5900,1,0);
  FUN_1446f470e(&DAT_14cb3b2c8,L"SampleNoiseField",1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc5ea0,1,0);
  FUN_1446f470e(&DAT_14cb3b2e8,L"SampleCurve",1);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc6720,1,0);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb3b308,L"fx.Niagara.LUT.OptimizeThreshold",&DAT_14c76285c,
                L"Error Threshold used when optimizing Curve LUTs, setting to 0.0 or below will result in no optimization\n"
               );
  atexit(FUN_143a314e6);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3b320,L"fx.Niagara.LUT.VerifyPostLoad",&DAT_14cb3b318,
                L"Enable to verify LUTs match in PostLoad vs the Loaded Data\n");
  atexit(FUN_143a3152b);
  local_b8 = 1;
  ppuStack_c0 = &PTR_FUN_14adc6b30;
  local_c8 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14adc6b50);
  FUN_1446f470e(&DAT_14cb3b378,L"ReceiveParticleData",1);
  local_b8 = 1;
  ppuStack_c0 = &PTR_FUN_14adc7920;
  local_c8 = 1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc7970,2,&PTR_FUN_14adc7940);
  FUN_1446f470e(&DAT_14cb3b3d0,L"StoreParticleData",1);
  FUN_1446f470e(&DAT_14cb3b3d8,L"ExportParticleData",1);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3b3e0,L"fx.Niagara.NDIExport.GPUMaxReadbackCount",&DAT_14c762860);
  atexit(FUN_143a31b68);
  local_b8 = 0;
  local_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc88a0,1,0);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143a3e914;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb3b490,6,&local_a8);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3b498,L"fx.Niagara.Grid2D.CubicInterpMethod",&DAT_14cb3b4a8,
                L"0=Bridson, 1=monotonic/Fedkiw.\n");
  atexit(FUN_143a32f6e);
  FUN_140056680(&DAT_14cb3b4b0,L"_Grid");
  atexit((_func_5014 *)&LAB_143a32fb3);
  FUN_140056680(&DAT_14cb3b4c0,L"_OutputGrid");
  atexit((_func_5014 *)&LAB_143a32fc4);
  FUN_140056680(&DAT_14cb3b4d0,L"_GridSampler");
  atexit((_func_5014 *)&LAB_143a32fd5);
  local_a8 = (code *)0x14adcd044;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b4e0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc89f4;
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b4e8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a01;
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b4f0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a0e;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b4f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a1e;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b500 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a2e;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b508 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a45;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b510 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a55;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b518 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a65;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b520 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a7c;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b528 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a8c;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b530 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a9c;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b538 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ab3;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b540 = (ulonglong)uVar2;
  local_a8 = (code *)0x14a8a9193;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b548 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ac1;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b550 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ad6;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b558 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ae6;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b560 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8afe;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b568 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b18;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b570 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b37;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b578 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b4f;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b580 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b6e;
  local_a0 = 0x23;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b588 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b92;
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b590 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ba1;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b598 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8bb8;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5a0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8bd7;
  local_a0 = 0x23;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5a8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8bfb;
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5b0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c0c;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5b8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c25;
  local_a0 = 0x1f;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5c0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c45;
  local_a0 = 0x24;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5c8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c6a;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5d0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c80;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5d8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c9d;
  local_a0 = 0x21;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5e0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8cbf;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5e8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8cd8;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5f0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8cf0;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b5f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8d0a;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b600 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cb3b608,"Attribute At Index");
  atexit((_func_5014 *)&LAB_143a32fe6);
  local_a8 = (code *)0x14adc8d34;
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b618 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8d3e;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b620 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb3b628,L"AttributeIndices");
  atexit((_func_5014 *)&LAB_143a32ff7);
  local_a8 = (code *)0x14adc8d5b;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b638 = (ulonglong)uVar2;
  DAT_14cb3b640 = 0;
  DAT_14cb3b648 = FUN_144830b78(&DAT_14cb3b648,&DAT_14cb42160);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb3b650,L"fx.Niagara.Grid2D.ResolutionMultiplier",&DAT_14c762864,
                L"Optional global modifier to grid resolution\n");
  atexit(FUN_143a33008);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3b660,L"fx.Niagara.Grid2D.OverrideFormat",&DAT_14c762868);
  atexit(FUN_143a3304d);
  local_b8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  local_c8 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adc94c0,1,0);
  local_b8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  local_c8 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adca1f0,1,0);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143a40680;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb3b728,6,&local_a8);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb3b730,L"fx.Niagara.Grid3D.ResolutionMultiplier",&DAT_14c76286c,
                L"Optional global modifier to grid resolution\n");
  atexit(FUN_143a3818d);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3b740,L"fx.Niagara.Grid3D.OverrideFormat",&DAT_14c762870,
                L"Optional override for all grids to use this format.\n");
  atexit(FUN_143a381d2);
  FUN_140056680(&DAT_14cb3b750,L"_NumTiles");
  atexit((_func_5014 *)&LAB_143a38217);
  FUN_140056680(&DAT_14cb3b760,L"_OneOverNumTiles");
  atexit((_func_5014 *)&LAB_143a38228);
  FUN_140056680(&DAT_14cb3b770,L"_UnitClampMin");
  atexit((_func_5014 *)&LAB_143a38239);
  FUN_140056680(&DAT_14cb3b780,L"_UnitClampMax");
  atexit((_func_5014 *)&LAB_143a3824a);
  FUN_140056680(&DAT_14cb3b790,L"_Grid");
  atexit((_func_5014 *)&LAB_143a3825b);
  FUN_140056680(&DAT_14cb3b7a0,L"_OutputGrid");
  atexit((_func_5014 *)&LAB_143a3826c);
  FUN_140056680(&DAT_14cb3b7b0,L"_GridSampler");
  atexit((_func_5014 *)&LAB_143a3827d);
  local_a8 = (code *)0x14adcd044;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b7c0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8d34;
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7c8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8d3e;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7d0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca37c;
  local_a0 = 0x22;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7d8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc89f4;
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7e0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a01;
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7e8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca39f;
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7f0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca3b0;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b7f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca3c9;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b800 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca3e0;
  local_a0 = 0x1b;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b808 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a0e;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b810 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a45;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b818 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a7c;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b820 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8a8c;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b828 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ab3;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b830 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ae6;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b838 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8afe;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b840 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b18;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b848 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca3fc;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b850 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca413;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b858 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca42a;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b860 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca441;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b868 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca456;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b870 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca475;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b878 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca494;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b880 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca4b3;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b888 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca4d0;
  local_a0 = 0x20;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b890 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca4f1;
  local_a0 = 0x20;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b898 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca512;
  local_a0 = 0x20;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8a0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca533;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8a8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca552;
  local_a0 = 0x25;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8b0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca578;
  local_a0 = 0x25;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8b8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca59e;
  local_a0 = 0x25;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8c0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca5c4;
  local_a0 = 0x23;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8c8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b37;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8d0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b4f;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8d8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b6e;
  local_a0 = 0x23;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8e0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8b92;
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8e8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8ba1;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8f0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8bb8;
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b8f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8bd7;
  local_a0 = 0x23;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b900 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8bfb;
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b908 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c0c;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b910 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c25;
  local_a0 = 0x1f;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b918 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c45;
  local_a0 = 0x24;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b920 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c6a;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b928 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c80;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b930 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8c9d;
  local_a0 = 0x21;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b938 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8cbf;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b940 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8cd8;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b948 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8cf0;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b950 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8d0a;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3b958 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adc8d5b;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b960 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adca5e8;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3b968 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb3b970,L"AttributeIndices");
  atexit((_func_5014 *)&LAB_143a3828e);
  FUN_140056680(&DAT_14cb3b980,L"PerAttributeData");
  atexit((_func_5014 *)&LAB_143a3829f);
  DAT_14cb3b990 = 0;
  DAT_14cb3b998 = FUN_144830b78(&DAT_14cb3b998,&DAT_14cb42160);
  FUN_1400b22c2(&DAT_14cb3b9a0,"Attribute At Index");
  atexit((_func_5014 *)&LAB_143a382b0);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a43820 FUN_143a43820 body=2608 status=ok
// SIG undefined FUN_143a43820(void)

ulonglong FUN_143a43820(longlong param_1,void *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  uint uVar23;
  ushort uVar24;
  longlong lVar25;
  int iVar26;
  longlong *plVar27;
  bool bVar28;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  int local_9c;
  void *local_98;
  int local_8c;
  code *local_88;
  void **local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar17 = 0;
  memset(param_2,0,0xd0);
  FUN_148167088(param_2);
  local_80 = &local_98;
  local_e0 = *(code **)(param_3 + 0x100);
  local_88 = (code *)&local_e0;
  local_98 = param_2;
  FUN_148172aea(param_1 + 0xa0,local_c8 + 2,&local_88,0);
  if ((longlong)*(int *)(param_3 + 0x110) != 0) {
    plVar13 = *(longlong **)(param_3 + 0x108);
    plVar27 = plVar13 + (longlong)*(int *)(param_3 + 0x110) * 2;
LAB_143a438c8:
    lVar20 = *plVar13;
    lVar3 = *(longlong *)(lVar20 + 0x28);
    if (lVar3 == 0) goto LAB_143a43941;
    iVar6 = *(int *)(param_1 + 0xf8);
    if (iVar6 == *(int *)(lVar3 + 0x68)) {
      if (1 < iVar6) {
        lVar25 = 0;
        do {
          uVar24 = *(ushort *)(*(longlong *)(param_1 + 0xf0) + lVar25);
          uVar17 = (ulonglong)uVar24;
          uVar18 = *(ushort *)(*(longlong *)(lVar3 + 0x60) + lVar25);
          if (uVar24 == uVar18) {
            if (uVar24 == 0) break;
          }
          else {
            if (0x7f < (uVar18 | uVar24)) goto LAB_143a4392e;
            uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            uVar19 = (ulonglong)uVar18;
            uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
            if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[uVar19]) goto LAB_143a4392e;
          }
          lVar25 = lVar25 + 2;
        } while( true );
      }
    }
    else if (*(int *)(lVar3 + 0x68) + iVar6 != 1) goto LAB_143a43941;
    goto LAB_143a43953;
  }
  goto LAB_143a43b28;
LAB_143a4392e:
  if (uVar24 == uVar18) {
LAB_143a43953:
    if (((lVar20 != 0) && (lVar20 = *(longlong *)(lVar20 + 0x18), lVar20 != 0)) &&
       (lVar3 = *(longlong *)(lVar20 + 0x58), lVar3 != 0)) {
      FUN_1400b22c2(&local_e0);
      iVar6 = (int)uStack_d8;
      if ((int)uStack_d8 < 2) {
        local_88 = (code *)0x0;
        uVar12 = *(uint *)(param_1 + 0x108);
        _Src = *(void **)(param_1 + 0x100);
        local_80 = (void **)CONCAT44(local_80._4_4_,uVar12);
        if ((longlong)(int)uVar12 == 0) {
          local_80 = (void **)(ulonglong)uVar12;
        }
        else {
          FUN_1446dd670(&local_88,uVar12,0);
          memcpy(local_88,_Src,(longlong)(int)uVar12 * 2);
        }
      }
      else {
        iVar26 = *(int *)(param_1 + 0x108) + -1;
        if (*(int *)(param_1 + 0x108) == 0) {
          iVar26 = 0;
        }
        local_88 = local_e0;
        local_e0 = (code *)0x0;
        iVar5 = uStack_d8._4_4_;
        local_80 = uStack_d8;
        uStack_d8 = (void **)0x0;
        iVar15 = iVar26 + iVar6;
        if (iVar15 < iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar26);
        }
        if (iVar5 < iVar15) {
          FUN_1446f8c06(&local_88);
        }
        FUN_1400020e8(&local_88,*(undefined8 *)(param_1 + 0x100));
      }
      if (local_e0 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong)*(int *)(lVar20 + 0xb0) == 0) goto LAB_143a43af6;
      plVar27 = *(longlong **)(lVar20 + 0xa8);
      plVar13 = plVar27 + *(int *)(lVar20 + 0xb0);
      lVar20 = 0;
      goto LAB_143a43a38;
    }
    goto LAB_143a43b25;
  }
LAB_143a43941:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar27) goto LAB_143a43b25;
  goto LAB_143a438c8;
  while( true ) {
    lVar20 = lVar20 + 1;
    plVar27 = plVar27 + 1;
    if (plVar27 == plVar13) break;
LAB_143a43a38:
    lVar25 = *plVar27;
    FUN_14029eeae(lVar20 * 0x48 + *(longlong *)(lVar3 + 0x290),&local_e0);
    if ((int)uStack_d8 == (int)local_80) {
      bVar28 = true;
      if (1 < (int)uStack_d8) {
        lVar22 = 0;
        while( true ) {
          uVar24 = *(ushort *)(local_e0 + lVar22);
          uVar12 = (uint)uVar24;
          uVar18 = *(ushort *)(local_88 + lVar22);
          uVar23 = (uint)uVar18;
          if (uVar24 != uVar18) {
            if ((uVar18 | uVar24) < 0x80) {
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar24];
              uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar18];
              if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar18]) goto LAB_143a43a8f;
            }
            iVar6 = uVar12 - uVar23;
            goto LAB_143a43ad1;
          }
          if (uVar24 == 0) break;
LAB_143a43a8f:
          lVar22 = lVar22 + 2;
        }
        iVar6 = 0;
LAB_143a43ad1:
        bVar28 = iVar6 == 0;
      }
    }
    else {
      bVar28 = (int)local_80 + (int)uStack_d8 == 1;
    }
    if (local_e0 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (bVar28) {
      lVar20 = *(longlong *)(lVar25 + 0x28);
      goto LAB_143a43b03;
    }
  }
LAB_143a43af6:
  lVar25 = 0;
  lVar20 = 0;
LAB_143a43b03:
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (lVar20 == 0 || lVar25 == 0) {
LAB_143a43b25:
    uVar17 = 0;
    goto LAB_143a43b28;
  }
  local_9c = 0;
  local_c8[2] = 0;
  uStack_b0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_e8 = (code **)0x0;
  FUN_148167150(param_1,local_c8 + 2,local_c8,&local_9c);
  bVar28 = false;
  if ((local_9c < 5) && (bVar28 = false, (int)uStack_b0 == 1)) {
    bVar28 = DAT_14c762874 != 0;
  }
  if (*(int *)(lVar25 + 0xa8) != *(int *)(lVar25 + 0xd4)) {
    lVar3 = *(longlong *)(param_3 + 0x100);
    lVar22 = lVar25 + 0xd8;
    if (*(longlong *)(lVar25 + 0xe0) != 0) {
      lVar22 = *(longlong *)(lVar25 + 0xe0);
    }
    iVar6 = *(int *)(lVar22 + (ulonglong)
                              (*(int *)(lVar25 + 0xe8) - 1U &
                              (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        plVar13 = (longlong *)(*(longlong *)(lVar25 + 0xa0) + (longlong)iVar6 * 0x18);
        if (*plVar13 == lVar3) {
          if (plVar13 != (longlong *)0x0) {
            lVar3 = plVar13[1];
            *(longlong *)((longlong)local_98 + 0xc0) = lVar25;
            *(longlong *)((longlong)local_98 + 200) = lVar3;
            if (((local_9c < 1) || (lVar3 == 0)) || ((bool)*(char *)(lVar3 + 0x5a) == bVar28))
            goto LAB_143a43c77;
            uVar17 = 0;
            goto LAB_143a43d92;
          }
          break;
        }
        iVar6 = (int)plVar13[2];
      } while (iVar6 != -1);
    }
  }
  *(longlong *)((longlong)local_98 + 0xc0) = lVar25;
  *(undefined8 *)((longlong)local_98 + 200) = 0;
LAB_143a43c77:
  local_e0 = *(code **)(param_1 + 0x28);
  uStack_d8 = *(void ***)(param_3 + 0x100);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar3 + 0xc60);
  local_d0 = lVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143a440d9;
    if (iVar6 != 1) goto LAB_143a43cb9;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143a440d9;
LAB_143a43cca:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*(int *)(lVar3 + 0xc60) == 2)) {
LAB_143a441f0:
        pcVar4 = local_e0;
        local_88 = (code *)&uStack_d8;
        FUN_148172ff6(local_e0 + 0x10,&local_8c,&local_88,0);
        lVar20 = *(longlong *)(pcVar4 + 0x10);
        goto LAB_143a4421b;
      }
      if (*(int *)(lVar3 + 0xc60) == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a441f0;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143a43e59;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_143a43e59:
        puVar21 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar21 + 0x18);
        uVar12 = puVar10[0x12];
        if (puVar16 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar23 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar23 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar21 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar21 + 0x18);
          uVar12 = 0;
          if (puVar16 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_143a43ed9;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143a43ed9:
      *(uint **)(puVar10 + 0x10) = puVar16;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar21,0);
      *puVar21 = &PTR_FUN_14add4180;
      *(undefined4 *)(puVar21 + 0x15) = (undefined4)local_e0;
      *(undefined4 *)((longlong)puVar21 + 0xac) = local_e0._4_4_;
      *(int *)(puVar21 + 0x16) = (int)uStack_d8;
      *(int *)((longlong)puVar21 + 0xb4) = uStack_d8._4_4_;
      puVar21[0x17] = local_d0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar6 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar19 = 1;
        if ((char)uVar17 != '\x06') {
          uVar19 = uVar17;
        }
        uVar17 = uVar19;
        uVar11 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar21[0xf] = uVar11;
      puVar21[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar6;
      if (puVar21 == (undefined8 *)0x0) {
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(puVar21);
        LOCK();
        piVar1 = (int *)(puVar21 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    else {
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14add4160;
      local_60 = (undefined4)local_e0;
      uStack_5c = local_e0._4_4_;
      uStack_58 = (int)uStack_d8;
      uStack_54 = uStack_d8._4_4_;
      local_50 = local_d0;
      local_88 = FUN_143a54060;
      local_e8 = &local_88;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3c9a0);
      if (local_88 != (code *)0x0) {
        pppuVar14 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar14 = &local_68;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  else {
LAB_143a43cb9:
    if (iVar6 != 0x10) goto LAB_143a43cca;
LAB_143a440d9:
    pcVar4 = local_e0;
    local_88 = (code *)&uStack_d8;
    FUN_148172ff6(local_e0 + 0x10,&local_8c,&local_88,0);
    lVar20 = *(longlong *)(pcVar4 + 0x10);
LAB_143a4421b:
    *(longlong *)(lVar20 + 0x110 + (longlong)local_8c * 0x120) = local_d0;
  }
  uVar17 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
LAB_143a43d92:
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
LAB_143a43b28:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a44252 FUN_143a44252 body=1272 status=ok
// SIG undefined FUN_143a44252(void)

void FUN_143a44252(longlong param_1,undefined8 param_2,longlong param_3)

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
  FUN_148167420(param_2);
  FUN_148173870(param_1 + 0xa0,*(undefined8 *)(param_3 + 0x100));
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a446a5;
    if (iVar7 != 1) goto LAB_143a442bd;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a446a5;
  }
  else {
LAB_143a442bd:
    if (iVar7 == 0x10) goto LAB_143a446a5;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a446a5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a446a5;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a4442a;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a4442a:
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
          goto LAB_143a444aa;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a444aa:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add41b0;
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
    local_48 = &PTR_LAB_14add4190;
    local_68[0] = &LAB_143a542f2;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3c9a4);
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



// FUNCTION 143a44760 FUN_143a44760 body=502 status=ok
// SIG undefined FUN_143a44760(void)

undefined8 FUN_143a44760(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [4];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_3 + 0x100);
  iVar7 = (int)((ulonglong)lVar2 >> 0x20);
  if (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0xd4)) {
LAB_143a447fd:
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe0);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & (int)lVar2 + iVar7 * 0x17)
                             * 4);
    if (iVar6 == -1) goto LAB_143a447fd;
    lVar5 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x18);
      if (*plVar1 == lVar2) {
        if (plVar1 == (longlong *)0x0) goto LAB_143a447fd;
        lVar5 = plVar1[1];
        break;
      }
      iVar6 = (int)plVar1[2];
    } while (iVar6 != -1);
  }
  if ((*(longlong *)(lVar5 + 200) != 0) || (lVar3 = *(longlong *)(lVar5 + 0xc0), lVar3 == 0))
  goto LAB_143a44815;
  if (*(int *)(lVar3 + 0xa8) == *(int *)(lVar3 + 0xd4)) {
LAB_143a448b6:
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3 + 0xd8;
    if (*(longlong *)(lVar3 + 0xe0) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0xe0);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0xe8) - 1U & (int)lVar2 + iVar7 * 0x17) *
                             4);
    if (iVar7 == -1) goto LAB_143a448b6;
    lVar4 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(lVar3 + 0xa0) + (longlong)iVar7 * 0x18);
      if (*plVar1 == lVar2) {
        if (plVar1 == (longlong *)0x0) goto LAB_143a448b6;
        lVar4 = plVar1[1];
        break;
      }
      iVar7 = (int)plVar1[2];
    } while (iVar7 != -1);
  }
  *(longlong *)(lVar5 + 200) = lVar4;
  local_24 = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = 0;
  FUN_148167150(0,local_48 + 2,local_48,&local_24);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
LAB_143a44815:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 143a44957 FUN_143a44957 body=69 status=ok
// SIG undefined FUN_143a44957(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a44957(void)

{
  _DAT_14cb3c108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a44999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c110,1);
  return;
}



// FUNCTION 143a4499c FUN_143a4499c body=49 status=ok
// SIG undefined FUN_143a4499c(void)

void FUN_143a4499c(void)

{
  FUN_1447a1747(DAT_14cb3c118,DAT_14cb3c120);
  if (DAT_14cb3c118 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a449f0 FUN_143a449f0 body=2350 status=ok
// SIG undefined FUN_143a449f0(void)

undefined8 FUN_143a449f0(longlong param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_128 [32];
  code **local_108;
  longlong local_f8;
  longlong lStack_f0;
  uint *local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong *local_98;
  int local_8c;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 2) = 0x1d;
  param_2[6] = -1;
  iVar8 = FUN_144830b78(param_2 + 0xc,&DAT_14cb42160);
  param_2[0xc] = iVar8;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  if ((DAT_14c762890 != 0) && (uVar12 = 1, (*(byte *)(param_1 + 0x30) & 4) == 0))
  goto LAB_143a44a83;
  if ((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)*(byte *)(param_2 + 2) * 0x30) + 2) &
      0x40) == 0) {
    uVar12 = 0;
    goto LAB_143a44a83;
  }
  iVar9 = (int)((float)*(int *)(param_1 + 0x38) * DAT_14c762894);
  iVar8 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    iVar8 = iVar9;
  }
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  *param_2 = iVar8;
  iVar9 = (int)((float)*(int *)(param_1 + 0x3c) * DAT_14c762894);
  iVar8 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    iVar8 = iVar9;
  }
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  param_2[1] = iVar8;
  FUN_1404e5848(param_2 + 6,param_3 + 0x1e8,param_1 + 0x40);
  FUN_143a45320(param_3,param_2);
  local_f8 = *(longlong *)(param_1 + 0x28);
  lStack_f0 = *(longlong *)(param_3 + 0x100);
  FUN_14817423c(&local_e8,param_2);
  if (*(longlong *)(param_2 + 4) == 0) {
    local_98 = (longlong *)0x0;
  }
  else {
    local_98 = (longlong *)FUN_1447b4020();
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 == 2) goto LAB_143a45081;
    if (iVar8 != 1) goto LAB_143a44b87;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 == DVar11) goto LAB_143a45081;
LAB_143a44b90:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2)) {
LAB_143a451e4:
        lVar5 = local_f8;
        local_88[0] = (code *)&lStack_f0;
        FUN_14818184c(local_f8 + 0x10,&local_8c);
        lVar5 = *(longlong *)(lVar5 + 0x10);
        *(uint **)(lVar5 + 8 + (longlong)local_8c * 0x38) = local_e8;
        if ((local_98 != (longlong *)0x0) &&
           (lVar15 = (**(code **)(*local_98 + 0xa0))(), lVar15 != 0)) {
          lVar5 = lVar5 + (longlong)local_8c * 0x38;
          lVar15 = *(longlong *)(lVar15 + 0x10);
          lVar6 = *(longlong *)(lVar5 + 0x18);
          if (lVar6 != lVar15) {
            *(longlong *)(lVar5 + 0x18) = lVar15;
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            if (lVar6 != 0) {
              LOCK();
              puVar14 = (uint *)(lVar6 + 8);
              uVar19 = *puVar14;
              *puVar14 = *puVar14 - 1;
              UNLOCK();
              if ((uVar19 & 0x3fffffff) == 1) {
                puVar14 = (uint *)(lVar6 + 8);
                LOCK();
                uVar19 = *puVar14;
                *puVar14 = *puVar14 | 0x40000000;
                UNLOCK();
                if ((uVar19 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar6 + 0xd);
                  plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar16[1] = lVar6;
                  plVar18 = DAT_14ca843c0;
                  plVar17 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar16 = (longlong)plVar18;
                      LOCK();
                      bVar23 = plVar18 != DAT_14ca843c0;
                      plVar17 = plVar16;
                      if (bVar23) {
                        plVar18 = DAT_14ca843c0;
                        plVar17 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar17;
                      UNLOCK();
                    } while (bVar23);
                  }
                  else {
                    do {
                      *plVar16 = (longlong)plVar17;
                      LOCK();
                      bVar23 = plVar17 != DAT_14ca843c8;
                      plVar18 = plVar16;
                      if (bVar23) {
                        plVar17 = DAT_14ca843c8;
                        plVar18 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar18;
                      UNLOCK();
                    } while (bVar23);
                  }
                }
              }
            }
          }
        }
        goto LAB_143a44cc7;
      }
      if (iVar8 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_143a451e4;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar2;
      if (puVar14 != (uint *)0x0) goto LAB_143a44d7d;
      while( true ) {
        uVar19 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar19 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar19 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        FUN_140217a48(puVar2);
        puVar14 = (uint *)*puVar2;
LAB_143a44d7d:
        puVar22 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar22 + 0x22);
        uVar19 = puVar14[0x12];
        if (puVar20 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar3 = *puVar14;
          *puVar14 = *puVar14 + uVar19 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar19) != 0xffffffff) break;
          puVar14 = (uint *)*puVar2;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          puVar22 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar22 + 0x22);
          uVar19 = 0;
          if (puVar20 <= puVar14 + 0x4000) {
            uVar19 = 1;
            goto LAB_143a44dfd;
          }
        }
      }
      uVar19 = uVar19 + 1;
LAB_143a44dfd:
      *(uint **)(puVar14 + 0x10) = puVar20;
      puVar14[0x12] = uVar19;
      iVar8 = 0;
      FUN_1447247dc(puVar22,0);
      *puVar22 = &PTR_FUN_14add4300;
      puVar22[0x15] = local_f8;
      puVar22[0x16] = lStack_f0;
      puVar22[0x19] = local_d8;
      puVar22[0x17] = local_e8;
      puVar22[0x18] = lStack_e0;
      *(undefined4 *)(puVar22 + 0x1a) = local_d0;
      *(undefined4 *)((longlong)puVar22 + 0xd4) = uStack_cc;
      *(undefined4 *)(puVar22 + 0x1b) = uStack_c8;
      *(undefined4 *)((longlong)puVar22 + 0xdc) = uStack_c4;
      puVar22[0x1c] = local_c0;
      *(undefined4 *)(puVar22 + 0x1d) = local_b8;
      puVar22[0x1e] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(puVar22 + 0x1f) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar22 + 0xfc) = local_a8._4_4_;
      local_a8 = 0;
      *(undefined4 *)(puVar22 + 0x20) = local_a0;
      puVar22[0x21] = local_98;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar19 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
        }
        else {
          uVar21 = 2;
        }
      }
      else {
        iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
      }
      if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
      }
      puVar22[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar22[9] = puVar22;
      puVar22[10] = puVar22;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar7 = 1;
        if ((char)uVar21 != '\x06') {
          uVar7 = uVar21;
        }
        uVar21 = uVar7;
        uVar12 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar22[0xf] = uVar12;
      puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar22 + 0x1c) = iVar8;
      if (puVar22 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar22);
        LOCK();
        piVar1 = (int *)(puVar22 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar22)(puVar22,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x70,8);
      *local_78 = (longlong)&PTR_LAB_14add42e0;
      local_78[1] = local_f8;
      local_78[2] = lStack_f0;
      local_78[5] = local_d8;
      local_78[3] = (longlong)local_e8;
      local_78[4] = lStack_e0;
      *(undefined4 *)(local_78 + 6) = local_d0;
      *(undefined4 *)((longlong)local_78 + 0x34) = uStack_cc;
      *(undefined4 *)(local_78 + 7) = uStack_c8;
      *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_c4;
      *(undefined4 *)(local_78 + 9) = local_b8;
      local_78[8] = local_c0;
      local_78[10] = local_b0;
      local_b0 = 0;
      *(undefined4 *)(local_78 + 0xb) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_78 + 0x5c) = local_a8._4_4_;
      local_a8 = 0;
      *(undefined4 *)(local_78 + 0xc) = local_a0;
      local_78[0xd] = (longlong)local_98;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = FUN_143a547e6;
      }
      local_108 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3ca2c);
      if (local_88[0] != (code *)0x0) {
        plVar18 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar18 = local_68;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
    }
  }
  else {
LAB_143a44b87:
    if (iVar8 != 0x10) goto LAB_143a44b90;
LAB_143a45081:
    lVar5 = local_f8;
    local_88[0] = (code *)&lStack_f0;
    FUN_14818184c(local_f8 + 0x10,&local_8c);
    lVar5 = *(longlong *)(lVar5 + 0x10);
    *(uint **)(lVar5 + 8 + (longlong)local_8c * 0x38) = local_e8;
    if ((local_98 != (longlong *)0x0) && (lVar15 = (**(code **)(*local_98 + 0xa0))(), lVar15 != 0))
    {
      lVar5 = lVar5 + (longlong)local_8c * 0x38;
      lVar15 = *(longlong *)(lVar15 + 0x10);
      lVar6 = *(longlong *)(lVar5 + 0x18);
      if (lVar6 != lVar15) {
        *(longlong *)(lVar5 + 0x18) = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          LOCK();
          puVar14 = (uint *)(lVar6 + 8);
          uVar19 = *puVar14;
          *puVar14 = *puVar14 - 1;
          UNLOCK();
          if ((uVar19 & 0x3fffffff) == 1) {
            puVar14 = (uint *)(lVar6 + 8);
            LOCK();
            uVar19 = *puVar14;
            *puVar14 = *puVar14 | 0x40000000;
            UNLOCK();
            if ((uVar19 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(lVar6 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = lVar6;
              plVar18 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar18;
                  LOCK();
                  bVar23 = plVar18 != DAT_14ca843c0;
                  plVar17 = plVar16;
                  if (bVar23) {
                    plVar18 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar23);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar17;
                  LOCK();
                  bVar23 = plVar17 != DAT_14ca843c8;
                  plVar18 = plVar16;
                  if (bVar23) {
                    plVar17 = DAT_14ca843c8;
                    plVar18 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar18;
                  UNLOCK();
                } while (bVar23);
              }
            }
          }
        }
      }
    }
  }
LAB_143a44cc7:
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  uVar12 = 1;
LAB_143a44a83:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a45320 FUN_143a45320 body=741 status=ok
// SIG undefined FUN_143a45320(void)

void FUN_143a45320(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_2 + 3);
  if (((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
      ((int)uVar1 < *(int *)(param_2[4] + 0x48))) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_2[4] + 0x40) + (ulonglong)uVar1 * 8), lVar3 != 0)) {
    if (DAT_14cb0b9a0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146408884;
      local_48 = &LAB_147d719e1;
      local_50 = &LAB_140fb41fe;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x168;
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
    }
    if (((*(int *)(DAT_14cb0b9a0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) == DAT_14cb0b9a0 + 0x30)) &&
       (param_2[2] != lVar3)) {
      FUN_143a45b25(param_1,param_2);
      param_2[2] = lVar3;
    }
  }
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    lVar3 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar3 != 0) {
      *(undefined1 *)((longlong)param_2 + 9) = 1;
      if (DAT_14cb0b9a0 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146408884;
        local_48 = &LAB_147d719e1;
        local_50 = &LAB_140fb41fe;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x168;
        FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
      }
      lVar4 = FUN_14600ca7e(lVar3,DAT_14cb0b9a0,&local_28);
      param_2[2] = lVar4;
      if (lVar4 != 0) {
        FUN_146471540(lVar3,lVar4);
        *(uint *)(param_2[2] + 0x13c) = *(uint *)(param_2[2] + 0x13c) | 2;
        *(byte *)(param_2[2] + 0x15c) = *(byte *)(param_2[2] + 0x15c) & 0xfd;
        *(char *)(param_2[2] + 0x160) = (char)param_2[1];
        lVar3 = param_2[2];
        *(undefined8 *)(lVar3 + 0x148) = 0;
        *(undefined8 *)(lVar3 + 0x150) = 0;
        goto LAB_143a45404;
      }
    }
  }
  else if (((*(int *)(lVar3 + 0x140) != (int)*param_2) ||
           (*(int *)(lVar3 + 0x144) != *(int *)((longlong)param_2 + 4))) ||
          ((*(char *)(lVar3 + 0x160) != (char)param_2[1] ||
           (((*(byte *)(lVar3 + 0x13c) & 2) == 0 || ((*(byte *)(lVar3 + 0x15c) & 2) != 0)))))) {
    *(byte *)(lVar3 + 0x13c) = *(byte *)(lVar3 + 0x13c) | 2;
    *(byte *)(param_2[2] + 0x15c) = *(byte *)(param_2[2] + 0x15c) & 0xfd;
    *(char *)(param_2[2] + 0x160) = (char)param_2[1];
LAB_143a45404:
    plVar2 = (longlong *)param_2[2];
    plVar2[0x28] = *param_2;
    (**(code **)(*plVar2 + 0x318))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4561a FUN_143a4561a body=1270 status=ok
// SIG undefined FUN_143a4561a(void)

void FUN_143a4561a(longlong param_1,longlong param_2,longlong param_3)

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
  FUN_143a45b25(param_3);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a45a6b;
    if (iVar7 != 1) goto LAB_143a45683;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a45a6b;
  }
  else {
LAB_143a45683:
    if (iVar7 == 0x10) goto LAB_143a45a6b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a45a6b:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a45a6b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a457f0;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a457f0:
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
          goto LAB_143a45870;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a45870:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add4330;
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
    local_48 = &PTR_LAB_14add4310;
    local_68[0] = &LAB_143a54bf2;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3ca30);
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



// FUNCTION 143a45b25 FUN_143a45b25 body=171 status=ok
// SIG undefined FUN_143a45b25(void)

void FUN_143a45b25(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_2 + 9) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x10), lVar1 != 0)) {
    lVar2 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 != 0) {
      *(undefined1 *)(lVar1 + 0x160) = 0;
      FUN_145f790e6(lVar2,*(undefined8 *)(param_2 + 0x10));
      local_28 = *(longlong *)(param_2 + 0x10);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_145d11510(lVar2 + 0x1c68,&local_28,1);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_2 + 9) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a45bd2 FUN_143a45bd2 body=1589 status=ok
// SIG undefined FUN_143a45bd2(void)

undefined8 FUN_143a45bd2(longlong param_1,longlong param_2,longlong param_3)

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
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((DAT_14c762890 != 0) && ((*(byte *)(param_1 + 0x30) & 4) == 0)) goto LAB_143a45c06;
  FUN_143a45320(param_3,param_2);
  local_d0 = *(longlong *)(param_1 + 0x28);
  lStack_c8 = *(longlong *)(param_3 + 0x100);
  FUN_14817423c(&local_c0,param_2);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_1447b4020();
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a45c97;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a45c9c;
      goto LAB_143a45cc6;
    }
LAB_143a45c9c:
    FUN_143a54dca(&local_d0);
  }
  else {
LAB_143a45c97:
    if (iVar6 == 0x10) goto LAB_143a45c9c;
LAB_143a45cc6:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_143a45c9c;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a45c9c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143a45ea4;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143a54109);
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
LAB_143a45ea4:
        puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x22);
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
          puVar14 = (uint *)(puVar16 + 0x22);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_143a45f24;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143a45f24:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      iVar6 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14add4360;
      puVar16[0x15] = local_d0;
      puVar16[0x16] = lStack_c8;
      puVar16[0x19] = local_b0;
      puVar16[0x17] = local_c0;
      puVar16[0x18] = lStack_b8;
      *(undefined4 *)(puVar16 + 0x1a) = local_a8;
      *(undefined4 *)((longlong)puVar16 + 0xd4) = uStack_a4;
      *(undefined4 *)(puVar16 + 0x1b) = uStack_a0;
      *(undefined4 *)((longlong)puVar16 + 0xdc) = uStack_9c;
      puVar16[0x1c] = local_98;
      *(undefined4 *)(puVar16 + 0x1d) = local_90;
      puVar16[0x1e] = local_88;
      local_88 = 0;
      *(undefined4 *)(puVar16 + 0x1f) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar16 + 0xfc) = local_80._4_4_;
      local_80 = 0;
      *(undefined4 *)(puVar16 + 0x20) = local_78;
      puVar16[0x21] = local_70;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
      local_68[0] = (undefined1 *)0x0;
      local_58 = (longlong *)FUN_14001cc68(0x70,8);
      *local_58 = (longlong)&PTR_LAB_14add4340;
      local_58[1] = local_d0;
      local_58[2] = lStack_c8;
      local_58[5] = local_b0;
      local_58[3] = local_c0;
      local_58[4] = lStack_b8;
      *(undefined4 *)(local_58 + 6) = local_a8;
      *(undefined4 *)((longlong)local_58 + 0x34) = uStack_a4;
      *(undefined4 *)(local_58 + 7) = uStack_a0;
      *(undefined4 *)((longlong)local_58 + 0x3c) = uStack_9c;
      *(undefined4 *)(local_58 + 9) = local_90;
      local_58[8] = local_98;
      local_58[10] = local_88;
      local_88 = 0;
      *(undefined4 *)(local_58 + 0xb) = (undefined4)local_80;
      *(undefined4 *)((longlong)local_58 + 0x5c) = local_80._4_4_;
      local_80 = 0;
      *(undefined4 *)(local_58 + 0xc) = local_78;
      local_58[0xd] = local_70;
      if (local_58 + 1 != (longlong *)0x0) {
        local_68[0] = &LAB_143a54f8a;
      }
      local_d8 = local_68;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3ca34);
      if (local_68[0] != (undefined1 *)0x0) {
        plVar13 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar13 = local_48;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_143a45c06:
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a46208 FUN_143a46208 body=55 status=ok
// SIG undefined FUN_143a46208(void)

void FUN_143a46208(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3c1d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3c1d8 = FUN_14171c317(FUN_146470ad6,uVar1,L"ENDILandscape_SourceMode");
  }
  return;
}



// FUNCTION 143a4623f FUN_143a4623f body=69 status=ok
// SIG undefined FUN_143a4623f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4623f(void)

{
  _DAT_14cb3c218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a46281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c220,1);
  return;
}



// FUNCTION 143a46284 FUN_143a46284 body=69 status=ok
// SIG undefined FUN_143a46284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a46284(void)

{
  _DAT_14cb3c228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a462c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c230,1);
  return;
}



// FUNCTION 143a462ca FUN_143a462ca body=133 status=ok
// SIG undefined FUN_143a462ca(void)

void FUN_143a462ca(longlong param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_143a46350(param_1 + 0x10,L"FLandscapeTextureResource_HeightTexture",4,
                  *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0xd,param_1 + 0x68
                 );
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_143a46350(param_1 + 0x28,L"FLandscapeTextureResource_PhysMatTexture",1,
                  *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),0x39,
                  param_1 + 0x80);
  }
  FUN_1481746a2(param_1);
  return;
}



// FUNCTION 143a46350 FUN_143a46350 body=889 status=ok
// SIG undefined FUN_143a46350(void)

void FUN_143a46350(longlong *param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  undefined1 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined2 uStack_95;
  undefined3 uStack_93;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  uint local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined2 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(int *)(param_1 + 2) = param_3 * param_4 * param_5;
  local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_74 = CONCAT44(param_5,param_4);
  local_48 = 0;
  uStack_40 = 0;
  local_66 = 0;
  _local_98 = 8;
  local_65 = param_6;
  local_64 = 0xff00;
  local_6c = 0x10001;
  local_68 = 0x101;
  uStack_90 = 1;
  local_78 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_50 = param_7;
  local_60 = 0x70;
  local_58 = param_2;
  (**(code **)(*DAT_14ca83900 + 0x1a0))
            (DAT_14ca83900,&local_a0,&DAT_14ca85100,&stack0xffffffffffffff68);
  if (&local_a0 == param_1) {
LAB_143a464a4:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar5;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar4;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar4;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  else {
    lVar5 = *param_1;
    *param_1 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = lVar5;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar4;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar4;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
      goto LAB_143a464a4;
    }
  }
  plVar7 = (longlong *)*param_1;
  uStack_90 = 0;
  uStack_8c = 0;
  _local_98 = 2;
  lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
  if (*(byte *)(lVar5 + 0x32) < 5) {
    _local_98 = CONCAT12((char)(0x4030502010 >> ((*(byte *)(lVar5 + 0x32) & 7) << 3)),local_98);
  }
  _local_98 = CONCAT23(0x100,_local_98);
  local_a8 = (undefined8 *)&stack0xffffffffffffff68;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100,plVar7);
  param_1 = param_1 + 1;
  if (param_1 != &local_a0) {
    lVar5 = *param_1;
    *param_1 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_143a4663d;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar5;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar4;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar4;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar5;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar4;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar4;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_143a4663d:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a466ca FUN_143a466ca body=34 status=ok
// SIG undefined FUN_143a466ca(void)

void FUN_143a466ca(longlong param_1)

{
  FUN_1481746ea(param_1 + 0x10);
  FUN_1481746ea(param_1 + 0x28);
  return;
}



// FUNCTION 143a466ec FUN_143a466ec body=1376 status=ok
// SIG undefined FUN_143a466ec(void)

void FUN_143a466ec(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)*param_1;
  *param_1 = 0;
  if (plVar3 == (longlong *)0x0) goto LAB_143a468c7;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a4673e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a46747;
      goto LAB_143a46828;
    }
  }
  else {
LAB_143a4673e:
    if (iVar6 != 0x10) {
LAB_143a46828:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a46747;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a46747;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar14 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar11 = (uint *)*puVar14;
        if (puVar11 != (uint *)0x0) goto LAB_143a46989;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a54109);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar14 = puVar10;
          FUN_140217a48(puVar14);
          puVar11 = (uint *)*puVar14;
LAB_143a46989:
          puVar9 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar9 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar16 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar2 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar14;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar14 = puVar11;
            puVar9 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar9 + 0x16);
            uVar13 = 0;
            if (puVar16 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a46a09;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a46a09:
        *(uint **)(puVar11 + 0x10) = puVar16;
        puVar11[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar9,0);
        *puVar9 = &PTR_FUN_14add43a0;
        puVar9[0x15] = plVar3;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar6 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
        }
        puVar9[0xe] = LowLevelTasks::
                      TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                      TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                      ::vftable;
        puVar9[9] = puVar9;
        puVar9[10] = puVar9;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar17 != '\x06') {
            uVar5 = uVar17;
          }
          uVar17 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar9[0xf] = uVar12;
        puVar9[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar9 + 0x1c) = iVar6;
        if (puVar9 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar9);
          LOCK();
          piVar1 = (int *)(puVar9 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14add4380;
        local_68[0] = FUN_143a55180;
        local_40 = plVar3;
        FUN_14005a792(&DAT_14ca9a440,L"BeginDestroyCommand",&DAT_14cb3ca38);
        if (local_68[0] != (code *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_143a468c7;
    }
  }
LAB_143a46747:
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if (DAT_14ca85164 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar14 = puVar9 + 3;
  if (DAT_14ca85108 < puVar14) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar9 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar14 = puVar9 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar14;
  *DAT_14ca85130 = puVar9;
  DAT_14ca85130 = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14add4370;
  puVar9[2] = plVar3;
LAB_143a468c7:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a46c66 FUN_143a46c66 body=818 status=ok
// SIG undefined FUN_143a46c66(void)

void FUN_143a46c66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  PSRWLOCK local_e8;
  char local_d9;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = (PSRWLOCK)(param_1 + 8);
  AcquireSRWLockExclusive(local_e8);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar3) {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar9 = 8;
    lVar15 = 0;
    do {
      uVar4 = *(undefined8 *)(*plVar1 + -8 + lVar9);
      plVar12 = *(longlong **)(*plVar1 + lVar9);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_d9 = '\0';
      FUN_14817522a(uVar4,&local_d9);
      uVar6 = local_50;
      if (local_d9 == '\x01') {
        lVar14 = (longlong)(int)local_50;
        uVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar7);
        if (local_50._4_4_ < uVar7) {
          FUN_1456cba76(local_d8,uVar6 & 0xffffffff);
        }
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_d8;
        }
        *(int *)(puVar8 + lVar14 * 4) = (int)lVar15;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar3 != lVar15);
    if ((int)local_50 != 0) {
      do {
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_d8;
        }
        lVar15 = (longlong)(int)local_50;
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 + -1);
        lVar9 = *(longlong *)(*plVar1 + (longlong)*(int *)(puVar8 + lVar15 * 4 + -4) * 0x10);
        plVar12 = *(longlong **)(*plVar1 + 8 + (longlong)*(int *)(puVar8 + lVar15 * 4 + -4) * 0x10);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        FUN_148181f28(plVar1);
        FUN_148181fb0(plVar1);
        if ((*(int *)(lVar9 + 0x198) < 1) || (*(char *)(lVar9 + 0x19c) == '\x02')) {
          if (plVar12 != (longlong *)0x0) goto LAB_143a46e31;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
            FUN_14818204c((longlong *)(param_1 + 0x20),iVar3);
          }
          lVar15 = *(longlong *)(param_1 + 0x20);
          *(longlong *)(lVar15 + (longlong)iVar3 * 0x10) = lVar9;
          *(longlong **)(lVar15 + 8 + (longlong)iVar3 * 0x10) = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
LAB_143a46e31:
            LOCK();
            plVar13 = plVar12 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
      } while ((int)local_50 != 0);
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  plVar12 = plVar1;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar13 = plVar1;
    plVar11 = plVar1 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      while ((plVar12 = plVar13, *(int *)(*plVar12 + 0x198) < 1 ||
             (*(char *)(*plVar12 + 0x19c) == '\x02'))) {
        while( true ) {
          plVar10 = plVar11 + -2;
          if ((0 < *(int *)(*plVar10 + 0x198)) && (*(char *)(*plVar10 + 0x19c) != '\x02')) break;
          plVar11 = plVar10;
          if (plVar10 == plVar12) goto LAB_143a46f4f;
        }
        if (plVar10 != plVar12) {
          *plVar12 = *plVar10;
          *plVar10 = 0;
          plVar13 = (longlong *)plVar11[-1];
          plVar5 = (longlong *)plVar12[1];
          if (plVar13 != plVar5) {
            plVar11[-1] = 0;
            plVar12[1] = (longlong)plVar13;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar5 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
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
        }
        plVar13 = plVar12 + 2;
        plVar11 = plVar10;
        if (plVar10 == plVar12 + 2) {
          plVar12 = plVar12 + 2;
          goto LAB_143a46f4f;
        }
      }
      plVar13 = plVar12 + 2;
      plVar12 = plVar11;
    } while (plVar13 != plVar11);
  }
LAB_143a46f4f:
  FUN_148175348(param_1 + 0x20,(ulonglong)((longlong)plVar12 - (longlong)plVar1) >> 4 & 0xffffffff);
  ReleaseSRWLockExclusive(local_e8);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a46f9a FUN_143a46f9a body=281 status=ok
// SIG undefined FUN_143a46f9a(void)

void FUN_143a46f9a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  memset(param_2,0,0x160);
  param_2[1] = DAT_14c846330;
  *(undefined4 *)(param_2 + 2) = DAT_14c846338;
  puVar5 = &DAT_14c846400;
  puVar6 = param_2 + 4;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846400;
  puVar6 = param_2 + 0x14;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x28] = 0x3ff0000000000000;
  param_2[0x29] = 0x3ff0000000000000;
  puVar5 = *(undefined8 **)(param_3 + 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *param_2 = *puVar5;
    uVar1 = puVar5[0x24];
    uVar2 = puVar5[0x25];
    uVar3 = puVar5[0x27];
    param_2[0x26] = puVar5[0x26];
    param_2[0x27] = uVar3;
    param_2[0x24] = uVar1;
    param_2[0x25] = uVar2;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar5 + 2);
    param_2[1] = puVar5[1];
    puVar6 = puVar5 + 0x14;
    puVar7 = param_2 + 4;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6 = puVar5 + 4;
    puVar7 = param_2 + 0x14;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar1 = puVar5[0x2a];
    param_2[0x28] = puVar5[0x29];
    param_2[0x29] = uVar1;
  }
  *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_3 + 0x28);
  return;
}



// FUNCTION 143a470b4 FUN_143a470b4 body=1511 status=ok
// SIG undefined FUN_143a470b4(void)

undefined8 FUN_143a470b4(longlong param_1,undefined8 *param_2,longlong param_3)

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
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c [4];
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0xffffffff;
  param_2[6] = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 7) = 8;
  *(undefined4 *)((longlong)param_2 + 0x39) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3d) = 0;
  local_8d = 0;
  local_8e = 0;
  FUN_14499183e(param_3,DAT_14cb3c240,&local_8d,&local_8e);
  local_8f = 0;
  local_90 = 0;
  FUN_14499183e(param_3,DAT_14cb3c248,&local_8f,&local_90);
  local_91 = 0;
  local_92 = 0;
  FUN_14499183e(param_3,DAT_14cb3c250,&local_91,&local_92);
  local_93 = 0;
  local_94 = 0;
  FUN_14499183e(param_3,DAT_14cb3c238,&local_93,&local_94);
  *(undefined1 *)((longlong)param_2 + 0x3c) = local_94;
  *(undefined1 *)((longlong)param_2 + 0x3d) = local_8e;
  *(undefined1 *)((longlong)param_2 + 0x3e) = local_90;
  *(undefined1 *)((longlong)param_2 + 0x3b) = local_92;
  FUN_1406c2fc4(param_1,param_3,param_2);
  local_a8 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a47205;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a47613;
      goto LAB_143a4720e;
    }
  }
  else {
LAB_143a47205:
    if (iVar6 != 0x10) {
LAB_143a4720e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a47613;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a47613;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a47382;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a54109);
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
LAB_143a47382:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
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
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a47402;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a47402:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14add4e80;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_a8._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_a0._4_4_;
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
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
        local_b8 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14add4e30;
        local_60 = (undefined4)local_a8;
        uStack_5c = local_a8._4_4_;
        uStack_58 = (undefined4)uStack_a0;
        uStack_54 = uStack_a0._4_4_;
        local_88[0] = FUN_143a55468;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDICreateProxy",&DAT_14cb3cac4);
        if (local_88[0] != (code *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a472b2;
    }
  }
LAB_143a47613:
  local_88[0] = (code *)&uStack_a0;
  FUN_145a5d9ca(local_a8 + 0x10,local_8c);
LAB_143a472b2:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4769c FUN_143a4769c body=1266 status=ok
// SIG undefined FUN_143a4769c(void)

void FUN_143a4769c(longlong param_1,longlong param_2,longlong param_3)

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
  if (param_2 == 0) goto LAB_143a477ad;
  FUN_143a48380(param_2 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a47ae9;
    if (iVar7 != 1) goto LAB_143a47701;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a47ae9;
  }
  else {
LAB_143a47701:
    if (iVar7 == 0x10) goto LAB_143a47ae9;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a47ae9:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a47ae9;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a4786e;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a4786e:
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
          goto LAB_143a478ee;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a478ee:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add4ee0;
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
    local_48 = &PTR_LAB_14add4e90;
    local_68[0] = &LAB_143a556a2;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyProxy",&DAT_14cb3cac8);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_143a477ad:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a47baa FUN_143a47baa body=1813 status=ok
// SIG undefined FUN_143a47baa(void)

undefined8 FUN_143a47baa(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 local_91;
  undefined1 local_90;
  undefined4 local_8f;
  undefined3 uStack_8b;
  undefined8 local_88;
  undefined8 local_80;
  longlong *plStack_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == (uint *)0x0) goto LAB_143a47e8f;
  FUN_1406c2fc4(param_1,param_3,param_2);
  if ((*(char *)((longlong)param_2 + 0x3a) == '\0') &&
     (*(char *)((longlong)param_2 + 0x3b) != '\x01')) {
    local_88 = (code *)((ulonglong)local_88 & 0xffffffffffff0000);
    local_80 = 0;
    plStack_78 = (longlong *)0x0;
  }
  else {
    uVar13 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
    uVar13 = FUN_148176240(uVar13);
    local_b8 = param_2;
    FUN_148175432(uVar13,&local_88,param_1,param_3);
  }
  FUN_143a482c0(param_2 + 4,&local_88);
  FUN_143a48380(&local_88);
  if (param_2[1] == 0) {
LAB_143a47cee:
    lVar22 = 0;
    puVar19 = (uint *)0x0;
    lVar20 = 0;
  }
  else {
    uVar16 = *param_2;
    lVar22 = 0;
    if ((int)uVar16 < 0) goto LAB_143a47cee;
    puVar19 = (uint *)0x0;
    lVar20 = 0;
    if ((int)uVar16 < DAT_14c9647dc) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((((plVar17 == (longlong *)0x0) || (*(uint *)(plVar17 + 2) != param_2[1])) ||
          ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) || (lVar22 = *plVar17, lVar22 == 0))
      goto LAB_143a47cee;
      uVar16 = param_2[0xb];
      if (((longlong)(int)uVar16 < 0) || (*(int *)(lVar22 + 0x570) <= (int)uVar16)) {
        lVar20 = 0;
      }
      else {
        lVar20 = *(longlong *)(*(longlong *)(lVar22 + 0x568) + (longlong)(int)uVar16 * 8);
      }
      uVar16 = param_2[0xc];
      if (((longlong)(int)uVar16 < 0) || (*(int *)(lVar22 + 0x570) <= (int)uVar16)) {
        puVar19 = (uint *)0x0;
      }
      else {
        puVar19 = *(uint **)(*(longlong *)(lVar22 + 0x568) + (longlong)(int)uVar16 * 8);
      }
      uVar16 = param_2[0xd];
      if (((longlong)(int)uVar16 < 0) || (*(int *)(lVar22 + 0x570) <= (int)uVar16)) {
        lVar22 = 0;
      }
      else {
        lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x568) + (longlong)(int)uVar16 * 8);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  uVar8 = (undefined1)param_2[10];
  uVar4 = (undefined1)param_2[0xe];
  lVar6 = *(longlong *)(param_3 + 0x100);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      local_91 = uVar8;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar24 = DVar11 == DVar12;
      }
      else {
        bVar24 = iVar10 == 0x10;
      }
      uVar8 = local_91;
      if (!bVar24) goto LAB_143a47db7;
    }
  }
  else if (iVar10 != 0x10) {
LAB_143a47db7:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2))
      goto LAB_143a47d32;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143a47d32;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar15 = (uint *)*puVar2;
      if (puVar15 != (uint *)0x0) goto LAB_143a47f6c;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar7 + 0x310);
        *(undefined8 *)(lVar7 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar2 = puVar14;
        FUN_140217a48(puVar2);
        puVar15 = (uint *)*puVar2;
LAB_143a47f6c:
        puVar23 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar23 + 0x1c);
        uVar16 = puVar15[0x12];
        if (puVar18 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar3 = *puVar15;
          *puVar15 = *puVar15 + uVar16 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar16) != 0xffffffff) break;
          puVar15 = (uint *)*puVar2;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar2 = puVar15;
          puVar23 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar23 + 0x1c);
          uVar16 = 0;
          if (puVar18 <= puVar15 + 0x4000) {
            uVar16 = 1;
            goto LAB_143a47ff1;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143a47ff1:
      *(uint **)(puVar15 + 0x10) = puVar18;
      puVar15[0x12] = uVar16;
      FUN_1447247dc(puVar23,0);
      *puVar23 = &PTR_FUN_14add4f40;
      puVar23[0x15] = lVar5;
      puVar23[0x16] = lVar20;
      *(undefined1 *)(puVar23 + 0x17) = uVar8;
      uVar16 = (uint)local_88;
      *(uint *)((longlong)puVar23 + 0xb9) = uVar16;
      *(undefined4 *)((longlong)puVar23 + 0xbc) = local_88._3_4_;
      puVar23[0x18] = puVar19;
      puVar23[0x19] = lVar22;
      *(undefined1 *)(puVar23 + 0x1a) = uVar4;
      *(undefined4 *)((longlong)puVar23 + 0xd1) = local_8f;
      *(uint *)((longlong)puVar23 + 0xd4) = CONCAT31(uStack_8b,local_8f._3_1_);
      puVar23[0x1b] = lVar6;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
        }
        else {
          uVar21 = 2;
        }
        iVar10 = 0;
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
      }
      if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
      }
      puVar23[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar23[9] = puVar23;
      puVar23[10] = puVar23;
      lVar22 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar22 == 0) {
        uVar9 = 1;
        if ((char)uVar21 != '\x06') {
          uVar9 = uVar21;
        }
        uVar21 = uVar9;
        uVar13 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar22 + 0x30);
      }
      puVar23[0xf] = uVar13;
      puVar23[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar23 + 0x1c) = iVar10;
      if (puVar23 == (undefined8 *)0x0) {
        local_90 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
        local_90 = 1;
        FUN_1447439e4(puVar23);
        LOCK();
        piVar1 = (int *)(puVar23 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar23)(puVar23,1);
        }
      }
    }
    else {
      local_88 = (code *)0x0;
      plStack_78 = (longlong *)FUN_14001cc68(0x40,8);
      *plStack_78 = (longlong)&PTR_LAB_14add4ef0;
      plStack_78[1] = lVar5;
      plStack_78[2] = lVar20;
      *(undefined1 *)(plStack_78 + 3) = uVar8;
      plStack_78[4] = (longlong)puVar19;
      plStack_78[5] = lVar22;
      *(undefined1 *)(plStack_78 + 6) = uVar4;
      plStack_78[7] = lVar6;
      if (plStack_78 + 1 != (longlong *)0x0) {
        local_88 = FUN_143a5587a;
      }
      local_b8 = (uint *)&local_88;
      FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIUpdateProxy",&DAT_14cb3cacc);
      if (local_88 != (code *)0x0) {
        plVar17 = plStack_78;
        if (plStack_78 == (longlong *)0x0) {
          plVar17 = local_68;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    goto LAB_143a47e8f;
  }
LAB_143a47d32:
  local_b8 = puVar19;
  local_b0 = lVar22;
  local_a8 = uVar4;
  FUN_1408ed82e(lVar5,lVar6,lVar20);
LAB_143a47e8f:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a482c0 FUN_143a482c0 body=191 status=ok
// SIG undefined FUN_143a482c0(void)

undefined2 * FUN_143a482c0(undefined2 *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    lVar3 = *(longlong *)(param_1 + 4);
    if ((lVar3 != 0) && (*(char *)((longlong)param_1 + 1) == '\x01')) {
      LOCK();
      piVar2 = (int *)(lVar3 + 0x198);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        *(undefined1 *)(lVar3 + 0x19d) = 2;
      }
    }
    *param_1 = *param_2;
    uVar4 = *(undefined8 *)(param_2 + 4);
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 8);
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(longlong *)(param_1 + 8) = lVar3;
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
    *(undefined8 *)(param_2 + 4) = 0;
    plVar5 = *(longlong **)(param_2 + 8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_2 + 8) = 0;
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
  return param_1;
}



// FUNCTION 143a48380 FUN_143a48380 body=88 status=ok
// SIG undefined FUN_143a48380(void)

void FUN_143a48380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if ((lVar3 != 0) && (*(char *)(param_1 + 1) == '\x01')) {
    LOCK();
    piVar2 = (int *)(lVar3 + 0x198);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      *(undefined1 *)(lVar3 + 0x19d) = 2;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000143a483d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a483d8 FUN_143a483d8 body=1588 status=ok
// SIG undefined FUN_143a483d8(void)

void FUN_143a483d8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  void *local_b8;
  undefined8 local_b0;
  uint local_a8;
  float fStack_a4;
  float local_a0;
  undefined1 *local_98 [2];
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_1 + 0x38);
  if (lVar10 == 0) {
    plVar11 = (longlong *)FUN_145994962();
    lVar10 = plVar11[0x22];
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 1000))(plVar11);
      lVar10 = plVar11[0x22];
    }
  }
  fVar19 = (float)*(double *)(lVar10 + 0x100);
  bVar4 = *(byte *)(lVar10 + 0xcc);
  fVar20 = (float)*(double *)(lVar10 + 0xf8);
  local_b8 = (void *)0x0;
  uVar15 = *(uint *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  local_b0 = CONCAT44(local_b0._4_4_,uVar15);
  local_c0 = lVar5;
  if ((longlong)(int)uVar15 == 0) {
    local_b0 = (ulonglong)uVar15;
  }
  else {
    FUN_1418284c4(&local_b8,uVar15);
    memcpy(local_b8,_Src,(longlong)(int)uVar15 * 0x18);
  }
  local_a8 = CONCAT31(local_a8._1_3_,bVar4 >> 3) & 0xffffff01;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  fStack_a4 = fVar20;
  local_a0 = fVar19;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a484bc;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a484c1;
      goto LAB_143a48522;
    }
  }
  else {
LAB_143a484bc:
    if (iVar7 != 0x10) {
LAB_143a48522:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_143a484c1;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a484c1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_143a486f6;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a54109);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_143a486f6:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar16 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x1a);
            uVar15 = 0;
            if (puVar16 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a48776;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a48776:
        *(uint **)(puVar13 + 0x10) = puVar16;
        puVar13[0x12] = uVar15;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14add5028;
        puVar18[0x15] = local_c0;
        puVar18[0x16] = local_b8;
        local_b8 = (void *)0x0;
        *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar18 + 0xbc) = local_b0._4_4_;
        local_b0 = 0;
        *(float *)(puVar18 + 0x19) = local_a0;
        puVar18[0x18] = CONCAT44(fStack_a4,local_a8);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
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
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_98[0] = (undefined1 *)CONCAT71(local_98[0]._1_7_,1);
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
        local_98[0] = (undefined1 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x30,8);
        *local_88 = (longlong)&PTR_LAB_14add4fd0;
        local_88[1] = local_c0;
        local_88[2] = (longlong)local_b8;
        local_b8 = (void *)0x0;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_b0._4_4_;
        local_b0 = 0;
        *(float *)(local_88 + 5) = local_a0;
        local_88[4] = CONCAT44(fStack_a4,local_a8);
        if (local_88 + 1 != (longlong *)0x0) {
          local_98[0] = &LAB_143a55cb6;
        }
        local_c8 = local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FDIMeshRendererInfoPushToRT",&DAT_14cb3cb54);
        if (local_98[0] != (undefined1 *)0x0) {
          plVar11 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar11 = local_78;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      goto LAB_143a48611;
    }
  }
LAB_143a484c1:
  FUN_143a55afe(&local_c0,&DAT_14ca85100);
LAB_143a48611:
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a48a62 FUN_143a48a62 body=69 status=ok
// SIG undefined FUN_143a48a62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a48a62(void)

{
  _DAT_14cb3c350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a48aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c358,1);
  return;
}



// FUNCTION 143a48aa8 FUN_143a48aa8 body=2167 status=ok
// SIG undefined FUN_143a48aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143a48aa8(longlong param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  longlong lVar17;
  longlong *plVar18;
  uint *puVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  double dVar25;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_b8;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  int local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((~DAT_14c8739a0 & 0x680000) == 0) {
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(undefined8 *)param_2 = DAT_14c9a5298;
    param_2[2] = DAT_14c9a52a0;
    param_2[3] = 0;
    *(undefined8 *)(param_2 + 10) = DAT_14c8464f0;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)(param_2 + 6) = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 8) = uVar14;
    iVar11 = *(int *)(param_1 + 0x70);
    dVar25 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    dVar5 = *(double *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x50) == 2) {
      dVar7 = (double)*(float *)(param_1 + 0x48);
LAB_143a48b61:
      iVar23 = (int)((ulonglong)(longlong)ROUND(dVar25 / dVar7 + dVar25 / dVar7 + -0.5) >> 1);
      iVar9 = (int)((ulonglong)(longlong)ROUND(dVar5 / dVar7 + dVar5 / dVar7 + -0.5) >> 1);
      iVar24 = (int)((ulonglong)(longlong)ROUND(dVar4 / dVar7 + dVar4 / dVar7 + -0.5) >> 1);
      if ((dVar25 <= dVar4) || (dVar25 <= dVar5)) {
        if ((dVar25 < dVar4) && (dVar5 < dVar4)) {
          iVar23 = iVar23 + (uint)(1e-08 < ABS((double)iVar23 * dVar7 - dVar25));
          goto joined_r0x000143a48c5b;
        }
        if (((dVar25 < dVar5) && (dVar4 < dVar5)) &&
           (iVar23 = iVar23 + (uint)(1e-08 < ABS((double)iVar23 * dVar7 - dVar25)),
           1e-08 < ABS((double)iVar24 * dVar7 - dVar4))) {
          iVar24 = iVar24 + 1;
        }
      }
      else {
        iVar24 = iVar24 + (uint)(1e-08 < ABS((double)iVar24 * dVar7 - dVar4));
joined_r0x000143a48c5b:
        if (1e-08 < ABS((double)iVar9 * dVar7 - dVar5)) {
          iVar9 = iVar9 + 1;
        }
      }
      dVar5 = (double)iVar9 * dVar7;
      dVar4 = (double)iVar24 * dVar7;
      dVar25 = (double)iVar23 * dVar7;
    }
    else {
      if (*(int *)(param_1 + 0x50) == 1) {
        dVar7 = dVar25;
        if (dVar25 <= dVar4) {
          dVar7 = dVar4;
        }
        if (dVar7 <= dVar5) {
          dVar7 = dVar5;
        }
        dVar7 = dVar7 / (double)*(int *)(param_1 + 0x4c);
        goto LAB_143a48b61;
      }
      iVar9 = *(int *)(param_1 + 0x44);
      iVar23 = *(int *)(param_1 + 0x3c);
      iVar24 = *(int *)(param_1 + 0x40);
      dVar7 = dVar25 / (double)iVar23;
    }
    if (iVar23 < 2) {
      iVar23 = 1;
    }
    if (iVar24 < 2) {
      iVar24 = 1;
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    iVar21 = 1;
    if (1 < iVar9) {
      iVar21 = iVar9;
    }
    param_2[3] = (int)(float)dVar7;
    *(double *)(param_2 + 6) = dVar25;
    *(double *)(param_2 + 8) = dVar4;
    *(double *)(param_2 + 10) = dVar5;
    param_2[4] = iVar11;
    *param_2 = iVar23;
    param_2[1] = iVar24;
    param_2[2] = iVar21;
    uVar10 = iVar24 * iVar21 * iVar23 * iVar11;
    if (uVar10 != 0) {
      uVar14 = 0;
      if (((ulonglong)(longlong)DAT_14c762880 < (ulonglong)uVar10) || (_DAT_14ca84e48 < uVar10))
      goto LAB_143a48e69;
      local_88 = *(longlong *)(param_3 + 0x100);
      lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(lVar17 + 0xc60);
      local_b8 = lVar6;
      iStack_b0 = iVar23;
      iStack_ac = iVar24;
      local_a8 = iVar21;
      iStack_a4 = iVar11;
      uStack_a0 = dVar25;
      local_98 = dVar4;
      uStack_90 = dVar5;
      if (DAT_14c86a9fc == 0) {
        if (iVar9 != 2) {
          if (iVar9 != 1) goto LAB_143a48d76;
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          if (DVar12 == DVar13) goto LAB_143a49232;
          goto LAB_143a48d7f;
        }
LAB_143a49232:
        local_78[0] = (code *)&local_88;
        FUN_1481845a0(lVar6 + 0x10,&local_7c);
        lVar6 = *(longlong *)(lVar6 + 0x10);
        lVar17 = (longlong)local_7c * 0x98;
        *(int *)(lVar6 + 0x14 + lVar17) = local_a8;
        *(ulonglong *)(lVar6 + 0xc + lVar17) = CONCAT44(iStack_ac,iStack_b0);
        *(int *)(lVar6 + 0x1c + lVar17) = iStack_a4;
        *(double *)(lVar6 + 0x30 + lVar17) = uStack_90;
        puVar15 = (undefined4 *)(lVar6 + 0x20 + lVar17);
        *puVar15 = (undefined4)uStack_a0;
        puVar15[1] = uStack_a0._4_4_;
        puVar15[2] = (undefined4)local_98;
        puVar15[3] = local_98._4_4_;
        *(undefined1 *)(lVar6 + 0x38 + lVar17) = 1;
      }
      else {
LAB_143a48d76:
        if (iVar9 == 0x10) goto LAB_143a49232;
LAB_143a48d7f:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar17 + 0xc60), iVar11 == 2))
          goto LAB_143a49232;
          if (iVar11 == 1) {
            DVar12 = FUN_140ad26c0();
            DVar13 = GetCurrentThreadId();
            if (DVar12 == DVar13) goto LAB_143a49232;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar16 = (uint *)*puVar2;
          if (puVar16 != (uint *)0x0) goto LAB_143a48f98;
          while( true ) {
            uVar10 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar10 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar10 | 1;
              __tlregdtor(&LAB_143a54109);
            }
            lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar15 = *(undefined4 **)(lVar6 + 0x310);
            *(undefined8 *)(lVar6 + 0x310) = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            FUN_140217a48(puVar2);
            puVar16 = (uint *)*puVar2;
LAB_143a48f98:
            puVar22 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar22 + 0x1c);
            uVar10 = puVar16[0x12];
            if (puVar19 <= puVar16 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar3 = *puVar16;
              *puVar16 = *puVar16 + uVar10 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar10) != 0xffffffff) break;
              puVar16 = (uint *)*puVar2;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar2 = puVar16;
              puVar22 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar22 + 0x1c);
              uVar10 = 0;
              if (puVar19 <= puVar16 + 0x4000) {
                uVar10 = 1;
                goto LAB_143a49018;
              }
            }
          }
          uVar10 = uVar10 + 1;
LAB_143a49018:
          *(uint **)(puVar16 + 0x10) = puVar19;
          puVar16[0x12] = uVar10;
          iVar11 = 0;
          FUN_1447247dc(puVar22,0);
          *puVar22 = &PTR_FUN_14add52a0;
          *(undefined4 *)(puVar22 + 0x15) = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar22 + 0xac) = local_b8._4_4_;
          *(int *)(puVar22 + 0x16) = iStack_b0;
          *(int *)((longlong)puVar22 + 0xb4) = iStack_ac;
          *(int *)(puVar22 + 0x17) = local_a8;
          *(int *)((longlong)puVar22 + 0xbc) = iStack_a4;
          *(undefined4 *)(puVar22 + 0x18) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar22 + 0xc4) = uStack_a0._4_4_;
          *(undefined4 *)(puVar22 + 0x19) = (undefined4)local_98;
          *(undefined4 *)((longlong)puVar22 + 0xcc) = local_98._4_4_;
          *(undefined4 *)(puVar22 + 0x1a) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puVar22 + 0xd4) = uStack_90._4_4_;
          puVar22[0x1b] = local_88;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar10 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar10 < 2) {
              uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
              iVar11 = 0;
            }
            else {
              uVar20 = 2;
            }
          }
          else {
            iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar20 = 5;
          }
          if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
          }
          puVar22[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar22[9] = puVar22;
          puVar22[10] = puVar22;
          lVar6 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar6 == 0) {
            uVar8 = 1;
            if ((char)uVar20 != '\x06') {
              uVar8 = uVar20;
            }
            uVar20 = uVar8;
            uVar14 = 0;
          }
          else {
            if ((char)uVar20 == '\x06') {
              uVar20 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
            }
            uVar14 = *(undefined8 *)(lVar6 + 0x30);
          }
          puVar22[0xf] = uVar14;
          puVar22[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar22 + 0x1c) = iVar11;
          if (puVar22 == (undefined8 *)0x0) {
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
            UNLOCK();
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(puVar22);
            LOCK();
            piVar1 = (int *)(puVar22 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar22)(puVar22,1);
            }
          }
        }
        else {
          local_78[0] = (code *)0x0;
          local_68 = (longlong *)FUN_14001cc68(0x40,8);
          *local_68 = (longlong)&PTR_LAB_14add5280;
          local_68[7] = local_88;
          *(undefined4 *)(local_68 + 5) = (undefined4)local_98;
          *(undefined4 *)((longlong)local_68 + 0x2c) = local_98._4_4_;
          *(undefined4 *)(local_68 + 6) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)local_68 + 0x34) = uStack_90._4_4_;
          *(int *)(local_68 + 3) = local_a8;
          *(int *)((longlong)local_68 + 0x1c) = iStack_a4;
          *(undefined4 *)(local_68 + 4) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)local_68 + 0x24) = uStack_a0._4_4_;
          *(undefined4 *)(local_68 + 1) = (undefined4)local_b8;
          *(undefined4 *)((longlong)local_68 + 0xc) = local_b8._4_4_;
          *(int *)(local_68 + 2) = iStack_b0;
          *(int *)((longlong)local_68 + 0x14) = iStack_ac;
          if (local_68 + 1 != (longlong *)0x0) {
            local_78[0] = FUN_143a56342;
          }
          local_c8 = local_78;
          FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3cbdc);
          if (local_78[0] != (code *)0x0) {
            plVar18 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar18 = local_58;
            }
            (**(code **)(*plVar18 + 0x10))();
          }
        }
      }
      uVar14 = 1;
      goto LAB_143a48e69;
    }
  }
  uVar14 = 0;
LAB_143a48e69:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a49320 FUN_143a49320 body=1315 status=ok
// SIG undefined FUN_143a49320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a49320(longlong param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  byte bVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStack_c8 [44];
  int local_9c;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  byte *local_70;
  int *local_68;
  int local_60;
  undefined1 local_58 [8];
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148176a6e(local_58);
  if (*param_2 == 1) {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar23 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_88 = (ulonglong)bVar23;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    local_9c = *(int *)(param_2 + 0x44) * (uint)bVar23;
    bVar23 = 1;
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar24 = uVar2 & 0x7fff;
    lVar12 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar11 = (ulonglong)(uVar24 * *(int *)(lVar12 + 0x80)) + *(longlong *)(lVar12 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar12 + 0x20);
      lVar11 = 0;
      if (iVar9 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar9;
          iVar9 = (*(int **)(lVar12 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar9 <= (int)uVar24);
      }
      lVar11 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar12 + 0x18) + lVar11 * 8);
    }
    local_88._0_4_ = (uint)(uVar2 >> 0xf);
    local_9c = *(int *)(lVar12 + 0x4c) * (uint)local_88;
    bVar23 = *param_2;
    local_88 = (ulonglong)(uVar2 >> 0xf);
  }
  if ((bVar23 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar24 = uVar2 & 0x7fff;
    lVar13 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar12 = (ulonglong)(uVar24 * *(int *)(lVar13 + 0x80)) + *(longlong *)(lVar13 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar13 + 0x20);
      lVar12 = 0;
      if (iVar9 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar9;
          iVar9 = (*(int **)(lVar13 + 0x20))[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while (iVar9 <= (int)uVar24);
      }
      lVar12 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar13 + 0x18) + lVar12 * 8);
    }
    local_90._0_4_ = (uint)(uVar2 >> 0xf);
    iVar9 = *(int *)(lVar13 + 0x4c) * (uint)local_90;
    bVar23 = *param_2;
    local_90 = (ulonglong)(uVar2 >> 0xf);
  }
  else {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_90 = (ulonglong)bVar1;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    iVar9 = *(int *)(param_2 + 0x44) * (uint)bVar1;
  }
  local_80 = CONCAT44(local_80._4_4_,iVar9);
  if ((bVar23 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar24 = uVar2 & 0x7fff;
    lVar14 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar13 = (ulonglong)(uVar24 * *(int *)(lVar14 + 0x80)) + *(longlong *)(lVar14 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar14 + 0x20);
      lVar13 = 0;
      if (iVar9 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar9;
          iVar9 = (*(int **)(lVar14 + 0x20))[lVar13 + 1];
          lVar13 = lVar13 + 1;
        } while (iVar9 <= (int)uVar24);
      }
      lVar13 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar14 + 0x18) + lVar13 * 8);
    }
    local_98._0_4_ = (uint)(uVar2 >> 0xf);
    iVar9 = *(int *)(lVar14 + 0x4c) * (uint)local_98;
    bVar23 = *param_2;
    local_98 = (ulonglong)(uVar2 >> 0xf);
  }
  else {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_98 = (ulonglong)bVar1;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    iVar9 = *(int *)(param_2 + 0x44) * (uint)bVar1;
  }
  if ((bVar23 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar24 = uVar2 & 0x7fff;
    lVar8 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar14 = (ulonglong)(uVar24 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70);
    }
    else {
      iVar18 = **(int **)(lVar8 + 0x20);
      lVar14 = 0;
      if (iVar18 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar18;
          iVar18 = (*(int **)(lVar8 + 0x20))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (iVar18 <= (int)uVar24);
      }
      lVar14 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar8 + 0x18) + lVar14 * 8);
    }
    uVar24 = (uint)(uVar2 >> 0xf);
    pbVar10 = (byte *)(lVar8 + 0x4c);
  }
  else {
    iVar18 = *(int *)(param_2 + 0x30);
    uVar24 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar18);
    *(int *)(param_2 + 0x30) = iVar18 + 1;
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar18 * 8);
    pbVar10 = param_2 + 0x44;
  }
  iVar18 = *(int *)pbVar10;
  local_78 = param_1;
  FUN_140126e42(&local_68,param_2);
  local_70 = param_2 + 0x3c;
  pbVar10 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar10 = local_70;
  }
  iVar21 = *(int *)pbVar10;
  if (0 < iVar21) {
    piVar15 = (int *)(lVar11 + (longlong)local_9c * 4);
    piVar16 = (int *)((longlong)(int)local_80 * 4 + lVar12);
    piVar19 = (int *)(lVar13 + (longlong)iVar9 * 4);
    piVar20 = (int *)((longlong)(int)(iVar18 * uVar24) * 4 + lVar14);
    local_80 = (ulonglong)(uVar24 << 2);
    local_98 = (ulonglong)(uint)((int)local_98 << 2);
    local_90 = (ulonglong)(uint)((int)local_90 << 2);
    local_88 = (ulonglong)(uint)((int)local_88 << 2);
    iVar9 = 0;
    do {
      bVar25 = false;
      if ((iVar21 == 1) && (bVar25 = false, local_50 != (int *)0x0)) {
        if ((*(int *)(local_78 + 0x3c) < 0) || (*(int *)(local_78 + 0x40) < 0)) {
          bVar25 = false;
        }
        else {
          bVar25 = -1 < *(int *)(local_78 + 0x44);
        }
      }
      iVar18 = *piVar15;
      iVar21 = *piVar16;
      iVar22 = *piVar19;
      iVar3 = *piVar20;
      uVar24 = iVar22 * iVar3 * iVar21 * iVar18;
      if ((uVar24 == 0) || ((ulonglong)(longlong)DAT_14c762880 < (ulonglong)uVar24)) {
        *local_68 = 0;
        local_68 = local_68 + local_60;
      }
      else {
        bVar23 = uVar24 <= _DAT_14ca84e48 & bVar25;
        piVar17 = local_68 + local_60;
        *local_68 = -(uint)bVar23;
        local_68 = piVar17;
        if (bVar23 == 1) {
          iVar4 = *local_50;
          iVar5 = local_50[1];
          local_9c = local_50[2];
          iVar6 = local_50[4];
          if (iVar18 < 2) {
            iVar18 = 1;
          }
          *local_50 = iVar18;
          if (iVar21 < 2) {
            iVar21 = 1;
          }
          if (iVar22 < 2) {
            iVar22 = 1;
          }
          local_50[1] = iVar21;
          local_50[2] = iVar22;
          local_50[4] = iVar3;
          bVar25 = true;
          if ((iVar4 == *local_50) && (iVar5 == local_50[1])) {
            bVar25 = iVar6 != iVar3 || local_9c != local_50[2];
          }
          *(bool *)(local_50 + 0xc) = bVar25;
        }
      }
      iVar9 = iVar9 + 1;
      pbVar10 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar10 = local_70;
      }
      iVar21 = *(int *)pbVar10;
      piVar20 = (int *)((longlong)piVar20 + local_80);
      piVar19 = (int *)((longlong)piVar19 + local_98);
      piVar16 = (int *)((longlong)piVar16 + local_90);
      piVar15 = (int *)((longlong)piVar15 + local_88);
    } while (iVar9 < iVar21);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a49844 FUN_143a49844 body=1507 status=ok
// SIG undefined FUN_143a49844(void)

undefined8 FUN_143a49844(longlong param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  int iStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((char)param_2[0xc] != '\x01') || (*param_2 < 1)) || (param_2[1] < 1)) ||
     ((param_2[2] < 1 || (iVar7 = param_2[4], iVar7 == 0)))) goto LAB_143a499eb;
  *(undefined1 *)(param_2 + 0xc) = 0;
  fStack_90 = (float)(*(double *)(param_2 + 6) / (double)*param_2);
  param_2[3] = (int)fStack_90;
  lVar5 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)param_2;
  local_98 = param_2[2];
  local_88 = *(longlong *)(param_3 + 0x100);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar13 + 0xc60);
  local_a8 = lVar5;
  iStack_94 = iVar7;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_143a4990e;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a49d40;
      goto LAB_143a49917;
    }
  }
  else {
LAB_143a4990e:
    if (iVar4 != 0x10) {
LAB_143a49917:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar13 + 0xc60), iVar7 == 2))
        goto LAB_143a49d40;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a49d40;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a49ab6;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a54109);
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
LAB_143a49ab6:
          puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x1a);
          uVar14 = puVar11[0x12];
          if (puVar16 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x1a);
            uVar14 = 0;
            if (puVar16 <= puVar11 + 0x4000) {
              uVar14 = 1;
              goto LAB_143a49b36;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143a49b36:
        *(uint **)(puVar11 + 0x10) = puVar16;
        puVar11[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14add52d0;
        *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_a8;
        *(undefined4 *)((longlong)puVar18 + 0xac) = local_a8._4_4_;
        *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a0._4_4_;
        *(int *)(puVar18 + 0x17) = local_98;
        *(int *)((longlong)puVar18 + 0xbc) = iStack_94;
        *(float *)(puVar18 + 0x18) = fStack_90;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_8c;
        puVar18[0x19] = local_88;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
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
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
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
        puVar18[0xf] = uVar12;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
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
        local_68 = (longlong *)FUN_14001cc68(0x30,8);
        *local_68 = (longlong)&PTR_LAB_14add52b0;
        local_68[5] = local_88;
        *(int *)(local_68 + 3) = local_98;
        *(int *)((longlong)local_68 + 0x1c) = iStack_94;
        *(float *)(local_68 + 4) = fStack_90;
        *(undefined4 *)((longlong)local_68 + 0x24) = uStack_8c;
        *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
        *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
        *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78[0] = FUN_143a56622;
        }
        local_b8 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3cbe0);
        if (local_78[0] != (code *)0x0) {
          plVar15 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar15 = local_58;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_143a499eb;
    }
  }
LAB_143a49d40:
  local_78[0] = (code *)&local_88;
  FUN_1481845a0(lVar5 + 0x10,&local_7c);
  lVar5 = *(longlong *)(lVar5 + 0x10);
  lVar13 = (longlong)local_7c * 0x98;
  *(int *)(lVar5 + 0x14 + lVar13) = local_98;
  *(undefined8 *)(lVar5 + 0xc + lVar13) = uStack_a0;
  *(int *)(lVar5 + 0x1c + lVar13) = iStack_94;
  *(float *)(lVar5 + 0x18 + lVar13) = fStack_90;
  *(undefined1 *)(lVar5 + 0x38 + lVar13) = 1;
LAB_143a499eb:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a49e28 FUN_143a49e28 body=1248 status=ok
// SIG undefined FUN_143a49e28(void)

void FUN_143a49e28(longlong param_1,undefined8 param_2,longlong param_3)

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
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) goto LAB_143a49f27;
  uVar12 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a4a263;
    if (iVar7 != 1) goto LAB_143a49e7b;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a4a263;
  }
  else {
LAB_143a49e7b:
    if (iVar7 == 0x10) goto LAB_143a4a263;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a4a263:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a4a263;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a49fe8;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a49fe8:
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
          goto LAB_143a4a068;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a4a068:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add5300;
    puVar16[0x15] = lVar4;
    puVar16[0x16] = uVar12;
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
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar4 + 0x30);
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
    local_48 = &PTR_LAB_14add52e0;
    local_68[0] = &LAB_143a568f2;
    local_40 = lVar4;
    local_38 = uVar12;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3cbe4);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_143a49f27:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4a31e FUN_143a4a31e body=345 status=ok
// SIG undefined FUN_143a4a31e(void)

void FUN_143a4a31e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar1 = *(longlong *)(param_2[2] + 0x10);
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x98;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x98) == lVar1)
        goto LAB_143a4a397;
        iVar6 = *(int *)(lVar7 + 0x90);
      } while (iVar6 != -1);
    }
  }
  lVar7 = 0;
LAB_143a4a397:
  uVar2 = *param_2;
  if (*(char *)(lVar7 + 0x38) == '\x01') {
    FUN_1481765cc((char *)(lVar7 + 8),uVar2);
  }
  if ((param_2[5] != 0) && (lVar1 = *(longlong *)(param_2[5] + 8), lVar1 != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[3] + 200) + 0x280) + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2[4] + 2) * 0xa8;
    lVar5 = (longlong)*(int *)(lVar3 + 0x70 + lVar8);
    if (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x68 + lVar8) + lVar9) == lVar1) {
          if (*(longlong *)(lVar7 + 0x40) == 0) {
            return;
          }
          if (*(char *)(lVar7 + 8) != '\x01') {
            return;
          }
          uVar4 = FUN_1481de36c(lVar7 + 0x40,uVar2);
          FUN_1405bfba3(uVar2,uVar4,0xffffffff,2);
          uVar4 = FUN_1481de36c(lVar7 + 0x68,uVar2);
          FUN_1405bfba3(uVar2,uVar4,0,2);
          return;
        }
        lVar9 = lVar9 + 8;
      } while (lVar5 * 8 != lVar9);
    }
  }
  return;
}



// FUNCTION 143a4a477 FUN_143a4a477 body=69 status=ok
// SIG undefined FUN_143a4a477(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4a477(void)

{
  _DAT_14cb3c3b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a4a4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c3c0,1);
  return;
}



// FUNCTION 143a4a4bc FUN_143a4a4bc body=69 status=ok
// SIG undefined FUN_143a4a4bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4a4bc(void)

{
  _DAT_14cb3c4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a4a4fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c4b0,1);
  return;
}



// FUNCTION 143a4a502 FUN_143a4a502 body=1690 status=ok
// SIG undefined FUN_143a4a502(void)

undefined8 FUN_143a4a502(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  code *_Src;
  undefined8 *puVar19;
  undefined2 *puVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  code *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = param_3;
  param_2[1] = 0;
  lVar10 = FUN_140af0dde(param_1 + 0x38,param_1);
  if ((lVar10 != 0) && ((longlong)*(int *)(param_3 + 0x110) != 0)) {
    lVar21 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x108) + lVar21);
      if (lVar10 == *(longlong *)(lVar5 + 0x28)) {
        param_2[1] = lVar5;
        break;
      }
      lVar21 = lVar21 + 0x10;
    } while ((longlong)*(int *)(param_3 + 0x110) * 0x10 != lVar21);
  }
  lVar10 = *(longlong *)(*param_2 + 0x38);
  if (lVar10 == 0) {
    uVar22 = 0;
    iVar7 = 0;
    _Src = (code *)0x0;
  }
  else {
    FUN_140af0d46(param_1 + 0x38,&local_b8,param_1);
    puVar18 = &DAT_149dfb77a;
    if ((int)uStack_b0 != 0) {
      puVar18 = local_b8;
    }
    local_88 = *(code **)(lVar10 + 0x18);
    FUN_1400021e4(&local_88,&local_98);
    puVar20 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar20 = local_98;
    }
    FUN_140002266(&local_88,L"%s.%s",puVar20,puVar18);
    _Src = local_88;
    local_88 = (code *)0x0;
    iVar7 = (int)local_80;
    uVar22 = local_80._4_4_;
    local_80 = 0;
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uStack_b0 = *(undefined8 *)(param_3 + 0x100);
  local_a0 = CONCAT44(uVar22,iVar7);
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar10 + 0xc60);
  local_b8 = (undefined2 *)uVar13;
  local_a8 = _Src;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_143a4a679;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a4a67e;
      goto LAB_143a4a6ec;
    }
  }
  else {
LAB_143a4a679:
    if (iVar4 != 0x10) {
LAB_143a4a6ec:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar4 = *(int *)(lVar10 + 0xc60), iVar4 == 2))
        goto LAB_143a4a67e;
        if (iVar4 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a4a67e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_143a4a899;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a54109);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_143a4a899:
          puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar19 + 0x19);
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
            puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar19 + 0x19);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143a4a919;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143a4a919:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14add53e8;
        *(undefined4 *)(puVar19 + 0x15) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar19 + 0xac) = local_b8._4_4_;
        *(int *)(puVar19 + 0x16) = (int)uStack_b0;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_b0._4_4_;
        puVar19[0x17] = local_a8;
        local_a8 = (code *)0x0;
        *(undefined4 *)(puVar19 + 0x18) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar19 + 0xc4) = local_a0._4_4_;
        local_a0 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
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
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar19[0xf] = uVar13;
        puVar19[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar7;
        if (puVar19 == (undefined8 *)0x0) {
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_88 = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14add5380;
        local_a8 = (code *)0x0;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_b8._4_4_;
        *(int *)(local_78 + 2) = (int)uStack_b0;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b0._4_4_;
        local_78[3] = (longlong)_Src;
        *(int *)(local_78 + 4) = iVar7;
        *(undefined4 *)((longlong)local_78 + 0x24) = uVar22;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88 = FUN_143a56af0;
        }
        local_c8 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIParticleReadCreateRTInstance",&DAT_14cb3cca0);
        if (local_88 != (code *)0x0) {
          plVar15 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar15 = local_68;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_143a4a7bb;
    }
  }
LAB_143a4a67e:
  local_88 = (code *)0x0;
  local_80 = CONCAT44(local_80._4_4_,iVar7);
  if (iVar7 == 0) {
    local_80 = 0;
  }
  else {
    FUN_1446dd670(&local_88,iVar7,0);
    memcpy(local_88,_Src,(longlong)iVar7 * 2);
  }
  FUN_141828608(uVar13,&uStack_b0,&local_88);
LAB_143a4a7bb:
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4ab9e FUN_143a4ab9e body=1210 status=ok
// SIG undefined FUN_143a4ab9e(void)

void FUN_143a4ab9e(longlong param_1,undefined8 param_2,longlong param_3)

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
    if (iVar7 == 2) goto LAB_143a4abe9;
    if (iVar7 != 1) goto LAB_143a4abe4;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a4abe9;
  }
  else {
LAB_143a4abe4:
    if (iVar7 == 0x10) goto LAB_143a4abe9;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a4abe9:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a4abe9;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a4ad85;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a4ad85:
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
          goto LAB_143a4ae05;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a4ae05:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add5468;
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
    local_48 = &PTR_LAB_14add5400;
    local_68[0] = &LAB_143a56dea;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNDIParticleReadDestroyRTInstance",&DAT_14cb3cca4);
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



// FUNCTION 143a4b074 FUN_143a4b074 body=2760 status=ok
// SIG undefined FUN_143a4b074(void)

void FUN_143a4b074(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_298 [32];
  longlong local_278 [2];
  longlong local_268;
  int local_260;
  longlong local_258 [2];
  longlong local_248;
  int local_240;
  longlong local_238 [2];
  longlong local_228;
  int local_220;
  longlong local_218 [2];
  longlong local_208;
  int local_200;
  longlong local_1f8 [2];
  longlong local_1e8;
  int local_1e0;
  longlong local_1d8;
  int local_1d0;
  longlong local_1c8 [2];
  longlong local_1b8;
  int local_1b0;
  longlong local_1a8 [2];
  longlong local_198;
  int local_190;
  longlong local_188 [2];
  longlong local_178 [2];
  undefined8 *local_168;
  int local_160 [2];
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148 [2];
  longlong local_138;
  int local_130;
  longlong local_128 [2];
  longlong local_118;
  int local_110;
  longlong local_108 [2];
  longlong local_f8;
  int local_f0;
  longlong local_e8 [2];
  longlong local_d8;
  int local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong local_88;
  int local_80;
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar11 = *param_2;
  if (lVar11 == DAT_14cb3c3d0) {
    local_168 = (undefined8 *)0x0;
    local_160[0] = 0;
    FUN_1446efa72(&local_168,0,2,0x10);
    *local_168 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_168[2] = lVar7;
    ppuVar5 = &PTR_FUN_14add5480;
  }
  else {
    if (lVar11 == DAT_14cb3c3d8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_298);
    }
    if (lVar11 == DAT_14cb3c3e0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_298);
    }
    if (lVar11 != DAT_14cb3c3e8) {
      if (lVar11 == DAT_14cb3c3f0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_298);
      }
      if (lVar11 == DAT_14cb3c498) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_298);
      }
      if ((longlong)(int)param_2[6] != 0) {
        plVar6 = (longlong *)param_2[5];
        lVar7 = (longlong)(int)param_2[6] << 4;
        do {
          if (*plVar6 == DAT_14cb3d8e0) {
            if (plVar6 == (longlong *)0x0) break;
            if (*(longlong *)(param_3 + 8) == 0) {
              lVar7 = 0;
              iVar9 = 0;
            }
            else {
              plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_3 + 8) + 0x10) + 8);
              lVar7 = *plVar1;
              iVar9 = (int)plVar1[1];
            }
            puVar2 = (undefined8 *)plVar6[1];
            if (lVar11 == DAT_14cb3c3f8) {
              FUN_14817757c(param_1,param_4,puVar2);
              plVar6 = local_48;
LAB_143a4b97c:
              *plVar6 = lVar7;
              *(int *)(plVar6 + 1) = iVar9;
              puVar10 = &DAT_14cb420d0;
            }
            else if (lVar11 == DAT_14cb3c400) {
              FUN_148177654(param_1,param_4,puVar2);
              plVar6 = local_58;
LAB_143a4b9a4:
              *plVar6 = lVar7;
              *(int *)(plVar6 + 1) = iVar9;
              puVar10 = &DAT_14cb420e0;
            }
            else if (lVar11 == DAT_14cb3c408) {
              FUN_14817772c(param_1,param_4,puVar2);
              local_68 = lVar7;
              local_60 = iVar9;
              cVar4 = FUN_143a4bbdf(&local_68,puVar2,&DAT_14cb420f0);
              if (cVar4 != '\0') break;
              plVar6 = local_78;
LAB_143a4b531:
              *plVar6 = lVar7;
              *(int *)(plVar6 + 1) = iVar9;
              puVar10 = &DAT_14cb42100;
            }
            else if (lVar11 == DAT_14cb3c410) {
              FUN_148177804(param_1,param_4,puVar2);
              local_88 = lVar7;
              local_80 = iVar9;
              cVar4 = FUN_143a4bbdf(&local_88,puVar2,&DAT_14cb42110);
              if (cVar4 != '\0') break;
              plVar6 = local_98;
LAB_143a4ba31:
              *plVar6 = lVar7;
              *(int *)(plVar6 + 1) = iVar9;
              puVar10 = &DAT_14cb42120;
            }
            else if (lVar11 == DAT_14cb3c418) {
              local_a8 = lVar7;
              local_a0 = iVar9;
              cVar4 = FUN_143a4bbdf(&local_a8,puVar2,&DAT_14cb42130);
              if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_298);
              }
              FUN_1481779b4(param_1,param_4,puVar2);
              local_b8 = lVar7;
              local_b0 = iVar9;
              cVar4 = FUN_143a4bbdf(&local_b8,puVar2,&DAT_14cb42140);
              if (cVar4 != '\0') break;
              plVar6 = local_c8;
LAB_143a4baad:
              *plVar6 = lVar7;
              *(int *)(plVar6 + 1) = iVar9;
              puVar10 = &DAT_14cb42150;
            }
            else {
              if (lVar11 == DAT_14cb3c420) {
                FUN_148177a8c(param_1,param_4,puVar2);
                local_d8 = lVar7;
                local_d0 = iVar9;
                cVar4 = FUN_143a4bbdf(&local_d8,puVar2,&DAT_14cb42160);
                if (cVar4 == '\0') {
                  plVar6 = local_e8;
                  goto LAB_143a4b8e5;
                }
                break;
              }
              if (lVar11 == DAT_14cb3c430) {
                FUN_1481778dc(param_1,param_4,puVar2);
                local_f8 = lVar7;
                local_f0 = iVar9;
                cVar4 = FUN_143a4bbdf(&local_f8,puVar2,&DAT_14cb42130);
                if (cVar4 == '\0') {
                  plVar6 = local_108;
                  goto LAB_143a4baad;
                }
                break;
              }
              if (lVar11 == DAT_14cb3c428) {
                FUN_148177b64(param_1,param_4,puVar2);
                local_118 = lVar7;
                local_110 = iVar9;
                cVar4 = FUN_143a4bbdf(&local_118,puVar2,&DAT_14cb42180);
                if (cVar4 != '\0') break;
                plVar6 = local_128;
              }
              else if (lVar11 == DAT_14cb3c438) {
                FUN_148177c3c(param_1,param_4,puVar2);
                local_138 = lVar7;
                local_130 = iVar9;
                cVar4 = FUN_143a4bbdf(&local_138,puVar2,&DAT_14cb42190);
                if (cVar4 != '\0') break;
                plVar6 = local_148;
              }
              else {
                if (lVar11 == DAT_14cb3c440) {
                  FUN_148177d14(param_1,param_4);
                  local_168 = puVar2;
                  local_160[0] = FUN_144830b78(local_160,&DAT_14cb421a0);
                  local_158 = 0;
                  uStack_150 = 0;
                  if (iVar9 != 0) {
                    lVar11 = 0;
                    goto LAB_143a4b947;
                  }
                  break;
                }
                if (lVar11 == DAT_14cb3c448) {
                  FUN_148177dec(param_1,param_4,puVar2);
                  plVar6 = local_178;
                  goto LAB_143a4b97c;
                }
                if (lVar11 == DAT_14cb3c450) {
                  FUN_148177ec4(param_1,param_4,puVar2);
                  plVar6 = local_188;
                  goto LAB_143a4b9a4;
                }
                if (lVar11 == DAT_14cb3c458) {
                  local_168 = (undefined8 *)0x0;
                  local_160[0] = 0;
                  FUN_1446efa72(&local_168,0,3,0x10);
                  puVar10 = local_168;
                  *local_168 = &PTR_LAB_14ad81180;
                  LOCK();
                  UNLOCK();
                  lVar8 = DAT_14c758608 + 1;
                  lVar11 = DAT_14c758608 + 1;
                  if (lVar8 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar8 = DAT_14c758608 + 2;
                    lVar11 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar11;
                  local_168[2] = lVar8;
                  *local_168 = &PTR_FUN_14add5a30;
                  local_168[3] = param_1;
                  local_168[4] = puVar2;
                  local_168 = (undefined8 *)0x0;
                  local_160[0] = 0;
                  if ((int)param_4[1] == 0) {
LAB_143a4b4a5:
                    if (*param_4 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    puVar3 = (undefined8 *)*param_4;
                    if (puVar3 != (undefined8 *)0x0) {
                      (**(code **)*puVar3)(puVar3,0);
                      FUN_1446efa72(param_4,0,0,0x10);
                      *(undefined4 *)(param_4 + 1) = 0;
                      goto LAB_143a4b4a5;
                    }
                  }
                  *param_4 = (longlong)puVar10;
                  *(undefined4 *)(param_4 + 1) = 3;
                  if (local_160[0] == 0) {
LAB_143a4b4fb:
                    if (local_168 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (local_168 != (undefined8 *)0x0) {
                    (**(code **)*local_168)(local_168,0);
                    FUN_1446efa72(&local_168,0,0,0x10);
                    local_160[0] = 0;
                    goto LAB_143a4b4fb;
                  }
                  local_198 = lVar7;
                  local_190 = iVar9;
                  cVar4 = FUN_143a4bbdf(&local_198,puVar2,&DAT_14cb420f0);
                  if (cVar4 == '\0') {
                    plVar6 = local_1a8;
                    goto LAB_143a4b531;
                  }
                  break;
                }
                if (lVar11 == DAT_14cb3c460) {
                  FUN_148177f9c(param_1,param_4,puVar2);
                  local_1b8 = lVar7;
                  local_1b0 = iVar9;
                  cVar4 = FUN_143a4bbdf(&local_1b8,puVar2,&DAT_14cb42110);
                  if (cVar4 == '\0') {
                    plVar6 = local_1c8;
                    goto LAB_143a4ba31;
                  }
                  break;
                }
                if (lVar11 == DAT_14cb3c468) {
                  local_1d8 = lVar7;
                  local_1d0 = iVar9;
                  cVar4 = FUN_143a4bbdf(&local_1d8,puVar2,&DAT_14cb42130);
                  if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
                    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_298);
                  }
                  FUN_146470ca8(param_1,param_4,puVar2);
                  local_1e8 = lVar7;
                  local_1e0 = iVar9;
                  cVar4 = FUN_143a4bbdf(&local_1e8,puVar2,&DAT_14cb42140);
                  if (cVar4 == '\0') {
                    plVar6 = local_1f8;
                    goto LAB_143a4baad;
                  }
                  break;
                }
                if (lVar11 == DAT_14cb3c470) {
                  FUN_148178074(param_1,param_4,puVar2);
                  local_208 = lVar7;
                  local_200 = iVar9;
                  cVar4 = FUN_143a4bbdf(&local_208,puVar2,&DAT_14cb42160);
                  if (cVar4 != '\0') break;
                  plVar6 = local_218;
                }
                else {
                  if (lVar11 == DAT_14cb3c480) {
                    FUN_14182763e(param_1,param_4,puVar2);
                    local_228 = lVar7;
                    local_220 = iVar9;
                    cVar4 = FUN_143a4bbdf(&local_228,puVar2,&DAT_14cb42130);
                    if (cVar4 == '\0') {
                      plVar6 = local_238;
                      goto LAB_143a4baad;
                    }
                    break;
                  }
                  if (lVar11 == DAT_14cb3c478) {
                    FUN_146470d80(param_1,param_4,puVar2);
                    local_248 = lVar7;
                    local_240 = iVar9;
                    cVar4 = FUN_143a4bbdf(&local_248,puVar2,&DAT_14cb42180);
                    if (cVar4 == '\0') {
                      plVar6 = local_258;
                      goto LAB_143a4b8e5;
                    }
                    break;
                  }
                  if (lVar11 != DAT_14cb3c488) {
                    if (lVar11 == DAT_14cb3c490) {
                      FUN_146470e58(param_1,param_4);
                      local_168 = puVar2;
                      local_160[0] = FUN_144830b78(local_160,&DAT_14cb421a0);
                      local_158 = 0;
                      uStack_150 = 0;
                      if (iVar9 != 0) {
                        lVar11 = 0;
                        goto LAB_143a4b6fc;
                      }
                    }
                    break;
                  }
                  FUN_14817814c(param_1,param_4,puVar2);
                  local_268 = lVar7;
                  local_260 = iVar9;
                  cVar4 = FUN_143a4bbdf(&local_268,puVar2,&DAT_14cb42190);
                  if (cVar4 != '\0') break;
                  plVar6 = local_278;
                }
              }
LAB_143a4b8e5:
              *plVar6 = lVar7;
              *(int *)(plVar6 + 1) = iVar9;
              puVar10 = &DAT_14cb42170;
            }
            FUN_143a4bbdf(plVar6,puVar2,puVar10);
            break;
          }
          plVar6 = plVar6 + 2;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
      goto LAB_143a4b236;
    }
    local_168 = (undefined8 *)0x0;
    local_160[0] = 0;
    FUN_1446efa72(&local_168,0,2,0x10);
    *local_168 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_168[2] = lVar7;
    ppuVar5 = &PTR_FUN_14add3cd0;
  }
  puVar2 = local_168;
  *local_168 = ppuVar5;
  local_168[3] = param_1;
  local_168 = (undefined8 *)0x0;
  local_160[0] = 0;
  if ((int)param_4[1] == 0) {
LAB_143a4b1d8:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar10 = (undefined8 *)*param_4;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_143a4b1d8;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_160[0] != 0) {
    if (local_168 == (undefined8 *)0x0) goto LAB_143a4b236;
    (**(code **)*local_168)(local_168,0);
    FUN_1446efa72(&local_168,0,0,0x10);
    local_160[0] = 0;
  }
  if (local_168 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143a4b236;
  while (lVar11 = lVar11 + 0xc, (longlong)iVar9 * 0xc != lVar11) {
LAB_143a4b947:
    if ((*(undefined8 **)(lVar7 + lVar11) == local_168) &&
       (*(int *)(lVar7 + 8 + lVar11) == local_160[0])) break;
  }
  goto LAB_143a4b236;
  while (lVar11 = lVar11 + 0xc, (longlong)iVar9 * 0xc != lVar11) {
LAB_143a4b6fc:
    if ((*(undefined8 **)(lVar7 + lVar11) == local_168) &&
       (*(int *)(lVar7 + 8 + lVar11) == local_160[0])) break;
  }
LAB_143a4b236:
  if ((local_38 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a4bbdf FUN_143a4bbdf body=143 status=ok
// SIG undefined FUN_143a4bbdf(void)

undefined4 FUN_143a4bbdf(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20[0] = FUN_144830b78(local_20,param_3);
  if ((longlong)(int)param_1[1] != 0) {
    uVar3 = 0;
    do {
      if ((*(longlong *)(*param_1 + uVar3) == local_28) &&
         (*(int *)(*param_1 + 8 + uVar3) == local_20[0])) {
        iVar1 = (int)(uVar3 >> 2) * -0x55555555;
        uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != -1);
        goto LAB_143a4bc51;
      }
      uVar3 = uVar3 + 0xc;
    } while ((longlong)(int)param_1[1] * 0xc != uVar3);
  }
  uVar2 = 0;
LAB_143a4bc51:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4bc70 FUN_143a4bc70 body=3325 status=ok
// SIG undefined FUN_143a4bc70(void)

void FUN_143a4bc70(undefined8 param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined4 *_Dst;
  longlong lVar28;
  ushort *puVar29;
  undefined1 (*_Dst_00) [16];
  ulonglong uVar30;
  longlong lVar31;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  uint local_80;
  uint local_7c;
  longlong local_78;
  ulonglong local_70;
  undefined4 *local_68;
  undefined1 (*local_60) [16];
  ulonglong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = *(ulonglong **)(param_2 + 0x40);
  uVar23 = (uint)puVar3[1];
  uVar30 = (ulonglong)uVar23;
  iVar17 = uVar23 + 6;
  if (-1 < (int)(uVar23 + 3)) {
    iVar17 = uVar23 + 3;
  }
  uVar22 = 1;
  if (1 < iVar17 >> 2) {
    uVar22 = iVar17 >> 2;
  }
  lVar15 = *(longlong *)(param_2 + 0x48);
  uVar21 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  local_7c = param_3;
  FUN_140ef40a6();
  lVar24 = *(longlong *)(param_2 + 0x38);
  puVar1 = (undefined8 *)((ulonglong)uVar21 + lVar24);
  uVar21 = DAT_14cb3cce4 + uVar21 + 0xf & 0xfffffff0;
  _Dst = (undefined4 *)((ulonglong)uVar21 + lVar24);
  uVar21 = uVar21 + uVar22 * 0x10;
  _Dst_00 = (undefined1 (*) [16])((ulonglong)uVar21 + lVar24);
  *(uint *)(param_2 + 0x50) = uVar21 + uVar22 * 0x10;
  if (*(int *)(lVar15 + 0x18) != *(int *)(lVar15 + 0x44)) {
    lVar24 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar20 = lVar15 + 0x48;
    if (*(longlong *)(lVar15 + 0x50) != 0) {
      lVar20 = *(longlong *)(lVar15 + 0x50);
    }
    iVar17 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(lVar15 + 0x58) - 1U &
                               (int)lVar24 + (int)((ulonglong)lVar24 >> 0x20) * 0x17) * 4);
    if (iVar17 != -1) {
      while (lVar20 = *(longlong *)(lVar15 + 0x10) + (longlong)iVar17 * 0x58,
            *(longlong *)(*(longlong *)(lVar15 + 0x10) + (longlong)iVar17 * 0x58) != lVar24) {
        iVar17 = *(int *)(lVar20 + 0x50);
        if (iVar17 == -1) goto LAB_143a4bf1a;
      }
      if (lVar20 == 0) goto LAB_143a4bf1a;
      lVar15 = *(longlong *)(lVar20 + 8);
      uVar21 = *(uint *)(lVar20 + 0x4c);
      if (lVar15 == 0) {
        if ((uVar21 & 1) == 0) {
          *(uint *)(lVar20 + 0x4c) = uVar21 | 1;
        }
      }
      else {
        *(uint *)(lVar20 + 0x4c) = uVar21 & 0xfffffffe;
        lVar24 = *(longlong *)(lVar15 + 0x50);
        if (lVar24 != 0) {
          if (*(longlong *)(*(longlong *)(param_2 + 0x18) + 200) == lVar15) {
            lVar15 = *(longlong *)(param_2 + 0x20);
            if ((*(longlong *)(lVar15 + 0x90) != 0) &&
               ((*(byte *)(*(longlong *)(lVar15 + 0x90) + 0x4c) & 2) != 0)) goto LAB_143a4bf1a;
            lVar25 = *(longlong *)(lVar15 + 0x30);
            lVar28 = *(longlong *)(lVar15 + 0x58);
            if ((*(longlong *)(lVar15 + 0x58) == 0) && (lVar28 = lVar25, lVar25 == 0))
            goto LAB_143a4bdb4;
LAB_143a4be87:
            uVar14 = *(undefined4 *)(lVar28 + 0x134);
            uVar13 = *(undefined4 *)(lVar28 + 0x138);
          }
          else {
            lVar25 = *(longlong *)(lVar24 + 0x78);
            lVar28 = lVar25;
            if (lVar25 != 0) goto LAB_143a4be87;
LAB_143a4bdb4:
            lVar25 = 0;
            uVar14 = 0;
            uVar13 = 0;
          }
          *(undefined4 *)puVar1 = uVar14;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar13;
          lVar15 = *(longlong *)(lVar24 + 0x50);
          if (*(longlong *)(lVar24 + 0x50) == 0) {
            lVar15 = DAT_14cb428b0;
          }
          puVar1[4] = lVar15;
          if (lVar25 == 0) goto LAB_143a4bf2c;
          if (*(longlong *)(lVar20 + 0x20) == lVar24) goto LAB_143a4c83d;
          uVar23 = (int)puVar3[1] + 3;
          uVar21 = uVar23 & 0xfffffffc;
          local_a8 = (longlong *)(lVar20 + 0x28);
          iVar17 = *(int *)(lVar20 + 0x30);
          local_88 = lVar24;
          local_80 = uVar22;
          local_78 = lVar25;
          local_70 = uVar30;
          local_68 = _Dst;
          local_60 = _Dst_00;
          if (iVar17 < (int)uVar21) {
            *(uint *)(lVar20 + 0x30) = uVar21;
            if ((uint)(*(int *)(lVar20 + 0x34) - iVar17) < uVar21 - iVar17) {
              FUN_1446f48e2(local_a8);
            }
          }
          else {
            if ((int)uVar23 < 0) goto LAB_143a4c967;
            if ((int)uVar21 < iVar17) {
              *(uint *)(lVar20 + 0x30) = uVar21;
              FUN_14479f406(local_a8);
            }
          }
          local_a0 = (longlong *)(lVar20 + 0x38);
          iVar17 = *(int *)(lVar20 + 0x40);
          if (iVar17 < (int)uVar21) {
            *(uint *)(lVar20 + 0x40) = uVar21;
            if ((uint)(*(int *)(lVar20 + 0x44) - iVar17) < uVar21 - iVar17) {
              FUN_1446f48e2(local_a0);
            }
          }
          else {
            if ((int)uVar23 < 0) {
LAB_143a4c967:
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar21);
            }
            if ((int)uVar21 < iVar17) {
              *(uint *)(lVar20 + 0x40) = uVar21;
              FUN_14479f406(local_a0);
            }
          }
          plVar19 = *(longlong **)(local_88 + 8);
          lVar15 = local_88;
          local_90 = plVar19;
          if (0 < (int)puVar3[1]) {
            local_58 = puVar3 + 2;
            lVar24 = 0;
            plVar26 = local_a0;
            plVar27 = local_a8;
            do {
              uVar30 = *puVar3;
              uVar18 = ((longlong)uVar30 >> 0x18) + (longlong)puVar3;
              if ((uVar30 & 1) == 0) {
                uVar18 = uVar30;
              }
              lVar25 = *(longlong *)(uVar18 + lVar24 * 8);
              if ((lVar25 != 0) && (0 < (longlong)(int)plVar19[1])) {
                lVar31 = *plVar19 + 8;
                lVar28 = 0;
LAB_143a4c063:
                if (*(longlong *)(lVar31 + -8) != lVar25) goto code_r0x000143a4c069;
                uVar30 = *local_58;
                uVar18 = ((longlong)uVar30 >> 0x18) + (longlong)local_58;
                if ((uVar30 & 1) == 0) {
                  uVar18 = uVar30;
                }
                uVar2 = *(undefined1 *)(uVar18 + lVar24);
                plVar19 = (longlong *)FUN_144741050(lVar31);
                lVar11 = DAT_14cb421a0;
                lVar10 = DAT_14cb42190;
                lVar9 = DAT_14cb42180;
                lVar8 = DAT_14cb42160;
                lVar7 = DAT_14cb42140;
                lVar6 = DAT_14cb42130;
                lVar5 = DAT_14cb42110;
                lVar4 = DAT_14cb420f0;
                lVar25 = DAT_14cb420e0;
                lVar15 = DAT_14cb420d0;
                switch(uVar2) {
                case 1:
                  if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb420d0);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 != lVar15) || ((short)plVar19[1] != DAT_14cb420d8)) ||
                     (*(char *)((longlong)plVar19 + 10) != DAT_14cb420da))
                  goto switchD_143a4c0d6_default;
LAB_143a4c5bc:
                  puVar29 = (ushort *)(lVar28 + local_90[2] + 2);
                  goto LAB_143a4c5d6;
                case 2:
                  if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb420f0);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 != lVar4) || ((short)plVar19[1] != (short)DAT_14cb420f8)) ||
                     (*(char *)((longlong)plVar19 + 10) != DAT_14cb420f8._2_1_)) {
                    plVar16 = (longlong *)FUN_144741050(lVar31);
                    lVar15 = DAT_14cb42100;
                    if ((DAT_14c950c29 & DAT_14cb42100 != 0) != 0) {
                      FUN_1456cec3c(DAT_14cb42100);
                    }
                    if (*plVar16 != lVar15) goto LAB_143a4c5ef;
                    uVar23 = 0xffffffff;
                    plVar19 = local_90;
                    lVar15 = local_88;
                    plVar26 = local_a0;
                    plVar27 = local_a8;
                    if ((short)plVar16[1] == DAT_14cb42108) {
                      uVar14 = 0;
                      if (*(char *)((longlong)plVar16 + 10) == DAT_14cb4210a) {
LAB_143a4c570:
                        uVar23 = (uint)*(ushort *)(local_90[2] + 4 + lVar28);
                        uVar14 = 1;
                        plVar19 = local_90;
                        lVar15 = local_88;
                        plVar26 = local_a0;
                        plVar27 = local_a8;
                      }
                      goto LAB_143a4c078;
                    }
                    goto LAB_143a4c076;
                  }
                  break;
                case 3:
                  if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb42110);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 == lVar5) && ((short)plVar19[1] == (short)DAT_14cb42118)) &&
                     (*(char *)((longlong)plVar19 + 10) == DAT_14cb42118._2_1_)) break;
                  plVar16 = (longlong *)FUN_144741050(lVar31);
                  lVar15 = DAT_14cb42120;
                  if ((DAT_14c950c29 & DAT_14cb42120 != 0) != 0) {
                    FUN_1456cec3c(DAT_14cb42120);
                  }
                  if (*plVar16 != lVar15) goto LAB_143a4c5ef;
                  uVar23 = 0xffffffff;
                  plVar19 = local_90;
                  lVar15 = local_88;
                  plVar26 = local_a0;
                  plVar27 = local_a8;
                  if ((short)plVar16[1] == DAT_14cb42128) {
                    uVar14 = 0;
                    if (*(char *)((longlong)plVar16 + 10) == DAT_14cb4212a) goto LAB_143a4c570;
                    goto LAB_143a4c078;
                  }
                  goto LAB_143a4c076;
                case 4:
                  if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb42140);
                    plVar19 = local_98;
                  }
                  lVar25 = DAT_14cb42130;
                  lVar15 = *plVar19;
                  if (((lVar15 != lVar7) || ((short)plVar19[1] != (short)DAT_14cb42148)) ||
                     (*(char *)((longlong)plVar19 + 10) != DAT_14cb42148._2_1_)) {
                    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
                      local_98 = plVar19;
                      FUN_1456cec3c(DAT_14cb42130);
                      lVar15 = *local_98;
                      plVar19 = local_98;
                    }
                    if (lVar15 == lVar25) goto LAB_143a4c2cb;
                    goto LAB_143a4c2e7;
                  }
                  break;
                case 5:
                  if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb42160);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 != lVar8) || ((short)plVar19[1] != (short)DAT_14cb42168)) ||
                     (*(char *)((longlong)plVar19 + 10) != DAT_14cb42168._2_1_)) {
LAB_143a4c501:
                    plVar16 = (longlong *)FUN_144741050(lVar31);
                    lVar15 = DAT_14cb42170;
                    if ((DAT_14c950c29 & DAT_14cb42170 != 0) != 0) {
                      FUN_1456cec3c(DAT_14cb42170);
                    }
                    if (*plVar16 != lVar15) goto LAB_143a4c5ef;
                    uVar23 = 0xffffffff;
                    plVar19 = local_90;
                    lVar15 = local_88;
                    plVar26 = local_a0;
                    plVar27 = local_a8;
                    if ((short)plVar16[1] == DAT_14cb42178) {
                      uVar14 = 0;
                      if (*(char *)((longlong)plVar16 + 10) == DAT_14cb4217a) goto LAB_143a4c570;
                      goto LAB_143a4c078;
                    }
                    goto LAB_143a4c076;
                  }
                  break;
                case 6:
                  if ((DAT_14cb420e0 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb420e0);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 == lVar25) && ((short)plVar19[1] == (short)DAT_14cb420e8)) &&
                     (*(char *)((longlong)plVar19 + 10) == DAT_14cb420e8._2_1_)) goto LAB_143a4c5bc;
                default:
switchD_143a4c0d6_default:
                  FUN_144741050(lVar31);
LAB_143a4c5ef:
                  uVar14 = 0;
                  uVar23 = 0xffffffff;
                  plVar19 = local_90;
                  lVar15 = local_88;
                  plVar26 = local_a0;
                  plVar27 = local_a8;
                  goto LAB_143a4c078;
                case 7:
                  if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb42180);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 != lVar9) || ((short)plVar19[1] != (short)DAT_14cb42188)) ||
                     (*(char *)((longlong)plVar19 + 10) != DAT_14cb42188._2_1_)) goto LAB_143a4c501;
                  break;
                case 8:
                  if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb42190);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 != lVar10) || ((short)plVar19[1] != DAT_14cb42198)) ||
                     (*(char *)((longlong)plVar19 + 10) != DAT_14cb4219a)) goto LAB_143a4c501;
                  break;
                case 9:
                  if ((DAT_14cb421a0 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb421a0);
                    plVar19 = local_98;
                  }
                  if (((*plVar19 == lVar11) && ((short)plVar19[1] == DAT_14cb421a8)) &&
                     (*(char *)((longlong)plVar19 + 10) == DAT_14cb421aa)) goto LAB_143a4c5bc;
                  goto switchD_143a4c0d6_default;
                case 10:
                  if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
                    local_98 = plVar19;
                    FUN_1456cec3c(DAT_14cb42130);
                    plVar19 = local_98;
                  }
                  if (*plVar19 == lVar6) {
LAB_143a4c2cb:
                    if (((short)plVar19[1] == DAT_14cb42138) &&
                       (*(char *)((longlong)plVar19 + 10) == DAT_14cb4213a)) break;
                  }
LAB_143a4c2e7:
                  plVar16 = (longlong *)FUN_144741050(lVar31);
                  lVar15 = DAT_14cb42150;
                  if ((DAT_14c950c29 & DAT_14cb42150 != 0) != 0) {
                    FUN_1456cec3c(DAT_14cb42150);
                  }
                  if (*plVar16 != lVar15) goto LAB_143a4c5ef;
                  uVar23 = 0xffffffff;
                  plVar19 = local_90;
                  lVar15 = local_88;
                  plVar26 = local_a0;
                  plVar27 = local_a8;
                  if ((short)plVar16[1] == DAT_14cb42158) {
                    uVar14 = 0;
                    if (*(char *)((longlong)plVar16 + 10) == DAT_14cb4215a) goto LAB_143a4c570;
                    goto LAB_143a4c078;
                  }
                  goto LAB_143a4c076;
                }
                puVar29 = (ushort *)(lVar28 + local_90[2]);
LAB_143a4c5d6:
                uVar23 = (uint)*puVar29;
                uVar14 = 0;
                plVar19 = local_90;
                lVar15 = local_88;
                plVar26 = local_a0;
                plVar27 = local_a8;
                goto LAB_143a4c078;
              }
LAB_143a4c076:
              uVar23 = 0xffffffff;
              uVar14 = 0;
LAB_143a4c078:
              *(uint *)(*plVar27 + lVar24 * 4) = uVar23;
              *(undefined4 *)(*plVar26 + lVar24 * 4) = uVar14;
              lVar24 = lVar24 + 1;
            } while (lVar24 < (int)puVar3[1]);
          }
          FUN_1446f470e(&local_50,&DAT_149e3ac30);
          *(undefined4 *)(lVar20 + 0x48) = 0xffffffff;
          uVar23 = (uint)local_70;
          if (0 < (longlong)(int)local_90[1]) {
            plVar19 = (longlong *)*local_90;
            lVar24 = 0;
            do {
              if (*plVar19 == local_50) {
                *(uint *)(lVar20 + 0x48) = *(ushort *)(local_90[2] + 2 + lVar24) + 1;
                break;
              }
              lVar24 = lVar24 + 0x20;
              plVar19 = (longlong *)((longlong)plVar19 + 0xc);
            } while ((longlong)(int)local_90[1] * 0x20 != lVar24);
          }
          lVar24 = (longlong)(int)puVar3[1];
          if ((int)puVar3[1] < *(int *)(lVar20 + 0x30)) {
            do {
              *(undefined4 *)(*(longlong *)(lVar20 + 0x28) + lVar24 * 4) = 0xffffffff;
              *(undefined4 *)(*(longlong *)(lVar20 + 0x38) + lVar24 * 4) = 0;
              lVar24 = lVar24 + 1;
            } while (lVar24 < *(int *)(lVar20 + 0x30));
          }
          *(longlong *)(lVar20 + 0x20) = lVar15;
          *(byte *)(lVar20 + 0x4c) = *(byte *)(lVar20 + 0x4c) | 2;
          lVar25 = local_78;
          _Dst = local_68;
          _Dst_00 = local_60;
          uVar22 = local_80;
LAB_143a4c83d:
          uVar14 = 0xffffffff;
          if ((-1 < (int)local_7c) && ((int)local_7c < *(int *)(lVar25 + 0x178))) {
            uVar14 = *(undefined4 *)(*(longlong *)(lVar25 + 0x170) + (ulonglong)local_7c * 4);
          }
          *(undefined4 *)(puVar1 + 1) = uVar14;
          *(uint *)((longlong)puVar1 + 0xc) = *(uint *)(lVar25 + 0x128) >> 2;
          *(uint *)(puVar1 + 2) = *(uint *)(lVar25 + 300) >> 2;
          uVar14 = 0;
          *(uint *)((longlong)puVar1 + 0x14) = *(uint *)(lVar25 + 0x130) >> 1;
          *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(lVar20 + 0x48);
          if ((-1 < (int)local_7c) && ((int)local_7c < *(int *)(lVar25 + 400))) {
            uVar14 = *(undefined4 *)(*(longlong *)(lVar25 + 0x188) + (ulonglong)local_7c * 4);
          }
          *(undefined4 *)(puVar1 + 3) = uVar14;
          lVar15 = *(longlong *)(lVar25 + 0xd0);
          if (*(longlong *)(lVar25 + 0xd0) == 0) {
            lVar15 = DAT_14cb428b0;
          }
          puVar1[5] = lVar15;
          lVar15 = *(longlong *)(lVar25 + 0x70);
          if (*(longlong *)(lVar25 + 0x70) == 0) {
            lVar15 = DAT_14cb427b0;
          }
          puVar1[6] = lVar15;
          lVar15 = *(longlong *)(lVar25 + 0xa0);
          if (*(longlong *)(lVar25 + 0xa0) == 0) {
            lVar15 = DAT_14cb428b0;
          }
          puVar1[7] = lVar15;
          lVar15 = *(longlong *)(lVar25 + 0x100);
          if (*(longlong *)(lVar25 + 0x100) == 0) {
            lVar15 = DAT_14cb429b0;
          }
          puVar1[8] = lVar15;
          if (0 < (int)uVar23) {
            memcpy(_Dst,*(void **)(lVar20 + 0x28),(ulonglong)uVar22 << 4);
            memcpy(_Dst_00,*(void **)(lVar20 + 0x38),(ulonglong)uVar22 << 4);
          }
          uVar23 = *(uint *)(lVar20 + 0x4c);
          if ((((uVar23 & 2) != 0) && (*(int *)(lVar20 + 0x48) == -1)) &&
             (cVar12 = FUN_144944d16(param_2,(longlong)puVar1 + 0x1c), cVar12 != '\0')) {
            *(uint *)(lVar20 + 0x4c) = uVar23 & 0xfffffffd;
          }
LAB_143a4be36:
          if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
      *puVar1 = 0;
      puVar1[4] = DAT_14cb428b0;
      *(undefined1 (*) [16])(puVar1 + 1) = ZEXT416(0xffffffff);
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
      puVar1[5] = DAT_14cb428b0;
      puVar1[6] = DAT_14cb427b0;
      puVar1[7] = DAT_14cb428b0;
      puVar1[8] = DAT_14cb429b0;
      *_Dst = 0xffffffff;
      _Dst[1] = 0xffffffff;
      _Dst[2] = 0xffffffff;
      _Dst[3] = 0xffffffff;
      *_Dst_00 = (undefined1  [16])0x0;
      *(undefined8 *)(lVar20 + 0x20) = 0;
      *(byte *)(lVar20 + 0x4c) = *(byte *)(lVar20 + 0x4c) | 2;
      goto LAB_143a4be36;
    }
  }
LAB_143a4bf1a:
  *puVar1 = 0;
  puVar1[4] = DAT_14cb428b0;
LAB_143a4bf2c:
  *(undefined1 (*) [16])(puVar1 + 1) = ZEXT416(0xffffffff);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 0xffffffff;
  puVar1[5] = DAT_14cb428b0;
  puVar1[6] = DAT_14cb427b0;
  puVar1[7] = DAT_14cb428b0;
  puVar1[8] = DAT_14cb429b0;
  *_Dst = 0xffffffff;
  _Dst[1] = 0xffffffff;
  _Dst[2] = 0xffffffff;
  _Dst[3] = 0xffffffff;
  *_Dst_00 = (undefined1  [16])0x0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
code_r0x000143a4c069:
  lVar28 = lVar28 + 0x20;
  lVar31 = lVar31 + 0xc;
  if ((longlong)(int)plVar19[1] * 0x20 == lVar28) goto LAB_143a4c076;
  goto LAB_143a4c063;
}



// FUNCTION 143a4c9b3 FUN_143a4c9b3 body=69 status=ok
// SIG undefined FUN_143a4c9b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4c9b3(void)

{
  _DAT_14cb3c630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a4c9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c638,1);
  return;
}



// FUNCTION 143a4c9f8 FUN_143a4c9f8 body=2583 status=ok
// SIG undefined FUN_143a4c9f8(void)

bool FUN_143a4c9f8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined8 local_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined2 uStack_eb;
  undefined1 uStack_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  undefined4 uStack_d7;
  undefined4 uStack_d3;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  int local_8c;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined1 *)param_2 = 1;
  param_2[1] = DAT_14c9a5298;
  *(undefined4 *)(param_2 + 2) = DAT_14c9a52a0;
  *(undefined8 *)((longlong)param_2 + 0x14) = DAT_14c9a5298;
  *(undefined4 *)((longlong)param_2 + 0x1c) = DAT_14c9a52a0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  lVar7 = *(longlong *)(param_1 + 0x28);
  iVar11 = *(int *)(param_1 + 0x70);
  iVar25 = *(int *)(param_1 + 0x3c);
  if (iVar25 < 2) {
    iVar25 = 1;
  }
  iVar8 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) < 2) {
    iVar8 = 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  iVar26 = 1;
  if (1 < *(int *)(param_1 + 0x44)) {
    iVar26 = *(int *)(param_1 + 0x44);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x78);
  *(int *)((longlong)param_2 + 4) = iVar11;
  *(int *)(param_2 + 1) = iVar25;
  *(int *)((longlong)param_2 + 0xc) = iVar8;
  *(int *)(param_2 + 2) = iVar26;
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
  iVar9 = DAT_14c762884;
  iVar23 = iVar8 * iVar25 * iVar26;
  if (DAT_14c762884 < iVar23) goto LAB_143a4ce89;
  iVar29 = (int)ROUND(2048.0 / (float)iVar25 + 2048.0 / (float)iVar25 + -0.5) >> 1;
  iVar27 = (int)ROUND(2048.0 / (float)iVar8 + 2048.0 / (float)iVar8 + -0.5) >> 1;
  iVar31 = (int)ROUND(2048.0 / (float)iVar26 + 2048.0 / (float)iVar26 + -0.5) >> 1;
  if (iVar11 <= iVar29) {
    iVar29 = iVar11;
  }
  fVar33 = (float)iVar11 / (float)iVar29;
  iVar28 = -((int)ROUND(-0.5 - (fVar33 + fVar33)) >> 1);
  if (iVar27 < iVar28) {
    iVar28 = iVar27;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar29;
  *(int *)(param_2 + 3) = iVar28;
  fVar33 = (float)iVar11 / (float)(iVar28 * iVar29);
  iVar29 = -((int)ROUND(-0.5 - (fVar33 + fVar33)) >> 1);
  if (iVar31 < iVar29) {
    iVar29 = iVar31;
  }
  *(int *)((longlong)param_2 + 0x1c) = iVar29;
  *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x38);
  local_100 = *(longlong *)(param_3 + 0x100);
  local_f8 = *(undefined4 *)param_2;
  uStack_eb = *(undefined2 *)((longlong)param_2 + 0xd);
  uStack_e9 = *(undefined1 *)((longlong)param_2 + 0xf);
  uStack_d7 = *(undefined4 *)((longlong)param_2 + 0x21);
  uStack_d3 = *(undefined4 *)((longlong)param_2 + 0x25);
  uStack_f4 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_2 + 1) >> 0x18);
  uStack_f0._0_1_ = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_2 + 1) >> 0x38);
  uStack_f0._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 9);
  uStack_ec = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 9) >> 0x18);
  local_e8 = (undefined4)param_2[2];
  uStack_e4 = (undefined4)((ulonglong)param_2[2] >> 0x20);
  uStack_e0._0_1_ = (undefined1)param_2[3];
  uStack_e0._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x19);
  uStack_dc._1_3_ = (undefined3)*(undefined4 *)((longlong)param_2 + 0x1d);
  uStack_dc = CONCAT31(uStack_dc._1_3_,
                       (char)((uint)*(undefined4 *)((longlong)param_2 + 0x19) >> 0x18));
  uStack_d8 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x1d) >> 0x18);
  local_c8 = (longlong *)0x0;
  local_c0 = *(undefined4 *)(param_2 + 7);
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_b8 = *(undefined4 *)(param_2 + 8);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
  local_b0 = param_2[9];
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar29 = *(int *)(lVar18 + 0xc60);
  local_120 = lVar7;
  iStack_118 = iVar11;
  iStack_114 = iVar25;
  iStack_110 = iVar8;
  iStack_10c = iVar26;
  uStack_108 = uVar3;
  uStack_104 = uVar6;
  if (DAT_14c86a9fc == 0) {
    if (iVar29 != 2) {
      if (iVar29 != 1) goto LAB_143a4cc86;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_143a4d283;
      goto LAB_143a4cc8f;
    }
LAB_143a4d283:
    local_88[0] = (code *)&local_100;
    FUN_1481882ce(lVar7 + 0x10,&local_8c);
    lVar7 = *(longlong *)(lVar7 + 0x10);
    lVar18 = (longlong)local_8c * 0x78;
    *(undefined1 *)(lVar7 + 8 + lVar18) = (undefined1)local_f8;
    *(int *)(lVar7 + 0xc + lVar18) = iStack_118;
    *(int *)(lVar7 + 0x18 + lVar18) = iStack_10c;
    *(ulonglong *)(lVar7 + 0x10 + lVar18) = CONCAT44(iStack_110,iStack_114);
    *(ulonglong *)(lVar7 + 0x1c + lVar18) = CONCAT44(uStack_e0,uStack_e4);
    *(undefined4 *)(lVar7 + 0x24 + lVar18) = uStack_dc;
    *(undefined4 *)(lVar7 + 0x28 + lVar18) = uStack_108;
    *(undefined4 *)(lVar7 + 0x2c + lVar18) = uStack_104;
    *(undefined1 *)(lVar7 + 0x30 + lVar18) = 1;
  }
  else {
LAB_143a4cc86:
    if (iVar29 == 0x10) goto LAB_143a4d283;
LAB_143a4cc8f:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar18 + 0xc60), iVar11 == 2))
      goto LAB_143a4d283;
      if (iVar11 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        if (DVar12 == DVar13) goto LAB_143a4d283;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar16 = (uint *)*puVar2;
      if (puVar16 != (uint *)0x0) goto LAB_143a4cf5c;
      while( true ) {
        uVar21 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar21 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar21 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar15 = *(undefined4 **)(lVar7 + 0x310);
        *(undefined8 *)(lVar7 + 0x310) = 0;
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar15 = 0xffffffff;
        *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar2 = puVar15;
        FUN_140217a48(puVar2);
        puVar16 = (uint *)*puVar2;
LAB_143a4cf5c:
        puVar24 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar22 = (uint *)(puVar24 + 0x27);
        uVar21 = puVar16[0x12];
        if (puVar22 <= puVar16 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar4 = *puVar16;
          *puVar16 = *puVar16 + uVar21 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar21) != 0xffffffff) break;
          puVar16 = (uint *)*puVar2;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          puVar24 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
          puVar22 = (uint *)(puVar24 + 0x27);
          uVar21 = 0;
          if (puVar22 <= puVar16 + 0x4000) {
            uVar21 = 1;
            goto LAB_143a4cfdc;
          }
        }
      }
      uVar21 = uVar21 + 1;
LAB_143a4cfdc:
      *(uint **)(puVar16 + 0x10) = puVar22;
      puVar16[0x12] = uVar21;
      FUN_1447247dc(puVar24,0);
      *puVar24 = &PTR_FUN_14add6060;
      puVar24[0x19] = local_100;
      puVar24[0x17] = CONCAT44(iStack_10c,iStack_110);
      puVar24[0x18] = CONCAT44(uStack_104,uStack_108);
      puVar24[0x15] = local_120;
      puVar24[0x16] = CONCAT44(iStack_114,iStack_118);
      *(undefined4 *)(puVar24 + 0x1a) = local_f8;
      *(undefined4 *)((longlong)puVar24 + 0xd4) = uStack_f4;
      *(undefined4 *)(puVar24 + 0x1b) = uStack_f0;
      *(uint *)((longlong)puVar24 + 0xdc) = CONCAT13(uStack_e9,CONCAT21(uStack_eb,uStack_ec));
      *(undefined4 *)(puVar24 + 0x1c) = local_e8;
      *(undefined4 *)((longlong)puVar24 + 0xe4) = uStack_e4;
      *(undefined4 *)(puVar24 + 0x1d) = uStack_e0;
      *(undefined4 *)((longlong)puVar24 + 0xec) = uStack_dc;
      *(uint *)((longlong)puVar24 + 0xe9) = CONCAT13((undefined1)uStack_dc,uStack_e0._1_3_);
      *(uint *)((longlong)puVar24 + 0xed) = CONCAT13(uStack_d8,uStack_dc._1_3_);
      *(undefined4 *)((longlong)puVar24 + 0xf1) = uStack_d7;
      *(undefined4 *)((longlong)puVar24 + 0xf5) = uStack_d3;
      puVar24[0x20] = local_c8;
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x30))();
      }
      puVar24[0x23] = local_b0;
      *(undefined4 *)(puVar24 + 0x21) = local_c0;
      *(undefined4 *)((longlong)puVar24 + 0x10c) = uStack_bc;
      *(undefined4 *)(puVar24 + 0x22) = uStack_b8;
      *(undefined4 *)((longlong)puVar24 + 0x114) = uStack_b4;
      puVar24[0x24] = local_a8;
      iVar11 = 0;
      local_a8 = 0;
      puVar24[0x25] = lStack_a0;
      lStack_a0 = 0;
      *(undefined4 *)(puVar24 + 0x26) = local_98;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar21 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
          uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
        }
        else {
          uVar30 = 2;
        }
      }
      else {
        iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar30 = 5;
      }
      if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
      }
      puVar24[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar24[9] = puVar24;
      puVar24[10] = puVar24;
      lVar7 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar7 == 0) {
        uVar10 = 1;
        if ((char)uVar30 != '\x06') {
          uVar10 = uVar30;
        }
        uVar30 = uVar10;
        uVar17 = 0;
      }
      else {
        if ((char)uVar30 == '\x06') {
          uVar30 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
        }
        uVar17 = *(undefined8 *)(lVar7 + 0x30);
      }
      puVar24[0xf] = uVar17;
      puVar24[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar24 + 0x1c) = iVar11;
      if (puVar24 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar24);
        LOCK();
        piVar1 = (int *)(puVar24 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar24)(puVar24,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x98,8);
      *local_78 = (longlong)&PTR_LAB_14add6040;
      local_78[3] = CONCAT44(iStack_10c,iStack_110);
      local_78[4] = CONCAT44(uStack_104,uStack_108);
      local_a8 = 0;
      lStack_a0 = 0;
      *(undefined4 *)(local_78 + 1) = (undefined4)local_120;
      *(undefined4 *)((longlong)local_78 + 0xc) = local_120._4_4_;
      *(int *)(local_78 + 2) = iStack_118;
      *(int *)((longlong)local_78 + 0x14) = iStack_114;
      local_78[5] = local_100;
      *(undefined4 *)(local_78 + 6) = local_f8;
      *(undefined4 *)((longlong)local_78 + 0x34) = uStack_f4;
      *(undefined4 *)(local_78 + 7) = uStack_f0;
      *(uint *)((longlong)local_78 + 0x3c) = CONCAT13(uStack_e9,CONCAT21(uStack_eb,uStack_ec));
      *(undefined4 *)(local_78 + 8) = local_e8;
      *(undefined4 *)((longlong)local_78 + 0x44) = uStack_e4;
      *(undefined4 *)(local_78 + 9) = uStack_e0;
      *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_dc;
      *(uint *)((longlong)local_78 + 0x49) = CONCAT13((undefined1)uStack_dc,uStack_e0._1_3_);
      *(uint *)((longlong)local_78 + 0x4d) = CONCAT13(uStack_d8,uStack_dc._1_3_);
      *(undefined4 *)((longlong)local_78 + 0x51) = uStack_d7;
      *(undefined4 *)((longlong)local_78 + 0x55) = uStack_d3;
      local_78[0xc] = 0;
      local_78[0xf] = local_b0;
      local_78[0xd] = CONCAT44(uStack_bc,local_c0);
      local_78[0xe] = CONCAT44(uStack_b4,uStack_b8);
      local_78[0x10] = 0;
      local_78[0x11] = 0;
      *(undefined4 *)(local_78 + 0x12) = 0;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = FUN_143a571b6;
      }
      local_128 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3ce3c);
      if (local_88[0] != (code *)0x0) {
        plVar20 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar20 = local_68;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
    }
  }
  lVar7 = lStack_a0;
  if (lStack_a0 != 0) {
    LOCK();
    puVar16 = (uint *)(lStack_a0 + 8);
    uVar21 = *puVar16;
    *puVar16 = *puVar16 - 1;
    UNLOCK();
    if ((uVar21 & 0x3fffffff) == 1) {
      puVar16 = (uint *)(lStack_a0 + 8);
      LOCK();
      uVar21 = *puVar16;
      *puVar16 = *puVar16 | 0x40000000;
      UNLOCK();
      if ((uVar21 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(lStack_a0 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = lVar7;
        plVar20 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar20;
            LOCK();
            bVar32 = plVar20 != DAT_14ca843c0;
            plVar19 = plVar14;
            if (bVar32) {
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar32);
        }
        else {
          do {
            *plVar14 = (longlong)plVar19;
            LOCK();
            bVar32 = plVar19 != DAT_14ca843c8;
            plVar20 = plVar14;
            if (bVar32) {
              plVar19 = DAT_14ca843c8;
              plVar20 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar20;
            UNLOCK();
          } while (bVar32);
        }
      }
    }
  }
  lVar7 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    puVar16 = (uint *)(local_a8 + 8);
    uVar21 = *puVar16;
    *puVar16 = *puVar16 - 1;
    UNLOCK();
    if ((uVar21 & 0x3fffffff) == 1) {
      puVar16 = (uint *)(local_a8 + 8);
      LOCK();
      uVar21 = *puVar16;
      *puVar16 = *puVar16 | 0x40000000;
      UNLOCK();
      if ((uVar21 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(local_a8 + 0xd);
        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
        plVar14[1] = lVar7;
        plVar20 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar14 = (longlong)plVar20;
            LOCK();
            bVar32 = plVar20 != DAT_14ca843c0;
            plVar19 = plVar14;
            if (bVar32) {
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar32);
        }
        else {
          do {
            *plVar14 = (longlong)plVar19;
            LOCK();
            bVar32 = plVar19 != DAT_14ca843c8;
            plVar20 = plVar14;
            if (bVar32) {
              plVar19 = DAT_14ca843c8;
              plVar20 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar20;
            UNLOCK();
          } while (bVar32);
        }
      }
    }
  }
  plVar20 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    (**(code **)(*plVar20 + 0x38))();
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x38))();
    }
  }
LAB_143a4ce89:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return iVar23 <= iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4d410 FUN_143a4d410 body=2532 status=ok
// SIG undefined FUN_143a4d410(void)

undefined8 FUN_143a4d410(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_138 [32];
  code **local_118;
  longlong local_110;
  longlong lStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  int local_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((((*(char *)(param_2 + 10) != '\x01') || ((int)param_2[2] < 1)) || ((int)param_2[3] < 1)) ||
     (((int)param_2[4] < 1 || (iVar23 = param_2[1], iVar23 < 1)))) goto LAB_143a4d885;
  fVar26 = 2048.0 / (float)(int)param_2[2];
  iVar7 = (int)ROUND(fVar26 + fVar26 + -0.5) >> 1;
  fVar26 = 2048.0 / (float)(int)param_2[3];
  iVar24 = (int)ROUND(fVar26 + fVar26 + -0.5) >> 1;
  fVar26 = 2048.0 / (float)(int)param_2[4];
  iVar18 = (int)ROUND(fVar26 + fVar26 + -0.5) >> 1;
  if (iVar23 <= iVar7) {
    iVar7 = iVar23;
  }
  fVar26 = (float)iVar23 / (float)iVar7;
  *(undefined1 *)(param_2 + 10) = 0;
  iVar22 = -((int)ROUND(-0.5 - (fVar26 + fVar26)) >> 1);
  if (iVar24 < iVar22) {
    iVar22 = iVar24;
  }
  param_2[5] = iVar7;
  param_2[6] = iVar22;
  fVar26 = (float)iVar23 / (float)(iVar22 * iVar7);
  iVar23 = -((int)ROUND(-0.5 - (fVar26 + fVar26)) >> 1);
  if (iVar18 < iVar23) {
    iVar23 = iVar18;
  }
  param_2[7] = iVar23;
  local_110 = *(longlong *)(param_1 + 0x28);
  lStack_108 = *(longlong *)(param_2 + 2);
  local_100 = param_2[4];
  uStack_fc = param_2[8];
  uStack_f8 = param_2[9];
  local_f0 = *(longlong *)(param_3 + 0x100);
  local_e8 = *param_2;
  uStack_e4 = param_2[1];
  uStack_e0 = param_2[2];
  uStack_dc = param_2[3];
  local_d8 = param_2[4];
  uStack_d4 = param_2[5];
  uStack_cf = *(undefined2 *)((longlong)param_2 + 0x19);
  uStack_cd = *(undefined1 *)((longlong)param_2 + 0x1b);
  uStack_cc = param_2[7];
  uVar14 = *(undefined8 *)(param_2 + 8);
  uStack_d0 = (undefined1)param_2[6];
  local_c8 = (undefined1)uVar14;
  uStack_c7 = (undefined4)((ulonglong)uVar14 >> 8);
  uStack_c3 = CONCAT13(*(undefined1 *)(param_2 + 10),(int3)((ulonglong)uVar14 >> 0x28));
  local_b8 = *(longlong **)(param_2 + 0xc);
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x30))();
  }
  local_a0 = *(longlong *)(param_2 + 0x12);
  local_b0 = param_2[0xe];
  uStack_ac = param_2[0xf];
  uStack_a8 = param_2[0x10];
  uStack_a4 = param_2[0x11];
  local_98 = *(longlong *)(param_2 + 0x14);
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  local_90 = *(longlong *)(param_2 + 0x16);
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  uVar5 = param_2[0x18];
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar23 = *(int *)(lVar17 + 0xc60);
  local_88 = uVar5;
  if (DAT_14c86a9fc == 0) {
    if (iVar23 != 2) {
      if (iVar23 != 1) goto LAB_143a4d662;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a4dc6b;
      goto LAB_143a4d66b;
    }
LAB_143a4dc6b:
    lVar17 = local_110;
    local_78[0] = (code *)&local_f0;
    FUN_1481882ce(local_110 + 0x10,&local_7c);
    lVar17 = *(longlong *)(lVar17 + 0x10) + (longlong)local_7c * 0x78;
    *(undefined4 *)(lVar17 + 0x24) = uStack_cc;
    *(ulonglong *)(lVar17 + 0x1c) =
         CONCAT17(uStack_cd,CONCAT25(uStack_cf,CONCAT14(uStack_d0,uStack_d4)));
    *(longlong *)(lVar17 + 0x10) = lStack_108;
    *(undefined4 *)(lVar17 + 0x18) = local_100;
    *(undefined4 *)(lVar17 + 0x28) = uStack_fc;
    *(undefined4 *)(lVar17 + 0xc) = uStack_e4;
    *(undefined4 *)(lVar17 + 0x2c) = uStack_f8;
    *(undefined1 *)(lVar17 + 0x30) = 1;
    FUN_14011fb0c();
  }
  else {
LAB_143a4d662:
    if (iVar23 == 0x10) goto LAB_143a4dc6b;
LAB_143a4d66b:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar23 = *(int *)(lVar17 + 0xc60), iVar23 == 2))
      goto LAB_143a4dc6b;
      if (iVar23 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143a4dc6b;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_143a4d950;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar17 + 0x310);
        *(undefined8 *)(lVar17 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        FUN_140217a48(puVar2);
        puVar13 = (uint *)*puVar2;
LAB_143a4d950:
        puVar21 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar21 + 0x27);
        uVar16 = puVar13[0x12];
        if (puVar19 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar16 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar16) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar21 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar21 + 0x27);
          uVar16 = 0;
          if (puVar19 <= puVar13 + 0x4000) {
            uVar16 = 1;
            goto LAB_143a4d9d0;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143a4d9d0:
      *(uint **)(puVar13 + 0x10) = puVar19;
      puVar13[0x12] = uVar16;
      FUN_1447247dc(puVar21,0);
      *puVar21 = &PTR_FUN_14add6090;
      puVar21[0x19] = local_f0;
      puVar21[0x17] = CONCAT44(uStack_fc,local_100);
      puVar21[0x18] = CONCAT44(uStack_f4,uStack_f8);
      puVar21[0x15] = local_110;
      puVar21[0x16] = lStack_108;
      *(undefined4 *)(puVar21 + 0x1a) = local_e8;
      *(undefined4 *)((longlong)puVar21 + 0xd4) = uStack_e4;
      *(undefined4 *)(puVar21 + 0x1b) = uStack_e0;
      *(undefined4 *)((longlong)puVar21 + 0xdc) = uStack_dc;
      *(undefined4 *)(puVar21 + 0x1c) = local_d8;
      *(undefined4 *)((longlong)puVar21 + 0xe4) = uStack_d4;
      *(uint *)(puVar21 + 0x1d) = CONCAT13(uStack_cd,CONCAT21(uStack_cf,uStack_d0));
      *(undefined4 *)((longlong)puVar21 + 0xec) = uStack_cc;
      *(uint *)((longlong)puVar21 + 0xe9) =
           CONCAT13((undefined1)uStack_cc,CONCAT12(uStack_cd,uStack_cf));
      *(uint *)((longlong)puVar21 + 0xed) = CONCAT13(local_c8,uStack_cc._1_3_);
      *(undefined4 *)((longlong)puVar21 + 0xf1) = uStack_c7;
      *(undefined4 *)((longlong)puVar21 + 0xf5) = uStack_c3;
      puVar21[0x20] = local_b8;
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x30))();
      }
      puVar21[0x23] = local_a0;
      *(undefined4 *)(puVar21 + 0x21) = local_b0;
      *(undefined4 *)((longlong)puVar21 + 0x10c) = uStack_ac;
      *(undefined4 *)(puVar21 + 0x22) = uStack_a8;
      *(undefined4 *)((longlong)puVar21 + 0x114) = uStack_a4;
      puVar21[0x24] = local_98;
      iVar23 = 0;
      local_98 = 0;
      puVar21[0x25] = local_90;
      local_90 = 0;
      *(undefined4 *)(puVar21 + 0x26) = local_88;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
        }
        else {
          uVar20 = 2;
        }
      }
      else {
        iVar23 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar20 = 5;
      }
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar17 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar17 == 0) {
        uVar6 = 1;
        if ((char)uVar20 != '\x06') {
          uVar6 = uVar20;
        }
        uVar20 = uVar6;
        uVar14 = 0;
      }
      else {
        if ((char)uVar20 == '\x06') {
          uVar20 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar17 + 0x30);
      }
      puVar21[0xf] = uVar14;
      puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar23;
      if (puVar21 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar21);
        LOCK();
        piVar1 = (int *)(puVar21 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      plVar10 = (longlong *)FUN_14001cc68(0x98,8);
      *plVar10 = (longlong)&PTR_LAB_14add6070;
      plVar10[5] = local_f0;
      plVar10[3] = CONCAT44(uStack_fc,local_100);
      plVar10[4] = CONCAT44(uStack_f4,uStack_f8);
      plVar10[1] = local_110;
      plVar10[2] = lStack_108;
      *(uint *)((longlong)plVar10 + 0x49) =
           CONCAT13((undefined1)uStack_cc,CONCAT12(uStack_cd,uStack_cf));
      *(uint *)((longlong)plVar10 + 0x4d) = CONCAT13(local_c8,uStack_cc._1_3_);
      *(undefined4 *)((longlong)plVar10 + 0x51) = uStack_c7;
      *(undefined4 *)((longlong)plVar10 + 0x55) = uStack_c3;
      *(undefined4 *)(plVar10 + 8) = local_d8;
      *(undefined4 *)((longlong)plVar10 + 0x44) = uStack_d4;
      *(uint *)(plVar10 + 9) = CONCAT13(uStack_cd,CONCAT21(uStack_cf,uStack_d0));
      *(undefined4 *)((longlong)plVar10 + 0x4c) = uStack_cc;
      *(undefined4 *)(plVar10 + 6) = local_e8;
      *(undefined4 *)((longlong)plVar10 + 0x34) = uStack_e4;
      *(undefined4 *)(plVar10 + 7) = uStack_e0;
      *(undefined4 *)((longlong)plVar10 + 0x3c) = uStack_dc;
      plVar10[0xc] = (longlong)local_b8;
      local_68 = plVar10;
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x30))();
      }
      plVar10[0xf] = local_a0;
      *(undefined4 *)(plVar10 + 0xd) = local_b0;
      *(undefined4 *)((longlong)plVar10 + 0x6c) = uStack_ac;
      *(undefined4 *)(plVar10 + 0xe) = uStack_a8;
      *(undefined4 *)((longlong)plVar10 + 0x74) = uStack_a4;
      plVar10[0x10] = local_98;
      local_98 = 0;
      plVar10[0x11] = local_90;
      local_90 = 0;
      *(undefined4 *)(plVar10 + 0x12) = uVar5;
      if (plVar10 != (longlong *)&DAT_fffffffffffffff8) {
        local_78[0] = FUN_143a5772a;
      }
      local_118 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"FUpdateData",&DAT_14cb3ce40);
      if (local_78[0] != (code *)0x0) {
        plVar10 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar10 = local_58;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  lVar17 = local_90;
  if (local_90 != 0) {
    LOCK();
    puVar13 = (uint *)(local_90 + 8);
    uVar16 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar16 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_90 + 8);
      LOCK();
      uVar16 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar16 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_90 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar17;
        plVar10 = DAT_14ca843c0;
        plVar15 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar10;
            LOCK();
            bVar25 = plVar10 != DAT_14ca843c0;
            plVar15 = plVar11;
            if (bVar25) {
              plVar10 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar15;
            UNLOCK();
          } while (bVar25);
        }
        else {
          do {
            *plVar11 = (longlong)plVar15;
            LOCK();
            bVar25 = plVar15 != DAT_14ca843c8;
            plVar10 = plVar11;
            if (bVar25) {
              plVar15 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar25);
        }
      }
    }
  }
  lVar17 = local_98;
  if (local_98 != 0) {
    LOCK();
    puVar13 = (uint *)(local_98 + 8);
    uVar16 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar16 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_98 + 8);
      LOCK();
      uVar16 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar16 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_98 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar17;
        plVar10 = DAT_14ca843c0;
        plVar15 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar10;
            LOCK();
            bVar25 = plVar10 != DAT_14ca843c0;
            plVar15 = plVar11;
            if (bVar25) {
              plVar10 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar15;
            UNLOCK();
          } while (bVar25);
        }
        else {
          do {
            *plVar11 = (longlong)plVar15;
            LOCK();
            bVar25 = plVar15 != DAT_14ca843c8;
            plVar10 = plVar11;
            if (bVar25) {
              plVar15 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar25);
        }
      }
    }
  }
  plVar10 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    (**(code **)(*plVar10 + 0x38))();
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x38))();
    }
  }
LAB_143a4d885:
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4ddf6 FUN_143a4ddf6 body=1561 status=ok
// SIG undefined FUN_143a4ddf6(void)

void FUN_143a4ddf6(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_2 + 0x58);
  if (lVar5 != 0) {
    LOCK();
    puVar13 = (uint *)(lVar5 + 8);
    uVar17 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(lVar5 + 8);
      LOCK();
      uVar17 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar5;
        plVar16 = DAT_14ca843c0;
        plVar15 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar16;
            LOCK();
            bVar22 = plVar16 != DAT_14ca843c0;
            plVar15 = plVar11;
            if (bVar22) {
              plVar16 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar15;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar11 = (longlong)plVar15;
            LOCK();
            bVar22 = plVar15 != DAT_14ca843c8;
            plVar16 = plVar11;
            if (bVar22) {
              plVar15 = DAT_14ca843c8;
              plVar16 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar16;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (lVar5 != 0) {
    LOCK();
    puVar13 = (uint *)(lVar5 + 8);
    uVar17 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(lVar5 + 8);
      LOCK();
      uVar17 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar5;
        plVar16 = DAT_14ca843c0;
        plVar15 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar16;
            LOCK();
            bVar22 = plVar16 != DAT_14ca843c0;
            plVar15 = plVar11;
            if (bVar22) {
              plVar16 = DAT_14ca843c0;
              plVar15 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar15;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar11 = (longlong)plVar15;
            LOCK();
            bVar22 = plVar15 != DAT_14ca843c8;
            plVar16 = plVar11;
            if (bVar22) {
              plVar15 = DAT_14ca843c8;
              plVar16 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar16;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  plVar16 = *(longlong **)(param_2 + 0x30);
  if (plVar16 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    (**(code **)(*plVar16 + 0x38))();
    if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x30) + 0x38))();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) goto LAB_143a4dfac;
  uVar14 = *(undefined8 *)(param_3 + 0x100);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 == 2) goto LAB_143a4e2ec;
    if (iVar8 != 1) goto LAB_143a4df00;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 == DVar10) goto LAB_143a4e2ec;
  }
  else {
LAB_143a4df00:
    if (iVar8 == 0x10) goto LAB_143a4e2ec;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar6 + 0xc60), iVar8 == 2)) {
LAB_143a4e2ec:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
    if (iVar8 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a4e2ec;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar2;
    if (puVar13 != (uint *)0x0) goto LAB_143a4e071;
    while( true ) {
      uVar17 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar17 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar17 | 1;
        __tlregdtor(&LAB_143a54109);
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
      *puVar2 = puVar12;
      FUN_140217a48(puVar2);
      puVar13 = (uint *)*puVar2;
LAB_143a4e071:
      puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar20 + 0x17);
      uVar17 = puVar13[0x12];
      if (puVar19 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar3 = *puVar13;
        *puVar13 = *puVar13 + uVar17 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar17) != 0xffffffff) break;
        puVar13 = (uint *)*puVar2;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar20 + 0x17);
        uVar17 = 0;
        if (puVar19 <= puVar13 + 0x4000) {
          uVar17 = 1;
          goto LAB_143a4e0f1;
        }
      }
    }
    uVar17 = uVar17 + 1;
LAB_143a4e0f1:
    *(uint **)(puVar13 + 0x10) = puVar19;
    puVar13[0x12] = uVar17;
    iVar8 = 0;
    FUN_1447247dc(puVar20,0);
    *puVar20 = &PTR_FUN_14add60c0;
    puVar20[0x15] = lVar5;
    puVar20[0x16] = uVar14;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar17 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
        uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
        iVar8 = 0;
      }
      else {
        uVar21 = 2;
      }
    }
    else {
      iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar21 = 5;
    }
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar7 = 1;
      if ((char)uVar21 != '\x06') {
        uVar7 = uVar21;
      }
      uVar21 = uVar7;
      uVar14 = 0;
    }
    else {
      if ((char)uVar21 == '\x06') {
        uVar21 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar14 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar20[0xf] = uVar14;
    puVar20[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar20 + 0x1c) = iVar8;
    if (puVar20 == (undefined8 *)0x0) {
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(puVar20);
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
  }
  else {
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14add60a0;
    local_78[0] = &LAB_143a57c98;
    local_50 = lVar5;
    local_48 = uVar14;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3ce44);
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar18 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar18 = &local_58;
      }
      (*(code *)(*pppuVar18)[2])();
    }
  }
LAB_143a4dfac:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4e428 FUN_143a4e428 body=69 status=ok
// SIG undefined FUN_143a4e428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a4e428(void)

{
  _DAT_14cb3c658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a4e46a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c660,1);
  return;
}



// FUNCTION 143a4e46e FUN_143a4e46e body=603 status=ok
// SIG undefined FUN_143a4e46e(void)

void FUN_143a4e46e(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  int *local_88;
  int local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1404e2ce0(local_60);
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_148188f3c(&local_78,param_2);
  FUN_140126e42(&local_88,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      puVar1 = local_78 + local_68;
      if (local_58 == 0) {
        *local_88 = 0;
        local_88 = local_88 + local_80;
        local_78 = puVar1;
      }
      else {
        uVar2 = *local_78;
        piVar5 = local_88 + local_80;
        *local_88 = -(uint)(iVar4 == 1);
        local_88 = piVar5;
        local_78 = puVar1;
        if ((iVar4 == 1) &&
           (*(undefined4 *)(local_58 + 8) = uVar2, (*(byte *)(param_1 + 0x4c) & 1) != 0)) {
          uVar3 = *(uint *)(local_58 + 0x20);
          if ((((ulonglong)uVar3 != 0xffffffff) &&
              (((-1 < (int)uVar3 && ((int)uVar3 < *(int *)(*(longlong *)(local_58 + 0x28) + 0x48)))
               && (*(longlong *)
                    (*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x40) + (ulonglong)uVar3 * 8) !=
                   0)))) && (DAT_14cb0b9a0 == 0)) {
            local_50 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_146408884;
            local_a0 = &local_50;
            local_a8 = &LAB_147d719e1;
            local_b0 = &LAB_140fb41fe;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000000;
            local_d0 = 8;
            local_d8 = 0x168;
            FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      iVar4 = *piVar5;
    } while (iVar6 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4e6ca FUN_143a4e6ca body=436 status=ok
// SIG undefined FUN_143a4e6ca(void)

void FUN_143a4e6ca(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3cec8) {
    FUN_144b3d300(&DAT_14cb3cec8);
    if (DAT_14cb3cec8 == -1) {
      FUN_1456e7db4(local_30);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FShaderParameters";
      local_48 = 0;
      local_60 = 0x30;
      local_68 = 0x27;
      local_58 = local_30;
      FUN_140b49562(&DAT_14cb3ce48,0,1);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a57ede);
      _Init_thread_footer(&DAT_14cb3cec8);
    }
  }
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3ce48;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x30;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4e880 FUN_143a4e880 body=2071 status=ok
// SIG undefined FUN_143a4e880(void)

undefined8 FUN_143a4e880(longlong param_1,int *param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[2] = 6;
  param_2[3] = 3;
  *(undefined1 *)((longlong)param_2 + 0x11) = 1;
  param_2[8] = -1;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  iVar8 = FUN_144830b78(param_2 + 0xe,&DAT_14cb42160);
  param_2[0xe] = iVar8;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  plVar18 = (longlong *)(param_1 + 0x70);
  lVar12 = *(longlong *)(param_3 + 0x100);
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar8 = *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = iVar8 + 1;
    if (*(int *)(param_1 + 0x7c) == iVar8) {
      FUN_14482b872(plVar18,iVar8);
    }
    iVar9 = *(int *)(param_1 + 0x98);
    if (iVar9 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar15 = iVar9 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    lVar27 = param_1 + 0x80;
    iVar16 = iVar9 + 1;
    iVar21 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar21 = iVar9;
    }
    if (iVar21 >> 5 == iVar15) {
      *(int *)(param_1 + 0x98) = iVar16;
    }
    else {
      if (*(int *)(param_1 + 0x9c) <= iVar9) {
        iVar15 = iVar9;
        local_78 = lVar27;
        if (iVar9 + 0x20U < 0xa0) {
          iVar16 = 0x80;
        }
        else {
          uVar19 = iVar9 + 0x20U >> 5;
          local_70 = (ulonglong)uVar19;
          if (*(int *)(param_1 + 0x9c) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar19) {
              uVar24 = uVar19;
            }
          }
          else {
            uVar24 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar22 = (ulonglong)(uVar24 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar22 + 0xf);
              if (uVar24 < 0x1ffd) {
                uVar22 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 + 0xf >> 4]];
              }
              else {
                uVar13 = (ulonglong)(uVar19 & 0xfffffff0);
                if (uVar13 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar14) {
                    uVar20 = (ulonglong)bVar14;
                  }
                  uVar25 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_143a4ef65;
                    lVar27 = uVar20 + 1 + uVar25;
                    uVar25 = uVar25 - 1;
                  } while (lVar27 != 0x33);
                }
                uVar22 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar22 = (ulonglong)DAT_14c841df8;
                }
                uVar22 = -uVar22 & (uVar13 + uVar22) - 1;
              }
            }
            else {
              uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
              iVar15 = *(int *)(param_1 + 0x98);
            }
          }
LAB_143a4ef65:
          iVar10 = (int)(uVar22 >> 2);
          iVar16 = -0x20;
          if ((int)local_70 <= iVar10) {
            iVar16 = iVar10 << 5;
          }
        }
        *(int *)(param_1 + 0x9c) = iVar16;
        FUN_1446efbd8(local_78,iVar15);
        iVar16 = *(int *)(param_1 + 0x98) + 1;
        lVar27 = local_78;
      }
      iVar15 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar15 = iVar16;
      }
      *(int *)(param_1 + 0x98) = iVar16;
      if (iVar16 % 0x20 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          lVar11 = lVar27;
        }
        bVar14 = -(char)(iVar16 % 0x20);
        *(uint *)(lVar11 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)(lVar11 + (longlong)(iVar15 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar8;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar27 = *(longlong *)(param_1 + 0x90);
    }
    bVar14 = (byte)iVar9 & 0x1f;
    puVar1 = (uint *)(lVar27 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xa0);
    lVar11 = (longlong)iVar8;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + lVar11 * 0x18);
    *(int *)(param_1 + 0xa0) = iVar9;
    iVar15 = *(int *)(param_1 + 0xa4) + -1;
    *(int *)(param_1 + 0xa4) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 0x80);
  puVar17 = *(uint **)(param_1 + 0x90);
  if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
    puVar17 = puVar1;
  }
  iVar9 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar9 = iVar8;
  }
  puVar17[iVar9 >> 5] = puVar17[iVar9 >> 5] | 1 << ((byte)iVar8 & 0x1f);
  uVar22 = 1;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x70) + lVar11 * 0x18);
  *plVar2 = lVar12;
  plVar2[1] = (longlong)param_2;
  *(undefined4 *)(plVar2 + 2) = 0xffffffff;
  uVar19 = (int)((ulonglong)lVar12 >> 0x20) * 0x17 + (int)lVar12;
  uVar24 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
  if (1 < uVar24) {
    lVar27 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar27 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar27 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & uVar19) * 4);
    if (iVar9 != -1) {
      do {
        plVar3 = (longlong *)(*plVar18 + (longlong)iVar9 * 0x18);
        if (*plVar3 == lVar12) {
          uVar5 = *(undefined4 *)((longlong)plVar2 + 4);
          lVar12 = plVar2[1];
          uVar6 = *(undefined4 *)((longlong)plVar2 + 0xc);
          *(int *)plVar3 = (int)*plVar2;
          *(undefined4 *)((longlong)plVar3 + 4) = uVar5;
          *(int *)(plVar3 + 1) = (int)lVar12;
          *(undefined4 *)((longlong)plVar3 + 0xc) = uVar6;
          FUN_143a57eea(plVar18,iVar8);
          goto LAB_143a4ea9a;
        }
        iVar9 = (int)plVar3[2];
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar24) {
    uVar22 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar22 = (ulonglong)(uint)(1 << ((byte)lVar12 & 0x1f));
  }
  uVar4 = *(uint *)(param_1 + 0xb8);
  plVar18 = (longlong *)(ulonglong)uVar4;
  if (((int)uVar24 < 1) || ((int)uVar22 <= (int)uVar4)) {
    uVar19 = uVar4 - 1 & uVar19;
    *(uint *)((longlong)plVar2 + 0x14) = uVar19;
    lVar12 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar12 = param_1 + 0xa8;
    }
    plVar18 = (longlong *)(longlong)(int)uVar19;
    *(undefined4 *)(plVar2 + 2) =
         *(undefined4 *)
          (lVar12 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (ulonglong)plVar18) * 4);
    lVar12 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar12 = param_1 + 0xa8;
    }
    *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (ulonglong)plVar18) * 4) = iVar8;
    goto LAB_143a4ea9a;
  }
  *(int *)(param_1 + 0xb8) = (int)uVar22;
  plVar2 = (longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar18 = plVar2;
    FUN_1446efa72(plVar2,0,0,4);
    uVar22 = (ulonglong)*(uint *)(param_1 + 0xb8);
  }
  lVar12 = param_1 + 0xa8;
  uVar19 = (uint)uVar22;
  if (uVar19 == 1) {
    if (*plVar2 != 0) {
      FUN_1446efa72(plVar2,0,0,4);
    }
LAB_143a4ecd4:
    uVar24 = 0;
    do {
      lVar27 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar27 = lVar12;
      }
      *(undefined4 *)(lVar27 + (ulonglong)(*(int *)(param_1 + 0xb8) + 0x7fffffffU & uVar24) * 4) =
           0xffffffff;
      uVar24 = uVar24 + 1;
    } while (uVar19 != uVar24);
  }
  else {
    if (uVar19 == 0) goto LAB_143a4ea9a;
    FUN_1446efa72(plVar2,0,uVar22,4);
    if (0 < (int)uVar19) goto LAB_143a4ecd4;
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (iVar8 == 0) {
    uVar13 = 0;
    uVar20 = 1;
    iVar9 = 0;
    plVar18 = (longlong *)0x0;
  }
  else {
    puVar17 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar19 = *puVar17;
    if (uVar19 == 0) {
      iVar9 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar9 = iVar8 + -1;
      }
      uVar13 = 0;
      uVar20 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar20 = uVar13;
      }
      plVar18 = (longlong *)0x0;
      do {
        if (uVar20 == uVar13) goto LAB_143a4ea9a;
        plVar18 = (longlong *)(ulonglong)((int)plVar18 + 0x20);
        uVar19 = puVar17[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar13 = 0;
      plVar18 = (longlong *)0x0;
    }
    uVar20 = (ulonglong)(-uVar19 & uVar19);
    uVar25 = uVar20 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar9 = ((int)plVar18 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar9) {
      iVar9 = iVar8;
    }
  }
  if (iVar9 < iVar8) {
    uVar19 = 0xffffffff;
    do {
      lVar27 = *(longlong *)(param_1 + 0x70);
      lVar26 = (longlong)iVar9;
      uVar23 = *(undefined8 *)(lVar27 + lVar26 * 0x18);
      uVar22 = (longlong)((int)((ulonglong)uVar23 >> 0x20) * 0x17 + (int)uVar23) &
               (longlong)*(int *)(param_1 + 0xb8) - 1U;
      iVar8 = (int)uVar22;
      *(int *)(lVar27 + 0x14 + lVar26 * 0x18) = iVar8;
      lVar11 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar11 = lVar12;
      }
      uVar24 = *(uint *)(lVar11 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & uVar22) * 4);
      uVar22 = (ulonglong)uVar24;
      *(uint *)(lVar27 + 0x10 + lVar26 * 0x18) = uVar24;
      lVar27 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar27 = lVar12;
      }
      *(int *)(lVar27 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0xb8) - 1U) * 4) = iVar9;
      uVar19 = ~(uint)uVar20 & uVar19;
      puVar17 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      iVar8 = *(int *)(param_1 + 0x98);
      iVar9 = (int)uVar13;
      lVar27 = (longlong)iVar9;
      uVar24 = puVar17[lVar27] & uVar19;
      if (uVar24 == 0) {
        iVar15 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar15 = iVar8 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar9) {
          iVar16 = iVar9;
        }
        if (iVar15 <= iVar9) break;
        plVar18 = (longlong *)(ulonglong)((int)plVar18 + 0x20);
        lVar11 = 0;
        while (uVar24 = puVar17[lVar27 + lVar11 + 1], uVar24 == 0) {
          plVar18 = (longlong *)(ulonglong)((int)plVar18 + 0x20);
          lVar11 = lVar11 + 1;
          if (iVar16 - lVar27 == lVar11) goto LAB_143a4ea9a;
        }
        uVar13 = (ulonglong)(iVar9 + (int)lVar11 + 1);
        uVar19 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar24 & uVar24);
      uVar25 = uVar20 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar9 = ((int)plVar18 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar8);
  }
LAB_143a4ea9a:
  if (DAT_14c762890 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = CONCAT71((int7)(uVar22 >> 8),(*(byte *)(param_1 + 0x30) & 4) == 0);
  }
  uVar22 = CONCAT71((int7)((ulonglong)plVar18 >> 8),*(undefined1 *)(param_1 + 0x4c)) &
           0xffffffffffffff02;
  cVar7 = FUN_143a4f098(CONCAT71((int7)(uVar22 >> 8),(byte)uVar22 >> 1),
                        *(undefined1 *)(param_1 + 0x4a),&local_64);
  if (cVar7 != '\0') {
    iVar9 = (int)((float)*(int *)(param_1 + 0x40) * DAT_14c762894);
    iVar8 = DAT_14ca84e40;
    if (iVar9 < DAT_14ca84e40) {
      iVar8 = iVar9;
    }
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    *param_2 = iVar8;
    iVar9 = (int)((float)*(int *)(param_1 + 0x44) * DAT_14c762894);
    iVar8 = DAT_14ca84e40;
    if (iVar9 < DAT_14ca84e40) {
      iVar8 = iVar9;
    }
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    param_2[1] = iVar8;
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)(param_1 + 0x49);
    param_2[2] = local_64;
    param_2[3] = (uint)*(byte *)(param_1 + 0x4b);
    FUN_1404e5848(param_2 + 8,param_3 + 0x1e8,param_1 + 0x50);
    uVar23 = CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4f098 FUN_143a4f098 body=597 status=ok
// SIG undefined FUN_143a4f098(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143a4f098(char param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong unaff_RBP;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == '\0') {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_140eca530;
      local_58 = &LAB_148063819;
      local_60 = &LAB_1460672b6;
      local_68 = L"Niagara";
      local_70 = 0;
      local_78 = 0x10000006;
      local_80 = 8;
      local_88 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar2 = DAT_14cb366a0;
    lVar4 = DAT_14cb366a0[0x22];
    if (lVar4 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar4 = plVar2[0x22];
    }
    param_2 = (uint)*(byte *)(lVar4 + 0xe0);
  }
  *param_3 = param_2;
  uVar1 = DAT_14c76288c;
  if (DAT_14cb3c790 == '\x01') {
    *param_3 = DAT_14c76288c;
    param_2 = uVar1;
  }
  while( true ) {
    if (param_2 < 0xb) {
      lVar4 = *(longlong *)(&DAT_14add6868 + (ulonglong)param_2 * 8);
    }
    else {
      lVar4 = 0;
    }
    bVar5 = (*(byte *)((longlong)&DAT_14c873430 + lVar4 * 0x30 + 2) & 0x40) >> 6;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
    uVar3 = CONCAT71((int7)((ulonglong)(lVar4 * 0x30) >> 8),1);
    if (bVar5 != 0) break;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb3c7f8) && (FUN_144b3d300(&DAT_14cb3c7f8), DAT_14cb3c7f8 == -1)) {
      _DAT_14cb3c7a0 = 0x400000000;
      _DAT_14cb3c7a8 = 0x500000001;
      _DAT_14cb3c7b0 = 0x600000002;
      uRam000000014cb3c7b8 = 0x600000003;
      _DAT_14cb3c7c0 = 0x700000004;
      uRam000000014cb3c7c8 = 0x800000005;
      _DAT_14cb3c7d0 = 0x900000006;
      uRam000000014cb3c7d8 = 0x900000007;
      _DAT_14cb3c7e0 = 8;
      uRam000000014cb3c7e4 = 9;
      uRam000000014cb3c7e8 = 9;
      uRam000000014cb3c7ec = 9;
      _DAT_14cb3c7f0 = 0x90000000a;
      _Init_thread_footer(&DAT_14cb3c7f8);
    }
    uVar1 = *param_3;
    lVar4 = 4;
    while (*(uint *)(lVar4 + 0x14cb3c79c) != uVar1) {
      lVar4 = lVar4 + 8;
      uVar3 = 0;
      if (lVar4 == 0x5c) goto LAB_143a4f12c;
    }
    param_2 = *(uint *)((longlong)&DAT_14cb3c7a0 + lVar4);
    *param_3 = param_2;
    uVar3 = unaff_RBP & 0xffffffff;
    if (uVar1 == param_2) break;
  }
LAB_143a4f12c:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143a4f2ee FUN_143a4f2ee body=1440 status=ok
// SIG undefined FUN_143a4f2ee(void)

void FUN_143a4f2ee(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar17 = *(longlong *)(param_3 + 0x100);
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar9 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xb0);
    }
    iVar6 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar17 >> 0x20) * 0x17 + (int)lVar17) &
                             (longlong)*(int *)(param_1 + 0xb8) - 1U) * 4);
    if (iVar6 != -1) {
LAB_143a4f372:
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar6 * 0x18);
      if (*plVar2 != lVar17) goto code_r0x000143a4f382;
      iVar19 = *(int *)(lVar9 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
      if (iVar19 == iVar6) {
        piVar10 = (int *)(lVar9 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
      }
      else {
        do {
          piVar10 = (int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar19 * 0x18 + 0x10);
          iVar19 = *piVar10;
        } while (iVar19 != iVar6);
      }
      *piVar10 = (int)plVar2[2];
      FUN_143a57eea();
      lVar17 = *(longlong *)(param_3 + 0x100);
    }
  }
LAB_143a4f3b1:
  lVar9 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a4f3d8;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a4f3dd;
      goto LAB_143a4f425;
    }
  }
  else {
LAB_143a4f3d8:
    if (iVar6 != 0x10) {
LAB_143a4f425:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a4f3dd;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a4f3dd;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_143a4f5a9;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a54109);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_143a4f5a9:
          puVar20 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar20 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar20 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar20 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143a4f62b;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143a4f62b:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14add6160;
        puVar20[0x15] = lVar9;
        puVar20[0x16] = lVar17;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar17 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar17 == 0) {
          uVar5 = 1;
          if ((char)uVar18 != '\x06') {
            uVar5 = uVar18;
          }
          uVar18 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar17 + 0x30);
        }
        puVar20[0xf] = uVar13;
        puVar20[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar6;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar10 = (int *)(puVar20 + 1);
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14add6140;
        local_88[0] = &LAB_143a57f5c;
        local_60 = lVar9;
        local_58 = lVar17;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3cecc);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_143a4f4c0;
    }
  }
LAB_143a4f3dd:
  FUN_1411b411c(lVar9 + 0x10,lVar17);
LAB_143a4f4c0:
  FUN_143a4f88f(param_3,param_2);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143a4f382:
  iVar6 = (int)plVar2[2];
  if (iVar6 == -1) goto LAB_143a4f3b1;
  goto LAB_143a4f372;
}



// FUNCTION 143a4f88f FUN_143a4f88f body=171 status=ok
// SIG undefined FUN_143a4f88f(void)

void FUN_143a4f88f(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_2 + 0x12) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0))
  {
    lVar2 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 != 0) {
      *(undefined1 *)(lVar1 + 0x160) = 0;
      FUN_145f790e6(lVar2,*(undefined8 *)(param_2 + 0x18));
      local_28 = *(longlong *)(param_2 + 0x18);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_145d11510(lVar2 + 0x1c68,&local_28,1);
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x12) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a4f93c FUN_143a4f93c body=1816 status=ok
// SIG undefined FUN_143a4f93c(void)

ulonglong FUN_143a4f93c(longlong param_1,longlong param_2,int param_3,longlong param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  void *_Dst;
  undefined4 *puVar13;
  uint *puVar14;
  void *_Dst_00;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  undefined8 unaff_RSI;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  void *local_98;
  ulonglong uStack_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar19 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_5[3] == 0) goto LAB_143a4fb07;
  uVar15 = *(undefined8 *)(param_1 + -0x10);
  local_b0 = FUN_1447b4020(param_5[3]);
  uStack_a8 = &local_98;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  uStack_b8 = *(undefined8 *)(param_4 + 0x100);
  local_a0 = *param_5;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar5 + 0xc60);
  local_c0 = uVar15;
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143a4f9e1;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143a4f9e6;
      goto LAB_143a4fa17;
    }
LAB_143a4f9e6:
    FUN_143a58134(&local_c0,&DAT_14ca85100);
  }
  else {
LAB_143a4f9e1:
    if (iVar10 == 0x10) goto LAB_143a4f9e6;
LAB_143a4fa17:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar5 + 0xc60), iVar10 == 2))
      goto LAB_143a4f9e6;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143a4f9e6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar3;
      if (puVar14 != (uint *)0x0) goto LAB_143a4fcc4;
      do {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        FUN_140217a48(puVar3);
        puVar14 = (uint *)*puVar3;
LAB_143a4fcc4:
        uVar20 = *(longlong *)(puVar14 + 0x10) + 7;
        uVar16 = puVar14[0x12];
        while( true ) {
          puVar21 = (undefined8 *)(uVar20 & 0xfffffffffffffff8);
          if (puVar21 + 0x1a <= puVar14 + 0x4000) {
            *(undefined8 **)(puVar14 + 0x10) = puVar21 + 0x1a;
            puVar14[0x12] = uVar16 + 1;
            iVar10 = 0;
            FUN_1447247dc(puVar21,0);
            *puVar21 = &PTR_FUN_14add61d8;
            *(undefined4 *)(puVar21 + 0x15) = (undefined4)local_c0;
            *(undefined4 *)((longlong)puVar21 + 0xac) = local_c0._4_4_;
            *(undefined4 *)(puVar21 + 0x16) = (undefined4)uStack_b8;
            *(undefined4 *)((longlong)puVar21 + 0xb4) = uStack_b8._4_4_;
            *(undefined4 *)(puVar21 + 0x17) = (undefined4)local_b0;
            *(undefined4 *)((longlong)puVar21 + 0xbc) = local_b0._4_4_;
            *(undefined4 *)(puVar21 + 0x18) = (undefined4)uStack_a8;
            *(undefined4 *)((longlong)puVar21 + 0xc4) = uStack_a8._4_4_;
            puVar21[0x19] = local_a0;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar16 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
                uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
                iVar10 = 0;
              }
              else {
                uVar20 = 2;
              }
            }
            else {
              iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar20 = 5;
            }
            if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
            }
            puVar21[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar21[9] = puVar21;
            puVar21[10] = puVar21;
            lVar5 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar5 == 0) {
              uVar6 = 1;
              if ((char)uVar20 != '\x06') {
                uVar6 = uVar20;
              }
              uVar20 = uVar6;
              uVar15 = 0;
            }
            else {
              if ((char)uVar20 == '\x06') {
                uVar20 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
              }
              uVar15 = *(undefined8 *)(lVar5 + 0x30);
            }
            puVar21[0xf] = uVar15;
            puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar21 + 0x1c) = iVar10;
            if (puVar21 == (undefined8 *)0x0) {
              local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
              UNLOCK();
              local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
              FUN_1447439e4(puVar21);
              LOCK();
              piVar2 = (int *)(puVar21 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)*puVar21)(puVar21,1);
              }
            }
            goto LAB_143a4faec;
          }
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar4 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar3;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          uVar20 = (longlong)puVar14 + 0x5f;
          uVar16 = 0;
        }
      } while( true );
    }
    local_88[0] = (undefined1 *)0x0;
    local_78 = (longlong *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x30,8);
    *local_78 = (longlong)&PTR_LAB_14add6180;
    local_78[5] = local_a0;
    *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
    *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
    *(undefined4 *)(local_78 + 4) = (undefined4)uStack_a8;
    *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a8._4_4_;
    *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
    *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
    *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88[0] = &LAB_143a583b8;
    }
    local_d8 = local_88;
    FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetVolumeRead",&DAT_14cb3ced0);
    if (local_88[0] != (undefined1 *)0x0) {
      plVar17 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar17 = local_68;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
  }
LAB_143a4faec:
  FUN_14080c2b4();
  if (0 < (int)uStack_90) {
    iVar10 = *(int *)(param_2 + 0x38);
    if (*(int *)(param_2 + 0x38) < param_3 + 1) {
      iVar10 = param_3 + 1;
    }
    FUN_14817dcba(param_2 + 0x30,iVar10,1);
    plVar17 = (longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)param_3 * 0x48);
    *plVar17 = *param_5;
    *(undefined4 *)(plVar17 + 1) = 1;
    if ((ulonglong)*(uint *)(param_5 + 1) < 0xb) {
      uVar7 = (&DAT_14add68c0)[*(uint *)(param_5 + 1)];
    }
    else {
      uVar7 = 0;
    }
    *(undefined1 *)((longlong)plVar17 + 0xc) = uVar7;
    lVar5 = *(longlong *)(param_2 + 0x28);
    iVar10 = (int)uStack_90;
    iVar9 = (int)uStack_90;
    if (lVar5 != 0) {
      iVar9 = FUN_1410fe39e(lVar5,uStack_90 & 0xffffffff,0,0);
    }
    *(int *)(plVar17 + 2) = iVar10;
    *(undefined4 *)((longlong)plVar17 + 0x14) = 0;
    _Dst = (void *)FUN_14001cc68((undefined1 *)(longlong)iVar9,0);
    if (lVar5 == 0) {
      puVar18 = (undefined1 *)(ulonglong)*(uint *)((longlong)plVar17 + 0x14);
    }
    else {
      local_c8 = 0;
      local_d0 = 0x10;
      local_d8 = (undefined1 **)(longlong)iVar10;
      local_88[0] = (undefined1 *)(longlong)iVar9;
      cVar8 = FUN_1410fe780(lVar5,_Dst,local_88,local_98);
      if (((undefined1 *)(longlong)(int)local_88[0] != local_88[0]) || (cVar8 == '\0')) {
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar19 = 0;
        goto LAB_143a4fb07;
      }
      *(int *)((longlong)plVar17 + 0x14) = (int)local_88[0];
      puVar18 = local_88[0];
    }
    if ((int)puVar18 == 0) {
      memcpy(_Dst,local_98,(size_t)(longlong)iVar10);
    }
    plVar1 = plVar17 + 3;
    FUN_14031515e(plVar1);
    *(undefined1 *)((longlong)plVar17 + 0x2b) = 2;
    *(byte *)((longlong)plVar17 + 0x2e) = *(byte *)((longlong)plVar17 + 0x2e) & 0xfb;
    iVar10 = *(int *)((longlong)plVar17 + 0x14);
    if (iVar10 < 1) {
      iVar10 = (int)plVar17[2];
    }
    _Dst_00 = (void *)FUN_1427d8a06(plVar1,(longlong)iVar10,1);
    memcpy(_Dst_00,_Dst,(longlong)iVar10);
    *(undefined1 *)((longlong)plVar17 + 0x2b) = 0;
    if ((*(byte *)((longlong)plVar17 + 0x2c) & 8) != 0) {
      FUN_1400ea36e(plVar1,plVar1);
    }
    FUN_1400020a8(_Dst);
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143a4fb07:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a50056 FUN_143a50056 body=1691 status=ok
// SIG undefined FUN_143a50056(void)

undefined8
FUN_143a50056(longlong param_1,longlong param_2,uint param_3,uint param_4,float param_5,
             longlong param_6,undefined8 *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0.5 <= param_5) {
    param_3 = param_4;
  }
  if ((int)param_3 < 0) {
    uVar12 = 0;
    goto LAB_143a50324;
  }
  uVar12 = 0;
  uVar18 = 0;
  if (*(int *)(param_2 + 0x38) <= (int)param_3) goto LAB_143a50324;
  plVar15 = (longlong *)(param_1 + -0x38);
  lVar5 = *(longlong *)(param_2 + 0x30);
  uVar17 = (ulonglong)param_3;
  *param_7 = *(undefined8 *)(lVar5 + uVar17 * 0x48);
  cVar4 = *(char *)(lVar5 + 0xc + uVar17 * 0x48);
  switch(cVar4) {
  case '\x01':
    uVar18 = 9;
    break;
  case '\x02':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\v':
  case '\f':
  case '\x0e':
  case '\x10':
  case '\x13':
  case '\x14':
switchD_143a500e8_caseD_2:
    uVar18 = 2;
    break;
  case '\x03':
    break;
  case '\n':
    uVar18 = 6;
    break;
  case '\r':
    uVar18 = 7;
    break;
  case '\x0f':
    uVar18 = 5;
    break;
  case '\x11':
    uVar18 = 8;
    break;
  case '\x12':
    uVar18 = 10;
    break;
  case '\x15':
    uVar18 = 4;
    break;
  default:
    if (cVar4 != '(') goto switchD_143a500e8_caseD_2;
    uVar18 = 1;
  }
  *(undefined4 *)(param_7 + 1) = uVar18;
  *(undefined4 *)((longlong)param_7 + 0xc) = 3;
  (**(code **)(*plVar15 + 0x2e8))(plVar15,param_7,param_6,0);
  (**(code **)(*plVar15 + 0x2f0))(plVar15,param_7,param_6,0);
  lVar14 = param_7[3];
  uVar12 = 1;
  if (lVar14 == 0) goto LAB_143a50324;
  lVar5 = lVar5 + uVar17 * 0x48;
  if (*(longlong *)(lVar5 + 0x40) == 0) {
    if (*(int *)(lVar5 + 0x10) < 1) goto LAB_143a50324;
    uVar12 = 1;
    FUN_14143acfc(lVar5 + 0x18,lVar5 + 0x40,1);
    if (*(longlong *)(lVar5 + 0x40) == 0) goto LAB_143a50324;
    lVar14 = param_7[3];
  }
  uVar12 = *(undefined8 *)(param_1 + -0x10);
  uStack_a8 = FUN_1447b4020(lVar14);
  local_c0 = CONCAT31(local_c0._1_3_,*(undefined1 *)(lVar5 + 0xc));
  local_b0 = *(undefined8 *)(param_6 + 0x100);
  uStack_98 = *(undefined8 *)(param_2 + 0x28);
  local_90 = *(undefined4 *)(param_7 + 1);
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar14 + 0xc60);
  uStack_b8 = uVar12;
  local_a0 = lVar5;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a501e0;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a501e5;
      goto LAB_143a50248;
    }
LAB_143a501e5:
    FUN_143a58588(&local_c0,&DAT_14ca85100);
  }
  else {
LAB_143a501e0:
    if (iVar7 == 0x10) goto LAB_143a501e5;
LAB_143a50248:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar14 + 0xc60), iVar7 == 2))
      goto LAB_143a501e5;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_143a501e5;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143a503f4;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143a54109);
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
LAB_143a503f4:
        puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar19 + 0x1c);
        uVar13 = puVar11[0x12];
        if (puVar16 <= puVar11 + 0x4000) break;
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
          puVar19 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar19 + 0x1c);
          uVar13 = 0;
          if (puVar16 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143a50474;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143a50474:
      *(uint **)(puVar11 + 0x10) = puVar16;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar19,0);
      *puVar19 = &PTR_FUN_14add6210;
      *(undefined4 *)(puVar19 + 0x15) = local_c0;
      *(undefined4 *)((longlong)puVar19 + 0xac) = uStack_bc;
      *(undefined4 *)(puVar19 + 0x16) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puVar19 + 0xb4) = uStack_b8._4_4_;
      *(undefined4 *)(puVar19 + 0x17) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar19 + 0xbc) = local_b0._4_4_;
      *(undefined4 *)(puVar19 + 0x18) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)puVar19 + 0xc4) = uStack_a8._4_4_;
      *(undefined4 *)(puVar19 + 0x19) = (undefined4)local_a0;
      *(undefined4 *)((longlong)puVar19 + 0xcc) = local_a0._4_4_;
      *(undefined4 *)(puVar19 + 0x1a) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)puVar19 + 0xd4) = uStack_98._4_4_;
      puVar19[0x1b] = CONCAT44(uStack_8c,local_90);
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
      if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
      }
      puVar19[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar19[9] = puVar19;
      puVar19[10] = puVar19;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
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
      puVar19[0xf] = uVar12;
      puVar19[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar7;
      if (puVar19 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar19);
        LOCK();
        piVar1 = (int *)(puVar19 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar19)(puVar19,1);
        }
      }
    }
    else {
      local_88[0] = (undefined1 *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0x40,8);
      *local_78 = (longlong)&PTR_LAB_14add61f0;
      local_78[7] = CONCAT44(uStack_8c,local_90);
      *(undefined4 *)(local_78 + 5) = (undefined4)local_a0;
      *(undefined4 *)((longlong)local_78 + 0x2c) = local_a0._4_4_;
      *(undefined4 *)(local_78 + 6) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)local_78 + 0x34) = uStack_98._4_4_;
      *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
      *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
      *(undefined4 *)(local_78 + 4) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a8._4_4_;
      *(undefined4 *)(local_78 + 1) = local_c0;
      *(undefined4 *)((longlong)local_78 + 0xc) = uStack_bc;
      *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = &LAB_143a587d2;
      }
      local_c8 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetVolumeUpdate",&DAT_14cb3ced4);
      if (local_88[0] != (undefined1 *)0x0) {
        plVar15 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar15 = local_68;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  uVar12 = 1;
LAB_143a50324:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a506f2 FUN_143a506f2 body=1821 status=ok
// SIG undefined FUN_143a506f2(void)

longlong *
FUN_143a506f2(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,longlong *param_5,
             longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  longlong lVar13;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  int local_144;
  longlong local_140 [2];
  longlong local_130;
  int local_128;
  undefined2 *local_120;
  int local_118;
  longlong local_110;
  undefined4 local_108;
  undefined2 local_104;
  void *local_100;
  void *local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined5 uStack_b8;
  undefined4 uStack_b3;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_3 + 0x38))) {
    piVar2 = (int *)(*(longlong *)(param_3 + 0x30) + (ulonglong)param_4 * 0x48);
    local_c8 = *(undefined8 *)(piVar2 + 4);
    local_d8 = *piVar2;
    iStack_d4 = piVar2[1];
    iStack_d0 = piVar2[2];
    uStack_cc = piVar2[3];
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_ae = 0;
    uStack_b3 = 0xffffffff;
    uStack_af = 0xff;
    local_a8 = DAT_14c845dbc;
    local_a0 = DAT_14c845dc4;
    FUN_1404d7984(&local_c0,piVar2 + 6);
    local_98[0] = *(longlong *)(piVar2 + 0x10);
    plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e441a0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x80;
    *(undefined4 *)(plVar6 + 8) = 0xffffffff;
    *param_2 = (longlong)(plVar6 + 2);
    param_2[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    lVar13 = *param_2;
    FUN_1400021e4((undefined8 *)(param_3 + 0x28),&local_88);
    FUN_140056680(&local_110,L"CompressionType");
    FUN_145964f10(lVar13,&local_110,&local_88);
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    uVar11 = uStack_cc & 0xff;
    FUN_140056680(&local_88,L"PixelFormat");
    FUN_14626eb76(lVar13,&local_88,(double)uVar11);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    dVar3 = (double)local_c8._4_4_;
    FUN_140056680(&local_88,L"CompressedSize");
    FUN_14626eb76(lVar13,&local_88,dVar3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    dVar3 = (double)(int)local_c8;
    FUN_140056680(&local_88,L"UncompressedSize");
    FUN_14626eb76(lVar13,&local_88,dVar3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    dVar3 = (double)local_d8;
    FUN_140056680(&local_88,L"SizeX");
    FUN_14626eb76(lVar13,&local_88,dVar3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    dVar3 = (double)iStack_d4;
    FUN_140056680(&local_88,L"SizeY");
    FUN_14626eb76(lVar13,&local_88,dVar3);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if ((local_98[0] == 0) && (0 < (int)local_c8)) {
      FUN_14143acfc(&local_c0,local_98,1);
    }
    lVar13 = local_98[0];
    uVar11 = uStack_cc;
    if (((local_98[0] == 0) || (*(int *)((longlong)param_5 + 0xc) == -1)) ||
       (*(int *)((longlong)param_6 + 0xc) == -1)) {
LAB_143a50aa5:
      bVar12 = 0;
    }
    else {
      cVar4 = FUN_1469880bd(CONCAT71((int7)((ulonglong)&local_88 >> 8),(undefined1)uStack_cc) &
                            0xffffffff);
      if (cVar4 != '\x04') goto LAB_143a50aa5;
      uVar10 = iStack_d4 * local_d8;
      local_144 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uVar11 & 0xff) * 0x30));
      local_e8 = 0;
      uStack_e0 = 0;
      if (local_c8._4_4_ < 1) {
LAB_143a50c07:
        local_f8 = (void *)0x0;
        uStack_f0 = (ulonglong)uVar10;
        uVar9 = 0;
        if (uVar10 != 0) {
          FUN_145ee9c2c(&local_f8);
          memset(local_f8,0,(longlong)(int)uVar10 << 3);
          uVar11 = 0;
          do {
            FUN_14817dd45(uVar9 + lVar13,(undefined1)uStack_cc,
                          (void *)((longlong)(int)uVar11 * 8 + (longlong)local_f8));
            uVar11 = uVar11 + 1;
            uVar9 = (ulonglong)(uint)((int)uVar9 + local_144);
          } while (uVar10 != uVar11);
        }
        local_110 = CONCAT44(iStack_d4,local_d8);
        local_108 = 1;
        local_104 = 4;
        local_100 = local_f8;
        FUN_1400b22c2(local_140,&DAT_14add2566);
        FUN_1407ec8fc(&local_130,param_6,local_140);
        local_88 = *param_5;
        local_80 = (int)param_5[1] + -1;
        if ((int)param_5[1] == 0) {
          local_80 = 0;
        }
        local_78 = local_130;
        local_70 = local_128 + -1;
        if (local_128 == 0) {
          local_70 = 0;
        }
        FUN_140bee87a(&local_120,&local_88,2);
        puVar8 = local_120;
        if (local_118 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        bVar5 = FUN_147af0466(puVar8,&local_110,0);
        if (local_120 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        if (local_140[0] != 0) {
          FUN_1400020a8();
        }
        if (bVar5 != 0) {
          lVar13 = *param_2;
          FUN_1400b22c2(&local_120,&DAT_14add2566);
          FUN_1407ec8fc(&local_88,param_6,&local_120);
          FUN_140056680(&local_130,L"TextureData");
          FUN_145964f10(lVar13,&local_130,&local_88);
          if (local_130 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (local_120 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        bVar12 = bVar5 ^ 1;
      }
      else {
        uStack_e0 = (ulonglong)(local_144 * uVar10);
        if (local_144 * uVar10 == 0) {
          iVar7 = 0;
        }
        else {
          FUN_1447403be(&local_e8,0);
          iVar7 = (int)uStack_e0;
        }
        local_168 = (longlong)local_c8._4_4_;
        local_158 = 0;
        local_160 = 0;
        cVar4 = FUN_140aa9920(*(undefined8 *)(param_3 + 0x28),local_e8,(longlong)iVar7,lVar13);
        if (cVar4 != '\0') {
          if (0 < (int)uStack_e0) {
            lVar13 = local_e8;
          }
          goto LAB_143a50c07;
        }
        bVar5 = 1;
        bVar12 = 0;
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if ((bVar5 == 0) && (plVar6 = (longlong *)param_2[1], plVar6 != (longlong *)0x0)) {
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
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
      local_98[0] = 0;
    }
    FUN_1400ea36e(&local_c0,&local_c0);
    if (bVar12 == 0) goto LAB_143a5074b;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143a5074b:
  if (*(int *)((longlong)param_5 + 0xc) != -1) {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = 0;
    param_5[1] = -0x100000000;
  }
  if (*(int *)((longlong)param_6 + 0xc) != -1) {
    if (*param_6 != 0) {
      FUN_1400020a8();
    }
    *param_6 = 0;
    param_6[1] = -0x100000000;
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143a50e10 FUN_143a50e10 body=443 status=ok
// SIG undefined FUN_143a50e10(void)

undefined8 FUN_143a50e10(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = param_2[8];
  if (((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
      ((int)uVar1 < *(int *)(*(longlong *)(param_2 + 10) + 0x48))) &&
     (lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 10) + 0x40) + (ulonglong)uVar1 * 8),
     lVar2 != 0)) {
    if (DAT_14cb0b9a0 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146408884;
      local_58 = &LAB_147d719e1;
      local_60 = &LAB_140fb41fe;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x168;
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
    }
    if ((*(int *)(DAT_14cb0b9a0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) == DAT_14cb0b9a0 + 0x30)) {
      lVar3 = *(longlong *)(param_2 + 6);
      if (*(longlong *)(param_2 + 6) != lVar2) {
        FUN_143a4f88f(param_3,param_2);
        *(longlong *)(param_2 + 6) = lVar2;
        lVar3 = lVar2;
      }
      if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
        *param_2 = *(undefined4 *)(lVar2 + 0x140);
        param_2[1] = *(undefined4 *)(lVar2 + 0x144);
        if ((*(byte *)(lVar2 + 0x15c) & 2) == 0) {
          *(undefined1 *)(param_2 + 4) = 0;
          uVar4 = 0;
        }
        else {
          cVar5 = (char)*(undefined4 *)(param_1 + 0x48);
          *(char *)(param_2 + 4) = cVar5 + (cVar5 == '\0');
          uVar4 = *(undefined1 *)(param_1 + 0x49);
        }
        *(undefined1 *)((longlong)param_2 + 0x11) = uVar4;
        param_2[2] = (uint)*(byte *)(lVar3 + 0x15b);
        param_2[3] = (uint)*(byte *)(lVar3 + 0xf1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a50fcc FUN_143a50fcc body=2378 status=ok
// SIG undefined FUN_143a50fcc(void)

undefined8 FUN_143a50fcc(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  void *_Src;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined7 uVar17;
  uint *puVar16;
  ulonglong uVar18;
  byte bVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  code *local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  longlong local_a8;
  int local_a0;
  void *local_98;
  undefined8 local_90;
  int local_88;
  longlong local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (DAT_14c762890 == 0) {
    bVar19 = 1;
  }
  else {
    bVar19 = (*(byte *)(param_1 + 0x30) & 4) >> 2;
  }
  lVar9 = param_2[3];
  if ((lVar9 == 0) || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) != 0)) {
    param_2[3] = 0;
    lVar9 = 0;
  }
  plVar15 = param_2;
  if ((bVar19 == 0) || ((*(byte *)(param_1 + 0x4c) & 1) != 0)) {
LAB_143a5110d:
    if (lVar9 != 0) goto LAB_143a51116;
  }
  else {
    if (lVar9 == 0) {
      lVar9 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
      if (lVar9 == 0) goto LAB_143a5141c;
      *(undefined1 *)((longlong)param_2 + 0x12) = 1;
      if (DAT_14cb0b9a0 == 0) {
        local_100 = &local_e8;
        local_e8 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_146408884;
        local_108 = &LAB_147d719e1;
        local_110 = &LAB_140fb41fe;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10000000;
        local_130 = 8;
        local_138 = (undefined1 **)CONCAT44(local_138._4_4_,0x168);
        FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
      }
      lVar10 = FUN_14600ca7e(lVar9,DAT_14cb0b9a0,&local_e8);
      param_2[3] = lVar10;
      if (lVar10 == 0) goto LAB_143a5141c;
      FUN_146471540(lVar9,lVar10);
      *(uint *)(param_2[3] + 0x13c) = *(uint *)(param_2[3] + 0x13c) | 2;
      uVar18 = CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(param_2[3] + 0x15c)) &
               0xfffffffffffffffd;
      uVar17 = (undefined7)(uVar18 >> 8);
      *(byte *)(param_2[3] + 0x15c) = (byte)uVar18 | ((char)param_2[2] != '\0') * '\x02';
      *(char *)(param_2[3] + 0x15b) = (char)param_2[1];
      lVar9 = param_2[3];
      *(undefined8 *)(lVar9 + 0x148) = 0;
      *(undefined8 *)(lVar9 + 0x150) = 0;
      *(undefined1 *)(param_2[3] + 0xf1) = *(undefined1 *)((longlong)param_2 + 0xc);
      plVar15 = (longlong *)param_2[3];
      plVar15[0x28] = *param_2;
      (**(code **)(*plVar15 + 0x318))();
      plVar15 = (longlong *)CONCAT71(uVar17,1);
      FUN_140768b6e(param_2[3],plVar15);
      lVar9 = param_2[3];
      goto LAB_143a5110d;
    }
LAB_143a51116:
    lVar10 = param_2[2];
    if (((((*(int *)(lVar9 + 0x140) == (int)*param_2) &&
          (*(int *)(lVar9 + 0x144) == *(int *)((longlong)param_2 + 4))) &&
         (*(uint *)(param_2 + 1) == (uint)*(byte *)(lVar9 + 0x15b))) &&
        ((*(uint *)((longlong)param_2 + 0xc) == (uint)*(byte *)(lVar9 + 0xf1) &&
         ((*(byte *)(lVar9 + 0x13c) & 2) != 0)))) &&
       (bVar21 = (*(byte *)(lVar9 + 0x15c) & 2) == 0,
       plVar15 = (longlong *)CONCAT71((int7)((ulonglong)plVar15 >> 8),bVar21),
       ((char)lVar10 != '\0') != bVar21)) {
      lVar9 = FUN_1447b4020();
      if (lVar9 != 0) goto LAB_143a511d2;
      lVar9 = param_2[3];
    }
    *(byte *)(lVar9 + 0x13c) = *(byte *)(lVar9 + 0x13c) | 2;
    uVar18 = CONCAT71((int7)((ulonglong)plVar15 >> 8),*(undefined1 *)(param_2[3] + 0x15c)) &
             0xfffffffffffffffd;
    uVar17 = (undefined7)(uVar18 >> 8);
    *(byte *)(param_2[3] + 0x15c) = (byte)uVar18 | ((char)lVar10 != '\0') * '\x02';
    *(char *)(param_2[3] + 0x15b) = (char)param_2[1];
    *(undefined1 *)(param_2[3] + 0xf1) = *(undefined1 *)((longlong)param_2 + 0xc);
    plVar15 = (longlong *)param_2[3];
    plVar15[0x28] = *param_2;
    (**(code **)(*plVar15 + 0x318))();
    FUN_140768b6e(param_2[3],CONCAT71(uVar17,1));
  }
LAB_143a511d2:
  if (bVar19 == 0) goto LAB_143a5141c;
  pcVar4 = *(code **)(param_1 + 0x28);
  if (param_2[3] == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_1447b4020();
  }
  lStack_e0 = *(longlong *)(param_3 + 0x100);
  local_d8 = *param_2;
  lStack_d0 = param_2[1];
  local_c8 = (int)param_2[2];
  iStack_c4 = *(int *)((longlong)param_2 + 0x14);
  iStack_c0 = (int)param_2[3];
  iStack_bc = *(int *)((longlong)param_2 + 0x1c);
  local_b8 = (int)param_2[4];
  iStack_b4 = *(int *)((longlong)param_2 + 0x24);
  iStack_b0 = (int)param_2[5];
  iStack_ac = *(int *)((longlong)param_2 + 0x2c);
  local_a0 = (int)param_2[7];
  local_a8 = param_2[6];
  local_98 = (void *)0x0;
  uVar14 = *(uint *)(param_2 + 9);
  _Src = (void *)param_2[8];
  local_90 = CONCAT44(local_90._4_4_,uVar14);
  local_e8 = pcVar4;
  if ((longlong)(int)uVar14 == 0) {
    local_90 = (ulonglong)uVar14;
  }
  else {
    FUN_1447a127e(&local_98,uVar14,0);
    memcpy(local_98,_Src,(longlong)(int)uVar14);
  }
  local_88 = (int)param_2[10];
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a512a1;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a512a6;
      goto LAB_143a512d0;
    }
LAB_143a512a6:
    FUN_143a589a2(&local_e8);
  }
  else {
LAB_143a512a1:
    if (iVar6 == 0x10) goto LAB_143a512a6;
LAB_143a512d0:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
      goto LAB_143a512a6;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a512a6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_143a514e8;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_143a514e8:
        puVar20 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar20 + 0x23);
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
          puVar20 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar20 + 0x23);
          uVar14 = 0;
          if (puVar16 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_143a51568;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143a51568:
      *(uint **)(puVar12 + 0x10) = puVar16;
      puVar12[0x12] = uVar14;
      iVar6 = 0;
      FUN_1447247dc(puVar20,0);
      *puVar20 = &PTR_FUN_14add6270;
      puVar20[0x15] = local_e8;
      puVar20[0x16] = lStack_e0;
      *(int *)(puVar20 + 0x19) = local_c8;
      *(int *)((longlong)puVar20 + 0xcc) = iStack_c4;
      *(int *)(puVar20 + 0x1a) = iStack_c0;
      *(int *)((longlong)puVar20 + 0xd4) = iStack_bc;
      puVar20[0x17] = local_d8;
      puVar20[0x18] = lStack_d0;
      *(int *)(puVar20 + 0x1b) = local_b8;
      *(int *)((longlong)puVar20 + 0xdc) = iStack_b4;
      *(int *)(puVar20 + 0x1c) = iStack_b0;
      *(int *)((longlong)puVar20 + 0xe4) = iStack_ac;
      puVar20[0x1d] = local_a8;
      *(int *)(puVar20 + 0x1e) = local_a0;
      puVar20[0x1f] = local_98;
      local_98 = (void *)0x0;
      *(undefined4 *)(puVar20 + 0x20) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar20 + 0x104) = local_90._4_4_;
      local_90 = 0;
      *(int *)(puVar20 + 0x21) = local_88;
      puVar20[0x22] = local_80;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
      }
      puVar20[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar20[9] = puVar20;
      puVar20[10] = puVar20;
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar5 = 1;
        if ((char)uVar18 != '\x06') {
          uVar5 = uVar18;
        }
        uVar18 = uVar5;
        uVar13 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar20[0xf] = uVar13;
      puVar20[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar20 + 0x1c) = iVar6;
      if (puVar20 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar20);
        LOCK();
        piVar1 = (int *)(puVar20 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar20)(puVar20,1);
        }
      }
    }
    else {
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x78,8);
      *local_68 = (longlong)&PTR_LAB_14add6220;
      local_68[1] = (longlong)local_e8;
      local_68[2] = lStack_e0;
      *(int *)(local_68 + 5) = local_c8;
      *(int *)((longlong)local_68 + 0x2c) = iStack_c4;
      *(int *)(local_68 + 6) = iStack_c0;
      *(int *)((longlong)local_68 + 0x34) = iStack_bc;
      local_68[3] = local_d8;
      local_68[4] = lStack_d0;
      *(int *)(local_68 + 7) = local_b8;
      *(int *)((longlong)local_68 + 0x3c) = iStack_b4;
      *(int *)(local_68 + 8) = iStack_b0;
      *(int *)((longlong)local_68 + 0x44) = iStack_ac;
      *(int *)(local_68 + 10) = local_a0;
      local_68[9] = local_a8;
      local_68[0xb] = (longlong)local_98;
      local_98 = (void *)0x0;
      *(undefined4 *)(local_68 + 0xc) = (undefined4)local_90;
      *(undefined4 *)((longlong)local_68 + 100) = local_90._4_4_;
      local_90 = 0;
      *(int *)(local_68 + 0xd) = local_88;
      local_68[0xe] = local_80;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143a58f1a;
      }
      local_138 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTarget2DUpdate",&DAT_14cb3ced8);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar15 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar15 = local_58;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_143a5141c:
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a51918 FUN_143a51918 body=238 status=ok
// SIG undefined FUN_143a51918(void)

void FUN_143a51918(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = param_2[2];
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x50;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x50) == lVar2) {
          if (lVar1 == 0) {
            return;
          }
          if (lVar1 == -8) {
            return;
          }
          if ((*(char *)(lVar1 + 0x16) == '\x01') && (*(char *)(lVar1 + 0x14) == '\x02')) {
            FUN_1438f9932(*param_2,*(undefined8 *)(lVar1 + 0x30),
                          CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar1 + 0x15)));
          }
          if ((*(char *)(lVar1 + 0x18) == '\x01') && (*(longlong *)(lVar1 + 0x30) != 0)) {
            (**(code **)(*(longlong *)param_2[1] + 0x128))
                      ((longlong *)param_2[1],*param_2,*(undefined8 *)(lVar1 + 0x28),
                       *(undefined1 *)(lVar1 + 0x17),1);
          }
          *(undefined2 *)(lVar1 + 0x16) = 0;
          *(undefined1 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x30) = 0;
          *(undefined8 *)(lVar1 + 0x38) = 0;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x48);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 143a51aa2 FUN_143a51aa2 body=363 status=ok
// SIG undefined FUN_143a51aa2(void)

void FUN_143a51aa2(longlong param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14817ecdc(local_48);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_148188f3c(&local_68,param_2);
  FUN_140126e42(&local_78,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      puVar1 = local_68 + local_58;
      if (local_40 == 0) {
        *local_78 = 0;
        local_78 = local_78 + local_70;
        local_68 = puVar1;
      }
      else {
        uVar2 = *local_68;
        piVar5 = local_78 + local_70;
        *local_78 = -(uint)(iVar4 == 1);
        local_78 = piVar5;
        local_68 = puVar1;
        if (iVar4 == 1) {
          if (uVar2 < 0xb) {
            uVar3 = (&DAT_14add68c0)[uVar2];
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(local_40 + 0xc) = uVar3;
          if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
            uVar2 = *(uint *)(local_40 + 0x20);
            if (((((ulonglong)uVar2 != 0xffffffff) && (-1 < (int)uVar2)) &&
                ((int)uVar2 < *(int *)(*(longlong *)(local_40 + 0x28) + 0x48))) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_40 + 0x28) + 0x40) + (ulonglong)uVar2 * 8) != 0)
               ) {
              FUN_1458bbce6();
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      iVar4 = *piVar5;
    } while (iVar6 < iVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a51c0e FUN_143a51c0e body=368 status=ok
// SIG undefined FUN_143a51c0e(void)

ulonglong FUN_143a51c0e(longlong param_1,int *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 3) = 0x13;
  param_2[4] = 3;
  param_2[8] = -1;
  piVar5 = param_2 + 0xe;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  iVar3 = FUN_144830b78(piVar5,&DAT_14cb42160);
  param_2[0xe] = iVar3;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  if (DAT_14c762890 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(*(byte *)(param_1 + 0x30) & 4) == 0);
  }
  uVar6 = CONCAT71((int7)((ulonglong)piVar5 >> 8),*(undefined1 *)(param_1 + 0x46)) &
          0xffffffffffffff02;
  cVar1 = FUN_143a4f098(CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 1),
                        *(undefined1 *)(param_1 + 0x44),&local_44);
  if (cVar1 != '\0') {
    iVar4 = (int)((float)*(int *)(param_1 + 0x38) * DAT_14c762894);
    iVar3 = DAT_14ca84e40;
    if (iVar4 < DAT_14ca84e40) {
      iVar3 = iVar4;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *param_2 = iVar3;
    iVar4 = (int)((float)*(int *)(param_1 + 0x3c) * DAT_14c762894);
    iVar3 = DAT_14ca84e40;
    if (iVar4 < DAT_14ca84e40) {
      iVar3 = iVar4;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    param_2[1] = iVar3;
    iVar3 = DAT_14ca84e40;
    if (*(int *)(param_1 + 0x40) < DAT_14ca84e40) {
      iVar3 = *(int *)(param_1 + 0x40);
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    param_2[2] = iVar3;
    if ((ulonglong)local_44 < 0xb) {
      uVar2 = (&DAT_14add68c0)[local_44];
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_2 + 3) = uVar2;
    param_2[4] = (uint)*(byte *)(param_1 + 0x45);
    FUN_1404e5848(param_2 + 8,param_3 + 0x1e8,param_1 + 0x48);
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a51d80 FUN_143a51d80 body=1270 status=ok
// SIG undefined FUN_143a51d80(void)

void FUN_143a51d80(longlong param_1,longlong param_2,longlong param_3)

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
  FUN_143a5228b(param_3);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a521d1;
    if (iVar7 != 1) goto LAB_143a51de9;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a521d1;
  }
  else {
LAB_143a51de9:
    if (iVar7 == 0x10) goto LAB_143a521d1;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a521d1:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a521d1;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a51f56;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a51f56:
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
          goto LAB_143a51fd6;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a51fd6:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add6310;
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
    local_48 = &PTR_LAB_14add62f0;
    local_68[0] = &LAB_143a59104;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3cf64);
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



// FUNCTION 143a5228b FUN_143a5228b body=171 status=ok
// SIG undefined FUN_143a5228b(void)

void FUN_143a5228b(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_2 + 0x14) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0))
  {
    lVar2 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 != 0) {
      *(undefined1 *)(lVar1 + 0x15c) = 0;
      FUN_145f790e6(lVar2,*(undefined8 *)(param_2 + 0x18));
      local_28 = *(longlong *)(param_2 + 0x18);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_145d11510(lVar2 + 0x1c68,&local_28,1);
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x14) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a52338 FUN_143a52338 body=187 status=ok
// SIG undefined FUN_143a52338(void)

undefined8 FUN_143a52338(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_2[8];
  if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(*(longlong *)(param_2 + 10) + 0x48))) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 10) + 0x40) + (ulonglong)uVar1 * 8);
    if (lVar2 != 0) {
      lVar3 = FUN_1458bbce6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = *(longlong *)(param_2 + 6);
        if (*(longlong *)(param_2 + 6) != lVar2) {
          FUN_143a5228b(param_3,param_2);
          *(longlong *)(param_2 + 6) = lVar2;
          lVar3 = lVar2;
        }
        if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
          *param_2 = *(undefined4 *)(lVar2 + 0x140);
          param_2[1] = *(undefined4 *)(lVar2 + 0x144);
          param_2[2] = *(undefined4 *)(lVar2 + 0x148);
          *(undefined1 *)(param_2 + 3) = *(undefined1 *)(lVar3 + 0x15c);
          param_2[4] = (uint)*(byte *)(lVar3 + 0xf1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143a523f4 FUN_143a523f4 body=2016 status=ok
// SIG undefined FUN_143a523f4(void)

undefined8 FUN_143a523f4(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  byte bVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14c762890 == 0) {
    bVar17 = 1;
  }
  else {
    bVar17 = (*(byte *)(param_1 + 0x30) & 4) >> 2;
  }
  lVar9 = param_2[3];
  if ((lVar9 == 0) || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) != 0)) {
    param_2[3] = 0;
    lVar9 = 0;
  }
  if ((bVar17 == 0) || ((*(byte *)(param_1 + 0x46) & 1) != 0)) {
LAB_143a52514:
    if (lVar9 != 0) goto LAB_143a5251d;
  }
  else {
    if (lVar9 == 0) {
      lVar9 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
      if (lVar9 == 0) goto LAB_143a525b8;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      uVar10 = FUN_1458bbce6();
      lVar11 = FUN_14600ca7e(lVar9,uVar10,&local_e8);
      param_2[3] = lVar11;
      if (lVar11 == 0) goto LAB_143a525b8;
      FUN_146471540(lVar9,lVar11);
      *(uint *)(param_2[3] + 0x13c) = *(uint *)(param_2[3] + 0x13c) | 2;
      lVar9 = param_2[3];
      *(undefined8 *)(lVar9 + 0x14c) = 0;
      *(undefined8 *)(lVar9 + 0x154) = 0;
      *(char *)(param_2[3] + 0xf1) = (char)param_2[2];
      plVar15 = (longlong *)param_2[3];
      uVar4 = *(undefined1 *)((longlong)param_2 + 0xc);
      lVar9 = param_2[1];
      plVar15[0x28] = *param_2;
      *(int *)(plVar15 + 0x29) = (int)lVar9;
      *(undefined1 *)((longlong)plVar15 + 0x15c) = uVar4;
      (**(code **)(*plVar15 + 0x318))();
      FUN_14373a478(param_2[3],1);
      lVar9 = param_2[3];
      goto LAB_143a52514;
    }
LAB_143a5251d:
    if (((((*(int *)(lVar9 + 0x140) == (int)*param_2) &&
          (*(int *)(lVar9 + 0x144) == *(int *)((longlong)param_2 + 4))) &&
         (*(int *)(lVar9 + 0x148) == (int)param_2[1])) &&
        ((*(char *)(lVar9 + 0x15c) == *(char *)((longlong)param_2 + 0xc) &&
         (*(uint *)(param_2 + 2) == (uint)*(byte *)(lVar9 + 0xf1))))) &&
       ((*(byte *)(lVar9 + 0x13c) & 2) != 0)) {
      lVar9 = FUN_1447b4020();
      if (lVar9 != 0) goto LAB_143a525b3;
      lVar9 = param_2[3];
    }
    *(byte *)(lVar9 + 0x13c) = *(byte *)(lVar9 + 0x13c) | 2;
    *(char *)(param_2[3] + 0xf1) = (char)param_2[2];
    plVar15 = (longlong *)param_2[3];
    uVar4 = *(undefined1 *)((longlong)param_2 + 0xc);
    lVar9 = param_2[1];
    plVar15[0x28] = *param_2;
    *(int *)(plVar15 + 0x29) = (int)lVar9;
    *(undefined1 *)((longlong)plVar15 + 0x15c) = uVar4;
    (**(code **)(*plVar15 + 0x318))();
    FUN_14373a478(param_2[3],1);
  }
LAB_143a525b3:
  if (bVar17 == 0) goto LAB_143a525b8;
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (param_2[3] == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_1447b4020();
  }
  lStack_e0 = *(longlong *)(param_3 + 0x100);
  local_e8 = lVar9;
  FUN_14817ed70(&local_d8,param_2);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a52643;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a52648;
      goto LAB_143a52672;
    }
LAB_143a52648:
    FUN_143a592dc(&local_e8);
  }
  else {
LAB_143a52643:
    if (iVar6 == 0x10) goto LAB_143a52648;
LAB_143a52672:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
      goto LAB_143a52648;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a52648;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_143a52862;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar12 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar12 = 0xffffffff;
        *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        FUN_140217a48(puVar2);
        puVar13 = (uint *)*puVar2;
LAB_143a52862:
        puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x23);
        uVar14 = puVar13[0x12];
        if (puVar16 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar14 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar14) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x23);
          uVar14 = 0;
          if (puVar16 <= puVar13 + 0x4000) {
            uVar14 = 1;
            goto LAB_143a528e2;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143a528e2:
      *(uint **)(puVar13 + 0x10) = puVar16;
      puVar13[0x12] = uVar14;
      iVar6 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14add63c0;
      puVar18[0x15] = local_e8;
      puVar18[0x16] = lStack_e0;
      *(undefined4 *)(puVar18 + 0x19) = local_c8;
      *(undefined4 *)((longlong)puVar18 + 0xcc) = uStack_c4;
      *(undefined4 *)(puVar18 + 0x1a) = uStack_c0;
      *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_bc;
      puVar18[0x17] = local_d8;
      puVar18[0x18] = lStack_d0;
      *(undefined4 *)(puVar18 + 0x1b) = local_b8;
      *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_b4;
      *(undefined4 *)(puVar18 + 0x1c) = uStack_b0;
      *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_ac;
      puVar18[0x1d] = local_a8;
      *(undefined4 *)(puVar18 + 0x1e) = local_a0;
      puVar18[0x1f] = local_98;
      local_98 = 0;
      *(undefined4 *)(puVar18 + 0x20) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar18 + 0x104) = local_90._4_4_;
      local_90 = 0;
      *(undefined4 *)(puVar18 + 0x21) = local_88;
      puVar18[0x22] = local_80;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
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
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar10 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar18[0xf] = uVar10;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar6;
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x78,8);
      *local_68 = (longlong)&PTR_LAB_14add6360;
      local_68[1] = local_e8;
      local_68[2] = lStack_e0;
      *(undefined4 *)(local_68 + 5) = local_c8;
      *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_c4;
      *(undefined4 *)(local_68 + 6) = uStack_c0;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_bc;
      local_68[3] = local_d8;
      local_68[4] = lStack_d0;
      *(undefined4 *)(local_68 + 7) = local_b8;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_b4;
      *(undefined4 *)(local_68 + 8) = uStack_b0;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_ac;
      *(undefined4 *)(local_68 + 10) = local_a0;
      local_68[9] = local_a8;
      local_68[0xb] = local_98;
      local_98 = 0;
      *(undefined4 *)(local_68 + 0xc) = (undefined4)local_90;
      *(undefined4 *)((longlong)local_68 + 100) = local_90._4_4_;
      local_90 = 0;
      *(undefined4 *)(local_68 + 0xd) = local_88;
      local_68[0xe] = local_80;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143a59516;
      }
      local_f8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTarget2DArrayUpdate",&DAT_14cb3cf68);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar15 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar15 = local_58;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143a525b8:
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a52bd5 FUN_143a52bd5 body=69 status=ok
// SIG undefined FUN_143a52bd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a52bd5(void)

{
  _DAT_14cb3c760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a52c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c768,1);
  return;
}



// FUNCTION 143a52c1a FUN_143a52c1a body=69 status=ok
// SIG undefined FUN_143a52c1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a52c1a(void)

{
  _DAT_14cb3c770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a52c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c778,1);
  return;
}



// FUNCTION 143a52c5f FUN_143a52c5f body=69 status=ok
// SIG undefined FUN_143a52c5f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a52c5f(void)

{
  _DAT_14cb3c780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a52ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3c788,1);
  return;
}



// FUNCTION 143a52ca4 FUN_143a52ca4 body=363 status=ok
// SIG undefined FUN_143a52ca4(void)

void FUN_143a52ca4(longlong param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_70;
  uint *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14817fa7a(local_48);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_148188f3c(&local_68,param_2);
  FUN_140126e42(&local_78,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      puVar1 = local_68 + local_58;
      if (local_40 == 0) {
        *local_78 = 0;
        local_78 = local_78 + local_70;
        local_68 = puVar1;
      }
      else {
        uVar2 = *local_68;
        piVar5 = local_78 + local_70;
        *local_78 = -(uint)(iVar4 == 1);
        local_78 = piVar5;
        local_68 = puVar1;
        if (iVar4 == 1) {
          if (uVar2 < 0xb) {
            uVar3 = (&DAT_14add68c0)[uVar2];
          }
          else {
            uVar3 = 0;
          }
          *(undefined1 *)(local_40 + 4) = uVar3;
          if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
            uVar2 = *(uint *)(local_40 + 0x18);
            if (((((ulonglong)uVar2 != 0xffffffff) && (-1 < (int)uVar2)) &&
                ((int)uVar2 < *(int *)(*(longlong *)(local_40 + 0x20) + 0x48))) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_40 + 0x20) + 0x40) + (ulonglong)uVar2 * 8) != 0)
               ) {
              FUN_1458f150a();
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      iVar4 = *piVar5;
    } while (iVar6 < iVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a52e10 FUN_143a52e10 body=289 status=ok
// SIG undefined FUN_143a52e10(void)

ulonglong FUN_143a52e10(longlong param_1,int *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  piVar5 = param_2 + 0xc;
  *(undefined1 *)(param_2 + 1) = 0x13;
  param_2[2] = 3;
  param_2[6] = -1;
  iVar3 = FUN_144830b78(piVar5,&DAT_14cb42160);
  param_2[0xc] = iVar3;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  if (DAT_14c762890 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(*(byte *)(param_1 + 0x30) & 4) == 0);
  }
  uVar6 = CONCAT71((int7)((ulonglong)piVar5 >> 8),*(undefined1 *)(param_1 + 0x3e)) &
          0xffffffffffffff02;
  cVar1 = FUN_143a4f098(CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 1),
                        *(undefined1 *)(param_1 + 0x3c),&local_44);
  if (cVar1 != '\0') {
    iVar4 = (int)((float)*(int *)(param_1 + 0x38) * DAT_14c762894);
    iVar3 = DAT_14ca84e64;
    if (iVar4 < DAT_14ca84e64) {
      iVar3 = iVar4;
    }
    iVar4 = 1;
    if (1 < iVar3) {
      iVar4 = iVar3;
    }
    *param_2 = iVar4;
    if ((ulonglong)local_44 < 0xb) {
      uVar2 = (&DAT_14add68c0)[local_44];
    }
    else {
      uVar2 = 0;
    }
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2[2] = (uint)*(byte *)(param_1 + 0x3d);
    FUN_1404e5848(param_2 + 6,param_3 + 0x1e8,param_1 + 0x40);
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a52f32 FUN_143a52f32 body=1270 status=ok
// SIG undefined FUN_143a52f32(void)

void FUN_143a52f32(longlong param_1,longlong param_2,longlong param_3)

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
  FUN_143a5343d(param_3);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a53383;
    if (iVar7 != 1) goto LAB_143a52f9b;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a53383;
  }
  else {
LAB_143a52f9b:
    if (iVar7 == 0x10) goto LAB_143a53383;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a53383:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a53383;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a53108;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a54109);
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
LAB_143a53108:
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
          goto LAB_143a53188;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a53188:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14add6520;
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
    local_48 = &PTR_LAB_14add6500;
    local_68[0] = &LAB_143a59906;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb3d004);
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



// FUNCTION 143a5343d FUN_143a5343d body=171 status=ok
// SIG undefined FUN_143a5343d(void)

void FUN_143a5343d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_2 + 0xc) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x10), lVar1 != 0)) {
    lVar2 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
    if (lVar2 != 0) {
      *(undefined1 *)(lVar1 + 0x154) = 0;
      FUN_145f790e6(lVar2,*(undefined8 *)(param_2 + 0x10));
      local_28 = *(longlong *)(param_2 + 0x10);
      if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_145d11510(lVar2 + 0x1c68,&local_28,1);
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_2 + 0xc) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a534ea FUN_143a534ea body=164 status=ok
// SIG undefined FUN_143a534ea(void)

undefined8 FUN_143a534ea(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_2[6];
  if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(*(longlong *)(param_2 + 8) + 0x48))) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x40) + (ulonglong)uVar1 * 8);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f150a();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = *(longlong *)(param_2 + 4);
        if (*(longlong *)(param_2 + 4) != lVar2) {
          FUN_143a5343d(param_3,param_2);
          *(longlong *)(param_2 + 4) = lVar2;
          lVar3 = lVar2;
        }
        if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
          *param_2 = *(undefined4 *)(lVar2 + 0x140);
          *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar3 + 0x154);
          param_2[2] = (uint)*(byte *)(lVar3 + 0xf1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143a5358e FUN_143a5358e body=1935 status=ok
// SIG undefined FUN_143a5358e(void)

undefined8 FUN_143a5358e(longlong param_1,int *param_2,longlong param_3)

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
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  byte bVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c762890 == 0) {
    bVar16 = 1;
  }
  else {
    bVar16 = (*(byte *)(param_1 + 0x30) & 4) >> 2;
  }
  lVar8 = *(longlong *)(param_2 + 4);
  if ((lVar8 == 0) || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0)) {
    param_2[4] = 0;
    param_2[5] = 0;
    lVar8 = 0;
  }
  if ((bVar16 == 0) || ((*(byte *)(param_1 + 0x3e) & 1) != 0)) {
LAB_143a536a3:
    if (lVar8 != 0) goto LAB_143a536a8;
  }
  else {
    if (lVar8 == 0) {
      lVar8 = FUN_1400bd118(*(undefined8 *)(param_3 + 0x30));
      if (lVar8 == 0) goto LAB_143a53722;
      *(undefined1 *)(param_2 + 3) = 1;
      uVar9 = FUN_1458f150a();
      lVar10 = FUN_14600ca7e(lVar8,uVar9,&local_e0);
      *(longlong *)(param_2 + 4) = lVar10;
      if (lVar10 == 0) goto LAB_143a53722;
      FUN_146471540(lVar8,lVar10);
      *(uint *)(*(longlong *)(param_2 + 4) + 0x13c) =
           *(uint *)(*(longlong *)(param_2 + 4) + 0x13c) | 2;
      lVar8 = *(longlong *)(param_2 + 4);
      *(undefined8 *)(lVar8 + 0x144) = 0;
      *(undefined8 *)(lVar8 + 0x14c) = 0;
      *(char *)(*(longlong *)(param_2 + 4) + 0xf1) = (char)param_2[2];
      plVar14 = *(longlong **)(param_2 + 4);
      iVar5 = param_2[1];
      *(int *)(plVar14 + 0x28) = *param_2;
      *(char *)((longlong)plVar14 + 0x154) = (char)iVar5;
      (**(code **)(*plVar14 + 0x318))();
      FUN_14373be04(*(undefined8 *)(param_2 + 4),1);
      lVar8 = *(longlong *)(param_2 + 4);
      goto LAB_143a536a3;
    }
LAB_143a536a8:
    if ((((*(int *)(lVar8 + 0x140) == *param_2) && (*(char *)(lVar8 + 0x154) == (char)param_2[1]))
        && (param_2[2] == (uint)*(byte *)(lVar8 + 0xf1))) && ((*(byte *)(lVar8 + 0x13c) & 2) != 0))
    {
      lVar8 = FUN_1447b4020();
      if (lVar8 != 0) goto LAB_143a5371d;
      lVar8 = *(longlong *)(param_2 + 4);
    }
    *(byte *)(lVar8 + 0x13c) = *(byte *)(lVar8 + 0x13c) | 2;
    *(char *)(*(longlong *)(param_2 + 4) + 0xf1) = (char)param_2[2];
    plVar14 = *(longlong **)(param_2 + 4);
    iVar5 = param_2[1];
    *(int *)(plVar14 + 0x28) = *param_2;
    *(char *)((longlong)plVar14 + 0x154) = (char)iVar5;
    (**(code **)(*plVar14 + 0x318))();
    FUN_14373be04(*(undefined8 *)(param_2 + 4),1);
  }
LAB_143a5371d:
  if (bVar16 == 0) goto LAB_143a53722;
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_2 + 4) == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_1447b4020();
  }
  lStack_d8 = *(longlong *)(param_3 + 0x100);
  local_e0 = lVar8;
  FUN_14817fb0e(&local_d0,param_2);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143a537ad;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143a537b2;
      goto LAB_143a537dc;
    }
LAB_143a537b2:
    FUN_143a59ade(&local_e0);
  }
  else {
LAB_143a537ad:
    if (iVar5 == 0x10) goto LAB_143a537b2;
LAB_143a537dc:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
      goto LAB_143a537b2;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_143a537b2;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_143a539ba;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143a54109);
        }
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar8 + 0x310);
        *(undefined8 *)(lVar8 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_143a539ba:
        puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x22);
        uVar13 = puVar12[0x12];
        if (puVar15 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x22);
          uVar13 = 0;
          if (puVar15 <= puVar12 + 0x4000) {
            uVar13 = 1;
            goto LAB_143a53a3a;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143a53a3a:
      *(uint **)(puVar12 + 0x10) = puVar15;
      puVar12[0x12] = uVar13;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14add65b8;
      puVar17[0x15] = local_e0;
      puVar17[0x16] = lStack_d8;
      puVar17[0x19] = local_c0;
      puVar17[0x17] = local_d0;
      puVar17[0x18] = lStack_c8;
      *(undefined4 *)(puVar17 + 0x1a) = local_b8;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_b4;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_b0;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_ac;
      puVar17[0x1c] = local_a8;
      *(undefined4 *)(puVar17 + 0x1d) = local_a0;
      puVar17[0x1e] = local_98;
      local_98 = 0;
      *(undefined4 *)(puVar17 + 0x1f) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar17 + 0xfc) = local_90._4_4_;
      local_90 = 0;
      *(undefined4 *)(puVar17 + 0x20) = local_88;
      puVar17[0x21] = local_80;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
      lVar8 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar8 == 0) {
        uVar4 = 1;
        if ((char)uVar18 != '\x06') {
          uVar4 = uVar18;
        }
        uVar18 = uVar4;
        uVar9 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
        }
        uVar9 = *(undefined8 *)(lVar8 + 0x30);
      }
      puVar17[0xf] = uVar9;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x70,8);
      *local_68 = (longlong)&PTR_LAB_14add6560;
      local_68[1] = local_e0;
      local_68[2] = lStack_d8;
      local_68[5] = local_c0;
      local_68[3] = local_d0;
      local_68[4] = lStack_c8;
      *(undefined4 *)(local_68 + 6) = local_b8;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_b4;
      *(undefined4 *)(local_68 + 7) = uStack_b0;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_ac;
      *(undefined4 *)(local_68 + 9) = local_a0;
      local_68[8] = local_a8;
      local_68[10] = local_98;
      local_98 = 0;
      *(undefined4 *)(local_68 + 0xb) = (undefined4)local_90;
      *(undefined4 *)((longlong)local_68 + 0x5c) = local_90._4_4_;
      local_90 = 0;
      *(undefined4 *)(local_68 + 0xc) = local_88;
      local_68[0xd] = local_80;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_143a59d10;
      }
      local_e8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetCubeUpdate",&DAT_14cb3d008);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143a53722:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a53d40 FUN_143a53d40 body=179 status=ok
// SIG undefined FUN_143a53d40(void)

ulonglong FUN_143a53d40(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 unaff_RBX;
  bool bVar5;
  
  bVar5 = DAT_14c76287c < 0;
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x20);
  bVar3 = iVar1 < DAT_14c76287c;
  if (bVar3 || bVar5) {
    *(uint *)(lVar2 + 0x20) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x24) < iVar1 + 1U) {
      FUN_14630406a((longlong *)(lVar2 + 0x18));
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 8) = *(undefined8 *)param_2;
    lVar2 = *param_1;
    iVar1 = param_2[1];
    if (*(int *)(lVar2 + 0x2c) < param_2[1]) {
      iVar1 = *(int *)(lVar2 + 0x2c);
    }
    iVar4 = *param_2;
    if (*(int *)(lVar2 + 0x28) < *param_2) {
      iVar4 = *(int *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = CONCAT44(iVar1,iVar4);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x34);
    if (*(int *)(lVar2 + 0x34) < param_2[1]) {
      iVar1 = param_2[1];
    }
    iVar4 = *(int *)(lVar2 + 0x30);
    if (*(int *)(lVar2 + 0x30) < *param_2) {
      iVar4 = *param_2;
    }
    *(ulonglong *)(lVar2 + 0x30) = CONCAT44(iVar1,iVar4);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3 || bVar5) & 0xffffffff;
}



// FUNCTION 143a53dfa FUN_143a53dfa body=241 status=ok
// SIG undefined FUN_143a53dfa(void)

void FUN_143a53dfa(longlong param_1,void *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = *param_3;
  uVar3 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar4 * 0x410;
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x410) == lVar2) {
          if (lVar5 != 0) goto LAB_143a53e7a;
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x400);
      } while (iVar4 != -1);
    }
  }
  local_30 = param_3;
  FUN_148180042(plVar1,&local_24,uVar3);
  lVar5 = *plVar1 + (longlong)local_24 * 0x410;
LAB_143a53e7a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  memcpy((void *)(lVar5 + 0x2a0),param_2,0x158);
  return;
}



// FUNCTION 143a54038 FUN_143a54038 body=31 status=ok
// SIG undefined FUN_143a54038(void)

undefined8 FUN_143a54038(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a54060 FUN_143a54060 body=117 status=ok
// SIG undefined FUN_143a54060(void)

void FUN_143a54060(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 1;
  FUN_148172ff6(lVar1 + 0x10,&local_24,&local_30,0);
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x110 + (longlong)local_24 * 0x120) = param_1[2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a540e0 FUN_143a540e0 body=12 status=ok
// SIG undefined FUN_143a540e0(void)

void FUN_143a540e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a540e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a540ec FUN_143a540ec body=29 status=ok
// SIG undefined FUN_143a540ec(void)

undefined8 FUN_143a540ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a54130 FUN_143a54130 body=282 status=ok
// SIG undefined FUN_143a54130(void)

undefined8 * FUN_143a54130(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a5424a FUN_143a5424a body=166 status=ok
// SIG undefined FUN_143a5424a(void)

void FUN_143a5424a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  local_30 = param_1 + 0x16;
  FUN_148172ff6(lVar2 + 0x10,&local_24,&local_30,0);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x110 + (longlong)local_24 * 0x120) = param_1[0x17];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a54310 FUN_143a54310 body=12 status=ok
// SIG undefined FUN_143a54310(void)

void FUN_143a54310(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a54319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a5431c FUN_143a5431c body=29 status=ok
// SIG undefined FUN_143a5431c(void)

undefined8 FUN_143a5431c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5433a FUN_143a5433a body=282 status=ok
// SIG undefined FUN_143a5433a(void)

undefined8 * FUN_143a5433a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a54454 FUN_143a54454 body=117 status=ok
// SIG undefined FUN_143a54454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a54454(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14817394c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14817394c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a544bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a544ca FUN_143a544ca body=29 status=ok
// SIG undefined FUN_143a544ca(void)

undefined8 FUN_143a544ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a544fc FUN_143a544fc body=93 status=ok
// SIG undefined FUN_143a544fc(void)

void FUN_143a544fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add41c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a5455a FUN_143a5455a body=93 status=ok
// SIG undefined FUN_143a5455a(void)

void FUN_143a5455a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add41c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a545b8 FUN_143a545b8 body=126 status=ok
// SIG undefined FUN_143a545b8(void)

void FUN_143a545b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add41c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a54627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a5463e FUN_143a5463e body=19 status=ok
// SIG undefined FUN_143a5463e(void)

undefined1 FUN_143a5463e(undefined8 param_1,undefined8 param_2)

{
  FUN_148174370(param_2);
  return 1;
}



// FUNCTION 143a54652 FUN_143a54652 body=29 status=ok
// SIG undefined FUN_143a54652(void)

undefined8 FUN_143a54652(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a54684 FUN_143a54684 body=93 status=ok
// SIG undefined FUN_143a54684(void)

void FUN_143a54684(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add4230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a546e2 FUN_143a546e2 body=93 status=ok
// SIG undefined FUN_143a546e2(void)

void FUN_143a546e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add4230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a54740 FUN_143a54740 body=126 status=ok
// SIG undefined FUN_143a54740(void)

void FUN_143a54740(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add4230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a547af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a547c6 FUN_143a547c6 body=19 status=ok
// SIG undefined FUN_143a547c6(void)

undefined1 FUN_143a547c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1481744d0(param_2);
  return 1;
}



// FUNCTION 143a547e6 FUN_143a547e6 body=278 status=ok
// SIG undefined FUN_143a547e6(void)

void FUN_143a547e6(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  local_30 = param_1 + 1;
  FUN_14818184c(lVar4 + 0x10,&local_24);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  *(longlong *)(lVar4 + 8 + (longlong)local_24 * 0x38) = param_1[2];
  if (((longlong *)param_1[0xc] != (longlong *)0x0) &&
     (lVar6 = (**(code **)(*(longlong *)param_1[0xc] + 0xa0))(), lVar6 != 0)) {
    lVar4 = lVar4 + (longlong)local_24 * 0x38;
    lVar6 = *(longlong *)(lVar6 + 0x10);
    lVar5 = *(longlong *)(lVar4 + 0x18);
    if (lVar5 != lVar6) {
      *(longlong *)(lVar4 + 0x18) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar5 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar5;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar10) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar10) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar10);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a54908 FUN_143a54908 body=29 status=ok
// SIG undefined FUN_143a54908(void)

void FUN_143a54908(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a54926 FUN_143a54926 body=57 status=ok
// SIG undefined FUN_143a54926(void)

undefined8 * FUN_143a54926(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add42e0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a54960 FUN_143a54960 body=282 status=ok
// SIG undefined FUN_143a54960(void)

undefined8 * FUN_143a54960(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a54a7a FUN_143a54a7a body=353 status=ok
// SIG undefined FUN_143a54a7a(void)

void FUN_143a54a7a(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
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
  lVar5 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xb0;
  FUN_14818184c(lVar5 + 0x10,&local_24);
  lVar5 = *(longlong *)(lVar5 + 0x10);
  *(undefined8 *)(lVar5 + 8 + (longlong)local_24 * 0x38) = *(undefined8 *)(param_1 + 0xb8);
  if ((*(longlong **)(param_1 + 0x108) != (longlong *)0x0) &&
     (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0xa0))(), lVar7 != 0)) {
    lVar5 = lVar5 + (longlong)local_24 * 0x38;
    lVar7 = *(longlong *)(lVar7 + 0x10);
    lVar6 = *(longlong *)(lVar5 + 0x18);
    if (lVar6 != lVar7) {
      *(longlong *)(lVar5 + 0x18) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar6 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar6 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar6 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar6 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar6;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar11 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar11) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar11 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar11) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a54c10 FUN_143a54c10 body=12 status=ok
// SIG undefined FUN_143a54c10(void)

void FUN_143a54c10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a54c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a54c1c FUN_143a54c1c body=29 status=ok
// SIG undefined FUN_143a54c1c(void)

undefined8 FUN_143a54c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a54c3a FUN_143a54c3a body=282 status=ok
// SIG undefined FUN_143a54c3a(void)

undefined8 * FUN_143a54c3a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a54d54 FUN_143a54d54 body=117 status=ok
// SIG undefined FUN_143a54d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a54d54(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148181d62(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148181d62(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a54dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a54dca FUN_143a54dca body=447 status=ok
// SIG undefined FUN_143a54dca(void)

void FUN_143a54dca(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar4 = param_1[1];
    lVar10 = lVar6 + 0x48;
    if (*(longlong *)(lVar6 + 0x50) != 0) {
      lVar10 = *(longlong *)(lVar6 + 0x50);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(lVar6 + 0x58) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(lVar6 + 0x10) + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar9 * 0x38) == lVar4) {
          if ((lVar10 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          *(longlong *)(lVar10 + 8) = param_1[2];
          lVar6 = *(longlong *)(lVar10 + 0x18);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            LOCK();
            puVar1 = (uint *)(lVar6 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar6 + 8);
              LOCK();
              uVar2 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar2 >> 0x1e & 1) == 0) {
                bVar3 = *(byte *)(lVar6 + 0xd);
                plVar5 = (longlong *)FUN_14001cc68(0x10,8);
                plVar5[1] = lVar6;
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c8;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar5 = (longlong)plVar8;
                    LOCK();
                    bVar11 = plVar8 != DAT_14ca843c0;
                    plVar7 = plVar5;
                    if (bVar11) {
                      plVar8 = DAT_14ca843c0;
                      plVar7 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar7;
                    UNLOCK();
                  } while (bVar11);
                }
                else {
                  do {
                    *plVar5 = (longlong)plVar7;
                    LOCK();
                    bVar11 = plVar7 != DAT_14ca843c8;
                    plVar8 = plVar5;
                    if (bVar11) {
                      plVar7 = DAT_14ca843c8;
                      plVar8 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar8;
                    UNLOCK();
                  } while (bVar11);
                }
              }
            }
          }
          if ((longlong *)param_1[0xc] == (longlong *)0x0) {
            return;
          }
          lVar6 = (**(code **)(*(longlong *)param_1[0xc] + 0xa0))();
          if (lVar6 == 0) {
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x10);
          lVar4 = *(longlong *)(lVar10 + 0x18);
          if (lVar4 == lVar6) {
            return;
          }
          *(longlong *)(lVar10 + 0x18) = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          if (lVar4 == 0) {
            return;
          }
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) != 1) {
            return;
          }
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) != 0) {
            return;
          }
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) != 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
            return;
          }
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar11) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
          return;
        }
        iVar9 = *(int *)(lVar10 + 0x30);
      } while (iVar9 != -1);
    }
  }
  return;
}



// FUNCTION 143a54f9a FUN_143a54f9a body=29 status=ok
// SIG undefined FUN_143a54f9a(void)

void FUN_143a54f9a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a54fb8 FUN_143a54fb8 body=57 status=ok
// SIG undefined FUN_143a54fb8(void)

undefined8 * FUN_143a54fb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add4340;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a54ff2 FUN_143a54ff2 body=282 status=ok
// SIG undefined FUN_143a54ff2(void)

undefined8 * FUN_143a54ff2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a5510c FUN_143a5510c body=92 status=ok
// SIG undefined FUN_143a5510c(void)

void FUN_143a5510c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a54dca(param_1 + 0x15);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a5515e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a55180 FUN_143a55180 body=157 status=ok
// SIG undefined FUN_143a55180(void)

void FUN_143a55180(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a551b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x20);
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 3;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar2;
    param_2[6] = (ulonglong)(puVar2 + 1);
    puVar2[1] = 0;
    *puVar2 = &PTR_LAB_14add4370;
    puVar2[2] = puVar1;
  }
  return;
}



// FUNCTION 143a55228 FUN_143a55228 body=12 status=ok
// SIG undefined FUN_143a55228(void)

void FUN_143a55228(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a55231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a55234 FUN_143a55234 body=29 status=ok
// SIG undefined FUN_143a55234(void)

undefined8 FUN_143a55234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a55252 FUN_143a55252 body=282 status=ok
// SIG undefined FUN_143a55252(void)

undefined8 * FUN_143a55252(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a5536c FUN_143a5536c body=239 status=ok
// SIG undefined FUN_143a5536c(void)

void FUN_143a5536c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (DAT_14ca85164 == '\x01') {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
    if (DAT_14ca85108 < puVar4) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar3 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar4;
    *DAT_14ca85130 = puVar3;
    DAT_14ca85130 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14add4370;
    puVar3[2] = puVar2;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a55450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a55468 FUN_143a55468 body=78 status=ok
// SIG undefined FUN_143a55468(void)

void FUN_143a55468(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1 + 1;
  FUN_145a5d9ca(*param_1 + 0x10,local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a554c2 FUN_143a554c2 body=12 status=ok
// SIG undefined FUN_143a554c2(void)

void FUN_143a554c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a554cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a554ce FUN_143a554ce body=29 status=ok
// SIG undefined FUN_143a554ce(void)

undefined8 FUN_143a554ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a554ec FUN_143a554ec body=282 status=ok
// SIG undefined FUN_143a554ec(void)

undefined8 * FUN_143a554ec(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a55606 FUN_143a55606 body=134 status=ok
// SIG undefined FUN_143a55606(void)

void FUN_143a55606(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_1 + 0xb0;
  FUN_145a5d9ca(*(longlong *)(param_1 + 0xa8) + 0x10,local_1c);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a556c0 FUN_143a556c0 body=12 status=ok
// SIG undefined FUN_143a556c0(void)

void FUN_143a556c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a556c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a556cc FUN_143a556cc body=29 status=ok
// SIG undefined FUN_143a556cc(void)

undefined8 FUN_143a556cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a556ea FUN_143a556ea body=282 status=ok
// SIG undefined FUN_143a556ea(void)

undefined8 * FUN_143a556ea(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a55804 FUN_143a55804 body=117 status=ok
// SIG undefined FUN_143a55804(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a55804(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14592d18c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14592d18c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a5586f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a5587a FUN_143a5587a body=51 status=ok
// SIG undefined FUN_143a5587a(void)

void FUN_143a5587a(undefined8 *param_1)

{
  FUN_1408ed82e(*param_1,param_1[6],param_1[1],*(undefined1 *)(param_1 + 2),
                *(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 4),
                *(undefined1 *)(param_1 + 5));
  return;
}



// FUNCTION 143a558b8 FUN_143a558b8 body=29 status=ok
// SIG undefined FUN_143a558b8(void)

void FUN_143a558b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a558d6 FUN_143a558d6 body=29 status=ok
// SIG undefined FUN_143a558d6(void)

undefined8 FUN_143a558d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a558f4 FUN_143a558f4 body=282 status=ok
// SIG undefined FUN_143a558f4(void)

undefined8 * FUN_143a558f4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a55a0e FUN_143a55a0e body=118 status=ok
// SIG undefined FUN_143a55a0e(void)

void FUN_143a55a0e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1408ed82e(param_1[0x15],param_1[0x1b],param_1[0x16],*(undefined1 *)(param_1 + 0x17),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x19),
                *(undefined1 *)(param_1 + 0x1a));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a55a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a55a84 FUN_143a55a84 body=31 status=ok
// SIG undefined FUN_143a55a84(void)

undefined8 FUN_143a55a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a55afe FUN_143a55afe body=439 status=ok
// SIG undefined FUN_143a55afe(void)

void FUN_143a55afe(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(char *)(*param_1 + 0x10) = (char)param_1[3];
  *(undefined8 *)(*param_1 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x1c);
  *(int *)(*param_1 + 0x1c) = (int)param_1[2];
  FUN_14011fb0c(*param_1 + 0x20);
  if (*(int *)(*param_1 + 0x1c) == 0) {
    return;
  }
  FUN_140661c88(*param_1 + 0x20,param_2,L"UNiagaraDataInterfaceMeshRendererInfo",4,
                (int)param_1[2] * 6,0xd,1,0);
  uVar3 = *(undefined4 *)(*param_1 + 0x30);
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  cVar2 = *(char *)(param_2 + 0x69);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,1);
  }
  lVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0,uVar3,1);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2);
  }
  lVar6 = param_1[2];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = param_1[1];
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(lVar5 + lVar8);
      *(undefined4 *)(lVar7 + lVar8) = *puVar1;
      *(undefined4 *)(lVar7 + 4 + lVar8) = puVar1[1];
      *(undefined4 *)(lVar7 + 8 + lVar8) = puVar1[2];
      *(undefined4 *)(lVar7 + 0xc + lVar8) = puVar1[3];
      *(undefined4 *)(lVar7 + 0x10 + lVar8) = puVar1[4];
      *(undefined4 *)(lVar7 + 0x14 + lVar8) = puVar1[5];
      lVar8 = lVar8 + 0x18;
    } while (puVar1 + 6 != (undefined4 *)(lVar5 + (longlong)(int)lVar6 * 0x18));
  }
  uVar4 = *(undefined8 *)(*param_1 + 0x20);
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143a55c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 143a55cc6 FUN_143a55cc6 body=29 status=ok
// SIG undefined FUN_143a55cc6(void)

void FUN_143a55cc6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a55ce4 FUN_143a55ce4 body=57 status=ok
// SIG undefined FUN_143a55ce4(void)

undefined8 * FUN_143a55ce4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add4fd0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a55d1e FUN_143a55d1e body=282 status=ok
// SIG undefined FUN_143a55d1e(void)

undefined8 * FUN_143a55d1e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a55e38 FUN_143a55e38 body=99 status=ok
// SIG undefined FUN_143a55e38(void)

void FUN_143a55e38(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a55afe(param_1 + 0x15,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a55e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a55e9c FUN_143a55e9c body=29 status=ok
// SIG undefined FUN_143a55e9c(void)

undefined8 FUN_143a55e9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a55ece FUN_143a55ece body=93 status=ok
// SIG undefined FUN_143a55ece(void)

void FUN_143a55ece(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add5040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a55f2c FUN_143a55f2c body=93 status=ok
// SIG undefined FUN_143a55f2c(void)

void FUN_143a55f2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add5040;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a55f8a FUN_143a55f8a body=126 status=ok
// SIG undefined FUN_143a55f8a(void)

void FUN_143a55f8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add5040;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a55ff9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a56012 FUN_143a56012 body=20 status=ok
// SIG undefined FUN_143a56012(void)

undefined1 FUN_143a56012(longlong param_1)

{
  FUN_148176972(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143a56026 FUN_143a56026 body=29 status=ok
// SIG undefined FUN_143a56026(void)

undefined8 FUN_143a56026(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a56058 FUN_143a56058 body=93 status=ok
// SIG undefined FUN_143a56058(void)

void FUN_143a56058(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add50b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a560b6 FUN_143a560b6 body=93 status=ok
// SIG undefined FUN_143a560b6(void)

void FUN_143a560b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add50b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a56114 FUN_143a56114 body=126 status=ok
// SIG undefined FUN_143a56114(void)

void FUN_143a56114(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add50b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a56183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a5619a FUN_143a5619a body=19 status=ok
// SIG undefined FUN_143a5619a(void)

undefined1 FUN_143a5619a(undefined8 param_1,undefined8 param_2)

{
  FUN_148176b02(param_2);
  return 1;
}



// FUNCTION 143a561ae FUN_143a561ae body=29 status=ok
// SIG undefined FUN_143a561ae(void)

undefined8 FUN_143a561ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a561e0 FUN_143a561e0 body=93 status=ok
// SIG undefined FUN_143a561e0(void)

void FUN_143a561e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add5120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a5623e FUN_143a5623e body=93 status=ok
// SIG undefined FUN_143a5623e(void)

void FUN_143a5623e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add5120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a5629c FUN_143a5629c body=126 status=ok
// SIG undefined FUN_143a5629c(void)

void FUN_143a5629c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add5120;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a5630b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a56322 FUN_143a56322 body=19 status=ok
// SIG undefined FUN_143a56322(void)

undefined1 FUN_143a56322(undefined8 param_1,undefined8 param_2)

{
  FUN_148176bf4(param_2);
  return 1;
}



// FUNCTION 143a56342 FUN_143a56342 body=147 status=ok
// SIG undefined FUN_143a56342(void)

void FUN_143a56342(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_30 = param_1 + 6;
  FUN_1481845a0(lVar2 + 0x10,&local_24);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  lVar6 = (longlong)local_24 * 0x98;
  *(int *)(lVar2 + 0x14 + lVar6) = (int)param_1[2];
  *(longlong *)(lVar2 + 0xc + lVar6) = param_1[1];
  *(undefined4 *)(lVar2 + 0x1c + lVar6) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(longlong *)(lVar2 + 0x30 + lVar6) = param_1[5];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar5 = param_1[4];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
  puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar6);
  *puVar1 = (int)param_1[3];
  puVar1[1] = uVar3;
  puVar1[2] = (int)lVar5;
  puVar1[3] = uVar4;
  *(undefined1 *)(lVar2 + 0x38 + lVar6) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a563e0 FUN_143a563e0 body=29 status=ok
// SIG undefined FUN_143a563e0(void)

void FUN_143a563e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a563fe FUN_143a563fe body=29 status=ok
// SIG undefined FUN_143a563fe(void)

undefined8 FUN_143a563fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5641c FUN_143a5641c body=282 status=ok
// SIG undefined FUN_143a5641c(void)

undefined8 * FUN_143a5641c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a56536 FUN_143a56536 body=214 status=ok
// SIG undefined FUN_143a56536(void)

void FUN_143a56536(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
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
  lVar3 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xd8;
  FUN_1481845a0(lVar3 + 0x10,&local_24);
  lVar7 = (longlong)local_24 * 0x98;
  lVar3 = *(longlong *)(lVar3 + 0x10);
  *(undefined4 *)(lVar3 + 0x14 + lVar7) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar3 + 0xc + lVar7) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar3 + 0x1c + lVar7) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined8 *)(lVar3 + 0x30 + lVar7) = *(undefined8 *)(param_1 + 0xd0);
  uVar4 = *(undefined4 *)(param_1 + 0xc4);
  uVar5 = *(undefined4 *)(param_1 + 200);
  uVar6 = *(undefined4 *)(param_1 + 0xcc);
  puVar2 = (undefined4 *)(lVar3 + 0x20 + lVar7);
  *puVar2 = *(undefined4 *)(param_1 + 0xc0);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined1 *)(lVar3 + 0x38 + lVar7) = 1;
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



// FUNCTION 143a56622 FUN_143a56622 body=140 status=ok
// SIG undefined FUN_143a56622(void)

void FUN_143a56622(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 4;
  FUN_1481845a0(lVar1 + 0x10,&local_24);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar2 = (longlong)local_24 * 0x98;
  *(int *)(lVar1 + 0x14 + lVar2) = (int)param_1[2];
  *(longlong *)(lVar1 + 0xc + lVar2) = param_1[1];
  *(undefined4 *)(lVar1 + 0x1c + lVar2) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(lVar1 + 0x18 + lVar2) = (int)param_1[3];
  *(undefined1 *)(lVar1 + 0x38 + lVar2) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a566ba FUN_143a566ba body=29 status=ok
// SIG undefined FUN_143a566ba(void)

void FUN_143a566ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a566d8 FUN_143a566d8 body=29 status=ok
// SIG undefined FUN_143a566d8(void)

undefined8 FUN_143a566d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a566f6 FUN_143a566f6 body=282 status=ok
// SIG undefined FUN_143a566f6(void)

undefined8 * FUN_143a566f6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a56810 FUN_143a56810 body=204 status=ok
// SIG undefined FUN_143a56810(void)

void FUN_143a56810(longlong param_1)

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
  local_30 = param_1 + 200;
  FUN_1481845a0(lVar2 + 0x10,&local_24);
  lVar3 = (longlong)local_24 * 0x98;
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x14 + lVar3) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar2 + 0xc + lVar3) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar2 + 0x1c + lVar3) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined1 *)(lVar2 + 0x38 + lVar3) = 1;
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



// FUNCTION 143a56910 FUN_143a56910 body=12 status=ok
// SIG undefined FUN_143a56910(void)

void FUN_143a56910(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a56919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a5691c FUN_143a5691c body=29 status=ok
// SIG undefined FUN_143a5691c(void)

undefined8 FUN_143a5691c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5693a FUN_143a5693a body=282 status=ok
// SIG undefined FUN_143a5693a(void)

undefined8 * FUN_143a5693a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a56a54 FUN_143a56a54 body=117 status=ok
// SIG undefined FUN_143a56a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a56a54(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148184bdc(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148184bdc(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a56abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a56ad6 FUN_143a56ad6 body=25 status=ok
// SIG undefined FUN_143a56ad6(void)

void FUN_143a56ad6(void)

{
  FUN_14606e4de();
  FUN_14170c56a(&DAT_14cb3c4c0);
  return;
}



// FUNCTION 143a56af0 FUN_143a56af0 body=157 status=ok
// SIG undefined FUN_143a56af0(void)

void FUN_143a56af0(undefined8 *param_1)

{
  undefined8 uVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 3);
  lVar2 = (longlong)local_38;
  _Src = (void *)param_1[2];
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_141828608(uVar1,param_1 + 1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a56b98 FUN_143a56b98 body=29 status=ok
// SIG undefined FUN_143a56b98(void)

void FUN_143a56b98(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a56bb6 FUN_143a56bb6 body=57 status=ok
// SIG undefined FUN_143a56bb6(void)

undefined8 * FUN_143a56bb6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add5380;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a56bf0 FUN_143a56bf0 body=282 status=ok
// SIG undefined FUN_143a56bf0(void)

undefined8 * FUN_143a56bf0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a56d0a FUN_143a56d0a body=223 status=ok
// SIG undefined FUN_143a56d0a(void)

void FUN_143a56d0a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = param_1[0x15];
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0x18);
  lVar3 = (longlong)local_38;
  _Src = (void *)param_1[0x17];
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
  }
  FUN_141828608(uVar2,param_1 + 0x16,&local_40);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a56e08 FUN_143a56e08 body=12 status=ok
// SIG undefined FUN_143a56e08(void)

void FUN_143a56e08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a56e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a56e14 FUN_143a56e14 body=29 status=ok
// SIG undefined FUN_143a56e14(void)

undefined8 FUN_143a56e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a56e32 FUN_143a56e32 body=282 status=ok
// SIG undefined FUN_143a56e32(void)

undefined8 * FUN_143a56e32(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a56f4c FUN_143a56f4c body=117 status=ok
// SIG undefined FUN_143a56f4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a56f4c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140885c3c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140885c3c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a56f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a56fc2 FUN_143a56fc2 body=29 status=ok
// SIG undefined FUN_143a56fc2(void)

undefined8 FUN_143a56fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a56ff4 FUN_143a56ff4 body=93 status=ok
// SIG undefined FUN_143a56ff4(void)

void FUN_143a56ff4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add5480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a57052 FUN_143a57052 body=93 status=ok
// SIG undefined FUN_143a57052(void)

void FUN_143a57052(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add5480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a570b0 FUN_143a570b0 body=126 status=ok
// SIG undefined FUN_143a570b0(void)

void FUN_143a570b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add5480;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a5711f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a57136 FUN_143a57136 body=19 status=ok
// SIG undefined FUN_143a57136(void)

undefined1 FUN_143a57136(undefined8 param_1,undefined8 param_2)

{
  FUN_148178224(param_2);
  return 1;
}



// FUNCTION 143a5714a FUN_143a5714a body=31 status=ok
// SIG undefined FUN_143a5714a(void)

undefined8 FUN_143a5714a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5716e FUN_143a5716e body=31 status=ok
// SIG undefined FUN_143a5716e(void)

undefined8 FUN_143a5716e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a571b6 FUN_143a571b6 body=167 status=ok
// SIG undefined FUN_143a571b6(void)

void FUN_143a571b6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 4;
  FUN_1481882ce(lVar1 + 0x10,&local_24);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar2 = (longlong)local_24 * 0x78;
  *(char *)(lVar1 + 8 + lVar2) = (char)param_1[5];
  *(int *)(lVar1 + 0xc + lVar2) = (int)param_1[1];
  *(undefined4 *)(lVar1 + 0x18 + lVar2) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined8 *)(lVar1 + 0x10 + lVar2) = *(undefined8 *)((longlong)param_1 + 0xc);
  *(undefined8 *)(lVar1 + 0x1c + lVar2) = *(undefined8 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)(lVar1 + 0x24 + lVar2) = *(undefined4 *)((longlong)param_1 + 0x44);
  *(int *)(lVar1 + 0x28 + lVar2) = (int)param_1[3];
  *(undefined4 *)(lVar1 + 0x2c + lVar2) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined1 *)(lVar1 + 0x30 + lVar2) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a57268 FUN_143a57268 body=29 status=ok
// SIG undefined FUN_143a57268(void)

void FUN_143a57268(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a57286 FUN_143a57286 body=335 status=ok
// SIG undefined FUN_143a57286(void)

undefined8 * FUN_143a57286(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14add6040;
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  plVar7 = (longlong *)param_1[0xc];
  if (plVar7 != (longlong *)0x0) {
    param_1[0xc] = 0;
    (**(code **)(*plVar7 + 0x38))();
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xc] + 0x38))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a573d6 FUN_143a573d6 body=282 status=ok
// SIG undefined FUN_143a573d6(void)

undefined8 * FUN_143a573d6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a574f0 FUN_143a574f0 body=548 status=ok
// SIG undefined FUN_143a574f0(void)

void FUN_143a574f0(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
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
  lVar5 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 200;
  FUN_1481882ce(lVar5 + 0x10,&local_24);
  lVar5 = *(longlong *)(lVar5 + 0x10);
  lVar6 = (longlong)local_24 * 0x78;
  *(undefined1 *)(lVar5 + 8 + lVar6) = *(undefined1 *)(param_1 + 0xd0);
  *(undefined4 *)(lVar5 + 0xc + lVar6) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar5 + 0x18 + lVar6) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined8 *)(lVar5 + 0x10 + lVar6) = *(undefined8 *)(param_1 + 0xb4);
  *(undefined8 *)(lVar5 + 0x1c + lVar6) = *(undefined8 *)(param_1 + 0xe4);
  *(undefined4 *)(lVar5 + 0x24 + lVar6) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(lVar5 + 0x28 + lVar6) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(lVar5 + 0x2c + lVar6) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined1 *)(lVar5 + 0x30 + lVar6) = 1;
  lVar5 = *(longlong *)(param_1 + 0x128);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x100);
  if (plVar9 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    (**(code **)(*plVar9 + 0x38))();
    if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x38))();
    }
  }
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a5772a FUN_143a5772a body=166 status=ok
// SIG undefined FUN_143a5772a(void)

void FUN_143a5772a(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 4;
  FUN_1481882ce(lVar1 + 0x10,&local_24);
  lVar1 = *(longlong *)(lVar1 + 0x10) + (longlong)local_24 * 0x78;
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x44);
  *(undefined8 *)(lVar1 + 0x1c) = *(undefined8 *)((longlong)param_1 + 0x3c);
  *(longlong *)(lVar1 + 0x10) = param_1[1];
  *(int *)(lVar1 + 0x18) = (int)param_1[2];
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(int *)(lVar1 + 0x2c) = (int)param_1[3];
  *(undefined1 *)(lVar1 + 0x30) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14011fb0c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 143a577dc FUN_143a577dc body=29 status=ok
// SIG undefined FUN_143a577dc(void)

void FUN_143a577dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a577fa FUN_143a577fa body=335 status=ok
// SIG undefined FUN_143a577fa(void)

undefined8 * FUN_143a577fa(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14add6070;
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  plVar7 = (longlong *)param_1[0xc];
  if (plVar7 != (longlong *)0x0) {
    param_1[0xc] = 0;
    (**(code **)(*plVar7 + 0x38))();
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xc] + 0x38))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5794a FUN_143a5794a body=282 status=ok
// SIG undefined FUN_143a5794a(void)

undefined8 * FUN_143a5794a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a57a64 FUN_143a57a64 body=542 status=ok
// SIG undefined FUN_143a57a64(void)

void FUN_143a57a64(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
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
  lVar8 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 200;
  FUN_1481882ce(lVar8 + 0x10,&local_24);
  lVar8 = *(longlong *)(lVar8 + 0x10) + (longlong)local_24 * 0x78;
  *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(param_1 + 0xec);
  *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)(param_1 + 0xe4);
  *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined1 *)(lVar8 + 0x30) = 1;
  FUN_14011fb0c();
  lVar8 = *(longlong *)(param_1 + 0x128);
  if (lVar8 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar8 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar8;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar9) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar8 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar8;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar9) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar9 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar9) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x100);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    (**(code **)(*plVar7 + 0x38))();
    if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x38))();
    }
  }
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a57cb6 FUN_143a57cb6 body=12 status=ok
// SIG undefined FUN_143a57cb6(void)

void FUN_143a57cb6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a57cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a57cc2 FUN_143a57cc2 body=29 status=ok
// SIG undefined FUN_143a57cc2(void)

undefined8 FUN_143a57cc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a57ce0 FUN_143a57ce0 body=282 status=ok
// SIG undefined FUN_143a57ce0(void)

undefined8 * FUN_143a57ce0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a57dfa FUN_143a57dfa body=117 status=ok
// SIG undefined FUN_143a57dfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a57dfa(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14818894e(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14818894e(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a57e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a57e70 FUN_143a57e70 body=31 status=ok
// SIG undefined FUN_143a57e70(void)

undefined8 FUN_143a57e70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a57eea FUN_143a57eea body=114 status=ok
// SIG undefined FUN_143a57eea(void)

void FUN_143a57eea(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 143a57f7a FUN_143a57f7a body=12 status=ok
// SIG undefined FUN_143a57f7a(void)

void FUN_143a57f7a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a57f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a57f86 FUN_143a57f86 body=29 status=ok
// SIG undefined FUN_143a57f86(void)

undefined8 FUN_143a57f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a57fa4 FUN_143a57fa4 body=282 status=ok
// SIG undefined FUN_143a57fa4(void)

undefined8 * FUN_143a57fa4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a580be FUN_143a580be body=117 status=ok
// SIG undefined FUN_143a580be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a580be(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1411b411c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1411b411c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a58105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a58134 FUN_143a58134 body=642 status=ok
// SIG undefined FUN_143a58134(void)

void FUN_143a58134(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined1 local_8c;
  uint local_84;
  ulonglong local_80 [9];
  
  local_80[8] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
    lVar1 = param_1[1];
    lVar8 = lVar4 + 0x48;
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar8 = *(longlong *)(lVar4 + 0x50);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar4 + 0x58) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = *(longlong *)(lVar4 + 0x10) + (longlong)iVar5 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar5 * 0x50) == lVar1) {
          if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
            local_98 = (undefined **)0x14add6170;
            local_90 = 0xd;
            local_8c = 0;
            uVar2 = FUN_14001a6c0(&local_98,1);
            FUN_14047abb0(&local_98,uVar2);
            local_98 = &PTR_FUN_14a37f830;
            local_80[0] = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_80[3] = 0;
            local_80[4] = 0;
            local_80[5] = 0;
            local_80[6] = 0;
            local_80[7] = 0;
            local_a8 = param_1[4];
            local_c0 = &local_a8;
            local_a0 = 1;
            local_b4 = 0;
            local_ac = 0;
            local_c8 = 0;
            FUN_1431ed020(&local_98,param_2,*(undefined8 *)(lVar8 + 0x28));
            local_a8 = 0;
            local_a0 = 0;
            FUN_14007658c(&DAT_14ca850c8,&local_a8,5);
            (**(code **)(*DAT_14ca83900 + 0x370))();
            local_a8 = 0;
            local_a0 = 0;
            FUN_14007658c(&DAT_14ca850c8,&local_a8,5);
            (**(code **)(*DAT_14ca83900 + 0x328))();
            _Src = (void *)FUN_1431ed846(&local_98,&local_a8,&local_b4);
            lVar4 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 8))();
            iVar5 = *(int *)((longlong)&DAT_14c873428 +
                            (ulonglong)((uint)*(byte *)(lVar4 + 0x33) * 0x30));
            uVar3 = *(int *)(lVar8 + 8) * iVar5 * *(int *)(lVar8 + 0xc);
            lVar4 = param_1[3];
            iVar6 = *(int *)(lVar4 + 8);
            *(uint *)(lVar4 + 8) = iVar6 + uVar3;
            if ((uint)(*(int *)(lVar4 + 0xc) - iVar6) < uVar3) {
              FUN_1447403be();
            }
            if (0 < *(int *)(lVar8 + 0xc)) {
              uVar3 = (int)local_a8 * iVar5;
              iVar6 = 0;
              do {
                uVar7 = *(int *)(lVar8 + 8) * iVar5;
                memcpy((void *)((ulonglong)(uVar7 * iVar6) + *(longlong *)param_1[3]),_Src,
                       (ulonglong)uVar7);
                _Src = (void *)((longlong)_Src + (ulonglong)uVar3);
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar8 + 0xc));
            }
            (**(code **)(*DAT_14ca83900 + 0x488))(DAT_14ca83900,&DAT_14ca85100,local_80[local_84]);
            FUN_145bf0f7a(&local_98);
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x48);
      } while (iVar5 != -1);
    }
  }
  if ((local_80[8] ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a583c8 FUN_143a583c8 body=29 status=ok
// SIG undefined FUN_143a583c8(void)

void FUN_143a583c8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a583e6 FUN_143a583e6 body=29 status=ok
// SIG undefined FUN_143a583e6(void)

undefined8 FUN_143a583e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a58404 FUN_143a58404 body=282 status=ok
// SIG undefined FUN_143a58404(void)

undefined8 * FUN_143a58404(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a5851e FUN_143a5851e body=105 status=ok
// SIG undefined FUN_143a5851e(void)

void FUN_143a5851e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a58134(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a58134(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a58561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a58588 FUN_143a58588 body=585 status=ok
// SIG undefined FUN_143a58588(void)

void FUN_143a58588(byte *param_1,undefined8 param_2)

{
  int iVar1;
  void *_Dst;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  size_t _Size;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  uint local_4c;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    lVar6 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x50);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar3 + 0x58) - 1U &
                             (int)lVar7 + (int)((ulonglong)lVar7 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 0x50) == lVar7) {
          if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
            iVar4 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)*param_1 * 0x30));
            local_48 = 0;
            uStack_40 = 0;
            lVar3 = *(longlong *)(param_1 + 0x20);
            iVar1 = *(int *)(lVar3 + 0x14);
            if (0 < iVar1) {
              uVar2 = *(int *)(lVar6 + 8) * iVar4 * *(int *)(lVar6 + 0xc);
              uStack_40 = (ulonglong)uVar2;
              if (uVar2 != 0) {
                FUN_1447403be(&local_48,0);
                lVar3 = *(longlong *)(param_1 + 0x20);
                iVar1 = *(int *)(lVar3 + 0x14);
              }
              lVar7 = *(longlong *)(lVar3 + 0x40);
              if (lVar7 == 0) {
                if (*(int *)(lVar3 + 0x10) < 1) {
                  lVar7 = 0;
                }
                else {
                  FUN_14143acfc(lVar3 + 0x18,lVar3 + 0x40,1);
                  lVar7 = *(longlong *)(lVar3 + 0x40);
                }
              }
              local_68 = 0;
              local_70 = (uint *)((ulonglong)local_70._4_4_ << 0x20);
              local_78 = (longlong)iVar1;
              FUN_140aa9920(*(undefined8 *)(param_1 + 0x28),local_48,(longlong)(int)uStack_40,lVar7)
              ;
            }
            local_60 = 1;
            local_68 = CONCAT71(local_68._1_7_,1);
            local_70 = &local_4c;
            local_58 = 0;
            local_78 = CONCAT44(local_78._4_4_,1);
            _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x430))
                                     (DAT_14ca83900,param_2,*(undefined8 *)(lVar6 + 0x28),0);
            iVar1 = *(int *)(lVar6 + 8);
            if ((int)uStack_40 < 1) {
              lVar3 = *(longlong *)(param_1 + 0x20);
              plVar5 = (longlong *)(lVar3 + 0x40);
              if ((*(longlong *)(lVar3 + 0x40) == 0) && (0 < *(int *)(lVar3 + 0x10))) {
                FUN_14143acfc(lVar3 + 0x18,plVar5,1);
              }
            }
            else {
              plVar5 = &local_48;
            }
            if (0 < *(int *)(lVar6 + 0xc)) {
              _Src = (void *)*plVar5;
              _Size = (size_t)(iVar4 * iVar1);
              iVar4 = 0;
              do {
                memcpy(_Dst,_Src,_Size);
                _Src = (void *)((longlong)_Src + _Size);
                _Dst = (void *)((longlong)_Dst + (ulonglong)local_4c);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(lVar6 + 0xc));
            }
            local_70 = (uint *)CONCAT71(local_70._1_7_,1);
            local_78 = CONCAT71(local_78._1_7_,1);
            (**(code **)(*DAT_14ca83900 + 0x438))
                      (DAT_14ca83900,param_2,*(undefined8 *)(lVar6 + 0x28),0);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x48);
      } while (iVar4 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a587e2 FUN_143a587e2 body=29 status=ok
// SIG undefined FUN_143a587e2(void)

void FUN_143a587e2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a58800 FUN_143a58800 body=29 status=ok
// SIG undefined FUN_143a58800(void)

undefined8 FUN_143a58800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5881e FUN_143a5881e body=282 status=ok
// SIG undefined FUN_143a5881e(void)

undefined8 * FUN_143a5881e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a58938 FUN_143a58938 body=105 status=ok
// SIG undefined FUN_143a58938(void)

void FUN_143a58938(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a58588(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a58588(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a5897b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a589a2 FUN_143a589a2 body=1399 status=ok
// SIG undefined FUN_143a589a2(void)

void FUN_143a589a2(longlong *param_1)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  
  lVar7 = *param_1;
  lVar9 = param_1[1];
  plVar11 = (longlong *)(lVar7 + 0x10);
  uVar14 = (int)((ulonglong)lVar9 >> 0x20) * 0x17 + (int)lVar9;
  iVar13 = *(int *)(lVar7 + 0x18);
  iVar5 = *(int *)(lVar7 + 0x44);
  if (iVar13 != iVar5) {
    lVar16 = lVar7 + 0x48;
    if (*(longlong *)(lVar7 + 0x50) != 0) {
      lVar16 = *(longlong *)(lVar7 + 0x50);
    }
    iVar15 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar7 + 0x58) - 1U & uVar14) * 4);
    if (iVar15 != -1) {
      do {
        lVar16 = *plVar11 + (longlong)iVar15 * 0x50;
        if (*(longlong *)(*plVar11 + (longlong)iVar15 * 0x50) == lVar9) {
          if (lVar16 != 0) goto LAB_143a58a77;
          break;
        }
        iVar15 = *(int *)(lVar16 + 0x48);
      } while (iVar15 != -1);
    }
  }
  if (iVar5 == 0) {
    *(int *)(lVar7 + 0x18) = iVar13 + 1;
    if (*(int *)(lVar7 + 0x1c) == iVar13) {
      FUN_1406fba42(plVar11,iVar13);
    }
    lVar16 = (longlong)iVar13;
    iVar5 = FUN_144a54ea4(lVar7 + 0x20,1);
    lVar9 = *(longlong *)(lVar7 + 0x30);
    if (*(longlong *)(lVar7 + 0x30) == 0) {
      lVar9 = lVar7 + 0x20;
    }
    iVar15 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar15 = iVar5;
    }
    bVar3 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)(lVar9 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  else {
    iVar13 = *(int *)(lVar7 + 0x40);
    lVar16 = (longlong)iVar13;
    iVar15 = *(int *)(*(longlong *)(lVar7 + 0x10) + 4 + lVar16 * 0x50);
    *(int *)(lVar7 + 0x40) = iVar15;
    *(int *)(lVar7 + 0x44) = iVar5 + -1;
    if (iVar5 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + (longlong)iVar15 * 0x50) = 0xffffffff;
    }
  }
  lVar9 = lVar7 + 0x20;
  if (*(longlong *)(lVar7 + 0x30) != 0) {
    lVar9 = *(longlong *)(lVar7 + 0x30);
  }
  iVar5 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar5 = iVar13;
  }
  puVar1 = (uint *)(lVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  iVar5 = 1;
  lVar9 = *(longlong *)(lVar7 + 0x10);
  lVar16 = lVar16 * 0x50;
  _Src = (void *)(lVar9 + lVar16);
  lVar4 = param_1[1];
  *(longlong *)(lVar9 + lVar16) = lVar4;
  *(undefined8 *)(lVar9 + 8 + lVar16) = 0;
  *(undefined8 *)(lVar9 + 0xd + lVar16) = 0;
  *(undefined4 *)(lVar9 + 0x15 + lVar16) = 1;
  puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar9 + 0x40 + lVar16) = 0;
  *(undefined4 *)(lVar9 + 0x48 + lVar16) = 0xffffffff;
  uVar12 = *(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x44);
  if (1 < uVar12) {
    lVar9 = lVar7 + 0x48;
    if (*(longlong *)(lVar7 + 0x50) != 0) {
      lVar9 = *(longlong *)(lVar7 + 0x50);
    }
    iVar15 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar7 + 0x58) - 1U & uVar14) * 4);
    if (iVar15 != -1) {
      do {
        _Dst = (void *)(*plVar11 + (longlong)iVar15 * 0x50);
        if (*(longlong *)(*plVar11 + (longlong)iVar15 * 0x50) == lVar4) {
          FUN_14818145a((longlong)_Dst + 8);
          memmove(_Dst,_Src,0x48);
          FUN_1411b4226(plVar11,iVar13);
          goto LAB_143a58dfe;
        }
        iVar15 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar15 != -1);
    }
  }
  if (3 < uVar12) {
    uVar10 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar9 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar5 <= *(int *)(lVar7 + 0x58))) {
    uVar14 = *(int *)(lVar7 + 0x58) - 1U & uVar14;
    *(uint *)((longlong)_Src + 0x4c) = uVar14;
    lVar9 = *(longlong *)(lVar7 + 0x50);
    if (*(longlong *)(lVar7 + 0x50) == 0) {
      lVar9 = lVar7 + 0x48;
    }
    *(undefined4 *)((longlong)_Src + 0x48) =
         *(undefined4 *)
          (lVar9 + ((longlong)*(int *)(lVar7 + 0x58) - 1U & (longlong)(int)uVar14) * 4);
    lVar9 = *(longlong *)(lVar7 + 0x50);
    if (*(longlong *)(lVar7 + 0x50) == 0) {
      lVar9 = lVar7 + 0x48;
    }
    *(int *)(lVar9 + ((longlong)*(int *)(lVar7 + 0x58) - 1U & (longlong)(int)uVar14) * 4) = iVar13;
  }
  else {
    *(int *)(lVar7 + 0x58) = iVar5;
    FUN_141828c28(plVar11);
  }
LAB_143a58dfe:
  lVar16 = *plVar11 + (longlong)iVar13 * 0x50;
LAB_143a58a77:
  *(longlong *)(lVar16 + 8) = param_1[2];
  *(undefined4 *)(lVar16 + 0x10) = 1;
  *(char *)(lVar16 + 0x14) = (char)param_1[4];
  *(undefined1 *)(lVar16 + 0x15) = *(undefined1 *)((longlong)param_1 + 0x21);
  lVar7 = *(longlong *)(lVar16 + 0x20);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar16 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar7;
        plVar11 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar11;
            LOCK();
            bVar17 = plVar11 != DAT_14ca843c0;
            plVar8 = plVar6;
            if (bVar17) {
              plVar11 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar17);
        }
        else {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar17 = plVar8 != DAT_14ca843c8;
            plVar11 = plVar6;
            if (bVar17) {
              plVar8 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar17);
        }
      }
    }
  }
  lVar7 = *(longlong *)(lVar16 + 0x28);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar16 + 0x28) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar7;
        plVar11 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar11;
            LOCK();
            bVar17 = plVar11 != DAT_14ca843c0;
            plVar8 = plVar6;
            if (bVar17) {
              plVar11 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar17);
        }
        else {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar17 = plVar8 != DAT_14ca843c8;
            plVar11 = plVar6;
            if (bVar17) {
              plVar8 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar17);
        }
      }
    }
  }
  if (param_1[0xd] != 0) {
    plVar11 = *(longlong **)(param_1[0xd] + 0x10);
    if (plVar11 == (longlong *)0x0) {
      uVar14 = 0;
    }
    else {
      lVar7 = (**(code **)(*plVar11 + 8))();
      uVar14 = (uint)*(byte *)(lVar7 + 0x30);
    }
    *(uint *)(lVar16 + 0x10) = uVar14;
    lVar7 = (**(code **)(*(longlong *)param_1[0xd] + 0xa0))();
    if (lVar7 != 0) {
      lVar9 = *(longlong *)(lVar7 + 0x18);
      lVar4 = *(longlong *)(lVar16 + 0x20);
      if (lVar4 != lVar9) {
        *(longlong *)(lVar16 + 0x20) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar14 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar14 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar4 + 0xd);
              plVar6 = (longlong *)FUN_14001cc68(0x10,8);
              plVar6[1] = lVar4;
              plVar11 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar6 = (longlong)plVar11;
                  LOCK();
                  bVar17 = plVar11 != DAT_14ca843c0;
                  plVar8 = plVar6;
                  if (bVar17) {
                    plVar11 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar8;
                  UNLOCK();
                } while (bVar17);
              }
              else {
                do {
                  *plVar6 = (longlong)plVar8;
                  LOCK();
                  bVar17 = plVar8 != DAT_14ca843c8;
                  plVar11 = plVar6;
                  if (bVar17) {
                    plVar8 = DAT_14ca843c8;
                    plVar11 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar11;
                  UNLOCK();
                } while (bVar17);
              }
            }
          }
        }
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      lVar9 = *(longlong *)(lVar16 + 0x28);
      if (lVar9 != lVar7) {
        *(longlong *)(lVar16 + 0x28) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        if (lVar9 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar9 + 8);
          uVar14 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar14 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar9 + 8);
            LOCK();
            uVar14 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar14 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar9 + 0xd);
              plVar6 = (longlong *)FUN_14001cc68(0x10,8);
              plVar6[1] = lVar9;
              plVar11 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar6 = (longlong)plVar11;
                  LOCK();
                  bVar17 = plVar11 != DAT_14ca843c0;
                  plVar8 = plVar6;
                  if (bVar17) {
                    plVar11 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar8;
                  UNLOCK();
                } while (bVar17);
              }
              else {
                do {
                  *plVar6 = (longlong)plVar8;
                  LOCK();
                  bVar17 = plVar8 != DAT_14ca843c8;
                  plVar11 = plVar6;
                  if (bVar17) {
                    plVar8 = DAT_14ca843c8;
                    plVar11 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar11;
                  UNLOCK();
                } while (bVar17);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143a58f2a FUN_143a58f2a body=29 status=ok
// SIG undefined FUN_143a58f2a(void)

void FUN_143a58f2a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a58f48 FUN_143a58f48 body=57 status=ok
// SIG undefined FUN_143a58f48(void)

undefined8 * FUN_143a58f48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add6220;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a58f82 FUN_143a58f82 body=282 status=ok
// SIG undefined FUN_143a58f82(void)

undefined8 * FUN_143a58f82(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a5909c FUN_143a5909c body=92 status=ok
// SIG undefined FUN_143a5909c(void)

void FUN_143a5909c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a589a2(param_1 + 0x15);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a590ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a59122 FUN_143a59122 body=12 status=ok
// SIG undefined FUN_143a59122(void)

void FUN_143a59122(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a5912b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a5912e FUN_143a5912e body=29 status=ok
// SIG undefined FUN_143a5912e(void)

undefined8 FUN_143a5912e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5914c FUN_143a5914c body=282 status=ok
// SIG undefined FUN_143a5914c(void)

undefined8 * FUN_143a5914c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a59266 FUN_143a59266 body=117 status=ok
// SIG undefined FUN_143a59266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a59266(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14818979c(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14818979c(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a592d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a592dc FUN_143a592dc body=569 status=ok
// SIG undefined FUN_143a592dc(void)

void FUN_143a592dc(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)
           FUN_148189942(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  *plVar6 = param_1[2];
  *(int *)(plVar6 + 1) = (int)param_1[3];
  *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
  lVar8 = plVar6[3];
  if (lVar8 != 0) {
    plVar6[3] = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar8 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar8;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar7;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  pplVar11 = (longlong **)(plVar6 + 4);
  plVar10 = (longlong *)plVar6[4];
  if (plVar10 != (longlong *)0x0) {
    *pplVar11 = (longlong *)0x0;
    (**(code **)(*plVar10 + 0x38))();
  }
  if (param_1[0xd] != 0) {
    plVar10 = *(longlong **)(param_1[0xd] + 0x10);
    if (plVar10 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar8 = (**(code **)(*plVar10 + 8))();
      uVar5 = (uint)*(byte *)(lVar8 + 0x30);
    }
    *(uint *)((longlong)plVar6 + 0xc) = uVar5;
    lVar8 = (**(code **)(*(longlong *)param_1[0xd] + 0xa8))();
    if (lVar8 != 0) {
      lVar3 = *(longlong *)(lVar8 + 0x18);
      lVar4 = plVar6[3];
      if (lVar4 != lVar3) {
        plVar6[3] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar5 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar9 = (longlong *)FUN_14001cc68(0x10,8);
              plVar9[1] = lVar4;
              plVar6 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar9 = (longlong)plVar6;
                  LOCK();
                  bVar12 = plVar6 != DAT_14ca843c0;
                  plVar10 = plVar9;
                  if (bVar12) {
                    plVar6 = DAT_14ca843c0;
                    plVar10 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar10;
                  UNLOCK();
                } while (bVar12);
              }
              else {
                do {
                  *plVar9 = (longlong)plVar10;
                  LOCK();
                  bVar12 = plVar10 != DAT_14ca843c8;
                  plVar6 = plVar9;
                  if (bVar12) {
                    plVar10 = DAT_14ca843c8;
                    plVar6 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar6;
                  UNLOCK();
                } while (bVar12);
              }
            }
          }
        }
      }
      FUN_1447ec05f(&local_38,*(undefined8 *)(lVar8 + 0x10),L"NiagaraRenderTarget2DArray");
      if (pplVar11 != &local_38) {
        plVar6 = *pplVar11;
        *pplVar11 = local_38;
        local_38 = (longlong *)0x0;
        if (plVar6 == (longlong *)0x0) goto LAB_143a594c0;
        (**(code **)(*plVar6 + 0x38))();
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x38))();
      }
    }
  }
LAB_143a594c0:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a59526 FUN_143a59526 body=29 status=ok
// SIG undefined FUN_143a59526(void)

void FUN_143a59526(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a59544 FUN_143a59544 body=57 status=ok
// SIG undefined FUN_143a59544(void)

undefined8 * FUN_143a59544(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add6360;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5957e FUN_143a5957e body=282 status=ok
// SIG undefined FUN_143a5957e(void)

undefined8 * FUN_143a5957e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a59698 FUN_143a59698 body=92 status=ok
// SIG undefined FUN_143a59698(void)

void FUN_143a59698(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a592dc(param_1 + 0x15);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a596ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a596f4 FUN_143a596f4 body=29 status=ok
// SIG undefined FUN_143a596f4(void)

undefined8 FUN_143a596f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a59726 FUN_143a59726 body=85 status=ok
// SIG undefined FUN_143a59726(void)

void FUN_143a59726(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add63d0;
  return;
}



// FUNCTION 143a5977c FUN_143a5977c body=85 status=ok
// SIG undefined FUN_143a5977c(void)

void FUN_143a5977c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14add63d0;
  return;
}



// FUNCTION 143a597d2 FUN_143a597d2 body=118 status=ok
// SIG undefined FUN_143a597d2(void)

void FUN_143a597d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14add63d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a59839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a59850 FUN_143a59850 body=19 status=ok
// SIG undefined FUN_143a59850(void)

undefined1 FUN_143a59850(undefined8 param_1,undefined8 param_2)

{
  FUN_143a59864(param_2);
  return 1;
}



// FUNCTION 143a59864 FUN_143a59864 body=150 status=ok
// SIG undefined FUN_143a59864(void)

void FUN_143a59864(undefined8 *param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3cf78) {
    FUN_144b3d300(&DAT_14cb3cf78);
    if (DAT_14cb3cf78 == -1) {
      DAT_14cb3cf70 = FUN_147d719a9();
      _Init_thread_footer(&DAT_14cb3cf78);
    }
  }
  if ((DAT_14cb3cf70 != 0) && (*(int *)(param_1 + 1) == 1)) {
    iVar1 = FUN_1401e9588(DAT_14cb3cf70,*param_1,0);
    if (iVar1 == -1) {
      DAT_14cb3c790 = 0;
    }
    else {
      DAT_14cb3c790 = 1;
      DAT_14c76288c = iVar1;
    }
  }
  return;
}



// FUNCTION 143a59924 FUN_143a59924 body=12 status=ok
// SIG undefined FUN_143a59924(void)

void FUN_143a59924(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a5992d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a59930 FUN_143a59930 body=29 status=ok
// SIG undefined FUN_143a59930(void)

undefined8 FUN_143a59930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a5994e FUN_143a5994e body=282 status=ok
// SIG undefined FUN_143a5994e(void)

undefined8 * FUN_143a5994e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a59a68 FUN_143a59a68 body=117 status=ok
// SIG undefined FUN_143a59a68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a59a68(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14818a646(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14818a646(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a59ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a59ade FUN_143a59ade body=561 status=ok
// SIG undefined FUN_143a59ade(void)

void FUN_143a59ade(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  bool bVar12;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar6 = (undefined4 *)
           FUN_14818a7d2(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  *puVar6 = (int)param_1[2];
  puVar6[1] = 1;
  lVar8 = *(longlong *)(puVar6 + 4);
  if (lVar8 != 0) {
    *(undefined8 *)(puVar6 + 4) = 0;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar8 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar8 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar8;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar7;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  pplVar11 = (longlong **)(puVar6 + 6);
  plVar10 = *(longlong **)(puVar6 + 6);
  if (plVar10 != (longlong *)0x0) {
    *pplVar11 = (longlong *)0x0;
    (**(code **)(*plVar10 + 0x38))();
  }
  if (param_1[0xc] != 0) {
    plVar10 = *(longlong **)(param_1[0xc] + 0x10);
    if (plVar10 == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar8 = (**(code **)(*plVar10 + 8))();
      uVar5 = (uint)*(byte *)(lVar8 + 0x30);
    }
    puVar6[1] = uVar5;
    lVar8 = (**(code **)(*(longlong *)param_1[0xc] + 0xb8))();
    if (lVar8 != 0) {
      lVar3 = *(longlong *)(lVar8 + 0x18);
      lVar4 = *(longlong *)(puVar6 + 4);
      if (lVar4 != lVar3) {
        *(longlong *)(puVar6 + 4) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar4 + 8);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar4 + 8);
            LOCK();
            uVar5 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(lVar4 + 0xd);
              plVar7 = (longlong *)FUN_14001cc68(0x10,8);
              plVar7[1] = lVar4;
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar7 = (longlong)plVar10;
                  LOCK();
                  bVar12 = plVar10 != DAT_14ca843c0;
                  plVar9 = plVar7;
                  if (bVar12) {
                    plVar10 = DAT_14ca843c0;
                    plVar9 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar9;
                  UNLOCK();
                } while (bVar12);
              }
              else {
                do {
                  *plVar7 = (longlong)plVar9;
                  LOCK();
                  bVar12 = plVar9 != DAT_14ca843c8;
                  plVar10 = plVar7;
                  if (bVar12) {
                    plVar9 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar12);
              }
            }
          }
        }
      }
      FUN_1447ec05f(&local_38,*(undefined8 *)(lVar8 + 0x10),L"NiagaraRenderTargetCube");
      if (pplVar11 != &local_38) {
        plVar10 = *pplVar11;
        *pplVar11 = local_38;
        local_38 = (longlong *)0x0;
        if (plVar10 == (longlong *)0x0) goto LAB_143a59cba;
        (**(code **)(*plVar10 + 0x38))();
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x38))();
      }
    }
  }
LAB_143a59cba:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a59d20 FUN_143a59d20 body=29 status=ok
// SIG undefined FUN_143a59d20(void)

void FUN_143a59d20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a59d3e FUN_143a59d3e body=57 status=ok
// SIG undefined FUN_143a59d3e(void)

undefined8 * FUN_143a59d3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14add6560;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a59d78 FUN_143a59d78 body=282 status=ok
// SIG undefined FUN_143a59d78(void)

undefined8 * FUN_143a59d78(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a54109);
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



// FUNCTION 143a59e92 FUN_143a59e92 body=92 status=ok
// SIG undefined FUN_143a59e92(void)

void FUN_143a59e92(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a59ade(param_1 + 0x15);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a59ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a59eee FUN_143a59eee body=7035 status=ok
// SIG undefined FUN_143a59eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a59eee(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined **ppuStack_d0;
  undefined8 local_c8;
  code **local_b8 [2];
  code *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98 [2];
  undefined **local_88;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cb3c0e0);
  if (cVar1 == '\0') {
    _DAT_14cb3c0e0 = 0;
    uRam000000014cb3c0e8 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  local_c8 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adcd810,1,0);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c108,L"fx.Niagara.Grid3D.UseRGBAGrid",&DAT_14c762874,
                L"Use RGBA textures when possible\n");
  atexit(FUN_143a44957);
  FUN_1400b22c2(&local_a8,L"rInvalid resolution in tiff: zero or negative.");
  FUN_1400b22c2(local_98,&DAT_149e430c3);
  FUN_1400b22c2(&local_88,&DAT_149e430b6);
  FUN_1400b22c2(local_78,&DAT_14a157a0d);
  local_b8[1] = (code **)local_68;
  local_b8[0] = &local_a8;
  FUN_141469cae(&DAT_14cb3c118);
  lVar4 = 0x40;
  do {
    if (*(longlong *)((longlong)local_b8 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0);
  atexit(FUN_143a4499c);
  local_a8 = (code *)&DAT_14a19662d;
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adcde40,1,0);
  local_a8 = (code *)0x14a50b91b;
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c140 = (ulonglong)uVar2;
  local_a8 = (code *)0x14a52bc68;
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c148 = (ulonglong)uVar2;
  local_a8 = (code *)0x14ad8c52c;
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c150 = (ulonglong)uVar2;
  local_a8 = (code *)0x14ad8c536;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c158 = (ulonglong)uVar2;
  local_a8 = (code *)0x14ad8c54f;
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c160 = (ulonglong)uVar2;
  local_a8 = (code *)0x14ad8c559;
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c168 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6673;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c170 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add665f;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c178 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add669d;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c180 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcde68;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c188 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66ab;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c190 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcde73;
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c198 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb3c1a0,L"TextureSizeAndInvSize_");
  atexit((_func_5014 *)&LAB_143a449cd);
  FUN_140056680(&DAT_14cb3c1b0,L"TextureUAV_");
  atexit((_func_5014 *)&LAB_143a449de);
  DAT_14cb3c1c0 = 0;
  DAT_14cb3c1c8 = FUN_144830b78(&DAT_14cb3c1c8,&DAT_14cb42160);
  local_c8 = 1;
  ppuStack_d0 = &PTR_FUN_14adcea60;
  local_d8 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adcea80,2,0);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c218,L"fx.Niagara.Landscape.MaxRegionSearchCount",&DAT_14c762878,
                L"The maximum number of collision components that will be evaluated for capture by the Landscape DI."
               );
  atexit(FUN_143a4623f);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c228,L"fx.Niagara.Landscape.MaxRegionCaptureCount",&DAT_14c76287c,
                L"The maximum number of collision components that will be captured by the Landscape DI."
               );
  atexit(FUN_143a46284);
  FUN_1446f470e(&DAT_14cb3c238,L"GetBaseColor",1);
  FUN_1446f470e(&DAT_14cb3c240,L"GetHeight",1);
  FUN_1446f470e(&DAT_14cb3c248,L"GetWorldNormal",1);
  FUN_1446f470e(&DAT_14cb3c250,L"GetPhysicalMaterialIndex",1);
  ppuStack_d0 = (undefined **)0x0;
  local_c8 = 0;
  local_d8 = 1;
  FUN_14282b410(L"/Script/Niagara",0,0,&PTR_FUN_14adcefb0);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adcf520,1,0);
  local_a8 = (code *)0x14adcf548;
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c290 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcf555;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c298 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add680e;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c2a0 = (ulonglong)uVar2;
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adcfab0,1,0);
  FUN_140056680(&DAT_14cb3c2c0,L"_MaxNeighborsPerCellValue");
  atexit((_func_5014 *)&LAB_143a48a0d);
  FUN_140056680(&DAT_14cb3c2d0,L"_ParticleNeighbors");
  atexit((_func_5014 *)&LAB_143a48a1e);
  FUN_140056680(&DAT_14cb3c2e0,L"_ParticleNeighborCount");
  atexit((_func_5014 *)&LAB_143a48a2f);
  FUN_140056680(&DAT_14cb3c2f0,L"_OutputParticleNeighbors");
  atexit((_func_5014 *)&LAB_143a48a40);
  FUN_140056680(&DAT_14cb3c300,L"_OutputParticleNeighborCount");
  atexit((_func_5014 *)&LAB_143a48a51);
  local_a8 = (code *)0x14adcd044;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c310 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcf5b0;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c318 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcfbcc;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c320 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcfbe6;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c328 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcfbfa;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c330 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcfc0e;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c338 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcfc27;
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c340 = (ulonglong)uVar2;
  local_a8 = (code *)0x14adcfc40;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c348 = (ulonglong)uVar2;
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c350,L"fx.MaxNiagaraNeighborGridCells",&DAT_14c762880);
  atexit(FUN_143a48a62);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add02f0,1,0);
  FUN_1446f470e(&DAT_14cb3c378,L"QueryOcclusionFactorWithRectangleGPU",1);
  FUN_1446f470e(&DAT_14cb3c380,L"QueryOcclusionFactorWithRectangle",1);
  FUN_1446f470e(&DAT_14cb3c388,L"QueryOcclusionFactorWithCircleGPU",1);
  FUN_1446f470e(&DAT_14cb3c390,L"QueryOcclusionFactorWithCircle",1);
  FUN_1446f470e(&DAT_14cb3c398,L"QueryCloudOcclusionWithCircle",1);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add0990,1,0);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,1);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb3c3b8,L"fx.gbx.EnableMultiDispatchForParticleReader",&local_a8,
                L"0: Single dispatch for Niagara Particle Reader interface\n>0: Enable multiple dispatch to support Gestalt part Niagara rendering."
               );
  atexit(FUN_143a4a477);
  local_a8 = (code *)0x14ad8c572;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c3d0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b12;
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c3d8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b2c;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c3e0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b42;
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c3e8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b54;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c3f0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b67;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c3f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b75;
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c400 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b84;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c408 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0b94;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c410 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0ba8;
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c418 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0bb9;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c420 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0bcc;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c428 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0bdc;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c430 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0bef;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c438 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c04;
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c440 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c11;
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c448 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c22;
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c450 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c34;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c458 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c47;
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c460 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c5e;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c468 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c72;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c470 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c88;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c478 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0c9b;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c480 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0cb1;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c488 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0cc9;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c490 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add0cd9;
  local_a0 = 0x20;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c498 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb3c4a0,&DAT_149e3ac30,1);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb3c4a8,L"fx.Niagara.ParticleRead.IgnoreUnsafeReads",&DAT_14cb3c4b8,
                &DAT_14add0cfa);
  atexit(FUN_143a4a4bc);
  local_98[0] = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_143a56ad6;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb3c528,6,&local_a8);
  local_c8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  local_d8 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add13b0,1,0);
  FUN_1446f470e(&DAT_14cb3c548,L"IsActive",1);
  local_a8 = (code *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_a8 + 0x10) = lVar3;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)(local_a8 + 0x18) = FUN_140d28ed5;
  FUN_141253d16(&DAT_14cb3c550,&local_a8);
  if (local_a0 == 0) {
LAB_143a5ae90:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_143a5ae90;
  }
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add19c0,1,0);
  FUN_140056680(&DAT_14cb3c580,L"_IntGrid");
  atexit((_func_5014 *)&LAB_143a4c96f);
  FUN_140056680(&DAT_14cb3c590,L"_OutputIntGrid");
  atexit((_func_5014 *)&LAB_143a4c980);
  FUN_140056680(&DAT_14cb3c5a0,L"_Precision");
  atexit((_func_5014 *)&LAB_143a4c991);
  local_a8 = (code *)0x14adcd044;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c5b0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1a2e;
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c5b8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1a3f;
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c5c0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cb3c5c8,L"_PerAttributeData");
  atexit((_func_5014 *)&LAB_143a4c9a2);
  local_a8 = (code *)0x14add1a76;
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c5d8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1a88;
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c5e0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1a9a;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c5e8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1ab7;
  local_a0 = 0x1a;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c5f0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1ad2;
  local_a0 = 0x20;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c5f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1af3;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c600 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1b10;
  local_a0 = 0x1c;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c608 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1b2d;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c610 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1b38;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c618 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1b43;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c620 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add1b53;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c628 = (ulonglong)uVar2;
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c630,L"fx.MaxNiagaraRasterizationGridCells",&DAT_14c762884,
                L"The max number of supported grid cells in Niagara. Overflowing this threshold will cause the sim to warn and fail. \n"
               );
  atexit(FUN_143a4c9b3);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add2440,1,0);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c658,L"fx.Niagara.RenderTarget2D.SimCacheCompressed",&DAT_14c762888,
                L"When enabled compression is used for the sim cache data.");
  atexit(FUN_143a4e428);
  local_a8 = (code *)0x14add661c;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c668 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6631;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c670 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6647;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c678 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add665f;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c680 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6673;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c688 = (ulonglong)uVar2;
  local_a8 = (code *)0x14a7536b8;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c690 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6687;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c698 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add669d;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c6a0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66ab;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c6a8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66b7;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c6b0 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66c2;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c6b8 = (ulonglong)uVar2;
  DAT_14cb3c6c0 = 0;
  DAT_14cb3c6c8 = FUN_144830b78(&DAT_14cb3c6c8,&DAT_14cb42160);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add2c30,1,0);
  local_a8 = (code *)0x14add661c;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c6f8 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6631;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c700 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6647;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c708 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add665f;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c710 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6673;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c718 = (ulonglong)uVar2;
  local_a8 = (code *)0x14a7536b8;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c720 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6687;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c728 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add669d;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c730 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66ab;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c738 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66b7;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c740 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66c2;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c748 = (ulonglong)uVar2;
  DAT_14cb3c750 = 0;
  DAT_14cb3c758 = FUN_144830b78(&DAT_14cb3c758,&DAT_14cb42160);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb3c760,L"fx.Niagara.RenderTarget.IgnoreCookedOut",&DAT_14c762890,
                L"Ignores create render targets for cooked out emitter, i.e. ones that are not used by any GPU emitter."
               );
  atexit(FUN_143a52bd5);
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb3c770,L"fx.Niagara.RenderTarget.ResolutionMultiplier",&DAT_14c762894,
                L"Optional global modifier to Niagara render target resolution.");
  atexit(FUN_143a52c1a);
  local_a8 = (code *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_a8 + 0x10) = lVar3;
  *(undefined ***)local_a8 = &PTR_FUN_14add63d0;
  local_d8 = local_d8 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb3c780,L"fx.Niagara.RenderTarget.OverrideFormat",
                L"Optional global format override for all Niagara render targets",&local_a8);
  if (local_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_143a5b80f;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143a5b80f:
  atexit(FUN_143a52c5f);
  local_c8 = 0;
  local_d8 = 0;
  ppuStack_d0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14add35b0,1,0);
  local_a8 = (code *)0x14add661c;
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c818 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6647;
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c820 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add665f;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c828 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6673;
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c830 = (ulonglong)uVar2;
  local_a8 = (code *)0x14a7536b8;
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c838 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add6687;
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb3c840 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add669d;
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c848 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66ab;
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c850 = (ulonglong)uVar2;
  local_a8 = (code *)0x14add66b7;
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb3c858 = (ulonglong)uVar2;
  DAT_14cb3c860 = 0;
  DAT_14cb3c868 = FUN_144830b78(&DAT_14cb3c868,&DAT_14cb42160);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a5ba6c FUN_143a5ba6c body=69 status=ok
// SIG undefined FUN_143a5ba6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a5ba6c(void)

{
  _DAT_14cb3d090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a5baae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3d098,1);
  return;
}



// FUNCTION 143a5bab1 FUN_143a5bab1 body=69 status=ok
// SIG undefined FUN_143a5bab1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a5bab1(void)

{
  _DAT_14cb3d0a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a5baf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3d0a8,1);
  return;
}



// FUNCTION 143a5baf6 FUN_143a5baf6 body=69 status=ok
// SIG undefined FUN_143a5baf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a5baf6(void)

{
  _DAT_14cb3d0b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a5bb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3d0b8,1);
  return;
}



// FUNCTION 143a5bb3b FUN_143a5bb3b body=69 status=ok
// SIG undefined FUN_143a5bb3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a5bb3b(void)

{
  _DAT_14cb3d0c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a5bb7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3d0d0,1);
  return;
}


