// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433963ae FUN_1433963ae body=759 status=ok
// SIG undefined FUN_1433963ae(void)

void FUN_1433963ae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)*param_1;
  iVar10 = *(int *)(param_2 + 0xb4);
  if (iVar10 == 0) {
    iVar10 = (int)param_1[1];
    if (iVar10 == (int)plVar1[0x2c]) {
      if (*(int *)(param_2 + 0xa8) < 1) {
        if (*(int *)((longlong)plVar1 + 0x17c) != 0) {
          *(undefined4 *)((longlong)plVar1 + 0x17c) = 0;
        }
      }
      else {
        if ((int)plVar1[0x5e] == 0) {
          *(undefined4 *)(plVar1 + 0x2a) =
               *(undefined4 *)(plVar1[0x28] + 4 + (longlong)iVar10 * 0x28);
          iVar10 = (int)param_1[1];
        }
        *(undefined4 *)((longlong)plVar1 + 0x154) =
             *(undefined4 *)(plVar1[0x28] + 8 + (longlong)iVar10 * 0x28);
        lVar6 = DAT_14cabd278;
        iVar10 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
          uVar5 = 0;
        }
        else if (iVar10 == 1) {
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          uVar5 = (ulonglong)(DVar2 != DVar3);
        }
        else {
          uVar5 = 1;
        }
        iVar10 = *(int *)(lVar6 + uVar5 * 4);
        if ((0 < iVar10) && (uVar7 = (int)param_1[1] - iVar10, uVar7 < 0x7fffffff)) {
          uVar5 = (ulonglong)(uVar7 + 1);
          lVar6 = plVar1[0x28];
          lVar4 = plVar1[0x2b];
          uVar7 = (int)*(undefined8 *)(lVar6 + 0x20 + uVar5 * 0x28) - (int)lVar4;
          if (0 < (int)uVar7) {
            lVar8 = plVar1[0x60];
            uVar11 = (ulonglong)(uVar7 & 0x7fffffff);
            if ((longlong)uVar11 <= lVar8) {
              iVar10 = (int)plVar1[0x5e] - uVar7;
              uVar9 = uVar7;
              if (iVar10 != 0) {
                memmove((void *)plVar1[0x5d],(void *)(plVar1[0x5d] + uVar11),(longlong)iVar10);
                uVar9 = *(uint *)(plVar1 + 0x5e);
                lVar8 = plVar1[0x60];
                lVar6 = plVar1[0x28];
                lVar4 = plVar1[0x2b];
              }
              *(uint *)(plVar1 + 0x5e) = uVar9 - uVar7;
              plVar1[0x60] = lVar8 - uVar11;
              *(undefined4 *)(plVar1 + 0x2a) = *(undefined4 *)(lVar6 + 4 + uVar5 * 0x28);
              plVar1[0x2b] = lVar4 + uVar11;
            }
          }
        }
        uVar7 = *(uint *)(param_2 + 0xa8);
        if ((longlong)(int)uVar7 != 0) {
          iVar10 = (int)plVar1[0x5e];
          *(uint *)(plVar1 + 0x5e) = iVar10 + uVar7;
          if ((uint)(*(int *)((longlong)plVar1 + 0x2f4) - iVar10) < uVar7) {
            FUN_1447403be(plVar1 + 0x5d,iVar10);
          }
          memcpy((void *)((longlong)iVar10 + plVar1[0x5d]),*(void **)(param_2 + 0xa0),
                 (longlong)(int)uVar7);
        }
        FUN_14338a472(plVar1,*(undefined4 *)(plVar1[0x28] + (longlong)(int)param_1[1] * 0x28),
                      (undefined8 *)(param_2 + 0xa0));
        *(int *)(plVar1 + 0x2c) = (int)plVar1[0x2c] + 1;
      }
      goto LAB_1433965c3;
    }
    if (*(int *)((longlong)plVar1 + 0x2f4) < 0) {
      *(undefined4 *)(plVar1 + 0x5e) = 0;
      FUN_144893a1c(plVar1 + 0x5d,0);
    }
    else {
      *(undefined4 *)(plVar1 + 0x5e) = 0;
    }
    *(undefined4 *)(plVar1 + 0x5f) = 0;
    *(undefined1 *)((longlong)plVar1 + 0x2fc) = 0;
    plVar1[0x60] = 0;
    iVar10 = 2;
  }
  FUN_147838fc6(local_70,iVar10);
  (**(code **)(*plVar1 + 0x178))(plVar1,local_70);
  FUN_147832b28(plVar1);
  if (local_48 != 0) {
    (**(code **)(local_48 + -0x10))(local_48 + -0x10);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1433965c3:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433966c4 FUN_1433966c4 body=12 status=ok
// SIG undefined FUN_1433966c4(void)

void FUN_1433966c4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433966cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433966d0 FUN_1433966d0 body=29 status=ok
// SIG undefined FUN_1433966d0(void)

undefined8 FUN_1433966d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143396722 FUN_143396722 body=12 status=ok
// SIG undefined FUN_143396722(void)

void FUN_143396722(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014339672b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14339672e FUN_14339672e body=29 status=ok
// SIG undefined FUN_14339672e(void)

undefined8 FUN_14339672e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14339679a FUN_14339679a body=12 status=ok
// SIG undefined FUN_14339679a(void)

void FUN_14339679a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433967a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433967a6 FUN_1433967a6 body=29 status=ok
// SIG undefined FUN_1433967a6(void)

undefined8 FUN_1433967a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433967c4 FUN_1433967c4 body=220 status=ok
// SIG undefined FUN_1433967c4(void)

void FUN_1433967c4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5adac0;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14339690c;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5adac0;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14339690c;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433968ac FUN_1433968ac body=12 status=ok
// SIG undefined FUN_1433968ac(void)

void FUN_1433968ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433968b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433968b8 FUN_1433968b8 body=83 status=ok
// SIG undefined FUN_1433968b8(void)

undefined8 * FUN_1433968b8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5adaa0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 14339692c FUN_14339692c body=83 status=ok
// SIG undefined FUN_14339692c(void)

undefined8 * FUN_14339692c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5adac0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143396980 FUN_143396980 body=47 status=ok
// SIG undefined FUN_143396980(void)

void FUN_143396980(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30);
  plVar3 = (longlong *)(lVar1 + 0x50);
  if (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001433969ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



// FUNCTION 1433969ec FUN_1433969ec body=83 status=ok
// SIG undefined FUN_1433969ec(void)

undefined8 * FUN_1433969ec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5adae0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143396a3f FUN_143396a3f body=611 status=ok
// SIG undefined FUN_143396a3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143396a3f(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14098d3d2(FUN_143385b64,L"/Script/LocalFileNetworkReplayStreaming",L"ELocalFileReplayResult",
                &DAT_14cabd238);
  local_38._0_4_ = 0xa00000;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cabd250,L"localReplay.MaxCacheSize",&local_38,&DAT_149dfb77a);
  atexit(FUN_143385b9d);
  local_38._0_4_ = 10;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cabd268,L"localReplay.MaxBufferedStreamChunks",&local_38,&DAT_149dfb77a);
  atexit(FUN_143385be2);
  local_38._0_4_ = 1;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cabd280,L"localReplay.AllowLiveStreamDelete",&local_38,&DAT_149dfb77a);
  atexit(FUN_143385c27);
  local_38._0_4_ = 0x41a00000;
  local_48 = 0;
  FUN_140a6b41e(&DAT_14cabd298,L"localReplay.ChunkUploadDelayInSeconds",&local_38,&DAT_149dfb77a);
  atexit(FUN_143385c6c);
  local_38._0_4_ = 0x1400000;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cabd2b0,L"localReplay.ReplayRecordingMinSpace",&local_38,
                L"Minimum space needed to start recording a replay.");
  atexit(FUN_143385cb1);
  local_38._0_4_ = 0x40400000;
  local_48 = 0;
  FUN_140a6b41e(&DAT_14cabd2c8,L"localReplay.MinLoadNextChunkDelaySeconds",&local_38,
                L"Minimum time to wait between conditional chunk loads.");
  atexit(FUN_143385cf6);
  local_38 = CONCAT44(local_38._4_4_,0x10000);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cabd2e0,L"localReplay.MaxFriendlySerializeBytes",&local_38,
                L"Maximum allowed serialized bytes when reading friendly name from file header.");
  atexit(FUN_143385d3b);
  DAT_14cabd2f8 = 0;
  _DAT_14cabd300 = 0;
  _DAT_14cabd308 = 2;
  atexit(FUN_143385d80);
  local_38 = 0x7e0b49e495a4f03e;
  uStack_30 = 0xba43d356;
  uStack_2c = 0x94ff87d9;
  _DAT_14cabd310 = 0x95a4f03e;
  uRam000000014cabd314 = 0x7e0b49e4;
  uRam000000014cabd318 = 0xba43d356;
  uRam000000014cabd31c = 0x94ff87d9;
  FUN_141005458(&local_38,7,L"LocalFileReplay",0);
  atexit((_func_5014 *)&LAB_143385db1);
  local_38 = 0x800000014a1629c6;
  local_24 = 0x1f;
  uStack_30 = FUN_14577453c();
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  FUN_14636a296(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143396ca4 FUN_143396ca4 body=57 status=ok
// SIG undefined FUN_143396ca4(void)

void FUN_143396ca4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd360 == 0) {
    uVar1 = FUN_14636a3b5();
    DAT_14cabd360 = FUN_14171c317(FUN_14636a3e4,uVar1,L"EHttpReplayResult");
  }
  return;
}



// FUNCTION 143396cdd FUN_143396cdd body=69 status=ok
// SIG undefined FUN_143396cdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143396cdd(void)

{
  _DAT_14cabd370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143396d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd378,1);
  return;
}



// FUNCTION 143396d22 FUN_143396d22 body=69 status=ok
// SIG undefined FUN_143396d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143396d22(void)

{
  _DAT_14cabd388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143396d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd390,1);
  return;
}



// FUNCTION 143396d67 FUN_143396d67 body=69 status=ok
// SIG undefined FUN_143396d67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143396d67(void)

{
  _DAT_14cabd3a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143396da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd3a8,1);
  return;
}



// FUNCTION 143396dac FUN_143396dac body=2494 status=ok
// SIG undefined FUN_143396dac(void)

void FUN_143396dac(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined4 local_130;
  undefined **local_128;
  undefined2 *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined **local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined **local_e8;
  int local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined **local_98;
  ulonglong uStack_90;
  undefined **local_88;
  ulonglong uStack_80;
  longlong *local_70;
  longlong *local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_58 = 6;
  local_60 = &PTR_FUN_14a5ab538;
  local_50 = (undefined1)param_2[0xb];
  if ((((1 < (int)param_1[0x42]) || ((char)param_1[0x4c] != '\0')) || ((int)param_1[0x47] < 2)) ||
     (param_1[0x60] != 0)) {
    plVar4 = (longlong *)*param_3;
    if (plVar4 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_60);
    }
    goto LAB_143396e43;
  }
  plVar4 = param_1 + 0x43;
  if (plVar4 != param_2 + 8) {
    iVar7 = (int)param_2[9];
    pvVar5 = (void *)param_2[8];
    *(int *)(param_1 + 0x44) = iVar7;
    if (iVar7 == 0 && *(int *)((longlong)param_1 + 0x224) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x224) = 0;
    }
    else {
      FUN_1446dd670(plVar4,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)*plVar4,pvVar5,(longlong)iVar7 * 2);
      }
    }
  }
  plVar2 = param_1 + 0x41;
  param_1[0x45] = param_2[10];
  FUN_1478367a6(param_1 + 0x55,param_3);
  bVar10 = (*(byte *)(param_1 + 0x1c) & 0xfe | *(byte *)(param_2 + 0xb)) ^ 1;
  *(byte *)(param_1 + 0x1c) = bVar10;
  *(byte *)(param_1 + 0x1c) = bVar10 & 0xfb | (char)param_2[0xb] << 2;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  bVar10 = (*(byte *)(param_1 + 7) & 0xfe | *(byte *)(param_2 + 0xb)) ^ 1;
  *(byte *)(param_1 + 7) = bVar10;
  *(byte *)(param_1 + 7) = bVar10 & 0xfb | (char)param_2[0xb] << 2;
  bVar10 = (*(byte *)(param_1 + 0x31) & 0xfe | *(byte *)(param_2 + 0xb)) ^ 1;
  *(byte *)(param_1 + 0x31) = bVar10;
  *(byte *)(param_1 + 0x31) = bVar10 & 0xfb | (char)param_2[0xb] << 2;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  FUN_145d323a0(param_1 + 0x62,0);
  plVar12 = (longlong *)FUN_141054386();
  (**(code **)(*plVar12 + 0x40))(plVar12,&local_70);
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  if ((char)param_2[0xb] == '\0') {
    *(undefined1 *)(param_1 + 0x4c) = 2;
    if (plVar2 != param_2) {
      iVar7 = (int)param_2[1];
      pvVar5 = (void *)*param_2;
      *(int *)(param_1 + 0x42) = iVar7;
      if (iVar7 == 0 && *(int *)((longlong)param_1 + 0x214) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x214) = 0;
      }
      else {
        FUN_1446dd670(plVar2,iVar7);
        if (iVar7 != 0) {
          memcpy((void *)*plVar2,pvVar5,(longlong)iVar7 * 2);
        }
      }
    }
    local_108 = (undefined **)0x0;
    uStack_100 = 0;
    puVar16 = &DAT_149dfb77a;
    local_138 = (undefined **)&DAT_149dfb77a;
    if ((int)param_2[7] == 1) {
      FUN_14339776b(&local_88,*(undefined4 *)param_2[6]);
      iVar7 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar7 = 0;
      }
      FUN_1402980a2(&local_108,local_88,iVar7);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_138 = local_108;
      if ((int)uStack_100 == 0) {
        local_138 = (undefined **)&DAT_149dfb77a;
      }
    }
    puVar17 = &DAT_149dfb77a;
    if ((int)param_1[0x42] != 0) {
      puVar17 = (undefined2 *)*plVar2;
    }
    if ((int)param_1[0x47] != 0) {
      puVar16 = (undefined2 *)param_1[0x46];
    }
    FUN_140002266(&local_88,L"%sreplay/%s/startDownloading?user=%s",puVar16,puVar17);
    (**(code **)(*local_70 + 0x68))(local_70,&local_88);
    plVar4 = local_70;
    FUN_140056680(&local_98,&DAT_149f280e2);
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_98);
    if (local_98 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    uVar13 = (**(code **)(*local_70 + 0xf0))();
    FUN_14783fad6(uVar13,param_1,FUN_143397846);
    local_a8 = local_70;
    local_a0 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_138 = (undefined **)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_143397cf2(param_1,4,&local_a8,0);
    local_98 = (undefined **)0x0;
    uStack_90 = 0;
    (**(code **)(*param_1 + 0xf0))(param_1,&local_98);
    if ((int)uStack_90 == 0) {
LAB_1433975c9:
      if (local_98 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_98 != (undefined **)0x0) {
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      uStack_90 = uStack_90 & 0xffffffff00000000;
      goto LAB_1433975c9;
    }
    FUN_14783fb84(param_1);
    ppuVar14 = local_108;
    if (local_88 != (undefined **)0x0) {
      FUN_1400020a8();
      ppuVar14 = local_108;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x42) = 0;
    if (*(int *)((longlong)param_1 + 0x214) != 0) {
      FUN_1446f8c06(plVar2,0);
    }
    local_88 = (undefined **)0x0;
    uStack_80 = 0;
    if ((int)param_2[1] < 2) {
      local_d8 = param_2[2];
      local_d0 = (int)param_2[3] + -1;
      if ((int)param_2[3] == 0) {
        local_d0 = 0;
      }
      FUN_141639c3a(&local_98);
      puVar16 = &DAT_149dfb77a;
      local_128 = (undefined **)&DAT_149dfb77a;
      if ((int)uStack_90 != 0) {
        local_128 = local_98;
      }
      puVar17 = &DAT_149dfb77a;
      if ((int)param_1[0x44] != 0) {
        puVar17 = (undefined2 *)*plVar4;
      }
      local_130 = *(undefined4 *)((longlong)param_1 + 0x22c);
      if ((int)param_1[0x47] != 0) {
        puVar16 = (undefined2 *)param_1[0x46];
      }
      local_138 = (undefined **)CONCAT44(local_138._4_4_,(int)param_1[0x45]);
      FUN_140002266(&local_108,L"%sreplay?app=%s&version=%u&cl=%u&friendlyName=%s",puVar16,puVar17);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_108;
      uStack_80 = uStack_100;
      local_108 = (undefined **)0x0;
      uStack_100 = 0;
      ppuVar14 = local_98;
    }
    else {
      FUN_144a2b0a4(param_2,&local_108);
      local_c8 = param_2[2];
      local_c0 = (int)param_2[3] + -1;
      if ((int)param_2[3] == 0) {
        local_c0 = 0;
      }
      FUN_141639c3a(&local_b8);
      puVar16 = &DAT_149dfb77a;
      local_120 = &DAT_149dfb77a;
      if (local_b0 != 0) {
        local_120 = local_b8;
      }
      local_138 = (undefined **)&DAT_149dfb77a;
      if ((int)param_1[0x44] != 0) {
        local_138 = (undefined **)*plVar4;
      }
      ppuVar14 = (undefined **)&DAT_149dfb77a;
      if ((int)uStack_100 != 0) {
        ppuVar14 = local_108;
      }
      local_130 = (undefined4)param_1[0x45];
      if ((int)param_1[0x47] != 0) {
        puVar16 = (undefined2 *)param_1[0x46];
      }
      local_128 = (undefined **)CONCAT44(local_128._4_4_,*(undefined4 *)((longlong)param_1 + 0x22c))
      ;
      FUN_140002266(&local_98,L"%sreplay/%s?app=%s&version=%u&cl=%u&friendlyName=%s",puVar16,
                    ppuVar14);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_98;
      uStack_80 = uStack_90;
      local_98 = (undefined **)0x0;
      uStack_90 = 0;
      ppuVar14 = local_108;
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
        ppuVar14 = local_108;
      }
    }
    if (ppuVar14 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x1e8))(param_1,&local_98);
    if (1 < (int)uStack_90) {
      local_e8 = local_98;
      local_e0 = (int)uStack_90 + -1;
      FUN_141639c3a(&local_b8);
      puVar16 = local_b8;
      if (local_b0 == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_108,L"&meta=%s",puVar16);
      iVar7 = (int)uStack_100 + -1;
      if ((int)uStack_100 == 0) {
        iVar7 = 0;
      }
      FUN_1400020e8(&local_88,local_108,iVar7);
      if (local_108 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*local_70 + 0x68))(local_70,&local_88);
    plVar4 = local_70;
    FUN_140056680(&local_108,&DAT_149f280e2);
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_108);
    if (local_108 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    uVar13 = (**(code **)(*local_70 + 0xf0))();
    FUN_14783fad6(uVar13,param_1,FUN_143397e56);
    plVar4 = local_70;
    FUN_140056680(&local_108,L"application/json");
    FUN_140056680(&local_b8,L"Content-Type");
    (**(code **)(*plVar4 + 0xb0))(plVar4,&local_b8,&local_108);
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    lVar8 = param_2[7];
    if (0 < (longlong)(int)lVar8) {
      local_108 = &PTR_FUN_14a5aeed0;
      uStack_100 = 0;
      local_f8 = 0;
      lVar6 = param_2[6];
      lVar15 = 0;
      do {
        FUN_14339776b(&local_b8,*(undefined4 *)(lVar6 + lVar15));
        uVar9 = local_f8;
        lVar18 = (longlong)(int)local_f8;
        uVar11 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,uVar11);
        if (local_f8._4_4_ < uVar11) {
          FUN_1447a1bd6(&uStack_100,uVar9 & 0xffffffff);
        }
        puVar16 = local_b8;
        lVar18 = lVar18 * 0x10;
        puVar3 = (undefined8 *)(uStack_100 + lVar18);
        *(undefined8 *)(uStack_100 + lVar18) = 0;
        lVar19 = (longlong)local_b0;
        *(int *)(uStack_100 + 8 + lVar18) = local_b0;
        if (lVar19 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,local_b0,0);
          memcpy((void *)*puVar3,puVar16,lVar19 * 2);
        }
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar4 = local_70;
        lVar15 = lVar15 + 4;
      } while ((longlong)(int)lVar8 * 4 != lVar15);
      FUN_14683a1b2(&local_108,&local_b8,1);
      (**(code **)(*plVar4 + 0x90))(plVar4,&local_b8);
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14783fd0a(&local_108);
    }
    local_118 = local_70;
    local_110 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_138 = (undefined **)CONCAT44(local_138._4_4_,0x40000000);
    FUN_143397cf2(param_1,0,&local_118,3);
    (**(code **)(*param_1 + 0xe8))(param_1);
    ppuVar14 = local_88;
    if (local_98 != (undefined **)0x0) {
      FUN_1400020a8();
      ppuVar14 = local_88;
    }
  }
  if (ppuVar14 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_143396e43:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339776b FUN_14339776b body=215 status=ok
// SIG undefined FUN_14339776b(void)

undefined8 * FUN_14339776b(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined **local_48 [3];
  byte local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != -1) {
    if (DAT_14cb0d2b0 != 0 && DAT_14cb10918 != 0) {
      plVar1 = (longlong *)FUN_147d7ff84(DAT_14cb0d2b0,DAT_14cb10918,param_2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x350))(plVar1,local_48);
        FUN_1405e6804(local_48,param_1);
        local_48[0] = &PTR_FUN_14a5af930;
        if (local_28 != 0) {
          FUN_1400020a8();
        }
        local_48[0] = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143397846 FUN_143397846 body=1194 status=ok
// SIG undefined FUN_143397846(void)

void FUN_143397846(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 *_Src;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [40];
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined **local_a0;
  undefined1 *local_98;
  ulonglong uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_50);
  if ((param_4 != '\0') && (iVar6 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar6 == 200)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
    local_a0 = &PTR_FUN_14a5aef70;
    local_98 = (undefined1 *)0x0;
    uStack_90 = 0;
    local_88 = (undefined **)0x0;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    iVar6 = local_58 + -1;
    if (local_58 == 0) {
      iVar6 = 0;
    }
    local_e0 = local_60;
    local_d8 = CONCAT44(local_d8._4_4_,iVar6);
    cVar5 = FUN_14279eb63();
    _Src = local_98;
    if (cVar5 != '\0') {
      local_b0 = (undefined2 *)0x0;
      lVar12 = (longlong)(int)uStack_90;
      local_a8 = (int)uStack_90;
      if (lVar12 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,uStack_90 & 0xffffffff,0);
        memcpy(local_b0,_Src,lVar12 * 2);
      }
      uVar13 = 0;
      uVar10 = (ulonglong)((int)uStack_80 - 1);
      if ((int)uStack_80 == 0) {
        uVar10 = uVar13;
      }
      FUN_1402980a2(param_1 + 0x52,local_88,uVar10);
      puVar7 = local_b0;
      if (local_a8 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      while( true ) {
        uVar3 = *(ushort *)((longlong)puVar7 + uVar13);
        uVar8 = (uint)uVar3;
        uVar4 = *(ushort *)((longlong)&DAT_14a5ae8f8 + uVar13);
        uVar11 = (uint)uVar4;
        if (uVar3 != uVar4) {
          if ((uVar4 | uVar3) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_143397a84;
          }
          iVar6 = uVar8 - uVar11;
          goto LAB_143397aaf;
        }
        if (uVar3 == 0) break;
LAB_143397a84:
        uVar13 = uVar13 + 2;
      }
      iVar6 = 0;
LAB_143397aaf:
      *(bool *)((longlong)param_1 + 0x262) = iVar6 == 0;
      iVar6 = (int)uStack_68 + -1;
      if ((int)uStack_68 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(param_1 + 0x4d,local_70,iVar6);
      *(int *)(param_1 + 0x4f) = iStack_74;
      *(undefined4 *)((longlong)param_1 + 0x27c) = local_78;
      if (iStack_74 == 0) {
        uStack_d0 = 0;
        local_d8 = 6;
        local_e0 = &PTR_FUN_14a5ab538;
        plVar9 = (longlong *)param_1[0x55];
        if ((int)param_1[0x56] == 0) {
LAB_143397b50:
          if (plVar9 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x60))(plVar9,&local_e0);
          plVar9 = (longlong *)param_1[0x55];
          if ((int)param_1[0x56] != 0) {
            if (plVar9 == (longlong *)0x0) goto LAB_143397b59;
            (**(code **)*plVar9)(plVar9,0);
            FUN_1446efa72(param_1 + 0x55,0,0,0x10);
            *(undefined4 *)(param_1 + 0x56) = 0;
            plVar9 = (longlong *)param_1[0x55];
          }
          goto LAB_143397b50;
        }
LAB_143397b59:
        param_1[0x55] = 0;
        *(undefined4 *)(param_1 + 0x56) = 0;
        FUN_1478403ee(&local_e0,6);
        (**(code **)(*param_1 + 0x1c0))(param_1);
        (**(code **)(*param_1 + 0x178))(param_1,&local_e0);
        if (local_b8 != 0) {
          (**(code **)(local_b8 + -0x10))(local_b8 + -0x10);
        }
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_147841658(&local_a0);
    goto LAB_143397bdb;
  }
  uStack_90 = 0;
  local_98 = &DAT_00000006;
  local_a0 = &PTR_FUN_14a5ab538;
  plVar9 = (longlong *)param_1[0x55];
  if ((int)param_1[0x56] == 0) {
LAB_143397999:
    if (plVar9 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_a0);
    plVar9 = (longlong *)param_1[0x55];
    if ((int)param_1[0x56] != 0) {
      if (plVar9 == (longlong *)0x0) goto LAB_1433979a2;
      (**(code **)*plVar9)(plVar9,0);
      FUN_1446efa72(param_1 + 0x55,0,0,0x10);
      *(undefined4 *)(param_1 + 0x56) = 0;
      plVar9 = (longlong *)param_1[0x55];
    }
    goto LAB_143397999;
  }
LAB_1433979a2:
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  FUN_1478403ee(&local_a0,3);
  (**(code **)(*param_1 + 0x1c0))(param_1);
  (**(code **)(*param_1 + 0x178))(param_1,&local_a0);
  lVar12 = CONCAT44(iStack_74,local_78);
  local_60 = local_88;
  if (lVar12 != 0) {
    (**(code **)(lVar12 + -0x10))(lVar12 + -0x10);
    local_60 = local_88;
  }
LAB_143397bdb:
  if (local_60 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)param_2[1];
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
  plVar9 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143397cf2 FUN_143397cf2 body=326 status=ok
// SIG undefined FUN_143397cf2(void)

void FUN_143397cf2(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_14001cc68(0x38,0x10);
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_68 = param_5;
  FUN_14783fd92(uVar4,param_2,&local_60,param_4);
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14a5af150;
  puVar5[2] = uVar4;
  iVar2 = *(int *)(param_1 + 0x2f8);
  *(uint *)(param_1 + 0x2f8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2fc) < iVar2 + 1U) {
    FUN_1478426ba((longlong *)(param_1 + 0x2f0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x2f0);
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = uVar4;
  *(undefined8 **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = puVar5;
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143397e56 FUN_143397e56 body=604 status=ok
// SIG undefined FUN_143397e56(void)

void FUN_143397e56(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = param_1[0x60];
  plVar4 = (longlong *)param_1[0x61];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_60);
  if ((param_4 == '\0') || (iVar6 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar6 != 200)) {
    local_80 = *param_3;
    local_78 = param_3[1];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_90 = lVar3;
    local_88 = plVar4;
    cVar5 = FUN_143398140(param_1,&local_90,&local_80);
    if (cVar5 != '\0') goto LAB_143397fd2;
    FUN_1478403ee(&local_c0,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,&local_c0);
    if (local_98 != 0) {
      (**(code **)(local_98 + -0x10))(local_98 + -0x10);
    }
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_70);
    local_c0 = &PTR_FUN_14a5aef20;
    local_b8 = 0;
    uStack_b0 = 0;
    local_48 = local_68 + -1;
    if (local_68 == 0) {
      local_48 = 0;
    }
    local_50 = local_70;
    cVar5 = FUN_14279eb63();
    if (cVar5 != '\0') {
      iVar6 = (int)uStack_b0 + -1;
      if ((int)uStack_b0 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(param_1 + 0x41,local_b8,iVar6);
      (**(code **)(*param_1 + 0x180))(param_1,param_1 + 0x41);
    }
    local_c0 = &PTR_FUN_14a5aef20;
    local_a8 = local_70;
    if (local_b8 != 0) {
      FUN_1400020a8();
      local_a8 = local_70;
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_143397fd2:
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
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433980b4 FUN_1433980b4 body=140 status=ok
// SIG undefined FUN_1433980b4(void)

void FUN_1433980b4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x2f8);
  *(uint *)(param_1 + 0x2f8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2fc) < iVar3 + 1U) {
    FUN_1478426ba((longlong *)(param_1 + 0x2f0),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x2f0);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000143398127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143398140 FUN_143398140 body=391 status=ok
// SIG undefined FUN_143398140(void)

ulonglong FUN_143398140(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_2;
  if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x24) != 0)) &&
      (*(int *)(lVar4 + 0x20) < *(int *)(lVar4 + 0x24))) &&
     ((longlong *)*param_3 != (longlong *)0x0)) {
    iVar7 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (499 < iVar7) {
      iVar7 = (**(code **)(*(longlong *)*param_3 + 0x58))();
      if (iVar7 < 600) {
        *(int *)(*param_2 + 0x20) = *(int *)(*param_2 + 0x20) + 1;
        fVar3 = *(float *)(*param_2 + 0x28);
        if ((fVar3 != 0.0) || (NAN(fVar3))) {
          QueryPerformanceCounter(&local_30);
          *(double *)(*param_2 + 0x30) =
               (double)*(float *)(*param_2 + 0x28) +
               (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
        }
        else {
          (**(code **)(**(longlong **)(*param_2 + 0x10) + 0xe8))();
        }
        lVar4 = *param_2;
        lVar6 = param_2[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)(param_1 + 0x308);
        *(longlong *)(param_1 + 0x300) = lVar4;
        *(longlong *)(param_1 + 0x308) = lVar6;
        uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
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
        goto LAB_14339819c;
      }
    }
  }
  uVar8 = 0;
LAB_14339819c:
  plVar5 = (longlong *)param_2[1];
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433982c8 FUN_1433982c8 body=201 status=ok
// SIG undefined FUN_1433982c8(void)

void FUN_1433982c8(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x2b0) != 0) && (*(longlong **)(param_1 + 0x2a8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x30))();
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  cVar1 = *(char *)(param_1 + 0x260);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x261) == '\0')) {
    *(undefined1 *)(param_1 + 0x261) = 1;
    if (cVar1 == '\x02') {
      FUN_1433983a6(param_1,1);
    }
    else if (cVar1 == '\x01') {
      FUN_1433985aa(param_1);
      FUN_147840204(param_1);
    }
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    FUN_143397cf2(param_1,0x11,&local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433983a6 FUN_1433983a6 body=514 status=ok
// SIG undefined FUN_1433983a6(void)

void FUN_1433983a6(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  longlong *local_50;
  longlong *local_48;
  LARGE_INTEGER local_40 [2];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1 < *(int *)(param_1 + 0x238)) {
    plVar2 = (longlong *)FUN_141054386();
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
    plVar2 = local_30;
    puVar5 = &DAT_149dfb77a;
    if (param_2 == '\0') {
      local_58 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x298) != 0) {
        local_58 = *(undefined2 **)(param_1 + 0x290);
      }
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x210) != 0) {
        puVar6 = *(undefined2 **)(param_1 + 0x208);
      }
      if (*(int *)(param_1 + 0x238) != 0) {
        puVar5 = *(undefined2 **)(param_1 + 0x230);
      }
      pwVar4 = L"%sreplay/%s/viewer/%s";
    }
    else {
      local_58 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x298) != 0) {
        local_58 = *(undefined2 **)(param_1 + 0x290);
      }
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x210) != 0) {
        puVar6 = *(undefined2 **)(param_1 + 0x208);
      }
      if (*(int *)(param_1 + 0x238) != 0) {
        puVar5 = *(undefined2 **)(param_1 + 0x230);
      }
      pwVar4 = L"%sreplay/%s/viewer/%s?final=true";
    }
    FUN_140002266(local_40,pwVar4,puVar5,puVar6);
    (**(code **)(*plVar2 + 0x68))(plVar2,local_40);
    if (local_40[0].QuadPart != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_30;
    FUN_140056680(local_40,&DAT_149f280e2);
    (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
    if (local_40[0].QuadPart != 0) {
      FUN_1400020a8();
    }
    uVar3 = (**(code **)(*local_30 + 0xf0))();
    FUN_14783fad6(uVar3,param_1,FUN_14339cb1e);
    local_50 = local_30;
    local_48 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_58 = (undefined2 *)((ulonglong)local_58 & 0xffffffff00000000);
    FUN_143397cf2(param_1,7,&local_50,0);
    QueryPerformanceCounter(local_40);
    *(double *)(param_1 + 0x250) = (double)local_40[0].QuadPart * DAT_14c83f420 + 16777216.0;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433985aa FUN_1433985aa body=861 status=ok
// SIG undefined FUN_1433985aa(void)

void FUN_1433985aa(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  LARGE_INTEGER local_88 [3];
  longlong local_70;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((1 < (int)param_1[0x42]) && ((int)param_1[0x2a] != 0)) {
    plVar3 = (longlong *)FUN_141054386();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_48);
    uVar4 = (**(code **)(*local_48 + 0xf0))();
    FUN_14783fad6(uVar4,param_1,FUN_143398db4);
    local_58 = local_48;
    local_50 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    cVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_58,param_1 + 0x29);
    if (cVar2 == '\0') {
      FUN_1478403ee(local_88,4);
      (**(code **)(*param_1 + 0x1c0))(param_1);
      (**(code **)(*param_1 + 0x178))(param_1,local_88);
      if (local_60 != 0) {
        (**(code **)(local_60 + -0x10))(local_60 + -0x10);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_b0 = (**(code **)(*local_48 + 0x40))();
      plVar3 = local_48;
      local_b0 = local_b0 + param_1[0x6c];
      param_1[0x6c] = local_b0;
      local_d8 = (int)param_1[0x48];
      puVar5 = &DAT_149dfb77a;
      puVar6 = &DAT_149dfb77a;
      if ((int)param_1[0x42] != 0) {
        puVar6 = (undefined2 *)param_1[0x41];
      }
      local_b8 = (undefined4)param_1[0x51];
      local_c0 = *(undefined4 *)((longlong)param_1 + 0x284);
      local_c8 = *(undefined4 *)((longlong)param_1 + 0x27c);
      local_d0 = local_d8 + 1;
      if ((int)param_1[0x47] != 0) {
        puVar5 = (undefined2 *)param_1[0x46];
      }
      FUN_140002266(local_88,
                    L"%sreplay/%s/file/stream.%i?numChunks=%i&time=%i&mTime1=%i&mTime2=%i&absSize=%llu"
                    ,puVar5,puVar6);
      (**(code **)(*plVar3 + 0x68))(plVar3,local_88);
      if (local_88[0].QuadPart != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_48;
      FUN_140056680(local_88,&DAT_149f280e2);
      (**(code **)(*plVar3 + 0x60))(plVar3,local_88);
      if (local_88[0].QuadPart != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_48;
      FUN_140056680(local_88,L"application/octet-stream");
      FUN_140056680(local_98,L"Content-Type");
      (**(code **)(*plVar3 + 0xb0))(plVar3,local_98,local_88);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88[0].QuadPart != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (*(int *)((longlong)param_1 + 0x154) != 0) {
        FUN_144893a1c(param_1 + 0x29,0);
      }
      *(undefined4 *)(param_1 + 0x2b) = 0;
      *(int *)((longlong)param_1 + 0x284) = (int)param_1[0x51];
      *(int *)(param_1 + 0x48) = (int)param_1[0x48] + 1;
      local_a8 = local_48;
      local_a0 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_d8 = 0x40000000;
      FUN_143397cf2(param_1,2,&local_a8,2);
      QueryPerformanceCounter(local_88);
      param_1[0x49] = (longlong)((double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143398908 FUN_143398908 body=673 status=ok
// SIG undefined FUN_143398908(void)

void FUN_143398908(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [24];
  longlong local_98;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined1 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = param_1[0x60];
  plVar2 = (longlong *)param_1[0x61];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_48);
  local_58 = 6;
  local_60 = &PTR_FUN_14a5ab538;
  local_50 = 1;
  if (param_4 == '\0') {
LAB_143398a2b:
    local_70 = *param_3;
    local_68 = param_3[1];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_80 = lVar5;
    local_78 = plVar2;
    cVar3 = FUN_143398140(param_1,&local_80,&local_70);
    if (cVar3 != '\0') goto LAB_143398a72;
    FUN_1478403ee(local_b0,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,local_b0);
    if (local_88 != 0) {
      (**(code **)(local_88 + -0x10))(local_88 + -0x10);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar4 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar4 != 0xcc) goto LAB_143398a2b;
    if ((longlong *)*param_2 != (longlong *)0x0) {
      lVar5 = (**(code **)(*(longlong *)*param_2 + 0x40))();
      param_1[0x6c] = param_1[0x6c] + lVar5;
    }
    local_58 = 0;
  }
  plVar6 = (longlong *)param_1[0x55];
  if ((int)param_1[0x56] == 0) {
LAB_143398a0a:
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_60);
    plVar6 = (longlong *)param_1[0x55];
    if ((int)param_1[0x56] != 0) {
      if (plVar6 == (longlong *)0x0) goto LAB_143398a13;
      (**(code **)*plVar6)(plVar6,0);
      FUN_1446efa72(param_1 + 0x55,0,0,0x10);
      *(undefined4 *)(param_1 + 0x56) = 0;
      plVar6 = (longlong *)param_1[0x55];
    }
    goto LAB_143398a0a;
  }
LAB_143398a13:
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
LAB_143398a72:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143398baa FUN_143398baa body=520 status=ok
// SIG undefined FUN_143398baa(void)

ulonglong FUN_143398baa(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [40];
  LARGE_INTEGER local_e0 [11];
  longlong *local_88;
  longlong local_68;
  longlong local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar4 = (**(code **)(*param_1 + 0x1d0))();
  if (cVar4 == '\0') {
    (**(code **)(*(longlong *)*param_2 + 0x88))((longlong *)*param_2,param_3);
    local_68 = param_3;
  }
  else {
    QueryPerformanceCounter(local_e0);
    FUN_144869430(local_e0);
    local_e0[0].QuadPart = (LONGLONG)&PTR_FUN_14a5aec70;
    local_50 = 0;
    uStack_48 = 0;
    uStack_43 = 0;
    uStack_40 = 0;
    cVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,param_3,local_e0);
    if (cVar4 == '\0') {
      local_e0[0].QuadPart = (LONGLONG)&PTR_FUN_14a5aec70;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_e0[0].QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
      if (local_88 != (longlong *)0x0) {
        if (*local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_88);
      }
      if (local_68 != 0) {
        if (*(longlong *)(local_68 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_68);
      }
      uVar5 = 0;
      goto LAB_143398d07;
    }
    QueryPerformanceCounter(&local_38);
    (**(code **)(*(longlong *)*param_2 + 0x88))((longlong *)*param_2,&local_50);
    local_e0[0].QuadPart = (LONGLONG)&PTR_FUN_14a5aec70;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_e0[0].QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
    if (local_88 != (longlong *)0x0) {
      if (*local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_88);
    }
    if (local_68 != 0) {
      if (*(longlong *)(local_68 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_68);
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
LAB_143398d07:
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
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143398db4 FUN_143398db4 body=435 status=ok
// SIG undefined FUN_143398db4(void)

void FUN_143398db4(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = param_1[0x60];
  plVar4 = (longlong *)param_1[0x61];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_48);
  if (param_4 != '\0') {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar6 == 0xcc) goto LAB_143398e7b;
  }
  local_58 = *param_3;
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_68 = lVar3;
  local_60 = plVar4;
  cVar5 = FUN_143398140(param_1,&local_68,&local_58);
  if (cVar5 == '\0') {
    FUN_1478403ee(local_98,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,local_98);
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
LAB_143398e7b:
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
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143398f68 FUN_143398f68 body=529 status=ok
// SIG undefined FUN_143398f68(void)

void FUN_143398f68(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = param_1[0x60];
  plVar4 = (longlong *)param_1[0x61];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_48);
  if (param_4 == '\0') {
LAB_143399046:
    local_58 = *param_3;
    local_50 = param_3[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_68 = lVar3;
    local_60 = plVar4;
    cVar5 = FUN_143398140(param_1,&local_68,&local_58);
    if (cVar5 != '\0') goto LAB_14339908d;
    FUN_1478403ee(local_98,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,local_98);
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar6 != 0xcc) goto LAB_143399046;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfa;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (*(int *)((longlong)param_1 + 0x154) != 0) {
    FUN_144893a1c(param_1 + 0x29,0);
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (*(int *)((longlong)param_1 + 0x214) != 0) {
    FUN_1446f8c06(param_1 + 0x41,0);
  }
LAB_14339908d:
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
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339917a FUN_14339917a body=809 status=ok
// SIG undefined FUN_14339917a(void)

void FUN_14339917a(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  LARGE_INTEGER local_78;
  longlong *local_70;
  longlong local_60;
  longlong local_50;
  LARGE_INTEGER local_48;
  longlong *local_40;
  LARGE_INTEGER local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[0x3f] != 0) {
    FUN_1433985aa();
    if ((((int)param_1[0x42] < 2) || ((char)param_1[0x4c] != '\x01')) || ((int)param_1[0x3f] == 0))
    {
      *(undefined4 *)(param_1 + 0x3f) = 0;
      iVar2 = *(int *)((longlong)param_1 + 0x1fc);
    }
    else {
      QueryPerformanceCounter(&local_78);
      plVar5 = (longlong *)FUN_141054386();
      (**(code **)(*plVar5 + 0x40))(plVar5,&local_38);
      uVar6 = (**(code **)(*(longlong *)local_38 + 0xf0))();
      FUN_14783fad6(uVar6,param_1,FUN_14339b382);
      LVar3 = local_38;
      puVar7 = &DAT_149dfb77a;
      puVar8 = &DAT_149dfb77a;
      if ((int)param_1[0x42] != 0) {
        puVar8 = (undefined2 *)param_1[0x41];
      }
      local_88 = (undefined4)param_1[0x48];
      local_98 = (undefined4)param_1[0x51];
      if ((int)param_1[0x47] != 0) {
        puVar7 = (undefined2 *)param_1[0x46];
      }
      local_90 = local_98;
      FUN_140002266(&local_78,
                    L"%sreplay/%s/event?group=checkpoint&time1=%i&time2=%i&meta=%i&incrementSize=false"
                    ,puVar7,puVar8);
      (**(code **)(*(longlong *)LVar3 + 0x68))(LVar3.QuadPart,&local_78);
      if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
      LVar3 = local_38;
      FUN_140056680(&local_78,&DAT_149f280e2);
      (**(code **)(*(longlong *)LVar3 + 0x60))(LVar3.QuadPart,&local_78);
      if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
      LVar3 = local_38;
      FUN_140056680(&local_78,L"application/octet-stream");
      FUN_140056680(&local_48,L"Content-Type");
      (**(code **)(*(longlong *)LVar3 + 0xb0))(LVar3.QuadPart,&local_48,&local_78);
      if ((longlong *)local_48.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_48 = local_38;
      local_40 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      cVar4 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_48,param_1 + 0x3e);
      if (cVar4 == '\0') {
        FUN_1478403ee(&local_78,4);
        (**(code **)(*param_1 + 0x1c0))(param_1);
        (**(code **)(*param_1 + 0x178))(param_1,&local_78);
        if (local_50 != 0) {
          (**(code **)(local_50 + -0x10))(local_50 + -0x10);
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        local_78 = local_38;
        local_70 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        local_98 = 0x40000000;
        FUN_143397cf2(param_1,10,&local_78,2);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      QueryPerformanceCounter(&local_38);
      if (cVar4 == '\0') goto LAB_1433991ef;
      *(undefined4 *)(param_1 + 0x3f) = 0;
      iVar2 = *(int *)((longlong)param_1 + 0x1fc);
    }
    if (iVar2 != 0) {
      FUN_144893a1c(param_1 + 0x3e,0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_1433991ef:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433994a4 FUN_1433994a4 body=892 status=ok
// SIG undefined FUN_1433994a4(void)

void FUN_1433994a4(longlong *param_1,uint param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  code *pcVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined **local_98;
  longlong *local_90;
  longlong local_88 [2];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined **local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_4);
  if (cVar4 != '\0') {
    plVar2 = param_1 + 0x57;
    if (((int)param_1[0x58] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
      if (cVar4 != '\0') goto LAB_143399535;
    }
    if ((((int)param_1[0x59] == -1) && (*(int *)((longlong)param_1 + 0x2cc) == -1)) &&
       (1 < (int)param_1[0x47])) {
      if (param_2 == 0xffffffff) {
        FUN_14783c656(plVar2,param_3);
        (**(code **)(*param_1 + 0x70))(param_1,0,(int)param_1[0x5a]);
        param_1[0x49] = 0;
        puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        local_68 = (undefined **)0x0;
        plStack_60 = (longlong *)0x0;
        FUN_14784052c(puVar5,0xd);
        *puVar5 = &PTR_FUN_14a5ae410;
        local_78 = puVar5;
        local_70 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        local_70[1] = &DAT_100000001;
        *local_70 = &PTR_LAB_14a5af170;
        local_70[2] = puVar5;
        FUN_1433980b4(param_1,&local_78);
        goto LAB_143399581;
      }
      if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x5d])) {
        plVar6 = (longlong *)FUN_141054386();
        (**(code **)(*plVar6 + 0x40))(plVar6,&local_68);
        ppuVar3 = local_68;
        FUN_140056680(local_88,&DAT_149e8e77a);
        (**(code **)(*ppuVar3 + 0x60))(ppuVar3,local_88);
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        ppuVar3 = local_68;
        if ((char)param_4 == '\x01') {
          *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
          puVar8 = &DAT_149dfb77a;
          puVar9 = &DAT_149dfb77a;
          if (*(int *)(param_1[0x5c] + 0x10) != 0) {
            puVar9 = *(undefined2 **)(param_1[0x5c] + 8);
          }
          if ((int)param_1[0x47] != 0) {
            puVar8 = (undefined2 *)param_1[0x46];
          }
          FUN_140002266(local_88,L"%sevent/%s",puVar8,puVar9);
          (**(code **)(*ppuVar3 + 0x68))(ppuVar3,local_88);
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          pcVar10 = FUN_143399822;
        }
        else {
          puVar8 = &DAT_149dfb77a;
          puVar9 = &DAT_149dfb77a;
          if (*(int *)(param_1[0x5c] + 0x10 + (ulonglong)param_2 * 0x40) != 0) {
            puVar9 = *(undefined2 **)(param_1[0x5c] + (ulonglong)param_2 * 0x40 + 8);
          }
          if ((int)param_1[0x47] != 0) {
            puVar8 = (undefined2 *)param_1[0x46];
          }
          FUN_140002266(local_88,L"%sevent/%s",puVar8,puVar9);
          (**(code **)(*ppuVar3 + 0x68))(ppuVar3,local_88);
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          pcVar10 = FUN_14339a2ec;
        }
        uVar7 = (**(code **)(*local_68 + 0xf0))();
        FUN_14783fad6(uVar7,param_1,pcVar10);
        FUN_14783c656(plVar2,param_3);
        *(uint *)(param_1 + 0x59) = param_2;
        local_98 = local_68;
        local_90 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        local_a8 = 0;
        FUN_143397cf2(param_1,0xb,&local_98,0);
        plVar2 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_60 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        goto LAB_143399581;
      }
    }
  }
LAB_143399535:
  plStack_60 = (longlong *)&DAT_00000006;
  local_68 = &PTR_FUN_14a5ab730;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xfffffffefffffffe;
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_68);
  }
LAB_143399581:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143399822 FUN_143399822 body=2760 status=ok
// SIG undefined FUN_143399822(void)

void FUN_143399822(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined **ppuVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  wchar_t *_Str;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined **local_220;
  undefined **local_218;
  longlong *local_210;
  longlong local_208 [2];
  undefined **local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined **local_1c8;
  ulonglong *local_1c0;
  byte local_1a0;
  byte local_19e;
  longlong *local_170;
  longlong local_150;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined **local_120;
  ulonglong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  byte local_f8;
  byte local_f6;
  longlong *local_c8;
  longlong local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_50);
  if (*(char *)((longlong)param_1 + 0x261) == '\x01') {
LAB_14339988a:
    local_118 = (ulonglong *)&DAT_00000006;
    local_120 = &PTR_FUN_14a5ab730;
    local_110 = 0xffffffffffffffff;
    local_108 = 0xfffffffefffffffe;
    plVar11 = (longlong *)param_1[0x57];
    if ((int)param_1[0x58] == 0) {
LAB_143399ae3:
      if (plVar11 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_120);
      plVar11 = (longlong *)param_1[0x57];
      iVar8 = (int)param_1[0x58];
      goto joined_r0x000143399add;
    }
LAB_143399aec:
    param_1[0x57] = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
    goto LAB_143399b0d;
  }
  if ((param_4 == '\0') || (iVar8 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar8 != 200)) {
    local_118 = (ulonglong *)&DAT_00000006;
    local_120 = &PTR_FUN_14a5ab730;
    local_110 = 0xffffffffffffffff;
    local_108 = 0xfffffffefffffffe;
    if (((int)param_1[0x58] != 0) &&
       (plVar11 = (longlong *)param_1[0x57], plVar11 != (longlong *)0x0)) {
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_120);
    }
LAB_143399acf:
    iVar8 = (int)param_1[0x58];
    plVar11 = (longlong *)param_1[0x57];
joined_r0x000143399add:
    if (iVar8 != 0) {
      if (plVar11 == (longlong *)0x0) goto LAB_143399aec;
      (**(code **)*plVar11)(plVar11,0);
      FUN_1446efa72(param_1 + 0x57,0,0,0x10);
      *(undefined4 *)(param_1 + 0x58) = 0;
      plVar11 = (longlong *)param_1[0x57];
    }
    goto LAB_143399ae3;
  }
  lVar9 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  if (*(int *)(lVar9 + 8) == 0) goto LAB_14339988a;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_70 = *param_2;
  local_68 = param_2[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  FUN_14783fe0e(param_1,&local_70,&local_60);
  if ((*(int *)((longlong)param_1 + 0x2cc) == 0) &&
     (*(undefined4 *)(param_1 + 0x3f) = 0, *(int *)((longlong)param_1 + 0x1fc) != 0)) {
    FUN_144893a1c(param_1 + 0x3e);
  }
  local_74 = 0;
  uVar10 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  memset(&local_120,0,0x90);
  FUN_144869430(&local_120);
  local_90 = 0;
  local_120 = &PTR_FUN_149e1e050;
  local_80 = 0x7fffffffffffffff;
  local_f8 = local_f8 | 1;
  local_88 = uVar10;
  FUN_1449c2eca(&local_120,1);
  puVar1 = (undefined4 *)*local_118 + 1;
  if ((undefined4 *)local_118[1] < puVar1) {
    if ((local_f6 & 2) == 0) {
      (*(code *)local_120[0x2e])(&local_120,&local_74,4);
    }
    else {
      FUN_14572512c(&local_120);
    }
  }
  else {
    local_74 = *(undefined4 *)*local_118;
    *local_118 = (ulonglong)puVar1;
  }
  memset(&local_1c8,0,0x90);
  FUN_144869430(&local_1c8);
  local_138 = 0;
  local_1c8 = &PTR_FUN_149e1e590;
  local_128 = 0;
  local_1a0 = local_1a0 | 4;
  local_130 = param_1 + 0x3e;
  FUN_1449c2eca(&local_1c8,1);
  local_1c8 = &PTR_FUN_149e1e330;
  local_138 = (longlong)(int)local_130[1];
  puVar1 = (undefined4 *)*local_1c0 + 1;
  if ((undefined4 *)local_1c0[1] < puVar1) {
    if ((local_19e & 2) == 0) {
      iVar8 = (int)local_130[1];
      lVar9 = (local_138 - iVar8) + 4;
      if (0 < lVar9) {
        if (0x7ffffffa < (int)local_130[1]) {
          FUN_1400021e4(&local_128,&local_1f8);
          local_220 = local_1f8;
          if ((int)local_1f0 == 0) {
            local_220 = (undefined **)&DAT_149dfb77a;
          }
          local_228 = 0x7fffffff;
          FUN_140033559("Runtime\\Core\\Public\\Serialization/MemoryWriter.h",0x31,
                        L"TMemoryWriter with IndexSize=%d does not support data larger than %d bytes. Archive name: %s."
                        ,4);
          if (local_1f8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          iVar8 = (int)local_130[1];
        }
        uVar5 = (uint)lVar9;
        *(uint *)(local_130 + 1) = iVar8 + uVar5;
        if ((uint)(*(int *)((longlong)local_130 + 0xc) - iVar8) < uVar5) {
          FUN_1447403be();
        }
      }
      *(undefined4 *)(*local_130 + (longlong)(int)local_138) = local_74;
      local_138 = local_138 + 4;
    }
    else {
      FUN_14572512c(&local_1c8,&local_74);
    }
  }
  else {
    local_74 = *(undefined4 *)*local_1c0;
    *local_1c0 = (ulonglong)puVar1;
  }
  local_1d8 = *param_3;
  local_1d0 = param_3[1];
  if (local_1d0 != 0) {
    LOCK();
    *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_1d8,param_1 + 0x3e);
  if (cVar7 == '\0') {
    local_1f0 = (longlong *)&DAT_00000006;
    local_1f8 = &PTR_FUN_14a5ab730;
    local_1e8 = -1;
    local_1e0 = 0xfffffffefffffffe;
    plVar11 = (longlong *)param_1[0x57];
    if ((int)param_1[0x58] == 0) {
LAB_143399de5:
      if (plVar11 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_1f8);
      plVar11 = (longlong *)param_1[0x57];
      if ((int)param_1[0x58] != 0) {
        if (plVar11 == (longlong *)0x0) goto LAB_143399dee;
        (**(code **)*plVar11)(plVar11,0);
        FUN_1446efa72(param_1 + 0x57,0,0,0x10);
        *(undefined4 *)(param_1 + 0x58) = 0;
        plVar11 = (longlong *)param_1[0x57];
      }
      goto LAB_143399de5;
    }
LAB_143399dee:
    param_1[0x57] = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
  }
  else {
    iVar8 = (int)param_1[0x59];
    if (iVar8 <= *(int *)((longlong)param_1 + 0x2cc)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (*(int *)((longlong)param_1 + 0x154) != 0) {
        FUN_144893a1c(param_1 + 0x29,0);
        iVar8 = (int)param_1[0x59];
      }
      *(undefined4 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined8 *)((longlong)param_1 + 0x284) = 0;
      if (*(int *)(param_1[0x5c] + 0x30 + (longlong)iVar8 * 0x40) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)((longlong)iVar8 * 0x40 + param_1[0x5c] + 0x28);
      }
      iVar8 = _wtoi(_Str);
      *(int *)(param_1 + 0x48) = iVar8;
      param_1[0x49] = 0;
      local_1e8 = param_1[0x5a];
      if (-1 < local_1e8) {
        if (iVar8 < (int)param_1[0x4f]) {
          (**(code **)(*param_1 + 0x70))
                    (param_1,*(undefined4 *)
                              (param_1[0x5c] + 0x38 + (longlong)(int)param_1[0x59] * 0x40));
          local_1e8 = param_1[0x5a] -
                      (ulonglong)
                      *(uint *)(param_1[0x5c] + 0x38 + (longlong)(int)param_1[0x59] * 0x40);
        }
        else {
          uVar4 = *(undefined4 *)(param_1[0x5c] + 0x38 + (longlong)(int)param_1[0x59] * 0x40);
          *(undefined4 *)((longlong)param_1 + 0x284) = uVar4;
          *(undefined4 *)(param_1 + 0x51) = uVar4;
          local_1e8 = -1;
        }
        param_1[0x5a] = local_1e8;
      }
      local_1f8 = &PTR_FUN_14a5ab730;
      local_1e0 = 0xfffffffefffffffe;
      local_1f0 = (longlong *)((ulonglong)local_1f0._4_4_ << 0x20);
      if (((int)param_1[0x58] != 0) &&
         (plVar11 = (longlong *)param_1[0x57], plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x60))(plVar11,&local_1f8);
      }
      local_1c8 = &PTR__purecall_149e35f70;
      if (local_170 != (longlong *)0x0) {
        if (*local_170 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_170);
      }
      if (local_150 != 0) {
        if (*(longlong *)(local_150 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_150);
      }
      local_120 = &PTR__purecall_149e35f70;
      if (local_c8 != (longlong *)0x0) {
        if (*local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_c8);
      }
      if (local_a8 != 0) {
        if (*(longlong *)(local_a8 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a8);
      }
      goto LAB_143399acf;
    }
    *(int *)((longlong)param_1 + 0x2cc) = *(int *)((longlong)param_1 + 0x2cc) + 1;
    plVar11 = (longlong *)FUN_141054386();
    (**(code **)(*plVar11 + 0x40))(plVar11,&local_1f8);
    ppuVar6 = local_1f8;
    lVar9 = (longlong)*(int *)((longlong)param_1 + 0x2cc) * 0x40;
    puVar12 = &DAT_149dfb77a;
    puVar13 = &DAT_149dfb77a;
    if (*(int *)(param_1[0x5c] + 0x10 + lVar9) != 0) {
      puVar13 = *(undefined2 **)(lVar9 + param_1[0x5c] + 8);
    }
    if ((int)param_1[0x47] != 0) {
      puVar12 = (undefined2 *)param_1[0x46];
    }
    FUN_140002266(local_208,L"%sevent/%s",puVar12,puVar13);
    (**(code **)(*ppuVar6 + 0x68))(ppuVar6,local_208);
    if (local_208[0] != 0) {
      FUN_1400020a8();
    }
    ppuVar6 = local_1f8;
    FUN_140056680(local_208,&DAT_149e8e77a);
    (**(code **)(*ppuVar6 + 0x60))(ppuVar6,local_208);
    if (local_208[0] != 0) {
      FUN_1400020a8();
    }
    uVar10 = (**(code **)(*local_1f8 + 0xf0))();
    FUN_14783fad6(uVar10,param_1,FUN_143399822);
    local_218 = local_1f8;
    local_210 = local_1f0;
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
      UNLOCK();
    }
    local_228 = 0;
    FUN_143397cf2(param_1,0xb,&local_218,0);
    plVar11 = local_1f0;
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1f0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar3 = (int *)((longlong)plVar11 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  local_1c8 = &PTR__purecall_149e35f70;
  if (local_170 != (longlong *)0x0) {
    if (*local_170 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_170);
  }
  if (local_150 != 0) {
    if (*(longlong *)(local_150 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_150);
  }
  local_120 = &PTR__purecall_149e35f70;
  if (local_c8 != (longlong *)0x0) {
    if (*local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_c8);
  }
  if (local_a8 != 0) {
    if (*(longlong *)(local_a8 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_a8);
  }
LAB_143399b0d:
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339a2ec FUN_14339a2ec body=1212 status=ok
// SIG undefined FUN_14339a2ec(void)

void FUN_14339a2ec(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  wchar_t *_Str;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined **local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_40);
  if (*(char *)((longlong)param_1 + 0x261) == '\x01') {
LAB_14339a34a:
    local_58 = 6;
    local_60 = &PTR_FUN_14a5ab730;
    local_50 = -1;
    local_48 = 0xfffffffefffffffe;
    plVar8 = (longlong *)param_1[0x57];
    if ((int)param_1[0x58] == 0) goto LAB_14339a4cd;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x60))(plVar8,&local_60);
      plVar8 = (longlong *)param_1[0x57];
      if ((int)param_1[0x58] == 0) goto LAB_14339a4cd;
      goto LAB_14339a574;
    }
  }
  else {
    if ((param_4 == '\0') || (iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar5 != 200))
    {
      local_58 = 6;
      local_50 = -1;
      local_48 = 0xfffffffefffffffe;
    }
    else {
      lVar6 = (**(code **)(*(longlong *)*param_3 + 0x48))();
      if (*(int *)(lVar6 + 8) == 0) {
        local_58 = 6;
        local_60 = &PTR_FUN_14a5ab730;
        local_50 = -1;
        local_48 = 0xfffffffefffffffe;
        plVar8 = (longlong *)param_1[0x57];
        if ((int)param_1[0x58] == 0) {
LAB_14339a449:
          if (plVar8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x60))(plVar8,&local_60);
          plVar8 = (longlong *)param_1[0x57];
          if ((int)param_1[0x58] != 0) {
            if (plVar8 == (longlong *)0x0) goto LAB_14339a452;
            (**(code **)*plVar8)(plVar8,0);
            FUN_1446efa72(param_1 + 0x57,0,0,0x10);
            *(undefined4 *)(param_1 + 0x58) = 0;
            plVar8 = (longlong *)param_1[0x57];
          }
          goto LAB_14339a449;
        }
LAB_14339a452:
        param_1[0x57] = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        goto LAB_14339a500;
      }
      local_70 = *param_3;
      local_68 = param_3[1];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      local_80 = *param_2;
      local_78 = param_2[1];
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      FUN_14783fe0e(param_1,&local_80,&local_70);
      *(undefined4 *)(param_1 + 0x3f) = 0;
      if (*(int *)((longlong)param_1 + 0x1fc) != 0) {
        FUN_144893a1c(param_1 + 0x3e,0);
      }
      local_90 = *param_3;
      local_88 = param_3[1];
      if (local_88 != 0) {
        LOCK();
        *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
        UNLOCK();
      }
      cVar4 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_90,param_1 + 0x3e);
      if (cVar4 == '\0') goto LAB_14339a34a;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (*(int *)((longlong)param_1 + 0x154) != 0) {
        FUN_144893a1c(param_1 + 0x29,0);
      }
      *(undefined4 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined8 *)((longlong)param_1 + 0x284) = 0;
      lVar7 = (longlong)(int)param_1[0x59] * 0x40;
      lVar6 = param_1[0x5c] + lVar7;
      if (*(int *)(param_1[0x5c] + 0x30 + lVar7) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(lVar6 + 0x28);
      }
      iVar5 = _wtoi(_Str);
      *(int *)(param_1 + 0x48) = iVar5;
      param_1[0x49] = 0;
      local_50 = param_1[0x5a];
      if (-1 < local_50) {
        if (iVar5 < (int)param_1[0x4f]) {
          (**(code **)(*param_1 + 0x70))(param_1,*(undefined4 *)(lVar6 + 0x38));
          local_50 = param_1[0x5a] - (ulonglong)*(uint *)(lVar6 + 0x38);
        }
        else {
          uVar3 = *(undefined4 *)(lVar6 + 0x38);
          *(undefined4 *)((longlong)param_1 + 0x284) = uVar3;
          *(undefined4 *)(param_1 + 0x51) = uVar3;
          local_50 = -1;
        }
        param_1[0x5a] = local_50;
      }
      local_58 = (ulonglong)local_58._4_4_ << 0x20;
      local_48 = CONCAT44((int)param_1[0x59],*(undefined4 *)(lVar6 + 0x38));
    }
    local_60 = &PTR_FUN_14a5ab730;
    if (((int)param_1[0x58] != 0) && (plVar8 = (longlong *)param_1[0x57], plVar8 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar8 + 0x60))(plVar8,&local_60);
    }
    plVar8 = (longlong *)param_1[0x57];
    if ((int)param_1[0x58] != 0) {
LAB_14339a574:
      if (plVar8 == (longlong *)0x0) goto LAB_14339a4d6;
      (**(code **)*plVar8)(plVar8,0);
      FUN_1446efa72(param_1 + 0x57,0,0,0x10);
      *(undefined4 *)(param_1 + 0x58) = 0;
      plVar8 = (longlong *)param_1[0x57];
    }
LAB_14339a4cd:
    if (plVar8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14339a4d6:
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  param_1[0x5a] = -1;
LAB_14339a500:
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339a7aa FUN_14339a7aa body=774 status=ok
// SIG undefined FUN_14339a7aa(void)

void FUN_14339a7aa(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined **local_88;
  longlong *local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  int local_60;
  undefined **local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x238) < 2) {
    local_50 = (longlong *)&DAT_00000006;
    local_58 = &PTR_FUN_14a5ab6c0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)*param_3;
    }
    (**(code **)(*plVar5 + 0x58))(0,&local_58);
    FUN_14783052c(&local_58);
    goto LAB_14339aa62;
  }
  plVar5 = (longlong *)FUN_141054386();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_58);
  ppuVar3 = local_58;
  puVar8 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar9 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    puVar8 = *(undefined2 **)(param_1 + 0x230);
  }
  FUN_140002266(&local_68,L"%sevent?group=%s",puVar8,puVar9);
  (**(code **)(*ppuVar3 + 0x68))(ppuVar3,&local_68);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ppuVar3 = local_58;
  FUN_140056680(&local_68,&DAT_149e8e77a);
  (**(code **)(*ppuVar3 + 0x60))(ppuVar3,&local_68);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_147842f8a(&local_78,param_3);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  local_60 = 3;
  *local_68 = &PTR_LAB_14a5af200;
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
  local_68[2] = lVar7;
  *local_68 = &PTR_FUN_14a5af190;
  local_68[3] = 0;
  *(undefined4 *)(local_68 + 4) = 0;
  FUN_147842f8a(local_68 + 3,&local_78);
  if (local_70 == 0) {
LAB_14339a976:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_14339a976;
  }
  uVar6 = (**(code **)(*local_58 + 0xf0))();
  FUN_1478406ee(uVar6,param_1,&local_68);
  local_88 = local_58;
  local_80 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_98 = 0;
  FUN_143397cf2(param_1,8,&local_88,0);
  if (local_60 == 0) {
LAB_14339aa13:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_14339aa13;
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14339aa62:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339aab2 FUN_14339aab2 body=874 status=ok
// SIG undefined FUN_14339aab2(void)

void FUN_14339aab2(longlong param_1,longlong param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [3];
  int6 iStack_d0;
  short sStack_ca;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined **local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  int local_98;
  undefined **local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0x300) = 0;
  plVar9 = *(longlong **)(param_1 + 0x308);
  if (plVar9 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x308) = 0;
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)();
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  local_88 = 6;
  local_90 = &PTR_FUN_14a5ab608;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_4 != '\0') {
    iVar7 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar7 == 200) {
      local_100 = param_2;
      (**(code **)(*(longlong *)*param_3 + 0x60))();
      local_b8 = &PTR_FUN_14a5aefd0;
      local_b0 = 0;
      uStack_a8 = 0;
      iVar7 = local_98 + -1;
      if (local_98 == 0) {
        iVar7 = 0;
      }
      local_f8 = local_a0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar7);
      cVar6 = FUN_14279eb63();
      if ((cVar6 != '\0') && (local_88 = 0, 0 < (int)uStack_a8)) {
        lVar13 = 0;
        lVar10 = 0;
        do {
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_c2 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_bb = 0;
          local_e8[2] = 0;
          iStack_d0 = 0;
          sStack_ca = 0;
          local_e8[0] = 0;
          local_e8[1] = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          iVar7 = *(int *)(local_b0 + 0x20 + lVar13);
          iVar11 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar11 = 0;
          }
          FUN_1402980a2(&local_f8,*(undefined8 *)(local_b0 + 0x18 + lVar13),iVar11);
          iVar7 = *(int *)(local_b0 + 0x30 + lVar13);
          iVar11 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar11 = 0;
          }
          FUN_1402980a2(local_e8,*(undefined8 *)(local_b0 + 0x28 + lVar13),iVar11);
          uVar5 = uStack_78;
          local_e8[2] = *(undefined8 *)(local_b0 + 0x38 + lVar13);
          iVar7 = *(int *)(local_b0 + 0x40 + lVar13);
          iStack_d0 = (int6)iVar7;
          sStack_ca = (short)(iVar7 >> 0x1f);
          uStack_c8 = *(undefined4 *)(local_b0 + 0x44 + lVar13);
          uVar3 = *(undefined4 *)(local_b0 + 0x48 + lVar13);
          uStack_c4 = (undefined2)uVar3;
          uStack_c2 = (undefined2)((uint)uVar3 >> 0x10);
          uStack_bc = *(undefined1 *)(local_b0 + 0x4c + lVar13);
          uStack_c0 = *(undefined4 *)(local_b0 + 0x50 + lVar13);
          uStack_bb = *(undefined1 *)(local_b0 + 0x54 + lVar13);
          lVar12 = (longlong)(int)uStack_78;
          uVar8 = (int)uStack_78 + 1;
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar8);
          if (uStack_78._4_4_ < uVar8) {
            FUN_147831962(&local_80,uVar5 & 0xffffffff);
          }
          FUN_1478318b2(lVar12 * 0x40 + local_80,&local_f8);
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          lVar10 = lVar10 + 1;
          lVar13 = lVar13 + 0x58;
        } while (lVar10 < (int)uStack_a8);
      }
      FUN_1478416a0(&local_b8);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_147830eab(0,0);
      param_2 = local_100;
    }
  }
  if ((int)param_5[1] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)*param_5;
  }
  (**(code **)(*plVar9 + 0x58))(plVar9,&local_90);
  FUN_14783040a(&local_90);
  plVar9 = *(longlong **)(param_2 + 8);
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
  plVar9 = (longlong *)param_3[1];
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
  if ((int)param_5[1] != 0) {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14339ade0;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_14339ade0:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339ae32 FUN_14339ae32 body=444 status=ok
// SIG undefined FUN_14339ae32(void)

void FUN_14339ae32(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined **local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined **local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x238) < 2) {
    local_40 = (longlong *)&DAT_00000006;
    local_48 = &PTR_FUN_14a5ab6b0;
    local_38 = 0;
    uStack_30 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)*param_3;
    }
    (**(code **)(*plVar4 + 0x58))(0,&local_48);
    local_48 = &PTR_FUN_14a5ab6b0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar4 = (longlong *)FUN_141054386();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
    ppuVar3 = local_48;
    puVar6 = &DAT_149dfb77a;
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x238) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x230);
    }
    FUN_140002266(local_58,L"%sevent/%s",puVar6,puVar7);
    (**(code **)(*ppuVar3 + 0x68))(ppuVar3,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_48;
    FUN_140056680(local_58,&DAT_149e8e77a);
    (**(code **)(*ppuVar3 + 0x60))(ppuVar3,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar5 = (**(code **)(*local_48 + 0xf0))();
    FUN_1478407d2(uVar5,param_1,param_3);
    local_68 = local_48;
    local_60 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_78 = 0;
    FUN_143397cf2(param_1,0xf,&local_68,0);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339aff0 FUN_14339aff0 body=439 status=ok
// SIG undefined FUN_14339aff0(void)

void FUN_14339aff0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  int iVar5;
  void **ppvVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined4 local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_58);
  local_70 = 6;
  local_78 = &PTR_FUN_14a5ab6b0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar5 == 200) {
      ppvVar6 = (void **)(**(code **)(*(longlong *)*param_3 + 0x48))();
      if (&local_68 != ppvVar6) {
        uVar3 = *(uint *)(ppvVar6 + 1);
        _Src = *ppvVar6;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
        if ((longlong)(int)uVar3 == 0) {
          uStack_60 = (ulonglong)uVar3;
        }
        else {
          FUN_1447a127e(&local_68,uVar3,0);
          memcpy(local_68,_Src,(longlong)(int)uVar3);
        }
      }
      local_70 = 0;
    }
  }
  if (((int)param_5[1] != 0) && (plVar4 = (longlong *)*param_5, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_78);
  }
  local_78 = &PTR_FUN_14a5ab6b0;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  puVar7 = (undefined8 *)*param_5;
  if ((int)param_5[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_14339b179;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
    puVar7 = (undefined8 *)*param_5;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14339b179:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339b1a8 FUN_14339b1a8 body=117 status=ok
// SIG undefined FUN_14339b1a8(void)

void FUN_14339b1a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14a5ab6b8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_38 = 1;
  if (*(int *)(param_3 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x58))(0,&local_40);
  FUN_1478304b0(&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339b21e FUN_14339b21e body=325 status=ok
// SIG undefined FUN_14339b21e(void)

void FUN_14339b21e(longlong *param_1,uint param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  uint *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_4);
  if ((((cVar4 == '\0') || (param_1[0x5a] != -1)) || ((int)param_1[0x59] != -1)) ||
     ((((int)param_1[0x58] != 0 && ((longlong *)param_1[0x57] != (longlong *)0x0)) &&
      (cVar4 = (**(code **)(*(longlong *)param_1[0x57] + 0x30))(), cVar4 != '\0')))) {
    local_50 = 6;
    local_58 = &PTR_FUN_14a5ab730;
    local_48 = 0xffffffffffffffff;
    local_40 = 0xfffffffefffffffe;
    plVar2 = (longlong *)*param_3;
    if (plVar2 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_58);
    }
    if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x5d);
  uVar3 = *(uint *)((longlong)param_1 + 0x27c);
  if (param_2 < *(uint *)((longlong)param_1 + 0x27c)) {
    uVar3 = param_2;
  }
  param_1[0x5a] = (ulonglong)uVar3;
  if ((0 < (int)uVar1) &&
     (param_2 < *(uint *)(param_1[0x5c] + 0x38 + (ulonglong)(uVar1 - 1) * 0x40))) {
    puVar5 = (uint *)(param_1[0x5c] + 0x38);
    lVar6 = 0;
    do {
      if (param_2 < *puVar5) break;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 0x10;
    } while (-lVar6 != (ulonglong)uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 14339b382 FUN_14339b382 body=474 status=ok
// SIG undefined FUN_14339b382(void)

void FUN_14339b382(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_1[0x60];
  plVar3 = (longlong *)param_1[0x61];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_48);
  if (param_4 == '\0') {
LAB_14339b429:
    local_58 = *param_3;
    local_50 = param_3[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_68 = lVar6;
    local_60 = plVar3;
    cVar4 = FUN_143398140(param_1,&local_68,&local_58);
    if (cVar4 == '\0') {
      FUN_1478403ee(local_98,3);
      (**(code **)(*param_1 + 0x1c0))(param_1);
      (**(code **)(*param_1 + 0x178))(param_1,local_98);
      if (local_70 != 0) {
        (**(code **)(local_70 + -0x10))(local_70 + -0x10);
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar5 != 200) {
      iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))();
      if (iVar5 != 0xcc) goto LAB_14339b429;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      lVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
      param_1[0x6c] = param_1[0x6c] + lVar6;
    }
  }
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339b55e FUN_14339b55e body=875 status=ok
// SIG undefined FUN_14339b55e(void)

bool FUN_14339b55e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  uint local_60;
  int local_5c;
  undefined2 *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *(uint *)(param_4 + 1);
  if (1 < (int)uVar2) {
    if (*(int *)(param_1 + 0x40) < 2) {
      plVar3 = *(longlong **)(param_1 + 0x10);
      local_98 = *(undefined8 *)(param_1 + 0x60);
      local_90 = *(int *)(param_1 + 0x68) + -1;
      if (*(int *)(param_1 + 0x68) == 0) {
        local_90 = 0;
      }
      FUN_141639c3a(&local_68);
      puVar7 = &DAT_149dfb77a;
      local_b0 = &DAT_149dfb77a;
      if (local_60 != 0) {
        local_b0 = local_68;
      }
      local_c8 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x58) != 0) {
        local_c8 = *(undefined2 **)(param_1 + 0x50);
      }
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_4 + 1) != 0) {
        puVar8 = (undefined2 *)*param_4;
      }
      local_b8 = *(undefined4 *)(param_1 + 0x48);
      if (*(int *)(param_3 + 1) != 0) {
        puVar7 = (undefined2 *)*param_3;
      }
      local_c0 = (undefined2 *)CONCAT44(local_c0._4_4_,local_b8);
      FUN_140002266(&local_58,
                    L"%sreplay/%s/event?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false",
                    puVar7,puVar8);
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_58);
      puVar7 = local_68;
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
        puVar7 = local_68;
      }
    }
    else {
      local_68 = (undefined2 *)0x0;
      pvVar4 = (void *)*param_4;
      local_60 = uVar2;
      FUN_1446dd670(&local_68,uVar2 + 1,0);
      memcpy(local_68,pvVar4,(ulonglong)uVar2 * 2);
      FUN_1400020e8(&local_68,&DAT_149e01f60,1);
      iVar6 = local_5c;
      uVar5 = local_60;
      if ((int)local_60 < 2) {
        local_58 = (undefined2 *)0x0;
        local_50 = *(uint *)(param_1 + 0x40);
        lVar10 = (longlong)(int)local_50;
        pvVar4 = *(void **)(param_1 + 0x38);
        if (lVar10 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar4,lVar10 * 2);
        }
      }
      else {
        iVar9 = *(int *)(param_1 + 0x40) + -1;
        if (*(int *)(param_1 + 0x40) == 0) {
          iVar9 = 0;
        }
        local_58 = local_68;
        local_68 = (undefined2 *)0x0;
        local_50 = local_60;
        local_4c = local_5c;
        local_60 = 0;
        local_5c = 0;
        iVar1 = iVar9 + uVar5;
        if (iVar1 < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar9);
        }
        if (iVar6 < iVar1) {
          FUN_1446f8c06(&local_58);
        }
        FUN_1400020e8(&local_58,*(undefined8 *)(param_1 + 0x38),iVar9);
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(param_1 + 0x10);
      local_88 = *(undefined8 *)(param_1 + 0x60);
      local_80 = *(int *)(param_1 + 0x68) + -1;
      if (*(int *)(param_1 + 0x68) == 0) {
        local_80 = 0;
      }
      FUN_141639c3a(&local_78);
      puVar7 = &DAT_149dfb77a;
      local_a8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        local_a8 = local_78;
      }
      local_c0 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x58) != 0) {
        local_c0 = *(undefined2 **)(param_1 + 0x50);
      }
      local_c8 = &DAT_149dfb77a;
      if (local_50 != 0) {
        local_c8 = local_58;
      }
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_4 + 1) != 0) {
        puVar8 = (undefined2 *)*param_4;
      }
      local_b8 = *(undefined4 *)(param_1 + 0x48);
      if (*(int *)(param_3 + 1) != 0) {
        puVar7 = (undefined2 *)*param_3;
      }
      local_b0 = (undefined2 *)CONCAT44(local_b0._4_4_,local_b8);
      FUN_140002266(&local_68,
                    L"%sreplay/%s/event/%s?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false",
                    puVar7,puVar8);
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_68);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar7 = local_58;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
        puVar7 = local_58;
      }
    }
    if (puVar7 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1 < (int)uVar2;
}



// FUNCTION 14339b8ca FUN_14339b8ca body=369 status=ok
// SIG undefined FUN_14339b8ca(void)

void FUN_14339b8ca(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong **local_88;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((byte)(*(char *)(param_1 + 0x260) - 1U) < 2) {
    plVar2 = (longlong *)FUN_141054386();
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_58);
    uVar3 = (**(code **)(*local_58 + 0xf0))();
    FUN_14783fad6(uVar3,param_1,FUN_14339ba3c);
    uVar3 = FUN_14001cc68(0x70,0x10);
    local_78 = local_58;
    local_70 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_88 = &local_78;
    local_90 = param_6;
    local_98 = param_5;
    FUN_14784094c(uVar3,param_2,param_3,param_4);
    local_68 = uVar3;
    local_60 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_60[1] = &DAT_100000001;
    *local_60 = &PTR_LAB_14a5af430;
    local_60[2] = uVar3;
    FUN_1433980b4(param_1,&local_68);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339ba3c FUN_14339ba3c body=246 status=ok
// SIG undefined FUN_14339ba3c(void)

void FUN_14339ba3c(longlong param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_38);
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar5 != 200) {
      iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))();
      if (iVar5 != 0xcc) goto LAB_14339bac0;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      lVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
      *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + lVar6;
    }
  }
LAB_14339bac0:
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
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339bb46 FUN_14339bb46 body=556 status=ok
// SIG undefined FUN_14339bb46(void)

void FUN_14339bb46(longlong *param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((byte)((char)param_1[0x4c] - 1U) < 2) {
    if ((char)param_1[0x4c] == '\x01') {
      iVar3 = (int)param_3[1];
      uVar8 = 0;
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        if (iVar3 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        else {
          puVar7 = (undefined2 *)*param_3;
        }
        lVar10 = 0;
        uVar8 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar7[lVar10] +
                  (uint)(0x19 < (ushort)puVar7[lVar10] - 0x61) * 0x20) - 0x20;
          uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar4) & 0xff) * 4);
          uVar8 = uVar8 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar10 = lVar10 + 1;
        } while (iVar9 != (int)lVar10);
      }
      if ((int)param_1[99] != *(int *)((longlong)param_1 + 0x344)) {
        plVar5 = param_1 + 0x69;
        if ((longlong *)param_1[0x6a] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[0x6a];
        }
        iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x6b] - 1U & uVar8) * 4);
        if (iVar9 != -1) {
          lVar10 = param_1[0x62];
LAB_14339bc65:
          lVar6 = (longlong)iVar9;
          iVar9 = *(int *)(lVar10 + 8 + lVar6 * 0x18);
          if (iVar9 == iVar3) {
            if (1 < iVar3) {
              lVar11 = 0;
              do {
                uVar1 = *(ushort *)(*(longlong *)(lVar10 + lVar6 * 0x18) + lVar11);
                uVar2 = *(ushort *)(*param_3 + lVar11);
                if (uVar1 == uVar2) {
                  if (uVar1 == 0) break;
                }
                else {
                  if (0x7f < (uVar2 | uVar1)) {
                    iVar9 = (uint)uVar1 - (uint)uVar2;
                    goto LAB_14339bcd8;
                  }
                  if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                  goto code_r0x00014339bcd5;
                }
                lVar11 = lVar11 + 2;
              } while( true );
            }
          }
          else if (iVar9 + iVar3 != 1) goto LAB_14339bc82;
          goto LAB_14339bd03;
        }
      }
LAB_14339bce4:
      FUN_14482b35e(param_1 + 0x62,local_58,param_3,0);
      (**(code **)(*param_1 + 0x180))(param_1,param_3);
    }
LAB_14339bd03:
    FUN_140056680(local_58,&DAT_149dfb77a);
    local_60 = param_5;
    local_68 = param_4;
    (**(code **)(*param_1 + 0x90))(param_1,local_58,param_2,param_3);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014339bcd5:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_14339bcd8:
  if (iVar9 == 0) goto LAB_14339bd03;
LAB_14339bc82:
  iVar9 = *(int *)(lVar10 + 0x10 + lVar6 * 0x18);
  if (iVar9 == -1) goto LAB_14339bce4;
  goto LAB_14339bc65;
}



// FUNCTION 14339bd74 FUN_14339bd74 body=746 status=ok
// SIG undefined FUN_14339bd74(void)

void FUN_14339bd74(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_58);
  local_60 = 6;
  local_68 = &PTR_FUN_14a5abbb0;
  if (param_4 == '\0') {
LAB_14339bf28:
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (*(int *)((longlong)param_1 + 0x154) != 0) {
      FUN_144893a1c(param_1 + 0x29,0);
    }
    uStack_88 = 0;
    local_90 = 6;
    local_98 = &PTR_FUN_14a5ab538;
    plVar6 = (longlong *)param_1[0x55];
    if ((int)param_1[0x56] == 0) {
LAB_14339bf9d:
      if (plVar6 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x60))(plVar6,&local_98);
      plVar6 = (longlong *)param_1[0x55];
      if ((int)param_1[0x56] != 0) {
        if (plVar6 == (longlong *)0x0) goto LAB_14339bfa2;
        (**(code **)*plVar6)(plVar6,0);
        FUN_1446efa72(param_1 + 0x55,0,0,0x10);
        *(undefined4 *)(param_1 + 0x56) = 0;
        plVar6 = (longlong *)param_1[0x55];
      }
      goto LAB_14339bf9d;
    }
LAB_14339bfa2:
    param_1[0x55] = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
    FUN_1478403ee(&local_98,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,&local_98);
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar4 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar4 != 200) goto LAB_14339bf28;
    local_60 = 0;
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x48))();
    uVar3 = *(uint *)(puVar5 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar4 = (int)param_1[0x15];
      *(uint *)(param_1 + 0x15) = uVar3 + iVar4;
      if ((uint)(*(int *)((longlong)param_1 + 0xac) - iVar4) < uVar3) {
        FUN_1447403be(param_1 + 0x14,iVar4);
      }
      memcpy((void *)((longlong)iVar4 + param_1[0x14]),(void *)*puVar5,(longlong)(int)uVar3);
    }
  }
  if (((int)param_5[1] != 0) && (plVar6 = (longlong *)*param_5, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_68);
  }
  plVar6 = (longlong *)param_2[1];
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
  plVar6 = (longlong *)param_3[1];
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
  puVar5 = (undefined8 *)*param_5;
  if ((int)param_5[1] != 0) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_14339bf00;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
    puVar5 = (undefined8 *)*param_5;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14339bf00:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339c060 FUN_14339c060 body=1514 status=ok
// SIG undefined FUN_14339c060(void)

void FUN_14339c060(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  int param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98 [2];
  wchar_t *local_88;
  int local_80;
  longlong local_70;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_58);
  if ((param_4 == '\0') || (iVar7 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar7 != 200)) {
    if (*(char *)((longlong)param_1 + 0x262) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x262) = 0;
      goto LAB_14339c196;
    }
LAB_14339c432:
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (*(int *)((longlong)param_1 + 0x154) != 0) {
      FUN_144893a1c(param_1 + 0x29,0);
    }
    uVar11 = 3;
  }
  else if ((int)param_1[0x48] == param_5) {
    plVar5 = (longlong *)*param_3;
    FUN_140056680(local_98,L"NumChunks");
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88,local_98);
    pwVar9 = local_88;
    if (local_80 == 0) {
      pwVar9 = L"";
    }
    lVar10 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)pwVar9 + lVar10);
      uVar12 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)&DAT_149dfb77a + lVar10);
      uVar8 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14339c156;
        }
        iVar7 = uVar12 - uVar8;
        goto LAB_14339c213;
      }
      if (uVar3 == 0) break;
LAB_14339c156:
      lVar10 = lVar10 + 2;
    }
    iVar7 = 0;
LAB_14339c213:
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (iVar7 == 0) goto LAB_14339c196;
    plVar5 = (longlong *)*param_3;
    FUN_140056680(local_98,L"NumChunks");
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88,local_98);
    pwVar9 = L"";
    if (local_80 != 0) {
      pwVar9 = local_88;
    }
    iVar7 = _wtoi(pwVar9);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    plVar5 = (longlong *)*param_3;
    FUN_140056680(local_98,L"Time");
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88,local_98);
    pwVar9 = local_88;
    if (local_80 == 0) {
      pwVar9 = L"";
    }
    uVar8 = _wtoi(pwVar9);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if ((int)param_1[0x4f] < iVar7) {
      *(int *)(param_1 + 0x4f) = iVar7;
    }
    if (*(uint *)((longlong)param_1 + 0x27c) < uVar8) {
      *(uint *)((longlong)param_1 + 0x27c) = uVar8;
    }
    plVar5 = (longlong *)*param_3;
    FUN_140056680(local_98,L"State");
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88,local_98);
    pwVar9 = local_88;
    if (local_80 == 0) {
      pwVar9 = L"";
    }
    lVar10 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)pwVar9 + lVar10);
      uVar12 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)&DAT_14a5ae8f8 + lVar10);
      uVar8 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14339c383;
        }
        iVar7 = uVar12 - uVar8;
        goto LAB_14339c3af;
      }
      if (uVar3 == 0) break;
LAB_14339c383:
      lVar10 = lVar10 + 2;
    }
    iVar7 = 0;
LAB_14339c3af:
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if ((iVar7 != 0) && (*(char *)((longlong)param_1 + 0x262) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x262) = 0;
    }
    lVar10 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    if ((*(int *)(lVar10 + 8) < 1) && (*(char *)((longlong)param_1 + 0x262) != '\x01')) {
      if (param_6 != '\0') goto LAB_14339c196;
      goto LAB_14339c432;
    }
    lVar10 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    if (*(int *)(lVar10 + 8) < 1) {
      if ((int)param_1[0x54] != 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      goto LAB_14339c196;
    }
    if ((int)param_1[0x2a] == 0) {
      plVar5 = (longlong *)*param_3;
      FUN_140056680(local_98,L"MTime1");
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_88,local_98);
      pwVar9 = local_88;
      if (local_80 == 0) {
        pwVar9 = L"";
      }
      iVar7 = _wtoi(pwVar9);
      *(int *)((longlong)param_1 + 0x284) = iVar7;
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
    plVar5 = (longlong *)*param_3;
    FUN_140056680(local_98,L"MTime2");
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_88,local_98);
    pwVar9 = L"";
    if (local_80 != 0) {
      pwVar9 = local_88;
    }
    iVar7 = _wtoi(pwVar9);
    *(int *)(param_1 + 0x51) = iVar7;
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    local_a8 = *param_3;
    local_a0 = param_3[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_b8 = *param_2;
    local_b0 = param_2[1];
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    FUN_14783fe0e(param_1,&local_b8,&local_a8);
    local_c8 = *param_3;
    local_c0 = param_3[1];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_c8,param_1 + 0x29);
    if (cVar6 != '\0') {
      *(int *)(param_1 + 0x48) = (int)param_1[0x48] + 1;
      goto LAB_14339c196;
    }
    uVar11 = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (*(int *)((longlong)param_1 + 0x154) != 0) {
      FUN_144893a1c(param_1 + 0x29,0);
    }
    uVar11 = 2;
  }
  FUN_1478403ee(&local_88,uVar11);
  (**(code **)(*param_1 + 0x1c0))(param_1);
  (**(code **)(*param_1 + 0x178))(param_1,&local_88);
  if (local_60 != 0) {
    (**(code **)(local_60 + -0x10))(local_60 + -0x10);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_14339c196:
  plVar5 = (longlong *)param_2[1];
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339c64c FUN_14339c64c body=637 status=ok
// SIG undefined FUN_14339c64c(void)

void FUN_14339c64c(longlong param_1,undefined8 *param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined **local_98;
  longlong *local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x238) < 2) {
    local_60 = (longlong *)&DAT_00000006;
    local_68 = &PTR_FUN_14a5ab6c8;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_68);
      local_68 = &PTR_FUN_14a5ab6c8;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    plVar4 = (longlong *)FUN_141054386();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_68);
    ppuVar3 = local_68;
    if (param_3 == '\0') {
      puVar7 = &DAT_149dfb77a;
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar8 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 0x238) != 0) {
        puVar7 = *(undefined2 **)(param_1 + 0x230);
      }
      pwVar6 = L"%sreplay/%s?shouldKeep=false";
    }
    else {
      puVar7 = &DAT_149dfb77a;
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar8 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 0x238) != 0) {
        puVar7 = *(undefined2 **)(param_1 + 0x230);
      }
      pwVar6 = L"%sreplay/%s?shouldKeep=true";
    }
    FUN_140002266(local_78,pwVar6,puVar7,puVar8);
    (**(code **)(*ppuVar3 + 0x68))(ppuVar3,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_68;
    FUN_140056680(local_78,&DAT_149f280e2);
    (**(code **)(*ppuVar3 + 0x60))(ppuVar3,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_68;
    FUN_140056680(local_78,L"application/json");
    FUN_140056680(local_88,L"Content-Type");
    (**(code **)(*ppuVar3 + 0xb0))(ppuVar3,local_88,local_78);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    uVar5 = (**(code **)(*local_68 + 0xf0))();
    FUN_147840e0a(uVar5,param_1,param_4,param_2);
    local_98 = local_68;
    local_90 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_a8 = 0;
    FUN_143397cf2(param_1,0x12,&local_98,0);
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
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
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339c8ca FUN_14339c8ca body=410 status=ok
// SIG undefined FUN_14339c8ca(void)

void FUN_14339c8ca(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined4 local_70;
  longlong local_68 [4];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[3] = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,local_68 + 3);
  local_70 = 6;
  local_78 = &PTR_FUN_14a5ab6c8;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  if (param_4 != '\0') {
    iVar4 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar4 == 0xcc) {
      local_70 = 0;
      iVar4 = (int)param_6[1] + -1;
      if ((int)param_6[1] == 0) {
        iVar4 = 0;
      }
      FUN_1402980a2(local_68,*param_6,iVar4);
    }
  }
  if ((int)param_5[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)*param_5;
  }
  (**(code **)(*plVar5 + 0x58))(plVar5,&local_78);
  local_78 = &PTR_FUN_14a5ab6c8;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_2[1];
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
  plVar5 = (longlong *)param_3[1];
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
  if ((int)param_5[1] != 0) {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14339ca2b;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_14339ca2b:
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339ca66 FUN_14339ca66 body=91 status=ok
// SIG undefined FUN_14339ca66(void)

void FUN_14339ca66(void)

{
  longlong *plVar1;
  undefined8 *in_R9;
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &PTR_FUN_14a5ab6d0;
  local_10 = 1;
  if (*(int *)(in_R9 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*in_R9;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339cac2 FUN_14339cac2 body=91 status=ok
// SIG undefined FUN_14339cac2(void)

void FUN_14339cac2(void)

{
  longlong *plVar1;
  undefined8 *in_R9;
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &PTR_FUN_14a5ab6d0;
  local_10 = 1;
  if (*(int *)(in_R9 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*in_R9;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339cb1e FUN_14339cb1e body=384 status=ok
// SIG undefined FUN_14339cb1e(void)

void FUN_14339cb1e(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_1[0x61];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_48);
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar5 == 0xcc) {
      *(undefined4 *)(param_1 + 0x77) = 0;
      goto LAB_14339cbb8;
    }
  }
  lVar4 = param_1[0x77];
  *(int *)(param_1 + 0x77) = (int)lVar4 + 1;
  if (5 < (int)lVar4) {
    FUN_1478403ee(local_78,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,local_78);
    if (local_50 != 0) {
      (**(code **)(local_50 + -0x10))(local_50 + -0x10);
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14339cbb8:
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
  plVar3 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339cca0 FUN_14339cca0 body=98 status=ok
// SIG undefined FUN_14339cca0(void)

void FUN_14339cca0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &PTR_FUN_14a5ab5f0;
  local_10 = 1;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339cd04 FUN_14339cd04 body=1361 status=ok
// SIG undefined FUN_14339cd04(void)

void FUN_14339cd04(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_f0;
  undefined **local_e8;
  longlong *local_e0;
  void *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined **local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x238) < 2) {
    local_70 = (longlong *)&DAT_00000006;
    local_78 = &PTR_FUN_14a5ab608;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    plVar5 = (longlong *)*param_6;
    if (plVar5 != (longlong *)0x0 && (int)param_6[1] != 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,&local_78);
    }
    FUN_14783040a(&local_78);
    goto LAB_14339d228;
  }
  plVar5 = (longlong *)FUN_141054386();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_78);
  puVar8 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar9 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    puVar8 = *(undefined2 **)(param_1 + 0x230);
  }
  FUN_140002266(local_88,L"%sreplay?app=%s",puVar8,puVar9);
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    FUN_140002266(&local_98,L"&cl=%u");
    iVar3 = local_90 + -1;
    if (local_90 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(local_88,local_98,iVar3);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_2 + 2) != 0) {
    FUN_140002266(&local_98,L"&version=%u");
    iVar3 = local_90 + -1;
    if (local_90 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(local_88,local_98,iVar3);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(DAT_14cabd380 + 1);
  lVar11 = (longlong)local_a0;
  pvVar7 = (void *)*DAT_14cabd380;
  if (lVar11 == 0) {
    local_9c = 0;
LAB_14339cee7:
    local_98 = (void *)0x0;
    local_90 = *(int *)(param_4 + 1);
    lVar11 = (longlong)local_90;
    pvVar7 = (void *)*param_4;
    if (lVar11 == 0) goto LAB_14339cf53;
    FUN_1446dd670(&local_98,local_90,0);
LAB_14339cf83:
    memcpy(local_98,pvVar7,lVar11 * 2);
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar7,lVar11 * 2);
    if (local_a0 < 2) goto LAB_14339cee7;
    local_98 = (void *)0x0;
    local_90 = *(int *)(DAT_14cabd380 + 1);
    lVar11 = (longlong)local_90;
    pvVar7 = (void *)*DAT_14cabd380;
    if (lVar11 != 0) {
      FUN_1446dd670(&local_98,local_90,0);
      goto LAB_14339cf83;
    }
LAB_14339cf53:
    local_98 = (void *)0x0;
    local_8c = 0;
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_f0 = param_1;
  if (1 < local_90) {
    FUN_140002266(&local_a8,L"&meta=%s",local_98);
    iVar3 = local_a0 + -1;
    if (local_a0 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(local_88,local_a8,iVar3);
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14339776b(&local_a8,param_3);
  if (1 < local_a0) {
    local_d8 = local_a8;
    local_d0 = local_a0 + -1;
    FUN_141639c3a(&local_c8);
    puVar9 = local_c8;
    if (local_c0 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_b8,L"&user=%s",puVar9);
    iVar3 = local_b0 + -1;
    if (local_b0 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(local_88,local_b8,iVar3);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0 < (int)param_5[1]) {
    lVar10 = 8;
    lVar11 = 0;
    do {
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(*param_5 + lVar10) != 0) {
        puVar9 = *(undefined2 **)(*param_5 + -8 + lVar10);
      }
      FUN_140002266(&local_b8,&DAT_14a5ae7e6,puVar9);
      iVar3 = local_b0 + -1;
      if (local_b0 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(local_88,local_b8,iVar3);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < (int)param_5[1]);
  }
  (**(code **)(*local_78 + 0x68))(local_78,local_88);
  ppuVar4 = local_78;
  FUN_140056680(&local_b8,&DAT_149e8e77a);
  (**(code **)(*ppuVar4 + 0x60))(ppuVar4,&local_b8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  uVar6 = (**(code **)(*local_78 + 0xf0))();
  lVar11 = local_f0;
  FUN_147841216(uVar6,local_f0,param_6);
  local_e8 = local_78;
  local_e0 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_f8 = 0;
  FUN_143397cf2(lVar11,8,&local_e8,0);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14339d228:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339d256 FUN_14339d256 body=529 status=ok
// SIG undefined FUN_14339d256(void)

void FUN_14339d256(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined2 *local_a8;
  undefined **local_98;
  longlong *local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78 [2];
  undefined **local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x238) < 2) {
    local_60 = (longlong *)&DAT_00000006;
    local_68 = &PTR_FUN_14a5ab608;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_68);
    }
    FUN_14783040a(&local_68);
  }
  else {
    plVar4 = (longlong *)FUN_141054386();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_68);
    ppuVar3 = local_68;
    FUN_14339776b(&local_88,param_3);
    puVar6 = &DAT_149dfb77a;
    local_a8 = &DAT_149dfb77a;
    if (local_80 != 0) {
      local_a8 = local_88;
    }
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    local_b8 = *(undefined4 *)(param_2 + 2);
    local_b0 = *(undefined4 *)((longlong)param_2 + 0x14);
    if (*(int *)(param_1 + 0x238) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x230);
    }
    FUN_140002266(local_78,L"%sreplay?app=%s&version=%u&cl=%u&recent=%s",puVar6,puVar7);
    (**(code **)(*ppuVar3 + 0x68))(ppuVar3,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_68;
    FUN_140056680(local_78,&DAT_149e8e77a);
    (**(code **)(*ppuVar3 + 0x60))(ppuVar3,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    uVar5 = (**(code **)(*local_68 + 0xf0))();
    FUN_147841216(uVar5,param_1,param_4);
    local_98 = local_68;
    local_90 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_b8 = 0;
    FUN_143397cf2(param_1,8,&local_98,0);
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
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
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339d468 FUN_14339d468 body=138 status=ok
// SIG undefined FUN_14339d468(void)

bool FUN_14339d468(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_4 + 1);
  if (1 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (*(int *)(param_3 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_3;
    }
    FUN_140002266(local_30,L"%sreplay/%s/users",puVar3,*param_4);
    (**(code **)(*plVar2 + 0x68))(plVar2,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339d4f4 FUN_14339d4f4 body=312 status=ok
// SIG undefined FUN_14339d4f4(void)

void FUN_14339d4f4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x260) == '\x01') && (1 < *(int *)(param_2 + 8))) {
    plVar2 = (longlong *)FUN_141054386();
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_38);
    uVar3 = (**(code **)(*local_38 + 0xf0))();
    FUN_14783fad6(uVar3,param_1,FUN_14339d62e);
    uVar3 = FUN_14001cc68(0x38,0x10);
    local_58 = local_38;
    local_50 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1478412e8(uVar3,param_2,&local_58);
    local_48 = uVar3;
    local_40 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_40[1] = &DAT_100000001;
    *local_40 = &PTR_LAB_14a5af6f0;
    local_40[2] = uVar3;
    FUN_1433980b4(param_1,&local_48);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339d62e FUN_14339d62e body=193 status=ok
// SIG undefined FUN_14339d62e(void)

void FUN_14339d62e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_30);
  if (param_4 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x58))();
  }
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
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339d702 FUN_14339d702 body=710 status=ok
// SIG undefined FUN_14339d702(void)

void FUN_14339d702(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_40);
  local_50 = 6;
  local_58 = &PTR_FUN_14a5ab538;
  local_48 = 0;
  if ((param_4 == '\0') || (iVar4 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar4 != 200)) {
    FUN_1478403ee(&local_98,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,&local_98);
    if (local_70 != 0) {
      (**(code **)(local_70 + -0x10))(local_70 + -0x10);
    }
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_68);
    FUN_14783117d(param_1[0x5c],(int)param_1[0x5d]);
    *(undefined4 *)(param_1 + 0x5d) = 0;
    if (*(int *)((longlong)param_1 + 0x2ec) != 0) {
      FUN_147844b14();
    }
    local_90 = local_60 + -1;
    if (local_60 == 0) {
      local_90 = 0;
    }
    local_98 = local_68;
    cVar3 = FUN_14279eb63(param_1 + 0x5b);
    if (cVar3 == '\0') {
      FUN_1478403ee(&local_98,1);
      (**(code **)(*param_1 + 0x1c0))(param_1);
      (**(code **)(*param_1 + 0x178))(param_1,&local_98);
      if (local_70 != 0) {
        (**(code **)(local_70 + -0x10))(local_70 + -0x10);
      }
      bVar6 = local_80 != 0;
      local_80 = local_68;
      if (bVar6) {
        FUN_1400020a8();
        local_80 = local_68;
      }
    }
    else {
      FUN_147844b44(param_1[0x5c],(int)param_1[0x5d]);
      local_50 = 0;
      local_80 = local_68;
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x55];
  if ((int)param_1[0x56] != 0) {
    if (plVar5 == (longlong *)0x0) goto LAB_14339d8f6;
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_58);
    plVar5 = (longlong *)param_1[0x55];
    if ((int)param_1[0x56] != 0) {
      if (plVar5 == (longlong *)0x0) goto LAB_14339d8f6;
      (**(code **)*plVar5)(plVar5,0);
      FUN_1446efa72(param_1 + 0x55,0,0,0x10);
      *(undefined4 *)(param_1 + 0x56) = 0;
      plVar5 = (longlong *)param_1[0x55];
    }
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14339d8f6:
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  plVar5 = (longlong *)param_2[1];
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339d9ca FUN_14339d9ca body=465 status=ok
// SIG undefined FUN_14339d9ca(void)

void FUN_14339d9ca(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined **local_70;
  longlong *local_68;
  longlong local_60 [2];
  undefined **local_50;
  longlong *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x238) < 2) {
    local_48 = (longlong *)&DAT_00000006;
    local_50 = &PTR_FUN_14a5ab610;
    local_40 = &PTR_FUN_14a5ab620;
    local_38 = 0;
    uStack_30 = 0;
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_50);
    }
    local_50 = &PTR_FUN_14a5ab610;
    FUN_147831144(&local_40);
  }
  else {
    plVar4 = (longlong *)FUN_141054386();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_50);
    ppuVar3 = local_50;
    puVar6 = &DAT_149dfb77a;
    local_78 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      local_78 = (undefined2 *)*param_3;
    }
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x238) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x230);
    }
    FUN_140002266(local_60,L"%sreplay/%s/event?group=%s",puVar6,puVar7);
    (**(code **)(*ppuVar3 + 0x68))(ppuVar3,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_50;
    FUN_140056680(local_60,&DAT_149e8e77a);
    (**(code **)(*ppuVar3 + 0x60))(ppuVar3,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    uVar5 = (**(code **)(*local_50 + 0xf0))();
    FUN_147841586(uVar5,param_1,param_4);
    local_70 = local_50;
    local_68 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined2 *)((ulonglong)local_78 & 0xffffffff00000000);
    FUN_143397cf2(param_1,0xe,&local_70,0);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339db9c FUN_14339db9c body=659 status=ok
// SIG undefined FUN_14339db9c(void)

void FUN_14339db9c(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  longlong local_c0;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined4 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_1478408a4(param_1,&local_58);
  local_78 = 6;
  local_80 = &PTR_FUN_14a5ab610;
  local_70 = &PTR_FUN_14a5ab620;
  local_68 = 0;
  uStack_60 = 0;
  if (param_4 == '\0') {
LAB_14339dc9d:
    FUN_1478403ee(&local_d8,3);
    (**(code **)(*param_1 + 0x1c0))(param_1);
    (**(code **)(*param_1 + 0x178))(param_1,&local_d8);
    if (local_b0 != 0) {
      (**(code **)(local_b0 + -0x10))(local_b0 + -0x10);
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar6 = (**(code **)(*(longlong *)*param_3 + 0x58))();
    if (iVar6 != 200) goto LAB_14339dc9d;
    local_98 = &PTR_FUN_14a5ab620;
    local_90 = 0;
    uStack_88 = 0;
    (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,&local_a8);
    local_d0 = local_a0 + -1;
    if (local_a0 == 0) {
      local_d0 = 0;
    }
    local_d8 = local_a8;
    cVar5 = FUN_14279eb63(&local_70);
    if (cVar5 == '\0') {
      FUN_1478403ee(&local_d8,1);
      (**(code **)(*param_1 + 0x1c0))(param_1);
      (**(code **)(*param_1 + 0x178))(param_1,&local_d8);
      if (local_b0 != 0) {
        (**(code **)(local_b0 + -0x10))(local_b0 + -0x10);
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_78 = 0;
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_147831144(&local_98);
  }
  if (((int)param_5[1] != 0) && (plVar3 = (longlong *)*param_5, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_80);
  }
  local_80 = &PTR_FUN_14a5ab610;
  FUN_147831144(&local_70);
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
  plVar3 = (longlong *)param_3[1];
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
  if ((int)param_5[1] != 0) {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14339ddfb;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_14339ddfb:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339de30 FUN_14339de30 body=645 status=ok
// SIG undefined FUN_14339de30(void)

ulonglong FUN_14339de30(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  longlong *plVar5;
  char cVar6;
  void **ppvVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined1 auStack_128 [32];
  void *local_108;
  undefined8 uStack_100;
  undefined **local_f8 [11];
  longlong *local_a0;
  longlong *local_80;
  void *local_68;
  int iStack_60;
  int iStack_5c;
  undefined5 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar6 = (**(code **)(*param_1 + 0x1d0))();
  if (cVar6 == '\0') {
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x48))();
    uVar4 = *(uint *)(puVar8 + 1);
    local_80 = param_3;
    if ((longlong)(int)uVar4 != 0) {
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + uVar4;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar3) < uVar4) {
        FUN_1447403be(param_3,iVar3);
      }
      memcpy((void *)((longlong)iVar3 + *param_3),(void *)*puVar8,(longlong)(int)uVar4);
    }
  }
  else {
    FUN_144869430(local_f8);
    local_f8[0] = &PTR_FUN_14a5aec70;
    local_68 = (void *)0x0;
    iStack_60 = 0;
    iStack_5c = 0;
    uStack_58 = 0;
    ppvVar7 = (void **)(**(code **)(*(longlong *)*param_2 + 0x48))();
    if (&local_68 != ppvVar7) {
      iVar3 = *(int *)(ppvVar7 + 1);
      _Src = *ppvVar7;
      iStack_60 = iVar3;
      if (iVar3 == 0 && iStack_5c == 0) {
        iStack_5c = 0;
      }
      else {
        FUN_1447a127e(&local_68,iVar3);
        if (iVar3 != 0) {
          memcpy(local_68,_Src,(longlong)iVar3);
        }
      }
    }
    local_108 = (void *)0x0;
    uStack_100 = 0;
    cVar6 = (**(code **)(*param_1 + 0x1e0))(param_1,local_f8);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        FUN_144893a1c(param_3,0);
      }
    }
    else {
      _Size = (size_t)(int)(uint)uStack_100;
      if (_Size != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + (uint)uStack_100;
        if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar3) < (uint)uStack_100) {
          FUN_1447403be(param_3,iVar3);
        }
        memcpy((void *)((longlong)iVar3 + *param_3),local_108,_Size);
      }
    }
    if (local_108 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_f8[0] = &PTR_FUN_14a5aec70;
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_f8[0] = &PTR__purecall_149e35f70;
    if (local_a0 != (longlong *)0x0) {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a0);
    }
    if (local_80 != (longlong *)0x0) {
      if (local_80[8] != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_80);
    }
    if (cVar6 == '\0') {
      uVar9 = 0;
      goto LAB_14339e022;
    }
  }
  uVar9 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
LAB_14339e022:
  plVar5 = (longlong *)param_2[1];
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
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339e0b6 FUN_14339e0b6 body=1668 status=ok
// SIG undefined FUN_14339e0b6(void)

ulonglong FUN_14339e0b6(longlong *param_1)

{
  double *pdVar1;
  int *piVar2;
  longlong *plVar3;
  ushort uVar4;
  longlong *plVar5;
  LARGE_INTEGER LVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  LARGE_INTEGER LVar12;
  LPCRITICAL_SECTION p_Var13;
  int iVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong lVar17;
  undefined2 *puVar18;
  uint uVar19;
  LARGE_INTEGER *pLVar20;
  longlong *plVar21;
  double dVar22;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  LARGE_INTEGER local_78 [2];
  LARGE_INTEGER local_68;
  longlong *local_60;
  LARGE_INTEGER local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x60] == 0) {
    if (0 < (int)param_1[0x5f]) {
      plVar10 = param_1 + 0x5e;
      plVar21 = *(longlong **)*plVar10;
      plVar5 = (longlong *)((longlong *)*plVar10)[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FUN_147843d06(plVar10);
      FUN_147843d68(plVar10);
      if ((int)plVar21[1] == 0x11) {
        *(undefined2 *)(param_1 + 0x4c) = 0;
LAB_14339e3f3:
        uVar9 = FUN_14339e0b6(param_1);
        uVar15 = (ulonglong)uVar9;
      }
      else {
        if ((int)plVar21[1] == 0x10) {
          if (((1 < (int)param_1[0x42]) && ((int)param_1[0x15] != 0)) &&
             ((char)param_1[0x4c] != '\0')) {
            plVar10 = (longlong *)FUN_141054386();
            (**(code **)(*plVar10 + 0x40))(plVar10,&local_58);
            uVar11 = (**(code **)(*(longlong *)local_58 + 0xf0))();
            FUN_14783fad6(uVar11,param_1,FUN_143398908);
            LVar12 = local_58;
            puVar16 = &DAT_149dfb77a;
            puVar18 = &DAT_149dfb77a;
            if ((int)param_1[0x42] != 0) {
              puVar18 = (undefined2 *)param_1[0x41];
            }
            local_98 = (undefined4)param_1[0x48];
            local_90 = *(undefined4 *)((longlong)param_1 + 0x27c);
            if ((int)param_1[0x47] != 0) {
              puVar16 = (undefined2 *)param_1[0x46];
            }
            FUN_140002266(&local_68,L"%sreplay/%s/file/replay.header?numChunks=%i&time=%i",puVar16,
                          puVar18);
            (**(code **)(*(longlong *)LVar12 + 0x68))(LVar12.QuadPart,&local_68);
            if ((longlong *)local_68.QuadPart != (longlong *)0x0) {
              FUN_1400020a8();
            }
            LVar12 = local_58;
            FUN_140056680(&local_68,&DAT_149f280e2);
            (**(code **)(*(longlong *)LVar12 + 0x60))(LVar12.QuadPart,&local_68);
            if ((longlong *)local_68.QuadPart != (longlong *)0x0) {
              FUN_1400020a8();
            }
            LVar12 = local_58;
            FUN_140056680(&local_68,L"application/octet-stream");
            FUN_140056680(local_78,L"Content-Type");
            (**(code **)(*(longlong *)LVar12 + 0xb0))(LVar12.QuadPart,local_78,&local_68);
            if (local_78[0].QuadPart != 0) {
              FUN_1400020a8();
            }
            if ((longlong *)local_68.QuadPart != (longlong *)0x0) {
              FUN_1400020a8();
            }
            (**(code **)(*(longlong *)local_58 + 0x88))(local_58.QuadPart,param_1 + 0x14);
            *(undefined4 *)(param_1 + 0x15) = 0;
            if (*(int *)((longlong)param_1 + 0xac) != 0) {
              FUN_144893a1c(param_1 + 0x14,0);
            }
            *(undefined4 *)(param_1 + 0x16) = 0;
            local_68.s = local_58.s;
            local_60 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            local_98 = 0x40000000;
            FUN_143397cf2(param_1,1,&local_68,3);
            QueryPerformanceCounter(local_78);
            param_1[0x49] = (longlong)((double)local_78[0].QuadPart * DAT_14c83f420 + 16777216.0);
            plVar10 = local_50;
LAB_14339e671:
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar21 = plVar10 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)*plVar21 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          goto LAB_14339e3f3;
        }
        cVar8 = (**(code **)(*plVar21 + 8))(plVar21,param_1,param_1 + 0x46,param_1 + 0x41);
        if ((cVar8 == '\0') || (plVar21[2] == 0)) goto LAB_14339e3f3;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        plVar10 = (longlong *)param_1[0x61];
        param_1[0x60] = (longlong)plVar21;
        param_1[0x61] = (longlong)plVar5;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar21 = plVar10 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        plVar10 = param_1 + 0x6d;
        (**(code **)**(undefined8 **)(param_1[0x60] + 0x10))();
        uVar15 = 0;
        iVar14 = (int)local_50 + -1;
        if ((int)local_50 == 0) {
          iVar14 = 0;
        }
        if (0 < iVar14) {
          LVar12 = local_58;
          if ((int)local_50 == 0) {
            LVar12.QuadPart = (LONGLONG)&DAT_149dfb77a;
          }
          lVar17 = 0;
          uVar15 = 0;
          do {
            uVar4 = *(ushort *)(LVar12.QuadPart + lVar17 * 2);
            uVar9 = ((uint)(0x19 < uVar4 - 0x61) * 0x20 + (uint)uVar4) - 0x20;
            uVar19 = (uint)(uVar15 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar9) & 0xff) * 4);
            uVar15 = (ulonglong)
                     (uVar19 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar9 >> 8 & 0xff) * 4))
            ;
            lVar17 = lVar17 + 1;
          } while (iVar14 != (int)lVar17);
        }
        iVar14 = FUN_147842a1e(plVar10,uVar15,&local_58);
        if (iVar14 == -1) {
          lVar17 = 0;
        }
        else {
          lVar17 = (longlong)iVar14 * 0x30 + *plVar10;
        }
        pLVar20 = (LARGE_INTEGER *)(lVar17 + 0x10);
        if (lVar17 == 0) {
          pLVar20 = (LARGE_INTEGER *)0x0;
        }
        if ((longlong *)local_58.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (pLVar20 != (LARGE_INTEGER *)0x0) {
          p_Var13 = (LPCRITICAL_SECTION)
                    (**(code **)(**(longlong **)(param_1[0x60] + 0x10) + 0xf0))();
          EnterCriticalSection(p_Var13);
          if (p_Var13[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || p_Var13[1].LockCount == 0)
          {
            cVar8 = '\0';
          }
          else {
            cVar8 = (**(code **)(*(longlong *)p_Var13[1].DebugInfo + 0x30))();
          }
          if (p_Var13 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var13);
          }
          if (cVar8 != '\0') {
            QueryPerformanceCounter(&local_58);
            pLVar20[2] = (LARGE_INTEGER)((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0);
            p_Var13 = (LPCRITICAL_SECTION)
                      (**(code **)(**(longlong **)(param_1[0x60] + 0x10) + 0xf0))();
            LVar12 = *pLVar20;
            plVar10 = (longlong *)pLVar20[1].QuadPart;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            LVar6 = *(LARGE_INTEGER *)(param_1[0x60] + 0x10);
            plVar21 = *(longlong **)(param_1[0x60] + 0x18);
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
            }
            EnterCriticalSection(p_Var13);
            if ((p_Var13[1].LockCount != 0) &&
               (p_Var7 = p_Var13[1].DebugInfo, p_Var7 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
              local_68 = LVar6;
              local_60 = plVar21;
              local_58 = LVar12;
              local_50 = plVar10;
              (**(code **)(*(longlong *)p_Var7 + 0x60))(p_Var7,&local_68,&local_58,1);
              plVar10 = (longlong *)0x0;
              plVar21 = (longlong *)0x0;
            }
            if (p_Var13 != (LPCRITICAL_SECTION)0x0) {
              LeaveCriticalSection(p_Var13);
            }
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar21 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar2 = (int *)((longlong)plVar21 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            goto LAB_14339e671;
          }
          (**(code **)**(undefined8 **)(param_1[0x60] + 0x10))
                    (*(undefined8 **)(param_1[0x60] + 0x10),&local_58);
          FUN_147842dd8(plVar10,&local_58);
          if ((longlong *)local_58.QuadPart != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        local_88 = *(undefined8 *)(param_1[0x60] + 0x10);
        local_80 = *(longlong *)(param_1[0x60] + 0x18);
        if (local_80 != 0) {
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*param_1 + 0x1c8))(param_1,&local_88);
        uVar15 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      goto LAB_14339e150;
    }
  }
  else if (0.0 < *(double *)(param_1[0x60] + 0x30)) {
    QueryPerformanceCounter(&local_58);
    dVar22 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
    pdVar1 = (double *)(param_1[0x60] + 0x30);
    if (*pdVar1 <= dVar22 && dVar22 != *pdVar1) {
      *(undefined8 *)(param_1[0x60] + 0x30) = 0;
      (**(code **)(**(longlong **)(param_1[0x60] + 0x10) + 0xe8))();
    }
  }
  uVar15 = 0;
LAB_14339e150:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 14339e73c FUN_14339e73c body=1246 status=ok
// SIG undefined FUN_14339e73c(void)

void FUN_14339e73c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  LARGE_INTEGER LVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  LARGE_INTEGER local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < (longlong)*(int *)(param_1 + 0x10)) {
    plVar12 = (longlong *)(param_1 + 8);
    uVar15 = (longlong)*(int *)(param_1 + 0x10);
    do {
      puVar14 = &DAT_149dfb77a;
      lVar11 = (uVar15 - 1) * 0x10;
      lVar3 = *(longlong *)(*plVar12 + lVar11);
      FUN_14339e0b6(lVar3);
      if (*(char *)(lVar3 + 0x261) == '\0') {
        if (*(char *)(lVar3 + 0x260) == '\x02') {
          if ((longlong)*(int *)(lVar3 + 0x2f8) != 0) {
            lVar10 = 0;
            do {
              if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x2f0) + lVar10) + 8) == 4)
              goto LAB_14339e85c;
              lVar10 = lVar10 + 0x10;
            } while ((longlong)*(int *)(lVar3 + 0x2f8) * 0x10 != lVar10);
          }
          if ((*(longlong *)(lVar3 + 0x300) == 0) ||
             (*(int *)(*(longlong *)(lVar3 + 0x300) + 8) != 4)) {
            if ((*(uint *)(lVar3 + 0x2a0) != 0) &&
               (*(uint *)(lVar3 + 0x2a0) <= *(uint *)(lVar3 + 0x288))) {
              *(undefined4 *)(lVar3 + 0x2a0) = 0;
            }
            if ((*(int *)(lVar3 + 0x278) <= *(int *)(lVar3 + 0x240)) &&
               (*(char *)(lVar3 + 0x262) == '\0')) {
              *(undefined1 *)(lVar3 + 0x15c) = 1;
            }
            FUN_147840efc(lVar3);
            if (((*(int *)(lVar3 + 0x2c0) == 0) ||
                (*(longlong **)(lVar3 + 0x2b8) == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x2b8) + 0x30))(), cVar6 == '\0')) {
              if ((longlong)*(int *)(lVar3 + 0x2f8) != 0) {
                lVar10 = 0;
                do {
                  if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x2f0) + lVar10) + 8) == 6)
                  goto LAB_14339ebbb;
                  lVar10 = lVar10 + 0x10;
                } while ((longlong)*(int *)(lVar3 + 0x2f8) * 0x10 != lVar10);
              }
              if ((*(longlong *)(lVar3 + 0x300) == 0) ||
                 (*(int *)(*(longlong *)(lVar3 + 0x300) + 8) != 6)) {
                if ((*(int *)(lVar3 + 0x240) < *(int *)(lVar3 + 0x278)) ||
                   (*(char *)(lVar3 + 0x262) == '\x01')) {
                  if (((*(uint *)(lVar3 + 0x2a0) == 0) ||
                      (*(int *)(lVar3 + 0x278) <= *(int *)(lVar3 + 0x240))) ||
                     (*(uint *)(lVar3 + 0x2a0) <= *(uint *)(lVar3 + 0x288))) {
                    QueryPerformanceCounter(&local_b8);
                    dVar16 = ((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) -
                             *(double *)(lVar3 + 0x248);
                    if ((dVar16 < 5.0) ||
                       ((((dVar16 < 30.0 &&
                          (uVar7 = *(uint *)(lVar3 + 0x288) - *(uint *)(lVar3 + 0x284),
                          *(uint *)(lVar3 + 0x284) <= *(uint *)(lVar3 + 0x288) && uVar7 != 0)) &&
                         (0 < *(int *)(lVar3 + 0x150))) &&
                        (fVar17 = (float)uVar7 / 1000.0,
                        *DAT_14cabd398 * 0.5 <
                        fVar17 - ((float)*(int *)(lVar3 + 0x158) / (float)*(int *)(lVar3 + 0x150)) *
                                 fVar17)))) goto LAB_14339ebbb;
                  }
                  plVar8 = (longlong *)FUN_141054386();
                  (**(code **)(*plVar8 + 0x40))(plVar8,&local_b8);
                  if (*(int *)(lVar3 + 0x210) != 0) {
                    puVar14 = *(undefined2 **)(lVar3 + 0x208);
                  }
                  local_e8 = *(undefined4 *)(lVar3 + 0x240);
                  puVar13 = &DAT_149dfb77a;
                  if (*(int *)(lVar3 + 0x238) != 0) {
                    puVar13 = *(undefined2 **)(lVar3 + 0x230);
                  }
                  FUN_140002266(local_c8,L"%sreplay/%s/file/stream.%i",puVar13,puVar14);
                  (**(code **)(*(longlong *)local_b8 + 0x68))(local_b8.QuadPart,local_c8);
                  LVar5 = local_b8;
                  FUN_140056680(&local_d8,&DAT_149e8e77a);
                  (**(code **)(*(longlong *)LVar5 + 0x60))(LVar5.QuadPart,&local_d8);
                  if ((longlong *)local_d8.QuadPart != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  uVar9 = (**(code **)(*(longlong *)local_b8 + 0xf0))();
                  FUN_147840d2e(uVar9,lVar3,lVar3 + 0x240,lVar3 + 0x262);
                  local_d8 = local_b8;
                  local_d0 = local_b0;
                  if (local_b0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                    UNLOCK();
                  }
                  local_e8 = 0;
                  FUN_143397cf2(lVar3,6,&local_d8,0);
                  QueryPerformanceCounter(&local_a8);
                  *(double *)(lVar3 + 0x248) =
                       (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
                  if (local_c8[0] != 0) {
                    FUN_1400020a8();
                  }
                  plVar8 = local_b0;
                  if (local_b0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_b0 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_b0)(local_b0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar8 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar8 + 0x10))(plVar8);
                      }
                    }
                  }
                }
              }
            }
LAB_14339ebbb:
            FUN_1478414c8(lVar3);
          }
        }
        else if (*(char *)(lVar3 + 0x260) == '\x01') {
          FUN_147840490(lVar3);
        }
      }
LAB_14339e85c:
      lVar3 = *(longlong *)(*plVar12 + 8 + lVar11);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 8) == 1)) &&
         ((lVar3 = *(longlong *)(*plVar12 + lVar11), *(longlong *)(lVar3 + 0x300) == 0 &&
          (*(int *)(lVar3 + 0x2f8) < 1)))) {
        FUN_1478455fa(plVar12);
        FUN_147845670(plVar12);
      }
      bVar4 = 1 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar4);
  }
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339ec20 FUN_14339ec20 body=789 status=ok
// SIG undefined FUN_14339ec20(void)

void FUN_14339ec20(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  double local_c8;
  char local_b9;
  LARGE_INTEGER local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b9 = '\0';
  local_d8 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"HttpNetworkReplayStreamingFactory",L"bFlushStreamersOnShutdown",
                &local_b9);
  if (local_b9 == '\x01') {
    local_c8 = -1.0;
    local_d8 = &DAT_14c872ce8;
    FUN_14612afb8(DAT_14c872ce0,L"HttpNetworkReplayStreamingFactory",L"MaxFlushTimeSeconds");
    QueryPerformanceCounter(&local_b8);
    dVar5 = local_c8;
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      dVar2 = (double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0;
      plVar10 = *(longlong **)(param_1 + 0x10);
      plVar8 = plVar10 + (longlong)*(int *)(param_1 + 0x18) * 2;
      dVar4 = dVar2;
      do {
        while ((lVar11 = *plVar10, lVar11 != 0 &&
               ((*(longlong *)(lVar11 + 0x300) != 0 || (0 < *(int *)(lVar11 + 0x2f8)))))) {
          QueryPerformanceCounter(&local_b8);
          dVar3 = (double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0;
          if ((0.0 < dVar5) && (dVar5 < dVar3 - dVar2)) goto LAB_14339ecb2;
          (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,(float)(dVar3 - dVar4));
          if ((longlong)*(int *)(param_1 + 0x18) == 0) goto LAB_14339ecb2;
          lVar11 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar11);
            if ((lVar1 != 0) &&
               ((*(longlong *)(lVar1 + 0x300) != 0 || (0 < *(int *)(lVar1 + 0x2f8))))) {
              lVar11 = FUN_141054386();
              FUN_14291af4c(*(undefined8 *)(lVar11 + 0x20),0);
              (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
              if (DAT_14c846b14 == '\x01') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c83f0fc) &&
                   (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
                  uVar9 = FUN_14118da1c();
                  bVar7 = FUN_14054d46e(uVar9,L"nothreading");
                  DAT_14c83f0f8 = bVar7 ^ 1;
                  _Init_thread_footer(&DAT_14c83f0fc);
                }
                if ((DAT_14c83f0f8 == 0) && (cVar6 = FUN_146811c5e(), cVar6 == '\0')) break;
              }
              FUN_14000f986(0x3d4ccccd);
              break;
            }
            lVar11 = lVar11 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x18) * 0x10 != lVar11);
          plVar10 = *(longlong **)(param_1 + 0x10);
          plVar8 = plVar10 + (longlong)*(int *)(param_1 + 0x18) * 2;
          dVar4 = dVar3;
          if ((longlong)*(int *)(param_1 + 0x18) == 0) goto LAB_14339ecb2;
        }
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar8);
    }
  }
LAB_14339ecb2:
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14339ef36 FUN_14339ef36 body=111 status=ok
// SIG undefined FUN_14339ef36(void)

undefined8 * FUN_14339ef36(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5af190;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14339ef87;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14339ef87:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14339efba FUN_14339efba body=115 status=ok
// SIG undefined FUN_14339efba(void)

void FUN_14339efba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5af190;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147842f8a(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 14339f02e FUN_14339f02e body=115 status=ok
// SIG undefined FUN_14339f02e(void)

void FUN_14339f02e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5af190;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147842f8a(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 14339f0a2 FUN_14339f0a2 body=149 status=ok
// SIG undefined FUN_14339f0a2(void)

void FUN_14339f0a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af200;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af190;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_147842f8a(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014339f128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14339f142 FUN_14339f142 body=20 status=ok
// SIG undefined FUN_14339f142(void)

undefined1 FUN_14339f142(longlong param_1)

{
  FUN_14339f156(param_1 + 0x18);
  return 1;
}



// FUNCTION 14339f156 FUN_14339f156 body=189 status=ok
// SIG undefined FUN_14339f156(void)

void FUN_14339f156(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong *)*param_1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    if (cVar1 != '\0') {
      local_50 = &PTR_FUN_14a5ab6c0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_48 = *(undefined4 *)(param_2 + 8);
      FUN_140bee9ec(&local_30,param_2 + 0x20);
      FUN_14784301c(&local_40,param_2 + 0x10);
      if ((int)param_1[1] == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        param_1 = (longlong *)*param_1;
      }
      (**(code **)(*param_1 + 0x58))(param_1,&local_50);
      FUN_14783052c(&local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339f214 FUN_14339f214 body=375 status=ok
// SIG undefined FUN_14339f214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14339f214(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = "UnixSocketPath";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14cabd350 = (ulonglong)uVar1;
  FUN_14098d3d2(FUN_143396ca4,L"/Script/HttpNetworkReplayStreaming",L"EHttpReplayResult",
                &DAT_14cabd358);
  FUN_140056680(&local_38,&DAT_149dfb77a);
  local_48 = 0;
  FUN_140f510cc(&DAT_14cabd370,L"httpReplay.MetaFilterOverride",&local_38,&DAT_149dfb77a);
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_143396cdd);
  local_38._0_4_ = 0x41200000;
  local_48 = 0;
  FUN_140a6b41e(&DAT_14cabd388,L"httpReplay.ChunkUploadDelayInSeconds",&local_38,&DAT_149dfb77a);
  atexit(FUN_143396d22);
  local_38 = (char *)CONCAT44(local_38._4_4_,0xa00000);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cabd3a0,L"httpReplay.MaxCacheSize",&local_38,&DAT_149dfb77a);
  atexit(FUN_143396d67);
  local_38 = (char *)0x800000014a5ae0e4;
  local_24 = 0x1a;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14636a414(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339f38c FUN_14339f38c body=55 status=ok
// SIG undefined FUN_14339f38c(void)

void FUN_14339f38c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd3c8 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd3c8 = FUN_14171c317(FUN_14636a559,uVar1,L"EMassCommandOperationType");
  }
  return;
}



// FUNCTION 14339f3c4 FUN_14339f3c4 body=1023 status=ok
// SIG undefined FUN_14339f3c4(void)

void FUN_14339f3c4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStack_b8 [35];
  undefined1 local_95;
  int local_94;
  longlong *local_90;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  if (0 < *(int *)(param_1 + 0x48)) {
    local_58 = 0;
    uStack_50 = 0;
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x30);
    if ((int)*(uint *)(param_1 + 0x30) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar11);
    }
    local_78 = (longlong *)(param_1 + 0x28);
    local_68 = param_2;
    if (uVar11 != 0) {
      FUN_1433a3234(&local_58,uVar11);
      uVar17 = 0;
      do {
        uVar14 = uStack_50;
        lVar25 = *(longlong *)(*local_78 + uVar17 * 8);
        uVar13 = 0x7fffffff;
        if ((lVar25 != 0) && (*(char *)(lVar25 + 8) == '\x01')) {
          uVar13 = (ulonglong)*(uint *)(&DAT_14a5b02a0 + (ulonglong)*(byte *)(lVar25 + 9) * 4);
        }
        lVar25 = (longlong)(int)uStack_50;
        uVar8 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
        if (uStack_50._4_4_ < uVar8) {
          FUN_1433a3364(&local_58,uVar14 & 0xffffffff);
        }
        *(ulonglong *)(local_58 + lVar25 * 8) = (uVar13 << 0x20) + uVar17;
        uVar17 = uVar17 + 1;
      } while (uVar11 != uVar17);
    }
    local_90 = (longlong *)(param_1 + 0x38);
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar25 = 0;
      do {
        uVar17 = uStack_50;
        lVar22 = *(longlong *)(*local_90 + lVar25 * 8);
        uVar14 = 0x7fffffff;
        if ((lVar22 != 0) && (*(char *)(lVar22 + 8) == '\x01')) {
          uVar14 = (ulonglong)*(uint *)(&DAT_14a5b02a0 + (ulonglong)*(byte *)(lVar22 + 9) * 4);
        }
        lVar22 = (longlong)(int)uStack_50;
        uVar8 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
        if (uStack_50._4_4_ < uVar8) {
          FUN_1433a3364(&local_58,uVar17 & 0xffffffff);
        }
        *(ulonglong *)(local_58 + lVar22 * 8) = (uVar14 << 0x20) + uVar11 + lVar25;
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)(param_1 + 0x40));
    }
    uVar7 = local_68;
    uVar17 = (ulonglong)(int)uStack_50;
    if (0 < (longlong)uVar17) {
      local_88 = local_58;
      uVar14 = 1;
      do {
        if ((uVar14 < uVar17) &&
           (*(int *)(local_58 + 4 + uVar14 * 8) < *(int *)(local_58 + -4 + uVar14 * 8))) {
          uVar4 = *(undefined8 *)(local_58 + -8 + uVar14 * 8);
          *(undefined8 *)(local_58 + -8 + uVar14 * 8) = *(undefined8 *)(local_58 + uVar14 * 8);
          *(undefined8 *)(local_58 + uVar14 * 8) = uVar4;
        }
        uVar13 = uVar14 + 1;
        uVar14 = uVar14 + 2;
      } while (uVar13 < uVar17);
      if (2 < (int)uStack_50) {
        iVar9 = 2;
        do {
          local_94 = iVar9 * 2;
          local_60 = (longlong)local_94;
          lVar25 = 0;
          do {
            iVar10 = (int)uStack_50 - (int)lVar25;
            if (local_94 <= iVar10) {
              iVar10 = local_94;
            }
            if (iVar9 < iVar10 && 0 < iVar9) {
              lVar22 = local_58 + lVar25 * 8;
              iVar21 = 0;
              iVar12 = iVar9;
              while( true ) {
                lVar24 = lVar22 + (longlong)iVar12 * 8;
                iVar20 = 0;
                if (iVar12 - iVar21 != 0 && iVar21 <= iVar12) {
                  iVar20 = 0;
                  uVar8 = iVar12 - iVar21;
                  do {
                    iVar16 = (uVar8 >> 1) + iVar20;
                    if (*(int *)(lVar22 + (longlong)iVar21 * 8 + 4 + (longlong)iVar16 * 8) <=
                        *(int *)(lVar24 + 4)) {
                      iVar20 = iVar16 + (uVar8 & 1);
                    }
                    bVar6 = 1 < uVar8;
                    uVar8 = uVar8 >> 1;
                  } while (bVar6);
                }
                iVar20 = iVar20 + iVar21;
                iVar21 = iVar12 - iVar20;
                if (iVar21 == 0 || iVar12 < iVar20) break;
                uVar8 = iVar10 - iVar12;
                if (uVar8 == 0 || iVar10 < iVar12) {
                  iVar16 = 0;
                }
                else {
                  puVar23 = (undefined8 *)(lVar22 + (longlong)iVar20 * 8);
                  iVar16 = 0;
                  uVar14 = (ulonglong)uVar8;
                  do {
                    uVar14 = uVar14 >> 1;
                    uVar15 = (uint)uVar14 + iVar16;
                    if (*(int *)(lVar24 + 4 + (ulonglong)uVar15 * 8) <
                        *(int *)((longlong)puVar23 + 4)) {
                      iVar16 = uVar15 + (uVar8 & 1);
                    }
                    bVar6 = 1 < uVar8;
                    uVar8 = (uint)uVar14;
                  } while (bVar6);
                  iVar12 = iVar12 + iVar16;
                  if (0 < iVar16) {
                    puVar2 = puVar23 + (iVar12 - iVar20);
                    puVar18 = puVar23 + iVar21;
                    puVar19 = puVar23 + iVar21;
                    do {
                      while( true ) {
                        puVar1 = puVar18 + 1;
                        uVar4 = *puVar23;
                        *puVar23 = *puVar18;
                        puVar23 = puVar23 + 1;
                        *puVar18 = uVar4;
                        if (puVar1 == puVar2) break;
                        puVar18 = puVar1;
                        if (puVar23 == puVar19) {
                          puVar19 = puVar1;
                        }
                      }
                      puVar18 = puVar19;
                    } while (puVar23 != puVar19);
                  }
                }
                if ((iVar10 <= iVar12) || (iVar21 = iVar16 + iVar20 + 1, iVar12 <= iVar21)) break;
              }
            }
            lVar25 = lVar25 + local_60;
          } while (lVar25 < (longlong)uVar17);
          iVar9 = local_94;
        } while (local_94 < (int)uStack_50);
      }
      local_95 = uVar3;
      local_80 = uVar11;
      local_70 = param_1;
      if (0 < (int)uStack_50) {
        lVar25 = 0;
        do {
          if (*(int *)(local_58 + 4 + lVar25 * 8) == 0x7fffffff) break;
          iVar9 = *(int *)(local_58 + lVar25 * 8);
          iVar10 = (int)uVar11;
          plVar5 = local_90;
          if (iVar9 < iVar10) {
            iVar10 = 0;
            plVar5 = local_78;
          }
          lVar22 = *plVar5;
          lVar24 = (longlong)(iVar9 - iVar10);
          plVar5 = *(longlong **)(lVar22 + lVar24 * 8);
          (**(code **)(*plVar5 + 8))(plVar5,uVar7);
          uVar11 = local_80;
          (**(code **)(**(longlong **)(lVar22 + lVar24 * 8) + 0x10))();
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)uStack_50);
      }
    }
    iVar9 = *(int *)(param_1 + 0x44);
    FUN_14136a0ba(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((iVar9 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
      FUN_147850bba(local_90);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339f7c6 FUN_14339f7c6 body=96 status=ok
// SIG undefined FUN_14339f7c6(void)

void FUN_14339f7c6(LPCRITICAL_SECTION param_1,longlong param_2)

{
  if (0 < *(int *)(param_2 + 0x48)) {
    EnterCriticalSection(param_1);
    FUN_14784668c(&param_1[1].OwningThread,param_2 + 0x28);
    FUN_14784668c(&param_1[1].OwningThread,param_2 + 0x38);
    *(int *)&param_1[1].SpinCount = (int)param_1[1].SpinCount + *(int *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014339f81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14339f826 FUN_14339f826 body=160 status=ok
// SIG undefined FUN_14339f826(void)

void FUN_14339f826(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((((param_1[6] != 0) && (param_1[7] != 0)) && (*(int *)(param_1[7] + 8) == 1)) &&
     ((0 < *(int *)(param_1[6] + 0x48) && (*param_1 != 0)))) {
    FUN_147847056(*param_1,param_1 + 6);
  }
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
  FUN_1401f9f5c(param_1 + 3);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014339f8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14339f8c6 FUN_14339f8c6 body=250 status=ok
// SIG undefined FUN_14339f8c6(void)

void FUN_14339f8c6(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (0 < *(int *)param_1[2]) {
    lVar3 = *param_1;
    pcVar1 = (char *)(lVar3 + 0x38);
    LOCK();
    bVar8 = *(char *)(lVar3 + 0x38) == '\0';
    if (bVar8) {
      *(char *)(lVar3 + 0x38) = '\x01';
    }
    UNLOCK();
    if (!bVar8) {
      FUN_1447d2058();
    }
    iVar5 = *(int *)param_1[2];
    iVar6 = *(int *)(lVar3 + 0x30) + iVar5;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)(lVar3 + 0x34) < iVar6) {
      FUN_14481578e();
      iVar5 = *(int *)param_1[2];
    }
    if (0 < iVar5) {
      lVar7 = (longlong)*(int *)param_1[1];
      do {
        lVar4 = param_1[3];
        iVar5 = *(int *)(lVar3 + 0x30);
        *(uint *)(lVar3 + 0x30) = iVar5 + 1U;
        if (*(uint *)(lVar3 + 0x34) < iVar5 + 1U) {
          FUN_1446f48e2((longlong *)(lVar3 + 0x28),iVar5);
        }
        *(undefined4 *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar5 * 4) =
             *(undefined4 *)(lVar4 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (lVar7 < (longlong)*(int *)param_1[2] + (longlong)*(int *)param_1[1]);
    }
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
  }
  *(int *)param_1[1] = *(int *)param_1[2] + *(int *)param_1[1] + 1;
  *(undefined4 *)param_1[2] = 0;
  return;
}



// FUNCTION 14339f9c3 FUN_14339f9c3 body=69 status=ok
// SIG undefined FUN_14339f9c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14339f9c3(void)

{
  _DAT_14cabd460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014339fa05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd468,1);
  return;
}



// FUNCTION 14339fa08 FUN_14339fa08 body=729 status=ok
// SIG undefined FUN_14339fa08(void)

void FUN_14339fa08(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if ((*(uint *)(param_1 + 0x5e) == uVar6) && (*(short *)((longlong)param_1 + 0x262) == 0)) {
    if (*(int *)(param_2 + 0xa4) == *(int *)((longlong)param_1 + 0x2f4)) goto LAB_14339fa79;
  }
  else {
    *(uint *)(param_1 + 0x5e) = uVar6;
    iVar1 = *(int *)((longlong)param_1 + 0x304);
    FUN_14784dd78(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x304) != 0)) {
      FUN_147852040(param_1 + 0x5f);
    }
    *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
    iVar1 = *(int *)((longlong)param_1 + 0x314);
    FUN_14784d896(param_1[0x61],*(undefined4 *)(param_1 + 0x62));
    *(undefined4 *)(param_1 + 0x62) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x314) != 0)) {
      FUN_147852070(param_1 + 0x61);
    }
    if (*(short *)((longlong)param_1 + 0x262) != 0) {
      *(undefined2 *)((longlong)param_1 + 0x262) = 0;
      cVar5 = FUN_1478545d4(param_1);
      if (cVar5 == '\0') goto LAB_14339fa79;
      FUN_14785455c(param_1);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_147846ec4(param_2,param_1,&local_58,*(undefined4 *)((longlong)param_1 + 0x2f4));
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0xa4);
  if ((int)uStack_50 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    lVar9 = (longlong)iVar1;
    FUN_1478483b6(param_1 + 0x5f,&local_58);
    uVar3 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    FUN_147848414(param_1 + 0x61,uStack_50 & 0xffffffff);
    if (iVar1 < *(int *)(param_1 + 0x60)) {
      lVar8 = lVar9 * 0x140;
      lVar7 = lVar9 << 4;
      do {
        uVar4 = *(undefined8 *)(param_1[0x5f] + lVar7);
        local_68 = uVar3;
        local_60 = uVar2;
        FUN_1478461a0(uVar4,&local_68,param_1[0x61] + lVar8);
        if (*(int *)(param_1 + 3) != 0) {
          local_78 = param_1[2];
          local_70 = *(int *)(param_1 + 3);
          FUN_1478462fc(uVar4,&local_78,param_1[0x61] + lVar8 + 0x50);
        }
        if (*(int *)(param_1 + 5) != 0) {
          local_88 = param_1[4];
          local_80 = *(int *)(param_1 + 5);
          FUN_1478463d4(uVar4,&local_88,param_1[0x61] + lVar8 + 0xa0);
        }
        if (*(int *)(param_1 + 7) != 0) {
          local_98 = param_1[6];
          local_90 = *(int *)(param_1 + 7);
          FUN_1478464a4(uVar4,&local_98,param_1[0x61] + lVar8 + 0xf0);
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x140;
        lVar7 = lVar7 + 0x10;
      } while (lVar9 < *(int *)(param_1 + 0x60));
    }
  }
  FUN_14784dd78(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14339fa79:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339fce2 FUN_14339fce2 body=49 status=ok
// SIG undefined FUN_14339fce2(void)

void FUN_14339fce2(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_14602b360();
  iVar2 = 0x80000;
  if (*(int *)(param_1 + 0x28) < 0x80000) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  iVar1 = 0x400;
  if (0x400 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



// FUNCTION 14339fd13 FUN_14339fd13 body=86 status=ok
// SIG undefined FUN_14339fd13(void)

void FUN_14339fd13(void)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    *(undefined ***)((longlong)&DAT_14cabd490 + lVar1) = FAutoConsoleObject::vftable;
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(lVar1 + 0x14cabd498),1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14339fd69 FUN_14339fd69 body=55 status=ok
// SIG undefined FUN_14339fd69(void)

void FUN_14339fd69(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd568 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd568 = FUN_14171c317(FUN_14636acea,uVar1,L"EMassObservedOperation");
  }
  return;
}



// FUNCTION 14339fde8 FUN_14339fde8 body=77 status=ok
// SIG undefined FUN_14339fde8(void)

void FUN_14339fde8(longlong *param_1)

{
  FUN_14339fe36();
  if (((((*(uint *)(param_1 + 1) & 0x10) != 0) && ((*(byte *)(param_1[2] + 0xd4) & 1) == 0)) &&
      (param_1[0x17] != 0)) && ((char)param_1[0x18] != '\x02')) {
                    /* WARNING: Could not recover jumptable at 0x00014339fe2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f0))(param_1);
    return;
  }
  return;
}



// FUNCTION 14339fe36 FUN_14339fe36 body=308 status=ok
// SIG undefined FUN_14339fe36(void)

void FUN_14339fe36(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  pcVar1 = *(code **)(*(longlong *)param_1[2] + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)((longlong *)param_1[2],param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(byte *)(param_1[2] + 0xd4) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    bVar5 = *(byte *)(param_1 + 0x13);
    if ((longlong)(int)param_1[0x15] != 0) {
      lVar6 = 0;
      do {
        bVar4 = 1;
        bVar3 = bVar5 & 1;
        bVar5 = bVar4;
        if (((bVar3 == 0) &&
            (lVar2 = *(longlong *)(param_1[0x14] + lVar6), *(char *)(lVar2 + 0x264) == '\0')) &&
           (*(char *)(lVar2 + 0x2a8) == '\0')) {
          bVar5 = (*(byte *)(lVar2 + 0x318) & 2) >> 1;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)param_1[0x15] * 8 != lVar6);
    }
    *(byte *)((longlong)param_1 + 0x52) =
         *(byte *)((longlong)param_1 + 0x52) & 0xef |
         ((*(byte *)((longlong)param_1 + 0x52) & 0x10) >> 4 | bVar5) << 4;
  }
  return;
}



// FUNCTION 14339ff6a FUN_14339ff6a body=86 status=ok
// SIG undefined FUN_14339ff6a(void)

void FUN_14339ff6a(void)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    *(undefined ***)((longlong)&DAT_14cabd8e0 + lVar1) = FAutoConsoleObject::vftable;
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(lVar1 + 0x14cabd8e8),1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14339ffc0 FUN_14339ffc0 body=9389 status=ok
// SIG undefined FUN_14339ffc0(void)

/* WARNING: Removing unreachable block (ram,0x0001433a1fa9) */
/* WARNING: Type propagation algorithm not settling */

void FUN_14339ffc0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  byte bVar5;
  int ****ppppiVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int ****ppppiVar11;
  int ***pppiVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  int ****ppppiVar19;
  int ****ppppiVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 uVar27;
  int iVar28;
  int *****pppppiVar29;
  longlong lVar30;
  longlong lVar31;
  int ****ppppiVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 uVar36;
  int ****ppppiVar37;
  int ****ppppiVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined8 *puVar42;
  int ****ppppiVar43;
  undefined8 *puVar44;
  int ****ppppiVar45;
  int ****ppppiVar46;
  longlong lVar47;
  longlong *plVar48;
  bool bVar49;
  byte bVar50;
  float fVar51;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  int *****local_448;
  undefined1 local_439;
  longlong *local_438;
  undefined8 *local_430;
  longlong local_428;
  int *local_420;
  undefined8 local_418;
  longlong *local_410;
  longlong local_408;
  longlong *local_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  longlong *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8;
  void *local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  void *local_3a8;
  ulonglong uStack_3a0;
  longlong local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined4 local_380;
  int ****local_378;
  undefined8 uStack_370;
  int ****local_368;
  void **ppvStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (*(int *)(param_1 + 1) == 0) goto LAB_14339fff6;
  local_410 = param_3;
  local_3e8 = param_2;
  FUN_1446f470e(&local_3e0,L"LogMass",1);
  puVar10 = (undefined1 *)FUN_1400d7a00();
  local_439 = *puVar10;
  local_3f8 = *(undefined8 *)(puVar10 + 4);
  *puVar10 = 5;
  *(undefined8 *)(puVar10 + 4) = local_3e0;
  *(undefined1 *)(param_1 + 2) = 0;
  plVar3 = param_1 + 5;
  iVar28 = *(int *)((longlong)param_1 + 0x34);
  FUN_14784f562(param_1[5],*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 6) = 0;
  if ((iVar28 < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
    FUN_1478543c8(plVar3);
  }
  pppppiVar29 = (int *****)(param_1 + 7);
  FUN_14005eae2(pppppiVar29);
  local_308 = 0;
  local_300 = 0x8000000000;
  local_368 = (int ****)0x0;
  ppvStack_360 = (void **)0x0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_2e8 = 0;
  local_2e0 = 0x8000000000;
  local_2c8 = 0;
  local_2c0 = 0x8000000000;
  local_2a8 = 0;
  local_2a0 = 0x8000000000;
  local_288 = 0;
  local_280 = 0x8000000000;
  local_268 = 0;
  local_260 = 0x8000000000;
  local_248 = 0;
  local_240 = 0x8000000000;
  local_228 = 0;
  local_220 = 0x8000000000;
  local_208 = 0;
  local_200 = 0x8000000000;
  local_1e8 = 0;
  local_1e0 = 0x8000000000;
  local_1c8 = 0;
  local_1c0 = 0x8000000000;
  local_1a8 = 0;
  local_1a0 = 0x8000000000;
  local_198 = 0xffffffff;
  local_190 = 0;
  uStack_18c = 0;
  local_188 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  iVar28 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar28 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar28 + 1U) {
    FUN_147853ed6(plVar3,iVar28);
  }
  FUN_147853d98((longlong)iVar28 * 0x208 + *plVar3,&local_368);
  FUN_14784c522(&local_368);
  ppvStack_360 = (void **)&local_388;
  local_388 = (int ****)((ulonglong)local_388._4_4_ << 0x20);
  local_368 = (int ****)&local_3d8;
  local_3d8 = (int ****)0x0;
  FUN_14147c052(pppppiVar29,&local_378,&local_368);
  local_428 = *local_410;
  if (local_428 == 0) {
    lVar34 = FUN_14001cc68(0x460,0x10);
    FUN_145c3c714(lVar34,0);
    plVar16 = (longlong *)FUN_14001cc68(0x18);
    plVar16[1] = (longlong)&DAT_100000001;
    *plVar16 = (longlong)&PTR_FUN_14a5b5a30;
    plVar16[2] = lVar34;
    if ((lVar34 != 0) &&
       (((*(longlong *)(lVar34 + 0x10) == 0 || (*(longlong *)(lVar34 + 0x18) == 0)) ||
        (*(int *)(*(longlong *)(lVar34 + 0x18) + 8) < 1)))) {
      if (plVar16 == (longlong *)0x0) {
        *(longlong *)(lVar34 + 0x10) = lVar34;
        plVar48 = *(longlong **)(lVar34 + 0x18);
        if (plVar48 != (longlong *)0x0) {
LAB_1433a23aa:
          LOCK();
          piVar18 = (int *)((longlong)plVar48 + 0xc);
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (*piVar18 == 0) {
            (**(code **)(*plVar48 + 0x10))();
          }
          *(longlong **)(lVar34 + 0x18) = plVar16;
          if (plVar16 != (longlong *)0x0) goto LAB_1433a23be;
        }
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        *(longlong *)(lVar34 + 0x10) = lVar34;
        if (*(longlong **)(lVar34 + 0x18) != plVar16) {
          LOCK();
          *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
          UNLOCK();
          plVar48 = *(longlong **)(lVar34 + 0x18);
          if (plVar48 != (longlong *)0x0) goto LAB_1433a23aa;
          *(longlong **)(lVar34 + 0x18) = plVar16;
        }
LAB_1433a23be:
        LOCK();
        plVar48 = plVar16 + 1;
        *(int *)plVar48 = (int)*plVar48 + -1;
        UNLOCK();
        if ((int)*plVar48 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar18 = (int *)((longlong)plVar16 + 0xc);
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (*piVar18 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    *local_410 = lVar34;
    plVar48 = (longlong *)local_410[1];
    if (plVar16 == plVar48) {
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar48 = plVar16 + 1;
        *(int *)plVar48 = (int)*plVar48 + -1;
        UNLOCK();
        if ((int)*plVar48 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar18 = (int *)((longlong)plVar16 + 0xc);
          *piVar18 = *piVar18 + -1;
          iVar28 = *piVar18;
          UNLOCK();
          plVar48 = plVar16;
          goto joined_r0x0001433a244d;
        }
      }
    }
    else {
      local_410[1] = (longlong)plVar16;
      if (plVar48 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar48 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar48)(plVar48);
          LOCK();
          piVar18 = (int *)((longlong)plVar48 + 0xc);
          *piVar18 = *piVar18 + -1;
          iVar28 = *piVar18;
          UNLOCK();
joined_r0x0001433a244d:
          if (iVar28 == 0) {
            (**(code **)(*plVar48 + 0x10))(plVar48);
          }
        }
      }
    }
  }
  local_448 = pppppiVar29;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar44 = (undefined8 *)*param_1;
    puVar42 = puVar44 + *(int *)(param_1 + 1);
    puVar17 = param_1 + 0xe;
    local_420 = (int *)&local_180;
    lVar34 = local_428;
    local_430 = puVar17;
    local_3f0 = puVar42;
    do {
      plVar16 = (longlong *)*puVar44;
      if (plVar16 != (longlong *)0x0) {
        plVar48 = plVar16;
        if ((*(byte *)((longlong)plVar16 + 0x52) & 2) == 0) {
          plVar48 = (longlong *)plVar16[2];
        }
        local_378 = (int ****)plVar48[3];
        if (*(int *)(param_1 + 8) != *(int *)((longlong)param_1 + 0x6c)) {
          uVar8 = (uint)((ulonglong)local_378 >> 0x10);
          uVar22 = (uint)local_378 & 0xffff;
          puVar15 = (undefined8 *)param_1[0xf];
          if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
            puVar15 = puVar17;
          }
          iVar28 = *(int *)((longlong)puVar15 +
                           (ulonglong)
                           (*(int *)(param_1 + 0x10) - 1U &
                           (int)((ulonglong)local_378 >> 0x20) + ((uint)local_378 << 0x10 | uVar22)
                           + (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar22 >> 4)) * 4);
          if (iVar28 != -1) {
            do {
              puVar15 = (undefined8 *)((longlong)*pppppiVar29 + (longlong)iVar28 * 0x14);
              if ((int ****)*puVar15 == local_378) {
                if ((puVar15 != (undefined8 *)0x0) && ((int *)(puVar15 + 1) != (int *)0x0)) {
                  iVar28 = *(int *)(puVar15 + 1);
                  goto LAB_1433a0a24;
                }
                break;
              }
              iVar28 = *(int *)((longlong)puVar15 + 0xc);
            } while (iVar28 != -1);
          }
        }
        uVar8 = 0xffffffff;
        local_438 = plVar16;
        local_418 = puVar44;
        if (plVar16[5] != 0) {
          local_3d8 = (int ****)0x0;
          uStack_3d0 = (longlong *)0x0;
          FUN_14784c2a0(plVar16[5],&local_3d8);
          if ((longlong)(int)uStack_3d0 == 0) {
            uVar25 = 0;
            uVar8 = 0xffffffff;
          }
          else {
            ppppiVar20 = local_3d8 + (longlong)(int)uStack_3d0 * 2;
            uVar8 = 0xffffffff;
            ppppiVar11 = local_3d8;
            do {
              iVar28 = *(int *)(ppppiVar11 + 1) + -1;
              if (*(int *)(ppppiVar11 + 1) == 0) {
                iVar28 = 0;
              }
              FUN_1446f82e2(&local_368,iVar28,*ppppiVar11);
              local_388 = local_368;
              if (*(int *)(param_1 + 8) != *(int *)((longlong)param_1 + 0x6c)) {
                uVar22 = (uint)((ulonglong)local_368 >> 0x10);
                uVar23 = (uint)local_368 & 0xffff;
                puVar42 = (undefined8 *)param_1[0xf];
                if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
                  puVar42 = puVar17;
                }
                iVar28 = *(int *)((longlong)puVar42 +
                                 (ulonglong)
                                 (*(int *)(param_1 + 0x10) - 1U &
                                 (int)((ulonglong)local_368 >> 0x20) +
                                 ((uint)local_368 << 0x10 | uVar23) +
                                 (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar23 >> 4)) * 4);
                if (iVar28 != -1) {
                  do {
                    puVar42 = (undefined8 *)((longlong)*pppppiVar29 + (longlong)iVar28 * 0x14);
                    if ((int ****)*puVar42 == local_368) {
                      if ((puVar42 != (undefined8 *)0x0) && ((uint *)(puVar42 + 1) != (uint *)0x0))
                      {
                        uVar8 = *(uint *)(puVar42 + 1);
                        goto LAB_1433a06e0;
                      }
                      break;
                    }
                    iVar28 = *(int *)((longlong)puVar42 + 0xc);
                  } while (iVar28 != -1);
                }
              }
              local_3a8 = (void *)CONCAT44(local_3a8._4_4_,*(undefined4 *)(param_1 + 6));
              local_368 = (int ****)&local_388;
              ppvStack_360 = &local_3a8;
              FUN_140171856(pppppiVar29,&local_398,&local_368);
              local_368 = local_388;
              local_308 = 0;
              uStack_320 = 0;
              uStack_330 = 0;
              local_328 = 0;
              uStack_340 = 0;
              local_338 = 0;
              uStack_350 = 0;
              local_348 = 0;
              ppvStack_360 = (void **)0x0;
              local_358 = 0;
              local_300 = 0x8000000000;
              local_2e8 = 0;
              local_2e0 = 0x8000000000;
              local_2c8 = 0;
              local_2c0 = 0x8000000000;
              local_2a8 = 0;
              local_2a0 = 0x8000000000;
              local_288 = 0;
              local_280 = 0x8000000000;
              local_268 = 0;
              local_260 = 0x8000000000;
              local_248 = 0;
              local_240 = 0x8000000000;
              local_228 = 0;
              local_220 = 0x8000000000;
              local_208 = 0;
              local_200 = 0x8000000000;
              local_1e8 = 0;
              local_1e0 = 0x8000000000;
              local_1c8 = 0;
              local_1c0 = 0x8000000000;
              local_1a8 = 0;
              local_1a0 = 0x8000000000;
              local_198 = 0xffffffff;
              local_190 = (uint)local_3a8;
              uStack_18c = 0;
              local_188 = 0;
              local_420[4] = 0;
              local_420[5] = 0;
              local_420[6] = 0;
              local_420[7] = 0;
              local_420[0] = 0;
              local_420[1] = 0;
              local_420[2] = 0;
              local_420[3] = 0;
              iVar28 = *(int *)(param_1 + 6);
              *(uint *)(param_1 + 6) = iVar28 + 1U;
              if (*(uint *)((longlong)param_1 + 0x34) < iVar28 + 1U) {
                FUN_147853ed6(plVar3,iVar28);
              }
              lVar34 = (longlong)iVar28 * 0x208 + *plVar3;
              FUN_147853d98(lVar34,&local_368);
              FUN_14784c522(&local_368);
              if (uVar8 == 0xffffffff) {
                puVar17 = local_430;
                uVar8 = (uint)local_3a8;
              }
              else {
                iVar28 = *(int *)(lVar34 + 0x18);
                *(uint *)(lVar34 + 0x18) = iVar28 + 1U;
                if (*(uint *)(lVar34 + 0x1c) < iVar28 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar34 + 0x10),iVar28);
                }
                *(uint *)(*(longlong *)(lVar34 + 0x10) + (longlong)iVar28 * 4) = uVar8;
                lVar34 = *plVar3 + (longlong)(int)uVar8 * 0x208;
                iVar28 = *(int *)(lVar34 + 0x1f0);
                *(uint *)(lVar34 + 0x1f0) = iVar28 + 1U;
                if (*(uint *)(lVar34 + 500) < iVar28 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar34 + 0x1e8),iVar28);
                }
                *(uint *)(*(longlong *)(lVar34 + 0x1e8) + (longlong)iVar28 * 4) = (uint)local_3a8;
                pppppiVar29 = local_448;
                puVar17 = local_430;
                uVar8 = (uint)local_3a8;
              }
LAB_1433a06e0:
              ppppiVar11 = ppppiVar11 + 2;
            } while (ppppiVar11 != ppppiVar20);
            uVar25 = (ulonglong)uStack_3d0 & 0xffffffff;
          }
          FUN_1447a1747(local_3d8,uVar25);
          plVar16 = local_438;
          if (local_3d8 != (int ****)0x0) {
            FUN_1400020a8();
          }
        }
        local_388 = (int ****)CONCAT44(local_388._4_4_,*(undefined4 *)(param_1 + 6));
        local_368 = (int ****)&local_378;
        ppvStack_360 = (void **)&local_388;
        FUN_140171856(pppppiVar29,&local_3d8,&local_368);
        local_368 = local_378;
        local_308 = 0;
        local_328 = 0;
        uStack_320 = 0;
        local_338 = 0;
        uStack_330 = 0;
        local_348 = 0;
        uStack_340 = 0;
        local_358 = 0;
        uStack_350 = 0;
        local_300 = 0x8000000000;
        local_2e8 = 0;
        local_2e0 = 0x8000000000;
        local_2c8 = 0;
        local_2c0 = 0x8000000000;
        local_2a8 = 0;
        local_2a0 = 0x8000000000;
        local_288 = 0;
        local_280 = 0x8000000000;
        local_268 = 0;
        local_260 = 0x8000000000;
        local_248 = 0;
        local_240 = 0x8000000000;
        local_228 = 0;
        local_220 = 0x8000000000;
        local_208 = 0;
        local_200 = 0x8000000000;
        local_1e8 = 0;
        local_1e0 = 0x8000000000;
        local_1c8 = 0;
        local_1c0 = 0x8000000000;
        local_1a8 = 0;
        local_1a0 = 0x8000000000;
        local_198 = 0xffffffff;
        local_190 = (int)local_388;
        uStack_18c = 0;
        local_188 = 0;
        local_420[4] = 0;
        local_420[5] = 0;
        local_420[6] = 0;
        local_420[7] = 0;
        local_420[0] = 0;
        local_420[1] = 0;
        local_420[2] = 0;
        local_420[3] = 0;
        iVar28 = *(int *)(param_1 + 6);
        *(uint *)(param_1 + 6) = iVar28 + 1U;
        ppvStack_360 = (void **)plVar16;
        if (*(uint *)((longlong)param_1 + 0x34) < iVar28 + 1U) {
          FUN_147853ed6(plVar3,iVar28);
        }
        lVar31 = *plVar3;
        lVar34 = lVar31 + (longlong)iVar28 * 0x208;
        FUN_147853d98(lVar34,&local_368);
        FUN_14784c522(&local_368);
        uVar22 = *(uint *)(local_438 + 9);
        plVar16 = local_438;
        if ((longlong)(int)uVar22 != 0) {
          plVar48 = (longlong *)(lVar31 + (longlong)iVar28 * 0x208 + 0x40);
          iVar28 = *(int *)(lVar34 + 0x48);
          *(uint *)(lVar34 + 0x48) = iVar28 + uVar22;
          if ((uint)(*(int *)(lVar34 + 0x4c) - iVar28) < uVar22) {
            FUN_1446f84a2(plVar48,iVar28);
          }
          plVar16 = local_438;
          memcpy((void *)((longlong)iVar28 * 8 + *plVar48),(void *)local_438[8],
                 (longlong)(int)uVar22 << 3);
        }
        uVar22 = *(uint *)(plVar16 + 7);
        if ((longlong)(int)uVar22 != 0) {
          plVar48 = (longlong *)(lVar34 + 0x30);
          iVar28 = *(int *)(lVar34 + 0x38);
          *(uint *)(lVar34 + 0x38) = iVar28 + uVar22;
          if ((uint)(*(int *)(lVar34 + 0x3c) - iVar28) < uVar22) {
            local_438 = plVar48;
            FUN_1446f84a2(plVar48,iVar28);
            plVar48 = local_438;
          }
          memcpy((void *)((longlong)iVar28 * 8 + *plVar48),(void *)plVar16[6],
                 (longlong)(int)uVar22 << 3);
        }
        (**(code **)(*plVar16 + 0x2d8))(plVar16);
        FUN_1478493d6(lVar34 + 0x50);
        puVar17 = local_430;
        pppppiVar29 = local_448;
        if ((int)uVar8 < 1) {
          puVar42 = local_3f0;
          lVar34 = local_428;
          puVar44 = local_418;
          iVar28 = (int)local_388;
        }
        else {
          lVar34 = *plVar3 + (ulonglong)uVar8 * 0x208;
          iVar28 = *(int *)(lVar34 + 0x1f0);
          uVar8 = iVar28 + 1;
          *(uint *)(lVar34 + 0x1f0) = uVar8;
          if (*(uint *)(lVar34 + 500) < uVar8) {
            FUN_1446f48e2((longlong *)(lVar34 + 0x1e8));
          }
          *(int *)(*(longlong *)(lVar34 + 0x1e8) + (longlong)iVar28 * 4) = (int)local_388;
          puVar42 = local_3f0;
          lVar34 = local_428;
          puVar44 = local_418;
          iVar28 = (int)local_388;
        }
LAB_1433a0a24:
        if (lVar34 == 0) {
          lVar34 = *local_410;
          local_418 = puVar44;
          FUN_147849498(*plVar3 + (longlong)iVar28 * 0x208 + 0x50,&local_368);
          local_458 = &local_2e8;
          uVar9 = FUN_14784ca5a(&local_368,&local_348,&local_328);
          local_378 = (int ****)CONCAT44(local_378._4_4_,uVar9);
          local_438 = (longlong *)FUN_1478510c0(lVar34 + 0xa8,uVar9,&local_378);
          lVar31 = local_438[1];
          local_408 = lVar34;
          if ((longlong)(int)lVar31 == 0) {
            local_400 = (longlong *)0x0;
          }
          else {
            lVar34 = *local_438;
            lVar35 = 0;
            do {
              lVar47 = *(longlong *)(lVar34 + lVar35);
              cVar7 = FUN_147846dc4(lVar47);
              if (cVar7 != '\0') {
                plVar16 = *(longlong **)(lVar34 + 8 + lVar35);
                if (plVar16 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                  UNLOCK();
                }
                local_400 = plVar16;
                if (lVar47 == 0) goto LAB_1433a0b3d;
                goto LAB_1433a0e94;
              }
              lVar35 = lVar35 + 0x10;
            } while ((longlong)(int)lVar31 * 0x10 != lVar35);
            local_400 = (longlong *)0x0;
          }
LAB_1433a0b3d:
          lVar31 = local_408;
          *(int *)(local_408 + 0xa4) = *(int *)(local_408 + 0xa4) + 1;
          ppppiVar11 = (int ****)FUN_14001cc68(0x290,0x10);
          ppppiVar11[2] = (int ***)0x0;
          ppppiVar11[3] = (int ***)0x8000000000;
          ppppiVar11[6] = (int ***)0x0;
          ppppiVar11[7] = (int ***)0x8000000000;
          ppppiVar11[10] = (int ***)0x0;
          ppppiVar11[0xb] = (int ***)0x8000000000;
          ppppiVar11[0xe] = (int ***)0x0;
          ppppiVar11[0xf] = (int ***)0x8000000000;
          ppppiVar11[0x12] = (int ***)0x0;
          ppppiVar11[0x13] = (int ***)0x8000000000;
          ppppiVar11[0x36] = (int ***)0x0;
          ppppiVar11[0x37] = (int ***)0x1000000000;
          ppppiVar11[0x14] = (int ***)0x0;
          ppppiVar11[0x15] = (int ***)0x0;
          ppppiVar11[0x3e] = (int ***)0x0;
          *(int *)(ppppiVar11 + 0x3f) = 0;
          ppppiVar11[0x3a] = (int ***)0x0;
          ppppiVar11[0x3b] = (int ***)0x0;
          ppppiVar11[0x38] = (int ***)0x0;
          ppppiVar11[0x39] = (int ***)0x0;
          ((int *)((longlong)ppppiVar11 + 0x1fc))[0] = 0x80;
          ((int *)((longlong)ppppiVar11 + 0x1fc))[1] = -1;
          *(int *)((longlong)ppppiVar11 + 0x204) = 0;
          ppppiVar11[0x42] = (int ***)0x0;
          *(int *)(ppppiVar11 + 0x43) = 0;
          ppppiVar11[0x48] = (int ***)0x0;
          *(int *)(ppppiVar11 + 0x49) = 0;
          ppppiVar11[0x44] = (int ***)0x0;
          ppppiVar11[0x45] = (int ***)0x0;
          ((int *)((longlong)ppppiVar11 + 0x24c))[0] = 0x80;
          ((int *)((longlong)ppppiVar11 + 0x24c))[1] = -1;
          *(int *)((longlong)ppppiVar11 + 0x254) = 0;
          ppppiVar11[0x4c] = (int ***)0x0;
          *(int *)(ppppiVar11 + 0x4d) = 0;
          *(int *)(ppppiVar11 + 0x4e) = -1;
          ppppiVar11[0x4f] = (int ***)0x0;
          ppppiVar11[0x50] = (int ***)0xffffffff;
          plVar16 = (longlong *)FUN_145b3ac3e();
          lVar34 = plVar16[0x22];
          if (lVar34 == 0) {
            (**(code **)(*plVar16 + 1000))(plVar16);
            lVar34 = plVar16[0x22];
          }
          uVar8 = *(uint *)(lVar34 + 0x28);
          if (0x7ffff < (int)uVar8) {
            uVar8 = 0x80000;
          }
          pppiVar12 = (int ***)(ulonglong)uVar8;
          if ((int)uVar8 < 0x401) {
            pppiVar12 = (int ***)0x400;
          }
          ppppiVar11[0x51] = pppiVar12;
          FUN_147845aa8(ppppiVar11,&local_368,*(undefined4 *)(lVar31 + 0xa4));
          plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar48 = local_438;
          plVar16[1] = (longlong)&DAT_100000001;
          *plVar16 = (longlong)&PTR_FUN_14a5b58f0;
          plVar16[2] = (longlong)ppppiVar11;
          iVar28 = (int)local_438[1];
          *(uint *)(local_438 + 1) = iVar28 + 1U;
          if (*(uint *)((longlong)local_438 + 0xc) < iVar28 + 1U) {
            FUN_147851640(local_438,iVar28);
          }
          plVar1 = local_400;
          lVar34 = *plVar48;
          *(int *****)(lVar34 + (longlong)iVar28 * 0x10) = ppppiVar11;
          *(longlong **)(lVar34 + 8 + (longlong)iVar28 * 0x10) = plVar16;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          if (local_400 != (longlong *)0x0) {
            LOCK();
            plVar48 = local_400 + 1;
            *(int *)plVar48 = (int)*plVar48 + -1;
            UNLOCK();
            if ((int)*plVar48 == 0) {
              (**(code **)*local_400)(local_400);
              LOCK();
              piVar18 = (int *)((longlong)plVar1 + 0xc);
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (*piVar18 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          iVar28 = *(int *)(lVar31 + 0x150);
          *(uint *)(lVar31 + 0x150) = iVar28 + 1U;
          if (*(uint *)(lVar31 + 0x154) < iVar28 + 1U) {
            FUN_147851640((longlong *)(lVar31 + 0x148),iVar28);
          }
          lVar34 = *(longlong *)(lVar31 + 0x148);
          *(int *****)(lVar34 + (longlong)iVar28 * 0x10) = ppppiVar11;
          *(longlong **)(lVar34 + 8 + (longlong)iVar28 * 0x10) = plVar16;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          ppppiVar20 = ppppiVar11 + 0x16;
          if ((int ****)ppppiVar11[0x36] != (int ****)0x0) {
            ppppiVar20 = (int ****)ppppiVar11[0x36];
          }
          if ((longlong)*(int *)(ppppiVar11 + 0x37) != 0) {
            local_438 = (longlong *)(local_408 + 0xf8);
            lVar34 = (longlong)*(int *)(ppppiVar11 + 0x37) << 4;
            do {
              uVar8 = ((uint)((ulonglong)*ppppiVar20 >> 0x14) & 0xffff ^
                      (uint)((ulonglong)*ppppiVar20 >> 4)) * -0x7a143595;
              uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
              plVar48 = (longlong *)FUN_14785182e(local_438,uVar8 >> 0x10 ^ uVar8,ppppiVar20);
              iVar28 = (int)plVar48[1];
              *(uint *)(plVar48 + 1) = iVar28 + 1U;
              if (*(uint *)((longlong)plVar48 + 0xc) < iVar28 + 1U) {
                FUN_147851640(plVar48,iVar28);
              }
              lVar31 = *plVar48;
              *(int *****)(lVar31 + (longlong)iVar28 * 0x10) = ppppiVar11;
              *(longlong **)(lVar31 + 8 + (longlong)iVar28 * 0x10) = plVar16;
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              ppppiVar20 = ppppiVar20 + 2;
              lVar34 = lVar34 + -0x10;
            } while (lVar34 != 0);
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_3d8 = ppppiVar11;
          uStack_3d0 = plVar16;
          FUN_147851de8(local_408 + 0x438);
          plVar48 = uStack_3d0;
          puVar17 = local_430;
          pppppiVar29 = local_448;
          if (uStack_3d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_3d0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_3d0)(uStack_3d0);
              LOCK();
              piVar18 = (int *)((longlong)plVar48 + 0xc);
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (*piVar18 == 0) {
                (**(code **)(*plVar48 + 0x10))(plVar48);
              }
            }
          }
LAB_1433a0e94:
          puVar42 = local_3f0;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
            LOCK();
            plVar48 = plVar16 + 1;
            *(int *)plVar48 = (int)*plVar48 + -1;
            UNLOCK();
            if ((int)*plVar48 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar18 = (int *)((longlong)plVar16 + 0xc);
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (*piVar18 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
            LOCK();
            plVar48 = plVar16 + 1;
            *(int *)plVar48 = (int)*plVar48 + -1;
            UNLOCK();
            if ((int)*plVar48 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar18 = (int *)((longlong)plVar16 + 0xc);
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (*piVar18 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
          }
          FUN_147846af0(&local_368);
          lVar34 = local_428;
          puVar44 = local_418;
        }
      }
      puVar44 = puVar44 + 1;
    } while (puVar44 != puVar42);
  }
  param_3 = local_410;
  uVar36 = local_3f8;
  uVar27 = local_439;
  if ((longlong)*(int *)(param_1 + 6) != 0) {
    lVar34 = (longlong)*(int *)(param_1 + 6) * 0x208;
    lVar31 = param_1[5] + 0x1f8;
    do {
      if (((*(longlong *)(lVar31 + -0x1f0) != 0) &&
          (FUN_147848db2(*(longlong *)(lVar31 + -0x1f0),*local_410,lVar31),
          *(int *)(lVar31 + 8) == 0)) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar31 + -0x1f0) + 0x2c0))(), cVar7 != '\0')) {
        *(undefined8 *)(lVar31 + -0x1f0) = 0;
      }
      lVar31 = lVar31 + 0x208;
      lVar34 = lVar34 + -0x208;
    } while (lVar34 != 0);
    iVar28 = *(int *)(param_1 + 6);
    if (0 < iVar28) {
      local_430 = param_1 + 0xe;
      piVar18 = (int *)0x0;
      do {
        lVar34 = *plVar3;
        lVar31 = (longlong)piVar18 * 0x208;
        plVar16 = (longlong *)(lVar34 + lVar31 + 0x30);
        local_420 = piVar18;
        if (0 < *(int *)(lVar34 + lVar31 + 0x38)) {
          lVar35 = 0;
          do {
            local_3d8 = *(int *****)(*plVar16 + lVar35 * 8);
            if (*(int *)(param_1 + 8) != *(int *)((longlong)param_1 + 0x6c)) {
              uVar8 = (uint)((ulonglong)local_3d8 >> 0x10);
              uVar22 = (uint)local_3d8 & 0xffff;
              puVar17 = (undefined8 *)param_1[0xf];
              if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
                puVar17 = local_430;
              }
              iVar28 = *(int *)((longlong)puVar17 +
                               (ulonglong)
                               (*(int *)(param_1 + 0x10) - 1U &
                               (int)((ulonglong)local_3d8 >> 0x20) +
                               ((uint)local_3d8 << 0x10 | uVar22) + (uVar8 << 0x13 | uVar8 & 0xffff)
                               + (uVar22 >> 4)) * 4);
              if (iVar28 != -1) {
                do {
                  puVar17 = (undefined8 *)((longlong)*local_448 + (longlong)iVar28 * 0x14);
                  if ((int ****)*puVar17 == local_3d8) {
                    if ((puVar17 != (undefined8 *)0x0) && ((int *)(puVar17 + 1) != (int *)0x0)) {
                      iVar28 = *(int *)(puVar17 + 1);
                      local_388 = (int ****)CONCAT44(local_388._4_4_,iVar28);
                      goto LAB_1433a1231;
                    }
                    break;
                  }
                  iVar28 = *(int *)((longlong)puVar17 + 0xc);
                } while (iVar28 != -1);
              }
            }
            local_388 = (int ****)CONCAT44(local_388._4_4_,*(undefined4 *)(param_1 + 6));
            local_368 = (int ****)&local_3d8;
            ppvStack_360 = (void **)&local_388;
            FUN_140171856(local_448,&local_378,&local_368);
            local_368 = local_3d8;
            local_308 = 0;
            uStack_320 = 0;
            uStack_330 = 0;
            local_328 = 0;
            uStack_340 = 0;
            local_338 = 0;
            uStack_350 = 0;
            local_348 = 0;
            ppvStack_360 = (void **)0x0;
            local_358 = 0;
            local_300 = 0x8000000000;
            local_2e8 = 0;
            local_2e0 = 0x8000000000;
            local_2c8 = 0;
            local_2c0 = 0x8000000000;
            local_2a8 = 0;
            local_2a0 = 0x8000000000;
            local_288 = 0;
            local_280 = 0x8000000000;
            local_268 = 0;
            local_260 = 0x8000000000;
            local_248 = 0;
            local_240 = 0x8000000000;
            local_228 = 0;
            local_220 = 0x8000000000;
            local_208 = 0;
            local_200 = 0x8000000000;
            local_1e8 = 0;
            local_1e0 = 0x8000000000;
            local_1c8 = 0;
            local_1c0 = 0x8000000000;
            local_1a8 = 0;
            local_1a0 = 0x8000000000;
            local_198 = 0xffffffff;
            local_190 = (int)local_388;
            uStack_18c = 0;
            local_188 = 0;
            local_170 = 0;
            uStack_168 = 0;
            local_180 = 0;
            uStack_178 = 0;
            iVar28 = *(int *)(param_1 + 6);
            *(uint *)(param_1 + 6) = iVar28 + 1U;
            if (*(uint *)((longlong)param_1 + 0x34) < iVar28 + 1U) {
              FUN_147853ed6(plVar3,iVar28);
            }
            FUN_147853d98((longlong)iVar28 * 0x208 + *plVar3);
            FUN_14784c522(&local_368);
            lVar34 = *plVar3;
            iVar28 = (int)local_388;
LAB_1433a1231:
            lVar47 = lVar34 + (longlong)iVar28 * 0x208;
            iVar28 = *(int *)(lVar47 + 0x48);
            uVar8 = iVar28 + 1;
            *(uint *)(lVar47 + 0x48) = uVar8;
            if (*(uint *)(lVar47 + 0x4c) < uVar8) {
              FUN_1446f84a2((longlong *)(lVar47 + 0x40));
            }
            *(undefined8 *)(*(longlong *)(lVar47 + 0x40) + (longlong)iVar28 * 8) =
                 *(undefined8 *)(lVar34 + lVar31);
            lVar35 = lVar35 + 1;
            lVar34 = *plVar3;
            plVar16 = (longlong *)(lVar34 + lVar31 + 0x30);
          } while (lVar35 < *(int *)(lVar34 + lVar31 + 0x38));
        }
        *(undefined4 *)(plVar16 + 1) = 0;
        if (*(int *)((longlong)plVar16 + 0xc) < 0) {
          FUN_1402191ca();
        }
        piVar18 = (int *)((longlong)local_420 + 1);
        iVar28 = *(int *)(param_1 + 6);
      } while ((longlong)piVar18 < (longlong)iVar28);
      if (0 < iVar28) {
        plVar16 = (longlong *)0x0;
        do {
          pppppiVar29 = local_448;
          lVar34 = *plVar3;
          lVar31 = (longlong)plVar16 * 0x208;
          local_438 = plVar16;
          if (0 < *(int *)(lVar34 + 0x48 + lVar31)) {
            lVar35 = 0;
            do {
              local_3d8 = *(int *****)(*(longlong *)(lVar34 + 0x40 + lVar31) + lVar35 * 8);
              uVar9 = (undefined4)((ulonglong)local_388 >> 0x20);
              if (*(int *)(param_1 + 8) != *(int *)((longlong)param_1 + 0x6c)) {
                uVar8 = (uint)((ulonglong)local_3d8 >> 0x10);
                uVar22 = (uint)local_3d8 & 0xffff;
                puVar17 = (undefined8 *)param_1[0xf];
                if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
                  puVar17 = local_430;
                }
                iVar28 = *(int *)((longlong)puVar17 +
                                 (ulonglong)
                                 (*(int *)(param_1 + 0x10) - 1U &
                                 (int)((ulonglong)local_3d8 >> 0x20) +
                                 ((uint)local_3d8 << 0x10 | uVar22) +
                                 (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar22 >> 4)) * 4);
                if (iVar28 != -1) {
                  do {
                    puVar17 = (undefined8 *)((longlong)*pppppiVar29 + (longlong)iVar28 * 0x14);
                    if ((int ****)*puVar17 == local_3d8) {
                      if ((puVar17 != (undefined8 *)0x0) && ((int *)(puVar17 + 1) != (int *)0x0)) {
                        iVar28 = *(int *)(puVar17 + 1);
                        local_388 = (int ****)CONCAT44(uVar9,iVar28);
                        goto LAB_1433a155d;
                      }
                      break;
                    }
                    iVar28 = *(int *)((longlong)puVar17 + 0xc);
                  } while (iVar28 != -1);
                }
              }
              local_388 = (int ****)CONCAT44(uVar9,*(undefined4 *)(param_1 + 6));
              local_368 = (int ****)&local_3d8;
              ppvStack_360 = (void **)&local_388;
              FUN_140171856(pppppiVar29,&local_378);
              local_368 = local_3d8;
              local_308 = 0;
              uStack_320 = 0;
              uStack_330 = 0;
              local_328 = 0;
              uStack_340 = 0;
              local_338 = 0;
              uStack_350 = 0;
              local_348 = 0;
              ppvStack_360 = (void **)0x0;
              local_358 = 0;
              local_300 = 0x8000000000;
              local_2e8 = 0;
              local_2e0 = 0x8000000000;
              local_2c8 = 0;
              local_2c0 = 0x8000000000;
              local_2a8 = 0;
              local_2a0 = 0x8000000000;
              local_288 = 0;
              local_280 = 0x8000000000;
              local_268 = 0;
              local_260 = 0x8000000000;
              local_248 = 0;
              local_240 = 0x8000000000;
              local_228 = 0;
              local_220 = 0x8000000000;
              local_208 = 0;
              local_200 = 0x8000000000;
              local_1e8 = 0;
              local_1e0 = 0x8000000000;
              local_1c8 = 0;
              local_1c0 = 0x8000000000;
              local_1a8 = 0;
              local_1a0 = 0x8000000000;
              local_198 = 0xffffffff;
              local_190 = (int)local_388;
              uStack_18c = 0;
              local_188 = 0;
              local_170 = 0;
              uStack_168 = 0;
              local_180 = 0;
              uStack_178 = 0;
              iVar28 = *(int *)(param_1 + 6);
              *(uint *)(param_1 + 6) = iVar28 + 1U;
              if (*(uint *)((longlong)param_1 + 0x34) < iVar28 + 1U) {
                FUN_147853ed6(plVar3,iVar28);
              }
              FUN_147853d98((longlong)iVar28 * 0x208 + *plVar3,&local_368);
              FUN_14784c522(&local_368);
              lVar34 = *plVar3;
              iVar28 = (int)local_388;
LAB_1433a155d:
              if (*(longlong *)(lVar34 + 8 + (longlong)iVar28 * 0x208) == 0) {
                lVar34 = lVar34 + (longlong)iVar28 * 0x208;
                lVar47 = (longlong)*(int *)(lVar34 + 0x1f0);
                if (lVar47 != 0) {
                  lVar34 = *(longlong *)(lVar34 + 0x1e8);
                  lVar33 = 0;
                  do {
                    FUN_140721fbe(*plVar3 + lVar31 + 0x40,
                                  (longlong)*(int *)(lVar34 + lVar33) * 0x208 + *plVar3);
                    lVar33 = lVar33 + 4;
                  } while (lVar47 * 4 != lVar33);
                }
              }
              else {
                FUN_1449e3bb0(lVar34 + lVar31 + 0x10,&local_388);
              }
              lVar35 = lVar35 + 1;
              lVar34 = *plVar3;
            } while (lVar35 < *(int *)(lVar34 + 0x48 + lVar31));
          }
          lVar34 = lVar34 + lVar31;
          if (((*(longlong *)(lVar34 + 8) == 0) && (*(int *)(lVar34 + 0x1f0) != 0)) &&
             ((longlong)*(int *)(lVar34 + 0x18) != 0)) {
            piVar18 = *(int **)(lVar34 + 0x10);
            local_420 = piVar18 + *(int *)(lVar34 + 0x18);
            do {
              iVar28 = *piVar18;
              local_368 = (int ****)CONCAT44(local_368._4_4_,iVar28);
              lVar34 = *plVar3;
              lVar35 = (longlong)iVar28 * 0x208;
              if (*(longlong *)(lVar34 + 8 + lVar35) == 0) {
                if (((longlong)local_438 < (longlong)iVar28) &&
                   (lVar47 = (longlong)*(int *)(lVar34 + 0x1f0 + lVar31), lVar47 != 0)) {
                  lVar33 = *(longlong *)(lVar34 + 0x1e8 + lVar31);
                  lVar30 = 0;
                  do {
                    FUN_140721fbe(*plVar3 + (longlong)*(int *)(lVar33 + lVar30) * 0x208 + 0x40,
                                  lVar35 + lVar34);
                    lVar30 = lVar30 + 4;
                  } while (lVar47 * 4 != lVar30);
                }
              }
              else {
                lVar35 = (longlong)*(int *)(lVar34 + 0x1f0 + lVar31);
                if (lVar35 != 0) {
                  lVar34 = *(longlong *)(lVar34 + 0x1e8 + lVar31);
                  lVar47 = 0;
                  do {
                    FUN_1449e3bb0(*plVar3 + (longlong)*(int *)(lVar34 + lVar47) * 0x208 + 0x10,
                                  &local_368);
                    lVar47 = lVar47 + 4;
                  } while (lVar35 * 4 != lVar47);
                }
              }
              piVar18 = piVar18 + 1;
            } while (piVar18 != local_420);
          }
          plVar16 = (longlong *)((longlong)local_438 + 1);
          iVar28 = *(int *)(param_1 + 6);
        } while ((longlong)plVar16 < (longlong)iVar28);
      }
    }
    param_3 = local_410;
    uVar36 = local_3f8;
    uVar27 = local_439;
    if (iVar28 != 0) {
      lVar34 = *plVar3;
      lVar31 = 0;
      do {
        iVar24 = *(int *)(lVar34 + 0x18 + lVar31);
        pvVar4 = *(void **)(lVar34 + 0x10 + lVar31);
        *(int *)(lVar34 + 0x28 + lVar31) = iVar24;
        if (iVar24 == 0 && *(int *)(lVar34 + 0x2c + lVar31) == 0) {
          *(undefined4 *)(lVar34 + 0x2c + lVar31) = 0;
        }
        else {
          FUN_144a06ca8(lVar34 + 0x20 + lVar31,iVar24);
          if (iVar24 != 0) {
            memcpy(*(void **)(lVar34 + 0x20 + lVar31),pvVar4,(longlong)iVar24 << 2);
          }
        }
        *(undefined4 *)(lVar34 + 0x1dc + lVar31) = 0;
        lVar31 = lVar31 + 0x208;
      } while ((longlong)iVar28 * 0x208 != lVar31);
      iVar28 = *(int *)(param_1 + 6);
      local_378 = (int ****)0x0;
      uStack_370 = 0;
      if (iVar28 < 0) {
LAB_1433a2466:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar28);
      }
      if (iVar28 != 0) {
        FUN_14481578e(&local_378);
        iVar28 = *(int *)(param_1 + 6);
        if (0 < iVar28) {
          lVar34 = 0;
          lVar31 = 0;
          do {
            uVar25 = uStack_370;
            if (*(longlong *)(*plVar3 + 8 + lVar34) != 0) {
              lVar35 = (longlong)(int)uStack_370;
              uVar8 = (int)uStack_370 + 1;
              uStack_370 = CONCAT44(uStack_370._4_4_,uVar8);
              if (uStack_370._4_4_ < uVar8) {
                FUN_1446f48e2(&local_378,uVar25 & 0xffffffff);
              }
              *(int *)((longlong)local_378 + lVar35 * 4) = (int)lVar31;
              local_388 = (int ****)param_1[5];
              local_380 = *(undefined4 *)(param_1 + 6);
              FUN_14784c204((longlong)local_388 + lVar34);
              iVar28 = *(int *)(param_1 + 6);
            }
            lVar31 = lVar31 + 1;
            lVar34 = lVar34 + 0x208;
          } while (lVar31 < iVar28);
        }
      }
      ppppiVar11 = local_378;
      iVar28 = (int)uStack_370;
      lVar34 = (longlong)(int)uStack_370;
      if (1 < lVar34) {
        memset(&local_358,0,0x2f0);
        local_368 = ppppiVar11;
        ppvStack_360 = (void **)((longlong)ppppiVar11 + (lVar34 + -1) * 4);
        fVar51 = logf((float)iVar28);
        local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar51 + fVar51));
        pppppiVar29 = &local_368;
        do {
          ppppiVar20 = *pppppiVar29;
          ppppiVar32 = pppppiVar29[1];
          iVar28 = *(int *)(pppppiVar29 + 2);
          iVar24 = (int)((ulonglong)((longlong)ppppiVar32 - (longlong)ppppiVar20) >> 2);
          uVar25 = (ulonglong)(iVar24 + 1);
          ppppiVar37 = ppppiVar20;
          ppppiVar11 = ppppiVar32;
          local_448 = pppppiVar29;
          if (iVar28 != 0) {
LAB_1433a19b7:
            pppppiVar29 = local_448;
            if (8 < (int)(uint)uVar25) {
              local_430 = (undefined8 *)CONCAT44(local_430._4_4_,iVar28);
              uVar25 = (ulonglong)((uint)uVar25 >> 1);
              iVar24 = *(int *)((longlong)ppppiVar20 + uVar25 * 4);
              *(int *)((longlong)ppppiVar20 + uVar25 * 4) = *(int *)ppppiVar20;
              *(int *)ppppiVar20 = iVar24;
              ppppiVar43 = (int ****)((longlong)ppppiVar11 + 4);
              ppppiVar19 = ppppiVar20;
              do {
                ppppiVar6 = (int ****)((longlong)ppppiVar19 + 4);
                ppppiVar38 = (int ****)((longlong)ppppiVar19 + 4);
                do {
                  ppppiVar45 = ppppiVar38;
                  ppppiVar19 = ppppiVar6;
                  if (ppppiVar11 < ppppiVar19) break;
                  ppppiVar6 = (int ****)((longlong)ppppiVar19 + 4);
                  ppppiVar38 = (int ****)((longlong)ppppiVar45 + 4);
                } while (*(int *)(*plVar3 + 0x1dc + (longlong)*(int *)ppppiVar20 * 0x208) <=
                         *(int *)(*plVar3 + 0x1dc + (longlong)*(int *)ppppiVar19 * 0x208));
                ppppiVar6 = ppppiVar43 + -1;
                do {
                  ppppiVar38 = ppppiVar43;
                  ppppiVar46 = ppppiVar6;
                  ppppiVar43 = (int ****)((longlong)ppppiVar38 + -4);
                  if (ppppiVar43 <= ppppiVar20) break;
                  ppppiVar6 = (int ****)((longlong)ppppiVar46 + -4);
                } while (*(int *)(*plVar3 + 0x1dc + (longlong)*(int *)ppppiVar43 * 0x208) <=
                         *(int *)(*plVar3 + 0x1dc + (longlong)*(int *)ppppiVar20 * 0x208));
                if (ppppiVar43 < ppppiVar19) goto LAB_1433a1a9b;
                iVar24 = *(int *)ppppiVar19;
                *(int *)ppppiVar19 = *(int *)ppppiVar43;
                *(int *)ppppiVar43 = iVar24;
              } while( true );
            }
            if (ppppiVar20 < ppppiVar11) {
              do {
                ppppiVar32 = ppppiVar20;
                if ((int ****)((longlong)ppppiVar20 + 4U) <= ppppiVar11) {
                  iVar28 = *(int *)ppppiVar20;
                  ppppiVar37 = (int ****)((longlong)ppppiVar20 + 4U);
                  do {
                    ppppiVar43 = ppppiVar37;
                    iVar24 = *(int *)ppppiVar37;
                    if (*(int *)(*plVar3 + 0x1dc + (longlong)iVar28 * 0x208) <=
                        *(int *)(*plVar3 + 0x1dc + (longlong)*(int *)ppppiVar37 * 0x208)) {
                      ppppiVar43 = ppppiVar32;
                      iVar24 = iVar28;
                    }
                    iVar28 = iVar24;
                    ppppiVar32 = ppppiVar43;
                    ppppiVar37 = (int ****)((longlong)ppppiVar37 + 4);
                  } while (ppppiVar37 <= ppppiVar11);
                }
                iVar28 = *(int *)ppppiVar32;
                *(int *)ppppiVar32 = *(int *)ppppiVar11;
                *(int *)ppppiVar11 = iVar28;
                ppppiVar11 = (int ****)((longlong)ppppiVar11 - 4);
              } while (ppppiVar20 < ppppiVar11);
            }
            goto LAB_1433a1d99;
          }
LAB_1433a1b49:
          iVar28 = (int)uVar25;
          pppppiVar29 = local_448;
          if (iVar28 != 0) {
            iVar24 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
            iVar41 = iVar24;
joined_r0x0001433a1b6c:
            do {
              iVar40 = iVar24 * 2 + 1;
              if (iVar40 < iVar28) {
                iVar39 = iVar24 * 2 + 2;
                lVar34 = *plVar3;
                if ((iVar39 < iVar28) &&
                   (*(int *)(lVar34 + 0x1dc +
                            (longlong)*(int *)((longlong)ppppiVar20 + (longlong)iVar39 * 4) * 0x208)
                    <= *(int *)(lVar34 + 0x1dc +
                               (longlong)*(int *)((longlong)ppppiVar20 + (longlong)iVar40 * 4) *
                               0x208))) {
                  iVar40 = iVar39;
                }
                iVar39 = *(int *)((longlong)ppppiVar20 + (longlong)iVar40 * 4);
                iVar13 = *(int *)((longlong)ppppiVar20 + (longlong)iVar24 * 4);
                if (*(int *)(lVar34 + 0x1dc + (longlong)iVar39 * 0x208) <
                    *(int *)(lVar34 + 0x1dc + (longlong)iVar13 * 0x208)) {
                  *(int *)((longlong)ppppiVar20 + (longlong)iVar24 * 4) = iVar39;
                  *(int *)((longlong)ppppiVar20 + (longlong)iVar40 * 4) = iVar13;
                  iVar24 = iVar40;
                  goto joined_r0x0001433a1b6c;
                }
              }
              bVar49 = iVar41 != 0;
              iVar24 = iVar41 + -1;
              iVar41 = iVar24;
            } while (bVar49);
            if (1 < iVar28) {
              iVar24 = *(int *)ppppiVar20;
              *(int *)ppppiVar20 = *(int *)((longlong)ppppiVar20 + (uVar25 - 1) * 4);
              *(int *)((longlong)ppppiVar20 + (uVar25 - 1) * 4) = iVar24;
              if (iVar28 != 2) {
                do {
                  uVar26 = uVar25 - 1;
                  iVar28 = 0;
                  iVar41 = 1;
                  iVar24 = 0;
                  do {
                    iVar28 = iVar28 + 2;
                    lVar34 = *plVar3;
                    iVar40 = iVar41;
                    if (((longlong)iVar28 < (longlong)uVar26) &&
                       (*(int *)(lVar34 + 0x1dc +
                                (longlong)*(int *)((longlong)ppppiVar20 + (longlong)iVar28 * 4) *
                                0x208) <=
                        *(int *)(lVar34 + 0x1dc +
                                (longlong)*(int *)((longlong)ppppiVar20 + (longlong)iVar41 * 4) *
                                0x208))) {
                      iVar40 = iVar28;
                    }
                    iVar28 = *(int *)((longlong)ppppiVar20 + (longlong)iVar40 * 4);
                    iVar41 = *(int *)((longlong)ppppiVar20 + (longlong)iVar24 * 4);
                    if (*(int *)(lVar34 + 0x1dc + (longlong)iVar41 * 0x208) <=
                        *(int *)(lVar34 + 0x1dc + (longlong)iVar28 * 0x208)) break;
                    *(int *)((longlong)ppppiVar20 + (longlong)iVar24 * 4) = iVar28;
                    *(int *)((longlong)ppppiVar20 + (longlong)iVar40 * 4) = iVar41;
                    iVar28 = iVar40 * 2;
                    iVar41 = iVar40 * 2 + 1;
                    iVar24 = iVar40;
                  } while ((longlong)iVar41 < (longlong)uVar26);
                  iVar28 = *(int *)ppppiVar20;
                  *(int *)ppppiVar20 = *(int *)((longlong)ppppiVar20 + (uVar25 - 2) * 4);
                  *(int *)((longlong)ppppiVar20 + (uVar25 - 2) * 4) = iVar28;
                  uVar25 = uVar26;
                } while (2 < uVar26);
              }
            }
          }
LAB_1433a1d99:
          pppppiVar29 = pppppiVar29 + -3;
        } while (&local_368 <= pppppiVar29);
      }
      FUN_14784978c(&local_368,plVar3);
      local_398 = 0;
      uStack_390 = 0;
      iVar28 = *(int *)(param_1 + 6);
      if (iVar28 < 0) goto LAB_1433a2466;
      if (iVar28 != 0) {
        FUN_14481578e(&local_398);
      }
      if ((int)uStack_370 != 0) {
        do {
          iVar28 = -1;
          if (0 < (int)uStack_370) {
            lVar34 = 0;
            iVar24 = (int)uStack_370;
            do {
              iVar41 = *(int *)((longlong)local_378 + lVar34 * 4);
              if (*(int *)(*plVar3 + 0x28 + (longlong)iVar41 * 0x208) == 0) {
                if ((*(char *)((longlong)param_1 + 0x11) != '\0') ||
                   (lVar31 = *plVar3 + (longlong)iVar41 * 0x208,
                   cVar7 = FUN_147849ba2(&local_368,lVar31 + 0x50,lVar31 + 0x1f8), cVar7 != '\0'))
                goto LAB_1433a20c4;
                if (iVar28 != -1) {
                  iVar41 = iVar28;
                }
                iVar28 = iVar41;
                iVar24 = (int)uStack_370;
              }
              lVar34 = lVar34 + 1;
            } while (lVar34 < iVar24);
          }
          iVar41 = -1;
LAB_1433a20c4:
          lVar34 = *plVar3;
          if ((iVar41 == -1) && (iVar28 == -1)) {
            *(undefined1 *)(param_1 + 2) = 1;
            lVar31 = (longlong)*(int *)local_378 * 0x208;
            iVar28 = *(int *)(lVar34 + 0x28 + lVar31);
            iVar24 = *(int *)(*(longlong *)(lVar34 + 0x20 + lVar31) + -4 + (longlong)iVar28 * 4);
            *(int *)(lVar34 + 0x28 + lVar31) = iVar28 + -1;
            iVar28 = *(int *)(param_1[5] + 0x18 + (longlong)*(int *)local_378 * 0x208);
            lVar34 = (longlong)iVar28;
            if (lVar34 != 0) {
              local_438 = (longlong *)(param_1[5] + (longlong)*(int *)local_378 * 0x208 + 0x10);
              local_420 = (int *)*local_438;
              bVar50 = *local_420 == iVar24;
              iVar41 = 0;
              iVar40 = 0;
              do {
                puVar17 = local_430;
                local_430 = (undefined8 *)CONCAT71(local_430._1_7_,bVar50);
                local_418 = (undefined8 *)(longlong)iVar40;
                iVar39 = iVar40 + 1;
                if (iVar40 + 1 < iVar28) {
                  iVar39 = iVar28;
                }
                local_448 = (int *****)(CONCAT71(local_448._1_7_,bVar50) ^ 1);
                bVar21 = bVar50 ^ 1;
                iVar13 = iVar40;
                puVar42 = local_418;
                do {
                  puVar42 = (undefined8 *)((longlong)puVar42 + 1);
                  iVar14 = iVar39;
                  if (lVar34 <= (longlong)puVar42) break;
                  iVar13 = iVar13 + 1;
                  bVar21 = (byte)local_448;
                  iVar14 = iVar13;
                } while ((bool)(bVar50 & 1) == (local_420[(longlong)puVar42] == iVar24));
                bVar5 = bVar50 & 1;
                bVar50 = bVar21;
                if (bVar5 == 0) {
                  iVar39 = iVar14 - iVar40;
                  if (iVar41 != iVar40) {
                    piVar18 = local_420 + (longlong)local_418;
                    local_418 = (undefined8 *)CONCAT44(iVar40 >> 0x1f,iVar14);
                    local_430._4_4_ = SUB84(puVar17,4);
                    local_430 = (undefined8 *)CONCAT44(local_430._4_4_,iVar41);
                    local_428 = CONCAT44(local_428._4_4_,iVar39);
                    memmove(local_420 + iVar41,piVar18,(longlong)iVar39 << 2);
                    bVar50 = (byte)local_448;
                    iVar14 = (int)local_418;
                    iVar41 = (int)local_430;
                    iVar39 = (int)local_428;
                  }
                  iVar41 = iVar41 + iVar39;
                }
                iVar40 = iVar14;
              } while ((longlong)puVar42 < lVar34);
              *(int *)(local_438 + 1) = iVar41;
            }
          }
          else {
            if (iVar41 != -1) {
              iVar28 = iVar41;
            }
            local_3d8 = (int ****)CONCAT44(local_3d8._4_4_,iVar28);
            lVar34 = lVar34 + (longlong)iVar28 * 0x208;
            FUN_14784a9c4(&local_368);
            if ((longlong)(int)uStack_370 != 0) {
              lVar31 = (longlong)(int)uStack_370 * 4;
              lVar35 = 0;
              lVar47 = 0;
              do {
                if (*(int *)((longlong)local_378 + lVar35 * 4) == iVar28) {
                  if ((uint)lVar35 != 0xffffffff) {
                    memmove((int *)((longlong)local_378 + (lVar47 >> 0x20) * 4),
                            (int *)((longlong)local_378 + ((lVar47 >> 0x20) + 1) * 4),
                            (longlong)(int)(~(uint)lVar35 + (int)uStack_370) << 2);
                    uStack_370 = CONCAT44(uStack_370._4_4_,(int)uStack_370 + -1);
                  }
                  break;
                }
                lVar47 = lVar47 + 0x100000000;
                lVar35 = lVar35 + 1;
                lVar31 = lVar31 + -4;
              } while (lVar31 != 0);
            }
            uVar25 = uStack_390;
            lVar31 = (longlong)(int)uStack_390;
            uVar8 = (int)uStack_390 + 1;
            uStack_390 = CONCAT44(uStack_390._4_4_,uVar8);
            if (uStack_390._4_4_ < uVar8) {
              FUN_1446f48e2(&local_398,uVar25 & 0xffffffff);
            }
            ppppiVar11 = local_378;
            *(int *)(local_398 + lVar31 * 4) = iVar28;
            iVar28 = *(int *)(lVar34 + 0x1e0);
            if ((longlong)*(int *)(lVar34 + 0x18) != 0) {
              lVar31 = 0;
              do {
                iVar24 = *(int *)(*plVar3 + 0x1e0 +
                                 (longlong)*(int *)(*(longlong *)(lVar34 + 0x10) + lVar31) * 0x208);
                if (iVar28 < iVar24) {
                  iVar28 = iVar24;
                }
                *(int *)(lVar34 + 0x1e0) = iVar28;
                lVar31 = lVar31 + 4;
              } while ((longlong)*(int *)(lVar34 + 0x18) * 4 != lVar31);
            }
            *(int *)(lVar34 + 0x1e0) = iVar28 + 1;
            lVar34 = (longlong)(int)uStack_370;
            if (lVar34 != 0) {
              lVar31 = 0;
              do {
                FUN_1428664a6(*plVar3 + (longlong)*(int *)((longlong)ppppiVar11 + lVar31) * 0x208 +
                              0x20,&local_3d8,0);
                lVar31 = lVar31 + 4;
              } while (lVar34 * 4 != lVar31);
            }
          }
        } while ((int)uStack_370 != 0);
      }
      if (0 < (int)uStack_390) {
        lVar34 = 0;
        do {
          local_3a8 = (void *)0x0;
          uStack_3a0 = 0;
          lVar31 = *plVar3;
          lVar35 = (longlong)*(int *)(local_398 + lVar34 * 4) * 0x208;
          lVar47 = (longlong)*(int *)(lVar31 + 0x18 + lVar35);
          if (lVar47 != 0) {
            lVar31 = *(longlong *)(lVar31 + 0x10 + lVar35);
            lVar33 = 0;
            do {
              FUN_140721fbe(&local_3a8,(longlong)*(int *)(lVar31 + lVar33) * 0x208 + *plVar3);
              lVar33 = lVar33 + 4;
            } while (lVar47 * 4 != lVar33);
            lVar31 = *plVar3;
          }
          pvVar4 = local_3a8;
          if (*(longlong *)(lVar31 + 8 + lVar35) != 0) {
            local_3d8 = *(int *****)(lVar31 + lVar35);
            uStack_3d0 = (longlong *)((longlong *)(lVar31 + lVar35))[1];
            local_3c8 = 1;
            local_3c0 = (void *)0x0;
            lVar47 = (longlong)(int)uStack_3a0;
            local_3b8 = CONCAT44(local_3b8._4_4_,(int)uStack_3a0);
            if (lVar47 == 0) {
              local_3b8 = uStack_3a0 & 0xffffffff;
            }
            else {
              FUN_1401b309e(&local_3c0,uStack_3a0 & 0xffffffff,0);
              memcpy(local_3c0,pvVar4,lVar47 << 3);
              lVar31 = *plVar3;
            }
            local_3b0 = *(undefined4 *)(lVar31 + 0x1e0 + lVar35);
            iVar28 = (int)local_3e8[1];
            *(uint *)(local_3e8 + 1) = iVar28 + 1U;
            if (*(uint *)((longlong)local_3e8 + 0xc) < iVar28 + 1U) {
              FUN_147854334(local_3e8,iVar28);
            }
            lVar31 = *local_3e8;
            lVar35 = (longlong)iVar28 * 0x30;
            *(undefined1 *)(lVar31 + 0x10 + lVar35) = local_3c8;
            puVar2 = (undefined4 *)(lVar31 + lVar35);
            *puVar2 = (undefined4)local_3d8;
            puVar2[1] = local_3d8._4_4_;
            puVar2[2] = (int)uStack_3d0;
            puVar2[3] = uStack_3d0._4_4_;
            *(undefined8 *)(lVar31 + 0x18 + lVar35) = 0;
            *(void **)(lVar31 + 0x18 + lVar35) = local_3c0;
            *(undefined4 *)(lVar31 + 0x20 + lVar35) = (undefined4)local_3b8;
            *(undefined4 *)(lVar31 + 0x24 + lVar35) = local_3b8._4_4_;
            *(undefined4 *)(lVar31 + 0x28 + lVar35) = local_3b0;
            local_3b8 = 0;
            local_3c0 = (void *)0x0;
          }
          if (local_3a8 != (void *)0x0) {
            FUN_1400020a8(local_3a8);
          }
          lVar34 = lVar34 + 1;
        } while (lVar34 < (int)uStack_390);
      }
      uVar36 = local_3f8;
      if (local_398 != 0) {
        FUN_1400020a8();
      }
      FUN_14784c5ac(&local_368);
      param_3 = local_410;
      uVar27 = local_439;
      if (local_378 != (int ****)0x0) {
        FUN_1400020a8();
      }
    }
  }
  puVar10 = (undefined1 *)FUN_1400d7a00();
  *puVar10 = uVar27;
  *(undefined8 *)(puVar10 + 4) = uVar36;
LAB_14339fff6:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar3 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar18 = (int *)((longlong)plVar3 + 0xc);
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (*piVar18 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1433a1a9b:
  iVar24 = *(int *)ppppiVar20;
  *(int *)ppppiVar20 = *(int *)ppppiVar43;
  *(int *)ppppiVar43 = iVar24;
  iVar28 = iVar28 + -1;
  ppppiVar38 = ppppiVar38 + -1;
  if ((longlong)ppppiVar46 - (longlong)ppppiVar37 < (longlong)ppppiVar32 - (longlong)ppppiVar45) {
    if (ppppiVar19 < ppppiVar11) {
      *local_448 = ppppiVar19;
      local_448[1] = ppppiVar11;
      *(int *)(local_448 + 2) = iVar28;
      local_448 = local_448 + 3;
    }
    pppppiVar29 = local_448;
    ppppiVar45 = ppppiVar20;
    ppppiVar32 = ppppiVar46;
    if (ppppiVar43 <= (int ****)((longlong)ppppiVar20 + 4U)) goto LAB_1433a1d99;
  }
  else {
    if ((int ****)((longlong)ppppiVar20 + 4U) < ppppiVar43) {
      *local_448 = ppppiVar20;
      local_448[1] = ppppiVar38;
      *(int *)(local_448 + 2) = iVar28;
      pppppiVar29 = local_448 + 3;
    }
    ppppiVar20 = ppppiVar19;
    ppppiVar38 = ppppiVar11;
    ppppiVar32 = ppppiVar11;
    if (ppppiVar11 <= ppppiVar19) goto LAB_1433a1d99;
  }
  local_448 = pppppiVar29;
  iVar24 = (int)((ulonglong)((longlong)ppppiVar32 - (longlong)ppppiVar45) >> 2);
  uVar25 = (ulonglong)(iVar24 + 1);
  ppppiVar37 = ppppiVar45;
  ppppiVar11 = ppppiVar38;
  if (iVar28 == 0) goto LAB_1433a1b49;
  goto LAB_1433a19b7;
}



// FUNCTION 1433a246f FUN_1433a246f body=55 status=ok
// SIG undefined FUN_1433a246f(void)

void FUN_1433a246f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd918 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd918 = FUN_14171c317(FUN_14636b102,uVar1,L"EProcessorExecutionFlags");
  }
  return;
}



// FUNCTION 1433a24a6 FUN_1433a24a6 body=55 status=ok
// SIG undefined FUN_1433a24a6(void)

void FUN_1433a24a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd978 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd978 = FUN_14171c317(FUN_14636b2c6,uVar1,L"EMassProcessingPhase");
  }
  return;
}



// FUNCTION 1433a24de FUN_1433a24de body=1477 status=ok
// SIG undefined FUN_1433a24de(void)

longlong *
FUN_1433a24de(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_68 [38];
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar6 = (uint *)*puVar2;
  if ((*(byte *)(param_1 + 0x52) & 0x10) == 0) {
    if (puVar6 != (uint *)0x0) goto LAB_1433a25c8;
    while( true ) {
      uVar8 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar8 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar8 | 1;
        __tlregdtor(&LAB_1433a312c);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar2 = puVar5;
      FUN_140217a48(puVar2);
      puVar6 = (uint *)*puVar2;
LAB_1433a25c8:
      puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar9 = (uint *)(puVar11 + 0x9e);
      uVar8 = puVar6[0x12];
      if (puVar9 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar3 = *puVar6;
        *puVar6 = *puVar6 + uVar8 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar8) != 0xffffffff) break;
        puVar6 = (uint *)*puVar2;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar2 = puVar6;
        puVar11 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar11 + 0x9e);
        uVar8 = 0;
        if (puVar9 <= puVar6 + 0x4000) {
          uVar8 = 1;
          goto LAB_1433a264a;
        }
      }
    }
    uVar8 = uVar8 + 1;
LAB_1433a264a:
    *(uint **)(puVar6 + 0x10) = puVar9;
    puVar6[0x12] = uVar8;
    FUN_1447247dc(puVar11,param_5);
    *puVar11 = &PTR_FUN_14a5b5a98;
    puVar11[0x15] = *param_3;
    lVar4 = param_3[1];
    puVar11[0x16] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_147852184(puVar11 + 0x17,param_4);
    puVar11[0x9c] = param_1;
    *(undefined1 *)(puVar11 + 0x9d) = 1;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar11[0xf] = uVar7;
    puVar11[0x10] = 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar10 = &local_41;
  }
  else {
    if (puVar6 != (uint *)0x0) goto LAB_1433a2783;
    while( true ) {
      uVar8 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar8 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar8 | 1;
        __tlregdtor(&LAB_1433a312c);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar2 = puVar5;
      FUN_140217a48(puVar2);
      puVar6 = (uint *)*puVar2;
LAB_1433a2783:
      puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar9 = (uint *)(puVar11 + 0x9e);
      uVar8 = puVar6[0x12];
      if (puVar9 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar3 = *puVar6;
        *puVar6 = *puVar6 + uVar8 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar8) != 0xffffffff) break;
        puVar6 = (uint *)*puVar2;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar2 = puVar6;
        puVar11 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar11 + 0x9e);
        uVar8 = 0;
        if (puVar9 <= puVar6 + 0x4000) {
          uVar8 = 1;
          goto LAB_1433a2805;
        }
      }
    }
    uVar8 = uVar8 + 1;
LAB_1433a2805:
    *(uint **)(puVar6 + 0x10) = puVar9;
    puVar6[0x12] = uVar8;
    FUN_1447247dc(puVar11,param_5);
    *puVar11 = &PTR_FUN_14a5b5a88;
    puVar11[0x15] = *param_3;
    lVar4 = param_3[1];
    puVar11[0x16] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_147852184(puVar11 + 0x17,param_4);
    puVar11[0x9c] = param_1;
    *(undefined1 *)(puVar11 + 0x9d) = 1;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar11[0xf] = uVar7;
    puVar11[0x10] = 0xe80000527800b400;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 3;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar10 = &local_42;
  }
  *puVar10 = 1;
  FUN_1447439e4(puVar11);
  puVar2 = (undefined8 *)*param_2;
  *param_2 = (longlong)puVar11;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1433a2aa4 FUN_1433a2aa4 body=675 status=ok
// SIG undefined FUN_1433a2aa4(void)

undefined8 FUN_1433a2aa4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  uVar7 = *(uint *)(param_1 + 0xd8);
  local_120 = param_1;
  local_108 = param_3;
  local_100 = param_4;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  local_110 = param_2;
  if (4 < uVar7) {
    FUN_14473dbc4(local_78);
    uVar7 = *(uint *)(local_120 + 0xd8);
  }
  if (uVar7 != 0) {
    lVar11 = *(longlong *)(local_120 + 0xd0);
    local_f8 = (longlong)(int)uVar7 * 0x20 + lVar11;
    do {
      local_88 = (undefined1 *)0x0;
      local_80 = 0x400000000;
      iVar1 = *(int *)(lVar11 + 0x18);
      local_118 = lVar11;
      if ((longlong)iVar1 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x10);
        lVar12 = 0;
        do {
          uVar6 = local_80;
          iVar2 = *(int *)(lVar11 + lVar12);
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_78;
          }
          lVar10 = (longlong)(int)local_80;
          uVar7 = (int)local_80 + 1;
          local_80 = CONCAT44(local_80._4_4_,uVar7);
          if (local_80._4_4_ < uVar7) {
            FUN_14476a5c8(local_a8,uVar6 & 0xffffffff);
          }
          puVar9 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar9 = local_a8;
          }
          lVar3 = *(longlong *)(puVar8 + (longlong)iVar2 * 8);
          *(longlong *)(puVar9 + lVar10 * 8) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          lVar12 = lVar12 + 4;
        } while ((longlong)iVar1 * 4 != lVar12);
      }
      lVar11 = local_118;
      plVar4 = *(longlong **)(local_118 + 8);
      if (plVar4 != (longlong *)0x0) {
        local_128 = local_a8;
        (**(code **)(*plVar4 + 0x2a8))(plVar4,&local_f0,local_108,local_100);
        uVar6 = local_50;
        lVar12 = (longlong)(int)local_50;
        uVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar7);
        if (local_50._4_4_ < uVar7) {
          FUN_14476a5c8(local_78,uVar6 & 0xffffffff);
        }
        puVar8 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar8 = local_78;
        }
        *(undefined8 *)(puVar8 + lVar12 * 8) = local_f0;
      }
      puVar8 = local_88;
      if (local_88 == (undefined1 *)0x0) {
        puVar8 = local_a8;
      }
      FUN_144717c65(puVar8,local_80 & 0xffffffff);
      if (local_88 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != local_f8);
  }
  uVar5 = local_110;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14a5b5ab0;
  local_c0 = local_120;
  local_e8 = &DAT_1433a39b6;
  local_128 = (undefined1 *)CONCAT44(local_128._4_4_,0x6ff);
  FUN_14014aede(local_110);
  puVar8 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar8 = local_78;
  }
  FUN_144717c65(puVar8,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1433a2d4a FUN_1433a2d4a body=117 status=ok
// SIG undefined FUN_1433a2d4a(void)

void FUN_1433a2d4a(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      cVar4 = FUN_1478561cc(param_3 + 0x2c0,plVar3 + 0xb);
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x2e8))(plVar3,param_2,param_3);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1433a2dc0 FUN_1433a2dc0 body=834 status=ok
// SIG undefined FUN_1433a2dc0(void)

void FUN_1433a2dc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined4 *local_c8;
  undefined1 local_bc [4];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = (longlong *)(param_1 + 0xd0);
  iVar5 = *(int *)(param_1 + 0xdc);
  FUN_145abed62(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  local_e8 = param_1;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    FUN_1478539f2(local_f0);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  uVar13 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar13 != 0) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar13);
    }
    FUN_141724914(&local_b8,uVar13);
    iVar5 = 1;
    if (3 < uVar13) {
      uVar13 = (uVar13 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar5)) {
      local_70 = iVar5;
      FUN_14487ddf8();
    }
    if ((longlong)(int)param_2[1] != 0) {
      puVar8 = (undefined8 *)*param_2;
      local_e0 = puVar8 + (longlong)(int)param_2[1] * 6;
      do {
        lVar14 = local_e8;
        local_d4 = *(undefined4 *)(local_e8 + 0xd8);
        local_c8 = &local_d4;
        local_d0 = puVar8;
        FUN_1410952c6(&local_b8,local_bc,&local_d0,0);
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        iVar5 = *(int *)(lVar14 + 0xd8);
        *(uint *)(lVar14 + 0xd8) = iVar5 + 1U;
        if (*(uint *)(lVar14 + 0xdc) < iVar5 + 1U) {
          FUN_147853a22(local_f0,iVar5);
        }
        lVar14 = *local_f0;
        lVar12 = (longlong)iVar5 * 0x20;
        *(undefined8 *)(lVar14 + lVar12) = uVar3;
        *(undefined8 *)(lVar14 + 8 + lVar12) = uVar4;
        puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar12);
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar5 = *(int *)(puVar8 + 4);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (iVar5 != 0) {
          plVar11 = (longlong *)(lVar14 + lVar12 + 0x10);
          FUN_14481578e(plVar11);
          if ((longlong)*(int *)(puVar8 + 4) != 0) {
            lVar14 = lVar14 + lVar12;
            plVar10 = (longlong *)puVar8[3];
            plVar1 = plVar10 + *(int *)(puVar8 + 4);
            do {
              if ((int)uStack_b0 != local_84) {
                lVar12 = *plVar10;
                uVar13 = (uint)((ulonglong)lVar12 >> 0x10);
                uVar7 = (uint)lVar12 & 0xffff;
                puVar6 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar6 = local_80;
                }
                iVar5 = *(int *)(puVar6 + (ulonglong)
                                          (local_70 - 1U &
                                          (int)((ulonglong)lVar12 >> 0x20) +
                                          ((uint)lVar12 << 0x10 | uVar7) +
                                          (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar7 >> 4)) * 4);
                while (iVar5 != -1) {
                  plVar9 = (longlong *)(local_b8 + (longlong)iVar5 * 0x14);
                  if (*plVar9 == lVar12) goto LAB_1433a302f;
                  iVar5 = *(int *)((longlong)plVar9 + 0xc);
                }
              }
              plVar9 = (longlong *)0x0;
LAB_1433a302f:
              iVar5 = *(int *)(lVar14 + 0x18);
              *(uint *)(lVar14 + 0x18) = iVar5 + 1U;
              if (*(uint *)(lVar14 + 0x1c) < iVar5 + 1U) {
                FUN_1446f48e2(plVar11,iVar5);
              }
              *(int *)(*plVar11 + (longlong)iVar5 * 4) = (int)plVar9[1];
              plVar10 = plVar10 + 1;
            } while (plVar10 != plVar1);
          }
        }
        puVar8 = puVar8 + 6;
      } while (puVar8 != local_e0);
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433a3234 FUN_1433a3234 body=304 status=ok
// SIG undefined FUN_1433a3234(void)

void FUN_1433a3234(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1433a3295;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_1433a3295:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 1433a3364 FUN_1433a3364 body=346 status=ok
// SIG undefined FUN_1433a3364(void)

void FUN_1433a3364(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1433a33f6;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1433a33f6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1433a34be FUN_1433a34be body=55 status=ok
// SIG undefined FUN_1433a34be(void)

void FUN_1433a34be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd4d8 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd4d8 = FUN_140002ddd(FUN_14636aa74,uVar1,L"MassFragment");
  }
  return;
}



// FUNCTION 1433a34f6 FUN_1433a34f6 body=55 status=ok
// SIG undefined FUN_1433a34f6(void)

void FUN_1433a34f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd4f0 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd4f0 = FUN_140002ddd(FUN_14636aad4,uVar1,L"MassTag");
  }
  return;
}



// FUNCTION 1433a352e FUN_1433a352e body=55 status=ok
// SIG undefined FUN_1433a352e(void)

void FUN_1433a352e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd508 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd508 = FUN_140002ddd(FUN_14636ab34,uVar1,L"MassChunkFragment");
  }
  return;
}



// FUNCTION 1433a3566 FUN_1433a3566 body=55 status=ok
// SIG undefined FUN_1433a3566(void)

void FUN_1433a3566(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd520 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd520 = FUN_140002ddd(FUN_14636ab94,uVar1,L"MassSharedFragment");
  }
  return;
}



// FUNCTION 1433a359e FUN_1433a359e body=55 status=ok
// SIG undefined FUN_1433a359e(void)

void FUN_1433a359e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd538 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd538 = FUN_140002ddd(FUN_14636abf4,uVar1,L"MassConstSharedFragment");
  }
  return;
}



// FUNCTION 1433a35dc FUN_1433a35dc body=282 status=ok
// SIG undefined FUN_1433a35dc(void)

undefined8 * FUN_1433a35dc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1433a312c);
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



// FUNCTION 1433a36f6 FUN_1433a36f6 body=421 status=ok
// SIG undefined FUN_1433a36f6(void)

void FUN_1433a36f6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar3 = *param_1;
  LOCK();
  *(int *)(lVar3 + 0xa0) = *(int *)(lVar3 + 0xa0) + 1;
  UNLOCK();
  if ((char)param_1[0x88] == '\x01') {
    lVar5 = param_1[0x65];
    plVar4 = (longlong *)param_1[0x66];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar8 = FUN_14001cc68(0x58,0x10);
    FUN_14636a6d0(lVar8);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a5b5a70;
    plVar9[2] = lVar8;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)param_1[0x66];
    param_1[0x65] = lVar8;
    param_1[0x66] = (longlong)plVar9;
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
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar9 = (longlong *)param_1[0x87];
    cVar7 = FUN_1478561cc(param_1 + 0x5a,plVar9 + 0xb);
    if (cVar7 != '\0') {
      (**(code **)(*plVar9 + 0x2e8))(plVar9,lVar3,param_1 + 2);
    }
    FUN_14339f7c6(lVar5,param_1[0x65]);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  else {
    plVar4 = (longlong *)param_1[0x87];
    cVar7 = FUN_1478561cc(param_1 + 0x5a,plVar4 + 0xb);
    if (cVar7 != '\0') {
      (**(code **)(*plVar4 + 0x2e8))(plVar4,lVar3,param_1 + 2);
    }
  }
  LOCK();
  *(int *)(lVar3 + 0xa0) = *(int *)(lVar3 + 0xa0) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1433a389c FUN_1433a389c body=282 status=ok
// SIG undefined FUN_1433a389c(void)

undefined8 * FUN_1433a389c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1433a312c);
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



// FUNCTION 1433a39ce FUN_1433a39ce body=29 status=ok
// SIG undefined FUN_1433a39ce(void)

undefined8 FUN_1433a39ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433a39eb FUN_1433a39eb body=1457 status=ok
// SIG undefined FUN_1433a39eb(void)

void FUN_1433a39eb(void)

{
  undefined ***pppuVar1;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14098d3d2(FUN_14339f38c,L"/Script/MassEntity",L"EMassCommandOperationType",&DAT_14cabd3c0);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5afab0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b0250,2,0);
  local_88 = (undefined *)0x800000014a5b02e0;
  local_8c = 10;
  local_80 = FUN_14577453c();
  local_7c = 1;
  FUN_14636a860(&local_88);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b0360);
  local_a8 = CONCAT44(local_a8._4_4_,1);
  FUN_14153156c(&DAT_14cabd460,L"mass.AllowQueryParallelFor",&DAT_14c761214,
                L"Controls whether EntityQueries are allowed to utilize ParallelFor construct");
  atexit(FUN_14339f9c3);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b0930,1,0);
  uStack_98 = 0;
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b0cd0,1,0);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cabd4a0,L"Mass.ConcurrentReserve.Enable",&DAT_14c761215,
                L"Enable Mass\'s concurrent reserve feature in runtime");
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabd4b0,L"Mass.ConcurrentReserve.MaxEntityCount",&DAT_14c761218,
                L"Set maximum number of permissible entities.  Must be power of 2.");
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabd4c0,L"Mass.ConcurrentReserve.EntitiesPerPage",&DAT_14c76121c,
                L"Set number of entities per page. Must be power of 2. Larger reduces fixed memory overhead of FEntityData page lookup but requires bigger contiguous memory blocks per page"
               );
  atexit(FUN_14339fd13);
  uStack_98 = 1;
  ppuStack_a0 = &PTR_FUN_14a5b13a0;
  local_a8 = 6;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b13c0);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = FUN_1433a34be;
  local_88 = &DAT_1478528f0;
  FUN_14688f8e6(&DAT_14cabda20,&local_88);
  if (local_88 != (undefined *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  atexit((_func_5014 *)&LAB_14339fda0);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = FUN_1433a34f6;
  local_88 = &DAT_1478528f0;
  FUN_14688f8e6(&DAT_14cabd580,&local_88);
  if (local_88 != (undefined *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  atexit((_func_5014 *)&LAB_14339fdac);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = FUN_1433a352e;
  local_88 = &DAT_1478528f0;
  FUN_14688f8e6(&DAT_14cabdf80,&local_88);
  if (local_88 != (undefined *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  atexit((_func_5014 *)&LAB_14339fdb8);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = FUN_1433a3566;
  local_88 = &DAT_1478528f0;
  FUN_14688f8e6(&DAT_14cabe230,&local_88);
  if (local_88 != (undefined *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  atexit((_func_5014 *)&LAB_14339fdc4);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = FUN_1433a359e;
  local_88 = &DAT_1478528f0;
  FUN_14688f8e6(&DAT_14cabdcd0,&local_88);
  if (local_88 != (undefined *)0x0) {
    pppuVar1 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar1 = &local_68;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  atexit((_func_5014 *)&LAB_14339fdd0);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a5b5a50;
  local_60 = (code *)&LAB_1433a35d6;
  local_88 = &DAT_1478528f4;
  FUN_14688f8e6(&DAT_14cabe4e0,&local_88);
  if (local_88 != (undefined *)0x0) {
    pppuVar1 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar1 = local_78;
    }
    (*(code *)(*pppuVar1)[2])(pppuVar1);
  }
  atexit((_func_5014 *)&LAB_14339fddc);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b1520);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 2;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b17e0);
  local_a8 = 0;
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b1c80,1,0);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 2;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b2360,1,&PTR_FUN_14a5b2310);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b2550);
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cabd8f0,L"mass.FullyParallel",&DAT_14c761220,
                L"Enables mass processing distribution to all available thread (via the task graph)"
               );
  local_a8 = local_a8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cabd900,L"mass.MakePrePhysicsTickFunctionHighPriority",&DAT_14c761221,
                L"Whether to make the PrePhysics tick function high priority - can minimise GameThread waits by starting parallel work as soon as possible"
               );
  atexit(FUN_14339ff6a);
  uStack_98 = 2;
  ppuStack_a0 = &PTR_FUN_14a5b2c50;
  local_a8 = 3;
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b2c90);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  local_a8 = 1;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b3910,2,&PTR_FUN_14a5b38e0);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433a3fa0 FUN_1433a3fa0 body=55 status=ok
// SIG undefined FUN_1433a3fa0(void)

void FUN_1433a3fa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe798 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabe798 = FUN_14171c317(FUN_14636b7ed,uVar1,L"EMassFragmentAccess");
  }
  return;
}



// FUNCTION 1433a3fd7 FUN_1433a3fd7 body=55 status=ok
// SIG undefined FUN_1433a3fd7(void)

void FUN_1433a3fd7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe7b0 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabe7b0 = FUN_14171c317(FUN_14636b81c,uVar1,L"EMassFragmentPresence");
  }
  return;
}



// FUNCTION 1433a400e FUN_1433a400e body=845 status=ok
// SIG undefined FUN_1433a400e(void)

undefined8 FUN_1433a400e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 == 0) {
LAB_1433a4057:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1406d1670();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_1433a4057;
    lVar3 = *param_2;
  }
  lVar1 = FUN_1409f38dc();
  if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_1433a40ab:
      lVar3 = 0;
    }
    else {
      lVar1 = FUN_1406d1670();
      if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) goto LAB_1433a40ab;
      lVar3 = *param_2;
    }
    lVar2 = FUN_1411791a8();
    lVar1 = DAT_14cb0d2b0;
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = *param_2;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      local_30 = lVar3;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      uVar4 = FUN_14785689c(lVar1 + 0x1160,&local_30);
      goto LAB_1433a4268;
    }
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_1433a40ff:
      lVar3 = 0;
    }
    else {
      lVar1 = FUN_1406d1670();
      if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) goto LAB_1433a40ff;
      lVar3 = *param_2;
    }
    lVar1 = FUN_14107a202();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x1f0), lVar3 != 0)) {
        lVar1 = *param_2;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        local_38 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        uVar4 = FUN_1478568e8(lVar3 + 0x100,&local_38);
        goto LAB_1433a4268;
      }
      goto LAB_1433a4266;
    }
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_1433a4153:
      lVar3 = 0;
    }
    else {
      lVar1 = FUN_1406d1670();
      if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) goto LAB_1433a4153;
      lVar3 = *param_2;
    }
    lVar1 = FUN_14115fc2e();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      uVar4 = 0;
      if ((param_1 == 0) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) goto LAB_1433a4268;
      lVar3 = FUN_145866520(param_1);
      if (lVar3 != 0) {
        lVar1 = *param_2;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        uVar4 = FUN_1457f6d4c(lVar3 + 0x138,&local_40);
        goto LAB_1433a4268;
      }
    }
  }
  else if (param_1 != 0) {
    lVar3 = *param_2;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_28 = lVar3;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    uVar4 = FUN_145dbdaf8(param_1 + 0x870,&local_28);
    goto LAB_1433a4268;
  }
LAB_1433a4266:
  uVar4 = 0;
LAB_1433a4268:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433a435c FUN_1433a435c body=69 status=ok
// SIG undefined FUN_1433a435c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433a435c(void)

{
  _DAT_14cabe820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433a439e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabe828,1);
  return;
}



// FUNCTION 1433a43be FUN_1433a43be body=158 status=ok
// SIG undefined FUN_1433a43be(void)

void FUN_1433a43be(void)

{
  ulonglong uVar1;
  
  FUN_14282b410(L"/Script/MassEntity",0,0,&PTR_FUN_14a5b5ef0,2,&PTR_FUN_14a5b5eb0,2);
  uVar1 = 0;
  FUN_14282b410(L"/Script/MassEntity",&PTR_FUN_14a5b66b0,2,0,0,0,0);
  FUN_14153156c(&DAT_14cabe820,L"mass.RuntimeSubsystemsEnabled",&DAT_14c761224,
                L"true by default, setting to false will prevent auto-creation of game-time Mass-related subsystems. Needs to be set before world loading."
                ,uVar1 & 0xffffffff00000000);
  atexit(FUN_1433a435c);
  return;
}



// FUNCTION 1433a445c FUN_1433a445c body=55 status=ok
// SIG undefined FUN_1433a445c(void)

void FUN_1433a445c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe9b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe9b8 = FUN_14171c317(FUN_14636c1e0,uVar1,L"AnimationKeyFormat");
  }
  return;
}



// FUNCTION 1433a4493 FUN_1433a4493 body=55 status=ok
// SIG undefined FUN_1433a4493(void)

void FUN_1433a4493(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabea60 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabea60 = FUN_14171c317(FUN_14636c4ee,uVar1,L"EAnimCurveType");
  }
  return;
}



// FUNCTION 1433a44ca FUN_1433a44ca body=55 status=ok
// SIG undefined FUN_1433a44ca(void)

void FUN_1433a44ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabea78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabea78 = FUN_14171c317(FUN_14636c51d,uVar1,L"EAnimAssetCurveFlags");
  }
  return;
}



// FUNCTION 1433a4501 FUN_1433a4501 body=55 status=ok
// SIG undefined FUN_1433a4501(void)

void FUN_1433a4501(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb20 = FUN_14171c317(FUN_14636c8d6,uVar1,L"ERawCurveTrackTypes");
  }
  return;
}



// FUNCTION 1433a4538 FUN_1433a4538 body=55 status=ok
// SIG undefined FUN_1433a4538(void)

void FUN_1433a4538(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb50 = FUN_14171c317(FUN_14636c99e,uVar1,L"EAnimDataModelNotifyType");
  }
  return;
}



// FUNCTION 1433a456f FUN_1433a456f body=55 status=ok
// SIG undefined FUN_1433a456f(void)

void FUN_1433a456f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeca8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeca8 = FUN_14171c317(FUN_14636d15b,uVar1,L"ERootMotionRootLock");
  }
  return;
}



// FUNCTION 1433a45a6 FUN_1433a45a6 body=55 status=ok
// SIG undefined FUN_1433a45a6(void)

void FUN_1433a45a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabecc0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabecc0 = FUN_14171c317(FUN_14636d18c,uVar1,L"ERootMotionMode");
  }
  return;
}



// FUNCTION 1433a45dd FUN_1433a45dd body=55 status=ok
// SIG undefined FUN_1433a45dd(void)

void FUN_1433a45dd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabecd8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabecd8 = FUN_14171c317(FUN_14636d1bb,uVar1,L"EAdditiveBasePoseType");
  }
  return;
}



// FUNCTION 1433a4614 FUN_1433a4614 body=55 status=ok
// SIG undefined FUN_1433a4614(void)

void FUN_1433a4614(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabecf0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabecf0 = FUN_14171c317(FUN_14636d1ea,uVar1,L"AnimationCompressionFormat");
  }
  return;
}



// FUNCTION 1433a464b FUN_1433a464b body=55 status=ok
// SIG undefined FUN_1433a464b(void)

void FUN_1433a464b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabed20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabed20 = FUN_14171c317(FUN_14636d2b4,uVar1,L"EAnimInstanceLocatorFragmentType");
  }
  return;
}



// FUNCTION 1433a4682 FUN_1433a4682 body=55 status=ok
// SIG undefined FUN_1433a4682(void)

void FUN_1433a4682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabed80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabed80 = FUN_14171c317(FUN_14636d430,uVar1,L"EAnimNotifyEndReason");
  }
  return;
}



// FUNCTION 1433a46b9 FUN_1433a46b9 body=55 status=ok
// SIG undefined FUN_1433a46b9(void)

void FUN_1433a46b9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabed98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabed98 = FUN_14171c317(FUN_14636d45f,uVar1,L"AnimPhysTwistAxis");
  }
  return;
}



// FUNCTION 1433a46f0 FUN_1433a46f0 body=55 status=ok
// SIG undefined FUN_1433a46f0(void)

void FUN_1433a46f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabedb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabedb0 = FUN_14171c317(FUN_14636d48e,uVar1,L"AnimPhysCollisionType");
  }
  return;
}



// FUNCTION 1433a4727 FUN_1433a4727 body=55 status=ok
// SIG undefined FUN_1433a4727(void)

void FUN_1433a4727(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabedc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabedc8 = FUN_14171c317(FUN_14636d4bd,uVar1,L"ETypeAdvanceAnim");
  }
  return;
}



// FUNCTION 1433a475e FUN_1433a475e body=55 status=ok
// SIG undefined FUN_1433a475e(void)

void FUN_1433a475e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabee58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabee58 = FUN_14171c317(FUN_14636d778,uVar1,L"EBoneAxis");
  }
  return;
}



// FUNCTION 1433a4795 FUN_1433a4795 body=55 status=ok
// SIG undefined FUN_1433a4795(void)

void FUN_1433a4795(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabee70 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabee70 = FUN_14171c317(FUN_1417ac92b,uVar1,L"EBoneControlSpace");
  }
  return;
}



// FUNCTION 1433a47cc FUN_1433a47cc body=55 status=ok
// SIG undefined FUN_1433a47cc(void)

void FUN_1433a47cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabee88 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabee88 = FUN_14171c317(FUN_14636d7a7,uVar1,L"EBoneRotationSource");
  }
  return;
}



// FUNCTION 1433a4803 FUN_1433a4803 body=55 status=ok
// SIG undefined FUN_1433a4803(void)

void FUN_1433a4803(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeea0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeea0 = FUN_14171c317(FUN_14636d7d6,uVar1,L"EMontageNotifyTickType");
  }
  return;
}



// FUNCTION 1433a483a FUN_1433a483a body=55 status=ok
// SIG undefined FUN_1433a483a(void)

void FUN_1433a483a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeeb8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeeb8 = FUN_14171c317(FUN_14636d805,uVar1,L"ENotifyFilterType");
  }
  return;
}



// FUNCTION 1433a4871 FUN_1433a4871 body=55 status=ok
// SIG undefined FUN_1433a4871(void)

void FUN_1433a4871(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef30 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef30 = FUN_14171c317(FUN_14636da62,uVar1,L"FAnimNotifyTrackLockState");
  }
  return;
}



// FUNCTION 1433a48a8 FUN_1433a48a8 body=55 status=ok
// SIG undefined FUN_1433a48a8(void)

void FUN_1433a48a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef60 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef60 = FUN_14171c317(FUN_14636d5c0,uVar1,L"EAdditiveAnimationType");
  }
  return;
}



// FUNCTION 1433a48df FUN_1433a48df body=55 status=ok
// SIG undefined FUN_1433a48df(void)

void FUN_1433a48df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef78 = FUN_14171c317(FUN_14636db28,uVar1,L"ECurveBlendOption");
  }
  return;
}



// FUNCTION 1433a4916 FUN_1433a4916 body=55 status=ok
// SIG undefined FUN_1433a4916(void)

void FUN_1433a4916(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabefa8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabefa8 = FUN_14171c317(FUN_14636dbee,uVar1,L"EAnimInterpolationType");
  }
  return;
}



// FUNCTION 1433a494d FUN_1433a494d body=55 status=ok
// SIG undefined FUN_1433a494d(void)

void FUN_1433a494d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabefc0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabefc0 = FUN_14171c317(FUN_14636dc1f,uVar1,L"EAxisOption");
  }
  return;
}



// FUNCTION 1433a4984 FUN_1433a4984 body=55 status=ok
// SIG undefined FUN_1433a4984(void)

void FUN_1433a4984(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabefd8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabefd8 = FUN_14171c317(FUN_14636dc4e,uVar1,L"EComponentType");
  }
  return;
}



// FUNCTION 1433a4ce2 FUN_1433a4ce2 body=1285 status=ok
// SIG undefined FUN_1433a4ce2(void)

void FUN_1433a4ce2(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b6fc0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b74c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5b7590);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b7900,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5b7bb0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b7f60,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5b8430);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b8790,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5b8e60);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b92b0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a5b94b0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5b94d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5b9ff0,2,&PTR_FUN_14a5b9fa0);
  ppuStack_60 = &PTR_FUN_14a5ba830;
  local_58 = 3;
  local_68 = 7;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5ba890);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a5bbb00;
  local_68 = 0xc;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5bbd00,1,&PTR_FUN_14a5bbb20);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14a5bbfe0 + lVar1),L"/Script/Engine",
                  *(undefined8 *)((longlong)&PTR_u_ERootMotionRootLock_14a5bbfe8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14a5bbff0 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x80);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  lVar1 = 0;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bc3d0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a5bc590;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bc5b0);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5bc900,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bca50);
  FUN_14098d3d2(FUN_1433a4682,L"/Script/Engine",L"EAnimNotifyEndReason",&DAT_14cabed78);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14a5bcc20 + lVar1),L"/Script/Engine",
                  *(undefined8 *)((longlong)&PTR_u_AnimPhysTwistAxis_14a5bcc28 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14a5bcc30 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14a5bd3d0;
  local_68 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5bd3f0,1,0);
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bd530);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bd5c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bd670);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5bd7d0);
  ppuStack_60 = &PTR_FUN_14a5bf510;
  local_58 = 0xb;
  local_68 = 8;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5bf7b0,1,&PTR_FUN_14a5bf670);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5bff60,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5c0050);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c0f10,1,&PTR_FUN_14a5c0e90);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c1320,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433a51e8 FUN_1433a51e8 body=55 status=ok
// SIG undefined FUN_1433a51e8(void)

void FUN_1433a51e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf110 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf110 = FUN_14171c317(FUN_14636ea28,uVar1,L"EAudioOutputTarget");
  }
  return;
}



// FUNCTION 1433a521f FUN_1433a521f body=55 status=ok
// SIG undefined FUN_1433a521f(void)

void FUN_1433a521f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf210 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf210 = FUN_14171c317(FUN_14636edf7,uVar1,L"EBlendableLocation");
  }
  return;
}



// FUNCTION 1433a5256 FUN_1433a5256 body=55 status=ok
// SIG undefined FUN_1433a5256(void)

void FUN_1433a5256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf268 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf268 = FUN_14171c317(FUN_14636eebe,uVar1,L"EBlendSpaceAxis");
  }
  return;
}



// FUNCTION 1433a528d FUN_1433a528d body=55 status=ok
// SIG undefined FUN_1433a528d(void)

void FUN_1433a528d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf280 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf280 = FUN_14171c317(FUN_14636eeed,uVar1,L"EPreferredTriangulationDirection");
  }
  return;
}



// FUNCTION 1433a52c4 FUN_1433a52c4 body=55 status=ok
// SIG undefined FUN_1433a52c4(void)

void FUN_1433a52c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf298 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf298 = FUN_14171c317(FUN_14636ef1c,uVar1,L"EBlendSpacePerBoneBlendMode");
  }
  return;
}



// FUNCTION 1433a52fb FUN_1433a52fb body=55 status=ok
// SIG undefined FUN_1433a52fb(void)

void FUN_1433a52fb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf3d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf3d0 = FUN_14171c317(FUN_14636f656,uVar1,L"ENotifyTriggerMode");
  }
  return;
}



// FUNCTION 1433a5332 FUN_1433a5332 body=55 status=ok
// SIG undefined FUN_1433a5332(void)

void FUN_1433a5332(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf418 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf418 = FUN_14171c317(FUN_14636f750,uVar1,L"EBlueprintStatus");
  }
  return;
}



// FUNCTION 1433a5369 FUN_1433a5369 body=55 status=ok
// SIG undefined FUN_1433a5369(void)

void FUN_1433a5369(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf430 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf430 = FUN_14171c317(FUN_14636f77f,uVar1,L"EBlueprintType");
  }
  return;
}



// FUNCTION 1433a53a0 FUN_1433a53a0 body=55 status=ok
// SIG undefined FUN_1433a53a0(void)

void FUN_1433a53a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf460 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf460 = FUN_14171c317(FUN_14636f800,uVar1,L"EBlueprintCompileMode");
  }
  return;
}



// FUNCTION 1433a53d7 FUN_1433a53d7 body=55 status=ok
// SIG undefined FUN_1433a53d7(void)

void FUN_1433a53d7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf508 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf508 = FUN_14171c317(FUN_14636fbb6,uVar1,L"EBlueprintNativizationFlag");
  }
  return;
}



// FUNCTION 1433a540e FUN_1433a540e body=55 status=ok
// SIG undefined FUN_1433a540e(void)

void FUN_1433a540e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf520 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf520 = FUN_14171c317(FUN_14636fbe5,uVar1,L"EShouldCookBlueprintPropertyGuids");
  }
  return;
}



// FUNCTION 1433a5445 FUN_1433a5445 body=55 status=ok
// SIG undefined FUN_1433a5445(void)

void FUN_1433a5445(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf628 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf628 = FUN_14171c317(FUN_14636ff78,uVar1,L"ECsgOper");
  }
  return;
}



// FUNCTION 1433a547c FUN_1433a547c body=55 status=ok
// SIG undefined FUN_1433a547c(void)

void FUN_1433a547c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf640 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf640 = FUN_14171c317(FUN_14636ffa7,uVar1,L"EBrushType");
  }
  return;
}



// FUNCTION 1433a54b3 FUN_1433a54b3 body=55 status=ok
// SIG undefined FUN_1433a54b3(void)

void FUN_1433a54b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf7a8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf7a8 = FUN_14171c317(FUN_146370630,uVar1,L"ECameraProjectionMode");
  }
  return;
}



// FUNCTION 1433a54ea FUN_1433a54ea body=55 status=ok
// SIG undefined FUN_1433a54ea(void)

void FUN_1433a54ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf7c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf7c0 = FUN_14171c317(FUN_146370661,uVar1,L"ECameraShakePlaySpace");
  }
  return;
}



// FUNCTION 1433a55b4 FUN_1433a55b4 body=100 status=ok
// SIG undefined FUN_1433a55b4(void)

void FUN_1433a55b4(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  memset(param_2 + 1,0,0xb0);
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  do {
    puVar2 = (undefined8 *)((longlong)param_2 + lVar3 + 0x40);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1 = (undefined4 *)((longlong)param_2 + lVar3 + 0x50);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + lVar3 + 0x60) = 0xffffffff;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x78);
  return;
}



// FUNCTION 1433a5854 FUN_1433a5854 body=1155 status=ok
// SIG undefined FUN_1433a5854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433a5854(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c7270,1,0);
  FUN_14098d3d2(FUN_1433a51e8,L"/Script/Engine",L"EAudioOutputTarget",&DAT_14cabf108);
  FUN_1446f470e(&DAT_14cabf120,L"GetEditorName",1);
  FUN_1446f470e(&DAT_14cabf130,L"GetIconBrushName",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c7800,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c7ef0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c85f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c8980,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c90d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c9470,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5c9910,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ca530,1,0);
  ppuStack_60 = &PTR_FUN_14a5ca990;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ca9b0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cabf238);
  if (cVar1 == '\0') {
    _DAT_14cabf238 = 0;
    uRam000000014cabf240 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = &PTR_FUN_14a5cca50;
  local_58 = 4;
  local_68 = 0xd;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ccce0,2,&PTR_FUN_14a5ccad0);
  ppuStack_60 = &PTR_FUN_14a5ce2c0;
  local_58 = 5;
  local_68 = 6;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ce450,2,&PTR_FUN_14a5ce360);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ce6a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ce9f0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5cebe0,1,&PTR_FUN_14a5cebb0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5cf000,1,&PTR_FUN_14a5cefd0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5cf1e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5cf2a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5cf490,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14a5d0210;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d0280,1,&PTR_FUN_14a5d0250);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 0xb;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d1000,1,&PTR_FUN_14a5d0e40);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14a5d1c10;
  local_68 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5d1c50);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5d2020);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433a5cd8 FUN_1433a5cd8 body=55 status=ok
// SIG undefined FUN_1433a5cd8(void)

void FUN_1433a5cd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf908 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf908 = FUN_14171c317(FUN_14637148a,uVar1,L"ECloudStorageDelegate");
  }
  return;
}



// FUNCTION 1433a5d0f FUN_1433a5d0f body=55 status=ok
// SIG undefined FUN_1433a5d0f(void)

void FUN_1433a5d0f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf938 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf938 = FUN_14171c317(FUN_1463714e8,uVar1,L"EContentBundleClientState");
  }
  return;
}



// FUNCTION 1433a5d46 FUN_1433a5d46 body=55 status=ok
// SIG undefined FUN_1433a5d46(void)

void FUN_1433a5d46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf950 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf950 = FUN_14171c317(FUN_146371517,uVar1,L"EWorldContentState");
  }
  return;
}



// FUNCTION 1433a5d7d FUN_1433a5d7d body=55 status=ok
// SIG undefined FUN_1433a5d7d(void)

void FUN_1433a5d7d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf968 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf968 = FUN_14171c317(FUN_146371546,uVar1,L"EContentBundleStatus");
  }
  return;
}



// FUNCTION 1433a5db4 FUN_1433a5db4 body=55 status=ok
// SIG undefined FUN_1433a5db4(void)

void FUN_1433a5db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf9c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf9c8 = FUN_14171c317(FUN_146371694,uVar1,L"ECustomAttributeBlendType");
  }
  return;
}



// FUNCTION 1433a5deb FUN_1433a5deb body=55 status=ok
// SIG undefined FUN_1433a5deb(void)

void FUN_1433a5deb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfb10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfb10 = FUN_14171c317(FUN_146371de9,uVar1,L"EDataLayerType");
  }
  return;
}



// FUNCTION 1433a5e22 FUN_1433a5e22 body=55 status=ok
// SIG undefined FUN_1433a5e22(void)

void FUN_1433a5e22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfc00 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfc00 = FUN_14171c317(FUN_146372120,uVar1,L"DistributionParamMode");
  }
  return;
}



// FUNCTION 1433a5e59 FUN_1433a5e59 body=55 status=ok
// SIG undefined FUN_1433a5e59(void)

void FUN_1433a5e59(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfd08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfd08 = FUN_14171c317(FUN_146372400,uVar1,L"EDistributionVectorLockFlags");
  }
  return;
}



// FUNCTION 1433a5e90 FUN_1433a5e90 body=55 status=ok
// SIG undefined FUN_1433a5e90(void)

void FUN_1433a5e90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfd20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfd20 = FUN_14171c317(FUN_146372431,uVar1,L"EDistributionVectorMirrorFlags");
  }
  return;
}



// FUNCTION 1433a5ec7 FUN_1433a5ec7 body=55 status=ok
// SIG undefined FUN_1433a5ec7(void)

void FUN_1433a5ec7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfe20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfe20 = FUN_14171c317(FUN_14637273e,uVar1,L"EEdGraphPinDirection");
  }
  return;
}



// FUNCTION 1433a5efe FUN_1433a5efe body=55 status=ok
// SIG undefined FUN_1433a5efe(void)

void FUN_1433a5efe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfe38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfe38 = FUN_14171c317(FUN_14637276d,uVar1,L"EPinContainerType");
  }
  return;
}



// FUNCTION 1433a5f35 FUN_1433a5f35 body=55 status=ok
// SIG undefined FUN_1433a5f35(void)

void FUN_1433a5f35(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfe50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfe50 = FUN_14171c317(FUN_14637279c,uVar1,L"ENodeTitleType");
  }
  return;
}



// FUNCTION 1433a5f6c FUN_1433a5f6c body=55 status=ok
// SIG undefined FUN_1433a5f6c(void)

void FUN_1433a5f6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfe68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfe68 = FUN_14171c317(FUN_1463727cb,uVar1,L"ENodeAdvancedPins");
  }
  return;
}



// FUNCTION 1433a5fa3 FUN_1433a5fa3 body=55 status=ok
// SIG undefined FUN_1433a5fa3(void)

void FUN_1433a5fa3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfe80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfe80 = FUN_14171c317(FUN_1463727fa,uVar1,L"ENodeEnabledState");
  }
  return;
}



// FUNCTION 1433a5fda FUN_1433a5fda body=55 status=ok
// SIG undefined FUN_1433a5fda(void)

void FUN_1433a5fda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabfef8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabfef8 = FUN_14171c317(FUN_1463729c0,uVar1,L"EBlueprintPinStyleType");
  }
  return;
}



// FUNCTION 1433a60fe FUN_1433a60fe body=108 status=ok
// SIG undefined FUN_1433a60fe(void)

void FUN_1433a60fe(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  param_2[2] = 0x300000000;
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 1;
  *(undefined1 *)((longlong)param_2 + 0x19) = 3;
  *(undefined4 *)(param_2 + 4) = 6;
  param_2[5] = param_2;
  *param_2 = &PTR_FUN_14aa0f410;
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
  *(undefined1 *)(param_2 + 0x10) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 1433a6258 FUN_1433a6258 body=1565 status=ok
// SIG undefined FUN_1433a6258(void)

void FUN_1433a6258(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d7cc0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d8140,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d8a00,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5d8c10,3,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d9390,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d98c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5d9e90,1,0,0,&PTR_FUN_14a5d9e70,1);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14a5d9fd0 + lVar1),L"/Script/Engine",
                  *(undefined8 *)
                   ((longlong)&PTR_u_EContentBundleClientState_14a5e6420_2_14a5d9fd8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14a5d9fe0 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  FUN_14098d3d2(FUN_1433a5d7d,L"/Script/Engine",L"EContentBundleStatus",&DAT_14cabf960);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5da400,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5da800,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5daa30,1,0,0);
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5db250,8,&PTR_FUN_14a5db230,1);
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5db510,1,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dc500,1,0,0,0,0);
  FUN_14098d3d2(FUN_1433a5deb,L"/Script/Engine",L"EDataLayerType",&DAT_14cabfb08);
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5dc6e0,1,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dca50,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a5dcf10,1,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dd270,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dd750,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ddaf0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dded0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5de370,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5de420,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dec50,1,0,0,&PTR_FUN_14a5dec30,1);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5df2f0,1,&PTR_FUN_14a5df2c0,1,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5df750,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5dfbd0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e01e0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e0620,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e0ac0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e0f40,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e18f0,1,&PTR_FUN_14a5e18c0,1,&PTR_FUN_14a5e1880,2);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e1e20,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e2340,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e2940,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e2d90,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e33a0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e39d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e4df0,2,&PTR_FUN_14a5e4dc0,1,&PTR_FUN_14a5e4d20,5);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e5ee0,1,&PTR_FUN_14a5e5e60,3,&PTR_FUN_14a5e5e40,1);
  return;
}



// FUNCTION 1433a6878 FUN_1433a6878 body=55 status=ok
// SIG undefined FUN_1433a6878(void)

void FUN_1433a6878(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabff40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabff40 = FUN_14171c317(FUN_1463731c5,uVar1,L"EGraphType");
  }
  return;
}



// FUNCTION 1433a68af FUN_1433a68af body=55 status=ok
// SIG undefined FUN_1433a68af(void)

void FUN_1433a68af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabff58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabff58 = FUN_14171c317(FUN_1463731f4,uVar1,L"ECanCreateConnectionResponse");
  }
  return;
}



// FUNCTION 1433a68e6 FUN_1433a68e6 body=55 status=ok
// SIG undefined FUN_1433a68e6(void)

void FUN_1433a68e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabffd0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabffd0 = FUN_14171c317(FUN_1463733b0,uVar1,L"EFullyLoadPackageType");
  }
  return;
}



// FUNCTION 1433a691d FUN_1433a691d body=55 status=ok
// SIG undefined FUN_1433a691d(void)

void FUN_1433a691d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabffe8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabffe8 = FUN_14171c317(FUN_1463733df,uVar1,L"ETransitionType");
  }
  return;
}



// FUNCTION 1433a6954 FUN_1433a6954 body=55 status=ok
// SIG undefined FUN_1433a6954(void)

void FUN_1433a6954(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0180 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0180 = FUN_14171c317(FUN_146373c75,uVar1,L"EInputEvent");
  }
  return;
}



// FUNCTION 1433a698b FUN_1433a698b body=55 status=ok
// SIG undefined FUN_1433a698b(void)

void FUN_1433a698b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0198 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0198 = FUN_14171c317(FUN_146373ca6,uVar1,L"EMouseCaptureMode");
  }
  return;
}



// FUNCTION 1433a69c2 FUN_1433a69c2 body=55 status=ok
// SIG undefined FUN_1433a69c2(void)

void FUN_1433a69c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac01b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac01b0 = FUN_14171c317(FUN_146373cd7,uVar1,L"EMouseLockMode");
  }
  return;
}



// FUNCTION 1433a69f9 FUN_1433a69f9 body=55 status=ok
// SIG undefined FUN_1433a69f9(void)

void FUN_1433a69f9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac01c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac01c8 = FUN_14171c317(FUN_146373d08,uVar1,L"ETickingGroup");
  }
  return;
}



// FUNCTION 1433a6a30 FUN_1433a6a30 body=55 status=ok
// SIG undefined FUN_1433a6a30(void)

void FUN_1433a6a30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0240 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0240 = FUN_14171c317(FUN_146373f53,uVar1,L"ENetworkLagState");
  }
  return;
}



// FUNCTION 1433a6a67 FUN_1433a6a67 body=55 status=ok
// SIG undefined FUN_1433a6a67(void)

void FUN_1433a6a67(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0258 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0258 = FUN_14171c317(FUN_146373f82,uVar1,L"ETravelFailure");
  }
  return;
}



// FUNCTION 1433a6a9e FUN_1433a6a9e body=55 status=ok
// SIG undefined FUN_1433a6a9e(void)

void FUN_1433a6a9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0270 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0270 = FUN_14171c317(FUN_146373fb1,uVar1,L"ETravelType");
  }
  return;
}



// FUNCTION 1433a6ad5 FUN_1433a6ad5 body=55 status=ok
// SIG undefined FUN_1433a6ad5(void)

void FUN_1433a6ad5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0288 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0288 = FUN_14171c317(FUN_146373fe0,uVar1,L"EDemoPlayFailure");
  }
  return;
}



// FUNCTION 1433a6b0c FUN_1433a6b0c body=55 status=ok
// SIG undefined FUN_1433a6b0c(void)

void FUN_1433a6b0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac02b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac02b8 = FUN_14171c317(FUN_146374073,uVar1,L"EViewModeIndex");
  }
  return;
}



// FUNCTION 1433a6cbe FUN_1433a6cbe body=229 status=ok
// SIG undefined FUN_1433a6cbe(void)

void FUN_1433a6cbe(void)

{
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5e9c20,1,&PTR_FUN_14a5e9bd0,2,&PTR_FUN_14a5e9b90,2);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5ea6e0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5f3880,1,&PTR_FUN_14a5f3650,0xe,&PTR_FUN_14a5f3610,2);
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a5f56c0,2,&PTR_FUN_14a5f55d0,6,&PTR_FUN_14a5f54b0,9);
  return;
}



// FUNCTION 1433a6da4 FUN_1433a6da4 body=55 status=ok
// SIG undefined FUN_1433a6da4(void)

void FUN_1433a6da4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0338 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0338 = FUN_14171c317(FUN_14637460d,uVar1,L"EAspectRatioAxisConstraint");
  }
  return;
}



// FUNCTION 1433a6ddb FUN_1433a6ddb body=55 status=ok
// SIG undefined FUN_1433a6ddb(void)

void FUN_1433a6ddb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0350 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0350 = FUN_14171c317(FUN_1417acd64,uVar1,L"EAttachmentRule");
  }
  return;
}



// FUNCTION 1433a6e12 FUN_1433a6e12 body=55 status=ok
// SIG undefined FUN_1433a6e12(void)

void FUN_1433a6e12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0368 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0368 = FUN_14171c317(FUN_14637463e,uVar1,L"EDetachmentRule");
  }
  return;
}



// FUNCTION 1433a6e49 FUN_1433a6e49 body=55 status=ok
// SIG undefined FUN_1433a6e49(void)

void FUN_1433a6e49(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0380 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0380 = FUN_14171c317(FUN_1417acd95,uVar1,L"EAttachLocation");
  }
  return;
}



// FUNCTION 1433a6e80 FUN_1433a6e80 body=55 status=ok
// SIG undefined FUN_1433a6e80(void)

void FUN_1433a6e80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0398 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0398 = FUN_14171c317(FUN_14637466f,uVar1,L"ESceneDepthPriorityGroup");
  }
  return;
}



// FUNCTION 1433a6eb7 FUN_1433a6eb7 body=55 status=ok
// SIG undefined FUN_1433a6eb7(void)

void FUN_1433a6eb7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac03b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac03b0 = FUN_14171c317(FUN_14637469e,uVar1,L"EIndirectLightingCacheQuality");
  }
  return;
}



// FUNCTION 1433a6eee FUN_1433a6eee body=55 status=ok
// SIG undefined FUN_1433a6eee(void)

void FUN_1433a6eee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac03c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac03c8 = FUN_14171c317(FUN_1463746cd,uVar1,L"ELightmapType");
  }
  return;
}



// FUNCTION 1433a6f25 FUN_1433a6f25 body=55 status=ok
// SIG undefined FUN_1433a6f25(void)

void FUN_1433a6f25(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac03e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac03e0 = FUN_14171c317(FUN_1463746fe,uVar1,L"EOcclusionCombineMode");
  }
  return;
}



// FUNCTION 1433a6f5c FUN_1433a6f5c body=55 status=ok
// SIG undefined FUN_1433a6f5c(void)

void FUN_1433a6f5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac03f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac03f8 = FUN_14171c317(FUN_14637472d,uVar1,L"EBlendMode");
  }
  return;
}



// FUNCTION 1433a6f93 FUN_1433a6f93 body=55 status=ok
// SIG undefined FUN_1433a6f93(void)

void FUN_1433a6f93(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0410 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0410 = FUN_14171c317(FUN_14637475e,uVar1,L"EMaterialFloatPrecisionMode");
  }
  return;
}



// FUNCTION 1433a6fca FUN_1433a6fca body=55 status=ok
// SIG undefined FUN_1433a6fca(void)

void FUN_1433a6fca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0428 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0428 = FUN_14171c317(FUN_14637478d,uVar1,L"ESamplerSourceMode");
  }
  return;
}



// FUNCTION 1433a7001 FUN_1433a7001 body=55 status=ok
// SIG undefined FUN_1433a7001(void)

void FUN_1433a7001(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0440 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0440 = FUN_14171c317(FUN_1463747bc,uVar1,L"ETextureMipValueMode");
  }
  return;
}



// FUNCTION 1433a7038 FUN_1433a7038 body=55 status=ok
// SIG undefined FUN_1433a7038(void)

void FUN_1433a7038(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0458 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0458 = FUN_14171c317(FUN_1463747eb,uVar1,L"ETranslucencyLightingMode");
  }
  return;
}



// FUNCTION 1433a706f FUN_1433a706f body=55 status=ok
// SIG undefined FUN_1433a706f(void)

void FUN_1433a706f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0470 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0470 = FUN_14171c317(FUN_14637481c,uVar1,L"ERefractionMode");
  }
  return;
}



// FUNCTION 1433a70a6 FUN_1433a70a6 body=55 status=ok
// SIG undefined FUN_1433a70a6(void)

void FUN_1433a70a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0488 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0488 = FUN_14171c317(FUN_14637484d,uVar1,L"ERefractionCoverageMode");
  }
  return;
}



// FUNCTION 1433a70dd FUN_1433a70dd body=55 status=ok
// SIG undefined FUN_1433a70dd(void)

void FUN_1433a70dd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac04a0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac04a0 = FUN_14171c317(FUN_14637487c,uVar1,L"EPixelDepthOffsetMode");
  }
  return;
}



// FUNCTION 1433a7114 FUN_1433a7114 body=55 status=ok
// SIG undefined FUN_1433a7114(void)

void FUN_1433a7114(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac04b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac04b8 = FUN_14171c317(FUN_1463748ab,uVar1,L"ETranslucentSortPolicy");
  }
  return;
}



// FUNCTION 1433a714b FUN_1433a714b body=55 status=ok
// SIG undefined FUN_1433a714b(void)

void FUN_1433a714b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac04d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac04d0 = FUN_14171c317(FUN_1463748da,uVar1,L"EDynamicGlobalIlluminationMethod");
  }
  return;
}



// FUNCTION 1433a7182 FUN_1433a7182 body=55 status=ok
// SIG undefined FUN_1433a7182(void)

void FUN_1433a7182(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac04e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac04e8 = FUN_14171c317(FUN_146374909,uVar1,L"EReflectionMethod");
  }
  return;
}



// FUNCTION 1433a71b9 FUN_1433a71b9 body=55 status=ok
// SIG undefined FUN_1433a71b9(void)

void FUN_1433a71b9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0500 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0500 = FUN_14171c317(FUN_146374938,uVar1,L"EShadowMapMethod");
  }
  return;
}



// FUNCTION 1433a71f0 FUN_1433a71f0 body=55 status=ok
// SIG undefined FUN_1433a71f0(void)

void FUN_1433a71f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0518 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0518 = FUN_14171c317(FUN_146374967,uVar1,L"ECastRayTracedShadow");
  }
  return;
}



// FUNCTION 1433a7227 FUN_1433a7227 body=55 status=ok
// SIG undefined FUN_1433a7227(void)

void FUN_1433a7227(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0530 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0530 = FUN_14171c317(FUN_146374996,uVar1,L"EMegaLightsShadowMethod");
  }
  return;
}



// FUNCTION 1433a725e FUN_1433a725e body=55 status=ok
// SIG undefined FUN_1433a725e(void)

void FUN_1433a725e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0548 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0548 = FUN_14171c317(FUN_1463749c5,uVar1,L"ESceneCaptureSource");
  }
  return;
}



// FUNCTION 1433a7295 FUN_1433a7295 body=55 status=ok
// SIG undefined FUN_1433a7295(void)

void FUN_1433a7295(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0560 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0560 = FUN_14171c317(FUN_1463749f6,uVar1,L"ESceneCaptureCompositeMode");
  }
  return;
}



// FUNCTION 1433a72cc FUN_1433a72cc body=55 status=ok
// SIG undefined FUN_1433a72cc(void)

void FUN_1433a72cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0590 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0590 = FUN_14171c317(FUN_146374a89,uVar1,L"EGBufferFormat");
  }
  return;
}



// FUNCTION 1433a7303 FUN_1433a7303 body=55 status=ok
// SIG undefined FUN_1433a7303(void)

void FUN_1433a7303(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac05a8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac05a8 = FUN_14171c317(FUN_146374ab8,uVar1,L"EMobileLocalLightSetting");
  }
  return;
}



// FUNCTION 1433a733a FUN_1433a733a body=55 status=ok
// SIG undefined FUN_1433a733a(void)

void FUN_1433a733a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac05c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac05c0 = FUN_14171c317(FUN_146374ae7,uVar1,L"ETrailWidthMode");
  }
  return;
}



// FUNCTION 1433a7371 FUN_1433a7371 body=55 status=ok
// SIG undefined FUN_1433a7371(void)

void FUN_1433a7371(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac05d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac05d8 = FUN_14171c317(FUN_146374b18,uVar1,L"EParticleCollisionMode");
  }
  return;
}



// FUNCTION 1433a73a8 FUN_1433a73a8 body=55 status=ok
// SIG undefined FUN_1433a73a8(void)

void FUN_1433a73a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac05f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac05f0 = FUN_14171c317(FUN_146374b47,uVar1,L"EMaterialShadingModel");
  }
  return;
}



// FUNCTION 1433a73df FUN_1433a73df body=55 status=ok
// SIG undefined FUN_1433a73df(void)

void FUN_1433a73df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0620 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0620 = FUN_14171c317(FUN_146374c09,uVar1,L"EMaterialSamplerType");
  }
  return;
}



// FUNCTION 1433a7416 FUN_1433a7416 body=55 status=ok
// SIG undefined FUN_1433a7416(void)

void FUN_1433a7416(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0638 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0638 = FUN_14171c317(FUN_146374c38,uVar1,L"EMaterialStencilCompare");
  }
  return;
}



// FUNCTION 1433a744d FUN_1433a744d body=55 status=ok
// SIG undefined FUN_1433a744d(void)

void FUN_1433a744d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0650 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0650 = FUN_14171c317(FUN_146374c67,uVar1,L"EMaterialShadingRate");
  }
  return;
}



// FUNCTION 1433a7484 FUN_1433a7484 body=55 status=ok
// SIG undefined FUN_1433a7484(void)

void FUN_1433a7484(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0668 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0668 = FUN_14171c317(FUN_146374c96,uVar1,L"ELightingBuildQuality");
  }
  return;
}



// FUNCTION 1433a74bb FUN_1433a74bb body=55 status=ok
// SIG undefined FUN_1433a74bb(void)

void FUN_1433a74bb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0680 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0680 = FUN_14171c317(FUN_146374cc5,uVar1,L"EMovementMode");
  }
  return;
}



// FUNCTION 1433a74f2 FUN_1433a74f2 body=55 status=ok
// SIG undefined FUN_1433a74f2(void)

void FUN_1433a74f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0698 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0698 = FUN_14171c317(FUN_146374cf6,uVar1,L"ENetworkSmoothingMode");
  }
  return;
}



// FUNCTION 1433a7529 FUN_1433a7529 body=55 status=ok
// SIG undefined FUN_1433a7529(void)

void FUN_1433a7529(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06b0 = FUN_14171c317(FUN_1417acdf7,uVar1,L"ECollisionChannel");
  }
  return;
}



// FUNCTION 1433a7560 FUN_1433a7560 body=55 status=ok
// SIG undefined FUN_1433a7560(void)

void FUN_1433a7560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06c8 = FUN_14171c317(FUN_146374d25,uVar1,L"EOverlapFilterOption");
  }
  return;
}



// FUNCTION 1433a7597 FUN_1433a7597 body=55 status=ok
// SIG undefined FUN_1433a7597(void)

void FUN_1433a7597(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06e0 = FUN_14171c317(FUN_1417ace28,uVar1,L"EObjectTypeQuery");
  }
  return;
}



// FUNCTION 1433a75ce FUN_1433a75ce body=55 status=ok
// SIG undefined FUN_1433a75ce(void)

void FUN_1433a75ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06f8 = FUN_14171c317(FUN_146374d54,uVar1,L"ETraceTypeQuery");
  }
  return;
}



// FUNCTION 1433a7605 FUN_1433a7605 body=55 status=ok
// SIG undefined FUN_1433a7605(void)

void FUN_1433a7605(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0710 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0710 = FUN_14171c317(FUN_1417ace59,uVar1,L"ECollisionResponse");
  }
  return;
}



// FUNCTION 1433a763c FUN_1433a763c body=55 status=ok
// SIG undefined FUN_1433a763c(void)

void FUN_1433a763c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0728 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0728 = FUN_14171c317(FUN_146374d85,uVar1,L"EFilterInterpolationType");
  }
  return;
}



// FUNCTION 1433a7673 FUN_1433a7673 body=55 status=ok
// SIG undefined FUN_1433a7673(void)

void FUN_1433a7673(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0770 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0770 = FUN_14171c317(FUN_146374edb,uVar1,L"ETimelineSigType");
  }
  return;
}



// FUNCTION 1433a76aa FUN_1433a76aa body=55 status=ok
// SIG undefined FUN_1433a76aa(void)

void FUN_1433a76aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0788 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0788 = FUN_14171c317(FUN_146374f0a,uVar1,L"ECollisionEnabled");
  }
  return;
}



// FUNCTION 1433a76e1 FUN_1433a76e1 body=55 status=ok
// SIG undefined FUN_1433a76e1(void)

void FUN_1433a76e1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac08c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac08c0 = FUN_14171c317(FUN_146375619,uVar1,L"ELightMapPaddingType");
  }
  return;
}



// FUNCTION 1433a7718 FUN_1433a7718 body=55 status=ok
// SIG undefined FUN_1433a7718(void)

void FUN_1433a7718(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac08d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac08d8 = FUN_14171c317(FUN_146375648,uVar1,L"EShadowMapFlags");
  }
  return;
}



// FUNCTION 1433a774f FUN_1433a774f body=55 status=ok
// SIG undefined FUN_1433a774f(void)

void FUN_1433a774f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac08f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac08f0 = FUN_14171c317(FUN_146375677,uVar1,L"ETeleportType");
  }
  return;
}



// FUNCTION 1433a7786 FUN_1433a7786 body=55 status=ok
// SIG undefined FUN_1433a7786(void)

void FUN_1433a7786(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0938 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0938 = FUN_14171c317(FUN_1463757cb,uVar1,L"EUpdateRateShiftBucket");
  }
  return;
}



// FUNCTION 1433a77bd FUN_1433a77bd body=55 status=ok
// SIG undefined FUN_1433a77bd(void)

void FUN_1433a77bd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac09b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac09b0 = FUN_14171c317(FUN_146375a43,uVar1,L"ENaniteFallbackTarget");
  }
  return;
}



// FUNCTION 1433a77f4 FUN_1433a77f4 body=55 status=ok
// SIG undefined FUN_1433a77f4(void)

void FUN_1433a77f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0a28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0a28 = FUN_14171c317(FUN_146375cbf,uVar1,L"ENetRole");
  }
  return;
}



// FUNCTION 1433a782b FUN_1433a782b body=55 status=ok
// SIG undefined FUN_1433a782b(void)

void FUN_1433a782b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0a40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0a40 = FUN_14171c317(FUN_146375cf0,uVar1,L"ENetDormancy");
  }
  return;
}



// FUNCTION 1433a7862 FUN_1433a7862 body=55 status=ok
// SIG undefined FUN_1433a7862(void)

void FUN_1433a7862(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0a58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0a58 = FUN_14171c317(FUN_146375d1f,uVar1,L"EPhysicsReplicationMode");
  }
  return;
}



// FUNCTION 1433a7899 FUN_1433a7899 body=55 status=ok
// SIG undefined FUN_1433a7899(void)

void FUN_1433a7899(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0a70 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0a70 = FUN_14171c317(FUN_146375d50,uVar1,L"EAutoReceiveInput");
  }
  return;
}



// FUNCTION 1433a78d0 FUN_1433a78d0 body=55 status=ok
// SIG undefined FUN_1433a78d0(void)

void FUN_1433a78d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0a88 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0a88 = FUN_14171c317(FUN_146375d81,uVar1,L"EAutoPossessAI");
  }
  return;
}



// FUNCTION 1433a7907 FUN_1433a7907 body=55 status=ok
// SIG undefined FUN_1433a7907(void)

void FUN_1433a7907(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0aa0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0aa0 = FUN_14171c317(FUN_1417ace8a,uVar1,L"EEndPlayReason");
  }
  return;
}



// FUNCTION 1433a793e FUN_1433a793e body=55 status=ok
// SIG undefined FUN_1433a793e(void)

void FUN_1433a793e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0ab8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0ab8 = FUN_14171c317(FUN_146375db0,uVar1,L"EWalkableSlopeBehavior");
  }
  return;
}



// FUNCTION 1433a7975 FUN_1433a7975 body=55 status=ok
// SIG undefined FUN_1433a7975(void)

void FUN_1433a7975(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0b48 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0b48 = FUN_14171c317(FUN_1463760c1,uVar1,L"EPhysicalMaterialMaskColor");
  }
  return;
}



// FUNCTION 1433a79ac FUN_1433a79ac body=55 status=ok
// SIG undefined FUN_1433a79ac(void)

void FUN_1433a79ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0b60 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0b60 = FUN_14171c317(FUN_1463760f0,uVar1,L"EComponentMobility");
  }
  return;
}



// FUNCTION 1433a79e3 FUN_1433a79e3 body=55 status=ok
// SIG undefined FUN_1433a79e3(void)

void FUN_1433a79e3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0b90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0b90 = FUN_14171c317(FUN_146376150,uVar1,L"EComponentSocketType");
  }
  return;
}



// FUNCTION 1433a7a1a FUN_1433a7a1a body=55 status=ok
// SIG undefined FUN_1433a7a1a(void)

void FUN_1433a7a1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0c48 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0c48 = FUN_14171c317(FUN_146376553,uVar1,L"ESpawnActorCollisionHandlingMethod");
  }
  return;
}



// FUNCTION 1433a7a51 FUN_1433a7a51 body=55 status=ok
// SIG undefined FUN_1433a7a51(void)

void FUN_1433a7a51(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0c78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0c78 = FUN_14171c317(FUN_146376615,uVar1,L"EMeshBufferAccess");
  }
  return;
}



// FUNCTION 1433a7d36 FUN_1433a7d36 body=72 status=ok
// SIG undefined FUN_1433a7d36(void)

void FUN_1433a7d36(void)

{
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a601d90,1,&PTR_FUN_14a601770,0x27,&PTR_FUN_14a600ff0,
                0x3c);
  return;
}



// FUNCTION 1433a7d80 FUN_1433a7d80 body=55 status=ok
// SIG undefined FUN_1433a7d80(void)

void FUN_1433a7d80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0f08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0f08 = FUN_14171c317(FUN_146377733,uVar1,L"EFontImportCharacterSet");
  }
  return;
}



// FUNCTION 1433a7db7 FUN_1433a7db7 body=55 status=ok
// SIG undefined FUN_1433a7db7(void)

void FUN_1433a7db7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0f98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0f98 = FUN_14171c317(FUN_1463779c4,uVar1,L"EStandbyType");
  }
  return;
}



// FUNCTION 1433a7dee FUN_1433a7dee body=55 status=ok
// SIG undefined FUN_1433a7dee(void)

void FUN_1433a7dee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0fc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0fc8 = FUN_14171c317(FUN_146377a28,uVar1,L"ESuggestProjVelocityTraceOption");
  }
  return;
}



// FUNCTION 1433a7e25 FUN_1433a7e25 body=55 status=ok
// SIG undefined FUN_1433a7e25(void)

void FUN_1433a7e25(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac1070 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac1070 = FUN_14171c317(FUN_146377d8c,uVar1,L"EGbxAnimBlendType");
  }
  return;
}


