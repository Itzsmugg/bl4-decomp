// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1456f5caa FUN_1456f5caa body=63 status=ok
// SIG undefined FUN_1456f5caa(void)

void FUN_1456f5caa(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1456f5cea(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402cdcf6(param_1);
    return;
  }
  FUN_1456f5d72(param_1);
  FUN_1456f5cea(param_1);
  return;
}



// FUNCTION 1456f5cea FUN_1456f5cea body=88 status=ok
// SIG undefined FUN_1456f5cea(void)

void FUN_1456f5cea(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1456f5d42 FUN_1456f5d42 body=48 status=ok
// SIG undefined FUN_1456f5d42(void)

void FUN_1456f5d42(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x310,8);
  }
  return;
}



// FUNCTION 1456f5d72 FUN_1456f5d72 body=325 status=ok
// SIG undefined FUN_1456f5d72(void)

void FUN_1456f5d72(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f5eb8 FUN_1456f5eb8 body=331 status=ok
// SIG undefined FUN_1456f5eb8(void)

void FUN_1456f5eb8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x30c + (longlong)iVar4 * 0x310) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456f6004 FUN_1456f6004 body=134 status=ok
// SIG undefined FUN_1456f6004(void)

void FUN_1456f6004(longlong *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_3) goto LAB_1456f6014;
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1456f6014:
  *param_2 = iVar1;
  return;
}



// FUNCTION 1456f608a FUN_1456f608a body=72 status=ok
// SIG undefined FUN_1456f608a(void)

void FUN_1456f608a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)param_1[3]) {
    param_1[3] = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 == (undefined8 *)*param_1) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x10,8);
      *puVar1 = 0;
      puVar1[1] = 0;
      return;
    }
  }
  param_1[2] = *puVar1;
  *puVar1 = 0;
  return;
}



// FUNCTION 1456f60d2 FUN_1456f60d2 body=132 status=ok
// SIG undefined FUN_1456f60d2(void)

void FUN_1456f60d2(longlong param_1,int param_2)

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



// FUNCTION 1456f6158 FUN_1456f6158 body=144 status=ok
// SIG undefined FUN_1456f6158(void)

bool FUN_1456f6158(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f6206 FUN_1456f6206 body=77 status=ok
// SIG undefined FUN_1456f6206(void)

void FUN_1456f6206(longlong *param_1)

{
  LOCK();
  *(uint *)(param_1 + 7) = (uint)(*(int *)((longlong)param_1 + 0x3c) != 0);
  UNLOCK();
  (**(code **)(*param_1 + 0x370))(param_1,1);
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0xec) = 1;
  UNLOCK();
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_1447f69b6(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1456f6254 FUN_1456f6254 body=149 status=ok
// SIG undefined FUN_1456f6254(void)

void FUN_1456f6254(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1402cfafa(param_2);
  uVar1 = FUN_1400b465c(param_1);
  plVar2 = (longlong *)FUN_1402cf94e(uVar1);
  if (plVar2 != (longlong *)0x0) {
    *(uint *)((longlong)plVar2 + 0x6c) =
         (*(uint *)((longlong)plVar2 + 0x6c) & 0xfffffffd) + (uint)param_2 * 2;
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      lVar3 = FUN_14494016c(lVar3,0,0);
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x39e) = *(byte *)(lVar3 + 0x39e) & 0xbf | param_2 << 6;
      }
    }
  }
  uVar1 = FUN_1402cfa70();
  if (param_2 != 0) {
    FUN_1456f62ea();
    return;
  }
  FUN_1456f62ec(uVar1);
  return;
}



// FUNCTION 1456f62ea FUN_1456f62ea body=1 status=ok
// SIG undefined FUN_1456f62ea(void)

void FUN_1456f62ea(void)

{
  return;
}



// FUNCTION 1456f62ec FUN_1456f62ec body=1 status=ok
// SIG undefined FUN_1456f62ec(void)

void FUN_1456f62ec(void)

{
  return;
}



// FUNCTION 1456f62ee FUN_1456f62ee body=184 status=ok
// SIG undefined FUN_1456f62ee(void)

undefined8 * FUN_1456f62ee(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_149e15b50;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  uVar1 = (ulonglong)(0.05 / DAT_14c83f418);
  param_1[10] = (longlong)(0.05 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar1 >> 0x3f |
                uVar1;
  QueryPerformanceCounter(&local_20);
  *(LARGE_INTEGER *)(param_1 + 8) = local_20;
  *(LARGE_INTEGER *)(param_1 + 9) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f63a8 FUN_1456f63a8 body=317 status=ok
// SIG undefined FUN_1456f63a8(void)

void FUN_1456f63a8(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_1414dac37();
  uVar3 = (**(code **)(*plVar2 + 0x98))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  plVar4 = (longlong *)(**(code **)(*plVar2 + 0xb8))(plVar2);
  if (((int)plVar4[1] != 0) && (puVar1 = (undefined8 *)*plVar4, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(plVar4 + 1) = 0;
  }
  uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*plVar2 + 200))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  uVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2);
  FUN_140457ffc(uVar3,param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x1e) = 0;
  UNLOCK();
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  (**(code **)(*param_1 + 0x370))(param_1,0);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    FUN_1447f69b6(param_1 + 0xb);
    return;
  }
  return;
}



// FUNCTION 1456f64e6 FUN_1456f64e6 body=31 status=ok
// SIG undefined FUN_1456f64e6(void)

undefined8 FUN_1456f64e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456f6506 FUN_1456f6506 body=144 status=ok
// SIG undefined FUN_1456f6506(void)

void FUN_1456f6506(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x81) {
      iVar5 = 0x80;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0xc0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xc0c) = iVar5;
    FUN_1456f6596(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456f6596 FUN_1456f6596 body=151 status=ok
// SIG undefined FUN_1456f6596(void)

void FUN_1456f6596(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc00,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc00),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc00,param_2,param_3,0x18);
  return;
}



// FUNCTION 1456f662e FUN_1456f662e body=40 status=ok
// SIG undefined FUN_1456f662e(void)

undefined8 FUN_1456f662e(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456f6656 FUN_1456f6656 body=3060 status=ok
// SIG undefined FUN_1456f6656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1456f6656(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar27;
  double dVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar29 [16];
  double dVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined4 local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined8 local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2b0 = param_6;
  local_2b8 = param_5;
  FUN_1402de574(param_1,param_2);
  uVar7 = FUN_140257578(param_1 + 0x20);
  local_2b8._0_4_ = 0x7f7fffff;
  FUN_144943230(param_3,&local_158,uVar7);
  fVar34 = (float)local_138;
  uVar7 = FUN_140257578(param_1 + 0x70);
  local_2b8 = CONCAT44(local_2b8._4_4_,0x7f7fffff);
  FUN_144943230(param_3,&local_158,uVar7);
  local_288 = (double)(float)local_138;
  local_158 = *param_2;
  dStack_150 = param_2[1];
  local_148 = param_2[2];
  dStack_140 = param_2[3];
  FUN_1448052ee(&local_158,&local_1d8);
  local_258 = 0;
  dStack_250 = dStack_1d0;
  local_248 = 0;
  FUN_144a7484c(&local_258,&local_158);
  dVar33 = dStack_140;
  dVar32 = local_148;
  dVar21 = dStack_150;
  dVar18 = local_158;
  *param_2 = local_158;
  param_2[1] = dStack_150;
  param_2[2] = local_148;
  param_2[3] = dStack_140;
  local_158 = param_2[0xc];
  dStack_150 = param_2[0xd];
  local_148 = param_2[0xe];
  dStack_140 = param_2[0xf];
  FUN_1448052ee(&local_158,&local_1d8);
  local_258 = 0;
  dStack_250 = dStack_1d0;
  local_248 = 0;
  puVar9 = &local_258;
  uVar5 = FUN_144a7484c(puVar9,&local_158);
  local_2a8 = local_158;
  dStack_2a0 = dStack_150;
  param_2[0xc] = local_158;
  param_2[0xd] = dStack_150;
  local_298 = local_148;
  dStack_290 = dStack_140;
  param_2[0xe] = local_148;
  param_2[0xf] = dStack_140;
  auVar29 = _DAT_149934d80;
  auVar16 = *(undefined1 (*) [16])(param_2 + 8);
  dVar35 = auVar16._0_8_;
  dVar37 = auVar16._8_8_;
  auVar1 = *(undefined1 (*) [16])(param_2 + 10);
  dVar2 = auVar1._0_8_;
  auVar16 = minpd(_DAT_149934d80,auVar16);
  auVar19 = minpd(ZEXT816(0x3ff0000000000000),auVar1);
  auVar23._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  iVar6 = movmskpd(uVar5,auVar23);
  auVar16._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar16._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  uVar8 = movmskpd((int)puVar9,auVar16);
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar15 = dVar32 * 0.0 * -1.0 + dVar21 * 0.0 + dVar18 * 1.0 * 1.0 + dVar33 * 0.0;
    dVar17 = dVar32 * 0.0 * 1.0 + dVar21 * 1.0 + dVar18 * 0.0 * -1.0 + dVar33 * 0.0;
    auVar38._0_8_ = dVar32 * 1.0 * 1.0 + ((dVar18 * 0.0 * 1.0 + dVar33 * 0.0) - dVar21 * 0.0);
    auVar38._8_8_ = dVar32 * 0.0 * -1.0 + ((dVar18 * 0.0 * -1.0 + dVar33 * 1.0) - dVar21 * 0.0);
    dVar35 = (double)-fVar34 * dVar35;
    dVar37 = dVar37 * 0.0;
    dVar31 = dVar2 * 0.0;
    dVar30 = auVar1._8_8_ * 0.0;
    dVar22 = dVar37 * dVar18 - dVar21 * dVar35;
    dVar27 = dVar31 * dVar21 - dVar32 * dVar37;
    dVar28 = dVar35 * dVar32 - dVar18 * dVar31;
    dVar3 = dVar30 * dVar33 - dVar33 * dVar30;
    dVar27 = dVar27 + dVar27;
    dVar28 = dVar28 + dVar28;
    dVar22 = dVar22 + dVar22;
    dVar3 = dVar3 + dVar3;
    dVar30 = (dVar3 * dVar33 - dVar3 * dVar33) + dVar33 * dVar3 + dVar30 + param_2[7];
    uVar5 = 0;
    dVar35 = (dVar22 * dVar21 - dVar32 * dVar28) + dVar33 * dVar27 + dVar35 + param_2[4];
    dVar37 = (dVar27 * dVar32 - dVar22 * dVar18) + dVar33 * dVar28 + dVar37 + param_2[5];
    dVar18 = (dVar28 * dVar18 - dVar21 * dVar27) + dVar33 * dVar22 + dVar31 + param_2[6];
  }
  else {
    dVar15 = dVar21 + dVar21;
    dVar17 = dVar32 + dVar32;
    dVar30 = dVar18 * (dVar18 + dVar18);
    local_1d8 = ((double)DAT_149934d80 - (dVar32 * dVar17 + dVar21 * dVar15)) * dVar35;
    dVar32 = (DAT_149934d80._8_8_ - (dVar32 * dVar17 + dVar30)) * dVar37;
    local_188 = (1.0 - (dVar30 + dVar21 * dVar15)) * dVar2;
    dVar30 = (dVar18 + dVar18) * dVar33;
    dStack_1d0 = (dVar15 * dVar18 + dVar17 * dVar33) * dVar35;
    local_1a8 = (dVar17 * dVar21 + dVar30) * dVar37;
    local_198 = (dVar15 * dVar33 + dVar18 * dVar17) * dVar2;
    dStack_190 = (dVar17 * dVar21 - dVar30) * dVar2;
    local_1c8 = (dVar18 * dVar17 - dVar15 * dVar33) * dVar35;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar32,0);
    local_1b8._0_8_ = (dVar15 * dVar18 - dVar17 * dVar33) * dVar37;
    local_1b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_2[4];
    dStack_170 = param_2[5];
    local_168 = param_2[6];
    uStack_160 = 0x3ff0000000000000;
    local_258 = 0x3ff0000000000000;
    dStack_250 = 0.0;
    local_248 = 0;
    uStack_240 = 0;
    auVar23 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0x3ff0000000000000;
    uStack_200 = 0;
    uStack_1f0 = 0;
    local_238 = auVar23;
    local_1f8 = (double)-fVar34;
    local_1e8 = auVar23;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar37);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar35);
    auVar16 = blendvpd(_DAT_149936790,auVar29,auVar19);
    uVar11 = -(ulonglong)(0.0 <= dVar2 * 1.0);
    dVar35 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
    dVar37 = auVar16._0_8_;
    local_148 = local_148 * dVar37;
    dStack_150 = dStack_150 * dVar37;
    local_158 = local_158 * dVar37;
    dVar37 = auVar16._8_8_;
    local_128 = local_128 * dVar37;
    local_130 = local_130 * dVar37;
    local_138 = dVar37 * local_138;
    local_108 = local_108 * dVar35;
    local_110 = local_110 * dVar35;
    local_118 = dVar35 * local_118;
    pdVar10 = &local_278;
    iVar6 = FUN_14481fd10(pdVar10,&local_158);
    uVar5 = SUB84(pdVar10,0);
    dVar35 = local_268 * local_268 + local_278 * local_278;
    dVar37 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar25._0_8_ = dVar35 + dVar37;
    auVar25._8_8_ = dVar35 + dVar37;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar16 = sqrtpd(auVar25,auVar25);
    auVar16 = divpd(auVar29,auVar16);
    auVar29._0_8_ = auVar16._0_8_ * local_268;
    auVar29._8_8_ = auVar16._8_8_ * dStack_260;
    dVar15 = (double)((ulonglong)(local_278 * auVar16._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    dVar17 = (double)((ulonglong)(dStack_270 * auVar16._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    auVar38 = blendvpd(auVar23,auVar29,auVar12);
    dVar30 = 0.0;
    dVar35 = local_f8;
    dVar37 = dStack_f0;
    dVar18 = local_e8;
  }
  dVar21 = auVar1._8_8_ * 0.0;
  *param_2 = dVar15;
  param_2[1] = dVar17;
  *(undefined1 (*) [16])(param_2 + 2) = auVar38;
  param_2[4] = dVar35;
  param_2[5] = dVar37;
  param_2[6] = dVar18;
  param_2[7] = dVar30;
  auVar1._8_4_ = SUB84(dVar21,0);
  auVar1._0_8_ = dVar2 * 1.0;
  auVar1._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar1;
  auVar29 = _DAT_149934d80;
  auVar16 = *(undefined1 (*) [16])(param_2 + 0x14);
  dVar35 = auVar16._0_8_;
  dVar37 = auVar16._8_8_;
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x16);
  dVar2 = auVar1._0_8_;
  auVar16 = minpd(_DAT_149934d80,auVar16);
  auVar23 = minpd(ZEXT816(0x3ff0000000000000),auVar1);
  auVar20._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  iVar6 = movmskpd(iVar6,auVar20);
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  uVar8 = movmskpd(uVar5,auVar24);
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar18 = local_298 * 0.0 * -1.0 + dStack_2a0 * 0.0 + local_2a8 * 1.0 * 1.0 + dStack_290 * 0.0;
    dVar21 = local_298 * 0.0 * 1.0 + dStack_2a0 * 1.0 + local_2a8 * 0.0 * -1.0 + dStack_290 * 0.0;
    auVar36._0_8_ =
         local_298 * 1.0 * 1.0 + ((local_2a8 * 0.0 * 1.0 + dStack_290 * 0.0) - dStack_2a0 * 0.0);
    auVar36._8_8_ =
         local_298 * 0.0 * -1.0 + ((local_2a8 * 0.0 * -1.0 + dStack_290 * 1.0) - dStack_2a0 * 0.0);
    dVar35 = local_288 * dVar35;
    dVar37 = dVar37 * 0.0;
    dVar32 = dVar2 * 0.0;
    dVar33 = auVar1._8_8_ * 0.0;
    dVar30 = dVar37 * local_2a8 - dStack_2a0 * dVar35;
    dVar31 = dVar32 * dStack_2a0 - local_298 * dVar37;
    dVar15 = dVar35 * local_298 - local_2a8 * dVar32;
    dVar17 = dVar33 * dStack_290 - dStack_290 * dVar33;
    dVar31 = dVar31 + dVar31;
    dVar15 = dVar15 + dVar15;
    dVar30 = dVar30 + dVar30;
    dVar17 = dVar17 + dVar17;
    local_f8 = (dVar30 * dStack_2a0 - local_298 * dVar15) + dStack_290 * dVar31 + dVar35 +
               param_2[0x10];
    dStack_f0 = (dVar31 * local_298 - dVar30 * local_2a8) + dStack_290 * dVar15 + dVar37 +
                param_2[0x11];
    local_e8 = (dVar15 * local_2a8 - dStack_2a0 * dVar31) + dStack_290 * dVar30 + dVar32 +
               param_2[0x12];
    dVar35 = (dVar17 * dStack_290 - dVar17 * dStack_290) + dStack_290 * dVar17 + dVar33 +
             param_2[0x13];
  }
  else {
    dVar18 = dStack_2a0 + dStack_2a0;
    dVar21 = local_298 + local_298;
    dVar33 = local_2a8 * (local_2a8 + local_2a8);
    local_1d8 = ((double)DAT_149934d80 - (local_298 * dVar21 + dStack_2a0 * dVar18)) * dVar35;
    local_188 = (1.0 - (dVar33 + dStack_2a0 * dVar18)) * dVar2;
    dVar32 = (local_2a8 + local_2a8) * dStack_290;
    dStack_1d0 = (dVar18 * local_2a8 + dVar21 * dStack_290) * dVar35;
    local_1a8 = (dVar21 * dStack_2a0 + dVar32) * dVar37;
    local_198 = (dVar18 * dStack_290 + local_2a8 * dVar21) * dVar2;
    dStack_190 = (dVar21 * dStack_2a0 - dVar32) * dVar2;
    local_1c8 = (local_2a8 * dVar21 - dVar18 * dStack_290) * dVar35;
    uStack_1c0 = 0;
    local_1b8._8_8_ = (DAT_149934d80._8_8_ - (local_298 * dVar21 + dVar33)) * dVar37;
    local_1b8._0_8_ = (dVar18 * local_2a8 - dVar21 * dStack_290) * dVar37;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_2[0x10];
    dStack_170 = param_2[0x11];
    local_168 = param_2[0x12];
    uStack_160 = 0x3ff0000000000000;
    local_258 = 0x3ff0000000000000;
    dStack_250 = 0.0;
    local_248 = 0;
    uStack_240 = 0;
    auVar23 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0x3ff0000000000000;
    uStack_200 = 0;
    local_1f8 = local_288;
    uStack_1f0 = 0;
    local_238 = auVar23;
    local_1e8 = auVar23;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar13._8_8_ = -(ulonglong)(0.0 <= dVar37);
    auVar13._0_8_ = -(ulonglong)(0.0 <= dVar35);
    auVar16 = blendvpd(_DAT_149936790,auVar29,auVar13);
    uVar11 = -(ulonglong)(0.0 <= dVar2 * 1.0);
    dVar35 = (double)(~uVar11 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar11 >> 0x20) & 0x3ff00000) << 0x20);
    dVar37 = auVar16._0_8_;
    local_148 = local_148 * dVar37;
    dStack_150 = dStack_150 * dVar37;
    local_158 = local_158 * dVar37;
    dVar37 = auVar16._8_8_;
    local_128 = local_128 * dVar37;
    local_130 = local_130 * dVar37;
    local_138 = dVar37 * local_138;
    local_108 = local_108 * dVar35;
    local_110 = local_110 * dVar35;
    local_118 = dVar35 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar35 = local_268 * local_268 + local_278 * local_278;
    dVar37 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar26._0_8_ = dVar35 + dVar37;
    auVar26._8_8_ = dVar35 + dVar37;
    auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
    auVar16 = sqrtpd(auVar26,auVar26);
    auVar16 = divpd(auVar29,auVar16);
    auVar39._0_8_ = auVar16._0_8_ * local_268;
    auVar39._8_8_ = auVar16._8_8_ * dStack_260;
    dVar18 = (double)((ulonglong)(local_278 * auVar16._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
    dVar21 = (double)((ulonglong)(dStack_270 * auVar16._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
    auVar36 = blendvpd(auVar23,auVar39,auVar14);
    dVar35 = 0.0;
  }
  dVar37 = auVar1._8_8_ * 0.0;
  param_2[0xc] = dVar18;
  param_2[0xd] = dVar21;
  *(undefined1 (*) [16])(param_2 + 0xe) = auVar36;
  param_2[0x10] = local_f8;
  param_2[0x11] = dStack_f0;
  param_2[0x12] = local_e8;
  param_2[0x13] = dVar35;
  auVar4._8_4_ = SUB84(dVar37,0);
  auVar4._0_8_ = dVar2 * 1.0;
  auVar4._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x16) = auVar4;
  if ((local_d0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f724c FUN_1456f724c body=11072 status=ok
// SIG undefined FUN_1456f724c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1456f724c(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,double *param_4,
             double *param_5,int param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [8];
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  double dVar19;
  double dVar33;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar80;
  double dVar81;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar88;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar89;
  double dVar90;
  double dVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auStack_3c8 [32];
  double *local_3a8;
  int local_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [8];
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [96];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_3a0 = param_6;
  local_3a8 = param_5;
  FUN_1402de574();
  uVar11 = FUN_140257578(param_1 + 0x128);
  local_3a8._0_4_ = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x34);
  FUN_144943230(param_3,&local_2e8,uVar11);
  local_3a8 = (double *)CONCAT44(local_3a8._4_4_,0x7f7fffff);
  uVar9 = FUN_144943230(param_3,local_348,uVar11);
  auVar78 = _DAT_149934d80;
  uVar12 = (undefined4)param_3;
  dVar33 = local_298._0_8_;
  dVar19 = (double)DAT_149934d80;
  dVar51 = DAT_149934d80._8_8_;
  if (param_6 == 1) {
    dVar55 = ABS(local_2a8._0_8_);
    dVar57 = ABS(local_2a8._8_8_);
    auVar85._8_8_ = -(ulonglong)(9.99999993922529e-09 < dVar57);
    auVar85._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar55);
    uVar10 = movmskpd(uVar9,auVar85);
    auVar52._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_298._8_8_));
    auVar52._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar33));
    iVar13 = movmskpd(uVar12,auVar52);
    uVar14 = iVar13 << 2 | uVar10;
    if (uVar14 == 0) {
      local_358 = DAT_14c8464a0;
      dStack_350 = DAT_14c8464a8;
      local_368 = (undefined1  [8])DAT_14c8464b0;
      dStack_360 = DAT_14c8464b8;
      local_398._8_8_ = uRam000000014c8464d8;
      local_398._0_8_ = DAT_14c8464d0;
      dVar55 = DAT_14c8464c0;
      dVar57 = DAT_14c8464c8;
      dVar33 = DAT_14c846480;
      dStack_2e0 = DAT_14c846488;
      local_2d8 = DAT_14c846490;
      dStack_2d0 = DAT_14c846498;
    }
    else {
      auVar52 = divpd(_DAT_149934d80,local_2a8);
      auVar85 = divpd(ZEXT816(0x3ff0000000000000),local_298);
      dVar55 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar55) & auVar52._0_8_);
      dVar57 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar57) & auVar52._8_8_);
      local_398._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar33)) & auVar85._0_8_;
      local_2d8 = local_2d8 * -1.0;
      dStack_2d0 = dStack_2d0 * 1.0;
      dVar33 = -local_2e8;
      dStack_2e0 = -dStack_2e0;
      local_2c8 = local_2c8 * dVar55;
      dStack_2c0 = dStack_2c0 * dVar57;
      local_398._8_8_ = 0;
      local_2b8 = local_2b8 * (double)local_398._0_8_;
      dVar65 = dStack_2c0 * dVar33 - dStack_2e0 * local_2c8;
      dVar56 = local_2b8 * dStack_2e0 - local_2d8 * dStack_2c0;
      dVar45 = local_2c8 * local_2d8 - dVar33 * local_2b8;
      dVar56 = dVar56 + dVar56;
      dVar45 = dVar45 + dVar45;
      dVar65 = dVar65 + dVar65;
      local_358 = 0.0 - ((dVar65 * dStack_2e0 - dVar45 * local_2d8) +
                        dStack_2d0 * dVar56 + local_2c8);
      dStack_350 = 0.0 - (dVar65 * local_2e8 + local_2d8 * dVar56 + dStack_2d0 * dVar45 + dStack_2c0
                         );
      local_368 = (undefined1  [8])
                  (0.0 - (dStack_2d0 * dVar65 + local_2b8 + (dVar45 * dVar33 - dVar56 * dStack_2e0))
                  );
      dStack_360 = 0.0;
    }
    auVar85 = *(undefined1 (*) [16])(param_5 + 8);
    dVar65 = auVar85._0_8_;
    dVar56 = auVar85._8_8_;
    auVar52 = *(undefined1 (*) [16])(param_5 + 10);
    auVar71._8_8_ = dVar57;
    auVar71._0_8_ = dVar55;
    auVar85 = minpd(auVar71,auVar85);
    auVar71 = minpd(local_398,auVar52);
    auVar47._8_8_ = -(ulonglong)(auVar85._8_8_ < 0.0);
    auVar47._0_8_ = -(ulonglong)(auVar85._0_8_ < 0.0);
    iVar13 = movmskpd(uVar10,auVar47);
    auVar67._8_8_ = -(ulonglong)(auVar71._8_8_ < 0.0);
    auVar67._0_8_ = -(ulonglong)(auVar71._0_8_ < 0.0);
    uVar10 = movmskpd(uVar14,auVar67);
    local_388._8_8_ = auVar52._8_8_;
    local_388._0_8_ = auVar52._0_8_;
    if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar80 = *param_5;
      dVar88 = param_5[1];
      dVar19 = param_5[3];
      dVar51 = param_5[3];
      dVar83 = param_5[1];
      dVar45 = param_5[1];
      dVar75 = param_5[2];
      dVar82 = param_5[3];
      dVar74 = param_5[2];
      dVar81 = param_5[2];
      dVar91 = dStack_2e0 * dVar74 * -1.0 +
               local_2d8 * dVar83 + dStack_2d0 * *param_5 * 1.0 + dVar33 * dVar19;
      dVar94 = dVar33 * dVar81 * 1.0 +
               dStack_2d0 * dVar45 + local_2d8 * *param_5 * -1.0 + dStack_2e0 * dVar51;
      auVar78._0_8_ =
           dStack_2d0 * dVar74 * 1.0 +
           ((*param_5 * dStack_2e0 * 1.0 + local_2d8 * dVar19) - dVar33 * dVar83);
      auVar78._8_8_ =
           local_2d8 * dVar81 * -1.0 +
           ((*param_5 * dVar33 * -1.0 + dStack_2d0 * dVar51) - dStack_2e0 * dVar45);
      local_358 = local_358 * dVar65;
      dStack_350 = dStack_350 * dVar56;
      dVar37 = (double)local_368 * (double)local_388._0_8_;
      dStack_360 = dStack_360 * (double)local_388._8_8_;
      dVar33 = dStack_350 * dVar80 - local_358 * dVar88;
      dVar90 = dVar37 * dVar88 - dStack_350 * dVar75;
      dVar74 = local_358 * dVar75 - dVar37 * dVar80;
      dVar45 = dStack_360 * dVar82 - dStack_360 * dVar82;
      dVar90 = dVar90 + dVar90;
      dVar74 = dVar74 + dVar74;
      dVar33 = dVar33 + dVar33;
      dVar45 = dVar45 + dVar45;
      dVar83 = (dVar33 * dVar88 - dVar75 * dVar74) + dVar19 * dVar90 + local_358 + param_5[4];
      dVar81 = (dVar90 * dVar75 - dVar33 * dVar80) + dVar51 * dVar74 + dStack_350 + param_5[5];
      local_358 = (dVar74 * dVar80 - dVar88 * dVar90) + dVar19 * dVar33 + dVar37 + param_5[6];
      dStack_350 = (dVar45 * dVar82 - dVar45 * dVar82) + dVar51 * dVar45 + dStack_360 + param_5[7];
      local_378._8_8_ = (double)local_398._8_8_ * (double)local_388._8_8_;
      local_378._0_8_ = (double)local_398._0_8_ * (double)local_388._0_8_;
      local_388._8_8_ = dVar57 * dVar56;
      local_388._0_8_ = dVar55 * dVar65;
      uVar9 = 0;
    }
    else {
      dVar88 = *param_5;
      dVar75 = param_5[1];
      dVar82 = param_5[2];
      dVar91 = dVar75 + dVar75;
      dVar81 = dVar82 + dVar82;
      dVar94 = dVar88 * (dVar88 + dVar88);
      dVar45 = param_5[3];
      dVar74 = dVar81 * dVar45;
      dVar80 = (dVar88 + dVar88) * param_5[3];
      dVar45 = dVar91 * dVar45;
      local_378._8_8_ = (double)local_398._8_8_ * (double)local_388._8_8_;
      local_378._0_8_ = (double)local_398._0_8_ * (double)local_388._0_8_;
      local_198 = (1.0 - (dVar94 + dVar75 * dVar91)) * (double)local_388._0_8_;
      dVar90 = (dVar45 + *param_5 * dVar81) * (double)local_388._0_8_;
      local_1c8 = (dVar91 * dVar88 - dVar74) * dVar56;
      dVar83 = (dVar81 * dVar75 - dVar80) * (double)local_388._0_8_;
      local_388._8_8_ = dVar57 * dVar56;
      local_388._0_8_ = dVar55 * dVar65;
      local_1e8 = (dVar19 - (dVar82 * dVar81 + dVar75 * dVar91)) * dVar65;
      dStack_1c0 = (dVar51 - (dVar82 * dVar81 + dVar94)) * dVar56;
      dStack_1e0 = (dVar91 * dVar88 + dVar74) * dVar65;
      local_1b8 = (dVar81 * dVar75 + dVar80) * dVar56;
      local_1d8 = (*param_5 * dVar81 - dVar45) * dVar65;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar83,0);
      local_1a8._0_8_ = dVar90;
      local_1a8._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
      uStack_190 = 0;
      local_188 = param_5[4];
      dStack_180 = param_5[5];
      local_178 = param_5[6];
      uStack_170 = 0x3ff0000000000000;
      dVar45 = dStack_2e0 + dStack_2e0;
      dVar83 = local_2d8 + local_2d8;
      dVar56 = dVar33 * (dVar33 + dVar33);
      local_218 = (1.0 - (dVar56 + dStack_2e0 * dVar45)) * (double)local_398._0_8_;
      dVar81 = (dVar33 + dVar33) * dStack_2d0;
      dVar65 = (dVar83 * dStack_2e0 - dVar81) * (double)local_398._0_8_;
      local_268 = (dVar19 - (local_2d8 * dVar83 + dStack_2e0 * dVar45)) * dVar55;
      dVar19 = (dVar51 - (local_2d8 * dVar83 + dVar56)) * dVar57;
      dStack_260 = (dVar45 * dVar33 + dVar83 * dStack_2d0) * dVar55;
      local_238 = (dVar83 * dStack_2e0 + dVar81) * dVar57;
      local_258 = (dVar33 * dVar83 - dVar45 * dStack_2d0) * dVar55;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar19,0);
      local_248._0_8_ = (dVar45 * dVar33 - dVar83 * dStack_2d0) * dVar57;
      local_248._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar65,0);
      local_228._0_8_ = (dVar33 * dVar83 + dVar45 * dStack_2d0) * (double)local_398._0_8_;
      local_228._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      uStack_210 = 0;
      local_208 = local_358;
      dStack_200 = dStack_350;
      local_1f8 = (double)local_368;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar20._8_8_ = -(ulonglong)(0.0 <= (double)local_388._8_8_);
      auVar20._0_8_ = -(ulonglong)(0.0 <= (double)local_388._0_8_);
      auVar85 = blendvpd(_DAT_149936790,auVar78,auVar20);
      dVar19 = (double)(~-(ulonglong)(0.0 <= (double)local_378._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_378._0_8_) & 0x3ff0000000000000);
      dVar33 = auVar85._0_8_;
      local_158 = local_158 * dVar33;
      local_160 = local_160 * dVar33;
      local_168 = local_168 * dVar33;
      dVar33 = auVar85._8_8_;
      local_138 = local_138 * dVar33;
      local_140 = local_140 * dVar33;
      local_148 = dVar33 * local_148;
      local_118 = local_118 * dVar19;
      local_120 = local_120 * dVar19;
      local_128 = dVar19 * local_128;
      pdVar16 = &local_288;
      iVar13 = FUN_14481fd10(pdVar16,&local_168);
      uVar9 = SUB84(pdVar16,0);
      dVar19 = local_278 * local_278 + local_288 * local_288;
      dVar33 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar38._0_8_ = dVar19 + dVar33;
      auVar38._8_8_ = dVar19 + dVar33;
      auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar85 = sqrtpd(auVar38,auVar38);
      auVar78 = divpd(auVar78,auVar85);
      auVar95._0_8_ = auVar78._0_8_ * local_278;
      auVar95._8_8_ = auVar78._8_8_ * dStack_270;
      dVar91 = (double)((ulonglong)(local_288 * auVar78._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
      dVar94 = (double)((ulonglong)(dStack_280 * auVar78._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
      auVar78 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar95,auVar21);
      local_358 = local_f8;
      dStack_350 = 0.0;
      dVar83 = local_108;
      dVar81 = dStack_100;
    }
    auVar71 = _DAT_149934d80;
    auVar85 = *(undefined1 (*) [16])(param_4 + 8);
    dVar19 = auVar85._0_8_;
    dVar51 = auVar85._8_8_;
    auVar52 = *(undefined1 (*) [16])(param_4 + 10);
    dVar33 = auVar52._0_8_;
    dVar55 = auVar52._8_8_;
    auVar85 = minpd(local_388,auVar85);
    auVar52 = minpd(local_378,auVar52);
    auVar22._8_8_ = -(ulonglong)(auVar85._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar85._0_8_ < 0.0);
    iVar13 = movmskpd(iVar13,auVar22);
    auVar61._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar61._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar10 = movmskpd(uVar9,auVar61);
    dVar57 = auVar78._0_8_;
    dVar65 = auVar78._8_8_;
    if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar82 = *param_4;
      dVar90 = param_4[1];
      dVar56 = param_4[3];
      dVar45 = param_4[3];
      dVar80 = param_4[1];
      dVar74 = param_4[1];
      dVar37 = param_4[2];
      dVar46 = param_4[3];
      dVar88 = param_4[2];
      dVar75 = param_4[2];
      dVar58 = dVar94 * dVar88 * -1.0 + dVar57 * dVar80 + dVar65 * *param_4 * 1.0 + dVar91 * dVar56;
      dVar66 = dVar91 * dVar75 * 1.0 + dVar65 * dVar74 + dVar57 * *param_4 * -1.0 + dVar94 * dVar45;
      auVar97._0_8_ =
           dVar65 * dVar88 * 1.0 + ((*param_4 * dVar94 * 1.0 + dVar57 * dVar56) - dVar91 * dVar80);
      auVar97._8_8_ =
           dVar57 * dVar75 * -1.0 + ((*param_4 * dVar91 * -1.0 + dVar65 * dVar45) - dVar94 * dVar74)
      ;
      dVar83 = dVar83 * dVar19;
      dVar81 = dVar81 * dVar51;
      dVar91 = local_358 * dVar33;
      dVar94 = dStack_350 * dVar55;
      dVar74 = dVar81 * dVar82 - dVar83 * dVar90;
      dVar80 = dVar91 * dVar90 - dVar81 * dVar37;
      dVar88 = dVar83 * dVar37 - dVar91 * dVar82;
      dVar75 = dVar94 * dVar46 - dVar94 * dVar46;
      dVar80 = dVar80 + dVar80;
      dVar88 = dVar88 + dVar88;
      dVar74 = dVar74 + dVar74;
      dVar75 = dVar75 + dVar75;
      dVar57 = (dVar74 * dVar90 - dVar37 * dVar88) + dVar56 * dVar80 + dVar83 + param_4[4];
      dVar65 = (dVar80 * dVar37 - dVar74 * dVar82) + dVar45 * dVar88 + dVar81 + param_4[5];
      dVar56 = (dVar88 * dVar82 - dVar90 * dVar80) + dVar56 * dVar74 + dVar91 + param_4[6];
      dVar45 = (dVar75 * dVar46 - dVar75 * dVar46) + dVar45 * dVar75 + dVar94 + param_4[7];
      dStack_360 = (double)local_378._8_8_ * dVar55;
      local_368 = (undefined1  [8])((double)local_378._0_8_ * dVar33);
      local_398._8_8_ = (double)local_388._8_8_ * dVar51;
      local_398._0_8_ = (double)local_388._0_8_ * dVar19;
      uVar9 = 0;
    }
    else {
      dVar88 = *param_4;
      dVar75 = param_4[1];
      dVar82 = param_4[2];
      dVar90 = dVar75 + dVar75;
      dVar45 = dVar82 + dVar82;
      dVar37 = dVar88 * (dVar88 + dVar88);
      dVar56 = param_4[3];
      dVar74 = dVar45 * dVar56;
      dVar80 = (dVar88 + dVar88) * param_4[3];
      dVar56 = dVar90 * dVar56;
      dStack_360 = (double)local_378._8_8_ * dVar55;
      local_368 = (undefined1  [8])((double)local_378._0_8_ * dVar33);
      local_198 = (1.0 - (dVar37 + dVar75 * dVar90)) * dVar33;
      local_1c8 = (dVar90 * dVar88 - dVar74) * dVar51;
      local_398._8_8_ = (double)local_388._8_8_ * dVar51;
      local_398._0_8_ = (double)local_388._0_8_ * dVar19;
      local_1e8 = (1.0 - (dVar82 * dVar45 + dVar75 * dVar90)) * dVar19;
      dStack_1c0 = (1.0 - (dVar82 * dVar45 + dVar37)) * dVar51;
      dStack_1e0 = (dVar90 * dVar88 + dVar74) * dVar19;
      local_1b8 = (dVar45 * dVar75 + dVar80) * dVar51;
      local_1d8 = (*param_4 * dVar45 - dVar56) * dVar19;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_8_ = (dVar45 * dVar75 - dVar80) * dVar33;
      local_1a8._0_8_ = (dVar56 + *param_4 * dVar45) * dVar33;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar51 = dVar94 + dVar94;
      dVar19 = dVar57 + dVar57;
      dVar55 = dVar91 * (dVar91 + dVar91);
      local_218 = (1.0 - (dVar55 + dVar94 * dVar51)) * (double)local_378._0_8_;
      dVar33 = (dVar91 + dVar91) * dVar65;
      local_268 = ((double)DAT_149934d80 - (dVar57 * dVar19 + dVar94 * dVar51)) *
                  (double)local_388._0_8_;
      dStack_260 = (dVar51 * dVar91 + dVar19 * dVar65) * (double)local_388._0_8_;
      local_238 = (dVar19 * dVar94 + dVar33) * (double)local_388._8_8_;
      local_258 = (dVar91 * dVar19 - dVar51 * dVar65) * (double)local_388._0_8_;
      uStack_250 = 0;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar57 * dVar19 + dVar55)) * (double)local_388._8_8_
      ;
      local_248._0_8_ = (dVar51 * dVar91 - dVar19 * dVar65) * (double)local_388._8_8_;
      uStack_230 = 0;
      local_228._8_8_ = (dVar19 * dVar94 - dVar33) * (double)local_378._0_8_;
      local_228._0_8_ = (dVar91 * dVar19 + dVar51 * dVar65) * (double)local_378._0_8_;
      uStack_210 = 0;
      local_1f8 = local_358;
      uStack_1f0 = 0x3ff0000000000000;
      local_208 = dVar83;
      dStack_200 = dVar81;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar23._8_8_ = -(ulonglong)(0.0 <= (double)local_398._8_8_);
      auVar23._0_8_ = -(ulonglong)(0.0 <= (double)local_398._0_8_);
      auVar78 = blendvpd(_DAT_149936790,auVar71,auVar23);
      dVar19 = (double)(~-(ulonglong)(0.0 <= (double)local_368) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_368) & 0x3ff0000000000000);
      dVar33 = auVar78._0_8_;
      local_158 = local_158 * dVar33;
      local_160 = local_160 * dVar33;
      local_168 = local_168 * dVar33;
      dVar33 = auVar78._8_8_;
      local_138 = local_138 * dVar33;
      local_140 = local_140 * dVar33;
      local_148 = dVar33 * local_148;
      local_118 = local_118 * dVar19;
      local_120 = local_120 * dVar19;
      local_128 = dVar19 * local_128;
      pdVar16 = &local_288;
      iVar13 = FUN_14481fd10(pdVar16,&local_168);
      uVar9 = SUB84(pdVar16,0);
      dVar19 = local_278 * local_278 + local_288 * local_288;
      dVar33 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar39._0_8_ = dVar19 + dVar33;
      auVar39._8_8_ = dVar19 + dVar33;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
      auVar78 = sqrtpd(auVar39,auVar39);
      auVar78 = divpd(auVar71,auVar78);
      auVar48._0_8_ = auVar78._0_8_ * local_278;
      auVar48._8_8_ = auVar78._8_8_ * dStack_270;
      dVar58 = (double)((ulonglong)(local_288 * auVar78._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
      dVar66 = (double)((ulonglong)(dStack_280 * auVar78._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
      auVar97 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar24);
      dVar45 = 0.0;
      dVar57 = local_108;
      dVar65 = dStack_100;
      dVar56 = local_f8;
    }
    *(double *)*param_2 = dVar58;
    *(double *)(*param_2 + 8) = dVar66;
    param_2[1] = auVar97;
    *(double *)param_2[2] = dVar57;
    *(double *)(param_2[2] + 8) = dVar65;
    *(double *)param_2[3] = dVar56;
    *(double *)(param_2[3] + 8) = dVar45;
    param_2[4] = local_398;
    param_2[5] = _local_368;
    auVar85 = _DAT_149934d80;
    local_378 = *(undefined1 (*) [16])(param_1 + 0x80);
    auVar78 = *(undefined1 (*) [16])(param_1 + 0x90);
    dVar19 = auVar78._0_8_;
    auVar52 = minpd(local_378,local_398);
    auVar71 = minpd(auVar78,_local_368);
    auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    iVar13 = movmskpd(iVar13,auVar53);
    auVar68._8_8_ = -(ulonglong)(auVar71._8_8_ < 0.0);
    auVar68._0_8_ = -(ulonglong)(auVar71._0_8_ < 0.0);
    uVar10 = movmskpd(uVar9,auVar68);
    dVar51 = auVar97._0_8_;
    dVar55 = auVar97._8_8_;
    uVar11 = local_398._0_8_;
    uVar3 = local_398._8_8_;
    auVar8 = local_368;
    dVar33 = dStack_360;
    uVar4 = local_378._0_8_;
    uVar5 = local_378._8_8_;
    if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar83 = *(double *)(param_1 + 0x40);
      dVar81 = *(double *)(param_1 + 0x48);
      dVar74 = *(double *)(param_1 + 0x50);
      dVar80 = *(double *)(param_1 + 0x58);
      dVar88 = dVar81 * dVar51 * -1.0 + dVar74 * dVar66 + dVar58 * dVar80 * 1.0 + dVar55 * dVar83;
      dVar75 = dVar83 * dVar51 * 1.0 + dVar80 * dVar66 + dVar58 * dVar74 * -1.0 + dVar55 * dVar81;
      auVar72._0_8_ =
           dVar80 * dVar51 * 1.0 + ((dVar58 * dVar81 * 1.0 + dVar55 * dVar74) - dVar66 * dVar83);
      auVar72._8_8_ =
           dVar74 * dVar51 * -1.0 + ((dVar58 * dVar83 * -1.0 + dVar55 * dVar80) - dVar66 * dVar81);
      dVar74 = *(double *)(param_1 + 0x60) * (double)local_398._0_8_;
      dVar80 = *(double *)(param_1 + 0x68) * (double)local_398._8_8_;
      dVar83 = *(double *)(param_1 + 0x70) * (double)local_368;
      dVar81 = *(double *)(param_1 + 0x78) * dStack_360;
      dVar91 = dVar80 * dVar58 - dVar66 * dVar74;
      dVar94 = dVar83 * dVar66 - dVar51 * dVar80;
      dVar82 = dVar74 * dVar51 - dVar58 * dVar83;
      dVar90 = dVar81 * dVar55 - dVar55 * dVar81;
      dVar94 = dVar94 + dVar94;
      dVar82 = dVar82 + dVar82;
      dVar91 = dVar91 + dVar91;
      dVar90 = dVar90 + dVar90;
      local_108 = dVar57 + (dVar91 * dVar66 - dVar51 * dVar82) + dVar55 * dVar94 + dVar74;
      dStack_100 = dVar65 + (dVar94 * dVar51 - dVar91 * dVar58) + dVar55 * dVar82 + dVar80;
      local_f8 = dVar56 + (dVar82 * dVar58 - dVar66 * dVar94) + dVar55 * dVar91 + dVar83;
      dVar45 = dVar45 + (dVar90 * dVar55 - dVar90 * dVar55) + dVar55 * dVar90 + dVar81;
    }
    else {
      dVar45 = dVar66 + dVar66;
      dVar83 = dVar51 + dVar51;
      dVar74 = dVar58 * (dVar58 + dVar58);
      local_1e8 = ((double)DAT_149934d80 - (dVar51 * dVar83 + dVar66 * dVar45)) *
                  (double)local_398._0_8_;
      dStack_1c0 = (DAT_149934d80._8_8_ - (dVar51 * dVar83 + dVar74)) * (double)local_398._8_8_;
      dVar81 = (dVar58 + dVar58) * dVar55;
      local_1c8 = (dVar45 * dVar58 - dVar83 * dVar55) * (double)local_398._8_8_;
      dVar51 = (dVar83 * dVar66 - dVar81) * (double)local_368;
      local_198 = (1.0 - (dVar74 + dVar66 * dVar45)) * (double)local_368;
      dVar94 = (double)local_368 * dVar19;
      dStack_1e0 = (dVar45 * dVar58 + dVar83 * dVar55) * (double)local_398._0_8_;
      local_1b8 = (dVar83 * dVar66 + dVar81) * (double)local_398._8_8_;
      local_1d8 = (dVar58 * dVar83 - dVar45 * dVar55) * (double)local_398._0_8_;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar51,0);
      local_1a8._0_8_ = (dVar58 * dVar83 + dVar45 * dVar55) * (double)local_368;
      local_1a8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      uStack_190 = 0;
      uStack_170 = 0x3ff0000000000000;
      dVar55 = *(double *)(param_1 + 0x40);
      dVar45 = *(double *)(param_1 + 0x48);
      dVar83 = *(double *)(param_1 + 0x50);
      dVar81 = dVar45 + dVar45;
      dVar74 = dVar83 + dVar83;
      dVar75 = dVar55 * (dVar55 + dVar55);
      local_218 = (1.0 - (dVar75 + dVar45 * dVar81)) * dVar19;
      dVar82 = *(double *)(param_1 + 0x40) * dVar74;
      dVar51 = *(double *)(param_1 + 0x58);
      dVar80 = dVar74 * dVar51;
      dVar88 = (dVar55 + dVar55) * *(double *)(param_1 + 0x58);
      dVar51 = dVar81 * dVar51;
      dVar90 = (double)local_398._0_8_ * (double)local_378._0_8_;
      dVar91 = (double)local_398._8_8_ * (double)local_378._8_8_;
      local_268 = ((double)DAT_149934d80 - (dVar83 * dVar74 + dVar45 * dVar81)) *
                  (double)local_378._0_8_;
      dStack_260 = (dVar81 * dVar55 + dVar80) * (double)local_378._0_8_;
      local_238 = (dVar74 * dVar45 + dVar88) * (double)local_378._8_8_;
      local_258 = (dVar82 - dVar51) * (double)local_378._0_8_;
      uStack_250 = 0;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar83 * dVar74 + dVar75)) * (double)local_378._8_8_
      ;
      local_248._0_8_ = (dVar81 * dVar55 - dVar80) * (double)local_378._8_8_;
      uStack_230 = 0;
      local_228._8_8_ = (dVar74 * dVar45 - dVar88) * dVar19;
      local_228._0_8_ = (dVar51 + dVar82) * dVar19;
      uStack_210 = 0;
      local_208 = *(double *)(param_1 + 0x60);
      dStack_200 = *(double *)(param_1 + 0x68);
      local_1f8 = *(double *)(param_1 + 0x70);
      uStack_1f0 = 0x3ff0000000000000;
      local_188 = dVar57;
      dStack_180 = dVar65;
      local_178 = dVar56;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar25._8_8_ = -(ulonglong)(0.0 <= dVar91);
      auVar25._0_8_ = -(ulonglong)(0.0 <= dVar90);
      auVar52 = blendvpd(_DAT_149936790,auVar85,auVar25);
      uVar18 = -(ulonglong)(0.0 <= dVar94);
      dVar51 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
      dVar55 = auVar52._0_8_;
      local_158 = local_158 * dVar55;
      local_160 = local_160 * dVar55;
      local_168 = local_168 * dVar55;
      dVar55 = auVar52._8_8_;
      local_138 = local_138 * dVar55;
      local_140 = local_140 * dVar55;
      local_148 = dVar55 * local_148;
      local_118 = local_118 * dVar51;
      local_120 = local_120 * dVar51;
      local_128 = dVar51 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      auVar34._0_8_ = local_288 * local_288;
      auVar34._8_8_ = dStack_280 * dStack_280;
      dVar51 = local_278 * local_278 + auVar34._0_8_;
      dVar55 = dStack_270 * dStack_270 + auVar34._8_8_;
      auVar40._0_8_ = dVar51 + dVar55;
      auVar40._8_8_ = dVar51 + dVar55;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
      auVar52 = sqrtpd(auVar34,auVar40);
      auVar85 = divpd(auVar85,auVar52);
      auVar92._0_8_ = auVar85._0_8_ * local_278;
      auVar92._8_8_ = auVar85._8_8_ * dStack_270;
      dVar88 = (double)((ulonglong)(local_288 * auVar85._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
      dVar75 = (double)((ulonglong)(dStack_280 * auVar85._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
      auVar72 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar92,auVar26);
      dVar45 = 0.0;
    }
    *(double *)param_2[6] = dVar88;
    *(double *)(param_2[6] + 8) = dVar75;
    param_2[7] = auVar72;
    *(double *)param_2[8] = local_108;
    *(double *)(param_2[8] + 8) = dStack_100;
    *(double *)param_2[9] = local_f8;
    *(double *)(param_2[9] + 8) = dVar45;
    *(double *)param_2[10] = (double)uVar11 * (double)uVar4;
    *(double *)(param_2[10] + 8) = (double)uVar3 * (double)uVar5;
    *(double *)param_2[0xb] = (double)auVar8 * dVar19;
    *(double *)(param_2[0xb] + 8) = dVar33 * auVar78._8_8_;
  }
  else if (param_6 == 2) {
    dVar55 = ABS(local_2a8._0_8_);
    dVar57 = ABS(local_2a8._8_8_);
    auVar62._8_8_ = -(ulonglong)(9.99999993922529e-09 < dVar57);
    auVar62._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar55);
    uVar10 = movmskpd(uVar9,auVar62);
    auVar63._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_298._8_8_));
    auVar63._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar33));
    iVar13 = movmskpd(uVar12,auVar63);
    uVar14 = iVar13 << 2 | uVar10;
    if (uVar14 == 0) {
      local_358 = DAT_14c8464a0;
      dStack_350 = DAT_14c8464a8;
      dStack_360 = DAT_14c8464b8;
      local_368 = (undefined1  [8])DAT_14c8464b0;
      local_388._8_8_ = uRam000000014c8464d8;
      local_388._0_8_ = DAT_14c8464d0;
      dVar55 = DAT_14c8464c0;
      dVar57 = DAT_14c8464c8;
      dVar33 = DAT_14c846480;
      dStack_2e0 = DAT_14c846488;
      local_2d8 = DAT_14c846490;
      dStack_2d0 = DAT_14c846498;
    }
    else {
      auVar52 = divpd(_DAT_149934d80,local_2a8);
      auVar85 = divpd(ZEXT816(0x3ff0000000000000),local_298);
      dVar55 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar55) & auVar52._0_8_);
      dVar57 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar57) & auVar52._8_8_);
      local_388._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar33)) & auVar85._0_8_;
      local_2d8 = local_2d8 * -1.0;
      dStack_2d0 = dStack_2d0 * 1.0;
      dVar33 = -local_2e8;
      dStack_2e0 = -dStack_2e0;
      local_2c8 = local_2c8 * dVar55;
      dStack_2c0 = dStack_2c0 * dVar57;
      local_388._8_8_ = 0;
      local_2b8 = local_2b8 * (double)local_388._0_8_;
      dVar65 = dStack_2c0 * dVar33 - dStack_2e0 * local_2c8;
      dVar56 = local_2b8 * dStack_2e0 - local_2d8 * dStack_2c0;
      dVar45 = local_2c8 * local_2d8 - dVar33 * local_2b8;
      dVar56 = dVar56 + dVar56;
      dVar45 = dVar45 + dVar45;
      dVar65 = dVar65 + dVar65;
      local_358 = 0.0 - ((dVar65 * dStack_2e0 - dVar45 * local_2d8) +
                        dStack_2d0 * dVar56 + local_2c8);
      dStack_350 = 0.0 - (dVar65 * local_2e8 + local_2d8 * dVar56 + dStack_2d0 * dVar45 + dStack_2c0
                         );
      dStack_360 = 0.0;
      local_368 = (undefined1  [8])
                  (0.0 - (dStack_2d0 * dVar65 + local_2b8 + (dVar45 * dVar33 - dVar56 * dStack_2e0))
                  );
    }
    auVar85 = *(undefined1 (*) [16])(param_4 + 8);
    dVar65 = auVar85._0_8_;
    dVar45 = auVar85._8_8_;
    auVar52 = *(undefined1 (*) [16])(param_4 + 10);
    dVar56 = auVar52._0_8_;
    dVar83 = auVar52._8_8_;
    auVar49._8_8_ = dVar57;
    auVar49._0_8_ = dVar55;
    auVar85 = minpd(auVar49,auVar85);
    auVar52 = minpd(local_388,auVar52);
    auVar50._8_8_ = -(ulonglong)(auVar85._8_8_ < 0.0);
    auVar50._0_8_ = -(ulonglong)(auVar85._0_8_ < 0.0);
    iVar13 = movmskpd(uVar10,auVar50);
    auVar64._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar64._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar10 = movmskpd(uVar14,auVar64);
    if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar75 = *param_4;
      dVar82 = param_4[1];
      dVar19 = param_4[3];
      dVar51 = param_4[3];
      dVar81 = param_4[1];
      dVar74 = param_4[1];
      dVar90 = param_4[2];
      dVar91 = param_4[3];
      dVar88 = param_4[2];
      dVar80 = param_4[2];
      dVar58 = dStack_2e0 * dVar88 * -1.0 +
               local_2d8 * dVar81 + dStack_2d0 * *param_4 * 1.0 + dVar33 * dVar19;
      dVar66 = dVar33 * dVar80 * 1.0 +
               dStack_2d0 * dVar74 + local_2d8 * *param_4 * -1.0 + dStack_2e0 * dVar51;
      auVar87._0_8_ =
           dStack_2d0 * dVar88 * 1.0 +
           ((*param_4 * dStack_2e0 * 1.0 + local_2d8 * dVar19) - dVar33 * dVar81);
      auVar87._8_8_ =
           local_2d8 * dVar80 * -1.0 +
           ((*param_4 * dVar33 * -1.0 + dStack_2d0 * dVar51) - dStack_2e0 * dVar74);
      dVar88 = local_358 * dVar65;
      dVar94 = dStack_350 * dVar45;
      dVar74 = (double)local_368 * dVar56;
      dVar80 = dStack_360 * dVar83;
      dVar37 = dVar94 * dVar75 - dVar88 * dVar82;
      dVar46 = dVar74 * dVar82 - dVar94 * dVar90;
      dVar33 = dVar88 * dVar90 - dVar74 * dVar75;
      dVar81 = dVar80 * dVar91 - dVar80 * dVar91;
      dVar46 = dVar46 + dVar46;
      dVar33 = dVar33 + dVar33;
      dVar37 = dVar37 + dVar37;
      dVar81 = dVar81 + dVar81;
      dVar88 = (dVar37 * dVar82 - dVar90 * dVar33) + dVar19 * dVar46 + dVar88 + param_4[4];
      dVar90 = (dVar46 * dVar90 - dVar37 * dVar75) + dVar51 * dVar33 + dVar94 + param_4[5];
      dVar19 = (dVar33 * dVar75 - dVar82 * dVar46) + dVar19 * dVar37 + dVar74 + param_4[6];
      dVar33 = (dVar81 * dVar91 - dVar81 * dVar91) + dVar51 * dVar81 + dVar80 + param_4[7];
      local_378._8_8_ = (double)local_388._8_8_ * dVar83;
      local_378._0_8_ = (double)local_388._0_8_ * dVar56;
      local_398._8_8_ = dVar57 * dVar45;
      local_398._0_8_ = dVar55 * dVar65;
      uVar9 = 0;
    }
    else {
      dVar82 = *param_4;
      dVar90 = param_4[1];
      dVar91 = param_4[2];
      dVar74 = dVar90 + dVar90;
      dVar80 = dVar91 + dVar91;
      dVar94 = dVar82 * (dVar82 + dVar82);
      dVar81 = param_4[3];
      dVar88 = dVar80 * dVar81;
      dVar75 = (dVar82 + dVar82) * param_4[3];
      dVar81 = dVar74 * dVar81;
      local_378._8_8_ = (double)local_388._8_8_ * dVar83;
      local_378._0_8_ = (double)local_388._0_8_ * dVar56;
      local_198 = (1.0 - (dVar94 + dVar90 * dVar74)) * dVar56;
      local_1c8 = (dVar74 * dVar82 - dVar88) * dVar45;
      local_398._8_4_ = SUB84(dVar57 * dVar45,0);
      local_398._0_8_ = dVar55 * dVar65;
      local_398._12_4_ = (int)((ulonglong)(dVar57 * dVar45) >> 0x20);
      local_1e8 = (dVar19 - (dVar91 * dVar80 + dVar90 * dVar74)) * dVar65;
      dStack_1c0 = (dVar51 - (dVar91 * dVar80 + dVar94)) * dVar45;
      dStack_1e0 = (dVar74 * dVar82 + dVar88) * dVar65;
      local_1b8 = (dVar80 * dVar90 + dVar75) * dVar45;
      local_1d8 = (*param_4 * dVar80 - dVar81) * dVar65;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_8_ = (dVar80 * dVar90 - dVar75) * dVar56;
      local_1a8._0_8_ = (dVar81 + *param_4 * dVar80) * dVar56;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar45 = dStack_2e0 + dStack_2e0;
      dVar83 = local_2d8 + local_2d8;
      dVar56 = dVar33 * (dVar33 + dVar33);
      local_218 = (1.0 - (dVar56 + dStack_2e0 * dVar45)) * (double)local_388._0_8_;
      dVar81 = (dVar33 + dVar33) * dStack_2d0;
      dVar65 = (dVar83 * dStack_2e0 - dVar81) * (double)local_388._0_8_;
      local_268 = (dVar19 - (local_2d8 * dVar83 + dStack_2e0 * dVar45)) * dVar55;
      dVar19 = (dVar51 - (local_2d8 * dVar83 + dVar56)) * dVar57;
      dStack_260 = (dVar45 * dVar33 + dVar83 * dStack_2d0) * dVar55;
      local_238 = (dVar83 * dStack_2e0 + dVar81) * dVar57;
      local_258 = (dVar33 * dVar83 - dVar45 * dStack_2d0) * dVar55;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar19,0);
      local_248._0_8_ = (dVar45 * dVar33 - dVar83 * dStack_2d0) * dVar57;
      local_248._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar65,0);
      local_228._0_8_ = (dVar33 * dVar83 + dVar45 * dStack_2d0) * (double)local_388._0_8_;
      local_228._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      uStack_210 = 0;
      local_208 = local_358;
      dStack_200 = dStack_350;
      local_1f8 = (double)local_368;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar27._8_8_ = -(ulonglong)(0.0 <= (double)local_398._8_8_);
      auVar27._0_8_ = -(ulonglong)(0.0 <= (double)local_398._0_8_);
      auVar85 = blendvpd(_DAT_149936790,auVar78,auVar27);
      dVar19 = (double)(~-(ulonglong)(0.0 <= (double)local_378._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_378._0_8_) & 0x3ff0000000000000);
      dVar33 = auVar85._0_8_;
      local_158 = local_158 * dVar33;
      local_160 = local_160 * dVar33;
      local_168 = local_168 * dVar33;
      dVar33 = auVar85._8_8_;
      local_138 = local_138 * dVar33;
      local_140 = local_140 * dVar33;
      local_148 = dVar33 * local_148;
      local_118 = local_118 * dVar19;
      local_120 = local_120 * dVar19;
      local_128 = dVar19 * local_128;
      pdVar16 = &local_288;
      iVar13 = FUN_14481fd10(pdVar16,&local_168);
      uVar9 = SUB84(pdVar16,0);
      dVar19 = local_278 * local_278 + local_288 * local_288;
      dVar33 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar41._0_8_ = dVar19 + dVar33;
      auVar41._8_8_ = dVar19 + dVar33;
      auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
      auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
      auVar85 = sqrtpd(auVar41,auVar41);
      auVar78 = divpd(auVar78,auVar85);
      auVar69._0_8_ = auVar78._0_8_ * local_278;
      auVar69._8_8_ = auVar78._8_8_ * dStack_270;
      dVar58 = (double)((ulonglong)(local_288 * auVar78._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
      dVar66 = (double)((ulonglong)(dStack_280 * auVar78._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
      auVar87 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar28);
      dVar33 = 0.0;
      dVar88 = local_108;
      dVar90 = dStack_100;
      dVar19 = local_f8;
    }
    *(double *)*param_2 = dVar58;
    *(double *)(*param_2 + 8) = dVar66;
    param_2[1] = auVar87;
    *(double *)param_2[2] = dVar88;
    *(double *)(param_2[2] + 8) = dVar90;
    *(double *)param_2[3] = dVar19;
    *(double *)(param_2[3] + 8) = dVar33;
    param_2[4] = local_398;
    param_2[5] = local_378;
    auVar85 = _DAT_149934d80;
    local_388 = *(undefined1 (*) [16])(param_1 + 0x80);
    auVar78 = *(undefined1 (*) [16])(param_1 + 0x90);
    dVar51 = auVar78._0_8_;
    auVar52 = minpd(local_388,local_398);
    auVar71 = minpd(auVar78,local_378);
    auVar54._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar54._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    iVar13 = movmskpd(iVar13,auVar54);
    auVar70._8_8_ = -(ulonglong)(auVar71._8_8_ < 0.0);
    auVar70._0_8_ = -(ulonglong)(auVar71._0_8_ < 0.0);
    uVar10 = movmskpd(uVar9,auVar70);
    dVar55 = auVar87._0_8_;
    dVar57 = auVar87._8_8_;
    uVar11 = local_398._0_8_;
    uVar3 = local_398._8_8_;
    uVar6 = local_378._0_8_;
    uVar7 = local_378._8_8_;
    uVar4 = local_388._0_8_;
    uVar5 = local_388._8_8_;
    if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar65 = *(double *)(param_1 + 0x40);
      dVar56 = *(double *)(param_1 + 0x48);
      dVar45 = *(double *)(param_1 + 0x50);
      dVar83 = *(double *)(param_1 + 0x58);
      dVar81 = dVar56 * dVar55 * -1.0 + dVar45 * dVar66 + dVar58 * dVar83 * 1.0 + dVar57 * dVar65;
      dVar74 = dVar65 * dVar55 * 1.0 + dVar83 * dVar66 + dVar58 * dVar45 * -1.0 + dVar57 * dVar56;
      auVar93._0_8_ =
           dVar83 * dVar55 * 1.0 + ((dVar58 * dVar56 * 1.0 + dVar57 * dVar45) - dVar66 * dVar65);
      auVar93._8_8_ =
           dVar45 * dVar55 * -1.0 + ((dVar58 * dVar65 * -1.0 + dVar57 * dVar83) - dVar66 * dVar56);
      dVar45 = *(double *)(param_1 + 0x60) * (double)local_398._0_8_;
      dVar83 = *(double *)(param_1 + 0x68) * (double)local_398._8_8_;
      dVar65 = *(double *)(param_1 + 0x70) * (double)local_378._0_8_;
      dVar56 = *(double *)(param_1 + 0x78) * (double)local_378._8_8_;
      dVar82 = dVar83 * dVar58 - dVar66 * dVar45;
      dVar91 = dVar65 * dVar66 - dVar55 * dVar83;
      dVar80 = dVar45 * dVar55 - dVar58 * dVar65;
      dVar75 = dVar56 * dVar57 - dVar57 * dVar56;
      dVar91 = dVar91 + dVar91;
      dVar80 = dVar80 + dVar80;
      dVar82 = dVar82 + dVar82;
      dVar75 = dVar75 + dVar75;
      local_108 = dVar88 + (dVar82 * dVar66 - dVar55 * dVar80) + dVar57 * dVar91 + dVar45;
      dStack_100 = dVar90 + (dVar91 * dVar55 - dVar82 * dVar58) + dVar57 * dVar80 + dVar83;
      local_f8 = dVar19 + (dVar80 * dVar58 - dVar66 * dVar91) + dVar57 * dVar82 + dVar65;
      dVar33 = dVar33 + (dVar75 * dVar57 - dVar75 * dVar57) + dVar57 * dVar75 + dVar56;
    }
    else {
      dVar33 = dVar66 + dVar66;
      dVar65 = dVar55 + dVar55;
      dVar45 = dVar58 * (dVar58 + dVar58);
      local_1e8 = ((double)DAT_149934d80 - (dVar55 * dVar65 + dVar66 * dVar33)) *
                  (double)local_398._0_8_;
      dStack_1c0 = (DAT_149934d80._8_8_ - (dVar55 * dVar65 + dVar45)) * (double)local_398._8_8_;
      dVar56 = (dVar58 + dVar58) * dVar57;
      local_1c8 = (dVar33 * dVar58 - dVar65 * dVar57) * (double)local_398._8_8_;
      dVar55 = (dVar65 * dVar66 - dVar56) * (double)local_378._0_8_;
      local_198 = (1.0 - (dVar45 + dVar66 * dVar33)) * (double)local_378._0_8_;
      dVar91 = (double)local_378._0_8_ * dVar51;
      dStack_1e0 = (dVar33 * dVar58 + dVar65 * dVar57) * (double)local_398._0_8_;
      local_1b8 = (dVar65 * dVar66 + dVar56) * (double)local_398._8_8_;
      local_1d8 = (dVar58 * dVar65 - dVar33 * dVar57) * (double)local_398._0_8_;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar55,0);
      local_1a8._0_8_ = (dVar58 * dVar65 + dVar33 * dVar57) * (double)local_378._0_8_;
      local_1a8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
      uStack_190 = 0;
      uStack_170 = 0x3ff0000000000000;
      dVar55 = *(double *)(param_1 + 0x40);
      dVar57 = *(double *)(param_1 + 0x48);
      dVar65 = *(double *)(param_1 + 0x50);
      dVar56 = dVar57 + dVar57;
      dVar45 = dVar65 + dVar65;
      dVar74 = dVar55 * (dVar55 + dVar55);
      local_218 = (1.0 - (dVar74 + dVar57 * dVar56)) * dVar51;
      dVar80 = *(double *)(param_1 + 0x40) * dVar45;
      dVar33 = *(double *)(param_1 + 0x58);
      dVar83 = dVar45 * dVar33;
      dVar81 = (dVar55 + dVar55) * *(double *)(param_1 + 0x58);
      dVar33 = dVar56 * dVar33;
      dVar75 = (double)local_398._0_8_ * (double)local_388._0_8_;
      dVar82 = (double)local_398._8_8_ * (double)local_388._8_8_;
      local_268 = ((double)DAT_149934d80 - (dVar65 * dVar45 + dVar57 * dVar56)) *
                  (double)local_388._0_8_;
      dStack_260 = (dVar56 * dVar55 + dVar83) * (double)local_388._0_8_;
      local_238 = (dVar45 * dVar57 + dVar81) * (double)local_388._8_8_;
      local_258 = (dVar80 - dVar33) * (double)local_388._0_8_;
      uStack_250 = 0;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar65 * dVar45 + dVar74)) * (double)local_388._8_8_
      ;
      local_248._0_8_ = (dVar56 * dVar55 - dVar83) * (double)local_388._8_8_;
      uStack_230 = 0;
      local_228._8_8_ = (dVar45 * dVar57 - dVar81) * dVar51;
      local_228._0_8_ = (dVar33 + dVar80) * dVar51;
      uStack_210 = 0;
      local_208 = *(double *)(param_1 + 0x60);
      dStack_200 = *(double *)(param_1 + 0x68);
      local_1f8 = *(double *)(param_1 + 0x70);
      uStack_1f0 = 0x3ff0000000000000;
      local_188 = dVar88;
      dStack_180 = dVar90;
      local_178 = dVar19;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= dVar82);
      auVar29._0_8_ = -(ulonglong)(0.0 <= dVar75);
      auVar52 = blendvpd(_DAT_149936790,auVar85,auVar29);
      uVar18 = -(ulonglong)(0.0 <= dVar91);
      dVar19 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
      dVar33 = auVar52._0_8_;
      local_158 = local_158 * dVar33;
      local_160 = local_160 * dVar33;
      local_168 = local_168 * dVar33;
      dVar33 = auVar52._8_8_;
      local_138 = local_138 * dVar33;
      local_140 = local_140 * dVar33;
      local_148 = dVar33 * local_148;
      local_118 = local_118 * dVar19;
      local_120 = local_120 * dVar19;
      local_128 = dVar19 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      auVar35._0_8_ = local_288 * local_288;
      auVar35._8_8_ = dStack_280 * dStack_280;
      dVar19 = local_278 * local_278 + auVar35._0_8_;
      dVar33 = dStack_270 * dStack_270 + auVar35._8_8_;
      auVar42._0_8_ = dVar19 + dVar33;
      auVar42._8_8_ = dVar19 + dVar33;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
      auVar52 = sqrtpd(auVar35,auVar42);
      auVar85 = divpd(auVar85,auVar52);
      auVar96._0_8_ = auVar85._0_8_ * local_278;
      auVar96._8_8_ = auVar85._8_8_ * dStack_270;
      dVar81 = (double)((ulonglong)(local_288 * auVar85._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
      dVar74 = (double)((ulonglong)(dStack_280 * auVar85._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
      auVar93 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar96,auVar30);
      dVar33 = 0.0;
    }
    *(double *)param_2[6] = dVar81;
    *(double *)(param_2[6] + 8) = dVar74;
    param_2[7] = auVar93;
    *(double *)param_2[8] = local_108;
    *(double *)(param_2[8] + 8) = dStack_100;
    *(double *)param_2[9] = local_f8;
    *(double *)(param_2[9] + 8) = dVar33;
    *(double *)param_2[10] = (double)uVar11 * (double)uVar4;
    *(double *)(param_2[10] + 8) = (double)uVar3 * (double)uVar5;
    *(double *)param_2[0xb] = (double)uVar6 * dVar51;
    *(double *)(param_2[0xb] + 8) = (double)uVar7 * auVar78._8_8_;
  }
  else {
    auVar78 = *(undefined1 (*) [16])(param_1 + 0x80);
    auVar85 = *(undefined1 (*) [16])(param_1 + 0x90);
    auVar59._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar78._8_8_));
    auVar59._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar78._0_8_));
    uVar10 = movmskpd(uVar9,auVar59);
    auVar60._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar85._8_8_));
    auVar60._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar85._0_8_));
    iVar13 = movmskpd(uVar12,auVar60);
    uVar14 = iVar13 << 2 | uVar10;
    if (uVar14 == 0) {
      local_398._8_8_ = uRam000000014c8464d8;
      local_398._0_8_ = DAT_14c8464d0;
      dVar19 = DAT_14c8464c0;
      dVar33 = DAT_14c8464c8;
      dVar51 = DAT_14c846490;
      dVar55 = DAT_14c846498;
      dVar57 = DAT_14c846480;
      dVar65 = DAT_14c846488;
      dVar56 = DAT_14c8464b0;
      dVar45 = DAT_14c8464b8;
      dVar83 = DAT_14c8464a0;
      dVar81 = DAT_14c8464a8;
    }
    else {
      auVar71 = divpd(_DAT_149934d80,auVar78);
      auVar52 = divpd(ZEXT816(0x3ff0000000000000),auVar85);
      dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar78._0_8_)) & auVar71._0_8_);
      dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar78._8_8_)) & auVar71._8_8_);
      dVar56 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar85._0_8_)) & auVar52._0_8_);
      local_398._8_8_ = 0;
      local_398._0_8_ = dVar56;
      dVar51 = *(double *)(param_1 + 0x50) * -1.0;
      dVar55 = *(double *)(param_1 + 0x58) * 1.0;
      dVar57 = -*(double *)(param_1 + 0x40);
      dVar65 = -*(double *)(param_1 + 0x48);
      dVar83 = *(double *)(param_1 + 0x60) * dVar19;
      dVar88 = *(double *)(param_1 + 0x68) * dVar33;
      dVar56 = *(double *)(param_1 + 0x70) * dVar56;
      dVar74 = dVar88 * dVar57 - dVar65 * dVar83;
      dVar80 = dVar56 * dVar65 - dVar51 * dVar88;
      dVar81 = dVar83 * dVar51 - dVar57 * dVar56;
      dVar80 = dVar80 + dVar80;
      dVar81 = dVar81 + dVar81;
      dVar74 = dVar74 + dVar74;
      dVar56 = 0.0 - (dVar55 * dVar74 + dVar56 + (dVar81 * dVar57 - dVar80 * dVar65));
      dVar45 = 0.0;
      dVar83 = 0.0 - ((dVar74 * dVar65 - dVar81 * dVar51) + dVar55 * dVar80 + dVar83);
      dVar81 = 0.0 - (dVar74 * *(double *)(param_1 + 0x40) + dVar51 * dVar80 +
                     dVar55 * dVar81 + dVar88);
    }
    auVar78 = *(undefined1 (*) [16])(param_4 + 8);
    dVar74 = auVar78._0_8_;
    dVar88 = auVar78._8_8_;
    auVar85 = *(undefined1 (*) [16])(param_4 + 10);
    dVar80 = auVar85._0_8_;
    dVar75 = auVar85._8_8_;
    auVar77._8_8_ = dVar33;
    auVar77._0_8_ = dVar19;
    auVar78 = minpd(auVar77,auVar78);
    auVar85 = minpd(local_398,auVar85);
    auVar79._8_8_ = -(ulonglong)(auVar78._8_8_ < 0.0);
    auVar79._0_8_ = -(ulonglong)(auVar78._0_8_ < 0.0);
    iVar13 = movmskpd(uVar10,auVar79);
    auVar86._8_8_ = -(ulonglong)(auVar85._8_8_ < 0.0);
    auVar86._0_8_ = -(ulonglong)(auVar85._0_8_ < 0.0);
    uVar10 = movmskpd(uVar14,auVar86);
    uVar3 = local_398._8_8_;
    uVar11 = local_398._0_8_;
    if ((uVar10 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar2 = *param_4;
      dVar76 = param_4[1];
      dVar94 = param_4[3];
      dVar91 = param_4[3];
      dVar46 = param_4[1];
      dVar37 = param_4[1];
      dVar84 = param_4[2];
      dVar89 = param_4[3];
      dVar66 = param_4[2];
      dVar58 = param_4[2];
      dVar82 = dVar65 * dVar66 * -1.0 + dVar51 * dVar46 + dVar55 * *param_4 * 1.0 + dVar57 * dVar94;
      dVar90 = dVar57 * dVar58 * 1.0 + dVar55 * dVar37 + dVar51 * *param_4 * -1.0 + dVar65 * dVar91;
      auVar73._0_8_ =
           dVar55 * dVar66 * 1.0 + ((*param_4 * dVar65 * 1.0 + dVar51 * dVar94) - dVar57 * dVar46);
      auVar73._8_8_ =
           dVar51 * dVar58 * -1.0 + ((*param_4 * dVar57 * -1.0 + dVar55 * dVar91) - dVar65 * dVar37)
      ;
      dVar83 = dVar83 * dVar74;
      dVar81 = dVar81 * dVar88;
      dVar56 = dVar56 * dVar80;
      dVar45 = dVar45 * dVar75;
      dVar51 = dVar81 * dVar2 - dVar83 * dVar76;
      dVar65 = dVar56 * dVar76 - dVar81 * dVar84;
      dVar57 = dVar83 * dVar84 - dVar56 * dVar2;
      dVar55 = dVar45 * dVar89 - dVar45 * dVar89;
      dVar65 = dVar65 + dVar65;
      dVar57 = dVar57 + dVar57;
      dVar51 = dVar51 + dVar51;
      dVar55 = dVar55 + dVar55;
      local_108 = (dVar51 * dVar76 - dVar84 * dVar57) + dVar94 * dVar65 + dVar83 + param_4[4];
      dStack_100 = (dVar65 * dVar84 - dVar51 * dVar2) + dVar91 * dVar57 + dVar81 + param_4[5];
      local_f8 = (dVar57 * dVar2 - dVar76 * dVar65) + dVar94 * dVar51 + dVar56 + param_4[6];
      dVar51 = (dVar55 * dVar89 - dVar55 * dVar89) + dVar91 * dVar55 + dVar45 + param_4[7];
    }
    else {
      dVar58 = *param_4;
      dVar66 = param_4[1];
      dVar2 = param_4[2];
      dVar90 = dVar58 + dVar58;
      dVar91 = dVar66 + dVar66;
      dVar94 = dVar2 + dVar2;
      dVar84 = dVar58 * dVar90;
      dVar89 = dVar66 * dVar91;
      dVar82 = param_4[3];
      dVar45 = param_4[3];
      dVar37 = dVar94 * dVar82;
      dVar46 = dVar90 * dVar45;
      dVar82 = dVar91 * dVar82;
      dVar45 = dVar90 * dVar45;
      unique0x1000048f = SUB84(dVar45,0);
      local_368 = (undefined1  [8])dVar82;
      unique0x10000493 = (int)((ulonglong)dVar45 >> 0x20);
      dVar76 = (double)local_398._0_8_ * dVar80;
      local_198 = (1.0 - (dVar84 + dVar89)) * dVar80;
      local_378._8_8_ = (0.0 - (dVar84 + dVar89)) * dVar75;
      local_378._0_8_ = local_198;
      local_388._0_8_ = (dVar82 + *param_4 * dVar94) * dVar80;
      local_388._8_8_ = (dVar45 + *param_4 * dVar90) * dVar75;
      local_1c8 = (dVar91 * dVar58 - dVar37) * dVar88;
      local_1e8 = (1.0 - (dVar2 * dVar94 + dVar89)) * dVar74;
      dStack_1c0 = (1.0 - (dVar2 * dVar94 + dVar84)) * dVar88;
      dStack_1e0 = (dVar91 * dVar58 + dVar37) * dVar74;
      local_1b8 = (dVar94 * dVar66 + dVar46) * dVar88;
      local_1d8 = (*param_4 * dVar94 - dVar82) * dVar74;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_8_ = (dVar94 * dVar66 - dVar46) * dVar80;
      local_1a8._0_8_ = local_388._0_8_;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar90 = dVar65 + dVar65;
      dVar91 = dVar51 + dVar51;
      dVar45 = dVar57 * (dVar57 + dVar57);
      local_218 = (1.0 - (dVar45 + dVar65 * dVar90)) * (double)local_398._0_8_;
      dVar94 = (dVar57 + dVar57) * dVar55;
      dVar82 = (dVar91 * dVar65 - dVar94) * (double)local_398._0_8_;
      local_268 = (1.0 - (dVar51 * dVar91 + dVar65 * dVar90)) * dVar19;
      dVar51 = (1.0 - (dVar51 * dVar91 + dVar45)) * dVar33;
      dStack_260 = (dVar90 * dVar57 + dVar91 * dVar55) * dVar19;
      local_238 = (dVar91 * dVar65 + dVar94) * dVar33;
      local_258 = (dVar57 * dVar91 - dVar90 * dVar55) * dVar19;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar51,0);
      local_248._0_8_ = (dVar90 * dVar57 - dVar91 * dVar55) * dVar33;
      local_248._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar82,0);
      local_228._0_8_ = (dVar57 * dVar91 + dVar90 * dVar55) * (double)local_398._0_8_;
      local_228._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0x3ff0000000000000;
      local_208 = dVar83;
      dStack_200 = dVar81;
      local_1f8 = dVar56;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar78 = _DAT_149934d80;
      auVar31._8_8_ = -(ulonglong)(0.0 <= dVar33 * dVar88);
      auVar31._0_8_ = -(ulonglong)(0.0 <= dVar19 * dVar74);
      auVar85 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar31);
      uVar18 = -(ulonglong)(0.0 <= dVar76);
      dVar51 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
      dVar55 = auVar85._0_8_;
      local_158 = local_158 * dVar55;
      local_160 = local_160 * dVar55;
      local_168 = local_168 * dVar55;
      dVar55 = auVar85._8_8_;
      local_138 = local_138 * dVar55;
      local_140 = local_140 * dVar55;
      local_148 = dVar55 * local_148;
      local_118 = local_118 * dVar51;
      local_120 = local_120 * dVar51;
      local_128 = dVar51 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      auVar36._0_8_ = local_288 * local_288;
      auVar36._8_8_ = dStack_280 * dStack_280;
      dVar51 = local_278 * local_278 + auVar36._0_8_;
      dVar55 = dStack_270 * dStack_270 + auVar36._8_8_;
      auVar43._0_8_ = dVar51 + dVar55;
      auVar43._8_8_ = dVar51 + dVar55;
      auVar85 = sqrtpd(auVar36,auVar43);
      auVar78 = divpd(auVar78,auVar85);
      auVar44._0_8_ = auVar78._0_8_ * local_278;
      auVar44._8_8_ = auVar78._8_8_ * dStack_270;
      dVar82 = (double)((ulonglong)(local_288 * auVar78._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
      dVar90 = (double)((ulonglong)(dStack_280 * auVar78._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
      auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
      auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
      auVar73 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar32);
      dVar51 = 0.0;
    }
    auVar1._8_4_ = SUB84(dVar90,0);
    auVar1._0_8_ = dVar82;
    auVar1._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
    *param_2 = auVar1;
    param_2[1] = auVar73;
    *(double *)param_2[2] = local_108;
    *(double *)(param_2[2] + 8) = dStack_100;
    *(double *)param_2[3] = local_f8;
    *(double *)(param_2[3] + 8) = dVar51;
    *(double *)param_2[4] = dVar19 * dVar74;
    *(double *)(param_2[4] + 8) = dVar33 * dVar88;
    *(double *)param_2[5] = (double)uVar11 * dVar80;
    *(double *)(param_2[5] + 8) = (double)uVar3 * dVar75;
    pauVar17 = param_2 + 6;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *(double *)*pauVar17 = *param_4;
      param_4 = param_4 + 1;
      pauVar17 = (undefined1 (*) [16])(*pauVar17 + 8);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456f9d8e FUN_1456f9d8e body=1354 status=ok
// SIG undefined FUN_1456f9d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456f9d8e(longlong *param_1,undefined1 (*param_2) [16],double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  int iVar14;
  undefined4 uVar15;
  double dVar16;
  double *pdVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  float fVar49;
  uint unaff_XMM13_Db;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((param_1 != (longlong *)0x0) && (lVar1 = param_1[0x39d], lVar1 != 0)) &&
     (lVar19 = param_1[0x22], lVar19 != 0)) {
    dVar16 = *(double *)param_2[1];
    local_108 = *param_2;
    dVar22 = *(double *)(lVar19 + 0x240);
    dVar2 = *(double *)(lVar19 + 0x248);
    dVar3 = *(double *)(lVar19 + 0x250);
    dVar42 = *(double *)(lVar19 + 600);
    pdVar17 = *(double **)(lVar19 + 0x228);
    plVar20 = param_1;
    local_f8 = dVar16;
    local_d8 = dVar22;
    dStack_d0 = dVar2;
    local_c8 = dVar3;
    dStack_c0 = dVar42;
    if (pdVar17 == (double *)0x0) {
      plVar20 = (longlong *)&DAT_00000040;
      pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
      dVar16 = DAT_14c8463d8;
      *pdVar17 = DAT_14c8463d0;
      pdVar17[1] = dVar16;
      dVar16 = DAT_14c8463e8;
      pdVar17[2] = DAT_14c8463e0;
      pdVar17[3] = dVar16;
      dVar16 = DAT_14c846500;
      pdVar17[4] = DAT_14c8464f8;
      pdVar17[5] = dVar16;
      dVar16 = DAT_14c846508;
      pdVar17[6] = DAT_14c846508;
      *(double **)(lVar19 + 0x228) = pdVar17;
    }
    auVar23._8_4_ = (int)-(ulonglong)(dVar2 != pdVar17[1]);
    auVar23._0_8_ = -(ulonglong)(dVar22 != *pdVar17);
    auVar23._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar17[1]) >> 0x20);
    iVar14 = movmskpd(SUB84(dVar16,0),auVar23);
    auVar37._8_4_ = (int)-(ulonglong)(dVar42 != pdVar17[3]);
    auVar37._0_8_ = -(ulonglong)(dVar3 != pdVar17[2]);
    auVar37._12_4_ = (int)(-(ulonglong)(dVar42 != pdVar17[3]) >> 0x20);
    uVar18 = movmskpd((int)plVar20,auVar37);
    if ((uVar18 & 0x3fffffff) != 0 || iVar14 != 0) {
      pdVar17[2] = local_c8;
      pdVar17[3] = dStack_c0;
      *pdVar17 = local_d8;
      pdVar17[1] = dStack_d0;
      FUN_1448052ee(&local_d8,&local_f0);
      pdVar17[6] = local_e0;
      pdVar17[4] = local_f0;
      pdVar17[5] = dStack_e8;
    }
    dVar12 = pdVar17[4];
    dVar13 = pdVar17[5];
    dVar16 = pdVar17[6];
    dVar22 = pdVar17[6];
    FUN_144944cf2(lVar1);
    lVar19 = lVar1;
    uVar15 = FUN_144944cf2();
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_108._8_8_;
    auVar23 = divpd(auVar11 << 0x40,_DAT_1499387d0);
    auVar23 = roundpd(auVar23,auVar23,3);
    auVar37 = roundpd(in_XMM2,ZEXT816(0),3);
    auVar38._0_8_ = 0.0 - auVar23._0_8_ * dVar2;
    auVar38._8_8_ = (double)local_108._8_8_ - auVar23._8_8_ * dVar3;
    dVar42 = 0.0 - auVar37._0_8_ * dVar2;
    dVar43 = 0.0 - auVar37._8_8_ * dVar3;
    auVar45._0_8_ = auVar38._0_8_ + dVar2;
    auVar45._8_8_ = auVar38._8_8_ + dVar3;
    auVar48._0_8_ = dVar42 + dVar2;
    auVar48._8_8_ = dVar43 + dVar3;
    auVar24._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
    auVar24._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
    auVar23 = blendvpd(auVar45,auVar38,auVar24);
    auVar25._8_8_ = -(ulonglong)(0.0 <= dVar43);
    auVar25._0_8_ = -(ulonglong)(0.0 <= dVar42);
    auVar4._8_8_ = dVar43;
    auVar4._0_8_ = dVar42;
    auVar37 = blendvpd(auVar48,auVar4,auVar25);
    dVar42 = auVar23._8_8_ + -360.0;
    dVar43 = auVar37._8_8_ + 0.0;
    auVar26._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
    auVar26._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
    auVar7._8_4_ = SUB84(dVar42,0);
    auVar7._0_8_ = auVar23._0_8_ + -360.0;
    auVar7._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar46 = blendvpd(auVar23,auVar7,auVar26);
    auVar27._8_8_ = -(ulonglong)(180.0 < auVar37._8_8_);
    auVar27._0_8_ = -(ulonglong)(180.0 < auVar37._0_8_);
    auVar10._8_4_ = SUB84(dVar43,0);
    auVar10._0_8_ = auVar37._0_8_ + -360.0;
    auVar10._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    auVar23 = blendvpd(auVar37,auVar10,auVar27);
    dVar47 = auVar23._0_8_;
    dVar44 = auVar46._0_8_;
    auVar28._8_8_ = dVar13 - auVar46._8_8_;
    auVar28._0_8_ = dVar12 - dVar44;
    auVar23 = divpd(auVar28,_DAT_1499387d0);
    auVar39._8_8_ = 0;
    auVar39._0_8_ = dVar22 - dVar47;
    auVar37 = divpd(auVar39,_DAT_1499387d0);
    auVar23 = roundpd(auVar23,auVar23,3);
    auVar37 = roundpd(auVar37,auVar37,3);
    dVar43 = (dVar12 - dVar44) - auVar23._0_8_ * dVar2;
    dVar9 = (dVar13 - auVar46._8_8_) - auVar23._8_8_ * dVar3;
    dVar22 = (dVar22 - dVar47) - auVar37._0_8_ * dVar2;
    dVar42 = 0.0 - auVar37._8_8_ * dVar3;
    auVar40._0_8_ = dVar43 + dVar2;
    auVar40._8_8_ = dVar9 + dVar3;
    auVar41._0_8_ = dVar2 + dVar22;
    auVar41._8_8_ = dVar3 + dVar42;
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar9);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar43);
    auVar8._8_4_ = SUB84(dVar9,0);
    auVar8._0_8_ = dVar43;
    auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar23 = blendvpd(auVar40,auVar8,auVar29);
    auVar30._8_8_ = -(ulonglong)(0.0 <= dVar42);
    auVar30._0_8_ = -(ulonglong)(0.0 <= dVar22);
    auVar6._8_4_ = SUB84(dVar42,0);
    auVar6._0_8_ = dVar22;
    auVar6._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar37 = blendvpd(auVar41,auVar6,auVar30);
    auVar35._0_8_ = auVar23._0_8_ + -360.0;
    auVar35._8_8_ = auVar23._8_8_ + -360.0;
    auVar31._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
    auVar31._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
    auVar23 = blendvpd(auVar23,auVar35,auVar31);
    auVar32._8_8_ = -(ulonglong)(180.0 < auVar37._8_8_);
    auVar32._0_8_ = -(ulonglong)(180.0 < auVar37._0_8_);
    auVar5._8_8_ = auVar37._8_8_ + -360.0;
    auVar5._0_8_ = auVar37._0_8_ + -360.0;
    auVar37 = blendvpd(auVar37,auVar5,auVar32);
    auVar36._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar23._8_8_));
    auVar36._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar23._0_8_));
    iVar14 = movmskpd(uVar15,auVar36);
    auVar33._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar37._8_8_));
    auVar33._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar37._0_8_));
    uVar18 = movmskpd((int)lVar19,auVar33);
    if ((uVar18 & 0x3fffffff) != 0 || iVar14 != 0) {
      if (0.0010000000474974513 < ABS(dVar12 - dVar44)) {
        fVar34 = (float)FUN_1407b5b68((float)dVar12,(float)dVar44,(float)*param_3);
        auVar46._0_8_ = (double)fVar34;
      }
      if (0.0010000000474974513 < ABS(dVar13 - auVar46._8_8_)) {
        dVar22 = (double)FUN_144719204(dVar13,0x4076800000000000);
        fVar49 = (float)(double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                                (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0));
        dVar22 = (double)FUN_144719204(auVar46._8_8_,0x4076800000000000);
        dVar22 = (double)(~-(ulonglong)(dVar22 < 0.0) & (ulonglong)dVar22 |
                         (ulonglong)(dVar22 + 360.0) & -(ulonglong)(dVar22 < 0.0));
        uVar18 = (uint)((ulonglong)dVar22 >> 0x20);
        fVar34 = (float)dVar22;
        uVar21 = -(uint)(fVar34 - fVar49 == 180.0);
        fVar34 = (float)FUN_1407b5b68(CONCAT44(~uVar18 & unaff_XMM13_Db,~uVar21 & (uint)fVar49) |
                                      (ulonglong)((uint)(fVar49 + 0.001) & uVar21),
                                      CONCAT44(uVar18,fVar34),(float)param_3[1]);
        auVar46._8_8_ = (double)fVar34;
      }
      if (0.0010000000474974513 < ABS(dVar16 - dVar47)) {
        fVar34 = (float)FUN_1407b5b68((float)dVar16,(float)dVar47,(float)param_3[2]);
        dVar47 = (double)fVar34;
      }
      FUN_144944cf2(lVar1);
      local_108 = auVar46;
      local_f8 = dVar47;
      FUN_144a7484c(local_108,&local_d8);
      local_110 = 0;
      local_118 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,&DAT_14c8464e0,&local_d8,1);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fa2da FUN_1456fa2da body=138 status=ok
// SIG undefined FUN_1456fa2da(void)

code * FUN_1456fa2da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoundsWSCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f00000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc042;
}



// FUNCTION 1456fa364 FUN_1456fa364 body=138 status=ok
// SIG undefined FUN_1456fa364(void)

code * FUN_1456fa364(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceTransformInverseTransposed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc408;
}



// FUNCTION 1456fa3ee FUN_1456fa3ee body=138 status=ok
// SIG undefined FUN_1456fa3ee(void)

code * FUN_1456fa3ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480cc0cc;
}



// FUNCTION 1456fa478 FUN_1456fa478 body=884 status=ok
// SIG undefined FUN_1456fa478(void)

void FUN_1456fa478(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406864a0;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fa7ee FUN_1456fa7ee body=891 status=ok
// SIG undefined FUN_1456fa7ee(void)

void FUN_1456fa7ee(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = &LAB_1406863be;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fab6a FUN_1456fab6a body=155 status=ok
// SIG undefined FUN_1456fab6a(void)

char FUN_1456fab6a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  char param_5)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((*(char *)(param_1 + 0x430) == '\x01') &&
       (lVar3 = FUN_14022af78(param_1,param_3), lVar3 != 0)) && (*(char *)(lVar3 + 0x20) == '\x01'))
     && (uVar2 = FUN_140159b42(lVar3,param_2,param_4,0xffffffff), -1 < (int)uVar2)) {
    lVar5 = (ulonglong)uVar2 * 0x98 + *(longlong *)(lVar3 + 0x10);
    lVar3 = (ulonglong)uVar2 + 1;
    do {
      if (((0 < *(int *)(lVar5 + 0x68)) && (lVar5 != 0)) &&
         ((0 < *(int *)(lVar5 + 0x78) && (param_5 != '\x01' || *(char *)(lVar5 + 0x90) != '\0')))) {
        return *(char *)(lVar5 + 0x90);
      }
      lVar5 = lVar5 + -0x98;
      lVar4 = lVar3 + -1;
      bVar1 = 0 < lVar3;
      lVar3 = lVar4;
    } while (lVar4 != 0 && bVar1);
  }
  return '\0';
}



// FUNCTION 1456fac06 thunk_FUN_1456fac0c body=5 status=ok
// SIG undefined thunk_FUN_1456fac0c(void)

ulonglong thunk_FUN_1456fac0c(int *param_1)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if ((longlong)*param_1 != 0) {
    cVar1 = FUN_1409d14fc(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      FUN_140841e14(param_1,1);
      FUN_1409d1656(param_1);
      goto LAB_1456fac57;
    }
  }
  uVar2 = 0;
LAB_1456fac57:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456fac0c FUN_1456fac0c body=88 status=ok
// SIG undefined FUN_1456fac0c(void)

ulonglong FUN_1456fac0c(int *param_1)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if ((longlong)*param_1 != 0) {
    cVar1 = FUN_1409d14fc(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      FUN_140841e14(param_1,1);
      FUN_1409d1656(param_1);
      goto LAB_1456fac57;
    }
  }
  uVar2 = 0;
LAB_1456fac57:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456fac64 FUN_1456fac64 body=61 status=ok
// SIG undefined FUN_1456fac64(void)

void FUN_1456fac64(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456faca2 FUN_1456faca2 body=91 status=ok
// SIG undefined FUN_1456faca2(void)

void FUN_1456faca2(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba8060);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456facfe FUN_1456facfe body=344 status=ok
// SIG undefined FUN_1456facfe(void)

ulonglong FUN_1456facfe(longlong *param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  if ((*param_1 == 0) || (cVar3 = FUN_14022753c(), cVar3 == '\0')) {
    uVar6 = 0;
    goto LAB_1456fade5;
  }
  lVar4 = FUN_14069294b();
  dVar1 = DAT_14c8464f0;
  if ((*(byte *)(param_1 + 2) & 2) != 0) {
    dVar1 = (double)param_1[6];
    lVar7 = param_1[7];
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    else if (lVar7 == 0) goto LAB_1456fad70;
    if (*(char *)(lVar7 + 0x1fb) == '\x02') {
      dVar1 = dVar1 + *(double *)(lVar7 + 0x270);
    }
  }
LAB_1456fad70:
  lVar7 = *(longlong *)(*param_1 + 0x110);
  if (lVar7 == 0) {
    fVar8 = 3.4028235e+38;
  }
  else {
    fVar8 = (float)*(double *)(lVar7 + 0x270);
  }
  dVar2 = (double)param_1[0x100];
  if (*(double *)(*param_1 + 0x2f70) <= 0.7070000171661377) {
    lVar7 = 0xa0;
  }
  else {
    cVar3 = FUN_144a80e0c();
    lVar7 = 0xa4;
    if (cVar3 != '\0') {
      uVar5 = FUN_143e4a860(*param_1,0);
      uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((char)uVar5 == '\0') goto LAB_1456fade5;
    }
  }
  uVar6 = (ulonglong)
          -(uint)(*(float *)(lVar4 + lVar7) <= (float)dVar1 - (float)dVar2 ||
                 *(float *)(lVar4 + lVar7) <= (float)dVar1 - fVar8);
LAB_1456fade5:
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1456fae56 FUN_1456fae56 body=91 status=ok
// SIG undefined FUN_1456fae56(void)

void FUN_1456fae56(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae390);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456faeb2 FUN_1456faeb2 body=472 status=ok
// SIG undefined FUN_1456faeb2(void)

bool FUN_1456faeb2(longlong param_1)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(param_1 + 0xf40);
  if ((lVar3 == 0) || (*(longlong *)(&DAT_00006850 + lVar3) == 0)) {
    bVar2 = false;
  }
  else {
    FUN_1456fb08c(lVar3,&local_f0);
    bVar2 = true;
    if (0.0 < local_f0 * local_f0 + local_e8 * local_e8) {
      lVar3 = FUN_14069294b();
      dVar4 = local_f0 * local_f0 + local_e8 * local_e8;
      if ((dVar4 != 1.0) || (NAN(dVar4))) {
        dVar5 = DAT_14c8464f0;
        dVar1 = DAT_14c8464e8;
        dVar6 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar4) {
          dVar1 = local_e8 * (1.0 / SQRT(dVar4));
          dVar6 = local_f0 * (1.0 / SQRT(dVar4));
          dVar5 = 0.0;
        }
      }
      else {
        dVar5 = (double)(-(ulonglong)(local_e0 == 0.0) & (ulonglong)local_e0);
        dVar1 = local_e8;
        dVar6 = local_f0;
      }
      FUN_14023d054(*(undefined8 *)(param_1 + 0xf40),&local_d8);
      dVar6 = dVar5 * local_c8 + dVar6 * local_d8 + dVar1 * local_d0;
      dVar4 = dVar6;
      if (1.0 <= dVar6) {
        dVar4 = 1.0;
      }
      dVar4 = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                           ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar4));
      bVar2 = (float)(dVar4 * 57.29577951308232) <= *(float *)(lVar3 + 0x38);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1456fb08c FUN_1456fb08c body=25 status=ok
// SIG undefined FUN_1456fb08c(void)

void FUN_1456fb08c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = *(undefined8 *)(param_1 + 1000);
  uVar1 = *(undefined8 *)(param_1 + 0x3e0);
  *param_2 = *(undefined8 *)(param_1 + 0x3d8);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 1456fb0a6 FUN_1456fb0a6 body=226 status=ok
// SIG undefined FUN_1456fb0a6(void)

longlong * FUN_1456fb0a6(longlong *param_1)

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
  pcVar13 = FUN_146313efe;
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



// FUNCTION 1456fb18e FUN_1456fb18e body=132 status=ok
// SIG undefined FUN_1456fb18e(void)

undefined1 * FUN_1456fb18e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456fb18a;
}



// FUNCTION 1456fb212 FUN_1456fb212 body=138 status=ok
// SIG undefined FUN_1456fb212(void)

code * FUN_1456fb212(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fb18e;
}



// FUNCTION 1456fb29c FUN_1456fb29c body=226 status=ok
// SIG undefined FUN_1456fb29c(void)

longlong * FUN_1456fb29c(longlong *param_1)

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
  pcVar13 = FUN_146313f8c;
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



// FUNCTION 1456fb384 FUN_1456fb384 body=132 status=ok
// SIG undefined FUN_1456fb384(void)

undefined1 * FUN_1456fb384(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x39;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456fb380;
}



// FUNCTION 1456fb408 FUN_1456fb408 body=138 status=ok
// SIG undefined FUN_1456fb408(void)

code * FUN_1456fb408(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fb384;
}



// FUNCTION 1456fb492 FUN_1456fb492 body=116 status=ok
// SIG undefined FUN_1456fb492(void)

void FUN_1456fb492(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1456fb506 FUN_1456fb506 body=116 status=ok
// SIG undefined FUN_1456fb506(void)

void FUN_1456fb506(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1456fb57a FUN_1456fb57a body=293 status=ok
// SIG undefined FUN_1456fb57a(void)

undefined4 *
FUN_1456fb57a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1456fb8c2(param_1,local_58);
  FUN_1456fb6a0(param_4,local_50);
  *(undefined4 *)(local_50 + 0x60) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1456fb9a6(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_50 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x60) =
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
      FUN_1456fc2d0(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fb6a0 FUN_1456fb6a0 body=164 status=ok
// SIG undefined FUN_1456fb6a0(void)

undefined8 FUN_1456fb6a0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_3c = 0;
  local_38 = 0;
  lStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_28 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  FUN_1456fb746(param_2,*param_1,&local_78);
  local_28 = local_28 & 0xffffffff00000000;
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1459dff72(&uStack_70);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fb746 FUN_1456fb746 body=103 status=ok
// SIG undefined FUN_1456fb746(void)

longlong * FUN_1456fb746(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_14689c22e();
  }
  FUN_1456fb7ae(param_1 + 2,param_3 + 1);
  return param_1;
}



// FUNCTION 1456fb7ae FUN_1456fb7ae body=125 status=ok
// SIG undefined FUN_1456fb7ae(void)

undefined8 * FUN_1456fb7ae(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1456fb82c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1456fb82c FUN_1456fb82c body=150 status=ok
// SIG undefined FUN_1456fb82c(void)

longlong * FUN_1456fb82c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1456fb8c2 FUN_1456fb8c2 body=227 status=ok
// SIG undefined FUN_1456fb8c2(void)

int * FUN_1456fb8c2(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 1456fb9a6 FUN_1456fb9a6 body=239 status=ok
// SIG undefined FUN_1456fb9a6(void)

void FUN_1456fb9a6(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    iVar3 = FUN_1456fba96(param_1,param_2,&local_40);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      lVar4 = (longlong)iVar3 * 0x68;
      *(undefined4 *)(lVar1 + 0x58 + lVar4) = 0;
      if (*(longlong *)(lVar1 + 0x50 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_1459dff72(lVar1 + lVar4 + 0x10);
      memmove((void *)(lVar1 + lVar4),param_3,0x60);
      FUN_14692e8d0(param_1,*param_4);
      *param_4 = iVar3;
      uVar2 = 1;
      goto LAB_1456fba0d;
    }
  }
  uVar2 = 0;
LAB_1456fba0d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fba96 FUN_1456fba96 body=277 status=ok
// SIG undefined FUN_1456fba96(void)

int FUN_1456fba96(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x60 + (longlong)iVar1 * 0x68)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x68);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1456fbb11;
LAB_1456fbb33:
        lVar5 = 0;
      }
      else {
        FUN_14689c22e(lVar5);
LAB_1456fbb11:
        lVar3 = FUN_140313fc4();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1456fbb33;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_140313fc4(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1456fbbac FUN_1456fbbac body=761 status=ok
// SIG undefined FUN_1456fbbac(void)

longlong * FUN_1456fbbac(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = param_3;
  FUN_1400021e4(&local_28,&local_48);
  lVar8 = *param_2;
  if ((((lVar8 == 0) || (lVar4 = FUN_140313fc4(), lVar4 == 0)) ||
      (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *param_2;
  }
  local_38 = *(undefined2 **)(lVar8 + 0x18);
  FUN_1400021e4(&local_38,local_68);
  FUN_144a882a8(local_58,local_68,&DAT_149e01f60);
  FUN_1401c7f3e(&local_38,local_58,&local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  puVar10 = local_38;
  if (local_30 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_70,puVar10,1);
  lVar8 = *param_2;
  if (((lVar8 == 0) || (lVar4 = FUN_140313fc4(), lVar4 == 0)) ||
     ((*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) {
    lVar8 = 0;
  }
  else {
    lVar8 = *param_2;
  }
  uVar5 = FUN_1409ffe1d();
  plVar6 = (longlong *)FUN_1456fbea7(uVar5,lVar8,local_70);
  uVar1 = *(uint *)((longlong)plVar6 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  FUN_1447f71cc(lVar8,0x40000000);
  plVar6[5] = local_28;
  FUN_1400021e4(&local_28,&local_48);
  if (plVar6 + 6 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (plVar6[6] != 0) {
      FUN_1400020a8();
    }
    plVar6[6] = local_48;
    local_48 = 0;
    *(undefined4 *)(plVar6 + 7) = local_40;
    *(undefined4 *)((longlong)plVar6 + 0x3c) = local_3c;
  }
  plVar7 = (longlong *)FUN_140f7b050();
  uVar2 = local_28;
  iVar3 = FUN_144a788f7(local_28 & 0xffffffff);
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    plVar9 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar7[8];
    }
    iVar3 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)plVar7[9] - 1U & iVar3 + (int)(uVar2 >> 0x20)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*plVar7 + (longlong)iVar3 * 0xa0) == uVar2) {
          (**(code **)(*plVar6 + 0x2a0))(plVar6);
          local_88 = 0;
          uStack_80 = 0;
          FUN_1400033ba(plVar6,0,0,0);
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0xa0 + *plVar7 + 0x98);
      } while (iVar3 != -1);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 1456fbea7 FUN_1456fbea7 body=203 status=ok
// SIG undefined FUN_1456fbea7(void)

undefined8 FUN_1456fbea7(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fbf74 FUN_1456fbf74 body=428 status=ok
// SIG undefined FUN_1456fbf74(void)

void FUN_1456fbf74(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x24);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x20 + lVar6 * 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1c + lVar6 * 0x24) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fc122 FUN_1456fc122 body=428 status=ok
// SIG undefined FUN_1456fc122(void)

void FUN_1456fc122(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fc2d0 FUN_1456fc2d0 body=517 status=ok
// SIG undefined FUN_1456fc2d0(void)

void FUN_1456fc2d0(longlong *param_1)

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
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x68);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_14689c22e(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x68;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 100) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x60) =
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



// FUNCTION 1456fc4d6 FUN_1456fc4d6 body=226 status=ok
// SIG undefined FUN_1456fc4d6(void)

longlong * FUN_1456fc4d6(longlong *param_1)

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
  pcVar13 = FUN_1462f4af0;
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



// FUNCTION 1456fc5be FUN_1456fc5be body=132 status=ok
// SIG undefined FUN_1456fc5be(void)

undefined1 * FUN_1456fc5be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveMaterialElementStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456fc5ba;
}



// FUNCTION 1456fc642 FUN_1456fc642 body=138 status=ok
// SIG undefined FUN_1456fc642(void)

code * FUN_1456fc642(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveMaterialData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fc5be;
}



// FUNCTION 1456fc6cc FUN_1456fc6cc body=40 status=ok
// SIG undefined FUN_1456fc6cc(void)

undefined8 FUN_1456fc6cc(undefined8 param_1,int param_2)

{
  FUN_1456fc6f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456fc6f4 FUN_1456fc6f4 body=129 status=ok
// SIG undefined FUN_1456fc6f4(void)

void FUN_1456fc6f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac3c610;
  FUN_14494dff0(param_1 + 0xd2);
  FUN_14494dff0(param_1 + 0xae);
  FUN_14494dff0(param_1 + 0x8a);
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140315562(param_1 + 0x18);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1456fc776 FUN_1456fc776 body=158 status=ok
// SIG undefined FUN_1456fc776(void)

void FUN_1456fc776(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0xe0) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x10);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      if (lVar2 != 0) {
        FUN_1464d89ec(lVar2,*(undefined4 *)(param_1 + 4),0);
      }
      if (*(char *)(param_1 + 0xed) == '\x01') {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
        if (lVar2 != 0) {
          lVar3 = FUN_145978cdc();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
            *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xf7;
          }
        }
      }
    }
  }
  FUN_14031cffa(*(undefined8 *)(param_1 + 0xf8),param_1,0);
  return;
}



// FUNCTION 1456fc814 FUN_1456fc814 body=136 status=ok
// SIG undefined FUN_1456fc814(void)

void FUN_1456fc814(longlong *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_2 != 0) {
    cVar2 = FUN_140317ca6(param_2 + 1,0);
    if ((cVar2 == '\0') && (0 < (int)param_1[1])) {
      lVar3 = 0x98;
      lVar4 = 0;
      do {
        lVar1 = *param_1;
        if (*(int *)(lVar1 + -4 + lVar3) == *param_2) {
          cVar2 = FUN_140317cec(lVar1 + lVar3,param_2 + 1);
          if (cVar2 != '\0') {
            FUN_1411a2fd8(lVar1 + lVar3 + -0x98,0);
          }
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x118;
      } while (lVar4 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1456fc89c FUN_1456fc89c body=147 status=ok
// SIG undefined FUN_1456fc89c(void)

void FUN_1456fc89c(longlong param_1,int param_2)

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



// FUNCTION 1456fc930 FUN_1456fc930 body=119 status=ok
// SIG undefined FUN_1456fc930(void)

void FUN_1456fc930(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_148884438(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456fc9a8 FUN_1456fc9a8 body=210 status=ok
// SIG undefined FUN_1456fc9a8(void)

undefined8 FUN_1456fc9a8(longlong param_1,double *param_2,float param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar4 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe60))(plVar2,&local_58);
        if ((local_48 - param_2[2]) * (local_48 - param_2[2]) +
            (local_58 - *param_2) * (local_58 - *param_2) +
            (local_50 - param_2[1]) * (local_50 - param_2[1]) < (double)(param_3 * param_3)) {
          uVar3 = 1;
          goto LAB_1456fca4f;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  uVar3 = 0;
LAB_1456fca4f:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fca7b FUN_1456fca7b body=517 status=ok
// SIG undefined FUN_1456fca7b(void)

undefined4 * FUN_1456fca7b(undefined4 *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (undefined8 *)0x0;
  local_48 = 0x400000000;
  if (*(longlong *)(param_2 + 8) == 0) {
LAB_1456fcc41:
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    cVar2 = FUN_144729dda(param_2);
    if (cVar2 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))();
    }
    if (*(longlong *)(param_2 + 8) == 0) {
LAB_1456fcc01:
      lVar5 = 0;
    }
    else {
      cVar2 = FUN_144729dda(param_2);
      if (cVar2 == '\0') goto LAB_1456fcc01;
      lVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    if (lVar4 == 0) goto LAB_1456fcc41;
    lVar4 = FUN_1447210f0(lVar4);
    if ((lVar5 == 0) || (lVar4 == 0)) goto LAB_1456fcc41;
    if (*(char *)(lVar5 + 0x160) == '\x01') {
      lVar4 = *(longlong *)(lVar5 + 0x168);
      if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
        lVar4 = *(longlong *)(lVar5 + 0x168);
      }
      else if (lVar4 == 0) goto LAB_1456fcc41;
      if (((DAT_14c950c29 & 1) != 0) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      local_48 = CONCAT44(local_48._4_4_,1);
      local_70 = lVar4;
      goto LAB_1456fcc41;
    }
    if (*(int *)(lVar4 + 0x238) < 1) goto LAB_1456fcc41;
    iVar9 = 0;
    lVar5 = 0;
    do {
      lVar6 = FUN_14479d2ce(*(longlong *)(lVar4 + 0x230) + lVar5);
      uVar1 = local_48;
      if (lVar6 != 0) {
        lVar8 = (longlong)(int)local_48;
        uVar3 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar3);
        if (local_48._4_4_ < uVar3) {
          FUN_1488841e4(&local_70,uVar1 & 0xffffffff);
        }
        puVar7 = local_50;
        if (local_50 == (undefined8 *)0x0) {
          puVar7 = &local_70;
        }
        puVar7[lVar8] = lVar6;
      }
      lVar5 = lVar5 + 8;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar4 + 0x238));
    *(undefined8 *)(param_1 + 8) = 0;
    puVar7 = local_50;
    if (local_50 != (undefined8 *)0x0) goto LAB_1456fcbc5;
  }
  *(undefined8 *)(param_1 + 4) = local_60;
  *(undefined8 *)(param_1 + 6) = uStack_58;
  *param_1 = (undefined4)local_70;
  param_1[1] = local_70._4_4_;
  param_1[2] = uStack_68;
  param_1[3] = uStack_64;
  puVar7 = (undefined8 *)0x0;
LAB_1456fcbc5:
  *(undefined8 **)(param_1 + 8) = puVar7;
  param_1[10] = (int)local_48;
  param_1[0xb] = local_48._4_4_;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fcc82 FUN_1456fcc82 body=428 status=ok
// SIG undefined FUN_1456fcc82(void)

void FUN_1456fcc82(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x58;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fce30 FUN_1456fce30 body=318 status=ok
// SIG undefined FUN_1456fce30(void)

undefined4 * FUN_1456fce30(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1456fd0ec(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1456fcfdc(local_40,*param_3);
  *(undefined8 *)(local_40 + 0x88) = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 0x90) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *(uint *)(local_40 + 0x84);
  cVar3 = FUN_1456fcf70(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)(local_40 + 0x94) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x90) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140325268(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fcf70 FUN_1456fcf70 body=108 status=ok
// SIG undefined FUN_1456fcf70(void)

undefined8 FUN_1456fcf70(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14032511c(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x98 + *param_1);
    FUN_1458b1d54(_Dst);
    memmove(_Dst,param_3,0x90);
    FUN_14694d8f0(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1456fcfdc FUN_1456fcfdc body=271 status=ok
// SIG undefined FUN_1456fcfdc(void)

longlong * FUN_1456fcfdc(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar8 = DAT_14c950c29;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if ((lVar2 != 0 & bVar8) == 1) {
    FUN_1456cec3c();
    bVar8 = DAT_14c950c29;
  }
  lVar2 = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x13) = *(undefined4 *)((longlong)param_2 + 0x13);
  *(int *)(param_1 + 2) = (int)lVar2;
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if ((lVar2 != 0 & bVar8) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  param_1[6] = param_2[6];
  lVar2 = param_2[7];
  param_1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = param_2[8];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar5 = param_2[9];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar6 = param_2[10];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar7 = param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 10) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(int *)(param_1 + 0xb) = (int)lVar7;
  *(int *)(param_1 + 8) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(int *)(param_1 + 9) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 99);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 99) = uVar1;
  lVar2 = param_2[0xd];
  param_1[0xd] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar2;
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 1456fd0ec FUN_1456fd0ec body=248 status=ok
// SIG undefined FUN_1456fd0ec(void)

int * FUN_1456fd0ec(longlong *param_1,int *param_2)

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
      FUN_14125fb0c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x98);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x98) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x98 + *param_1;
  return param_2;
}



// FUNCTION 1456fd1e4 FUN_1456fd1e4 body=198 status=ok
// SIG undefined FUN_1456fd1e4(void)

void FUN_1456fd1e4(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  DAT_14cad37a8 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a899460;
  plVar4[2] = (longlong)puVar3;
  DAT_14cad37b0 = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      *puVar3 = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *puVar3 = puVar3;
      if ((longlong *)puVar3[1] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[1];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[1] = plVar4;
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
  }
  FUN_1456fd2aa(DAT_14cad37a8);
  return;
}



// FUNCTION 1456fd2aa FUN_1456fd2aa body=107 status=ok
// SIG undefined FUN_1456fd2aa(void)

void FUN_1456fd2aa(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140008f10();
  FUN_1456fd316(local_30,param_1);
  FUN_1448b6402(lVar1 + 0x120,local_38,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fd316 FUN_1456fd316 body=422 status=ok
// SIG undefined FUN_1456fd316(void)

longlong * FUN_1456fd316(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1456fd3ec:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14a899480;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1456cead6;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1456fd3ec;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14a899480;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1456cead6;
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



// FUNCTION 1456fd4bc FUN_1456fd4bc body=144 status=ok
// SIG undefined FUN_1456fd4bc(void)

void FUN_1456fd4bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 200;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xc4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xc0 + lVar6 * 200);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 200 + 0xc0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xc0);
  FUN_146efed88(*param_1 + lVar2 + 8);
  FUN_147db93e4(param_1,param_2,1);
  return;
}



// FUNCTION 1456fd54c FUN_1456fd54c body=59 status=ok
// SIG undefined FUN_1456fd54c(void)

longlong FUN_1456fd54c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141859330(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_14872eea9(lVar2);
  return lVar2;
}



// FUNCTION 1456fd588 FUN_1456fd588 body=109 status=ok
// SIG undefined FUN_1456fd588(void)

undefined8 FUN_1456fd588(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 200) == param_2) {
          FUN_1456fd4bc(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 200 + *param_1 + 0xc0);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1456fd5f6 FUN_1456fd5f6 body=198 status=ok
// SIG undefined FUN_1456fd5f6(void)

longlong FUN_1456fd5f6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 200;
        if (*(int *)(*param_1 + (longlong)iVar1 * 200) == *param_3) {
          if (lVar3 != 0) goto LAB_1456fd69f;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xc0);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_147db9866(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 200 + *param_1;
LAB_1456fd69f:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1456fd6be FUN_1456fd6be body=138 status=ok
// SIG undefined FUN_1456fd6be(void)

void FUN_1456fd6be(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x28 + (ulonglong)param_2 * 0x38);
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
    memmove((void *)((ulonglong)param_2 * 0x38 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x38 + lVar3),(longlong)iVar6 * 0x38);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1456fd748 FUN_1456fd748 body=59 status=ok
// SIG undefined FUN_1456fd748(void)

undefined8 * FUN_1456fd748(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a78db48;
  puVar2[2] = 0;
  return puVar2;
}



// FUNCTION 1456fd784 FUN_1456fd784 body=63 status=ok
// SIG undefined FUN_1456fd784(void)

void FUN_1456fd784(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456fd7c4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1456fd7c4 FUN_1456fd7c4 body=105 status=ok
// SIG undefined FUN_1456fd7c4(void)

ulonglong FUN_1456fd7c4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 1456fd82e FUN_1456fd82e body=63 status=ok
// SIG undefined FUN_1456fd82e(void)

void FUN_1456fd82e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1456fdbc6(param_1);
    FUN_14032c1e2(param_1);
    return;
  }
  FUN_14032c1e2(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1402af410(param_1);
  return;
}



// FUNCTION 1456fd86e FUN_1456fd86e body=63 status=ok
// SIG undefined FUN_1456fd86e(void)

void FUN_1456fd86e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1456fdd0e(param_1);
    FUN_14032c706(param_1);
    return;
  }
  FUN_14032c706(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140439c3c(param_1);
  return;
}



// FUNCTION 1456fd8ae FUN_1456fd8ae body=63 status=ok
// SIG undefined FUN_1456fd8ae(void)

void FUN_1456fd8ae(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1456fda76(param_1);
    FUN_14032c23c(param_1);
    return;
  }
  FUN_14032c23c(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14820822a(param_1);
  return;
}



// FUNCTION 1456fd8ee FUN_1456fd8ee body=63 status=ok
// SIG undefined FUN_1456fd8ee(void)

void FUN_1456fd8ee(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1456fd92e(param_1);
    FUN_14032c5a6(param_1);
    return;
  }
  FUN_14032c5a6(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145d6d4b4(param_1);
  return;
}



// FUNCTION 1456fd92e FUN_1456fd92e body=327 status=ok
// SIG undefined FUN_1456fd92e(void)

void FUN_1456fd92e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fda76 FUN_1456fda76 body=335 status=ok
// SIG undefined FUN_1456fda76(void)

void FUN_1456fda76(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fdbc6 FUN_1456fdbc6 body=327 status=ok
// SIG undefined FUN_1456fdbc6(void)

void FUN_1456fdbc6(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fdd0e FUN_1456fdd0e body=333 status=ok
// SIG undefined FUN_1456fdd0e(void)

void FUN_1456fdd0e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xec + (longlong)iVar4 * 0xf0) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fde5c FUN_1456fde5c body=132 status=ok
// SIG undefined FUN_1456fde5c(void)

void FUN_1456fde5c(longlong param_1,int param_2)

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



// FUNCTION 1456fdee2 FUN_1456fdee2 body=112 status=ok
// SIG undefined FUN_1456fdee2(void)

void FUN_1456fdee2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,8);
  }
  return;
}



// FUNCTION 1456fdf52 FUN_1456fdf52 body=205 status=ok
// SIG undefined FUN_1456fdf52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456fdf52(void)

{
  if ((DAT_14ca662bf & 2) == 0) {
    DAT_14ca662bf = DAT_14ca662bf | 2;
    _DAT_14ca66260 = L"FAllocateCommandInstanceOutputSpaceCs";
    _DAT_14ca66278 = FUN_146826540;
    _DAT_14ca66280 = FUN_146825d77;
    _DAT_14ca66288 = FUN_146825fd6;
    _DAT_14ca66290 = FUN_1407e02ea;
    _DAT_14ca66298 = FUN_146826273;
    _DAT_14ca66270 = FUN_14732c662;
    _DAT_14ca662b0 = 0xffffffff000000e0;
    _DAT_14ca662b8 = 8;
    DAT_14ca662bc = 0;
    _DAT_14ca662a0 = &LAB_14732c68c;
    FUN_1456fe020();
    FUN_1407e00cc(&DAT_14ca66258);
    return;
  }
  return;
}



// FUNCTION 1456fe020 FUN_1456fe020 body=123 status=ok
// SIG undefined FUN_1456fe020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456fe020(void)

{
  _DAT_14ca68f60 = L"BASE";
  DAT_14ca68f8a = 4;
  _DAT_14ca68f68 = FUN_140b35ae4();
  _DAT_14ca68f70 = DAT_14ca66268;
  _DAT_14ca68f78 = &LAB_14682652b;
  DAT_14ca66268 = &DAT_14ca68f60;
  DAT_14ca662bd = DAT_14ca662bd + '\x01';
  _DAT_14ca68f80 = 0x100000000;
  if (*(char *)(_DAT_14ca68f68 + 100) != '\0') {
    DAT_14ca662be = DAT_14ca662be + '\x01';
  }
  return;
}



// FUNCTION 1456fe09c FUN_1456fe09c body=226 status=ok
// SIG undefined FUN_1456fe09c(void)

longlong * FUN_1456fe09c(longlong *param_1)

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
  pcVar13 = FUN_14631298e;
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



// FUNCTION 1456fe184 FUN_1456fe184 body=138 status=ok
// SIG undefined FUN_1456fe184(void)

code * FUN_1456fe184(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DrawIndirectArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000b00;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312a16;
}



// FUNCTION 1456fe20e FUN_1456fe20e body=138 status=ok
// SIG undefined FUN_1456fe20e(void)

code * FUN_1456fe20e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdOffsetBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000b01;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456fe184;
}



// FUNCTION 1456fe298 FUN_1456fe298 body=19 status=ok
// SIG undefined FUN_1456fe298(void)

void FUN_1456fe298(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1456fe2ab FUN_1456fe2ab body=19 status=ok
// SIG undefined FUN_1456fe2ab(void)

void FUN_1456fe2ab(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1456fe2be FUN_1456fe2be body=63 status=ok
// SIG undefined FUN_1456fe2be(void)

void FUN_1456fe2be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456fe416(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1456fe2fe FUN_1456fe2fe body=63 status=ok
// SIG undefined FUN_1456fe2fe(void)

void FUN_1456fe2fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456fe5de(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1456fe33e FUN_1456fe33e body=63 status=ok
// SIG undefined FUN_1456fe33e(void)

void FUN_1456fe33e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456fe474(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1456fe37e FUN_1456fe37e body=150 status=ok
// SIG undefined FUN_1456fe37e(void)

void FUN_1456fe37e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456fe416 FUN_1456fe416 body=93 status=ok
// SIG undefined FUN_1456fe416(void)

ulonglong FUN_1456fe416(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1456fe474 FUN_1456fe474 body=93 status=ok
// SIG undefined FUN_1456fe474(void)

ulonglong FUN_1456fe474(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1456fe4d2 FUN_1456fe4d2 body=132 status=ok
// SIG undefined FUN_1456fe4d2(void)

void FUN_1456fe4d2(longlong param_1,int param_2)

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



// FUNCTION 1456fe558 FUN_1456fe558 body=132 status=ok
// SIG undefined FUN_1456fe558(void)

void FUN_1456fe558(longlong param_1,int param_2)

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



// FUNCTION 1456fe5de FUN_1456fe5de body=115 status=ok
// SIG undefined FUN_1456fe5de(void)

ulonglong FUN_1456fe5de(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1456fe652 FUN_1456fe652 body=132 status=ok
// SIG undefined FUN_1456fe652(void)

void FUN_1456fe652(longlong param_1,int param_2)

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



// FUNCTION 1456fe6d6 FUN_1456fe6d6 body=132 status=ok
// SIG undefined FUN_1456fe6d6(void)

void FUN_1456fe6d6(longlong param_1,int param_2)

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



// FUNCTION 1456fe75a FUN_1456fe75a body=147 status=ok
// SIG undefined FUN_1456fe75a(void)

void FUN_1456fe75a(longlong param_1,int param_2)

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



// FUNCTION 1456fe7f8 FUN_1456fe7f8 body=176 status=ok
// SIG undefined FUN_1456fe7f8(void)

void FUN_1456fe7f8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  FUN_140337e08();
  uVar4 = FUN_140309e34(param_1[9] + 0x58,param_1[8] + 0x240,param_1[9] + 0x70);
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  lVar1 = param_1[8];
  lVar2 = param_1[9];
  fVar5 = (float)FUN_140309e34(lVar2 + 0x80,lVar1 + 0x240,lVar2 + 0x98);
  fVar6 = 0.0;
  if (0.0 <= fVar5) {
    fVar6 = fVar5;
  }
  *(float *)(param_1 + 0xc) = fVar6;
  iVar3 = FUN_140e4cbdc(lVar2 + 0xa8,lVar1 + 0x240,lVar2 + 0xc0);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  *(int *)((longlong)param_1 + 100) = iVar3;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) < 0) {
    FUN_1447a8aa0(param_1 + 0xd,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001456fe899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,param_1 + 0xd);
  return;
}



// FUNCTION 1456fe8a8 FUN_1456fe8a8 body=447 status=ok
// SIG undefined FUN_1456fe8a8(void)

void FUN_1456fe8a8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 unaff_RBX;
  longlong lVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0xd0);
  uVar15 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
  FUN_140cdbbeb(&local_70,uVar15,(uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar6) ^ 1);
  lVar14 = local_70;
  if ((longlong)local_68 != 0) {
    lVar16 = 0;
    do {
      FUN_14070cbf4(&local_80,*(undefined8 *)(lVar14 + lVar16));
      if (local_80 != 0) {
        lVar8 = *(longlong *)(local_80 + 0x390);
        if (lVar8 == 0) {
          local_98 = *(undefined4 *)(local_80 + 0x588);
          uStack_94 = *(undefined4 *)(local_80 + 0x58c);
          uStack_90 = *(undefined4 *)(local_80 + 0x590);
          uStack_8c = *(undefined4 *)(local_80 + 0x594);
          dVar5 = *(double *)(local_80 + 0x598);
          fVar4 = *(float *)(local_80 + 0x5d4);
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1403e3958(param_2,iVar7);
          }
          lVar8 = *param_2;
          puVar3 = (undefined4 *)(lVar8 + (longlong)iVar7 * 0x18);
          *puVar3 = local_98;
          puVar3[1] = uStack_94;
          puVar3[2] = uStack_90;
          puVar3[3] = uStack_8c;
          *(double *)(lVar8 + 0x10 + (longlong)iVar7 * 0x18) = dVar5 - (double)fVar4;
        }
        else {
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1403e3958(param_2,iVar7);
          }
          lVar9 = *param_2;
          *(undefined8 *)(lVar9 + 0x10 + (longlong)iVar7 * 0x18) = *(undefined8 *)(lVar8 + 600);
          uVar10 = *(undefined4 *)(lVar8 + 0x24c);
          uVar11 = *(undefined4 *)(lVar8 + 0x250);
          uVar12 = *(undefined4 *)(lVar8 + 0x254);
          puVar3 = (undefined4 *)(lVar9 + (longlong)iVar7 * 0x18);
          *puVar3 = *(undefined4 *)(lVar8 + 0x248);
          puVar3[1] = uVar10;
          puVar3[2] = uVar11;
          puVar3[3] = uVar12;
        }
      }
      plVar13 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)local_68 * 8 != lVar16);
  }
  if (local_70 != 0) {
    FUN_1400020a8(local_70);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456fea68 FUN_1456fea68 body=233 status=ok
// SIG undefined FUN_1456fea68(void)

void FUN_1456fea68(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1456fec8a();
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      iVar3 = FUN_1456ff52c(lVar1);
      if (iVar3 != 5) {
        cVar2 = FUN_1456feb72(param_1,(undefined8 *)(param_1 + 0xb0));
        if (cVar2 != '\0') {
          FUN_1456feb66(*(undefined8 *)(param_1 + 0xb0),lVar1);
        }
        cVar2 = FUN_1456febb8(param_1,(undefined8 *)(param_1 + 0xb8));
        if (cVar2 != '\0') {
          FUN_1456feb52(*(undefined8 *)(param_1 + 0xb8),lVar1);
        }
        cVar2 = FUN_1456febfe(param_1,(undefined8 *)(param_1 + 0xc0));
        if (cVar2 != '\0') {
          FUN_1456fefb8(*(undefined8 *)(param_1 + 0xc0),lVar1);
        }
        cVar2 = FUN_1456fec44(param_1,(undefined8 *)(param_1 + 200));
        if (cVar2 != '\0') {
          FUN_1456feb5c(*(undefined8 *)(param_1 + 200),lVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1456feb52 FUN_1456feb52 body=9 status=ok
// SIG undefined FUN_1456feb52(void)

void FUN_1456feb52(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x80);
  return;
}



// FUNCTION 1456feb5c FUN_1456feb5c body=9 status=ok
// SIG undefined FUN_1456feb5c(void)

void FUN_1456feb5c(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x30);
  return;
}



// FUNCTION 1456feb66 FUN_1456feb66 body=12 status=ok
// SIG undefined FUN_1456feb66(void)

void FUN_1456feb66(longlong param_1)

{
  FUN_14485c47a(param_1 + 0xb8);
  return;
}



// FUNCTION 1456feb72 FUN_1456feb72 body=69 status=ok
// SIG undefined FUN_1456feb72(void)

ulonglong FUN_1456feb72(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_1456fecef();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456febb8 FUN_1456febb8 body=69 status=ok
// SIG undefined FUN_1456febb8(void)

ulonglong FUN_1456febb8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_1456feda1();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456febfe FUN_1456febfe body=69 status=ok
// SIG undefined FUN_1456febfe(void)

ulonglong FUN_1456febfe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_1456fee53();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456fec44 FUN_1456fec44 body=69 status=ok
// SIG undefined FUN_1456fec44(void)

ulonglong FUN_1456fec44(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if (*param_2 == 0) {
    lVar1 = FUN_1456fef05();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar1 != 0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456fec8a FUN_1456fec8a body=101 status=ok
// SIG undefined FUN_1456fec8a(void)

void FUN_1456fec8a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1456ff3e0();
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar3 = FUN_1459f1912();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      iVar2 = FUN_1456ff52c(lVar1);
      if (iVar2 != 5) {
                    /* WARNING: Could not recover jumptable at 0x0001456fece4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e0))(param_1,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456fecef FUN_1456fecef body=177 status=ok
// SIG undefined FUN_1456fecef(void)

undefined8 FUN_1456fecef(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145988288();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456feda1 FUN_1456feda1 body=177 status=ok
// SIG undefined FUN_1456feda1(void)

undefined8 FUN_1456feda1(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14599991c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fee53 FUN_1456fee53 body=177 status=ok
// SIG undefined FUN_1456fee53(void)

undefined8 FUN_1456fee53(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145988534();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fef05 FUN_1456fef05 body=177 status=ok
// SIG undefined FUN_1456fef05(void)

undefined8 FUN_1456fef05(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14598836c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456fefb8 FUN_1456fefb8 body=292 status=ok
// SIG undefined FUN_1456fefb8(void)

void FUN_1456fefb8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  longlong local_50 [2];
  undefined1 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14485c47a(param_1 + 0x30);
  FUN_1456ff0de(param_1 + 0x38);
  lVar1 = param_1 + 0xe8;
  FUN_140056680(local_50,L"Initialization");
  local_51 = 0;
  local_40 = &local_51;
  local_38 = local_50;
  FUN_1456ff122(lVar1,local_2c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"Undiscovered");
  local_51 = 1;
  local_40 = &local_51;
  local_38 = local_50;
  FUN_1456ff122(lVar1,local_2c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_50,L"Discovered");
  local_51 = 2;
  local_40 = &local_51;
  local_38 = local_50;
  FUN_1456ff122(lVar1,local_2c);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1446e0b6e(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ff0de FUN_1456ff0de body=67 status=ok
// SIG undefined FUN_1456ff0de(void)

void FUN_1456ff0de(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14570016c(param_1);
    FUN_1414f43a4(param_1,0);
    return;
  }
  FUN_1414f43a4(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140fd8960(param_1);
  return;
}



// FUNCTION 1456ff122 FUN_1456ff122 body=306 status=ok
// SIG undefined FUN_1456ff122(void)

undefined4 * FUN_1456ff122(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1456ff2fa(param_1,local_48);
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *(byte *)*param_3;
  *(undefined8 *)(local_40 + 8) = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_40 + 0x10) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)(local_40 + 0x14) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  cVar4 = FUN_1456ff256(param_1,bVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x1c) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1457002c2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ff256 FUN_1456ff256 body=163 status=ok
// SIG undefined FUN_1456ff256(void)

undefined8 FUN_1456ff256(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148dd0710(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1456ff2fa FUN_1456ff2fa body=230 status=ok
// SIG undefined FUN_1456ff2fa(void)

int * FUN_1456ff2fa(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1456ff3e0 FUN_1456ff3e0 body=331 status=ok
// SIG undefined FUN_1456ff3e0(void)

void FUN_1456ff3e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar4 = FUN_144a79464();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = FUN_144a2383e();
      if (lVar4 != 0) {
        FUN_1456ff562(lVar4,lVar1,*(undefined8 *)(lVar1 + 0x380));
      }
      iVar3 = FUN_1456ff52c(lVar1);
      if (iVar3 != 5) {
        FUN_1456ff6f0(param_1 + 0xd);
        if (param_1[0xd] != 0) {
          FUN_1456ff692(param_1[0xd],lVar1);
        }
        (**(code **)(*param_1 + 0x2b8))(param_1);
        if (param_1[6] != 0) {
          FUN_14570064e(param_1[6],lVar1);
        }
        if (param_1[0xe] == 0) {
          puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x80;
          *(undefined4 *)(puVar5 + 6) = 0xffffffff;
          param_1[0xe] = (longlong)puVar5;
        }
        if (param_1[0xf] == 0) {
          lVar4 = FUN_14001cc68(0x78,0x10);
          FUN_1456ff636(lVar4);
          param_1[0xf] = lVar4;
        }
        (**(code **)(*param_1 + 0x2d0))(param_1);
      }
      (**(code **)(*param_1 + 0x2c0))(param_1);
      plVar2 = (longlong *)param_1[7];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2a0))(plVar2,lVar1);
      }
      FUN_1456ff552(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1456ff52c FUN_1456ff52c body=37 status=ok
// SIG undefined FUN_1456ff52c(void)

undefined1 FUN_1456ff52c(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x30);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)(*(longlong *)(puVar1 + 0x360) + 0x152);
    if (*(longlong *)(puVar1 + 0x360) == 0) {
      puVar2 = puVar1;
    }
    return *puVar2;
  }
  return 0;
}



// FUNCTION 1456ff552 FUN_1456ff552 body=15 status=ok
// SIG undefined FUN_1456ff552(void)

void FUN_1456ff552(undefined8 param_1)

{
  FUN_1456ff594(&DAT_14c9a7d18,param_1);
  return;
}



// FUNCTION 1456ff562 FUN_1456ff562 body=49 status=ok
// SIG undefined FUN_1456ff562(void)

void FUN_1456ff562(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1456ffb1c(param_1,param_2,1);
  *(undefined8 *)(lVar1 + 8) = param_2;
  FUN_1456ff8f6(param_1,param_2,param_3);
  return;
}



// FUNCTION 1456ff594 FUN_1456ff594 body=162 status=ok
// SIG undefined FUN_1456ff594(void)

void FUN_1456ff594(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1456ff621;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1456ff621:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1456ff636 FUN_1456ff636 body=91 status=ok
// SIG undefined FUN_1456ff636(void)

undefined8 * FUN_1456ff636(undefined8 *param_1)

{
  FUN_1409e1656();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_14b401520;
  param_1[1] = &PTR_FUN_14b401570;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1456ff692 FUN_1456ff692 body=93 status=ok
// SIG undefined FUN_1456ff692(void)

void FUN_1456ff692(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x90);
  if (param_2 != 0) {
    FUN_1456ff810(param_2 + 0x60,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ff6f0 FUN_1456ff6f0 body=120 status=ok
// SIG undefined FUN_1456ff6f0(void)

void FUN_1456ff6f0(longlong *param_1)

{
  undefined4 *_Dst;
  
  if (*param_1 == 0) {
    _Dst = (undefined4 *)FUN_14001cc68(0xa0);
    memset(_Dst,0,0xa0);
    *_Dst = 1;
    *(undefined8 *)(_Dst + 2) = 0;
    *(undefined8 *)(_Dst + 4) = 0;
    *(undefined8 *)(_Dst + 6) = 0;
    *(undefined8 *)(_Dst + 8) = 0;
    *(undefined8 *)(_Dst + 10) = 0;
    *(undefined8 *)(_Dst + 0xc) = 0;
    *(undefined8 *)(_Dst + 0xe) = 0;
    *(undefined8 *)(_Dst + 0x10) = 0;
    *(undefined8 *)(_Dst + 0x12) = 0;
    *(undefined8 *)(_Dst + 0x14) = 0;
    *(undefined8 *)(_Dst + 0x16) = 0;
    *(undefined8 *)(_Dst + 0x18) = 0;
    _Dst[0x1a] = 2;
    *(undefined8 *)(_Dst + 0x1b) = 0;
    *(undefined8 *)(_Dst + 0x1d) = 0;
    *(undefined8 *)(_Dst + 0x22) = 0;
    *(undefined8 *)(_Dst + 0x24) = 0;
    _Dst[0x26] = 0;
    *param_1 = (longlong)_Dst;
  }
  return;
}



// FUNCTION 1456ff768 FUN_1456ff768 body=124 status=ok
// SIG undefined FUN_1456ff768(void)

undefined8 FUN_1456ff768(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = FUN_14001cc68(0x10,0x10);
      FUN_1456ff7e4(uVar4,lVar1);
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = uVar4;
      if (puVar2 == (undefined8 *)0x0) {
        return uVar4;
      }
      (**(code **)*puVar2)(puVar2,1);
      return *(undefined8 *)(param_1 + 0x60);
    }
  }
  return 0;
}



// FUNCTION 1456ff7e4 FUN_1456ff7e4 body=44 status=ok
// SIG undefined FUN_1456ff7e4(void)

undefined8 * FUN_1456ff7e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b419e60;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1);
  return param_1;
}



// FUNCTION 1456ff810 FUN_1456ff810 body=228 status=ok
// SIG undefined FUN_1456ff810(void)

undefined8 FUN_1456ff810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b403f60;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b410670;
  local_38[3] = param_3;
  local_38[4] = &DAT_1459247b8;
  FUN_1457bc922(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ff8f6 FUN_1456ff8f6 body=234 status=ok
// SIG undefined FUN_1456ff8f6(void)

void FUN_1456ff8f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1456ffb1c(param_1,param_2,1);
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_1456ffa26(&DAT_14c872b90,local_28,param_1,&LAB_1470a07fe);
    FUN_1456ffa26(&DAT_14c872c10,local_28,param_1,&LAB_1470a0806);
    *(undefined8 *)(param_1 + 0x570) = param_2;
    FUN_1456ff9e2(param_1 + 0x140);
    FUN_14033b5bc(param_1,param_3);
    FUN_14033cb62(param_1);
    if (*(int *)(param_1 + 0x58) != 4) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      FUN_145835dd8(param_1 + 0x580,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x10))();
    if (DAT_14cb0d2b0 != 0) {
      FUN_14033acda(param_1,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ff9e2 FUN_1456ff9e2 body=67 status=ok
// SIG undefined FUN_1456ff9e2(void)

void FUN_1456ff9e2(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14570001c(param_1);
    FUN_145aaa688(param_1,0);
    return;
  }
  FUN_145aaa688(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14173907e(param_1);
  return;
}



// FUNCTION 1456ffa26 FUN_1456ffa26 body=244 status=ok
// SIG undefined FUN_1456ffa26(void)

undefined8
FUN_1456ffa26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14a178f10;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ffb1c FUN_1456ffb1c body=331 status=ok
// SIG undefined FUN_1456ffb1c(void)

ulonglong * FUN_1456ffb1c(longlong param_1,ulonglong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  ulonglong *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  ulonglong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x5d8) != *(int *)(param_1 + 0x604)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x608;
    if (*(longlong *)(param_1 + 0x610) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x610);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x618) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x5d0) + (longlong)iVar5 * 0x18);
        if (*puVar4 == param_2) {
          puVar3 = (ulonglong *)0x0;
          if ((puVar4 != (ulonglong *)0x0) && (puVar4 + 1 != (ulonglong *)0x0)) {
            puVar3 = (ulonglong *)puVar4[1];
          }
          goto LAB_1456ffbcf;
        }
        iVar5 = (int)puVar4[2];
      } while (iVar5 != -1);
    }
  }
  puVar3 = (ulonglong *)0x0;
LAB_1456ffbcf:
  local_48 = param_2;
  if (param_3 == '\x01' && puVar3 == (ulonglong *)0x0) {
    puVar4 = (ulonglong *)FUN_1456ffc68(&DAT_14c9a1bd0);
    memset(puVar4 + 1,0,0x118);
    FUN_1456ffcc8(puVar4);
    local_38 = &local_50;
    *puVar4 = param_2;
    local_40 = &local_48;
    local_50 = puVar4;
    FUN_1456ffd6e((longlong *)(param_1 + 0x5d0),local_2c);
    puVar3 = local_50;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ffc68 FUN_1456ffc68 body=96 status=ok
// SIG undefined FUN_1456ffc68(void)

void FUN_1456ffc68(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x900,0);
    lVar4 = 7;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x24;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 8;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1456ffcc8 FUN_1456ffcc8 body=165 status=ok
// SIG undefined FUN_1456ffcc8(void)

void FUN_1456ffcc8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = &DAT_14a171d50;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_14a171d50;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &DAT_14a171d50;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  return;
}



// FUNCTION 1456ffd6e FUN_1456ffd6e body=323 status=ok
// SIG undefined FUN_1456ffd6e(void)

undefined4 * FUN_1456ffd6e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1456fff34(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1456ffeb2(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14570046a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ffeb2 FUN_1456ffeb2 body=130 status=ok
// SIG undefined FUN_1456ffeb2(void)

undefined8 FUN_1456ffeb2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_145c1f2d0((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1456fff34 FUN_1456fff34 body=231 status=ok
// SIG undefined FUN_1456fff34(void)

int * FUN_1456fff34(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14570001c FUN_14570001c body=335 status=ok
// SIG undefined FUN_14570001c(void)

void FUN_14570001c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570016c FUN_14570016c body=341 status=ok
// SIG undefined FUN_14570016c(void)

void FUN_14570016c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1d4 + (longlong)iVar4 * 0x1d8) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457002c2 FUN_1457002c2 body=422 status=ok
// SIG undefined FUN_1457002c2(void)

void FUN_1457002c2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 14570046a FUN_14570046a body=483 status=ok
// SIG undefined FUN_14570046a(void)

void FUN_14570046a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14570064e FUN_14570064e body=591 status=ok
// SIG undefined FUN_14570064e(void)

void FUN_14570064e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14020fad6(&local_68,L"Profiles/");
  uVar2 = FUN_14118da1c();
  FUN_140056680(&local_78,uVar2);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_98 = 0;
  FUN_14063337c(puVar4,L"-VaultPath=",&local_68,1);
  iVar1 = (int)uStack_60 + -1;
  if ((int)uStack_60 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x3a,local_68,iVar1);
  local_90 = 0xffffffff;
  local_98 = local_98 & 0xffffffff00000000;
  iVar1 = FUN_1447ee042(&local_68,&DAT_149e31048,1,1);
  if (iVar1 == -1) {
    puVar3 = (undefined8 *)FUN_14047ac8c();
    local_58 = *puVar3;
    local_50 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      local_50 = 0;
    }
    local_48 = local_68;
    local_40 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      local_40 = 0;
    }
    FUN_140bee87a(&local_88,&local_58,2);
    if (param_1 + 0x38 == &local_88) {
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x38] != 0) {
        FUN_1400020a8();
      }
      param_1[0x38] = local_88;
      local_88 = 0;
      *(undefined4 *)(param_1 + 0x39) = local_80;
      *(undefined4 *)((longlong)param_1 + 0x1cc) = local_7c;
    }
  }
  else {
    iVar1 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0x38,local_68,iVar1);
  }
  FUN_14033ada8(param_1 + 0x38);
  FUN_14033ada8(param_1 + 0x3a);
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x36] = param_2;
  FUN_14033adf2(param_1);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570089e FUN_14570089e body=876 status=ok
// SIG undefined FUN_14570089e(void)

void FUN_14570089e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  int *local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f8);
  if (0 < (int)*(uint *)(param_1 + 0x1f8)) {
    iVar6 = 1;
    lVar11 = 0x50;
    uVar9 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x1f0);
      if (*(longlong *)(lVar4 + uVar9 * 0x50) == 0) {
        FUN_140033559(".\\../Plugins/Gearbox/GbxGame/Source/GbxGame/Private/Vault/GbxProfileProgressVault.cpp"
                      ,0x34a,L"No name specified for Path[%d]",uVar9 & 0xffffffff);
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f8);
      }
      plVar8 = (longlong *)(lVar4 + uVar9 * 0x50);
      uVar1 = uVar9 + 1;
      iVar2 = (int)uVar3;
      lVar4 = lVar11;
      iVar7 = iVar6;
      if ((longlong)uVar1 < (longlong)iVar2) {
        do {
          if (*plVar8 == *(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar4)) {
            FUN_1400021e4(plVar8,&local_70);
            puVar5 = local_70;
            if (local_68 == 0) {
              puVar5 = &DAT_149dfb77a;
            }
            FUN_140033559(".\\../Plugins/Gearbox/GbxGame/Source/GbxGame/Private/Vault/GbxProfileProgressVault.cpp"
                          ,0x34f,L"More than one path is named \'%ls\'",puVar5);
            if (local_70 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            uVar3 = (ulonglong)*(uint *)(param_1 + 0x1f8);
          }
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 0x50;
          iVar2 = (int)uVar3;
        } while (iVar7 < iVar2);
      }
      if (*(longlong *)((longlong)plVar8 + 0xc) != 0) {
        if (iVar2 != 0) {
          uVar3 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + uVar3) ==
                *(longlong *)((longlong)plVar8 + 0xc)) {
              iVar7 = (int)(uVar3 >> 4) * -0x33333333;
              if ((-1 < iVar7) && (iVar7 < iVar2)) {
                *(int *)((longlong)plVar8 + 0x24) = iVar7;
                if (*(int *)(param_1 + 0x1f8) <= iVar7) goto LAB_145700b6f;
                goto LAB_145700998;
              }
              break;
            }
            uVar3 = uVar3 + 0x50;
          } while ((longlong)iVar2 * 0x50 != uVar3);
        }
        *(undefined4 *)((longlong)plVar8 + 0x24) = 0xffffffff;
LAB_145700b6f:
        local_98 = (int *)((longlong)plVar8 + 0x24);
        FUN_1400021e4((longlong)plVar8 + 0xc,&local_70);
        puVar5 = local_70;
        if (local_68 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        FUN_140033559(".\\../Plugins/Gearbox/GbxGame/Source/GbxGame/Private/Vault/GbxProfileProgressVault.cpp"
                      ,0x355,L"Parent path \'%ls\' does not exist",puVar5);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar7 = *local_98;
LAB_145700998:
        if ((longlong)uVar9 <= (longlong)iVar7) {
          FUN_1400021e4(plVar8,&local_70);
          puVar5 = &DAT_149dfb77a;
          if (local_68 != 0) {
            puVar5 = local_70;
          }
          FUN_1400021e4((longlong)plVar8 + 0xc);
          puVar10 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar10 = local_80;
          }
          local_a8 = puVar5;
          FUN_140033559(".\\../Plugins/Gearbox/GbxGame/Source/GbxGame/Private/Vault/GbxProfileProgressVault.cpp"
                        ,0x356,L"Parent path \'%ls\' must be defined before path \'%ls\'",puVar10);
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_70 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if ((byte)((char)plVar8[1] - 1U) < 2) {
        FUN_1400021e4(plVar8,&local_90);
        puVar5 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar5 = local_90;
        }
        FUN_140002266(&local_80,L"%ls_selected",puVar5);
        FUN_14000bbd8(&local_70,&local_80,0);
        FUN_1404e49fa(plVar8 + 5,&local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar3 = (ulonglong)*(int *)(param_1 + 0x1f8);
      iVar6 = iVar6 + 1;
      lVar11 = lVar11 + 0x50;
      uVar9 = uVar1;
    } while ((longlong)uVar1 < (longlong)uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145700c0c FUN_145700c0c body=334 status=ok
// SIG undefined FUN_145700c0c(void)

undefined4 * FUN_145700c0c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145700dde(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145700d5c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14033bdf4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145700d5c FUN_145700d5c body=130 status=ok
// SIG undefined FUN_145700d5c(void)

undefined8 FUN_145700d5c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1470a3574((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145700dde FUN_145700dde body=243 status=ok
// SIG undefined FUN_145700dde(void)

int * FUN_145700dde(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145700ed2 FUN_145700ed2 body=67 status=ok
// SIG undefined FUN_145700ed2(void)

void FUN_145700ed2(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145701e00(param_1);
    FUN_145974b34(param_1,0);
    return;
  }
  FUN_145974b34(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14033bdf4(param_1);
  return;
}



// FUNCTION 145700f16 FUN_145700f16 body=107 status=ok
// SIG undefined FUN_145700f16(void)

void FUN_145700f16(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145700ff8(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 145700f82 FUN_145700f82 body=118 status=ok
// SIG undefined FUN_145700f82(void)

void FUN_145700f82(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1c)) {
      uVar2 = uVar1 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1c,4);
  }
  return;
}



// FUNCTION 145700ff8 FUN_145700ff8 body=132 status=ok
// SIG undefined FUN_145700ff8(void)

void FUN_145700ff8(longlong param_1,int param_2)

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



// FUNCTION 14570107c FUN_14570107c body=195 status=ok
// SIG undefined FUN_14570107c(void)

void FUN_14570107c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2c8);
    lVar4 = (longlong)*(int *)(param_1 + 0x2d0) * 0x60 + lVar1;
    do {
      *(undefined1 *)(lVar1 + 0x36) = *(undefined1 *)(lVar1 + 0xc);
      *(undefined1 *)(lVar1 + 0x37) = *(undefined1 *)(lVar1 + 0x35);
      for (lVar5 = *(longlong *)(lVar1 + 0x48); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x48)) {
        if (*(char *)(lVar5 + 0xc) == '\0') {
          *(undefined1 *)(lVar1 + 0x36) = 0;
        }
        if (*(char *)(lVar5 + 0x35) == '\0') {
          *(undefined1 *)(lVar1 + 0x37) = 0;
        }
      }
      lVar1 = lVar1 + 0x60;
    } while (lVar1 != lVar4);
  }
  if ((longlong)*(int *)(param_1 + 0x330) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x328);
    plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x330) * 2;
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x36) = *(undefined1 *)(lVar1 + 0xc);
        *(undefined1 *)(lVar1 + 0x37) = *(undefined1 *)(lVar1 + 0x35);
        for (lVar4 = *(longlong *)(lVar1 + 0x48); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x48)) {
          if (*(char *)(lVar4 + 0xc) == '\0') {
            *(undefined1 *)(lVar1 + 0x36) = 0;
          }
          if (*(char *)(lVar4 + 0x35) == '\0') {
            *(undefined1 *)(lVar1 + 0x37) = 0;
          }
        }
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar2);
  }
  return;
}



// FUNCTION 145701140 FUN_145701140 body=70 status=ok
// SIG undefined FUN_145701140(void)

longlong FUN_145701140(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145701308(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x1c + *param_1;
  FUN_145701186(lVar2);
  return lVar2;
}



// FUNCTION 145701186 FUN_145701186 body=31 status=ok
// SIG undefined FUN_145701186(void)

void FUN_145701186(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffff0000;
  return;
}



// FUNCTION 1457011a6 FUN_1457011a6 body=352 status=ok
// SIG undefined FUN_1457011a6(void)

undefined4 *
FUN_1457011a6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408704a0(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140870400(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14087068c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145701308 FUN_145701308 body=153 status=ok
// SIG undefined FUN_145701308(void)

void FUN_145701308(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457013a2 FUN_1457013a2 body=2653 status=ok
// SIG undefined FUN_1457013a2(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457013a2(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  short sVar5;
  longlong lVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  byte extraout_var;
  int iVar20;
  uint uVar21;
  byte extraout_var_00;
  byte extraout_var_01;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  short *psVar25;
  longlong lVar26;
  longlong lVar27;
  short sVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  undefined8 *puVar33;
  undefined8 *puVar35;
  longlong lVar36;
  longlong lVar37;
  undefined8 *puVar38;
  longlong *plVar39;
  bool bVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar44 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8 [188];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  ulonglong local_90;
  undefined8 *puVar34;
  
  auVar19 = _DAT_149931e80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((longlong)(int)param_1[1] == 0) goto LAB_1457016ef;
  uVar22 = (longlong)(int)param_1[1] * 0x1c - 0x1cU >> 2;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar22;
  auVar44._8_4_ = SUB164(auVar43 * ZEXT816(0x4924924924924925),8);
  auVar44._0_8_ = SUB168(auVar43 * ZEXT816(0x4924924924924925),8);
  auVar44._12_4_ = (int)(uVar22 / 0x380000000);
  auVar42._0_8_ = uVar22 / 7;
  auVar42._8_8_ = auVar44._8_8_ >> 1;
  psVar25 = (short *)(*param_1 + 0xdc);
  uVar23 = 0;
  auVar43 = pmovsxbq(in_XMM1,0x706);
  auVar44 = pmovsxbq(in_XMM2,0x504);
  auVar45 = pmovsxbq(in_XMM3,0x302);
  auVar46 = pmovsxbq(in_XMM4,0x100);
  auVar42 = auVar42 | _DAT_149931e80;
  do {
    auVar47._8_4_ = (int)uVar23;
    auVar47._0_8_ = uVar23;
    auVar47._12_4_ = (int)(uVar23 >> 0x20);
    auVar49 = (auVar47 | auVar46) ^ auVar19;
    lVar27 = auVar42._0_8_;
    auVar50._0_8_ = -(ulonglong)(lVar27 < auVar49._0_8_);
    lVar26 = auVar42._8_8_;
    auVar50._8_8_ = -(ulonglong)(lVar26 < auVar49._8_8_);
    auVar53 = pshuflw(unaff_XMM9,auVar50,0xe8);
    auVar49._8_4_ = 0xffffffff;
    auVar49._0_8_ = 0xffffffffffffffff;
    auVar49._12_4_ = 0xffffffff;
    auVar49 = packssdw(auVar53 ^ auVar49,auVar53 ^ auVar49);
    sVar28 = (short)uVar23;
    if ((auVar49._0_4_ & 1) != 0) {
      psVar25[-0x62] = sVar28;
    }
    auVar50 = packssdw(auVar50,auVar50);
    auVar53._8_4_ = 0xffffffff;
    auVar53._0_8_ = 0xffffffffffffffff;
    auVar53._12_4_ = 0xffffffff;
    auVar50 = packssdw(auVar50 ^ auVar53,auVar50 ^ auVar53);
    if ((auVar50[2] & 1) != 0) {
      psVar25[-0x54] = sVar28 + 1;
    }
    auVar50 = (auVar47 | auVar45) ^ auVar19;
    auVar51._0_8_ = -(ulonglong)(lVar27 < auVar50._0_8_);
    auVar51._8_8_ = -(ulonglong)(lVar26 < auVar50._8_8_);
    auVar49 = packssdw(auVar49,auVar51);
    auVar8._8_4_ = 0xffffffff;
    auVar8._0_8_ = 0xffffffffffffffff;
    auVar8._12_4_ = 0xffffffff;
    auVar49 = packssdw(auVar49 ^ auVar8,auVar49 ^ auVar8);
    if ((auVar49[4] & 1) != 0) {
      psVar25[-0x46] = sVar28 + 2;
    }
    auVar50 = pshufhw(auVar51,auVar51,0x84);
    auVar9._8_4_ = 0xffffffff;
    auVar9._0_8_ = 0xffffffffffffffff;
    auVar9._12_4_ = 0xffffffff;
    auVar50 = packssdw(auVar50 ^ auVar9,auVar50 ^ auVar9);
    if ((auVar50[6] & 1) != 0) {
      psVar25[-0x38] = sVar28 + 3;
    }
    auVar50 = (auVar47 | auVar44) ^ auVar19;
    auVar52._0_8_ = -(ulonglong)(lVar27 < auVar50._0_8_);
    auVar52._8_8_ = -(ulonglong)(lVar26 < auVar50._8_8_);
    auVar49 = pshuflw(auVar49,auVar52,0xe8);
    auVar10._8_4_ = 0xffffffff;
    auVar10._0_8_ = 0xffffffffffffffff;
    auVar10._12_4_ = 0xffffffff;
    unaff_XMM9 = packssdw(auVar49 ^ auVar10,auVar49 ^ auVar10);
    if ((unaff_XMM9[8] & 1) != 0) {
      psVar25[-0x2a] = sVar28 + 4;
    }
    auVar49 = packssdw(auVar52,auVar52);
    auVar11._8_4_ = 0xffffffff;
    auVar11._0_8_ = 0xffffffffffffffff;
    auVar11._12_4_ = 0xffffffff;
    auVar49 = packssdw(auVar49 ^ auVar11,auVar49 ^ auVar11);
    if ((auVar49[10] & 1) != 0) {
      psVar25[-0x1c] = sVar28 + 5;
    }
    auVar47 = (auVar47 | auVar43) ^ auVar19;
    auVar48._0_8_ = -(ulonglong)(lVar27 < auVar47._0_8_);
    auVar48._8_8_ = -(ulonglong)(lVar26 < auVar47._8_8_);
    auVar49 = packssdw(auVar49,auVar48);
    auVar12._8_4_ = 0xffffffff;
    auVar12._0_8_ = 0xffffffffffffffff;
    auVar12._12_4_ = 0xffffffff;
    auVar49 = packssdw(auVar49 ^ auVar12,auVar49 ^ auVar12);
    if ((auVar49[0xc] & 1) != 0) {
      psVar25[-0xe] = sVar28 + 6;
    }
    auVar49 = pshufhw(auVar48,auVar48,0x84);
    auVar13._8_4_ = 0xffffffff;
    auVar13._0_8_ = 0xffffffffffffffff;
    auVar13._12_4_ = 0xffffffff;
    auVar49 = packssdw(auVar49 ^ auVar13,auVar49 ^ auVar13);
    if ((auVar49[0xe] & 1) != 0) {
      *psVar25 = sVar28 + 7;
    }
    uVar23 = uVar23 + 8;
    psVar25 = psVar25 + 0x70;
  } while ((uVar22 / 7 + 8 & 0xfffffffffffffff8) != uVar23);
  iVar29 = (int)param_1[1];
  lVar27 = *param_1;
  if (1 < (longlong)iVar29) {
    memset(local_3a8,0,0x2f0);
    local_3b0 = (longlong)iVar29 * 0x1c + lVar27 + -0x1c;
    local_3b8 = lVar27;
    fVar41 = logf((float)iVar29);
    local_3a8[0] = (int)(longlong)(fVar41 + fVar41);
    plVar39 = &local_3b8;
LAB_14570178e:
    puVar35 = (undefined8 *)*plVar39;
    iVar29 = (int)plVar39[2];
    iVar20 = (int)((ulonglong)(plVar39[1] - (longlong)puVar35) >> 2);
    puVar2 = (undefined8 *)plVar39[1];
    while( true ) {
      iVar20 = iVar20 * -0x49249249;
      uVar1 = iVar20 + 1;
      if (iVar29 == 0) break;
      if ((int)uVar1 < 9) goto joined_r0x0001457017c8;
      lVar27 = (ulonglong)(uVar1 >> 1) * 0x1c;
      uStack_b8 = *(undefined8 *)((longlong)puVar35 + lVar27);
      uVar14 = ((undefined8 *)((longlong)puVar35 + lVar27))[1];
      puVar33 = (undefined8 *)((longlong)puVar35 + lVar27 + 0xc);
      uStack_a4 = puVar33[1];
      uStack_a8 = (undefined4)((ulonglong)*puVar33 >> 0x20);
      uStack_b0 = (undefined4)uVar14;
      local_ac = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar15 = *puVar35;
      uVar16 = puVar35[1];
      uVar17 = *(undefined8 *)((longlong)puVar35 + 0x14);
      puVar33 = (undefined8 *)((longlong)puVar35 + lVar27 + 0xc);
      *puVar33 = *(undefined8 *)((longlong)puVar35 + 0xc);
      puVar33[1] = uVar17;
      *(undefined8 *)((longlong)puVar35 + lVar27) = uVar15;
      ((undefined8 *)((longlong)puVar35 + lVar27))[1] = uVar16;
      *(ulonglong *)((longlong)puVar35 + 0xc) = CONCAT44(uStack_a8,local_ac);
      *(undefined8 *)((longlong)puVar35 + 0x14) = uStack_a4;
      *puVar35 = uStack_b8;
      puVar35[1] = uVar14;
      local_3c8 = (undefined8 *)((longlong)puVar2 + 0x1c);
      puVar33 = puVar35;
LAB_1457018f0:
      do {
        while( true ) {
          puVar34 = puVar33;
          puVar33 = (undefined8 *)((longlong)puVar34 + 0x1c);
          if (puVar2 < puVar33) goto LAB_145701920;
          sVar28 = *(short *)(puVar34 + 6);
          sVar5 = *(short *)((longlong)puVar35 + 0x14);
          bVar40 = SBORROW2(sVar5,sVar28);
          sVar7 = sVar5 - sVar28;
          if (sVar5 != sVar28) break;
          sVar28 = *(short *)((longlong)puVar34 + 0x32);
          sVar5 = *(short *)((longlong)puVar35 + 0x16);
          bVar40 = SBORROW2(sVar5,sVar28);
          sVar7 = sVar5 - sVar28;
          if (sVar5 != sVar28) break;
          iVar20 = FUN_144a78538(puVar35,puVar33);
          if (iVar20 < 0) goto LAB_145701920;
        }
      } while (bVar40 == sVar7 < 0);
LAB_145701920:
      puVar24 = (undefined8 *)((longlong)local_3c8 + -0x1c);
      puVar38 = local_3c8;
      if (puVar35 < puVar24) {
        do {
          puVar38 = local_3c8;
          puVar4 = (undefined8 *)((longlong)local_3c8 + -0x1c);
          sVar28 = *(short *)((longlong)puVar35 + 0x14);
          sVar5 = *(short *)(local_3c8 + -1);
          bVar40 = SBORROW2(sVar5,sVar28);
          sVar7 = sVar5 - sVar28;
          local_3c0 = puVar24;
          if (sVar5 == sVar28) {
            sVar28 = *(short *)((longlong)puVar35 + 0x16);
            sVar5 = *(short *)((longlong)local_3c8 + -6);
            bVar40 = SBORROW2(sVar5,sVar28);
            sVar7 = sVar5 - sVar28;
            if (sVar5 != sVar28) goto LAB_145701970;
            local_3c8 = puVar4;
            iVar20 = FUN_144a78538(puVar4,puVar35);
            if (iVar20 < 0) {
              puVar24 = (undefined8 *)((longlong)puVar38 + -0x1c);
              goto LAB_14570199b;
            }
          }
          else {
LAB_145701970:
            local_3c8 = puVar4;
            if (bVar40 != sVar7 < 0) goto LAB_14570199b;
          }
          puVar24 = (undefined8 *)((longlong)local_3c0 + -0x1c);
        } while (puVar35 < puVar38 + -7);
        puVar38 = local_3c0;
        puVar24 = (undefined8 *)((longlong)local_3c8 + -0x1c);
      }
LAB_14570199b:
      local_3c8 = puVar24;
      if (puVar33 <= local_3c8) {
        uStack_b8 = *puVar33;
        uVar15 = *(undefined8 *)((longlong)puVar34 + 0x24);
        uStack_a4 = puVar34[6];
        uStack_a8 = (undefined4)((ulonglong)puVar34[5] >> 0x20);
        uStack_b0 = (undefined4)uVar15;
        local_ac = (undefined4)((ulonglong)uVar15 >> 0x20);
        uVar16 = *local_3c8;
        uVar17 = local_3c8[1];
        uVar14 = *(undefined8 *)((longlong)local_3c8 + 0x14);
        puVar34[5] = *(undefined8 *)((longlong)local_3c8 + 0xc);
        puVar34[6] = uVar14;
        *puVar33 = uVar16;
        *(undefined8 *)((longlong)puVar34 + 0x24) = uVar17;
        *(ulonglong *)((longlong)local_3c8 + 0xc) = CONCAT44(uStack_a8,local_ac);
        *(undefined8 *)((longlong)local_3c8 + 0x14) = uStack_a4;
        *local_3c8 = uStack_b8;
        local_3c8[1] = uVar15;
        goto LAB_1457018f0;
      }
      uStack_b8 = *puVar35;
      uStack_a4 = *(undefined8 *)((longlong)puVar35 + 0x14);
      uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar35 + 0xc) >> 0x20);
      uVar16 = uStack_b8;
      uStack_b0 = (undefined4)puVar35[1];
      local_ac = (undefined4)((ulonglong)puVar35[1] >> 0x20);
      uVar14 = *local_3c8;
      uVar15 = local_3c8[1];
      *(undefined1 (*) [16])((longlong)puVar35 + 0xc) =
           *(undefined1 (*) [16])((longlong)local_3c8 + 0xc);
      *puVar35 = uVar14;
      puVar35[1] = uVar15;
      *(ulonglong *)((longlong)local_3c8 + 0xc) = CONCAT44(uStack_a8,local_ac);
      *(undefined8 *)((longlong)local_3c8 + 0x14) = uStack_a4;
      uStack_b8._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
      *(undefined4 *)local_3c8 = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)local_3c8 + 4) = uStack_b8._4_4_;
      *(undefined4 *)(local_3c8 + 1) = uStack_b0;
      *(undefined4 *)((longlong)local_3c8 + 0xc) = local_ac;
      iVar29 = iVar29 + -1;
      puVar38 = puVar38 + -7;
      uStack_b8 = uVar16;
      if ((longlong)puVar38 - (longlong)puVar35 < (longlong)puVar2 - (longlong)puVar33) {
        if (puVar33 < puVar2) {
          *plVar39 = (longlong)puVar33;
          plVar39[1] = (longlong)puVar2;
          *(int *)(plVar39 + 2) = iVar29;
          plVar39 = plVar39 + 3;
        }
        if (local_3c8 <= (undefined8 *)((longlong)puVar35 + 0x1c)) goto LAB_14570187b;
      }
      else {
        if ((undefined8 *)((longlong)puVar35 + 0x1c) < local_3c8) {
          *plVar39 = (longlong)puVar35;
          plVar39[1] = (longlong)puVar38;
          *(int *)(plVar39 + 2) = iVar29;
          plVar39 = plVar39 + 3;
        }
        puVar35 = puVar33;
        puVar38 = puVar2;
        if (puVar2 <= puVar33) goto LAB_14570187b;
      }
      iVar20 = (int)((ulonglong)((longlong)puVar38 - (longlong)puVar35) >> 2);
      puVar2 = puVar38;
    }
    if (uVar1 != 0) {
      uVar21 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
      do {
        local_3c8 = (undefined8 *)(ulonglong)uVar21;
        puVar2 = local_3c8;
        while (uVar18 = uVar21 * 2 + 1, (int)uVar18 < (int)uVar1) {
          uVar30 = uVar21 * 2 + 2;
          uVar21 = uVar18;
          if ((int)uVar30 < (int)uVar1) {
            sVar28 = *(short *)((longlong)puVar35 + (longlong)(int)uVar18 * 0x1c + 0x14);
            sVar5 = *(short *)((longlong)puVar35 + (longlong)(int)uVar30 * 0x1c + 0x14);
            bVar40 = SBORROW2(sVar5,sVar28);
            sVar7 = sVar5 - sVar28;
            if (sVar5 == sVar28) {
              sVar28 = *(short *)((longlong)puVar35 + (longlong)(int)uVar18 * 0x1c + 0x16);
              sVar5 = *(short *)((longlong)puVar35 + (longlong)(int)uVar30 * 0x1c + 0x16);
              bVar40 = SBORROW2(sVar5,sVar28);
              sVar7 = sVar5 - sVar28;
              if (sVar5 != sVar28) goto LAB_145701b51;
              FUN_144a78538();
              bVar40 = (bool)(extraout_var_00 >> 7);
            }
            else {
LAB_145701b51:
              bVar40 = bVar40 != sVar7 < 0;
            }
            if (bVar40 == false) {
              uVar21 = uVar30;
            }
          }
          lVar27 = (longlong)(int)puVar2 * 0x1c;
          puVar2 = (undefined8 *)((longlong)puVar35 + lVar27);
          puVar33 = (undefined8 *)((longlong)puVar35 + (longlong)(int)uVar21 * 0x1c);
          sVar28 = *(short *)((longlong)puVar35 + (longlong)(int)uVar21 * 0x1c + 0x14);
          sVar5 = *(short *)((longlong)puVar35 + lVar27 + 0x14);
          bVar40 = SBORROW2(sVar5,sVar28);
          sVar7 = sVar5 - sVar28;
          if (sVar5 == sVar28) {
            sVar28 = *(short *)((longlong)puVar33 + 0x16);
            sVar5 = *(short *)((longlong)puVar2 + 0x16);
            bVar40 = SBORROW2(sVar5,sVar28);
            sVar7 = sVar5 - sVar28;
            if (sVar5 != sVar28) goto LAB_145701ba9;
            iVar29 = FUN_144a78538(puVar2,puVar33);
            if (-1 < iVar29) break;
          }
          else {
LAB_145701ba9:
            if (bVar40 == sVar7 < 0) break;
          }
          uStack_b8 = *puVar2;
          uStack_a4 = *(undefined8 *)((longlong)puVar2 + 0x14);
          uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0xc) >> 0x20);
          uVar16 = uStack_b8;
          uStack_b0 = (undefined4)puVar2[1];
          local_ac = (undefined4)((ulonglong)puVar2[1] >> 0x20);
          uVar14 = *puVar33;
          uVar15 = puVar33[1];
          *(undefined1 (*) [16])((longlong)puVar2 + 0xc) =
               *(undefined1 (*) [16])((longlong)puVar33 + 0xc);
          *puVar2 = uVar14;
          puVar2[1] = uVar15;
          *(ulonglong *)((longlong)puVar33 + 0xc) = CONCAT44(uStack_a8,local_ac);
          *(undefined8 *)((longlong)puVar33 + 0x14) = uStack_a4;
          uStack_b8._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
          *(undefined4 *)puVar33 = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)puVar33 + 4) = uStack_b8._4_4_;
          *(undefined4 *)(puVar33 + 1) = uStack_b0;
          *(undefined4 *)((longlong)puVar33 + 0xc) = local_ac;
          puVar2 = (undefined8 *)(ulonglong)uVar21;
          uStack_b8 = uVar16;
        }
        uVar21 = (int)local_3c8 - 1;
      } while ((int)local_3c8 != 0);
      local_3c8 = (undefined8 *)&DAT_ffffffff;
      if (1 < (int)uVar1) {
        uVar22 = (ulonglong)uVar1 - 1;
        lVar27 = ((ulonglong)uVar1 - 1) + uVar22 * 0x1b;
        uStack_b8 = *puVar35;
        uStack_a4 = *(undefined8 *)((longlong)puVar35 + 0x14);
        uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar35 + 0xc) >> 0x20);
        uVar16 = uStack_b8;
        uStack_b0 = (undefined4)puVar35[1];
        local_ac = (undefined4)((ulonglong)puVar35[1] >> 0x20);
        uVar14 = *(undefined8 *)((longlong)puVar35 + lVar27);
        uVar15 = ((undefined8 *)((longlong)puVar35 + lVar27))[1];
        *(undefined1 (*) [16])((longlong)puVar35 + 0xc) =
             *(undefined1 (*) [16])((longlong)puVar35 + lVar27 + 0xc);
        *puVar35 = uVar14;
        puVar35[1] = uVar15;
        puVar2 = (undefined8 *)((longlong)puVar35 + lVar27 + 0xc);
        *puVar2 = CONCAT44(uStack_a8,local_ac);
        puVar2[1] = uStack_a4;
        uStack_b8._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
        puVar3 = (undefined4 *)((longlong)puVar35 + lVar27);
        *puVar3 = (undefined4)uStack_b8;
        puVar3[1] = uStack_b8._4_4_;
        puVar3[2] = uStack_b0;
        puVar3[3] = local_ac;
        uStack_b8 = uVar16;
        if (uVar1 != 2) {
          do {
            iVar29 = 0;
            iVar32 = 1;
            iVar20 = 0;
            do {
              iVar29 = iVar29 + 2;
              iVar31 = iVar32;
              if ((longlong)iVar29 < (longlong)uVar22) {
                lVar27 = (longlong)iVar29 * 0x1c;
                sVar28 = *(short *)((longlong)puVar35 + (longlong)iVar32 * 0x1c + 0x14);
                sVar5 = *(short *)((longlong)puVar35 + lVar27 + 0x14);
                bVar40 = SBORROW2(sVar5,sVar28);
                sVar7 = sVar5 - sVar28;
                if (sVar5 == sVar28) {
                  sVar28 = *(short *)((longlong)puVar35 + (longlong)iVar32 * 0x1c + 0x16);
                  sVar5 = *(short *)((longlong)puVar35 + lVar27 + 0x16);
                  bVar40 = SBORROW2(sVar5,sVar28);
                  sVar7 = sVar5 - sVar28;
                  if (sVar5 != sVar28) goto LAB_145701ce1;
                  FUN_144a78538();
                  bVar40 = (bool)(extraout_var_01 >> 7);
                }
                else {
LAB_145701ce1:
                  bVar40 = bVar40 != sVar7 < 0;
                }
                if (bVar40 == false) {
                  iVar31 = iVar29;
                }
              }
              puVar2 = (undefined8 *)((longlong)puVar35 + (longlong)iVar20 * 0x1c);
              puVar33 = (undefined8 *)((longlong)puVar35 + (longlong)iVar31 * 0x1c);
              sVar28 = *(short *)((longlong)puVar35 + (longlong)iVar31 * 0x1c + 0x14);
              sVar5 = *(short *)((longlong)puVar35 + (longlong)iVar20 * 0x1c + 0x14);
              bVar40 = SBORROW2(sVar5,sVar28);
              sVar7 = sVar5 - sVar28;
              if (sVar5 == sVar28) {
                sVar28 = *(short *)((longlong)puVar33 + 0x16);
                sVar5 = *(short *)((longlong)puVar2 + 0x16);
                bVar40 = SBORROW2(sVar5,sVar28);
                sVar7 = sVar5 - sVar28;
                if (sVar5 != sVar28) goto LAB_145701d39;
                iVar29 = FUN_144a78538(puVar2,puVar33);
                if (-1 < iVar29) break;
              }
              else {
LAB_145701d39:
                if (bVar40 == sVar7 < 0) break;
              }
              uStack_b8 = *puVar2;
              uVar14 = puVar2[1];
              uStack_a4 = *(undefined8 *)((longlong)puVar2 + 0x14);
              uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0xc) >> 0x20);
              uStack_b0 = (undefined4)uVar14;
              local_ac = (undefined4)((ulonglong)uVar14 >> 0x20);
              uVar15 = *puVar33;
              uVar16 = puVar33[1];
              *(undefined1 (*) [16])((longlong)puVar2 + 0xc) =
                   *(undefined1 (*) [16])((longlong)puVar33 + 0xc);
              *puVar2 = uVar15;
              puVar2[1] = uVar16;
              *(ulonglong *)((longlong)puVar33 + 0xc) = CONCAT44(uStack_a8,local_ac);
              *(undefined8 *)((longlong)puVar33 + 0x14) = uStack_a4;
              *puVar33 = uStack_b8;
              puVar33[1] = uVar14;
              iVar29 = iVar31 * 2;
              iVar32 = iVar31 * 2 + 1;
              iVar20 = iVar31;
            } while ((longlong)iVar32 < (longlong)uVar22);
            lVar27 = (uVar22 - 1) * 0x1b + uVar22;
            uStack_b8 = *puVar35;
            uStack_a4 = *(undefined8 *)((longlong)puVar35 + 0x14);
            uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar35 + 0xc) >> 0x20);
            uVar16 = uStack_b8;
            uStack_b0 = (undefined4)puVar35[1];
            local_ac = (undefined4)((ulonglong)puVar35[1] >> 0x20);
            puVar2 = (undefined8 *)((longlong)puVar35 + lVar27 + -1);
            uVar14 = *puVar2;
            uVar15 = puVar2[1];
            *(undefined1 (*) [16])((longlong)puVar35 + 0xc) =
                 *(undefined1 (*) [16])((longlong)puVar35 + lVar27 + 0xb);
            *puVar35 = uVar14;
            puVar35[1] = uVar15;
            puVar2 = (undefined8 *)((longlong)puVar35 + lVar27 + 0xb);
            *puVar2 = CONCAT44(uStack_a8,local_ac);
            puVar2[1] = uStack_a4;
            uStack_b8._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
            puVar3 = (undefined4 *)((longlong)puVar35 + lVar27 + -1);
            *puVar3 = (undefined4)uStack_b8;
            puVar3[1] = uStack_b8._4_4_;
            puVar3[2] = uStack_b0;
            puVar3[3] = local_ac;
            bVar40 = 2 < uVar22;
            uVar22 = uVar22 - 1;
            uStack_b8 = uVar16;
          } while (bVar40);
        }
      }
    }
    goto LAB_14570187b;
  }
  goto LAB_14570161c;
joined_r0x0001457017c8:
  for (; puVar33 = puVar35, puVar34 = puVar35, puVar35 < puVar2;
      puVar2 = (undefined8 *)((longlong)puVar2 + -0x1c)) {
    while (puVar38 = puVar33, puVar33 = (undefined8 *)((longlong)puVar34 + 0x1c), puVar33 <= puVar2)
    {
      sVar28 = *(short *)(puVar34 + 6);
      sVar5 = *(short *)((longlong)puVar38 + 0x14);
      bVar40 = SBORROW2(sVar5,sVar28);
      sVar7 = sVar5 - sVar28;
      if (sVar5 == sVar28) {
        bVar40 = SBORROW2(*(short *)((longlong)puVar38 + 0x16),*(short *)((longlong)puVar34 + 0x32))
        ;
        sVar7 = *(short *)((longlong)puVar38 + 0x16) - *(short *)((longlong)puVar34 + 0x32);
        if (sVar7 != 0) goto LAB_1457017eb;
        FUN_144a78538(puVar38,puVar33);
        bVar40 = (bool)(extraout_var >> 7);
      }
      else {
LAB_1457017eb:
        bVar40 = bVar40 != sVar7 < 0;
      }
      puVar34 = puVar33;
      if (bVar40 == false) {
        puVar33 = puVar38;
      }
    }
    uStack_b8 = *puVar38;
    uStack_a4 = *(undefined8 *)((longlong)puVar38 + 0x14);
    uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar38 + 0xc) >> 0x20);
    uVar16 = uStack_b8;
    uStack_b0 = (undefined4)puVar38[1];
    local_ac = (undefined4)((ulonglong)puVar38[1] >> 0x20);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    *(undefined1 (*) [16])((longlong)puVar38 + 0xc) = *(undefined1 (*) [16])((longlong)puVar2 + 0xc)
    ;
    *puVar38 = uVar14;
    puVar38[1] = uVar15;
    *(ulonglong *)((longlong)puVar2 + 0xc) = CONCAT44(uStack_a8,local_ac);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uStack_a4;
    uStack_b8._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
    *(undefined4 *)puVar2 = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)puVar2 + 4) = uStack_b8._4_4_;
    *(undefined4 *)(puVar2 + 1) = uStack_b0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_ac;
    uStack_b8 = uVar16;
  }
LAB_14570187b:
  plVar39 = plVar39 + -3;
  if (plVar39 < &local_3b8) goto code_r0x000145701888;
  goto LAB_14570178e;
code_r0x000145701888:
  lVar27 = *param_1;
  iVar29 = (int)param_1[1];
LAB_14570161c:
  if (iVar29 != 0) {
    lVar26 = 0;
    sVar28 = 0;
    do {
      *(short *)(*param_1 + 0x1a + (longlong)*(short *)(lVar27 + 0x18 + lVar26) * 0x1c) = sVar28;
      *(short *)(lVar27 + 0x18 + lVar26) = sVar28;
      lVar36 = (longlong)*(short *)(lVar27 + 0x16 + lVar26);
      if (-1 < lVar36) {
        *(undefined2 *)(lVar27 + 0x16 + lVar26) = *(undefined2 *)(*param_1 + 0x1a + lVar36 * 0x1c);
      }
      lVar26 = lVar26 + 0x1c;
      sVar28 = sVar28 + 1;
    } while ((longlong)iVar29 * 0x1c != lVar26);
    lVar27 = param_1[1];
    if ((longlong)(int)lVar27 != 0) {
      lVar26 = *param_1;
      lVar36 = 0;
      do {
        lVar37 = (longlong)*(short *)(lVar26 + 0x16 + lVar36);
        if (-1 < lVar37) {
          lVar6 = *param_1;
          lVar37 = lVar37 * 0x1c;
          sVar28 = *(short *)(lVar6 + 0x1a + lVar37);
          *(short *)(lVar6 + 0x1a + lVar37) = sVar28 + 1;
          if (sVar28 == 0) {
            *(undefined2 *)(lVar6 + lVar37 + 0x18) = *(undefined2 *)(lVar26 + 0x18 + lVar36);
          }
        }
        *(undefined4 *)(lVar26 + 0x18 + lVar36) = 0xffff;
        lVar36 = lVar36 + 0x1c;
      } while ((longlong)(int)lVar27 * 0x1c != lVar36);
    }
  }
LAB_1457016ef:
  if ((local_90 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145701e00 FUN_145701e00 body=335 status=ok
// SIG undefined FUN_145701e00(void)

void FUN_145701e00(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145701f50 FUN_145701f50 body=421 status=ok
// SIG undefined FUN_145701f50(void)

void FUN_145701f50(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x14 + -0x10);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1457020f6 FUN_1457020f6 body=132 status=ok
// SIG undefined FUN_1457020f6(void)

void FUN_1457020f6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14570217c FUN_14570217c body=148 status=ok
// SIG undefined FUN_14570217c(void)

undefined8 * FUN_14570217c(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x130,0x10);
  FUN_140402582(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
  }
  FUN_145702210(puVar1 + 2,param_2 + 0x10);
  FUN_1449915dc(puVar1 + 4,param_2 + 0x20);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 0x30);
  FUN_140402be6(puVar1 + 7,param_2 + 0x38);
  *(undefined4 *)(puVar1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *param_1 = puVar1;
  if ((puVar1 != (undefined8 *)0x0) && (*(int *)(puVar1 + 1) == 0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145702210 FUN_145702210 body=88 status=ok
// SIG undefined FUN_145702210(void)

undefined8 * FUN_145702210(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d6bd04(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x150);
      }
    }
  }
  return param_1;
}



// FUNCTION 145702268 FUN_145702268 body=17 status=ok
// SIG undefined FUN_145702268(void)

undefined1 FUN_145702268(void)

{
  bifrost::telemetry::flush();
  return 1;
}



// FUNCTION 14570227a FUN_14570227a body=25 status=ok
// SIG undefined FUN_14570227a(void)

void FUN_14570227a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3fc3333340000000;
  return;
}



// FUNCTION 145702293 FUN_145702293 body=26 status=ok
// SIG undefined FUN_145702293(void)

undefined4 FUN_145702293(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 - 0x42U < 0x2d) {
    uVar1 = *(undefined4 *)(&DAT_14a3509a8 + (ulonglong)(param_1 - 0x42U) * 4);
  }
  return uVar1;
}



// FUNCTION 1457022ad FUN_1457022ad body=26 status=ok
// SIG undefined FUN_1457022ad(void)

undefined4 FUN_1457022ad(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 - 0x46U < 0x25) {
    uVar1 = *(undefined4 *)(&DAT_14a350a5c + (ulonglong)(param_1 - 0x46U) * 4);
  }
  return uVar1;
}



// FUNCTION 1457022c8 FUN_1457022c8 body=205 status=ok
// SIG undefined FUN_1457022c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457022c8(void)

{
  if ((DAT_14ca663e7 & 2) == 0) {
    DAT_14ca663e7 = DAT_14ca663e7 | 2;
    _DAT_14ca66388 = L"FOutputCommandInstanceListsCs";
    _DAT_14ca663a0 = FUN_146826540;
    _DAT_14ca663a8 = FUN_146825d77;
    _DAT_14ca663b0 = FUN_146825fd6;
    _DAT_14ca663b8 = FUN_1407e02ea;
    _DAT_14ca663c0 = FUN_146826273;
    _DAT_14ca66398 = FUN_14732c760;
    _DAT_14ca663d8 = 0xffffffff000000e0;
    _DAT_14ca663e0 = 8;
    DAT_14ca663e4 = 0;
    _DAT_14ca663c8 = &LAB_14732c78a;
    FUN_145702396();
    FUN_1407e00cc(&DAT_14ca66380);
    return;
  }
  return;
}



// FUNCTION 145702396 FUN_145702396 body=123 status=ok
// SIG undefined FUN_145702396(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145702396(void)

{
  _DAT_14ca68f90 = L"BASE";
  DAT_14ca68fba = 4;
  _DAT_14ca68f98 = FUN_140b35ae4();
  _DAT_14ca68fa0 = DAT_14ca66390;
  _DAT_14ca68fa8 = &LAB_14682652b;
  DAT_14ca66390 = &DAT_14ca68f90;
  DAT_14ca663e5 = DAT_14ca663e5 + '\x01';
  _DAT_14ca68fb0 = 0x100000000;
  if (*(char *)(_DAT_14ca68f98 + 100) != '\0') {
    DAT_14ca663e6 = DAT_14ca663e6 + '\x01';
  }
  return;
}



// FUNCTION 145702412 FUN_145702412 body=226 status=ok
// SIG undefined FUN_145702412(void)

longlong * FUN_145702412(longlong *param_1)

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
  pcVar13 = FUN_146312a98;
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



// FUNCTION 1457024f6 FUN_1457024f6 body=132 status=ok
// SIG undefined FUN_1457024f6(void)

undefined1 * FUN_1457024f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisibleInstances";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FVSMVisibleInstanceCmd >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb25;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1473315bc;
}



// FUNCTION 14570257a FUN_14570257a body=136 status=ok
// SIG undefined FUN_14570257a(void)

code * FUN_14570257a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdsBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000b26;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457024f6;
}



// FUNCTION 145702602 FUN_145702602 body=138 status=ok
// SIG undefined FUN_145702602(void)

code * FUN_145702602(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageInfoBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000b27;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570257a;
}



// FUNCTION 14570268c FUN_14570268c body=9 status=ok
// SIG undefined FUN_14570268c(void)

void FUN_14570268c(longlong param_1)

{
  FUN_145702696(param_1 + 0x10);
  return;
}



// FUNCTION 145702696 FUN_145702696 body=81 status=ok
// SIG undefined FUN_145702696(void)

void FUN_145702696(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba3f160;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1449db362(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457026f4 FUN_1457026f4 body=31 status=ok
// SIG undefined FUN_1457026f4(void)

undefined8 FUN_1457026f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145702714 FUN_145702714 body=106 status=ok
// SIG undefined FUN_145702714(void)

undefined8 * FUN_145702714(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_145702780();
  *(undefined2 *)((longlong)param_1 + 0x41) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145702780 FUN_145702780 body=218 status=ok
// SIG undefined FUN_145702780(void)

void FUN_145702780(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_145702798;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar5 = param_1[6];
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
    if (lVar5 != 0) {
      FUN_147d77cf2(lVar5 + 8);
    }
  }
LAB_145702798:
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3f800000;
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[7];
  param_1[6] = uVar4;
  param_1[7] = lVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145702856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14570285a FUN_14570285a body=57 status=ok
// SIG undefined FUN_14570285a(void)

void FUN_14570285a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68e48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68e48 = FUN_140002ddd(FUN_14651e5cc,uVar1,L"GoreDef");
  }
  return;
}



// FUNCTION 145702894 FUN_145702894 body=52 status=ok
// SIG undefined FUN_145702894(void)

void FUN_145702894(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x41a5) = *(byte *)(param_1 + 0x41a5) & 0xfb | param_2 * '\x04';
  *(byte *)(param_1 + 0x41a4) = *(byte *)(param_1 + 0x41a4) & 0xbf | (param_2 ^ 1) << 6;
  return;
}



// FUNCTION 1457028c8 FUN_1457028c8 body=333 status=ok
// SIG undefined FUN_1457028c8(void)

undefined8
FUN_1457028c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0;
  local_68 = *param_4;
  *param_4 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_144a450dc(&local_58,&local_68);
  FUN_1449db362(&local_68);
  FUN_140d01986();
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_70 = iVar1;
  if (iVar1 == 0) {
    local_6c = 0;
  }
  else {
    FUN_140a1e386(&local_78,iVar1,0);
    FUN_140a1e307(local_78,uVar2,iVar1);
  }
  local_88 = param_7;
  local_90 = param_6;
  local_98 = param_5;
  local_80 = &local_68;
  FUN_140421d62(param_1,param_2,&local_78,&local_58);
  FUN_140861e20(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145702a16 FUN_145702a16 body=57 status=ok
// SIG undefined FUN_145702a16(void)

void FUN_145702a16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab618 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab618 = FUN_140002ddd(FUN_1465dd6f1,uVar1,L"OakHitReactionDef");
  }
  return;
}



// FUNCTION 145702a50 FUN_145702a50 body=128 status=ok
// SIG undefined FUN_145702a50(void)

void FUN_145702a50(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined8 *local_480;
  undefined1 *local_478;
  undefined1 local_46c [4];
  undefined1 local_468 [1096];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_488 = param_2;
  FUN_14101c2b2(local_468);
  local_480 = &local_488;
  local_478 = local_468;
  FUN_1402c7ab2(param_1 + 0x10,local_46c,&local_480,0);
  FUN_1403c51be(local_468);
  if ((local_20 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145702ad2 FUN_145702ad2 body=140 status=ok
// SIG undefined FUN_145702ad2(void)

longlong FUN_145702ad2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x460;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x460) == param_2)
        break;
        iVar3 = *(int *)(lVar2 + 0x450);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_145702b44;
    }
  }
  lVar2 = 0;
LAB_145702b44:
  return lVar2 + 0x10;
}



// FUNCTION 145702b5e FUN_145702b5e body=175 status=ok
// SIG undefined FUN_145702b5e(void)

void FUN_145702b5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = FUN_14479d2ce(param_1 + 0x98);
  if ((local_28 != 0) && (plVar3 = *(longlong **)(param_1 + 0x80), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145702bd6;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (lVar4 != 0) {
      FUN_145702c1c(local_38,&local_28);
      FUN_145702d0e(lVar4,local_38);
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
LAB_145702bd6:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145702c0e FUN_145702c0e body=14 status=ok
// SIG undefined FUN_145702c0e(void)

void FUN_145702c0e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 8) = 5;
  return;
}



// FUNCTION 145702c1c FUN_145702c1c body=74 status=ok
// SIG undefined FUN_145702c1c(void)

undefined8 * FUN_145702c1c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_144a78ab8();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 145702c66 FUN_145702c66 body=66 status=ok
// SIG undefined FUN_145702c66(void)

void FUN_145702c66(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_145702dbe(param_1 + 0x10,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145702caa FUN_145702caa body=99 status=ok
// SIG undefined FUN_145702caa(void)

void FUN_145702caa(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_144966fca(param_1[4]);
  if (cVar1 != '\0') {
    cVar1 = FUN_144a61b4f();
    if (cVar1 != '\0') {
      uVar2 = FUN_144966fba(param_1);
      thunk_FUN_14036294a(uVar2);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  FUN_140893c38(lVar3 + 0xae8);
  return;
}



// FUNCTION 145702d0e FUN_145702d0e body=138 status=ok
// SIG undefined FUN_145702d0e(void)

void FUN_145702d0e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_2 + 8) != 0) {
    cVar1 = FUN_144729dda(param_2);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x30))();
      uVar3 = FUN_14479d2ce(lVar2 + 0x60);
      lVar2 = FUN_140363c42(uVar3);
      if (lVar2 != 0) {
        FUN_145702d9a(lVar2);
      }
    }
  }
  local_20 = param_2;
  FUN_140363b52(param_1 + 0xe8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145702d9a FUN_145702d9a body=36 status=ok
// SIG undefined FUN_145702d9a(void)

void FUN_145702d9a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145702dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145702dbe FUN_145702dbe body=139 status=ok
// SIG undefined FUN_145702dbe(void)

void FUN_145702dbe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x460) == lVar2) {
          FUN_145702e4a();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x460 + *param_1 + 0x450);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145702e4a FUN_145702e4a body=141 status=ok
// SIG undefined FUN_145702e4a(void)

void FUN_145702e4a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x460;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x454 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x460 + 0x450);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x450);
  FUN_1403c51be(*param_1 + lVar2 + 0x10);
  FUN_145702ed8(param_1,param_2,1);
  return;
}



// FUNCTION 145702ed8 FUN_145702ed8 body=147 status=ok
// SIG undefined FUN_145702ed8(void)

void FUN_145702ed8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x460 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x460) = param_2;
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
      puVar7 = puVar7 + 0x118;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145702f6c FUN_145702f6c body=228 status=ok
// SIG undefined FUN_145702f6c(void)

longlong FUN_145702f6c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1bf38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147e34079;
    local_40 = &LAB_145b08e3d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavObstacleComponent",&DAT_14cb1bf38,FUN_14641eb76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bf38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145703052 FUN_145703052 body=34 status=ok
// SIG undefined FUN_145703052(void)

void FUN_145703052(undefined8 param_1)

{
  FUN_145705e2a();
  FUN_145705f7c(param_1);
  FUN_140374ef4(param_1);
  return;
}



// FUNCTION 145703074 FUN_145703074 body=98 status=ok
// SIG undefined FUN_145703074(void)

void FUN_145703074(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1457030d6 FUN_1457030d6 body=146 status=ok
// SIG undefined FUN_1457030d6(void)

void FUN_1457030d6(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145703a26(param_1 + 0x50,&local_38);
  FUN_14570316a(param_1 + 0x50);
  FUN_1457031aa(param_1 + 0xa8);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  if (0 < (int)uStack_30) {
    FUN_140367464(param_1,&local_38);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570316a FUN_14570316a body=63 status=ok
// SIG undefined FUN_14570316a(void)

void FUN_14570316a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145703558(param_1);
    FUN_1457031ea(param_1);
    return;
  }
  FUN_1457031ea(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14037bc38(param_1);
  return;
}



// FUNCTION 1457031aa FUN_1457031aa body=63 status=ok
// SIG undefined FUN_1457031aa(void)

void FUN_1457031aa(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_140367aee(param_1);
    FUN_145703242(param_1);
    return;
  }
  FUN_145703242(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140b312ac(param_1);
  return;
}



// FUNCTION 1457031ea FUN_1457031ea body=88 status=ok
// SIG undefined FUN_1457031ea(void)

void FUN_1457031ea(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a103a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145703242 FUN_145703242 body=90 status=ok
// SIG undefined FUN_145703242(void)

void FUN_145703242(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14570329c FUN_14570329c body=34 status=ok
// SIG undefined FUN_14570329c(void)

undefined8 FUN_14570329c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == *param_2) && ((short)param_1[1] == (short)param_2[1])) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),param_1[2] == param_2[2]);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1457032be FUN_1457032be body=228 status=ok
// SIG undefined FUN_1457032be(void)

longlong FUN_1457032be(void)

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
  if (DAT_14cb5bc68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b5a5c;
    local_38 = &LAB_148680d01;
    local_40 = FUN_145aca6a8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacterPushComponent",&DAT_14cb5bc68,FUN_1464d2690);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5bc68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457033a4 FUN_1457033a4 body=103 status=ok
// SIG undefined FUN_1457033a4(void)

ulonglong FUN_1457033a4(longlong param_1)

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
LAB_1457033ee:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1457033ee;
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



// FUNCTION 14570340c FUN_14570340c body=83 status=ok
// SIG undefined FUN_14570340c(void)

void FUN_14570340c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined2 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined2 *)(param_2 + 1);
  local_10 = param_2[2];
  FUN_140365a56(param_1,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145703460 FUN_145703460 body=114 status=ok
// SIG undefined FUN_145703460(void)

void FUN_145703460(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457034d2 FUN_1457034d2 body=132 status=ok
// SIG undefined FUN_1457034d2(void)

void FUN_1457034d2(longlong param_1,int param_2)

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



// FUNCTION 145703558 FUN_145703558 body=333 status=ok
// SIG undefined FUN_145703558(void)

void FUN_145703558(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2ac + (longlong)iVar4 * 0x2b0) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457036a6 FUN_1457036a6 body=102 status=ok
// SIG undefined FUN_1457036a6(void)

void FUN_1457036a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145702f6c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570370e FUN_14570370e body=132 status=ok
// SIG undefined FUN_14570370e(void)

void FUN_14570370e(longlong param_1,int param_2)

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



// FUNCTION 145703794 FUN_145703794 body=485 status=ok
// SIG undefined FUN_145703794(void)

void FUN_145703794(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14570397a FUN_14570397a body=170 status=ok
// SIG undefined FUN_14570397a(void)

void FUN_14570397a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14492b4b4(param_2);
  if (lVar1 != 0) {
    local_58 = *(undefined8 *)(lVar1 + 0x20);
    local_50 = *(undefined2 *)(lVar1 + 0x28);
    local_48 = *(undefined8 *)(lVar1 + 0x30);
    FUN_140365a56(param_1);
    local_40 = FUN_14570340c;
    local_38 = 0;
    FUN_145703d84(local_30,param_1);
    FUN_140367cc6(lVar1,&local_40,local_30);
    FUN_1449db362(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145703a26 FUN_145703a26 body=710 status=ok
// SIG undefined FUN_145703a26(void)

void FUN_145703a26(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_140373bdc(param_2,0);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140374d2c(&local_88,uVar4);
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar3)) {
      local_40 = iVar3;
      FUN_14037622e();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar3) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      FUN_140373bdc(param_2);
    }
    local_a0 = param_1 + 2;
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    iStack_94 = 0;
    local_90 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_a8);
    }
    local_b8 = local_98;
    iStack_b4 = iStack_94;
    local_b0 = local_90;
    local_ac = local_8c;
    local_c8 = local_a8;
    local_c0 = local_a0;
    local_d0 = param_1;
    if (iStack_94 < (int)local_a0[3]) {
      do {
        local_a8 = *(undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x2b0);
        iVar3 = FUN_1403682a2(&local_88,(uint)((ulonglong)local_a8 >> 0x20) ^ (uint)local_a8,
                              &local_a8);
        if (iVar3 == -1) {
          lVar2 = (longlong)iStack_b4;
          lVar1 = *local_d0;
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140155462(param_2,iVar3);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar2 * 0x2b0 + lVar1);
          FUN_140367fe4(&local_88,&local_a8,(longlong)iStack_b4 * 0x2b0 + *local_d0,0);
        }
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 < (int)local_c0[3]);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140367f32(&local_88);
    if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 145703cee FUN_145703cee body=150 status=ok
// SIG undefined FUN_145703cee(void)

void FUN_145703cee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145703d84 FUN_145703d84 body=428 status=ok
// SIG undefined FUN_145703d84(void)

longlong * FUN_145703d84(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145703e64:
    *puVar5 = &PTR_LAB_14ac8da20;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ac8d7a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145703e64;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ac8da20;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ac8d7a0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145703f30 FUN_145703f30 body=62 status=ok
// SIG undefined FUN_145703f30(void)

void FUN_145703f30(longlong param_1)

{
  if (*(char *)(param_1 + 0x350) == '\x01') {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_147f61d1c(param_1 + 0x78,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 145703f6e FUN_145703f6e body=400 status=ok
// SIG undefined FUN_145703f6e(void)

void FUN_145703f6e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1457043b2(param_1,uVar4);
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147e6c7c8(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x28;
      uStack_50 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x28 + 8);
      FUN_145704100(param_1,local_34);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145704100 FUN_145704100 body=345 status=ok
// SIG undefined FUN_145704100(void)

undefined4 * FUN_145704100(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457042cc(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_140368996(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x24) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147e6c7c8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14570425a FUN_14570425a body=114 status=ok
// SIG undefined FUN_14570425a(void)

void FUN_14570425a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1457042cc FUN_1457042cc body=230 status=ok
// SIG undefined FUN_1457042cc(void)

int * FUN_1457042cc(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457043b2 FUN_1457043b2 body=420 status=ok
// SIG undefined FUN_1457043b2(void)

void FUN_1457043b2(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28 + -0x24);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 145704556 FUN_145704556 body=254 status=ok
// SIG undefined FUN_145704556(void)

undefined8
FUN_145704556(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95c1e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c67310(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145704655 FUN_145704655 body=395 status=ok
// SIG undefined FUN_145704655(void)

void FUN_145704655(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_1 != 0) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar6) == 0) goto LAB_1457047b3;
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar6);
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b406f80;
    local_60 = FUN_143da25c0;
    local_88[0] = &LAB_140255cce;
    local_98 = 0;
    uStack_90 = 0;
    FUN_140255853(0,0,local_88,&local_98);
    lVar6 = local_98;
    lVar7 = (longlong)(int)uStack_90;
    uVar4 = 0;
    if (lVar7 != 0) {
      lVar5 = 0;
      do {
        plVar8 = *(longlong **)(lVar6 + lVar5);
        if (plVar8 == (longlong *)0x0) {
LAB_145704745:
          plVar8 = (longlong *)0x0;
        }
        else {
          lVar1 = (**(code **)(*plVar8 + 8))(plVar8);
          lVar2 = FUN_140c3fbf2();
          if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_145704745;
        }
        local_a8 = param_5;
        local_a0 = 1;
        (**(code **)(*plVar8 + 0x50))(plVar8,param_2,param_3,param_4);
        lVar5 = lVar5 + 0x10;
      } while (lVar7 * 0x10 != lVar5);
      uVar4 = (int)uStack_90;
    }
    FUN_140255aed(local_98,uVar4);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != (undefined1 *)0x0) {
      pppuVar3 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar3 = &local_68;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
LAB_1457047b3:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457047e2 FUN_1457047e2 body=75 status=ok
// SIG undefined FUN_1457047e2(void)

void FUN_1457047e2(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14570482e FUN_14570482e body=116 status=ok
// SIG undefined FUN_14570482e(void)

void FUN_14570482e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_148a1be5c(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1457048a4 FUN_1457048a4 body=109 status=ok
// SIG undefined FUN_1457048a4(void)

void FUN_1457048a4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 145704912 FUN_145704912 body=9 status=ok
// SIG undefined FUN_145704912(void)

void FUN_145704912(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x50);
  return;
}



// FUNCTION 14570491c FUN_14570491c body=56 status=ok
// SIG undefined FUN_14570491c(void)

void FUN_14570491c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140831778();
  if (*(longlong *)(lVar1 + 0x1a8) != 0) {
    FUN_140559328(param_2 + 0x38,lVar1 + 0x1a8);
    return;
  }
  return;
}



// FUNCTION 145704954 FUN_145704954 body=228 status=ok
// SIG undefined FUN_145704954(void)

undefined8 FUN_145704954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b95fe50;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b95fac0;
  local_38[3] = param_3;
  local_38[4] = FUN_14117e552;
  FUN_140cfdcd0(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145704a3a FUN_145704a3a body=62 status=ok
// SIG undefined FUN_145704a3a(void)

void FUN_145704a3a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145704a78(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 145704a78 FUN_145704a78 body=111 status=ok
// SIG undefined FUN_145704a78(void)

ulonglong FUN_145704a78(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xc) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 145704ae8 FUN_145704ae8 body=87 status=ok
// SIG undefined FUN_145704ae8(void)

void FUN_145704ae8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_145704b40(param_2,iVar1);
  }
  FUN_145704bd2((longlong)iVar1 * 0xd0 + *param_2,param_1,param_1 + 0x18,param_1 + 0x28,param_3);
  return;
}



// FUNCTION 145704b40 FUN_145704b40 body=146 status=ok
// SIG undefined FUN_145704b40(void)

void FUN_145704b40(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145704bd2 FUN_145704bd2 body=186 status=ok
// SIG undefined FUN_145704bd2(void)

undefined8 *
FUN_145704bd2(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = FUN_140372666(param_2,param_5);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  if (param_3 != 0) {
    FUN_1403726b4(param_1 + 0x16,param_3);
  }
  if (param_4 != 0) {
    FUN_140372704(param_1 + 0x18,param_4);
  }
  return param_1;
}



// FUNCTION 145704c8c FUN_145704c8c body=629 status=ok
// SIG undefined FUN_145704c8c(void)

void FUN_145704c8c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong lStack_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_145704e01;
  uVar7 = FUN_1447210f0();
  FUN_14061285c(&local_78,uVar7);
  if (local_70 == (longlong *)0x0) goto LAB_145704e01;
  iVar5 = (int)local_70[1];
  do {
    if (iVar5 == 0) {
      plVar9 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)local_70[1];
    bVar11 = iVar5 == iVar3;
    if (bVar11) {
      *(int *)(local_70 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar9 = local_70;
  } while (!bVar11);
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if (plVar9 == (longlong *)0x0) goto LAB_145704e01;
  if (local_78 != 0) {
    local_60 = *param_2;
    uVar7 = FUN_14477b664(param_2[1]);
    local_58 = FUN_14477b664(uVar7);
    local_50 = param_2[2];
    uVar6 = FUN_14037becc(local_78,&local_60);
    lVar8 = *(longlong *)(param_1 + 0x7f40);
    if (lVar8 == 0) {
      uVar7 = FUN_1411201bc();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x7f40) = lVar8;
    }
    plVar10 = (longlong *)(param_1 + 0x7f48);
    local_78 = *(longlong *)(param_1 + 0x7f38);
    if (*(longlong *)(param_1 + 0x7f48) == 0) {
      if ((local_78 != 0) && (lVar8 != 0)) {
        plVar2 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          *plVar10 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar7,param_1 + 0x7f38);
          *plVar10 = lVar8;
          if (lVar8 != 0) {
            local_78 = *(longlong *)(param_1 + 0x7f38);
            lVar8 = *(longlong *)(param_1 + 0x7f40);
            goto LAB_145704ea1;
          }
        }
      }
      lVar8 = param_2[1];
      if (lVar8 == 0) {
        lVar8 = FUN_140da11b8();
      }
      local_78 = *param_2;
      plVar10 = param_2 + 2;
      local_70 = (longlong *)FUN_14477b664(lVar8);
    }
    else {
LAB_145704ea1:
      local_70 = (longlong *)0x0;
      lStack_68 = 0;
      uVar7 = FUN_14477b664(lVar8);
      local_70 = (longlong *)FUN_14477b664(uVar7);
    }
    lStack_68 = *plVar10;
    FUN_140373168(param_1 + 0x7f68);
    *(undefined4 *)(param_1 + 0x7f80) = uVar6;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x47);
    FUN_140da0d80(param_1);
  }
  LOCK();
  plVar10 = plVar9 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_145704e01:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


