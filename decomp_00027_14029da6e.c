// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14029da6e FUN_14029da6e body=118 status=ok
// SIG undefined FUN_14029da6e(void)

void FUN_14029da6e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029dae6(param_2,local_38);
  local_28 = *(undefined4 *)(param_2 + 0x2e4);
  local_24 = *(undefined4 *)(param_2 + 0x2e8);
  FUN_14029deca(param_1,*(undefined8 *)(param_2 + 0x398),local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029dae6 FUN_14029dae6 body=306 status=ok
// SIG undefined FUN_14029dae6(void)

float * FUN_14029dae6(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [40];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar5 = (float)(**(code **)(*param_1 + 0x638))();
  fVar6 = (float)*(byte *)((longlong)param_1 + 0x2d3) * 0.003921569 * fVar5;
  fVar1 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x5a)];
  fVar2 = (float)(&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x2d1)];
  fVar3 = (float)(&DAT_14c758c60)[*(byte *)((longlong)param_1 + 0x2d2)];
  *param_2 = fVar5 * fVar3;
  param_2[1] = fVar2 * fVar5;
  param_2[2] = fVar1 * fVar5;
  param_2[3] = fVar6;
  if ((*(byte *)((longlong)param_1 + 0x2fc) & 1) != 0) {
    uVar4 = FUN_14029dc1a();
    FUN_14029dd06(uVar4,&local_70,(int)param_1[0x5e]);
    *param_2 = fVar5 * fVar3 * local_70;
    param_2[1] = fVar2 * fVar5 * local_6c;
    param_2[2] = fVar1 * fVar5 * local_68;
    param_2[3] = fVar6 * local_64;
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029dc1a FUN_14029dc1a body=89 status=ok
// SIG undefined FUN_14029dc1a(void)

undefined * FUN_14029dc1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c82b794) {
    FUN_144b3d300(&DAT_14c82b794);
    if (DAT_14c82b794 == -1) {
      FUN_14029e455();
      _Init_thread_footer(&DAT_14c82b794);
    }
  }
  return &DAT_14c82b640;
}



// FUNCTION 14029dc74 FUN_14029dc74 body=145 status=ok
// SIG undefined FUN_14029dc74(void)

undefined8 FUN_14029dc74(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 extraout_XMM0_Db;
  float fVar3;
  undefined4 uVar4;
  
  fVar3 = *(float *)((longlong)param_1 + 0x2cc);
  uVar4 = 0;
  uVar2 = (ulonglong)(uint)fVar3;
  if (param_1[0x6c] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x618))();
    if (cVar1 == '\x03') {
      uVar2 = exp2f(*(undefined4 *)((longlong)param_1 + 0x2cc));
    }
    if ((*(byte *)(param_1 + 0x6d) & 1) != 0) {
      uVar2 = (ulonglong)
              (uint)(*(float *)(param_1[0x6c] + 0x158) * *(float *)((longlong)param_1 + 0x36c));
    }
    uVar4 = (undefined4)(uVar2 >> 0x20);
    fVar3 = (float)uVar2 * *(float *)(param_1[0x6c] + 0x15c);
    if (cVar1 == '\x03') {
      fVar3 = logf(fVar3);
      fVar3 = fVar3 * 1.442695;
      uVar4 = extraout_XMM0_Db;
    }
  }
  return CONCAT44(uVar4,fVar3);
}



// FUNCTION 14029dd06 FUN_14029dd06 body=452 status=ok
// SIG undefined FUN_14029dd06(void)

float * FUN_14029dd06(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  
  if (15000.0 <= param_3) {
    param_3 = 15000.0;
  }
  if (param_3 <= 1000.0) {
    param_3 = 1000.0;
  }
  fVar1 = (param_3 * 1.2864122e-07 * param_3 + param_3 * 0.00015411826 + 0.86011773) /
          (param_3 * 7.0814514e-07 * param_3 + param_3 * 0.0008424202 + 1.0);
  fVar5 = (param_3 * 4.2048168e-08 * param_3 + param_3 * 4.2280626e-05 + 0.31739873) /
          (param_3 * 1.6145606e-07 * param_3 + param_3 * -2.8974182e-05 + 1.0);
  fVar2 = fVar1 + fVar1 + fVar5 * -8.0 + 4.0;
  fVar1 = (fVar1 * 3.0) / fVar2;
  fVar2 = (fVar5 + fVar5) / fVar2;
  dVar6 = 1.0 / (double)fVar2;
  dVar4 = (double)((1.0 - fVar1) - fVar2) * dVar6;
  dVar6 = (double)fVar1 * dVar6;
  fVar2 = (float)(dVar6 * *(double *)(param_1 + 0xd0) + *(double *)(param_1 + 0xf0) +
                  dVar4 * *(double *)(param_1 + 0x110) + *(double *)(param_1 + 0x130) * 0.0);
  fVar5 = (float)(*(double *)(param_1 + 0x120) * 0.0 +
                 dVar4 * *(double *)(param_1 + 0x100) +
                 dVar6 * *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xe0));
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar3 = (float)(*(double *)(param_1 + 0x128) * 0.0 +
                 dVar4 * *(double *)(param_1 + 0x108) +
                 dVar6 * *(double *)(param_1 + 200) + *(double *)(param_1 + 0xe8));
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar5) {
    fVar3 = fVar5;
  }
  *param_2 = fVar3;
  param_2[1] = fVar2;
  param_2[2] = fVar1;
  param_2[3] = 1.0;
  return param_2;
}



// FUNCTION 14029deca FUN_14029deca body=1332 status=ok
// SIG undefined FUN_14029deca(void)

void FUN_14029deca(longlong param_1,longlong param_2,undefined4 *param_3)

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
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 == 0) || (lVar4 = *(longlong *)(param_2 + 0x18), (*(byte *)(lVar4 + 0xe4) & 2) == 0))
  goto LAB_14029e045;
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  local_80 = *(longlong *)(param_3 + 4);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  local_a0 = param_1;
  uStack_98 = lVar4;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14029df45;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14029df4a;
      goto LAB_14029df7c;
    }
  }
  else {
LAB_14029df45:
    if (iVar7 != 0x10) {
LAB_14029df7c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_14029df4a;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14029df4a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14029e10d;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_142fb49ae);
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
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14029e10d:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x1a);
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
            puVar15 = (uint *)(puVar17 + 0x1a);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14029e18d;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14029e18d:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a2e8e60;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_a0._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_98;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_98._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = local_90;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = uStack_8c;
        *(undefined4 *)(puVar17 + 0x18) = uStack_88;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_84;
        puVar17[0x19] = local_80;
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
        local_78[0] = (undefined1 *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x30,8);
        *local_68 = (longlong)&PTR_LAB_14a2e8e40;
        local_68[5] = local_80;
        *(undefined4 *)(local_68 + 3) = local_90;
        *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_8c;
        *(undefined4 *)(local_68 + 4) = uStack_88;
        *(undefined4 *)((longlong)local_68 + 0x24) = uStack_84;
        *(undefined4 *)(local_68 + 1) = (undefined4)local_a0;
        *(undefined4 *)((longlong)local_68 + 0xc) = local_a0._4_4_;
        *(undefined4 *)(local_68 + 2) = (undefined4)uStack_98;
        *(undefined4 *)((longlong)local_68 + 0x14) = uStack_98._4_4_;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78[0] = &LAB_1402a8d86;
        }
        local_a8 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateLightTransform",&DAT_14ca44cd4);
        if (local_78[0] != (undefined1 *)0x0) {
          plVar14 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar14 = local_58;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_14029e045;
    }
  }
LAB_14029df4a:
  FUN_1402a8da0(*(undefined8 *)(param_1 + 0x5660),lVar4,&local_90);
LAB_14029e045:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029e400 FUN_14029e400 body=85 status=ok
// SIG undefined FUN_14029e400(void)

float FUN_14029e400(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)FUN_14029dc74();
  if ((*(byte *)(param_1 + 0x428) & 1) == 0) {
    return fVar2;
  }
  cVar1 = *(char *)(param_1 + 0x400);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return fVar2 * 795.7747;
    }
    if (cVar1 != '\x03') {
      return fVar2 * 16.0;
    }
    fVar2 = (float)exp2f();
  }
  return fVar2 * 10000.0;
}



// FUNCTION 14029e455 FUN_14029e455 body=349 status=ok
// SIG undefined FUN_14029e455(void)

void FUN_14029e455(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined1 local_1d8 [344];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (DAT_14c82b790 == '\0') {
    if (DAT_14c872ce0 != 0) {
      local_1e8 = &DAT_14c872ce8;
      bVar1 = FUN_14626b02c(DAT_14c872ce0,L"/Script/Engine.RendererSettings",
                            L"RedChromaticityCoordinate",local_80);
      local_1e8 = &DAT_14c872ce8;
      bVar2 = FUN_14626b02c(DAT_14c872ce0,L"/Script/Engine.RendererSettings",
                            L"GreenChromaticityCoordinate",local_70);
      local_1e8 = &DAT_14c872ce8;
      bVar3 = FUN_14626b02c(DAT_14c872ce0,L"/Script/Engine.RendererSettings",
                            L"BlueChromaticityCoordinate",local_60);
      local_1e8 = &DAT_14c872ce8;
      bVar4 = FUN_14626b02c(DAT_14c872ce0,L"/Script/Engine.RendererSettings",
                            L"WhiteChromaticityCoordinate",local_50);
      if ((uint)bVar4 + (uint)bVar3 + (uint)bVar2 + (uint)bVar1 == 4) {
        local_1e8 = local_50;
        FUN_1467a7d5c(local_1d8,local_80,local_70,local_60);
        memcpy(&DAT_14c82b640,local_1d8,0x148);
      }
    }
    DAT_14c82b790 = '\x01';
  }
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029e5b4 FUN_14029e5b4 body=29 status=ok
// SIG undefined FUN_14029e5b4(void)

void FUN_14029e5b4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14029e5d2 FUN_14029e5d2 body=84 status=ok
// SIG undefined FUN_14029e5d2(void)

undefined8 * FUN_14029e5d2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a395480;
  puVar1 = param_1 + 2;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[6];
  }
  FUN_144717c65(puVar1,*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14029e626 FUN_14029e626 body=81 status=ok
// SIG undefined FUN_14029e626(void)

void FUN_14029e626(longlong param_1)

{
  if (*(int *)(param_1 + 900) < 0) {
    *(undefined4 *)(param_1 + 0x380) = 0;
    FUN_146dfc51c(param_1 + 0x378,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x380) = 0;
  }
  FUN_14029e6be(param_1);
  FUN_14029e678(param_1 + 0x398);
  return;
}



// FUNCTION 14029e678 FUN_14029e678 body=70 status=ok
// SIG undefined FUN_14029e678(void)

void FUN_14029e678(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1456ed36c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14029e6be FUN_14029e6be body=86 status=ok
// SIG undefined FUN_14029e6be(void)

void FUN_14029e6be(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x394);
  FUN_1400b4e95(*(undefined8 *)(param_1 + 0x388),*(undefined4 *)(param_1 + 0x390));
  *(undefined4 *)(param_1 + 0x390) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x394) != 0)) {
    FUN_146dfc58c(param_1 + 0x388,0);
    return;
  }
  return;
}



// FUNCTION 14029e722 FUN_14029e722 body=45 status=ok
// SIG undefined FUN_14029e722(void)

undefined8 FUN_14029e722(undefined8 param_1,int param_2)

{
  FUN_14029e750();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14029e750 FUN_14029e750 body=397 status=ok
// SIG undefined FUN_14029e750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14029e750(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b34f080;
  FUN_14029e8dd(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  param_1[0xf] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_140115c12(param_1 + 0x11,0);
  }
  param_1[0x10] = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1447cd778(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00014029e8a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14029e8dd FUN_14029e8dd body=129 status=ok
// SIG undefined FUN_14029e8dd(void)

void FUN_14029e8dd(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      FUN_14029e95e(puVar3[5],*(undefined4 *)(puVar3 + 6));
      if (puVar3[5] != 0) {
        FUN_1400020a8();
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14029e95e FUN_14029e95e body=64 status=ok
// SIG undefined FUN_14029e95e(void)

void FUN_14029e95e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x38);
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        FUN_144a2da94(lVar1);
        FUN_1400020a8(lVar1);
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14029e99e FUN_14029e99e body=272 status=ok
// SIG undefined FUN_14029e99e(void)

void FUN_14029e99e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(&DAT_00001ce8 + param_1);
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x1178) + 0x10))(lVar5 + 0x1178);
    if ((((((*(int *)(lVar5 + 0x2c) != 0) && (uVar1 = *(uint *)(lVar5 + 0x28), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         ((plVar6 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar5 + 0x2c))))) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
         ((lVar5 = *plVar6, lVar5 != 0 && (*(char *)(lVar5 + 0x754) == '\x01')))))) &&
       ((param_2 == 0 || (*(char *)(lVar5 + 0x769) == '\0')))) {
      lVar2 = *(longlong *)(&DAT_00001ce8 + param_1);
      lVar3 = *(longlong *)(lVar2 + 0x450);
      FUN_14029eaae(param_1,lVar5,param_3,param_4);
      if (*(longlong *)(lVar2 + 0x450) != lVar3) {
        if (*(char *)(lVar5 + 0x754) == '\x01') {
          bVar4 = *(byte *)(lVar5 + 0x76a);
        }
        else {
          bVar4 = 0;
        }
        *(byte *)(param_1 + 0x5b6) = *(byte *)(param_1 + 0x5b6) & 0xfe | bVar4;
      }
      return;
    }
  }
  FUN_14029eaae(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14029eaae FUN_14029eaae body=191 status=ok
// SIG undefined FUN_14029eaae(void)

void FUN_14029eaae(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1f0);
  if ((plVar3 == (longlong *)0x0) || (*(char *)(param_1 + 0x5b6) < '\0')) {
    return;
  }
  if ((param_3 == 0 & param_2 != 0 & *(byte *)(param_1 + 0x7a9)) != 1) goto LAB_14029eaf5;
  lVar1 = FUN_147a0442c(param_2);
  if (lVar1 == 0) {
LAB_14029eb5a:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_14029eb5a;
  }
  if (lVar1 != 0) {
    param_2 = lVar1;
  }
  plVar3 = *(longlong **)(param_1 + 0x1f0);
LAB_14029eaf5:
  if (param_2 == 0) {
    param_3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014029eb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x7a8))(plVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 14029eb6e FUN_14029eb6e body=812 status=ok
// SIG undefined FUN_14029eb6e(void)

undefined8 * FUN_14029eb6e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_2b8 [40];
  undefined2 *local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined2 *local_270;
  undefined2 *puStack_268;
  longlong local_260;
  undefined8 local_258;
  undefined2 *puStack_250;
  ulonglong *local_248;
  char local_240;
  undefined2 local_23a [257];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_260 = param_3;
  if (*(char *)(param_1[9] + 0x38) == '\x01') {
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2b8);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,&local_258);
  FUN_14029eeae(&local_258,&local_270);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_258);
  if (0 < local_258._4_4_) {
    local_288 = 0;
    uStack_280 = 0;
    lVar4 = 0x1000000000;
    iVar6 = 0;
    puVar5 = local_23a;
    iVar3 = local_258._4_4_;
    do {
      lVar4 = lVar4 + -0x100000000;
      *puVar5 = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar3 % 10) * 2);
      uVar7 = iVar3 + 9;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + -1;
      iVar3 = iVar3 / 10;
    } while (0x12 < uVar7);
    FUN_1400020e8(&local_288,(longlong)&local_258 + (lVar4 >> 0x1f),iVar6);
    FUN_1407ec8fc(&local_258,&local_270,&local_288);
    if (local_270 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_270 = local_258;
    puStack_268 = puStack_250;
    local_258 = (undefined2 *)0x0;
    puStack_250 = (undefined2 *)0x0;
    if (local_288 != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = (int)puStack_268 + -1;
  if ((int)puStack_268 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_258,iVar3,local_270,1);
  puVar5 = local_258;
  local_290 = local_258;
  plVar1 = (longlong *)param_1[8];
  cVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
  if ((param_3 == 0) && (cVar2 == '\0')) {
    *param_2 = puVar5;
  }
  else {
    local_258 = local_23a + 1;
    local_240 = '\0';
    local_248 = &local_38;
    puStack_250 = local_258;
    if (cVar2 != '\0') {
      puStack_250 = local_258;
      FUN_14029ef1a(plVar1,&local_288);
      iVar3 = (int)uStack_280 + -1;
      if ((int)uStack_280 == 0) {
        iVar3 = 0;
      }
      FUN_1449668a2(&local_258,local_288,iVar3);
      if (local_288 != 0) {
        FUN_1400020a8();
      }
      if (local_248 <= puStack_250 + 1) {
        FUN_140213274(&local_258,1);
      }
      *puStack_250 = 0x5f;
      puStack_250 = puStack_250 + 1;
    }
    FUN_14005eb5c(&local_290,&local_258);
    if (param_3 != 0) {
      if (local_248 <= puStack_250 + 1) {
        FUN_140213274(&local_258,1);
      }
      *puStack_250 = 0x5f;
      puStack_250 = puStack_250 + 1;
      FUN_14005eb5c(&local_260);
    }
    FUN_1446f82e2(param_2,(ulonglong)((longlong)puStack_250 - (longlong)local_258) >> 1,local_258,1)
    ;
    if (local_240 == '\x01') {
      FUN_1400020a8(local_258);
    }
  }
  if (local_270 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029eeae FUN_14029eeae body=107 status=ok
// SIG undefined FUN_14029eeae(void)

undefined8 FUN_14029eeae(uint *param_1,undefined8 param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  puVar1 = (ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + (ulonglong)(uVar3 & 0xffff) * 2);
  uVar2 = *puVar1;
  if ((uVar2 & 1) == 0) {
    FUN_142746720();
  }
  else {
    FUN_14006620a(param_2,puVar1 + 1,uVar2 >> 6);
  }
  return param_2;
}



// FUNCTION 14029ef1a FUN_14029ef1a body=120 status=ok
// SIG undefined FUN_14029ef1a(void)

undefined8 * FUN_14029ef1a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      puVar2 = (undefined8 *)(lVar1 + 0x90);
    }
    else {
      local_18 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
      puVar2 = &local_18;
    }
    FUN_1400021e4(puVar2,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14029ef94 FUN_14029ef94 body=477 status=ok
// SIG undefined FUN_14029ef94(void)

float * FUN_14029ef94(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
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
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) != 0) goto LAB_14029f165;
    if (lVar1 == 0) {
      fVar2 = -1.0;
      goto LAB_14029f024;
    }
  }
  else if (DAT_14c950c29 == 1) {
LAB_14029f165:
    FUN_1456cec3c(lVar1);
  }
  if (DAT_14cb06da8 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464003b0;
    local_48 = &LAB_147d17bdf;
    local_50 = &LAB_1417edf22;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  fVar2 = -1.0;
  if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
     (*(char *)(lVar1 + 0x524) == '\x01')) {
    fVar2 = *(float *)(lVar1 + 0x52c);
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_140dbaa93(lVar1);
      *(float *)(lVar1 + 0x52c) = fVar2;
    }
    fVar2 = fVar2 * *(float *)(lVar1 + 0x528);
  }
LAB_14029f024:
  dVar3 = ABS(*(double *)(param_1 + 0x280));
  if (ABS(*(double *)(param_1 + 0x280)) <= ABS(*(double *)(param_1 + 0x288))) {
    dVar3 = ABS(*(double *)(param_1 + 0x288));
  }
  if (dVar3 <= ABS(*(double *)(param_1 + 0x290))) {
    dVar3 = ABS(*(double *)(param_1 + 0x290));
  }
  *param_2 = (float)dVar3;
  param_2[1] = fVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029f172 FUN_14029f172 body=151 status=ok
// SIG undefined FUN_14029f172(void)

undefined8 FUN_14029f172(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
  plVar2 = *(longlong **)(param_2 + lVar4);
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = *(longlong **)(param_2 + lVar4);
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)();
  }
  FUN_144936510(plVar3,param_3,param_4);
  return 1;
}



// FUNCTION 14029f20a FUN_14029f20a body=141 status=ok
// SIG undefined FUN_14029f20a(void)

undefined8 * FUN_14029f20a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0xff;
  if ((((*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xf4))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_14493690e(uVar2,param_2,param_1);
    }
  }
  return param_2;
}



// FUNCTION 14029f298 FUN_14029f298 body=36 status=ok
// SIG undefined FUN_14029f298(void)

void FUN_14029f298(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_14cab2be4;
  if (*(int *)(param_1 + 0x80) == 0) {
    *(int *)(param_1 + 0x80) = DAT_14cab2be4;
  }
  if (param_3 != 0) {
    iVar1 = param_3;
  }
  FUN_14029f2bc(param_1,param_2,iVar1);
  return;
}



// FUNCTION 14029f2bc FUN_14029f2bc body=561 status=ok
// SIG undefined FUN_14029f2bc(void)

void FUN_14029f2bc(longlong param_1,double param_2,uint param_3)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  uVar3 = DAT_14cab2cc8;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((((*(int *)(param_1 + 0x80) == 0) || (*(int *)(param_1 + 0x84) != 0)) ||
        (*(int *)(param_1 + 0x14) == 0)) ||
       ((uVar5 = *(uint *)(param_1 + 0x10), (int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)))) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 ||
       (((int)plVar6[2] != *(int *)(param_1 + 0x14) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))
       ))) || (lVar1 = *plVar6, lVar1 == 0)) goto LAB_14029f3ee;
  lVar7 = 0;
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar7 = lVar1;
  }
  DAT_14cab2cc8 = lVar7 + 0x28;
  if (lVar7 == 0) {
    DAT_14cab2cc8 = 0;
  }
  if (param_3 == 0) {
    param_3 = DAT_14cab2be4;
  }
  if (*(char *)(param_1 + 0x89) == '\x01') {
    do {
      if ((DAT_14cab2be4 & *(uint *)(param_1 + 0x80)) == 0) break;
      iVar4 = FUN_1447b5048(param_1,lVar1);
    } while (iVar4 != 2);
    *(undefined1 *)(param_1 + 0x89) = 0;
LAB_14029f3d1:
    uVar5 = *(uint *)(param_1 + 0x80);
  }
  else {
    if (param_2 / 1000.0 <= 0.0) {
      do {
        uVar5 = *(uint *)(param_1 + 0x80);
        if ((uVar5 & param_3) == 0) goto LAB_14029f3d7;
        iVar4 = FUN_1447b5048(param_1,lVar1);
      } while (iVar4 != 2);
      goto LAB_14029f3d1;
    }
    QueryPerformanceCounter(&local_78);
    uVar5 = *(uint *)(param_1 + 0x80);
    if ((uVar5 & param_3) != 0) {
      dVar2 = (double)local_78.QuadPart * DAT_14c83f420;
      do {
        iVar4 = FUN_1447b5048(param_1,lVar1);
        if (iVar4 == 0) {
          QueryPerformanceCounter(&local_78);
          if (param_2 / 1000.0 <=
              ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar2 + 16777216.0))
          goto LAB_14029f3d1;
        }
        else if (iVar4 == 2) goto LAB_14029f3d1;
        uVar5 = *(uint *)(param_1 + 0x80);
      } while ((uVar5 & param_3) != 0);
    }
  }
LAB_14029f3d7:
  if ((uVar5 & 0xfffffbff) != 0) {
    *(uint *)(param_1 + 0x80) = uVar5 | 2;
  }
LAB_14029f3ee:
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
    DAT_14cab2cc8 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  DAT_14cab2cc8 = uVar3;
  return;
}



// FUNCTION 14029f4ee FUN_14029f4ee body=145 status=ok
// SIG undefined FUN_14029f4ee(void)

void FUN_14029f4ee(longlong *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_3 < param_4) {
    lVar3 = (longlong)param_3;
    do {
      uVar1 = (uint)lVar3;
      uVar2 = uVar1 + 0xff;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      FUN_14029f57f((ulonglong)(uVar1 - (uVar2 & 0xffffff00)) * 0x160 +
                    *(longlong *)(param_1[1] + (longlong)((int)uVar2 >> 8) * 8),
                    *(undefined8 *)(param_1[4] + lVar3 * 8),param_2);
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014029f57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14029f57f FUN_14029f57f body=2181 status=ok
// SIG undefined FUN_14029f57f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14029f57f(undefined8 *param_1,longlong *param_2,double param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  plVar18 = param_2;
  if (*(byte *)((longlong)param_2 + 0xc) == 0) {
    plVar18 = (longlong *)0x0;
  }
  lVar19 = *param_2;
  lVar21 = (longlong)(int)param_2[1];
  if (param_2 != (longlong *)0x0 && 1 < *(byte *)((longlong)param_2 + 0xc)) {
    cVar7 = *(char *)(*(longlong *)(lVar19 + 0x2c0) + 0xb + lVar21 * 0x10);
    if ((cVar7 == '\x04') || (cVar7 == '\x01')) {
      FUN_1402a0030(lVar19,&local_a8);
      param_1[0x21] = local_98;
      param_1[0x1f] = local_a8;
      param_1[0x20] = dStack_a0;
      lVar19 = *(longlong *)(*param_2 + 0x48);
      lVar21 = (longlong)(int)param_2[1] * 0x10;
      dVar26 = (double)*(float *)(lVar19 + 0xc + lVar21);
      dVar27 = (double)*(float *)(lVar19 + 8 + lVar21);
      dVar12 = (double)*(float *)(lVar19 + 4 + lVar21);
      dVar31 = (double)*(float *)(lVar19 + lVar21);
      lVar19 = *(longlong *)(*param_2 + 0x3f8);
      lVar21 = (longlong)(int)param_2[1] * 0x20;
      pdVar1 = (double *)(lVar19 + lVar21);
      dVar30 = *pdVar1;
      dVar9 = pdVar1[1];
      pdVar1 = (double *)(lVar19 + 0x10 + lVar21);
      dVar10 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar33 = dVar30 * dVar27 * 1.0 + dVar13 * dVar12 + dVar31 * dVar10 * -1.0 + dVar26 * dVar9;
      auVar34._8_4_ = SUB84(dVar33,0);
      auVar34._0_8_ =
           dVar9 * dVar27 * -1.0 + dVar10 * dVar12 + dVar31 * dVar13 * 1.0 + dVar26 * dVar30;
      auVar34._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x14) = auVar34;
      param_1[0x16] =
           dVar13 * dVar27 * 1.0 + ((dVar31 * dVar9 * 1.0 + dVar26 * dVar10) - dVar12 * dVar30);
      param_1[0x17] =
           dVar10 * dVar27 * -1.0 + ((dVar31 * dVar30 * -1.0 + dVar26 * dVar13) - dVar12 * dVar9);
      FUN_1402a018c(*param_2,&local_a8,(int)param_2[1]);
      param_1[0x24] = local_98;
      param_1[0x22] = local_a8;
      param_1[0x23] = dStack_a0;
      lVar19 = *(longlong *)(*param_2 + 0x548);
      lVar21 = (longlong)(int)param_2[1] * 0x10;
      dVar26 = (double)*(float *)(lVar19 + 0xc + lVar21);
      dVar27 = (double)*(float *)(lVar19 + 8 + lVar21);
      dVar12 = (double)*(float *)(lVar19 + 4 + lVar21);
      dVar31 = (double)*(float *)(lVar19 + lVar21);
      lVar19 = *(longlong *)(*param_2 + 0x3f8);
      lVar21 = (longlong)(int)param_2[1] * 0x20;
      pdVar1 = (double *)(lVar19 + lVar21);
      dVar30 = *pdVar1;
      dVar9 = pdVar1[1];
      pdVar1 = (double *)(lVar19 + 0x10 + lVar21);
      dVar10 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar33 = dVar30 * dVar27 * 1.0 + dVar13 * dVar12 + dVar31 * dVar10 * -1.0 + dVar26 * dVar9;
      auVar14._8_4_ = SUB84(dVar33,0);
      auVar14._0_8_ =
           dVar9 * dVar27 * -1.0 + dVar10 * dVar12 + dVar31 * dVar13 * 1.0 + dVar26 * dVar30;
      auVar14._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x18) = auVar14;
      param_1[0x1a] =
           dVar13 * dVar27 * 1.0 + ((dVar31 * dVar9 * 1.0 + dVar26 * dVar10) - dVar12 * dVar30);
      param_1[0x1b] =
           dVar10 * dVar27 * -1.0 + ((dVar31 * dVar30 * -1.0 + dVar26 * dVar13) - dVar12 * dVar9);
      lVar21 = param_2[1];
      lVar19 = *(longlong *)(*param_2 + 0x3e0);
      param_1[0x1e] = *(undefined8 *)(lVar19 + 0x10 + (longlong)(int)lVar21 * 0x18);
      puVar2 = (undefined8 *)(lVar19 + (longlong)(int)lVar21 * 0x18);
      uVar15 = puVar2[1];
      param_1[0x1c] = *puVar2;
      param_1[0x1d] = uVar15;
      lVar19 = (longlong)(int)param_2[1] * 0x20;
      puVar2 = (undefined8 *)(*(longlong *)(*param_2 + 0x3f8) + lVar19);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
      puVar2 = (undefined8 *)(*(longlong *)(*param_2 + 0x3f8) + 0x10 + lVar19);
      uVar17 = puVar2[1];
      param_1[0x12] = *puVar2;
      param_1[0x13] = uVar17;
      param_1[0x10] = uVar15;
      param_1[0x11] = uVar16;
      uVar24 = *(undefined4 *)
                (*(longlong *)(*param_2 + 0x278) + 8 + (longlong)(int)param_2[1] * 0xc);
      param_1[4] = *(undefined8 *)
                    (*(longlong *)(*param_2 + 0x278) + (longlong)(int)param_2[1] * 0xc);
      *(undefined4 *)(param_1 + 5) = uVar24;
      uVar24 = *(undefined4 *)
                (*(longlong *)(*param_2 + 0x290) + 8 + (longlong)(int)param_2[1] * 0xc);
      param_1[6] = *(undefined8 *)
                    (*(longlong *)(*param_2 + 0x290) + (longlong)(int)param_2[1] * 0xc);
      *(undefined4 *)(param_1 + 7) = uVar24;
      *(float *)((longlong)param_1 + 0x134) =
           (float)*(double *)(*(longlong *)(*param_2 + 0x3c8) + (longlong)(int)param_2[1] * 8);
      lVar19 = *(longlong *)(*param_2 + 0x380);
      lVar21 = *(longlong *)(*param_2 + 0x398);
      lVar20 = (longlong)(int)param_2[1] * 0xc;
      fVar3 = *(float *)(lVar21 + 8 + lVar20);
      fVar4 = *(float *)(lVar19 + 8 + lVar20);
      fVar5 = *(float *)(lVar21 + 4 + lVar20);
      fVar6 = *(float *)(lVar19 + 4 + lVar20);
      *(float *)(param_1 + 0x25) = *(float *)(lVar21 + lVar20) * *(float *)(lVar19 + lVar20);
      *(float *)((longlong)param_1 + 300) = fVar5 * fVar6;
      *(float *)(param_1 + 0x26) = fVar3 * fVar4;
      FUN_14029fe06(param_1);
      goto LAB_14029f95f;
    }
  }
  lVar19 = *(longlong *)(lVar19 + 0x28);
  param_1[0x24] = *(undefined8 *)(lVar19 + 0x10 + lVar21 * 0x18);
  puVar2 = (undefined8 *)(lVar19 + lVar21 * 0x18);
  uVar15 = puVar2[1];
  param_1[0x22] = *puVar2;
  param_1[0x23] = uVar15;
  lVar19 = *(longlong *)(*param_2 + 0x48);
  lVar21 = (longlong)(int)param_2[1] * 0x10;
  fVar3 = *(float *)(lVar19 + 0xc + lVar21);
  fVar4 = *(float *)(lVar19 + 8 + lVar21);
  fVar5 = *(float *)(lVar19 + 4 + lVar21);
  param_1[0x18] = (double)*(float *)(lVar19 + lVar21);
  param_1[0x19] = (double)fVar5;
  param_1[0x1a] = (double)fVar4;
  param_1[0x1b] = (double)fVar3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  if (plVar18 == (longlong *)0x0) {
    lVar21 = param_2[1];
    lVar19 = *(longlong *)(*param_2 + 0x28);
    param_1[0x21] = *(undefined8 *)(lVar19 + 0x10 + (longlong)(int)lVar21 * 0x18);
    puVar2 = (undefined8 *)(lVar19 + (longlong)(int)lVar21 * 0x18);
    uVar15 = puVar2[1];
    param_1[0x1f] = *puVar2;
    param_1[0x20] = uVar15;
    lVar19 = *(longlong *)(*param_2 + 0x48);
    lVar21 = (longlong)(int)param_2[1] * 0x10;
    fVar3 = *(float *)(lVar19 + 0xc + lVar21);
    fVar4 = *(float *)(lVar19 + 8 + lVar21);
    fVar5 = *(float *)(lVar19 + 4 + lVar21);
    param_1[0x14] = (double)*(float *)(lVar19 + lVar21);
    param_1[0x15] = (double)fVar5;
    param_1[0x16] = (double)fVar4;
    param_1[0x17] = (double)fVar3;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar23 = 0;
    uVar25 = 0;
    uVar24 = 0;
  }
  else {
    lVar20 = (longlong)(int)plVar18[1];
    lVar19 = *(longlong *)(*plVar18 + 0x28);
    lVar21 = *(longlong *)(*plVar18 + 0x278);
    fVar3 = *(float *)(lVar21 + 8 + lVar20 * 0xc);
    fVar4 = *(float *)(lVar21 + 4 + lVar20 * 0xc);
    dVar27 = *(double *)(lVar19 + 0x10 + lVar20 * 0x18);
    dVar12 = *(double *)(lVar19 + 8 + lVar20 * 0x18);
    param_1[0x1f] =
         *(double *)(lVar19 + lVar20 * 0x18) - (double)*(float *)(lVar21 + lVar20 * 0xc) * param_3;
    param_1[0x20] = dVar12 - (double)fVar4 * param_3;
    param_1[0x21] = dVar27 - (double)fVar3 * param_3;
    lVar19 = *(longlong *)(*param_2 + 0x48);
    lVar21 = (longlong)(int)param_2[1] * 0x10;
    fVar3 = *(float *)(lVar19 + 0xc + lVar21);
    fVar4 = *(float *)(lVar19 + 8 + lVar21);
    fVar5 = *(float *)(lVar19 + 4 + lVar21);
    param_1[0x14] = (double)*(float *)(lVar19 + lVar21);
    param_1[0x15] = (double)fVar5;
    param_1[0x16] = (double)fVar4;
    param_1[0x17] = (double)fVar3;
    lVar19 = *plVar18;
    lVar20 = (longlong)(int)plVar18[1];
    lVar21 = *(longlong *)(lVar19 + 0x290);
    fVar3 = *(float *)(lVar21 + 8 + lVar20 * 0xc);
    fVar4 = *(float *)(lVar21 + lVar20 * 0xc);
    fVar5 = *(float *)(lVar21 + 4 + lVar20 * 0xc);
    if (((0.0001 < ABS(fVar4)) || (0.0001 < ABS(fVar5))) || (0.0001 < ABS(fVar3))) {
      dVar31 = (double)fVar3;
      dVar27 = (double)fVar5;
      dVar32 = (double)fVar4;
      local_a8 = -dVar32;
      dStack_a0 = -dVar27;
      local_98 = -dVar31;
      lVar19 = *(longlong *)(*plVar18 + 0x48);
      lVar21 = (longlong)(int)plVar18[1] * 0x10;
      dVar33 = (double)*(float *)(lVar19 + 0xc + lVar21);
      dVar13 = (double)*(float *)(lVar19 + 8 + lVar21);
      dVar30 = (double)*(float *)(lVar19 + 4 + lVar21);
      dVar26 = (double)*(float *)(lVar19 + lVar21);
      param_3 = param_3 * 0.5;
      dVar9 = (dVar30 * dVar31 * 1.0 + dVar13 * -dVar27 + dVar33 * -dVar32 * 1.0 + dVar26 * 0.0) *
              param_3 + dVar26;
      dVar10 = (dVar26 * dVar31 * -1.0 + dVar33 * -dVar27 + dVar13 * -dVar32 * -1.0 + dVar30 * 0.0)
               * param_3 + dVar30;
      dVar12 = (((-dVar32 * dVar30 * 1.0 + dVar13 * 0.0) - -dVar27 * dVar26) - dVar33 * dVar31 * 1.0
               ) * param_3 + dVar13;
      dVar33 = (((-dVar32 * dVar26 * -1.0 + dVar33 * 0.0) - -dVar27 * dVar30) -
               dVar13 * dVar31 * -1.0) * param_3 + dVar33;
      dVar27 = dVar12 * dVar12 + dVar9 * dVar9;
      dVar30 = dVar33 * dVar33 + dVar10 * dVar10;
      auVar28._0_8_ = dVar27 + dVar30;
      auVar28._8_8_ = dVar27 + dVar30;
      uVar22 = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
      auVar29 = sqrtpd(auVar28,auVar28);
      auVar34 = divpd(_DAT_149934d80,auVar29);
      auVar35._0_8_ = auVar34._0_8_ * dVar12;
      auVar35._8_8_ = auVar34._8_8_ * dVar33;
      uVar11 = (ulonglong)(dVar10 * auVar34._8_8_) & uVar22;
      auVar29._8_4_ = (int)uVar22;
      auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar29._12_4_ = (int)(uVar22 >> 0x20);
      auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar29);
      auVar8._8_4_ = (int)uVar11;
      auVar8._0_8_ = (ulonglong)(dVar9 * auVar34._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar8._12_4_ = (int)(uVar11 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x14) = auVar8;
      *(undefined1 (*) [16])(param_1 + 0x16) = auVar29;
      lVar19 = *plVar18;
      lVar20 = (longlong)(int)plVar18[1];
    }
    uVar24 = *(undefined4 *)(*(longlong *)(lVar19 + 0x278) + 8 + lVar20 * 0xc);
    param_1[4] = *(undefined8 *)(*(longlong *)(lVar19 + 0x278) + lVar20 * 0xc);
    *(undefined4 *)(param_1 + 5) = uVar24;
    lVar21 = (longlong)(int)plVar18[1];
    lVar19 = *(longlong *)(*plVar18 + 0x290);
    uVar24 = *(undefined4 *)(lVar19 + 8 + lVar21 * 0xc);
    uVar23 = *(undefined4 *)(lVar19 + lVar21 * 0xc);
    uVar25 = *(undefined4 *)(lVar19 + 4 + lVar21 * 0xc);
  }
  *(undefined4 *)(param_1 + 6) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar25;
  *(undefined4 *)(param_1 + 7) = uVar24;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_14029fe06(param_1);
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
LAB_14029f95f:
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029fe06 FUN_14029fe06 body=553 status=ok
// SIG undefined FUN_14029fe06(void)

void FUN_14029fe06(longlong param_1)

{
  undefined1 auStack_188 [40];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (1.1754944e-38 < *(float *)(param_1 + 0x134)) {
    local_150 = (double)*(float *)(param_1 + 0x130);
    local_158 = (double)*(float *)(param_1 + 300);
    local_160 = (double)*(float *)(param_1 + 0x128);
    FUN_1409342e5(&local_148,param_1 + 0xc0);
    *(float *)(param_1 + 0x40) = (float)local_148;
    *(float *)(param_1 + 0x44) = (float)local_140;
    *(float *)(param_1 + 0x48) = (float)local_138;
    *(float *)(param_1 + 0x4c) = (float)local_130;
    *(float *)(param_1 + 0x50) = (float)local_128;
    *(float *)(param_1 + 0x54) = (float)local_120;
    *(float *)(param_1 + 0x58) = (float)local_118;
    *(float *)(param_1 + 0x5c) = (float)local_110;
    *(float *)(param_1 + 0x60) = (float)local_108;
    *(float *)(param_1 + 100) = (float)local_100;
    *(float *)(param_1 + 0x68) = (float)local_f8;
    *(float *)(param_1 + 0x6c) = (float)local_f0;
    *(float *)(param_1 + 0x70) = (float)local_e8;
    *(float *)(param_1 + 0x74) = (float)local_e0;
    *(float *)(param_1 + 0x78) = (float)local_d8;
    *(float *)(param_1 + 0x7c) = (float)local_d0;
  }
  if ((local_c0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a0030 FUN_1402a0030 body=347 status=ok
// SIG undefined FUN_1402a0030(void)

void FUN_1402a0030(longlong param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar10 = (longlong)param_3 * 0x18;
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar11 = (longlong)param_3 * 0x10;
  dVar14 = (double)*(float *)(lVar6 + 0xc + lVar11);
  dVar15 = (double)*(float *)(lVar6 + 8 + lVar11);
  dVar13 = (double)*(float *)(lVar6 + 4 + lVar11);
  lVar7 = *(longlong *)(param_1 + 0x28);
  dVar12 = (double)*(float *)(lVar6 + lVar11);
  lVar6 = *(longlong *)(param_1 + 0x3e0);
  dVar1 = *(double *)(lVar6 + lVar10);
  dVar2 = *(double *)(lVar6 + 8 + lVar10);
  dVar3 = *(double *)(lVar6 + 0x10 + lVar10);
  dVar16 = dVar12 * dVar2 - dVar1 * dVar13;
  dVar16 = dVar16 + dVar16;
  dVar9 = dVar15 * dVar1 - dVar3 * dVar12;
  dVar9 = dVar9 + dVar9;
  dVar8 = dVar13 * dVar3 - dVar2 * dVar15;
  dVar8 = dVar8 + dVar8;
  dVar4 = *(double *)(lVar7 + 0x10 + lVar10);
  dVar5 = *(double *)(lVar7 + 8 + lVar10);
  *param_2 = (dVar13 * dVar16 - dVar9 * dVar15) + dVar14 * dVar8 + dVar1 +
             *(double *)(lVar7 + lVar10);
  param_2[1] = (dVar15 * dVar8 - dVar16 * dVar12) + dVar9 * dVar14 + dVar2 + dVar5;
  param_2[2] = (dVar12 * dVar9 - dVar8 * dVar13) + dVar16 * dVar14 + dVar3 + dVar4;
  return;
}



// FUNCTION 1402a018c FUN_1402a018c body=355 status=ok
// SIG undefined FUN_1402a018c(void)

void FUN_1402a018c(longlong param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar6 = *(longlong *)(param_1 + 0x3e0);
  lVar7 = *(longlong *)(param_1 + 0x530);
  lVar11 = (longlong)param_3 * 0x18;
  lVar8 = *(longlong *)(param_1 + 0x548);
  lVar12 = (longlong)param_3 * 0x10;
  dVar15 = (double)*(float *)(lVar8 + 0xc + lVar12);
  dVar16 = (double)*(float *)(lVar8 + 8 + lVar12);
  dVar14 = (double)*(float *)(lVar8 + 4 + lVar12);
  dVar13 = (double)*(float *)(lVar8 + lVar12);
  dVar1 = *(double *)(lVar6 + lVar11);
  dVar2 = *(double *)(lVar6 + 8 + lVar11);
  dVar3 = *(double *)(lVar6 + 0x10 + lVar11);
  dVar17 = dVar13 * dVar2 - dVar1 * dVar14;
  dVar17 = dVar17 + dVar17;
  dVar10 = dVar16 * dVar1 - dVar3 * dVar13;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar14 * dVar3 - dVar2 * dVar16;
  dVar9 = dVar9 + dVar9;
  dVar4 = *(double *)(lVar7 + 0x10 + lVar11);
  dVar5 = *(double *)(lVar7 + 8 + lVar11);
  *param_2 = (dVar14 * dVar17 - dVar10 * dVar16) + dVar15 * dVar9 + dVar1 +
             *(double *)(lVar7 + lVar11);
  param_2[1] = (dVar16 * dVar9 - dVar17 * dVar13) + dVar10 * dVar15 + dVar2 + dVar5;
  param_2[2] = (dVar13 * dVar10 - dVar9 * dVar14) + dVar17 * dVar15 + dVar3 + dVar4;
  return;
}



// FUNCTION 1402a02f0 FUN_1402a02f0 body=103 status=ok
// SIG undefined FUN_1402a02f0(void)

undefined8 FUN_1402a02f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (((plVar3 != (longlong *)0x0) &&
          (cVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3), cVar4 != '\0')) &&
         (uVar5 = (**(code **)(*plVar3 + 0x3c0))(plVar3), (int)uVar5 != 0)) {
        return uVar5;
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar6);
  }
  return 0;
}



// FUNCTION 1402a0358 FUN_1402a0358 body=67 status=ok
// SIG undefined FUN_1402a0358(void)

void FUN_1402a0358(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(param_1 + 0x20);
  return;
}



// FUNCTION 1402a039c FUN_1402a039c body=29 status=ok
// SIG undefined FUN_1402a039c(void)

undefined8 FUN_1402a039c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402a03ba FUN_1402a03ba body=55 status=ok
// SIG undefined FUN_1402a03ba(void)

void FUN_1402a03ba(longlong *param_1)

{
  FUN_1402a03f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402a03f2 FUN_1402a03f2 body=121 status=ok
// SIG undefined FUN_1402a03f2(void)

void FUN_1402a03f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1402a046c FUN_1402a046c body=1239 status=ok
// SIG undefined FUN_1402a046c(void)

void FUN_1402a046c(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint local_70;
  
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar11 = (ulonglong)uVar3;
  if (uVar11 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0x50);
  plVar5 = (longlong *)param_3[3];
  *(undefined1 *)(param_3 + 2) = 1;
  if (plVar5 != (longlong *)0x0) {
    cVar1 = (char)plVar5[3];
    if (cVar1 == '\x03') {
      if ((int)plVar5[1] != 0) {
LAB_1402a05e5:
        if ((char)plVar5[2] == '\0') {
          FUN_146264839(*plVar5,(int)plVar5[1]);
          *(undefined1 *)(plVar5 + 2) = 1;
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) < 0) {
          FUN_14480ffb8(param_3,0);
        }
        *(undefined1 *)(param_3 + 2) = 0;
        if (-1 < (int)uVar3) {
          if (*(int *)((longlong)param_3 + 0xc) < (int)uVar3) {
            FUN_14480ffb8(param_3,uVar3);
          }
          iVar10 = (int)plVar5[1];
          local_70 = 0;
          bVar7 = true;
          iVar13 = 0;
          do {
            if ((bVar7) && (iVar13 == iVar10)) {
              iVar10 = (uVar3 - local_70) + (int)param_3[1];
              if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar10);
              }
              if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
                FUN_14480ffb8(param_3);
              }
              if ((int)uVar3 <= (int)local_70) {
                return;
              }
              iVar10 = uVar3 - local_70;
              lVar12 = (longlong)(int)local_70 * 0xc + 8;
              do {
                if (((char)plVar5[3] == '\x03') || ((char)plVar5[3] == '\0')) {
                  lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar12);
                  uVar15 = FUN_1402a0944(*(undefined1 *)(lVar4 + lVar8 * 0xc),
                                         *(undefined1 *)(lVar4 + 1 + lVar8 * 0xc),
                                         *(undefined1 *)(lVar4 + 2 + lVar8 * 0xc),
                                         *(undefined1 *)(lVar4 + 3 + lVar8 * 0xc),
                                         *(undefined4 *)(lVar4 + 4 + lVar8 * 0xc),
                                         *(int *)(lVar4 + 8 + lVar8 * 0xc) + lVar4,param_4,0);
                  uVar6 = *(undefined8 *)
                           (*(longlong *)(param_2 + 0x20) +
                           (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar12) * 0xc);
                  iVar13 = (int)param_3[1];
                  *(uint *)(param_3 + 1) = iVar13 + 1U;
                  if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
                    FUN_1406de67a(param_3,iVar13);
                  }
                  lVar8 = *param_3;
                  lVar14 = (longlong)iVar13 * 0x10;
                  *(undefined8 *)(lVar8 + lVar14) = uVar6;
                  *(undefined4 *)(lVar8 + 8 + lVar14) = uVar15;
                  *(undefined1 *)(lVar8 + 0xc + lVar14) = 0;
                }
                lVar12 = lVar12 + 0xc;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              return;
            }
            lVar14 = (longlong)
                     *(int *)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)(int)local_70 * 0xc);
            lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar14 * 0xc);
            lVar8 = *(longlong *)(*plVar5 + (longlong)iVar13 * 0xc);
            if (lVar12 == lVar8) {
              bVar2 = *(byte *)(*plVar5 + (longlong)iVar13 * 0xc + 8);
              if ((bVar2 & 1) != 0) goto LAB_1402a07e0;
              cVar1 = (char)plVar5[3];
              if (cVar1 == '\0') {
LAB_1402a0769:
                uVar15 = FUN_1402a0944(*(undefined1 *)(lVar4 + lVar14 * 0xc),
                                       *(undefined1 *)(lVar4 + 1 + lVar14 * 0xc),
                                       *(undefined1 *)(lVar4 + 2 + lVar14 * 0xc),
                                       *(undefined1 *)(lVar4 + 3 + lVar14 * 0xc),
                                       *(undefined4 *)(lVar4 + 4 + lVar14 * 0xc),
                                       *(int *)(lVar4 + 8 + lVar14 * 0xc) + lVar4,param_4,0);
                iVar9 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar9 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
                  FUN_1406de67a(param_3,iVar9);
                }
                lVar8 = *param_3;
                lVar14 = (longlong)iVar9 * 0x10;
                *(longlong *)(lVar8 + lVar14) = lVar12;
                *(undefined4 *)(lVar8 + 8 + lVar14) = uVar15;
                *(undefined1 *)(lVar8 + 0xc + lVar14) = 0;
              }
              else if (cVar1 == '\x02') {
                if ((bVar2 & 2) != 0) goto LAB_1402a0769;
              }
              else if ((cVar1 == '\x03') && ((bVar2 & 2) == 0)) goto LAB_1402a0769;
LAB_1402a07e0:
              local_70 = local_70 + 1;
LAB_1402a07e4:
              iVar13 = iVar13 + 1;
            }
            else {
              iVar9 = (int)lVar12 - (int)lVar8;
              if (iVar9 == 0) {
                iVar9 = (int)((ulonglong)lVar12 >> 0x20) - (int)((ulonglong)lVar8 >> 0x20);
              }
              if (-1 < iVar9) goto LAB_1402a07e4;
              if (((char)plVar5[3] == '\x03') || ((char)plVar5[3] == '\0')) {
                uVar15 = FUN_1402a0944(*(undefined1 *)(lVar4 + lVar14 * 0xc),
                                       *(undefined1 *)(lVar4 + 1 + lVar14 * 0xc),
                                       *(undefined1 *)(lVar4 + 2 + lVar14 * 0xc),
                                       *(undefined1 *)(lVar4 + 3 + lVar14 * 0xc),
                                       *(undefined4 *)(lVar4 + 4 + lVar14 * 0xc),
                                       *(int *)(lVar4 + 8 + lVar14 * 0xc) + lVar4,param_4,0);
                iVar9 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar9 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
                  FUN_1406de67a(param_3,iVar9);
                }
                lVar8 = *param_3;
                lVar14 = (longlong)iVar9 * 0x10;
                *(longlong *)(lVar8 + lVar14) = lVar12;
                *(undefined4 *)(lVar8 + 8 + lVar14) = uVar15;
                *(undefined1 *)(lVar8 + 0xc + lVar14) = 0;
              }
              local_70 = local_70 + 1;
            }
            bVar7 = (int)local_70 < (int)uVar3;
            if (!bVar7 && iVar10 <= iVar13) {
              return;
            }
            if (local_70 == uVar3 && iVar10 > iVar13) {
              return;
            }
          } while( true );
        }
        goto LAB_1402a081a;
      }
    }
    else if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) < 0) {
          FUN_14480ffb8(param_3,0);
        }
        *(undefined1 *)(param_3 + 2) = 0;
        return;
      }
      goto LAB_1402a05e5;
    }
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14480ffb8(param_3,0);
  }
  *(undefined1 *)(param_3 + 2) = 0;
  if (-1 < (int)uVar3) {
    if (*(int *)((longlong)param_3 + 0xc) < (int)uVar3) {
      FUN_14480ffb8(param_3,uVar3);
    }
    lVar12 = 8;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar12);
      uVar15 = FUN_1402a0944(*(undefined1 *)(lVar4 + lVar8 * 0xc),
                             *(undefined1 *)(lVar4 + 1 + lVar8 * 0xc),
                             *(undefined1 *)(lVar4 + 2 + lVar8 * 0xc),
                             *(undefined1 *)(lVar4 + 3 + lVar8 * 0xc),
                             *(undefined4 *)(lVar4 + 4 + lVar8 * 0xc),
                             *(int *)(lVar4 + 8 + lVar8 * 0xc) + lVar4,param_4,0);
      uVar6 = *(undefined8 *)
               (*(longlong *)(param_2 + 0x20) +
               (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar12) * 0xc);
      iVar10 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
        FUN_1406de67a(param_3,iVar10);
      }
      lVar8 = *param_3;
      lVar14 = (longlong)iVar10 * 0x10;
      *(undefined8 *)(lVar8 + lVar14) = uVar6;
      *(undefined4 *)(lVar8 + 8 + lVar14) = uVar15;
      *(undefined1 *)(lVar8 + 0xc + lVar14) = 0;
      lVar12 = lVar12 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    return;
  }
LAB_1402a081a:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar11);
}



// FUNCTION 1402a0944 FUN_1402a0944 body=238 status=ok
// SIG undefined FUN_1402a0944(void)

void FUN_1402a0944(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = param_5;
  local_48 = param_8;
  local_4c = param_7;
  local_58 = param_6;
  puVar1 = (undefined8 *)(&DAT_14cad4350 + (longlong)param_2 * 0x40 + (longlong)param_1 * 0x80);
  pcVar2 = (code *)*puVar1;
  plVar4 = (longlong *)puVar1[2];
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    plVar4 = puVar1 + 4;
  }
  local_60 = param_3;
  local_5c = param_4;
  uVar3 = (**(code **)(*plVar4 + 8))();
  local_78 = &local_58;
  local_70 = &local_4c;
  local_68 = &local_48;
  (*pcVar2)(uVar3,&local_60,&local_5c,&local_44);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a0a3a FUN_1402a0a3a body=72 status=ok
// SIG undefined FUN_1402a0a3a(void)

void FUN_1402a0a3a(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  (*(code *)*param_1)(*param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  return;
}



// FUNCTION 1402a0a82 FUN_1402a0a82 body=1050 status=ok
// SIG undefined FUN_1402a0a82(void)

void FUN_1402a0a82(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140433374(param_1 + 0x40);
  FUN_14043253e(param_1 + 0x40);
  if (((((*(int *)(param_1 + 0x2c) == 0) || (uVar10 = *(uint *)(param_1 + 0x28), (int)uVar10 < 0))
       || (DAT_14c9647dc <= (int)uVar10)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x2c))))) ||
     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_1402a0d70;
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar4 = *plVar7;
  }
  else {
    lVar4 = 0;
  }
  if (*(int *)(lVar4 + 0x238) < 1) goto LAB_1402a0d70;
  lVar11 = 0;
  lVar5 = 0;
  do {
    iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar11 * 8);
    if ((((iVar1 != 0) &&
         (uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar11 * 8), -1 < (int)uVar10)) &&
        (((int)uVar10 < DAT_14c9647dc &&
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) &&
       (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)) {
      if (DAT_14cbadd90 == 0) {
        local_58 = FUN_141030f22;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1459f2e4c;
        local_88 = &LAB_148c39de3;
        local_90 = &LAB_1457a9eb2;
        local_98 = &DAT_149e063b2;
        local_a0 = 0;
        local_a8 = 0x10000004;
        local_b0 = 0x10;
        local_b8 = 0x3de0;
        local_80 = &local_58;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
           DAT_14cbadd90 + 0x30)) && ((*(byte *)(plVar7 + 0x84) & 2) != 0)) {
        cVar2 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
        if (cVar2 != '\0') {
          lVar3 = FUN_1402a1246(plVar7);
          if (lVar3 != 0) {
            cVar2 = FUN_14016169c(plVar7,&local_58);
            if ((cVar2 == '\0') || ((int)local_58 == 0)) {
              lVar5 = plVar7[0x7a];
            }
          }
        }
      }
    }
    lVar11 = lVar11 + 1;
  } while ((int)lVar11 < *(int *)(lVar4 + 0x238));
  if (lVar5 == 0) goto LAB_1402a0d70;
  lVar4 = *(longlong *)(lVar5 + 0x1c8);
  if (lVar4 == 0) {
    local_48 = DAT_14c8464f0;
    local_58 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_58 = *(code **)(lVar4 + 0x260);
    uStack_50 = *(undefined8 *)(lVar4 + 0x268);
    local_48 = *(undefined8 *)(lVar4 + 0x270);
  }
  lVar4 = FUN_1402a107a();
  if (lVar4 == 0) goto LAB_1402a0d70;
  lVar4 = lVar4 + 0x478;
  lVar5 = FUN_1402a0e9e(lVar4);
  if (lVar5 == 0) goto LAB_1402a0d70;
  lVar5 = FUN_1402a0e9e(lVar4);
  if (lVar5 == 0) goto LAB_1402a0d70;
  uVar6 = FUN_1402a0e9e(lVar4);
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_1402a0d9b:
    uVar8 = 0;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x28);
    uVar8 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1402a0d9b;
      uVar8 = *puVar9;
    }
  }
  uVar6 = FUN_1402a1570(uVar8,uVar6);
  FUN_1402a10ba(&local_3a,uVar8,uVar6,&local_58);
  uVar10 = 0;
  if (local_39 != '\0') {
    uVar10 = (uint)local_3a;
  }
  lVar5 = FUN_1402a0e9e(lVar4);
  if ((int)uVar10 < *(int *)(lVar5 + 0x68)) {
    lVar5 = FUN_1402a0e9e(lVar4);
    lVar4 = *(longlong *)(param_1 + 0x398);
    if (lVar4 != 0) {
      plVar7 = (longlong *)
               ((ulonglong)(uVar10 << 7) + (ulonglong)uVar10 * 8 + *(longlong *)(lVar5 + 0x60));
      lVar5 = *plVar7;
      if (*(longlong *)(param_1 + 0x3a8) != lVar5) {
        *(longlong *)(param_1 + 0x3a8) = lVar5;
        FUN_1456ed5da(plVar7 + 1,local_68);
        FUN_1456ed4b2(lVar4,local_68);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1402a0d70:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a0e9e FUN_1402a0e9e body=246 status=ok
// SIG undefined FUN_1402a0e9e(void)

longlong FUN_1402a0e9e(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_1402a0f94();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1402a0f94 FUN_1402a0f94 body=228 status=ok
// SIG undefined FUN_1402a0f94(void)

longlong FUN_1402a0f94(void)

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
  if (DAT_14cbbf290 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7b3f;
    local_40 = FUN_1466113f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_LateReflectionBlendZone",&DAT_14cbbf290,
                  &DAT_148ca7b3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a107a FUN_1402a107a body=63 status=ok
// SIG undefined FUN_1402a107a(void)

longlong FUN_1402a107a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402a137e();
  if (lVar1 != 0) {
    lVar2 = FUN_1402a1160();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1402a10ba FUN_1402a10ba body=165 status=ok
// SIG undefined FUN_1402a10ba(void)

undefined1 *
FUN_1402a10ba(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_3 == 0) || (lVar1 = *(longlong *)(param_3 + 0x3d0), lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x28) == 0)) {
    param_1[1] = 0;
  }
  else {
    FUN_144afbb80(&local_2a);
    if (local_29 == '\0') {
      local_40 = *param_4;
      local_38 = param_4[1];
      FUN_143f7b032(lVar1,param_1);
    }
    else {
      param_1[1] = local_29;
      *param_1 = local_2a;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a1160 FUN_1402a1160 body=228 status=ok
// SIG undefined FUN_1402a1160(void)

longlong FUN_1402a1160(void)

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
  if (DAT_14cba6390 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145996556;
    local_38 = &LAB_148be682d;
    local_40 = FUN_146042063;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x4a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakAcousticsConfig",&DAT_14cba6390,&DAT_148be682c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6390;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a1246 FUN_1402a1246 body=310 status=ok
// SIG undefined FUN_1402a1246(void)

longlong FUN_1402a1246(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x398);
  if (lVar3 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar3 = *(longlong *)(param_1 + 0x398);
      if (lVar3 == 0) goto LAB_1402a1376;
    }
    lVar2 = 0;
    if ((DAT_14cbae3d8 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_1402a12ac;
    if (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          == DAT_14cbae3d8 + 0x30) {
        lVar2 = lVar3;
      }
      goto LAB_1402a12ac;
    }
  }
LAB_1402a1376:
  lVar2 = 0;
LAB_1402a12ac:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1402a137e FUN_1402a137e body=496 status=ok
// SIG undefined FUN_1402a137e(void)

undefined8 FUN_1402a137e(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f6f09d;
    local_40 = &LAB_146201c25;
    local_48 = L"Game";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar2 = DAT_14cb253f8;
  if (DAT_14cb253f8[0x22] == 0) {
    (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
    if (plVar2[0x22] != 0) goto LAB_1402a13b3;
  }
  else {
LAB_1402a13b3:
    lVar3 = DAT_14cb25be0;
    if (DAT_14cb25be0 != 0) {
      if (DAT_14cb5e220 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = (code *)&LAB_1459ebe90;
        local_38 = &LAB_1486a1487;
        local_40 = &LAB_1464e0171;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10000000;
        local_60 = 8;
        local_68 = 0x440;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
      }
      lVar1 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(DAT_14cb5e220 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8)
          == DAT_14cb5e220 + 0x30)) {
        uVar4 = *(undefined8 *)(lVar3 + 0x2e0);
        goto LAB_1402a13f9;
      }
    }
  }
  uVar4 = 0;
LAB_1402a13f9:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a1570 FUN_1402a1570 body=566 status=ok
// SIG undefined FUN_1402a1570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402a1570(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0 || param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_14019257c(param_1);
    local_50 = param_1;
    FUN_140100fb2(local_88);
    lVar3 = local_60;
    lVar2 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
LAB_1402a15e7:
    if (local_80 != local_68) {
      lVar6 = local_80[2];
      if ((((lVar4 == 0) || (lVar5 = FUN_14477b890(lVar4,lVar6), lVar5 == 0)) &&
          ((*(uint *)(lVar6 + 8) & 0x40) == 0)) &&
         ((*(longlong *)(lVar6 + 0x3d0) != 0 &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x3d0) + 0x28) == param_2)))) goto LAB_1402a1760;
      plVar7 = (longlong *)*local_80;
      if (plVar7 == (longlong *)0x0) {
LAB_1402a1753:
        local_80 = (longlong *)0x0;
      }
      else {
        do {
          lVar6 = plVar7[2];
          if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) & 0x40018000) == 0)) {
            uVar1 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
                lVar6 = lVar6 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1402a167f:
                if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
                  lVar6 = FUN_1447210f0();
                  goto LAB_1402a16ba;
                }
              }
            }
            else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
              lVar6 = 0;
              goto LAB_1402a167f;
            }
          }
          plVar7 = (longlong *)*plVar7;
          local_80 = (longlong *)0x0;
        } while (plVar7 != (longlong *)0x0);
      }
      goto LAB_1402a15e7;
    }
    lVar6 = 0;
LAB_1402a1760:
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
LAB_1402a16ba:
  local_80 = plVar7;
  if (lVar6 != *local_70) {
    plVar7 = (longlong *)*plVar7;
    if (plVar7 != (longlong *)0x0) {
      do {
        lVar6 = plVar7[2];
        if ((lVar6 != 0) && ((*(uint *)(lVar6 + 8) & 0x40018000) == 0)) {
          uVar1 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
              lVar6 = lVar6 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1402a171d:
              if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_1402a1749;
            }
          }
          else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
            lVar6 = 0;
            goto LAB_1402a171d;
          }
        }
        plVar7 = (longlong *)*plVar7;
        if (plVar7 == (longlong *)0x0) break;
      } while( true );
    }
    goto LAB_1402a1753;
  }
  goto LAB_1402a15e7;
LAB_1402a1749:
  lVar6 = FUN_1447210f0();
  goto LAB_1402a16ba;
}



// FUNCTION 1402a17a8 FUN_1402a17a8 body=534 status=ok
// SIG undefined FUN_1402a17a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402a17a8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cb0a388 = _DAT_14cb0a388 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar8 = 0;
    do {
      uVar5 = uStack_50;
      piVar1 = (int *)(*(longlong *)(lVar7 + lVar8) + 0x5c);
      *piVar1 = *piVar1 + -1;
      lVar6 = *(longlong *)(lVar7 + lVar8);
      if (*(int *)(lVar6 + 0x5c) == 0) {
        if (*(char *)(lVar6 + 0x14) == '\x01') {
          lVar9 = (longlong)(int)uStack_50;
          uVar3 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
          if (uStack_50._4_4_ < uVar3) {
            FUN_1402a19f0(&local_58,uVar5 & 0xffffffff);
            lVar6 = *(longlong *)(lVar7 + lVar8);
          }
          *(longlong *)(local_58 + lVar9 * 0x10) = lVar6;
          lVar6 = *(longlong *)(lVar7 + 8 + lVar8);
          *(longlong *)(local_58 + 8 + lVar9 * 0x10) = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
        }
        uVar5 = uStack_40;
        lVar6 = (longlong)(int)uStack_40;
        uVar3 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
        if (uStack_40._4_4_ < uVar3) {
          FUN_1402a19f0(&local_48,uVar5 & 0xffffffff);
        }
        *(undefined8 *)(local_48 + lVar6 * 0x10) = *(undefined8 *)(lVar7 + lVar8);
        lVar9 = *(longlong *)(lVar7 + 8 + lVar8);
        *(longlong *)(local_48 + 8 + lVar6 * 0x10) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar8);
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    lVar7 = *(longlong *)(param_1 + 0x18);
  }
  FUN_144936a5c(lVar7,uVar4);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1402a19c0(param_1 + 0x18);
  }
  lVar7 = local_48;
  lVar8 = (longlong)(int)uStack_40;
  if (lVar8 != 0) {
    lVar6 = 0;
    do {
      FUN_1402a1afe(*(undefined8 *)(lVar7 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while (lVar8 * 0x10 != lVar6);
  }
  lVar7 = local_58;
  lVar8 = (longlong)(int)uStack_50;
  uVar5 = 0;
  if (lVar8 != 0) {
    lVar6 = 0;
    do {
      FUN_1401a5e92(*(undefined8 *)(lVar7 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while (lVar8 * 0x10 != lVar6);
    uVar5 = uStack_50 & 0xffffffff;
  }
  _DAT_14cb0a388 = _DAT_14cb0a388 + -1;
  FUN_144936a5c(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144936a5c(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a19c0 FUN_1402a19c0 body=48 status=ok
// SIG undefined FUN_1402a19c0(void)

void FUN_1402a19c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1402a19f0 FUN_1402a19f0 body=269 status=ok
// SIG undefined FUN_1402a19f0(void)

void FUN_1402a19f0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402a1afe FUN_1402a1afe body=596 status=ok
// SIG undefined FUN_1402a1afe(void)

void FUN_1402a1afe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)((longlong)param_1 + 0x12) == '\0') && (*(char *)((longlong)param_1 + 0x11) == '\0')
     ) {
    *(undefined1 *)(param_1 + 2) = 1;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) {
LAB_1402a1b9c:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      FUN_1402a1d54(param_1 + 3,&local_48,param_1 + 5);
    }
    else {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_1402a1b9c;
        LOCK();
        iVar5 = (int)plVar7[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      local_48 = *param_1;
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plStack_40 = plVar7;
      FUN_1402a1d54(param_1 + 3,&local_48,param_1 + 5);
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_1402a1ed4(param_1);
    iVar6 = *(int *)(param_1 + 0x12);
    if (0 < iVar6) {
      local_38 = (longlong *)0x0;
      uVar3 = param_1[0x11];
      local_30 = iVar6;
      FUN_147d6184c(&local_38,iVar6);
      FUN_147d618a2(local_38,uVar3,iVar6);
      if ((longlong)local_30 == 0) {
        iVar6 = 0;
      }
      else {
        plVar8 = local_38 + (longlong)local_30 * 2;
        plVar7 = local_38;
        do {
          plVar4 = (longlong *)plVar7[1];
          if (plVar4 != (longlong *)0x0) {
            iVar6 = (int)plVar4[1];
            do {
              if (iVar6 == 0) goto LAB_1402a1c52;
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar9 = iVar6 == iVar5;
              if (bVar9) {
                *(int *)(plVar4 + 1) = iVar6 + 1;
                iVar5 = iVar6;
              }
              iVar6 = iVar5;
              UNLOCK();
            } while (!bVar9);
            if (*plVar7 != 0) {
              piVar1 = (int *)(*plVar7 + 0x60);
              *piVar1 = *piVar1 + 1;
            }
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
LAB_1402a1c52:
          plVar7 = plVar7 + 2;
          iVar6 = local_30;
        } while (plVar7 != plVar8);
      }
      FUN_14068ce29(local_38,iVar6);
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = *(int *)(param_1 + 0x12);
      if (0 < iVar6) {
        local_38 = (longlong *)0x0;
        uVar3 = param_1[0x11];
        local_30 = iVar6;
        FUN_147d6184c(&local_38,iVar6);
        FUN_147d618a2(local_38,uVar3,iVar6);
        if ((longlong)local_30 == 0) {
          iVar6 = 0;
        }
        else {
          plVar8 = local_38 + (longlong)local_30 * 2;
          plVar7 = local_38;
          do {
            plVar4 = (longlong *)plVar7[1];
            if (plVar4 != (longlong *)0x0) {
              iVar6 = (int)plVar4[1];
              do {
                if (iVar6 == 0) goto LAB_1402a1d0d;
                LOCK();
                iVar5 = (int)plVar4[1];
                bVar9 = iVar6 == iVar5;
                if (bVar9) {
                  *(int *)(plVar4 + 1) = iVar6 + 1;
                  iVar5 = iVar6;
                }
                iVar6 = iVar5;
                UNLOCK();
              } while (!bVar9);
              if (*plVar7 != 0) {
                FUN_147d5da30();
              }
              LOCK();
              plVar2 = plVar4 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
LAB_1402a1d0d:
            plVar7 = plVar7 + 2;
            iVar6 = local_30;
          } while (plVar7 != plVar8);
        }
        FUN_14068ce29(local_38,iVar6);
        if (local_38 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a1d54 FUN_1402a1d54 body=121 status=ok
// SIG undefined FUN_1402a1d54(void)

void FUN_1402a1d54(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1402a1dce();
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a1dce FUN_1402a1dce body=261 status=ok
// SIG undefined FUN_1402a1dce(void)

void FUN_1402a1dce(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)*param_1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    if (cVar4 != '\0') {
      if (DAT_14c761ba8 == 0) {
        if ((int)param_1[1] == 0) {
          param_1 = (longlong *)0x0;
        }
        else {
          param_1 = (longlong *)*param_1;
        }
        (**(code **)(*param_1 + 0x58))();
      }
      else {
        if (DAT_14cb0a380 == 0) {
          lVar5 = FUN_14001cc68(0x90,0x10);
          FUN_1456ed776(lVar5);
          DAT_14cb0a380 = lVar5;
        }
        lVar5 = DAT_14cb0a380;
        local_38 = *param_2;
        local_30 = param_2[1];
        *param_2 = 0;
        param_2[1] = 0;
        FUN_1402a1f86(lVar5,param_1,param_3);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a1ed4 FUN_1402a1ed4 body=178 status=ok
// SIG undefined FUN_1402a1ed4(void)

void FUN_1402a1ed4(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x28),0,0,0x10);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x38),0,0,0x10);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x18),0,0,0x10);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 1402a1f86 FUN_1402a1f86 body=1721 status=ok
// SIG undefined FUN_1402a1f86(void)

void FUN_1402a1f86(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  int iVar27;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  LPCRITICAL_SECTION local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar18 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  uVar23 = *param_4;
  uVar6 = param_4[1];
  if (uVar6 != 0) {
    LOCK();
    *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
    UNLOCK();
  }
  puVar18[4] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  puVar18[6] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(puVar18 + 7) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  puVar18[8] = uVar23;
  puVar18[9] = uVar6;
  *(undefined4 *)(puVar18 + 10) = DAT_14c761ba8;
  local_60 = (LPCRITICAL_SECTION)(param_1 + 0x68);
  EnterCriticalSection(local_60);
  uVar23 = *param_4;
  plVar25 = (longlong *)param_4[1];
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar25 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
  }
  plVar25 = (longlong *)(param_1 + 0x18);
  uVar14 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  iVar16 = *(int *)(param_1 + 0x20);
  if (iVar16 != *(int *)(param_1 + 0x4c)) {
    lVar19 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x58);
    }
    iVar16 = *(int *)(lVar19 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar14) * 4);
    while (iVar16 != -1) {
      uVar23 = *param_4;
      plVar7 = (longlong *)param_4[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar19 = (longlong)iVar16;
      uVar6 = *(ulonglong *)(*plVar25 + lVar19 * 0x28);
      plVar8 = *(longlong **)(*plVar25 + 8 + lVar19 * 0x28);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          local_70 = plVar25;
          local_68 = uVar23;
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          uVar23 = local_68;
          plVar25 = local_70;
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            uVar23 = local_68;
            plVar25 = local_70;
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          local_70 = plVar25;
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar25 = local_70;
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            plVar25 = local_70;
          }
        }
      }
      lVar24 = *plVar25;
      if (uVar6 == uVar23) {
        if (lVar24 + lVar19 * 0x28 != 0) {
          lVar24 = lVar24 + lVar19 * 0x28;
          goto LAB_1402a22d0;
        }
        break;
      }
      iVar16 = *(int *)(lVar24 + 0x20 + lVar19 * 0x28);
    }
    iVar16 = *(int *)(param_1 + 0x4c);
  }
  if (iVar16 == 0) {
    iVar26 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar26 + 1;
    if (*(int *)(param_1 + 0x24) == iVar26) {
      FUN_140549c28(plVar25,iVar26);
    }
    iVar16 = *(int *)(param_1 + 0x40);
    if (iVar16 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar15 = iVar16 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    lVar24 = param_1 + 0x28;
    iVar21 = iVar16 + 1;
    iVar27 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar27 = iVar16;
    }
    if (iVar27 >> 5 == iVar15) {
      *(int *)(param_1 + 0x40) = iVar21;
    }
    else {
      if (*(int *)(param_1 + 0x44) <= iVar16) {
        local_70 = plVar25;
        if (iVar16 + 0x20U < 0xa0) {
          iVar21 = 0x80;
          iVar15 = iVar16;
        }
        else {
          uVar17 = iVar16 + 0x20U >> 5;
          local_68 = (ulonglong)uVar17;
          if (*(int *)(param_1 + 0x44) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar17) {
              uVar22 = uVar17;
            }
          }
          else {
            uVar22 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar22 << 2,0);
          iVar15 = (int)(uVar23 >> 2);
          iVar21 = -0x20;
          if ((int)local_68 <= iVar15) {
            iVar21 = iVar15 << 5;
          }
          iVar15 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x44) = iVar21;
        FUN_1446efbd8(lVar24,iVar15);
        iVar21 = *(int *)(param_1 + 0x40) + 1;
        plVar25 = local_70;
      }
      iVar15 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar15 = iVar21;
      }
      *(int *)(param_1 + 0x40) = iVar21;
      if (iVar21 % 0x20 != 0) {
        lVar19 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar19 = lVar24;
        }
        bVar20 = -(char)(iVar21 % 0x20);
        *(uint *)(lVar19 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)(lVar19 + (longlong)(iVar15 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar26;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x38);
    }
    bVar20 = (byte)iVar16 & 0x1f;
    puVar2 = (uint *)(lVar24 + (longlong)(iVar27 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar26 = *(int *)(param_1 + 0x48);
    lVar19 = (longlong)iVar26;
    iVar15 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar19 * 0x28);
    *(int *)(param_1 + 0x48) = iVar15;
    *(int *)(param_1 + 0x4c) = iVar16 + -1;
    if (iVar16 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar15 * 0x28) = 0xffffffff;
    }
  }
  iVar16 = 1;
  lVar24 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar24 = *(longlong *)(param_1 + 0x38);
  }
  iVar15 = iVar26 + 0x1f;
  if (-1 < iVar26) {
    iVar15 = iVar26;
  }
  puVar2 = (uint *)(lVar24 + (longlong)(iVar15 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar26 & 0x1f);
  puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + lVar19 * 0x28);
  *puVar3 = *param_4;
  uVar23 = param_4[1];
  puVar3[1] = uVar23;
  if (uVar23 != 0) {
    LOCK();
    *(int *)(uVar23 + 8) = *(int *)(uVar23 + 8) + 1;
    UNLOCK();
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c) == 1) {
    uVar17 = 1;
  }
  else {
    local_58 = *puVar3;
    plVar7 = (longlong *)puVar3[1];
    local_70 = plVar25;
    local_50 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      iVar16 = FUN_14068c298(plVar25,uVar14,&local_58);
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      iVar16 = FUN_14068c298(plVar25,uVar14);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar25 = plVar7 + 1;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)*plVar25 == 0) {
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
    if (iVar16 != -1) {
      puVar4 = (undefined4 *)(*local_70 + (longlong)iVar16 * 0x28);
      plVar25 = *(longlong **)(puVar4 + 2);
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar25 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
      }
      plVar25 = local_70;
      uVar23 = *puVar3;
      uVar9 = *(undefined4 *)((longlong)puVar3 + 4);
      uVar6 = puVar3[1];
      uVar10 = *(undefined4 *)((longlong)puVar3 + 0xc);
      uVar11 = *(undefined4 *)((longlong)puVar3 + 0x14);
      uVar13 = puVar3[3];
      uVar12 = *(undefined4 *)((longlong)puVar3 + 0x1c);
      puVar4[4] = (int)puVar3[2];
      puVar4[5] = uVar11;
      puVar4[6] = (int)uVar13;
      puVar4[7] = uVar12;
      *puVar4 = (int)uVar23;
      puVar4[1] = uVar9;
      puVar4[2] = (int)uVar6;
      puVar4[3] = uVar10;
      FUN_14068c6a0(local_70,iVar26);
      goto LAB_1402a22b9;
    }
    uVar17 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
    plVar25 = local_70;
    if (uVar17 < 4) {
      iVar16 = 1;
    }
    else {
      uVar23 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar19 & 0x1f);
    }
  }
  if (((int)uVar17 < 1) || (iVar16 <= *(int *)(param_1 + 0x60))) {
    uVar14 = *(int *)(param_1 + 0x60) - 1U & uVar14;
    *(uint *)((longlong)puVar3 + 0x24) = uVar14;
    lVar19 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar19 = param_1 + 0x50;
    }
    *(undefined4 *)(puVar3 + 4) =
         *(undefined4 *)
          (lVar19 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar14) * 4);
    lVar19 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar19 = param_1 + 0x50;
    }
    *(int *)(lVar19 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar14) * 4) =
         iVar26;
  }
  else {
    *(int *)(param_1 + 0x60) = iVar16;
    FUN_1402a265a(plVar25);
  }
LAB_1402a22b9:
  lVar24 = *plVar25 + (longlong)iVar26 * 0x28;
LAB_1402a22d0:
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 **)(param_1 + 8) = puVar18;
    *puVar18 = 0;
    puVar18[1] = 0;
  }
  else {
    *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8) = puVar18;
    *puVar18 = *(undefined8 *)(param_1 + 0x10);
    puVar18[1] = 0;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar18;
  if (*(longlong *)(lVar24 + 0x18) == 0) {
    *(undefined8 **)(lVar24 + 0x18) = puVar18;
    *(undefined8 **)(lVar24 + 0x10) = puVar18;
    puVar18[2] = 0;
    puVar18[3] = 0;
  }
  else {
    *(undefined8 **)(*(longlong *)(lVar24 + 0x18) + 0x18) = puVar18;
    puVar18[2] = *(undefined8 *)(lVar24 + 0x18);
    puVar18[3] = 0;
    *(undefined8 **)(lVar24 + 0x18) = puVar18;
  }
  LeaveCriticalSection(local_60);
  puVar18 = (undefined8 *)param_4[1];
  if (puVar18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar18 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar18)(puVar18);
      LOCK();
      piVar1 = (int *)((longlong)puVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a265a FUN_1402a265a body=713 status=ok
// SIG undefined FUN_1402a265a(void)

void FUN_1402a265a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    plVar7 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar7;
        lVar12 = *param_1;
        lVar6 = (longlong)iVar11;
        uVar4 = *(ulonglong *)(lVar12 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar12 + 8 + lVar6 * 0x28);
        local_84 = iVar16;
        local_70 = uVar10;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            local_80 = plVar13;
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar13 = local_80;
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              plVar13 = local_80;
            }
          }
        }
        lVar12 = lVar12 + lVar6 * 0x28;
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar16 = (int)uVar10;
        *(int *)(lVar12 + 0x24) = iVar16;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        *(undefined4 *)(lVar12 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar13;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar11;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar7 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar7 = local_78;
        }
        iVar3 = (int)local_78[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar16 = local_84;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar8 <= iVar11) break;
          lVar6 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar6 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar9 - lVar12 == lVar6) goto LAB_1402a28fc;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar11 + (int)lVar6 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar4 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar7 = local_78;
      } while (iVar11 < iVar3);
    }
  }
LAB_1402a28fc:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a2924 FUN_1402a2924 body=296 status=ok
// SIG undefined FUN_1402a2924(void)

void FUN_1402a2924(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar4 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (param_2 < 0xfff) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
      }
      else {
        if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402a2985;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
    }
  }
LAB_1402a2985:
  iVar3 = (int)(uVar4 >> 3);
  iVar7 = 0x7fffffff;
  if ((int)param_2 <= iVar3) {
    iVar7 = iVar3;
  }
  if (iVar7 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar7;
  FUN_1402a2a4c(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1402a2a4c FUN_1402a2a4c body=132 status=ok
// SIG undefined FUN_1402a2a4c(void)

void FUN_1402a2a4c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1402a2ad0 FUN_1402a2ad0 body=483 status=ok
// SIG undefined FUN_1402a2ad0(void)

undefined8 * FUN_1402a2ad0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1402a2b12;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar5 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar5,puVar7,(longlong)iVar2 << 2);
LAB_1402a2b12:
  *(int *)(param_1 + 9) = iVar2;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_1402a2cb4(param_1,(ulonglong)uVar3);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
    FUN_1406a7630(param_1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar6 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    puVar5 = (undefined8 *)param_2[4];
    if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
      puVar5 = param_2 + 2;
    }
    puVar7 = param_1 + 2;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[4];
    }
    memcpy(puVar7,puVar5,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar3) {
    puVar9 = (undefined4 *)*param_1;
    puVar10 = (undefined4 *)*param_2;
    uVar8 = 0;
    do {
      puVar5 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar5 = param_2 + 2;
      }
      if ((*(uint *)((longlong)puVar5 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
          == 0) {
        *puVar9 = *puVar10;
        puVar9[1] = puVar10[1];
      }
      else {
        FUN_14740f91a(puVar9,puVar10);
        *(undefined8 *)(puVar9 + 0x16) = *(undefined8 *)(puVar10 + 0x16);
        *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(puVar10 + 0x18);
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 0x1a;
      puVar9 = puVar9 + 0x1a;
    } while (uVar3 != uVar8);
  }
  return param_1;
}



// FUNCTION 1402a2cb4 FUN_1402a2cb4 body=374 status=ok
// SIG undefined FUN_1402a2cb4(void)

void FUN_1402a2cb4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_145711c9a((longlong)iStack_54 * 0x68 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a2e2c FUN_1402a2e2c body=972 status=ok
// SIG undefined FUN_1402a2e2c(void)

void FUN_1402a2e2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  while( true ) {
    FUN_1402a31f8(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
    *(undefined1 *)(param_1 + 0x189) = *(undefined1 *)(param_2 + 0x189);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      FUN_14008b684(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x30);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      FUN_1402a3596(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_2 + 0x40);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x44) < iVar2) {
      FUN_14479f570(param_1 + 0x38);
    }
    uVar5 = (longlong)*(int *)(param_2 + 0x60) - (longlong)*(int *)(param_2 + 0x8c);
    uVar4 = (uint)uVar5;
    if ((uint)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c)) < uVar4) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar5);
      }
      FUN_146ded982(param_1 + 0x58,uVar5 & 0xffffffff);
      iVar2 = 1;
      if (3 < uVar4) {
        uVar4 = (uVar4 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(param_1 + 0xa0) < iVar2)) {
        *(int *)(param_1 + 0xa0) = iVar2;
        FUN_146dedb2e(param_1 + 0x58);
      }
    }
    iVar2 = *(int *)(param_2 + 0xb0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xb4) < iVar2) {
      FUN_14481578e(param_1 + 0xa8);
    }
    iVar2 = *(int *)(param_2 + 0xc0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xc4) < iVar2) {
      FUN_14481578e(param_1 + 0xb8);
    }
    iVar2 = *(int *)(param_2 + 0x118);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x11c) < iVar2) {
      FUN_14479f570(param_1 + 0x110);
    }
    iVar2 = *(int *)(param_2 + 0x128);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 300) < iVar2) {
      FUN_14008b768(param_1 + 0x120);
    }
    iVar2 = *(int *)(param_2 + 0x198);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x19c) < iVar2) {
      FUN_14481578e(param_1 + 400);
    }
    iVar2 = *(int *)(param_2 + 0x1a8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1ac) < iVar2) {
      FUN_14481578e(param_1 + 0x1a0);
    }
    iVar2 = *(int *)(param_2 + 0x1b8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1bc) < iVar2) {
      FUN_146dedcd2(param_1 + 0x1b0);
    }
    iVar2 = *(int *)(param_2 + 0x1c8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1cc) < iVar2) {
      FUN_14481578e(param_1 + 0x1c0);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar3 = *(longlong *)(param_1 + 200);
    if (*(longlong *)(param_2 + 200) == 0) {
      *(undefined8 *)(param_1 + 200) = 0;
      if (lVar3 == 0) {
        return;
      }
      FUN_140d9df70(lVar3);
      FUN_1400020a8(lVar3);
      return;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1e0,0x10);
      FUN_14008b51a(lVar3);
      lVar1 = *(longlong *)(param_1 + 200);
      *(longlong *)(param_1 + 200) = lVar3;
      if (lVar1 != 0) {
        FUN_140d9df70(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(param_1 + 200);
      }
    }
    param_2 = *(longlong *)(param_2 + 200);
    param_1 = lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 1402a31f8 FUN_1402a31f8 body=806 status=ok
// SIG undefined FUN_1402a31f8(void)

void FUN_1402a31f8(longlong param_1)

{
  int iVar1;
  
  do {
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14008b684(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    FUN_144936aaa(param_1 + 0x20);
    if (*(int *)(param_1 + 0x44) < 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_14479f570(param_1 + 0x38,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    FUN_1402a3552(param_1 + 0x58);
    if (*(int *)(param_1 + 0xb4) < 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      FUN_14481578e(param_1 + 0xa8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int *)(param_1 + 0xc4) < 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      FUN_14481578e(param_1 + 0xb8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined8 *)(param_1 + 0xfc) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    if (*(int *)(param_1 + 0x11c) < 0) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      FUN_14479f570(param_1 + 0x110,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    if (*(int *)(param_1 + 300) < 0) {
      *(undefined4 *)(param_1 + 0x128) = 0;
      FUN_14008b768(param_1 + 0x120,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    if (*(int *)(param_1 + 0x19c) < 0) {
      *(undefined4 *)(param_1 + 0x198) = 0;
      FUN_14481578e(param_1 + 400,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
    if (*(int *)(param_1 + 0x1ac) < 0) {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      FUN_14481578e(param_1 + 0x1a0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    if (*(int *)(param_1 + 0x1bc) < 0) {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
      FUN_146dedcd2(param_1 + 0x1b0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b8) = 0;
    }
    if (*(int *)(param_1 + 0x1cc) < 0) {
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      FUN_14481578e(param_1 + 0x1c0,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1c8) = 0;
    }
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined8 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    if (*(int *)(param_1 + 0x164) < 0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      FUN_14481578e(param_1 + 0x158,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
    if (*(int *)(param_1 + 0x174) < 0) {
      *(undefined4 *)(param_1 + 0x170) = 0;
      FUN_14481578e(param_1 + 0x168,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x170) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x184);
    FUN_1402a351e(*(undefined8 *)(param_1 + 0x178));
    *(undefined4 *)(param_1 + 0x180) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x184) != 0)) {
      FUN_145716a52(param_1 + 0x178);
    }
    *(undefined1 *)(param_1 + 0x189) = 1;
    *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1 = *(longlong *)(param_1 + 200);
  } while (param_1 != 0);
  return;
}



// FUNCTION 1402a351e FUN_1402a351e body=52 status=ok
// SIG undefined FUN_1402a351e(void)

void FUN_1402a351e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402a3552 FUN_1402a3552 body=68 status=ok
// SIG undefined FUN_1402a3552(void)

void FUN_1402a3552(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146dee1ea();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1402a3596 FUN_1402a3596 body=332 status=ok
// SIG undefined FUN_1402a3596(void)

void FUN_1402a3596(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1402a3604;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1402a3604:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x48,8);
  }
  return;
}



// FUNCTION 1402a36e2 FUN_1402a36e2 body=154 status=ok
// SIG undefined FUN_1402a36e2(void)

void FUN_1402a36e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447c0e7a();
  FUN_1402a37f2(param_1,0);
  FUN_140388f74(param_1);
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_1402a3786(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),1);
    if (*(char *)(param_1 + 0x798) == '\0') {
      FUN_1402a3992(*(undefined8 *)(param_1 + 0x760));
      *(undefined8 *)(param_1 + 0x760) = 0;
      plVar3 = *(longlong **)(param_1 + 0x768);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x768) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001402a3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1402a377c FUN_1402a377c body=9 status=ok
// SIG undefined FUN_1402a377c(void)

void FUN_1402a377c(longlong param_1)

{
  FUN_1402a38a8(param_1 + 0x10);
  return;
}



// FUNCTION 1402a3786 FUN_1402a3786 body=107 status=ok
// SIG undefined FUN_1402a3786(void)

void FUN_1402a3786(longlong param_1,char param_2)

{
  *(undefined1 *)(param_1 + 10) = 3;
  if (param_2 == '\0') {
    if ((*(int *)(param_1 + 0x868) != 1) && (*(int *)(param_1 + 0x868) != 4)) {
      *(undefined4 *)(param_1 + 0x868) = 1;
    }
  }
  else {
    FUN_140336cb8(param_1,0);
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      FUN_14005a35e(param_1,1);
    }
    if (1 < *(int *)(param_1 + 0x86c) - 3U) {
      FUN_143ac678c(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1402a37f2 FUN_1402a37f2 body=182 status=ok
// SIG undefined FUN_1402a37f2(void)

void FUN_1402a37f2(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xef | param_2 << 4;
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001402a38a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,1);
    return;
  }
  uVar6 = (uint)uVar1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
    puVar3 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar3 = DAT_14c998080;
    }
    if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
      lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
      puVar4 = *(uint **)(lVar2 + 0x18);
      if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
        puVar4 = (uint *)(lVar2 + 8);
      }
      *puVar4 = *puVar4 | 2;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 1402a38a8 FUN_1402a38a8 body=234 status=ok
// SIG undefined FUN_1402a38a8(void)

void FUN_1402a38a8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14adc1500;
  FUN_1402a3992();
  plVar3 = param_1 + 10;
  if (*(int *)(param_1 + 0xb) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1402a38d6;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1402a38d6:
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402a3984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1402a3992 FUN_1402a3992 body=83 status=ok
// SIG undefined FUN_1402a3992(void)

void FUN_1402a3992(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1402a39e6(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x50),0,0,0x10);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}



// FUNCTION 1402a39e6 FUN_1402a39e6 body=408 status=ok
// SIG undefined FUN_1402a39e6(void)

undefined8 FUN_1402a39e6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    plVar3 = *(longlong **)(lVar7 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar7 = *param_1;
    }
    if (*(int *)(lVar7 + 0x18) != -1) {
      FUN_140336ad0(uVar6);
      lVar7 = *param_1;
    }
    FUN_1403899a2(lVar7,0);
    lVar7 = *param_1;
    lVar4 = *(longlong *)(lVar7 + 0x878);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar7 + 0x878) = 0;
      FUN_143ac50bc(lVar4,*(undefined8 *)(*param_1 + 0x870),1);
      lVar7 = *param_1;
    }
    uVar6 = FUN_1400bd118(*(undefined8 *)(lVar7 + 0x30));
    *(undefined8 *)(lVar7 + 0x40) = 0;
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x120) != 0) {
      puVar5 = *(undefined8 **)(lVar7 + 0x118);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,0);
        FUN_1446efa72((longlong *)(lVar7 + 0x118),0,0,0x10);
        *(undefined4 *)(lVar7 + 0x120) = 0;
        lVar7 = *param_1;
      }
    }
    if (*(int *)(lVar7 + 0x130) != 0) {
      puVar5 = *(undefined8 **)(lVar7 + 0x128);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,0);
        FUN_1446efa72((longlong *)(lVar7 + 0x128),0,0,0x10);
        *(undefined4 *)(lVar7 + 0x130) = 0;
      }
    }
    FUN_1402a3b7e(uVar6,param_1);
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
  }
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
  return 1;
}



// FUNCTION 1402a3b7e FUN_1402a3b7e body=88 status=ok
// SIG undefined FUN_1402a3b7e(void)

void FUN_1402a3b7e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b98);
  *(uint *)(param_1 + 0x1b98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1b9c) < iVar1 + 1U) {
    FUN_1402a3bd6((longlong *)(param_1 + 0x1b90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1b90);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1402a3bd6 FUN_1402a3bd6 body=269 status=ok
// SIG undefined FUN_1402a3bd6(void)

void FUN_1402a3bd6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402a3ce4 FUN_1402a3ce4 body=409 status=ok
// SIG undefined FUN_1402a3ce4(void)

void FUN_1402a3ce4(longlong param_1,double *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  double **local_48;
  double *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((lVar3 != 0) && (*(byte *)(lVar3 + 0x90) != 0)) {
    uVar9 = param_3 & 0xffffffff;
    if ((1 < *(byte *)(lVar3 + 0x90)) &&
       ((uVar9 = param_3 & 0xffffffff, (char)param_3 != '\0' &&
        (uVar9 = CONCAT71((int7)(uVar9 >> 8),1), *(char *)(lVar3 + 0x1ac) == '\x01')))) {
      if ((9.999999747378752e-05 < ABS(*param_2)) ||
         ((9.999999747378752e-05 < ABS(param_2[1]) || (9.999999747378752e-05 < ABS(param_2[2]))))) {
        FUN_144a05e16(lVar3,4,1,1);
      }
    }
    local_48 = &local_38;
    local_38 = param_2;
    FUN_1402a3e7e(lVar3 + 0x98,uVar9,lVar3 + 0x94,*(undefined8 *)(lVar3 + 0x10));
  }
  if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
    if ((param_2[2] == 0.0) && (!NAN(param_2[2]))) {
      FUN_1449a414e(param_1,*(longlong *)(param_1 + 0x40) + 0x20,param_3 & 0xffffffff);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78);
  }
  *(double *)(lVar3 + 0x70) = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)param_2;
  *(undefined4 *)(lVar3 + 100) = uVar5;
  *(undefined4 *)(lVar3 + 0x68) = uVar6;
  *(undefined4 *)(lVar3 + 0x6c) = uVar7;
  *(undefined4 *)(lVar3 + 0x78) = uVar8;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a3e7e FUN_1402a3e7e body=274 status=ok
// SIG undefined FUN_1402a3e7e(void)

void FUN_1402a3e7e(float *param_1,char param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  pdVar7 = (double *)*param_5;
  dVar3 = pdVar7[2];
  dVar4 = pdVar7[1];
  *param_1 = (float)*pdVar7;
  param_1[1] = (float)dVar4;
  param_1[2] = (float)dVar3;
  if (((param_2 != '\0') && (*param_3 = *param_3 | 2, param_4 != 0)) &&
     (lVar8 = *(longlong *)(param_4 + 8), lVar8 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      if (*(int *)(param_4 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar8 + 0x98);
        uVar5 = *(uint *)(param_4 + 0x1c);
        piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar5 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar5 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(param_4 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar10 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar10) = param_4;
        *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001402a3eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      return;
    }
    FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,param_4);
    return;
  }
  return;
}



// FUNCTION 1402a3f9e FUN_1402a3f9e body=79 status=ok
// SIG undefined FUN_1402a3f9e(void)

void FUN_1402a3f9e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402a3fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4,*(code **)(*param_2 + 0x170));
    return;
  }
  thunk_FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 1402a3fee FUN_1402a3fee body=131 status=ok
// SIG undefined FUN_1402a3fee(void)

undefined8 FUN_1402a3fee(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9512a8) {
    FUN_144b3d300(&DAT_14c9512a8);
    if (DAT_14c9512a8 == -1) {
      uVar1 = FUN_14001cc68(0x1f0,0x10);
      FUN_1456ed7e0(uVar1);
      DAT_14c9512a0 = uVar1;
      atexit((_func_5014 *)&LAB_1428045c0);
      _Init_thread_footer(&DAT_14c9512a8);
    }
  }
  return DAT_14c9512a0;
}



// FUNCTION 1402a4072 FUN_1402a4072 body=343 status=ok
// SIG undefined FUN_1402a4072(void)

void FUN_1402a4072(longlong param_1)

{
  longlong lVar1;
  DWORD DVar2;
  DWORD dwTlsIndex;
  DWORD DVar3;
  LPVOID lpTlsValue;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    UNLOCK();
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    FUN_1468b6e08(param_1 + 0x170,&local_40);
    FUN_1468bcfae(param_1 + 0x170,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    dwTlsIndex = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar3 = 0xffffffff;
      LOCK();
      bVar5 = DAT_14c75ec34 != 0xffffffff;
      DVar2 = dwTlsIndex;
      if (bVar5) {
        DVar3 = DAT_14c75ec34;
        DVar2 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar2;
      UNLOCK();
      if (bVar5) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar3;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    *(undefined1 *)((longlong)lpTlsValue + 0x21) = 1;
    if (local_38 != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(local_40 + lVar4);
        if (lVar1 != 0) {
          FUN_1427f9dce(lVar1);
          FUN_1400020a8(lVar1);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)local_38 * 8 != lVar4);
    }
    *(undefined1 *)((longlong)lpTlsValue + 0x21) = 0;
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a41d0 FUN_1402a41d0 body=57 status=ok
// SIG undefined FUN_1402a41d0(void)

void FUN_1402a41d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab898 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab898 = FUN_140002ddd(FUN_1465de271,uVar1,L"OakInteractiveObjectBodySettings");
  }
  return;
}



// FUNCTION 1402a420a FUN_1402a420a body=152 status=ok
// SIG undefined FUN_1402a420a(void)

void FUN_1402a420a(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0) != 0;
  }
  if ((*(byte *)(param_1 + 0xa4) & 2) == 0) {
    FUN_1402a434a(param_1,1);
    FUN_1402a42a2(param_1 + 0x1cf8);
  }
  lVar1 = *(longlong *)(param_1 + 0x1d50);
  if ((!(bool)(bVar2 | lVar1 == 0)) && ((*(byte *)(param_1 + 0xa4) & 4) == 0)) {
    if (0 < *(int *)(lVar1 + 0x50)) {
      *(int *)(lVar1 + 0x1200) = *(int *)(lVar1 + 0x1200) + *(int *)(lVar1 + 0x50);
      *(double *)(lVar1 + 0x1208) = *(double *)(lVar1 + 0x58) + *(double *)(lVar1 + 0x1208);
    }
    *(undefined1 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1402a42a2 FUN_1402a42a2 body=168 status=ok
// SIG undefined FUN_1402a42a2(void)

void FUN_1402a42a2(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
  iVar3 = *(int *)(param_1 + 0x10) + *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4) + *(uint *)(param_1 + 8);
  if (iVar3 != 0 || iVar2 != 0) {
    bVar1 = *param_1;
    if (((bVar1 & 1) == 0) && (0 < DAT_14c761610)) {
      fVar4 = 0.0;
      if (0.0 < DAT_14c761614) {
        if (iVar3 < 1) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (float)*(uint *)(param_1 + 0xc) / (float)iVar3;
        }
        if (0 < iVar2) {
          fVar4 = (float)*(uint *)(param_1 + 8) / (float)iVar2;
        }
        bVar1 = (bVar1 & 0xfe) - (-(DAT_14c761614 <= fVar4) | -(DAT_14c761614 <= fVar5));
      }
    }
    if ((bVar1 & 1) != 0) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    *param_1 = bVar1 & 0xfe;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    return;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}



// FUNCTION 1402a434a FUN_1402a434a body=220 status=ok
// SIG undefined FUN_1402a434a(void)

void FUN_1402a434a(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((char)param_1[0x399] == '\x01') {
    iVar5 = *(int *)((longlong)param_1 + 0x1cd4);
    if (0 < iVar5) {
      uVar6 = *(uint *)(param_1 + 0x39a);
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x396);
      lVar1 = *(longlong *)
               (param_1[0x397] + (longlong)(int)(uVar6 - 1 & *(uint *)(param_1 + 0x396)) * 8);
      *(undefined1 *)(param_1 + 0x3a5) = 1;
      do {
        lVar2 = param_1[0x397];
        lVar8 = (longlong)(int)(uVar6 & (uint)uVar7);
        lVar3 = *(longlong *)(lVar2 + lVar8 * 8);
        if (lVar3 == 0) {
          if (lVar1 == 0 && param_2 == '\0') break;
        }
        else {
          (**(code **)(*param_1 + 0x3a0))(param_1,lVar3,CONCAT71((int7)(uVar7 >> 8),1),1);
          puVar4 = *(undefined8 **)(lVar2 + lVar8 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + lVar8 * 8) = 0;
            (**(code **)*puVar4)(puVar4,1);
          }
          iVar5 = *(int *)((longlong)param_1 + 0x1cd4) + -1;
          *(int *)((longlong)param_1 + 0x1cd4) = iVar5;
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x396);
          uVar6 = *(uint *)(param_1 + 0x39a);
        }
        uVar6 = uVar6 + 1 & (uint)uVar7;
        *(uint *)(param_1 + 0x39a) = uVar6;
      } while (0 < iVar5);
      *(undefined1 *)(param_1 + 0x3a5) = 0;
    }
  }
  return;
}



// FUNCTION 1402a4426 FUN_1402a4426 body=38 status=ok
// SIG undefined FUN_1402a4426(void)

undefined8
FUN_1402a4426(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1402a444c(param_2,param_1,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1402a444c FUN_1402a444c body=110 status=ok
// SIG undefined FUN_1402a444c(void)

undefined8 FUN_1402a444c(undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_1402a453c(param_2);
    iVar1 = *param_2;
  }
  FUN_1402a44ba(DAT_14c9a3d60 + (longlong)iVar1 * 0x88 + -0x88,param_1,param_3,param_4);
  FUN_14020a6cc(param_2,1);
  return param_1;
}



// FUNCTION 1402a44ba FUN_1402a44ba body=130 status=ok
// SIG undefined FUN_1402a44ba(void)

undefined1 *
FUN_1402a44ba(longlong param_1,undefined1 *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = DAT_14c9a3d98;
  DAT_14c9a3d98 = DAT_14c9a3d98 + 1;
  iVar1 = *(int *)(param_1 + 0x68);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x68) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
    FUN_1456ed98e(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar3 = param_1;
  }
  *(undefined1 *)(lVar3 + lVar4 * 0xc) = param_3;
  *(undefined4 *)(lVar3 + 4 + lVar4 * 0xc) = param_4;
  *(int *)(lVar3 + 8 + lVar4 * 0xc) = iVar2;
  *param_2 = 1;
  *(int *)(param_2 + 4) = iVar2;
  return param_2;
}



// FUNCTION 1402a453c FUN_1402a453c body=210 status=ok
// SIG undefined FUN_1402a453c(void)

void FUN_1402a453c(int *param_1)

{
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_40 = 0x800000000;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 2;
  FUN_1402a48da(&DAT_14c9a3d60,local_b8);
  FUN_1402a4610(local_b0,&local_a8);
  *param_1 = local_b8[0] + 1;
  FUN_144760e21(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a4610 FUN_1402a4610 body=88 status=ok
// SIG undefined FUN_1402a4610(void)

longlong FUN_1402a4610(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x800000000;
  FUN_1402a4668();
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 2;
  if (param_2 != param_1) {
    FUN_1402a4744(param_1 + 0x70,param_2 + 0x70);
  }
  return param_1;
}



// FUNCTION 1402a4668 FUN_1402a4668 body=107 status=ok
// SIG undefined FUN_1402a4668(void)

void * FUN_1402a4668(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x60);
    if (*(void **)((longlong)param_2 + 0x60) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x68);
    *(int *)((longlong)param_1 + 0x68) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 8;
    }
    else {
      FUN_1402a46d4(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x60);
        if (*(void **)((longlong)param_1 + 0x60) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1402a46d4 FUN_1402a46d4 body=112 status=ok
// SIG undefined FUN_1402a46d4(void)

void FUN_1402a46d4(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 8, 8 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1402a4ac6(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x6c) = param_3;
  return;
}



// FUNCTION 1402a4744 FUN_1402a4744 body=404 status=ok
// SIG undefined FUN_1402a4744(void)

/* WARNING: Removing unreachable block (ram,0x0001402a48d2) */

void FUN_1402a4744(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a48da FUN_1402a48da body=491 status=ok
// SIG undefined FUN_1402a48da(void)

int * FUN_1402a48da(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1401600aa(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x88);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x88) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 1402a4ac6 FUN_1402a4ac6 body=139 status=ok
// SIG undefined FUN_1402a4ac6(void)

void FUN_1402a4ac6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0xc);
  return;
}



// FUNCTION 1402a4b52 FUN_1402a4b52 body=486 status=ok
// SIG undefined FUN_1402a4b52(void)

void FUN_1402a4b52(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  if ((int)param_1[9] != 0x200) {
    FUN_1402a4d52(param_1,0x200);
    *(undefined4 *)(param_1 + 9) = 0x200;
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_14015b338(param_1);
    return;
  }
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < 0x80) {
    puVar1 = (uint *)(param_1 + 2);
    iVar2 = (int)param_1[5];
    local_4c = 1;
    if (iVar2 == 0) {
      local_38 = 0;
      local_50 = 0;
      local_3c = 0;
    }
    else {
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      uVar6 = *puVar4;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar9 = 0;
        uVar8 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar8 = uVar9;
        }
        local_50 = (int)uVar8 + 1;
        local_38 = (int)uVar8 * 0x20 + 0x20;
        iVar7 = 0;
        do {
          local_3c = iVar2;
          if (uVar8 == uVar9) goto LAB_1402a4c3a;
          iVar7 = iVar7 + 0x20;
          uVar6 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar6 == 0);
        local_50 = (int)uVar9;
        local_38 = iVar7;
      }
      else {
        local_38 = 0;
        local_50 = 0;
      }
      local_4c = -uVar6 & uVar6;
      uVar8 = (ulonglong)local_4c * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
      if (iVar2 <= local_3c) {
        local_3c = iVar2;
      }
    }
LAB_1402a4c3a:
    local_40 = 0xffffffff;
    local_58 = param_1;
    local_48 = puVar1;
    if (local_3c != iVar2) {
      do {
        do {
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_58 + 0x14 + (longlong)local_3c * 0x18) * 4)
               = 0xffffffff;
          local_40 = local_40 & ~local_4c;
          FUN_1449c0562(&local_50);
        } while (local_3c != iVar2);
      } while ((local_48 != puVar1) || (local_58 != param_1));
    }
  }
  else {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1402a4d52 FUN_1402a4d52 body=117 status=ok
// SIG undefined FUN_1402a4d52(void)

void FUN_1402a4d52(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1402a4dc8 FUN_1402a4dc8 body=273 status=ok
// SIG undefined FUN_1402a4dc8(void)

undefined8 *
FUN_1402a4dc8(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4,
             undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  uVar3 = param_4[5];
  uVar4 = param_4[6];
  uVar5 = param_4[7];
  *(undefined4 *)(param_2 + 2) = param_4[4];
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  *(undefined4 *)param_2 = uVar8;
  *(undefined4 *)((longlong)param_2 + 4) = uVar9;
  *(undefined4 *)(param_2 + 1) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar11;
  lVar6 = param_3[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_3;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar7) != 0) {
        local_a8 = *(undefined4 *)param_2;
        uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_a0 = *(undefined4 *)(param_2 + 1);
        uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_98 = *(undefined4 *)(param_2 + 2);
        uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_90 = *(undefined4 *)(param_2 + 3);
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_b8 = param_5;
        FUN_1403e80f4(*(longlong *)(lVar2 + lVar7),local_80,param_1,&local_a8);
        bVar1 = *(byte *)(param_4 + 6);
        if (bVar1 < 2) {
          uVar8 = 0;
          uVar9 = 0;
LAB_1402a4e79:
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          uVar8 = (undefined4)local_80[1];
          uVar9 = (undefined4)((ulonglong)local_80[1] >> 0x20);
          if (bVar1 == 2) goto LAB_1402a4e79;
          uVar10 = (undefined4)local_80[2];
          uVar11 = (undefined4)((ulonglong)local_80[2] >> 0x20);
        }
        *param_2 = local_80[0];
        param_2[1] = CONCAT44(uVar9,uVar8);
        param_2[2] = CONCAT44(uVar11,uVar10);
        *(byte *)(param_2 + 3) = bVar1;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a4eda FUN_1402a4eda body=676 status=ok
// SIG undefined FUN_1402a4eda(void)

longlong * FUN_1402a4eda(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    param_2 = *param_1;
  }
  *(undefined4 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar8 = DAT_14c8464e8;
  param_1[7] = DAT_14c8464e0;
  param_1[8] = lVar8;
  param_1[9] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  bVar2 = *(byte *)(param_2 + 0x48);
  if (bVar2 < 2) {
    lVar8 = 0;
  }
  else {
    lVar8 = DAT_14c8464e8;
    lVar7 = DAT_14c8464f0;
    if (bVar2 != 2) goto LAB_1402a4f5e;
  }
  lVar7 = 0;
LAB_1402a4f5e:
  param_1[7] = DAT_14c8464e0;
  param_1[8] = lVar8;
  param_1[9] = lVar7;
  *(byte *)(param_1 + 10) = bVar2;
  iVar3 = *(int *)(param_2 + 0x58);
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      plVar1 = param_1 + 3;
      FUN_1402a5fa6(plVar1,iVar3);
      param_2 = *param_1;
      iVar3 = *(int *)(param_2 + 0x58);
      if ((longlong)iVar3 != 0) {
        lVar8 = *(longlong *)(param_2 + 0x50);
        lVar7 = 0;
        do {
          lVar6 = *(longlong *)(lVar8 + lVar7);
          if (lVar6 != 0) {
            uVar5 = FUN_1402a5ec8();
            uVar5 = FUN_14092e86f(uVar5);
            lVar6 = FUN_14092e7b3(lVar6,uVar5,0,0xffffffff,0,0,0xfff00007);
            if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
            iVar4 = (int)param_1[4];
            *(uint *)(param_1 + 4) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x24) < iVar4 + 1U) {
              FUN_14181c0b2(plVar1,iVar4);
            }
            *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar6;
            if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar3 * 8 != lVar7);
        param_2 = *param_1;
      }
    }
    iVar3 = *(int *)(param_2 + 0x68);
    if ((longlong)iVar3 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x60);
      lVar7 = 0;
      do {
        lVar6 = *(longlong *)(lVar8 + lVar7);
        if (lVar6 != 0) {
          uVar5 = FUN_1402a60e2();
          uVar5 = FUN_14092e86f(uVar5);
          lVar6 = FUN_14092e7b3(lVar6,uVar5,0,0xffffffff,0,0,0xfff00007);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          iVar4 = (int)param_1[6];
          *(uint *)(param_1 + 6) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x34) < iVar4 + 1U) {
            FUN_1402a61c0(param_1 + 5,iVar4);
          }
          *(longlong *)(param_1[5] + (longlong)iVar4 * 8) = lVar6;
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar3 * 8 != lVar7);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1402a517e FUN_1402a517e body=385 status=ok
// SIG undefined FUN_1402a517e(void)

undefined4 * FUN_1402a517e(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402a5b14(param_1,local_40);
  uVar6 = *param_3;
  *local_38 = uVar6;
  if ((uVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar6);
    uVar6 = *local_38;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  if (((bVar1 & 1) != 0) && (uVar6 != 0)) {
    FUN_1456cec3c(uVar6);
  }
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = 0;
  cVar3 = FUN_1402a5300(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0xc) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1402a6322(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a5300 FUN_1402a5300 body=307 status=ok
// SIG undefined FUN_1402a5300(void)

void FUN_1402a5300(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = (int)param_1[1];
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  if (iVar7 - iVar6 != 1) {
    lVar1 = *param_3;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      iVar7 = (int)param_1[1];
      iVar6 = *(int *)((longlong)param_1 + 0x34);
    }
    if (iVar7 != iVar6) {
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      bVar5 = DAT_14c950c29;
      if (iVar7 != -1) {
        do {
          if ((lVar1 != 0 & bVar5) == 1) {
            FUN_1456cec3c(lVar1);
            bVar5 = DAT_14c950c29;
          }
          lVar8 = (longlong)iVar7 * 0x10;
          lVar2 = *(longlong *)(*param_1 + lVar8);
          if (((bVar5 & 1) != 0) && (lVar2 != 0)) {
            FUN_1456cec3c(lVar2);
            bVar5 = DAT_14c950c29;
          }
          if ((lVar1 != 0 & bVar5) == 1) {
            FUN_1456cec3c(lVar1);
            bVar5 = DAT_14c950c29;
          }
          if (lVar2 == lVar1) {
            *(longlong *)(*param_1 + lVar8) = *param_3;
            FUN_1402a5de0(param_1,*param_4);
            *param_4 = iVar7;
            uVar3 = 1;
            break;
          }
          iVar7 = *(int *)(*param_1 + 8 + lVar8);
          uVar3 = 0;
        } while (iVar7 != -1);
        goto LAB_1402a536e;
      }
    }
  }
  uVar3 = 0;
LAB_1402a536e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1402a5434 FUN_1402a5434 body=478 status=ok
// SIG undefined FUN_1402a5434(void)

undefined1
FUN_1402a5434(undefined1 *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  ulonglong unaff_RBP;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = param_3[1];
  local_c0 = param_2;
  if ((longlong)(int)lVar10 != 0) {
    lVar1 = *param_3;
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar17);
      if (plVar2 != (longlong *)0x0) {
        param_1[2] = 1;
        local_b8 = *param_4;
        uStack_b4 = param_4[1];
        uStack_b0 = param_4[2];
        uStack_ac = param_4[3];
        local_a8 = param_4[4];
        uStack_a4 = param_4[5];
        uStack_a0 = param_4[6];
        uStack_9c = param_4[7];
        uVar15 = FUN_14477b072(plVar2,DAT_14cb27498);
        lVar16 = FUN_14570ab3e(uVar15);
        if ((*(byte *)(lVar16 + 0xd4) & 0x80) == 0) {
          local_6c = 0;
          local_98 = local_c0;
          uStack_80 = local_a8;
          uStack_7c = uStack_a4;
          uStack_78 = uStack_a0;
          uStack_74 = uStack_9c;
          uStack_90 = local_b8;
          uStack_8c = uStack_b4;
          local_88 = uStack_b0;
          uStack_84 = uStack_ac;
          local_70 = param_5;
          (**(code **)(*plVar2 + 0x248))(plVar2,uVar15,&local_98);
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),local_6c);
        }
        else {
          local_88 = local_a8;
          uStack_84 = uStack_a4;
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
          local_98 = CONCAT44(uStack_b4,local_b8);
          uStack_90 = uStack_b0;
          uStack_8c = uStack_ac;
          uVar14 = (**(code **)(*plVar2 + 0x2a8))(plVar2,local_c0,&local_98,param_5);
          unaff_RBP = (ulonglong)uVar14;
        }
        uVar3 = *param_4;
        uVar4 = param_4[1];
        uVar5 = param_4[2];
        uVar6 = param_4[3];
        uVar7 = param_4[5];
        uVar8 = param_4[6];
        uVar9 = param_4[7];
        *(undefined4 *)(plVar2 + 8) = param_4[4];
        *(undefined4 *)((longlong)plVar2 + 0x44) = uVar7;
        *(undefined4 *)(plVar2 + 9) = uVar8;
        *(undefined4 *)((longlong)plVar2 + 0x4c) = uVar9;
        *(undefined4 *)(plVar2 + 6) = uVar3;
        *(undefined4 *)((longlong)plVar2 + 0x34) = uVar4;
        *(undefined4 *)(plVar2 + 7) = uVar5;
        *(undefined4 *)((longlong)plVar2 + 0x3c) = uVar6;
        cVar11 = FUN_140106e94(plVar2);
        cVar18 = (char)unaff_RBP;
        if (cVar11 == '\x01') {
          param_1[6] = param_1[6] & cVar18 == '\x02';
LAB_1402a5541:
          param_1[3] = param_1[3] | cVar18 != '\0';
        }
        else if (cVar11 == '\0') {
          param_1[5] = 1;
          param_1[4] = param_1[4] | cVar18 == '\x02';
          goto LAB_1402a5541;
        }
        bVar12 = (**(code **)(*plVar2 + 0x2b8))(plVar2,unaff_RBP & 0xffffffff);
        param_1[7] = param_1[7] | bVar12;
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar10 * 8 != lVar17);
  }
  if (param_1[2] == '\x01') {
    if (param_1[7] != '\0') {
      uVar13 = 0;
      goto LAB_1402a55dd;
    }
    if (((param_1[5] != '\x01') || (param_1[4] == '\x01')) && (uVar13 = 2, param_1[6] != '\0'))
    goto LAB_1402a55dd;
    param_1 = param_1 + 3;
  }
  uVar13 = *param_1;
LAB_1402a55dd:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1402a5614 FUN_1402a5614 body=1280 status=ok
// SIG undefined FUN_1402a5614(void)

int * FUN_1402a5614(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_140275bcc(param_1,iVar20);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar14 = iVar17 + -1;
      }
      iVar14 = iVar14 >> 5;
    }
    plVar18 = param_1 + 2;
    iVar15 = iVar17 + 1;
    iVar21 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar21 = iVar17;
    }
    if (iVar21 >> 5 == iVar14) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar14 = iVar17;
        }
        else {
          uVar10 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar10) {
              uVar11 = uVar10;
            }
          }
          else {
            uVar11 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar11 << 2,0);
          iVar14 = (int)(uVar16 >> 2);
          iVar15 = -0x20;
          if ((int)uVar10 <= iVar14) {
            iVar15 = iVar14 << 5;
          }
          iVar14 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar18,iVar14);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar14 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar14 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar18;
        }
        bVar13 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar14 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar17 & 0x1f;
    puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar12 = (longlong)iVar20;
    iVar17 = *(int *)(*param_1 + 4 + lVar12 * 0x70);
    *(int *)(param_1 + 6) = iVar17;
    iVar14 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x70) = 0xffffffff;
    }
  }
  plVar18 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar18 = (longlong *)param_1[4];
  }
  iVar17 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar17 = iVar20;
  }
  puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar17 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
  _Src = (ulonglong *)(*param_1 + lVar12 * 0x70);
  puVar2 = (ulonglong *)param_3[1];
  lVar3 = *(longlong *)*param_3;
  *(longlong *)(*param_1 + lVar12 * 0x70) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar13 = DAT_14c950c29;
  uVar16 = *puVar2;
  _Src[1] = uVar16;
  if ((uVar16 != 0 & bVar13) == 1) {
    FUN_1456cec3c();
    bVar13 = DAT_14c950c29;
  }
  uVar16 = puVar2[2];
  _Src[2] = puVar2[1];
  _Src[3] = uVar16;
  _Src[4] = puVar2[3];
  puVar2[3] = 0;
  *(int *)(_Src + 5) = (int)puVar2[4];
  *(undefined4 *)((longlong)_Src + 0x2c) = *(undefined4 *)((longlong)puVar2 + 0x24);
  puVar2[4] = 0;
  _Src[6] = puVar2[5];
  puVar2[5] = 0;
  *(int *)(_Src + 7) = (int)puVar2[6];
  *(undefined4 *)((longlong)_Src + 0x3c) = *(undefined4 *)((longlong)puVar2 + 0x34);
  puVar2[6] = 0;
  _Src[0xc] = puVar2[0xb];
  uVar16 = puVar2[7];
  uVar5 = *(undefined4 *)((longlong)puVar2 + 0x3c);
  uVar4 = puVar2[8];
  uVar6 = *(undefined4 *)((longlong)puVar2 + 0x44);
  uVar7 = *(undefined4 *)((longlong)puVar2 + 0x4c);
  uVar9 = puVar2[10];
  uVar8 = *(undefined4 *)((longlong)puVar2 + 0x54);
  *(int *)(_Src + 10) = (int)puVar2[9];
  *(undefined4 *)((longlong)_Src + 0x54) = uVar7;
  *(int *)(_Src + 0xb) = (int)uVar9;
  *(undefined4 *)((longlong)_Src + 0x5c) = uVar8;
  *(int *)(_Src + 8) = (int)uVar16;
  *(undefined4 *)((longlong)_Src + 0x44) = uVar5;
  *(int *)(_Src + 9) = (int)uVar4;
  *(undefined4 *)((longlong)_Src + 0x4c) = uVar6;
  *(undefined4 *)(_Src + 0xd) = 0xffffffff;
  uVar16 = *_Src;
  if (((bVar13 & 1) != 0) && (uVar16 != 0)) {
    FUN_1456cec3c(uVar16);
  }
  uVar10 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  iVar17 = (int)param_1[1];
  iVar14 = *(int *)((longlong)param_1 + 0x34);
  iVar15 = iVar17;
  if (iVar17 - iVar14 != 1) {
    uVar16 = *_Src;
    if ((DAT_14c950c29 == 1) && (uVar16 != 0)) {
      FUN_1456cec3c(uVar16);
      iVar17 = (int)param_1[1];
      iVar14 = *(int *)((longlong)param_1 + 0x34);
    }
    iVar15 = iVar14;
    if (iVar17 != iVar14) {
      plVar18 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar18 = (longlong *)param_1[8];
      }
      iVar21 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[9] - 1U & uVar10) * 4);
      iVar15 = iVar17;
      bVar13 = DAT_14c950c29;
      if (iVar21 != -1) {
        do {
          if (((bVar13 & 1) != 0) && (uVar16 != 0)) {
            FUN_1456cec3c(uVar16);
            bVar13 = DAT_14c950c29;
          }
          lVar12 = (longlong)iVar21 * 0x70;
          uVar4 = *(ulonglong *)(*param_1 + lVar12);
          if (((bVar13 & 1) != 0) && (uVar4 != 0)) {
            FUN_1456cec3c(uVar4);
            bVar13 = DAT_14c950c29;
          }
          if (((bVar13 & 1) != 0) && (uVar16 != 0)) {
            FUN_1456cec3c(uVar16);
            bVar13 = DAT_14c950c29;
          }
          lVar3 = *param_1;
          if (uVar4 == uVar16) {
            if (*(longlong *)(lVar3 + 0x30 + lVar12) != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)(lVar3 + lVar12 + 0x20) != 0) {
              FUN_1400020a8();
            }
            memmove((void *)(lVar3 + lVar12),_Src,0x68);
            FUN_1402a5e54(param_1,iVar20);
            iVar20 = iVar21;
            goto LAB_1402a58df;
          }
          iVar21 = *(int *)(lVar3 + 0x68 + lVar12);
        } while (iVar21 != -1);
        iVar14 = *(int *)((longlong)param_1 + 0x34);
        iVar15 = (int)param_1[1];
      }
    }
  }
  uVar11 = iVar15 - iVar14;
  if (uVar11 < 4) {
    iVar17 = 1;
  }
  else {
    uVar16 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (iVar17 <= (int)param_1[9])) {
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)_Src + 0x6c) = uVar10;
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xd) =
         *(undefined4 *)
          ((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar20;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    FUN_1402a6528(param_1);
  }
LAB_1402a58df:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 1402a5b14 FUN_1402a5b14 body=715 status=ok
// SIG undefined FUN_1402a5b14(void)

int * FUN_1402a5b14(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402a5cf8;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1402a5cf8:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1402a5de0 FUN_1402a5de0 body=116 status=ok
// SIG undefined FUN_1402a5de0(void)

void FUN_1402a5de0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1402a5e54 FUN_1402a5e54 body=116 status=ok
// SIG undefined FUN_1402a5e54(void)

void FUN_1402a5e54(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1402a5ec8 FUN_1402a5ec8 body=221 status=ok
// SIG undefined FUN_1402a5ec8(void)

longlong FUN_1402a5ec8(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb274a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f9f9b4;
    local_40 = FUN_14644d7a3;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000007;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputTrigger",&DAT_14cb274a8,FUN_14644d77c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb274a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a5fa6 FUN_1402a5fa6 body=315 status=ok
// SIG undefined FUN_1402a5fa6(void)

void FUN_1402a5fa6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1402a6010;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1402a6010:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1402a60e2 FUN_1402a60e2 body=221 status=ok
// SIG undefined FUN_1402a60e2(void)

longlong FUN_1402a60e2(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb272a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f9e871;
    local_40 = FUN_14644d1d8;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000003;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputModifier",&DAT_14cb272a0,FUN_14644d1b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb272a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a61c0 FUN_1402a61c0 body=353 status=ok
// SIG undefined FUN_1402a61c0(void)

void FUN_1402a61c0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402a6245;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1402a6245:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402a6322 FUN_1402a6322 body=517 status=ok
// SIG undefined FUN_1402a6322(void)

void FUN_1402a6322(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x10);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x10;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0xc) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 8) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a6528 FUN_1402a6528 body=655 status=ok
// SIG undefined FUN_1402a6528(void)

void FUN_1402a6528(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar11 = local_50;
    bVar4 = DAT_14c950c29;
    plVar6 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar6;
        lVar12 = *param_1;
        uVar3 = *(ulonglong *)(lVar12 + (longlong)iVar10 * 0x70);
        local_7c = iVar11;
        local_70 = uVar9;
        if (((bVar4 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar4 = DAT_14c950c29;
        }
        lVar12 = lVar12 + (longlong)iVar10 * 0x70;
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar9;
        *(int *)(lVar12 + 0x6c) = iVar11;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x68) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar10;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar6 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar6 = local_78;
        }
        iVar2 = (int)local_78[3];
        iVar10 = (int)local_70;
        lVar12 = (longlong)iVar10;
        uVar5 = *(uint *)((longlong)plVar6 + lVar12 * 4) & uVar14;
        uVar9 = local_70;
        iVar11 = local_7c;
        if (uVar5 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar10) {
            iVar8 = iVar10;
          }
          if (iVar7 <= iVar10) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar6 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar8 - lVar12 == lVar13) goto LAB_1402a6768;
          }
          uVar14 = 0xffffffff;
          uVar9 = (ulonglong)(iVar10 + (int)lVar13 + 1);
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        plVar6 = local_78;
      } while (iVar10 < iVar2);
    }
  }
LAB_1402a6768:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a67be FUN_1402a67be body=57 status=ok
// SIG undefined FUN_1402a67be(void)

void FUN_1402a67be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacd60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacd60 = FUN_140002ddd(FUN_1465e4472,uVar1,L"OakMigrationEventPointDef");
  }
  return;
}



// FUNCTION 1402a6800 FUN_1402a6800 body=144 status=ok
// SIG undefined FUN_1402a6800(void)

undefined8 FUN_1402a6800(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb263e0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb263e0 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a6892 FUN_1402a6892 body=466 status=ok
// SIG undefined FUN_1402a6892(void)

undefined8 FUN_1402a6892(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 1) & 2) == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 2);
  uVar7 = uVar9 + 3;
  uVar8 = uVar9 + 7;
  uVar5 = uVar9 + 0xf;
  uVar1 = uVar9 + 0x1f;
  uVar2 = uVar9 + 0x3f;
  uVar3 = uVar9 + 0x7f;
  if (-1 < (int)uVar9) {
    uVar7 = uVar9;
    uVar8 = uVar9;
    uVar5 = uVar9;
    uVar1 = uVar9;
    uVar2 = uVar9;
    uVar3 = uVar9;
  }
  if (((&DAT_14ca814cc)[(ulonglong)*param_1 * 0x3c] & 2) == 0) {
    return 0;
  }
  if (((int)uVar9 / 2 & 0x80000001U) == 1 && (uVar9 & 0x80000001) != 1) {
    return 0;
  }
  uVar9 = (int)uVar5 >> 4 & 0x80000001;
  if (uVar9 == 1) {
    cVar4 = FUN_1449373d8();
    if (cVar4 == '\0') {
      return 0;
    }
    if ((*(ulonglong *)(param_1 + 0x1c) & 0x400000001) == 0) {
      return 0;
    }
  }
  if (((int)uVar1 >> 5 & 0x80000001U) == 1) {
    cVar4 = FUN_144937519();
    if (cVar4 == '\0') {
      return 0;
    }
    if ((*(ulonglong *)(param_1 + 0x1c) & 0x800000001) == 0 || uVar9 == 1) {
      return 0;
    }
  }
  uVar7 = (int)uVar7 >> 2 & 0x80000001;
  uVar9 = (int)uVar8 >> 3 & 0x80000001;
  if ((((int)uVar3 >> 7 & 0x80000001U) == 1) &&
     (((param_1[0x1c] & 1) == 0 || uVar7 == 1) || uVar9 == 1)) {
    return 0;
  }
  uVar8 = (int)uVar2 >> 6 & 0x80000001;
  if ((uVar9 == 1) && (((uint)(&DAT_14ca814d8)[(ulonglong)*param_1 * 0xf] >> 0x16 & 1) == 0)) {
    uVar5 = (uint)(&DAT_14ca814d8)[(ulonglong)*param_1 * 0xf] >> 0x17;
    if (((byte)uVar5 & 3) == 2) {
      if (uVar8 != 1) {
        return 0;
      }
      goto LAB_1402a6a20;
    }
    if ((uVar5 & 3) != 0) goto LAB_1402a6a20;
  }
  if (uVar8 == 1) {
    return 0;
  }
LAB_1402a6a20:
  cVar4 = FUN_14011a2c8(param_1 + 8,uVar7 == 1,uVar9 == 1,&DAT_14ca81401);
  if (cVar4 == '\0') {
    return 0;
  }
  uVar6 = FUN_1402a6a64(param_1);
  return uVar6;
}



// FUNCTION 1402a6a64 FUN_1402a6a64 body=130 status=ok
// SIG undefined FUN_1402a6a64(void)

byte FUN_1402a6a64(ushort *param_1)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x1c);
  if ((uVar3 >> 0x35 & 1) != 0) {
    if ((uVar3 & 0x1000004) == 0) {
      bVar2 = false;
    }
    else if ((uVar3 >> 0x30 & 1) == 0) {
      bVar2 = 0 < *(int *)(param_1 + 0x16);
    }
    else {
      bVar2 = true;
    }
    uVar3 = (ulonglong)(byte)(bVar2 | (byte)uVar3 | (byte)((uint)uVar3 >> 0x17) & 1);
  }
  if (DAT_14c760e34 == 0) {
    bVar1 = 0;
  }
  else {
    lVar4 = (ulonglong)*param_1 * 0x3c;
    bVar1 = (byte)((uint)(&DAT_14ca814c8)[(ulonglong)*param_1 * 0xf] >> 0x1d) &
            *(byte *)((longlong)&DAT_14ca814d8 + lVar4 + 3) >> 4 &
            (byte)((*(uint *)(&DAT_14ca814cc + lVar4) & 8) >> 3);
  }
  return bVar1 & (byte)uVar3 & *(int *)(param_1 + 8) == 0;
}



// FUNCTION 1402a6ae6 FUN_1402a6ae6 body=95 status=ok
// SIG undefined FUN_1402a6ae6(void)

void FUN_1402a6ae6(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_147ce4332(param_1,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))();
    if (*(int *)(param_1 + 0x34) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      FUN_1479d8eae(param_1 + 0x18,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1402a6b45 FUN_1402a6b45 body=225 status=ok
// SIG undefined FUN_1402a6b45(void)

void FUN_1402a6b45(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_60 [16];
  undefined4 local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(param_3 + 0x28);
  local_50 = (int)*(undefined8 *)(lVar2 + 0x50);
  uStack_4c = (uint)((ulonglong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) ^ 0x80000000;
  uStack_48 = (int)*(undefined8 *)(lVar2 + 0x70);
  uStack_44 = (uint)((ulonglong)*(undefined8 *)(lVar2 + 0x70) >> 0x20) ^ 0x80000000;
  local_40 = *(ulonglong *)(lVar2 + 0x90) ^ 0x8000000000000000;
  if (*(char *)(lVar1 + 0xda + (longlong)param_2) == '\x01') {
    puVar3 = (undefined4 *)(lVar1 + (longlong)param_2 * 0x18 + 0xe0);
  }
  else {
    puVar3 = &local_50;
  }
  local_28 = *(undefined8 *)(puVar3 + 4);
  local_38 = *puVar3;
  uStack_34 = puVar3[1];
  uStack_30 = puVar3[2];
  uStack_2c = puVar3[3];
  FUN_14493787c(lVar1 + 0x10,&local_50);
  FUN_1402a6c27(local_60,param_3);
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  (**(code **)(**(longlong **)(param_3 + 0x28) + 0x110))
            (*(longlong **)(param_3 + 0x28),&local_78,local_60);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a6c27 FUN_1402a6c27 body=313 status=ok
// SIG undefined FUN_1402a6c27(void)

float * FUN_1402a6c27(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [40];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar5 = (float)(**(code **)(**(longlong **)(param_2 + 0x28) + 0x148))();
  fVar6 = cosf(fVar5);
  plVar4 = *(longlong **)(param_2 + 0x28);
  fVar5 = *(float *)(plVar4 + 0x3b);
  fVar1 = *(float *)((longlong)plVar4 + 0x1dc);
  fVar2 = *(float *)(plVar4 + 0x3c);
  fVar3 = *(float *)((longlong)plVar4 + 0x1e4);
  (**(code **)(*plVar4 + 0x120))(plVar4,&local_90);
  fVar6 = 1.0 / ((1.0 - fVar6) * 6.2831855);
  *param_1 = fVar6 * fVar5 * local_90;
  param_1[1] = fVar1 * local_8c * fVar6;
  param_1[2] = fVar2 * local_88 * fVar6;
  param_1[3] = fVar3 * local_84 * fVar6;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402a6d62 FUN_1402a6d62 body=618 status=ok
// SIG undefined FUN_1402a6d62(void)

ulonglong *
FUN_1402a6d62(ulonglong *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar3 = *param_2;
  dVar7 = param_2[1];
  dVar5 = param_2[2];
  dVar2 = dVar5 * dVar5 + dVar3 * dVar3 + dVar7 * dVar7;
  if (((dVar2 != 1.0) || (dVar4 = dVar3, dVar6 = dVar7, dVar8 = dVar5, NAN(dVar2))) &&
     (dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar2)) {
    dVar2 = 1.0 / SQRT(dVar2);
    dVar4 = dVar3 * dVar2;
    dVar6 = dVar7 * dVar2;
    dVar8 = dVar5 * dVar2;
  }
  dVar3 = dVar8 * param_5[2] + dVar4 * *param_5 + dVar6 * param_5[1];
  dVar8 = dVar8 - param_5[2] * dVar3;
  dVar6 = dVar6 - param_5[1] * dVar3;
  dVar4 = dVar4 - *param_5 * dVar3;
  dVar7 = dVar8 * dVar8 + dVar4 * dVar4 + dVar6 * dVar6;
  if (((dVar7 != 1.0) || (dVar5 = dVar4, dVar2 = dVar6, dVar9 = dVar8, NAN(dVar7))) &&
     (dVar5 = DAT_14c8464e0, dVar2 = DAT_14c8464e8, dVar9 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar5 = dVar4 * dVar7;
    dVar2 = dVar6 * dVar7;
    dVar9 = dVar8 * dVar7;
  }
  dVar7 = param_4[1];
  dVar4 = *param_4;
  dVar6 = param_4[2];
  dVar10 = dVar9 * param_3[2] + dVar5 * *param_3 + dVar2 * param_3[1];
  dVar8 = dVar3;
  if (1.0 <= dVar3) {
    dVar8 = 1.0;
  }
  dVar8 = asin((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar8));
  dVar3 = dVar10;
  if (1.0 <= dVar10) {
    dVar3 = 1.0;
  }
  dVar3 = acos((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar3));
  uVar1 = -(ulonglong)(dVar6 * dVar9 + dVar4 * dVar5 + dVar7 * dVar2 < 0.0);
  *param_1 = uVar1 & (ulonglong)-dVar3 | ~uVar1 & (ulonglong)dVar3;
  param_1[1] = (ulonglong)dVar8;
  return param_1;
}



// FUNCTION 1402a6fcc FUN_1402a6fcc body=103 status=ok
// SIG undefined FUN_1402a6fcc(void)

ulonglong FUN_1402a6fcc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1402a7016:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1402a7016;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1402a7034 FUN_1402a7034 body=32 status=ok
// SIG undefined FUN_1402a7034(void)

void FUN_1402a7034(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1402a7098(*(undefined8 *)(param_1 + 0x30));
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 1402a7054 FUN_1402a7054 body=68 status=ok
// SIG undefined FUN_1402a7054(void)

void FUN_1402a7054(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  param_2 = (bVar1 & 8) >> 3 ^ param_2;
  if (((bVar1 & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x28) = bVar1 & 0xfd | param_2 * '\x02';
    if ((((bVar1 & 4) == 0) && (*(int *)(param_1 + 0x20) != 0)) &&
       (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001402a7094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
      return;
    }
  }
  return;
}



// FUNCTION 1402a7098 FUN_1402a7098 body=174 status=ok
// SIG undefined FUN_1402a7098(void)

byte FUN_1402a7098(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  cVar5 = '\0';
  bVar8 = false;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar7 = 0;
    do {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar7);
      if (cVar1 == (char)param_2[0x220]) break;
      bVar8 = (longlong)*(int *)(param_1 + 0x20) + -1 != lVar7;
      lVar7 = lVar7 + 1;
    } while (bVar8);
    bVar8 = cVar1 == (char)param_2[0x220];
  }
  lVar7 = param_2[0x39d];
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_2 + 0x6d5);
  uVar4 = uVar2;
  if ((uVar2 & 2) != 0) {
    cVar5 = (**(code **)(*param_2 + 0xeb8))(param_2);
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  uVar6 = 0;
  if ((uVar4 & 4) != 0) {
    uVar6 = *(uint *)(lVar7 + 0x550) >> 1 & 1;
  }
  return (((!bVar8 && cVar5 == '\0') && (uVar2 & uVar3 >> 2 & 1) == 0) && uVar6 == 0) ^
         *(byte *)(param_1 + 0x10);
}



// FUNCTION 1402a7146 FUN_1402a7146 body=700 status=ok
// SIG undefined FUN_1402a7146(void)

void FUN_1402a7146(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,void *param_11)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  void *pvVar20;
  void *pvVar21;
  longlong lVar22;
  ulonglong _Size;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  
  FUN_1402a7402(param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_11);
  iVar2 = *(int *)(param_1 + 0xd960);
  *(uint *)(param_1 + 0xd960) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xd964) < iVar2 + 1U) {
    FUN_1402a83c2(param_1 + 0x158,iVar2);
  }
  lVar22 = param_1 + 0x158;
  if (*(longlong *)(param_1 + 0xd958) != 0) {
    lVar22 = *(longlong *)(param_1 + 0xd958);
  }
  lVar25 = (longlong)iVar2 * 0x120;
  pvVar1 = (void *)(lVar22 + lVar25);
  *(undefined8 *)(lVar22 + 0x10 + lVar25) = 0;
  *(undefined8 *)(lVar22 + 0x18 + lVar25) = 0x200000000;
  puVar24 = (undefined8 *)(lVar22 + 0x20 + lVar25);
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24 = (undefined8 *)(lVar22 + 0x30 + lVar25);
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24 = (undefined8 *)(lVar22 + 0x40 + lVar25);
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24 = (undefined8 *)(lVar22 + 0x50 + lVar25);
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24 = (undefined8 *)(lVar22 + 0x60 + lVar25);
  *puVar24 = 0;
  puVar24[1] = 0;
  *(undefined4 *)(lVar22 + 0x70 + lVar25) = 0;
  if (pvVar1 != param_11) {
    iVar3 = *(int *)((longlong)param_11 + 0x18);
    pvVar20 = *(void **)((longlong)param_11 + 0x10);
    *(int *)((longlong)pvVar1 + 0x18) = iVar3;
    FUN_14470ca02(pvVar1,iVar3,2);
    if ((longlong)iVar3 != 0) {
      if (pvVar20 == (void *)0x0) {
        pvVar20 = param_11;
      }
      pvVar21 = *(void **)((longlong)pvVar1 + 0x10);
      if (*(void **)((longlong)pvVar1 + 0x10) == (void *)0x0) {
        pvVar21 = pvVar1;
      }
      memcpy(pvVar21,pvVar20,(longlong)iVar3 << 3);
    }
  }
  puVar24 = (undefined8 *)(lVar22 + lVar25 + 0x20);
  *(undefined2 *)((longlong)pvVar1 + 0x70) = *(undefined2 *)((longlong)param_11 + 0x70);
  _Size = (ulonglong)*(ushort *)((longlong)param_11 + 0x72);
  *(ushort *)((longlong)pvVar1 + 0x72) = *(ushort *)((longlong)param_11 + 0x72);
  if (0x50 < _Size) {
    pvVar20 = (void *)FUN_14001cc68(_Size,0x10);
    *puVar24 = pvVar20;
    if (0x50 < *(ushort *)((longlong)param_11 + 0x72)) {
      memcpy(pvVar20,*(void **)((longlong)param_11 + 0x20),_Size);
      goto LAB_1402a72a2;
    }
  }
  puVar23 = (undefined8 *)((longlong)param_11 + 0x20);
  for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar24 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar24 = puVar24 + 1;
  }
LAB_1402a72a2:
  *(undefined8 *)((longlong)pvVar1 + 0xd0) = 0;
  iVar3 = *(int *)((longlong)param_11 + 0xd8);
  pvVar20 = *(void **)((longlong)param_11 + 0xd0);
  *(int *)((longlong)pvVar1 + 0xd8) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)pvVar1 + 0xdc) = 7;
  }
  else {
    pvVar21 = (void *)((longlong)param_11 + 0x78);
    if (pvVar20 != (void *)0x0) {
      pvVar21 = pvVar20;
    }
    FUN_14470c976((void *)((longlong)pvVar1 + 0x78),iVar3,0);
    pvVar20 = *(void **)((longlong)pvVar1 + 0xd0);
    if (*(void **)((longlong)pvVar1 + 0xd0) == (void *)0x0) {
      pvVar20 = (void *)((longlong)pvVar1 + 0x78);
    }
    memcpy(pvVar20,pvVar21,(longlong)iVar3 * 0xc);
  }
  uVar4 = *(undefined4 *)((longlong)param_11 + 0xe0);
  uVar5 = *(undefined4 *)((longlong)param_11 + 0xe4);
  uVar6 = *(undefined4 *)((longlong)param_11 + 0xe8);
  uVar7 = *(undefined4 *)((longlong)param_11 + 0xec);
  uVar8 = *(undefined4 *)((longlong)param_11 + 0xf0);
  uVar9 = *(undefined4 *)((longlong)param_11 + 0xf4);
  uVar10 = *(undefined4 *)((longlong)param_11 + 0xf8);
  uVar11 = *(undefined4 *)((longlong)param_11 + 0xfc);
  uVar12 = *(undefined4 *)((longlong)param_11 + 0x100);
  uVar13 = *(undefined4 *)((longlong)param_11 + 0x104);
  uVar14 = *(undefined4 *)((longlong)param_11 + 0x108);
  uVar15 = *(undefined4 *)((longlong)param_11 + 0x10c);
  uVar16 = *(undefined4 *)((longlong)param_11 + 0x111);
  uVar17 = *(undefined4 *)((longlong)param_11 + 0x115);
  uVar18 = *(undefined4 *)((longlong)param_11 + 0x119);
  *(undefined4 *)((longlong)pvVar1 + 0x10d) = *(undefined4 *)((longlong)param_11 + 0x10d);
  *(undefined4 *)((longlong)pvVar1 + 0x111) = uVar16;
  *(undefined4 *)((longlong)pvVar1 + 0x115) = uVar17;
  *(undefined4 *)((longlong)pvVar1 + 0x119) = uVar18;
  *(undefined4 *)((longlong)pvVar1 + 0x100) = uVar12;
  *(undefined4 *)((longlong)pvVar1 + 0x104) = uVar13;
  *(undefined4 *)((longlong)pvVar1 + 0x108) = uVar14;
  *(undefined4 *)((longlong)pvVar1 + 0x10c) = uVar15;
  *(undefined4 *)((longlong)pvVar1 + 0xf0) = uVar8;
  *(undefined4 *)((longlong)pvVar1 + 0xf4) = uVar9;
  *(undefined4 *)((longlong)pvVar1 + 0xf8) = uVar10;
  *(undefined4 *)((longlong)pvVar1 + 0xfc) = uVar11;
  *(undefined4 *)((longlong)pvVar1 + 0xe0) = uVar4;
  *(undefined4 *)((longlong)pvVar1 + 0xe4) = uVar5;
  *(undefined4 *)((longlong)pvVar1 + 0xe8) = uVar6;
  *(undefined4 *)((longlong)pvVar1 + 0xec) = uVar7;
  if (*(char *)(param_1 + 0x151) == '\x01') {
    uVar19 = FUN_144937ccc(param_11);
    iVar3 = *(int *)(param_1 + 0xd970);
    *(uint *)(param_1 + 0xd970) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xd974) < iVar3 + 1U) {
      FUN_1447602e0(param_1 + 0xd968,iVar3);
    }
    *(uint *)(*(longlong *)(param_1 + 0xd968) + (longlong)iVar3 * 4) = uVar19 & 0x7fffffff;
    *(int *)(param_1 + 0x13c) = iVar2;
  }
  else {
    *(int *)(param_1 + 0x138) = iVar2;
  }
  return;
}



// FUNCTION 1402a7402 FUN_1402a7402 body=4030 status=ok
// SIG undefined FUN_1402a7402(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402a7402(longlong param_1,longlong param_2,int param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6,byte param_7,longlong *param_8,longlong param_9)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  longlong lVar25;
  undefined4 *puVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1c8 [47];
  char local_199;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  int local_180;
  int local_17c;
  undefined4 *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined4 *local_160;
  undefined4 local_154;
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  int local_114;
  longlong local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined4 *local_e8;
  undefined8 local_e0;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_170 = param_4;
  local_168 = param_1;
  local_150 = param_2;
  local_114 = param_3;
  uVar4 = FUN_147248fa5(param_8);
  uVar4 = uVar4 & 0x7fffffff;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14ca09618);
  uVar19 = DAT_14ca09690 & uVar4;
  local_178 = (undefined4 *)CONCAT44(local_178._4_4_,uVar4 + 1);
  puVar23 = DAT_14ca09680;
  if (DAT_14ca09680 == (undefined4 *)0x0) {
    puVar23 = &DAT_14ca09678;
  }
  puVar24 = DAT_14ca09668;
  if (DAT_14ca09668 == (undefined4 *)0x0) {
    puVar24 = &DAT_14ca09660;
  }
  local_188 = DAT_14ca09620;
  local_198 = *param_8;
  local_120 = param_8[6];
  local_128 = param_8[7];
  local_130 = CONCAT44(local_130._4_4_,(int)param_8[10]);
  local_138 = CONCAT44(local_138._4_4_,*(int *)((longlong)param_8 + 0x54));
  local_199 = (char)param_8[0x11];
  local_180 = CONCAT31(local_180._1_3_,*(char *)((longlong)param_8 + 0x89));
  local_160 = (undefined4 *)CONCAT71(local_160._1_7_,*(char *)((longlong)param_8 + 0x8a));
  local_140 = param_8[8];
  local_17c = (int)param_8[0xb];
  local_148 = param_8 + 0xf;
  do {
    local_190 = (ulonglong)uVar4;
    if (puVar23[(int)uVar19] == uVar4) {
      uVar22 = puVar24[(int)uVar19];
      lVar25 = (longlong)(int)uVar22;
      if ((((((local_198 == *(longlong *)(DAT_14ca09620 + lVar25 * 0xa8)) &&
             (lVar7 = lVar25 * 0xa8 + DAT_14ca09620, local_120 == *(longlong *)(lVar7 + 0x30))) &&
            (local_128 == *(longlong *)(lVar7 + 0x38))) &&
           (((int)param_8[10] == *(int *)(lVar7 + 0x50) &&
            (*(int *)((longlong)param_8 + 0x54) == *(int *)(lVar7 + 0x54))))) &&
          (local_140 == *(longlong *)(lVar7 + 0x40))) &&
         (((local_17c == *(int *)(lVar7 + 0x58) && (param_8[0xc] == *(longlong *)(lVar7 + 0x60))) &&
          ((param_8[0xd] == *(longlong *)(lVar7 + 0x68) &&
           (param_8[0xe] == *(longlong *)(lVar7 + 0x70))))))) {
        lVar12 = 0;
        bVar3 = true;
        do {
          bVar15 = bVar3;
          if (local_148[lVar12] != *(longlong *)(lVar7 + 0x78 + lVar12 * 8)) goto LAB_1402a7556;
          lVar12 = 1;
          bVar3 = false;
        } while (bVar15);
        if ((((local_199 == *(char *)(lVar7 + 0x88)) &&
             (*(char *)((longlong)param_8 + 0x89) == *(char *)(lVar7 + 0x89))) &&
            (*(char *)((longlong)param_8 + 0x8a) == *(char *)(lVar7 + 0x8a))) &&
           (*(int *)((longlong)param_8 + 0x8c) == *(int *)(lVar7 + 0x8c))) {
          if (uVar22 != 0xffffffff) {
            bVar3 = false;
            uVar4 = (uint)local_170;
            goto LAB_1402a76a4;
          }
          break;
        }
      }
    }
LAB_1402a7556:
    uVar19 = uVar19 + 1 & DAT_14ca09690;
  } while (uVar19 != (DAT_14ca09694 + uVar4 + 1 & DAT_14ca09690));
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca09618);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca09618);
  uVar4 = DAT_14ca09690;
  local_154 = 0;
  uVar19 = DAT_14ca09690 & (uint)local_190;
  uVar14 = (int)local_178 + DAT_14ca09694;
  local_160 = DAT_14ca09680;
  puVar23 = DAT_14ca09680;
  if (DAT_14ca09680 == (undefined4 *)0x0) {
    puVar23 = &DAT_14ca09678;
  }
  local_120 = CONCAT44(local_120._4_4_,(int)param_8[0xb]);
  local_128 = param_8[0xc];
  local_140 = CONCAT71(local_140._1_7_,(char)param_8[0x11]);
  local_17c = CONCAT31(local_17c._1_3_,*(char *)((longlong)param_8 + 0x89));
  local_178 = DAT_14ca09668;
  puVar24 = DAT_14ca09668;
  if (DAT_14ca09668 == (undefined4 *)0x0) {
    puVar24 = &DAT_14ca09660;
  }
  local_199 = *(char *)((longlong)param_8 + 0x8a);
  local_130 = param_8[0xd];
  local_138 = param_8[0xe];
  local_180 = *(int *)((longlong)param_8 + 0x8c);
  local_188 = DAT_14ca09620;
  do {
    if (puVar23[(int)uVar19] == (uint)local_190) {
      uVar22 = puVar24[(int)uVar19];
      local_198 = CONCAT44(local_198._4_4_,uVar22);
      lVar25 = (longlong)(int)uVar22;
      local_110 = lVar25;
      if ((((*param_8 == *(longlong *)(DAT_14ca09620 + lVar25 * 0xa8)) &&
           (lVar7 = lVar25 * 0xa8 + DAT_14ca09620, param_8[6] == *(longlong *)(lVar7 + 0x30))) &&
          ((((param_8[7] == *(longlong *)(lVar7 + 0x38) &&
             (((int)param_8[10] == *(int *)(lVar7 + 0x50) &&
              (*(int *)((longlong)param_8 + 0x54) == *(int *)(lVar7 + 0x54))))) &&
            (param_8[8] == *(longlong *)(lVar7 + 0x40))) &&
           ((((int)param_8[0xb] == *(int *)(lVar7 + 0x58) &&
             (local_128 == *(longlong *)(lVar7 + 0x60))) &&
            (local_130 == *(longlong *)(lVar7 + 0x68))))))) &&
         (local_138 == *(longlong *)(lVar7 + 0x70))) {
        lVar12 = 0;
        bVar3 = true;
        do {
          bVar15 = bVar3;
          if (local_148[lVar12] != *(longlong *)(lVar7 + 0x78 + lVar12 * 8)) goto LAB_1402a79b0;
          lVar12 = 1;
          bVar3 = false;
        } while (bVar15);
        if ((((char)param_8[0x11] == *(char *)(lVar7 + 0x88)) &&
            (*(char *)((longlong)param_8 + 0x89) == *(char *)(lVar7 + 0x89))) &&
           ((local_199 == *(char *)(lVar7 + 0x8a) && (local_180 == *(int *)(lVar7 + 0x8c))))) {
          uVar4 = (uint)local_170;
          goto LAB_1402a7d89;
        }
      }
    }
LAB_1402a79b0:
    uVar19 = uVar19 + 1 & DAT_14ca09690;
    if (uVar19 == (uVar14 & DAT_14ca09690)) {
      if ((ulonglong)(DAT_14ca09690 * 3) <=
          (ulonglong)(((longlong)(int)DAT_14ca09628 - (longlong)DAT_14ca09658) * 5)) {
        if (DAT_14ca09668 == (undefined4 *)0x0) {
          local_f0[0] = DAT_14ca09660;
        }
        local_e8 = DAT_14ca09668;
        DAT_14ca09668 = (undefined4 *)0x0;
        local_e0 = DAT_14ca09670;
        DAT_14ca09670 = 0x100000000;
        if (DAT_14ca09680 == (undefined4 *)0x0) {
          local_108[0] = DAT_14ca09678;
        }
        local_100 = DAT_14ca09680;
        DAT_14ca09680 = (undefined4 *)0x0;
        local_f8 = DAT_14ca09688;
        DAT_14ca09688 = 0x100000000;
        uVar19 = DAT_14ca09690 * 2;
        DAT_14ca09690 = DAT_14ca09690 * 2 + 1;
        DAT_14ca09694 = 0;
        iVar5 = uVar19 + 2;
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (uVar19 < 0x7ffffffe) {
          FUN_14475fe8c(&DAT_14ca09660);
          iVar10 = (int)DAT_14ca09670;
          iVar5 = DAT_14ca09670._4_4_;
        }
        else {
          iVar10 = 0;
          iVar5 = 1;
        }
        uVar19 = DAT_14ca09690 + 1;
        DAT_14ca09670 = CONCAT44(DAT_14ca09670._4_4_,DAT_14ca09690 + iVar10 + 1);
        if ((uint)(iVar5 - iVar10) < uVar19) {
          FUN_146f3c7b6(&DAT_14ca09660);
          uVar19 = DAT_14ca09690 + 1;
        }
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar19);
        }
        iVar5 = DAT_14ca09688._4_4_;
        if (DAT_14ca09688._4_4_ < (int)uVar19) {
          FUN_14476002c(&DAT_14ca09678,uVar19);
          uVar19 = DAT_14ca09690 + 1;
          iVar5 = DAT_14ca09688._4_4_;
        }
        uVar8 = DAT_14ca09688;
        iVar10 = (int)DAT_14ca09688;
        lVar25 = (longlong)(int)DAT_14ca09688;
        DAT_14ca09688 = CONCAT44(DAT_14ca09688._4_4_,(int)DAT_14ca09688 + uVar19);
        if ((uint)(iVar5 - iVar10) < uVar19) {
          FUN_147138312(&DAT_14ca09678,uVar8 & 0xffffffff);
        }
        puVar23 = DAT_14ca09680;
        if (DAT_14ca09680 == (undefined4 *)0x0) {
          puVar23 = &DAT_14ca09678;
        }
        FUN_14471858a(puVar23 + lVar25,uVar19);
        puVar23 = local_108;
        if (local_160 != (undefined4 *)0x0) {
          puVar23 = local_160;
        }
        puVar24 = local_f0;
        if (local_178 != (undefined4 *)0x0) {
          puVar24 = local_178;
        }
        iVar5 = 0;
        do {
          uVar19 = puVar23[iVar5];
          if (!SBORROW4(0,uVar19)) {
            uVar20 = puVar24[iVar5];
            uVar22 = DAT_14ca09690 & uVar19;
            puVar26 = DAT_14ca09680;
            if (DAT_14ca09680 == (undefined4 *)0x0) {
              puVar26 = &DAT_14ca09678;
            }
            lVar25 = (longlong)(int)uVar22;
            uVar14 = puVar26[lVar25];
            if (!SBORROW4(0,uVar14)) {
              puVar18 = puVar26 + lVar25;
              uVar16 = uVar22 - uVar14 & DAT_14ca09690;
              uVar21 = 0;
              puVar26 = DAT_14ca09680;
              uVar9 = DAT_14ca09690;
              do {
                if (uVar16 < uVar21) {
                  if (DAT_14ca09694 < uVar21) {
                    uVar14 = *puVar18;
                    DAT_14ca09694 = uVar21;
                  }
                  puVar26 = DAT_14ca09668;
                  if (DAT_14ca09668 == (undefined4 *)0x0) {
                    puVar26 = &DAT_14ca09660;
                  }
                  uVar2 = puVar26[lVar25];
                  puVar26[lVar25] = uVar20;
                  puVar26 = DAT_14ca09680;
                  if (DAT_14ca09680 == (undefined4 *)0x0) {
                    puVar26 = &DAT_14ca09678;
                  }
                  puVar26[lVar25] = uVar19;
                  puVar26 = DAT_14ca09680;
                  uVar20 = uVar2;
                  uVar9 = DAT_14ca09690;
                  uVar21 = uVar16;
                  uVar19 = uVar14;
                }
                uVar21 = uVar21 + 1;
                uVar22 = uVar22 + 1 & uVar9;
                puVar13 = puVar26;
                if (puVar26 == (undefined4 *)0x0) {
                  puVar13 = &DAT_14ca09678;
                }
                lVar25 = (longlong)(int)uVar22;
                puVar18 = puVar13 + lVar25;
                uVar14 = *puVar18;
                uVar16 = uVar22 - uVar14 & uVar9;
              } while (!SBORROW4(0,uVar14));
              if (DAT_14ca09694 < uVar21) {
                DAT_14ca09694 = uVar21;
              }
            }
            puVar26 = DAT_14ca09668;
            if (DAT_14ca09668 == (undefined4 *)0x0) {
              puVar26 = &DAT_14ca09660;
            }
            puVar26[lVar25] = uVar20;
            puVar26 = DAT_14ca09680;
            if (DAT_14ca09680 == (undefined4 *)0x0) {
              puVar26 = &DAT_14ca09678;
            }
            puVar26[lVar25] = uVar19;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != uVar4 + 1 + (uint)(uVar4 == 0xffffffff));
        if (local_160 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_178 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar4 = DAT_14ca09628;
      if (DAT_14ca09658 < 1) {
        FUN_147243eb2(local_f0,param_8);
        uVar19 = DAT_14ca09628;
        local_90 = param_8[0xc];
        local_88 = param_8[0xd];
        local_80 = param_8[0xe];
        local_78 = (undefined4)*local_148;
        uStack_74 = *(undefined4 *)((longlong)local_148 + 4);
        uStack_70 = (undefined4)local_148[1];
        uStack_6c = *(undefined4 *)((longlong)local_148 + 0xc);
        local_68 = (undefined1)param_8[0x11];
        local_67 = *(undefined1 *)((longlong)param_8 + 0x89);
        local_66 = *(undefined1 *)((longlong)param_8 + 0x8a);
        local_64 = *(undefined4 *)((longlong)param_8 + 0x8c);
        local_60 = param_8[0x12];
        local_58 = (undefined4)param_8[0x13];
        local_50 = local_154;
        lVar25 = (longlong)(int)DAT_14ca09628;
        DAT_14ca09628 = DAT_14ca09628 + 1;
        if (DAT_14ca0962c < DAT_14ca09628) {
          FUN_1462ee4ce(uVar19);
        }
        lVar7 = DAT_14ca09620;
        lVar25 = lVar25 * 0xa8;
        FUN_147243eb2(DAT_14ca09620 + lVar25,local_f0);
        *(longlong *)(lVar7 + 0x60 + lVar25) = local_90;
        *(longlong *)(lVar7 + 0x68 + lVar25) = local_88;
        *(longlong *)(lVar7 + 0x70 + lVar25) = local_80;
        puVar23 = (undefined4 *)(lVar7 + 0x78 + lVar25);
        *puVar23 = local_78;
        puVar23[1] = uStack_74;
        puVar23[2] = uStack_70;
        puVar23[3] = uStack_6c;
        *(undefined1 *)(lVar7 + 0x88 + lVar25) = local_68;
        *(undefined1 *)(lVar7 + 0x89 + lVar25) = local_67;
        *(undefined1 *)(lVar7 + 0x8a + lVar25) = local_66;
        *(undefined4 *)(lVar7 + 0x8c + lVar25) = local_64;
        *(longlong *)(lVar7 + 0x90 + lVar25) = local_60;
        *(undefined4 *)(lVar7 + 0x98 + lVar25) = local_58;
        *(undefined4 *)(lVar7 + 0xa0 + lVar25) = local_50;
        if (local_a8 != 0) {
          FUN_140021284();
        }
        if (local_b0 != 0) {
          FUN_140021284();
        }
        if (local_b8 != 0) {
          FUN_140021284();
        }
        if (local_c0 != 0) {
          FUN_140021284();
        }
        uVar19 = DAT_14ca09638;
        local_198 = CONCAT44(local_198._4_4_,uVar4);
        lVar25 = (longlong)(int)DAT_14ca09638;
        DAT_14ca09638 = DAT_14ca09638 + 1;
        if (DAT_14ca0963c < DAT_14ca09638) {
          FUN_1447602e0(&DAT_14ca09630,uVar19);
        }
      }
      else {
        iVar5 = FUN_14020b4c6(&DAT_14ca09640);
        lVar12 = DAT_14ca09620;
        local_198 = CONCAT44(local_198._4_4_,iVar5);
        lVar25 = (longlong)iVar5;
        lVar17 = lVar25 * 0xa8;
        FUN_147243eb2(DAT_14ca09620 + lVar17,param_8);
        *(longlong *)(lVar12 + 0x60 + lVar17) = param_8[0xc];
        *(longlong *)(lVar12 + 0x68 + lVar17) = param_8[0xd];
        *(longlong *)(lVar12 + 0x70 + lVar17) = param_8[0xe];
        uVar20 = *(undefined4 *)((longlong)local_148 + 4);
        lVar7 = local_148[1];
        uVar2 = *(undefined4 *)((longlong)local_148 + 0xc);
        puVar23 = (undefined4 *)(lVar12 + 0x78 + lVar17);
        *puVar23 = (int)*local_148;
        puVar23[1] = uVar20;
        puVar23[2] = (int)lVar7;
        puVar23[3] = uVar2;
        *(char *)(lVar12 + 0x88 + lVar17) = (char)param_8[0x11];
        *(undefined1 *)(lVar12 + 0x89 + lVar17) = *(undefined1 *)((longlong)param_8 + 0x89);
        *(undefined1 *)(lVar12 + 0x8a + lVar17) = *(undefined1 *)((longlong)param_8 + 0x8a);
        *(undefined4 *)(lVar12 + 0x8c + lVar17) = *(undefined4 *)((longlong)param_8 + 0x8c);
        *(longlong *)(lVar12 + 0x90 + lVar17) = param_8[0x12];
        *(int *)(lVar12 + 0x98 + lVar17) = (int)param_8[0x13];
        *(undefined4 *)(lVar12 + 0xa0 + lVar17) = local_154;
      }
      *(uint *)(lVar25 * 4 + DAT_14ca09630) = (uint)local_190;
      uVar19 = DAT_14ca09690 & (uint)local_190;
      uVar8 = (ulonglong)uVar19;
      puVar23 = DAT_14ca09680;
      if (DAT_14ca09680 == (undefined4 *)0x0) {
        puVar23 = &DAT_14ca09678;
      }
      uVar22 = puVar23[uVar8];
      uVar4 = (uint)local_170;
      uVar14 = (uint)local_198;
      if (!SBORROW4(0,uVar22)) {
        puVar18 = puVar23 + uVar8;
        uVar16 = uVar19 - uVar22 & DAT_14ca09690;
        uVar21 = 0;
        puVar23 = DAT_14ca09680;
        uVar9 = DAT_14ca09690;
        do {
          if (uVar16 < uVar21) {
            if (DAT_14ca09694 < uVar21) {
              uVar22 = *puVar18;
              DAT_14ca09694 = uVar21;
            }
            puVar23 = DAT_14ca09668;
            if (DAT_14ca09668 == (undefined4 *)0x0) {
              puVar23 = &DAT_14ca09660;
            }
            uVar21 = puVar23[uVar8];
            puVar23[uVar8] = uVar14;
            puVar23 = DAT_14ca09680;
            if (DAT_14ca09680 == (undefined4 *)0x0) {
              puVar23 = &DAT_14ca09678;
            }
            puVar23[uVar8] = (int)local_190;
            local_190 = (ulonglong)uVar22;
            puVar23 = DAT_14ca09680;
            uVar9 = DAT_14ca09690;
            uVar14 = uVar21;
            uVar21 = uVar16;
          }
          uVar21 = uVar21 + 1;
          uVar19 = uVar19 + 1 & uVar9;
          puVar24 = puVar23;
          if (puVar23 == (undefined4 *)0x0) {
            puVar24 = &DAT_14ca09678;
          }
          uVar8 = (ulonglong)(int)uVar19;
          puVar18 = puVar24 + uVar8;
          uVar22 = *puVar18;
          uVar16 = uVar19 - uVar22 & uVar9;
        } while (!SBORROW4(0,uVar22));
        if (DAT_14ca09694 < uVar21) {
          DAT_14ca09694 = uVar21;
        }
      }
      puVar23 = &DAT_14ca09660;
      if (DAT_14ca09668 != (undefined4 *)0x0) {
        puVar23 = DAT_14ca09668;
      }
      puVar23[uVar8] = uVar14;
      puVar23 = &DAT_14ca09678;
      if (DAT_14ca09680 != (undefined4 *)0x0) {
        puVar23 = DAT_14ca09680;
      }
      puVar23[uVar8] = (int)local_190;
      lVar25 = (longlong)(int)(uint)local_198;
      uVar22 = (uint)local_198;
LAB_1402a7d89:
      bVar3 = true;
      local_188 = DAT_14ca09620;
LAB_1402a76a4:
      lVar12 = local_150;
      lVar7 = local_168;
      LOCK();
      piVar1 = (int *)(local_188 + 0xa0 + lVar25 * 0xa8);
      iVar5 = *piVar1;
      DAT_14ca09620 = local_188;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar5 == 0) {
        if (DAT_14c76081c == '\0') {
          DAT_14c76081c = '\x01';
        }
        LOCK();
        _DAT_14ca09698 = _DAT_14ca09698 + 1;
        UNLOCK();
      }
      if (bVar3) {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca09618);
      }
      else {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca09618);
      }
      lVar25 = *(longlong *)(lVar12 + 0xa8);
      if (*(longlong *)(lVar12 + 0xa8) == 0) {
        lVar25 = lVar12;
      }
      lVar6 = (longlong)local_114 * 0xa8;
      lVar17 = *(longlong *)(lVar25 + 0x18 + lVar6);
      lVar25 = lVar25 + lVar6;
      if (lVar17 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar17 + 0x10);
      }
      *(undefined8 *)(param_9 + 0xe0) = uVar11;
      *(undefined4 *)(param_9 + 0xec) = *(undefined4 *)(lVar25 + 0x58);
      iVar5 = *(int *)(lVar25 + 0x5c);
      *(int *)(param_9 + 0xf0) = iVar5;
      *(undefined4 *)(param_9 + 0xf4) = *(undefined4 *)(lVar25 + 0x60);
      lVar17 = *(longlong *)(lVar25 + 0x20);
      if ((lVar17 != 0) && (*(int *)(lVar17 + 8) != -1)) {
        *(undefined8 *)(param_9 + 0xe0) = *(undefined8 *)(lVar17 + 0x10);
        *(uint *)(param_9 + 0xec) = *(uint *)(lVar25 + 0x28) & 0xffffff;
        *(uint *)(param_9 + 0x11c) =
             *(uint *)(param_9 + 0x11c) & 0xfffffff8 | *(byte *)(lVar25 + 0x2b) & 7;
      }
      if (iVar5 == 0) {
        *(undefined8 *)(param_9 + 0xf8) = *(undefined8 *)(lVar25 + 0x48);
        *(undefined4 *)(param_9 + 0x100) = *(undefined4 *)(lVar25 + 0x50);
        *(undefined1 *)(param_9 + 0x118) = *(undefined1 *)(lVar25 + 0x80);
        *(undefined8 *)(param_9 + 0x110) = *(undefined8 *)(lVar25 + 0x88);
        *(undefined4 *)(param_9 + 0x108) = *(undefined4 *)(lVar25 + 0x90);
      }
      else {
        *(undefined4 *)(param_9 + 0xf8) = *(undefined4 *)(lVar25 + 100);
        *(int *)(param_9 + 0xfc) = (*(int *)(lVar25 + 0x6c) - *(int *)(lVar25 + 0x68)) + 1;
      }
      *(uint *)(param_9 + 0xe8) = uVar22 & 0x3fffffff | 0x80000000;
      *(undefined8 *)(lVar7 + 0x138) = 0xffffffffffffffff;
      *(undefined4 *)(lVar7 + 0x140) = 0;
      *(byte *)(lVar7 + 0x144) = *(byte *)(lVar7 + 0x150) & 0x7f;
      *(undefined4 *)(lVar7 + 0x148) = 0x1b;
      *(undefined1 *)(lVar7 + 0x14c) = 0;
      *(undefined8 *)(lVar7 + 0x130) = param_6;
      lVar25 = *(longlong *)(lVar12 + 0xa8);
      if (*(longlong *)(lVar12 + 0xa8) == 0) {
        lVar25 = lVar12;
      }
      fVar27 = *(float *)(lVar25 + 0x74 + lVar6);
      if (7.9990234 <= fVar27) {
        fVar27 = 7.9990234;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
      fVar28 = *(float *)(lVar25 + 0x78 + lVar6);
      if (7.9990234 <= fVar28) {
        fVar28 = 7.9990234;
      }
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      *(uint *)(lVar7 + 0x140) =
           ((uint)(longlong)(fVar28 * 1024.0) & 0x1fff) << 0x11 |
           *(byte *)(lVar12 + 0xde) & 0xf | ((uint)(longlong)(fVar27 * 1024.0) & 0x1fff) << 4;
      *(uint *)(lVar7 + 0x148) = (uVar4 & 7) + (param_5 & 7) * 8;
      *(byte *)(lVar7 + 0x14c) = param_7 & 0x3f;
      if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1402a83c2 FUN_1402a83c2 body=266 status=ok
// SIG undefined FUN_1402a83c2(void)

void FUN_1402a83c2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0xd808);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0xc1) {
      iVar6 = 0xc0;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0xc0 < *(uint *)(param_1 + 0xd80c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar5 = lVar2 * 0x120;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
      iVar3 = (int)(uVar5 / 0x120);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0xd80c) = iVar6;
    FUN_1402a84cc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1402a84cc FUN_1402a84cc body=151 status=ok
// SIG undefined FUN_1402a84cc(void)

void FUN_1402a84cc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xd800);
  if ((uint)param_3 < 0xc1) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x120);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xd800,0,param_3,0x120);
    memmove(*(void **)((longlong)param_1 + 0xd800),param_1,(longlong)param_2 * 0x120);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xd800,param_2,param_3,0x120);
  return;
}



// FUNCTION 1402a8564 FUN_1402a8564 body=491 status=ok
// SIG undefined FUN_1402a8564(void)

undefined8 *
FUN_1402a8564(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5
             ,undefined8 param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong local_58;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x10);
  }
  FUN_1402a8750(puVar4,*(undefined8 *)(param_1 + 8),puVar7,param_5,0,param_6);
  *puVar4 = &PTR_FUN_149e03550;
  puVar4[0xe] = param_1;
  puVar4[0xf] = param_2;
  puVar4[0x10] = param_3;
  *(uint *)(puVar4 + 0x11) = param_4;
  if ((param_4 >> 8 & 1) == 0) {
    uVar2 = puVar4[1];
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      local_58 = 0;
      do {
        lVar6 = FUN_14274e142(*(undefined8 *)(lVar3 + local_58),uVar2,param_2,param_3);
        if (lVar6 != 0) {
          LeaveCriticalSection(lpCriticalSection);
          puVar4[1] = lVar6;
          FUN_14009bf40(puVar4);
          *(undefined1 *)((longlong)puVar4 + 0x51) = 1;
          goto LAB_1402a866e;
        }
        local_58 = local_58 + 8;
      } while ((longlong)iVar1 * 8 != local_58);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar5 + 2) = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(undefined2 *)(puVar5 + 5) = 3;
  puVar5[6] = 0xffffffffffffffff;
  puVar5[7] = 0;
  *puVar5 = &PTR_FUN_149e05100;
  puVar5[9] = puVar4;
  puVar4[0xb] = puVar5;
  FUN_1402a87ea(puVar4);
LAB_1402a866e:
  if ((param_4 >> 8 & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_1467b9cee((longlong *)(param_1 + 0x20),iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = puVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  return puVar4;
}



// FUNCTION 1402a8750 FUN_1402a8750 body=153 status=ok
// SIG undefined FUN_1402a8750(void)

undefined8 *
FUN_1402a8750(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             byte param_5,longlong param_6)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149e064f0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(byte *)((longlong)param_1 + 0x54) = param_5;
  *(bool *)((longlong)param_1 + 0x55) = param_6 != 0;
  if (param_4 != 0) {
    FUN_14274e1bc(param_1 + 2,param_4);
    param_5 = *(byte *)((longlong)param_1 + 0x54) & 1;
  }
  lVar1 = -1;
  if (param_5 == 0) {
    lVar1 = param_6;
  }
  param_1[1] = lVar1;
  *param_1 = &PTR_LAB_149e05060;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  return param_1;
}



// FUNCTION 1402a87ea FUN_1402a87ea body=278 status=ok
// SIG undefined FUN_1402a87ea(void)

void FUN_1402a87ea(longlong *param_1)

{
  byte bVar1;
  
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar1 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar1 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 != 1) {
      FUN_1402a8900(param_1[0xb],1,DAT_14c8442c0,3,0,0xffffffffffffffff,0);
                    /* WARNING: Could not recover jumptable at 0x0001402a88e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1,0);
      return;
    }
  }
  FUN_1402a8900(param_1[0xb],0,DAT_14c844288,3,0,0xffffffffffffffff,0);
  return;
}



// FUNCTION 1402a8900 FUN_1402a8900 body=324 status=ok
// SIG undefined FUN_1402a8900(void)

void FUN_1402a8900(longlong *param_1,char param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  *(undefined4 *)(param_1 + 6) = (undefined4)param_6;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_6._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)param_7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_7._4_4_;
  LOCK();
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  UNLOCK();
  param_1[4] = param_3;
  *(char *)(param_1 + 5) = (char)param_4;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_5;
  if (param_2 == '\0') {
    if (param_3 != 0) {
      puVar1 = (undefined8 *)param_1[3];
      if (puVar1 == (undefined8 *)0x0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c83f340) {
          FUN_144b3d300(&DAT_14c83f340);
          if (DAT_14c83f340 == -1) {
            DAT_14c83f2c0 = 0;
            DAT_14c83f300 = &DAT_14c83f2c0;
            atexit(FUN_1427508c2);
            _Init_thread_footer(&DAT_14c83f340);
          }
        }
        puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar2 = FUN_1449f340a();
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        ppuVar3 = &PTR_LAB_149e05d70;
        *puVar1 = &PTR_LAB_149e05d70;
        puVar1[2] = uVar2;
        param_1[3] = (longlong)puVar1;
      }
      else {
        ppuVar3 = (undefined **)*puVar1;
      }
      (*(code *)ppuVar3[3])(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001402a89f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[4] + 0x18))((longlong *)param_1[4],param_1,param_4);
      return;
    }
  }
  else {
    param_1[4] = 0;
  }
  FUN_14018802a(param_1[3]);
  param_1[3] = 0;
  (**(code **)(*param_1 + 0x30))(param_1);
  LOCK();
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  UNLOCK();
  return;
}



// FUNCTION 1402a8a44 FUN_1402a8a44 body=268 status=ok
// SIG undefined FUN_1402a8a44(void)

void FUN_1402a8a44(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if ((lVar5 != 0) && (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x1a4) = param_2;
    *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) | 8;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001402a8abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1402a8b50 FUN_1402a8b50 body=566 status=ok
// SIG undefined FUN_1402a8b50(void)

void FUN_1402a8b50(double *param_1,longlong *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
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
  
  if (*param_2 != 0) {
    lVar6 = *(longlong *)(*param_2 + 0x40);
    if (lVar6 != 0 && *(byte *)(lVar6 + 0x90) != 0) {
      if (*(byte *)(lVar6 + 0x90) < 2) {
        dVar12 = *(double *)(lVar6 + 0x30);
        dVar10 = *(double *)(lVar6 + 0x20);
        dVar16 = *(double *)(lVar6 + 0x28);
      }
      else {
        dVar10 = *(double *)(lVar6 + 0xf0);
        dVar16 = *(double *)(lVar6 + 0xf8);
        dVar11 = (double)*(float *)(lVar6 + 0x40);
        dVar9 = (double)*(float *)(lVar6 + 0x44);
        dVar14 = (double)*(float *)(lVar6 + 0x48);
        dVar12 = *(double *)(lVar6 + 0x100);
        dVar13 = (double)*(float *)(lVar6 + 0x4c);
        dVar15 = dVar11 * dVar16 - dVar10 * dVar9;
        dVar15 = dVar15 + dVar15;
        dVar8 = dVar14 * dVar10 - dVar12 * dVar11;
        dVar8 = dVar8 + dVar8;
        dVar7 = dVar9 * dVar12 - dVar16 * dVar14;
        dVar7 = dVar7 + dVar7;
        dVar12 = (dVar11 * dVar8 - dVar7 * dVar9) + dVar15 * dVar13 + dVar12 +
                 *(double *)(lVar6 + 0x30);
        dVar16 = (dVar14 * dVar7 - dVar15 * dVar11) + dVar8 * dVar13 + dVar16 +
                 *(double *)(lVar6 + 0x28);
        dVar10 = (dVar9 * dVar15 - dVar8 * dVar14) + dVar13 * dVar7 + dVar10 +
                 *(double *)(lVar6 + 0x20);
      }
      dVar7 = param_3[2];
      dVar8 = *param_3;
      dVar9 = param_3[1];
      fVar1 = *(float *)(lVar6 + 0xa0);
      fVar2 = *(float *)(lVar6 + 0x9c);
      fVar3 = *(float *)(lVar6 + 0xac);
      fVar4 = *(float *)(lVar6 + 0xa8);
      fVar5 = *(float *)(lVar6 + 0xa4);
      *param_1 = (double)*(float *)(lVar6 + 0x98) -
                 ((dVar9 - dVar16) * (double)fVar3 - (dVar7 - dVar12) * (double)fVar4);
      param_1[1] = (double)fVar2 -
                   ((double)fVar5 * (dVar7 - dVar12) - (dVar8 - dVar10) * (double)fVar3);
      param_1[2] = (double)fVar1 -
                   ((dVar8 - dVar10) * (double)fVar4 - (dVar9 - dVar16) * (double)fVar5);
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}



// FUNCTION 1402a8da0 FUN_1402a8da0 body=345 status=ok
// SIG undefined FUN_1402a8da0(void)

void FUN_1402a8da0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = FUN_1402a90ea();
  lVar9 = (longlong)iVar6 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar8 = *(undefined8 **)(param_1 + 8);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar8 + 1) = 0x18;
    *puVar8 = &PTR_FUN_14a2e8e30;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *(undefined8 **)(param_1 + 8) = puVar8;
  }
  uVar2 = *(ulonglong *)(lVar9 + 8);
  if ((uVar2 & 2) == 0) {
    local_34 = *(undefined4 *)(puVar8 + 5);
    *(ulonglong *)(lVar9 + 8) = uVar2 | 2;
    FUN_1402a8efa(lVar9 + 0x20,&local_34,(uint)uVar2 & 1);
    iVar11 = *(int *)(puVar8 + 5);
  }
  else {
    uVar7 = (uint)uVar2 & 1;
    lVar10 = lVar9 + 0x20;
    if (*(longlong *)(lVar9 + 0x40) != 0) {
      lVar10 = *(longlong *)(lVar9 + 0x40);
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)uVar7 * 4);
    if (iVar11 != -1) goto LAB_1402a8e89;
    iVar11 = *(int *)(puVar8 + 5);
    *(int *)(lVar10 + (ulonglong)uVar7 * 4) = iVar11;
  }
  *(uint *)(puVar8 + 5) = iVar11 + 1U;
  if (*(uint *)((longlong)puVar8 + 0x2c) < iVar11 + 1U) {
    FUN_1446f48e2(puVar8 + 4,iVar11);
  }
  *(int *)(puVar8[4] + (longlong)iVar11 * 4) = iVar6;
  iVar11 = *(int *)(puVar8 + 3);
  *(uint *)(puVar8 + 3) = iVar11 + 1U;
  if (*(uint *)((longlong)puVar8 + 0x1c) < iVar11 + 1U) {
    FUN_1402a8f74(puVar8 + 2,iVar11);
  }
LAB_1402a8e89:
  lVar9 = puVar8[2];
  *(undefined8 *)(lVar9 + 0x10 + (longlong)iVar11 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar9 + (longlong)iVar11 * 0x18);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402a8efa FUN_1402a8efa body=121 status=ok
// SIG undefined FUN_1402a8efa(void)

uint FUN_1402a8efa(longlong param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1400cc390(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  uVar3 = (ulonglong)param_3;
  memmove((void *)(lVar2 + uVar3 * 4 + 4),(void *)(lVar2 + uVar3 * 4),
          (ulonglong)(iVar1 - param_3) << 2);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  *(undefined4 *)(lVar2 + uVar3 * 4) = *param_2;
  return param_3;
}



// FUNCTION 1402a8f74 FUN_1402a8f74 body=373 status=ok
// SIG undefined FUN_1402a8f74(void)

void FUN_1402a8f74(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402a8ffd;
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
LAB_1402a8ffd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1402a90ea FUN_1402a90ea body=1728 status=ok
// SIG undefined FUN_1402a90ea(void)

ulonglong FUN_1402a90ea(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint *puVar24;
  undefined1 auStack_d8 [40];
  undefined4 *local_b0;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  uint *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong local_80;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_1 + 0x210;
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar18 = uVar2 & 0x7fffffff ^ uVar2 >> 0x10;
  uVar2 = *(uint *)(param_1 + 0x280);
  uVar3 = uVar2 & uVar18;
  puVar15 = (undefined4 *)(param_1 + 0x268);
  puVar11 = *(undefined4 **)(param_1 + 0x270);
  puVar9 = puVar11;
  if (puVar11 == (undefined4 *)0x0) {
    puVar9 = puVar15;
  }
  puVar5 = (undefined4 *)(param_1 + 0x250);
  do {
    if (puVar9[(int)uVar3] == uVar18) {
      puVar14 = *(undefined4 **)(param_1 + 600);
      if (*(undefined4 **)(param_1 + 600) == (undefined4 *)0x0) {
        puVar14 = puVar5;
      }
      uVar23 = (ulonglong)(int)puVar14[(int)uVar3];
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x210) + uVar23 * 8) == param_2)
      goto LAB_1402a954c;
    }
    uVar3 = uVar3 + 1 & uVar2;
  } while (uVar3 != (*(int *)(param_1 + 0x284) + uVar18 + 1 & uVar2));
  iVar8 = *(int *)(param_1 + 0x248);
  local_b0 = puVar5;
  local_a0 = param_2;
  if ((ulonglong)(uVar2 * 3) <=
      (ulonglong)(((longlong)*(int *)(param_1 + 0x218) - (longlong)iVar8) * 5)) {
    puVar9 = *(undefined4 **)(param_1 + 600);
    if (puVar9 == (undefined4 *)0x0) {
      local_60[0] = *puVar5;
    }
    *(undefined8 *)(param_1 + 600) = 0;
    local_50 = *(undefined4 *)(param_1 + 0x260);
    local_4c = *(undefined4 *)(param_1 + 0x264);
    *(undefined8 *)(param_1 + 0x260) = 0x100000000;
    if (puVar11 == (undefined4 *)0x0) {
      local_78[0] = *puVar15;
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
    local_68 = *(undefined4 *)(param_1 + 0x278);
    local_64 = *(undefined4 *)(param_1 + 0x27c);
    *(undefined8 *)(param_1 + 0x278) = 0x100000000;
    iVar8 = uVar2 * 2 + 1;
    *(int *)(param_1 + 0x280) = iVar8;
    *(undefined4 *)(param_1 + 0x284) = 0;
    iVar13 = uVar2 * 2 + 2;
    local_70 = puVar11;
    local_58 = puVar9;
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (uVar2 * 2 < 0x7ffffffe) {
      FUN_14475fe8c();
      iVar8 = *(int *)(param_1 + 0x280);
      iVar13 = *(int *)(param_1 + 0x260);
      iVar7 = *(int *)(param_1 + 0x264);
    }
    else {
      iVar13 = 0;
      iVar7 = 1;
    }
    uVar3 = iVar8 + 1;
    *(int *)(param_1 + 0x260) = iVar8 + iVar13 + 1;
    if ((uint)(iVar7 - iVar13) < uVar3) {
      FUN_146f3c7b6(local_b0);
      uVar3 = *(int *)(param_1 + 0x280) + 1;
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    iVar8 = *(int *)(param_1 + 0x27c);
    if (iVar8 < (int)uVar3) {
      FUN_14476002c(puVar15,uVar3);
      iVar8 = *(int *)(param_1 + 0x27c);
      uVar3 = *(int *)(param_1 + 0x280) + 1;
    }
    iVar13 = *(int *)(param_1 + 0x278);
    *(uint *)(param_1 + 0x278) = iVar13 + uVar3;
    if ((uint)(iVar8 - iVar13) < uVar3) {
      FUN_147138312(puVar15,iVar13);
    }
    puVar5 = *(undefined4 **)(param_1 + 0x270);
    if (*(undefined4 **)(param_1 + 0x270) == (undefined4 *)0x0) {
      puVar5 = puVar15;
    }
    FUN_14471858a(puVar5 + iVar13,uVar3);
    param_2 = local_a0;
    puVar5 = local_78;
    if (puVar11 != (undefined4 *)0x0) {
      puVar5 = puVar11;
    }
    iVar8 = 0;
    do {
      puVar14 = (undefined4 *)(longlong)iVar8;
      uVar3 = puVar5[(longlong)puVar14];
      iVar13 = -uVar3;
      if (!SBORROW4(0,uVar3)) {
        puVar20 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          puVar20 = local_60;
        }
        local_a4 = puVar20[(longlong)puVar14];
        uVar4 = *(uint *)(param_1 + 0x280);
        uVar16 = uVar4 & uVar3;
        puVar14 = *(undefined4 **)(param_1 + 0x270);
        puVar20 = puVar14;
        if (puVar14 == (undefined4 *)0x0) {
          puVar20 = puVar15;
        }
        lVar22 = (longlong)(int)uVar16;
        uVar19 = puVar20[lVar22];
        if (!SBORROW4(0,uVar19)) {
          local_98 = puVar20 + lVar22;
          uVar17 = uVar16 - uVar19 & uVar4;
          uVar21 = 0;
          local_a8 = uVar19;
          local_90 = puVar14;
          do {
            if (uVar17 < uVar21) {
              if (*(uint *)(param_1 + 0x284) < uVar21) {
                *(uint *)(param_1 + 0x284) = uVar21;
                local_a8 = *local_98;
              }
              puVar14 = *(undefined4 **)(param_1 + 600);
              if (*(undefined4 **)(param_1 + 600) == (undefined4 *)0x0) {
                puVar14 = local_b0;
              }
              iVar13 = puVar14[lVar22];
              puVar14[lVar22] = local_a4;
              puVar14 = *(undefined4 **)(param_1 + 0x270);
              if (*(undefined4 **)(param_1 + 0x270) == (undefined4 *)0x0) {
                puVar14 = puVar15;
              }
              puVar14[lVar22] = uVar3;
              uVar4 = *(uint *)(param_1 + 0x280);
              local_90 = *(undefined4 **)(param_1 + 0x270);
              uVar21 = uVar17;
              local_a4 = iVar13;
              uVar3 = local_a8;
            }
            uVar21 = uVar21 + 1;
            uVar16 = uVar16 + 1 & uVar4;
            puVar14 = local_90;
            if (local_90 == (undefined4 *)0x0) {
              puVar14 = puVar15;
            }
            lVar22 = (longlong)(int)uVar16;
            local_98 = puVar14 + lVar22;
            local_a8 = *local_98;
            uVar17 = uVar16 - local_a8 & uVar4;
          } while (!SBORROW4(0,local_a8));
          if (*(uint *)(param_1 + 0x284) < uVar21) {
            *(uint *)(param_1 + 0x284) = uVar21;
          }
        }
        puVar14 = *(undefined4 **)(param_1 + 600);
        if (*(undefined4 **)(param_1 + 600) == (undefined4 *)0x0) {
          puVar14 = local_b0;
        }
        puVar14[lVar22] = local_a4;
        puVar14 = *(undefined4 **)(param_1 + 0x270);
        if (*(undefined4 **)(param_1 + 0x270) == (undefined4 *)0x0) {
          puVar14 = puVar15;
        }
        puVar14[lVar22] = uVar3;
        iVar13 = local_a4;
        local_88 = puVar9;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != uVar2 + 1 + (uint)(uVar2 == 0xffffffff));
    if (puVar11 != (undefined4 *)0x0) {
      FUN_1400020a8(puVar11,puVar14,uVar3,iVar13);
    }
    if (puVar9 != (undefined4 *)0x0) {
      FUN_1400020a8(puVar9);
    }
    iVar8 = *(int *)(param_1 + 0x248);
  }
  if (iVar8 < 1) {
    uVar2 = *(uint *)(param_1 + 0x218);
    *(uint *)(param_1 + 0x218) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x21c) < uVar2 + 1) {
      FUN_1402a98c0(local_80,uVar2);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x210) + (longlong)(int)uVar2 * 8) = param_2;
    iVar8 = *(int *)(param_1 + 0x228);
    *(uint *)(param_1 + 0x228) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x22c) < iVar8 + 1U) {
      FUN_1447602e0((longlong *)(param_1 + 0x220),iVar8);
    }
    puVar24 = (uint *)((longlong)iVar8 * 4 + *(longlong *)(param_1 + 0x220));
  }
  else {
    uVar2 = FUN_14020b4c6(param_1 + 0x230);
    *(ulonglong *)(*(longlong *)(param_1 + 0x210) + (longlong)(int)uVar2 * 8) = param_2;
    puVar24 = (uint *)((longlong)(int)uVar2 * 4 + *(longlong *)(param_1 + 0x220));
  }
  uVar23 = (ulonglong)uVar2;
  *puVar24 = uVar18;
  uVar3 = *(uint *)(param_1 + 0x280);
  uVar4 = uVar3 & uVar18;
  uVar6 = (ulonglong)uVar4;
  puVar11 = *(undefined4 **)(param_1 + 0x270);
  puVar9 = puVar11;
  if (puVar11 == (undefined4 *)0x0) {
    puVar9 = puVar15;
  }
  uVar16 = puVar9[uVar6];
  uVar19 = -uVar16;
  if (!SBORROW4(0,uVar16)) {
    puVar24 = puVar9 + uVar6;
    uVar17 = uVar4 - uVar16 & uVar3;
    uVar21 = 0;
    uVar12 = uVar23;
    uVar19 = uVar4;
    do {
      if (uVar17 < uVar21) {
        if (*(uint *)(param_1 + 0x284) < uVar21) {
          *(uint *)(param_1 + 0x284) = uVar21;
          uVar16 = *puVar24;
        }
        puVar11 = *(undefined4 **)(param_1 + 600);
        if (*(undefined4 **)(param_1 + 600) == (undefined4 *)0x0) {
          puVar11 = local_b0;
        }
        uVar2 = puVar11[uVar6];
        puVar11[uVar6] = (int)uVar12;
        puVar11 = *(undefined4 **)(param_1 + 0x270);
        if (*(undefined4 **)(param_1 + 0x270) == (undefined4 *)0x0) {
          puVar11 = puVar15;
        }
        puVar11[uVar6] = uVar18;
        uVar3 = *(uint *)(param_1 + 0x280);
        puVar11 = *(undefined4 **)(param_1 + 0x270);
        uVar12 = (ulonglong)uVar2;
        uVar18 = uVar16;
        uVar21 = uVar17;
      }
      uVar2 = (uint)uVar12;
      uVar21 = uVar21 + 1;
      uVar19 = uVar19 + 1 & uVar3;
      puVar9 = puVar11;
      if (puVar11 == (undefined4 *)0x0) {
        puVar9 = puVar15;
      }
      uVar6 = (ulonglong)(int)uVar19;
      puVar24 = puVar9 + uVar6;
      uVar16 = *puVar24;
      uVar17 = uVar19 - uVar16 & uVar3;
    } while (!SBORROW4(0,uVar16));
    param_2 = local_a0;
    if (*(uint *)(param_1 + 0x284) < uVar21) {
      *(uint *)(param_1 + 0x284) = uVar21;
    }
  }
  puVar11 = local_b0;
  if (*(undefined4 **)(param_1 + 600) != (undefined4 *)0x0) {
    puVar11 = *(undefined4 **)(param_1 + 600);
  }
  puVar11[uVar6] = uVar2;
  if (*(undefined4 **)(param_1 + 0x270) != (undefined4 *)0x0) {
    puVar15 = *(undefined4 **)(param_1 + 0x270);
  }
  puVar15[uVar6] = uVar18;
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  iVar8 = *(int *)(param_1 + 0x208);
  *(uint *)(param_1 + 0x208) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar8 + 1U) {
    FUN_1402a97ac((longlong *)(param_1 + 0x200),iVar8,puVar11,uVar19);
  }
  lVar22 = *(longlong *)(param_1 + 0x200);
  lVar10 = (longlong)iVar8 * 0x50;
  *(ulonglong *)(lVar22 + lVar10) = param_2;
  *(undefined8 *)(lVar22 + 8 + lVar10) = 0;
  *(undefined4 *)(lVar22 + 0x10 + lVar10) = uVar1;
  *(undefined4 *)(lVar22 + 0x14 + lVar10) = 0;
  *(undefined1 *)(lVar22 + 0x18 + lVar10) = 0;
  *(undefined1 *)(lVar22 + 0x19 + lVar10) = 0;
  *(undefined8 *)(lVar22 + 0x40 + lVar10) = 0;
  *(undefined8 *)(lVar22 + 0x48 + lVar10) = 0x800000000;
LAB_1402a954c:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 1402a97ac FUN_1402a97ac body=275 status=ok
// SIG undefined FUN_1402a97ac(void)

void FUN_1402a97ac(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402a98c0 FUN_1402a98c0 body=353 status=ok
// SIG undefined FUN_1402a98c0(void)

void FUN_1402a98c0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402a9945;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1402a9945:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402a9a22 FUN_1402a9a22 body=26 status=ok
// SIG undefined FUN_1402a9a22(void)

void FUN_1402a9a22(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402a9a3c(param_1,*(undefined4 *)(param_1 + 8),param_2,0x38);
    return;
  }
  return;
}



// FUNCTION 1402a9a3c FUN_1402a9a3c body=469 status=ok
// SIG undefined FUN_1402a9a3c(void)

void FUN_1402a9a3c(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402a9b6c:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1402a9ba9:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402a9aa6;
LAB_1402a9a9b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402a9aa6:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001402a9ad3;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402a9b29:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402a9ba9;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402a9b6c;
code_r0x0001402a9ad3:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1402a9b29;
    }
  }
  goto LAB_1402a9a9b;
}



// FUNCTION 1402a9c22 FUN_1402a9c22 body=1095 status=ok
// SIG undefined FUN_1402a9c22(void)

void FUN_1402a9c22(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (1 < *(byte *)(param_1 + 0x18)) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (undefined1 *)0x0;
    uStack_70 = 0;
    local_58 = 0;
    FUN_14178da4c(param_1 + 0x18,&local_90,lVar4);
    FUN_1400d6aa5(&local_78,lVar4,&local_90);
    local_90 = lVar4 + 0x60;
    if (lVar4 == 0) {
      local_90 = lVar4;
    }
    lVar4 = local_90 + 0x48;
    if (local_90 == 0) {
      local_80 = 0;
      lVar4 = 0;
    }
    else {
      local_80 = *(undefined8 *)(local_90 + 0x58);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    local_88 = lVar4;
    if (local_78._4_4_ == 1) {
      if ((int)local_78 == 0) {
        uVar9 = local_68._4_4_;
      }
      else {
        uVar9 = FUN_1447f0274();
        uVar9 = uVar9 >> 3;
      }
      *(uint *)(param_1 + 0xb8) = uVar9;
      *(ulonglong *)(param_1 + 0xb0) = uVar9 * uStack_70 - *(longlong *)(lVar4 + 0x60);
    }
    goto LAB_1402a9de3;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined1 *)0x0;
  uStack_70 = 0;
  local_58 = 0;
  uVar9 = *(uint *)(lVar4 + 0x28);
  if ((uVar9 >> 0x14 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0x1a);
    bVar11 = *(byte *)(param_1 + 0x19);
    if (cVar2 == '\x02') {
      uVar13 = *(uint *)(param_1 + 0x24);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(lVar4 + 0x24);
      }
LAB_1402a9cbd:
      uVar15 = *(uint *)(param_1 + 0x1c);
      uVar14 = *(uint *)(param_1 + 0x20);
      if (uVar14 == 0) goto LAB_1402a9cca;
    }
    else {
      if (cVar2 == '\x04') {
        bVar11 = 0;
        uVar13 = 4;
        goto LAB_1402a9cbd;
      }
      if (cVar2 != '\x03') {
        uVar13 = *(uint *)((longlong)&DAT_14c873428 + (ulonglong)((uint)bVar11 * 0x30));
        goto LAB_1402a9cbd;
      }
      uVar15 = *(uint *)(param_1 + 0x1c);
      uVar13 = 1;
LAB_1402a9cca:
      uVar14 = (*(int *)(lVar4 + 0x20) - uVar15) / uVar13;
    }
    if (((*(byte *)(param_1 + 0x1b) & 2) == 0) && ((*(byte *)(param_1 + 0x1b) & 1) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    iVar12 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)bVar11 * 0x30));
    if (iVar12 == 0x13) {
      iVar12 = 0x15;
    }
    else if (iVar12 == 0x5a) {
      iVar12 = 0x57;
    }
    else if (iVar12 == 0x1b) {
      iVar12 = 0x1c;
    }
    local_78 = (undefined1 *)CONCAT44(1,iVar12);
    uVar10 = (ulonglong)uVar15 + *(longlong *)(lVar4 + 0xd8);
    uVar16 = 0;
    uStack_70 = uVar10 / uVar13;
    uVar10 = uVar10 % (ulonglong)uVar13;
    local_68 = (ulonglong)uVar14;
    if (cVar2 == '\x02') {
      local_68 = CONCAT44(uVar13,uVar14);
      uVar16 = (ulonglong)uVar13;
    }
    else if (cVar2 == '\x04') {
      local_78 = &DAT_100000027;
      local_58 = 1;
      iVar12 = 0x27;
    }
  }
  else {
    uVar16 = 0;
    iVar12 = 0;
    bVar7 = false;
    uVar10 = param_2;
  }
  uVar8 = uStack_70;
  local_90 = lVar4 + 0x30;
  if (lVar4 == 0) {
    local_90 = lVar4;
  }
  lVar4 = local_90 + 0x48;
  if (local_90 == 0) {
    local_80 = 0;
    lVar4 = 0;
  }
  else {
    local_80 = *(undefined8 *)(local_90 + 0x58);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  local_88 = lVar4;
  if ((uVar9 >> 0x14 & 1) == 0) {
    if (iVar12 != 0) {
      uVar9 = FUN_1447f0274(0,uVar10);
      uVar16 = (ulonglong)(uVar9 >> 3);
    }
    *(int *)(param_1 + 0xb8) = (int)uVar16;
    *(ulonglong *)(param_1 + 0xb0) = uVar8 * uVar16 - *(longlong *)(lVar4 + 0x60);
  }
  if (bVar7) {
    puVar5 = *(undefined8 **)(param_1 + 0xa8);
    uVar3 = **(undefined4 **)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(*(undefined4 **)(param_1 + 0x30) + 4);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    local_44 = 1;
    if (DAT_14ca81480 == 0) {
      local_44 = uVar3;
    }
    local_50 = 1;
    local_48 = 0;
    local_a8 = L"Counter";
    local_a0 = 4;
    local_b8 = 4;
    local_c0 = 8;
    local_c8 = 2;
    local_b0 = (undefined8 *)(param_1 + 0xa8);
    local_40 = local_44;
    FUN_140a6e772(uVar6,&local_50,uVar3,8);
  }
LAB_1402a9de3:
  *(undefined8 *)(param_1 + 0xa0) = local_58;
  *(undefined4 *)(param_1 + 0x90) = (undefined4)local_68;
  *(uint *)(param_1 + 0x94) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x9c) = uStack_60._4_4_;
  *(int *)(param_1 + 0x80) = (int)local_78;
  *(int *)(param_1 + 0x84) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x88) = (undefined4)uStack_70;
  *(undefined4 *)(param_1 + 0x8c) = uStack_70._4_4_;
  FUN_1447f028a(&local_50);
  *(undefined8 *)(param_1 + 0x54) = local_50;
  FUN_14493819a(param_1 + 0x28,param_2,&local_90,0x20);
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402aa06a FUN_1402aa06a body=54 status=ok
// SIG undefined FUN_1402aa06a(void)

void FUN_1402aa06a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8);
  (**(code **)(*plVar1 + 0xa0))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),param_1 + 0x58,
             *(undefined8 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}



// FUNCTION 1402aa0a0 FUN_1402aa0a0 body=723 status=ok
// SIG undefined FUN_1402aa0a0(void)

void FUN_1402aa0a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) < 0) {
    FUN_147332416(plVar1);
  }
  iVar3 = *(int *)(param_1 + 0x118);
  if (iVar3 == 0) {
    uVar9 = FUN_1449385e8(param_1,param_2);
    iVar3 = *(int *)(param_1 + 0x1f0);
    *(uint *)(param_1 + 0x1f0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 500) < iVar3 + 1U) {
      FUN_1402aa376(plVar1,iVar3);
    }
    *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar9;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1f0);
    if (iVar4 < iVar3) {
      *(int *)(param_1 + 0x1f0) = iVar3;
      if ((uint)(*(int *)(param_1 + 500) - iVar4) < (uint)(iVar3 - iVar4)) {
        FUN_1402aa376(plVar1);
      }
      memset((void *)((longlong)iVar4 * 8 + *plVar1),0,(longlong)(iVar3 - iVar4) << 3);
    }
    else {
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x1f0) = iVar3;
        FUN_147332446(plVar1);
      }
    }
    if (0 < *(int *)(param_1 + 0x118)) {
      local_88 = (void *)(param_1 + 0x10);
      plVar1 = (longlong *)(param_2 + 0x70);
      local_98 = (longlong *)(param_2 + 0x98);
      local_90 = param_2 + 0x1a8;
      lVar11 = 0;
      lVar13 = 0;
      do {
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar10 = puVar12 + 0x22;
        if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
          FUN_140023dd8(plVar1,0x120);
          puVar12 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
          puVar10 = puVar12 + 0x22;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar10;
        *puVar12 = &PTR_FUN_14a328e38;
        puVar12[8] = 0;
        puVar12[9] = 0x3f80000000000000;
        puVar12[0x17] = 0;
        puVar12[0x18] = 0;
        puVar12[0x19] = 0;
        puVar12[0x1a] = 0;
        puVar12[0x1b] = 0;
        puVar12[0x1c] = 0;
        puVar12[0x1d] = 0;
        puVar12[0x1e] = 0;
        puVar12[0x1f] = 0;
        iVar3 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
          FUN_1448cfae8(local_98,iVar3);
        }
        *(undefined8 **)(*local_98 + (longlong)iVar3 * 8) = puVar12;
        memcpy(puVar12 + 2,local_88,0x100);
        lVar5 = *(longlong *)(param_1 + 0x110);
        puVar2 = (undefined4 *)(lVar5 + lVar11);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(undefined4 *)(puVar12 + 0x1e) = *puVar2;
        *(undefined4 *)((longlong)puVar12 + 0xf4) = uVar6;
        *(undefined4 *)(puVar12 + 0x1f) = uVar7;
        *(undefined4 *)((longlong)puVar12 + 0xfc) = uVar8;
        puVar12[0x20] = *(undefined8 *)(lVar5 + 0x10 + lVar11);
        local_78 = puVar12 + 2;
        FUN_144938434();
        local_80 = DAT_14ca642b0;
        uVar9 = FUN_1402aa4d8(local_90,plVar1,&local_78,&local_80);
        *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + lVar13 * 8) = uVar9;
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x20;
      } while (lVar13 < *(int *)(param_1 + 0x118));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402aa376 FUN_1402aa376 body=353 status=ok
// SIG undefined FUN_1402aa376(void)

void FUN_1402aa376(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402aa3fb;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1402aa3fb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402aa4d8 FUN_1402aa4d8 body=661 status=ok
// SIG undefined FUN_1402aa4d8(void)

undefined8 *
FUN_1402aa4d8(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca64318) {
    FUN_144b3d300(&DAT_14ca64318);
    if (DAT_14ca64318 == -1) {
      FUN_1402aa898(local_40);
      local_50 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_88 = L"VirtualShadowMapUbSlot";
      local_90 = L"VirtualShadowMap";
      local_98 = L"FVirtualShadowMapUniformParameters";
      local_58 = 0;
      local_70 = 0x100;
      local_78 = 0x82;
      local_68 = local_40;
      FUN_140b49562(&DAT_14ca64298,1,2);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430cc7d2);
      _Init_thread_footer(&DAT_14ca64318);
    }
  }
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca642e0;
  puVar6[4] = DAT_14ca642e0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca64298;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a328e40;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402aa76e FUN_1402aa76e body=296 status=ok
// SIG undefined FUN_1402aa76e(void)

void FUN_1402aa76e(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,8);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 8;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if ((param_2 != 0) && (_Src != (void *)0x0)) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 1402aa898 FUN_1402aa898 body=226 status=ok
// SIG undefined FUN_1402aa898(void)

longlong * FUN_1402aa898(longlong *param_1)

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
  pcVar13 = FUN_145df7134;
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



// FUNCTION 1402aa97c FUN_1402aa97c body=111 status=ok
// SIG undefined FUN_1402aa97c(void)

undefined4 * FUN_1402aa97c(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402aa9ec();
  FUN_1448e935e(param_1,&local_38,&DAT_14caff7c8,param_3);
  FUN_1402aa9ec();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402aa9ec FUN_1402aa9ec body=289 status=ok
// SIG undefined FUN_1402aa9ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1402aa9ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caff870) {
    FUN_144b3d300(&DAT_14caff870);
    if (DAT_14caff870 == -1) {
      FUN_1402aab0e();
      FUN_1456eddcc();
      FUN_140db5666(&DAT_14caff7c8,0,&DAT_14caff760,L"FTranscodePageToGPU_CS",
                    L"/Engine/Private/Nanite/NaniteTranscode.usf",L"TranscodePageToGPU",5,0xc,
                    FUN_147ccc740,FUN_147ccc6e0,&LAB_14366cc24,&LAB_1410df0ee,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caffeb0);
      _DAT_14caff7c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14366cd01);
      _Init_thread_footer(&DAT_14caff870);
    }
  }
  return &DAT_14caff7c8;
}



// FUNCTION 1402aab0e FUN_1402aab0e body=258 status=ok
// SIG undefined FUN_1402aab0e(void)

void FUN_1402aab0e(void)

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
              0x110) < DAT_14cafff30) {
    FUN_144b3d300(&DAT_14cafff30);
    if (DAT_14cafff30 == -1) {
      FUN_1456edf16(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x172;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caffeb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436798a2);
      _Init_thread_footer(&DAT_14cafff30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402aac16 FUN_1402aac16 body=369 status=ok
// SIG undefined FUN_1402aac16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402aac16(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *_Dst;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  
  if (*param_2 != -1) {
    if ((DAT_14c963f20 == 0) && (DAT_14c963f18 == 0)) {
      FUN_140f9708a(&DAT_14c9647b8);
    }
    iVar3 = DAT_14c963f18;
    iVar7 = param_1 + 0x1fff;
    if (-1 < param_1) {
      iVar7 = param_1;
    }
    iVar7 = iVar7 >> 0xd;
    if (DAT_14c963f18 <= iVar7) {
      iVar1 = iVar7 + 1;
      uVar8 = iVar1 - DAT_14c963f18;
      uVar4 = DAT_14c963f1c - DAT_14c963f18;
      DAT_14c963f18 = iVar1;
      if (uVar4 < uVar8) {
        FUN_145dfffec(iVar3);
      }
      memset((void *)((longlong)iVar3 * 0x10 + DAT_14c963f10),0,(longlong)(int)uVar8 << 4);
    }
    _DAT_14c963f24 = DAT_14c963f18 << 0xd;
    piVar2 = (int *)(DAT_14c963f10 + (longlong)iVar7 * 0x10);
    lVar5 = *(longlong *)(DAT_14c963f10 + 8 + (longlong)iVar7 * 0x10);
    if (lVar5 == 0) {
      uVar6 = 0;
      _Dst = (void *)FUN_14001cc68(0x10000,0x10);
      memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x10000);
      *(void **)(piVar2 + 2) = _Dst;
      _DAT_14c963f28 = _DAT_14c963f28 + 0x10000;
      uVar4 = _DAT_14c963f28;
      if (_DAT_14c963f28 < DAT_14c963f2c) {
        uVar4 = DAT_14c963f2c;
      }
      lVar5 = *(longlong *)(piVar2 + 2);
      DAT_14c963f2c = uVar4;
    }
    if (*(int *)(lVar5 + (longlong)(param_1 % 0x2000) * 8) == -1) {
      *piVar2 = *piVar2 + 1;
      DAT_14c963f20 = DAT_14c963f20 + 1;
      lVar5 = *(longlong *)(piVar2 + 2);
    }
    *(undefined8 *)(lVar5 + (longlong)(param_1 % 0x2000) * 8) = *(undefined8 *)param_2;
    return;
  }
  FUN_14690040c(param_1);
  return;
}



// FUNCTION 1402aad87 FUN_1402aad87 body=2040 status=ok
// SIG undefined FUN_1402aad87(void)

longlong FUN_1402aad87(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                      char param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  code *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_4 & 0x10) != 0) {
    if (param_5 == '\0') {
      lVar2 = (**(code **)(*param_1 + 0x3d8))();
    }
    else {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x358))(param_1);
      lVar2 = (**(code **)(*plVar3 + 0x3d8))(plVar3);
    }
    goto LAB_1402aae76;
  }
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    if (DAT_14c951858 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1468c5283;
      local_c0 = FUN_142809da0;
      local_c8 = L"Engine";
      local_d0 = 0x400000000;
      local_d8 = 0x10000000;
      local_e0 = (code *)CONCAT44(local_e0._4_4_,8);
      local_e8 = (undefined2 *)CONCAT44(local_e8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    if (lVar2 != DAT_14c951858) {
      FUN_1402ab580();
      lVar1 = FUN_1402ab664(param_2,param_6);
      lVar2 = FUN_1402ab8a4(lVar1,param_1,param_3);
      if (lVar2 != 0) {
LAB_1402aaec4:
        FUN_1402ab5f2();
        goto LAB_1402aae76;
      }
      if ((param_4 >> 0x16 & 1) == 0) {
LAB_1402aae30:
        if ((DAT_14c872ba8 == '\x01') && ((*(uint *)(lVar1 + 8) >> 10 & 1) != 0)) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            FUN_140056680(&local_78,&DAT_149e01fe8);
          }
          else {
            local_78 = (code *)0x0;
            uStack_70 = 0;
            FUN_14005eb28(&local_78,0x80);
            FUN_1468fef7a(param_2,0,&local_78,0);
          }
          pcVar4 = local_78;
          if ((int)uStack_70 == 0) {
            pcVar4 = (code *)&DAT_149dfb77a;
          }
          if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
            FUN_140056680(&local_88,&DAT_149e01fe8);
          }
          else {
            local_88 = (undefined2 *)0x0;
            uStack_80 = 0;
            FUN_14005eb28(&local_88,0x80);
            FUN_1468fef7a(param_1,0,&local_88,0);
          }
          puVar5 = local_88;
          if ((int)uStack_80 == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
            FUN_140056680(&local_98,&DAT_149e01fe8);
          }
          else {
            local_98 = (undefined2 *)0x0;
            uStack_90 = 0;
            FUN_14005eb28(&local_98,0x80);
            FUN_1468fef7a(lVar1,0,&local_98,0);
          }
          puVar6 = local_98;
          if ((int)uStack_90 == 0) {
            puVar6 = &DAT_149dfb77a;
          }
          local_e8 = puVar5;
          local_e0 = pcVar4;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArchetype.cpp",0xae,
                        L"%s had RF_NeedLoad when searching for an archetype of %s in %s",puVar6);
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x3d0))
                          (*(longlong **)(lVar1 + 0x10),param_1,param_3);
      }
      else {
        lVar2 = FUN_144a797b2();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_1402aae30;
        plVar3 = *(longlong **)(param_2 + 0x40);
        if (param_5 == '\x01' && plVar3 != (longlong *)0x0) {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x358))(plVar3);
        }
        if ((plVar3 == (longlong *)0x0) || ((*(byte *)((longlong)plVar3 + 0xd6) & 4) == 0)) {
          FUN_1402ab5f2();
          goto LAB_1402aae5d;
        }
        do {
          if ((DAT_14c872ba8 == '\x01') && ((*(uint *)(plVar3 + 1) >> 10 & 1) != 0)) {
            if (*(longlong *)(param_2 + 0x10) == 0) {
              FUN_140056680(&local_78,&DAT_149e01fe8);
            }
            else {
              local_78 = (code *)0x0;
              uStack_70 = 0;
              FUN_14005eb28(&local_78,0x80);
              FUN_1468fef7a(param_2,0,&local_78,0);
            }
            pcVar4 = (code *)&DAT_149dfb77a;
            if ((int)uStack_70 != 0) {
              pcVar4 = local_78;
            }
            if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
              FUN_140056680(&local_88,&DAT_149e01fe8);
            }
            else {
              local_88 = (undefined2 *)0x0;
              uStack_80 = 0;
              FUN_14005eb28(&local_88,0x80);
              FUN_1468fef7a(param_1,0,&local_88,0);
            }
            puVar5 = &DAT_149dfb77a;
            if ((int)uStack_80 != 0) {
              puVar5 = local_88;
            }
            if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
              FUN_140056680(&local_98,&DAT_149e01fe8);
            }
            else {
              local_98 = (undefined2 *)0x0;
              uStack_90 = 0;
              FUN_14005eb28(&local_98,0x80);
              FUN_1468fef7a(lVar1,0,&local_98,0);
            }
            local_e8 = puVar5;
            local_e0 = pcVar4;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArchetype.cpp",0x9d,
                          L"%s had RF_NeedLoad when searching supers for an archetype of %s in %s");
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_78 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          lVar2 = FUN_1402ab8a4(plVar3,param_1,param_3);
          if (((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
             ((*(uint *)(lVar2 + 8) & 0x40) == 0)) goto LAB_1402aaec4;
          plVar3 = (longlong *)plVar3[8];
        } while ((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0xd6) & 4) != 0));
      }
      FUN_1402ab5f2();
      if (lVar2 != 0) goto LAB_1402aae76;
    }
  }
LAB_1402aae5d:
  if (param_5 == '\0') {
    lVar2 = param_1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 1000))(param_1);
      lVar2 = param_1[0x22];
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x358))(param_1);
    lVar2 = plVar3[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar2 = plVar3[0x22];
    }
  }
LAB_1402aae76:
  if (((DAT_14c872ba8 == '\x01') && (lVar2 != 0)) && ((*(uint *)(lVar2 + 8) >> 10 & 1) != 0)) {
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
      FUN_140056680(&local_78,&DAT_149e01fe8);
    }
    else {
      local_78 = (code *)0x0;
      uStack_70 = 0;
      FUN_14005eb28(&local_78,0x80);
      FUN_1468fef7a(param_2,0,&local_78,0);
    }
    pcVar4 = local_78;
    if ((int)uStack_70 == 0) {
      pcVar4 = (code *)&DAT_149dfb77a;
    }
    if ((param_1 == (longlong *)0x0) || (param_1[2] == 0)) {
      FUN_140056680(&local_88,&DAT_149e01fe8);
    }
    else {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      FUN_14005eb28(&local_88,0x80);
      FUN_1468fef7a(param_1,0,&local_88,0);
    }
    puVar5 = local_88;
    if ((int)uStack_80 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      FUN_140056680(&local_98,&DAT_149e01fe8);
    }
    else {
      local_98 = (undefined2 *)0x0;
      uStack_90 = 0;
      FUN_14005eb28(&local_98,0x80);
      FUN_1468fef7a(lVar2,0,&local_98,0);
    }
    puVar6 = local_98;
    if ((int)uStack_90 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_e8 = puVar5;
    local_e0 = pcVar4;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArchetype.cpp",0xc2,
                  L"%s had RF_NeedLoad when being set up as an archetype of %s in %s",puVar6);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ab580 FUN_1402ab580 body=114 status=ok
// SIG undefined FUN_1402ab580(void)

void FUN_1402ab580(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001402ab5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
  return;
}



// FUNCTION 1402ab5f2 FUN_1402ab5f2 body=114 status=ok
// SIG undefined FUN_1402ab5f2(void)

void FUN_1402ab5f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001402ab622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
  return;
}



// FUNCTION 1402ab664 FUN_1402ab664 body=567 status=ok
// SIG undefined FUN_1402ab664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402ab664(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c75ecd0 == '\0') {
    local_48 = 0;
    local_40 = param_2;
    FUN_1402aad87(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c963f30);
  iVar7 = iVar3 + 0x1fff;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  if ((iVar7 >> 0xd < DAT_14c963f18) &&
     (lVar4 = *(longlong *)(DAT_14c963f10 + 8 + (longlong)(iVar7 >> 0xd) * 0x10), lVar4 != 0)) {
    uVar2 = *(ulonglong *)(lVar4 + (longlong)(iVar3 % 0x2000) * 8);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c963f30);
    uVar6 = (uint)uVar2;
    if (uVar6 != 0xffffffff) {
      iVar3 = (int)(uVar2 >> 0x20);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar4 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        if (*(int *)(lVar4 + 0x10 + (uVar2 & 0xffff) * 0x18) == iVar3) {
          plVar5 = (longlong *)(lVar4 + (uVar2 & 0xffff) * 0x18);
LAB_1402ab727:
          lVar4 = *plVar5;
          goto LAB_1402ab72a;
        }
      }
      else if (_DAT_00000010 == iVar3) {
        plVar5 = (longlong *)0x0;
        goto LAB_1402ab727;
      }
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c963f30);
  }
  local_48 = 0;
  local_40 = param_2;
  lVar4 = FUN_1402aad87(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if ((*(longlong *)(param_1 + 0x20) == 0) ||
          ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 10 & 1) == 0)) {
    uVar6 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    local_34 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      local_34 = *(int *)(lVar8 + 0x10);
      bVar9 = local_34 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        local_34 = 0;
      }
      UNLOCK();
      if (bVar9) {
        local_34 = iVar7;
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    local_38 = uVar6;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c963f30);
    FUN_1402aac16(uVar1,&local_38);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c963f30);
  }
LAB_1402ab72a:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1402ab8a4 FUN_1402ab8a4 body=1440 status=ok
// SIG undefined FUN_1402ab8a4(void)

longlong FUN_1402ab8a4(ulonglong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  uint local_c0;
  uint local_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  byte local_70;
  byte local_6f;
  byte local_6e;
  undefined8 local_68;
  uint *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = param_3;
  uVar2 = FUN_14482ca40();
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (param_3 != 0) {
    if ((iVar5 < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
    local_d0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = uVar2 | 0x10000000;
    FUN_140163a0e(&DAT_14c964408,param_2,param_1,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  if ((iVar5 < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if (((DAT_14c949800 & 1) == 0) || (cVar1 = FUN_144a61b4f(), cVar1 == '\0')) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if (DAT_14c9644d8 != DAT_14c964504) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar7 = &DAT_14c964508;
    if (DAT_14c964510 != (undefined *)0x0) {
      puVar7 = DAT_14c964510;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(DAT_14c964518 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar13 = 0;
      do {
        lVar8 = DAT_14c9644d0 + (longlong)iVar5 * 0x20;
        if (*(ulonglong *)(DAT_14c9644d0 + (longlong)iVar5 * 0x20) == param_1) {
          lVar13 = 0;
          if ((lVar8 != 0) && (lVar4 = lVar8 + 8, lVar4 != 0)) {
            local_ac = (uint)uVar9;
            lVar13 = *(longlong *)(lVar8 + 8);
            plVar14 = *(longlong **)(lVar8 + 0x10);
            local_80 = 0;
            local_a8 = lVar4;
            if (lVar13 != 0 || plVar14 == (longlong *)0x0) {
              local_68 = 0x100000000;
              local_60 = &DAT_14c964330;
              local_58 = 0xffffffff;
              local_50 = 0;
              if (DAT_14c964348 != 0) {
                FUN_1449c0562(&local_68);
                lVar13 = *(longlong *)(lVar8 + 8);
                plVar14 = *(longlong **)(lVar8 + 0x10);
              }
              local_88 = local_58;
              local_80 = local_50;
              local_7c = local_4c;
              local_98 = local_68;
              local_90 = local_60;
              local_78 = &DAT_14c964320;
              bVar16 = lVar13 == 0;
              goto LAB_1402abafc;
            }
            local_90 = (uint *)(plVar14 + 2);
            iVar5 = (int)plVar14[5];
            uVar3 = 1;
            if (iVar5 == 0) {
              iVar10 = 0;
              iVar5 = 0;
              goto LAB_1402abcd4;
            }
            puVar15 = (uint *)plVar14[4];
            if ((uint *)plVar14[4] == (uint *)0x0) {
              puVar15 = local_90;
            }
            uVar6 = *puVar15;
            if (uVar6 != 0) {
              local_80 = 0;
              iVar10 = 0;
              goto LAB_1402abca8;
            }
            iVar10 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar10 = iVar5 + -1;
            }
            uVar11 = 0;
            uVar9 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar9 = uVar11;
            }
            iVar10 = (int)uVar9 + 1;
            local_80 = (int)uVar9 * 0x20 + 0x20;
            iVar12 = 0;
            goto LAB_1402abc90;
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + 0x18);
      } while (iVar5 != -1);
      goto LAB_1402abbdf;
    }
  }
  lVar13 = 0;
LAB_1402abbdf:
  if ((char)uVar9 == '\0') {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    iVar12 = iVar12 + 0x20;
    uVar6 = puVar15[uVar11 + 1];
    uVar11 = uVar11 + 1;
    if (uVar6 != 0) break;
LAB_1402abc90:
    if (uVar9 == uVar11) goto LAB_1402abcd4;
  }
  iVar10 = (int)uVar11;
  local_80 = iVar12;
LAB_1402abca8:
  uVar3 = -uVar6 & uVar6;
  uVar9 = (ulonglong)uVar3 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  iVar12 = (local_80 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
  if (iVar12 < iVar5) {
    iVar5 = iVar12;
  }
LAB_1402abcd4:
  local_98 = CONCAT44(uVar3,iVar10);
  local_88 = CONCAT44(iVar5,0xffffffff);
  bVar16 = true;
  local_78 = plVar14;
LAB_1402abafc:
  local_70 = plVar14 != (longlong *)0x0 & bVar16;
  local_6f = plVar14 == (longlong *)0x0 & bVar16;
  local_6e = 0;
  local_a0 = local_78;
LAB_1402abb23:
  do {
    if ((local_70 & 1) != 0) {
      if (local_88._4_4_ < (int)local_90[6]) {
        plVar14 = (longlong *)(*local_a0 + (longlong)local_88._4_4_ * 0x10);
        goto LAB_1402abb6f;
      }
LAB_1402abdcc:
      lVar13 = 0;
LAB_1402abdcf:
      uVar9 = (ulonglong)local_ac;
      goto LAB_1402abbdf;
    }
    if (local_6f != 0) goto LAB_1402abdcc;
    plVar14 = (longlong *)(local_a8 + (ulonglong)local_6e * 8);
LAB_1402abb6f:
    lVar13 = *plVar14;
    uVar3 = *(uint *)(lVar13 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & (uVar2 | 0x10000000)) == 0) {
      if (param_2 != 0) {
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(param_2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(param_2 + 0x38) * 8) != param_2 + 0x30)) goto LAB_1402abd95;
      }
      if (lVar13 == 0) goto LAB_1402abdcc;
      uVar9 = (ulonglong)local_ac;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar13);
        goto LAB_1402abdcf;
      }
      goto LAB_1402abbdf;
    }
LAB_1402abd95:
    if ((local_70 & 1) != 0) break;
    local_6f = true;
    if (local_6e == 0) {
      local_6f = *(longlong *)(local_a8 + 8) == 0;
    }
    local_6e = 1;
  } while( true );
  local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
  FUN_1449c0562(&local_98);
  goto LAB_1402abb23;
}



// FUNCTION 1402abe48 FUN_1402abe48 body=226 status=ok
// SIG undefined FUN_1402abe48(void)

void FUN_1402abe48(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1402abf2a(param_1,param_2);
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
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1402abf2a FUN_1402abf2a body=527 status=ok
// SIG undefined FUN_1402abf2a(void)

void FUN_1402abf2a(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    puVar5 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar5 = local_b0;
    }
    FUN_1446fe144(puVar6 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar2 = puVar6 + 2;
    }
    memcpy(puVar2,puVar5,(longlong)local_a8);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    puVar5 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar5 = local_a0;
    }
    FUN_1446fe1b8(puVar6 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar6 + 5;
    }
    memcpy(puVar2,puVar5,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar6 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1f0);
  if (pcVar1 != (code *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x200);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3);
  }
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  FUN_1447cc32a(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1c0),
                *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10));
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ac13a FUN_1402ac13a body=120 status=ok
// SIG undefined FUN_1402ac13a(void)

void FUN_1402ac13a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1402ac1b3(0,&local_48);
  FUN_1402ac1b3(param_1,&local_38);
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    FUN_1402ac2fe(&DAT_14cb10c10,param_2,&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ac1b3 FUN_1402ac1b3 body=330 status=ok
// SIG undefined FUN_1402ac1b3(void)

longlong * FUN_1402ac1b3(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1402ac2fe FUN_1402ac2fe body=565 status=ok
// SIG undefined FUN_1402ac2fe(void)

void FUN_1402ac2fe(longlong param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [44];
  int local_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  LPCRITICAL_SECTION local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar10 = param_3[2];
  iVar9 = param_3[3];
  iVar3 = param_3[4];
  iVar4 = param_3[5];
  iVar5 = param_3[6];
  iVar6 = param_3[7];
  local_68 = (LPCRITICAL_SECTION)(param_1 + 0x58);
  local_7c = iVar6;
  local_78 = iVar9;
  local_74 = iVar1;
  local_70 = param_2;
  EnterCriticalSection(local_68);
  if (((iVar5 != 0 || iVar6 != 0) || (iVar4 != 0 || iVar3 != 0)) ||
      ((iVar10 != 0 || iVar9 != 0) || (iVar2 != 0 || iVar1 != 0))) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x3c);
    local_60 = param_1 + 0x80;
    *(ulonglong *)(param_1 + 0x80) = local_70;
    local_58 = param_1 + 0x88;
    *(int *)(param_1 + 0x88) = local_74;
    *(int *)(param_1 + 0x8c) = iVar2;
    *(int *)(param_1 + 0x90) = iVar10;
    *(int *)(param_1 + 0x94) = local_78;
    *(int *)(param_1 + 0x98) = iVar3;
    *(int *)(param_1 + 0x9c) = iVar4;
    *(int *)(param_1 + 0xa0) = iVar5;
    *(int *)(param_1 + 0xa4) = local_7c;
    FUN_1402ac56c(param_1 + 8,local_4c);
    if (iVar1 == iVar9) {
      FUN_140f9708a(&DAT_14c9647b8,param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  *(ulonglong *)(param_1 + 0x80) = local_70;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar10 = iVar1;
  iVar9 = iVar1;
  if (iVar1 != iVar2) {
    uVar7 = ((uint)(local_70 >> 0x14) & 0xffff ^ (uint)(local_70 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar8 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar8 + ((longlong)(int)(uVar7 >> 0x10 ^ uVar7) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    iVar10 = iVar2;
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x30) == local_70) {
          FUN_14019d2dc();
          iVar10 = *(int *)(param_1 + 0x3c);
          iVar9 = *(int *)(param_1 + 0x10);
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 8) + 0x28);
      } while (iVar3 != -1);
    }
  }
  LeaveCriticalSection(local_68);
  if ((iVar2 < iVar1) && (iVar9 == iVar10)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ac56c FUN_1402ac56c body=871 status=ok
// SIG undefined FUN_1402ac56c(void)

int * FUN_1402ac56c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_140044672(param_1,iVar23);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar19 = -1;
    }
    else {
      iVar19 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar19 = iVar20 + -1;
      }
      iVar19 = iVar19 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar17 = iVar20 + 1;
    iVar22 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar22 = iVar20;
    }
    if (iVar22 >> 5 == iVar19) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar19 = iVar20;
        }
        else {
          uVar24 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar25 = 4;
            if (4 < uVar24) {
              uVar25 = uVar24;
            }
          }
          else {
            uVar25 = (uVar24 * 3 >> 3) + uVar24 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar25 << 2,0);
          iVar19 = (int)(uVar18 >> 2);
          iVar17 = -0x20;
          if ((int)uVar24 <= iVar19) {
            iVar17 = iVar19 << 5;
          }
          iVar19 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar15,iVar19);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar19 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar19 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar15;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar22 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar14 = (longlong)iVar23;
    iVar20 = *(int *)(*param_1 + 4 + lVar14 * 0x30);
    *(int *)(param_1 + 6) = iVar20;
    iVar19 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x30) = 0xffffffff;
    }
  }
  iVar20 = 1;
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar19 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar19 = iVar23;
  }
  puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar19 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
  lVar4 = *param_1;
  lVar14 = lVar14 * 0x30;
  puVar2 = (undefined4 *)(lVar4 + lVar14);
  puVar5 = (undefined4 *)param_3[1];
  uVar18 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar4 + lVar14) = uVar18;
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  uVar9 = puVar5[4];
  uVar10 = puVar5[5];
  uVar11 = puVar5[6];
  uVar12 = puVar5[7];
  puVar3 = (undefined4 *)(lVar4 + 8 + lVar14);
  *puVar3 = *puVar5;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar3 = (undefined4 *)(lVar4 + 0x18 + lVar14);
  *puVar3 = uVar9;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  *(undefined4 *)(lVar4 + 0x28 + lVar14) = 0xffffffff;
  uVar24 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
  uVar24 = uVar24 >> 0x10 ^ uVar24;
  uVar25 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar25 != 0) && (uVar25 != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar24) * 4);
    if (iVar19 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar19 * 0x30);
        if (*(ulonglong *)(*param_1 + (longlong)iVar19 * 0x30) == uVar18) {
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          uVar10 = puVar2[4];
          uVar11 = puVar2[5];
          uVar12 = puVar2[6];
          uVar13 = puVar2[7];
          *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar2 + 8);
          puVar3[4] = uVar10;
          puVar3[5] = uVar11;
          puVar3[6] = uVar12;
          puVar3[7] = uVar13;
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_14019d340(param_1,iVar23,1);
          goto LAB_1402ac707;
        }
        iVar19 = puVar3[10];
      } while (iVar19 != -1);
    }
  }
  if (3 < uVar25) {
    uVar18 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar20 = 1 << ((byte)lVar14 & 0x1f);
  }
  iVar19 = iVar23;
  if (((int)uVar25 < 1) || (iVar20 <= (int)param_1[9])) {
    uVar24 = (int)param_1[9] - 1U & uVar24;
    puVar2[0xb] = uVar24;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    puVar2[10] = *(undefined4 *)
                  ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar24) * 4)
    ;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar24) * 4) =
         iVar23;
  }
  else {
    *(int *)(param_1 + 9) = iVar20;
    FUN_1402ac8d4(param_1);
  }
LAB_1402ac707:
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 1402ac8d4 FUN_1402ac8d4 body=595 status=ok
// SIG undefined FUN_1402ac8d4(void)

void FUN_1402ac8d4(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x30;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x2c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1402acade;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1402acade:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402acb28 FUN_1402acb28 body=1639 status=ok
// SIG undefined FUN_1402acb28(void)

void FUN_1402acb28(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_c8 = (double)CONCAT44(local_c8._4_4_,param_2);
    uVar15 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar15,&local_c8);
    if ((DAT_14c761388 != 0) &&
       ((lVar12 = param_1[0x16], lVar12 != 0 || (lVar12 = FUN_1448abda6(param_1), lVar12 != 0)))) {
      uVar15 = FUN_14119d0a4(lVar12);
      FUN_140e65914(uVar15,param_1,*(undefined4 *)(lVar12 + 0x6f4));
    }
  }
  if ((int)param_1[0x67] != -1) {
    cVar11 = FUN_14038f67a();
    if (cVar11 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_128);
    }
    lVar12 = param_1[0x16];
    if (lVar12 == 0) {
      lVar12 = FUN_1448abda6(param_1);
    }
    lVar12 = FUN_1402ad1e0(lVar12);
    if (lVar12 != 0) {
      lVar13 = param_1[0x16];
      if (lVar13 == 0) {
        lVar13 = FUN_1448abda6(param_1);
      }
      lVar13 = FUN_1402ad1e0(lVar13);
      if (lVar13 != 0) {
        lVar13 = **(longlong **)(lVar13 + 0x40);
        lVar20 = (longlong)(int)param_1[0x67] * 0xd8;
        dVar3 = *(double *)(lVar13 + 0x28 + lVar20);
        dVar7 = *(double *)(lVar13 + 0x68 + lVar20) + dVar3;
        dVar4 = *(double *)(lVar13 + 0x18 + lVar20);
        dVar5 = *(double *)(lVar13 + 0x20 + lVar20);
        dVar8 = *(double *)(lVar13 + 0x60 + lVar20) + dVar5;
        dVar10 = *(double *)(lVar13 + 0x58 + lVar20) + dVar4;
        dVar3 = dVar3 + *(double *)(lVar13 + 0x90 + lVar20);
        dVar5 = dVar5 + *(double *)(lVar13 + 0x88 + lVar20);
        dVar4 = dVar4 + *(double *)(lVar13 + 0x80 + lVar20);
        if (((*(char *)((longlong)param_1 + 0x2dc) == '\0') && (lVar14 = param_1[0x5f], lVar14 != 0)
            ) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
          lVar16 = param_1[0x16];
          if (lVar16 == 0) {
            lVar16 = FUN_1448abda6(param_1);
          }
          lVar14 = FUN_1402ad37c(lVar16,lVar14);
          if (lVar14 != 0) {
            FUN_1400021e4((longlong)param_1 + 0x2ec,&local_e0);
            FUN_1402ad63e(lVar14,&local_c8,&local_e0);
            *(float *)(param_1 + 0x5c) = (float)local_c8;
            *(float *)((longlong)param_1 + 0x2e4) = (float)local_c0;
            *(float *)(param_1 + 0x5d) = (float)local_b8;
            if (local_e0 != 0.0) {
              FUN_1400020a8();
            }
          }
        }
        lVar14 = param_1[0x62];
        if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
          lVar16 = param_1[0x16];
          if (lVar16 == 0) {
            lVar16 = FUN_1448abda6(param_1);
            lVar14 = param_1[0x62];
          }
          lVar14 = FUN_1448e494c(lVar16,lVar14);
          if (lVar14 != 0) {
            local_c8 = (double)CONCAT44((float)dVar8,(float)dVar10);
            local_c0 = (double)CONCAT44(0x3f800000,(float)dVar7);
            FUN_144938f46(lVar14,param_1[99],&local_c8);
            local_c8 = (double)CONCAT44((float)dVar5,(float)dVar4);
            local_c0 = (double)CONCAT44(0x3f800000,(float)dVar3);
            FUN_144938f46(lVar14,param_1[100],&local_c8);
            local_c8 = (double)CONCAT44((float)*(double *)(lVar13 + 0x20 + lVar20),
                                        (float)*(double *)(lVar13 + 0x18 + lVar20));
            local_c0 = (double)CONCAT44(0x3f800000,(float)*(double *)(lVar13 + 0x28 + lVar20));
            FUN_144938f46(lVar14,param_1[0x65],&local_c8);
          }
        }
        lVar13 = param_1[0x66];
        if (((lVar13 != 0) && ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0)) &&
           ((*(longlong *)(lVar13 + 0x28) != 0 &&
            ((*(uint *)(*(longlong *)(lVar13 + 0x28) + 8) >> 0x1e & 1) == 0)))) {
          local_c8 = dVar10;
          local_c0 = dVar8;
          local_b8 = dVar7;
          FUN_1400021e4(param_1 + 99,&local_e0);
          FUN_1402ad4d2(lVar13,&local_e0,&local_c8);
          if (local_e0 != 0.0) {
            FUN_1400020a8();
          }
          lVar13 = param_1[0x66];
          local_e0 = dVar4;
          local_d8 = dVar5;
          local_d0 = dVar3;
          FUN_1400021e4(param_1 + 100,&local_f8);
          FUN_1402ad4d2(lVar13,&local_f8,&local_e0);
          if (CONCAT44(uStack_f4,local_f8) != 0) {
            FUN_1400020a8();
          }
          lVar13 = param_1[0x66];
          local_e8 = param_1[0x59];
          local_f8 = (undefined4)param_1[0x57];
          uStack_f4 = *(undefined4 *)((longlong)param_1 + 700);
          uStack_f0 = (undefined4)param_1[0x58];
          uStack_ec = *(undefined4 *)((longlong)param_1 + 0x2c4);
          FUN_1400021e4(param_1 + 0x65,local_108);
          FUN_1402ad4d2(lVar13,local_108,&local_f8);
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1402ada0e(param_1[0x66]);
        }
      }
      dVar3 = (double)param_1[0x4e];
      lVar12 = **(longlong **)(lVar12 + 0x40);
      lVar13 = (longlong)(int)param_1[0x67] * 0xd8;
      puVar1 = (undefined8 *)(lVar12 + 0x58 + lVar13);
      uVar15 = puVar1[1];
      dVar4 = (double)param_1[0x4c];
      dVar5 = (double)param_1[0x4d];
      puVar2 = (undefined8 *)(lVar12 + 0x80 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar15;
      puVar1 = (undefined8 *)(lVar12 + 0x48 + lVar13);
      uVar15 = puVar1[1];
      puVar2 = (undefined8 *)(lVar12 + 0x70 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar15;
      *(undefined8 *)(lVar12 + 0x90 + lVar13) = *(undefined8 *)(lVar12 + 0x68 + lVar13);
      dVar21 = (double)*(int *)(lVar12 + 8 + lVar13);
      dVar6 = (double)*(int *)(lVar12 + 0xc + lVar13);
      dVar9 = (double)*(int *)(lVar12 + 0x10 + lVar13);
      dVar7 = *(double *)(lVar12 + 0x28 + lVar13);
      dVar8 = *(double *)(lVar12 + 0x18 + lVar13);
      dVar10 = *(double *)(lVar12 + 0x20 + lVar13);
      iVar17 = (int)((dVar4 / (dVar8 + dVar8)) * dVar21);
      iVar18 = (int)((dVar5 / (dVar10 + dVar10)) * dVar6);
      iVar19 = (int)((dVar3 / (dVar7 + dVar7)) * dVar9);
      *(int *)(lVar12 + 0x48 + lVar13) = iVar17;
      *(int *)(lVar12 + 0x4c + lVar13) = iVar18;
      *(int *)(lVar12 + 0x50 + lVar13) = iVar19;
      *(double *)(lVar12 + 0x58 + lVar13) = (double)iVar17 * ((dVar8 + dVar8) / dVar21) - dVar8;
      *(double *)(lVar12 + 0x60 + lVar13) = (double)iVar18 * ((dVar10 + dVar10) / dVar6) - dVar10;
      *(double *)(lVar12 + 0x68 + lVar13) = (double)iVar19 * ((dVar7 + dVar7) / dVar9) - dVar7;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ad1e0 FUN_1402ad1e0 body=105 status=ok
// SIG undefined FUN_1402ad1e0(void)

void FUN_1402ad1e0(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1402ad296();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1402ad24a(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ad24a FUN_1402ad24a body=76 status=ok
// SIG undefined FUN_1402ad24a(void)

void FUN_1402ad24a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1402ad296();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1402ad287;
    }
  }
  lVar2 = 0;
LAB_1402ad287:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1402ad296 FUN_1402ad296 body=228 status=ok
// SIG undefined FUN_1402ad296(void)

longlong FUN_1402ad296(void)

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
  if (DAT_14cb50340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a134;
    local_38 = &LAB_1485ec14d;
    local_40 = &LAB_1459d281a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxDynamicWind",L"GbxWindSubsystem",&DAT_14cb50340,FUN_1464a41c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb50340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ad37c FUN_1402ad37c body=66 status=ok
// SIG undefined FUN_1402ad37c(void)

undefined8 FUN_1402ad37c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    uVar2 = FUN_1400bd118(lVar1);
    uVar2 = FUN_1402ad750(uVar2,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1402ad3be FUN_1402ad3be body=275 status=ok
// SIG undefined FUN_1402ad3be(void)

longlong FUN_1402ad3be(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) {
    if (param_3 == 1) {
      lVar1 = 0;
      FUN_1415b7ec4(L"A null object was passed as a world context object to UEngine::GetWorldFromContextObject()."
                    ,3,0);
      goto LAB_1402ad407;
    }
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
    if (param_3 == 2) {
      if (lVar1 == 0) {
        lVar1 = DAT_14cb10918;
      }
      goto LAB_1402ad407;
    }
    if (param_3 != 1 || lVar1 != 0) goto LAB_1402ad407;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    FUN_1401031ac(param_2,0,&local_48);
    puVar2 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      puVar2 = local_48;
    }
    FUN_140002266(&local_30,
                  L"No world was found for object (%s) passed in to UEngine::GetWorldFromContextObject()."
                  ,puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1415b7ec4(puVar2,3,0);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar1 = 0;
LAB_1402ad407:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ad4d2 FUN_1402ad4d2 body=362 status=ok
// SIG undefined FUN_1402ad4d2(void)

void FUN_1402ad4d2(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_88,puVar8,1);
  FUN_144939256(uVar4,&local_68,local_88);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar7 != 0)) {
    FUN_144938edc(lVar7,&local_88,local_68);
    if (((local_88._4_4_ != 0 || (int)local_88 != 0) || local_80 != 0) || local_7c != 0)
    goto LAB_1402ad5d8;
  }
  local_88 = local_68;
  local_80 = FUN_144830b78(&local_80,&DAT_14cb42140);
  local_78 = 0;
  uStack_70 = 0;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  piVar6 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_88,0);
  if ((piVar6 != (int *)0x0) && (lVar7 = (longlong)*piVar6, lVar7 != -1)) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    *(float *)(lVar5 + lVar7) = (float)dVar3;
    *(float *)(lVar5 + 4 + lVar7) = (float)dVar2;
    *(float *)(lVar5 + 8 + lVar7) = (float)dVar1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_1402ad5d8:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ad63e FUN_1402ad63e body=273 status=ok
// SIG undefined FUN_1402ad63e(void)

double * FUN_1402ad63e(longlong param_1,double *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_38,puVar6,1);
  FUN_144939256(uVar1,local_58,local_38);
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb42140);
  local_48 = 0;
  uStack_40 = 0;
  piVar4 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_58,0);
  dVar3 = 0.0;
  if (piVar4 == (int *)0x0) {
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar3 = 0.0;
  }
  else {
    lVar5 = (longlong)*piVar4;
    dVar7 = 0.0;
    dVar8 = 0.0;
    if (lVar5 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      dVar8 = (double)*(float *)(lVar2 + 8 + lVar5);
      dVar7 = (double)*(float *)(lVar2 + 4 + lVar5);
      dVar3 = (double)*(float *)(lVar2 + lVar5);
    }
  }
  *param_2 = dVar3;
  param_2[1] = dVar7;
  param_2[2] = dVar8;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ad750 FUN_1402ad750 body=499 status=ok
// SIG undefined FUN_1402ad750(void)

longlong FUN_1402ad750(longlong param_1,undefined8 ***param_2)

{
  undefined8 **ppuVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 **local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((param_2 == (undefined8 ***)0x0) || (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 == 0)) ||
       ((*(byte *)(lVar4 + 0x153) & 0x40) == 0)) ||
      (((*(byte *)(lVar4 + 0x155) & 0x20) != 0 || (*(char *)(param_1 + 0x1c01) != '\0')))) ||
     (*(char *)(param_1 + 0x1c02) != '\0')) {
    lVar4 = 0;
    goto LAB_1402ad839;
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_38 = param_2;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  plVar5 = (longlong *)(param_1 + 0x170);
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_1402ad944(plVar5,uVar2 >> 0x10 ^ uVar2,&local_38);
  if (iVar3 == -1) {
LAB_1402ad85e:
    ppuVar1 = param_2[9];
    local_40 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_38 = &local_40;
    FUN_1456ee110(plVar5,&local_2c);
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)local_2c * 0x18 + 8);
    local_48 = 0xfff00007;
    local_50 = 0;
    local_58 = 0;
    lVar4 = FUN_14092e7b3(ppuVar1,*(undefined8 *)(param_1 + 0x10),0,0xffffffff);
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    *plVar5 = lVar4;
    FUN_1402aec6e(lVar4,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if (*plVar5 + (longlong)iVar3 * 0x18 == 0) goto LAB_1402ad85e;
    plVar5 = (longlong *)(*plVar5 + (longlong)iVar3 * 0x18 + 8);
  }
  lVar4 = *plVar5;
LAB_1402ad839:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ad944 FUN_1402ad944 body=202 status=ok
// SIG undefined FUN_1402ad944(void)

int FUN_1402ad944(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1402ada0e FUN_1402ada0e body=1920 status=ok
// SIG undefined FUN_1402ada0e(void)

void FUN_1402ada0e(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  void *_Dst;
  void *_Src;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_158 [32];
  int *local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  uint local_e0;
  int local_dc;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar1 = (code *)(param_1 + 0x40);
  local_d8 = &PTR_LAB_14ae02690;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  lStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_1402ae190(&local_d8,pcVar1);
  FUN_140090dba(pcVar1,*(longlong *)(param_1 + 0x28) == 0);
  lVar12 = *(longlong *)(param_1 + 0x28);
  if (lVar12 == 0) {
    FUN_1406fc1fc(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1406fc22e(param_1 + 0x30,0);
    }
  }
  else {
    if ((longlong)*(int *)(lVar12 + 0x38) != 0) {
      plVar14 = *(longlong **)(lVar12 + 0x30);
      plVar16 = plVar14 + (longlong)*(int *)(lVar12 + 0x38) * 4;
      do {
        puVar7 = (uint *)(*(code *)local_d8[0xb])(&local_d8,plVar14,0);
        if (puVar7 == (uint *)0x0) {
          lVar12 = *(longlong *)(param_1 + 0x28);
LAB_1402ade3d:
          lVar12 = *(longlong *)(lVar12 + 0x48);
          puVar7 = (uint *)(**(code **)(*(longlong *)(lVar12 + 0x40) + 0x58))(lVar12 + 0x40,plVar14)
          ;
          if (puVar7 == (uint *)0x0) {
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = *puVar7;
          }
          local_dc = -1;
          local_138 = &local_dc;
          FUN_14021ab3e(pcVar1,plVar14);
          plVar11 = plVar14 + 1;
          uVar8 = FUN_144741050(plVar11);
          cVar5 = FUN_14487ac36(uVar8);
          if (cVar5 == '\0') {
            local_e0 = uVar17;
            plVar9 = (longlong *)FUN_144741050(plVar11);
            if ((short)plVar9[1] == 3) {
              lVar15 = DAT_14cb420c0;
              if (DAT_14cb420c0 != 0) {
LAB_1402adef2:
                if (DAT_14c927740 == 0) {
                  local_50 = FUN_1449e2820;
                  local_f0 = FUN_14081d0ea;
                  local_f8 = FUN_14081d0ea;
                  local_100 = &local_50;
                  local_108 = &LAB_146856450;
                  local_110 = FUN_1427b121c;
                  local_118 = L"Engine";
                  local_120 = 0;
                  local_128 = 0x10000021;
                  local_130 = 8;
                  local_138 = (int *)CONCAT44(local_138._4_4_,0x28);
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object");
                  if (DAT_14c927740 == 0) goto LAB_1402adf20;
                }
                if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
                    == DAT_14c927740 + 0x30)) {
                  if (((int)local_e0 < 0) || (*(int *)(lVar12 + 0x88) <= (int)local_e0)) {
LAB_1402ae16b:
                    lVar12 = 0;
                  }
                  else {
                    lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x80) + (ulonglong)local_e0 * 8);
                  }
                  goto LAB_1402ae006;
                }
              }
            }
            else if (*plVar9 != 0) {
              lVar10 = FUN_1449e2fb2();
              lVar15 = *plVar9;
              if ((((lVar15 != 0) && (lVar10 != 0)) &&
                  (lVar3 = *(longlong *)(lVar15 + 0x10), lVar3 != 0)) &&
                 ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                  (*(longlong *)
                    (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                   lVar10 + 0x30)))) goto LAB_1402adef2;
            }
LAB_1402adf20:
            plVar11 = (longlong *)FUN_144741050(plVar11);
            uVar6 = *(ushort *)((longlong)plVar11 + 0xc);
            if (uVar6 == 0xffff) {
              uVar6 = 0;
              if ((*plVar11 != 0) && ((short)plVar11[1] != 1)) {
                lVar15 = FUN_144a811ba(plVar11);
                sVar4 = (short)*(undefined4 *)(lVar15 + 0x5c);
                uVar6 = -sVar4 & ((short)*(undefined4 *)(lVar15 + 0x58) + sVar4) - 1U;
              }
              *(ushort *)((longlong)plVar11 + 0xc) = uVar6;
            }
            _Src = (void *)((longlong)(int)local_e0 + *(longlong *)(lVar12 + 0x60));
            goto LAB_1402adc12;
          }
          if (((int)uVar17 < 0) || (*(int *)(lVar12 + 0x78) <= (int)uVar17)) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar12 + 0x70) + (ulonglong)uVar17 * 8);
          }
          local_128 = 0xfff00007;
          local_130 = 0;
          local_138 = (int *)0x0;
          lVar12 = FUN_14092e7b3(uVar8,param_1);
          lVar15 = *(longlong *)(param_1 + 0x40);
LAB_1402add1a:
          piVar13 = (int *)(**(code **)(lVar15 + 0x58))(pcVar1,plVar14);
          if ((piVar13 != (int *)0x0) && (iVar2 = *piVar13, (longlong)iVar2 != -1)) {
            lVar15 = *(longlong *)(param_1 + 0x70);
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar12);
            }
            *(longlong *)(lVar15 + (longlong)iVar2 * 8) = lVar12;
            uVar17 = 2;
            goto LAB_1402adc2a;
          }
        }
        else {
          uVar17 = *puVar7;
          uVar18 = (ulonglong)uVar17;
          lVar12 = *(longlong *)(param_1 + 0x28);
          if (uVar18 == 0xffffffff) goto LAB_1402ade3d;
          if ((lVar12 == 0) || (*(longlong *)(lVar12 + 0x48) != param_1)) {
            if ((longlong)*(int *)(param_1 + 0x38) != 0) {
              lVar15 = 0;
              do {
                if ((*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar15) == *plVar14) &&
                   (*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar15) == (int)plVar14[1]))
                goto LAB_1402adb2c;
                lVar15 = lVar15 + 0x20;
              } while ((longlong)*(int *)(param_1 + 0x38) * 0x20 != lVar15);
            }
            goto LAB_1402ade3d;
          }
LAB_1402adb2c:
          local_dc = -1;
          local_138 = &local_dc;
          FUN_14021ab3e(pcVar1,plVar14);
          plVar11 = plVar14 + 1;
          uVar8 = FUN_144741050(plVar11);
          cVar5 = FUN_14487ac36(uVar8);
          if (cVar5 != '\0') {
            if ((int)uVar17 < 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = 0;
              if ((int)uVar17 < (int)local_a0) {
                lVar12 = *(longlong *)(lStack_a8 + uVar18 * 8);
              }
            }
            lVar15 = *(longlong *)pcVar1;
            goto LAB_1402add1a;
          }
          plVar9 = (longlong *)FUN_144741050(plVar11);
          if ((short)plVar9[1] == 3) {
            lVar12 = DAT_14cb420c0;
            if (DAT_14cb420c0 == 0) goto LAB_1402adbe9;
LAB_1402adbbb:
            if (DAT_14c927740 == 0) {
              local_50 = FUN_1449e2820;
              local_f0 = FUN_14081d0ea;
              local_f8 = FUN_14081d0ea;
              local_100 = &local_50;
              local_108 = &LAB_146856450;
              local_110 = FUN_1427b121c;
              local_118 = L"Engine";
              local_120 = 0;
              local_128 = 0x10000021;
              local_130 = 8;
              local_138 = (int *)CONCAT44(local_138._4_4_,0x28);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object");
              if (DAT_14c927740 == 0) goto LAB_1402adbe9;
            }
            if ((*(int *)(lVar12 + 0x38) < *(int *)(DAT_14c927740 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) !=
                DAT_14c927740 + 0x30)) goto LAB_1402adbe9;
            if ((int)uVar17 < 0) goto LAB_1402ae16b;
            lVar12 = 0;
            if ((int)uVar17 < (int)local_90) {
              lVar12 = *(longlong *)(lStack_98 + uVar18 * 8);
            }
LAB_1402ae006:
            piVar13 = (int *)(**(code **)(*(longlong *)pcVar1 + 0x58))(pcVar1,plVar14);
            if ((piVar13 != (int *)0x0) && (iVar2 = *piVar13, (longlong)iVar2 != -1)) {
              lVar15 = *(longlong *)(param_1 + 0x80);
              if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar12);
              }
              *(longlong *)(lVar15 + (longlong)iVar2 * 8) = lVar12;
              uVar17 = 4;
              goto LAB_1402adc2a;
            }
            goto LAB_1402adc31;
          }
          if (*plVar9 != 0) {
            lVar15 = FUN_1449e2fb2();
            lVar12 = *plVar9;
            if ((((lVar12 != 0) && (lVar15 != 0)) &&
                (lVar10 = *(longlong *)(lVar12 + 0x10), lVar10 != 0)) &&
               ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar10 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                 == lVar15 + 0x30)))) goto LAB_1402adbbb;
          }
LAB_1402adbe9:
          plVar11 = (longlong *)FUN_144741050(plVar11);
          uVar6 = *(ushort *)((longlong)plVar11 + 0xc);
          if (uVar6 == 0xffff) {
            uVar6 = 0;
            if ((*plVar11 != 0) && (uVar6 = 0, (short)plVar11[1] != 1)) {
              lVar12 = FUN_144a811ba(plVar11);
              sVar4 = (short)*(undefined4 *)(lVar12 + 0x5c);
              uVar6 = -sVar4 & ((short)*(undefined4 *)(lVar12 + 0x58) + sVar4) - 1U;
            }
            *(ushort *)((longlong)plVar11 + 0xc) = uVar6;
          }
          _Src = (void *)((int)uVar17 + lStack_b8);
LAB_1402adc12:
          _Dst = (void *)((longlong)local_dc + *(longlong *)(param_1 + 0x60));
          uVar17 = 1;
          if (_Dst != _Src) {
            memcpy(_Dst,_Src,(longlong)(short)uVar6);
          }
LAB_1402adc2a:
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | uVar17;
        }
LAB_1402adc31:
        plVar14 = plVar14 + 4;
      } while (plVar14 != plVar16);
    }
    if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
      plVar14 = *(longlong **)(param_1 + 0xa0);
      plVar16 = plVar14 + (longlong)*(int *)(param_1 + 0xa8) * 7;
      do {
        lVar12 = *plVar14;
        local_50 = pcVar1;
        cVar5 = FUN_1448b0bbc(plVar14 + 1,lVar12,pcVar1,0);
        if (cVar5 != '\0') {
          FUN_1401a642c(lVar12 + 0x70,&local_50);
        }
        plVar14 = plVar14 + 7;
      } while (plVar14 != plVar16);
    }
  }
  FUN_14006c2ae(&local_d8);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ae190 FUN_1402ae190 body=169 status=ok
// SIG undefined FUN_1402ae190(void)

longlong FUN_1402ae190(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)*param_2)(param_2,local_30);
  FUN_1402ae332(param_1,local_30);
  local_40 = param_2[4];
  local_38 = *(undefined4 *)(param_2 + 5);
  FUN_140096e5c(param_1);
  FUN_1402ae28a(param_1 + 0x30,param_2 + 6);
  FUN_1402ae23a(param_1 + 0x40,param_2 + 8);
  FUN_1402ae2da(param_1 + 0x50,param_2 + 10);
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 8;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ae23a FUN_1402ae23a body=79 status=ok
// SIG undefined FUN_1402ae23a(void)

undefined8 * FUN_1402ae23a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1402ae8a8(param_1,iVar1);
      FUN_140160884(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1402ae28a FUN_1402ae28a body=79 status=ok
// SIG undefined FUN_1402ae28a(void)

undefined8 * FUN_1402ae28a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14008d0d2(param_1,iVar1);
      FUN_1402ae618(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1402ae2da FUN_1402ae2da body=88 status=ok
// SIG undefined FUN_1402ae2da(void)

undefined8 * FUN_1402ae2da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1402ae7d0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1402ae332 FUN_1402ae332 body=180 status=ok
// SIG undefined FUN_1402ae332(void)

void FUN_1402ae332(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  local_38 = 0;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1402ae4ca(&local_38,iVar1,0);
    FUN_1402ae438(local_38,uVar2,iVar1);
  }
  FUN_1402ae3e8(param_1 + 0x10,&local_38);
  FUN_1449394d8(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ae3e8 FUN_1402ae3e8 body=80 status=ok
// SIG undefined FUN_1402ae3e8(void)

longlong * FUN_1402ae3e8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1449394d8(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1402ae438 FUN_1402ae438 body=146 status=ok
// SIG undefined FUN_1402ae438(void)

void FUN_1402ae438(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
    do {
      *(undefined4 *)(puVar2 + -2) = *(undefined4 *)(param_2 + 1);
      puVar2[-3] = *param_2;
      *(undefined4 *)((longlong)puVar2 + -0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar2[-1] = param_2[2];
      *puVar2 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_145cec054(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 0x14);
      }
      param_2 = param_2 + 5;
      puVar2 = puVar2 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402ae4ca FUN_1402ae4ca body=334 status=ok
// SIG undefined FUN_1402ae4ca(void)

void FUN_1402ae4ca(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402ae53c;
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
LAB_1402ae53c:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402ae618 FUN_1402ae618 body=80 status=ok
// SIG undefined FUN_1402ae618(void)

void FUN_1402ae618(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1402ae668 FUN_1402ae668 body=358 status=ok
// SIG undefined FUN_1402ae668(void)

undefined4 *
FUN_1402ae668(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402aea88(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_58 = param_4;
  cVar6 = FUN_1402ae9e6(param_1,uVar11,local_40);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1402af1b0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ae7d0 FUN_1402ae7d0 body=216 status=ok
// SIG undefined FUN_1402ae7d0(void)

void FUN_1402ae7d0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402ae8a8 FUN_1402ae8a8 body=317 status=ok
// SIG undefined FUN_1402ae8a8(void)

void FUN_1402ae8a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402ae916;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1402ae916:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1402ae9e6 FUN_1402ae9e6 body=161 status=ok
// SIG undefined FUN_1402ae9e6(void)

void FUN_1402ae9e6(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146968a78((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1402aea50;
    }
  }
  uVar6 = 0;
LAB_1402aea50:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1402aea88 FUN_1402aea88 body=485 status=ok
// SIG undefined FUN_1402aea88(void)

int * FUN_1402aea88(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1405b363e(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1402aec6e FUN_1402aec6e body=784 status=ok
// SIG undefined FUN_1402aec6e(void)

void FUN_1402aec6e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar2 != 0)) {
    lVar3 = FUN_1448e494c(param_2,lVar2);
    if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 200) = lVar3;
      if (lVar3 == 0) goto LAB_1402aef14;
    }
    else {
      FUN_1456cec3c(lVar3);
      *(longlong *)(param_1 + 200) = lVar3;
    }
    local_68 = (undefined8 *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_1446efa72(&local_68,0,2,0x10);
    uStack_60._0_4_ = 2;
    *local_68 = &PTR_LAB_14ae0e8a0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_68[2] = lVar4;
    *local_68 = &PTR_FUN_14ae0e830;
    local_68[3] = param_1;
    FUN_1456ee47e(lVar3 + 0xe8,&local_78,&local_68);
    FUN_1449db362(&local_68);
    lVar3 = *(longlong *)(param_1 + 200);
    local_68 = (undefined8 *)0x0;
    uStack_60._0_4_ = 0;
    FUN_1446efa72(&local_68,0,2,0x10);
    uStack_60 = CONCAT44(uStack_60._4_4_,2);
    *local_68 = &PTR_LAB_14ae0e980;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_68[2] = lVar4;
    *local_68 = &PTR_FUN_14ae0e910;
    local_68[3] = param_1;
    FUN_1456ee564(lVar3 + 0x100,&local_78,&local_68);
    FUN_1449db362(&local_68);
    local_68 = (undefined8 *)0x0;
    uVar1 = *(uint *)(lVar2 + 0x40);
    uStack_60 = (ulonglong)uVar1;
    if ((ulonglong)uVar1 != 0) {
      FUN_14493950a(&local_68,0);
      if (0 < (int)uVar1) {
        lVar5 = 8;
        lVar3 = 0;
        do {
          *(undefined8 *)((longlong)local_68 + lVar5 + -8) =
               *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + lVar3);
          FUN_1409b85a4(*(undefined8 *)(param_1 + 200),*(longlong *)(lVar2 + 0x38) + lVar3,
                        (longlong)local_68 + lVar5);
          lVar3 = lVar3 + 0x1c;
          lVar5 = lVar5 + 0xc;
        } while ((ulonglong)uVar1 * 0x1c != lVar3);
      }
    }
    local_78 = 0;
    uVar1 = *(uint *)(lVar2 + 0x50);
    uStack_70 = (ulonglong)uVar1;
    if ((ulonglong)uVar1 != 0) {
      FUN_1402af03a(&local_78,0);
      if (0 < (int)uVar1) {
        lVar5 = 8;
        lVar3 = 0;
        do {
          *(undefined8 *)(local_78 + -8 + lVar5) =
               *(undefined8 *)(*(longlong *)(lVar2 + 0x48) + lVar3);
          FUN_1402aef80(*(undefined8 *)(param_1 + 200),*(longlong *)(lVar2 + 0x48) + lVar3,
                        local_78 + lVar5);
          lVar3 = lVar3 + 0x28;
          lVar5 = lVar5 + 0x18;
        } while ((ulonglong)uVar1 * 0x28 != lVar3);
      }
    }
    FUN_14483a434(param_1,param_2,&local_68,&local_78);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1402aef14:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402aef80 FUN_1402aef80 body=186 status=ok
// SIG undefined FUN_1402aef80(void)

undefined8 FUN_1402aef80(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd0);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xd8) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x90) + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar7 * 0x20) == lVar1)
        goto LAB_1402af019;
        iVar7 = *(int *)(lVar4 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar4 = 0;
LAB_1402af019:
  plVar3 = (longlong *)(lVar4 + 8);
  if (lVar4 == 0) {
    plVar3 = (longlong *)0x0;
  }
  plVar5 = param_2 + 3;
  if (plVar3 != (longlong *)0x0) {
    plVar5 = plVar3;
  }
  lVar1 = plVar5[1];
  *param_3 = *plVar5;
  param_3[1] = lVar1;
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}



// FUNCTION 1402af03a FUN_1402af03a body=373 status=ok
// SIG undefined FUN_1402af03a(void)

void FUN_1402af03a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402af0c3;
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
LAB_1402af0c3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1402af1b0 FUN_1402af1b0 body=606 status=ok
// SIG undefined FUN_1402af1b0(void)

void FUN_1402af1b0(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1402af3ac;
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
LAB_1402af3ac:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402af410 FUN_1402af410 body=517 status=ok
// SIG undefined FUN_1402af410(void)

void FUN_1402af410(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402af616 FUN_1402af616 body=322 status=ok
// SIG undefined FUN_1402af616(void)

undefined4 * FUN_1402af616(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402af87a(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1402af75a(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402af968(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402af75a FUN_1402af75a body=149 status=ok
// SIG undefined FUN_1402af75a(void)

void FUN_1402af75a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1402af7f0(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1402af7ce;
    }
  }
  uVar1 = 0;
LAB_1402af7ce:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1402af7f0 FUN_1402af7f0 body=138 status=ok
// SIG undefined FUN_1402af7f0(void)

void FUN_1402af7f0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402af87a FUN_1402af87a body=238 status=ok
// SIG undefined FUN_1402af87a(void)

int * FUN_1402af87a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1402af968 FUN_1402af968 body=486 status=ok
// SIG undefined FUN_1402af968(void)

void FUN_1402af968(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402afb50 FUN_1402afb50 body=4 status=ok
// SIG undefined FUN_1402afb50(void)

undefined8 FUN_1402afb50(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1402afb54 FUN_1402afb54 body=15 status=ok
// SIG undefined FUN_1402afb54(void)

undefined4 FUN_1402afb54(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_868 [40];
  undefined1 *puStack_840;
  undefined1 *puStack_838;
  ulonglong *puStack_830;
  char cStack_828;
  undefined1 auStack_820 [2048];
  ulonglong uStack_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_868;
  if ((*(byte *)(lVar1 + 1) & 2) == 0) {
    puStack_840 = auStack_820;
    cStack_828 = '\0';
    puStack_830 = &uStack_20;
    puStack_838 = puStack_840;
    FUN_1400b2424(param_2,&puStack_840,1);
    *puStack_838 = 0;
    uVar2 = FUN_140126aca(lVar1,puStack_840);
    if (cStack_828 == '\x01') {
      FUN_1400020a8(puStack_840);
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_20 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402afb64 FUN_1402afb64 body=169 status=ok
// SIG undefined FUN_1402afb64(void)

undefined4 FUN_1402afb64(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_868 [40];
  undefined1 *local_840;
  undefined1 *local_838;
  ulonglong *local_830;
  char local_828;
  undefined1 local_820 [2048];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_868;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    local_840 = local_820;
    local_828 = '\0';
    local_830 = &local_20;
    local_838 = local_840;
    FUN_1400b2424(param_2,&local_840,1);
    *local_838 = 0;
    uVar1 = FUN_140126aca(param_1,local_840);
    if (local_828 == '\x01') {
      FUN_1400020a8(local_840);
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402afc0e FUN_1402afc0e body=399 status=ok
// SIG undefined FUN_1402afc0e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1402afc0e(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_1bd8 [32];
  undefined1 local_1bb8 [2976];
  undefined1 local_1018 [2976];
  ulonglong local_478;
  longlong local_470;
  ulonglong local_468;
  undefined4 local_454;
  undefined8 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined4 local_3d8;
  undefined1 local_3b8 [920];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1bd8;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_1449343ce(local_1bb8);
    memcpy(local_1bb8,(void *)(param_2 + 0x500),0xba0);
    memcpy(local_1018,(void *)(param_2 + 0x125d0),0xba0);
    local_478 = *(ulonglong *)(param_2 + 0x30f8);
    local_470 = *(longlong *)(param_2 + 0x3100);
    local_468 = (ulonglong)(uint)((int)local_470 - (int)local_478) |
                local_470 - (local_478 & 0xffffffff00000000) & 0xffffffff00000000;
    local_454 = *(undefined4 *)(param_2 + 0x23c8);
    local_430 = CONCAT44(*(int *)(param_2 + 0x125cc) - *(int *)(param_2 + 0x125c4),
                         *(int *)(param_2 + 0x125c8) - *(int *)(param_2 + 0x125c0));
    local_438 = 0;
    local_428 = 0x3f800000;
    local_3d8 = *(undefined4 *)(param_2 + 0x131b8);
    if (*(longlong *)(param_2 + 0x13198) != 0) {
      FUN_1402afd9e(param_1 + 0x28,param_2 + 0x13198);
    }
    if (*(char *)(param_1 + 0x60) == '\x01') {
      LOCK();
      piVar1 = (int *)(param_1 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      FUN_14493225c(local_3b8,local_1bb8);
      memcpy((void *)((longlong)iVar2 * 0x390 + *(longlong *)(param_1 + 0x50)),local_3b8,0x390);
      goto LAB_1402afd73;
    }
  }
  iVar2 = 0;
LAB_1402afd73:
  if ((local_20 ^ (ulonglong)auStack_1bd8) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402afd9e FUN_1402afd9e body=116 status=ok
// SIG undefined FUN_1402afd9e(void)

ulonglong FUN_1402afd9e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_1402afde1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402afe12(param_1,iVar1);
    lVar2 = *param_1;
  }
  param_2 = (longlong *)*param_2;
  *(longlong **)(lVar2 + uVar5 * 8) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x30))();
  }
LAB_1402afde1:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1402afe12 FUN_1402afe12 body=353 status=ok
// SIG undefined FUN_1402afe12(void)

void FUN_1402afe12(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402afe97;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1402afe97:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402aff74 FUN_1402aff74 body=105 status=ok
// SIG undefined FUN_1402aff74(void)

undefined8 FUN_1402aff74(byte param_1)

{
  if (param_1 == 8) {
    return 3;
  }
  if (param_1 < 2) {
    if (param_1 == 1) {
      return 0;
    }
  }
  else if (param_1 < 0x20) {
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 4) {
      return 2;
    }
    if (param_1 == 0x10) {
      return 4;
    }
  }
  else {
    if (param_1 == 0x20) {
      return 5;
    }
    if (param_1 == 0x40) {
      return 6;
    }
    if (param_1 == 0x80) {
      return 7;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1402affde FUN_1402affde body=1347 status=ok
// SIG undefined FUN_1402affde(void)

longlong * FUN_1402affde(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined4 *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  cVar2 = FUN_1402b0876(param_2 & 0xffffffff);
  if (cVar2 != '\0') {
    if ((longlong)(int)param_3[1] != 0) {
      plVar7 = (longlong *)*param_3;
      local_60 = plVar7 + (int)param_3[1];
      local_68 = &DAT_14ca814d8 + (param_2 & 0xffff) * 0xf;
      local_78 = param_1 + 2;
      local_70 = param_3;
      do {
        lVar6 = *plVar7;
        if ((*(char *)(lVar6 + 0xac) == '\x01') && ((*(byte *)((longlong)local_68 + 1) & 8) != 0)) {
          lVar22 = *(longlong *)(lVar6 + 0x20);
          iVar1 = *(int *)(lVar6 + 0x28);
          uVar16 = *(uint *)(param_1 + 1);
          lVar6 = (longlong)(int)uVar16 - (longlong)*(int *)((longlong)param_1 + 0x34);
          uVar17 = lVar6 + iVar1;
          uVar15 = (uint)uVar17;
          if ((uint)lVar6 < uVar15) {
            local_58 = plVar7;
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b(uVar17);
            }
            uVar18 = uVar15 - uVar16;
            if (uVar18 != 0 && (int)uVar16 <= (int)uVar15) {
              iVar14 = *(int *)((longlong)param_1 + 0xc);
              uVar20 = uVar16;
              if (iVar14 < (int)uVar15) {
                FUN_14474875a(param_1);
                uVar20 = *(uint *)(param_1 + 1);
                iVar14 = *(int *)((longlong)param_1 + 0xc);
              }
              *(uint *)(param_1 + 1) = uVar20 + uVar18;
              if (iVar14 - uVar20 < uVar18) {
                FUN_1446efaca(param_1);
              }
              if ((int)uVar20 < (int)uVar15) {
                lVar6 = *param_1;
                uVar17 = uVar17 & 0xffffffff;
                iVar14 = *(int *)((longlong)param_1 + 0x34);
                puVar10 = (undefined4 *)(uVar17 * 0x10 + lVar6 + -0xc);
                do {
                  iVar3 = (int)uVar17;
                  if (iVar14 != 0) {
                    *(int *)(lVar6 + (longlong)(int)param_1[6] * 0x10) = iVar3 + -1;
                  }
                  puVar10[-1] = 0xffffffff;
                  uVar13 = 0xffffffff;
                  if (0 < *(int *)((longlong)param_1 + 0x34)) {
                    uVar13 = (undefined4)param_1[6];
                  }
                  uVar17 = uVar17 - 1;
                  *puVar10 = uVar13;
                  *(int *)(param_1 + 6) = iVar3 + -1;
                  iVar14 = *(int *)((longlong)param_1 + 0x34) + 1;
                  *(int *)((longlong)param_1 + 0x34) = iVar14;
                  puVar10 = puVar10 + -4;
                } while ((longlong)(int)uVar20 < (longlong)uVar17);
              }
              if (uVar16 == 0) {
                *(uint *)(param_1 + 5) = uVar18;
                uVar16 = uVar18 + 0x1f >> 5;
                if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar16) {
                  FUN_14499171c(local_78,0,uVar16,4);
                  *(uint *)((longlong)param_1 + 0x2c) = uVar18 + 0x1f & 0xffffffe0;
                }
                plVar7 = (longlong *)param_1[4];
                if ((longlong *)param_1[4] == (longlong *)0x0) {
                  plVar7 = local_78;
                }
                if (uVar18 < 0x101) {
                  uVar16 = uVar16 + (uVar16 == 0);
                }
                memset(plVar7,0,(ulonglong)(uVar16 << 2));
                iVar14 = (int)param_1[5];
                iVar3 = iVar14 + 0x1f;
                if (-1 < iVar14) {
                  iVar3 = iVar14;
                }
                if (iVar14 % 0x20 != 0) {
                  plVar7 = (longlong *)param_1[4];
                  if ((longlong *)param_1[4] == (longlong *)0x0) {
                    plVar7 = local_78;
                  }
                  bVar19 = -(char)(iVar14 % 0x20);
                  *(uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4) =
                       (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4) <<
                             (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
                }
              }
              else if (-1 < (int)uVar18) {
                iVar14 = (int)param_1[5];
                if (uVar15 != uVar16) {
                  if (iVar14 == 0) {
                    iVar3 = -1;
                  }
                  else {
                    iVar3 = iVar14 + 0x1e;
                    if (-1 < iVar14 + -1) {
                      iVar3 = iVar14 + -1;
                    }
                    iVar3 = iVar3 >> 5;
                  }
                  iVar21 = iVar14 + uVar18;
                  iVar5 = iVar14 + -1 + uVar18;
                  iVar9 = iVar14 + 0x1e + uVar18;
                  if (-1 < iVar5) {
                    iVar9 = iVar5;
                  }
                  if (iVar9 >> 5 == iVar3) {
                    *(int *)(param_1 + 5) = iVar21;
                  }
                  else {
                    if (*(int *)((longlong)param_1 + 0x2c) < iVar21) {
                      iVar3 = iVar14;
                      if (iVar21 + 0x1fU < 0xa0) {
                        iVar5 = 0x80;
                      }
                      else {
                        uVar16 = iVar21 + 0x1fU >> 5;
                        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                          uVar20 = 4;
                          if (4 < uVar16) {
                            uVar20 = uVar16;
                          }
                        }
                        else {
                          uVar20 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
                        }
                        uVar17 = (ulonglong)(uVar20 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar4 = (uint)(uVar17 + 0xf);
                            if (uVar20 < 0x1ffd) {
                              uVar17 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
                            }
                            else {
                              uVar8 = (ulonglong)(uVar4 & 0xfffffff0);
                              if (uVar8 < 0x7ff1) {
                                bVar19 = (&DAT_14c841e00)[uVar4 >> 4];
                                uVar11 = 0x32;
                                if (0x32 < bVar19) {
                                  uVar11 = (ulonglong)bVar19;
                                }
                                uVar12 = 0x32 - (ulonglong)bVar19;
                                do {
                                  uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar12 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar12 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_1402b040f;
                                  lVar6 = uVar11 + 1 + uVar12;
                                  uVar12 = uVar12 - 1;
                                } while (lVar6 != 0x33);
                              }
                              uVar17 = 0x10;
                              if (0x10 < DAT_14c841df8) {
                                uVar17 = (ulonglong)DAT_14c841df8;
                              }
                              uVar17 = -uVar17 & (uVar8 + uVar17) - 1;
                            }
                          }
                          else {
                            uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                            iVar3 = (int)param_1[5];
                          }
                        }
LAB_1402b040f:
                        iVar21 = (int)(uVar17 >> 2);
                        iVar5 = -0x20;
                        if ((int)uVar16 <= iVar21) {
                          iVar5 = iVar21 << 5;
                        }
                      }
                      *(int *)((longlong)param_1 + 0x2c) = iVar5;
                      FUN_1446efbd8(local_78,iVar3);
                      iVar21 = (int)param_1[5] + uVar18;
                    }
                    iVar3 = iVar21 + 0x1f;
                    if (-1 < iVar21) {
                      iVar3 = iVar21;
                    }
                    *(int *)(param_1 + 5) = iVar21;
                    if (iVar21 % 0x20 != 0) {
                      plVar7 = (longlong *)param_1[4];
                      if ((longlong *)param_1[4] == (longlong *)0x0) {
                        plVar7 = local_78;
                      }
                      bVar19 = -(char)(iVar21 % 0x20);
                      *(uint *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4) =
                           (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar3 >> 5) * 4) <<
                                 (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
                    }
                  }
                }
                FUN_1447c6044(local_78,iVar14,uVar18,0);
                param_3 = local_70;
              }
            }
            plVar7 = local_58;
            iVar14 = 1;
            if (3 < uVar15) {
              uVar16 = (uVar15 | 1) + 0xe;
              iVar14 = 0x1f;
              if (uVar16 != 0) {
                for (; uVar16 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                }
              }
              iVar14 = 1 << ((byte)iVar14 & 0x1f);
            }
            if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar14)) {
              *(int *)(param_1 + 9) = iVar14;
              FUN_1402b0a58(param_1);
            }
          }
          if (iVar1 != 0) {
            lVar6 = (longlong)iVar1 << 3;
            do {
              FUN_1402b0522(param_1,local_4c,lVar22);
              lVar22 = lVar22 + 8;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != local_60);
    }
    *(bool *)(param_1 + 10) = (int)param_1[1] != *(int *)((longlong)param_1 + 0x34);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1402b0522 FUN_1402b0522 body=333 status=ok
// SIG undefined FUN_1402b0522(void)

undefined4 *
FUN_1402b0522(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402b0706(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1402b0670(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402b0a58(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b0670 FUN_1402b0670 body=149 status=ok
// SIG undefined FUN_1402b0670(void)

void FUN_1402b0670(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1402b07ec(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1402b06da;
    }
  }
  uVar1 = 0;
LAB_1402b06da:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1402b0706 FUN_1402b0706 body=229 status=ok
// SIG undefined FUN_1402b0706(void)

int * FUN_1402b0706(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1402b07ec FUN_1402b07ec body=138 status=ok
// SIG undefined FUN_1402b07ec(void)

void FUN_1402b07ec(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402b0876 FUN_1402b0876 body=481 status=ok
// SIG undefined FUN_1402b0876(void)

bool FUN_1402b0876(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = param_1 & 0xffff;
  if ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)uVar7 * 0x3c + 1) & 8) == 0) {
    return false;
  }
  cVar1 = FUN_144939fee(param_1);
  if (cVar1 == '\0') {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96ed0) && (FUN_144b3d300(&DAT_14ca96ed0), DAT_14ca96ed0 == -1)) {
    FUN_140056680(&DAT_14ca96eb8,L"r.Material.ExcludeNonPipelinedShaders");
    DAT_14ca96ec8 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143226511);
    _Init_thread_footer(&DAT_14ca96ed0);
  }
  puVar3 = &DAT_14ca84468;
  uVar6 = (ushort)param_1;
  if (uVar6 != 0x31) {
    switch(uVar7) {
    case 0x30:
switchD_1402b093d_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1402b093d_caseD_31:
      if ((uVar6 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1402b08d3;
      }
      lVar4 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1402b093d_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1402b093d_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(uVar7) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1402b093d_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1402b093d_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1402b093d_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1402b093d_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar3;
LAB_1402b08d3:
  if (DAT_14ca96ec8 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar5 = DAT_14ca96eb8;
    if (DAT_14ca96ec0 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    DAT_14ca96ec8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
  }
  cVar1 = FUN_14002b5e0(uVar8,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar6)) {
    return false;
  }
  iVar2 = (**(code **)(*DAT_14ca96ec8 + 0xb0))();
  return iVar2 != 0;
}



// FUNCTION 1402b0a58 FUN_1402b0a58 body=682 status=ok
// SIG undefined FUN_1402b0a58(void)

void FUN_1402b0a58(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1402b0abc;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1402b0abc:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1402b0d02 FUN_1402b0d02 body=1284 status=ok
// SIG undefined FUN_1402b0d02(void)

undefined1 *
FUN_1402b0d02(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  char cVar7;
  longlong **pplVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined4 local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  longlong *local_1a0 [36];
  longlong **local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e8 = param_2;
  local_1e0 = param_3;
  (**(code **)(*DAT_14c968088 + 0x68))(DAT_14c968088,&local_1b8);
  if (local_1b8 != 0) {
    local_1c8 = local_1b8;
    local_1c0 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    FUN_14054cb04(&local_1a8,param_4,&local_1c8);
    plVar12 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (CONCAT71(uStack_1a7,local_1a8) != 0) {
      local_1c0 = local_1a0[0];
      if (local_1a0[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1a0[0] + 1) = (int)local_1a0[0][1] + 1;
        UNLOCK();
      }
      local_1f0 = param_6;
      local_1f8 = param_5;
      local_1c8 = CONCAT71(uStack_1a7,local_1a8);
      (**(code **)(*param_1 + 0x1a8))(param_1,local_1e8,local_1e0,&local_1c8);
      plVar12 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (local_1a0[0] != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1a0[0] + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_1a0[0])(local_1a0[0]);
          LOCK();
          piVar2 = (int *)((longlong)local_1a0[0] + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1a0[0] + 0x10))(local_1a0[0]);
          }
        }
      }
      goto LAB_1402b0edc;
    }
    if (local_1a0[0] != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1a0[0] + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_1a0[0])(local_1a0[0]);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0[0] + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1a0[0] + 0x10))(local_1a0[0]);
        }
      }
    }
  }
  lVar9 = (longlong)(int)param_4[1];
  if (0 < lVar9) {
    uVar10 = lVar9 + 1;
    lVar9 = lVar9 << 4;
    local_1d0 = param_4;
    do {
      lVar9 = lVar9 + -0x10;
      lVar11 = *local_1d0;
      plVar12 = *(longlong **)(*(longlong *)(lVar11 + lVar9) + 0x510);
      if (plVar12 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar12 + 0x80))();
        if (cVar7 != '\0') {
          plVar12 = (longlong *)(lVar11 + lVar9);
          lVar11 = *plVar12;
          local_1d8 = uVar10;
          if (*(longlong **)(lVar11 + 0x510) != (longlong *)0x0) {
            cVar7 = (**(code **)(**(longlong **)(lVar11 + 0x510) + 0x78))();
            uVar10 = local_1d8;
            if (cVar7 != '\0') goto LAB_1402b0f24;
            lVar11 = *plVar12;
          }
          uVar6 = local_1e0;
          local_1f0 = param_6;
          local_1f8 = param_5;
          (**(code **)(*param_1 + 0x108))(param_1,&local_1a8,local_1e0,lVar11 + 0x600);
          pplVar8 = local_80;
          puVar5 = local_1e8;
          iVar3 = (int)local_78;
          if ((int)local_78 < 1) {
            local_1f0 = param_6;
            local_1f8 = param_5;
            (**(code **)(*param_1 + 0x1a8))(param_1,local_1e8,uVar6,plVar12);
            iVar3 = *(int *)(puVar5 + 0x130);
            if (iVar3 < 1) {
              FUN_1447fa21a(local_1e8);
            }
            bVar4 = 0 < iVar3;
            uVar10 = local_50 & 0xffffffff;
          }
          else {
            *local_1e8 = local_1a8;
            if (local_80 == (longlong **)0x0) {
              memcpy(local_1e8 + 8,local_1a0,0x120);
            }
            *(longlong ***)(local_1e8 + 0x128) = pplVar8;
            local_80 = (longlong **)0x0;
            *(int *)(local_1e8 + 0x130) = iVar3;
            *(undefined4 *)(local_1e8 + 0x134) = local_78._4_4_;
            local_78 = 0x400000000;
            local_1e8[0x138] = local_70;
            *(undefined8 *)(local_1e8 + 0x140) = local_68;
            *(longlong **)(local_1e8 + 0x148) = plStack_60;
            local_68 = 0;
            plStack_60 = (longlong *)0x0;
            *(longlong *)(local_1e8 + 0x150) = local_58;
            local_58 = 0;
            *(undefined4 *)(local_1e8 + 0x158) = (undefined4)local_50;
            *(undefined4 *)(local_1e8 + 0x15c) = local_50._4_4_;
            local_50 = 0;
            bVar4 = true;
            uVar10 = 0;
          }
          FUN_1447fa2ac(local_58,uVar10);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          plVar12 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          pplVar8 = local_80;
          if (local_80 == (longlong **)0x0) {
            pplVar8 = local_1a0;
          }
          FUN_1447157bd(pplVar8,local_78 & 0xffffffff);
          if (local_80 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          uVar10 = local_1d8;
          if (bVar4) goto LAB_1402b0edc;
        }
      }
LAB_1402b0f24:
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  *local_1e8 = DAT_14c96b238;
  *(undefined8 *)(local_1e8 + 0x128) = 0;
  *(undefined8 *)(local_1e8 + 0x130) = 0x400000000;
  local_1e8[0x138] = 0;
  *(undefined8 *)(local_1e8 + 0x140) = 0;
  *(undefined8 *)(local_1e8 + 0x148) = 0;
  *(undefined8 *)(local_1e8 + 0x150) = 0;
  *(undefined8 *)(local_1e8 + 0x158) = 0;
LAB_1402b0edc:
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1b0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar2 = (int *)((longlong)local_1b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1b0 + 0x10))(local_1b0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return local_1e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b1208 FUN_1402b1208 body=577 status=ok
// SIG undefined FUN_1402b1208(void)

undefined1 *
FUN_1402b1208(longlong *param_1,undefined1 *param_2,ulonglong param_3,longlong *param_4,
             undefined1 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong **)(*param_4 + 0x510) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(*param_4 + 0x510) + 0x80))();
    if (cVar4 != '\0') {
      cVar4 = FUN_14020e49e(*param_4);
      if (cVar4 == '\0') {
        local_70 = *param_4;
        local_68 = (longlong *)param_4[1];
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        cVar4 = (**(code **)(*param_1 + 0x118))(param_1,&local_70);
        plVar3 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (cVar4 == '\0') goto LAB_1402b13b8;
      }
      cVar4 = FUN_1402b144a(*param_4,param_3);
      if (cVar4 != '\0') {
        uVar6 = param_3 >> 0x20;
        if (DAT_14c75ef44 == '\x01') {
          iVar5 = (**(code **)(**(longlong **)(*param_4 + 0x510) + 0x68))();
          if (iVar5 == 0) {
            uVar6 = param_3 >> 0x20;
            FUN_14287c17c(*param_4,&local_70);
            param_3 = (ulonglong)(uint)(((float)local_70 / (float)(int)param_1[8]) * (float)param_3)
            ;
            uVar6 = (ulonglong)
                    (uint)((local_70._4_4_ / (float)*(int *)((longlong)param_1 + 0x44)) *
                          (float)uVar6);
          }
        }
        local_90 = param_6;
        local_98 = param_5;
        FUN_1402b178a(*(undefined8 *)(*param_4 + 0x520),&local_70,
                      param_3 & 0xffffffff | uVar6 << 0x20,(int)param_1[0x61]);
        local_80 = local_70;
        local_78 = local_68._0_4_;
        FUN_14493a2ae(param_2);
        FUN_14493a258(local_70,(ulonglong)local_68 & 0xffffffff);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1402b1321;
      }
    }
  }
LAB_1402b13b8:
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
LAB_1402b1321:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b144a FUN_1402b144a body=139 status=ok
// SIG undefined FUN_1402b144a(void)

undefined8 FUN_1402b144a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20) - *(float *)(param_1 + 900);
  fVar3 = (float)param_2 - *(float *)(param_1 + 0x380);
  iVar1 = _finite((double)fVar3);
  if (iVar1 != 0) {
    iVar1 = _finite((double)fVar4);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402b14c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0xa8))
                        (*(longlong **)(param_1 + 0x510),(int)fVar3,(int)fVar4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1402b14d6 FUN_1402b14d6 body=332 status=ok
// SIG undefined FUN_1402b14d6(void)

void FUN_1402b14d6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1402b1544;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1402b1544:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x14)) {
      uVar5 = uVar3 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x14,4);
  }
  return;
}



// FUNCTION 1402b1622 FUN_1402b1622 body=359 status=ok
// SIG undefined FUN_1402b1622(void)

void FUN_1402b1622(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else if (param_2 < 5) {
    uVar5 = 4;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1402b1699;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_1402b1699:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 300)) {
    return;
  }
  *(int *)(param_1 + 300) = (int)uVar5;
  FUN_14022ee7e(param_1,*(undefined4 *)(param_1 + 0x128),uVar5,0x48);
  return;
}



// FUNCTION 1402b178a FUN_1402b178a body=3830 status=ok
// SIG undefined FUN_1402b178a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1402b178a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5,
             int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  byte bVar5;
  float fVar6;
  ulonglong uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  void **ppvVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  void **ppvVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  void *unaff_R14;
  void *pvVar25;
  longlong lVar26;
  longlong *plVar27;
  bool bVar28;
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
  undefined1 auStack_7d8 [32];
  char local_7b8;
  float local_7ac;
  longlong local_7a8;
  longlong *local_7a0;
  longlong *local_798;
  float local_790;
  float local_78c;
  longlong local_788;
  void *local_780;
  double local_778;
  double local_770;
  longlong local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  float local_750;
  float fStack_74c;
  float local_748;
  float local_744;
  void *local_740;
  uint local_738;
  void **local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  local_798 = param_2;
  if ((((*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x58)) && (0 < *(int *)(param_1 + 0x90))) &&
      (0 < *(int *)(param_1 + 0xc0))) && (0 < *(int *)(param_1 + 0xc4))) {
    local_78c = (float)param_3;
    local_790 = (float)((ulonglong)param_3 >> 0x20);
    fVar33 = local_790 - *(float *)(param_1 + 0xcc);
    fVar34 = local_78c - *(float *)(param_1 + 200);
    uVar10 = (int)ROUND(fVar34 / DAT_14c96b0b8 + fVar34 / DAT_14c96b0b8 + -0.5) >> 1;
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    uVar23 = *(int *)(param_1 + 0xc0) - 1;
    if (uVar10 < uVar23) {
      uVar23 = uVar10;
    }
    uVar10 = (int)ROUND(fVar33 / DAT_14c96b0bc + fVar33 / DAT_14c96b0bc + -0.5) >> 1;
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    uVar24 = *(int *)(param_1 + 0xc4) - 1;
    if (uVar10 < uVar24) {
      uVar24 = uVar10;
    }
    ppvVar20 = &local_740;
    local_100 = (void **)0x0;
    local_f8 = 0x6400000000;
    FUN_1402b2af8(param_1,ppvVar20,uVar23,uVar24);
    bVar5 = 1;
    if (0 < (longlong)(int)local_f8) {
      local_7a0 = (longlong *)CONCAT44(local_7a0._4_4_,fVar33);
      local_7a8 = CONCAT44(local_7a8._4_4_,fVar34);
      pvVar25 = (void *)(longlong)(int)local_f8;
      do {
        unaff_R14 = pvVar25;
        pvVar25 = (void *)((longlong)unaff_R14 + -1);
        ppvVar11 = local_100;
        if (local_100 == (void **)0x0) {
          ppvVar11 = ppvVar20;
        }
        iVar18 = *(int *)(ppvVar11 + (longlong)pvVar25 * 2 + 1);
        lVar12 = *(longlong *)((longlong)ppvVar11[(longlong)pvVar25 * 2] + 0x50);
        plVar21 = *(longlong **)(lVar12 + 8 + (longlong)iVar18 * 0x40);
        if (plVar21 != (longlong *)0x0) {
          iVar14 = (int)plVar21[1];
          do {
            if (iVar14 == 0) goto LAB_1402b240f;
            LOCK();
            iVar8 = (int)plVar21[1];
            bVar28 = iVar14 == iVar8;
            if (bVar28) {
              *(int *)(plVar21 + 1) = iVar14 + 1;
              iVar8 = iVar14;
            }
            iVar14 = iVar8;
            UNLOCK();
          } while (!bVar28);
          lVar12 = *(longlong *)(lVar12 + (longlong)iVar18 * 0x40);
          local_780 = unaff_R14;
          if (lVar12 != 0) {
            fVar43 = *(float *)(param_1 + 0xd4) + fVar33;
            local_7ac = *(float *)(param_1 + 0xd0) + fVar34;
            ppvVar11 = local_100;
            if (local_100 == (void **)0x0) {
              ppvVar11 = ppvVar20;
            }
            pvVar3 = ppvVar11[(longlong)pvVar25 * 2];
            fVar30 = *(float *)((longlong)pvVar3 + 0xb0);
            fVar39 = *(float *)((longlong)pvVar3 + 0xb8);
            local_750 = local_7ac;
            fStack_74c = fVar43;
            if (((fVar30 != -1.0) || (NAN(fVar30))) || ((fVar39 != -1.0 || (NAN(fVar39))))) {
LAB_1402b234a:
              if (fVar30 <= fVar39) {
                if ((*(float *)((longlong)pvVar3 + 0xb4) <= *(float *)((longlong)pvVar3 + 0xbc)) &&
                   ((((local_7ac < fVar30 || (fVar39 < local_7ac)) ||
                     (*(float *)((longlong)pvVar3 + 0xbc) < fVar43)) ||
                    (fVar43 < *(float *)((longlong)pvVar3 + 0xb4))))) goto LAB_1402b23e0;
              }
            }
            else {
              fVar39 = -1.0;
              if ((*(float *)((longlong)pvVar3 + 0xbc) != -1.0) ||
                 (NAN(*(float *)((longlong)pvVar3 + 0xbc)))) goto LAB_1402b234a;
              fVar39 = -1.0;
              if ((*(float *)((longlong)pvVar3 + 0xb4) != -1.0) ||
                 (NAN(*(float *)((longlong)pvVar3 + 0xb4)))) goto LAB_1402b234a;
            }
            if (*(char *)(lVar12 + 0x90) == '\x01') {
              local_768 = CONCAT44(fVar43,local_7ac);
              if (*(char *)(lVar12 + 0x84) == '\0') {
                if ((longlong)*(int *)(lVar12 + 0x58) != 0) {
                  lVar26 = *(longlong *)(lVar12 + 0x50);
                  local_788 = (longlong)*(int *)(lVar12 + 0x58) * 0x24;
                  do {
                    cVar9 = FUN_1402b2796(lVar26,&local_768);
                    if (cVar9 == '\0') goto LAB_1402b23e0;
                    lVar26 = lVar26 + 0x24;
                    local_788 = local_788 + -0x24;
                  } while (local_788 != 0);
                }
              }
              else {
                cVar9 = FUN_1402b2796(lVar12 + 0x60,&local_768);
                if (cVar9 == '\0') goto LAB_1402b23e0;
              }
            }
            fVar33 = *(float *)(lVar12 + 0xa0);
            fVar31 = *(float *)(lVar12 + 0x9c) * fVar33;
            fVar42 = 1.0 / fVar33;
            fVar29 = fVar33 * 0.0;
            fVar30 = *(float *)(lVar12 + 0xa8) + fVar29;
            fVar34 = *(float *)(lVar12 + 0xa4) + fVar29;
            fVar35 = fVar29 + fVar30;
            fVar39 = *(float *)(lVar12 + 0x98) * fVar33 + fVar34;
            fVar40 = fVar31 + fVar30;
            fVar37 = fVar29 + fVar34;
            fVar31 = fVar31 + fVar35;
            fVar29 = fVar29 + fVar39;
            fVar33 = fVar35;
            if (fVar35 <= fVar40) {
              fVar33 = fVar40;
            }
            if (fVar33 <= fVar31) {
              fVar33 = fVar31;
            }
            fVar6 = fVar30;
            if (fVar30 <= fVar33) {
              fVar6 = fVar33;
            }
            fVar33 = fVar39;
            if (fVar39 <= fVar37) {
              fVar33 = fVar37;
            }
            if (fVar33 <= fVar29) {
              fVar33 = fVar29;
            }
            fVar32 = fVar34;
            if (fVar34 <= fVar33) {
              fVar32 = fVar33;
            }
            if (fVar40 <= fVar35) {
              fVar35 = fVar40;
            }
            if (fVar31 <= fVar35) {
              fVar35 = fVar31;
            }
            if (fVar35 <= fVar30) {
              fVar30 = fVar35;
            }
            if (fVar37 <= fVar39) {
              fVar39 = fVar37;
            }
            if (fVar29 <= fVar39) {
              fVar39 = fVar29;
            }
            if (fVar39 <= fVar34) {
              fVar34 = fVar39;
            }
            fVar36 = -*(float *)(lVar12 + 0xa8) * fVar42;
            fVar38 = -*(float *)(lVar12 + 0xa4) * fVar42;
            fVar33 = *(float *)(lVar12 + 0xb8);
            fVar39 = *(float *)(lVar12 + 0xc0);
            fVar35 = *(float *)(lVar12 + 0xb4);
            fVar29 = *(float *)(lVar12 + 0xbc);
            fVar41 = fVar33 * 0.0 + fVar42 * fVar39;
            fVar40 = fVar35 * 0.0 + fVar42 * fVar29;
            fVar31 = fVar39 * 0.0 + fVar42 * fVar33;
            fVar37 = fVar29 * 0.0 + fVar42 * fVar35;
            local_768 = CONCAT44(fVar31 * fVar34 + fVar41 * fVar30 +
                                 fVar38 * fVar33 + fVar36 * fVar39 + *(float *)(lVar12 + 200),
                                 fVar37 * fVar34 + fVar40 * fVar30 +
                                 fVar38 * fVar35 + fVar36 * fVar29 + *(float *)(lVar12 + 0xc4));
            uStack_760 = CONCAT44((fVar32 - fVar34) * fVar31 + fVar41 * 0.0,
                                  (fVar32 - fVar34) * fVar37 + fVar40 * 0.0);
            local_758 = CONCAT44(fVar31 * 0.0 + fVar41 * (fVar6 - fVar30),
                                 fVar37 * 0.0 + (fVar6 - fVar30) * fVar40);
            FUN_1402b2821(&local_748,&local_750);
            if ((fVar43 - local_744) * (fVar43 - local_744) +
                (local_7ac - local_748) * (local_7ac - local_748) <= 0.0) {
              if (local_100 != (void **)0x0) {
                ppvVar20 = local_100;
              }
              unaff_R14 = ppvVar20[(longlong)pvVar25 * 2];
              ppvVar20 = (void **)(ulonglong)*(uint *)(ppvVar20 + (longlong)pvVar25 * 2 + 1);
              LOCK();
              plVar16 = plVar21 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
              bVar5 = 0;
              break;
            }
            fVar33 = local_7a0._0_4_;
            fVar34 = (float)local_7a8;
          }
LAB_1402b23e0:
          unaff_R14 = local_780;
          LOCK();
          plVar16 = plVar21 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
LAB_1402b240f:
      } while (1 < (longlong)unaff_R14);
    }
    if (local_100 != (void **)0x0) {
      FUN_1400020a8();
    }
    if (((!(bool)(bVar5 | unaff_R14 == (void *)0x0)) && (uVar10 = (uint)ppvVar20, -1 < (int)uVar10))
       && ((int)uVar10 < *(int *)((longlong)unaff_R14 + 0x78))) {
      lVar12 = (longlong)unaff_R14 + 0x60;
      if (*(longlong *)((longlong)unaff_R14 + 0x70) != 0) {
        lVar12 = *(longlong *)((longlong)unaff_R14 + 0x70);
      }
      if ((*(uint *)(lVar12 + ((ulonglong)ppvVar20 >> 5 & 0x7ffffff) * 4) >> (uVar10 & 0x1f) & 1) !=
          0) {
        lVar12 = ((ulonglong)ppvVar20 & 0xffffffff) * 0x40;
        plVar21 = *(longlong **)(*(longlong *)((longlong)unaff_R14 + 0x50) + 8 + lVar12);
        if (plVar21 != (longlong *)0x0) {
          plVar16 = (longlong *)(*(longlong *)((longlong)unaff_R14 + 0x50) + lVar12);
          iVar18 = (int)plVar21[1];
          do {
            if (iVar18 == 0) goto LAB_1402b23af;
            LOCK();
            iVar14 = (int)plVar21[1];
            bVar28 = iVar18 == iVar14;
            if (bVar28) {
              *(int *)(plVar21 + 1) = iVar18 + 1;
              iVar14 = iVar18;
            }
            iVar18 = iVar14;
            UNLOCK();
          } while (!bVar28);
          lVar12 = *plVar16;
          if ((lVar12 != 0) &&
             (((*(int *)((longlong)plVar16 + 0x3c) == param_6 || (param_6 == -1)) ||
              (*(int *)((longlong)plVar16 + 0x3c) == -1)))) {
            local_768 = 0;
            uStack_760 = 0;
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            local_7a8 = lVar12;
            local_7a0 = plVar21;
            do {
              uVar13 = *(undefined8 *)(lVar12 + 0x98);
              fVar33 = *(float *)(lVar12 + 0xa0);
              uVar4 = *(undefined8 *)(lVar12 + 0xac);
              fVar34 = *(float *)(lVar12 + 0xb4);
              fVar43 = *(float *)(lVar12 + 0xb8);
              fVar30 = *(float *)(lVar12 + 0xbc);
              fVar39 = *(float *)(lVar12 + 0xc0);
              fVar35 = *(float *)(lVar12 + 0xc4);
              fVar29 = *(float *)(lVar12 + 200);
              uVar2 = *(undefined4 *)(lVar12 + 0xcc);
              fVar40 = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xd4);
              fVar42 = *(float *)(param_1 + 200) - *(float *)(param_1 + 0xd0);
              fVar31 = *(float *)(lVar12 + 0xa8);
              fVar37 = *(float *)(lVar12 + 0xa4);
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                LOCK();
                plVar27 = plVar21 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 == 0) {
                  local_7ac = fVar33;
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  fVar33 = local_7ac;
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                    fVar33 = local_7ac;
                  }
                }
              }
              uVar7 = uStack_760;
              lVar26 = (longlong)(int)(uint)uStack_760;
              uVar10 = (uint)uStack_760 + 1;
              uStack_760 = CONCAT44(uStack_760._4_4_,uVar10);
              if (uStack_760._4_4_ < uVar10) {
                local_7ac = fVar33;
                FUN_1402b2682(&local_768,uVar7 & 0xffffffff);
                fVar33 = local_7ac;
              }
              lVar26 = lVar26 * 0x60;
              *(undefined8 *)(local_768 + lVar26) = uVar13;
              *(float *)(local_768 + 8 + lVar26) = fVar33;
              *(float *)(local_768 + 0xc + lVar26) = fVar37 + fVar42;
              *(float *)(local_768 + 0x10 + lVar26) = fVar31 + fVar40;
              *(undefined8 *)(local_768 + 0x14 + lVar26) = uVar4;
              *(float *)(local_768 + 0x1c + lVar26) = fVar43 * 0.0 + fVar34;
              *(float *)(local_768 + 0x20 + lVar26) = fVar34 * 0.0 + fVar43;
              *(float *)(local_768 + 0x24 + lVar26) = fVar39 * 0.0 + fVar30;
              *(float *)(local_768 + 0x28 + lVar26) = fVar30 * 0.0 + fVar39;
              *(float *)(local_768 + 0x2c + lVar26) = fVar29 * 0.0 + fVar35 + fVar42;
              *(float *)(local_768 + 0x30 + lVar26) = fVar35 * 0.0 + fVar29 + fVar40;
              *(undefined4 *)(local_768 + 0x34 + lVar26) = uVar2;
              *(longlong *)(local_768 + 0x38 + lVar26) = lVar12;
              *(longlong **)(local_768 + 0x40 + lVar26) = plVar21;
              if (plVar21 == (longlong *)0x0) {
                *(undefined1 *)(local_768 + lVar26 + 0x58) = 0;
              }
              else {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                *(undefined1 *)(local_768 + lVar26 + 0x58) = 0;
                LOCK();
                plVar27 = plVar21 + 1;
                *(int *)plVar27 = (int)*plVar27 + -1;
                UNLOCK();
                if ((int)*plVar27 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
              plVar27 = *(longlong **)(lVar12 + 0x48);
              if (plVar27 == (longlong *)0x0) {
LAB_1402b2033:
                plVar27 = (longlong *)0x0;
                lVar12 = 0;
              }
              else {
                iVar18 = (int)plVar27[1];
                do {
                  if (iVar18 == 0) goto LAB_1402b2033;
                  LOCK();
                  iVar14 = (int)plVar27[1];
                  bVar28 = iVar18 == iVar14;
                  if (bVar28) {
                    *(int *)(plVar27 + 1) = iVar18 + 1;
                    iVar14 = iVar18;
                  }
                  iVar18 = iVar14;
                  UNLOCK();
                } while (!bVar28);
                lVar12 = *(longlong *)(lVar12 + 0x40);
              }
              plVar17 = (longlong *)0x0;
              if (plVar27 == plVar21) {
                plVar17 = plVar27;
              }
              if ((plVar21 == (longlong *)0x0) || (plVar27 == plVar21)) {
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  plVar21 = plVar17 + 1;
                  *(int *)plVar21 = (int)*plVar21 + -1;
                  UNLOCK();
                  if ((int)*plVar21 == 0) {
                    (**(code **)*plVar17)(plVar17);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar17 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar18 = *piVar1;
                    UNLOCK();
                    plVar21 = plVar27;
                    goto joined_r0x0001402b2227;
                  }
                }
              }
              else {
                LOCK();
                plVar17 = plVar21 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)*plVar21)(plVar21);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar18 = *piVar1;
                  UNLOCK();
joined_r0x0001402b2227:
                  if (iVar18 == 0) {
                    (**(code **)(*plVar21 + 0x10))(plVar21);
                  }
                }
              }
              plVar21 = plVar27;
            } while (lVar12 != 0);
            cVar9 = (**(code **)(**(longlong **)
                                   (local_768 + 0x38 + (longlong)(int)((uint)uStack_760 + -1) * 0x60
                                   ) + 0x200))();
            if (cVar9 == '\0') {
              *local_798 = 0;
              local_798[1] = 0;
            }
            else {
              uVar10 = (uint)uStack_760;
              if (1 < (longlong)(int)(uint)uStack_760) {
                lVar12 = (uStack_760 & 0xffffffff) * 0x60;
                lVar26 = 0;
                do {
                  lVar12 = lVar12 + -0x60;
                  puVar19 = (undefined8 *)(lVar26 + local_768);
                  ppvVar20 = &local_740;
                  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *ppvVar20 = (void *)*puVar19;
                    puVar19 = puVar19 + 1;
                    ppvVar20 = ppvVar20 + 1;
                  }
                  puVar19 = (undefined8 *)(lVar12 + local_768);
                  puVar22 = (undefined8 *)(lVar26 + local_768);
                  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar22 = *puVar19;
                    puVar19 = puVar19 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  ppvVar20 = &local_740;
                  puVar19 = (undefined8 *)(lVar12 + local_768);
                  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar19 = *ppvVar20;
                    ppvVar20 = ppvVar20 + 1;
                    puVar19 = puVar19 + 1;
                  }
                  lVar26 = lVar26 + 0x60;
                } while ((ulonglong)((uint)uStack_760 >> 1) * 0x60 != lVar26);
              }
              if (param_5 == '\0') {
                if ((uint)uStack_760 != 0) {
                  lVar12 = 0;
                  do {
                    if (*(char *)(*(longlong *)(local_768 + 0x38 + lVar12) + 0x3a) != '\x01') {
                      iVar18 = (int)(lVar12 >> 5);
                      iVar14 = iVar18 * -0x55555555;
                      if (iVar14 != -1) {
                        iVar18 = (uint)uStack_760 + iVar18 * 0x55555555;
                        if (iVar18 != 0) {
                          pvVar25 = (void *)(local_768 + (longlong)iVar14 * 0x60);
                          FUN_14493a258(pvVar25,iVar18);
                          iVar14 = (uint)uStack_760 - uVar10;
                          if (iVar14 != 0) {
                            memmove(pvVar25,(void *)((longlong)iVar18 * 0x60 + (longlong)pvVar25),
                                    (longlong)iVar14 * 0x60);
                            uVar10 = (uint)uStack_760;
                          }
                          uStack_760 = CONCAT44(uStack_760._4_4_,uVar10 - iVar18);
                          FUN_1469523ce();
                        }
                        goto LAB_1402b211d;
                      }
                      break;
                    }
                    lVar12 = lVar12 + 0x60;
                  } while ((longlong)(int)(uint)uStack_760 * 0x60 != lVar12);
                  goto LAB_1402b210d;
                }
              }
              else {
LAB_1402b210d:
                if ((((0 < (int)(uint)uStack_760) && (plVar16[2] != 0)) &&
                    (plVar21 = (longlong *)plVar16[3], plVar21 != (longlong *)0x0)) &&
                   (0 < (int)plVar21[1])) {
                  local_770 = (double)local_790;
                  local_778 = (double)local_78c;
                  iVar18 = (int)plVar21[1];
                  do {
                    if (iVar18 == 0) {
                      uVar13 = FUN_14287b896(local_7a8);
                      local_7b8 = param_5;
                      (**(code **)(_DAT_00000000 + 8))(0,&local_740,uVar13,&local_778);
                      goto LAB_1402b25e5;
                    }
                    LOCK();
                    iVar14 = (int)plVar21[1];
                    bVar28 = iVar18 == iVar14;
                    if (bVar28) {
                      *(int *)(plVar21 + 1) = iVar18 + 1;
                      iVar14 = iVar18;
                    }
                    iVar18 = iVar14;
                    UNLOCK();
                  } while (!bVar28);
                  plVar16 = (longlong *)plVar16[2];
                  uVar13 = FUN_14287b896(local_7a8);
                  local_7b8 = param_5;
                  (**(code **)(*plVar16 + 8))(plVar16,&local_740,uVar13,&local_778);
                  LOCK();
                  plVar16 = plVar21 + 1;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)*plVar16 == 0) {
                    (**(code **)*plVar21)(plVar21);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar21 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar21 + 0x10))(plVar21);
                    }
                  }
LAB_1402b25e5:
                  uVar7 = uStack_760;
                  if ((longlong)(int)local_738 != 0) {
                    iVar18 = (uint)uStack_760;
                    lVar12 = (longlong)(int)(uint)uStack_760;
                    uStack_760 = CONCAT44(uStack_760._4_4_,(uint)uStack_760 + local_738);
                    if (uStack_760._4_4_ - iVar18 < local_738) {
                      FUN_1402b2682(&local_768,uVar7 & 0xffffffff);
                    }
                    memmove((void *)(lVar12 * 0x60 + local_768),local_740,
                            (longlong)(int)local_738 * 0x60);
                    local_738 = 0;
                  }
                  FUN_14493a258(local_740,0);
                  if (local_740 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
              }
LAB_1402b211d:
              *local_798 = local_768;
              local_768 = 0;
              *(uint *)(local_798 + 1) = (uint)uStack_760;
              *(uint *)((longlong)local_798 + 0xc) = uStack_760._4_4_;
              uStack_760 = 0;
            }
            plVar21 = local_798;
            if (plVar27 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar27 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar1 = (int *)((longlong)plVar27 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
            FUN_14493a258(local_768,uStack_760 & 0xffffffff);
            if (local_768 != 0) {
              FUN_1400020a8();
            }
            plVar27 = local_7a0;
            LOCK();
            plVar16 = local_7a0 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*local_7a0)(local_7a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar27 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
            goto LAB_1402b2178;
          }
          LOCK();
          plVar16 = plVar21 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
      }
    }
  }
LAB_1402b23af:
  *local_798 = 0;
  local_798[1] = 0;
  plVar21 = local_798;
LAB_1402b2178:
  if ((local_f0 ^ (ulonglong)auStack_7d8) == DAT_14c707940) {
    return plVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b2682 FUN_1402b2682 body=275 status=ok
// SIG undefined FUN_1402b2682(void)

void FUN_1402b2682(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402b2796 FUN_1402b2796 body=139 status=ok
// SIG undefined FUN_1402b2796(void)

bool FUN_1402b2796(float *param_1,float *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (((uint)param_1[8] & 1) == 0) {
    cVar2 = FUN_142866669(param_2,param_1,param_1 + 2,param_1 + 4);
    bVar1 = true;
    if (cVar2 == '\0') {
      uVar3 = FUN_142866669(param_2,param_1 + 4,param_1 + 2,param_1 + 6);
      return (bool)uVar3;
    }
  }
  else if (((*param_2 < *param_1) || (param_1[2] < *param_2)) || (param_2[1] < param_1[1])) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2[1] <= param_1[5];
  }
  return bVar1;
}



// FUNCTION 1402b2821 FUN_1402b2821 body=543 status=ok
// SIG undefined FUN_1402b2821(void)

float * FUN_1402b2821(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  double *pdVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *(undefined8 *)param_2;
  cVar2 = FUN_1402b2a42(param_3,uVar1);
  if (cVar2 == '\0') {
    fVar3 = (float)uVar1;
    local_c0 = (double)param_3[1];
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
    local_c8 = (double)*param_3;
    pdVar5 = &local_c8;
    local_b0 = (double)param_3[3] + local_c0;
    local_b8 = (double)param_3[2] + local_c8;
    local_a0 = local_b0 + (double)param_3[5];
    local_a8 = local_b8 + (double)param_3[4];
    local_90 = local_c0 + (double)param_3[5];
    local_98 = local_c8 + (double)param_3[4];
    fVar10 = 3.4028235e+38;
    lVar6 = 1;
    fVar8 = (float)DAT_14c84635c;
    fVar9 = DAT_14c84635c._4_4_;
    do {
      local_e0 = (double)fVar4;
      local_e8 = (double)fVar3;
      FUN_1467f7798(&local_d8,&local_e8,pdVar5,
                    (longlong)&local_c8 + (ulonglong)(((uint)lVar6 & 3) << 4));
      fVar3 = *param_2;
      fVar4 = param_2[1];
      fVar7 = (float)((local_d0 - (double)fVar4) * (local_d0 - (double)fVar4) +
                     (local_d8 - (double)fVar3) * (local_d8 - (double)fVar3));
      if (fVar7 < fVar10) {
        fVar8 = (float)local_d8;
      }
      fVar9 = (float)(~-(uint)(fVar7 < fVar10) & (uint)fVar9 |
                     (uint)(float)local_d0 & -(uint)(fVar7 < fVar10));
      if (fVar10 <= fVar7) {
        fVar7 = fVar10;
      }
      fVar10 = fVar7;
      pdVar5 = pdVar5 + 2;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
    param_1[1] = fVar9;
    *param_1 = fVar8;
  }
  else {
    *(undefined8 *)param_1 = uVar1;
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b2a42 FUN_1402b2a42 body=182 status=ok
// SIG undefined FUN_1402b2a42(void)

uint FUN_1402b2a42(float *param_1,undefined8 param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)((ulonglong)param_2 >> 0x20) - param_1[1];
  fVar1 = (float)param_2 - *param_1;
  fVar4 = param_1[2] * param_1[5] - param_1[4] * param_1[3];
  fVar5 = -(param_1[3] * fVar1 - param_1[2] * fVar3) / fVar4;
  uVar2 = 0;
  if ((0.0 <= fVar5) && (fVar5 <= 1.0)) {
    fVar4 = (fVar1 * param_1[5] + param_1[4] * -fVar3) / fVar4;
    uVar2 = -(uint)(0.0 <= fVar4 && fVar4 <= 1.0);
  }
  return uVar2 & 0xffffff01;
}



// FUNCTION 1402b2af8 FUN_1402b2af8 body=1154 status=ok
// SIG undefined FUN_1402b2af8(void)

void FUN_1402b2af8(undefined8 param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_138 [36];
  uint local_114;
  ulonglong local_110;
  uint local_108;
  uint local_104;
  longlong *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8 [16];
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = (longlong *)0x0;
  local_60 = 0x1000000000;
  local_114 = param_4;
  local_108 = param_3;
  FUN_1402b2f7c();
  plVar9 = local_68;
  if (local_68 == (longlong *)0x0) {
    plVar9 = local_e8;
  }
  if ((longlong)(int)local_60 != 0) {
    plVar10 = plVar9 + (int)local_60;
    do {
      lVar19 = *plVar9;
      lVar8 = (longlong)(int)(*(int *)(lVar19 + 0xc0) * local_114 + local_108) * 0x10;
      lVar15 = (longlong)*(int *)(*(longlong *)(lVar19 + 0x88) + 8 + lVar8);
      if (lVar15 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar19 + 0x88) + lVar8);
        lVar13 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar8 + lVar13);
          iVar3 = (int)param_2[0xc9];
          *(uint *)(param_2 + 0xc9) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0x64c) < iVar3 + 1U) {
            local_100 = plVar10;
            FUN_146952fba(param_2,iVar3);
            plVar10 = local_100;
          }
          plVar6 = (longlong *)param_2[200];
          if ((longlong *)param_2[200] == (longlong *)0x0) {
            plVar6 = param_2;
          }
          plVar6[(longlong)iVar3 * 2] = lVar19;
          *(undefined4 *)(plVar6 + (longlong)iVar3 * 2 + 1) = uVar2;
          lVar13 = lVar13 + 4;
        } while (lVar15 * 4 != lVar13);
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar10);
  }
  iVar3 = (int)param_2[0xc9];
  uVar7 = (ulonglong)iVar3;
  plVar9 = (longlong *)param_2[200];
  if ((longlong *)param_2[200] == (longlong *)0x0) {
    plVar9 = param_2;
  }
  if (0 < (longlong)uVar7) {
    uVar11 = 0;
    plVar10 = plVar9;
    do {
      if (uVar11 + 1 < uVar7) {
        lVar13 = (longlong)(int)plVar10[3] * 0x40;
        lVar15 = (longlong)(int)plVar10[1] * 0x40;
        lVar19 = *(longlong *)(*(longlong *)(*plVar10 + 0x50) + 0x30 + lVar15);
        lVar8 = *(longlong *)(*(longlong *)(plVar10[2] + 0x50) + 0x30 + lVar13);
        if ((lVar8 < lVar19) ||
           ((lVar8 == lVar19 &&
            (*(uint *)(*(longlong *)(plVar10[2] + 0x50) + lVar13 + 0x38) <
             *(uint *)(*(longlong *)(*plVar10 + 0x50) + lVar15 + 0x38))))) {
          lVar19 = *plVar10;
          lVar8 = plVar10[1];
          *plVar10 = plVar10[2];
          plVar10[1] = plVar10[3];
          local_58._0_4_ = (undefined4)lVar19;
          local_58._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar8;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
          *(undefined4 *)(plVar10 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar10 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_50._4_4_;
          local_58 = lVar19;
          uStack_50 = lVar8;
        }
      }
      uVar11 = uVar11 + 2;
      plVar10 = plVar10 + 4;
    } while (uVar11 < uVar7);
    if (2 < iVar3) {
      uVar11 = 2;
      do {
        local_f8 = uVar11;
        iVar5 = (int)local_f8;
        local_108 = iVar5 * 2;
        local_100 = (longlong *)(longlong)(int)local_108;
        lVar19 = 0;
        do {
          local_104 = iVar3 - (int)lVar19;
          if ((int)local_108 <= (int)local_104) {
            local_104 = local_108;
          }
          if ((iVar5 < (int)local_104) && (0 < iVar5)) {
            iVar14 = 0;
            uVar11 = local_f8;
            while( true ) {
              local_114 = (uint)uVar11;
              plVar10 = plVar9 + lVar19 * 2 + (longlong)(int)local_114 * 2;
              iVar16 = 0;
              if (local_114 - iVar14 != 0 && iVar14 <= (int)local_114) {
                lVar8 = (longlong)(int)plVar10[1] * 0x40;
                local_110 = *(longlong *)(*plVar10 + 0x50) + lVar8;
                lVar8 = *(longlong *)(*(longlong *)(*plVar10 + 0x50) + 0x30 + lVar8);
                uVar21 = local_114 - iVar14;
                iVar12 = 0;
                do {
                  iVar17 = (uVar21 >> 1) + iVar12;
                  iVar16 = (uVar21 & 1) + iVar17;
                  lVar13 = (longlong)
                           (int)plVar9[lVar19 * 2 + (longlong)iVar14 * 2 + (longlong)iVar17 * 2 + 1]
                           * 0x40;
                  lVar15 = *(longlong *)
                            (*(longlong *)
                              (plVar9[lVar19 * 2 + (longlong)iVar14 * 2 + (longlong)iVar17 * 2] +
                              0x50) + 0x30 + lVar13);
                  if ((lVar8 < lVar15) ||
                     ((lVar8 == lVar15 &&
                      (*(uint *)(local_110 + 0x38) <
                       *(uint *)(*(longlong *)
                                  (plVar9[lVar19 * 2 + (longlong)iVar14 * 2 + (longlong)iVar17 * 2]
                                  + 0x50) + lVar13 + 0x38))))) {
                    iVar16 = iVar12;
                  }
                  bVar4 = 1 < uVar21;
                  uVar21 = uVar21 >> 1;
                  iVar12 = iVar16;
                } while (bVar4);
              }
              iVar16 = iVar16 + iVar14;
              iVar14 = local_114 - iVar16;
              if (iVar14 == 0 || (int)local_114 < iVar16) break;
              if (local_104 - local_114 == 0 || (int)local_104 < (int)local_114) {
                local_110 = 0;
              }
              else {
                plVar6 = plVar9 + lVar19 * 2 + (longlong)iVar16 * 2;
                lVar8 = (longlong)(int)plVar6[1] * 0x40;
                local_f0 = *(longlong *)(*plVar6 + 0x50) + lVar8;
                lVar8 = *(longlong *)(*(longlong *)(*plVar6 + 0x50) + 0x30 + lVar8);
                local_110 = 0;
                uVar21 = local_104 - local_114;
                do {
                  uVar22 = (int)local_110 + (uVar21 >> 1);
                  lVar13 = (longlong)(int)plVar10[(ulonglong)uVar22 * 2 + 1] * 0x40;
                  lVar15 = *(longlong *)
                            (*(longlong *)(plVar10[(ulonglong)uVar22 * 2] + 0x50) + 0x30 + lVar13);
                  if ((lVar15 < lVar8) ||
                     ((lVar15 == lVar8 &&
                      (*(uint *)(*(longlong *)(plVar10[(ulonglong)uVar22 * 2] + 0x50) + lVar13 +
                                0x38) < *(uint *)(local_f0 + 0x38))))) {
                    local_110 = (ulonglong)(uVar22 + (uVar21 & 1));
                  }
                  bVar4 = 1 < uVar21;
                  uVar21 = uVar21 >> 1;
                } while (bVar4);
                local_114 = local_114 + (int)local_110;
                if (0 < (int)local_110) {
                  plVar18 = plVar6 + (longlong)(int)(local_114 - iVar16) * 2;
                  plVar10 = plVar6 + (longlong)iVar14 * 2;
                  plVar20 = plVar6 + (longlong)iVar14 * 2;
                  do {
                    while( true ) {
                      plVar1 = plVar10 + 2;
                      lVar8 = *plVar6;
                      lVar15 = plVar6[1];
                      lVar13 = plVar10[1];
                      *plVar6 = *plVar10;
                      plVar6[1] = lVar13;
                      plVar6 = plVar6 + 2;
                      local_58._0_4_ = (undefined4)lVar8;
                      local_58._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
                      uStack_50._0_4_ = (undefined4)lVar15;
                      uStack_50._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
                      *(undefined4 *)plVar10 = (undefined4)local_58;
                      *(undefined4 *)((longlong)plVar10 + 4) = local_58._4_4_;
                      *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_50;
                      *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_50._4_4_;
                      if (plVar1 == plVar18) break;
                      plVar10 = plVar1;
                      if (plVar6 == plVar20) {
                        plVar20 = plVar1;
                      }
                    }
                    plVar10 = plVar20;
                    local_58 = lVar8;
                    uStack_50 = lVar15;
                  } while (plVar6 != plVar20);
                }
              }
              uVar11 = (ulonglong)local_114;
              if (((int)local_104 <= (int)local_114) ||
                 (iVar14 = iVar16 + (int)local_110 + 1, (int)local_114 <= iVar14)) break;
            }
          }
          lVar19 = lVar19 + (longlong)local_100;
        } while (lVar19 < (longlong)uVar7);
        uVar11 = (ulonglong)local_108;
      } while ((int)local_108 < iVar3);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402b2f7c FUN_1402b2f7c body=272 status=ok
// SIG undefined FUN_1402b2f7c(void)

void FUN_1402b2f7c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar8 = *(int *)(param_2 + 0x88);
  uVar7 = iVar8 + 1;
  *(uint *)(param_2 + 0x88) = uVar7;
  if (*(uint *)(param_2 + 0x8c) < uVar7) {
    FUN_14694d12e(param_2);
  }
  lVar9 = *(longlong *)(param_2 + 0x80);
  if (*(longlong *)(param_2 + 0x80) == 0) {
    lVar9 = param_2;
  }
  *(longlong *)(lVar9 + (longlong)iVar8 * 8) = param_1;
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x98);
    lVar9 = lVar12 + (longlong)*(int *)(param_1 + 0xa0) * 0x18;
    do {
      plVar3 = *(longlong **)(lVar12 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) goto LAB_1402b3048;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar13 = iVar8 == iVar5;
          if (bVar13) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar13);
        lVar4 = *(longlong *)(lVar12 + 8);
        if (lVar4 != 0) {
          lVar10 = *(longlong *)(param_2 + 0x80);
          if (*(longlong *)(param_2 + 0x80) == 0) {
            lVar10 = param_2;
          }
          if ((longlong)*(int *)(param_2 + 0x88) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(lVar10 + lVar11) == lVar4) goto LAB_1402b3042;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(param_2 + 0x88) * 8 != lVar11);
          }
          cVar6 = FUN_1469488ac(param_1);
          if (cVar6 != '\0') {
            FUN_1402b2f7c(lVar4);
          }
        }
LAB_1402b3042:
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
LAB_1402b3048:
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != lVar9);
  }
  return;
}



// FUNCTION 1402b308c FUN_1402b308c body=330 status=ok
// SIG undefined FUN_1402b308c(void)

longlong * FUN_1402b308c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  wchar_t *local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = param_2 + 1;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = *(undefined4 *)(param_1 + 0x44);
  local_48 = L"FSkinWeightDataVertexBuffer";
  local_50 = 0x121;
  FUN_1402b31d8(param_1,&local_38,param_3,param_1 + 0x30);
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      LOCK();
      puVar2 = (uint *)(local_38 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    *param_2 = local_38;
  }
  local_58 = *(undefined4 *)(param_1 + 0x80);
  local_48 = L"FSkinWeightLookupVertexBuffer";
  local_50 = 0x121;
  FUN_1402b31d8(param_1 + 0x48,&local_38,param_3,param_1 + 0x70);
  if (plVar1 != &local_38) {
    lVar4 = *plVar1;
    *plVar1 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_1402b3145;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_38 != 0) {
    LOCK();
    puVar2 = (uint *)(local_38 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1402b3145:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b31d8 FUN_1402b31d8 body=347 status=ok
// SIG undefined FUN_1402b31d8(void)

longlong *
FUN_1402b31d8(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  if ((longlong *)*param_4 == (longlong *)0x0) {
    puVar6 = (undefined8 *)0x0;
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_4 + 0x38))();
    puVar6 = (undefined8 *)*param_4;
  }
  if (param_5 != 0) {
    local_48 = 0;
    local_50 = puVar6 == (undefined8 *)0x0;
    local_60 = param_6;
    local_68 = param_5;
    local_58 = plVar5;
    FUN_1402b3334(&local_40,param_3,param_7);
    if (&local_40 == param_2) {
LAB_1402b3304:
      if (local_40 != 0) {
        LOCK();
        puVar1 = (uint *)(local_40 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    else {
      lVar3 = *param_2;
      *param_2 = local_40;
      local_40 = 0;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        goto LAB_1402b3304;
      }
    }
    puVar6 = (undefined8 *)*param_4;
  }
  if (puVar6 == (undefined8 *)0x0) goto LAB_1402b32bb;
  if (plVar5 == (longlong *)0x0) {
LAB_1402b32aa:
    (**(code **)*puVar6)(puVar6,1);
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar4 != 0) goto LAB_1402b32bb;
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 != (undefined8 *)0x0) goto LAB_1402b32aa;
  }
  *param_4 = 0;
LAB_1402b32bb:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b3334 FUN_1402b3334 body=455 status=ok
// SIG undefined FUN_1402b3334(void)

longlong *
FUN_1402b3334(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,uint param_6,longlong *param_7,char param_8)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  int local_9c [3];
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  char local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = 0;
  local_a8 = param_2;
  if (param_7 != (longlong *)0x0) {
    iVar2 = (**(code **)(*param_7 + 0x10))(param_7);
  }
  local_90 = 0;
  local_80 = 1;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = param_7;
  local_60 = param_3;
  FUN_1446f470e(&local_58,param_3,1);
  uStack_50 = *param_4;
  local_68 = param_8;
  local_9c[0] = iVar2;
  if (param_8 != '\0') {
    local_9c[0] = 0;
  }
  local_9c[2] = 0x100000;
  if (param_8 == '\0') {
    local_9c[2] = param_6 | 0x4000;
  }
  local_9c[1] = 0;
  if ((local_9c[2] & 0x100000U) == 0 && iVar2 == 0) {
    FUN_14570b4be(local_a8,&local_90,param_6 | 0x4000,0);
  }
  lVar1 = local_a8;
  if (*(char *)(local_a8 + 0x69) == '\0') {
    FUN_14002049c(local_a8,1);
    local_b0 = &local_90;
    local_b8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,lVar1,local_9c);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
    FUN_14002049c(lVar1,0);
  }
  else {
    local_b0 = &local_90;
    local_b8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,local_a8,local_9c);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b34fc FUN_1402b34fc body=275 status=ok
// SIG undefined FUN_1402b34fc(void)

void FUN_1402b34fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402b3610 FUN_1402b3610 body=274 status=ok
// SIG undefined FUN_1402b3610(void)

void FUN_1402b3610(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = lVar3 * 0x110;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1402b3724 FUN_1402b3724 body=353 status=ok
// SIG undefined FUN_1402b3724(void)

void FUN_1402b3724(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402b37ab;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1402b37ab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402b3886 FUN_1402b3886 body=65 status=ok
// SIG undefined FUN_1402b3886(void)

longlong FUN_1402b3886(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456ef5d2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  FUN_1402b38c7(lVar2);
  return lVar2;
}



// FUNCTION 1402b38c7 FUN_1402b38c7 body=87 status=ok
// SIG undefined FUN_1402b38c7(void)

void FUN_1402b38c7(longlong param_1)

{
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 **)(param_1 + 0x40) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 **)(param_1 + 0x60) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined **)(param_1 + 0x48) = &DAT_14cb70058;
  *(undefined **)(param_1 + 0x68) = &DAT_14cb70058;
  return;
}



// FUNCTION 1402b391e FUN_1402b391e body=190 status=ok
// SIG undefined FUN_1402b391e(void)

longlong FUN_1402b391e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
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
          if (lVar3 != 0) goto LAB_1402b3980;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1402b4646(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1402b3980:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1402b39de FUN_1402b39de body=231 status=ok
// SIG undefined FUN_1402b39de(void)

void FUN_1402b39de(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 1402b3ac6 FUN_1402b3ac6 body=914 status=ok
// SIG undefined FUN_1402b3ac6(void)

undefined4 *
FUN_1402b3ac6(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80 [2];
  char *local_78;
  uint local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1402b3f6c(param_1,local_80);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  pcVar4 = local_78;
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  puVar1 = (uint *)(local_78 + 0x10);
  pcVar4[0x10] = '\0';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  pcVar4[0x18] = '\0';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x20] = '\0';
  pcVar4[0x21] = '\0';
  pcVar4[0x22] = '\0';
  pcVar4[0x23] = '\0';
  pcVar4[0x28] = '\0';
  pcVar4[0x29] = '\0';
  pcVar4[0x2a] = '\0';
  pcVar4[0x2b] = '\0';
  pcVar4[0x2c] = '\0';
  pcVar4[0x2d] = '\0';
  pcVar4[0x2e] = '\0';
  pcVar4[0x2f] = '\0';
  pcVar4[0x30] = '\0';
  pcVar4[0x31] = '\0';
  pcVar4[0x32] = '\0';
  pcVar4[0x33] = '\0';
  pcVar4[0x34] = '\0';
  pcVar4[0x35] = '\0';
  pcVar4[0x36] = '\0';
  pcVar4[0x37] = '\0';
  *(undefined4 *)(local_78 + 8) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)local_78 = *puVar2;
  FUN_1447715ec(puVar1,puVar2 + 2);
  *(undefined4 *)(local_78 + 0x38) = *puVar3;
  pcVar4[0x40] = -1;
  pcVar4[0x41] = -1;
  pcVar4[0x42] = -1;
  pcVar4[0x43] = -1;
  local_84 = local_80[0];
  if (*local_78 == '\x01') {
    local_90 = param_4;
    FUN_1447a97f4(&local_70,puVar1);
    if (0 < local_6c) {
      lVar7 = 0;
      uVar12 = 0;
      iVar8 = local_6c;
      uVar6 = DAT_14c948000;
      do {
        bVar13 = local_70 != 0;
        bVar14 = local_70 != uVar6;
        piVar9 = &DAT_14c948620;
        piVar10 = (int *)&DAT_14c948618;
        if (bVar14 && bVar13) {
          puVar11 = local_68;
          if (0 < local_4c) {
            puVar11 = local_58;
          }
          if (1 < iVar8) {
            puVar11 = local_58;
          }
          piVar9 = (int *)(puVar11 + lVar7 + 8);
          piVar10 = (int *)(puVar11 + lVar7);
        }
        if ((*piVar10 == DAT_14cb7beb0) && (*piVar9 == DAT_14cb7beb8)) {
LAB_1402b3d2d:
          FUN_1402b5374(&local_70,uVar12 & 0xffffffff,0);
          iVar8 = local_6c;
          uVar6 = DAT_14c948000;
        }
        else {
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar8) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar7 + 8);
            piVar10 = (int *)(puVar11 + lVar7);
          }
          if ((*piVar10 == DAT_14cb7bec8) && (*piVar9 == DAT_14cb7bed0)) goto LAB_1402b3d2d;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar8) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar7 + 8);
            piVar10 = (int *)(puVar11 + lVar7);
          }
          if ((*piVar10 == DAT_14cb7bee0) && (*piVar9 == DAT_14cb7bee8)) goto LAB_1402b3d2d;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar8) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar7 + 8);
            piVar10 = (int *)(puVar11 + lVar7);
          }
          if ((*piVar10 == DAT_14cb7bef8) && (*piVar9 == DAT_14cb7bf00)) goto LAB_1402b3d2d;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar8) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar7 + 8);
            piVar10 = (int *)(puVar11 + lVar7);
          }
          if ((*piVar10 == DAT_14cb7bf10) && (*piVar9 == DAT_14cb7bf18)) goto LAB_1402b3d2d;
        }
        uVar12 = uVar12 + 1;
        lVar7 = lVar7 + 0xc;
      } while ((longlong)uVar12 < (longlong)iVar8);
    }
    param_4 = local_90;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      param_4 = local_90;
    }
  }
  else {
    local_70 = *puVar1;
  }
  local_98 = param_4;
  cVar5 = FUN_1402b3e5a(param_1,local_70,local_78,&local_84);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      local_70 = *(int *)(param_1 + 0x48) - 1U & local_70;
      *(uint *)(local_78 + 0x44) = local_70;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_78 + 0x40) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4) = local_84;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1402b4eec(param_1);
    }
  }
  *param_2 = local_84;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402b3e5a FUN_1402b3e5a body=163 status=ok
// SIG undefined FUN_1402b3e5a(void)

void FUN_1402b3e5a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  int iVar18;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar18 = FUN_1402b3efe();
    if (iVar18 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x48);
      if (*(longlong *)(puVar1 + 10) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      uVar14 = param_3[0xd];
      uVar15 = param_3[0xe];
      uVar16 = param_3[0xf];
      puVar1[0xc] = param_3[0xc];
      puVar1[0xd] = uVar14;
      puVar1[0xe] = uVar15;
      puVar1[0xf] = uVar16;
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1402b45bc(param_1,*param_4,1);
      *param_4 = iVar18;
      uVar17 = 1;
      goto LAB_1402b3e8e;
    }
  }
  uVar17 = 0;
LAB_1402b3e8e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar17;
  }
  return;
}



// FUNCTION 1402b3efe FUN_1402b3efe body=109 status=ok
// SIG undefined FUN_1402b3efe(void)

int FUN_1402b3efe(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x48,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x40 + (longlong)iVar4 * 0x48);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1402b3f6c FUN_1402b3f6c body=489 status=ok
// SIG undefined FUN_1402b3f6c(void)

int * FUN_1402b3f6c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14021b4e8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x48);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x48) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 1402b4156 FUN_1402b4156 body=1029 status=ok
// SIG undefined FUN_1402b4156(void)

int * FUN_1402b4156(int *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  undefined *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  
  iVar16 = DAT_14cb7d040;
  iVar14 = DAT_14cb7d018;
  if (DAT_14cb7d044 == 0) {
    iVar16 = DAT_14cb7d018 + 1;
    bVar18 = DAT_14cb7d01c == DAT_14cb7d018;
    DAT_14cb7d018 = iVar16;
    if (bVar18) {
      FUN_1405b363e(&DAT_14cb7d010,iVar14);
    }
    iVar16 = DAT_14cb7d038;
    if (DAT_14cb7d038 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = DAT_14cb7d038 + 0x1e;
      if (-1 < DAT_14cb7d038 + -1) {
        iVar7 = DAT_14cb7d038 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    iVar8 = DAT_14cb7d038 + 1;
    iVar15 = DAT_14cb7d038 + 0x1f;
    if (-1 < DAT_14cb7d038) {
      iVar15 = DAT_14cb7d038;
    }
    if (iVar15 >> 5 != iVar7) {
      if (DAT_14cb7d03c <= DAT_14cb7d038) {
        if (DAT_14cb7d038 + 0x20U < 0xa0) {
          DAT_14cb7d03c = 0x80;
        }
        else {
          uVar17 = DAT_14cb7d038 + 0x20U >> 5;
          if (DAT_14cb7d03c + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar17) {
              uVar11 = uVar17;
            }
          }
          else {
            uVar11 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar11 << 2,0);
          iVar7 = (int)(uVar13 >> 2);
          DAT_14cb7d03c = -0x20;
          if ((int)uVar17 <= iVar7) {
            DAT_14cb7d03c = iVar7 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cb7d020,DAT_14cb7d038);
        iVar8 = DAT_14cb7d038 + 1;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      if (iVar8 % 0x20 != 0) {
        puVar12 = &DAT_14cb7d020;
        if (DAT_14cb7d030 != (undefined *)0x0) {
          puVar12 = DAT_14cb7d030;
        }
        bVar10 = -(char)(iVar8 % 0x20);
        DAT_14cb7d038 = iVar8;
        *(uint *)(puVar12 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(puVar12 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
        iVar8 = DAT_14cb7d038;
      }
    }
    DAT_14cb7d038 = iVar8;
    lVar9 = (longlong)iVar14;
    puVar12 = &DAT_14cb7d020;
    if (DAT_14cb7d030 != (undefined *)0x0) {
      puVar12 = DAT_14cb7d030;
    }
    bVar10 = (byte)iVar16 & 0x1f;
    *(uint *)(puVar12 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    iVar16 = iVar14;
  }
  else {
    lVar9 = (longlong)DAT_14cb7d040;
    DAT_14cb7d040 = *(int *)(DAT_14cb7d010 + 4 + lVar9 * 0x20);
    DAT_14cb7d044 = DAT_14cb7d044 + -1;
    if (DAT_14cb7d044 != 0) {
      *(undefined4 *)(DAT_14cb7d010 + (longlong)DAT_14cb7d040 * 0x20) = 0xffffffff;
    }
  }
  uVar17 = 1 << ((byte)iVar16 & 0x1f);
  puVar12 = DAT_14cb7d030;
  if (DAT_14cb7d030 == (undefined *)0x0) {
    puVar12 = &DAT_14cb7d020;
  }
  iVar14 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
       *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) | uVar17;
  lVar6 = DAT_14cb7d010;
  lVar9 = lVar9 * 0x20;
  puVar1 = (uint *)(DAT_14cb7d010 + lVar9);
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  iVar7 = *(int *)(puVar2 + 1);
  *(int *)(DAT_14cb7d010 + 8 + lVar9) = iVar7;
  *(undefined8 *)(lVar6 + lVar9) = *puVar2;
  *(undefined4 *)(lVar6 + 0x14 + lVar9) = *(undefined4 *)(puVar3 + 1);
  *(undefined8 *)(lVar6 + 0xc + lVar9) = *puVar3;
  *(undefined4 *)(lVar6 + 0x18 + lVar9) = 0xffffffff;
  if (iVar7 == 0) {
    uVar11 = *puVar1;
  }
  else {
    uVar11 = FUN_144a78877(*puVar1,iVar7);
  }
  iVar7 = 1;
  if (DAT_14cb7d018 - DAT_14cb7d044 == 1) {
    uVar17 = 1;
  }
  else {
    iVar8 = FUN_1402b455c(&DAT_14cb7d010,uVar11,puVar1);
    lVar9 = DAT_14cb7d010;
    if (iVar8 != -1) {
      uVar4 = *(undefined8 *)puVar1;
      uVar5 = *(undefined8 *)(puVar1 + 2);
      *(undefined8 *)(DAT_14cb7d010 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(puVar1 + 4);
      puVar2 = (undefined8 *)(lVar9 + (longlong)iVar8 * 0x20);
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      lVar9 = DAT_14cb7d010;
      if (DAT_14cb7d044 != 0) {
        *(int *)(DAT_14cb7d010 + (longlong)DAT_14cb7d040 * 0x20) = iVar16;
      }
      *(undefined4 *)(lVar9 + (longlong)iVar16 * 0x20) = 0xffffffff;
      iVar7 = -1;
      if (0 < DAT_14cb7d044) {
        iVar7 = DAT_14cb7d040;
      }
      *(int *)(lVar9 + (longlong)iVar16 * 0x20 + 4) = iVar7;
      DAT_14cb7d044 = DAT_14cb7d044 + 1;
      puVar12 = &DAT_14cb7d020;
      if (DAT_14cb7d030 != (undefined *)0x0) {
        puVar12 = DAT_14cb7d030;
      }
      DAT_14cb7d040 = iVar16;
      *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) =
           *(uint *)(puVar12 + (longlong)(iVar14 >> 5) * 4) & ~uVar17;
      goto LAB_1402b433b;
    }
    uVar17 = DAT_14cb7d018 - DAT_14cb7d044;
    if (3 < uVar17) {
      uVar13 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
  }
  iVar8 = iVar16;
  if (((int)uVar17 < 1) || (iVar7 <= DAT_14cb7d058)) {
    uVar11 = DAT_14cb7d058 - 1U & uVar11;
    puVar1[7] = uVar11;
    puVar12 = DAT_14cb7d050;
    if (DAT_14cb7d050 == (undefined *)0x0) {
      puVar12 = &DAT_14cb7d048;
    }
    puVar1[6] = *(uint *)(puVar12 + ((longlong)DAT_14cb7d058 - 1U & (longlong)(int)uVar11) * 4);
    puVar12 = DAT_14cb7d050;
    if (DAT_14cb7d050 == (undefined *)0x0) {
      puVar12 = &DAT_14cb7d048;
    }
    *(int *)(puVar12 + ((longlong)DAT_14cb7d058 - 1U & (longlong)(int)uVar11) * 4) = iVar16;
  }
  else {
    DAT_14cb7d058 = iVar7;
    FUN_1402b4a1c();
  }
LAB_1402b433b:
  *param_1 = iVar8;
  return param_1;
}



// FUNCTION 1402b455c FUN_1402b455c body=95 status=ok
// SIG undefined FUN_1402b455c(void)

int FUN_1402b455c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1402b45bc FUN_1402b45bc body=138 status=ok
// SIG undefined FUN_1402b45bc(void)

void FUN_1402b45bc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1402b4646 FUN_1402b4646 body=304 status=ok
// SIG undefined FUN_1402b4646(void)

undefined4 *
FUN_1402b4646(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402b4836(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1402b4778(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1402b4c92(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b4778 FUN_1402b4778 body=189 status=ok
// SIG undefined FUN_1402b4778(void)

void FUN_1402b4778(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146ee3c1a(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1402b47eb;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1402b47eb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1402b4836 FUN_1402b4836 body=485 status=ok
// SIG undefined FUN_1402b4836(void)

int * FUN_1402b4836(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1402b4a1c FUN_1402b4a1c body=629 status=ok
// SIG undefined FUN_1402b4a1c(void)

void FUN_1402b4a1c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7d050 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7d050,0,0,4);
  }
  uVar11 = DAT_14cb7d058;
  if (DAT_14cb7d058 != 0) {
    FUN_144a1cbf0(&DAT_14cb7d048,0,DAT_14cb7d058,4);
    if (0 < (int)uVar11) {
      uVar3 = 0;
      do {
        puVar8 = DAT_14cb7d050;
        if (DAT_14cb7d050 == (undefined *)0x0) {
          puVar8 = &DAT_14cb7d048;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cb7d058 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar11 != uVar3);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14cb7d020;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14cb7d038 == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    puVar8 = local_60;
    iVar14 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
      do {
        piVar1 = (int *)(DAT_14cb7d010 + (longlong)iVar6 * 0x20);
        iVar4 = *(int *)(DAT_14cb7d010 + 8 + (longlong)iVar6 * 0x20);
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,iVar4);
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14cb7d058 - 1U;
        iVar4 = (int)uVar5;
        piVar1[7] = iVar4;
        puVar7 = DAT_14cb7d050;
        if (DAT_14cb7d050 == (undefined *)0x0) {
          puVar7 = &DAT_14cb7d048;
        }
        piVar1[6] = *(int *)(puVar7 + ((longlong)(int)DAT_14cb7d058 - 1U & uVar5) * 4);
        puVar7 = DAT_14cb7d050;
        if (DAT_14cb7d050 == (undefined *)0x0) {
          puVar7 = &DAT_14cb7d048;
        }
        *(int *)(puVar7 + ((longlong)iVar4 & (longlong)(int)DAT_14cb7d058 - 1U) * 4) = iVar6;
        uVar11 = uVar11 & ~(uint)uVar13;
        puVar7 = *(undefined **)(puVar8 + 0x10);
        if (*(undefined **)(puVar8 + 0x10) == (undefined *)0x0) {
          puVar7 = puVar8;
        }
        iVar4 = *(int *)(puVar8 + 0x18);
        lVar12 = (longlong)iVar14;
        uVar3 = *(uint *)(puVar7 + lVar12 * 4) & uVar11;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar14) {
            iVar2 = iVar14;
          }
          if (iVar6 <= iVar14) break;
          lVar9 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar9 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar2 - lVar12 == lVar9) goto LAB_1402b4c2e;
          }
          iVar14 = iVar14 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar3 & uVar3);
        uVar5 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar4);
    }
  }
LAB_1402b4c2e:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b4c92 FUN_1402b4c92 body=601 status=ok
// SIG undefined FUN_1402b4c92(void)

void FUN_1402b4c92(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1402b4e9e;
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
LAB_1402b4e9e:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b4eec FUN_1402b4eec body=1159 status=ok
// SIG undefined FUN_1402b4eec(void)

void FUN_1402b4eec(longlong *param_1)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  longlong **pplVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar3 = param_1 + 7;
    FUN_144a1cbf0(plVar3,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar2 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar3;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
             0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar12 != uVar2);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar18 = 1;
      local_98 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar17 = local_70 & 0xffffffff;
      uVar18 = local_70 >> 0x20;
      local_98 = (uint)local_60;
    }
    local_78 = local_68;
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar11 = local_60._4_4_;
      iVar16 = local_58;
      local_88 = param_1;
      local_80 = plVar3;
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar11 * 0x48);
        local_94 = iVar16;
        if (*pcVar1 == '\x01') {
          local_90 = uVar17;
          FUN_1447a97f4(&local_70,pcVar1 + 0x10);
          if (0 < local_70._4_4_) {
            lVar10 = 0;
            uVar17 = 0;
            iVar16 = local_70._4_4_;
            iVar4 = DAT_14c948000;
            do {
              bVar19 = (int)local_70 != 0;
              bVar20 = (int)local_70 != iVar4;
              piVar13 = &DAT_14c948620;
              piVar14 = (int *)&DAT_14c948618;
              if (bVar20 && bVar19) {
                pplVar15 = &local_68;
                if (0 < local_4c) {
                  pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar16) {
                  pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                piVar14 = (int *)((longlong)pplVar15 + lVar10);
              }
              if ((*piVar14 == DAT_14cb7beb0) && (*piVar13 == DAT_14cb7beb8)) {
LAB_1402b51d4:
                FUN_1402b5374(&local_70,uVar17 & 0xffffffff,0);
                iVar16 = local_70._4_4_;
                iVar4 = DAT_14c948000;
              }
              else {
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bec8) && (*piVar13 == DAT_14cb7bed0)) goto LAB_1402b51d4;
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bee0) && (*piVar13 == DAT_14cb7bee8)) goto LAB_1402b51d4;
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bef8) && (*piVar13 == DAT_14cb7bf00)) goto LAB_1402b51d4;
                piVar13 = &DAT_14c948620;
                piVar14 = (int *)&DAT_14c948618;
                if (bVar20 && bVar19) {
                  pplVar15 = &local_68;
                  if (0 < local_4c) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar15 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar13 = (int *)((longlong)pplVar15 + lVar10 + 8);
                  piVar14 = (int *)((longlong)pplVar15 + lVar10);
                }
                if ((*piVar14 == DAT_14cb7bf10) && (*piVar13 == DAT_14cb7bf18)) goto LAB_1402b51d4;
              }
              uVar17 = uVar17 + 1;
              lVar10 = lVar10 + 0xc;
            } while ((longlong)uVar17 < (longlong)iVar16);
          }
          iVar16 = (int)local_70;
          uVar17 = local_90;
          param_1 = local_88;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
            uVar17 = local_90;
            param_1 = local_88;
          }
        }
        else {
          iVar16 = *(int *)(pcVar1 + 0x10);
        }
        uVar7 = (longlong)iVar16 & (longlong)(int)param_1[9] - 1U;
        iVar16 = (int)uVar7;
        *(int *)(pcVar1 + 0x44) = iVar16;
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        *(undefined4 *)(pcVar1 + 0x40) =
             *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar3 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar3 = local_80;
        }
        *(int *)((longlong)plVar3 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar11;
        uVar12 = local_98 & ~(uint)uVar18;
        plVar3 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar3 = local_78;
        }
        iVar4 = (int)local_78[3];
        iVar11 = (int)uVar17;
        lVar10 = (longlong)iVar11;
        uVar2 = *(uint *)((longlong)plVar3 + lVar10 * 4) & uVar12;
        iVar16 = local_94;
        if (uVar2 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar6 = iVar5;
          if (iVar5 < iVar11) {
            iVar6 = iVar11;
          }
          if (iVar5 <= iVar11) break;
          lVar9 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar2 = *(uint *)((longlong)plVar3 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar6 - lVar10 == lVar9) goto LAB_1402b534c;
          }
          uVar17 = (ulonglong)(iVar11 + (int)lVar9 + 1);
          local_98 = 0xffffffff;
          uVar12 = local_98;
        }
        local_98 = uVar12;
        uVar18 = (ulonglong)(-uVar2 & uVar2);
        uVar7 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_1402b534c:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402b5374 FUN_1402b5374 body=195 status=ok
// SIG undefined FUN_1402b5374(void)

void FUN_1402b5374(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined4 **local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = local_5c;
  local_58 = 0;
  local_50 = &local_2c;
  local_2c = 0;
  local_38 = &local_50;
  local_40 = FUN_1400018c6;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_14493bb52(DAT_14c947fe0,param_3,&local_40);
  FUN_144928d62(param_1,param_2,local_5c);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


