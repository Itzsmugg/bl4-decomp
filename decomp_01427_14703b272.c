// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14703b272 FUN_14703b272 body=241 status=ok
// SIG undefined FUN_14703b272(void)

int * FUN_14703b272(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar4 = (**(code **)(*(longlong *)*param_2 + 8))();
  *param_1 = iVar4 / 2;
  plVar7 = (longlong *)*param_2;
  *(longlong **)(param_1 + 2) = plVar7;
  lVar3 = param_2[1];
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar7 = *(longlong **)(param_1 + 2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar5 = (**(code **)(*plVar7 + 8))();
  iVar4 = param_1[8];
  param_1[8] = iVar4 + uVar5;
  if ((uint)(param_1[9] - iVar4) < uVar5) {
    FUN_145ca0cd4(param_1 + 6);
  }
  memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 6)),0,(longlong)(int)uVar5 << 2);
  iVar6 = (**(code **)(**(longlong **)(param_1 + 2) + 8))();
  iVar4 = param_1[0xc];
  param_1[0xc] = iVar4 + iVar6 + 2;
  if ((uint)(param_1[0xd] - iVar4) < iVar6 + 2U) {
    FUN_145ca0cd4(param_1 + 10);
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 14703b364 FUN_14703b364 body=390 status=ok
// SIG undefined FUN_14703b364(void)

int * FUN_14703b364(int *param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = param_2;
  iVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  param_1[1] = iVar5 / 2;
  iVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
  param_1[2] = iVar5 + 2;
  *(undefined8 *)(param_1 + 4) = *param_3;
  lVar7 = param_3[1];
  *(longlong *)(param_1 + 6) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar5 = *param_1;
  param_1[0x10] = iVar5;
  if ((longlong)iVar5 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_1470343d0(param_1 + 0xe);
    _Dst = *(void **)(param_1 + 0xe);
  }
  memset(_Dst,0,(longlong)iVar5 << 4);
  if (0 < *param_1) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0xe);
      uVar6 = param_1[2];
      iVar5 = *(int *)(lVar3 + 8 + lVar7);
      *(uint *)(lVar3 + 8 + lVar7) = iVar5 + uVar6;
      if ((uint)(*(int *)(lVar3 + 0xc + lVar7) - iVar5) < uVar6) {
        FUN_145ca0cd4((longlong *)(lVar3 + lVar7));
      }
      memset((void *)((longlong)iVar5 * 4 + *(longlong *)(lVar3 + lVar7)),0,
             (longlong)(int)uVar6 << 2);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < *param_1);
  }
  uVar6 = (**(code **)(**(longlong **)(param_1 + 4) + 8))();
  iVar5 = param_1[10];
  param_1[10] = iVar5 + uVar6;
  if ((uint)(param_1[0xb] - iVar5) < uVar6) {
    FUN_145ca0cd4(param_1 + 8);
  }
  memset((void *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 8)),0,(longlong)(int)uVar6 << 2);
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
  return param_1;
}



// FUNCTION 14703b4ea FUN_14703b4ea body=99 status=ok
// SIG undefined FUN_14703b4ea(void)

void FUN_14703b4ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147034bb0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x00014703b542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14703b54e FUN_14703b54e body=411 status=ok
// SIG undefined FUN_14703b54e(void)

uint * FUN_14703b54e(uint *param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = param_2;
  iVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  param_1[1] = iVar6 / 2;
  *(undefined8 *)(param_1 + 2) = *param_3;
  lVar8 = param_3[1];
  *(longlong *)(param_1 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  iVar6 = (**(code **)(*(longlong *)*param_3 + 8))();
  param_1[6] = iVar6 + 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar7 = (**(code **)(**(longlong **)(param_1 + 2) + 8))();
  uVar3 = param_1[0xc];
  param_1[0xc] = uVar3 + uVar7;
  if (param_1[0xd] - uVar3 < uVar7) {
    FUN_145ca0cd4(param_1 + 10);
  }
  memset((void *)((longlong)(int)uVar3 * 4 + *(longlong *)(param_1 + 10)),0,
         (longlong)(int)uVar7 << 2);
  uVar3 = *param_1;
  uVar7 = param_1[0x10];
  param_1[0x10] = uVar7 + uVar3;
  if (param_1[0x11] - uVar7 < uVar3) {
    FUN_1470343d0(param_1 + 0xe);
  }
  memset((void *)((longlong)(int)uVar7 * 0x10 + *(longlong *)(param_1 + 0xe)),0,
         (longlong)(int)uVar3 << 4);
  if (0 < (int)*param_1) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0xe);
      uVar3 = param_1[6];
      iVar6 = *(int *)(lVar4 + 8 + lVar8);
      *(uint *)(lVar4 + 8 + lVar8) = iVar6 + uVar3;
      if ((uint)(*(int *)(lVar4 + 0xc + lVar8) - iVar6) < uVar3) {
        FUN_145ca0cd4((longlong *)(lVar4 + lVar8));
      }
      memset((void *)((longlong)iVar6 * 4 + *(longlong *)(lVar4 + lVar8)),0,
             (longlong)(int)uVar3 << 2);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar9 < (int)*param_1);
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
  return param_1;
}



// FUNCTION 14703b6ea FUN_14703b6ea body=99 status=ok
// SIG undefined FUN_14703b6ea(void)

void FUN_14703b6ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147034bb0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014703b742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14703b74e FUN_14703b74e body=120 status=ok
// SIG undefined FUN_14703b74e(void)

undefined8 * FUN_14703b74e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e488) {
    FUN_144b3d300(&DAT_14c99e488);
    if (DAT_14c99e488 == -1) {
      FUN_1446f470e(&DAT_14c99e480,L"UniformPartitionConvolutionFactory",1);
      _Init_thread_footer(&DAT_14c99e488);
    }
  }
  *param_2 = DAT_14c99e480;
  return param_2;
}



// FUNCTION 14703b7ca FUN_14703b7ca body=275 status=ok
// SIG undefined FUN_14703b7ca(void)

ulonglong FUN_14703b7ca(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_RSI;
  undefined7 uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 4);
  if ((longlong)(int)uVar1 < 1) {
    bVar11 = false;
    uVar9 = 0;
  }
  else {
    uVar10 = (longlong)(int)uVar1 - (ulonglong)(uVar1 >> 1 & 0x15555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    bVar11 = (char)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ==
             '\x01';
    uVar9 = (undefined7)((ulonglong)unaff_RSI >> 8);
  }
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar5 = *(int *)(param_2 + 0x14);
  iVar7 = 0x20;
  if ((uVar1 != 0) && (iVar7 = 0, uVar1 != 0)) {
    for (; (uVar1 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
    }
  }
  uVar8 = iVar7 + 1;
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  local_38 = (ulonglong)*param_2 << 0x28 | (ulonglong)uVar8 | 0x100000000;
  bVar6 = FUN_147033900(&local_38,&DAT_14c99e378);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar9,bVar11 & bVar6 & ((0 < iVar5 && 0 < iVar4) && (0 < iVar3 && 0 < iVar2))) &
         0xffffffff;
}



// FUNCTION 14703b8de FUN_14703b8de body=1024 status=ok
// SIG undefined FUN_14703b8de(void)

void FUN_14703b8de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar11 = *(uint *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x20));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x30));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x40));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x5c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x50));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x6c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x60));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x7c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x70));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x80));
    uVar11 = *(uint *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + uVar11;
  if ((uint)(*(int *)(param_1 + 0x9c) - iVar1) < uVar11) {
    FUN_145ca0cd4((longlong *)(param_1 + 0x90));
    uVar11 = *(uint *)(param_1 + 8);
  }
  if (0 < (int)uVar11) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar5 = *(longlong *)(param_1 + 0x50);
    lVar6 = *(longlong *)(param_1 + 0x60);
    lVar7 = *(longlong *)(param_1 + 0x70);
    lVar8 = *(longlong *)(param_1 + 0x80);
    lVar9 = *(longlong *)(param_1 + 0x90);
    lVar12 = 0;
    do {
      fVar15 = (float)(int)lVar12 * (3.1415927 / (float)(int)uVar11);
      fVar13 = sinf(fVar15);
      fVar10 = (1.0 - fVar13) * 0.5;
      fVar14 = cosf(fVar15);
      fVar14 = fVar14 * -0.5;
      fVar13 = sinf(fVar15);
      fVar13 = (fVar13 + 1.0) * 0.5;
      fVar15 = cosf(fVar15);
      fVar15 = fVar15 * 0.5;
      *(float *)(lVar2 + lVar12 * 4) = fVar13;
      *(float *)(lVar2 + 4 + lVar12 * 4) = -fVar13;
      *(float *)(lVar3 + lVar12 * 4) = fVar15;
      *(float *)(lVar3 + 4 + lVar12 * 4) = fVar15;
      *(float *)(lVar4 + lVar12 * 4) = fVar10;
      *(float *)(lVar4 + 4 + lVar12 * 4) = fVar10;
      *(float *)(lVar5 + lVar12 * 4) = -fVar14;
      *(float *)(lVar5 + 4 + lVar12 * 4) = fVar14;
      *(float *)(lVar6 + lVar12 * 4) = fVar13;
      *(float *)(lVar6 + 4 + lVar12 * 4) = -fVar13;
      *(float *)(lVar7 + lVar12 * 4) = fVar15;
      *(float *)(lVar7 + 4 + lVar12 * 4) = fVar15;
      *(float *)(lVar8 + lVar12 * 4) = fVar10;
      *(float *)(lVar8 + 4 + lVar12 * 4) = fVar10;
      *(float *)(lVar9 + lVar12 * 4) = -fVar14;
      *(float *)(lVar9 + 4 + lVar12 * 4) = fVar14;
      lVar12 = lVar12 + 2;
    } while (lVar12 < *(int *)(param_1 + 8));
  }
  return;
}



// FUNCTION 14703bcde FUN_14703bcde body=146 status=ok
// SIG undefined FUN_14703bcde(void)

undefined8 * FUN_14703bcde(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a136a30;
  *(int *)(param_1 + 1) = 1 << ((byte)param_2 & 0x1f);
  *(int *)((longlong)param_1 + 0xc) = param_2;
  memset(param_1 + 2,0,0x90);
  uVar2 = FUN_14001cc68(0x50,0x10);
  FUN_14703bd70(uVar2,param_2 + -1);
  param_1[0x14] = uVar2;
  iVar1 = *(int *)(param_1 + 3);
  *(uint *)(param_1 + 3) = iVar1 + *(uint *)(param_1 + 1);
  if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar1) < *(uint *)(param_1 + 1)) {
    FUN_145ca0cd4(param_1 + 2);
  }
  FUN_14703b8de(param_1);
  return param_1;
}



// FUNCTION 14703bd70 FUN_14703bd70 body=107 status=ok
// SIG undefined FUN_14703bd70(void)

uint * FUN_14703bd70(uint *param_1,uint param_2)

{
  uint uVar1;
  
  *param_1 = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
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
  uVar1 = 2 << ((byte)param_2 & 0x1f);
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  param_1[2] = uVar1;
  param_1[0x12] = uVar1;
  if (param_2 < 0x1f) {
    FUN_145ca0cd4(param_1 + 0x10,0);
  }
  FUN_14703c7e0(param_1);
  FUN_14703cc02(param_1);
  FUN_14703cd54(param_1);
  return param_1;
}



// FUNCTION 14703bddc FUN_14703bddc body=99 status=ok
// SIG undefined FUN_14703bddc(void)

void FUN_14703bddc(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a136a30;
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    FUN_1470412c2(lVar1);
    thunk_FUN_1400020a8(lVar1,0x50);
  }
  FUN_14703be3e(param_1 + 0xc);
  FUN_14703be3e(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14703be3e FUN_14703be3e body=75 status=ok
// SIG undefined FUN_14703be3e(void)

void FUN_14703be3e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14703be96 FUN_14703be96 body=442 status=ok
// SIG undefined FUN_14703be96(void)

void FUN_14703be96(longlong param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
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
  longlong lVar33;
  float *pfVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  
  pfVar10 = *(float **)(param_1 + 0x10);
  FUN_14703c050(*(undefined8 *)(param_1 + 0xa0),param_2,pfVar10);
  pfVar11 = *(float **)(param_1 + 0x20);
  pfVar12 = *(float **)(param_1 + 0x30);
  pfVar13 = *(float **)(param_1 + 0x40);
  pfVar14 = *(float **)(param_1 + 0x50);
  fVar6 = *pfVar10;
  fVar7 = pfVar10[1];
  *param_3 = *pfVar14 * fVar7 + *pfVar13 * fVar6 + *pfVar11 * fVar6 + *pfVar12 * fVar7;
  param_3[1] = pfVar13[1] * fVar7 + pfVar14[1] * fVar6 + pfVar11[1] * fVar7 + pfVar12[1] * fVar6;
  fVar36 = pfVar10[2];
  fVar37 = pfVar10[3];
  lVar33 = (longlong)*(int *)(param_1 + 8);
  fVar8 = pfVar10[lVar33 + -2];
  fVar9 = pfVar10[lVar33 + -1];
  param_3[2] = pfVar14[2] * fVar9 + pfVar13[2] * fVar8 + pfVar11[2] * fVar36 + pfVar12[2] * fVar37;
  param_3[3] = fVar9 * pfVar13[3] + fVar8 * pfVar14[3] + fVar37 * pfVar11[3] + fVar36 * pfVar12[3];
  if (4 < lVar33) {
    pfVar34 = pfVar10 + lVar33 + -8;
    lVar35 = 4;
    fVar36 = pfVar10[lVar33 + -4];
    fVar37 = pfVar10[lVar33 + -3];
    do {
      pfVar1 = pfVar10 + lVar35;
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      pfVar1 = pfVar11 + lVar35;
      fVar17 = pfVar1[1];
      fVar18 = pfVar1[2];
      fVar19 = pfVar1[3];
      fVar20 = *pfVar34;
      fVar21 = pfVar34[1];
      fVar22 = pfVar34[2];
      fVar23 = pfVar34[3];
      pfVar2 = pfVar12 + lVar35;
      fVar24 = pfVar2[1];
      fVar25 = pfVar2[2];
      fVar26 = pfVar2[3];
      pfVar3 = pfVar13 + lVar35;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      pfVar4 = pfVar14 + lVar35;
      fVar30 = pfVar4[1];
      fVar31 = pfVar4[2];
      fVar32 = pfVar4[3];
      pfVar5 = param_3 + lVar35;
      *pfVar5 = *pfVar1 * fVar8 + *pfVar2 * fVar9 + *pfVar4 * fVar37 + *pfVar3 * fVar36;
      pfVar5[1] = fVar17 * fVar9 + fVar24 * fVar8 + fVar30 * fVar36 + fVar27 * fVar37;
      pfVar5[2] = fVar18 * fVar15 + fVar25 * fVar16 + fVar31 * fVar23 + fVar28 * fVar22;
      pfVar5[3] = fVar19 * fVar16 + fVar26 * fVar15 + fVar32 * fVar22 + fVar29 * fVar23;
      lVar35 = lVar35 + 4;
      pfVar34 = pfVar34 + -4;
      fVar36 = fVar20;
      fVar37 = fVar21;
    } while (lVar35 < lVar33);
  }
  param_3[lVar33] = fVar6 - fVar7;
  param_3[lVar33 + 1] = 0.0;
  return;
}



// FUNCTION 14703c050 FUN_14703c050 body=643 status=ok
// SIG undefined FUN_14703c050(void)

void FUN_14703c050(uint *param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
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
  int local_64;
  
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    bVar8 = (char)uVar6 - 2;
    uVar15 = (ulonglong)(uint)(4 << (bVar8 & 0x1f));
    lVar12 = (longlong)(2 << (bVar8 & 0x1f));
    lVar14 = (longlong)(6 << (bVar8 & 0x1f));
    uVar11 = 0;
    do {
      pfVar1 = (float *)(param_2 + uVar11 * 8);
      pfVar2 = (float *)(param_2 + lVar12 * 4 + uVar11 * 8);
      pfVar3 = (float *)(param_2 + uVar15 * 4 + uVar11 * 8);
      pfVar4 = (float *)(param_2 + lVar14 * 4 + uVar11 * 8);
      fVar30 = *pfVar1 + *pfVar3;
      fVar31 = pfVar1[1] + pfVar3[1];
      fVar32 = pfVar1[2] + pfVar3[2];
      fVar33 = pfVar1[3] + pfVar3[3];
      fVar18 = *pfVar1 - *pfVar3;
      fVar19 = pfVar1[1] - pfVar3[1];
      fVar20 = pfVar1[2] - pfVar3[2];
      fVar21 = pfVar1[3] - pfVar3[3];
      fVar26 = *pfVar2 + *pfVar4;
      fVar27 = pfVar2[1] + pfVar4[1];
      fVar28 = pfVar2[2] + pfVar4[2];
      fVar29 = pfVar2[3] + pfVar4[3];
      fVar22 = (pfVar2[1] - pfVar4[1]) * -1.0;
      fVar23 = (*pfVar2 - *pfVar4) * 1.0;
      fVar24 = (pfVar2[3] - pfVar4[3]) * -1.0;
      fVar25 = (pfVar2[2] - pfVar4[2]) * 1.0;
      pfVar1 = (float *)(param_3 + uVar11 * 8);
      *pfVar1 = fVar30 + fVar26;
      pfVar1[1] = fVar31 + fVar27;
      pfVar1[2] = fVar32 + fVar28;
      pfVar1[3] = fVar33 + fVar29;
      pfVar1 = (float *)(param_3 + lVar12 * 4 + uVar11 * 8);
      *pfVar1 = fVar30 - fVar26;
      pfVar1[1] = fVar31 - fVar27;
      pfVar1[2] = fVar32 - fVar28;
      pfVar1[3] = fVar33 - fVar29;
      pfVar1 = (float *)(param_3 + uVar15 * 4 + uVar11 * 8);
      *pfVar1 = fVar18 + fVar22;
      pfVar1[1] = fVar19 + fVar23;
      pfVar1[2] = fVar20 + fVar24;
      pfVar1[3] = fVar21 + fVar25;
      pfVar1 = (float *)(param_3 + lVar14 * 4 + uVar11 * 8);
      *pfVar1 = fVar18 - fVar22;
      pfVar1[1] = fVar19 - fVar23;
      pfVar1[2] = fVar20 - fVar24;
      pfVar1[3] = fVar21 - fVar25;
      uVar11 = uVar11 + 2;
    } while (uVar11 < (uint)(1 << (bVar8 & 0x1f)));
    iVar10 = 2;
  }
  else {
    FUN_14703dc26(param_2,param_3,uVar6);
    iVar10 = 3;
  }
  iVar13 = uVar6 - 4;
  iVar7 = iVar10;
  if (iVar10 < iVar13) {
    do {
      iVar9 = (uVar6 - iVar7) + -2;
      if (iVar9 != 0x1f) {
        bVar8 = (byte)iVar9;
        lVar12 = param_3 + (longlong)(2 << (bVar8 & 0x1f)) * 4;
        lVar14 = param_3 + (longlong)(4 << (bVar8 & 0x1f)) * 4;
        lVar5 = param_3 + (longlong)(6 << (bVar8 & 0x1f)) * 4;
        lVar16 = 0;
        do {
          pfVar1 = (float *)(param_3 + lVar16 * 8);
          pfVar2 = (float *)(lVar12 + lVar16 * 8);
          pfVar3 = (float *)(lVar14 + lVar16 * 8);
          pfVar4 = (float *)(lVar5 + lVar16 * 8);
          fVar30 = *pfVar1 + *pfVar3;
          fVar31 = pfVar1[1] + pfVar3[1];
          fVar32 = pfVar1[2] + pfVar3[2];
          fVar33 = pfVar1[3] + pfVar3[3];
          fVar18 = *pfVar1 - *pfVar3;
          fVar19 = pfVar1[1] - pfVar3[1];
          fVar20 = pfVar1[2] - pfVar3[2];
          fVar21 = pfVar1[3] - pfVar3[3];
          fVar26 = *pfVar2 + *pfVar4;
          fVar27 = pfVar2[1] + pfVar4[1];
          fVar28 = pfVar2[2] + pfVar4[2];
          fVar29 = pfVar2[3] + pfVar4[3];
          fVar22 = (pfVar2[1] - pfVar4[1]) * -1.0;
          fVar23 = (*pfVar2 - *pfVar4) * 1.0;
          fVar24 = (pfVar2[3] - pfVar4[3]) * -1.0;
          fVar25 = (pfVar2[2] - pfVar4[2]) * 1.0;
          pfVar1 = (float *)(param_3 + lVar16 * 8);
          *pfVar1 = fVar30 + fVar26;
          pfVar1[1] = fVar31 + fVar27;
          pfVar1[2] = fVar32 + fVar28;
          pfVar1[3] = fVar33 + fVar29;
          pfVar1 = (float *)(lVar12 + lVar16 * 8);
          *pfVar1 = fVar30 - fVar26;
          pfVar1[1] = fVar31 - fVar27;
          pfVar1[2] = fVar32 - fVar28;
          pfVar1[3] = fVar33 - fVar29;
          pfVar1 = (float *)(lVar14 + lVar16 * 8);
          *pfVar1 = fVar18 + fVar22;
          pfVar1[1] = fVar19 + fVar23;
          pfVar1[2] = fVar20 + fVar24;
          pfVar1[3] = fVar21 + fVar25;
          pfVar1 = (float *)(lVar5 + lVar16 * 8);
          *pfVar1 = fVar18 - fVar22;
          pfVar1[1] = fVar19 - fVar23;
          pfVar1[2] = fVar20 - fVar24;
          pfVar1[3] = fVar21 - fVar25;
          lVar16 = lVar16 + 2;
        } while (lVar16 < 1 << (bVar8 & 0x1f));
      }
      iVar7 = iVar7 + 2;
    } while (iVar7 < iVar13);
    local_64 = uVar6 - iVar10;
    iVar7 = 1;
    do {
      iVar9 = 1 << ((byte)iVar10 & 0x1f);
      if (iVar7 < iVar9) {
        uVar11 = (ulonglong)iVar7;
        lVar12 = *(longlong *)(param_1 + 4);
        do {
          iVar7 = iVar10;
          iVar17 = local_64;
          do {
            FUN_14703dee4(param_3,uVar11 & 0xffffffff,iVar17,uVar11 * 0xb0 + lVar12);
            iVar7 = iVar7 + 2;
            iVar17 = iVar17 + -2;
          } while (iVar7 < iVar13);
          uVar11 = uVar11 + 1;
          iVar7 = iVar9;
        } while (uVar11 != (longlong)iVar9);
      }
      iVar10 = iVar10 + 2;
      local_64 = local_64 + -2;
    } while (iVar10 < iVar13);
  }
  if (iVar10 < (int)(uVar6 - 2)) {
    FUN_14703e0d2(param_1,param_3);
  }
  FUN_14703e2ba(param_1,param_3,uVar6 - 2);
  return;
}



// FUNCTION 14703c2d4 FUN_14703c2d4 body=437 status=ok
// SIG undefined FUN_14703c2d4(void)

void FUN_14703c2d4(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
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
  undefined1 (*pauVar28) [16];
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  float fVar32;
  
  pfVar5 = *(float **)(param_1 + 0x10);
  pfVar6 = *(float **)(param_1 + 0x60);
  pfVar7 = *(float **)(param_1 + 0x70);
  pfVar8 = *(float **)(param_1 + 0x80);
  pfVar9 = *(float **)(param_1 + 0x90);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  *pfVar5 = param_2[(longlong)*(int *)(param_1 + 8) + 1] * *pfVar9 +
            param_2[*(int *)(param_1 + 8)] * *pfVar8 + *pfVar6 * fVar2 + *pfVar7 * fVar3;
  pfVar5[1] = param_2[(longlong)*(int *)(param_1 + 8) + 1] * *pfVar8 +
              param_2[*(int *)(param_1 + 8)] * pfVar9[1] + fVar3 * pfVar6[1] + fVar2 * pfVar7[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  pfVar5[2] = param_2[(longlong)*(int *)(param_1 + 8) + -1] * pfVar9[2] +
              param_2[(longlong)*(int *)(param_1 + 8) + -2] * pfVar8[2] +
              pfVar6[2] * fVar2 + pfVar7[2] * fVar3;
  pfVar5[3] = param_2[(longlong)*(int *)(param_1 + 8) + -1] * pfVar8[3] +
              param_2[(longlong)*(int *)(param_1 + 8) + -2] * pfVar9[3] +
              fVar3 * pfVar6[3] + fVar2 * pfVar7[3];
  uVar29 = (ulonglong)*(int *)(param_1 + 8);
  if (4 < (longlong)uVar29) {
    lVar10 = *(longlong *)(param_1 + 0x20);
    lVar11 = *(longlong *)(param_1 + 0x30);
    lVar12 = *(longlong *)(param_1 + 0x40);
    lVar13 = *(longlong *)(param_1 + 0x50);
    pauVar28 = (undefined1 (*) [16])(param_2 + (uVar29 - 8));
    uVar30 = 4;
    uVar31 = *(undefined8 *)(param_2 + (uVar29 - 4));
    do {
      pfVar6 = param_2 + uVar30;
      fVar2 = *pfVar6;
      fVar3 = pfVar6[1];
      fVar14 = pfVar6[2];
      fVar15 = pfVar6[3];
      pfVar6 = (float *)(lVar10 + uVar30 * 4);
      fVar16 = pfVar6[1];
      fVar17 = pfVar6[2];
      fVar18 = pfVar6[3];
      auVar4 = *pauVar28;
      fVar32 = (float)((ulonglong)uVar31 >> 0x20);
      pfVar7 = (float *)(lVar11 + uVar30 * 4);
      fVar19 = pfVar7[1];
      fVar20 = pfVar7[2];
      fVar21 = pfVar7[3];
      pfVar8 = (float *)(lVar12 + uVar30 * 4);
      fVar22 = pfVar8[1];
      fVar23 = pfVar8[2];
      fVar24 = pfVar8[3];
      pfVar9 = (float *)(lVar13 + uVar30 * 4);
      fVar25 = pfVar9[1];
      fVar26 = pfVar9[2];
      fVar27 = pfVar9[3];
      pfVar1 = pfVar5 + uVar30;
      *pfVar1 = *pfVar6 * fVar2 + *pfVar7 * fVar3 + *pfVar9 * fVar32 + *pfVar8 * (float)uVar31;
      pfVar1[1] = fVar16 * fVar3 + fVar19 * fVar2 + fVar25 * (float)uVar31 + fVar22 * fVar32;
      pfVar1[2] = fVar17 * fVar14 + fVar20 * fVar15 + fVar26 * auVar4._12_4_ + fVar23 * auVar4._8_4_
      ;
      pfVar1[3] = fVar18 * fVar15 + fVar21 * fVar14 + fVar27 * auVar4._8_4_ + fVar24 * auVar4._12_4_
      ;
      uVar30 = uVar30 + 4;
      pauVar28 = pauVar28 + -1;
      uVar31 = auVar4._0_8_;
    } while (uVar30 < uVar29);
  }
  FUN_14703c48a(*(undefined8 *)(param_1 + 0xa0));
  return;
}



// FUNCTION 14703c48a FUN_14703c48a body=102 status=ok
// SIG undefined FUN_14703c48a(void)

void FUN_14703c48a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  thunk_FUN_1421c5220(param_2,*(undefined4 *)(param_1 + 8),uVar1,0x3f800000);
  FUN_14703c050(param_1,uVar1,param_3);
  thunk_FUN_1421c5220(param_3,*(undefined4 *)(param_1 + 8),param_3,
                      1.0 / (float)*(int *)(param_1 + 4));
  return;
}



// FUNCTION 14703c4f0 FUN_14703c4f0 body=67 status=ok
// SIG undefined FUN_14703c4f0(void)

void FUN_14703c4f0(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x20))
                (param_1,*(undefined8 *)(param_3 + uVar1 * 8),*(undefined8 *)(param_4 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  return;
}



// FUNCTION 14703c534 FUN_14703c534 body=67 status=ok
// SIG undefined FUN_14703c534(void)

void FUN_14703c534(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x28))
                (param_1,*(undefined8 *)(param_3 + uVar1 * 8),*(undefined8 *)(param_4 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  return;
}



// FUNCTION 14703c578 FUN_14703c578 body=120 status=ok
// SIG undefined FUN_14703c578(void)

undefined8 * FUN_14703c578(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e498) {
    FUN_144b3d300(&DAT_14c99e498);
    if (DAT_14c99e498 == -1) {
      FUN_1446f470e(&DAT_14c99e490,L"FVectorFFTFactory",1);
      _Init_thread_footer(&DAT_14c99e498);
    }
  }
  *param_2 = DAT_14c99e490;
  return param_2;
}



// FUNCTION 14703c60c FUN_14703c60c body=72 status=ok
// SIG undefined FUN_14703c60c(void)

undefined8 * FUN_14703c60c(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14001cc68(0xa8,0x10);
    FUN_14703bcde(uVar2,*param_3);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14703c654 FUN_14703c654 body=43 status=ok
// SIG undefined FUN_14703c654(void)

undefined8 FUN_14703c654(undefined8 param_1,int param_2)

{
  FUN_147037ff4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14703c680 FUN_14703c680 body=34 status=ok
// SIG undefined FUN_14703c680(void)

undefined8 FUN_14703c680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14703c6a2 FUN_14703c6a2 body=43 status=ok
// SIG undefined FUN_14703c6a2(void)

undefined8 FUN_14703c6a2(undefined8 param_1,int param_2)

{
  FUN_147040802();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14703c6ce FUN_14703c6ce body=43 status=ok
// SIG undefined FUN_14703c6ce(void)

undefined8 FUN_14703c6ce(undefined8 param_1,int param_2)

{
  FUN_142af488c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14703c6fa FUN_14703c6fa body=43 status=ok
// SIG undefined FUN_14703c6fa(void)

undefined8 FUN_14703c6fa(undefined8 param_1,int param_2)

{
  FUN_14703aaa4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14703c726 FUN_14703c726 body=43 status=ok
// SIG undefined FUN_14703c726(void)

undefined8 FUN_14703c726(undefined8 param_1,int param_2)

{
  FUN_14703bddc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14703c752 FUN_14703c752 body=52 status=ok
// SIG undefined FUN_14703c752(void)

void FUN_14703c752(longlong *param_1)

{
  FUN_14703c786();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14703c786 FUN_14703c786 body=89 status=ok
// SIG undefined FUN_14703c786(void)

void FUN_14703c786(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14703c7e0 FUN_14703c7e0 body=1058 status=ok
// SIG undefined FUN_14703c7e0(void)

void FUN_14703c7e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar6 = iVar2 + 0xf;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  uVar5 = iVar6 >> 4;
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar6 = 0;
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14703d9e8(plVar1);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  *(uint *)(param_1 + 0x18) = iVar6 + uVar5;
  if ((uint)(iVar4 - iVar6) < uVar5) {
    FUN_14703da18(plVar1);
  }
  if (0xf < iVar2) {
    uVar7 = (ulonglong)uVar5;
    uVar5 = 0;
    lVar8 = 0;
    do {
      dVar11 = (double)((uint)(byte)(&DAT_14a136a70)[uVar5 >> 0x10 & 0xff] << 8 |
                        (uint)(byte)(&DAT_14a136a70)[uVar5 >> 8 & 0xff] << 0x10 |
                        *(int *)(&DAT_14a136a70 + (uVar5 & 0xfc)) << 0x18 |
                       (uint)(byte)(&DAT_14a136a70)[uVar5 >> 0x18]) * 2.3283064365386963e-10 *
               6.2831854820251465;
      dVar10 = cos(dVar11);
      fVar16 = (float)dVar10;
      dVar10 = tan(dVar11);
      fVar17 = (float)dVar10;
      dVar10 = cos(dVar11 + dVar11);
      fVar18 = (float)dVar10;
      dVar10 = tan(dVar11 + dVar11);
      fVar15 = (float)dVar10;
      fVar3 = fVar18 + fVar18 + -1.0;
      dVar11 = tan(dVar11 * 3.0);
      fVar9 = (float)dVar11;
      *(float *)(*plVar1 + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x40 + lVar8) = -fVar17;
      *(float *)(*plVar1 + 0x50 + lVar8) = fVar18;
      *(float *)(*plVar1 + 0x70 + lVar8) = -fVar15;
      *(float *)(*plVar1 + 0x80 + lVar8) = fVar3;
      *(float *)(*plVar1 + 0xa0 + lVar8) = -fVar9;
      fVar12 = -fVar16;
      *(float *)(*plVar1 + 0x10 + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x20 + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x30 + lVar8) = fVar16;
      fVar13 = -fVar18;
      *(float *)(*plVar1 + 0x60 + lVar8) = fVar13;
      fVar14 = -fVar3;
      *(float *)(*plVar1 + 0x90 + lVar8) = fVar14;
      *(float *)(*plVar1 + 4 + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x44 + lVar8) = fVar17;
      *(float *)(*plVar1 + 0x54 + lVar8) = fVar18;
      *(float *)(*plVar1 + 0x74 + lVar8) = fVar15;
      *(float *)(*plVar1 + 0x84 + lVar8) = fVar3;
      *(float *)(*plVar1 + 0xa4 + lVar8) = fVar9;
      *(float *)(*plVar1 + 0x14 + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x24 + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x34 + lVar8) = fVar12;
      *(float *)(*plVar1 + 100 + lVar8) = fVar13;
      *(float *)(*plVar1 + 0x94 + lVar8) = fVar14;
      *(float *)(*plVar1 + 8 + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x48 + lVar8) = -fVar17;
      *(float *)(*plVar1 + 0x58 + lVar8) = fVar18;
      *(float *)(*plVar1 + 0x78 + lVar8) = -fVar15;
      *(float *)(*plVar1 + 0x88 + lVar8) = fVar3;
      *(float *)(*plVar1 + 0xa8 + lVar8) = -fVar9;
      *(float *)(*plVar1 + 0x18 + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x28 + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x38 + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x68 + lVar8) = fVar13;
      *(float *)(*plVar1 + 0x98 + lVar8) = fVar14;
      *(float *)(*plVar1 + 0xc + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x4c + lVar8) = fVar17;
      *(float *)(*plVar1 + 0x5c + lVar8) = fVar18;
      *(float *)(*plVar1 + 0x7c + lVar8) = fVar15;
      *(float *)(*plVar1 + 0x8c + lVar8) = fVar3;
      *(float *)(*plVar1 + 0xac + lVar8) = fVar9;
      *(float *)(*plVar1 + 0x1c + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x2c + lVar8) = fVar16;
      *(float *)(*plVar1 + 0x3c + lVar8) = fVar12;
      *(float *)(*plVar1 + 0x6c + lVar8) = fVar13;
      *(float *)(*plVar1 + 0x9c + lVar8) = fVar14;
      lVar8 = lVar8 + 0xb0;
      uVar5 = uVar5 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14703cc02 FUN_14703cc02 body=337 status=ok
// SIG undefined FUN_14703cc02(void)

void FUN_14703cc02(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar8;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar8 = iVar6 + 0xf;
  if (-1 < iVar6) {
    iVar8 = iVar6;
  }
  uVar7 = iVar8 >> 4;
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar8 = 0;
  if (iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_14703daac(plVar1);
    iVar8 = *(int *)(param_1 + 0x28);
    iVar5 = *(int *)(param_1 + 0x2c);
  }
  *(uint *)(param_1 + 0x28) = iVar8 + uVar7;
  if ((uint)(iVar5 - iVar8) < uVar7) {
    FUN_14703dadc(plVar1);
  }
  uVar10 = *(uint *)(param_1 + 4);
  if (uVar10 == 0) {
    cVar4 = '\0';
  }
  else {
    iVar5 = 0;
    if (uVar10 != 0) {
      for (; (uVar10 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    cVar4 = (char)iVar5;
  }
  if (0xf < iVar6) {
    iVar6 = 0;
    uVar10 = 0;
    do {
      uVar11 = ((uint)(byte)(&DAT_14a136a70)[uVar10 >> 0x10 & 0xff] << 8 |
                (uint)(byte)(&DAT_14a136a70)[uVar10 >> 8 & 0xff] << 0x10 |
                (uint)(byte)(&DAT_14a136a70)[uVar10 & 0xff] << 0x18 |
               (uint)(byte)(&DAT_14a136a70)[uVar10 >> 0x18]) >> (0x24U - cVar4 & 0x1f);
      if (uVar10 == uVar11) {
        puVar2 = (uint *)(*plVar1 + (longlong)iVar6 * 8);
        puVar12 = puVar2 + 1;
        *puVar2 = uVar10;
        iVar5 = 1;
LAB_14703ccdb:
        *puVar12 = uVar10;
        iVar6 = iVar6 + iVar5;
      }
      else if ((int)uVar10 < (int)uVar11) {
        lVar3 = *plVar1;
        lVar9 = (longlong)iVar6;
        *(uint *)(lVar3 + lVar9 * 8) = uVar10;
        *(uint *)(lVar3 + 4 + lVar9 * 8) = uVar11;
        lVar3 = *plVar1 + lVar9 * 8;
        puVar12 = (uint *)(lVar3 + 0xc);
        *(uint *)(lVar3 + 8) = uVar11;
        iVar5 = 2;
        goto LAB_14703ccdb;
      }
      uVar10 = uVar10 + 1;
    } while (((int)uVar10 < (int)uVar7) && (iVar6 < (int)uVar7));
  }
  return;
}



// FUNCTION 14703cd54 FUN_14703cd54 body=3220 status=ok
// SIG undefined FUN_14703cd54(void)

void FUN_14703cd54(longlong param_1)

{
  int iVar1;
  uint uVar2;
  double _X;
  double _X_00;
  double _X_01;
  int iVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar5 = iVar1 + 0xf;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  uVar4 = iVar5 >> 4;
  iVar5 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_14703db62(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  *(uint *)(param_1 + 0x38) = iVar5 + uVar4;
  if ((uint)(iVar3 - iVar5) < uVar4) {
    FUN_14703db92(param_1 + 0x30);
  }
  if (0xf < iVar1) {
    dVar14 = 1.0 / (double)*(int *)(param_1 + 4);
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar7 * 8);
      dVar13 = (double)((uint)(byte)(&DAT_14a136a70)[uVar2 >> 0xe & 0xff] << 8 |
                        (uint)(byte)(&DAT_14a136a70)[uVar2 >> 6 & 0xff] << 0x10 |
                        *(int *)(&DAT_14a136a70 + (uVar2 * 4 & 0xff)) << 0x18 |
                       (uint)(byte)(&DAT_14a136a70)[(uVar2 & 0x3fffffff) >> 0x16]) *
               2.3283064365386963e-10;
      dVar10 = (dVar14 * 0.0 + dVar13) * 6.2831854820251465;
      dVar11 = (dVar14 + dVar13) * 6.2831854820251465;
      dVar12 = (dVar14 + dVar14 + dVar13) * 6.2831854820251465;
      dVar13 = (dVar13 + dVar14 * 3.0) * 6.2831854820251465;
      dVar8 = tan(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x30 + lVar6) = -(float)dVar8;
      dVar8 = tan(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x34 + lVar6) = (float)dVar8;
      dVar8 = tan(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x38 + lVar6) = -(float)dVar8;
      dVar8 = tan(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x3c + lVar6) = (float)dVar8;
      dVar8 = tan(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x50 + lVar6) = -(float)dVar8;
      dVar8 = tan(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x54 + lVar6) = (float)dVar8;
      dVar8 = tan(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x58 + lVar6) = -(float)dVar8;
      dVar8 = tan(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x5c + lVar6) = (float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x24 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x28 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x2c + lVar6) = (float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xf0 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xf4 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xf8 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xfc + lVar6) = (float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x100 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x104 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x108 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x10c + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xe0 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar10);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xe4 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xe8 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar11);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xec + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x40 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x44 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x48 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x4c + lVar6) = (float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x110 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x114 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x118 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x11c + lVar6) = (float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x120 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x124 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x128 + lVar6) = (float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 300 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x130 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar12);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x134 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x138 + lVar6) = -(float)dVar8;
      dVar8 = cos(dVar13);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x13c + lVar6) = -(float)dVar8;
      _X_01 = dVar10 + dVar10;
      dVar8 = tan(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x70 + lVar6) = -(float)dVar8;
      dVar8 = tan(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x74 + lVar6) = (float)dVar8;
      _X_00 = dVar11 + dVar11;
      dVar8 = tan(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x78 + lVar6) = -(float)dVar8;
      dVar8 = tan(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x7c + lVar6) = (float)dVar8;
      _X = dVar12 + dVar12;
      dVar8 = tan(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x90 + lVar6) = -(float)dVar8;
      dVar8 = tan(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x94 + lVar6) = (float)dVar8;
      dVar8 = dVar13 + dVar13;
      dVar9 = tan(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x98 + lVar6) = -(float)dVar9;
      dVar9 = tan(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x9c + lVar6) = (float)dVar9;
      dVar9 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x60 + lVar6) = (float)dVar9;
      dVar9 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 100 + lVar6) = (float)dVar9;
      dVar9 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x68 + lVar6) = (float)dVar9;
      dVar9 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x6c + lVar6) = (float)dVar9;
      dVar9 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x140 + lVar6) = -(float)dVar9;
      dVar9 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x144 + lVar6) = -(float)dVar9;
      dVar9 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x148 + lVar6) = -(float)dVar9;
      dVar9 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x14c + lVar6) = -(float)dVar9;
      dVar9 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x80 + lVar6) = (float)dVar9;
      dVar9 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x84 + lVar6) = (float)dVar9;
      dVar9 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x88 + lVar6) = (float)dVar9;
      dVar9 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x8c + lVar6) = (float)dVar9;
      dVar9 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x150 + lVar6) = -(float)dVar9;
      dVar9 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x154 + lVar6) = -(float)dVar9;
      dVar9 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x158 + lVar6) = -(float)dVar9;
      dVar9 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x15c + lVar6) = -(float)dVar9;
      dVar9 = tan(dVar10 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xb0 + lVar6) = -(float)dVar9;
      dVar10 = tan(dVar10 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xb4 + lVar6) = (float)dVar10;
      dVar10 = tan(dVar11 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xb8 + lVar6) = -(float)dVar10;
      dVar11 = tan(dVar11 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xbc + lVar6) = (float)dVar11;
      dVar11 = tan(dVar12 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xd0 + lVar6) = -(float)dVar11;
      dVar12 = tan(dVar12 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xd4 + lVar6) = (float)dVar12;
      dVar12 = tan(dVar13 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xd8 + lVar6) = -(float)dVar12;
      dVar13 = tan(dVar13 * 3.0);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xdc + lVar6) = (float)dVar13;
      dVar13 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xa0 + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xa4 + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xa8 + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xac + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x160 + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_01);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x164 + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x168 + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X_00);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x16c + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xc0 + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xc4 + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 200 + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0xcc + lVar6) = (float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x170 + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(_X);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x174 + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x178 + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      dVar13 = cos(dVar8);
      *(float *)(*(longlong *)(param_1 + 0x30) + 0x17c + lVar6) = -(float)(dVar13 + dVar13 + -1.0);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x180;
    } while (uVar4 != uVar7);
  }
  return;
}



// FUNCTION 14703d9e8 FUN_14703d9e8 body=48 status=ok
// SIG undefined FUN_14703d9e8(void)

void FUN_14703d9e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,0x10);
  }
  return;
}



// FUNCTION 14703da18 FUN_14703da18 body=146 status=ok
// SIG undefined FUN_14703da18(void)

void FUN_14703da18(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14703daac FUN_14703daac body=48 status=ok
// SIG undefined FUN_14703daac(void)

void FUN_14703daac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14703dadc FUN_14703dadc body=132 status=ok
// SIG undefined FUN_14703dadc(void)

void FUN_14703dadc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14703db62 FUN_14703db62 body=48 status=ok
// SIG undefined FUN_14703db62(void)

void FUN_14703db62(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x180,0x10);
  }
  return;
}



// FUNCTION 14703db92 FUN_14703db92 body=147 status=ok
// SIG undefined FUN_14703db92(void)

void FUN_14703db92(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x180,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x180)) {
      uVar5 = uVar4 / 0x180 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x180,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14703dc26 FUN_14703dc26 body=702 status=ok
// SIG undefined FUN_14703dc26(void)

void FUN_14703dc26(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  
  if (param_3 + -3 != 0x1f) {
    bVar10 = (byte)(param_3 + -3);
    lVar11 = (longlong)(2 << (bVar10 & 0x1f));
    lVar14 = (longlong)(4 << (bVar10 & 0x1f));
    lVar16 = (longlong)(6 << (bVar10 & 0x1f));
    lVar17 = (longlong)(8 << (bVar10 & 0x1f));
    lVar15 = (longlong)(10 << (bVar10 & 0x1f));
    lVar13 = (longlong)(0xc << (bVar10 & 0x1f));
    lVar9 = (longlong)(0xe << (bVar10 & 0x1f));
    lVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + lVar12 * 8);
      pfVar2 = (float *)(param_1 + lVar11 * 4 + lVar12 * 8);
      pfVar8 = (float *)(param_1 + lVar14 * 4 + lVar12 * 8);
      pfVar3 = (float *)(param_1 + lVar16 * 4 + lVar12 * 8);
      pfVar4 = (float *)(param_1 + lVar17 * 4 + lVar12 * 8);
      pfVar5 = (float *)(param_1 + lVar15 * 4 + lVar12 * 8);
      pfVar6 = (float *)(param_1 + lVar13 * 4 + lVar12 * 8);
      pfVar7 = (float *)(param_1 + lVar9 * 4 + lVar12 * 8);
      fVar26 = *pfVar1 + *pfVar4;
      fVar27 = pfVar1[1] + pfVar4[1];
      fVar28 = pfVar1[2] + pfVar4[2];
      fVar29 = pfVar1[3] + pfVar4[3];
      fVar30 = *pfVar2 + *pfVar5;
      fVar31 = pfVar2[1] + pfVar5[1];
      fVar32 = pfVar2[2] + pfVar5[2];
      fVar33 = pfVar2[3] + pfVar5[3];
      fVar54 = *pfVar8 + *pfVar6;
      fVar55 = pfVar8[1] + pfVar6[1];
      fVar56 = pfVar8[2] + pfVar6[2];
      fVar57 = pfVar8[3] + pfVar6[3];
      fVar58 = *pfVar3 + *pfVar7;
      fVar59 = pfVar3[1] + pfVar7[1];
      fVar60 = pfVar3[2] + pfVar7[2];
      fVar61 = pfVar3[3] + pfVar7[3];
      fVar22 = *pfVar1 - *pfVar4;
      fVar23 = pfVar1[1] - pfVar4[1];
      fVar24 = pfVar1[2] - pfVar4[2];
      fVar25 = pfVar1[3] - pfVar4[3];
      fVar18 = *pfVar2 - *pfVar5;
      fVar19 = pfVar2[1] - pfVar5[1];
      fVar20 = pfVar2[2] - pfVar5[2];
      fVar21 = pfVar2[3] - pfVar5[3];
      fVar42 = (pfVar8[1] - pfVar6[1]) * -1.0;
      fVar43 = (*pfVar8 - *pfVar6) * 1.0;
      fVar44 = (pfVar8[3] - pfVar6[3]) * -1.0;
      fVar45 = (pfVar8[2] - pfVar6[2]) * 1.0;
      fVar38 = (pfVar3[1] - pfVar7[1]) * -1.0;
      fVar39 = (*pfVar3 - *pfVar7) * 1.0;
      fVar40 = (pfVar3[3] - pfVar7[3]) * -1.0;
      fVar41 = (pfVar3[2] - pfVar7[2]) * 1.0;
      fVar34 = fVar26 + fVar54;
      fVar35 = fVar27 + fVar55;
      fVar36 = fVar28 + fVar56;
      fVar37 = fVar29 + fVar57;
      fVar46 = fVar30 + fVar58;
      fVar47 = fVar31 + fVar59;
      fVar48 = fVar32 + fVar60;
      fVar49 = fVar33 + fVar61;
      fVar26 = fVar26 - fVar54;
      fVar27 = fVar27 - fVar55;
      fVar28 = fVar28 - fVar56;
      fVar29 = fVar29 - fVar57;
      fVar54 = fVar22 + fVar42;
      fVar55 = fVar23 + fVar43;
      fVar56 = fVar24 + fVar44;
      fVar57 = fVar25 + fVar45;
      fVar50 = fVar18 + fVar38;
      fVar51 = fVar19 + fVar39;
      fVar52 = fVar20 + fVar40;
      fVar53 = fVar21 + fVar41;
      fVar22 = fVar22 - fVar42;
      fVar23 = fVar23 - fVar43;
      fVar24 = fVar24 - fVar44;
      fVar25 = fVar25 - fVar45;
      fVar18 = fVar18 - fVar38;
      fVar19 = fVar19 - fVar39;
      fVar20 = fVar20 - fVar40;
      fVar21 = fVar21 - fVar41;
      fVar31 = (fVar31 - fVar59) * -1.0;
      fVar38 = (fVar30 - fVar58) * 1.0;
      fVar33 = (fVar33 - fVar61) * -1.0;
      fVar32 = (fVar32 - fVar60) * 1.0;
      fVar39 = (fVar51 * -1.0 + fVar50) * 0.70710677;
      fVar40 = (fVar50 * 1.0 + fVar51) * 0.70710677;
      fVar41 = (fVar53 * -1.0 + fVar52) * 0.70710677;
      fVar42 = (fVar52 * 1.0 + fVar53) * 0.70710677;
      fVar30 = (fVar18 * 1.0 + fVar19) * 1.0 * 0.70710677;
      fVar18 = (fVar19 * -1.0 + fVar18) * -1.0 * 0.70710677;
      fVar19 = (fVar20 * 1.0 + fVar21) * 1.0 * 0.70710677;
      fVar20 = (fVar21 * -1.0 + fVar20) * -1.0 * 0.70710677;
      pfVar1 = (float *)(param_2 + lVar12 * 8);
      *pfVar1 = fVar34 + fVar46;
      pfVar1[1] = fVar35 + fVar47;
      pfVar1[2] = fVar36 + fVar48;
      pfVar1[3] = fVar37 + fVar49;
      pfVar1 = (float *)(param_2 + lVar11 * 4 + lVar12 * 8);
      *pfVar1 = fVar34 - fVar46;
      pfVar1[1] = fVar35 - fVar47;
      pfVar1[2] = fVar36 - fVar48;
      pfVar1[3] = fVar37 - fVar49;
      pfVar1 = (float *)(param_2 + lVar14 * 4 + lVar12 * 8);
      *pfVar1 = fVar26 + fVar31;
      pfVar1[1] = fVar27 + fVar38;
      pfVar1[2] = fVar28 + fVar33;
      pfVar1[3] = fVar29 + fVar32;
      pfVar1 = (float *)(param_2 + lVar16 * 4 + lVar12 * 8);
      *pfVar1 = fVar26 - fVar31;
      pfVar1[1] = fVar27 - fVar38;
      pfVar1[2] = fVar28 - fVar33;
      pfVar1[3] = fVar29 - fVar32;
      pfVar1 = (float *)(param_2 + lVar17 * 4 + lVar12 * 8);
      *pfVar1 = fVar54 + fVar39;
      pfVar1[1] = fVar55 + fVar40;
      pfVar1[2] = fVar56 + fVar41;
      pfVar1[3] = fVar57 + fVar42;
      pfVar1 = (float *)(param_2 + lVar15 * 4 + lVar12 * 8);
      *pfVar1 = fVar54 - fVar39;
      pfVar1[1] = fVar55 - fVar40;
      pfVar1[2] = fVar56 - fVar41;
      pfVar1[3] = fVar57 - fVar42;
      pfVar1 = (float *)(param_2 + lVar13 * 4 + lVar12 * 8);
      *pfVar1 = fVar22 - fVar30;
      pfVar1[1] = fVar23 - fVar18;
      pfVar1[2] = fVar24 - fVar19;
      pfVar1[3] = fVar25 - fVar20;
      pfVar1 = (float *)(param_2 + lVar9 * 4 + lVar12 * 8);
      *pfVar1 = fVar30 + fVar22;
      pfVar1[1] = fVar18 + fVar23;
      pfVar1[2] = fVar19 + fVar24;
      pfVar1[3] = fVar20 + fVar25;
      lVar12 = lVar12 + 2;
    } while (lVar12 < 1 << (bVar10 & 0x1f));
  }
  return;
}



// FUNCTION 14703dee4 FUN_14703dee4 body=493 status=ok
// SIG undefined FUN_14703dee4(void)

void FUN_14703dee4(longlong param_1,int param_2,int param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
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
  byte bVar52;
  longlong lVar53;
  int iVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  if (param_3 + -2 != 0x1f) {
    fVar8 = *param_4;
    fVar9 = param_4[1];
    fVar10 = param_4[2];
    fVar11 = param_4[3];
    fVar12 = param_4[4];
    fVar13 = param_4[5];
    fVar14 = param_4[6];
    fVar15 = param_4[7];
    fVar16 = param_4[8];
    fVar17 = param_4[9];
    fVar18 = param_4[10];
    fVar19 = param_4[0xb];
    fVar20 = param_4[0xc];
    fVar21 = param_4[0xd];
    fVar22 = param_4[0xe];
    fVar23 = param_4[0xf];
    fVar24 = param_4[0x10];
    fVar25 = param_4[0x11];
    fVar26 = param_4[0x12];
    fVar27 = param_4[0x13];
    fVar28 = param_4[0x14];
    fVar29 = param_4[0x15];
    fVar30 = param_4[0x16];
    fVar31 = param_4[0x17];
    fVar32 = param_4[0x1c];
    fVar33 = param_4[0x1d];
    fVar34 = param_4[0x1e];
    fVar35 = param_4[0x1f];
    fVar36 = param_4[0x20];
    fVar37 = param_4[0x21];
    fVar38 = param_4[0x22];
    fVar39 = param_4[0x23];
    fVar40 = param_4[0x28];
    fVar41 = param_4[0x29];
    fVar42 = param_4[0x2a];
    fVar43 = param_4[0x2b];
    fVar44 = param_4[0x24];
    fVar45 = param_4[0x25];
    fVar46 = param_4[0x26];
    fVar47 = param_4[0x27];
    bVar52 = (byte)(param_3 + -2);
    iVar54 = 1 << (bVar52 & 0x1f);
    param_2 = param_2 << ((byte)param_3 & 0x1f);
    fVar48 = param_4[0x18];
    fVar49 = param_4[0x19];
    fVar50 = param_4[0x1a];
    fVar51 = param_4[0x1b];
    lVar1 = param_1 + (longlong)((3 << (bVar52 & 0x1f)) + param_2) * 8;
    lVar2 = param_1 + (longlong)((2 << (bVar52 & 0x1f)) + param_2) * 8;
    lVar3 = param_1 + (longlong)(iVar54 + param_2) * 8;
    param_1 = param_1 + (longlong)param_2 * 8;
    lVar53 = 0;
    do {
      pfVar4 = (float *)(param_1 + lVar53 * 8);
      pfVar5 = (float *)(lVar3 + lVar53 * 8);
      pfVar6 = (float *)(lVar2 + lVar53 * 8);
      pfVar7 = (float *)(lVar1 + lVar53 * 8);
      fVar63 = pfVar5[1] * fVar24 + *pfVar5;
      fVar64 = *pfVar5 * fVar25 + pfVar5[1];
      fVar65 = pfVar5[3] * fVar26 + pfVar5[2];
      fVar66 = pfVar5[2] * fVar27 + pfVar5[3];
      fVar55 = pfVar6[1] * fVar32 + *pfVar6;
      fVar56 = *pfVar6 * fVar33 + pfVar6[1];
      fVar57 = pfVar6[3] * fVar34 + pfVar6[2];
      fVar58 = pfVar6[2] * fVar35 + pfVar6[3];
      fVar59 = pfVar7[1] * fVar40 + *pfVar7;
      fVar60 = *pfVar7 * fVar41 + pfVar7[1];
      fVar61 = pfVar7[3] * fVar42 + pfVar7[2];
      fVar62 = pfVar7[2] * fVar43 + pfVar7[3];
      fVar71 = fVar28 * fVar55 + *pfVar4;
      fVar72 = fVar29 * fVar56 + pfVar4[1];
      fVar73 = fVar30 * fVar57 + pfVar4[2];
      fVar74 = fVar31 * fVar58 + pfVar4[3];
      fVar55 = fVar55 * fVar48 + *pfVar4;
      fVar56 = fVar56 * fVar49 + pfVar4[1];
      fVar57 = fVar57 * fVar50 + pfVar4[2];
      fVar58 = fVar58 * fVar51 + pfVar4[3];
      fVar67 = fVar36 * fVar59 + fVar63;
      fVar68 = fVar37 * fVar60 + fVar64;
      fVar69 = fVar38 * fVar61 + fVar65;
      fVar70 = fVar39 * fVar62 + fVar66;
      fVar63 = fVar59 * fVar44 + fVar63;
      fVar64 = fVar60 * fVar45 + fVar64;
      fVar65 = fVar61 * fVar46 + fVar65;
      fVar66 = fVar62 * fVar47 + fVar66;
      pfVar4 = (float *)(param_1 + lVar53 * 8);
      *pfVar4 = fVar8 * fVar67 + fVar71;
      pfVar4[1] = fVar9 * fVar68 + fVar72;
      pfVar4[2] = fVar10 * fVar69 + fVar73;
      pfVar4[3] = fVar11 * fVar70 + fVar74;
      pfVar4 = (float *)(lVar3 + lVar53 * 8);
      *pfVar4 = fVar67 * fVar12 + fVar71;
      pfVar4[1] = fVar68 * fVar13 + fVar72;
      pfVar4[2] = fVar69 * fVar14 + fVar73;
      pfVar4[3] = fVar70 * fVar15 + fVar74;
      pfVar4 = (float *)(lVar2 + lVar53 * 8);
      *pfVar4 = fVar16 * fVar64 + fVar55;
      pfVar4[1] = fVar17 * fVar63 + fVar56;
      pfVar4[2] = fVar18 * fVar66 + fVar57;
      pfVar4[3] = fVar19 * fVar65 + fVar58;
      pfVar4 = (float *)(lVar1 + lVar53 * 8);
      *pfVar4 = fVar64 * fVar20 + fVar55;
      pfVar4[1] = fVar63 * fVar21 + fVar56;
      pfVar4[2] = fVar66 * fVar22 + fVar57;
      pfVar4[3] = fVar65 * fVar23 + fVar58;
      lVar53 = lVar53 + 2;
    } while (lVar53 < iVar54);
  }
  return;
}



// FUNCTION 14703e0d2 FUN_14703e0d2 body=488 status=ok
// SIG undefined FUN_14703e0d2(void)

void FUN_14703e0d2(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
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
  bool bVar50;
  ulonglong uVar51;
  bool bVar52;
  longlong lVar53;
  ulonglong uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  if (param_3 != 0x1f) {
    uVar51 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar53 = uVar51 * 0xb0;
      pfVar1 = (float *)(lVar5 + lVar53);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x10 + lVar53);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x20 + lVar53);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x30 + lVar53);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x40 + lVar53);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x50 + lVar53);
      fVar26 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar28 = pfVar1[2];
      fVar29 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x70 + lVar53);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar32 = pfVar1[2];
      fVar33 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x80 + lVar53);
      fVar34 = *pfVar1;
      fVar35 = pfVar1[1];
      fVar36 = pfVar1[2];
      fVar37 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0xa0 + lVar53);
      fVar38 = *pfVar1;
      fVar39 = pfVar1[1];
      fVar40 = pfVar1[2];
      fVar41 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x90 + lVar53);
      fVar42 = *pfVar1;
      fVar43 = pfVar1[1];
      fVar44 = pfVar1[2];
      fVar45 = pfVar1[3];
      pfVar1 = (float *)(lVar5 + 0x60 + lVar53);
      fVar46 = *pfVar1;
      fVar47 = pfVar1[1];
      fVar48 = pfVar1[2];
      fVar49 = pfVar1[3];
      uVar54 = 0;
      bVar50 = true;
      do {
        bVar52 = bVar50;
        uVar54 = uVar54 | (longlong)((int)uVar51 << 5);
        pfVar1 = (float *)(param_2 + uVar54 * 4);
        pfVar2 = (float *)(param_2 + 0x20 + uVar54 * 4);
        pfVar3 = (float *)(param_2 + 0x40 + uVar54 * 4);
        pfVar4 = (float *)(param_2 + 0x60 + uVar54 * 4);
        fVar63 = pfVar2[1] * fVar22 + *pfVar2;
        fVar64 = *pfVar2 * fVar23 + pfVar2[1];
        fVar65 = pfVar2[3] * fVar24 + pfVar2[2];
        fVar66 = pfVar2[2] * fVar25 + pfVar2[3];
        fVar55 = pfVar3[1] * fVar30 + *pfVar3;
        fVar56 = *pfVar3 * fVar31 + pfVar3[1];
        fVar57 = pfVar3[3] * fVar32 + pfVar3[2];
        fVar58 = pfVar3[2] * fVar33 + pfVar3[3];
        fVar59 = pfVar4[1] * fVar38 + *pfVar4;
        fVar60 = *pfVar4 * fVar39 + pfVar4[1];
        fVar61 = pfVar4[3] * fVar40 + pfVar4[2];
        fVar62 = pfVar4[2] * fVar41 + pfVar4[3];
        fVar71 = fVar26 * fVar55 + *pfVar1;
        fVar72 = fVar27 * fVar56 + pfVar1[1];
        fVar73 = fVar28 * fVar57 + pfVar1[2];
        fVar74 = fVar29 * fVar58 + pfVar1[3];
        fVar55 = fVar55 * fVar46 + *pfVar1;
        fVar56 = fVar56 * fVar47 + pfVar1[1];
        fVar57 = fVar57 * fVar48 + pfVar1[2];
        fVar58 = fVar58 * fVar49 + pfVar1[3];
        fVar67 = fVar34 * fVar59 + fVar63;
        fVar68 = fVar35 * fVar60 + fVar64;
        fVar69 = fVar36 * fVar61 + fVar65;
        fVar70 = fVar37 * fVar62 + fVar66;
        fVar63 = fVar59 * fVar42 + fVar63;
        fVar64 = fVar60 * fVar43 + fVar64;
        fVar65 = fVar61 * fVar44 + fVar65;
        fVar66 = fVar62 * fVar45 + fVar66;
        pfVar1 = (float *)(param_2 + uVar54 * 4);
        *pfVar1 = fVar6 * fVar67 + fVar71;
        pfVar1[1] = fVar7 * fVar68 + fVar72;
        pfVar1[2] = fVar8 * fVar69 + fVar73;
        pfVar1[3] = fVar9 * fVar70 + fVar74;
        pfVar1 = (float *)(param_2 + 0x20 + uVar54 * 4);
        *pfVar1 = fVar67 * fVar10 + fVar71;
        pfVar1[1] = fVar68 * fVar11 + fVar72;
        pfVar1[2] = fVar69 * fVar12 + fVar73;
        pfVar1[3] = fVar70 * fVar13 + fVar74;
        pfVar1 = (float *)(param_2 + 0x40 + uVar54 * 4);
        *pfVar1 = fVar14 * fVar64 + fVar55;
        pfVar1[1] = fVar15 * fVar63 + fVar56;
        pfVar1[2] = fVar16 * fVar66 + fVar57;
        pfVar1[3] = fVar17 * fVar65 + fVar58;
        pfVar1 = (float *)(param_2 + 0x60 + uVar54 * 4);
        *pfVar1 = fVar64 * fVar18 + fVar55;
        pfVar1[1] = fVar63 * fVar19 + fVar56;
        pfVar1[2] = fVar66 * fVar20 + fVar57;
        pfVar1[3] = fVar65 * fVar21 + fVar58;
        uVar54 = 4;
        bVar50 = false;
      } while (bVar52);
      uVar51 = uVar51 + 1;
    } while (uVar51 != (uint)(1 << ((byte)param_3 & 0x1f)));
  }
  return;
}



// FUNCTION 14703e2ba FUN_14703e2ba body=903 status=ok
// SIG undefined FUN_14703e2ba(void)

void FUN_14703e2ba(longlong param_1,longlong param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [32];
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
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar11 = 1 << (param_3 & 0x1f);
  lVar13 = (longlong)iVar11;
  uVar12 = iVar11 >> 2;
  piVar7 = *(int **)(param_1 + 0x20);
  iVar11 = *piVar7;
  iVar8 = 4 << (param_3 & 0x1f);
  lVar4 = lVar13 + (longlong)iVar11 * 4;
  iVar9 = 3 << (param_3 & 0x1f);
  puVar1 = (undefined4 *)(param_2 + (longlong)iVar11 * 0x20);
  local_108 = *puVar1;
  uStack_104 = puVar1[1];
  local_e8 = puVar1[2];
  uStack_e4 = puVar1[3];
  puVar1 = (undefined4 *)(param_2 + (longlong)(iVar11 * 8 + 4) * 4);
  local_c8 = *puVar1;
  uStack_c4 = puVar1[1];
  local_a8 = puVar1[2];
  uStack_a4 = puVar1[3];
  lVar3 = (longlong)(iVar11 * 8 + iVar8);
  puVar1 = (undefined4 *)(param_2 + lVar3 * 4);
  uStack_100 = *puVar1;
  uStack_fc = puVar1[1];
  uStack_e0 = puVar1[2];
  uStack_dc = puVar1[3];
  puVar1 = (undefined4 *)(param_2 + 0x10 + lVar3 * 4);
  uStack_c0 = *puVar1;
  uStack_bc = puVar1[1];
  uStack_a0 = puVar1[2];
  uStack_9c = puVar1[3];
  puVar1 = (undefined4 *)(param_2 + lVar4 * 8);
  local_f8 = *puVar1;
  uStack_f4 = puVar1[1];
  local_d8 = puVar1[2];
  uStack_d4 = puVar1[3];
  puVar1 = (undefined4 *)(param_2 + 0x10 + lVar4 * 8);
  local_b8 = *puVar1;
  uStack_b4 = puVar1[1];
  local_98 = puVar1[2];
  uStack_94 = puVar1[3];
  lVar4 = (longlong)((iVar11 * 4 + iVar9) * 2);
  puVar1 = (undefined4 *)(param_2 + lVar4 * 4);
  uStack_f0 = *puVar1;
  uStack_ec = puVar1[1];
  uStack_d0 = puVar1[2];
  uStack_cc = puVar1[3];
  puVar1 = (undefined4 *)(param_2 + 0x10 + lVar4 * 4);
  uStack_b0 = *puVar1;
  uStack_ac = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  FUN_14703e642(&local_108,*(undefined8 *)(param_1 + 0x30),&local_188);
  uVar10 = 1;
  if (1 < (int)uVar12) {
    uVar10 = (ulonglong)uVar12;
    uVar6 = 1;
    lVar4 = 0x180;
    do {
      iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
      lVar3 = lVar13 + (longlong)iVar11 * 4;
      puVar1 = (undefined4 *)(param_2 + (longlong)iVar11 * 0x20);
      local_108 = *puVar1;
      uStack_104 = puVar1[1];
      local_e8 = puVar1[2];
      uStack_e4 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + (longlong)(iVar11 * 8 + 4) * 4);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      local_a8 = puVar1[2];
      uStack_a4 = puVar1[3];
      lVar5 = (longlong)(iVar11 * 8 + iVar8);
      puVar1 = (undefined4 *)(param_2 + lVar5 * 4);
      uStack_100 = *puVar1;
      uStack_fc = puVar1[1];
      uStack_e0 = puVar1[2];
      uStack_dc = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar5 * 4);
      uStack_c0 = *puVar1;
      uStack_bc = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + lVar3 * 8);
      local_f8 = *puVar1;
      uStack_f4 = puVar1[1];
      local_d8 = puVar1[2];
      uStack_d4 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar3 * 8);
      local_b8 = *puVar1;
      uStack_b4 = puVar1[1];
      local_98 = puVar1[2];
      uStack_94 = puVar1[3];
      lVar3 = (longlong)((iVar11 * 4 + iVar9) * 2);
      puVar1 = (undefined4 *)(param_2 + lVar3 * 4);
      uStack_f0 = *puVar1;
      uStack_ec = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar3 * 4);
      uStack_b0 = *puVar1;
      uStack_ac = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + -4 + uVar6 * 8);
      lVar3 = lVar13 + (longlong)iVar11 * 4;
      puVar2 = (undefined8 *)(param_2 + (longlong)iVar11 * 0x20);
      *puVar2 = local_188;
      puVar2[1] = uStack_180;
      puVar2 = (undefined8 *)(param_2 + (longlong)(iVar11 * 8 + 4) * 4);
      *puVar2 = local_178;
      puVar2[1] = uStack_170;
      lVar5 = (longlong)(iVar11 * 8 + iVar8);
      puVar2 = (undefined8 *)(param_2 + lVar5 * 4);
      *puVar2 = local_168;
      puVar2[1] = uStack_160;
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar5 * 4);
      *puVar2 = local_158;
      puVar2[1] = uStack_150;
      puVar2 = (undefined8 *)(param_2 + lVar3 * 8);
      *puVar2 = local_148;
      puVar2[1] = uStack_140;
      puVar2 = (undefined8 *)(param_2 + 0x10 + lVar3 * 8);
      *puVar2 = local_138;
      puVar2[1] = uStack_130;
      lVar3 = (longlong)((iVar11 * 4 + iVar9) * 2);
      puVar2 = (undefined8 *)(param_2 + lVar3 * 4);
      *puVar2 = local_128;
      puVar2[1] = uStack_120;
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar3 * 4);
      *puVar1 = local_118;
      puVar1[1] = uStack_114;
      puVar1[2] = uStack_110;
      puVar1[3] = uStack_10c;
      FUN_14703e642(&local_108,*(longlong *)(param_1 + 0x30) + lVar4,&local_188);
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x180;
    } while (uVar10 != uVar6);
    piVar7 = *(int **)(param_1 + 0x20);
  }
  iVar11 = piVar7[uVar10 * 2 + -1];
  lVar13 = lVar13 + (longlong)iVar11 * 4;
  puVar2 = (undefined8 *)(param_2 + (longlong)iVar11 * 0x20);
  *puVar2 = local_188;
  puVar2[1] = uStack_180;
  puVar2 = (undefined8 *)(param_2 + (longlong)(iVar11 * 8 + 4) * 4);
  *puVar2 = local_178;
  puVar2[1] = uStack_170;
  lVar4 = (longlong)(iVar11 * 8 + iVar8);
  puVar2 = (undefined8 *)(param_2 + lVar4 * 4);
  *puVar2 = local_168;
  puVar2[1] = uStack_160;
  puVar2 = (undefined8 *)(param_2 + 0x10 + lVar4 * 4);
  *puVar2 = local_158;
  puVar2[1] = uStack_150;
  puVar2 = (undefined8 *)(param_2 + lVar13 * 8);
  *puVar2 = local_148;
  puVar2[1] = uStack_140;
  puVar2 = (undefined8 *)(param_2 + 0x10 + lVar13 * 8);
  *puVar2 = local_138;
  puVar2[1] = uStack_130;
  lVar4 = (longlong)((iVar11 * 4 + iVar9) * 2);
  puVar2 = (undefined8 *)(param_2 + lVar4 * 4);
  *puVar2 = local_128;
  puVar2[1] = uStack_120;
  puVar1 = (undefined4 *)(param_2 + 0x10 + lVar4 * 4);
  *puVar1 = local_118;
  puVar1[1] = uStack_114;
  puVar1[2] = uStack_110;
  puVar1[3] = uStack_10c;
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703e642 FUN_14703e642 body=495 status=ok
// SIG undefined FUN_14703e642(void)

void FUN_14703e642(float *param_1,longlong param_2,float *param_3)

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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  
  fVar40 = param_1[9] * *(float *)(param_2 + 0x30) + param_1[8];
  fVar41 = param_1[8] * *(float *)(param_2 + 0x34) + param_1[9];
  fVar42 = param_1[0xb] * *(float *)(param_2 + 0x38) + param_1[10];
  fVar43 = param_1[10] * *(float *)(param_2 + 0x3c) + param_1[0xb];
  fVar44 = param_1[0xd] * *(float *)(param_2 + 0x50) + param_1[0xc];
  fVar45 = param_1[0xc] * *(float *)(param_2 + 0x54) + param_1[0xd];
  fVar46 = param_1[0xf] * *(float *)(param_2 + 0x58) + param_1[0xe];
  fVar47 = param_1[0xe] * *(float *)(param_2 + 0x5c) + param_1[0xf];
  fVar16 = param_1[0x11] * *(float *)(param_2 + 0x70) + param_1[0x10];
  fVar18 = param_1[0x10] * *(float *)(param_2 + 0x74) + param_1[0x11];
  fVar20 = param_1[0x13] * *(float *)(param_2 + 0x78) + param_1[0x12];
  fVar22 = param_1[0x12] * *(float *)(param_2 + 0x7c) + param_1[0x13];
  fVar24 = param_1[0x15] * *(float *)(param_2 + 0x90) + param_1[0x14];
  fVar26 = param_1[0x14] * *(float *)(param_2 + 0x94) + param_1[0x15];
  fVar28 = param_1[0x17] * *(float *)(param_2 + 0x98) + param_1[0x16];
  fVar30 = param_1[0x16] * *(float *)(param_2 + 0x9c) + param_1[0x17];
  fVar32 = param_1[0x19] * *(float *)(param_2 + 0xb0) + param_1[0x18];
  fVar33 = param_1[0x18] * *(float *)(param_2 + 0xb4) + param_1[0x19];
  fVar34 = param_1[0x1b] * *(float *)(param_2 + 0xb8) + param_1[0x1a];
  fVar35 = param_1[0x1a] * *(float *)(param_2 + 0xbc) + param_1[0x1b];
  fVar36 = param_1[0x1d] * *(float *)(param_2 + 0xd0) + param_1[0x1c];
  fVar37 = param_1[0x1c] * *(float *)(param_2 + 0xd4) + param_1[0x1d];
  fVar38 = param_1[0x1f] * *(float *)(param_2 + 0xd8) + param_1[0x1e];
  fVar39 = param_1[0x1e] * *(float *)(param_2 + 0xdc) + param_1[0x1f];
  fVar48 = *(float *)(param_2 + 0x60) * fVar16 + *param_1;
  fVar49 = *(float *)(param_2 + 100) * fVar18 + param_1[1];
  fVar50 = *(float *)(param_2 + 0x68) * fVar20 + param_1[2];
  fVar51 = *(float *)(param_2 + 0x6c) * fVar22 + param_1[3];
  fVar52 = *(float *)(param_2 + 0x80) * fVar24 + param_1[4];
  fVar53 = *(float *)(param_2 + 0x84) * fVar26 + param_1[5];
  fVar54 = *(float *)(param_2 + 0x88) * fVar28 + param_1[6];
  fVar55 = *(float *)(param_2 + 0x8c) * fVar30 + param_1[7];
  fVar56 = *(float *)(param_2 + 0xa0) * fVar32 + fVar40;
  fVar57 = *(float *)(param_2 + 0xa4) * fVar33 + fVar41;
  fVar58 = *(float *)(param_2 + 0xa8) * fVar34 + fVar42;
  fVar59 = *(float *)(param_2 + 0xac) * fVar35 + fVar43;
  fVar60 = *(float *)(param_2 + 0xc0) * fVar36 + fVar44;
  fVar61 = *(float *)(param_2 + 0xc4) * fVar37 + fVar45;
  fVar62 = *(float *)(param_2 + 200) * fVar38 + fVar46;
  fVar63 = *(float *)(param_2 + 0xcc) * fVar39 + fVar47;
  fVar17 = fVar16 * *(float *)(param_2 + 0x140) + *param_1;
  fVar19 = fVar18 * *(float *)(param_2 + 0x144) + param_1[1];
  fVar21 = fVar20 * *(float *)(param_2 + 0x148) + param_1[2];
  fVar23 = fVar22 * *(float *)(param_2 + 0x14c) + param_1[3];
  fVar25 = fVar24 * *(float *)(param_2 + 0x150) + param_1[4];
  fVar27 = fVar26 * *(float *)(param_2 + 0x154) + param_1[5];
  fVar29 = fVar28 * *(float *)(param_2 + 0x158) + param_1[6];
  fVar31 = fVar30 * *(float *)(param_2 + 0x15c) + param_1[7];
  fVar40 = fVar32 * *(float *)(param_2 + 0x160) + fVar40;
  fVar41 = fVar33 * *(float *)(param_2 + 0x164) + fVar41;
  fVar42 = fVar34 * *(float *)(param_2 + 0x168) + fVar42;
  fVar43 = fVar35 * *(float *)(param_2 + 0x16c) + fVar43;
  fVar44 = fVar36 * *(float *)(param_2 + 0x170) + fVar44;
  fVar45 = fVar37 * *(float *)(param_2 + 0x174) + fVar45;
  fVar46 = fVar38 * *(float *)(param_2 + 0x178) + fVar46;
  fVar47 = fVar39 * *(float *)(param_2 + 0x17c) + fVar47;
  fVar16 = *(float *)(param_2 + 0x24);
  fVar18 = *(float *)(param_2 + 0x28);
  fVar20 = *(float *)(param_2 + 0x2c);
  fVar22 = *(float *)(param_2 + 0x40);
  fVar24 = *(float *)(param_2 + 0x44);
  fVar26 = *(float *)(param_2 + 0x48);
  fVar28 = *(float *)(param_2 + 0x4c);
  fVar30 = *(float *)(param_2 + 0xe0);
  fVar32 = *(float *)(param_2 + 0xe4);
  fVar33 = *(float *)(param_2 + 0xe8);
  fVar34 = *(float *)(param_2 + 0xec);
  fVar35 = *(float *)(param_2 + 0x130);
  fVar36 = *(float *)(param_2 + 0x134);
  fVar37 = *(float *)(param_2 + 0x138);
  fVar38 = *(float *)(param_2 + 0x13c);
  fVar39 = *(float *)(param_2 + 0xf0);
  fVar1 = *(float *)(param_2 + 0xf4);
  fVar2 = *(float *)(param_2 + 0xf8);
  fVar3 = *(float *)(param_2 + 0xfc);
  fVar4 = *(float *)(param_2 + 0x110);
  fVar5 = *(float *)(param_2 + 0x114);
  fVar6 = *(float *)(param_2 + 0x118);
  fVar7 = *(float *)(param_2 + 0x11c);
  fVar8 = *(float *)(param_2 + 0x100);
  fVar9 = *(float *)(param_2 + 0x104);
  fVar10 = *(float *)(param_2 + 0x108);
  fVar11 = *(float *)(param_2 + 0x10c);
  fVar12 = *(float *)(param_2 + 0x120);
  fVar13 = *(float *)(param_2 + 0x124);
  fVar14 = *(float *)(param_2 + 0x128);
  fVar15 = *(float *)(param_2 + 300);
  *param_3 = *(float *)(param_2 + 0x20) * fVar56 + fVar48;
  param_3[1] = fVar16 * fVar57 + fVar49;
  param_3[2] = fVar18 * fVar58 + fVar50;
  param_3[3] = fVar20 * fVar59 + fVar51;
  param_3[4] = fVar22 * fVar60 + fVar52;
  param_3[5] = fVar24 * fVar61 + fVar53;
  param_3[6] = fVar26 * fVar62 + fVar54;
  param_3[7] = fVar28 * fVar63 + fVar55;
  param_3[8] = fVar56 * fVar30 + fVar48;
  param_3[9] = fVar57 * fVar32 + fVar49;
  param_3[10] = fVar58 * fVar33 + fVar50;
  param_3[0xb] = fVar59 * fVar34 + fVar51;
  param_3[0xc] = fVar60 * fVar35 + fVar52;
  param_3[0xd] = fVar61 * fVar36 + fVar53;
  param_3[0xe] = fVar62 * fVar37 + fVar54;
  param_3[0xf] = fVar63 * fVar38 + fVar55;
  param_3[0x10] = fVar39 * fVar41 + fVar17;
  param_3[0x11] = fVar1 * fVar40 + fVar19;
  param_3[0x12] = fVar2 * fVar43 + fVar21;
  param_3[0x13] = fVar3 * fVar42 + fVar23;
  param_3[0x14] = fVar4 * fVar45 + fVar25;
  param_3[0x15] = fVar5 * fVar44 + fVar27;
  param_3[0x16] = fVar6 * fVar47 + fVar29;
  param_3[0x17] = fVar7 * fVar46 + fVar31;
  param_3[0x18] = fVar41 * fVar8 + fVar17;
  param_3[0x19] = fVar40 * fVar9 + fVar19;
  param_3[0x1a] = fVar43 * fVar10 + fVar21;
  param_3[0x1b] = fVar42 * fVar11 + fVar23;
  param_3[0x1c] = fVar45 * fVar12 + fVar25;
  param_3[0x1d] = fVar44 * fVar13 + fVar27;
  param_3[0x1e] = fVar47 * fVar14 + fVar29;
  param_3[0x1f] = fVar46 * fVar15 + fVar31;
  return;
}



// FUNCTION 14703e832 FUN_14703e832 body=42 status=ok
// SIG undefined FUN_14703e832(void)

void FUN_14703e832(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140ca8596();
    return;
  }
  return;
}



// FUNCTION 14703e85e FUN_14703e85e body=106 status=ok
// SIG undefined FUN_14703e85e(void)

void FUN_14703e85e(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 2) = param_2 + 1;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 0;
  UNLOCK();
  iVar3 = 0;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_140389cc2(param_1);
    iVar3 = (int)param_1[1];
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 1) = uVar1 + iVar3;
  if ((uint)(iVar2 - iVar3) < uVar1) {
    FUN_1400ef140(param_1);
  }
  memset((void *)((longlong)iVar3 + *param_1),0,(longlong)(int)uVar1);
  return;
}



// FUNCTION 14703e8c8 FUN_14703e8c8 body=71 status=ok
// SIG undefined FUN_14703e8c8(void)

void FUN_14703e8c8(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      FUN_14702d90a(lVar1);
      thunk_FUN_1400020a8(lVar1,0x48);
    }
    thunk_FUN_1400020a8(param_1,0x20);
    return;
  }
  return;
}



// FUNCTION 14703e910 FUN_14703e910 body=136 status=ok
// SIG undefined FUN_14703e910(void)

void FUN_14703e910(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c99e3a0;
  if (DAT_14c99e3d4 != 0) {
    *(int *)(DAT_14c99e3a0 + (longlong)DAT_14c99e3d0 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c99e3d4) {
    iVar4 = DAT_14c99e3d0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x30) = iVar4;
  DAT_14c99e3d4 = DAT_14c99e3d4 + 1;
  puVar3 = &DAT_14c99e3b0;
  if (DAT_14c99e3c0 != (undefined4 *)0x0) {
    puVar3 = DAT_14c99e3c0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c99e3d0 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14703e998 FUN_14703e998 body=180 status=ok
// SIG undefined FUN_14703e998(void)

undefined8 * FUN_14703e998(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_14a136b70;
  uVar1 = *param_2;
  uVar2 = *param_1;
  puVar4[2] = &PTR_FUN_14a1368b0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  FUN_147034b3a(puVar4 + 3,uVar2);
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = uVar1;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar1;
  LOCK();
  UNLOCK();
  iVar3 = DAT_14c99e400 + 1;
  DAT_14c99e400 = DAT_14c99e400 + 1;
  *(int *)(puVar4 + 10) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
  puVar4[0xb] = 0;
  return puVar4;
}



// FUNCTION 14703ea4c FUN_14703ea4c body=9 status=ok
// SIG undefined FUN_14703ea4c(void)

void FUN_14703ea4c(longlong param_1)

{
  FUN_147037ff4(param_1 + 0x10);
  return;
}



// FUNCTION 14703ea56 FUN_14703ea56 body=34 status=ok
// SIG undefined FUN_14703ea56(void)

undefined8 FUN_14703ea56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14703ea78 FUN_14703ea78 body=132 status=ok
// SIG undefined FUN_14703ea78(void)

void FUN_14703ea78(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14703eafe FUN_14703eafe body=96 status=ok
// SIG undefined FUN_14703eafe(void)

void FUN_14703eafe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14703eb5e FUN_14703eb5e body=136 status=ok
// SIG undefined FUN_14703eb5e(void)

void FUN_14703eb5e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14703ebe6 FUN_14703ebe6 body=62 status=ok
// SIG undefined FUN_14703ebe6(void)

void FUN_14703ebe6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14703ec24(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14703ec24 FUN_14703ec24 body=93 status=ok
// SIG undefined FUN_14703ec24(void)

ulonglong FUN_14703ec24(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14703ec81 FUN_14703ec81 body=180 status=ok
// SIG undefined FUN_14703ec81(void)

undefined8 * FUN_14703ec81(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_14a136b70;
  uVar1 = *param_2;
  uVar2 = *param_1;
  puVar4[2] = &PTR_FUN_14a1368b0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  FUN_147034b3a(puVar4 + 3,uVar2);
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = uVar1;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar1;
  LOCK();
  UNLOCK();
  iVar3 = DAT_14c99e400 + 1;
  DAT_14c99e400 = DAT_14c99e400 + 1;
  *(int *)(puVar4 + 10) = iVar3;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
  puVar4[0xb] = 0;
  return puVar4;
}



// FUNCTION 14703ed36 FUN_14703ed36 body=147 status=ok
// SIG undefined FUN_14703ed36(void)

void FUN_14703ed36(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14703edca FUN_14703edca body=106 status=ok
// SIG undefined FUN_14703edca(void)

void FUN_14703edca(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
  FUN_145be9032(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14703ee34 FUN_14703ee34 body=36 status=ok
// SIG undefined FUN_14703ee34(void)

undefined8 FUN_14703ee34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14703ee74 FUN_14703ee74 body=93 status=ok
// SIG undefined FUN_14703ee74(void)

void FUN_14703ee74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a136b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14703eed2 FUN_14703eed2 body=123 status=ok
// SIG undefined FUN_14703eed2(void)

void FUN_14703eed2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a136b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14703ef4e FUN_14703ef4e body=21 status=ok
// SIG undefined FUN_14703ef4e(void)

undefined8 FUN_14703ef4e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14703ef64 FUN_14703ef64 body=34 status=ok
// SIG undefined FUN_14703ef64(void)

undefined8 FUN_14703ef64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14703ef86 FUN_14703ef86 body=43 status=ok
// SIG undefined FUN_14703ef86(void)

undefined8 FUN_14703ef86(undefined8 param_1,int param_2)

{
  FUN_145a5ed9c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14703efb2 FUN_14703efb2 body=137 status=ok
// SIG undefined FUN_14703efb2(void)

void FUN_14703efb2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  *param_1 = &PTR_FUN_14a136ca0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x400473b8000;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
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
  *(undefined1 *)(param_1 + 0x12) = 0;
  fVar2 = 0.001;
  if (0.001 <= *(float *)(param_1 + 3)) {
    fVar2 = *(float *)(param_1 + 3);
  }
  *(float *)(param_1 + 0x11) = 0.9 / fVar2;
  fVar2 = 0.001;
  if (0.001 <= *(float *)((longlong)param_1 + 0x14)) {
    fVar2 = *(float *)((longlong)param_1 + 0x14);
  }
  *(float *)((longlong)param_1 + 0x8c) = 0.9 / fVar2;
  return;
}



// FUNCTION 14703f03c FUN_14703f03c body=43 status=ok
// SIG undefined FUN_14703f03c(void)

undefined8 FUN_14703f03c(undefined8 param_1,int param_2)

{
  FUN_14703f540();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14703f102 FUN_14703f102 body=132 status=ok
// SIG undefined FUN_14703f102(void)

void FUN_14703f102(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_14703f946(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_14703f976(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_14703f9a6(param_1 + 0x60);
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  FUN_14703f5b0(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_14703f9d6(param_1 + 0x70);
    return;
  }
  return;
}



// FUNCTION 14703f1cc FUN_14703f1cc body=882 status=ok
// SIG undefined FUN_14703f1cc(void)

void FUN_14703f1cc(longlong *param_1,undefined8 *param_2,double param_3,longlong *param_4)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = *(uint *)(param_2 + 1);
  dVar1 = (double)param_1[5];
  param_1[5] = (longlong)param_3;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14482f6fa(param_4);
  }
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  iVar2 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < uVar3) {
    FUN_14475e4ac(param_4);
  }
  iVar11 = 0;
  memset((void *)((longlong)iVar2 * 4 + *param_4),0,(longlong)(int)uVar3 << 2);
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    FUN_1470345fa(param_1 + 6,0);
    iVar11 = (int)param_1[7];
  }
  local_58 = iVar11;
  if (1 < (int)uVar10) {
    uVar10 = uVar10 >> 1;
    local_58 = iVar11 + uVar10;
    *(int *)(param_1 + 7) = local_58;
    if ((uint)(*(int *)((longlong)param_1 + 0x3c) - iVar11) < uVar10) {
      FUN_145ca0cd4(param_1 + 6,iVar11);
      local_58 = (int)param_1[7];
    }
  }
  local_60 = param_1[6];
  local_70 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 1);
  FUN_142af4188();
  lVar4 = *param_4;
  lVar8 = param_1[6];
  uVar7 = (undefined4)param_1[7];
  if ((longlong)(int)param_1[9] != 0) {
    plVar13 = (longlong *)param_1[8];
    plVar12 = plVar13 + (longlong)(int)param_1[9] * 5;
    do {
      fVar14 = (float)(**(code **)(*plVar13 + 0x10))(plVar13,lVar8,uVar7);
      *(float *)(lVar4 + (longlong)*(int *)((longlong)plVar13 + 0x14) * 4) =
           fVar14 * *(float *)(plVar13 + 3);
      plVar13 = plVar13 + 5;
    } while (plVar13 != plVar12);
    lVar4 = *param_4;
    lVar8 = param_1[6];
    uVar7 = (undefined4)param_1[7];
  }
  if ((longlong)(int)param_1[0xb] != 0) {
    plVar12 = (longlong *)param_1[10];
    plVar13 = plVar12 + (longlong)(int)param_1[0xb] * 6;
    do {
      fVar14 = (float)(**(code **)(*plVar12 + 0x10))(plVar12,lVar8,uVar7);
      *(float *)(lVar4 + (longlong)*(int *)((longlong)plVar12 + 0x14) * 4) =
           fVar14 * *(float *)(plVar12 + 3);
      plVar12 = plVar12 + 6;
    } while (plVar12 != plVar13);
    lVar4 = *param_4;
    lVar8 = param_1[6];
    uVar7 = (undefined4)param_1[7];
  }
  if ((longlong)(int)param_1[0xd] != 0) {
    plVar12 = (longlong *)param_1[0xc];
    plVar13 = plVar12 + (longlong)(int)param_1[0xd] * 7;
    do {
      fVar14 = (float)(**(code **)(*plVar12 + 0x10))(plVar12,lVar8,uVar7);
      *(float *)(lVar4 + (longlong)*(int *)((longlong)plVar12 + 0x14) * 4) =
           fVar14 * *(float *)(plVar12 + 3);
      plVar12 = plVar12 + 7;
    } while (plVar12 != plVar13);
    lVar4 = *param_4;
    lVar8 = param_1[6];
    uVar7 = (undefined4)param_1[7];
  }
  if ((longlong)(int)param_1[0xf] != 0) {
    plVar13 = (longlong *)param_1[0xe];
    plVar12 = plVar13 + (longlong)(int)param_1[0xf] * 9;
    do {
      fVar14 = (float)(**(code **)(*plVar13 + 0x10))(plVar13,lVar8,uVar7);
      *(float *)(lVar4 + (longlong)*(int *)((longlong)plVar13 + 0x14) * 4) =
           fVar14 * *(float *)(plVar13 + 3);
      plVar13 = plVar13 + 9;
    } while (plVar13 != plVar12);
  }
  FUN_1470404ee(param_1,param_4);
  if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
    fVar14 = 0.0;
    if (0.0 <= (float)(param_3 - dVar1)) {
      fVar14 = (float)(param_3 - dVar1);
    }
    FUN_14704055e(param_1,param_4);
    lVar4 = (longlong)(int)param_4[1];
    fVar15 = 0.0;
    fVar16 = 0.0;
    if (lVar4 != 0) {
      pfVar6 = (float *)*param_4;
      lVar8 = lVar4 * 4;
      pfVar5 = (float *)0x0;
      pfVar9 = pfVar6;
      do {
        if ((pfVar5 == (float *)0x0) || (*pfVar9 <= *pfVar5 && *pfVar5 != *pfVar9)) {
          pfVar5 = pfVar9;
        }
        pfVar9 = pfVar9 + 1;
        lVar8 = lVar8 + -4;
      } while (lVar8 != 0);
      lVar4 = lVar4 << 2;
      pfVar9 = (float *)0x0;
      do {
        if ((pfVar9 == (float *)0x0) || (*pfVar9 <= *pfVar6 && *pfVar6 != *pfVar9)) {
          pfVar9 = pfVar6;
        }
        pfVar6 = pfVar6 + 1;
        lVar4 = lVar4 + -4;
      } while (lVar4 != 0);
      fVar16 = 0.0;
      fVar15 = 0.0;
      if (pfVar5 != (float *)0x0) {
        fVar15 = *pfVar5;
      }
      if (pfVar9 != (float *)0x0) {
        fVar16 = *pfVar9;
      }
    }
    FUN_147040668(param_1 + 0x10,fVar15,fVar16,fVar14);
    local_80 = *param_4;
    local_78 = (undefined4)param_4[1];
    FUN_14704070e(param_1 + 0x10);
  }
  else if ((char)param_1[2] == '\x01') {
    FUN_14704055e(param_1,param_4);
    local_90 = *param_4;
    local_88 = (undefined4)param_4[1];
    FUN_142af4134(&local_90,0,0x3f800000);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14703f540 FUN_14703f540 body=112 status=ok
// SIG undefined FUN_14703f540(void)

void FUN_14703f540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a136ca0;
  FUN_14703f5b0(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14703f5b0 FUN_14703f5b0 body=70 status=ok
// SIG undefined FUN_14703f5b0(void)

void FUN_14703f5b0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a136ce0;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 14703f5f6 FUN_14703f5f6 body=76 status=ok
// SIG undefined FUN_14703f5f6(void)

undefined8 * FUN_14703f5f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a136ce0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14703f642 FUN_14703f642 body=253 status=ok
// SIG undefined FUN_14703f642(void)

void FUN_14703f642(longlong param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_68 [44];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14703f808();
  local_3c = *(float *)(param_1 + 0xc);
  fVar3 = 1e-08;
  if (1e-08 <= *(float *)(param_1 + 0x10)) {
    fVar3 = *(float *)(param_1 + 0x10);
  }
  local_38 = 1e-08;
  if (1e-08 <= local_3c / fVar3) {
    local_38 = local_3c / fVar3;
  }
  local_34 = param_3[1];
  local_30 = 1.0;
  if (1.0 <= *param_3) {
    local_30 = *param_3;
  }
  local_2c = 2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_1470345fa(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_1470345fa(param_1 + 0x38,0);
  }
  FUN_14702ffb2(&local_3c,param_1 + 0x28,param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x44) - iVar2) < uVar1) {
      FUN_145ca0cd4(param_1 + 0x38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703f740 FUN_14703f740 body=198 status=ok
// SIG undefined FUN_14703f740(void)

void FUN_14703f740(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)param_3 <= (int)*(uint *)(param_1 + 0x20)) {
    uVar1 = param_3;
  }
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = (ulonglong)uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar3 = 0;
  if (((int)(uVar1 + (int)uVar2) <= (int)param_3) && (local_14 = 0, 0 < (int)uVar1)) {
    memcpy(*(void **)(param_1 + 0x38),(void *)(param_2 + uVar2 * 4),(ulonglong)uVar1 << 2);
    local_28 = *(undefined8 *)(param_1 + 0x38);
    local_20 = *(undefined4 *)(param_1 + 0x40);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    local_30 = *(undefined4 *)(param_1 + 0x30);
    FUN_142af1da7();
    local_48 = *(undefined8 *)(param_1 + 0x38);
    local_40 = *(undefined4 *)(param_1 + 0x40);
    FUN_142af27a7(&local_48,&local_14);
    uVar3 = local_14;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 14703f808 FUN_14703f808 body=50 status=ok
// SIG undefined FUN_14703f808(void)

void FUN_14703f808(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  uVar1 = *(byte *)(param_3 + 8) - 1;
  if (uVar1 < 4) {
    fVar2 = (float)*(int *)(param_3 + 4);
    if (fVar2 <= 1.0) {
      fVar2 = 1.0;
    }
                    /* WARNING: Could not emulate address calculation at 0x00014703f830 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_14a136e04 + *(int *)(&DAT_14a136e04 + (ulonglong)uVar1 * 4)))(fVar2);
    return;
  }
  return;
}



// FUNCTION 14703f858 FUN_14703f858 body=238 status=ok
// SIG undefined FUN_14703f858(void)

void FUN_14703f858(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x40);
    lVar2 = (longlong)*(int *)(param_1 + 0x48) * 0x28;
    do {
      (**(code **)(*plVar1 + 8))(plVar1,param_1 + 8,param_1 + 0x1c);
      plVar1 = plVar1 + 5;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x50);
    lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x30;
    do {
      (**(code **)(*plVar1 + 8))(plVar1,param_1 + 8,param_1 + 0x1c);
      plVar1 = plVar1 + 6;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x60);
    lVar2 = (longlong)*(int *)(param_1 + 0x68) * 0x38;
    do {
      (**(code **)(*plVar1 + 8))(plVar1,param_1 + 8,param_1 + 0x1c);
      plVar1 = plVar1 + 7;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x70);
    lVar2 = (longlong)*(int *)(param_1 + 0x78) * 0x48;
    do {
      (**(code **)(*plVar1 + 8))(plVar1,param_1 + 8,param_1 + 0x1c);
      plVar1 = plVar1 + 9;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14703f946 FUN_14703f946 body=48 status=ok
// SIG undefined FUN_14703f946(void)

void FUN_14703f946(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14703f976 FUN_14703f976 body=48 status=ok
// SIG undefined FUN_14703f976(void)

void FUN_14703f976(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14703f9a6 FUN_14703f9a6 body=48 status=ok
// SIG undefined FUN_14703f9a6(void)

void FUN_14703f9a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14703f9d6 FUN_14703f9d6 body=48 status=ok
// SIG undefined FUN_14703f9d6(void)

void FUN_14703f9d6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 14703fa06 FUN_14703fa06 body=332 status=ok
// SIG undefined FUN_14703fa06(void)

void FUN_14703fa06(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  
  uVar5 = (**(code **)(*param_1 + 0x20))();
  lVar4 = param_1[4];
  uVar6 = *(byte *)((longlong)param_1 + 0x24) - 1;
  if (uVar6 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00014703fa6c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_14a136e14 + *(int *)(&DAT_14a136e14 + (ulonglong)uVar6 * 4)))();
    return;
  }
  uVar3 = *param_3;
  fVar1 = (float)param_3[1];
  uVar2 = param_3[2];
  fVar10 = *(float *)((longlong)param_1 + 0x1c);
  iVar8 = (int)param_2[1];
  lVar9 = (longlong)iVar8;
  *(uint *)(param_2 + 1) = iVar8 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
    FUN_147040022(param_2,iVar8);
  }
  if (fVar10 <= 1.0) {
    fVar10 = 1.0;
  }
  fVar10 = (fVar1 / fVar10) * (float)(int)lVar4;
  iVar7 = (int)ROUND(fVar10 + fVar10 + 0.5) >> 1;
  iVar8 = (int)lVar4 / 2;
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    iVar7 = iVar8;
  }
  lVar4 = *param_2;
  *(undefined4 *)(lVar4 + 8 + lVar9 * 0x28) = uVar3;
  *(float *)(lVar4 + 0xc + lVar9 * 0x28) = fVar1;
  *(undefined4 *)(lVar4 + 0x10 + lVar9 * 0x28) = uVar2;
  *(undefined4 *)(lVar4 + 0x14 + lVar9 * 0x28) = uVar5;
  *(undefined4 *)(lVar4 + 0x18 + lVar9 * 0x28) = 0x3f800000;
  *(undefined ***)(lVar4 + lVar9 * 0x28) = &PTR_FUN_14a136d00;
  *(int *)(lVar4 + 0x20 + lVar9 * 0x28) = iVar7;
  return;
}



// FUNCTION 14703fb6e FUN_14703fb6e body=269 status=ok
// SIG undefined FUN_14703fb6e(void)

void FUN_14703fb6e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = (**(code **)(*param_1 + 0x20))();
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = *param_3;
  uVar3 = *(byte *)((longlong)param_1 + 0x24) - 1;
  if (uVar3 < 4) {
    fVar5 = (float)(int)param_1[4];
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
                    /* WARNING: Could not emulate address calculation at 0x00014703fbcf */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_14a136e24 + *(int *)(&DAT_14a136e24 + (ulonglong)uVar3 * 4)))(fVar5);
    return;
  }
  uStack_40 = 0x3f800000;
  local_58 = &PTR_FUN_14a136d40;
  FUN_1470400b6(&local_58);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1470401b0(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = local_48;
  *(undefined8 *)(lVar2 + 8 + lVar4) = local_50;
  *(ulonglong *)(lVar2 + 0x14 + lVar4) = CONCAT44(uStack_40,local_44);
  *(undefined ***)(lVar2 + lVar4) = &PTR_FUN_14a136d40;
  *(undefined4 *)(lVar2 + 0x28 + lVar4) = local_30;
  *(undefined8 *)(lVar2 + 0x20 + lVar4) = local_38;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703fc98 FUN_14703fc98 body=267 status=ok
// SIG undefined FUN_14703fc98(void)

void FUN_14703fc98(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (**(code **)(*param_1 + 0x20))();
  local_50 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_3;
  uVar4 = *(byte *)((longlong)param_1 + 0x24) - 1;
  if (uVar4 < 4) {
    fVar6 = (float)(int)param_1[4];
    if (fVar6 <= 1.0) {
      fVar6 = 1.0;
    }
                    /* WARNING: Could not emulate address calculation at 0x00014703fcf9 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_14a136e34 + *(int *)(&DAT_14a136e34 + (ulonglong)uVar4 * 4)))(fVar6);
    return;
  }
  uStack_48 = 0x3f800000;
  local_60 = &PTR_FUN_14a136d60;
  FUN_147040244(&local_60);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1470403ca(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar2 * 0x38;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_58;
  *(ulonglong *)(lVar3 + 0x14 + lVar5) = CONCAT44(uStack_48,local_4c);
  *(undefined ***)(lVar3 + lVar5) = &PTR_FUN_14a136d60;
  *(undefined8 *)(lVar3 + 0x30 + lVar5) = local_30;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar5);
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703fdc0 FUN_14703fdc0 body=417 status=ok
// SIG undefined FUN_14703fdc0(void)

/* WARNING: Removing unreachable block (ram,0x00014703ff24) */
/* WARNING: Removing unreachable block (ram,0x00014703ff33) */

void FUN_14703fdc0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = (**(code **)(*param_1 + 0x20))();
  local_60 = *(undefined4 *)(param_3 + 1);
  local_68 = *param_3;
  uVar3 = *(byte *)((longlong)param_1 + 0x24) - 1;
  if (uVar3 < 4) {
    fVar5 = (float)(int)param_1[4];
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
                    /* WARNING: Could not emulate address calculation at 0x00014703fe25 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_14a136e44 + *(int *)(&DAT_14a136e44 + (ulonglong)uVar3 * 4)))(fVar5);
    return;
  }
  uStack_58 = 0x3f800000;
  local_70 = &PTR_FUN_14a136ce0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14703f642(&local_70,param_1 + 1,(longlong)param_1 + 0x1c);
  iVar1 = (int)param_2[1];
  lVar4 = (longlong)iVar1;
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14704045a(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x48) = local_60;
  *(undefined8 *)(lVar2 + 8 + lVar4 * 0x48) = local_68;
  *(undefined ***)(lVar2 + lVar4 * 0x48) = &PTR_LAB_14a136d20;
  *(ulonglong *)(lVar2 + 0x14 + lVar4 * 0x48) = CONCAT44(uStack_58,local_5c);
  *(undefined ***)(lVar2 + lVar4 * 0x48) = &PTR_FUN_14a136ce0;
  *(undefined4 *)(lVar2 + 0x20 + lVar4 * 0x48) = local_50;
  *(undefined8 *)(lVar2 + 0x28 + lVar4 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4 * 0x48) = local_48;
  *(undefined4 *)(lVar2 + 0x30 + lVar4 * 0x48) = (undefined4)uStack_40;
  *(undefined4 *)(lVar2 + 0x34 + lVar4 * 0x48) = uStack_40._4_4_;
  *(undefined8 *)(lVar2 + 0x38 + lVar4 * 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x38 + lVar4 * 0x48) = local_38;
  *(undefined4 *)(lVar2 + 0x40 + lVar4 * 0x48) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0x44 + lVar4 * 0x48) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  local_70 = &PTR_FUN_14a136ce0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703ff7e FUN_14703ff7e body=101 status=ok
// SIG undefined FUN_14703ff7e(void)

void FUN_14703ff7e(longlong param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  FUN_14703f808();
  fVar3 = *param_3;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  fVar3 = (float)(int)param_3[1] * (*(float *)(param_1 + 0xc) / fVar3);
  iVar2 = (int)param_3[1] / 2;
  iVar1 = (int)ROUND(fVar3 + fVar3 + 0.5) >> 1;
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  return;
}



// FUNCTION 14703ffe4 FUN_14703ffe4 body=34 status=ok
// SIG undefined FUN_14703ffe4(void)

undefined8 FUN_14703ffe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147040022 FUN_147040022 body=147 status=ok
// SIG undefined FUN_147040022(void)

void FUN_147040022(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470400b6 FUN_1470400b6 body=154 status=ok
// SIG undefined FUN_1470400b6(void)

void FUN_1470400b6(longlong param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  FUN_14703f808();
  fVar4 = *param_3;
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  fVar4 = (float)(int)param_3[1] * (*(float *)(param_1 + 0xc) / fVar4);
  iVar1 = (int)param_3[1] / 2;
  iVar2 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
  fVar4 = fVar4 - (float)iVar2;
  iVar3 = iVar2;
  if (iVar1 <= iVar2) {
    iVar3 = iVar1;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  if (iVar2 + 1 < iVar1) {
    iVar1 = iVar2 + 1;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x28) = fVar4;
  return;
}



// FUNCTION 147040150 FUN_147040150 body=34 status=ok
// SIG undefined FUN_147040150(void)

undefined8 FUN_147040150(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1470401b0 FUN_1470401b0 body=147 status=ok
// SIG undefined FUN_1470401b0(void)

void FUN_1470401b0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147040244 FUN_147040244 body=259 status=ok
// SIG undefined FUN_147040244(void)

void FUN_147040244(longlong param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  FUN_14703f808();
  fVar5 = *(float *)(param_1 + 0x10);
  if (10000.0 <= fVar5) {
    fVar5 = 10000.0;
  }
  if (fVar5 <= 0.0001) {
    fVar5 = 0.0001;
  }
  *(float *)(param_1 + 0x10) = fVar5;
  fVar5 = *param_3;
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = (float)(int)param_3[1] * (*(float *)(param_1 + 0xc) / fVar5);
  iVar2 = (int)ROUND(fVar5 + fVar5 + 0.5) >> 1;
  iVar4 = iVar2 + -1;
  iVar1 = (int)param_3[1] / 2;
  fVar5 = fVar5 - (float)iVar4;
  *(float *)(param_1 + 0x2c) = (fVar5 + -1.0) * (fVar5 + -2.0) * 0.5;
  *(float *)(param_1 + 0x30) = -fVar5 * (fVar5 + -2.0);
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  *(float *)(param_1 + 0x34) = (fVar5 + -1.0) * fVar5 * 0.5;
  iVar3 = iVar2;
  if (iVar1 <= iVar2) {
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar4;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar3;
  if (iVar2 + 1 < iVar1) {
    iVar1 = iVar2 + 1;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



// FUNCTION 147040348 FUN_147040348 body=34 status=ok
// SIG undefined FUN_147040348(void)

undefined8 FUN_147040348(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1470403ca FUN_1470403ca body=143 status=ok
// SIG undefined FUN_1470403ca(void)

void FUN_1470403ca(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14704045a FUN_14704045a body=147 status=ok
// SIG undefined FUN_14704045a(void)

void FUN_14704045a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470404ee FUN_1470404ee body=110 status=ok
// SIG undefined FUN_1470404ee(void)

void FUN_1470404ee(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x02') {
    local_28 = *param_2;
    local_20 = *(undefined4 *)(param_2 + 1);
    FUN_142af417c(&local_28,*(undefined4 *)(param_1 + 0xc));
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_142af314c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704055e FUN_14704055e body=265 status=ok
// SIG undefined FUN_14704055e(void)

void FUN_14704055e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 8) == '\x02') {
    lVar3 = *param_2;
    lVar1 = param_2[1];
    if ((longlong)(int)lVar1 == 0) {
      local_40 = 0;
    }
    else {
      lVar4 = 0;
      do {
        iVar2 = _finite((double)*(float *)(lVar3 + lVar4));
        if (iVar2 == 0) {
          *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(param_1 + 0xc);
        }
        lVar4 = lVar4 + 4;
      } while ((longlong)(int)lVar1 * 4 != lVar4);
      lVar3 = *param_2;
      local_40 = (undefined4)param_2[1];
    }
    local_48 = lVar3;
    FUN_142af4128(&local_48,*(undefined4 *)(param_1 + 0xc));
    local_58 = *param_2;
    local_50 = (undefined4)param_2[1];
    FUN_142af4170(&local_58,*(undefined4 *)(param_1 + 0xc));
    fVar5 = 0.01;
    if (0.01 <= -*(float *)(param_1 + 0xc)) {
      fVar5 = -*(float *)(param_1 + 0xc);
    }
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    FUN_142af1db6(&local_68,1.0 / fVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147040668 FUN_147040668 body=165 status=ok
// SIG undefined FUN_147040668(void)

void FUN_147040668(float *param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    fVar2 = 0.0;
    if (0.0 <= param_4) {
      fVar2 = param_4;
    }
    param_3 = param_3 - param_1[1];
    uVar1 = -(uint)(0.0 < param_3);
    param_1[1] = (float)(~uVar1 & (uint)(fVar2 * param_1[3]) | uVar1 & (uint)(param_1[2] * fVar2)) *
                 param_3 + param_1[1];
    param_2 = param_2 - *param_1;
    uVar1 = -(uint)(param_2 < 0.0);
    param_2 = (float)(~uVar1 & (uint)(fVar2 * param_1[3]) | (uint)(param_1[2] * fVar2) & uVar1) *
              param_2 + *param_1;
  }
  else {
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 14704070e FUN_14704070e body=150 status=ok
// SIG undefined FUN_14704070e(void)

void FUN_14704070e(float *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_142af4134(&local_28,*param_1,param_1[1]);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_142af4170(&local_38,*param_1);
  fVar1 = 1e-08;
  if (1e-08 <= param_1[1] - *param_1) {
    fVar1 = param_1[1] - *param_1;
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_142af1db6(&local_48,1.0 / fVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470407a6 FUN_1470407a6 body=48 status=ok
// SIG undefined FUN_1470407a6(void)

void FUN_1470407a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1470407e0 FUN_1470407e0 body=34 status=ok
// SIG undefined FUN_1470407e0(void)

undefined8 FUN_1470407e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 147040802 FUN_147040802 body=106 status=ok
// SIG undefined FUN_147040802(void)

void FUN_147040802(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a136968;
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14704086c(param_1 + 0x10);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14704086c FUN_14704086c body=67 status=ok
// SIG undefined FUN_14704086c(void)

void FUN_14704086c(longlong *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_147034bb0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470408b0 FUN_1470408b0 body=101 status=ok
// SIG undefined FUN_1470408b0(void)

undefined8 * FUN_1470408b0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 147040916 FUN_147040916 body=43 status=ok
// SIG undefined FUN_147040916(void)

undefined8 FUN_147040916(undefined8 param_1,int param_2)

{
  FUN_147040976();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14704094c FUN_14704094c body=42 status=ok
// SIG undefined FUN_14704094c(void)

undefined1 FUN_14704094c(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x59) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return 1;
}



// FUNCTION 147040976 FUN_147040976 body=61 status=ok
// SIG undefined FUN_147040976(void)

void FUN_147040976(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a136da0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 1470409b3 FUN_1470409b3 body=38 status=ok
// SIG undefined FUN_1470409b3(void)

void FUN_1470409b3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1470409da(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1470409da FUN_1470409da body=87 status=ok
// SIG undefined FUN_1470409da(void)

void FUN_1470409da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147040a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147040a31 FUN_147040a31 body=38 status=ok
// SIG undefined FUN_147040a31(void)

void FUN_147040a31(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14703b4ea(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 147040a57 FUN_147040a57 body=38 status=ok
// SIG undefined FUN_147040a57(void)

void FUN_147040a57(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14703b6ea(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 147040a7e FUN_147040a7e body=143 status=ok
// SIG undefined FUN_147040a7e(void)

void FUN_147040a7e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147040b0e FUN_147040b0e body=147 status=ok
// SIG undefined FUN_147040b0e(void)

void FUN_147040b0e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147040ba2 FUN_147040ba2 body=147 status=ok
// SIG undefined FUN_147040ba2(void)

void FUN_147040ba2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147040c36 FUN_147040c36 body=163 status=ok
// SIG undefined FUN_147040c36(void)

void FUN_147040c36(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar4 = (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + param_2[1] ^ uVar2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar4 = *(uint *)((longlong)plVar3 +
                     ((longlong)(int)((uVar4 >> 2) + 0x9e3779b9 + uVar4 * 0x40 + param_2[2] ^ uVar4)
                     & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*param_1 + (longlong)(int)uVar4 * 0x18);
        if (((*puVar1 == uVar2) && (puVar1[1] == param_2[1])) && (puVar1[2] == param_2[2])) {
          FUN_147040cda();
          return;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 147040cda FUN_147040cda body=87 status=ok
// SIG undefined FUN_147040cda(void)

void FUN_147040cda(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147040d32();
  return;
}



// FUNCTION 147040d32 FUN_147040d32 body=114 status=ok
// SIG undefined FUN_147040d32(void)

void FUN_147040d32(longlong *param_1,int param_2)

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



// FUNCTION 147040da4 FUN_147040da4 body=345 status=ok
// SIG undefined FUN_147040da4(void)

undefined4 * FUN_147040da4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147040efe(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (uint *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  local_40[3] = *puVar2;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + local_40[1] ^ uVar7;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + local_40[2] ^ uVar7;
  cVar4 = FUN_147040fe4(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[5] = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar7) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1470410a0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147040efe FUN_147040efe body=230 status=ok
// SIG undefined FUN_147040efe(void)

int * FUN_147040efe(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147040fe4 FUN_147040fe4 body=84 status=ok
// SIG undefined FUN_147040fe4(void)

undefined8 FUN_147040fe4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_147041038(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_147040d32(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 147041038 FUN_147041038 body=103 status=ok
// SIG undefined FUN_147041038(void)

int FUN_147041038(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x18) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x18, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1470410a0 FUN_1470410a0 body=487 status=ok
// SIG undefined FUN_1470410a0(void)

void FUN_1470410a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
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
  uVar10 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(uint *)(lVar2 + lVar5 * 0x18);
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar2 + 4 + lVar5 * 0x18) ^
                 uVar10;
        uVar9 = (longlong)
                (int)((uVar10 >> 2) + 0x9e3779b9 +
                      uVar10 * 0x40 + *(int *)(lVar2 + 8 + lVar5 * 0x18) ^ uVar10) &
                (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147041288 FUN_147041288 body=24 status=ok
// SIG undefined FUN_147041288(void)

void FUN_147041288(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014704129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1470412a0 FUN_1470412a0 body=34 status=ok
// SIG undefined FUN_1470412a0(void)

undefined8 FUN_1470412a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1470412c2 FUN_1470412c2 body=76 status=ok
// SIG undefined FUN_1470412c2(void)

void FUN_1470412c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14704130e FUN_14704130e body=25 status=ok
// SIG undefined FUN_14704130e(void)

undefined8 * FUN_14704130e(undefined8 *param_1)

{
  *param_1 = &DAT_3f8000003f800000;
  param_1[1] = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 147041328 FUN_147041328 body=222 status=ok
// SIG undefined FUN_147041328(void)

float FUN_147041328(float param_1,undefined1 param_2)

{
  float fVar1;
  
  switch(param_2) {
  case 0:
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000147041357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = powf(10.0,param_1 / 20.0);
    return fVar1;
  case 2:
    fVar1 = param_1 * 3.1415927 + -1.5707964;
    fVar1 = (1.0 - ABS(fVar1) / 3.1415927) * ((fVar1 * 4.0) / 3.1415927) * 0.5 + 0.5;
    param_1 = 0.0;
    if (0.0 <= fVar1) {
      param_1 = fVar1;
    }
    break;
  case 3:
    fVar1 = (1.0 - ABS(param_1 * 1.5707964) / 3.1415927) * ((param_1 * 1.5707964 * 4.0) / 3.1415927)
    ;
    param_1 = 0.0;
    if (0.0 <= fVar1) {
      param_1 = fVar1;
    }
    break;
  default:
    param_1 = 1.0;
  }
  return param_1;
}



// FUNCTION 147041406 FUN_147041406 body=6 status=ok
// SIG undefined FUN_147041406(void)

undefined4 FUN_147041406(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 14704140c FUN_14704140c body=12 status=ok
// SIG undefined FUN_14704140c(void)

void FUN_14704140c(undefined4 *param_1)

{
  FUN_147041328(*param_1,*(undefined1 *)(param_1 + 5));
  return;
}



// FUNCTION 147041418 FUN_147041418 body=26 status=ok
// SIG undefined FUN_147041418(void)

bool FUN_147041418(float *param_1)

{
  if (param_1[4] <= param_1[3] && param_1[3] != param_1[4]) {
    return *param_1 <= param_1[1] && param_1[1] != *param_1;
  }
  return false;
}



// FUNCTION 147041432 FUN_147041432 body=232 status=ok
// SIG undefined FUN_147041432(void)

void FUN_147041432(float *param_1,float param_2,float param_3,char param_4)

{
  longlong lVar1;
  float fVar2;
  
  if (param_3 <= 0.0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[3] = -1.0;
    param_1[4] = 0.0;
    lVar1 = 4;
  }
  else {
    if (param_4 == '\x01') {
      if (*(char *)(param_1 + 5) != '\x01') {
        fVar2 = *param_1;
        if (fVar2 <= 0.0001) {
          fVar2 = 0.0001;
        }
        fVar2 = logf(fVar2);
        *param_1 = (fVar2 / 2.3025851) * 20.0;
      }
      if (param_2 <= 0.0001) {
        param_2 = 0.0001;
      }
      fVar2 = logf(param_2);
      param_2 = (fVar2 / 2.3025851) * 20.0;
    }
    else if (*(char *)(param_1 + 5) == '\x01') {
      fVar2 = powf(10.0,*param_1 / 20.0);
      *param_1 = fVar2;
    }
    param_1[1] = param_2;
    param_1[4] = 0.0;
    *(char *)(param_1 + 5) = param_4;
    lVar1 = 0xc;
    param_2 = param_3;
  }
  *(float *)((longlong)param_1 + lVar1) = param_2;
  return;
}



// FUNCTION 14704151a FUN_14704151a body=310 status=ok
// SIG undefined FUN_14704151a(void)

void FUN_14704151a(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_1[4];
  fVar4 = param_1[3];
  fVar3 = param_1[2];
  fVar5 = fVar2 + param_2;
  param_1[4] = fVar5;
  if ((fVar2 < fVar4) && (fVar2 < fVar3 || fVar3 < 0.0)) {
    if (fVar5 <= fVar4) {
      fVar2 = *param_1;
      fVar1 = param_1[1];
      fVar6 = fVar1;
      if (fVar1 <= fVar2) {
        fVar6 = fVar2;
      }
      fVar4 = ((fVar1 - fVar2) * param_2) / (fVar4 - fVar5) + fVar2;
      if (fVar1 <= fVar2) {
        fVar2 = fVar1;
      }
      if (fVar6 <= fVar4) {
        fVar4 = fVar6;
      }
      if (fVar4 <= fVar2) {
        fVar4 = fVar2;
      }
      *param_1 = fVar4;
      if (param_2 <= 1e-08) {
        return;
      }
      if (1e-08 < ABS(fVar4 - fVar1)) {
        return;
      }
      if (*(char *)(param_1 + 5) == '\x01') {
        fVar4 = powf(10.0,fVar4 / 20.0);
        *param_1 = fVar4;
        fVar3 = param_1[2];
      }
      param_1[1] = fVar4;
    }
    else {
      fVar2 = param_1[1];
      *param_1 = fVar2;
      if (*(char *)(param_1 + 5) == '\x01') {
        fVar2 = powf(10.0,fVar2 / 20.0);
        *param_1 = fVar2;
        fVar3 = param_1[2];
      }
      param_1[1] = fVar2;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[4] = fVar3;
    param_1[3] = -1.0;
  }
  return;
}



// FUNCTION 147041650 FUN_147041650 body=74 status=ok
// SIG undefined FUN_147041650(void)

undefined8 * FUN_147041650(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  memset(*(void **)(param_1 + 0x38),0,(longlong)*(int *)(param_1 + 0x40));
  uVar1 = FUN_147034fe4(param_1 + 8,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40))
  ;
  *param_3 = uVar1;
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x40);
  return param_2;
}



// FUNCTION 14704169a FUN_14704169a body=434 status=ok
// SIG undefined FUN_14704169a(void)

undefined8 * FUN_14704169a(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_14a137990;
  param_1[1] = &PTR_LAB_14a137ac8;
  param_1[2] = &PTR_LAB_14a137ae0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_147042096(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_147042096(param_1 + 4);
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x400;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xac44;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_14703e85e(param_1 + 0x16,0);
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x24),4000);
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_140056680(param_1 + 0x31,&DAT_149e01fe8);
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c99e578 + 1;
  DAT_14c99e578 = DAT_14c99e578 + 1;
  *(int *)(param_1 + 0x37) = iVar1;
  param_1[0x38] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 14704184c FUN_14704184c body=161 status=ok
// SIG undefined FUN_14704184c(void)

void FUN_14704184c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a137990;
  param_1[1] = &PTR_LAB_14a137ac8;
  param_1[2] = &PTR_LAB_14a137ae0;
  plVar1 = (longlong *)param_1[0x38];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  plVar1 = (longlong *)param_1[0x22];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  FUN_1470418ee(param_1 + 0x15);
  FUN_147041ad4(param_1 + 4);
  return;
}



// FUNCTION 1470418ee FUN_1470418ee body=76 status=ok
// SIG undefined FUN_1470418ee(void)

void FUN_1470418ee(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14704193a FUN_14704193a body=91 status=ok
// SIG undefined FUN_14704193a(void)

undefined4 FUN_14704193a(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0xf0))();
  if (cVar2 != '\0') {
    param_1[0x2d] = 0x3f800000;
    *(undefined1 *)(param_1 + 0x2e) = 0;
    param_1[0x2c] = (longlong)&DAT_3f8000003f800000;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x34) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1a4);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  UNLOCK();
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  return uVar1;
}



// FUNCTION 147041996 FUN_147041996 body=317 status=ok
// SIG undefined FUN_147041996(void)

uint FUN_147041996(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_64 = 0;
  cVar1 = (**(code **)(*param_1 + 0x60))();
  if ((cVar1 != '\0') && (local_64 != 0)) {
    uVar4 = 0;
    do {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_147042096(&local_b8);
      cVar1 = (**(code **)(*param_1 + 0x68))(param_1,uVar4,&local_b8);
      if (cVar1 != '\0') {
        _Str = L"";
        if (*(int *)(param_2 + 1) != 0) {
          _Str = (wchar_t *)*param_2;
        }
        if (_Str != (wchar_t *)0x0) {
          sVar3 = wcslen(_Str);
          local_c0 = 0xffffffff;
          local_c8 = 0;
          iVar2 = FUN_1447ee042(&local_b8,_Str,sVar3 & 0xffffffff,1);
          if (iVar2 != -1) {
            FUN_147041ad4(&local_b8);
            goto LAB_147041a90;
          }
        }
      }
      FUN_147041ad4(&local_b8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_64);
  }
  uVar4 = 0xffffffff;
LAB_147041a90:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147041ad4 FUN_147041ad4 body=61 status=ok
// SIG undefined FUN_147041ad4(void)

void FUN_147041ad4(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147041b12 FUN_147041b12 body=246 status=ok
// SIG undefined FUN_147041b12(void)

void FUN_147041b12(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88 [2];
  undefined8 local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_88[0] = *param_2;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,local_78);
  }
  local_98 = param_4;
  FUN_147041c16(plVar1,param_3,local_88,6);
  plVar2 = *(longlong **)(param_1 + 0x1c0);
  if ((plVar2 != plVar1) && (*(longlong **)(param_1 + 0x1c0) = plVar1, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147041c0a FUN_147041c0a body=11 status=ok
// SIG undefined FUN_147041c0a(void)

bool FUN_147041c0a(void)

{
  return DAT_14c75f59c != 0;
}



// FUNCTION 147041c16 FUN_147041c16 body=266 status=ok
// SIG undefined FUN_147041c16(void)

undefined8 *
FUN_147041c16(undefined8 *param_1,undefined4 param_2,longlong *param_3,undefined4 param_4,
             byte param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a137ce0;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)*plVar4)(plVar4,param_1 + 4);
  }
  *(undefined4 *)(param_1 + 10) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  uVar2 = FUN_1405d8a54(1);
  param_1[0xb] = uVar2;
  uVar2 = FUN_1405d8a54(1);
  param_1[0xc] = uVar2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  (**(code **)(*(longlong *)param_1[0xb] + 0x18))();
  (**(code **)(*(longlong *)param_1[0xc] + 0x10 + (ulonglong)param_5 * 8))();
  plVar3 = (longlong *)
           FUN_1411b1052(param_1,L"AudioMixerNullCallbackThread",0,param_4,0xffffffffffffffff,0);
  plVar4 = (longlong *)param_1[0xd];
  if ((plVar4 != plVar3) && (param_1[0xd] = plVar3, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,1);
  }
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 147041d20 FUN_147041d20 body=113 status=ok
// SIG undefined FUN_147041d20(void)

void FUN_147041d20(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x100) == 2) {
    local_10 = *(int *)(param_2 + 1) >> 1;
    local_18 = *param_2;
    FUN_142af73dc();
  }
  else if (*(int *)(param_1 + 0x100) == 1) {
    local_10 = *(int *)(param_2 + 1) >> 2;
    local_18 = *param_2;
    FUN_142af7290();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147041d92 FUN_147041d92 body=484 status=ok
// SIG undefined FUN_147041d92(void)

int * FUN_147041d92(int *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[0] = 48000;
  param_1[1] = 0x400;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  local_48 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,param_2,L"AudioSampleRate");
  if (cVar1 != '\0') {
    pwVar4 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar4 = L"";
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 8000;
    if (8000 < iVar2) {
      iVar3 = iVar2;
    }
    *param_1 = iVar3;
  }
  local_48 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,param_2,L"AudioCallbackBufferFrameSize",&local_38);
  if (cVar1 != '\0') {
    pwVar4 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar4 = L"";
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 0xf0;
    if (0xf0 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[1] = iVar3;
  }
  local_48 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,param_2,L"AudioNumBuffersToEnqueue",&local_38);
  if (cVar1 != '\0') {
    pwVar4 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar4 = L"";
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[2] = iVar3;
  }
  local_48 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,param_2,L"AudioMaxChannels",&local_38);
  if (cVar1 != '\0') {
    pwVar4 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar4 = L"";
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[3] = iVar3;
  }
  local_48 = &DAT_14c872ce8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,param_2,L"AudioNumSourceWorkers",&local_38);
  if (cVar1 != '\0') {
    pwVar4 = local_38;
    if ((int)uStack_30 == 0) {
      pwVar4 = L"";
    }
    iVar2 = _wtoi(pwVar4);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    param_1[4] = iVar3;
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147041f90 FUN_147041f90 body=89 status=ok
// SIG undefined FUN_147041f90(void)

undefined8 * FUN_147041f90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x180);
  _Src = *(void **)(param_1 + 0x178);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14704203a FUN_14704203a body=91 status=ok
// SIG undefined FUN_14704203a(void)

undefined8 * FUN_14704203a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a137ce0;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147042096 FUN_147042096 body=87 status=ok
// SIG undefined FUN_147042096(void)

void FUN_147042096(longlong param_1)

{
  FUN_14020fad6(param_1,L"Unknown");
  FUN_14020fad6(param_1 + 0x10,L"Unknown");
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_1470420ee(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
  return;
}



// FUNCTION 1470420ee FUN_1470420ee body=96 status=ok
// SIG undefined FUN_1470420ee(void)

void FUN_1470420ee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 14704214e FUN_14704214e body=27 status=ok
// SIG undefined FUN_14704214e(void)

wchar_t * FUN_14704214e(uint param_1)

{
  if (param_1 < 0x13) {
    return (wchar_t *)(&PTR_u_FrontLeft_14a137ff0)[param_1];
  }
  return L"UNSUPPORTED";
}



// FUNCTION 14704216a FUN_14704216a body=114 status=ok
// SIG undefined FUN_14704216a(void)

void FUN_14704216a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,0x10);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_144a7ea90(param_1,*(undefined4 *)(param_1 + 8),iVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1470421dc FUN_1470421dc body=34 status=ok
// SIG undefined FUN_1470421dc(void)

void FUN_1470421dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a137fb0;
  return;
}



// FUNCTION 1470421fe FUN_1470421fe body=31 status=ok
// SIG undefined FUN_1470421fe(void)

undefined8 FUN_1470421fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14704223a FUN_14704223a body=93 status=ok
// SIG undefined FUN_14704223a(void)

void FUN_14704223a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a137f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147042298 FUN_147042298 body=126 status=ok
// SIG undefined FUN_147042298(void)

void FUN_147042298(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a137f40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147042307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147042322 FUN_147042322 body=21 status=ok
// SIG undefined FUN_147042322(void)

undefined8 FUN_147042322(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147042338 FUN_147042338 body=29 status=ok
// SIG undefined FUN_147042338(void)

undefined8 FUN_147042338(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147042356 FUN_147042356 body=95 status=ok
// SIG undefined FUN_147042356(void)

void FUN_147042356(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_20,L"SignalProcessing",1);
  FUN_14493e38c(uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470423ce FUN_1470423ce body=101 status=ok
// SIG undefined FUN_1470423ce(void)

void FUN_1470423ce(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a52528();
  FUN_1446f470e(&local_18,L"AudioExtensions",1);
  uVar1 = FUN_144a52528();
  FUN_1405f3750(uVar1,local_18,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147042434 FUN_147042434 body=371 status=ok
// SIG undefined FUN_147042434(void)

void FUN_147042434(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  longlong local_70 [2];
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14680ea62(&local_80,0);
  lVar1 = local_80;
  if ((longlong)local_78 != 0) {
    lVar4 = 0;
    do {
      local_50 = *(undefined8 *)(lVar1 + lVar4);
      FUN_1400021e4(&local_50,local_70);
      FUN_144a882a8(&local_60,local_70,L"AudioFeatures");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      uVar2 = FUN_144a52528();
      puVar3 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar3 = local_60;
      }
      FUN_1446f470e(local_70,puVar3,1);
      FUN_1405f3750(uVar2,local_70[0],0);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)local_78 * 8 != lVar4);
  }
  uVar2 = FUN_144a52528();
  FUN_1446f470e(&local_88,L"SignalProcessing",1);
  FUN_14493e38c(uVar2,local_88);
  uVar2 = FUN_144a52528();
  FUN_1446f470e(&local_90,L"AudioMixerCore",1);
  FUN_14493e38c(uVar2,local_90);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470425ae FUN_1470425ae body=1016 status=ok
// SIG undefined FUN_1470425ae(void)

void FUN_1470425ae(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = uVar2;
  switch(uVar2) {
  case 0:
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    lVar5 = param_2[3];
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_14689c22e();
        lVar5 = param_2[3];
      }
    }
    param_1[3] = lVar5;
    FUN_144a787a6(param_1 + 4,param_2 + 4);
    FUN_1447cd5a6(param_1 + 8,param_2 + 8);
    FUN_144a67f5c(param_1 + 6,param_2 + 6);
    FUN_14054c6c4(param_1 + 10,param_2 + 10);
    FUN_1402ae23a(param_1 + 0xc,param_2 + 0xc);
    FUN_140bee9ec(param_1 + 0xe,param_2 + 0xe);
    plVar1 = param_1 + 0x12;
    iVar3 = *(int *)((longlong)param_1 + 0x9c);
    FUN_147046527(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
      FUN_147046902(plVar1);
    }
    if ((longlong)*(int *)(param_2 + 0x13) != 0) {
      puVar7 = (undefined8 *)param_2[0x12];
      puVar6 = puVar7 + (longlong)*(int *)(param_2 + 0x13) * 2;
      do {
        iVar3 = *(int *)(param_1 + 0x13);
        *(uint *)(param_1 + 0x13) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
          FUN_147046932(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = *puVar7;
        lVar4 = puVar7[1];
        *(longlong *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar6);
    }
    break;
  case 1:
    *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
    break;
  case 2:
  case 6:
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    break;
  case 3:
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    break;
  case 4:
    FUN_144a787a6(param_1 + 4,param_2 + 4);
    return;
  case 5:
    lVar5 = param_2[3];
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_14689c22e();
        lVar5 = param_2[3];
      }
    }
    param_1[3] = lVar5;
    plVar1 = param_1 + 0x12;
    iVar3 = *(int *)((longlong)param_1 + 0x9c);
    FUN_147046527(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
      FUN_147046902(plVar1);
    }
    if ((longlong)*(int *)(param_2 + 0x13) != 0) {
      puVar7 = (undefined8 *)param_2[0x12];
      puVar6 = puVar7 + (longlong)*(int *)(param_2 + 0x13) * 2;
      do {
        iVar3 = *(int *)(param_1 + 0x13);
        *(uint *)(param_1 + 0x13) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
          FUN_147046932(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = *puVar7;
        lVar4 = puVar7[1];
        *(longlong *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar6);
    }
    break;
  case 7:
    FUN_1447cd5a6(param_1 + 8,param_2 + 8);
    return;
  case 8:
    FUN_14054c6c4(param_1 + 10,param_2 + 10);
    return;
  case 9:
    FUN_144a67f5c(param_1 + 6,param_2 + 6);
    return;
  case 10:
    FUN_140bee9ec(param_1 + 0xe,param_2 + 0xe);
    return;
  case 0xb:
    FUN_1402ae23a(param_1 + 0xc,param_2 + 0xc);
    plVar1 = param_1 + 0x12;
    iVar3 = *(int *)((longlong)param_1 + 0x9c);
    FUN_147046527(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
    *(undefined4 *)(param_1 + 0x13) = 0;
    if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
      FUN_147046902(plVar1);
    }
    if ((longlong)*(int *)(param_2 + 0x13) != 0) {
      puVar7 = (undefined8 *)param_2[0x12];
      puVar6 = puVar7 + (longlong)*(int *)(param_2 + 0x13) * 2;
      do {
        iVar3 = *(int *)(param_1 + 0x13);
        *(uint *)(param_1 + 0x13) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
          FUN_147046932(plVar1,iVar3);
        }
        lVar5 = *plVar1;
        *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = *puVar7;
        lVar4 = puVar7[1];
        *(longlong *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar6);
    }
  }
  return;
}



// FUNCTION 1470429a6 FUN_1470429a6 body=1895 status=ok
// SIG undefined FUN_1470429a6(void)

void FUN_1470429a6(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  int *_Src;
  int *piVar14;
  int iVar15;
  longlong *plVar16;
  int *_Src_00;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  longlong lVar22;
  longlong *plVar23;
  int *_Src_01;
  float fVar24;
  undefined1 auStack_438 [32];
  longlong *local_418;
  ulonglong local_410;
  longlong *local_408;
  undefined8 *local_400;
  int *local_3f8;
  int *local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  undefined4 local_3d8 [188];
  undefined1 local_e8 [160];
  ulonglong local_48;
  ulonglong uVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar6 = (longlong)*(int *)(param_1 + 1);
  if (lVar6 != 0) {
    uVar20 = *(uint *)(param_2 + 1);
    if ((ulonglong)uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_438);
    }
    local_408 = param_2;
    if ((int)uVar20 < 2) {
      plVar12 = (longlong *)*param_1;
    }
    else {
      lVar6 = *param_2;
      local_400 = param_1;
      memset(local_3d8,0,0x2f0);
      local_3e0 = (ulonglong)uVar20 * 0xa0 + lVar6 + -0xa0;
      local_3e8 = lVar6;
      fVar24 = logf((float)(int)uVar20);
      local_3d8[0] = (int)(longlong)(fVar24 + fVar24);
      plVar12 = &local_3e8;
      do {
        _Src_00 = (int *)*plVar12;
        _Src = (int *)plVar12[1];
        iVar15 = (int)plVar12[2];
        iVar4 = (int)((ulonglong)((longlong)_Src - (longlong)_Src_00) >> 5) * -0x33333333;
        uVar20 = iVar4 + 1;
        piVar13 = _Src;
        piVar8 = _Src_00;
        local_418 = plVar12;
        if (iVar15 != 0) {
LAB_147042b83:
          if (8 < (int)uVar20) {
            local_410 = CONCAT44(local_410._4_4_,iVar15);
            local_3f8 = piVar8;
            local_3f0 = piVar13;
            memcpy(local_e8,_Src_00 + (ulonglong)(uVar20 >> 1) * 0x28,0xa0);
            memcpy(_Src_00 + (ulonglong)(uVar20 >> 1) * 0x28,_Src_00,0xa0);
            memcpy(_Src_00,local_e8,0xa0);
            piVar21 = _Src + 0x28;
            _Src_01 = _Src_00;
            do {
              piVar13 = _Src_01 + 0x28;
              piVar3 = _Src_01 + 0x28;
              do {
                _Src_01 = piVar3;
                piVar8 = piVar13;
                if (_Src < _Src_01) break;
                iVar15 = *_Src_00 - *_Src_01;
                if (*_Src_00 - *_Src_01 == 0) {
                  iVar15 = _Src_00[1] - _Src_01[1];
                }
                piVar13 = piVar8 + 0x28;
                piVar3 = _Src_01 + 0x28;
              } while (-1 < iVar15);
              piVar3 = piVar21 + -0x50;
              do {
                piVar14 = piVar21;
                piVar13 = piVar3;
                piVar21 = piVar14 + -0x28;
                if (piVar21 <= _Src_00) break;
                iVar15 = *piVar21 - *_Src_00;
                if (*piVar21 - *_Src_00 == 0) {
                  iVar15 = piVar14[-0x27] - _Src_00[1];
                }
                piVar3 = piVar13 + -0x28;
              } while (-1 < iVar15);
              if (piVar21 < _Src_01) goto LAB_147042ca8;
              memcpy(local_e8,_Src_01,0xa0);
              memcpy(_Src_01,piVar21,0xa0);
              memcpy(piVar21,local_e8,0xa0);
            } while( true );
          }
          plVar12 = local_418;
          if (_Src_00 < _Src) {
            do {
              piVar13 = _Src_00;
              if (_Src_00 + 0x28 <= _Src) {
                iVar15 = *_Src_00;
                piVar8 = _Src_00 + 0x28;
                do {
                  iVar4 = iVar15 - *piVar8;
                  if (iVar4 == 0) {
                    iVar4 = piVar13[1] - piVar8[1];
                  }
                  piVar21 = piVar8;
                  iVar11 = *piVar8;
                  if (-1 < iVar4) {
                    piVar21 = piVar13;
                    iVar11 = iVar15;
                  }
                  iVar15 = iVar11;
                  piVar13 = piVar21;
                  piVar8 = piVar8 + 0x28;
                } while (piVar8 <= _Src);
              }
              piVar8 = _Src + -0x28;
              memcpy(local_e8,piVar13,0xa0);
              memcpy(piVar13,_Src,0xa0);
              memcpy(_Src,local_e8,0xa0);
              plVar12 = local_418;
              _Src = piVar8;
            } while (_Src_00 < piVar8);
          }
          goto LAB_1470430cd;
        }
LAB_147042d99:
        plVar12 = local_418;
        if (uVar20 != 0) {
          uVar5 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          do {
            uVar7 = (ulonglong)uVar5;
            local_410 = uVar7;
            while (uVar19 = uVar5 * 2 + 1, (int)uVar19 < (int)uVar20) {
              uVar9 = uVar5 * 2 + 2;
              uVar5 = uVar19;
              if ((int)uVar9 < (int)uVar20) {
                iVar15 = _Src_00[(longlong)(int)uVar9 * 0x28] -
                         _Src_00[(longlong)(int)uVar19 * 0x28];
                if (_Src_00[(longlong)(int)uVar9 * 0x28] - _Src_00[(longlong)(int)uVar19 * 0x28] ==
                    0) {
                  iVar15 = _Src_00[(longlong)(int)uVar9 * 0x28 + 1] -
                           _Src_00[(longlong)(int)uVar19 * 0x28 + 1];
                }
                if (-1 < iVar15) {
                  uVar5 = uVar9;
                }
              }
              lVar6 = (longlong)(int)uVar7;
              lVar22 = (longlong)(int)uVar5;
              iVar15 = _Src_00[lVar6 * 0x28] - _Src_00[lVar22 * 0x28];
              if (_Src_00[lVar6 * 0x28] - _Src_00[lVar22 * 0x28] == 0) {
                iVar15 = _Src_00[lVar6 * 0x28 + 1] - _Src_00[lVar22 * 0x28 + 1];
              }
              if (-1 < iVar15) break;
              memcpy(local_e8,_Src_00 + lVar6 * 0x28,0xa0);
              memcpy(_Src_00 + lVar6 * 0x28,_Src_00 + lVar22 * 0x28,0xa0);
              memcpy(_Src_00 + lVar22 * 0x28,local_e8,0xa0);
              uVar7 = (ulonglong)uVar5;
            }
            uVar5 = (int)local_410 - 1;
          } while ((int)local_410 != 0);
          plVar12 = local_418;
          if (1 < (int)uVar20) {
            memcpy(local_e8,_Src_00,0xa0);
            memcpy(_Src_00,_Src_00 + ((ulonglong)uVar20 - 1) * 0x28,0xa0);
            memcpy(_Src_00 + ((ulonglong)uVar20 - 1) * 0x28,local_e8,0xa0);
            plVar12 = local_418;
            uVar7 = (ulonglong)uVar20 - 1;
            if (uVar20 != 2) {
              do {
                iVar15 = 0;
                iVar11 = 1;
                iVar4 = 0;
                do {
                  lVar6 = (longlong)(iVar15 + 2);
                  iVar10 = iVar11;
                  if (lVar6 < (longlong)uVar7) {
                    iVar18 = _Src_00[lVar6 * 0x28] - _Src_00[(longlong)iVar11 * 0x28];
                    if (_Src_00[lVar6 * 0x28] - _Src_00[(longlong)iVar11 * 0x28] == 0) {
                      iVar18 = _Src_00[lVar6 * 0x28 + 1] - _Src_00[(longlong)iVar11 * 0x28 + 1];
                    }
                    if (-1 < iVar18) {
                      iVar10 = iVar15 + 2;
                    }
                  }
                  lVar6 = (longlong)iVar4;
                  lVar22 = (longlong)iVar10;
                  iVar15 = _Src_00[lVar6 * 0x28] - _Src_00[lVar22 * 0x28];
                  if (_Src_00[lVar6 * 0x28] - _Src_00[lVar22 * 0x28] == 0) {
                    iVar15 = _Src_00[lVar6 * 0x28 + 1] - _Src_00[lVar22 * 0x28 + 1];
                  }
                  if (-1 < iVar15) break;
                  memcpy(local_e8,_Src_00 + lVar6 * 0x28,0xa0);
                  memcpy(_Src_00 + lVar6 * 0x28,_Src_00 + lVar22 * 0x28,0xa0);
                  memcpy(_Src_00 + lVar22 * 0x28,local_e8,0xa0);
                  iVar15 = iVar10 * 2;
                  iVar11 = iVar10 * 2 + 1;
                  iVar4 = iVar10;
                } while ((longlong)iVar11 < (longlong)uVar7);
                memcpy(local_e8,_Src_00,0xa0);
                memcpy(_Src_00,_Src_00 + (uVar7 - 1) * 0x28,0xa0);
                memcpy(_Src_00 + (uVar7 - 1) * 0x28,local_e8,0xa0);
                bVar1 = 2 < uVar7;
                plVar12 = local_418;
                uVar7 = uVar7 - 1;
              } while (bVar1);
            }
          }
        }
LAB_1470430cd:
        plVar12 = plVar12 + -3;
      } while (&local_3e8 <= plVar12);
      lVar6 = (longlong)*(int *)(local_400 + 1);
      if (lVar6 == 0) goto LAB_147042ac6;
      plVar12 = (longlong *)*local_400;
    }
    plVar16 = plVar12 + lVar6 * 0x14;
    plVar23 = local_408;
    do {
      plVar2 = local_408;
      uVar20 = *(uint *)(plVar23 + 1);
      lVar6 = *plVar23;
      if ((longlong)(int)uVar20 < 1) {
LAB_147042a86:
        *(uint *)(plVar23 + 1) = uVar20 + 1;
        if (*(uint *)((longlong)plVar23 + 0xc) < uVar20 + 1) {
          FUN_147046b0e(plVar23,uVar20);
          lVar6 = *plVar23;
        }
        FUN_1470469b8((longlong)(int)uVar20 * 0xa0 + lVar6,plVar12);
      }
      else {
        uVar17 = 0;
        uVar7 = (ulonglong)uVar20;
        uVar5 = uVar20;
        do {
          uVar7 = uVar7 >> 1;
          uVar19 = (uint)uVar7 + (int)uVar17;
          lVar22 = (ulonglong)uVar19 * 0xa0;
          iVar15 = *(int *)(lVar6 + lVar22) - (int)*plVar12;
          if (iVar15 == 0) {
            iVar15 = *(int *)(lVar6 + 4 + lVar22) - *(int *)((longlong)plVar12 + 4);
          }
          if (iVar15 < 0) {
            uVar17 = (ulonglong)(uVar19 + (uVar5 & 1));
          }
          bVar1 = 1 < uVar5;
          uVar5 = (uint)uVar7;
        } while (bVar1);
        plVar23 = local_408;
        if (((int)uVar20 <= (int)uVar17) || (*(longlong *)(lVar6 + uVar17 * 0xa0) != *plVar12))
        goto LAB_147042a86;
        FUN_1470425ae(lVar6 + uVar17 * 0xa0,plVar12);
        plVar23 = plVar2;
      }
      plVar12 = plVar12 + 0x14;
    } while (plVar12 != plVar16);
  }
LAB_147042ac6:
  if ((local_48 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147042ca8:
  memcpy(local_e8,_Src_00,0xa0);
  memcpy(_Src_00,piVar21,0xa0);
  memcpy(piVar21,local_e8,0xa0);
  iVar15 = (int)local_410 + -1;
  piVar14 = piVar14 + -0x50;
  if ((longlong)piVar13 - (longlong)local_3f8 < (longlong)local_3f0 - (longlong)piVar8) {
    plVar12 = local_418;
    if (_Src_01 < _Src) {
      *local_418 = (longlong)_Src_01;
      local_418[1] = (longlong)_Src;
      *(int *)(local_418 + 2) = iVar15;
      plVar12 = local_418 + 3;
    }
    piVar8 = _Src_00;
    if (piVar21 <= _Src_00 + 0x28) goto LAB_1470430cd;
  }
  else {
    if (_Src_00 + 0x28 < piVar21) {
      *local_418 = (longlong)_Src_00;
      local_418[1] = (longlong)piVar14;
      *(int *)(local_418 + 2) = iVar15;
      local_418 = local_418 + 3;
    }
    plVar12 = local_418;
    piVar14 = _Src;
    _Src_00 = _Src_01;
    piVar13 = _Src;
    if (_Src <= _Src_01) goto LAB_1470430cd;
  }
  local_418 = plVar12;
  iVar4 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar8) >> 5) * -0x33333333;
  uVar20 = iVar4 + 1;
  _Src = piVar14;
  if (iVar15 == 0) goto LAB_147042d99;
  goto LAB_147042b83;
}



// FUNCTION 147043194 FUN_147043194 body=271 status=ok
// SIG undefined FUN_147043194(void)

void FUN_147043194(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470432aa FUN_1470432aa body=242 status=ok
// SIG undefined FUN_1470432aa(void)

void FUN_1470432aa(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704339e FUN_14704339e body=271 status=ok
// SIG undefined FUN_14704339e(void)

void FUN_14704339e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x48))(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470434ae FUN_1470434ae body=239 status=ok
// SIG undefined FUN_1470434ae(void)

void FUN_1470434ae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x40))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704359e FUN_14704359e body=271 status=ok
// SIG undefined FUN_14704359e(void)

void FUN_14704359e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x38))(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470436ae FUN_1470436ae body=238 status=ok
// SIG undefined FUN_1470436ae(void)

void FUN_1470436ae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x30))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704379e FUN_14704379e body=271 status=ok
// SIG undefined FUN_14704379e(void)

void FUN_14704379e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x68))(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470438ae FUN_1470438ae body=239 status=ok
// SIG undefined FUN_1470438ae(void)

void FUN_1470438ae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x60))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704399e FUN_14704399e body=192 status=ok
// SIG undefined FUN_14704399e(void)

void FUN_14704399e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x70))(param_1,plVar1);
  FUN_145aa5488(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147043a60 FUN_147043a60 body=282 status=ok
// SIG undefined FUN_147043a60(void)

void FUN_147043a60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x58))(param_1,local_28,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147043b7c FUN_147043b7c body=262 status=ok
// SIG undefined FUN_147043b7c(void)

void FUN_147043b7c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x50))(param_1,local_20,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147043c84 FUN_147043c84 body=157 status=ok
// SIG undefined FUN_147043c84(void)

void FUN_147043c84(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147043d2e FUN_147043d2e body=40 status=ok
// SIG undefined FUN_147043d2e(void)

undefined8 * FUN_147043d2e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a13de80;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 147043d56 FUN_147043d56 body=172 status=ok
// SIG undefined FUN_147043d56(void)

undefined8
FUN_147043d56(longlong *param_1,undefined8 param_2,float param_3,float *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (float)(**(code **)(*param_1 + 0x10))();
  *param_4 = fVar4;
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  *param_5 = iVar2;
  fVar4 = (float)iVar2 * param_3 * *param_4;
  iVar2 = -((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1);
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 <= iVar3 * *param_5) {
      iVar2 = iVar3 * *param_5;
    }
  }
  FUN_14703854a(param_1 + 10,param_2,iVar2 * 2,0x3f800000);
  return param_2;
}



// FUNCTION 147043e02 FUN_147043e02 body=44 status=ok
// SIG undefined FUN_147043e02(void)

void FUN_147043e02(longlong *param_1)

{
  char cVar1;
  
  if (param_1[1] == 0) {
    cVar1 = (**(code **)(*param_1 + 0x20))();
    if (cVar1 != '\0') {
      FUN_147043e2e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147043e2e FUN_147043e2e body=281 status=ok
// SIG undefined FUN_147043e2e(void)

void FUN_147043e2e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  uVar4 = iVar3 * iVar2;
  iVar2 = *(int *)((longlong)param_1 + 0x1c);
  iVar3 = 0;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1470345fa(param_1 + 2,0);
    iVar3 = (int)param_1[3];
    iVar2 = *(int *)((longlong)param_1 + 0x1c);
  }
  *(uint *)(param_1 + 3) = iVar3 + uVar4;
  if ((uint)(iVar2 - iVar3) < uVar4) {
    FUN_145ca0cd4(param_1 + 2);
  }
  plVar1 = param_1 + 10;
  iVar2 = FUN_147038998(plVar1);
  if ((int)uVar4 <= iVar2) {
    do {
      FUN_1470386d8(plVar1,param_1[2],(int)param_1[3],0);
      local_58 = param_1[2];
      local_50 = (undefined4)param_1[3];
      local_48 = param_1;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
      local_40 = param_1[4];
      FUN_142af84da(&local_58,&local_40);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
      iVar2 = FUN_147038998(plVar1);
    } while ((int)uVar4 <= iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147043f60 FUN_147043f60 body=137 status=ok
// SIG undefined FUN_147043f60(void)

longlong * FUN_147043f60(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147046ba2(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147043fea FUN_147043fea body=79 status=ok
// SIG undefined FUN_147043fea(void)

void FUN_147043fea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e7cc) {
    FUN_144b3d300(&DAT_14c99e7cc);
    if (DAT_14c99e7cc == -1) {
      _Init_thread_footer(&DAT_14c99e7cc);
      return;
    }
  }
  return;
}



// FUNCTION 14704403a FUN_14704403a body=259 status=ok
// SIG undefined FUN_14704403a(void)

undefined8 * FUN_14704403a(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470423ce();
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145cbb262(&local_40);
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1446f84a2(param_1,0);
  *(longlong *)*param_1 = local_40;
  plVar2 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar2 + 8))(plVar2);
  uVar3 = FUN_1448c2e86();
  FUN_145a31ff8(&local_48);
  FUN_147043f60(uVar3,&local_40,local_48);
  plVar2 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar2 + 0x10))(plVar2);
  lVar1 = local_40;
  if ((longlong)local_38 != 0) {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar4) + 8))(*(longlong **)(lVar1 + lVar4),local_50);
      FUN_1409d9716(param_1,local_50);
      lVar4 = lVar4 + 8;
    } while ((longlong)local_38 * 8 != lVar4);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14704413e FUN_14704413e body=111 status=ok
// SIG undefined FUN_14704413e(void)

undefined8 * FUN_14704413e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xf8);
  memset(puVar1 + 4,0,0xd8);
  *puVar1 = &PTR_FUN_14a13de90;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 5),4000);
  FUN_145afe678(puVar1 + 10);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1470441b2 FUN_1470441b2 body=46 status=ok
// SIG undefined FUN_1470441b2(void)

longlong FUN_1470441b2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145b2de94();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return lVar2;
}



// FUNCTION 1470441e4 FUN_1470441e4 body=231 status=ok
// SIG undefined FUN_1470441e4(void)

undefined4 * FUN_1470441e4(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  param_1[4] = 0x3f800000;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0xffffffff;
  FUN_1470442cc();
  lVar1 = DAT_14c99e860;
  *(longlong *)(param_1 + 8) = DAT_14c99e860;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (lVar1 != 0) {
    puVar2 = &DAT_14c99e880;
    if (DAT_14c99e870 != (undefined8 *)0x0) {
      puVar2 = DAT_14c99e870;
    }
    (**(code **)*puVar2)(puVar2,param_1 + 0xc);
  }
  FUN_14704435c();
  lVar1 = DAT_14c99e8b0;
  *(longlong *)(param_1 + 0x18) = DAT_14c99e8b0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  if (lVar1 != 0) {
    puVar2 = &DAT_14c99e8d0;
    if (DAT_14c99e8c0 != (undefined8 *)0x0) {
      puVar2 = DAT_14c99e8c0;
    }
    (**(code **)*puVar2)(puVar2,param_1 + 0x1c);
  }
  FUN_1470443ec();
  lVar1 = DAT_14c99e900;
  *(longlong *)(param_1 + 0x28) = DAT_14c99e900;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  if (lVar1 != 0) {
    puVar2 = &DAT_14c99e920;
    if (DAT_14c99e910 != (undefined8 *)0x0) {
      puVar2 = DAT_14c99e910;
    }
    (**(code **)*puVar2)(puVar2,param_1 + 0x2c);
  }
  return param_1;
}



// FUNCTION 1470442cc FUN_1470442cc body=144 status=ok
// SIG undefined FUN_1470442cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470442cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e8a0) {
    FUN_144b3d300(&DAT_14c99e8a0);
    if (DAT_14c99e8a0 == -1) {
      DAT_14c99e870 = 0;
      DAT_14c99e880 = &PTR_LAB_14a13dfc0;
      _DAT_14c99e888 = &LAB_142af854c;
      DAT_14c99e860 = &LAB_147046c28;
      atexit((_func_5014 *)&LAB_142af8405);
      _Init_thread_footer(&DAT_14c99e8a0);
      return;
    }
  }
  return;
}



// FUNCTION 14704435c FUN_14704435c body=144 status=ok
// SIG undefined FUN_14704435c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14704435c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e8f0) {
    FUN_144b3d300(&DAT_14c99e8f0);
    if (DAT_14c99e8f0 == -1) {
      DAT_14c99e8c0 = 0;
      DAT_14c99e8d0 = &PTR_LAB_14a13dfe0;
      _DAT_14c99e8d8 = &DAT_142af8556;
      DAT_14c99e8b0 = &LAB_147046c82;
      atexit((_func_5014 *)&LAB_142af842c);
      _Init_thread_footer(&DAT_14c99e8f0);
      return;
    }
  }
  return;
}



// FUNCTION 1470443ec FUN_1470443ec body=144 status=ok
// SIG undefined FUN_1470443ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470443ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e940) {
    FUN_144b3d300(&DAT_14c99e940);
    if (DAT_14c99e940 == -1) {
      DAT_14c99e910 = 0;
      DAT_14c99e920 = &PTR_LAB_14a13dfe0;
      _DAT_14c99e928 = &DAT_142af8558;
      DAT_14c99e900 = &LAB_147046c82;
      atexit((_func_5014 *)&LAB_142af8453);
      _Init_thread_footer(&DAT_14c99e940);
      return;
    }
  }
  return;
}



// FUNCTION 14704447c FUN_14704447c body=263 status=ok
// SIG undefined FUN_14704447c(void)

void FUN_14704447c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = param_2[4];
  param_1[6] = param_2[6];
  param_2[6] = 0;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  if (param_1[4] != 0) {
    param_2[4] = 0;
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar3;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  if (param_1[0xc] != 0) {
    param_2[0xc] = 0;
  }
  param_1[0x14] = param_2[0x14];
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  uVar1 = param_2[0x18];
  uVar2 = param_2[0x19];
  uVar3 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar3;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  if (param_1[0x14] != 0) {
    param_2[0x14] = 0;
  }
  return;
}



// FUNCTION 147044584 FUN_147044584 body=230 status=ok
// SIG undefined FUN_147044584(void)

undefined8 * FUN_147044584(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  param_1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = param_2 + 8;
    if ((undefined8 *)param_2[6] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_2[6];
    }
    (**(code **)*puVar3)(uVar1,param_1 + 6);
  }
  lVar2 = param_2[0xc];
  param_1[0xc] = lVar2;
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    puVar3 = param_2 + 0x10;
    if ((undefined8 *)param_2[0xe] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_2[0xe];
    }
    (**(code **)*puVar3)(puVar3,param_1 + 0xe);
  }
  lVar2 = param_2[0x14];
  param_1[0x14] = lVar2;
  param_1[0x16] = 0;
  if (lVar2 != 0) {
    puVar3 = param_2 + 0x18;
    if ((undefined8 *)param_2[0x16] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_2[0x16];
    }
    (**(code **)*puVar3)(puVar3,param_1 + 0x16);
  }
  return param_1;
}



// FUNCTION 14704466a FUN_14704466a body=109 status=ok
// SIG undefined FUN_14704466a(void)

undefined8 * FUN_14704466a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  FUN_1470446d8(param_1 + 4,param_2 + 4);
  FUN_1470447fc(param_1 + 0xc,param_2 + 0xc);
  FUN_1470447fc(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}



// FUNCTION 1470446d8 FUN_1470446d8 body=290 status=ok
// SIG undefined FUN_1470446d8(void)

longlong * FUN_1470446d8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470447fc FUN_1470447fc body=290 status=ok
// SIG undefined FUN_1470447fc(void)

longlong * FUN_1470447fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147044920 FUN_147044920 body=478 status=ok
// SIG undefined FUN_147044920(void)

undefined8 * FUN_147044920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  uVar5 = param_1[8];
  uVar6 = param_1[9];
  uVar7 = param_1[10];
  uVar8 = param_1[0xb];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[8];
  uVar14 = param_2[9];
  uVar15 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar15;
  param_1[8] = uVar13;
  param_1[9] = uVar14;
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  param_2[8] = uVar5;
  param_2[9] = uVar6;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar3 = param_1[0xe];
  uVar4 = param_1[0xf];
  uVar5 = param_1[0x10];
  uVar6 = param_1[0x11];
  uVar7 = param_1[0x12];
  uVar8 = param_1[0x13];
  uVar9 = param_2[0xc];
  uVar10 = param_2[0xd];
  uVar11 = param_2[0xe];
  uVar12 = param_2[0xf];
  uVar13 = param_2[0x10];
  uVar14 = param_2[0x11];
  uVar15 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar15;
  param_1[0x10] = uVar13;
  param_1[0x11] = uVar14;
  param_1[0xe] = uVar11;
  param_1[0xf] = uVar12;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  param_2[0x12] = uVar7;
  param_2[0x13] = uVar8;
  param_2[0x10] = uVar5;
  param_2[0x11] = uVar6;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  uVar1 = param_1[0x14];
  uVar2 = param_1[0x15];
  uVar3 = param_1[0x16];
  uVar4 = param_1[0x17];
  uVar5 = param_1[0x18];
  uVar6 = param_1[0x19];
  uVar7 = param_1[0x1a];
  uVar8 = param_1[0x1b];
  uVar9 = param_2[0x14];
  uVar10 = param_2[0x15];
  uVar11 = param_2[0x16];
  uVar12 = param_2[0x17];
  uVar13 = param_2[0x18];
  uVar14 = param_2[0x19];
  uVar15 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar15;
  param_1[0x18] = uVar13;
  param_1[0x19] = uVar14;
  param_1[0x16] = uVar11;
  param_1[0x17] = uVar12;
  param_1[0x14] = uVar9;
  param_1[0x15] = uVar10;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_28._0_4_ = (undefined4)uVar5;
  local_28._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar6;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_18._0_4_ = (undefined4)uVar7;
  local_18._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar8;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 0x1a) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0xd4) = local_18._4_4_;
  *(undefined4 *)(param_2 + 0x1b) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)param_2 + 0xdc) = uStack_10._4_4_;
  *(undefined4 *)(param_2 + 0x18) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0xc4) = local_28._4_4_;
  *(undefined4 *)(param_2 + 0x19) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0xcc) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 0x16) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0xb4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 0x17) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 0x14) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0xa4) = local_48._4_4_;
  *(undefined4 *)(param_2 + 0x15) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0xac) = uStack_40._4_4_;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
  local_48 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  local_18 = uVar7;
  uStack_10 = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_68);
}



// FUNCTION 147044aff thunk_FUN_147044b04 body=5 status=ok
// SIG undefined thunk_FUN_147044b04(void)

undefined * thunk_FUN_147044b04(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e838);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c99eb10) && (FUN_144b3d300(&DAT_14c99eb10), DAT_14c99eb10 == -1)) {
    FUN_1470441e4(&DAT_14c99ea30);
    atexit((_func_5014 *)&LAB_142af84ce);
    _Init_thread_footer(&DAT_14c99eb10);
  }
  if (DAT_14c99e7f0 != DAT_14c99e81c) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar5 = &DAT_14c99e820;
    if (DAT_14c99e828 != (undefined *)0x0) {
      puVar5 = DAT_14c99e828;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14c99e830 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar4) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar6 = DAT_14c99e7e8 + (longlong)iVar1 * 0x100;
      if (*(longlong *)(DAT_14c99e7e8 + (longlong)iVar1 * 0x100) == param_1) goto LAB_147044b4e;
      iVar1 = *(int *)(lVar6 + 0xf0);
    }
  }
  lVar6 = 0;
LAB_147044b4e:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e838);
  puVar5 = (undefined *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  puVar3 = &DAT_14c99ea30;
  if (puVar5 != (undefined *)0x0) {
    puVar3 = puVar5;
  }
  return puVar3;
}



// FUNCTION 147044b04 FUN_147044b04 body=309 status=ok
// SIG undefined FUN_147044b04(void)

undefined * FUN_147044b04(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e838);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c99eb10) && (FUN_144b3d300(&DAT_14c99eb10), DAT_14c99eb10 == -1)) {
    FUN_1470441e4(&DAT_14c99ea30);
    atexit((_func_5014 *)&LAB_142af84ce);
    _Init_thread_footer(&DAT_14c99eb10);
  }
  if (DAT_14c99e7f0 != DAT_14c99e81c) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar5 = &DAT_14c99e820;
    if (DAT_14c99e828 != (undefined *)0x0) {
      puVar5 = DAT_14c99e828;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14c99e830 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar4) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar6 = DAT_14c99e7e8 + (longlong)iVar1 * 0x100;
      if (*(longlong *)(DAT_14c99e7e8 + (longlong)iVar1 * 0x100) == param_1) goto LAB_147044b4e;
      iVar1 = *(int *)(lVar6 + 0xf0);
    }
  }
  lVar6 = 0;
LAB_147044b4e:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e838);
  puVar5 = (undefined *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  puVar3 = &DAT_14c99ea30;
  if (puVar5 != (undefined *)0x0) {
    puVar3 = puVar5;
  }
  return puVar3;
}



// FUNCTION 147044c3a FUN_147044c3a body=64 status=ok
// SIG undefined FUN_147044c3a(void)

longlong FUN_147044c3a(longlong param_1)

{
  int iVar1;
  
  FUN_147044584();
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c75f5c0 + 1;
  DAT_14c75f5c0 = DAT_14c75f5c0 + 1;
  *(int *)(param_1 + 0xe0) = iVar1;
  *(undefined8 *)(param_1 + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return param_1;
}



// FUNCTION 147044c7a FUN_147044c7a body=212 status=ok
// SIG undefined FUN_147044c7a(void)

longlong FUN_147044c7a(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  FUN_14704447c(param_1,param_4);
  LOCK();
  UNLOCK();
  iVar5 = DAT_14c75f5c0 + 1;
  DAT_14c75f5c0 = DAT_14c75f5c0 + 1;
  *(int *)(param_1 + 0xe0) = iVar5;
  *(undefined8 *)(param_1 + 0xe4) = 0xffffffffffffffff;
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_147044d08:
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147044d08;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 8);
    *(longlong **)(param_1 + 0xf8) = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
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
  iVar5 = (**(code **)(*param_3 + 0x20))(param_3,*(undefined4 *)(param_1 + 0xe0),param_2);
  *(int *)(param_1 + 0xe4) = iVar5;
  if (iVar5 != -1) {
    uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
    *(undefined4 *)(param_1 + 0xe8) = uVar6;
  }
  return param_1;
}



// FUNCTION 147044d4e FUN_147044d4e body=279 status=ok
// SIG undefined FUN_147044d4e(void)

longlong FUN_147044d4e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  FUN_1470441e4();
  *(undefined8 *)(param_1 + 0xe0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  LOCK();
  UNLOCK();
  iVar7 = DAT_14c75f5c0 + 1;
  DAT_14c75f5c0 = DAT_14c75f5c0 + 1;
  *(int *)(param_1 + 0xe0) = iVar7;
  plVar2 = *(longlong **)(param_2 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) {
        return param_1;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    plVar3 = *(longlong **)(param_2 + 0xf0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))
                (plVar3,*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_2 + 0xe8));
      FUN_14704466a(param_1,param_2);
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
      uVar4 = *(undefined8 *)(param_2 + 0xf0);
      lVar5 = *(longlong *)(param_2 + 0xf8);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0xf0) = uVar4;
      *(longlong *)(param_1 + 0xf8) = lVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return param_1;
}



// FUNCTION 147044e66 FUN_147044e66 body=725 status=ok
// SIG undefined FUN_147044e66(void)

longlong FUN_147044e66(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_14704447c();
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0xf0) = param_2[0x1e];
  lVar2 = param_2[0x1f];
  *(longlong *)(param_1 + 0xf8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1470441e4(&local_148);
  *param_2 = local_148;
  *(undefined4 *)(param_2 + 1) = local_140;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_13c;
  *(undefined4 *)(param_2 + 2) = local_138;
  *(undefined1 *)((longlong)param_2 + 0x14) = local_134;
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_2[10] = local_f8;
  param_2[0xb] = uStack_f0;
  param_2[8] = local_108;
  param_2[9] = uStack_100;
  param_2[6] = local_118;
  param_2[7] = uStack_110;
  param_2[4] = local_128;
  param_2[5] = uStack_120;
  uVar12 = param_2[0xc];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  uVar16 = param_2[0x10];
  uVar17 = param_2[0x11];
  uVar18 = param_2[0x12];
  uVar19 = param_2[0x13];
  param_2[0x12] = local_b8;
  param_2[0x13] = uStack_b0;
  param_2[0x10] = local_c8;
  param_2[0x11] = uStack_c0;
  param_2[0xe] = local_d8;
  param_2[0xf] = uStack_d0;
  param_2[0xc] = local_e8;
  param_2[0xd] = uStack_e0;
  uVar20 = param_2[0x14];
  uVar21 = param_2[0x15];
  uVar22 = param_2[0x16];
  uVar23 = param_2[0x17];
  uVar24 = param_2[0x18];
  uVar25 = param_2[0x19];
  uVar26 = param_2[0x1a];
  uVar27 = param_2[0x1b];
  param_2[0x1a] = CONCAT44(uStack_74,local_78);
  param_2[0x1b] = CONCAT44(uStack_6c,uStack_70);
  param_2[0x18] = CONCAT44(uStack_84,local_88);
  param_2[0x19] = CONCAT44(uStack_7c,uStack_80);
  param_2[0x16] = CONCAT44(uStack_94,local_98);
  param_2[0x17] = CONCAT44(uStack_8c,uStack_90);
  param_2[0x14] = CONCAT44(uStack_a4,local_a8);
  param_2[0x15] = CONCAT44(uStack_9c,uStack_a0);
  local_68._0_4_ = (undefined4)uVar20;
  local_68._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar21;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
  local_58._0_4_ = (undefined4)uVar22;
  local_58._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar23;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
  local_48._0_4_ = (undefined4)uVar24;
  local_48._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar25;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
  local_38._0_4_ = (undefined4)uVar26;
  local_38._4_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar27;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar27 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_128 = uVar4;
  uStack_120 = uVar5;
  local_118 = uVar6;
  uStack_110 = uVar7;
  local_108 = uVar8;
  uStack_100 = uVar9;
  local_f8 = uVar10;
  uStack_f0 = uVar11;
  local_e8 = uVar12;
  uStack_e0 = uVar13;
  local_d8 = uVar14;
  uStack_d0 = uVar15;
  local_c8 = uVar16;
  uStack_c0 = uVar17;
  local_b8 = uVar18;
  uStack_b0 = uVar19;
  local_68 = uVar20;
  uStack_60 = uVar21;
  local_58 = uVar22;
  uStack_50 = uVar23;
  local_48 = uVar24;
  uStack_40 = uVar25;
  local_38 = uVar26;
  uStack_30 = uVar27;
  FUN_14704513c(&local_148);
  param_2[0x1c] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x1d) = 0xffffffff;
  plVar3 = (longlong *)param_2[0x1f];
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704513c FUN_14704513c body=120 status=ok
// SIG undefined FUN_14704513c(void)

void FUN_14704513c(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xb0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001470451a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1470451b4 FUN_1470451b4 body=128 status=ok
// SIG undefined FUN_1470451b4(void)

void FUN_1470451b4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_14704521a;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 0xf0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1);
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
LAB_14704521a:
    plVar2 = *(longlong **)(param_1 + 0xf8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  FUN_14704513c(param_1);
  return;
}



// FUNCTION 147045234 FUN_147045234 body=120 status=ok
// SIG undefined FUN_147045234(void)

ulonglong FUN_147045234(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  bool bVar7;
  
  *param_2 = 0x3f800000;
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (plVar2 == (longlong *)0x0) {
LAB_14704529b:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_14704529b;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    plVar3 = *(longlong **)(param_1 + 0xf0);
    bVar7 = plVar3 != (longlong *)0x0;
    if (bVar7) {
      uVar6 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1,param_2);
      unaff_RBX = (ulonglong)uVar6;
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
}



// FUNCTION 1470452ac FUN_1470452ac body=11 status=ok
// SIG undefined FUN_1470452ac(void)

bool FUN_1470452ac(longlong param_1)

{
  return *(int *)(param_1 + 0xe8) != -1;
}



// FUNCTION 1470452d6 FUN_1470452d6 body=33 status=ok
// SIG undefined FUN_1470452d6(void)

void FUN_1470452d6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 1470452f8 FUN_1470452f8 body=94 status=ok
// SIG undefined FUN_1470452f8(void)

undefined8 * FUN_1470452f8(void)

{
  undefined8 *_Dst;
  
  if (DAT_14c99e948 == (undefined8 *)0x0) {
    _Dst = (undefined8 *)FUN_14494321d(0xa0);
    memset(_Dst,0,0xa0);
    *(undefined8 *)((longlong)_Dst + 0x3c) = 0xffffffff00000080;
    _Dst[0xc] = 0;
    *_Dst = &PTR_FUN_14a13e000;
    DAT_14c99e948 = _Dst;
  }
  return DAT_14c99e948;
}



// FUNCTION 147045360 FUN_147045360 body=54 status=ok
// SIG undefined FUN_147045360(void)

void FUN_147045360(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_14a13bea0;
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 147045396 FUN_147045396 body=56 status=ok
// SIG undefined FUN_147045396(void)

void FUN_147045396(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a13bea0;
  FUN_145aa5488(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470453ce FUN_1470453ce body=79 status=ok
// SIG undefined FUN_1470453ce(void)

undefined8 FUN_1470453ce(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0xa0;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        FUN_14704541e(param_3,plVar1);
        return 1;
      }
      plVar1 = plVar1 + 0x14;
      lVar2 = lVar2 + -0xa0;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 14704541e FUN_14704541e body=190 status=ok
// SIG undefined FUN_14704541e(void)

undefined4 * FUN_14704541e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar4 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar4;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a67f5c(param_1 + 0xc,param_2 + 0xc);
  FUN_1447cd5a6(param_1 + 0x10,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x14,param_2 + 0x14);
  FUN_1402ae23a(param_1 + 0x18,param_2 + 0x18);
  FUN_140bee9ec(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  FUN_147046696(param_1 + 0x24,param_2 + 0x24);
  return param_1;
}



// FUNCTION 1470454dc FUN_1470454dc body=68 status=ok
// SIG undefined FUN_1470454dc(void)

void FUN_1470454dc(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_145aa5488(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_147047930(param_1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 147045520 FUN_147045520 body=17 status=ok
// SIG undefined FUN_147045520(void)

undefined8 FUN_147045520(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  return 1;
}



// FUNCTION 147045538 FUN_147045538 body=26 status=ok
// SIG undefined FUN_147045538(void)

undefined8 FUN_147045538(longlong param_1,undefined8 param_2)

{
  FUN_1470429a6(param_2,param_1 + 8);
  return 1;
}



// FUNCTION 14704557c FUN_14704557c body=115 status=ok
// SIG undefined FUN_14704557c(void)

ulonglong FUN_14704557c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = *(int *)(param_1 + 0x20) + uVar1 + ~*(uint *)(param_1 + 0x24);
  uVar3 = (ulonglong)uVar4 / (ulonglong)uVar1;
  uVar4 = uVar4 % uVar1;
  if (0 < (int)uVar4) {
    iVar6 = *(int *)(param_1 + 0x24);
    plVar5 = (longlong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
    if (plVar5 != param_2) {
      puVar2 = (undefined8 *)*plVar5;
      *plVar5 = *param_2;
      *param_2 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    iVar6 = iVar6 + 1;
    uVar3 = (longlong)iVar6 / (longlong)*(int *)(param_1 + 0x18);
    LOCK();
    *(int *)(param_1 + 0x24) = iVar6 % *(int *)(param_1 + 0x18);
    UNLOCK();
  }
  return CONCAT71((int7)(uVar3 >> 8),0 < (int)uVar4) & 0xffffffff;
}



// FUNCTION 1470455f0 FUN_1470455f0 body=22 status=ok
// SIG undefined FUN_1470455f0(void)

ulonglong FUN_1470455f0(longlong param_1)

{
  return (ulonglong)
         (*(int *)(param_1 + 0x20) + *(uint *)(param_1 + 0x18) + ~*(uint *)(param_1 + 0x24)) %
         (ulonglong)*(uint *)(param_1 + 0x18);
}



// FUNCTION 147045606 FUN_147045606 body=44 status=ok
// SIG undefined FUN_147045606(void)

void FUN_147045606(longlong *param_1)

{
  char cVar1;
  
  if (param_1[1] == 0) {
    cVar1 = (**(code **)(*param_1 + 8))();
    if (cVar1 != '\0') {
      FUN_147045632(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147045632 FUN_147045632 body=102 status=ok
// SIG undefined FUN_147045632(void)

void FUN_147045632(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  local_28 = *(undefined8 *)(param_1 + 0x28);
  FUN_142af855a(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704569a FUN_14704569a body=269 status=ok
// SIG undefined FUN_14704569a(void)

longlong * FUN_14704569a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145cdd878(&local_40);
  if (*param_1 == 0 || *param_1 == local_40) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    (**(code **)(*plVar2 + 8))(plVar2);
    uVar3 = FUN_1448c2e86();
    FUN_147045832(&local_58);
    FUN_1470457a8(uVar3,&local_50,local_58);
    plVar2 = (longlong *)FUN_1448c2e86();
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = local_50;
    if ((longlong)local_48 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar4);
        if ((plVar2 != (longlong *)0x0) &&
           ((**(code **)(*plVar2 + 0x70))(plVar2,&local_60), *param_1 == local_60))
        goto LAB_14704578e;
        lVar4 = lVar4 + 8;
      } while ((longlong)local_48 * 8 != lVar4);
      plVar2 = (longlong *)0x0;
    }
LAB_14704578e:
    if (local_50 != 0) {
      FUN_1400020a8(local_50);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 1470457a8 FUN_1470457a8 body=137 status=ok
// SIG undefined FUN_1470457a8(void)

longlong * FUN_1470457a8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1470479a2(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147045832 FUN_147045832 body=120 status=ok
// SIG undefined FUN_147045832(void)

undefined8 * FUN_147045832(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99eb20) {
    FUN_144b3d300(&DAT_14c99eb20);
    if (DAT_14c99eb20 == -1) {
      FUN_1446f470e(&DAT_14c99eb18,L"Soundfield Endpoint",1);
      _Init_thread_footer(&DAT_14c99eb20);
    }
  }
  *param_1 = DAT_14c99eb18;
  return param_1;
}



// FUNCTION 1470458aa FUN_1470458aa body=291 status=ok
// SIG undefined FUN_1470458aa(void)

longlong * FUN_1470458aa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470423ce();
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145cdd878(&local_48);
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1446f84a2(param_1,0);
  *(longlong *)*param_1 = local_48;
  plVar3 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar3 + 8))(plVar3);
  uVar4 = FUN_1448c2e86();
  FUN_147045832(&local_50);
  FUN_1470457a8(uVar4,&local_48,local_50);
  plVar3 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar2 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x70))(*(longlong **)(lVar2 + lVar5),&local_58);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_58;
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470459da FUN_1470459da body=120 status=ok
// SIG undefined FUN_1470459da(void)

undefined8 * FUN_1470459da(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e9d0) {
    FUN_144b3d300(&DAT_14c99e9d0);
    if (DAT_14c99e9d0 == -1) {
      FUN_1446f470e(&DAT_14c99e9c8,L"No Encoding",1);
      _Init_thread_footer(&DAT_14c99e9d0);
    }
  }
  *param_1 = DAT_14c99e9c8;
  return param_1;
}



// FUNCTION 147045a52 FUN_147045a52 body=120 status=ok
// SIG undefined FUN_147045a52(void)

undefined8 * FUN_147045a52(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e9f0) {
    FUN_144b3d300(&DAT_14c99e9f0);
    if (DAT_14c99e9f0 == -1) {
      FUN_1446f470e(&DAT_14c99e9e8,L"Soundfield Format",1);
      _Init_thread_footer(&DAT_14c99e9f0);
    }
  }
  *param_1 = DAT_14c99e9e8;
  return param_1;
}



// FUNCTION 147045aca FUN_147045aca body=275 status=ok
// SIG undefined FUN_147045aca(void)

longlong * FUN_147045aca(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470459da(&local_40);
  if (*param_1 == 0 || *param_1 == local_40) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    (**(code **)(*plVar2 + 8))(plVar2);
    uVar3 = FUN_1448c2e86();
    FUN_147045a52(&local_58);
    FUN_147045bde(uVar3,&local_50,local_58);
    plVar2 = (longlong *)FUN_1448c2e86();
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = local_50;
    if ((longlong)local_48 != 0) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,&local_60);
          if (*param_1 == local_60) {
            (**(code **)(*plVar2 + 0x68))(plVar2);
            goto LAB_147045bbb;
          }
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)local_48 * 8 != lVar4);
    }
    plVar2 = (longlong *)0x0;
LAB_147045bbb:
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147045bde FUN_147045bde body=137 status=ok
// SIG undefined FUN_147045bde(void)

longlong * FUN_147045bde(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147047a28(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147045c68 FUN_147045c68 body=336 status=ok
// SIG undefined FUN_147045c68(void)

longlong * FUN_147045c68(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470423ce();
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145dec25e(&local_48);
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1446f84a2(param_1,0);
  *(longlong *)*param_1 = local_48;
  FUN_1470459da(&local_48);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = local_48;
  plVar3 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar3 + 8))(plVar3);
  uVar4 = FUN_1448c2e86();
  FUN_147045a52(&local_50);
  FUN_147045bde(uVar4,&local_48,local_50);
  plVar3 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar2 = local_48;
  if ((longlong)local_40 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar5) + 8))(*(longlong **)(lVar2 + lVar5),&local_58);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_58;
      lVar5 = lVar5 + 8;
    } while ((longlong)local_40 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147045dc6 FUN_147045dc6 body=55 status=ok
// SIG undefined FUN_147045dc6(void)

undefined8 * FUN_147045dc6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\AudioExtensions\\Public\\IAudioEndpoint.h",0x3a,
                L"Pure virtual not implemented (%s)",L"UAudioEndpointSettingsBase::GetProxy");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147045dfe FUN_147045dfe body=34 status=ok
// SIG undefined FUN_147045dfe(void)

undefined8 FUN_147045dfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147045e20 FUN_147045e20 body=74 status=ok
// SIG undefined FUN_147045e20(void)

undefined8 * FUN_147045e20(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a13bea0;
  FUN_145aa5488(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147045e6c FUN_147045e6c body=55 status=ok
// SIG undefined FUN_147045e6c(void)

undefined8 * FUN_147045e6c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\AudioExtensions\\Public\\ISoundfieldEndpoint.h",0x38,
                L"Pure virtual not implemented (%s)",L"USoundfieldEndpointSettingsBase::GetProxy");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147045ea4 FUN_147045ea4 body=55 status=ok
// SIG undefined FUN_147045ea4(void)

undefined8 * FUN_147045ea4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/AudioExtensions/Public\\ISoundfieldFormat.h",0x80,
                L"Pure virtual not implemented (%s)",L"USoundfieldEncodingSettingsBase::GetProxy");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147045edc FUN_147045edc body=55 status=ok
// SIG undefined FUN_147045edc(void)

undefined8 * FUN_147045edc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/AudioExtensions/Public\\ISoundfieldFormat.h",0x164,
                L"Pure virtual not implemented (%s)",L"USoundfieldEffectSettingsBase::GetProxy");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147045f14 FUN_147045f14 body=42 status=ok
// SIG undefined FUN_147045f14(void)

undefined8 FUN_147045f14(void)

{
  FUN_140033559(".\\Runtime/AudioExtensions/Public\\ISoundfieldFormat.h",399,
                L"Pure virtual not implemented (%s)",
                L"USoundfieldEncodingSettingsBase::SupportsFormat");
  return 0;
}



// FUNCTION 147045f3e FUN_147045f3e body=42 status=ok
// SIG undefined FUN_147045f3e(void)

undefined8 FUN_147045f3e(void)

{
  FUN_140033559(".\\Runtime/AudioExtensions/Public\\ISoundfieldFormat.h",0x194,
                L"Pure virtual not implemented (%s)",
                L"USoundfieldEncodingSettingsBase::GetSettingsClass");
  return 0;
}



// FUNCTION 147045f68 FUN_147045f68 body=42 status=ok
// SIG undefined FUN_147045f68(void)

undefined8 FUN_147045f68(void)

{
  FUN_140033559(".\\Runtime/AudioExtensions/Public\\ISoundfieldFormat.h",0x199,
                L"Pure virtual not implemented (%s)",
                L"USoundfieldEncodingSettingsBase::GetDefaultSettings");
  return 0;
}



// FUNCTION 147045f92 FUN_147045f92 body=55 status=ok
// SIG undefined FUN_147045f92(void)

undefined8 * FUN_147045f92(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/AudioExtensions/Public\\ISoundfieldFormat.h",0x19e,
                L"Pure virtual not implemented (%s)",L"USoundfieldEncodingSettingsBase::GetProxy");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147046044 FUN_147046044 body=59 status=ok
// SIG undefined FUN_147046044(void)

undefined8 FUN_147046044(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704614a FUN_14704614a body=59 status=ok
// SIG undefined FUN_14704614a(void)

undefined8 FUN_14704614a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147046258 FUN_147046258 body=59 status=ok
// SIG undefined FUN_147046258(void)

undefined8 FUN_147046258(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147046366 FUN_147046366 body=63 status=ok
// SIG undefined FUN_147046366(void)

undefined1 FUN_147046366(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14704541e(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1470463ce FUN_1470463ce body=59 status=ok
// SIG undefined FUN_1470463ce(void)

undefined8 FUN_1470463ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704641a FUN_14704641a body=40 status=ok
// SIG undefined FUN_14704641a(void)

void FUN_14704641a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_147046490(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 147046490 FUN_147046490 body=151 status=ok
// SIG undefined FUN_147046490(void)

void FUN_147046490(longlong param_1)

{
  FUN_147046527(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147046527 FUN_147046527 body=73 status=ok
// SIG undefined FUN_147046527(void)

void FUN_147046527(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147046572 FUN_147046572 body=34 status=ok
// SIG undefined FUN_147046572(void)

undefined8 FUN_147046572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147046594 FUN_147046594 body=43 status=ok
// SIG undefined FUN_147046594(void)

undefined8 FUN_147046594(undefined8 param_1,int param_2)

{
  FUN_1470465cc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1470465cc FUN_1470465cc body=105 status=ok
// SIG undefined FUN_1470465cc(void)

void FUN_1470465cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a13de90;
  FUN_1459d2d3c(param_1 + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014704662b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 147046636 FUN_147046636 body=96 status=ok
// SIG undefined FUN_147046636(void)

void FUN_147046636(longlong param_1,int param_2)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,0x10);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,0x10);
  }
  return;
}



// FUNCTION 147046696 FUN_147046696 body=95 status=ok
// SIG undefined FUN_147046696(void)

undefined8 * FUN_147046696(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147046527(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470466f6(param_1,iVar1);
      FUN_147046758(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470466f6 FUN_1470466f6 body=98 status=ok
// SIG undefined FUN_1470466f6(void)

void FUN_1470466f6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147046758 FUN_147046758 body=45 status=ok
// SIG undefined FUN_147046758(void)

void FUN_147046758(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147046786 FUN_147046786 body=29 status=ok
// SIG undefined FUN_147046786(void)

void FUN_147046786(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a13df80;
  return;
}



// FUNCTION 1470467a4 FUN_1470467a4 body=36 status=ok
// SIG undefined FUN_1470467a4(void)

undefined8 FUN_1470467a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1470467e4 FUN_1470467e4 body=93 status=ok
// SIG undefined FUN_1470467e4(void)

void FUN_1470467e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a13df10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147046842 FUN_147046842 body=123 status=ok
// SIG undefined FUN_147046842(void)

void FUN_147046842(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a13df10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


