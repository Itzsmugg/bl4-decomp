// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c24ada FUN_147c24ada body=176 status=ok
// SIG undefined FUN_147c24ada(void)

void FUN_147c24ada(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    pdVar4 = (double *)&DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
  }
  else {
    pdVar4 = (double *)(lVar3 + 0x260);
    dVar5 = *(double *)(lVar3 + 0x270);
  }
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  *(double *)(param_1 + 0x1c0) = dVar1 + -1.0;
  *(double *)(param_1 + 0x1c8) = dVar2 + -1.0;
  *(double *)(param_1 + 0x1d0) = dVar5 + -1.0;
  *(double *)(param_1 + 0x1d8) = dVar1 + 1.0;
  *(double *)(param_1 + 0x1e0) = dVar2 + 1.0;
  *(double *)(param_1 + 0x1e8) = dVar5 + 1.0;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  return;
}



// FUNCTION 147c24ba0 FUN_147c24ba0 body=683 status=ok
// SIG undefined FUN_147c24ba0(void)

void FUN_147c24ba0(longlong param_1,float param_2,int param_3,int param_4,double *param_5,
                  double *param_6)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x71) & 1) != 0) {
    param_5 = (double *)&DAT_14c8464e0;
  }
  dVar2 = *param_5;
  dVar3 = param_5[1];
  dVar4 = param_5[2];
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2f8);
    if (*(int *)(param_1 + 0x304) == 0) {
      if (param_3 < 1) goto LAB_147c24d1a;
      FUN_147c26560(plVar1,param_3);
    }
    else if (param_3 < 1) goto LAB_147c24d1a;
    iVar11 = 0;
    do {
      dVar5 = param_6[2];
      dVar6 = param_6[1];
      dVar7 = *param_6;
      iVar8 = *(int *)(param_1 + 0x300);
      *(uint *)(param_1 + 0x300) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x304) < iVar8 + 1U) {
        FUN_147c26600(plVar1,iVar8);
      }
      lVar9 = *plVar1;
      lVar10 = (longlong)iVar8 * 0x4c;
      *(float *)(lVar9 + lVar10) = (float)dVar2;
      *(float *)(lVar9 + 4 + lVar10) = (float)dVar3;
      *(float *)(lVar9 + 8 + lVar10) = (float)dVar4;
      *(float *)(lVar9 + 0xc + lVar10) = (float)iVar11 * (param_2 / (float)param_3);
      *(float *)(lVar9 + 0x10 + lVar10) = (float)dVar7;
      *(float *)(lVar9 + 0x14 + lVar10) = (float)dVar6;
      *(float *)(lVar9 + 0x18 + lVar10) = (float)dVar5;
      iVar11 = iVar11 + 1;
    } while (param_3 != iVar11);
  }
LAB_147c24d1a:
  if (param_4 != 0) {
    plVar1 = (longlong *)(param_1 + 0x308);
    if (*(int *)(param_1 + 0x314) == 0) {
      if (param_4 < 1) {
        return;
      }
      FUN_147c26560(plVar1,param_4);
    }
    else if (param_4 < 1) {
      return;
    }
    do {
      dVar5 = param_6[2];
      dVar6 = param_6[1];
      dVar7 = *param_6;
      iVar11 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar11 + 1U) {
        FUN_147c26600(plVar1,iVar11);
      }
      lVar9 = *plVar1;
      lVar10 = (longlong)iVar11 * 0x4c;
      *(float *)(lVar9 + lVar10) = (float)dVar2;
      *(float *)(lVar9 + 4 + lVar10) = (float)dVar3;
      *(float *)(lVar9 + 8 + lVar10) = (float)dVar4;
      *(undefined4 *)(lVar9 + 0xc + lVar10) = 0;
      *(float *)(lVar9 + 0x10 + lVar10) = (float)dVar7;
      *(float *)(lVar9 + 0x14 + lVar10) = (float)dVar6;
      *(float *)(lVar9 + 0x18 + lVar10) = (float)dVar5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 147c24e76 FUN_147c24e76 body=78 status=ok
// SIG undefined FUN_147c24e76(void)

void FUN_147c24e76(longlong param_1)

{
  FUN_147c254c0();
  FUN_147c263c6(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x290) + 0x310) == '\x01') {
    FUN_1435d2aac(*(longlong *)(param_1 + 0x290),param_1 + 0x298,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x340));
    return;
  }
  return;
}



// FUNCTION 147c24f1c FUN_147c24f1c body=38 status=ok
// SIG undefined FUN_147c24f1c(void)

undefined8 FUN_147c24f1c(undefined8 param_1,int param_2)

{
  FUN_147c24f8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c24f42 FUN_147c24f42 body=71 status=ok
// SIG undefined FUN_147c24f42(void)

void FUN_147c24f42(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 147c24f8a FUN_147c24f8a body=65 status=ok
// SIG undefined FUN_147c24f8a(void)

void FUN_147c24f8a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa03f20;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 147c24fcc FUN_147c24fcc body=38 status=ok
// SIG undefined FUN_147c24fcc(void)

undefined8 FUN_147c24fcc(undefined8 param_1,int param_2)

{
  FUN_147c25032();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c24ff2 FUN_147c24ff2 body=63 status=ok
// SIG undefined FUN_147c24ff2(void)

void FUN_147c24ff2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 147c25032 FUN_147c25032 body=65 status=ok
// SIG undefined FUN_147c25032(void)

void FUN_147c25032(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa03f90;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 147c25074 FUN_147c25074 body=178 status=ok
// SIG undefined FUN_147c25074(void)

void FUN_147c25074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa03cf0;
  FUN_1435e2726();
  FUN_1435e3212(param_1[0x52]);
  param_1[0x52] = 0;
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_147bf5e58(param_1);
  return;
}



// FUNCTION 147c25126 FUN_147c25126 body=130 status=ok
// SIG undefined FUN_147c25126(void)

undefined8 FUN_147c25126(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  lVar1 = FUN_14479d2ce(&local_28);
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x218) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x420))();
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c251bc FUN_147c251bc body=90 status=ok
// SIG undefined FUN_147c251bc(void)

void FUN_147c251bc(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 8),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000147c2520f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147c25216 FUN_147c25216 body=60 status=ok
// SIG undefined FUN_147c25216(void)

void FUN_147c25216(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144725486(lVar1 + 0x2d0);
  FUN_144725486(lVar1 + 8);
  if (*(longlong **)(lVar1 + 0x2f8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c25247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x2f8) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 147c2525c FUN_147c2525c body=12 status=ok
// SIG undefined FUN_147c2525c(void)

void FUN_147c2525c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c25265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c25268 FUN_147c25268 body=29 status=ok
// SIG undefined FUN_147c25268(void)

undefined8 FUN_147c25268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c25286 FUN_147c25286 body=96 status=ok
// SIG undefined FUN_147c25286(void)

void FUN_147c25286(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1435e3800(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1435e3800(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c252c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c252e6 FUN_147c252e6 body=79 status=ok
// SIG undefined FUN_147c252e6(void)

void FUN_147c252e6(longlong param_1)

{
  FUN_144725486(param_1 + 0x2d0);
  FUN_144725486(param_1 + 8);
  if (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x20))();
  }
  if (param_1 == 0) {
    return;
  }
  FUN_147c25336(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147c25336 FUN_147c25336 body=130 status=ok
// SIG undefined FUN_147c25336(void)

void FUN_147c25336(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  FUN_147c25032(param_1 + 0x2d0);
  FUN_143778f62(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1435da7c2();
  }
  FUN_147c24f8a(param_1 + 8);
  return;
}



// FUNCTION 147c253ca FUN_147c253ca body=12 status=ok
// SIG undefined FUN_147c253ca(void)

void FUN_147c253ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c253d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c253d6 FUN_147c253d6 body=29 status=ok
// SIG undefined FUN_147c253d6(void)

undefined8 FUN_147c253d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c253f4 FUN_147c253f4 body=94 status=ok
// SIG undefined FUN_147c253f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c253f4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147c252e6(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147c252e6(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c25448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c25452 FUN_147c25452 body=110 status=ok
// SIG undefined FUN_147c25452(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_147c25452(longlong param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (((*(int *)(param_1 + 0x34c) == 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x9e) & 0x10) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x2c) & 1) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x288) + 0x200);
    iVar2 = iVar1 + 0xf;
    iVar1 = iVar1 + 0x1e;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    fVar3 = (float)(iVar1 >> 4) * _DAT_14c7616a8;
    iVar2 = (iVar1 >> 4) - ((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
    if (DAT_14c7616ac <= iVar2) {
      iVar2 = DAT_14c7616ac;
    }
    return iVar2;
  }
  return 0;
}



// FUNCTION 147c254c0 FUN_147c254c0 body=345 status=ok
// SIG undefined FUN_147c254c0(void)

void FUN_147c254c0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  void *_Dst;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x2d8);
  iVar6 = *(int *)(param_1 + 0x2e4);
  if (iVar6 < 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    FUN_14480809c(puVar1);
    iVar6 = *(int *)(param_1 + 0x2e4);
  }
  iVar2 = *(int *)(param_1 + 0x2a0);
  pvVar5 = *(void **)(param_1 + 0x298);
  *(int *)(param_1 + 0x2e0) = iVar2;
  if (iVar2 == 0 && iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x2e4) = 0;
  }
  else {
    FUN_1447bda9e(puVar1);
    if (iVar2 != 0) {
      memcpy((void *)*puVar1,pvVar5,(longlong)iVar2 << 2);
    }
  }
  *(undefined8 *)(param_1 + 0x33c) = 0xffffffff;
  uVar4 = *(int *)(param_1 + 0x2c0) + 0x1f;
  if (0x1f < uVar4) {
    pvVar5 = (void *)(param_1 + 0x2a8);
    uVar7 = uVar4 >> 5;
    if (*(int *)(param_1 + 0x2c4) + 0x1fU >> 5 < uVar7) {
      FUN_14499171c(pvVar5,0,uVar7,4);
      *(uint *)(param_1 + 0x2c4) = uVar4 & 0xffffffe0;
    }
    _Dst = *(void **)(param_1 + 0x2b8);
    if (*(void **)(param_1 + 0x2b8) == (void *)0x0) {
      _Dst = pvVar5;
    }
    if (uVar4 < 0x120) {
      uVar7 = uVar4 >> 3 & 0x3c;
    }
    else {
      uVar7 = uVar7 << 2;
    }
    memset(_Dst,0,(ulonglong)uVar7);
    iVar6 = *(int *)(param_1 + 0x2c0);
    iVar2 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar2 = iVar6;
    }
    if (iVar6 % 0x20 != 0) {
      if (*(void **)(param_1 + 0x2b8) != (void *)0x0) {
        pvVar5 = *(void **)(param_1 + 0x2b8);
      }
      bVar3 = -(char)(iVar6 % 0x20);
      *(uint *)((longlong)pvVar5 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar5 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  return;
}



// FUNCTION 147c2561a FUN_147c2561a body=123 status=ok
// SIG undefined FUN_147c2561a(void)

undefined4 FUN_147c2561a(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 < 1) {
    uVar4 = 0xffffffff;
    if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_147c25659;
    cVar1 = FUN_147c25696(param_1);
    if (cVar1 == '\0') goto LAB_147c25659;
    iVar2 = *(int *)(param_1 + 0x10);
    lVar3 = (longlong)iVar2 * 4 + *(longlong *)(param_1 + 8);
  }
  else {
    lVar3 = (longlong)iVar2 * 4 + *(longlong *)(param_1 + 8);
  }
  uVar4 = *(undefined4 *)(lVar3 + -4);
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  FUN_144780a3c((longlong *)(param_1 + 8));
LAB_147c25659:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar4;
}



// FUNCTION 147c25696 FUN_147c25696 body=183 status=ok
// SIG undefined FUN_147c25696(void)

ulonglong FUN_147c25696(undefined1 *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RBX;
  uint uVar5;
  bool bVar6;
  float fVar7;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  fVar7 = (float)exp2f((float)*(uint *)(param_1 + 0x1c) + (float)*(uint *)(param_1 + 0x1c));
  iVar4 = (int)(longlong)(fVar7 * (float)uVar5);
  uVar5 = iVar4 * 4;
  bVar2 = uVar5 <= *(uint *)(param_1 + 0x24);
  bVar6 = uVar5 < 0x10000;
  if (bVar6 && bVar2) {
    uVar3 = iVar4 * 3;
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < uVar3) {
      FUN_1447808da(param_1 + 8);
    }
    if (iVar4 != 0) {
      iVar4 = 0;
      do {
        uVar5 = uVar5 - 1;
        *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 4) = uVar5;
        iVar4 = iVar4 + 1;
      } while (uVar3 + (uVar3 == 0) != iVar4);
    }
    *param_1 = 1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6 && bVar2) & 0xffffffff;
}



// FUNCTION 147c25762 FUN_147c25762 body=12 status=ok
// SIG undefined FUN_147c25762(void)

void FUN_147c25762(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c2576b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c2576e FUN_147c2576e body=29 status=ok
// SIG undefined FUN_147c2576e(void)

undefined8 FUN_147c2576e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c2578c FUN_147c2578c body=154 status=ok
// SIG undefined FUN_147c2578c(void)

int FUN_147c2578c(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x2c0) < 1) {
    iVar3 = 0;
  }
  else {
    uVar5 = 1;
    uVar6 = 0;
    iVar3 = 0;
    uVar7 = 0;
    do {
      if (*(float *)(*(longlong *)(param_1 + 0x2c8) + uVar6 * 4) <= *(float *)(param_1 + 0x19c)) {
        lVar4 = *(longlong *)(param_1 + 0x2b8);
        if (*(longlong *)(param_1 + 0x2b8) == 0) {
          lVar4 = param_1 + 0x2a8;
        }
        puVar1 = (uint *)(lVar4 + (ulonglong)uVar7 * 4);
        *puVar1 = *puVar1 & ~uVar5;
        if (uVar6 == *(uint *)(param_1 + 0x33c)) {
          *(undefined8 *)(param_1 + 0x33c) = 0xffffffff;
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar2 = uVar5 * 2;
      uVar7 = uVar7 + (iVar2 == 0);
      uVar5 = iVar2 + (uint)(iVar2 == 0);
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x2c0));
  }
  return iVar3;
}



// FUNCTION 147c25826 FUN_147c25826 body=398 status=ok
// SIG undefined FUN_147c25826(void)

/* WARNING: Type propagation algorithm not settling */

int * FUN_147c25826(longlong param_1,int *param_2,float param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  float local_88;
  float *local_80;
  float *local_78;
  float local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar5 = (float)FUN_147a77524(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x50) + 0x68,
                               *(undefined4 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x10),0);
  fVar6 = (float)FUN_147c2c0c2(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50));
  fVar7 = (float)FUN_147a77524(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x50) + 0x38,
                               *(undefined4 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x10),0);
  fVar7 = fVar7 * fVar6 * fVar5;
  fVar5 = 0.0;
  if (0.0 <= fVar7) {
    fVar5 = fVar7;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x288) + 0x10);
  fVar6 = fVar5;
  if (plVar1 != (longlong *)0x0) {
    local_80 = local_68 + 1;
    local_68[1] = 0.0;
    local_78 = local_68;
    local_68[0] = 0.0;
    local_88 = param_3;
    cVar2 = (**(code **)(*plVar1 + 0x388))(plVar1,param_1,0,0);
    fVar6 = local_68[0];
    if (cVar2 != '\0') {
      fVar6 = local_68[0] + fVar5;
    }
  }
  fVar5 = *(float *)(param_1 + 0x198);
  fVar7 = fVar6 * param_3 + fVar5;
  iVar3 = (int)fVar7;
  iVar4 = DAT_14c7616b0;
  if (iVar3 < DAT_14c7616b0) {
    iVar4 = iVar3;
  }
  *param_2 = iVar4;
  fVar6 = (float)(-(uint)(0.0 < fVar6) & (uint)(1.0 / fVar6));
  param_2[2] = (int)fVar6;
  param_2[1] = (int)((fVar5 * fVar6 + param_3) - fVar6);
  *(float *)(param_1 + 0x198) = fVar7 - (float)iVar4;
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147c259b6 FUN_147c259b6 body=58 status=ok
// SIG undefined FUN_147c259b6(void)

void FUN_147c259b6(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x2f4) == 0) {
      if (0 < param_2) goto LAB_147c259d9;
    }
    else {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x2f4) < param_2) {
LAB_147c259d9:
        FUN_147c26560(param_1 + 0x2e8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c259f2 FUN_147c259f2 body=2152 status=ok
// SIG undefined FUN_147c259f2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147c259f2(longlong param_1,float *param_2,int *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 **ppuVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  undefined1 *puVar24;
  void *_Dst;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  float fVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined8 *local_108;
  longlong *local_100;
  byte local_f1;
  ulonglong local_f0;
  undefined1 local_88 [72];
  
  ppuVar20 = &local_108;
  local_f0 = DAT_14c707940 ^ (ulonglong)local_88;
  lVar6 = **(longlong **)(param_1 + 0x288);
  if ((longlong)*(int *)(param_1 + 0x184) == -0x10) {
    puVar24 = (undefined1 *)0x0;
  }
  else {
    lVar16 = -((longlong)*(int *)(param_1 + 0x184) + 0x2eU & 0xfffffffffffffff0);
    ppuVar20 = (undefined8 **)((longlong)&local_108 + lVar16);
    puVar24 = (undefined1 *)((longlong)&local_108 + lVar16);
  }
  bVar4 = *(byte *)((longlong)*(longlong **)(param_1 + 0x288) + 0x204);
  local_f1 = bVar4 < 7;
  dVar10 = DAT_14c8464f0;
  dVar11 = DAT_14c8464e8;
  dVar12 = DAT_14c8464e0;
  if ((*(byte *)(lVar6 + 0x71) & 1) == 0) {
    dVar10 = *(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x58);
    dVar11 = *(double *)(param_1 + 0x1b0) - *(double *)(param_1 + 0x50);
    dVar12 = *(double *)(param_1 + 0x1a8) - *(double *)(param_1 + 0x48);
  }
  local_100 = param_4;
  if (0 < *param_3) {
    _Dst = (void *)((ulonglong)(puVar24 + 0xf) & 0xfffffffffffffff0);
    local_f1 = local_f1 & 0x43U >> (bVar4 & 0x1f);
    local_108 = (undefined8 *)((longlong)_Dst + 0x30);
    iVar23 = *param_3;
    do {
      iVar5 = *(int *)(param_1 + 0x184);
      *(undefined8 *)((longlong)ppuVar20 + -0x28) = 0x147c25b48;
      memset(_Dst,0,(longlong)iVar5);
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      uVar13 = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)((longlong)_Dst + 0x18) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)((longlong)_Dst + 0x20) = uVar13;
      *(undefined8 *)((longlong)_Dst + 0x28) = uVar3;
      uVar14 = *param_3 - (int)local_100[1];
      if ((int)uVar14 < iVar23 && (int)local_100[1] != 0) {
        lVar16 = *local_100;
        lVar15 = (longlong)(int)(~uVar14 + iVar23) * 0x4c;
        fVar1 = *(float *)(lVar16 + 8 + lVar15);
        fVar25 = *(float *)(lVar16 + 4 + lVar15);
        *(double *)((longlong)_Dst + 0x18) = (double)*(float *)(lVar16 + lVar15);
        *(double *)((longlong)_Dst + 0x20) = (double)fVar25;
        *(double *)((longlong)_Dst + 0x28) = (double)fVar1;
        *(undefined4 *)((longlong)_Dst + 0x90) = *(undefined4 *)(*local_100 + 0xc + lVar15);
        lVar16 = *local_100;
        *(float *)((longlong)_Dst + 0x40) =
             *(float *)(lVar16 + 0x10 + lVar15) + *(float *)((longlong)_Dst + 0x40);
        *(float *)((longlong)_Dst + 0x44) =
             *(float *)(lVar16 + 0x14 + lVar15) + *(float *)((longlong)_Dst + 0x44);
        *(float *)((longlong)_Dst + 0x48) =
             *(float *)(lVar16 + 0x18 + lVar15) + *(float *)((longlong)_Dst + 0x48);
      }
      lVar16 = *(longlong *)(param_1 + 0x288);
      if (0 < *(int *)(lVar16 + 0x20)) {
        lVar15 = 0;
        do {
          plVar7 = *(longlong **)(*(longlong *)(lVar16 + 0x18) + lVar15 * 8);
          if ((char)plVar7[5] < '\0') {
            lVar16 = *plVar7;
            *(void **)((longlong)ppuVar20 + -0x10) = _Dst;
            pcVar8 = *(code **)(lVar16 + 0x2a8);
            *(undefined8 *)((longlong)ppuVar20 + -0x38) = 0x147c25c4c;
            (*pcVar8)(plVar7,param_1,0);
            lVar16 = *(longlong *)(param_1 + 0x288);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(lVar16 + 0x20));
      }
      uVar14 = *(int *)(param_1 + 0x348) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x348) = uVar14;
      iVar5 = *param_3;
      fVar1 = param_2[0xe];
      param_2[6] = *(float *)(local_108 + 1);
      *(undefined8 *)(param_2 + 4) = *local_108;
      dVar27 = (double)((float)iVar23 / (float)iVar5);
      fVar25 = (float)(uVar14 >> 9 | 0x3f800000) + -1.0;
      dVar29 = (double)(float)param_3[1];
      lVar16 = *(longlong *)(param_1 + 0x288);
      dVar28 = (double)fVar25;
      dVar34 = *(double *)(lVar16 + 0x1e0) * dVar28 +
               (double)param_2[6] * dVar29 + dVar10 * dVar27 + *(double *)((longlong)_Dst + 0x28) +
               *(double *)(lVar16 + 0x1c8);
      dVar31 = *(double *)(lVar16 + 0x1d8) * dVar28 +
               (double)param_2[5] * dVar29 + dVar11 * dVar27 + *(double *)((longlong)_Dst + 0x20) +
               *(double *)(lVar16 + 0x1c0);
      dVar29 = dVar28 * *(double *)(lVar16 + 0x1d0) +
               (double)param_2[4] * dVar29 + dVar27 * dVar12 + *(double *)((longlong)_Dst + 0x18) +
               *(double *)(lVar16 + 0x1b8);
      if (((*(byte *)(lVar6 + 0x71) & 1) == 0) && ((*(byte *)(lVar6 + 0x73) & 4) != 0)) {
        lVar16 = *(longlong *)(param_1 + 0x10);
        dVar34 = dVar34 - (double)*(float *)(lVar16 + 0x8d0) * 65536.0;
        dVar31 = dVar31 - (double)*(float *)(lVar16 + 0x8cc) * 65536.0;
        dVar29 = dVar29 - (double)*(float *)(lVar16 + 0x8c8) * 65536.0;
      }
      *param_2 = (float)dVar29;
      param_2[1] = (float)dVar31;
      param_2[2] = (float)dVar34;
      param_2[3] = *(float *)((longlong)_Dst + 0x90);
      fVar26 = *(float *)((longlong)_Dst + 0x94);
      if (fVar26 <= 0.001) {
        fVar26 = 0.001;
      }
      param_2[7] = fVar26;
      fVar30 = *(float *)((longlong)_Dst + 0x50);
      fVar2 = *(float *)((longlong)_Dst + 0x54);
      fVar33 = (float)((double)ABS(fVar30) * *(double *)(*(longlong *)(param_1 + 0x288) + 0x1e8) *
                      0.5);
      param_2[8] = fVar33;
      if (local_f1 == 0) {
        dVar34 = (double)ABS(fVar2) * *(double *)(*(longlong *)(param_1 + 0x288) + 0x1f0) * 0.5;
      }
      else {
        dVar34 = (double)fVar33;
      }
      auVar35._0_4_ = (float)dVar34;
      auVar35._4_4_ = (int)((ulonglong)dVar34 >> 0x20);
      auVar35._8_8_ = 0;
      param_2[8] = (float)(~-(uint)(fVar30 < 0.0) & 0x3f000000) + fVar33;
      param_2[9] = (float)(~-(uint)(fVar2 < 0.0) & 0x3f000000) + auVar35._0_4_;
      fVar30 = *(float *)((longlong)_Dst + 0x3c) * 0.15915494;
      auVar32 = roundss(ZEXT416(0),ZEXT416((uint)fVar30),0xb);
      param_2[10] = fVar30 - auVar32._0_4_;
      param_2[0xb] = (*(float *)((longlong)_Dst + 0x4c) * 0.15915494 *
                     *(float *)(*(longlong *)(param_1 + 0x288) + 0x1f8)) / fVar26;
      param_2[0xf] = fVar25;
      lVar16 = *(longlong *)(param_1 + 0x288);
      fVar25 = (*(float *)(param_1 + 0x1a0) - *(float *)(lVar16 + 0x104)) *
               *(float *)(lVar16 + 0x100);
      fVar25 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar25);
      uVar17 = (uint)fVar25;
      uVar21 = *(byte *)(lVar16 + 0x119) - 1;
      uVar14 = uVar21;
      if (uVar17 < uVar21) {
        uVar14 = uVar17;
      }
      uVar18 = uVar17 + 1;
      if (uVar21 <= uVar17 + 1) {
        uVar18 = uVar21;
      }
      auVar32 = roundss(ZEXT816(0),ZEXT416((uint)fVar25),0xb);
      fVar25 = fVar25 - auVar32._0_4_;
      lVar15 = *(longlong *)(lVar16 + 0x108);
      lVar22 = (longlong)(int)(uVar14 * *(byte *)(lVar16 + 0x11a));
      lVar19 = (longlong)(int)(uVar18 * *(byte *)(lVar16 + 0x11a));
      fVar26 = *(float *)(lVar15 + lVar22 * 4);
      fVar26 = (*(float *)(lVar15 + lVar19 * 4) - fVar26) * fVar25 + fVar26;
      lVar16 = (ulonglong)*(byte *)(lVar16 + 0x11b) * 4;
      fVar30 = *(float *)(lVar16 + lVar15 + lVar22 * 4);
      fVar2 = *(float *)(lVar16 + lVar15 + lVar19 * 4);
      uVar14 = *(int *)(param_1 + 0x348) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x348) = uVar14;
      param_2[0xd] = (((fVar2 - fVar30) * fVar25 + fVar30) - fVar26) *
                     ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) + fVar26;
      lVar16 = *(longlong *)(param_1 + 0x288);
      fVar25 = (*(float *)(param_1 + 0x1a0) - *(float *)(lVar16 + 0x124)) *
               *(float *)(lVar16 + 0x120);
      fVar25 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar25);
      uVar17 = (uint)fVar25;
      uVar21 = *(byte *)(lVar16 + 0x139) - 1;
      uVar14 = uVar21;
      if (uVar17 < uVar21) {
        uVar14 = uVar17;
      }
      uVar18 = uVar17 + 1;
      if (uVar21 <= uVar17 + 1) {
        uVar18 = uVar21;
      }
      auVar32 = roundss(ZEXT816(0),ZEXT416((uint)fVar25),0xb);
      fVar25 = fVar25 - auVar32._0_4_;
      lVar15 = *(longlong *)(lVar16 + 0x128);
      lVar22 = (longlong)(int)(uVar14 * *(byte *)(lVar16 + 0x13a));
      lVar19 = (longlong)(int)(uVar18 * *(byte *)(lVar16 + 0x13a));
      fVar26 = *(float *)(lVar15 + lVar22 * 4);
      fVar26 = (*(float *)(lVar15 + lVar19 * 4) - fVar26) * fVar25 + fVar26;
      lVar16 = (ulonglong)*(byte *)(lVar16 + 0x13b) * 4;
      fVar30 = *(float *)(lVar16 + lVar15 + lVar22 * 4);
      fVar2 = *(float *)(lVar16 + lVar15 + lVar19 * 4);
      uVar14 = *(int *)(param_1 + 0x348) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x348) = uVar14;
      param_2[0xc] = (((fVar2 - fVar30) * fVar25 + fVar30) - fVar26) *
                     ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) + fVar26;
      lVar16 = *(longlong *)(param_1 + 0x288);
      fVar25 = (*(float *)(param_1 + 0x1a0) - *(float *)(lVar16 + 0x164)) *
               *(float *)(lVar16 + 0x160);
      fVar25 = (float)(-(uint)(0.0 <= fVar25) & (uint)fVar25);
      uVar17 = (uint)fVar25;
      uVar21 = *(byte *)(lVar16 + 0x179) - 1;
      uVar14 = uVar21;
      if (uVar17 < uVar21) {
        uVar14 = uVar17;
      }
      uVar18 = uVar17 + 1;
      if (uVar21 <= uVar17 + 1) {
        uVar18 = uVar21;
      }
      lVar15 = *(longlong *)(lVar16 + 0x168);
      lVar22 = (longlong)(int)(uVar14 * *(byte *)(lVar16 + 0x17a));
      fVar26 = *(float *)(lVar15 + lVar22 * 4);
      lVar19 = (longlong)(int)(uVar18 * *(byte *)(lVar16 + 0x17a));
      lVar16 = (ulonglong)*(byte *)(lVar16 + 0x17b) * 4;
      fVar30 = *(float *)(lVar16 + lVar15 + lVar22 * 4);
      fVar2 = *(float *)(lVar16 + lVar15 + lVar19 * 4);
      auVar32 = roundss(auVar35,ZEXT416((uint)fVar25),0xb);
      fVar25 = fVar25 - auVar32._0_4_;
      fVar26 = (*(float *)(lVar15 + lVar19 * 4) - fVar26) * fVar25 + fVar26;
      uVar14 = *(int *)(param_1 + 0x348) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x348) = uVar14;
      param_2[0xe] = (((fVar2 - fVar30) * fVar25 + fVar30) - fVar26) *
                     ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) + fVar26;
      param_3[1] = (int)((float)param_3[1] - (float)param_3[2]);
      fVar26 = 1.0 / param_2[7] + *(float *)(param_1 + 0x19c);
      fVar25 = *(float *)(*(longlong *)(param_1 + 0x2c8) + (longlong)(int)fVar1 * 4);
      if (fVar25 <= fVar26) {
        fVar25 = fVar26;
      }
      *(float *)(*(longlong *)(param_1 + 0x2c8) + (longlong)(int)fVar1 * 4) = fVar25;
      param_2 = param_2 + 0x13;
      bVar9 = 1 < iVar23;
      iVar23 = iVar23 + -1;
    } while (bVar9);
  }
  if ((local_f0 ^ (ulonglong)local_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)ppuVar20 + -0x28) = &UNK_147c2625a;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c26260 FUN_147c26260 body=357 status=ok
// SIG undefined FUN_147c26260(void)

void FUN_147c26260(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  
  if (0 < (int)param_3) {
    lVar7 = *(longlong *)(param_1 + 0x288);
    dVar4 = *(double *)(lVar7 + 400);
    dVar5 = *(double *)(lVar7 + 0x188);
    dVar6 = *(double *)(lVar7 + 0x180);
    lVar7 = 0;
    do {
      fVar1 = *(float *)(param_2 + 0x18 + lVar7);
      fVar2 = *(float *)(param_2 + 0x10 + lVar7);
      fVar3 = *(float *)(param_2 + 0x14 + lVar7);
      *(float *)(param_2 + lVar7) =
           ((float)dVar6 * 0.5 * param_4 + fVar2) * param_4 + *(float *)(param_2 + lVar7);
      *(float *)(param_2 + 4 + lVar7) =
           ((float)dVar5 * 0.5 * param_4 + fVar3) * param_4 + *(float *)(param_2 + 4 + lVar7);
      *(float *)(param_2 + 8 + lVar7) =
           ((float)dVar4 * 0.5 * param_4 + fVar1) * param_4 + *(float *)(param_2 + 8 + lVar7);
      *(float *)(param_2 + 0x10 + lVar7) = fVar2 + (float)dVar6 * param_4;
      *(float *)(param_2 + 0x14 + lVar7) = fVar3 + (float)dVar5 * param_4;
      *(float *)(param_2 + 0x18 + lVar7) = fVar1 + (float)dVar4 * param_4;
      *(float *)(param_2 + 0xc + lVar7) =
           *(float *)(param_2 + 0x1c + lVar7) * param_4 + *(float *)(param_2 + 0xc + lVar7);
      lVar7 = lVar7 + 0x4c;
    } while ((ulonglong)param_3 * 0x4c - lVar7 != 0);
  }
  return;
}



// FUNCTION 147c263c6 FUN_147c263c6 body=410 status=ok
// SIG undefined FUN_147c263c6(void)

void FUN_147c263c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  
  iVar3 = FUN_147c25452();
  iVar1 = *(int *)(param_1 + 0x2c0);
  uVar9 = 0;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  uVar7 = iVar1 - iVar3;
  if (uVar7 != 0 && iVar3 <= iVar1) {
    uVar10 = 1 << ((byte)(iVar1 - 1U) & 0x1f);
    uVar4 = iVar1 - 1U >> 5;
    lVar11 = *(longlong *)(param_1 + 0x2b8);
    if (*(longlong *)(param_1 + 0x2b8) == 0) {
      lVar11 = param_1 + 0x2a8;
    }
    do {
      if ((*(uint *)(lVar11 + (longlong)(int)uVar4 * 4) & uVar10) != 0) {
        uVar7 = uVar9;
        if (uVar9 == 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 - (uVar10 < 2);
      bVar12 = uVar10 < 2;
      uVar10 = uVar10 >> 1;
      if (bVar12) {
        uVar10 = 0x80000000;
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
    iVar1 = *(int *)(param_1 + 0x2a0);
    iVar3 = iVar1 - uVar7;
    lVar11 = (longlong)iVar3;
    if (0 < (int)uVar7) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0xa0);
      lVar8 = lVar11;
      do {
        FUN_147c251bc(lVar2 + 0xf8,*(undefined4 *)(*(longlong *)(param_1 + 0x298) + lVar8 * 4));
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar1);
    }
    FUN_144a6134a(param_1 + 0x2a8,iVar3,uVar7);
    iVar5 = iVar3;
    if (*(int *)(param_1 + 0x2a0) != iVar1) {
      pvVar6 = (void *)(lVar11 * 4 + *(longlong *)(param_1 + 0x298));
      memmove(pvVar6,(void *)((longlong)pvVar6 + (ulonglong)uVar7 * 4),
              (longlong)(*(int *)(param_1 + 0x2a0) - iVar1) << 2);
      iVar5 = *(int *)(param_1 + 0x2a0) - uVar7;
    }
    *(int *)(param_1 + 0x2a0) = iVar5;
    FUN_144780a3c((longlong *)(param_1 + 0x298));
    if (*(int *)(param_1 + 0x2d0) != iVar1) {
      pvVar6 = (void *)(lVar11 * 4 + *(longlong *)(param_1 + 0x2c8));
      memmove(pvVar6,(void *)((longlong)pvVar6 + (ulonglong)uVar7 * 4),
              (longlong)(*(int *)(param_1 + 0x2d0) - iVar1) << 2);
      iVar3 = *(int *)(param_1 + 0x2d0) - uVar7;
    }
    *(int *)(param_1 + 0x2d0) = iVar3;
    FUN_1401fef06(param_1 + 0x2c8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x310) = 1;
  }
  return;
}



// FUNCTION 147c26560 FUN_147c26560 body=109 status=ok
// SIG undefined FUN_147c26560(void)

void FUN_147c26560(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x4c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x4c)) {
      uVar2 = uVar1 / 0x4c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x4c,4);
  }
  return;
}



// FUNCTION 147c265ce FUN_147c265ce body=50 status=ok
// SIG undefined FUN_147c265ce(void)

longlong FUN_147c265ce(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147c26600(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x4c + *param_1;
}



// FUNCTION 147c26600 FUN_147c26600 body=143 status=ok
// SIG undefined FUN_147c26600(void)

void FUN_147c26600(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x4c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x4c)) {
      uVar5 = uVar4 / 0x4c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x4c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c26690 FUN_147c26690 body=272 status=ok
// SIG undefined FUN_147c26690(void)

undefined8 * FUN_147c26690(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147c08ff8();
  *param_1 = &PTR_FUN_14aa04180;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = (undefined4)DAT_14c846330;
  *(undefined4 *)(param_1 + 0x26) = (undefined4)DAT_14c846330;
  uVar2 = DAT_14c846330._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x134) = DAT_14c846330._4_4_;
  uVar3 = DAT_14c846338;
  *(undefined4 *)(param_1 + 0x27) = DAT_14c846338;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar2;
  *(undefined4 *)(param_1 + 0x29) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = DAT_14c846338;
  *(ulonglong *)((longlong)param_1 + 0x16c) =
       CONCAT44(DAT_14c846330._4_4_,(undefined4)DAT_14c846330);
  param_1[0x34] = 0;
  param_1[0x35] = 0x3f80000000000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x3f80000000000000;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3f80000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return param_1;
}



// FUNCTION 147c267a0 FUN_147c267a0 body=43 status=ok
// SIG undefined FUN_147c267a0(void)

undefined8 FUN_147c267a0(undefined8 param_1,int param_2)

{
  FUN_147c26aec();
  if (param_2 != 0) {
    FUN_147c08dc8(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 147c267cc FUN_147c267cc body=602 status=ok
// SIG undefined FUN_147c267cc(void)

void FUN_147c267cc(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  bool bVar21;
  int iVar22;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar19 = (undefined8 *)(param_1 + 0x130);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40);
  for (lVar18 = 9; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2b4) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2b0) = *(undefined4 *)(param_1 + 0x124);
  *(uint *)(*(longlong *)(param_1 + 0x38) + 700) =
       *(uint *)(*(longlong *)(param_1 + 0x38) + 700) & 0xfffffffe | *(uint *)(param_1 + 0x1e8) & 1;
  *(uint *)(*(longlong *)(param_1 + 0x38) + 700) =
       *(uint *)(*(longlong *)(param_1 + 0x38) + 700) & 0xfffffffd | *(uint *)(param_1 + 0x1e8) & 2;
  *(uint *)(*(longlong *)(param_1 + 0x38) + 700) =
       *(uint *)(*(longlong *)(param_1 + 0x38) + 700) & 0xfffffffb | *(uint *)(param_1 + 0x1e8) & 4;
  *(uint *)(*(longlong *)(param_1 + 0x38) + 700) =
       *(uint *)(*(longlong *)(param_1 + 0x38) + 700) & 0xfffffff7 | *(uint *)(param_1 + 0x1e8) & 8;
  lVar18 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar18 + 0xf0) != 0) {
    FUN_147d95fc2(lVar18 + 0xf0,param_1 + 0xa0);
    lVar18 = *(longlong *)(param_1 + 0x38);
  }
  *(undefined8 *)(lVar18 + 0xc0) = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  uVar7 = *(undefined4 *)(param_1 + 0x4c);
  uVar8 = *(undefined4 *)(param_1 + 0x50);
  uVar9 = *(undefined4 *)(param_1 + 0x54);
  uVar10 = *(undefined4 *)(param_1 + 0x58);
  uVar11 = *(undefined4 *)(param_1 + 0x5c);
  uVar12 = *(undefined4 *)(param_1 + 100);
  uVar13 = *(undefined4 *)(param_1 + 0x68);
  uVar14 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(lVar18 + 0xb0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(lVar18 + 0xb4) = uVar12;
  *(undefined4 *)(lVar18 + 0xb8) = uVar13;
  *(undefined4 *)(lVar18 + 0xbc) = uVar14;
  *(undefined4 *)(lVar18 + 0xa0) = uVar8;
  *(undefined4 *)(lVar18 + 0xa4) = uVar9;
  *(undefined4 *)(lVar18 + 0xa8) = uVar10;
  *(undefined4 *)(lVar18 + 0xac) = uVar11;
  *(undefined4 *)(lVar18 + 0x90) = uVar4;
  *(undefined4 *)(lVar18 + 0x94) = uVar5;
  *(undefined4 *)(lVar18 + 0x98) = uVar6;
  *(undefined4 *)(lVar18 + 0x9c) = uVar7;
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(lVar18 + 200);
    uVar16 = *(undefined8 *)(lVar18 + 0xd0);
    uVar17 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(lVar18 + 200) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(lVar18 + 0xd0) = uVar17;
    local_38._0_4_ = (undefined4)uVar15;
    local_38._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar16;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
    *(undefined4 *)(param_1 + 0x78) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x7c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x84) = uStack_30._4_4_;
    local_38 = uVar15;
    uStack_30 = uVar16;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(lVar18 + 0xd8);
    uVar16 = *(undefined8 *)(lVar18 + 0xe0);
    uVar17 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(lVar18 + 0xe0) = uVar17;
    local_38._0_4_ = (undefined4)uVar15;
    local_38._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar16;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
    *(undefined4 *)(param_1 + 0x88) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x8c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x90) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x94) = uStack_30._4_4_;
    local_38 = uVar15;
    uStack_30 = uVar16;
  }
  lVar18 = *(longlong *)(param_1 + 0x38);
  iVar2 = *(int *)(lVar18 + 0x304);
  if (*(byte *)(param_1 + 0x20) == 1) {
    if ((*(byte *)(lVar18 + 0x308) & 1) == 0) goto LAB_147c269e3;
    if (*(int *)(lVar18 + 0x30c) != 0) goto LAB_147c269b3;
    bVar21 = 2 < (int)(&DAT_14ca814b8)
                      [(ulonglong)
                       *(ushort *)
                        (&DAT_14ca85070 +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0xa8) * 2) * 0xf];
LAB_147c269d9:
    iVar22 = (uint)bVar21 * 2;
  }
  else {
    if ((*(byte *)(lVar18 + 0x308) & 1) == 0) goto LAB_147c269e3;
LAB_147c269b3:
    if (*(int *)(lVar18 + 0x30c) != 1) goto LAB_147c269e3;
    iVar22 = 1;
    if ((*(byte *)((longlong)&DAT_14ca814c8 +
                  (ulonglong)
                  *(ushort *)
                   (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0xa8) * 2) *
                  0x3c + 1) & 2) == 0) {
      bVar21 = (bool)(2 < (int)(&DAT_14ca814b8)
                               [(ulonglong)
                                *(ushort *)
                                 (&DAT_14ca85070 +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0xa8) * 2) * 0xf
                               ] & *(byte *)(param_1 + 0x20));
      goto LAB_147c269d9;
    }
  }
  *(int *)(lVar18 + 0x304) = iVar22;
LAB_147c269e3:
  lVar18 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar18 + 0x304) != iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    piVar1 = (int *)(lVar3 + 0x90 + (longlong)iVar2 * 4);
    *piVar1 = *piVar1 + -1;
    piVar1 = (int *)(lVar3 + 0x90 + (longlong)*(int *)(lVar18 + 0x304) * 4);
    *piVar1 = *piVar1 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c26a30 FUN_147c26a30 body=179 status=ok
// SIG undefined FUN_147c26a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147c26a30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5610) {
    FUN_144b3d300(&DAT_14caf5610);
    if (DAT_14caf5610 == -1) {
      _DAT_14caf55b0 = &PTR_FUN_14aa00630;
      _DAT_14caf55b8 = 0;
      _DAT_14caf55c0 = 0;
      _DAT_14caf55c8 = 0;
      _DAT_14caf55d0 = 0;
      _DAT_14caf55d8 = 0;
      uRam000000014caf55e0 = 0;
      _DAT_14caf55e8 = &DAT_3f8000003f800000;
      uRam000000014caf55f0 = 0x3f800000;
      DAT_14caf55f8 = 0;
      _DAT_14caf55fc = 0;
      uRam000000014caf5604 = 0;
      atexit((_func_5014 *)&LAB_1435e53e0);
      _Init_thread_footer(&DAT_14caf5610);
    }
  }
  return &DAT_14caf55b0;
}



// FUNCTION 147c26aec FUN_147c26aec body=98 status=ok
// SIG undefined FUN_147c26aec(void)

void FUN_147c26aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa04180;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) < 0) {
    FUN_147c26560(param_1 + 0xf,0);
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c26b4e FUN_147c26b4e body=42 status=ok
// SIG undefined FUN_147c26b4e(void)

longlong FUN_147c26b4e(longlong param_1,int param_2)

{
  FUN_147c26b78(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26b78 FUN_147c26b78 body=82 status=ok
// SIG undefined FUN_147c26b78(void)

void FUN_147c26b78(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa041c8;
  FUN_144725486(param_1 + 1);
  if (param_1[0x31] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x31] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147c26bca(param_1 + 1);
  return;
}



// FUNCTION 147c26bca FUN_147c26bca body=68 status=ok
// SIG undefined FUN_147c26bca(void)

void FUN_147c26bca(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa041d0;
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 147c26c0e FUN_147c26c0e body=38 status=ok
// SIG undefined FUN_147c26c0e(void)

undefined8 FUN_147c26c0e(undefined8 param_1,int param_2)

{
  FUN_147c26b78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26c34 FUN_147c26c34 body=38 status=ok
// SIG undefined FUN_147c26c34(void)

undefined8 FUN_147c26c34(undefined8 param_1,int param_2)

{
  FUN_147c26bca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26c5e FUN_147c26c5e body=78 status=ok
// SIG undefined FUN_147c26c5e(void)

longlong FUN_147c26c5e(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aa04230;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26cac FUN_147c26cac body=77 status=ok
// SIG undefined FUN_147c26cac(void)

undefined8 * FUN_147c26cac(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa04230;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26cfa FUN_147c26cfa body=49 status=ok
// SIG undefined FUN_147c26cfa(void)

undefined8 * FUN_147c26cfa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 147c26d2c FUN_147c26d2c body=42 status=ok
// SIG undefined FUN_147c26d2c(void)

undefined8 * FUN_147c26d2c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 147c26d56 FUN_147c26d56 body=38 status=ok
// SIG undefined FUN_147c26d56(void)

undefined8 FUN_147c26d56(undefined8 param_1,int param_2)

{
  FUN_147c26efc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26d7c FUN_147c26d7c body=264 status=ok
// SIG undefined FUN_147c26d7c(void)

void FUN_147c26d7c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1435e53fa(&local_20,param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = local_20;
  local_20 = 0;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_20 != 0) {
      LOCK();
      puVar1 = (uint *)(local_20 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  FUN_1435e54f2(&local_20,param_1 + 0x100);
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_20;
  local_20 = 0;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_20 != 0) {
      LOCK();
      puVar1 = (uint *)(local_20 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c26e94 FUN_147c26e94 body=104 status=ok
// SIG undefined FUN_147c26e94(void)

void FUN_147c26e94(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147c26efc FUN_147c26efc body=99 status=ok
// SIG undefined FUN_147c26efc(void)

void FUN_147c26efc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa04240;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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



// FUNCTION 147c26f60 FUN_147c26f60 body=51 status=ok
// SIG undefined FUN_147c26f60(void)

void FUN_147c26f60(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c26f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147c26f9e FUN_147c26f9e body=12 status=ok
// SIG undefined FUN_147c26f9e(void)

void FUN_147c26f9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c26fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c26faa FUN_147c26faa body=29 status=ok
// SIG undefined FUN_147c26faa(void)

undefined8 FUN_147c26faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c26fc8 FUN_147c26fc8 body=56 status=ok
// SIG undefined FUN_147c26fc8(void)

undefined8 * FUN_147c26fc8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa042f0;
  FUN_144725486();
  FUN_1463f0544(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c2702e FUN_147c2702e body=38 status=ok
// SIG undefined FUN_147c2702e(void)

undefined8 FUN_147c2702e(undefined8 param_1,int param_2)

{
  FUN_1463f0544();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c27054 FUN_147c27054 body=260 status=ok
// SIG undefined FUN_147c27054(void)

void FUN_147c27054(longlong param_1,undefined8 param_2)

{
  FUN_147440a6c(param_1 + 4,param_2,L"ParticleIndices",0);
  FUN_1474409b8(param_1 + 8,param_2,L"ParticleIndicesOffset",0);
  FUN_1474409b8(param_1 + 0xe,param_2,L"TilePageScale",0);
  FUN_147440a6c(param_1 + 0x14,param_2,L"PositionTexture",0);
  FUN_147440a6c(param_1 + 0x18,param_2,L"PositionTextureSampler",0);
  FUN_147440a6c(param_1 + 0x1c,param_2,L"VelocityTexture",0);
  FUN_147440a6c(param_1 + 0x20,param_2,L"VelocityTextureSampler",0);
  FUN_147440a6c(param_1 + 0x24,param_2,L"AttributesTexture",0);
  FUN_147440a6c(param_1 + 0x28,param_2,L"AttributesTextureSampler",0);
  FUN_147440a6c(param_1 + 0x2c,param_2,L"CurveTexture",0);
  FUN_147440a6c(param_1 + 0x30,param_2,L"CurveTextureSampler",0);
  return;
}



// FUNCTION 147c27158 FUN_147c27158 body=138 status=ok
// SIG undefined FUN_147c27158(void)

code * FUN_147c27158(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VectorFieldTexturesSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000004ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c272fa;
}



// FUNCTION 147c271e2 FUN_147c271e2 body=138 status=ok
// SIG undefined FUN_147c271e2(void)

code * FUN_147c271e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeltaSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000448;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2726c;
}



// FUNCTION 147c2726c FUN_147c2726c body=138 status=ok
// SIG undefined FUN_147c2726c(void)

code * FUN_147c2726c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorldScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000447;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ed9c88;
}



// FUNCTION 147c272fa FUN_147c272fa body=138 status=ok
// SIG undefined FUN_147c272fa(void)

code * FUN_147c272fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VectorFieldTextures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000004ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c27384;
}



// FUNCTION 147c27384 FUN_147c27384 body=138 status=ok
// SIG undefined FUN_147c27384(void)

code * FUN_147c27384(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2740e;
}



// FUNCTION 147c2740e FUN_147c2740e body=138 status=ok
// SIG undefined FUN_147c2740e(void)

code * FUN_147c2740e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000004aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c27498;
}



// FUNCTION 147c27498 FUN_147c27498 body=138 status=ok
// SIG undefined FUN_147c27498(void)

code * FUN_147c27498(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderAttributesTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dc269e;
}



// FUNCTION 147c27522 FUN_147c27522 body=138 status=ok
// SIG undefined FUN_147c27522(void)

code * FUN_147c27522(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AttributesTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dc2728;
}



// FUNCTION 147c275ac FUN_147c275ac body=138 status=ok
// SIG undefined FUN_147c275ac(void)

code * FUN_147c275ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c27636;
}



// FUNCTION 147c27636 FUN_147c27636 body=138 status=ok
// SIG undefined FUN_147c27636(void)

code * FUN_147c27636(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000004a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dc2614;
}



// FUNCTION 147c276c0 FUN_147c276c0 body=138 status=ok
// SIG undefined FUN_147c276c0(void)

code * FUN_147c276c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000004a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2774a;
}



// FUNCTION 147c2774a FUN_147c2774a body=132 status=ok
// SIG undefined FUN_147c2774a(void)

undefined1 * FUN_147c2774a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CollisionDepthBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c277ce;
}



// FUNCTION 147c277d2 FUN_147c277d2 body=56 status=ok
// SIG undefined FUN_147c277d2(void)

undefined8 * FUN_147c277d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa045e0;
  FUN_144725486();
  FUN_1463f0816(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c27838 FUN_147c27838 body=38 status=ok
// SIG undefined FUN_147c27838(void)

undefined8 FUN_147c27838(undefined8 param_1,int param_2)

{
  FUN_1463f0816();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c2785e FUN_147c2785e body=56 status=ok
// SIG undefined FUN_147c2785e(void)

undefined8 * FUN_147c2785e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa04640;
  FUN_144725486();
  FUN_1463f094e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c278c4 FUN_147c278c4 body=38 status=ok
// SIG undefined FUN_147c278c4(void)

undefined8 FUN_147c278c4(undefined8 param_1,int param_2)

{
  FUN_1463f094e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c278ea FUN_147c278ea body=133 status=ok
// SIG undefined FUN_147c278ea(void)

longlong FUN_147c278ea(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  memset((void *)(param_1 + 8),0,0x90);
  *(undefined8 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  FUN_1449cc1de(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x308) = 1;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined1 *)(param_1 + 0x318) = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined1 *)(param_1 + 0x328) = 1;
  return param_1;
}



// FUNCTION 147c2796f FUN_147c2796f body=361 status=ok
// SIG undefined FUN_147c2796f(void)

void FUN_147c2796f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_1474454df(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14aa046a0;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c27ad8 FUN_147c27ad8 body=497 status=ok
// SIG undefined FUN_147c27ad8(void)

longlong * FUN_147c27ad8(longlong *param_1,longlong *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_1449cc1de();
  lVar4 = param_2[0x31];
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  *param_1 = lVar4;
  lVar4 = param_2[0x34];
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc0 + 0x10);
  }
  param_1[2] = lVar4;
  lVar4 = param_2[0x35];
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  param_1[3] = lVar4;
  plVar5 = param_2;
  plVar6 = param_1 + 4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2 + 0xc;
  plVar6 = param_1 + 0x10;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2 + 0x18;
  plVar6 = param_1 + 0x1c;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2 + 0x24;
  plVar6 = param_1 + 0x28;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  *(int *)(param_1 + 0x34) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(int *)(param_1 + 0x35) = (int)param_2[0x36];
  dVar2 = (double)param_2[0x39];
  dVar3 = (double)param_2[0x38];
  *(float *)(param_1 + 0x36) = (float)(double)param_2[0x37];
  *(float *)((longlong)param_1 + 0x1b4) = (float)dVar3;
  *(float *)(param_1 + 0x37) = (float)dVar2;
  dVar2 = (double)param_2[0x3c];
  dVar3 = (double)param_2[0x3b];
  *(float *)(param_1 + 0x38) = (float)(double)param_2[0x3a];
  *(float *)((longlong)param_1 + 0x1c4) = (float)dVar3;
  *(float *)(param_1 + 0x39) = (float)dVar2;
  fVar1 = *(float *)((longlong)param_2 + 0x1ec);
  *(float *)((longlong)param_1 + 0x1cc) = fVar1;
  *(float *)(param_1 + 0x3a) = 1.0 / fVar1;
  *(int *)((longlong)param_1 + 0x1d4) = (int)param_2[0x3e];
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 500);
  lVar4 = param_2[0x3f];
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc0 + 0x10);
  }
  param_1[0x41] = lVar4;
  lVar4 = param_2[0x40];
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10);
  }
  param_1[0x42] = lVar4;
  return param_1;
}



// FUNCTION 147c27cc9 FUN_147c27cc9 body=361 status=ok
// SIG undefined FUN_147c27cc9(void)

void FUN_147c27cc9(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_1474454df(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14aa046a0;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c27e32 FUN_147c27e32 body=361 status=ok
// SIG undefined FUN_147c27e32(void)

void FUN_147c27e32(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_1474454df(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14aa046a0;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c27f9c FUN_147c27f9c body=56 status=ok
// SIG undefined FUN_147c27f9c(void)

undefined8 * FUN_147c27f9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa046b0;
  FUN_144725486();
  FUN_1463f0ab2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c28002 FUN_147c28002 body=38 status=ok
// SIG undefined FUN_147c28002(void)

undefined8 FUN_147c28002(undefined8 param_1,int param_2)

{
  FUN_1463f0ab2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c28028 FUN_147c28028 body=56 status=ok
// SIG undefined FUN_147c28028(void)

undefined8 * FUN_147c28028(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa04710;
  FUN_144725486();
  FUN_1463f0bdc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c2808e FUN_147c2808e body=38 status=ok
// SIG undefined FUN_147c2808e(void)

undefined8 FUN_147c2808e(undefined8 param_1,int param_2)

{
  FUN_1463f0bdc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c280b4 FUN_147c280b4 body=1328 status=ok
// SIG undefined FUN_147c280b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c280b4(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  
  *(int *)(param_1 + 4) = (int)param_3[1] << 4;
  (**(code **)(*param_1 + 0x18))(param_1,&DAT_14ca85100);
  uVar2 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar2 == 0) {
    return;
  }
  lVar5 = param_1[2];
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  puVar11 = (undefined8 *)
            (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0,uVar2 << 7,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  auVar9 = _DAT_149f996e0;
  auVar8 = _DAT_149e1a1d0;
  iVar7 = DAT_14c7616d0;
  iVar10 = DAT_14c7616d0;
  if (*(char *)(param_4 + 0x110) == '\0') {
    iVar7 = DAT_14c7616c8;
    iVar10 = DAT_14c7616c4;
  }
  if (0 < (int)uVar2) {
    uVar3 = *(uint *)(param_4 + 0xe8);
    uVar4 = *(uint *)(param_4 + 0xec);
    auVar24._0_4_ = (float)iVar10;
    fVar15 = 0.5 / auVar24._0_4_;
    auVar24._4_4_ = auVar24._0_4_;
    auVar24._8_4_ = auVar24._0_4_;
    auVar24._12_4_ = auVar24._0_4_;
    auVar24 = divps(_DAT_149daaba0,auVar24);
    uVar12 = 0;
    do {
      uVar6 = (ulonglong)*(uint *)(*param_3 + uVar12 * 4);
      fVar34 = (float)(uVar6 % (ulonglong)*(uint *)(param_4 + 0xf0)) / (float)uVar3;
      auVar13 = roundss(ZEXT816(0),ZEXT416((uint)fVar34),0xb);
      fVar35 = fVar34 - auVar13._0_4_;
      fVar36 = fVar35 + auVar24._0_4_ + fVar15;
      fVar38 = fVar35 + auVar24._4_4_ + fVar15;
      fVar39 = fVar35 + auVar24._8_4_ + fVar15;
      fVar35 = fVar35 + auVar24._12_4_ + fVar15;
      fVar16 = ABS(fVar36);
      fVar18 = ABS(fVar38);
      fVar20 = ABS(fVar39);
      fVar22 = ABS(fVar35);
      auVar13._0_4_ =
           -(uint)((float)((uint)((uint)fVar16 < 0x7f800001) * 0x7f800001 |
                          (uint)((uint)fVar16 >= 0x7f800001) * (int)fVar16) == fVar16);
      auVar13._4_4_ =
           -(uint)((float)((uint)((uint)fVar18 < 0x7f800001) * 0x7f800001 |
                          (uint)((uint)fVar18 >= 0x7f800001) * (int)fVar18) == fVar18);
      auVar13._8_4_ =
           -(uint)((float)((uint)((uint)fVar20 < 0x7f800001) * 0x7f800001 |
                          (uint)((uint)fVar20 >= 0x7f800001) * (int)fVar20) == fVar20);
      auVar13._12_4_ =
           -(uint)((float)((uint)((uint)fVar22 < 0x7f800001) * 0x7f800001 |
                          (uint)((uint)fVar22 >= 0x7f800001) * (int)fVar22) == fVar22);
      auVar13 = blendvps(auVar8,_DAT_14aa00a70,auVar13);
      auVar27._0_4_ =
           -(uint)((float)((uint)(0x387fffff < (uint)fVar16) * 0x387fffff |
                          (uint)(0x387fffff >= (uint)fVar16) * (int)fVar16) == fVar16);
      auVar27._4_4_ =
           -(uint)((float)((uint)(0x387fffff < (uint)fVar18) * 0x387fffff |
                          (uint)(0x387fffff >= (uint)fVar18) * (int)fVar18) == fVar18);
      auVar27._8_4_ =
           -(uint)((float)((uint)(0x387fffff < (uint)fVar20) * 0x387fffff |
                          (uint)(0x387fffff >= (uint)fVar20) * (int)fVar20) == fVar20);
      auVar27._12_4_ =
           -(uint)((float)((uint)(0x387fffff < (uint)fVar22) * 0x387fffff |
                          (uint)(0x387fffff >= (uint)fVar22) * (int)fVar22) == fVar22);
      auVar32._0_4_ = fVar16 + 0.5;
      auVar32._4_4_ = fVar18 + 0.5;
      auVar32._8_4_ = fVar20 + 0.5;
      auVar32._12_4_ = fVar22 + 0.5;
      auVar13 = blendvps(auVar13,auVar32,auVar27);
      uVar17 = (int)fVar16 + 0xc7800000;
      uVar19 = (int)fVar18 + 0xc7800000;
      uVar21 = (int)fVar20 + 0xc7800000;
      uVar23 = (int)fVar22 + 0xc7800000;
      auVar37._0_4_ =
           -(uint)(((uint)(0xeffffff < uVar17) * 0xeffffff | (0xeffffff >= uVar17) * uVar17) ==
                  uVar17);
      auVar37._4_4_ =
           -(uint)(((uint)(0xeffffff < uVar19) * 0xeffffff | (0xeffffff >= uVar19) * uVar19) ==
                  uVar19);
      auVar37._8_4_ =
           -(uint)(((uint)(0xeffffff < uVar21) * 0xeffffff | (0xeffffff >= uVar21) * uVar21) ==
                  uVar21);
      auVar37._12_4_ =
           -(uint)(((uint)(0xeffffff < uVar23) * 0xeffffff | (0xeffffff >= uVar23) * uVar23) ==
                  uVar23);
      auVar29._0_4_ = ((uint)fVar16 >> 0xd & 1) + (int)fVar16 + 0x8000fff >> 0xd;
      auVar29._4_4_ = ((uint)fVar18 >> 0xd & 1) + (int)fVar18 + 0x8000fff >> 0xd;
      auVar29._8_4_ = ((uint)fVar20 >> 0xd & 1) + (int)fVar20 + 0x8000fff >> 0xd;
      auVar29._12_4_ = ((uint)fVar22 >> 0xd & 1) + (int)fVar22 + 0x8000fff >> 0xd;
      auVar27 = blendvps(auVar13,auVar29,auVar37);
      auVar13 = roundps(auVar37,ZEXT416((uint)fVar34),3);
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = auVar13._0_4_ / (float)uVar4;
      auVar13 = roundss(ZEXT416(0),auVar14,0xb);
      fVar18 = (float)(uVar6 / *(uint *)(param_4 + 0xf0));
      fVar16 = fVar18 + 0.5;
      if (0x387fffff < (uint)fVar18) {
        fVar16 = (float)((int)fVar18 + 0x8000fff + (uint)(((uint)fVar18 >> 0xd & 1) != 0) >> 0xd);
      }
      fVar20 = (float)((0x7f800000 < (uint)fVar18 | 0x3e) << 9);
      if ((uint)fVar18 < 0x47800000) {
        fVar20 = fVar16;
      }
      auVar33._0_4_ = (uint)fVar36 >> 0x10;
      auVar33._4_4_ = (uint)fVar38 >> 0x10;
      auVar33._8_4_ = (uint)fVar39 >> 0x10;
      auVar33._12_4_ = (uint)fVar35 >> 0x10;
      auVar37 = pshufb(auVar33 & _DAT_149bcaf20 | auVar27,auVar9);
      iVar10 = 0;
      do {
        fVar22 = (float)iVar10 / (float)iVar7 + 0.5 / (float)iVar7 + (auVar14._0_4_ - auVar13._0_4_)
        ;
        fVar34 = ABS(fVar22);
        fVar18 = (float)((int)fVar34 + 0x8000fff + (uint)(((uint)fVar34 >> 0xd & 1) != 0) >> 0xd);
        fVar16 = fVar34 + 0.5;
        if (0x387fffff < (uint)fVar34) {
          fVar16 = fVar18;
        }
        uVar17 = movmskps(fVar18,ZEXT416((uint)fVar22));
        if (0x477fffff < (uint)fVar34) {
          fVar16 = (float)((0x7f800000 < (uint)fVar34 | 0x3e) << 9);
        }
        uVar17 = (uVar17 & 1) << 0xf;
        auVar25._8_4_ =
             uVar17 | (uint)fVar16 & 0xffff |
             (uint)(((ulonglong)(uVar17 | (uint)fVar16) & 0xffff) << 0x10);
        auVar25._12_4_ =
             uVar17 | (uint)fVar16 & 0xffff |
             (uint)(((ulonglong)(uVar17 | (uint)fVar16) << 0x30) >> 0x20);
        auVar25._4_4_ = auVar37._4_4_;
        auVar28._4_4_ = auVar25._8_4_;
        auVar28._0_4_ = auVar37._0_4_;
        auVar28._8_4_ = auVar25._8_4_;
        auVar28._12_4_ = auVar25._12_4_;
        auVar29 = pshuflw(auVar28,auVar28,0xd8);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = (ulonglong)(uint)fVar20 & 0xffff | (ulonglong)SUB42(fVar20,0) << 0x10;
        auVar32 = pshuflw(auVar31,auVar31,0xd8);
        auVar30._0_8_ = auVar29._0_8_;
        auVar30._8_4_ = auVar29._4_4_;
        auVar30._12_4_ = auVar32._4_4_;
        auVar25._0_4_ = auVar25._12_4_;
        auVar27 = pshuflw(auVar25,auVar25,0x72);
        auVar33 = ZEXT416((uint)fVar20 & 0xffff |
                          (uint)(((ulonglong)SUB42(fVar20,0) << 0x30) >> 0x20)) << 0x20;
        auVar33 = pshuflw(auVar33,auVar33,0x72);
        auVar26._0_8_ = auVar27._0_8_;
        auVar26._8_4_ = auVar27._4_4_;
        auVar26._12_4_ = auVar33._4_4_;
        puVar11[2] = CONCAT44(auVar33._0_4_,auVar27._0_4_);
        puVar11[3] = auVar26._8_8_;
        *puVar11 = CONCAT44(auVar32._0_4_,auVar29._0_4_);
        puVar11[1] = auVar30._8_8_;
        puVar11 = puVar11 + 4;
        iVar10 = iVar10 + 1;
      } while (iVar10 != 4);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
  }
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c28502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 147c285e4 FUN_147c285e4 body=111 status=ok
// SIG undefined FUN_147c285e4(void)

void FUN_147c285e4(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 1);
  *(int *)(param_1 + 4) = iVar1;
  *(uint *)((longlong)param_1 + 0x24) = iVar1 + 7U & 0xfffffff8;
  (**(code **)(*param_1 + 0x18))(param_1,&DAT_14ca85100);
  if (*(int *)(param_3 + 1) != 0) {
    FUN_1435d25ba(param_2,param_1[2],*param_3,*(int *)(param_3 + 1),
                  *(undefined4 *)((longlong)param_1 + (ulonglong)(1 < DAT_14c760db4) * 4 + 0x20),
                  param_4);
  }
  return;
}



// FUNCTION 147c28654 FUN_147c28654 body=218 status=ok
// SIG undefined FUN_147c28654(void)

int * FUN_147c28654(longlong *param_1,int *param_2)

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
      FUN_14055ddfe(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 8 + *param_1;
  return param_2;
}



// FUNCTION 147c2872e FUN_147c2872e body=105 status=ok
// SIG undefined FUN_147c2872e(void)

void FUN_147c2872e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (longlong)param_2 * 8) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147c28798 FUN_147c28798 body=132 status=ok
// SIG undefined FUN_147c28798(void)

void FUN_147c28798(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c2881e FUN_147c2881e body=48 status=ok
// SIG undefined FUN_147c2881e(void)

void FUN_147c2881e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147c2884e FUN_147c2884e body=41 status=ok
// SIG undefined FUN_147c2884e(void)

void FUN_147c2884e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147c28878(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 147c28878 FUN_147c28878 body=88 status=ok
// SIG undefined FUN_147c28878(void)

void FUN_147c28878(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147c288d0 FUN_147c288d0 body=112 status=ok
// SIG undefined FUN_147c288d0(void)

void FUN_147c288d0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xa0,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,0x10);
  }
  return;
}



// FUNCTION 147c28940 FUN_147c28940 body=147 status=ok
// SIG undefined FUN_147c28940(void)

void FUN_147c28940(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c289d4 FUN_147c289d4 body=257 status=ok
// SIG undefined FUN_147c289d4(void)

void FUN_147c289d4(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147c28ad6(*param_2,lVar11,*param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147c28ad6 FUN_147c28ad6 body=475 status=ok
// SIG undefined FUN_147c28ad6(void)

void FUN_147c28ad6(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_68 [32];
  short *local_48;
  longlong local_40;
  float local_38;
  float local_34;
  undefined8 local_30;
  short local_22;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 1.0 / (float)*(int *)(param_3 + 0xe0);
  local_34 = 1.0 / (float)*(int *)(param_3 + 0xe4);
  local_30 = DAT_14c8461b4;
  if (*(char *)(param_3 + 0x110) == '\x01') {
    local_30 = CONCAT44((float)DAT_14c7616d0 / (float)*(int *)(param_3 + 0xe4),
                        (float)DAT_14c7616d0 / (float)*(int *)(param_3 + 0xe0));
  }
  FUN_1435e6084(&local_40,&local_38);
  FUN_145ef34b8();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14caf47d8) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_147c28be5;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c28be5:
  if (*psVar6 != -1) {
    local_20 = local_40;
    local_48 = &local_22;
    local_22 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_40 != 0) {
    LOCK();
    puVar1 = (uint *)(local_40 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_40);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c28cb2 FUN_147c28cb2 body=89 status=ok
// SIG undefined FUN_147c28cb2(void)

void FUN_147c28cb2(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147c28d0c FUN_147c28d0c body=62 status=ok
// SIG undefined FUN_147c28d0c(void)

void FUN_147c28d0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c28d4a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147c28d4a FUN_147c28d4a body=112 status=ok
// SIG undefined FUN_147c28d4a(void)

ulonglong FUN_147c28d4a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147c28d84;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147c28d84:
  return param_2 & 0xffffffff;
}



// FUNCTION 147c28dba FUN_147c28dba body=132 status=ok
// SIG undefined FUN_147c28dba(void)

void FUN_147c28dba(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c28e40 FUN_147c28e40 body=62 status=ok
// SIG undefined FUN_147c28e40(void)

void FUN_147c28e40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c28e7e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147c28e7e FUN_147c28e7e body=93 status=ok
// SIG undefined FUN_147c28e7e(void)

ulonglong FUN_147c28e7e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147c28edc FUN_147c28edc body=31 status=ok
// SIG undefined FUN_147c28edc(void)

void FUN_147c28edc(longlong *param_1)

{
  FUN_1446e0b6e();
                    /* WARNING: Could not recover jumptable at 0x000147c28ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x390))(param_1);
  return;
}



// FUNCTION 147c28f00 FUN_147c28f00 body=65 status=ok
// SIG undefined FUN_147c28f00(void)

void FUN_147c28f00(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c28f42(param_1,param_2,param_3,lVar1);
  return;
}



// FUNCTION 147c28f42 FUN_147c28f42 body=836 status=ok
// SIG undefined FUN_147c28f42(void)

void FUN_147c28f42(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = (ulonglong)param_3;
  lVar2 = *(longlong *)(param_1 + 0x30);
  fVar4 = 1.0;
  fVar5 = 1.0;
  switch(*(char *)(lVar2 + 0xc)) {
  case '\x01':
    goto switchD_147c28f8f_caseD_1;
  case '\x02':
    fVar5 = *(float *)(param_5 + 0x40);
    break;
  case '\x03':
    fVar5 = *(float *)(param_5 + 0x44);
    break;
  case '\x04':
    fVar5 = *(float *)(param_5 + 0x48);
    break;
  case '\x05':
    fVar5 = SQRT(*(float *)(param_5 + 0x48) * *(float *)(param_5 + 0x48) +
                 *(float *)(param_5 + 0x40) * *(float *)(param_5 + 0x40) +
                 *(float *)(param_5 + 0x44) * *(float *)(param_5 + 0x44));
  }
  if ((*(char *)(lVar2 + 0xc) == '\0') || ((*(uint *)(lVar2 + 0x10) & 1) != 0)) {
    puVar1 = (undefined4 *)(param_2 + 0x1a0);
    if ((*(byte *)(lVar2 + 8) & 1) == 0) {
      puVar1 = (undefined4 *)(param_5 + 0x90);
    }
    fVar4 = (float)FUN_147a77524(lVar2 + 0x18,*puVar1,*(undefined8 *)(param_2 + 0x10),param_4);
  }
  *(float *)(param_5 + uVar3) = fVar5 * fVar4;
  lVar2 = *(longlong *)(param_1 + 0x30);
switchD_147c28f8f_caseD_1:
  fVar4 = 1.0;
  fVar5 = 1.0;
  switch(*(char *)(lVar2 + 0x54)) {
  case '\x01':
    goto switchD_147c2901d_caseD_1;
  case '\x02':
    fVar5 = *(float *)(param_5 + 0x40);
    break;
  case '\x03':
    fVar5 = *(float *)(param_5 + 0x44);
    break;
  case '\x04':
    fVar5 = *(float *)(param_5 + 0x48);
    break;
  case '\x05':
    fVar5 = SQRT(*(float *)(param_5 + 0x48) * *(float *)(param_5 + 0x48) +
                 *(float *)(param_5 + 0x40) * *(float *)(param_5 + 0x40) +
                 *(float *)(param_5 + 0x44) * *(float *)(param_5 + 0x44));
  }
  if ((*(char *)(lVar2 + 0x54) == '\0') || ((*(uint *)(lVar2 + 0x58) & 1) != 0)) {
    puVar1 = (undefined4 *)(param_2 + 0x1a0);
    if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
      puVar1 = (undefined4 *)(param_5 + 0x90);
    }
    fVar4 = (float)FUN_147a77524(lVar2 + 0x60,*puVar1,*(undefined8 *)(param_2 + 0x10),param_4);
  }
  *(float *)(param_5 + 4 + uVar3) = fVar5 * fVar4;
  lVar2 = *(longlong *)(param_1 + 0x30);
switchD_147c2901d_caseD_1:
  fVar4 = 1.0;
  fVar5 = 1.0;
  switch(*(char *)(lVar2 + 0x9c)) {
  case '\x01':
    goto switchD_147c290af_caseD_1;
  case '\x02':
    fVar5 = *(float *)(param_5 + 0x40);
    break;
  case '\x03':
    fVar5 = *(float *)(param_5 + 0x44);
    break;
  case '\x04':
    fVar5 = *(float *)(param_5 + 0x48);
    break;
  case '\x05':
    fVar5 = SQRT(*(float *)(param_5 + 0x48) * *(float *)(param_5 + 0x48) +
                 *(float *)(param_5 + 0x40) * *(float *)(param_5 + 0x40) +
                 *(float *)(param_5 + 0x44) * *(float *)(param_5 + 0x44));
  }
  if ((*(char *)(lVar2 + 0x9c) == '\0') || ((*(uint *)(lVar2 + 0xa0) & 1) != 0)) {
    puVar1 = (undefined4 *)(param_2 + 0x1a0);
    if ((*(byte *)(lVar2 + 0x98) & 1) == 0) {
      puVar1 = (undefined4 *)(param_5 + 0x90);
    }
    fVar4 = (float)FUN_147a77524(lVar2 + 0xa8,*puVar1,*(undefined8 *)(param_2 + 0x10),param_4);
  }
  *(float *)(param_5 + 8 + uVar3) = fVar5 * fVar4;
  lVar2 = *(longlong *)(param_1 + 0x30);
switchD_147c290af_caseD_1:
  fVar4 = 1.0;
  fVar5 = 1.0;
  switch(*(char *)(lVar2 + 0xe4)) {
  case '\x01':
    goto switchD_147c29144_caseD_1;
  case '\x02':
    fVar5 = *(float *)(param_5 + 0x40);
    break;
  case '\x03':
    fVar5 = *(float *)(param_5 + 0x44);
    break;
  case '\x04':
    fVar5 = *(float *)(param_5 + 0x48);
    break;
  case '\x05':
    fVar5 = SQRT(*(float *)(param_5 + 0x48) * *(float *)(param_5 + 0x48) +
                 *(float *)(param_5 + 0x40) * *(float *)(param_5 + 0x40) +
                 *(float *)(param_5 + 0x44) * *(float *)(param_5 + 0x44));
  }
  if ((*(char *)(lVar2 + 0xe4) == '\0') || ((*(uint *)(lVar2 + 0xe8) & 1) != 0)) {
    puVar1 = (undefined4 *)(param_2 + 0x1a0);
    if ((*(byte *)(lVar2 + 0xe0) & 1) == 0) {
      puVar1 = (undefined4 *)(param_5 + 0x90);
    }
    fVar4 = (float)FUN_147a77524(lVar2 + 0xf0,*puVar1,*(undefined8 *)(param_2 + 0x10),param_4);
  }
  *(float *)(param_5 + 0xc + uVar3) = fVar5 * fVar4;
switchD_147c29144_caseD_1:
  return;
}



// FUNCTION 147c29286 FUN_147c29286 body=5642 status=ok
// SIG undefined FUN_147c29286(void)

void FUN_147c29286(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  longlong local_a0;
  
  if ((((param_2 != 0) && (*(int *)(param_1 + 0x40) != 0)) && (0 < *(int *)(param_2 + 0x18c))) &&
     ((*(longlong *)(param_2 + 0x168) != 0 && (*(longlong *)(param_2 + 0x170) != 0)))) {
    uVar12 = param_3 & 0xffffffff;
    local_a0 = FUN_147c05556(param_2,param_1);
    if (local_a0 == 0) {
      local_a0 = *(longlong *)(param_2 + 0x10) + 0x8f0;
    }
    uVar4 = *(int *)(param_1 + 0x40) - 1;
    lVar11 = -1;
    if (uVar4 < 8) {
      lVar11 = *(longlong *)(&DAT_14aa07918 + (ulonglong)uVar4 * 8);
    }
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    switch(uVar4) {
    case 0:
    case 1:
    case 3:
    case 7:
      uVar4 = *(uint *)(param_2 + 0x18c);
      lVar10 = lVar11 * 0x48 + *(longlong *)(param_1 + 0x30);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        if (0 < (int)uVar4) {
          uVar13 = (ulonglong)uVar4 + 1;
          do {
            uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
            if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
              lVar6 = uVar5 + lVar2;
              puVar9 = (undefined4 *)(lVar6 + 0x90);
              if ((*(byte *)(lVar10 + 8) & 1) != 0) {
                puVar9 = (undefined4 *)(param_2 + 0x1a0);
              }
              uVar14 = FUN_147a77524(lVar10 + 0x18,*puVar9,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar6 + uVar12 + lVar11 * 4) = uVar14;
            }
            uVar13 = uVar13 - 1;
          } while (1 < uVar13);
        }
      }
      else if (0 < (int)uVar4) {
        uVar13 = (ulonglong)uVar4 + 1;
        do {
          uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
          if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
            lVar6 = uVar5 + lVar2;
            fVar16 = 1.0;
            switch(*(char *)(lVar10 + 0xc)) {
            case '\x02':
              fVar16 = *(float *)(lVar6 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar6 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar6 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar6 + 0x48) * *(float *)(lVar6 + 0x48) +
                            *(float *)(lVar6 + 0x40) * *(float *)(lVar6 + 0x40) +
                            *(float *)(lVar6 + 0x44) * *(float *)(lVar6 + 0x44));
            }
            if ((*(char *)(lVar10 + 0xc) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar10 + 0x10) & 1) != 0)) {
              puVar9 = (undefined4 *)(lVar6 + 0x90);
              if ((*(byte *)(lVar10 + 8) & 1) != 0) {
                puVar9 = (undefined4 *)(param_2 + 0x1a0);
              }
              fVar15 = (float)FUN_147a77524(lVar10 + 0x18,*puVar9,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar6 + uVar12 + lVar11 * 4) = fVar16 * fVar15;
          }
          uVar13 = uVar13 - 1;
        } while (1 < uVar13);
      }
      break;
    case 2:
      lVar11 = *(longlong *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_2 + 0x18c);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        if (0 < (int)uVar4) {
          uVar13 = (ulonglong)uVar4 + 1;
          do {
            uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
            if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
              lVar10 = uVar5 + lVar2;
              puVar9 = (undefined4 *)(param_2 + 0x1a0);
              if ((*(byte *)(lVar11 + 8) & 1) == 0) {
                puVar9 = (undefined4 *)(lVar10 + 0x90);
              }
              uVar14 = FUN_147a77524(lVar11 + 0x18,*puVar9,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + uVar12) = uVar14;
              puVar9 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
                puVar9 = (undefined4 *)(param_2 + 0x1a0);
              }
              uVar14 = FUN_147a77524(lVar11 + 0x60,*puVar9,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + 4 + uVar12) = uVar14;
            }
            uVar13 = uVar13 - 1;
          } while (1 < uVar13);
        }
      }
      else if (0 < (int)uVar4) {
        uVar13 = (ulonglong)uVar4 + 1;
        do {
          uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
          if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
            lVar10 = uVar5 + lVar2;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0xc)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0xc) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0x10) & 1) != 0)) {
              puVar9 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 8) & 1) != 0) {
                puVar9 = (undefined4 *)(param_2 + 0x1a0);
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0x18,*puVar9,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + uVar12) = fVar16 * fVar15;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0x54)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0x54) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0x58) & 1) != 0)) {
              puVar9 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
                puVar9 = (undefined4 *)(param_2 + 0x1a0);
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0x60,*puVar9,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + 4 + uVar12) = fVar16 * fVar15;
          }
          uVar13 = uVar13 - 1;
        } while (1 < uVar13);
      }
      break;
    default:
      lVar11 = *(longlong *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_2 + 0x18c);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        if (0 < (int)uVar4) {
          param_3 = param_3 & 0xffffffff;
          puVar9 = (undefined4 *)(param_2 + 0x1a0);
          uVar12 = (ulonglong)uVar4 + 1;
          do {
            uVar13 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar12 * 2) * iVar1);
            if ((*(byte *)(lVar2 + 0x6f + uVar13) & 4) == 0) {
              lVar10 = uVar13 + lVar2;
              if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
                uVar14 = *(undefined4 *)(lVar10 + param_3);
              }
              else {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 8) & 1) != 0) {
                  puVar8 = puVar9;
                }
                uVar14 = FUN_147a77524(lVar11 + 0x18,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                       local_a0);
              }
              *(undefined4 *)(lVar10 + param_3) = uVar14;
              if ((*(byte *)(param_1 + 0x40) & 2) == 0) {
                uVar14 = *(undefined4 *)(lVar10 + 4 + param_3);
              }
              else {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
                  puVar8 = puVar9;
                }
                uVar14 = FUN_147a77524(lVar11 + 0x60,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                       local_a0);
              }
              *(undefined4 *)(lVar10 + 4 + param_3) = uVar14;
              if ((*(byte *)(param_1 + 0x40) & 4) == 0) {
                uVar14 = *(undefined4 *)(lVar10 + 8 + param_3);
              }
              else {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 0x98) & 1) != 0) {
                  puVar8 = puVar9;
                }
                uVar14 = FUN_147a77524(lVar11 + 0xa8,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                       local_a0);
              }
              *(undefined4 *)(lVar10 + 8 + param_3) = uVar14;
              if ((*(byte *)(param_1 + 0x40) & 8) == 0) {
                uVar14 = *(undefined4 *)(lVar10 + 0xc + param_3);
              }
              else {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 0xe0) & 1) != 0) {
                  puVar8 = puVar9;
                }
                uVar14 = FUN_147a77524(lVar11 + 0xf0,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                       local_a0);
              }
              *(undefined4 *)(lVar10 + 0xc + param_3) = uVar14;
            }
            uVar12 = uVar12 - 1;
          } while (1 < uVar12);
        }
      }
      else if (0 < (int)uVar4) {
        param_3 = param_3 & 0xffffffff;
        puVar9 = (undefined4 *)(param_2 + 0x1a0);
        uVar12 = (ulonglong)uVar4 + 1;
        do {
          uVar13 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar12 * 2) * iVar1);
          if ((*(byte *)(lVar2 + 0x6f + uVar13) & 4) == 0) {
            lVar10 = uVar13 + lVar2;
            if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
              fVar16 = *(float *)(lVar10 + param_3);
            }
            else {
              fVar16 = 1.0;
              switch(*(char *)(lVar11 + 0xc)) {
              case '\x02':
                fVar16 = *(float *)(lVar10 + 0x40);
                break;
              case '\x03':
                fVar16 = *(float *)(lVar10 + 0x44);
                break;
              case '\x04':
                fVar16 = *(float *)(lVar10 + 0x48);
                break;
              case '\x05':
                fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                              *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                              *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
              }
              if ((*(char *)(lVar11 + 0xc) == '\0') ||
                 (fVar15 = 1.0, (*(uint *)(lVar11 + 0x10) & 1) != 0)) {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 8) & 1) != 0) {
                  puVar8 = puVar9;
                }
                fVar15 = (float)FUN_147a77524(lVar11 + 0x18,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                              local_a0);
              }
              fVar16 = fVar16 * fVar15;
            }
            *(float *)(lVar10 + param_3) = fVar16;
            if ((*(byte *)(param_1 + 0x40) & 2) == 0) {
              fVar16 = *(float *)(lVar10 + 4 + param_3);
            }
            else {
              fVar16 = 1.0;
              switch(*(char *)(lVar11 + 0x54)) {
              case '\x02':
                fVar16 = *(float *)(lVar10 + 0x40);
                break;
              case '\x03':
                fVar16 = *(float *)(lVar10 + 0x44);
                break;
              case '\x04':
                fVar16 = *(float *)(lVar10 + 0x48);
                break;
              case '\x05':
                fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                              *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                              *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
              }
              if ((*(char *)(lVar11 + 0x54) == '\0') ||
                 (fVar15 = 1.0, (*(uint *)(lVar11 + 0x58) & 1) != 0)) {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
                  puVar8 = puVar9;
                }
                fVar15 = (float)FUN_147a77524(lVar11 + 0x60,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                              local_a0);
              }
              fVar16 = fVar16 * fVar15;
            }
            *(float *)(lVar10 + 4 + param_3) = fVar16;
            if ((*(byte *)(param_1 + 0x40) & 4) == 0) {
              fVar16 = *(float *)(lVar10 + 8 + param_3);
            }
            else {
              fVar16 = 1.0;
              switch(*(char *)(lVar11 + 0x9c)) {
              case '\x02':
                fVar16 = *(float *)(lVar10 + 0x40);
                break;
              case '\x03':
                fVar16 = *(float *)(lVar10 + 0x44);
                break;
              case '\x04':
                fVar16 = *(float *)(lVar10 + 0x48);
                break;
              case '\x05':
                fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                              *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                              *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
              }
              if ((*(char *)(lVar11 + 0x9c) == '\0') ||
                 (fVar15 = 1.0, (*(uint *)(lVar11 + 0xa0) & 1) != 0)) {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 0x98) & 1) != 0) {
                  puVar8 = puVar9;
                }
                fVar15 = (float)FUN_147a77524(lVar11 + 0xa8,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                              local_a0);
              }
              fVar16 = fVar16 * fVar15;
            }
            *(float *)(lVar10 + 8 + param_3) = fVar16;
            if ((*(byte *)(param_1 + 0x40) & 8) == 0) {
              fVar16 = *(float *)(lVar10 + 0xc + param_3);
            }
            else {
              fVar16 = 1.0;
              switch(*(char *)(lVar11 + 0xe4)) {
              case '\x02':
                fVar16 = *(float *)(lVar10 + 0x40);
                break;
              case '\x03':
                fVar16 = *(float *)(lVar10 + 0x44);
                break;
              case '\x04':
                fVar16 = *(float *)(lVar10 + 0x48);
                break;
              case '\x05':
                fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                              *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                              *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
              }
              if ((*(char *)(lVar11 + 0xe4) == '\0') ||
                 (fVar15 = 1.0, (*(uint *)(lVar11 + 0xe8) & 1) != 0)) {
                puVar8 = (undefined4 *)(lVar10 + 0x90);
                if ((*(byte *)(lVar11 + 0xe0) & 1) != 0) {
                  puVar8 = puVar9;
                }
                fVar15 = (float)FUN_147a77524(lVar11 + 0xf0,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                              local_a0);
              }
              fVar16 = fVar16 * fVar15;
            }
            *(float *)(lVar10 + 0xc + param_3) = fVar16;
          }
          uVar12 = uVar12 - 1;
        } while (1 < uVar12);
      }
      break;
    case 6:
      lVar11 = *(longlong *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_2 + 0x18c);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        if (0 < (int)uVar4) {
          puVar9 = (undefined4 *)(param_2 + 0x1a0);
          uVar13 = (ulonglong)uVar4 + 1;
          do {
            uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
            if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
              lVar10 = uVar5 + lVar2;
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              puVar7 = puVar9;
              if ((*(byte *)(lVar11 + 8) & 1) == 0) {
                puVar7 = puVar8;
              }
              uVar14 = FUN_147a77524(lVar11 + 0x18,*puVar7,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + uVar12) = uVar14;
              puVar7 = puVar9;
              if ((*(byte *)(lVar11 + 0x50) & 1) == 0) {
                puVar7 = puVar8;
              }
              uVar14 = FUN_147a77524(lVar11 + 0x60,*puVar7,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + 4 + uVar12) = uVar14;
              if ((*(byte *)(lVar11 + 0x98) & 1) != 0) {
                puVar8 = puVar9;
              }
              uVar14 = FUN_147a77524(lVar11 + 0xa8,*puVar8,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + 8 + uVar12) = uVar14;
            }
            uVar13 = uVar13 - 1;
          } while (1 < uVar13);
        }
      }
      else if (0 < (int)uVar4) {
        puVar9 = (undefined4 *)(param_2 + 0x1a0);
        uVar13 = (ulonglong)uVar4 + 1;
        do {
          uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
          if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
            lVar10 = uVar5 + lVar2;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0xc)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0xc) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0x10) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 8) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0x18,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + uVar12) = fVar16 * fVar15;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0x54)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0x54) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0x58) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0x60,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + 4 + uVar12) = fVar16 * fVar15;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0x9c)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0x9c) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0xa0) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0x98) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0xa8,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + 8 + uVar12) = fVar16 * fVar15;
          }
          uVar13 = uVar13 - 1;
        } while (1 < uVar13);
      }
      break;
    case 0xe:
      lVar11 = *(longlong *)(param_1 + 0x30);
      uVar4 = *(uint *)(param_2 + 0x18c);
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        if (0 < (int)uVar4) {
          puVar9 = (undefined4 *)(param_2 + 0x1a0);
          uVar13 = (ulonglong)uVar4 + 1;
          do {
            uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
            if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
              lVar10 = uVar5 + lVar2;
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              puVar7 = puVar9;
              if ((*(byte *)(lVar11 + 8) & 1) == 0) {
                puVar7 = puVar8;
              }
              uVar14 = FUN_147a77524(lVar11 + 0x18,*puVar7,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + uVar12) = uVar14;
              puVar7 = puVar9;
              if ((*(byte *)(lVar11 + 0x50) & 1) == 0) {
                puVar7 = puVar8;
              }
              uVar14 = FUN_147a77524(lVar11 + 0x60,*puVar7,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + 4 + uVar12) = uVar14;
              puVar7 = puVar9;
              if ((*(byte *)(lVar11 + 0x98) & 1) == 0) {
                puVar7 = puVar8;
              }
              uVar14 = FUN_147a77524(lVar11 + 0xa8,*puVar7,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + 8 + uVar12) = uVar14;
              if ((*(byte *)(lVar11 + 0xe0) & 1) != 0) {
                puVar8 = puVar9;
              }
              uVar14 = FUN_147a77524(lVar11 + 0xf0,*puVar8,*(undefined8 *)(param_2 + 0x10),local_a0)
              ;
              *(undefined4 *)(lVar10 + 0xc + uVar12) = uVar14;
            }
            uVar13 = uVar13 - 1;
          } while (1 < uVar13);
        }
      }
      else if (0 < (int)uVar4) {
        puVar9 = (undefined4 *)(param_2 + 0x1a0);
        uVar13 = (ulonglong)uVar4 + 1;
        do {
          uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar13 * 2) * iVar1);
          if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
            lVar10 = uVar5 + lVar2;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0xc)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0xc) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0x10) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 8) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0x18,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + uVar12) = fVar16 * fVar15;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0x54)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0x54) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0x58) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0x50) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0x60,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + 4 + uVar12) = fVar16 * fVar15;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0x9c)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0x9c) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0xa0) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0x98) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0xa8,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + 8 + uVar12) = fVar16 * fVar15;
            fVar16 = 1.0;
            switch(*(char *)(lVar11 + 0xe4)) {
            case '\x02':
              fVar16 = *(float *)(lVar10 + 0x40);
              break;
            case '\x03':
              fVar16 = *(float *)(lVar10 + 0x44);
              break;
            case '\x04':
              fVar16 = *(float *)(lVar10 + 0x48);
              break;
            case '\x05':
              fVar16 = SQRT(*(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x48) +
                            *(float *)(lVar10 + 0x40) * *(float *)(lVar10 + 0x40) +
                            *(float *)(lVar10 + 0x44) * *(float *)(lVar10 + 0x44));
            }
            if ((*(char *)(lVar11 + 0xe4) == '\0') ||
               (fVar15 = 1.0, (*(uint *)(lVar11 + 0xe8) & 1) != 0)) {
              puVar8 = (undefined4 *)(lVar10 + 0x90);
              if ((*(byte *)(lVar11 + 0xe0) & 1) != 0) {
                puVar8 = puVar9;
              }
              fVar15 = (float)FUN_147a77524(lVar11 + 0xf0,*puVar8,*(undefined8 *)(param_2 + 0x10),
                                            local_a0);
            }
            *(float *)(lVar10 + 0xc + uVar12) = fVar16 * fVar15;
          }
          uVar13 = uVar13 - 1;
        } while (1 < uVar13);
      }
    }
  }
  return;
}



// FUNCTION 147c2a898 FUN_147c2a898 body=372 status=ok
// SIG undefined FUN_147c2a898(void)

void FUN_147c2a898(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar8 = 0;
  lVar7 = 0;
  do {
    iVar3 = (int)param_2[1];
    lVar10 = (longlong)iVar3;
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_147c0c128(param_2,iVar3);
    }
    lVar4 = *param_2;
    puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar4 + 0x10 + lVar10 * 0x18) = 0;
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar6 = *(longlong *)(lVar5 + 0x40 + lVar7);
    if (DAT_14c950c29 == '\x01') {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(lVar5 + 0x40 + lVar7);
      }
    }
    plVar2 = (longlong *)(lVar4 + lVar10 * 0x18);
    plVar2[2] = lVar6;
    FUN_1400021e4(*(longlong *)(param_1 + 0x30) + lVar7,&local_80);
    puVar9 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar9 = local_80;
    }
    FUN_140002266(&local_70,L"%s (DP%d)",puVar9,iVar8);
    if (plVar2 != &local_70) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      *plVar2 = local_70;
      local_70 = 0;
      *(undefined4 *)(plVar2 + 1) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_68._4_4_;
      local_68 = 0;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar7 = lVar7 + 0x48;
    iVar8 = iVar8 + 1;
  } while (lVar7 != 0x120);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2aa12 FUN_147c2aa12 body=140 status=ok
// SIG undefined FUN_147c2aa12(void)

void FUN_147c2aa12(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  lVar1 = (**(code **)(*param_2 + 0x2d0))();
  lVar2 = 0;
  lVar3 = 0;
  do {
    if (lVar3 < *(int *)(lVar1 + 0x448)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar2) =
           *(undefined8 *)(*(longlong *)(lVar1 + 0x440) + lVar3 * 8);
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
    }
    lVar3 = lVar3 + 1;
    lVar2 = lVar2 + 0x48;
  } while (lVar3 != 4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2aaa4 FUN_147c2aaa4 body=74 status=ok
// SIG undefined FUN_147c2aaa4(void)

void FUN_147c2aaa4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 10) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147bf7da6(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c2aaeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 9);
  return;
}



// FUNCTION 147c2aaee FUN_147c2aaee body=196 status=ok
// SIG undefined FUN_147c2aaee(void)

void FUN_147c2aaee(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a7750a(param_1 + 0x30);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionStartSize",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147c120bf(param_1,local_20,0,0);
    *(undefined8 *)(lVar2 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x48) = 0x3ff0000000000000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2abb4 FUN_147c2abb4 body=251 status=ok
// SIG undefined FUN_147c2abb4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147c2abb4(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[1] = 0.0;
  local_38[0] = 0.0;
  local_68 = 0;
  local_60 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_50,0,0);
  FUN_147a777c8(param_1 + 0x30,local_38 + 1,local_38);
  *(double *)(param_2 + 0x208) = *(double *)(param_2 + 0x208) * (double)local_38[0];
  *(double *)(param_2 + 0x210) = (double)local_38[0] * *(double *)(param_2 + 0x210);
  iVar1 = *(int *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x24) < iVar1 + 1U) {
    FUN_147c0c860(param_2 + 0x18,iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  local_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  local_40 = 0x3ff0000000000000;
  FUN_147a78012(param_2 + 0x1e8);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2acb0 FUN_147c2acb0 body=67 status=ok
// SIG undefined FUN_147c2acb0(void)

void FUN_147c2acb0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c2acf4(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c2acf4 FUN_147c2acf4 body=540 status=ok
// SIG undefined FUN_147c2acf4(void)

void FUN_147c2acf4(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = param_3;
  FUN_147a776dc(param_1 + 0x30,&local_58,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  *(float *)(param_4 + 0x60) = (float)local_58 + *(float *)(param_4 + 0x60);
  *(float *)(param_4 + 100) = (float)local_50 + *(float *)(param_4 + 100);
  *(float *)(param_4 + 0x68) = (float)local_48 + *(float *)(param_4 + 0x68);
  switch(*(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0xf4)) {
  case 4:
    uVar1 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_3 + 4) = uVar1;
    if ((float)(uVar1 >> 9 | 0x3f800000) + -1.0 <= 0.5) break;
  case 1:
    local_48 = -local_48;
    local_50 = -local_50;
    local_58 = -local_58;
    break;
  case 5:
    uVar1 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_3 + 4) = uVar1;
    if ((float)(uVar1 >> 9 | 0x3f800000) + -1.0 <= 0.5) break;
  case 2:
    local_58 = -local_58;
    break;
  case 6:
    uVar1 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_3 + 4) = uVar1;
    if ((float)(uVar1 >> 9 | 0x3f800000) + -1.0 <= 0.5) break;
  case 3:
    local_50 = -local_50;
    break;
  case 7:
    if (0.5 < (float)(*(int *)(param_3 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) {
      local_58 = -local_58;
    }
    uVar1 = *(int *)(param_3 + 4) * -0x4b9b4d07 + 0x9d6f2492;
    *(uint *)(param_3 + 4) = uVar1;
    if (0.5 < (float)(uVar1 >> 9 | 0x3f800000) + -1.0) {
      local_50 = -local_50;
    }
  }
  *(float *)(param_4 + 0x50) = (float)local_58 + *(float *)(param_4 + 0x50);
  *(float *)(param_4 + 0x54) = (float)local_50 + *(float *)(param_4 + 0x54);
  *(float *)(param_4 + 0x58) = (float)local_48 + *(float *)(param_4 + 0x58);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c2af12 FUN_147c2af12 body=80 status=ok
// SIG undefined FUN_147c2af12(void)

void FUN_147c2af12(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c2af5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x12);
  return;
}



// FUNCTION 147c2af62 FUN_147c2af62 body=159 status=ok
// SIG undefined FUN_147c2af62(void)

void FUN_147c2af62(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a7750a(param_1 + 0x30);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionLifeMultiplier",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2b002 FUN_147c2b002 body=207 status=ok
// SIG undefined FUN_147c2b002(void)

void FUN_147c2b002(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x90);
  local_38 = 0.0;
  local_28 = 0.0;
  if ((uVar1 & 4) != 0) {
    local_28 = 1.0;
  }
  local_30 = 0.0;
  if ((uVar1 & 2) != 0) {
    local_30 = 1.0;
  }
  if ((uVar1 & 1) != 0) {
    local_38 = 1.0;
  }
  local_40 = 1.0 - local_28;
  local_48 = 1.0 - local_30;
  local_50 = 1.0 - local_38;
  param_2 = param_2 + 0x1e8;
  FUN_147a77d9c(param_2,*(undefined8 *)(param_1 + 0x88));
  FUN_147a78070(param_2,&local_38);
  FUN_147a78128(param_2,&local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2b0d2 FUN_147c2b0d2 body=200 status=ok
// SIG undefined FUN_147c2b0d2(void)

void FUN_147c2b0d2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_48 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_30,*(undefined4 *)(param_5 + 0x90),
                *(undefined8 *)(param_2 + 0x10));
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((uVar1 & 1) != 0) {
    *(float *)(param_5 + 0x60) = (float)((double)*(float *)(param_5 + 0x60) * local_30);
    uVar1 = *(uint *)(param_1 + 0x90);
  }
  if ((uVar1 & 2) != 0) {
    *(float *)(param_5 + 100) = (float)((double)*(float *)(param_5 + 100) * local_28);
    uVar1 = *(uint *)(param_1 + 0x90);
  }
  if ((uVar1 & 4) != 0) {
    *(float *)(param_5 + 0x68) = (float)((double)*(float *)(param_5 + 0x68) * local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2b19c FUN_147c2b19c body=1014 status=ok
// SIG undefined FUN_147c2b19c(void)

ulonglong FUN_147c2b19c(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  float local_58;
  undefined4 uStack_54;
  double local_50;
  ulonglong local_48;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = uVar5;
  if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0x18c))) && (*(longlong *)(param_2 + 0x168) != 0))
     && (*(longlong *)(param_2 + 0x170) != 0)) {
    local_68 = param_1 + 0x30;
    lVar6 = FUN_147a777ae();
    lVar3 = *(longlong *)(param_2 + 0x168);
    lVar4 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar5 = (ulonglong)uVar2;
    uVar7 = uVar2 & 7;
    if ((uVar7 - 1 < 2) || (uVar7 == 4)) {
      lVar6 = (ulonglong)((uVar2 & 2) == 0) + 1;
      if ((uVar2 & 1) != 0) {
        lVar6 = 0;
      }
      if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
        uVar9 = (longlong)*(int *)(param_2 + 0x18c) + 1;
        do {
          uVar8 = (ulonglong)((uint)*(ushort *)(lVar4 + -4 + uVar9 * 2) * iVar1);
          if ((*(byte *)(lVar3 + 0x6f + uVar8) & 4) == 0) {
            lVar10 = uVar8 + lVar3;
            local_70 = 0;
            local_78 = 0;
            FUN_147a776dc(local_68,&local_60,*(undefined4 *)(lVar10 + 0x90),
                          *(undefined8 *)(param_2 + 0x10));
            uVar5 = (ulonglong)(int)((uint)*(ushort *)(lVar4 + -2 + uVar9 * 2) * iVar1 + 0x40);
            *(float *)(lVar10 + 0x60 + lVar6 * 4) =
                 (float)((double)*(float *)(lVar10 + 0x60 + lVar6 * 4) * (double)(&local_60)[lVar6])
            ;
          }
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
    }
    else if (uVar7 == 7) {
      if (lVar6 == 0) {
        if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
          uVar9 = (longlong)*(int *)(param_2 + 0x18c) + 1;
          do {
            uVar8 = (ulonglong)((uint)*(ushort *)(lVar4 + -4 + uVar9 * 2) * iVar1);
            if ((*(byte *)(lVar3 + 0x6f + uVar8) & 4) == 0) {
              local_70 = 0;
              local_78 = 0;
              FUN_147a776dc(local_68,&local_60,*(undefined4 *)(lVar3 + 0x90 + uVar8),
                            *(undefined8 *)(param_2 + 0x10));
              uVar5 = (ulonglong)(int)((uint)*(ushort *)(lVar4 + -2 + uVar9 * 2) * iVar1 + 0x40);
              *(float *)(lVar3 + 0x60 + uVar8) =
                   (float)(double)CONCAT44(local_60._4_4_,(float)local_60) *
                   *(float *)(lVar3 + 0x60 + uVar8);
              *(float *)(lVar3 + 100 + uVar8) =
                   (float)(double)CONCAT44(uStack_54,local_58) * *(float *)(lVar3 + 100 + uVar8);
              *(float *)(lVar3 + 0x68 + uVar8) = (float)local_50 * *(float *)(lVar3 + 0x68 + uVar8);
            }
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
        }
      }
      else if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
        uVar9 = (longlong)*(int *)(param_2 + 0x18c) + 1;
        do {
          uVar8 = (ulonglong)((uint)*(ushort *)(lVar4 + -4 + uVar9 * 2) * iVar1);
          if ((*(byte *)(lVar3 + 0x6f + uVar8) & 4) == 0) {
            FUN_147a7701c(lVar6,*(undefined4 *)(lVar3 + 0x90 + uVar8),&local_60);
            uVar5 = (ulonglong)(int)((uint)*(ushort *)(lVar4 + -2 + uVar9 * 2) * iVar1 + 0x40);
            *(float *)(lVar3 + 0x60 + uVar8) = (float)local_60 * *(float *)(lVar3 + 0x60 + uVar8);
            *(float *)(lVar3 + 100 + uVar8) = local_60._4_4_ * *(float *)(lVar3 + 100 + uVar8);
            *(float *)(lVar3 + 0x68 + uVar8) = local_58 * *(float *)(lVar3 + 0x68 + uVar8);
          }
          uVar9 = uVar9 - 1;
        } while (1 < uVar9);
      }
    }
    else if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
      uVar9 = (longlong)*(int *)(param_2 + 0x18c) + 1;
      do {
        uVar8 = (ulonglong)((uint)*(ushort *)(lVar4 + -4 + uVar9 * 2) * iVar1);
        if ((*(byte *)(lVar3 + 0x6f + uVar8) & 4) == 0) {
          local_70 = 0;
          local_78 = 0;
          FUN_147a776dc(local_68,&local_60,*(undefined4 *)(lVar3 + 0x90 + uVar8),
                        *(undefined8 *)(param_2 + 0x10));
          uVar2 = *(uint *)(param_1 + 0x90);
          if ((uVar2 & 1) != 0) {
            *(float *)(lVar3 + 0x60 + uVar8) =
                 (float)(double)CONCAT44(local_60._4_4_,(float)local_60) *
                 *(float *)(lVar3 + 0x60 + uVar8);
            uVar2 = *(uint *)(param_1 + 0x90);
          }
          if ((uVar2 & 2) != 0) {
            *(float *)(lVar3 + 100 + uVar8) =
                 (float)(double)CONCAT44(uStack_54,local_58) * *(float *)(lVar3 + 100 + uVar8);
            uVar2 = *(uint *)(param_1 + 0x90);
          }
          uVar5 = (ulonglong)uVar2;
          if ((uVar2 & 4) != 0) {
            *(float *)(lVar3 + 0x68 + uVar8) = (float)local_50 * *(float *)(lVar3 + 0x68 + uVar8);
          }
        }
        uVar9 = uVar9 - 1;
      } while (1 < uVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147c2b594 FUN_147c2b594 body=200 status=ok
// SIG undefined FUN_147c2b594(void)

void FUN_147c2b594(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  longlong *plVar8;
  
  lVar4 = FUN_147c1aa3f();
  plVar8 = (longlong *)(param_1 + 0x88);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *plVar8 = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar4);
    *plVar8 = lVar4;
  }
  uVar5 = FUN_145b3c144();
  bVar2 = FUN_144a7ca96(plVar8,uVar5);
  lVar4 = *plVar8;
  if ((lVar4 != 0 & bVar2) == 1) {
    plVar8 = (longlong *)(lVar4 + 0x28);
    uVar3 = 0;
    bVar1 = true;
    do {
      bVar7 = bVar1;
      uVar3 = (**(code **)(*plVar8 + 0x58))(plVar8,uVar3);
      iVar6 = 0;
      do {
        (**(code **)(*plVar8 + 0x70))(plVar8,iVar6,uVar3,0x3f800000);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 3);
      uVar3 = 0x3f800000;
      bVar1 = false;
    } while (bVar7);
    *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) | 2;
  }
  return;
}



// FUNCTION 147c2b65c FUN_147c2b65c body=159 status=ok
// SIG undefined FUN_147c2b65c(void)

void FUN_147c2b65c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a7750a(param_1 + 0x30);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionSizeScale",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2b712 FUN_147c2b712 body=189 status=ok
// SIG undefined FUN_147c2b712(void)

void FUN_147c2b712(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_58 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_48,*(undefined4 *)(param_5 + 0x90),
                *(undefined8 *)(param_2 + 0x10));
  *(float *)(param_5 + 0x60) = ABS(*(float *)(param_5 + 0x50)) * (float)local_48;
  *(float *)(param_5 + 100) = ABS(*(float *)(param_5 + 0x54)) * (float)local_40;
  *(float *)(param_5 + 0x68) = ABS(*(float *)(param_5 + 0x58)) * (float)local_38;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2b7d0 FUN_147c2b7d0 body=308 status=ok
// SIG undefined FUN_147c2b7d0(void)

void FUN_147c2b7d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar5 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar4 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar5 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar4) & 4) == 0) {
        local_80 = 0;
        local_88 = 0;
        FUN_147a776dc(param_1 + 0x30,&local_78,*(undefined4 *)(lVar2 + 0x90 + uVar4),
                      *(undefined8 *)(param_2 + 0x10));
        *(float *)(lVar2 + 0x60 + uVar4) = ABS(*(float *)(lVar2 + 0x50 + uVar4)) * (float)local_78;
        *(float *)(lVar2 + 100 + uVar4) = ABS(*(float *)(lVar2 + 0x54 + uVar4)) * (float)local_70;
        *(float *)(lVar2 + 0x68 + uVar4) = ABS(*(float *)(lVar2 + 0x58 + uVar4)) * (float)local_68;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2b906 FUN_147c2b906 body=89 status=ok
// SIG undefined FUN_147c2b906(void)

void FUN_147c2b906(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar3 = FUN_145a6b57e();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x88),uVar3);
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((lVar1 != 0 & bVar2) == 1) {
      *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c2b960 FUN_147c2b960 body=362 status=ok
// SIG undefined FUN_147c2b960(void)

void FUN_147c2b960(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    dVar4 = *(double *)(param_1 + 0x30);
    dVar5 = *(double *)(param_1 + 0x38);
    dVar6 = *(double *)(param_1 + 0x48);
    dVar7 = *(double *)(param_1 + 0x40);
    lVar9 = *(longlong *)(param_2 + 0x168);
    lVar10 = *(longlong *)(param_2 + 0x170);
    iVar8 = *(int *)(param_2 + 0x188);
    uVar14 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar15 = (ulonglong)((uint)*(ushort *)(lVar10 + -4 + uVar14 * 2) * iVar8);
      if ((*(byte *)(lVar9 + 0x6f + uVar15) & 4) == 0) {
        fVar1 = *(float *)(lVar9 + 0x40 + uVar15);
        fVar2 = *(float *)(lVar9 + 0x44 + uVar15);
        fVar3 = *(float *)(lVar9 + 0x48 + uVar15);
        dVar11 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        dVar12 = dVar5 * dVar11;
        dVar13 = dVar4 * dVar11;
        if (dVar11 <= 1.0) {
          dVar11 = 1.0;
        }
        if (dVar12 <= 1.0) {
          dVar12 = 1.0;
        }
        if (dVar6 <= dVar12) {
          dVar12 = dVar6;
        }
        if (dVar13 <= 1.0) {
          dVar13 = 1.0;
        }
        if (dVar7 <= dVar13) {
          dVar13 = dVar7;
        }
        if (1.0 <= dVar11) {
          dVar11 = 1.0;
        }
        *(float *)(lVar9 + 0x60 + uVar15) = (float)dVar13 * ABS(*(float *)(lVar9 + 0x50 + uVar15));
        *(float *)(lVar9 + 100 + uVar15) = (float)dVar12 * ABS(*(float *)(lVar9 + 0x54 + uVar15));
        *(float *)(lVar9 + 0x68 + uVar15) = (float)dVar11 * ABS(*(float *)(lVar9 + 0x58 + uVar15));
      }
      uVar14 = uVar14 - 1;
    } while (1 < uVar14);
  }
  return;
}



// FUNCTION 147c2bae2 FUN_147c2bae2 body=416 status=ok
// SIG undefined FUN_147c2bae2(void)

void FUN_147c2bae2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147a774f0(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"RequiredDistributionSpawnRate",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x41a00000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x60) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0x68);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_28,L"RequiredDistributionSpawnRateScale",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x90) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0xa8);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_30,L"BurstScaleDistribution",1);
    local_40 = 0;
    local_48 = 0;
    lVar2 = FUN_147bf866f(param_1,local_30,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xd0) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2bc84 FUN_147c2bc84 body=172 status=ok
// SIG undefined FUN_147c2bc84(void)

void FUN_147c2bc84(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  FUN_144842a8a(param_1,local_20);
  if ((local_20[0] < 0x193) && (*(longlong *)(param_1 + 0x60) != 0)) {
    FUN_1400337aa();
    lVar1 = *(longlong *)(param_1 + 0x60);
    lVar2 = FUN_145a6b3a6();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      fVar3 = (float)FUN_147a77524(param_1 + 0x38,0,0,0);
      if (fVar3 <= 1.0) {
        *(byte *)(param_1 + 0xdc) = *(byte *)(param_1 + 0xdc) & 0xfe;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2bd36 FUN_147c2bd36 body=57 status=ok
// SIG undefined FUN_147c2bd36(void)

undefined8 FUN_147c2bd36(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14595959e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147c2bd70 FUN_147c2bd70 body=110 status=ok
// SIG undefined FUN_147c2bd70(void)

void FUN_147c2bd70(longlong param_1)

{
  undefined1 auStack_58 [40];
  float local_30;
  undefined1 local_2c [4];
  float local_28;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a775f8(param_1 + 0x38,local_24,&local_28);
  FUN_147a775f8(param_1 + 0x68,local_2c,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 * local_30);
}



// FUNCTION 147c2bde0 FUN_147c2bde0 body=686 status=ok
// SIG undefined FUN_147c2bde0(void)

float FUN_147c2bde0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [40];
  float local_a0;
  undefined1 local_9c [4];
  float local_98;
  undefined1 local_94 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147a775f8(param_1 + 0x38,local_94,&local_98);
  FUN_147a775f8(param_1 + 0x68,local_9c,&local_a0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar4 = FUN_1459588c0();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x90),uVar4);
    lVar1 = *(longlong *)(param_1 + 0x90);
    if ((lVar1 != 0 & bVar2) == 1) {
      plVar6 = (longlong *)(lVar1 + 0x28);
      iVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x28))(plVar6);
      if (1 < iVar3) {
        fVar7 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,iVar3 + -1);
        fVar8 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,0);
        fVar11 = 0.0;
        fVar12 = 0.0;
        if (0.0 <= fVar8) {
          fVar12 = fVar8;
        }
        fVar8 = 1.0;
        if (1.0 <= fVar7 - fVar12) {
          fVar8 = fVar7 - fVar12;
        }
        fVar7 = (float)(**(code **)(*plVar6 + 0x20))(plVar6,0,0);
        iVar5 = 1;
        do {
          fVar9 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,iVar5);
          fVar10 = (float)(**(code **)(*plVar6 + 0x20))(plVar6,0,iVar5);
          fVar11 = fVar11 + (fVar7 + fVar10) * 0.5 * ((fVar9 - fVar12) / fVar8);
          iVar5 = iVar5 + 1;
          fVar7 = fVar10;
          fVar12 = fVar9;
          local_a0 = fVar11;
        } while (iVar3 != iVar5);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar4 = FUN_1459588c0();
    bVar2 = FUN_144a7ca96((longlong *)(param_1 + 0x60),uVar4);
    lVar1 = *(longlong *)(param_1 + 0x60);
    if ((lVar1 != 0 & bVar2) == 1) {
      plVar6 = (longlong *)(lVar1 + 0x28);
      iVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x28))(plVar6);
      if (1 < iVar3) {
        fVar7 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,iVar3 + -1);
        fVar8 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,0);
        fVar11 = 0.0;
        fVar12 = 0.0;
        if (0.0 <= fVar8) {
          fVar12 = fVar8;
        }
        fVar8 = 1.0;
        if (1.0 <= fVar7 - fVar12) {
          fVar8 = fVar7 - fVar12;
        }
        fVar7 = (float)(**(code **)(*plVar6 + 0x20))(plVar6,0,0);
        iVar5 = 1;
        do {
          fVar9 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,iVar5);
          fVar10 = (float)(**(code **)(*plVar6 + 0x20))(plVar6,0,iVar5);
          fVar11 = fVar11 + (fVar7 + fVar10) * local_a0 * 0.5 * ((fVar9 - fVar12) / fVar8);
          iVar5 = iVar5 + 1;
          fVar7 = fVar10;
          fVar12 = fVar9;
        } while (iVar3 != iVar5);
        goto LAB_147c2bf93;
      }
    }
  }
  fVar11 = local_98 * local_a0;
LAB_147c2bf93:
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar11;
}



// FUNCTION 147c2c0c2 FUN_147c2c0c2 body=238 status=ok
// SIG undefined FUN_147c2c0c2(void)

undefined4 FUN_147c2c0c2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf59d0) {
    FUN_144b3d300(&DAT_14caf59d0);
    if (DAT_14caf59d0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EmitterSpawnRateScale",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14caf59c8 = 0;
      }
      else {
        DAT_14caf59c8 = (**(code **)(*plVar4 + 0x70))(plVar4);
      }
      _Init_thread_footer(&DAT_14caf59d0);
    }
  }
  lVar1 = DAT_14caf59c8;
  if ((DAT_14caf59c8 != 0 & *(byte *)(param_1 + 0xdc)) == 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    uVar5 = *(undefined4 *)(lVar1 + uVar3 * 4);
  }
  else {
    uVar5 = 0x3f800000;
  }
  return uVar5;
}



// FUNCTION 147c2c1b0 FUN_147c2c1b0 body=163 status=ok
// SIG undefined FUN_147c2c1b0(void)

void FUN_147c2c1b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a774f0(param_1 + 0x40);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"RequiredDistributionSpawnPerUnit",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x68) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2c260 FUN_147c2c260 body=474 status=ok
// SIG undefined FUN_147c2c260(void)

byte FUN_147c2c260(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,int *param_6,float *param_7)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  fVar5 = (float)FUN_147a77524(param_1 + 0x40,*(undefined4 *)(param_2 + 0x1a0),
                               *(undefined8 *)(param_2 + 0x10),0);
  fVar7 = *(float *)(param_1 + 0x38);
  fVar5 = fVar5 / fVar7;
  fVar11 = 0.0;
  if (0.0 <= fVar5) {
    pfVar1 = (float *)FUN_147bf7da6(param_2,param_1);
    if (pfVar1 != (float *)0x0) {
      fVar11 = *pfVar1;
    }
    bVar4 = *(byte *)(param_1 + 0x74);
    dVar9 = 1.0;
    dVar8 = 1.0;
    if ((bVar4 & 8) != 0) {
      dVar8 = 0.0;
    }
    dVar10 = 1.0;
    if ((bVar4 & 4) != 0) {
      dVar10 = 0.0;
    }
    if ((bVar4 & 2) != 0) {
      dVar9 = 0.0;
    }
    dVar9 = (*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x1a8)) * dVar9;
    dVar10 = (*(double *)(param_2 + 0x50) - *(double *)(param_2 + 0x1b0)) * dVar10;
    dVar8 = (*(double *)(param_2 + 0x58) - *(double *)(param_2 + 0x1b8)) * dVar8;
    fVar6 = (float)SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10);
    if ((*(float *)(param_1 + 0x70) <= 0.0) || (fVar6 <= *(float *)(param_1 + 0x70))) {
      if (0.0 < fVar6) {
        bVar3 = fVar7 * *(float *)(param_1 + 0x3c) < fVar6;
        fVar5 = fVar5 * (fVar11 + fVar6);
        iVar2 = (int)ROUND(fVar5 + fVar5 + -0.5) >> 1;
        *param_6 = iVar2;
        *param_7 = (float)iVar2 * (float)(-(uint)(0.0 < param_5) & (uint)(1.0 / param_5));
        if (pfVar1 != (float *)0x0) {
          fVar11 = (fVar11 + fVar6) - (float)*param_6 * *(float *)(param_1 + 0x38);
          fVar7 = 0.0;
          if (0.0 <= fVar11) {
            fVar7 = fVar11;
          }
          *pfVar1 = fVar7;
        }
        goto LAB_147c2c2c7;
      }
    }
    else if (pfVar1 != (float *)0x0) {
      *pfVar1 = 0.0;
    }
  }
  bVar3 = false;
  *param_6 = 0;
  *param_7 = 0.0;
LAB_147c2c2c7:
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 0x30) & 1;
  }
  else {
    bVar4 = bVar3 ^ 1;
  }
  return bVar4;
}



// FUNCTION 147c2c456 FUN_147c2c456 body=163 status=ok
// SIG undefined FUN_147c2c456(void)

void FUN_147c2c456(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a774f0(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionVectorFieldScale",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x60) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2c514 FUN_147c2c514 body=163 status=ok
// SIG undefined FUN_147c2c514(void)

void FUN_147c2c514(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a774f0(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionVectorFieldScaleOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x60) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2c5d2 FUN_147c2c5d2 body=291 status=ok
// SIG undefined FUN_147c2c5d2(void)

void FUN_147c2c5d2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x378) = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x3a0) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x3a4) = uVar3;
  *(undefined4 *)(param_2 + 0x3a8) = uVar4;
  *(undefined4 *)(param_2 + 0x3ac) = uVar5;
  *(undefined8 *)(param_2 + 0x3b0) = uVar1;
  *(undefined8 *)(param_2 + 0x3b8) = 0;
  FUN_144a7484c(param_1 + 0x50,&local_48);
  *(undefined8 *)(param_2 + 0x380) = local_48;
  *(undefined8 *)(param_2 + 0x388) = uStack_40;
  *(undefined8 *)(param_2 + 0x390) = local_38;
  *(undefined8 *)(param_2 + 0x398) = uStack_30;
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_2 + 0x3c0) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_2 + 0x3c8) = uVar6;
  *(undefined8 *)(param_2 + 0x3d0) = uVar1;
  *(undefined8 *)(param_2 + 0x3d8) = 0;
  *(undefined4 *)(param_2 + 0x3e0) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 0x3e4) = *(undefined4 *)(param_1 + 0x84);
  uVar7 = *(uint *)(param_1 + 0x88) & 1;
  uVar2 = *(uint *)(param_2 + 0x468);
  *(uint *)(param_2 + 0x468) = uVar2 & 0xfffffffe | uVar7;
  uVar8 = *(uint *)(param_1 + 0x88) & 2;
  *(uint *)(param_2 + 0x468) = uVar2 & 0xfffffffc | uVar7 | uVar8;
  uVar9 = *(uint *)(param_1 + 0x88) & 4;
  *(uint *)(param_2 + 0x468) = uVar2 & 0xfffffff8 | uVar7 | uVar8 | uVar9;
  uVar10 = *(uint *)(param_1 + 0x88) & 8;
  *(uint *)(param_2 + 0x468) = uVar2 & 0xfffffff0 | uVar7 | uVar8 | uVar9 | uVar10;
  *(uint *)(param_2 + 0x468) =
       uVar2 & 0xffffffe0 | uVar7 | uVar8 | uVar9 | uVar10 | *(uint *)(param_1 + 0x88) & 0x10;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2c764 FUN_147c2c764 body=274 status=ok
// SIG undefined FUN_147c2c764(void)

void FUN_147c2c764(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a7750a(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionStartVelocity",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147c120bf(param_1,local_20,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x90) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0x98);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_28,L"DistributionStartVelocityRadial",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147c1308f(param_1,local_28,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xc0) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2c878 FUN_147c2c878 body=67 status=ok
// SIG undefined FUN_147c2c878(void)

void FUN_147c2c878(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c2c8bc(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c2c8bc FUN_147c2c8bc body=1199 status=ok
// SIG undefined FUN_147c2c8bc(void)

void FUN_147c2c8bc(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = 0;
  local_150 = param_3;
  FUN_147a776dc(param_1 + 0x38,&local_140,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  dVar11 = *(double *)(param_4 + 0x28) - *(double *)(param_2 + 0xd0);
  dVar12 = *(double *)(param_4 + 0x20) - *(double *)(param_2 + 200);
  dVar10 = *(double *)(param_4 + 0x18) - *(double *)(param_2 + 0xc0);
  dVar7 = dVar11 * dVar11 + dVar10 * dVar10 + dVar12 * dVar12;
  if (((dVar7 != 1.0) || (dVar3 = dVar11, dVar4 = dVar12, dVar5 = dVar10, NAN(dVar7))) &&
     (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar3 = dVar11 * dVar7;
    dVar4 = dVar12 * dVar7;
    dVar5 = dVar10 * dVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar17 = 0;
  uVar18 = 0x3ff00000;
  uVar13 = 0;
  uVar14 = 0x3ff00000;
  uVar15 = 0;
  uVar16 = 0x3ff00000;
  if (((uVar1 & 2) != 0) && (lVar2 = *(longlong *)(param_2 + 0x10), lVar2 != 0)) {
    uVar13 = *(undefined4 *)(lVar2 + 0x280);
    uVar14 = *(undefined4 *)(lVar2 + 0x284);
    uVar15 = *(undefined4 *)(lVar2 + 0x288);
    uVar16 = *(undefined4 *)(lVar2 + 0x28c);
    uVar17 = (undefined4)*(undefined8 *)(lVar2 + 0x290);
    uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x290) >> 0x20);
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      dVar11 = local_138 * *(double *)(param_2 + 0x80);
      dVar12 = local_130 * *(double *)(param_2 + 0xa0);
      dVar10 = local_138 * *(double *)(param_2 + 0x90);
      local_138 = *(double *)(param_2 + 200) * 0.0 +
                  local_130 * *(double *)(param_2 + 0xa8) +
                  local_138 * *(double *)(param_2 + 0x88) + local_140 * *(double *)(param_2 + 0x68);
      local_130 = local_140 * *(double *)(param_2 + 0x70) + dVar10 +
                  local_130 * *(double *)(param_2 + 0xb0) + *(double *)(param_2 + 0xd0) * 0.0;
      local_140 = *(double *)(param_2 + 0xc0) * 0.0 +
                  dVar12 + dVar11 + local_140 * *(double *)(param_2 + 0x60);
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      dVar10 = *(double *)(param_2 + 0xc0) * 0.0 +
               local_130 * *(double *)(param_2 + 0xa0) +
               local_138 * *(double *)(param_2 + 0x80) + local_140 * *(double *)(param_2 + 0x60);
      local_b8 = *(double *)(param_2 + 0xd0);
      local_d8 = local_130 * *(double *)(param_2 + 0xb0);
      local_f8 = local_138 * *(double *)(param_2 + 0x90);
      local_118 = local_140 * *(double *)(param_2 + 0x70);
      local_138 = *(double *)(param_2 + 200) * 0.0 +
                  local_130 * *(double *)(param_2 + 0xa8) +
                  local_138 * *(double *)(param_2 + 0x88) + local_140 * *(double *)(param_2 + 0x68);
    }
    else {
      FUN_14007522e(&local_128,param_2 + 0xe0);
      dVar10 = local_c8 * 0.0 + local_130 * local_e8 + local_138 * local_108 + local_140 * local_128
      ;
      local_d8 = local_130 * local_d8;
      local_f8 = local_138 * local_f8;
      local_118 = local_140 * local_118;
      local_138 = dStack_c0 * 0.0 +
                  local_130 * dStack_e0 + local_138 * dStack_100 + local_140 * dStack_120;
    }
    local_130 = local_118 + local_f8 + local_d8 + local_b8 * 0.0;
    local_140 = dVar10;
  }
  local_140 = local_140 * (double)CONCAT44(uVar14,uVar13);
  local_138 = local_138 * (double)CONCAT44(uVar16,uVar15);
  local_130 = local_130 * (double)CONCAT44(uVar18,uVar17);
  fVar6 = (float)FUN_147a77524(param_1 + 0x98,*(undefined4 *)(param_2 + 0x1a0),
                               *(undefined8 *)(param_2 + 0x10),param_3);
  dVar10 = (double)fVar6;
  fVar6 = (float)(dVar3 * dVar10 * (double)CONCAT44(uVar18,uVar17) + local_130);
  fVar8 = (float)(dVar4 * dVar10 * (double)CONCAT44(uVar16,uVar15) + local_138);
  fVar9 = (float)(dVar5 * dVar10 * (double)CONCAT44(uVar14,uVar13) + local_140);
  *(float *)(param_4 + 0x40) = *(float *)(param_4 + 0x40) + fVar9;
  *(float *)(param_4 + 0x44) = *(float *)(param_4 + 0x44) + fVar8;
  *(float *)(param_4 + 0x48) = *(float *)(param_4 + 0x48) + fVar6;
  *(float *)(param_4 + 0x30) = fVar9 + *(float *)(param_4 + 0x30);
  *(float *)(param_4 + 0x34) = fVar8 + *(float *)(param_4 + 0x34);
  *(float *)(param_4 + 0x38) = fVar6 + *(float *)(param_4 + 0x38);
  if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c2cd6c FUN_147c2cd6c body=80 status=ok
// SIG undefined FUN_147c2cd6c(void)

void FUN_147c2cd6c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x1a) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147bf7da6(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c2cdb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x19);
  return;
}



// FUNCTION 147c2cdbc FUN_147c2cdbc body=184 status=ok
// SIG undefined FUN_147c2cdbc(void)

void FUN_147c2cdbc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a7750a(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionScale",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_20,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x48) = 0x3ff0000000000000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x90) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2ce76 FUN_147c2ce76 body=652 status=ok
// SIG undefined FUN_147c2ce76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c2ce76(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0) {
    dVar3 = *(double *)(lVar2 + 0x710);
    dVar4 = *(double *)(lVar2 + 0x718);
    dVar11 = *(double *)(lVar2 + 0x720);
  }
  else {
    dVar11 = *(double *)(lVar2 + 0x710);
    dVar4 = *(double *)(lVar2 + 0x718);
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x280);
    dVar6 = *(double *)(lVar2 + 0x250) * -1.0;
    dVar7 = *(double *)(lVar2 + 600) * 1.0;
    dVar8 = -*(double *)(lVar2 + 0x240);
    dVar9 = -*(double *)(lVar2 + 0x248);
    dVar12 = dVar4 * dVar8 - dVar11 * dVar9;
    dVar13 = *(double *)(lVar2 + 0x720) * dVar9 - dVar4 * dVar6;
    dVar10 = dVar11 * dVar6 - dVar8 * *(double *)(lVar2 + 0x720);
    dVar13 = dVar13 + dVar13;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    auVar5 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar5._0_8_) *
            ((dVar12 * dVar9 - dVar10 * dVar6) + dVar7 * dVar13 + dVar11);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar5._8_8_) *
            (*(double *)(lVar2 + 0x240) * dVar12 + dVar6 * dVar13 + dVar7 * dVar10 + dVar4);
    dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(lVar2 + 0x290))) *
             (dVar7 * dVar12 + *(double *)(lVar2 + 0x720) + (dVar10 * dVar8 - dVar13 * dVar9));
  }
  local_90 = 0;
  local_98 = 0;
  FUN_147a776dc(param_1 + 0x38,&local_88,*(undefined4 *)(param_2 + 0x1a0));
  *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) + (float)(local_88 * dVar3);
  *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) + (float)(dVar4 * local_80);
  *(float *)(param_5 + 0x48) = *(float *)(param_5 + 0x48) + (float)(dVar11 * local_78);
  *(float *)(param_5 + 0x30) = (float)(local_88 * dVar3) + *(float *)(param_5 + 0x30);
  *(float *)(param_5 + 0x34) = (float)(dVar4 * local_80) + *(float *)(param_5 + 0x34);
  *(float *)(param_5 + 0x38) = (float)(dVar11 * local_78) + *(float *)(param_5 + 0x38);
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2d104 FUN_147c2d104 body=159 status=ok
// SIG undefined FUN_147c2d104(void)

void FUN_147c2d104(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a7750a(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionVelOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147c12b2f(param_1,local_20,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x90) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2d1a4 FUN_147c2d1a4 body=268 status=ok
// SIG undefined FUN_147c2d1a4(void)

void FUN_147c2d1a4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    uVar9 = 0;
    uVar10 = 0x3ff00000;
    uVar5 = 0;
    uVar6 = 0x3ff00000;
    uVar7 = 0;
    uVar8 = 0x3ff00000;
    if ((param_2 != 0) && ((*(uint *)(param_1 + 0x30) & 2) != 0)) {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar1 + 0x280);
        uVar6 = *(undefined4 *)(lVar1 + 0x284);
        uVar7 = *(undefined4 *)(lVar1 + 0x288);
        uVar8 = *(undefined4 *)(lVar1 + 0x28c);
        uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x290);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x290) >> 0x20);
      }
    }
    local_60 = 0;
    local_68 = 0;
    FUN_147a776dc(param_1 + 0x38,&local_58,*(undefined4 *)(param_5 + 0x90),lVar1);
    fVar3 = (float)((double)CONCAT44(uVar10,uVar9) * local_48);
    fVar2 = (float)((double)CONCAT44(uVar8,uVar7) * local_50);
    fVar4 = (float)((double)CONCAT44(uVar6,uVar5) * local_58);
    *(float *)(param_5 + 0x40) = fVar4;
    *(float *)(param_5 + 0x44) = fVar2;
    *(float *)(param_5 + 0x48) = fVar3;
    *(float *)(param_5 + 0x30) = fVar4;
    *(float *)(param_5 + 0x34) = fVar2;
    *(float *)(param_5 + 0x38) = fVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2d2b2 FUN_147c2d2b2 body=3524 status=ok
// SIG undefined FUN_147c2d2b2(void)

void FUN_147c2d2b2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined8 local_220;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar8 = *(longlong *)(param_2 + 0x10);
  lVar9 = *(longlong *)(param_2 + 0x18);
  if ((*(byte *)(lVar8 + 0x693) & 0x10) == 0) {
    lVar17 = 0x900;
    cVar15 = FUN_144a61b4f();
    if (cVar15 == '\0') goto LAB_147c2d363;
  }
  lVar17 = 0x240;
LAB_147c2d363:
  uVar6 = *(uint *)(param_1 + 0x30);
  if ((uVar6 & 2) == 0) {
    uVar32 = 0;
    uVar33 = 0x3ff00000;
    uVar28 = 0;
    uVar29 = 0x3ff00000;
    uVar30 = 0;
    uVar31 = 0x3ff00000;
  }
  else {
    puVar1 = (undefined4 *)(lVar8 + 0x40 + lVar17);
    uVar28 = *puVar1;
    uVar29 = puVar1[1];
    uVar30 = puVar1[2];
    uVar31 = puVar1[3];
    uVar4 = *(undefined8 *)(lVar8 + 0x50 + lVar17);
    uVar32 = (undefined4)uVar4;
    uVar33 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  bVar5 = *(byte *)(*(longlong *)(lVar9 + 0x30) + 0x71);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    if ((bVar5 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
          dVar21 = *(double *)(lVar8 + lVar17);
          dVar22 = ((double *)(lVar8 + lVar17))[1];
          dVar27 = *(double *)(lVar8 + 0x10 + lVar17);
          dVar20 = dVar22 + dVar22;
          dVar23 = dVar27 + dVar27;
          dVar11 = dVar21 * (dVar21 + dVar21);
          dVar12 = *(double *)(lVar8 + lVar17) * dVar23;
          pdVar2 = (double *)(lVar8 + 0x18 + lVar17);
          dVar19 = *pdVar2;
          dVar24 = dVar23 * dVar19;
          dVar25 = (dVar21 + dVar21) * *pdVar2;
          dVar19 = dVar20 * dVar19;
          lVar9 = *(longlong *)(param_2 + 0x168);
          lVar10 = *(longlong *)(param_2 + 0x170);
          iVar7 = *(int *)(param_2 + 0x188);
          pdVar2 = (double *)(lVar8 + 0x20 + lVar17);
          dVar13 = *pdVar2;
          dVar14 = pdVar2[1];
          dVar26 = *(double *)(lVar8 + 0x30 + lVar17);
          uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
          do {
            uVar16 = (ulonglong)((uint)*(ushort *)(lVar10 + -4 + uVar18 * 2) * iVar7);
            if ((*(byte *)(lVar9 + 0x6f + uVar16) & 4) == 0) {
              local_220 = 0;
              local_228 = 0;
              FUN_147a776dc(param_1 + 0x38,&local_178,*(undefined4 *)(lVar9 + 0x90 + uVar16),
                            *(undefined8 *)(param_2 + 0x10));
              *(float *)(lVar9 + 0x40 + uVar16) =
                   (float)(((dVar19 + dVar12) * local_168 +
                            dStack_170 * (dVar20 * dVar21 - dVar24) +
                            local_178 * (1.0 - (dVar27 * dVar23 + dVar22 * dVar20)) + dVar13 * 0.0)
                          * (double)CONCAT44(uVar29,uVar28)) * *(float *)(lVar9 + 0x40 + uVar16);
              *(float *)(lVar9 + 0x44 + uVar16) =
                   (float)(((dVar23 * dVar22 - dVar25) * local_168 +
                            dStack_170 * (1.0 - (dVar27 * dVar23 + dVar11)) +
                            local_178 * (dVar20 * dVar21 + dVar24) + dVar14 * 0.0) *
                          (double)CONCAT44(uVar31,uVar30)) * *(float *)(lVar9 + 0x44 + uVar16);
              *(float *)(lVar9 + 0x48 + uVar16) =
                   (float)((local_178 * (dVar12 - dVar19) + dStack_170 * (dVar23 * dVar22 + dVar25)
                            + local_168 * (1.0 - (dVar22 * dVar20 + dVar11)) + dVar26 * 0.0) *
                          (double)CONCAT44(uVar33,uVar32)) * *(float *)(lVar9 + 0x48 + uVar16);
            }
            uVar18 = uVar18 - 1;
          } while (1 < uVar18);
        }
      }
      else if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
        lVar8 = *(longlong *)(param_2 + 0x168);
        lVar9 = *(longlong *)(param_2 + 0x170);
        iVar7 = *(int *)(param_2 + 0x188);
        uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
        do {
          uVar16 = (ulonglong)((uint)*(ushort *)(lVar9 + -4 + uVar18 * 2) * iVar7);
          if ((*(byte *)(lVar8 + 0x6f + uVar16) & 4) == 0) {
            local_220 = 0;
            local_228 = 0;
            FUN_147a776dc(param_1 + 0x38,&local_178,*(undefined4 *)(lVar8 + 0x90 + uVar16),
                          *(undefined8 *)(param_2 + 0x10));
            *(float *)(lVar8 + 0x40 + uVar16) =
                 (float)(local_178 * (double)CONCAT44(uVar29,uVar28)) *
                 *(float *)(lVar8 + 0x40 + uVar16);
            *(float *)(lVar8 + 0x44 + uVar16) =
                 (float)(dStack_170 * (double)CONCAT44(uVar31,uVar30)) *
                 *(float *)(lVar8 + 0x44 + uVar16);
            *(float *)(lVar8 + 0x48 + uVar16) =
                 (float)(local_168 * (double)CONCAT44(uVar33,uVar32)) *
                 *(float *)(lVar8 + 0x48 + uVar16);
          }
          uVar18 = uVar18 - 1;
        } while (1 < uVar18);
      }
    }
    else if ((uVar6 & 1) == 0) {
      if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
        lVar8 = *(longlong *)(param_2 + 0x168);
        lVar9 = *(longlong *)(param_2 + 0x170);
        iVar7 = *(int *)(param_2 + 0x188);
        uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
        do {
          uVar16 = (ulonglong)((uint)*(ushort *)(lVar9 + -4 + uVar18 * 2) * iVar7);
          if ((*(byte *)(lVar8 + 0x6f + uVar16) & 4) == 0) {
            local_220 = 0;
            local_228 = 0;
            FUN_147a776dc(param_1 + 0x38,&local_178,*(undefined4 *)(lVar8 + 0x90 + uVar16),
                          *(undefined8 *)(param_2 + 0x10));
            *(float *)(lVar8 + 0x40 + uVar16) =
                 (float)(local_178 * (double)CONCAT44(uVar29,uVar28)) *
                 *(float *)(lVar8 + 0x40 + uVar16);
            *(float *)(lVar8 + 0x44 + uVar16) =
                 (float)(dStack_170 * (double)CONCAT44(uVar31,uVar30)) *
                 *(float *)(lVar8 + 0x44 + uVar16);
            *(float *)(lVar8 + 0x48 + uVar16) =
                 (float)(local_168 * (double)CONCAT44(uVar33,uVar32)) *
                 *(float *)(lVar8 + 0x48 + uVar16);
          }
          uVar18 = uVar18 - 1;
        } while (1 < uVar18);
      }
    }
    else {
      dVar11 = *(double *)(lVar8 + lVar17);
      dVar12 = ((double *)(lVar8 + lVar17))[1];
      dVar19 = *(double *)(lVar8 + 0x10 + lVar17);
      dVar21 = dVar12 + dVar12;
      dVar22 = dVar19 + dVar19;
      dVar26 = dVar11 * (dVar11 + dVar11);
      local_178 = 1.0 - (dVar19 * dVar22 + dVar12 * dVar21);
      dStack_150 = 1.0 - (dVar19 * dVar22 + dVar26);
      local_128 = 1.0 - (dVar26 + dVar12 * dVar21);
      dVar27 = *(double *)(lVar8 + lVar17) * dVar22;
      pdVar2 = (double *)(lVar8 + 0x18 + lVar17);
      dVar19 = *pdVar2;
      local_158 = dVar22 * dVar19;
      dVar26 = (dVar11 + dVar11) * *pdVar2;
      dVar19 = dVar21 * dVar19;
      dStack_170 = dVar21 * dVar11 + local_158;
      local_148 = dVar22 * dVar12 + dVar26;
      local_158 = dVar21 * dVar11 - local_158;
      dVar26 = dVar22 * dVar12 - dVar26;
      local_168 = dVar27 - dVar19;
      uStack_160 = 0;
      uStack_140 = 0;
      local_138._8_4_ = SUB84(dVar26,0);
      local_138._0_8_ = dVar19 + dVar27;
      local_138._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      uStack_120 = 0;
      puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar17);
      local_118 = *puVar3;
      uStack_110 = puVar3[1];
      local_108._8_8_ = 0x3ff0000000000000;
      local_108._0_8_ = *(undefined8 *)(lVar8 + 0x30 + lVar17);
      FUN_14007522e(&local_1f8);
      if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
        lVar8 = *(longlong *)(param_2 + 0x168);
        lVar9 = *(longlong *)(param_2 + 0x170);
        iVar7 = *(int *)(param_2 + 0x188);
        uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
        do {
          uVar16 = (ulonglong)((uint)*(ushort *)(lVar9 + -4 + uVar18 * 2) * iVar7);
          if ((*(byte *)(lVar8 + 0x6f + uVar16) & 4) == 0) {
            local_220 = 0;
            local_228 = 0;
            FUN_147a776dc(param_1 + 0x38,&local_210,*(undefined4 *)(lVar8 + 0x90 + uVar16),
                          *(undefined8 *)(param_2 + 0x10));
            *(float *)(lVar8 + 0x40 + uVar16) =
                 (float)((local_198 * 0.0 +
                         local_200 * local_1b8 + local_208 * local_1d8 + local_210 * local_1f8) *
                        (double)CONCAT44(uVar29,uVar28)) * *(float *)(lVar8 + 0x40 + uVar16);
            *(float *)(lVar8 + 0x44 + uVar16) =
                 (float)((dStack_190 * 0.0 +
                         local_200 * dStack_1b0 + local_208 * dStack_1d0 + local_210 * dStack_1f0) *
                        (double)CONCAT44(uVar31,uVar30)) * *(float *)(lVar8 + 0x44 + uVar16);
            *(float *)(lVar8 + 0x48 + uVar16) =
                 (float)((local_210 * local_1e8 + local_208 * local_1c8 + local_200 * local_1a8 +
                         local_188 * 0.0) * (double)CONCAT44(uVar33,uVar32)) *
                 *(float *)(lVar8 + 0x48 + uVar16);
          }
          uVar18 = uVar18 - 1;
        } while (1 < uVar18);
      }
    }
  }
  else if ((bVar5 & 1) == 0) {
    if ((uVar6 & 1) == 0) {
      if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
        dVar21 = *(double *)(lVar8 + lVar17);
        dVar22 = ((double *)(lVar8 + lVar17))[1];
        dVar27 = *(double *)(lVar8 + 0x10 + lVar17);
        dVar20 = dVar22 + dVar22;
        dVar23 = dVar27 + dVar27;
        dVar11 = dVar21 * (dVar21 + dVar21);
        dVar12 = *(double *)(lVar8 + lVar17) * dVar23;
        pdVar2 = (double *)(lVar8 + 0x18 + lVar17);
        dVar19 = *pdVar2;
        dVar24 = dVar23 * dVar19;
        dVar25 = (dVar21 + dVar21) * *pdVar2;
        dVar19 = dVar20 * dVar19;
        lVar9 = *(longlong *)(param_2 + 0x168);
        lVar10 = *(longlong *)(param_2 + 0x170);
        iVar7 = *(int *)(param_2 + 0x188);
        pdVar2 = (double *)(lVar8 + 0x20 + lVar17);
        dVar13 = *pdVar2;
        dVar14 = pdVar2[1];
        dVar26 = *(double *)(lVar8 + 0x30 + lVar17);
        uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
        do {
          uVar16 = (ulonglong)((uint)*(ushort *)(lVar10 + -4 + uVar18 * 2) * iVar7);
          if ((*(byte *)(lVar9 + 0x6f + uVar16) & 4) == 0) {
            local_220 = 0;
            local_228 = 0;
            FUN_147a776dc(param_1 + 0x38,&local_178,*(undefined4 *)(lVar9 + 0x90 + uVar16),
                          *(undefined8 *)(param_2 + 0x10));
            *(float *)(lVar9 + 0x40 + uVar16) =
                 (float)(((dVar19 + dVar12) * local_168 +
                          dStack_170 * (dVar20 * dVar21 - dVar24) +
                          local_178 * (1.0 - (dVar27 * dVar23 + dVar22 * dVar20)) + dVar13 * 0.0) *
                        (double)CONCAT44(uVar29,uVar28));
            *(float *)(lVar9 + 0x44 + uVar16) =
                 (float)(((dVar23 * dVar22 - dVar25) * local_168 +
                          dStack_170 * (1.0 - (dVar27 * dVar23 + dVar11)) +
                          local_178 * (dVar20 * dVar21 + dVar24) + dVar14 * 0.0) *
                        (double)CONCAT44(uVar31,uVar30));
            *(float *)(lVar9 + 0x48 + uVar16) =
                 (float)((local_178 * (dVar12 - dVar19) + dStack_170 * (dVar23 * dVar22 + dVar25) +
                          local_168 * (1.0 - (dVar22 * dVar20 + dVar11)) + dVar26 * 0.0) *
                        (double)CONCAT44(uVar33,uVar32));
          }
          uVar18 = uVar18 - 1;
        } while (1 < uVar18);
      }
    }
    else if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
      lVar8 = *(longlong *)(param_2 + 0x168);
      lVar9 = *(longlong *)(param_2 + 0x170);
      iVar7 = *(int *)(param_2 + 0x188);
      uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
      do {
        uVar16 = (ulonglong)((uint)*(ushort *)(lVar9 + -4 + uVar18 * 2) * iVar7);
        if ((*(byte *)(lVar8 + 0x6f + uVar16) & 4) == 0) {
          local_220 = 0;
          local_228 = 0;
          FUN_147a776dc(param_1 + 0x38,&local_178,*(undefined4 *)(lVar8 + 0x90 + uVar16),
                        *(undefined8 *)(param_2 + 0x10));
          *(float *)(lVar8 + 0x40 + uVar16) = (float)(local_178 * (double)CONCAT44(uVar29,uVar28));
          *(float *)(lVar8 + 0x44 + uVar16) = (float)(dStack_170 * (double)CONCAT44(uVar31,uVar30));
          *(float *)(lVar8 + 0x48 + uVar16) = (float)(local_168 * (double)CONCAT44(uVar33,uVar32));
        }
        uVar18 = uVar18 - 1;
      } while (1 < uVar18);
    }
  }
  else if ((uVar6 & 1) == 0) {
    if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
      lVar8 = *(longlong *)(param_2 + 0x168);
      lVar9 = *(longlong *)(param_2 + 0x170);
      iVar7 = *(int *)(param_2 + 0x188);
      uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
      do {
        uVar16 = (ulonglong)((uint)*(ushort *)(lVar9 + -4 + uVar18 * 2) * iVar7);
        if ((*(byte *)(lVar8 + 0x6f + uVar16) & 4) == 0) {
          local_220 = 0;
          local_228 = 0;
          FUN_147a776dc(param_1 + 0x38,&local_178,*(undefined4 *)(lVar8 + 0x90 + uVar16),
                        *(undefined8 *)(param_2 + 0x10));
          *(float *)(lVar8 + 0x40 + uVar16) = (float)(local_178 * (double)CONCAT44(uVar29,uVar28));
          *(float *)(lVar8 + 0x44 + uVar16) = (float)(dStack_170 * (double)CONCAT44(uVar31,uVar30));
          *(float *)(lVar8 + 0x48 + uVar16) = (float)(local_168 * (double)CONCAT44(uVar33,uVar32));
        }
        uVar18 = uVar18 - 1;
      } while (1 < uVar18);
    }
  }
  else {
    dVar11 = *(double *)(lVar8 + lVar17);
    dVar12 = ((double *)(lVar8 + lVar17))[1];
    dVar19 = *(double *)(lVar8 + 0x10 + lVar17);
    dVar21 = dVar12 + dVar12;
    dVar22 = dVar19 + dVar19;
    dVar26 = dVar11 * (dVar11 + dVar11);
    local_178 = 1.0 - (dVar19 * dVar22 + dVar12 * dVar21);
    dStack_150 = 1.0 - (dVar19 * dVar22 + dVar26);
    local_128 = 1.0 - (dVar26 + dVar12 * dVar21);
    dVar27 = *(double *)(lVar8 + lVar17) * dVar22;
    pdVar2 = (double *)(lVar8 + 0x18 + lVar17);
    dVar19 = *pdVar2;
    local_158 = dVar22 * dVar19;
    dVar26 = (dVar11 + dVar11) * *pdVar2;
    dVar19 = dVar21 * dVar19;
    dStack_170 = dVar21 * dVar11 + local_158;
    local_148 = dVar22 * dVar12 + dVar26;
    local_158 = dVar21 * dVar11 - local_158;
    dVar26 = dVar22 * dVar12 - dVar26;
    local_168 = dVar27 - dVar19;
    uStack_160 = 0;
    uStack_140 = 0;
    local_138._8_4_ = SUB84(dVar26,0);
    local_138._0_8_ = dVar19 + dVar27;
    local_138._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_120 = 0;
    puVar3 = (undefined8 *)(lVar8 + 0x20 + lVar17);
    local_118 = *puVar3;
    uStack_110 = puVar3[1];
    local_108._8_8_ = 0x3ff0000000000000;
    local_108._0_8_ = *(undefined8 *)(lVar8 + 0x30 + lVar17);
    FUN_14007522e(&local_1f8);
    if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
      lVar8 = *(longlong *)(param_2 + 0x168);
      lVar9 = *(longlong *)(param_2 + 0x170);
      iVar7 = *(int *)(param_2 + 0x188);
      uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
      do {
        uVar16 = (ulonglong)((uint)*(ushort *)(lVar9 + -4 + uVar18 * 2) * iVar7);
        if ((*(byte *)(lVar8 + 0x6f + uVar16) & 4) == 0) {
          local_220 = 0;
          local_228 = 0;
          FUN_147a776dc(param_1 + 0x38,&local_210,*(undefined4 *)(lVar8 + 0x90 + uVar16),
                        *(undefined8 *)(param_2 + 0x10));
          *(float *)(lVar8 + 0x40 + uVar16) =
               (float)((local_198 * 0.0 +
                       local_200 * local_1b8 + local_208 * local_1d8 + local_210 * local_1f8) *
                      (double)CONCAT44(uVar29,uVar28));
          *(float *)(lVar8 + 0x44 + uVar16) =
               (float)((dStack_190 * 0.0 +
                       local_200 * dStack_1b0 + local_208 * dStack_1d0 + local_210 * dStack_1f0) *
                      (double)CONCAT44(uVar31,uVar30));
          *(float *)(lVar8 + 0x48 + uVar16) =
               (float)((local_210 * local_1e8 + local_208 * local_1c8 + local_200 * local_1a8 +
                       local_188 * 0.0) * (double)CONCAT44(uVar33,uVar32));
        }
        uVar18 = uVar18 - 1;
      } while (1 < uVar18);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c2e078 FUN_147c2e078 body=265 status=ok
// SIG undefined FUN_147c2e078(void)

void FUN_147c2e078(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a774f0(param_1 + 0x38);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionAngle",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147c1308f(param_1,local_20,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x60) = lVar2;
  }
  cVar1 = FUN_147a774f0(param_1 + 0x68);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_28,L"DistributionVelocity",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147c1308f(param_1,local_28,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x90) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2e182 FUN_147c2e182 body=67 status=ok
// SIG undefined FUN_147c2e182(void)

void FUN_147c2e182(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c2e1c6(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c2e1c6 FUN_147c2e1c6 body=2622 status=ok
// SIG undefined FUN_147c2e1c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c2e1c6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_108;
  double local_e8;
  double dStack_e0;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf59f0) && (FUN_144b3d300(&DAT_14caf59f0), DAT_14caf59f0 == -1)) {
    DAT_14caf59d8 = 0.0;
    DAT_14caf59e0 = 0.0;
    DAT_14caf59e8 = 1.0;
    _Init_thread_footer(&DAT_14caf59f0);
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  local_108 = 1.0;
  local_e8 = 1.0;
  dStack_e0 = 1.0;
  if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
    local_e8 = 1.0;
    dStack_e0 = 1.0;
  }
  else if (lVar2 == 0) {
    local_108 = 1.0;
  }
  else {
    local_e8 = *(double *)(lVar2 + 0x280);
    dStack_e0 = *(double *)(lVar2 + 0x288);
    local_108 = *(double *)(lVar2 + 0x290);
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  fVar8 = (float)FUN_147a77524(param_1 + 0x38);
  fVar9 = (float)FUN_147a77524(param_1 + 0x68);
  uVar7 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_3 + 4) = uVar7;
  dVar15 = (double)(int)(fVar8 * 0.017453292 * 10430.0) * 0.01745329238474369;
  dVar18 = (double)(int)(((float)(uVar7 >> 9 | 0x3f800000) + -1.0) * 6.2831855 * 10430.0) *
           0.01745329238474369;
  dVar10 = sin(dVar15);
  dVar11 = sin(dVar18);
  dVar12 = cos(dVar15);
  dVar13 = cos(dVar18);
  dVar15 = *(double *)(param_1 + 0x98);
  dVar18 = *(double *)(param_1 + 0xa0);
  dVar24 = *(double *)(param_1 + 0xa8);
  if ((((dVar15 != DAT_14c8464e0) || (NAN(dVar15) || NAN(DAT_14c8464e0))) ||
      (dVar18 != DAT_14c8464e8)) ||
     (((NAN(dVar18) || NAN(DAT_14c8464e8) || (dVar24 != DAT_14c8464f0)) ||
      (dVar21 = DAT_14caf59e8, dVar23 = DAT_14caf59e0, dVar22 = DAT_14caf59d8,
      NAN(dVar24) || NAN(DAT_14c8464f0))))) {
    dVar6 = dVar24 * dVar24 + dVar15 * dVar15 + dVar18 * dVar18;
    if (((dVar6 != 1.0) || (dVar21 = dVar24, dVar23 = dVar18, dVar22 = dVar15, NAN(dVar6))) &&
       (dVar21 = DAT_14c8464f0, dVar23 = DAT_14c8464e8, dVar22 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar6)) {
      dVar22 = 1.0 / SQRT(dVar6);
      dVar21 = dVar24 * dVar22;
      dVar23 = dVar18 * dVar22;
      dVar22 = dVar15 * dVar22;
    }
  }
  if ((((dVar22 != 0.0) || (NAN(dVar22))) || (dVar23 != 0.0)) ||
     ((NAN(dVar23) || (dVar21 != -1.0 && dVar21 != 1.0)))) {
    dVar15 = dVar23 * 0.0 + dVar22 * -0.0;
    dVar24 = dVar22 - dVar21 * 0.0;
    dVar18 = dVar21 * 0.0 - dVar23;
    dVar6 = dVar22 * dVar24 - dVar18 * dVar23;
    dVar14 = dVar21 * dVar18 - dVar15 * dVar22;
    dVar20 = dVar23 * dVar15 - dVar24 * dVar21;
  }
  else {
    dVar14 = dVar21 - dVar22 * 0.0;
    dVar6 = dVar22 * 0.0 - dVar23;
    dVar20 = dVar23 * 0.0 + dVar21 * -0.0;
    dVar15 = dVar20 * dVar23 - dVar22 * dVar14;
    dVar24 = dVar6 * dVar22 - dVar21 * dVar20;
    dVar18 = dVar14 * dVar21 - dVar23 * dVar6;
  }
  dVar3 = dVar15 * dVar15 + dVar18 * dVar18 + dVar24 * dVar24;
  if (((dVar3 != 1.0) || (dVar5 = dVar15, dVar4 = dVar18, dVar17 = dVar24, NAN(dVar3))) &&
     (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e0, dVar17 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar3)) {
    dVar4 = 1.0 / SQRT(dVar3);
    dVar5 = dVar15 * dVar4;
    dVar17 = dVar24 * dVar4;
    dVar4 = dVar18 * dVar4;
  }
  dVar18 = DAT_14c8464e0 * 0.0 +
           -(dVar10 * dVar13 + dVar11 * 0.0) * DAT_14caf59e8 +
           DAT_14caf59e0 * (dVar10 * 0.0 * dVar13 - dVar11) + DAT_14caf59d8 * dVar12 * dVar13;
  dVar24 = DAT_14c8464e8 * 0.0 +
           (dVar13 * 0.0 - dVar11 * dVar10) * DAT_14caf59e8 +
           DAT_14caf59e0 * (dVar10 * 0.0 * dVar11 + dVar13) + DAT_14caf59d8 * dVar11 * dVar12;
  dVar15 = DAT_14c8464f0 * 0.0 +
           dVar12 * DAT_14caf59e8 + (dVar10 * DAT_14caf59d8 - dVar12 * 0.0 * DAT_14caf59e0);
  dVar10 = dVar6 * dVar6 + dVar20 * dVar20 + dVar14 * dVar14;
  if (((dVar10 != 1.0) || (dVar12 = dVar20, dVar11 = dVar6, dVar13 = dVar14, NAN(dVar10))) &&
     (dVar12 = DAT_14c8464e0, dVar11 = DAT_14c8464f0, dVar13 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar10)) {
    dVar12 = 1.0 / SQRT(dVar10);
    dVar11 = dVar6 * dVar12;
    dVar13 = dVar14 * dVar12;
    dVar12 = dVar20 * dVar12;
  }
  dVar10 = dVar12 * dVar24 + dVar18 * dVar4 + dVar15 * dVar22 + 0.0;
  dVar12 = dVar13 * dVar24 + dVar18 * dVar17 + dVar15 * dVar23 + 0.0;
  dVar15 = dVar5 * dVar18 + dVar24 * dVar11 + dVar21 * dVar15 + 0.0;
  if ((*(byte *)(*(longlong *)(lVar2 + 0x30) + 0x71) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x10);
      dVar10 = dVar10 * *(double *)(lVar2 + 0x280);
      dVar12 = dVar12 * *(double *)(lVar2 + 0x288);
      dVar15 = dVar15 * *(double *)(lVar2 + 0x290);
      dVar11 = *(double *)(lVar2 + 0x240);
      dVar13 = *(double *)(lVar2 + 0x248);
      dVar22 = *(double *)(lVar2 + 0x250);
      dVar18 = *(double *)(lVar2 + 600);
      dVar21 = dVar12 * dVar11 - dVar10 * dVar13;
      dVar23 = dVar15 * dVar13 - dVar12 * dVar22;
      dVar24 = dVar10 * dVar22 - dVar11 * dVar15;
      dVar23 = dVar23 + dVar23;
      dVar24 = dVar24 + dVar24;
      dVar21 = dVar21 + dVar21;
      dVar10 = (dVar21 * dVar13 - dVar24 * dVar22) + dVar18 * dVar23 + dVar10;
      dVar12 = (dVar22 * dVar23 - dVar11 * dVar21) + *(double *)(lVar2 + 600) * dVar24 + dVar12;
      dVar15 = dVar21 * dVar18 + dVar15 + (dVar24 * dVar11 - dVar23 * dVar13);
    }
  }
  else if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    dVar24 = -*(double *)(lVar2 + 0x240);
    dVar11 = -*(double *)(lVar2 + 0x248);
    dVar21 = *(double *)(lVar2 + 0x250) * -1.0;
    dVar23 = *(double *)(lVar2 + 600) * 1.0;
    dVar22 = dVar10 * dVar21 - dVar24 * dVar15;
    dVar18 = dVar12 * dVar24 - dVar10 * dVar11;
    dVar13 = dVar15 * dVar11 - dVar12 * dVar21;
    dVar13 = dVar13 + dVar13;
    dVar22 = dVar22 + dVar22;
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x280);
    dVar18 = dVar18 + dVar18;
    auVar16 = divpd(_DAT_149934d80,auVar1);
    dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_) *
             ((dVar18 * dVar11 - dVar22 * dVar21) + dVar23 * dVar13 + dVar10);
    dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
             (*(double *)(lVar2 + 0x240) * dVar18 + dVar21 * dVar13 + dVar23 * dVar22 + dVar12);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(lVar2 + 0x290))) *
             (dVar23 * dVar18 + dVar15 + (dVar22 * dVar24 - dVar13 * dVar11));
  }
  dVar18 = (double)fVar9;
  fVar8 = (float)(local_108 * dVar15 * dVar18);
  fVar9 = (float)(dStack_e0 * dVar12 * dVar18);
  fVar19 = (float)(dVar10 * dVar18 * local_e8);
  *(float *)(param_4 + 0x40) = *(float *)(param_4 + 0x40) + fVar19;
  *(float *)(param_4 + 0x44) = *(float *)(param_4 + 0x44) + fVar9;
  *(float *)(param_4 + 0x48) = *(float *)(param_4 + 0x48) + fVar8;
  *(float *)(param_4 + 0x30) = fVar19 + *(float *)(param_4 + 0x30);
  *(float *)(param_4 + 0x34) = fVar9 + *(float *)(param_4 + 0x34);
  *(float *)(param_4 + 0x38) = fVar8 + *(float *)(param_4 + 0x38);
  return;
}



// FUNCTION 147c2ec06 FUN_147c2ec06 body=251 status=ok
// SIG undefined FUN_147c2ec06(void)

void FUN_147c2ec06(undefined8 *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_2 != '\0') {
    FUN_1435e78de();
  }
  uVar5 = DAT_14caf5b10;
  if ((DAT_14c7616fc & 1) != 0) {
    lVar8 = (longlong)(int)DAT_14caf5b10;
    DAT_14caf5b10 = DAT_14caf5b10 + 1;
    if (DAT_14caf5b14 < DAT_14caf5b10) {
      FUN_147c41994(&DAT_14caf5a88,uVar5);
    }
    puVar7 = &DAT_14caf5a88;
    if (DAT_14caf5b08 != (undefined8 *)0x0) {
      puVar7 = DAT_14caf5b08;
    }
    puVar7[lVar8 * 2] = *param_1;
    lVar3 = param_1[1];
    puVar7[lVar8 * 2 + 1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*(longlong *)*param_1 + 8))();
    cVar6 = (**(code **)(*(longlong *)*param_1 + 0x58))();
    if (cVar6 != '\0') {
      LOCK();
      DAT_14caf6068 = DAT_14caf6068 + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*(longlong *)*param_1 + 0x60))();
    if (cVar6 != '\0') {
      LOCK();
      DAT_14caf6060 = DAT_14caf6060 + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*(longlong *)*param_1 + 0x68))();
    if (cVar6 != '\0') {
      LOCK();
      DAT_14caf6064 = DAT_14caf6064 + 1;
      UNLOCK();
    }
  }
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147c2ece2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c2ed02 FUN_147c2ed02 body=107 status=ok
// SIG undefined FUN_147c2ed02(void)

longlong * FUN_147c2ed02(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140288b94();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147c2ed6e FUN_147c2ed6e body=162 status=ok
// SIG undefined FUN_147c2ed6e(void)

void FUN_147c2ed6e(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  FUN_147c2f29a(param_1 + 2);
  lVar1 = 0;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x16);
    if (*(undefined4 **)(param_1 + 0x16) == (undefined4 *)0x0) {
      puVar2 = param_1 + 2;
    }
    *(undefined8 *)(puVar2 + lVar1 * 2) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  FUN_147c2f29a(param_1 + 0x1a);
  lVar1 = 0;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x2e);
    if (*(undefined4 **)(param_1 + 0x2e) == (undefined4 *)0x0) {
      puVar2 = param_1 + 0x1a;
    }
    *(undefined8 *)(puVar2 + lVar1 * 2) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  LOCK();
  *(undefined8 *)(param_1 + 0x36) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x38) = 0;
  LOCK();
  *(undefined8 *)(param_1 + 0x3a) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(param_1 + 0x3c) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x3e) = 0;
  return;
}



// FUNCTION 147c2ee10 FUN_147c2ee10 body=194 status=ok
// SIG undefined FUN_147c2ee10(void)

void FUN_147c2ee10(int *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (*param_2 == 0) {
    return;
  }
  *param_1 = *param_1 + 1;
  *(ulonglong *)(param_1 + 0x32) = *(longlong *)(param_1 + 0x32) + *param_2;
  *(ulonglong *)(param_1 + 0x34) = *(longlong *)(param_1 + 0x34) + param_2[1];
  LOCK();
  *(ulonglong *)(param_1 + 0x36) = *(longlong *)(param_1 + 0x36) + param_2[2];
  UNLOCK();
  *(ulonglong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + param_2[3];
  LOCK();
  *(ulonglong *)(param_1 + 0x3a) = *(longlong *)(param_1 + 0x3a) + param_2[4];
  UNLOCK();
  FUN_147c2eed2(param_1 + 2,
                param_2[4] + param_2[2] + param_2[5] + param_2[3] + param_2[1] + param_2[6]);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (param_2[4] + param_2[2] + param_2[5] + param_2[3] + param_2[1] + param_2[6]) / *param_2
    ;
  }
  FUN_147c2eed2(param_1 + 0x1a,uVar1);
  return;
}



// FUNCTION 147c2eed2 FUN_147c2eed2 body=126 status=ok
// SIG undefined FUN_147c2eed2(void)

void FUN_147c2eed2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar4 = (longlong)iVar1 * 8;
    lVar2 = 0;
    do {
      if ((longlong)(ulonglong)*(uint *)(lVar3 + lVar2 * 8) < param_2) {
        if ((int)lVar2 != -1) {
          *(int *)(param_1 + 0x58) = iVar1 + -1;
          local_10 = param_2;
          FUN_147c2f224(param_1,&local_10);
        }
        break;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c2ef52 FUN_147c2ef52 body=127 status=ok
// SIG undefined FUN_147c2ef52(void)

void FUN_147c2ef52(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  FUN_147c2f29a(param_1 + 8);
  lVar1 = 0;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    if (*(undefined4 **)(param_1 + 0x1c) == (undefined4 *)0x0) {
      puVar2 = param_1 + 8;
    }
    *(undefined8 *)(puVar2 + lVar1 * 2) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  FUN_147c2f29a(param_1 + 0x20);
  lVar1 = 0;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x34);
    if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
      puVar2 = param_1 + 0x20;
    }
    *(undefined8 *)(puVar2 + lVar1 * 2) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 147c2efd2 FUN_147c2efd2 body=116 status=ok
// SIG undefined FUN_147c2efd2(void)

void FUN_147c2efd2(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_2 + 0x38) == 0) {
    return;
  }
  *param_1 = *param_1 + 1;
  *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + *(longlong *)(param_2 + 0x40);
  *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + *(longlong *)(param_2 + 0x48);
  FUN_147c2eed2(param_1 + 8,*(longlong *)(param_2 + 0x48) + *(longlong *)(param_2 + 0x40));
  if (*(ulonglong *)(param_2 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)(*(longlong *)(param_2 + 0x48) + *(longlong *)(param_2 + 0x40)) /
            *(ulonglong *)(param_2 + 0x38);
  }
  FUN_147c2eed2(param_1 + 0x20,uVar1);
  return;
}



// FUNCTION 147c2f046 FUN_147c2f046 body=116 status=ok
// SIG undefined FUN_147c2f046(void)

void FUN_147c2f046(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  FUN_147c2f29a(param_1 + 6);
  lVar1 = 0;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x1a);
    if (*(undefined4 **)(param_1 + 0x1a) == (undefined4 *)0x0) {
      puVar2 = param_1 + 6;
    }
    *(undefined8 *)(puVar2 + lVar1 * 2) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  FUN_147c2f29a(param_1 + 0x1e);
  lVar1 = 0;
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x32);
    if (*(undefined4 **)(param_1 + 0x32) == (undefined4 *)0x0) {
      puVar2 = param_1 + 0x1e;
    }
    *(undefined8 *)(puVar2 + lVar1 * 2) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 10);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 147c2f0ba FUN_147c2f0ba body=100 status=ok
// SIG undefined FUN_147c2f0ba(void)

void FUN_147c2f0ba(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_2 + 0x50) == 0) {
    return;
  }
  *param_1 = *param_1 + 1;
  *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + *(longlong *)(param_2 + 0x50);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + *(longlong *)(param_2 + 0x58);
  FUN_147c2eed2(param_1 + 6,*(undefined8 *)(param_2 + 0x58));
  if (*(ulonglong *)(param_2 + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0x58) / *(ulonglong *)(param_2 + 0x50);
  }
  FUN_147c2eed2(param_1 + 0x1e,uVar1);
  return;
}



// FUNCTION 147c2f11e FUN_147c2f11e body=261 status=ok
// SIG undefined FUN_147c2f11e(void)

longlong FUN_147c2f11e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xa00000000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0xa00000000;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  LOCK();
  *(undefined8 *)(param_1 + 0xd8) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  LOCK();
  *(undefined8 *)(param_1 + 0xe8) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(param_1 + 0xf0) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_147c2ed6e();
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0xa00000000;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0xa00000000;
  FUN_147c2ef52(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0xa00000000;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0xa00000000;
  FUN_147c2f046(param_1 + 0x1e0);
  FUN_147c2ed6e(param_1);
  FUN_147c2ef52(param_1 + 0x100);
  FUN_147c2f046(param_1 + 0x1e0);
  return param_1;
}



// FUNCTION 147c2f224 FUN_147c2f224 body=118 status=ok
// SIG undefined FUN_147c2f224(void)

int FUN_147c2f224(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_147c426ee(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(lVar2 + lVar3 * 8 + 8),(void *)(lVar2 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + lVar3 * 8) = *param_2;
  return param_3;
}



// FUNCTION 147c2f29a FUN_147c2f29a body=57 status=ok
// SIG undefined FUN_147c2f29a(void)

void FUN_147c2f29a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 < 10) {
    *(undefined4 *)(param_1 + 0x58) = 10;
    if ((uint)(*(int *)(param_1 + 0x5c) - iVar1) < 10U - iVar1) {
      FUN_147c426ee();
      return;
    }
  }
  else if (iVar1 != 10) {
    *(undefined4 *)(param_1 + 0x58) = 10;
    FUN_147c425ca();
    return;
  }
  return;
}



// FUNCTION 147c2f2d4 FUN_147c2f2d4 body=50 status=ok
// SIG undefined FUN_147c2f2d4(void)

void FUN_147c2f2d4(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_147c42d76(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000147c2f2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 147c2f306 FUN_147c2f306 body=189 status=ok
// SIG undefined FUN_147c2f306(void)

void FUN_147c2f306(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    uVar2 = FUN_14001cc68(0x2b8,0x10);
    FUN_147c2f11e(uVar2);
    local_38 = param_2;
    FUN_147c4275e(param_1 + 0x48,&local_2c);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8 + (longlong)local_2c * 0x18);
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8 + (longlong)local_2c * 0x18) = uVar2;
    if (lVar1 != 0) {
      FUN_147c42cfe(lVar1);
      FUN_1400020a8(lVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2f3d8 FUN_147c2f3d8 body=72 status=ok
// SIG undefined FUN_147c2f3d8(void)

void FUN_147c2f3d8(longlong param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_147c42fee(param_1 + 0x48,*param_2);
                    /* WARNING: Could not recover jumptable at 0x000147c2f419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 147c2f420 FUN_147c2f420 body=157 status=ok
// SIG undefined FUN_147c2f420(void)

undefined8 * FUN_147c2f420(undefined8 *param_1,byte param_2,char param_3,char param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14aa06ea0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  *(byte *)(param_1 + 8) = param_3 * '\x02' | param_2 | param_4 << 2 | *(byte *)(param_1 + 8) & 0xf8
  ;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 147c2f4be FUN_147c2f4be body=46 status=ok
// SIG undefined FUN_147c2f4be(void)

void FUN_147c2f4be(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144a82cde();
  if (lVar1 != 0) {
    uVar2 = FUN_144a82cde();
    FUN_1435e941e(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 147c2f4ec FUN_147c2f4ec body=40 status=ok
// SIG undefined FUN_147c2f4ec(void)

undefined4 FUN_147c2f4ec(longlong param_1)

{
  int iVar1;
  
  FUN_1435e8dc8();
  iVar1 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar1 + -1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1 < iVar1);
}



// FUNCTION 147c2f514 FUN_147c2f514 body=652 status=ok
// SIG undefined FUN_147c2f514(void)

void FUN_147c2f514(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FParticleTexCoordVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x200;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_90) {
    lVar5 = *plVar7;
    *plVar7 = local_90;
    local_90 = 0;
    if (lVar5 == 0) goto LAB_147c2f606;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147c2f606:
  lVar5 = *plVar7;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x200;
  lVar5 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  lVar6 = 0;
  do {
    puVar2 = (undefined4 *)(lVar5 + lVar6);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar6);
    *puVar2 = 0x3f800000;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x200);
  lVar5 = *plVar7;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2f7a2 FUN_147c2f7a2 body=669 status=ok
// SIG undefined FUN_147c2f7a2(void)

void FUN_147c2f7a2(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FParticleEightTexCoordVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x400;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_90) {
    lVar5 = *plVar7;
    *plVar7 = local_90;
    local_90 = 0;
    if (lVar5 == 0) goto LAB_147c2f894;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147c2f894:
  lVar5 = *plVar7;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x400;
  lVar5 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  lVar6 = 0;
  do {
    puVar2 = (undefined4 *)(lVar5 + lVar6);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3f800000;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar6);
    *puVar2 = 0x3f800000;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0;
    puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar6);
    *puVar2 = 0x3f800000;
    puVar2[1] = 0;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0;
    puVar2 = (undefined4 *)(lVar5 + 0x30 + lVar6);
    *puVar2 = 0x3f800000;
    puVar2[1] = 0;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0;
    lVar6 = lVar6 + 0x40;
  } while (lVar6 != 0x400);
  lVar5 = *plVar7;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2fa40 FUN_147c2fa40 body=42 status=ok
// SIG undefined FUN_147c2fa40(void)

void FUN_147c2fa40(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147c2fa8a FUN_147c2fa8a body=39 status=ok
// SIG undefined FUN_147c2fa8a(void)

void FUN_147c2fa8a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147c41556(uVar1,param_1);
  return;
}



// FUNCTION 147c2fab2 FUN_147c2fab2 body=60 status=ok
// SIG undefined FUN_147c2fab2(void)

longlong FUN_147c2fab2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147c2faee FUN_147c2faee body=32 status=ok
// SIG undefined FUN_147c2faee(void)

undefined8 FUN_147c2faee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FParticleSystemWorldManager");
  return param_2;
}



// FUNCTION 147c2fb0e FUN_147c2fb0e body=55 status=ok
// SIG undefined FUN_147c2fb0e(void)

void FUN_147c2fb0e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147c43aa8(param_1,iVar1);
  }
  FUN_147c43a91((longlong)iVar1 * 0x10 + *param_1);
  return;
}



// FUNCTION 147c2fb46 FUN_147c2fb46 body=266 status=ok
// SIG undefined FUN_147c2fb46(void)

undefined8 FUN_147c2fb46(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5dc0) {
    FUN_144b3d300(&DAT_14caf5dc0);
    if (DAT_14caf5dc0 == -1) {
      uVar1 = FUN_140851d9a();
      DAT_14caf5db8 = thunk_FUN_140277b32(uVar1,0,L"/Script/Engine.ETickingGroup",0);
      _Init_thread_footer(&DAT_14caf5dc0);
    }
  }
  FUN_1401cfb1c(DAT_14caf5db8,local_40,*(undefined1 *)(param_1 + 8));
  FUN_140ba7826(local_30,L"FParticleSystemManager::Tick(",local_40);
  FUN_144a882a8(param_2,local_30,&DAT_149e06144);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c2fc52 FUN_147c2fc52 body=38 status=ok
// SIG undefined FUN_147c2fc52(void)

undefined8 FUN_147c2fc52(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"ParticleSystemManager",1);
  return param_2;
}



// FUNCTION 147c2fc78 FUN_147c2fc78 body=1334 status=ok
// SIG undefined FUN_147c2fc78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c2fc78(undefined4 param_1,double *param_2,undefined1 (*param_3) [16],double *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = DAT_149931e80;
  uVar2 = DAT_149931e80._8_8_;
  switch(param_1) {
  case 1:
    dVar10 = param_2[8];
    uVar5 = SUB84(param_2[9],0);
    uVar6 = (undefined4)((ulonglong)param_2[9] >> 0x20);
    dVar7 = param_2[10];
    goto LAB_147c2fe9e;
  case 2:
    dVar10 = param_2[8];
    dVar7 = param_2[9];
    dVar12 = param_2[10];
    dVar13 = dVar12 * dVar12 + dVar10 * dVar10 + dVar7 * dVar7;
    if (((dVar13 != 1.0) || (dVar8 = dVar12, dVar11 = dVar7, dVar9 = dVar10, NAN(dVar13))) &&
       (dVar8 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar8 = dVar12 * dVar13;
      dVar11 = dVar7 * dVar13;
      dVar9 = dVar10 * dVar13;
    }
    auVar4._8_4_ = SUB84(dVar11,0);
    auVar4._0_8_ = -dVar9;
    auVar4._12_4_ = (uint)((ulonglong)dVar11 >> 0x20) ^ 0x80000000;
    *param_3 = auVar4;
    *(double *)param_3[1] = -dVar8;
    uVar5 = SUB84(*param_2,0);
    uVar6 = (undefined4)((ulonglong)*param_2 >> 0x20);
    dVar10 = param_2[1];
    dVar7 = param_2[2];
    goto LAB_147c2fd9d;
  case 3:
    uVar5 = SUB84(*param_2,0);
    uVar6 = (undefined4)((ulonglong)*param_2 >> 0x20);
    dVar10 = param_2[1];
    dVar7 = param_2[2];
    goto LAB_147c2fd3b;
  case 4:
    uVar5 = SUB84(param_2[8],0);
    uVar6 = (undefined4)((ulonglong)param_2[8] >> 0x20);
    dVar10 = param_2[9];
    dVar7 = param_2[10];
LAB_147c2fd3b:
    dVar12 = dVar7 * dVar7 +
             (double)CONCAT44(uVar6,uVar5) * (double)CONCAT44(uVar6,uVar5) + dVar10 * dVar10;
    if (((dVar12 != 1.0) ||
        (dVar9 = dVar7, dVar8 = dVar10, dVar13 = (double)CONCAT44(uVar6,uVar5), NAN(dVar12))) &&
       (dVar9 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar13 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar9 = dVar7 * dVar12;
      dVar8 = dVar10 * dVar12;
      dVar13 = (double)CONCAT44(uVar6,uVar5) * dVar12;
    }
    auVar3._8_4_ = SUB84(dVar8,0);
    auVar3._0_8_ = -dVar13;
    auVar3._12_4_ = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
    *param_3 = auVar3;
    *(double *)param_3[1] = -dVar9;
    uVar5 = SUB84(param_2[4],0);
    uVar6 = (undefined4)((ulonglong)param_2[4] >> 0x20);
    dVar10 = param_2[5];
    dVar7 = param_2[6];
LAB_147c2fd9d:
    dVar12 = dVar7 * dVar7 +
             (double)CONCAT44(uVar6,uVar5) * (double)CONCAT44(uVar6,uVar5) + dVar10 * dVar10;
    if (((dVar12 != 1.0) ||
        (dVar9 = dVar10, dVar8 = dVar7, dVar13 = (double)CONCAT44(uVar6,uVar5), NAN(dVar12))) &&
       (dVar9 = DAT_14c8464e8, dVar8 = DAT_14c8464f0, dVar13 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar9 = dVar10 * dVar12;
      dVar8 = dVar7 * dVar12;
      dVar13 = (double)CONCAT44(uVar6,uVar5) * dVar12;
    }
    *param_4 = dVar13;
    param_4[1] = dVar9;
    param_4[2] = dVar8;
switchD_147c2fc91_default:
    return;
  case 5:
    dVar10 = param_2[8];
    dVar7 = param_2[9];
    dVar12 = param_2[10];
    dVar13 = dVar12 * dVar12 + dVar10 * dVar10 + dVar7 * dVar7;
    if (((dVar13 != 1.0) || (dVar8 = dVar10, dVar11 = dVar12, dVar9 = dVar7, NAN(dVar13))) &&
       (dVar8 = DAT_14c8464e0, dVar11 = DAT_14c8464f0, dVar9 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar8 = dVar10 * dVar13;
      dVar11 = dVar12 * dVar13;
      dVar9 = dVar7 * dVar13;
    }
    *(ulonglong *)*param_3 = (ulonglong)dVar8 ^ uVar1;
    *(ulonglong *)(*param_3 + 8) = (ulonglong)dVar9 ^ uVar2;
    *(ulonglong *)param_3[1] = (ulonglong)dVar11 ^ uVar1;
    dVar10 = *param_2;
    dVar7 = param_2[1];
    dVar12 = param_2[2];
    goto LAB_147c2ff00;
  case 6:
    dVar10 = *param_2;
    uVar5 = SUB84(param_2[1],0);
    uVar6 = (undefined4)((ulonglong)param_2[1] >> 0x20);
    dVar7 = param_2[2];
LAB_147c2fe9e:
    dVar12 = dVar7 * dVar7 +
             dVar10 * dVar10 + (double)CONCAT44(uVar6,uVar5) * (double)CONCAT44(uVar6,uVar5);
    if (((dVar12 != 1.0) ||
        (dVar9 = dVar10, dVar8 = dVar7, dVar13 = (double)CONCAT44(uVar6,uVar5), NAN(dVar12))) &&
       (dVar9 = DAT_14c8464e0, dVar8 = DAT_14c8464f0, dVar13 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar9 = dVar10 * dVar12;
      dVar8 = dVar7 * dVar12;
      dVar13 = (double)CONCAT44(uVar6,uVar5) * dVar12;
    }
    *(ulonglong *)*param_3 = (ulonglong)dVar9 ^ uVar1;
    *(ulonglong *)(*param_3 + 8) = (ulonglong)dVar13 ^ uVar2;
    *(ulonglong *)param_3[1] = (ulonglong)dVar8 ^ uVar1;
    dVar10 = param_2[4];
    dVar7 = param_2[5];
    dVar12 = param_2[6];
LAB_147c2ff00:
    dVar13 = dVar12 * dVar12 + dVar10 * dVar10 + dVar7 * dVar7;
    if (((dVar13 != 1.0) || (dVar9 = dVar10, dVar8 = dVar12, dVar11 = dVar7, NAN(dVar13))) &&
       (dVar9 = DAT_14c8464e0, dVar8 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar9 = dVar10 * dVar13;
      dVar8 = dVar12 * dVar13;
      dVar11 = dVar7 * dVar13;
    }
    *param_4 = (double)((ulonglong)dVar9 ^ uVar1);
    param_4[1] = (double)((ulonglong)dVar11 ^ uVar2);
    param_4[2] = (double)((ulonglong)dVar8 ^ uVar1);
    return;
  case 7:
    uVar5 = SUB84(*param_2,0);
    uVar6 = (undefined4)((ulonglong)*param_2 >> 0x20);
    dVar10 = param_2[1];
    dVar7 = param_2[2];
    break;
  case 8:
    uVar5 = SUB84(param_2[4],0);
    uVar6 = (undefined4)((ulonglong)param_2[4] >> 0x20);
    dVar10 = param_2[5];
    dVar7 = param_2[6];
    break;
  case 9:
    uVar5 = SUB84(param_2[8],0);
    uVar6 = (undefined4)((ulonglong)param_2[8] >> 0x20);
    dVar10 = param_2[9];
    dVar7 = param_2[10];
    break;
  default:
    goto switchD_147c2fc91_default;
  }
  dVar12 = dVar7 * dVar7 +
           (double)CONCAT44(uVar6,uVar5) * (double)CONCAT44(uVar6,uVar5) + dVar10 * dVar10;
  if (((dVar12 != 1.0) ||
      (dVar9 = dVar10, dVar8 = dVar7, dVar13 = (double)CONCAT44(uVar6,uVar5), NAN(dVar12))) &&
     (dVar9 = DAT_14c8464e8, dVar8 = DAT_14c8464f0, dVar13 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar12)) {
    dVar12 = 1.0 / SQRT(dVar12);
    dVar9 = dVar10 * dVar12;
    dVar8 = dVar7 * dVar12;
    dVar13 = (double)CONCAT44(uVar6,uVar5) * dVar12;
  }
  *param_4 = dVar13;
  param_4[1] = dVar9;
  param_4[2] = dVar8;
  *(double *)param_3[1] = DAT_14c8464f0;
  dVar10 = DAT_14c8464e8;
  *(double *)*param_3 = DAT_14c8464e0;
  *(double *)(*param_3 + 8) = dVar10;
  return;
}



// FUNCTION 147c301ae FUN_147c301ae body=1453 status=ok
// SIG undefined FUN_147c301ae(void)

void FUN_147c301ae(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  char param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_198 [32];
  byte local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar14 = (**(code **)(*param_1 + 0x30))();
  pdVar16 = (double *)&DAT_14c846400;
  if (*(char *)(lVar14 + 0xbc) != '\0') {
    pdVar16 = (double *)(param_2 + 0x100);
  }
  dVar10 = *(double *)(param_4 + 0xa30);
  dVar11 = *(double *)(param_4 + 0xa38);
  dVar12 = *(double *)(param_4 + 0xa50);
  dVar13 = *(double *)(param_4 + 0xa58);
  dVar21 = *(double *)(param_4 + 0xa70) * 0.0;
  dVar22 = *(double *)(param_4 + 0xa78) * 0.0;
  dVar23 = *(double *)(param_4 + 0xa90) * 0.0;
  dVar24 = *(double *)(param_4 + 0xa98) * 0.0;
  dVar19 = *(double *)(param_4 + 0xaa0) * 0.0;
  dVar20 = *(double *)(param_4 + 0xa80) * 0.0;
  dVar3 = *(double *)(param_4 + 0xa60);
  dVar4 = *(double *)(param_4 + 0xa40);
  local_108 = &DAT_3f8000003f800000;
  uStack_100 = 0x3f80000000000000;
  if (0 < *(int *)(lVar14 + 0xc)) {
    lVar18 = 0;
    do {
      lVar8 = *(longlong *)(lVar14 + 0x28);
      lVar15 = (ulonglong)*(ushort *)(*(longlong *)(lVar14 + 0x30) + lVar18 * 2) *
               (longlong)*(int *)(lVar14 + 0x10);
      dVar5 = *(double *)(lVar8 + 0x28 + lVar15);
      dVar6 = *(double *)(lVar8 + 0x18 + lVar15);
      dVar7 = *(double *)(lVar8 + 0x20 + lVar15);
      local_110 = dVar6 * pdVar16[2] + dVar7 * pdVar16[6] + dVar5 * pdVar16[10] + pdVar16[0xe];
      dVar9 = dVar5 * pdVar16[8] + dVar7 * pdVar16[4] + dVar6 * *pdVar16 + pdVar16[0xc];
      dVar5 = dVar5 * pdVar16[9] + dVar7 * pdVar16[5] + dVar6 * pdVar16[1] + pdVar16[0xd];
      local_120._8_4_ = SUB84(dVar5,0);
      local_120._0_8_ = dVar9;
      local_120._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      if (param_5 == '\0') {
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar17 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar17) ==
                *(longlong *)(param_4 + 0x4c0)) {
              if ((~uVar17 & 0x7fffffff8) != 0) {
                local_178 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c3058f;
              }
              break;
            }
            uVar17 = uVar17 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar17);
        }
        local_178 = *(byte *)(param_2 + 0x6d);
LAB_147c3058f:
        local_178 = local_178 & 7;
        (**(code **)(*param_3 + 0x40))(param_3,local_120,&local_108,0x40000000);
      }
      else {
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar17 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar17) ==
                *(longlong *)(param_4 + 0x4c0)) {
              if ((~uVar17 & 0x7fffffff8) != 0) {
                local_178 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c303fb;
              }
              break;
            }
            uVar17 = uVar17 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar17);
        }
        local_178 = *(byte *)(param_2 + 0x6d);
LAB_147c303fb:
        fVar1 = *(float *)(lVar8 + 100 + lVar15);
        fVar2 = *(float *)(lVar14 + 0x3c);
        local_178 = local_178 & 7;
        local_150 = (double)(*(float *)(lVar8 + 0x60 + lVar15) * *(float *)(lVar14 + 0x38)) * 0.5;
        local_140 = (dVar3 * 0.0 + dVar4 + dVar20 + dVar19) * local_150;
        local_148 = (dVar13 * 0.0 + dVar11 + dVar22 + dVar24) * local_150;
        local_150 = local_150 * (dVar12 * 0.0 + dVar10 + dVar21 + dVar23);
        local_128 = local_110 + local_140;
        local_130 = dVar5 + local_148;
        local_138 = dVar9 + local_150;
        local_140 = local_110 - local_140;
        local_148 = dVar5 - local_148;
        local_150 = dVar9 - local_150;
        local_168 = 0;
        local_170 = 0;
        local_160 = 0;
        (**(code **)(*param_3 + 0x30))(param_3,&local_150,&local_138,&local_108);
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar17 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar17) ==
                *(longlong *)(param_4 + 0x4c0)) {
              if ((~uVar17 & 0x7fffffff8) != 0) {
                local_178 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c304c8;
              }
              break;
            }
            uVar17 = uVar17 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar17);
        }
        local_178 = *(byte *)(param_2 + 0x6d);
LAB_147c304c8:
        local_178 = local_178 & 7;
        local_150 = (double)(fVar1 * fVar2) * 0.5;
        local_140 = (dVar4 * 0.0 + dVar3 + dVar20 + dVar19) * local_150;
        local_148 = (dVar11 * 0.0 + dVar13 + dVar22 + dVar24) * local_150;
        local_150 = local_150 * (dVar10 * 0.0 + dVar12 + dVar21 + dVar23);
        local_128 = local_140 + local_110;
        local_130 = local_148 + (double)local_120._8_8_;
        local_138 = local_150 + (double)local_120._0_8_;
        local_140 = local_110 - local_140;
        local_148 = (double)local_120._8_8_ - local_148;
        local_150 = (double)local_120._0_8_ - local_150;
        local_168 = 0;
        local_170 = 0;
        local_160 = 0;
        (**(code **)(*param_3 + 0x30))(param_3,&local_150,&local_138,&local_108);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(lVar14 + 0xc));
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c3075c FUN_147c3075c body=91 status=ok
// SIG undefined FUN_147c3075c(void)

void FUN_147c3075c(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  *(uint *)((longlong)param_1 + 0xc) =
       *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe | (uint)param_2;
  lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | (uint)(0 < *(int *)(lVar1 + 0xa0));
  lVar1 = (**(code **)(*(longlong *)param_1[0x11] + 0x2f0))();
  param_1[3] = lVar1;
  param_1[0x11] = 0;
  return;
}



// FUNCTION 147c307b7 FUN_147c307b7 body=468 status=ok
// SIG undefined FUN_147c307b7(void)

void FUN_147c307b7(longlong param_1,longlong param_2,double *param_3,double *param_4,double *param_5
                  )

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar8 = (longlong)*(int *)(param_2 + 0x9c);
  if (lVar8 != 0) {
    dVar11 = (double)*(float *)(param_1 + 0x14 + lVar8);
    dVar13 = (double)*(float *)(param_1 + 0x10 + lVar8);
    dVar9 = (double)*(float *)(param_1 + 0xc + lVar8);
    if (*(char *)(param_2 + 0xbc) == '\x01') {
      *param_4 = dVar9 + *param_4;
      param_4[1] = dVar13 + param_4[1];
      param_4[2] = dVar11 + param_4[2];
      fVar1 = *(float *)(param_1 + 0x44 + lVar8);
      fVar2 = *(float *)(param_1 + 0x40 + lVar8);
      *param_5 = (double)*(float *)(param_1 + 0x3c + lVar8) + *param_5;
      param_5[1] = (double)fVar2 + param_5[1];
      param_5[2] = (double)fVar1 + param_5[2];
    }
    else {
      dVar7 = param_3[1];
      dVar10 = param_3[5];
      dVar12 = param_3[9];
      dVar14 = param_3[0xd];
      dVar3 = param_3[0xe];
      dVar4 = param_3[10];
      dVar5 = param_3[6];
      dVar6 = param_3[2];
      *param_4 = *param_4 +
                 param_3[0xc] * 0.0 + dVar11 * param_3[8] + dVar13 * param_3[4] + dVar9 * *param_3;
      param_4[1] = dVar14 * 0.0 + dVar11 * dVar12 + dVar13 * dVar10 + dVar9 * dVar7 + param_4[1];
      param_4[2] = dVar9 * dVar6 + dVar13 * dVar5 + dVar11 * dVar4 + dVar3 * 0.0 + param_4[2];
      dVar12 = (double)*(float *)(param_1 + 0x44 + lVar8);
      dVar14 = (double)*(float *)(param_1 + 0x40 + lVar8);
      dVar10 = (double)*(float *)(param_1 + 0x3c + lVar8);
      dVar4 = param_3[1];
      dVar5 = param_3[5];
      dVar6 = param_3[9];
      dVar7 = param_3[0xd];
      dVar9 = param_3[0xe];
      dVar11 = param_3[10];
      dVar13 = param_3[6];
      dVar3 = param_3[2];
      *param_5 = *param_5 +
                 param_3[0xc] * 0.0 + dVar12 * param_3[8] + dVar14 * param_3[4] + dVar10 * *param_3;
      param_5[1] = dVar7 * 0.0 + dVar12 * dVar6 + dVar14 * dVar5 + dVar10 * dVar4 + param_5[1];
      param_5[2] = dVar10 * dVar3 + dVar14 * dVar13 + dVar12 * dVar11 + dVar9 * 0.0 + param_5[2];
    }
  }
  return;
}



// FUNCTION 147c3098b FUN_147c3098b body=1348 status=ok
// SIG undefined FUN_147c3098b(void)

void FUN_147c3098b(longlong param_1,double *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined1 local_165;
  uint local_164;
  longlong local_160;
  undefined1 local_158 [24];
  longlong *local_140;
  double *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(int *)(param_1 + 0xa4) == 0) goto LAB_147c30df4;
  uVar17 = *(uint *)(param_1 + 0xc);
  uVar11 = *(uint *)(param_1 + 0x98);
  uVar16 = uVar11;
  if ((int)uVar17 < (int)uVar11) {
    uVar16 = uVar17;
  }
  if ((int)uVar11 < 0) {
    uVar16 = uVar17;
  }
  iVar14 = (int)param_4[1] + uVar16;
  if (iVar14 < 0) {
LAB_147c30ec2:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (*(int *)((longlong)param_4 + 0xc) < iVar14) {
    FUN_1403edb72(param_4);
  }
  plVar1 = param_4 + 2;
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar14 = (int)param_4[3] + uVar16;
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    if (*(int *)((longlong)param_4 + 0x1c) < iVar14) {
LAB_147c30a79:
      FUN_1403edb8c(plVar1,iVar14);
    }
  }
  else {
    iVar14 = *(int *)(param_3 + 0x10) * uVar16 + (int)param_4[3];
    if (iVar14 < 0) goto LAB_147c30ec2;
    if (*(int *)((longlong)param_4 + 0x1c) < iVar14) goto LAB_147c30a79;
  }
  local_130 = plVar1;
  if (0 < (int)uVar16) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x30);
    local_140 = param_4 + 4;
    uVar15 = 1;
    do {
      lVar13 = (longlong)*(int *)(param_1 + 0x10) * (ulonglong)*(ushort *)(lVar6 + -2 + uVar15 * 2)
               + lVar5;
      lVar12 = (longlong)*(int *)(param_1 + 0xa4);
      if (*(char *)(lVar13 + 0x24 + lVar12) == '\x01') {
        fVar19 = ABS(*(float *)(lVar13 + 0x60) * *(float *)(param_1 + 0x38));
        fVar21 = ABS(*(float *)(lVar13 + 100) * *(float *)(param_1 + 0x3c));
        if ((*(byte *)(param_1 + 0xbe) < 7) &&
           ((0x43U >> (*(byte *)(param_1 + 0xbe) & 0x1f) & 1) != 0)) {
          fVar21 = fVar19;
        }
        fVar21 = (fVar21 + fVar19) * *(float *)(lVar13 + 0x18 + lVar12) * 0.5;
        if (*(char *)(lVar13 + 0x26 + lVar12) == '\0') {
          fVar19 = *(float *)(lVar13 + 0x7c);
          fVar22 = *(float *)(lVar13 + 0x78) * fVar19 * *(float *)(lVar13 + 8 + lVar12);
          fVar23 = *(float *)(lVar13 + 0x74) * fVar19 * *(float *)(lVar13 + 4 + lVar12);
          fVar19 = fVar19 * *(float *)(lVar13 + 0x70) * *(float *)(lVar13 + lVar12);
          uVar2 = *(undefined4 *)(lVar13 + 0x1c + lVar12);
          uVar3 = *(undefined4 *)(lVar13 + 0x20 + lVar12);
          uVar4 = *(undefined4 *)(param_1 + 0xa8);
          if (fVar21 <= 0.0001) {
            fVar20 = fVar19;
            if (fVar19 <= fVar23) {
              fVar20 = fVar23;
            }
            if (fVar20 <= fVar22) {
              fVar20 = fVar22;
            }
            if (fVar20 <= 0.0001) goto LAB_147c30b57;
          }
          local_f8 = *(double *)(lVar13 + 0x28);
          local_108 = *(undefined4 *)(lVar13 + 0x18);
          uStack_104 = *(undefined4 *)(lVar13 + 0x1c);
          uStack_100 = *(undefined4 *)(lVar13 + 0x20);
          uStack_fc = *(undefined4 *)(lVar13 + 0x24);
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          local_178 = &local_128;
          local_165 = *(undefined1 *)(lVar13 + 0x25 + lVar12);
          FUN_147c307b7(lVar13,param_1,param_2,&local_108);
          if (*(char *)(param_1 + 0xbc) == '\x01') {
            dVar9 = (double)CONCAT44(uStack_104,local_108);
            dVar10 = (double)CONCAT44(uStack_fc,uStack_100);
            dVar7 = local_f8 * param_2[8] + dVar10 * param_2[4] + dVar9 * *param_2 + param_2[0xc];
            dVar8 = local_f8 * param_2[9] + dVar10 * param_2[5] + dVar9 * param_2[1] + param_2[0xd];
            dVar9 = local_f8 * param_2[10] + dVar10 * param_2[6] + dVar9 * param_2[2] + param_2[0xe]
            ;
            dVar10 = dVar8;
          }
          else {
            dVar7 = (double)CONCAT44(uStack_104,local_108);
            dVar8 = (double)CONCAT44(uStack_fc,uStack_100);
            dVar10 = 0.0;
            dVar9 = local_f8;
          }
          lVar12 = (longlong)(int)param_4[5];
          uVar17 = *(uint *)(param_4 + 3);
          local_138 = param_2;
          if (lVar12 != 0) {
            uVar11 = (int)param_4[5] + 1;
            *(uint *)(param_4 + 5) = uVar11;
            if (*(uint *)((longlong)param_4 + 0x2c) < uVar11) {
              local_158._8_4_ = SUB84(dVar10,0);
              local_158._0_8_ = dVar8;
              local_158._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              local_160 = lVar12;
              FUN_147c44324(local_140,lVar12);
              lVar12 = local_160;
              dVar8 = (double)local_158._0_8_;
              dVar10 = (double)local_158._8_8_;
            }
            local_164 = local_164 & 0x80000000 | uVar17 & 0x7fffffff;
            *(ulonglong *)(param_4[4] + lVar12 * 8) = (ulonglong)local_164;
            uVar17 = *(uint *)(param_4 + 3);
          }
          *(uint *)(param_4 + 3) = uVar17 + 1;
          if (*(uint *)((longlong)param_4 + 0x1c) < uVar17 + 1) {
            local_158._8_4_ = SUB84(dVar10,0);
            local_158._0_8_ = dVar8;
            local_158._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            FUN_141766356(local_130,uVar17);
            dVar8 = (double)local_158._0_8_;
          }
          lVar12 = param_4[2];
          lVar13 = (longlong)(int)uVar17;
          *(double *)(lVar12 + lVar13 * 0x18) = dVar7;
          *(double *)(lVar12 + 8 + lVar13 * 0x18) = dVar8;
          *(double *)(lVar12 + 0x10 + lVar13 * 0x18) = dVar9;
          iVar14 = (int)param_4[1];
          lVar12 = (longlong)iVar14;
          *(uint *)(param_4 + 1) = iVar14 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar14 + 1U) {
            FUN_1417662f8(param_4,iVar14);
          }
          lVar13 = *param_4;
          *(float *)(lVar13 + lVar12 * 0x28) = fVar19;
          *(float *)(lVar13 + 4 + lVar12 * 0x28) = fVar23;
          *(float *)(lVar13 + 8 + lVar12 * 0x28) = fVar22;
          *(float *)(lVar13 + 0xc + lVar12 * 0x28) = fVar21;
          *(undefined4 *)(lVar13 + 0x10 + lVar12 * 0x28) = uVar2;
          *(undefined4 *)(lVar13 + 0x14 + lVar12 * 0x28) = uVar3;
          *(undefined4 *)(lVar13 + 0x18 + lVar12 * 0x28) = uVar4;
          *(undefined1 **)(lVar13 + 0x1c + lVar12 * 0x28) = &DAT_3f8000003f800000;
          *(undefined1 *)(lVar13 + 0x24 + lVar12 * 0x28) = local_165;
          param_2 = local_138;
        }
      }
LAB_147c30b57:
      bVar18 = uVar15 != uVar16;
      uVar15 = uVar15 + 1;
    } while (bVar18);
  }
LAB_147c30df4:
  if ((local_f0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c30ee2 FUN_147c30ee2 body=1124 status=ok
// SIG undefined FUN_147c30ee2(void)

char FUN_147c30ee2(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  void *_Src;
  void *_Dst;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_568 [32];
  undefined1 local_548 [4];
  undefined8 local_544;
  undefined4 local_53c;
  undefined4 local_52c;
  float local_3dc;
  undefined4 local_3bc;
  undefined4 local_3ac;
  undefined4 local_39c;
  undefined4 local_38c;
  undefined4 local_36c;
  undefined4 local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  undefined4 local_32c;
  undefined8 local_31c;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2c8 [224];
  undefined8 local_1e8 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  uint local_b4;
  uint local_b0;
  undefined8 local_ac;
  ushort local_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_568;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(code *)PTR_FUN_14c75b148)
                      (*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x38) << 2,0);
  }
  pcVar1 = (char *)(param_1 + 0x31c);
  LOCK();
  bVar10 = *(char *)(param_1 + 0x31c) == '\0';
  if (bVar10) {
    *(char *)(param_1 + 0x31c) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_1447d2058();
  }
  iVar2 = *(int *)(param_1 + 0x2f8);
  if ((iVar2 == -1) || (*(int *)(param_1 + 0x318) != iVar5)) {
    *(int *)(param_1 + 0x318) = iVar5;
    memset(local_548,0,0x4d0);
    FUN_144a8b74e(local_548);
    local_b0 = local_b0 & 0xfffff800;
    local_3bc = 0;
    local_3ac = 0;
    local_310 = 0xffffff00ffffff00;
    local_38c = 0;
    local_39c = 0xffffffff;
    local_53c = 0xffffffff;
    local_52c = 0xffffffff;
    local_36c = 0xffffffff;
    local_35c = 0xffffffff;
    local_308 = 0xffffffff00ffffff;
    local_2e0 = 0xffffffff;
    local_544 = 0xffffffff;
    local_32c = 0xffffffff;
    local_31c = 0;
    local_2e8 = 0;
    memset(local_2c8,0,0x90);
    local_ac = 0;
    local_a4 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    puVar8 = &DAT_14c846400;
    puVar9 = local_1e8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_c0 = *(undefined8 *)(param_1 + 0x200);
    local_d0 = *(undefined8 *)(param_1 + 0x1f0);
    uStack_c8 = *(undefined8 *)(param_1 + 0x1f8);
    local_d8 = *(undefined8 *)(param_1 + 400);
    local_e8 = *(undefined8 *)(param_1 + 0x180);
    uStack_e0 = *(undefined8 *)(param_1 + 0x188);
    local_b8 = (float)*(double *)(param_1 + 0x1b0);
    local_3dc = (float)*(double *)(param_1 + 0x198);
    local_34c = (float)*(double *)(param_1 + 0x1a0);
    local_33c = (float)*(double *)(param_1 + 0x1a8);
    local_350 = (float)(*(double *)(param_1 + 0x1c8) - *(double *)(param_1 + 0x1e0));
    local_354 = (float)(*(double *)(param_1 + 0x1c0) - *(double *)(param_1 + 0x1d8));
    local_358 = (float)(*(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x1d0));
    local_340 = (float)(*(double *)(param_1 + 0x1c8) + *(double *)(param_1 + 0x1e0));
    local_344 = (float)(*(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1d8));
    local_348 = (float)(*(double *)(param_1 + 0x1b8) + *(double *)(param_1 + 0x1d0));
    bVar3 = *(byte *)(param_1 + 0x75);
    uVar6 = 0x80;
    if ((bVar3 < 0x40) && (uVar6 = 0, (bVar3 & 8) != 0)) {
      uVar6 = (bVar3 & 4) << 5;
    }
    local_b4 = *(byte *)(param_1 + 0x82) & 7 | uVar6 | *(byte *)(param_1 + 0x6b) & 8 | 0xfc0700;
    bVar3 = FUN_143658c44(param_1);
    local_b4 = local_b4 & 0xffffffef | (uint)bVar3 << 4;
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x1e8))();
    local_b4 = local_b4 & 0xffffffdf | (uint)bVar3 << 5;
    iVar5 = 0x24;
    if (*(int *)(param_1 + 0x38) < 0x24) {
      iVar5 = *(int *)(param_1 + 0x38);
    }
    memcpy(local_2c8,*(void **)(param_1 + 0x30),(ulonglong)(uint)(iVar5 << 2));
    local_b4 = local_b4 | 0x10000;
    local_b0 = local_b0 & 0xffffffbf | *(byte *)(param_1 + 0x75) & 0x40;
    local_a4 = CONCAT11(*(byte *)(param_1 + 0x77) >> 6,(undefined1)local_a4) & 0x1ff;
    _Src = (void *)FUN_144788782(local_548);
    _Dst = *(void **)(param_1 + 0x310);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)FUN_14001cc68(0x360,0x10);
      *(void **)(param_1 + 0x310) = _Dst;
    }
    memcpy(_Dst,_Src,0x360);
    FUN_1447fd100(param_1 + 0x2f0,param_2);
    if (iVar2 == -1) {
      FUN_14006bf18(param_1 + 0x2f0,param_2);
    }
  }
  LOCK();
  cVar4 = *pcVar1;
  bVar10 = cVar4 == '\x01';
  if (bVar10) {
    *pcVar1 = '\0';
    cVar4 = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    cVar4 = FUN_14008cdb0(pcVar1);
  }
  if ((local_70 ^ (ulonglong)auStack_568) == DAT_14c707940) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c31348 FUN_147c31348 body=1362 status=ok
// SIG undefined FUN_147c31348(void)

void FUN_147c31348(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
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
  longlong lVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar17 = (**(code **)(*param_1 + 0x50))();
  if (lVar17 != 0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x30] = 0x3f800000;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)(lVar17 + 0x88);
    *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(lVar17 + 0x94);
    param_1[0x32] = *(longlong *)(lVar17 + 0x8c);
    uVar19 = 0;
    if ((*(byte *)(param_1[0x12] + 0x28) & 2) != 0) {
      uVar19 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar19;
    if (*(char *)(lVar17 + 0xbe) == '\x03') {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
    }
    else {
      cVar1 = *(char *)(lVar17 + 0xbf);
      if (cVar1 == '\0') {
        if (*(char *)(lVar17 + 0xbe) == '\0') {
          *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
        }
      }
      else {
        puVar18 = &DAT_14c846400;
        if (*(char *)(lVar17 + 0xbc) != '\0') {
          puVar18 = (undefined8 *)(param_2 + 0x100);
        }
        FUN_147c2fc78(cVar1,puVar18,&local_b8,&local_d0);
        *(float *)(param_1 + 0x20) = (float)local_d0;
        *(float *)((longlong)param_1 + 0x104) = (float)local_c8;
        *(float *)(param_1 + 0x21) = (float)local_c0;
        *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
        *(float *)(param_1 + 0x22) = (float)local_b8;
        *(float *)((longlong)param_1 + 0x114) = (float)local_b0;
        *(float *)(param_1 + 0x23) = (float)local_a8;
        *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
        if ((byte)(cVar1 - 7U) < 3) {
          *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
        }
        if (cVar1 == '\t') {
          uVar19 = 0x3fc90fdb;
        }
        else {
          uVar19 = 0;
        }
        *(undefined4 *)((longlong)param_1 + 0x184) = uVar19;
      }
    }
    uVar19 = 0;
    if (*(char *)(lVar17 + 0xcd) == '\0') {
      uVar20 = 0;
    }
    else {
      uVar20 = 0x3f800000;
    }
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar20;
    fVar23 = 0.0;
    fVar21 = 0.0;
    if (*(char *)(lVar17 + 0xbe) == '\x06') {
      fVar21 = *(float *)(lVar17 + 0xd0) * *(float *)(lVar17 + 0xd0);
      fVar23 = *(float *)(lVar17 + 0xd4) * *(float *)(lVar17 + 0xd4) - fVar21;
      uVar19 = 0x3f800000;
      if (fVar23 <= 1.0) {
        fVar23 = 1.0;
      }
      fVar23 = 1.0 / fVar23;
      fVar21 = fVar21 * fVar23;
      *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar19;
    *(float *)((longlong)param_1 + 0x164) = fVar23;
    *(float *)(param_1 + 0x2d) = fVar21;
    iVar3 = *(int *)(lVar17 + 0xb8);
    iVar4 = *(int *)(lVar17 + 0xb4);
    *(float *)(param_1 + 0x2a) = (float)iVar4;
    *(float *)((longlong)param_1 + 0x154) = (float)iVar3;
    *(float *)(param_1 + 0x2b) = 1.0 / (float)iVar4;
    *(float *)((longlong)param_1 + 0x15c) = 1.0 / (float)iVar3;
    bVar2 = *(byte *)(lVar17 + 0xc1);
    *(float *)(param_1 + 0x31) = (float)bVar2;
    uVar19 = DAT_14c846338;
    param_1[0x26] = DAT_14c846330;
    *(undefined4 *)(param_1 + 0x27) = uVar19;
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)((longlong)param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
    if (bVar2 != 0) {
      dVar22 = (double)*(float *)(lVar17 + 0x78);
      dVar24 = (double)*(float *)(lVar17 + 0x74);
      dVar25 = (double)*(float *)(lVar17 + 0x70);
      dVar5 = *(double *)(param_2 + 0x108);
      dVar6 = *(double *)(param_2 + 0x110);
      dVar7 = *(double *)(param_2 + 0x118);
      dVar8 = *(double *)(param_2 + 0x128);
      dVar9 = *(double *)(param_2 + 0x130);
      dVar10 = *(double *)(param_2 + 0x138);
      dVar11 = *(double *)(param_2 + 0x148);
      dVar12 = *(double *)(param_2 + 0x150);
      dVar13 = *(double *)(param_2 + 0x158);
      dVar14 = *(double *)(param_2 + 0x168);
      dVar15 = *(double *)(param_2 + 0x170);
      dVar16 = *(double *)(param_2 + 0x178);
      *(float *)(param_1 + 0x26) =
           (float)(*(double *)(param_2 + 0x140) * dVar22 +
                   *(double *)(param_2 + 0x120) * dVar24 + *(double *)(param_2 + 0x100) * dVar25 +
                  *(double *)(param_2 + 0x160));
      *(float *)((longlong)param_1 + 0x134) =
           (float)(dVar11 * dVar22 + dVar8 * dVar24 + dVar5 * dVar25 + dVar14);
      *(float *)(param_1 + 0x27) =
           (float)(dVar12 * dVar22 + dVar9 * dVar24 + dVar6 * dVar25 + dVar15);
      *(float *)((longlong)param_1 + 0x13c) =
           (float)(dVar13 * dVar22 + dVar10 * dVar24 + dVar7 * dVar25 + dVar16);
      if (bVar2 == 2) {
        dVar22 = (double)*(float *)(lVar17 + 0x84);
        dVar24 = (double)*(float *)(lVar17 + 0x80);
        dVar25 = (double)*(float *)(lVar17 + 0x7c);
        dVar5 = *(double *)(param_2 + 0x108);
        dVar6 = *(double *)(param_2 + 0x110);
        dVar7 = *(double *)(param_2 + 0x118);
        dVar8 = *(double *)(param_2 + 0x128);
        dVar9 = *(double *)(param_2 + 0x130);
        dVar10 = *(double *)(param_2 + 0x138);
        dVar11 = *(double *)(param_2 + 0x148);
        dVar12 = *(double *)(param_2 + 0x150);
        dVar13 = *(double *)(param_2 + 0x158);
        dVar14 = *(double *)(param_2 + 0x168);
        dVar15 = *(double *)(param_2 + 0x170);
        dVar16 = *(double *)(param_2 + 0x178);
        *(float *)(param_1 + 0x28) =
             (float)(*(double *)(param_2 + 0x160) * 0.0 +
                    *(double *)(param_2 + 0x140) * dVar22 +
                    *(double *)(param_2 + 0x120) * dVar24 + *(double *)(param_2 + 0x100) * dVar25);
        *(float *)((longlong)param_1 + 0x144) =
             (float)(dVar14 * 0.0 + dVar11 * dVar22 + dVar8 * dVar24 + dVar5 * dVar25);
        *(float *)(param_1 + 0x29) =
             (float)(dVar15 * 0.0 + dVar12 * dVar22 + dVar9 * dVar24 + dVar6 * dVar25);
        *(float *)((longlong)param_1 + 0x14c) =
             (float)(dVar16 * 0.0 + dVar13 * dVar22 + dVar10 * dVar24 + dVar7 * dVar25);
      }
    }
    param_1[0x34] = *(longlong *)(lVar17 + 0xc4);
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c3189c FUN_147c3189c body=189 status=ok
// SIG undefined FUN_147c3189c(void)

undefined8 * FUN_147c3189c(undefined8 *param_1)

{
  FUN_147c08ff8();
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14aa06090;
  FUN_147c09012(param_1 + 5);
  param_1[5] = &PTR_FUN_14aa006c0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x200000000;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x164) = *(byte *)((longlong)param_1 + 0x164) & 0xe0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 147c3195a FUN_147c3195a body=974 status=ok
// SIG undefined FUN_147c3195a(void)

void FUN_147c3195a(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[0x2f] = param_3;
  param_1[0x27] = param_4;
  *(undefined1 *)((longlong)param_1 + 0x169) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x16c) = param_6;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x200000000;
  local_98 = 0;
  FUN_147c08bf8(param_3,local_58,
                *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_3 + 8) + 0x40) +
                 (longlong)*(int *)(param_3 + 0x20) * 8),param_7);
  uVar4 = (uint)local_40;
  if (0 < (int)(uint)local_40) {
    lVar9 = 0;
    do {
      puVar6 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar6 = local_58;
      }
      if ((*(longlong **)(puVar6 + lVar9 * 8) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(puVar6 + lVar9 * 8) + 0x340))(), cVar3 == '\0')) {
        FUN_14003fbd6();
        puVar6 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar6 = local_58;
        }
        *(undefined8 *)(puVar6 + lVar9 * 8) = DAT_14caea080;
      }
      lVar9 = lVar9 + 1;
      uVar4 = (uint)local_40;
    } while (lVar9 < (int)(uint)local_40);
  }
  plVar1 = param_1 + 0x28;
  iVar2 = (int)param_1[0x2b];
  *(uint *)(param_1 + 0x2b) = iVar2 + uVar4;
  if ((uint)(*(int *)((longlong)param_1 + 0x15c) - iVar2) < uVar4) {
    FUN_147c4448a(plVar1);
  }
  plVar5 = (longlong *)param_1[0x2a];
  if ((longlong *)param_1[0x2a] == (longlong *)0x0) {
    plVar5 = plVar1;
  }
  memset(plVar5 + iVar2,0,(longlong)(int)uVar4 << 3);
  if (0 < (int)(uint)local_40) {
    lVar9 = 0;
    do {
      puVar6 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar6 = local_58;
      }
      lVar7 = (**(code **)(**(longlong **)(puVar6 + lVar9 * 8) + 0x2f0))();
      plVar5 = (longlong *)param_1[0x2a];
      if ((longlong *)param_1[0x2a] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      plVar5[lVar9] = lVar7;
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)(uint)local_40);
  }
  lVar9 = (**(code **)(*param_1 + 0x50))(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | (uint)(0 < *(int *)(lVar9 + 0xa0));
  lVar9 = *(longlong *)(param_3 + 0x278);
  if (lVar9 == 0) goto LAB_147c31c66;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x24);
  FUN_147a77804(lVar9 + 0x48,&local_70,&local_88);
  dVar12 = local_60 * local_60 + local_70 * local_70 + local_68 * local_68;
  if ((((dVar12 != 0.0) || (NAN(dVar12))) ||
      (dVar12 = local_78 * local_78 + local_88 * local_88 + local_80 * local_80, dVar12 != 0.0)) ||
     (NAN(dVar12))) {
    uVar4 = *(uint *)((longlong)param_1 + 0x164) | 1;
  }
  else {
    uVar4 = *(uint *)((longlong)param_1 + 0x164) & 0xfffffffe;
  }
  *(uint *)((longlong)param_1 + 0x164) = uVar4;
  if ((*(byte *)(lVar9 + 0xa9) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    uVar4 = uVar4 & 0xffffffe3;
    *(uint *)((longlong)param_1 + 0x164) = uVar4;
    bVar8 = *(byte *)(lVar9 + 0xa8);
    if (5 < bVar8 - 1) goto LAB_147c31c66;
LAB_147c31bef:
    *(uint *)((longlong)param_1 + 0x164) = uVar4 | 2;
    uVar13 = 0xbf800000;
    uVar14 = uVar13;
    if (bVar8 != 6) {
      uVar14 = 0;
    }
    uVar10 = 0x3f800000;
    uVar11 = uVar10;
    if (bVar8 != 3) {
      uVar11 = uVar14;
    }
    uVar15 = uVar13;
    if (bVar8 != 5) {
      uVar15 = 0;
    }
    uVar14 = uVar10;
    if (bVar8 != 2) {
      uVar14 = uVar15;
    }
    if (bVar8 != 4) {
      uVar13 = 0;
    }
    if (bVar8 != 1) {
      uVar10 = uVar13;
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x164) = uVar4 | 4;
    cVar3 = *(char *)(lVar9 + 0xab);
    *(char *)(param_1 + 0x2d) = cVar3;
    uVar4 = (uVar4 & 0xfffffff7 | 4) + (*(uint *)(lVar9 + 0xac) & 1) * 8;
    *(uint *)((longlong)param_1 + 0x164) = uVar4;
    uVar4 = (uVar4 & 0xffffffef) + (*(uint *)(lVar9 + 0xac) & 2) * 8;
    *(uint *)((longlong)param_1 + 0x164) = uVar4;
    bVar8 = *(byte *)(lVar9 + 0xa8);
    if (bVar8 - 1 < 6) goto LAB_147c31bef;
    if (3 < (byte)(cVar3 - 5U)) goto LAB_147c31c66;
    *(uint *)((longlong)param_1 + 0x164) = uVar4 | 2;
    uVar14 = 0;
    uVar10 = 0x3f800000;
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar14;
  *(undefined4 *)(param_1 + 0x25) = uVar11;
LAB_147c31c66:
  param_1[0x11] = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c31d2e FUN_147c31d2e body=191 status=ok
// SIG undefined FUN_147c31d2e(void)

ulonglong FUN_147c31d2e(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 0xe0);
  for (uVar5 = (ulonglong)*(byte *)((longlong)plVar3 + 0x8f);
      (longlong)uVar5 < (longlong)(int)plVar3[1]; uVar5 = uVar5 + 1) {
    iVar1 = FUN_144b2ab14(*(undefined8 *)(*plVar3 + uVar5 * 8));
    if (0 < iVar1) break;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 0xe0);
  }
  if ((param_2 == 0) || (DAT_14caf5e18 == 0)) {
    uVar5 = uVar5 & 0xffffffff;
  }
  else {
    uVar2 = FUN_144b2ac06(*(undefined8 *)(param_1 + 0x138),0);
    uVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0xe0) + 8) - 1;
    if ((int)uVar4 <= (int)uVar2) {
      uVar2 = uVar4;
    }
    if ((int)uVar2 < (int)(uint)uVar5) {
      uVar2 = (uint)uVar5;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    uVar6 = 0;
    if ((-1 < (longlong)iVar1) && (uVar6 = 0, iVar1 < *(int *)(param_2 + 0x2a0))) {
      uVar6 = *(uint *)(*(longlong *)(param_2 + 0x298) + (longlong)iVar1 * 4);
    }
    if ((int)uVar6 < (int)uVar4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar5 = (ulonglong)uVar4;
  }
  return uVar5;
}



// FUNCTION 147c31dee FUN_147c31dee body=993 status=ok
// SIG undefined FUN_147c31dee(void)

void FUN_147c31dee(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  undefined4 *local_1c8;
  undefined4 *local_1c0;
  undefined8 *local_1b8;
  float *local_1b0;
  longlong local_1a8;
  float *local_1a0;
  undefined8 local_198;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar11 = (longlong)*(int *)(param_1 + 0x114);
  uVar1 = *(undefined4 *)(param_2 + 8 + lVar11);
  uVar2 = *(undefined4 *)(param_2 + lVar11);
  uVar3 = *(undefined4 *)(param_2 + 4 + lVar11);
  uVar4 = *(undefined4 *)(param_2 + 0x20 + lVar11);
  uVar5 = *(undefined4 *)(param_2 + 0x1c + lVar11);
  uVar6 = *(undefined4 *)(param_2 + 0x18 + lVar11);
  local_158 = DAT_14c8464f0;
  local_168 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_160 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  iVar10 = *(int *)(param_1 + 0xd4);
  if (iVar10 != 0) {
    dVar12 = *(double *)(param_4 + 0x1048);
    dVar14 = *(double *)(param_4 + 0x1050);
    dVar13 = *(double *)(param_4 + 0x1058);
    dVar8 = dVar12;
    dVar9 = dVar14;
    if (*(char *)(param_1 + 0xe4) == '\x01') {
      FUN_14494412e(param_3 + 0x100,&local_148);
      dVar8 = dVar13 * local_108 +
              dVar14 * local_128 + dVar12 * (double)CONCAT44(fStack_144,local_148) + local_e8;
      dVar9 = dVar13 * dStack_100 +
              dVar14 * dStack_120 + dVar12 * (double)CONCAT44(uStack_13c,fStack_140) + dStack_e0;
      dVar13 = dVar13 * local_f8 + dVar12 * local_138 + dVar14 * local_118 + local_d8;
      iVar10 = *(int *)(param_1 + 0xd4);
    }
    dVar13 = dVar13 - *(double *)(param_2 + 0x28);
    dVar9 = dVar9 - *(double *)(param_2 + 0x20);
    dVar8 = dVar8 - *(double *)(param_2 + 0x18);
    dVar12 = dVar13 * dVar13 + dVar8 * dVar8 + dVar9 * dVar9;
    fVar7 = *(float *)(param_2 + 4 + (longlong)iVar10);
    if (9.99999993922529e-09 < dVar12) {
      dVar14 = 1.0 / SQRT(dVar12);
      dVar8 = dVar8 * dVar14;
      dVar9 = dVar9 * dVar14;
      dVar13 = dVar13 * dVar14;
    }
    local_168 = (double)fVar7;
    local_158 = dVar13 * local_168;
    uStack_160 = dVar9 * local_168;
    local_168 = dVar8 * local_168;
    if ((float)dVar12 <= fVar7 * fVar7) {
      local_158 = local_158 * 4398046511104.0;
      uStack_160 = uStack_160 * 4398046511104.0;
      local_168 = local_168 * 4398046511104.0;
    }
  }
  lVar11 = (longlong)*(int *)(param_1 + 0xc4);
  if (lVar11 == 0) {
    dVar12 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dVar13 = DAT_14c8464f0;
  }
  else {
    dVar13 = (double)*(float *)(param_2 + 0x14 + lVar11);
    dVar14 = (double)*(float *)(param_2 + 0x10 + lVar11);
    dVar12 = (double)*(float *)(param_2 + 0xc + lVar11);
  }
  fStack_140 = (float)*(double *)(param_4 + 0xa00);
  fStack_144 = (float)*(double *)(param_4 + 0x9e0);
  local_148 = (float)*(double *)(param_4 + 0x9c0);
  local_1a0 = &local_148;
  local_16c = (float)dVar13;
  local_170 = (float)dVar14;
  local_1a8 = param_4 + 0x1048;
  local_174 = (float)dVar12;
  local_1b0 = &local_174;
  local_1c0 = &local_180;
  local_1c8 = &local_18c;
  local_1d0 = param_2 + 0x60;
  local_1d8 = param_2 + 0x40;
  local_198 = param_5;
  local_1b8 = &local_168;
  local_18c = uVar2;
  local_188 = uVar3;
  local_184 = uVar1;
  local_180 = uVar6;
  local_17c = uVar5;
  local_178 = uVar4;
  FUN_147c321e0(param_1,param_3 + 0x100,param_2 + 0x18,*(undefined4 *)(param_2 + 0x3c));
  if ((local_c0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c321e0 FUN_147c321e0 body=9414 status=ok
// SIG undefined FUN_147c321e0(void)

void FUN_147c321e0(longlong param_1,double *param_2,double *param_3,float param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8,double *param_9,float *param_10,
                  double *param_11,float *param_12,undefined8 *param_13)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  byte bVar15;
  double *pdVar16;
  longlong lVar17;
  double *pdVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [8];
  double dVar41;
  double dVar42;
  undefined1 auStack_6c8 [36];
  float local_6a4;
  double local_6a0;
  double local_698;
  double local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  double local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double local_638;
  double dStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  double local_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double local_5f0;
  double local_5e8;
  undefined8 local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  undefined8 local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined1 local_578 [128];
  double local_4f8;
  double local_4f0;
  double local_4e8;
  undefined8 local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  double local_478;
  double local_470;
  double dStack_468;
  undefined1 local_3f8 [8];
  double dStack_3f0;
  double local_3e8;
  double local_3e0;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  double local_2f8 [21];
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  bVar15 = *(char *)(param_1 + 0x168) - 1;
  uVar21 = (uint)bVar15 * 8;
  bVar22 = 0xb < bVar15;
  uVar23 = 0;
  uVar24 = 0;
  if (bVar22) {
    uVar23 = (undefined4)DAT_14c8464e0;
    uVar24 = DAT_14c8464e0._4_4_;
  }
  pdVar18 = (double *)&DAT_14c8464e8;
  if (!bVar22) {
    pdVar18 = (double *)(&DAT_14aa07958 + uVar21);
  }
  pdVar16 = (double *)&DAT_14c8464f0;
  if (!bVar22) {
    pdVar16 = (double *)(&DAT_14aa079b8 + uVar21);
  }
  dVar26 = *pdVar16;
  dVar3 = *pdVar18;
  uVar29 = (undefined4)DAT_14c8463e0;
  uVar30 = DAT_14c8463e0._4_4_;
  uVar31 = (undefined4)DAT_14c8463e8;
  uVar32 = DAT_14c8463e8._4_4_;
  uVar33 = (undefined4)DAT_14c8463d0;
  uVar34 = DAT_14c8463d0._4_4_;
  uVar35 = (undefined4)DAT_14c8463d8;
  uVar36 = DAT_14c8463d8._4_4_;
  if ((*(byte *)(param_1 + 0x164) & 2) != 0) {
    dStack_1e8 = (double)*(float *)(param_1 + 0x128);
    local_1f0 = (double)*(float *)(param_1 + 0x124);
    local_1f8 = (double)*(float *)(param_1 + 0x120);
    local_2f8[0x10] = 1.0;
    local_2f8[0x11] = 0.0;
    local_2f8[0x12] = 0.0;
    FUN_144a9d448(&local_178);
    uVar29 = (undefined4)uStack_168;
    uVar30 = uStack_168._4_4_;
    uVar31 = (undefined4)uStack_160;
    uVar32 = uStack_160._4_4_;
    uVar33 = (undefined4)local_178;
    uVar34 = local_178._4_4_;
    uVar35 = (undefined4)uStack_170;
    uVar36 = uStack_170._4_4_;
  }
  uVar13 = DAT_14c8463d8._4_4_;
  uVar12 = (undefined4)DAT_14c8463d8;
  uVar11 = DAT_14c8463d0._4_4_;
  uVar10 = (undefined4)DAT_14c8463d0;
  dVar41 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  dVar5 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  dVar38 = (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  dVar37 = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  dVar42 = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  dVar28 = (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  dVar27 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  dVar7 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  puVar19 = &DAT_14c846400;
  puVar20 = param_13;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  local_178 = 0x3ff0000000000000;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_150 = 0x3ff0000000000000;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  local_100 = 0x3ff0000000000000;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0.0;
  dStack_1e8 = 0.0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0x3ff0000000000000;
  dVar39 = param_3[2] + param_9[2];
  dVar4 = param_3[1] + param_9[1];
  dVar6 = *param_3 + *param_9;
  local_118._8_8_ = dVar4;
  local_118._0_8_ = dVar6;
  local_1f8 = (double)(*param_6 * *(float *)(param_1 + 0x60));
  local_1d0 = (double)(param_6[1] * *(float *)(param_1 + 100));
  local_1a8 = (double)(param_6[2] * *(float *)(param_1 + 0x68));
  pdVar18 = (double *)&DAT_14c846400;
  pdVar16 = local_2f8 + 0x10;
  local_108 = dVar39;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar16 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar16 = pdVar16 + 1;
  }
  pdVar18 = param_2;
  pdVar16 = local_2f8;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar16 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar16 = pdVar16 + 1;
  }
  if ((*(uint *)(param_1 + 0x164) & 4) == 0) {
    if ((*(uint *)(param_1 + 0x164) & 2) == 0) {
      if (*(char *)(param_1 + 0xe6) == '\x05') {
        local_638 = dVar4;
        local_640 = dVar6;
        if (*(char *)(param_1 + 0xe4) == '\x01') {
          local_640 = dVar39 * local_2f8[8] + dVar4 * local_2f8[4] + dVar6 * local_2f8[0] +
                      local_2f8[0xc];
          local_638 = dVar39 * local_2f8[9] + dVar4 * local_2f8[5] + dVar6 * local_2f8[1] +
                      local_2f8[0xd];
          dVar39 = dVar39 * local_2f8[10] + dVar6 * local_2f8[2] + dVar4 * local_2f8[6] +
                   local_2f8[0xe];
          local_118._8_4_ = SUB84(local_638,0);
          local_118._0_8_ = local_640;
          local_118._12_4_ = (int)((ulonglong)local_638 >> 0x20);
          local_2f8[0] = 1.0;
          local_2f8[1] = 0.0;
          local_2f8[2] = 0.0;
          local_2f8[3] = 0.0;
          local_2f8[4] = 0.0;
          local_2f8[5] = 1.0;
          local_2f8[6] = 0.0;
          local_2f8[7] = 0.0;
          local_2f8[8] = 0.0;
          local_2f8[9] = 0.0;
          local_2f8[10] = 1.0;
          local_2f8[0xb] = 0.0;
          local_2f8[0xc] = 0.0;
          local_2f8[0xd] = 0.0;
          local_2f8[0xe] = 0.0;
          local_2f8[0xf] = 1.0;
          local_108 = dVar39;
        }
        dStack_630 = param_11[2] - dVar39;
        local_640 = *param_11 - local_640;
        local_638 = param_11[1] - local_638;
        dVar26 = dStack_630 * dStack_630 + local_640 * local_640 + local_638 * local_638;
        if (9.99999993922529e-09 < dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          local_640 = local_640 * dVar26;
          local_638 = local_638 * dVar26;
          dStack_630 = dStack_630 * dVar26;
          dVar26 = dStack_630 * dStack_630 + local_640 * local_640 + local_638 * local_638;
        }
        if (dVar26 < 0.5) {
          local_640 = 1.0;
          local_638 = 0.0;
          dStack_630 = 0.0;
        }
        local_610 = 1.0;
        local_608 = 0.0;
        dStack_600 = 0.0;
        local_628 = 0;
        uStack_620 = 0;
        local_618 = 0x3ff0000000000000;
        if (*(char *)(param_1 + 0x11c) == '\x01') {
          FUN_144a9d448(&local_378,&local_610,&local_640);
          FUN_141706cfc(local_3f8,&local_378);
          local_3e8 = 0.0;
          dVar26 = local_640 - dStack_630 * 0.0;
          dVar37 = dStack_630 * 0.0 - local_638;
          dVar3 = local_638 * 0.0 + local_640 * -0.0;
          dVar41 = dVar3 * dVar3 + dVar37 * dVar37 + dVar26 * dVar26;
          if (9.99999993922529e-09 < dVar41) {
            dVar41 = 1.0 / SQRT(dVar41);
            dVar37 = dVar37 * dVar41;
            dVar26 = dVar26 * dVar41;
            dVar3 = dVar3 * dVar41;
            dVar41 = dVar3 * dVar3 + dVar37 * dVar37 + dVar26 * dVar26;
          }
          dVar7 = 0.0;
          dVar27 = 0.0;
          if (0.5 <= dVar41) {
            dVar7 = dVar26;
            dVar27 = dVar3;
          }
          dVar26 = sin((double)param_4 * 0.5);
          dVar3 = cos((double)param_4 * 0.5);
          dVar42 = (double)(~-(ulonglong)(dVar41 < 0.5) & (ulonglong)dVar37 |
                           (ulonglong)((uint)(-(ulonglong)(dVar41 < 0.5) >> 0x20) & 0x3ff00000) <<
                           0x20) * dVar26;
          dVar7 = dVar7 * dVar26;
          dVar27 = dVar27 * dVar26;
          FUN_144a7484c(local_3f8,&local_378);
          dVar37 = uStack_370 * dVar27 * -1.0 +
                   local_368 * dVar7 + dVar42 * uStack_360 * 1.0 + dVar3 * local_378;
          dVar41 = local_378 * dVar27 * 1.0 +
                   uStack_360 * dVar7 + dVar42 * local_368 * -1.0 + dVar3 * uStack_370;
          dVar26 = uStack_360 * dVar27 * 1.0 +
                   ((dVar42 * uStack_370 * 1.0 + dVar3 * local_368) - dVar7 * local_378);
          dVar3 = local_368 * dVar27 * -1.0 +
                  ((dVar42 * local_378 * -1.0 + dVar3 * uStack_360) - dVar7 * uStack_370);
          dVar27 = dVar41 + dVar41;
          dVar7 = dVar26 + dVar26;
          local_228 = dVar37 * (dVar37 + dVar37);
          local_248 = (dVar37 + dVar37) * dVar3;
          local_2f8[0x10] = dVar26 * dVar7 + dVar41 * dVar27;
          local_2f8[0x14] = dVar37 * dVar27 - dVar3 * dVar7;
          local_238 = dVar37 * dVar7 + dVar27 * dVar3;
          local_2f8[0x11] = dVar3 * dVar7 + dVar37 * dVar27;
          local_250 = dVar26 * dVar7 + local_228;
          local_230 = dVar41 * dVar7 - local_248;
          local_2f8[0x12] = dVar37 * dVar7 - dVar27 * dVar3;
          local_248 = local_248 + dVar41 * dVar7;
          local_228 = dVar41 * dVar27 + local_228;
          uVar23 = (undefined4)DAT_14c8464f0;
          uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          if (*(char *)(param_1 + 0x11c) != '\x02') {
            FUN_144a9d448(&local_378,&local_610,&local_640);
            FUN_141706cfc(local_3f8,&local_378);
            dVar7 = dStack_630;
            dVar28 = local_638;
            dVar27 = local_640;
            local_3e8 = 0.0;
            dVar26 = sin((double)param_4 * 0.5);
            dVar3 = cos((double)param_4 * 0.5);
            dVar27 = dVar27 * dVar26;
            dVar28 = dVar28 * dVar26;
            dVar7 = dVar7 * dVar26;
            FUN_144a7484c(local_3f8,&local_378);
            dVar37 = uStack_370 * dVar7 * -1.0 +
                     local_368 * dVar28 + dVar27 * uStack_360 * 1.0 + dVar3 * local_378;
            dVar41 = local_378 * dVar7 * 1.0 +
                     uStack_360 * dVar28 + dVar27 * local_368 * -1.0 + dVar3 * uStack_370;
            dVar26 = uStack_360 * dVar7 * 1.0 +
                     ((dVar27 * uStack_370 * 1.0 + dVar3 * local_368) - dVar28 * local_378);
            dVar3 = local_368 * dVar7 * -1.0 +
                    ((dVar27 * local_378 * -1.0 + dVar3 * uStack_360) - dVar28 * uStack_370);
            dVar28 = dVar41 + dVar41;
            dVar7 = dVar26 + dVar26;
            dVar27 = dVar37 * (dVar37 + dVar37);
            local_248 = (dVar37 + dVar37) * dVar3;
            local_2f8[0x10] = 1.0 - (dVar26 * dVar7 + dVar41 * dVar28);
            local_2f8[0x14] = dVar37 * dVar28 - dVar3 * dVar7;
            local_238 = dVar37 * dVar7 + dVar28 * dVar3;
            local_218 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_210 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            local_2f8[0x11] = dVar3 * dVar7 + dVar37 * dVar28;
            local_250 = 1.0 - (dVar26 * dVar7 + dVar27);
            local_230 = dVar41 * dVar7 - local_248;
            local_248 = local_248 + dVar41 * dVar7;
            local_228 = 1.0 - (dVar41 * dVar28 + dVar27);
            local_2f8[0x12] = dVar37 * dVar7 - dVar28 * dVar3;
            goto LAB_147c33f0c;
          }
          local_3e8 = (double)*(float *)(param_1 + 0x128);
          dStack_3f0 = (double)*(float *)(param_1 + 0x124);
          local_3f8 = (undefined1  [8])(double)*(float *)(param_1 + 0x120);
          FUN_144a9d448(&local_378,&local_628);
          fVar25 = (float)((double)*(float *)(param_1 + 0x128) * dStack_630 +
                          (double)*(float *)(param_1 + 0x120) * local_640 +
                          (double)*(float *)(param_1 + 0x124) * local_638);
          dStack_468 = dStack_630 - (double)(*(float *)(param_1 + 0x128) * fVar25);
          local_470 = local_638 - (double)(*(float *)(param_1 + 0x124) * fVar25);
          local_478 = local_640 - (double)(*(float *)(param_1 + 0x120) * fVar25);
          dVar26 = dStack_468 * dStack_468 + local_478 * local_478 + local_470 * local_470;
          if (9.99999993922529e-09 < dVar26) {
            dVar26 = 1.0 / SQRT(dVar26);
            local_478 = local_478 * dVar26;
            local_470 = local_470 * dVar26;
            dStack_468 = dStack_468 * dVar26;
          }
          dVar3 = uStack_370 * dStack_600 - local_608 * local_368;
          dVar3 = dVar3 + dVar3;
          dVar37 = local_378 * local_608 - local_610 * uStack_370;
          dVar37 = dVar37 + dVar37;
          dVar26 = local_368 * local_610 - dStack_600 * local_378;
          dVar26 = dVar26 + dVar26;
          local_4e8 = (local_378 * dVar26 - dVar3 * uStack_370) + uStack_360 * dVar37 + dStack_600;
          local_4f0 = (local_368 * dVar3 - dVar37 * local_378) + uStack_360 * dVar26 + local_608;
          local_4f8 = (uStack_370 * dVar37 - dVar26 * local_368) + dVar3 * uStack_360 + local_610;
          FUN_144a9d448(local_3f8,&local_4f8,&local_478);
          dVar37 = uStack_370 * local_3e8 * -1.0 +
                   local_368 * dStack_3f0 +
                   (double)local_3f8 * uStack_360 * 1.0 + local_3e0 * local_378;
          dVar41 = local_378 * local_3e8 * 1.0 +
                   uStack_360 * dStack_3f0 +
                   (double)local_3f8 * local_368 * -1.0 + local_3e0 * uStack_370;
          dVar26 = uStack_360 * local_3e8 * 1.0 +
                   (((double)local_3f8 * uStack_370 * 1.0 + local_3e0 * local_368) -
                   dStack_3f0 * local_378);
          dVar3 = local_368 * local_3e8 * -1.0 +
                  (((double)local_3f8 * local_378 * -1.0 + local_3e0 * uStack_360) -
                  dStack_3f0 * uStack_370);
          dVar27 = dVar41 + dVar41;
          dVar7 = dVar26 + dVar26;
          local_228 = dVar37 * (dVar37 + dVar37);
          local_248 = (dVar37 + dVar37) * dVar3;
          local_2f8[0x10] = dVar26 * dVar7 + dVar41 * dVar27;
          local_2f8[0x14] = dVar37 * dVar27 - dVar3 * dVar7;
          local_238 = dVar37 * dVar7 + dVar27 * dVar3;
          local_2f8[0x11] = dVar3 * dVar7 + dVar37 * dVar27;
          local_250 = dVar26 * dVar7 + local_228;
          local_230 = dVar41 * dVar7 - local_248;
          local_2f8[0x12] = dVar37 * dVar7 - dVar27 * dVar3;
          local_248 = local_248 + dVar41 * dVar7;
          local_228 = dVar41 * dVar27 + local_228;
          uVar23 = (undefined4)DAT_14c8464f0;
          uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        local_228 = 1.0 - local_228;
        local_250 = 1.0 - local_250;
        local_2f8[0x10] = 1.0 - local_2f8[0x10];
        local_240 = 0;
        local_2f8[0x13] = 0.0;
        local_220 = 0;
        local_218 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_210 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_208 = CONCAT44(uVar24,uVar23);
        local_200 = 0x3ff0000000000000;
        dVar7 = (double)CONCAT44(uVar11,uVar10);
        dVar27 = (double)CONCAT44(uVar13,uVar12);
        dVar37 = dVar28;
        dVar41 = dVar38;
      }
      else {
        local_378 = (double)((param_4 * 180.0) / 3.1415927);
        uStack_370 = local_378;
        local_368 = local_378;
        FUN_1467fb380(local_3f8);
        local_4e8 = (double)param_8[2];
        local_4f0 = (double)param_8[1];
        local_4f8 = (double)*param_8;
        FUN_1467fb380(&local_478);
        dVar41 = (local_478 + (double)local_3f8) * 0.01745329238474369;
        dVar7 = (local_470 + dStack_3f0) * 0.01745329238474369;
        dVar27 = (dStack_468 + local_3e8) * 0.01745329238474369;
        dVar26 = sin(dVar41);
        dVar3 = sin(dVar7);
        dVar37 = sin(dVar27);
        dVar41 = cos(dVar41);
        dVar7 = cos(dVar7);
        local_228 = cos(dVar27);
        local_2f8[0x10] = dVar41 * dVar7;
        local_2f8[0x11] = dVar3 * dVar41;
        local_2f8[0x14] = dVar26 * dVar37 * dVar7 - dVar3 * local_228;
        local_250 = dVar26 * dVar37 * dVar3 + dVar7 * local_228;
        local_248 = -dVar37 * dVar41;
        local_238 = -(dVar26 * local_228 * dVar7 + dVar3 * dVar37);
        local_230 = dVar7 * dVar37 - dVar3 * dVar26 * local_228;
        local_228 = dVar41 * local_228;
        local_218 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_210 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_2f8[0x12] = dVar26;
LAB_147c33f0c:
        local_220 = 0;
        local_240 = 0;
        local_2f8[0x13] = 0.0;
        dVar27 = (double)CONCAT44(uVar13,uVar12);
        dVar7 = (double)CONCAT44(uVar11,uVar10);
        local_200 = 0x3ff0000000000000;
        dVar37 = dVar42;
        dVar41 = dVar5;
        local_208 = DAT_14c8464f0;
      }
    }
    else {
      fVar25 = *(float *)(param_1 + 0x128);
      fVar1 = *(float *)(param_1 + 0x124);
      fVar2 = *(float *)(param_1 + 0x120);
      dVar26 = sin((double)param_4 * 0.5);
      dVar3 = cos((double)param_4 * 0.5);
      dVar28 = (double)fVar2 * dVar26;
      dVar41 = (double)fVar1 * dVar26;
      dVar26 = (double)fVar25 * dVar26;
      dVar7 = (double)CONCAT44(uVar36,uVar35) * dVar26 * -1.0 +
              (double)CONCAT44(uVar30,uVar29) * dVar41 +
              (double)CONCAT44(uVar32,uVar31) * dVar28 * 1.0 +
              (double)CONCAT44(uVar34,uVar33) * dVar3;
      dVar27 = (double)CONCAT44(uVar34,uVar33) * dVar26 * 1.0 +
               (double)CONCAT44(uVar32,uVar31) * dVar41 +
               (double)CONCAT44(uVar30,uVar29) * dVar28 * -1.0 +
               (double)CONCAT44(uVar36,uVar35) * dVar3;
      dVar37 = (double)CONCAT44(uVar32,uVar31) * dVar26 * 1.0 +
               ((dVar28 * (double)CONCAT44(uVar36,uVar35) * 1.0 +
                dVar3 * (double)CONCAT44(uVar30,uVar29)) - (double)CONCAT44(uVar34,uVar33) * dVar41)
      ;
      dVar41 = (double)CONCAT44(uVar30,uVar29) * dVar26 * -1.0 +
               ((dVar28 * (double)CONCAT44(uVar34,uVar33) * -1.0 +
                dVar3 * (double)CONCAT44(uVar32,uVar31)) - (double)CONCAT44(uVar36,uVar35) * dVar41)
      ;
    }
  }
  else {
    local_690 = (double)CONCAT44(uVar24,uVar23);
    dVar38 = (double)param_5[2];
    dVar28 = (double)param_5[1];
    dVar42 = (double)*param_5;
    dStack_3f0 = dVar28;
    local_3f8 = (undefined1  [8])dVar42;
    local_6a4 = param_4;
    local_6a0 = dVar26;
    local_698 = dVar3;
    local_3e8 = dVar38;
    if (*(char *)(param_1 + 0xe4) == '\x01') {
      dVar3 = dVar39 * local_2f8[8] + dVar4 * local_2f8[4] + dVar6 * local_2f8[0] + local_2f8[0xc];
      dVar26 = dVar39 * local_2f8[9] + dVar4 * local_2f8[5] + dVar6 * local_2f8[1] + local_2f8[0xd];
      uVar23 = SUB84(dVar26,0);
      dVar39 = dVar39 * local_2f8[10] + dVar6 * local_2f8[2] + dVar4 * local_2f8[6] + local_2f8[0xe]
      ;
      dVar6 = dVar3;
      if (4 < *(byte *)(param_1 + 0x168)) {
        if (*(byte *)(param_1 + 0x168) < 9) goto LAB_147c32d7f;
        FUN_14007522e(&local_378,local_2f8);
        dVar4 = dVar28 * dStack_330;
        dVar5 = uStack_360 * 0.0 + dVar38 * local_368 + dVar28 * uStack_370 + dVar42 * local_378;
        dVar28 = dStack_340 * 0.0 + dVar38 * local_348 + dVar28 * local_350 + dVar42 * local_358;
        dVar38 = dVar42 * local_338 + dVar4 + dVar38 * local_328 + local_320 * 0.0;
        dStack_3f0._0_4_ = (float)SUB84(dVar28,0);
        local_3f8 = (undefined1  [8])dVar5;
        dStack_3f0._4_4_ = (int)((ulonglong)dVar28 >> 0x20);
        dVar42 = dVar5;
      }
      local_118._8_8_ = dVar26;
      local_118._0_8_ = dVar3;
      local_2f8[0] = 1.0;
      local_2f8[1] = 0.0;
      local_2f8[2] = 0.0;
      local_2f8[3] = 0.0;
      local_2f8[4] = 0.0;
      local_2f8[5] = 1.0;
      local_2f8[8] = 0.0;
      local_2f8[9] = 0.0;
      local_2f8[6] = 0.0;
      local_2f8[7] = 0.0;
      local_2f8[10] = 1.0;
      local_2f8[0xb] = 0.0;
      local_2f8[0xc] = 0.0;
      local_2f8[0xd] = 0.0;
      local_2f8[0xe] = 0.0;
      local_2f8[0xf] = 1.0;
      local_3e8 = dVar38;
      local_108 = dVar39;
    }
    else {
      uVar23 = SUB84(dVar4,0);
      dVar26 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    }
LAB_147c32d7f:
    dVar3 = local_3e8 * local_3e8 + dVar42 * dVar42 + dVar28 * dVar28;
    if (9.99999993922529e-09 < dVar3) {
      dVar3 = 1.0 / SQRT(dVar3);
      dVar42 = dVar42 * dVar3;
      dVar28 = dVar28 * dVar3;
      dStack_3f0 = dVar28;
      local_3f8 = (undefined1  [8])dVar42;
      local_3e8 = local_3e8 * dVar3;
    }
    if ((*(byte *)(param_1 + 0x164) & 0x10) == 0) {
      dStack_630 = param_11[2] - dVar39;
      local_640 = *param_11 - dVar6;
      local_638 = param_11[1] - (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),uVar23);
    }
    else {
      dStack_630 = (double)-param_12[2];
      local_638 = (double)-param_12[1];
      local_640 = (double)-*param_12;
    }
    dVar26 = dStack_630 * dStack_630 + local_640 * local_640 + local_638 * local_638;
    if (9.99999993922529e-09 < dVar26) {
      dVar26 = 1.0 / SQRT(dVar26);
      local_640 = local_640 * dVar26;
      local_638 = local_638 * dVar26;
      dStack_630 = dStack_630 * dVar26;
      dVar26 = dStack_630 * dStack_630 + local_640 * local_640 + local_638 * local_638;
    }
    if (dVar26 < 0.5) {
      local_640 = 1.0;
      local_638 = 0.0;
      dStack_630 = 0.0;
    }
    bVar15 = *(byte *)(param_1 + 0x168);
    if (bVar15 == 0) {
      local_478 = 1.0;
      local_470 = 0.0;
      dStack_468 = 0.0;
      FUN_144a9d448(&local_378,&local_478,&local_640);
      dVar39 = uStack_360;
      dVar6 = local_368;
      dVar4 = uStack_370;
      dVar5 = local_378;
      dVar38 = dStack_630;
      dVar27 = local_638;
      dVar28 = local_640;
      dVar3 = (double)local_6a4;
      dVar26 = sin(dVar3 * 0.5);
      dVar3 = cos(dVar3 * 0.5);
      dVar28 = dVar28 * dVar26;
      dVar27 = dVar27 * dVar26;
      dVar38 = dVar38 * dVar26;
      dVar37 = (dVar28 * dVar4 * 1.0 + dVar3 * dVar6) - dVar5 * dVar27;
      dVar41 = (dVar28 * dVar5 * -1.0 + dVar3 * dVar39) - dVar4 * dVar27;
      dVar26 = dVar39 * dVar38;
      dVar42 = dVar6 * dVar38;
      dVar7 = dVar4 * dVar38 * -1.0 + dVar6 * dVar27 + dVar39 * dVar28 * 1.0 + dVar5 * dVar3;
      dVar27 = dVar5 * dVar38 * 1.0 + dVar39 * dVar27 + dVar6 * dVar28 * -1.0 + dVar4 * dVar3;
    }
    else {
      if ((byte)(bVar15 - 9) < 4) {
        bVar22 = true;
        if ((ABS(dVar42) <= 9.999999747378752e-05) && (ABS(dVar28) <= 9.999999747378752e-05)) {
          bVar22 = 9.999999747378752e-05 < ABS(local_3e8);
        }
        local_478 = 1.0;
        local_470 = 0.0;
        dStack_468 = 0.0;
        FUN_144a9d448(&local_378,&local_478,local_3f8);
        uVar29 = (undefined4)local_368;
        uVar30 = local_368._4_4_;
        uVar31 = (undefined4)uStack_360;
        uVar32 = uStack_360._4_4_;
        uVar33 = (undefined4)local_378;
        uVar34 = local_378._4_4_;
        uVar35 = (undefined4)uStack_370;
        uVar36 = uStack_370._4_4_;
        auVar40 = local_3f8;
        dStack_468 = dStack_630;
        local_478 = local_640;
        local_470 = local_638;
        local_688 = local_3e8;
        dVar3 = dStack_3f0;
      }
      else if (bVar15 < 5) {
        local_478 = 1.0;
        local_470 = 0.0;
        dStack_468 = 0.0;
        FUN_144a9d448(&local_378,&local_478,&local_640);
        bVar22 = true;
        uVar29 = (undefined4)local_368;
        uVar30 = local_368._4_4_;
        uVar31 = (undefined4)uStack_360;
        uVar32 = uStack_360._4_4_;
        uVar33 = (undefined4)local_378;
        uVar34 = local_378._4_4_;
        uVar35 = (undefined4)uStack_370;
        uVar36 = uStack_370._4_4_;
        auVar40 = (undefined1  [8])local_640;
        dStack_468 = 1.0;
        local_478 = 0.0;
        local_470 = 0.0;
        local_688 = dStack_630;
        dVar3 = local_638;
      }
      else {
        local_688 = (double)*(float *)(param_1 + 0x128);
        dVar3 = (double)*(float *)(param_1 + 0x124);
        auVar40 = (undefined1  [8])(double)*(float *)(param_1 + 0x120);
        bVar22 = true;
        dStack_468 = dStack_630;
        local_478 = local_640;
        local_470 = local_638;
        if (*(char *)(param_1 + 0xe4) == '\x01') {
          local_478 = local_2f8[3] * 0.0 +
                      dStack_630 * local_2f8[2] +
                      local_638 * local_2f8[1] + local_640 * local_2f8[0];
          local_470 = local_2f8[7] * 0.0 +
                      dStack_630 * local_2f8[6] +
                      local_638 * local_2f8[5] + local_640 * local_2f8[4];
          dStack_468 = dStack_630 * local_2f8[10] +
                       local_640 * local_2f8[8] + local_638 * local_2f8[9] + local_2f8[0xb] * 0.0;
        }
      }
      dVar26 = dStack_468 * local_688 + local_478 * (double)auVar40 + local_470 * dVar3;
      uStack_680 = 0;
      dStack_468 = dStack_468 - local_688 * dVar26;
      local_470 = local_470 - dVar3 * dVar26;
      local_478 = local_478 - dVar26 * (double)auVar40;
      dVar26 = dStack_468 * dStack_468 + local_478 * local_478 + local_470 * local_470;
      if (9.99999993922529e-09 < dVar26) {
        dVar26 = 1.0 / SQRT(dVar26);
        local_478 = local_478 * dVar26;
        local_470 = local_470 * dVar26;
        dStack_468 = dStack_468 * dVar26;
      }
      dVar26 = (double)CONCAT44(uVar34,uVar33) * local_698 -
               local_690 * (double)CONCAT44(uVar36,uVar35);
      dVar28 = (double)CONCAT44(uVar30,uVar29) * local_690 -
               local_6a0 * (double)CONCAT44(uVar34,uVar33);
      dVar42 = (double)CONCAT44(uVar36,uVar35) * local_6a0 -
               local_698 * (double)CONCAT44(uVar30,uVar29);
      dVar26 = dVar26 + dVar26;
      dVar28 = dVar28 + dVar28;
      dVar42 = dVar42 + dVar42;
      local_4e8 = ((double)CONCAT44(uVar34,uVar33) * dVar28 -
                  dVar42 * (double)CONCAT44(uVar36,uVar35)) +
                  (double)CONCAT44(uVar32,uVar31) * dVar26 + local_6a0;
      local_4f0 = ((double)CONCAT44(uVar30,uVar29) * dVar42 -
                  dVar26 * (double)CONCAT44(uVar34,uVar33)) +
                  (double)CONCAT44(uVar32,uVar31) * dVar28 + local_698;
      local_4f8 = ((double)CONCAT44(uVar36,uVar35) * dVar26 -
                  dVar28 * (double)CONCAT44(uVar30,uVar29)) +
                  (double)CONCAT44(uVar32,uVar31) * dVar42 + local_690;
      FUN_144a9d448(&local_378,&local_4f8,&local_478);
      if ((*(byte *)(param_1 + 0x164) & 8) == 0) {
        uVar23 = SUB84(dStack_630,0);
        uVar24 = (int)((ulonglong)dStack_630 >> 0x20);
        auVar40 = (undefined1  [8])local_640;
        dVar3 = local_638;
      }
      else {
        uVar23 = (undefined4)local_688;
        uVar24 = local_688._4_4_;
        if (!bVar22) goto LAB_147c3332f;
      }
      dVar4 = (double)CONCAT44(uVar36,uVar35) * local_368 * -1.0 +
              (double)CONCAT44(uVar30,uVar29) * uStack_370 +
              (double)CONCAT44(uVar32,uVar31) * local_378 * 1.0 +
              (double)CONCAT44(uVar34,uVar33) * uStack_360;
      dVar6 = (double)CONCAT44(uVar34,uVar33) * local_368 * 1.0 +
              (double)CONCAT44(uVar32,uVar31) * uStack_370 +
              (double)CONCAT44(uVar30,uVar29) * local_378 * -1.0 +
              (double)CONCAT44(uVar36,uVar35) * uStack_360;
      dVar38 = (double)CONCAT44(uVar32,uVar31) * local_368 * 1.0 +
               ((local_378 * (double)CONCAT44(uVar36,uVar35) * 1.0 +
                uStack_360 * (double)CONCAT44(uVar30,uVar29)) -
               (double)CONCAT44(uVar34,uVar33) * uStack_370);
      dVar5 = (double)CONCAT44(uVar30,uVar29) * local_368 * -1.0 +
              ((local_378 * (double)CONCAT44(uVar34,uVar33) * -1.0 +
               uStack_360 * (double)CONCAT44(uVar32,uVar31)) -
              (double)CONCAT44(uVar36,uVar35) * uStack_370);
      dVar26 = (double)local_6a4;
      dVar27 = sin(dVar26 * 0.5);
      dVar28 = cos(dVar26 * 0.5);
      dVar39 = (double)auVar40 * dVar27;
      dVar3 = dVar3 * dVar27;
      dVar27 = (double)CONCAT44(uVar24,uVar23) * dVar27;
      dVar37 = (dVar39 * dVar6 * 1.0 + dVar28 * dVar38) - dVar4 * dVar3;
      dVar41 = (dVar39 * dVar4 * -1.0 + dVar28 * dVar5) - dVar6 * dVar3;
      dVar26 = dVar5 * dVar27;
      dVar42 = dVar38 * dVar27;
      dVar7 = dVar6 * dVar27 * -1.0 + dVar38 * dVar3 + dVar5 * dVar39 * 1.0 + dVar4 * dVar28;
      dVar27 = dVar4 * dVar27 * 1.0 + dVar5 * dVar3 + dVar38 * dVar39 * -1.0 + dVar6 * dVar28;
    }
    dVar37 = dVar26 * 1.0 + dVar37;
    dVar41 = dVar42 * -1.0 + dVar41;
  }
LAB_147c3332f:
  puVar19 = param_13;
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
      pdVar18 = (double *)local_3f8;
      FUN_1447fea8d(pdVar18,&local_1f8,local_2f8 + 0x10);
      puVar20 = &local_378;
LAB_147c3383f:
      FUN_1447fea8d(puVar20,pdVar18,&local_178);
      lVar17 = 0x10;
      goto LAB_147c33862;
    }
    dVar3 = dVar27 + dVar27;
    dVar28 = dVar37 + dVar37;
    dVar26 = dVar7 * (dVar7 + dVar7);
    local_4c8 = (dVar7 + dVar7) * dVar41;
    local_4f8 = 1.0 - (dVar27 * dVar3 + dVar37 * dVar28);
    local_4d8 = dVar7 * dVar3 - dVar41 * dVar28;
    local_4b8 = dVar3 * dVar41 + dVar7 * dVar28;
    local_498 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    local_4f0 = dVar41 * dVar28 + dVar7 * dVar3;
    local_4d0 = 1.0 - (dVar37 * dVar28 + dVar26);
    local_4b0 = dVar27 * dVar28 - local_4c8;
    local_490 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    uStack_488 = DAT_14c8464f0;
    local_4e8 = dVar7 * dVar28 - dVar3 * dVar41;
    local_4c8 = local_4c8 + dVar27 * dVar28;
    local_4a8 = 1.0 - (dVar27 * dVar3 + dVar26);
    local_4e0 = 0;
    local_4c0 = 0;
    local_4a0 = 0;
    local_480 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_478,&local_1f8);
    pdVar18 = (double *)local_3f8;
    FUN_1447fea8d(pdVar18,&local_478,local_2f8 + 0x10);
    puVar20 = &local_378;
  }
  else {
    local_368 = (double)param_7[2];
    uStack_370 = (double)param_7[1];
    local_378 = (double)*param_7;
    FUN_1467fb380(&local_658,&local_378);
    dVar26 = sin(local_658 * 0.01745329238474369);
    dVar3 = sin(dStack_650 * 0.01745329238474369);
    dVar28 = sin(local_648 * 0.01745329238474369);
    sin(0.0);
    dVar42 = cos(local_658 * 0.01745329238474369);
    dVar38 = cos(dStack_650 * 0.01745329238474369);
    dVar5 = cos(local_648 * 0.01745329238474369);
    cos(0.0);
    uVar14 = DAT_14c8464f0;
    local_378 = dVar42 * dVar38;
    uStack_370 = dVar3 * dVar42;
    uStack_360 = 0.0;
    local_358 = dVar26 * dVar28 * dVar38 - dVar3 * dVar5;
    local_350 = dVar26 * dVar28 * dVar3 + dVar38 * dVar5;
    local_348 = -dVar28 * dVar42;
    dStack_340 = 0.0;
    local_338 = -(dVar26 * dVar5 * dVar38 + dVar3 * dVar28);
    dStack_330 = dVar38 * dVar28 - dVar3 * dVar26 * dVar5;
    local_328 = dVar42 * dVar5;
    local_320 = 0.0;
    uVar8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_308 = (double)DAT_14c8464f0;
    local_300 = 0x3ff0000000000000;
    local_310 = (double)uVar9;
    local_318 = (double)uVar8;
    local_368 = dVar26;
    if ((*(byte *)(param_1 + 0x164) & 6) != 0) {
      FUN_1447fea8d(local_578,&local_378,&local_1f8);
      dVar3 = dVar27 + dVar27;
      dVar28 = dVar37 + dVar37;
      dVar26 = dVar7 * (dVar7 + dVar7);
      local_5c8 = (dVar7 + dVar7) * dVar41;
      local_5f8 = 1.0 - (dVar27 * dVar3 + dVar37 * dVar28);
      local_5d8 = dVar7 * dVar3 - dVar41 * dVar28;
      local_5b8 = dVar3 * dVar41 + dVar7 * dVar28;
      local_5f0 = dVar41 * dVar28 + dVar7 * dVar3;
      local_5d0 = 1.0 - (dVar37 * dVar28 + dVar26);
      local_5b0 = dVar27 * dVar28 - local_5c8;
      local_5e8 = dVar7 * dVar28 - dVar3 * dVar41;
      local_5c8 = local_5c8 + dVar27 * dVar28;
      local_5a8 = 1.0 - (dVar27 * dVar3 + dVar26);
      local_588 = uVar14;
      local_5e0 = 0;
      local_5c0 = 0;
      local_5a0 = 0;
      local_580 = 0x3ff0000000000000;
      local_598 = uVar8;
      local_590 = uVar9;
      FUN_1447fea8d(&local_4f8,local_578);
      pdVar18 = &local_478;
      FUN_1447fea8d(pdVar18,&local_4f8,local_2f8 + 0x10);
      puVar20 = (undefined8 *)local_3f8;
      goto LAB_147c3383f;
    }
    FUN_1447fea8d(&local_4f8,&local_378,&local_1f8);
    pdVar18 = &local_478;
    FUN_1447fea8d(pdVar18,&local_4f8,local_2f8 + 0x10);
    puVar20 = (undefined8 *)local_3f8;
  }
  FUN_1447fea8d(puVar20,pdVar18,&local_178);
  lVar17 = 0x10;
LAB_147c33862:
  for (; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar19 = puVar19 + 1;
  }
  local_308 = (double)param_10[2];
  dVar3 = (double)param_10[1];
  dVar26 = (double)*param_10;
  local_310 = dVar3;
  local_318 = dVar26;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    local_318 = local_2f8[0xc] * 0.0 +
                local_308 * local_2f8[8] + dVar3 * local_2f8[4] + dVar26 * local_2f8[0];
    local_310 = local_2f8[0xd] * 0.0 +
                local_308 * local_2f8[9] + dVar3 * local_2f8[5] + dVar26 * local_2f8[1];
    local_308 = dVar26 * local_2f8[2] + dVar3 * local_2f8[6] + local_308 * local_2f8[10] +
                local_2f8[0xe] * 0.0;
  }
  local_378 = 1.0;
  uStack_370 = 0.0;
  local_368 = 0.0;
  uStack_360 = 0.0;
  local_358 = 0.0;
  local_350 = 1.0;
  local_348 = 0.0;
  dStack_340 = 0.0;
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_328 = 1.0;
  local_320 = 0.0;
  local_300 = 0x3ff0000000000000;
  FUN_1447fea8d(param_13,param_13);
  bVar15 = *(byte *)(param_1 + 0xe4);
  if (bVar15 == 1) {
    FUN_1447fea8d(param_13,param_13,local_2f8);
    bVar15 = *(byte *)(param_1 + 0xe4);
  }
  if ((bVar15 & 1) == 0) {
    dStack_3f0._0_4_ = (float)*(undefined4 *)(param_1 + 0xbc);
    local_3f8 = (undefined1  [8])*(undefined8 *)(param_1 + 0xb4);
  }
  else {
    local_660 = param_2[0xe];
    local_670 = *(undefined4 *)(param_2 + 0xc);
    uStack_66c = *(undefined4 *)((longlong)param_2 + 100);
    uStack_668 = *(undefined4 *)(param_2 + 0xd);
    uStack_664 = *(undefined4 *)((longlong)param_2 + 0x6c);
    FUN_144afee78(local_3f8);
  }
  param_13[0xc] = (double)param_13[0xc] - (double)(float)local_3f8._0_4_ * 65536.0;
  param_13[0xd] = (double)param_13[0xd] - (double)(float)local_3f8._4_4_ * 65536.0;
  param_13[0xe] = (double)param_13[0xe] - (double)dStack_3f0._0_4_ * 65536.0;
  if ((local_f0 ^ (ulonglong)auStack_6c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c346a8 FUN_147c346a8 body=892 status=ok
// SIG undefined FUN_147c346a8(void)

void FUN_147c346a8(longlong param_1,double *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  double *local_198;
  float *local_190;
  undefined8 local_188;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128 [4];
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar5 = *(int *)(param_1 + 0x114);
  lVar12 = (longlong)*(int *)(param_1 + 0x118) + (longlong)param_2;
  plVar8 = (longlong *)FUN_144a7b9cd();
  lVar9 = (**(code **)(*plVar8 + 0x210))(plVar8,param_4);
  dVar6 = *(double *)(lVar9 + 0xb58);
  dVar14 = *(double *)(lVar9 + 0xb48);
  dVar16 = *(double *)(lVar9 + 0xb50);
  dVar2 = *(double *)(lVar9 + 0x500);
  dVar3 = *(double *)(lVar9 + 0x4c0);
  dVar4 = *(double *)(lVar9 + 0x4e0);
  local_158 = DAT_14c8464f0;
  local_168 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_160 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_148 = dVar14;
  dStack_140 = dVar16;
  local_138 = dVar6;
  if (*(int *)(param_1 + 0xd4) != 0) {
    dVar13 = dVar14;
    dVar15 = dVar16;
    if (*(char *)(param_1 + 0xe4) == '\x01') {
      FUN_14494412e(param_3 + 0x100,local_128);
      dVar13 = dVar6 * local_e8 + dVar16 * local_108 + dVar14 * local_128[0] + local_c8;
      dVar15 = dVar6 * dStack_e0 + dVar16 * dStack_100 + dVar14 * local_128[1] + dStack_c0;
      dVar6 = dVar6 * local_d8 + dVar14 * local_128[2] + dVar16 * local_f8 + local_b8;
    }
    dVar6 = dVar6 - param_2[2];
    dVar15 = dVar15 - param_2[1];
    dVar13 = dVar13 - *param_2;
    dVar14 = dVar6 * dVar6 + dVar13 * dVar13 + dVar15 * dVar15;
    fVar1 = *(float *)(lVar12 + 0x34);
    if (9.99999993922529e-09 < dVar14) {
      dVar16 = 1.0 / SQRT(dVar14);
      dVar13 = dVar13 * dVar16;
      dVar15 = dVar15 * dVar16;
      dVar6 = dVar6 * dVar16;
    }
    local_168 = (double)fVar1;
    local_158 = dVar6 * local_168;
    uStack_160 = dVar15 * local_168;
    local_168 = dVar13 * local_168;
    if ((float)dVar14 <= fVar1 * fVar1) {
      local_158 = local_158 * 4398046511104.0;
      uStack_160 = uStack_160 * 4398046511104.0;
      local_168 = local_168 * 4398046511104.0;
    }
  }
  cVar7 = (**(code **)(**(longlong **)(param_3 + 0x210) + 0xd8))
                    (*(longlong **)(param_3 + 0x210),*(undefined8 *)(param_3 + 0x218),local_128);
  if (cVar7 == '\0') {
    pdVar10 = (double *)(param_3 + 0x100);
    pdVar11 = local_128;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar11 = *pdVar10;
      pdVar10 = pdVar10 + 1;
      pdVar11 = pdVar11 + 1;
    }
  }
  local_1b8 = (longlong)iVar5 + (longlong)param_2;
  local_16c = (float)dVar2;
  local_170 = (float)dVar4;
  local_174 = (float)dVar3;
  local_190 = &local_174;
  local_1a0 = lVar12 + 0x24;
  local_1b0 = lVar12 + 0x18;
  local_1c0 = lVar12 + 0xc;
  local_188 = param_5;
  local_198 = &local_148;
  local_1a8 = &local_168;
  local_1c8 = lVar12;
  FUN_147c321e0(param_1,local_128,param_2,*(undefined4 *)(lVar12 + 0x30));
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c34a25 FUN_147c34a25 body=272 status=ok
// SIG undefined FUN_147c34a25(void)

void FUN_147c34a25(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a7dcb2(param_2 + 0x118,param_1);
  FUN_144a7dcdc(param_2 + 0x90,param_1,param_3);
  FUN_147cdc2d0(param_2 + 0x90,param_1,param_3,4);
  FUN_144a7dd4a(param_2 + 0x158,param_1,param_3);
  *(undefined8 *)(param_3 + 0xc6) = 0;
  *(undefined8 *)(param_3 + 0xc0) = 0;
  *(undefined2 *)(param_3 + 0xce) = 0x104;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x10;
    *(undefined8 *)(param_3 + 0xd0 + lVar2) = 0;
    *(undefined4 *)(param_3 + 0xd8 + lVar2) = 0;
    *(char *)(param_3 + 0xdc + lVar2) = (char)lVar1;
    *(undefined2 *)(param_3 + 0xdd + lVar2) = 0x400;
    *(undefined1 *)(param_3 + 0xdf + lVar2) = 1;
    lVar2 = lVar1;
  } while (lVar1 != 0x30);
  *(undefined8 *)(param_3 + 0x100) = 0;
  *(undefined8 *)(param_3 + 0x108) = 0x104004000000000;
  *(undefined8 *)(param_3 + 0x110) = 0;
  *(undefined8 *)(param_3 + 0x118) = 0x10a005000000000;
  *(undefined8 *)(param_3 + 0x120) = 0;
  *(undefined8 *)(param_3 + 0x128) = 0x102005800000000;
  *(undefined1 *)(param_3 + 0x130) = 1;
  return;
}



// FUNCTION 147c34b36 FUN_147c34b36 body=60 status=ok
// SIG undefined FUN_147c34b36(void)

void FUN_147c34b36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa00640;
  param_1[5] = &PTR_FUN_14aa006d0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_147c0b0b4(param_1 + 5);
  return;
}



// FUNCTION 147c34b72 FUN_147c34b72 body=109 status=ok
// SIG undefined FUN_147c34b72(void)

void FUN_147c34b72(longlong param_1,longlong param_2)

{
  if ((((0 < *(int *)(param_2 + 0x108)) && (0 < *(int *)(param_2 + 0x118))) &&
      (*(longlong *)(param_2 + 0x110) != 0)) && (*(longlong *)(param_2 + 0x120) != 0)) {
    FUN_1435f0212(param_1,param_2);
    if (*(char *)(param_1 + 0x144) == '\x01') {
      FUN_1435f057e(param_1,param_2);
      return;
    }
    FUN_1435f4ffe(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147c34bdf FUN_147c34bdf body=983 status=ok
// SIG undefined FUN_147c34bdf(void)

undefined8 FUN_147c34bdf(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  undefined8 local_104;
  undefined4 local_fc;
  uint local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_158 = 0;
  local_168 = 0;
  uStack_160 = 0;
  if (*(char *)(param_3 + 0xbf) == '\0') {
    dVar1 = *(double *)(param_4 + 0xb70) * 0.0;
    dVar2 = *(double *)(param_4 + 0xb78) * 0.0;
    dVar10 = *(double *)(param_4 + 0xb90) * 0.0;
    dVar11 = *(double *)(param_4 + 0xb98) * 0.0;
    dVar17 = *(double *)(param_4 + 0xb50) * 0.0 + *(double *)(param_4 + 0xb30) + dVar1 + dVar10;
    dVar3 = *(double *)(param_4 + 0xb58) * 0.0 + *(double *)(param_4 + 0xb38) + dVar2 + dVar11;
    dVar13 = 0.0;
    dVar16 = *(double *)(param_4 + 0xba0) * 0.0;
    dVar4 = *(double *)(param_4 + 0xb80) * 0.0;
    dVar5 = *(double *)(param_4 + 0xb60) * 0.0 + *(double *)(param_4 + 0xb40) + dVar4 + dVar16;
    dVar6 = dVar5 * dVar5 + dVar17 * dVar17 + dVar3 * dVar3;
    dVar12 = 0.0;
    dVar14 = 0.0;
    dVar15 = 0.0;
    if (9.99999993922529e-09 < dVar6) {
      dVar12 = 1.0 / SQRT(dVar6);
      dVar15 = dVar5 * dVar12;
      dVar14 = dVar3 * dVar12;
      dVar12 = dVar12 * dVar17;
    }
    dVar10 = *(double *)(param_4 + 0xb30) * 0.0 + *(double *)(param_4 + 0xb50) + dVar1 + dVar10;
    dVar11 = *(double *)(param_4 + 0xb38) * 0.0 + *(double *)(param_4 + 0xb58) + dVar2 + dVar11;
    dVar16 = *(double *)(param_4 + 0xb40) * 0.0 + *(double *)(param_4 + 0xb60) + dVar4 + dVar16;
    dVar2 = dVar16 * dVar16 + dVar10 * dVar10 + dVar11 * dVar11;
    dVar1 = 0.0;
    dVar17 = 0.0;
    if (9.99999993922529e-09 < dVar2) {
      dVar13 = 1.0 / SQRT(dVar2);
      dVar17 = dVar16 * dVar13;
      dVar1 = dVar11 * dVar13;
      dVar13 = dVar13 * dVar10;
    }
    uVar21 = (uint)((ulonglong)dVar17 >> 0x20) ^ 0x80000000;
    uVar20 = SUB84(dVar17,0);
    uVar19 = (uint)((ulonglong)dVar1 >> 0x20) ^ 0x80000000;
    uVar18 = SUB84(dVar1,0);
    uVar9 = (uint)((ulonglong)dVar13 >> 0x20) ^ 0x80000000;
    uVar8 = SUB84(dVar13,0);
    dVar13 = -dVar12;
    dVar10 = -dVar14;
    dVar11 = -dVar15;
  }
  else {
    puVar7 = &DAT_14c846400;
    if (*(char *)(param_3 + 0xbc) != '\0') {
      puVar7 = (undefined8 *)(param_2 + 0x100);
    }
    FUN_147c2fc78(*(char *)(param_3 + 0xbf),puVar7,&local_148,&local_168);
    uVar20 = (undefined4)local_158;
    uVar21 = (uint)((ulonglong)local_158 >> 0x20);
    uVar8 = (undefined4)local_168;
    uVar9 = (uint)((ulonglong)local_168 >> 0x20);
    uVar18 = (undefined4)uStack_160;
    uVar19 = (uint)((ulonglong)uStack_160 >> 0x20);
    dVar13 = local_148;
    dVar10 = dStack_140;
    dVar11 = local_138;
  }
  local_110 = (float)dVar11;
  local_114 = (float)dVar10;
  local_118 = (float)dVar13;
  local_120 = (float)(double)CONCAT44(uVar21,uVar20);
  local_124 = (float)(double)CONCAT44(uVar19,uVar18);
  local_10c = 0;
  local_128 = (float)(double)CONCAT44(uVar9,uVar8);
  local_11c = 0;
  local_108 = (float)*(byte *)(param_3 + 0xbe);
  local_104 = 0;
  local_fc = 0;
  local_f8 = (uint)*(byte *)(param_3 + 0xbc);
  local_e8 = *(undefined8 *)(param_3 + 0x8c);
  local_e0 = *(undefined4 *)(param_3 + 0x94);
  FUN_1435f65fc(param_1);
  if ((local_d0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c34fb8 FUN_147c34fb8 body=94 status=ok
// SIG undefined FUN_147c34fb8(void)

undefined8 * FUN_147c34fb8(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1436014c0(*(undefined8 *)(param_1 + 0xe8));
  uVar1 = *param_2;
  *puVar2 = &PTR_FUN_14aa07800;
  FUN_144b1dcb8(puVar2 + 1,uVar1);
  puVar2[1] = &PTR_FUN_14aa07810;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  puVar2[0x2a] = 0;
  *(undefined1 *)(puVar2 + 0x2b) = 1;
  return puVar2;
}



// FUNCTION 147c35016 FUN_147c35016 body=841 status=ok
// SIG undefined FUN_147c35016(void)

void FUN_147c35016(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  byte local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_1 + 0x34);
  local_b0 = param_4;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      lVar2 = (longlong)iVar5 * (longlong)*(int *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x50);
      if (*(int *)((longlong)*(int *)(param_1 + 0x124) + 0xa0 + lVar2) != 0) {
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar4 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar4) ==
                *(longlong *)(local_b0 + 0x4c0)) {
              if ((~uVar4 & 0x7fffffff8) != 0) {
                local_d8 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c350a7;
              }
              break;
            }
            uVar4 = uVar4 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar4);
        }
        local_d8 = *(byte *)(param_2 + 0x6d);
LAB_147c350a7:
        puVar3 = (undefined8 *)(lVar2 + *(int *)(param_1 + 0x124));
        local_d8 = local_d8 & 7;
        local_a8 = DAT_14c758c60;
        uStack_a4 = DAT_14c75905c;
        uStack_a0 = DAT_14c758c60;
        uStack_9c = 0x3f800000;
        local_68 = puVar3[2];
        local_78 = *puVar3;
        uStack_70 = puVar3[1];
        FUN_147cbb242(param_3,&local_78,0x41a00000,&local_a8);
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar4 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar4) ==
                *(longlong *)(local_b0 + 0x4c0)) {
              if ((~uVar4 & 0x7fffffff8) != 0) {
                local_d8 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c35110;
              }
              break;
            }
            uVar4 = uVar4 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar4);
        }
        local_d8 = *(byte *)(param_2 + 0x6d);
LAB_147c35110:
        local_d8 = local_d8 & 7;
        local_a8 = DAT_14c75905c;
        uStack_a4 = DAT_14c758c60;
        uStack_a0 = DAT_14c758c60;
        uStack_9c = 0x3f800000;
        local_68 = puVar3[9];
        local_78 = puVar3[7];
        uStack_70 = puVar3[8];
        FUN_147cbb242(param_3,&local_78,0x41a00000,&local_a8);
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar4 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar4) ==
                *(longlong *)(local_b0 + 0x4c0)) {
              if ((~uVar4 & 0x7fffffff8) != 0) {
                local_d8 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c35176;
              }
              break;
            }
            uVar4 = uVar4 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar4);
        }
        local_d8 = *(byte *)(param_2 + 0x6d);
LAB_147c35176:
        local_d8 = local_d8 & 7;
        local_88 = DAT_14c75905c;
        local_84 = DAT_14c75905c;
        local_80 = DAT_14c758c60;
        local_7c = 0x3f800000;
        local_68 = puVar3[9];
        local_78 = puVar3[7];
        uStack_70 = puVar3[8];
        local_98 = puVar3[2];
        local_a8 = *(undefined4 *)puVar3;
        uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_a0 = *(undefined4 *)(puVar3 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
        local_c8 = 0;
        local_d0 = 0;
        local_c0 = 0;
        (**(code **)(*param_3 + 0x30))(param_3,&local_a8);
        iVar1 = *(int *)(param_1 + 0x34);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c35360 FUN_147c35360 body=7716 status=ok
// SIG undefined FUN_147c35360(void)

void FUN_147c35360(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 (*pauVar15) [16];
  double *pdVar16;
  float *pfVar17;
  double *pdVar18;
  int iVar19;
  double *pdVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  double *pdVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auStack_368 [32];
  byte local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined1 local_330;
  double *local_320;
  float local_314;
  longlong local_310;
  longlong local_308;
  double local_300;
  undefined1 local_2f8 [24];
  double local_2e0;
  double *local_2d8;
  double local_2d0;
  double local_2c8;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [16];
  double *local_2a0;
  double local_298;
  int local_28c;
  double local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  undefined1 (*local_1f8) [16];
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined1 (*local_1d0) [16];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined1 local_198 [16];
  double local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_310 = param_4;
  local_308 = param_1;
  if (*(char *)(param_1 + 0x144) == '\x01') {
    FUN_14494412e(param_2 + 0x100);
    iVar21 = *(int *)(local_308 + 0x154) + (uint)(*(int *)(local_308 + 0x154) == 0);
    if (0 < *(int *)(local_308 + 0x34)) {
      local_208 = *(double *)(param_2 + 0x100);
      dStack_200 = *(double *)(param_2 + 0x108);
      local_218 = *(double *)(param_2 + 0x110);
      uStack_210 = *(undefined8 *)(param_2 + 0x118);
      local_228 = *(double *)(param_2 + 0x120);
      dStack_220 = *(double *)(param_2 + 0x128);
      local_238 = *(double *)(param_2 + 0x130);
      uStack_230 = *(undefined8 *)(param_2 + 0x138);
      local_248 = *(double *)(param_2 + 0x140);
      dStack_240 = *(double *)(param_2 + 0x148);
      local_258 = *(double *)(param_2 + 0x150);
      uStack_250 = *(undefined8 *)(param_2 + 0x158);
      local_314 = 1.0 / (float)iVar21;
      local_1f8 = (undefined1 (*) [16])(local_308 + 0x15c);
      dVar6 = *(double *)(param_2 + 0x168) * 0.0;
      local_278._8_4_ = SUB84(dVar6,0);
      local_278._0_8_ = *(double *)(param_2 + 0x160) * 0.0;
      local_278._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar6 = *(double *)(param_2 + 0x178) * 0.0;
      local_268._8_4_ = SUB84(dVar6,0);
      local_268._0_8_ = *(double *)(param_2 + 0x170) * 0.0;
      local_268._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_2bc = iVar21 + -1;
      pdVar28 = (double *)0x0;
      iVar19 = 0;
      do {
        lVar25 = (longlong)iVar19 * (longlong)*(int *)(local_308 + 0x38) +
                 *(longlong *)(local_308 + 0x50);
        local_28c = iVar19;
        if (*(int *)((longlong)*(int *)(local_308 + 0x124) + 0xa0 + lVar25) != 0) {
          local_2d8 = (double *)(lVar25 + *(int *)(local_308 + 300));
          if ((longlong)*(int *)(local_308 + 300) == -1) {
            local_2d8 = pdVar28;
          }
          pdVar18 = (double *)(lVar25 + *(int *)(local_308 + 0x134));
          if ((longlong)*(int *)(local_308 + 0x134) == -1) {
            pdVar18 = pdVar28;
          }
          local_320 = (double *)(lVar25 + *(int *)(local_308 + 0x138));
          if ((longlong)*(int *)(local_308 + 0x138) == -1) {
            local_320 = pdVar28;
          }
          fVar33 = 1.0;
          if ((longlong)*(int *)(local_308 + 0x140) != -1) {
            fVar33 = 1.0;
            pfVar17 = (float *)(*(int *)(local_308 + 0x140) + lVar25);
            if (pfVar17 != (float *)0x0) {
              fVar33 = *pfVar17;
            }
          }
          if (pdVar18 != (double *)0x0) {
            pauVar26 = (undefined1 (*) [16])(lVar25 + *(int *)(local_308 + 0x124));
            if (*(char *)(local_308 + 0x147) == '\x01') {
              uVar29 = *(undefined4 *)pauVar26[2];
              uVar31 = *(undefined4 *)(pauVar26[2] + 4);
              uVar43 = (undefined4)*(undefined8 *)(pauVar26[2] + 8);
              uVar44 = (undefined4)((ulonglong)*(undefined8 *)(pauVar26[2] + 8) >> 0x20);
              pauVar15 = pauVar26 + 3;
              uVar45 = *(undefined4 *)(pauVar26[1] + 8);
              uVar46 = *(undefined4 *)(pauVar26[1] + 0xc);
            }
            else {
              uVar43 = SUB84(local_168,0);
              uVar44 = (undefined4)((ulonglong)local_168 >> 0x20);
              uVar29 = (undefined4)uStack_170;
              uVar31 = (undefined4)((ulonglong)uStack_170 >> 0x20);
              pauVar15 = local_1f8;
              uVar45 = (undefined4)local_178;
              uVar46 = local_178._4_4_;
            }
            dVar3 = (double)CONCAT44(uVar31,uVar29);
            dVar40 = (double)CONCAT44(uVar46,uVar45);
            dVar6 = (double)CONCAT44(uVar44,uVar43);
            dVar4 = dVar6 * (double)CONCAT44(uVar44,uVar43) +
                    dVar40 * (double)CONCAT44(uVar46,uVar45) +
                    (double)CONCAT44(uVar31,uVar29) * dVar3;
            if (9.99999993922529e-09 < dVar4) {
              dVar6 = 1.0 / SQRT(dVar4);
              dVar40 = (double)CONCAT44(uVar46,uVar45) * dVar6;
              dVar3 = (double)CONCAT44(uVar31,uVar29) * dVar6;
              dVar6 = (double)CONCAT44(uVar44,uVar43) * dVar6;
            }
            fVar30 = *(float *)(local_308 + 0x158);
            fVar32 = *(float *)*pauVar15;
            local_2d0 = (double)CONCAT44(local_2d0._4_4_,*(undefined4 *)(local_308 + 0x15c));
            local_2c0 = *(int *)(pauVar26[6] + 0xc);
            local_198 = *pauVar26;
            dVar7 = local_198._0_8_;
            uVar29 = local_198._0_4_;
            uVar31 = local_198._4_4_;
            dVar38 = local_198._8_8_;
            dVar4 = *(double *)pauVar26[1];
            dVar2 = *(double *)pauVar26[9];
            dVar8 = *(double *)pauVar26[8] * dVar2 + *(double *)(*pauVar26 + 8);
            local_300 = *(double *)(pauVar26[8] + 8) * dVar2 + dVar4;
            dVar2 = dVar2 * *(double *)(pauVar26[7] + 8) + dVar7;
            if ((0.0 <= *(float *)(local_308 + 0x16c)) && (*(char *)(local_308 + 0x146) == '\x01'))
            {
              local_2b8._0_4_ = fVar32;
              local_2f8._8_8_ = 0;
              local_2f8._0_8_ = dVar2;
              dVar5 = local_320[2] - pdVar18[2];
              local_298 = *local_320;
              dVar36 = local_320[1] - pdVar18[1];
              dVar9 = local_298 - *pdVar18;
              dVar37 = dVar5 * dVar5 + dVar9 * dVar9 + dVar36 * dVar36;
              if (9.99999993922529e-09 < dVar37) {
                dVar37 = 1.0 / SQRT(dVar37);
                dVar9 = dVar9 * dVar37;
                dVar36 = dVar36 * dVar37;
                dVar5 = dVar5 * dVar37;
              }
              dVar37 = (double)*(float *)local_2d8;
              dVar5 = pdVar18[2] + (double)*(float *)(local_308 + 0x168) * dVar5 * dVar37;
              dVar36 = pdVar18[1] + (double)*(float *)(local_308 + 0x164) * dVar36 * dVar37;
              dVar9 = *pdVar18 + (double)*(float *)(local_308 + 0x160) * dVar9 * dVar37;
              fVar35 = *(float *)(local_308 + 0x170);
              if (((fVar35 <= ABS((float)(dVar9 - local_298))) ||
                  (fVar35 <= ABS((float)(dVar36 - local_320[1])))) ||
                 (fVar35 <= ABS((float)(dVar5 - local_320[2])))) {
                *pdVar18 = dVar9;
                pdVar18[1] = dVar36;
                pdVar18[2] = dVar5;
              }
              else {
                pdVar18[2] = local_320[2];
                dVar5 = local_320[1];
                *pdVar18 = *local_320;
                pdVar18[1] = dVar5;
              }
            }
            local_288 = (double)fVar33;
            dVar36 = pdVar18[2] * local_288;
            dVar37 = pdVar18[1] * local_288;
            uStack_280 = 0;
            dVar5 = *pdVar18 * local_288;
            local_2c8 = (double)fVar30;
            dVar9 = (dVar36 * dStack_240 + dVar37 * dStack_220 + dVar5 * dStack_200 +
                    (double)local_278._8_8_) * local_2c8 + dVar8;
            local_1b8._8_4_ = SUB84(dVar9,0);
            local_1b8._0_8_ =
                 (dVar36 * local_248 + dVar37 * local_228 + dVar5 * local_208 +
                 (double)local_278._0_8_) * local_2c8 + dVar2;
            local_1b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            local_1a8 = (dVar36 * local_258 + dVar37 * local_238 + dVar5 * local_218 +
                        (double)local_268._0_8_) * local_2c8 + local_300;
            if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
               ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
              uVar23 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                    *(longlong *)(local_310 + 0x4c0)) {
                  if ((~uVar23 & 0x7fffffff8) != 0) {
                    local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                    goto LAB_147c3599f;
                  }
                  break;
                }
                uVar23 = uVar23 + 8;
              } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
            }
            local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c3599f:
            dVar5 = (double)fVar32;
            dVar40 = dVar40 * dVar5;
            dVar3 = dVar3 * dVar5;
            dVar6 = dVar6 * dVar5;
            local_348 = local_348 & 7;
            local_1c8 = DAT_14c758c60;
            uStack_1c4 = DAT_14c75905c;
            uStack_1c0 = DAT_14c758c60;
            uStack_1bc = 0x3f800000;
            local_2a0 = pdVar18;
            local_188 = dVar4;
            FUN_147cbb242(param_3,local_198,0x41700000);
            if (0 < *(int *)(pauVar26[9] + 8)) {
              dVar24 = 0.0;
              uVar45 = uVar29;
              uVar46 = uVar31;
              dVar5 = dVar4;
              dVar9 = dVar6;
              dVar36 = dVar40;
              dVar37 = dVar3;
              dVar13 = dVar38;
              local_2b8._0_8_ = dVar38;
              local_300 = dVar4;
              local_1d0 = pauVar26;
              do {
                uVar23 = (ulonglong)local_2b8._0_8_ >> 0x20;
                dVar2 = (double)CONCAT44(uVar46,uVar45);
                dVar6 = *(double *)local_1d0[9];
                dVar3 = *(double *)(local_1d0[8] + 8);
                dVar4 = *(double *)local_1d0[8];
                dVar40 = *(double *)(local_1d0[7] + 8);
                if ((0.0 <= *(float *)(local_308 + 0x16c)) &&
                   (*(char *)(local_308 + 0x146) == '\x01')) {
                  local_2e0 = local_320[(longlong)dVar24 * 3 + 2];
                  dVar7 = local_2e0 - local_2a0[(longlong)dVar24 * 3 + 2];
                  dVar42 = local_320[(longlong)dVar24 * 3 + 1] - local_2a0[(longlong)dVar24 * 3 + 1]
                  ;
                  dVar38 = local_320[(longlong)dVar24 * 3] - local_2a0[(longlong)dVar24 * 3];
                  dVar8 = dVar7 * dVar7 + dVar38 * dVar38 + dVar42 * dVar42;
                  if (9.99999993922529e-09 < dVar8) {
                    dVar8 = 1.0 / SQRT(dVar8);
                    dVar38 = dVar38 * dVar8;
                    dVar42 = dVar42 * dVar8;
                    dVar7 = dVar7 * dVar8;
                  }
                  pdVar18 = local_2a0 + (longlong)dVar24 * 3;
                  dVar11 = (double)*(float *)local_2d8;
                  dVar7 = local_2a0[(longlong)dVar24 * 3 + 2] +
                          (double)*(float *)(local_308 + 0x168) * dVar7 * dVar11;
                  dVar8 = local_2a0[(longlong)dVar24 * 3 + 1] +
                          (double)*(float *)(local_308 + 0x164) * dVar42 * dVar11;
                  dVar38 = local_2a0[(longlong)dVar24 * 3] +
                           (double)*(float *)(local_308 + 0x160) * dVar38 * dVar11;
                  fVar33 = *(float *)(local_308 + 0x170);
                  if (((fVar33 <= ABS((float)(dVar38 - local_320[(longlong)dVar24 * 3]))) ||
                      (fVar33 <= ABS((float)(dVar8 - local_320[(longlong)dVar24 * 3 + 1])))) ||
                     (fVar33 <= ABS((float)(dVar7 - local_2e0)))) {
                    *pdVar18 = dVar38;
                    pdVar18[1] = dVar8;
                    pdVar18[2] = dVar7;
                  }
                  else {
                    pdVar20 = local_320 + (longlong)dVar24 * 3;
                    pdVar18[2] = pdVar20[2];
                    dVar7 = pdVar20[1];
                    *pdVar18 = *pdVar20;
                    pdVar18[1] = dVar7;
                  }
                }
                local_300 = local_300 + dVar3 * dVar6;
                dVar38 = (double)local_2b8._0_8_ + dVar4 * dVar6;
                local_2b8._8_4_ = (int)local_2b8._0_8_;
                local_2b8._0_8_ = dVar38;
                local_2b8._12_4_ = (int)uVar23;
                dVar7 = dVar6 * dVar40 + (double)CONCAT44(uVar31,uVar29);
                dVar14 = local_2a0[(longlong)dVar24 * 3 + 2] * local_288;
                dVar42 = local_2a0[(longlong)dVar24 * 3 + 1] * local_288;
                dVar11 = local_2a0[(longlong)dVar24 * 3] * local_288;
                dVar4 = *(double *)local_1d0[9];
                dVar6 = *(double *)(local_1d0[8] + 8);
                dVar3 = *(double *)local_1d0[8];
                dVar8 = *(double *)(local_1d0[7] + 8);
                local_2f8._8_8_ = 0;
                local_2f8._0_8_ = dVar7;
                if ((local_2c0 < 0) &&
                   ((longlong)dVar24 + 1U == (ulonglong)*(uint *)(local_1d0[9] + 8))) {
                  if (((*(char *)(local_308 + 0x149) == '\x01') &&
                      (0.0 <= *(float *)(local_308 + 0x16c))) &&
                     (*(char *)(local_308 + 0x146) == '\x01')) {
                    lVar25 = (longlong)*(int *)(local_308 + 0x150);
                    local_2e0 = local_320[lVar25 * 3 + 2];
                    dVar40 = local_2e0 - local_2a0[lVar25 * 3 + 2];
                    local_2d0 = local_320[lVar25 * 3 + 1];
                    dVar4 = local_2d0 - local_2a0[lVar25 * 3 + 1];
                    dVar6 = local_320[lVar25 * 3] - local_2a0[lVar25 * 3];
                    dVar3 = dVar40 * dVar40 + dVar6 * dVar6 + dVar4 * dVar4;
                    if (9.99999993922529e-09 < dVar3) {
                      dVar3 = 1.0 / SQRT(dVar3);
                      dVar6 = dVar6 * dVar3;
                      dVar4 = dVar4 * dVar3;
                      dVar40 = dVar40 * dVar3;
                    }
                    pdVar18 = local_2a0 + lVar25 * 3;
                    dVar8 = (double)*(float *)local_2d8;
                    dVar3 = local_2a0[lVar25 * 3 + 2] +
                            (double)*(float *)(local_308 + 0x168) * dVar40 * dVar8;
                    dVar4 = local_2a0[lVar25 * 3 + 1] +
                            (double)*(float *)(local_308 + 0x164) * dVar4 * dVar8;
                    dVar6 = local_2a0[lVar25 * 3] +
                            (double)*(float *)(local_308 + 0x160) * dVar6 * dVar8;
                    fVar33 = *(float *)(local_308 + 0x170);
                    if (((fVar33 <= ABS((float)(dVar6 - local_320[lVar25 * 3]))) ||
                        (fVar33 <= ABS((float)(dVar4 - local_2d0)))) ||
                       (fVar33 <= ABS((float)(dVar3 - local_2e0)))) {
                      *pdVar18 = dVar6;
                      pdVar18[1] = dVar4;
                      pdVar18[2] = dVar3;
                    }
                    else {
                      pdVar20 = local_320 + lVar25 * 3;
                      pdVar18[2] = pdVar20[2];
                      dVar6 = pdVar20[1];
                      *pdVar18 = *pdVar20;
                      pdVar18[1] = dVar6;
                    }
                  }
                  dVar40 = *(double *)local_1d0[5];
                  dVar3 = *(double *)(local_1d0[5] + 8);
                  dVar6 = *(double *)local_1d0[6];
                  local_2d0 = (double)CONCAT44(local_2d0._4_4_,*(undefined4 *)(local_1d0[6] + 8));
                }
                else {
                  if ((0.0 <= *(float *)(local_308 + 0x16c)) &&
                     (*(char *)(local_308 + 0x146) == '\x01')) {
                    local_1f0 = local_320[(longlong)dVar24 * 3 + 5];
                    local_2e0 = local_2a0[(longlong)dVar24 * 3 + 5];
                    dVar40 = local_1f0 - local_2e0;
                    local_1e0 = local_320[(longlong)dVar24 * 3 + 3];
                    local_1e8 = local_320[(longlong)dVar24 * 3 + 4];
                    local_1d8 = local_2a0[(longlong)dVar24 * 3 + 4];
                    dVar41 = local_1e8 - local_1d8;
                    dVar39 = local_1e0 - local_2a0[(longlong)dVar24 * 3 + 3];
                    dVar10 = dVar40 * dVar40 + dVar39 * dVar39 + dVar41 * dVar41;
                    if (9.99999993922529e-09 < dVar10) {
                      dVar10 = 1.0 / SQRT(dVar10);
                      dVar39 = dVar39 * dVar10;
                      dVar41 = dVar41 * dVar10;
                      dVar40 = dVar40 * dVar10;
                    }
                    dVar10 = (double)*(float *)local_2d8;
                    dVar12 = local_2e0 + (double)*(float *)(local_308 + 0x168) * dVar40 * dVar10;
                    dVar40 = local_1d8 + (double)*(float *)(local_308 + 0x164) * dVar41 * dVar10;
                    dVar39 = local_2a0[(longlong)dVar24 * 3 + 3] +
                             (double)*(float *)(local_308 + 0x160) * dVar39 * dVar10;
                    fVar33 = *(float *)(local_308 + 0x170);
                    if (((fVar33 <= ABS((float)(dVar39 - local_1e0))) ||
                        (fVar33 <= ABS((float)(dVar40 - local_1e8)))) ||
                       (fVar33 <= ABS((float)(dVar12 - local_1f0)))) {
                      local_2a0[(longlong)dVar24 * 3 + 3] = dVar39;
                      local_2a0[(longlong)dVar24 * 3 + 4] = dVar40;
                      local_2a0[(longlong)dVar24 * 3 + 5] = dVar12;
                    }
                    else {
                      local_2a0[(longlong)dVar24 * 3 + 5] = local_320[(longlong)dVar24 * 3 + 5];
                      dVar40 = local_320[(longlong)dVar24 * 3 + 4];
                      local_2a0[(longlong)dVar24 * 3 + 3] = local_320[(longlong)dVar24 * 3 + 3];
                      local_2a0[(longlong)dVar24 * 3 + 4] = dVar40;
                    }
                  }
                  dVar39 = local_2a0[(longlong)dVar24 * 3 + 5] * local_288;
                  dVar41 = local_2a0[(longlong)dVar24 * 3 + 4] * local_288;
                  dVar10 = local_2a0[(longlong)dVar24 * 3 + 3] * local_288;
                  dVar40 = (double)((1.0 - *(float *)(local_308 + 0x174)) * 0.5);
                  dVar6 = ((dVar6 * dVar4 + local_300 +
                           (dVar39 * local_258 + dVar41 * local_238 + dVar10 * local_218 +
                           (double)local_268._0_8_) * local_2c8) - dVar5) * dVar40;
                  dVar3 = ((dVar3 * dVar4 + dVar38 +
                           (dVar39 * dStack_240 + dVar41 * dStack_220 + dVar10 * dStack_200 +
                           (double)local_278._8_8_) * local_2c8) - dVar13) * dVar40;
                  dVar40 = ((dVar4 * dVar8 + dVar7 +
                            (dVar39 * local_248 + dVar41 * local_228 + dVar10 * local_208 +
                            (double)local_278._0_8_) * local_2c8) - (double)CONCAT44(uVar46,uVar45))
                           * dVar40;
                }
                dVar4 = dVar6 * dVar6 + dVar40 * dVar40 + dVar3 * dVar3;
                if (9.99999993922529e-09 < dVar4) {
                  dVar4 = 1.0 / SQRT(dVar4);
                  dVar40 = dVar40 * dVar4;
                  dVar3 = dVar3 * dVar4;
                  dVar6 = dVar6 * dVar4;
                }
                dVar38 = (dVar14 * dStack_240 + dVar42 * dStack_220 + dVar11 * dStack_200 +
                         (double)local_278._8_8_) * local_2c8 + dVar38;
                dVar7 = (dVar14 * local_248 + dVar42 * local_228 + dVar11 * local_208 +
                        (double)local_278._0_8_) * local_2c8 + dVar7;
                dVar4 = (double)local_2d0._0_4_;
                dVar40 = dVar40 * dVar4;
                dVar3 = dVar3 * dVar4;
                dVar6 = dVar6 * dVar4;
                dVar4 = (dVar14 * local_258 + dVar42 * local_238 + dVar11 * local_218 +
                        (double)local_268._0_8_) * local_2c8 + local_300;
                local_298 = dVar24;
                if (0 < iVar21) {
                  iVar19 = 0;
                  dVar8 = dVar13;
                  dVar24 = dVar5;
                  do {
                    iVar1 = iVar19 + 1;
                    fVar35 = (float)iVar1 * local_314;
                    fVar32 = fVar35 * fVar35;
                    fVar33 = fVar35 * fVar32;
                    fVar30 = fVar33 - fVar32;
                    fVar34 = ((fVar33 + fVar33) - fVar32 * 3.0) + 1.0;
                    fVar35 = (fVar33 - (fVar32 + fVar32)) + fVar35;
                    fVar33 = fVar32 * 3.0 - (fVar33 + fVar33);
                    local_198._8_4_ = SUB84(dVar8,0);
                    local_198._0_8_ = dVar2;
                    local_198._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                    dVar2 = (double)fVar33 * dVar7 + (double)fVar30 * dVar40 +
                            (double)fVar35 * dVar36 +
                            (double)fVar34 * (double)CONCAT44(uVar46,uVar45);
                    dVar8 = (double)fVar33 * dVar38 + (double)fVar30 * dVar3 +
                            (double)fVar35 * dVar37 + (double)fVar34 * dVar13;
                    pdVar18 = (double *)0xff;
                    if (iVar19 == local_2bc) {
                      pdVar18 = pdVar28;
                    }
                    dVar42 = (double)fVar30 * dVar6 + (double)fVar33 * dVar4 +
                             (double)fVar34 * dVar5 + (double)fVar35 * dVar9;
                    pdVar20 = (double *)0x0;
                    if (iVar19 == local_2bc) {
                      pdVar20 = (double *)0xff;
                    }
                    local_1b8._8_4_ = SUB84(dVar8,0);
                    local_1b8._0_8_ = dVar2;
                    local_1b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                    if (iVar19 == 0) {
                      pdVar18 = (double *)0xff;
                      pdVar20 = pdVar28;
                    }
                    pdVar16 = (double *)0xff;
                    if (iVar19 == 0) {
                      pdVar16 = pdVar28;
                    }
                    if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                       ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                      uVar23 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                            *(longlong *)(local_310 + 0x4c0)) {
                          if ((~uVar23 & 0x7fffffff8) != 0) {
                            local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                            goto LAB_147c36469;
                          }
                          break;
                        }
                        uVar23 = uVar23 + 8;
                      } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
                    }
                    local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c36469:
                    local_348 = local_348 & 7;
                    local_1c8 = (&DAT_14c758c60)[(longlong)pdVar16];
                    uStack_1c4 = (&DAT_14c758c60)[(longlong)pdVar20];
                    uStack_1c0 = (&DAT_14c758c60)[(longlong)pdVar18];
                    uStack_1bc = 0x3f800000;
                    local_1a8 = dVar42;
                    local_188 = dVar24;
                    FUN_147cbb242(param_3,local_1b8,0x41700000,&local_1c8);
                    if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                       ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                      uVar23 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                            *(longlong *)(local_310 + 0x4c0)) {
                          if ((~uVar23 & 0x7fffffff8) != 0) {
                            local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                            goto LAB_147c364d2;
                          }
                          break;
                        }
                        uVar23 = uVar23 + 8;
                      } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
                    }
                    local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c364d2:
                    local_348 = local_348 & 7;
                    local_1c8 = 0x3f800000;
                    uStack_1c4 = 0x3f800000;
                    uStack_1c0 = 0;
                    uStack_1bc = 0x3f800000;
                    local_338 = 0;
                    local_340 = 0;
                    local_330 = 0;
                    (**(code **)(*param_3 + 0x30))(param_3,local_198);
                    iVar19 = iVar1;
                    dVar24 = dVar42;
                  } while (iVar1 != iVar21);
                }
                dVar2 = local_2f8._0_8_;
                uVar29 = local_2f8._0_4_;
                uVar31 = local_2f8._4_4_;
                dVar24 = (double)((longlong)local_298 + 1);
                uVar45 = SUB84(dVar7,0);
                uVar46 = (undefined4)((ulonglong)dVar7 >> 0x20);
                pauVar26 = local_1d0;
                dVar5 = dVar4;
                dVar9 = dVar6;
                dVar36 = dVar40;
                dVar8 = (double)local_2b8._0_8_;
                dVar37 = dVar3;
                dVar13 = dVar38;
              } while ((longlong)dVar24 < (longlong)*(int *)(local_1d0[9] + 8));
            }
            if (local_2c0 < 0) {
              dVar9 = *(double *)(pauVar26[3] + 8);
              dVar36 = *(double *)pauVar26[4];
              dVar5 = *(double *)(pauVar26[4] + 8);
              if (*(char *)(local_308 + 0x149) == '\x01') {
                if ((0.0 <= *(float *)(local_308 + 0x16c)) &&
                   (*(char *)(local_308 + 0x146) == '\x01')) {
                  local_2f8._8_4_ = SUB84(dVar8,0);
                  local_2f8._0_8_ = dVar2;
                  local_2f8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  lVar25 = (longlong)*(int *)(local_308 + 0x150);
                  dVar8 = local_320[lVar25 * 3 + 2];
                  local_2b8._0_8_ = dVar8;
                  dVar37 = dVar8 - local_2a0[lVar25 * 3 + 2];
                  dVar13 = local_320[lVar25 * 3 + 1] - local_2a0[lVar25 * 3 + 1];
                  dVar42 = local_320[lVar25 * 3] - local_2a0[lVar25 * 3];
                  dVar24 = dVar37 * dVar37 + dVar42 * dVar42 + dVar13 * dVar13;
                  if (9.99999993922529e-09 < dVar24) {
                    dVar24 = 1.0 / SQRT(dVar24);
                    dVar42 = dVar42 * dVar24;
                    dVar13 = dVar13 * dVar24;
                    dVar37 = dVar37 * dVar24;
                  }
                  pdVar18 = local_2a0 + lVar25 * 3;
                  dVar24 = (double)*(float *)local_2d8;
                  dVar37 = local_2a0[lVar25 * 3 + 2] +
                           (double)*(float *)(local_308 + 0x168) * dVar37 * dVar24;
                  dVar13 = local_2a0[lVar25 * 3 + 1] +
                           (double)*(float *)(local_308 + 0x164) * dVar13 * dVar24;
                  dVar24 = local_2a0[lVar25 * 3] +
                           (double)*(float *)(local_308 + 0x160) * dVar42 * dVar24;
                  fVar33 = *(float *)(local_308 + 0x170);
                  if (((fVar33 <= ABS((float)(dVar24 - local_320[lVar25 * 3]))) ||
                      (fVar33 <= ABS((float)(dVar13 - local_320[lVar25 * 3 + 1])))) ||
                     (fVar33 <= ABS((float)(dVar37 - dVar8)))) {
                    *pdVar18 = dVar24;
                    pdVar18[1] = dVar13;
                    pdVar18[2] = dVar37;
                  }
                  else {
                    pdVar20 = local_320 + lVar25 * 3;
                    pdVar18[2] = pdVar20[2];
                    dVar8 = pdVar20[1];
                    *pdVar18 = *pdVar20;
                    pdVar18[1] = dVar8;
                  }
                  dVar8 = (double)local_2f8._8_8_;
                }
                lVar25 = (longlong)*(int *)(local_308 + 0x150);
                dVar37 = local_2a0[lVar25 * 3 + 2] * local_288;
                dVar13 = local_2a0[lVar25 * 3 + 1] * local_288;
                dVar24 = local_288 * local_2a0[lVar25 * 3];
                dVar9 = (dVar37 * local_248 + dVar13 * local_228 + dVar24 * local_208 +
                        (double)local_278._0_8_) * local_2c8 + dVar9;
                dVar36 = dVar36 + (dVar37 * dStack_240 + dVar13 * dStack_220 + dVar24 * dStack_200 +
                                  (double)local_278._8_8_) * local_2c8;
                dVar5 = dVar5 + (dVar37 * local_258 + dVar13 * local_238 + dVar24 * local_218 +
                                (double)local_268._0_8_) * local_2c8;
              }
              if (*(char *)(local_308 + 0x148) == '\x01') {
                dVar24 = *(double *)pauVar26[5];
                dVar8 = *(double *)(pauVar26[5] + 8);
                dVar37 = *(double *)pauVar26[6];
              }
              else {
                dVar13 = *(double *)pauVar26[9];
                dVar24 = (double)((1.0 - *(float *)(local_308 + 0x174)) * 0.5);
                dVar37 = ((local_300 + *(double *)(pauVar26[8] + 8) * dVar13) - dVar4) * dVar24;
                dVar8 = ((dVar8 + *(double *)pauVar26[8] * dVar13) - dVar38) * dVar24;
                dVar24 = ((dVar13 * *(double *)(pauVar26[7] + 8) + dVar2) - dVar7) * dVar24;
              }
              dVar2 = dVar37 * dVar37 + dVar24 * dVar24 + dVar8 * dVar8;
              if (9.99999993922529e-09 < dVar2) {
                dVar2 = 1.0 / SQRT(dVar2);
                dVar24 = dVar24 * dVar2;
                dVar8 = dVar8 * dVar2;
                dVar37 = dVar37 * dVar2;
              }
              if (0 < iVar21) {
                dVar2 = (double)local_2d0._0_4_;
                iVar19 = 0;
                dVar13 = dVar7;
                dVar11 = dVar4;
                dVar42 = dVar38;
                do {
                  iVar1 = iVar19 + 1;
                  fVar35 = (float)iVar1 * local_314;
                  fVar32 = fVar35 * fVar35;
                  fVar33 = fVar35 * fVar32;
                  fVar30 = fVar33 - fVar32;
                  fVar34 = ((fVar33 + fVar33) - fVar32 * 3.0) + 1.0;
                  fVar35 = (fVar33 - (fVar32 + fVar32)) + fVar35;
                  fVar33 = fVar32 * 3.0 - (fVar33 + fVar33);
                  local_198._8_4_ = SUB84(dVar42,0);
                  local_198._0_8_ = dVar13;
                  local_198._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                  dVar13 = (double)fVar33 * dVar9 + (double)fVar30 * dVar24 * dVar2 +
                           (double)fVar35 * dVar40 + (double)fVar34 * dVar7;
                  dVar42 = (double)fVar33 * dVar36 + (double)fVar30 * dVar8 * dVar2 +
                           (double)fVar35 * dVar3 + (double)fVar34 * dVar38;
                  dVar14 = (double)fVar30 * dVar37 * dVar2 + (double)fVar33 * dVar5 +
                           (double)fVar34 * dVar4 + (double)fVar35 * dVar6;
                  pdVar18 = (double *)0xff;
                  if (iVar19 == local_2bc) {
                    pdVar18 = pdVar28;
                  }
                  lVar25 = 0;
                  if (iVar19 == local_2bc) {
                    lVar25 = 0xff;
                  }
                  local_1b8._8_4_ = SUB84(dVar42,0);
                  local_1b8._0_8_ = dVar13;
                  local_1b8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                  if (iVar19 == 0) {
                    lVar25 = 0xff;
                    pdVar18 = (double *)0xff;
                  }
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar23 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                          *(longlong *)(local_310 + 0x4c0)) {
                        if ((~uVar23 & 0x7fffffff8) != 0) {
                          local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c36b9b;
                        }
                        break;
                      }
                      uVar23 = uVar23 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
                  }
                  local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c36b9b:
                  local_348 = local_348 & 7;
                  local_1c8 = DAT_14c75905c;
                  uStack_1c4 = (&DAT_14c758c60)[lVar25];
                  uStack_1c0 = (&DAT_14c758c60)[(longlong)pdVar18];
                  uStack_1bc = 0x3f800000;
                  local_1a8 = dVar14;
                  local_188 = dVar11;
                  FUN_147cbb242(param_3,local_1b8,0x41700000,&local_1c8);
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar23 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                          *(longlong *)(local_310 + 0x4c0)) {
                        if ((~uVar23 & 0x7fffffff8) != 0) {
                          local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c36c03;
                        }
                        break;
                      }
                      uVar23 = uVar23 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
                  }
                  local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c36c03:
                  local_348 = local_348 & 7;
                  local_1c8 = 0x3f800000;
                  uStack_1c4 = 0x3f800000;
                  uStack_1c0 = 0;
                  uStack_1bc = 0x3f800000;
                  local_338 = 0;
                  local_340 = 0;
                  local_330 = 0;
                  (**(code **)(*param_3 + 0x30))(param_3,local_198);
                  iVar19 = iVar1;
                  dVar11 = dVar14;
                } while (iVar1 != iVar21);
              }
            }
          }
        }
        iVar19 = local_28c + 1;
      } while (iVar19 < *(int *)(local_308 + 0x34));
    }
  }
  if ((1 < *(int *)(local_308 + 0x184)) && (iVar21 = *(int *)(local_308 + 0x34), 0 < iVar21)) {
    fVar33 = 0.0;
    lVar25 = local_308;
    do {
      lVar22 = (longlong)(int)fVar33 * (longlong)*(int *)(lVar25 + 0x38) +
               *(longlong *)(lVar25 + 0x50);
      if (*(int *)((longlong)*(int *)(lVar25 + 0x124) + 0xa0 + lVar22) != 0) {
        puVar27 = (undefined8 *)(*(int *)(lVar25 + 0x124) + lVar22);
        pauVar26 = (undefined1 (*) [16])0x0;
        if ((longlong)*(int *)(lVar25 + 0x128) != -1) {
          pauVar26 = (undefined1 (*) [16])(lVar22 + *(int *)(lVar25 + 0x128));
        }
        local_178 = *puVar27;
        uStack_170 = puVar27[1];
        local_168 = (double)puVar27[2];
        local_188 = *(double *)pauVar26[1];
        local_198 = *pauVar26;
        if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0))
        {
          uVar23 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                *(longlong *)(local_310 + 0x4c0)) {
              if ((~uVar23 & 0x7fffffff8) != 0) {
                local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                goto LAB_147c36e06;
              }
              break;
            }
            uVar23 = uVar23 + 8;
          } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
        }
        local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c36e06:
        local_348 = local_348 & 7;
        local_1b8._4_4_ = DAT_14c758c60;
        local_1b8._0_4_ = DAT_14c75905c;
        local_1b8._8_4_ = DAT_14c758c60;
        local_1b8._12_4_ = 0x3f800000;
        local_314 = fVar33;
        FUN_147cbb242(param_3,&local_178,0x41700000,local_1b8);
        if (0 < *(int *)(puVar27 + 0xe)) {
          lVar25 = 0;
          do {
            local_188 = *(double *)((longlong)pauVar26 + lVar25 * 0x18 + 0x10);
            local_198 = *(undefined1 (*) [16])((longlong)pauVar26 + lVar25 * 0x18);
            if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
               ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
              uVar23 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                    *(longlong *)(local_310 + 0x4c0)) {
                  if ((~uVar23 & 0x7fffffff8) != 0) {
                    local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                    goto LAB_147c36e99;
                  }
                  break;
                }
                uVar23 = uVar23 + 8;
              } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
            }
            local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c36e99:
            local_348 = local_348 & 7;
            local_1b8._4_4_ = DAT_14c758c60;
            local_1b8._0_4_ = DAT_14c75905c;
            local_1b8._8_4_ = DAT_14c758c60;
            local_1b8._12_4_ = 0x3f800000;
            FUN_147cbb242(param_3,local_198,0x41700000,local_1b8);
            if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
               ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
              uVar23 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) ==
                    *(longlong *)(local_310 + 0x4c0)) {
                  if ((~uVar23 & 0x7fffffff8) != 0) {
                    local_348 = *(byte *)(param_2 + 0x6d) >> 3;
                    goto LAB_147c36ef3;
                  }
                  break;
                }
                uVar23 = uVar23 + 8;
              } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
            }
            local_348 = *(byte *)(param_2 + 0x6d);
LAB_147c36ef3:
            local_348 = local_348 & 7;
            local_1b8._4_4_ = DAT_14c75905c;
            local_1b8._0_4_ = DAT_14c75905c;
            local_1b8._8_4_ = DAT_14c758c60;
            local_1b8._12_4_ = 0x3f800000;
            local_338 = 0;
            local_340 = 0;
            local_330 = 0;
            (**(code **)(*param_3 + 0x30))(param_3,&local_178,local_198,local_1b8);
            local_168 = local_188;
            local_178 = local_198._0_8_;
            uStack_170 = local_198._8_8_;
            lVar25 = lVar25 + 1;
          } while (lVar25 < *(int *)(puVar27 + 0xe));
        }
        iVar21 = *(int *)(local_308 + 0x34);
        lVar25 = local_308;
        fVar33 = local_314;
      }
      fVar33 = (float)((int)fVar33 + 1);
    } while ((int)fVar33 < iVar21);
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c37188 FUN_147c37188 body=88 status=ok
// SIG undefined FUN_147c37188(void)

void FUN_147c37188(longlong param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x118) < 1) {
    iVar2 = 0;
  }
  else {
    lVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + lVar3 * 4);
      if (0 < iVar1) {
        if (iVar2 == 0) {
          iVar2 = -2;
        }
        iVar2 = iVar2 + (iVar1 + 4) * *(int *)(param_1 + 0x14c);
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x118) != lVar3);
  }
  *param_2 = iVar2;
  *param_3 = *(undefined4 *)(param_1 + 0x108);
  return;
}



// FUNCTION 147c371e0 FUN_147c371e0 body=10635 status=ok
// SIG undefined FUN_147c371e0(void)

void FUN_147c371e0(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  double *pdVar5;
  float fVar6;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined8 uVar48;
  undefined1 auVar49 [12];
  undefined1 (*pauVar50) [16];
  uint uVar51;
  int iVar52;
  longlong lVar53;
  ulonglong uVar54;
  double *pdVar55;
  double *pdVar56;
  ulonglong uVar57;
  float *pfVar58;
  longlong lVar59;
  undefined1 (*pauVar60) [16];
  float *pfVar61;
  double *pdVar62;
  int iVar63;
  double *pdVar64;
  double *pdVar65;
  double *pdVar66;
  double *pdVar67;
  undefined1 (*pauVar68) [16];
  longlong lVar69;
  double *pdVar70;
  bool bVar71;
  float fVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  float fVar77;
  undefined4 uVar78;
  float fVar79;
  float fVar80;
  undefined4 uVar81;
  float fVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  undefined1 auVar98 [16];
  double dVar99;
  double dVar100;
  double dVar101;
  double dVar102;
  double dVar103;
  float fVar104;
  float fVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  int local_368;
  float local_364;
  float local_354;
  double local_348;
  double local_340;
  undefined8 local_328;
  double dStack_320;
  double local_310;
  ulonglong local_2e8;
  double dStack_2c0;
  double dStack_2a0;
  undefined1 local_1e8 [120];
  double dStack_170;
  
  uVar51 = *(int *)(param_1 + 0x154) + (uint)(*(int *)(param_1 + 0x154) == 0);
  iVar52 = *(int *)(param_1 + 0x34);
  iVar63 = 1;
  if (1 < *(int *)(param_1 + 0x150)) {
    iVar63 = *(int *)(param_1 + 0x150);
  }
  if (0 < iVar52) {
    dVar17 = param_2[0x20];
    dVar7 = *(double *)((longlong)dVar17 + 0xa50);
    dVar8 = *(double *)((longlong)dVar17 + 0xa58);
    dVar9 = *(double *)((longlong)dVar17 + 0xa60);
    dVar10 = *(double *)((longlong)dVar17 + 0xa90);
    dVar11 = *(double *)((longlong)dVar17 + 0xa98);
    fVar77 = 1.0 / (float)(int)(iVar63 * uVar51);
    dVar22 = (double)*(float *)(param_1 + 0xbc) * 65536.0;
    dVar83 = (double)*(float *)(param_1 + 0xb8) * 65536.0;
    dVar99 = (double)*(float *)(param_1 + 0xb4) * 65536.0;
    uVar37 = *(undefined4 *)(param_2 + 0x10);
    uVar38 = *(undefined4 *)((longlong)param_2 + 0x84);
    pfVar61 = (float *)param_2[0x22];
    dVar12 = param_2[0x11];
    dVar23 = param_2[0xc] * 0.0;
    auVar21._8_4_ = SUB84(param_2[0xd] * 0.0,0);
    auVar21._0_8_ = dVar23;
    auVar21._12_4_ = (int)((ulonglong)(param_2[0xd] * 0.0) >> 0x20);
    dVar18 = param_2[0xe] * 0.0;
    iVar63 = 0;
    dVar17 = *(double *)((longlong)dVar17 + 0xaa0);
    dVar13 = param_2[0x12];
    dVar39 = *param_2;
    dVar40 = param_2[1];
    dVar41 = param_2[2];
    dVar42 = param_2[4];
    dVar43 = param_2[5];
    dVar44 = param_2[6];
    dVar45 = param_2[8];
    dVar46 = param_2[9];
    dVar47 = param_2[10];
    uVar106 = 0;
    uVar107 = 0;
    uVar73 = 0;
    uVar74 = 0;
    uVar78 = 0;
    uVar81 = 0;
    do {
      pdVar70 = (double *)0x0;
      lVar69 = (longlong)iVar63 * (longlong)*(int *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x50)
      ;
      if (*(int *)((longlong)*(int *)(param_1 + 0x124) + 0xa0 + lVar69) != 0) {
        pauVar68 = (undefined1 (*) [16])(*(int *)(param_1 + 0x124) + lVar69);
        if (*(int *)(pauVar68[9] + 8) != 0) {
          pdVar62 = (double *)(*(int *)(param_1 + 0x128) + lVar69);
          if ((longlong)*(int *)(param_1 + 0x128) == -1) {
            pdVar62 = pdVar70;
          }
          pdVar64 = (double *)(*(int *)(param_1 + 300) + lVar69);
          if ((longlong)*(int *)(param_1 + 300) == -1) {
            pdVar64 = pdVar70;
          }
          pdVar65 = (double *)(*(int *)(param_1 + 0x134) + lVar69);
          if ((longlong)*(int *)(param_1 + 0x134) == -1) {
            pdVar65 = pdVar70;
          }
          pdVar66 = (double *)(*(int *)(param_1 + 0x138) + lVar69);
          if ((longlong)*(int *)(param_1 + 0x138) == -1) {
            pdVar66 = pdVar70;
          }
          pdVar67 = (double *)(*(int *)(param_1 + 0x13c) + lVar69);
          if ((longlong)*(int *)(param_1 + 0x13c) == -1) {
            pdVar67 = pdVar70;
          }
          fVar72 = 1.0;
          if ((longlong)*(int *)(param_1 + 0x140) != -1) {
            fVar72 = 1.0;
            pfVar58 = (float *)(*(int *)(param_1 + 0x140) + lVar69);
            if (pfVar58 != (float *)0x0) {
              fVar72 = *pfVar58;
            }
          }
          if (pdVar65 != (double *)0x0) {
            local_348 = (double)CONCAT44(uVar74,uVar73);
            uVar108 = SUB84(dVar13,0);
            uVar109 = (undefined4)((ulonglong)dVar13 >> 0x20);
            uVar73 = uVar37;
            uVar74 = uVar38;
            uVar75 = SUB84(dVar12,0);
            uVar76 = (int)((ulonglong)dVar12 >> 0x20);
            if (*(char *)(param_1 + 0x147) == '\x01') {
              uVar73 = *(undefined4 *)(pauVar68[1] + 8);
              uVar74 = *(undefined4 *)(pauVar68[1] + 0xc);
              uVar75 = *(undefined4 *)pauVar68[2];
              uVar76 = *(undefined4 *)(pauVar68[2] + 4);
              uVar108 = (undefined4)*(undefined8 *)(pauVar68[2] + 8);
              uVar109 = (undefined4)((ulonglong)*(undefined8 *)(pauVar68[2] + 8) >> 0x20);
            }
            if (0 < *(int *)(param_1 + 0x14c)) {
              local_340 = (double)CONCAT44(uVar81,uVar78);
              fVar79 = (float)*(int *)pauVar68[7] / (float)*(int *)(pauVar68[9] + 8);
              auVar98 = roundss(ZEXT416(0),ZEXT416((uint)fVar79),0xb);
              fVar80 = fVar79 - auVar98._0_4_;
              fVar82 = *(float *)(lVar69 + 0x60) * *(float *)(param_1 + 0x60);
              dVar84 = (double)fVar82;
              iVar52 = *(int *)(pauVar68[6] + 0xc);
              fVar6 = *(float *)(param_1 + 0x15c);
              dVar85 = (double)fVar6;
              dVar29 = (double)CONCAT44(uVar74,uVar73) * dVar85;
              dStack_2c0 = (double)CONCAT44(uVar76,uVar75) * dVar85;
              dVar85 = (double)CONCAT44(uVar109,uVar108) * dVar85;
              lVar53 = (longlong)(int)fVar79;
              pdVar5 = pdVar62 + lVar53 * 3;
              dVar24 = (double)fVar80;
              dVar25 = (double)(1.0 - fVar80);
              dVar19 = (double)fVar72;
              dVar20 = (double)*(float *)(param_1 + 0x158);
              puVar1 = (undefined8 *)(lVar69 + 0x70);
              pauVar2 = (undefined1 (*) [16])(pauVar68[3] + 8);
              pdVar70 = (double *)(pauVar68[4] + 8);
              pauVar3 = pauVar68 + 4;
              local_368 = 0;
              do {
                auVar98._8_4_ = SUB84(dStack_2c0,0);
                auVar98._0_8_ = dVar29;
                auVar98._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
                local_328._0_4_ = *(undefined4 *)*pauVar68;
                local_328._4_4_ = *(undefined4 *)(*pauVar68 + 4);
                auVar49 = *(undefined1 (*) [12])*pauVar68;
                uVar73 = *(undefined4 *)(*pauVar68 + 0xc);
                auVar26 = *pauVar68;
                dVar14 = *(double *)pauVar68[1];
                dVar101 = pdVar5[2];
                dVar15 = pdVar5[1];
                dVar102 = *pdVar5;
                dVar90 = pdVar5[5];
                dVar97 = pdVar5[4];
                dVar93 = pdVar5[3];
                uVar74 = *(undefined4 *)(*pauVar68 + 8);
                if ((0.0 <= *(float *)(param_1 + 0x16c)) && (*(char *)(param_1 + 0x146) == '\x01'))
                {
                  dVar88 = pdVar66[2] - pdVar65[2];
                  dVar100 = pdVar66[1] - pdVar65[1];
                  dVar89 = *pdVar66 - *pdVar65;
                  dVar87 = dVar88 * dVar88 + dVar89 * dVar89 + dVar100 * dVar100;
                  if (9.99999993922529e-09 < dVar87) {
                    dVar87 = 1.0 / SQRT(dVar87);
                    dVar89 = dVar89 * dVar87;
                    dVar100 = dVar100 * dVar87;
                    dVar88 = dVar88 * dVar87;
                  }
                  dVar87 = (double)*(float *)pdVar64;
                  dVar86 = pdVar65[2] + (double)*(float *)(param_1 + 0x168) * dVar88 * dVar87;
                  dVar100 = pdVar65[1] + (double)*(float *)(param_1 + 0x164) * dVar100 * dVar87;
                  dVar88 = *pdVar65 + (double)*(float *)(param_1 + 0x160) * dVar89 * dVar87;
                  fVar72 = *(float *)(param_1 + 0x170);
                  if (((fVar72 <= ABS((float)(dVar88 - *pdVar66))) ||
                      (fVar72 <= ABS((float)(dVar100 - pdVar66[1])))) ||
                     (fVar72 <= ABS((float)(dVar86 - pdVar66[2])))) {
                    *pdVar65 = dVar88;
                    pdVar65[1] = dVar100;
                    pdVar65[2] = dVar86;
                  }
                  else {
                    pdVar65[2] = pdVar66[2];
                    dVar88 = pdVar66[1];
                    *pdVar65 = *pdVar66;
                    pdVar65[1] = dVar88;
                  }
                  local_328._0_4_ = auVar49._0_4_;
                  local_328._4_4_ = auVar49._4_4_;
                  dStack_320._0_4_ = auVar49._8_4_;
                  uVar74 = dStack_320._0_4_;
                }
                dVar87 = pdVar65[2] * dVar19;
                dVar88 = pdVar65[1] * dVar19;
                dVar89 = *pdVar65 * dVar19;
                dStack_170 = auVar21._8_8_;
                dVar100 = dVar14 - (dVar90 * dVar25 + dVar101 * dVar24 +
                                   (dVar87 * dVar47 + dVar88 * dVar44 + dVar89 * dVar41 + dVar18) *
                                   dVar20);
                dVar90 = (double)CONCAT44(uVar73,uVar74) -
                         (dVar97 * dVar25 + dVar15 * dVar24 +
                         (dVar87 * dVar46 + dVar88 * dVar43 + dVar89 * dVar40 + dStack_170) * dVar20
                         );
                dVar15 = (double)CONCAT44(local_328._4_4_,(undefined4)local_328) -
                         (dVar93 * dVar25 + dVar102 * dVar24 +
                         (dVar87 * dVar45 + dVar88 * dVar42 + dVar89 * dVar39 + dVar23) * dVar20);
                dVar101 = dVar100 * dVar100 + dVar15 * dVar15 + dVar90 * dVar90;
                if (9.99999993922529e-09 < dVar101) {
                  dVar101 = 1.0 / SQRT(dVar101);
                  dVar15 = dVar15 * dVar101;
                  dVar90 = dVar90 * dVar101;
                  dVar100 = dVar100 * dVar101;
                }
                local_328 = auVar49._0_8_;
                if ((*(int *)(param_1 + 0x120) == 0) ||
                   (dVar101 = (double)CONCAT44(uVar107,uVar106),
                   *(int *)(param_1 + 0x120) == 1 && iVar63 == 0)) {
                  dVar101 = (double)CONCAT44(uVar73,uVar74) - dVar11;
                  dVar97 = dVar15 * dVar101 - (local_328 - dVar10) * dVar90;
                  dVar102 = dVar100 * (local_328 - dVar10) - (dVar14 - dVar17) * dVar15;
                  dVar93 = dVar90 * (dVar14 - dVar17) - dVar101 * dVar100;
                  dVar88 = dVar97 * dVar97 + dVar93 * dVar93 + dVar102 * dVar102;
                  local_340 = dVar7;
                  local_348 = dVar8;
                  dVar101 = dVar9;
                  if (9.99999993922529e-09 < dVar88) {
                    dVar101 = 1.0 / SQRT(dVar88);
                    local_340 = dVar93 * dVar101;
                    local_348 = dVar102 * dVar101;
                    dVar101 = dVar97 * dVar101;
                  }
                }
                dVar97 = dVar101;
                dVar102 = local_348;
                dVar93 = local_340;
                if (local_368 != 0) {
                  dVar97 = (double)((float)local_368 *
                                   (3.1415927 / (float)*(int *)(param_1 + 0x14c))) * 0.5;
                  dVar102 = sin(dVar97);
                  dVar93 = cos(dVar97);
                  dVar15 = dVar15 * dVar102;
                  dVar90 = dVar90 * dVar102;
                  dVar100 = dVar100 * dVar102;
                  dVar88 = dVar15 * local_348 - local_340 * dVar90;
                  dVar89 = dVar100 * local_340 - dVar101 * dVar15;
                  dVar87 = dVar90 * dVar101 - local_348 * dVar100;
                  dVar88 = dVar88 + dVar88;
                  dVar89 = dVar89 + dVar89;
                  dVar87 = dVar87 + dVar87;
                  dVar97 = (dVar15 * dVar89 - dVar87 * dVar90) + dVar93 * dVar88 + dVar101;
                  dVar102 = (dVar100 * dVar87 - dVar88 * dVar15) + dVar93 * dVar89 + local_348;
                  dVar93 = (dVar90 * dVar88 - dVar89 * dVar100) + dVar93 * dVar87 + local_340;
                }
                local_364 = 1.0;
                if (*(char *)(param_1 + 0x180) != '\0') {
                  local_364 = *(float *)pdVar67;
                }
                dVar90 = (double)local_364;
                dVar15 = dVar93 * dVar84 * dVar90;
                dVar102 = dVar102 * dVar84 * dVar90;
                dVar90 = dVar97 * dVar84 * dVar90;
                dStack_320 = auVar26._8_8_;
                *pfVar61 = (float)((local_328 + dVar15) - dVar99);
                pfVar61[1] = (float)(((double)CONCAT44(uVar73,uVar74) + dVar102) - dVar83);
                pfVar61[2] = (float)((dVar14 + dVar90) - dVar22);
                fVar72 = (float)((double)CONCAT44(uVar73,uVar74) - dVar83);
                pfVar61[4] = (float)(local_328 - dVar99);
                pfVar61[5] = fVar72;
                pfVar61[6] = (float)(dVar14 - dVar22);
                pfVar61[7] = 0.0;
                pfVar61[8] = fVar82;
                pfVar61[9] = fVar82;
                pfVar61[0x10] = 0.0;
                pfVar61[0x11] = 0.0;
                pfVar61[10] = *(float *)(lVar69 + 0x3c);
                uVar48 = *(undefined8 *)(lVar69 + 0x78);
                *(undefined8 *)(pfVar61 + 0xc) = *puVar1;
                *(undefined8 *)(pfVar61 + 0xe) = uVar48;
                pfVar61[0x14] = (float)((local_328 - dVar15) - dVar99);
                pfVar61[0x15] = (float)(((double)CONCAT44(uVar73,uVar74) - dVar102) - dVar83);
                pfVar61[0x16] = (float)((dVar14 - dVar90) - dVar22);
                pfVar61[0x18] = (float)(local_328 - dVar99);
                pfVar61[0x19] = fVar72;
                pfVar61[0x1a] = (float)(dVar14 - dVar22);
                pfVar61[0x1b] = 0.0;
                pfVar61[0x1c] = fVar82;
                pfVar61[0x1d] = fVar82;
                pfVar61[0x24] = 0.0;
                pfVar61[0x25] = 1.0;
                pfVar61[0x1e] = *(float *)(lVar69 + 0x3c);
                uVar48 = *(undefined8 *)(lVar69 + 0x78);
                *(undefined8 *)(pfVar61 + 0x20) = *puVar1;
                *(undefined8 *)(pfVar61 + 0x22) = uVar48;
                pfVar61 = pfVar61 + 0x28;
                uVar57 = (ulonglong)*(uint *)(pauVar68[9] + 8);
                dStack_2c0 = auVar98._8_8_;
                dStack_2a0 = dStack_320;
                local_354 = fVar77 + 0.0;
                if (0 < (int)*(uint *)(pauVar68[9] + 8)) {
                  local_2e8 = 0;
                  local_1e8._8_8_ = dStack_2c0;
                  local_1e8._0_8_ = dVar29;
                  uVar54 = 0;
                  dVar15 = dVar14;
                  dVar102 = local_328;
                  dVar90 = dStack_320;
                  local_310 = dVar85;
                  do {
                    lVar59 = uVar54 * lVar53;
                    bVar71 = uVar54 == (int)uVar57 - 1;
                    pauVar60 = (undefined1 (*) [16])(pdVar62 + lVar59 * 3 + 3);
                    dVar14 = *(double *)((longlong)pauVar60[-1] + 8);
                    dVar97 = *(double *)pauVar60[-1];
                    dVar93 = *(double *)((longlong)pauVar60[-2] + 8);
                    pauVar50 = (undefined1 (*) [16])(pdVar62 + lVar59 * 3 + 4);
                    if (bVar71) {
                      pauVar60 = pauVar2;
                      pauVar50 = pauVar3;
                    }
                    pdVar55 = pdVar62 + lVar59 * 3 + 5;
                    if (bVar71) {
                      pdVar55 = pdVar70;
                    }
                    dVar88 = *pdVar55;
                    dVar89 = *(double *)*pauVar50;
                    dVar100 = *(double *)*pauVar60;
                    auVar26._8_4_ = SUB84(dVar90,0);
                    auVar26._0_8_ = dVar102;
                    auVar26._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
                    dStack_320 = auVar26._8_8_;
                    dVar29 = dVar90;
                    if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                       (*(char *)(param_1 + 0x146) == '\x01')) {
                      dVar29 = pdVar66[uVar54 * 3 + 2] - pdVar65[uVar54 * 3 + 2];
                      dVar87 = pdVar66[uVar54 * 3 + 1] - pdVar65[uVar54 * 3 + 1];
                      dVar85 = pdVar66[uVar54 * 3] - pdVar65[uVar54 * 3];
                      dVar86 = dVar29 * dVar29 + dVar85 * dVar85 + dVar87 * dVar87;
                      if (9.99999993922529e-09 < dVar86) {
                        dVar86 = 1.0 / SQRT(dVar86);
                        dVar85 = dVar85 * dVar86;
                        dVar87 = dVar87 * dVar86;
                        dVar29 = dVar29 * dVar86;
                      }
                      pdVar55 = pdVar65 + uVar54 * 3;
                      dVar86 = (double)*(float *)pdVar64;
                      dVar91 = pdVar65[uVar54 * 3 + 2] +
                               (double)*(float *)(param_1 + 0x168) * dVar29 * dVar86;
                      dVar29 = pdVar65[uVar54 * 3 + 1] +
                               (double)*(float *)(param_1 + 0x164) * dVar87 * dVar86;
                      dVar85 = pdVar65[uVar54 * 3] +
                               (double)*(float *)(param_1 + 0x160) * dVar85 * dVar86;
                      fVar72 = *(float *)(param_1 + 0x170);
                      if (((fVar72 <= ABS((float)(dVar85 - pdVar66[uVar54 * 3]))) ||
                          (fVar72 <= ABS((float)(dVar29 - pdVar66[uVar54 * 3 + 1])))) ||
                         (fVar72 <= ABS((float)(dVar91 - pdVar66[uVar54 * 3 + 2])))) {
                        *pdVar55 = dVar85;
                        pdVar55[1] = dVar29;
                        pdVar55[2] = dVar91;
                        dVar29 = dStack_320;
                      }
                      else {
                        pdVar56 = pdVar66 + uVar54 * 3;
                        pdVar55[2] = pdVar56[2];
                        dVar29 = pdVar56[1];
                        *pdVar55 = *pdVar56;
                        pdVar55[1] = dVar29;
                        dVar29 = dStack_320;
                      }
                    }
                    uVar4 = uVar54 + 1;
                    lVar59 = uVar4 * lVar53;
                    pdVar55 = pdVar62 + lVar59 * 3 + 5;
                    pauVar60 = (undefined1 (*) [16])(pdVar62 + lVar59 * 3 + 3);
                    pauVar50 = (undefined1 (*) [16])(pdVar62 + lVar59 * 3 + 4);
                    if (uVar54 == *(uint *)(pauVar68[9] + 8) - 1) {
                      pdVar55 = pdVar70;
                      pauVar60 = pauVar2;
                      pauVar50 = pauVar3;
                    }
                    dVar86 = pdVar65[uVar54 * 3 + 2] * dVar19;
                    dVar92 = pdVar65[uVar54 * 3 + 1] * dVar19;
                    dVar87 = pdVar65[uVar54 * 3] * dVar19;
                    dVar91 = dVar86 * dVar45 + dVar92 * dVar42 + dVar87 * dVar39 + dVar23;
                    dStack_2a0 = dVar86 * dVar46 + dVar92 * dVar43 + dVar87 * dVar40 + dStack_170;
                    uVar73 = (undefined4)((ulonglong)dStack_2a0 >> 0x20);
                    if (uVar4 == *(uint *)(pauVar68[9] + 8) && iVar52 < 0) {
                      dVar16 = *(double *)*pauVar2;
                      dVar94 = *(double *)*pauVar3;
                      dVar95 = *pdVar70;
                      if (*(char *)(param_1 + 0x149) == '\x01') {
                        if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                           (*(char *)(param_1 + 0x146) == '\x01')) {
                          auVar32._8_4_ = SUB84(dStack_2a0,0);
                          auVar32._0_8_ = dVar91;
                          auVar32._12_4_ = uVar73;
                          lVar59 = (longlong)*(int *)(param_1 + 0x150);
                          dVar29 = pdVar66[lVar59 * 3 + 2] - pdVar65[lVar59 * 3 + 2];
                          dVar85 = pdVar66[lVar59 * 3 + 1] - pdVar65[lVar59 * 3 + 1];
                          dVar30 = pdVar66[lVar59 * 3] - pdVar65[lVar59 * 3];
                          dVar96 = dVar29 * dVar29 + dVar30 * dVar30 + dVar85 * dVar85;
                          if (9.99999993922529e-09 < dVar96) {
                            dVar96 = 1.0 / SQRT(dVar96);
                            dVar30 = dVar30 * dVar96;
                            dVar85 = dVar85 * dVar96;
                            dVar29 = dVar29 * dVar96;
                          }
                          pdVar55 = pdVar65 + lVar59 * 3;
                          dVar96 = (double)*(float *)pdVar64;
                          dVar29 = pdVar65[lVar59 * 3 + 2] +
                                   (double)*(float *)(param_1 + 0x168) * dVar29 * dVar96;
                          dVar85 = pdVar65[lVar59 * 3 + 1] +
                                   (double)*(float *)(param_1 + 0x164) * dVar85 * dVar96;
                          dVar30 = pdVar65[lVar59 * 3] +
                                   (double)*(float *)(param_1 + 0x160) * dVar30 * dVar96;
                          fVar72 = *(float *)(param_1 + 0x170);
                          if (((fVar72 <= ABS((float)(dVar30 - pdVar66[lVar59 * 3]))) ||
                              (fVar72 <= ABS((float)(dVar85 - pdVar66[lVar59 * 3 + 1])))) ||
                             (fVar72 <= ABS((float)(dVar29 - pdVar66[lVar59 * 3 + 2])))) {
                            *pdVar55 = dVar30;
                            pdVar55[1] = dVar85;
                            pdVar55[2] = dVar29;
                          }
                          else {
                            pdVar56 = pdVar66 + lVar59 * 3;
                            pdVar55[2] = pdVar56[2];
                            dVar29 = pdVar56[1];
                            *pdVar55 = *pdVar56;
                            pdVar55[1] = dVar29;
                          }
                          dStack_2a0 = auVar32._8_8_;
                        }
                        lVar59 = (longlong)*(int *)(param_1 + 0x150);
                        dVar29 = pdVar65[lVar59 * 3 + 2] * dVar19;
                        dVar85 = pdVar65[lVar59 * 3 + 1] * dVar19;
                        dVar30 = pdVar65[lVar59 * 3] * dVar19;
                        dVar16 = dVar16 + (dVar29 * dVar45 + dVar85 * dVar42 + dVar30 * dVar39 +
                                          dVar23) * dVar20;
                        dVar94 = dVar94 + (dVar29 * dVar46 + dVar85 * dVar43 + dVar30 * dVar40 +
                                          dStack_170) * dVar20;
                        dVar95 = dVar95 + (dVar29 * dVar47 + dVar85 * dVar44 + dVar30 * dVar41 +
                                          dVar18) * dVar20;
                        dVar29 = dStack_320;
                      }
                      fVar6 = *(float *)(param_1 + 0x15c);
                      dStack_320 = dVar29;
                    }
                    else {
                      dVar29 = pdVar62[lVar59 * 3 + 2];
                      dVar85 = pdVar62[lVar59 * 3 + 1];
                      dVar16 = pdVar62[lVar59 * 3];
                      dVar94 = *pdVar55;
                      dVar30 = *(double *)*pauVar50;
                      dVar96 = *(double *)*pauVar60;
                      if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                         (*(char *)(param_1 + 0x146) == '\x01')) {
                        auVar35._8_4_ = SUB84(dStack_2a0,0);
                        auVar35._0_8_ = dVar91;
                        auVar35._12_4_ = uVar73;
                        dVar95 = pdVar66[uVar4 * 3 + 2] - pdVar65[uVar4 * 3 + 2];
                        dVar103 = pdVar66[uVar4 * 3 + 1] - pdVar65[uVar4 * 3 + 1];
                        dVar31 = pdVar66[uVar4 * 3] - pdVar65[uVar4 * 3];
                        dVar36 = dVar95 * dVar95 + dVar31 * dVar31 + dVar103 * dVar103;
                        if (9.99999993922529e-09 < dVar36) {
                          dVar36 = 1.0 / SQRT(dVar36);
                          dVar31 = dVar31 * dVar36;
                          dVar103 = dVar103 * dVar36;
                          dVar95 = dVar95 * dVar36;
                        }
                        pdVar55 = pdVar65 + uVar4 * 3;
                        dVar36 = (double)*(float *)pdVar64;
                        dVar95 = pdVar65[uVar4 * 3 + 2] +
                                 (double)*(float *)(param_1 + 0x168) * dVar95 * dVar36;
                        dVar103 = pdVar65[uVar4 * 3 + 1] +
                                  (double)*(float *)(param_1 + 0x164) * dVar103 * dVar36;
                        dVar31 = pdVar65[uVar4 * 3] +
                                 (double)*(float *)(param_1 + 0x160) * dVar31 * dVar36;
                        fVar72 = *(float *)(param_1 + 0x170);
                        if (((fVar72 <= ABS((float)(dVar31 - pdVar66[uVar4 * 3]))) ||
                            (fVar72 <= ABS((float)(dVar103 - pdVar66[uVar4 * 3 + 1])))) ||
                           (fVar72 <= ABS((float)(dVar95 - pdVar66[uVar4 * 3 + 2])))) {
                          *pdVar55 = dVar31;
                          pdVar55[1] = dVar103;
                          pdVar55[2] = dVar95;
                        }
                        else {
                          pdVar56 = pdVar66 + uVar4 * 3;
                          pdVar55[2] = pdVar56[2];
                          dVar95 = pdVar56[1];
                          *pdVar55 = *pdVar56;
                          pdVar55[1] = dVar95;
                        }
                        dStack_2a0 = auVar35._8_8_;
                      }
                      dVar103 = pdVar65[uVar54 * 3 + 5] * dVar19;
                      dVar31 = pdVar65[uVar54 * 3 + 4] * dVar19;
                      dVar36 = pdVar65[uVar54 * 3 + 3] * dVar19;
                      dVar95 = dVar94 * dVar25 + dVar29 * dVar24 +
                               (dVar103 * dVar47 + dVar31 * dVar44 + dVar36 * dVar41 + dVar18) *
                               dVar20;
                      dVar94 = dVar30 * dVar25 + dVar85 * dVar24 +
                               (dVar103 * dVar46 + dVar31 * dVar43 + dVar36 * dVar40 + dStack_170) *
                               dVar20;
                      dVar16 = dVar96 * dVar25 + dVar16 * dVar24 +
                               (dVar103 * dVar45 + dVar31 * dVar42 + dVar36 * dVar39 + dVar23) *
                               dVar20;
                    }
                    dVar29 = (double)((1.0 - *(float *)(param_1 + 0x174)) * 0.5);
                    dVar85 = (dVar95 - dVar15) * dVar29;
                    dStack_2c0 = (dVar94 - dStack_320) * dVar29;
                    dVar29 = (dVar16 - dVar102) * dVar29;
                    dVar16 = dVar85 * dVar85 + dVar29 * dVar29 + dStack_2c0 * dStack_2c0;
                    if (9.99999993922529e-09 < dVar16) {
                      dVar16 = 1.0 / SQRT(dVar16);
                      dVar29 = dVar29 * dVar16;
                      dStack_2c0 = dStack_2c0 * dVar16;
                      dVar85 = dVar85 * dVar16;
                    }
                    dVar14 = (dVar86 * dVar47 + dVar92 * dVar44 + dVar87 * dVar41 + dVar18) * dVar20
                             + dVar14 * dVar25 + dVar88 * dVar24;
                    dStack_2a0 = dStack_2a0 * dVar20 + dVar97 * dVar25 + dVar89 * dVar24;
                    local_328 = dVar91 * dVar20 + dVar93 * dVar25 + dVar100 * dVar24;
                    dVar97 = (double)fVar6;
                    dVar29 = dVar29 * dVar97;
                    dStack_2c0 = dStack_2c0 * dVar97;
                    dVar85 = dVar85 * dVar97;
                    if (0 < (int)uVar51) {
                      auVar27._8_4_ = SUB84(dStack_2c0,0);
                      auVar27._0_8_ = dVar29;
                      auVar27._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
                      auVar33._8_4_ = SUB84(dStack_2a0,0);
                      auVar33._0_8_ = local_328;
                      auVar33._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
                      uVar57 = 0;
                      dVar97 = dVar15;
                      dVar93 = dVar102;
                      do {
                        uVar54 = uVar57 + 1;
                        fVar105 = (float)(int)uVar54 * (1.0 / (float)(int)uVar51);
                        fVar80 = fVar105 * fVar105;
                        fVar72 = fVar105 * fVar80;
                        fVar79 = fVar72 - fVar80;
                        fVar104 = ((fVar72 + fVar72) - fVar80 * 3.0) + 1.0;
                        fVar105 = (fVar72 - (fVar80 + fVar80)) + fVar105;
                        fVar72 = fVar80 * 3.0 - (fVar72 + fVar72);
                        dVar87 = (double)fVar72 * local_328 + (double)fVar79 * dVar29 +
                                 (double)fVar105 * (double)local_1e8._0_8_ +
                                 (double)fVar104 * dVar102;
                        dVar86 = (double)fVar72 * dStack_2a0 + (double)fVar79 * dStack_2c0 +
                                 (double)fVar105 * (double)local_1e8._8_8_ +
                                 (double)fVar104 * dVar90;
                        dVar89 = (double)fVar79 * dVar85 + (double)fVar72 * dVar14 +
                                 (double)fVar104 * dVar15 + (double)fVar105 * local_310;
                        dVar92 = dVar97 - dVar89;
                        dVar100 = dStack_320 - dVar86;
                        dVar91 = dVar93 - dVar87;
                        dVar88 = dVar92 * dVar92 + dVar91 * dVar91 + dVar100 * dVar100;
                        if (9.99999993922529e-09 < dVar88) {
                          dVar88 = 1.0 / SQRT(dVar88);
                          dVar91 = dVar91 * dVar88;
                          dVar100 = dVar100 * dVar88;
                          dVar92 = dVar92 * dVar88;
                        }
                        dVar94 = dVar101;
                        dVar88 = local_340;
                        dVar16 = local_348;
                        if (*(int *)(param_1 + 0x120) == 0) {
                          dVar96 = dVar91 * (dStack_320 - dVar11) - (dVar93 - dVar10) * dVar100;
                          dVar30 = dVar92 * (dVar93 - dVar10) - (dVar97 - dVar17) * dVar91;
                          dVar93 = dVar100 * (dVar97 - dVar17) - (dStack_320 - dVar11) * dVar92;
                          dVar97 = dVar96 * dVar96 + dVar93 * dVar93 + dVar30 * dVar30;
                          dVar94 = dVar9;
                          dVar88 = dVar7;
                          dVar16 = dVar8;
                          if (9.99999993922529e-09 < dVar97) {
                            dVar94 = 1.0 / SQRT(dVar97);
                            dVar88 = dVar93 * dVar94;
                            dVar16 = dVar30 * dVar94;
                            dVar94 = dVar96 * dVar94;
                          }
                        }
                        if (local_368 != 0) {
                          dVar93 = (double)((3.1415927 / (float)*(int *)(param_1 + 0x14c)) *
                                           (float)local_368) * 0.5;
                          dVar97 = sin(dVar93);
                          dVar93 = cos(dVar93);
                          dVar91 = dVar91 * dVar97;
                          dVar100 = dVar100 * dVar97;
                          dVar92 = dVar92 * dVar97;
                          dVar30 = dVar100 * dVar94 - dVar16 * dVar92;
                          dVar30 = dVar30 + dVar30;
                          dVar96 = dVar91 * dVar16 - dVar88 * dVar100;
                          dVar96 = dVar96 + dVar96;
                          dVar97 = dVar92 * dVar88 - dVar94 * dVar91;
                          dVar97 = dVar97 + dVar97;
                          dVar94 = (dVar91 * dVar97 - dVar30 * dVar100) + dVar93 * dVar96 + dVar94;
                          dVar16 = (dVar92 * dVar30 - dVar96 * dVar91) + dVar93 * dVar97 + dVar16;
                          dVar88 = (dVar100 * dVar96 - dVar97 * dVar92) + dVar93 * dVar30 + dVar88;
                        }
                        if (*(char *)(param_1 + 0x180) != '\0') {
                          local_364 = *(float *)((longlong)pdVar67 + uVar57 * 4 + local_2e8 * 4);
                        }
                        dVar97 = (double)local_364;
                        dVar93 = dVar88 * dVar84 * dVar97;
                        dVar88 = dVar16 * dVar84 * dVar97;
                        dVar97 = dVar94 * dVar84 * dVar97;
                        *pfVar61 = (float)((dVar87 + dVar93) - dVar99);
                        pfVar61[1] = (float)((dVar86 + dVar88) - dVar83);
                        pfVar61[2] = (float)((dVar89 + dVar97) - dVar22);
                        pfVar61[4] = (float)(dVar87 - dVar99);
                        pfVar61[5] = (float)(dVar86 - dVar83);
                        pfVar61[6] = (float)(dVar89 - dVar22);
                        pfVar61[7] = 0.0;
                        pfVar61[8] = fVar82;
                        pfVar61[9] = fVar82;
                        pfVar61[0x10] = local_354;
                        pfVar61[0x11] = 0.0;
                        pfVar61[10] = *(float *)(lVar69 + 0x3c);
                        uVar48 = *(undefined8 *)(lVar69 + 0x78);
                        *(undefined8 *)(pfVar61 + 0xc) = *puVar1;
                        *(undefined8 *)(pfVar61 + 0xe) = uVar48;
                        pfVar61[0x14] = (float)((dVar87 - dVar93) - dVar99);
                        pfVar61[0x15] = (float)((dVar86 - dVar88) - dVar83);
                        pfVar61[0x16] = (float)((dVar89 - dVar97) - dVar22);
                        pfVar61[0x18] = (float)(dVar87 - dVar99);
                        pfVar61[0x19] = (float)(dVar86 - dVar83);
                        pfVar61[0x1a] = (float)(dVar89 - dVar22);
                        pfVar61[0x1b] = 0.0;
                        pfVar61[0x1c] = fVar82;
                        pfVar61[0x1d] = fVar82;
                        pfVar61[0x24] = local_354;
                        pfVar61[0x25] = 1.0;
                        pfVar61[0x1e] = *(float *)(lVar69 + 0x3c);
                        uVar48 = *(undefined8 *)(lVar69 + 0x78);
                        *(undefined8 *)(pfVar61 + 0x20) = *puVar1;
                        *(undefined8 *)(pfVar61 + 0x22) = uVar48;
                        pfVar61 = pfVar61 + 0x28;
                        local_354 = local_354 + fVar77;
                        dStack_2c0 = auVar27._8_8_;
                        dStack_2a0 = auVar33._8_8_;
                        uVar57 = uVar54;
                        dVar97 = dVar89;
                        dStack_320 = dVar86;
                        dVar93 = dVar87;
                      } while (uVar51 != uVar54);
                    }
                    uVar57 = (ulonglong)*(int *)(pauVar68[9] + 8);
                    local_2e8 = (ulonglong)((int)local_2e8 + uVar51);
                    local_1e8._8_4_ = SUB84(dStack_2c0,0);
                    local_1e8._0_8_ = dVar29;
                    local_1e8._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
                    uVar54 = uVar4;
                    dVar15 = dVar14;
                    dVar102 = local_328;
                    dVar90 = dStack_2a0;
                    local_310 = dVar85;
                  } while ((longlong)uVar4 < (longlong)uVar57);
                }
                if (iVar52 < 0) {
                  dVar15 = *(double *)*pauVar2;
                  dVar102 = *(double *)pauVar68[4];
                  local_1e8._0_16_ = *pauVar2;
                  local_310 = *pdVar70;
                  if (*(char *)(param_1 + 0x149) == '\x01') {
                    if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                       (*(char *)(param_1 + 0x146) == '\x01')) {
                      lVar59 = (longlong)*(int *)(param_1 + 0x150);
                      dVar90 = pdVar66[lVar59 * 3 + 2] - pdVar65[lVar59 * 3 + 2];
                      dVar93 = pdVar66[lVar59 * 3 + 1] - pdVar65[lVar59 * 3 + 1];
                      dVar97 = pdVar66[lVar59 * 3] - pdVar65[lVar59 * 3];
                      dVar88 = dVar90 * dVar90 + dVar97 * dVar97 + dVar93 * dVar93;
                      if (9.99999993922529e-09 < dVar88) {
                        dVar88 = 1.0 / SQRT(dVar88);
                        dVar97 = dVar97 * dVar88;
                        dVar93 = dVar93 * dVar88;
                        dVar90 = dVar90 * dVar88;
                      }
                      pdVar55 = pdVar65 + lVar59 * 3;
                      dVar88 = (double)*(float *)pdVar64;
                      dVar90 = pdVar65[lVar59 * 3 + 2] +
                               (double)*(float *)(param_1 + 0x168) * dVar90 * dVar88;
                      dVar93 = pdVar65[lVar59 * 3 + 1] +
                               (double)*(float *)(param_1 + 0x164) * dVar93 * dVar88;
                      dVar97 = pdVar65[lVar59 * 3] +
                               (double)*(float *)(param_1 + 0x160) * dVar97 * dVar88;
                      fVar72 = *(float *)(param_1 + 0x170);
                      if (((fVar72 <= ABS((float)(dVar97 - pdVar66[lVar59 * 3]))) ||
                          (fVar72 <= ABS((float)(dVar93 - pdVar66[lVar59 * 3 + 1])))) ||
                         (fVar72 <= ABS((float)(dVar90 - pdVar66[lVar59 * 3 + 2])))) {
                        *pdVar55 = dVar97;
                        pdVar55[1] = dVar93;
                        pdVar55[2] = dVar90;
                      }
                      else {
                        pdVar56 = pdVar66 + lVar59 * 3;
                        pdVar55[2] = pdVar56[2];
                        dVar90 = pdVar56[1];
                        *pdVar55 = *pdVar56;
                        pdVar55[1] = dVar90;
                      }
                    }
                    lVar59 = (longlong)*(int *)(param_1 + 0x150);
                    dVar90 = pdVar65[lVar59 * 3 + 2] * dVar19;
                    dVar97 = pdVar65[lVar59 * 3 + 1] * dVar19;
                    dVar93 = pdVar65[lVar59 * 3] * dVar19;
                    dVar102 = dVar102 + (dVar90 * dVar46 + dVar97 * dVar43 + dVar93 * dVar40 +
                                        dStack_170) * dVar20;
                    local_310 = local_310 +
                                (dVar90 * dVar47 + dVar97 * dVar44 + dVar93 * dVar41 + dVar18) *
                                dVar20;
                    local_1e8._8_4_ = SUB84(dVar102,0);
                    local_1e8._0_8_ =
                         (dVar90 * dVar45 + dVar97 * dVar42 + dVar93 * dVar39 + dVar23) * dVar20 +
                         dVar15;
                    local_1e8._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
                  }
                  if (*(char *)(param_1 + 0x148) == '\x01') {
                    dVar102 = *(double *)pauVar68[5];
                    dVar90 = *(double *)(pauVar68[5] + 8);
                    dVar15 = *(double *)pauVar68[6];
                  }
                  else {
                    dVar102 = (double)((1.0 - *(float *)(param_1 + 0x174)) * 0.5);
                    dVar15 = (*pdVar70 - dVar14) * dVar102;
                    dVar90 = (*(double *)*pauVar3 - dStack_2a0) * dVar102;
                    dVar102 = (*(double *)*pauVar2 - local_328) * dVar102;
                    dVar97 = dVar15 * dVar15 + dVar102 * dVar102 + dVar90 * dVar90;
                    if (9.99999993922529e-09 < dVar97) {
                      dVar97 = 1.0 / SQRT(dVar97);
                      dVar102 = dVar102 * dVar97;
                      dVar90 = dVar90 * dVar97;
                      dVar15 = dVar15 * dVar97;
                    }
                  }
                  if (0 < (int)uVar51) {
                    dVar97 = (double)fVar6;
                    lVar59 = 0;
                    auVar28._8_4_ = SUB84(dStack_2c0,0);
                    auVar28._0_8_ = dVar29;
                    auVar28._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
                    auVar34._8_4_ = SUB84(dStack_2a0,0);
                    auVar34._0_8_ = local_328;
                    auVar34._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
                    dVar93 = dVar14;
                    dVar88 = local_328;
                    dVar89 = dStack_2a0;
                    do {
                      fVar105 = (float)((int)lVar59 + 1) * (1.0 / (float)(int)uVar51);
                      fVar80 = fVar105 * fVar105;
                      fVar72 = fVar105 * fVar80;
                      fVar79 = fVar72 - fVar80;
                      fVar104 = ((fVar72 + fVar72) - fVar80 * 3.0) + 1.0;
                      fVar105 = (fVar72 - (fVar80 + fVar80)) + fVar105;
                      fVar72 = fVar80 * 3.0 - (fVar72 + fVar72);
                      dVar92 = (double)fVar72 * (double)local_1e8._0_8_ +
                               (double)fVar79 * dVar102 * dVar97 +
                               (double)fVar105 * dVar29 + (double)fVar104 * local_328;
                      dVar16 = (double)fVar72 * (double)local_1e8._8_8_ +
                               (double)fVar79 * dVar90 * dVar97 +
                               (double)fVar105 * dStack_2c0 + (double)fVar104 * dStack_2a0;
                      dVar87 = (double)fVar79 * dVar15 * dVar97 + (double)fVar72 * local_310 +
                               (double)fVar104 * dVar14 + (double)fVar105 * dVar85;
                      dVar91 = dVar93 - dVar87;
                      dVar86 = dVar89 - dVar16;
                      dVar100 = dVar88 - dVar92;
                      dVar94 = dVar91 * dVar91 + dVar100 * dVar100 + dVar86 * dVar86;
                      if (9.99999993922529e-09 < dVar94) {
                        dVar94 = 1.0 / SQRT(dVar94);
                        dVar100 = dVar100 * dVar94;
                        dVar86 = dVar86 * dVar94;
                        dVar91 = dVar91 * dVar94;
                      }
                      dVar94 = dVar101;
                      dVar30 = local_340;
                      dVar96 = local_348;
                      if (*(int *)(param_1 + 0x120) == 0) {
                        dVar103 = dVar100 * (dVar89 - dVar11) - (dVar88 - dVar10) * dVar86;
                        dVar95 = dVar91 * (dVar88 - dVar10) - (dVar93 - dVar17) * dVar100;
                        dVar88 = dVar86 * (dVar93 - dVar17) - (dVar89 - dVar11) * dVar91;
                        dVar93 = dVar103 * dVar103 + dVar88 * dVar88 + dVar95 * dVar95;
                        dVar94 = dVar9;
                        dVar30 = dVar7;
                        dVar96 = dVar8;
                        if (9.99999993922529e-09 < dVar93) {
                          dVar94 = 1.0 / SQRT(dVar93);
                          dVar30 = dVar88 * dVar94;
                          dVar96 = dVar95 * dVar94;
                          dVar94 = dVar103 * dVar94;
                        }
                      }
                      if (local_368 != 0) {
                        dVar88 = (double)((3.1415927 / (float)*(int *)(param_1 + 0x14c)) *
                                         (float)local_368) * 0.5;
                        dVar93 = sin(dVar88);
                        dVar88 = cos(dVar88);
                        dVar100 = dVar100 * dVar93;
                        dVar86 = dVar86 * dVar93;
                        dVar91 = dVar91 * dVar93;
                        dVar89 = dVar86 * dVar94 - dVar96 * dVar91;
                        dVar89 = dVar89 + dVar89;
                        dVar95 = dVar100 * dVar96 - dVar30 * dVar86;
                        dVar95 = dVar95 + dVar95;
                        dVar93 = dVar91 * dVar30 - dVar94 * dVar100;
                        dVar93 = dVar93 + dVar93;
                        dVar94 = (dVar100 * dVar93 - dVar89 * dVar86) + dVar88 * dVar95 + dVar94;
                        dVar96 = (dVar91 * dVar89 - dVar95 * dVar100) + dVar88 * dVar93 + dVar96;
                        dVar30 = (dVar86 * dVar95 - dVar93 * dVar91) + dVar88 * dVar89 + dVar30;
                      }
                      if (*(char *)(param_1 + 0x180) != '\0') {
                        local_364 = *(float *)((longlong)pdVar67 +
                                              ((longlong)(int)uVar51 *
                                               (longlong)*(int *)(pauVar68[9] + 8) + lVar59) * 4);
                      }
                      dVar93 = (double)local_364;
                      dVar89 = dVar30 * dVar84 * dVar93;
                      dVar88 = dVar96 * dVar84 * dVar93;
                      dVar93 = dVar94 * dVar84 * dVar93;
                      *pfVar61 = (float)((dVar92 + dVar89) - dVar99);
                      pfVar61[1] = (float)((dVar16 + dVar88) - dVar83);
                      pfVar61[2] = (float)((dVar87 + dVar93) - dVar22);
                      pfVar61[4] = (float)(dVar92 - dVar99);
                      pfVar61[5] = (float)(dVar16 - dVar83);
                      pfVar61[6] = (float)(dVar87 - dVar22);
                      pfVar61[7] = 0.0;
                      pfVar61[8] = fVar82;
                      pfVar61[9] = fVar82;
                      pfVar61[0x10] = local_354;
                      pfVar61[0x11] = 0.0;
                      pfVar61[10] = *(float *)(lVar69 + 0x3c);
                      uVar48 = *(undefined8 *)(lVar69 + 0x78);
                      *(undefined8 *)(pfVar61 + 0xc) = *puVar1;
                      *(undefined8 *)(pfVar61 + 0xe) = uVar48;
                      pfVar61[0x14] = (float)((dVar92 - dVar89) - dVar99);
                      pfVar61[0x15] = (float)((dVar16 - dVar88) - dVar83);
                      pfVar61[0x16] = (float)((dVar87 - dVar93) - dVar22);
                      pfVar61[0x18] = (float)(dVar92 - dVar99);
                      pfVar61[0x19] = (float)(dVar16 - dVar83);
                      pfVar61[0x1a] = (float)(dVar87 - dVar22);
                      pfVar61[0x1b] = 0.0;
                      pfVar61[0x1c] = fVar82;
                      pfVar61[0x1d] = fVar82;
                      pfVar61[0x24] = local_354;
                      pfVar61[0x25] = 1.0;
                      pfVar61[0x1e] = *(float *)(lVar69 + 0x3c);
                      uVar48 = *(undefined8 *)(lVar69 + 0x78);
                      *(undefined8 *)(pfVar61 + 0x20) = *puVar1;
                      *(undefined8 *)(pfVar61 + 0x22) = uVar48;
                      pfVar61 = pfVar61 + 0x28;
                      local_354 = local_354 + fVar77;
                      lVar59 = lVar59 + 1;
                      dStack_2c0 = auVar28._8_8_;
                      dStack_2a0 = auVar34._8_8_;
                      dVar93 = dVar87;
                      dVar88 = dVar92;
                      dVar89 = dVar16;
                    } while (uVar51 != (uint)lVar59);
                  }
                }
                local_368 = local_368 + 1;
                uVar106 = SUB84(dVar101,0);
                uVar107 = (undefined4)((ulonglong)dVar101 >> 0x20);
              } while (local_368 < *(int *)(param_1 + 0x14c));
              iVar52 = *(int *)(param_1 + 0x34);
              uVar78 = SUB84(local_340,0);
              uVar81 = (undefined4)((ulonglong)local_340 >> 0x20);
            }
            uVar73 = SUB84(local_348,0);
            uVar74 = (undefined4)((ulonglong)local_348 >> 0x20);
          }
        }
      }
      iVar63 = iVar63 + 1;
    } while (iVar63 < iVar52);
  }
  return;
}



// FUNCTION 147c39b6c FUN_147c39b6c body=1 status=ok
// SIG undefined FUN_147c39b6c(void)

void FUN_147c39b6c(void)

{
  return;
}



// FUNCTION 147c39b88 FUN_147c39b88 body=132 status=ok
// SIG undefined FUN_147c39b88(void)

void FUN_147c39b88(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  param_1[5] = (longlong)(param_1 + 9);
  *(uint *)((longlong)param_1 + 0xc) =
       *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe | (uint)param_2;
  lVar1 = (**(code **)(*(longlong *)param_1[0x15] + 0x2f0))();
  param_1[3] = lVar1;
  lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | (uint)(0 < *(int *)(lVar1 + 0xa0));
  *(undefined8 *)(param_1[5] + 0x60) = 0;
  lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | (uint)(0 < *(int *)(lVar1 + 0xa0));
  return;
}



// FUNCTION 147c39c0c FUN_147c39c0c body=3228 status=ok
// SIG undefined FUN_147c39c0c(void)

void FUN_147c39c0c(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_218 [32];
  byte local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  float local_1d4;
  longlong local_1d0;
  uint *local_1c8;
  float local_1c0;
  float local_1bc;
  uint *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  longlong local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined1 local_168 [16];
  double local_158;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1d0 = param_4;
  if (((*(byte *)(param_1 + 0x34) & 0xc) != 0) && (iVar2 = *(int *)(param_1 + 0x54), 0 < iVar2)) {
    lVar14 = *(longlong *)(param_1 + 0x70);
    lVar13 = 0;
    puVar10 = (uint *)0x0;
    local_1a8 = lVar14;
    local_1a0 = param_1;
    do {
      lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x78) + lVar13 * 2) *
              (longlong)*(int *)(param_1 + 0x58) + lVar14;
      lVar6 = (longlong)*(int *)(param_1 + 0x130);
      uVar7 = *(uint *)(lVar6 + lVar3) & 0xf0000000;
      puVar9 = puVar10;
      if ((uVar7 == 0x40000000) || (uVar7 == 0x10000000)) {
        local_1c8 = (uint *)(lVar3 + lVar6);
        lVar12 = lVar3;
        if (local_1c8 != (uint *)0x0) {
          uVar7 = *(uint *)(lVar6 + lVar3) & 0x3fff;
          puVar9 = local_1c8;
          if (uVar7 == 0x3fff) goto LAB_147c3a7f3;
          do {
            lVar11 = (longlong)(int)uVar7 * (longlong)*(int *)(param_1 + 0x58) + lVar14;
            puVar8 = (uint *)(lVar11 + lVar6);
            puVar9 = puVar10;
            lVar12 = lVar3;
            if (puVar8 == (uint *)0x0) break;
            uVar7 = *puVar8 & 0x3fff;
            puVar9 = puVar8;
            lVar12 = lVar11;
          } while (uVar7 != 0x3fff);
        }
        if (puVar9 != local_1c8) {
          if (puVar9 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          else {
            fVar18 = 1.0 / ((float)(int)local_1c8[2] * 0.5);
            fVar20 = 0.0;
            local_1c0 = fVar18;
            local_1b8 = puVar9;
            local_1b0 = lVar13;
            do {
              uVar7 = *puVar9 >> 0xe & 0x3fff;
              if (uVar7 == 0x3fff) {
                lVar13 = 0;
                puVar10 = (uint *)0x0;
              }
              else {
                lVar13 = (longlong)*(int *)(param_1 + 0x58) * (ulonglong)uVar7 + lVar14;
                puVar10 = (uint *)(*(int *)(param_1 + 0x130) + lVar13);
              }
              local_f8 = *(double *)(lVar12 + 0x28);
              local_108 = *(undefined4 *)(lVar12 + 0x18);
              uStack_104 = *(undefined4 *)(lVar12 + 0x1c);
              uStack_100 = *(undefined4 *)(lVar12 + 0x20);
              uStack_fc = *(undefined4 *)(lVar12 + 0x24);
              fVar19 = fVar18 + fVar20;
              uVar7 = *(uint *)(param_1 + 0x34);
              if ((uVar7 & 4) != 0) {
                local_1d4 = *(float *)(lVar12 + 0x60) * *(float *)(param_1 + 0x80);
                if ((puVar9[9] & 1) == 0) {
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c39f02;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c39f02:
                  local_138 = CONCAT44(DAT_14c758c60,DAT_14c75905c);
                }
                else {
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c39f33;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c39f33:
                  local_138 = CONCAT44(DAT_14c75905c,DAT_14c758c60);
                }
                local_1f8 = local_1f8 & 7;
                uStack_130 = CONCAT44(0x3f800000,DAT_14c758c60);
                FUN_147cbb242(param_3,&local_108,local_1d4,&local_138);
                uVar7 = *(uint *)(param_1 + 0x34);
                if (lVar13 != 0 && (uVar7 & 0x10) != 0) {
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c39fb0;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c39fb0:
                  local_190 = (ulonglong)(uint)(int)(fVar20 * 255.0);
                  local_198 = (ulonglong)(uint)(int)((1.0 - fVar19) * 255.0);
                  local_188 = (ulonglong)(uint)(int)(fVar19 * 255.0);
                  local_1f8 = local_1f8 & 7;
                  local_138 = CONCAT44(DAT_14c758c60,DAT_14c758c60);
                  uStack_130 = CONCAT44(0x3f800000,DAT_14c75905c);
                  local_180 = lVar13 + 0x18;
                  local_1e8 = 0;
                  local_1f0 = 0;
                  local_1e0 = 0;
                  local_1bc = fVar19;
                  (**(code **)(*param_3 + 0x30))(param_3,&local_108,local_180,&local_138);
                  fVar19 = DAT_14c758c60;
                  uVar7 = puVar9[7];
                  local_128 = local_f8;
                  local_138 = CONCAT44(uStack_104,local_108);
                  uStack_130 = CONCAT44(uStack_fc,uStack_100);
                  fVar18 = (&DAT_14c758c60)[(int)((1.0 - fVar20) * 255.0) & 0xff];
                  fVar20 = (&DAT_14c758c60)[(uint)local_190 & 0xff];
                  local_148 = (&DAT_14c758c60)[(uint)local_198 & 0xff];
                  local_144 = (&DAT_14c758c60)[(uint)local_188 & 0xff];
                  local_140 = DAT_14c758c60;
                  local_13c = 1.0;
                  if (0 < (int)uVar7) {
                    local_1d4 = local_1d4 * 0.3;
                    uVar4 = 0;
                    do {
                      fVar21 = (float)(int)uVar4 * (1.0 / (float)(int)uVar7);
                      fVar23 = fVar21 * fVar21;
                      fVar24 = fVar21 * fVar23;
                      fVar25 = fVar24 - fVar23;
                      fVar17 = ((fVar24 + fVar24) - fVar23 * 3.0) + 1.0;
                      fVar22 = (fVar24 - (fVar23 + fVar23)) + fVar21;
                      fVar23 = fVar23 * 3.0 - (fVar24 + fVar24);
                      dVar1 = (double)fVar23 * *(double *)(lVar13 + 0x20) +
                              (double)fVar25 * (double)(float)puVar10[0xb] +
                              (double)fVar22 * (double)(float)puVar9[0xb] +
                              (double)fVar17 * *(double *)(lVar12 + 0x20);
                      local_168._8_4_ = SUB84(dVar1,0);
                      local_168._0_8_ =
                           (double)fVar23 * *(double *)(lVar13 + 0x18) +
                           (double)fVar25 * (double)(float)puVar10[10] +
                           (double)fVar22 * (double)(float)puVar9[10] +
                           (double)fVar17 * *(double *)(lVar12 + 0x18);
                      local_168._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
                      local_158 = (double)fVar25 * (double)(float)puVar10[0xc] +
                                  (double)fVar23 * *(double *)(lVar13 + 0x28) +
                                  (double)fVar22 * (double)(float)puVar9[0xc] +
                                  (double)fVar17 * *(double *)(lVar12 + 0x28);
                      local_178 = (local_148 - fVar18) * fVar21 + fVar18;
                      local_174 = (local_144 - fVar20) * fVar21 + fVar20;
                      local_170 = (local_140 - fVar19) * fVar21 + fVar19;
                      local_16c = (local_13c + -1.0) * fVar21 + 1.0;
                      if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                         ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                        uVar5 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                              *(longlong *)(local_1d0 + 0x4c0)) {
                            if ((~uVar5 & 0x7fffffff8) != 0) {
                              local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                              goto LAB_147c3a311;
                            }
                            break;
                          }
                          uVar5 = uVar5 + 8;
                        } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                      }
                      local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c3a311:
                      local_1f8 = local_1f8 & 7;
                      local_1e8 = 0;
                      local_1f0 = 0;
                      local_1e0 = 0;
                      (**(code **)(*param_3 + 0x30))(param_3,&local_138,local_168,&local_178);
                      if (uVar4 != 0) {
                        local_178 = 1.0 - fVar21;
                        local_170 = fVar21 + -1.0 + 1.0;
                        local_174 = local_178;
                      }
                      if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                         ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                        uVar5 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                              *(longlong *)(local_1d0 + 0x4c0)) {
                            if ((~uVar5 & 0x7fffffff8) != 0) {
                              local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                              goto LAB_147c3a393;
                            }
                            break;
                          }
                          uVar5 = uVar5 + 8;
                        } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                      }
                      local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c3a393:
                      local_1f8 = local_1f8 & 7;
                      FUN_147cbb242(param_3,local_168,local_1d4,&local_178);
                      local_128 = local_158;
                      local_138 = local_168._0_8_;
                      uStack_130 = local_168._8_8_;
                      uVar4 = uVar4 + 1;
                    } while (uVar4 != uVar7);
                  }
                  param_1 = local_1a0;
                  lVar14 = local_1a8;
                  fVar19 = local_1bc;
                  fVar18 = local_1c0;
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3a4c8;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c3a4c8:
                  local_1f8 = local_1f8 & 7;
                  local_1e8 = 0;
                  local_1f0 = 0;
                  local_1e0 = 0;
                  (**(code **)(*param_3 + 0x30))(param_3,&local_138,local_180,&local_148);
                  uVar7 = *(uint *)(param_1 + 0x34);
                }
              }
              if ((uVar7 & 8) != 0) {
                local_110 = (double)(float)puVar9[0xc] + local_f8;
                local_118 = (double)(float)puVar9[0xb] + (double)CONCAT44(uStack_fc,uStack_100);
                local_120 = (double)(float)puVar9[10] + (double)CONCAT44(uStack_104,local_108);
                if (puVar9 == local_1c8) {
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3a514;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c3a514:
                  local_1f8 = local_1f8 & 7;
                  uVar15 = 0;
                  uVar16 = 0x3f800000;
                }
                else if (puVar9 == local_1b8) {
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3a635;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c3a635:
                  local_1f8 = local_1f8 & 7;
                  uVar15 = 0x3f800000;
                  uVar16 = 0;
                }
                else {
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar5 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar5) ==
                          *(longlong *)(local_1d0 + 0x4c0)) {
                        if ((~uVar5 & 0x7fffffff8) != 0) {
                          local_1f8 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c39e71;
                        }
                        break;
                      }
                      uVar5 = uVar5 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar5);
                  }
                  local_1f8 = *(byte *)(param_2 + 0x6d);
LAB_147c39e71:
                  local_1f8 = local_1f8 & 7;
                  uVar15 = 0x3f800000;
                  uVar16 = 0x3f800000;
                }
                local_138 = CONCAT44(uVar16,uVar15);
                uStack_130 = 0x3f80000000000000;
                local_1e8 = 0;
                local_1f0 = 0;
                local_1e0 = 0;
                (**(code **)(*param_3 + 0x30))(param_3,&local_108,&local_120,&local_138);
              }
            } while ((lVar13 != 0) &&
                    (puVar9 = puVar10, lVar12 = lVar13, fVar20 = fVar19, puVar10 != (uint *)0x0));
            iVar2 = *(int *)(param_1 + 0x54);
            puVar9 = local_1b8;
            lVar13 = local_1b0;
          }
        }
      }
LAB_147c3a7f3:
      puVar10 = puVar9;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar2);
  }
  if ((local_f0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c3a8aa FUN_147c3a8aa body=100 status=ok
// SIG undefined FUN_147c3a8aa(void)

void FUN_147c3a8aa(longlong *param_1,byte param_2)

{
  longlong lVar1;
  
  param_1[5] = (longlong)(param_1 + 9);
  *(uint *)((longlong)param_1 + 0xc) =
       *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe | (uint)param_2;
  lVar1 = (**(code **)(*(longlong *)param_1[0x15] + 0x2f0))();
  param_1[3] = lVar1;
  lVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | (uint)(0 < *(int *)(lVar1 + 0xa0));
  *(undefined8 *)(param_1[5] + 0x60) = 0;
  return;
}



// FUNCTION 147c3a90e FUN_147c3a90e body=6077 status=ok
// SIG undefined FUN_147c3a90e(void)

void FUN_147c3a90e(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_348 [32];
  undefined4 *local_328;
  undefined1 *local_320;
  float *local_318;
  float *local_310;
  undefined8 local_308;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  undefined1 local_2c4 [4];
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined1 local_204 [4];
  undefined1 local_200 [24];
  undefined1 local_1e8 [24];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  uint *puStack_1a0;
  longlong local_198;
  uint *puStack_190;
  longlong local_188;
  uint *local_180;
  longlong local_178;
  uint *puStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  float local_13c;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (((*(byte *)(param_1 + 0x34) & 0xc) != 0) && (iVar4 = *(int *)(param_1 + 0x54), 0 < iVar4)) {
    local_2e8 = param_1 + 0x48;
    lVar9 = *(longlong *)(param_1 + 0x70);
    lVar5 = 0;
    local_2f8 = param_4;
    local_2f0 = lVar9;
    do {
      lVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x78) + lVar5 * 2) *
              (longlong)*(int *)(param_1 + 0x58) + lVar9;
      lVar6 = (longlong)*(int *)(param_1 + 0x130);
      uVar8 = *(uint *)(lVar6 + lVar3) & 0xf0000000;
      if ((uVar8 == 0x40000000) || (uVar8 == 0x10000000)) {
        local_180 = (uint *)(lVar3 + lVar6);
        iVar1 = *(int *)(lVar3 + 8 + lVar6);
        local_1b8 = local_2e8;
        local_1b0 = *(longlong *)(param_1 + 0x70);
        local_198 = 0;
        puStack_190 = (uint *)0x0;
        local_1a8 = 0;
        puStack_1a0 = (uint *)0x0;
        uVar7 = (longlong)(int)*(uint *)(lVar6 + lVar3) & 0x3fff;
        local_178 = (longlong)*(int *)(param_1 + 0x58) * uVar7 + local_1b0;
        puStack_170 = (uint *)(lVar6 + local_178);
        if (uVar7 == 0x3fff) {
          local_178 = 0;
          puStack_170 = (uint *)0x0;
        }
        local_2e0 = lVar5;
        local_188 = lVar3;
        if (lVar3 != 0) {
          fVar15 = 0.0;
LAB_147c3aade:
          puVar11 = local_180;
          lVar9 = local_198;
          fVar14 = (float)local_180[0x10];
          local_f8 = *(double *)(local_188 + 0x28);
          local_108 = *(double *)(local_188 + 0x18);
          dStack_100 = *(double *)(local_188 + 0x20);
          local_110 = *(double *)(local_188 + 0x28) - (double)((float)local_180[0xc] * fVar14);
          dStack_118 = *(double *)(local_188 + 0x20) - (double)((float)local_180[0xb] * fVar14);
          local_120 = *(double *)(local_188 + 0x18) - (double)(fVar14 * (float)local_180[10]);
          local_128 = *(double *)(local_188 + 0x28) + (double)((float)local_180[0xc] * fVar14);
          dStack_130 = *(double *)(local_188 + 0x20) + (double)((float)local_180[0xb] * fVar14);
          local_138 = *(double *)(local_188 + 0x18) + (double)(fVar14 * (float)local_180[10]);
          fVar14 = *(float *)(local_188 + 0x60) * *(float *)(local_1b8 + 0x38);
          local_168 = *(undefined4 *)(local_188 + 0x70);
          uStack_164 = *(undefined4 *)(local_188 + 0x74);
          uStack_160 = *(undefined4 *)(local_188 + 0x78);
          uStack_15c = *(undefined4 *)(local_188 + 0x7c);
          fVar16 = 1.0 / ((float)iVar1 * 0.5) + fVar15;
          uVar8 = *(uint *)(param_1 + 0x34);
          local_13c = fVar14;
          if ((uVar8 & 4) != 0) {
            uVar8 = *local_180 & 0xf0000000;
            bVar2 = *(byte *)(param_2 + 0x6c);
            if (SBORROW4(0,uVar8)) {
              if (((bVar2 & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3af9e;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3af9e:
              local_1d0 = (undefined1 *)CONCAT44(DAT_14c75905c,DAT_14c75905c);
              uStack_1c8 = CONCAT44(0x3f800000,DAT_14c75905c);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              FUN_147cbb242(param_3,&local_108,fVar14,&local_1d0);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3aff5;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3aff5:
              local_1d0 = (undefined1 *)CONCAT44(DAT_14c75905c,DAT_14c75905c);
              uStack_1c8 = CONCAT44(0x3f800000,DAT_14c75905c);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              FUN_147cbb242(param_3,&local_120,fVar14,&local_1d0);
              uVar12 = DAT_14c75905c;
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b05f;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b05f:
              local_1d0 = (undefined1 *)CONCAT44(uVar12,DAT_14c75905c);
LAB_147c3b068:
              uStack_1c8 = CONCAT44(0x3f800000,uVar12);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              FUN_147cbb242(param_3,&local_138,fVar14,&local_1d0);
            }
            else {
              if (uVar8 == 0x10000000) {
                if (((bVar2 & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                        *(longlong *)(param_4 + 0x4c0)) {
                      if ((~uVar7 & 0x7fffffff8) != 0) {
                        bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                        goto LAB_147c3aeb5;
                      }
                      break;
                    }
                    uVar7 = uVar7 + 8;
                  } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                }
                bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3aeb5:
                local_1d0 = (undefined1 *)CONCAT44(DAT_14c758c60,DAT_14c75905c);
                uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
                local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                FUN_147cbb242(param_3,&local_108,fVar14,&local_1d0);
                if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                   ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                        *(longlong *)(param_4 + 0x4c0)) {
                      if ((~uVar7 & 0x7fffffff8) != 0) {
                        bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                        goto LAB_147c3af14;
                      }
                      break;
                    }
                    uVar7 = uVar7 + 8;
                  } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                }
                bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3af14:
                local_1d0 = (undefined1 *)CONCAT44(DAT_14c758c60,DAT_14c75905c);
                uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
                local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                FUN_147cbb242(param_3,&local_120,fVar14,&local_1d0);
                uVar12 = DAT_14c758c60;
                if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                   ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                        *(longlong *)(param_4 + 0x4c0)) {
                      if ((~uVar7 & 0x7fffffff8) != 0) {
                        bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                        goto LAB_147c3b05f;
                      }
                      break;
                    }
                    uVar7 = uVar7 + 8;
                  } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                }
                bVar2 = *(byte *)(param_2 + 0x6d);
                goto LAB_147c3b05f;
              }
              if (uVar8 == 0x40000000) {
                if (((bVar2 & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                        *(longlong *)(param_4 + 0x4c0)) {
                      if ((~uVar7 & 0x7fffffff8) != 0) {
                        bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                        goto LAB_147c3ad4b;
                      }
                      break;
                    }
                    uVar7 = uVar7 + 8;
                  } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                }
                bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3ad4b:
                local_1d0 = (undefined1 *)CONCAT44(DAT_14c75905c,DAT_14c758c60);
                uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
                local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                FUN_147cbb242(param_3,&local_108,fVar14,&local_1d0);
                if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                   ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                        *(longlong *)(param_4 + 0x4c0)) {
                      if ((~uVar7 & 0x7fffffff8) != 0) {
                        bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                        goto LAB_147c3adaa;
                      }
                      break;
                    }
                    uVar7 = uVar7 + 8;
                  } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                }
                bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3adaa:
                local_1d0 = (undefined1 *)CONCAT44(DAT_14c75905c,DAT_14c758c60);
                uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
                local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                FUN_147cbb242(param_3,&local_120,fVar14,&local_1d0);
                if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                   ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                  uVar7 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                        *(longlong *)(param_4 + 0x4c0)) {
                      if ((~uVar7 & 0x7fffffff8) != 0) {
                        bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                        goto LAB_147c3ae09;
                      }
                      break;
                    }
                    uVar7 = uVar7 + 8;
                  } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                }
                bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3ae09:
                local_1d0 = (undefined1 *)CONCAT44(DAT_14c75905c,DAT_14c758c60);
                uVar12 = DAT_14c758c60;
                goto LAB_147c3b068;
              }
              if (((bVar2 & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b7c0;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b7c0:
              uVar10 = (int)((1.0 - fVar15) * 255.0) & 0xff;
              uVar8 = (int)(fVar15 * 255.0) & 0xff;
              local_1d0 = (undefined1 *)CONCAT44((&DAT_14c758c60)[uVar8],(&DAT_14c758c60)[uVar10]);
              uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
              fVar14 = fVar14 * 0.5;
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              FUN_147cbb242(param_3,&local_108,fVar14,&local_1d0);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(local_2f8 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b856;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b856:
              local_1d0 = (undefined1 *)CONCAT44((&DAT_14c758c60)[uVar8],(&DAT_14c758c60)[uVar10]);
              uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              FUN_147cbb242(param_3,&local_120,fVar14,&local_1d0);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(local_2f8 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b8bf;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b8bf:
              local_1d0 = (undefined1 *)CONCAT44((&DAT_14c758c60)[uVar8],(&DAT_14c758c60)[uVar10]);
              uStack_1c8 = CONCAT44(0x3f800000,DAT_14c758c60);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              FUN_147cbb242(param_3,&local_138,fVar14,&local_1d0);
              param_4 = local_2f8;
            }
            uVar8 = *(uint *)(param_1 + 0x34);
            if (lVar9 != 0 && (uVar8 & 0x10) != 0) {
              local_310 = (float *)&local_168;
              local_318 = &local_13c;
              local_320 = local_204;
              local_328 = (undefined4 *)local_200;
              local_308 = 0;
              FUN_147c3c0cc(&local_1b8,0x3f800000,&local_1d0,local_1e8);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b113;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b113:
              local_228 = (double)CONCAT44(DAT_14c758c60,DAT_14c758c60);
              uStack_220 = (double)CONCAT44(0x3f800000,DAT_14c75905c);
              local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
              local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
              (**(code **)(*param_3 + 0x30))(param_3,&local_108,&local_1d0,&local_228);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b188;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b188:
              local_228 = (double)CONCAT44(DAT_14c758c60,DAT_14c758c60);
              uStack_220 = (double)CONCAT44(0x3f800000,DAT_14c75905c);
              local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
              local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
              (**(code **)(*param_3 + 0x30))(param_3,&local_120,local_1e8,&local_228);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3b202;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b202:
              local_228 = (double)CONCAT44(DAT_14c758c60,DAT_14c758c60);
              uStack_220 = (double)CONCAT44(0x3f800000,DAT_14c75905c);
              local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
              local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
              (**(code **)(*param_3 + 0x30))(param_3,&local_138,local_200,&local_228);
              uVar8 = local_180[7];
              local_218 = local_f8;
              local_228 = local_108;
              uStack_220 = dStack_100;
              local_238 = local_110;
              local_248 = local_120;
              dStack_240 = dStack_118;
              local_258 = local_128;
              local_268 = local_138;
              uStack_260 = dStack_130;
              local_278 = (&DAT_14c758c60)[(int)((1.0 - fVar16) * 255.0) & 0xff];
              local_274 = (&DAT_14c758c60)[(int)(fVar16 * 255.0) & 0xff];
              local_270 = DAT_14c758c60;
              local_26c = 0x3f800000;
              if (0 < (int)uVar8) {
                uVar10 = 0;
                do {
                  fVar15 = (float)(int)uVar10 * (1.0 / (float)(int)uVar8);
                  local_310 = &local_2d4;
                  local_318 = &local_13c;
                  local_320 = local_2c4;
                  local_328 = &local_2c0;
                  local_308 = 0;
                  FUN_147c3c0cc(&local_1b8,fVar15,&local_290,&local_2a8);
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar7 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                          *(longlong *)(param_4 + 0x4c0)) {
                        if ((~uVar7 & 0x7fffffff8) != 0) {
                          bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3b3dd;
                        }
                        break;
                      }
                      uVar7 = uVar7 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                  }
                  bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b3dd:
                  local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
                  local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
                  local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                  local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
                  (**(code **)(*param_3 + 0x30))(param_3,&local_228,&local_290,&local_2d4);
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar7 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                          *(longlong *)(param_4 + 0x4c0)) {
                        if ((~uVar7 & 0x7fffffff8) != 0) {
                          bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3b41e;
                        }
                        break;
                      }
                      uVar7 = uVar7 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                  }
                  bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b41e:
                  local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
                  local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
                  local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                  local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
                  (**(code **)(*param_3 + 0x30))(param_3,&local_248,&local_2a8,&local_2d4);
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar7 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                          *(longlong *)(param_4 + 0x4c0)) {
                        if ((~uVar7 & 0x7fffffff8) != 0) {
                          bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3b45f;
                        }
                        break;
                      }
                      uVar7 = uVar7 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                  }
                  bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b45f:
                  local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
                  local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
                  local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                  local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
                  (**(code **)(*param_3 + 0x30))(param_3,&local_268,&local_2c0,&local_2d4);
                  if (uVar10 != 0) {
                    local_2d4 = 1.0 - fVar15;
                    local_2cc = 1.0 - local_2d4;
                    local_2d0 = local_2d4;
                  }
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar7 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                          *(longlong *)(param_4 + 0x4c0)) {
                        if ((~uVar7 & 0x7fffffff8) != 0) {
                          bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3b4c7;
                        }
                        break;
                      }
                      uVar7 = uVar7 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                  }
                  bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b4c7:
                  fVar15 = local_13c * 0.3;
                  local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                  FUN_147cbb242(param_3,&local_290,fVar15,&local_2d4);
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar7 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                          *(longlong *)(param_4 + 0x4c0)) {
                        if ((~uVar7 & 0x7fffffff8) != 0) {
                          bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3b503;
                        }
                        break;
                      }
                      uVar7 = uVar7 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                  }
                  bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b503:
                  local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                  FUN_147cbb242(param_3,&local_2a8,fVar15,&local_2d4);
                  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                     ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                    uVar7 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                          *(longlong *)(param_4 + 0x4c0)) {
                        if ((~uVar7 & 0x7fffffff8) != 0) {
                          bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                          goto LAB_147c3b52e;
                        }
                        break;
                      }
                      uVar7 = uVar7 + 8;
                    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
                  }
                  bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3b52e:
                  local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
                  FUN_147cbb242(param_3,&local_2c0,fVar15,&local_2d4);
                  local_218 = local_280;
                  local_228 = local_290;
                  uStack_220 = dStack_288;
                  local_248 = local_2a8;
                  dStack_240 = dStack_2a0;
                  local_238 = local_298;
                  local_268 = (double)CONCAT44(uStack_2bc,local_2c0);
                  uStack_260 = (double)CONCAT44(uStack_2b4,uStack_2b8);
                  local_258 = local_2b0;
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar8);
              }
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3bc39;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3bc39:
              local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
              local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
              (**(code **)(*param_3 + 0x30))(param_3,&local_228,&local_1d0,&local_278);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3bc78;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3bc78:
              local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
              local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
              (**(code **)(*param_3 + 0x30))(param_3,&local_248,local_1e8,&local_278);
              if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
                 ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
                uVar7 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                      *(longlong *)(param_4 + 0x4c0)) {
                    if ((~uVar7 & 0x7fffffff8) != 0) {
                      bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                      goto LAB_147c3bcbc;
                    }
                    break;
                  }
                  uVar7 = uVar7 + 8;
                } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
              }
              bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3bcbc:
              local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
              local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
              local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
              (**(code **)(*param_3 + 0x30))(param_3,&local_268,local_200,&local_278);
              uVar8 = *(uint *)(param_1 + 0x34);
              puVar11 = local_180;
            }
          }
          if ((uVar8 & 8) != 0) {
            dVar13 = (double)local_13c;
            local_148 = (double)(float)puVar11[0xf] * dVar13 * 3.0 + local_f8;
            local_150 = (double)(float)puVar11[0xe] * dVar13 * 3.0 + dStack_100;
            local_158 = (double)(float)puVar11[0xd] * dVar13 * 3.0 + local_108;
            if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
               ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
              uVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar7) ==
                    *(longlong *)(param_4 + 0x4c0)) {
                  if ((~uVar7 & 0x7fffffff8) != 0) {
                    bVar2 = *(byte *)(param_2 + 0x6d) >> 3;
                    goto LAB_147c3ac5b;
                  }
                  break;
                }
                uVar7 = uVar7 + 8;
              } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar7);
            }
            bVar2 = *(byte *)(param_2 + 0x6d);
LAB_147c3ac5b:
            local_1d0 = &DAT_3f8000003f800000;
            uStack_1c8 = 0x3f80000000000000;
            local_318 = (float *)((ulonglong)local_318 & 0xffffffff00000000);
            local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffff00000000);
            local_328 = (undefined4 *)(CONCAT71(local_328._1_7_,bVar2) & 0xffffffffffffff07);
            local_310 = (float *)((ulonglong)local_310 & 0xffffffffffffff00);
            (**(code **)(*param_3 + 0x30))(param_3,&local_108,&local_158,&local_1d0);
          }
          local_1a8 = local_198;
          puStack_1a0 = puStack_190;
          local_198 = local_188;
          local_188 = local_178;
          local_180 = puStack_170;
          puStack_190 = puVar11;
          if (local_178 != 0) {
            fVar15 = fVar16;
            if (((ulonglong)*puStack_170 & 0x3fff) == 0x3fff) {
              local_178 = 0;
              puStack_170 = (uint *)0x0;
            }
            else {
              local_178 = (longlong)*(int *)(local_1b8 + 0x10) * ((ulonglong)*puStack_170 & 0x3fff)
                          + local_1b0;
              puStack_170 = (uint *)(*(int *)(local_1b8 + 0xe8) + local_178);
            }
            goto LAB_147c3aade;
          }
          iVar4 = *(int *)(param_1 + 0x54);
          lVar5 = local_2e0;
          lVar9 = local_2f0;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if ((local_f0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c3c0cc FUN_147c3c0cc body=4863 status=ok
// SIG undefined FUN_147c3c0cc(void)

void FUN_147c3c0cc(longlong *param_1,float param_2,double *param_3,double *param_4,double *param_5,
                  float *param_6,float *param_7,float *param_8,float *param_9)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
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
  double local_188;
  double local_180;
  double local_178;
  
  if ((param_2 != 0.0) || (NAN(param_2))) {
    lVar17 = param_1[4];
    if (param_2 != 1.0 || lVar17 == 0) {
      lVar20 = param_1[2];
      lVar18 = lVar20;
      if (lVar20 == 0) {
        lVar18 = lVar17;
      }
      lVar3 = param_1[8];
      lVar22 = 0x48;
      lVar19 = lVar3;
      if (lVar3 == 0) {
        lVar19 = param_1[6];
        lVar22 = 0x38;
      }
      pfVar21 = (float *)&DAT_14c7616e0;
      if (lVar3 != 0) {
        pfVar21 = (float *)(param_1[7] + 0x44);
      }
      lVar20 = param_1[(ulonglong)(lVar20 == 0) * 2 + 3];
      lVar3 = *(longlong *)((longlong)param_1 + lVar22);
      fVar24 = *pfVar21;
      lVar22 = param_1[5];
      fVar53 = *(float *)(lVar22 + 0x44) + fVar24;
      pfVar21 = (float *)(param_1[3] + 0x44);
      if (param_1[3] == 0) {
        pfVar21 = (float *)&DAT_14c7616e0;
      }
      fVar42 = *pfVar21 + fVar53;
      fVar44 = (fVar53 - fVar24) * param_2 + fVar24;
      fVar25 = fVar53 - fVar42;
      fVar55 = fVar24 - fVar53;
      fVar47 = 0.0 - fVar24;
      fVar59 = fVar24 - fVar42;
      fVar35 = 0.0 - fVar53;
      bVar8 = 1e-08 < ABS(fVar25);
      bVar9 = 1e-08 < ABS(fVar55);
      bVar5 = 1e-08 < ABS(fVar47);
      bVar6 = 1e-08 < ABS(fVar59);
      bVar7 = 1e-08 < ABS(fVar35);
      if ((bVar7 && (bVar6 && bVar5)) && (bVar9 && bVar8)) {
        fVar52 = (fVar53 - fVar44) * (1.0 / fVar25);
        dVar29 = (double)fVar52;
        fVar37 = (1.0 / fVar25) * (fVar44 - fVar42);
        dVar12 = (double)fVar37;
        fVar50 = (1.0 / fVar55) * (fVar24 - fVar44);
        dVar28 = (double)fVar50;
        fVar27 = (1.0 / fVar55) * (fVar44 - fVar53);
        lVar4 = param_1[6];
        dVar15 = (double)fVar27;
        dVar11 = *(double *)(lVar4 + 0x28) * dVar15 + *(double *)(lVar17 + 0x28) * dVar28;
        dVar30 = *(double *)(lVar4 + 0x20) * dVar15 + *(double *)(lVar17 + 0x20) * dVar28;
        dVar31 = *(double *)(lVar4 + 0x18) * dVar15 + *(double *)(lVar17 + 0x18) * dVar28;
        fVar33 = (fVar44 - fVar24) * (1.0 / fVar47);
        fVar34 = (1.0 / fVar47) * (0.0 - fVar44);
        dVar1 = (double)fVar34;
        dVar41 = (double)fVar33;
        fVar43 = (fVar24 - fVar44) * (1.0 / fVar59);
        dVar2 = (double)fVar43;
        fVar36 = (1.0 / fVar59) * (fVar44 - fVar42);
        dVar10 = (double)fVar36;
        fVar23 = (0.0 - fVar44) * (1.0 / fVar35);
        dVar13 = (double)fVar23;
        fVar26 = (1.0 / fVar35) * (fVar44 - fVar53);
        dVar14 = (double)fVar26;
        local_180 = ((*(double *)(lVar19 + 0x28) * dVar41 + *(double *)(lVar4 + 0x28) * dVar1) *
                     dVar14 + dVar11 * dVar13) * dVar15 +
                    (dVar11 * dVar10 +
                    (*(double *)(lVar17 + 0x28) * dVar12 + *(double *)(lVar18 + 0x28) * dVar29) *
                    dVar2) * dVar28;
        local_188 = ((*(double *)(lVar19 + 0x20) * dVar41 + *(double *)(lVar4 + 0x20) * dVar1) *
                     dVar14 + dVar30 * dVar13) * dVar15 +
                    (dVar30 * dVar10 +
                    (*(double *)(lVar17 + 0x20) * dVar12 + *(double *)(lVar18 + 0x20) * dVar29) *
                    dVar2) * dVar28;
        local_178 = ((dVar41 * *(double *)(lVar19 + 0x18) + *(double *)(lVar4 + 0x18) * dVar1) *
                     dVar14 + dVar31 * dVar13) * dVar15 +
                    (dVar10 * dVar31 +
                    (dVar12 * *(double *)(lVar17 + 0x18) + dVar29 * *(double *)(lVar18 + 0x18)) *
                    dVar2) * dVar28;
        lVar17 = param_1[7];
        fVar40 = fVar27 * *(float *)(lVar17 + 0x30) + *(float *)(lVar22 + 0x30) * fVar50;
        fVar45 = fVar27 * *(float *)(lVar17 + 0x2c) + *(float *)(lVar22 + 0x2c) * fVar50;
        fVar46 = fVar27 * *(float *)(lVar17 + 0x28) + *(float *)(lVar22 + 0x28) * fVar50;
        fVar61 = ((*(float *)(lVar3 + 0x30) * fVar33 + *(float *)(lVar17 + 0x30) * fVar34) * fVar26
                 + fVar40 * fVar23) * fVar27 +
                 (fVar36 * fVar40 +
                 (fVar37 * *(float *)(lVar22 + 0x30) + *(float *)(lVar20 + 0x30) * fVar52) * fVar43)
                 * fVar50;
        fVar40 = ((*(float *)(lVar3 + 0x2c) * fVar33 + *(float *)(lVar17 + 0x2c) * fVar34) * fVar26
                 + fVar45 * fVar23) * fVar27 +
                 (fVar36 * fVar45 +
                 (fVar37 * *(float *)(lVar22 + 0x2c) + *(float *)(lVar20 + 0x2c) * fVar52) * fVar43)
                 * fVar50;
        fVar52 = ((fVar33 * *(float *)(lVar3 + 0x28) + fVar34 * *(float *)(lVar17 + 0x28)) * fVar26
                 + fVar46 * fVar23) * fVar27 +
                 (fVar36 * fVar46 +
                 (fVar37 * *(float *)(lVar22 + 0x28) + fVar52 * *(float *)(lVar20 + 0x28)) * fVar43)
                 * fVar50;
      }
      else {
        local_178 = *(double *)(lVar17 + 0x18);
        local_188 = *(double *)(lVar17 + 0x20);
        local_180 = *(double *)(lVar17 + 0x28);
        fVar52 = *(float *)(lVar22 + 0x28);
        fVar40 = *(float *)(lVar22 + 0x2c);
        fVar61 = *(float *)(lVar22 + 0x30);
      }
      dVar10 = (double)fVar61;
      dVar31 = (double)fVar40;
      dVar2 = (double)fVar52;
      dVar1 = dVar10 * dVar10 + dVar2 * dVar2 + dVar31 * dVar31;
      if (9.99999993922529e-09 < dVar1) {
        dVar1 = 1.0 / SQRT(dVar1);
        dVar2 = dVar2 * dVar1;
        dVar31 = dVar31 * dVar1;
        dVar10 = dVar10 * dVar1;
      }
      if ((bVar7 && (bVar6 && bVar5)) && (bVar9 && bVar8)) {
        fVar40 = *(float *)(*param_1 + 0x38);
        fVar56 = (fVar53 - fVar44) * (1.0 / fVar25);
        fVar46 = (1.0 / fVar25) * (fVar44 - fVar42);
        fVar57 = (1.0 / fVar55) * (fVar24 - fVar44);
        fVar52 = *(float *)(param_1[7] + 0x40);
        fVar38 = (1.0 / fVar55) * (fVar44 - fVar53);
        fVar27 = *(float *)(lVar22 + 0x40) * fVar57 + fVar38 * fVar52;
        fVar54 = (fVar44 - fVar24) * (1.0 / fVar47);
        fVar51 = (1.0 / fVar47) * (0.0 - fVar44);
        fVar60 = (fVar24 - fVar44) * (1.0 / fVar59);
        fVar39 = (1.0 / fVar59) * (fVar44 - fVar42);
        fVar32 = (0.0 - fVar44) * (1.0 / fVar35);
        fVar48 = (1.0 / fVar35) * (fVar44 - fVar53);
        fVar61 = *(float *)(param_1[7] + 0x14);
        fVar52 = ((*(float *)(lVar20 + 0x40) * fVar56 + fVar46 * *(float *)(lVar22 + 0x40)) * fVar60
                 + fVar39 * fVar27) * fVar57 +
                 (fVar27 * fVar32 + (fVar52 * fVar51 + *(float *)(lVar3 + 0x40) * fVar54) * fVar48)
                 * fVar38;
        fVar58 = *(float *)(lVar22 + 0x14) * fVar57 + fVar38 * fVar61;
        fVar27 = *(float *)(lVar18 + 0x60);
        fVar50 = *(float *)(lVar18 + 0x7c);
        fVar37 = *(float *)(lVar18 + 0x78);
        fVar23 = *(float *)(lVar19 + 0x60);
        fVar26 = *(float *)(lVar18 + 0x70);
        fVar33 = *(float *)(lVar18 + 0x74);
        fVar34 = *(float *)(lVar19 + 0x70);
        fVar36 = *(float *)(lVar19 + 0x74);
        fVar43 = *(float *)(lVar19 + 0x78);
        fVar45 = *(float *)(lVar19 + 0x7c);
        *param_6 = ((*(float *)(lVar20 + 0x14) * fVar56 + fVar46 * *(float *)(lVar22 + 0x14)) *
                    fVar60 + fVar39 * fVar58) * fVar57 +
                   (fVar58 * fVar32 + (fVar61 * fVar51 + *(float *)(lVar3 + 0x14) * fVar54) * fVar48
                   ) * fVar38;
        fVar61 = *(float *)(param_1[4] + 0x60) * *(float *)(*param_1 + 0x38);
        fVar49 = *(float *)(*param_1 + 0x38) * *(float *)(param_1[6] + 0x60);
        fVar58 = fVar61 * fVar57 + fVar38 * fVar49;
        *param_7 = ((fVar27 * fVar40 * fVar56 + fVar46 * fVar61) * fVar60 + fVar39 * fVar58) *
                   fVar57 + (fVar58 * fVar32 + (fVar49 * fVar51 + fVar40 * fVar23 * fVar54) * fVar48
                            ) * fVar38;
        lVar17 = param_1[4];
        lVar20 = param_1[6];
        fVar27 = fVar38 * *(float *)(lVar20 + 0x7c) + *(float *)(lVar17 + 0x7c) * fVar57;
        fVar40 = fVar38 * *(float *)(lVar20 + 0x78) + *(float *)(lVar17 + 0x78) * fVar57;
        fVar61 = fVar38 * *(float *)(lVar20 + 0x74) + *(float *)(lVar17 + 0x74) * fVar57;
        fVar23 = fVar38 * *(float *)(lVar20 + 0x70) + *(float *)(lVar17 + 0x70) * fVar57;
        fVar50 = ((fVar45 * fVar54 + *(float *)(lVar20 + 0x7c) * fVar51) * fVar48 + fVar27 * fVar32)
                 * fVar38 +
                 (fVar39 * fVar27 + (fVar46 * *(float *)(lVar17 + 0x7c) + fVar50 * fVar56) * fVar60)
                 * fVar57;
        fVar27 = ((fVar43 * fVar54 + *(float *)(lVar20 + 0x78) * fVar51) * fVar48 + fVar40 * fVar32)
                 * fVar38 +
                 (fVar39 * fVar40 + (fVar46 * *(float *)(lVar17 + 0x78) + fVar37 * fVar56) * fVar60)
                 * fVar57;
        fVar61 = ((fVar36 * fVar54 + *(float *)(lVar20 + 0x74) * fVar51) * fVar48 + fVar61 * fVar32)
                 * fVar38 +
                 (fVar39 * fVar61 + (fVar46 * *(float *)(lVar17 + 0x74) + fVar33 * fVar56) * fVar60)
                 * fVar57;
        fVar40 = ((fVar54 * fVar34 + fVar51 * *(float *)(lVar20 + 0x70)) * fVar48 + fVar23 * fVar32)
                 * fVar38 +
                 (fVar39 * fVar23 + (fVar46 * *(float *)(lVar17 + 0x70) + fVar56 * fVar26) * fVar60)
                 * fVar57;
      }
      else {
        fVar52 = *(float *)(lVar22 + 0x40);
        *param_6 = *(float *)(lVar22 + 0x14);
        *param_7 = *(float *)(*param_1 + 0x38) * *(float *)(param_1[4] + 0x60);
        lVar17 = param_1[4];
        fVar40 = *(float *)(lVar17 + 0x70);
        fVar61 = *(float *)(lVar17 + 0x74);
        fVar27 = *(float *)(lVar17 + 0x78);
        fVar50 = *(float *)(lVar17 + 0x7c);
      }
      *param_8 = fVar40;
      param_8[1] = fVar61;
      param_8[2] = fVar27;
      param_8[3] = fVar50;
      if (param_9 != (float *)0x0) {
        lVar17 = param_1[4];
        lVar20 = (longlong)*(int *)(*param_1 + 0xa0);
        fVar40 = *(float *)(lVar17 + lVar20);
        fVar61 = *(float *)(lVar17 + 4 + lVar20);
        fVar27 = *(float *)(lVar17 + 8 + lVar20);
        fVar50 = *(float *)(lVar17 + 0xc + lVar20);
        if ((bVar7 && (bVar6 && bVar5)) && (bVar9 && bVar8)) {
          fVar23 = (fVar53 - fVar44) * (1.0 / fVar25);
          fVar54 = (1.0 / fVar25) * (fVar44 - fVar42);
          lVar17 = param_1[6];
          fVar33 = (1.0 / fVar55) * (fVar24 - fVar44);
          fVar36 = (1.0 / fVar55) * (fVar44 - fVar53);
          fVar25 = *(float *)(lVar17 + 0xc + lVar20);
          fVar26 = fVar36 * fVar25 + fVar50 * fVar33;
          fVar55 = *(float *)(lVar17 + 8 + lVar20);
          fVar58 = fVar36 * fVar55 + fVar27 * fVar33;
          fVar37 = *(float *)(lVar17 + 4 + lVar20);
          fVar45 = fVar36 * fVar37 + fVar61 * fVar33;
          fVar34 = fVar36 * *(float *)(lVar17 + lVar20) + fVar40 * fVar33;
          fVar43 = (fVar44 - fVar24) * (1.0 / fVar47);
          fVar47 = (1.0 / fVar47) * (0.0 - fVar44);
          fVar46 = (fVar24 - fVar44) * (1.0 / fVar59);
          fVar24 = (1.0 / fVar59) * (fVar44 - fVar42);
          fVar42 = (0.0 - fVar44) * (1.0 / fVar35);
          fVar53 = (1.0 / fVar35) * (fVar44 - fVar53);
          fVar50 = ((*(float *)(lVar19 + 0xc + lVar20) * fVar43 + fVar25 * fVar47) * fVar53 +
                   fVar26 * fVar42) * fVar36 +
                   (fVar24 * fVar26 +
                   (fVar54 * fVar50 + *(float *)(lVar18 + 0xc + lVar20) * fVar23) * fVar46) * fVar33
          ;
          fVar27 = ((*(float *)(lVar19 + 8 + lVar20) * fVar43 + fVar55 * fVar47) * fVar53 +
                   fVar58 * fVar42) * fVar36 +
                   (fVar24 * fVar58 +
                   (fVar54 * fVar27 + *(float *)(lVar18 + 8 + lVar20) * fVar23) * fVar46) * fVar33;
          fVar61 = ((*(float *)(lVar19 + 4 + lVar20) * fVar43 + fVar37 * fVar47) * fVar53 +
                   fVar45 * fVar42) * fVar36 +
                   (fVar24 * fVar45 +
                   (fVar54 * fVar61 + *(float *)(lVar18 + 4 + lVar20) * fVar23) * fVar46) * fVar33;
          fVar40 = (fVar53 * (fVar43 * *(float *)(lVar19 + lVar20) +
                             fVar47 * *(float *)(lVar17 + lVar20)) + fVar42 * fVar34) * fVar36 +
                   (fVar24 * fVar34 +
                   fVar46 * (fVar54 * fVar40 + fVar23 * *(float *)(lVar18 + lVar20))) * fVar33;
        }
        *param_9 = fVar40;
        param_9[1] = fVar61;
        param_9[2] = fVar27;
        param_9[3] = fVar50;
      }
      dVar1 = (double)fVar52;
      *param_4 = local_178 - dVar2 * dVar1;
      param_4[1] = local_188 - dVar31 * dVar1;
      param_4[2] = local_180 - dVar10 * dVar1;
      *param_5 = dVar2 * dVar1 + local_178;
      param_5[1] = dVar31 * dVar1 + local_188;
      param_5[2] = dVar10 * dVar1 + local_180;
      *param_3 = local_178;
      param_3[1] = local_188;
      param_3[2] = local_180;
      return;
    }
    lVar20 = param_1[5];
    fVar24 = *(float *)(lVar20 + 0x40);
    dVar31 = (double)(*(float *)(lVar20 + 0x30) * fVar24);
    dVar28 = (double)(*(float *)(lVar20 + 0x2c) * fVar24);
    dVar10 = (double)(fVar24 * *(float *)(lVar20 + 0x28));
    param_3[2] = *(double *)(lVar17 + 0x28);
    dVar1 = *(double *)(lVar17 + 0x20);
    *param_3 = *(double *)(lVar17 + 0x18);
    param_3[1] = dVar1;
    lVar17 = param_1[4];
    dVar1 = *(double *)(lVar17 + 0x28);
    dVar2 = *(double *)(lVar17 + 0x20);
    *param_4 = *(double *)(lVar17 + 0x18) - dVar10;
    param_4[1] = dVar2 - dVar28;
    param_4[2] = dVar1 - dVar31;
    lVar17 = param_1[4];
    dVar1 = *(double *)(lVar17 + 0x28);
    dVar2 = *(double *)(lVar17 + 0x20);
    *param_5 = dVar10 + *(double *)(lVar17 + 0x18);
    param_5[1] = dVar28 + dVar2;
    param_5[2] = dVar31 + dVar1;
    *param_6 = *(float *)(param_1[5] + 0x14);
    *param_7 = *(float *)(param_1[4] + 0x60) * *(float *)(*param_1 + 0x38);
    uVar16 = *(undefined8 *)(param_1[4] + 0x78);
    *(undefined8 *)param_8 = *(undefined8 *)(param_1[4] + 0x70);
    *(undefined8 *)(param_8 + 2) = uVar16;
    if (param_9 == (float *)0x0) {
      return;
    }
    lVar17 = *param_1;
    lVar20 = param_1[4];
  }
  else {
    lVar17 = param_1[6];
    lVar20 = param_1[7];
    fVar24 = *(float *)(lVar20 + 0x40);
    dVar31 = (double)(*(float *)(lVar20 + 0x30) * fVar24);
    dVar28 = (double)(*(float *)(lVar20 + 0x2c) * fVar24);
    dVar10 = (double)(fVar24 * *(float *)(lVar20 + 0x28));
    param_3[2] = *(double *)(lVar17 + 0x28);
    dVar1 = *(double *)(lVar17 + 0x20);
    *param_3 = *(double *)(lVar17 + 0x18);
    param_3[1] = dVar1;
    lVar17 = param_1[6];
    dVar1 = *(double *)(lVar17 + 0x28);
    dVar2 = *(double *)(lVar17 + 0x20);
    *param_4 = *(double *)(lVar17 + 0x18) - dVar10;
    param_4[1] = dVar2 - dVar28;
    param_4[2] = dVar1 - dVar31;
    lVar17 = param_1[6];
    dVar1 = *(double *)(lVar17 + 0x28);
    dVar2 = *(double *)(lVar17 + 0x20);
    *param_5 = dVar10 + *(double *)(lVar17 + 0x18);
    param_5[1] = dVar28 + dVar2;
    param_5[2] = dVar31 + dVar1;
    *param_6 = *(float *)(param_1[7] + 0x14);
    *param_7 = *(float *)(param_1[6] + 0x60) * *(float *)(*param_1 + 0x38);
    uVar16 = *(undefined8 *)(param_1[6] + 0x78);
    *(undefined8 *)param_8 = *(undefined8 *)(param_1[6] + 0x70);
    *(undefined8 *)(param_8 + 2) = uVar16;
    if (param_9 == (float *)0x0) {
      return;
    }
    lVar17 = *param_1;
    lVar20 = param_1[6];
  }
  lVar17 = (longlong)*(int *)(lVar17 + 0xa0);
  *param_9 = *(float *)(lVar20 + lVar17);
  param_9[1] = *(float *)(lVar20 + 4 + lVar17);
  param_9[2] = *(float *)(lVar20 + 8 + lVar17);
  param_9[3] = *(float *)(lVar20 + 0xc + lVar17);
  return;
}



// FUNCTION 147c3d3cc FUN_147c3d3cc body=894 status=ok
// SIG undefined FUN_147c3d3cc(void)

undefined8 * FUN_147c3d3cc(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x668) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x668) + 0x18);
  }
  FUN_1406ff4f8(param_1,param_2,uVar8);
  *param_1 = &PTR_FUN_14aa061a0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = *(undefined8 *)(param_2 + 0xa8);
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfe | *(byte *)(param_2 + 0x2d6) >> 1 & 1
  ;
  cVar7 = FUN_147c00e0a(param_2);
  *(byte *)(param_1 + 0x56) = param_4 << 2 | cVar7 * '\x02' | *(byte *)(param_1 + 0x56) & 0xf1;
  *(undefined1 *)((longlong)param_1 + 0x2b1) = *(undefined1 *)(param_1[0x42] + 8);
  iVar4 = *(int *)(param_2 + 0x730);
  if ((longlong)iVar4 < 0) {
    if ((iVar4 != -1) || (*(int *)(param_2 + 0x758) < 1)) goto LAB_147c3d4c9;
    puVar1 = *(undefined4 **)(param_2 + 0x750);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    uVar13 = puVar1[2];
    uVar14 = puVar1[3];
  }
  else {
    if (*(int *)(param_2 + 0x758) <= iVar4) {
LAB_147c3d4c9:
      param_1[0x57] = 0;
      goto LAB_147c3d4d0;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x750) + (longlong)iVar4 * 0x10);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    uVar13 = puVar1[2];
    uVar14 = puVar1[3];
  }
  *(undefined4 *)(param_1 + 0x57) = uVar11;
  *(undefined4 *)((longlong)param_1 + 700) = uVar12;
  *(undefined4 *)(param_1 + 0x58) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar14;
LAB_147c3d4d0:
  param_1[0x59] = param_3;
  param_1[0x5a] = 0;
  uVar8 = FUN_14001cc68(0xe8,0x10);
  FUN_1401a700c(local_60,0x3e);
  local_70 = 0x3f800000;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0x3f800000;
  local_78 = 1;
  bVar10 = 0;
  FUN_147cbb733(local_60,&local_70,0,0);
  if (*(longlong **)(DAT_14cb0d2b0 + 0x480) == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x480) + 0x2f0))();
  }
  FUN_14089e406(uVar8,uVar9,local_60,local_60[0]);
  param_1[0x5b] = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x730);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xffffffff;
  FUN_144a7f8ec(param_1 + 0x5e);
  param_1[0x5e] = &PTR_FUN_14a1ca300;
  *(undefined4 *)(param_1 + 0x60) = 2;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x315) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 4;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 2) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_2 + 0x69d);
  if (*(longlong *)(param_2 + 0x668) != 0) {
    cVar7 = FUN_147bffc00(*(longlong *)(param_2 + 0x668),*(undefined4 *)(param_2 + 0x730));
    bVar10 = cVar7 << 7;
  }
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x7f | bVar10;
  if ((((*(byte *)(param_1 + 0x56) & 4) != 0) &&
      (lVar5 = *(longlong *)(param_2 + 0x668), lVar5 != 0)) && (*(char *)(lVar5 + 0xf1) == '\x02'))
  {
    dVar2 = *(double *)(lVar5 + 0x128);
    dVar3 = *(double *)(lVar5 + 0x120);
    dVar6 = (*(double *)(lVar5 + 0x140) - dVar2) * 0.5;
    dVar15 = (*(double *)(lVar5 + 0x138) - dVar3) * 0.5;
    dVar16 = (*(double *)(lVar5 + 0x130) - *(double *)(lVar5 + 0x118)) * 0.5;
    param_1[0x6b] = *(double *)(lVar5 + 0x118) + dVar16;
    param_1[0x6c] = dVar3 + dVar15;
    param_1[0x6d] = dVar2 + dVar6;
    param_1[0x6e] = dVar16;
    param_1[0x6f] = dVar15;
    param_1[0x70] = dVar6;
    param_1[0x71] = SQRT(dVar6 * dVar6 + dVar16 * dVar16 + dVar15 * dVar15);
    *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) | 8;
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c3d754 FUN_147c3d754 body=172 status=ok
// SIG undefined FUN_147c3d754(void)

void FUN_147c3d754(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1435f928e();
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  if (lVar1 != 0) {
    FUN_147c4179e(lVar1);
    if (*(longlong *)(lVar1 + 0x68) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x2d8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1400020a8();
  }
  FUN_147c3d800(param_1 + 800);
  FUN_14006f2ae(param_1 + 0x2f0);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 147c3d800 FUN_147c3d800 body=62 status=ok
// SIG undefined FUN_147c3d800(void)

void FUN_147c3d800(longlong param_1)

{
  FUN_147c447a6();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_141148b2e(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c3d84c FUN_147c3d84c body=99 status=ok
// SIG undefined FUN_147c3d84c(void)

undefined8 * FUN_147c3d84c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x2b0) & 4) == 0) {
    param_2[6] = *(undefined8 *)(param_1 + 0x1b0);
    uVar1 = *(undefined8 *)(param_1 + 0x180);
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    uVar3 = *(undefined8 *)(param_1 + 400);
    uVar4 = *(undefined8 *)(param_1 + 0x198);
    uVar5 = *(undefined8 *)(param_1 + 0x1a8);
    param_2[4] = *(undefined8 *)(param_1 + 0x1a0);
    param_2[5] = uVar5;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  else {
    FUN_144b0fb1a(param_1 + 0x358,param_2,param_1 + 0x100);
  }
  return param_2;
}



// FUNCTION 147c3d8b0 FUN_147c3d8b0 body=36 status=ok
// SIG undefined FUN_147c3d8b0(void)

void FUN_147c3d8b0(longlong param_1)

{
  FUN_144725486(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x318) = 0;
  return;
}



// FUNCTION 147c3d8dc FUN_147c3d8dc body=926 status=ok
// SIG undefined FUN_147c3d8dc(void)

void FUN_147c3d8dc(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar3 + 0x268);
      uVar1 = *(undefined8 *)(lVar3 + 0x270);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar3 + 0x260);
      *(undefined8 *)(param_1 + 0x1e0) = uVar9;
      *(undefined8 *)(param_1 + 0x1e8) = uVar1;
      uVar17 = *(undefined4 *)(lVar3 + 0x264);
      uVar20 = *(undefined4 *)(lVar3 + 0x268);
      uVar19 = *(undefined4 *)(lVar3 + 0x26c);
      uVar1 = *(undefined8 *)(lVar3 + 0x270);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar3 + 0x260);
      *(undefined4 *)(param_1 + 0x1c4) = uVar17;
      *(undefined4 *)(param_1 + 0x1c8) = uVar20;
      *(undefined4 *)(param_1 + 0x1cc) = uVar19;
      *(undefined8 *)(param_1 + 0x1d0) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0x1e8) = DAT_14c8464f0;
      uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(ulonglong *)(param_1 + 0x1d8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(param_1 + 0x1e0) = uVar1;
      uVar19 = DAT_14c8464e8._4_4_;
      uVar20 = (undefined4)DAT_14c8464e8;
      uVar17 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x1c0) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(param_1 + 0x1c4) = uVar17;
      *(undefined4 *)(param_1 + 0x1c8) = uVar20;
      *(undefined4 *)(param_1 + 0x1cc) = uVar19;
      *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f0;
    }
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    if (0 < (longlong)*(int *)(param_1 + 0x18c)) {
      lVar5 = *(longlong *)(param_1 + 0x168);
      dVar12 = -3.4028234663852886e+38;
      lVar11 = 0;
      dVar15 = 3.4028234663852886e+38;
      uVar17 = 0xe0000000;
      uVar20 = 0x47efffff;
      uVar19 = 0xe0000000;
      uVar22 = 0x47efffff;
      dVar13 = dVar12;
      dVar14 = dVar12;
      do {
        lVar10 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar11 * 2) *
                 (longlong)*(int *)(param_1 + 0x188);
        dVar6 = *(double *)(lVar5 + 0x28 + lVar10) -
                ABS((double)*(float *)(lVar5 + 0x68 + lVar10) * *(double *)(lVar3 + 0x290));
        dVar7 = *(double *)(lVar5 + 0x20 + lVar10) -
                ABS((double)*(float *)(lVar5 + 100 + lVar10) * *(double *)(lVar3 + 0x288));
        dVar8 = *(double *)(lVar5 + 0x18 + lVar10) -
                ABS((double)*(float *)(lVar5 + 0x60 + lVar10) * *(double *)(lVar3 + 0x280));
        dVar16 = dVar6;
        if (dVar15 <= dVar6) {
          dVar16 = dVar15;
        }
        uVar18 = SUB84(dVar7,0);
        uVar21 = (int)((ulonglong)dVar7 >> 0x20);
        if ((double)CONCAT44(uVar20,uVar17) <= dVar7) {
          uVar18 = uVar17;
          uVar21 = uVar20;
        }
        uVar23 = SUB84(dVar8,0);
        uVar24 = (int)((ulonglong)dVar8 >> 0x20);
        if ((double)CONCAT44(uVar22,uVar19) <= dVar8) {
          uVar23 = uVar19;
          uVar24 = uVar22;
        }
        if (dVar6 <= dVar12) {
          dVar6 = dVar12;
        }
        if (dVar7 <= dVar13) {
          dVar7 = dVar13;
        }
        if (dVar8 <= dVar14) {
          dVar8 = dVar14;
        }
        lVar11 = lVar11 + 1;
        dVar15 = dVar16;
        uVar17 = uVar18;
        uVar20 = uVar21;
        uVar19 = uVar23;
        uVar22 = uVar24;
        dVar12 = dVar6;
        dVar13 = dVar7;
        dVar14 = dVar8;
      } while (*(int *)(param_1 + 0x18c) != lVar11);
      dVar12 = *(double *)(param_1 + 0x1c0);
      dVar13 = *(double *)(param_1 + 0x1c8);
      if ((double)CONCAT44(uVar24,uVar23) <= dVar12) {
        dVar12 = (double)CONCAT44(uVar24,uVar23);
      }
      if ((double)CONCAT44(uVar21,uVar18) <= dVar13) {
        dVar13 = (double)CONCAT44(uVar21,uVar18);
      }
      dVar14 = *(double *)(param_1 + 0x1d0);
      if (dVar16 <= *(double *)(param_1 + 0x1d0)) {
        dVar14 = dVar16;
      }
      dVar15 = *(double *)(param_1 + 0x1d8);
      if (dVar15 <= (double)CONCAT44(uVar24,uVar23)) {
        dVar15 = (double)CONCAT44(uVar24,uVar23);
      }
      dVar2 = *(double *)(param_1 + 0x1e0);
      uVar17 = SUB84(dVar2,0);
      uVar20 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= (double)CONCAT44(uVar21,uVar18)) {
        uVar17 = uVar18;
        uVar20 = uVar21;
      }
      dVar2 = *(double *)(param_1 + 0x1e8);
      uVar19 = SUB84(dVar2,0);
      uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dVar16) {
        uVar19 = SUB84(dVar16,0);
        uVar22 = (undefined4)((ulonglong)dVar16 >> 0x20);
      }
      if (dVar8 <= dVar12) {
        dVar12 = dVar8;
      }
      *(double *)(param_1 + 0x1c0) = dVar12;
      if (dVar7 <= dVar13) {
        dVar13 = dVar7;
      }
      *(double *)(param_1 + 0x1c8) = dVar13;
      if (dVar6 <= dVar14) {
        dVar14 = dVar6;
      }
      *(double *)(param_1 + 0x1d0) = dVar14;
      if (dVar15 <= dVar8) {
        dVar15 = dVar8;
      }
      *(double *)(param_1 + 0x1d8) = dVar15;
      dVar12 = (double)CONCAT44(uVar20,uVar17);
      if ((double)CONCAT44(uVar20,uVar17) <= dVar7) {
        dVar12 = dVar7;
      }
      *(double *)(param_1 + 0x1e0) = dVar12;
      dVar12 = (double)CONCAT44(uVar22,uVar19);
      if ((double)CONCAT44(uVar22,uVar19) <= dVar6) {
        dVar12 = dVar6;
      }
      *(double *)(param_1 + 0x1e8) = dVar12;
    }
    if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) != 0) {
      FUN_144a1c3a2((undefined4 *)(param_1 + 0x1c0),&local_f8,lVar3 + 0x240);
      *(undefined8 *)(param_1 + 0x1f0) = local_c8;
      *(undefined8 *)(param_1 + 0x1e0) = local_d8;
      *(undefined8 *)(param_1 + 0x1e8) = uStack_d0;
      *(undefined8 *)(param_1 + 0x1d0) = local_e8;
      *(undefined8 *)(param_1 + 0x1d8) = uStack_e0;
      *(undefined4 *)(param_1 + 0x1c0) = local_f8;
      *(undefined4 *)(param_1 + 0x1c4) = uStack_f4;
      *(undefined4 *)(param_1 + 0x1c8) = uStack_f0;
      *(undefined4 *)(param_1 + 0x1cc) = uStack_ec;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c3dc7e FUN_147c3dc7e body=270 status=ok
// SIG undefined FUN_147c3dc7e(void)

void FUN_147c3dc7e(longlong *param_1,uint param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  
  if (0 < (longlong)*(int *)((longlong)param_1 + 0x18c)) {
    lVar6 = 0;
    do {
      lVar2 = (ulonglong)*(ushort *)(param_1[0x2e] + lVar6 * 2) * (longlong)(int)param_1[0x31] +
              param_1[0x2d];
      if ((SBORROW4(0,*(uint *)(*(int *)((longlong)param_1 + 0x24) + lVar2) & 0xf0000000)) &&
         (puVar4 = (uint *)(lVar2 + *(int *)((longlong)param_1 + 0x24)), puVar4[1] == param_2)) {
        if ((param_3 < 1 || lVar2 == 0) || puVar4 == (uint *)0x0) {
          return;
        }
        iVar5 = 1;
        goto LAB_147c3dd0f;
      }
      lVar6 = lVar6 + 1;
    } while (*(int *)((longlong)param_1 + 0x18c) != lVar6);
  }
  return;
LAB_147c3dd0f:
  *(undefined4 *)(lVar2 + 0x90) = 0x3f8ccccd;
  uVar3 = *puVar4 >> 0xe & 0x3fff;
  if (uVar3 != 0x3fff) {
    lVar2 = (longlong)(int)param_1[0x31] * (ulonglong)uVar3 + param_1[0x2d];
    puVar4 = (uint *)(lVar2 + *(int *)((longlong)param_1 + 0x24));
    uVar3 = *(uint *)(*(int *)((longlong)param_1 + 0x24) + lVar2) & 0xf0000000;
    if (uVar3 == 0x10000000) {
      puVar4[2] = 0;
      puVar4[7] = 1;
    }
    else if (uVar3 == 0x40000000) {
LAB_147c3dd7c:
                    /* WARNING: Could not recover jumptable at 0x000147c3dd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xe0))();
      return;
    }
  }
  if ((puVar4 == (uint *)0x0) || (bVar1 = param_3 <= iVar5, iVar5 = iVar5 + 1, bVar1))
  goto LAB_147c3dd7c;
  goto LAB_147c3dd0f;
}



// FUNCTION 147c3ddfe FUN_147c3ddfe body=172 status=ok
// SIG undefined FUN_147c3ddfe(void)

undefined8 * FUN_147c3ddfe(undefined8 *param_1)

{
  FUN_147c3deaa();
  *param_1 = &PTR_FUN_14aa067c0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  memset(param_1 + 0x60,0,0xc0);
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 2;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  return param_1;
}



// FUNCTION 147c3deaa FUN_147c3deaa body=115 status=ok
// SIG undefined FUN_147c3deaa(void)

undefined8 * FUN_147c3deaa(undefined8 *param_1)

{
  FUN_147bf5ae4();
  *param_1 = &PTR_FUN_14aa07110;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfe;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(uint *)(param_1 + 0x5b) = (*(uint *)(param_1 + 0x5b) & 0xfffffffc) + 1;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  return param_1;
}



// FUNCTION 147c3df1e FUN_147c3df1e body=303 status=ok
// SIG undefined FUN_147c3df1e(void)

void FUN_147c3df1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa067c0;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_147c3e04e(param_1);
  return;
}



// FUNCTION 147c3e04e FUN_147c3e04e body=99 status=ok
// SIG undefined FUN_147c3e04e(void)

void FUN_147c3e04e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa07110;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_147bf5e58(param_1);
  return;
}



// FUNCTION 147c3e0b2 FUN_147c3e0b2 body=2643 status=ok
// SIG undefined FUN_147c3e0b2(void)

void FUN_147c3e0b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  FUN_1435bafcc();
  if (*(int *)(param_2 + 0x48) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_2 + 0x40);
  }
  lVar1 = *(longlong *)(lVar1 + 0x48);
  *(longlong *)(param_1 + 0x2e0) = lVar1;
  if (*(int *)(lVar1 + 0x38) < 1) {
    *(undefined4 *)(lVar1 + 0x38) = 1;
    lVar1 = *(longlong *)(param_1 + 0x2e0);
  }
  *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) & 0xfffffffe | *(uint *)(lVar1 + 0x40) & 1
  ;
  uVar6 = *(uint *)(lVar1 + 0x38);
  *(uint *)(param_1 + 0x284) = uVar6;
  if (-1 < (int)uVar6) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    iVar4 = 0;
    uVar2 = uVar6;
    if (*(uint *)(param_1 + 0x2a4) != uVar6) {
      FUN_14482f6fa(param_1 + 0x298);
      uVar6 = *(uint *)(param_1 + 0x284);
      iVar4 = *(int *)(param_1 + 0x2a0);
      uVar2 = *(uint *)(param_1 + 0x2a4);
    }
    *(uint *)(param_1 + 0x2a0) = uVar6 + iVar4;
    if (uVar2 - iVar4 < uVar6) {
      FUN_14475e4ac(param_1 + 0x298);
    }
    iVar5 = 0;
    memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0x298)),0,
           (longlong)(int)uVar6 << 2);
    uVar6 = *(uint *)(param_1 + 0x284);
    if (-1 < (int)uVar6) {
      *(undefined4 *)(param_1 + 0x308) = 0;
      uVar2 = uVar6;
      if (*(uint *)(param_1 + 0x30c) != uVar6) {
        FUN_1447a8aa0(param_1 + 0x300);
        uVar6 = *(uint *)(param_1 + 0x284);
        iVar5 = *(int *)(param_1 + 0x308);
        uVar2 = *(uint *)(param_1 + 0x30c);
      }
      *(uint *)(param_1 + 0x308) = uVar6 + iVar5;
      if (uVar2 - iVar5 < uVar6) {
        FUN_1403e3958(param_1 + 0x300);
      }
      iVar4 = 0;
      memset((void *)((longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x300)),0,
             (longlong)(int)uVar6 * 0x18);
      uVar6 = *(uint *)(param_1 + 0x284);
      if (-1 < (int)uVar6) {
        *(undefined4 *)(param_1 + 0x318) = 0;
        uVar2 = uVar6;
        if (*(uint *)(param_1 + 0x31c) != uVar6) {
          FUN_1401017f4(param_1 + 0x310);
          uVar6 = *(uint *)(param_1 + 0x284);
          iVar4 = *(int *)(param_1 + 0x318);
          uVar2 = *(uint *)(param_1 + 0x31c);
        }
        *(uint *)(param_1 + 0x318) = uVar6 + iVar4;
        if (uVar2 - iVar4 < uVar6) {
          FUN_140e16be0(param_1 + 0x310);
        }
        iVar5 = 0;
        memset((void *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x310)),0,
               (longlong)(int)uVar6 << 5);
        uVar6 = *(uint *)(param_1 + 0x284);
        if (-1 < (int)uVar6) {
          *(undefined4 *)(param_1 + 0x328) = 0;
          uVar2 = uVar6;
          if (*(uint *)(param_1 + 0x32c) != uVar6) {
            FUN_1447a8aa0(param_1 + 800);
            uVar6 = *(uint *)(param_1 + 0x284);
            iVar5 = *(int *)(param_1 + 0x328);
            uVar2 = *(uint *)(param_1 + 0x32c);
          }
          *(uint *)(param_1 + 0x328) = uVar6 + iVar5;
          if (uVar2 - iVar5 < uVar6) {
            FUN_1403e3958(param_1 + 800);
          }
          iVar4 = 0;
          memset((void *)((longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 800)),0,
                 (longlong)(int)uVar6 * 0x18);
          uVar6 = *(uint *)(param_1 + 0x284);
          if (-1 < (int)uVar6) {
            *(undefined4 *)(param_1 + 0x338) = 0;
            uVar2 = uVar6;
            if (*(uint *)(param_1 + 0x33c) != uVar6) {
              FUN_1447a8aa0(param_1 + 0x330);
              uVar6 = *(uint *)(param_1 + 0x284);
              iVar4 = *(int *)(param_1 + 0x338);
              uVar2 = *(uint *)(param_1 + 0x33c);
            }
            *(uint *)(param_1 + 0x338) = uVar6 + iVar4;
            if (uVar2 - iVar4 < uVar6) {
              FUN_1403e3958(param_1 + 0x330);
            }
            iVar5 = 0;
            memset((void *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 0x330)),0,
                   (longlong)(int)uVar6 * 0x18);
            uVar6 = *(uint *)(param_1 + 0x284);
            if (-1 < (int)uVar6) {
              *(undefined4 *)(param_1 + 0x348) = 0;
              uVar2 = uVar6;
              if (*(uint *)(param_1 + 0x34c) != uVar6) {
                FUN_14482f6fa(param_1 + 0x340);
                uVar6 = *(uint *)(param_1 + 0x284);
                iVar5 = *(int *)(param_1 + 0x348);
                uVar2 = *(uint *)(param_1 + 0x34c);
              }
              *(uint *)(param_1 + 0x348) = uVar6 + iVar5;
              if (uVar2 - iVar5 < uVar6) {
                FUN_14475e4ac(param_1 + 0x340);
              }
              iVar4 = 0;
              memset((void *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x340)),0,
                     (longlong)(int)uVar6 << 2);
              uVar6 = *(uint *)(param_1 + 0x284);
              if (-1 < (int)uVar6) {
                *(undefined4 *)(param_1 + 0x358) = 0;
                uVar2 = uVar6;
                if (*(uint *)(param_1 + 0x35c) != uVar6) {
                  FUN_1447a8aa0(param_1 + 0x350);
                  uVar6 = *(uint *)(param_1 + 0x284);
                  iVar4 = *(int *)(param_1 + 0x358);
                  uVar2 = *(uint *)(param_1 + 0x35c);
                }
                *(uint *)(param_1 + 0x358) = uVar6 + iVar4;
                if (uVar2 - iVar4 < uVar6) {
                  FUN_1403e3958(param_1 + 0x350);
                }
                iVar5 = 0;
                memset((void *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 0x350)),0,
                       (longlong)(int)uVar6 * 0x18);
                uVar6 = *(uint *)(param_1 + 0x284);
                if (-1 < (int)uVar6) {
                  *(undefined4 *)(param_1 + 0x368) = 0;
                  uVar2 = uVar6;
                  if (*(uint *)(param_1 + 0x36c) != uVar6) {
                    FUN_1401017f4(param_1 + 0x360);
                    uVar6 = *(uint *)(param_1 + 0x284);
                    iVar5 = *(int *)(param_1 + 0x368);
                    uVar2 = *(uint *)(param_1 + 0x36c);
                  }
                  *(uint *)(param_1 + 0x368) = uVar6 + iVar5;
                  if (uVar2 - iVar5 < uVar6) {
                    FUN_140e16be0(param_1 + 0x360);
                  }
                  iVar4 = 0;
                  memset((void *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x360)),0,
                         (longlong)(int)uVar6 << 5);
                  uVar6 = *(uint *)(param_1 + 0x284);
                  if (-1 < (int)uVar6) {
                    *(undefined4 *)(param_1 + 0x378) = 0;
                    uVar2 = uVar6;
                    if (*(uint *)(param_1 + 0x37c) != uVar6) {
                      FUN_1447a8aa0(param_1 + 0x370);
                      uVar6 = *(uint *)(param_1 + 0x284);
                      iVar4 = *(int *)(param_1 + 0x378);
                      uVar2 = *(uint *)(param_1 + 0x37c);
                    }
                    *(uint *)(param_1 + 0x378) = uVar6 + iVar4;
                    if (uVar2 - iVar4 < uVar6) {
                      FUN_1403e3958(param_1 + 0x370);
                    }
                    iVar5 = 0;
                    memset((void *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 0x370)),0,
                           (longlong)(int)uVar6 * 0x18);
                    uVar6 = *(uint *)(param_1 + 0x284);
                    if (-1 < (int)uVar6) {
                      *(undefined4 *)(param_1 + 0x388) = 0;
                      uVar2 = uVar6;
                      if (*(uint *)(param_1 + 0x38c) != uVar6) {
                        FUN_1447a8aa0(param_1 + 0x380);
                        uVar6 = *(uint *)(param_1 + 0x284);
                        iVar5 = *(int *)(param_1 + 0x388);
                        uVar2 = *(uint *)(param_1 + 0x38c);
                      }
                      *(uint *)(param_1 + 0x388) = uVar6 + iVar5;
                      if (uVar2 - iVar5 < uVar6) {
                        FUN_1403e3958(param_1 + 0x380);
                      }
                      iVar4 = 0;
                      memset((void *)((longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x380)),0,
                             (longlong)(int)uVar6 * 0x18);
                      uVar6 = *(uint *)(param_1 + 0x284);
                      if (-1 < (int)uVar6) {
                        *(undefined4 *)(param_1 + 0x398) = 0;
                        uVar2 = uVar6;
                        if (*(uint *)(param_1 + 0x39c) != uVar6) {
                          FUN_14482f6fa(param_1 + 0x390);
                          uVar6 = *(uint *)(param_1 + 0x284);
                          iVar4 = *(int *)(param_1 + 0x398);
                          uVar2 = *(uint *)(param_1 + 0x39c);
                        }
                        *(uint *)(param_1 + 0x398) = uVar6 + iVar4;
                        if (uVar2 - iVar4 < uVar6) {
                          FUN_14475e4ac(param_1 + 0x390);
                        }
                        iVar5 = 0;
                        memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0x390)),0,
                               (longlong)(int)uVar6 << 2);
                        uVar6 = *(uint *)(param_1 + 0x284);
                        if (-1 < (int)uVar6) {
                          *(undefined4 *)(param_1 + 0x2c0) = 0;
                          uVar2 = uVar6;
                          if (*(uint *)(param_1 + 0x2c4) != uVar6) {
                            FUN_14482f6fa(param_1 + 0x2b8);
                            uVar6 = *(uint *)(param_1 + 0x284);
                            iVar5 = *(int *)(param_1 + 0x2c0);
                            uVar2 = *(uint *)(param_1 + 0x2c4);
                          }
                          *(uint *)(param_1 + 0x2c0) = uVar6 + iVar5;
                          if (uVar2 - iVar5 < uVar6) {
                            FUN_14475e4ac(param_1 + 0x2b8);
                          }
                          iVar4 = 0;
                          memset((void *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x2b8)),0,
                                 (longlong)(int)uVar6 << 2);
                          uVar6 = *(uint *)(param_1 + 0x284);
                          if (-1 < (int)uVar6) {
                            *(undefined4 *)(param_1 + 0x2d0) = 0;
                            uVar2 = uVar6;
                            if (*(uint *)(param_1 + 0x2d4) != uVar6) {
                              FUN_14482f6fa(param_1 + 0x2c8);
                              uVar6 = *(uint *)(param_1 + 0x284);
                              iVar4 = *(int *)(param_1 + 0x2d0);
                              uVar2 = *(uint *)(param_1 + 0x2d4);
                            }
                            *(uint *)(param_1 + 0x2d0) = uVar6 + iVar4;
                            if (uVar2 - iVar4 < uVar6) {
                              FUN_14475e4ac(param_1 + 0x2c8);
                            }
                            iVar5 = 0;
                            memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0x2c8)),0,
                                   (longlong)(int)uVar6 << 2);
                            uVar6 = *(uint *)(param_1 + 0x284);
                            if (-1 < (int)uVar6) {
                              *(undefined4 *)(param_1 + 0x3b0) = 0;
                              uVar2 = uVar6;
                              if (*(uint *)(param_1 + 0x3b4) != uVar6) {
                                FUN_1447a8aa0(param_1 + 0x3a8);
                                uVar6 = *(uint *)(param_1 + 0x284);
                                iVar5 = *(int *)(param_1 + 0x3b0);
                                uVar2 = *(uint *)(param_1 + 0x3b4);
                              }
                              *(uint *)(param_1 + 0x3b0) = uVar6 + iVar5;
                              if (uVar2 - iVar5 < uVar6) {
                                FUN_1403e3958(param_1 + 0x3a8);
                              }
                              iVar4 = 0;
                              memset((void *)((longlong)iVar5 * 0x18 +
                                             *(longlong *)(param_1 + 0x3a8)),0,
                                     (longlong)(int)uVar6 * 0x18);
                              uVar6 = *(uint *)(param_1 + 0x284);
                              if (-1 < (int)uVar6) {
                                *(undefined4 *)(param_1 + 0x3d0) = 0;
                                uVar2 = uVar6;
                                if (*(uint *)(param_1 + 0x3d4) != uVar6) {
                                  FUN_14481578e(param_1 + 0x3c8);
                                  uVar6 = *(uint *)(param_1 + 0x284);
                                  iVar4 = *(int *)(param_1 + 0x3d0);
                                  uVar2 = *(uint *)(param_1 + 0x3d4);
                                }
                                *(uint *)(param_1 + 0x3d0) = uVar6 + iVar4;
                                if (uVar2 - iVar4 < uVar6) {
                                  FUN_1446f48e2(param_1 + 0x3c8);
                                }
                                iVar5 = 0;
                                uVar3 = 0;
                                memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0x3c8)
                                               ),0,(longlong)(int)uVar6 << 2);
                                memset(*(void **)(param_1 + 0x3c8),
                                       (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),0xff),
                                       (longlong)*(int *)(param_1 + 0x284) << 2);
                                uVar6 = *(uint *)(param_1 + 0x284);
                                if (-1 < (int)uVar6) {
                                  *(undefined4 *)(param_1 + 0x3e0) = 0;
                                  uVar2 = uVar6;
                                  if (*(uint *)(param_1 + 0x3e4) != uVar6) {
                                    FUN_14482f6fa(param_1 + 0x3d8);
                                    uVar6 = *(uint *)(param_1 + 0x284);
                                    iVar5 = *(int *)(param_1 + 0x3e0);
                                    uVar2 = *(uint *)(param_1 + 0x3e4);
                                  }
                                  *(uint *)(param_1 + 0x3e0) = uVar6 + iVar5;
                                  if (uVar2 - iVar5 < uVar6) {
                                    FUN_14475e4ac(param_1 + 0x3d8);
                                  }
                                  iVar4 = 0;
                                  memset((void *)((longlong)iVar5 * 4 +
                                                 *(longlong *)(param_1 + 0x3d8)),0,
                                         (longlong)(int)uVar6 << 2);
                                  uVar6 = *(uint *)(param_1 + 0x284);
                                  if (-1 < (int)uVar6) {
                                    *(undefined4 *)(param_1 + 0x3f0) = 0;
                                    uVar2 = uVar6;
                                    if (*(uint *)(param_1 + 0x3f4) != uVar6) {
                                      FUN_14482f6fa(param_1 + 1000);
                                      uVar6 = *(uint *)(param_1 + 0x284);
                                      iVar4 = *(int *)(param_1 + 0x3f0);
                                      uVar2 = *(uint *)(param_1 + 0x3f4);
                                    }
                                    *(uint *)(param_1 + 0x3f0) = uVar6 + iVar4;
                                    if (uVar2 - iVar4 < uVar6) {
                                      FUN_14475e4ac(param_1 + 1000);
                                    }
                                    iVar5 = 0;
                                    memset((void *)((longlong)iVar4 * 4 +
                                                   *(longlong *)(param_1 + 1000)),0,
                                           (longlong)(int)uVar6 << 2);
                                    uVar6 = *(uint *)(param_1 + 0x284);
                                    if (-1 < (int)uVar6) {
                                      *(undefined4 *)(param_1 + 0x400) = 0;
                                      uVar2 = uVar6;
                                      if (*(uint *)(param_1 + 0x404) != uVar6) {
                                        FUN_14482f6fa(param_1 + 0x3f8);
                                        uVar6 = *(uint *)(param_1 + 0x284);
                                        iVar5 = *(int *)(param_1 + 0x400);
                                        uVar2 = *(uint *)(param_1 + 0x404);
                                      }
                                      *(uint *)(param_1 + 0x400) = uVar6 + iVar5;
                                      if (uVar2 - iVar5 < uVar6) {
                                        FUN_14475e4ac(param_1 + 0x3f8);
                                      }
                                      iVar4 = 0;
                                      memset((void *)((longlong)iVar5 * 4 +
                                                     *(longlong *)(param_1 + 0x3f8)),0,
                                             (longlong)(int)uVar6 << 2);
                                      uVar6 = *(uint *)(param_1 + 0x284);
                                      if (-1 < (int)uVar6) {
                                        *(undefined4 *)(param_1 + 0x410) = 0;
                                        uVar2 = uVar6;
                                        if (*(uint *)(param_1 + 0x414) != uVar6) {
                                          FUN_14482f6fa(param_1 + 0x408);
                                          uVar6 = *(uint *)(param_1 + 0x284);
                                          iVar4 = *(int *)(param_1 + 0x410);
                                          uVar2 = *(uint *)(param_1 + 0x414);
                                        }
                                        *(uint *)(param_1 + 0x410) = uVar6 + iVar4;
                                        if (uVar2 - iVar4 < uVar6) {
                                          FUN_14475e4ac(param_1 + 0x408);
                                        }
                                        memset((void *)((longlong)iVar4 * 4 +
                                                       *(longlong *)(param_1 + 0x408)),0,
                                               (longlong)(int)uVar6 << 2);
                                        *(undefined8 *)(param_1 + 0x278) = 0;
                                        FUN_147c3eb06(param_1);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6);
}



// FUNCTION 147c3eb06 FUN_147c3eb06 body=855 status=ok
// SIG undefined FUN_147c3eb06(void)

void FUN_147c3eb06(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_188 [40];
  longlong *local_160;
  wchar_t *local_158;
  int local_150;
  longlong local_148;
  char local_140;
  undefined8 local_13c;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [12];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *(longlong *)(param_1 + 0x2f0);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x34) == 0)) goto LAB_147c3ed94;
  if (*(char *)(lVar2 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x8e8);
      if (0 < lVar11) {
        lVar7 = 0;
        do {
          lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x8e0) + lVar7 * 8);
          if ((lVar10 != 0) &&
             (*(longlong *)(*(longlong *)(lVar10 + 8) + 0x28) == *(longlong *)(lVar2 + 0x34))) {
            *(longlong *)(param_1 + 0x3b8) = lVar10;
            break;
          }
          lVar7 = lVar7 + 1;
        } while (lVar11 != lVar7);
      }
    }
    goto LAB_147c3ed94;
  }
  if ((*(char *)(lVar2 + 0x30) != '\x02') || (*(longlong *)(param_1 + 0x3a0) != 0))
  goto LAB_147c3ed94;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(byte *)(lVar2 + 0x693) & 0x10) == 0) {
    lVar11 = 0x848;
    cVar4 = FUN_144a61b4f();
    if (cVar4 != '\0') goto LAB_147c3eb94;
  }
  else {
LAB_147c3eb94:
    lVar11 = 0x6a0;
  }
  local_13c = 0;
  local_148 = 0;
  local_140 = '\0';
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  puVar8 = &DAT_14c846480;
  puVar9 = local_e8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_78 = DAT_14c8464f0;
  local_88 = (undefined4)DAT_14c8464e0;
  uStack_84 = DAT_14c8464e0._4_4_;
  uStack_80 = (undefined4)DAT_14c8464e8;
  uStack_7c = DAT_14c8464e8._4_4_;
  local_70 = 0;
  if (*(int *)(lVar2 + 8 + lVar11) < 1) {
    lVar7 = *(longlong *)(param_1 + 0x2f0);
  }
  else {
    lVar10 = 0;
    lVar12 = 0;
    do {
      FUN_147bf7e6a(&local_148,*(longlong *)(lVar2 + lVar11) + lVar10);
      lVar7 = *(longlong *)(param_1 + 0x2f0);
      if (local_148 == *(longlong *)(lVar7 + 0x34)) {
        *(undefined8 *)(param_1 + 0x3a0) = local_f8;
        break;
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0xe0;
    } while (lVar12 < *(int *)(lVar2 + 8 + lVar11));
  }
  if ((0 < *(int *)(lVar7 + 0x74)) && (0 < *(int *)(lVar2 + 8 + lVar11))) {
    lVar7 = 0;
    local_160 = (longlong *)(param_1 + 0x3a8);
    lVar10 = 0;
    do {
      FUN_147bf7e6a(&local_148,*(longlong *)(lVar2 + lVar11) + lVar7);
      FUN_1400021e4(&local_148,&local_158);
      pwVar6 = L"";
      if (local_150 != 0) {
        pwVar6 = local_158;
      }
      pwVar6 = wcsstr(pwVar6,L"TrailSourceOffset");
      if ((pwVar6 != (wchar_t *)0x0) && (uVar5 = _wtoi(pwVar6), -1 < (int)uVar5)) {
        if (local_140 == '\x03') {
          iVar1 = *(int *)(param_1 + 0x3b0);
          *(uint *)(param_1 + 0x3b0) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x3b4) < iVar1 + 1U) {
            FUN_1403e3958(local_160,iVar1);
          }
          lVar3 = (ulonglong)uVar5 * 0x18;
          memmove((void *)(*local_160 + lVar3 + 0x18),(void *)(*local_160 + lVar3),
                  (ulonglong)(iVar1 - uVar5) * 0x18);
          lVar12 = *local_160;
          puVar8 = (undefined8 *)(lVar12 + lVar3);
          *puVar8 = local_130;
          puVar8[1] = uStack_128;
          *(undefined8 *)(lVar12 + 0x10 + lVar3) = local_120;
        }
        else if (local_140 == '\x01') {
          FUN_147c3f834(local_160,(ulonglong)uVar5);
          lVar12 = *(longlong *)(param_1 + 0x3a8);
          *(double *)(lVar12 + (ulonglong)uVar5 * 0x18) = (double)(float)local_13c;
          puVar8 = (undefined8 *)(lVar12 + 8 + (ulonglong)uVar5 * 0x18);
          *puVar8 = 0;
          puVar8[1] = 0;
        }
      }
      if (local_158 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + 0xe0;
    } while (lVar10 < *(int *)(lVar2 + 8 + lVar11));
  }
LAB_147c3ed94:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c3ee5e FUN_147c3ee5e body=203 status=ok
// SIG undefined FUN_147c3ee5e(void)

void FUN_147c3ee5e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
                  ,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_3 + 0x28);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_3 + 0x20);
  fVar8 = *(float *)(param_2 + 0xc) - *(float *)(param_4 + 0xc);
  uVar5 = -(uint)(fVar8 == 0.0);
  dVar9 = 1.0 / (double)(float)(uVar5 & 0x3b51b717 | ~uVar5 & (uint)ABS(fVar8));
  dVar6 = (double)param_5;
  dVar7 = (double)(1.0 / (float)*(int *)(param_6 + 0x18));
  *(float *)(param_6 + 0x28) =
       (float)(dVar9 * (*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18)) * dVar6 * dVar7);
  *(float *)(param_6 + 0x2c) = (float)((dVar3 - dVar4) * dVar9 * dVar6 * dVar7);
  *(float *)(param_6 + 0x30) = (float)((dVar1 - dVar2) * dVar9 * dVar6 * dVar7);
  return;
}



// FUNCTION 147c3ef2a FUN_147c3ef2a body=1192 status=ok
// SIG undefined FUN_147c3ef2a(void)

bool FUN_147c3ef2a(longlong param_1,float param_2,int param_3,int *param_4,float *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float extraout_XMM0_Da;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  
  lVar14 = *(longlong *)(param_1 + 0x2e8);
  if (lVar14 == 0) {
    lVar14 = 0;
    goto LAB_147c3ef86;
  }
  if (-1 < *(char *)(lVar14 + 0x28)) goto LAB_147c3ef86;
  FUN_147a77524(lVar14 + 0x40,*(undefined4 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x10),0);
  fVar23 = extraout_XMM0_Da / *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x38);
  if (0.0 <= fVar23) {
    lVar15 = (longlong)param_3;
    lVar14 = *(longlong *)(param_1 + 0x300);
    lVar9 = lVar15 * 0x18;
    lVar3 = *(longlong *)(param_1 + 0x350);
    dVar5 = *(double *)(lVar14 + 0x10 + lVar9) - *(double *)(lVar3 + 0x10 + lVar9);
    dVar6 = *(double *)(lVar14 + 8 + lVar9) - *(double *)(lVar3 + 8 + lVar9);
    dVar7 = *(double *)(lVar14 + lVar9) - *(double *)(lVar3 + lVar9);
    fVar24 = *(float *)(*(longlong *)(param_1 + 0x2b8) + lVar15 * 4);
    fVar17 = (float)SQRT(dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6);
    if ((4.3980465e+12 < fVar17) ||
       (fVar19 = *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x70), fVar19 < fVar17 && 0.0 < fVar19)
       ) {
      puVar12 = (undefined4 *)FUN_147bf7da6(param_1);
      *puVar12 = 0;
      lVar14 = *(longlong *)(param_1 + 0x300);
      lVar3 = *(longlong *)(param_1 + 0x350);
      *(undefined8 *)(lVar3 + 0x10 + lVar9) = *(undefined8 *)(lVar14 + 0x10 + lVar9);
      puVar1 = (undefined8 *)(lVar14 + lVar9);
      uVar10 = puVar1[1];
      puVar2 = (undefined8 *)(lVar3 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      fVar17 = 0.0;
    }
    fVar19 = 0.0;
    if (0.0 < *(float *)(*(longlong *)(param_1 + 0x2e0) + 0x48)) {
      fVar19 = *(float *)(param_1 + 0x288);
      if (*(int *)(param_1 + 0x18c) == 0) {
        lVar14 = *(longlong *)(param_1 + 0x300);
        lVar3 = *(longlong *)(param_1 + 0x350);
        dVar21 = *(double *)(lVar14 + 0x10 + lVar9);
        dVar20 = *(double *)(lVar3 + 0x10 + lVar9);
        dVar22 = *(double *)(lVar14 + 8 + lVar9);
        dVar18 = *(double *)(lVar3 + 8 + lVar9);
        fVar19 = (float)(~-(uint)(fVar19 == 0.0) & (uint)fVar19 |
                        -(uint)(fVar19 == 0.0) & 0x38d1b717);
        dVar8 = 1.0 / (double)fVar19;
        lVar4 = *(longlong *)(param_1 + 0x380);
        *(double *)(lVar4 + lVar9) =
             dVar8 * (*(double *)(lVar14 + lVar9) - *(double *)(lVar3 + lVar9));
        *(double *)(lVar4 + 8 + lVar9) = (dVar22 - dVar18) * dVar8;
        *(double *)(lVar4 + 0x10 + lVar9) = (dVar21 - dVar20) * dVar8;
      }
      fVar19 = fVar19 - *(float *)(*(longlong *)(param_1 + 0x298) + lVar15 * 4);
      uVar16 = -(uint)(fVar19 == 0.0);
      dVar21 = 1.0 / (double)(float)(uVar16 & 0x38d1b717 | ~uVar16 & (uint)fVar19);
      dVar5 = dVar5 * dVar21;
      dVar6 = dVar6 * dVar21;
      dVar7 = dVar7 * dVar21;
      dVar21 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
      if (9.99999993922529e-09 < dVar21) {
        dVar21 = 1.0 / SQRT(dVar21);
        dVar7 = dVar7 * dVar21;
        dVar6 = dVar6 * dVar21;
        dVar5 = dVar5 * dVar21;
      }
      lVar14 = *(longlong *)(param_1 + 0x380);
      dVar21 = *(double *)(lVar14 + lVar15 * 0x18);
      dVar20 = *(double *)(lVar14 + 8 + lVar15 * 0x18);
      dVar22 = *(double *)(lVar14 + 0x10 + lVar15 * 0x18);
      dVar18 = dVar22 * dVar22 + dVar21 * dVar21 + dVar20 * dVar20;
      if (9.99999993922529e-09 < dVar18) {
        dVar18 = 1.0 / SQRT(dVar18);
        dVar21 = dVar21 * dVar18;
        dVar20 = dVar20 * dVar18;
        dVar22 = dVar22 * dVar18;
      }
      fVar19 = ((float)(dVar6 * dVar20 + dVar7 * dVar21 + dVar5 * dVar22) + -1.0) * -0.5;
    }
    if (fVar17 <= 0.0) {
      *param_4 = 0;
      *param_5 = 0.0;
      goto LAB_147c3f01b;
    }
    bVar11 = fVar17 <= *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x3c) *
                       *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x38);
    fVar24 = fVar24 + fVar17;
    fVar23 = fVar19 * *(float *)(*(longlong *)(param_1 + 0x2e0) + 0x48) + fVar23 * fVar24;
    if ((((*(byte *)(*(longlong *)(param_1 + 0x2e0) + 0x40) & 0x20) == 0) ||
        (*(int *)(param_1 + 0x18c) != 0)) || (iVar13 = 1, 1.0 <= fVar23)) {
      iVar13 = (int)ROUND(fVar23 + fVar23 + -0.5) >> 1;
    }
    *param_4 = iVar13;
    *param_5 = (float)(-(uint)(0.0 < param_2) & (uint)(1.0 / param_2)) * (float)iVar13;
    fVar24 = fVar24 - (float)*param_4 * *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x38);
    fVar23 = 0.0;
    if (0.0 <= fVar24) {
      fVar23 = fVar24;
    }
    *(float *)(*(longlong *)(param_1 + 0x2b8) + lVar15 * 4) = fVar23;
  }
  else {
    *param_4 = 0;
    *param_5 = 0.0;
LAB_147c3f01b:
    bVar11 = true;
  }
  lVar14 = *(longlong *)(param_1 + 0x2e8);
  if ((*(byte *)(lVar14 + 0x74) & 1) != 0) {
    return bVar11;
  }
LAB_147c3ef86:
  return (bool)(*(byte *)(lVar14 + 0x30) & 1);
}



// FUNCTION 147c3f3d2 FUN_147c3f3d2 body=369 status=ok
// SIG undefined FUN_147c3f3d2(void)

void FUN_147c3f3d2(longlong param_1,int param_2,longlong param_3,char param_4,undefined4 *param_5,
                  undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  if (param_4 != '\0') {
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    iVar5 = *(int *)(lVar1 + 0x78);
    fVar10 = 0.0;
    if (0 < iVar5) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + 0x70);
        if (*(longlong *)(lVar2 + lVar8 * 8) != 0) {
          uVar6 = FUN_145a6d5ce();
          cVar4 = FUN_144a7ca96(lVar2 + lVar7,uVar6);
          if ((cVar4 != '\0') &&
             (plVar3 = *(longlong **)(lVar2 + lVar8 * 8), plVar3 != (longlong *)0x0)) {
            fVar10 = (float)(**(code **)(*plVar3 + 0x390))
                                      (plVar3,param_1,*(undefined4 *)(param_1 + 0x1a0),
                                       *(undefined8 *)(param_1 + 0x10));
            fVar10 = (float)(-(uint)(0.0 < fVar10) & (uint)(1.0 / fVar10));
            goto LAB_147c3f47c;
          }
          iVar5 = *(int *)(lVar1 + 0x78);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar8 < iVar5);
      fVar10 = 0.0;
    }
LAB_147c3f47c:
    fVar10 = (float)(~-(uint)(fVar10 == 0.0) & (uint)fVar10 | -(uint)(fVar10 == 0.0) & 0x3f800000);
    uVar9 = -(uint)(1.0 / fVar10 < 0.001);
    *(uint *)(*(longlong *)(param_1 + 0x3f8) + (longlong)param_2 * 4) =
         uVar9 & 0x4479ffff | ~uVar9 & (uint)fVar10;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + (longlong)param_2 * 4) =
         *(undefined4 *)(param_3 + 0x60);
  }
  *param_5 = *(undefined4 *)(*(longlong *)(param_1 + 0x3f8) + (longlong)param_2 * 4);
  *param_6 = *(undefined4 *)(*(longlong *)(param_1 + 0x408) + (longlong)param_2 * 4);
  return;
}



// FUNCTION 147c3f544 FUN_147c3f544 body=752 status=ok
// SIG undefined FUN_147c3f544(void)

void FUN_147c3f544(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) < 1) {
    lVar12 = 0;
  }
  else {
    lVar12 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  }
  if (0 < *(int *)(lVar12 + 0x40)) {
    lVar11 = 0;
    do {
      uVar2 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + lVar11 * 8);
      if (uVar2 != 0) {
        lVar4 = FUN_1459e8bca();
        if ((*(int *)(*(longlong *)(uVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (uVar9 = uVar2,
           *(longlong *)
            (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          uVar9 = 0;
        }
        lVar4 = FUN_145b5154c();
        if (*(int *)(*(longlong *)(uVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
          if (uVar9 == 0) goto LAB_147c3f7e2;
LAB_147c3f5fb:
          *(ulonglong *)(param_1 + 0x2e8) = uVar9;
        }
        else {
          uVar5 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30) {
            uVar5 = uVar2;
          }
          if (uVar9 != 0) goto LAB_147c3f5fb;
          if (uVar5 == 0) goto LAB_147c3f7e2;
          *(ulonglong *)(param_1 + 0x2f0) = uVar5;
          lVar4 = *(longlong *)(param_1 + 8);
          if (*(int *)(lVar4 + 0x68) != *(int *)(lVar4 + 0x94)) {
            uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            lVar8 = lVar4 + 0x98;
            if (*(longlong *)(lVar4 + 0xa0) != 0) {
              lVar8 = *(longlong *)(lVar4 + 0xa0);
            }
            iVar7 = *(int *)(lVar8 + (ulonglong)
                                     (*(int *)(lVar4 + 0xa8) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
            if (iVar7 != -1) {
              do {
                puVar1 = (ulonglong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar7 * 0x18);
                if (*puVar1 == uVar5) {
                  if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                    *(int *)(param_1 + 0x2f8) = (int)puVar1[1];
                  }
                  break;
                }
                iVar7 = (int)puVar1[2];
              } while (iVar7 != -1);
            }
          }
        }
        iVar7 = *(int *)(lVar12 + 0x88);
        if (0 < (longlong)iVar7) {
          iVar10 = -iVar7;
          uVar9 = (longlong)iVar7;
          do {
            lVar4 = *(longlong *)(lVar12 + 0x80);
            if (*(ulonglong *)(lVar4 + -8 + uVar9 * 8) == uVar2) {
              uVar6 = *(uint *)(lVar12 + 0x88);
              if (uVar9 != uVar6) {
                memmove((void *)(lVar4 + uVar9 * 8 + -8),(void *)(lVar4 + uVar9 * 8),
                        (longlong)(int)(uVar6 + iVar10) << 3);
                uVar6 = *(uint *)(lVar12 + 0x88);
              }
              *(uint *)(lVar12 + 0x88) = uVar6 - 1;
              FUN_147c0c70c((longlong *)(lVar12 + 0x80));
            }
            iVar10 = iVar10 + 1;
            bVar3 = 1 < uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar3);
        }
        iVar7 = *(int *)(lVar12 + 0x78);
        if (0 < (longlong)iVar7) {
          iVar10 = -iVar7;
          uVar9 = (longlong)iVar7;
          do {
            lVar4 = *(longlong *)(lVar12 + 0x70);
            if (*(ulonglong *)(lVar4 + -8 + uVar9 * 8) == uVar2) {
              uVar6 = *(uint *)(lVar12 + 0x78);
              if (uVar9 != uVar6) {
                memmove((void *)(lVar4 + uVar9 * 8 + -8),(void *)(lVar4 + uVar9 * 8),
                        (longlong)(int)(uVar6 + iVar10) << 3);
                uVar6 = *(uint *)(lVar12 + 0x78);
              }
              *(uint *)(lVar12 + 0x78) = uVar6 - 1;
              FUN_147c0c70c((longlong *)(lVar12 + 0x70));
            }
            iVar10 = iVar10 + 1;
            bVar3 = 1 < uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar3);
        }
        iVar7 = *(int *)(lVar12 + 0x68);
        if (0 < (longlong)iVar7) {
          iVar10 = -iVar7;
          uVar9 = (longlong)iVar7;
          do {
            lVar4 = *(longlong *)(lVar12 + 0x60);
            if (*(ulonglong *)(lVar4 + -8 + uVar9 * 8) == uVar2) {
              uVar6 = *(uint *)(lVar12 + 0x68);
              if (uVar9 != uVar6) {
                memmove((void *)(lVar4 + uVar9 * 8 + -8),(void *)(lVar4 + uVar9 * 8),
                        (longlong)(int)(uVar6 + iVar10) << 3);
                uVar6 = *(uint *)(lVar12 + 0x68);
              }
              *(uint *)(lVar12 + 0x68) = uVar6 - 1;
              FUN_147c447f0((longlong *)(lVar12 + 0x60));
            }
            iVar10 = iVar10 + 1;
            bVar3 = 1 < uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar3);
        }
      }
LAB_147c3f7e2:
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar12 + 0x40));
  }
  return;
}



// FUNCTION 147c3f834 FUN_147c3f834 body=107 status=ok
// SIG undefined FUN_147c3f834(void)

void FUN_147c3f834(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1403e3958(param_1,iVar2);
  }
  lVar4 = (ulonglong)param_2 * 0x18;
  memmove((void *)(*param_1 + lVar4 + 0x18),(void *)(*param_1 + lVar4),
          (ulonglong)(iVar2 - param_2) * 0x18);
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  return;
}



// FUNCTION 147c3f8a0 FUN_147c3f8a0 body=1114 status=ok
// SIG undefined FUN_147c3f8a0(void)

void FUN_147c3f8a0(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  double dVar26;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  byte local_fd;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 0x2f0) == 0) {
    bVar24 = true;
  }
  else {
    bVar24 = *(char *)(*(longlong *)(param_1 + 0x2f0) + 0x30) != '\x01';
  }
  local_fd = param_3;
  if (0 < *(int *)(param_1 + 0x284)) {
    fVar4 = *(float *)(param_1 + 0x288);
    lVar22 = 0;
    lVar21 = 0;
    uVar23 = 0;
    do {
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x3c8) + lVar21);
      local_108 = &local_fc;
      local_110 = &local_e0;
      local_118 = &local_f8;
      FUN_1435fd3b6(param_1,uVar23 & 0xffffffff,&local_a8,&local_c8);
      if ((bool)(*(int *)(*(longlong *)(param_1 + 0x3c8) + lVar21) != -1 | bVar24)) {
        if ((byte)((param_3 ^ 1) & (iVar9 != -1 | bVar24)) == 0) {
          lVar10 = *(longlong *)(param_1 + 0x350);
          *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_98;
          puVar1 = (undefined8 *)(lVar10 + lVar22);
          *puVar1 = local_a8;
          puVar1[1] = uStack_a0;
          lVar10 = *(longlong *)(param_1 + 0x380);
          *(undefined8 *)(lVar10 + 0x10 + lVar22) = DAT_14c8464f0;
          uVar20 = DAT_14c8464e8;
          puVar1 = (undefined8 *)(lVar10 + lVar22);
          *puVar1 = DAT_14c8464e0;
          puVar1[1] = uVar20;
          *(undefined4 *)(*(longlong *)(param_1 + 0x390) + lVar21) = local_fc;
          lVar10 = *(longlong *)(param_1 + 0x370);
          *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_e8;
          puVar1 = (undefined8 *)(lVar10 + lVar22);
          *puVar1 = CONCAT44(uStack_f4,local_f8);
          puVar1[1] = CONCAT44(uStack_ec,uStack_f0);
          *(undefined4 *)(*(longlong *)(param_1 + 0x298) + lVar21) =
               *(undefined4 *)(param_1 + 0x288);
        }
        lVar10 = *(longlong *)(param_1 + 0x300);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_98;
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        *puVar1 = local_a8;
        puVar1[1] = uStack_a0;
        lVar10 = *(longlong *)(param_1 + 0x310);
        puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar21 * 8);
        *puVar2 = local_b8;
        puVar2[1] = uStack_b4;
        puVar2[2] = uStack_b0;
        puVar2[3] = uStack_ac;
        puVar1 = (undefined8 *)(lVar10 + lVar21 * 8);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c0;
        fVar25 = fVar4 - *(float *)(*(longlong *)(param_1 + 0x298) + lVar21);
        if ((fVar25 != 0.0) || (NAN(fVar25))) {
          lVar10 = *(longlong *)(param_1 + 0x350);
          lVar11 = *(longlong *)(param_1 + 0x300);
          dVar5 = *(double *)(lVar11 + 0x10 + lVar22);
          dVar6 = *(double *)(lVar10 + 0x10 + lVar22);
          lVar12 = *(longlong *)(param_1 + 0x330);
          dVar7 = *(double *)(lVar11 + 8 + lVar22);
          dVar8 = *(double *)(lVar10 + 8 + lVar22);
          dVar26 = 1.0 / (double)fVar25;
          *(double *)(lVar12 + lVar22) =
               dVar26 * (*(double *)(lVar11 + lVar22) - *(double *)(lVar10 + lVar22));
          *(double *)(lVar12 + 8 + lVar22) = (dVar7 - dVar8) * dVar26;
          *(double *)(lVar12 + 0x10 + lVar22) = (dVar5 - dVar6) * dVar26;
        }
        else {
          lVar10 = *(longlong *)(param_1 + 0x330);
          *(undefined8 *)(lVar10 + lVar22) = 0x3ff0000000000000;
          puVar1 = (undefined8 *)(lVar10 + 8 + lVar22);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x340) + lVar21) = local_fc;
        lVar10 = *(longlong *)(param_1 + 800);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_e8;
        puVar2 = (undefined4 *)(lVar10 + lVar22);
        *puVar2 = local_f8;
        puVar2[1] = uStack_f4;
        puVar2[2] = uStack_f0;
        puVar2[3] = uStack_ec;
        if (local_fd != 0) {
          lVar10 = *(longlong *)(param_1 + 0x360);
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x310) + lVar21 * 8);
          uVar13 = *puVar2;
          uVar14 = puVar2[1];
          uVar15 = puVar2[2];
          uVar16 = puVar2[3];
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x310) + 0x10 + lVar21 * 8);
          uVar17 = puVar2[1];
          uVar18 = puVar2[2];
          uVar19 = puVar2[3];
          puVar3 = (undefined4 *)(lVar10 + 0x10 + lVar21 * 8);
          *puVar3 = *puVar2;
          puVar3[1] = uVar17;
          puVar3[2] = uVar18;
          puVar3[3] = uVar19;
          puVar2 = (undefined4 *)(lVar10 + lVar21 * 8);
          *puVar2 = uVar13;
          puVar2[1] = uVar14;
          puVar2[2] = uVar15;
          puVar2[3] = uVar16;
        }
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x350);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_98;
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        *puVar1 = local_a8;
        puVar1[1] = uStack_a0;
        lVar10 = *(longlong *)(param_1 + 0x380);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_d0;
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        *puVar1 = local_e0;
        puVar1[1] = uStack_d8;
        *(undefined4 *)(*(longlong *)(param_1 + 0x390) + lVar21) = local_fc;
        lVar10 = *(longlong *)(param_1 + 0x360);
        puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar21 * 8);
        *puVar1 = CONCAT44(uStack_b4,local_b8);
        puVar1[1] = CONCAT44(uStack_ac,uStack_b0);
        puVar1 = (undefined8 *)(lVar10 + lVar21 * 8);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c0;
        lVar10 = *(longlong *)(param_1 + 0x370);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_e8;
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        *puVar1 = CONCAT44(uStack_f4,local_f8);
        puVar1[1] = CONCAT44(uStack_ec,uStack_f0);
        lVar10 = *(longlong *)(param_1 + 0x300);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_98;
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        *puVar1 = local_a8;
        puVar1[1] = uStack_a0;
        lVar10 = *(longlong *)(param_1 + 0x330);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_d0;
        puVar1 = (undefined8 *)(lVar10 + lVar22);
        *puVar1 = local_e0;
        puVar1[1] = uStack_d8;
        *(undefined4 *)(*(longlong *)(param_1 + 0x340) + lVar21) = local_fc;
        lVar10 = *(longlong *)(param_1 + 0x310);
        puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar21 * 8);
        *puVar2 = local_b8;
        puVar2[1] = uStack_b4;
        puVar2[2] = uStack_b0;
        puVar2[3] = uStack_ac;
        puVar1 = (undefined8 *)(lVar10 + lVar21 * 8);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c0;
        lVar10 = *(longlong *)(param_1 + 800);
        *(undefined8 *)(lVar10 + 0x10 + lVar22) = local_e8;
        puVar2 = (undefined4 *)(lVar10 + lVar22);
        *puVar2 = local_f8;
        puVar2[1] = uStack_f4;
        puVar2[2] = uStack_f0;
        puVar2[3] = uStack_ec;
        *(undefined4 *)(*(longlong *)(param_1 + 0x298) + lVar21) = 0;
      }
      uVar23 = uVar23 + 1;
      lVar21 = lVar21 + 4;
      lVar22 = lVar22 + 0x18;
    } while ((longlong)uVar23 < (longlong)*(int *)(param_1 + 0x284));
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c3fcfc FUN_147c3fcfc body=1144 status=ok
// SIG undefined FUN_147c3fcfc(void)

void FUN_147c3fcfc(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  lVar16 = *(longlong *)(param_1 + 0x2e0);
  fVar1 = *(float *)(lVar16 + 0x5c);
  if (*(int *)(param_1 + 0x18c) < 1) {
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  else {
    fVar2 = *(float *)(lVar16 + 0x54);
    uVar8 = *(uint *)(lVar16 + 0x58);
    lVar16 = 0;
    iVar25 = 0;
    iVar14 = 0;
    fVar29 = 0.0;
    fVar28 = 0.0;
    do {
      iVar13 = DAT_14c7616f0;
      iVar12 = DAT_14c7616ec;
      lVar24 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar16 * 2) *
               (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168);
      lVar22 = (longlong)*(int *)(param_1 + 0x24);
      puVar18 = (uint *)(lVar22 + lVar24);
      uVar21 = *(uint *)(lVar22 + lVar24);
      uVar15 = uVar21 & 0xf0000000;
      if (SBORROW4(0,uVar15)) {
        uVar21 = uVar21 >> 0xe & 0x3fff;
        if (uVar21 != 0x3fff) {
          lVar20 = *(longlong *)(param_1 + 0x168) +
                   (ulonglong)uVar21 * (longlong)*(int *)(param_1 + 0x188);
          uVar21 = 0;
          puVar23 = (uint *)(lVar22 + lVar20);
          while( true ) {
            lVar22 = lVar20;
            fVar26 = (float)puVar18[0xc];
            fVar3 = (float)puVar18[0xb];
            fVar4 = (float)puVar18[10];
            fVar5 = fVar26 * fVar26 + fVar4 * fVar4 + fVar3 * fVar3;
            if (1e-08 < fVar5) {
              fVar5 = 1.0 / SQRT(fVar5);
              fVar4 = fVar4 * fVar5;
              fVar3 = fVar3 * fVar5;
              fVar26 = fVar26 * fVar5;
            }
            fVar5 = (float)puVar23[0xc];
            fVar6 = (float)puVar23[0xb];
            fVar7 = (float)puVar23[10];
            fVar11 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
            if (1e-08 < fVar11) {
              fVar11 = 1.0 / SQRT(fVar11);
              fVar7 = fVar7 * fVar11;
              fVar6 = fVar6 * fVar11;
              fVar5 = fVar5 * fVar11;
            }
            if (1e-08 < ABS(fVar1) || (uVar8 & 1) != 0) {
              fVar28 = (fVar26 * fVar5 + fVar4 * fVar7 + fVar3 * fVar6 + -1.0) * -0.5;
            }
            if (((1e-08 < ABS(fVar2)) &&
                (dVar27 = *(double *)(lVar24 + 0x28) - *(double *)(lVar22 + 0x28),
                dVar10 = *(double *)(lVar24 + 0x20) - *(double *)(lVar22 + 0x20),
                dVar9 = *(double *)(lVar24 + 0x18) - *(double *)(lVar22 + 0x18),
                fVar29 = (float)SQRT(dVar27 * dVar27 + dVar9 * dVar9 + dVar10 * dVar10) / fVar2,
                (uVar8 & 1) != 0)) && (fVar28 < 0.5)) {
              fVar26 = fVar28;
              if (fVar28 <= 0.0) {
                fVar26 = 0.0;
              }
              fVar29 = fVar29 * (fVar26 + fVar26);
            }
            iVar17 = (int)fVar29;
            if (iVar12 <= (int)fVar29) {
              iVar17 = iVar12;
            }
            iVar19 = (int)(*(float *)(*(longlong *)(param_1 + 0x2e0) + 0x5c) * fVar28);
            if (iVar13 <= iVar19) {
              iVar19 = iVar13;
            }
            uVar15 = iVar19 + iVar17;
            if ((int)uVar15 < 2) {
              uVar15 = 1;
            }
            puVar18[7] = uVar15;
            puVar18[8] = ~-(uint)(0.5 < fVar28) & 0x3f800000 |
                         (uint)(1.0 - fVar28 * 0.5) & -(uint)(0.5 < fVar28);
            iVar17 = uVar15 * 2 + *(int *)(param_1 + 0x278);
            *(int *)(param_1 + 0x278) = iVar17;
            uVar21 = uVar21 + uVar15 * 2;
            uVar15 = *puVar23 >> 0xe & 0x3fff;
            if (uVar15 == 0x3fff) break;
            lVar20 = (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar15 +
                     *(longlong *)(param_1 + 0x168);
            puVar18 = puVar23;
            puVar23 = (uint *)(*(int *)(param_1 + 0x24) + lVar20);
            lVar24 = lVar22;
          }
          *(int *)(param_1 + 0x278) = iVar17 + 2;
          puVar23[2] = uVar21;
          puVar23[7] = 1;
          iVar14 = iVar14 + uVar21 + 2;
          iVar25 = iVar25 + 1;
        }
      }
      else if (((uVar15 == 0x40000000) || (uVar15 == 0x10000000)) && ((~uVar21 & 0x3fff) == 0)) {
        puVar18[7] = 0;
        puVar18[2] = 0;
        *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x18c));
    *(int *)(param_1 + 0x280) = iVar25;
    if (0 < iVar25) {
      iVar14 = iVar14 + iVar25 * 2 + -4;
      goto LAB_147c40117;
    }
  }
  iVar14 = 0;
LAB_147c40117:
  *(int *)(param_1 + 0x27c) = iVar14;
  return;
}



// FUNCTION 147c40174 FUN_147c40174 body=38 status=ok
// SIG undefined FUN_147c40174(void)

undefined8 FUN_147c40174(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_147c07d40();
  if ((cVar1 == '\0') || (1 < *(int *)(param_1 + 0x18c))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147c4019a FUN_147c4019a body=148 status=ok
// SIG undefined FUN_147c4019a(void)

undefined8 * FUN_147c4019a(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((0 < *(int *)((longlong)param_1 + 0x18c)) && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x100,0x10);
    FUN_147c09012(puVar2);
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined4 *)(puVar2 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0xec) = 0;
    *(undefined4 *)(puVar2 + 0x1e) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xf4) = 1;
    *puVar2 = &PTR_FUN_14aa00768;
    *(undefined4 *)(puVar2 + 0x1f) = 0;
    cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 147c4029a FUN_147c4029a body=205 status=ok
// SIG undefined FUN_147c4029a(void)

void FUN_147c4029a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_14278f0ba(param_2);
  if ((iVar1 != 1) &&
     ((*(longlong *)(param_1 + 0x10) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5a8) == 0)))) {
    return;
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(param_1 + 0x188) * (longlong)*(int *)(param_1 + 0x194);
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)(*(int *)(param_1 + 0x194) * 2);
  }
  FUN_140347a44(param_2,0x420);
  FUN_140347a44(param_2,lVar2);
  FUN_140347a44(param_2,lVar3);
  lVar2 = (longlong)*(int *)(param_1 + 0x194) * 0x50;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x194) * 0x10;
  }
  FUN_140347a44(param_2,lVar2);
  return;
}



// FUNCTION 147c40368 FUN_147c40368 body=238 status=ok
// SIG undefined FUN_147c40368(void)

void FUN_147c40368(longlong param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  dStack_30 = param_2[1];
  local_28 = param_2[2];
  FUN_147bf6440();
  if ((longlong)*(int *)(param_1 + 0x308) != 0) {
    pdVar2 = *(double **)(param_1 + 0x300);
    pdVar1 = pdVar2 + (longlong)*(int *)(param_1 + 0x308) * 3;
    do {
      *pdVar2 = *param_2 + *pdVar2;
      pdVar2[1] = param_2[1] + pdVar2[1];
      pdVar2[2] = param_2[2] + pdVar2[2];
      pdVar2 = pdVar2 + 3;
    } while (pdVar2 != pdVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x358) != 0) {
    pdVar2 = *(double **)(param_1 + 0x350);
    pdVar1 = pdVar2 + (longlong)*(int *)(param_1 + 0x358) * 3;
    do {
      *pdVar2 = *param_2 + *pdVar2;
      pdVar2[1] = param_2[1] + pdVar2[1];
      pdVar2[2] = param_2[2] + pdVar2[2];
      pdVar2 = pdVar2 + 3;
    } while (pdVar2 != pdVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c40458 FUN_147c40458 body=85 status=ok
// SIG undefined FUN_147c40458(void)

undefined8 * FUN_147c40458(undefined8 *param_1)

{
  FUN_147c3deaa();
  *param_1 = &PTR_FUN_14aa06a50;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30a) = 0;
  return param_1;
}



// FUNCTION 147c404ae FUN_147c404ae body=429 status=ok
// SIG undefined FUN_147c404ae(void)

void FUN_147c404ae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_1435bafcc();
  if (*(int *)(param_2 + 0x48) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_2 + 0x40);
  }
  lVar1 = *(longlong *)(lVar1 + 0x48);
  *(longlong *)(param_1 + 0x2e0) = lVar1;
  *(uint *)(param_1 + 0x290) = *(uint *)(param_1 + 0x290) & 0xfffffffe | *(uint *)(lVar1 + 0x30) & 1
  ;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(int *)(param_1 + 0x2a4) == 1) {
    *(undefined4 *)(param_1 + 0x2a0) = 1;
    iVar3 = 0;
  }
  else {
    FUN_14482f6fa(param_1 + 0x298,1);
    iVar3 = *(int *)(param_1 + 0x2a0);
    *(int *)(param_1 + 0x2a0) = iVar3 + 1;
    if (*(int *)(param_1 + 0x2a4) == iVar3) {
      FUN_14475e4ac(param_1 + 0x298,iVar3);
    }
  }
  iVar2 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar3 * 4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 0x2c4) == 1) {
    *(undefined4 *)(param_1 + 0x2c0) = 1;
  }
  else {
    FUN_14482f6fa(param_1 + 0x2b8,1);
    iVar2 = *(int *)(param_1 + 0x2c0);
    *(int *)(param_1 + 0x2c0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c4) == iVar2) {
      FUN_14475e4ac(param_1 + 0x2b8,iVar2);
    }
  }
  iVar3 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar2 * 4) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) == 1) {
    *(undefined4 *)(param_1 + 0x2d0) = 1;
  }
  else {
    FUN_14482f6fa(param_1 + 0x2c8,1);
    iVar3 = *(int *)(param_1 + 0x2d0);
    *(int *)(param_1 + 0x2d0) = iVar3 + 1;
    if (*(int *)(param_1 + 0x2d4) == iVar3) {
      FUN_14475e4ac(param_1 + 0x2c8,iVar3);
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar3 * 4) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  return;
}



// FUNCTION 147c4065c FUN_147c4065c body=550 status=ok
// SIG undefined FUN_147c4065c(void)

void FUN_147c4065c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = DAT_14c8464e0;
  dVar2 = DAT_14c8464f0;
  dVar7 = DAT_14c8464e8;
  if (param_2 == 0) {
    dVar5 = *(double *)(param_4 + 0x28) - *(double *)(param_6 + 0x28);
    dVar6 = *(double *)(param_4 + 0x20) - *(double *)(param_6 + 0x20);
    dVar3 = *(double *)(param_4 + 0x18) - *(double *)(param_6 + 0x18);
    fVar1 = (float)SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar6 * dVar6);
    if (1e-08 < fVar1) {
      dVar7 = (double)(1.0 / fVar1);
      dVar4 = dVar3 * dVar7;
      dVar2 = dVar5 * dVar7;
      dVar7 = dVar6 * dVar7;
    }
  }
  else {
    dVar5 = *(double *)(param_2 + 0x28) - *(double *)(param_4 + 0x28);
    dVar6 = *(double *)(param_2 + 0x20) - *(double *)(param_4 + 0x20);
    dVar3 = *(double *)(param_2 + 0x18) - *(double *)(param_4 + 0x18);
    fVar1 = (float)SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar6 * dVar6);
    if (1e-08 < fVar1) {
      dVar7 = (double)(1.0 / fVar1);
      dVar4 = dVar3 * dVar7;
      dVar2 = dVar5 * dVar7;
      dVar7 = dVar6 * dVar7;
    }
    if (param_6 != 0) {
      dVar2 = *(double *)(param_2 + 0x28) - *(double *)(param_6 + 0x28);
      dVar7 = *(double *)(param_2 + 0x20) - *(double *)(param_6 + 0x20);
      dVar4 = *(double *)(param_2 + 0x18) - *(double *)(param_6 + 0x18);
      if ((((9.999999747378752e-05 < ABS(dVar4)) || (9.999999747378752e-05 < ABS(dVar7))) ||
          (9.999999747378752e-05 < ABS(dVar2))) &&
         (dVar3 = dVar2 * dVar2 + dVar4 * dVar4 + dVar7 * dVar7, 9.99999993922529e-09 < dVar3)) {
        dVar3 = 1.0 / SQRT(dVar3);
        dVar4 = dVar4 * dVar3;
        dVar7 = dVar7 * dVar3;
        dVar2 = dVar2 * dVar3;
      }
    }
  }
  *(float *)(param_5 + 0x44) = SQRT(fVar1);
  *(float *)(param_5 + 0x34) = (float)dVar4;
  *(float *)(param_5 + 0x38) = (float)dVar7;
  *(float *)(param_5 + 0x3c) = (float)dVar2;
  return;
}



// FUNCTION 147c40886 FUN_147c40886 body=474 status=ok
// SIG undefined FUN_147c40886(void)

void FUN_147c40886(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  }
  if (0 < *(int *)(lVar9 + 0x40)) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + lVar8 * 8);
      if (lVar2 != 0) {
        lVar5 = FUN_1459e8bca();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          *(longlong *)(param_1 + 0x2e8) = lVar2;
          iVar1 = *(int *)(lVar9 + 0x88);
          if (0 < (longlong)iVar1) {
            iVar7 = -iVar1;
            uVar6 = (longlong)iVar1;
            do {
              lVar5 = *(longlong *)(lVar9 + 0x80);
              if (*(longlong *)(lVar5 + -8 + uVar6 * 8) == lVar2) {
                uVar4 = *(uint *)(lVar9 + 0x88);
                if (uVar6 != uVar4) {
                  memmove((void *)(lVar5 + uVar6 * 8 + -8),(void *)(lVar5 + uVar6 * 8),
                          (longlong)(int)(uVar4 + iVar7) << 3);
                  uVar4 = *(uint *)(lVar9 + 0x88);
                }
                *(uint *)(lVar9 + 0x88) = uVar4 - 1;
                FUN_147c0c70c((longlong *)(lVar9 + 0x80));
              }
              iVar7 = iVar7 + 1;
              bVar3 = 1 < uVar6;
              uVar6 = uVar6 - 1;
            } while (bVar3);
          }
          iVar1 = *(int *)(lVar9 + 0x78);
          if (0 < (longlong)iVar1) {
            iVar7 = -iVar1;
            uVar6 = (longlong)iVar1;
            do {
              lVar5 = *(longlong *)(lVar9 + 0x70);
              if (*(longlong *)(lVar5 + -8 + uVar6 * 8) == lVar2) {
                uVar4 = *(uint *)(lVar9 + 0x78);
                if (uVar6 != uVar4) {
                  memmove((void *)(lVar5 + uVar6 * 8 + -8),(void *)(lVar5 + uVar6 * 8),
                          (longlong)(int)(uVar4 + iVar7) << 3);
                  uVar4 = *(uint *)(lVar9 + 0x78);
                }
                *(uint *)(lVar9 + 0x78) = uVar4 - 1;
                FUN_147c0c70c((longlong *)(lVar9 + 0x70));
              }
              iVar7 = iVar7 + 1;
              bVar3 = 1 < uVar6;
              uVar6 = uVar6 - 1;
            } while (bVar3);
          }
          iVar1 = *(int *)(lVar9 + 0x68);
          if (0 < (longlong)iVar1) {
            iVar7 = -iVar1;
            uVar6 = (longlong)iVar1;
            do {
              lVar5 = *(longlong *)(lVar9 + 0x60);
              if (*(longlong *)(lVar5 + -8 + uVar6 * 8) == lVar2) {
                uVar4 = *(uint *)(lVar9 + 0x68);
                if (uVar6 != uVar4) {
                  memmove((void *)(lVar5 + uVar6 * 8 + -8),(void *)(lVar5 + uVar6 * 8),
                          (longlong)(int)(uVar4 + iVar7) << 3);
                  uVar4 = *(uint *)(lVar9 + 0x68);
                }
                *(uint *)(lVar9 + 0x68) = uVar4 - 1;
                FUN_147c447f0((longlong *)(lVar9 + 0x60));
              }
              iVar7 = iVar7 + 1;
              bVar3 = 1 < uVar6;
              uVar6 = uVar6 - 1;
            } while (bVar3);
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar9 + 0x40));
  }
  return;
}



// FUNCTION 147c40a62 FUN_147c40a62 body=1101 status=ok
// SIG undefined FUN_147c40a62(void)

void FUN_147c40a62(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_138 [36];
  float local_114;
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) == 0) {
      uVar14 = *(undefined8 *)(lVar3 + 0x268);
      uVar1 = *(undefined8 *)(lVar3 + 0x270);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar3 + 0x260);
      *(undefined8 *)(param_1 + 0x1e0) = uVar14;
      *(undefined8 *)(param_1 + 0x1e8) = uVar1;
      uVar17 = *(undefined4 *)(lVar3 + 0x264);
      uVar18 = *(undefined4 *)(lVar3 + 0x268);
      uVar29 = *(undefined4 *)(lVar3 + 0x26c);
      uVar1 = *(undefined8 *)(lVar3 + 0x270);
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar3 + 0x260);
      *(undefined4 *)(param_1 + 0x1c4) = uVar17;
      *(undefined4 *)(param_1 + 0x1c8) = uVar18;
      *(undefined4 *)(param_1 + 0x1cc) = uVar29;
      *(undefined8 *)(param_1 + 0x1d0) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0x1e8) = DAT_14c8464f0;
      uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(ulonglong *)(param_1 + 0x1d8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(param_1 + 0x1e0) = uVar1;
      uVar29 = DAT_14c8464e8._4_4_;
      uVar18 = (undefined4)DAT_14c8464e8;
      uVar17 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x1c0) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(param_1 + 0x1c4) = uVar17;
      *(undefined4 *)(param_1 + 0x1c8) = uVar18;
      *(undefined4 *)(param_1 + 0x1cc) = uVar29;
      *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f0;
    }
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    if (0 < (longlong)*(int *)(param_1 + 0x18c)) {
      lVar5 = *(longlong *)(param_1 + 0x168);
      lVar15 = (ulonglong)**(ushort **)(param_1 + 0x170) * (longlong)*(int *)(param_1 + 0x188);
      uVar1 = *(undefined8 *)(lVar5 + 0x18 + lVar15);
      uVar29 = (undefined4)uVar1;
      uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)(lVar5 + 0x20 + lVar15);
      uVar17 = (undefined4)uVar1;
      uVar18 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)(lVar5 + 0x28 + lVar15);
      uVar27 = (undefined4)uVar1;
      uVar30 = (undefined4)((ulonglong)uVar1 >> 0x20);
      dVar11 = -3.4028234663852886e+38;
      dVar25 = 3.4028234663852886e+38;
      lVar16 = 0;
      dVar2 = 3.4028234663852886e+38;
      dVar10 = 3.4028234663852886e+38;
      dVar19 = -3.4028234663852886e+38;
      dVar20 = -3.4028234663852886e+38;
      fVar28 = *(float *)((longlong)*(int *)(param_1 + 0x24) + 0x40 + lVar5 + lVar15);
      do {
        lVar15 = (ulonglong)(*(ushort **)(param_1 + 0x170))[lVar16] *
                 (longlong)*(int *)(param_1 + 0x188);
        local_114 = *(float *)((longlong)*(int *)(param_1 + 0x24) + 0x40 + lVar5 + lVar15);
        local_110 = *(double *)(lVar5 + 0x28 + lVar15);
        dVar6 = local_110 - (double)CONCAT44(uVar30,uVar27);
        dVar22 = *(double *)(lVar5 + 0x18 + lVar15);
        dVar24 = *(double *)(lVar5 + 0x20 + lVar15);
        dVar8 = dVar24 - (double)CONCAT44(uVar18,uVar17);
        dVar7 = dVar22 - (double)CONCAT44(uVar26,uVar29);
        dVar8 = SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8) * 0.25 +
                (double)((local_114 - fVar28) * 0.25 + local_114);
        dVar7 = local_110 - dVar8;
        dVar9 = dVar24 - dVar8;
        dVar6 = dVar22 - dVar8;
        dVar12 = dVar6;
        if (dVar10 <= dVar6) {
          dVar12 = dVar10;
        }
        dVar23 = dVar9;
        if (dVar2 <= dVar9) {
          dVar23 = dVar2;
        }
        dVar13 = dVar7;
        if (dVar25 <= dVar7) {
          dVar13 = dVar25;
        }
        if (dVar6 <= dVar20) {
          dVar6 = dVar20;
        }
        if (dVar9 <= dVar19) {
          dVar9 = dVar19;
        }
        dVar21 = local_110 + dVar8;
        dVar19 = dVar24 + dVar8;
        dVar20 = dVar8 + dVar22;
        if (dVar7 <= dVar11) {
          dVar7 = dVar11;
        }
        dVar10 = dVar20;
        if (dVar12 <= dVar20) {
          dVar10 = dVar12;
        }
        if (dVar20 <= dVar6) {
          dVar20 = dVar6;
        }
        dVar2 = dVar19;
        if (dVar23 <= dVar19) {
          dVar2 = dVar23;
        }
        if (dVar19 <= dVar9) {
          dVar19 = dVar9;
        }
        dVar25 = dVar21;
        if (dVar13 <= dVar21) {
          dVar25 = dVar13;
        }
        dVar11 = dVar21;
        if (dVar21 <= dVar7) {
          dVar11 = dVar7;
        }
        uVar27 = SUB84(local_110,0);
        uVar30 = (undefined4)((ulonglong)local_110 >> 0x20);
        uVar17 = SUB84(dVar24,0);
        uVar18 = (undefined4)((ulonglong)dVar24 >> 0x20);
        lVar16 = lVar16 + 1;
        uVar29 = SUB84(dVar22,0);
        uVar26 = (undefined4)((ulonglong)dVar22 >> 0x20);
        fVar28 = local_114;
      } while (*(int *)(param_1 + 0x18c) != lVar16);
      dVar22 = *(double *)(param_1 + 0x1c0);
      if (dVar10 <= *(double *)(param_1 + 0x1c0)) {
        dVar22 = dVar10;
      }
      dVar24 = *(double *)(param_1 + 0x1c8);
      if (dVar2 <= *(double *)(param_1 + 0x1c8)) {
        dVar24 = dVar2;
      }
      dVar6 = *(double *)(param_1 + 0x1d0);
      uVar29 = (undefined4)((ulonglong)dVar25 >> 0x20);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (int)((ulonglong)dVar6 >> 0x20);
      if (dVar25 <= dVar6) {
        uVar17 = SUB84(dVar25,0);
        uVar18 = uVar29;
      }
      dVar6 = *(double *)(param_1 + 0x1d8);
      if (*(double *)(param_1 + 0x1d8) <= dVar10) {
        dVar6 = dVar10;
      }
      dVar10 = *(double *)(param_1 + 0x1e0);
      if (*(double *)(param_1 + 0x1e0) <= dVar2) {
        dVar10 = dVar2;
      }
      dVar2 = *(double *)(param_1 + 0x1e8);
      uVar26 = SUB84(dVar2,0);
      uVar27 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= dVar25) {
        uVar26 = SUB84(dVar25,0);
        uVar27 = uVar29;
      }
      if (dVar20 <= dVar22) {
        dVar22 = dVar20;
      }
      *(double *)(param_1 + 0x1c0) = dVar22;
      if (dVar19 <= dVar24) {
        dVar24 = dVar19;
      }
      *(double *)(param_1 + 0x1c8) = dVar24;
      dVar2 = (double)CONCAT44(uVar18,uVar17);
      if (dVar11 <= (double)CONCAT44(uVar18,uVar17)) {
        dVar2 = dVar11;
      }
      *(double *)(param_1 + 0x1d0) = dVar2;
      if (dVar6 <= dVar20) {
        dVar6 = dVar20;
      }
      *(double *)(param_1 + 0x1d8) = dVar6;
      if (dVar10 <= dVar19) {
        dVar10 = dVar19;
      }
      *(double *)(param_1 + 0x1e0) = dVar10;
      dVar19 = (double)CONCAT44(uVar27,uVar26);
      if ((double)CONCAT44(uVar27,uVar26) <= dVar11) {
        dVar19 = dVar11;
      }
      *(double *)(param_1 + 0x1e8) = dVar19;
    }
    if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) != 0) {
      FUN_144a1c3a2((undefined4 *)(param_1 + 0x1c0),&local_108,lVar3 + 0x240);
      *(undefined8 *)(param_1 + 0x1f0) = local_d8;
      *(undefined8 *)(param_1 + 0x1e0) = local_e8;
      *(undefined8 *)(param_1 + 0x1e8) = uStack_e0;
      *(undefined8 *)(param_1 + 0x1d0) = local_f8;
      *(undefined8 *)(param_1 + 0x1d8) = uStack_f0;
      *(undefined4 *)(param_1 + 0x1c0) = local_108;
      *(undefined4 *)(param_1 + 0x1c4) = uStack_104;
      *(undefined4 *)(param_1 + 0x1c8) = uStack_100;
      *(undefined4 *)(param_1 + 0x1cc) = uStack_fc;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c40ec8 FUN_147c40ec8 body=138 status=ok
// SIG undefined FUN_147c40ec8(void)

undefined8 * FUN_147c40ec8(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((0 < *(int *)((longlong)param_1 + 0x18c)) && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
    FUN_147c09012(puVar2);
    *puVar2 = &PTR_FUN_14aa00808;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined4 *)(puVar2 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0xec) = 0;
    *(undefined4 *)(puVar2 + 0x1e) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xf4) = 1;
    cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 147c40fbe FUN_147c40fbe body=205 status=ok
// SIG undefined FUN_147c40fbe(void)

void FUN_147c40fbe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_14278f0ba(param_2);
  if ((iVar1 != 1) &&
     ((*(longlong *)(param_1 + 0x10) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5a8) == 0)))) {
    return;
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(param_1 + 0x188) * (longlong)*(int *)(param_1 + 0x194);
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)(*(int *)(param_1 + 0x194) * 2);
  }
  FUN_140347a44(param_2,800);
  FUN_140347a44(param_2,lVar2);
  FUN_140347a44(param_2,lVar3);
  lVar2 = (longlong)*(int *)(param_1 + 0x194) * 0x50;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x194) * 0x10;
  }
  FUN_140347a44(param_2,lVar2);
  return;
}



// FUNCTION 147c41142 FUN_147c41142 body=38 status=ok
// SIG undefined FUN_147c41142(void)

undefined8 FUN_147c41142(undefined8 param_1,int param_2)

{
  FUN_1436003aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c41184 FUN_147c41184 body=74 status=ok
// SIG undefined FUN_147c41184(void)

undefined8 * FUN_147c41184(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa06090;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_147c0b0b4(param_1 + 5);
  if (param_2 != 0) {
    FUN_147c08dc8(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 147c411e6 FUN_147c411e6 body=38 status=ok
// SIG undefined FUN_147c411e6(void)

undefined8 FUN_147c411e6(undefined8 param_1,int param_2)

{
  FUN_147c3d754();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c41232 FUN_147c41232 body=38 status=ok
// SIG undefined FUN_147c41232(void)

undefined8 FUN_147c41232(undefined8 param_1,int param_2)

{
  FUN_147c3df1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c41276 FUN_147c41276 body=38 status=ok
// SIG undefined FUN_147c41276(void)

undefined8 FUN_147c41276(undefined8 param_1,int param_2)

{
  FUN_147c3e04e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c412a0 FUN_147c412a0 body=38 status=ok
// SIG undefined FUN_147c412a0(void)

undefined8 FUN_147c412a0(undefined8 param_1,int param_2)

{
  FUN_1436003aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c412c6 FUN_147c412c6 body=52 status=ok
// SIG undefined FUN_147c412c6(void)

void FUN_147c412c6(longlong *param_1)

{
  FUN_147c412fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c412fa FUN_147c412fa body=332 status=ok
// SIG undefined FUN_147c412fa(void)

void FUN_147c412fa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (lVar2 != 0) {
        FUN_147c42cfe(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c41448 FUN_147c41448 body=138 status=ok
// SIG undefined FUN_147c41448(void)

code * FUN_147c41448(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtraChunkCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463f13b2;
}



// FUNCTION 147c414d2 FUN_147c414d2 body=132 status=ok
// SIG undefined FUN_147c414d2(void)

undefined1 * FUN_147c414d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e41628;
}



// FUNCTION 147c41556 FUN_147c41556 body=203 status=ok
// SIG undefined FUN_147c41556(void)

longlong FUN_147c41556(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InParticleIndices",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"PositionTexture",0);
  FUN_147440a6c(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"PositionTextureSampler",0);
  FUN_147440a6c(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"OutKeys",0);
  FUN_147440a6c(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"OutParticleIndices",0);
  return param_1;
}



// FUNCTION 147c416c2 FUN_147c416c2 body=59 status=ok
// SIG undefined FUN_147c416c2(void)

undefined8 FUN_147c416c2(longlong *param_1)

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



// FUNCTION 147c41708 FUN_147c41708 body=32 status=ok
// SIG undefined FUN_147c41708(void)

void FUN_147c41708(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147c41776 FUN_147c41776 body=38 status=ok
// SIG undefined FUN_147c41776(void)

undefined8 FUN_147c41776(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c4179e FUN_147c4179e body=105 status=ok
// SIG undefined FUN_147c4179e(void)

void FUN_147c4179e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar3 = param_1 + 8;
      }
      puVar1 = *(undefined8 **)(lVar3 + lVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar2 = *(int *)(param_1 + 0x70);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < *(int *)(param_1 + 0x74)) {
    return;
  }
  FUN_147c0bca4(param_1 + 8,0);
  return;
}



// FUNCTION 147c41808 FUN_147c41808 body=38 status=ok
// SIG undefined FUN_147c41808(void)

undefined8 FUN_147c41808(undefined8 param_1,int param_2)

{
  FUN_147c3e04e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


