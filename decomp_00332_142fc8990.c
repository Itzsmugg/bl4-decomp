// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142fc8990 FUN_142fc8990 body=29 status=ok
// SIG undefined FUN_142fc8990(void)

undefined8 FUN_142fc8990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc89ae FUN_142fc89ae body=282 status=ok
// SIG undefined FUN_142fc89ae(void)

undefined8 * FUN_142fc89ae(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc8ac8 FUN_142fc8ac8 body=121 status=ok
// SIG undefined FUN_142fc8ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fc8ac8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140871ea8(_DAT_000000a8,0xb0,DAT_000000e8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140871ea8(param_1[0x15],param_1 + 0x16,*(undefined1 *)(param_1 + 0x1d));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc8b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fc8b6a FUN_142fc8b6a body=12 status=ok
// SIG undefined FUN_142fc8b6a(void)

void FUN_142fc8b6a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc8b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc8b76 FUN_142fc8b76 body=29 status=ok
// SIG undefined FUN_142fc8b76(void)

undefined8 FUN_142fc8b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc8b94 FUN_142fc8b94 body=282 status=ok
// SIG undefined FUN_142fc8b94(void)

undefined8 * FUN_142fc8b94(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc8cae FUN_142fc8cae body=99 status=ok
// SIG undefined FUN_142fc8cae(void)

void FUN_142fc8cae(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if ((param_1[0x16] != 0) && (*(longlong *)(param_1[0x16] + 0x218) != 0)) {
    FUN_142d51a80(param_1[0x15]);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc8d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc8d12 FUN_142fc8d12 body=99 status=ok
// SIG undefined FUN_142fc8d12(void)

void FUN_142fc8d12(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142fc8d76 FUN_142fc8d76 body=821 status=ok
// SIG undefined FUN_142fc8d76(void)

void FUN_142fc8d76(longlong param_1,int param_2,double *param_3,double *param_4,longlong param_5)

{
  double dVar1;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  double *pdVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_138 [32];
  longlong local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar9 = *(ulonglong *)(param_1 + 0x60);
  lVar16 = (longlong)param_2;
  if (*(int *)(uVar9 + 4 + lVar16 * 8) != 0) {
    uVar12 = *(ulonglong *)(param_1 + 0x80);
    iVar10 = *(int *)(uVar12 + 8 + lVar16 * 0x10);
    lVar13 = (longlong)iVar10;
    if (lVar13 != 0) {
      lVar18 = *(longlong *)(uVar12 + lVar16 * 0x10);
      pdVar14 = (double *)(lVar13 * 8);
      lVar13 = lVar13 * 0x48;
      do {
        auVar25._8_8_ =
             -(ulonglong)
              ((double)(float)((ulonglong)*(undefined8 *)(lVar18 + 0x28) >> 0x20) + param_4[5] <
              ABS(*(double *)(lVar18 + 0x18) - param_4[1]));
        auVar25._0_8_ =
             -(ulonglong)
              ((double)(float)*(undefined8 *)(lVar18 + 0x28) + param_4[4] <
              ABS(*(double *)(lVar18 + 0x10) - *param_4));
        lVar19 = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        uVar7 = movmskpd((int)uVar9,auVar25);
        uVar9 = (ulonglong)uVar7;
        auVar28._8_4_ = (int)lVar19;
        auVar28._0_8_ =
             -(ulonglong)
              ((double)*(float *)(lVar18 + 0x30) + param_4[6] <
              ABS(*(double *)(lVar18 + 0x20) - param_4[2]));
        auVar28._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
        iVar10 = movmskpd((int)uVar12,auVar28);
        uVar7 = iVar10 << 2 | uVar7;
        uVar12 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          uVar12 = *(ulonglong *)(param_5 + 8);
          pdVar14 = &local_108;
          uVar9 = FUN_144913baa(uVar12,&local_108,lVar18);
        }
        iVar10 = (int)pdVar14;
        lVar18 = lVar18 + 0x48;
        lVar13 = lVar13 + -0x48;
      } while (lVar13 != 0);
      uVar9 = *(ulonglong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(uVar9 + lVar16 * 8);
    if (iVar3 != -1) {
      dVar24 = SUB168(*(undefined1 (*) [16])(param_3 + 2),0);
      dVar26 = SUB168(*(undefined1 (*) [16])(param_3 + 2),8);
      dVar1 = param_3[8];
      dVar2 = param_3[8];
      auVar27._8_8_ = dVar2;
      auVar27._0_8_ = dVar1;
      dVar23 = param_3[9];
      dVar20 = param_3[9];
      lVar16 = -(ulonglong)((param_3[1] + dVar20) - dVar2 < param_4[1] + param_4[5]);
      lVar13 = -(ulonglong)((dVar26 + dVar20) - dVar2 < param_4[3] + param_4[7]);
      auVar21._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar20) + dVar2);
      auVar21._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar23) + dVar1);
      auVar5._8_4_ = (int)lVar16;
      auVar5._0_8_ = -(ulonglong)((*param_3 + dVar23) - dVar1 < *param_4 + param_4[4]);
      auVar5._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      iVar8 = movmskpd((int)uVar9,auVar5);
      auVar6._8_4_ = (int)lVar13;
      auVar6._0_8_ = -(ulonglong)((dVar24 + dVar23) - dVar1 < param_4[2] + param_4[6]);
      auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar7 = movmskpd((int)uVar12,auVar6);
      iVar11 = movmskpd(uVar7 & 1,auVar21);
      auVar4._8_8_ = -(ulonglong)(param_4[3] - param_4[7] <= (dVar26 - dVar20) + dVar2);
      auVar4._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (dVar24 - dVar23) + dVar1);
      iVar10 = movmskpd(iVar10,auVar4);
      uVar17 = 0;
      auVar28 = pmovsxbd(auVar27,0x8040201);
      iVar15 = 0;
      do {
        if ((uVar17 ^ 0xffffffc7 | iVar10 * 0x20 + iVar11 * 8 | iVar8 + (uVar7 & 1) * 4) ==
            0xffffffff) {
          auVar22._4_4_ = iVar15;
          auVar22._0_4_ = iVar15;
          auVar22._8_4_ = iVar15;
          auVar22._12_4_ = iVar15;
          auVar22 = auVar22 & auVar28;
          dVar1 = param_3[9];
          dVar2 = param_3[9];
          dVar24 = (double)(float)-(uint)(auVar22._0_4_ == auVar28._0_4_);
          dVar26 = (double)(float)-(uint)(auVar22._4_4_ == auVar28._4_4_);
          dVar20 = (double)(float)-(uint)(auVar22._8_4_ == auVar28._8_4_);
          dVar23 = (double)(float)-(uint)(auVar22._12_4_ == auVar28._12_4_);
          local_108 = (double)(~(ulonglong)dVar24 & (ulonglong)-dVar1 |
                              (ulonglong)dVar1 & (ulonglong)dVar24) + *param_3;
          dStack_100 = (double)(~(ulonglong)dVar26 & (ulonglong)-dVar2 |
                               (ulonglong)dVar2 & (ulonglong)dVar26) + param_3[1];
          local_f8 = ((double)(~(ulonglong)dVar20 & (ulonglong)-dVar1 |
                              (ulonglong)dVar1 & (ulonglong)dVar20) + param_3[2]) * 1.0;
          dStack_f0 = ((double)(~(ulonglong)dVar23 & (ulonglong)-dVar2 |
                               (ulonglong)dVar2 & (ulonglong)dVar23) + param_3[3]) * 0.0;
          local_c0 = param_3[8];
          local_e8._8_4_ = SUB84(local_c0,0);
          local_e8._0_8_ = local_c0;
          local_e8._12_4_ = (int)((ulonglong)local_c0 >> 0x20);
          local_d8._8_4_ = SUB84(local_c0 * 0.0,0);
          local_d8._0_8_ = local_c0 * 1.0;
          local_d8._12_4_ = (int)((ulonglong)(local_c0 * 0.0) >> 0x20);
          local_c8 = local_c0 * 0.5 * 1.0625;
          local_c0 = local_c0 - local_c8;
          local_118 = param_5;
          FUN_142fc8d76(param_1,iVar3 + iVar15,&local_108,param_4);
        }
        iVar15 = iVar15 + 1;
        uVar17 = uVar17 + 9;
      } while (iVar15 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc90b2 FUN_142fc90b2 body=282 status=ok
// SIG undefined FUN_142fc90b2(void)

undefined8 * FUN_142fc90b2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc91d2 FUN_142fc91d2 body=282 status=ok
// SIG undefined FUN_142fc91d2(void)

undefined8 * FUN_142fc91d2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc92ec FUN_142fc92ec body=114 status=ok
// SIG undefined FUN_142fc92ec(void)

void FUN_142fc92ec(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 142fc935e FUN_142fc935e body=239 status=ok
// SIG undefined FUN_142fc935e(void)

void FUN_142fc935e(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1[1] + 0xe4) & 2) == 0) {
    FUN_142fc92ec(*param_1 + 0x35a0,*(undefined4 *)(param_1[1] + 0x34));
    lVar3 = param_1[1];
    puVar1 = *(undefined8 **)(lVar3 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar3 = param_1[1];
    }
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0xd8) = 0;
      if (*(longlong *)(lVar3 + 0xd0) != 0) {
        FUN_1400020a8();
      }
      FUN_14085e3bc(lVar3 + 0x90);
      *(undefined4 *)(lVar3 + 0x88) = 0;
      if (*(longlong *)(lVar3 + 0x80) != 0) {
        FUN_1400020a8();
      }
      FUN_14085e3bc(lVar3 + 0x40);
      if (*(longlong *)(lVar3 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar3);
      return;
    }
  }
  else {
    lVar3 = *(longlong *)(*param_1 + 0x5660);
    iVar2 = FUN_1402a90ea(lVar3);
    *(undefined1 *)(*(longlong *)(lVar3 + 0x200) + 0x18 + (longlong)iVar2 * 0x50) = 1;
  }
  return;
}



// FUNCTION 142fc9458 FUN_142fc9458 body=12 status=ok
// SIG undefined FUN_142fc9458(void)

void FUN_142fc9458(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc9461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc9464 FUN_142fc9464 body=29 status=ok
// SIG undefined FUN_142fc9464(void)

undefined8 FUN_142fc9464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc9482 FUN_142fc9482 body=282 status=ok
// SIG undefined FUN_142fc9482(void)

undefined8 * FUN_142fc9482(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc959c FUN_142fc959c body=308 status=ok
// SIG undefined FUN_142fc959c(void)

void FUN_142fc959c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if ((*(byte *)(param_1[0x16] + 0xe4) & 2) == 0) {
    FUN_142fc92ec(param_1[0x15] + 0x35a0,*(undefined4 *)(param_1[0x16] + 0x34));
    lVar4 = param_1[0x16];
    puVar2 = *(undefined8 **)(lVar4 + 0x28);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      lVar4 = param_1[0x16];
    }
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0xd8) = 0;
      if (*(longlong *)(lVar4 + 0xd0) != 0) {
        FUN_1400020a8();
      }
      FUN_14085e3bc(lVar4 + 0x90);
      *(undefined4 *)(lVar4 + 0x88) = 0;
      if (*(longlong *)(lVar4 + 0x80) != 0) {
        FUN_1400020a8();
      }
      FUN_14085e3bc(lVar4 + 0x40);
      if (*(longlong *)(lVar4 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar4);
    }
  }
  else {
    lVar4 = *(longlong *)(param_1[0x15] + 0x5660);
    iVar3 = FUN_1402a90ea(lVar4);
    *(undefined1 *)(*(longlong *)(lVar4 + 0x200) + 0x18 + (longlong)iVar3 * 0x50) = 1;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc96ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc96d0 FUN_142fc96d0 body=109 status=ok
// SIG undefined FUN_142fc96d0(void)

void FUN_142fc96d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x4d18);
  *(uint *)(lVar2 + 0x4d18) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x4d1c) < iVar1 + 1U) {
    FUN_14177c9de((longlong *)(lVar2 + 0x4d10),iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0x4a8 + *(longlong *)(lVar2 + 0x4d10)),param_1 + 1,0x4a8);
  (**(code **)(*(longlong *)*param_1 + 0x228))();
  *(undefined1 *)(*param_1 + 0x56c0) = 1;
  return;
}



// FUNCTION 142fc9748 FUN_142fc9748 body=29 status=ok
// SIG undefined FUN_142fc9748(void)

void FUN_142fc9748(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fc9766 FUN_142fc9766 body=29 status=ok
// SIG undefined FUN_142fc9766(void)

undefined8 FUN_142fc9766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc9784 FUN_142fc9784 body=282 status=ok
// SIG undefined FUN_142fc9784(void)

undefined8 * FUN_142fc9784(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc989e FUN_142fc989e body=175 status=ok
// SIG undefined FUN_142fc989e(void)

void FUN_142fc989e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x4d18);
  *(uint *)(lVar3 + 0x4d18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x4d1c) < iVar2 + 1U) {
    FUN_14177c9de((longlong *)(lVar3 + 0x4d10),iVar2);
  }
  memcpy((void *)((longlong)iVar2 * 0x4a8 + *(longlong *)(lVar3 + 0x4d10)),param_1 + 0x16,0x4a8);
  (**(code **)(*(longlong *)param_1[0x15] + 0x228))();
  *(undefined1 *)(param_1[0x15] + 0x56c0) = 1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc9941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc994e FUN_142fc994e body=147 status=ok
// SIG undefined FUN_142fc994e(void)

void FUN_142fc994e(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *_Dst;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  uVar2 = *(uint *)(lVar1 + 0x4d18);
  if (0 < (int)uVar2) {
    _Dst = *(longlong **)(lVar1 + 0x4d10);
    uVar3 = 0;
    do {
      if (*_Dst == param_1[1]) {
        if (uVar2 - 1 != (int)uVar3) {
          memmove(_Dst,_Dst + 0x95,(longlong)(int)((uVar2 - 1) - (int)uVar3) * 0x4a8);
          uVar2 = *(uint *)(lVar1 + 0x4d18);
        }
        *(uint *)(lVar1 + 0x4d18) = uVar2 - 1;
        FUN_14177cb50((undefined8 *)(lVar1 + 0x4d10));
        (**(code **)(*(longlong *)*param_1 + 0x228))();
        *(undefined1 *)(*param_1 + 0x56c0) = 1;
        return;
      }
      uVar3 = uVar3 + 1;
      _Dst = _Dst + 0x95;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 142fc99ec FUN_142fc99ec body=12 status=ok
// SIG undefined FUN_142fc99ec(void)

void FUN_142fc99ec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc99f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc99f8 FUN_142fc99f8 body=29 status=ok
// SIG undefined FUN_142fc99f8(void)

undefined8 FUN_142fc99f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc9a16 FUN_142fc9a16 body=282 status=ok
// SIG undefined FUN_142fc9a16(void)

undefined8 * FUN_142fc9a16(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc9b30 FUN_142fc9b30 body=213 status=ok
// SIG undefined FUN_142fc9b30(void)

void FUN_142fc9b30(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *_Dst;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  uVar3 = *(uint *)(lVar2 + 0x4d18);
  if (0 < (int)uVar3) {
    _Dst = *(longlong **)(lVar2 + 0x4d10);
    uVar4 = 0;
    do {
      if (*_Dst == param_1[0x16]) {
        if (uVar3 - 1 != (int)uVar4) {
          memmove(_Dst,_Dst + 0x95,(longlong)(int)((uVar3 - 1) - (int)uVar4) * 0x4a8);
          uVar3 = *(uint *)(lVar2 + 0x4d18);
        }
        *(uint *)(lVar2 + 0x4d18) = uVar3 - 1;
        FUN_14177cb50((undefined8 *)(lVar2 + 0x4d10));
        (**(code **)(*(longlong *)param_1[0x15] + 0x228))();
        *(undefined1 *)(param_1[0x15] + 0x56c0) = 1;
        break;
      }
      uVar4 = uVar4 + 1;
      _Dst = _Dst + 0x95;
    } while (uVar3 != uVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc9bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc9c06 FUN_142fc9c06 body=75 status=ok
// SIG undefined FUN_142fc9c06(void)

void FUN_142fc9c06(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x4d80);
  *(uint *)(lVar2 + 0x4d80) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x4d84) < iVar1 + 1U) {
    FUN_14630577c((longlong *)(lVar2 + 0x4d78),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x4d78) + (longlong)iVar1 * 8) = param_1[1];
  return;
}



// FUNCTION 142fc9c5c FUN_142fc9c5c body=12 status=ok
// SIG undefined FUN_142fc9c5c(void)

void FUN_142fc9c5c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc9c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc9c68 FUN_142fc9c68 body=29 status=ok
// SIG undefined FUN_142fc9c68(void)

undefined8 FUN_142fc9c68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc9c86 FUN_142fc9c86 body=282 status=ok
// SIG undefined FUN_142fc9c86(void)

undefined8 * FUN_142fc9c86(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fc9da0 FUN_142fc9da0 body=133 status=ok
// SIG undefined FUN_142fc9da0(void)

void FUN_142fc9da0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x4d80);
  *(uint *)(lVar3 + 0x4d80) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x4d84) < iVar2 + 1U) {
    FUN_14630577c((longlong *)(lVar3 + 0x4d78),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x4d78) + (longlong)iVar2 * 8) = param_1[0x16];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fc9e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fc9e26 FUN_142fc9e26 body=220 status=ok
// SIG undefined FUN_142fc9e26(void)

void FUN_142fc9e26(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 142fc9f02 FUN_142fc9f02 body=98 status=ok
// SIG undefined FUN_142fc9f02(void)

void FUN_142fc9f02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1 + 1;
  FUN_142fc9e26(*param_1 + 0x4d78);
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fc9f7c FUN_142fc9f7c body=12 status=ok
// SIG undefined FUN_142fc9f7c(void)

void FUN_142fc9f7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fc9f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fc9f88 FUN_142fc9f88 body=29 status=ok
// SIG undefined FUN_142fc9f88(void)

undefined8 FUN_142fc9f88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fc9fa6 FUN_142fc9fa6 body=282 status=ok
// SIG undefined FUN_142fc9fa6(void)

undefined8 * FUN_142fc9fa6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fca0c0 FUN_142fca0c0 body=147 status=ok
// SIG undefined FUN_142fca0c0(void)

void FUN_142fca0c0(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_1 + 0xb0;
  FUN_142fc9e26(*(longlong *)(param_1 + 0xa8) + 0x4d78);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 142fca168 FUN_142fca168 body=98 status=ok
// SIG undefined FUN_142fca168(void)

void FUN_142fca168(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1 + 1;
  FUN_142fc9e26(*param_1 + 0x4d78);
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fca1e2 FUN_142fca1e2 body=12 status=ok
// SIG undefined FUN_142fca1e2(void)

void FUN_142fca1e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fca1eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fca1ee FUN_142fca1ee body=29 status=ok
// SIG undefined FUN_142fca1ee(void)

undefined8 FUN_142fca1ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fca20c FUN_142fca20c body=282 status=ok
// SIG undefined FUN_142fca20c(void)

undefined8 * FUN_142fca20c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fca326 FUN_142fca326 body=147 status=ok
// SIG undefined FUN_142fca326(void)

void FUN_142fca326(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_1 + 0xb0;
  FUN_142fc9e26(*(longlong *)(param_1 + 0xa8) + 0x4d78);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 142fca3ce FUN_142fca3ce body=75 status=ok
// SIG undefined FUN_142fca3ce(void)

void FUN_142fca3ce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x4d80);
  *(uint *)(lVar2 + 0x4d80) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x4d84) < iVar1 + 1U) {
    FUN_14630577c((longlong *)(lVar2 + 0x4d78),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x4d78) + (longlong)iVar1 * 8) = param_1[1];
  return;
}



// FUNCTION 142fca424 FUN_142fca424 body=12 status=ok
// SIG undefined FUN_142fca424(void)

void FUN_142fca424(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fca42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fca430 FUN_142fca430 body=29 status=ok
// SIG undefined FUN_142fca430(void)

undefined8 FUN_142fca430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fca44e FUN_142fca44e body=282 status=ok
// SIG undefined FUN_142fca44e(void)

undefined8 * FUN_142fca44e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fca568 FUN_142fca568 body=133 status=ok
// SIG undefined FUN_142fca568(void)

void FUN_142fca568(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  iVar2 = *(int *)(lVar3 + 0x4d80);
  *(uint *)(lVar3 + 0x4d80) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x4d84) < iVar2 + 1U) {
    FUN_14630577c((longlong *)(lVar3 + 0x4d78),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x4d78) + (longlong)iVar2 * 8) = param_1[0x16];
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fca5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fca5ee FUN_142fca5ee body=811 status=ok
// SIG undefined FUN_142fca5ee(void)

void FUN_142fca5ee(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int iVar14;
  longlong **pplVar15;
  bool bVar16;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  longlong *local_2b0;
  void *local_50;
  longlong *local_48;
  void **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  plVar1 = param_1 + 1;
  local_2b8 = param_1 + 2;
  local_2b0 = plVar1;
  FUN_1472d5d40(*param_1 + 0x4de8,&local_48);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x4da0) != *(int *)(lVar4 + 0x4dcc)) {
    uVar5 = param_1[1];
    uVar10 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar12 = lVar4 + 0x4dd0;
    if (*(longlong *)(lVar4 + 0x4dd8) != 0) {
      lVar12 = *(longlong *)(lVar4 + 0x4dd8);
    }
    iVar11 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar4 + 0x4de0) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar11 != -1) {
      lVar4 = *(longlong *)(lVar4 + 0x4d98);
      iVar14 = iVar11;
      do {
        if (*(ulonglong *)(lVar4 + (longlong)iVar14 * 0x18) == uVar5) goto LAB_142fca7e8;
        iVar14 = *(int *)(lVar4 + (longlong)iVar14 * 0x18 + 0x10);
      } while (iVar14 != -1);
    }
  }
  _Dst = (void *)FUN_14001cc68(0x8a0,0x10);
  FUN_141235958(_Dst);
  *(undefined8 *)((longlong)_Dst + 0x890) = 0;
  *(undefined4 *)((longlong)_Dst + 0x898) = 1;
  local_50 = _Dst;
  memcpy(_Dst,*(void **)(*plVar1 + 0x1c0),0x890);
  memset(&local_2b8,0,0x260);
  FUN_1415c292e(&local_48,&local_2b8,2,1);
  pplVar15 = (longlong **)((longlong)local_50 + 0x890);
  if (pplVar15 == &local_48) {
LAB_142fca76f:
    plVar9 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(local_48 + 1);
      uVar10 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_48 + 1);
        LOCK();
        uVar10 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)local_48 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)plVar9;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  else {
    plVar9 = *pplVar15;
    *pplVar15 = local_48;
    local_48 = (longlong *)0x0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(plVar9 + 1);
      uVar10 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(plVar9 + 1);
        LOCK();
        uVar10 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)plVar9 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)plVar9;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_142fca76f;
    }
  }
  local_40 = &local_50;
  local_48 = plVar1;
  FUN_1472d6280(*param_1 + 0x4d98,local_34);
LAB_142fca810:
  if ((local_30 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar11 = (int)puVar13[2], iVar11 != -1) {
LAB_142fca7e8:
    puVar13 = (ulonglong *)(lVar4 + (longlong)iVar11 * 0x18);
    if (*puVar13 == uVar5) goto LAB_142fca7fc;
  }
  puVar13 = (ulonglong *)0x0;
LAB_142fca7fc:
  puVar7 = puVar13 + 1;
  if (puVar13 == (ulonglong *)0x0) {
    puVar7 = (ulonglong *)0x0;
  }
  *(int *)(*puVar7 + 0x898) = *(int *)(*puVar7 + 0x898) + 1;
  goto LAB_142fca810;
}



// FUNCTION 142fca92a FUN_142fca92a body=12 status=ok
// SIG undefined FUN_142fca92a(void)

void FUN_142fca92a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fca933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fca936 FUN_142fca936 body=29 status=ok
// SIG undefined FUN_142fca936(void)

undefined8 FUN_142fca936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fca954 FUN_142fca954 body=282 status=ok
// SIG undefined FUN_142fca954(void)

undefined8 * FUN_142fca954(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcaa6e FUN_142fcaa6e body=91 status=ok
// SIG undefined FUN_142fcaa6e(void)

void FUN_142fcaa6e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fca5ee(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fca5ee(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcaaaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fcaaca FUN_142fcaaca body=1780 status=ok
// SIG undefined FUN_142fcaaca(void)

void FUN_142fcaaca(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  undefined1 auStack_358 [32];
  float *local_338;
  uint *local_328;
  undefined8 local_320;
  longlong *local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_338 = &local_a4;
  (**(code **)(*(longlong *)*param_1 + 0x378))((longlong *)*param_1,local_98,&local_9c,&local_a0);
  lVar4 = *param_1;
  puVar11 = (uint *)(lVar4 + 0x4da8);
  iVar3 = *(int *)(lVar4 + 0x4dc0);
  local_318 = param_1;
  if (iVar3 == 0) {
    uVar12 = 1;
    uVar17 = 0;
    iVar18 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar4 + 0x4db8);
    if (*(uint **)(lVar4 + 0x4db8) == (uint *)0x0) {
      puVar7 = puVar11;
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar8 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar8 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar12 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar12 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar12 == uVar17) goto LAB_142fcb16d;
        iVar18 = iVar18 + 0x20;
        uVar10 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar12 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar12 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar8 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 < iVar3) {
    local_310 = (longlong *)(lVar4 + 0x4d98);
    uVar10 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(*local_310 + (longlong)iVar8 * 0x18);
      if ((*(longlong *)(lVar13 + 0xe0) == 0) || (*(longlong *)(lVar13 + 0x1c0) == 0)) {
        FUN_1472d6858();
      }
      else {
        pfVar5 = *(float **)(*local_310 + 8 + (longlong)iVar8 * 0x18);
        local_328 = puVar11;
        local_320 = param_2;
        FUN_147d4df64(pfVar5,local_98);
        plVar6 = local_318;
        fVar2 = pfVar5[0x14d];
        if ((fVar2 != local_9c) || (NAN(fVar2) || NAN(local_9c))) {
          *(double *)(pfVar5 + 0x166) = *(double *)(pfVar5 + 0x152);
          fVar19 = *pfVar5 * 0.5;
          *(double *)(pfVar5 + 0x168) =
               (double)((*pfVar5 - fVar19) * ABS(local_9c - fVar2) + fVar19) +
               *(double *)(pfVar5 + 0x152);
          pfVar5[0x16a] = fVar2;
          pfVar5[0x164] = local_9c;
        }
        pfVar5[0x147] = local_a0;
        pfVar5[0x148] = local_a4;
        FUN_147d4cf28(pfVar5,1,local_318[1]);
        param_2 = local_320;
        local_b8 = 0;
        uStack_b0 = 0x3f80000000000000;
        local_1e8 = (float)(double)plVar6[1];
        local_1e4 = 0;
        local_1dc = 0;
        local_308 = *(undefined8 *)(pfVar5 + 0x194);
        uStack_300 = *(undefined8 *)(pfVar5 + 0x196);
        local_1d8 = *(undefined8 *)(pfVar5 + 0x1dc);
        uStack_1d0 = *(undefined8 *)(pfVar5 + 0x1de);
        local_2f8 = *(undefined8 *)(pfVar5 + 0x198);
        uStack_2f0 = *(undefined8 *)(pfVar5 + 0x19a);
        local_1c8 = *(undefined8 *)(pfVar5 + 0x1e0);
        uStack_1c0 = *(undefined8 *)(pfVar5 + 0x1e2);
        local_2e8 = *(undefined8 *)(pfVar5 + 0x19c);
        uStack_2e0 = *(undefined8 *)(pfVar5 + 0x19e);
        local_1b8 = *(undefined8 *)(pfVar5 + 0x1e4);
        uStack_1b0 = *(undefined8 *)(pfVar5 + 0x1e6);
        local_2d8 = *(undefined8 *)(pfVar5 + 0x1a0);
        uStack_2d0 = *(undefined8 *)(pfVar5 + 0x1a2);
        local_1a8 = *(undefined8 *)(pfVar5 + 0x1e8);
        uStack_1a0 = *(undefined8 *)(pfVar5 + 0x1ea);
        local_2c8 = *(undefined8 *)(pfVar5 + 0x1a4);
        uStack_2c0 = *(undefined8 *)(pfVar5 + 0x1a6);
        local_198 = *(undefined8 *)(pfVar5 + 0x1ec);
        uStack_190 = *(undefined8 *)(pfVar5 + 0x1ee);
        local_2b8 = *(undefined8 *)(pfVar5 + 0x1a8);
        uStack_2b0 = *(undefined8 *)(pfVar5 + 0x1aa);
        local_188 = *(undefined8 *)(pfVar5 + 0x1f0);
        uStack_180 = *(undefined8 *)(pfVar5 + 0x1f2);
        local_2a8 = *(undefined8 *)(pfVar5 + 0x1ac);
        uStack_2a0 = *(undefined8 *)(pfVar5 + 0x1ae);
        local_178 = *(undefined8 *)(pfVar5 + 500);
        uStack_170 = *(undefined8 *)(pfVar5 + 0x1f6);
        local_298 = *(undefined8 *)(pfVar5 + 0x1b0);
        uStack_290 = *(undefined8 *)(pfVar5 + 0x1b2);
        local_168 = *(undefined8 *)(pfVar5 + 0x1f8);
        uStack_160 = *(undefined8 *)(pfVar5 + 0x1fa);
        local_288 = *(undefined8 *)(pfVar5 + 0x1b4);
        uStack_280 = *(undefined8 *)(pfVar5 + 0x1b6);
        local_158 = *(undefined8 *)(pfVar5 + 0x1fc);
        uStack_150 = *(undefined8 *)(pfVar5 + 0x1fe);
        local_278 = *(undefined8 *)(pfVar5 + 0x1b8);
        uStack_270 = *(undefined8 *)(pfVar5 + 0x1ba);
        local_148 = *(undefined8 *)(pfVar5 + 0x200);
        uStack_140 = *(undefined8 *)(pfVar5 + 0x202);
        local_268 = *(undefined8 *)(pfVar5 + 0x1bc);
        uStack_260 = *(undefined8 *)(pfVar5 + 0x1be);
        local_138 = *(undefined8 *)(pfVar5 + 0x204);
        uStack_130 = *(undefined8 *)(pfVar5 + 0x206);
        local_258 = *(undefined8 *)(pfVar5 + 0x1c0);
        uStack_250 = *(undefined8 *)(pfVar5 + 0x1c2);
        local_128 = *(undefined8 *)(pfVar5 + 0x208);
        uStack_120 = *(undefined8 *)(pfVar5 + 0x20a);
        local_248 = *(undefined8 *)(pfVar5 + 0x1c4);
        uStack_240 = *(undefined8 *)(pfVar5 + 0x1c6);
        local_118 = *(undefined8 *)(pfVar5 + 0x20c);
        uStack_110 = *(undefined8 *)(pfVar5 + 0x20e);
        local_238 = *(undefined8 *)(pfVar5 + 0x1c8);
        uStack_230 = *(undefined8 *)(pfVar5 + 0x1ca);
        local_108 = *(undefined8 *)(pfVar5 + 0x210);
        uStack_100 = *(undefined8 *)(pfVar5 + 0x212);
        local_228 = *(undefined8 *)(pfVar5 + 0x1cc);
        uStack_220 = *(undefined8 *)(pfVar5 + 0x1ce);
        local_f8 = *(undefined8 *)(pfVar5 + 0x214);
        uStack_f0 = *(undefined8 *)(pfVar5 + 0x216);
        local_218 = *(undefined8 *)(pfVar5 + 0x1d0);
        uStack_210 = *(undefined8 *)(pfVar5 + 0x1d2);
        local_e8 = *(undefined8 *)(pfVar5 + 0x218);
        uStack_e0 = *(undefined8 *)(pfVar5 + 0x21a);
        local_208 = *(undefined8 *)(pfVar5 + 0x1d4);
        uStack_200 = *(undefined8 *)(pfVar5 + 0x1d6);
        local_d8 = *(undefined8 *)(pfVar5 + 0x21c);
        uStack_d0 = *(undefined8 *)(pfVar5 + 0x21e);
        local_1f8 = *(undefined8 *)(pfVar5 + 0x1d8);
        uStack_1f0 = *(undefined8 *)(pfVar5 + 0x1da);
        local_c8 = pfVar5[0x220];
        fStack_c4 = pfVar5[0x221];
        fStack_c0 = pfVar5[0x222];
        fStack_bc = pfVar5[0x223];
        FUN_1472d68b0(pfVar5 + 0x224,local_320,&local_308);
        puVar11 = local_328;
      }
      uVar10 = uVar10 & ~(uint)uVar12;
      puVar7 = *(uint **)(lVar4 + 0x4db8);
      if (*(uint **)(lVar4 + 0x4db8) == (uint *)0x0) {
        puVar7 = puVar11;
      }
      iVar3 = *(int *)(lVar4 + 0x4dc0);
      iVar8 = (int)uVar17;
      lVar13 = (longlong)iVar8;
      uVar16 = puVar7[lVar13] & uVar10;
      if (uVar16 == 0) {
        iVar14 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar14 = iVar3 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar8) {
          iVar15 = iVar8;
        }
        if (iVar14 <= iVar8) break;
        lVar9 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar16 = puVar7[lVar13 + lVar9 + 1];
          if (uVar16 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar15 - lVar13 == lVar9) goto LAB_142fcb16d;
        }
        uVar17 = (ulonglong)(iVar8 + (int)lVar9 + 1);
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar12 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar18 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_142fcb16d:
  if ((local_80 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fcb1d0 FUN_142fcb1d0 body=12 status=ok
// SIG undefined FUN_142fcb1d0(void)

void FUN_142fcb1d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcb1d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcb1dc FUN_142fcb1dc body=29 status=ok
// SIG undefined FUN_142fcb1dc(void)

undefined8 FUN_142fcb1dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcb1fa FUN_142fcb1fa body=282 status=ok
// SIG undefined FUN_142fcb1fa(void)

undefined8 * FUN_142fcb1fa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcb314 FUN_142fcb314 body=105 status=ok
// SIG undefined FUN_142fcb314(void)

void FUN_142fcb314(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fcaaca(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fcaaca(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcb357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fcb37e FUN_142fcb37e body=1305 status=ok
// SIG undefined FUN_142fcb37e(void)

void FUN_142fcb37e(longlong param_1,int param_2,double *param_3,double *param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  code *pcVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  code *pcVar23;
  longlong lVar24;
  float fVar25;
  float extraout_XMM0_Da;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong local_118;
  longlong local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar19 = *(longlong *)(param_1 + 0x60);
  lVar22 = (longlong)param_2;
  if (*(int *)(lVar19 + 4 + lVar22 * 8) != 0) {
    uVar14 = *(ulonglong *)(param_1 + 0x80);
    pcVar18 = (code *)(lVar22 * 0x420);
    pcVar23 = pcVar18 + uVar14;
    if (*(code **)(pcVar18 + uVar14 + 0x400) != (code *)0x0) {
      pcVar23 = *(code **)(pcVar18 + uVar14 + 0x400);
    }
    if ((longlong)*(int *)(pcVar18 + uVar14 + 0x410) != 0) {
      lVar19 = (longlong)*(int *)(pcVar18 + uVar14 + 0x410) << 6;
      do {
        plVar15 = *(longlong **)(*(longlong *)(pcVar23 + 0x30) + 0x28);
        plVar16 = (longlong *)*plVar15;
        pcVar18 = (code *)plVar16[2];
        if (pcVar18 == FUN_14499f0dc) {
          dVar36 = (double)*(float *)(plVar15 + 0x5a);
          dVar26 = (double)*(float *)(plVar15 + 0x53);
          if (0.70710677 <= *(float *)(plVar15 + 0x5a)) {
            dVar34 = dVar26 / (dVar36 + dVar36);
            dVar29 = (double)plVar15[0x12] * dVar34;
            dVar31 = (double)plVar15[0xe] * dVar34;
            dVar36 = (double)plVar15[10] * dVar34;
          }
          else {
            dVar34 = (double)*(float *)(plVar15 + 0x5b) * dVar26;
            dVar29 = (double)plVar15[0x12] * dVar26 * dVar36;
            dVar31 = (double)plVar15[0xe] * dVar26 * dVar36;
            dVar36 = (double)plVar15[10] * dVar26 * dVar36;
          }
          pdVar2 = (double *)(plVar15 + 0x28);
          pdVar3 = (double *)(plVar15 + 0x27);
          pdVar4 = (double *)(plVar15 + 0x26);
          uVar10 = 0x4499f0dc;
          plVar15 = plVar16;
          dVar26 = dVar36 + *pdVar4;
          dVar36 = dVar29 + *pdVar2;
          dVar29 = dVar31 + *pdVar3;
        }
        else if (pcVar18 == FUN_14499f08a) {
          puVar1 = plVar16 + 3;
          if ((code *)*puVar1 == (code *)&LAB_144774e28) {
            fVar25 = *(float *)(plVar15 + 0x53);
            uVar10 = 0x44774e28;
          }
          else {
            plVar16 = plVar15;
            uVar10 = (*(code *)*puVar1)();
            fVar25 = extraout_XMM0_Da;
          }
          pdVar2 = (double *)(plVar15 + 4);
          pdVar3 = (double *)(plVar15 + 5);
          pdVar4 = (double *)(plVar15 + 6);
          plVar15 = plVar16;
          dVar26 = *pdVar2;
          dVar36 = *pdVar4;
          dVar29 = *pdVar3;
          dVar34 = (double)fVar25;
        }
        else {
          uVar10 = (*pcVar18)(plVar15,&local_108);
          dVar26 = local_108;
          dVar36 = local_f8;
          dVar29 = dStack_100;
          dVar34 = dStack_f0;
        }
        auVar38._8_8_ = -(ulonglong)(dVar34 + param_4[5] < ABS(dVar29 - param_4[1]));
        auVar38._0_8_ = -(ulonglong)(dVar34 + param_4[4] < ABS(dVar26 - *param_4));
        auVar35._8_8_ = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        auVar35._0_8_ = -(ulonglong)(dVar34 + param_4[6] < ABS(dVar36 - param_4[2]));
        uVar9 = movmskpd(uVar10,auVar38);
        iVar12 = movmskpd((int)plVar15,auVar35);
        uVar9 = iVar12 << 2 | uVar9;
        uVar14 = (ulonglong)uVar9;
        if (uVar9 == 0) {
          uVar14 = *(ulonglong *)(pcVar23 + 0x30);
          cVar8 = FUN_1471dbb66(uVar14,pcVar23,*param_5);
          if (cVar8 != '\0') {
            plVar15 = (longlong *)param_5[1];
            lVar24 = *(longlong *)(pcVar23 + 0x30);
            iVar12 = (int)plVar15[1];
            *(uint *)(plVar15 + 1) = iVar12 + 1U;
            local_110 = lVar22;
            if (*(uint *)((longlong)plVar15 + 0xc) < iVar12 + 1U) {
              local_118 = lVar24;
              FUN_1472d691e(plVar15,iVar12);
              lVar24 = local_118;
            }
            uVar14 = *(ulonglong *)(lVar24 + 0x28);
            *(ulonglong *)(*plVar15 + (longlong)iVar12 * 8) = uVar14;
            lVar22 = local_110;
          }
        }
        pcVar18 = FUN_14499f08a;
        pcVar23 = pcVar23 + 0x40;
        lVar19 = lVar19 + -0x40;
      } while (lVar19 != 0);
      lVar19 = *(longlong *)(param_1 + 0x60);
    }
    iVar12 = *(int *)(lVar19 + lVar22 * 8);
    if (iVar12 != -1) {
      dVar26 = param_3[8];
      dVar34 = param_3[8];
      auVar37._8_8_ = dVar34;
      auVar37._0_8_ = dVar26;
      dVar29 = param_3[9];
      dVar36 = param_3[9];
      lVar22 = -(ulonglong)((param_3[1] + dVar36) - dVar34 < param_4[1] + param_4[5]);
      lVar24 = -(ulonglong)((param_3[3] + dVar36) - dVar34 < param_4[3] + param_4[7]);
      auVar27._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar36) + dVar34);
      auVar27._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar29) + dVar26);
      auVar30._8_8_ = -(ulonglong)(param_4[3] - param_4[7] <= (param_3[3] - dVar36) + dVar34);
      auVar30._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (param_3[2] - dVar29) + dVar26);
      auVar6._8_4_ = (int)lVar22;
      auVar6._0_8_ = -(ulonglong)((*param_3 + dVar29) - dVar26 < *param_4 + param_4[4]);
      auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar11 = movmskpd((int)lVar19,auVar6);
      auVar7._8_4_ = (int)lVar24;
      auVar7._0_8_ = -(ulonglong)((param_3[2] + dVar29) - dVar26 < param_4[2] + param_4[6]);
      auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar9 = movmskpd((int)uVar14,auVar7);
      iVar13 = movmskpd(uVar9 & 1,auVar27);
      iVar17 = movmskpd((int)pcVar18,auVar30);
      uVar20 = 0;
      auVar38 = pmovsxbd(auVar37,0x8040201);
      iVar21 = 0;
      do {
        if ((uVar20 ^ 0xffffffc7 | iVar17 * 0x20 + iVar13 * 8 | iVar11 + (uVar9 & 1) * 4) ==
            0xffffffff) {
          auVar28._4_4_ = iVar21;
          auVar28._0_4_ = iVar21;
          auVar28._8_4_ = iVar21;
          auVar28._12_4_ = iVar21;
          auVar28 = auVar28 & auVar38;
          dVar26 = param_3[9];
          dVar34 = param_3[9];
          dVar31 = (double)(float)-(uint)(auVar28._0_4_ == auVar38._0_4_);
          dVar33 = (double)(float)-(uint)(auVar28._4_4_ == auVar38._4_4_);
          dVar36 = (double)(float)-(uint)(auVar28._8_4_ == auVar38._8_4_);
          dVar29 = (double)(float)-(uint)(auVar28._12_4_ == auVar38._12_4_);
          uVar14 = (ulonglong)dVar34 & (ulonglong)dVar33;
          auVar32._0_8_ = ~(ulonglong)dVar31 & (ulonglong)-dVar26;
          auVar32._8_8_ = ~(ulonglong)dVar33 & (ulonglong)-dVar34;
          auVar5._8_4_ = (int)uVar14;
          auVar5._0_8_ = (ulonglong)dVar26 & (ulonglong)dVar31;
          auVar5._12_4_ = (int)(uVar14 >> 0x20);
          local_108 = SUB168(auVar32 | auVar5,0) + *param_3;
          dStack_100 = SUB168(auVar32 | auVar5,8) + param_3[1];
          local_f8 = ((double)(~(ulonglong)dVar36 & (ulonglong)-dVar26 |
                              (ulonglong)dVar26 & (ulonglong)dVar36) + param_3[2]) * 1.0;
          dStack_f0 = ((double)(~(ulonglong)dVar29 & (ulonglong)-dVar34 |
                               (ulonglong)dVar34 & (ulonglong)dVar29) + param_3[3]) * 0.0;
          local_e8 = param_3[8];
          local_d8 = local_e8 * 1.0;
          dStack_d0 = local_e8 * 0.0;
          local_c8 = local_e8 * 0.5 * 1.0625;
          local_c0 = local_e8 - local_c8;
          local_128 = param_5;
          dStack_e0 = local_e8;
          FUN_142fcb37e(param_1,iVar12 + iVar21,&local_108,param_4);
        }
        iVar21 = iVar21 + 1;
        uVar20 = uVar20 + 9;
      } while (iVar21 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fcb898 FUN_142fcb898 body=193 status=ok
// SIG undefined FUN_142fcb898(void)

void FUN_142fcb898(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1472c98be(*param_1,param_1[1],&local_58);
  lVar4 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      plVar2 = (longlong *)param_1[2];
      uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + lVar5) + 8);
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1472d69a4(plVar2,iVar1);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fcb964 FUN_142fcb964 body=12 status=ok
// SIG undefined FUN_142fcb964(void)

void FUN_142fcb964(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcb96d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcb970 FUN_142fcb970 body=29 status=ok
// SIG undefined FUN_142fcb970(void)

undefined8 FUN_142fcb970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcb98e FUN_142fcb98e body=282 status=ok
// SIG undefined FUN_142fcb98e(void)

undefined8 * FUN_142fcb98e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcbaa8 FUN_142fcbaa8 body=242 status=ok
// SIG undefined FUN_142fcbaa8(void)

void FUN_142fcbaa8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1472c98be(param_1[0x15],param_1[0x16],&local_58);
  lVar5 = local_58;
  lVar7 = (longlong)(int)uStack_50;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      plVar3 = (longlong *)param_1[0x17];
      uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + lVar6) + 8);
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1472d69a4(plVar3,iVar2);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = uVar4;
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fcbbb6 FUN_142fcbbb6 body=12 status=ok
// SIG undefined FUN_142fcbbb6(void)

void FUN_142fcbbb6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcbbbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcbbc2 FUN_142fcbbc2 body=29 status=ok
// SIG undefined FUN_142fcbbc2(void)

undefined8 FUN_142fcbbc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcbbe0 FUN_142fcbbe0 body=282 status=ok
// SIG undefined FUN_142fcbbe0(void)

undefined8 * FUN_142fcbbe0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcbd62 FUN_142fcbd62 body=12 status=ok
// SIG undefined FUN_142fcbd62(void)

void FUN_142fcbd62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcbd6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcbd6e FUN_142fcbd6e body=29 status=ok
// SIG undefined FUN_142fcbd6e(void)

undefined8 FUN_142fcbd6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcbd8c FUN_142fcbd8c body=282 status=ok
// SIG undefined FUN_142fcbd8c(void)

undefined8 * FUN_142fcbd8c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcbea6 FUN_142fcbea6 body=108 status=ok
// SIG undefined FUN_142fcbea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fcbea6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142faa45e(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142faa45e(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcbee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fcbf12 FUN_142fcbf12 body=440 status=ok
// SIG undefined FUN_142fcbf12(void)

void FUN_142fcbf12(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined1 auStack_718 [32];
  LARGE_INTEGER local_6f8;
  undefined8 uStack_6f0;
  uint local_6e8;
  uint local_6e4;
  uint local_6e0;
  uint local_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_88 [2];
  undefined8 *local_80;
  undefined1 local_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_718;
  local_88[0] = 0;
  local_80 = (undefined8 *)0x0;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_78 = 1;
  FUN_1407779ba(&local_6f8,param_2,param_3,0);
  FUN_140a73b26(*param_1,&local_6f8,local_88);
  FUN_140779360(&local_6f8);
  FUN_140778010(&local_6f8);
  lVar3 = DAT_14ca95618;
  if (DAT_14ca95618 == 0) goto LAB_142fcbfc5;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(DAT_14ca95618 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_6f8.QuadPart = 0x20100000001;
        uStack_6f0 = 0x30100000101;
        local_6e8 = DAT_14c7585c8;
        local_6e4 = DAT_14c7585c8 | 0x200;
        local_6e0 = DAT_14c7585c8 | 0x100;
        local_6dc = DAT_14c7585c8 | 0x300;
        local_6d8 = 0;
        uStack_6d4 = 0x200;
        uStack_6d0 = 0x100;
        uStack_6cc = 0x300;
        if (*(byte *)((longlong)&local_6f8 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_142fcc0be;
      }
    }
    QueryPerformanceCounter(&local_6f8);
    uStack_6f0 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_6f8);
  }
  else {
LAB_142fcc0be:
    FUN_140082318(lVar3);
  }
LAB_142fcbfc5:
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x4e0))(param_1,1);
  }
  if (local_68 != 0) {
    plVar5 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar5 = local_48;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_80 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_80 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_80)(local_80,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_718) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fcc0dc FUN_142fcc0dc body=12 status=ok
// SIG undefined FUN_142fcc0dc(void)

void FUN_142fcc0dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcc0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcc0e8 FUN_142fcc0e8 body=29 status=ok
// SIG undefined FUN_142fcc0e8(void)

undefined8 FUN_142fcc0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcc106 FUN_142fcc106 body=282 status=ok
// SIG undefined FUN_142fcc106(void)

undefined8 * FUN_142fcc106(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcc220 FUN_142fcc220 body=105 status=ok
// SIG undefined FUN_142fcc220(void)

void FUN_142fcc220(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142fcbf12(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_142fcbf12(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcc263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fcc28a FUN_142fcc28a body=44 status=ok
// SIG undefined FUN_142fcc28a(void)

void FUN_142fcc28a(undefined8 *param_1,undefined8 param_2)

{
  FUN_140777948(*param_1);
  FUN_142fabba6(*param_1,param_2,param_1 + 1);
  return;
}



// FUNCTION 142fcc2c0 FUN_142fcc2c0 body=29 status=ok
// SIG undefined FUN_142fcc2c0(void)

void FUN_142fcc2c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fcc2de FUN_142fcc2de body=29 status=ok
// SIG undefined FUN_142fcc2de(void)

undefined8 FUN_142fcc2de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcc2fc FUN_142fcc2fc body=282 status=ok
// SIG undefined FUN_142fcc2fc(void)

undefined8 * FUN_142fcc2fc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcc416 FUN_142fcc416 body=162 status=ok
// SIG undefined FUN_142fcc416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fcc416(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140777948(_DAT_000000a8,&DAT_14ca85100);
    FUN_142fabba6(_DAT_000000a8,&DAT_14ca85100,0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140777948(param_1[0x15],&DAT_14ca85100);
  FUN_142fabba6(param_1[0x15],&DAT_14ca85100,param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcc474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142fcc4b8 FUN_142fcc4b8 body=82 status=ok
// SIG undefined FUN_142fcc4b8(void)

void FUN_142fcc4b8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  iVar1 = *(int *)(lVar2 + 0x5630);
  *(uint *)(lVar2 + 0x5630) = iVar1 + 1U;
  if (*(uint *)(&DAT_00005634 + lVar2) < iVar1 + 1U) {
    FUN_14177cbec((longlong *)(lVar2 + 0x5628),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x5628);
  *(longlong *)(lVar2 + (longlong)iVar1 * 0xc) = lVar3;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 0;
  return;
}



// FUNCTION 142fcc514 FUN_142fcc514 body=12 status=ok
// SIG undefined FUN_142fcc514(void)

void FUN_142fcc514(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcc51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcc520 FUN_142fcc520 body=29 status=ok
// SIG undefined FUN_142fcc520(void)

undefined8 FUN_142fcc520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcc53e FUN_142fcc53e body=282 status=ok
// SIG undefined FUN_142fcc53e(void)

undefined8 * FUN_142fcc53e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcc658 FUN_142fcc658 body=149 status=ok
// SIG undefined FUN_142fcc658(void)

void FUN_142fcc658(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  uVar4 = param_1[0x16];
  iVar2 = *(int *)(lVar3 + 0x5630);
  *(uint *)(lVar3 + 0x5630) = iVar2 + 1U;
  if (*(uint *)(&DAT_00005634 + lVar3) < iVar2 + 1U) {
    FUN_14177cbec((longlong *)(lVar3 + 0x5628),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x5628);
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = uVar4;
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = 0;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcc6df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fcc6ee FUN_142fcc6ee body=82 status=ok
// SIG undefined FUN_142fcc6ee(void)

void FUN_142fcc6ee(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  iVar1 = *(int *)(lVar2 + 0x5630);
  *(uint *)(lVar2 + 0x5630) = iVar1 + 1U;
  if (*(uint *)(&DAT_00005634 + lVar2) < iVar1 + 1U) {
    FUN_14177cbec((longlong *)(lVar2 + 0x5628),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x5628);
  *(longlong *)(lVar2 + (longlong)iVar1 * 0xc) = lVar3;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 1;
  return;
}



// FUNCTION 142fcc74a FUN_142fcc74a body=12 status=ok
// SIG undefined FUN_142fcc74a(void)

void FUN_142fcc74a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcc753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcc756 FUN_142fcc756 body=29 status=ok
// SIG undefined FUN_142fcc756(void)

undefined8 FUN_142fcc756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcc774 FUN_142fcc774 body=282 status=ok
// SIG undefined FUN_142fcc774(void)

undefined8 * FUN_142fcc774(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcc88e FUN_142fcc88e body=149 status=ok
// SIG undefined FUN_142fcc88e(void)

void FUN_142fcc88e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  uVar4 = param_1[0x16];
  iVar2 = *(int *)(lVar3 + 0x5630);
  *(uint *)(lVar3 + 0x5630) = iVar2 + 1U;
  if (*(uint *)(&DAT_00005634 + lVar3) < iVar2 + 1U) {
    FUN_14177cbec((longlong *)(lVar3 + 0x5628),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x5628);
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = uVar4;
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = 1;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcc915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fcc924 FUN_142fcc924 body=65 status=ok
// SIG undefined FUN_142fcc924(void)

longlong FUN_142fcc924(longlong param_1,int param_2)

{
  FUN_1447186ca(param_1 + 0x28);
  FUN_140020148(param_1 + 0x18);
  FUN_140020148(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcc966 FUN_142fcc966 body=547 status=ok
// SIG undefined FUN_142fcc966(void)

longlong * FUN_142fcc966(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fccb8a FUN_142fccb8a body=175 status=ok
// SIG undefined FUN_142fccb8a(void)

void FUN_142fccb8a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 0xb8),1);
  }
  FUN_143513402(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x5070),
                *(undefined8 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 0xb8));
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 142fccc3a FUN_142fccc3a body=110 status=ok
// SIG undefined FUN_142fccc3a(void)

undefined8 * FUN_142fccc3a(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fccca8 FUN_142fccca8 body=31 status=ok
// SIG undefined FUN_142fccca8(void)

undefined8 FUN_142fccca8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcccc8 FUN_142fcccc8 body=31 status=ok
// SIG undefined FUN_142fcccc8(void)

undefined8 FUN_142fcccc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcccee FUN_142fcccee body=422 status=ok
// SIG undefined FUN_142fcccee(void)

void FUN_142fcccee(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar1;
  if (iVar7 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar7 = *piVar1;
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 0x38),1);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (0 < *(int *)(param_1 + 0x18)) {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(int *)(param_1 + 0x18);
    FUN_142f45110(*(undefined8 *)(param_1 + 0x38),uVar4,&local_58,0);
  }
  local_68 = **(undefined8 **)(param_1 + 0x30);
  local_60 = *(undefined4 *)(*(undefined8 **)(param_1 + 0x30) + 1);
  FUN_142f4713a(uVar4);
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x20);
    plVar2 = plVar8 + *(int *)(param_1 + 0x28);
    do {
      lVar5 = *plVar8;
      bVar3 = *(byte *)(lVar5 + 0x170);
      if (((bVar3 & 1) != 0) && (1 < bVar3)) {
        lVar10 = 0;
        uVar9 = (uint)(bVar3 >> 1);
        do {
          if ((uVar9 & 1) != 0) {
            FUN_140871ea8(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(lVar5 + 0x148) + 0x5130) + lVar10),
                          *(longlong *)(lVar5 + 8) + 0x180,0);
          }
          lVar10 = lVar10 + 8;
          bVar6 = 1 < uVar9;
          uVar9 = uVar9 >> 1;
        } while (bVar6);
      }
      *(byte *)(lVar5 + 0x172) = *(byte *)(lVar5 + 0x172) & 0xfe;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 0x38));
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fcce96 FUN_142fcce96 body=547 status=ok
// SIG undefined FUN_142fcce96(void)

longlong * FUN_142fcce96(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fcd0ba FUN_142fcd0ba body=52 status=ok
// SIG undefined FUN_142fcd0ba(void)

void FUN_142fcd0ba(longlong param_1)

{
  FUN_142fcccee(param_1 + 0xa8);
  FUN_140046388(param_1 + 200);
  FUN_140046388(param_1 + 0xb8);
  return;
}



// FUNCTION 142fcd0ee FUN_142fcd0ee body=110 status=ok
// SIG undefined FUN_142fcd0ee(void)

undefined8 * FUN_142fcd0ee(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcd15c FUN_142fcd15c body=1090 status=ok
// SIG undefined FUN_142fcd15c(void)

void FUN_142fcd15c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  longlong **local_148;
  int local_13c;
  int *local_138;
  longlong local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_13c = *piVar1;
  if (local_13c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_13c = *piVar1;
  }
  if ((local_13c == 0x60000000) || (local_13c == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar4 = *param_1;
  local_138 = piVar1;
  bVar5 = FUN_144ab6403(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar4 + 8) * 2));
  lVar7 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar7 != 0) {
    plVar9 = *(longlong **)param_1[1];
    plVar2 = plVar9 + lVar7;
    local_130 = lVar4 + 0x4e90;
    do {
      lVar7 = *plVar9;
      lVar8 = *(longlong *)(lVar7 + 8);
      if ((*(char *)(lVar8 + 0x82) != '\0') && ((bVar5 & (*(byte *)(lVar8 + 0x74) & 8) >> 3) == 0))
      {
        local_94 = *(char *)(lVar8 + 0x73) * '\x02' & 0xc0U |
                   (*(byte *)(lVar8 + 0x75) & 1) << 5 |
                   *(byte *)(lVar8 + 0x74) & 0x18 |
                   *(byte *)(lVar8 + 0x70) >> 3 & 4 | *(byte *)(lVar8 + 0x70) & 1 |
                   *(byte *)(lVar8 + 0x6d) >> 5 & 2;
        local_d0 = *(longlong *)(lVar7 + 8);
        local_a4 = (float)*(double *)(local_d0 + 0x1b0);
        local_a8 = (float)*(double *)(local_d0 + 0x1a8);
        local_ac = (float)*(double *)(local_d0 + 0x1a0);
        local_b0 = (float)*(double *)(local_d0 + 0x198);
        local_b8 = *(undefined8 *)(local_d0 + 400);
        local_c8 = *(undefined8 *)(local_d0 + 0x180);
        uStack_c0 = *(undefined8 *)(local_d0 + 0x188);
        local_a0 = *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x274);
        local_9c = *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x270);
        local_98 = *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x248);
        local_d8 = lVar7;
        if ((*(int *)(DAT_14ca433c0 + 4) != 0) &&
           (((&DAT_14ca814b8)
             [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar4 + 8) * 2) * 0xf] != 1
            || (((DAT_14ca09708 == 0 && ((DAT_14c760e10 < 1 || (DAT_14ca964dd == '\0')))) ||
                (DAT_14ca964dc == '\x01')))))) {
          local_118 = *(double *)(lVar8 + 400) - *(double *)(lVar8 + 0x1a8);
          local_120 = *(double *)(lVar8 + 0x188) - *(double *)(lVar8 + 0x1a0);
          local_128 = *(double *)(lVar8 + 0x180) - *(double *)(lVar8 + 0x198);
          local_f8 = ((*(double *)(lVar8 + 400) + *(double *)(lVar8 + 0x1a8)) - local_118) * 0.5;
          local_100 = ((*(double *)(lVar8 + 0x188) + *(double *)(lVar8 + 0x1a0)) - local_120) * 0.5;
          local_108 = ((*(double *)(lVar8 + 0x180) + *(double *)(lVar8 + 0x198)) - local_128) * 0.5;
          local_118 = local_118 + local_f8;
          local_120 = local_120 + local_100;
          local_128 = local_128 + local_108;
          local_110 = 0;
          local_f0 = 0;
          local_148 = &local_e0;
          local_e0 = &local_d8;
          FUN_142fcd5a0(local_130,0,local_130,&local_128);
        }
        iVar3 = *(int *)(lVar4 + 0x4f48);
        if ((longlong)iVar3 != 0) {
          lVar7 = *(longlong *)(lVar4 + 0x4f40);
          lVar8 = 0;
          do {
            lVar6 = (longlong)*(int *)(lVar7 + lVar8) * 0x40;
            FUN_14472b91c(*(undefined8 *)(*(longlong *)(lVar4 + 0x3550) + 0x30 + lVar6),
                          *(longlong *)(lVar4 + 0x3550) + lVar6,&local_d8);
            lVar8 = lVar8 + 4;
          } while ((longlong)iVar3 * 4 != lVar8);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  if ((local_13c == 0x60000000) || (local_13c == 0)) {
    *local_138 = local_13c;
  }
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fcd5a0 FUN_142fcd5a0 body=1148 status=ok
// SIG undefined FUN_142fcd5a0(void)

void FUN_142fcd5a0(longlong param_1,int param_2,double *param_3,double *param_4,undefined8 *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  code *pcVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  double *pdVar23;
  longlong lVar24;
  float fVar25;
  float extraout_XMM0_Da;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar13 = *(longlong *)(param_1 + 0x60);
  lVar20 = (longlong)param_2;
  if (*(int *)(lVar13 + 4 + lVar20 * 8) != 0) {
    dVar34 = *(double *)(param_1 + 0x80);
    pcVar19 = (code *)(lVar20 * 0x420);
    pdVar3 = *(double **)((longlong)dVar34 + 0x400U + (longlong)pcVar19);
    pdVar23 = (double *)((longlong)dVar34 + (longlong)pcVar19);
    if (pdVar3 != (double *)0x0) {
      pdVar23 = pdVar3;
    }
    lVar24 = (longlong)*(int *)((longlong)dVar34 + 0x410U + (longlong)pcVar19);
    if (lVar24 != 0) {
      lVar24 = lVar24 << 6;
      do {
        puVar17 = *(undefined8 **)((longlong)pdVar23[6] + 0x28);
        puVar4 = (undefined8 *)*puVar17;
        pcVar5 = (code *)puVar4[2];
        if (pcVar5 == FUN_14499f0dc) {
          dVar36 = (double)*(float *)(puVar17 + 0x5a);
          dVar26 = (double)*(float *)(puVar17 + 0x53);
          if (0.70710677 <= *(float *)(puVar17 + 0x5a)) {
            dVar34 = dVar26 / (dVar36 + dVar36);
            dVar29 = (double)puVar17[0x12] * dVar34;
            dVar31 = (double)puVar17[0xe] * dVar34;
            dVar36 = (double)puVar17[10] * dVar34;
          }
          else {
            dVar34 = (double)*(float *)(puVar17 + 0x5b) * dVar26;
            dVar29 = (double)puVar17[0x12] * dVar26 * dVar36;
            dVar31 = (double)puVar17[0xe] * dVar26 * dVar36;
            dVar36 = (double)puVar17[10] * dVar26 * dVar36;
          }
          pdVar3 = (double *)(puVar17 + 0x28);
          pdVar1 = (double *)(puVar17 + 0x27);
          pdVar2 = (double *)(puVar17 + 0x26);
          uVar11 = 0x4499f0dc;
          puVar17 = puVar4;
          dVar26 = dVar36 + *pdVar2;
          dVar36 = dVar29 + *pdVar3;
          dVar29 = dVar31 + *pdVar1;
        }
        else {
          pcVar19 = FUN_14499f08a;
          if (pcVar5 == FUN_14499f08a) {
            puVar16 = (undefined8 *)&LAB_144774e28;
            if ((code *)puVar4[3] == (code *)&LAB_144774e28) {
              fVar25 = *(float *)(puVar17 + 0x53);
              uVar11 = 0x44774e28;
            }
            else {
              puVar16 = puVar17;
              uVar11 = (*(code *)puVar4[3])();
              fVar25 = extraout_XMM0_Da;
            }
            pdVar3 = (double *)(puVar17 + 4);
            pdVar1 = (double *)(puVar17 + 5);
            pdVar2 = (double *)(puVar17 + 6);
            puVar17 = puVar16;
            dVar26 = *pdVar3;
            dVar36 = *pdVar2;
            dVar29 = *pdVar1;
            dVar34 = (double)fVar25;
          }
          else {
            pcVar19 = (code *)&local_108;
            uVar11 = (*pcVar5)();
            dVar26 = local_108;
            dVar36 = local_f8;
            dVar29 = dStack_100;
            dVar34 = dStack_f0;
          }
        }
        auVar38._8_8_ = -(ulonglong)(dVar34 + param_4[5] < ABS(dVar29 - param_4[1]));
        auVar38._0_8_ = -(ulonglong)(dVar34 + param_4[4] < ABS(dVar26 - *param_4));
        auVar35._8_8_ = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        auVar35._0_8_ = -(ulonglong)(dVar34 + param_4[6] < ABS(dVar36 - param_4[2]));
        uVar10 = movmskpd(uVar11,auVar38);
        iVar14 = movmskpd((int)puVar17,auVar35);
        uVar10 = iVar14 << 2 | uVar10;
        dVar34 = (double)(ulonglong)uVar10;
        if (uVar10 == 0) {
          dVar34 = pdVar23[6];
          pcVar19 = (code *)pdVar23;
          FUN_14472b91c(dVar34,pdVar23,*param_5);
        }
        pdVar23 = pdVar23 + 8;
        lVar24 = lVar24 + -0x40;
      } while (lVar24 != 0);
      lVar13 = *(longlong *)(param_1 + 0x60);
    }
    iVar14 = *(int *)(lVar13 + lVar20 * 8);
    if (iVar14 != -1) {
      dVar26 = param_3[8];
      dVar36 = param_3[8];
      auVar37._8_8_ = dVar36;
      auVar37._0_8_ = dVar26;
      dVar31 = param_3[9];
      dVar29 = param_3[9];
      lVar20 = -(ulonglong)((param_3[1] + dVar29) - dVar36 < param_4[1] + param_4[5]);
      lVar24 = -(ulonglong)((param_3[3] + dVar29) - dVar36 < param_4[3] + param_4[7]);
      auVar27._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar29) + dVar36);
      auVar27._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar31) + dVar26);
      auVar30._8_8_ = -(ulonglong)(param_4[3] - param_4[7] <= (param_3[3] - dVar29) + dVar36);
      auVar30._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (param_3[2] - dVar31) + dVar26);
      auVar8._8_4_ = (int)lVar20;
      auVar8._0_8_ = -(ulonglong)((*param_3 + dVar31) - dVar26 < *param_4 + param_4[4]);
      auVar8._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
      iVar12 = movmskpd((int)lVar13,auVar8);
      auVar9._8_4_ = (int)lVar24;
      auVar9._0_8_ = -(ulonglong)((param_3[2] + dVar31) - dVar26 < param_4[2] + param_4[6]);
      auVar9._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar10 = movmskpd(SUB84(dVar34,0),auVar9);
      iVar15 = movmskpd(uVar10 & 1,auVar27);
      iVar18 = movmskpd((int)pcVar19,auVar30);
      uVar21 = 0;
      auVar38 = pmovsxbd(auVar37,0x8040201);
      iVar22 = 0;
      do {
        if ((uVar21 ^ 0xffffffc7 | iVar18 * 0x20 + iVar15 * 8 | iVar12 + (uVar10 & 1) * 4) ==
            0xffffffff) {
          auVar28._4_4_ = iVar22;
          auVar28._0_4_ = iVar22;
          auVar28._8_4_ = iVar22;
          auVar28._12_4_ = iVar22;
          auVar28 = auVar28 & auVar38;
          dVar26 = param_3[9];
          dVar34 = param_3[9];
          dVar31 = (double)(float)-(uint)(auVar28._0_4_ == auVar38._0_4_);
          dVar33 = (double)(float)-(uint)(auVar28._4_4_ == auVar38._4_4_);
          dVar36 = (double)(float)-(uint)(auVar28._8_4_ == auVar38._8_4_);
          dVar29 = (double)(float)-(uint)(auVar28._12_4_ == auVar38._12_4_);
          uVar7 = (ulonglong)dVar34 & (ulonglong)dVar33;
          auVar32._0_8_ = ~(ulonglong)dVar31 & (ulonglong)-dVar26;
          auVar32._8_8_ = ~(ulonglong)dVar33 & (ulonglong)-dVar34;
          auVar6._8_4_ = (int)uVar7;
          auVar6._0_8_ = (ulonglong)dVar26 & (ulonglong)dVar31;
          auVar6._12_4_ = (int)(uVar7 >> 0x20);
          local_108 = SUB168(auVar32 | auVar6,0) + *param_3;
          dStack_100 = SUB168(auVar32 | auVar6,8) + param_3[1];
          local_f8 = ((double)(~(ulonglong)dVar36 & (ulonglong)-dVar26 |
                              (ulonglong)dVar26 & (ulonglong)dVar36) + param_3[2]) * 1.0;
          dStack_f0 = ((double)(~(ulonglong)dVar29 & (ulonglong)-dVar34 |
                               (ulonglong)dVar34 & (ulonglong)dVar29) + param_3[3]) * 0.0;
          local_e8 = param_3[8];
          local_d8 = local_e8 * 1.0;
          dStack_d0 = local_e8 * 0.0;
          local_c8 = local_e8 * 0.5 * 1.0625;
          local_c0 = local_e8 - local_c8;
          local_118 = param_5;
          dStack_e0 = local_e8;
          FUN_142fcd5a0(param_1,iVar14 + iVar22,&local_108,param_4);
        }
        iVar22 = iVar22 + 1;
        uVar21 = uVar21 + 9;
      } while (iVar22 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fcda1e FUN_142fcda1e body=547 status=ok
// SIG undefined FUN_142fcda1e(void)

longlong * FUN_142fcda1e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fcdc4e FUN_142fcdc4e body=110 status=ok
// SIG undefined FUN_142fcdc4e(void)

undefined8 * FUN_142fcdc4e(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcdcbc FUN_142fcdcbc body=547 status=ok
// SIG undefined FUN_142fcdcbc(void)

longlong * FUN_142fcdcbc(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fcdee0 FUN_142fcdee0 body=175 status=ok
// SIG undefined FUN_142fcdee0(void)

void FUN_142fcdee0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_30 = **(undefined8 **)(param_1 + 0xb0);
  local_28 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xb0) + 1);
  FUN_142f425d8(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fcdf90 FUN_142fcdf90 body=110 status=ok
// SIG undefined FUN_142fcdf90(void)

undefined8 * FUN_142fcdf90(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcdffe FUN_142fcdffe body=547 status=ok
// SIG undefined FUN_142fcdffe(void)

longlong * FUN_142fcdffe(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fce222 FUN_142fce222 body=175 status=ok
// SIG undefined FUN_142fce222(void)

void FUN_142fce222(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_30 = **(undefined8 **)(param_1 + 0xb0);
  local_28 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xb0) + 1);
  FUN_142f43332(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fce2d2 FUN_142fce2d2 body=110 status=ok
// SIG undefined FUN_142fce2d2(void)

undefined8 * FUN_142fce2d2(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fce340 FUN_142fce340 body=547 status=ok
// SIG undefined FUN_142fce340(void)

longlong * FUN_142fce340(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fce564 FUN_142fce564 body=175 status=ok
// SIG undefined FUN_142fce564(void)

void FUN_142fce564(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_30 = **(undefined8 **)(param_1 + 0xb0);
  local_28 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xb0) + 1);
  FUN_142f4414c(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fce614 FUN_142fce614 body=110 status=ok
// SIG undefined FUN_142fce614(void)

undefined8 * FUN_142fce614(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fce682 FUN_142fce682 body=99 status=ok
// SIG undefined FUN_142fce682(void)

void FUN_142fce682(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142fce6e6 FUN_142fce6e6 body=547 status=ok
// SIG undefined FUN_142fce6e6(void)

longlong * FUN_142fce6e6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fce90a FUN_142fce90a body=246 status=ok
// SIG undefined FUN_142fce90a(void)

void FUN_142fce90a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar1;
  if (iVar5 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar5 = *piVar1;
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar1 = 0x40000010;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_14002049c(*(undefined8 *)(param_1 + 200),1);
  }
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    uVar4 = *(undefined8 *)(param_1 + 200);
    lVar6 = 0;
    do {
      FUN_1447a4f96(*(undefined8 *)(lVar3 + lVar6),uVar4);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_1447850c6(*(undefined8 *)(param_1 + 200));
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar1 = iVar5;
  }
  FUN_142fce682(param_1 + 0xb8);
  return;
}



// FUNCTION 142fcea00 FUN_142fcea00 body=110 status=ok
// SIG undefined FUN_142fcea00(void)

undefined8 * FUN_142fcea00(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcea6e FUN_142fcea6e body=69 status=ok
// SIG undefined FUN_142fcea6e(void)

undefined8 * FUN_142fcea6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e9630;
  FUN_14477c0e3(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fceab4 FUN_142fceab4 body=547 status=ok
// SIG undefined FUN_142fceab4(void)

longlong * FUN_142fceab4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142fcecd8 FUN_142fcecd8 body=611 status=ok
// SIG undefined FUN_142fcecd8(void)

void FUN_142fcecd8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar1;
  if (iVar5 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar5 = *piVar1;
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar1 = 0x40000010;
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    plVar11 = *(longlong **)(param_1 + 0xa8);
    plVar2 = plVar11 + *(int *)(param_1 + 0xb0);
    do {
      puVar3 = (undefined8 *)*plVar11;
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar8 = &PTR_FUN_14a2e9630;
      puVar8[1] = 0;
      puVar8[1] = puVar3[0x24];
      puVar3[0x24] = 0;
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar3 + 0x25);
      *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)((longlong)puVar3 + 300);
      puVar3[0x25] = 0;
      uVar6 = FUN_14493c560();
      if (uVar6 == 0) {
        uVar7 = 0;
        uVar12 = 0;
        lVar10 = 0;
      }
      else {
        uVar12 = (ulonglong)(uVar6 >> 0xe);
        uVar7 = uVar6 & 0x3fff;
        lVar10 = (ulonglong)(uVar7 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar12 * 8);
      }
      *(undefined8 **)(lVar10 + 8) = puVar8;
      do {
        uVar4 = DAT_14ca96680;
        uVar9 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
        if (uVar9 >> 0x1a < DAT_14ca96680 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        if (uVar6 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(longlong *)(&DAT_14c833b00 + uVar12 * 8) + (ulonglong)(uVar7 * 0x18);
        }
        *(uint *)(lVar10 + 0x10) = (uint)uVar4 & 0x3ffffff;
        LOCK();
        bVar13 = uVar4 != DAT_14ca96680;
        uVar4 = uVar9 | uVar6;
        if (bVar13) {
          uVar4 = DAT_14ca96680;
        }
        DAT_14ca96680 = uVar4;
        UNLOCK();
      } while (bVar13);
      puVar8 = (undefined8 *)puVar3[1];
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar2);
  }
  if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
    *piVar1 = iVar5;
  }
  FUN_140046388(param_1 + 0xa8);
  return;
}



// FUNCTION 142fcef3c FUN_142fcef3c body=110 status=ok
// SIG undefined FUN_142fcef3c(void)

undefined8 * FUN_142fcef3c(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcefaa FUN_142fcefaa body=853 status=ok
// SIG undefined FUN_142fcefaa(void)

void FUN_142fcefaa(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  iVar14 = iVar3;
  local_60 = param_2;
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar13 = 0;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = puVar1;
    }
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar13) goto LAB_142fcf05f;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar4[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar8 = 0xffffffff;
    do {
      FUN_140777948(*(undefined8 *)(*param_1 + (longlong)iVar6 * 0x20),local_60);
      uVar8 = ~(uint)uVar15 & uVar8;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      iVar14 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar11 = puVar4[lVar12] & uVar8;
      if (uVar11 == 0) {
        iVar9 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar9 = iVar14 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar9;
        if (iVar9 < iVar6) {
          iVar7 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar5 = 0;
          do {
            uVar11 = puVar4[lVar12 + lVar5 + 1];
            if (uVar11 != 0) {
              uVar13 = (ulonglong)(iVar6 + (int)lVar5 + 1);
              uVar8 = 0xffffffff;
              goto LAB_142fcf16f;
            }
            iVar10 = iVar10 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar7 - lVar12 != lVar5);
          uVar8 = 0xffffffff;
          lVar12 = (longlong)iVar7;
        }
        uVar13 = lVar12 + 1U & 0xffffffff;
        iVar6 = iVar14;
      }
      else {
LAB_142fcf16f:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar6) {
          iVar6 = iVar14;
        }
      }
    } while (iVar6 != iVar3);
  }
LAB_142fcf05f:
  if (iVar14 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar6 = 0;
    iVar3 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = puVar1;
    }
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      iVar3 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar3 = iVar14 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar15) goto LAB_142fcf1c7;
        iVar6 = iVar6 + 0x20;
        uVar8 = puVar4[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar15 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar3 = (iVar6 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar3) {
      iVar3 = iVar14;
    }
  }
  if (iVar3 != iVar14) {
    uVar8 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar5 = (longlong)iVar3 * 0x20;
      local_58 = *(undefined8 *)(lVar12 + 8 + lVar5);
      local_50 = *(undefined4 *)(lVar12 + 0x10 + lVar5);
      FUN_142f47a24(*(undefined8 *)(lVar12 + lVar5),&local_58,6,0);
      uVar8 = ~(uint)uVar13 & uVar8;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      iVar10 = (int)param_1[5];
      iVar3 = (int)uVar15;
      lVar12 = (longlong)iVar3;
      uVar11 = puVar4[lVar12] & uVar8;
      if (uVar11 == 0) {
        iVar9 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar9 = iVar10 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar7 = iVar9;
        if (iVar9 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar9) {
          lVar5 = 0;
          do {
            uVar11 = puVar4[lVar12 + lVar5 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar3 + (int)lVar5 + 1);
              uVar8 = 0xffffffff;
              goto LAB_142fcf2a1;
            }
            iVar6 = iVar6 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar7 - lVar12 != lVar5);
          uVar8 = 0xffffffff;
          lVar12 = (longlong)iVar7;
        }
        uVar15 = lVar12 + 1U & 0xffffffff;
        iVar3 = iVar10;
      }
      else {
LAB_142fcf2a1:
        uVar13 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar3 = (iVar6 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar3) {
          iVar3 = iVar10;
        }
      }
    } while (iVar3 != iVar14);
  }
LAB_142fcf1c7:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fcf310 FUN_142fcf310 body=29 status=ok
// SIG undefined FUN_142fcf310(void)

void FUN_142fcf310(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142fcf32e FUN_142fcf32e body=73 status=ok
// SIG undefined FUN_142fcf32e(void)

undefined8 * FUN_142fcf32e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e9660;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1472cf304(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcf378 FUN_142fcf378 body=282 status=ok
// SIG undefined FUN_142fcf378(void)

undefined8 * FUN_142fcf378(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcf492 FUN_142fcf492 body=123 status=ok
// SIG undefined FUN_142fcf492(void)

void FUN_142fcf492(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_142fcefaa(param_1 + 0x15,&DAT_14ca85100);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1472cf304(param_1 + 0x15);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fcf502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fcf526 FUN_142fcf526 body=12 status=ok
// SIG undefined FUN_142fcf526(void)

void FUN_142fcf526(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142fcf52f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142fcf532 FUN_142fcf532 body=29 status=ok
// SIG undefined FUN_142fcf532(void)

undefined8 FUN_142fcf532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcf550 FUN_142fcf550 body=282 status=ok
// SIG undefined FUN_142fcf550(void)

undefined8 * FUN_142fcf550(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142fb49ae);
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



// FUNCTION 142fcf6bc FUN_142fcf6bc body=123 status=ok
// SIG undefined FUN_142fcf6bc(void)

void FUN_142fcf6bc(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar6);
      if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar6), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar1)) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((longlong *)*plVar5 != (longlong *)0x0)))
           ) {
          (**(code **)(*(longlong *)*plVar5 + 0xbd8))();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return;
}



// FUNCTION 142fcf74e FUN_142fcf74e body=57 status=ok
// SIG undefined FUN_142fcf74e(void)

undefined8 * FUN_142fcf74e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e9720;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcf788 FUN_142fcf788 body=123 status=ok
// SIG undefined FUN_142fcf788(void)

void FUN_142fcf788(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar6);
      if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar6), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar1)) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((longlong *)*plVar5 != (longlong *)0x0)))
           ) {
          (**(code **)(*(longlong *)*plVar5 + 0xbe0))();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  return;
}



// FUNCTION 142fcf81a FUN_142fcf81a body=57 status=ok
// SIG undefined FUN_142fcf81a(void)

undefined8 * FUN_142fcf81a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e9740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142fcf853 FUN_142fcf853 body=6273 status=ok
// SIG undefined FUN_142fcf853(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fcf853(void)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14ca40964);
  if (cVar2 == '\0') {
    _DAT_14ca40964 = 0;
    uRam000000014ca4096c = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca40978,L"r.RayTracing.NormalBias",&DAT_14c760924,
                L"Sets the max. normal bias used for offseting the ray start position along the normal (default = 0.1, i.e., 1mm)"
               );
  atexit(FUN_142f7c79c);
  local_88 = 0x20;
  FUN_141471170(&DAT_14ca40988,L"r.RayTracing.Shadows.EnableMaterials",&DAT_14c760928,
                L"Enables material shader binding for shadow rays. If this is disabled, then a default trivial shader is used. (default = 1)"
               );
  atexit(FUN_142f7c7e1);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca40998,L"r.RayTracing.Shadows.AvoidSelfIntersectionTraceDistance",
                &DAT_14c76092c,
                L"Max trace distance of epsilon trace to avoid self intersections. If set to 0, epsilon trace will not be used."
               );
  atexit(FUN_142f7c826);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca409a8,L"r.RayTracing.Shadows.EnableTwoSidedGeometry",&local_70,
                L"Enables two-sided geometry when tracing shadow rays (default = 1)");
  atexit(FUN_142f7c86b);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca409c0,L"r.RayTracing.Transmission.TransmissionSamplingDistanceCulling",
                &local_70,
                L"Enables visibility testing to cull transmission sampling distance (default = 1)");
  atexit(FUN_142f7c8b0);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca409d8,L"r.RayTracing.Transmission.SamplingTechnique",&local_70,
                L"0: Uses constant tracking of an infinite homogeneous medium\n1: Uses constant tracking of a finite homogeneous medium whose extent is determined by transmission sampling distance (default)"
               );
  atexit(FUN_142f7c8f5);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca409f0,L"r.RayTracing.Transmission.MeanFreePathType",&local_70,
                L"0: Use the extinction scale from subsurface profile as MFP.1: Use the max MFP from Subsurface profile to generate samples for transmission (Substrate is not supported)."
               );
  atexit(FUN_142f7c93a);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a08,L"r.RayTracing.Transmission.RejectionSamplingTrials",&local_70,
                L"Determines the number of rejection-sampling trials (default = 0)");
  atexit(FUN_142f7c97f);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a20,L"r.RayTracing.Shadows.EnableHairVoxel",&local_70,
                L"Enables use of hair voxel data for tracing shadow (default = 1)");
  atexit(FUN_142f7c9c4);
  local_70._0_4_ = 4000;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a38,L"r.RayTracing.Shadows.LODTransitionStart",&local_70,
                L"The start of an LOD transition range (default = 4000)");
  atexit(FUN_142f7ca09);
  local_70._0_4_ = 5000;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a50,L"r.RayTracing.Shadows.LODTransitionEnd",&local_70,
                L"The end of an LOD transition range (default = 5000)");
  atexit(FUN_142f7ca4e);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a68,L"r.RayTracing.Shadows.AcceptFirstHit",&local_70,
                L"Whether to allow shadow rays to terminate early, on first intersected primitive. This may result in worse denoising quality in some cases. (default = 0)"
               );
  atexit(FUN_142f7ca93);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a80,L"r.RayTracing.Shadows.Translucency",&local_70,
                L"0: Translucent material will not cast shadow (by default).1: Translucent material cast approximate translucent shadows based on opacity (Very expensive)."
               );
  atexit(FUN_142f7cad8);
  local_70 = (char *)CONCAT44(local_70._4_4_,0xffffffff);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40a98,L"r.RayTracing.Shadows.MaxTranslucencyHitCount",&local_70,
                L"-1: Evaluate all intersections (default). 0: Disable translucent shadow testing.>0: Limit the number of intersections."
               );
  atexit(FUN_142f7cb1d);
  local_68 = FUN_145e2854a;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca40bc8,&local_70);
  local_68 = FUN_145f9225a;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca40cf0,&local_70);
  local_88 = 0x60;
  FUN_141471170(&DAT_14ca40d00,L"r.RayTracing.SkyLight",&DAT_14ca40d10,
                L"Enables ray tracing SkyLight (default = 0)");
  atexit(FUN_142f7d953);
  local_88 = 0;
  FUN_141471170(&DAT_14ca40d18,L"r.RayTracing.SkyLight.SamplesPerPixel",&DAT_14c760930,
                L"Sets the samples-per-pixel for ray tracing SkyLight (default = -1)");
  atexit(FUN_142f7d998);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca40d28,L"r.RayTracing.SkyLight.MaxRayDistance",&DAT_14c760934,
                L"Sets the max ray distance for ray tracing SkyLight (default = 1.0e7)");
  atexit(FUN_142f7d9dd);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca40d38,L"r.RayTracing.SkyLight.MaxShadowThickness",&DAT_14c760938,
                L"Sets the max shadow thickness for translucent materials for ray tracing SkyLight (default = 1.0e3)"
               );
  atexit(FUN_142f7da22);
  local_88 = 0;
  FUN_141471170(&DAT_14ca40d48,L"r.RayTracing.SkyLight.Sampling.StopLevel",&DAT_14ca40d58,
                L"Sets the stop level for MIP-sampling (default = 0)");
  atexit(FUN_142f7da67);
  local_88 = 0;
  FUN_141471170(&DAT_14ca40d60,L"r.RayTracing.SkyLight.Denoiser",&DAT_14c76093c,
                L"Denoising options (default = 1)");
  atexit(FUN_142f7daac);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40d70,L"r.RayTracing.SkyLight.EnableTwoSidedGeometry",&local_70,
                L"Enables two-sided geometry when tracing shadow rays (default = 1)");
  atexit(FUN_142f7daf1);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40d88,L"r.RayTracing.SkyLight.EnableMaterials",&local_70,
                L"Enables material shader binding for shadow rays. If this is disabled, then a default trivial shader is used. (default = 1)"
               );
  atexit(FUN_142f7db36);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40da0,L"r.RayTracing.SkyLight.DecoupleSampleGeneration",&local_70,
                L"Decouples sample generation from ray traversal (default = 1)");
  atexit(FUN_142f7db7b);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca40db8,L"r.RayTracing.SkyLight.HairVoxel",&local_70,
                L"Include hair voxel representation to estimate sky occlusion");
  atexit(FUN_142f7dbc0);
  local_70 = (char *)CONCAT44(local_70._4_4_,0x42c80000);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca40dd0,L"r.RayTracing.SkyLight.ScreenPercentage",&local_70,
                L"Screen percentage at which to evaluate sky occlusion");
  atexit(FUN_142f7dc05);
  local_68 = FUN_145d4cc50;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca40e70,&local_70);
  local_68 = FUN_145f59dea;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca40f98,&local_70);
  local_68 = FUN_145f756c0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca410c0,&local_70);
  local_68 = FUN_145f3510c;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca411e8,&local_70);
  local_70 = (char *)CONCAT44(local_70._4_4_,0xffffffff);
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca411f8,L"r.RayTracing.Translucency",&local_70,
                L"-1: Value driven by postprocess volume (default) \n 0: ray tracing translucency off (use raster) \n 1: ray tracing translucency enabled"
               );
  atexit(FUN_142f7fae9);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca41210,L"r.RayTracing.Translucency.MaxRoughness",&DAT_14c760940,
                L"Sets the maximum roughness until which ray tracing reflections will be visible (default = -1 (max roughness driven by postprocessing volume))"
               );
  atexit(FUN_142f7fb2e);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41220,L"r.RayTracing.Translucency.MaxRefractionRays",&DAT_14c760944,
                L"Sets the maximum number of refraction rays for ray traced translucency (default = -1 (max bounces driven by postprocessing volume)"
               );
  atexit(FUN_142f7fb73);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41230,L"r.RayTracing.Translucency.EmissiveAndIndirectLighting",
                &DAT_14c760948,
                L"Enables ray tracing translucency emissive and indirect lighting (default = 1)");
  atexit(FUN_142f7fbb8);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41240,L"r.RayTracing.Translucency.DirectLighting",&DAT_14c76094c,
                L"Enables ray tracing translucency direct lighting (default = 1)");
  atexit(FUN_142f7fbfd);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41250,L"r.RayTracing.Translucency.Shadows",&DAT_14c760950,
                L"Enables shadows in ray tracing translucency) -1: Shadows driven by postprocessing volume (default) 0: Shadows disabled  1: Hard shadows 2: Soft area shadows"
               );
  atexit(FUN_142f7fc42);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca41260,L"r.RayTracing.Translucency.MinRayDistance",&DAT_14c760954,
                L"Sets the minimum ray distance for ray traced translucency rays. Actual translucency ray length is computed as Lerp(MaxRayDistance, MinRayDistance, Roughness), i.e. translucency rays become shorter when traced from rougher surfaces. (default = -1 (infinite rays))"
               );
  atexit(FUN_142f7fc87);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca41270,L"r.RayTracing.Translucency.MaxRayDistance",&DAT_14c760958,
                L"Sets the maximum ray distance for ray traced translucency rays. When ray shortening is used, skybox will not be sampled in RT translucency pass and will be composited later, together with local reflection captures. Negative values turn off this optimization. (default = -1 (infinite rays))"
               );
  atexit(FUN_142f7fccc);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41280,L"r.RayTracing.Translucency.SamplesPerPixel",&DAT_14c76095c,
                L"Sets the samples-per-pixel for Translucency (default = 1)");
  atexit(FUN_142f7fd11);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41290,L"r.RayTracing.Translucency.HeightFog",&DAT_14c760960,
                L"Enables height fog in ray traced Translucency (default = 1)");
  atexit(FUN_142f7fd56);
  local_88 = 0;
  FUN_141471170(&DAT_14ca412a0,L"r.RayTracing.Translucency.Refraction",&DAT_14c760964,
                L"Enables refraction in ray traced Translucency (default = 1)");
  atexit(FUN_142f7fd9b);
  local_88 = 0;
  FUN_1415c789c(&DAT_14ca412b0,L"r.RayTracing.Translucency.PrimaryRayBias",&DAT_14c760968,
                L"Sets the bias to be subtracted from the primary ray TMax in ray traced Translucency. Larger bias reduces the chance of opaque objects being intersected in ray traversal, saving performance, but at the risk of skipping some thin translucent objects in proximity of opaque objects. (recommended range: 0.00001 - 0.1) (default = 0.00001)"
               );
  atexit(FUN_142f7fde0);
  local_68 = FUN_145ede620;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca413d8,&local_70);
  local_70._0_4_ = 0x1000;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca413e8,L"r.RectLightAtlas.MaxResolution",&local_70,
                L"The maximum resolution for storing rect. light textures.\n");
  atexit(FUN_142f802dd);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41400,L"r.RectLightAtlas.Debug",&local_70,
                L"Enable rect. light atlas debug information.");
  atexit(FUN_142f80322);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41418,L"r.RectLightAtlas.Debug.MipLevel",&local_70,
                L"Set MIP level for visualizing atlas texture in debug mode.");
  atexit(FUN_142f80367);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41430,L"r.RectLightAtlas.ForceUpdate",&local_70,
                L"Force rect. light atlas update very frame.");
  atexit(FUN_142f803ac);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41448,L"r.RectLightAtlas.FilterQuality",&local_70,
                L"Define the filtering quality used for filtering texture (0:Box filter, 1:Gaussian filter)."
               );
  atexit(FUN_142f803f1);
  local_70._0_4_ = 2;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41460,L"r.RectLightAtlas.MaxTextureRatio",&local_70,
                L"Define the max Width/Height or Height/Width ratio that a texture can have.");
  atexit(FUN_142f80436);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41478,L"r.RectLightAtlas.Format",&local_70,
                L"Define the atlas format used.\n - 0: R11G11B10 (faster but can caused hue shift). \n - 1: RGA16F (more accurate but slower)"
               );
  atexit(FUN_142f8047b);
  DAT_14ca41490._0_4_ = 0xffffffff;
  DAT_14ca41490._4_4_ = 0xffffffff;
  FUN_146304d4c();
  DAT_14ca414a0 = &PTR_FUN_14a2e7020;
  FUN_146304dee();
  atexit(FUN_142f804c0);
  local_68 = FUN_145f75cbc;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca41648,&local_70);
  local_68 = FUN_145cfe67a;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca41770,&local_70);
  local_68 = FUN_145f1b0d0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca41898,&local_70);
  local_68 = FUN_145e4a7f2;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca419c0,&local_70);
  local_68 = FUN_145f0858e;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca41ae8,&local_70);
  local_70._0_4_ = 1;
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca41b08,L"r.ReflectionEnvironment",&local_70,
                L"Whether to render the reflection environment feature, which implements local reflections through Reflection Capture actors.\n 0: off\n 1: on and blend with scene (default) 2: on and overwrite scene (only in non-shipping builds)"
               );
  atexit(FUN_142f84182);
  local_88 = 0x60;
  FUN_141471170(&DAT_14ca41b20,L"r.ReflectionEnvironmentLightmapMixing",&DAT_14c76096c,
                L"Whether to mix indirect specular from reflection captures with indirect diffuse from lightmaps for rough surfaces."
               );
  atexit(FUN_142f841c7);
  local_88 = 0x60;
  FUN_141471170(&DAT_14ca41b30,L"r.ReflectionEnvironmentLightmapMixBasedOnRoughness",&DAT_14c760970,
                L"Whether to reduce lightmap mixing with reflection captures for very smooth surfaces.  This is useful to make sure reflection captures match SSR / planar reflections in brightness."
               );
  atexit(FUN_142f8420c);
  local_88 = 0x60;
  FUN_1415c789c(&DAT_14ca41b40,L"r.ReflectionEnvironmentBeginMixingRoughness",&DAT_14c760974,
                L"Min roughness value at which to begin mixing reflection captures with lightmap indirect diffuse."
               );
  atexit(FUN_142f84251);
  local_88 = 0x60;
  FUN_1415c789c(&DAT_14ca41b50,L"r.ReflectionEnvironmentEndMixingRoughness",&DAT_14c760978,
                L"Min roughness value at which to end mixing reflection captures with lightmap indirect diffuse."
               );
  atexit(FUN_142f84296);
  local_88 = 0x60;
  FUN_141471170(&DAT_14ca41b60,L"r.ReflectionEnvironmentLightmapMixLargestWeight",&DAT_14c76097c,
                L"When set to 1 can be used to clamp lightmap mixing such that only darkening from lightmaps are applied to reflection captures."
               );
  atexit(FUN_142f842db);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca41b70,L"r.DoTiledReflections",&local_70,
                L"Compute Reflection Environment with Tiled compute shader..\n 0: off\n 1: on (default)"
               );
  atexit(FUN_142f84320);
  FUN_1411e592c(&DAT_14ca41b88,L"ReflectionCapture");
  local_68 = FUN_144a888ee;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca41c18,&local_70);
  local_68 = FUN_145d59ed4;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca41cb0,&local_70);
  local_88 = 0x20;
  FUN_141471170(&DAT_14ca41cc0,L"r.ReflectionCaptureSupersampleFactor",&DAT_14c760980,
                L"Super sample factor when rendering reflection captures.\nDefault = 1, no super sampling\nMaximum clamped to 8."
               );
  atexit(FUN_142f84ddf);
  local_88 = 0x40;
  FUN_1415c789c(&DAT_14ca41cd0,L"r.SkylightCapture.LODDistanceScale",&DAT_14c760984,
                L"LODDistanceScale for the Sky Light Capture. Default is 1Negative values will be clamped to 1"
               );
  atexit(FUN_142f84e24);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = 4;
  FUN_14078dbce(&DAT_14ca41ce0,L"r.chaos.ReflectionCaptureStaticSceneOnly",&local_70,
                L" 0 is off, 1 is on (default)");
  atexit(FUN_142f84e69);
  local_88 = 0;
  FUN_141471170(&DAT_14ca41cf8,L"r.ReflectionCapture.EnableLightFunctions",&DAT_14ca41d08,
                L"0. Disable light functions in reflection/sky light capture (default).\nOthers. Enable light functions."
               );
  atexit(FUN_142f84eae);
  local_68 = FUN_145d446ec;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca41e28,&local_70);
  local_68 = FUN_146095eb4;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca41f50,&local_70);
  local_68 = FUN_146096122;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42078,&local_70);
  local_68 = FUN_146096390;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca421a0,&local_70);
  local_68 = FUN_1460965fe;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca422c8,&local_70);
  local_68 = FUN_146081fc0;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca423f0,&local_70);
  local_68 = FUN_145e75090;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42518,&local_70);
  local_68 = FUN_14609686c;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42640,&local_70);
  local_68 = FUN_145f35700;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca427c8,&local_70);
  local_68 = FUN_145e755fe;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca428f0,&local_70);
  local_68 = FUN_145e5be0e;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42a18,&local_70);
  local_70._0_4_ = 1;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca42a28,L"r.SkyLight.RealTimeReflectionCapture.TimeSlice",&local_70,
                L"When enabled, the real-time sky light capture and convolutions will by distributed over several frames to lower the per-frame cost."
               );
  atexit(FUN_142f8f357);
  local_70._0_4_ = 6;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca42a40,
                L"r.SkyLight.RealTimeReflectionCapture.TimeSlice.SkyCloudCubeFacePerFrame",&local_70
                ,
                L"When enabled, the real-time sky light capture, when time sliced, will not render cloud in all cube face in a single frame; but one face per frame. That is to distribute the cloud tracing cost even more, but will add latency and potentially can result in lighting discrepancy between faces if the sun is moving fast. Value in [1,6]."
               );
  atexit(FUN_142f8f39c);
  local_70._0_4_ = 0;
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca42a58,L"r.SkyLight.RealTimeReflectionCapture.ShadowFromOpaque",&local_70,
                L"Opaque meshes cast shadow from directional lights onto sky and clouds when enabled.\n"
               );
  atexit(FUN_142f8f3e1);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = 0x20;
  FUN_14078dbce(&DAT_14ca42a70,L"r.SkyLight.RealTimeReflectionCapture.DepthBuffer",&local_70,
                L"When enabled, the real-time sky light capture will have a depth buffer, this is for multiple meshes to be cover each other correctly. The height fog will also be applied according to the depth buffer."
               );
  atexit(FUN_142f8f426);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca42a88,
                L"r.Gbx.SkyLight.RealTimeReflectionCapture.TimeSlice.CloudCubeFaceOnly",&local_70,
                L"When true, time slicing of the cubemap faces will only apply to the Clouds rendering phase and not the sky phase.Lower the number of frames needed for a full cubemap update, while still reducing GPU spikes mainly caused by the clouds rendering"
               );
  atexit(FUN_142f8f46b);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca42aa0,L"r.Gbx.SkyLight.OnDemandSkyEnvMapUpdate",&local_70,
                L"When true, the sky reflection environment capture is updated on demand instead of being done every frame.SkyLight.RealTimeReflectionCapture need to be enabled in order to update env map on demand at runtime."
               );
  atexit(FUN_142f8f4b0);
  local_68 = FUN_141597b6a;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42bd0,&local_70);
  local_68 = FUN_14158fa9e;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42cf8,&local_70);
  local_68 = FUN_14158e930;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42e20,&local_70);
  local_68 = FUN_141574170;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca42f48,&local_70);
  local_68 = FUN_1415a60ea;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca43070,&local_70);
  local_68 = FUN_1415783c2;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14ca43198,&local_70);
  local_70 = (char *)0x800000014a289c9c;
  local_74 = 8;
  uVar3 = FUN_14577453c();
  local_68._0_5_ = CONCAT14(1,uVar3);
  FUN_146302daa(&local_70);
  local_88 = 0;
  FUN_141471170(&DAT_14ca431b0,L"r.bFlushRenderTargetsOnWorldCleanup",&DAT_14c760988,&DAT_149dfb77a)
  ;
  atexit(FUN_142f934bd);
  FUN_14118b488(&DAT_14ca431c0);
  _DAT_14ca431c0 = &PTR_FUN_149e2c090;
  _DAT_14ca431c8 = &LAB_142f968a2;
  atexit((_func_5014 *)&LAB_142f968a5);
  local_70 = "SMInstance";
  local_68 = (code *)CONCAT35(local_68._5_3_,10);
  uVar4 = FUN_14001a6c0(&local_70,1);
  _DAT_14ca431d0 = (ulonglong)uVar4;
  local_70._0_1_ = 1;
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca431d8,L"r.gbx.MaskedDigistructConvolutionEnable",&local_70,
                L"Run-time developer toggle to enable/disable convolution of masked materials and digistruct CustomMask effects"
               );
  atexit(FUN_142f968b1);
  local_70._0_1_ = 1;
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca431f0,L"r.gbx.TranslucecyDigistructConvolutionEnable",&local_70,
                L"Run-time developer toggle to enable/disable convolution of translucent materials and digistruct CustomMask effects"
               );
  atexit(FUN_142f968f6);
  local_70._0_1_ = 1;
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca43208,L"r.gbx.ForegroundDepthEnable",&local_70,
                L"Enable the GBX foreground rendering passes and composition");
  atexit(FUN_142f9693b);
  local_70 = (char *)((ulonglong)local_70._1_7_ << 8);
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca43220,L"r.gbx.MaterialForegroundMode",&local_70,
                L"Replaces Gbx Foreground with an in material solution. Keep some of the Gbx Foregrounds paths alive."
               );
  atexit(FUN_142f96980);
  local_70._0_4_ = 0x3f800000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca43238,L"r.gbx.ForegroundDepthScale",&local_70,
                L"Z scale for foreground meshes composited into the world depth buffer");
  atexit(FUN_142f969c5);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca43250,L"r.gbx.ForegroundDepthBias",&local_70,
                L"Z offset for foreground meshes composited into the world depth buffer");
  atexit(FUN_142f96a0a);
  local_70 = (char *)CONCAT71(local_70._1_7_,1);
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca43268,L"r.gbx.CompositeDepthEnable",&local_70,
                L"Enable the GBX composite depth buffer when GBX foreground depth is also enabled");
  atexit(FUN_142f96a4f);
  local_70._0_4_ = 0xbf800000;
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca43280,L"r.gbx.CompositeDepthScale",&local_70,
                L"Z scale applied to foreground depth values applied to the composite depth buffer")
  ;
  atexit(FUN_142f96a94);
  local_70 = (char *)((ulonglong)local_70._4_4_ << 0x20);
  local_88 = 0x20;
  FUN_140a6b41e(&DAT_14ca43298,L"r.gbx.CompositeDepthBias",&local_70,
                L"Z offset applied to foreground depth values applied to the composite depth buffer"
               );
  atexit(FUN_142f96ad9);
  local_70._0_1_ = 1;
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca432b0,L"r.gbx.CompositeDepthLumenFixupEnable",&local_70,
                L"Enable the lumen fixups required when the composite depth buffer is enabled");
  atexit(FUN_142f96b1e);
  local_70 = (char *)CONCAT71(local_70._1_7_,1);
  local_88 = 0x20;
  FUN_140bd5914(&DAT_14ca432c8,L"r.gbx.CompositeDepthMotionBlurFixupEnable",&local_70,
                L"Enable the TSR/Motion blur fixups required when the composite depth buffer is enabled"
               );
  atexit(FUN_142f96b63);
  local_70 = (char *)((ulonglong)local_70 & 0xffffffff00000000);
  local_88 = 0x24;
  FUN_14078dbce(&DAT_14ca43340,L"r.EarlyZPassOnlyMaterialMasking",&local_70,
                L"Whether to compute materials\' mask opacity only in early Z pass. Changing this setting requires restarting the editor.\nNote: Needs r.EarlyZPass == 2 && r.EarlyZPassMovable == 1"
               );
  atexit(FUN_142f96ba8);
  local_70._0_4_ = 3;
  local_88 = 0x40;
  FUN_14078dbce(&DAT_14ca43358,L"r.EarlyZPass",&local_70,
                L"Whether to use a depth only pass to initialize Z culling for the base pass. Cannot be changed at runtime.\nNote: also look at r.EarlyZPassMovable\n  0: off\n  1: good occluders only: not masked, and large on screen\n  2: all opaque (including masked)\n  x: use built in heuristic (default is 3)"
               );
  atexit(FUN_142f96bed);
  local_70._0_4_ = 0;
  local_88 = 4;
  FUN_14078dbce(&DAT_14ca43370,L"r.Mobile.EarlyZPass",&local_70,
                L"Whether to use a depth only pass to initialize Z culling for the mobile base pass. Changing this setting requires restarting the editor.\n  0: off\n  1: all opaque \n  2: masked primitives only \n"
               );
  atexit(FUN_142f96c32);
  local_70._0_4_ = 0;
  local_88 = 0;
  FUN_14078dbce(&DAT_14ca43388,L"r.BasePassWriteDepthEvenWithFullPrepass",&local_70,
                L"0 to allow a readonly base pass, which skips an MSAA depth resolve, and allows masked materials to get EarlyZ (writing to depth while doing clip() disables EarlyZ) (default)\n1 to force depth writes in the base pass.  Useful for debugging when the prepass and base pass don\'t match what they render."
               );
  atexit(FUN_142f96c77);
  local_88 = 0x20;
  FUN_141471170(&DAT_14ca433a0,L"r.Visibility.SkipAlwaysVisible",&DAT_14c76098c,
                L"Whether visibility passes should skip primitives marked always visible0: All primitives are processed by visibility passes1: Only primitives not marked with bAlwaysVisible will be processed by visibility passes"
               );
  atexit(FUN_142f96cbc);
  local_70 = (char *)CONCAT44(local_70._4_4_,1);
  local_88 = 0x60;
  FUN_14078dbce(&DAT_14ca433b0,L"r.Visibility.LocalLightPrimitiveInteraction",&local_70,
                L"Whether to allow computing local primitive interactions. May greatly speedup render thread time if not needed."
               );
  atexit(FUN_142f96d01);
  local_68 = FUN_144a9206a;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca43450,&local_70);
  local_68 = FUN_144a92212;
  local_70 = &DAT_14152059c;
  FUN_14142a670(&DAT_14ca434e8,&local_70);
  _DAT_14ca44d30 = 0xffffffff;
  DAT_14ca44d34 = 5;
  DAT_14ca44d35 = 1;
  DAT_14ca44d36 = 0;
  _DAT_14ca44d38 = 2;
  DAT_14ca44d40 = 0;
  DAT_14ca44d48 = 0;
  DAT_14ca44d28 = &PTR_FUN_14a2e7c90;
  FUN_146305292();
  atexit(FUN_142f96d5e);
  _DAT_14ca44d58 = 0xffffffff;
  DAT_14ca44d5c = 5;
  DAT_14ca44d5d = 1;
  DAT_14ca44d5e = 0;
  _DAT_14ca44d60 = 2;
  DAT_14ca44d68 = 0;
  DAT_14ca44d70 = 0;
  DAT_14ca44d50 = &PTR_FUN_14a2e7cf0;
  FUN_14630535a();
  atexit(FUN_142f96d8d);
  DAT_14ca434f8 = 0;
  local_70 = (char *)0x0;
  local_68 = (code *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68._0_4_ = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_70 + 0x10) = lVar5;
  *(undefined ***)local_70 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_70 + 0x18) = FUN_142f993f5;
  FUN_141253d16(&DAT_14ca43500,&local_70);
  if ((int)local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_142fd0fdf;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68._0_4_ = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142fd0fdf:
  DAT_14ca44d98 = 0;
  DAT_14ca44da0 = 0;
  DAT_14ca44d78 = 0;
  _DAT_14ca44d80 = 0;
  _DAT_14ca44da4 = 0xffffffff00000080;
  DAT_14ca44dac = 0;
  DAT_14ca44db8 = 0;
  DAT_14ca44dc0 = 0;
  atexit(FUN_142f99a96);
  local_88 = 0;
  FUN_141471170(&DAT_14ca43518,L"r.WarningOnRedundantTransformUpdate",&DAT_14ca43528,
                L"Produce a warning when UpdatePrimitiveTransform is called redundantly.");
  atexit(FUN_142f9a519);
  local_88 = 0;
  FUN_141471170(&DAT_14ca43530,L"r.SkipRedundantTransformUpdate",&DAT_14c760990,
                L"Skip updates UpdatePrimitiveTransform is called redundantly, if the proxy allows it."
               );
  atexit(FUN_142f9a55e);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd10d8 FUN_142fd10d8 body=69 status=ok
// SIG undefined FUN_142fd10d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd10d8(void)

{
  _DAT_14ca44dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd111a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca44de0,1);
  return;
}



// FUNCTION 142fd112a FUN_142fd112a body=1712 status=ok
// SIG undefined FUN_142fd112a(void)

void FUN_142fd112a(longlong param_1,undefined8 param_2,longlong *param_3,ulonglong *param_4,
                  ulonglong param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined2 uVar21;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined1 local_81;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  undefined6 uVar13;
  int iVar17;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = (ulonglong)*(uint *)(param_3 + 1);
  lVar10 = *(longlong *)*param_3;
  iVar3 = *(int *)(lVar10 + 0x88) + 7;
  iVar17 = *(int *)(lVar10 + 0x88) + 0xe;
  if (-1 < iVar3) {
    iVar17 = iVar3;
  }
  uVar9 = iVar17 >> 3;
  iVar3 = *(int *)(lVar10 + 0x84) + 7;
  iVar17 = *(int *)(lVar10 + 0x84) + 0xe;
  if (-1 < iVar3) {
    iVar17 = iVar3;
  }
  uVar16 = iVar17 >> 3;
  local_98 = (ulonglong)uVar16;
  local_80 = (undefined8 *)(param_5 | 0x20009);
  local_68 = DAT_14ca85098;
  local_4d = 0x20;
  if (local_b0 < 3) {
    local_4d = 0x39;
  }
  local_78 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_70 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_4e = 0;
  local_4c = 0xff00;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_60 = 0;
  local_5c = DAT_14ca84e40;
  if ((int)uVar16 < (int)DAT_14ca84e40) {
    local_5c = uVar16;
  }
  if ((int)local_5c < 2) {
    local_5c = 1;
  }
  local_58 = DAT_14ca84e40;
  if ((int)uVar9 < (int)DAT_14ca84e40) {
    local_58 = uVar9;
  }
  if ((int)local_58 < 2) {
    local_58 = 1;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar18 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar7 = uVar18 + 0x120;
  local_c0 = puVar1;
  local_b8 = param_3;
  if (*(ulonglong *)(param_1 + 0x78) < uVar7) {
    FUN_140023dd8(puVar1,0x128);
    uVar18 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar7 = uVar18 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar7;
  FUN_1456bbb8c(uVar18,param_6,&local_80,0);
  iVar3 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar3 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar3);
  }
  puVar1 = local_c0;
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar3 * 8) = uVar18;
  *(int *)(uVar18 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  *param_4 = uVar18;
  local_c8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = local_c8 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(local_c0,0x50);
    local_c8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = local_c8 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  *local_c8 = &PTR_FUN_14a2f0c28;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  iVar17 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar17 + 1U;
  local_a0 = (ulonglong)uVar9;
  local_90 = param_2;
  if (*(uint *)(param_1 + 0xa4) < iVar17 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar17);
  }
  puVar1 = local_c0;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar17 * 8) = local_c8;
  local_c8[2] = lVar10;
  uVar7 = *param_4;
  uVar2 = *(undefined1 *)(uVar7 + 0x94);
  uVar12 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),uVar2);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar14 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(local_c0,0x50);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 9;
  }
  local_a8 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar14[1] = *(undefined8 *)(uVar7 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar14 + 6) = uVar2;
  *(undefined1 *)(puVar14 + 7) = 0;
  *(undefined4 *)((longlong)puVar14 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar14 + 0x35) = 0;
  puVar14[8] = uVar7;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_a8,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  local_c8[7] = puVar14;
  uVar7 = local_b0;
  if (local_b0 != 0) {
    uVar12 = 0;
    lVar10 = 0;
    plVar15 = local_b8;
    puVar8 = local_c8;
    do {
      puVar1 = local_c0;
      lVar4 = *(longlong *)(*plVar15 + (longlong)(int)lVar10 * 8);
      if ((*(char *)(lVar4 + 0x92) == '\x04') || (*(char *)(lVar4 + 0x92) == '\x01')) {
        uVar21 = *(undefined2 *)(lVar4 + 0x8e);
      }
      else {
        uVar21 = 0;
      }
      uVar2 = *(undefined1 *)(lVar4 + 0x90);
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar20 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(local_c0,0x48);
        puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar20 + 8;
        uVar7 = local_b0;
        plVar15 = local_b8;
        puVar8 = local_c8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      puVar20[1] = *(undefined8 *)(lVar4 + 8);
      puVar20[2] = 0;
      *(undefined1 *)(puVar20 + 3) = 1;
      *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
      *puVar20 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar20 + 5) = 0;
      *(undefined1 *)((longlong)puVar20 + 0x2a) = uVar2;
      *(undefined1 *)((longlong)puVar20 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar20 + 0x2e) = uVar21;
      *(undefined1 *)(puVar20 + 6) = 6;
      *(undefined1 *)((longlong)puVar20 + 0x32) = 0;
      puVar20[7] = lVar4;
      iVar3 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
        FUN_1447568fc(local_a8,iVar3);
        uVar7 = local_b0;
        plVar15 = local_b8;
        puVar8 = local_c8;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar20;
      *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar8[lVar10 + 3] = puVar20;
      lVar10 = lVar10 + 1;
    } while ((int)uVar7 != (int)lVar10);
  }
  FUN_14612c1c2();
  uVar5 = local_90;
  FUN_1448e935e(local_90,&local_80,&DAT_14ca44e50,(int)uVar7 + -1);
  FUN_14612c1c2();
  uVar6 = local_78;
  puVar8 = local_80;
  FUN_1472db94e();
  FUN_140069376(param_1);
  puVar1 = local_c0;
  uVar13 = (undefined6)((ulonglong)uVar12 >> 0x10);
  uVar11 = (undefined4)CONCAT62(uVar13,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar11 = (undefined4)CONCAT62(uVar13,4);
  }
  lVar10 = local_a0 << 0x20;
  puVar20 = local_c8 + 2;
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar19 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(local_c0,0x1e8);
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar19 + 0x3c;
  }
  lVar10 = lVar10 + local_98;
  *local_c0 = (ulonglong)puVar14;
  local_78 = DAT_14ca46b40;
  if (DAT_14ca46b40 != 0) {
    LOCK();
    *(int *)(DAT_14ca46b40 + 8) = *(int *)(DAT_14ca46b40 + 8) + 1;
    UNLOCK();
  }
  uStack_70 = &DAT_14ca46af8;
  local_d8 = 2;
  local_80 = puVar20;
  FUN_140068f1a(puVar19,&local_81,&local_80,uVar11);
  *puVar19 = &PTR_FUN_14a2f0c30;
  puVar19[0x37] = puVar8;
  puVar19[0x38] = uVar6;
  puVar19[0x39] = puVar20;
  puVar19[0x3a] = uVar5;
  puVar19[0x3b] = lVar10;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar19);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142fd17e7 FUN_142fd17e7 body=154 status=ok
// SIG undefined FUN_142fd17e7(void)

longlong FUN_142fd17e7(undefined8 param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = DAT_14ca97170;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar5 = 1;
  }
  if (*(int *)(lVar4 + uVar5 * 4) < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x51f8);
    if (lVar4 == 0) {
      lVar4 = FUN_14731726a(param_1,0);
      return lVar4;
    }
  }
  return lVar4;
}



// FUNCTION 142fd1881 FUN_142fd1881 body=240 status=ok
// SIG undefined FUN_142fd1881(void)

void FUN_142fd1881(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca44fa8 = &PTR_FUN_14a2f0c50;
  FUN_144725486(&DAT_14ca44fa8);
  lVar4 = DAT_14ca44fb8;
  DAT_14ca44fa8 = &PTR_FUN_14a38cff0;
  if (DAT_14ca44fb8 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca44fb8 + 8);
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
  DAT_14ca44fa8 = &PTR_FUN_14a38cd70;
  DAT_14ca44fb6 = 2;
  if ((DAT_14ca44fb0 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 142fd1971 FUN_142fd1971 body=47 status=ok
// SIG undefined FUN_142fd1971(void)

void FUN_142fd1971(void)

{
  DAT_14ca44fc8 = &PTR_FUN_14a2f0cc0;
  FUN_144725486(&DAT_14ca44fc8);
  FUN_14003f39a(&DAT_14ca44fc8);
  return;
}



// FUNCTION 142fd19ac FUN_142fd19ac body=69 status=ok
// SIG undefined FUN_142fd19ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd19ac(void)

{
  _DAT_14ca45110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd19ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45118,1);
  return;
}



// FUNCTION 142fd19f1 FUN_142fd19f1 body=69 status=ok
// SIG undefined FUN_142fd19f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd19f1(void)

{
  _DAT_14ca45120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd1a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45128,1);
  return;
}



// FUNCTION 142fd1a36 FUN_142fd1a36 body=69 status=ok
// SIG undefined FUN_142fd1a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd1a36(void)

{
  _DAT_14ca45130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd1a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45138,1);
  return;
}



// FUNCTION 142fd1a7b FUN_142fd1a7b body=69 status=ok
// SIG undefined FUN_142fd1a7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd1a7b(void)

{
  _DAT_14ca45140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd1abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45148,1);
  return;
}



// FUNCTION 142fd1ac0 FUN_142fd1ac0 body=69 status=ok
// SIG undefined FUN_142fd1ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd1ac0(void)

{
  _DAT_14ca45158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd1b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45160,1);
  return;
}



// FUNCTION 142fd1b38 FUN_142fd1b38 body=164 status=ok
// SIG undefined FUN_142fd1b38(void)

void FUN_142fd1b38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar7);
      (**(code **)(*plVar4 + 8))(plVar4,param_1);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar7);
  }
  if ((longlong)(int)param_2[1] != 0) {
    puVar6 = (undefined8 *)*param_2;
    puVar1 = puVar6 + (int)param_2[1];
    do {
      iVar2 = *(int *)(param_1 + 0x100);
      if ((longlong)iVar2 != 0) {
        uVar5 = *puVar6;
        lVar3 = *(longlong *)(param_1 + 0xf8);
        lVar7 = 0;
        do {
          plVar4 = *(longlong **)(lVar3 + lVar7);
          (**(code **)(*plVar4 + 0x10))(plVar4,param_1,uVar5);
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar7);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  return;
}



// FUNCTION 142fd1bdc FUN_142fd1bdc body=7313 status=ok
// SIG undefined FUN_142fd1bdc(void)

void FUN_142fd1bdc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  void *_Src;
  ulonglong uVar17;
  char cVar18;
  int iVar19;
  DWORD DVar20;
  DWORD DVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  float *pfVar30;
  uint *puVar31;
  undefined8 *puVar32;
  longlong lVar33;
  wchar_t *pwVar34;
  double *pdVar35;
  longlong **pplVar36;
  undefined1 *_Dst;
  undefined8 *puVar37;
  longlong **pplVar38;
  double *pdVar39;
  longlong *plVar40;
  undefined2 *puVar41;
  int iVar42;
  uint uVar43;
  undefined1 uVar44;
  byte bVar45;
  ulonglong uVar46;
  bool bVar47;
  bool bVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auStack_5b8 [32];
  longlong **local_598;
  longlong *local_590;
  double *local_588;
  undefined4 local_580;
  undefined4 local_578;
  byte local_570;
  byte local_568;
  undefined1 local_560;
  longlong *local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined1 local_529;
  ulonglong local_528;
  int local_51c;
  int local_518;
  undefined4 local_514;
  longlong **local_510;
  undefined4 local_504;
  undefined8 local_500;
  ulonglong local_4f8;
  undefined4 local_4f0;
  uint local_4ec;
  longlong *local_4e8;
  undefined8 local_4e0;
  void *local_4d8;
  int local_4d0;
  undefined4 local_4cc;
  void *local_4c8;
  ulonglong uStack_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong **local_4a8;
  undefined1 local_4a0 [24];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  longlong **local_468;
  void *pvStack_460;
  undefined1 local_458 [8];
  longlong *plStack_450;
  double local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  double local_3d8 [16];
  undefined1 local_358 [160];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 uStack_2a8;
  undefined4 uStack_2a7;
  undefined4 uStack_2a3;
  undefined4 uStack_29f;
  undefined1 local_298 [16];
  undefined1 *local_288;
  int local_280;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_268;
  undefined1 local_264;
  undefined1 local_262;
  undefined8 local_260;
  longlong *local_258 [4];
  longlong local_238 [12];
  double local_1d8 [6];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 local_180;
  double dStack_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  longlong *local_158 [12];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  bVar45 = *(byte *)((longlong)param_2 + 0x2aa);
  if ((bVar45 & 0x10) == 0) {
    *(byte *)((longlong)param_2 + 0x2aa) = bVar45 & 0xe3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    FUN_140e8e738(local_478);
    iVar19 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_478._0_8_);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
    uVar28 = (uint)(bVar45 >> 2 & 1);
    if (iVar19 < 1) {
      uVar28 = 0;
    }
  }
  else {
    *(byte *)((longlong)param_2 + 0x2aa) = bVar45 & 0xef;
    uVar28 = 0;
  }
  pplVar36 = (longlong **)param_2[0x75];
  if (pplVar36 == (longlong **)0x0) goto LAB_142fd3345;
  bVar45 = *(byte *)((longlong)param_2 + 0x2a9);
  local_4f0 = (undefined4)param_2[0x1b2];
  cVar18 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
  if (cVar18 == '\0') {
    local_518 = *(int *)((longlong)param_2 + 0xd14);
  }
  else {
    iVar42 = (**(code **)(*DAT_14cad2328 + 0xb0))();
    iVar19 = 0x40;
    if (iVar42 < 0x40) {
      iVar19 = iVar42;
    }
    local_518 = 1;
    if (1 < iVar19) {
      local_518 = iVar19;
    }
  }
  cVar18 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
  if (cVar18 == '\0') {
    local_51c = (int)param_2[0x1a3];
  }
  else {
    iVar42 = (**(code **)(*DAT_14cad2340 + 0xb0))();
    iVar19 = 0x40;
    if (iVar42 < 0x40) {
      iVar19 = iVar42;
    }
    local_51c = 1;
    if (1 < iVar19) {
      local_51c = iVar19;
    }
  }
  bVar45 = 10 < bVar45 | (byte)(0xfb >> (bVar45 & 0x1f));
  uVar5 = *(uint *)((longlong)param_2 + 0xd54);
  if ((((uVar5 & 0x18) == 0) &&
      ((((char)param_2[0x1aa] != '\x01' || ((*(byte *)((longlong)param_2 + 0x2a9) & 0xfc) != 4)) ||
       ((param_2[0x1ac] == 0 && ((param_2[0x1ad] == 0 && (param_2[0x1ae] == 0)))))))) ||
     (param_2[0x1b3] == 0)) {
    fVar50 = (float)(*(code *)(*pplVar36)[0x6b])(pplVar36);
    fVar49 = (float)(*(code *)(*pplVar36)[0x6a])(pplVar36);
    uVar22 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
    if ((char)uVar22 == '\0') {
      if (*(char *)((longlong)param_2 + 0xd11) == '\x01') goto LAB_142fd1edb;
LAB_142fd2028:
      local_514 = 0;
    }
    else {
      uVar22 = (**(code **)(*DAT_14cad2310 + 0xa8))();
      if ((char)uVar22 == '\0') goto LAB_142fd2028;
LAB_142fd1edb:
      local_514 = (undefined4)
                  CONCAT71((int7)((ulonglong)uVar22 >> 8),(char)param_2[0x71] == '\x01' & bVar45);
    }
    cVar18 = (**(code **)(*DAT_14cad22f8 + 0xa8))();
    if (cVar18 != '\0') {
      (**(code **)(*DAT_14cad2310 + 0xa8))();
    }
    local_528 = (ulonglong)(uint)(int)fVar50;
    uVar43 = (uint)fVar49;
    uVar5 = *(uint *)((longlong)param_2 + 0xd54);
  }
  else {
    lVar33 = **(longlong **)(param_2[0x1b3] + 8);
    iVar19 = *(int *)((longlong)param_2 + 0xd5c);
    if (iVar19 < 2) {
      iVar19 = 1;
    }
    iVar42 = 1;
    if (1 < (int)param_2[0x1ab]) {
      iVar42 = (int)param_2[0x1ab];
    }
    local_528 = (longlong)(int)(~*(uint *)(lVar33 + 0x4dc) + *(int *)(lVar33 + 0x4e4) + iVar19) /
                (longlong)iVar19 & 0xffffffff;
    uVar43 = (int)(~*(uint *)(lVar33 + 0x4d8) + *(int *)(lVar33 + 0x4e0) + iVar42) / iVar42;
    local_514 = 0;
  }
  local_4f8 = CONCAT71(local_4f8._1_7_,bVar45);
  local_510 = pplVar36;
  local_4ec = uVar28;
  if (((uVar5 & 0x10) == 0) || (param_2[0x1b3] == 0)) {
    dVar13 = (double)param_2[0x48];
    dVar14 = (double)param_2[0x49];
    dVar56 = (double)param_2[0x4a];
    local_4b8 = param_2[0x4c];
    uStack_4b0 = param_2[0x4d];
    local_4a8 = (longlong **)param_2[0x4e];
    dVar4 = (double)param_2[0x4b];
    dVar11 = dVar14 + dVar14;
    dVar9 = dVar56 + dVar56;
    dVar7 = dVar13 * (dVar13 + dVar13);
    dVar54 = (1.0 - (dVar56 * dVar9 + dVar14 * dVar11)) * DAT_14c846510;
    dVar55 = (1.0 - (dVar56 * dVar9 + dVar7)) * DAT_14c846518;
    local_428 = (1.0 - (dVar7 + dVar14 * dVar11)) * DAT_14c846520;
    dVar7 = dVar9 * dVar4;
    dVar10 = (dVar13 + dVar13) * (double)param_2[0x4b];
    dVar4 = dVar11 * dVar4;
    dVar8 = (dVar11 * dVar13 + dVar7) * DAT_14c846510;
    local_448 = (dVar9 * dVar14 + dVar10) * DAT_14c846518;
    dVar56 = (dVar4 + (double)param_2[0x48] * dVar9) * DAT_14c846520;
    local_468 = (longlong **)(((double)param_2[0x48] * dVar9 - dVar4) * DAT_14c846510);
    dVar4 = (dVar11 * dVar13 - dVar7) * DAT_14c846518;
    dVar7 = (dVar9 * dVar14 - dVar10) * DAT_14c846520;
    local_478._8_4_ = SUB84(dVar8,0);
    local_478._0_8_ = dVar54;
    local_478._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    pvStack_460 = (void *)0x0;
    unique0x100013e1 = SUB84(dVar55,0);
    local_458 = (undefined1  [8])dVar4;
    unique0x100013e5 = (int)((ulonglong)dVar55 >> 0x20);
    uStack_440 = 0;
    local_438._8_4_ = SUB84(dVar7,0);
    local_438._0_8_ = dVar56;
    local_438._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    uStack_420 = 0;
    local_418 = DAT_14c8464e0;
    uStack_410 = (undefined4)DAT_14c8464e8;
    uStack_40c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    uStack_408 = (undefined4)DAT_14c8464f0;
    uStack_404 = DAT_14c8464f0._4_4_;
    uStack_400 = 0;
    uStack_3fc = 0x3ff00000;
    if (((9.99999993922529e-09 < ABS(dVar54)) ||
        (((((9.99999993922529e-09 < ABS(dVar8) || (9.99999993922529e-09 < ABS((double)local_468)))
           || (9.99999993922529e-09 < ABS(dVar4))) ||
          ((9.99999993922529e-09 < ABS(dVar55) || (9.99999993922529e-09 < ABS(local_448))))) ||
         (9.99999993922529e-09 < ABS(dVar56))))) ||
       ((9.99999993922529e-09 < ABS(dVar7) || (9.99999993922529e-09 < ABS(local_428))))) {
      FUN_14007522e(local_258,local_478);
    }
    else {
      puVar37 = &DAT_14c846400;
      pplVar36 = local_258;
      for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
        *pplVar36 = (longlong *)*puVar37;
        puVar37 = puVar37 + 1;
        pplVar36 = pplVar36 + 1;
      }
    }
    pplVar36 = local_258;
    pplVar38 = local_158;
    for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
      *pplVar38 = *pplVar36;
      pplVar36 = pplVar36 + 1;
      pplVar38 = pplVar38 + 1;
    }
    local_258[0] = (longlong *)0x0;
    local_258[1] = (longlong *)0x0;
    local_258[2] = (longlong *)&DAT_3ff0000000000000;
    local_258[3] = (longlong *)0x0;
    local_238[0] = 0x3ff0000000000000;
    local_238[1] = 0;
    local_238[2] = 0;
    local_238[3] = 0;
    local_238[4] = 0;
    local_238[5] = 0x3ff0000000000000;
    local_238[6] = 0;
    local_238[7] = 0;
    local_238[8] = 0;
    local_238[9] = 0;
    local_238[10] = 0;
    local_238[0xb] = 0x3ff0000000000000;
    FUN_1447fea8d(local_478,local_158,local_258);
    puVar37 = (undefined8 *)local_478;
    pplVar36 = local_158;
    for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
      *pplVar36 = (longlong *)*puVar37;
      puVar37 = puVar37 + 1;
      pplVar36 = pplVar36 + 1;
    }
    fVar50 = *(float *)(param_2 + 0x74);
    fVar49 = tanf((*(float *)((longlong)param_2 + 0x38c) * 3.1415927) / 360.0);
    fVar50 = atanf(fVar49 * (fVar50 + 1.0));
    if (*(char *)((longlong)param_2 + 0xc8c) == '\x01') {
      pdVar35 = (double *)(param_2 + 0x192);
      pdVar39 = local_1d8;
      for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
        *pdVar39 = *pdVar35;
        pdVar35 = pdVar35 + 1;
        pdVar39 = pdVar39 + 1;
      }
    }
    else if ((char)param_2[0x71] == '\0') {
      pfVar30 = (float *)&DAT_14c75b140;
      if ((*(byte *)((longlong)param_2 + 0xc84) & 1) != 0) {
        pfVar30 = (float *)(param_2 + 0x191);
      }
      fVar51 = (float)(int)local_528;
      fVar49 = *pfVar30;
      dVar4 = (double)fVar49;
      dVar7 = dVar4;
      if (NAN(fVar49)) {
        dVar7 = (-dVar4 * dVar4) / (dVar4 - dVar4);
      }
      dVar56 = 0.0;
      if (NAN(fVar49)) {
        dVar56 = dVar4 / (dVar4 - dVar4);
      }
      dVar4 = tan((double)fVar50);
      local_1d8[0] = tan((double)fVar50);
      local_1d8[0] = 1.0 / local_1d8[0];
      local_1d8[1] = 0.0;
      local_1d8[2] = 0.0;
      local_1d8[3] = 0.0;
      local_1d8[4] = 0.0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_180 = 0x3ff0000000000000;
      dStack_178 = 0.0;
      local_170 = 0.0;
      local_160 = 0;
      local_1d8[5] = (double)((float)(int)uVar43 / fVar51) / dVar4;
      local_188 = dVar56;
      local_168 = dVar7;
    }
    else if ((char)local_514 == '\0') {
      fVar50 = *(float *)(param_2 + 0x72) * 0.5;
      fVar49 = fVar50 / ((float)(int)uVar43 / (float)(int)local_528);
      local_1d8[5] = 1.0 / (double)fVar49;
      if ((fVar49 == 0.0) && (!NAN(fVar49))) {
        local_1d8[5] = 1.0;
      }
      local_1d8[0] = 1.0 / (double)fVar50;
      if ((fVar50 == 0.0) && (!NAN(fVar50))) {
        local_1d8[0] = 1.0;
      }
      local_1d8[1] = 0.0;
      local_1d8[2] = 0.0;
      local_1d8[3] = 0.0;
      local_1d8[4] = 0.0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = -3.814697265625e-06;
      local_180 = 0;
      dStack_178 = 0.0;
      local_170 = 0.0;
      local_168 = 1.0;
      local_160 = 0x3ff0000000000000;
    }
    else {
      iVar19 = (int)param_2[0x1b2];
      fVar50 = *(float *)(param_2 + 0x72);
      fVar51 = fVar50 * 0.5;
      fVar49 = fVar51 / ((float)(int)uVar43 / (float)(int)local_528);
      if (iVar19 == -1) {
        local_1d8[5] = 1.0 / (double)fVar49;
        if ((fVar49 == 0.0) && (!NAN(fVar49))) {
          local_1d8[5] = 1.0;
        }
        local_1d8[0] = 1.0 / (double)fVar51;
        if ((fVar51 == 0.0) && (!NAN(fVar51))) {
          local_1d8[0] = 1.0;
        }
        dStack_178 = 0.0;
        local_170 = 0.0;
      }
      else {
        fVar51 = (float)(iVar19 % local_518) * fVar50 * (1.0 / (float)local_518) - fVar51;
        fVar53 = (1.0 / (float)local_518) * fVar50 + fVar51;
        fVar49 = fVar49 - (float)(iVar19 / local_518) * fVar50 * (1.0 / (float)local_51c);
        fVar52 = fVar49 - (1.0 / (float)local_51c) * fVar50;
        fVar50 = fVar49 - fVar52;
        local_170 = (double)(-(fVar49 + fVar52) / fVar50);
        fVar49 = fVar53 - fVar51;
        dStack_178 = (double)(-(fVar51 + fVar53) / fVar49);
        local_1d8[5] = (double)(2.0 / fVar50);
        local_1d8[0] = (double)(2.0 / fVar49);
      }
      local_180 = 0;
      uStack_190 = 0;
      local_198 = 0;
      uStack_1a0 = 0;
      local_1a8 = 0;
      local_1d8[4] = 0.0;
      local_1d8[3] = 0.0;
      local_1d8[2] = 0.0;
      local_1d8[1] = 0.0;
      local_188 = -3.814697265625e-06;
      local_168 = 1.0;
      local_160 = 0x3ff0000000000000;
      uVar43 = (int)uVar43 / local_518;
      local_528 = (longlong)
                  ((ulonglong)(uint)((int)local_528 >> 0x1f) << 0x20 | local_528 & 0xffffffff) /
                  (longlong)local_51c & 0xffffffff;
    }
  }
  else {
    lVar33 = **(longlong **)(param_2[0x1b3] + 8);
    local_4a8 = *(longlong ***)(lVar33 + 0x1058);
    local_4b8 = *(longlong *)(lVar33 + 0x1048);
    uStack_4b0 = *(longlong *)(lVar33 + 0x1050);
    puVar37 = (undefined8 *)(lVar33 + 0x9b0);
    pplVar36 = local_158;
    for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
      *pplVar36 = (longlong *)*puVar37;
      puVar37 = puVar37 + 1;
      pplVar36 = pplVar36 + 1;
    }
    local_e0 = *(undefined8 *)(lVar33 + 0xa28);
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    pdVar35 = (double *)(lVar33 + 0x830);
    pdVar39 = local_1d8;
    for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
      *pdVar39 = *pdVar35;
      pdVar35 = pdVar35 + 1;
      pdVar39 = pdVar39 + 1;
    }
  }
  if (((DAT_14c76099c == '\x01') && ((char)param_2[0x1aa] == '\x01')) &&
     ((*(byte *)((longlong)param_2 + 0x2a9) & 0xfc) == 4)) {
    FUN_1472d94b4(local_478);
    local_478._8_4_ = (undefined4)uStack_4b0;
    local_478._0_8_ = local_4b8;
    local_478._12_4_ = uStack_4b0._4_4_;
    local_468 = local_4a8;
    pplVar36 = local_158;
    puVar37 = (undefined8 *)local_458;
    for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
      *puVar37 = *pplVar36;
      pplVar36 = pplVar36 + 1;
      puVar37 = puVar37 + 1;
    }
    pdVar35 = local_1d8;
    pdVar39 = local_3d8;
    for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
      *pdVar39 = *pdVar35;
      pdVar35 = pdVar35 + 1;
      pdVar39 = pdVar39 + 1;
    }
    local_278 = (**(code **)(*param_2 + 0x5d8))(param_2);
    local_264 = 1;
    bVar47 = true;
    if ((param_2[0x1ac] == 0) && (param_2[0x1ad] == 0)) {
      bVar47 = param_2[0x1ae] != 0;
    }
    cVar18 = *(char *)((longlong)param_2 + 0x2a9);
    if (cVar18 == '\x06') {
      pwVar34 = L"SceneCapturePass_Normal";
      uVar44 = 6;
      bVar47 = true;
    }
    else if (cVar18 == '\x05') {
      uVar44 = 1;
      pwVar34 = L"SceneCapturePass_DeviceDepth";
    }
    else if (cVar18 == '\x04') {
      uVar44 = 0;
      pwVar34 = L"SceneCapturePass_SceneDepth";
    }
    else {
      uVar44 = 5;
      pwVar34 = L"SceneCapturePass_BaseColor";
      bVar47 = true;
    }
    uVar22 = FUN_14001cc68(0xb8,0x10);
    uVar46 = local_528 << 0x20;
    FUN_140056680(local_258,pwVar34);
    local_598 = local_510;
    local_590 = param_2;
    local_588 = (double *)(uVar43 | uVar46);
    FUN_1472d9584(uVar22,local_258,bVar47,uVar44);
    if (local_258[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_260 = uVar22;
    FUN_14102b7bb(param_2,local_358);
    local_2b8 = (undefined4)param_2[99];
    uStack_2b4 = *(undefined4 *)((longlong)param_2 + 0x31c);
    uStack_2b0 = (undefined4)param_2[100];
    uStack_2ac = *(undefined4 *)((longlong)param_2 + 0x324);
    uStack_2a7 = *(undefined4 *)((longlong)param_2 + 0x329);
    uStack_2a3 = *(undefined4 *)((longlong)param_2 + 0x32d);
    uStack_29f = *(undefined4 *)((longlong)param_2 + 0x331);
    uStack_2a8 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x325) >> 0x18);
    if ((longlong *)&local_2b8 != param_2 + 99) {
      iVar19 = (int)param_2[0x6a];
      uVar28 = iVar19 + 0x1fU & 0xffffffe0;
      local_280 = 0;
      if (((int)local_27c < (int)uVar28) || (0x80 < (int)local_27c)) {
        local_27c = 0x80;
        if (0x80 < (int)uVar28) {
          local_27c = uVar28;
        }
        FUN_1446efbd8(local_298,0);
        iVar19 = (int)param_2[0x6a];
      }
      local_280 = iVar19;
      if (iVar19 != 0) {
        plVar24 = param_2 + 0x67;
        if ((longlong *)param_2[0x69] != (longlong *)0x0) {
          plVar24 = (longlong *)param_2[0x69];
        }
        _Dst = local_298;
        if (local_288 != (undefined1 *)0x0) {
          _Dst = local_288;
        }
        memcpy(_Dst,plVar24,(ulonglong)(iVar19 + 0x1fU >> 3 & 0xfffffffc));
      }
    }
    if ((0.0 < *(float *)(param_2 + 400)) && ((*(byte *)((longlong)param_2 + 0x3de) & 0x10) != 0)) {
      local_268 = *(undefined4 *)((longlong)param_2 + 0xab4);
      local_262 = 1;
    }
    (**(code **)(*param_1 + 0x4d8))(param_1,0,local_478);
    FUN_1472d3330(local_478);
    goto LAB_142fd3345;
  }
  uVar28 = *(uint *)((longlong)param_2 + 0xd54);
  if (((((uVar28 & 0x10) == 0) || (param_2[0x1b3] == 0)) || (1 < (int)param_2[0x1ab])) ||
     (1 < *(int *)((longlong)param_2 + 0xd5c))) {
LAB_142fd28c2:
    bVar45 = (byte)uVar28 & 1;
    uVar44 = 0;
    uVar28 = 0;
  }
  else {
    if (((char)param_2[0x1aa] != '\x01') ||
       (bVar45 = *(byte *)((longlong)param_2 + 0x2a9), (bVar45 & 0xfc) != 4)) {
      if ((uVar28 & 0x20) == 0) {
        bVar45 = *(byte *)((longlong)param_2 + 0x2a9);
        goto LAB_142fd28a8;
      }
      goto LAB_142fd28c2;
    }
    if ((((uVar28 & 0x20) != 0) && (param_2[0x1ac] == 0)) &&
       ((param_2[0x1ad] == 0 && (param_2[0x1ae] == 0)))) goto LAB_142fd28c2;
LAB_142fd28a8:
    if ((bVar45 < 10) && ((0x304U >> (bVar45 & 0x1f) & 1) != 0)) goto LAB_142fd28c2;
    bVar45 = *(byte *)(**(longlong **)(param_2[0x1b3] + 8) + 0x23cc);
    uVar28 = 0x10000;
    uVar44 = 1;
  }
  uVar22 = (**(code **)(*param_2 + 0x5d8))(param_2);
  lVar29 = param_2[400];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2f4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x38c);
  uVar46 = (ulonglong)uVar43 | local_528 << 0x20;
  lVar23 = FUN_1447b4020(local_510);
  lVar33 = lVar23 + 0x50;
  if (lVar23 == 0) {
    lVar33 = 0;
  }
  local_570 = (byte)local_4f8 & 1;
  local_588 = local_1d8;
  local_590 = &local_4b8;
  local_598 = local_158;
  local_540 = 0xffffffff;
  local_580 = uVar2;
  local_578 = uVar3;
  local_568 = bVar45;
  local_560 = uVar44;
  local_558 = param_2 + 0x78;
  local_550 = (int)lVar29;
  local_548 = uVar22;
  local_4f8 = uVar46;
  uVar46 = FUN_142fd386e(param_1,param_2,lVar33,uVar46);
  bVar47 = DAT_14c872be0 != DAT_14c761420;
  bVar48 = DAT_14c872be0 == param_2[0x6f];
  DAT_14c761420 = DAT_14c872be0;
  param_2[0x6f] = DAT_14c872be0;
  *(bool *)(uVar46 + 0x8b0) = bVar48 || bVar47;
  *(uint *)(*(longlong *)(uVar46 + 1000) + 0x125b0) =
       *(uint *)(*(longlong *)(uVar46 + 1000) + 0x125b0) & 0xfffeffff | uVar28;
  *(uint *)(*(longlong *)(uVar46 + 1000) + 0x125b0) =
       *(uint *)(*(longlong *)(uVar46 + 1000) + 0x125b0) & 0xffffefff |
       (*(uint *)((longlong)param_2 + 0xd54) & 2) << 0xb;
  *(undefined1 *)(*(longlong *)(uVar46 + 1000) + 0x30e9) =
       *(undefined1 *)((longlong)param_2 + 0xd7a);
  *(uint *)(uVar46 + 0x170) = (uint)*(byte *)(param_2 + 0x76);
  *(char *)(uVar46 + 0x174) = (char)param_2[0x1af];
  *(undefined1 *)(uVar46 + 0x175) = *(undefined1 *)((longlong)param_2 + 0xd79);
  plVar24 = (longlong *)FUN_14102b136(param_2,0);
  if (plVar24 != (longlong *)0x0) {
    lVar33 = *(longlong *)(uVar46 + 1000);
    if ((*(char *)(lVar33 + 0x28e4) == '\x01') || (*(char *)(lVar33 + 0x2930) == '\x01')) {
      (**(code **)(*plVar24 + 0xd0))(plVar24,param_1,*(undefined4 *)(lVar33 + 0x292c));
    }
    else {
      (**(code **)(*plVar24 + 0xd8))(plVar24,param_1);
    }
  }
  pplVar36 = local_510;
  *(byte *)((longlong)param_2 + 0xd54) = *(byte *)((longlong)param_2 + 0xd54) & 0xfe;
  local_4e0 = FUN_1447b4020();
  local_4c8 = (void *)0x0;
  uStack_4c0 = 0;
  if ((int)param_2[0x6c] < 2) {
    uVar22 = 0;
    if (param_2[0x15] != 0) {
      local_258[0] = *(longlong **)(param_2[0x15] + 0x18);
      FUN_1400021e4(local_258,local_478);
      if (local_4c8 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar22 = local_478._0_8_;
      local_4c8 = (void *)local_478._0_8_;
      lVar33 = (longlong)(int)local_478._8_4_;
      uStack_4c0 = local_478._8_8_;
      plVar24 = *(longlong **)(param_2[0x15] + 0x18);
      local_4d8 = (void *)0x0;
      local_4d0 = local_478._8_4_;
      local_258[0] = plVar24;
      if (lVar33 == 0) {
        local_4cc = 0;
        iVar19 = 0;
      }
      else {
        FUN_1446dd670(&local_4d8,local_478._8_4_,0);
        memcpy(local_4d8,(void *)uVar22,lVar33 * 2);
        pplVar36 = local_510;
        iVar19 = local_4d0;
      }
      iVar42 = iVar19 + -1;
      if (iVar19 == 0) {
        iVar42 = 0;
      }
      uVar25 = FUN_1402ca054(plVar24,local_4d8,iVar42);
      uVar22 = uVar25;
      if (local_4d8 != (void *)0x0) {
        uVar22 = FUN_1400020a8();
      }
      if ((char)uVar25 == '\0') {
        FUN_1400021e4(local_258,local_478);
        if (local_478._8_4_ == 0) {
          puVar41 = &DAT_149dfb77a;
        }
        else {
          puVar41 = (undefined2 *)local_478._0_8_;
        }
        uVar22 = FUN_1407c8b48(&local_4c8,L" (%s)",puVar41);
        pplVar36 = local_510;
        if (local_478._0_8_ != 0) {
          uVar22 = FUN_1400020a8();
        }
      }
    }
  }
  else {
    uVar22 = FUN_1402980a2(&local_4c8,param_2[0x6b],(int)param_2[0x6c] + -1);
  }
  iVar19 = (*(char *)((longlong)pplVar36 + 0x15d) == '\x02') + 1;
  if (*(char *)((longlong)pplVar36 + 0x15d) == '\0') {
    iVar19 = 0;
  }
  iVar42 = (*(char *)((longlong)pplVar36 + 0x15e) == '\x02') + 1;
  if (*(char *)((longlong)pplVar36 + 0x15e) == '\0') {
    iVar42 = 0;
  }
  cVar18 = *(char *)((longlong)pplVar36 + 0x15f);
  uVar22 = CONCAT71((int7)((ulonglong)uVar22 >> 8),cVar18);
  iVar12 = (cVar18 == '\x02') + 1;
  if (cVar18 == '\0') {
    iVar12 = 0;
  }
  local_529 = (char)param_2[0x71] == '\x01';
  if ((*(byte *)((longlong)param_2 + 0x2aa) & 1) == 0) {
LAB_142fd2ce5:
    local_500 = 0;
  }
  else {
    uVar22 = 0;
    if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) goto LAB_142fd2ce5;
    uVar22 = *(undefined8 *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
    local_500 = uVar22;
  }
  bVar45 = *(byte *)((longlong)pplVar36 + 0x15c);
  if ((char)param_2[0x76] == '\0') {
    local_504 = 0;
  }
  else {
    local_504 = (undefined4)
                CONCAT71((int7)((ulonglong)uVar22 >> 8),*(char *)((longlong)param_2 + 0x2a9) == '\0'
                        );
  }
  local_4e8 = pplVar36[3];
  iVar6 = *(int *)(uVar46 + 0x198);
  local_528 = uVar46;
  if ((longlong)iVar6 != 0) {
    lVar33 = *(longlong *)(uVar46 + 400);
    lVar29 = 0;
    do {
      plVar24 = *(longlong **)(lVar33 + lVar29);
      (**(code **)(*plVar24 + 0x28))(plVar24,uVar46 + 0x98);
      lVar29 = lVar29 + 0x10;
    } while ((longlong)iVar6 * 0x10 != lVar29);
  }
  FUN_143222f6a(local_4a0);
  _Src = local_4c8;
  local_478._8_8_ = local_4e0;
  local_478._0_8_ = local_528;
  local_468 = local_510;
  pvStack_460 = (void *)0x0;
  lVar33 = (longlong)(int)uStack_4c0;
  local_458._0_4_ = (int)uStack_4c0;
  if (lVar33 == 0) {
    local_458 = (undefined1  [8])(uStack_4c0 & 0xffffffff);
  }
  else {
    FUN_1446dd670(&pvStack_460,uStack_4c0 & 0xffffffff,0);
    memcpy(pvStack_460,_Src,lVar33 * 2);
  }
  dVar4 = local_428;
  plStack_450 = local_4e8;
  local_448 = (double)(CONCAT44(iVar19,(int)CONCAT71(local_448._1_7_,bVar45 >> 1)) &
                      0xffffffffffffff01);
  uStack_440 = CONCAT44(iVar12,iVar42);
  local_438._0_4_ = 1;
  local_438._8_8_ = local_500;
  local_428._3_5_ = SUB85(dVar4,3);
  local_428._0_3_ = CONCAT12(local_529,CONCAT11((char)local_504,(char)local_514));
  local_428 = (double)CONCAT44(local_518,(undefined4)local_428);
  uStack_420 = CONCAT44(local_4f0,local_51c);
  local_418 = 0;
  uStack_410 = CONCAT31(uStack_410._1_3_,(char)local_4ec);
  uStack_40c = (undefined4)local_4f8;
  uStack_408 = (undefined4)(local_4f8 >> 0x20);
  lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar19 = *(int *)(lVar33 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar19 != 2) {
      if (iVar19 != 1) goto LAB_142fd2f02;
      DVar20 = FUN_140ad26c0();
      DVar21 = GetCurrentThreadId();
      if (DVar20 == DVar21) goto LAB_142fd2f0b;
      goto LAB_142fd31d4;
    }
LAB_142fd2f0b:
    FUN_142febd44(local_478,&DAT_14ca85100);
  }
  else {
LAB_142fd2f02:
    if (iVar19 == 0x10) goto LAB_142fd2f0b;
LAB_142fd31d4:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar19 = *(int *)(lVar33 + 0xc60), iVar19 == 2))
      goto LAB_142fd2f0b;
      if (iVar19 == 1) {
        DVar20 = FUN_140ad26c0();
        DVar21 = GetCurrentThreadId();
        if (DVar20 == DVar21) goto LAB_142fd2f0b;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar37 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar27 = (uint *)*puVar37;
      if (puVar27 != (uint *)0x0) goto LAB_142fd3459;
      while( true ) {
        uVar28 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar28 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar28 | 1;
          __tlregdtor(&LAB_142fe9a45);
        }
        lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar26 = *(undefined4 **)(lVar33 + 0x310);
        *(undefined8 *)(lVar33 + 0x310) = 0;
        if (puVar26 == (undefined4 *)0x0) {
          puVar26 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar26 = 0xffffffff;
        *(undefined4 **)(puVar26 + 0x10) = puVar26 + 0x16;
        puVar26[0x12] = 0;
        *puVar37 = puVar26;
        FUN_140217a48(puVar37);
        puVar27 = (uint *)*puVar37;
LAB_142fd3459:
        puVar32 = (undefined8 *)(*(longlong *)(puVar27 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar31 = (uint *)(puVar32 + 0x24);
        uVar28 = puVar27[0x12];
        if (puVar31 <= puVar27 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar27 + 0x10) = puVar27 + 0x4000;
          LOCK();
          uVar5 = *puVar27;
          *puVar27 = *puVar27 + uVar28 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar28) != 0xffffffff) break;
          puVar27 = (uint *)*puVar37;
          *puVar27 = 0xffffffff;
          *(uint **)(puVar27 + 0x10) = puVar27 + 0x16;
          puVar27[0x12] = 0;
          *puVar37 = puVar27;
          puVar32 = (undefined8 *)((longlong)puVar27 + 0x5fU & 0xfffffffffffffff8);
          puVar31 = (uint *)(puVar32 + 0x24);
          uVar28 = 0;
          if (puVar31 <= puVar27 + 0x4000) {
            uVar28 = 1;
            goto LAB_142fd34d9;
          }
        }
      }
      uVar28 = uVar28 + 1;
LAB_142fd34d9:
      *(uint **)(puVar27 + 0x10) = puVar31;
      puVar27[0x12] = uVar28;
      iVar19 = 0;
      FUN_1447247dc(puVar32,0);
      *puVar32 = &PTR_FUN_14a2f0e90;
      *(undefined4 *)(puVar32 + 0x15) = local_478._0_4_;
      *(undefined4 *)((longlong)puVar32 + 0xac) = local_478._4_4_;
      *(undefined4 *)(puVar32 + 0x16) = local_478._8_4_;
      *(undefined4 *)((longlong)puVar32 + 0xb4) = local_478._12_4_;
      puVar32[0x17] = local_468;
      puVar32[0x18] = pvStack_460;
      pvStack_460 = (void *)0x0;
      *(undefined4 *)(puVar32 + 0x19) = local_458._0_4_;
      *(undefined4 *)((longlong)puVar32 + 0xcc) = local_458._4_4_;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = plStack_450;
      _local_458 = auVar16 << 0x40;
      plVar24 = (longlong *)(local_458 + 8);
      plVar40 = puVar32 + 0x1a;
      for (lVar33 = 9; lVar33 != 0; lVar33 = lVar33 + -1) {
        *plVar40 = *plVar24;
        plVar24 = plVar24 + 1;
        plVar40 = plVar40 + 1;
      }
      *(undefined4 *)(puVar32 + 0x23) = uStack_408;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar28 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
          uVar46 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
        }
        else {
          uVar46 = 2;
        }
      }
      else {
        iVar19 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar46 = 5;
      }
      if (*(code **)(puVar32[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar32[0xe] + 0x18))(puVar32 + 0xe,puVar32 + 9);
      }
      puVar32[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar32[9] = puVar32;
      puVar32[10] = puVar32;
      lVar33 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar33 == 0) {
        uVar17 = 1;
        if ((char)uVar46 != '\x06') {
          uVar17 = uVar46;
        }
        uVar46 = uVar17;
        uVar22 = 0;
      }
      else {
        if ((char)uVar46 == '\x06') {
          uVar46 = *(ulonglong *)(lVar33 + 0x38) >> 0x3b;
        }
        uVar22 = *(undefined8 *)(lVar33 + 0x30);
      }
      puVar32[0xf] = uVar22;
      puVar32[0x10] = uVar46 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar32 + 0x1c) = iVar19;
      if (puVar32 == (undefined8 *)0x0) {
        local_258[0] = (longlong *)CONCAT71(local_258[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
        UNLOCK();
        local_258[0] = (longlong *)CONCAT71(local_258[0]._1_7_,1);
        FUN_1447439e4(puVar32);
        LOCK();
        piVar1 = (int *)(puVar32 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar32)(puVar32,1);
        }
      }
    }
    else {
      local_258[0] = (longlong *)0x0;
      local_258[2] = (longlong *)FUN_14001cc68(0x80,8);
      *local_258[2] = (longlong)&PTR_LAB_14a2f0e70;
      local_258[2][3] = (longlong)local_468;
      *(undefined4 *)(local_258[2] + 1) = local_478._0_4_;
      *(undefined4 *)((longlong)local_258[2] + 0xc) = local_478._4_4_;
      *(undefined4 *)(local_258[2] + 2) = local_478._8_4_;
      *(undefined4 *)((longlong)local_258[2] + 0x14) = local_478._12_4_;
      local_258[2][4] = (longlong)pvStack_460;
      pvStack_460 = (void *)0x0;
      *(undefined4 *)(local_258[2] + 5) = local_458._0_4_;
      *(undefined4 *)((longlong)local_258[2] + 0x2c) = local_458._4_4_;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = plStack_450;
      _local_458 = auVar15 << 0x40;
      plVar24 = (longlong *)(local_458 + 8);
      plVar40 = local_258[2] + 6;
      for (lVar33 = 9; lVar33 != 0; lVar33 = lVar33 + -1) {
        *plVar40 = *plVar24;
        plVar24 = plVar24 + 1;
        plVar40 = plVar40 + 1;
      }
      *(undefined4 *)(local_258[2] + 0xf) = uStack_408;
      if (local_258[2] + 1 != (longlong *)0x0) {
        local_258[0] = (longlong *)&LAB_142fed41a;
      }
      local_598 = local_258;
      FUN_14005a792(&DAT_14ca9a440,L"CaptureCommand",&DAT_14ca47100);
      if (local_258[0] != (longlong *)0x0) {
        plVar24 = local_258[2];
        if (local_258[2] == (longlong *)0x0) {
          plVar24 = local_238;
        }
        (**(code **)(*plVar24 + 0x10))();
      }
    }
  }
  if (pvStack_460 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1405ee12c(&DAT_14ca966d0,local_4a0);
  FUN_14004710c(local_488);
  if (local_4c8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_142fd3345:
  if ((local_d0 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd386e FUN_142fd386e body=2956 status=ok
// SIG undefined FUN_142fd386e(void)

undefined8
FUN_142fd386e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
             undefined4 param_9,byte param_10,undefined1 param_11,char param_12,undefined8 param_13,
             undefined4 param_14,undefined8 param_15,undefined4 param_16)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  int *piVar20;
  int iVar21;
  byte bVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_688 [32];
  undefined4 local_668;
  byte local_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined8 local_640;
  undefined4 local_638;
  undefined4 local_624;
  longlong *local_620;
  undefined4 local_618;
  undefined8 *local_610;
  undefined4 local_608;
  longlong *local_600;
  undefined4 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined **local_5d0 [9];
  uint local_584;
  uint local_4fc;
  longlong local_4d8;
  uint local_4d0;
  uint local_4cc;
  undefined8 *local_450;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_3f8 [16];
  undefined8 local_378 [15];
  double local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2d0;
  undefined1 local_248;
  undefined1 local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_150;
  undefined4 local_148;
  int local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  longlong local_f0;
  undefined1 local_e0 [44];
  uint local_b4;
  undefined1 *local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_688;
  plVar18 = (longlong *)0x0;
  bVar22 = 0;
  local_2d0 = 0;
  local_248 = 0;
  local_1b8 = 0;
  local_1a8 = DAT_14c8464e0;
  dStack_1a0 = DAT_14c8464e8;
  local_198 = DAT_14c8464f0;
  puVar19 = local_3f8;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar19 = *param_5;
    param_5 = param_5 + 1;
    puVar19 = puVar19 + 1;
  }
  local_408 = param_6[2];
  local_418 = *param_6;
  uStack_410 = param_6[1];
  puVar19 = local_378;
  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar19 = *param_7;
    param_7 = param_7 + 1;
    puVar19 = puVar19 + 1;
  }
  local_150 = 0xffffffff00000000;
  local_2f8 = 0;
  local_190 = 0;
  local_148 = param_9;
  local_2f0 = param_4;
  local_188 = param_4;
  if (param_2 == (longlong *)0x0) {
    local_624 = 1;
  }
  else {
    lVar15 = FUN_140bf2008();
    iVar21 = *(int *)(lVar15 + 0x38);
    if ((*(int *)(param_2[2] + 0x38) < iVar21) ||
       (lVar15 = lVar15 + 0x30,
       *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)iVar21 * 8) != lVar15)) {
      local_624 = (undefined4)CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = param_2;
      if ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0) {
        if ((1.0 <= local_300) && (*(char *)((longlong)param_2 + 0x39c) == '\x01')) {
          FUN_147cefb20(&local_418,
                        CONCAT71((int7)(int3)((uint)iVar21 >> 8),
                                 *(undefined1 *)((longlong)param_2 + 0x39d)));
        }
        uVar14 = *(uint *)((longlong)param_2 + 0xd54);
        if ((((uVar14 & 0x18) != 0) ||
            ((((char)param_2[0x1aa] == '\x01' &&
              ((*(byte *)((longlong)param_2 + 0x2a9) & 0xfc) == 4)) &&
             ((param_2[0x1ac] != 0 || ((param_2[0x1ad] != 0 || (param_2[0x1ae] != 0)))))))) &&
           (param_2[0x1b3] != 0)) {
          if (((char)param_2[0x1aa] == '\x01') &&
             ((*(byte *)((longlong)param_2 + 0x2a9) & 0xfc) == 4)) {
            if ((((uVar14 & 0x20) == 0) || (param_2[0x1ac] != 0)) || (param_2[0x1ad] != 0)) {
              bVar23 = false;
            }
            else {
              bVar23 = param_2[0x1ae] == 0;
            }
          }
          else {
            bVar23 = SUB41((uVar14 & 0x20) >> 5,0);
          }
          bVar22 = bVar23 ^ 1;
          local_624 = 0;
          goto LAB_142fd39d0;
        }
      }
      local_624 = 0;
    }
    bVar22 = 0;
  }
LAB_142fd39d0:
  FUN_14031f39e(&local_138,param_3,param_1,param_2 + 99);
  if (((*(byte *)((longlong)param_2 + 0x2aa) & 1) != 0) ||
     (uVar14 = 0, *(char *)((longlong)param_2 + 0x2ab) == '\x01')) {
    uVar14 = 2;
  }
  local_b4 = (local_b4 & 0xfffffff5) + (uint)(param_10 ^ 1) * 8 | uVar14;
  FUN_14031f528(local_5d0,&local_138);
  local_5d0[0] = &PTR_FUN_14a2b3168;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  local_5f0 = &PTR_FUN_14a291310;
  local_5e8 = 0;
  local_5d8 = 0;
  local_5e0 = param_1;
  FUN_1447ff7a4(*(undefined8 *)(DAT_14cb0d2b0 + 0xff0),&local_138);
  FUN_1400f559c(&local_4d8,&local_138);
  FUN_144750709(CONCAT44(uStack_134,local_138),local_130);
  if (CONCAT44(uStack_134,local_138) != 0) {
    FUN_1400020a8();
  }
  local_610 = &local_418;
  local_608 = 1;
  local_638 = param_16;
  local_640 = param_15;
  local_648 = param_14;
  local_650 = param_13;
  local_660 = param_10;
  local_668 = param_8;
  local_658 = 0;
  FUN_14102a876(&local_600,local_5d0,param_2);
  local_4fc = (uint)*(byte *)((longlong)param_2 + 0x2a9);
  if (bVar22 == 0) {
    bVar22 = *(byte *)(param_2 + 0x62);
    if (bVar22 == 1) {
      if (DAT_14cb0d2b0 == 0) {
        uVar14 = 0x3f800000;
      }
      else {
        FUN_1415e1712(&local_138);
        FUN_1415e18b4(DAT_14cb0d2b0,&local_138);
        if (local_138 == 3) {
          puVar12 = local_e0;
          if (local_a0 != (undefined1 *)0x0) {
            puVar12 = local_a0;
          }
          uVar14 = *(uint *)(puVar12 + (longlong)DAT_14cad82fc * 4);
        }
        else {
          uVar14 = FUN_1415e17ee();
        }
        if (local_a0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
      }
      fVar24 = (float)(**(code **)(*DAT_14ca45160 + 0xb8))();
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca46ca0) && (FUN_144b3d300(&DAT_14ca46ca0), DAT_14ca46ca0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca46c98 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.SecondaryScreenPercentage.GameViewport",1);
        _Init_thread_footer(&DAT_14ca46ca0);
      }
      fVar25 = 0.0;
      if (DAT_14ca46c98 != (longlong *)0x0) {
        fVar25 = (float)(**(code **)(*DAT_14ca46c98 + 0xb8))();
      }
      fVar24 = (float)(~-(uint)(0.0 < fVar24) & uVar14 |
                      (uint)(fVar24 / 100.0) & -(uint)(0.0 < fVar24));
      fVar25 = (float)((uint)((fVar25 / 100.0) * fVar24) & -(uint)(0.0 < fVar25) |
                      ~-(uint)(0.0 < fVar25) & (uint)fVar24);
      fVar24 = (float)(**(code **)(*DAT_14ca45148 + 0xb8))();
      uVar14 = ~-(uint)(0.0 < fVar24) & (uint)fVar25 |
               (uint)((1.0 - fVar25) * fVar24 + fVar25) & -(uint)(0.0 < fVar24);
      bVar22 = *(byte *)(param_2 + 0x62);
    }
    else {
      uVar14 = 0x3f800000;
    }
    local_584 = local_584 & 0xfdffffff | (uint)bVar22 << 0x19;
    local_450 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *local_450 = &PTR_FUN_14a9ad940;
    local_450[1] = local_5d0;
    *(uint *)(local_450 + 2) = uVar14;
    *(uint *)((longlong)local_450 + 0x14) = uVar14;
  }
  else {
    local_584 = local_584 & 0xfdffffff | *(uint *)(plVar18[0x1b3] + 0x4c) & 0x2000000;
    local_450 = (undefined8 *)(**(code **)(**(longlong **)(plVar18[0x1b3] + 0x180) + 0x10))();
  }
  if (((char)local_624 == '\0') && ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caff428) && (FUN_144b3d300(&DAT_14caff428), DAT_14caff428 == -1)) {
      FUN_145f8e32a(&DAT_14caff3a0);
      atexit((_func_5014 *)&LAB_1436691a2);
      _Init_thread_footer(&DAT_14caff428);
    }
    if (DAT_14caff38c != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
      if (DAT_14caff3e0 != DAT_14caff40c) {
        uVar14 = ((uint)((ulonglong)plVar18 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar18 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        puVar17 = &DAT_14caff410;
        if (DAT_14caff418 != (undefined *)0x0) {
          puVar17 = DAT_14caff418;
        }
        iVar21 = *(int *)(puVar17 + (ulonglong)(DAT_14caff420 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4)
        ;
        if (iVar21 != -1) {
LAB_142fd435d:
          lVar15 = DAT_14caff3d8 + (longlong)iVar21 * 0x90;
          if (*(longlong **)(DAT_14caff3d8 + (longlong)iVar21 * 0x90) != plVar18)
          goto code_r0x000142fd4372;
          if (((undefined8 *)(lVar15 + 0x10) != (undefined8 *)0x0 && lVar15 != 0) &&
             (*(longlong *)(lVar15 + 0x70) == DAT_14c872be0)) {
            puVar19 = (undefined8 *)(lVar15 + 0x10);
            piVar20 = &local_138;
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *(undefined8 *)piVar20 = *puVar19;
              puVar19 = puVar19 + 1;
              piVar20 = piVar20 + 2;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
            lVar15 = *local_600;
            piVar20 = &local_138;
            puVar19 = (undefined8 *)(lVar15 + 0x1110);
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar19 = *(undefined8 *)piVar20;
              piVar20 = piVar20 + 2;
              puVar19 = puVar19 + 1;
            }
            *(undefined1 *)(lVar15 + 0x1170) = 1;
            goto LAB_142fd3e3f;
          }
        }
      }
LAB_142fd43e9:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caff3b0);
    }
LAB_142fd3e3f:
    if (*(char *)((longlong)plVar18 + 0xd1c) != '\0') {
      dVar2 = (double)plVar18[0x1a7];
      dVar3 = (double)plVar18[0x1a8];
      dVar4 = (double)plVar18[0x1a9];
      dVar28 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
      if (((dVar28 != 1.0) || (dVar26 = dVar2, dVar27 = dVar3, dVar7 = dVar4, NAN(dVar28))) &&
         (dVar26 = DAT_14c8464e0, dVar27 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar28)) {
        dVar28 = 1.0 / SQRT(dVar28);
        dVar26 = dVar2 * dVar28;
        dVar27 = dVar3 * dVar28;
        dVar7 = dVar4 * dVar28;
      }
      dVar2 = (double)plVar18[0x1a5];
      dVar3 = (double)plVar18[0x1a4];
      dVar4 = (double)plVar18[0x1a6];
      lVar15 = *local_600;
      *(double *)(lVar15 + 0x2400) = dVar26;
      *(double *)(lVar15 + 0x2408) = dVar27;
      *(double *)(lVar15 + 0x2410) = dVar7;
      *(double *)(lVar15 + 0x2418) = dVar4 * dVar7 + dVar3 * dVar26 + dVar2 * dVar27;
      *(undefined1 *)(*local_600 + 0x1f38) = 0;
    }
    *(undefined1 *)(*local_600 + 0x23cc) = param_11;
    if (param_12 != '\0') {
      lVar15 = **(longlong **)(plVar18[0x1b3] + 8);
      *(undefined4 *)(*local_600 + 0x3020) = *(undefined4 *)(lVar15 + 0x3020);
      *(undefined4 *)(*local_600 + 0x3024) = *(undefined4 *)(lVar15 + 0x3024);
      if ((*(longlong *)(*local_600 + 0x10) != 0) && (*(longlong *)(lVar15 + 0x10) != 0)) {
        *(undefined4 *)(*(longlong *)(*local_600 + 0x10) + 0x6dc) =
             *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + 0x6dc);
      }
    }
    if (0 < (int)plVar18[0x1b1]) {
      plVar1 = plVar18 + 0x1b0;
      iVar21 = 0;
      do {
        lVar15 = *plVar1;
        plVar5 = *(longlong **)(lVar15 + 8 + (longlong)iVar21 * 0x10);
        if (plVar5 == (longlong *)0x0) {
LAB_142fd4085:
          FUN_1472dc0fe(plVar1,iVar21);
          iVar21 = iVar21 + -1;
        }
        else {
          iVar10 = (int)plVar5[1];
          do {
            if (iVar10 == 0) goto LAB_142fd4085;
            LOCK();
            iVar8 = (int)plVar5[1];
            bVar23 = iVar10 == iVar8;
            if (bVar23) {
              *(int *)(plVar5 + 1) = iVar10 + 1;
              iVar8 = iVar10;
            }
            iVar10 = iVar8;
            UNLOCK();
          } while (!bVar23);
          plVar6 = *(longlong **)(lVar15 + (longlong)iVar21 * 0x10);
          if (plVar6 == (longlong *)0x0) {
            FUN_1472dc0fe(plVar1,iVar21);
            iVar21 = iVar21 + -1;
          }
          else {
            cVar9 = (**(code **)(*plVar6 + 0xb8))(plVar6,&local_5f0);
            uVar14 = local_4d0;
            if (cVar9 != '\0') {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              lVar15 = (longlong)(int)local_4d0;
              local_4d0 = local_4d0 + 1;
              if (local_4cc < local_4d0) {
                FUN_1456ce192(&local_4d8,uVar14);
              }
              *(longlong **)(local_4d8 + lVar15 * 0x10) = plVar6;
              *(longlong **)(local_4d8 + 8 + lVar15 * 0x10) = plVar5;
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              LOCK();
              plVar6 = plVar5 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar20 = (int *)((longlong)plVar5 + 0xc);
                *piVar20 = *piVar20 + -1;
                UNLOCK();
                if (*piVar20 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar20 = (int *)((longlong)plVar5 + 0xc);
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if (*piVar20 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < (int)plVar18[0x1b1]);
    }
    uVar11 = (**(code **)(*plVar18 + 0x608))(plVar18);
    *(undefined4 *)(*local_600 + 0x30ec) = uVar11;
  }
  local_620 = local_600;
  local_618 = local_5f8;
  FUN_142fd1b38(local_5d0);
  uVar13 = FUN_140f0eb48(local_5d0,0);
  if (local_600 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14005d108(local_5d0);
  if ((local_90 ^ (ulonglong)auStack_688) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
code_r0x000142fd4372:
  iVar21 = *(int *)(lVar15 + 0x80);
  if (iVar21 == -1) goto LAB_142fd43e9;
  goto LAB_142fd435d;
}



// FUNCTION 142fd43fc FUN_142fd43fc body=8358 status=ok
// SIG undefined FUN_142fd43fc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd43fc(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined3 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  char cVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  double *pdVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  void *pvVar30;
  int iVar31;
  uint *puVar32;
  longlong lVar33;
  uint uVar34;
  longlong **pplVar35;
  undefined8 *puVar36;
  undefined2 *puVar37;
  longlong lVar38;
  byte bVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  bool bVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  double dVar54;
  double dVar55;
  undefined1 auStack_16d8 [32];
  longlong **local_16b8;
  longlong *local_16b0;
  undefined1 *local_16a8;
  longlong *local_16a0;
  undefined4 local_1698;
  undefined8 local_1690;
  uint local_1688;
  undefined1 local_1680;
  longlong *local_1678;
  undefined4 local_1670;
  undefined8 local_1668;
  int local_1660;
  byte local_1650;
  byte local_164f;
  byte local_164e;
  byte local_164d;
  uint local_164c;
  longlong *local_1648;
  undefined8 *local_1640;
  ulonglong local_1638;
  int local_162c;
  longlong *local_1628;
  int *local_1620;
  longlong *local_1618;
  undefined8 local_1610;
  undefined8 *local_1608;
  undefined8 *local_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  longlong *local_15d0;
  longlong local_15c8;
  longlong *local_15c0;
  longlong local_15b8;
  undefined4 local_15b0;
  undefined1 *local_15a8;
  undefined4 local_15a0;
  longlong local_1598;
  undefined4 local_1590;
  undefined **local_1588;
  undefined8 local_1580;
  undefined8 *local_1578;
  undefined1 local_1570;
  longlong local_1568;
  longlong lStack_1560;
  longlong local_1558;
  void *local_1548;
  int local_1540;
  undefined4 local_153c;
  void *local_1538;
  ulonglong uStack_1530;
  longlong *local_1528 [3];
  void *local_1510;
  undefined8 local_1508;
  undefined8 local_1500;
  undefined4 uStack_14f8;
  int iStack_14f4;
  undefined1 local_14f0;
  undefined4 uStack_14ef;
  undefined4 uStack_14eb;
  int iStack_14e7;
  longlong local_14e0 [7];
  uint local_14a4;
  undefined1 local_1498 [16];
  double *local_1488;
  undefined8 uStack_1480;
  double local_1478;
  double dStack_1470;
  double local_1468;
  undefined8 uStack_1460;
  undefined1 local_1458 [16];
  double local_1448;
  longlong alStack_1440 [3];
  undefined4 local_1428;
  undefined4 uStack_1424;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  uint local_13c4;
  undefined8 auStack_13c0 [4];
  undefined1 local_13a0 [8];
  undefined1 auStack_1398 [128];
  undefined8 *local_1318;
  undefined1 auStack_1310 [56];
  longlong *local_12d8 [3];
  undefined8 local_12c0;
  undefined4 local_12b8;
  undefined4 uStack_12b4;
  int iStack_12b0;
  undefined8 uStack_12ac;
  undefined4 uStack_12a4;
  undefined8 uStack_12a0;
  undefined1 auStack_1280 [16];
  longlong alStack_1270 [3];
  undefined1 local_1258 [16];
  double local_1248;
  undefined8 uStack_1240;
  undefined1 local_1238 [16];
  double dStack_1228;
  undefined8 uStack_1220;
  undefined1 local_1218 [16];
  double dStack_1208;
  undefined8 uStack_1200;
  longlong local_11f8;
  longlong lStack_11f0;
  undefined4 local_11e8;
  undefined4 uStack_11e4;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  char acStack_11d0 [144];
  char acStack_1140 [440];
  undefined4 local_f88 [924];
  undefined1 local_118 [24];
  undefined1 local_100 [16];
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142fd4412;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_16d8;
  bVar39 = *(byte *)((longlong)param_2 + 0x2aa);
  if ((bVar39 & 0x10) == 0) {
    *(byte *)((longlong)param_2 + 0x2aa) = bVar39 & 0xe3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    FUN_140e8e738(local_1258);
    iVar16 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_1258._0_8_);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
    uVar29 = (uint)(bVar39 >> 2 & 1);
    if (iVar16 < 1) {
      uVar29 = 0;
    }
  }
  else {
    *(byte *)((longlong)param_2 + 0x2aa) = bVar39 & 0xef;
    uVar29 = 0;
  }
  lVar2 = param_2[0x4c];
  lVar41 = param_2[0x4d];
  lVar21 = param_2[0x4e];
  if ((char)param_2[0x72] == '\x01') {
    local_15e8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_15e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    pdVar19 = (double *)&DAT_14c846510;
    uVar52 = (undefined4)DAT_14c846520;
    uVar53 = (undefined4)((ulonglong)DAT_14c846520 >> 0x20);
    lVar38 = DAT_14c8464f0;
  }
  else {
    pdVar19 = (double *)(param_2 + 0x50);
    uVar52 = (undefined4)param_2[0x52];
    uVar53 = *(undefined4 *)((longlong)param_2 + 0x294);
    lVar38 = lVar21;
    local_15e8 = lVar2;
    uStack_15e0 = lVar41;
  }
  plVar22 = (longlong *)param_2[0x71];
  if (plVar22 == (longlong *)0x0) goto LAB_142fd5f73;
  dVar47 = (double)param_2[0x48];
  dVar9 = (double)param_2[0x49];
  dVar4 = (double)param_2[0x4a];
  dVar50 = (double)param_2[0x4b];
  dVar5 = *pdVar19;
  dVar7 = pdVar19[1];
  local_1618 = (longlong *)FUN_1447b4020(plVar22);
  local_1538 = (void *)0x0;
  uStack_1530 = 0;
  if ((int)param_2[0x6c] < 2) {
    if (param_2[0x15] != 0) {
      local_1498._0_8_ = *(undefined8 *)(param_2[0x15] + 0x18);
      FUN_1400021e4();
      if (local_1538 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar24 = local_1258._0_8_;
      local_1538 = (void *)local_1258._0_8_;
      lVar33 = (longlong)(int)local_1258._8_4_;
      uStack_1530 = local_1258._8_8_;
      uVar25 = *(undefined8 *)(param_2[0x15] + 0x18);
      local_1498._0_8_ = uVar25;
      local_1548 = (void *)0x0;
      local_1540 = local_1258._8_4_;
      if (lVar33 == 0) {
        local_153c = 0;
        iVar16 = 0;
      }
      else {
        FUN_1446dd670(&local_1548,local_1258._8_4_,0);
        memcpy(local_1548,(void *)uVar24,lVar33 * 2);
        iVar16 = local_1540;
      }
      iVar31 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar31 = 0;
      }
      cVar15 = FUN_1402ca054(uVar25,local_1548,iVar31);
      if (local_1548 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar15 == '\0') {
        FUN_1400021e4(local_1498,local_1258);
        if (local_1258._8_4_ == 0) {
          puVar37 = &DAT_149dfb77a;
        }
        else {
          puVar37 = (undefined2 *)local_1258._0_8_;
        }
        FUN_1407c8b48(&local_1538,L" (%s)",puVar37);
        if (local_1258._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    FUN_1402980a2(&local_1538,param_2[0x6b],(int)param_2[0x6c] + -1);
  }
  local_164f = *(byte *)((longlong)plVar22 + 0x155) >> 3 & 1;
  local_162c = 0;
  if (*(char *)((longlong)plVar22 + 0x156) != '\0') {
    local_162c = (*(char *)((longlong)plVar22 + 0x156) == '\x02') + 1;
  }
  fVar45 = (float)(**(code **)(*plVar22 + 0x358))(plVar22);
  uVar42 = (ulonglong)(uint)(int)fVar45;
  fVar46 = (float)(**(code **)(*plVar22 + 0x350))(plVar22);
  local_1648 = (longlong *)(ulonglong)(uint)(int)fVar46;
  local_1610 = CONCAT44((int)fVar45,(int)fVar46);
  local_1568 = param_2[0x4c];
  lStack_1560 = param_2[0x4d];
  local_1558 = param_2[0x4e];
  bVar43 = DAT_14c872be0 != DAT_14c761420;
  bVar44 = DAT_14c872be0 == param_2[0x6f];
  DAT_14c761420 = DAT_14c872be0;
  param_2[0x6f] = DAT_14c872be0;
  local_1650 = bVar44 || bVar43;
  uVar40 = 0xfb >> (*(byte *)((longlong)param_2 + 0x2a9) & 0x1f);
  uVar8 = (undefined3)(uVar40 >> 8);
  bVar39 = (byte)uVar40 | 9 < *(byte *)((longlong)param_2 + 0x2a9);
  local_164c = CONCAT31(uVar8,bVar39);
  local_1638 = uVar42;
  local_15f8 = lVar38;
  if (DAT_14c76099d == '\0') {
    if ((char)uVar29 == '\0') {
      local_1600 = (undefined8 *)0x0;
    }
    else {
      local_1600 = (undefined8 *)FUN_14001cc68(8,0x10);
      *local_1600 = 0;
    }
    dVar48 = dVar9 + dVar9;
    dVar51 = dVar4 + dVar4;
    dVar6 = dVar47 * (dVar47 + dVar47);
    uStack_15f0 = 0x3ff0000000000000;
    dVar3 = (1.0 - (dVar4 * dVar51 + dVar9 * dVar48)) * dVar5;
    dVar4 = (1.0 - (dVar4 * dVar51 + dVar6)) * dVar7;
    dVar49 = (dVar47 + dVar47) * dVar50;
    dVar54 = (dVar48 * dVar47 + dVar51 * dVar50) * dVar5;
    dVar55 = (dVar51 * dVar9 + dVar49) * dVar7;
    dVar7 = (dVar48 * dVar47 - dVar51 * dVar50) * dVar7;
    dVar49 = (dVar51 * dVar9 - dVar49) * (double)CONCAT44(uVar53,uVar52);
    dVar5 = (dVar47 * dVar51 - dVar48 * dVar50) * dVar5;
    local_15c8 = 0x527800b400;
    dVar50 = (dVar48 * dVar50 + dVar47 * dVar51) * (double)CONCAT44(uVar53,uVar52);
    local_164d = ABS(dVar5) <= 9.99999993922529e-09 &
                 -(ABS(dVar3) <= 9.99999993922529e-09) & -(ABS(dVar54) <= 9.99999993922529e-09);
    dVar47 = (1.0 - (dVar6 + dVar9 * dVar48)) * (double)CONCAT44(uVar53,uVar52);
    local_15c0 = param_2 + 0x74;
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_1640 = (undefined8 *)(lVar21 + 0x308);
    local_1608 = (undefined8 *)(lVar21 + 0x310);
    local_164e = (((9.99999993922529e-09 < ABS(dVar50) || 9.99999993922529e-09 < ABS(dVar55)) ||
                  9.99999993922529e-09 < ABS(dVar49)) || 9.99999993922529e-09 < ABS(dVar47)) |
                 -(9.99999993922529e-09 < ABS(dVar4)) | -(9.99999993922529e-09 < ABS(dVar7));
    local_1620 = (int *)(lVar21 + 0xc60);
    local_15d0 = (longlong *)(lVar21 + 0x2b8);
    local_164c = CONCAT31(uVar8,bVar39) & 0xffffff01;
    iVar16 = 0;
    local_1648 = param_2;
    local_1628 = plVar22;
    uVar29 = local_164c;
    do {
      local_1638 = CONCAT44(local_1638._4_4_,iVar16);
      if ((char)param_2[0x72] == '\x01') {
        local_1258._8_4_ = SUB84(dVar54,0);
        local_1258._0_8_ = dVar3;
        local_1258._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
        uStack_1240 = 0;
        local_1238._8_4_ = SUB84(dVar4,0);
        local_1238._0_8_ = dVar7;
        local_1238._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_1220 = 0;
        local_1218._8_4_ = SUB84(dVar49,0);
        local_1218._0_8_ = dVar50;
        local_1218._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        uStack_1200 = 0;
        local_11f8 = local_15e8;
        lStack_11f0 = uStack_15e0;
        local_11e8 = (undefined4)local_15f8;
        uStack_11e4 = local_15f8._4_4_;
        uStack_11e0 = (undefined4)uStack_15f0;
        uStack_11dc = uStack_15f0._4_4_;
        local_1248 = dVar5;
        dStack_1228 = dVar55;
        dStack_1208 = dVar47;
        if ((local_164d == 0) || ((local_164e & 1) != 0)) {
          FUN_14007522e(local_1498,local_1258);
        }
        else {
          puVar36 = &DAT_14c846400;
          puVar20 = (undefined8 *)local_1498;
          for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
            *puVar20 = *puVar36;
            puVar36 = puVar36 + 1;
            puVar20 = puVar20 + 1;
          }
        }
        iVar16 = (int)local_1638;
        FUN_142fe8f58(local_1258,local_1638 & 0xffffffff);
        FUN_1447fea8d(local_1528,local_1498,local_1258);
      }
      else {
        FUN_142fe8f58(local_1258,iVar16);
        puVar36 = (undefined8 *)local_1258;
        pplVar35 = local_1528;
        for (lVar21 = 0x10; lVar21 != 0; lVar21 = lVar21 + -1) {
          *pplVar35 = (longlong *)*puVar36;
          puVar36 = puVar36 + 1;
          pplVar35 = pplVar35 + 1;
        }
      }
      uVar25 = local_1610;
      FUN_1472d93be(local_1610,0x3f490fdb,DAT_14c75b140,local_1258);
      plVar22 = local_1648;
      uVar24 = (**(code **)(*local_1648 + 0x5d8))(local_1648);
      lVar2 = plVar22[0x18c];
      uVar52 = *(undefined4 *)((longlong)plVar22 + 0x2f4);
      lVar41 = FUN_1447b4020(local_1628);
      lVar21 = lVar41 + 0x50;
      if (lVar41 == 0) {
        lVar21 = 0;
      }
      local_1678 = local_15c0;
      local_1680 = 0;
      local_1688 = local_1688 & 0xffffff00;
      local_1690 = CONCAT71(local_1690._1_7_,(char)uVar29);
      local_16a0 = (longlong *)CONCAT44(local_16a0._4_4_,uVar52);
      local_16b0 = &local_1568;
      local_1698 = 0x42b40000;
      local_16b8 = local_1528;
      local_16a8 = local_1258;
      local_1670 = (int)lVar2;
      local_1668 = uVar24;
      local_1660 = iVar16;
      plVar22 = (longlong *)FUN_142fd386e(param_1,plVar22,lVar21,uVar25);
      *(byte *)(plVar22 + 0x116) = iVar16 == 0 & local_1650;
      lVar21 = plVar22[0x33];
      if ((longlong)(int)lVar21 != 0) {
        lVar2 = plVar22[0x32];
        lVar41 = 0;
        do {
          (**(code **)(**(longlong **)(lVar2 + lVar41) + 0x28))
                    (*(longlong **)(lVar2 + lVar41),plVar22 + 0x13);
          lVar41 = lVar41 + 0x10;
        } while ((longlong)(int)lVar21 * 0x10 != lVar41);
      }
      FUN_1407c8b48(&local_1538,L" [%d]",iVar16);
      FUN_143222f6a(local_118);
      pvVar30 = local_1538;
      local_12d8[1] = local_1618;
      local_12d8[2] = (longlong *)0x0;
      lVar21 = (longlong)(int)uStack_1530;
      local_12c0 = CONCAT44(local_12c0._4_4_,(int)uStack_1530);
      local_12d8[0] = plVar22;
      if (lVar21 == 0) {
        local_12c0 = uStack_1530 & 0xffffffff;
      }
      else {
        FUN_1446dd670(local_12d8 + 2,uStack_1530 & 0xffffffff,0);
        memcpy(local_12d8[2],pvVar30,lVar21 * 2);
      }
      local_12b8 = (int)local_1638;
      uStack_12b4 = CONCAT31(uStack_12b4._1_3_,local_164f);
      iStack_12b0 = local_162c;
      uStack_12ac = &DAT_100000001;
      uStack_12a4 = 1;
      uStack_12a0 = local_1600;
      iVar16 = *local_1620;
      param_2 = local_1648;
      if (DAT_14c86a9fc == 0) {
        if (iVar16 != 2) {
          if (iVar16 == 1) {
            DVar17 = FUN_140ad26c0();
            DVar18 = GetCurrentThreadId();
            bVar43 = DVar17 == DVar18;
          }
          else {
            bVar43 = iVar16 == 0x10;
          }
          param_2 = local_1648;
          if (!bVar43) goto LAB_142fd562f;
        }
LAB_142fd55c4:
        FUN_142fed600(local_12d8,&DAT_14ca85100);
        uVar29 = local_164c;
      }
      else {
        if (iVar16 == 0x10) goto LAB_142fd55c4;
LAB_142fd562f:
        puVar36 = local_1640;
        param_2 = local_1648;
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*local_1620 == 2)) goto LAB_142fd55c4;
          if (*local_1620 == 1) {
            DVar17 = FUN_140ad26c0();
            DVar18 = GetCurrentThreadId();
            if (DVar17 == DVar18) goto LAB_142fd55c4;
          }
        }
        uVar29 = local_164c;
        if (DAT_14ca9a43c == 0) {
          puVar27 = (uint *)*puVar36;
          if (puVar27 != (uint *)0x0) goto LAB_142fd5895;
          do {
            uVar40 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar40 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar40 | 1;
              __tlregdtor(&LAB_142fe9a45);
            }
            puVar26 = (undefined4 *)*local_1608;
            *local_1608 = 0;
            if (puVar26 == (undefined4 *)0x0) {
              puVar26 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar26 = 0xffffffff;
            *(undefined4 **)(puVar26 + 0x10) = puVar26 + 0x16;
            puVar26[0x12] = 0;
            *puVar36 = puVar26;
            FUN_140217a48(puVar36);
            puVar27 = (uint *)*puVar36;
LAB_142fd5895:
            uVar42 = *(longlong *)(puVar27 + 0x10) + 7;
            uVar40 = puVar27[0x12];
            while( true ) {
              puVar20 = (undefined8 *)(uVar42 & 0xfffffffffffffff8);
              if (puVar20 + 0x1d <= puVar27 + 0x4000) {
                *(undefined8 **)(puVar27 + 0x10) = puVar20 + 0x1d;
                puVar27[0x12] = uVar40 + 1;
                FUN_1447247dc(puVar20,0);
                *puVar20 = &PTR_FUN_14a2f0ec0;
                puVar20[0x15] = local_12d8[0];
                puVar20[0x16] = local_12d8[1];
                puVar20[0x17] = local_12d8[2];
                local_12d8[2] = (longlong *)0x0;
                *(undefined4 *)(puVar20 + 0x18) = (undefined4)local_12c0;
                *(undefined4 *)((longlong)puVar20 + 0xc4) = local_12c0._4_4_;
                local_12c0 = 0;
                *(undefined4 *)(puVar20 + 0x1b) = uStack_12ac._4_4_;
                *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_12a4;
                *(undefined4 *)(puVar20 + 0x1c) = (undefined4)uStack_12a0;
                *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_12a0._4_4_;
                *(undefined4 *)(puVar20 + 0x19) = local_12b8;
                *(undefined4 *)((longlong)puVar20 + 0xcc) = uStack_12b4;
                *(int *)(puVar20 + 0x1a) = iStack_12b0;
                *(undefined4 *)((longlong)puVar20 + 0xd4) = (undefined4)uStack_12ac;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar40 = DAT_14c7585c8 >> 10 & 3;
                  iVar16 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar40 < 2) {
                    uVar42 = (ulonglong)(byte)(&DAT_149e38edc)[uVar40];
                    iVar16 = 0;
                  }
                  else {
                    uVar42 = 2;
                  }
                }
                else {
                  iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar42 = 5;
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
                lVar21 = *local_15d0;
                if (lVar21 == 0) {
                  if ((char)uVar42 == '\x06') {
                    uVar42 = 1;
                  }
                  uVar25 = 0;
                }
                else {
                  if ((char)uVar42 == '\x06') {
                    uVar42 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
                  }
                  uVar25 = *(undefined8 *)(lVar21 + 0x30);
                }
                puVar20[0xf] = uVar25;
                puVar20[0x10] = (uVar42 << 0x3b) + local_15c8 | 0xc000000000000000;
                *(int *)((longlong)puVar20 + 0x1c) = iVar16;
                if (puVar20 == (undefined8 *)0x0) {
                  local_1498[0] = 1;
                  FUN_1447439e4(0,local_1498);
                }
                else {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                  local_1498[0] = 1;
                  FUN_1447439e4(puVar20,local_1498);
                  LOCK();
                  piVar1 = (int *)(puVar20 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar20)(puVar20,1);
                  }
                }
                goto LAB_142fd5761;
              }
              *(uint **)(puVar27 + 0x10) = puVar27 + 0x4000;
              LOCK();
              uVar28 = *puVar27;
              *puVar27 = *puVar27 + uVar40 + 1;
              UNLOCK();
              if ((uVar28 ^ uVar40) != 0xffffffff) break;
              puVar27 = (uint *)*puVar36;
              *puVar27 = 0xffffffff;
              *(uint **)(puVar27 + 0x10) = puVar27 + 0x16;
              puVar27[0x12] = 0;
              *puVar36 = puVar27;
              uVar42 = (longlong)puVar27 + 0x5f;
              uVar40 = 0;
            }
          } while( true );
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_1498._8_8_;
        local_1498 = auVar10 << 0x40;
        local_1488 = (double *)0x0;
        local_1488 = (double *)FUN_14001cc68(0x48,8);
        *local_1488 = (double)&PTR_LAB_14a2f0ea0;
        local_1488[1] = (double)local_12d8[0];
        local_1488[2] = (double)local_12d8[1];
        local_1488[3] = (double)local_12d8[2];
        local_12d8[2] = (longlong *)0x0;
        *(undefined4 *)(local_1488 + 4) = (undefined4)local_12c0;
        *(undefined4 *)((longlong)local_1488 + 0x24) = local_12c0._4_4_;
        local_12c0 = 0;
        *(undefined4 *)(local_1488 + 7) = uStack_12ac._4_4_;
        *(undefined4 *)((longlong)local_1488 + 0x3c) = uStack_12a4;
        *(undefined4 *)(local_1488 + 8) = (undefined4)uStack_12a0;
        *(undefined4 *)((longlong)local_1488 + 0x44) = uStack_12a0._4_4_;
        *(undefined4 *)(local_1488 + 5) = local_12b8;
        *(undefined4 *)((longlong)local_1488 + 0x2c) = uStack_12b4;
        *(int *)(local_1488 + 6) = iStack_12b0;
        *(undefined4 *)((longlong)local_1488 + 0x34) = (undefined4)uStack_12ac;
        if (local_1488 + 1 != (double *)0x0) {
          local_1498._0_8_ = &LAB_142fed888;
        }
        local_16b8 = (longlong **)local_1498;
        FUN_14005a792(&DAT_14ca9a440,L"CaptureCommand",&DAT_14ca47104);
        if ((longlong *)local_1498._0_8_ != (longlong *)0x0) {
          pdVar19 = local_1488;
          if (local_1488 == (double *)0x0) {
            pdVar19 = &local_1478;
          }
          (**(code **)((longlong)*pdVar19 + 0x10))();
        }
      }
LAB_142fd5761:
      if (local_12d8[2] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar40 = (int)uStack_1530 - 1;
      if ((int)uStack_1530 == 0) {
        uVar40 = 0;
      }
      uVar28 = 4;
      if (4 < (int)uVar40) {
        uVar28 = uVar40;
      }
      uVar28 = uVar28 - 4;
      uVar40 = uVar40 - uVar28;
      uVar34 = 4;
      if ((int)uVar40 < 4) {
        uVar34 = uVar40;
      }
      if ((int)uVar34 < 1) {
        uVar34 = 0;
      }
      if (0 < (int)uVar40) {
        iVar16 = (int)uStack_1530 - (uVar34 + uVar28);
        if (iVar16 != 0) {
          pvVar30 = (void *)((ulonglong)uVar28 * 2 + (longlong)local_1538);
          memmove(pvVar30,(void *)((longlong)pvVar30 + (ulonglong)uVar34 * 2),(longlong)iVar16 * 2);
        }
        uStack_1530 = CONCAT44(uStack_1530._4_4_,(int)uStack_1530 - uVar34);
      }
      FUN_1405ee12c(&DAT_14ca966d0,local_118);
      FUN_14004710c(local_100);
      iVar16 = (int)local_1638 + 1;
    } while (iVar16 != 6);
  }
  else {
    local_1628 = (longlong *)CONCAT44(local_1628._4_4_,uVar29);
    lVar38 = 0x288;
    do {
      *(longlong *)((longlong)local_14e0 + lVar38 + 0x10) = DAT_14c8464f0;
      *(ulonglong *)((longlong)local_14e0 + lVar38) =
           CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(ulonglong *)((longlong)local_14e0 + lVar38 + 8) =
           CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar36 = &DAT_14c846400;
      puVar20 = (undefined8 *)((longlong)local_14e0 + lVar38 + 0x20);
      for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
        *puVar20 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar20 = puVar20 + 1;
      }
      puVar36 = &DAT_14c846400;
      puVar20 = (undefined8 *)((longlong)alStack_1440 + lVar38);
      for (lVar33 = 0x10; lVar33 != 0; lVar33 = lVar33 + -1) {
        *puVar20 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar20 = puVar20 + 1;
      }
      auStack_1398[lVar38] = 0;
      auStack_1310[lVar38] = 0;
      auStack_1280[lVar38] = 0;
      *(undefined8 *)((longlong)auStack_13c0 + lVar38) = 0;
      *(undefined8 *)((longlong)auStack_13c0 + lVar38 + 8) = 0;
      *(ulonglong *)((longlong)alStack_1270 + lVar38) =
           CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(ulonglong *)((longlong)alStack_1270 + lVar38 + 8) =
           CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(longlong *)((longlong)alStack_1270 + lVar38 + 0x10) = DAT_14c8464f0;
      *(undefined8 *)(local_1258 + lVar38) = 0;
      *(undefined8 *)(local_1258 + lVar38 + 8) = 0;
      lVar38 = lVar38 + 0x2e0;
    } while (lVar38 != 0x13c8);
    dVar51 = dVar9 + dVar9;
    dVar48 = dVar4 + dVar4;
    dVar6 = dVar47 * (dVar47 + dVar47);
    uStack_15f0 = 0x3ff0000000000000;
    dVar3 = (1.0 - (dVar4 * dVar48 + dVar9 * dVar51)) * dVar5;
    dVar4 = (1.0 - (dVar4 * dVar48 + dVar6)) * dVar7;
    dVar49 = (dVar47 + dVar47) * dVar50;
    dVar54 = (dVar51 * dVar47 + dVar48 * dVar50) * dVar5;
    dVar55 = (dVar48 * dVar9 + dVar49) * dVar7;
    dVar7 = (dVar51 * dVar47 - dVar48 * dVar50) * dVar7;
    dVar49 = (dVar48 * dVar9 - dVar49) * (double)CONCAT44(uVar53,uVar52);
    pdVar19 = (double *)((dVar47 * dVar48 - dVar51 * dVar50) * dVar5);
    dVar47 = (dVar51 * dVar50 + dVar47 * dVar48) * (double)CONCAT44(uVar53,uVar52);
    local_1620 = (int *)CONCAT71(local_1620._1_7_,
                                 ABS((double)pdVar19) <= 9.99999993922529e-09 &
                                 -(ABS(dVar3) <= 9.99999993922529e-09) &
                                 -(ABS(dVar54) <= 9.99999993922529e-09));
    dVar5 = (1.0 - (dVar6 + dVar9 * dVar51)) * (double)CONCAT44(uVar53,uVar52);
    puVar26 = local_f88;
    uVar42 = 0;
    local_1640 = param_1;
    do {
      if ((char)param_2[0x72] == '\x01') {
        local_1498._8_4_ = SUB84(dVar54,0);
        local_1498._0_8_ = dVar3;
        local_1498._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
        uStack_1480 = 0;
        uStack_1460 = 0;
        local_1458._8_4_ = SUB84(dVar49,0);
        local_1458._0_8_ = dVar47;
        local_1458._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        alStack_1440[0] = 0;
        alStack_1440[1] = local_15e8;
        alStack_1440[2] = uStack_15e0;
        local_1428 = (undefined4)local_15f8;
        uStack_1424 = local_15f8._4_4_;
        uStack_1420 = (undefined4)uStack_15f0;
        uStack_141c = uStack_15f0._4_4_;
        local_1488 = pdVar19;
        local_1478 = dVar7;
        dStack_1470 = dVar4;
        local_1468 = dVar55;
        local_1448 = dVar5;
        if (((char)local_1620 == '\0') ||
           ((((9.99999993922529e-09 < ABS(dVar47) || 9.99999993922529e-09 < ABS(dVar55)) ||
             9.99999993922529e-09 < ABS(dVar49)) || 9.99999993922529e-09 < ABS(dVar5)) ||
            (9.99999993922529e-09 < ABS(dVar4) || 9.99999993922529e-09 < ABS(dVar7)))) {
          FUN_14007522e(local_1528,local_1498);
        }
        else {
          puVar36 = &DAT_14c846400;
          pplVar35 = local_1528;
          for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
            *pplVar35 = (longlong *)*puVar36;
            puVar36 = puVar36 + 1;
            pplVar35 = pplVar35 + 1;
          }
        }
        FUN_142fe8f58(local_1498,uVar42 & 0xffffffff);
        FUN_1447fea8d(local_12d8,local_1528,local_1498);
      }
      else {
        FUN_142fe8f58(local_1498,uVar42 & 0xffffffff);
        puVar36 = (undefined8 *)local_1498;
        pplVar35 = local_12d8;
        for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
          *pplVar35 = (longlong *)*puVar36;
          puVar36 = puVar36 + 1;
          pplVar35 = pplVar35 + 1;
        }
      }
      FUN_1472d93be(local_1610,0x3f490fdb,DAT_14c75b140,local_1498);
      iVar16 = (&DAT_14a2ea864)[uVar42 * 2] * (int)local_1638;
      iVar31 = (&DAT_14a2ea860)[uVar42 * 2] * (int)local_1648;
      pplVar35 = local_12d8;
      puVar36 = (undefined8 *)(puVar26 + -0xac);
      for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
        *puVar36 = *pplVar35;
        pplVar35 = pplVar35 + 1;
        puVar36 = puVar36 + 1;
      }
      *(longlong *)(puVar26 + -0xb4) = lVar2;
      *(longlong *)(puVar26 + -0xb2) = lVar41;
      *(longlong *)(puVar26 + -0xb0) = lVar21;
      puVar36 = (undefined8 *)local_1498;
      puVar20 = (undefined8 *)(puVar26 + -0x8c);
      for (lVar38 = 0x10; lVar38 != 0; lVar38 = lVar38 + -1) {
        *puVar20 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar20 = puVar20 + 1;
      }
      *(undefined8 *)(puVar26 + -2) = 0xffffffff00000000;
      *(ulonglong *)(puVar26 + -0x6c) = CONCAT44(iVar16,iVar31);
      *(ulonglong *)(puVar26 + -0x6a) = CONCAT44(iVar16 + (int)local_1638,iVar31 + (int)local_1648);
      *puVar26 = 0x42b40000;
      uVar42 = uVar42 + 1;
      puVar26 = puVar26 + 0xb8;
    } while (uVar42 != 6);
    puVar20 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    plVar22 = local_1618;
    uVar29 = 0;
    puVar20[1] = 0;
    *puVar20 = &PTR_FUN_14a2f0760;
    puVar20[3] = L"UnknownTexture";
    *(undefined4 *)(puVar20 + 4) = 1;
    puVar20[7] = 0;
    *(undefined2 *)(puVar20 + 8) = 0;
    *(undefined8 *)((longlong)puVar20 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar20 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar20 + 0x44) = DAT_14c967818;
    *(undefined8 *)((longlong)puVar20 + 0x4c) = 0xff010000010000;
    puVar20[0xb] = 0;
    puVar20[0xc] = 0;
    puVar20[2] = local_1618;
    iVar16 = (**(code **)(*local_1618 + 0x30))(local_1618);
    lVar21 = (**(code **)(*plVar22 + 0x38))(plVar22);
    puVar36 = local_1640;
    uVar13 = DAT_14ca83aa4;
    uVar12 = uRam000000014ca83aa0;
    uVar11 = uRam000000014ca83a9c;
    uVar53 = _DAT_14ca83a98;
    uVar52 = DAT_14ca83a94;
    puVar20[3] = L"UnknownTexture2D";
    *(undefined4 *)(puVar20 + 4) = uVar52;
    *(undefined4 *)((longlong)puVar20 + 0x24) = uVar53;
    *(undefined4 *)(puVar20 + 5) = uVar11;
    *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar12;
    *(undefined4 *)(puVar20 + 6) = uVar13;
    puVar20[7] = 9;
    *(undefined2 *)(puVar20 + 8) = 0;
    *(ulonglong *)((longlong)puVar20 + 0x44) = (ulonglong)(uint)(iVar16 * 3) | lVar21 << 0x21;
    *(undefined8 *)((longlong)puVar20 + 0x4c) = 0xff010100010000;
    FUN_14031f39e(local_1528,puVar20,local_1640,param_2 + 99);
    bVar39 = (byte)local_164c;
    if (((*(byte *)((longlong)param_2 + 0x2aa) & 1) != 0) ||
       (*(char *)((longlong)param_2 + 0x2ab) == '\x01')) {
      uVar29 = 2;
    }
    local_14a4 = (local_14a4 & 0xfffffff5) + ((byte)~bVar39 & 1) * 8 | uVar29;
    FUN_14031f528(local_1498,local_1528);
    local_1498._0_8_ = &PTR_FUN_14a2b3168;
    if (local_14e0[0] != 0) {
      FUN_1400020a8();
    }
    local_1588 = &PTR_FUN_14a291310;
    local_1580 = 0;
    local_1578 = puVar36;
    local_1570 = 0;
    FUN_1447ff7a4(*(undefined8 *)(DAT_14cb0d2b0 + 0xff0),local_1528);
    FUN_1400f559c(local_13a0,local_1528);
    FUN_144750709(local_1528[0],(ulonglong)local_1528[1] & 0xffffffff);
    if (local_1528[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_1690 = (**(code **)(*param_2 + 0x5d8))(param_2);
    local_1698 = (undefined4)param_2[0x18c];
    local_16a0 = param_2 + 0x74;
    local_15a8 = local_1258;
    local_15a0 = 6;
    local_1688 = 6;
    local_16b0 = (longlong *)(CONCAT71(local_16b0._1_7_,bVar39) & 0xffffffffffffff01);
    local_16b8 = (longlong **)CONCAT44(local_16b8._4_4_,*(undefined4 *)((longlong)param_2 + 0x2f4));
    local_16a8 = (undefined1 *)((ulonglong)local_16a8 & 0xffffffffffffff00);
    FUN_14102a876(&local_1598,local_1498,param_2);
    local_13c4 = (uint)*(byte *)((longlong)param_2 + 0x2a9);
    local_1458[0xf] = local_1458[0xf] & 0xfd;
    local_1318 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *local_1318 = &PTR_FUN_14a9ad940;
    local_1318[1] = local_1498;
    local_1318[2] = &DAT_3f8000003f800000;
    local_15b8 = local_1598;
    local_15b0 = local_1590;
    FUN_142fd1b38(local_1498);
    plVar22 = (longlong *)FUN_140f0eb48(local_1498,0);
    plVar23 = (longlong *)FUN_14102b136(param_2,0);
    if (plVar23 != (longlong *)0x0) {
      lVar21 = plVar22[0x7d];
      if ((*(char *)(lVar21 + 0x28e4) == '\x01') || (*(char *)(lVar21 + 0x2930) == '\x01')) {
        (**(code **)(*plVar23 + 0xd0))(plVar23,puVar36,*(undefined4 *)(lVar21 + 0x292c));
      }
      else {
        (**(code **)(*plVar23 + 0xd8))(plVar23,puVar36);
      }
    }
    *(byte *)(plVar22 + 0x116) = local_1650;
    lVar21 = plVar22[0x33];
    if ((longlong)(int)lVar21 != 0) {
      lVar2 = plVar22[0x32];
      lVar41 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar41) + 0x28))
                  (*(longlong **)(lVar2 + lVar41),plVar22 + 0x13);
        lVar41 = lVar41 + 0x10;
      } while ((longlong)(int)lVar21 * 0x10 != lVar41);
    }
    FUN_143222f6a(local_118);
    pvVar30 = local_1538;
    local_1528[2] = local_1618;
    local_1510 = (void *)0x0;
    lVar21 = (longlong)(int)uStack_1530;
    local_1508 = CONCAT44(local_1508._4_4_,(int)uStack_1530);
    local_1528[0] = plVar22;
    local_1528[1] = puVar20;
    if (lVar21 == 0) {
      local_1508 = uStack_1530 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_1510,uStack_1530 & 0xffffffff,0);
      memcpy(local_1510,pvVar30,lVar21 * 2);
    }
    local_1500 = local_1610;
    uStack_14f8 = CONCAT31(uStack_14f8._1_3_,local_164f);
    iStack_14f4 = local_162c;
    local_14f0 = 1;
    uStack_14ef = 0x1000000;
    uStack_14eb = 0x1000000;
    iStack_14e7 = (uint)(byte)local_1628 << 0x18;
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar16 = *(int *)(lVar21 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar16 != 2) {
        if (iVar16 != 1) goto LAB_142fd5d67;
        DVar17 = FUN_140ad26c0();
        DVar18 = GetCurrentThreadId();
        if (DVar17 == DVar18) goto LAB_142fd5d6c;
        goto LAB_142fd5da0;
      }
LAB_142fd5d6c:
      FUN_142feda6e(local_1528,&DAT_14ca85100);
    }
    else {
LAB_142fd5d67:
      if (iVar16 == 0x10) goto LAB_142fd5d6c;
LAB_142fd5da0:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar21 + 0xc60), iVar16 == 2))
        goto LAB_142fd5d6c;
        if (iVar16 == 1) {
          DVar17 = FUN_140ad26c0();
          DVar18 = GetCurrentThreadId();
          if (DVar17 == DVar18) goto LAB_142fd5d6c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar36 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar27 = (uint *)*puVar36;
        if (puVar27 != (uint *)0x0) goto LAB_142fd6099;
        while( true ) {
          uVar29 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar29 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar29 | 1;
            __tlregdtor(&LAB_142fe9a45);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar26 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar26 == (undefined4 *)0x0) {
            puVar26 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar26 = 0xffffffff;
          *(undefined4 **)(puVar26 + 0x10) = puVar26 + 0x16;
          puVar26[0x12] = 0;
          *puVar36 = puVar26;
          FUN_140217a48(puVar36);
          puVar27 = (uint *)*puVar36;
LAB_142fd6099:
          puVar20 = (undefined8 *)(*(longlong *)(puVar27 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar32 = (uint *)(puVar20 + 0x1e);
          uVar29 = puVar27[0x12];
          if (puVar32 <= puVar27 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar27 + 0x10) = puVar27 + 0x4000;
            LOCK();
            uVar40 = *puVar27;
            *puVar27 = *puVar27 + uVar29 + 1;
            UNLOCK();
            if ((uVar40 ^ uVar29) != 0xffffffff) break;
            puVar27 = (uint *)*puVar36;
            *puVar27 = 0xffffffff;
            *(uint **)(puVar27 + 0x10) = puVar27 + 0x16;
            puVar27[0x12] = 0;
            *puVar36 = puVar27;
            puVar20 = (undefined8 *)((longlong)puVar27 + 0x5fU & 0xfffffffffffffff8);
            puVar32 = (uint *)(puVar20 + 0x1e);
            uVar29 = 0;
            if (puVar32 <= puVar27 + 0x4000) {
              uVar29 = 1;
              goto LAB_142fd6119;
            }
          }
        }
        uVar29 = uVar29 + 1;
LAB_142fd6119:
        *(uint **)(puVar27 + 0x10) = puVar32;
        puVar27[0x12] = uVar29;
        iVar16 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14a2f0f18;
        puVar20[0x15] = local_1528[0];
        puVar20[0x16] = local_1528[1];
        puVar20[0x17] = local_1528[2];
        puVar20[0x18] = local_1510;
        local_1510 = (void *)0x0;
        *(undefined4 *)(puVar20 + 0x19) = (undefined4)local_1508;
        *(undefined4 *)((longlong)puVar20 + 0xcc) = local_1508._4_4_;
        local_1508 = 0;
        *(uint *)((longlong)puVar20 + 0xdd) = CONCAT13(local_14f0,iStack_14f4._1_3_);
        *(undefined4 *)((longlong)puVar20 + 0xe1) = uStack_14ef;
        *(undefined4 *)((longlong)puVar20 + 0xe5) = uStack_14eb;
        *(int *)((longlong)puVar20 + 0xe9) = iStack_14e7;
        *(undefined4 *)(puVar20 + 0x1a) = (undefined4)local_1500;
        *(undefined4 *)((longlong)puVar20 + 0xd4) = local_1500._4_4_;
        *(undefined4 *)(puVar20 + 0x1b) = uStack_14f8;
        *(int *)((longlong)puVar20 + 0xdc) = iStack_14f4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar29 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar29 < 2) {
            uVar42 = (ulonglong)(byte)(&DAT_149e38edc)[uVar29];
          }
          else {
            uVar42 = 2;
          }
        }
        else {
          iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar42 = 5;
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
        lVar21 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar21 == 0) {
          uVar14 = 1;
          if ((char)uVar42 != '\x06') {
            uVar14 = uVar42;
          }
          uVar42 = uVar14;
          uVar25 = 0;
        }
        else {
          if ((char)uVar42 == '\x06') {
            uVar42 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
          }
          uVar25 = *(undefined8 *)(lVar21 + 0x30);
        }
        puVar20[0xf] = uVar25;
        puVar20[0x10] = uVar42 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar16;
        if (puVar20 == (undefined8 *)0x0) {
          local_12d8[0] = (longlong *)CONCAT71(local_12d8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_12d8[0] = (longlong *)CONCAT71(local_12d8[0]._1_7_,1);
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
        local_12d8[0] = (longlong *)0x0;
        local_12d8[2] = (longlong *)FUN_14001cc68(0x50,8);
        *local_12d8[2] = (longlong)&PTR_LAB_14a2f0ed0;
        local_12d8[2][3] = (longlong)local_1528[2];
        local_12d8[2][1] = (longlong)local_1528[0];
        local_12d8[2][2] = (longlong)local_1528[1];
        local_12d8[2][4] = (longlong)local_1510;
        local_1510 = (void *)0x0;
        *(undefined4 *)(local_12d8[2] + 5) = (undefined4)local_1508;
        *(undefined4 *)((longlong)local_12d8[2] + 0x2c) = local_1508._4_4_;
        local_1508 = 0;
        *(uint *)((longlong)local_12d8[2] + 0x3d) = CONCAT13(local_14f0,iStack_14f4._1_3_);
        *(undefined4 *)((longlong)local_12d8[2] + 0x41) = uStack_14ef;
        *(undefined4 *)((longlong)local_12d8[2] + 0x45) = uStack_14eb;
        *(int *)((longlong)local_12d8[2] + 0x49) = iStack_14e7;
        *(undefined4 *)(local_12d8[2] + 6) = (undefined4)local_1500;
        *(undefined4 *)((longlong)local_12d8[2] + 0x34) = local_1500._4_4_;
        *(undefined4 *)(local_12d8[2] + 7) = uStack_14f8;
        *(int *)((longlong)local_12d8[2] + 0x3c) = iStack_14f4;
        if (local_12d8[2] + 1 != (longlong *)0x0) {
          local_12d8[0] = (longlong *)&LAB_142fedfb6;
        }
        local_16b8 = local_12d8;
        FUN_14005a792(&DAT_14ca9a440,L"CaptureAllCubeFaces",&DAT_14ca47108);
        if (local_12d8[0] != (longlong *)0x0) {
          plVar22 = local_12d8[2];
          if (local_12d8[2] == (longlong *)0x0) {
            plVar22 = (longlong *)&local_12b8;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
      }
    }
    if (local_1510 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1405ee12c(&DAT_14ca966d0,local_118);
    FUN_14004710c(local_100);
    if (local_1598 != 0) {
      FUN_1400020a8();
    }
    FUN_14005d108(local_1498);
    lVar21 = 0xfa8;
    do {
      if (acStack_1140[lVar21] == '\x01') {
        acStack_1140[lVar21] = '\0';
      }
      if (acStack_11d0[lVar21] == '\x01') {
        acStack_11d0[lVar21] = '\0';
      }
      if (local_1258[lVar21] == '\x01') {
        local_1258[lVar21] = 0;
      }
      lVar21 = lVar21 + -0x2e0;
    } while (lVar21 != -0x198);
  }
  if (local_1538 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_142fd5f73:
  if ((local_f0 ^ (ulonglong)auStack_16d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd64a3 FUN_142fd64a3 body=69 status=ok
// SIG undefined FUN_142fd64a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd64a3(void)

{
  _DAT_14ca452e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd64e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca452f0,1);
  return;
}



// FUNCTION 142fd64e8 FUN_142fd64e8 body=69 status=ok
// SIG undefined FUN_142fd64e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd64e8(void)

{
  _DAT_14ca45308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd652a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45310,1);
  return;
}



// FUNCTION 142fd652d FUN_142fd652d body=69 status=ok
// SIG undefined FUN_142fd652d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd652d(void)

{
  _DAT_14ca45320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd656f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45328,1);
  return;
}



// FUNCTION 142fd6572 FUN_142fd6572 body=69 status=ok
// SIG undefined FUN_142fd6572(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd6572(void)

{
  _DAT_14ca45338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd65b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45340,1);
  return;
}



// FUNCTION 142fd65b7 FUN_142fd65b7 body=69 status=ok
// SIG undefined FUN_142fd65b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd65b7(void)

{
  _DAT_14ca45350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd65f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45358,1);
  return;
}



// FUNCTION 142fd65fc FUN_142fd65fc body=69 status=ok
// SIG undefined FUN_142fd65fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd65fc(void)

{
  _DAT_14ca45368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd663e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45370,1);
  return;
}



// FUNCTION 142fd6641 FUN_142fd6641 body=69 status=ok
// SIG undefined FUN_142fd6641(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd6641(void)

{
  _DAT_14ca45380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd6683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45388,1);
  return;
}



// FUNCTION 142fd6686 FUN_142fd6686 body=69 status=ok
// SIG undefined FUN_142fd6686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd6686(void)

{
  _DAT_14ca45398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd66c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca453a0,1);
  return;
}



// FUNCTION 142fd66cb FUN_142fd66cb body=69 status=ok
// SIG undefined FUN_142fd66cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd66cb(void)

{
  _DAT_14ca453b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd670d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca453b8,1);
  return;
}



// FUNCTION 142fd6710 FUN_142fd6710 body=69 status=ok
// SIG undefined FUN_142fd6710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd6710(void)

{
  _DAT_14ca453c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd6752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca453d0,1);
  return;
}



// FUNCTION 142fd6755 FUN_142fd6755 body=69 status=ok
// SIG undefined FUN_142fd6755(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd6755(void)

{
  _DAT_14ca453e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd6797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca453e8,1);
  return;
}



// FUNCTION 142fd67ab FUN_142fd67ab body=69 status=ok
// SIG undefined FUN_142fd67ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd67ab(void)

{
  _DAT_14ca45408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd67ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45410,1);
  return;
}



// FUNCTION 142fd67f0 FUN_142fd67f0 body=603 status=ok
// SIG undefined FUN_142fd67f0(void)

void FUN_142fd67f0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1472ddebe(param_1 + 0x50);
  *(undefined4 *)(param_1 + 99) = 0;
  if (*(int *)((longlong)param_1 + 0x31c) != 0) {
    FUN_14480809c(param_1 + 0x62,0);
  }
  FUN_147d41ef2(param_1 + 100);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)((longlong)param_1 + 0x404) != 0) {
    FUN_14480809c(param_1 + 0x7f,0);
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (*(int *)((longlong)param_1 + 0x414) != 0) {
    FUN_14480809c(param_1 + 0x81,0);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)((longlong)param_1 + 0x424) != 0) {
    FUN_14177e678(param_1 + 0x83,0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x444)) {
    *(undefined4 *)((longlong)param_1 + 0x444) = 0x80;
    FUN_1446efbd8(param_1 + 0x85,0);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x464)) {
    *(undefined4 *)((longlong)param_1 + 0x464) = 0x80;
    FUN_1446efbd8(param_1 + 0x89,0);
  }
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (*(int *)((longlong)param_1 + 0x474) != 0) {
    FUN_14177e5a4(param_1 + 0x8d,0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)((longlong)param_1 + 0x484) != 0) {
    FUN_1456da76a(param_1 + 0x8f,0);
  }
  param_1[0x91] = 0xffffffff;
  FUN_14010ff52(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1472ddf46(param_1);
  }
  FUN_1456b56a6(param_1 + 2,0);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = (undefined8 *)param_1[0x96];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0x96] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x9a];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0x9a] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0x9e];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0x9e] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xa2];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0xa2] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xa6];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[0xa6] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142fd6a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142fd6a58 FUN_142fd6a58 body=1368 status=ok
// SIG undefined FUN_142fd6a58(void)

void FUN_142fd6a58(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 local_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_c8;
  if (param_1[2] == 0) goto LAB_142fd6b92;
  local_98 = param_1;
  if (*(char *)(*(longlong *)(param_1[2] + 0x60) + 0x495) == '\0') {
    uStack_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
    uStack_80 = param_3[4];
    uStack_7c = param_3[5];
    uStack_78 = param_3[6];
    uStack_74 = param_3[7];
    local_70 = *(undefined8 *)(param_3 + 8);
LAB_142fd6b23:
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar5 = *piVar1;
    if (iVar5 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar5 = *piVar1;
    }
    if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
      *piVar1 = 0x40000010;
    }
    FUN_14487cb6a(param_1[2],&uStack_90);
    if ((iVar5 == 0x60000000) || (iVar5 == 0)) {
      *piVar1 = iVar5;
    }
LAB_142fd6b6c:
    puVar9 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    uStack_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
    uStack_80 = param_3[4];
    uStack_7c = param_3[5];
    uStack_78 = param_3[6];
    uStack_74 = param_3[7];
    local_70 = *(undefined8 *)(param_3 + 8);
    if ((bVar2 & 1) == 0) goto LAB_142fd6b23;
    puVar6 = TlsGetValue(DAT_14c896140);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar6);
    }
    puVar9 = (undefined8 *)puVar6[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar6;
      if (puVar9 == (undefined8 *)0x0) {
        uVar12 = (uint)DAT_14c896180;
        uVar4 = DAT_14c896180;
        while (DAT_14c896180 = uVar4, local_68 = uVar4, (uVar4 & 0x3ffffff) != 0) {
          local_a0 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (local_a0 >> 0x1a < uVar4 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar11 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
          uVar13 = (ulonglong)((uint)uVar4 & 0x3fff);
          local_a0 = local_a0 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 + uVar13 * 0x18);
          LOCK();
          bVar14 = local_68 == DAT_14c896180;
          uVar4 = local_a0;
          if (!bVar14) {
            uVar4 = DAT_14c896180;
          }
          DAT_14c896180 = uVar4;
          UNLOCK();
          if (bVar14) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar13 * 0x18 + 0x10) = 0;
            puVar9 = *(undefined8 **)
                      (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                      (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar12 & 0x3ffffff);
            puVar6[1] = puVar9;
            if (puVar9 != (undefined8 *)0x0) goto LAB_142fd6d1e;
            goto LAB_142fd6f55;
          }
          uVar12 = (uint)DAT_14c896180;
          uVar4 = DAT_14c896180;
        }
        puVar6[1] = 0;
LAB_142fd6f55:
        puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar6[1] = puVar9;
        iVar5 = 0xff;
        puVar10 = puVar9;
        do {
          puVar7 = puVar10 + 0x20;
          *puVar10 = puVar7;
          iVar5 = iVar5 + -1;
          puVar10 = puVar7;
        } while (iVar5 != 0);
      }
      else {
        puVar6[1] = puVar9;
        puVar7 = puVar6;
      }
      *puVar7 = 0;
LAB_142fd6d1e:
      *(undefined4 *)(puVar6 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar6 + 2) + -1;
    }
    puVar6[1] = *puVar9;
    *(int *)(puVar6 + 2) = iVar5;
    *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
    puVar9[1] = &DAT_100000002;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    puVar9[6] = 0;
    puVar9[7] = 0x100000000;
    *(undefined1 *)(puVar9 + 8) = 1;
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0xe800000000000020;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0x100000000;
    *(undefined2 *)(puVar9 + 0x14) = 0;
    LOCK();
    bVar14 = *(char *)(puVar9 + 8) == '\x01';
    if (bVar14) {
      *(char *)(puVar9 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar14) {
      FUN_14008cdb0(puVar9 + 8);
    }
    *puVar9 = &PTR_FUN_14a2f0fa8;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar9[0xf] = uVar8;
    puVar9[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar9 + 0x1c) = (byte)~bVar2 & 1;
    *(undefined4 *)(puVar9 + 0x15) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar9 + 0xac) = local_98._4_4_;
    *(undefined4 *)(puVar9 + 0x16) = uStack_90;
    *(undefined4 *)((longlong)puVar9 + 0xb4) = uStack_8c;
    *(undefined4 *)(puVar9 + 0x17) = uStack_88;
    *(undefined4 *)((longlong)puVar9 + 0xbc) = uStack_84;
    *(undefined4 *)(puVar9 + 0x18) = uStack_80;
    *(undefined4 *)((longlong)puVar9 + 0xc4) = uStack_7c;
    *(undefined4 *)(puVar9 + 0x19) = uStack_78;
    *(undefined4 *)((longlong)puVar9 + 0xcc) = uStack_74;
    *(undefined4 *)(puVar9 + 0x1a) = (undefined4)local_70;
    *(undefined4 *)((longlong)puVar9 + 0xd4) = local_70._4_4_;
    *puVar9 = &PTR_FUN_14a2f0f98;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_68 = CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(puVar9);
    if (puVar9 == (undefined8 *)0x0) goto LAB_142fd6b6c;
    iVar5 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar5 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar5 * 8) = puVar9;
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  FUN_14473400f(0,0);
  puVar6 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar9;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
LAB_142fd6b92:
  if ((local_60 ^ (ulonglong)local_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd6fb2 FUN_142fd6fb2 body=1854 status=ok
// SIG undefined FUN_142fd6fb2(void)

void FUN_142fd6fb2(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong *lpTlsValue;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[2] == 0) goto LAB_142fd7217;
  cVar6 = *(char *)(*(longlong *)(param_1[2] + 0x60) + 0x495);
  local_68 = (undefined8 *)*param_1;
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
    UNLOCK();
  }
  local_c0 = &local_68;
  local_b8 = local_60;
  FUN_140338ee0(&local_b0);
  local_c8 = *(longlong *)(param_3 + 8);
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  local_d8 = param_3[4];
  uStack_d4 = param_3[5];
  uStack_d0 = param_3[6];
  uStack_cc = param_3[7];
  local_a0 = param_1;
  if (cVar6 == '\0') {
    if (local_a8 == 0) {
      uStack_98 = *param_3;
      uStack_94 = param_3[1];
      uStack_90 = param_3[2];
      uStack_8c = param_3[3];
      uStack_88 = param_3[4];
      uStack_84 = param_3[5];
      uStack_80 = param_3[6];
      uStack_7c = param_3[7];
      local_78 = *(longlong *)(param_3 + 8);
    }
    else {
      FUN_142972845(&local_b0,0x7fffffffffffffff);
      uStack_98 = local_e8;
      uStack_94 = uStack_e4;
      uStack_90 = uStack_e0;
      uStack_8c = uStack_dc;
      uStack_88 = local_d8;
      uStack_84 = uStack_d4;
      uStack_80 = uStack_d0;
      uStack_7c = uStack_cc;
      local_78 = local_c8;
    }
LAB_142fd716a:
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar7 = *piVar1;
    if (iVar7 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar7 = *piVar1;
    }
    if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
      *piVar1 = 0x40000010;
    }
    FUN_142fee6a8(param_1[2],&uStack_98);
    if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
      *piVar1 = iVar7;
    }
LAB_142fd71be:
    plVar11 = (longlong *)0x0;
  }
  else {
    local_78 = *(longlong *)(param_3 + 8);
    uStack_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = param_3[2];
    uStack_8c = param_3[3];
    uStack_88 = param_3[4];
    uStack_84 = param_3[5];
    uStack_80 = param_3[6];
    uStack_7c = param_3[7];
    bVar2 = *(byte *)(param_2 + 0x520);
    if (bVar2 == 0) {
      if (local_a8 != 0) {
        lVar14 = 0;
        do {
          if ((*(longlong *)(local_b0 + lVar14) != 0) &&
             ((*(byte *)(*(longlong *)(local_b0 + lVar14) + 0xa0) & 1) == 0)) goto LAB_142fd7099;
          lVar14 = lVar14 + 8;
        } while ((longlong)local_a8 * 8 != lVar14);
      }
      goto LAB_142fd716a;
    }
LAB_142fd7099:
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    plVar11 = (longlong *)lpTlsValue[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*lpTlsValue;
      if (plVar11 == (longlong *)0x0) {
        uVar12 = (uint)DAT_14c896180;
        uVar5 = DAT_14c896180;
        while (DAT_14c896180 = uVar5, local_70 = uVar5, (uVar5 & 0x3ffffff) != 0) {
          local_f8 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
          if (local_f8 >> 0x1a < uVar5 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar10 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
          uVar13 = (ulonglong)((uint)uVar5 & 0x3fff);
          local_f8 = local_f8 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 0x10 + uVar13 * 0x18);
          LOCK();
          bVar16 = local_70 == DAT_14c896180;
          uVar5 = local_f8;
          if (!bVar16) {
            uVar5 = DAT_14c896180;
          }
          DAT_14c896180 = uVar5;
          UNLOCK();
          if (bVar16) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + uVar13 * 0x18 + 0x10) = 0;
            plVar11 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 +
                       (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar12 & 0x3ffffff);
            lpTlsValue[1] = (longlong)plVar11;
            if (plVar11 == (longlong *)0x0) goto LAB_142fd73d2;
            goto LAB_142fd740d;
          }
          uVar12 = (uint)DAT_14c896180;
          uVar5 = DAT_14c896180;
        }
        lpTlsValue[1] = 0;
LAB_142fd73d2:
        puVar8 = (undefined8 *)FUN_14001cc68(0x10000,0);
        lpTlsValue[1] = (longlong)puVar8;
        iVar7 = 0xff;
        do {
          puVar9 = puVar8 + 0x20;
          *puVar8 = puVar9;
          iVar7 = iVar7 + -1;
          puVar8 = puVar9;
        } while (iVar7 != 0);
        *puVar9 = 0;
        plVar11 = (longlong *)lpTlsValue[1];
      }
      else {
        lpTlsValue[1] = (longlong)plVar11;
        *lpTlsValue = 0;
      }
LAB_142fd740d:
      *(undefined4 *)(lpTlsValue + 2) = 0x100;
      iVar7 = 0xff;
    }
    else {
      iVar7 = (int)lpTlsValue[2] + -1;
    }
    lpTlsValue[1] = *plVar11;
    *(int *)(lpTlsValue + 2) = iVar7;
    *plVar11 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar11[1] = (longlong)&DAT_100000002;
    plVar11[2] = 0;
    *(undefined4 *)(plVar11 + 3) = 0;
    *(undefined4 *)(plVar11 + 4) = 0xffffffff;
    plVar11[6] = 0;
    plVar11[7] = 0x100000000;
    *(undefined1 *)(plVar11 + 8) = 1;
    plVar11[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar11[0xf] = 0;
    plVar11[0x10] = -0x17ffffffffffffe0;
    plVar11[0x12] = 0;
    plVar11[0x13] = 0x100000000;
    *(undefined2 *)(plVar11 + 0x14) = 0;
    LOCK();
    bVar16 = (char)plVar11[8] == '\x01';
    if (bVar16) {
      *(char *)(plVar11 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar16) {
      FUN_14008cdb0(plVar11 + 8);
    }
    *plVar11 = (longlong)&PTR_FUN_14a2f0fc8;
    if (*(code **)(plVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar11[0xe] + 0x18))(plVar11 + 0xe,plVar11 + 9);
    }
    lVar4 = local_b0;
    plVar11[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar11[9] = (longlong)plVar11;
    plVar11[10] = (longlong)plVar11;
    lVar14 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    iVar7 = 0;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(longlong *)(lVar14 + 0x30);
    }
    plVar11[0xf] = lVar14;
    plVar11[0x10] = -0x37ffffad77750000;
    *(uint *)((longlong)plVar11 + 0x1c) = bVar2 ^ 1;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)local_a0;
    *(undefined4 *)((longlong)plVar11 + 0xac) = local_a0._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = uStack_98;
    *(undefined4 *)((longlong)plVar11 + 0xb4) = uStack_94;
    plVar11[0x17] = CONCAT44(uStack_8c,uStack_90);
    plVar11[0x18] = CONCAT44(uStack_84,uStack_88);
    plVar11[0x19] = CONCAT44(uStack_7c,uStack_80);
    plVar11[0x1a] = local_78;
    *plVar11 = (longlong)&PTR_FUN_14a2f0fb8;
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + local_a8;
    UNLOCK();
    lVar14 = (longlong)local_a8;
    if (lVar14 != 0) {
      local_f0 = plVar11 + 5;
      lVar15 = 0;
      iVar7 = 0;
      do {
        lVar3 = *(longlong *)(lVar4 + lVar15);
        if ((lVar3 == 0) || (cVar6 = FUN_1456bb142(lVar3 + 0x88,plVar11), cVar6 == '\0')) {
          iVar7 = iVar7 + 1;
        }
        else {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          FUN_1456bb1d4(local_f0,lVar3);
        }
        lVar15 = lVar15 + 8;
      } while (lVar14 * 8 != lVar15);
    }
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) - iVar7;
    UNLOCK();
    local_70 = CONCAT71(local_70._1_7_,1);
    FUN_1447439e4(plVar11);
    if (plVar11 == (longlong *)0x0) goto LAB_142fd71be;
    iVar7 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar7 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar7);
    }
    *(longlong **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar7 * 8) = plVar11;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)param_1[1];
  param_1[1] = (longlong)plVar11;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  FUN_14473400f(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
LAB_142fd7217:
  if ((local_60[0] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd76f2 FUN_142fd76f2 body=5639 status=ok
// SIG undefined FUN_142fd76f2(void)

void FUN_142fd76f2(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  ulonglong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_69;
  undefined8 local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  undefined6 uVar19;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar8 = FUN_14010fb43(*(undefined2 *)
                         (&DAT_14ca85070 +
                         (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x58) + 8)
                         * 2));
  if (cVar8 != '\0') {
    lVar11 = *(longlong *)(param_1 + 0x60);
    iVar9 = *(int *)(lVar11 + 0x470);
    if (*(char *)(lVar11 + 0x508) == '\x01') {
      uVar14 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar13 & 0x1f);
    }
    iVar22 = *(int *)(lVar11 + 0x4f8);
    if (*(int *)(lVar11 + 0x4f8) < iVar9) {
      iVar22 = iVar9;
    }
    local_58 = (undefined *)0x0;
    lStack_60 = CONCAT44(lStack_60._4_4_,0x10109);
    local_68 = (undefined8 *)CONCAT44(iVar22,0x20);
    local_a0 = FUN_1447f2a09(param_2,lVar11 + 0x510,&local_68,*(undefined8 *)(lVar11 + 0x500));
    iVar9 = *(int *)(param_1 + 0xe0);
    local_98 = param_3;
    if (iVar9 != 0) {
      plVar3 = (longlong *)(param_2 + 0x70);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar16 + 5;
      if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
        FUN_140023dd8(plVar3,0x38);
        puVar16 = (undefined8 *)(*plVar3 + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar16 + 5;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar15;
      *puVar16 = &PTR_FUN_14a2f08b8;
      puVar16[1] = 0;
      puVar16[1] = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)((longlong)puVar16 + 0x14) = *(undefined4 *)(param_1 + 0xd4);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      puVar16[3] = 0;
      puVar16[3] = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)((longlong)puVar16 + 0x24) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      iVar22 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar22 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar22 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar22);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar22 * 8) = puVar16;
      *(undefined8 **)(param_1 + 0xc0) = puVar16 + 1;
      uVar12 = FUN_144ab72cc(param_2,L"ScatterUploader.Offsets",puVar16 + 3);
      puVar15 = *(undefined8 **)(param_1 + 0xc0);
      uVar10 = 0x20;
      if (DAT_14ca84e48 < 0x20) {
        uVar10 = DAT_14ca84e48;
      }
      lStack_60 = CONCAT44(lStack_60._4_4_,0x10100);
      uVar6 = DAT_14ca84e48;
      if (*(uint *)(puVar15 + 1) < DAT_14ca84e48) {
        uVar6 = *(uint *)(puVar15 + 1);
      }
      local_58 = (undefined *)0x0;
      local_68 = (undefined8 *)CONCAT44(uVar6 + (uVar6 == 0),uVar10 + (uVar10 == 0));
      uVar18 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar14 = uVar18 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
        FUN_140023dd8(plVar3,0x160);
        uVar18 = *plVar3 + 0xfU & 0xfffffffffffffff0;
        uVar14 = uVar18 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar14;
      FUN_1456bd266(uVar18,L"ScatterUploader.Values",&local_68,0);
      iVar22 = *(int *)(param_2 + 400);
      uVar10 = iVar22 + 1;
      *(uint *)(param_2 + 400) = uVar10;
      if (*(uint *)(param_2 + 0x194) < uVar10) {
        FUN_144737178(param_2 + 0x188);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar22 * 8) = uVar18;
      *(int *)(uVar18 + 0x7c) = *(int *)(param_2 + 400) + -1;
      uVar4 = *puVar15;
      iVar22 = *(int *)(puVar15 + 1);
      iVar20 = *(int *)(param_2 + 0x590);
      uVar10 = iVar20 + 1;
      *(uint *)(param_2 + 0x590) = uVar10;
      if (*(uint *)(param_2 + 0x594) < uVar10) {
        FUN_144775ac8(param_2 + 0x588);
      }
      lVar11 = *(longlong *)(param_2 + 0x588);
      lVar13 = (longlong)iVar20 * 0x120;
      *(undefined2 *)(lVar11 + lVar13) = 0;
      *(ulonglong *)(lVar11 + 8 + lVar13) = uVar18;
      *(undefined8 *)(lVar11 + 0x10 + lVar13) = uVar4;
      *(longlong *)(lVar11 + 0x18 + lVar13) = (longlong)iVar22 << 5;
      *(undefined8 *)(lVar11 + 0x20 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0x30 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0x60 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0x70 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xa0 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xb0 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xe0 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xf0 + lVar13) = 0;
      *(byte *)(uVar18 + 0x24) = *(byte *)(uVar18 + 0x24) | 0x80;
      local_c0 = CONCAT44(local_c0._4_4_,iVar9);
      local_b0 = 1;
      local_b8 = 0x20;
      local_c8 = (undefined *)uVar18;
      FUN_14485b05e(lVar13,param_2,local_a0,uVar12);
    }
    lVar11 = *(longlong *)(param_1 + 0x60);
    iVar9 = *(int *)(lVar11 + 0x420);
    if (*(char *)(lVar11 + 0x4a8) == '\x01') {
      uVar14 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar13 & 0x1f);
    }
    iVar22 = *(int *)(lVar11 + 0x498);
    if (*(int *)(lVar11 + 0x498) < iVar9) {
      iVar22 = iVar9;
    }
    local_58 = (undefined *)0x0;
    lStack_60 = CONCAT44(lStack_60._4_4_,0x10109);
    local_68 = (undefined8 *)CONCAT44(iVar22,8);
    local_90 = FUN_1447f2a09(param_2,lVar11 + 0x4b0,&local_68,*(undefined8 *)(lVar11 + 0x4a0));
    iVar9 = *(int *)(param_1 + 0x130);
    if (iVar9 != 0) {
      plVar3 = (longlong *)(param_2 + 0x70);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar16 + 5;
      if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
        FUN_140023dd8(plVar3,0x38);
        puVar16 = (undefined8 *)(*plVar3 + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar16 + 5;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar15;
      *puVar16 = &PTR_FUN_14a2f08c0;
      puVar16[1] = 0;
      puVar16[1] = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_1 + 0x120);
      *(undefined4 *)((longlong)puVar16 + 0x14) = *(undefined4 *)(param_1 + 0x124);
      *(undefined8 *)(param_1 + 0x120) = 0;
      puVar16[3] = 0;
      puVar16[3] = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_1 + 0x130);
      *(undefined4 *)((longlong)puVar16 + 0x24) = *(undefined4 *)(param_1 + 0x134);
      *(undefined8 *)(param_1 + 0x130) = 0;
      iVar22 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar22 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar22 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar22);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar22 * 8) = puVar16;
      *(undefined8 **)(param_1 + 0x110) = puVar16 + 1;
      uVar12 = FUN_144ab72cc(param_2,L"ScatterUploader.Offsets",puVar16 + 3);
      puVar15 = *(undefined8 **)(param_1 + 0x110);
      uVar10 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar10 = DAT_14ca84e48;
      }
      lStack_60 = CONCAT44(lStack_60._4_4_,0x10100);
      uVar6 = DAT_14ca84e48;
      if (*(uint *)(puVar15 + 1) < DAT_14ca84e48) {
        uVar6 = *(uint *)(puVar15 + 1);
      }
      local_58 = (undefined *)0x0;
      local_68 = (undefined8 *)CONCAT44(uVar6 + (uVar6 == 0),uVar10 + (uVar10 == 0));
      uVar18 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar14 = uVar18 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
        FUN_140023dd8(plVar3,0x160);
        uVar18 = *plVar3 + 0xfU & 0xfffffffffffffff0;
        uVar14 = uVar18 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar14;
      FUN_1456bd266(uVar18,L"ScatterUploader.Values",&local_68,0);
      iVar22 = *(int *)(param_2 + 400);
      uVar10 = iVar22 + 1;
      *(uint *)(param_2 + 400) = uVar10;
      if (*(uint *)(param_2 + 0x194) < uVar10) {
        FUN_144737178(param_2 + 0x188);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar22 * 8) = uVar18;
      *(int *)(uVar18 + 0x7c) = *(int *)(param_2 + 400) + -1;
      uVar4 = *puVar15;
      iVar22 = *(int *)(puVar15 + 1);
      iVar20 = *(int *)(param_2 + 0x590);
      uVar10 = iVar20 + 1;
      *(uint *)(param_2 + 0x590) = uVar10;
      if (*(uint *)(param_2 + 0x594) < uVar10) {
        FUN_144775ac8(param_2 + 0x588);
      }
      lVar11 = *(longlong *)(param_2 + 0x588);
      lVar13 = (longlong)iVar20 * 0x120;
      *(undefined2 *)(lVar11 + lVar13) = 0;
      *(ulonglong *)(lVar11 + 8 + lVar13) = uVar18;
      *(undefined8 *)(lVar11 + 0x10 + lVar13) = uVar4;
      *(longlong *)(lVar11 + 0x18 + lVar13) = (longlong)iVar22 << 3;
      *(undefined8 *)(lVar11 + 0x20 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0x30 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0x60 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0x70 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xa0 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xb0 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xe0 + lVar13) = 0;
      *(undefined8 *)(lVar11 + 0xf0 + lVar13) = 0;
      *(byte *)(uVar18 + 0x24) = *(byte *)(uVar18 + 0x24) | 0x80;
      local_c0 = CONCAT44(local_c0._4_4_,iVar9);
      local_b0 = 1;
      local_b8 = 8;
      local_c8 = (undefined *)uVar18;
      FUN_14485b05e(lVar13,param_2,local_90,uVar12);
    }
    lVar11 = *(longlong *)(param_1 + 0x60);
    iVar9 = *(int *)(lVar11 + 0x400);
    if (*(char *)(lVar11 + 0x4e8) == '\x01') {
      uVar14 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar13 & 0x1f);
    }
    iVar22 = *(int *)(lVar11 + 0x4d8);
    if (*(int *)(lVar11 + 0x4d8) < iVar9) {
      iVar22 = iVar9;
    }
    local_58 = (undefined *)0x0;
    lStack_60 = CONCAT44(lStack_60._4_4_,0x10109);
    local_68 = (undefined8 *)CONCAT44(iVar22,4);
    lVar11 = FUN_1447f2a09(param_2,lVar11 + 0x4f0,&local_68,*(undefined8 *)(lVar11 + 0x4e0));
    iVar9 = *(int *)(param_1 + 0x108);
    if (iVar9 != 0) {
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar16 + 5;
      if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
        FUN_140023dd8((longlong *)(param_2 + 0x70),0x38);
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar16 + 5;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar15;
      *puVar16 = &PTR_FUN_14a2f08c8;
      puVar16[1] = 0;
      puVar16[1] = *(undefined8 *)(param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_1 + 0xf8);
      *(undefined4 *)((longlong)puVar16 + 0x14) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined8 *)(param_1 + 0xf8) = 0;
      puVar16[3] = 0;
      puVar16[3] = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_1 + 0x108);
      *(undefined4 *)((longlong)puVar16 + 0x24) = *(undefined4 *)(param_1 + 0x10c);
      *(undefined8 *)(param_1 + 0x108) = 0;
      iVar22 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar22 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar22 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar22);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar22 * 8) = puVar16;
      *(undefined8 **)(param_1 + 0xe8) = puVar16 + 1;
      uVar12 = FUN_144ab72cc(param_2,L"ScatterUploader.Offsets",puVar16 + 3);
      local_c8 = (undefined *)
                 FUN_144ab72cc(param_2,L"ScatterUploader.Values",*(undefined8 *)(param_1 + 0xe8));
      local_c0 = CONCAT44(local_c0._4_4_,iVar9);
      local_b0 = 0x40;
      local_b8 = 4;
      FUN_14485b05e(extraout_XMM0_Da,param_2,lVar11,uVar12);
    }
    lVar13 = *(longlong *)(param_1 + 0x60);
    iVar9 = *(int *)(lVar13 + 0x318);
    if (*(char *)(lVar13 + 0x4c8) == '\x01') {
      uVar14 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar5 & 0x1f);
    }
    iVar22 = *(int *)(lVar13 + 0x4b8);
    if (*(int *)(lVar13 + 0x4b8) < iVar9) {
      iVar22 = iVar9;
    }
    local_58 = (undefined *)0x0;
    lStack_60 = CONCAT44(lStack_60._4_4_,0x10109);
    local_68 = (undefined8 *)CONCAT44(iVar22,4);
    lVar13 = FUN_1447f2a09(param_2,lVar13 + 0x4d0,&local_68,*(undefined8 *)(lVar13 + 0x4c0));
    iVar9 = *(int *)(param_1 + 0x158);
    local_78 = lVar11;
    if (iVar9 != 0) {
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar15 = puVar16 + 5;
      if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
        FUN_140023dd8((longlong *)(param_2 + 0x70),0x38);
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar16 + 5;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar15;
      *puVar16 = &PTR_FUN_14a2f08d0;
      puVar16[1] = 0;
      puVar16[1] = *(undefined8 *)(param_1 + 0x140);
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(param_1 + 0x148);
      *(undefined4 *)((longlong)puVar16 + 0x14) = *(undefined4 *)(param_1 + 0x14c);
      *(undefined8 *)(param_1 + 0x148) = 0;
      puVar16[3] = 0;
      puVar16[3] = *(undefined8 *)(param_1 + 0x150);
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(param_1 + 0x158);
      *(undefined4 *)((longlong)puVar16 + 0x24) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined8 *)(param_1 + 0x158) = 0;
      iVar22 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar22 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar22 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar22);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar22 * 8) = puVar16;
      *(undefined8 **)(param_1 + 0x138) = puVar16 + 1;
      uVar12 = FUN_144ab72cc(param_2,L"ScatterUploader.Offsets",puVar16 + 3);
      local_c8 = (undefined *)
                 FUN_144ab72cc(param_2,L"ScatterUploader.Values",*(undefined8 *)(param_1 + 0x138));
      local_c0 = CONCAT44(local_c0._4_4_,iVar9);
      local_b0 = 1;
      local_b8 = 4;
      FUN_14485b05e(extraout_XMM0_Da_00,param_2,lVar13,uVar12);
    }
    puVar7 = local_98;
    lVar11 = *(longlong *)(param_1 + 0x60);
    if (*(char *)(lVar11 + 0x61) == '\x01') {
      iVar9 = *(int *)(lVar11 + 0x420) * 2;
      if (*(char *)(lVar11 + 0x528) == '\x01') {
        uVar14 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar5 & 0x1f);
      }
      iVar22 = *(int *)(lVar11 + 0x518);
      if (*(int *)(lVar11 + 0x518) < iVar9) {
        iVar22 = iVar9;
      }
      local_58 = (undefined *)0x0;
      lStack_60 = CONCAT44(lStack_60._4_4_,0x10109);
      local_68 = (undefined8 *)CONCAT44(iVar22,0x10);
      FUN_1447f2a09(param_2,lVar11 + 0x530,&local_68,*(undefined8 *)(lVar11 + 0x520));
      if (*(int *)(param_1 + 0xb8) != 0) {
        puVar1 = (ulonglong *)(param_2 + 0x70);
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar16 + 0xe;
        local_80 = lVar13;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(puVar1,0x80);
          puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar15 = puVar16 + 0xe;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        *puVar16 = &PTR_FUN_14a2f08d8;
        puVar16[2] = 0;
        *(undefined1 *)(puVar16 + 3) = 1;
        puVar16[7] = 0;
        puVar16[8] = 0;
        puVar16[9] = 0;
        puVar16[10] = 0;
        puVar16[0xb] = 0;
        puVar16[0xc] = 0;
        iVar9 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
        local_98 = puVar1;
        if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
          FUN_1448cfae8(param_2 + 0x98,iVar9);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar16;
        local_88 = param_2 + 0x98;
        uVar12 = FUN_1448c569e(puVar7,param_2);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14ca4b328) {
          FUN_144b3d300(&DAT_14ca4b328);
          if (DAT_14ca4b328 == -1) {
            DAT_14ca4b320 = FUN_145900d44();
            _Init_thread_footer(&DAT_14ca4b328);
          }
        }
        puVar7 = local_98;
        cVar8 = '\x02';
        if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
          cVar8 = *(char *)(DAT_14ca4b320 + 0x41);
        }
        puVar16[2] = uVar12;
        *(char *)(puVar16 + 3) = cVar8;
        puVar16[4] = 0x300000009;
        *(undefined4 *)(puVar16 + 5) = 7;
        *(undefined4 *)((longlong)puVar16 + 0x2c) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x68);
        cVar8 = *(char *)(local_a0 + 0x68);
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_98,0x50);
          puVar21 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar21 + 9;
        }
        lVar11 = param_2 + 0x198;
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        puVar21[1] = *(undefined8 *)(local_a0 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 3;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *puVar21 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar21 + 5) = cVar8 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
        puVar21[7] = 0;
        puVar21[8] = local_a0;
        iVar9 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
        local_a0 = lVar11;
        if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
          FUN_1447568fc(lVar11,iVar9);
        }
        puVar7 = local_98;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar16[7] = puVar21;
        cVar8 = *(char *)(local_90 + 0x68);
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_98,0x50);
          puVar21 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar21 + 9;
        }
        lVar11 = local_78;
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        puVar21[1] = *(undefined8 *)(local_90 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 3;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *puVar21 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar21 + 5) = cVar8 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
        puVar21[7] = 0;
        puVar21[8] = local_90;
        iVar9 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
          FUN_1447568fc(local_a0,iVar9);
        }
        puVar7 = local_98;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar16[8] = puVar21;
        cVar8 = *(char *)(lVar11 + 0x68);
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_98,0x50);
          puVar21 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar21 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        puVar21[1] = *(undefined8 *)(lVar11 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 3;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *puVar21 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar21 + 5) = cVar8 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
        puVar21[7] = 0;
        puVar21[8] = lVar11;
        iVar9 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
          FUN_1447568fc(local_a0,iVar9);
        }
        lVar11 = local_80;
        puVar7 = local_98;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar16[10] = puVar21;
        cVar8 = *(char *)(local_80 + 0x68);
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_98,0x50);
          puVar21 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar21 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        puVar21[1] = *(undefined8 *)(lVar11 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 3;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *puVar21 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar21 + 5) = cVar8 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
        puVar21[7] = 0;
        puVar21[8] = lVar11;
        iVar9 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar9 + 1U) {
          FUN_1447568fc(local_a0,iVar9);
        }
        puVar7 = local_98;
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar9 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar16[9] = puVar21;
        iVar9 = *(int *)(param_1 + 0xb8);
        if (iVar9 == 0) {
          local_c8 = &DAT_14a2f08e0;
          local_c0 = 4;
          iVar22 = 1;
        }
        else {
          puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar15 = puVar21 + 3;
          if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
            FUN_140023dd8(local_98,0x28);
            puVar21 = (undefined8 *)(*puVar7 + 0xf & 0xfffffffffffffff0);
            puVar15 = puVar21 + 3;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar15;
          *puVar21 = &PTR_FUN_14a2f08e8;
          puVar21[1] = 0;
          puVar21[1] = *(undefined8 *)(param_1 + 0xb0);
          *(undefined8 *)(param_1 + 0xb0) = 0;
          *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(param_1 + 0xb8);
          *(undefined4 *)((longlong)puVar21 + 0x14) = *(undefined4 *)(param_1 + 0xbc);
          *(undefined8 *)(param_1 + 0xb8) = 0;
          iVar22 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar22 + 1U;
          if (*(uint *)(param_2 + 0xa4) < iVar22 + 1U) {
            FUN_1448cfae8(local_88,iVar22);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar22 * 8) = puVar21;
          iVar22 = *(int *)(puVar21 + 2);
          local_c0 = (ulonglong)(uint)(iVar22 * 4);
          local_c8 = (undefined *)puVar21[1];
        }
        local_b8 = CONCAT31(local_b8._1_3_,1);
        lVar11 = FUN_144942e63(param_2,L"SceneCulling.DirtyCellBoundsIndices",4,iVar22);
        puVar7 = local_98;
        uVar14 = CONCAT71((int7)((ulonglong)(puVar16 + 7) >> 8),*(char *)(lVar11 + 0x68) >> 7) &
                 0xffffffffffffff1c;
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_98,0x50);
          puVar21 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar21 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        puVar21[1] = *(undefined8 *)(lVar11 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 3;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *puVar21 = &PTR_FUN_14a1fb168;
        *(char *)(puVar21 + 5) = (char)uVar14;
        *(undefined8 *)((longlong)puVar21 + 0x2c) = 0xffffffff00000000;
        puVar21[7] = 0;
        puVar21[8] = lVar11;
        iVar22 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_a0,iVar22);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar22 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar16[0xb] = puVar21;
        *(int *)(puVar16 + 6) = iVar9;
        lVar11 = FUN_144735dd8(param_2,*(longlong *)(param_1 + 0x60) + 0x530,0);
        puVar7 = local_98;
        uVar14 = CONCAT71((int7)(uVar14 >> 8),*(char *)(lVar11 + 0x68) >> 7) & 0xffffffffffffff1c;
        puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar21 + 8;
        if (*(undefined8 **)(param_2 + 0x78) < puVar15) {
          FUN_140023dd8(local_98,0x48);
          puVar21 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar21 + 8;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar15;
        puVar21[1] = *(undefined8 *)(lVar11 + 8);
        puVar21[2] = 0;
        *(undefined1 *)(puVar21 + 3) = 2;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar21 + 5) = 0;
        *puVar21 = &PTR_FUN_14a1fb3e8;
        *(char *)(puVar21 + 6) = (char)uVar14;
        *(undefined2 *)((longlong)puVar21 + 0x31) = 0;
        puVar21[7] = lVar11;
        iVar22 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_a0,iVar22);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar22 * 8) = puVar21;
        *(int *)((longlong)puVar21 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar16[0xc] = puVar21;
        uVar12 = *(undefined8 *)
                  (&DAT_14ca8c1f0 +
                  (ulonglong)
                  *(ushort *)
                   (&DAT_14ca85070 +
                   (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x58) + 8) * 2)
                  * 8);
        FUN_14159292a();
        FUN_1448e935e(uVar12,&local_68,&DAT_14ca45480,0);
        FUN_14159292a();
        puVar15 = local_68;
        if (DAT_14ca84f24 < iVar9) {
          iVar22 = iVar9 + 0xfe;
          if (-1 < iVar9 + 0x7f) {
            iVar22 = iVar9 + 0x7f;
          }
          iVar22 = iVar22 >> 7;
          iVar9 = 0x80;
        }
        else {
          iVar22 = 1;
        }
        puVar16 = puVar16 + 2;
        if (DAT_14ca84f28 < iVar22) {
          iVar20 = iVar22 + 0xfe;
          if (-1 < iVar22 + 0x7f) {
            iVar20 = iVar22 + 0x7f;
          }
          local_90 = CONCAT44(local_90._4_4_,iVar20 >> 7);
          iVar22 = 0x80;
        }
        else {
          local_90 = CONCAT44(local_90._4_4_,1);
        }
        local_a0 = lStack_60;
        FUN_141592a4c();
        local_68 = (undefined8 *)0x0;
        lStack_60 = 0;
        FUN_1448f70da(puVar15,&DAT_14ca46d08,puVar16,&local_68);
        FUN_140069376(param_2);
        puVar7 = local_98;
        uVar19 = (undefined6)(uVar14 >> 0x10);
        uVar17 = (undefined4)CONCAT62(uVar19,2);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar17 = (undefined4)CONCAT62(uVar19,4);
        }
        puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar21 = puVar23 + 0x3d;
        if (*(undefined8 **)(param_2 + 0x78) < puVar21) {
          FUN_140023dd8(local_98,0x1f0);
          puVar23 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar21 = puVar23 + 0x3d;
        }
        *local_98 = (ulonglong)puVar21;
        lStack_60 = DAT_14ca46d50;
        if (DAT_14ca46d50 != 0) {
          LOCK();
          *(int *)(DAT_14ca46d50 + 8) = *(int *)(DAT_14ca46d50 + 8) + 1;
          UNLOCK();
        }
        local_58 = &DAT_14ca46d08;
        local_c8 = (undefined *)CONCAT71(local_c8._1_7_,2);
        local_68 = puVar16;
        FUN_140068f1a(puVar23,&local_69,&local_68,uVar17);
        *puVar23 = &PTR_FUN_14a2f08f0;
        puVar23[0x37] = &DAT_14ca46d08;
        puVar23[0x38] = puVar16;
        puVar23[0x39] = puVar15;
        puVar23[0x3a] = local_a0;
        *(int *)(puVar23 + 0x3b) = iVar9;
        *(int *)((longlong)puVar23 + 0x1dc) = iVar22;
        *(undefined4 *)(puVar23 + 0x3c) = (undefined4)local_90;
        iVar9 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
          FUN_14470e57a(param_2 + 0x168,iVar9);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar23;
        *(int *)((longlong)puVar23 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar23);
      }
    }
    else {
      lVar13 = *(longlong *)(lVar11 + 0x530);
      if (lVar13 != 0) {
        *(undefined8 *)(lVar11 + 0x530) = 0;
        LOCK();
        piVar2 = (int *)(lVar13 + 8);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd8d1b FUN_142fd8d1b body=69 status=ok
// SIG undefined FUN_142fd8d1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd8d1b(void)

{
  _DAT_14ca45540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fd8d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45548,1);
  return;
}



// FUNCTION 142fd8d60 FUN_142fd8d60 body=745 status=ok
// SIG undefined FUN_142fd8d60(void)

undefined8 * FUN_142fd8d60(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_2e8 [32];
  undefined4 *local_2c8;
  longlong local_2c0;
  undefined8 *local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined1 local_288 [192];
  undefined1 *local_1c8;
  undefined8 local_1b8;
  undefined1 local_1a8 [256];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(char *)(*param_1 + 0x60) == '\x01') {
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x40);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar3;
    *puVar5 = &PTR_FUN_14a2f0fd8;
    puVar5[1] = param_1;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    iVar1 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar1 + 1U;
    local_2c0 = param_2;
    if (*(uint *)(param_2 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar1 * 8) = puVar5;
    puVar5 = puVar5 + 1;
    if (0 < (int)param_3[1]) {
      lVar6 = 0;
      uVar7 = 0;
      local_2b8 = puVar5;
      local_2b0 = param_3;
      do {
        local_1c8 = (undefined1 *)0x0;
        local_1b8 = 0x600000000;
        local_a8 = (undefined1 *)0x0;
        local_98 = 0x800000000;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_298 = DAT_14c8464f0;
        local_2a8 = (undefined4)DAT_14c8464e0;
        uStack_2a4 = DAT_14c8464e0._4_4_;
        uStack_2a0 = (undefined4)DAT_14c8464e8;
        uStack_29c = DAT_14c8464e8._4_4_;
        lVar2 = *param_3;
        if ((undefined1 *)(lVar2 + lVar6) != local_288) {
          iVar1 = *(int *)(lVar2 + 0xd0 + lVar6);
          puVar8 = *(undefined1 **)(lVar2 + 0xc0 + lVar6);
          local_1b8 = CONCAT44(6,iVar1);
          FUN_144715b40(local_288,iVar1,6);
          if ((longlong)iVar1 != 0) {
            puVar4 = (undefined1 *)(lVar2 + lVar6);
            if (puVar8 != (undefined1 *)0x0) {
              puVar4 = puVar8;
            }
            puVar8 = local_1c8;
            if (local_1c8 == (undefined1 *)0x0) {
              puVar8 = local_288;
            }
            memcpy(puVar8,puVar4,(longlong)iVar1 << 5);
          }
        }
        puVar8 = (undefined1 *)(lVar2 + lVar6 + 0xe0);
        if (puVar8 != local_1a8) {
          puVar4 = *(undefined1 **)(lVar2 + 0x1e0 + lVar6);
          if (puVar4 != (undefined1 *)0x0) {
            puVar8 = puVar4;
          }
          iVar1 = *(int *)(lVar2 + 0x1f0 + lVar6);
          local_98 = CONCAT44(local_98._4_4_,iVar1);
          if (iVar1 == 0 && local_98._4_4_ == 0) {
            local_98 = CONCAT44(8,iVar1);
          }
          else {
            FUN_144715cb0(local_1a8,iVar1);
            if (iVar1 != 0) {
              puVar4 = local_a8;
              if (local_a8 == (undefined1 *)0x0) {
                puVar4 = local_1a8;
              }
              memcpy(puVar4,puVar8,(longlong)iVar1 << 5);
            }
          }
        }
        puVar5 = local_2b8;
        local_2c8 = &local_2a8;
        FUN_1448e3958(local_2b8,uVar7 & 0xffffffff,1,1);
        if (local_a8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        param_3 = local_2b0;
        if (local_1c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x200;
      } while ((longlong)uVar7 < (longlong)(int)param_3[1]);
    }
    FUN_14033889c(puVar5,local_2c0,1);
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 142fd9056 FUN_142fd9056 body=283 status=ok
// SIG undefined FUN_142fd9056(void)

longlong FUN_142fd9056(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) goto LAB_142fd90ae;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar1) {
      bVar2 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar2 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar2)
        goto LAB_142fd9165;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_142fd9165:
    FUN_140082318(lVar3);
  }
LAB_142fd90ae:
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_142fd9172(param_1);
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fd9172 FUN_142fd9172 body=6269 status=ok
// SIG undefined FUN_142fd9172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fd9172(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  byte bVar33;
  uint uVar34;
  int iVar35;
  double *pdVar36;
  longlong lVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  double dVar61;
  float fVar62;
  float fVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 unaff_XMM11 [16];
  float fVar70;
  undefined1 unaff_XMM12 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong *local_330;
  ulonglong local_328;
  double local_320;
  double *local_318;
  double local_310;
  ulonglong local_308;
  int local_2fc;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  double *local_2e0;
  double local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  ulonglong local_2c0;
  ulonglong local_2b8;
  double *local_2b0;
  int local_2a4;
  uint local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  longlong local_280;
  longlong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  longlong local_258;
  longlong local_250;
  ulonglong local_248;
  longlong local_240;
  double *local_238;
  ulonglong local_230;
  double *local_228;
  undefined8 *local_220;
  uint *local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  double local_1a8;
  double local_1a0;
  ulonglong local_198;
  longlong local_190;
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  ulonglong local_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  double local_128;
  double local_120;
  double local_118;
  char local_10a;
  char local_109;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  dVar6 = (double)CONCAT44(unaff_XMM15_Dd,unaff_XMM15_Dc);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  *(undefined4 *)(param_1[3] + 0x24) = 0;
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    pdVar36 = (double *)param_1[1];
    local_228 = pdVar36 + (longlong)*(int *)(param_1 + 2) * 0x4a;
    local_220 = param_1;
    do {
      local_330 = (longlong *)param_1[3];
      local_2a4 = (int)local_330[1];
      local_308 = (ulonglong)*(uint *)(local_330 + 3);
      lVar37 = *(longlong *)*param_1;
      local_338 = lVar37;
      local_318 = pdVar36;
      if (pdVar36[0x47] <= 0.0) {
LAB_142fd93a9:
        *(int *)(local_330 + 4) = (int)local_330[4] + *(int *)(lVar37 + 0x48c);
        local_2b0 = pdVar36 + 4;
        uVar24 = 0;
        do {
          uVar26 = uVar24;
          if (*(uint *)(lVar37 + 0x288) == uVar26) goto LAB_142fda8c1;
          uVar24 = uVar26 + 1;
        } while (SBORROW4(0,*(int *)(*(longlong *)(lVar37 + 0x290) + (longlong)(int)uVar26 * 4)));
        if (*(uint *)(lVar37 + 0x288) + 1 != uVar26 + 1) {
          local_328 = lVar37 + 0x428;
          local_308 = local_308 << 0x20;
          local_2e0 = pdVar36 + 0x20;
          do {
            lVar37 = *(longlong *)(local_338 + 0x280);
            lVar15 = (longlong)(int)uVar26 * 0x20;
            iVar35 = *(int *)(lVar37 + 0xc + lVar15);
            uVar24 = iVar35 + 1;
            lVar14 = 1L << ((byte)uVar24 & 0x3f);
            uVar59 = SUB164(ZEXT816(0x4530000043300000),4);
            auVar46._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
            auVar46._0_8_ = lVar14;
            auVar46._12_4_ = uVar59;
            uVar54 = SUB164(ZEXT816(0x4530000043300000),0);
            dVar41 = ((double)CONCAT44(uVar54,(int)lVar14) - (double)DAT_1499dd810) +
                     (auVar46._8_8_ - DAT_1499dd810._8_8_);
            dVar64 = (double)*(int *)(lVar37 + 8 + lVar15) * dVar41;
            local_310 = (double)*(int *)(lVar37 + 4 + lVar15) * dVar41;
            local_320 = (double)*(int *)(lVar37 + lVar15) * dVar41;
            dVar40 = (double)(((ulonglong)uVar24 << 0x34) + 0x3fe0000000000000);
            lVar14 = 1L << ((char)iVar35 - 2U & 0x3f);
            auVar68._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
            auVar68._0_8_ = lVar14;
            auVar68._12_4_ = uVar59;
            dVar39 = ((double)CONCAT44(uVar54,(int)lVar14) - (double)DAT_1499dd810) +
                     (auVar68._8_8_ - DAT_1499dd810._8_8_);
            local_108 = (dVar41 + dVar39) * 0.5;
            local_118 = dVar64 + dVar40 + pdVar36[2];
            local_120 = local_310 + dVar40 + pdVar36[1];
            local_128 = dVar40 + local_320 + *pdVar36;
            local_100 = local_108;
            local_f8 = local_108;
            FUN_144b22954(local_2b0,&local_10a,&local_128,&local_108);
            lVar14 = local_338;
            pdVar36 = local_318;
            if (local_10a == '\x01') {
              lVar37 = lVar37 + lVar15;
              if (local_109 == '\0') {
                *(int *)(local_330 + 4) = (int)local_330[4] + *(int *)(lVar37 + 0x1c);
                uVar24 = *(uint *)(lVar37 + 0x18);
                iVar35 = (int)uVar24 >> 5;
                uVar27 = (ulonglong)(uint)(1 << ((byte)uVar24 & 0x1f));
                uVar22 = -1 << ((byte)uVar24 & 0x1f);
                uVar20 = uVar24 & 0xffffffe0;
                uVar7 = *(uint *)(local_338 + 0x440);
                uVar23 = uVar24;
                if (uVar7 != uVar24) {
                  uVar27 = *(ulonglong *)(local_338 + 0x438);
                  if (*(ulonglong *)(local_338 + 0x438) == 0) {
                    uVar27 = local_328;
                  }
                  lVar37 = (longlong)iVar35;
                  uVar23 = *(uint *)(uVar27 + lVar37 * 4) & uVar22;
                  if (uVar23 == 0) {
                    iVar29 = uVar7 + 0x1e;
                    if (-1 < (int)(uVar7 - 1)) {
                      iVar29 = uVar7 - 1;
                    }
                    iVar29 = iVar29 >> 5;
                    iVar8 = iVar29;
                    if (iVar29 < iVar35) {
                      iVar8 = iVar35;
                    }
                    if (iVar35 < iVar29) {
                      lVar15 = iVar8 - lVar37;
                      do {
                        uVar20 = uVar20 + 0x20;
                        lVar37 = lVar37 + 1;
                        uVar23 = *(uint *)(uVar27 + lVar37 * 4);
                        if (uVar23 != 0) {
                          uVar22 = 0xffffffff;
                          iVar35 = (int)lVar37;
                          goto LAB_142fd9a14;
                        }
                        lVar15 = lVar15 + -1;
                      } while (lVar15 != 0);
                    }
                    goto LAB_142fd9b33;
                  }
LAB_142fd9a14:
                  uVar27 = (ulonglong)(-uVar23 & uVar23);
                  uVar19 = uVar27 * 2 + 1;
                  lVar37 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                    }
                  }
                  uVar23 = (uVar20 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                  if ((int)uVar7 <= (int)uVar23) {
                    uVar23 = uVar7;
                  }
                }
                if ((int)uVar23 < (int)(uVar24 + 0x200) && (int)uVar23 < (int)uVar7) {
                  do {
                    iVar29 = (int)local_330[1];
                    *(uint *)(local_330 + 1) = iVar29 + 1U;
                    if (*(uint *)((longlong)local_330 + 0xc) < iVar29 + 1U) {
                      FUN_144ab7494(local_330,iVar29);
                      lVar14 = local_338;
                      pdVar36 = local_318;
                    }
                    *(ulonglong *)(*local_330 + (longlong)iVar29 * 8) = uVar23 | local_308;
                    uVar22 = uVar22 & ~(uint)uVar27;
                    uVar27 = *(ulonglong *)(lVar14 + 0x438);
                    if (*(ulonglong *)(lVar14 + 0x438) == 0) {
                      uVar27 = local_328;
                    }
                    iVar29 = *(int *)(lVar14 + 0x440);
                    lVar37 = (longlong)iVar35;
                    uVar7 = *(uint *)(uVar27 + lVar37 * 4) & uVar22;
                    if (uVar7 == 0) {
                      iVar8 = iVar29 + 0x1e;
                      if (-1 < iVar29 + -1) {
                        iVar8 = iVar29 + -1;
                      }
                      iVar8 = iVar8 >> 5;
                      iVar9 = iVar8;
                      if (iVar8 < iVar35) {
                        iVar9 = iVar35;
                      }
                      if (iVar8 <= iVar35) break;
                      lVar15 = 0;
                      while( true ) {
                        uVar20 = uVar20 + 0x20;
                        uVar7 = *(uint *)(uVar27 + lVar37 * 4 + 4 + lVar15 * 4);
                        if (uVar7 != 0) break;
                        lVar15 = lVar15 + 1;
                        if (iVar9 - lVar37 == lVar15) goto LAB_142fd9b33;
                      }
                      iVar35 = iVar35 + (int)lVar15 + 1;
                      uVar22 = 0xffffffff;
                    }
                    uVar27 = (ulonglong)(-uVar7 & uVar7);
                    uVar19 = uVar27 * 2 + 1;
                    lVar37 = 0x3f;
                    if (uVar19 != 0) {
                      for (; uVar19 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                      }
                    }
                    uVar23 = (uVar20 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                    if ((iVar29 <= (int)uVar23) || ((int)(uVar24 + 0x200) <= (int)uVar23)) break;
                  } while( true );
                }
              }
              else {
                dVar40 = dVar39 * 0.5;
                uVar24 = *(uint *)(lVar37 + 0x18);
                iVar35 = (int)uVar24 >> 5;
                uVar27 = (ulonglong)(uint)(1 << ((byte)uVar24 & 0x1f));
                uVar20 = -1 << ((byte)uVar24 & 0x1f);
                uVar22 = uVar24 & 0xffffffe0;
                uVar7 = *(uint *)(local_338 + 0x440);
                uVar23 = uVar24;
                if (uVar7 != uVar24) {
                  uVar27 = *(ulonglong *)(local_338 + 0x438);
                  if (*(ulonglong *)(local_338 + 0x438) == 0) {
                    uVar27 = local_328;
                  }
                  lVar15 = (longlong)iVar35;
                  uVar23 = *(uint *)(uVar27 + lVar15 * 4) & uVar20;
                  if (uVar23 == 0) {
                    iVar29 = uVar7 + 0x1e;
                    if (-1 < (int)(uVar7 - 1)) {
                      iVar29 = uVar7 - 1;
                    }
                    iVar29 = iVar29 >> 5;
                    iVar8 = iVar29;
                    if (iVar29 < iVar35) {
                      iVar8 = iVar35;
                    }
                    if (iVar35 < iVar29) {
                      lVar30 = iVar8 - lVar15;
                      do {
                        uVar22 = uVar22 + 0x20;
                        lVar15 = lVar15 + 1;
                        uVar23 = *(uint *)(uVar27 + lVar15 * 4);
                        if (uVar23 != 0) {
                          uVar20 = 0xffffffff;
                          iVar35 = (int)lVar15;
                          goto LAB_142fd96bd;
                        }
                        lVar30 = lVar30 + -1;
                      } while (lVar30 != 0);
                    }
                    goto LAB_142fd9b33;
                  }
LAB_142fd96bd:
                  uVar27 = (ulonglong)(-uVar23 & uVar23);
                  uVar19 = uVar27 * 2 + 1;
                  lVar15 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                    }
                  }
                  uVar23 = (uVar22 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                  if ((int)uVar7 <= (int)uVar23) {
                    uVar23 = uVar7;
                  }
                }
                if ((int)uVar23 < (int)(uVar24 + 0x200) && (int)uVar23 < (int)uVar7) {
                  local_310 = local_310 + dVar40;
                  local_320 = local_320 + dVar40;
                  unaff_XMM9._8_8_ = dVar39;
                  unaff_XMM9._0_8_ = dVar39;
                  do {
                    if (0 < *(int *)(pdVar36 + 0x42)) {
                      uVar13 = uVar23 - *(int *)(lVar37 + 0x18);
                      uVar34 = uVar13 >> 6;
                      dVar41 = *pdVar36 + (double)(uVar13 & 7) * dVar39 + local_320;
                      dVar50 = pdVar36[1] + (double)(uVar13 >> 3 & 7) * dVar39 + local_310;
                      dVar51 = (double)(int)(char)uVar34 * dVar39 + dVar64 + dVar40 + pdVar36[2];
                      pdVar16 = (double *)pdVar36[0x40];
                      if ((double *)pdVar36[0x40] == (double *)0x0) {
                        pdVar16 = local_2e0;
                      }
                      iVar29 = 0;
                      lVar14 = local_338;
                      do {
                        dVar61 = (dVar51 * pdVar16[8] + dVar50 * pdVar16[4] + dVar41 * *pdVar16) -
                                 pdVar16[0xc];
                        unaff_XMM15_Db = (undefined4)((ulonglong)dVar61 >> 0x20);
                        dVar6 = (dVar51 * pdVar16[9] + dVar50 * pdVar16[5] + dVar41 * pdVar16[1]) -
                                pdVar16[0xd];
                        unaff_XMM12._0_8_ = ABS(pdVar16[2]) * dVar39;
                        unaff_XMM12._8_8_ = ABS(pdVar16[3]) * dVar39;
                        unaff_XMM11._0_8_ = ABS(pdVar16[4]) * dVar39 + ABS(*pdVar16) * dVar39;
                        unaff_XMM11._8_8_ = ABS(pdVar16[5]) * dVar39 + ABS(pdVar16[1]) * dVar39;
                        auVar53._8_8_ =
                             -(ulonglong)(ABS(pdVar16[9] * dVar39) + unaff_XMM11._8_8_ < dVar6);
                        auVar53._0_8_ =
                             -(ulonglong)(ABS(pdVar16[8] * dVar39) + unaff_XMM11._0_8_ < dVar61);
                        auVar55._8_8_ =
                             -(ulonglong)
                              (ABS(pdVar16[0xb] * dVar39) +
                               ABS(pdVar16[7]) * dVar39 + unaff_XMM12._8_8_ <
                              (dVar51 * pdVar16[0xb] + dVar50 * pdVar16[7] + dVar41 * pdVar16[3]) -
                              pdVar16[0xf]);
                        auVar55._0_8_ =
                             -(ulonglong)
                              (ABS(pdVar16[10] * dVar39) +
                               ABS(pdVar16[6]) * dVar39 + unaff_XMM12._0_8_ <
                              (dVar51 * pdVar16[10] + dVar50 * pdVar16[6] + dVar41 * pdVar16[2]) -
                              pdVar16[0xe]);
                        uVar34 = movmskpd(uVar34,auVar53);
                        uVar13 = movmskpd((int)lVar14,auVar55);
                        if ((uVar13 & 0x3fffffff) != 0 || uVar34 != 0) goto LAB_142fd995a;
                        pdVar16 = pdVar16 + 0x10;
                        iVar29 = iVar29 + 4;
                        lVar14 = 0;
                      } while (iVar29 < *(int *)(pdVar36 + 0x42));
                    }
                    local_2e8 = CONCAT44(local_2e8._4_4_,uVar20);
                    uVar3 = *(undefined8 *)
                             (*(longlong *)(local_338 + 0x418) + (longlong)(int)uVar23 * 8);
                    *(uint *)(local_330 + 4) =
                         (uint)(ushort)((ulonglong)uVar3 >> 0x30) + (int)local_330[4] +
                         ((uint)((ulonglong)uVar3 >> 0x20) & 0xffff);
                    iVar29 = (int)local_330[1];
                    *(uint *)(local_330 + 1) = iVar29 + 1U;
                    if (*(uint *)((longlong)local_330 + 0xc) < iVar29 + 1U) {
                      FUN_144ab7494(local_330,iVar29);
                      pdVar36 = local_318;
                    }
                    *(ulonglong *)(*local_330 + (longlong)iVar29 * 8) = uVar23 | local_308;
                    uVar7 = *(uint *)(local_338 + 0x440);
                    uVar20 = (uint)local_2e8;
LAB_142fd995a:
                    uVar20 = uVar20 & ~(uint)uVar27;
                    uVar27 = *(ulonglong *)(local_338 + 0x438);
                    if (*(ulonglong *)(local_338 + 0x438) == 0) {
                      uVar27 = local_328;
                    }
                    lVar15 = (longlong)iVar35;
                    uVar23 = *(uint *)(uVar27 + lVar15 * 4) & uVar20;
                    lVar14 = local_338;
                    if (uVar23 == 0) {
                      iVar29 = uVar7 + 0x1e;
                      if (-1 < (int)(uVar7 - 1)) {
                        iVar29 = uVar7 - 1;
                      }
                      iVar29 = iVar29 >> 5;
                      iVar8 = iVar29;
                      if (iVar29 < iVar35) {
                        iVar8 = iVar35;
                      }
                      if (iVar29 <= iVar35) break;
                      lVar30 = 0;
                      while( true ) {
                        uVar22 = uVar22 + 0x20;
                        uVar23 = *(uint *)(uVar27 + lVar15 * 4 + 4 + lVar30 * 4);
                        if (uVar23 != 0) break;
                        lVar30 = lVar30 + 1;
                        if (iVar8 - lVar15 == lVar30) goto LAB_142fd9b33;
                      }
                      iVar35 = iVar35 + (int)lVar30 + 1;
                      uVar20 = 0xffffffff;
                    }
                    uVar27 = (ulonglong)(-uVar23 & uVar23);
                    uVar19 = uVar27 * 2 + 1;
                    lVar15 = 0x3f;
                    if (uVar19 != 0) {
                      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                      }
                    }
                    uVar23 = (uVar22 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                    if (((int)uVar7 <= (int)uVar23) || ((int)(uVar24 + 0x200) <= (int)uVar23))
                    break;
                  } while( true );
                }
              }
            }
LAB_142fd9b33:
            uVar24 = *(uint *)(lVar14 + 0x288);
            uVar7 = uVar26 + 1;
            if (uVar26 + 1 < uVar24) {
              uVar7 = uVar24;
            }
            do {
              uVar23 = uVar7;
              if (uVar7 - 1 == uVar26) break;
              uVar26 = uVar26 + 1;
              uVar23 = uVar26;
            } while (SBORROW4(0,*(int *)(*(longlong *)(local_338 + 0x290) +
                                        (longlong)(int)uVar26 * 4)));
            uVar26 = uVar23;
          } while (uVar26 != uVar24);
        }
      }
      else {
        lVar14 = 1L << ((char)*(int *)(lVar37 + 0x68) + 1U & 0x3f);
        auVar58._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
        auVar58._0_8_ = lVar14;
        auVar58._12_4_ = 0x45300000;
        dVar39 = pdVar36[0x47] +
                 (double)((float)(((double)CONCAT44(0x43300000,(int)lVar14) - 4503599627370496.0) +
                                 (auVar58._8_8_ - 1.9342813113834067e+25)) * 0.5);
        dVar40 = *(double *)(lVar37 + 0x70 + (longlong)*(int *)(lVar37 + 0x68) * 8);
        dVar61 = (pdVar36[0x46] - dVar39) * dVar40;
        dVar41 = (pdVar36[0x45] - dVar39) * dVar40;
        dVar64 = (pdVar36[0x44] - dVar39) * dVar40;
        dVar51 = (pdVar36[0x46] + dVar39) * dVar40;
        dVar50 = (pdVar36[0x45] + dVar39) * dVar40;
        dVar40 = (dVar39 + pdVar36[0x44]) * dVar40;
        lVar30 = ((longlong)ROUND(dVar51 + dVar51 + -0.5) >> 1) -
                 ((longlong)ROUND(dVar61 + dVar61 + -0.5) >> 1);
        lVar15 = ((longlong)ROUND(dVar50 + dVar50 + -0.5) >> 1) -
                 ((longlong)ROUND(dVar41 + dVar41 + -0.5) >> 1);
        lVar14 = ((longlong)ROUND(dVar40 + dVar40 + -0.5) >> 1) -
                 ((longlong)ROUND(dVar64 + dVar64 + -0.5) >> 1);
        if (lVar14 < lVar15) {
          lVar14 = lVar15;
        }
        if (lVar14 < lVar30) {
          lVar14 = lVar30;
        }
        if (*(int *)(lVar37 + 0x490) < lVar14) goto LAB_142fd93a9;
        *(int *)(local_330 + 4) = (int)local_330[4] + *(int *)(lVar37 + 0x48c);
        puVar25 = (uint *)(lVar37 + 0x448);
        uVar24 = *(uint *)(lVar37 + 0x460);
        if (uVar24 == 0) {
          uVar19 = 1;
          uVar27 = 0;
          uVar17 = 0;
          iVar35 = 0;
        }
        else {
          puVar10 = *(uint **)(lVar37 + 0x458);
          if (*(uint **)(lVar37 + 0x458) == (uint *)0x0) {
            puVar10 = puVar25;
          }
          uVar26 = *puVar10;
          if (uVar26 == 0) {
            iVar35 = uVar24 + 0x1e;
            if (-1 < (int)(uVar24 - 1)) {
              iVar35 = uVar24 - 1;
            }
            uVar27 = 0;
            uVar19 = (ulonglong)(uint)(iVar35 >> 5);
            if (iVar35 >> 5 < 1) {
              uVar19 = uVar27;
            }
            iVar35 = 0;
            do {
              if (uVar19 == uVar27) goto LAB_142fda8c1;
              iVar35 = iVar35 + 0x20;
              uVar26 = puVar10[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar27 = 0;
            iVar35 = 0;
          }
          uVar19 = (ulonglong)(-uVar26 & uVar26);
          uVar17 = uVar19 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar26 = (iVar35 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar24 <= (int)uVar26) {
            uVar26 = uVar24;
          }
          uVar17 = (ulonglong)uVar26;
        }
        if ((int)uVar17 < (int)uVar24) {
          local_168 = lVar37 + 0x2d8;
          local_170 = lVar37 + 0x2c0;
          local_308 = local_308 << 0x20;
          uVar26 = 0xffffffff;
          local_218 = puVar25;
          do {
            lVar14 = 1L << ((char)uVar17 - 2U & 0x3f);
            auVar42._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
            auVar42._0_8_ = lVar14;
            auVar42._12_4_ = 0x45300000;
            fVar60 = (float)(((double)CONCAT44(0x43300000,(int)lVar14) - 4503599627370496.0) +
                            (auVar42._8_8_ - 1.9342813113834067e+25));
            dVar41 = (double)(fVar60 * 0.5) + pdVar36[0x47];
            dVar40 = *(double *)(lVar37 + 0x58 + (longlong)(int)uVar17 * 8);
            dVar64 = (pdVar36[0x46] - dVar41) * dVar40;
            lVar15 = (longlong)ROUND(dVar64 + dVar64 + -0.5);
            dVar64 = (pdVar36[0x46] + dVar41) * dVar40;
            lVar30 = (longlong)ROUND(dVar64 + dVar64 + -0.5);
            lVar14 = lVar15 >> 4;
            local_1e8 = lVar30 >> 4;
            local_268 = uVar17;
            if (lVar14 <= local_1e8) {
              local_320 = (double)CONCAT44(local_320._4_4_,fVar60);
              dVar64 = (pdVar36[0x45] - dVar41) * dVar40;
              dVar39 = (pdVar36[0x44] - dVar41) * dVar40;
              local_1f0 = lVar15 >> 1;
              local_280 = (longlong)ROUND(dVar64 + dVar64 + -0.5);
              local_1c0 = local_280 >> 1;
              local_2c8 = (longlong)ROUND(dVar39 + dVar39 + -0.5);
              local_190 = local_2c8 >> 1;
              dVar64 = (pdVar36[0x45] + dVar41) * dVar40;
              dVar40 = (dVar41 + pdVar36[0x44]) * dVar40;
              local_278 = (longlong)ROUND(dVar64 + dVar64 + -0.5);
              local_1f8 = lVar30 >> 1;
              local_1c8 = local_278 >> 1;
              local_258 = (longlong)ROUND(dVar40 + dVar40 + -0.5);
              local_250 = local_258 >> 1;
              local_280 = local_280 >> 4;
              lVar37 = 1L << ((char)uVar17 + 1U & 0x3f);
              local_2c8 = local_2c8 >> 4;
              local_278 = local_278 >> 4;
              auVar43._8_4_ = (int)((ulonglong)lVar37 >> 0x20);
              auVar43._0_8_ = lVar37;
              auVar43._12_4_ = 0x45300000;
              local_258 = local_258 >> 4;
              local_1d0 = local_190 + local_2c8 * -8;
              local_200 = local_1c0 + local_280 * -8;
              uVar31 = local_1f0 + lVar14 * -8;
              local_1d8 = local_250 + local_2c8 * -8;
              local_298 = (int)uVar17 * 0x4b5fa4d9;
              local_2d8 = (double)(float)(((double)CONCAT44(0x43300000,(int)lVar37) -
                                          4503599627370496.0) +
                                         (auVar43._8_8_ - 1.9342813113834067e+25));
              local_2a0 = uVar26;
              local_29c = iVar35;
              local_210 = uVar19;
              local_208 = uVar27;
              do {
                local_270 = 7;
                if ((longlong)uVar31 < 7) {
                  local_270 = uVar31;
                }
                if ((longlong)local_270 < 1) {
                  local_270 = 0;
                }
                local_2d0 = lVar14;
                local_1e0 = uVar31;
                if (local_280 <= local_278) {
                  local_1b8 = (ulonglong)(uint)((int)local_270 << 6);
                  local_294 = (int)lVar14 * 0x4c72a443 + local_298;
                  local_198 = local_1f0 + lVar14 * -8;
                  if (6 < (longlong)local_198) {
                    local_198 = 7;
                  }
                  uVar27 = 0;
                  if (0 < (longlong)local_198) {
                    uVar27 = local_198;
                  }
                  local_240 = local_1f8 + lVar14 * -8;
                  if (6 < local_240) {
                    local_240 = 7;
                  }
                  if (local_240 < 1) {
                    local_240 = 0;
                  }
                  local_1a8 = (double)lVar14 * local_2d8;
                  local_260 = uVar27 >> 1 & 0x7f;
                  local_188 = CONCAT71((int7)((ulonglong)local_240 >> 8),(byte)local_240 >> 1);
                  local_28c = (int)local_188 + 1;
                  local_2f8 = local_280;
                  uVar27 = local_200;
                  do {
                    local_248 = 7;
                    if ((longlong)uVar27 < 7) {
                      local_248 = uVar27;
                    }
                    if ((longlong)local_248 < 1) {
                      local_248 = 0;
                    }
                    local_1b0 = uVar27;
                    if (local_2c8 <= local_258) {
                      local_290 = (int)local_1b8 + (int)local_248 * 8;
                      local_284 = (int)local_2f8 * 0x499d0f21 + local_294;
                      local_1a0 = (double)local_2f8 * local_2d8;
                      local_140 = local_1c0 + local_2f8 * -8;
                      if (6 < (longlong)local_140) {
                        local_140 = 7;
                      }
                      uVar27 = 0;
                      if (0 < (longlong)local_140) {
                        uVar27 = local_140;
                      }
                      local_2e8 = local_1c8 + local_2f8 * -8;
                      if (6 < local_2e8) {
                        local_2e8 = 7;
                      }
                      if (local_2e8 < 1) {
                        local_2e8 = 0;
                      }
                      local_178 = CONCAT71((int7)((ulonglong)local_2e8 >> 8),(byte)local_2e8 >> 1);
                      local_180 = uVar27 >> 1 & 0x7f;
                      local_288 = (int)local_178 + 1;
                      local_160 = (ulonglong)(uint)((int)local_248 * 8 + (int)local_1b8);
                      lVar14 = 0;
                      uVar27 = local_1d8;
                      uVar19 = local_1d0;
                      lVar37 = local_2c8;
                      do {
                        local_138 = 7;
                        if ((longlong)uVar19 < 7) {
                          local_138 = uVar19;
                        }
                        if ((longlong)local_138 < 1) {
                          local_138 = 0;
                        }
                        uVar17 = 7;
                        if ((longlong)uVar27 < 7) {
                          uVar17 = uVar27;
                        }
                        if ((longlong)uVar17 < 1) {
                          uVar17 = 0;
                        }
                        uVar31 = local_138 >> 1 & 0x7fffffff;
                        uVar32 = local_250 + (local_2c8 + lVar14) * -8;
                        if (6 < (longlong)uVar32) {
                          uVar32 = 7;
                        }
                        local_238 = (double *)(ulonglong)(uint)((int)local_160 + (int)local_138);
                        if ((longlong)uVar32 < 1) {
                          uVar32 = 0;
                        }
                        lVar30 = (uVar32 >> 1 & 0x7fffffff) - uVar31;
                        uVar26 = (int)lVar37 * 0x448e2f4b + local_284 & 0x7fffffff;
                        uVar24 = *(uint *)(local_338 + 0x2f0);
                        uVar7 = uVar26 & uVar24;
                        lVar15 = *(longlong *)(local_338 + 0x2e0);
                        if (*(longlong *)(local_338 + 0x2e0) == 0) {
                          lVar15 = local_168;
                        }
                        do {
                          local_2f0 = lVar37;
                          local_158 = uVar19;
                          local_150 = lVar14;
                          local_148 = uVar27;
                          if (*(uint *)(lVar15 + (longlong)(int)uVar7 * 4) == uVar26) {
                            lVar4 = *(longlong *)(local_338 + 0x280);
                            lVar18 = *(longlong *)(local_338 + 0x2c8);
                            if (*(longlong *)(local_338 + 0x2c8) == 0) {
                              lVar18 = local_170;
                            }
                            iVar35 = *(int *)(lVar18 + (longlong)(int)uVar7 * 4);
                            lVar18 = (longlong)iVar35 * 0x20;
                            if ((((*(int *)(lVar4 + lVar18) == (int)lVar37) &&
                                 (lVar28 = lVar4 + lVar18, *(int *)(lVar28 + 4) == (int)local_2f8))
                                && (*(int *)(lVar28 + 8) == (int)local_2d0)) &&
                               ((int)local_268 == *(int *)(lVar28 + 0xc))) {
                              if (iVar35 != -1) {
                                local_230 = local_190 + lVar37 * -8;
                                if (6 < (longlong)local_230) {
                                  local_230 = 7;
                                }
                                local_2b8 = local_250 + lVar37 * -8;
                                if (6 < (longlong)local_2b8) {
                                  local_2b8 = 7;
                                }
                                if ((longlong)local_2b8 < 1) {
                                  local_2b8 = 0;
                                }
                                fVar62 = fVar60 * 0.5;
                                uVar27 = 0;
                                unaff_XMM9 = pmovsxbq(unaff_XMM9,0x100);
                                unaff_XMM11 = pmovsxbq(unaff_XMM11,0x101);
                                unaff_XMM12 = pmovsxbq(unaff_XMM12,0x202);
                                if ((byte)local_260 <= (byte)local_188) {
                                  uVar27 = 0;
                                  if (0 < (longlong)local_230) {
                                    uVar27 = local_230;
                                  }
                                  bVar33 = (byte)(uVar27 >> 1) & 0x7f;
                                  auVar52._8_4_ = (int)lVar30;
                                  auVar52._0_8_ = lVar30;
                                  auVar52._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
                                  uVar27 = 0;
                                  uVar19 = local_260;
                                  do {
                                    if ((byte)local_180 <= (byte)local_178) {
                                      uVar32 = local_180;
                                      do {
                                        if (bVar33 <= ((byte)(local_2b8 >> 1) & 0x7f)) {
                                          lVar14 = uVar19 * 0x10 + uVar32 * 4;
                                          auVar56._8_8_ = 0;
                                          auVar56._0_8_ = uVar27;
                                          auVar44._8_4_ = (int)lVar14;
                                          auVar44._0_8_ = lVar14;
                                          auVar44._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
                                          lVar28 = 2;
                                          lVar15 = (ulonglong)(uint)bVar33 + unaff_XMM9._0_8_;
                                          lVar30 = (ulonglong)(uint)bVar33 + unaff_XMM9._8_8_;
                                          do {
                                            auVar58 = auVar56;
                                            uVar27 = auVar44._8_8_ + lVar30 & 0xffffffff;
                                            auVar65._0_8_ = unaff_XMM11._0_8_ << uVar27;
                                            auVar65._8_8_ = unaff_XMM11._8_8_ << uVar27;
                                            uVar27 = lVar14 + lVar15 & 0xffffffff;
                                            auVar57._0_8_ = unaff_XMM11._0_8_ << uVar27;
                                            auVar57._8_8_ = unaff_XMM11._8_8_ << uVar27;
                                            auVar56 = pblendw(auVar57,auVar65,0xf0);
                                            auVar56 = auVar56 | auVar58;
                                            lVar15 = lVar15 + unaff_XMM12._0_8_;
                                            lVar30 = lVar30 + unaff_XMM12._8_8_;
                                            lVar2 = (((uVar17 >> 1 & 0x7fffffff) - uVar31) + 2 &
                                                    0xfffffffffffffffe) + lVar28;
                                            lVar28 = lVar28 + -2;
                                          } while (lVar2 != 4);
                                          lVar28 = -lVar28;
                                          auVar45._8_4_ = (int)lVar28;
                                          auVar45._0_8_ = lVar28;
                                          auVar45._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
                                          auVar46 = (auVar45 | unaff_XMM9) ^ _DAT_149931e80;
                                          auVar47._0_8_ =
                                               -(ulonglong)
                                                (SUB168(auVar52 ^ _DAT_149931e80,0) < auVar46._0_8_)
                                          ;
                                          auVar47._8_8_ =
                                               -(ulonglong)
                                                (SUB168(auVar52 ^ _DAT_149931e80,8) < auVar46._8_8_)
                                          ;
                                          auVar58 = blendvpd(auVar56,auVar58,auVar47);
                                          uVar27 = auVar58._8_8_ | auVar58._0_8_;
                                          fVar60 = local_320._0_4_;
                                        }
                                        uVar32 = uVar32 + 1;
                                      } while ((char)local_288 != (char)uVar32);
                                    }
                                    uVar19 = uVar19 + 1;
                                  } while ((char)local_28c != (char)uVar19);
                                }
                                puVar21 = (ulonglong *)(lVar4 + lVar18 + 0x10);
                                if (((*puVar21 & uVar27) != 0) && ((longlong)local_198 <= local_240)
                                   ) {
                                  fVar62 = fVar62 + (float)local_318[0x47];
                                  fVar69 = (float)(local_318[0x46] - local_1a8);
                                  unaff_XMM11 = ZEXT416((uint)fVar69);
                                  fVar73 = (float)(local_318[0x45] - local_1a0);
                                  fVar70 = (float)(local_318[0x44] - (double)lVar37 * local_2d8);
                                  unaff_XMM12 = ZEXT416((uint)fVar70);
                                  bVar33 = (byte)local_2b8;
                                  local_2fc = local_290;
                                  local_2c0 = local_270;
                                  do {
                                    if ((longlong)local_140 <= local_2e8) {
                                      local_130 = (longlong)(char)((char)local_2c0 >> 1) << 4;
                                      fVar72 = (float)(int)(char)local_2c0 * fVar60;
                                      fVar67 = fVar72 + fVar60;
                                      fVar38 = fVar69 - fVar67;
                                      local_310 = (double)CONCAT44(local_310._4_4_,fVar38 * fVar38);
                                      local_2b0 = (double *)
                                                  CONCAT44(local_2b0._4_4_,
                                                           (fVar69 - fVar72) * (fVar69 - fVar72));
                                      local_2e0 = local_238;
                                      local_328 = local_248;
                                      plVar11 = local_330;
                                      lVar37 = local_338;
                                      iVar35 = local_2fc;
                                      do {
                                        if ((longlong)local_230 <= (longlong)local_2b8) {
                                          cVar12 = (char)local_328;
                                          iVar29 = (int)local_130;
                                          fVar71 = (float)(int)cVar12 * fVar60;
                                          fVar63 = fVar71 + fVar60;
                                          fVar38 = fVar73 - fVar63;
                                          auVar66._4_4_ = unaff_XMM15_Db;
                                          auVar66._0_4_ = fVar73;
                                          auVar66._8_4_ = SUB84(dVar6,0);
                                          auVar66._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                                          unaff_XMM9._4_12_ = auVar66._4_12_;
                                          unaff_XMM9._0_4_ = (fVar73 - fVar71) * (fVar73 - fVar71);
                                          uVar27 = local_138;
                                          pdVar36 = local_2e0;
                                          do {
                                            uVar24 = (uint)uVar27;
                                            if ((*puVar21 >>
                                                 ((ulonglong)
                                                  ((uint)((byte)((uVar27 & 0xffffffff) >> 1) & 0x7f)
                                                  + iVar29 + (cVar12 >> 1) * 4) & 0x3f) & 1) != 0) {
                                              if (*(char *)(lVar37 + 0x494) == '\x01') {
                                                fVar49 = (float)(int)(char)uVar27 * fVar60;
                                                if (fVar70 < fVar49) {
LAB_142fda661:
                                                  auVar48 = ZEXT416((uint)((fVar70 - fVar49) *
                                                                          (fVar70 - fVar49)));
                                                }
                                                else {
                                                  fVar49 = fVar49 + fVar60;
                                                  auVar48 = ZEXT816(0);
                                                  if (fVar49 < fVar70) goto LAB_142fda661;
                                                }
                                                if (fVar73 < fVar71) {
                                                  auVar48._0_4_ = auVar48._0_4_ + unaff_XMM9._0_4_;
                                                }
                                                else if (fVar63 < fVar73) {
                                                  auVar48._0_4_ = auVar48._0_4_ + fVar38 * fVar38;
                                                }
                                                if (fVar69 < fVar72) {
                                                  auVar48._0_4_ = auVar48._0_4_ + local_2b0._0_4_;
                                                }
                                                else if (fVar67 < fVar69) {
                                                  auVar48._0_4_ = auVar48._0_4_ + local_310._0_4_;
                                                }
                                                if (fVar62 * fVar62 < auVar48._0_4_)
                                                goto LAB_142fda70e;
                                              }
                                              iVar8 = *(int *)(lVar4 + lVar18 + 0x18);
                                              uVar3 = *(undefined8 *)
                                                       (*(longlong *)(lVar37 + 0x418) +
                                                       ((longlong)pdVar36 + (longlong)iVar8) * 8);
                                              if (-1 < (int)uVar3) {
                                                *(uint *)(plVar11 + 4) =
                                                     (int)plVar11[4] +
                                                     (uint)(ushort)((ulonglong)uVar3 >> 0x30) +
                                                     ((uint)((ulonglong)uVar3 >> 0x20) & 0xffff);
                                                iVar9 = (int)plVar11[1];
                                                *(uint *)(plVar11 + 1) = iVar9 + 1U;
                                                if (*(uint *)((longlong)plVar11 + 0xc) < iVar9 + 1U)
                                                {
                                                  FUN_144ab7494(plVar11,iVar9);
                                                  plVar11 = local_330;
                                                  lVar37 = local_338;
                                                  fVar60 = local_320._0_4_;
                                                }
                                                *(ulonglong *)(*plVar11 + (longlong)iVar9 * 8) =
                                                     iVar8 + iVar35 + uVar24 | local_308;
                                              }
                                            }
LAB_142fda70e:
                                            pdVar36 = (double *)((longlong)pdVar36 + 1);
                                            uVar27 = (ulonglong)(uVar24 + 1);
                                          } while (uVar24 < bVar33);
                                        }
                                        uVar24 = (uint)local_328;
                                        local_328 = (ulonglong)(uVar24 + 1);
                                        iVar35 = iVar35 + 8;
                                        local_2e0 = local_2e0 + 1;
                                      } while (uVar24 < (uint)local_2e8);
                                    }
                                    uVar24 = (uint)local_2c0;
                                    local_2c0 = (ulonglong)(uVar24 + 1);
                                    local_2fc = local_2fc + 0x40;
                                    local_238 = local_238 + 8;
                                  } while (uVar24 < (uint)local_240);
                                }
                              }
                              break;
                            }
                          }
                          uVar7 = uVar7 + 1 & uVar24;
                        } while (uVar7 != (*(int *)(local_338 + 0x2f4) + uVar26 + 1 & uVar24));
                        lVar37 = local_2f0 + 1;
                        uVar19 = local_158 - 8;
                        lVar14 = local_150 + 1;
                        uVar27 = local_148 - 8;
                      } while (local_2f0 < local_258);
                    }
                    lVar37 = local_2f8 + 1;
                    uVar27 = local_1b0 - 8;
                    bVar5 = local_2f8 < local_278;
                    local_2f8 = lVar37;
                  } while (bVar5);
                }
                lVar14 = local_2d0 + 1;
                uVar31 = local_1e0 - 8;
              } while (local_2d0 < local_1e8);
              uVar24 = *(uint *)(local_338 + 0x460);
              puVar25 = local_218;
              uVar27 = local_208;
              uVar19 = local_210;
              lVar37 = local_338;
              pdVar36 = local_318;
              uVar26 = local_2a0;
              iVar35 = local_29c;
            }
            uVar26 = uVar26 & ~(uint)uVar19;
            puVar10 = *(uint **)(lVar37 + 0x458);
            if (*(uint **)(lVar37 + 0x458) == (uint *)0x0) {
              puVar10 = puVar25;
            }
            iVar29 = (int)uVar27;
            lVar14 = (longlong)iVar29;
            uVar7 = puVar10[lVar14] & uVar26;
            if (uVar7 == 0) {
              iVar8 = uVar24 + 0x1e;
              if (-1 < (int)(uVar24 - 1)) {
                iVar8 = uVar24 - 1;
              }
              iVar8 = iVar8 >> 5;
              iVar9 = iVar8;
              if (iVar8 < iVar29) {
                iVar9 = iVar29;
              }
              if (iVar8 <= iVar29) break;
              lVar15 = 0;
              while( true ) {
                iVar35 = iVar35 + 0x20;
                uVar7 = puVar10[lVar14 + lVar15 + 1];
                if (uVar7 != 0) break;
                lVar15 = lVar15 + 1;
                if (iVar9 - lVar14 == lVar15) goto LAB_142fda8c1;
              }
              uVar27 = (ulonglong)(iVar29 + (int)lVar15 + 1);
              uVar26 = 0xffffffff;
            }
            uVar19 = (ulonglong)(-uVar7 & uVar7);
            uVar17 = uVar19 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar23 = (iVar35 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            uVar7 = uVar23;
            if ((int)uVar24 <= (int)uVar23) {
              uVar7 = uVar24;
            }
            uVar17 = (ulonglong)uVar7;
          } while ((int)uVar23 < (int)uVar24);
        }
      }
LAB_142fda8c1:
      param_1 = local_220;
      piVar1 = (int *)(local_220[3] + 0x24);
      *piVar1 = *piVar1 + (*(int *)(local_220[3] + 8) - local_2a4) * *(int *)(pdVar36 + 0x49);
      lVar37 = local_220[3];
      iVar35 = *(int *)(lVar37 + 0x18);
      *(uint *)(lVar37 + 0x18) = iVar35 + 1U;
      if (*(uint *)(lVar37 + 0x1c) < iVar35 + 1U) {
        FUN_144ab7aa2((longlong *)(lVar37 + 0x10),iVar35);
        pdVar36 = local_318;
      }
      *(double *)(*(longlong *)(lVar37 + 0x10) + (longlong)iVar35 * 8) = pdVar36[0x48];
      pdVar36 = pdVar36 + 0x4a;
    } while (pdVar36 != local_228);
  }
  *(undefined4 *)(param_1[3] + 0x30) = *(undefined4 *)(*(longlong *)*param_1 + 0x488);
  *(undefined4 *)(param_1[3] + 0x34) = *(undefined4 *)(*(longlong *)*param_1 + 0x48c);
  *(undefined8 *)(param_1[3] + 0x28) = *param_1;
  if ((local_f0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fdaa76 FUN_142fdaa76 body=254 status=ok
// SIG undefined FUN_142fdaa76(void)

void FUN_142fdaa76(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x198)) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 400) + lVar5 * 0x10);
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_1 + 0x98);
      if (0 < *(int *)(param_1 + 0xa8)) {
        lVar3 = 0;
        lVar4 = 0;
        do {
          (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,*(longlong *)(param_1 + 1000) + lVar3);
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 0x13c10;
        } while (lVar4 < *(int *)(param_1 + 0xa8));
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x198));
  }
  iVar1 = *(int *)(param_2 + 0x610);
  *(uint *)(param_2 + 0x610) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x614) < iVar1 + 1U) {
    FUN_140184790((longlong *)(param_2 + 0x608),iVar1);
  }
  lVar5 = *(longlong *)(param_2 + 0x608);
  lVar3 = (longlong)iVar1 * 0x40;
  *(undefined1 **)(lVar5 + lVar3) = &LAB_142ffe24a;
  *(undefined8 *)(lVar5 + 0x10 + lVar3) = 0;
  *(undefined ***)(lVar5 + 0x20 + lVar3) = &PTR_LAB_14a2f13a0;
  *(longlong *)(lVar5 + 0x28 + lVar3) = param_1;
  return;
}



// FUNCTION 142fdab74 FUN_142fdab74 body=69 status=ok
// SIG undefined FUN_142fdab74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdab74(void)

{
  _DAT_14ca458d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdabb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca458d8,1);
  return;
}



// FUNCTION 142fdabb9 FUN_142fdabb9 body=69 status=ok
// SIG undefined FUN_142fdabb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdabb9(void)

{
  _DAT_14ca458e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdabfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca458e8,1);
  return;
}



// FUNCTION 142fdabfe FUN_142fdabfe body=69 status=ok
// SIG undefined FUN_142fdabfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdabfe(void)

{
  _DAT_14ca458f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45900,1);
  return;
}



// FUNCTION 142fdac43 FUN_142fdac43 body=69 status=ok
// SIG undefined FUN_142fdac43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdac43(void)

{
  _DAT_14ca45910 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdac85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45918,1);
  return;
}



// FUNCTION 142fdac88 FUN_142fdac88 body=69 status=ok
// SIG undefined FUN_142fdac88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdac88(void)

{
  _DAT_14ca45920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdacca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45928,1);
  return;
}



// FUNCTION 142fdaccd FUN_142fdaccd body=69 status=ok
// SIG undefined FUN_142fdaccd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdaccd(void)

{
  _DAT_14ca45938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdad0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45940,1);
  return;
}



// FUNCTION 142fdad12 FUN_142fdad12 body=69 status=ok
// SIG undefined FUN_142fdad12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdad12(void)

{
  _DAT_14ca45950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdad54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45958,1);
  return;
}



// FUNCTION 142fdad57 FUN_142fdad57 body=69 status=ok
// SIG undefined FUN_142fdad57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdad57(void)

{
  _DAT_14ca45960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fdad99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45968,1);
  return;
}



// FUNCTION 142fdadb4 FUN_142fdadb4 body=2169 status=ok
// SIG undefined FUN_142fdadb4(void)

longlong FUN_142fdadb4(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int *piVar1;
  char *pcVar2;
  double *pdVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double *pdVar10;
  double dVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  ulonglong in_R10;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  undefined4 local_1b0;
  ulonglong local_1a8;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128;
  undefined **local_120;
  longlong local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  pdVar3 = *(double **)(param_3 + 0x4e88);
  lVar15 = 0;
  local_188 = param_3;
  if ((pdVar3 != (double *)0x0) && (DAT_14c7609a8 != 0)) {
    local_120 = &PTR_FUN_14a217cb0;
    local_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    local_f8 = 0;
    local_198 = param_1;
    local_118 = param_2;
    local_110 = param_2;
    if ((DAT_14ca458f0 != 0) &&
       ((DAT_14ca45908 == 0 && (iVar17 = *(int *)(pdVar3 + 6), 0 < iVar17)))) {
      dVar11 = pdVar3[5];
      lVar15 = 0;
      do {
        if (0 < *(int *)((longlong)dVar11 + 0x10 + lVar15 * 0x28)) {
          lVar24 = (longlong)dVar11 + lVar15 * 0x28;
          lVar23 = 0;
          do {
            lVar24 = *(longlong *)(lVar24 + 8);
            lVar13 = lVar23 * 0x20;
            local_130 = (double)*(float *)((longlong)pdVar3 + 0x14) +
                        *(double *)(lVar24 + 0x10 + lVar13);
            local_138 = *(double *)(lVar24 + 8 + lVar13) + (double)*(float *)(pdVar3 + 2);
            local_140 = (double)*(float *)(pdVar3 + 2) + *(double *)(lVar24 + lVar13);
            local_148 = *(double *)(lVar24 + 0x10 + lVar13);
            pdVar14 = (double *)(lVar24 + lVar13);
            local_158 = *(undefined4 *)pdVar14;
            uStack_154 = *(undefined4 *)((longlong)pdVar14 + 4);
            uStack_150 = *(undefined4 *)(pdVar14 + 1);
            uStack_14c = *(undefined4 *)((longlong)pdVar14 + 0xc);
            dVar9 = pdVar14[1];
            local_128 = 1;
            if (0 < *(int *)(param_2 + 0x2130)) {
              dVar28 = (local_130 - local_148) * 0.5;
              dVar27 = (local_130 + local_148) * 0.5;
              dVar25 = (local_138 + dVar9) * 0.5;
              dVar26 = (local_140 + *pdVar14) * 0.5;
              dVar8 = ABS((local_140 - *pdVar14) * 0.5);
              dVar9 = ABS((local_138 - dVar9) * 0.5);
              pdVar14 = *(double **)(param_2 + 0x2120);
              if (*(double **)(param_2 + 0x2120) == (double *)0x0) {
                pdVar14 = (double *)(param_2 + 0x2020);
              }
              iVar17 = 0;
              do {
                lVar24 = -(ulonglong)
                          (ABS(pdVar14[9] * dVar28) +
                           ABS(pdVar14[5]) * dVar9 + ABS(pdVar14[1]) * dVar8 <
                          (dVar27 * pdVar14[9] + dVar25 * pdVar14[5] + dVar26 * pdVar14[1]) -
                          pdVar14[0xd]);
                lVar13 = -(ulonglong)
                          (ABS(pdVar14[0xb] * dVar28) +
                           ABS(pdVar14[7]) * dVar9 + ABS(pdVar14[3]) * dVar8 <
                          (dVar27 * pdVar14[0xb] + dVar25 * pdVar14[7] + dVar26 * pdVar14[3]) -
                          pdVar14[0xf]);
                auVar6._8_4_ = (int)lVar24;
                auVar6._0_8_ = -(ulonglong)
                                (ABS(pdVar14[8] * dVar28) +
                                 ABS(pdVar14[4]) * dVar9 + ABS(*pdVar14) * dVar8 <
                                (dVar27 * pdVar14[8] + dVar25 * pdVar14[4] + dVar26 * *pdVar14) -
                                pdVar14[0xc]);
                auVar6._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                uVar18 = movmskpd((int)param_4,auVar6);
                param_4 = (ulonglong)uVar18;
                auVar7._8_4_ = (int)lVar13;
                auVar7._0_8_ = -(ulonglong)
                                (ABS(pdVar14[10] * dVar28) +
                                 ABS(pdVar14[6]) * dVar9 + ABS(pdVar14[2]) * dVar8 <
                                (dVar27 * pdVar14[10] + dVar25 * pdVar14[6] + dVar26 * pdVar14[2]) -
                                pdVar14[0xe]);
                auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
                iVar20 = movmskpd((int)in_R10,auVar7);
                uVar18 = iVar20 << 2 | uVar18;
                in_R10 = (ulonglong)uVar18;
                if (uVar18 != 0) goto LAB_142fdb16e;
                pdVar14 = pdVar14 + 0x10;
                iVar17 = iVar17 + 4;
              } while (iVar17 < *(int *)(param_2 + 0x2130));
            }
            local_168 = DAT_14c758d28;
            local_164 = DAT_14c758d28;
            local_160 = DAT_14c75905c;
            local_15c = 0x3f800000;
            local_1b0 = 0;
            local_1b8 = local_1b8 & 0xffffffff00000000;
            local_1a8 = local_1a8 & 0xffffffffffffff00;
            param_4 = 0;
            FUN_147cb7407(&local_120,&local_158,&local_168);
            dVar11 = pdVar3[5];
LAB_142fdb16e:
            lVar23 = lVar23 + 1;
            lVar24 = (longlong)dVar11 + lVar15 * 0x28;
          } while (lVar23 < *(int *)(lVar24 + 0x10));
          iVar17 = *(int *)(pdVar3 + 6);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar17);
    }
    dVar11 = *(double *)(param_2 + 0x1048);
    dVar26 = (dVar11 - *pdVar3) / (double)*(float *)(pdVar3 + 2);
    dVar9 = *(double *)(param_2 + 0x1050);
    iVar17 = *(int *)(pdVar3 + 3);
    uVar5 = (longlong)(int)((int)dVar26 - (uint)((float)dVar26 < 0.0)) / (longlong)iVar17;
    iVar21 = (int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) %
                  (longlong)*(int *)((longlong)pdVar3 + 0x1c));
    iVar20 = -iVar21;
    if (iVar20 < 0) {
      iVar20 = iVar21;
    }
    dVar26 = (dVar9 - pdVar3[1]) / (double)*(float *)(pdVar3 + 2);
    uVar5 = (longlong)(int)((int)dVar26 - (uint)((float)dVar26 < 0.0)) / (longlong)iVar17;
    iVar12 = (int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) %
                  (longlong)*(int *)((longlong)pdVar3 + 0x1c));
    iVar21 = -iVar12;
    if (iVar21 < 0) {
      iVar21 = iVar12;
    }
    iVar20 = iVar21 * iVar17 + iVar20;
    lVar15 = (longlong)iVar20;
    lVar24 = lVar15 * 5;
    if (*(int *)((longlong)pdVar3[5] + 0x10 + lVar15 * 0x28) < 1) {
      lVar15 = 0;
    }
    else {
      dVar26 = *(double *)(param_2 + 0x1058);
      plVar22 = (longlong *)((longlong)pdVar3[5] + lVar15 * 0x28 + 8);
      local_190 = (longlong *)(local_198 + 0x430);
      lVar13 = 0x1a;
      lVar16 = 0;
      lVar15 = 0;
      lVar23 = local_198;
      local_178 = lVar24;
      local_170 = plVar22;
      do {
        lVar4 = *plVar22;
        local_130 = (double)*(float *)((longlong)pdVar3 + 0x14) + *(double *)(lVar4 + -10 + lVar13);
        local_138 = *(double *)(lVar4 + -0x12 + lVar13) + (double)*(float *)(pdVar3 + 2);
        local_140 = (double)*(float *)(pdVar3 + 2) + *(double *)(lVar4 + -0x1a + lVar13);
        pdVar14 = (double *)(lVar4 + -0x1a + lVar13);
        local_158 = *(undefined4 *)pdVar14;
        uStack_154 = *(undefined4 *)((longlong)pdVar14 + 4);
        pdVar10 = pdVar14 + 1;
        uStack_150 = *(undefined4 *)pdVar10;
        uStack_14c = *(undefined4 *)((longlong)pdVar14 + 0xc);
        local_148 = *(double *)(lVar4 + -10 + lVar13);
        local_128 = 1;
        if (((((dVar11 < *pdVar14 || dVar11 == *pdVar14) || (local_140 <= dVar11)) ||
             (dVar9 < *pdVar10 || dVar9 == *pdVar10)) ||
            ((local_138 <= dVar9 || (dVar26 <= local_148)))) || (local_130 <= dVar26)) {
          if (DAT_14ca45908 != 0) {
            local_168 = DAT_14c758d28;
            local_164 = DAT_14c758d28;
            local_160 = DAT_14c75905c;
            local_15c = 0x3f800000;
            local_1b0 = 0;
            local_1b8 = local_1b8 & 0xffffffff00000000;
            local_1a8 = local_1a8 & 0xffffffffffffff00;
            FUN_147cb7407(&local_120,&local_158,&local_168,0);
            lVar23 = local_198;
          }
        }
        else {
          plVar22 = *(longlong **)(lVar23 + 0x440);
          if (((plVar22 == (longlong *)0x0) ||
              (*(int *)(lVar23 + 0x448) != *(int *)(*(longlong *)(local_188 + 0x4e88) + 0x20))) ||
             ((*(int *)(lVar23 + 0x44c) != iVar20 ||
              (*(uint *)(lVar23 + 0x450) != (uint)*(ushort *)(lVar4 + -2 + lVar13))))) {
            pcVar2 = (char *)(*(longlong *)((longlong)pdVar3[5] + 0x18 + lVar24 * 8) +
                             (ulonglong)*(ushort *)(lVar4 + -2 + lVar13) * 0x18);
            *(int *)(lVar23 + 0x44c) = iVar20;
            *(uint *)(lVar23 + 0x450) = (uint)*(ushort *)(lVar4 + -2 + lVar13);
            *(undefined4 *)(lVar23 + 0x448) =
                 *(undefined4 *)(*(longlong *)(local_188 + 0x4e88) + 0x20);
            if (*pcVar2 == '\x01') {
              iVar17 = *(int *)(lVar23 + 0x43c);
              iVar21 = 0;
              *(undefined4 *)(lVar23 + 0x438) = 0;
              if (iVar17 < 0) {
                FUN_144893a1c(local_190,0);
                iVar21 = *(int *)(local_198 + 0x438);
                iVar17 = *(int *)(local_198 + 0x43c);
                lVar23 = local_198;
              }
              uVar18 = *(uint *)(pcVar2 + 4);
              *(uint *)(lVar23 + 0x438) = uVar18 + iVar21;
              if ((uint)(iVar17 - iVar21) < uVar18) {
                FUN_1447403be(local_190);
              }
              iVar17 = *(int *)(pcVar2 + 0x10);
              iVar21 = *(int *)(pcVar2 + 4);
              lVar15 = *local_190;
              uVar19 = *(undefined8 *)(pcVar2 + 8);
              if (DAT_14c87ead8 == '\0') {
                local_180 = *(undefined8 *)(pcVar2 + 8);
                FUN_140024d3a(&DAT_14c87eb00);
                DAT_14c87ead8 = '\x01';
                uVar19 = local_180;
              }
              local_1a8 = 0;
              local_1b0 = 0;
              local_1b8 = (longlong)iVar17;
              FUN_140aa9920(DAT_14c892f44,lVar15,(longlong)iVar21,uVar19);
              lVar23 = local_198;
              plVar22 = local_190;
              lVar24 = local_178;
            }
            else {
              plVar22 = (longlong *)(pcVar2 + 8);
            }
            *(longlong **)(lVar23 + 0x440) = plVar22;
          }
          lVar15 = (ulonglong)*(ushort *)(lVar4 + lVar13) + *plVar22;
          if (DAT_14ca45908 == 0) break;
          local_168 = DAT_14c758d28;
          local_164 = DAT_14c75905c;
          local_160 = DAT_14c758d28;
          local_15c = 0x3f800000;
          local_1b0 = 0;
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_1a8 = local_1a8 & 0xffffffffffffff00;
          FUN_147cb7407(&local_120,&local_158,&local_168,1);
          lVar23 = local_198;
          plVar22 = local_170;
        }
        lVar16 = lVar16 + 1;
        lVar13 = lVar13 + 0x20;
      } while (lVar16 < (int)plVar22[1]);
    }
    local_120 = &PTR_FUN_14a217cb0;
    if (local_108 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_108 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_108)(local_108,1);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar15;
}



// FUNCTION 142fdb62e FUN_142fdb62e body=1213 status=ok
// SIG undefined FUN_142fdb62e(void)

void FUN_142fdb62e(longlong param_1)

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
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_142fdb66c;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142fdb671;
      goto LAB_142fdb6cf;
    }
  }
  else {
LAB_142fdb66c:
    if (iVar6 != 0x10) {
LAB_142fdb6cf:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_142fdb671;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_142fdb671;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_142fdb828;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_142fe9a45);
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
LAB_142fdb828:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
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
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_142fdb8a8;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_142fdb8a8:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a2f1060;
        puVar16[0x15] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_48 = &PTR_LAB_14a2f1010;
        local_68[0] = FUN_142ffaec4;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FSceneViewState_Destroy",&DAT_14ca47230);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_142fdb766;
    }
  }
LAB_142fdb671:
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_1 + 0x10);
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_142fdb766:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fdbb04 FUN_142fdbb04 body=268 status=ok
// SIG undefined FUN_142fdbb04(void)

longlong FUN_142fdbb04(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = 0;
  if (4 < (ulonglong)*(uint *)(param_1 + 0x17c)) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x17c) * 0x50;
  }
  uVar1 = (uint)lVar2;
  if (0 < (longlong)*(int *)(param_1 + 0x178)) {
    lVar3 = param_1 + 0x30;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x170);
    }
    lVar6 = 0;
    do {
      uVar5 = (ulonglong)*(int *)(lVar3 + 0x48 + lVar6);
      lVar4 = uVar5 * 4;
      if (uVar5 < 2) {
        lVar4 = 0;
      }
      lVar2 = (ulonglong)*(uint *)(lVar3 + 0xc + lVar6) * 0x30 + lVar2 +
              (ulonglong)(*(int *)(lVar3 + 0x2c + lVar6) + 0x1fU >> 5) * 4 + lVar4;
      uVar1 = (uint)lVar2;
      lVar6 = lVar6 + 0x50;
    } while ((longlong)*(int *)(param_1 + 0x178) * 0x50 != lVar6);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x518) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x518) < 2) {
    lVar2 = 0;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x21a0) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x21a0) < 2) {
    lVar3 = 0;
  }
  return (longlong)*(int *)(param_1 + 0x2164) * 0x68 + lVar2 +
         (longlong)*(int *)(param_1 + 0x4dc) * 0x38 + (ulonglong)uVar1 +
         (ulonglong)(*(int *)(param_1 + 0x4fc) + 0x1fU >> 5) * 4 +
         (ulonglong)(*(int *)(param_1 + 0x2184) + 0x1fU >> 5) * 4 + lVar3 + 0x21e0;
}



// FUNCTION 142fdbc10 FUN_142fdbc10 body=47 status=ok
// SIG undefined FUN_142fdbc10(void)

void FUN_142fdbc10(void)

{
  DAT_14ca45bd8 = &PTR_FUN_14a2f1070;
  FUN_144725486(&DAT_14ca45bd8);
  FUN_14003f39a(&DAT_14ca45bd8);
  return;
}



// FUNCTION 142fdbc40 FUN_142fdbc40 body=465 status=ok
// SIG undefined FUN_142fdbc40(void)

void FUN_142fdbc40(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar7 = DAT_14ca45be8;
  uVar1 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar1;
  if (uVar11 == 0) {
    return;
  }
  if (0 < (int)uVar1) {
    lVar10 = 0;
    do {
      lVar4 = *param_1;
      uVar5 = *(undefined8 *)(lVar4 + lVar10);
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10 + lVar10) + 0x10);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + lVar10);
      iVar3 = *(int *)((longlong)param_1 +
                      (ulonglong)((ulonglong)(uVar1 - 1) << 5 == lVar10) * 4 + 0x18);
      (**(code **)(*DAT_14ca83900 + 0x2a8))(DAT_14ca83900,param_2);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 5;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x30);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 5;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_14a1fb5a8;
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar8[3] = uVar6;
      *(undefined4 *)(puVar8 + 4) = uVar2;
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 6;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x38);
        puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar8 + 6;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar8;
      param_2[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_FUN_14a1fb5b0;
      puVar8[2] = uVar7;
      puVar8[3] = 0;
      *(int *)(puVar8 + 4) = iVar3 << 3;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
      *(int *)(puVar8 + 5) = iVar3 * 0xc;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = 1;
      (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_2,uVar5);
      lVar10 = lVar10 + 0x20;
    } while (uVar11 << 5 != lVar10);
    uVar1 = *(uint *)(param_1 + 1);
    uVar11 = (ulonglong)uVar1;
    if (-1 < (int)uVar1) {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(uint *)((longlong)param_1 + 0xc) != uVar1) {
        FUN_14177f1d4(param_1,uVar1);
      }
      param_1[2] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar11);
}



// FUNCTION 142fdbe1e FUN_142fdbe1e body=2403 status=ok
// SIG undefined FUN_142fdbe1e(void)

void FUN_142fdbe1e(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong *local_100;
  ulonglong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,DAT_14ca85098);
    local_b8 = (undefined8 *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_b0 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uVar10 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_66 = 0xff000100;
    local_98 = 9;
    local_6c = 0x10001;
    local_68 = 0x101;
    uStack_90 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_88 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_78 = 0;
    local_80 = CONCAT44(uVar10,DAT_14ca85098);
    iVar9 = 0x100;
    if (DAT_14ca84e40 < 0x100) {
      iVar9 = DAT_14ca84e40;
    }
    local_74 = 1;
    if (1 < iVar9) {
      local_74 = iVar9;
    }
    puVar1 = (ulonglong *)(param_2 + 0x70);
    uVar16 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar16 + 0x120;
    local_100 = puVar1;
    local_70 = local_74;
    if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
      FUN_140023dd8(puVar1,0x128);
      uVar16 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar4 = uVar16 + 0x120;
    }
    lVar6 = param_2 + 0x178;
    *(ulonglong *)(param_2 + 0x70) = uVar4;
    FUN_1456bbb8c(uVar16,L"HZBBoundsCenter",&local_98,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(lVar6,iVar9);
    }
    puVar1 = local_100;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar16;
    *(int *)(uVar16 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    local_66 = 0xff000100;
    local_98 = 9;
    local_6c = 0x10001;
    local_68 = 0x101;
    uStack_90 = local_b8;
    uStack_88 = uStack_b0;
    local_78 = 0;
    local_80 = CONCAT44(uVar10,(int)local_a8);
    iVar9 = 0x100;
    if (DAT_14ca84e40 < 0x100) {
      iVar9 = DAT_14ca84e40;
    }
    local_74 = 1;
    if (1 < iVar9) {
      local_74 = iVar9;
    }
    uVar11 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar11 + 0x120;
    local_70 = local_74;
    if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
      FUN_140023dd8(local_100,0x128);
      uVar11 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar4 = uVar11 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar4;
    FUN_1456bbb8c(uVar11,L"HZBBoundsExtent",&local_98,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(lVar6,iVar9);
    }
    puVar1 = local_100;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar11;
    *(int *)(uVar11 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    uStack_90 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_88 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_98 = 9;
    local_6c = 0x10001;
    local_68 = 0x101;
    local_78 = 0;
    local_66 = 0xff000200;
    local_80 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
    iVar9 = 0x100;
    if (DAT_14ca84e40 < 0x100) {
      iVar9 = DAT_14ca84e40;
    }
    local_74 = 1;
    if (1 < iVar9) {
      local_74 = iVar9;
    }
    uVar13 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar13 + 0x120;
    local_70 = local_74;
    if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
      FUN_140023dd8(local_100,0x128);
      uVar13 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar4 = uVar13 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar4;
    FUN_1456bbb8c(uVar13,L"HZBResultsGPU",&local_98,0);
    iVar9 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar9 + 1U) {
      FUN_14472c0f6(lVar6,iVar9);
    }
    puVar1 = local_100;
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar9 * 8) = uVar13;
    *(int *)(uVar13 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar14 + 8;
    local_e0 = uVar13;
    if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
      FUN_140023dd8(local_100,0x50);
      puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar14 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar5;
    *puVar14 = &PTR_FUN_14a2f10d8;
    plVar2 = (longlong *)(param_2 + 0x98);
    puVar14[2] = 0;
    puVar14[3] = 0;
    *(undefined4 *)(puVar14 + 4) = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    *(undefined4 *)(puVar14 + 7) = 0;
    iVar9 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
      FUN_1448cfae8(plVar2,iVar9);
    }
    *(undefined8 **)(*plVar2 + (longlong)iVar9 * 8) = puVar14;
    if (uVar16 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(uVar16 + 0xac);
    }
    puVar14[2] = uVar16;
    puVar14[3] = uVar7;
    *(undefined4 *)(puVar14 + 4) = 0x2000;
    if (uVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(uVar11 + 0xac);
    }
    local_e8 = puVar14 + 2;
    puVar14[5] = uVar11;
    puVar14[6] = uVar7;
    *(undefined4 *)(puVar14 + 7) = 0x2000;
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar12 = *(undefined4 *)(param_1 + 0x18);
    uVar15 = *(undefined4 *)(param_1 + 0x1c);
    uStack_90 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_f8 = uVar16;
    local_f0 = plVar2;
    local_98 = uVar7;
    uStack_88 = uVar16;
    local_80 = uVar11;
    FUN_1472de11c();
    FUN_140069376(param_2);
    puVar1 = local_100;
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar14 + 0x3b;
    if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
      FUN_140023dd8(local_100,0x1e0);
      puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar14 + 0x3b;
    }
    *local_100 = (ulonglong)puVar5;
    local_b8 = local_e8;
    uStack_b0 = DAT_14ca472b0;
    if (DAT_14ca472b0 != 0) {
      LOCK();
      *(int *)(DAT_14ca472b0 + 8) = *(int *)(DAT_14ca472b0 + 8) + 1;
      UNLOCK();
      uVar7 = local_98;
      uVar12 = (undefined4)uStack_90;
      uVar15 = uStack_90._4_4_;
    }
    local_a8 = &DAT_14ca47268;
    local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffffffffff00);
    FUN_140068f1a(puVar14,&local_b9,&local_b8,8);
    *puVar14 = &PTR_FUN_14a2f10e0;
    puVar14[0x37] = uVar7;
    local_98 = 0;
    *(undefined4 *)(puVar14 + 0x38) = uVar12;
    *(undefined4 *)((longlong)puVar14 + 0x1c4) = uVar15;
    uStack_90 = 0;
    *(undefined4 *)(puVar14 + 0x39) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)puVar14 + 0x1cc) = uStack_88._4_4_;
    *(undefined4 *)(puVar14 + 0x3a) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar14 + 0x1d4) = local_80._4_4_;
    iVar9 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar9 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar9 * 8) = puVar14;
    *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar14);
    FUN_141475090(&local_98);
    uVar16 = local_e0;
    uVar4 = local_f8;
    puVar1 = local_100;
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar14 + 0x2e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
      FUN_140023dd8(local_100,0x180);
      puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar14 + 0x2e;
    }
    *local_100 = (ulonglong)puVar5;
    *puVar14 = &PTR_FUN_14a2f1148;
    local_100 = puVar14 + 2;
    puVar14[2] = 0;
    *(undefined1 *)(puVar14 + 3) = 1;
    puVar14[4] = 0;
    puVar14[5] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    lVar6 = 0x82;
    do {
      puVar5 = (undefined8 *)((longlong)puVar14 + lVar6 + -0x12);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined4 *)((longlong)puVar14 + lVar6 + -2) = 0xffff0000;
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0x142);
    *(undefined4 *)((longlong)puVar14 + 0x144) = 0;
    puVar14[0x26] = 0;
    puVar14[0x27] = 0;
    *(undefined2 *)(puVar14 + 0x28) = 0;
    *(undefined4 *)(puVar14 + 0x29) = 0xffffffff;
    *(undefined4 *)((longlong)puVar14 + 0x14c) = 0xffffffff;
    *(undefined4 *)(puVar14 + 0x2a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar14 + 0x154) = 0xffffffff;
    *(undefined4 *)(puVar14 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar14 + 0x15c) = 0;
    puVar14[0x2c] = 0;
    iVar9 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar9 + 1U) {
      FUN_1448cfae8(local_f0,iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar9 * 8) = puVar14;
    lVar6 = FUN_1447e4f80();
    cVar8 = '\x02';
    if (*(char *)(lVar6 + 0x41) != '\x03') {
      cVar8 = *(char *)(lVar6 + 0x41);
    }
    puVar14[2] = *(undefined8 *)(param_3 + 0x18);
    *(char *)(puVar14 + 3) = cVar8;
    puVar14[6] = uVar4;
    puVar14[8] = uVar11;
    puVar14[4] = *(undefined8 *)(param_3 + 0x136f0);
    puVar14[0xe] = uVar16;
    puVar14[0xf] = 0;
    *(undefined4 *)(puVar14 + 0x10) = 0xffff0000;
    uVar7 = *(undefined8 *)(param_3 + 0x137c8);
    *(float *)(puVar14 + 0xb) = (float)(int)uVar7;
    *(float *)((longlong)puVar14 + 0x5c) = (float)(int)((ulonglong)uVar7 >> 0x20);
    iVar9 = *(int *)(param_3 + 0x3104);
    iVar3 = *(int *)(param_3 + 0x30fc);
    *(float *)(puVar14 + 0xc) = (float)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8));
    *(float *)((longlong)puVar14 + 100) = (float)(iVar9 - iVar3);
    uVar7 = DAT_14c9c0d80;
    puVar14[5] = DAT_14c9c0d80;
    puVar14[7] = uVar7;
    puVar14[9] = uVar7;
    puVar14[10] = 0x3b8000003b800000;
    uVar7 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145f5a3e0();
    FUN_1448e935e(uVar7,&local_98,&DAT_14ca45c58,0);
    FUN_145f5a3e0();
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0x10000000100;
    local_108 = DAT_14c9c0d98;
    local_110 = DAT_14c9c0db0;
    local_118 = DAT_14c9c0d50;
    local_120 = &local_b8;
    local_128 = local_100;
    FUN_1472da39c(param_2,*(undefined8 *)(param_3 + 0x13818),&local_b9,&local_98);
    local_d8 = 0xffffffff;
    uStack_d4 = 0xffffffff;
    uStack_d0 = 0xffffffff;
    uStack_cc = 0xffffffff;
    FUN_14321397a(param_2,*(undefined8 *)(param_1 + 0x30),uVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fdc782 FUN_142fdc782 body=3664 status=ok
// SIG undefined FUN_142fdc782(void)

void FUN_142fdc782(longlong param_1,longlong param_2,longlong param_3,char param_4,wchar_t *param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  int *piVar2;
  double dVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 (*lpTlsValue) [16];
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 local_178 [32];
  wchar_t *local_158;
  undefined1 local_150 [16];
  char *local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined8 **local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined1 local_110;
  char local_101;
  longlong local_100;
  undefined8 *local_f8;
  ulonglong *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  byte local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_178;
  if ((longlong)*(int *)(param_1 + 0xa8) < 1) {
LAB_142fdd456:
    if ((local_60 ^ (ulonglong)local_178) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar16 = 0;
  while (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar16 * 8) + 0x30c8) != '\0') {
    lVar16 = lVar16 + 1;
    if (*(int *)(param_1 + 0xa8) == lVar16) goto LAB_142fdd456;
  }
  local_100 = param_2;
  if (param_4 == '\0') {
    iVar15 = *(int *)(param_1 + 0x3f0);
    if ((longlong)iVar15 == 0) {
      local_150._0_8_ = param_6;
      local_158 = param_5;
      cVar9 = FUN_142baf884(param_1,param_2,*(undefined8 *)(param_3 + 0x1c8),
                            *(undefined8 *)(param_3 + 0x1d8));
      goto LAB_142fdd433;
    }
    lVar16 = *(longlong *)(param_1 + 1000);
    lVar22 = 0;
    do {
      lVar6 = *(longlong *)(lVar16 + 8 + lVar22);
      if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar16 + 0x3108 + lVar22), lVar7 != 0)) {
        dVar3 = *(double *)(lVar6 + 0x88);
        FUN_14495423c(lVar7,(float)dVar3,(float)(dVar3 - (double)*(float *)(DAT_14cb0d2b0 + 0xd8c)),
                      *(undefined4 *)(lVar7 + 0x4c8));
      }
      lVar22 = lVar22 + 0x13c10;
    } while ((longlong)iVar15 * 0x13c10 - lVar22 != 0);
  }
  else {
    local_e8 = *(undefined8 **)(param_3 + 0x1c0);
    local_101 = param_4;
    local_d0 = param_3;
    if (DAT_14ca45948 == 0) {
      local_e0 = 1;
      puVar13 = local_e8;
    }
    else {
      local_e0 = (ulonglong)*(uint *)(param_3 + 0x30);
      puVar13 = *(undefined8 **)(param_3 + 0x2a0);
      if (0 < *(int *)(param_1 + 0x3f0)) {
        uVar10 = *(uint *)(param_3 + 0x30) - 1;
        local_f0 = (ulonglong *)(ulonglong)uVar10;
        lVar22 = 0;
        lVar16 = 0;
        local_f8 = *(undefined8 **)(param_3 + 0x2a0);
        local_c8 = param_1;
        do {
          puVar13 = local_f8;
          lVar6 = *(longlong *)(param_1 + 1000);
          puVar19 = *(ulonglong **)(param_2 + 0x18);
          iVar15 = *(int *)(lVar6 + 0x1de0 + lVar22);
          iVar20 = *(int *)((longlong)puVar19 + 0x17c);
          if (iVar20 != iVar15) {
            *(int *)((longlong)puVar19 + 0x17c) = iVar15;
            puVar11 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
            puVar12 = puVar11 + 3;
            if ((undefined8 *)puVar19[1] < puVar12) {
              FUN_140023dd8(puVar19,0x20);
              puVar11 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
              puVar12 = puVar11 + 3;
            }
            *puVar19 = (ulonglong)puVar12;
            *(int *)(puVar19 + 0xc) = (int)puVar19[0xc] + 1;
            *(undefined8 **)puVar19[6] = puVar11;
            puVar19[6] = (ulonglong)(puVar11 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar19 + 0x17c);
            puVar11[1] = 0;
            *puVar11 = &PTR_FUN_14a1fb2c0;
            *(undefined4 *)(puVar11 + 2) = uVar5;
          }
          param_2 = local_100;
          local_b8 = *(ulonglong *)(lVar6 + 0x30f8 + lVar22);
          local_b0 = *(undefined8 *)(lVar6 + 0x3100 + lVar22);
          if (puVar13 == (undefined8 *)0x0) {
            local_90 = 0;
          }
          else {
            local_90 = *(byte *)((longlong)puVar13 + 0x24) >> 2 & 1;
          }
          iVar15 = (int)local_e0;
          uVar18 = (longlong)(int)((int)((ulonglong)local_b0 >> 0x20) + uVar10) / (longlong)iVar15;
          uVar21 = (longlong)(int)((int)local_b0 + uVar10) / (longlong)iVar15;
          local_98 = uVar21 & 0xffffffff;
          if ((int)uVar21 < 2) {
            local_98 = 1;
          }
          uVar21 = uVar18 & 0xffffffff;
          if ((int)uVar18 < 2) {
            uVar21 = 1;
          }
          local_98 = local_98 | uVar21 << 0x20;
          local_a0 = (longlong)
                     ((ulonglong)(uint)((int)local_b8 >> 0x1f) << 0x20 | local_b8 & 0xffffffff) /
                     (longlong)iVar15 & 0xffffffffU |
                     (longlong)
                     ((ulonglong)(uint)((longlong)local_b8 >> 0x3f) << 0x20 | local_b8 >> 0x20) /
                     (longlong)iVar15 << 0x20;
          local_a8 = *(undefined8 *)(local_d0 + 0x2a0);
          local_c0 = local_e8;
          local_158 = (wchar_t *)CONCAT44(local_158._4_4_,1);
          FUN_14301976b(local_100,lVar6 + lVar22,&local_c0,&local_a8);
          param_1 = local_c8;
          if (*(int *)((longlong)puVar19 + 0x17c) != iVar20) {
            *(int *)((longlong)puVar19 + 0x17c) = iVar20;
            puVar12 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
            puVar13 = puVar12 + 3;
            if ((undefined8 *)puVar19[1] < puVar13) {
              FUN_140023dd8(puVar19,0x20);
              puVar12 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar12 + 3;
            }
            *puVar19 = (ulonglong)puVar13;
            *(int *)(puVar19 + 0xc) = (int)puVar19[0xc] + 1;
            *(undefined8 **)puVar19[6] = puVar12;
            puVar19[6] = (ulonglong)(puVar12 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar19 + 0x17c);
            puVar12[1] = 0;
            *puVar12 = &PTR_FUN_14a1fb2c0;
            *(undefined4 *)(puVar12 + 2) = uVar5;
          }
          lVar16 = lVar16 + 1;
          lVar22 = lVar22 + 0x13c10;
          puVar13 = local_f8;
        } while (lVar16 < *(int *)(param_1 + 0x3f0));
      }
    }
    local_e8 = puVar13;
    puVar19 = (ulonglong *)(param_2 + 0x70);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar12 + 0x14;
    if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
      FUN_140023dd8(puVar19,0xb0);
      puVar12 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar12 + 0x14;
    }
    *(undefined8 **)(local_100 + 0x70) = puVar13;
    *puVar12 = &PTR_FUN_14a2f1168;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0x100000000;
    lVar16 = local_100 + 0x98;
    iVar15 = *(int *)(local_100 + 0xa0);
    *(uint *)(local_100 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(local_100 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8(lVar16,iVar15);
    }
    *(undefined8 **)(*(longlong *)(local_100 + 0x98) + (longlong)iVar15 * 8) = puVar12;
    puVar11 = (undefined8 *)(*(longlong *)(local_100 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar13 = puVar11 + 0x22;
    if (*(undefined8 **)(local_100 + 0x78) < puVar13) {
      FUN_140023dd8(puVar19,0x120);
      puVar11 = (undefined8 *)(*puVar19 + 0xf & 0xfffffffffffffff0);
      puVar13 = puVar11 + 0x22;
    }
    local_f8 = puVar12 + 1;
    *puVar19 = (ulonglong)puVar13;
    *puVar11 = &PTR_FUN_14a1fbd30;
    lVar22 = 0x22;
    do {
      *(undefined1 (*) [16])((longlong)puVar11 + lVar22 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar11 + lVar22 + -2) = 0xffff0000;
      lVar22 = lVar22 + 0x18;
    } while (lVar22 != 0xe2);
    *(undefined4 *)((longlong)puVar11 + 0xe4) = 0;
    *(undefined1 (*) [16])(puVar11 + 0x1a) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar11 + 0x1c) = 0;
    *(undefined4 *)(puVar11 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar11 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar11 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar11 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar11 + 0xfc) = 0;
    puVar11[0x20] = 0;
    iVar15 = *(int *)(local_100 + 0xa0);
    *(uint *)(local_100 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(local_100 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8(lVar16,iVar15);
    }
    *(undefined8 **)(*(longlong *)(local_100 + 0x98) + (longlong)iVar15 * 8) = puVar11;
    bVar4 = *(byte *)(local_100 + 0x520);
    local_f0 = puVar19;
    if (bVar4 == 0) {
      piVar2 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      iVar15 = *piVar2;
      if (iVar15 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        iVar15 = *piVar2;
      }
      puVar13 = local_f8;
      if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
        *piVar2 = 0x40000010;
      }
      local_88 = *(undefined8 **)(param_1 + 1000);
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_1 + 0x3f0));
      local_70 = *(undefined8 **)(param_1 + 0x4d8);
      local_68 = *(undefined4 *)(param_1 + 0x4e0);
      FUN_142fdd930(local_f8,*(undefined8 *)(param_1 + 8));
      if ((longlong)*(int *)(puVar12 + 0x13) < 1) {
        iVar20 = 0;
      }
      else {
        puVar23 = (undefined8 *)puVar12[0x12];
        if ((undefined8 *)puVar12[0x12] == (undefined8 *)0x0) {
          puVar23 = puVar13;
        }
        piVar17 = (int *)(*(longlong *)(param_1 + 1000) + 0x136a8);
        lVar16 = 0;
        iVar20 = 0;
        do {
          iVar20 = iVar20 + *(int *)((longlong)(puVar23 + 9) + lVar16) +
                   *(int *)((longlong)(puVar23 + 0xb) + lVar16) +
                   *(int *)((longlong)(puVar23 + 0xd) + lVar16) +
                   *(int *)((longlong)(puVar23 + 0xf) + lVar16) + *piVar17 + piVar17[10];
          lVar16 = lVar16 + 0x88;
          piVar17 = piVar17 + 0x4f04;
        } while ((longlong)*(int *)(puVar12 + 0x13) * 0x88 != lVar16);
      }
      *(int *)(puVar11 + 0x1f) = iVar20;
      lVar16 = local_100;
      if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
        *piVar2 = iVar15;
      }
LAB_142fdd275:
      FUN_14473400f(0,0);
    }
    else {
      lpTlsValue = TlsGetValue(DAT_14c896140);
      if (lpTlsValue == (undefined1 (*) [16])0x0) {
        lpTlsValue = (undefined1 (*) [16])FUN_14001cc68(0x18,0x10);
        *lpTlsValue = (undefined1  [16])0x0;
        *(undefined4 *)lpTlsValue[1] = 0;
        TlsSetValue(DAT_14c896140,lpTlsValue);
      }
      puVar12 = *(undefined8 **)(*lpTlsValue + 8);
      lVar16 = local_100;
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = *(undefined8 **)*lpTlsValue;
        if (puVar12 == (undefined8 *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          puVar13 = DAT_14c896180;
          uVar8 = local_d4;
          while (DAT_14c896180 = puVar13, local_88 = puVar13, ((ulonglong)puVar13 & 0x3ffffff) != 0)
          {
            local_d4 = uVar10 & 0x3ffffff;
            local_70 = (undefined8 *)(((ulonglong)puVar13 & 0xfffffffffc000000) + 0x4000000);
            uVar10 = local_d4;
            if ((ulonglong)local_70 >> 0x1a < (ulonglong)puVar13 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
              uVar8 = local_d4;
              uVar10 = local_d4;
            }
            local_d4 = uVar8;
            uVar18 = (ulonglong)((uint)puVar13 & 0x3fff);
            local_70 = (undefined8 *)
                       ((ulonglong)local_70 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar10 >> 0xe) * 8) +
                                 0x10 + uVar18 * 0x18));
            LOCK();
            bVar24 = local_88 == DAT_14c896180;
            puVar13 = local_70;
            if (!bVar24) {
              puVar13 = DAT_14c896180;
            }
            DAT_14c896180 = puVar13;
            UNLOCK();
            if (bVar24) {
              *(undefined4 *)
               (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar10 >> 0xe) * 8) + uVar18 * 0x18 +
               0x10) = 0;
              puVar12 = *(undefined8 **)
                         (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar10 >> 0xe) * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c();
              *(undefined8 **)(*lpTlsValue + 8) = puVar12;
              lVar16 = local_100;
              if (puVar12 != (undefined8 *)0x0) goto LAB_142fdd04f;
              goto LAB_142fdd014;
            }
            uVar10 = (uint)DAT_14c896180;
            puVar13 = DAT_14c896180;
            uVar8 = local_d4;
          }
          *(undefined8 *)(*lpTlsValue + 8) = 0;
          local_d4 = uVar8;
LAB_142fdd014:
          lVar16 = local_100;
          puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
          *(undefined8 **)(*lpTlsValue + 8) = puVar13;
          iVar15 = 0xff;
          do {
            puVar12 = puVar13 + 0x20;
            *puVar13 = puVar12;
            iVar15 = iVar15 + -1;
            puVar13 = puVar12;
          } while (iVar15 != 0);
          *puVar12 = 0;
          puVar12 = *(undefined8 **)(*lpTlsValue + 8);
        }
        else {
          *(undefined8 **)(*lpTlsValue + 8) = puVar12;
          *(undefined8 *)*lpTlsValue = 0;
        }
LAB_142fdd04f:
        *(undefined4 *)lpTlsValue[1] = 0x100;
        iVar15 = 0x100;
      }
      else {
        iVar15 = *(int *)lpTlsValue[1];
      }
      *(undefined8 *)(*lpTlsValue + 8) = *puVar12;
      *(int *)lpTlsValue[1] = iVar15 + -1;
      *puVar12 = UE::Tasks::Private::FTaskBase::vftable;
      puVar12[1] = &DAT_100000002;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined4 *)(puVar12 + 4) = 0xffffffff;
      puVar12[6] = 0;
      puVar12[7] = 0x100000000;
      *(undefined1 *)(puVar12 + 8) = 1;
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0xe800000000000020;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0x100000000;
      *(undefined2 *)(puVar12 + 0x14) = 0;
      LOCK();
      bVar24 = *(char *)(puVar12 + 8) == '\x01';
      if (bVar24) {
        *(char *)(puVar12 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar24) {
        FUN_14008cdb0(puVar12 + 8);
      }
      *puVar12 = &PTR_FUN_14a2f1180;
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar13 = local_f8;
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar22 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar22 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar22 + 0x30);
      }
      puVar12[0xf] = uVar14;
      puVar12[0x10] = 0xc8000052888b0000;
      *(uint *)((longlong)puVar12 + 0x1c) = bVar4 ^ 1;
      puVar12[0x15] = param_1;
      puVar12[0x16] = puVar11 + 2;
      puVar12[0x17] = local_f8;
      *puVar12 = &PTR_FUN_14a2f1170;
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      local_88 = (undefined8 *)CONCAT71(local_88._1_7_,1);
      FUN_1447439e4(puVar12);
      if (puVar12 == (undefined8 *)0x0) goto LAB_142fdd275;
      iVar15 = *(int *)(lVar16 + 0x508);
      *(uint *)(lVar16 + 0x508) = iVar15 + 1U;
      if (*(uint *)(lVar16 + 0x50c) < iVar15 + 1U) {
        FUN_1401d03aa((longlong *)(lVar16 + 0x500),iVar15);
      }
      *(undefined8 **)(*(longlong *)(lVar16 + 0x500) + (longlong)iVar15 * 8) = puVar12;
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
      FUN_14473400f(0,0);
      puVar13 = local_f8;
      LOCK();
      piVar2 = (int *)(puVar12 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
    puVar19 = local_f0;
    puVar11[0x1a] = local_e8;
    puVar11[0x1b] = 0;
    *(undefined2 *)(puVar11 + 0x1c) = 0x101;
    *(undefined4 *)((longlong)puVar11 + 0xe4) = 0x21;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1)) {
      FUN_145fddb1e(&local_88);
      local_110 = 0;
      local_120 = 0;
      local_140 = "Unknown";
      local_150 = (undefined1  [16])0x0;
      local_158 = L"FRenderTargetParameters";
      local_118 = 0;
      local_130 = 0x100;
      local_138 = 0x7af;
      local_128 = &local_88;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ffc55d);
      _Init_thread_footer(&DAT_14c9c1080);
      puVar19 = local_f0;
      lVar16 = local_100;
      puVar13 = local_f8;
    }
    FUN_140069376(lVar16);
    puVar23 = (undefined8 *)(*(longlong *)(lVar16 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar23 + 0x3a;
    if (*(undefined8 **)(lVar16 + 0x78) < puVar12) {
      FUN_140023dd8(puVar19,0x1d8);
      puVar23 = (undefined8 *)(*puVar19 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar23 + 0x3a;
    }
    *puVar19 = (ulonglong)puVar12;
    local_80 = DAT_14c9c1048;
    if (DAT_14c9c1048 != 0) {
      LOCK();
      *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
      UNLOCK();
    }
    local_78 = &DAT_14c9c1000;
    local_158 = (wchar_t *)CONCAT71(local_158._1_7_,2);
    local_88 = puVar11 + 2;
    FUN_140068f1a(puVar23,&local_70,&local_88,0x11);
    *puVar23 = &PTR_FUN_14a2f1190;
    puVar23[0x37] = param_1;
    puVar23[0x38] = puVar13;
    *(int *)(puVar23 + 0x39) = (int)local_e0;
    iVar15 = *(int *)(lVar16 + 0x170);
    *(uint *)(lVar16 + 0x170) = iVar15 + 1U;
    if (*(uint *)(lVar16 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(lVar16 + 0x168,iVar15);
    }
    *(undefined8 **)(*(longlong *)(lVar16 + 0x168) + (longlong)iVar15 * 8) = puVar23;
    *(int *)((longlong)puVar23 + 0x2c) = *(int *)(lVar16 + 0x170) + -1;
    FUN_140069100(lVar16,puVar23);
    param_3 = local_d0;
    param_4 = local_101;
  }
  param_2 = local_100;
  local_150._0_8_ = param_6;
  local_158 = param_5;
  cVar9 = FUN_142baf884(param_1,local_100,*(undefined8 *)(param_3 + 0x1c8),
                        *(undefined8 *)(param_3 + 0x1d8));
  if (param_4 == '\0') {
LAB_142fdd433:
    if (cVar9 == '\0') goto LAB_142fdd456;
  }
  else {
    FUN_142fdd5d4(param_1,param_2);
  }
  if (0 < (longlong)*(int *)(param_2 + 0x170)) {
    puVar1 = (uint *)(*(longlong *)
                       (*(longlong *)(param_2 + 0x168) + -8 +
                       (longlong)*(int *)(param_2 + 0x170) * 8) + 0x34);
    *puVar1 = *puVar1 | 0x100;
  }
  goto LAB_142fdd456;
}



// FUNCTION 142fdd5d4 FUN_142fdd5d4 body=572 status=ok
// SIG undefined FUN_142fdd5d4(void)

void FUN_142fdd5d4(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined **local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_41;
  undefined *local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c7609fc == '\x01') && (DAT_14c842750 == '\x01')) {
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x38;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1c8);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x38;
    }
    *puVar1 = (ulonglong)puVar4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_40);
        local_50 = 0;
        local_60 = 0;
        local_80 = "Unknown";
        local_90 = 0;
        uStack_88 = 0;
        local_98 = L"FEmptyShaderParameters";
        local_58 = 0;
        local_70 = 0x10;
        local_78 = 0x7a6;
        local_68 = &local_40;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_40 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142ffc894);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_40 = &DAT_14ca46a70;
    local_38 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_30 = &DAT_14c9e1d18;
    local_98 = (wchar_t *)CONCAT71(local_98._1_7_,2);
    FUN_140068f1a(puVar5,&local_41,&local_40,0x10);
    puVar5[0x37] = param_1;
    *puVar5 = &PTR_FUN_14a2f11b0;
    iVar3 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar3 + 1U) {
      FUN_14470e57a((longlong *)(param_2 + 0x168),iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar3 * 8) = puVar5;
    *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar5);
    if (0 < (longlong)*(int *)(param_2 + 0x170)) {
      puVar2 = (uint *)(*(longlong *)
                         (*(longlong *)(param_2 + 0x168) + -8 +
                         (longlong)*(int *)(param_2 + 0x170) * 8) + 0x34);
      *puVar2 = *puVar2 | 0x100;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fdd812 FUN_142fdd812 body=285 status=ok
// SIG undefined FUN_142fdd812(void)

void FUN_142fdd812(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [136];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14c7609fc == '\x01') {
    local_38 = (undefined1 *)0x0;
    local_30 = 0x100000000;
    local_d0 = *(undefined8 *)(param_1 + 1000);
    local_c8 = *(undefined4 *)(param_1 + 0x3f0);
    local_e0 = *(undefined8 *)(param_1 + 0x4d8);
    local_d8 = *(undefined4 *)(param_1 + 0x4e0);
    FUN_142fdd930(local_c0,*(undefined8 *)(param_1 + 8));
    if ((int)local_30 == 0) {
      uVar1 = 0;
    }
    else {
      local_f0 = *(undefined8 *)(param_1 + 1000);
      local_e8 = *(undefined4 *)(param_1 + 0x3f0);
      local_f8 = 1;
      FUN_142fdeeb8(param_2,&local_f0,*(undefined4 *)(param_1 + 0x8a4),local_c0);
      uVar1 = local_30 & 0xffffffff;
    }
    puVar2 = local_c0;
    if (local_38 != (undefined1 *)0x0) {
      puVar2 = local_38;
    }
    FUN_1400bc6c1(puVar2,uVar1);
    FUN_14017f3f2(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fdd930 FUN_142fdd930 body=5511 status=ok
// SIG undefined FUN_142fdd930(void)

void FUN_142fdd930(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  byte bVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  double *pdVar20;
  int iVar21;
  int iVar22;
  double *pdVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  double *pdVar28;
  uint *puVar29;
  int iVar30;
  uint *puVar31;
  ulonglong uVar32;
  longlong *plVar33;
  byte bVar34;
  uint uVar35;
  ulonglong uVar36;
  bool bVar37;
  bool bVar38;
  longlong lVar39;
  double dVar40;
  longlong *plVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_208 [32];
  double *local_1e8;
  longlong local_1d8;
  int local_1cc;
  longlong *local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [24];
  longlong local_190;
  undefined1 local_188 [16];
  longlong local_178;
  int local_170;
  int local_16c;
  longlong *local_168;
  uint *local_160;
  longlong *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  longlong *local_128;
  double *local_120;
  double local_118;
  longlong *local_110;
  double local_108;
  longlong *local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_16c = *(int *)(param_2 + 8);
  local_110 = param_3;
  local_1cc = FUN_1403fb1aa();
  uVar26 = *(uint *)(param_4 + 1);
  iVar21 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar21 + uVar26;
  if ((uint)(*(int *)(param_1 + 0x94) - iVar21) < uVar26) {
    FUN_1472dc938(param_1,iVar21);
  }
  lVar17 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar17 = param_1;
  }
  FUN_142fea398((longlong)iVar21 * 0x88 + lVar17,uVar26);
  iVar21 = (int)param_4[1];
  if (0 < iVar21) {
    local_160 = (uint *)(param_2 + 0x3560);
    local_170 = local_1cc + 1;
    lVar17 = 0;
    bVar34 = 0;
    local_1d8 = param_1;
    local_1c8 = param_4;
    local_178 = param_2;
    do {
      lVar14 = *param_4;
      lVar27 = lVar17 * 0x13c10;
      lVar39 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar39 = param_1;
      }
      lVar5 = *(longlong *)(lVar14 + 0x10 + lVar27);
      if ((lVar5 != 0) && (lVar1 = lVar14 + lVar27, (*(byte *)(lVar1 + 0x125b0) & 0x20) == 0)) {
        pdVar28 = *(double **)(lVar14 + 8 + lVar27);
        lVar14 = lVar5 + 0x30;
        if (*(longlong *)(lVar5 + 0x170) != 0) {
          lVar14 = *(longlong *)(lVar5 + 0x170);
        }
        lVar27 = (longlong)(*(int *)(lVar5 + 0x454) % local_1cc) * 0x50;
        puVar29 = (uint *)(ulonglong)*(uint *)(lVar5 + 0x4c8);
        local_1c0 = lVar17;
        FUN_14495423c(lVar5,(float)pdVar28[0x11],
                      (float)(pdVar28[0x11] - (double)*(float *)(DAT_14cb0d2b0 + 0xd8c)));
        iVar21 = *(int *)(lVar14 + 8 + lVar27);
        iVar30 = *(int *)(lVar14 + 0x34 + lVar27);
        if (iVar21 != iVar30) {
          plVar25 = (longlong *)(lVar14 + lVar27);
          plVar33 = plVar25 + 7;
          if ((longlong *)plVar25[8] != (longlong *)0x0) {
            plVar33 = (longlong *)plVar25[8];
          }
          iVar15 = (int)plVar25[9];
          iVar22 = iVar15 + 3;
          if (-1 < iVar15) {
            iVar22 = iVar15;
          }
          pdVar28 = (double *)(ulonglong)(uint)(iVar22 >> 2);
          local_188._0_8_ = plVar25;
          if (iVar21 - iVar30 < iVar22 >> 2) {
            iVar21 = (int)plVar25[5];
            if (iVar21 != 0) {
              puVar19 = (uint *)(plVar25 + 2);
              local_1b8._0_8_ = puVar19;
              puVar18 = (uint *)plVar25[4];
              if ((uint *)plVar25[4] == (uint *)0x0) {
                puVar18 = puVar19;
              }
              uVar26 = *puVar18;
              param_1 = local_1d8;
              if (uVar26 == 0) {
                iVar30 = iVar21 + 0x1e;
                if (-1 < iVar21 + -1) {
                  iVar30 = iVar21 + -1;
                }
                puVar29 = (uint *)0x0;
                puVar31 = (uint *)(ulonglong)(uint)(iVar30 >> 5);
                if (iVar30 >> 5 < 1) {
                  puVar31 = puVar29;
                }
                pdVar28 = (double *)0x0;
                do {
                  if (puVar31 == puVar29) goto LAB_142fddb71;
                  pdVar28 = (double *)(ulonglong)((int)pdVar28 + 0x20);
                  uVar26 = puVar18[(longlong)puVar29 + 1];
                  puVar29 = (uint *)((longlong)puVar29 + 1);
                } while (uVar26 == 0);
              }
              else {
                puVar29 = (uint *)0x0;
                pdVar28 = (double *)0x0;
              }
              uVar32 = (ulonglong)(-uVar26 & uVar26);
              uVar36 = uVar32 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar30 = ((int)pdVar28 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar30 < iVar21) {
                uVar26 = 0xffffffff;
                do {
                  *(undefined4 *)
                   ((longlong)plVar33 +
                   (longlong)*(int *)(*plVar25 + 0x2c + (longlong)iVar30 * 0x30) * 4) = 0xffffffff;
                  uVar26 = ~(uint)uVar32 & uVar26;
                  puVar18 = (uint *)plVar25[4];
                  if ((uint *)plVar25[4] == (uint *)0x0) {
                    puVar18 = puVar19;
                  }
                  iVar15 = (int)plVar25[5];
                  iVar30 = (int)puVar29;
                  lVar17 = (longlong)iVar30;
                  uVar35 = puVar18[lVar17] & uVar26;
                  if (uVar35 == 0) {
                    iVar22 = iVar15 + 0x1e;
                    if (-1 < iVar15 + -1) {
                      iVar22 = iVar15 + -1;
                    }
                    iVar22 = iVar22 >> 5;
                    pdVar28 = (double *)(ulonglong)((int)pdVar28 + 0x20);
                    iVar16 = iVar22;
                    if (iVar22 < iVar30) {
                      iVar16 = iVar30;
                    }
                    if (iVar30 < iVar22) {
                      lVar14 = 0;
                      do {
                        uVar35 = puVar18[lVar17 + lVar14 + 1];
                        if (uVar35 != 0) {
                          puVar29 = (uint *)(ulonglong)(iVar30 + (int)lVar14 + 1);
                          uVar26 = 0xffffffff;
                          goto LAB_142fded8c;
                        }
                        pdVar28 = (double *)(ulonglong)((int)pdVar28 + 0x20);
                        lVar14 = lVar14 + 1;
                      } while (iVar16 - lVar17 != lVar14);
                      uVar26 = 0xffffffff;
                      lVar17 = (longlong)iVar16;
                    }
                    puVar29 = (uint *)(lVar17 + 1U & 0xffffffff);
                    iVar30 = iVar15;
                  }
                  else {
LAB_142fded8c:
                    uVar32 = (ulonglong)(-uVar35 & uVar35);
                    uVar36 = uVar32 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar36 != 0) {
                      for (; uVar36 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    iVar30 = ((int)pdVar28 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    if (iVar15 <= iVar30) {
                      iVar30 = iVar15;
                    }
                  }
                } while (iVar30 != iVar21);
              }
            }
          }
          else if (0 < iVar15) {
            lVar17 = 0;
            do {
              *(undefined4 *)((longlong)plVar33 + lVar17 * 4) = 0xffffffff;
              lVar17 = lVar17 + 1;
            } while (lVar17 < (int)plVar25[9]);
          }
LAB_142fddb71:
          puVar19 = (uint *)(plVar25 + 2);
          iVar21 = (int)plVar25[5];
          if (iVar21 == 0) {
            uVar36 = 0;
            uVar32 = 1;
            iVar15 = 0;
            iVar30 = 0;
          }
          else {
            puVar18 = (uint *)plVar25[4];
            if ((uint *)plVar25[4] == (uint *)0x0) {
              puVar18 = puVar19;
            }
            pdVar28 = (double *)(ulonglong)*puVar18;
            if (*puVar18 == 0) {
              uVar26 = iVar21 - 1;
              pdVar28 = (double *)(ulonglong)uVar26;
              uVar35 = iVar21 + 0x1e;
              if (-1 < (int)uVar26) {
                uVar35 = uVar26;
              }
              uVar36 = 0;
              uVar32 = (ulonglong)(uint)((int)uVar35 >> 5);
              if ((int)uVar35 >> 5 < 1) {
                uVar32 = uVar36;
              }
              iVar30 = 0;
              do {
                if (uVar32 == uVar36) goto LAB_142fddde1;
                iVar30 = iVar30 + 0x20;
                lVar17 = uVar36 + 1;
                pdVar28 = (double *)(ulonglong)puVar18[lVar17];
                uVar36 = uVar36 + 1;
              } while (puVar18[lVar17] == 0);
            }
            else {
              uVar36 = 0;
              iVar30 = 0;
            }
            uVar32 = (ulonglong)(-(uint)pdVar28 & (uint)pdVar28);
            uVar2 = uVar32 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar15 = (iVar30 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar21 <= iVar15) {
              iVar15 = iVar21;
            }
          }
          if (iVar15 < iVar21) {
            pdVar28 = (double *)&DAT_ffffffff;
            do {
              uVar26 = (uint)pdVar28;
              lVar17 = *plVar25 + (longlong)iVar15 * 0x30;
              plVar24 = (longlong *)(lVar17 + 0x18);
              plVar33 = *(longlong **)(lVar17 + 0x20);
              if (plVar33 == (longlong *)0x0) {
LAB_142fddc6f:
                lVar17 = *plVar24;
                if (lVar17 != 0) {
                  LOCK();
                  puVar29 = (uint *)(lVar17 + 8);
                  uVar35 = *puVar29;
                  *puVar29 = *puVar29 - 1;
                  UNLOCK();
                  if ((uVar35 & 0x3fffffff) == 1) {
                    puVar29 = (uint *)(lVar17 + 8);
                    LOCK();
                    uVar35 = *puVar29;
                    *puVar29 = *puVar29 | 0x40000000;
                    UNLOCK();
                    if ((uVar35 >> 0x1e & 1) == 0) {
                      local_190 = CONCAT44(local_190._4_4_,uVar26);
                      local_1a8._0_4_ = iVar30;
                      local_1b8._0_8_ = puVar19;
                      bVar13 = *(byte *)(lVar17 + 0xd);
                      plVar41 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar41[1] = lVar17;
                      plVar33 = DAT_14ca843c0;
                      plVar24 = DAT_14ca843c8;
                      param_1 = local_1d8;
                      plVar25 = (longlong *)local_188._0_8_;
                      puVar19 = (uint *)local_1b8._0_8_;
                      iVar30 = local_1a8._0_4_;
                      uVar26 = (uint)local_190;
                      if ((bVar13 & 2) == 0) {
                        do {
                          *plVar41 = (longlong)plVar33;
                          LOCK();
                          bVar38 = plVar33 != DAT_14ca843c0;
                          plVar24 = plVar41;
                          if (bVar38) {
                            plVar33 = DAT_14ca843c0;
                            plVar24 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar24;
                          UNLOCK();
                        } while (bVar38);
                      }
                      else {
                        do {
                          *plVar41 = (longlong)plVar24;
                          LOCK();
                          bVar38 = plVar24 != DAT_14ca843c8;
                          plVar33 = plVar41;
                          if (bVar38) {
                            plVar24 = DAT_14ca843c8;
                            plVar33 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar33;
                          UNLOCK();
                        } while (bVar38);
                      }
                    }
                  }
                }
              }
              else if (*plVar24 != 0) {
                local_1a8._0_8_ = *plVar25 + (longlong)iVar15 * 0x30 + 0x20;
                local_1b8._0_8_ = uVar36;
                (**(code **)(*plVar33 + 0x10))(plVar33,plVar24);
                *(undefined8 *)local_1a8._0_8_ = 0;
                plVar25 = (longlong *)local_188._0_8_;
                param_1 = local_1d8;
                uVar36 = local_1b8._0_8_;
                goto LAB_142fddc6f;
              }
              uVar26 = uVar26 & ~(uint)uVar32;
              pdVar28 = (double *)(ulonglong)uVar26;
              puVar18 = (uint *)plVar25[4];
              if ((uint *)plVar25[4] == (uint *)0x0) {
                puVar18 = puVar19;
              }
              iVar21 = (int)plVar25[5];
              iVar15 = (int)uVar36;
              puVar29 = (uint *)(longlong)iVar15;
              uVar26 = puVar18[(longlong)puVar29] & uVar26;
              if (uVar26 == 0) {
                uVar26 = iVar21 - 1;
                pdVar28 = (double *)(ulonglong)uVar26;
                uVar35 = iVar21 + 0x1e;
                if (-1 < (int)uVar26) {
                  uVar35 = uVar26;
                }
                iVar16 = (int)uVar35 >> 5;
                iVar22 = iVar16;
                if (iVar16 < iVar15) {
                  iVar22 = iVar15;
                }
                if (iVar16 <= iVar15) break;
                pdVar28 = (double *)((longlong)iVar22 - (longlong)puVar29);
                puVar29 = puVar18 + (longlong)puVar29 + 1;
                pdVar23 = (double *)0x0;
                while( true ) {
                  iVar30 = iVar30 + 0x20;
                  uVar26 = puVar29[(longlong)pdVar23];
                  if (uVar26 != 0) break;
                  pdVar23 = (double *)((longlong)pdVar23 + 1);
                  if (pdVar28 == pdVar23) goto LAB_142fddde1;
                }
                uVar36 = (ulonglong)(iVar15 + (int)pdVar23 + 1);
                pdVar28 = (double *)&DAT_ffffffff;
              }
              uVar32 = (ulonglong)(-uVar26 & uVar26);
              uVar2 = uVar32 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar15 = (iVar30 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            } while (iVar15 < iVar21);
          }
LAB_142fddde1:
          *(undefined4 *)(plVar25 + 1) = 0;
          if (*(int *)((longlong)plVar25 + 0xc) < 0) {
            FUN_14494313c();
          }
          plVar25[6] = 0xffffffff;
          *(undefined4 *)(plVar25 + 5) = 0;
          param_2 = local_178;
        }
        plVar33 = (longlong *)(lVar39 + local_1c0 * 0x88);
        param_4 = local_1c8;
        lVar17 = local_1c0;
        if (1 < local_16c) {
          iVar21 = *(int *)(param_2 + 0x3578);
          if (iVar21 == 0) {
            uVar36 = 0;
            uVar32 = 1;
            iVar30 = 0;
            iVar15 = 0;
          }
          else {
            puVar19 = *(uint **)(param_2 + 0x3570);
            if (*(uint **)(param_2 + 0x3570) == (uint *)0x0) {
              puVar19 = local_160;
            }
            pdVar28 = (double *)(ulonglong)*puVar19;
            if (*puVar19 == 0) {
              uVar26 = iVar21 - 1;
              pdVar28 = (double *)(ulonglong)uVar26;
              uVar35 = iVar21 + 0x1e;
              if (-1 < (int)uVar26) {
                uVar35 = uVar26;
              }
              uVar36 = 0;
              uVar32 = (ulonglong)(uint)((int)uVar35 >> 5);
              if ((int)uVar35 >> 5 < 1) {
                uVar32 = uVar36;
              }
              iVar30 = 0;
              do {
                if (uVar32 == uVar36) goto LAB_142fde2e6;
                iVar30 = iVar30 + 0x20;
                lVar17 = uVar36 + 1;
                pdVar28 = (double *)(ulonglong)puVar19[lVar17];
                uVar36 = uVar36 + 1;
              } while (puVar19[lVar17] == 0);
            }
            else {
              uVar36 = 0;
              iVar30 = 0;
            }
            uVar32 = (ulonglong)(-(uint)pdVar28 & (uint)pdVar28);
            uVar2 = uVar32 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar15 = (iVar30 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar21 <= iVar15) {
              iVar15 = iVar21;
            }
          }
          if (iVar15 < iVar21) {
            local_1b8._0_8_ = plVar33 + 4;
            plVar25 = plVar33 + 0xc;
            local_138 = plVar33 + 2;
            local_158 = plVar33 + 10;
            local_148 = plVar33 + 8;
            pdVar28 = (double *)&DAT_ffffffff;
            do {
              local_188._0_4_ = iVar30;
              plVar24 = (longlong *)(*local_110 + (longlong)iVar15 * 0x68);
              local_1a8._0_8_ = uVar36;
              local_190 = CONCAT44(local_190._4_4_,(int)pdVar28);
              if (0 < *(int *)(*local_110 + 8 + (longlong)iVar15 * 0x68)) {
                lVar17 = 0;
                do {
                  lVar14 = *(longlong *)(*plVar24 + lVar17 * 8);
                  if ((((*(longlong *)(lVar14 + 0x38) != 0 && *(longlong *)(lVar14 + 0x38) != lVar1)
                       || (*(int *)(lVar14 + 0x30) == 1)) || (*(int *)(lVar14 + 0x99c) != -1)) ||
                     (*(longlong *)(lVar14 + 0xb50) != 0)) goto LAB_142fddf73;
                  uVar26 = *(uint *)(lVar14 + 0x990);
                  if ((char)uVar26 < '\0') {
                    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar14 + 0xb60) + 0x28) + 0x1e8) &
                        0xfd) == 1) {
                      local_1e8 = &local_108;
                      cVar12 = FUN_142fe9a78(lVar1,lVar14,local_1cc,1);
                      if (cVar12 != '\0') {
                        iVar21 = (int)plVar33[1];
                        *(uint *)(plVar33 + 1) = iVar21 + 1U;
                        if (*(uint *)((longlong)plVar33 + 0xc) < iVar21 + 1U) {
                          FUN_14177e90c(plVar33,iVar21);
                        }
                        *(longlong *)(*plVar33 + (longlong)iVar21 * 8) = lVar14;
                        iVar21 = (int)plVar33[9];
                        *(uint *)(plVar33 + 9) = iVar21 + 1U;
                        plVar41 = local_148;
                        if (*(uint *)((longlong)plVar33 + 0x4c) < iVar21 + 1U) {
                          FUN_14177eb1c(local_148,iVar21);
                          plVar41 = local_148;
                        }
LAB_142fde023:
                        lVar14 = *plVar41;
LAB_142fde026:
                        *(double *)(lVar14 + (longlong)iVar21 * 8) = local_108;
                        bVar34 = 1;
                      }
                    }
                    else {
                      if ((uVar26 & 0x10) == 0 || *(int *)(lVar14 + 0x944) < 0) goto LAB_142fde054;
                      if ((DAT_14ca4590c != 0) && (*(int *)(lVar14 + 0x944) != 0)) {
                        local_1e8 = &local_108;
                        cVar12 = FUN_142fe9a78(lVar1,lVar14,local_1cc,0);
                        if (cVar12 != '\0') {
                          iVar21 = (int)plVar33[3];
                          *(uint *)(plVar33 + 3) = iVar21 + 1U;
                          if (*(uint *)((longlong)plVar33 + 0x1c) < iVar21 + 1U) {
                            FUN_14177e90c(local_138,iVar21);
                          }
                          *(longlong *)(plVar33[2] + (longlong)iVar21 * 8) = lVar14;
                          iVar21 = (int)plVar33[0xb];
                          *(uint *)(plVar33 + 0xb) = iVar21 + 1U;
                          plVar41 = local_158;
                          if (*(uint *)((longlong)plVar33 + 0x5c) < iVar21 + 1U) {
                            FUN_14177eb1c(local_158,iVar21);
                            plVar41 = local_158;
                          }
                          goto LAB_142fde023;
                        }
                      }
                    }
                  }
                  else {
LAB_142fde054:
                    if (((uVar26 >> 0xb & 1) == 0) &&
                       (cVar12 = FUN_143073a94(lVar14,lVar1), cVar12 == '\0')) {
                      local_1e8 = &local_108;
                      cVar12 = FUN_142fe9a78(lVar1,lVar14,local_1cc,2);
                      if (cVar12 != '\0') {
                        iVar21 = (int)plVar33[5];
                        *(uint *)(plVar33 + 5) = iVar21 + 1U;
                        if (*(uint *)((longlong)plVar33 + 0x2c) < iVar21 + 1U) {
                          FUN_14177e90c(local_1b8._0_8_,iVar21);
                        }
                        *(longlong *)(plVar33[4] + (longlong)iVar21 * 8) = lVar14;
                        iVar21 = (int)plVar33[0xd];
                        *(uint *)(plVar33 + 0xd) = iVar21 + 1U;
                        if (*(uint *)((longlong)plVar33 + 0x6c) < iVar21 + 1U) {
                          FUN_14177eb1c(plVar25,iVar21);
                        }
                        lVar14 = *plVar25;
                        goto LAB_142fde026;
                      }
                    }
                  }
LAB_142fddf73:
                  lVar17 = lVar17 + 1;
                } while (lVar17 < (int)plVar24[1]);
              }
              if (0 < (int)plVar24[9]) {
                lVar17 = 0;
                do {
                  uVar6 = *(undefined8 *)(plVar24[8] + lVar17 * 8);
                  local_1e8 = &local_108;
                  cVar12 = FUN_142fe9a78(lVar1,uVar6,local_1cc,2);
                  if (cVar12 != '\0') {
                    iVar21 = (int)plVar33[5];
                    *(uint *)(plVar33 + 5) = iVar21 + 1U;
                    if (*(uint *)((longlong)plVar33 + 0x2c) < iVar21 + 1U) {
                      FUN_14177e90c(local_1b8._0_8_,iVar21);
                    }
                    *(undefined8 *)(plVar33[4] + (longlong)iVar21 * 8) = uVar6;
                    iVar21 = (int)plVar33[0xd];
                    *(uint *)(plVar33 + 0xd) = iVar21 + 1U;
                    if (*(uint *)((longlong)plVar33 + 0x6c) < iVar21 + 1U) {
                      FUN_14177eb1c(plVar25,iVar21);
                    }
                    *(double *)(*plVar25 + (longlong)iVar21 * 8) = local_108;
                    bVar34 = 1;
                  }
                  lVar17 = lVar17 + 1;
                } while (lVar17 < (int)plVar24[9]);
              }
              uVar26 = (uint)local_190 & ~(uint)uVar32;
              pdVar28 = (double *)(ulonglong)uVar26;
              puVar19 = *(uint **)(local_178 + 0x3570);
              if (*(uint **)(local_178 + 0x3570) == (uint *)0x0) {
                puVar19 = local_160;
              }
              iVar21 = *(int *)(local_178 + 0x3578);
              iVar15 = local_1a8._0_4_;
              puVar29 = (uint *)(longlong)iVar15;
              uVar26 = puVar19[(longlong)puVar29] & uVar26;
              uVar36 = local_1a8._0_8_;
              iVar30 = local_188._0_4_;
              param_2 = local_178;
              if (uVar26 == 0) {
                uVar26 = iVar21 - 1;
                pdVar28 = (double *)(ulonglong)uVar26;
                uVar35 = iVar21 + 0x1e;
                if (-1 < (int)uVar26) {
                  uVar35 = uVar26;
                }
                iVar16 = (int)uVar35 >> 5;
                iVar22 = iVar16;
                if (iVar16 < iVar15) {
                  iVar22 = iVar15;
                }
                if (iVar16 <= iVar15) break;
                pdVar28 = (double *)((longlong)iVar22 - (longlong)puVar29);
                pdVar23 = (double *)0x0;
                while( true ) {
                  iVar30 = iVar30 + 0x20;
                  uVar26 = puVar19[(longlong)((longlong)puVar29 + (longlong)((longlong)pdVar23 + 1))
                                  ];
                  if (uVar26 != 0) break;
                  pdVar23 = (double *)((longlong)pdVar23 + 1);
                  if (pdVar28 == pdVar23) goto LAB_142fde2e6;
                }
                pdVar28 = (double *)&DAT_ffffffff;
                uVar36 = (ulonglong)(iVar15 + (int)pdVar23 + 1);
              }
              uVar32 = (ulonglong)(-uVar26 & uVar26);
              uVar2 = uVar32 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar15 = (iVar30 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            } while (iVar15 < iVar21);
          }
LAB_142fde2e6:
          param_4 = local_1c8;
          lVar17 = local_1c0;
          param_1 = local_1d8;
          if ((((*(char *)(lVar1 + 0x23ec) == '\0') && (*(char *)(lVar1 + 0x23e8) == '\0')) &&
              (*(char *)(lVar1 + 0x23eb) == '\0')) && (0 < *(int *)(param_2 + 0x3720))) {
            local_128 = plVar33 + 6;
            local_168 = plVar33 + 0xe;
            local_120 = (double *)(lVar1 + 0x2020);
            lVar14 = 0;
            do {
              pdVar23 = *(double **)(*(longlong *)(param_2 + 0x3718) + lVar14 * 8);
              lVar17 = *(longlong *)(lVar1 + 0x10);
              dVar40 = pdVar23[2];
              dVar3 = *pdVar23;
              dVar4 = pdVar23[1];
              plVar24 = (longlong *)((pdVar23[5] - dVar40) * 0.5);
              plVar25 = (longlong *)((pdVar23[4] - dVar4) * 0.5);
              plVar41 = (longlong *)((pdVar23[3] - dVar3) * 0.5);
              if (0 < *(int *)(lVar1 + 0x2130)) {
                dVar7 = (pdVar23[5] + dVar40) * 0.5;
                dVar42 = (pdVar23[4] + dVar4) * 0.5;
                dVar43 = (pdVar23[3] + dVar3) * 0.5;
                dVar8 = ABS((double)plVar41);
                dVar9 = ABS((double)plVar25);
                local_1b8._8_4_ = SUB84(dVar8,0);
                local_1b8._0_8_ = dVar8;
                local_1b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                local_1a8._8_4_ = SUB84(dVar9,0);
                local_1a8._0_8_ = dVar9;
                local_1a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                pdVar20 = *(double **)(lVar1 + 0x2120);
                if (*(double **)(lVar1 + 0x2120) == (double *)0x0) {
                  pdVar20 = local_120;
                }
                iVar21 = 0;
                uStack_140 = 0;
                uStack_150 = 0;
                uStack_130 = 0;
                local_188._8_4_ = (int)plVar24;
                local_188._0_8_ = plVar24;
                local_188._12_4_ = (int)((ulonglong)plVar24 >> 0x20);
                do {
                  lVar39 = -(ulonglong)
                            (ABS(pdVar20[9] * (double)local_188._8_8_) +
                             ABS(pdVar20[5]) * (double)local_1a8._8_8_ +
                             ABS(pdVar20[1]) * (double)local_1b8._8_8_ <
                            (dVar7 * pdVar20[9] + dVar42 * pdVar20[5] + dVar43 * pdVar20[1]) -
                            pdVar20[0xd]);
                  lVar27 = -(ulonglong)
                            (ABS(pdVar20[0xb] * (double)local_188._8_8_) +
                             ABS(pdVar20[7]) * (double)local_1a8._8_8_ +
                             ABS(pdVar20[3]) * (double)local_1b8._8_8_ <
                            (dVar7 * pdVar20[0xb] + dVar42 * pdVar20[7] + dVar43 * pdVar20[3]) -
                            pdVar20[0xf]);
                  auVar11._8_4_ = (int)lVar39;
                  auVar11._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar20[8] * (double)plVar24) +
                         ABS(pdVar20[4]) * dVar9 + ABS(*pdVar20) * dVar8 <
                        (dVar7 * pdVar20[8] + dVar42 * pdVar20[4] + dVar43 * *pdVar20) -
                        pdVar20[0xc]);
                  auVar11._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
                  uVar26 = movmskpd((int)pdVar28,auVar11);
                  pdVar28 = (double *)(ulonglong)uVar26;
                  auVar10._8_4_ = (int)lVar27;
                  auVar10._0_8_ =
                       -(ulonglong)
                        (ABS(pdVar20[10] * (double)plVar24) +
                         ABS(pdVar20[6]) * dVar9 + ABS(pdVar20[2]) * dVar8 <
                        (dVar7 * pdVar20[10] + dVar42 * pdVar20[6] + dVar43 * pdVar20[2]) -
                        pdVar20[0xe]);
                  auVar10._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
                  iVar30 = movmskpd((int)puVar29,auVar10);
                  uVar26 = iVar30 << 2 | uVar26;
                  puVar29 = (uint *)(ulonglong)uVar26;
                  local_158 = plVar25;
                  local_148 = plVar41;
                  local_138 = plVar24;
                  local_118 = dVar4;
                  if (uVar26 != 0) {
                    bVar38 = false;
                    goto LAB_142fde67f;
                  }
                  pdVar20 = pdVar20 + 0x10;
                  iVar21 = iVar21 + 4;
                } while (iVar21 < *(int *)(lVar1 + 0x2130));
              }
              local_f8 = dVar40 + (double)plVar24;
              local_100 = (longlong *)(dVar4 + (double)plVar25);
              local_108 = dVar3 + (double)plVar41;
              if (*(char *)(lVar1 + 0x2140) == '\x01') {
                bVar38 = (local_f8 * *(double *)(lVar1 + 0x2160) +
                         local_108 * *(double *)(lVar1 + 0x2150) +
                         (double)local_100 * *(double *)(lVar1 + 0x2158)) -
                         *(double *)(lVar1 + 0x2168) <
                         -(ABS((double)plVar24 * *(double *)(lVar1 + 0x2160)) +
                          ABS((double)plVar25 * *(double *)(lVar1 + 0x2158)) +
                          ABS((double)plVar41 * *(double *)(lVar1 + 0x2150)));
              }
              else {
                dVar40 = SQRT((double)plVar24 * (double)plVar24 +
                              (double)plVar41 * (double)plVar41 + (double)plVar25 * (double)plVar25)
                ;
                if (1.0 < *(double *)(lVar1 + 0x8a8) || *(double *)(lVar1 + 0x8a8) == 1.0) {
                  dVar40 = (local_f8 * *(double *)(lVar1 + 0xb00) +
                            (double)local_100 * *(double *)(lVar1 + 0xae0) +
                            local_108 * *(double *)(lVar1 + 0xac0) + *(double *)(lVar1 + 0xb20)) -
                           dVar40 * *(double *)(lVar1 + 0x880);
                  bVar38 = dVar40 == 1.0;
                  bVar37 = 1.0 < dVar40;
                }
                else {
                  bVar38 = dVar40 == 4398046511104.0;
                  bVar37 = 4398046511104.0 < dVar40;
                }
                bVar38 = !bVar37 && !bVar38;
              }
LAB_142fde67f:
              iVar21 = *(int *)(lVar17 + 0x4c8);
              pdVar28 = pdVar23 + 0x1d;
              local_190 = lVar14;
              lVar14 = FUN_147287ae4(lVar17 + 0x530,*(undefined4 *)(pdVar23 + 0x1d));
              local_1b8._0_4_ = iVar21;
              uVar36 = (longlong)iVar21 % (longlong)local_170 & 0xffffffff;
              local_1a8._0_8_ = uVar36;
              lVar39 = uVar36 * 0x10;
              pdVar20 = (double *)(lVar14 + lVar39);
              plVar25 = *(longlong **)(lVar14 + 8 + lVar39);
              if ((plVar25 != (longlong *)0x0) && (*pdVar20 != 0.0)) {
                (**(code **)(*plVar25 + 0x10))();
                pdVar20[1] = 0.0;
              }
              if (bVar38) {
                (**(code **)(**(longlong **)(lVar17 + 0x180) + 8))();
                dVar40 = local_108;
                if (pdVar20 == &local_108) {
LAB_142fde794:
                  pdVar20[1] = (double)local_100;
                  *(undefined4 *)(lVar14 + 0x40 + local_1a8._0_8_ * 4) = local_1b8._0_4_;
                  if (local_100 != (longlong *)0x0) {
                    if (local_108 == 0.0) goto LAB_142fdea17;
                    (**(code **)(*local_100 + 0x10))();
                    local_100 = (longlong *)0x0;
                  }
                  dVar3 = local_108;
                  if (local_108 != 0.0) {
                    LOCK();
                    puVar19 = (uint *)((longlong)local_108 + 8);
                    uVar26 = *puVar19;
                    *puVar19 = *puVar19 - 1;
                    UNLOCK();
                    if ((uVar26 & 0x3fffffff) == 1) {
                      puVar19 = (uint *)((longlong)local_108 + 8);
                      LOCK();
                      uVar26 = *puVar19;
                      *puVar19 = *puVar19 | 0x40000000;
                      UNLOCK();
                      if ((uVar26 >> 0x1e & 1) == 0) {
                        bVar34 = *(byte *)((longlong)local_108 + 0xd);
                        plVar41 = (longlong *)FUN_14001cc68(0x10);
                        plVar41[1] = (longlong)dVar3;
                        plVar25 = DAT_14ca843c0;
                        plVar24 = DAT_14ca843c8;
                        if ((bVar34 & 2) == 0) {
                          do {
                            *plVar41 = (longlong)plVar25;
                            LOCK();
                            bVar38 = plVar25 != DAT_14ca843c0;
                            plVar24 = plVar41;
                            if (bVar38) {
                              plVar25 = DAT_14ca843c0;
                              plVar24 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar24;
                            UNLOCK();
                          } while (bVar38);
                        }
                        else {
                          do {
                            *plVar41 = (longlong)plVar24;
                            LOCK();
                            bVar38 = plVar24 != DAT_14ca843c8;
                            plVar25 = plVar41;
                            if (bVar38) {
                              plVar24 = DAT_14ca843c8;
                              plVar25 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar25;
                            UNLOCK();
                          } while (bVar38);
                        }
                      }
                    }
                  }
                }
                else {
                  dVar3 = *pdVar20;
                  *pdVar20 = local_108;
                  local_108 = 0.0;
                  if (dVar3 != 0.0) {
                    LOCK();
                    puVar19 = (uint *)((longlong)dVar3 + 8);
                    uVar26 = *puVar19;
                    *puVar19 = *puVar19 - 1;
                    UNLOCK();
                    if ((uVar26 & 0x3fffffff) == 1) {
                      puVar19 = (uint *)((longlong)dVar3 + 8);
                      LOCK();
                      uVar26 = *puVar19;
                      *puVar19 = *puVar19 | 0x40000000;
                      UNLOCK();
                      if ((uVar26 >> 0x1e & 1) == 0) {
                        bVar34 = *(byte *)((longlong)dVar3 + 0xd);
                        plVar41 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar41[1] = (longlong)dVar3;
                        plVar25 = DAT_14ca843c0;
                        plVar24 = DAT_14ca843c8;
                        if ((bVar34 & 2) == 0) {
                          do {
                            *plVar41 = (longlong)plVar25;
                            LOCK();
                            bVar38 = plVar25 != DAT_14ca843c0;
                            plVar24 = plVar41;
                            if (bVar38) {
                              plVar25 = DAT_14ca843c0;
                              plVar24 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar24;
                            UNLOCK();
                          } while (bVar38);
                        }
                        else {
                          do {
                            *plVar41 = (longlong)plVar24;
                            LOCK();
                            bVar38 = plVar24 != DAT_14ca843c8;
                            plVar25 = plVar41;
                            if (bVar38) {
                              plVar24 = DAT_14ca843c8;
                              plVar25 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar25;
                            UNLOCK();
                          } while (bVar38);
                        }
                      }
                    }
                    goto LAB_142fde794;
                  }
                  pdVar20[1] = (double)local_100;
                  *(undefined4 *)(lVar14 + 0x40 + local_1a8._0_8_ * 4) = local_1b8._0_4_;
                }
LAB_142fdea17:
                lVar17 = plVar33[7];
                uVar26 = (int)lVar17 + 1;
                *(uint *)(plVar33 + 7) = uVar26;
                if (*(uint *)((longlong)plVar33 + 0x3c) < uVar26) {
                  FUN_1472dcab2(local_128);
                }
                param_2 = local_178;
                *(double **)(plVar33[6] + (longlong)(int)lVar17 * 8) = pdVar23;
                lVar17 = plVar33[0xf];
                uVar26 = (int)lVar17 + 1;
                *(uint *)(plVar33 + 0xf) = uVar26;
                if (*(uint *)((longlong)plVar33 + 0x7c) < uVar26) {
                  FUN_14177eb1c(local_168);
                }
                *(double *)(*local_168 + (longlong)(int)lVar17 * 8) = dVar40;
                bVar34 = 1;
                param_4 = local_1c8;
                lVar17 = local_1c0;
                param_1 = local_1d8;
              }
              else {
                local_100 = (longlong *)0x0;
                if (pdVar20 == &local_108) {
LAB_142fde9d0:
                  pdVar20[1] = 0.0;
                  *(undefined4 *)(lVar14 + 0x40 + local_1a8._0_8_ * 4) = local_1b8._0_4_;
                  param_4 = local_1c8;
                  lVar17 = local_1c0;
                  param_1 = local_1d8;
                  param_2 = local_178;
                }
                else {
                  dVar40 = *pdVar20;
                  *pdVar20 = 0.0;
                  local_108 = 0.0;
                  if (dVar40 == 0.0) goto LAB_142fde9d0;
                  LOCK();
                  puVar19 = (uint *)((longlong)dVar40 + 8);
                  uVar26 = *puVar19;
                  *puVar19 = *puVar19 - 1;
                  UNLOCK();
                  if ((uVar26 & 0x3fffffff) == 1) {
                    puVar19 = (uint *)((longlong)dVar40 + 8);
                    LOCK();
                    uVar26 = *puVar19;
                    *puVar19 = *puVar19 | 0x40000000;
                    UNLOCK();
                    if ((uVar26 >> 0x1e & 1) == 0) {
                      bVar13 = *(byte *)((longlong)dVar40 + 0xd);
                      plVar41 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar41[1] = (longlong)dVar40;
                      plVar25 = DAT_14ca843c0;
                      plVar24 = DAT_14ca843c8;
                      if ((bVar13 & 2) == 0) {
                        do {
                          *plVar41 = (longlong)plVar25;
                          LOCK();
                          bVar38 = plVar25 != DAT_14ca843c0;
                          plVar24 = plVar41;
                          if (bVar38) {
                            plVar25 = DAT_14ca843c0;
                            plVar24 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar24;
                          UNLOCK();
                        } while (bVar38);
                      }
                      else {
                        do {
                          *plVar41 = (longlong)plVar24;
                          LOCK();
                          bVar38 = plVar24 != DAT_14ca843c8;
                          plVar25 = plVar41;
                          if (bVar38) {
                            plVar24 = DAT_14ca843c8;
                            plVar25 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar25;
                          UNLOCK();
                        } while (bVar38);
                      }
                    }
                  }
                  lVar17 = local_1c0;
                  param_4 = local_1c8;
                  param_1 = local_1d8;
                  pdVar20[1] = (double)local_100;
                  *(undefined4 *)(lVar14 + 0x40 + local_1a8._0_8_ * 4) = local_1b8._0_4_;
                  if (local_100 == (longlong *)0x0) {
LAB_142fde952:
                    dVar40 = local_108;
                    param_2 = local_178;
                    if (local_108 != 0.0) {
                      LOCK();
                      puVar19 = (uint *)((longlong)local_108 + 8);
                      uVar26 = *puVar19;
                      *puVar19 = *puVar19 - 1;
                      UNLOCK();
                      if ((uVar26 & 0x3fffffff) == 1) {
                        puVar19 = (uint *)((longlong)local_108 + 8);
                        LOCK();
                        uVar26 = *puVar19;
                        *puVar19 = *puVar19 | 0x40000000;
                        UNLOCK();
                        if ((uVar26 >> 0x1e & 1) == 0) {
                          bVar13 = *(byte *)((longlong)local_108 + 0xd);
                          plVar41 = (longlong *)FUN_14001cc68(0x10);
                          plVar41[1] = (longlong)dVar40;
                          plVar25 = DAT_14ca843c0;
                          plVar24 = DAT_14ca843c8;
                          param_1 = local_1d8;
                          param_4 = local_1c8;
                          lVar17 = local_1c0;
                          param_2 = local_178;
                          if ((bVar13 & 2) == 0) {
                            do {
                              *plVar41 = (longlong)plVar25;
                              LOCK();
                              bVar38 = plVar25 != DAT_14ca843c0;
                              plVar24 = plVar41;
                              if (bVar38) {
                                plVar25 = DAT_14ca843c0;
                                plVar24 = DAT_14ca843c0;
                              }
                              DAT_14ca843c0 = plVar24;
                              UNLOCK();
                            } while (bVar38);
                          }
                          else {
                            do {
                              *plVar41 = (longlong)plVar24;
                              LOCK();
                              bVar38 = plVar24 != DAT_14ca843c8;
                              plVar25 = plVar41;
                              if (bVar38) {
                                plVar24 = DAT_14ca843c8;
                                plVar25 = DAT_14ca843c8;
                              }
                              DAT_14ca843c8 = plVar25;
                              UNLOCK();
                            } while (bVar38);
                          }
                        }
                      }
                    }
                  }
                  else {
                    param_2 = local_178;
                    if (local_108 != 0.0) {
                      (**(code **)(*local_100 + 0x10))();
                      local_100 = (longlong *)0x0;
                      goto LAB_142fde952;
                    }
                  }
                }
              }
              lVar14 = local_190 + 1;
            } while (lVar14 < *(int *)(param_2 + 0x3720));
          }
        }
        bVar13 = 1;
        if ((*(int *)(lVar1 + 0x136bc) == 0) && (*(int *)(lVar1 + 0x136e4) == 0)) {
          bVar13 = *(byte *)(plVar33 + 0x10);
        }
        bVar34 = bVar34 | bVar13;
        iVar21 = (int)param_4[1];
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar21);
    if ((bVar34 & 1) != 0) goto LAB_142fdee23;
  }
  FUN_1400bc622(param_1);
LAB_142fdee23:
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fdeeb8 FUN_142fdeeb8 body=6395 status=ok
// SIG undefined FUN_142fdeeb8(void)

void FUN_142fdeeb8(ulonglong *param_1,longlong *param_2,int param_3,longlong param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double *pdVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong *plVar30;
  double dVar31;
  longlong *plVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  longlong *plVar35;
  longlong lVar36;
  bool bVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  ulonglong uVar42;
  longlong lVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_378 [32];
  int *local_358;
  int *local_350;
  longlong *local_348;
  longlong local_340;
  longlong local_338;
  int local_32c;
  longlong local_328;
  double local_320;
  undefined8 local_318;
  int local_30c;
  ulonglong *local_308;
  longlong local_300;
  longlong *local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 uStack_264;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined8 local_23c;
  undefined5 uStack_234;
  undefined3 uStack_22f;
  undefined5 uStack_22c;
  undefined8 uStack_227;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  uint local_200;
  undefined8 local_1f8;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  int local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  wchar_t *local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined5 uStack_134;
  undefined3 local_12f;
  undefined5 uStack_12c;
  undefined8 uStack_127;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_278 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_26c = 0;
  uStack_264 = 0;
  local_25c = 0;
  uStack_254 = 0;
  local_24c = 0;
  uStack_244 = 0;
  local_23c = 0;
  uStack_234 = 0;
  uStack_22f = 0;
  uStack_22c = 0;
  uStack_227 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 1;
  local_1f8 = 0;
  local_32c = param_3;
  local_2e8 = param_4;
  FUN_144b0e33a(0,&local_2c8);
  local_270 = 0;
  local_298 = DAT_14ca11210;
  local_288 = DAT_14c9c0d38;
  local_2c8 = DAT_14ca968d8;
  if (0 < (int)param_2[1]) {
    local_2f0 = (ulonglong)(param_5 - 1);
    local_308 = param_1 + 0x31;
    lVar28 = 0;
    local_2f8 = param_2;
    do {
      lVar38 = *(longlong *)(local_2e8 + 0x88);
      if (*(longlong *)(local_2e8 + 0x88) == 0) {
        lVar38 = local_2e8;
      }
      lVar27 = *param_2;
      iVar24 = *(int *)(lVar27 + 0x1de0 + lVar28 * 0x13c10);
      local_30c = *(int *)((longlong)param_1 + 0x17c);
      if (local_30c != iVar24) {
        *(int *)((longlong)param_1 + 0x17c) = iVar24;
        puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar25 + 3;
        if ((undefined8 *)param_1[1] < puVar33) {
          FUN_140023dd8(param_1,0x20);
          puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar25 + 3;
        }
        *param_1 = (ulonglong)puVar33;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar25;
        param_1[6] = (ulonglong)(puVar25 + 1);
        uVar8 = *(undefined4 *)((longlong)param_1 + 0x17c);
        puVar25[1] = 0;
        *puVar25 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar25 + 2) = uVar8;
      }
      local_340 = lVar27 + lVar28 * 0x13c10;
      puVar26 = &DAT_14c9c0d58;
      if (*(char *)(local_340 + 0x2398) != '\0') {
        puVar26 = &DAT_14c9c0de8;
      }
      uStack_290 = *(undefined8 *)(puVar26 + 0x10);
      uVar34 = *(ulonglong *)(local_340 + 0x30f8);
      iVar41 = ((int)((ulonglong)*(undefined8 *)(local_340 + 0x3100) >> 0x20) + (int)local_2f0) /
               param_5;
      iVar24 = ((int)*(undefined8 *)(local_340 + 0x3100) + (int)local_2f0) / param_5;
      if (iVar24 < 2) {
        iVar24 = 1;
      }
      if (iVar41 < 2) {
        iVar41 = 1;
      }
      puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar25 + 5;
      local_328 = lVar28;
      if ((undefined8 *)param_1[1] < puVar33) {
        FUN_140023dd8(param_1,0x30);
        puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar25 + 5;
      }
      *param_1 = (ulonglong)puVar33;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar25;
      param_1[6] = (ulonglong)(puVar25 + 1);
      puVar25[1] = 0;
      *puVar25 = &PTR_LAB_14a1e7fc8;
      *(float *)(puVar25 + 2) =
           (float)(int)((longlong)
                        ((ulonglong)(uint)((int)uVar34 >> 0x1f) << 0x20 | uVar34 & 0xffffffff) /
                       (longlong)param_5);
      *(float *)((longlong)puVar25 + 0x14) =
           (float)(int)((longlong)
                        ((ulonglong)(uint)((longlong)uVar34 >> 0x3f) << 0x20 | uVar34 >> 0x20) /
                       (longlong)param_5);
      *(undefined4 *)(puVar25 + 3) = 0;
      *(float *)((longlong)puVar25 + 0x1c) = (float)iVar24;
      *(float *)(puVar25 + 4) = (float)iVar41;
      *(undefined4 *)((longlong)puVar25 + 0x24) = 0x3f800000;
      uVar9 = *(undefined8 *)(local_340 + 0x13818);
      FUN_1415c53a0();
      FUN_1448e935e(uVar9,&local_1c8,&DAT_14ca459f0,0);
      FUN_1415c53a0();
      lVar28 = local_328;
      local_2d8 = local_1c8;
      local_2d0 = uStack_1c0;
      if (local_1c8 == (longlong *)0x0) {
        lVar27 = 0;
      }
      else {
        lVar27 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)uStack_1c0 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)local_1c8 + 0xd4) * 8);
        if (lVar27 == 0) {
          lVar27 = FUN_1400bafc2(*(longlong *)((longlong)uStack_1c0 + 8),
                                 (longlong)*(int *)((longlong)local_1c8 + 0xd4),1);
        }
      }
      uStack_2c0 = lVar27;
      lVar27 = FUN_140028f18(param_1,&local_2c8);
      if ((lVar27 != 0) && ((local_200 & 0x10000000) == 0)) {
        *(undefined4 *)(local_308 + 4) = (undefined4)local_2a8;
        *(undefined4 *)((longlong)local_308 + 0x24) = local_2a8._4_4_;
        *(undefined4 *)(local_308 + 5) = (undefined4)uStack_2a0;
        *(undefined4 *)((longlong)local_308 + 0x2c) = uStack_2a0._4_4_;
        *(undefined4 *)(local_308 + 2) = (undefined4)local_2b8;
        *(undefined4 *)((longlong)local_308 + 0x14) = local_2b8._4_4_;
        *(undefined4 *)(local_308 + 3) = (undefined4)uStack_2b0;
        *(undefined4 *)((longlong)local_308 + 0x1c) = uStack_2b0._4_4_;
        *(undefined4 *)local_308 = (undefined4)local_2c8;
        *(undefined4 *)((longlong)local_308 + 4) = local_2c8._4_4_;
        *(undefined4 *)(local_308 + 1) = (undefined4)uStack_2c0;
        *(undefined4 *)((longlong)local_308 + 0xc) = uStack_2c0._4_4_;
        puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar25 + 4;
        if ((undefined8 *)param_1[1] < puVar33) {
          FUN_140023dd8(param_1,0x28);
          puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar25 + 4;
        }
        *param_1 = (ulonglong)puVar33;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar25;
        param_1[6] = (ulonglong)(puVar25 + 1);
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_14a37d348;
        puVar25[2] = lVar27;
        *(undefined4 *)(puVar25 + 3) = 0;
        *(undefined1 *)((longlong)puVar25 + 0x1c) = 1;
      }
      plVar35 = (longlong *)(lVar38 + lVar28 * 0x88);
      if ((1 < local_32c) && (0 < (int)plVar35[9])) {
        lVar38 = 0;
        do {
          uVar9 = *(undefined8 *)(plVar35[8] + lVar38 * 8);
          plVar32 = *(longlong **)
                     (*(longlong *)(*(longlong *)(*plVar35 + lVar38 * 8) + 0xb60) + 0x28);
          (**(code **)(*plVar32 + 0x10))(plVar32,&local_1c8);
          (**(code **)(*DAT_14ca83900 + 0x2a8))(DAT_14ca83900,param_1,uVar9);
          if (local_2d8 == (longlong *)0x0) {
            lVar27 = 0;
          }
          else {
            lVar27 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_2d0 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)local_2d8 + 0xd4) * 8);
            if (lVar27 == 0) {
              lVar27 = FUN_1400bafc2(*(longlong *)((longlong)local_2d0 + 8),
                                     (longlong)*(int *)((longlong)local_2d8 + 0xd4),1);
            }
          }
          local_358 = (int *)&local_1c8;
          FUN_1472dcb08(param_1,&local_2d8,lVar27,local_340);
          FUN_1471d295a(param_1);
          (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_1,uVar9);
          lVar38 = lVar38 + 1;
        } while (lVar38 < (int)plVar35[9]);
      }
      iVar24 = ((int)plVar35[0xf] + (int)plVar35[0xd]) * 8 + (int)plVar35[0xb] * 6;
      if (iVar24 != 0) {
        local_1c8 = (longlong *)0x0;
        uStack_1c0 = 0.0;
        local_1b8 = 1;
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        uStack_1a8 = 0;
        uStack_1a4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        uStack_1a0 = (uStack_1a0 >> 8 & 0xffffff) << 8;
        local_198 = L"ViewOcclusionTests";
        uStack_190 = 0;
        uStack_188 = 0;
        iVar24 = iVar24 * 0xc;
        uStack_1e4 = 0;
        uStack_1e0 = 0x4004;
        local_1e8 = iVar24;
        if (iVar24 == 0) {
          FUN_14570b4be(param_1,&local_1c8,0x4004,0);
        }
        local_348 = plVar35;
        if (*(char *)((longlong)param_1 + 0x69) == '\0') {
          FUN_14002049c(param_1,1);
          local_358 = (int *)CONCAT44(local_358._4_4_,8);
          local_350 = (int *)&local_1c8;
          (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_2e0,param_1,&local_1e8);
          *(undefined4 *)(local_2e0 + 0x18) = 8;
          FUN_14002049c(param_1,0);
        }
        else {
          local_358 = (int *)CONCAT44(local_358._4_4_,8);
          local_350 = (int *)&local_1c8;
          (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_2e0,param_1,&local_1e8);
          *(undefined4 *)(local_2e0 + 0x18) = 8;
        }
        lVar28 = local_2e0;
        cVar23 = *(char *)((longlong)param_1 + 0x69);
        if (cVar23 == '\0') {
          FUN_14002049c(param_1,1);
        }
        local_358 = (int *)CONCAT44(local_358._4_4_,iVar24);
        local_350 = (int *)CONCAT44(local_350._4_4_,1);
        lVar28 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar28,0);
        if (cVar23 == '\0') {
          FUN_14002049c(param_1,0);
        }
        lVar38 = local_348[3];
        if ((longlong)(int)lVar38 == 0) {
          uVar34 = 0;
        }
        else {
          lVar27 = local_348[2];
          lVar39 = 0;
          uVar34 = 0;
          do {
            dVar3 = *(double *)(local_340 + 0x1680);
            dVar31 = *(double *)(local_340 + 0x1660);
            dVar4 = *(double *)(local_340 + 0x1640);
            fVar46 = *(float *)(*(longlong *)(lVar27 + lVar39) + 0x6e0);
            dVar5 = *(double *)(local_340 + 0x14b0);
            dVar6 = *(double *)(local_340 + 0x14d8);
            fVar45 = 0.7853982;
            if (*(double *)(local_340 + 0x1528) <= 1.0 && *(double *)(local_340 + 0x1528) != 1.0) {
              dVar12 = atan(1.0 / dVar5);
              fVar45 = (float)dVar12;
            }
            fVar45 = tanf(fVar45);
            fVar45 = fVar45 * fVar46;
            dVar12 = (double)fVar45;
            local_320 = *(double *)(local_340 + 0x1670) * dVar12;
            dVar15 = *(double *)(local_340 + 0x1650) * dVar12;
            dVar12 = dVar12 * *(double *)(local_340 + 0x1630);
            dVar6 = (double)(fVar45 / (float)(dVar6 / dVar5));
            dVar14 = *(double *)(local_340 + 0x1678) * dVar6;
            dVar13 = *(double *)(local_340 + 0x1658) * dVar6;
            dVar6 = dVar6 * *(double *)(local_340 + 0x1638);
            dVar5 = (double)fVar46;
            dVar3 = dVar3 * dVar5;
            dVar31 = dVar31 * dVar5;
            dVar4 = dVar4 * dVar5;
            dVar5 = dVar3 + local_320;
            dVar49 = dVar31 + dVar15;
            dVar16 = dVar4 + dVar12;
            fVar47 = (float)(dVar5 + dVar14);
            local_318 = CONCAT44(local_318._4_4_,fVar47);
            fVar50 = (float)(dVar49 + dVar13);
            fVar48 = (float)(dVar16 + dVar6);
            fVar46 = (float)(dVar5 - dVar14);
            local_338 = CONCAT44(local_338._4_4_,fVar46);
            dVar3 = dVar3 - local_320;
            dVar31 = dVar31 - dVar15;
            dVar4 = dVar4 - dVar12;
            fVar45 = (float)(dVar3 - dVar14);
            fVar51 = (float)(dVar31 - dVar13);
            fVar53 = (float)(dVar4 - dVar6);
            iVar24 = (int)uVar34;
            *(float *)(lVar28 + uVar34 * 0xc) = fVar48;
            *(float *)(lVar28 + 4 + uVar34 * 0xc) = fVar50;
            *(float *)(lVar28 + 8 + uVar34 * 0xc) = fVar47;
            uVar34 = (ulonglong)(iVar24 + 1);
            *(float *)(lVar28 + uVar34 * 0xc) = (float)(dVar4 + dVar6);
            *(float *)(lVar28 + 4 + uVar34 * 0xc) = (float)(dVar31 + dVar13);
            *(float *)(lVar28 + 8 + uVar34 * 0xc) = (float)(dVar3 + dVar14);
            uVar34 = (ulonglong)(iVar24 + 2);
            *(float *)(lVar28 + uVar34 * 0xc) = fVar53;
            *(float *)(lVar28 + 4 + uVar34 * 0xc) = fVar51;
            *(float *)(lVar28 + 8 + uVar34 * 0xc) = fVar45;
            uVar34 = (ulonglong)(iVar24 + 3);
            *(float *)(lVar28 + uVar34 * 0xc) = fVar48;
            *(float *)(lVar28 + 4 + uVar34 * 0xc) = fVar50;
            *(float *)(lVar28 + 8 + uVar34 * 0xc) = fVar47;
            uVar34 = (ulonglong)(iVar24 + 4);
            *(float *)(lVar28 + uVar34 * 0xc) = fVar53;
            *(float *)(lVar28 + 4 + uVar34 * 0xc) = fVar51;
            *(float *)(lVar28 + 8 + uVar34 * 0xc) = fVar45;
            uVar34 = (ulonglong)(iVar24 + 5);
            *(float *)(lVar28 + uVar34 * 0xc) = (float)(dVar16 - dVar6);
            *(float *)(lVar28 + 4 + uVar34 * 0xc) = (float)(dVar49 - dVar13);
            *(float *)(lVar28 + 8 + uVar34 * 0xc) = fVar46;
            uVar34 = (ulonglong)(iVar24 + 6);
            lVar39 = lVar39 + 8;
          } while ((longlong)(int)lVar38 * 8 != lVar39);
        }
        lVar27 = local_2e0;
        lVar38 = local_340;
        plVar35 = local_348;
        if ((longlong)(int)local_348[5] != 0) {
          plVar29 = (longlong *)local_348[4];
          plVar32 = plVar29 + (int)local_348[5];
          do {
            lVar39 = *plVar29;
            dVar3 = *(double *)(local_340 + 0x1040);
            dVar31 = *(double *)(lVar39 + 0x58);
            dVar4 = *(double *)(local_340 + 0x1030);
            dVar5 = *(double *)(local_340 + 0x1038);
            dVar6 = *(double *)(lVar39 + 0x50);
            dVar12 = *(double *)(lVar39 + 0x48);
            lVar43 = 0;
            bVar44 = true;
            do {
              bVar22 = bVar44;
              fVar46 = 1.0;
              if (!bVar22) {
                fVar46 = 0.0;
              }
              lVar40 = 0;
              bVar44 = true;
              do {
                bVar21 = bVar44;
                fVar45 = 1.0;
                if (!bVar21) {
                  fVar45 = -1.0;
                }
                lVar40 = lVar40 + uVar34 * 0xc + lVar28 + lVar43 * 0xc;
                lVar36 = 0;
                bVar44 = true;
                do {
                  bVar37 = bVar44;
                  fVar47 = 1.0;
                  if (!bVar37) {
                    fVar47 = -1.0;
                  }
                  fVar48 = *(float *)(lVar39 + 0x264);
                  fVar50 = *(float *)(lVar39 + 0x268);
                  fVar51 = *(float *)(lVar39 + 0x274);
                  fVar53 = *(float *)(lVar39 + 0x278);
                  fVar17 = *(float *)(lVar39 + 0x284);
                  fVar18 = *(float *)(lVar39 + 0x288);
                  fVar19 = *(float *)(lVar39 + 0x294);
                  fVar20 = *(float *)(lVar39 + 0x298);
                  fVar52 = 1.0 / (*(float *)(lVar39 + 0x28c) * fVar46 +
                                  *(float *)(lVar39 + 0x27c) * fVar45 +
                                  fVar47 * *(float *)(lVar39 + 0x26c) + *(float *)(lVar39 + 0x29c));
                  *(float *)(lVar40 + lVar36) =
                       fVar52 * (*(float *)(lVar39 + 0x280) * fVar46 +
                                 *(float *)(lVar39 + 0x270) * fVar45 +
                                 fVar47 * *(float *)(lVar39 + 0x260) + *(float *)(lVar39 + 0x290)) +
                       (float)(dVar4 - dVar12);
                  *(float *)(lVar40 + 4 + lVar36) =
                       (fVar17 * fVar46 + fVar51 * fVar45 + fVar47 * fVar48 + fVar19) * fVar52 +
                       (float)(dVar5 - dVar6);
                  *(float *)(lVar40 + 8 + lVar36) =
                       (fVar18 * fVar46 + fVar53 * fVar45 + fVar47 * fVar50 + fVar20) * fVar52 +
                       (float)(dVar3 - dVar31);
                  lVar36 = 0x30;
                  bVar44 = false;
                } while (bVar37);
                lVar40 = 0x18;
                bVar44 = false;
              } while (bVar21);
              lVar43 = 1;
              bVar44 = false;
            } while (bVar22);
            uVar34 = (ulonglong)((int)uVar34 + 8);
            plVar29 = plVar29 + 1;
          } while (plVar29 != plVar32);
        }
        lVar39 = local_348[7];
        if ((longlong)(int)lVar39 != 0) {
          lVar43 = local_348[6];
          lVar40 = 0;
          do {
            uVar42 = (ulonglong)(uint)((int)uVar34 + (int)lVar40);
            pdVar10 = *(double **)(lVar43 + lVar40);
            fVar45 = (float)(pdVar10[2] + *(double *)(local_340 + 0x1040));
            fVar50 = (float)(pdVar10[1] + *(double *)(local_340 + 0x1038));
            fVar51 = (float)(*pdVar10 + *(double *)(local_340 + 0x1030));
            fVar46 = (float)(*(double *)(local_340 + 0x1040) + pdVar10[5]);
            fVar48 = (float)(*(double *)(local_340 + 0x1038) + pdVar10[4]);
            fVar47 = (float)(*(double *)(local_340 + 0x1030) + pdVar10[3]);
            *(float *)(lVar28 + uVar42 * 0xc) = fVar51;
            *(float *)(lVar28 + 4 + uVar42 * 0xc) = fVar50;
            *(float *)(lVar28 + 8 + uVar42 * 0xc) = fVar45;
            *(float *)(lVar28 + 0xc + uVar42 * 0xc) = fVar51;
            *(float *)(lVar28 + 0x10 + uVar42 * 0xc) = fVar50;
            *(float *)(lVar28 + 0x14 + uVar42 * 0xc) = fVar46;
            *(float *)(lVar28 + 0x18 + uVar42 * 0xc) = fVar51;
            *(float *)(lVar28 + 0x1c + uVar42 * 0xc) = fVar48;
            *(float *)(lVar28 + 0x20 + uVar42 * 0xc) = fVar45;
            *(float *)(lVar28 + 0x24 + uVar42 * 0xc) = fVar51;
            *(float *)(lVar28 + 0x28 + uVar42 * 0xc) = fVar48;
            *(float *)(lVar28 + 0x2c + uVar42 * 0xc) = fVar46;
            *(float *)(lVar28 + 0x30 + uVar42 * 0xc) = fVar47;
            *(float *)(lVar28 + 0x34 + uVar42 * 0xc) = fVar50;
            *(float *)(lVar28 + 0x38 + uVar42 * 0xc) = fVar45;
            *(float *)(lVar28 + 0x3c + uVar42 * 0xc) = fVar47;
            *(float *)(lVar28 + 0x40 + uVar42 * 0xc) = fVar50;
            *(float *)(lVar28 + 0x44 + uVar42 * 0xc) = fVar46;
            *(float *)(lVar28 + 0x48 + uVar42 * 0xc) = fVar47;
            *(float *)(lVar28 + 0x4c + uVar42 * 0xc) = fVar48;
            *(float *)(lVar28 + 0x50 + uVar42 * 0xc) = fVar45;
            *(float *)(lVar28 + 0x54 + uVar42 * 0xc) = fVar47;
            *(float *)(lVar28 + 0x58 + uVar42 * 0xc) = fVar48;
            *(float *)(lVar28 + 0x5c + uVar42 * 0xc) = fVar46;
            lVar40 = lVar40 + 8;
          } while ((longlong)(int)lVar39 * 8 != lVar40);
        }
        if (*(char *)((longlong)param_1 + 0x69) == '\0') {
          FUN_14002049c(param_1,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar27);
          FUN_14002049c(param_1,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,local_2e0);
        }
        if (local_2d8 == (longlong *)0x0) {
          lVar28 = 0;
        }
        else {
          lVar28 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)local_2d0 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_2d8 + 0xd4) * 8);
          if (lVar28 == 0) {
            lVar28 = FUN_1400bafc2(*(longlong *)((longlong)local_2d0 + 8),
                                   (longlong)*(int *)((longlong)local_2d8 + 0xd4),1);
          }
        }
        FUN_14021ce91(param_1,&local_2d8,lVar28,lVar38);
        lVar28 = local_2e0;
        puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar25 + 5;
        if ((undefined8 *)param_1[1] < puVar33) {
          FUN_140023dd8(param_1,0x30);
          puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar25 + 5;
        }
        *param_1 = (ulonglong)puVar33;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar25;
        param_1[6] = (ulonglong)(puVar25 + 1);
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_14a1fb5a8;
        iVar24 = 0;
        *(undefined4 *)(puVar25 + 2) = 0;
        puVar25[3] = lVar28;
        *(undefined4 *)(puVar25 + 4) = 0;
        lVar28 = plVar35[0xb];
        if ((longlong)(int)lVar28 != 0) {
          lVar38 = local_348[10];
          lVar27 = 0;
          iVar24 = 0;
          do {
            uVar9 = *(undefined8 *)(lVar38 + lVar27);
            (**(code **)(*DAT_14ca83900 + 0x2a8))(DAT_14ca83900,param_1,uVar9);
            puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar25 + 4;
            if ((undefined8 *)param_1[1] < puVar33) {
              FUN_140023dd8(param_1,0x28);
              puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar33 = puVar25 + 4;
            }
            *param_1 = (ulonglong)puVar33;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar25;
            param_1[6] = (ulonglong)(puVar25 + 1);
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_14a1fc200;
            *(int *)(puVar25 + 2) = iVar24;
            *(undefined1 **)((longlong)puVar25 + 0x14) = &DAT_100000002;
            iVar24 = iVar24 + 6;
            (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_1,uVar9);
            lVar27 = lVar27 + 8;
          } while ((longlong)(int)lVar28 * 8 != lVar27);
        }
        lVar28 = local_348[0xd];
        if ((longlong)(int)lVar28 != 0) {
          lVar38 = local_348[0xc];
          lVar27 = 0;
          do {
            uVar9 = *(undefined8 *)(lVar38 + lVar27);
            (**(code **)(*DAT_14ca83900 + 0x2a8))(DAT_14ca83900,param_1,uVar9);
            uVar11 = DAT_14ca8c110;
            puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar25 + 6;
            if ((undefined8 *)param_1[1] < puVar33) {
              FUN_140023dd8(param_1,0x38);
              puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar33 = puVar25 + 6;
            }
            *param_1 = (ulonglong)puVar33;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar25;
            param_1[6] = (ulonglong)(puVar25 + 1);
            puVar25[1] = 0;
            *puVar25 = &PTR_FUN_14a1fb5b0;
            puVar25[2] = uVar11;
            *(int *)(puVar25 + 3) = iVar24 + (int)lVar27;
            *(undefined8 *)((longlong)puVar25 + 0x1c) = 0x800000000;
            *(undefined8 *)((longlong)puVar25 + 0x24) = 0xc00000000;
            *(undefined4 *)((longlong)puVar25 + 0x2c) = 1;
            (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_1,uVar9);
            lVar27 = lVar27 + 8;
          } while ((longlong)(int)lVar28 * 8 != lVar27);
          iVar24 = iVar24 + (int)lVar27;
        }
        lVar28 = local_328;
        if ((1 < local_32c) && (lVar38 = local_348[0xf], (longlong)(int)lVar38 != 0)) {
          lVar27 = local_348[0xe];
          lVar39 = 0;
          do {
            uVar9 = *(undefined8 *)(lVar27 + lVar39);
            (**(code **)(*DAT_14ca83900 + 0x2a8))(DAT_14ca83900,param_1,uVar9);
            uVar11 = DAT_14ca8c110;
            puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar25 + 6;
            if ((undefined8 *)param_1[1] < puVar33) {
              FUN_140023dd8(param_1,0x38);
              puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar33 = puVar25 + 6;
            }
            *param_1 = (ulonglong)puVar33;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar25;
            param_1[6] = (ulonglong)(puVar25 + 1);
            puVar25[1] = 0;
            *puVar25 = &PTR_FUN_14a1fb5b0;
            puVar25[2] = uVar11;
            *(int *)(puVar25 + 3) = iVar24 + (int)lVar39;
            *(undefined8 *)((longlong)puVar25 + 0x1c) = 0x800000000;
            *(undefined8 *)((longlong)puVar25 + 0x24) = 0xc00000000;
            *(undefined4 *)((longlong)puVar25 + 0x2c) = 1;
            (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_1,uVar9);
            lVar39 = lVar39 + 8;
          } while ((longlong)(int)lVar38 * 8 != lVar39);
        }
        lVar38 = local_2e0;
        param_2 = local_2f8;
        plVar35 = local_348;
        if (local_2e0 != 0) {
          local_2e0 = 0;
          LOCK();
          puVar1 = (uint *)(lVar38 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar38 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(lVar38 + 0xd);
              plVar29 = (longlong *)FUN_14001cc68(0x10,8);
              plVar29[1] = lVar38;
              plVar35 = DAT_14ca843c0;
              plVar32 = DAT_14ca843c8;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar29 = (longlong)plVar35;
                  LOCK();
                  bVar44 = plVar35 != DAT_14ca843c0;
                  plVar32 = plVar29;
                  if (bVar44) {
                    plVar35 = DAT_14ca843c0;
                    plVar32 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar32;
                  UNLOCK();
                } while (bVar44);
              }
              else {
                do {
                  *plVar29 = (longlong)plVar32;
                  LOCK();
                  bVar44 = plVar32 != DAT_14ca843c8;
                  plVar35 = plVar29;
                  if (bVar44) {
                    plVar32 = DAT_14ca843c8;
                    plVar35 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar35;
                  UNLOCK();
                } while (bVar44);
              }
            }
          }
          lVar38 = local_2e0;
          plVar35 = local_348;
          if (local_2e0 != 0) {
            LOCK();
            puVar1 = (uint *)(local_2e0 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_2e0 + 8);
              LOCK();
              uVar2 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar2 >> 0x1e & 1) == 0) {
                bVar7 = *(byte *)(local_2e0 + 0xd);
                plVar30 = (longlong *)FUN_14001cc68(0x10,8);
                plVar30[1] = lVar38;
                plVar32 = DAT_14ca843c0;
                plVar29 = DAT_14ca843c8;
                plVar35 = local_348;
                if ((bVar7 & 2) == 0) {
                  do {
                    *plVar30 = (longlong)plVar32;
                    LOCK();
                    bVar44 = plVar32 != DAT_14ca843c0;
                    plVar29 = plVar30;
                    if (bVar44) {
                      plVar32 = DAT_14ca843c0;
                      plVar29 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar29;
                    UNLOCK();
                  } while (bVar44);
                }
                else {
                  do {
                    *plVar30 = (longlong)plVar29;
                    LOCK();
                    bVar44 = plVar29 != DAT_14ca843c8;
                    plVar32 = plVar30;
                    if (bVar44) {
                      plVar29 = DAT_14ca843c8;
                      plVar32 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar32;
                    UNLOCK();
                  } while (bVar44);
                }
              }
            }
          }
        }
      }
      if ((char)plVar35[0x10] == '\x01') {
        if (local_2d8 == (longlong *)0x0) {
          lVar38 = 0;
        }
        else {
          lVar38 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)local_2d0 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)local_2d8 + 0xd4) * 8);
          if (lVar38 == 0) {
            lVar38 = FUN_1400bafc2(*(longlong *)((longlong)local_2d0 + 8),
                                   (longlong)*(int *)((longlong)local_2d8 + 0xd4),1);
          }
        }
        lVar27 = local_340;
        FUN_14021ce91(param_1,&local_2d8,lVar38,local_340);
        lVar39 = lVar27 + 0x136c8;
        lVar38 = lVar27 + 0x136a0;
        if (DAT_14ca45970 == 0) {
          lVar39 = lVar27 + 0x136a0;
          lVar38 = lVar27 + 0x136c8;
        }
        FUN_142fdbc40(lVar38,param_1);
        FUN_142fdbc40(lVar39,param_1);
        lVar38 = *(longlong *)(lVar27 + 0x3108);
        if (((lVar38 != 0) && (*(int *)(lVar38 + 0x2a0) != -1)) && (*(int *)(lVar38 + 0x310) != 0))
        {
          local_318 = DAT_14ca96e48;
          local_338 = DAT_14ca96e30;
          uVar9 = *(undefined8 *)(local_340 + 0x30f8);
          uVar11 = *(undefined8 *)(local_340 + 0x3100);
          puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar25 + 5;
          if ((undefined8 *)param_1[1] < puVar33) {
            FUN_140023dd8(param_1,0x30);
            puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar25 + 5;
          }
          lVar28 = local_340;
          *param_1 = (ulonglong)puVar33;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar25;
          param_1[6] = (ulonglong)(puVar25 + 1);
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_14a1e7fc8;
          *(float *)(puVar25 + 2) = (float)(int)uVar9;
          *(float *)((longlong)puVar25 + 0x14) = (float)(int)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar25 + 3) = 0;
          *(float *)((longlong)puVar25 + 0x1c) = (float)(int)uVar11;
          *(float *)(puVar25 + 4) = (float)(int)((ulonglong)uVar11 >> 0x20);
          *(undefined4 *)((longlong)puVar25 + 0x24) = 0x3f800000;
          uVar9 = *(undefined8 *)(local_340 + 0x13818);
          FUN_145edeb06();
          FUN_1448e935e(uVar9,&local_1c8,&DAT_14ca45dc8,0);
          FUN_145edeb06();
          plVar35 = local_1c8;
          local_320 = uStack_1c0;
          bVar44 = DAT_14c7609b4 == 2;
          uVar9 = *(undefined8 *)(lVar28 + 0x13818);
          FUN_145f926bc();
          FUN_1448e935e(uVar9,&local_1c8,&DAT_14ca45ef0,bVar44);
          FUN_145f926bc();
          dVar3 = uStack_1c0;
          plVar32 = local_1c8;
          local_178 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          local_198 = (wchar_t *)0x0;
          uStack_190 = 0;
          uStack_1a8 = 0;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          local_1b8 = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          local_1c8 = (longlong *)0x0;
          uStack_1c0 = 0.0;
          uStack_12c = 0;
          uStack_127 = 0;
          uStack_13c = 0;
          uStack_134 = 0;
          local_12f = 0;
          local_14c = 0;
          uStack_144 = 0;
          local_15c = 0;
          uStack_154 = 0;
          local_16c = 0;
          uStack_164 = 0;
          local_108 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_100 = 1;
          local_f8 = 0;
          FUN_144b0e33a(param_1,&local_1c8);
          local_170 = 0;
          puVar26 = &DAT_14ca11200;
          if (DAT_14c7609b4 == 1) {
            puVar26 = &DAT_14ca46a80;
          }
          local_198 = *(wchar_t **)(puVar26 + 0x10);
          uStack_188 = DAT_14c9c0d38;
          local_1c8 = *(longlong **)(lVar38 + 0x3e0);
          dVar31 = 0.0;
          if (plVar35 != (longlong *)0x0) {
            dVar31 = *(double *)
                      (*(longlong *)(*(longlong *)((longlong)local_320 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)plVar35 + 0xd4) * 8);
            if (dVar31 == 0.0) {
              dVar31 = (double)FUN_1400bafc2(*(longlong *)((longlong)local_320 + 8),
                                             (longlong)*(int *)((longlong)plVar35 + 0xd4),1);
            }
          }
          lVar28 = local_338;
          uStack_1c0 = dVar31;
          if (plVar32 == (longlong *)0x0) {
            lVar27 = 0;
          }
          else {
            lVar39 = (longlong)*(int *)((longlong)plVar32 + 0xd4);
            lVar27 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)dVar3 + 8) + 0x50) + lVar39 * 8);
            if (lVar27 == 0) {
              lVar27 = FUN_1400bafc2(*(longlong *)((longlong)dVar3 + 8),lVar39,1);
            }
          }
          local_1b8 = (undefined4)lVar27;
          uStack_1b4 = (undefined4)((ulonglong)lVar27 >> 0x20);
          puVar26 = &DAT_14c9c0de8;
          if (*(char *)(local_340 + 0x2398) != '\0') {
            puVar26 = &DAT_14c9c0d58;
          }
          uStack_190 = *(undefined8 *)(puVar26 + 0x10);
          lVar27 = FUN_140028f18(param_1,&local_1c8);
          if ((lVar27 != 0) && ((local_100 & 0x10000000) == 0)) {
            *(undefined4 *)(local_308 + 4) = uStack_1a8;
            *(uint *)((longlong)local_308 + 0x24) = uStack_1a4;
            *(undefined4 *)(local_308 + 5) = (undefined4)uStack_1a0;
            *(undefined4 *)((longlong)local_308 + 0x2c) = uStack_1a0._4_4_;
            *(undefined4 *)(local_308 + 2) = local_1b8;
            *(undefined4 *)((longlong)local_308 + 0x14) = uStack_1b4;
            *(undefined4 *)(local_308 + 3) = uStack_1b0;
            *(undefined4 *)((longlong)local_308 + 0x1c) = uStack_1ac;
            *(int *)local_308 = (int)local_1c8;
            *(undefined4 *)((longlong)local_308 + 4) = local_1c8._4_4_;
            *(undefined4 *)(local_308 + 1) = (undefined4)uStack_1c0;
            *(undefined4 *)((longlong)local_308 + 0xc) = uStack_1c0._4_4_;
            puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar25 + 4;
            if ((undefined8 *)param_1[1] < puVar33) {
              FUN_140023dd8(param_1,0x28);
              puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar33 = puVar25 + 4;
            }
            *param_1 = (ulonglong)puVar33;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar25;
            param_1[6] = (ulonglong)(puVar25 + 1);
            puVar25[1] = 0;
            *puVar25 = &PTR_LAB_14a37d348;
            puVar25[2] = lVar27;
            *(undefined4 *)(puVar25 + 3) = 0;
            *(undefined1 *)((longlong)puVar25 + 0x1c) = 1;
          }
          puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar25 + 5;
          if ((undefined8 *)param_1[1] < puVar33) {
            FUN_140023dd8(param_1,0x30);
            puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar25 + 5;
          }
          *param_1 = (ulonglong)puVar33;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          local_338 = lVar38 + 0x2a8;
          *(undefined8 **)param_1[6] = puVar25;
          param_1[6] = (ulonglong)(puVar25 + 1);
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_14a1fb5a8;
          *(undefined4 *)(puVar25 + 2) = 0;
          puVar25[3] = lVar28;
          *(undefined4 *)(puVar25 + 4) = 0;
          uVar34 = (ulonglong)*(int *)(lVar38 + 0x310);
          if (0 < (longlong)uVar34) {
            local_300 = uVar34 << 5;
            lVar28 = 0;
            iVar24 = 0;
            local_348 = plVar35;
            do {
              plVar35 = local_348;
              lVar27 = *(longlong *)(lVar38 + 0x308);
              if (*(longlong *)(lVar38 + 0x308) == 0) {
                lVar27 = local_338;
              }
              local_1e8 = 0;
              uStack_1e4 = 0;
              uStack_1e0._0_1_ = 1;
              lVar39 = FUN_1447e4f80();
              cVar23 = *(char *)(lVar39 + 0x41);
              if (*(char *)(lVar39 + 0x41) == '\x03') {
                cVar23 = '\x02';
              }
              local_1e8 = (int)*(undefined8 *)(local_340 + 0x18);
              uStack_1e4 = (undefined4)((ulonglong)*(undefined8 *)(local_340 + 0x18) >> 0x20);
              uStack_1e0 = CONCAT31(uStack_1e0._1_3_,cVar23);
              local_1d8 = iVar24;
              if (plVar35 == (longlong *)0x0) {
                lVar39 = 0;
              }
              else {
                lVar39 = *(longlong *)
                          (*(longlong *)(*(longlong *)((longlong)local_320 + 8) + 0x50) +
                          (longlong)*(int *)((longlong)plVar35 + 0xd4) * 8);
                if (lVar39 == 0) {
                  lVar39 = FUN_1400bafc2(*(longlong *)((longlong)local_320 + 8),
                                         (longlong)*(int *)((longlong)plVar35 + 0xd4),1);
                }
              }
              FUN_145eded74();
              local_358 = &local_1e8;
              FUN_1449cc26b(param_1,lVar39,plVar35,&DAT_14ca46f60);
              uVar9 = *(undefined8 *)(*(longlong *)(lVar27 + 8 + lVar28) + 0x10);
              uVar8 = *(undefined4 *)(lVar27 + 0x10 + lVar28);
              puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar33 = puVar25 + 5;
              if ((undefined8 *)param_1[1] < puVar33) {
                FUN_140023dd8(param_1,0x30);
                puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
                puVar33 = puVar25 + 5;
              }
              *param_1 = (ulonglong)puVar33;
              *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
              *(undefined8 **)param_1[6] = puVar25;
              param_1[6] = (ulonglong)(puVar25 + 1);
              puVar25[1] = 0;
              *puVar25 = &PTR_LAB_14a1fb5a8;
              *(undefined4 *)(puVar25 + 2) = 1;
              puVar25[3] = uVar9;
              *(undefined4 *)(puVar25 + 4) = uVar8;
              uVar8 = *(undefined4 *)(lVar27 + 0x18 + lVar28);
              puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar33 = puVar25 + 6;
              if ((undefined8 *)param_1[1] < puVar33) {
                FUN_140023dd8(param_1,0x38);
                puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
                puVar33 = puVar25 + 6;
              }
              *param_1 = (ulonglong)puVar33;
              *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
              *(undefined8 **)param_1[6] = puVar25;
              param_1[6] = (ulonglong)(puVar25 + 1);
              puVar25[1] = 0;
              *puVar25 = &PTR_FUN_14a1fb5b0;
              puVar25[2] = local_318;
              *(undefined4 *)(puVar25 + 3) = 0;
              *(undefined4 *)((longlong)puVar25 + 0x1c) = 0;
              *(undefined4 *)(puVar25 + 4) = 8;
              *(undefined4 *)((longlong)puVar25 + 0x24) = 0;
              *(undefined4 *)(puVar25 + 5) = 0xc;
              *(undefined4 *)((longlong)puVar25 + 0x2c) = uVar8;
              iVar24 = iVar24 + *(int *)(lVar27 + 0x18 + lVar28);
              lVar28 = lVar28 + 0x20;
            } while (local_300 != lVar28);
            uVar34 = (ulonglong)*(uint *)(lVar38 + 0x310);
          }
          lVar28 = local_328;
          if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar34 & 0xffffffff);
          }
          *(undefined4 *)(lVar38 + 0x310) = 0;
          if (*(int *)(lVar38 + 0x314) != (int)uVar34) {
            FUN_1472de5ba(local_338);
          }
        }
      }
      if (*(int *)((longlong)param_1 + 0x17c) != local_30c) {
        *(int *)((longlong)param_1 + 0x17c) = local_30c;
        puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar25 + 3;
        if ((undefined8 *)param_1[1] < puVar33) {
          FUN_140023dd8(param_1,0x20);
          puVar25 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar25 + 3;
        }
        *param_1 = (ulonglong)puVar33;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar25;
        param_1[6] = (ulonglong)(puVar25 + 1);
        uVar8 = *(undefined4 *)((longlong)param_1 + 0x17c);
        puVar25[1] = 0;
        *puVar25 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar25 + 2) = uVar8;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < (int)param_2[1]);
  }
  if ((local_f0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142fe07b6 FUN_142fe07b6 body=304 status=ok
// SIG undefined FUN_142fe07b6(void)

void FUN_142fe07b6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (DAT_14c842750 == '\x01') {
    if (*(char *)(param_1 + 0x166) == '\x01') {
      iVar6 = 0;
      iVar4 = 0;
      if ((*(int *)(param_1 + 0x3f0) != 0) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 1000) + 0x3108), lVar5 != 0)) {
        iVar4 = *(int *)(lVar5 + 0x20);
      }
      lVar5 = 0;
      do {
        if (*(longlong *)((longlong)&DAT_14ca45d20 + lVar5) == 0) break;
        iVar6 = iVar6 + (uint)(*(int *)((longlong)&DAT_14ca45d28 + lVar5) == iVar4);
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != 0x40);
      iVar3 = FUN_1403fb1aa(*(undefined4 *)(param_1 + 0x8a4));
      plVar7 = &DAT_14ca45d50;
      do {
        if (*plVar7 != 0) {
          lVar5 = plVar7[1];
          FUN_1431eb6a8(plVar7);
          puVar2 = (undefined8 *)*plVar7;
          if (puVar2 != (undefined8 *)0x0) {
            *plVar7 = 0;
            LOCK();
            piVar1 = (int *)(puVar2 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
          iVar6 = iVar6 - (uint)((int)lVar5 == iVar4);
          *(undefined4 *)(plVar7 + 1) = 0;
        }
        plVar7 = plVar7 + -2;
      } while (iVar3 <= iVar6);
    }
    else {
      iVar4 = FUN_1403fb1aa(*(undefined4 *)(param_1 + 0x8a4));
      uVar8 = (ulonglong)(iVar4 - 1);
      FUN_1431eb6a8(&DAT_14ca45d20 + uVar8 * 2);
      puVar2 = (undefined8 *)(&DAT_14ca45d20)[uVar8 * 2];
      if (puVar2 != (undefined8 *)0x0) {
        (&DAT_14ca45d20)[uVar8 * 2] = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      (&DAT_14ca45d28)[uVar8 * 4] = 0;
    }
  }
  return;
}



// FUNCTION 142fe08fe FUN_142fe08fe body=69 status=ok
// SIG undefined FUN_142fe08fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe08fe(void)

{
  _DAT_14ca45fb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca45fb8,1);
  return;
}



// FUNCTION 142fe094f FUN_142fe094f body=69 status=ok
// SIG undefined FUN_142fe094f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe094f(void)

{
  _DAT_14ca46040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46048,1);
  return;
}



// FUNCTION 142fe0994 FUN_142fe0994 body=69 status=ok
// SIG undefined FUN_142fe0994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0994(void)

{
  _DAT_14ca46058 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe09d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46060,1);
  return;
}



// FUNCTION 142fe09d9 FUN_142fe09d9 body=69 status=ok
// SIG undefined FUN_142fe09d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe09d9(void)

{
  _DAT_14ca46068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46070,1);
  return;
}



// FUNCTION 142fe0a1e FUN_142fe0a1e body=69 status=ok
// SIG undefined FUN_142fe0a1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0a1e(void)

{
  _DAT_14ca46078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46080,1);
  return;
}



// FUNCTION 142fe0a63 FUN_142fe0a63 body=69 status=ok
// SIG undefined FUN_142fe0a63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0a63(void)

{
  _DAT_14ca46088 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46090,1);
  return;
}



// FUNCTION 142fe0aa8 FUN_142fe0aa8 body=69 status=ok
// SIG undefined FUN_142fe0aa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0aa8(void)

{
  _DAT_14ca46098 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca460a0,1);
  return;
}



// FUNCTION 142fe0aed FUN_142fe0aed body=69 status=ok
// SIG undefined FUN_142fe0aed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0aed(void)

{
  _DAT_14ca460b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca460b8,1);
  return;
}



// FUNCTION 142fe0b32 FUN_142fe0b32 body=69 status=ok
// SIG undefined FUN_142fe0b32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0b32(void)

{
  _DAT_14ca460c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca460d0,1);
  return;
}



// FUNCTION 142fe0b77 FUN_142fe0b77 body=69 status=ok
// SIG undefined FUN_142fe0b77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0b77(void)

{
  _DAT_14ca460e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca460f0,1);
  return;
}



// FUNCTION 142fe0bbc FUN_142fe0bbc body=69 status=ok
// SIG undefined FUN_142fe0bbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0bbc(void)

{
  _DAT_14ca46100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46108,1);
  return;
}



// FUNCTION 142fe0c01 FUN_142fe0c01 body=69 status=ok
// SIG undefined FUN_142fe0c01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0c01(void)

{
  _DAT_14ca46110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46118,1);
  return;
}



// FUNCTION 142fe0c46 FUN_142fe0c46 body=69 status=ok
// SIG undefined FUN_142fe0c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0c46(void)

{
  _DAT_14ca46128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46130,1);
  return;
}



// FUNCTION 142fe0c8b FUN_142fe0c8b body=69 status=ok
// SIG undefined FUN_142fe0c8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0c8b(void)

{
  _DAT_14ca46140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46148,1);
  return;
}



// FUNCTION 142fe0cd0 FUN_142fe0cd0 body=69 status=ok
// SIG undefined FUN_142fe0cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0cd0(void)

{
  _DAT_14ca46158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46160,1);
  return;
}



// FUNCTION 142fe0d15 FUN_142fe0d15 body=69 status=ok
// SIG undefined FUN_142fe0d15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0d15(void)

{
  _DAT_14ca46170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46178,1);
  return;
}



// FUNCTION 142fe0d5a FUN_142fe0d5a body=69 status=ok
// SIG undefined FUN_142fe0d5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0d5a(void)

{
  _DAT_14ca46188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46190,1);
  return;
}



// FUNCTION 142fe0d9f FUN_142fe0d9f body=69 status=ok
// SIG undefined FUN_142fe0d9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0d9f(void)

{
  _DAT_14ca461a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca461a8,1);
  return;
}



// FUNCTION 142fe0de4 FUN_142fe0de4 body=69 status=ok
// SIG undefined FUN_142fe0de4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0de4(void)

{
  _DAT_14ca461b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca461c0,1);
  return;
}



// FUNCTION 142fe0e29 FUN_142fe0e29 body=69 status=ok
// SIG undefined FUN_142fe0e29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0e29(void)

{
  _DAT_14ca461d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca461d8,1);
  return;
}



// FUNCTION 142fe0e6e FUN_142fe0e6e body=69 status=ok
// SIG undefined FUN_142fe0e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0e6e(void)

{
  _DAT_14ca461e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca461f0,1);
  return;
}



// FUNCTION 142fe0eb3 FUN_142fe0eb3 body=69 status=ok
// SIG undefined FUN_142fe0eb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0eb3(void)

{
  _DAT_14ca46200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46208,1);
  return;
}



// FUNCTION 142fe0ef8 FUN_142fe0ef8 body=69 status=ok
// SIG undefined FUN_142fe0ef8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0ef8(void)

{
  _DAT_14ca46218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46220,1);
  return;
}



// FUNCTION 142fe0f3d FUN_142fe0f3d body=69 status=ok
// SIG undefined FUN_142fe0f3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0f3d(void)

{
  _DAT_14ca46230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46238,1);
  return;
}



// FUNCTION 142fe0f82 FUN_142fe0f82 body=69 status=ok
// SIG undefined FUN_142fe0f82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0f82(void)

{
  _DAT_14ca46248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe0fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46250,1);
  return;
}



// FUNCTION 142fe0fc7 FUN_142fe0fc7 body=69 status=ok
// SIG undefined FUN_142fe0fc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe0fc7(void)

{
  _DAT_14ca46260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46268,1);
  return;
}



// FUNCTION 142fe100c FUN_142fe100c body=69 status=ok
// SIG undefined FUN_142fe100c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe100c(void)

{
  _DAT_14ca46278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe104e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46280,1);
  return;
}



// FUNCTION 142fe1051 FUN_142fe1051 body=69 status=ok
// SIG undefined FUN_142fe1051(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1051(void)

{
  _DAT_14ca46290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46298,1);
  return;
}



// FUNCTION 142fe1096 FUN_142fe1096 body=69 status=ok
// SIG undefined FUN_142fe1096(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1096(void)

{
  _DAT_14ca462a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe10d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca462b0,1);
  return;
}



// FUNCTION 142fe10db FUN_142fe10db body=69 status=ok
// SIG undefined FUN_142fe10db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe10db(void)

{
  _DAT_14ca462c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe111d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca462c8,1);
  return;
}



// FUNCTION 142fe1120 FUN_142fe1120 body=69 status=ok
// SIG undefined FUN_142fe1120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1120(void)

{
  _DAT_14ca462d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca462e0,1);
  return;
}



// FUNCTION 142fe1165 FUN_142fe1165 body=69 status=ok
// SIG undefined FUN_142fe1165(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1165(void)

{
  _DAT_14ca47518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe11a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca47520,1);
  return;
}



// FUNCTION 142fe11aa FUN_142fe11aa body=69 status=ok
// SIG undefined FUN_142fe11aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe11aa(void)

{
  _DAT_14ca462f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe11ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca462f8,1);
  return;
}



// FUNCTION 142fe11ef FUN_142fe11ef body=69 status=ok
// SIG undefined FUN_142fe11ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe11ef(void)

{
  _DAT_14ca46308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46310,1);
  return;
}



// FUNCTION 142fe1234 FUN_142fe1234 body=69 status=ok
// SIG undefined FUN_142fe1234(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1234(void)

{
  _DAT_14ca46320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46328,1);
  return;
}



// FUNCTION 142fe1279 FUN_142fe1279 body=69 status=ok
// SIG undefined FUN_142fe1279(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1279(void)

{
  _DAT_14ca46338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe12bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46340,1);
  return;
}



// FUNCTION 142fe12be FUN_142fe12be body=57 status=ok
// SIG undefined FUN_142fe12be(void)

void FUN_142fe12be(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x40;
  do {
    puVar2 = *(undefined8 **)(&DAT_14ca45d10 + lVar3);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 142fe12f7 FUN_142fe12f7 body=69 status=ok
// SIG undefined FUN_142fe12f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe12f7(void)

{
  _DAT_14ca46350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46358,1);
  return;
}



// FUNCTION 142fe133c FUN_142fe133c body=69 status=ok
// SIG undefined FUN_142fe133c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe133c(void)

{
  _DAT_14ca46368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe137e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46370,1);
  return;
}



// FUNCTION 142fe1381 FUN_142fe1381 body=69 status=ok
// SIG undefined FUN_142fe1381(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1381(void)

{
  _DAT_14ca46380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe13c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46388,1);
  return;
}



// FUNCTION 142fe13c6 FUN_142fe13c6 body=69 status=ok
// SIG undefined FUN_142fe13c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe13c6(void)

{
  _DAT_14ca46398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca463a0,1);
  return;
}



// FUNCTION 142fe140b FUN_142fe140b body=69 status=ok
// SIG undefined FUN_142fe140b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe140b(void)

{
  _DAT_14ca463b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe144d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca463b8,1);
  return;
}



// FUNCTION 142fe1450 FUN_142fe1450 body=69 status=ok
// SIG undefined FUN_142fe1450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1450(void)

{
  _DAT_14ca463c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca463d0,1);
  return;
}



// FUNCTION 142fe1495 FUN_142fe1495 body=69 status=ok
// SIG undefined FUN_142fe1495(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1495(void)

{
  _DAT_14ca463e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe14d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca463e8,1);
  return;
}



// FUNCTION 142fe14da FUN_142fe14da body=69 status=ok
// SIG undefined FUN_142fe14da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe14da(void)

{
  _DAT_14ca463f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46400,1);
  return;
}



// FUNCTION 142fe151f FUN_142fe151f body=69 status=ok
// SIG undefined FUN_142fe151f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe151f(void)

{
  _DAT_14ca46410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46418,1);
  return;
}



// FUNCTION 142fe1564 FUN_142fe1564 body=69 status=ok
// SIG undefined FUN_142fe1564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1564(void)

{
  _DAT_14ca46428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe15a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46430,1);
  return;
}



// FUNCTION 142fe15a9 FUN_142fe15a9 body=69 status=ok
// SIG undefined FUN_142fe15a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe15a9(void)

{
  _DAT_14ca46440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe15eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46448,1);
  return;
}



// FUNCTION 142fe15ee FUN_142fe15ee body=69 status=ok
// SIG undefined FUN_142fe15ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe15ee(void)

{
  _DAT_14ca46458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46460,1);
  return;
}



// FUNCTION 142fe1633 FUN_142fe1633 body=69 status=ok
// SIG undefined FUN_142fe1633(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1633(void)

{
  _DAT_14ca46470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46478,1);
  return;
}



// FUNCTION 142fe1678 FUN_142fe1678 body=69 status=ok
// SIG undefined FUN_142fe1678(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1678(void)

{
  _DAT_14ca46488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe16ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46490,1);
  return;
}



// FUNCTION 142fe16bd FUN_142fe16bd body=69 status=ok
// SIG undefined FUN_142fe16bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe16bd(void)

{
  _DAT_14ca464a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe16ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca464a8,1);
  return;
}



// FUNCTION 142fe1702 FUN_142fe1702 body=69 status=ok
// SIG undefined FUN_142fe1702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1702(void)

{
  _DAT_14ca464b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca464c0,1);
  return;
}



// FUNCTION 142fe1747 FUN_142fe1747 body=69 status=ok
// SIG undefined FUN_142fe1747(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1747(void)

{
  _DAT_14ca464d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca464d8,1);
  return;
}



// FUNCTION 142fe178c FUN_142fe178c body=69 status=ok
// SIG undefined FUN_142fe178c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe178c(void)

{
  _DAT_14ca464e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe17ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca464f0,1);
  return;
}



// FUNCTION 142fe17d1 FUN_142fe17d1 body=69 status=ok
// SIG undefined FUN_142fe17d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe17d1(void)

{
  _DAT_14ca46500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46508,1);
  return;
}



// FUNCTION 142fe1816 FUN_142fe1816 body=69 status=ok
// SIG undefined FUN_142fe1816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe1816(void)

{
  _DAT_14ca46518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46520,1);
  return;
}



// FUNCTION 142fe185b FUN_142fe185b body=69 status=ok
// SIG undefined FUN_142fe185b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe185b(void)

{
  _DAT_14ca46530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe189d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46538,1);
  return;
}



// FUNCTION 142fe18a0 FUN_142fe18a0 body=69 status=ok
// SIG undefined FUN_142fe18a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe18a0(void)

{
  _DAT_14ca46548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe18e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46550,1);
  return;
}



// FUNCTION 142fe18e5 FUN_142fe18e5 body=69 status=ok
// SIG undefined FUN_142fe18e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe18e5(void)

{
  _DAT_14ca46560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142fe1927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca46568,1);
  return;
}


