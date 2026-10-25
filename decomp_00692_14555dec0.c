// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14555dec0 FUN_14555dec0 body=74 status=ok
// SIG undefined FUN_14555dec0(void)

ulonglong FUN_14555dec0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x30);
  piVar1 = piVar2 + *(uint *)(param_1 + 0x38);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (param_2 == *piVar2) goto LAB_14555df07;
  }
  piVar2 = *(int **)(param_1 + 0x20);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x28) * 3;
  while( true ) {
    if (piVar2 == piVar1) {
      return (ulonglong)piVar2 & 0xffffffffffffff00;
    }
    if (param_2 == *piVar2) break;
    piVar2 = piVar2 + 3;
  }
LAB_14555df07:
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
}



// FUNCTION 14555df10 FUN_14555df10 body=218 status=ok
// SIG undefined FUN_14555df10(void)

undefined8 FUN_14555df10(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) * 0xc;
  if ((void *)*param_1 == (void *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(0,_Var6);
    if (puVar5 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar4 = puVar5, (undefined8 *)*param_1 != puVar5)) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined1 *)(puVar4 + 1) = 0;
          }
          lVar2 = *param_1;
          *puVar4 = *(undefined8 *)((longlong)puVar4 + (lVar2 - (longlong)puVar5));
          *(undefined4 *)(puVar4 + 1) =
               *(undefined4 *)((longlong)puVar4 + lVar2 + (8 - (longlong)puVar5));
          puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14555dfcd;
    }
  }
  else {
    puVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (puVar5 != (undefined8 *)0x0) {
LAB_14555dfcd:
      *param_1 = (longlong)puVar5;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14555dff0 FUN_14555dff0 body=161 status=ok
// SIG undefined FUN_14555dff0(void)

/* WARNING: Removing unreachable block (ram,0x00014555e069) */

longlong FUN_14555dff0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar3 * 0xc);
      if (uVar1 == param_2) {
        return *param_1 + (longlong)iVar3 * 0xc;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 14555e0a0 FUN_14555e0a0 body=319 status=ok
// SIG undefined FUN_14555e0a0(void)

undefined8 * FUN_14555e0a0(longlong *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)FUN_14555e250();
  if (*param_3 != '\0') {
    return puVar2;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if (puVar2 == (undefined8 *)0x0) {
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_14555df10(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar2 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
      goto LAB_14555e1b8;
    }
  }
  else {
    lVar3 = ((longlong)puVar2 - *param_1) / 6 + ((longlong)puVar2 - *param_1 >> 0x3f);
    uVar5 = (lVar3 >> 1) - (lVar3 >> 0x3f);
    if (((uVar4 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar1 = FUN_14555df10(param_1), cVar1 != '\0')) &&
       (uVar4 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar4 = (uint)uVar5;
      lVar3 = (uVar5 & 0xffffffff) * 0xc;
      puVar2 = (undefined8 *)(*param_1 + lVar3);
      if (uVar4 < *(uint *)(param_1 + 1)) {
        memmove((void *)((longlong)puVar2 + 0xc),puVar2,
                (ulonglong)((*(uint *)(param_1 + 1) - uVar4) * 0xc));
      }
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined1 *)(puVar2 + 1) = 0;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      puVar2 = (undefined8 *)(*param_1 + lVar3);
LAB_14555e1b8:
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)puVar2 = param_2;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14555e1e0 FUN_14555e1e0 body=109 status=ok
// SIG undefined FUN_14555e1e0(void)

undefined8 FUN_14555e1e0(longlong *param_1)

{
  void *pvVar1;
  void *_Dst;
  
  _Dst = (void *)FUN_14555dff0();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 0xc);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0xc),
              (ulonglong)(uint)((int)(((longlong)pvVar1 - (longlong)_Dst) / 0xc) * 0xc));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 14555e250 FUN_14555e250 body=141 status=ok
// SIG undefined FUN_14555e250(void)

longlong FUN_14555e250(longlong *param_1,uint param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      lVar1 = (longlong)iVar3 * 0xc;
      uVar2 = *(uint *)(lVar1 + *param_1);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return *param_1 + lVar1;
      }
      uVar4 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar2) {
        uVar4 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar4 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *param_1 + (longlong)iVar6 * 0xc;
}



// FUNCTION 14555e2e0 FUN_14555e2e0 body=337 status=ok
// SIG undefined FUN_14555e2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14555e2e0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149daa218;
  if (*(int *)(param_1 + 0xc) != 0) {
    lVar4 = FUN_14555dff0();
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14555e1e0(param_1 + 4,*(undefined4 *)(param_1 + 0xc));
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[4]);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[6]);
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  if ((void *)param_1[0x1b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    AK::MemoryMgr::Free(9,(void *)param_1[0x1b]);
    param_1[0x1b] = 0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    *(undefined4 *)(param_1 + 9) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[8]);
    param_1[8] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  *param_1 = &PTR_FUN_149daa208;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar2 = (undefined8 *)param_1[3];
  puVar3 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c79c300) {
    puVar2[2] = (undefined8 *)param_1[2];
    puVar3 = DAT_14c79c300;
  }
  DAT_14c79c300 = puVar3;
  if (param_1 == DAT_14c79c2f8) {
    DAT_14c79c2f8 = puVar2;
  }
  _DAT_14c79c2f0 = _DAT_14c79c2f0 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14555e440 FUN_14555e440 body=24 status=ok
// SIG undefined FUN_14555e440(void)

undefined8 * FUN_14555e440(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149daa228;
  return param_1;
}



// FUNCTION 14555e460 FUN_14555e460 body=21 status=ok
// SIG undefined FUN_14555e460(void)

void FUN_14555e460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149daa228;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14555e480 FUN_14555e480 body=90 status=ok
// SIG undefined FUN_14555e480(void)

void FUN_14555e480(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    if (*(int *)(param_2 + 0x10) < *(int *)(lVar1 + 0x10)) {
      *(longlong *)(param_2 + 8) = lVar1;
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 8) = param_2;
        return;
      }
      *(longlong *)(param_1 + 0x10) = param_2;
      return;
    }
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 8);
  }
  *(undefined8 *)(param_2 + 8) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = param_2;
    *(longlong *)(param_1 + 8) = param_2;
    return;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14555e4e0 FUN_14555e4e0 body=73 status=ok
// SIG undefined FUN_14555e4e0(void)

undefined8 FUN_14555e4e0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) <= param_2 + param_3)) {
    *param_4 = lVar1;
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 8);
      if (lVar2 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        lVar2 = 0;
      }
      *(longlong *)(param_1 + 0x10) = lVar2;
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    return 0x2d;
  }
  *param_4 = 0;
  return 0x11;
}



// FUNCTION 14555e530 FUN_14555e530 body=115 status=ok
// SIG undefined FUN_14555e530(void)

void FUN_14555e530(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (lVar1 == 0) {
LAB_14555e576:
        (**(code **)*puVar3)(puVar3,0);
        AK::MemoryMgr::Free(0,puVar3);
      }
      else {
        lVar2 = *(longlong *)(lVar1 + 8);
        if (*(longlong *)(lVar1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = 0;
          lVar2 = 0;
        }
        *(longlong *)(param_1 + 0x10) = lVar2;
        *(undefined8 *)(lVar1 + 8) = 0;
        if (puVar3 != (undefined8 *)0x0) goto LAB_14555e576;
      }
      puVar3 = *(undefined8 **)(param_1 + 0x10);
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 14555e5b0 FUN_14555e5b0 body=51 status=ok
// SIG undefined FUN_14555e5b0(void)

undefined8 * FUN_14555e5b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149daa228;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14555e5f0 FUN_14555e5f0 body=170 status=ok
// SIG undefined FUN_14555e5f0(void)

void FUN_14555e5f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar3 = (longlong *)0x0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((iVar4 == 1) && (plVar2[3] == param_2)) {
      plVar1 = (longlong *)plVar2[1];
      if (plVar2 == *(longlong **)(param_1 + 0x10)) {
        *(longlong **)(param_1 + 0x10) = plVar1;
      }
      else {
        plVar3[1] = (longlong)plVar1;
      }
      if (plVar2 == *(longlong **)(param_1 + 8)) {
        *(longlong **)(param_1 + 8) = plVar3;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,0);
        AK::MemoryMgr::Free(0,plVar2);
      }
    }
    else {
      plVar1 = (longlong *)plVar2[1];
      plVar3 = plVar2;
    }
  }
  return;
}



// FUNCTION 14555e6a0 FUN_14555e6a0 body=170 status=ok
// SIG undefined FUN_14555e6a0(void)

void FUN_14555e6a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar3 = (longlong *)0x0;
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    if ((iVar4 == 1) && (plVar2[3] == param_2)) {
      plVar1 = (longlong *)plVar2[1];
      if (plVar2 == *(longlong **)(param_1 + 0x10)) {
        *(longlong **)(param_1 + 0x10) = plVar1;
      }
      else {
        plVar3[1] = (longlong)plVar1;
      }
      if (plVar2 == *(longlong **)(param_1 + 8)) {
        *(longlong **)(param_1 + 8) = plVar3;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,0);
        AK::MemoryMgr::Free(0,plVar2);
      }
    }
    else {
      plVar1 = (longlong *)plVar2[1];
      plVar3 = plVar2;
    }
  }
  return;
}



// FUNCTION 14555e750 FUN_14555e750 body=72 status=ok
// SIG undefined FUN_14555e750(void)

undefined8 * FUN_14555e750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149daa230;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xfffffffc | 4;
  return param_1;
}



// FUNCTION 14555e7a0 FUN_14555e7a0 body=11 status=ok
// SIG undefined FUN_14555e7a0(void)

void FUN_14555e7a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149daa230;
  return;
}



// FUNCTION 14555e7b0 FUN_14555e7b0 body=334 status=ok
// SIG undefined FUN_14555e7b0(void)

undefined8 FUN_14555e7b0(longlong param_1,undefined1 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = *(uint *)(param_1 + 0x6c) & 0xfffffffc;
  *(uint *)(param_1 + 0x6c) = uVar2;
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    *(undefined1 **)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x6c) = uVar2 | 1;
    *(uint *)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = (uint)CONCAT11(*param_2,param_2[1]);
    *(uint *)(param_1 + 0x1c) = uVar2;
    if (uVar2 != 0) {
      fVar3 = *(float *)(param_2 + 2);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 **)(param_1 + 0x28) = param_2 + 6;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(float *)(param_1 + 0x50) = fVar3;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 2;
      fVar3 = (float)uVar2 * fVar3;
      *(undefined1 **)(param_1 + 0x30) = param_2 + param_3;
      *(float *)(param_1 + 0x54) = 60000.0 / fVar3;
      *(float *)(param_1 + 0x58) = fVar3 * 1.6666667e-05;
    }
    if ((*(uint *)(param_1 + 0x6c) & 2) != 0) {
      bVar1 = FUN_14555ef00(param_1 + 0x20,1);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 100) = 0;
      *(uint *)(param_1 + 0x6c) = (uint)bVar1 * 2 | *(uint *)(param_1 + 0x6c) & 0xfffffffd;
      if (((uint)bVar1 * 2 & 2) != 0) {
        return 1;
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 2;
  }
  return 2;
}



// FUNCTION 14555e900 FUN_14555e900 body=68 status=ok
// SIG undefined FUN_14555e900(void)

void FUN_14555e900(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = param_2 - *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + lVar1;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + lVar1;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + lVar1;
    }
    *(longlong *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 14555e950 FUN_14555e950 body=258 status=ok
// SIG undefined FUN_14555e950(void)

undefined8 FUN_14555e950(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar6 [16];
  
  auVar7._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    uVar1 = FUN_14555ef00(param_1 + 0x20,1);
    fVar8 = (float)param_2 * *(float *)(param_1 + 0x58);
    uVar3 = *(uint *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(uint *)(param_1 + 0x60) = uVar3;
    auVar7._0_4_ = fVar8;
    iVar4 = (int)fVar8;
    fVar5 = fVar8;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar8)) {
      auVar7._8_4_ = auVar7._4_4_;
      auVar7._12_4_ = auVar7._4_4_;
      auVar6._8_8_ = auVar7._8_8_;
      auVar6._4_4_ = fVar8;
      auVar6._0_4_ = fVar8;
      uVar2 = movmskps(uVar1,auVar6);
      fVar5 = (float)(int)(iVar4 - (uVar2 & 1));
    }
    *(int *)(param_1 + 100) = (int)(longlong)fVar5;
    *(float *)(param_1 + 0x68) = fVar8 - fVar5;
    while ((*(longlong *)(param_1 + 0x38) != 0 || ((*(byte *)(param_1 + 0x6c) & 4) != 0))) {
      if (*(uint *)(param_1 + 100) <= uVar3) {
        return 1;
      }
      if (((*(uint *)(param_1 + 0x6c) & 2) != 0) &&
         ((*(longlong *)(param_1 + 0x38) != 0 || ((*(uint *)(param_1 + 0x6c) & 4) != 0)))) {
        FUN_14555f010(param_1 + 0x20);
        if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
          FUN_14555ef00(param_1 + 0x20,1);
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        uVar3 = *(uint *)(param_1 + 0x60);
      }
    }
  }
  return 2;
}



// FUNCTION 14555ea60 FUN_14555ea60 body=44 status=ok
// SIG undefined FUN_14555ea60(void)

void FUN_14555ea60(longlong param_1)

{
  FUN_14555ef00(param_1 + 0x20,1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 14555ea90 FUN_14555ea90 body=447 status=ok
// SIG undefined FUN_14555ea90(void)

void FUN_14555ea90(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_EAX;
  uint uVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auVar12 [16];
  byte local_38;
  undefined2 uStack_36;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined1 auVar11 [16];
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  iVar4 = *(int *)(param_1 + 100);
  fVar8 = (float)param_2 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
  auVar12._4_4_ = uVar9;
  auVar12._0_4_ = fVar8;
  iVar7 = (int)fVar8;
  fVar10 = fVar8;
  if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar8)) {
    auVar12._8_4_ = uVar9;
    auVar12._12_4_ = uVar9;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar8;
    uVar5 = movmskps(in_EAX,auVar11);
    fVar10 = (float)(int)(iVar7 - (uVar5 & 1));
  }
  *(float *)(param_1 + 0x68) = fVar8 - fVar10;
  *(int *)(param_1 + 100) = (int)(longlong)fVar10 + iVar4;
  while( true ) {
    if (((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) == 0)) ||
       (*(uint *)(param_1 + 100) <= *(uint *)(param_1 + 0x60))) {
      return;
    }
    if (((*(byte *)(param_1 + 0x6c) & 2) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x44);
      local_38 = bVar1 & 0xf0;
      if (((char)bVar1 < '\0') && (local_38 != 0xf0)) {
        cVar2 = *(char *)(param_1 + 0x46);
        uVar3 = *(undefined1 *)(param_1 + 0x45);
        if ((local_38 == 0x90) && (cVar2 == '\0')) {
          local_38 = 0x80;
        }
        puVar6 = AK::MemoryMgr::Malloc(0,0x20);
        if (puVar6 != (ulonglong *)0x0) {
          *puVar6 = CONCAT26(uStack_32,
                             CONCAT15(cVar2,CONCAT14(uVar3,CONCAT22(uStack_36,
                                                                    CONCAT11(bVar1,local_38))))) &
                    0xffffffffffff0fff;
          *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
          *(undefined4 *)(puVar6 + 1) = local_30;
          puVar6[3] = 0;
          *(float *)((longlong)puVar6 + 0xc) =
               (float)(uint)(*(int *)(param_1 + 0x60) - iVar4) * *(float *)(param_1 + 0x54);
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_1 + 0x5c);
          if (param_3[1] == 0) {
            param_3[1] = (longlong)puVar6;
          }
          else {
            *(ulonglong **)(*param_3 + 0x18) = puVar6;
          }
          *param_3 = (longlong)puVar6;
        }
      }
    }
    if ((*(uint *)(param_1 + 0x6c) & 2) == 0) break;
    if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(uint *)(param_1 + 0x6c) & 4) == 0)) {
      return;
    }
    FUN_14555f010(param_1 + 0x20);
    if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
      FUN_14555ef00(param_1 + 0x20,1);
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 14555ec50 FUN_14555ec50 body=242 status=ok
// SIG undefined FUN_14555ec50(void)

longlong FUN_14555ec50(longlong param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint7 uVar5;
  longlong lVar4;
  byte bVar6;
  
  while( true ) {
    if (((((*(byte *)(param_1 + 0x6c) & 2) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
        (bVar6 = *(byte *)(param_1 + 0x44) & 0xf0, -1 < (char)*(byte *)(param_1 + 0x44))) ||
       (bVar6 == 0xf0)) {
      bVar3 = false;
    }
    else {
      *param_2 = bVar6;
      param_2[1] = *(byte *)(param_1 + 0x44) & 0xf;
      param_2[4] = *(byte *)(param_1 + 0x45);
      bVar1 = *(byte *)(param_1 + 0x46);
      param_2[5] = bVar1;
      if ((bVar6 == 0x90) && (bVar1 == 0)) {
        *param_2 = 0x80;
      }
      bVar3 = true;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = *(uint *)(param_1 + 0x6c);
    uVar5 = (uint7)(uint3)(uVar2 >> 8);
    if ((uVar2 & 2) == 0) {
      lVar4 = (ulonglong)uVar5 << 8;
    }
    else if ((*(longlong *)(param_1 + 0x38) == 0) && ((uVar2 & 4) == 0)) {
      lVar4 = (ulonglong)uVar5 << 8;
    }
    else {
      FUN_14555f010(param_1 + 0x20);
      if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
        FUN_14555ef00(param_1 + 0x20,1);
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
      lVar4 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x40) >> 8),1);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    if (bVar3) break;
    if ((char)lVar4 == '\0') {
      return lVar4;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 14555ed50 FUN_14555ed50 body=60 status=ok
// SIG undefined FUN_14555ed50(void)

void FUN_14555ed50(longlong param_1,float param_2)

{
  float fVar1;
  
  if (param_2 != 0.0) {
    *(float *)(param_1 + 0x50) = param_2;
  }
  fVar1 = (float)*(uint *)(param_1 + 0x1c) * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = 60000.0 / fVar1;
  *(float *)(param_1 + 0x58) = fVar1 * 1.6666667e-05;
  return;
}



// FUNCTION 14555ed90 FUN_14555ed90 body=22 status=ok
// SIG undefined FUN_14555ed90(void)

void FUN_14555ed90(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x6c) = (uint)param_2 << 2 | *(uint *)(param_1 + 0x6c) & 0xfffffffb;
  return;
}



// FUNCTION 14555edb0 FUN_14555edb0 body=24 status=ok
// SIG undefined FUN_14555edb0(void)

void FUN_14555edb0(longlong param_1,undefined4 *param_2)

{
  param_2[2] = *(undefined4 *)(param_1 + 100);
  param_2[3] = *(undefined4 *)(param_1 + 0x68);
  *param_2 = *(undefined4 *)(param_1 + 0x5c);
  param_2[1] = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 14555edd0 FUN_14555edd0 body=172 status=ok
// SIG undefined FUN_14555edd0(void)

void FUN_14555edd0(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_14555ef00(param_1 + 0x20,1);
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 100) = 0;
  if (*param_2 != 0) {
    do {
      if (((*(uint *)(param_1 + 0x6c) & 2) != 0) &&
         ((*(longlong *)(param_1 + 0x38) != 0 || ((*(uint *)(param_1 + 0x6c) & 4) != 0)))) {
        FUN_14555f010(param_1 + 0x20);
        if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
          FUN_14555ef00(param_1 + 0x20,1);
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  *(uint *)(param_1 + 0x60) = param_2[1];
  *(uint *)(param_1 + 100) = param_2[2];
  *(uint *)(param_1 + 0x68) = param_2[3];
  return;
}



// FUNCTION 14555ee80 FUN_14555ee80 body=43 status=ok
// SIG undefined FUN_14555ee80(void)

undefined8 * FUN_14555ee80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149daa230;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14555eeb0 FUN_14555eeb0 body=75 status=ok
// SIG undefined FUN_14555eeb0(void)

void FUN_14555eeb0(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  do {
    *param_2 = uVar4 << 7;
    bVar1 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    uVar3 = (uint)bVar1;
    uVar4 = uVar3 & 0x7f | *param_2;
    *param_2 = uVar4;
    if (uVar3 < 0x80) {
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (uVar2 == 4) {
    *param_2 = 0xffffffff;
  }
  return;
}



// FUNCTION 14555ef00 FUN_14555ef00 body=259 status=ok
// SIG undefined FUN_14555ef00(void)

undefined8 FUN_14555ef00(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *_Src;
  char *_Dst;
  
  uVar5 = 0;
  if (param_2 != 0) {
    pcVar4 = (char *)(param_1 + 0x24);
    do {
      _Src = *(byte **)(pcVar4 + -0x1c);
      pcVar4[6] = '\0';
      *(byte **)(pcVar4 + -0xc) = _Src;
      pcVar4[-4] = -1;
      pcVar4[-3] = -1;
      pcVar4[-2] = -1;
      pcVar4[-1] = -1;
      if (_Src != (byte *)0x0) {
        uVar6 = 0;
        uVar3 = 0;
        do {
          *(uint *)(pcVar4 + -4) = uVar3 << 7;
          bVar1 = *_Src;
          _Src = _Src + 1;
          *(byte **)(pcVar4 + -0xc) = _Src;
          uVar3 = bVar1 & 0x7f | uVar3 << 7;
          *(uint *)(pcVar4 + -4) = uVar3;
          if (bVar1 < 0x80) break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 4);
        if (uVar6 == 4) {
          pcVar4[-4] = -1;
          pcVar4[-3] = -1;
          pcVar4[-2] = -1;
          pcVar4[-1] = -1;
          return 0;
        }
        if (uVar3 == 0xffffffff) {
          return 0;
        }
        if (*(byte **)(pcVar4 + -0x14) <= _Src) {
          return 0;
        }
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        if (_Src != (byte *)0x0) {
          lVar2 = 6;
          _Dst = pcVar4;
          if ((-1 < (char)*_Src) && (pcVar4[6] != '\0')) {
            *pcVar4 = pcVar4[6];
            _Dst = pcVar4 + 1;
            lVar2 = 5;
          }
          bVar1 = (byte)lVar2;
          if (*(byte **)(pcVar4 + -0x14) < _Src + lVar2) {
            bVar1 = (char)*(byte **)(pcVar4 + -0x14) - (char)_Src;
          }
          memcpy(_Dst,_Src,(ulonglong)bVar1);
        }
      }
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar4 + 0x30;
    } while (uVar5 < param_2);
  }
  return 1;
}



// FUNCTION 14555f010 FUN_14555f010 body=546 status=ok
// SIG undefined FUN_14555f010(void)

undefined8 FUN_14555f010(longlong param_1)

{
  char *_Src;
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *_Dst;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  
  pbVar3 = *(byte **)(param_1 + 0x18);
  if (pbVar3 == (byte *)0x0) {
    return 1;
  }
  _Dst = (byte *)(param_1 + 0x24);
  bVar1 = *_Dst;
  bVar9 = bVar1 & 0xf0;
  lVar10 = param_1;
  if (((char)bVar1 < '\0') && (bVar9 != 0xf0)) {
    if (bVar9 == 0) goto LAB_14555f06f;
    if (bVar9 == 0xb0) {
      if (0x7f < *(byte *)(param_1 + 0x25)) goto LAB_14555f06f;
LAB_14555f0ae:
      uVar2 = 3;
    }
    else {
      if ((bVar9 + 0x40 & 0xef) != 0) goto LAB_14555f0ae;
      uVar2 = 2;
    }
LAB_14555f156:
    if ((~(*pbVar3 >> 7) & 1) != 0) {
      uVar2 = (ulonglong)((int)uVar2 - 1);
    }
  }
  else {
    if ((0xf < (byte)(bVar1 + 0x10)) || ((0x8081U >> (bVar1 + 0x10 & 0x1f) & 1) == 0))
    goto LAB_14555f06f;
    uVar5 = 0;
    uVar8 = 0;
    pbVar6 = (byte *)(param_1 + 0x26);
    if (bVar1 != 0xff) {
      pbVar6 = (byte *)(param_1 + 0x25);
    }
    do {
      pbVar7 = pbVar6 + 1;
      uVar5 = *pbVar6 & 0x7f | uVar5 << 7;
      if (*pbVar6 < 0x80) break;
      uVar8 = uVar8 + 1;
      pbVar6 = pbVar7;
    } while (uVar8 < 4);
    if ((((uVar8 == 4) || (uVar5 == 0xffffffff)) || (pbVar7 + uVar5 < pbVar7)) ||
       (uVar5 = ((int)pbVar7 - (int)param_1) + -0x24 + uVar5, uVar2 = (ulonglong)uVar5,
       uVar5 == 0xffffffff)) goto LAB_14555f06f;
    if (((char)bVar1 < '\0') && (bVar9 != 0xf0)) goto LAB_14555f156;
  }
  pbVar3 = pbVar3 + uVar2;
  *(byte **)(param_1 + 0x18) = pbVar3;
  if ((pbVar3 <= *(byte **)(param_1 + 0x10)) && (pbVar3 != (byte *)0x0)) {
    if ((-1 < (char)bVar1) || (bVar9 == 0xf0)) {
      bVar1 = 0;
    }
    *(byte *)(param_1 + 0x2a) = bVar1;
    if (pbVar3 == *(byte **)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      _Dst[0] = 0;
      _Dst[1] = 0;
      _Dst[2] = 0;
      _Dst[3] = 0;
      *(undefined2 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      return 1;
    }
    FUN_14555eeb0(param_1 + 0x18,param_1 + 0x20);
    if ((*(int *)(lVar10 + 0x20) != -1) &&
       (*(ulonglong *)(lVar10 + 0x18) < *(ulonglong *)(lVar10 + 0x10))) {
      _Dst[0] = 0;
      _Dst[1] = 0;
      _Dst[2] = 0;
      _Dst[3] = 0;
      *(undefined2 *)(param_1 + 0x28) = 0;
      _Src = *(char **)(lVar10 + 0x18);
      if (_Src != (char *)0x0) {
        lVar4 = 6;
        if ((-1 < *_Src) && (*(byte *)(lVar10 + 0x2a) != 0)) {
          *_Dst = *(byte *)(lVar10 + 0x2a);
          lVar4 = 5;
          _Dst = (byte *)(param_1 + 0x25);
        }
        bVar1 = (byte)lVar4;
        if (*(char **)(lVar10 + 0x10) < _Src + lVar4) {
          bVar1 = (char)*(char **)(lVar10 + 0x10) - (char)_Src;
        }
        memcpy(_Dst,_Src,(ulonglong)bVar1);
      }
      return 1;
    }
  }
LAB_14555f06f:
  *(undefined8 *)(lVar10 + 0x18) = 0;
  _Dst[0] = 0;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
  *(undefined1 *)(lVar10 + 0x2a) = 0;
  return 0;
}



// FUNCTION 14555f240 FUN_14555f240 body=135 status=ok
// SIG undefined FUN_14555f240(void)

undefined8 * FUN_14555f240(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = 0xff;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 5) = 0xff;
    puVar1[10] = param_2;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &PTR_LAB_149daa240;
    puVar1[9] = param_1;
    LOCK();
    *(int *)(puVar1[10] + 0x24) = *(int *)(puVar1[10] + 0x24) + 1;
    UNLOCK();
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14555f2d0 FUN_14555f2d0 body=37 status=ok
// SIG undefined FUN_14555f2d0(void)

void FUN_14555f2d0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 14555f300 FUN_14555f300 body=36 status=ok
// SIG undefined FUN_14555f300(void)

ulonglong FUN_14555f300(longlong param_1,short param_2)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 0x58);
  psVar1 = psVar2 + *(uint *)(param_1 + 0x60);
  while( true ) {
    if (psVar2 == psVar1) {
      return (ulonglong)psVar2 & 0xffffffffffffff00;
    }
    if (param_2 == *psVar2) break;
    psVar2 = psVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)psVar2 >> 8),1);
}



// FUNCTION 14555f330 FUN_14555f330 body=378 status=ok
// SIG undefined FUN_14555f330(void)

void FUN_14555f330(longlong param_1)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  short sVar9;
  
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x138);
  if (lVar3 != 0) {
    piVar7 = *(int **)(lVar3 + 0x10);
    sVar9 = 0;
    if (piVar7 != piVar7 + *(uint *)(lVar3 + 0x18)) {
      do {
        if (*(int *)(param_1 + 0x68) != *piVar7) goto LAB_14555f466;
        uVar2 = *(uint *)(param_1 + 0x60);
        uVar8 = *(uint *)(param_1 + 100);
        if (uVar2 < uVar8) {
LAB_14555f44c:
          uVar2 = *(uint *)(param_1 + 0x60);
          *(uint *)(param_1 + 0x60) = uVar2 + 1;
          psVar1 = (short *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar2 * 2);
          if (psVar1 != (short *)0x0) {
            *psVar1 = sVar9;
          }
        }
        else {
          iVar4 = (uVar8 >> 1) + uVar8;
          if (uVar8 == 0) {
            iVar4 = 1;
          }
          uVar8 = iVar4 + uVar8;
          if (*(void **)(param_1 + 0x58) == (void *)0x0) {
            pvVar5 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar8 * 2);
            if (pvVar5 != (void *)0x0) {
              if ((*(void **)(param_1 + 0x58) != (void *)0x0) &&
                 (*(void **)(param_1 + 0x58) != pvVar5)) {
                uVar6 = 0;
                if (uVar2 != 0) {
                  do {
                    *(undefined2 *)((longlong)pvVar5 + uVar6 * 2) =
                         *(undefined2 *)(*(longlong *)(param_1 + 0x58) + uVar6 * 2);
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < uVar2);
                }
                AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x58));
              }
              goto LAB_14555f43f;
            }
          }
          else {
            pvVar5 = AK::MemoryMgr::Realloc(0,*(void **)(param_1 + 0x58),(ulonglong)uVar8 * 2);
            if (pvVar5 != (void *)0x0) {
LAB_14555f43f:
              *(void **)(param_1 + 0x58) = pvVar5;
              *(uint *)(param_1 + 100) = uVar8;
              if (uVar2 < uVar8) goto LAB_14555f44c;
            }
          }
        }
LAB_14555f466:
        piVar7 = piVar7 + 1;
        sVar9 = sVar9 + 1;
      } while (piVar7 != (int *)(*(longlong *)(lVar3 + 0x10) +
                                (ulonglong)*(uint *)(lVar3 + 0x18) * 4));
    }
  }
  return;
}



// FUNCTION 14555f4b0 FUN_14555f4b0 body=209 status=ok
// SIG undefined FUN_14555f4b0(void)

void FUN_14555f4b0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined7 uStack_1f;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x138);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1453a74a0();
      uVar3 = FUN_1453a7490(*(undefined8 *)(param_1 + 0x48));
      if (*(int *)(param_1 + 0x40) == 0) {
        local_18 = CONCAT31(local_18._1_3_,0xff);
        *(undefined8 *)(param_1 + 8) = uVar3;
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_2c,uVar2);
        *(ulonglong *)(param_1 + 0x18) = (ulonglong)uStack_24 << 0x20;
        *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_1f,0xff);
        *(undefined4 *)(param_1 + 0x28) = local_18;
        *(undefined4 *)(param_1 + 0x2c) = uStack_14;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      uVar2 = FUN_14507fe40(g_pGameSyncMgr,(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar1 + 4));
    }
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    FUN_145353180(param_1,*(undefined8 *)(lVar1 + 4));
    if (*(int *)(param_1 + 0x68) == 0) {
      uVar2 = FUN_1453ad800(*(undefined8 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x68) = uVar2;
    }
    FUN_14555f330(param_1);
  }
  return;
}



// FUNCTION 14555f590 FUN_14555f590 body=47 status=ok
// SIG undefined FUN_14555f590(void)

void FUN_14555f590(longlong param_1)

{
  undefined4 *in_stack_00000028;
  
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = *in_stack_00000028;
  FUN_14555f330();
  FUN_1453a6fd0(*(undefined8 *)(param_1 + 0x48),param_1);
  return;
}



// FUNCTION 14555f5c0 FUN_14555f5c0 body=142 status=ok
// SIG undefined FUN_14555f5c0(void)

undefined8 * FUN_14555f5c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149daa240;
  FUN_145353380();
  if ((void *)param_1[0xb] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  lVar3 = param_1[10];
  LOCK();
  piVar1 = (int *)(lVar3 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
  }
  param_1[10] = 0;
  FUN_1453533f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14555f650 FUN_14555f650 body=86 status=ok
// SIG undefined FUN_14555f650(void)

undefined8 * FUN_14555f650(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  FUN_1453a4670(param_1,param_3);
  param_1[0x13] = param_2;
  *param_1 = &PTR_LAB_149daa258;
  param_1[3] = &PTR_LAB_149daa380;
  param_1[5] = &PTR_FUN_149daa390;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14555f6b0 FUN_14555f6b0 body=119 status=ok
// SIG undefined FUN_14555f6b0(void)

void FUN_14555f6b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  int local_18 [4];
  
  iVar1 = FUN_1450ef0e0();
  if (iVar1 == 1) {
    iVar1 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x98));
    FUN_14555fac0(param_1,param_2,param_3,-iVar1,local_18,param_4);
    *(longlong *)(param_1 + 0x70) = (longlong)local_18[0];
  }
  return;
}



// FUNCTION 14555f730 FUN_14555f730 body=232 status=ok
// SIG undefined FUN_14555f730(void)

void FUN_14555f730(longlong param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = (longlong)((longlong)*param_2 * (ulonglong)DAT_14c72f42c) / 1000;
  iVar1 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x98));
  if ((int)uVar3 < -iVar1) {
    iVar1 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x98));
    uVar3 = (ulonglong)(uint)-iVar1;
  }
  if (param_3 != '\0') {
    uVar2 = FUN_1453a9e70(*(undefined8 *)(param_1 + 0x98),uVar3 & 0xffffffff);
    uVar3 = (ulonglong)uVar2;
    dVar5 = ((double)(int)uVar2 * 1000.0) / (double)DAT_14c72f42c;
    if (dVar5 <= 0.0) {
      dVar4 = -0.5;
    }
    else {
      dVar4 = 0.5;
    }
    *param_2 = (int)(dVar4 + dVar5);
  }
  FUN_14555f9c0(param_1,uVar3 & 0xffffffff);
  return;
}



// FUNCTION 14555f820 FUN_14555f820 body=159 status=ok
// SIG undefined FUN_14555f820(void)

void FUN_14555f820(longlong param_1,float *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_1453a9e50(*(undefined8 *)(param_1 + 0x98));
  iVar2 = (int)((float)uVar1 * *param_2);
  if (param_3 != '\0') {
    iVar2 = FUN_1453a9e70(*(undefined8 *)(param_1 + 0x98),iVar2);
    uVar1 = FUN_1453a9e50(*(undefined8 *)(param_1 + 0x98));
    *param_2 = (float)iVar2 / (float)uVar1;
  }
  FUN_14555f9c0(param_1,iVar2);
  return;
}



// FUNCTION 14555f8c0 FUN_14555f8c0 body=219 status=ok
// SIG undefined FUN_14555f8c0(void)

undefined4 FUN_14555f8c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 local_138 [264];
  longlong local_30 [5];
  
  FUN_1453a5380(local_138,param_1,1);
  if (local_30[0] == 0) {
    uVar4 = 2;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = FUN_1450ef3d0();
      lVar5 = lVar5 + lVar1;
    }
    uVar3 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
    if (*(longlong *)(local_30[0] + 0x20) != 0) {
      lVar2 = FUN_1453a5aa0(local_138);
      uVar3 = FUN_1453a4630(local_30,(lVar1 - lVar5) - lVar2);
    }
    uVar4 = FUN_1450efe30(local_30[0],uVar3,param_2,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x54));
  }
  FUN_1453a5440(local_138);
  return uVar4;
}



// FUNCTION 14555f9c0 FUN_14555f9c0 body=241 status=ok
// SIG undefined FUN_14555f9c0(void)

int FUN_14555f9c0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if (1 < (*(byte *)(param_1 + 0x62) & 0xf)) {
    return 2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  lVar3 = *(longlong *)(param_1 + 0x38);
  while (lVar3 != 0) {
    lVar2 = *(longlong *)(lVar3 + 8);
    FUN_1450ed8c0(lVar3);
    lVar3 = lVar2;
  }
  FUN_1453a5210(param_1);
  lVar3 = *(longlong *)(param_1 + 0x68);
  iVar1 = FUN_14555fac0(param_1,*(undefined8 *)(lVar3 + 0x30),lVar3 + 0x18,param_2,local_res8,
                        *(undefined1 *)(lVar3 + 0x38));
  if (iVar1 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = FUN_1450ef3d0();
      lVar3 = lVar3 + lVar2;
    }
    *(longlong *)(param_1 + 0x70) =
         (*(longlong *)(*(longlong *)(param_1 + 0x68) + 8) - lVar3) + (longlong)local_res8[0];
  }
  else {
    local_res1c = 4;
    local_res18 = 0;
    FUN_1450ed780(param_1,&local_res18,0);
  }
  FUN_1450ed1a0(param_1);
  return iVar1;
}



// FUNCTION 14555fac0 FUN_14555fac0 body=350 status=ok
// SIG undefined FUN_14555fac0(void)

int FUN_14555fac0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 *param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res20 [8];
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  *param_5 = 0;
  iVar1 = FUN_1453a9e50(param_1[0x13]);
  iVar2 = FUN_1453a9e30(param_1[0x13]);
  if ((param_4 < iVar1 + iVar2) &&
     (lVar4 = FUN_1453a99a0(param_1[0x13],param_1,param_2,param_3,param_6), lVar4 != 0)) {
    lVar5 = FUN_1453a5160(param_1,0,lVar4);
    FUN_1450ed1a0(lVar4);
    if (lVar5 != 0) {
      param_1[0xe] = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_38 = param_4;
      iVar1 = (**(code **)(*param_1 + 0x98))(param_1,0,0,&local_38,param_5,local_res20,0,0);
      if (iVar1 != 0) {
        iVar1 = FUN_1453a9e50(param_1[0x13]);
        iVar2 = FUN_1453a9e30(param_1[0x13]);
        FUN_1450f0250(lVar5,0,4,iVar2 + iVar1);
        uVar3 = FUN_1453a9e50(param_1[0x13]);
        lVar4 = FUN_1453a5160(param_1,uVar3,0);
        return 2 - (uint)(lVar4 != 0);
      }
    }
  }
  return 2;
}



// FUNCTION 14555fc20 FUN_14555fc20 body=125 status=ok
// SIG undefined FUN_14555fc20(void)

undefined8 * FUN_14555fc20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149daa258;
  param_1[3] = &PTR_LAB_149daa380;
  param_1[5] = &PTR_FUN_149daa390;
  lVar3 = param_1[0x13];
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  FUN_1453a46c0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14555fcb0 FUN_14555fcb0 body=60 status=ok
// SIG undefined FUN_14555fcb0(void)

void FUN_14555fcb0(longlong *param_1,uint param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 2);
  if (param_2 + 1 < *(uint *)(param_1 + 1)) {
    memmove(_Dst,(void *)((longlong)_Dst + 2),
            (ulonglong)((*(uint *)(param_1 + 1) - param_2) * 2 - 2));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 14555fcf0 FUN_14555fcf0 body=125 status=ok
// SIG undefined FUN_14555fcf0(void)

uint FUN_14555fcf0(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x14);
  if (uVar1 != 0) {
    sVar2 = *(short *)(param_1 + 0x16);
    if ((sVar2 != 0) || (*(short *)(param_1 + 0x18) != 0)) {
      sVar3 = sVar2 + uVar1;
      if ((int)(short)uVar1 + (int)sVar2 < 1) {
        sVar3 = 1;
      }
      sVar4 = uVar1 + *(short *)(param_1 + 0x18);
      if (sVar3 != sVar4) {
        DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
        return CONCAT22(sVar2 >> 0xf,sVar3) +
               (int)(uint)((ulonglong)DAT_14c791078 >> 0x21) % (((int)sVar4 - (int)sVar3) + 1);
      }
    }
  }
  return (uint)uVar1;
}



// FUNCTION 14555fd70 FUN_14555fd70 body=155 status=ok
// SIG undefined FUN_14555fd70(void)

void FUN_14555fd70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  *param_1 = &PTR_FUN_149d465a0;
  puVar1 = puVar2;
  if (puVar2 != puVar2 + *(uint *)(param_1 + 5)) {
    do {
      puVar2 = (undefined8 *)*puVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(2,puVar2);
      }
      puVar2 = (undefined8 *)param_1[4];
      puVar1 = puVar1 + 1;
    } while (puVar1 != puVar2 + *(uint *)(param_1 + 5));
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(0,puVar2);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  *param_1 = &PTR_FUN_149d46590;
  return;
}



// FUNCTION 14555fe10 FUN_14555fe10 body=49 status=ok
// SIG undefined FUN_14555fe10(void)

void FUN_14555fe10(longlong param_1)

{
  if (*(char *)(param_1 + 0x36) == '\0') {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_14555fe10();
    }
    *(undefined1 *)(param_1 + 0x36) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}



// FUNCTION 14555fe50 FUN_14555fe50 body=467 status=ok
// SIG undefined FUN_14555fe50(void)

undefined8 FUN_14555fe50(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  char local_res10 [8];
  ushort local_18 [2];
  int local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  cVar2 = (**(code **)*param_2)(param_2,&local_14,4,local_18);
  if ((cVar2 != '\0') &&
     (cVar2 = (**(code **)*param_2)(param_2,local_res10,1,local_18), cVar2 != '\0')) {
    lVar7 = *param_3;
    if (*(int *)(lVar7 + 0x10) == local_14) {
LAB_14555feec:
      *param_1 = lVar7;
      if ((local_res10[0] == '\x03') || (local_res10[0] == '\x01')) {
        piVar6 = *(int **)(param_4 + 0x38);
        piVar1 = piVar6 + (ulonglong)*(uint *)(param_4 + 0x40) * 6;
        for (; (piVar6 != piVar1 && (*piVar6 != local_14)); piVar6 = piVar6 + 6) {
        }
        plVar5 = (longlong *)(piVar6 + 2);
        if (piVar6 == piVar1) {
          plVar5 = (longlong *)0x0;
        }
        if (plVar5 == (longlong *)0x0) {
          param_1[2] = 0;
          return 2;
        }
        lVar7 = *plVar5;
        param_1[2] = lVar7;
        if (lVar7 == 0) {
          return 2;
        }
      }
      else {
        cVar2 = (**(code **)*param_2)(param_2,local_18,2,local_10);
        if (cVar2 == '\0') {
          return 2;
        }
        plVar5 = (longlong *)FUN_145560bd0(local_res10[0],local_18[0],0);
        if (plVar5 == (longlong *)0x0) {
          return 2;
        }
        iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,param_2,local_18[0]);
        if (iVar3 != 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
          return 2;
        }
        param_1[2] = (longlong)plVar5;
      }
      local_18[0] = local_18[0] & 0xff00;
      cVar2 = (**(code **)*param_2)(param_2,param_1 + 1,2,local_10);
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)*param_2)(param_2,local_18,1,local_c), cVar2 != '\0')) {
        *(byte *)((longlong)param_1 + 10) =
             *(byte *)((longlong)param_1 + 10) & 0xfc | (byte)local_18[0] & 3;
        return 1;
      }
    }
    else {
      plVar4 = *(longlong **)(lVar7 + 0x20);
      plVar5 = plVar4 + *(uint *)(lVar7 + 0x28);
      for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
        lVar7 = *plVar4;
        if (*(int *)(lVar7 + 0x10) == local_14) {
          *param_3 = lVar7;
          goto LAB_14555feec;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 145560030 FUN_145560030 body=55 status=ok
// SIG undefined FUN_145560030(void)

undefined8 * FUN_145560030(undefined8 *param_1)

{
  param_1[2] = 0xffffffffffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145560070 FUN_145560070 body=3 status=ok
// SIG undefined FUN_145560070(void)

void FUN_145560070(void)

{
  return;
}



// FUNCTION 145560080 FUN_145560080 body=367 status=ok
// SIG undefined FUN_145560080(void)

undefined8
FUN_145560080(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong *plVar8;
  char local_res18 [16];
  
  if ((param_5 != 0) && (*(int *)(param_5 + 0x10) != 0)) {
    FUN_145561a70(param_1,param_5 + 8);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  plVar8 = (longlong *)(param_2 + 0x138);
  while( true ) {
    if (plVar8 == (longlong *)0x0) {
      return 2;
    }
    cVar4 = (**(code **)(*plVar8 + 8))(plVar8);
    if (cVar4 != '\0') break;
    if (((int)plVar8[5] == 0) || (*(char *)((longlong)plVar8 + 0x36) == '\0')) {
      plVar8 = (longlong *)plVar8[1];
      if (plVar8 == (longlong *)0x0) {
        return 2;
      }
    }
    else {
      iVar7 = FUN_1455610e0(param_1,plVar8);
      if (iVar7 != 1) {
        FUN_145560200(param_1);
        return 2;
      }
    }
    local_res18[0] = '\0';
    while (uVar5 = FUN_1455612b0(param_1,param_1[3] +
                                         ((ulonglong)*(uint *)(param_1 + 4) * 3 + -3) * 8,
                                 local_res18), local_res18[0] != '\0') {
      lVar2 = plVar8[1];
      lVar1 = param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x18;
      plVar3 = *(longlong **)(param_1[3] + -8 + (ulonglong)*(uint *)(param_1 + 4) * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         ((*(int *)(*(longlong *)(lVar1 + -0x18) + 0x30) - 1U & 0xfffffffd) != 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      *(undefined8 *)(lVar1 + -8) = 0;
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      if (lVar2 == 0) {
        return 2;
      }
    }
    plVar8 = *(longlong **)(plVar8[4] + (ulonglong)uVar5 * 8);
    local_res18[0] = '\0';
  }
  lVar1 = plVar8[4];
  *(int *)(param_1 + 5) = (int)lVar1;
  *(bool *)(param_1 + 6) = (int)lVar1 != 0;
  *(int *)((longlong)param_1 + 0x2c) = (int)plVar8[2];
  uVar6 = FUN_14555fcf0(plVar8);
  *(undefined2 *)((longlong)param_1 + 0x32) = uVar6;
  return 1;
}



// FUNCTION 145560200 FUN_145560200 body=286 status=ok
// SIG undefined FUN_145560200(void)

void FUN_145560200(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  FUN_145560d10();
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_145560ca0();
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar5 = puVar2 + (ulonglong)*(uint *)(param_1 + 0x50) * 2;
    for (; puVar2 != puVar5; puVar2 = puVar2 + 2) {
      piVar1 = (int *)*puVar2;
      if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
        AK::MemoryMgr::Free(*(int *)((longlong)puVar2 + 0xc),(void *)*puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x38);
  pvVar3 = pvVar4;
  if (pvVar4 != (void *)((longlong)pvVar4 + (ulonglong)*(uint *)(param_1 + 0x40) * 0x18)) {
    do {
      (**(code **)(**(longlong **)((longlong)pvVar3 + 8) + 8))();
      pvVar3 = (void *)((longlong)pvVar3 + 0x18);
      pvVar4 = *(void **)(param_1 + 0x38);
    } while (pvVar3 != (void *)((longlong)pvVar4 + (ulonglong)*(uint *)(param_1 + 0x40) * 0x18));
  }
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    AK::MemoryMgr::Free(0,pvVar4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}



// FUNCTION 145560320 FUN_145560320 body=865 status=ok
// SIG undefined FUN_145560320(void)

int FUN_145560320(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  short sVar13;
  undefined8 *puVar14;
  int iVar15;
  char local_res8 [8];
  char local_res18 [8];
  longlong *local_38;
  undefined8 local_30;
  
  FUN_145560d10();
  FUN_145560ca0();
  if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
    FUN_145561a70(param_1,param_3 + 8);
  }
  lVar2 = *param_1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_res8[0] = '\0';
  plVar10 = AK::MemoryMgr::Malloc(0,8);
  iVar15 = 2;
  iVar8 = iVar15;
  if (plVar10 != (longlong *)0x0) {
    if ((local_38 != (longlong *)0x0) && (local_38 != plVar10)) {
      AK::MemoryMgr::Free(0,local_38);
    }
    uVar11 = local_30 & 0xffffffff;
    local_30 = CONCAT44(1,(int)local_30 + 1);
    local_38 = plVar10;
    if (plVar10 + uVar11 != (longlong *)0x0) {
      plVar10[uVar11] = lVar2 + 0x138;
      if (*(int *)(lVar2 + 0x148) == param_2) {
        local_res8[0] = '\x01';
        iVar8 = 1;
      }
      else {
        cVar5 = (**(code **)(*(longlong *)(lVar2 + 0x138) + 8))();
        if (cVar5 == '\0') {
          puVar14 = *(undefined8 **)(lVar2 + 0x158);
          if (local_res8[0] == '\0') {
            do {
              if (puVar14 ==
                  (undefined8 *)
                  (*(longlong *)(lVar2 + 0x158) + (ulonglong)*(uint *)(lVar2 + 0x160) * 8))
              goto LAB_14556043c;
              iVar8 = FUN_145560f30(param_1,*puVar14,param_2,&local_38,local_res8);
            } while ((iVar8 == 1) && (puVar14 = puVar14 + 1, local_res8[0] == '\0'));
            goto LAB_14556044f;
          }
        }
        else {
LAB_14556043c:
          if (local_res8[0] == '\0') {
            local_30 = CONCAT44(local_30._4_4_,(int)local_30 + -1);
          }
        }
        iVar8 = 1;
      }
    }
  }
LAB_14556044f:
  if (((local_res8[0] != '\0') && (iVar8 == 1)) &&
     (plVar10 = local_38, local_38 != local_38 + (local_30 & 0xffffffff))) {
    do {
      plVar3 = (longlong *)*plVar10;
      cVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      if (cVar5 != '\0') break;
      iVar8 = FUN_1455610e0(param_1,plVar3);
      if (iVar8 != 1) goto LAB_14556060a;
      plVar10 = plVar10 + 1;
      if (plVar10 == local_38 + (local_30 & 0xffffffff)) {
        *(undefined4 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 1;
        if ((int)param_1[4] == 0) goto LAB_145560565;
        plVar10 = *(longlong **)(param_1[3] + -0x18 + (ulonglong)*(uint *)(param_1 + 4) * 0x18);
        goto LAB_1455605b4;
      }
      lVar2 = *plVar10;
      lVar4 = *(longlong *)(lVar2 + 8);
      iVar8 = *(int *)(lVar4 + 0x30);
      if ((iVar8 == 0) || (iVar8 == 1)) {
        plVar12 = *(longlong **)(lVar4 + 0x20);
        sVar13 = 0;
        plVar1 = plVar12 + *(uint *)(lVar4 + 0x28);
        for (; (plVar12 != plVar1 && (*plVar12 != lVar2)); plVar12 = plVar12 + 1) {
          sVar13 = sVar13 + 1;
        }
        lVar2 = *(longlong *)(param_1[3] + -8 + (ulonglong)*(uint *)(param_1 + 4) * 0x18);
        if (lVar2 != 0) {
          *(short *)(lVar2 + 10) = sVar13;
        }
      }
      else if ((iVar8 == 2) || (iVar8 == 3)) {
        FUN_1455615d0(param_1,lVar2);
      }
    } while (plVar10 != local_38 + (local_30 & 0xffffffff));
    lVar2 = plVar3[4];
    *(int *)(param_1 + 5) = (int)lVar2;
    *(bool *)(param_1 + 6) = (int)lVar2 != 0;
    uVar9 = (undefined4)plVar3[2];
LAB_145560553:
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
    uVar6 = FUN_14555fcf0();
    *(undefined2 *)((longlong)param_1 + 0x32) = uVar6;
    iVar15 = 1;
  }
LAB_145560565:
  if (local_38 != (longlong *)0x0) {
    local_30 = local_30 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,local_38);
  }
  return iVar15;
  while (iVar8 = FUN_1455610e0(param_1,plVar10), iVar8 == 1) {
LAB_1455605b4:
    local_res18[0] = '\x01';
    while( true ) {
      if (plVar10 == (longlong *)0x0) goto LAB_145560565;
      uVar7 = FUN_1455612b0(param_1,param_1[3] + ((ulonglong)*(uint *)(param_1 + 4) * 3 + -3) * 8,
                            local_res18);
      if (local_res18[0] == '\0') break;
      lVar4 = plVar10[1];
      lVar2 = param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x18;
      plVar10 = *(longlong **)(param_1[3] + -8 + (ulonglong)*(uint *)(param_1 + 4) * 0x18);
      if ((plVar10 != (longlong *)0x0) &&
         ((*(int *)(*(longlong *)(lVar2 + -0x18) + 0x30) - 1U & 0xfffffffd) != 0)) {
        (**(code **)(*plVar10 + 8))();
      }
      *(undefined8 *)(lVar2 + -8) = 0;
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      plVar10 = (longlong *)FUN_145561030(param_1,lVar4);
    }
    plVar10 = *(longlong **)(plVar10[4] + (ulonglong)uVar7 * 8);
    cVar5 = (**(code **)(*plVar10 + 8))(plVar10);
    if (cVar5 != '\0') {
      lVar2 = plVar10[4];
      *(int *)(param_1 + 5) = (int)lVar2;
      *(bool *)(param_1 + 6) = (int)lVar2 != 0;
      uVar9 = (undefined4)plVar10[2];
      goto LAB_145560553;
    }
  }
LAB_14556060a:
  FUN_145560200();
  iVar15 = 2;
  goto LAB_145560565;
}



// FUNCTION 145560690 FUN_145560690 body=424 status=ok
// SIG undefined FUN_145560690(void)

void FUN_145560690(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  WriteBytesCount local_48 [16];
  WriteBytesMem local_38 [32];
  
  piVar8 = (int *)0x0;
  iVar7 = 0;
  iVar10 = -1;
  AK::WriteBytesCount::WriteBytesCount(local_48);
  iVar6 = FUN_145561b20(param_1);
  if (iVar6 == 1) {
    AK::WriteBytesMem::WriteBytesMem(local_38);
    AK::WriteBytesMem::SetMemPool(local_38,0);
    iVar6 = AK::WriteBytesCount::Count(local_48);
    bVar4 = AK::WriteBytesMem::Reserve(local_38,iVar6);
    if ((bVar4) && (iVar6 = FUN_145561b20(param_1,local_38), iVar7 = 0, iVar6 == 1)) {
      iVar7 = AK::WriteBytesMem::Count(local_38);
      piVar8 = (int *)AK::WriteBytesMem::Detach(local_38);
      iVar10 = 0;
    }
    AK::WriteBytesMem::~WriteBytesMem(local_38);
  }
  AK::WriteBytesCount::~WriteBytesCount(local_48);
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x54);
  if (uVar1 < uVar2) {
LAB_145560776:
    if (*(uint *)(param_1 + 0x54) <= uVar1) goto LAB_1455607dd;
    uVar1 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = uVar1 + 1;
    puVar9 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 0x48));
    if (puVar9 == (undefined8 *)0x0) goto LAB_1455607dd;
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0xffffffff;
    piVar3 = (int *)*puVar9;
    if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
      AK::MemoryMgr::Free(*(int *)((longlong)puVar9 + 0xc),(void *)*puVar9);
    }
    *(undefined4 *)(puVar9 + 1) = 0;
    *(int *)(puVar9 + 1) = iVar7;
    *puVar9 = piVar8;
    *(int *)((longlong)puVar9 + 0xc) = iVar10;
    if (piVar8 != (int *)0x0) {
      *piVar8 = *piVar8 + 1;
      goto LAB_1455607e2;
    }
  }
  else {
    iVar6 = (uVar2 >> 1) + uVar2;
    if (uVar2 == 0) {
      iVar6 = 1;
    }
    cVar5 = FUN_1455624b0(param_1 + 0x48,iVar6);
    if (cVar5 != '\0') goto LAB_145560776;
LAB_1455607dd:
    if (piVar8 != (int *)0x0) {
LAB_1455607e2:
      *piVar8 = *piVar8 + -1;
      if (*piVar8 == 0) {
        AK::MemoryMgr::Free(iVar10,piVar8);
        FUN_145560db0(param_1);
        goto LAB_145560809;
      }
    }
  }
  FUN_145560db0(param_1);
  if (piVar8 == (int *)0x0) {
    return;
  }
LAB_145560809:
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    AK::MemoryMgr::Free(iVar10,piVar8);
  }
  return;
}



// FUNCTION 145560840 thunk_FUN_145560db0 body=5 status=ok
// SIG undefined thunk_FUN_145560db0(void)

void thunk_FUN_145560db0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong *plVar8;
  char acStackX_8 [8];
  
  sVar1 = *(short *)(param_1 + 0x32);
  if (1 < sVar1) {
    *(short *)(param_1 + 0x32) = sVar1 + -1;
    return;
  }
  if (sVar1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (*(int *)(param_1 + 0x20) != 0) {
      acStackX_8[0] = '\x01';
      plVar8 = (longlong *)
               FUN_145561030(param_1,*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x18) + -0x18 +
                                      (ulonglong)*(uint *)(param_1 + 0x20) * 0x18));
      while (plVar8 != (longlong *)0x0) {
        uVar5 = FUN_1455612b0(param_1,*(longlong *)(param_1 + 0x18) +
                                      ((ulonglong)*(uint *)(param_1 + 0x20) * 3 + -3) * 8,acStackX_8
                             );
        if (acStackX_8[0] == '\0') {
          plVar8 = *(longlong **)(plVar8[4] + (ulonglong)uVar5 * 8);
          cVar4 = (**(code **)(*plVar8 + 8))(plVar8);
          if (cVar4 != '\0') {
            lVar3 = plVar8[4];
            *(int *)(param_1 + 0x28) = (int)lVar3;
            *(bool *)(param_1 + 0x30) = (int)lVar3 != 0;
            *(int *)(param_1 + 0x2c) = (int)plVar8[2];
            uVar6 = FUN_14555fcf0(plVar8);
            *(undefined2 *)(param_1 + 0x32) = uVar6;
            return;
          }
          if (((int)plVar8[5] == 0) || (*(char *)((longlong)plVar8 + 0x36) == '\0')) {
            plVar8 = (longlong *)plVar8[1];
          }
          else {
            iVar7 = FUN_1455610e0(param_1,plVar8);
            if (iVar7 != 1) {
              FUN_145560200(param_1);
              return;
            }
          }
          acStackX_8[0] = '\x01';
        }
        else {
          lVar2 = plVar8[1];
          lVar3 = *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18;
          plVar8 = *(longlong **)
                    (*(longlong *)(param_1 + 0x18) + -8 +
                    (ulonglong)*(uint *)(param_1 + 0x20) * 0x18);
          if ((plVar8 != (longlong *)0x0) &&
             ((*(int *)(*(longlong *)(lVar3 + -0x18) + 0x30) - 1U & 0xfffffffd) != 0)) {
            (**(code **)(*plVar8 + 8))();
          }
          *(undefined8 *)(lVar3 + -8) = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          plVar8 = (longlong *)FUN_145561030(param_1,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 145560850 FUN_145560850 body=710 status=ok
// SIG undefined FUN_145560850(void)

undefined8 * FUN_145560850(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_36;
  undefined4 *local_30;
  ulonglong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)(param_1 + 10) != 0) {
    puVar4 = (undefined8 *)param_1[9];
    piVar1 = (int *)*puVar4;
    *param_2 = piVar1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    puVar4 = (undefined8 *)param_1[9];
    piVar1 = (int *)*puVar4;
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      AK::MemoryMgr::Free(*(int *)((longlong)puVar4 + 0xc),(void *)*puVar4);
    }
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    if (1 < *(uint *)(param_1 + 10)) {
      memmove(puVar4,puVar4 + 2,(ulonglong)(*(uint *)(param_1 + 10) * 0x10 - 0x10));
    }
    *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + -1;
    local_68 = *param_1;
    local_60 = 0;
    local_58 = 0xffffffffffffffff;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_36 = 0;
    local_30 = (undefined4 *)0x0;
    local_28 = 0;
    local_20 = (undefined8 *)0x0;
    local_18 = 0;
    FUN_145561a70(&local_68,param_2);
    puVar5 = local_30;
    if (local_30 != local_30 + (local_28 & 0xffffffff) * 6) {
      do {
        cVar2 = FUN_1453ab040(local_68,*puVar5,*(undefined8 *)(puVar5 + 2),
                              *(undefined2 *)(puVar5 + 4));
        if (cVar2 == '\0') break;
        puVar5 = puVar5 + 6;
      } while (puVar5 != local_30 + (local_28 & 0xffffffff) * 6);
    }
    plVar3 = local_50;
    if (local_50 != local_50 + (local_48 & 0xffffffff) * 3) {
      do {
        if (((longlong *)plVar3[2] != (longlong *)0x0) &&
           ((*(int *)(*plVar3 + 0x30) - 1U & 0xfffffffd) != 0)) {
          (**(code **)(*(longlong *)plVar3[2] + 8))();
        }
        plVar3[2] = 0;
        plVar3 = plVar3 + 3;
      } while (plVar3 != local_50 + (local_48 & 0xffffffff) * 3);
    }
    local_48 = local_48 & 0xffffffff00000000;
    if (local_50 != (longlong *)0x0) {
      AK::MemoryMgr::Free(0,local_50);
      local_50 = (longlong *)0x0;
      local_48 = local_48 & 0xffffffff;
    }
    puVar5 = local_30;
    if (local_30 != local_30 + (local_28 & 0xffffffff) * 6) {
      do {
        (**(code **)(**(longlong **)(puVar5 + 2) + 8))();
        puVar5 = puVar5 + 6;
      } while (puVar5 != local_30 + (local_28 & 0xffffffff) * 6);
    }
    local_28 = local_28 & 0xffffffff00000000;
    if (local_30 != (undefined4 *)0x0) {
      AK::MemoryMgr::Free(0,local_30);
      local_28 = local_28 & 0xffffffff;
      local_30 = (undefined4 *)0x0;
    }
    if (local_20 != (undefined8 *)0x0) {
      puVar6 = local_20 + (local_18 & 0xffffffff) * 2;
      for (puVar4 = local_20; puVar4 != puVar6; puVar4 = puVar4 + 2) {
        piVar1 = (int *)*puVar4;
        if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
          AK::MemoryMgr::Free(*(int *)((longlong)puVar4 + 0xc),(void *)*puVar4);
        }
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
      }
      local_18 = local_18 & 0xffffffff00000000;
      AK::MemoryMgr::Free(0,local_20);
      local_20 = (undefined8 *)0x0;
      local_18 = local_18 & 0xffffffff;
    }
    puVar5 = local_30;
    if (local_30 != local_30 + (local_28 & 0xffffffff) * 6) {
      do {
        (**(code **)(**(longlong **)(puVar5 + 2) + 8))();
        puVar5 = puVar5 + 6;
      } while (puVar5 != local_30 + (local_28 & 0xffffffff) * 6);
    }
    if (local_30 != (undefined4 *)0x0) {
      local_28 = local_28 & 0xffffffff00000000;
      AK::MemoryMgr::Free(0,local_30);
    }
  }
  return param_2;
}



// FUNCTION 145560b20 FUN_145560b20 body=164 status=ok
// SIG undefined FUN_145560b20(void)

ulonglong FUN_145560b20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  uVar3 = uVar7;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    if ((*(short *)(param_1 + 0x28) != 0) &&
       (pvVar4 = AK::MemoryMgr::Malloc(0,0x10), pvVar4 != (void *)0x0)) {
      uVar3 = FUN_145398f20(pvVar4);
    }
  }
  else if ((((iVar2 == 2) || (iVar2 == 3)) &&
           (uVar3 = FUN_145560c30(*(short *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x38)),
           uVar3 != 0)) && (*(char *)(param_1 + 0x34) != '\0')) {
    plVar5 = *(longlong **)(param_1 + 0x20);
    plVar1 = plVar5 + *(uint *)(param_1 + 0x28);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      uVar6 = (int)uVar7 + *(int *)(*plVar5 + 0x1c);
      uVar7 = (ulonglong)uVar6;
    }
    *(uint *)(uVar3 + 8) = uVar6;
    *(uint *)(uVar3 + 0xc) = uVar6;
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 145560bd0 FUN_145560bd0 body=92 status=ok
// SIG undefined FUN_145560bd0(void)

undefined8 FUN_145560bd0(int param_1,short param_2,undefined2 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = 0;
  if ((param_1 == 0) || (param_1 == 1)) {
    if (param_2 != 0) {
      pvVar2 = AK::MemoryMgr::Malloc(0,0x10);
      if (pvVar2 != (void *)0x0) {
        uVar1 = FUN_145398f20(pvVar2);
      }
    }
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    uVar1 = FUN_145560c30(param_2,param_3);
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 145560c30 FUN_145560c30 body=109 status=ok
// SIG undefined FUN_145560c30(void)

longlong * FUN_145560c30(short param_1,undefined2 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  if (((param_1 != 0) && (pvVar2 = AK::MemoryMgr::Malloc(0,0x38), pvVar2 != (void *)0x0)) &&
     (plVar3 = (longlong *)FUN_1453985a0(pvVar2,param_1), plVar3 != (longlong *)0x0)) {
    iVar1 = FUN_1453985e0(plVar3,param_2);
    if (iVar1 == 1) {
      return plVar3;
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return (longlong *)0x0;
}



// FUNCTION 145560ca0 FUN_145560ca0 body=103 status=ok
// SIG undefined FUN_145560ca0(void)

void FUN_145560ca0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != lVar1 + (ulonglong)*(uint *)(param_1 + 0x40) * 0x18) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
      lVar1 = lVar1 + 0x18;
    } while (lVar1 != *(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 0x18);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 145560d10 FUN_145560d10 body=145 status=ok
// SIG undefined FUN_145560d10(void)

void FUN_145560d10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == plVar1 + (ulonglong)*(uint *)(param_1 + 0x20) * 3) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  do {
    if (((longlong *)plVar1[2] != (longlong *)0x0) &&
       ((*(int *)(*plVar1 + 0x30) - 1U & 0xfffffffd) != 0)) {
      (**(code **)(*(longlong *)plVar1[2] + 8))();
    }
    plVar1[2] = 0;
    plVar1 = plVar1 + 3;
  } while (plVar1 != (longlong *)
                     (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18));
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145560db0 FUN_145560db0 body=379 status=ok
// SIG undefined FUN_145560db0(void)

void FUN_145560db0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  longlong *plVar8;
  char local_res8 [8];
  
  sVar1 = *(short *)(param_1 + 0x32);
  if (1 < sVar1) {
    *(short *)(param_1 + 0x32) = sVar1 + -1;
    return;
  }
  if (sVar1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (*(int *)(param_1 + 0x20) != 0) {
      local_res8[0] = '\x01';
      plVar8 = (longlong *)
               FUN_145561030(param_1,*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x18) + -0x18 +
                                      (ulonglong)*(uint *)(param_1 + 0x20) * 0x18));
      while (plVar8 != (longlong *)0x0) {
        uVar5 = FUN_1455612b0(param_1,*(longlong *)(param_1 + 0x18) +
                                      ((ulonglong)*(uint *)(param_1 + 0x20) * 3 + -3) * 8,local_res8
                             );
        if (local_res8[0] == '\0') {
          plVar8 = *(longlong **)(plVar8[4] + (ulonglong)uVar5 * 8);
          cVar4 = (**(code **)(*plVar8 + 8))(plVar8);
          if (cVar4 != '\0') {
            lVar3 = plVar8[4];
            *(int *)(param_1 + 0x28) = (int)lVar3;
            *(bool *)(param_1 + 0x30) = (int)lVar3 != 0;
            *(int *)(param_1 + 0x2c) = (int)plVar8[2];
            uVar6 = FUN_14555fcf0(plVar8);
            *(undefined2 *)(param_1 + 0x32) = uVar6;
            return;
          }
          if (((int)plVar8[5] == 0) || (*(char *)((longlong)plVar8 + 0x36) == '\0')) {
            plVar8 = (longlong *)plVar8[1];
          }
          else {
            iVar7 = FUN_1455610e0(param_1,plVar8);
            if (iVar7 != 1) {
              FUN_145560200(param_1);
              return;
            }
          }
          local_res8[0] = '\x01';
        }
        else {
          lVar2 = plVar8[1];
          lVar3 = *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18;
          plVar8 = *(longlong **)
                    (*(longlong *)(param_1 + 0x18) + -8 +
                    (ulonglong)*(uint *)(param_1 + 0x20) * 0x18);
          if ((plVar8 != (longlong *)0x0) &&
             ((*(int *)(*(longlong *)(lVar3 + -0x18) + 0x30) - 1U & 0xfffffffd) != 0)) {
            (**(code **)(*plVar8 + 8))();
          }
          *(undefined8 *)(lVar3 + -8) = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          plVar8 = (longlong *)FUN_145561030(param_1,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 145560f30 FUN_145560f30 body=245 status=ok
// SIG undefined FUN_145560f30(void)

undefined8
FUN_145560f30(undefined8 param_1,longlong *param_2,int param_3,longlong *param_4,char *param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)(param_4 + 1);
  if (((uVar1 < *(uint *)((longlong)param_4 + 0xc)) ||
      (cVar2 = FUN_1453aa6b0(param_4), cVar2 != '\0')) &&
     (uVar1 < *(uint *)((longlong)param_4 + 0xc))) {
    uVar1 = *(uint *)(param_4 + 1);
    *(uint *)(param_4 + 1) = uVar1 + 1;
    puVar4 = (undefined8 *)(*param_4 + (ulonglong)uVar1 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = param_2;
      if ((int)param_2[2] == param_3) {
        *param_5 = '\x01';
      }
      else {
        cVar2 = (**(code **)(*param_2 + 8))(param_2);
        if (cVar2 == '\0') {
          puVar4 = (undefined8 *)param_2[4];
          cVar2 = *param_5;
          while (cVar2 == '\0') {
            if (puVar4 == (undefined8 *)(param_2[4] + (ulonglong)*(uint *)(param_2 + 5) * 8))
            goto LAB_145560ff7;
            uVar3 = FUN_145560f30(param_1,*puVar4,param_3,param_4,param_5);
            if ((int)uVar3 != 1) {
              return uVar3;
            }
            puVar4 = puVar4 + 1;
            cVar2 = *param_5;
          }
        }
        else {
LAB_145560ff7:
          if (*param_5 == '\0') {
            *(int *)(param_4 + 1) = (int)param_4[1] + -1;
          }
        }
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 145561030 FUN_145561030 body=172 status=ok
// SIG undefined FUN_145561030(void)

longlong FUN_145561030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short sVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  do {
    if ((*(uint *)(param_2 + 0x30) & 0xfffffffd) == 0) {
      return param_2;
    }
    lVar1 = *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18;
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x18) + -0x10 +
                      (ulonglong)*(uint *)(param_1 + 0x20) * 0x18);
    if (sVar2 == 0) {
      return param_2;
    }
    if (1 < sVar2) {
      *(short *)(lVar1 + -0x10) = sVar2 + -1;
      return param_2;
    }
    param_2 = *(longlong *)(param_2 + 8);
    if ((*(longlong **)(lVar1 + -8) != (longlong *)0x0) &&
       ((*(int *)(*(longlong *)(lVar1 + -0x18) + 0x30) - 1U & 0xfffffffd) != 0)) {
      (**(code **)(**(longlong **)(lVar1 + -8) + 8))();
    }
    *(undefined8 *)(lVar1 + -8) = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  } while (param_2 != 0);
  return 0;
}



// FUNCTION 1455610e0 FUN_1455610e0 body=455 status=ok
// SIG undefined FUN_1455610e0(void)

undefined8 FUN_1455610e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  byte bVar12;
  longlong *local_58;
  undefined2 local_50;
  longlong local_48;
  undefined2 uStack_40;
  byte bStack_3e;
  undefined5 uStack_3d;
  longlong *local_38;
  
  bVar12 = bStack_3e & 0xfc;
  bVar6 = 1;
  if (*(short *)(param_2 + 0x14) == 0) {
    bVar6 = 3;
  }
  bStack_3e = bVar6 | bVar12;
  local_48 = param_2;
  uStack_40 = FUN_14555fcf0(param_2);
  if ((*(int *)(param_2 + 0x30) - 1U & 0xfffffffd) == 0) {
    piVar9 = (int *)param_1[7];
    iVar3 = *(int *)(param_2 + 0x10);
    piVar1 = piVar9 + (ulonglong)*(uint *)(param_1 + 8) * 6;
    for (; (piVar9 != piVar1 && (*piVar9 != iVar3)); piVar9 = piVar9 + 6) {
    }
    piVar11 = piVar9 + 2;
    if (piVar9 == piVar1) {
      piVar11 = (int *)0x0;
    }
    if (piVar11 == (int *)0x0) {
      plVar8 = (longlong *)FUN_1453aaff0(*param_1,iVar3);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)FUN_145560b20(param_2);
      }
      else {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,*(undefined2 *)(param_2 + 0x28));
      }
      if (plVar8 != (longlong *)0x0) {
        local_50 = *(undefined2 *)(param_2 + 0x28);
        local_58 = plVar8;
        lVar10 = FUN_1455623e0(param_1 + 7,iVar3,&local_58);
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
          plVar8 = (longlong *)0x0;
        }
      }
    }
    else {
      plVar8 = *(longlong **)piVar11;
    }
    bStack_3e = bVar12 | 3;
  }
  else {
    plVar8 = (longlong *)FUN_145560b20(param_2);
  }
  if (plVar8 == (longlong *)0x0) {
    return 2;
  }
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)((longlong)param_1 + 0x24);
  local_38 = plVar8;
  if (uVar5 <= uVar4) {
    iVar3 = (uVar5 >> 1) + uVar5;
    if (uVar5 == 0) {
      iVar3 = 1;
    }
    cVar7 = FUN_145562210(param_1 + 3,iVar3);
    if (cVar7 == '\0') goto LAB_145561274;
  }
  if (uVar4 < *(uint *)((longlong)param_1 + 0x24)) {
    plVar2 = (longlong *)(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x18);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) + 1;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = local_48;
      plVar2[1] = CONCAT53(uStack_3d,CONCAT12(bStack_3e,uStack_40));
      plVar2[2] = (longlong)local_38;
      return 1;
    }
  }
LAB_145561274:
  if ((*(int *)(param_2 + 0x30) - 1U & 0xfffffffd) != 0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  return 2;
}



// FUNCTION 1455612b0 FUN_1455612b0 body=280 status=ok
// SIG undefined FUN_1455612b0(void)

uint FUN_1455612b0(longlong param_1,longlong *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  uint local_res10 [4];
  int local_res20 [2];
  
  lVar3 = *param_2;
  uVar6 = 0;
  iVar1 = *(int *)(lVar3 + 0x30);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if ((iVar1 == 2) || (iVar1 == 3)) {
      uVar5 = FUN_1455613d0();
      uVar6 = (uint)uVar5;
    }
    goto LAB_145561346;
  }
  *param_3 = '\0';
  lVar4 = param_2[2];
  if (lVar4 == 0) {
    *param_3 = '\x01';
    uVar6 = 0;
    goto LAB_145561346;
  }
  if (*(short *)(lVar4 + 10) + 1 == *(int *)(*param_2 + 0x28)) {
    *(undefined2 *)(lVar4 + 10) = 0;
    if ((*(byte *)((longlong)param_2 + 10) & 1) == 0) {
LAB_14556132f:
      *param_3 = '\x01';
      uVar6 = 0;
      goto LAB_145561346;
    }
    if ((*(byte *)((longlong)param_2 + 10) & 2) == 0) {
      param_2 = param_2 + 1;
      *(short *)param_2 = (short)*param_2 + -1;
      if ((short)*param_2 == 0) goto LAB_14556132f;
    }
  }
  else {
    *(short *)(lVar4 + 10) = *(short *)(lVar4 + 10) + 1;
  }
  uVar6 = (uint)*(ushort *)(lVar4 + 10);
LAB_145561346:
  if (*param_3 == '\0') {
    uVar2 = *(uint *)(lVar3 + 0x28);
    local_res20[0] = 0;
    local_res10[0] = uVar6;
    FUN_1450b3030(DAT_14c790fc0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(lVar3 + 0x10),uVar2,
                  local_res10,local_res20);
    if (uVar2 <= local_res10[0]) {
      local_res10[0] = uVar6;
    }
    *param_3 = local_res20[0] != 0;
    return local_res10[0];
  }
  return uVar6;
}



// FUNCTION 1455613d0 FUN_1455613d0 body=502 status=ok
// SIG undefined FUN_1455613d0(void)

short FUN_1455613d0(undefined8 param_1,longlong *param_2,undefined1 *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ulonglong uVar8;
  short sVar9;
  int iVar10;
  
  *param_3 = 0;
  uVar8 = 0;
  lVar2 = param_2[2];
  if (lVar2 == 0) {
LAB_1455615a8:
    *param_3 = 1;
    return 0;
  }
  lVar3 = *param_2;
  if (*(short *)(lVar2 + 0x12) == 0) {
    if ((*(byte *)((longlong)param_2 + 10) & 1) == 0) goto LAB_1455615a8;
    if ((*(byte *)((longlong)param_2 + 10) & 2) == 0) {
      param_2 = param_2 + 1;
      *(short *)param_2 = (short)*param_2 + -1;
      if ((short)*param_2 == 0) goto LAB_1455615a8;
    }
    *(undefined2 *)(lVar2 + 0x12) = *(undefined2 *)(lVar3 + 0x28);
    FUN_145398d10(lVar2);
    puVar7 = *(ushort **)(lVar2 + 0x18);
    iVar10 = *(int *)(lVar2 + 8);
    sVar9 = *(short *)(lVar2 + 0x10);
    if (puVar7 != puVar7 + *(uint *)(lVar2 + 0x20)) {
      do {
        sVar9 = sVar9 + -1;
        iVar10 = iVar10 - *(int *)(*(longlong *)
                                    (*(longlong *)(lVar3 + 0x20) + (ulonglong)*puVar7 * 8) + 0x1c);
        FUN_145398d50(lVar2);
        puVar7 = puVar7 + 1;
      } while (puVar7 != (ushort *)
                         (*(longlong *)(lVar2 + 0x18) + (ulonglong)*(uint *)(lVar2 + 0x20) * 2));
    }
    *(int *)(lVar2 + 0xc) = iVar10;
    *(short *)(lVar2 + 0x10) = sVar9;
  }
  iVar10 = -1;
  if (*(char *)(lVar3 + 0x34) == '\0') {
    if (*(short *)(lVar2 + 0x10) == 0) goto LAB_14556151d;
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    uVar1 = *(ushort *)(lVar2 + 0x10);
    uVar6 = DAT_14c791078 >> 0x21;
    do {
      if (*(char *)(lVar3 + 0x35) == '\0') {
        if (*(short *)(lVar3 + 0x38) != 0) {
LAB_145561574:
          cVar4 = FUN_145398d90(lVar2,uVar8 & 0xffff);
          if (cVar4 != '\0') goto LAB_145561585;
        }
        iVar10 = iVar10 + 1;
      }
      else {
        cVar4 = FUN_145398cf0(lVar2,uVar8 & 0xffff);
        if (cVar4 == '\0') goto LAB_145561574;
      }
LAB_145561585:
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (iVar10 < (int)(uVar6 % (ulonglong)uVar1));
  }
  else {
    if (*(int *)(lVar2 + 0xc) == 0) {
LAB_14556151d:
      *(undefined2 *)(lVar2 + 0x12) = 0;
      return 0;
    }
    iVar5 = FUN_145398dc0(lVar2);
    if (-1 < iVar5) {
      do {
        if (*(char *)(lVar3 + 0x35) == '\0') {
          if (*(short *)(lVar3 + 0x38) != 0) {
LAB_1455614f5:
            cVar4 = FUN_145398d90(lVar2,uVar8 & 0xffff);
            if (cVar4 != '\0') goto LAB_14556150f;
          }
          iVar10 = iVar10 + *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar8 * 8) + 0x1c);
        }
        else {
          cVar4 = FUN_145398cf0(lVar2,uVar8 & 0xffff);
          if (cVar4 == '\0') goto LAB_1455614f5;
        }
LAB_14556150f:
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while (iVar10 < iVar5);
    }
  }
  sVar9 = (short)uVar8 + -1;
  FUN_145561730(param_1,lVar3,sVar9,lVar3 + 0x20,lVar2);
  return sVar9;
}



// FUNCTION 1455615d0 FUN_1455615d0 body=349 status=ok
// SIG undefined FUN_1455615d0(void)

void FUN_1455615d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  longlong *plVar5;
  short *_Dst;
  ushort *puVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  
  lVar2 = *(longlong *)(param_2 + 8);
  sVar8 = 0;
  plVar5 = *(longlong **)(lVar2 + 0x20);
  plVar1 = plVar5 + *(uint *)(lVar2 + 0x28);
  for (; (plVar5 != plVar1 && (*plVar5 != param_2)); plVar5 = plVar5 + 1) {
    sVar8 = sVar8 + 1;
  }
  lVar3 = *(longlong *)
           (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x20) * 0x18);
  if (lVar3 != 0) {
    psVar4 = *(short **)(lVar3 + 0x18);
    for (_Dst = psVar4; _Dst != psVar4 + *(uint *)(lVar3 + 0x20); _Dst = _Dst + 1) {
      if (*_Dst == sVar8) {
        if (_Dst < psVar4 + (*(uint *)(lVar3 + 0x20) - 1)) {
          memmove(_Dst,_Dst + 1,
                  (ulonglong)
                  (uint)((int)((longlong)(psVar4 + (*(uint *)(lVar3 + 0x20) - 1)) - (longlong)_Dst
                              >> 1) * 2));
        }
        *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
        break;
      }
    }
    *(undefined2 *)(lVar3 + 0x12) = *(undefined2 *)(lVar2 + 0x28);
    FUN_145398d10(lVar3,*(undefined4 *)(lVar2 + 0x28));
    puVar6 = *(ushort **)(lVar3 + 0x18);
    iVar7 = *(int *)(lVar3 + 8);
    sVar9 = *(short *)(lVar3 + 0x10);
    if (puVar6 != puVar6 + *(uint *)(lVar3 + 0x20)) {
      do {
        sVar9 = sVar9 + -1;
        iVar7 = iVar7 - *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)*puVar6 * 8)
                                + 0x1c);
        FUN_145398d50(lVar3);
        puVar6 = puVar6 + 1;
      } while (puVar6 != (ushort *)
                         (*(longlong *)(lVar3 + 0x18) + (ulonglong)*(uint *)(lVar3 + 0x20) * 2));
    }
    *(int *)(lVar3 + 0xc) = iVar7;
    *(short *)(lVar3 + 0x10) = sVar9;
    FUN_145561730(param_1,lVar2,sVar8,(longlong *)(lVar2 + 0x20),lVar3);
  }
  return;
}



// FUNCTION 145561730 FUN_145561730 body=546 status=ok
// SIG undefined FUN_145561730(void)

void FUN_145561730(undefined8 param_1,longlong param_2,ushort param_3,longlong *param_4,
                  longlong param_5)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x35) == '\0') {
    cVar3 = FUN_145398cf0(param_5,uVar6);
    if (cVar3 == '\0') {
      FUN_145398cd0(param_5,uVar6);
      *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
    }
    if (*(short *)(param_2 + 0x38) == 0) {
      return;
    }
    *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
    uVar2 = *(uint *)(param_5 + 0x20);
    if ((uVar2 < *(uint *)(param_5 + 0x24)) ||
       ((cVar3 = FUN_1450c2730(param_5 + 0x18), cVar3 != '\0' && (uVar2 < *(uint *)(param_5 + 0x24))
        ))) {
      uVar2 = *(uint *)(param_5 + 0x20);
      *(uint *)(param_5 + 0x20) = uVar2 + 1;
      puVar1 = (ushort *)(*(longlong *)(param_5 + 0x18) + (ulonglong)uVar2 * 2);
      if (puVar1 != (ushort *)0x0) {
        *puVar1 = param_3;
        FUN_145398d50(param_5,uVar6);
        *(int *)(param_5 + 0xc) =
             *(int *)(param_5 + 0xc) - *(int *)(*(longlong *)(*param_4 + uVar6 * 8) + 0x1c);
        uVar5 = (short)param_4[1] - 1;
        uVar4 = *(ushort *)(param_2 + 0x38);
        if (uVar5 <= *(ushort *)(param_2 + 0x38)) {
          uVar4 = uVar5;
        }
        if (*(uint *)(param_5 + 0x20) <= (uint)uVar4) {
          return;
        }
        uVar4 = **(ushort **)(param_5 + 0x18);
        FUN_145398d70(param_5,(ulonglong)uVar4);
        *(int *)(param_5 + 0xc) =
             *(int *)(param_5 + 0xc) +
             *(int *)(*(longlong *)(*param_4 + (ulonglong)uVar4 * 8) + 0x1c);
        *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
        FUN_14555fcb0(param_5 + 0x18,0);
        return;
      }
    }
    *(undefined2 *)(param_5 + 0x12) = 0;
    return;
  }
  uVar4 = 1;
  if (*(ushort *)(param_2 + 0x38) != 0) {
    uVar4 = *(ushort *)(param_2 + 0x38);
  }
  *(int *)(param_5 + 0xc) =
       *(int *)(param_5 + 0xc) - *(int *)(*(longlong *)(*param_4 + uVar6 * 8) + 0x1c);
  *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
  *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
  FUN_145398cd0(param_5,uVar6);
  uVar2 = *(uint *)(param_5 + 0x20);
  if ((uVar2 < *(uint *)(param_5 + 0x24)) ||
     ((cVar3 = FUN_1450c2730(param_5 + 0x18), cVar3 != '\0' && (uVar2 < *(uint *)(param_5 + 0x24))))
     ) {
    uVar2 = *(uint *)(param_5 + 0x20);
    *(uint *)(param_5 + 0x20) = uVar2 + 1;
    puVar1 = (ushort *)(*(longlong *)(param_5 + 0x18) + (ulonglong)uVar2 * 2);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = param_3;
      FUN_145398d50(param_5,uVar6);
      uVar2 = *(uint *)(param_5 + 0x20);
      uVar5 = (short)param_4[1] - 1;
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      if (uVar2 <= uVar5) {
        return;
      }
      puVar1 = *(ushort **)(param_5 + 0x18);
      uVar4 = *puVar1;
      if (1 < uVar2) {
        memmove(puVar1,puVar1 + 1,(ulonglong)(uVar2 * 2 - 2));
      }
      *(int *)(param_5 + 0x20) = *(int *)(param_5 + 0x20) + -1;
      FUN_145398d70(param_5,(ulonglong)uVar4);
      cVar3 = FUN_145398cf0(param_5,uVar4);
      if (cVar3 != '\0') {
        return;
      }
      *(int *)(param_5 + 0xc) =
           *(int *)(param_5 + 0xc) + *(int *)(*(longlong *)(*param_4 + (ulonglong)uVar4 * 8) + 0x1c)
      ;
      *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
      return;
    }
  }
  *(undefined2 *)(param_5 + 0x12) = 0;
  return;
}



// FUNCTION 145561960 FUN_145561960 body=200 status=ok
// SIG undefined FUN_145561960(void)

undefined8 * FUN_145561960(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  WriteBytesCount local_38 [16];
  WriteBytesMem local_28 [32];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
  AK::WriteBytesCount::WriteBytesCount(local_38);
  iVar2 = FUN_145561b20(param_1);
  if (iVar2 == 1) {
    AK::WriteBytesMem::WriteBytesMem(local_28);
    AK::WriteBytesMem::SetMemPool(local_28,0);
    iVar2 = AK::WriteBytesCount::Count(local_38);
    bVar1 = AK::WriteBytesMem::Reserve(local_28,iVar2);
    if (bVar1) {
      iVar2 = FUN_145561b20(param_1,local_28);
      if (iVar2 == 1) {
        iVar2 = AK::WriteBytesMem::Count(local_28);
        puVar3 = AK::WriteBytesMem::Detach(local_28);
        *param_2 = puVar3;
        *(int *)(param_2 + 1) = iVar2;
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
    }
    AK::WriteBytesMem::~WriteBytesMem(local_28);
  }
  AK::WriteBytesCount::~WriteBytesCount(local_38);
  return param_2;
}



// FUNCTION 145561a30 FUN_145561a30 body=64 status=ok
// SIG undefined FUN_145561a30(void)

bool FUN_145561a30(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ReadBytesMem local_28 [32];
  
  AK::ReadBytesMem::ReadBytesMem(local_28,(void *)*param_2,*(int *)(param_2 + 1));
  iVar1 = FUN_145561e50(param_1,local_28);
  AK::ReadBytesMem::~ReadBytesMem(local_28);
  return iVar1 == 1;
}



// FUNCTION 145561a70 FUN_145561a70 body=167 status=ok
// SIG undefined FUN_145561a70(void)

bool FUN_145561a70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ReadBytesSkip local_48 [32];
  ReadBytesMem local_28 [32];
  
  AK::ReadBytesSkip::ReadBytesSkip(local_48,(void *)*param_2,(int)param_2[1]);
  iVar3 = FUN_145561fb0(param_1,local_48);
  if (iVar3 == 1) {
    lVar1 = *param_2;
    iVar3 = AK::ReadBytesSkip::Count(local_48);
    lVar2 = param_2[1];
    iVar4 = AK::ReadBytesSkip::Count(local_48);
    AK::ReadBytesMem::ReadBytesMem(local_28,(void *)(iVar4 + lVar1),(int)lVar2 - iVar3);
    iVar3 = FUN_145562080(param_1,local_28);
    AK::ReadBytesMem::~ReadBytesMem(local_28);
    bVar5 = iVar3 == 1;
  }
  else {
    bVar5 = false;
  }
  AK::ReadBytesSkip::~ReadBytesSkip(local_48);
  return bVar5;
}



// FUNCTION 145561b20 FUN_145561b20 body=801 status=ok
// SIG undefined FUN_145561b20(void)

undefined8 FUN_145561b20(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  local_res18[0] = 1;
  cVar1 = (**(code **)*param_2)(param_2,local_res18,4,local_res20);
  if (((cVar1 != '\0') &&
      (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x28,4,&local_44), cVar1 != '\0')) &&
     (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x2c,4,local_48), cVar1 != '\0')) {
    local_res10[0] = *(char *)(param_1 + 0x30) != '\0';
    cVar1 = (**(code **)*param_2)(param_2,local_res10,1,local_40);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x32,2,local_3c), cVar1 != '\0')) {
      local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)(param_1 + 0x40));
      cVar1 = (**(code **)*param_2)(param_2,local_res18,2,local_3c);
      if (cVar1 != '\0') {
        puVar3 = *(undefined4 **)(param_1 + 0x38);
        if (puVar3 != puVar3 + (ulonglong)*(uint *)(param_1 + 0x40) * 6) {
          do {
            local_res20[0] = *puVar3;
            iVar2 = (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
            cVar1 = (**(code **)*param_2)(param_2,local_res20,4,local_40);
            if (cVar1 == '\0') {
              return 2;
            }
            local_res10[0] = 1;
            if (iVar2 == 0) {
              local_res10[0] = 3;
            }
            cVar1 = (**(code **)*param_2)(param_2,local_res10,1,&local_44);
            if (cVar1 == '\0') {
              return 2;
            }
            cVar1 = (**(code **)*param_2)(param_2,puVar3 + 4,2,local_48);
            if (cVar1 == '\0') {
              return 2;
            }
            iVar2 = (**(code **)(**(longlong **)(puVar3 + 2) + 0x20))
                              (*(longlong **)(puVar3 + 2),param_2,*(undefined2 *)(puVar3 + 4));
            if (iVar2 != 1) {
              return 2;
            }
            puVar3 = puVar3 + 6;
          } while (puVar3 != (undefined4 *)
                             (*(longlong *)(param_1 + 0x38) +
                             (ulonglong)*(uint *)(param_1 + 0x40) * 0x18));
        }
        local_res20[0] = CONCAT22(local_res20[0]._2_2_,*(undefined2 *)(param_1 + 0x20));
        cVar1 = (**(code **)*param_2)(param_2,local_res20,2,local_3c);
        if (cVar1 != '\0') {
          plVar4 = *(longlong **)(param_1 + 0x18);
          if (plVar4 != plVar4 + (ulonglong)*(uint *)(param_1 + 0x20) * 3) {
            do {
              local_44 = *(undefined4 *)(*plVar4 + 0x10);
              iVar2 = *(int *)(*plVar4 + 0x30);
              cVar1 = (**(code **)*param_2)(param_2,&local_44,4,local_40);
              if (cVar1 == '\0') {
                return 2;
              }
              local_res10[0] = (undefined1)iVar2;
              cVar1 = (**(code **)*param_2)(param_2,local_res10,1,local_38);
              if (cVar1 == '\0') {
                return 2;
              }
              if ((iVar2 - 1U & 0xfffffffd) != 0) {
                local_48[0] = *(undefined2 *)(*plVar4 + 0x28);
                cVar1 = (**(code **)*param_2)(param_2,local_48,2,local_34);
                if (cVar1 == '\0') {
                  return 2;
                }
                iVar2 = (**(code **)(*(longlong *)plVar4[2] + 0x20))
                                  ((longlong *)plVar4[2],param_2,*(undefined2 *)(*plVar4 + 0x28));
                if (iVar2 != 1) {
                  return 2;
                }
              }
              local_res18[0] =
                   CONCAT31(local_res18[0]._1_3_,*(undefined1 *)((longlong)plVar4 + 10)) &
                   0xffffff03;
              cVar1 = (**(code **)*param_2)(param_2,plVar4 + 1,2,local_30);
              if (cVar1 == '\0') {
                return 2;
              }
              cVar1 = (**(code **)*param_2)(param_2,local_res18,1,local_2c);
              if (cVar1 == '\0') {
                return 2;
              }
              plVar4 = plVar4 + 3;
            } while (plVar4 != (longlong *)
                               (*(longlong *)(param_1 + 0x18) +
                               (ulonglong)*(uint *)(param_1 + 0x20) * 0x18));
          }
          return 1;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 145561e50 FUN_145561e50 body=344 status=ok
// SIG undefined FUN_145561e50(void)

undefined8 FUN_145561e50(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort local_res18 [4];
  undefined1 local_res20 [8];
  longlong local_38 [2];
  
  iVar5 = FUN_145561fb0();
  if (((iVar5 == 1) && (iVar5 = FUN_145562080(param_1,param_2), iVar5 == 1)) &&
     (cVar4 = (**(code **)*param_2)(param_2,local_res18,2,local_res20), cVar4 != '\0')) {
    if (local_res18[0] != 0) {
      if ((*(uint *)((longlong)param_1 + 0x24) < (uint)local_res18[0]) &&
         (cVar4 = FUN_145562210(param_1 + 3,
                                (uint)local_res18[0] - *(uint *)((longlong)param_1 + 0x24)),
         cVar4 == '\0')) goto LAB_145561f8c;
      local_38[0] = *param_1 + 0x138;
      uVar7 = 0;
      if (local_res18[0] != 0) {
        do {
          uVar2 = *(uint *)(param_1 + 4);
          uVar3 = *(uint *)((longlong)param_1 + 0x24);
          if (uVar3 <= uVar2) {
            iVar5 = (uVar3 >> 1) + uVar3;
            if (uVar3 == 0) {
              iVar5 = 1;
            }
            cVar4 = FUN_145562210(param_1 + 3,iVar5);
            if (cVar4 == '\0') goto LAB_145561f8c;
          }
          if (*(uint *)((longlong)param_1 + 0x24) <= uVar2) goto LAB_145561f8c;
          lVar1 = param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x18;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) + 1;
          if (lVar1 == 0) goto LAB_145561f8c;
          *(byte *)(lVar1 + 10) = *(byte *)(lVar1 + 10) & 0xfc;
          *(undefined2 *)(lVar1 + 8) = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0;
          iVar5 = FUN_14555fe50(param_1[3] + (ulonglong)uVar7 * 0x18,param_2,local_38,param_1);
          if (iVar5 != 1) goto LAB_145561f8c;
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_res18[0]);
      }
    }
    uVar6 = 1;
  }
  else {
LAB_145561f8c:
    uVar6 = 2;
  }
  return uVar6;
}



// FUNCTION 145561fb0 FUN_145561fb0 body=201 status=ok
// SIG undefined FUN_145561fb0(void)

undefined8 FUN_145561fb0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  cVar1 = (**(code **)*param_2)(param_2,local_res20,4,local_res18);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x28,4,local_res18);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x2c,4,local_res18);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)*param_2)(param_2,local_res10,1,local_res18);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x32,2,local_res18);
          if (cVar1 != '\0') {
            *(bool *)(param_1 + 0x30) = local_res10[0] != '\0';
            return 1;
          }
        }
      }
    }
  }
  return 2;
}



// FUNCTION 145562080 FUN_145562080 body=386 status=ok
// SIG undefined FUN_145562080(void)

undefined8 FUN_145562080(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  ushort uVar6;
  char local_res10 [8];
  short local_res18 [4];
  ushort local_res20 [4];
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  longlong *local_38;
  short local_30;
  
  cVar1 = (**(code **)*param_2)(param_2,local_res20,2,local_res10);
  if (cVar1 == '\0') {
    return 2;
  }
  uVar6 = 0;
  if (local_res20[0] != 0) {
    do {
      cVar1 = (**(code **)*param_2)(param_2,&local_48,4,local_44);
      if (cVar1 == '\0') {
        return 2;
      }
      cVar1 = (**(code **)*param_2)(param_2,local_res10,1,local_40);
      if (cVar1 == '\0') {
        return 2;
      }
      cVar1 = (**(code **)*param_2)(param_2,local_res18,2,local_3c);
      if (cVar1 == '\0') {
        return 2;
      }
      if ((local_res10[0] == '\0') || (local_res10[0] == '\x01')) {
        plVar3 = (longlong *)0x0;
        if ((local_res18[0] != 0) &&
           (pvVar4 = AK::MemoryMgr::Malloc(0,0x10), plVar3 = (longlong *)0x0, pvVar4 != (void *)0x0)
           ) {
          plVar3 = (longlong *)FUN_145398f20(pvVar4);
        }
      }
      else {
        if ((local_res10[0] != '\x02') && (local_res10[0] != '\x03')) {
          return 2;
        }
        plVar3 = (longlong *)FUN_145560c30(local_res18[0],0);
      }
      if (plVar3 == (longlong *)0x0) {
        return 2;
      }
      local_30 = local_res18[0];
      local_38 = plVar3;
      lVar5 = FUN_1455623e0(param_1 + 0x38,local_48,&local_38);
      if (lVar5 == 0) {
        return 2;
      }
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,local_res18[0]);
      if (iVar2 != 1) {
        return 2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res20[0]);
  }
  return 1;
}



// FUNCTION 145562210 FUN_145562210 body=226 status=ok
// SIG undefined FUN_145562210(void)

undefined8 FUN_145562210(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  byte *pbVar4;
  __uint64 _Var5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var5 = (ulonglong)uVar6 * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(0,_Var5);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar7 != 0) {
        pbVar4 = (byte *)((longlong)pvVar3 + 10);
        do {
          if (pbVar4 + -10 != (byte *)0x0) {
            *pbVar4 = *pbVar4 & 0xfc;
            pbVar4[-2] = 0;
            pbVar4[-1] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            pbVar4[8] = 0;
            pbVar4[9] = 0;
            pbVar4[10] = 0;
            pbVar4[0xb] = 0;
            pbVar4[0xc] = 0;
            pbVar4[0xd] = 0;
          }
          lVar1 = *param_1;
          uVar2 = *(undefined8 *)(pbVar4 + lVar1 + -(longlong)pvVar3 + -10 + 8);
          *(undefined8 *)(pbVar4 + -10) = *(undefined8 *)(pbVar4 + lVar1 + -(longlong)pvVar3 + -10);
          *(undefined8 *)(pbVar4 + -2) = uVar2;
          *(undefined8 *)(pbVar4 + 6) = *(undefined8 *)(pbVar4 + lVar1 + -(longlong)pvVar3 + 6);
          uVar7 = uVar7 - 1;
          pbVar4 = pbVar4 + 0x18;
        } while (uVar7 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  return 1;
}



// FUNCTION 145562300 FUN_145562300 body=222 status=ok
// SIG undefined FUN_145562300(void)

undefined8 FUN_145562300(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var8 = (ulonglong)(iVar4 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(0,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar6 = puVar7, (undefined8 *)*param_1 != puVar7)) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = 0;
            *(undefined2 *)(puVar6 + 2) = 0;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + (lVar3 - (longlong)puVar7));
          uVar5 = puVar1[1];
          *puVar6 = *puVar1;
          puVar6[1] = uVar5;
          puVar6[2] = *(undefined8 *)((longlong)puVar6 + lVar3 + (0x10 - (longlong)puVar7));
          puVar6 = puVar6 + 3;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1455623c1;
    }
  }
  else {
    puVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
LAB_1455623c1:
      *param_1 = (longlong)puVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1455623e0 FUN_1455623e0 body=199 status=ok
// SIG undefined FUN_1455623e0(void)

int * FUN_1455623e0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  
  piVar4 = (int *)*param_1;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  piVar1 = piVar4 + uVar6 * 6;
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 6) {
  }
  piVar5 = piVar4 + 2;
  if (piVar4 == piVar1) {
    piVar5 = (int *)0x0;
  }
  if (piVar5 == (int *)0x0) {
    if ((uVar6 < *(uint *)((longlong)param_1 + 0xc)) || (cVar3 = FUN_145562300(), cVar3 != '\0')) {
      if (uVar6 < *(uint *)((longlong)param_1 + 0xc)) {
        piVar1 = (int *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
        if (piVar1 != (int *)0x0) {
          piVar1[2] = 0;
          piVar1[3] = 0;
          *(undefined2 *)(piVar1 + 4) = 0;
          *piVar1 = param_2;
          uVar2 = param_3[1];
          *(undefined8 *)(piVar1 + 2) = *param_3;
          *(undefined8 *)(piVar1 + 4) = uVar2;
          return piVar1 + 2;
        }
      }
      piVar5 = (int *)0x0;
    }
  }
  else {
    uVar2 = param_3[1];
    *(undefined8 *)piVar5 = *param_3;
    *(undefined8 *)(piVar5 + 2) = uVar2;
  }
  return piVar5;
}



// FUNCTION 1455624b0 FUN_1455624b0 body=353 status=ok
// SIG undefined FUN_1455624b0(void)

undefined8 FUN_1455624b0(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __uint64 _Var5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  _Var5 = (ulonglong)uVar8 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(0,_Var5);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (puVar3 = puVar4, (undefined8 *)*param_1 != puVar4)) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0xffffffff;
        }
        piVar1 = (int *)*puVar3;
        lVar2 = *param_1;
        if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
          AK::MemoryMgr::Free(*(int *)((longlong)puVar3 + 0xc),(void *)*puVar3);
        }
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        piVar1 = *(int **)((longlong)puVar3 + (lVar2 - (longlong)puVar4));
        *puVar3 = piVar1;
        *(undefined4 *)(puVar3 + 1) =
             *(undefined4 *)((longlong)puVar3 + ((lVar2 + 8) - (longlong)puVar4));
        *(undefined4 *)((longlong)puVar3 + 0xc) =
             *(undefined4 *)((longlong)puVar3 + ((lVar2 + 0xc) - (longlong)puVar4));
        if (piVar1 != (int *)0x0) {
          *piVar1 = *piVar1 + 1;
        }
        puVar7 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar4));
        piVar1 = (int *)*puVar7;
        if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
          AK::MemoryMgr::Free(*(int *)((longlong)puVar7 + 0xc),(void *)*puVar7);
        }
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        puVar3 = puVar3 + 2;
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    puVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var5);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  *param_1 = (longlong)puVar4;
  return 1;
}



// FUNCTION 145562620 FUN_145562620 body=112 status=ok
// SIG undefined FUN_145562620(void)

undefined8 * FUN_145562620(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  
  FUN_1453a4670(param_1,param_3);
  param_1[0x13] = param_2;
  *param_1 = &PTR_LAB_149daa398;
  param_1[3] = &PTR_LAB_149daa4c0;
  param_1[5] = &PTR_FUN_149daa4d0;
  FUN_145560030(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x1f) = 1;
  if (param_1[0x13] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x13] + 0x24);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145562690 FUN_145562690 body=301 status=ok
// SIG undefined FUN_145562690(void)

ulonglong FUN_145562690(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char local_28 [4];
  int local_24;
  undefined1 local_20 [8];
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar3 = FUN_1450ef0e0();
  if ((int)uVar3 == 1) {
    plVar1 = (longlong *)param_1[2];
    if (plVar1 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined4 *)(param_1[0x13] + 0x20));
    }
    if (param_2 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x58);
    }
    uVar3 = FUN_145560080(param_1 + 0x14,param_1[0x13],*(undefined4 *)(param_1[0xd] + 0x2c),uVar6,
                          uVar4);
    if ((int)uVar3 == 1) {
      lVar5 = FUN_145562ac0(param_1,local_28);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x20) != 0)) {
        if (local_28[0] == '\0') {
          local_18 = 0;
        }
        else {
          local_18 = FUN_1453a9e20(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x80));
          local_18 = -local_18;
        }
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        iVar2 = (**(code **)(*param_1 + 0x98))(param_1,0,0,&local_18,&local_24,local_20,0,0);
        param_1[0xe] = (longlong)local_24;
        return (ulonglong)(2 - (iVar2 != 0));
      }
      uVar3 = 2;
    }
  }
  return uVar3;
}



// FUNCTION 1455627e0 FUN_1455627e0 body=66 status=ok
// SIG undefined FUN_1455627e0(void)

bool FUN_1455627e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = 0;
  if ((*(char *)(param_1 + 0xd0) != '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x80), lVar2 = FUN_145562ac0(param_1,local_res8),
     lVar2 == lVar1)) {
    lVar2 = 0;
  }
  return lVar2 != 0;
}



// FUNCTION 145562830 FUN_145562830 body=275 status=ok
// SIG undefined FUN_145562830(void)

void FUN_145562830(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  uVar5 = 0;
  puVar2 = (undefined8 *)param_1[0x11];
  puVar7 = (undefined8 *)param_1[0x11];
  while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
    if (param_2 <= (longlong)puVar4[1]) goto LAB_1455628d0;
    puVar7 = puVar4;
    puVar2 = (undefined8 *)*puVar4;
  }
  if (puVar7 != (undefined8 *)0x0) {
    lVar1 = puVar7[1];
    puVar2 = puVar7;
    while (puVar4 = puVar2, lVar1 < param_2) {
      if ((char)param_1[0x1a] == '\0') {
        return;
      }
      lVar1 = param_1[0x10];
      lVar3 = FUN_145562ac0(param_1,local_res8);
      if (lVar3 == lVar1) {
        return;
      }
      if (lVar3 == 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      if (0x40 < uVar6) goto LAB_14556291e;
      puVar2 = (undefined8 *)*puVar4;
      puVar7 = puVar4;
      lVar1 = ((undefined8 *)*puVar4)[1];
    }
LAB_1455628d0:
    do {
      uVar5 = uVar5 + 1;
      if (puVar4 == (undefined8 *)0x0) {
        if ((char)param_1[0x1a] == '\0') {
          return;
        }
        lVar1 = param_1[0x10];
        lVar3 = FUN_145562ac0(param_1,local_res8);
        if (lVar3 == lVar1) {
          return;
        }
        if (lVar3 == 0) {
          return;
        }
        uVar6 = uVar6 + 1;
        if (0x40 < uVar6) {
LAB_14556291e:
          (**(code **)(*param_1 + 0x108))(param_1);
          return;
        }
        puVar7 = (undefined8 *)*puVar7;
        puVar2 = (undefined8 *)*puVar7;
      }
      else {
        puVar2 = (undefined8 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar2;
    } while (uVar5 < 3);
  }
  return;
}



// FUNCTION 145562970 FUN_145562970 body=178 status=ok
// SIG undefined FUN_145562970(void)

int FUN_145562970(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    uVar3 = *(ushort *)(param_3 + 0x14) & 7;
    if ((((uVar3 == 2) || (uVar3 == 3)) && (param_4 != 0)) && (*(int *)(param_4 + 0x10) != 0)) {
      lVar2 = FUN_145563080(param_1,uVar3,param_4);
      goto LAB_145562a0a;
    }
  }
  if (param_2 == 0) {
    lVar2 = param_1[0x11];
  }
  else {
    FUN_1453a5210();
    iVar1 = FUN_145560320(param_1 + 0x14,param_2,param_4);
    if (iVar1 == 1) {
      lVar2 = FUN_145562ac0(param_1,local_res18);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) == 0)) {
        FUN_1453a5210(param_1);
        lVar2 = 0;
      }
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x108))();
    }
  }
LAB_145562a0a:
  return 2 - (uint)(lVar2 != 0);
}



// FUNCTION 145562a30 FUN_145562a30 body=101 status=ok
// SIG undefined FUN_145562a30(void)

void FUN_145562a30(longlong param_1)

{
  longlong *plVar1;
  int *local_18;
  int local_c;
  
  FUN_145560850(param_1 + 0xa0,&local_18);
  if (local_18 != (int *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x78))
                (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x20),&local_18);
    }
    if ((local_18 != (int *)0x0) && (*local_18 = *local_18 + -1, *local_18 == 0)) {
      AK::MemoryMgr::Free(local_c,local_18);
    }
  }
  return;
}



// FUNCTION 145562ac0 FUN_145562ac0 body=565 status=ok
// SIG undefined FUN_145562ac0(void)

longlong FUN_145562ac0(longlong *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  void *local_38;
  
  *param_2 = 0;
  if (((*(byte *)((longlong)param_1 + 0x62) & 0xf) < 2) && ((char)param_1[0x1a] != '\0')) {
    uVar1 = (undefined4)param_1[0x19];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xcc);
    FUN_145560690(param_1 + 0x14);
    lVar6 = param_1[0x10];
    uVar7 = 0;
    if (lVar6 != 0) {
      if (*(longlong *)(lVar6 + 0x20) == 0) goto LAB_145562cf1;
      uVar7 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x80) + 0x20);
    }
    lVar5 = FUN_1450f2e50(param_1[0x13],uVar7,uVar1);
    lVar3 = *(longlong *)(lVar5 + 0x50);
    if (lVar3 == 0) {
      *param_2 = *(byte *)(lVar5 + 0x48) >> 6 & 1;
      lVar6 = FUN_145562d00(param_1,lVar5,lVar6,uVar1,uVar2);
    }
    else {
      local_68 = *(undefined8 *)(lVar5 + 0x20);
      uStack_60 = *(undefined8 *)(lVar5 + 0x28);
      local_58 = *(uint *)(lVar5 + 0x30);
      local_88 = (void *)0x0;
      local_80 = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_38 = (void *)0x0;
      local_54 = *(undefined8 *)(lVar3 + 4);
      uStack_4c = *(undefined4 *)(lVar3 + 0xc);
      uVar4 = local_44._4_2_ & 0xff07;
      uStack_48 = 0;
      local_44._0_6_ = CONCAT24((*(ushort *)(lVar3 + 0x1c) & 1) << 6 | uVar4,(undefined4)local_44);
      *param_2 = *(byte *)(lVar3 + 0x1c) & 1;
      lVar6 = FUN_145562d00(param_1,&local_88,lVar6,**(undefined4 **)(lVar5 + 0x50),0);
      if (lVar6 != 0) {
        if (*(longlong *)(lVar6 + 0x20) == 0) {
          lVar6 = (**(code **)(*param_1 + 0x108))();
        }
        else {
          lVar3 = *(longlong *)(lVar5 + 0x50);
          local_44 = *(undefined8 *)(lVar5 + 0x44);
          local_58 = local_58 & 0xffffffe7 | 7;
          local_68 = *(undefined8 *)(lVar3 + 0x10);
          local_54 = *(undefined8 *)(lVar5 + 0x34);
          uStack_4c = *(undefined4 *)(lVar5 + 0x3c);
          uStack_48 = *(undefined4 *)(lVar5 + 0x40);
          uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar3 + 0x18));
          local_58 = (*(int *)(lVar3 + 0x1c) << 4 ^ local_58) & 0x20 ^ local_58;
          FUN_145562d00(param_1,&local_88,lVar6,uVar1,uVar2);
        }
      }
      if (local_38 != (void *)0x0) {
        AK::MemoryMgr::Free(2,local_38);
      }
      if (local_88 != (void *)0x0) {
        local_80 = local_80 & 0xffffffff00000000;
        AK::MemoryMgr::Free(0,local_88);
        local_88 = (void *)0x0;
        local_80 = local_80 & 0xffffffff;
      }
      if (local_78 != (void *)0x0) {
        local_70 = local_70 & 0xffffffff00000000;
        AK::MemoryMgr::Free(0,local_78);
      }
    }
  }
  else {
LAB_145562cf1:
    lVar6 = 0;
  }
  return lVar6;
}



// FUNCTION 145562d00 FUN_145562d00 body=892 status=ok
// SIG undefined FUN_145562d00(void)

longlong FUN_145562d00(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                      undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined4 local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  int local_res20 [2];
  
  lVar5 = 0;
  iVar9 = 0;
  if (param_3 != 0) {
    local_res18 = *(longlong *)(param_3 + 8);
    local_res8[0] = *(undefined4 *)(param_2 + 0x2c);
    uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0x80);
    FUN_1453a9a60(uVar3,0,*(uint *)(param_2 + 0x30) & 0x1f,local_res8,1,local_res10);
    iVar9 = *(int *)(param_2 + 0x20);
    iVar7 = *(int *)(param_2 + 0x28) -
            (int)((longlong)((ulonglong)DAT_14c72f42c * (longlong)iVar9) / 1000);
    if (iVar7 < -local_res10[0]) {
      dVar13 = ((double)(*(int *)(param_2 + 0x28) + local_res10[0]) * 1000.0) /
               (double)DAT_14c72f42c;
      if (dVar13 <= 0.0) {
        dVar12 = -0.5;
      }
      else {
        dVar12 = 0.5;
      }
      iVar9 = (int)(dVar13 + dVar12);
      iVar7 = -local_res10[0];
    }
    if (((iVar7 == 0) && (iVar9 == 0)) && ((*(byte *)(param_2 + 0x30) & 0x20) != 0)) {
      iVar7 = FUN_1453a9e30(uVar3);
    }
    iVar4 = FUN_1453a9e50(uVar3);
    FUN_1450f0250(param_3,iVar9,*(undefined4 *)(param_2 + 0x24),iVar4 + iVar7);
    lVar5 = local_res18;
    iVar9 = local_res10[0];
  }
  piVar2 = DAT_14c791060;
  lVar11 = 0;
  local_res20[0] = 0;
  lVar10 = 0;
  piVar1 = (int *)(param_2 + 0x34);
  if (param_4 != 0) {
    do {
      while (iVar7 = *piVar2, iVar7 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
        if (*piVar2 < 0) goto LAB_145562e6f;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
      }
      LOCK();
      iVar4 = *piVar2;
      if (iVar7 == iVar4) {
        *piVar2 = iVar7 + 1;
      }
      UNLOCK();
    } while (iVar7 != iVar4);
LAB_145562e6f:
    if (piVar2[0x12] == 0) {
      lVar10 = 0;
    }
    else {
      for (lVar10 = *(longlong *)
                     (*(longlong *)(piVar2 + 0x10) +
                     ((ulonglong)param_4 % (ulonglong)(uint)piVar2[0x12]) * 8); lVar10 != 0;
          lVar10 = *(longlong *)(lVar10 + 8)) {
        if (*(uint *)(lVar10 + 0x10) == param_4) goto LAB_145562ea2;
      }
      lVar10 = 0;
LAB_145562ea2:
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar7 = *piVar2;
    while (-1 < iVar7) {
      LOCK();
      iVar4 = *piVar2;
      if (iVar7 == iVar4) {
        *piVar2 = iVar7 + -1;
      }
      UNLOCK();
      if (iVar7 == iVar4) {
        if ((iVar7 + -1 == 0) && (0 < piVar2[0xc])) {
          SetEvent(*(HANDLE *)(piVar2 + 0xe));
        }
        goto LAB_145562efd;
      }
      iVar7 = *piVar2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
LAB_145562efd:
    lVar8 = lVar10 + -0x10;
    if (lVar10 == 0) {
      lVar8 = 0;
    }
    if (lVar8 == 0) {
      *(undefined1 *)(param_1 + 0x1a) = 0;
      lVar5 = FUN_1453a5160(param_1,iVar9 + lVar5,0);
      goto LAB_145562ff5;
    }
    FUN_1453a9d90(lVar8,piVar1,0,0,&local_res18,local_res20);
    lVar11 = param_1[0xd];
    lVar10 = FUN_1453a99a0(lVar8,param_1,*(undefined8 *)(lVar11 + 0x30),lVar11 + 0x18,
                           *(undefined1 *)(lVar11 + 0x38));
    if (lVar10 == 0) {
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
    else {
      *(undefined4 *)(lVar10 + 0xa8) = param_5;
    }
    LOCK();
    piVar2 = (int *)(lVar8 + 0x24);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))();
    }
  }
  lVar5 = FUN_1453a5160(param_1,iVar9 + lVar5,lVar10);
  lVar11 = lVar10;
  if (lVar10 != 0) {
    FUN_1450ed1a0(lVar10);
  }
LAB_145562ff5:
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x108))(param_1);
  }
  else if (lVar11 != 0) {
    iVar9 = FUN_1453a9e20(*(undefined8 *)(lVar11 + 0x80));
    bVar6 = *(byte *)(param_2 + 0x48) >> 6 & 1;
    if (*piVar1 < 1) {
      iVar7 = local_res20[0];
      if (bVar6 != 0) {
        iVar7 = local_res20[0] - iVar9;
      }
    }
    else {
      iVar7 = local_res20[0] + *(int *)(param_2 + 0x3c);
      if ((iVar7 < 0) && (bVar6 == 0)) {
        iVar7 = 0;
      }
    }
    iVar9 = FUN_1450f0080(lVar5,local_res20[0],iVar7);
    FUN_1450f0230(lVar5,*piVar1,*(undefined4 *)(param_2 + 0x38),*(int *)(param_2 + 0x3c) + iVar9);
  }
  return lVar5;
}



// FUNCTION 145563080 FUN_145563080 body=342 status=ok
// SIG undefined FUN_145563080(void)

longlong FUN_145563080(longlong *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_res8 [8];
  
  FUN_145560200(param_1 + 0x14);
  cVar2 = FUN_145561a30(param_1 + 0x14);
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001455630c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(*param_1 + 0x108))();
    return lVar3;
  }
  FUN_1453a5210(param_1);
  if ((char)param_1[0x1a] == '\0') {
    bVar1 = true;
  }
  else if (((param_1[0x10] == 0) || (*(longlong *)(param_1[0x10] + 0x20) == 0)) &&
          ((int)param_1[0x19] == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_2 == 3) {
    if (((!bVar1) &&
        (thunk_FUN_145560db0(param_1 + 0x14,0,param_1,param_1), (char)param_1[0x1a] != '\0')) &&
       (((lVar3 = param_1[0x10], lVar3 != 0 && (*(longlong *)(lVar3 + 0x20) != 0)) ||
        ((int)param_1[0x19] != 0)))) {
LAB_145563154:
      lVar3 = FUN_145562ac0(param_1,local_res8);
      if (lVar3 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        return lVar3;
      }
      FUN_1453a5210(param_1);
      return 0;
    }
  }
  else if (!bVar1) goto LAB_145563154;
  lVar3 = param_1[0x10];
  uVar5 = 0;
  if (lVar3 != 0) {
    uVar5 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x80) + 0x20);
  }
  uVar4 = FUN_1450f2e50(param_1[0x13],uVar5,0);
  lVar3 = FUN_145562d00(param_1,uVar4,lVar3,0,0);
  return lVar3;
}



// FUNCTION 1455631e0 FUN_1455631e0 body=170 status=ok
// SIG undefined FUN_1455631e0(void)

void FUN_1455631e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *local_18;
  int local_c;
  
  if (((*(char *)(param_1 + 0xd0) == '\0') ||
      (((*(longlong *)(param_1 + 0x80) == 0 ||
        (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) == 0)) &&
       (*(int *)(param_1 + 200) == 0)))) && (*(longlong *)(param_1 + 0x38) == 0)) {
    FUN_145561960(param_1 + 0xa0,&local_18);
    if (local_18 != (int *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x10);
      if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x98) != 0)) {
        (**(code **)(*plVar1 + 0x78))
                  (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x20),&local_18);
      }
      if ((local_18 != (int *)0x0) && (*local_18 = *local_18 + -1, *local_18 == 0)) {
        AK::MemoryMgr::Free(local_c,local_18);
      }
    }
  }
  FUN_1450ed370(param_1,param_2);
  return;
}



// FUNCTION 1455632a0 FUN_1455632a0 body=159 status=ok
// SIG undefined FUN_1455632a0(void)

undefined8 * FUN_1455632a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149daa398;
  param_1[3] = &PTR_LAB_149daa4c0;
  param_1[5] = &PTR_FUN_149daa4d0;
  FUN_145560200(param_1 + 0x14);
  lVar3 = param_1[0x13];
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  FUN_145560070(param_1 + 0x14);
  FUN_1453a46c0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 145563350 FUN_145563350 body=77 status=ok
// SIG undefined FUN_145563350(void)

int FUN_145563350(int param_1)

{
  double dVar1;
  
  dVar1 = ((double)param_1 * 1000.0) / (double)DAT_14c72f42c;
  if (0.0 < dVar1) {
    return (int)(dVar1 + 0.5);
  }
  return (int)(dVar1 + -0.5);
}



// FUNCTION 1455633b0 FUN_1455633b0 body=54 status=ok
// SIG undefined FUN_1455633b0(void)

void FUN_1455633b0(longlong param_1)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_1450ed1a0();
  }
  FUN_1453a4850(param_1);
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 145563400 `scalar_deleting_destructor' body=84 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxy * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxy::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxy::_scalar_deleting_destructor_
          (UMSFreeThreadProxy *this,uint param_1)

{
  *(undefined ***)this = &PTR_LAB_149daa4d8;
  *(undefined ***)(this + 0x18) = &PTR_LAB_149daa600;
  *(undefined ***)(this + 0x28) = &PTR_FUN_149daa610;
  FUN_1453a46c0();
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0xa0);
  }
  return this;
}



// FUNCTION 145563460 FUN_145563460 body=110 status=ok
// SIG undefined FUN_145563460(void)

void FUN_145563460(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  
  *param_1 = &PTR_LAB_149daa618;
  if ((param_1[8] != 0) && (lVar1 = *(longlong *)(param_1[8] + 0x80), lVar1 != 0)) {
    if ((*(longlong *)(lVar1 + 0x178) == 0) || (*(longlong *)(lVar1 + 0x170) == 0)) {
      local_res8 = 0x800000000;
    }
    else {
      local_res8 = (ulonglong)
                   CONCAT14(*(undefined1 *)
                             ((ulonglong)*(uint *)((longlong)param_1 + 0xc) +
                             *(longlong *)(lVar1 + 0x178)),
                            *(undefined4 *)
                             (*(longlong *)(lVar1 + 0x170) +
                             (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 4));
    }
    FUN_14507ee00(g_pGameSyncMgr,local_res8,param_1);
    return;
  }
  return;
}



// FUNCTION 1455634e0 FUN_1455634e0 body=227 status=ok
// SIG undefined FUN_1455634e0(void)

void FUN_1455634e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *in_stack_00000028;
  undefined8 local_18;
  undefined1 local_10;
  
  if (*(int *)(param_1 + 8) != (int)*in_stack_00000028) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(int *)(param_1 + 8) = (int)*in_stack_00000028;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((lVar2 != 0) &&
       (((*(longlong **)(lVar2 + 0xa8) != (longlong *)0x0 && (**(longlong **)(lVar2 + 0xa8) != 0))
        || ((*(longlong *)(lVar2 + 0x10) != 0 && (cVar3 = FUN_1455661a0(), cVar3 != '\0')))))) {
      *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) | 1;
      return;
    }
    *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) & 0xfe;
    local_18 = 0;
    local_10 = 0;
    if ((*(byte *)(lVar1 + 0x62) & 0xf) < 2) {
      uVar4 = FUN_145564890(lVar1);
      in_stack_00000028 = (longlong *)FUN_145565e90(lVar1,uVar4);
      if ((in_stack_00000028 != (longlong *)0x0) &&
         (FUN_145564940(lVar1,uVar4,&local_18,&stack0x00000028),
         in_stack_00000028 != (longlong *)0x0)) {
        (**(code **)(*in_stack_00000028 + 0x68))();
      }
    }
    FUN_1455661d0(*(undefined8 *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1455635d0 FUN_1455635d0 body=52 status=ok
// SIG undefined FUN_1455635d0(void)

undefined8 FUN_1455635d0(undefined8 param_1,ulonglong param_2)

{
  FUN_145563460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145563610 FUN_145563610 body=158 status=ok
// SIG undefined FUN_145563610(void)

undefined8 * FUN_145563610(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  
  FUN_1450ef060(param_1,param_3);
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfc;
  *param_1 = &PTR_LAB_149daa630;
  param_1[0x10] = param_2;
  param_1[3] = &PTR_LAB_149daa720;
  param_1[5] = &PTR_FUN_149daa730;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (param_1[0x10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x10] + 0x24);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1455636b0 FUN_1455636b0 body=875 status=ok
// SIG undefined FUN_1455636b0(void)

int FUN_1455636b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined **local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  longlong lStack_38;
  
  iVar11 = FUN_1450ef0e0();
  if (iVar11 == 1) {
    plVar1 = (longlong *)(param_1 + 0x88);
    FUN_145566230(plVar1);
    local_90 = *(uint *)(*(longlong *)(param_1 + 0x80) + 0x150);
    if (local_90 != 0) {
      if ((*(uint *)(param_1 + 0x94) < local_90) &&
         (cVar10 = FUN_1455662a0(plVar1,local_90 - *(uint *)(param_1 + 0x94)), cVar10 == '\0')) {
        return 0x34;
      }
      uVar13 = 0;
      while( true ) {
        uVar14 = (uint)uVar13;
        if (local_90 <= uVar14) break;
        uVar3 = *(uint *)(param_1 + 0x90);
        uVar4 = *(uint *)(param_1 + 0x94);
        local_78 = &PTR_LAB_149daa618;
        uStack_6c = 0xffffffff;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = CONCAT71(uStack_50._1_7_,0xff);
        local_48 = CONCAT31(local_48._1_3_,0xff);
        uStack_40 = 0;
        lStack_38 = 0;
        if (uVar3 < uVar4) {
LAB_1455637ae:
          if (uVar3 < *(uint *)(param_1 + 0x94)) {
            puVar2 = (undefined8 *)(*plVar1 + (ulonglong)*(uint *)(param_1 + 0x90) * 0x48);
            *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) + 1;
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = &PTR_LAB_149daa618;
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0xffffffff;
              puVar2[2] = 0;
              *(undefined4 *)(puVar2 + 3) = 0;
              *(undefined4 *)(puVar2 + 4) = 0;
              *(undefined1 *)(puVar2 + 5) = 0xff;
              *(undefined1 *)(puVar2 + 6) = 0xff;
              puVar2[7] = 0;
              puVar2[8] = 0;
              *(undefined4 *)(puVar2 + 1) = uStack_70;
              *(uint *)((longlong)puVar2 + 0xc) = uStack_6c;
              puVar2[2] = local_68;
              puVar2[3] = CONCAT44(uStack_5c,uStack_60);
              puVar2[4] = CONCAT44(uStack_54,local_58);
              puVar2[5] = uStack_50;
              *(undefined4 *)(puVar2 + 6) = local_48;
              *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_44;
              *(undefined4 *)(puVar2 + 7) = (undefined4)uStack_40;
              *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_40._4_4_;
              puVar2[8] = lStack_38;
            }
          }
        }
        else {
          iVar11 = (uVar4 >> 1) + uVar4;
          if (uVar4 == 0) {
            iVar11 = 1;
          }
          cVar10 = FUN_1455662a0(plVar1,iVar11);
          if (cVar10 != '\0') goto LAB_1455637ae;
        }
        local_78 = &PTR_LAB_149daa618;
        if ((lStack_38 != 0) && (lVar5 = *(longlong *)(lStack_38 + 0x80), lVar5 != 0)) {
          if ((*(longlong *)(lVar5 + 0x178) == 0) || (*(longlong *)(lVar5 + 0x170) == 0)) {
            local_88 = 0x800000000;
          }
          else {
            local_88._0_5_ =
                 CONCAT14(*(undefined1 *)((ulonglong)uStack_6c + *(longlong *)(lVar5 + 0x178)),
                          *(undefined4 *)(*(longlong *)(lVar5 + 0x170) + (ulonglong)uStack_6c * 4));
          }
          FUN_14507ee00(g_pGameSyncMgr,local_88,&local_78);
        }
        uVar8 = local_68 >> 0x20;
        local_68 = local_68 & 0xffffffff00000000;
        uStack_60 = CONCAT31(uStack_60._1_3_,0xff);
        local_58 = CONCAT31(local_58._1_3_,0xff);
        lVar5 = *plVar1 + uVar13 * 0x48;
        uStack_50 = 0;
        *(undefined4 *)(lVar5 + 8) = 0;
        *(uint *)(lVar5 + 0xc) = uVar14;
        *(longlong *)(lVar5 + 0x40) = param_1;
        local_78 = *(undefined ***)(*(longlong *)(param_1 + 0x68) + 0x30);
        uStack_70 = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x2c);
        *(undefined ***)(lVar5 + 0x10) = local_78;
        *(ulonglong *)(lVar5 + 0x18) = CONCAT44(uStack_6c,uStack_70);
        *(undefined4 *)(lVar5 + 0x20) = 0;
        *(int *)(lVar5 + 0x24) = (int)uVar8;
        *(undefined4 *)(lVar5 + 0x28) = uStack_60;
        *(undefined4 *)(lVar5 + 0x2c) = uStack_5c;
        *(undefined4 *)(lVar5 + 0x30) = local_58;
        *(undefined4 *)(lVar5 + 0x34) = uStack_54;
        *(undefined4 *)(lVar5 + 0x38) = 0;
        *(undefined4 *)(lVar5 + 0x3c) = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x178);
        if ((lVar6 == 0) ||
           (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170), lVar7 == 0)) {
          local_98 = (longlong *)0x800000000;
        }
        else {
          local_98._0_5_ =
               CONCAT14(*(undefined1 *)(lVar6 + uVar13),*(undefined4 *)(lVar7 + uVar13 * 4));
        }
        uVar9 = local_98;
        iVar11 = FUN_14507ec00(g_pGameSyncMgr,local_98,lVar5);
        if (iVar11 != 1) {
          return iVar11;
        }
        uVar12 = FUN_14507fe40(g_pGameSyncMgr,lVar5 + 0x10,uVar9);
        uVar13 = (ulonglong)(uVar14 + 1);
        *(undefined4 *)(lVar5 + 8) = uVar12;
      }
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 2;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      iVar11 = FUN_145564650(param_1,1);
      if (iVar11 == 1) {
        *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
        local_88 = 0;
        local_80 = 0;
        if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
          uVar12 = FUN_145564890(param_1);
          local_98 = (longlong *)FUN_145565e90(param_1,uVar12);
          if ((local_98 != (longlong *)0x0) &&
             (FUN_145564940(param_1,uVar12,&local_88,&local_98), local_98 != (longlong *)0x0)) {
            (**(code **)(*local_98 + 0x68))();
          }
        }
      }
    }
    else {
      iVar11 = FUN_145564650(param_1,0);
    }
  }
  return iVar11;
}



// FUNCTION 145563a20 FUN_145563a20 body=199 status=ok
// SIG undefined FUN_145563a20(void)

undefined8 FUN_145563a20(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_res8;
  undefined1 local_resc;
  longlong *local_res10;
  int *local_18;
  undefined1 local_10;
  
  local_resc = 0;
  iVar2 = (int)((longlong)((longlong)*param_2 * (ulonglong)DAT_14c72f42c) / 1000);
  local_res8 = 0;
  if (-1 < iVar2) {
    local_res8 = iVar2;
  }
  if (((*(byte *)(param_1 + 0x62) & 0xf) < 2) && (*(longlong *)(param_1 + 0x10) == 0)) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
    local_18 = &local_res8;
    local_10 = 0;
    uVar1 = FUN_145564890();
    local_res10 = (longlong *)FUN_145565e90(param_1,uVar1);
    if (local_res10 != (longlong *)0x0) {
      FUN_145564940(param_1,uVar1,&local_18,&local_res10);
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x68))();
      }
    }
    return 1;
  }
  return 2;
}



// FUNCTION 145563af0 FUN_145563af0 body=158 status=ok
// SIG undefined FUN_145563af0(void)

undefined8 FUN_145563af0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_res8;
  undefined1 local_resc;
  longlong *local_res10;
  undefined4 *local_18;
  undefined1 local_10;
  
  local_res8 = *param_2;
  local_resc = 1;
  if (((*(byte *)(param_1 + 0x62) & 0xf) < 2) && (*(longlong *)(param_1 + 0x10) == 0)) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
    local_18 = &local_res8;
    local_10 = 0;
    uVar1 = FUN_145564890();
    local_res10 = (longlong *)FUN_145565e90(param_1,uVar1);
    if (local_res10 != (longlong *)0x0) {
      FUN_145564940(param_1,uVar1,&local_18,&local_res10);
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x68))();
      }
    }
    return 1;
  }
  return 2;
}



// FUNCTION 145563b90 FUN_145563b90 body=47 status=ok
// SIG undefined FUN_145563b90(void)

void FUN_145563b90(longlong param_1)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if ((longlong *)puVar1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[1] + 0x68))();
    }
  }
  return;
}



// FUNCTION 145563bc0 FUN_145563bc0 body=782 status=ok
// SIG undefined FUN_145563bc0(void)

void FUN_145563bc0(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint local_res18;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [48];
  undefined1 local_168 [264];
  longlong local_60 [5];
  
  lVar10 = *(longlong *)(param_1 + 0x70);
  *param_4 = *param_4 - lVar10;
  param_2 = param_2 - lVar10;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  uVar11 = (ulonglong)param_3;
  local_res18 = param_3;
  if ((*(byte *)(param_1 + 0x62) & 2) != 0) {
    if (*(int *)(param_1 + 0x5c) != -1) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x5c);
    }
    local_res18 = (uint)uVar11;
  }
  lVar10 = uVar11 + param_2;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  puVar4 = (undefined8 *)0x0;
  while (puVar3 = puVar4, puVar4 = puVar1, puVar4 != (undefined8 *)0x0) {
    if ((param_2 <= *(longlong *)(puVar4[1] + 0x70)) && (*(longlong *)(puVar4[1] + 0x70) < lVar10))
    {
      *(undefined8 **)(param_1 + 0xa8) = puVar4;
      uVar6 = FUN_1450f0ff0(*(undefined8 *)(param_1 + 0x68));
      if ((uVar6 >> 0xe & 1) != 0) {
        FUN_1453a5380(local_168,param_1,0);
        lVar2 = local_60[0];
        if (local_60[0] != 0) {
          lVar12 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x10) != 0) {
            lVar7 = FUN_1450ef3d0();
            lVar12 = lVar12 + lVar7;
          }
          uVar9 = 0;
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
          if (*(longlong *)(lVar2 + 0x20) != 0) {
            lVar8 = FUN_1453a5aa0(local_168);
            uVar9 = FUN_1453a4630(local_60,(lVar7 - lVar12) - lVar8);
          }
          FUN_1450efe30(lVar2,uVar9,local_198,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x54))
          ;
          FUN_1450b3380(DAT_14c790fc0,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x2c),0x4000,
                        local_198);
          uVar11 = (ulonglong)local_res18;
        }
        FUN_1453a5440(local_168);
      }
      FUN_1455661d0(param_1);
    }
    if (((*(byte *)(puVar4 + 9) & 2) == 0) &&
       ((((*(byte *)(puVar4[1] + 0x62) & 3) == 0 || ((*(byte *)(puVar4[1] + 0x62) & 0x10) != 0)) &&
        ((*(byte *)(puVar4 + 9) & 1) == 0)))) {
      puVar1 = (undefined8 *)*puVar4;
      if (puVar4 != *(undefined8 **)(param_1 + 0xa8)) {
        if (puVar4 == *(undefined8 **)(param_1 + 0xa0)) {
          *(undefined8 **)(param_1 + 0xa0) = puVar1;
        }
        else {
          *puVar3 = puVar1;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x98)) {
          *(undefined8 **)(param_1 + 0x98) = puVar3;
        }
        lVar2 = puVar4[1];
        puVar4[1] = 0;
        if (lVar2 != 0) {
          FUN_1450ed1a0();
        }
        if (puVar4[1] != 0) {
          FUN_1450ed1a0();
          puVar4[1] = 0;
        }
        AK::MemoryMgr::Free(0,puVar4);
        puVar4 = puVar3;
      }
    }
    else {
      local_1a8 = *param_4;
      uStack_1a0 = (undefined4)param_4[1];
      uStack_19c = *(undefined4 *)((longlong)param_4 + 0xc);
      bVar5 = *(byte *)(puVar4 + 9);
      if ((((bVar5 & 1) != 0) && (param_2 <= (longlong)puVar4[4])) && ((longlong)puVar4[4] < lVar10)
         ) {
        FUN_1450ed630(puVar4[1],puVar4 + 5);
        bVar5 = *(byte *)(puVar4 + 9) & 0xfe;
        *(byte *)(puVar4 + 9) = bVar5;
      }
      if ((((bVar5 & 2) != 0) && ((longlong)puVar4[7] < lVar10)) && (param_2 <= (longlong)puVar4[7])
         ) {
        FUN_1450ed780(puVar4[1],puVar4 + 8);
        *(byte *)(puVar4 + 9) = *(byte *)(puVar4 + 9) & 0xfd;
      }
      if (((*(byte *)(puVar4[1] + 0x62) & 3) != 0) && ((*(byte *)(puVar4[1] + 0x62) & 0x10) == 0)) {
        if (*(char *)(puVar4 + 3) != '\0') {
          lVar2 = puVar4[2];
          if ((char)uStack_1a0 == '\0') {
            uStack_1a0 = CONCAT31(uStack_1a0._1_3_,1);
            local_1a8 = lVar2;
          }
          else if (lVar2 < local_1a8) {
            local_1a8 = lVar2;
          }
        }
        (**(code **)(*(longlong *)puVar4[1] + 0x90))
                  ((longlong *)puVar4[1],param_2,uVar11,&local_1a8);
      }
      puVar1 = (undefined8 *)*puVar4;
    }
  }
  FUN_1450ef380(param_1,param_2,uVar11);
  return;
}



// FUNCTION 145563ef0 FUN_145563ef0 body=328 status=ok
// SIG undefined FUN_145563ef0(void)

void FUN_145563ef0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_res10;
  longlong *local_res20;
  
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + 1;
  FUN_1453a58d0(param_2,&local_res10);
  if (local_res10 == (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x108) == 0) goto LAB_145564022;
    }
    else {
      local_res10 = *(longlong **)(param_1 + 0xa8);
      FUN_1453a5960(param_2,&local_res10);
    }
  }
  (**(code **)(*(longlong *)local_res10[1] + 0xa0))((longlong *)local_res10[1],param_2,param_3);
  local_res10 = (longlong *)*local_res10;
  if (local_res10 != (longlong *)0x0) {
    lVar2 = *(longlong *)(local_res10[1] + 0x70);
    local_res20 = local_res10;
    lVar1 = FUN_1453a5900(param_2);
    if (lVar2 <= lVar1) {
      do {
        FUN_1453a5960(param_2,&local_res20);
        (**(code **)(*(longlong *)local_res20[1] + 0xa0))
                  ((longlong *)local_res20[1],param_2,param_3);
        local_res20 = (longlong *)*local_res20;
        if (local_res20 == (longlong *)0x0) goto LAB_145564022;
        lVar2 = *(longlong *)(local_res20[1] + 0x70);
        lVar1 = FUN_1453a5900(param_2);
      } while (lVar2 <= lVar1);
    }
    if (local_res20 != (longlong *)0x0) {
      lVar1 = FUN_1453a5900(param_2);
      if ((*(char *)(param_2 + 0x128) != '\0') ||
         ((ulonglong)(lVar2 - lVar1) < *(ulonglong *)(param_2 + 0x120))) {
        FUN_1453a5870(param_2,lVar2 - lVar1,0);
      }
    }
  }
LAB_145564022:
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + -1;
  return;
}



// FUNCTION 145564040 FUN_145564040 body=152 status=ok
// SIG undefined FUN_145564040(void)

void FUN_145564040(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *local_res10 [3];
  
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + 1;
  FUN_1453a58d0(param_2,local_res10);
  (**(code **)(*(longlong *)local_res10[0][1] + 0xa8))((longlong *)local_res10[0][1],param_2);
  local_res10[0] = (longlong *)*local_res10[0];
  if (local_res10[0] != (longlong *)0x0) {
    lVar1 = *(longlong *)(local_res10[0][1] + 0x70);
    lVar2 = FUN_1453a5900(param_2);
    uVar3 = lVar1 - lVar2;
    if ((*(char *)(param_2 + 0x128) != '\0') || (uVar3 < *(ulonglong *)(param_2 + 0x120))) {
      FUN_1453a5870(param_2,uVar3,0);
    }
    *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + -1;
    return;
  }
  *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + -1;
  return;
}



// FUNCTION 1455640e0 FUN_1455640e0 body=243 status=ok
// SIG undefined FUN_1455640e0(void)

void FUN_1455640e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_res8;
  longlong local_res20;
  
  plVar2 = *(longlong **)(param_1 + 0xa0);
  if (plVar2 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x10) == 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
      plVar2 = (longlong *)*plVar2;
    }
    (**(code **)(*(longlong *)plVar2[1] + 0xb0))((longlong *)plVar2[1],&local_res8,&local_res20);
    *param_2 = *(longlong *)(plVar2[1] + 0x70) + local_res8;
    *param_3 = *(longlong *)(plVar2[1] + 0x70) + local_res20;
    for (puVar1 = (undefined8 *)*plVar2; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1
        ) {
      (**(code **)(*(longlong *)puVar1[1] + 0xb0))((longlong *)puVar1[1],&local_res8,&local_res20);
      local_res8 = local_res8 + *(longlong *)(puVar1[1] + 0x70);
      if (local_res8 < *param_2) {
        *param_2 = local_res8;
      }
      local_res20 = local_res20 + *(longlong *)(puVar1[1] + 0x70);
      if (local_res20 < *param_3) {
        *param_3 = local_res20;
      }
    }
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}



// FUNCTION 1455641f0 FUN_1455641f0 body=137 status=ok
// SIG undefined FUN_1455641f0(void)

bool FUN_1455641f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 != '\0'))
  {
    uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2,param_3,param_4);
    return (bool)uVar3;
  }
  puVar4 = (undefined4 *)FUN_145566550(param_1 + 0xb8,param_2);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = param_3;
    puVar4[1] = param_4;
  }
  return puVar4 != (undefined4 *)0x0;
}



// FUNCTION 145564280 FUN_145564280 body=172 status=ok
// SIG undefined FUN_145564280(void)

undefined8 FUN_145564280(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if ((plVar2 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar2 + 0x70))(plVar2), cVar4 != '\0'))
  {
    uVar5 = (**(code **)(*plVar2 + 0x78))(plVar2,param_2,param_3);
    return uVar5;
  }
  lVar6 = FUN_145566550(param_1 + 0xb8,param_2);
  uVar5 = 0;
  if (lVar6 != 0) {
    piVar3 = *(int **)(lVar6 + 8);
    if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 == 0)) {
      AK::MemoryMgr::Free(*(int *)(lVar6 + 0x14),*(void **)(lVar6 + 8));
    }
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    piVar3 = (int *)*param_3;
    *(int **)(lVar6 + 8) = piVar3;
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_3 + 1);
    uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(lVar6 + 0x14) = uVar1;
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 + 1;
    }
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 145564330 FUN_145564330 body=140 status=ok
// SIG undefined FUN_145564330(void)

int * FUN_145564330(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 != '\0'))
  {
                    /* WARNING: Could not recover jumptable at 0x000145564371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar3 = (int *)(**(code **)(*plVar1 + 0x88))(plVar1,param_2);
    return piVar3;
  }
  piVar3 = *(int **)(param_1 + 0xb8);
  piVar5 = piVar3 + (ulonglong)*(uint *)(param_1 + 0xc0) * 8;
  for (; (piVar3 != piVar5 && (*piVar3 != param_2)); piVar3 = piVar3 + 8) {
  }
  piVar4 = piVar3 + 2;
  if (piVar3 == piVar5) {
    piVar4 = (int *)0x0;
  }
  return piVar4;
}



// FUNCTION 1455643c0 FUN_1455643c0 body=159 status=ok
// SIG undefined FUN_1455643c0(void)

void FUN_1455643c0(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  longlong *local_res8;
  undefined8 local_18;
  undefined1 local_10;
  
  bVar2 = *(byte *)(param_1 + 0x62) & 0xf;
  if (((*(byte *)(param_1 + 0x62) & 1) == 0) && (bVar2 != 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    local_18 = 0;
    local_10 = 0;
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfe;
    if (bVar2 < 2) {
      uVar1 = FUN_145564890(param_1);
      local_res8 = (longlong *)FUN_145565e90(param_1,uVar1);
      if ((local_res8 != (longlong *)0x0) &&
         (FUN_145564940(param_1,uVar1,&local_18,&local_res8), local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 0x68))();
      }
    }
  }
  FUN_1455661d0(param_1);
  return;
}



// FUNCTION 1455644a0 FUN_1455644a0 body=97 status=ok
// SIG undefined FUN_1455644a0(void)

void FUN_1455644a0(longlong *param_1,int param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) == 0) {
    (**(code **)(*param_1 + 0x60))();
    FUN_1450ed1a0(param_1);
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
    local_res8 = FUN_145563350((int)param_1[0xe] - param_2);
    local_resc = 4;
    FUN_1450ed780(param_1,&local_res8,0xffffffff);
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 145564510 FUN_145564510 body=79 status=ok
// SIG undefined FUN_145564510(void)

void FUN_145564510(longlong param_1)

{
  undefined4 local_18;
  undefined8 local_14;
  
  if ((*(byte *)(param_1 + 0x62) & 0xf) == 0) {
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 8) + 0x70) = 0;
    local_18 = 0;
    local_14 = 4;
    FUN_1450ed630(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),&local_18);
  }
  FUN_1450ed2f0(param_1);
  return;
}



// FUNCTION 145564560 FUN_145564560 body=238 status=ok
// SIG undefined FUN_145564560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145564560(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_145566230(param_1 + 0x88);
  puVar1 = (undefined8 *)(param_1 + 0x98);
  puVar4 = *(undefined8 **)(param_1 + 0xa0);
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    puVar5 = puVar2;
    if (puVar4 == *(undefined8 **)(param_1 + 0xa0)) {
      *(undefined8 **)(param_1 + 0xa0) = puVar2;
      puVar5 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar5;
    if (puVar4 == (undefined8 *)*puVar1) {
      *puVar1 = 0;
    }
    lVar3 = puVar4[1];
    puVar4[1] = 0;
    if (lVar3 != 0) {
      FUN_1450ed1a0();
    }
    if (puVar4[1] != 0) {
      FUN_1450ed1a0();
      puVar4[1] = 0;
    }
    AK::MemoryMgr::Free(0,puVar4);
    puVar4 = puVar2;
  }
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *puVar1 = 0;
  if ((*(byte *)(param_1 + 200) & 2) != 0) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xfd;
    FUN_1450ed1a0(param_1);
  }
  FUN_1450ef350(param_1);
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 145564650 FUN_145564650 body=567 status=ok
// SIG undefined FUN_145564650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145564650(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar3 = 0;
  puVar1 = (undefined8 *)param_1[0x14];
  puVar6 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  while (puVar2 = puVar7, puVar8 = puVar6, puVar7 = puVar1, puVar7 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar7;
    puVar6 = (undefined8 *)*puVar7;
    if (puVar7 == (undefined8 *)param_1[0x14]) {
      param_1[0x14] = (longlong)*puVar7;
      puVar6 = _DAT_00000000;
    }
    _DAT_00000000 = puVar6;
    if (puVar7 == (undefined8 *)param_1[0x13]) {
      param_1[0x13] = 0;
    }
    *puVar7 = 0;
    puVar6 = puVar7;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar2 = puVar7;
      puVar6 = puVar8;
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  if (param_2 == '\0') {
    uVar3 = FUN_145564890(param_1);
  }
  lVar5 = FUN_145565e90(param_1,uVar3);
  puVar1 = _DAT_00000000;
  puVar7 = puVar8;
  if ((lVar5 != 0) && (puVar6 = AK::MemoryMgr::Malloc(0,0x50), puVar6 != (undefined8 *)0x0)) {
    *puVar6 = 0;
    puVar6[1] = lVar5;
    *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + 1;
    *(byte *)(puVar6 + 9) = *(byte *)(puVar6 + 9) & 0xf8;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 4;
    *puVar6 = 0;
    if (param_1[0x14] == 0) {
      param_1[0x14] = (longlong)puVar6;
    }
    else {
      *(undefined8 **)param_1[0x13] = puVar6;
    }
    param_1[0x13] = (longlong)puVar6;
    param_1[0x15] = param_1[0x14];
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iVar4 = (**(code **)(*param_1 + 0x98))(param_1,0,0,&local_28,local_res8,local_res10,0,0);
    puVar1 = _DAT_00000000;
    if (iVar4 != 0) {
      while (puVar8 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar8;
        _DAT_00000000 = puVar6;
        if (puVar8 == puVar7) {
          puVar7 = puVar6;
          _DAT_00000000 = puVar1;
        }
        *(byte *)(puVar8 + 9) = *(byte *)(puVar8 + 9) & 0xfc;
        FUN_1450ed8c0(puVar8[1]);
        lVar5 = puVar8[1];
        puVar8[1] = 0;
        if (lVar5 != 0) {
          FUN_1450ed1a0();
        }
        if (puVar8[1] != 0) {
          FUN_1450ed1a0();
          puVar8[1] = 0;
        }
        AK::MemoryMgr::Free(0,puVar8);
        puVar8 = puVar6;
        puVar1 = _DAT_00000000;
      }
      _DAT_00000000 = puVar1;
      return 1;
    }
  }
  while (puVar7 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar7;
    _DAT_00000000 = (undefined8 *)*puVar7;
    if (puVar7 == puVar8) {
      puVar8 = _DAT_00000000;
      _DAT_00000000 = puVar1;
    }
    *puVar7 = 0;
    if (param_1[0x14] == 0) {
      param_1[0x14] = (longlong)puVar7;
    }
    else {
      *(undefined8 **)param_1[0x13] = puVar7;
    }
    param_1[0x13] = (longlong)puVar7;
    puVar1 = _DAT_00000000;
    puVar7 = puVar6;
  }
  _DAT_00000000 = puVar1;
  return 2;
}



// FUNCTION 145564890 FUN_145564890 body=175 status=ok
// SIG undefined FUN_145564890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145564890(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 auStack_50 [5];
  undefined4 auStack_28 [2];
  undefined8 auStack_20 [3];
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x90);
  uVar3 = uVar5 * 4 + 0xf;
  if (uVar3 <= uVar5 * 4) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x1455648d7;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  lVar4 = 0;
  puVar6 = (undefined4 *)(&stack0xfffffffffffffff8 + lVar2);
  if (*(uint *)(param_1 + 0x90) != 0) {
    do {
      lVar4 = lVar4 + 0x48;
      *puVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + -0x40 + lVar4);
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  *(undefined8 *)((longlong)auStack_20 + lVar2 + 8) = 0;
  *(undefined8 *)((longlong)auStack_20 + lVar2) = 0;
  *(undefined4 *)((longlong)auStack_28 + lVar2) = 0;
  uVar1 = *(undefined4 *)(lVar4 + 0x20);
  *(undefined8 *)((longlong)auStack_50 + lVar2) = 0x145564932;
  FUN_1450af9b0(lVar4 + 0x150,uVar1);
  return;
}



// FUNCTION 145564940 FUN_145564940 body=4813 status=ok
// SIG undefined FUN_145564940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145564940(longlong *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  ushort uVar19;
  int iVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  uint uVar25;
  bool bVar26;
  longlong *local_res8;
  int local_res10;
  longlong *local_res18;
  longlong *local_res20;
  int *in_stack_fffffffffffffac8;
  undefined4 uVar27;
  longlong **in_stack_fffffffffffffad8;
  ulonglong uVar28;
  undefined8 uVar29;
  ulonglong in_stack_fffffffffffffae0;
  int local_508;
  int local_504;
  uint local_500;
  uint local_4fc;
  undefined4 local_4f8 [2];
  longlong *local_4f0;
  undefined4 *local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4;
  longlong *local_4c0;
  longlong local_4b8;
  uint local_4b0;
  undefined4 local_4ac;
  undefined8 *local_4a8;
  longlong *local_4a0;
  longlong *plStack_498;
  longlong *local_490;
  undefined8 *local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 local_464;
  longlong *local_460;
  longlong *local_458;
  undefined8 local_450;
  ulonglong uStack_448;
  uint local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  uint local_428;
  undefined8 local_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  longlong local_408;
  undefined4 local_400;
  uint uStack_3fc;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined1 local_3e8 [8];
  undefined8 local_3e0;
  undefined1 local_3d8 [264];
  longlong local_2d0 [2];
  int local_2c0;
  char local_2ae;
  undefined1 local_2a8 [256];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  int local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [312];
  
  lVar22 = param_1[0xe];
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1[2] != 0) {
    lVar12 = FUN_1450ef3d0();
    lVar22 = lVar22 + lVar12;
  }
  puVar24 = (undefined8 *)0x0;
  local_4a8 = (undefined8 *)0x0;
  puVar15 = (undefined8 *)0x0;
  local_4b8 = *(longlong *)(param_1[0xd] + 8) - lVar22;
  FUN_1453a5380(local_3d8,param_1,0);
  if (local_2d0[0] == 0) {
    FUN_1450ed8c0(*param_4);
    *param_4 = 0;
    goto LAB_145565bef;
  }
  local_4a0 = (longlong *)0x0;
  plStack_498 = (longlong *)0x0;
  if (param_1[0x16] != 0) {
    FUN_1455660c0(param_1,param_1 + 0x16,&local_4a0,local_3d8);
  }
  plVar14 = (longlong *)param_1[0x15];
  plVar23 = plVar14;
  local_460 = plVar14;
  for (plVar17 = (longlong *)*plVar14; plVar17 != (longlong *)0x0; plVar17 = (longlong *)*plVar17) {
    cVar6 = (**(code **)(*(longlong *)plVar23[1] + 0xc0))();
    if ((cVar6 == '\0') ||
       (((*(byte *)(plVar17[1] + 0x62) & 3) != 0 && ((*(byte *)(plVar17[1] + 0x62) & 0x10) == 0))))
    {
      plVar14 = plVar17;
    }
    plVar23 = plVar17;
  }
  local_460 = plVar14;
  if ((*(char *)(param_1[0x10] + 0x168) == '\0') || (*param_3 != 0)) {
LAB_145564a84:
    cVar6 = (**(code **)(*(longlong *)plVar14[1] + 0xc0))();
    if (cVar6 != '\0') {
      local_2c0 = local_2c0 + 1;
      for (local_res8 = (longlong *)param_1[0x14];
          (local_res8 != (longlong *)0x0 && (local_res8 != plVar14));
          local_res8 = (longlong *)*local_res8) {
      }
      puVar13 = (undefined8 *)FUN_1453a58d0(local_3d8);
      if ((longlong *)*puVar13 != local_res8) {
        FUN_1453a5960(local_3d8,&local_res8);
        (**(code **)(*(longlong *)local_res8[1] + 0xa0))((longlong *)local_res8[1],local_3d8,0);
      }
      local_2c0 = local_2c0 + -1;
      local_500 = local_440;
      local_4e8 = (undefined4 *)0x0;
      local_3e0 = 0;
      local_4b0 = 0;
      local_4d0 = (ulonglong)local_4d0._5_3_ << 0x28;
      local_4c8 = 0;
      local_4c4 = 0;
      local_4f0 = (longlong *)0x0;
      local_458 = local_4a0;
      local_4fc = (uint)uStack_448;
      plVar23 = plStack_498;
LAB_145564b59:
      iVar10 = -1;
      plVar14 = local_res20;
      do {
        uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffac8 >> 0x20);
        lVar22 = *plVar14;
        local_490 = (longlong *)0x0;
        lVar12 = FUN_1453a55a0(local_3d8,&local_4e0);
        if (lVar12 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar12 + 0x20);
        }
        FUN_1453a5380(local_178,lVar22);
        lVar22 = FUN_1453a55a0(local_178,&local_490);
        if (lVar22 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(lVar22 + 0x20);
        }
        local_4b0 = local_4b0 + 1;
        if (local_4b0 < 0x41) {
          lVar22 = FUN_1450f2f30(param_1[0x10],param_1[0x10],uVar11,CONCAT44(uStack_4dc,local_4e0),
                                 CONCAT44(uVar27,iVar8),local_490);
          if ((local_490 != (longlong *)0x0) &&
             (iVar9 = (**(code **)(*local_490 + 0x70))(), iVar9 == 8)) {
            local_res8 = (longlong *)CONCAT71(local_res8._1_7_,1);
            if (**(int **)(lVar22 + 0x10) != iVar8) goto LAB_145564c20;
          }
          local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
        }
        else {
          lVar22 = FUN_1450f3130();
        }
LAB_145564c20:
        FUN_1453a5440(local_178);
        iVar8 = *(int *)(lVar22 + 0x58);
        if (iVar8 != iVar10) {
          local_4f0 = (longlong *)0x0;
          if (puVar15 != (undefined8 *)0x0) {
            lVar12 = puVar15[1];
            if (puVar24 == (undefined8 *)0x0) {
              puVar15[1] = 0;
              if (lVar12 != 0) {
                FUN_1450ed1a0();
              }
              if (puVar15[1] != 0) {
                FUN_1450ed1a0();
                puVar15[1] = 0;
              }
              AK::MemoryMgr::Free(0,puVar15);
              puVar15 = (undefined8 *)0x0;
            }
            else {
              *(byte *)(puVar15 + 9) = *(byte *)(puVar15 + 9) & 0xfc;
              FUN_1450ed8c0();
              lVar12 = puVar15[1];
              puVar15[1] = 0;
              if (lVar12 != 0) {
                FUN_1450ed1a0();
              }
              if (puVar15[1] != 0) {
                FUN_1450ed1a0();
                puVar15[1] = 0;
              }
              AK::MemoryMgr::Free(0,puVar15);
              lVar12 = puVar24[1];
              puVar24[1] = 0;
              if (lVar12 != 0) {
                FUN_1450ed1a0();
              }
              if (puVar24[1] != 0) {
                FUN_1450ed1a0();
                puVar24[1] = 0;
              }
              AK::MemoryMgr::Free(0,puVar24);
              local_4a8 = (undefined8 *)0x0;
              puVar24 = (undefined8 *)0x0;
            }
          }
          plVar14 = local_res20;
          if ((*(byte *)(local_2d0[0] + 0x48) >> 2 & 1) != 0) goto LAB_14556590f;
          if ((*(undefined4 **)(lVar22 + 0x50) == (undefined4 *)0x0) ||
             (plVar14 = (longlong *)FUN_145565f70(param_1,**(undefined4 **)(lVar22 + 0x50)),
             local_4f0 = plVar14, plVar14 == (longlong *)0x0)) {
LAB_145564e5d:
            lVar12 = *local_res20;
            puVar15 = AK::MemoryMgr::Malloc(0,0x50);
            if (puVar15 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)0x0;
              plVar14 = local_res20;
              goto LAB_14556590f;
            }
            *puVar15 = 0;
            puVar15[1] = lVar12;
            if (lVar12 != 0) {
              *(int *)(lVar12 + 0x50) = *(int *)(lVar12 + 0x50) + 1;
            }
            puVar15[2] = 0;
            *(undefined1 *)(puVar15 + 3) = 0;
            *(undefined4 *)(puVar15 + 8) = 0;
            *(undefined4 *)((longlong)puVar15 + 0x44) = 4;
            *(byte *)(puVar15 + 9) = *(byte *)(puVar15 + 9) & 0xf8;
          }
          else {
            puVar15 = AK::MemoryMgr::Malloc(0,0x50);
            if (puVar15 == (undefined8 *)0x0) {
              puVar15 = (undefined8 *)0x0;
            }
            else {
              *puVar15 = 0;
              puVar15[1] = plVar14;
              *(int *)(plVar14 + 10) = (int)plVar14[10] + 1;
              *(byte *)(puVar15 + 9) = *(byte *)(puVar15 + 9) & 0xf8;
              puVar15[2] = 0;
              *(undefined1 *)(puVar15 + 3) = 0;
              *(undefined4 *)(puVar15 + 8) = 0;
              *(undefined4 *)((longlong)puVar15 + 0x44) = 4;
            }
            lVar12 = *local_res20;
            local_4a8 = AK::MemoryMgr::Malloc(0,0x50);
            if (local_4a8 == (undefined8 *)0x0) {
              local_4a8 = (undefined8 *)0x0;
            }
            else {
              *local_4a8 = 0;
              local_4a8[1] = lVar12;
              if (lVar12 != 0) {
                *(int *)(lVar12 + 0x50) = *(int *)(lVar12 + 0x50) + 1;
              }
              *(undefined4 *)((longlong)local_4a8 + 0x44) = 4;
              *(byte *)(local_4a8 + 9) = *(byte *)(local_4a8 + 9) & 0xf8;
              local_4a8[2] = 0;
              *(undefined1 *)(local_4a8 + 3) = 0;
              *(undefined4 *)(local_4a8 + 8) = 0;
            }
            puVar24 = local_4a8;
            if (puVar15 == (undefined8 *)0x0) {
              FUN_1450ed8c0();
              local_4f0 = (longlong *)0x0;
              if (puVar24 != (undefined8 *)0x0) {
                lVar12 = puVar24[1];
                puVar24[1] = 0;
                if (lVar12 != 0) {
                  FUN_1450ed1a0();
                }
                if (puVar24[1] != 0) {
                  FUN_1450ed1a0();
                  puVar24[1] = 0;
                }
                AK::MemoryMgr::Free(0,puVar24);
                local_4a8 = (undefined8 *)0x0;
                puVar24 = (undefined8 *)0x0;
              }
              goto LAB_145564e5d;
            }
            if (local_4a8 == (undefined8 *)0x0) {
              *(byte *)(puVar15 + 9) = *(byte *)(puVar15 + 9) & 0xfc;
              FUN_1450ed8c0(puVar15[1]);
              lVar12 = puVar15[1];
              puVar15[1] = 0;
              if (lVar12 != 0) {
                FUN_1450ed1a0();
              }
              if (puVar15[1] != 0) {
                FUN_1450ed1a0();
                puVar15[1] = 0;
              }
              AK::MemoryMgr::Free(0,puVar15);
              local_4f0 = (longlong *)0x0;
              goto LAB_145564e5d;
            }
          }
          plVar14 = local_res18;
          puVar16 = (undefined4 *)0x0;
          local_438 = *(undefined8 *)(lVar22 + 0x20);
          uStack_430 = *(ulonglong *)(lVar22 + 0x28);
          local_4fc = (uint)uStack_430;
          local_428 = *(uint *)(lVar22 + 0x30);
          local_480 = *(undefined4 *)(lVar22 + 0x34);
          uStack_47c = *(undefined4 *)(lVar22 + 0x38);
          local_420 = *(undefined8 *)(lVar22 + 0x34);
          uStack_478 = *(undefined4 *)(lVar22 + 0x3c);
          uStack_474 = *(undefined4 *)(lVar22 + 0x40);
          uVar29 = *(undefined8 *)(lVar22 + 0x44);
          lVar12 = *(longlong *)(lVar22 + 0x50);
          local_440 = local_428;
          local_450 = local_438;
          uStack_448 = uStack_430;
          uStack_418 = uStack_478;
          uStack_414 = uStack_474;
          uVar3 = uVar29;
          if (lVar12 != 0) {
            local_420 = *(undefined8 *)(lVar12 + 4);
            uStack_418 = *(undefined4 *)(lVar12 + 0xc);
            uStack_414 = 0;
            uVar19 = local_410._4_2_ & 0xff07;
            local_410._0_6_ =
                 CONCAT24((*(ushort *)(*(longlong *)(lVar22 + 0x50) + 0x1c) & 1) << 6 | uVar19,
                          (undefined4)local_410);
            lVar12 = *(longlong *)(lVar22 + 0x50);
            local_4fc = *(uint *)(lVar12 + 0x18);
            uStack_448 = (ulonglong)local_4fc;
            local_440 = (*(uint *)(lVar12 + 0x1c) & 2) << 4 | local_500 & 0xffffffc7 | 7;
            local_450 = *(undefined8 *)(lVar12 + 0x10);
            uVar3 = local_410;
          }
          local_410 = uVar3;
          uVar19 = (ushort)((ulonglong)uVar29 >> 0x20);
          local_470 = uVar29;
          if ((char)local_res18[1] != '\0') {
            uVar19 = (*(short *)((longlong)local_res18 + 0xc) << 3 ^ uVar19) & 0x38 ^ uVar19;
            local_470._6_2_ = (undefined2)((ulonglong)uVar29 >> 0x30);
            local_470._0_6_ = CONCAT24(uVar19,(int)uVar29);
          }
          local_500 = local_440;
          if (local_490 != (longlong *)0x0) {
            puVar16 = (undefined4 *)(**(code **)(*param_1 + 0x88))(param_1,(int)local_490[4]);
            uVar19 = local_470._4_2_;
          }
          if ((ulonglong *)*plVar14 == (ulonglong *)0x0) {
            if ((puVar16 == (undefined4 *)0x0) || (((byte)uVar19 & 0x38) != 0x20)) {
              local_4d0 = (ulonglong)local_4d0._4_4_ << 0x20;
            }
            else {
              local_4d0 = CONCAT44(local_4d0._4_4_,*puVar16);
            }
            local_4d0._0_5_ = (uint5)(uint)local_4d0;
          }
          else {
            local_4d0 = *(ulonglong *)*plVar14;
          }
          if ((uVar19 & 7) == 1) {
            local_4c8 = *(undefined4 *)(lVar22 + 0x44);
          }
          iVar10 = iVar8;
          local_4e8 = puVar16;
          if ((((char)local_res8 != '\0') && (puVar16 != (undefined4 *)0x0)) &&
             ((ushort)((uVar19 & 7) - 2) < 2)) {
            local_4c4 = 1;
          }
        }
        puVar16 = local_4e8;
        plVar14 = local_res20;
        in_stack_fffffffffffffae0 = in_stack_fffffffffffffae0 & 0xffffffffffffff00;
        in_stack_fffffffffffffad8 =
             (longlong **)((ulonglong)in_stack_fffffffffffffad8 & 0xffffffff00000000);
        in_stack_fffffffffffffac8 = &local_508;
        iVar8 = (**(code **)(*(longlong *)*local_res20 + 0x98))
                          ((longlong *)*local_res20,&local_480,local_4e8,&local_4d0,
                           in_stack_fffffffffffffac8,&local_4ac,in_stack_fffffffffffffad8,
                           in_stack_fffffffffffffae0);
        if (iVar8 == 0) {
          *plVar14 = 0;
          goto LAB_14556590f;
        }
      } while (iVar8 == 2);
      local_468 = 0;
      local_4a0 = (longlong *)0x0;
      FUN_1453a5400(local_2a8,1);
      plVar14 = local_4f0;
      if (puVar24 == (undefined8 *)0x0) {
        local_504 = local_508;
        local_408 = 0;
        iVar8 = (int)((longlong)((longlong)(int)local_438 * (ulonglong)DAT_14c72f42c) / 1000) -
                (int)uStack_430;
        iVar10 = local_508;
        if (local_508 < iVar8) {
          iVar10 = iVar8;
        }
        lVar22 = iVar10 + local_4b8;
      }
      else {
        in_stack_fffffffffffffae0 = in_stack_fffffffffffffae0 & 0xffffffffffffff00;
        in_stack_fffffffffffffac8 = &local_504;
        local_3f8 = 0;
        local_3f4 = 0;
        local_3f0 = 0;
        local_3ec = 0;
        (**(code **)(*local_4f0 + 0x98))
                  (local_4f0,&local_420,0,&local_3f8,in_stack_fffffffffffffac8,&local_468,
                   (ulonglong)in_stack_fffffffffffffad8 & 0xffffffff00000000,
                   in_stack_fffffffffffffae0);
        iVar10 = local_504;
        iVar8 = local_508;
        lVar22 = FUN_1450ef180(plVar14,0);
        if (lVar22 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_1453a9e50(lVar22);
        }
        iVar20 = (int)((longlong)((longlong)(int)local_438 * (ulonglong)DAT_14c72f42c) / 1000) -
                 (int)uStack_430;
        if (iVar10 < iVar20) {
          iVar10 = iVar20;
        }
        iVar20 = (int)((longlong)((longlong)(int)local_450 * (ulonglong)DAT_14c72f42c) / 1000) -
                 local_4fc;
        if (iVar8 < iVar20) {
          iVar8 = iVar20;
        }
        lVar22 = (longlong)iVar8 - (longlong)iVar9;
        if (((longlong)iVar8 - (longlong)iVar9) + local_4b8 < iVar10 + local_4b8) {
          lVar22 = (longlong)iVar10;
        }
        lVar22 = lVar22 + local_4b8;
        iVar10 = local_508;
        if (local_508 < iVar20) {
          iVar10 = iVar20;
        }
        local_408 = iVar10 + local_4b8;
        puVar16 = local_4e8;
      }
      uVar25 = local_428 & 0x1f;
LAB_145565200:
      local_4f8[0] = uStack_430._4_4_;
      uVar19 = local_470._4_2_ >> 3 & 7;
      local_464 = 0;
      if ((uVar19 == 1) ||
         (((char)((ulonglong)local_470 >> 0x20) < '\0' && ((ushort)(uVar19 - 2) < 2)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      in_stack_fffffffffffffad8 = &local_4c0;
      in_stack_fffffffffffffac8 =
           (int *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffac8 >> 8),uVar7);
      iVar10 = FUN_1453a5620(local_3d8,lVar22,uVar25,local_4f8,in_stack_fffffffffffffac8,1,
                             in_stack_fffffffffffffad8);
      if ((iVar10 == 3) && (local_2ae != '\0')) {
        for (plVar14 = (longlong *)param_1[0x14]; plVar14 != (longlong *)0x0;
            plVar14 = (longlong *)*plVar14) {
          if (plVar14 == local_460) {
            if (((longlong *)param_1[0x15] == (longlong *)0x0) ||
               (plVar17 = (longlong *)*plVar14, plVar17 == (longlong *)0x0)) goto LAB_1455652d1;
            goto LAB_1455652b6;
          }
        }
        goto LAB_14556533f;
      }
      goto LAB_1455653a6;
    }
  }
  else {
    lVar22 = (**(code **)(*(longlong *)plVar14[1] + 0xb8))();
    if (lVar22 == 0) {
      bVar26 = local_res10 == 0;
    }
    else {
      bVar26 = *(int *)(lVar22 + 0x20) == local_res10;
    }
    if (!bVar26) goto LAB_145564a84;
  }
  for (plVar17 = (longlong *)param_1[0x14]; plVar23 = plStack_498, plVar17 != (longlong *)0x0;
      plVar17 = (longlong *)*plVar17) {
    if (plVar17 == plVar14) {
      if (((longlong *)param_1[0x15] == (longlong *)0x0) ||
         (plVar14 = (longlong *)*plVar17, plVar14 == (longlong *)0x0)) goto LAB_145565b0b;
      goto LAB_145565af0;
    }
  }
  goto LAB_145565a58;
  while (plVar17 = (longlong *)*plVar17, plVar17 != (longlong *)0x0) {
LAB_1455652b6:
    if (plVar17 == (longlong *)param_1[0x15]) {
      plVar14 = plVar17;
      local_460 = plVar17;
      if (plVar17 == (longlong *)0x0) goto LAB_14556533f;
      break;
    }
  }
LAB_1455652d1:
  plVar17 = (longlong *)*plVar14;
  plVar4 = plVar23;
  plVar18 = local_458;
  while (local_458 = plVar18, plVar23 = plVar4, plVar18 = plVar17, plVar18 != (longlong *)0x0) {
    plVar17 = (longlong *)*plVar18;
    if (plVar18 == (longlong *)param_1[0x14]) {
      param_1[0x14] = *plVar18;
    }
    else {
      *plVar14 = *plVar18;
    }
    if (plVar18 == (longlong *)param_1[0x13]) {
      param_1[0x13] = (longlong)plVar14;
    }
    *plVar18 = 0;
    plVar4 = plVar18;
    puVar24 = local_4a8;
    if (plVar23 != (longlong *)0x0) {
      *local_458 = (longlong)plVar18;
      plVar4 = plVar23;
    }
  }
LAB_14556533f:
  (**(code **)(*param_1 + 0xa8))(param_1,local_3d8);
  uVar19 = local_470._4_2_ >> 3 & 7;
  if ((uVar19 == 1) || (((char)((ulonglong)local_470 >> 0x20) < '\0' && ((ushort)(uVar19 - 2) < 2)))
     ) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  in_stack_fffffffffffffad8 = &local_4c0;
  in_stack_fffffffffffffac8 =
       (int *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffac8 >> 8),uVar7);
  iVar10 = FUN_1453a5620(local_3d8,lVar22,uVar25,local_4f8,in_stack_fffffffffffffac8,1,
                         in_stack_fffffffffffffad8);
LAB_1455653a6:
  local_180 = 0x1000001;
  local_1a8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  if ((puVar24 != (undefined8 *)0x0) && (iVar10 == 1)) {
    *(longlong **)(puVar15[1] + 0x70) = local_4c0;
    local_190 = 1;
    local_488 = puVar15;
    FUN_1453a5960(local_2a8,&local_488);
    (**(code **)(*(longlong *)local_488[1] + 0xa0))((longlong *)local_488[1],local_2a8,0);
    in_stack_fffffffffffffad8 = &local_4a0;
    local_190 = local_190 + -1;
    in_stack_fffffffffffffac8 = (int *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffac8 >> 8),1)
    ;
    iVar10 = FUN_1453a5620(local_2a8,local_408,local_500 & 0x1f,&local_464,in_stack_fffffffffffffac8
                           ,1,in_stack_fffffffffffffad8);
  }
  plVar17 = local_4c0;
  plVar14 = local_res20;
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffad8 >> 0x20);
  uVar19 = local_470._4_2_ >> 3 & 7;
  if ((uVar19 == 1) || (((char)((ulonglong)local_470 >> 0x20) < '\0' && ((ushort)(uVar19 - 2) < 2)))
     ) {
    bVar26 = true;
  }
  else {
    bVar26 = false;
  }
  if (iVar10 != 1) goto LAB_1455655d8;
  if (((bVar26) && (*local_res18 == 0)) && (*(longlong *)(local_2d0[0] + 0x20) != 0)) {
    if (uVar19 == 1) {
      lVar22 = FUN_1453a5aa0(local_3d8,0);
      local_400 = FUN_1453a4630(local_2d0,(longlong)plVar17 - lVar22);
      uVar2 = uStack_3fc;
      plVar14 = local_res20;
      in_stack_fffffffffffffae0 = CONCAT71((int7)(in_stack_fffffffffffffae0 >> 8),1);
      uVar28 = (ulonglong)in_stack_fffffffffffffad8 & 0xffffffff00000000;
      in_stack_fffffffffffffac8 = &local_508;
      uStack_3fc = uStack_3fc & 0xffffff00;
      local_4d0 = CONCAT44(uVar2,local_400) & 0xffffff00ffffffff;
      iVar10 = (**(code **)(*(longlong *)*local_res20 + 0x98))
                         ((longlong *)*local_res20,&local_480,puVar16,&local_4d0,
                          in_stack_fffffffffffffac8,&local_4ac,uVar28,in_stack_fffffffffffffae0);
      uVar27 = (undefined4)(uVar28 >> 0x20);
    }
    else {
      in_stack_fffffffffffffae0 = CONCAT71((int7)(in_stack_fffffffffffffae0 >> 8),1);
      uVar29 = CONCAT44(uVar27,local_4f8[0]);
      in_stack_fffffffffffffac8 = &local_508;
      iVar10 = (**(code **)(*(longlong *)*local_res20 + 0x98))
                         ((longlong *)*local_res20,&local_480,puVar16,&local_4d0,
                          in_stack_fffffffffffffac8,&local_4ac,uVar29,in_stack_fffffffffffffae0);
      uVar27 = (undefined4)((ulonglong)uVar29 >> 0x20);
    }
    iVar9 = local_504;
    iVar8 = local_508;
    if (iVar10 == 0) {
      *plVar14 = 0;
      FUN_1453a5440(local_2a8);
      goto LAB_14556590f;
    }
    iVar10 = iVar8;
    if (puVar24 == (undefined8 *)0x0) {
      local_504 = local_508;
    }
    else {
      lVar22 = FUN_1450ef180(local_4f0,0);
      if (lVar22 == 0) {
        puVar16 = local_4e8;
        if (iVar8 < iVar9) {
          iVar10 = iVar9;
        }
      }
      else {
        iVar20 = FUN_1453a9e50(lVar22);
        puVar16 = local_4e8;
        iVar10 = iVar8 - iVar20;
        if (iVar8 - iVar20 < iVar9) {
          iVar10 = iVar9;
        }
      }
    }
    if ((longlong)local_4c0 - local_4b8 < (longlong)iVar10) {
      lVar22 = iVar10 + local_4b8;
      goto LAB_145565200;
    }
  }
  local_2c0 = local_2c0 + 1;
  puVar13 = (undefined8 *)FUN_1453a58d0(local_3d8,&local_4e0);
  plVar14 = (longlong *)*puVar13;
  local_2c0 = local_2c0 + -1;
  plVar17 = (longlong *)param_1[0x14];
  goto joined_r0x000145565651;
LAB_1455655d8:
  (**(code **)(*param_1 + 0xa0))(param_1,local_3d8,0);
  FUN_1453a5440(local_2a8);
  goto LAB_145564b59;
joined_r0x000145565651:
  plVar18 = plVar14;
  if (plVar17 == (longlong *)0x0) goto LAB_145565667;
  if (plVar17 == plVar14) {
    if (((longlong *)param_1[0x15] == (longlong *)0x0) ||
       (plVar18 = (longlong *)*plVar17, plVar18 == (longlong *)0x0)) goto LAB_14556579e;
    goto LAB_145565780;
  }
  plVar17 = (longlong *)*plVar17;
  goto joined_r0x000145565651;
  while (plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0) {
LAB_145565780:
    if (plVar18 == (longlong *)param_1[0x15]) {
      plVar17 = plVar18;
      plVar14 = plVar18;
      if (plVar18 == (longlong *)0x0) goto LAB_145565667;
      break;
    }
  }
LAB_14556579e:
  plVar18 = (longlong *)*plVar17;
  plVar5 = plVar23;
  plVar4 = local_458;
  while (plVar1 = plVar4, plVar23 = plVar5, plVar4 = plVar18, plVar18 = plVar14,
        plVar4 != (longlong *)0x0) {
    plVar18 = (longlong *)*plVar4;
    if (plVar4 == (longlong *)param_1[0x14]) {
      param_1[0x14] = *plVar4;
    }
    else {
      *plVar17 = *plVar4;
    }
    if (plVar4 == (longlong *)param_1[0x13]) {
      param_1[0x13] = (longlong)plVar17;
    }
    *plVar4 = 0;
    plVar5 = plVar4;
    if (plVar23 != (longlong *)0x0) {
      *plVar1 = (longlong)plVar4;
      plVar5 = plVar23;
    }
  }
LAB_145565667:
  uVar11 = 0;
  (**(code **)(*param_1 + 0xa8))(param_1,local_3d8);
  if ((*(char *)(param_1[0x10] + 0x168) == '\0') || (*local_res18 != 0)) {
LAB_1455656bc:
    param_1[0x16] = (longlong)plVar18;
    local_res8 = (longlong *)0x0;
    FUN_1453a55a0(local_3d8,&local_res8);
    plVar14 = local_4c0;
    if (local_res8 != (longlong *)0x0) {
      if (*(longlong *)(local_2d0[0] + 0x20) != 0) {
        lVar22 = FUN_1453a5aa0(local_3d8,0);
        uVar11 = FUN_1453a4630(local_2d0,(longlong)plVar14 - lVar22);
      }
      uVar21 = 0;
      iVar10 = (**(code **)(*local_res8 + 0x70))();
      if (iVar10 == 8) {
        if ((local_2d0[0] == 0) || (*(longlong *)(local_2d0[0] + 0x20) == 0)) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(undefined4 *)(*(longlong *)(local_2d0[0] + 0x20) + 0xa8);
        }
      }
      (**(code **)(*param_1 + 0x80))(param_1,(int)local_res8[4],uVar11,uVar21);
    }
    lVar22 = local_4b8;
    FUN_145565c10(param_1,local_4b8,puVar15,&local_438,&local_420,local_3d8,
                  CONCAT44(uVar27,local_504),local_4c0,0,local_3e8);
    if (puVar24 != (undefined8 *)0x0) {
      FUN_145565c10(param_1,lVar22,puVar24,&local_450,&local_480,local_2a8,local_508,local_4a0,1,
                    local_3e8);
    }
    FUN_1453a5440(local_2a8);
    FUN_1450f0ad0(param_1[0xd],local_3e8);
    plVar14 = plVar23;
    plVar17 = _DAT_00000000;
  }
  else {
    lVar22 = (**(code **)(*(longlong *)plVar18[1] + 0xb8))();
    if (lVar22 == 0) {
      if (local_res10 != 0) goto LAB_1455656bc;
    }
    else if (*(int *)(lVar22 + 0x20) != local_res10) goto LAB_1455656bc;
    FUN_1453a5440(local_2a8);
    plVar14 = local_res20;
LAB_14556590f:
    if (puVar15 != (undefined8 *)0x0) {
      lVar22 = puVar15[1];
      if (puVar24 == (undefined8 *)0x0) {
        puVar15[1] = 0;
        if (lVar22 != 0) {
          FUN_1450ed1a0();
        }
        if (puVar15[1] != 0) {
          FUN_1450ed1a0();
          puVar15[1] = 0;
        }
      }
      else {
        *(byte *)(puVar15 + 9) = *(byte *)(puVar15 + 9) & 0xfc;
        FUN_1450ed8c0();
        lVar22 = puVar15[1];
        puVar15[1] = 0;
        if (lVar22 != 0) {
          FUN_1450ed1a0();
        }
        if (puVar15[1] != 0) {
          FUN_1450ed1a0();
          puVar15[1] = 0;
        }
        AK::MemoryMgr::Free(0,puVar15);
        lVar22 = puVar24[1];
        puVar24[1] = 0;
        if (lVar22 != 0) {
          FUN_1450ed1a0();
        }
        puVar15 = puVar24;
        if (puVar24[1] != 0) {
          FUN_1450ed1a0();
          puVar24[1] = 0;
        }
      }
      AK::MemoryMgr::Free(0,puVar15);
    }
    if (*plVar14 != 0) {
      FUN_1450ed8c0();
      *plVar14 = 0;
    }
    cVar6 = (**(code **)(**(longlong **)(param_1[0x13] + 8) + 0xc0))();
    if (cVar6 != '\0') {
      lVar22 = param_1[0x13];
      if ((*(byte *)(lVar22 + 0x48) & 6) == 4) {
        local_4e0 = FUN_145563350((int)local_4b8 - *(int *)(lVar22 + 0x38));
        uStack_4dc = *(undefined4 *)(lVar22 + 0x44);
        local_4d8 = 0;
        FUN_1450ed630(*(undefined8 *)(lVar22 + 8),&local_4e0);
      }
      else {
        *(byte *)(lVar22 + 0x48) = *(byte *)(lVar22 + 0x48) & 0xfd;
      }
      *(byte *)(lVar22 + 0x48) = *(byte *)(lVar22 + 0x48) & 0xfb;
      *(undefined1 *)(lVar22 + 0x18) = 0;
    }
    FUN_1450f0ad0(param_1[0xd],local_3e8);
    plVar14 = plVar23;
    plVar17 = _DAT_00000000;
  }
  goto joined_r0x000145565b8f;
  while (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0) {
LAB_145565af0:
    if (plVar14 == (longlong *)param_1[0x15]) {
      plVar17 = plVar14;
      if (plVar14 == (longlong *)0x0) goto LAB_145565a58;
      break;
    }
  }
LAB_145565b0b:
  plVar14 = (longlong *)*plVar17;
  plVar18 = local_4a0;
  plVar4 = plStack_498;
  while (plVar23 = plVar4, plVar5 = plVar18, plVar18 = plVar14, plVar18 != (longlong *)0x0) {
    plVar14 = (longlong *)*plVar18;
    if (plVar18 == (longlong *)param_1[0x14]) {
      param_1[0x14] = *plVar18;
    }
    else {
      *plVar17 = *plVar18;
    }
    if (plVar18 == (longlong *)param_1[0x13]) {
      param_1[0x13] = (longlong)plVar17;
    }
    *plVar18 = 0;
    plVar4 = plVar18;
    if (plVar23 != (longlong *)0x0) {
      *plVar5 = (longlong)plVar18;
      plVar4 = plVar23;
    }
  }
LAB_145565a58:
  (**(code **)(*param_1 + 0xa8))(param_1,local_3d8);
  FUN_1450ed8c0(*param_4);
  *param_4 = 0;
  cVar6 = (**(code **)(**(longlong **)(param_1[0x13] + 8) + 0xc0))();
  plVar14 = plVar23;
  plVar17 = _DAT_00000000;
  if (cVar6 != '\0') {
    lVar22 = param_1[0x13];
    if ((*(byte *)(lVar22 + 0x48) & 6) == 4) {
      local_4e0 = FUN_145563350((int)local_4b8 - *(int *)(lVar22 + 0x38));
      uStack_4dc = *(undefined4 *)(lVar22 + 0x44);
      local_4d8 = 0;
      FUN_1450ed630(*(undefined8 *)(lVar22 + 8),&local_4e0);
    }
    else {
      *(byte *)(lVar22 + 0x48) = *(byte *)(lVar22 + 0x48) & 0xfd;
    }
    *(byte *)(lVar22 + 0x48) = *(byte *)(lVar22 + 0x48) & 0xfb;
    *(undefined1 *)(lVar22 + 0x18) = 0;
    plVar17 = _DAT_00000000;
  }
joined_r0x000145565b8f:
  while (_DAT_00000000 = plVar17, plVar23 != (longlong *)0x0) {
    plVar18 = (longlong *)*plVar23;
    _DAT_00000000 = plVar18;
    if (plVar23 == plVar14) {
      plVar14 = plVar18;
      _DAT_00000000 = plVar17;
    }
    *(byte *)(plVar23 + 9) = *(byte *)(plVar23 + 9) & 0xfc;
    FUN_1450ed8c0(plVar23[1]);
    lVar22 = plVar23[1];
    plVar23[1] = 0;
    if (lVar22 != 0) {
      FUN_1450ed1a0();
    }
    if (plVar23[1] != 0) {
      FUN_1450ed1a0();
      plVar23[1] = 0;
    }
    AK::MemoryMgr::Free(0,plVar23);
    plVar23 = plVar18;
    plVar17 = _DAT_00000000;
  }
LAB_145565bef:
  FUN_1453a5440(local_3d8);
  return;
}



// FUNCTION 145565c10 FUN_145565c10 body=627 status=ok
// SIG undefined FUN_145565c10(void)

void FUN_145565c10(longlong *param_1,longlong param_2,undefined8 *param_3,int *param_4,int *param_5,
                  longlong param_6,int param_7,longlong param_8,char param_9,undefined8 param_10)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  lVar4 = FUN_1453a55a0(param_6,0);
  lVar5 = param_1[0x13];
  uVar6 = param_8 - param_2;
  if ((*(byte *)(lVar5 + 0x48) & 6) == 4) {
    uVar8 = (int)param_2 - *(int *)(lVar5 + 0x38);
    if (uVar8 < (uint)uVar6) {
      uVar6 = (ulonglong)uVar8;
    }
    local_38 = FUN_145563350(uVar6);
    local_34 = *(undefined4 *)(lVar5 + 0x44);
    local_30 = 0;
    FUN_1450ed630(*(undefined8 *)(lVar5 + 8),&local_38);
  }
  else {
    *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) & 0xfd;
  }
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) & 0xfb;
  iVar7 = 0;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  iVar1 = *param_4;
  if ((iVar1 < 1) || (lVar4 == 0)) {
    lVar9 = param_8;
    if ((*(byte *)(param_4 + 4) & 0x20) != 0) {
      cVar3 = FUN_1453a57c0(param_6,param_8);
      if ((cVar3 != '\0') && (lVar4 != 0)) {
        uVar8 = FUN_1453a9e30();
        lVar9 = (ulonglong)uVar8 + param_8;
      }
      iVar7 = 0;
    }
  }
  else {
    iVar7 = param_4[2];
    lVar9 = param_8 - ((int)((longlong)((ulonglong)DAT_14c72f42c * (longlong)iVar1) / 1000) - iVar7)
    ;
  }
  if ((param_9 == '\0') && (iVar7 < 1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar7 = param_4[1];
  *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) | 6;
  *(int *)(lVar5 + 0x40) = iVar1;
  *(int *)(lVar5 + 0x44) = iVar7;
  *(longlong *)(lVar5 + 0x38) = lVar9;
  if (bVar2) {
    if (*(char *)(lVar5 + 0x18) == '\0') {
      *(undefined1 *)(lVar5 + 0x18) = 1;
    }
    else if (*(longlong *)(lVar5 + 0x10) <= param_8) goto LAB_145565d85;
    *(longlong *)(lVar5 + 0x10) = param_8;
  }
LAB_145565d85:
  FUN_1450f02c0(*(undefined8 *)(param_6 + 0x108),(uint)param_4[4] >> 5 & 0xffffff01);
  *(longlong *)(param_3[1] + 0x70) = param_8;
  param_3[4] = param_8 - param_7;
  param_3[5] = *(undefined8 *)param_5;
  *(int *)(param_3 + 6) = param_5[2];
  lVar5 = (**(code **)(*(longlong *)param_3[1] + 0xb8))();
  if (lVar5 == 0) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  if (0 < *param_5) {
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  }
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) | 1;
  FUN_1453a5820(param_6,param_10,param_8);
  cVar3 = *(char *)(param_6 + 0x128);
  while (cVar3 == '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_6,1);
    FUN_1453a5820(param_6,param_10,param_8);
    cVar3 = *(char *)(param_6 + 0x128);
  }
  *param_3 = 0;
  if (param_1[0x14] == 0) {
    param_1[0x14] = (longlong)param_3;
  }
  else {
    *(undefined8 **)param_1[0x13] = param_3;
  }
  param_1[0x13] = (longlong)param_3;
  return;
}



// FUNCTION 145565e90 FUN_145565e90 body=220 status=ok
// SIG undefined FUN_145565e90(void)

undefined8 * FUN_145565e90(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (puVar2 = (undefined8 *)FUN_145565f70(), puVar2 != (undefined8 *)0x0)) {
    return puVar2;
  }
  puVar2 = AK::MemoryMgr::Malloc(0,0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1453a4670(puVar2,param_1);
    *(undefined1 *)(puVar2 + 0x13) = 0;
    *puVar2 = &PTR_LAB_149daa4d8;
    puVar2[3] = &PTR_LAB_149daa600;
    puVar2[5] = &PTR_FUN_149daa610;
    *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
    lVar3 = *(longlong *)(param_1 + 0x68);
    iVar1 = FUN_1450ef0e0(puVar2,*(undefined8 *)(lVar3 + 0x30),lVar3 + 0x18,
                          *(undefined1 *)(lVar3 + 0x38));
    if ((iVar1 == 1) && (lVar3 = FUN_1453a5160(puVar2,0,0), lVar3 != 0)) {
      *(int *)(puVar2 + 10) = *(int *)(puVar2 + 10) + 1;
      *(undefined1 *)(puVar2 + 0x13) = 1;
      FUN_1450ed1a0(puVar2);
      return puVar2;
    }
    FUN_1450ed8c0(puVar2);
    FUN_1450ed1a0(puVar2);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145565f70 FUN_145565f70 body=325 status=ok
// SIG undefined FUN_145565f70(void)

longlong * FUN_145565f70(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  piVar1 = DAT_14c791060;
  plVar5 = (longlong *)0x0;
  do {
    while (iVar3 = *piVar1, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_145565fb1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar2);
LAB_145565fb1:
  plVar7 = plVar5;
  if (piVar1[0x12] != 0) {
    for (plVar6 = *(longlong **)
                   (*(longlong *)(piVar1 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (plVar7 = plVar5, plVar6 != (longlong *)0x0 &&
        (plVar7 = plVar6, *(uint *)(plVar6 + 2) != param_2)); plVar6 = (longlong *)plVar6[1]) {
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *piVar1;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_14556602a:
      plVar6 = plVar7 + -2;
      if (plVar7 == (longlong *)0x0) {
        plVar6 = plVar5;
      }
      if (plVar6 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0x68);
        plVar5 = (longlong *)
                 (**(code **)(*plVar6 + 0x278))
                           (plVar6,param_1,*(undefined8 *)(lVar4 + 0x30),lVar4 + 0x18,
                            *(undefined1 *)(lVar4 + 0x38));
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(plVar6[2] + 0x18))();
        }
      }
      return plVar5;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar2) {
      if ((iVar3 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_14556602a;
    }
    iVar3 = *piVar1;
  } while( true );
}



// FUNCTION 1455660c0 FUN_1455660c0 body=220 status=ok
// SIG undefined FUN_1455660c0(void)

void FUN_1455660c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  for (plVar3 = (longlong *)param_1[0x14]; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3)
  {
    if (plVar3 == (longlong *)*param_2) {
      if (((longlong *)param_1[0x15] == (longlong *)0x0) ||
         (plVar2 = (longlong *)*plVar3, plVar2 == (longlong *)0x0)) goto LAB_14556612a;
      goto LAB_145566110;
    }
  }
  goto LAB_14556618b;
  while (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0) {
LAB_145566110:
    if (plVar2 == (longlong *)param_1[0x15]) {
      *param_2 = plVar2;
      plVar3 = plVar2;
      if (plVar2 == (longlong *)0x0) goto LAB_14556618b;
      break;
    }
  }
LAB_14556612a:
  plVar2 = (longlong *)*plVar3;
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar2;
    if (plVar2 == (longlong *)param_1[0x14]) {
      param_1[0x14] = *plVar2;
    }
    else {
      *plVar3 = *plVar2;
    }
    if (plVar2 == (longlong *)param_1[0x13]) {
      param_1[0x13] = (longlong)plVar3;
    }
    *plVar2 = 0;
    if (param_3[1] == 0) {
      param_3[1] = plVar2;
    }
    else {
      *(longlong **)*param_3 = plVar2;
    }
    *param_3 = plVar2;
    plVar2 = plVar1;
  }
LAB_14556618b:
                    /* WARNING: Could not recover jumptable at 0x000145566195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1,param_4);
  return;
}



// FUNCTION 1455661a0 FUN_1455661a0 body=35 status=ok
// SIG undefined FUN_1455661a0(void)

longlong FUN_1455661a0(longlong param_1)

{
  longlong *plVar1;
  uint7 uVar2;
  
  while( true ) {
    plVar1 = *(longlong **)(param_1 + 0xa8);
    uVar2 = (uint7)((ulonglong)plVar1 >> 8);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) break;
    param_1 = *(longlong *)(param_1 + 0x10);
    if (param_1 == 0) {
      return (ulonglong)uVar2 << 8;
    }
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1455661d0 FUN_1455661d0 body=96 status=ok
// SIG undefined FUN_1455661d0(void)

void FUN_1455661d0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  if (((*(longlong **)(param_1 + 0xa8) == (longlong *)0x0) || (**(longlong **)(param_1 + 0xa8) == 0)
      ) && ((*(longlong *)(param_1 + 0x10) == 0 || (cVar2 = FUN_1455661a0(), cVar2 == '\0')))) {
    for (puVar1 = *(undefined8 **)(param_1 + 0xa0); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if ((longlong *)puVar1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar1[1] + 0xd0))();
      }
    }
  }
  return;
}



// FUNCTION 145566230 FUN_145566230 body=105 status=ok
// SIG undefined FUN_145566230(void)

void FUN_145566230(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar1 = plVar2 + (ulonglong)*(uint *)(param_1 + 1) * 9;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 9) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1455662a0 FUN_1455662a0 body=355 status=ok
// SIG undefined FUN_1455662a0(void)

undefined8 FUN_1455662a0(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  __uint64 _Var8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  uVar11 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var8 = (ulonglong)uVar11 * 0x48;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar6 = AK::MemoryMgr::Malloc(0,_Var8);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar6)) {
      if (uVar10 != 0) {
        puVar9 = (undefined4 *)((longlong)pvVar6 + 0x30);
        do {
          if ((undefined8 *)(puVar9 + -0xc) != (undefined8 *)0x0) {
            *(undefined ***)(puVar9 + -0xc) = &PTR_LAB_149daa618;
            puVar9[-9] = 0xffffffff;
            *(undefined8 *)(puVar9 + -8) = 0;
            puVar9[-6] = 0;
            puVar9[-4] = 0;
            *(undefined1 *)(puVar9 + -2) = 0xff;
            *(undefined1 *)puVar9 = 0xff;
            *(undefined8 *)(puVar9 + 2) = 0;
            *(undefined8 *)(puVar9 + 4) = 0;
          }
          lVar5 = *param_1 + (-0x30 - (longlong)pvVar6);
          puVar9[-10] = *(undefined4 *)((longlong)puVar9 + lVar5 + 8);
          puVar9[-9] = *(undefined4 *)((longlong)puVar9 + lVar5 + 0xc);
          uVar4 = *(undefined8 *)((longlong)puVar9 + lVar5 + 0x18);
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)((longlong)puVar9 + lVar5 + 0x10);
          *(undefined8 *)(puVar9 + -6) = uVar4;
          uVar1 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x24);
          uVar2 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x28);
          uVar3 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x2c);
          puVar9[-4] = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x20);
          puVar9[-3] = uVar1;
          puVar9[-2] = uVar2;
          puVar9[-1] = uVar3;
          uVar1 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x34);
          uVar2 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x38);
          uVar3 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x3c);
          *puVar9 = *(undefined4 *)((longlong)puVar9 + lVar5 + 0x30);
          puVar9[1] = uVar1;
          puVar9[2] = uVar2;
          puVar9[3] = uVar3;
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)((longlong)puVar9 + lVar5 + 0x40);
          plVar7 = (longlong *)((longlong)puVar9 + *param_1 + (-0x30 - (longlong)pvVar6));
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
          puVar9 = puVar9 + 0x12;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar11;
  *param_1 = (longlong)pvVar6;
  return 1;
}



// FUNCTION 145566410 FUN_145566410 body=310 status=ok
// SIG undefined FUN_145566410(void)

undefined8 FUN_145566410(longlong *param_1)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  iVar6 = (uVar1 >> 1) + uVar1;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    iVar6 = 1;
  }
  _Var3 = (ulonglong)(iVar6 + uVar1) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
        if (uVar7 != 0) {
          puVar5 = (undefined4 *)((longlong)pvVar2 + 0x1c);
          do {
            if (puVar5 + -7 != (undefined4 *)0x0) {
              puVar5[-5] = 0;
              puVar5[-4] = 0;
              *(undefined8 *)(puVar5 + -3) = 0;
              puVar5[-1] = 0;
              *puVar5 = 0xffffffff;
            }
            puVar4 = (undefined4 *)((longlong)puVar5 + *param_1 + (-0x1c - (longlong)pvVar2));
            puVar5[-7] = *puVar4;
            FUN_1455e6370(puVar5 + -5,puVar4 + 2);
            FUN_1455e6320();
            puVar5 = puVar5 + 8;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145566532;
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 != (void *)0x0) {
LAB_145566532:
      *param_1 = (longlong)pvVar2;
      *(uint *)((longlong)param_1 + 0xc) = iVar6 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145566550 FUN_145566550 body=196 status=ok
// SIG undefined FUN_145566550(void)

int * FUN_145566550(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar5 = piVar4 + (ulonglong)uVar1 * 8;
  for (; (piVar4 != piVar5 && (*piVar4 != param_2)); piVar4 = piVar4 + 8) {
  }
  piVar6 = (int *)0x0;
  piVar3 = piVar4 + 2;
  if (piVar4 == piVar5) {
    piVar3 = piVar6;
  }
  if ((piVar3 == (int *)0x0) &&
     (((uVar1 < *(uint *)((longlong)param_1 + 0xc) || (cVar2 = FUN_145566410(), cVar2 != '\0')) &&
      (piVar3 = piVar6, uVar1 < *(uint *)((longlong)param_1 + 0xc))))) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    piVar4 = (int *)((ulonglong)uVar1 * 0x20 + *param_1);
    if (piVar4 != (int *)0x0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = -1;
      *piVar4 = param_2;
      piVar3 = piVar4 + 2;
    }
  }
  return piVar3;
}



// FUNCTION 145566620 FUN_145566620 body=249 status=ok
// SIG undefined FUN_145566620(void)

undefined8 * FUN_145566620(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_149daa630;
  param_1[3] = &PTR_LAB_149daa720;
  param_1[5] = &PTR_FUN_149daa730;
  lVar3 = param_1[0x17];
  if (lVar3 != 0) {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      FUN_1455e6320();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x17]);
    param_1[0x17] = 0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  FUN_145566230(param_1 + 0x11);
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  FUN_1450ef0b0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 145566740 FUN_145566740 body=1125 status=ok
// SIG undefined FUN_145566740(void)

undefined8
FUN_145566740(int *param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort *puVar12;
  short *psVar13;
  byte bVar14;
  byte bVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  bVar15 = *(byte *)(param_4 + 1);
  bVar14 = *(byte *)*param_4;
  bVar7 = (byte)((char)bVar15 + 1) & 7;
  iVar9 = *(int *)((longlong)param_4 + 0xc) - ((char)bVar15 + 1 >> 3);
  puVar12 = (ushort *)((byte *)*param_4 + ((longlong)(char)bVar15 + 1 >> 3));
  *(byte *)(param_4 + 1) = bVar7;
  *(int *)((longlong)param_4 + 0xc) = iVar9;
  *param_4 = (longlong)puVar12;
  if ((bVar14 >> (bVar15 & 0x1f) & 1) == 0) {
    iVar9 = 1;
  }
  else {
    uVar1 = *puVar12;
    uVar6 = bVar7 + 4;
    *(byte *)(param_4 + 1) = (byte)uVar6 & 7;
    *(uint *)((longlong)param_4 + 0xc) = iVar9 - (uVar6 >> 3);
    *param_4 = (longlong)((ulonglong)(uVar6 >> 3) + (longlong)puVar12);
    iVar9 = (uVar1 >> bVar7 & 0xf) + 1;
  }
  uVar10 = 0;
  *param_1 = iVar9;
  bVar15 = *(byte *)(param_4 + 1);
  bVar14 = *(byte *)*param_4;
  bVar7 = (byte)((char)bVar15 + 1) & 7;
  iVar9 = *(int *)((longlong)param_4 + 0xc) - ((char)bVar15 + 1 >> 3);
  pbVar16 = (byte *)*param_4 + ((longlong)(char)bVar15 + 1 >> 3);
  *(byte *)(param_4 + 1) = bVar7;
  *(int *)((longlong)param_4 + 0xc) = iVar9;
  *param_4 = (longlong)pbVar16;
  if ((bVar14 >> (bVar15 & 0x1f) & 1) != 0) {
    sVar2 = *(short *)pbVar16;
    uVar6 = bVar7 + 8;
    *(byte *)(param_4 + 1) = (byte)uVar6 & 7;
    *(uint *)((longlong)param_4 + 0xc) = iVar9 - (uVar6 >> 3);
    iVar9 = (char)(sVar2 >> bVar7) + 1;
    *param_4 = (longlong)(pbVar16 + (uVar6 >> 3));
    iVar8 = iVar9 * 2;
    param_1[6] = iVar9;
    uVar17 = uVar10;
    if (iVar8 != 0) {
      uVar6 = iVar8 + 3U & 0xfffffffc;
      uVar11 = *(int *)(param_5 + 0x50) + uVar6;
      if (uVar11 <= *(uint *)(param_5 + 0x54)) {
        uVar17 = *(ulonglong *)(param_5 + 0x48);
        *(uint *)(param_5 + 0x50) = uVar11;
        *(ulonglong *)(param_5 + 0x48) = uVar6 + uVar17;
      }
    }
    *(ulonglong *)(param_1 + 8) = uVar17;
    if (0 < param_1[6]) {
      iVar9 = FUN_1455670d0(param_3);
      uVar17 = uVar10;
      uVar18 = uVar10;
      do {
        uVar3 = (&DAT_14c746a00)[iVar9];
        bVar15 = *(byte *)(param_4 + 1);
        iVar8 = (char)bVar15 + iVar9;
        lVar4 = *(longlong *)*param_4;
        *(byte *)(param_4 + 1) = (byte)iVar8 & 7;
        bVar14 = (byte)uVar3 & (byte)(lVar4 >> (bVar15 & 0x3f));
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar8 >> 3);
        *param_4 = ((longlong)iVar8 >> 3) + *param_4;
        *(byte *)(uVar18 + *(longlong *)(param_1 + 8)) = bVar14;
        bVar15 = *(byte *)(param_4 + 1);
        uVar3 = (&DAT_14c746a00)[iVar9];
        iVar8 = iVar9 + (char)bVar15;
        lVar4 = *(longlong *)*param_4;
        *(byte *)(param_4 + 1) = (byte)iVar8 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar8 >> 3);
        bVar15 = (byte)uVar3 & (byte)(lVar4 >> (bVar15 & 0x3f));
        *param_4 = ((longlong)iVar8 >> 3) + *param_4;
        *(byte *)(uVar18 + 1 + *(longlong *)(param_1 + 8)) = bVar15;
        if ((((uint)bVar14 == (uint)bVar15) || (param_3 <= (int)(uint)bVar14)) ||
           (param_3 <= (int)(uint)bVar15)) goto LAB_145566b84;
        uVar6 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar6;
        uVar18 = uVar18 + 2;
      } while ((int)uVar6 < param_1[6]);
    }
  }
  bVar15 = *(byte *)(param_4 + 1);
  iVar9 = (char)bVar15 + 2;
  uVar1 = *(ushort *)*param_4;
  *(byte *)(param_4 + 1) = (byte)iVar9 & 7;
  *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
  *param_4 = ((longlong)iVar9 >> 3) + *param_4;
  if ((uVar1 >> (bVar15 & 0x1f) & 3) == 0) {
    if (1 < *param_1) {
      uVar17 = uVar10;
      if (param_3 != 0) {
        uVar6 = param_3 + 3U & 0xfffffffc;
        uVar11 = *(int *)(param_5 + 0x50) + uVar6;
        if (uVar11 <= *(uint *)(param_5 + 0x54)) {
          uVar17 = *(ulonglong *)(param_5 + 0x48);
          *(uint *)(param_5 + 0x50) = uVar11;
          *(ulonglong *)(param_5 + 0x48) = uVar6 + uVar17;
        }
      }
      *(ulonglong *)(param_1 + 2) = uVar17;
      uVar17 = uVar10;
      if (0 < param_3) {
        do {
          bVar15 = *(byte *)(param_4 + 1);
          iVar9 = (char)bVar15 + 4;
          uVar1 = *(ushort *)*param_4;
          *(byte *)(param_4 + 1) = (byte)iVar9 & 7;
          *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
          *param_4 = ((longlong)iVar9 >> 3) + *param_4;
          *(byte *)(uVar17 + *(longlong *)(param_1 + 2)) = (byte)(uVar1 >> (bVar15 & 0x1f)) & 0xf;
          if (*param_1 <= (int)(uint)*(byte *)(*(longlong *)(param_1 + 2) + uVar17))
          goto LAB_145566b84;
          uVar17 = uVar17 + 1;
        } while ((longlong)uVar17 < (longlong)param_3);
      }
    }
    uVar17 = uVar10;
    if (*param_1 * 2 != 0) {
      uVar6 = *param_1 * 2 + 3U & 0xfffffffc;
      uVar11 = *(int *)(param_5 + 0x50) + uVar6;
      if (uVar11 <= *(uint *)(param_5 + 0x54)) {
        uVar17 = *(ulonglong *)(param_5 + 0x48);
        *(uint *)(param_5 + 0x50) = uVar11;
        *(ulonglong *)(param_5 + 0x48) = uVar6 + uVar17;
      }
    }
    *(ulonglong *)(param_1 + 4) = uVar17;
    uVar17 = uVar10;
    if (0 < *param_1) {
      do {
        lVar4 = param_4[1];
        iVar9 = (char)lVar4 + 8;
        bVar15 = (byte)iVar9 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
        *(byte *)(param_4 + 1) = bVar15;
        psVar13 = (short *)(((longlong)(char)lVar4 + 8 >> 3) + *param_4);
        *param_4 = (longlong)psVar13;
        uVar6 = bVar15 + 8;
        sVar2 = *psVar13;
        *(byte *)(param_4 + 1) = (byte)uVar6 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (uVar6 >> 3);
        *param_4 = (ulonglong)(uVar6 >> 3) + (longlong)psVar13;
        *(char *)(uVar17 + *(longlong *)(param_1 + 4)) = (char)(sVar2 >> bVar15);
        if (*(int *)(param_2 + 0x10) <= (int)*(char *)(*(longlong *)(param_1 + 4) + uVar17))
        goto LAB_145566b84;
        bVar15 = *(byte *)(param_4 + 1);
        iVar9 = (char)bVar15 + 8;
        sVar2 = *(short *)*param_4;
        *(byte *)(param_4 + 1) = (byte)iVar9 & 7;
        *(int *)((longlong)param_4 + 0xc) = *(int *)((longlong)param_4 + 0xc) - (iVar9 >> 3);
        *param_4 = ((longlong)iVar9 >> 3) + *param_4;
        *(char *)(*(longlong *)(param_1 + 4) + 1 + uVar17) = (char)(sVar2 >> (bVar15 & 0x1f));
        if (*(int *)(param_2 + 0x14) <= (int)*(char *)(*(longlong *)(param_1 + 4) + 1 + uVar17))
        goto LAB_145566b84;
        uVar6 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar6;
        uVar17 = uVar17 + 2;
      } while ((int)uVar6 < *param_1);
    }
    uVar5 = 0;
  }
  else {
LAB_145566b84:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 145566bb0 FUN_145566bb0 body=1300 status=ok
// SIG undefined FUN_145566bb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145566bb0(longlong param_1,int *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint *puVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  int *piVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  int iVar35;
  longlong lVar36;
  undefined8 *puVar37;
  longlong *plVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 uStack_20d0;
  undefined1 auStack_20c8 [48];
  uint local_2098 [2];
  longlong local_2090;
  undefined8 *local_2088;
  undefined1 local_2078 [8240];
  undefined8 uStack_48;
  
  uStack_48 = 0x145566bc7;
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar35 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x3c) * 4);
  uVar26 = (longlong)iVar35 * 8;
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  uStack_20d0 = 0x145566c21;
  lVar29 = -(uVar23 & 0xfffffffffffffff0);
  uVar2 = (longlong)iVar35 * 4;
  local_2088 = (undefined8 *)((longlong)local_2098 + lVar29);
  uVar23 = uVar2 + 0xf;
  if (uVar23 <= uVar2) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_20c8 + lVar29 + -8) = 0x145566c4a;
  lVar25 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = uVar2 + 0xf;
  lVar24 = (longlong)local_2098 + lVar25 + lVar29;
  local_2090 = lVar24;
  if (uVar23 <= uVar2) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_20c8 + lVar25 + lVar29 + -8) = 0x145566c6b;
  lVar36 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = uVar26 + 0xf;
  lVar17 = lVar36 + lVar25 + lVar29 + -0x2098;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)(auStack_20c8 + lVar36 + lVar25 + lVar29 + -8) = 0x145566c88;
  lVar8 = -(uVar23 & 0xfffffffffffffff0);
  puVar34 = auStack_20c8 + lVar8 + lVar36 + lVar25 + lVar29;
  iVar39 = 0;
  plVar3 = (longlong *)((longlong)local_2098 + lVar8 + lVar36 + lVar25 + lVar29);
  if (0 < iVar35) {
    lVar31 = 0;
    puVar33 = auStack_20c8 + lVar8 + lVar36 + lVar25 + lVar29;
    plVar38 = plVar3;
    do {
      if (*param_2 < 2) {
        uVar23 = 0;
      }
      else {
        uVar23 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 2) + lVar31);
      }
      uVar26 = (longlong)
               *(int *)((longlong)*(char *)(*(longlong *)(param_2 + 4) + uVar23 * 2) * 0x40 + 0x34 +
                       *(longlong *)(lVar6 + 0x30)) * 4;
      uVar23 = uVar26 + 0xf;
      if (uVar23 <= uVar26) {
        uVar23 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar33 + -8) = 0x145566d06;
      lVar29 = -(uVar23 & 0xfffffffffffffff0);
      puVar34 = puVar33 + lVar29;
      *plVar38 = (longlong)(puVar33 + lVar29 + 0x30);
      *(undefined8 *)(puVar33 + lVar29 + -8) = 0x145566d1e;
      lVar24 = FUN_145567770(param_1);
      *plVar38 = lVar24;
      *(uint *)((longlong)local_2098 + lVar31 * 4 + lVar17 + 0x2098) = (uint)(lVar24 != 0);
      _Dst = *(void **)((*(longlong *)(param_1 + 0x20) - (longlong)plVar3) + (longlong)plVar38);
      *(undefined8 *)(puVar33 + lVar29 + -8) = 0x145566d47;
      memset(_Dst,0,((longlong)iVar5 & 0x7fffffffU) << 1);
      iVar39 = iVar39 + 1;
      lVar31 = lVar31 + 1;
      plVar38 = plVar38 + 1;
      puVar33 = puVar33 + lVar29;
      lVar24 = local_2090;
    } while (iVar39 < *(int *)(param_1 + 0x10));
  }
  iVar35 = 0;
  if (0 < param_2[6]) {
    lVar29 = 0;
    do {
      uVar23 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + lVar29);
      if ((*(int *)((longlong)local_2098 + uVar23 * 4 + lVar17 + 0x2098) != 0) ||
         (*(int *)((longlong)local_2098 +
                  (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + 1 + lVar29) * 4 + lVar17 +
                  0x2098) != 0)) {
        *(undefined4 *)((longlong)local_2098 + uVar23 * 4 + lVar17 + 0x2098) = 1;
        *(undefined4 *)
         ((longlong)local_2098 +
         (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + 1 + lVar29) * 4 + lVar17 + 0x2098) = 1;
      }
      iVar35 = iVar35 + 1;
      lVar29 = lVar29 + 2;
    } while (iVar35 < param_2[6]);
  }
  puVar22 = local_2088;
  uVar30 = 0;
  if (0 < *param_2) {
    lVar29 = 0;
    do {
      iVar39 = 0;
      iVar35 = 0;
      lVar25 = 0;
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar36 = 0;
        puVar37 = puVar22;
        do {
          if ((*(longlong *)(param_2 + 2) == 0) ||
             (*(byte *)(*(longlong *)(param_2 + 2) + lVar25) == uVar30)) {
            iVar39 = iVar39 + 1;
            *(uint *)(lVar36 + lVar24) =
                 (uint)(*(int *)((longlong)local_2098 + lVar25 * 4 + lVar17 + 0x2098) != 0);
            lVar36 = lVar36 + 4;
            *puVar37 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar25 * 8);
            puVar37 = puVar37 + 1;
          }
          iVar35 = iVar35 + 1;
          lVar25 = lVar25 + 1;
        } while (iVar35 < *(int *)(param_1 + 0x10));
      }
      lVar25 = *(longlong *)(param_2 + 4);
      *(int *)(puVar34 + 0x20) = iVar39;
      cVar4 = *(char *)(lVar29 + 1 + lVar25);
      lVar25 = *(longlong *)(lVar6 + 0x38);
      *(undefined8 *)(puVar34 + -8) = 0x145566e7a;
      FUN_1455e6800(param_1,lVar25 + (longlong)cVar4 * 0x28);
      uVar30 = uVar30 + 1;
      lVar29 = lVar29 + 2;
    } while ((int)uVar30 < *param_2);
  }
  piVar32 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110);
  if (*piVar32 < DAT_14c7ffc20) {
    *(undefined8 *)(puVar34 + -8) = 0x145567061;
    FUN_144b3d300();
    if (DAT_14c7ffc20 == -1) {
      _DAT_14c7ffc10 = 0;
      uRam000000014c7ffc18 = 0;
      *(undefined8 *)(puVar34 + -8) = 0x145567085;
      _Init_thread_footer();
    }
  }
  if (*piVar32 < DAT_14c7ffc40) {
    *(undefined8 *)(puVar34 + -8) = 0x145567096;
    FUN_144b3d300();
    if (DAT_14c7ffc40 == -1) {
      _DAT_14c7ffc30 = 0xffffffffffffffff;
      uRam000000014c7ffc38 = 0xffffffffffffffff;
      *(undefined8 *)(puVar34 + -8) = 0x1455670bf;
      _Init_thread_footer();
    }
  }
  lVar29 = (longlong)(param_2[6] + -1);
  if (-1 < param_2[6] + -1) {
    iVar35 = _DAT_14c7ffc10;
    iVar39 = DAT_14c7ffc10_4;
    iVar28 = (int)uRam000000014c7ffc18;
    iVar18 = uRam000000014c7ffc18._4_4_;
    uVar30 = _DAT_14c7ffc30;
    uVar19 = DAT_14c7ffc30_4;
    uVar20 = (uint)uRam000000014c7ffc38;
    uVar21 = uRam000000014c7ffc38._4_4_;
    lVar24 = (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3);
    do {
      puVar27 = *(uint **)(*(longlong *)(param_1 + 0x20) +
                          (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + lVar29 * 2 + 1) * 8);
      if (0 < lVar24) {
        lVar36 = *(longlong *)
                  (*(longlong *)(param_1 + 0x20) +
                  (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + lVar29 * 2) * 8) -
                 (longlong)puVar27;
        lVar25 = lVar24;
        do {
          uVar9 = *puVar27;
          uVar10 = puVar27[1];
          uVar11 = puVar27[2];
          uVar12 = puVar27[3];
          piVar32 = (int *)(lVar36 + (longlong)puVar27);
          iVar13 = *piVar32;
          iVar14 = piVar32[1];
          iVar15 = piVar32[2];
          iVar16 = piVar32[3];
          uVar40 = -(uint)((int)uVar30 < (int)uVar9 != iVar13 < iVar35);
          uVar41 = -(uint)((int)uVar19 < (int)uVar10 != iVar14 < iVar39);
          uVar42 = -(uint)((int)uVar20 < (int)uVar11 != iVar15 < iVar28);
          uVar43 = -(uint)((int)uVar21 < (int)uVar12 != iVar16 < iVar18);
          uVar44 = -(uint)(iVar13 < iVar35) & uVar9;
          uVar45 = -(uint)(iVar14 < iVar39) & uVar10;
          uVar46 = -(uint)(iVar15 < iVar28) & uVar11;
          uVar47 = -(uint)(iVar16 < iVar18) & uVar12;
          piVar32 = (int *)(lVar36 + -0x10 + (longlong)(puVar27 + 4));
          *piVar32 = (((uVar30 ^ uVar40) & uVar9) + iVar13) - uVar44;
          piVar32[1] = (((uVar19 ^ uVar41) & uVar10) + iVar14) - uVar45;
          piVar32[2] = (((uVar20 ^ uVar42) & uVar11) + iVar15) - uVar46;
          piVar32[3] = (((uVar21 ^ uVar43) & uVar12) + iVar16) - uVar47;
          *puVar27 = (uVar44 + iVar13) - (uVar40 & uVar9);
          puVar27[1] = (uVar45 + iVar14) - (uVar41 & uVar10);
          puVar27[2] = (uVar46 + iVar15) - (uVar42 & uVar11);
          puVar27[3] = (uVar47 + iVar16) - (uVar43 & uVar12);
          lVar25 = lVar25 + -1;
          puVar27 = puVar27 + 4;
        } while (lVar25 != 0);
      }
      lVar29 = lVar29 + -1;
    } while (-1 < lVar29);
  }
  iVar35 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  else {
    lVar29 = 0;
    do {
      uVar23 = 0;
      if (1 < *param_2) {
        uVar23 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 2) + lVar29);
      }
      pcVar1 = (char *)(*(longlong *)(param_2 + 4) + uVar23 * 2);
      iVar28 = *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x3c) * 4) >> 1;
      iVar39 = *(int *)(*(longlong *)(lVar6 + 0x38) + 0x1c + (longlong)pcVar1[1] * 0x28);
      if (iVar28 < iVar39) {
        iVar39 = iVar28;
      }
      cVar4 = *pcVar1;
      lVar24 = *(longlong *)(lVar6 + 0x30);
      lVar25 = plVar3[lVar29];
      *(int *)(puVar34 + 0x20) = iVar39;
      *(undefined8 *)(puVar34 + -8) = 0x145567007;
      (*DAT_14c7ffc48)(param_1,(longlong)cVar4 * 0x40 + lVar24,lVar25,local_2078);
      uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar29 * 8);
      *(undefined8 *)(puVar34 + -8) = 0x14556701e;
      FUN_145569100(iVar5,uVar7,local_2078,iVar39);
      iVar35 = iVar35 + 1;
      lVar29 = lVar29 + 1;
    } while (iVar35 < *(int *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return 0;
}



// FUNCTION 1455670d0 FUN_1455670d0 body=23 status=ok
// SIG undefined FUN_1455670d0(void)

int FUN_1455670d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = param_1 - 1;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 1455670f0 FUN_1455670f0 body=1655 status=ok
// SIG undefined FUN_1455670f0(void)

undefined8 FUN_1455670f0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ushort *puVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  sbyte sVar9;
  char *pcVar10;
  ushort *puVar11;
  undefined1 uVar12;
  uint uVar13;
  int *piVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  ushort uVar25;
  longlong lVar26;
  uint *puVar27;
  int iVar28;
  ulonglong uVar29;
  
  iVar28 = 0;
  iVar18 = (char)*(byte *)(param_3 + 1) + 5;
  iVar23 = -1;
  uVar25 = *(ushort *)*param_3 >> (*(byte *)(param_3 + 1) & 0x1f);
  uVar16 = uVar25 & 0x1f;
  *(byte *)(param_3 + 1) = (byte)iVar18 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar18 >> 3);
  *param_3 = ((longlong)iVar18 >> 3) + *param_3;
  *(uint *)(param_1 + 6) = uVar16;
  if ((uVar25 & 0x1f) == 0) {
LAB_145567184:
    lVar20 = 0;
  }
  else {
    uVar17 = uVar16 + 3 & 0xfffffffc;
    uVar16 = *(uint *)(param_4 + 0x50) + uVar17;
    if (*(uint *)(param_4 + 0x54) < uVar16) goto LAB_145567184;
    lVar20 = *(longlong *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar16;
    *(ulonglong *)(param_4 + 0x48) = (ulonglong)uVar17 + lVar20;
  }
  iVar18 = 0;
  param_1[1] = lVar20;
  if (0 < (int)param_1[6]) {
    do {
      bVar3 = *(byte *)(param_3 + 1);
      iVar24 = (char)bVar3 + 4;
      uVar25 = *(ushort *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar24 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar24 >> 3);
      *param_3 = ((longlong)iVar24 >> 3) + *param_3;
      *(byte *)((longlong)iVar18 + param_1[1]) = (byte)(uVar25 >> (bVar3 & 0x1f)) & 0xf;
      iVar24 = (int)*(char *)((longlong)iVar18 + param_1[1]);
      if (iVar24 <= iVar23) {
        iVar24 = iVar23;
      }
      iVar23 = iVar24;
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)param_1[6]);
  }
  iVar18 = (iVar23 + 1) * 0xb;
  if (iVar18 == 0) {
LAB_145567229:
    lVar20 = 0;
  }
  else {
    uVar16 = iVar18 + 3U & 0xfffffffc;
    uVar17 = *(uint *)(param_4 + 0x50) + uVar16;
    if (*(uint *)(param_4 + 0x54) < uVar17) goto LAB_145567229;
    lVar20 = *(longlong *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar17;
    *(ulonglong *)(param_4 + 0x48) = (ulonglong)uVar16 + lVar20;
  }
  iVar18 = 0;
  *param_1 = lVar20;
  if (0 < iVar23 + 1) {
    do {
      piVar14 = (int *)(param_2 + 0x18);
      bVar3 = *(byte *)(param_3 + 1);
      iVar24 = (char)bVar3 + 3;
      uVar25 = *(ushort *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar24 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar24 >> 3);
      *param_3 = ((longlong)iVar24 >> 3) + *param_3;
      lVar20 = (longlong)iVar18 * 0xb;
      *(byte *)(lVar20 + *param_1) = ((byte)(uVar25 >> (bVar3 & 0x1f)) & 7) + 1;
      bVar3 = *(byte *)(param_3 + 1);
      iVar24 = (char)bVar3 + 2;
      uVar25 = *(ushort *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar24 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar24 >> 3);
      *param_3 = ((longlong)iVar24 >> 3) + *param_3;
      *(byte *)(*param_1 + 1 + lVar20) = (byte)(uVar25 >> (bVar3 & 0x1f)) & 3;
      if (*(char *)(*param_1 + 1 + lVar20) == '\0') {
        *(undefined1 *)(*param_1 + 2 + lVar20) = 0;
      }
      else {
        bVar3 = *(byte *)(param_3 + 1);
        iVar24 = (char)bVar3 + 8;
        sVar5 = *(short *)*param_3;
        *(byte *)(param_3 + 1) = (byte)iVar24 & 7;
        *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar24 >> 3);
        *param_3 = ((longlong)iVar24 >> 3) + *param_3;
        *(char *)(*param_1 + 2 + lVar20) = (char)(sVar5 >> (bVar3 & 0x1f));
        if (*piVar14 <= (int)(uint)*(byte *)(*param_1 + 2 + lVar20)) goto LAB_145567666;
      }
      if (*piVar14 <= (int)(uint)*(byte *)(*param_1 + 2 + lVar20)) goto LAB_145567666;
      iVar24 = 0;
      lVar26 = 0;
      if (0 < 1 << (*(byte *)(*param_1 + 1 + lVar20) & 0x1f)) {
        do {
          bVar3 = *(byte *)(param_3 + 1);
          iVar1 = (char)bVar3 + 8;
          sVar5 = *(short *)*param_3;
          *(byte *)(param_3 + 1) = (byte)iVar1 & 7;
          *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar1 >> 3);
          *param_3 = ((longlong)iVar1 >> 3) + *param_3;
          *(char *)(*param_1 + lVar26 + 3 + lVar20) = (char)(sVar5 >> (bVar3 & 0x1f)) + -1;
          bVar3 = *(byte *)(lVar26 + 3 + *param_1 + lVar20);
          if ((*piVar14 <= (int)(uint)bVar3) && (bVar3 != 0xff)) goto LAB_145567666;
          iVar24 = iVar24 + 1;
          lVar26 = lVar26 + 1;
        } while (iVar24 < 1 << (*(byte *)(*param_1 + lVar20 + 1) & 0x1f));
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar23 + 1);
  }
  bVar3 = *(byte *)(param_3 + 1);
  iVar18 = (char)bVar3 + 2;
  uVar25 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar18 & 7;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar18 >> 3);
  *param_3 = ((longlong)iVar18 >> 3) + *param_3;
  *(uint *)(param_1 + 7) = (uVar25 >> (bVar3 & 0x1f) & 3) + 1;
  bVar3 = *(byte *)(param_3 + 1);
  iVar18 = (char)bVar3 + 4;
  uVar25 = *(ushort *)*param_3;
  *(byte *)(param_3 + 1) = (byte)iVar18 & 7;
  uVar16 = uVar25 >> (bVar3 & 0x1f) & 0xf;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar18 >> 3);
  *param_3 = ((longlong)iVar18 >> 3) + *param_3;
  if (0 < (int)*(uint *)(param_1 + 6)) {
    uVar22 = (ulonglong)*(uint *)(param_1 + 6);
    pcVar10 = (char *)param_1[1];
    do {
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      iVar28 = iVar28 + *(char *)((longlong)cVar4 * 0xb + *param_1);
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  iVar18 = (iVar28 + 2) * 2;
  if (iVar18 == 0) {
LAB_1455674cb:
    lVar20 = 0;
  }
  else {
    uVar17 = iVar18 + 3U & 0xfffffffc;
    uVar19 = *(int *)(param_4 + 0x50) + uVar17;
    if (*(uint *)(param_4 + 0x54) < uVar19) goto LAB_1455674cb;
    lVar20 = *(longlong *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar19;
    *(ulonglong *)(param_4 + 0x48) = (ulonglong)uVar17 + lVar20;
  }
  puVar27 = (uint *)(param_4 + 0x50);
  param_1[2] = lVar20;
  if (iVar28 + 2 == 0) {
LAB_14556750d:
    lVar20 = 0;
  }
  else {
    uVar17 = iVar28 + 5U & 0xfffffffc;
    uVar19 = *puVar27 + uVar17;
    if (*(uint *)(param_4 + 0x54) < uVar19) goto LAB_14556750d;
    lVar20 = *(longlong *)(param_4 + 0x48);
    *puVar27 = uVar19;
    *(longlong *)(param_4 + 0x48) = (ulonglong)uVar17 + lVar20;
  }
  param_1[3] = lVar20;
  if (iVar28 == 0) {
LAB_145567553:
    param_1[5] = 0;
    if (iVar28 != 0) goto LAB_14556755e;
  }
  else {
    uVar17 = iVar28 + 3U & 0xfffffffc;
    uVar19 = *puVar27 + uVar17;
    if (*(uint *)(param_4 + 0x54) < uVar19) goto LAB_145567553;
    lVar20 = *(longlong *)(param_4 + 0x48);
    *(uint *)(param_4 + 0x50) = uVar19;
    *(longlong *)(param_4 + 0x48) = (ulonglong)uVar17 + lVar20;
    param_1[5] = lVar20;
LAB_14556755e:
    uVar17 = iVar28 + 3U & 0xfffffffc;
    uVar19 = *(uint *)(param_4 + 0x50) + uVar17;
    if (uVar19 <= *(uint *)(param_4 + 0x54)) {
      lVar20 = *(longlong *)(param_4 + 0x48);
      *(uint *)(param_4 + 0x50) = uVar19;
      *(longlong *)(param_4 + 0x48) = (ulonglong)uVar17 + lVar20;
      goto LAB_145567584;
    }
  }
  lVar20 = 0;
LAB_145567584:
  uVar21 = 0;
  uVar17 = 0;
  param_1[4] = lVar20;
  sVar9 = (sbyte)uVar16;
  uVar22 = uVar21;
  uVar29 = uVar21;
  if (0 < (int)param_1[6]) {
    do {
      uVar17 = (int)uVar22 +
               (int)*(char *)((longlong)*(char *)((longlong)(int)uVar29 + param_1[1]) * 0xb +
                             *param_1);
      if ((longlong)uVar21 < (longlong)(int)uVar17) {
        lVar20 = uVar21 * 2 + 4;
        do {
          uVar7 = (&DAT_14c746a00)[uVar16];
          bVar3 = *(byte *)(param_3 + 1);
          iVar18 = (int)(char)bVar3 + uVar16;
          lVar26 = *(longlong *)*param_3;
          *(byte *)(param_3 + 1) = (byte)iVar18 & 7;
          uVar25 = (ushort)uVar7 & (ushort)(lVar26 >> (bVar3 & 0x3f));
          *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar18 >> 3);
          *param_3 = ((longlong)iVar18 >> 3) + *param_3;
          *(ushort *)(lVar20 + param_1[2]) = uVar25;
          if ((int)(1 << sVar9 | 1U >> 0x20 - sVar9) <= (int)(uint)uVar25) goto LAB_145567666;
          uVar21 = uVar21 + 1;
          lVar20 = lVar20 + 2;
        } while ((longlong)uVar21 < (longlong)(int)uVar17);
      }
      uVar19 = (int)uVar29 + 1;
      uVar22 = (ulonglong)uVar17;
      uVar29 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)param_1[6]);
  }
  iVar18 = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
LAB_145567666:
    uVar8 = 0xffffffff;
  }
  else {
    *(undefined2 *)param_1[2] = 0;
    *(short *)(param_1[2] + 2) = 1 << sVar9;
    uVar17 = uVar17 + 2;
    *(uint *)((longlong)param_1 + 0x34) = uVar17;
    iVar23 = iVar18;
    if (0 < (int)uVar17) {
      do {
        *(char *)((longlong)iVar23 + param_1[3]) = (char)iVar23;
        iVar23 = iVar23 + 1;
        uVar17 = *(uint *)((longlong)param_1 + 0x34);
      } while (iVar23 < (int)uVar17);
    }
    FUN_145567b20(param_1[3],param_1[2],uVar17 & 0xffff);
    if (0 < *(int *)((longlong)param_1 + 0x34) + -2) {
      do {
        uVar16 = 0;
        puVar11 = (ushort *)param_1[2];
        uVar15 = 0;
        uVar13 = 1;
        uVar12 = 1;
        uVar25 = puVar11[1];
        puVar2 = puVar11 + (longlong)iVar18 + 2;
        uVar17 = uVar16;
        uVar19 = uVar16;
        if (0 < iVar18 + 2) {
          do {
            uVar6 = *puVar11;
            if ((uVar16 < uVar6) && (uVar6 < *puVar2)) {
              uVar16 = (uint)uVar6;
              uVar19 = uVar17;
            }
            uVar15 = (undefined1)uVar19;
            if ((uVar6 < uVar25) && (*puVar2 < uVar6)) {
              uVar13 = uVar17;
              uVar25 = uVar6;
            }
            uVar12 = (undefined1)uVar13;
            uVar17 = uVar17 + 1;
            puVar11 = puVar11 + 1;
          } while ((int)uVar17 < iVar18 + 2);
        }
        lVar20 = (longlong)iVar18;
        iVar18 = iVar18 + 1;
        *(undefined1 *)(lVar20 + param_1[5]) = uVar15;
        *(undefined1 *)(lVar20 + param_1[4]) = uVar12;
      } while (iVar18 < *(int *)((longlong)param_1 + 0x34) + -2);
    }
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 145567770 FUN_145567770 body=929 status=ok
// SIG undefined FUN_145567770(void)

uint * FUN_145567770(longlong *param_1,longlong *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int local_res8;
  int local_res10;
  longlong local_58;
  
  bVar1 = *(byte *)(param_1 + 1);
  lVar16 = *(longlong *)(param_1[3] + 0x40);
  iVar13 = (char)bVar1 + 1;
  iVar4 = *(int *)(&DAT_14c74677c + (longlong)(int)param_2[7] * 4);
  bVar2 = *(byte *)*param_1;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar13 >> 3);
  *(byte *)(param_1 + 1) = (byte)iVar13 & 7;
  *param_1 = (longlong)((byte *)*param_1 + ((longlong)iVar13 >> 3));
  if ((bVar2 >> (bVar1 & 0x1f) & 1) == 0) {
    return (uint *)0x0;
  }
  iVar13 = 0;
  for (uVar6 = iVar4 - 1; uVar6 != 0; uVar6 = uVar6 >> 1) {
    iVar13 = iVar13 + 1;
  }
  bVar1 = *(byte *)(param_1 + 1);
  local_res8 = 2;
  iVar8 = (char)bVar1 + iVar13;
  lVar15 = *(longlong *)*param_1;
  uVar6 = (&DAT_14c746a00)[iVar13];
  *(byte *)(param_1 + 1) = (byte)iVar8 & 7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar8 >> 3);
  *param_1 = ((longlong)iVar8 >> 3) + *param_1;
  *param_3 = (uint)(lVar15 >> (bVar1 & 0x3f)) & uVar6;
  uVar6 = (&DAT_14c746a00)[iVar13];
  bVar1 = *(byte *)(param_1 + 1);
  lVar15 = *(longlong *)*param_1;
  iVar13 = (char)bVar1 + iVar13;
  *(byte *)(param_1 + 1) = (byte)iVar13 & 7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (iVar13 >> 3);
  *param_1 = ((longlong)iVar13 >> 3) + *param_1;
  param_3[1] = (uint)(lVar15 >> (bVar1 & 0x3f)) & uVar6;
  local_res10 = 0;
  if (0 < (int)param_2[6]) {
    local_58 = 0;
    do {
      iVar13 = 0;
      lVar15 = *param_2;
      lVar11 = (longlong)*(char *)(param_2[1] + local_58) * 0xb;
      bVar1 = *(byte *)(lVar11 + 1 + lVar15);
      cVar3 = *(char *)(lVar11 + lVar15);
      uVar14 = (ulonglong)cVar3;
      if (bVar1 != 0) {
        iVar13 = FUN_1455ea1b0((ulonglong)*(byte *)(lVar11 + 2 + lVar15) * 0x20 + lVar16,param_1);
      }
      if ('\0' < cVar3) {
        lVar15 = 0;
        do {
          bVar2 = *(byte *)(((longlong)iVar13 & (longlong)(1 << (bVar1 & 0x1f)) - 1U) + lVar11 + 3 +
                           *param_2);
          iVar13 = iVar13 >> (bVar1 & 0x1f);
          lVar12 = local_res8 + lVar15;
          if (bVar2 == 0xff) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_1455ea1b0((ulonglong)bVar2 * 0x20 + lVar16,param_1);
          }
          lVar15 = lVar15 + 1;
          param_3[lVar12] = uVar6;
        } while (lVar15 < (longlong)uVar14);
        uVar14 = uVar14 & 0xffffffff;
      }
      local_res8 = local_res8 + (int)uVar14;
      local_58 = local_58 + 1;
      local_res10 = local_res10 + 1;
    } while (local_res10 < (int)param_2[6]);
  }
  iVar13 = 2;
  if (2 < *(int *)((longlong)param_2 + 0x34)) {
    lVar16 = 2;
    do {
      lVar15 = param_2[2];
      lVar11 = (longlong)*(char *)(param_2[5] + -2 + lVar16);
      lVar12 = (longlong)*(char *)(lVar16 + -2 + param_2[4]);
      iVar17 = (param_3[lVar12] & 0x7fff) - (param_3[lVar11] & 0x7fff);
      iVar8 = -iVar17;
      if (-iVar17 < 0) {
        iVar8 = iVar17;
      }
      uVar6 = (uint)*(ushort *)(lVar15 + lVar11 * 2);
      iVar7 = (int)(iVar8 * (*(ushort *)(lVar15 + lVar16 * 2) - uVar6)) /
              (int)(*(ushort *)(lVar15 + lVar12 * 2) - uVar6);
      uVar6 = param_3[lVar16];
      iVar8 = -iVar7;
      if (-1 < iVar17) {
        iVar8 = iVar7;
      }
      uVar5 = (param_3[lVar11] & 0x7fff) + iVar8;
      uVar10 = iVar4 - uVar5;
      if (uVar6 == 0) {
        param_3[lVar16] = uVar5 | 0x8000;
      }
      else {
        uVar9 = uVar5;
        if ((int)uVar10 < (int)uVar5) {
          uVar9 = uVar10;
        }
        if ((int)uVar6 < (int)(uVar9 * 2)) {
          if ((uVar6 & 1) == 0) {
            iVar8 = (int)uVar6 >> 1;
          }
          else {
            iVar8 = -((int)(uVar6 + 1) >> 1);
          }
        }
        else if ((int)uVar5 < (int)uVar10) {
          iVar8 = uVar6 - uVar5;
        }
        else {
          iVar8 = (uVar10 - uVar6) + -1;
        }
        param_3[lVar16] = uVar5 + iVar8;
        param_3[*(char *)(param_2[5] + -2 + lVar16)] =
             param_3[*(char *)(param_2[5] + -2 + lVar16)] & 0x7fff;
        param_3[*(char *)(lVar16 + -2 + param_2[4])] =
             param_3[*(char *)(lVar16 + -2 + param_2[4])] & 0x7fff;
      }
      iVar13 = iVar13 + 1;
      lVar16 = lVar16 + 1;
    } while (iVar13 < *(int *)((longlong)param_2 + 0x34));
  }
  return param_3;
}



// FUNCTION 145567b20 FUN_145567b20 body=547 status=ok
// SIG undefined FUN_145567b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145567b20(undefined1 *param_1,longlong param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_res20;
  uint local_58;
  uint local_54;
  uint local_4c;
  
  uVar10 = (uint)param_3;
  uVar5 = (ulonglong)param_3 + 0xf;
  if (uVar5 <= param_3) {
    uVar5 = 0xffffffffffffff0;
  }
  local_54 = 1;
  puVar15 = (undefined1 *)((longlong)&local_58 - (uVar5 & 0xfffffffffffffff0));
  puVar9 = param_1;
  if (1 < param_3) {
    local_58 = (uint)param_3;
    puVar8 = param_1;
    do {
      puVar9 = puVar15;
      puVar15 = puVar8;
      uVar4 = 0;
      uVar14 = local_54 & 0xffff;
      local_4c = uVar14;
      if (uVar14 < uVar10) {
        do {
          uVar11 = (uint)uVar4;
          uVar6 = uVar14 * 2 + (uint)uVar4;
          uVar5 = (ulonglong)(uint)uVar4;
          local_res20 = uVar4 + uVar14;
          if (uVar10 <= uVar6) {
            uVar6 = uVar10;
          }
          uVar16 = (ulonglong)local_res20;
          if (uVar4 < uVar16) {
            uVar17 = (ulonglong)local_res20;
            uVar7 = (ulonglong)uVar4;
            do {
              uVar11 = (uint)uVar7;
              uVar10 = local_58;
              uVar14 = local_4c;
              if ((longlong)(ulonglong)uVar6 <= (longlong)uVar17) break;
              uVar1 = *(ushort *)(param_2 + (longlong)(char)puVar15[uVar5] * 2);
              uVar2 = *(ushort *)(param_2 + (longlong)(char)puVar15[uVar17] * 2);
              cVar3 = puVar15[uVar5];
              uVar12 = uVar5 + 1;
              if (uVar2 <= uVar1) {
                local_res20 = local_res20 + 1;
                cVar3 = puVar15[uVar17];
                uVar12 = uVar5;
              }
              uVar5 = uVar12;
              uVar12 = (ulonglong)(uVar11 + 1);
              if (uVar2 <= uVar1) {
                uVar12 = uVar7;
              }
              uVar11 = (uint)uVar12;
              uVar7 = (ulonglong)uVar4;
              uVar4 = uVar4 + 1;
              puVar9[uVar7] = cVar3;
              if (uVar2 <= uVar1) {
                uVar17 = uVar17 + 1;
              }
              uVar7 = uVar12;
              uVar10 = local_58;
              uVar14 = local_4c;
            } while ((longlong)uVar5 < (longlong)uVar16);
          }
          for (lVar13 = (longlong)(int)uVar11; lVar13 < (longlong)uVar16; lVar13 = lVar13 + 1) {
            uVar5 = (ulonglong)uVar4;
            uVar4 = uVar4 + 1;
            puVar9[uVar5] = puVar15[lVar13];
          }
          for (lVar13 = (longlong)(int)local_res20; lVar13 < (longlong)(ulonglong)uVar6;
              lVar13 = lVar13 + 1) {
            uVar5 = (ulonglong)uVar4;
            uVar4 = uVar4 + 1;
            puVar9[uVar5] = puVar15[lVar13];
          }
        } while (uVar4 + uVar14 < uVar10);
        if (uVar4 < param_3) goto LAB_145567cb3;
      }
      else {
LAB_145567cb3:
        puVar8 = puVar9 + uVar4;
        uVar5 = (ulonglong)(ushort)(param_3 - uVar4);
        do {
          *puVar8 = puVar8[(longlong)puVar15 - (longlong)puVar9];
          puVar8 = puVar8 + 1;
          uVar5 = uVar5 - 1;
          uVar10 = local_58;
        } while (uVar5 != 0);
      }
      uVar4 = (short)local_54 * 2;
      local_54 = CONCAT22((short)(local_54 >> 0x10),uVar4);
      puVar8 = puVar9;
    } while (uVar4 < param_3);
  }
  uVar5 = (ulonglong)param_3;
  if ((puVar15 == param_1) && (param_3 != 0)) {
    lVar13 = (longlong)puVar9 - (longlong)puVar15;
    do {
      *puVar15 = puVar15[lVar13];
      puVar15 = puVar15 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 145567d50 FUN_145567d50 body=99 status=ok
// SIG undefined FUN_145567d50(void)

void FUN_145567d50(void)

{
  char cVar1;
  AkRuntimeEnvironmentMgr *pAVar2;
  
  pAVar2 = AK::AkRuntimeEnvironmentMgr::Instance();
  cVar1 = (**(code **)(*(longlong *)pAVar2 + 8))(pAVar2,0x80);
  if (cVar1 != '\0') {
    DAT_14c7ffc48 = (code *)&LAB_1455eb620;
    return;
  }
  pAVar2 = AK::AkRuntimeEnvironmentMgr::Instance();
  cVar1 = (**(code **)(*(longlong *)pAVar2 + 8))(pAVar2,0x20);
  DAT_14c7ffc48 = FUN_145567dc0;
  if (cVar1 != '\0') {
    DAT_14c7ffc48 = (code *)&LAB_1455eb310;
  }
  return;
}



// FUNCTION 145567dc0 FUN_145567dc0 body=741 status=ok
// SIG undefined FUN_145567dc0(void)

undefined8 FUN_145567dc0(longlong param_1,longlong param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if (param_3 == (int *)0x0) {
    memset(param_4,0,
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x3c) * 4) /
                  2 << 2));
    return 0;
  }
  iVar9 = *(int *)(param_2 + 0x34);
  uVar12 = 0;
  piVar1 = param_4 + param_5;
  iVar13 = *(int *)(param_2 + 0x38) * *param_3;
  iVar14 = 1;
  if (1 < iVar9) {
    lVar15 = 1;
    do {
      if (piVar1 <= param_4) {
        return 1;
      }
      lVar11 = (longlong)*(char *)(*(longlong *)(param_2 + 0x18) + lVar15);
      piVar8 = param_4;
      if (param_3[lVar11] < 0x8000) {
        iVar10 = param_3[lVar11] * *(int *)(param_2 + 0x38);
        fVar31 = 0.0;
        fVar32 = 1.0;
        fVar33 = 2.0;
        fVar34 = 3.0;
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x10) + lVar11 * 2);
        auVar25 = ZEXT416((uint)(float)iVar13);
        fVar6 = (float)iVar13;
        piVar8 = piVar1;
        if (param_4 + (int)(uVar2 - uVar12) < piVar1) {
          piVar8 = param_4 + (int)(uVar2 - uVar12);
        }
        iVar9 = *(int *)(param_2 + 0x34);
        fVar20 = (float)(iVar10 - iVar13) / (float)(int)(uVar2 - uVar12);
        fVar3 = fVar20 * 0.09083397;
        fVar5 = fVar6 * 0.09083397 - 23.162663;
        fVar4 = fVar20 * -3.905166e-10;
        fVar20 = fVar20 * -373463.94;
        fVar7 = 1.1000539e+09 - fVar6 * 373463.94;
        fVar6 = 1.1610165e-07 - fVar6 * 3.905166e-10;
        iVar13 = iVar10;
        uVar12 = (uint)uVar2;
        if (param_4 < piVar8) {
          do {
            fVar21 = fVar4 * fVar31;
            fVar22 = fVar4 * fVar32;
            fVar23 = fVar4 * fVar33;
            fVar24 = fVar4 * fVar34;
            fVar27 = (float)(int)(fVar3 * fVar31 + fVar5 + 0.49999);
            fVar28 = (float)(int)(fVar3 * fVar32 + fVar5 + 0.49999);
            fVar29 = (float)(int)(fVar3 * fVar33 + fVar5 + 0.49999);
            fVar30 = (float)(int)(fVar3 * fVar34 + fVar5 + 0.49999);
            fVar16 = fVar20 * fVar31;
            fVar17 = fVar20 * fVar32;
            fVar18 = fVar20 * fVar33;
            fVar19 = fVar20 * fVar34;
            fVar31 = fVar31 + 4.0;
            fVar32 = fVar32 + 4.0;
            fVar33 = fVar33 + 4.0;
            fVar34 = fVar34 + 4.0;
            auVar26._4_4_ = fVar22 + fVar6 + fVar28 * 4.299235e-09;
            auVar26._0_4_ = fVar21 + fVar6 + fVar27 * 4.299235e-09;
            auVar26._8_4_ = fVar23 + fVar6 + fVar29 * 4.299235e-09;
            auVar26._12_4_ = fVar24 + fVar6 + fVar30 * 4.299235e-09;
            auVar26 = rcpps(auVar25,auVar26);
            auVar25._0_4_ = auVar26._0_4_ + fVar16 + fVar7 + fVar27 * 12500109.0;
            auVar25._4_4_ = auVar26._4_4_ + fVar17 + fVar7 + fVar28 * 12500109.0;
            auVar25._8_4_ = auVar26._8_4_ + fVar18 + fVar7 + fVar29 * 12500109.0;
            auVar25._12_4_ = auVar26._12_4_ + fVar19 + fVar7 + fVar30 * 12500109.0;
            *param_4 = (int)auVar25._0_4_;
            param_4[1] = (int)auVar25._4_4_;
            param_4[2] = (int)auVar25._8_4_;
            param_4[3] = (int)auVar25._12_4_;
            param_4 = param_4 + 4;
          } while (param_4 < piVar8);
          iVar9 = *(int *)(param_2 + 0x34);
        }
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 1;
      param_4 = piVar8;
    } while (iVar14 < iVar9);
  }
  return 1;
}



// FUNCTION 1455680b0 FUN_1455680b0 body=845 status=ok
// SIG undefined FUN_1455680b0(void)

void FUN_1455680b0(longlong param_1,int param_2,int param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort *puVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  
  lVar22 = 0;
  lVar24 = (longlong)param_3;
  bVar25 = (char)param_3 - 1;
  lVar1 = lVar24 + 1;
  local_118 = *(undefined8 *)(&DAT_149dd3490 + lVar24 * 0x10);
  uStack_110 = *(undefined8 *)(&UNK_149dd3498 + lVar24 * 0x10);
  lVar6 = lVar1 * 0x10;
  fVar9 = *(float *)(&DAT_149dd2f80 + lVar6);
  fVar10 = *(float *)(&UNK_149dd2f84 + lVar6);
  fVar11 = *(float *)(&UNK_149dd2f88 + lVar6);
  fVar12 = *(float *)(&UNK_149dd2f8c + lVar6);
  lVar6 = lVar1 * 0x10;
  lVar7 = lVar1 * 0x10;
  lVar8 = lVar1 * 0x10;
  lVar1 = lVar1 * 0x10;
  lVar23 = lVar24 * 0x10;
  fVar13 = *(float *)(&DAT_149dd2f70 + lVar23);
  fVar14 = *(float *)(&UNK_149dd2f74 + lVar23);
  fVar15 = *(float *)(&UNK_149dd2f78 + lVar23);
  fVar16 = *(float *)(&UNK_149dd2f7c + lVar23);
  local_138 = *(undefined8 *)(&DAT_149dd3500 + lVar24 * 0x10);
  uStack_130 = *(undefined8 *)(&UNK_149dd3508 + lVar24 * 0x10);
  iVar17 = (int)((param_2 >> 1) + (param_2 >> 0x1f & 7U)) >> 3;
  local_108 = *(undefined8 *)(&DAT_149dd3570 + lVar24 * 0x10);
  uStack_100 = *(undefined8 *)(&UNK_149dd3578 + lVar24 * 0x10);
  local_128 = *(undefined8 *)(&DAT_149dd35e0 + lVar24 * 0x10);
  uStack_120 = *(undefined8 *)(&UNK_149dd35e8 + lVar24 * 0x10);
  lVar23 = (longlong)(iVar17 + -1);
  puVar20 = &DAT_149daabc0 + lVar23;
  pfVar21 = param_4;
  fVar42 = *(float *)(&DAT_149dd34a0 + lVar6);
  fVar43 = *(float *)(&UNK_149dd34a4 + lVar6);
  fVar44 = *(float *)(&UNK_149dd34a8 + lVar6);
  fVar45 = *(float *)(&UNK_149dd34ac + lVar6);
  fVar38 = *(float *)(&DAT_149dd3580 + lVar8);
  fVar39 = *(float *)(&UNK_149dd3584 + lVar8);
  fVar40 = *(float *)(&UNK_149dd3588 + lVar8);
  fVar41 = *(float *)(&UNK_149dd358c + lVar8);
  fVar31 = *(float *)(&DAT_149dd3510 + lVar7);
  fVar33 = *(float *)(&UNK_149dd3514 + lVar7);
  fVar35 = *(float *)(&UNK_149dd3518 + lVar7);
  fVar37 = *(float *)(&UNK_149dd351c + lVar7);
  fVar46 = *(float *)(&DAT_149dd35f0 + lVar1);
  fVar47 = *(float *)(&UNK_149dd35f4 + lVar1);
  fVar48 = *(float *)(&UNK_149dd35f8 + lVar1);
  fVar49 = *(float *)(&UNK_149dd35fc + lVar1);
  do {
    fVar36 = fVar41;
    fVar34 = fVar40;
    fVar32 = fVar39;
    fVar30 = fVar38;
    fVar29 = fVar45;
    fVar28 = fVar44;
    fVar27 = fVar43;
    fVar26 = fVar42;
    uVar18 = (ulonglong)(*puVar20 >> (bVar25 & 0x3f));
    fVar42 = fVar9 * fVar26 - fVar31;
    fVar43 = fVar10 * fVar27 - fVar33;
    fVar44 = fVar11 * fVar28 - fVar35;
    fVar45 = fVar12 * fVar29 - fVar37;
    pfVar2 = (float *)(param_1 + uVar18 * 0x10);
    fVar38 = fVar30 * fVar9 - fVar46;
    fVar39 = fVar32 * fVar10 - fVar47;
    fVar40 = fVar34 * fVar11 - fVar48;
    fVar41 = fVar36 * fVar12 - fVar49;
    uVar19 = (ulonglong)((ushort)(&DAT_149daabc0)[lVar22] >> (bVar25 & 0x3f));
    pfVar3 = (float *)(param_1 + (uVar18 + 1) * 0x10);
    pfVar4 = (float *)(param_1 + uVar19 * 0x10);
    fVar31 = *pfVar4 + pfVar2[3];
    fVar33 = pfVar4[2] + pfVar2[1];
    fVar35 = pfVar4[1] + pfVar2[2];
    fVar37 = pfVar4[3] + *pfVar2;
    pfVar5 = (float *)(param_1 + (uVar19 + 1) * 0x10);
    fVar54 = *pfVar5 - pfVar3[3];
    fVar56 = pfVar5[2] - pfVar3[1];
    fVar58 = pfVar5[1] - pfVar3[2];
    fVar60 = pfVar5[3] - *pfVar3;
    fVar66 = (*pfVar5 + pfVar3[3]) * 0.5;
    fVar67 = (pfVar5[2] + pfVar3[1]) * 0.5;
    fVar68 = (pfVar5[1] + pfVar3[2]) * 0.5;
    fVar69 = (pfVar5[3] + *pfVar3) * 0.5;
    fVar62 = (pfVar2[3] - *pfVar4) * 0.5;
    fVar63 = (pfVar2[1] - pfVar4[2]) * 0.5;
    fVar64 = (pfVar2[2] - pfVar4[1]) * 0.5;
    fVar65 = (*pfVar2 - pfVar4[3]) * 0.5;
    fVar46 = (fVar54 * fVar42 + fVar31 * fVar38) * 0.5;
    fVar47 = (fVar56 * fVar43 + fVar33 * fVar39) * 0.5;
    fVar48 = (fVar58 * fVar44 + fVar35 * fVar40) * 0.5;
    fVar49 = (fVar60 * fVar45 + fVar37 * fVar41) * 0.5;
    fVar55 = (fVar54 * fVar38 - fVar31 * fVar42) * 0.5;
    fVar57 = (fVar56 * fVar39 - fVar33 * fVar43) * 0.5;
    fVar59 = (fVar58 * fVar40 - fVar35 * fVar44) * 0.5;
    fVar61 = (fVar60 * fVar41 - fVar37 * fVar45) * 0.5;
    fVar50 = (float)local_118 * fVar13 - (float)local_138;
    fVar51 = local_118._4_4_ * fVar14 - local_138._4_4_;
    fVar52 = (float)uStack_110 * fVar15 - (float)uStack_130;
    fVar53 = uStack_110._4_4_ * fVar16 - uStack_130._4_4_;
    local_138 = local_118;
    uStack_130 = uStack_110;
    fVar54 = fVar46 + fVar66;
    fVar56 = fVar47 + fVar67;
    fVar58 = fVar48 + fVar68;
    fVar60 = fVar49 + fVar69;
    fVar66 = fVar66 - fVar46;
    fVar67 = fVar67 - fVar47;
    fVar68 = fVar68 - fVar48;
    fVar69 = fVar69 - fVar49;
    local_118 = CONCAT44(fVar51,fVar50);
    uStack_110 = CONCAT44(fVar53,fVar52);
    fVar46 = (float)local_108 * fVar13 - (float)local_128;
    fVar47 = local_108._4_4_ * fVar14 - local_128._4_4_;
    fVar48 = (float)uStack_100 * fVar15 - (float)uStack_120;
    fVar49 = uStack_100._4_4_ * fVar16 - uStack_120._4_4_;
    local_128 = local_108;
    uStack_120 = uStack_100;
    fVar31 = -(fVar55 + fVar62);
    fVar33 = -(fVar57 + fVar63);
    fVar35 = -(fVar59 + fVar64);
    fVar37 = -(fVar61 + fVar65);
    local_108 = CONCAT44(fVar47,fVar46);
    uStack_100 = CONCAT44(fVar49,fVar48);
    *pfVar21 = (fVar46 * fVar31 + fVar50 * fVar54) * 0.00390625;
    pfVar21[1] = (fVar47 * fVar33 + fVar51 * fVar56) * 0.00390625;
    pfVar21[2] = (fVar48 * fVar35 + fVar52 * fVar58) * 0.00390625;
    pfVar21[3] = (fVar49 * fVar37 + fVar53 * fVar60) * 0.00390625;
    pfVar2 = pfVar21 + (longlong)iVar17 * 4;
    *pfVar2 = (fVar50 * fVar31 - fVar46 * fVar54) * 0.00390625;
    pfVar2[1] = (fVar51 * fVar33 - fVar47 * fVar56) * 0.00390625;
    pfVar2[2] = (fVar52 * fVar35 - fVar48 * fVar58) * 0.00390625;
    pfVar2[3] = (fVar53 * fVar37 - fVar49 * fVar60) * 0.00390625;
    lVar22 = lVar22 + 1;
    pfVar21 = pfVar21 + 4;
    puVar20 = puVar20 + -1;
    fVar54 = -(fVar55 - fVar62);
    fVar56 = -(fVar57 - fVar63);
    fVar58 = -(fVar59 - fVar64);
    fVar60 = -(fVar61 - fVar65);
    fVar31 = (fVar46 - fVar50) * 0.70710677;
    fVar33 = (fVar47 - fVar51) * 0.70710677;
    fVar35 = (fVar48 - fVar52) * 0.70710677;
    fVar37 = (fVar49 - fVar53) * 0.70710677;
    fVar46 = (fVar50 + fVar46) * 0.70710677;
    fVar47 = (fVar51 + fVar47) * 0.70710677;
    fVar48 = (fVar52 + fVar48) * 0.70710677;
    fVar49 = (fVar53 + fVar49) * 0.70710677;
    pfVar2 = param_4 + lVar23 * 4;
    *pfVar2 = (fVar49 * fVar60 + fVar37 * fVar69) * 0.00390625;
    pfVar2[1] = (fVar48 * fVar58 + fVar35 * fVar68) * 0.00390625;
    pfVar2[2] = (fVar47 * fVar56 + fVar33 * fVar67) * 0.00390625;
    pfVar2[3] = (fVar46 * fVar54 + fVar31 * fVar66) * 0.00390625;
    lVar1 = lVar23 + iVar17;
    lVar23 = lVar23 + -1;
    pfVar2 = param_4 + lVar1 * 4;
    *pfVar2 = (fVar37 * fVar60 - fVar49 * fVar69) * 0.00390625;
    pfVar2[1] = (fVar35 * fVar58 - fVar48 * fVar68) * 0.00390625;
    pfVar2[2] = (fVar33 * fVar56 - fVar47 * fVar67) * 0.00390625;
    pfVar2[3] = (fVar31 * fVar54 - fVar46 * fVar66) * 0.00390625;
    fVar31 = fVar26;
    fVar33 = fVar27;
    fVar35 = fVar28;
    fVar37 = fVar29;
    fVar46 = fVar30;
    fVar47 = fVar32;
    fVar48 = fVar34;
    fVar49 = fVar36;
  } while (lVar22 < lVar23);
  return;
}



// FUNCTION 145568400 FUN_145568400 body=1317 status=ok
// SIG undefined FUN_145568400(void)

void FUN_145568400(float *param_1,int param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
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
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  longlong lVar72;
  float *pfVar73;
  float *pfVar74;
  float *pfVar75;
  float *pfVar76;
  float *pfVar77;
  float *pfVar78;
  float *pfVar79;
  longlong lVar80;
  float *pfVar81;
  float *pfVar82;
  float *pfVar83;
  float fVar84;
  float fVar85;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar80 = (longlong)param_3;
  lVar72 = lVar80 * 0x10;
  local_f8 = *(float *)(&DAT_149dd3020 + lVar72);
  fStack_f4 = *(float *)(&UNK_149dd3024 + lVar72);
  fStack_f0 = *(float *)(&UNK_149dd3028 + lVar72);
  fStack_ec = *(float *)(&UNK_149dd302c + lVar72);
  pfVar76 = param_1 + (longlong)param_2 + -0x10;
  lVar72 = lVar80 * 0x10;
  local_e8 = *(float *)(&DAT_149dd3260 + lVar72);
  fStack_e4 = *(float *)(&UNK_149dd3264 + lVar72);
  fStack_e0 = *(float *)(&UNK_149dd3268 + lVar72);
  fStack_dc = *(float *)(&UNK_149dd326c + lVar72);
  pfVar78 = param_1 + (longlong)param_2 + -4;
  lVar72 = lVar80 * 0x10;
  fVar4 = *(float *)(&DAT_149dd2f90 + lVar72);
  fVar5 = *(float *)(&UNK_149dd2f94 + lVar72);
  fVar6 = *(float *)(&UNK_149dd2f98 + lVar72);
  fVar7 = *(float *)(&UNK_149dd2f9c + lVar72);
  lVar72 = lVar80 * 0x10;
  local_118 = local_f8 * fVar4 - *(float *)(&DAT_149dd3140 + lVar72);
  fStack_114 = fStack_f4 * fVar5 - *(float *)(&UNK_149dd3144 + lVar72);
  fStack_110 = fStack_f0 * fVar6 - *(float *)(&UNK_149dd3148 + lVar72);
  fStack_10c = fStack_ec * fVar7 - *(float *)(&UNK_149dd314c + lVar72);
  lVar80 = lVar80 * 0x10;
  local_108 = local_e8 * fVar4 - *(float *)(&DAT_149dd3380 + lVar80);
  fStack_104 = fStack_e4 * fVar5 - *(float *)(&UNK_149dd3384 + lVar80);
  fStack_100 = fStack_e0 * fVar6 - *(float *)(&UNK_149dd3388 + lVar80);
  fStack_fc = fStack_dc * fVar7 - *(float *)(&UNK_149dd338c + lVar80);
  pfVar81 = param_4 + (longlong)param_2 + -4;
  pfVar74 = param_1;
  pfVar77 = param_1;
  pfVar79 = param_4;
  if (param_5 < param_2) {
    param_2 = param_2 - param_5;
    fVar84 = local_118;
    fVar8 = fStack_114;
    fVar9 = fStack_110;
    fVar10 = fStack_10c;
    fVar85 = local_108;
    fVar11 = fStack_104;
    fVar12 = fStack_100;
    fVar13 = fStack_fc;
    for (; fStack_fc = fVar13, fStack_100 = fVar12, fStack_104 = fVar11, local_108 = fVar85,
        fStack_10c = fVar10, fStack_110 = fVar9, fStack_114 = fVar8, local_118 = fVar84,
        pfVar77 < param_1 + param_2; pfVar77 = pfVar77 + 0x10) {
      fVar8 = *pfVar74;
      fVar9 = pfVar74[1];
      fVar10 = pfVar74[2];
      fVar11 = pfVar74[3];
      fVar12 = pfVar74[4];
      fVar13 = pfVar74[5];
      fVar14 = pfVar74[6];
      fVar15 = pfVar74[7];
      fVar16 = pfVar74[8];
      fVar17 = pfVar74[9];
      fVar18 = pfVar74[10];
      fVar19 = pfVar74[0xb];
      fVar20 = pfVar74[0xc];
      fVar21 = pfVar74[0xd];
      fVar22 = pfVar74[0xe];
      fVar23 = pfVar74[0xf];
      fVar24 = *pfVar79;
      fVar25 = pfVar79[1];
      fVar26 = pfVar79[2];
      fVar27 = pfVar79[3];
      pfVar79 = pfVar79 + 0x10;
      pfVar73 = (float *)((longlong)param_4 + (0x10 - (longlong)param_1) + (longlong)pfVar74);
      fVar28 = *pfVar73;
      fVar29 = pfVar73[1];
      fVar30 = pfVar73[2];
      fVar31 = pfVar73[3];
      pfVar73 = (float *)((longlong)param_4 + (0x20 - (longlong)param_1) + (longlong)pfVar74);
      fVar32 = *pfVar73;
      fVar33 = pfVar73[1];
      fVar34 = pfVar73[2];
      fVar35 = pfVar73[3];
      pfVar73 = (float *)((longlong)param_4 + (0x30 - (longlong)param_1) + (longlong)pfVar74);
      fVar36 = *pfVar73;
      fVar37 = pfVar73[1];
      fVar38 = pfVar73[2];
      fVar39 = pfVar73[3];
      pfVar77[0] = 0.0;
      pfVar77[1] = 0.0;
      pfVar77[2] = 0.0;
      pfVar77[3] = 0.0;
      pfVar74[8] = 0.0;
      pfVar74[9] = 0.0;
      pfVar74[10] = 0.0;
      pfVar74[0xb] = 0.0;
      fVar84 = local_118 * fVar4 - local_f8;
      fVar85 = local_108 * fVar4 - local_e8;
      pfVar74[4] = (float)(int)fVar11 * fVar27 * fStack_114 +
                   (float)(int)fVar9 * fVar25 * fStack_104;
      pfVar74[5] = (float)(int)fVar15 * fVar31 * fStack_110 +
                   (float)(int)fVar13 * fVar29 * fStack_100;
      pfVar74[6] = (float)(int)fVar19 * fVar35 * fStack_10c +
                   (float)(int)fVar17 * fVar33 * fStack_fc;
      pfVar74[7] = (float)(int)fVar23 * fVar39 * fVar84 + (float)(int)fVar21 * fVar37 * fVar85;
      pfVar74[0xc] = (float)(int)fVar11 * fVar27 * fStack_104 -
                     (float)(int)fVar9 * fVar25 * fStack_114;
      pfVar74[0xd] = (float)(int)fVar15 * fVar31 * fStack_100 -
                     (float)(int)fVar13 * fVar29 * fStack_110;
      pfVar74[0xe] = (float)(int)fVar19 * fVar35 * fStack_fc -
                     (float)(int)fVar17 * fVar33 * fStack_10c;
      pfVar74[0xf] = (float)(int)fVar23 * fVar39 * fVar85 - (float)(int)fVar21 * fVar37 * fVar84;
      pfVar74 = pfVar74 + 0x10;
      *pfVar76 = (float)(int)fVar22 * fVar38 * fStack_fc - (float)(int)fVar20 * fVar36 * fStack_10c;
      pfVar76[1] = (float)(int)fVar18 * fVar34 * fStack_100 -
                   (float)(int)fVar16 * fVar32 * fStack_110;
      pfVar76[2] = (float)(int)fVar14 * fVar30 * fStack_104 -
                   (float)(int)fVar12 * fVar28 * fStack_114;
      pfVar76[3] = (float)(int)fVar10 * fVar26 * local_108 - (float)(int)fVar8 * fVar24 * local_118;
      pfVar76[8] = (float)(int)fVar22 * fVar38 * fStack_10c +
                   (float)(int)fVar20 * fVar36 * fStack_fc;
      pfVar76[9] = (float)(int)fVar18 * fVar34 * fStack_110 +
                   (float)(int)fVar16 * fVar32 * fStack_100;
      pfVar76[10] = (float)(int)fVar14 * fVar30 * fStack_114 +
                    (float)(int)fVar12 * fVar28 * fStack_104;
      pfVar76[0xb] = (float)(int)fVar10 * fVar26 * local_118 +
                     (float)(int)fVar8 * fVar24 * local_108;
      pfVar76 = pfVar76 + -0x10;
      fVar8 = fStack_114 * fVar5 - fStack_f4;
      fVar9 = fStack_110 * fVar6 - fStack_f0;
      fVar10 = fStack_10c * fVar7 - fStack_ec;
      fVar11 = fStack_104 * fVar5 - fStack_e4;
      fVar12 = fStack_100 * fVar6 - fStack_e0;
      fVar13 = fStack_fc * fVar7 - fStack_dc;
      local_f8 = local_118;
      fStack_f4 = fStack_114;
      fStack_f0 = fStack_110;
      fStack_ec = fStack_10c;
      local_e8 = local_108;
      fStack_e4 = fStack_104;
      fStack_e0 = fStack_100;
      fStack_dc = fStack_fc;
    }
    lVar72 = (longlong)((int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2);
    pfVar78 = pfVar78 + lVar72 * -4;
    pfVar81 = pfVar81 + lVar72 * -4;
  }
  if (pfVar77 < pfVar76) {
    pfVar73 = pfVar81 + -8;
    pfVar75 = pfVar78 + -8;
    pfVar83 = pfVar74 + 8;
    pfVar82 = pfVar79 + 8;
    pfVar76 = pfVar76 + 8;
    pfVar77 = pfVar77 + 8;
    fVar84 = local_118;
    fVar8 = fStack_114;
    fVar9 = fStack_110;
    fVar10 = fStack_10c;
    fVar85 = local_108;
    fVar11 = fStack_104;
    fVar12 = fStack_100;
    fVar13 = fStack_fc;
    do {
      fStack_fc = fVar13;
      fStack_100 = fVar12;
      fStack_104 = fVar11;
      local_108 = fVar85;
      fStack_10c = fVar10;
      fStack_110 = fVar9;
      fStack_114 = fVar8;
      local_118 = fVar84;
      piVar3 = (int *)((longlong)pfVar82 + (longlong)pfVar74 + (-0x20 - (longlong)pfVar79));
      iVar40 = *piVar3;
      iVar41 = piVar3[1];
      iVar42 = piVar3[2];
      iVar43 = piVar3[3];
      fVar8 = pfVar83[-4];
      fVar9 = pfVar83[-3];
      fVar10 = pfVar83[-2];
      fVar11 = pfVar83[-1];
      fVar12 = *pfVar83;
      fVar13 = pfVar83[1];
      fVar14 = pfVar83[2];
      fVar15 = pfVar83[3];
      fVar16 = pfVar83[4];
      fVar17 = pfVar83[5];
      fVar18 = pfVar83[6];
      fVar19 = pfVar83[7];
      fVar20 = pfVar82[-8];
      fVar21 = pfVar82[-7];
      fVar22 = pfVar82[-6];
      fVar23 = pfVar82[-5];
      fVar24 = pfVar82[-4];
      fVar25 = pfVar82[-3];
      fVar26 = pfVar82[-2];
      fVar27 = pfVar82[-1];
      fVar28 = *pfVar82;
      fVar29 = pfVar82[1];
      fVar30 = pfVar82[2];
      fVar31 = pfVar82[3];
      fVar32 = pfVar75[-4];
      fVar33 = pfVar75[-3];
      fVar34 = pfVar75[-2];
      fVar35 = pfVar75[-1];
      fVar36 = pfVar82[4];
      fVar37 = pfVar82[5];
      fVar38 = pfVar82[6];
      fVar39 = pfVar82[7];
      fVar44 = pfVar75[4];
      fVar45 = pfVar75[5];
      fVar46 = pfVar75[6];
      fVar47 = pfVar75[7];
      piVar3 = (int *)((longlong)pfVar73 + (longlong)pfVar78 + (0x20 - (longlong)pfVar81));
      iVar48 = *piVar3;
      iVar49 = piVar3[1];
      iVar50 = piVar3[2];
      iVar51 = piVar3[3];
      fVar52 = pfVar73[8];
      fVar53 = pfVar73[9];
      fVar54 = pfVar73[10];
      fVar55 = pfVar73[0xb];
      fVar56 = *pfVar75;
      fVar57 = pfVar75[1];
      fVar58 = pfVar75[2];
      fVar59 = pfVar75[3];
      fVar60 = pfVar73[4];
      fVar61 = pfVar73[5];
      fVar62 = pfVar73[6];
      fVar63 = pfVar73[7];
      fVar64 = *pfVar73;
      fVar65 = pfVar73[1];
      fVar66 = pfVar73[2];
      fVar67 = pfVar73[3];
      fVar68 = pfVar73[-4];
      fVar69 = pfVar73[-3];
      fVar70 = pfVar73[-2];
      fVar71 = pfVar73[-1];
      fVar84 = local_118 * fVar4 - local_f8;
      fVar85 = local_108 * fVar4 - local_e8;
      pfVar75 = pfVar75 + -0x10;
      pfVar73 = pfVar73 + -0x10;
      pfVar83 = pfVar83 + 0x10;
      pfVar82 = pfVar82 + 0x10;
      pfVar77[-8] = (float)iVar50 * fVar54 * fStack_114 - (float)iVar48 * fVar52 * fStack_104;
      pfVar77[-7] = (float)(int)fVar46 * fVar62 * fStack_110 -
                    (float)(int)fVar44 * fVar60 * fStack_100;
      pfVar77[-6] = (float)(int)fVar58 * fVar66 * fStack_10c -
                    (float)(int)fVar56 * fVar64 * fStack_fc;
      pfVar77[-5] = (float)(int)fVar34 * fVar70 * fVar84 - (float)(int)fVar32 * fVar68 * fVar85;
      *pfVar77 = (float)iVar50 * fVar54 * fStack_104 + (float)iVar48 * fVar52 * fStack_114;
      pfVar77[1] = (float)(int)fVar46 * fVar62 * fStack_100 +
                   (float)(int)fVar44 * fVar60 * fStack_110;
      pfVar77[2] = (float)(int)fVar58 * fVar66 * fStack_fc +
                   (float)(int)fVar56 * fVar64 * fStack_10c;
      pfVar77[3] = (float)(int)fVar34 * fVar70 * fVar85 + (float)(int)fVar32 * fVar68 * fVar84;
      pfVar77[4] = (float)iVar43 * fVar23 * fStack_104 - (float)iVar41 * fVar21 * fStack_114;
      pfVar77[5] = (float)(int)fVar11 * fVar27 * fStack_100 -
                   (float)(int)fVar9 * fVar25 * fStack_110;
      pfVar77[6] = (float)(int)fVar15 * fVar31 * fStack_fc -
                   (float)(int)fVar13 * fVar29 * fStack_10c;
      pfVar77[7] = (float)(int)fVar19 * fVar39 * fVar85 - (float)(int)fVar17 * fVar37 * fVar84;
      pfVar77[-4] = (float)iVar43 * fVar23 * fStack_114 + (float)iVar41 * fVar21 * fStack_104;
      pfVar77[-3] = (float)(int)fVar11 * fVar27 * fStack_110 +
                    (float)(int)fVar9 * fVar25 * fStack_100;
      pfVar77[-2] = (float)(int)fVar15 * fVar31 * fStack_10c +
                    (float)(int)fVar13 * fVar29 * fStack_fc;
      pfVar77[-1] = (float)(int)fVar19 * fVar39 * fVar84 + (float)(int)fVar17 * fVar37 * fVar85;
      pfVar76[-8] = (float)(int)fVar18 * fVar38 * fStack_fc -
                    (float)(int)fVar16 * fVar36 * fStack_10c;
      pfVar76[-7] = (float)(int)fVar14 * fVar30 * fStack_100 -
                    (float)(int)fVar12 * fVar28 * fStack_110;
      pfVar76[-6] = (float)(int)fVar10 * fVar26 * fStack_104 -
                    (float)(int)fVar8 * fVar24 * fStack_114;
      pfVar76[-5] = (float)iVar42 * fVar22 * local_108 - (float)iVar40 * fVar20 * local_118;
      pfVar76[-4] = (float)(int)fVar35 * fVar71 * fStack_fc +
                    (float)(int)fVar33 * fVar69 * fStack_10c;
      pfVar76[-3] = (float)(int)fVar59 * fVar67 * fStack_100 +
                    (float)(int)fVar57 * fVar65 * fStack_110;
      pfVar76[-2] = (float)(int)fVar47 * fVar63 * fStack_104 +
                    (float)(int)fVar45 * fVar61 * fStack_114;
      pfVar76[-1] = (float)iVar51 * fVar55 * local_108 + (float)iVar49 * fVar53 * local_118;
      pfVar1 = pfVar77 + 8;
      *pfVar76 = (float)(int)fVar18 * fVar38 * fStack_10c + (float)(int)fVar16 * fVar36 * fStack_fc;
      pfVar76[1] = (float)(int)fVar14 * fVar30 * fStack_110 +
                   (float)(int)fVar12 * fVar28 * fStack_100;
      pfVar76[2] = (float)(int)fVar10 * fVar26 * fStack_114 +
                   (float)(int)fVar8 * fVar24 * fStack_104;
      pfVar76[3] = (float)iVar42 * fVar22 * local_118 + (float)iVar40 * fVar20 * local_108;
      pfVar76[4] = (float)(int)fVar35 * fVar71 * fStack_10c -
                   (float)(int)fVar33 * fVar69 * fStack_fc;
      pfVar76[5] = (float)(int)fVar59 * fVar67 * fStack_110 -
                   (float)(int)fVar57 * fVar65 * fStack_100;
      pfVar76[6] = (float)(int)fVar47 * fVar63 * fStack_114 -
                   (float)(int)fVar45 * fVar61 * fStack_104;
      pfVar76[7] = (float)iVar51 * fVar55 * local_118 - (float)iVar49 * fVar53 * local_108;
      pfVar2 = pfVar76 + -0x18;
      pfVar76 = pfVar76 + -0x10;
      pfVar77 = pfVar77 + 0x10;
      fVar8 = fStack_114 * fVar5 - fStack_f4;
      fVar9 = fStack_110 * fVar6 - fStack_f0;
      fVar10 = fStack_10c * fVar7 - fStack_ec;
      fVar11 = fStack_104 * fVar5 - fStack_e4;
      fVar12 = fStack_100 * fVar6 - fStack_e0;
      fVar13 = fStack_fc * fVar7 - fStack_dc;
      local_f8 = local_118;
      fStack_f4 = fStack_114;
      fStack_f0 = fStack_110;
      fStack_ec = fStack_10c;
      local_e8 = local_108;
      fStack_e4 = fStack_104;
      fStack_e0 = fStack_100;
      fStack_dc = fStack_fc;
    } while (pfVar1 < pfVar2);
  }
  return;
}



// FUNCTION 145568930 FUN_145568930 body=1985 status=ok
// SIG undefined FUN_145568930(void)

void FUN_145568930(longlong param_1,int param_2,int param_3,float *param_4)

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
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
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
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  
  lVar9 = (longlong)(param_3 + 2) * 0x10;
  fVar13 = *(float *)(&DAT_149dd2f80 + lVar9);
  fVar14 = *(float *)(&UNK_149dd2f84 + lVar9);
  fVar15 = *(float *)(&UNK_149dd2f88 + lVar9);
  fVar16 = *(float *)(&UNK_149dd2f8c + lVar9);
  lVar25 = (longlong)(param_3 + 10);
  lVar22 = (longlong)param_3 + 1;
  lVar9 = lVar25 * 0x10;
  lVar10 = lVar25 * 0x10;
  local_218 = *(undefined8 *)(&DAT_149dd36f0 + lVar22 * 0x10);
  uStack_210 = *(undefined8 *)(&UNK_149dd36f8 + lVar22 * 0x10);
  lVar11 = lVar22 * 0x10;
  lVar12 = lVar25 * 0x10;
  lVar25 = lVar25 * 0x10;
  local_1f8 = *(undefined8 *)(&DAT_149dd3780 + lVar22 * 0x10);
  uStack_1f0 = *(undefined8 *)(&UNK_149dd3788 + lVar22 * 0x10);
  local_208 = *(undefined8 *)(&DAT_149dd3810 + lVar22 * 0x10);
  uStack_200 = *(undefined8 *)(&UNK_149dd3818 + lVar22 * 0x10);
  lVar22 = (longlong)(param_3 + 3) * 0x10;
  fVar17 = *(float *)(&DAT_149dd2f80 + lVar22);
  fVar18 = *(float *)(&UNK_149dd2f84 + lVar22);
  fVar19 = *(float *)(&UNK_149dd2f88 + lVar22);
  fVar20 = *(float *)(&UNK_149dd2f8c + lVar22);
  lVar22 = (longlong)(param_3 + 0xb);
  local_1c8 = *(undefined8 *)(&DAT_149dd3020 + lVar22 * 0x10);
  uStack_1c0 = *(undefined8 *)(&UNK_149dd3028 + lVar22 * 0x10);
  local_1e8 = *(undefined8 *)(&DAT_149dd3140 + lVar22 * 0x10);
  uStack_1e0 = *(undefined8 *)(&UNK_149dd3148 + lVar22 * 0x10);
  local_1b8 = *(undefined8 *)(&DAT_149dd3260 + lVar22 * 0x10);
  uStack_1b0 = *(undefined8 *)(&UNK_149dd3268 + lVar22 * 0x10);
  local_1d8 = *(undefined8 *)(&DAT_149dd3380 + lVar22 * 0x10);
  uStack_1d0 = *(undefined8 *)(&UNK_149dd3388 + lVar22 * 0x10);
  uVar21 = (int)(param_2 + (param_2 >> 0x1f & 0x3fU)) >> 6;
  if (0 < (int)uVar21) {
    lVar22 = (longlong)((int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4);
    pfVar23 = (float *)(lVar22 * 0x30 + param_1 + 0x20);
    uVar24 = (ulonglong)uVar21;
    fVar27 = *(float *)(&DAT_149dd3140 + lVar10);
    fVar28 = *(float *)(&UNK_149dd3144 + lVar10);
    fVar74 = *(float *)(&UNK_149dd3148 + lVar10);
    fVar30 = *(float *)(&UNK_149dd314c + lVar10);
    fVar114 = *(float *)(&DAT_149dd3020 + lVar9);
    fVar118 = *(float *)(&UNK_149dd3024 + lVar9);
    fVar122 = *(float *)(&UNK_149dd3028 + lVar9);
    fVar126 = *(float *)(&UNK_149dd302c + lVar9);
    fVar62 = *(float *)(&DAT_149dd3260 + lVar12);
    fVar64 = *(float *)(&UNK_149dd3264 + lVar12);
    fVar66 = *(float *)(&UNK_149dd3268 + lVar12);
    fVar68 = *(float *)(&UNK_149dd326c + lVar12);
    fVar31 = *(float *)(&DAT_149dd3380 + lVar25);
    fVar76 = *(float *)(&UNK_149dd3384 + lVar25);
    fVar34 = *(float *)(&UNK_149dd3388 + lVar25);
    fVar78 = *(float *)(&UNK_149dd338c + lVar25);
    fVar38 = *(float *)(&DAT_149dd3660 + lVar11);
    fVar48 = *(float *)(&UNK_149dd3664 + lVar11);
    fVar52 = *(float *)(&UNK_149dd3668 + lVar11);
    fVar56 = *(float *)(&UNK_149dd366c + lVar11);
    do {
      fVar144 = fVar68;
      fVar142 = fVar66;
      fVar140 = fVar64;
      fVar138 = fVar62;
      pfVar1 = pfVar23 + lVar22 * -4 + -4;
      pfVar2 = pfVar23 + lVar22 * -4 + 4;
      pfVar3 = pfVar23 + lVar22 * -0xc + -4;
      pfVar4 = pfVar23 + lVar22 * -0xc;
      pfVar5 = pfVar23 + (-2 - lVar22) * 4;
      pfVar6 = pfVar23 + lVar22 * -4;
      pfVar7 = pfVar23 + lVar22 * -0xc + -8;
      pfVar8 = pfVar23 + lVar22 * -0xc + 4;
      fVar115 = *pfVar1 + *pfVar5;
      fVar119 = pfVar1[1] + pfVar5[1];
      fVar123 = pfVar1[2] + pfVar5[2];
      fVar127 = pfVar1[3] + pfVar5[3];
      fVar47 = *pfVar5 - *pfVar1;
      fVar51 = pfVar5[1] - pfVar1[1];
      fVar55 = pfVar5[2] - pfVar1[2];
      fVar59 = pfVar5[3] - pfVar1[3];
      fVar26 = *pfVar2 + *pfVar6;
      fVar29 = pfVar2[1] + pfVar6[1];
      fVar32 = pfVar2[2] + pfVar6[2];
      fVar35 = pfVar2[3] + pfVar6[3];
      fVar70 = fVar13 * fVar114 - fVar27;
      fVar71 = fVar14 * fVar118 - fVar28;
      fVar72 = fVar15 * fVar122 - fVar74;
      fVar73 = fVar16 * fVar126 - fVar30;
      fVar82 = *pfVar6 - *pfVar2;
      fVar86 = pfVar6[1] - pfVar2[1];
      fVar90 = pfVar6[2] - pfVar2[2];
      fVar94 = pfVar6[3] - pfVar2[3];
      fVar27 = *pfVar3 + *pfVar7;
      fVar30 = pfVar3[1] + pfVar7[1];
      fVar33 = pfVar3[2] + pfVar7[2];
      fVar36 = pfVar3[3] + pfVar7[3];
      fVar62 = fVar138 * fVar13 - fVar31;
      fVar64 = fVar140 * fVar14 - fVar76;
      fVar66 = fVar142 * fVar15 - fVar34;
      fVar68 = fVar144 * fVar16 - fVar78;
      fVar98 = *pfVar7 - *pfVar3;
      fVar102 = pfVar7[1] - pfVar3[1];
      fVar106 = pfVar7[2] - pfVar3[2];
      fVar110 = pfVar7[3] - pfVar3[3];
      pfVar1 = pfVar23 + lVar22 * -8 + -8;
      fVar28 = *pfVar8 + *pfVar4;
      fVar31 = pfVar8[1] + pfVar4[1];
      fVar34 = pfVar8[2] + pfVar4[2];
      fVar37 = pfVar8[3] + pfVar4[3];
      fVar74 = *pfVar8 - *pfVar4;
      fVar76 = pfVar8[1] - pfVar4[1];
      fVar78 = pfVar8[2] - pfVar4[2];
      fVar80 = pfVar8[3] - pfVar4[3];
      pfVar2 = pfVar23 + lVar22 * -8;
      fVar39 = fVar47 * fVar70 - fVar82 * fVar62;
      fVar40 = fVar51 * fVar71 - fVar86 * fVar64;
      fVar41 = fVar55 * fVar72 - fVar90 * fVar66;
      fVar42 = fVar59 * fVar73 - fVar94 * fVar68;
      fVar83 = fVar82 * fVar70 + fVar47 * fVar62;
      fVar87 = fVar86 * fVar71 + fVar51 * fVar64;
      fVar91 = fVar90 * fVar72 + fVar55 * fVar66;
      fVar95 = fVar94 * fVar73 + fVar59 * fVar68;
      pfVar3 = pfVar23 + lVar22 * -8 + 4;
      fVar146 = fVar74 * fVar70 - fVar98 * fVar62;
      fVar147 = fVar76 * fVar71 - fVar102 * fVar64;
      fVar148 = fVar78 * fVar72 - fVar106 * fVar66;
      fVar149 = fVar80 * fVar73 - fVar110 * fVar68;
      fVar99 = fVar98 * fVar70 + fVar74 * fVar62;
      fVar103 = fVar102 * fVar71 + fVar76 * fVar64;
      fVar107 = fVar106 * fVar72 + fVar78 * fVar66;
      fVar111 = fVar110 * fVar73 + fVar80 * fVar68;
      pfVar4 = pfVar23 + lVar22 * -8 + -4;
      fVar84 = (float)local_1f8 * fVar13 - (float)local_208;
      fVar88 = local_1f8._4_4_ * fVar14 - local_208._4_4_;
      fVar92 = (float)uStack_1f0 * fVar15 - (float)uStack_200;
      fVar96 = uStack_1f0._4_4_ * fVar16 - uStack_200._4_4_;
      local_208 = local_1f8;
      uStack_200 = uStack_1f0;
      fVar100 = fVar38 * fVar13 - (float)local_218;
      fVar104 = fVar48 * fVar14 - local_218._4_4_;
      fVar108 = fVar52 * fVar15 - (float)uStack_210;
      fVar112 = fVar56 * fVar16 - uStack_210._4_4_;
      local_218 = CONCAT44(fVar48,fVar38);
      uStack_210 = CONCAT44(fVar56,fVar52);
      fVar116 = pfVar23[-4] + pfVar23[-8];
      fVar120 = pfVar23[-3] + pfVar23[-7];
      fVar124 = pfVar23[-2] + pfVar23[-6];
      fVar128 = pfVar23[-1] + pfVar23[-5];
      local_1f8 = CONCAT44(fVar88,fVar84);
      uStack_1f0 = CONCAT44(fVar96,fVar92);
      fVar55 = pfVar23[-8] - pfVar23[-4];
      fVar59 = pfVar23[-7] - pfVar23[-3];
      fVar82 = pfVar23[-6] - pfVar23[-2];
      fVar86 = pfVar23[-5] - pfVar23[-1];
      fVar74 = pfVar23[4] + *pfVar23;
      fVar76 = pfVar23[5] + pfVar23[1];
      fVar78 = pfVar23[6] + pfVar23[2];
      fVar38 = pfVar23[7] + pfVar23[3];
      fVar48 = pfVar23[4] - *pfVar23;
      fVar52 = pfVar23[5] - pfVar23[1];
      fVar56 = pfVar23[6] - pfVar23[2];
      fVar47 = pfVar23[7] - pfVar23[3];
      fVar75 = *pfVar4 - *pfVar1;
      fVar77 = pfVar4[1] - pfVar1[1];
      fVar79 = pfVar4[2] - pfVar1[2];
      fVar81 = pfVar4[3] - pfVar1[3];
      fVar117 = *pfVar4 + *pfVar1;
      fVar121 = pfVar4[1] + pfVar1[1];
      fVar125 = pfVar4[2] + pfVar1[2];
      fVar129 = pfVar4[3] + pfVar1[3];
      fVar94 = *pfVar3 - *pfVar2;
      fVar98 = pfVar3[1] - pfVar2[1];
      fVar106 = pfVar3[2] - pfVar2[2];
      fVar110 = pfVar3[3] - pfVar2[3];
      fVar130 = *pfVar3 + *pfVar2;
      fVar132 = pfVar3[1] + pfVar2[1];
      fVar134 = pfVar3[2] + pfVar2[2];
      fVar136 = pfVar3[3] + pfVar2[3];
      fVar51 = fVar100 * fVar48 + fVar84 * fVar55;
      fVar80 = fVar104 * fVar52 + fVar88 * fVar59;
      fVar90 = fVar108 * fVar56 + fVar92 * fVar82;
      fVar102 = fVar112 * fVar47 + fVar96 * fVar86;
      fVar63 = fVar39 - fVar146;
      fVar65 = fVar40 - fVar147;
      fVar67 = fVar41 - fVar148;
      fVar69 = fVar42 - fVar149;
      fVar43 = fVar100 * fVar55 - fVar84 * fVar48;
      fVar44 = fVar104 * fVar59 - fVar88 * fVar52;
      fVar45 = fVar108 * fVar82 - fVar92 * fVar56;
      fVar46 = fVar112 * fVar86 - fVar96 * fVar47;
      fVar48 = fVar84 * fVar94 + fVar100 * fVar75;
      fVar52 = fVar88 * fVar98 + fVar104 * fVar77;
      fVar56 = fVar92 * fVar106 + fVar108 * fVar79;
      fVar47 = fVar96 * fVar110 + fVar112 * fVar81;
      fVar101 = fVar100 * fVar94 - fVar84 * fVar75;
      fVar105 = fVar104 * fVar98 - fVar88 * fVar77;
      fVar109 = fVar108 * fVar106 - fVar92 * fVar79;
      fVar113 = fVar112 * fVar110 - fVar96 * fVar81;
      fVar139 = (float)local_1c8 * fVar17 - (float)local_1e8;
      fVar141 = local_1c8._4_4_ * fVar18 - local_1e8._4_4_;
      fVar143 = (float)uStack_1c0 * fVar19 - (float)uStack_1e0;
      fVar145 = uStack_1c0._4_4_ * fVar20 - uStack_1e0._4_4_;
      local_1e8 = local_1c8;
      uStack_1e0 = uStack_1c0;
      fVar55 = fVar51 - fVar48;
      fVar82 = fVar80 - fVar52;
      fVar94 = fVar90 - fVar56;
      fVar106 = fVar102 - fVar47;
      fVar85 = (float)local_1b8 * fVar17 - (float)local_1d8;
      fVar89 = local_1b8._4_4_ * fVar18 - local_1d8._4_4_;
      fVar93 = (float)uStack_1b0 * fVar19 - (float)uStack_1d0;
      fVar97 = uStack_1b0._4_4_ * fVar20 - uStack_1d0._4_4_;
      local_1d8 = local_1b8;
      uStack_1d0 = uStack_1b0;
      fVar75 = fVar43 - fVar101;
      fVar79 = fVar44 - fVar105;
      fVar84 = fVar45 - fVar109;
      fVar92 = fVar46 - fVar113;
      local_1c8 = CONCAT44(fVar141,fVar139);
      uStack_1c0 = CONCAT44(fVar145,fVar143);
      fVar49 = fVar99 - fVar83;
      fVar53 = fVar103 - fVar87;
      fVar57 = fVar107 - fVar91;
      fVar60 = fVar111 - fVar95;
      local_1b8 = CONCAT44(fVar89,fVar85);
      uStack_1b0 = CONCAT44(fVar97,fVar93);
      fVar77 = fVar115 - fVar27;
      fVar81 = fVar119 - fVar30;
      fVar88 = fVar123 - fVar33;
      fVar96 = fVar127 - fVar36;
      fVar50 = fVar74 - fVar130;
      fVar54 = fVar76 - fVar132;
      fVar58 = fVar78 - fVar134;
      fVar61 = fVar38 - fVar136;
      fVar59 = fVar116 - fVar117;
      fVar86 = fVar120 - fVar121;
      fVar98 = fVar124 - fVar125;
      fVar110 = fVar128 - fVar129;
      fVar131 = fVar28 - fVar26;
      fVar133 = fVar31 - fVar29;
      fVar135 = fVar34 - fVar32;
      fVar137 = fVar37 - fVar35;
      *param_4 = fVar55 * fVar139 - fVar75 * fVar85;
      param_4[1] = fVar48 + fVar51;
      param_4[2] = fVar59 * fVar139 - fVar50 * fVar85;
      param_4[3] = fVar117 + fVar116;
      param_4[0x10] = fVar82 * fVar141 - fVar79 * fVar89;
      param_4[0x11] = fVar52 + fVar80;
      param_4[0x12] = fVar86 * fVar141 - fVar54 * fVar89;
      param_4[0x13] = fVar121 + fVar120;
      param_4[0x20] = fVar94 * fVar143 - fVar84 * fVar93;
      param_4[0x21] = fVar56 + fVar90;
      param_4[0x22] = fVar98 * fVar143 - fVar58 * fVar93;
      param_4[0x23] = fVar125 + fVar124;
      param_4[0x30] = fVar106 * fVar145 - fVar92 * fVar97;
      param_4[0x31] = fVar47 + fVar102;
      param_4[0x32] = fVar110 * fVar145 - fVar61 * fVar97;
      param_4[0x33] = fVar129 + fVar128;
      param_4[4] = fVar49 * fVar139 - fVar63 * fVar85;
      param_4[5] = fVar146 + fVar39;
      param_4[6] = fVar131 * fVar139 - fVar77 * fVar85;
      param_4[7] = fVar27 + fVar115;
      param_4[0x14] = fVar53 * fVar141 - fVar65 * fVar89;
      param_4[0x15] = fVar147 + fVar40;
      param_4[0x16] = fVar133 * fVar141 - fVar81 * fVar89;
      param_4[0x17] = fVar30 + fVar119;
      param_4[0x24] = fVar57 * fVar143 - fVar67 * fVar93;
      param_4[0x25] = fVar148 + fVar41;
      param_4[0x26] = fVar135 * fVar143 - fVar88 * fVar93;
      param_4[0x27] = fVar33 + fVar123;
      param_4[0x34] = fVar60 * fVar145 - fVar69 * fVar97;
      param_4[0x35] = fVar149 + fVar42;
      param_4[0x36] = fVar137 * fVar145 - fVar96 * fVar97;
      param_4[0x37] = fVar36 + fVar127;
      param_4[8] = fVar75 * fVar139 + fVar55 * fVar85;
      param_4[9] = fVar101 + fVar43;
      param_4[10] = fVar50 * fVar139 + fVar59 * fVar85;
      param_4[0xb] = fVar130 + fVar74;
      param_4[0x18] = fVar79 * fVar141 + fVar82 * fVar89;
      param_4[0x19] = fVar105 + fVar44;
      param_4[0x1a] = fVar54 * fVar141 + fVar86 * fVar89;
      param_4[0x1b] = fVar132 + fVar76;
      param_4[0x38] = fVar92 * fVar145 + fVar106 * fVar97;
      param_4[0x39] = fVar113 + fVar46;
      param_4[0x3a] = fVar61 * fVar145 + fVar110 * fVar97;
      param_4[0x3b] = fVar136 + fVar38;
      param_4[0x28] = fVar84 * fVar143 + fVar94 * fVar93;
      param_4[0x29] = fVar109 + fVar45;
      param_4[0x2a] = fVar58 * fVar143 + fVar98 * fVar93;
      param_4[0x2b] = fVar134 + fVar78;
      pfVar23 = pfVar23 + 0x10;
      param_4[0xc] = fVar63 * fVar139 + fVar49 * fVar85;
      param_4[0xd] = fVar99 + fVar83;
      param_4[0xe] = fVar77 * fVar139 + fVar131 * fVar85;
      param_4[0xf] = fVar28 + fVar26;
      param_4[0x3c] = fVar69 * fVar145 + fVar60 * fVar97;
      param_4[0x3d] = fVar111 + fVar95;
      param_4[0x3e] = fVar96 * fVar145 + fVar137 * fVar97;
      param_4[0x3f] = fVar37 + fVar35;
      param_4[0x2c] = fVar67 * fVar143 + fVar57 * fVar93;
      param_4[0x2d] = fVar107 + fVar91;
      param_4[0x2e] = fVar88 * fVar143 + fVar135 * fVar93;
      param_4[0x2f] = fVar34 + fVar32;
      param_4[0x1c] = fVar65 * fVar141 + fVar53 * fVar89;
      param_4[0x1d] = fVar103 + fVar87;
      param_4[0x1e] = fVar81 * fVar141 + fVar133 * fVar89;
      param_4[0x1f] = fVar31 + fVar29;
      param_4 = param_4 + 0x40;
      uVar24 = uVar24 - 1;
      fVar27 = fVar114;
      fVar28 = fVar118;
      fVar74 = fVar122;
      fVar30 = fVar126;
      fVar114 = fVar70;
      fVar118 = fVar71;
      fVar122 = fVar72;
      fVar126 = fVar73;
      fVar31 = fVar138;
      fVar76 = fVar140;
      fVar34 = fVar142;
      fVar78 = fVar144;
      fVar38 = fVar100;
      fVar48 = fVar104;
      fVar52 = fVar108;
      fVar56 = fVar112;
    } while (uVar24 != 0);
  }
  return;
}



// FUNCTION 145569100 FUN_145569100 body=3094 status=ok
// SIG undefined FUN_145569100(void)

void FUN_145569100(uint param_1,undefined8 param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
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
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  
  iVar12 = 4;
  if ((param_1 & 0x10) == 0) {
    uVar3 = 0x10;
    do {
      iVar12 = iVar12 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((param_1 & uVar3) == 0);
  }
  iVar10 = -iVar12 + 0xd;
  iVar4 = (int)param_1 / 2;
  FUN_145568400(param_2,iVar4,iVar10,param_3,param_4);
  FUN_145568930(param_2,iVar4,iVar10,param_3);
  bVar15 = 0;
  iVar16 = 5 - iVar10;
  if (0 < iVar16) {
    uVar3 = 1;
    lVar13 = (longlong)(-iVar12 + 0xf) * 0x10 + -0x10;
    do {
      if (0 < (int)uVar3) {
        iVar5 = iVar4 >> (bVar15 & 0x1f);
        iVar12 = iVar5;
        if (iVar5 < 0) {
          iVar12 = iVar5 + 1;
        }
        lVar8 = (longlong)(iVar12 >> 1);
        uVar14 = (ulonglong)uVar3;
        lVar9 = lVar8 - iVar5;
        pfVar7 = param_3;
        do {
          fVar88 = *(float *)(&DAT_149dd3020 + lVar13);
          fVar17 = *(float *)(&DAT_149dd3140 + lVar13);
          pfVar6 = pfVar7 + lVar8 + -0x10 + (iVar5 - lVar8) + 4;
          fVar76 = *(float *)(&DAT_149dd3260 + lVar13);
          pfVar11 = pfVar7 + lVar8 + -0x10;
          fVar19 = *(float *)(&DAT_149dd3380 + lVar13);
          fVar18 = *(float *)(&DAT_149dd2f90 + lVar13);
          fVar60 = *(float *)(&UNK_149dd2f94 + lVar13);
          fVar20 = *(float *)(&UNK_149dd2f98 + lVar13);
          fVar63 = *(float *)(&UNK_149dd2f9c + lVar13);
          fVar90 = fVar88;
          fVar92 = fVar88;
          fVar94 = fVar88;
          fVar79 = fVar76;
          fVar82 = fVar76;
          fVar85 = fVar76;
          fVar104 = fVar17;
          fVar105 = fVar17;
          fVar54 = fVar17;
          fVar57 = fVar19;
          fVar31 = fVar19;
          fVar34 = fVar19;
          do {
            fVar112 = fVar85;
            fVar120 = fVar82;
            fVar41 = fVar79;
            fVar38 = fVar76;
            fVar35 = fVar94;
            fVar32 = fVar92;
            fVar28 = fVar90;
            fVar25 = fVar88;
            fVar64 = pfVar6[-4] - *pfVar6;
            fVar67 = pfVar6[-3] - pfVar6[1];
            fVar70 = pfVar6[-2] - pfVar6[2];
            fVar73 = pfVar6[-1] - pfVar6[3];
            fVar43 = pfVar6[8] - pfVar6[4];
            fVar45 = pfVar6[9] - pfVar6[5];
            fVar47 = pfVar6[10] - pfVar6[6];
            fVar49 = pfVar6[0xb] - pfVar6[7];
            pfVar6[-4] = pfVar6[-4] + *pfVar6;
            pfVar6[-3] = pfVar6[-3] + pfVar6[1];
            pfVar6[-2] = pfVar6[-2] + pfVar6[2];
            pfVar6[-1] = pfVar6[-1] + pfVar6[3];
            fVar88 = fVar25 * fVar18 - fVar17;
            fVar90 = fVar28 * fVar60 - fVar104;
            fVar92 = fVar32 * fVar20 - fVar105;
            fVar94 = fVar35 * fVar63 - fVar54;
            pfVar6[4] = pfVar6[8] + pfVar6[4];
            pfVar6[5] = pfVar6[9] + pfVar6[5];
            pfVar6[6] = pfVar6[10] + pfVar6[6];
            pfVar6[7] = pfVar6[0xb] + pfVar6[7];
            fVar17 = pfVar11[1];
            fVar104 = pfVar11[2];
            fVar105 = pfVar11[3];
            pfVar1 = pfVar6 + lVar9;
            fVar52 = *pfVar1 - *pfVar11;
            fVar55 = pfVar1[1] - fVar17;
            fVar58 = pfVar1[2] - fVar104;
            fVar61 = pfVar1[3] - fVar105;
            pfVar1 = pfVar6 + lVar9;
            fVar54 = pfVar1[1];
            fVar37 = pfVar1[2];
            fVar40 = pfVar1[3];
            fVar76 = fVar38 * fVar18 - fVar19;
            fVar79 = fVar41 * fVar60 - fVar57;
            fVar82 = fVar120 * fVar20 - fVar31;
            fVar85 = fVar112 * fVar63 - fVar34;
            *pfVar6 = *pfVar11 + *pfVar1;
            pfVar6[1] = fVar17 + fVar54;
            pfVar6[2] = fVar104 + fVar37;
            pfVar6[3] = fVar105 + fVar40;
            pfVar1 = pfVar6 + lVar9 + 8;
            fVar17 = pfVar1[1];
            fVar19 = pfVar1[2];
            fVar104 = pfVar1[3];
            pfVar2 = pfVar6 + lVar9 + 4;
            fVar31 = *pfVar1 - *pfVar2;
            fVar34 = fVar17 - pfVar2[1];
            fVar37 = fVar19 - pfVar2[2];
            fVar40 = fVar104 - pfVar2[3];
            pfVar2 = pfVar6 + lVar9 + 4;
            fVar105 = pfVar2[1];
            fVar54 = pfVar2[2];
            fVar57 = pfVar2[3];
            pfVar6[8] = *pfVar1 + *pfVar2;
            pfVar6[9] = fVar17 + fVar105;
            pfVar6[10] = fVar19 + fVar54;
            pfVar6[0xb] = fVar104 + fVar57;
            *pfVar11 = fVar43 * fVar88 + fVar64 * fVar76;
            pfVar11[1] = fVar45 * fVar90 + fVar67 * fVar79;
            pfVar11[2] = fVar47 * fVar92 + fVar70 * fVar82;
            pfVar11[3] = fVar49 * fVar94 + fVar73 * fVar85;
            pfVar11 = pfVar11 + -0x10;
            pfVar1 = pfVar6 + lVar9 + 4;
            *pfVar1 = fVar64 * fVar88 - fVar43 * fVar76;
            pfVar1[1] = fVar67 * fVar90 - fVar45 * fVar79;
            pfVar1[2] = fVar70 * fVar92 - fVar47 * fVar82;
            pfVar1[3] = fVar73 * fVar94 - fVar49 * fVar85;
            pfVar1 = pfVar6 + lVar9;
            *pfVar1 = fVar31 * fVar76 + fVar52 * fVar88;
            pfVar1[1] = fVar34 * fVar79 + fVar55 * fVar90;
            pfVar1[2] = fVar37 * fVar82 + fVar58 * fVar92;
            pfVar1[3] = fVar40 * fVar85 + fVar61 * fVar94;
            pfVar1 = pfVar6 + lVar9 + 8;
            *pfVar1 = fVar31 * fVar88 - fVar52 * fVar76;
            pfVar1[1] = fVar34 * fVar90 - fVar55 * fVar79;
            pfVar1[2] = fVar37 * fVar92 - fVar58 * fVar82;
            pfVar1[3] = fVar40 * fVar94 - fVar61 * fVar85;
            pfVar6 = pfVar6 + -0x10;
            fVar17 = fVar25;
            fVar104 = fVar28;
            fVar105 = fVar32;
            fVar54 = fVar35;
            fVar19 = fVar38;
            fVar57 = fVar41;
            fVar31 = fVar120;
            fVar34 = fVar112;
          } while (pfVar7 <= pfVar11);
          pfVar7 = pfVar7 + ((longlong)iVar4 >> (bVar15 & 0x3f));
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      lVar13 = lVar13 + 0x10;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      bVar15 = bVar15 + 1;
      iVar16 = iVar16 + -1;
    } while (0 < iVar16);
  }
  if (0 < iVar4) {
    pfVar7 = param_3 + 0x3c;
    lVar13 = ((longlong)iVar4 - 1U >> 7) + 1;
    do {
      fVar88 = pfVar7[-0x38];
      fVar17 = pfVar7[-0x37];
      fVar76 = pfVar7[-0x36];
      fVar19 = pfVar7[-0x35];
      fVar18 = pfVar7[-0x3c];
      fVar60 = pfVar7[-0x3b];
      fVar20 = pfVar7[-0x3a];
      fVar63 = pfVar7[-0x39];
      fVar90 = pfVar7[-0x34];
      fVar92 = pfVar7[-0x33];
      fVar94 = pfVar7[-0x32];
      fVar79 = pfVar7[-0x31];
      fVar82 = pfVar7[-0x30];
      fVar85 = pfVar7[-0x2f];
      fVar104 = pfVar7[-0x2e];
      fVar105 = pfVar7[-0x2d];
      fVar54 = pfVar7[-0x20];
      fVar57 = pfVar7[-0x1f];
      fVar31 = pfVar7[-0x1e];
      fVar34 = pfVar7[-0x1d];
      fVar32 = pfVar7[4] - pfVar7[8];
      fVar35 = pfVar7[5] - pfVar7[9];
      fVar38 = pfVar7[6] - pfVar7[10];
      fVar41 = pfVar7[7] - pfVar7[0xb];
      fVar58 = pfVar7[0xc] - pfVar7[0x10];
      fVar61 = pfVar7[0xd] - pfVar7[0x11];
      fVar64 = pfVar7[0xe] - pfVar7[0x12];
      fVar67 = pfVar7[0xf] - pfVar7[0x13];
      fVar37 = pfVar7[-0x24];
      fVar40 = pfVar7[-0x23];
      fVar43 = pfVar7[-0x22];
      fVar45 = pfVar7[-0x21];
      fVar70 = fVar88 - fVar18;
      fVar73 = fVar17 - fVar60;
      fVar25 = fVar76 - fVar20;
      fVar28 = fVar19 - fVar63;
      fVar120 = fVar82 - fVar90;
      fVar123 = fVar85 - fVar92;
      fVar126 = fVar104 - fVar94;
      fVar129 = fVar105 - fVar79;
      fVar96 = fVar54 - fVar37;
      fVar98 = fVar57 - fVar40;
      fVar100 = fVar31 - fVar43;
      fVar102 = fVar34 - fVar45;
      fVar33 = fVar32 * 0.9238795 + fVar58 * 0.38268343;
      fVar36 = fVar35 * 0.9238795 + fVar61 * 0.38268343;
      fVar39 = fVar38 * 0.9238795 + fVar64 * 0.38268343;
      fVar42 = fVar41 * 0.9238795 + fVar67 * 0.38268343;
      fVar47 = pfVar7[-0x28];
      fVar49 = pfVar7[-0x27];
      fVar52 = pfVar7[-0x26];
      fVar55 = pfVar7[-0x25];
      fVar112 = fVar32 * 0.38268343 - fVar58 * 0.9238795;
      fVar114 = fVar35 * 0.38268343 - fVar61 * 0.9238795;
      fVar116 = fVar38 * 0.38268343 - fVar64 * 0.9238795;
      fVar118 = fVar41 * 0.38268343 - fVar67 * 0.9238795;
      fVar58 = pfVar7[-0x2c];
      fVar61 = pfVar7[-0x2b];
      fVar64 = pfVar7[-0x2a];
      fVar67 = pfVar7[-0x29];
      fVar44 = fVar70 * 0.9238795 + fVar120 * 0.38268343;
      fVar46 = fVar73 * 0.9238795 + fVar123 * 0.38268343;
      fVar48 = fVar25 * 0.9238795 + fVar126 * 0.38268343;
      fVar50 = fVar28 * 0.9238795 + fVar129 * 0.38268343;
      fVar121 = fVar120 * 0.9238795 - fVar70 * 0.38268343;
      fVar124 = fVar123 * 0.9238795 - fVar73 * 0.38268343;
      fVar127 = fVar126 * 0.9238795 - fVar25 * 0.38268343;
      fVar130 = fVar129 * 0.9238795 - fVar28 * 0.38268343;
      fVar32 = pfVar7[0x14] - pfVar7[0x18];
      fVar35 = pfVar7[0x15] - pfVar7[0x19];
      fVar38 = pfVar7[0x16] - pfVar7[0x1a];
      fVar41 = pfVar7[0x17] - pfVar7[0x1b];
      fVar120 = pfVar7[0x1c] - pfVar7[0x20];
      fVar123 = pfVar7[0x1d] - pfVar7[0x21];
      fVar126 = pfVar7[0x1e] - pfVar7[0x22];
      fVar129 = pfVar7[0x1f] - pfVar7[0x23];
      fVar70 = fVar47 - fVar58;
      fVar73 = fVar49 - fVar61;
      fVar25 = fVar52 - fVar64;
      fVar28 = fVar55 - fVar67;
      fVar132 = (fVar32 - fVar120) * 0.70710677;
      fVar134 = (fVar35 - fVar123) * 0.70710677;
      fVar136 = (fVar38 - fVar126) * 0.70710677;
      fVar138 = (fVar41 - fVar129) * 0.70710677;
      fVar23 = (fVar120 + fVar32) * 0.70710677;
      fVar24 = (fVar123 + fVar35) * 0.70710677;
      fVar26 = (fVar126 + fVar38) * 0.70710677;
      fVar29 = (fVar129 + fVar41) * 0.70710677;
      fVar53 = (fVar96 + fVar70) * 0.70710677;
      fVar56 = (fVar98 + fVar73) * 0.70710677;
      fVar59 = (fVar100 + fVar25) * 0.70710677;
      fVar62 = (fVar102 + fVar28) * 0.70710677;
      fVar97 = (fVar96 - fVar70) * 0.70710677;
      fVar99 = (fVar98 - fVar73) * 0.70710677;
      fVar101 = (fVar100 - fVar25) * 0.70710677;
      fVar103 = (fVar102 - fVar28) * 0.70710677;
      fVar70 = pfVar7[-0x18];
      fVar73 = pfVar7[-0x17];
      fVar25 = pfVar7[-0x16];
      fVar28 = pfVar7[-0x15];
      fVar32 = pfVar7[-0x1c];
      fVar35 = pfVar7[-0x1b];
      fVar38 = pfVar7[-0x1a];
      fVar41 = pfVar7[-0x19];
      fVar120 = pfVar7[0x24] - pfVar7[0x28];
      fVar123 = pfVar7[0x25] - pfVar7[0x29];
      fVar126 = pfVar7[0x26] - pfVar7[0x2a];
      fVar129 = pfVar7[0x27] - pfVar7[0x2b];
      fVar77 = pfVar7[0x2c] - pfVar7[0x30];
      fVar80 = pfVar7[0x2d] - pfVar7[0x31];
      fVar83 = pfVar7[0x2e] - pfVar7[0x32];
      fVar86 = pfVar7[0x2f] - pfVar7[0x33];
      fVar96 = fVar70 - fVar32;
      fVar98 = fVar73 - fVar35;
      fVar27 = fVar25 - fVar38;
      fVar30 = fVar28 - fVar41;
      fVar65 = pfVar7[-0x10] - pfVar7[-0x14];
      fVar68 = pfVar7[-0xf] - pfVar7[-0x13];
      fVar71 = pfVar7[-0xe] - pfVar7[-0x12];
      fVar74 = pfVar7[-0xd] - pfVar7[-0x11];
      fVar78 = fVar77 * 0.9238795 + fVar120 * 0.38268343;
      fVar81 = fVar80 * 0.9238795 + fVar123 * 0.38268343;
      fVar84 = fVar83 * 0.9238795 + fVar126 * 0.38268343;
      fVar87 = fVar86 * 0.9238795 + fVar129 * 0.38268343;
      local_298 = (float)*(undefined8 *)(pfVar7 + -8);
      fStack_294 = (float)((ulonglong)*(undefined8 *)(pfVar7 + -8) >> 0x20);
      fStack_290 = (float)*(undefined8 *)(pfVar7 + -6);
      fStack_28c = (float)((ulonglong)*(undefined8 *)(pfVar7 + -6) >> 0x20);
      fVar100 = pfVar7[-0xc] - local_298;
      fVar102 = pfVar7[-0xb] - fStack_294;
      fVar21 = pfVar7[-10] - fStack_290;
      fVar22 = pfVar7[-9] - fStack_28c;
      fVar89 = fVar120 * 0.9238795 - fVar77 * 0.38268343;
      fVar91 = fVar123 * 0.9238795 - fVar80 * 0.38268343;
      fVar93 = fVar126 * 0.9238795 - fVar83 * 0.38268343;
      fVar95 = fVar129 * 0.9238795 - fVar86 * 0.38268343;
      fVar108 = fVar44 + fVar112;
      fVar109 = fVar46 + fVar114;
      fVar110 = fVar48 + fVar116;
      fVar111 = fVar50 + fVar118;
      fVar112 = fVar112 - fVar44;
      fVar114 = fVar114 - fVar46;
      fVar116 = fVar116 - fVar48;
      fVar118 = fVar118 - fVar50;
      fVar80 = fVar53 + fVar132;
      fVar83 = fVar56 + fVar134;
      fVar86 = fVar59 + fVar136;
      fVar51 = fVar62 + fVar138;
      local_288 = (float)*(undefined8 *)(pfVar7 + 0x3c);
      fStack_284 = (float)((ulonglong)*(undefined8 *)(pfVar7 + 0x3c) >> 0x20);
      fStack_280 = (float)*(undefined8 *)(pfVar7 + 0x3e);
      fStack_27c = (float)((ulonglong)*(undefined8 *)(pfVar7 + 0x3e) >> 0x20);
      fVar66 = fVar65 * 0.38268343 - fVar96 * 0.9238795;
      fVar69 = fVar68 * 0.38268343 - fVar98 * 0.9238795;
      fVar72 = fVar71 * 0.38268343 - fVar27 * 0.9238795;
      fVar75 = fVar74 * 0.38268343 - fVar30 * 0.9238795;
      fVar132 = fVar132 - fVar53;
      fVar134 = fVar134 - fVar56;
      fVar136 = fVar136 - fVar59;
      fVar138 = fVar138 - fVar62;
      local_338 = (float)*(undefined8 *)(pfVar7 + 0x38);
      fStack_334 = (float)((ulonglong)*(undefined8 *)(pfVar7 + 0x38) >> 0x20);
      fStack_330 = (float)*(undefined8 *)(pfVar7 + 0x3a);
      fStack_32c = (float)((ulonglong)*(undefined8 *)(pfVar7 + 0x3a) >> 0x20);
      fVar44 = pfVar7[0x34] - local_338;
      fVar50 = pfVar7[0x35] - fStack_334;
      fVar59 = pfVar7[0x36] - fStack_330;
      fVar77 = pfVar7[0x37] - fStack_32c;
      local_348 = (float)*(undefined8 *)(pfVar7 + 0x40);
      fStack_344 = (float)((ulonglong)*(undefined8 *)(pfVar7 + 0x40) >> 0x20);
      fStack_340 = (float)*(undefined8 *)(pfVar7 + 0x42);
      fStack_33c = (float)((ulonglong)*(undefined8 *)(pfVar7 + 0x42) >> 0x20);
      fVar120 = fVar65 * 0.9238795 + fVar96 * 0.38268343;
      fVar123 = fVar68 * 0.9238795 + fVar98 * 0.38268343;
      fVar126 = fVar71 * 0.9238795 + fVar27 * 0.38268343;
      fVar129 = fVar74 * 0.9238795 + fVar30 * 0.38268343;
      local_278 = (float)*(undefined8 *)pfVar7;
      fStack_274 = (float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20);
      fStack_270 = (float)*(undefined8 *)(pfVar7 + 2);
      fStack_26c = (float)((ulonglong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
      local_268 = (float)*(undefined8 *)(pfVar7 + -4);
      fStack_264 = (float)((ulonglong)*(undefined8 *)(pfVar7 + -4) >> 0x20);
      fStack_260 = (float)*(undefined8 *)(pfVar7 + -2);
      fStack_25c = (float)((ulonglong)*(undefined8 *)(pfVar7 + -2) >> 0x20);
      fVar113 = fVar121 + fVar33;
      fVar115 = fVar124 + fVar36;
      fVar117 = fVar127 + fVar39;
      fVar119 = fVar130 + fVar42;
      fVar33 = fVar33 - fVar121;
      fVar36 = fVar36 - fVar124;
      fVar39 = fVar39 - fVar127;
      fVar42 = fVar42 - fVar130;
      fVar96 = fVar97 + fVar23;
      fVar98 = fVar99 + fVar24;
      fVar68 = fVar101 + fVar26;
      fVar71 = fVar103 + fVar29;
      fVar23 = fVar23 - fVar97;
      fVar24 = fVar24 - fVar99;
      fVar26 = fVar26 - fVar101;
      fVar29 = fVar29 - fVar103;
      fVar27 = fVar120 + fVar89;
      fVar46 = fVar123 + fVar91;
      fVar53 = fVar126 + fVar93;
      fVar62 = fVar129 + fVar95;
      fVar89 = fVar89 - fVar120;
      fVar91 = fVar91 - fVar123;
      fVar93 = fVar93 - fVar126;
      fVar95 = fVar95 - fVar129;
      fVar30 = fVar66 + fVar78;
      fVar48 = fVar69 + fVar81;
      fVar56 = fVar72 + fVar84;
      fVar65 = fVar75 + fVar87;
      fVar78 = fVar78 - fVar66;
      fVar81 = fVar81 - fVar69;
      fVar84 = fVar84 - fVar72;
      fVar87 = fVar87 - fVar75;
      fVar75 = (local_278 - local_268) + fVar44;
      fVar97 = (fStack_274 - fStack_264) + fVar50;
      fVar99 = (fStack_270 - fStack_260) + fVar59;
      fVar101 = (fStack_26c - fStack_25c) + fVar77;
      fVar44 = fVar44 - (local_278 - local_268);
      fVar50 = fVar50 - (fStack_274 - fStack_264);
      fVar59 = fVar59 - (fStack_270 - fStack_260);
      fVar77 = fVar77 - (fStack_26c - fStack_25c);
      fVar66 = fVar100 + (local_288 - local_348);
      fVar69 = fVar102 + (fStack_284 - fStack_344);
      fVar72 = fVar21 + (fStack_280 - fStack_340);
      fVar74 = fVar22 + (fStack_27c - fStack_33c);
      fVar100 = (local_288 - local_348) - fVar100;
      fVar102 = (fStack_284 - fStack_344) - fVar102;
      fVar21 = (fStack_280 - fStack_340) - fVar21;
      fVar22 = (fStack_27c - fStack_33c) - fVar22;
      fVar103 = fVar78 + fVar89;
      fVar121 = fVar81 + fVar91;
      fVar127 = fVar84 + fVar93;
      fVar106 = fVar87 + fVar95;
      fVar89 = fVar89 - fVar78;
      fVar91 = fVar91 - fVar81;
      fVar93 = fVar93 - fVar84;
      fVar95 = fVar95 - fVar87;
      fVar122 = fVar66 - fVar96;
      fVar125 = fVar69 - fVar98;
      fVar128 = fVar72 - fVar68;
      fVar131 = fVar74 - fVar71;
      fVar120 = fVar33 + fVar112;
      fVar123 = fVar36 + fVar114;
      fVar126 = fVar39 + fVar116;
      fVar129 = fVar42 + fVar118;
      fVar112 = fVar112 - fVar33;
      fVar114 = fVar114 - fVar36;
      fVar116 = fVar116 - fVar39;
      fVar118 = fVar118 - fVar42;
      fVar66 = fVar66 + fVar96;
      fVar69 = fVar69 + fVar98;
      fVar72 = fVar72 + fVar68;
      fVar74 = fVar74 + fVar71;
      fVar133 = fVar75 - fVar80;
      fVar135 = fVar97 - fVar83;
      fVar137 = fVar99 - fVar86;
      fVar139 = fVar101 - fVar51;
      fVar36 = (-fVar89 - fVar120) * 0.70710677;
      fVar39 = (-fVar91 - fVar123) * 0.70710677;
      fVar42 = (-fVar93 - fVar126) * 0.70710677;
      fVar68 = (-fVar95 - fVar129) * 0.70710677;
      fVar75 = fVar75 + fVar80;
      fVar97 = fVar97 + fVar83;
      fVar99 = fVar99 + fVar86;
      fVar101 = fVar101 + fVar51;
      fVar87 = (-fVar103 - fVar112) * 0.70710677;
      fVar124 = (-fVar121 - fVar114) * 0.70710677;
      fVar130 = (-fVar127 - fVar116) * 0.70710677;
      fVar107 = (-fVar106 - fVar118) * 0.70710677;
      fVar71 = (fVar120 - fVar89) * 0.70710677;
      fVar78 = (fVar123 - fVar91) * 0.70710677;
      fVar81 = (fVar126 - fVar93) * 0.70710677;
      fVar84 = (fVar129 - fVar95) * 0.70710677;
      fVar80 = (fVar103 - fVar112) * 0.70710677;
      fVar83 = (fVar121 - fVar114) * 0.70710677;
      fVar86 = (fVar127 - fVar116) * 0.70710677;
      fVar51 = (fVar106 - fVar118) * 0.70710677;
      fVar120 = fVar44 - fVar23;
      fVar114 = fVar50 - fVar24;
      fVar129 = fVar59 - fVar26;
      fVar33 = fVar77 - fVar29;
      fVar44 = fVar44 + fVar23;
      fVar50 = fVar50 + fVar24;
      fVar59 = fVar59 + fVar26;
      fVar77 = fVar77 + fVar29;
      fVar112 = fVar100 - fVar132;
      fVar126 = fVar102 - fVar134;
      fVar118 = fVar21 - fVar136;
      fVar23 = fVar22 - fVar138;
      fVar100 = fVar100 + fVar132;
      fVar102 = fVar102 + fVar134;
      fVar21 = fVar21 + fVar136;
      fVar22 = fVar22 + fVar138;
      fVar123 = fVar27 - fVar108;
      fVar116 = fVar46 - fVar109;
      fVar96 = fVar53 - fVar110;
      fVar98 = fVar62 - fVar111;
      fVar27 = fVar27 + fVar108;
      fVar46 = fVar46 + fVar109;
      fVar53 = fVar53 + fVar110;
      fVar62 = fVar62 + fVar111;
      fVar24 = fVar30 - fVar113;
      fVar26 = fVar48 - fVar115;
      fVar29 = fVar56 - fVar117;
      fVar89 = fVar65 - fVar119;
      fVar30 = fVar30 + fVar113;
      fVar48 = fVar48 + fVar115;
      fVar56 = fVar56 + fVar117;
      fVar65 = fVar65 + fVar119;
      pfVar7[-0x3c] = fVar44 + fVar80;
      pfVar7[-0x3b] = fVar50 + fVar83;
      pfVar7[-0x3a] = fVar59 + fVar86;
      pfVar7[-0x39] = fVar77 + fVar51;
      pfVar7[-0x34] = fVar44 - fVar80;
      pfVar7[-0x33] = fVar50 - fVar83;
      pfVar7[-0x32] = fVar59 - fVar86;
      pfVar7[-0x31] = fVar77 - fVar51;
      pfVar7[-0x30] = fVar112 - fVar36;
      pfVar7[-0x2f] = fVar126 - fVar39;
      pfVar7[-0x2e] = fVar118 - fVar42;
      pfVar7[-0x2d] = fVar23 - fVar68;
      pfVar7[-0x38] = fVar112 + fVar36;
      pfVar7[-0x37] = fVar126 + fVar39;
      pfVar7[-0x36] = fVar118 + fVar42;
      pfVar7[-0x35] = fVar23 + fVar68;
      pfVar7[-0x2c] = fVar120 + fVar71;
      pfVar7[-0x2b] = fVar114 + fVar78;
      pfVar7[-0x2a] = fVar129 + fVar81;
      pfVar7[-0x29] = fVar33 + fVar84;
      pfVar7[-0x28] = fVar100 + fVar87;
      pfVar7[-0x27] = fVar102 + fVar124;
      pfVar7[-0x26] = fVar21 + fVar130;
      pfVar7[-0x25] = fVar22 + fVar107;
      pfVar7[-0x24] = fVar120 - fVar71;
      pfVar7[-0x23] = fVar114 - fVar78;
      pfVar7[-0x22] = fVar129 - fVar81;
      pfVar7[-0x21] = fVar33 - fVar84;
      pfVar7[-0x20] = fVar100 - fVar87;
      pfVar7[-0x1f] = fVar102 - fVar124;
      pfVar7[-0x1e] = fVar21 - fVar130;
      pfVar7[-0x1d] = fVar22 - fVar107;
      pfVar7[-0x1c] = fVar24 + fVar133;
      pfVar7[-0x1b] = fVar26 + fVar135;
      pfVar7[-0x1a] = fVar29 + fVar137;
      pfVar7[-0x19] = fVar89 + fVar139;
      fVar80 = pfVar7[0x18] + pfVar7[0x14];
      fVar83 = pfVar7[0x19] + pfVar7[0x15];
      fVar86 = pfVar7[0x1a] + pfVar7[0x16];
      fVar51 = pfVar7[0x1b] + pfVar7[0x17];
      fVar120 = pfVar7[8] + pfVar7[4];
      fVar112 = pfVar7[9] + pfVar7[5];
      fVar114 = pfVar7[10] + pfVar7[6];
      fVar126 = pfVar7[0xb] + pfVar7[7];
      fVar39 = pfVar7[0x20] + pfVar7[0x1c];
      fVar59 = pfVar7[0x21] + pfVar7[0x1d];
      fVar42 = pfVar7[0x22] + pfVar7[0x1e];
      fVar77 = pfVar7[0x23] + pfVar7[0x1f];
      local_338 = local_338 + pfVar7[0x34];
      fStack_334 = fStack_334 + pfVar7[0x35];
      fStack_330 = fStack_330 + pfVar7[0x36];
      fStack_32c = fStack_32c + pfVar7[0x37];
      fVar82 = fVar82 + fVar90;
      fVar85 = fVar85 + fVar92;
      fVar104 = fVar104 + fVar94;
      fVar105 = fVar105 + fVar79;
      local_298 = local_298 + pfVar7[-0xc];
      fStack_294 = fStack_294 + pfVar7[-0xb];
      fStack_290 = fStack_290 + pfVar7[-10];
      fStack_28c = fStack_28c + pfVar7[-9];
      fVar129 = pfVar7[-0x10] + pfVar7[-0x14];
      fVar118 = pfVar7[-0xf] + pfVar7[-0x13];
      fVar33 = pfVar7[-0xe] + pfVar7[-0x12];
      fVar23 = pfVar7[-0xd] + pfVar7[-0x11];
      fVar100 = pfVar7[0x28] + pfVar7[0x24];
      fVar102 = pfVar7[0x29] + pfVar7[0x25];
      fVar21 = pfVar7[0x2a] + pfVar7[0x26];
      fVar22 = pfVar7[0x2b] + pfVar7[0x27];
      pfVar7[-0x10] = fVar123 + fVar122;
      pfVar7[-0xf] = fVar116 + fVar125;
      pfVar7[-0xe] = fVar96 + fVar128;
      pfVar7[-0xd] = fVar98 + fVar131;
      pfVar7[-0x18] = fVar122 - fVar123;
      pfVar7[-0x17] = fVar125 - fVar116;
      pfVar7[-0x16] = fVar128 - fVar96;
      pfVar7[-0x15] = fVar131 - fVar98;
      pfVar7[-0x14] = fVar133 - fVar24;
      pfVar7[-0x13] = fVar135 - fVar26;
      pfVar7[-0x12] = fVar137 - fVar29;
      pfVar7[-0x11] = fVar139 - fVar89;
      fVar123 = pfVar7[0x10] + pfVar7[0xc];
      fVar116 = pfVar7[0x11] + pfVar7[0xd];
      fVar68 = pfVar7[0x12] + pfVar7[0xe];
      fVar71 = pfVar7[0x13] + pfVar7[0xf];
      fVar70 = fVar70 + fVar32;
      fVar73 = fVar73 + fVar35;
      fVar25 = fVar25 + fVar38;
      fVar28 = fVar28 + fVar41;
      fVar32 = pfVar7[0x30] + pfVar7[0x2c];
      fVar35 = pfVar7[0x31] + pfVar7[0x2d];
      fVar38 = pfVar7[0x32] + pfVar7[0x2e];
      fVar41 = pfVar7[0x33] + pfVar7[0x2f];
      pfVar7[-8] = fVar66 - fVar30;
      pfVar7[-7] = fVar69 - fVar48;
      pfVar7[-6] = fVar72 - fVar56;
      pfVar7[-5] = fVar74 - fVar65;
      fVar47 = fVar47 + fVar58;
      fVar49 = fVar49 + fVar61;
      fVar52 = fVar52 + fVar64;
      fVar55 = fVar55 + fVar67;
      pfVar7[-0xc] = fVar75 - fVar27;
      pfVar7[-0xb] = fVar97 - fVar46;
      pfVar7[-10] = fVar99 - fVar53;
      pfVar7[-9] = fVar101 - fVar62;
      fVar88 = fVar88 + fVar18;
      fVar17 = fVar17 + fVar60;
      fVar76 = fVar76 + fVar20;
      fVar19 = fVar19 + fVar63;
      pfVar7[-4] = fVar27 + fVar75;
      pfVar7[-3] = fVar46 + fVar97;
      pfVar7[-2] = fVar53 + fVar99;
      pfVar7[-1] = fVar62 + fVar101;
      fVar54 = fVar54 + fVar37;
      fVar57 = fVar57 + fVar40;
      fVar31 = fVar31 + fVar43;
      fVar34 = fVar34 + fVar45;
      *pfVar7 = fVar30 + fVar66;
      pfVar7[1] = fVar48 + fVar69;
      pfVar7[2] = fVar56 + fVar72;
      pfVar7[3] = fVar65 + fVar74;
      fVar37 = fVar88 + fVar120;
      fVar40 = fVar17 + fVar112;
      fVar43 = fVar76 + fVar114;
      fVar45 = fVar19 + fVar126;
      fVar120 = fVar120 - fVar88;
      fVar112 = fVar112 - fVar17;
      fVar114 = fVar114 - fVar76;
      fVar126 = fVar126 - fVar19;
      fVar88 = fVar47 + fVar80;
      fVar76 = fVar49 + fVar83;
      fVar18 = fVar52 + fVar86;
      fVar20 = fVar55 + fVar51;
      fVar80 = fVar80 - fVar47;
      fVar83 = fVar83 - fVar49;
      fVar86 = fVar86 - fVar52;
      fVar51 = fVar51 - fVar55;
      fVar90 = fVar54 + fVar39;
      fVar92 = fVar57 + fVar59;
      fVar94 = fVar31 + fVar42;
      fVar79 = fVar34 + fVar77;
      fVar39 = fVar39 - fVar54;
      fVar59 = fVar59 - fVar57;
      fVar42 = fVar42 - fVar31;
      fVar77 = fVar77 - fVar34;
      fVar17 = fVar70 + fVar100;
      fVar19 = fVar73 + fVar102;
      fVar60 = fVar25 + fVar21;
      fVar63 = fVar28 + fVar22;
      fVar100 = fVar100 - fVar70;
      fVar102 = fVar102 - fVar73;
      fVar21 = fVar21 - fVar25;
      fVar22 = fVar22 - fVar28;
      fVar24 = fVar82 + fVar123;
      fVar46 = fVar85 + fVar116;
      fVar48 = fVar104 + fVar68;
      fVar50 = fVar105 + fVar71;
      fVar123 = fVar123 - fVar82;
      fVar116 = fVar116 - fVar85;
      fVar68 = fVar68 - fVar104;
      fVar71 = fVar71 - fVar105;
      fVar26 = local_298 + local_338;
      fVar53 = fStack_294 + fStack_334;
      fVar56 = fStack_290 + fStack_330;
      fVar29 = fStack_28c + fStack_32c;
      local_338 = local_338 - local_298;
      fStack_334 = fStack_334 - fStack_294;
      fStack_330 = fStack_330 - fStack_290;
      fStack_32c = fStack_32c - fStack_28c;
      fVar58 = local_278 + local_268 + local_348 + local_288;
      fVar61 = fStack_274 + fStack_264 + fStack_344 + fStack_284;
      fVar64 = fStack_270 + fStack_260 + fStack_340 + fStack_280;
      fVar67 = fStack_26c + fStack_25c + fStack_33c + fStack_27c;
      fVar82 = (local_348 + local_288) - (local_278 + local_268);
      fVar85 = (fStack_344 + fStack_284) - (fStack_274 + fStack_264);
      fVar104 = (fStack_340 + fStack_280) - (fStack_270 + fStack_260);
      fVar105 = (fStack_33c + fStack_27c) - (fStack_26c + fStack_25c);
      fVar54 = fVar129 + fVar32;
      fVar57 = fVar118 + fVar35;
      fVar31 = fVar33 + fVar38;
      fVar34 = fVar23 + fVar41;
      fVar32 = fVar32 - fVar129;
      fVar35 = fVar35 - fVar118;
      fVar38 = fVar38 - fVar33;
      fVar41 = fVar41 - fVar23;
      fVar27 = fVar32 + fVar100;
      fVar30 = fVar35 + fVar102;
      fVar44 = fVar38 + fVar21;
      fVar36 = fVar41 + fVar22;
      fVar100 = fVar100 - fVar32;
      fVar102 = fVar102 - fVar35;
      fVar21 = fVar21 - fVar38;
      fVar22 = fVar22 - fVar41;
      fVar47 = fVar17 + fVar37;
      fVar49 = fVar19 + fVar40;
      fVar52 = fVar60 + fVar43;
      fVar55 = fVar63 + fVar45;
      fVar96 = fVar123 + fVar120;
      fVar33 = fVar116 + fVar112;
      fVar23 = fVar68 + fVar114;
      fVar98 = fVar71 + fVar126;
      fVar120 = fVar120 - fVar123;
      fVar112 = fVar112 - fVar116;
      fVar114 = fVar114 - fVar68;
      fVar126 = fVar126 - fVar71;
      fVar32 = fVar26 + fVar88;
      fVar35 = fVar53 + fVar76;
      fVar38 = fVar56 + fVar18;
      fVar41 = fVar29 + fVar20;
      fVar26 = fVar26 - fVar88;
      fVar53 = fVar53 - fVar76;
      fVar56 = fVar56 - fVar18;
      fVar29 = fVar29 - fVar20;
      fVar17 = fVar17 - fVar37;
      fVar19 = fVar19 - fVar40;
      fVar60 = fVar60 - fVar43;
      fVar63 = fVar63 - fVar45;
      fVar88 = local_338 - fVar39;
      fVar76 = fStack_334 - fVar59;
      fVar18 = fStack_330 - fVar42;
      fVar20 = fStack_32c - fVar77;
      local_338 = local_338 + fVar39;
      fStack_334 = fStack_334 + fVar59;
      fStack_330 = fStack_330 + fVar42;
      fStack_32c = fStack_32c + fVar77;
      fVar123 = (fVar27 - fVar120) * 0.70710677;
      fVar116 = (fVar30 - fVar112) * 0.70710677;
      fVar129 = (fVar44 - fVar114) * 0.70710677;
      fVar118 = (fVar36 - fVar126) * 0.70710677;
      fVar70 = (-fVar100 - fVar96) * 0.70710677;
      fVar73 = (-fVar102 - fVar33) * 0.70710677;
      fVar25 = (-fVar21 - fVar23) * 0.70710677;
      fVar28 = (-fVar22 - fVar98) * 0.70710677;
      fVar39 = fVar54 - fVar24;
      fVar59 = fVar57 - fVar46;
      fVar42 = fVar31 - fVar48;
      fVar62 = fVar34 - fVar50;
      fVar96 = (fVar96 - fVar100) * 0.70710677;
      fVar33 = (fVar33 - fVar102) * 0.70710677;
      fVar23 = (fVar23 - fVar21) * 0.70710677;
      fVar98 = (fVar98 - fVar22) * 0.70710677;
      fVar54 = fVar54 + fVar24;
      fVar57 = fVar57 + fVar46;
      fVar31 = fVar31 + fVar48;
      fVar34 = fVar34 + fVar50;
      fVar120 = (-fVar27 - fVar120) * 0.70710677;
      fVar112 = (-fVar30 - fVar112) * 0.70710677;
      fVar114 = (-fVar44 - fVar114) * 0.70710677;
      fVar126 = (-fVar36 - fVar126) * 0.70710677;
      fVar37 = fVar82 - fVar80;
      fVar40 = fVar85 - fVar83;
      fVar43 = fVar104 - fVar86;
      fVar45 = fVar105 - fVar51;
      fVar82 = fVar82 + fVar80;
      fVar85 = fVar85 + fVar83;
      fVar104 = fVar104 + fVar86;
      fVar105 = fVar105 + fVar51;
      pfVar7[4] = local_338 + fVar123;
      pfVar7[5] = fStack_334 + fVar116;
      pfVar7[6] = fStack_330 + fVar129;
      pfVar7[7] = fStack_32c + fVar118;
      fVar100 = fVar58 - fVar90;
      fVar102 = fVar61 - fVar92;
      fVar21 = fVar64 - fVar94;
      fVar22 = fVar67 - fVar79;
      fVar58 = fVar58 + fVar90;
      fVar61 = fVar61 + fVar92;
      fVar64 = fVar64 + fVar94;
      fVar67 = fVar67 + fVar79;
      pfVar7[0xc] = local_338 - fVar123;
      pfVar7[0xd] = fStack_334 - fVar116;
      pfVar7[0xe] = fStack_330 - fVar129;
      pfVar7[0xf] = fStack_32c - fVar118;
      pfVar7[0x10] = fVar37 - fVar70;
      pfVar7[0x11] = fVar40 - fVar73;
      pfVar7[0x12] = fVar43 - fVar25;
      pfVar7[0x13] = fVar45 - fVar28;
      pfVar7[8] = fVar37 + fVar70;
      pfVar7[9] = fVar40 + fVar73;
      pfVar7[10] = fVar43 + fVar25;
      pfVar7[0xb] = fVar45 + fVar28;
      pfVar7[0x14] = fVar88 + fVar96;
      pfVar7[0x15] = fVar76 + fVar33;
      pfVar7[0x16] = fVar18 + fVar23;
      pfVar7[0x17] = fVar20 + fVar98;
      pfVar7[0x18] = fVar82 + fVar120;
      pfVar7[0x19] = fVar85 + fVar112;
      pfVar7[0x1a] = fVar104 + fVar114;
      pfVar7[0x1b] = fVar105 + fVar126;
      pfVar7[0x1c] = fVar88 - fVar96;
      pfVar7[0x1d] = fVar76 - fVar33;
      pfVar7[0x1e] = fVar18 - fVar23;
      pfVar7[0x1f] = fVar20 - fVar98;
      pfVar7[0x20] = fVar82 - fVar120;
      pfVar7[0x21] = fVar85 - fVar112;
      pfVar7[0x22] = fVar104 - fVar114;
      pfVar7[0x23] = fVar105 - fVar126;
      pfVar7[0x24] = fVar39 + fVar26;
      pfVar7[0x25] = fVar59 + fVar53;
      pfVar7[0x26] = fVar42 + fVar56;
      pfVar7[0x27] = fVar62 + fVar29;
      pfVar7[0x2c] = fVar26 - fVar39;
      pfVar7[0x2d] = fVar53 - fVar59;
      pfVar7[0x2e] = fVar56 - fVar42;
      pfVar7[0x2f] = fVar29 - fVar62;
      pfVar7[0x28] = fVar100 - fVar17;
      pfVar7[0x29] = fVar102 - fVar19;
      pfVar7[0x2a] = fVar21 - fVar60;
      pfVar7[0x2b] = fVar22 - fVar63;
      pfVar7[0x30] = fVar17 + fVar100;
      pfVar7[0x31] = fVar19 + fVar102;
      pfVar7[0x32] = fVar60 + fVar21;
      pfVar7[0x33] = fVar63 + fVar22;
      pfVar7[0x34] = fVar32 - fVar47;
      pfVar7[0x35] = fVar35 - fVar49;
      pfVar7[0x36] = fVar38 - fVar52;
      pfVar7[0x37] = fVar41 - fVar55;
      pfVar7[0x3c] = fVar47 + fVar32;
      pfVar7[0x3d] = fVar49 + fVar35;
      pfVar7[0x3e] = fVar52 + fVar38;
      pfVar7[0x3f] = fVar55 + fVar41;
      pfVar7[0x38] = fVar58 - fVar54;
      pfVar7[0x39] = fVar61 - fVar57;
      pfVar7[0x3a] = fVar64 - fVar31;
      pfVar7[0x3b] = fVar67 - fVar34;
      pfVar7[0x40] = fVar54 + fVar58;
      pfVar7[0x41] = fVar57 + fVar61;
      pfVar7[0x42] = fVar31 + fVar64;
      pfVar7[0x43] = fVar34 + fVar67;
      pfVar7 = pfVar7 + 0x80;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  FUN_1455680b0(param_3,iVar4 * 2,iVar10,param_2);
  return;
}



// FUNCTION 145569d20 FUN_145569d20 body=1508 status=ok
// SIG undefined FUN_145569d20(void)

void FUN_145569d20(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  ,longlong param_7,longlong param_8,float *param_9,undefined8 param_10,int param_11
                  ,int param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  ulonglong uVar27;
  float *pfVar28;
  int iVar29;
  ulonglong uVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  ulonglong uVar35;
  
  iVar20 = param_1 >> 2;
  iVar21 = param_2 >> 2;
  iVar17 = iVar20;
  if ((param_4 != 0) && (param_3 != 0)) {
    iVar17 = iVar21;
  }
  iVar23 = iVar21;
  if (param_3 == 0) {
    iVar23 = iVar20;
  }
  uVar35 = 0;
  iVar29 = 0;
  uVar30 = param_6 + (longlong)iVar23 * 4;
  if ((param_4 == 0) || (param_3 == 0)) {
    lVar19 = param_7 + ((longlong)param_1 >> 1) * 4;
    if (((param_4 != 0) && (param_3 != 0)) || ((param_8 = param_7, param_3 == 0 || (param_4 != 0))))
    goto LAB_145569daa;
    iVar23 = iVar21 - iVar20;
LAB_145569e74:
    iVar22 = iVar23;
    iVar26 = iVar20;
    if ((param_3 == 0) && (param_4 != 0)) {
      iVar29 = iVar21 - iVar20;
    }
  }
  else {
    lVar19 = param_8 + ((longlong)param_2 >> 1) * 4;
LAB_145569daa:
    iVar23 = 0;
    if ((param_3 == 0) || (iVar22 = iVar29, iVar26 = iVar21, iVar23 = 0, param_4 == 0))
    goto LAB_145569e74;
  }
  if (iVar22 != 0) {
    iVar20 = iVar22;
    if (param_12 < iVar22) {
      iVar20 = param_12;
    }
    if (param_11 < iVar22) {
      iVar22 = param_11;
    }
    uVar27 = uVar30 + (longlong)iVar20 * -4;
    param_11 = param_11 - iVar22;
    param_12 = param_12 - iVar20;
    uVar30 = uVar30 + (longlong)iVar22 * -4;
    if (uVar27 < uVar30) {
      if ((((uint)uVar27 | (uint)uVar30 | (uint)param_9) & 0xf) == 0) {
        do {
          fVar2 = *(float *)(uVar30 - 0x10);
          fVar1 = *(float *)(uVar30 - 0xc);
          fVar3 = *(float *)(uVar30 - 8);
          pfVar24 = (float *)(uVar30 - 4);
          uVar30 = uVar30 - 0x10;
          *param_9 = *pfVar24;
          param_9[1] = fVar3;
          param_9[2] = fVar1;
          param_9[3] = fVar2;
          param_9 = param_9 + 4;
        } while (uVar27 < uVar30);
      }
      else {
        do {
          pfVar24 = (float *)(uVar30 - 4);
          uVar30 = uVar30 - 4;
          *param_9 = *pfVar24;
          param_9 = param_9 + 1;
        } while (uVar27 < uVar30);
      }
    }
  }
  iVar20 = iVar26;
  if (param_12 < iVar26) {
    iVar20 = param_12;
  }
  iVar21 = iVar26;
  if (param_11 < iVar26) {
    iVar21 = param_11;
  }
  pfVar28 = (float *)(uVar30 + (longlong)iVar20 * -4);
  param_11 = param_11 - iVar21;
  lVar18 = (longlong)iVar21;
  param_12 = param_12 - iVar20;
  pfVar31 = (float *)(uVar30 + lVar18 * -4);
  pfVar24 = (float *)(param_5 + (longlong)iVar17 * 4 + lVar18 * -4);
  pfVar33 = (float *)(lVar19 + lVar18 * -4);
  pfVar34 = (float *)(param_8 + lVar18 * 4);
  if (pfVar28 < pfVar31) {
    pfVar25 = pfVar24;
    pfVar32 = pfVar31;
    if ((((uint)pfVar28 | (uint)pfVar31 | (uint)param_9) & 0xf) == 0) {
      do {
        fVar2 = *pfVar34;
        fVar1 = pfVar34[1];
        fVar3 = pfVar34[2];
        fVar4 = pfVar34[3];
        pfVar24 = pfVar25 + -4;
        pfVar31 = pfVar32 + -4;
        fVar5 = pfVar33[-4];
        fVar6 = pfVar33[-3];
        fVar7 = pfVar33[-2];
        pfVar8 = pfVar33 + -1;
        pfVar33 = pfVar33 + -4;
        pfVar34 = pfVar34 + 4;
        fVar9 = *pfVar24;
        fVar10 = pfVar25[-3];
        fVar11 = pfVar25[-2];
        fVar12 = *pfVar31;
        fVar13 = pfVar32[-3];
        fVar14 = pfVar32[-2];
        *param_9 = fVar2 * pfVar25[-1] + *pfVar8 * pfVar32[-1];
        param_9[1] = fVar1 * fVar11 + fVar7 * fVar14;
        param_9[2] = fVar3 * fVar10 + fVar6 * fVar13;
        param_9[3] = fVar4 * fVar9 + fVar5 * fVar12;
        param_9 = param_9 + 4;
        pfVar25 = pfVar24;
        pfVar32 = pfVar31;
      } while (pfVar28 < pfVar31);
    }
    else {
      do {
        fVar2 = *pfVar34;
        pfVar33 = pfVar33 + -1;
        pfVar25 = pfVar24 + -1;
        pfVar24 = pfVar24 + -1;
        pfVar31 = pfVar31 + -1;
        pfVar34 = pfVar34 + 1;
        *param_9 = fVar2 * *pfVar25 + *pfVar33 * *pfVar31;
        param_9 = param_9 + 1;
      } while (pfVar28 < pfVar31);
    }
  }
  iVar17 = iVar26;
  if (param_12 < iVar26) {
    iVar17 = param_12;
  }
  if (param_11 < iVar26) {
    iVar26 = param_11;
  }
  pfVar28 = pfVar31 + iVar17;
  lVar19 = (longlong)iVar26;
  pfVar31 = pfVar31 + lVar19;
  pfVar24 = pfVar24 + lVar19;
  pfVar33 = pfVar33 + -lVar19;
  pfVar34 = pfVar34 + lVar19;
  if (pfVar31 < pfVar28) {
    if ((((uint)pfVar28 | (uint)pfVar31 | (uint)param_9) & 0xf) == 0) {
      do {
        fVar2 = *pfVar31;
        fVar1 = pfVar31[1];
        fVar3 = pfVar31[2];
        fVar4 = pfVar31[3];
        pfVar31 = pfVar31 + 4;
        fVar5 = *pfVar24;
        fVar6 = pfVar24[1];
        fVar7 = pfVar24[2];
        fVar9 = pfVar24[3];
        pfVar24 = pfVar24 + 4;
        fVar10 = *pfVar34;
        fVar11 = pfVar34[1];
        fVar12 = pfVar34[2];
        fVar13 = pfVar34[3];
        pfVar34 = pfVar34 + 4;
        fVar14 = pfVar33[-4];
        fVar15 = pfVar33[-3];
        fVar16 = pfVar33[-2];
        *param_9 = pfVar33[-1] * fVar2 - fVar10 * fVar5;
        param_9[1] = fVar16 * fVar1 - fVar11 * fVar6;
        param_9[2] = fVar15 * fVar3 - fVar12 * fVar7;
        param_9[3] = fVar14 * fVar4 - fVar13 * fVar9;
        param_9 = param_9 + 4;
        pfVar33 = pfVar33 + -4;
      } while (pfVar31 < pfVar28);
    }
    else {
      if (0xf < ((longlong)pfVar28 + (3 - (longlong)pfVar31) & 0xfffffffffffffffcU)) {
        do {
          *param_9 = pfVar33[-1] * *pfVar31 - *pfVar24 * *pfVar34;
          param_9[1] = pfVar33[-2] * pfVar31[1] - pfVar34[1] * pfVar24[1];
          pfVar25 = pfVar33 + -3;
          pfVar33 = pfVar33 + -4;
          param_9[2] = *pfVar25 * pfVar31[2] - pfVar34[2] * pfVar24[2];
          pfVar25 = pfVar31 + 3;
          pfVar31 = pfVar31 + 4;
          pfVar32 = pfVar34 + 3;
          pfVar34 = pfVar34 + 4;
          pfVar8 = pfVar24 + 3;
          pfVar24 = pfVar24 + 4;
          param_9[3] = *pfVar25 * *pfVar33 - *pfVar32 * *pfVar8;
          param_9 = param_9 + 4;
        } while (pfVar31 < pfVar28 + -3);
        if (pfVar28 <= pfVar31) goto LAB_14556a0f6;
      }
      lVar19 = (longlong)pfVar34 - (longlong)pfVar31;
      do {
        fVar2 = *pfVar31;
        pfVar33 = pfVar33 + -1;
        pfVar34 = (float *)(lVar19 + (longlong)pfVar31);
        pfVar31 = pfVar31 + 1;
        fVar1 = *pfVar24;
        pfVar24 = pfVar24 + 1;
        *param_9 = fVar2 * *pfVar33 - *pfVar34 * fVar1;
        param_9 = param_9 + 1;
      } while (pfVar31 < pfVar28);
    }
  }
LAB_14556a0f6:
  if (iVar29 != 0) {
    iVar20 = iVar29;
    if (param_12 - iVar17 < iVar29) {
      iVar20 = param_12 - iVar17;
    }
    if (param_11 - iVar26 < iVar29) {
      iVar29 = param_11 - iVar26;
    }
    pfVar33 = pfVar24 + iVar20;
    pfVar24 = pfVar24 + iVar29;
    if ((((byte)pfVar33 | (byte)pfVar24 | (byte)param_9) & 0xf) == 0) {
      if (pfVar24 < pfVar33) {
        if (0x3f < ((longlong)pfVar33 + (0xf - (longlong)pfVar24) & 0xfffffffffffffff0U)) {
          do {
            fVar2 = pfVar24[1];
            fVar1 = pfVar24[2];
            fVar3 = pfVar24[3];
            *param_9 = -*pfVar24;
            param_9[1] = -fVar2;
            param_9[2] = -fVar1;
            param_9[3] = -fVar3;
            fVar2 = pfVar24[5];
            fVar1 = pfVar24[6];
            fVar3 = pfVar24[7];
            param_9[4] = -pfVar24[4];
            param_9[5] = -fVar2;
            param_9[6] = -fVar1;
            param_9[7] = -fVar3;
            fVar2 = pfVar24[9];
            fVar1 = pfVar24[10];
            fVar3 = pfVar24[0xb];
            param_9[8] = -pfVar24[8];
            param_9[9] = -fVar2;
            param_9[10] = -fVar1;
            param_9[0xb] = -fVar3;
            pfVar28 = pfVar24 + 0xc;
            fVar2 = pfVar24[0xd];
            fVar1 = pfVar24[0xe];
            fVar3 = pfVar24[0xf];
            pfVar24 = pfVar24 + 0x10;
            param_9[0xc] = -*pfVar28;
            param_9[0xd] = -fVar2;
            param_9[0xe] = -fVar1;
            param_9[0xf] = -fVar3;
            param_9 = param_9 + 0x10;
          } while (pfVar24 < pfVar33 + -0xc);
          if (pfVar33 <= pfVar24) {
            return;
          }
        }
        lVar19 = (longlong)param_9 - (longlong)pfVar24;
        do {
          fVar2 = pfVar24[1];
          fVar1 = pfVar24[2];
          fVar3 = pfVar24[3];
          pfVar28 = (float *)(lVar19 + (longlong)pfVar24);
          *pfVar28 = -*pfVar24;
          pfVar28[1] = -fVar2;
          pfVar28[2] = -fVar1;
          pfVar28[3] = -fVar3;
          pfVar24 = pfVar24 + 4;
        } while (pfVar24 < pfVar33);
      }
    }
    else {
      uVar30 = (ulonglong)((longlong)pfVar33 + (3 - (longlong)pfVar24)) >> 2;
      if (pfVar33 < pfVar24) {
        uVar30 = uVar35;
      }
      if (((uVar30 != 0) && (0xf < uVar30)) &&
         ((pfVar24 + (uVar30 - 1) < param_9 || (param_9 + (uVar30 - 1) < pfVar24)))) {
        do {
          fVar2 = pfVar24[1];
          fVar1 = pfVar24[2];
          fVar3 = pfVar24[3];
          uVar35 = uVar35 + 0x10;
          *param_9 = *pfVar24 * -1.0;
          param_9[1] = fVar2 * -1.0;
          param_9[2] = fVar1 * -1.0;
          param_9[3] = fVar3 * -1.0;
          fVar2 = pfVar24[5];
          fVar1 = pfVar24[6];
          fVar3 = pfVar24[7];
          param_9[4] = pfVar24[4] * -1.0;
          param_9[5] = fVar2 * -1.0;
          param_9[6] = fVar1 * -1.0;
          param_9[7] = fVar3 * -1.0;
          fVar2 = pfVar24[9];
          fVar1 = pfVar24[10];
          fVar3 = pfVar24[0xb];
          param_9[8] = pfVar24[8] * -1.0;
          param_9[9] = fVar2 * -1.0;
          param_9[10] = fVar1 * -1.0;
          param_9[0xb] = fVar3 * -1.0;
          pfVar28 = pfVar24 + 0xc;
          fVar2 = pfVar24[0xd];
          fVar1 = pfVar24[0xe];
          fVar3 = pfVar24[0xf];
          pfVar24 = pfVar24 + 0x10;
          param_9[0xc] = *pfVar28 * -1.0;
          param_9[0xd] = fVar2 * -1.0;
          param_9[0xe] = fVar1 * -1.0;
          param_9[0xf] = fVar3 * -1.0;
          param_9 = param_9 + 0x10;
        } while (uVar35 < (uVar30 & 0xfffffffffffffff0));
      }
      if (pfVar24 < pfVar33) {
        if (0xf < ((longlong)pfVar33 + (3 - (longlong)pfVar24) & 0xfffffffffffffffcU)) {
          do {
            *param_9 = -*pfVar24;
            param_9[1] = -pfVar24[1];
            param_9[2] = -pfVar24[2];
            pfVar28 = pfVar24 + 3;
            pfVar24 = pfVar24 + 4;
            param_9[3] = -*pfVar28;
            param_9 = param_9 + 4;
          } while (pfVar24 < pfVar33 + -3);
          if (pfVar33 <= pfVar24) {
            return;
          }
        }
        do {
          fVar2 = *pfVar24;
          pfVar24 = pfVar24 + 1;
          *param_9 = -fVar2;
          param_9 = param_9 + 1;
        } while (pfVar24 < pfVar33);
      }
    }
  }
  return;
}



// FUNCTION 14556a310 FUN_14556a310 body=94 status=ok
// SIG undefined FUN_14556a310(void)

undefined8 FUN_14556a310(int *param_1,byte param_2,byte param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
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
  iVar3 = 1 << (param_2 & 0x1f);
  iVar2 = 1 << (param_3 & 0x1f);
  *param_1 = iVar3;
  param_1[1] = iVar2;
  if ((0x3f < iVar3) && (iVar3 <= iVar2)) {
    if (0x2000 < iVar2) {
      uVar1 = 0xffffff7b;
    }
    return uVar1;
  }
  return 0xffffff7b;
}



// FUNCTION 14556a370 FUN_14556a370 body=1301 status=ok
// SIG undefined FUN_14556a370(void)

undefined8 FUN_14556a370(longlong param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined *local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  bVar1 = *(byte *)(param_3 + 1);
  sVar3 = *(short *)*param_3;
  iVar13 = (char)bVar1 + 8;
  *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar13 >> 3);
  *(byte *)(param_3 + 1) = (byte)iVar13 & 7;
  iVar11 = (char)(sVar3 >> (bVar1 & 0x1f)) + 1;
  *param_3 = ((longlong)iVar13 >> 3) + *param_3;
  *(int *)(param_1 + 0x90) = iVar11;
  uVar12 = iVar11 * 0x20;
  pvVar7 = AK::MemoryMgr::Malloc(5,(ulonglong)uVar12);
  *(void **)(param_1 + 0xb8) = pvVar7;
  if (pvVar7 == (void *)0x0) {
    return 0xffffff7b;
  }
  memset(pvVar7,0,(longlong)(int)uVar12);
  iVar13 = 0;
  pvVar7 = (void *)0x0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x90) * 0x48;
  if (0 < *(int *)(param_1 + 0x90)) {
    iVar11 = iVar13;
    do {
      bVar1 = *(byte *)(param_3 + 1);
      uVar14 = (ulonglong)DAT_14c746a28;
      iVar6 = (char)bVar1 + 10;
      lVar5 = *(longlong *)*param_3;
      *(byte *)(param_3 + 1) = (byte)iVar6 & 7;
      *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar6 >> 3);
      *param_3 = ((longlong)iVar6 >> 3) + *param_3;
      local_38 = (&PTR_DAT_14c746b90)[lVar5 >> (bVar1 & 0x3f) & 0xffffffffU & uVar14];
      local_30 = 0;
      local_2c = 0x36a;
      uVar8 = FUN_1455e99b0(&local_38,(longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0xb8),
                            param_1 + 0x10,(param_2 == 2) + '\x01');
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x90));
  }
  uVar12 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 100) = uVar12;
  pvVar9 = AK::MemoryMgr::Malloc(5,(ulonglong)uVar12);
  *(void **)(param_1 + 0x50) = pvVar9;
  *(void **)(param_1 + 0x58) = pvVar9;
  if (pvVar9 == (void *)0x0) {
    uVar8 = 0xffffff75;
  }
  else {
    bVar1 = *(byte *)(param_3 + 1);
    iVar11 = (char)bVar1 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar11 >> 3);
    *param_3 = ((longlong)iVar11 >> 3) + *param_3;
    iVar11 = (uVar4 >> (bVar1 & 0x1f) & 0x3f) + 1;
    *(int *)(param_1 + 0x88) = iVar11;
    uVar12 = iVar11 * 0x40;
    pvVar9 = pvVar7;
    if ((iVar11 != 0) &&
       (uVar10 = *(uint *)(param_1 + 0x60) + uVar12, uVar10 <= *(uint *)(param_1 + 100))) {
      pvVar9 = *(void **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar10;
      *(ulonglong *)(param_1 + 0x58) = (longlong)pvVar9 + (ulonglong)uVar12;
      if (pvVar9 != (void *)0x0) {
        memset(pvVar9,0,(ulonglong)uVar12);
      }
    }
    *(void **)(param_1 + 0xa8) = pvVar9;
    iVar11 = iVar13;
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        iVar6 = FUN_1455670f0((longlong)iVar11 * 0x40 + *(longlong *)(param_1 + 0xa8),param_1 + 0x78
                              ,param_3,param_1 + 0x10);
        if (iVar6 != 0) {
          return 0xffffff7b;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x88));
    }
    bVar1 = *(byte *)(param_3 + 1);
    iVar11 = (char)bVar1 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar11 >> 3);
    *param_3 = ((longlong)iVar11 >> 3) + *param_3;
    iVar11 = (uVar4 >> (bVar1 & 0x1f) & 0x3f) + 1;
    *(int *)(param_1 + 0x8c) = iVar11;
    pvVar9 = pvVar7;
    if ((iVar11 * 5 != 0) &&
       (uVar12 = *(uint *)(param_1 + 0x60) + iVar11 * 0x28, uVar12 <= *(uint *)(param_1 + 100))) {
      pvVar9 = *(void **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar12;
      *(ulonglong *)(param_1 + 0x58) = (ulonglong)(uint)(iVar11 * 0x28) + (longlong)pvVar9;
    }
    *(void **)(param_1 + 0xb0) = pvVar9;
    iVar11 = iVar13;
    if (0 < *(int *)(param_1 + 0x8c)) {
      do {
        iVar6 = FUN_1455e63e0(*(longlong *)(param_1 + 0xb0) + (longlong)iVar11 * 0x28,param_1 + 0x78
                              ,param_3,param_1 + 0x10);
        if (iVar6 != 0) {
          return 0xffffff7b;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x8c));
    }
    bVar1 = *(byte *)(param_3 + 1);
    iVar11 = (char)bVar1 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar11 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar11 >> 3);
    *param_3 = ((longlong)iVar11 >> 3) + *param_3;
    iVar11 = (uVar4 >> (bVar1 & 0x1f) & 0x3f) + 1;
    *(int *)(param_1 + 0x84) = iVar11;
    pvVar9 = pvVar7;
    if ((iVar11 * 5 != 0) &&
       (uVar12 = *(uint *)(param_1 + 0x60) + iVar11 * 0x28, uVar12 <= *(uint *)(param_1 + 100))) {
      pvVar9 = *(void **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x60) = uVar12;
      *(ulonglong *)(param_1 + 0x58) = (ulonglong)(uint)(iVar11 * 0x28) + (longlong)pvVar9;
    }
    *(void **)(param_1 + 0xa0) = pvVar9;
    if (0 < *(int *)(param_1 + 0x84)) {
      do {
        iVar11 = FUN_145566740(*(longlong *)(param_1 + 0xa0) + (longlong)iVar13 * 0x28,
                               param_1 + 0x78,param_2,param_3,param_1 + 0x10);
        if (iVar11 != 0) {
          return 0xffffff7b;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x84));
    }
    bVar1 = *(byte *)(param_3 + 1);
    iVar13 = (char)bVar1 + 6;
    uVar4 = *(ushort *)*param_3;
    *(byte *)(param_3 + 1) = (byte)iVar13 & 7;
    *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar13 >> 3);
    *param_3 = ((longlong)iVar13 >> 3) + *param_3;
    iVar13 = (uVar4 >> (bVar1 & 0x1f) & 0x3f) + 1;
    *(int *)(param_1 + 0x80) = iVar13;
    pvVar9 = pvVar7;
    if (iVar13 != 0) {
      uVar12 = iVar13 * 2 + 3U & 0xfffffffc;
      uVar10 = *(uint *)(param_1 + 0x60) + uVar12;
      if (uVar10 <= *(uint *)(param_1 + 100)) {
        pvVar9 = *(void **)(param_1 + 0x58);
        *(uint *)(param_1 + 0x60) = uVar10;
        *(ulonglong *)(param_1 + 0x58) = (ulonglong)uVar12 + (longlong)pvVar9;
      }
    }
    *(void **)(param_1 + 0x98) = pvVar9;
    pvVar9 = pvVar7;
    if (0 < *(int *)(param_1 + 0x80)) {
      do {
        bVar1 = *(byte *)(param_3 + 1);
        iVar13 = (char)bVar1 + 1;
        bVar2 = *(byte *)*param_3;
        *(byte *)(param_3 + 1) = (byte)iVar13 & 7;
        *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar13 >> 3);
        *param_3 = (longlong)((byte *)*param_3 + ((longlong)iVar13 >> 3));
        *(byte *)((longlong)pvVar9 + *(longlong *)(param_1 + 0x98)) = bVar2 >> (bVar1 & 0x1f) & 1;
        bVar1 = *(byte *)(param_3 + 1);
        iVar13 = (char)bVar1 + 8;
        sVar3 = *(short *)*param_3;
        *(byte *)(param_3 + 1) = (byte)iVar13 & 7;
        *(int *)((longlong)param_3 + 0xc) = *(int *)((longlong)param_3 + 0xc) - (iVar13 >> 3);
        *param_3 = ((longlong)iVar13 >> 3) + *param_3;
        *(char *)((longlong)pvVar9 + *(longlong *)(param_1 + 0x98) + 1) =
             (char)(sVar3 >> (bVar1 & 0x1f));
        if (*(int *)(param_1 + 0x84) <=
            (int)(uint)*(byte *)((longlong)pvVar9 + *(longlong *)(param_1 + 0x98) + 1)) {
          return 0xffffff7b;
        }
        uVar12 = (int)pvVar7 + 1;
        pvVar7 = (void *)(ulonglong)uVar12;
        pvVar9 = (void *)((longlong)pvVar9 + 2);
      } while ((int)uVar12 < *(int *)(param_1 + 0x80));
    }
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 14556a890 FUN_14556a890 body=127 status=ok
// SIG undefined FUN_14556a890(void)

int FUN_14556a890(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    return (param_2 << (bVar1 >> 3 & 3)) / 400;
  }
  if ((bVar1 & 0x60) == 0x60) {
    iVar2 = (int)((ulonglong)((longlong)param_2 * 0x51eb851f) >> 0x20);
    if ((bVar1 & 8) != 0) {
      return param_2 / 0x32;
    }
  }
  else {
    bVar1 = bVar1 >> 3 & 3;
    if (bVar1 == 3) {
      return (param_2 * 0x3c) / 1000;
    }
    iVar2 = (int)((ulonglong)((longlong)(param_2 << bVar1) * 0x51eb851f) >> 0x20);
  }
  return (iVar2 >> 5) - (iVar2 >> 0x1f);
}



// FUNCTION 14556a910 FUN_14556a910 body=2194 status=ok
// SIG undefined FUN_14556a910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14556a910(longlong param_1,int param_2,int param_3,float *param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float *local_res20;
  longlong local_a8;
  
  auVar3 = _DAT_149982830;
  auVar2 = _DAT_1499314b0;
  lVar19 = (longlong)param_3;
  if (param_3 < 1) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  uVar12 = param_2 * param_3;
  iVar16 = 0;
  if (0 < (int)uVar12) {
    if (0xf < uVar12) {
      uVar8 = uVar12 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      lVar10 = 0;
      pauVar6 = (undefined1 (*) [16])(param_1 + 0x20);
      do {
        iVar16 = iVar16 + 0x10;
        auVar25 = minps(auVar2,pauVar6[-2]);
        lVar10 = lVar10 + 0x10;
        auVar25 = maxps(auVar3,auVar25);
        pauVar6[-2] = auVar25;
        auVar25 = minps(auVar2,pauVar6[-1]);
        auVar25 = maxps(auVar3,auVar25);
        pauVar6[-1] = auVar25;
        auVar25 = minps(auVar2,*pauVar6);
        auVar25 = maxps(auVar3,auVar25);
        *pauVar6 = auVar25;
        auVar25 = minps(auVar2,pauVar6[1]);
        auVar25 = maxps(auVar3,auVar25);
        pauVar6[1] = auVar25;
        pauVar6 = pauVar6 + 4;
      } while (lVar10 < (int)(uVar12 - uVar8));
    }
    if (iVar16 < (int)uVar12) {
      lVar10 = (longlong)iVar16;
      if (3 < (int)(uVar12 - iVar16)) {
        pfVar7 = (float *)(param_1 + 8 + lVar10 * 4);
        uVar8 = ((uVar12 - iVar16) - 4 >> 2) + 1;
        uVar18 = (ulonglong)uVar8;
        iVar16 = iVar16 + uVar8 * 4;
        lVar10 = lVar10 + (ulonglong)uVar8 * 4;
        do {
          fVar22 = pfVar7[-2];
          if (2.0 <= fVar22) {
            fVar22 = 2.0;
          }
          if (fVar22 < -2.0) {
            fVar22 = -2.0;
          }
          pfVar7[-2] = fVar22;
          fVar22 = pfVar7[-1];
          if (2.0 <= fVar22) {
            fVar22 = 2.0;
          }
          if (fVar22 < -2.0) {
            fVar22 = -2.0;
          }
          pfVar7[-1] = fVar22;
          fVar22 = *pfVar7;
          if (2.0 <= fVar22) {
            fVar22 = 2.0;
          }
          if (fVar22 < -2.0) {
            fVar22 = -2.0;
          }
          *pfVar7 = fVar22;
          fVar22 = pfVar7[1];
          if (2.0 <= pfVar7[1]) {
            fVar22 = 2.0;
          }
          if (fVar22 < -2.0) {
            fVar22 = -2.0;
          }
          pfVar7[1] = fVar22;
          pfVar7 = pfVar7 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        if ((int)uVar12 <= iVar16) goto LAB_14556aae5;
      }
      pfVar7 = (float *)(param_1 + lVar10 * 4);
      lVar10 = (longlong)(int)(uVar12 - iVar16);
      do {
        fVar22 = *pfVar7;
        if (2.0 <= *pfVar7) {
          fVar22 = 2.0;
        }
        if (fVar22 < -2.0) {
          fVar22 = -2.0;
        }
        *pfVar7 = fVar22;
        pfVar7 = pfVar7 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
LAB_14556aae5:
  if (param_3 != 0) {
    local_res20 = param_4;
    local_a8 = lVar19;
    do {
      fVar22 = *local_res20;
      pfVar7 = (float *)((param_1 - (longlong)param_4) + (longlong)local_res20);
      iVar16 = 0;
      if (param_2 < 4) {
LAB_14556ac67:
        iVar13 = iVar16 * param_3;
        do {
          fVar20 = pfVar7[iVar13] * fVar22;
          if (0.0 <= fVar20) break;
          iVar16 = iVar16 + 1;
          pfVar7[iVar13] = (fVar20 + 1.0) * pfVar7[iVar13];
          iVar13 = iVar13 + param_3;
        } while (iVar16 < param_2);
      }
      else {
        iVar13 = param_3 * 2;
        do {
          iVar5 = param_3 * -2 + iVar13;
          fVar20 = pfVar7[iVar5] * fVar22;
          if (0.0 <= fVar20) goto LAB_14556ac9a;
          pfVar7[iVar5] = (fVar20 + 1.0) * pfVar7[iVar5];
          fVar20 = fVar22 * pfVar7[iVar13 - param_3];
          if (0.0 <= fVar20) goto LAB_14556ac9a;
          pfVar7[iVar13 - param_3] = (fVar20 + 1.0) * pfVar7[iVar13 - param_3];
          fVar20 = pfVar7[iVar13] * fVar22;
          if (0.0 <= fVar20) goto LAB_14556ac9a;
          pfVar7[iVar13] = (fVar20 + 1.0) * pfVar7[iVar13];
          iVar5 = iVar13 + param_3;
          fVar20 = pfVar7[iVar5] * fVar22;
          if (0.0 <= fVar20) goto LAB_14556ac9a;
          iVar16 = iVar16 + 4;
          iVar13 = iVar13 + param_3 * 4;
          pfVar7[iVar5] = (fVar20 + 1.0) * pfVar7[iVar5];
        } while (iVar16 < param_2 + -3);
        if (iVar16 < param_2) goto LAB_14556ac67;
      }
LAB_14556ac9a:
      fVar22 = *pfVar7;
      iVar16 = 0;
      do {
        iVar13 = iVar16;
        if (iVar16 < param_2) {
          if (3 < param_2 - iVar16) {
            iVar5 = (iVar16 + 2) * param_3;
            do {
              if ((1.0 < pfVar7[param_3 * -2 + iVar5]) || (pfVar7[param_3 * -2 + iVar5] < -1.0))
              goto LAB_14556ad96;
              if ((1.0 < pfVar7[iVar5 - param_3]) || (pfVar7[iVar5 - param_3] < -1.0)) {
                iVar13 = iVar13 + 1;
                goto LAB_14556ad96;
              }
              if ((1.0 < pfVar7[iVar5]) || (pfVar7[iVar5] < -1.0)) {
                iVar13 = iVar13 + 2;
                goto LAB_14556ad96;
              }
              if ((1.0 < pfVar7[iVar5 + param_3]) || (pfVar7[iVar5 + param_3] < -1.0)) {
                iVar13 = iVar13 + 3;
                goto LAB_14556ad96;
              }
              iVar13 = iVar13 + 4;
              iVar5 = iVar5 + param_3 * 4;
            } while (iVar13 < param_2 + -3);
            if (param_2 <= iVar13) goto LAB_14556ad96;
          }
          iVar5 = iVar13 * param_3;
          do {
            if (1.0 < pfVar7[iVar5]) goto LAB_14556ad9c;
            if (pfVar7[iVar5] < -1.0) break;
            iVar13 = iVar13 + 1;
            iVar5 = iVar5 + param_3;
          } while (iVar13 < param_2);
        }
LAB_14556ad96:
        if (iVar13 == param_2) {
          fVar20 = 0.0;
          break;
        }
LAB_14556ad9c:
        iVar5 = iVar13 * param_3;
        fVar24 = pfVar7[iVar5];
        fVar20 = ABS(fVar24);
        iVar4 = iVar13;
        iVar17 = iVar13;
        if (0 < iVar13) {
          iVar9 = (iVar13 + -1) * param_3;
          do {
            if (fVar24 * pfVar7[iVar9] < 0.0) break;
            iVar17 = iVar17 + -1;
            iVar9 = iVar9 - param_3;
          } while (0 < iVar17);
        }
        while ((iVar9 = iVar4, iVar4 = iVar13, iVar4 < param_2 && (0.0 <= fVar24 * pfVar7[iVar5])))
        {
          fVar23 = ABS(pfVar7[iVar5]);
          fVar21 = fVar20;
          if (fVar20 < fVar23) {
            fVar21 = fVar23;
          }
          iVar5 = iVar5 + param_3;
          bVar1 = fVar23 <= fVar20;
          fVar20 = fVar21;
          iVar13 = iVar4 + 1;
          if (bVar1) {
            iVar4 = iVar9;
          }
        }
        if ((iVar17 != 0) || (fVar24 * *pfVar7 < 0.0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        fVar21 = (fVar20 - 1.0) / (fVar20 * fVar20);
        fVar20 = fVar21 * 1.0000002;
        if (0.0 < fVar24) {
          fVar20 = fVar21 * -1.0000002;
        }
        if (iVar17 < iVar4) {
          if (3 < iVar4 - iVar17) {
            lVar10 = (longlong)((iVar17 + 2) * param_3);
            pfVar11 = pfVar7 + lVar10;
            lVar15 = (iVar17 + 1) * param_3 - lVar10;
            lVar14 = (iVar17 + 3) * param_3 - lVar10;
            lVar10 = iVar17 * param_3 - lVar10;
            uVar12 = ((iVar4 - iVar17) - 4U >> 2) + 1;
            uVar18 = (ulonglong)uVar12;
            iVar17 = iVar17 + uVar12 * 4;
            do {
              pfVar11[lVar10] = (pfVar11[lVar10] * fVar20 + 1.0) * pfVar11[lVar10];
              pfVar11[lVar15] = (fVar20 * pfVar11[lVar15] + 1.0) * pfVar11[lVar15];
              *pfVar11 = (*pfVar11 * fVar20 + 1.0) * *pfVar11;
              pfVar11[lVar14] = (pfVar11[lVar14] * fVar20 + 1.0) * pfVar11[lVar14];
              pfVar11 = pfVar11 + param_3 * 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
            if (iVar4 <= iVar17) goto LAB_14556afa6;
          }
          pfVar11 = pfVar7 + iVar17 * param_3;
          lVar10 = (longlong)(iVar4 - iVar17);
          do {
            *pfVar11 = (*pfVar11 * fVar20 + 1.0) * *pfVar11;
            pfVar11 = pfVar11 + lVar19;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
LAB_14556afa6:
        if ((bVar1) && (1 < iVar9)) {
          fVar24 = fVar22 - *pfVar7;
          fVar21 = fVar24 / (float)iVar9;
          if (iVar16 < iVar9) {
            if (3 < iVar9 - iVar16) {
              lVar10 = (longlong)((iVar16 + 2) * param_3);
              pfVar11 = pfVar7 + lVar10;
              lVar14 = (iVar16 + 1) * param_3 - lVar10;
              lVar15 = (iVar16 + 3) * param_3 - lVar10;
              lVar10 = iVar16 * param_3 - lVar10;
              uVar12 = ((iVar9 - iVar16) - 4U >> 2) + 1;
              uVar18 = (ulonglong)uVar12;
              iVar16 = iVar16 + uVar12 * 4;
              do {
                fVar23 = (fVar24 - fVar21) + pfVar11[lVar10];
                if (1.0 <= fVar23) {
                  fVar23 = 1.0;
                }
                if (fVar23 < -1.0) {
                  fVar23 = -1.0;
                }
                pfVar11[lVar10] = fVar23;
                fVar24 = (fVar24 - fVar21) - fVar21;
                fVar23 = fVar24 + pfVar11[lVar14];
                if (1.0 <= fVar23) {
                  fVar23 = 1.0;
                }
                if (fVar23 < -1.0) {
                  fVar23 = -1.0;
                }
                pfVar11[lVar14] = fVar23;
                fVar24 = fVar24 - fVar21;
                fVar23 = fVar24 + *pfVar11;
                if (1.0 <= fVar23) {
                  fVar23 = 1.0;
                }
                if (fVar23 < -1.0) {
                  fVar23 = -1.0;
                }
                *pfVar11 = fVar23;
                fVar24 = fVar24 - fVar21;
                fVar23 = fVar24 + pfVar11[lVar15];
                if (1.0 <= fVar23) {
                  fVar23 = 1.0;
                }
                if (fVar23 < -1.0) {
                  fVar23 = -1.0;
                }
                pfVar11[lVar15] = fVar23;
                pfVar11 = pfVar11 + param_3 * 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
              if (iVar9 <= iVar16) goto LAB_14556b10e;
            }
            pfVar11 = pfVar7 + iVar16 * param_3;
            lVar10 = (longlong)(iVar9 - iVar16);
            do {
              fVar24 = fVar24 - fVar21;
              fVar23 = fVar24 + *pfVar11;
              if (1.0 <= fVar23) {
                fVar23 = 1.0;
              }
              if (fVar23 < -1.0) {
                fVar23 = -1.0;
              }
              *pfVar11 = fVar23;
              pfVar11 = pfVar11 + lVar19;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
LAB_14556b10e:
        iVar16 = iVar4;
      } while (iVar4 != param_2);
      *local_res20 = fVar20;
      local_res20 = local_res20 + 1;
      local_a8 = local_a8 + -1;
    } while (local_a8 != 0);
  }
                    /* WARNING: Read-only address (ram,0x0001499314b0) is written */
                    /* WARNING: Read-only address (ram,0x000149982830) is written */
  return;
}



// FUNCTION 14556b1b0 FUN_14556b1b0 body=1069 status=ok
// SIG undefined FUN_14556b1b0(void)

uint FUN_14556b1b0(byte *param_1,int param_2,int param_3,byte *param_4,undefined8 *param_5,
                  ushort *param_6,int *param_7,int *param_8)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ushort *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte bVar18;
  uint uVar19;
  uint local_res8;
  
  uVar12 = 0;
  bVar18 = 0;
  local_res8 = 0;
  if ((param_6 == (ushort *)0x0) || (param_2 < 0)) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  bVar2 = *param_1;
  if ((char)bVar2 < '\0') {
    iVar9 = 48000 << (bVar2 >> 3 & 3);
    iVar9 = iVar9 / 400 + (iVar9 >> 0x1f);
LAB_14556b27c:
    iVar9 = iVar9 - (iVar9 >> 0x1f);
  }
  else if ((bVar2 & 0x60) == 0x60) {
    iVar9 = 0x3c0;
    if ((bVar2 & 8) == 0) {
      iVar9 = 0x1e0;
    }
  }
  else {
    bVar3 = bVar2 >> 3 & 3;
    if (bVar3 != 3) {
      iVar9 = 48000 << bVar3;
      iVar9 = iVar9 / 100 + (iVar9 >> 0x1f);
      goto LAB_14556b27c;
    }
    iVar9 = 0xb40;
  }
  uVar14 = param_2 - 1;
  pbVar17 = param_1 + 1;
  uVar15 = uVar14;
  if ((bVar2 & 3) == 0) {
    uVar7 = 1;
LAB_14556b4ec:
    uVar13 = (uint)uVar7;
    puVar10 = param_6;
    uVar16 = uVar7;
    if (param_3 != 0) {
      iVar9 = FUN_14556b5e0(pbVar17,uVar15,param_6 + (uVar7 - 1));
      lVar11 = uVar7 - 1;
      iVar6 = (int)(short)puVar10[lVar11];
      if ((short)puVar10[lVar11] < 0) {
        return 0xfffffffc;
      }
      if ((int)(uVar15 - iVar9) < iVar6) {
        return 0xfffffffc;
      }
      pbVar17 = pbVar17 + iVar9;
      if (bVar18 == 0) {
        if ((int)uVar14 < iVar9 + iVar6) {
          return 0xfffffffc;
        }
      }
      else {
        if ((int)(uVar15 - iVar9) < (int)(iVar6 * uVar13)) {
          return 0xfffffffc;
        }
        uVar8 = uVar12;
        if (0 < lVar11) {
          do {
            puVar10[uVar8] = param_6[uVar7 - 1];
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < lVar11);
        }
      }
      goto LAB_14556b435;
    }
  }
  else {
    if ((bVar2 & 3) == 1) {
      uVar7 = 2;
      bVar18 = 1;
      if (param_3 == 0) {
        if ((uVar14 & 1) != 0) {
          return 0xfffffffc;
        }
        *param_6 = (ushort)((int)uVar14 / 2);
        uVar14 = (int)uVar14 / 2;
      }
      goto LAB_14556b4ec;
    }
    if ((bVar2 & 3) == 2) {
      uVar7 = 2;
      iVar9 = FUN_14556b5e0(pbVar17,uVar14,param_6);
      uVar4 = *param_6;
      uVar15 = uVar14 - iVar9;
      if ((short)uVar4 < 0) {
        return 0xfffffffc;
      }
      if ((int)uVar15 < (int)(short)uVar4) {
        return 0xfffffffc;
      }
      pbVar17 = pbVar17 + iVar9;
      uVar14 = uVar15 - (int)(short)uVar4;
      goto LAB_14556b4ec;
    }
    if ((int)uVar14 < 1) {
      return 0xfffffffc;
    }
    bVar18 = *pbVar17;
    pbVar17 = param_1 + 2;
    uVar13 = bVar18 & 0x3f;
    uVar7 = (ulonglong)uVar13;
    if ((bVar18 & 0x3f) == 0) {
      return 0xfffffffc;
    }
    if (0x1680 < (int)(iVar9 * uVar13)) {
      return 0xfffffffc;
    }
    uVar15 = param_2 - 2;
    uVar16 = uVar12;
    if ((bVar18 & 0x40) != 0) {
      do {
        if ((int)uVar15 < 1) {
          return 0xfffffffc;
        }
        bVar3 = *pbVar17;
        pbVar17 = pbVar17 + 1;
        uVar5 = (uint)bVar3;
        if (bVar3 == 0xff) {
          uVar5 = 0xfe;
        }
        local_res8 = (int)uVar16 + uVar5;
        uVar15 = uVar15 + (-1 - uVar5);
        uVar16 = (ulonglong)local_res8;
      } while (bVar3 == 0xff);
    }
    if ((int)uVar15 < 0) {
      return 0xfffffffc;
    }
    bVar18 = ~(bVar18 >> 7) & 1;
    if (bVar18 == 0) {
      puVar10 = param_6;
      uVar16 = uVar12;
      uVar14 = uVar15;
      if (0 < (int)(uVar13 - 1)) {
        do {
          if ((int)uVar15 < 1) {
LAB_14556b3bc:
            *puVar10 = 0xffff;
            return 0xfffffffc;
          }
          uVar4 = (ushort)*pbVar17;
          if (*pbVar17 < 0xfc) {
            uVar5 = 1;
            *puVar10 = uVar4;
          }
          else {
            if ((int)uVar15 < 2) goto LAB_14556b3bc;
            uVar5 = 2;
            uVar4 = (ushort)pbVar17[1] * 4 + uVar4;
            *puVar10 = uVar4;
          }
          uVar15 = uVar15 - uVar5;
          if ((int)uVar15 < (int)(uint)uVar4) {
            return 0xfffffffc;
          }
          uVar19 = (int)uVar16 + 1;
          pbVar17 = pbVar17 + uVar5;
          uVar14 = uVar14 - (uVar4 + uVar5);
          puVar10 = puVar10 + 1;
          uVar16 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)(uVar13 - 1));
        if ((int)uVar14 < 0) {
          return 0xfffffffc;
        }
      }
      goto LAB_14556b4ec;
    }
    if (param_3 != 0) goto LAB_14556b4ec;
    uVar14 = (int)uVar15 / (int)uVar13;
    if (uVar13 * uVar14 != uVar15) {
      return 0xfffffffc;
    }
    if ((int)(uVar13 - 1) < 1) goto LAB_14556b4ec;
    puVar10 = param_6;
    for (uVar7 = uVar7 * 2 - 2 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = (ushort)uVar14;
      puVar10 = puVar10 + 1;
    }
    uVar16 = (ulonglong)uVar13;
    puVar10 = param_6;
  }
  if (0x4fb < (int)uVar14) {
    return 0xfffffffc;
  }
  puVar10[uVar16 - 1] = (ushort)uVar14;
  uVar7 = uVar16;
LAB_14556b435:
  if (param_7 != (int *)0x0) {
    *param_7 = (int)pbVar17 - (int)param_1;
  }
  if (uVar13 != 0) {
    if (param_5 == (undefined8 *)0x0) {
      if (uVar7 != 0) {
        do {
          puVar1 = puVar10 + uVar12;
          uVar12 = uVar12 + 1;
          pbVar17 = pbVar17 + (short)*puVar1;
        } while ((longlong)uVar12 < (longlong)uVar7);
      }
    }
    else {
      do {
        *param_5 = pbVar17;
        param_5 = param_5 + 1;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        pbVar17 = pbVar17 + (short)uVar4;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (param_8 != (int *)0x0) {
    *param_8 = ((int)pbVar17 - (int)param_1) + local_res8;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = bVar2;
  }
  return uVar13;
}



// FUNCTION 14556b5e0 FUN_14556b5e0 body=58 status=ok
// SIG undefined FUN_14556b5e0(void)

undefined8 FUN_14556b5e0(byte *param_1,int param_2,ushort *param_3)

{
  byte bVar1;
  
  if (0 < param_2) {
    bVar1 = *param_1;
    if (bVar1 < 0xfc) {
      *param_3 = (ushort)bVar1;
      return 1;
    }
    if (1 < param_2) {
      *param_3 = (ushort)param_1[1] * 4 + (ushort)bVar1;
      return 2;
    }
  }
  *param_3 = 0xffff;
  return 0xffffffff;
}



// FUNCTION 14556b620 FUN_14556b620 body=74 status=ok
// SIG undefined FUN_14556b620(void)

int FUN_14556b620(int param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if (param_1 - 1U < 2) {
    iVar1 = FUN_1455f03b0(local_res8);
    if (iVar1 == 0) {
      local_res8[0] = local_res8[0] + 7 & 0xfffffff8;
      iVar1 = FUN_1455ebbb0(param_1);
      return iVar1 + local_res8[0] + 0x58;
    }
  }
  return 0;
}



// FUNCTION 14556b670 FUN_14556b670 body=330 status=ok
// SIG undefined FUN_14556b670(void)

undefined1 * FUN_14556b670(int *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint local_res10 [4];
  uint local_res20 [2];
  
  if (((((param_2 == 48000) || (param_2 == 24000)) || (param_2 == 16000)) ||
      ((param_2 == 12000 || (param_2 == 8000)))) && (param_3 - 1U < 2)) {
    iVar1 = FUN_1455f03b0(local_res10);
    if (iVar1 == 0) {
      local_res10[0] = local_res10[0] + 7 & 0xfffffff8;
      iVar1 = FUN_1455ebbb0(param_3);
      iVar1 = iVar1 + local_res10[0] + 0x58;
    }
    else {
      iVar1 = 0;
    }
    memset(param_1,0,(longlong)iVar1);
    iVar1 = FUN_1455f03b0(local_res20);
    if (iVar1 == 0) {
      param_1[1] = 0x58;
      param_1[2] = param_3;
      param_1[0xc] = param_3;
      param_1[3] = param_2;
      local_res20[0] = local_res20[0] + 7 & 0xfffffff8;
      param_1[6] = param_2;
      lVar2 = (longlong)(int)(local_res20[0] + 0x58) + (longlong)param_1;
      *param_1 = local_res20[0] + 0x58;
      param_1[4] = param_3;
      iVar1 = FUN_1455f03c0(param_1 + 0x16);
      if (iVar1 == 0) {
        iVar1 = FUN_1455ebbf0(lVar2,param_2,param_3);
        if (iVar1 == 0) {
          FUN_1455eb910(lVar2,0x2720,0);
          param_1[0xf] = 0;
          param_1[0x10] = param_2 / 400;
          iVar1 = FUN_1455ef990();
          param_1[0xb] = iVar1;
          return (undefined1 *)0x0;
        }
      }
    }
    return &DAT_fffffffd;
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 14556b7c0 FUN_14556b7c0 body=467 status=ok
// SIG undefined FUN_14556b7c0(void)

undefined1 * FUN_14556b7c0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint local_res18;
  
  iVar1 = param_1[1];
  lVar3 = (longlong)*param_1 + (longlong)param_1;
  local_res18 = (uint)param_3;
  switch(param_2) {
  case 0xfa9:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0xd];
      return (undefined1 *)0x0;
    }
    break;
  default:
    return &DAT_fffffffb;
  case 0xfbc:
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    FUN_1455eb910(lVar3,0xfbc);
    FUN_1455f03c0((longlong)iVar1 + (longlong)param_1);
    param_1[0xc] = param_1[2];
    param_1[0x10] = param_1[3] / 400;
    return (undefined1 *)0x0;
  case 0xfbd:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[3];
      return (undefined1 *)0x0;
    }
    break;
  case 0xfbf:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x15];
      return (undefined1 *)0x0;
    }
    break;
  case 0xfc1:
    if (param_3 != (int *)0x0) {
      if (param_1[0xf] == 0x3ea) {
        puVar2 = (undefined1 *)FUN_1455eb910(lVar3,0xfc1,param_3);
        return puVar2;
      }
      *param_3 = param_1[9];
      return (undefined1 *)0x0;
    }
    break;
  case 0xfc2:
    if (local_res18 + 0x8000 < 0x10000) {
      param_1[10] = local_res18;
      return (undefined1 *)0x0;
    }
    break;
  case 0xfc7:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x12];
      return (undefined1 *)0x0;
    }
    break;
  case 0xfcd:
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[10];
      return (undefined1 *)0x0;
    }
    break;
  case 0xfce:
    if (local_res18 < 2) {
      puVar2 = (undefined1 *)FUN_1455eb910(lVar3,0xfce);
      return puVar2;
    }
    break;
  case 0xfcf:
    if (param_3 != (int *)0x0) {
      puVar2 = (undefined1 *)FUN_1455eb910(lVar3,0xfcf);
      return puVar2;
    }
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 14556b9f0 FUN_14556b9f0 body=55 status=ok
// SIG undefined FUN_14556b9f0(void)

uint FUN_14556b9f0(byte *param_1,int param_2)

{
  if (param_2 < 1) {
    return 0xffffffff;
  }
  if ((*param_1 & 3) == 0) {
    return 1;
  }
  if ((*param_1 & 3) != 3) {
    return 2;
  }
  if (param_2 < 2) {
    return 0xfffffffc;
  }
  return param_1[1] & 0x3f;
}



// FUNCTION 14556ba30 FUN_14556ba30 body=134 status=ok
// SIG undefined FUN_14556ba30(void)

int FUN_14556ba30(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < 1) {
    return -1;
  }
  uVar1 = *param_1 & 3;
  if ((*param_1 & 3) == 0) {
    uVar1 = uVar1 + 1;
  }
  else if (uVar1 == 3) {
    if (param_2 < 2) {
      return -4;
    }
    uVar1 = param_1[1] & 0x3f;
  }
  else {
    uVar1 = 2;
  }
  iVar2 = FUN_14556a890(param_1,param_3);
  iVar2 = iVar2 * uVar1;
  if (param_3 * 3 < iVar2 * 0x19) {
    iVar2 = -4;
  }
  return iVar2;
}



// FUNCTION 14556bac0 FUN_14556bac0 body=921 status=ok
// SIG undefined FUN_14556bac0(void)

ulonglong FUN_14556bac0(longlong param_1,byte *param_2,int param_3,longlong param_4,uint param_5,
                       uint param_6,undefined4 param_7,undefined8 param_8,int param_9)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffff40;
  short *psVar12;
  int *piVar13;
  int local_98;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  short local_88 [48];
  
  if (param_6 < 2) {
    if (((param_6 != 0) || (param_3 == 0)) || (param_2 == (byte *)0x0)) {
      if ((int)param_5 % (*(int *)(param_1 + 0xc) / 400) != 0) {
        return 0xffffffff;
      }
      if ((param_3 == 0) || (param_2 == (byte *)0x0)) {
        uVar7 = 0;
        do {
          in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffff00000000;
          uVar5 = FUN_14556c200(param_1,0,0,
                                param_4 + (longlong)(int)(uVar7 * *(int *)(param_1 + 8)) * 4,
                                param_5 - uVar7,in_stack_ffffffffffffff40);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          uVar7 = uVar7 + (int)uVar5;
        } while ((int)uVar7 < (int)param_5);
        *(uint *)(param_1 + 0x48) = uVar7;
        return (ulonglong)uVar7;
      }
    }
    if (-1 < param_3) {
      bVar1 = *param_2;
      if ((char)bVar1 < '\0') {
        local_98 = 0x3ea;
        uVar7 = (bVar1 >> 5 & 3) + 0x44e;
        if (uVar7 == 0x44e) {
          uVar7 = 0x44d;
        }
      }
      else if ((bVar1 & 0x60) == 0x60) {
        local_98 = 0x3e9;
        uVar7 = (bVar1 & 0x10 | 0x4500) >> 4;
      }
      else {
        local_98 = 1000;
        uVar7 = (bVar1 >> 5 & 3) + 0x44d;
      }
      iVar3 = FUN_14556a890(param_2,*(undefined4 *)(param_1 + 0xc));
      local_90 = ((*param_2 & 4) != 0) + 1;
      piVar13 = &local_8c;
      psVar12 = local_88;
      uVar11 = 0;
      uVar4 = FUN_14556b1b0(param_2,param_3,param_7,local_94,0,psVar12,piVar13,param_8);
      uVar6 = (uint)((ulonglong)psVar12 >> 0x20);
      if ((int)uVar4 < 0) {
        return (ulonglong)uVar4;
      }
      param_2 = param_2 + local_8c;
      if (param_6 == 0) {
        if ((int)param_5 < (int)(uVar4 * iVar3)) {
          return 0xfffffffe;
        }
        *(int *)(param_1 + 0x38) = local_98;
        *(int *)(param_1 + 0x40) = iVar3;
        uVar6 = 0;
        *(int *)(param_1 + 0x30) = local_90;
        *(uint *)(param_1 + 0x34) = uVar7;
        if (0 < (int)uVar4) {
          lVar8 = 0;
          do {
            psVar12 = (short *)((ulonglong)psVar12 & 0xffffffff00000000);
            uVar5 = FUN_14556c200(param_1,param_2,(int)local_88[lVar8],
                                  param_4 + (longlong)(int)(uVar6 * *(int *)(param_1 + 8)) * 4,
                                  param_5 - uVar6,psVar12);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            uVar6 = uVar6 + (int)uVar5;
            param_2 = param_2 + local_88[lVar8];
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)uVar4);
        }
        *(uint *)(param_1 + 0x48) = uVar6;
        if (param_9 == 0) {
          *(undefined8 *)(param_1 + 0x4c) = 0;
          return (ulonglong)uVar6;
        }
        FUN_14556a910(param_4,uVar6,*(undefined4 *)(param_1 + 8),param_1 + 0x4c);
        return (ulonglong)uVar6;
      }
      uVar4 = (uint)((ulonglong)piVar13 >> 0x20);
      if ((((int)param_5 < iVar3) || (local_98 == 0x3ea)) || (*(int *)(param_1 + 0x38) == 0x3ea)) {
        uVar5 = FUN_14556bac0(param_1,0,0,param_4,CONCAT44(uVar11,param_5),(ulonglong)uVar6 << 0x20,
                              (ulonglong)uVar4 << 0x20,0,param_9);
        return uVar5;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      iVar9 = param_5 - iVar3;
      if (iVar9 != 0) {
        lVar8 = (ulonglong)uVar6 << 0x20;
        uVar10 = CONCAT44(uVar11,iVar9);
        uVar5 = FUN_14556bac0(param_1,0,0,param_4,uVar10,lVar8,(ulonglong)uVar4 << 0x20,0,param_9);
        uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar6 = (uint)((ulonglong)lVar8 >> 0x20);
        if ((int)uVar5 < 0) {
          *(undefined4 *)(param_1 + 0x48) = uVar2;
          return uVar5;
        }
      }
      *(int *)(param_1 + 0x38) = local_98;
      *(int *)(param_1 + 0x30) = local_90;
      *(uint *)(param_1 + 0x34) = uVar7;
      *(int *)(param_1 + 0x40) = iVar3;
      uVar5 = FUN_14556c200(param_1,param_2,(int)local_88[0],
                            param_4 + (longlong)(iVar9 * *(int *)(param_1 + 8)) * 4,
                            CONCAT44(uVar11,iVar3),CONCAT44(uVar6,1));
      if (-1 < (int)uVar5) {
        *(uint *)(param_1 + 0x48) = param_5;
        return (ulonglong)param_5;
      }
      return uVar5;
    }
  }
  return 0xffffffff;
}



// FUNCTION 14556be60 FUN_14556be60 body=921 status=ok
// SIG undefined FUN_14556be60(void)

void FUN_14556be60(longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  longlong param_6,int param_7)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float *pfVar18;
  longlong lVar19;
  float fVar20;
  int local_c8;
  
  uVar12 = (ulonglong)(int)param_5;
  local_c8 = 0;
  iVar2 = (int)(48000 / (longlong)param_7);
  if (0 < (int)param_5) {
    lVar9 = param_1 - param_2;
    pfVar18 = (float *)(param_2 + uVar12 * 4);
    uVar7 = uVar12;
    uVar17 = uVar12;
    do {
      iVar14 = 0;
      if (3 < param_4) {
        iVar11 = (int)uVar7;
        lVar15 = (longlong)(iVar2 * 2);
        pfVar13 = (float *)(param_6 + lVar15 * 4);
        lVar10 = (longlong)(local_c8 + iVar11 * 2) - uVar17;
        lVar4 = lVar10 * 4 - param_2;
        lVar19 = (longlong)(local_c8 + iVar11 * 3) - uVar17;
        lVar5 = lVar19 * 4 - param_2;
        lVar6 = uVar12 * -4 - param_2;
        uVar3 = (param_4 - 4U >> 2) + 1;
        uVar7 = (ulonglong)uVar3;
        iVar14 = uVar3 * 4;
        pfVar8 = pfVar18;
        do {
          fVar20 = pfVar13[-lVar15] * pfVar13[-lVar15];
          *(float *)((longlong)pfVar8 + lVar6 + param_3) =
               (1.0 - fVar20) * *(float *)((longlong)pfVar8 + lVar6 + param_1) +
               fVar20 * pfVar8[-uVar12];
          fVar20 = pfVar13[iVar2 - lVar15] * pfVar13[iVar2 - lVar15];
          *(float *)((longlong)pfVar8 + (param_3 - param_2)) =
               (1.0 - fVar20) * *(float *)((longlong)pfVar8 + lVar9) + fVar20 * *pfVar8;
          fVar20 = *pfVar13 * *pfVar13;
          *(float *)((longlong)pfVar8 + lVar4 + param_3) =
               (1.0 - fVar20) * *(float *)((longlong)pfVar8 + lVar4 + param_1) +
               fVar20 * pfVar8[lVar10];
          pfVar1 = pfVar13 + (iVar2 * 3 - lVar15);
          pfVar13 = pfVar13 + iVar2 * 4;
          fVar20 = *pfVar1 * *pfVar1;
          *(float *)((longlong)pfVar8 + lVar5 + param_3) =
               (1.0 - fVar20) * *(float *)((longlong)pfVar8 + lVar5 + param_1) +
               fVar20 * pfVar8[lVar19];
          pfVar8 = pfVar8 + iVar11 * 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        lVar9 = param_1 - param_2;
        uVar7 = (ulonglong)param_5;
      }
      iVar11 = (int)uVar7;
      if (iVar14 < param_4) {
        pfVar13 = (float *)(param_6 + (longlong)(iVar14 * iVar2) * 4);
        pfVar8 = (float *)(param_2 + (longlong)(iVar14 * iVar11 + local_c8) * 4);
        uVar16 = (ulonglong)(uint)(param_4 - iVar14);
        do {
          fVar20 = *pfVar13 * *pfVar13;
          pfVar13 = pfVar13 + iVar2;
          *(float *)((param_3 - param_2) + (longlong)pfVar8) =
               (1.0 - fVar20) * *(float *)((longlong)pfVar8 + lVar9) + fVar20 * *pfVar8;
          pfVar8 = pfVar8 + iVar11;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      else {
        lVar9 = param_1 - param_2;
      }
      local_c8 = local_c8 + 1;
      uVar17 = uVar17 + 1;
      pfVar18 = pfVar18 + 1;
    } while (local_c8 < iVar11);
  }
  return;
}



// FUNCTION 14556c200 FUN_14556c200 body=3247 status=ok
// SIG undefined FUN_14556c200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
FUN_14556c200(int *param_1,longlong param_2,int param_3,float *param_4,uint param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  short *psVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  short *psVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined1 *puVar26;
  int iVar27;
  undefined1 auVar28 [16];
  float fVar29;
  longlong local_res10;
  int local_res18;
  undefined8 auStack_110 [5];
  uint local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  int local_d0 [2];
  float local_c8;
  uint uStack_c4;
  int local_c0;
  int iStack_bc;
  uint local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  longlong local_98;
  longlong local_90;
  short *local_88;
  longlong local_80;
  undefined1 local_78 [8];
  int local_70;
  int local_60;
  uint local_58;
  short *local_40;
  
  iVar12 = 0;
  local_80 = (longlong)param_1[1] + (longlong)param_1;
  local_90 = (longlong)*param_1 + (longlong)param_1;
  local_a0 = 0;
  local_98 = 0;
  bVar6 = false;
  local_a4 = param_1[3] / 0x32;
  local_c0 = 0;
  iStack_ac = 0;
  iStack_bc = 0;
  uVar24 = (int)local_a4 >> 1;
  local_a8 = 0;
  uStack_c4 = (int)local_a4 >> 2;
  iVar27 = (int)local_a4 >> 3;
  if ((int)param_5 < iVar27) {
    return (undefined1 *)0xfffffffe;
  }
  uVar20 = (param_1[3] / 0x19) * 3;
  uVar25 = param_5;
  if ((int)uVar20 <= (int)param_5) {
    uVar25 = uVar20;
  }
  puVar26 = (undefined1 *)(ulonglong)uVar25;
  if (param_3 < 2) {
    local_res10 = 0;
    if (param_1[0x10] <= (int)uVar25) {
      puVar26 = (undefined1 *)(ulonglong)(uint)param_1[0x10];
    }
LAB_14556c2ea:
    local_c8 = (float)param_1[0xf];
    uVar25 = (uint)puVar26;
    local_b0 = 0;
    if (local_c8 == 0.0) {
      if ((int)(uVar25 * param_1[2]) < 1) {
        return puVar26;
      }
      do {
        *param_4 = 0.0;
        param_4 = param_4 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)(uVar25 * param_1[2]));
      return puVar26;
    }
    puVar11 = puVar26;
    if ((int)local_a4 < (int)uVar25) {
      while( true ) {
        uVar24 = (uint)puVar11;
        local_e0._0_4_ = 0;
        local_e8[0] = local_a4;
        if ((int)uVar24 < (int)local_a4) {
          local_e8[0] = uVar24;
        }
        auStack_110[0] = 0x14556c392;
        puVar11 = (undefined1 *)FUN_14556c200(param_1,0,0,param_4);
        iVar12 = (int)puVar11;
        if (iVar12 < 0) break;
        puVar11 = (undefined1 *)(ulonglong)(uVar24 - iVar12);
        param_4 = param_4 + iVar12 * param_1[2];
        if ((int)(uVar24 - iVar12) < 1) {
          return puVar26;
        }
      }
      return puVar11;
    }
    uVar20 = uVar25;
    if (((((int)uVar25 < (int)local_a4) && (uVar20 = uVar24, (int)uVar25 <= (int)uVar24)) &&
        (uVar20 = uVar25, local_c8 != 1.4013e-42)) &&
       (((int)uStack_c4 < (int)uVar25 && ((int)uVar25 < (int)uVar24)))) {
      uVar20 = uStack_c4;
    }
    iStack_b4 = 0;
    iVar12 = 0;
    if (local_res10 != 0) goto LAB_14556c3fc;
    bVar5 = false;
    iVar9 = iStack_b4;
  }
  else {
    local_res10 = param_2;
    if (param_2 == 0) goto LAB_14556c2ea;
    local_b0 = param_1[0xd];
    local_c8 = (float)param_1[0xe];
    uVar20 = param_1[0x10];
    auStack_110[0] = 0x14556c34f;
    FUN_1455ef520(local_78,param_2);
LAB_14556c3fc:
    iStack_b4 = 0;
    iVar12 = 0;
    iVar9 = param_1[0xf];
    if (0 < iVar9) {
      if (local_c8 == 1.4041e-42) {
        if ((iVar9 != 0x3ea) && (param_1[0x11] == 0)) {
LAB_14556c426:
          bVar5 = true;
          bVar6 = true;
          iVar9 = uStack_c4 * param_1[2];
          if (local_c8 == 1.4041e-42) {
            iVar12 = uStack_c4 * param_1[2];
            iVar9 = iStack_b4;
          }
          goto LAB_14556c44e;
        }
      }
      else if (iVar9 == 0x3ea) goto LAB_14556c426;
    }
    bVar5 = false;
    iVar9 = iStack_b4;
  }
LAB_14556c44e:
  iStack_b4 = iVar9;
  uVar7 = uStack_c4;
  uVar13 = (longlong)iVar12 * 4 + 0xf;
  if (uVar13 <= (ulonglong)((longlong)iVar12 * 4)) {
    uVar13 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x14556c477;
  lVar18 = -(uVar13 & 0xfffffffffffffff0);
  if ((bVar5) && (local_c8 == 1.4041e-42)) {
    *(undefined4 *)((longlong)&local_e0 + lVar18) = 0;
    uVar8 = uVar20;
    if ((int)uVar7 < (int)uVar20) {
      uVar8 = uStack_c4;
    }
    *(uint *)((longlong)local_e8 + lVar18) = uVar8;
    local_98 = (longlong)&local_c8 + lVar18;
    *(undefined8 *)((longlong)auStack_110 + lVar18) = 0x14556c4b2;
    FUN_14556c200(param_1,0);
  }
  if ((int)uVar25 < (int)uVar20) {
    return &DAT_ffffffff;
  }
  if (local_c8 == 1.4041e-42) {
    iVar12 = 0;
  }
  else {
    uVar25 = uVar20;
    if ((int)uVar20 < (int)uVar24) {
      uVar25 = uVar24;
    }
    iVar12 = uVar25 * param_1[2];
  }
  uVar13 = (longlong)iVar12 * 2 + 0xf;
  if (uVar13 <= (ulonglong)((longlong)iVar12 * 2)) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar18) = 0x14556c4ff;
  lVar3 = local_80;
  fVar29 = local_c8;
  lVar2 = -(uVar13 & 0xfffffffffffffff0);
  local_88 = (short *)((longlong)&local_c8 + lVar2 + lVar18);
  if (local_c8 != 1.4041e-42) {
    local_40 = local_88;
    if (param_1[0xf] == 0x3ea) {
      *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c536;
      FUN_1455f03c0(lVar3);
    }
    iVar12 = (int)(uVar20 * 1000) / param_1[3];
    if (iVar12 < 10) {
      iVar12 = 10;
    }
    param_1[8] = iVar12;
    if (local_res10 == 0) {
      param_5 = 1;
    }
    else {
      param_1[5] = param_1[0xc];
      if (fVar29 == 1.4013e-42) {
        if (local_b0 == 0x44d) {
          param_5 = param_6 * 2;
          param_1[7] = 8000;
        }
        else {
          if (local_b0 != 0x44e) goto LAB_14556c599;
          param_5 = param_6 * 2;
          param_1[7] = 12000;
        }
      }
      else {
LAB_14556c599:
        param_5 = param_6 * 2;
        param_1[7] = 16000;
      }
    }
    iVar12 = 0;
    psVar22 = local_40;
    do {
      *(int *)((longlong)local_d0 + lVar2 + lVar18) = param_1[0xb];
      lVar3 = local_80;
      *(uint **)((longlong)&local_d8 + lVar2 + lVar18) = &local_b8;
      *(short **)((longlong)&local_e0 + lVar2 + lVar18) = psVar22;
      *(undefined1 **)((longlong)local_e8 + lVar2 + lVar18) = local_78;
      *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c5fa;
      iVar9 = FUN_1455f0420(lVar3,param_1 + 4,param_5,iVar12 == 0);
      if (iVar9 != 0) {
        if (param_5 == 0) goto LAB_14556c87e;
        iVar9 = 0;
        psVar14 = psVar22;
        local_b8 = uVar20;
        if (0 < (int)(uVar20 * param_1[2])) {
          do {
            *psVar14 = 0;
            iVar9 = iVar9 + 1;
            psVar14 = psVar14 + 1;
          } while (iVar9 < (int)(uVar20 * param_1[2]));
        }
      }
      iVar12 = iVar12 + local_b8;
      psVar22 = psVar22 + (int)(local_b8 * param_1[2]);
    } while (iVar12 < (int)uVar20);
  }
  fVar29 = local_c8;
  local_res18 = param_3;
  if (((param_6 == 0) && (local_res18 = param_3, local_c8 != 1.4041e-42)) &&
     (local_res18 = param_3, local_res10 != 0)) {
    iVar12 = 0x1f;
    if (local_58 != 0) {
      for (; local_58 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0;
    if (param_1[0xe] == 0x3e9) {
      iVar9 = 0x14;
    }
    local_res18 = param_3;
    if ((iVar9 - iVar12) + local_60 + 0x10 <= param_3 * 8) {
      if (local_c8 == 1.4027e-42) {
        *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c6e5;
        iVar9 = FUN_1455ef640(local_78,0xc);
        local_res18 = param_3;
        local_c0 = iVar9;
        if (iVar9 == 0) goto LAB_14556c79e;
        *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c701;
        iStack_bc = FUN_1455ef640(local_78,1);
        *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c712;
        iVar12 = FUN_1455ef6f0(local_78,0x100);
        iVar12 = iVar12 + 2;
      }
      else {
        iVar9 = 1;
        *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c739;
        iStack_bc = FUN_1455ef640(local_78,1);
        iVar12 = 0x1f;
        if (local_58 != 0) {
          for (; local_58 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        iVar12 = param_3 - ((local_60 - iVar12) + 6 >> 3);
      }
      iVar10 = 0x1f;
      if (local_58 != 0) {
        for (; local_58 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      local_res18 = 0;
      iVar23 = (param_3 - iVar12) * 8;
      iVar10 = (local_60 - iVar10) + -1;
      iStack_ac = local_res18;
      if (iVar10 <= iVar23) {
        iStack_ac = iVar12;
      }
      local_70 = local_70 - iStack_ac;
      local_c0 = local_res18;
      if (iVar10 <= iVar23) {
        local_res18 = param_3 - iVar12;
        local_c0 = iVar9;
      }
    }
  }
LAB_14556c79e:
  iVar12 = iStack_b4;
  if (local_c0 != 0) {
    bVar6 = false;
    iVar12 = 0;
  }
  uVar13 = (longlong)iVar12 * 4 + 0xf;
  if (uVar13 <= (ulonglong)((longlong)iVar12 * 4)) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar2 + lVar18) = 0x14556c7f1;
  lVar3 = -(uVar13 & 0xfffffffffffffff0);
  if ((bVar6) && (fVar29 != 1.4041e-42)) {
    uVar24 = uVar20;
    if ((int)uStack_c4 < (int)uVar20) {
      uVar24 = uStack_c4;
    }
    local_98 = (longlong)&local_c8 + lVar3 + lVar2 + lVar18;
    *(undefined4 *)((longlong)&local_e0 + lVar3 + lVar2 + lVar18) = 0;
    *(uint *)((longlong)local_e8 + lVar3 + lVar2 + lVar18) = uVar24;
    *(undefined8 *)((longlong)auStack_110 + lVar3 + lVar2 + lVar18) = 0x14556c82c;
    FUN_14556c200(param_1,0,0);
  }
  lVar17 = local_90;
  iVar12 = 0;
  if (local_b0 != 0) {
    uVar21 = 0x15;
    if (local_b0 == 0x44d) {
      uVar21 = 0xd;
    }
    else if ((local_b0 == 0x44e) || (local_b0 == 0x44f)) {
      uVar21 = 0x11;
    }
    else if (local_b0 == 0x450) {
      uVar21 = 0x13;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar3 + lVar2 + lVar18) = 0x14556c87a;
    iVar9 = FUN_1455eb910(lVar17,0x271c,uVar21);
    if (iVar9 != 0) goto LAB_14556c87e;
  }
  iVar9 = param_1[0xc];
  *(undefined8 *)((longlong)auStack_110 + lVar3 + lVar2 + lVar18) = 0x14556c8b2;
  iVar10 = FUN_1455eb910(lVar17,0x2718,iVar9);
  iVar9 = local_c0;
  if (iVar10 != 0) goto LAB_14556c87e;
  if (local_c0 != 0) {
    iVar12 = uStack_c4 * param_1[2];
  }
  uVar13 = (longlong)iVar12 * 4 + 0xf;
  if (uVar13 <= (ulonglong)((longlong)iVar12 * 4)) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar3 + lVar2 + lVar18) = 0x14556c8f7;
  lVar16 = local_90;
  lVar4 = -(uVar13 & 0xfffffffffffffff0);
  lVar17 = (longlong)&local_c8 + lVar4 + lVar3 + lVar2 + lVar18;
  if ((iVar9 != 0) && (iStack_bc != 0)) {
    *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556c91d;
    iVar9 = FUN_1455eb910(lVar16,0x271a,0);
    iVar12 = iStack_ac;
    if (iVar9 != 0) goto LAB_14556c87e;
    *(undefined4 *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
    *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
    *(uint *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = uStack_c4;
    *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556c954;
    FUN_1455ebcd0(lVar16,local_res18 + local_res10,iVar12,lVar17);
    *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556c965;
    iVar12 = FUN_1455eb910(lVar16,0xfbf,&local_a8);
    if (iVar12 != 0) goto LAB_14556c87e;
  }
  lVar16 = local_90;
  *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556c985;
  iVar12 = FUN_1455eb910(lVar16,0x271a);
  if (iVar12 != 0) goto LAB_14556c87e;
  if (local_c8 == 1.4013e-42) {
    iVar12 = 0;
    param_5 = CONCAT22(param_5._2_2_,0xffff);
    pfVar15 = param_4;
    if (0 < (int)(uVar20 * param_1[2])) {
      do {
        *pfVar15 = 0.0;
        iVar12 = iVar12 + 1;
        pfVar15 = pfVar15 + 1;
      } while (iVar12 < (int)(uVar20 * param_1[2]));
    }
    if ((param_1[0xf] == 0x3e9) && (((local_c0 == 0 || (iStack_bc == 0)) || (param_1[0x11] == 0))))
    {
      *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556ca7c;
      iVar12 = FUN_1455eb910(lVar16,0x271a);
      if (iVar12 != 0) goto LAB_14556c87e;
      *(undefined4 *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
      *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
      *(int *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = iVar27;
      *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556caaa;
      FUN_1455ebcd0(lVar16,&param_5,2,param_4);
    }
LAB_14556caad:
    iVar12 = 0;
    pfVar15 = param_4;
    psVar22 = local_88;
    if (0 < (int)(uVar20 * param_1[2])) {
      do {
        iVar12 = iVar12 + 1;
        *pfVar15 = (float)(int)*psVar22 * 3.0517578e-05 + *pfVar15;
        pfVar15 = pfVar15 + 1;
        psVar22 = psVar22 + 1;
      } while (iVar12 < (int)(uVar20 * param_1[2]));
    }
  }
  else {
    uVar24 = uVar20;
    if ((int)local_a4 < (int)uVar20) {
      uVar24 = local_a4;
    }
    if (((local_c8 != (float)param_1[0xf]) && (0 < param_1[0xf])) && (param_1[0x11] == 0)) {
      *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556c9c5;
      iVar12 = FUN_1455eb910(lVar16,0xfbc);
      if (iVar12 != 0) goto LAB_14556c87e;
    }
    lVar19 = local_res10;
    if (param_6 != 0) {
      lVar19 = 0;
    }
    *(undefined4 *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
    *(undefined1 **)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = local_78;
    *(uint *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = uVar24;
    *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556ca08;
    local_a0 = FUN_1455ebcd0(lVar16,lVar19,local_res18,param_4);
    if (local_c8 != 1.4041e-42) goto LAB_14556caad;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cb0c;
  iVar12 = FUN_1455eb910(lVar16,0x271f,&local_88);
  if (iVar12 != 0) {
LAB_14556c87e:
    return &DAT_fffffffd;
  }
  uVar1 = *(undefined8 *)(local_88 + 0x24);
  if (local_c0 != 0) {
    if (iStack_bc == 0) {
      *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cb3d;
      iVar12 = FUN_1455eb910(lVar16,0xfbc);
      if (iVar12 == 0) {
        *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cb55;
        iVar9 = FUN_1455eb910(lVar16,0x271a,0);
        iVar12 = iStack_ac;
        if (iVar9 == 0) {
          *(undefined4 *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
          *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = 0;
          *(uint *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = uStack_c4;
          *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cb8c;
          FUN_1455ebcd0(lVar16,local_res18 + local_res10,iVar12,lVar17);
          *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cb9d;
          iVar12 = FUN_1455eb910(lVar16,0xfbf,&local_a8);
          if (iVar12 == 0) {
            iVar12 = param_1[2];
            *(int *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = param_1[3];
            *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = uVar1;
            *(int *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = iVar12;
            *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cbe1;
            FUN_14556be60(param_4 + (int)((uVar20 - iVar27) * iVar12),
                          lVar17 + (longlong)(iVar12 * iVar27) * 4,
                          param_4 + (int)((uVar20 - iVar27) * iVar12),iVar27);
            goto LAB_14556cbe4;
          }
        }
      }
      goto LAB_14556c87e;
    }
    iVar12 = param_1[2];
    iVar9 = 0;
    if (0 < iVar12) {
      do {
        iVar12 = 0;
        if (3 < iVar27) {
          iVar23 = 2;
          iVar10 = iVar12;
          do {
            iVar12 = iVar10 + 4;
            lVar16 = (longlong)(iVar10 * param_1[2] + iVar9);
            param_4[lVar16] = *(float *)(lVar17 + lVar16 * 4);
            lVar16 = (longlong)((iVar23 + -1) * param_1[2] + iVar9);
            param_4[lVar16] = *(float *)(lVar17 + lVar16 * 4);
            lVar16 = (longlong)(iVar23 * param_1[2] + iVar9);
            param_4[lVar16] = *(float *)(lVar17 + lVar16 * 4);
            iVar10 = iVar23 + 1;
            iVar23 = iVar23 + 4;
            lVar16 = (longlong)(iVar10 * param_1[2] + iVar9);
            param_4[lVar16] = *(float *)(lVar17 + lVar16 * 4);
            iVar10 = iVar12;
          } while (iVar12 < iVar27 + -3);
        }
        for (; iVar12 < iVar27; iVar12 = iVar12 + 1) {
          lVar16 = (longlong)(iVar12 * param_1[2] + iVar9);
          param_4[lVar16] = *(float *)(lVar17 + lVar16 * 4);
        }
        iVar12 = param_1[2];
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar12);
    }
    *(int *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = param_1[3];
    *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = uVar1;
    *(int *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = iVar12;
    *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cd5a;
    FUN_14556be60(lVar17 + (longlong)(iVar12 * iVar27) * 4,param_4 + iVar12 * iVar27,
                  param_4 + iVar12 * iVar27,iVar27);
  }
LAB_14556cbe4:
  lVar17 = local_98;
  if (bVar6) {
    iVar12 = param_1[2];
    if ((int)uVar20 < (int)uStack_c4) {
      *(int *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = param_1[3];
      *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = uVar1;
      *(int *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = iVar12;
      pfVar15 = param_4;
    }
    else {
      iVar9 = 0;
      if (0 < iVar12 * iVar27) {
        pfVar15 = param_4;
        do {
          iVar9 = iVar9 + 1;
          *pfVar15 = *(float *)((local_98 - (longlong)param_4) + (longlong)pfVar15);
          pfVar15 = pfVar15 + 1;
          iVar12 = param_1[2];
        } while (iVar9 < iVar12 * iVar27);
      }
      *(int *)((longlong)&local_d8 + lVar4 + lVar3 + lVar2 + lVar18) = param_1[3];
      *(undefined8 *)((longlong)&local_e0 + lVar4 + lVar3 + lVar2 + lVar18) = uVar1;
      *(int *)((longlong)local_e8 + lVar4 + lVar3 + lVar2 + lVar18) = iVar12;
      lVar17 = lVar17 + (longlong)(iVar12 * iVar27) * 4;
      pfVar15 = param_4 + iVar12 * iVar27;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar4 + lVar3 + lVar2 + lVar18) = 0x14556cd82;
    FUN_14556be60(lVar17,pfVar15,pfVar15,iVar27);
  }
  if (param_1[10] != 0) {
    fVar29 = (float)param_1[10] * 0.0006488141;
    auVar28._0_8_ = (double)fVar29;
    lVar18 = (longlong)fVar29;
    if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != auVar28._0_8_)) {
      auVar28._8_8_ = auVar28._0_8_;
      uVar24 = movmskpd(0,auVar28);
      auVar28._0_8_ = (double)(longlong)(lVar18 - (ulonglong)(uVar24 & 1));
    }
    iVar12 = (int)auVar28._0_8_;
    if (iVar12 < -0x32) {
      fVar29 = 0.0;
    }
    else {
      fVar29 = fVar29 - (float)iVar12;
      fVar29 = ABS((float)(iVar12 * 0x800000 +
                          (int)(((fVar29 * 0.07802452 + 0.22606716) * fVar29 + 0.69583356) * fVar29
                               + 0.9999252)));
    }
    iVar12 = 0;
    if (0 < (int)(uVar20 * param_1[2])) {
      do {
        iVar12 = iVar12 + 1;
        *param_4 = fVar29 * *param_4;
        param_4 = param_4 + 1;
      } while (iVar12 < (int)(uVar20 * param_1[2]));
    }
  }
  if (local_res18 < 2) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_58 ^ local_a8;
  }
  param_1[0x15] = local_a8;
  param_1[0xf] = (int)local_c8;
  if ((local_c0 == 0) || (iVar12 = 1, iStack_bc != 0)) {
    iVar12 = 0;
  }
  param_1[0x11] = iVar12;
  if ((int)local_a0 < 0) {
    uVar20 = local_a0;
  }
  return (undefined1 *)(ulonglong)uVar20;
}



// FUNCTION 14556ceb0 FUN_14556ceb0 body=470 status=ok
// SIG undefined FUN_14556ceb0(void)

undefined8 FUN_14556ceb0(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uStack_110;
  uint uStack_10c;
  
  if ((param_3 < 8) || (*param_2 != 0x646165487375704f)) {
    return 0xffffff7c;
  }
  if (param_3 < 9) {
    return 0xffffff7b;
  }
  bVar1 = *(byte *)(param_2 + 1);
  if (0xf < bVar1) {
    return 0xffffff7a;
  }
  if (param_3 < 0x13) {
    return 0xffffff7b;
  }
  uVar6 = *(ushort *)((longlong)param_2 + 10);
  bVar2 = *(byte *)((longlong)param_2 + 9);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar8 = *(ushort *)(param_2 + 2);
  cVar3 = *(char *)((longlong)param_2 + 0x12);
  if (cVar3 == '\0') {
    if (1 < bVar2 - 1) {
      return 0xffffff7b;
    }
    if ((bVar1 < 2) && (0x13 < param_3)) {
      return 0xffffff7b;
    }
    uStack_110 = 1;
    uStack_10c = bVar2 - 1;
    if (param_1 == (ulonglong *)0x0) {
      return 0;
    }
    *(undefined2 *)(param_1 + 4) = 0x100;
  }
  else {
    if ((1 < (byte)(cVar3 - 1U)) && (cVar3 != -1)) {
      return 0xffffff7b;
    }
    if (bVar2 == 0) {
      return 0xffffff7b;
    }
    uVar11 = (uint)bVar2;
    if ((cVar3 == '\x01') && (uVar11 != 8 && 7 < bVar2)) {
      return 0xffffff7b;
    }
    if (param_3 < (ulonglong)(longlong)(int)(bVar2 + 0x15)) {
      return 0xffffff7b;
    }
    if ((bVar1 < 2) && ((ulonglong)(longlong)(int)(bVar2 + 0x15) < param_3)) {
      return 0xffffff7b;
    }
    bVar4 = *(byte *)((longlong)param_2 + 0x13);
    uStack_110 = (uint)bVar4;
    if (uStack_110 == 0) {
      return 0xffffff7b;
    }
    bVar5 = *(byte *)((longlong)param_2 + 0x14);
    uStack_10c = (uint)bVar5;
    if (bVar4 <= uStack_10c && (uint)bVar5 != (uint)bVar4) {
      return 0xffffff7b;
    }
    iVar9 = 0;
    if (uVar11 != 0) {
      pbVar10 = (byte *)((longlong)param_2 + 0x15);
      do {
        if (((uint)bVar4 + (uint)bVar5 <= (uint)*pbVar10) && (*pbVar10 != 0xff)) {
          return 0xffffff7b;
        }
        iVar9 = iVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (iVar9 < (int)uVar11);
    }
    if (param_1 == (ulonglong *)0x0) {
      return 0;
    }
    memcpy(param_1 + 4,(void *)((longlong)param_2 + 0x15),(ulonglong)bVar2);
  }
  *param_1 = (ulonglong)CONCAT14(bVar2,(uint)bVar1);
  param_1[1] = CONCAT44(uVar7,(uint)uVar6);
  param_1[2] = (ulonglong)CONCAT14(cVar3,(uVar8 ^ 0x8000) - 0x8000);
  param_1[3] = CONCAT44(uStack_10c,uStack_110);
  return 0;
}



// FUNCTION 14556d090 FUN_14556d090 body=184 status=ok
// SIG undefined FUN_14556d090(void)

ulonglong FUN_14556d090(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  if (param_1 == (longlong *)0x0) {
    uVar4 = FUN_14556d320();
    return uVar4;
  }
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  lStack_10 = 0;
  uVar3 = FUN_14556d320(&local_28);
  lVar2 = local_28;
  if ((int)uVar3 < 0) {
    iVar5 = (int)local_18;
    if (local_28 != 0) {
      iVar5 = (int)local_18 + 1;
    }
    lVar6 = (longlong)iVar5;
    if (0 < iVar5) {
      do {
        lVar1 = lVar6 * 8;
        lVar6 = lVar6 + -1;
        FUN_144d539c0(*(undefined8 *)(lVar2 + -8 + lVar1));
      } while (0 < lVar6);
    }
    FUN_144d539c0(lVar2);
    FUN_144d539c0(lStack_20);
    FUN_144d539c0(lStack_10);
    return (ulonglong)uVar3;
  }
  *param_1 = local_28;
  param_1[1] = lStack_20;
  param_1[2] = local_18;
  param_1[3] = lStack_10;
  return (ulonglong)uVar3;
}



// FUNCTION 14556d150 FUN_14556d150 body=18 status=ok
// SIG undefined FUN_14556d150(void)

void FUN_14556d150(undefined8 param_1,undefined8 param_2)

{
  FUN_14556d5c0(param_1,param_2,"R128_ALBUM_GAIN",0xf);
  return;
}



// FUNCTION 14556d170 FUN_14556d170 body=18 status=ok
// SIG undefined FUN_14556d170(void)

void FUN_14556d170(undefined8 param_1,undefined8 param_2)

{
  FUN_14556d5c0(param_1,param_2,"R128_TRACK_GAIN",0xf);
  return;
}



// FUNCTION 14556d190 FUN_14556d190 body=89 status=ok
// SIG undefined FUN_14556d190(void)

void FUN_14556d190(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[2] + 1;
  if (*param_1 == 0) {
    iVar1 = (int)param_1[2];
  }
  lVar2 = (longlong)iVar1;
  if (0 < iVar1) {
    do {
      lVar2 = lVar2 + -1;
      FUN_144d539c0(*(undefined8 *)(*param_1 + lVar2 * 8));
    } while (0 < lVar2);
  }
  FUN_144d539c0(*param_1);
  FUN_144d539c0(param_1[1]);
  FUN_144d539c0(param_1[3]);
  return;
}



// FUNCTION 14556d1f0 FUN_14556d1f0 body=193 status=ok
// SIG undefined FUN_14556d1f0(void)

undefined1 * FUN_14556d1f0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 < 0x7fffffff) && (param_2 * 4 + 4 >> 2 == param_2 + 1)) {
    lVar2 = (longlong)(int)param_1[2];
    lVar1 = FUN_144d539b0(param_1[1]);
    if (lVar1 != 0) {
      if (param_1[1] == 0) {
        *(undefined4 *)(lVar1 + lVar2 * 4) = 0;
      }
      *(undefined4 *)(lVar1 + param_2 * 4) = *(undefined4 *)(lVar1 + lVar2 * 4);
      param_1[1] = lVar1;
      if ((param_2 * 8 + 8 >> 3 == param_2 + 1) && (lVar1 = FUN_144d539b0(*param_1), lVar1 != 0)) {
        if (*param_1 == 0) {
          *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
        }
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar2 * 8);
        *param_1 = lVar1;
        return (undefined1 *)0x0;
      }
    }
  }
  return &DAT_ffffff7f;
}



// FUNCTION 14556d2c0 FUN_14556d2c0 body=93 status=ok
// SIG undefined FUN_14556d2c0(void)

void * FUN_14556d2c0(void *param_1,ulonglong param_2)

{
  void *_Dst;
  void *pvVar1;
  
  if (param_2 + 1 < param_2) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_144d539a0();
  if (_Dst != (void *)0x0) {
    pvVar1 = memcpy(_Dst,param_1,param_2);
    *(undefined1 *)((longlong)pvVar1 + param_2) = 0;
  }
  return _Dst;
}



// FUNCTION 14556d320 FUN_14556d320 body=667 status=ok
// SIG undefined FUN_14556d320(void)

undefined1 * FUN_14556d320(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong _Size;
  int local_res18;
  
  if ((param_3 < 8) || (*param_2 != 0x736761547375704f)) {
    return (undefined1 *)0xffffff7c;
  }
  if (0xf < param_3) {
    uVar8 = (ulonglong)*(uint *)(param_2 + 1);
    if (param_3 - 0xc < uVar8) {
      return (undefined1 *)0xffffff7b;
    }
    if (param_1 != (longlong *)0x0) {
      lVar2 = FUN_14556d2c0((longlong)param_2 + 0xc,uVar8);
      param_1[3] = lVar2;
      if (lVar2 == 0) goto LAB_14556d5a0;
    }
    puVar7 = (uint *)((longlong)param_2 + 0xc + uVar8);
    uVar8 = (param_3 - 0xc) - uVar8;
    if (3 < uVar8) {
      uVar8 = uVar8 - 4;
      uVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      if ((ulonglong)uVar10 <= uVar8 >> 2) {
        if (0x7ffffffe < uVar10) {
LAB_14556d5a0:
          return &DAT_ffffff7f;
        }
        if ((param_1 != (longlong *)0x0) &&
           (puVar3 = (undefined1 *)FUN_14556d1f0(param_1), (int)puVar3 < 0)) {
          return puVar3;
        }
        lVar2 = (longlong)(int)uVar10;
        if (0 < (int)uVar10) {
          lVar9 = 0;
          local_res18 = 1;
          do {
            if (uVar8 >> 2 < (ulonglong)(longlong)(int)uVar10) {
              return (undefined1 *)0xffffff7b;
            }
            uVar1 = *puVar7;
            _Size = (ulonglong)uVar1;
            if (uVar8 - 4 < _Size) {
              return (undefined1 *)0xffffff7b;
            }
            if (0x7fffffff < uVar1) goto LAB_14556d5a0;
            if (param_1 != (longlong *)0x0) {
              if ((ulonglong)uVar1 + 1 < _Size) {
                pvVar4 = (void *)0x0;
              }
              else {
                pvVar4 = (void *)FUN_144d539a0();
                if (pvVar4 != (void *)0x0) {
                  pvVar5 = memcpy(pvVar4,puVar7 + 1,_Size);
                  *(undefined1 *)((longlong)pvVar5 + (ulonglong)uVar1) = 0;
                }
              }
              *(void **)(*param_1 + lVar9 * 8) = pvVar4;
              if (*(longlong *)(*param_1 + lVar9 * 8) == 0) goto LAB_14556d5a0;
              *(uint *)(param_1[1] + lVar9 * 4) = uVar1;
              *(int *)(param_1 + 2) = local_res18;
              *(undefined8 *)(*param_1 + 8 + lVar9 * 8) = 0;
            }
            local_res18 = local_res18 + 1;
            puVar7 = (uint *)((longlong)(puVar7 + 1) + _Size);
            uVar8 = (uVar8 - 4) - _Size;
            uVar10 = uVar10 - 1;
            lVar9 = lVar9 + 1;
          } while (lVar9 < lVar2);
        }
        if ((uVar8 != 0) && ((*puVar7 & 1) != 0)) {
          if (0x7fffffff < uVar8) goto LAB_14556d5a0;
          if (param_1 != (longlong *)0x0) {
            uVar6 = FUN_144d539a0(uVar8);
            *(undefined8 *)(*param_1 + lVar2 * 8) = uVar6;
            pvVar4 = *(void **)(*param_1 + lVar2 * 8);
            if (pvVar4 == (void *)0x0) goto LAB_14556d5a0;
            memcpy(pvVar4,puVar7,uVar8);
            *(int *)(param_1[1] + lVar2 * 4) = (int)uVar8;
          }
        }
        return (undefined1 *)0x0;
      }
    }
  }
  return (undefined1 *)0xffffff7b;
}



// FUNCTION 14556d5c0 FUN_14556d5c0 body=233 status=ok
// SIG undefined FUN_14556d5c0(void)

undefined8 FUN_14556d5c0(longlong *param_1,uint *param_2,undefined8 param_3,ulonglong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  
  lVar4 = param_1[2];
  lVar2 = *param_1;
  if (0 < (longlong)(int)lVar4) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar8 * 8);
      iVar7 = FUN_1455f0f40(param_3,lVar3,param_4 & 0xffffffff);
      if ((iVar7 == 0) && (*(char *)((int)param_4 + lVar3) == '=')) {
        uVar10 = 0;
        pbVar9 = (byte *)(*(longlong *)(lVar2 + lVar8 * 8) + 1 + param_4);
        bVar6 = *pbVar9;
        if (bVar6 == 0x2d) {
          uVar5 = 0xffffffff;
LAB_14556d638:
          uVar10 = uVar5;
          bVar6 = pbVar9[1];
          pbVar9 = pbVar9 + 1;
        }
        else {
          uVar5 = 0;
          if (bVar6 == 0x2b) goto LAB_14556d638;
        }
        iVar7 = 0;
        while ('/' < (char)bVar6) {
          if (0x39 < bVar6) goto LAB_14556d672;
          iVar7 = (uint)bVar6 + (iVar7 * 5 + -0x18) * 2;
          if ((int)(0x7fff - uVar10) < iVar7) break;
          pbVar1 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
          bVar6 = *pbVar1;
        }
        if (bVar6 == 0) {
          *param_2 = iVar7 + uVar10 ^ uVar10;
          return 0;
        }
      }
LAB_14556d672:
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 14556d6b0 FUN_14556d6b0 body=124 status=ok
// SIG undefined FUN_14556d6b0(void)

undefined8 * FUN_14556d6b0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  
  if (0x7fffffffffffffff < param_3) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)FUN_144d539a0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *param_1 = FUN_14556d860;
    param_1[1] = &LAB_14556d8f0;
    param_1[2] = &LAB_14556d970;
    param_1[3] = FUN_14556d980;
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = 0;
  }
  return puVar1;
}



// FUNCTION 14556d730 FUN_14556d730 body=89 status=ok
// SIG undefined FUN_14556d730(void)

ulonglong FUN_14556d730(FILE *param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  
  if (param_3 < 1) {
    return 0;
  }
  sVar2 = fread(param_2,1,(longlong)param_3,param_1);
  if (sVar2 == 0) {
    iVar1 = feof(param_1);
    if (iVar1 == 0) {
      sVar2 = 0xffffff80;
    }
  }
  return sVar2 & 0xffffffff;
}



// FUNCTION 14556d790 FUN_14556d790 body=157 status=ok
// SIG undefined FUN_14556d790(void)

int FUN_14556d790(FILE *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong local_res20;
  
  if (param_3 == 1) {
    iVar1 = fgetpos(param_1,&local_res20);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 0) {
        return -1;
      }
      local_res20 = 0;
      goto LAB_14556d7ef;
    }
    iVar1 = _fileno(param_1);
    local_res20 = _filelengthi64(iVar1);
  }
  if (local_res20 < 0) {
    return -1;
  }
LAB_14556d7ef:
  if ((-local_res20 <= param_2) && (param_2 <= 0x7fffffffffffffff - local_res20)) {
    local_res20 = local_res20 + param_2;
    iVar1 = fsetpos(param_1,&local_res20);
    return iVar1;
  }
  return -1;
}



// FUNCTION 14556d830 FUN_14556d830 body=41 status=ok
// SIG undefined FUN_14556d830(void)

fpos_t FUN_14556d830(FILE *param_1)

{
  int iVar1;
  fpos_t local_res10 [3];
  
  iVar1 = fgetpos(param_1,local_res10);
  if (iVar1 != 0) {
    local_res10[0] = -1;
  }
  return local_res10[0];
}



// FUNCTION 14556d860 FUN_14556d860 body=134 status=ok
// SIG undefined FUN_14556d860(void)

int FUN_14556d860(longlong *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    lVar1 = param_1[1];
    lVar2 = param_1[2];
    if (lVar2 < lVar1) {
      if (lVar1 - lVar2 < (longlong)param_3) {
        param_3 = (int)lVar1 - (int)lVar2;
      }
      memcpy(param_2,(void *)(*param_1 + lVar2),(longlong)param_3);
      param_1[2] = param_3 + lVar2;
      return param_3;
    }
  }
  return 0;
}



// FUNCTION 14556d980 FUN_14556d980 body=16 status=ok
// SIG undefined FUN_14556d980(void)

undefined8 FUN_14556d980(void)

{
  FUN_144d539c0();
  return 0;
}



// FUNCTION 14556d990 FUN_14556d990 body=63 status=ok
// SIG undefined FUN_14556d990(void)

undefined8 FUN_14556d990(int *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (0xff < param_1[2] + param_1[1]) {
    return 0;
  }
  if (0 < (longlong)*param_1) {
    lVar2 = 0;
    do {
      bVar1 = *(byte *)((longlong)param_1 + lVar2 + 0xc);
      if ((param_1[2] + param_1[1] <= (int)(uint)bVar1) && (bVar1 != 0xff)) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *param_1);
  }
  return 1;
}



// FUNCTION 14556d9d0 FUN_14556d9d0 body=63 status=ok
// SIG undefined FUN_14556d9d0(void)

int FUN_14556d9d0(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = param_3 + 1;
  }
  lVar1 = (longlong)iVar2;
  if (lVar1 < *param_1) {
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 * 2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}



// FUNCTION 14556da10 FUN_14556da10 body=66 status=ok
// SIG undefined FUN_14556da10(void)

int FUN_14556da10(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = param_3 + 1;
  }
  lVar1 = (longlong)iVar2;
  if (lVar1 < *param_1) {
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_2 * 2 + 1U) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}



// FUNCTION 14556da60 FUN_14556da60 body=80 status=ok
// SIG undefined FUN_14556da60(void)

int FUN_14556da60(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = param_3 + 1;
  }
  if (iVar2 < *param_1) {
    lVar1 = (longlong)iVar2;
    do {
      if ((uint)*(byte *)((longlong)param_1 + lVar1 + 0xc) == param_1[2] + param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return -1;
}



// FUNCTION 14556dab0 FUN_14556dab0 body=209 status=ok
// SIG undefined FUN_14556dab0(void)

void FUN_14556dab0(int *param_1,float *param_2,ulonglong param_3)

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



// FUNCTION 14556db90 FUN_14556db90 body=321 status=ok
// SIG undefined FUN_14556db90(void)

void FUN_14556db90(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  *param_1 = param_4;
  param_1[0x40] = param_2;
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[3] = 1.0 - 251.32742 / (float)param_3;
    return;
  }
  if (param_2 == 3) {
    if (param_1 + 0x20 != (undefined4 *)0x0) {
      param_1[0x20] = 0x3f232d9b;
      param_1[0x21] = 0x3f232d9b;
      param_1[0x22] = 0x3f232d9b;
      *(undefined8 *)(param_1 + 0x23) = 0x3f232d9b;
      *(undefined8 *)(param_1 + 0x25) = 0;
      param_1[0x27] = 0xbeacb886;
      *(undefined8 *)(param_1 + 0x28) = 0;
      param_1[0x2a] = 0xbeacb886;
      param_1[0x2b] = 0xbddd9bc4;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0xbeacb886;
      param_1[0x2e] = 0xbddd9bc4;
      param_1[0x2f] = 0xbd165518;
      param_1[0x30] = 0xbf92f47e;
      param_1[0x31] = 0xbf72de07;
      param_1[0x32] = 0xbf5cf96e;
      param_1[0x33] = 0xbf506644;
      param_1[0x34] = 0x3f02f68d;
      param_1[0x35] = 0x3f26931f;
      param_1[0x36] = 0x3f2cb005;
      param_1[0x37] = 0x3f29cee6;
      param_1[0x38] = 0x3fa2ce4e;
      param_1[0x39] = 0x3fa8c7cc;
      param_1[0x3a] = 0x3fa5f75a;
      param_1[0x3b] = 0x3fa09966;
      param_1[0x3c] = 0xbe992eda;
      param_1[0x3d] = 0xbec2d631;
      param_1[0x3e] = 0xbec9fc98;
      param_1[0x3f] = 0xbec69e69;
      return;
    }
  }
  else if (param_2 == 2) {
    param_1[0x17] = 0x3d4cccc0;
    param_1[0x18] = 0xbf7eb852;
  }
  return;
}



// FUNCTION 14556dce0 FUN_14556dce0 body=536 status=ok
// SIG undefined FUN_14556dce0(void)

void FUN_14556dce0(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_14556dab0(param_1,param_2,param_3 * 2);
  uVar4 = *(uint *)(param_1 + 0x10);
  pfVar1 = param_2 + param_3;
  fVar10 = *(float *)(param_1 + 0x14);
  if (param_2 < pfVar1) {
    pfVar5 = param_2;
    pfVar6 = pfVar1;
    if (3 < (ulonglong)param_3) {
      do {
        fVar8 = *pfVar6;
        uVar3 = uVar4 + 1 & 0xffff;
        fVar9 = *(float *)(param_1 + 0x18 +
                          (longlong)
                          *(int *)(&DAT_149dab070 +
                                  (ulonglong)((-uVar3 & uVar4 + 1 & 0xffff) * 0x77cb531 >> 0x1b) * 4
                                  ) * 4);
        *(float *)(param_1 + 0x18 +
                  (longlong)
                  *(int *)(&DAT_149dab070 +
                          (ulonglong)((-uVar3 & uVar4 + 1 & 0xffff) * 0x77cb531 >> 0x1b) * 4) * 4) =
             fVar8;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3 & 0xffff;
        fVar8 = (fVar10 - fVar9) + fVar8;
        iVar2 = *(int *)(&DAT_149dab070 +
                        (ulonglong)((-uVar4 & uVar3 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
        *pfVar5 = (fVar8 + *pfVar5) * 0.14705883;
        fVar10 = *(float *)(param_1 + 0x18 + (longlong)iVar2 * 4);
        fVar9 = pfVar6[1];
        *(float *)(param_1 + 0x18 + (longlong)iVar2 * 4) = fVar9;
        uVar4 = uVar4 + 1;
        uVar3 = uVar4 & 0xffff;
        fVar9 = (fVar8 - fVar10) + fVar9;
        iVar2 = *(int *)(&DAT_149dab070 +
                        (ulonglong)((-uVar3 & uVar4 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
        pfVar5[1] = (fVar9 + pfVar5[1]) * 0.14705883;
        fVar10 = *(float *)(param_1 + 0x18 + (longlong)iVar2 * 4);
        fVar8 = pfVar6[2];
        *(float *)(param_1 + 0x18 + (longlong)iVar2 * 4) = fVar8;
        uVar4 = uVar3 + 1 & 0xffff;
        fVar8 = (fVar9 - fVar10) + fVar8;
        iVar2 = *(int *)(&DAT_149dab070 + (ulonglong)((-uVar4 & uVar4) * 0x77cb531 >> 0x1b) * 4);
        pfVar5[2] = (fVar8 + pfVar5[2]) * 0.14705883;
        fVar10 = pfVar6[3];
        pfVar6 = pfVar6 + 4;
        fVar9 = *(float *)(param_1 + 0x18 + (longlong)iVar2 * 4);
        *(float *)(param_1 + 0x18 + (longlong)iVar2 * 4) = fVar10;
        fVar10 = (fVar8 - fVar9) + fVar10;
        pfVar5[3] = (fVar10 + pfVar5[3]) * 0.14705883;
        pfVar5 = pfVar5 + 4;
      } while (pfVar5 < pfVar1 + -3);
      if (pfVar1 <= pfVar5) goto LAB_14556dec6;
    }
    lVar7 = (longlong)pfVar6 - (longlong)pfVar5;
    do {
      fVar8 = *(float *)(lVar7 + (longlong)pfVar5);
      uVar4 = uVar4 + 1 & 0xffff;
      fVar9 = *(float *)(param_1 + 0x18 +
                        (longlong)
                        *(int *)(&DAT_149dab070 +
                                (ulonglong)((-uVar4 & uVar4) * 0x77cb531 >> 0x1b) * 4) * 4);
      *(float *)(param_1 + 0x18 +
                (longlong)
                *(int *)(&DAT_149dab070 + (ulonglong)((-uVar4 & uVar4) * 0x77cb531 >> 0x1b) * 4) * 4
                ) = fVar8;
      fVar10 = (fVar10 - fVar9) + fVar8;
      *pfVar5 = (fVar10 + *pfVar5) * 0.14705883;
      pfVar5 = pfVar5 + 1;
    } while (pfVar5 < pfVar1);
  }
LAB_14556dec6:
  FUN_1453c5d70(param_1 + 4,param_2,param_3);
  *(float *)(param_1 + 0x14) = fVar10;
  *(uint *)(param_1 + 0x10) = uVar4;
  return;
}



// FUNCTION 14556df00 FUN_14556df00 body=234 status=ok
// SIG undefined FUN_14556df00(void)

void FUN_14556df00(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  
  FUN_14556dab0();
  fVar2 = *(float *)(param_1 + 0x58);
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    if (3 < (ulonglong)param_3) {
      do {
        fVar2 = *param_2 * *(float *)(param_1 + 0x5c) - fVar2 * *(float *)(param_1 + 0x60);
        *param_2 = fVar2;
        fVar2 = param_2[1] * *(float *)(param_1 + 0x5c) - fVar2 * *(float *)(param_1 + 0x60);
        param_2[1] = fVar2;
        fVar2 = param_2[2] * *(float *)(param_1 + 0x5c) - fVar2 * *(float *)(param_1 + 0x60);
        param_2[2] = fVar2;
        fVar2 = param_2[3] * *(float *)(param_1 + 0x5c) - fVar2 * *(float *)(param_1 + 0x60);
        param_2[3] = fVar2;
        param_2 = param_2 + 4;
      } while (param_2 < pfVar1 + -3);
      if (pfVar1 <= param_2) goto LAB_14556dfd5;
    }
    do {
      fVar2 = *param_2 * *(float *)(param_1 + 0x5c) - fVar2 * *(float *)(param_1 + 0x60);
      *param_2 = fVar2;
      param_2 = param_2 + 1;
    } while (param_2 < pfVar1);
  }
LAB_14556dfd5:
  *(float *)(param_1 + 0x58) = fVar2;
  return;
}



// FUNCTION 14556dff0 FUN_14556dff0 body=78 status=ok
// SIG undefined FUN_14556dff0(void)

void FUN_14556dff0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res8;
  
  FUN_14556dab0();
  local_res8 = param_2;
  FUN_145129ce0(&local_res8,param_3,0,param_1 + 0x80,param_1 + 0x70);
  return;
}



// FUNCTION 14556e040 FUN_14556e040 body=169 status=ok
// SIG undefined FUN_14556e040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14556e040(int param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 auStack_70 [5];
  undefined1 local_48 [40];
  uint local_20;
  undefined4 local_1c;
  int local_18;
  
  if (param_1 == 1) {
    auStack_70[0] = 0x14556e069;
    iVar2 = FUN_14556e4b0(param_2 >> 1 & 0x7fffffff);
    local_20 = iVar2 + 1;
  }
  else {
    auStack_70[0] = 0x14556e072;
    local_20 = FUN_14556e4b0(param_2 & 0xffffffff);
  }
  if (local_20 == 0) {
    return;
  }
  uVar3 = (ulonglong)local_20 * 4 + 0xf;
  if (uVar3 <= (ulonglong)local_20 * 4) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x14556e0b6;
  lVar1 = -(uVar3 & 0xfffffffffffffff0);
  local_1c = (int)param_2;
  local_18 = param_1;
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x14556e0cb;
  FUN_14556e5a0(local_48 + lVar1,param_1,param_2 & 0xffffffff);
  *(undefined8 *)((longlong)auStack_70 + lVar1) = 0x14556e0d7;
  FUN_14556f2a0(local_48,local_48 + lVar1);
  return;
}



// FUNCTION 14556e0f0 FUN_14556e0f0 body=7 status=ok
// SIG undefined FUN_14556e0f0(void)

int FUN_14556e0f0(longlong param_1)

{
  return *(int *)(param_1 + 0x2c) << 3;
}



// FUNCTION 14556e100 FUN_14556e100 body=879 status=ok
// SIG undefined FUN_14556e100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14556e100(longlong param_1,int param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 auStack_130 [5];
  uint local_108 [12];
  code *local_d8 [4];
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_78 [4];
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  
  if (param_2 == 1) {
    if ((param_3 & 1) != 0) {
      return;
    }
    auStack_130[0] = 0x14556e14a;
    iVar4 = FUN_14556e4b0(param_3 >> 1 & 0x7fffffff);
    uVar5 = iVar4 + 1;
  }
  else {
    auStack_130[0] = 0x14556e155;
    uVar5 = FUN_14556e4b0(param_3 & 0xffffffff);
  }
  if (uVar5 != 0) {
    *(uint *)(param_1 + 0x28) = uVar5;
    *(int *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x2c) = (int)param_3;
    uVar6 = (ulonglong)uVar5 * 4 + 0xf;
    if (uVar6 <= (ulonglong)uVar5 * 4) {
      uVar6 = 0xffffffffffffff0;
    }
    auStack_130[0] = 0x14556e18b;
    lVar1 = -(uVar6 & 0xfffffffffffffff0);
    lVar3 = (longlong)local_108 + lVar1;
    *(undefined8 *)((longlong)auStack_130 + lVar1) = 0x14556e1a0;
    FUN_14556e5a0(lVar3,param_2,param_3 & 0xffffffff);
    *(undefined8 *)((longlong)auStack_130 + lVar1) = 0x14556e1ab;
    FUN_14556f2a0(param_1,lVar3);
    *(undefined8 *)((longlong)auStack_130 + lVar1) = 0x14556e1b9;
    FUN_14556e8d0(param_1,lVar3,param_4);
    local_108[0] = 1;
    local_d8[0] = FUN_1455f34b0;
    local_d8[1] = FUN_1455f2810;
    local_d8[2] = FUN_1455f0fb0;
    local_d8[3] = FUN_1455f1590;
    local_b8 = FUN_1455f1d60;
    local_b0 = FUN_1455f7330;
    local_a8 = FUN_1455f4080;
    local_a0 = FUN_1455f4c00;
    local_98 = FUN_1455f5a50;
    local_90 = FUN_1455f3d00;
    local_88 = FUN_1455f77d0;
    local_78[0] = FUN_1455f38a0;
    local_78[1] = FUN_1455f2d60;
    local_78[2] = FUN_1455f1240;
    local_78[3] = FUN_1455f18f0;
    local_58 = FUN_1455f2230;
    local_50 = FUN_1455f7580;
    local_48 = FUN_1455f4620;
    local_40 = FUN_1455f5320;
    local_38 = FUN_1455f66a0;
    local_30 = FUN_1455f3ea0;
    local_28 = FUN_1455f7de0;
    local_108[1] = 8;
    local_108[2] = 3;
    local_108[3] = 4;
    local_108[4] = 5;
    local_108[5] = 8;
    local_108[6] = 3;
    local_108[7] = 4;
    local_108[8] = 5;
    local_108[9] = 4;
    local_108[10] = 1;
    if ((char)param_4 < '\0') {
      local_b0 = FUN_1455fa3c0;
      local_a8 = FUN_1455f8760;
      local_a0 = FUN_1455f8e40;
      local_98 = FUN_1455f96a0;
      local_90 = FUN_1455f83a0;
      local_88 = FUN_1455fa840;
      local_50 = FUN_1455fa600;
      local_48 = FUN_1455f8ad0;
      local_40 = FUN_1455f9270;
      local_38 = FUN_1455f9d30;
      local_30 = FUN_1455f8560;
      local_28 = FUN_1455fac60;
    }
    uVar5 = *(uint *)(param_1 + 0x2c) >> 1;
    if (*(int *)(param_1 + 0x30) != 1) {
      uVar5 = *(uint *)(param_1 + 0x2c);
    }
    uVar6 = (ulonglong)uVar5;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      do {
        lVar1 = uVar8 * 4;
        lVar2 = uVar8 * 8;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(code **)(lVar2 + *(longlong *)(param_1 + 0x18)) = local_d8[*(int *)(lVar1 + lVar3)];
        *(code **)(lVar2 + *(longlong *)(param_1 + 0x20)) = local_78[*(int *)(lVar1 + lVar3)];
        uVar6 = uVar6 / local_108[*(int *)(lVar1 + lVar3)];
        *(int *)(lVar1 + *(longlong *)(param_1 + 8)) = (int)uVar6;
        *(int *)(lVar1 + *(longlong *)(param_1 + 0x10)) =
             (int)(((ulonglong)uVar5 / (ulonglong)local_108[*(int *)(lVar1 + lVar3)]) / uVar6);
      } while (uVar7 < *(uint *)(param_1 + 0x28));
    }
  }
  return;
}



// FUNCTION 14556e470 FUN_14556e470 body=22 status=ok
// SIG undefined FUN_14556e470(void)

void FUN_14556e470(void)

{
  FUN_14556f350();
  return;
}



// FUNCTION 14556e490 FUN_14556e490 body=25 status=ok
// SIG undefined FUN_14556e490(void)

void FUN_14556e490(void)

{
  FUN_14556f350();
  return;
}



// FUNCTION 14556e4b0 FUN_14556e4b0 body=233 status=ok
// SIG undefined FUN_14556e4b0(void)

int FUN_14556e4b0(uint param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = 0;
  uVar5 = (ulonglong)param_1;
  iVar4 = 0;
  uVar6 = 1;
  uVar1 = (ulonglong)param_1 / 3;
  iVar2 = iVar8;
  iVar3 = iVar4;
  if (param_1 == (int)((ulonglong)param_1 / 3) * 3) {
    do {
      uVar5 = uVar1;
      uVar6 = uVar6 * 3;
      iVar2 = iVar2 + 1;
      uVar1 = uVar5 / 3;
      iVar3 = iVar2;
    } while ((int)uVar5 == (int)(uVar5 / 3) * 3);
  }
  for (; (uVar5 & 3) == 0; uVar5 = uVar5 >> 2) {
    iVar7 = iVar7 + 1;
    uVar6 = uVar6 * 4;
  }
  uVar1 = uVar5 / 5;
  if ((int)uVar5 == (int)(uVar5 / 5) * 5) {
    do {
      uVar5 = uVar1;
      uVar6 = uVar6 * 5;
      iVar4 = iVar8 + 1;
      uVar1 = uVar5 / 5;
      iVar8 = iVar4;
    } while ((int)uVar5 == (int)(uVar5 / 5) * 5);
  }
  iVar2 = 0;
  if (((uVar5 & 1) == 0) && (iVar2 = 0, iVar7 != 0)) {
    iVar7 = iVar7 + -1;
    iVar2 = 1;
    uVar6 = uVar6 * 2;
  }
  return (uint)(uVar6 != param_1) + iVar2 + iVar4 + iVar7 + iVar3;
}



// FUNCTION 14556e5a0 FUN_14556e5a0 body=561 status=ok
// SIG undefined FUN_14556e5a0(void)

ulonglong FUN_14556e5a0(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar1 = param_3 >> 1;
  if (param_2 != 1) {
    uVar1 = param_3;
  }
  uVar13 = (ulonglong)uVar1;
  uVar10 = 1;
  uVar7 = 0;
  uVar11 = 0;
  uVar6 = 0;
  uVar9 = uVar13 / 3;
  uVar3 = uVar13;
  if (uVar1 == (int)(uVar13 / 3) * 3) {
    do {
      uVar3 = uVar9;
      uVar10 = uVar10 * 3;
      uVar7 = uVar7 + 1;
      uVar9 = uVar3 / 3;
    } while ((int)uVar3 == (int)(uVar3 / 3) * 3);
  }
  for (; (uVar3 & 3) == 0; uVar3 = uVar3 >> 2) {
    uVar11 = uVar11 + 1;
    uVar10 = uVar10 * 4;
  }
  uVar8 = (uint)uVar3;
  uVar9 = uVar3 / 5;
  if (uVar8 == (int)(uVar3 / 5) * 5) {
    do {
      uVar3 = uVar9;
      uVar8 = (uint)uVar3;
      uVar10 = uVar10 * 5;
      uVar6 = uVar6 + 1;
      uVar9 = uVar3 / 5;
    } while (uVar8 == (int)(uVar3 / 5) * 5);
  }
  uVar3 = uVar3 * 0xcccccccd & 0xffffffff;
  bVar2 = false;
  if (((uVar8 & 1) == 0) && (bVar2 = false, uVar11 != 0)) {
    uVar11 = uVar11 - 1;
    bVar2 = true;
    uVar10 = uVar10 * 2;
  }
  uVar9 = 0;
  if (bVar2) {
    uVar9 = 1;
    uVar3 = 5;
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 1;
    }
    uVar13 = (ulonglong)(uVar1 >> 3);
    *param_1 = (int)uVar3;
  }
  bVar2 = false;
  if (uVar11 == 0) {
LAB_14556e6b5:
    if (uVar11 != 0) goto LAB_14556e6ba;
  }
  else {
    if (uVar10 == uVar1) {
      bVar2 = true;
      uVar11 = uVar11 - 1;
      goto LAB_14556e6b5;
    }
LAB_14556e6ba:
    uVar5 = (ulonglong)uVar11;
    do {
      uVar3 = uVar9;
      uVar4 = 7;
      if ((uVar13 & 0xf) != 0) {
        uVar4 = 3;
      }
      uVar9 = (ulonglong)((int)uVar3 + 1);
      uVar13 = uVar13 >> 2;
      param_1[uVar3] = uVar4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (uVar7 != 0) {
    uVar12 = (ulonglong)uVar7;
    uVar5 = uVar9;
    do {
      uVar4 = 6;
      if ((int)uVar13 != (int)(uVar13 / 0xc) * 0xc) {
        uVar4 = 2;
      }
      uVar9 = (ulonglong)((int)uVar5 + 1);
      param_1[uVar5] = uVar4;
      uVar3 = uVar13 * 0xaaaaaaab & 0xffffffff;
      uVar13 = uVar13 / 3;
      uVar12 = uVar12 - 1;
      uVar5 = uVar9;
    } while (uVar12 != 0);
  }
  if (uVar6 != 0) {
    uVar12 = (ulonglong)uVar6;
    uVar5 = uVar9;
    do {
      uVar4 = 8;
      if ((int)uVar13 != (int)(uVar13 / 0x14) * 0x14) {
        uVar4 = 4;
      }
      uVar9 = (ulonglong)((int)uVar5 + 1);
      param_1[uVar5] = uVar4;
      uVar3 = uVar13 * 0xcccccccd & 0xffffffff;
      uVar13 = uVar13 / 5;
      uVar12 = uVar12 - 1;
      uVar5 = uVar9;
    } while (uVar12 != 0);
  }
  if (bVar2) {
    uVar4 = 9;
    if ((uVar1 & 0xf) != 0) {
      uVar4 = 3;
    }
    param_1[uVar9] = uVar4;
  }
  else {
    if (uVar10 == uVar1) goto LAB_14556e7a5;
    param_1[uVar9] = 0;
  }
  uVar3 = uVar9;
  uVar9 = (ulonglong)((int)uVar9 + 1);
LAB_14556e7a5:
  if (param_2 == 1) {
    param_1[uVar9] = 10;
    uVar3 = uVar9;
  }
  return uVar3;
}



// FUNCTION 14556e7e0 FUN_14556e7e0 body=192 status=ok
// SIG undefined FUN_14556e7e0(void)

ulonglong FUN_14556e7e0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 1;
  uVar3 = (ulonglong)(uint)(*(int *)(param_2 + 0x28) * 8);
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      uVar2 = (int)uVar3 + 0xfU & 0xfffffff0;
      uVar3 = (ulonglong)uVar2;
      *(ulonglong *)(param_1 + uVar4 * 8) = uVar3 + param_1;
      switch(*(undefined4 *)(param_3 + uVar4 * 4)) {
      case 0:
        uVar1 = *(uint *)(param_2 + 0x2c);
        if (*(int *)(param_2 + 0x30) == 1) {
          uVar1 = uVar1 >> 1;
        }
        uVar3 = (ulonglong)(uVar2 + uVar1 * 8);
        break;
      case 1:
      case 5:
        iVar5 = iVar5 * 8;
        break;
      case 2:
      case 6:
        uVar3 = (ulonglong)(uVar2 + iVar5 * 0x10);
        iVar5 = iVar5 * 3;
        break;
      case 3:
      case 7:
      case 9:
        uVar3 = (ulonglong)(uVar2 + iVar5 * 0x18);
        iVar5 = iVar5 * 4;
        break;
      case 4:
      case 8:
        uVar3 = (ulonglong)(uVar2 + iVar5 * 0x20);
        iVar5 = iVar5 * 5;
        break;
      case 10:
        uVar3 = (ulonglong)(uVar2 + *(int *)(param_2 + 0x2c) * 8);
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_2 + 0x28));
  }
  return uVar3;
}



// FUNCTION 14556e8d0 FUN_14556e8d0 body=2465 status=ok
// SIG undefined FUN_14556e8d0(void)

ulonglong FUN_14556e8d0(longlong *param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float extraout_XMM0_Da_00;
  undefined8 uVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  float extraout_XMM0_Dc_06;
  float extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  float extraout_XMM0_Dc_10;
  float extraout_XMM0_Dc_11;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  float extraout_XMM0_Dd_06;
  float extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float extraout_XMM0_Dd_09;
  float extraout_XMM0_Dd_10;
  float extraout_XMM0_Dd_11;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res20;
  
  FUN_14556e7e0(*param_1,param_1);
  uVar10 = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0x2c) >> 1;
  if ((int)param_1[6] != 1) {
    uVar2 = *(uint *)((longlong)param_1 + 0x2c);
  }
  uVar3 = (ulonglong)uVar2;
  uVar9 = 0;
  uVar11 = (ulonglong)uVar2;
  local_res20 = 0;
  fVar17 = 6.2831855 / (float)uVar2;
  if ((int)param_1[5] != 0) {
    do {
      pfVar8 = *(float **)(*param_1 + uVar9 * 8);
      iVar7 = *(int *)(param_2 + uVar9 * 4);
      uVar3 = (ulonglong)iVar7;
      switch(iVar7) {
      case 0:
        uVar1 = (ulonglong)uVar2 / (ulonglong)uVar10;
        uVar5 = 0;
        uVar11 = uVar11 / uVar1;
        uVar3 = uVar11;
        if (uVar2 != 0) {
          do {
            uVar3 = FUN_145376c80((float)uVar5 * fVar17);
            uVar5 = uVar5 + 1;
            *pfVar8 = extraout_XMM0_Db;
            pfVar8[1] = -extraout_XMM0_Da;
            pfVar8 = pfVar8 + 2;
          } while (uVar5 < uVar2);
          uVar9 = (ulonglong)local_res20;
        }
        uVar10 = uVar10 * (int)uVar1;
        break;
      case 1:
      case 5:
        uVar10 = uVar10 * 8;
        uVar11 = uVar11 >> 3;
        break;
      case 2:
      case 6:
        uVar5 = 0;
        uVar3 = uVar11 * 0xaaaaaaab & 0xffffffff;
        uVar11 = uVar11 / 3;
        if (uVar10 != 0) {
          uVar6 = 0;
          do {
            uVar4 = uVar5 * 2;
            uVar13 = FUN_145376cc3((float)uVar6 * fVar17,(fVar17 + fVar17) * (float)uVar6);
            uVar3 = (ulonglong)(uVar4 + 1);
            uVar5 = uVar5 + 1;
            pfVar8[(ulonglong)uVar4 * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)uVar4 * 2 + 1] = -(float)uVar13;
            uVar6 = uVar6 + (int)uVar11;
            pfVar8[uVar3 * 2 + 1] = -extraout_XMM0_Dc;
            pfVar8[uVar3 * 2] = extraout_XMM0_Dd;
          } while (uVar5 < uVar10);
          uVar9 = (ulonglong)local_res20;
        }
        uVar10 = uVar10 * 3;
        break;
      case 3:
      case 7:
        uVar11 = uVar11 >> 2;
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar6 = 0;
          do {
            uVar4 = uVar5 * 3;
            fVar12 = (float)uVar6 * fVar17;
            uVar13 = FUN_145376cc3(fVar12,(fVar17 + fVar17) * (float)uVar6);
            pfVar8[(ulonglong)uVar4 * 2 + 1] = -(float)uVar13;
            pfVar8[(ulonglong)(uVar4 + 1) * 2] = extraout_XMM0_Dd_00;
            pfVar8[(ulonglong)uVar4 * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)(uVar4 + 1) * 2 + 1] = -extraout_XMM0_Dc_00;
            uVar13 = FUN_145376c80(fVar12 * 3.0);
            uVar3 = (ulonglong)(uVar4 + 2);
            uVar5 = uVar5 + 1;
            uVar6 = uVar6 + (int)uVar11;
            pfVar8[uVar3 * 2 + 1] = -(float)uVar13;
            pfVar8[uVar3 * 2] = (float)((ulonglong)uVar13 >> 0x20);
          } while (uVar5 < uVar10);
          uVar9 = (ulonglong)local_res20;
        }
        uVar10 = uVar10 * 4;
        break;
      case 4:
      case 8:
        uVar5 = 0;
        uVar3 = uVar11 * 0xcccccccd & 0xffffffff;
        uVar11 = uVar11 / 5;
        if (uVar10 != 0) {
          uVar6 = 0;
          do {
            uVar4 = uVar5 * 4;
            fVar12 = (float)uVar6 * fVar17;
            uVar13 = FUN_145376cc3(fVar12,(fVar17 + fVar17) * (float)uVar6);
            pfVar8[(ulonglong)uVar4 * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)uVar4 * 2 + 1] = -(float)uVar13;
            pfVar8[(ulonglong)(uVar4 + 1) * 2] = extraout_XMM0_Dd_01;
            pfVar8[(ulonglong)(uVar4 + 1) * 2 + 1] = -extraout_XMM0_Dc_01;
            uVar13 = FUN_145376cc3(fVar12 * 3.0,fVar12 * 4.0);
            uVar5 = uVar5 + 1;
            pfVar8[(ulonglong)(uVar4 + 2) * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)(uVar4 + 2) * 2 + 1] = -(float)uVar13;
            uVar6 = uVar6 + (int)uVar11;
            uVar3 = (ulonglong)(uVar4 + 3);
            pfVar8[uVar3 * 2 + 1] = -extraout_XMM0_Dc_02;
            pfVar8[uVar3 * 2] = extraout_XMM0_Dd_02;
          } while (uVar5 < uVar10);
          uVar9 = (ulonglong)local_res20;
        }
        uVar10 = uVar10 * 5;
        break;
      case 9:
        uVar11 = uVar11 >> 2;
        iVar7 = 0;
        if (param_3 < '\0') {
          uVar5 = uVar10 >> 2;
          uVar3 = (ulonglong)uVar5;
          if (uVar5 != 0) {
            iVar7 = 3;
            uVar9 = (ulonglong)uVar5;
            uVar5 = 2;
            do {
              uVar6 = (iVar7 + -3) * 3;
              fVar12 = (float)(uVar5 - 2) * fVar17;
              fVar14 = (float)(uVar5 - 1) * fVar17;
              fVar15 = (float)uVar5 * fVar17;
              fVar16 = (float)(uVar5 + 1) * fVar17;
              uVar13 = FUN_145376cc3(fVar12,fVar14);
              pfVar8[(ulonglong)uVar6 * 2 + 1] = -(float)uVar13;
              pfVar8[(ulonglong)uVar6 * 2] = (float)((ulonglong)uVar13 >> 0x20);
              pfVar8[(ulonglong)(uVar6 + 1) * 2] = extraout_XMM0_Dd_03;
              pfVar8[(ulonglong)(uVar6 + 1) * 2 + 1] = -extraout_XMM0_Dc_03;
              uVar13 = FUN_145376cc3(fVar15,fVar16);
              pfVar8[(ulonglong)(uVar6 + 2) * 2] = (float)((ulonglong)uVar13 >> 0x20);
              pfVar8[(ulonglong)(uVar6 + 2) * 2 + 1] = -(float)uVar13;
              pfVar8[(ulonglong)(uVar6 + 3) * 2] = extraout_XMM0_Dd_04;
              pfVar8[(ulonglong)(uVar6 + 3) * 2 + 1] = -extraout_XMM0_Dc_04;
              uVar13 = FUN_145376cc3((fVar17 + fVar17) * (float)(uVar5 - 2),
                                     (fVar17 + fVar17) * (float)(uVar5 - 1));
              pfVar8[(ulonglong)(uVar6 + 4) * 2] = (float)((ulonglong)uVar13 >> 0x20);
              pfVar8[(ulonglong)(uVar6 + 4) * 2 + 1] = -(float)uVar13;
              pfVar8[(ulonglong)(uVar6 + 5) * 2] = extraout_XMM0_Dd_05;
              pfVar8[(ulonglong)(uVar6 + 5) * 2 + 1] = -extraout_XMM0_Dc_05;
              uVar13 = FUN_145376cc3((fVar17 + fVar17) * (float)uVar5,
                                     (fVar17 + fVar17) * (float)(uVar5 + 1));
              uVar3 = (ulonglong)(uint)((iVar7 + -1) * 3);
              pfVar8[uVar3 * 2] = (float)((ulonglong)uVar13 >> 0x20);
              pfVar8[uVar3 * 2 + 1] = -(float)uVar13;
              pfVar8[(ulonglong)(uVar6 + 7) * 2] = extraout_XMM0_Dd_06;
              pfVar8[(ulonglong)(uVar6 + 7) * 2 + 1] = -extraout_XMM0_Dc_06;
              uVar13 = FUN_145376cc3(fVar12 * 3.0,fVar14 * 3.0);
              pfVar8[(ulonglong)(uVar6 + 8) * 2] = (float)((ulonglong)uVar13 >> 0x20);
              pfVar8[(ulonglong)(uVar6 + 8) * 2 + 1] = -(float)uVar13;
              pfVar8[(ulonglong)(uint)(iVar7 * 3) * 2] = extraout_XMM0_Dd_07;
              pfVar8[(ulonglong)(uint)(iVar7 * 3) * 2 + 1] = -extraout_XMM0_Dc_07;
              uVar13 = FUN_145376cc3(fVar15 * 3.0,fVar16 * 3.0);
              uVar5 = uVar5 + (int)uVar11 * 4;
              pfVar8[(ulonglong)(uVar6 + 10) * 2] = (float)((ulonglong)uVar13 >> 0x20);
              pfVar8[(ulonglong)(uVar6 + 10) * 2 + 1] = -(float)uVar13;
              iVar7 = iVar7 + 4;
              uVar3 = (ulonglong)(uVar6 + 0xb);
              pfVar8[uVar3 * 2] = extraout_XMM0_Dd_08;
              pfVar8[uVar3 * 2 + 1] = -extraout_XMM0_Dc_08;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
LAB_14556f0c3:
            uVar9 = (ulonglong)local_res20;
          }
        }
        else if (uVar10 >> 1 != 0) {
          uVar5 = 0;
          uVar9 = (ulonglong)(uVar10 >> 1);
          do {
            uVar6 = iVar7 * 3;
            fVar14 = (float)(uVar5 + 1) * fVar17;
            fVar12 = (float)uVar5 * fVar17;
            uVar13 = FUN_145376cc3(fVar12,fVar14);
            pfVar8[(ulonglong)uVar6 * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)uVar6 * 2 + 1] = -(float)uVar13;
            pfVar8[(ulonglong)(uVar6 + 1) * 2] = extraout_XMM0_Dd_09;
            pfVar8[(ulonglong)(uVar6 + 1) * 2 + 1] = -extraout_XMM0_Dc_09;
            uVar13 = FUN_145376cc3((fVar17 + fVar17) * (float)uVar5,
                                   (fVar17 + fVar17) * (float)(uVar5 + 1));
            pfVar8[(ulonglong)(uVar6 + 2) * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)(uVar6 + 2) * 2 + 1] = -(float)uVar13;
            pfVar8[(ulonglong)(uVar6 + 3) * 2] = extraout_XMM0_Dd_10;
            pfVar8[(ulonglong)(uVar6 + 3) * 2 + 1] = -extraout_XMM0_Dc_10;
            uVar13 = FUN_145376cc3(fVar12 * 3.0,fVar14 * 3.0);
            iVar7 = iVar7 + 2;
            pfVar8[(ulonglong)(uVar6 + 4) * 2] = (float)((ulonglong)uVar13 >> 0x20);
            pfVar8[(ulonglong)(uVar6 + 4) * 2 + 1] = -(float)uVar13;
            uVar5 = uVar5 + (int)uVar11 * 2;
            uVar3 = (ulonglong)(uVar6 + 5);
            pfVar8[uVar3 * 2] = extraout_XMM0_Dd_11;
            pfVar8[uVar3 * 2 + 1] = -extraout_XMM0_Dc_11;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          goto LAB_14556f0c3;
        }
        uVar10 = uVar10 * 4;
        break;
      case 10:
        uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
        uVar5 = 0;
        fVar12 = (float)uVar3;
        if (uVar2 != 0) {
          do {
            uVar3 = FUN_145376c80((float)uVar5 * (6.2831855 / fVar12));
            uVar5 = uVar5 + 1;
            *pfVar8 = extraout_XMM0_Db_00 * 0.5;
            pfVar8[1] = extraout_XMM0_Da_00 * -0.5;
            pfVar8 = pfVar8 + 2;
          } while (uVar5 < uVar2);
          uVar9 = (ulonglong)local_res20;
        }
      }
      local_res20 = (int)uVar9 + 1;
      uVar9 = (ulonglong)local_res20;
    } while (local_res20 < *(uint *)(param_1 + 5));
  }
  return uVar3;
}



// FUNCTION 14556f2a0 FUN_14556f2a0 body=170 status=ok
// SIG undefined FUN_14556f2a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14556f2a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 auStack_30 [5];
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 5) * 8 + 0xf;
  if (uVar5 <= (ulonglong)*(uint *)(param_1 + 5) * 8) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x14556f2d8;
  *(undefined8 *)((longlong)auStack_30 + -(uVar5 & 0xfffffffffffffff0)) = 0x14556f2eb;
  iVar2 = FUN_14556e7e0(&stack0xfffffffffffffff8 + -(uVar5 & 0xfffffffffffffff0),param_1,param_2);
  iVar1 = (int)param_1[5];
  *param_1 = (longlong)(param_1 + 8);
  param_1[1] = (ulonglong)(iVar2 + 0x40U) + (longlong)param_1;
  uVar3 = iVar2 + 0x40U + iVar1 * 4;
  uVar4 = iVar1 * 4 + 7 + uVar3 & 0xfffffff8;
  param_1[2] = (ulonglong)uVar3 + (longlong)param_1;
  param_1[3] = (ulonglong)uVar4 + (longlong)param_1;
  param_1[4] = (ulonglong)(iVar1 * 8 + uVar4) + (longlong)param_1;
  return uVar4 + iVar1 * 0x10;
}



// FUNCTION 14556f350 FUN_14556f350 body=418 status=ok
// SIG undefined FUN_14556f350(void)

void FUN_14556f350(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  
  uVar5 = *(uint *)(param_5 + 5);
  if (param_4 == 0) {
    puVar7 = (undefined8 *)param_5[3];
  }
  else {
    puVar7 = (undefined8 *)param_5[4];
  }
  puVar10 = (undefined8 *)*param_5;
  puVar11 = (undefined4 *)param_5[1];
  uVar3 = param_3;
  if ((uVar5 & 1) != 0) {
    uVar3 = param_2;
    param_2 = param_3;
  }
  uVar2 = *(uint *)((longlong)param_5 + 0x2c) >> 1;
  if ((int)param_5[6] != 1) {
    uVar2 = *(uint *)((longlong)param_5 + 0x2c);
  }
  puVar1 = (undefined4 *)param_5[2];
  if ((param_4 == 1) && ((int)param_5[6] == 1)) {
    uVar5 = uVar5 - 1;
    uVar6 = (ulonglong)uVar5;
    (*(code *)puVar7[uVar5])(uVar2,puVar11[uVar5],puVar1[uVar5],param_1,puVar10[uVar5],uVar3);
    if (uVar5 != 0) {
      lVar8 = (longlong)puVar7 - (longlong)puVar10;
      lVar9 = (longlong)puVar1 - (longlong)puVar11;
      do {
        uVar4 = uVar3;
        (**(code **)(lVar8 + (longlong)puVar10))
                  (uVar2,*puVar11,*(undefined4 *)((longlong)puVar11 + lVar9),uVar4,*puVar10,param_2)
        ;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        uVar6 = uVar6 - 1;
        uVar3 = param_2;
        param_2 = uVar4;
      } while (uVar6 != 0);
    }
  }
  else {
    (*(code *)*puVar7)(uVar2,*puVar11,*puVar1,param_1,*puVar10,uVar3);
    if (1 < uVar5) {
      lVar9 = (longlong)puVar1 - (longlong)puVar11;
      lVar8 = (longlong)puVar7 - (longlong)puVar10;
      uVar6 = (ulonglong)(uVar5 - 1);
      do {
        uVar4 = uVar3;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
        (**(code **)(lVar8 + (longlong)puVar10))
                  (uVar2,*puVar11,*(undefined4 *)((longlong)puVar11 + lVar9),uVar4,*puVar10,param_2)
        ;
        uVar6 = uVar6 - 1;
        uVar3 = param_2;
        param_2 = uVar4;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14556f500 FUN_14556f500 body=81 status=ok
// SIG undefined FUN_14556f500(void)

undefined8 FUN_14556f500(uint *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)param_3 << 2,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\CircularBuffer.cpp"
                     ,0x1a);
  *(longlong *)(param_1 + 4) = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 14556f560 FUN_14556f560 body=56 status=ok
// SIG undefined FUN_14556f560(void)

void FUN_14556f560(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 14556f5a0 FUN_14556f5a0 body=47 status=ok
// SIG undefined FUN_14556f5a0(void)

void FUN_14556f5a0(int *param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    memset(*(void **)(param_1 + 4),0,(ulonglong)(uint)(*param_1 << 2));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14556f5d0 FUN_14556f5d0 body=38 status=ok
// SIG undefined FUN_14556f5d0(void)

uint FUN_14556f5d0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if (param_2 < uVar1) {
    uVar2 = param_2;
  }
  param_1[3] = uVar1 - uVar2;
  param_1[2] = (param_1[2] + uVar2) % *param_1;
  return uVar2;
}



// FUNCTION 14556f600 FUN_14556f600 body=209 status=ok
// SIG undefined FUN_14556f600(void)

undefined8 FUN_14556f600(int *param_1,void *param_2,uint param_3,char param_4)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  _Src = *(void **)(param_1 + 4);
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    uVar1 = param_1[3];
    if (param_4 == '\0') {
      if (uVar1 < param_3) {
        return 0;
      }
      uVar4 = (ulonglong)param_3;
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_3;
      if (uVar1 < param_3) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)uVar2;
      if (param_3 - uVar2 != 0) {
        memset((void *)((longlong)param_2 + uVar4 * 4),0,(ulonglong)((param_3 - uVar2) * 4));
      }
    }
    uVar2 = (uint)uVar4;
    uVar1 = *param_1 - param_1[2];
    if (uVar1 <= uVar2) {
      uVar4 = (ulonglong)uVar1;
    }
    memcpy(param_2,(void *)((longlong)_Src + (ulonglong)(uint)param_1[2] * 4),
           (ulonglong)(uint)((int)uVar4 * 4));
    iVar3 = uVar2 - (int)uVar4;
    if (iVar3 != 0) {
      memcpy((void *)((longlong)param_2 + uVar4 * 4),_Src,(ulonglong)(uint)(iVar3 * 4));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14556f6e0 FUN_14556f6e0 body=9 status=ok
// SIG undefined FUN_14556f6e0(void)

void FUN_14556f6e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x18) = param_4;
  FUN_14556f500();
  return;
}



// FUNCTION 14556f6f0 FUN_14556f6f0 body=690 status=ok
// SIG undefined FUN_14556f6f0(void)

ulonglong FUN_14556f6f0(uint *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong in_RAX;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  
  if (param_2 == (float *)0x0) {
LAB_14556f994:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar8 = param_1[3];
  uVar5 = *param_1 - uVar8;
  in_RAX = (ulonglong)uVar5;
  uVar15 = param_1[6];
  if (uVar5 < uVar15) goto LAB_14556f994;
  uVar5 = param_1[1];
  pfVar9 = *(float **)(param_1 + 4);
  uVar7 = uVar15;
  if (*param_1 - uVar5 <= uVar15) {
    uVar7 = *param_1 - uVar5;
  }
  uVar16 = 0;
  pfVar10 = pfVar9 + uVar5;
  uVar11 = 0;
  if (uVar7 != 0) {
    pfVar13 = param_2;
    if (0xf < uVar7) {
      do {
        uVar11 = uVar11 + 0x10;
        fVar2 = pfVar13[1];
        fVar3 = pfVar13[2];
        fVar4 = pfVar13[3];
        *pfVar10 = *pfVar13 + *pfVar10;
        pfVar10[1] = fVar2 + pfVar10[1];
        pfVar10[2] = fVar3 + pfVar10[2];
        pfVar10[3] = fVar4 + pfVar10[3];
        fVar2 = pfVar13[5];
        fVar3 = pfVar13[6];
        fVar4 = pfVar13[7];
        pfVar10[4] = pfVar13[4] + pfVar10[4];
        pfVar10[5] = fVar2 + pfVar10[5];
        pfVar10[6] = fVar3 + pfVar10[6];
        pfVar10[7] = fVar4 + pfVar10[7];
        fVar2 = pfVar13[9];
        fVar3 = pfVar13[10];
        fVar4 = pfVar13[0xb];
        pfVar10[8] = pfVar13[8] + pfVar10[8];
        pfVar10[9] = fVar2 + pfVar10[9];
        pfVar10[10] = fVar3 + pfVar10[10];
        pfVar10[0xb] = fVar4 + pfVar10[0xb];
        pfVar1 = pfVar13 + 0xc;
        fVar2 = pfVar13[0xd];
        fVar3 = pfVar13[0xe];
        fVar4 = pfVar13[0xf];
        pfVar13 = pfVar13 + 0x10;
        pfVar10[0xc] = *pfVar1 + pfVar10[0xc];
        pfVar10[0xd] = fVar2 + pfVar10[0xd];
        pfVar10[0xe] = fVar3 + pfVar10[0xe];
        pfVar10[0xf] = fVar4 + pfVar10[0xf];
        pfVar10 = pfVar10 + 0x10;
      } while (uVar11 < (uVar7 & 0xfffffff0));
      if (uVar7 <= uVar11) goto LAB_14556f865;
    }
    if (3 < uVar7 - uVar11) {
      uVar6 = ((uVar7 - uVar11) - 4 >> 2) + 1;
      uVar12 = (ulonglong)uVar6;
      uVar11 = uVar11 + uVar6 * 4;
      do {
        fVar2 = pfVar13[1];
        *pfVar10 = *pfVar13 + *pfVar10;
        fVar3 = pfVar13[2];
        pfVar10[1] = fVar2 + pfVar10[1];
        fVar2 = pfVar13[3];
        pfVar13 = pfVar13 + 4;
        pfVar10[2] = fVar3 + pfVar10[2];
        pfVar10[3] = fVar2 + pfVar10[3];
        pfVar10 = pfVar10 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar7 <= uVar11) goto LAB_14556f865;
    }
    lVar14 = (longlong)pfVar13 - (longlong)pfVar10;
    uVar12 = (ulonglong)(uVar7 - uVar11);
    do {
      *pfVar10 = *(float *)(lVar14 + (longlong)pfVar10) + *pfVar10;
      pfVar10 = pfVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_14556f865:
  uVar15 = uVar15 - uVar7;
  if ((uVar15 != 0) && (param_2 = param_2 + uVar7, uVar15 != 0)) {
    if (0xf < uVar15) {
      do {
        uVar16 = uVar16 + 0x10;
        fVar2 = param_2[1];
        fVar3 = param_2[2];
        fVar4 = param_2[3];
        *pfVar9 = *param_2 + *pfVar9;
        pfVar9[1] = fVar2 + pfVar9[1];
        pfVar9[2] = fVar3 + pfVar9[2];
        pfVar9[3] = fVar4 + pfVar9[3];
        fVar2 = param_2[5];
        fVar3 = param_2[6];
        fVar4 = param_2[7];
        pfVar9[4] = param_2[4] + pfVar9[4];
        pfVar9[5] = fVar2 + pfVar9[5];
        pfVar9[6] = fVar3 + pfVar9[6];
        pfVar9[7] = fVar4 + pfVar9[7];
        fVar2 = param_2[9];
        fVar3 = param_2[10];
        fVar4 = param_2[0xb];
        pfVar9[8] = param_2[8] + pfVar9[8];
        pfVar9[9] = fVar2 + pfVar9[9];
        pfVar9[10] = fVar3 + pfVar9[10];
        pfVar9[0xb] = fVar4 + pfVar9[0xb];
        pfVar10 = param_2 + 0xc;
        fVar2 = param_2[0xd];
        fVar3 = param_2[0xe];
        fVar4 = param_2[0xf];
        param_2 = param_2 + 0x10;
        pfVar9[0xc] = *pfVar10 + pfVar9[0xc];
        pfVar9[0xd] = fVar2 + pfVar9[0xd];
        pfVar9[0xe] = fVar3 + pfVar9[0xe];
        pfVar9[0xf] = fVar4 + pfVar9[0xf];
        pfVar9 = pfVar9 + 0x10;
      } while (uVar16 < (uVar15 & 0xfffffff0));
      if (uVar15 <= uVar16) goto LAB_14556f96f;
    }
    if (3 < uVar15 - uVar16) {
      uVar7 = ((uVar15 - uVar16) - 4 >> 2) + 1;
      uVar12 = (ulonglong)uVar7;
      uVar16 = uVar16 + uVar7 * 4;
      do {
        *pfVar9 = *param_2 + *pfVar9;
        pfVar9[1] = param_2[1] + pfVar9[1];
        pfVar9[2] = param_2[2] + pfVar9[2];
        pfVar10 = param_2 + 3;
        param_2 = param_2 + 4;
        pfVar9[3] = *pfVar10 + pfVar9[3];
        pfVar9 = pfVar9 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar15 <= uVar16) goto LAB_14556f96f;
    }
    lVar14 = (longlong)param_2 - (longlong)pfVar9;
    uVar12 = (ulonglong)(uVar15 - uVar16);
    do {
      *pfVar9 = *(float *)(lVar14 + (longlong)pfVar9) + *pfVar9;
      pfVar9 = pfVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_14556f96f:
  uVar8 = uVar8 + param_3;
  param_1[3] = uVar8;
  param_1[1] = (param_3 + uVar5) % *param_1;
  return CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
}



// FUNCTION 14556f9b0 FUN_14556f9b0 body=292 status=ok
// SIG undefined FUN_14556f9b0(void)

ulonglong FUN_14556f9b0(uint *param_1,void *param_2,int param_3,uint param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((param_2 != (void *)0x0) && (param_4 != 0)) {
    if ((param_5 == '\0') || (param_1[3] != 0)) {
      uVar1 = param_1[3];
      if (uVar1 < param_4) {
        param_4 = uVar1;
      }
      param_1[3] = uVar1 - param_4;
    }
    else {
      uVar3 = ((param_1[6] + param_1[1]) - param_3) % *param_1;
      uVar1 = param_1[2];
      iVar2 = *param_1 - uVar1;
      if (uVar1 <= uVar3) {
        iVar2 = -uVar1;
      }
      uVar3 = iVar2 + uVar3;
      if (uVar3 < param_4) {
        param_4 = uVar3;
      }
    }
    uVar1 = *param_1 - param_1[2];
    uVar4 = (ulonglong)param_4;
    if (uVar1 <= param_4) {
      uVar4 = (ulonglong)uVar1;
    }
    uVar1 = (int)uVar4 * 4;
    memcpy(param_2,(void *)(*(longlong *)(param_1 + 4) + (ulonglong)param_1[2] * 4),(ulonglong)uVar1
          );
    memset((void *)(*(longlong *)(param_1 + 4) + (ulonglong)param_1[2] * 4),0,(ulonglong)uVar1);
    iVar2 = param_4 - (int)uVar4;
    if (iVar2 != 0) {
      uVar1 = iVar2 * 4;
      memcpy((void *)((longlong)param_2 + uVar4 * 4),*(void **)(param_1 + 4),(ulonglong)uVar1);
      memset(*(void **)(param_1 + 4),0,(ulonglong)uVar1);
    }
    param_1[2] = (param_1[2] + param_4) % *param_1;
    return (ulonglong)param_4;
  }
  return 0;
}



// FUNCTION 14556fae0 FUN_14556fae0 body=48 status=ok
// SIG undefined FUN_14556fae0(void)

int FUN_14556fae0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[3] != 0) {
    return 0;
  }
  uVar1 = param_1[2];
  uVar3 = ((param_1[6] + param_1[1]) - param_2) % *param_1;
  iVar2 = *param_1 - uVar1;
  if (uVar1 <= uVar3) {
    iVar2 = -uVar1;
  }
  return uVar3 + iVar2;
}



// FUNCTION 14556fb10 FUN_14556fb10 body=1054 status=ok
// SIG undefined FUN_14556fb10(void)

undefined4
FUN_14556fb10(undefined8 *param_1,longlong *param_2,uint param_3,int param_4,char param_5,
             char param_6)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *(uint *)(param_1 + 1) = param_3;
  pfVar3 = (float *)(**(code **)(*param_2 + 8))
                              (param_2,(ulonglong)(param_3 >> 1) << 2,
                               "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\TimeWindow.cpp"
                               ,0x1e);
  *param_1 = pfVar3;
  if (pfVar3 == (float *)0x0) {
    return 0x34;
  }
  if (param_4 == 0) {
LAB_14556fecb:
    if (*(uint *)(param_1 + 1) >> 1 != 0) {
      for (uVar5 = (ulonglong)(*(uint *)(param_1 + 1) >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
        *pfVar3 = 1.0;
        pfVar3 = pfVar3 + 1;
      }
    }
    fVar6 = (float)*(uint *)(param_1 + 1);
  }
  else {
    if (param_4 == 1) {
      dVar9 = 0.0;
      if (param_6 == '\0') {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar10 = 0x54442d18;
        uVar11 = 0x400921fb;
      }
      dVar1 = (double)CONCAT44(uVar11,uVar10);
      uVar4 = *(uint *)(param_1 + 1) >> 1;
      dVar2 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) - 1.0);
      if (uVar4 != 0) {
        uVar5 = (ulonglong)uVar4;
        dVar7 = 0.0;
        if (param_5 != '\0') {
          do {
            dVar7 = cos(dVar1);
            dVar1 = dVar1 + dVar2;
            dVar7 = 0.54 - dVar7 * 0.46;
            dVar9 = dVar9 + dVar7;
            *pfVar3 = (float)SQRT(dVar7);
            pfVar3 = pfVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          fVar6 = (float)dVar9 + (float)dVar9;
          goto LAB_14556fee8;
        }
        do {
          dVar9 = cos(dVar1);
          dVar1 = dVar1 + dVar2;
          dVar9 = 0.54 - dVar9 * 0.46;
          *pfVar3 = (float)dVar9;
          pfVar3 = pfVar3 + 1;
          dVar9 = dVar7 + dVar9 * dVar9;
          uVar5 = uVar5 - 1;
          dVar7 = dVar9;
        } while (uVar5 != 0);
      }
    }
    else {
      if (param_4 != 2) {
        if (param_4 == 3) {
          dVar9 = 0.0;
          if (param_6 == '\0') {
            uVar10 = 0;
            uVar11 = 0;
          }
          else {
            uVar10 = 0x54442d18;
            uVar11 = 0x400921fb;
          }
          dVar1 = (double)CONCAT44(uVar11,uVar10);
          uVar4 = *(uint *)(param_1 + 1) >> 1;
          dVar2 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) - 1.0);
          if (uVar4 != 0) {
            uVar5 = (ulonglong)uVar4;
            dVar7 = 0.0;
            if (param_5 == '\0') {
              do {
                dVar9 = cos(dVar1 + dVar1);
                dVar8 = cos(dVar1);
                dVar1 = dVar1 + dVar2;
                dVar9 = dVar9 * 0.08 + (0.42 - dVar8 * 0.5);
                *pfVar3 = (float)dVar9;
                pfVar3 = pfVar3 + 1;
                dVar9 = dVar7 + dVar9 * dVar9;
                uVar5 = uVar5 - 1;
                dVar7 = dVar9;
              } while (uVar5 != 0);
            }
            else {
              do {
                dVar7 = cos(dVar1 + dVar1);
                dVar8 = cos(dVar1);
                dVar1 = dVar1 + dVar2;
                dVar7 = dVar7 * 0.08 + (0.42 - dVar8 * 0.5);
                dVar9 = dVar9 + dVar7;
                *pfVar3 = (float)SQRT(dVar7);
                pfVar3 = pfVar3 + 1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
          }
          fVar6 = (float)dVar9 + (float)dVar9;
          goto LAB_14556fee8;
        }
        goto LAB_14556fecb;
      }
      dVar9 = 0.0;
      if (param_6 == '\0') {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar10 = 0x54442d18;
        uVar11 = 0x400921fb;
      }
      dVar1 = (double)CONCAT44(uVar11,uVar10);
      uVar4 = *(uint *)(param_1 + 1) >> 1;
      dVar2 = 6.283185307179586 / ((double)*(uint *)(param_1 + 1) - 1.0);
      if (uVar4 != 0) {
        uVar5 = (ulonglong)uVar4;
        if (param_5 == '\0') {
          do {
            dVar7 = cos(dVar1);
            dVar1 = dVar1 + dVar2;
            dVar7 = 1.0 - dVar7;
            dVar9 = dVar9 + dVar7 * dVar7 * 0.25;
            *pfVar3 = (float)(dVar7 * 0.5);
            pfVar3 = pfVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          fVar6 = (float)dVar9 + (float)dVar9;
        }
        else {
          do {
            dVar7 = cos(dVar1);
            dVar1 = dVar1 + dVar2;
            dVar7 = (1.0 - dVar7) * 0.5;
            dVar9 = dVar9 + dVar7;
            *pfVar3 = (float)SQRT(dVar7);
            pfVar3 = pfVar3 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          fVar6 = (float)dVar9 + (float)dVar9;
        }
        goto LAB_14556fee8;
      }
    }
    fVar6 = (float)dVar9 + (float)dVar9;
  }
LAB_14556fee8:
  *(float *)((longlong)param_1 + 0xc) = fVar6;
  return 1;
}



// FUNCTION 14556ff30 FUN_14556ff30 body=42 status=ok
// SIG undefined FUN_14556ff30(void)

void FUN_14556ff30(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14556ff60 FUN_14556ff60 body=43 status=ok
// SIG undefined FUN_14556ff60(void)

void FUN_14556ff60(void)

{
  float in_XMM3_Da;
  
  if (in_XMM3_Da == 1.0) {
    FUN_14556ff90();
    return;
  }
  FUN_145570320();
  return;
}



// FUNCTION 14556ff90 FUN_14556ff90 body=902 status=ok
// SIG undefined FUN_14556ff90(void)

void FUN_14556ff90(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  
  uVar12 = *(uint *)(param_1 + 8);
  uVar21 = 0;
  uVar22 = uVar12 >> 1;
  uVar16 = uVar21;
  if (uVar22 != 0) {
    if (1 < uVar22) {
      if (0xf < uVar22) {
        uVar24 = 8;
        do {
          pfVar17 = (float *)(param_2 + uVar21 * 4);
          fVar4 = pfVar17[1];
          fVar5 = pfVar17[2];
          fVar6 = pfVar17[3];
          uVar16 = (ulonglong)(uVar24 - 4);
          pfVar2 = (float *)(param_4 + uVar21 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar3 = (float *)(param_2 + uVar21 * 4);
          *pfVar3 = *pfVar2 * *pfVar17;
          pfVar3[1] = fVar7 * fVar4;
          pfVar3[2] = fVar8 * fVar5;
          pfVar3[3] = fVar9 * fVar6;
          uVar20 = (int)uVar21 + 0x10;
          uVar21 = (ulonglong)uVar20;
          pfVar17 = (float *)(param_2 + uVar16 * 4);
          fVar4 = pfVar17[1];
          fVar5 = pfVar17[2];
          fVar6 = pfVar17[3];
          pfVar2 = (float *)(param_4 + uVar16 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar3 = (float *)(param_2 + uVar16 * 4);
          *pfVar3 = *pfVar2 * *pfVar17;
          pfVar3[1] = fVar7 * fVar4;
          pfVar3[2] = fVar8 * fVar5;
          pfVar3[3] = fVar9 * fVar6;
          uVar16 = (ulonglong)uVar24;
          pfVar17 = (float *)(param_2 + uVar16 * 4);
          fVar4 = pfVar17[1];
          fVar5 = pfVar17[2];
          fVar6 = pfVar17[3];
          pfVar2 = (float *)(param_4 + uVar16 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar3 = (float *)(param_2 + uVar16 * 4);
          *pfVar3 = *pfVar2 * *pfVar17;
          pfVar3[1] = fVar7 * fVar4;
          pfVar3[2] = fVar8 * fVar5;
          pfVar3[3] = fVar9 * fVar6;
          uVar16 = (ulonglong)(uVar24 + 4);
          uVar24 = uVar24 + 0x10;
          pfVar17 = (float *)(param_2 + uVar16 * 4);
          fVar4 = pfVar17[1];
          fVar5 = pfVar17[2];
          fVar6 = pfVar17[3];
          pfVar2 = (float *)(param_4 + uVar16 * 4);
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar9 = pfVar2[3];
          pfVar3 = (float *)(param_2 + uVar16 * 4);
          *pfVar3 = *pfVar2 * *pfVar17;
          pfVar3[1] = fVar7 * fVar4;
          pfVar3[2] = fVar8 * fVar5;
          pfVar3[3] = fVar9 * fVar6;
        } while (uVar20 < uVar22 - (uVar22 & 0xf));
        if ((uVar22 & 0xf) < 2) goto LAB_14557006b;
      }
      do {
        uVar10 = *(undefined8 *)(param_2 + uVar21 * 4);
        uVar11 = *(undefined8 *)(param_4 + uVar21 * 4);
        *(ulonglong *)(param_2 + uVar21 * 4) =
             CONCAT44((float)((ulonglong)uVar11 >> 0x20) * (float)((ulonglong)uVar10 >> 0x20),
                      (float)uVar11 * (float)uVar10);
        uVar24 = (int)uVar21 + 2;
        uVar21 = (ulonglong)uVar24;
      } while (uVar24 < (uVar22 & 0xfffffffe));
    }
LAB_14557006b:
    uVar24 = (uint)uVar21;
    uVar16 = uVar21;
    if (uVar24 < uVar22) {
      lVar19 = param_4 - param_2;
      if (3 < uVar22 - uVar24) {
        lVar1 = uVar21 * 4;
        uVar20 = ((uVar22 - uVar24) - 4 >> 2) + 1;
        uVar23 = (ulonglong)uVar20;
        uVar24 = uVar24 + uVar20 * 4;
        uVar16 = (ulonglong)uVar24;
        uVar21 = uVar21 + (ulonglong)uVar20 * 4;
        pfVar17 = (float *)(param_2 + 4 + lVar1);
        do {
          fVar4 = *(float *)((longlong)pfVar17 + lVar19);
          pfVar17[-1] = *(float *)(lVar19 + -4 + (longlong)pfVar17) * pfVar17[-1];
          fVar5 = *(float *)(lVar19 + 4 + (longlong)pfVar17);
          *pfVar17 = fVar4 * *pfVar17;
          fVar4 = *(float *)(lVar19 + 8 + (longlong)pfVar17);
          pfVar17[1] = fVar5 * pfVar17[1];
          pfVar17[2] = fVar4 * pfVar17[2];
          uVar23 = uVar23 - 1;
          pfVar17 = pfVar17 + 4;
        } while (uVar23 != 0);
        if (uVar22 <= uVar24) goto LAB_145570121;
      }
      uVar23 = (ulonglong)(uVar22 - (int)uVar16);
      uVar16 = (ulonglong)uVar22;
      pfVar17 = (float *)(param_2 + uVar21 * 4);
      do {
        *pfVar17 = *(float *)((longlong)pfVar17 + lVar19) * *pfVar17;
        uVar23 = uVar23 - 1;
        pfVar17 = pfVar17 + 1;
      } while (uVar23 != 0);
    }
  }
LAB_145570121:
  uVar22 = uVar12 - (uint)uVar16;
  if (uVar12 <= (uint)uVar16) {
    return;
  }
  if (1 < uVar22) {
    if (7 < uVar22) {
      do {
        iVar18 = (int)uVar16;
        iVar25 = uVar12 - iVar18;
        fVar4 = *(float *)(param_4 + (ulonglong)(iVar25 - 2) * 4);
        fVar5 = *(float *)(param_4 + (ulonglong)(iVar25 - 4) * 4);
        fVar6 = *(float *)(param_4 + (ulonglong)(iVar25 - 3) * 4);
        pfVar17 = (float *)(param_2 + uVar16 * 4);
        fVar13 = pfVar17[1];
        fVar14 = pfVar17[2];
        fVar15 = pfVar17[3];
        fVar7 = *(float *)(param_4 + (ulonglong)(iVar25 - 8) * 4);
        fVar8 = *(float *)(param_4 + (ulonglong)(iVar25 - 7) * 4);
        fVar9 = *(float *)(param_4 + (ulonglong)(iVar25 - 6) * 4);
        pfVar2 = (float *)(param_2 + uVar16 * 4);
        *pfVar2 = *(float *)(param_4 + (ulonglong)(iVar25 - 1) * 4) * *pfVar17;
        pfVar2[1] = fVar4 * fVar13;
        pfVar2[2] = fVar6 * fVar14;
        pfVar2[3] = fVar5 * fVar15;
        uVar16 = (ulonglong)(iVar18 + 8U);
        pfVar17 = (float *)(param_2 + (ulonglong)(iVar18 + 4) * 4);
        fVar4 = pfVar17[1];
        fVar5 = pfVar17[2];
        fVar6 = pfVar17[3];
        pfVar2 = (float *)(param_2 + (ulonglong)(iVar18 + 4) * 4);
        *pfVar2 = *(float *)(param_4 + (ulonglong)(iVar25 - 5) * 4) * *pfVar17;
        pfVar2[1] = fVar9 * fVar4;
        pfVar2[2] = fVar8 * fVar5;
        pfVar2[3] = fVar7 * fVar6;
      } while (iVar18 + 8U < uVar12 - (uVar22 & 7));
      if ((uVar22 & 7) < 2) goto LAB_145570241;
    }
    uVar21 = uVar16;
    do {
      iVar18 = uVar12 - (int)uVar21;
      uVar24 = (int)uVar21 + 2;
      uVar16 = (ulonglong)uVar24;
      uVar10 = *(undefined8 *)(param_2 + uVar21 * 4);
      *(ulonglong *)(param_2 + uVar21 * 4) =
           CONCAT44(*(float *)(param_4 + (ulonglong)(iVar18 - 2) * 4) *
                    (float)((ulonglong)uVar10 >> 0x20),
                    *(float *)(param_4 + (ulonglong)(iVar18 - 1) * 4) * (float)uVar10);
      uVar21 = uVar16;
    } while (uVar24 < uVar12 - (uVar22 & 1));
  }
LAB_145570241:
  uVar22 = (uint)uVar16;
  if (uVar22 < uVar12) {
    uVar21 = uVar16;
    if (3 < uVar12 - uVar22) {
      uVar21 = uVar16 + (ulonglong)((((uVar12 - 3) - uVar22) - 1 >> 2) + 1) * 4;
      pfVar17 = (float *)(param_2 + 8 + uVar16 * 4);
      do {
        iVar18 = uVar12 - (int)uVar16;
        uVar22 = (int)uVar16 + 4;
        uVar16 = (ulonglong)uVar22;
        pfVar17[-2] = *(float *)(param_4 + (ulonglong)(iVar18 - 1) * 4) * pfVar17[-2];
        pfVar17[-1] = *(float *)(param_4 + (ulonglong)(iVar18 - 2) * 4) * pfVar17[-1];
        *pfVar17 = *(float *)(param_4 + (ulonglong)(iVar18 - 3) * 4) * *pfVar17;
        pfVar17[1] = *(float *)(param_4 + (ulonglong)(iVar18 - 4) * 4) * pfVar17[1];
        pfVar17 = pfVar17 + 4;
      } while (uVar22 < uVar12 - 3);
      if (uVar12 <= uVar22) {
        return;
      }
    }
    pfVar17 = (float *)(param_2 + uVar21 * 4);
    do {
      iVar18 = (int)uVar16;
      uVar22 = iVar18 + 1;
      uVar16 = (ulonglong)uVar22;
      *pfVar17 = *(float *)(param_4 + (ulonglong)((uVar12 - iVar18) - 1) * 4) * *pfVar17;
      pfVar17 = pfVar17 + 1;
    } while (uVar22 < uVar12);
  }
  return;
}



// FUNCTION 145570320 FUN_145570320 body=808 status=ok
// SIG undefined FUN_145570320(void)

void FUN_145570320(longlong param_1,longlong param_2,undefined8 param_3,float param_4,
                  longlong param_5)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  float *pfVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  
  uVar10 = *(uint *)(param_1 + 8);
  uVar19 = 0;
  uVar20 = uVar10 >> 1;
  uVar14 = uVar19;
  if (uVar20 != 0) {
    if (0xf < uVar20) {
      uVar21 = 8;
      do {
        pfVar15 = (float *)(param_2 + uVar19 * 4);
        fVar4 = pfVar15[1];
        fVar5 = pfVar15[2];
        fVar6 = pfVar15[3];
        uVar14 = (ulonglong)(uVar21 - 4);
        pfVar2 = (float *)(param_5 + uVar19 * 4);
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar3 = (float *)(param_2 + uVar19 * 4);
        *pfVar3 = *pfVar2 * param_4 * *pfVar15;
        pfVar3[1] = fVar7 * param_4 * fVar4;
        pfVar3[2] = fVar8 * param_4 * fVar5;
        pfVar3[3] = fVar9 * param_4 * fVar6;
        uVar18 = (int)uVar19 + 0x10;
        uVar19 = (ulonglong)uVar18;
        pfVar15 = (float *)(param_2 + uVar14 * 4);
        fVar4 = pfVar15[1];
        fVar5 = pfVar15[2];
        fVar6 = pfVar15[3];
        pfVar2 = (float *)(param_5 + uVar14 * 4);
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar3 = (float *)(param_2 + uVar14 * 4);
        *pfVar3 = *pfVar2 * param_4 * *pfVar15;
        pfVar3[1] = fVar7 * param_4 * fVar4;
        pfVar3[2] = fVar8 * param_4 * fVar5;
        pfVar3[3] = fVar9 * param_4 * fVar6;
        uVar14 = (ulonglong)uVar21;
        pfVar15 = (float *)(param_2 + uVar14 * 4);
        fVar4 = pfVar15[1];
        fVar5 = pfVar15[2];
        fVar6 = pfVar15[3];
        pfVar2 = (float *)(param_5 + uVar14 * 4);
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar3 = (float *)(param_2 + uVar14 * 4);
        *pfVar3 = *pfVar2 * param_4 * *pfVar15;
        pfVar3[1] = fVar7 * param_4 * fVar4;
        pfVar3[2] = fVar8 * param_4 * fVar5;
        pfVar3[3] = fVar9 * param_4 * fVar6;
        uVar14 = (ulonglong)(uVar21 + 4);
        uVar21 = uVar21 + 0x10;
        pfVar15 = (float *)(param_2 + uVar14 * 4);
        fVar4 = pfVar15[1];
        fVar5 = pfVar15[2];
        fVar6 = pfVar15[3];
        pfVar2 = (float *)(param_5 + uVar14 * 4);
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar3 = (float *)(param_2 + uVar14 * 4);
        *pfVar3 = *pfVar2 * param_4 * *pfVar15;
        pfVar3[1] = fVar7 * param_4 * fVar4;
        pfVar3[2] = fVar8 * param_4 * fVar5;
        pfVar3[3] = fVar9 * param_4 * fVar6;
      } while (uVar18 < (uVar20 & 0xfffffff0));
    }
    uVar21 = (uint)uVar19;
    uVar14 = uVar19;
    if (uVar21 < uVar20) {
      lVar17 = param_5 - param_2;
      if (3 < uVar20 - uVar21) {
        lVar1 = uVar19 * 4;
        uVar18 = ((uVar20 - uVar21) - 4 >> 2) + 1;
        uVar22 = (ulonglong)uVar18;
        uVar21 = uVar21 + uVar18 * 4;
        uVar14 = (ulonglong)uVar21;
        uVar19 = uVar19 + (ulonglong)uVar18 * 4;
        pfVar15 = (float *)(param_2 + 4 + lVar1);
        do {
          pfVar2 = pfVar15 + 4;
          fVar4 = *(float *)((longlong)pfVar15 + lVar17);
          pfVar15[-1] = param_4 * *(float *)(lVar17 + -0x14 + (longlong)pfVar2) * pfVar15[-1];
          fVar5 = *(float *)(lVar17 + -0xc + (longlong)pfVar2);
          *pfVar15 = param_4 * fVar4 * *pfVar15;
          fVar4 = *(float *)(lVar17 + -8 + (longlong)pfVar2);
          pfVar15[1] = param_4 * fVar5 * pfVar15[1];
          pfVar15[2] = param_4 * fVar4 * pfVar15[2];
          uVar22 = uVar22 - 1;
          pfVar15 = pfVar2;
        } while (uVar22 != 0);
        if (uVar20 <= uVar21) goto LAB_1455704a5;
      }
      uVar22 = (ulonglong)(uVar20 - (int)uVar14);
      uVar14 = (ulonglong)uVar20;
      pfVar15 = (float *)(param_2 + uVar19 * 4);
      do {
        *pfVar15 = param_4 * *(float *)((longlong)pfVar15 + lVar17) * *pfVar15;
        uVar22 = uVar22 - 1;
        pfVar15 = pfVar15 + 1;
      } while (uVar22 != 0);
    }
  }
LAB_1455704a5:
  uVar20 = uVar10 - (uint)uVar14;
  if ((uint)uVar14 < uVar10) {
    if (7 < uVar20) {
      do {
        iVar16 = (int)uVar14;
        iVar23 = uVar10 - iVar16;
        fVar4 = *(float *)(param_5 + (ulonglong)(iVar23 - 4) * 4);
        fVar5 = *(float *)(param_5 + (ulonglong)(iVar23 - 3) * 4);
        fVar6 = *(float *)(param_5 + (ulonglong)(iVar23 - 2) * 4);
        pfVar15 = (float *)(param_2 + uVar14 * 4);
        fVar11 = pfVar15[1];
        fVar12 = pfVar15[2];
        fVar13 = pfVar15[3];
        fVar7 = *(float *)(param_5 + (ulonglong)(iVar23 - 8) * 4);
        fVar8 = *(float *)(param_5 + (ulonglong)(iVar23 - 7) * 4);
        fVar9 = *(float *)(param_5 + (ulonglong)(iVar23 - 6) * 4);
        pfVar2 = (float *)(param_2 + uVar14 * 4);
        *pfVar2 = *(float *)(param_5 + (ulonglong)(iVar23 - 1) * 4) * param_4 * *pfVar15;
        pfVar2[1] = fVar6 * param_4 * fVar11;
        pfVar2[2] = fVar5 * param_4 * fVar12;
        pfVar2[3] = fVar4 * param_4 * fVar13;
        uVar14 = (ulonglong)(iVar16 + 8U);
        pfVar15 = (float *)(param_2 + (ulonglong)(iVar16 + 4) * 4);
        fVar4 = pfVar15[1];
        fVar5 = pfVar15[2];
        fVar6 = pfVar15[3];
        pfVar2 = (float *)(param_2 + (ulonglong)(iVar16 + 4) * 4);
        *pfVar2 = *(float *)(param_5 + (ulonglong)(iVar23 - 5) * 4) * param_4 * *pfVar15;
        pfVar2[1] = fVar9 * param_4 * fVar4;
        pfVar2[2] = fVar8 * param_4 * fVar5;
        pfVar2[3] = fVar7 * param_4 * fVar6;
      } while (iVar16 + 8U < uVar10 - (uVar20 & 7));
    }
    uVar20 = (uint)uVar14;
    if (uVar20 < uVar10) {
      uVar19 = uVar14;
      if (3 < uVar10 - uVar20) {
        uVar19 = uVar14 + (ulonglong)((((uVar10 - 3) - uVar20) - 1 >> 2) + 1) * 4;
        pfVar15 = (float *)(param_2 + 8 + uVar14 * 4);
        do {
          iVar16 = uVar10 - (int)uVar14;
          uVar20 = (int)uVar14 + 4;
          uVar14 = (ulonglong)uVar20;
          pfVar15[-2] = param_4 * *(float *)(param_5 + (ulonglong)(iVar16 - 1) * 4) * pfVar15[-2];
          pfVar15[-1] = param_4 * *(float *)(param_5 + (ulonglong)(iVar16 - 2) * 4) * pfVar15[-1];
          *pfVar15 = param_4 * *(float *)(param_5 + (ulonglong)(iVar16 - 3) * 4) * *pfVar15;
          pfVar15[1] = param_4 * *(float *)(param_5 + (ulonglong)(iVar16 - 4) * 4) * pfVar15[1];
          pfVar15 = pfVar15 + 4;
        } while (uVar20 < uVar10 - 3);
        if (uVar10 <= uVar20) {
          return;
        }
      }
      pfVar15 = (float *)(param_2 + uVar19 * 4);
      do {
        iVar16 = (int)uVar14;
        uVar20 = iVar16 + 1;
        uVar14 = (ulonglong)uVar20;
        *pfVar15 = param_4 * *(float *)(param_5 + (ulonglong)((uVar10 - iVar16) - 1) * 4) * *pfVar15
        ;
        pfVar15 = pfVar15 + 1;
      } while (uVar20 < uVar10);
    }
  }
  return;
}



// FUNCTION 145570650 FUN_145570650 body=72 status=ok
// SIG undefined FUN_145570650(void)

undefined8 FUN_145570650(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)param_3 << 3,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\FreqWindow.cpp"
                     ,0x1b);
  *param_1 = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 1455706a0 FUN_1455706a0 body=56 status=ok
// SIG undefined FUN_1455706a0(void)

void FUN_1455706a0(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1455706e0 FUN_1455706e0 body=40 status=ok
// SIG undefined FUN_1455706e0(void)

void FUN_1455706e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_14556e470(param_2,*param_1,param_5);
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  return;
}



// FUNCTION 145570710 FUN_145570710 body=72 status=ok
// SIG undefined FUN_145570710(void)

void FUN_145570710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)((longlong)param_1 + 0xd) != '\0') {
    FUN_1455709e0(param_1,uVar1);
  }
  FUN_14556e490(uVar1,param_2,param_5,param_4);
  return;
}



// FUNCTION 145570760 FUN_145570760 body=8 status=ok
// SIG undefined FUN_145570760(void)

void FUN_145570760(undefined8 *param_1)

{
  FUN_1455707b0(param_1,*param_1);
  return;
}



// FUNCTION 145570770 FUN_145570770 body=54 status=ok
// SIG undefined FUN_145570770(void)

void FUN_145570770(void)

{
  FUN_145570bc0();
  return;
}



// FUNCTION 1455707b0 FUN_1455707b0 body=559 status=ok
// SIG undefined FUN_1455707b0(void)

void FUN_1455707b0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_2[1];
  uVar5 = (ulonglong)(*(uint *)(param_1 + 8) >> 1);
  fVar2 = *param_2;
  fVar3 = param_2[uVar5 * 2];
  fVar4 = param_2[uVar5 * 2 + 1];
  FUN_1455714b0();
  fVar6 = -1.5707964;
  *param_2 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar2 == 0.0) {
    if (fVar1 <= 0.0) {
      if (fVar1 == 0.0) {
        if ((int)fVar2 < 0) {
          fVar7 = 3.1415927;
        }
        else {
          fVar7 = 0.0;
        }
      }
      else {
        fVar7 = -1.5707964;
      }
    }
    else {
      fVar7 = 1.5707964;
    }
  }
  else {
    fVar7 = fVar1 / fVar2;
    if (1.0 <= ABS(fVar7)) {
      fVar7 = 1.5707964 - fVar7 / (fVar7 * fVar7 + 0.28);
      if (fVar1 < 0.0) {
        fVar7 = fVar7 - 3.1415927;
      }
    }
    else {
      fVar7 = fVar7 / (fVar7 * 0.28 * fVar7 + 1.0);
      if (fVar2 < 0.0) {
        if (0.0 <= fVar1) {
          fVar7 = fVar7 + 3.1415927;
        }
        else {
          fVar7 = fVar7 - 3.1415927;
        }
      }
    }
  }
  param_2[1] = fVar7;
  param_2[uVar5 * 2] = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar3 == 0.0) {
    if (fVar4 <= 0.0) {
      if (fVar4 == 0.0) {
        if ((int)fVar3 < 0) {
          fVar6 = 3.1415927;
        }
        else {
          fVar6 = 0.0;
        }
      }
    }
    else {
      fVar6 = 1.5707964;
    }
    goto LAB_14557099d;
  }
  fVar6 = fVar4 / fVar3;
  if (1.0 <= ABS(fVar6)) {
    fVar6 = 1.5707964 - fVar6 / (fVar6 * fVar6 + 0.28);
    if (0.0 <= fVar4) goto LAB_14557099d;
  }
  else {
    fVar6 = fVar6 / (fVar6 * 0.28 * fVar6 + 1.0);
    if (0.0 <= fVar3) goto LAB_14557099d;
    if (0.0 <= fVar4) {
      fVar6 = fVar6 + 3.1415927;
      goto LAB_14557099d;
    }
  }
  fVar6 = fVar6 - 3.1415927;
LAB_14557099d:
  param_2[uVar5 * 2 + 1] = fVar6;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



// FUNCTION 1455709e0 FUN_1455709e0 body=476 status=ok
// SIG undefined FUN_1455709e0(void)

void FUN_1455709e0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_2[1];
  uVar3 = (ulonglong)(*(uint *)(param_1 + 8) >> 1);
  fVar1 = param_2[uVar3 * 2];
  fVar6 = param_2[uVar3 * 2 + 1];
  fVar2 = *param_2;
  FUN_145571210();
  fVar7 = -4.712389;
  if (fVar5 <= 1.5707964) {
    fVar4 = 1.5707964;
  }
  else {
    fVar4 = -4.712389;
  }
  fVar4 = fVar4 + fVar5;
  fVar4 = fVar4 * 1.2732395 - ABS(fVar4) * fVar4 * 0.4052847;
  fVar5 = fVar5 * 1.2732395 - ABS(fVar5) * fVar5 * 0.4052847;
  *param_2 = ((ABS(fVar4) * fVar4 - fVar4) * 0.225 + fVar4) * fVar2;
  param_2[1] = ((ABS(fVar5) * fVar5 - fVar5) * 0.225 + fVar5) * fVar2;
  if (fVar6 <= 1.5707964) {
    fVar7 = 1.5707964;
  }
  fVar7 = fVar7 + fVar6;
  fVar5 = fVar7 * 1.2732395 - ABS(fVar7) * fVar7 * 0.4052847;
  fVar6 = fVar6 * 1.2732395 - ABS(fVar6) * fVar6 * 0.4052847;
  param_2[uVar3 * 2] = ((ABS(fVar5) * fVar5 - fVar5) * 0.225 + fVar5) * fVar1;
  param_2[uVar3 * 2 + 1] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 145570bc0 FUN_145570bc0 body=1616 status=ok
// SIG undefined FUN_145570bc0(void)

void FUN_145570bc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,float param_6,char param_7,longlong param_8)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar18 = 0;
  uVar15 = *(uint *)(param_1 + 8) >> 1;
  uVar25 = 2;
  uVar21 = 0;
  uVar16 = uVar15 + 1;
  if (uVar16 != 0) {
    uVar24 = uVar18;
    if (7 < uVar16) {
      uVar17 = uVar25;
      do {
        uVar19 = (ulonglong)(uVar17 + 1);
        fVar27 = *(float *)(param_3 + uVar19 * 8);
        uVar8 = (ulonglong)(uVar17 - 1);
        fVar29 = *(float *)(param_3 + uVar8 * 8);
        uVar22 = (ulonglong)(uVar17 + 5);
        uVar23 = (ulonglong)(uVar17 + 2);
        fVar30 = *(float *)(param_2 + uVar8 * 8);
        uVar13 = (ulonglong)uVar17;
        fVar31 = *(float *)(param_3 + uVar13 * 8);
        fVar2 = *(float *)(param_2 + uVar19 * 8);
        fVar3 = *(float *)(param_2 + uVar13 * 8);
        *(float *)(param_8 + uVar24 * 8) =
             *(float *)(param_3 + uVar24 * 8) * param_6 +
             *(float *)(param_2 + uVar24 * 8) * (1.0 - param_6);
        uVar26 = (int)uVar24 + 8;
        uVar24 = (ulonglong)uVar26;
        *(float *)(param_8 + uVar8 * 8) = fVar29 * param_6 + fVar30 * (1.0 - param_6);
        *(float *)(param_8 + uVar13 * 8) = fVar31 * param_6 + fVar3 * (1.0 - param_6);
        uVar8 = (ulonglong)(uVar17 + 3);
        *(float *)(param_8 + uVar19 * 8) = fVar27 * param_6 + fVar2 * (1.0 - param_6);
        uVar13 = (ulonglong)(uVar17 + 4);
        fVar27 = *(float *)(param_3 + uVar22 * 8);
        uVar17 = uVar17 + 8;
        fVar29 = *(float *)(param_3 + uVar8 * 8);
        fVar30 = *(float *)(param_3 + uVar13 * 8);
        fVar31 = *(float *)(param_2 + uVar8 * 8);
        fVar2 = *(float *)(param_2 + uVar22 * 8);
        fVar3 = *(float *)(param_2 + uVar13 * 8);
        *(float *)(param_8 + uVar23 * 8) =
             *(float *)(param_3 + uVar23 * 8) * param_6 +
             *(float *)(param_2 + uVar23 * 8) * (1.0 - param_6);
        *(float *)(param_8 + uVar8 * 8) = fVar29 * param_6 + fVar31 * (1.0 - param_6);
        *(float *)(param_8 + uVar13 * 8) = fVar30 * param_6 + fVar3 * (1.0 - param_6);
        *(float *)(param_8 + uVar22 * 8) = fVar27 * param_6 + fVar2 * (1.0 - param_6);
      } while (uVar26 < (uVar16 & 0xfffffff8));
    }
    uVar17 = (uint)uVar24;
    if (uVar17 < uVar16) {
      fVar27 = 1.0 - param_6;
      lVar14 = param_2 - param_3;
      lVar20 = param_8 - param_3;
      if (3 < uVar16 - uVar17) {
        pfVar11 = (float *)(param_3 + 8 + uVar24 * 8);
        uVar26 = ((uVar16 - uVar17) - 4 >> 2) + 1;
        uVar23 = (ulonglong)uVar26;
        uVar17 = uVar17 + uVar26 * 4;
        uVar24 = uVar24 + (ulonglong)uVar26 * 4;
        do {
          *(float *)(lVar20 + -8 + (longlong)pfVar11) =
               fVar27 * *(float *)(lVar14 + -8 + (longlong)pfVar11) + param_6 * pfVar11[-2];
          *(float *)((longlong)pfVar11 + lVar20) =
               fVar27 * *(float *)((longlong)pfVar11 + lVar14) + param_6 * *pfVar11;
          *(float *)(lVar20 + 8 + (longlong)pfVar11) =
               fVar27 * *(float *)(lVar14 + 8 + (longlong)pfVar11) + param_6 * pfVar11[2];
          *(float *)(lVar20 + 0x10 + (longlong)pfVar11) =
               fVar27 * *(float *)(lVar14 + 0x10 + (longlong)pfVar11) + param_6 * pfVar11[4];
          pfVar11 = pfVar11 + 8;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        if (uVar16 <= uVar17) goto LAB_145570e51;
      }
      pfVar11 = (float *)(param_3 + uVar24 * 8);
      uVar24 = (ulonglong)(uVar16 - uVar17);
      do {
        *(float *)((longlong)pfVar11 + lVar20) =
             fVar27 * *(float *)((longlong)pfVar11 + lVar14) + param_6 * *pfVar11;
        pfVar11 = pfVar11 + 2;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_145570e51:
  if (param_7 == '\0') {
LAB_145570eec:
    if (uVar16 == 0) goto LAB_1455711e7;
    if (3 < uVar16) goto LAB_145570efd;
  }
  else {
    if (uVar16 < 4) {
      uVar24 = uVar18;
      if (uVar16 == 0) goto LAB_1455711e7;
LAB_145570ec8:
      puVar9 = (undefined4 *)(param_2 + 4 + uVar24 * 8);
      uVar23 = (ulonglong)(uVar16 - uVar21);
      puVar10 = (undefined4 *)(param_4 + uVar24 * 4);
      do {
        uVar5 = *puVar9;
        puVar9 = puVar9 + 2;
        *puVar10 = uVar5;
        puVar10 = puVar10 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      goto LAB_145570eec;
    }
    uVar15 = (uVar15 - 3 >> 2) + 1;
    uVar24 = (ulonglong)uVar15;
    uVar21 = uVar15 * 4;
    puVar9 = (undefined4 *)(param_4 + 8);
    puVar10 = (undefined4 *)(param_2 + 0xc);
    do {
      puVar9[-2] = puVar10[-2];
      puVar9[-1] = *puVar10;
      *puVar9 = puVar10[2];
      puVar9[1] = puVar10[4];
      uVar24 = uVar24 - 1;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 8;
    } while (uVar24 != 0);
    uVar24 = (ulonglong)uVar15 * 4;
    if (uVar21 < uVar16) goto LAB_145570ec8;
LAB_145570efd:
    uVar24 = uVar18;
    do {
      uVar15 = uVar25 + 1;
      uVar23 = (ulonglong)uVar25;
      fVar27 = *(float *)(param_3 + 4 + (ulonglong)uVar15 * 8);
      uVar21 = uVar25 - 1;
      fVar29 = *(float *)(param_3 + 4 + (ulonglong)uVar21 * 8);
      uVar25 = uVar25 + 4;
      fVar30 = *(float *)(param_3 + 4 + uVar23 * 8);
      fVar31 = *(float *)(param_2 + 4 + uVar23 * 8);
      fVar2 = *(float *)(param_2 + 4 + (ulonglong)uVar15 * 8);
      uVar17 = (int)uVar24 + 4;
      uVar18 = (ulonglong)uVar17;
      fVar3 = *(float *)(param_2 + 4 + (ulonglong)uVar21 * 8);
      fVar28 = *(float *)(param_3 + 4 + uVar24 * 8);
      fVar4 = *(float *)(param_2 + 4 + uVar24 * 8);
      puVar9 = (undefined4 *)(param_4 + uVar24 * 4);
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *(undefined4 *)(param_8 + 4 + uVar24 * 8) = *puVar9;
      *(undefined4 *)(param_8 + 4 + (ulonglong)uVar21 * 8) = uVar5;
      *(undefined4 *)(param_8 + 4 + uVar23 * 8) = uVar6;
      *(undefined4 *)(param_8 + 4 + (ulonglong)uVar15 * 8) = uVar7;
      pfVar11 = (float *)(param_4 + uVar24 * 4);
      fVar28 = (fVar28 - fVar4) + *pfVar11;
      fVar29 = (fVar29 - fVar3) + pfVar11[1];
      fVar30 = (fVar30 - fVar31) + pfVar11[2];
      fVar31 = (fVar27 - fVar2) + pfVar11[3];
      fVar27 = (float)((uint)(fVar28 - 6.2831855) & -(uint)(3.1415927 <= fVar28) |
                      ~-(uint)(3.1415927 <= fVar28) & (uint)fVar28);
      fVar29 = (float)((uint)(fVar29 - 6.2831855) & -(uint)(3.1415927 <= fVar29) |
                      ~-(uint)(3.1415927 <= fVar29) & (uint)fVar29);
      fVar30 = (float)((uint)(fVar30 - 6.2831855) & -(uint)(3.1415927 <= fVar30) |
                      ~-(uint)(3.1415927 <= fVar30) & (uint)fVar30);
      fVar31 = (float)((uint)(fVar31 - 6.2831855) & -(uint)(3.1415927 <= fVar31) |
                      ~-(uint)(3.1415927 <= fVar31) & (uint)fVar31);
      puVar1 = (uint *)(param_4 + uVar24 * 4);
      *puVar1 = (uint)(fVar27 + 6.2831855) & -(uint)(fVar27 < -3.1415927) |
                ~-(uint)(fVar27 < -3.1415927) & (uint)fVar27;
      puVar1[1] = (uint)(fVar29 + 6.2831855) & -(uint)(fVar29 < -3.1415927) |
                  ~-(uint)(fVar29 < -3.1415927) & (uint)fVar29;
      puVar1[2] = (uint)(fVar30 + 6.2831855) & -(uint)(fVar30 < -3.1415927) |
                  ~-(uint)(fVar30 < -3.1415927) & (uint)fVar30;
      puVar1[3] = (uint)(fVar31 + 6.2831855) & -(uint)(fVar31 < -3.1415927) |
                  ~-(uint)(fVar31 < -3.1415927) & (uint)fVar31;
      uVar24 = uVar18;
    } while (uVar17 < (uVar16 & 0xfffffffc));
  }
  uVar15 = (uint)uVar18;
  if (uVar15 < uVar16) {
    param_3 = param_3 - param_2;
    param_8 = param_8 - param_2;
    if (3 < uVar16 - uVar15) {
      pfVar11 = (float *)(param_4 + 8 + uVar18 * 4);
      pfVar12 = (float *)(param_2 + 4 + uVar18 * 8);
      uVar21 = ((uVar16 - uVar15) - 4 >> 2) + 1;
      uVar24 = (ulonglong)uVar21;
      uVar15 = uVar15 + uVar21 * 4;
      uVar18 = uVar18 + (ulonglong)uVar21 * 4;
      do {
        fVar27 = *(float *)((longlong)pfVar12 + param_3);
        fVar29 = *pfVar12;
        *(float *)((longlong)pfVar12 + param_8) = pfVar11[-2];
        fVar27 = (fVar27 - fVar29) + pfVar11[-2];
        pfVar11[-2] = fVar27;
        if (3.1415927 <= fVar27) {
          fVar27 = fVar27 + -6.2831855;
          pfVar11[-2] = fVar27;
        }
        if (fVar27 < -3.1415927) {
          pfVar11[-2] = fVar27 + 6.2831855;
        }
        fVar27 = *(float *)(param_3 + 8 + (longlong)pfVar12);
        fVar29 = pfVar12[2];
        *(float *)(param_8 + 8 + (longlong)pfVar12) = pfVar11[-1];
        fVar27 = (fVar27 - fVar29) + pfVar11[-1];
        pfVar11[-1] = fVar27;
        if (3.1415927 <= fVar27) {
          fVar27 = fVar27 + -6.2831855;
          pfVar11[-1] = fVar27;
        }
        if (fVar27 < -3.1415927) {
          pfVar11[-1] = fVar27 + 6.2831855;
        }
        fVar27 = *(float *)(param_3 + 0x10 + (longlong)pfVar12);
        fVar29 = pfVar12[4];
        *(float *)(param_8 + 0x10 + (longlong)pfVar12) = *pfVar11;
        fVar27 = (fVar27 - fVar29) + *pfVar11;
        *pfVar11 = fVar27;
        if (3.1415927 <= fVar27) {
          fVar27 = fVar27 + -6.2831855;
          *pfVar11 = fVar27;
        }
        if (fVar27 < -3.1415927) {
          *pfVar11 = fVar27 + 6.2831855;
        }
        fVar27 = *(float *)(param_3 + 0x18 + (longlong)pfVar12);
        fVar29 = pfVar12[6];
        *(float *)(param_8 + 0x18 + (longlong)pfVar12) = pfVar11[1];
        fVar27 = (fVar27 - fVar29) + pfVar11[1];
        pfVar11[1] = fVar27;
        if (3.1415927 <= fVar27) {
          fVar27 = fVar27 + -6.2831855;
          pfVar11[1] = fVar27;
        }
        if (fVar27 < -3.1415927) {
          pfVar11[1] = fVar27 + 6.2831855;
        }
        pfVar11 = pfVar11 + 4;
        pfVar12 = pfVar12 + 8;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      if (uVar16 <= uVar15) goto LAB_1455711e7;
    }
    pfVar11 = (float *)(param_2 + 4 + uVar18 * 8);
    uVar24 = (ulonglong)(uVar16 - uVar15);
    pfVar12 = (float *)(param_4 + uVar18 * 4);
    do {
      fVar27 = *(float *)(param_3 + (longlong)pfVar11);
      fVar29 = *pfVar11;
      *(float *)(param_8 + (longlong)pfVar11) = *pfVar12;
      fVar27 = (fVar27 - fVar29) + *pfVar12;
      *pfVar12 = fVar27;
      if (3.1415927 <= fVar27) {
        fVar27 = fVar27 + -6.2831855;
        *pfVar12 = fVar27;
      }
      if (fVar27 < -3.1415927) {
        *pfVar12 = fVar27 + 6.2831855;
      }
      pfVar11 = pfVar11 + 2;
      pfVar12 = pfVar12 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
LAB_1455711e7:
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  return;
}



// FUNCTION 145571210 FUN_145571210 body=666 status=ok
// SIG undefined FUN_145571210(void)

void FUN_145571210(undefined8 param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = param_2 + (uint)(param_3 * 2);
  if (param_2 < pfVar1) {
    if (0x3f < ((ulonglong)(uint)(param_3 * 2) * 4 + 0xf & 0xfffffffffffffff0)) {
      do {
        fVar2 = *param_2;
        fVar3 = param_2[2];
        fVar6 = -param_2[1];
        fVar8 = -param_2[3];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar8 - 1.5707964);
        fVar6 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar7 = -param_2[1] + 0.0;
        fVar8 = fVar8 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar9 = -param_2[3] + 0.0;
        fVar6 = (ABS(fVar6) * -0.4052847 + 1.2732395) * fVar6;
        fVar7 = (ABS(fVar7) * -0.4052847 + 1.2732395) * fVar7;
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        *param_2 = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[1] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar2;
        param_2[2] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar3;
        param_2[3] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        fVar2 = param_2[4];
        fVar3 = param_2[6];
        fVar6 = -param_2[5];
        fVar8 = -param_2[7];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar8 - 1.5707964);
        fVar6 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar7 = -param_2[5] + 0.0;
        fVar8 = fVar8 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar9 = -param_2[7] + 0.0;
        fVar6 = (ABS(fVar6) * -0.4052847 + 1.2732395) * fVar6;
        fVar7 = (ABS(fVar7) * -0.4052847 + 1.2732395) * fVar7;
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        param_2[4] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[5] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar2;
        param_2[6] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar3;
        param_2[7] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        fVar2 = param_2[8];
        fVar3 = param_2[10];
        fVar6 = -param_2[9];
        fVar8 = -param_2[0xb];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar8 - 1.5707964);
        fVar6 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar7 = -param_2[9] + 0.0;
        fVar8 = fVar8 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar9 = -param_2[0xb] + 0.0;
        fVar6 = (ABS(fVar6) * -0.4052847 + 1.2732395) * fVar6;
        fVar7 = (ABS(fVar7) * -0.4052847 + 1.2732395) * fVar7;
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        param_2[8] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[9] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar2;
        param_2[10] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar3;
        param_2[0xb] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        fVar2 = param_2[0xc];
        fVar3 = param_2[0xe];
        fVar6 = -param_2[0xd];
        fVar8 = -param_2[0xf];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar8 - 1.5707964);
        fVar6 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar7 = -param_2[0xd] + 0.0;
        fVar8 = fVar8 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar9 = -param_2[0xf] + 0.0;
        fVar6 = (ABS(fVar6) * -0.4052847 + 1.2732395) * fVar6;
        fVar7 = (ABS(fVar7) * -0.4052847 + 1.2732395) * fVar7;
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        param_2[0xc] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[0xd] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar2;
        param_2[0xe] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar3;
        param_2[0xf] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        param_2 = param_2 + 0x10;
      } while (param_2 < pfVar1 + -0xc);
      if (pfVar1 <= param_2) {
        return;
      }
    }
    do {
      fVar2 = *param_2;
      fVar3 = param_2[2];
      fVar6 = -param_2[1];
      fVar8 = -param_2[3];
      uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
      uVar5 = -(uint)(0.0 <= fVar8 - 1.5707964);
      fVar6 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
      fVar7 = -param_2[1] + 0.0;
      fVar8 = fVar8 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
      fVar9 = -param_2[3] + 0.0;
      fVar6 = (ABS(fVar6) * -0.4052847 + 1.2732395) * fVar6;
      fVar7 = (ABS(fVar7) * -0.4052847 + 1.2732395) * fVar7;
      fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
      fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
      *param_2 = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
      param_2[1] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar2;
      param_2[2] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar3;
      param_2[3] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
      param_2 = param_2 + 4;
    } while (param_2 < pfVar1);
  }
  return;
}



// FUNCTION 1455714b0 FUN_1455714b0 body=469 status=ok
// SIG undefined FUN_1455714b0(void)

void FUN_1455714b0(undefined8 param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  
  pfVar1 = param_2 + (uint)(param_3 * 2);
  for (; param_2 < pfVar1; param_2 = param_2 + 8) {
    fVar2 = param_2[5];
    fVar3 = param_2[7];
    fVar4 = param_2[1];
    fVar5 = param_2[3];
    auVar20._4_4_ = fVar5;
    auVar20._0_4_ = fVar4;
    auVar20._8_4_ = fVar2;
    auVar20._12_4_ = fVar3;
    uVar6 = -(uint)(ABS(*param_2) <= 1e-18);
    uVar7 = -(uint)(ABS(param_2[2]) <= 1e-18);
    uVar8 = -(uint)(ABS(param_2[4]) <= 1e-18);
    uVar11 = -(uint)(ABS(param_2[6]) <= 1e-18);
    auVar22._0_8_ = CONCAT44(uVar7,uVar6) & 0x219392ef219392ef;
    auVar22._8_4_ = uVar8 & 0x219392ef;
    auVar22._12_4_ = uVar11 & 0x219392ef;
    auVar24._0_4_ = ~uVar6 & (uint)*param_2;
    auVar24._4_4_ = ~uVar7 & (uint)param_2[2];
    auVar24._8_4_ = ~uVar8 & (uint)param_2[4];
    auVar24._12_4_ = ~uVar11 & (uint)param_2[6];
    auVar24 = auVar24 | auVar22;
    auVar21 = divps(auVar20,auVar24);
    fVar23 = auVar24._0_4_;
    fVar25 = auVar24._4_4_;
    fVar26 = auVar24._8_4_;
    fVar27 = auVar24._12_4_;
    fVar16 = auVar21._0_4_;
    fVar17 = auVar21._4_4_;
    fVar18 = auVar21._8_4_;
    fVar19 = auVar21._12_4_;
    uVar6 = -(uint)(ABS(fVar16) <= 1.0);
    uVar8 = -(uint)(ABS(fVar17) <= 1.0);
    uVar9 = -(uint)(ABS(fVar18) <= 1.0);
    uVar12 = -(uint)(ABS(fVar19) <= 1.0);
    fVar16 = ((float)(uVar6 & 0x40649249 | ~uVar6 & 0x3e8f5c29) + fVar16 * fVar16) *
             (float)(uVar6 & 0x3e8f5c29 | ~uVar6 & 0xbf800000);
    fVar17 = ((float)(uVar8 & 0x40649249 | ~uVar8 & 0x3e8f5c29) + fVar17 * fVar17) *
             (float)(uVar8 & 0x3e8f5c29 | ~uVar8 & 0xbf800000);
    fVar18 = ((float)(uVar9 & 0x40649249 | ~uVar9 & 0x3e8f5c29) + fVar18 * fVar18) *
             (float)(uVar9 & 0x3e8f5c29 | ~uVar9 & 0xbf800000);
    fVar19 = ((float)(uVar12 & 0x40649249 | ~uVar12 & 0x3e8f5c29) + fVar19 * fVar19) *
             (float)(uVar12 & 0x3e8f5c29 | ~uVar12 & 0xbf800000);
    uVar7 = -(uint)(ABS(fVar16) <= 1e-18);
    uVar11 = -(uint)(ABS(fVar17) <= 1e-18);
    uVar10 = -(uint)(ABS(fVar18) <= 1e-18);
    uVar13 = -(uint)(ABS(fVar19) <= 1e-18);
    auVar15._0_8_ = CONCAT44(uVar11,uVar7) & 0x219392ef219392ef;
    auVar15._8_4_ = uVar10 & 0x219392ef;
    auVar15._12_4_ = uVar13 & 0x219392ef;
    auVar14._0_4_ = ~uVar7 & (uint)fVar16;
    auVar14._4_4_ = ~uVar11 & (uint)fVar17;
    auVar14._8_4_ = ~uVar10 & (uint)fVar18;
    auVar14._12_4_ = ~uVar13 & (uint)fVar19;
    auVar22 = divps(auVar21,auVar14 | auVar15);
    auVar21._4_4_ = fVar5 * fVar5 + fVar25 * fVar25;
    auVar21._0_4_ = fVar4 * fVar4 + fVar23 * fVar23;
    auVar21._8_4_ = fVar2 * fVar2 + fVar26 * fVar26;
    auVar21._12_4_ = fVar3 * fVar3 + fVar27 * fVar27;
    auVar21 = sqrtps(auVar14 | auVar15,auVar21);
    *param_2 = auVar21._0_4_;
    param_2[1] = -((float)(~-(uint)(0.0 <= fVar23) & 0x40490fdb & uVar6 | ~uVar6 & 0x3fc90fdb) *
                   (float)(-(uint)(0.0 <= fVar4) & 0x3f800000 | ~-(uint)(0.0 <= fVar4) & 0xbf800000)
                  + auVar22._0_4_);
    param_2[2] = auVar21._4_4_;
    param_2[3] = -((float)(~-(uint)(0.0 <= fVar25) & 0x40490fdb & uVar8 | ~uVar8 & 0x3fc90fdb) *
                   (float)(-(uint)(0.0 <= fVar5) & 0x3f800000 | ~-(uint)(0.0 <= fVar5) & 0xbf800000)
                  + auVar22._4_4_);
    param_2[4] = auVar21._8_4_;
    param_2[5] = -((float)(~-(uint)(0.0 <= fVar26) & 0x40490fdb & uVar9 | ~uVar9 & 0x3fc90fdb) *
                   (float)(-(uint)(0.0 <= fVar2) & 0x3f800000 | ~-(uint)(0.0 <= fVar2) & 0xbf800000)
                  + auVar22._8_4_);
    param_2[6] = auVar21._12_4_;
    param_2[7] = -((float)(~-(uint)(0.0 <= fVar27) & 0x40490fdb & uVar12 | ~uVar12 & 0x3fc90fdb) *
                   (float)(-(uint)(0.0 <= fVar3) & 0x3f800000 | ~-(uint)(0.0 <= fVar3) & 0xbf800000)
                  + auVar22._12_4_);
  }
  return;
}



// FUNCTION 145571690 FUN_145571690 body=49 status=ok
// SIG undefined FUN_145571690(void)

ulonglong FUN_145571690(uint *param_1,uint param_2)

{
  FUN_14556f5a0();
  param_1[3] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = param_2 % *param_1;
  return (ulonglong)param_2 / (ulonglong)*param_1;
}



// FUNCTION 1455716d0 FUN_1455716d0 body=350 status=ok
// SIG undefined FUN_1455716d0(void)

uint FUN_1455716d0(uint *param_1,float *param_2,uint param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *(longlong *)(param_1 + 4);
  uVar2 = param_3;
  if (*param_1 - param_1[3] < param_3) {
    uVar2 = *param_1 - param_1[3];
  }
  uVar8 = 0;
  if (uVar2 != 0) {
    fVar9 = (float)param_1[7];
    uVar6 = 0;
    uVar7 = param_1[1];
    while( true ) {
      uVar4 = (uint)fVar9;
      if (0.0 <= fVar9) {
        uVar3 = param_3 & 0xffff;
        uVar5 = uVar4 & 0xffff;
        if ((int)(uVar3 - 1) <= (int)uVar5) {
          if ((int)uVar5 <= (int)(uVar3 - 1)) {
            uVar3 = uVar5 + 1;
            param_1[6] = (uint)param_2[uVar4 & 0xffff];
          }
          uVar8 = param_3 & 0xffff;
          goto LAB_1455717ed;
        }
        fVar11 = param_2[(ulonglong)uVar5 + 1];
        fVar12 = param_2[uVar4 & 0xffff];
      }
      else {
        fVar12 = (float)param_1[6];
        fVar11 = *param_2;
      }
      if (uVar6 == uVar2) break;
      if (fVar9 < 0.0) {
        fVar10 = fVar9 + 1.0;
      }
      else {
        fVar10 = fVar9 - (float)((longlong)fVar9 & 0xffffffff);
      }
      fVar9 = fVar9 + param_4;
      uVar6 = uVar6 + 1;
      *(float *)(lVar1 + (ulonglong)uVar7 * 4) = fVar10 * (fVar11 - fVar12) + fVar12;
      uVar4 = uVar7 + 1;
      uVar7 = 0;
      if (uVar4 != *param_1) {
        uVar7 = uVar4;
      }
    }
    param_1[6] = (uint)fVar12;
    if (0.0 < fVar9) {
      uVar8 = uVar4 + 1;
      uVar3 = (uVar4 & 0xffff) + 1;
LAB_1455717ed:
      fVar9 = fVar9 - (float)uVar3;
    }
    param_1[3] = param_1[3] + (uint)uVar6;
    param_1[7] = (uint)fVar9;
    param_1[1] = uVar7;
    uVar8 = uVar8 & 0xffff;
  }
  return uVar8;
}



// FUNCTION 145571830 FUN_145571830 body=244 status=ok
// SIG undefined FUN_145571830(void)

undefined8
FUN_145571830(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,undefined4 param_5,
             undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = FUN_1453bcf40();
  if ((int)uVar1 == 1) {
    if (param_3 != 0) {
      lVar2 = (**(code **)(*param_2 + 8))
                        (param_2,(ulonglong)param_3 << 5,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\AkResamplingPhaseVocoder.cpp"
                         ,0x21,param_5,param_6);
      *(longlong *)(param_1 + 0x38) = lVar2;
      if (lVar2 == 0) {
        return 0x34;
      }
    }
    uVar4 = 0;
    uVar6 = uVar4;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        puVar3 = (undefined8 *)(uVar6 * 0x20 + *(longlong *)(param_1 + 0x38));
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[3] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
      if (*(uint *)(param_1 + 0x20) != 0) {
        do {
          uVar1 = FUN_14556f500(uVar4 * 0x20 + *(longlong *)(param_1 + 0x38),param_2,
                                (*(uint *)(param_1 + 0x28) >> 2) + *(int *)(param_1 + 0x28));
          if ((int)uVar1 != 1) {
            return uVar1;
          }
          uVar5 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x20));
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 145571930 FUN_145571930 body=107 status=ok
// SIG undefined FUN_145571930(void)

void FUN_145571930(longlong param_1,longlong *param_2)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        FUN_14556f560((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x38),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_1453bd010(param_1,param_2);
  return;
}



// FUNCTION 1455719a0 FUN_1455719a0 body=88 status=ok
// SIG undefined FUN_1455719a0(void)

void FUN_1455719a0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1453bd070();
    uVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        FUN_145571690((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 0x38),param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 145571a00 FUN_145571a00 body=410 status=ok
// SIG undefined FUN_145571a00(void)

undefined8 FUN_145571a00(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = (param_3 >> 1) + 1;
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)uVar5 << 3,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\FreqWindowPVDR.cpp"
                     ,0x1e);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_2 + 8))
                      (param_2,(ulonglong)uVar5 << 3,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\FreqWindowPVDR.cpp"
                       ,0x22);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      auVar8._0_4_ = (float)param_3 * 0.5;
      if (((int)auVar8._0_4_ != -0x80000000) && ((float)(int)auVar8._0_4_ != auVar8._0_4_)) {
        auVar8._4_4_ = auVar8._0_4_;
        auVar8._8_8_ = 0;
        movmskps((int)lVar1,auVar8);
      }
      uVar2 = 0;
      uVar4 = uVar2;
      if (uVar5 != 0) {
        do {
          uVar6 = FUN_145376c80();
          uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar3 = (int)uVar4 + 1;
          *(uint *)(uVar2 + 4 + *param_1) = (uint)uVar6;
          *(undefined4 *)(uVar2 + *param_1) = uVar7;
          *(uint *)(param_1[1] + -4 + uVar2 + 8) = (uint)uVar6 ^ 0x80000000;
          *(undefined4 *)(uVar2 + param_1[1]) = uVar7;
          uVar2 = uVar2 + 8;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < uVar5);
      }
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 145571ba0 FUN_145571ba0 body=77 status=ok
// SIG undefined FUN_145571ba0(void)

void FUN_145571ba0(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 145571bf0 FUN_145571bf0 body=72 status=ok
// SIG undefined FUN_145571bf0(void)

undefined8 FUN_145571bf0(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar1 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)param_3 << 3,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\FreqWindowPVDR.cpp"
                     ,0x68);
  *param_1 = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 0x34;
  }
  return uVar2;
}



// FUNCTION 145571c40 FUN_145571c40 body=56 status=ok
// SIG undefined FUN_145571c40(void)

void FUN_145571c40(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 145571c80 FUN_145571c80 body=40 status=ok
// SIG undefined FUN_145571c80(void)

void FUN_145571c80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_14556e470(param_2,*param_1,param_5);
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  return;
}



// FUNCTION 145571cb0 FUN_145571cb0 body=72 status=ok
// SIG undefined FUN_145571cb0(void)

void FUN_145571cb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (*(char *)((longlong)param_1 + 0xd) != '\0') {
    FUN_145572770(param_1,*param_1);
  }
  FUN_14556e490(*param_1,param_2,param_5,param_4);
  return;
}



// FUNCTION 145571d00 FUN_145571d00 body=8 status=ok
// SIG undefined FUN_145571d00(void)

void FUN_145571d00(undefined8 *param_1)

{
  FUN_145572540(param_1,*param_1);
  return;
}



// FUNCTION 145571d10 FUN_145571d10 body=8 status=ok
// SIG undefined FUN_145571d10(void)

void FUN_145571d10(undefined8 *param_1)

{
  FUN_145572770(param_1,*param_1);
  return;
}



// FUNCTION 145571d20 FUN_145571d20 body=86 status=ok
// SIG undefined FUN_145571d20(void)

void FUN_145571d20(longlong *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  
  pfVar8 = (float *)*param_1;
  pfVar9 = (float *)*param_2;
  pfVar1 = pfVar8 + (ulonglong)(*(uint *)(param_1 + 1) >> 1) * 2;
  for (; pfVar8 < pfVar1; pfVar8 = pfVar8 + 4) {
    fVar2 = *pfVar8;
    fVar3 = pfVar8[2];
    fVar4 = *pfVar9;
    fVar5 = pfVar9[1];
    fVar6 = pfVar9[2];
    fVar7 = pfVar9[3];
    pfVar9 = pfVar9 + 4;
    *pfVar8 = -pfVar8[1] * fVar5 + fVar2 * fVar4;
    pfVar8[1] = pfVar8[1] * fVar4 + fVar2 * fVar5;
    pfVar8[2] = -pfVar8[3] * fVar7 + fVar3 * fVar6;
    pfVar8[3] = pfVar8[3] * fVar6 + fVar3 * fVar7;
  }
  return;
}



// FUNCTION 145571d80 FUN_145571d80 body=86 status=ok
// SIG undefined FUN_145571d80(void)

void FUN_145571d80(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  
  pfVar8 = (float *)*param_1;
  pfVar9 = *(float **)(param_2 + 8);
  pfVar1 = pfVar8 + (ulonglong)(*(uint *)(param_1 + 1) >> 1) * 2;
  for (; pfVar8 < pfVar1; pfVar8 = pfVar8 + 4) {
    fVar2 = *pfVar8;
    fVar3 = pfVar8[2];
    fVar4 = *pfVar9;
    fVar5 = pfVar9[1];
    fVar6 = pfVar9[2];
    fVar7 = pfVar9[3];
    pfVar9 = pfVar9 + 4;
    *pfVar8 = -pfVar8[1] * fVar5 + fVar2 * fVar4;
    pfVar8[1] = pfVar8[1] * fVar4 + fVar2 * fVar5;
    pfVar8[2] = -pfVar8[3] * fVar7 + fVar3 * fVar6;
    pfVar8[3] = pfVar8[3] * fVar6 + fVar3 * fVar7;
  }
  return;
}



// FUNCTION 145571de0 FUN_145571de0 body=1874 status=ok
// SIG undefined FUN_145571de0(void)

void FUN_145571de0(uint param_1,ulonglong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
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
  
  pfVar18 = (float *)*param_2;
  pfVar19 = (float *)*param_3;
  uVar10 = 0;
  uVar14 = 0;
  uVar11 = (param_1 >> 1) + 1;
  pfVar12 = (float *)*param_4;
  pfVar9 = pfVar18 + (ulonglong)(param_1 >> 1) * 2;
  if (pfVar18 < pfVar9) {
    if (0x3f < ((ulonglong)(param_1 >> 1) * 8 + 0xf & 0xfffffffffffffff0)) {
      uVar14 = (int)((ulonglong)((longlong)(pfVar9 + -0xc) + (-1 - (longlong)pfVar18)) >> 6) * 8 + 8
      ;
      uVar10 = (ulonglong)uVar14;
      do {
        fVar42 = *pfVar19;
        fVar37 = pfVar19[1];
        fVar26 = pfVar19[2];
        fVar46 = pfVar19[3];
        fVar48 = *pfVar18;
        fVar47 = pfVar18[1];
        fVar6 = pfVar18[2];
        fVar7 = pfVar18[3];
        fVar41 = fVar42 + fVar48;
        fVar43 = fVar37 + fVar47;
        fVar44 = fVar26 + fVar6;
        fVar45 = fVar46 + fVar7;
        fVar25 = fVar48 - fVar42;
        fVar33 = fVar47 - fVar37;
        fVar34 = fVar6 - fVar26;
        fVar35 = fVar7 - fVar46;
        fVar36 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar38 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar39 = fVar45 * fVar45 + fVar44 * fVar44;
        fVar40 = fVar45 * fVar45 + fVar44 * fVar44;
        auVar20._0_4_ = fVar25 * fVar25;
        auVar20._4_4_ = fVar25 * fVar25;
        auVar20._8_4_ = fVar34 * fVar34;
        auVar20._12_4_ = fVar34 * fVar34;
        auVar27._0_4_ = fVar33 * fVar33 + auVar20._0_4_;
        auVar27._4_4_ = fVar33 * fVar33 + auVar20._4_4_;
        auVar27._8_4_ = fVar35 * fVar35 + auVar20._8_4_;
        auVar27._12_4_ = fVar35 * fVar35 + auVar20._12_4_;
        auVar28._4_4_ = fVar38;
        auVar28._0_4_ = fVar36;
        auVar28._8_4_ = fVar39;
        auVar28._12_4_ = fVar40;
        auVar28 = divps(auVar27,auVar28);
        auVar28 = sqrtps(auVar20,auVar28);
        fVar41 = (float)((uint)(0.5 - auVar28._0_4_ * 0.5) & -(uint)(1e-38 < fVar36)) * fVar41;
        fVar43 = (float)((uint)(0.5 - auVar28._4_4_ * 0.5) & -(uint)(1e-38 < fVar38)) * fVar43;
        fVar44 = (float)((uint)(0.5 - auVar28._8_4_ * 0.5) & -(uint)(1e-38 < fVar39)) * fVar44;
        fVar45 = (float)((uint)(0.5 - auVar28._12_4_ * 0.5) & -(uint)(1e-38 < fVar40)) * fVar45;
        *pfVar12 = fVar41;
        pfVar12[1] = fVar43;
        pfVar12[2] = fVar44;
        pfVar12[3] = fVar45;
        *pfVar18 = fVar48 - fVar41;
        pfVar18[1] = fVar47 - fVar43;
        pfVar18[2] = fVar6 - fVar44;
        pfVar18[3] = fVar7 - fVar45;
        *pfVar19 = fVar42 - fVar41;
        pfVar19[1] = fVar37 - fVar43;
        pfVar19[2] = fVar26 - fVar44;
        pfVar19[3] = fVar46 - fVar45;
        fVar42 = pfVar19[4];
        fVar37 = pfVar19[5];
        fVar26 = pfVar19[6];
        fVar46 = pfVar19[7];
        fVar48 = pfVar18[4];
        fVar47 = pfVar18[5];
        fVar6 = pfVar18[6];
        fVar7 = pfVar18[7];
        fVar41 = fVar42 + fVar48;
        fVar43 = fVar37 + fVar47;
        fVar44 = fVar26 + fVar6;
        fVar45 = fVar46 + fVar7;
        fVar25 = fVar48 - fVar42;
        fVar33 = fVar47 - fVar37;
        fVar34 = fVar6 - fVar26;
        fVar35 = fVar7 - fVar46;
        fVar36 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar38 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar39 = fVar45 * fVar45 + fVar44 * fVar44;
        fVar40 = fVar45 * fVar45 + fVar44 * fVar44;
        auVar21._0_4_ = fVar25 * fVar25;
        auVar21._4_4_ = fVar25 * fVar25;
        auVar21._8_4_ = fVar34 * fVar34;
        auVar21._12_4_ = fVar34 * fVar34;
        auVar29._0_4_ = fVar33 * fVar33 + auVar21._0_4_;
        auVar29._4_4_ = fVar33 * fVar33 + auVar21._4_4_;
        auVar29._8_4_ = fVar35 * fVar35 + auVar21._8_4_;
        auVar29._12_4_ = fVar35 * fVar35 + auVar21._12_4_;
        auVar2._4_4_ = fVar38;
        auVar2._0_4_ = fVar36;
        auVar2._8_4_ = fVar39;
        auVar2._12_4_ = fVar40;
        auVar28 = divps(auVar29,auVar2);
        auVar28 = sqrtps(auVar21,auVar28);
        fVar41 = (float)((uint)(0.5 - auVar28._0_4_ * 0.5) & -(uint)(1e-38 < fVar36)) * fVar41;
        fVar43 = (float)((uint)(0.5 - auVar28._4_4_ * 0.5) & -(uint)(1e-38 < fVar38)) * fVar43;
        fVar44 = (float)((uint)(0.5 - auVar28._8_4_ * 0.5) & -(uint)(1e-38 < fVar39)) * fVar44;
        fVar45 = (float)((uint)(0.5 - auVar28._12_4_ * 0.5) & -(uint)(1e-38 < fVar40)) * fVar45;
        pfVar12[4] = fVar41;
        pfVar12[5] = fVar43;
        pfVar12[6] = fVar44;
        pfVar12[7] = fVar45;
        pfVar18[4] = fVar48 - fVar41;
        pfVar18[5] = fVar47 - fVar43;
        pfVar18[6] = fVar6 - fVar44;
        pfVar18[7] = fVar7 - fVar45;
        pfVar19[4] = fVar42 - fVar41;
        pfVar19[5] = fVar37 - fVar43;
        pfVar19[6] = fVar26 - fVar44;
        pfVar19[7] = fVar46 - fVar45;
        fVar42 = pfVar19[8];
        fVar37 = pfVar19[9];
        fVar26 = pfVar19[10];
        fVar46 = pfVar19[0xb];
        fVar48 = pfVar18[8];
        fVar47 = pfVar18[9];
        fVar6 = pfVar18[10];
        fVar7 = pfVar18[0xb];
        fVar41 = fVar42 + fVar48;
        fVar43 = fVar37 + fVar47;
        fVar44 = fVar26 + fVar6;
        fVar45 = fVar46 + fVar7;
        fVar25 = fVar48 - fVar42;
        fVar33 = fVar47 - fVar37;
        fVar34 = fVar6 - fVar26;
        fVar35 = fVar7 - fVar46;
        fVar36 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar38 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar39 = fVar45 * fVar45 + fVar44 * fVar44;
        fVar40 = fVar45 * fVar45 + fVar44 * fVar44;
        auVar22._0_4_ = fVar25 * fVar25;
        auVar22._4_4_ = fVar25 * fVar25;
        auVar22._8_4_ = fVar34 * fVar34;
        auVar22._12_4_ = fVar34 * fVar34;
        auVar30._0_4_ = fVar33 * fVar33 + auVar22._0_4_;
        auVar30._4_4_ = fVar33 * fVar33 + auVar22._4_4_;
        auVar30._8_4_ = fVar35 * fVar35 + auVar22._8_4_;
        auVar30._12_4_ = fVar35 * fVar35 + auVar22._12_4_;
        auVar3._4_4_ = fVar38;
        auVar3._0_4_ = fVar36;
        auVar3._8_4_ = fVar39;
        auVar3._12_4_ = fVar40;
        auVar28 = divps(auVar30,auVar3);
        auVar28 = sqrtps(auVar22,auVar28);
        fVar41 = (float)((uint)(0.5 - auVar28._0_4_ * 0.5) & -(uint)(1e-38 < fVar36)) * fVar41;
        fVar43 = (float)((uint)(0.5 - auVar28._4_4_ * 0.5) & -(uint)(1e-38 < fVar38)) * fVar43;
        fVar44 = (float)((uint)(0.5 - auVar28._8_4_ * 0.5) & -(uint)(1e-38 < fVar39)) * fVar44;
        fVar45 = (float)((uint)(0.5 - auVar28._12_4_ * 0.5) & -(uint)(1e-38 < fVar40)) * fVar45;
        pfVar12[8] = fVar41;
        pfVar12[9] = fVar43;
        pfVar12[10] = fVar44;
        pfVar12[0xb] = fVar45;
        pfVar18[8] = fVar48 - fVar41;
        pfVar18[9] = fVar47 - fVar43;
        pfVar18[10] = fVar6 - fVar44;
        pfVar18[0xb] = fVar7 - fVar45;
        pfVar19[8] = fVar42 - fVar41;
        pfVar19[9] = fVar37 - fVar43;
        pfVar19[10] = fVar26 - fVar44;
        pfVar19[0xb] = fVar46 - fVar45;
        fVar42 = pfVar19[0xc];
        fVar37 = pfVar19[0xd];
        fVar26 = pfVar19[0xe];
        fVar46 = pfVar19[0xf];
        fVar48 = pfVar18[0xc];
        fVar47 = pfVar18[0xd];
        fVar6 = pfVar18[0xe];
        fVar7 = pfVar18[0xf];
        fVar41 = fVar42 + fVar48;
        fVar43 = fVar37 + fVar47;
        fVar44 = fVar26 + fVar6;
        fVar45 = fVar46 + fVar7;
        fVar25 = fVar48 - fVar42;
        fVar33 = fVar47 - fVar37;
        fVar34 = fVar6 - fVar26;
        fVar35 = fVar7 - fVar46;
        fVar36 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar38 = fVar43 * fVar43 + fVar41 * fVar41;
        fVar39 = fVar45 * fVar45 + fVar44 * fVar44;
        fVar40 = fVar45 * fVar45 + fVar44 * fVar44;
        auVar23._0_4_ = fVar25 * fVar25;
        auVar23._4_4_ = fVar25 * fVar25;
        auVar23._8_4_ = fVar34 * fVar34;
        auVar23._12_4_ = fVar34 * fVar34;
        auVar31._0_4_ = fVar33 * fVar33 + auVar23._0_4_;
        auVar31._4_4_ = fVar33 * fVar33 + auVar23._4_4_;
        auVar31._8_4_ = fVar35 * fVar35 + auVar23._8_4_;
        auVar31._12_4_ = fVar35 * fVar35 + auVar23._12_4_;
        auVar4._4_4_ = fVar38;
        auVar4._0_4_ = fVar36;
        auVar4._8_4_ = fVar39;
        auVar4._12_4_ = fVar40;
        auVar28 = divps(auVar31,auVar4);
        auVar28 = sqrtps(auVar23,auVar28);
        fVar41 = (float)((uint)(0.5 - auVar28._0_4_ * 0.5) & -(uint)(1e-38 < fVar36)) * fVar41;
        fVar43 = (float)((uint)(0.5 - auVar28._4_4_ * 0.5) & -(uint)(1e-38 < fVar38)) * fVar43;
        fVar44 = (float)((uint)(0.5 - auVar28._8_4_ * 0.5) & -(uint)(1e-38 < fVar39)) * fVar44;
        fVar45 = (float)((uint)(0.5 - auVar28._12_4_ * 0.5) & -(uint)(1e-38 < fVar40)) * fVar45;
        pfVar12[0xc] = fVar41;
        pfVar12[0xd] = fVar43;
        pfVar12[0xe] = fVar44;
        pfVar12[0xf] = fVar45;
        pfVar12 = pfVar12 + 0x10;
        pfVar18[0xc] = fVar48 - fVar41;
        pfVar18[0xd] = fVar47 - fVar43;
        pfVar18[0xe] = fVar6 - fVar44;
        pfVar18[0xf] = fVar7 - fVar45;
        pfVar18 = pfVar18 + 0x10;
        pfVar19[0xc] = fVar42 - fVar41;
        pfVar19[0xd] = fVar37 - fVar43;
        pfVar19[0xe] = fVar26 - fVar44;
        pfVar19[0xf] = fVar46 - fVar45;
        pfVar19 = pfVar19 + 0x10;
      } while (pfVar18 < pfVar9 + -0xc);
      if (pfVar9 <= pfVar18) goto LAB_1455720da;
    }
    lVar13 = (longlong)pfVar12 - (longlong)pfVar19;
    uVar10 = (ulonglong)
             (uVar14 + (int)((ulonglong)((longlong)pfVar9 + (-1 - (longlong)pfVar18)) >> 4) * 2 + 2)
    ;
    do {
      fVar42 = *pfVar19;
      fVar37 = pfVar19[1];
      fVar26 = pfVar19[2];
      fVar46 = pfVar19[3];
      fVar48 = *pfVar18;
      fVar47 = pfVar18[1];
      fVar6 = pfVar18[2];
      fVar7 = pfVar18[3];
      fVar41 = fVar42 + fVar48;
      fVar43 = fVar37 + fVar47;
      fVar44 = fVar26 + fVar6;
      fVar45 = fVar46 + fVar7;
      fVar25 = fVar48 - fVar42;
      fVar33 = fVar47 - fVar37;
      fVar34 = fVar6 - fVar26;
      fVar35 = fVar7 - fVar46;
      fVar36 = fVar43 * fVar43 + fVar41 * fVar41;
      fVar38 = fVar43 * fVar43 + fVar41 * fVar41;
      fVar39 = fVar45 * fVar45 + fVar44 * fVar44;
      fVar40 = fVar45 * fVar45 + fVar44 * fVar44;
      auVar24._0_4_ = fVar25 * fVar25;
      auVar24._4_4_ = fVar25 * fVar25;
      auVar24._8_4_ = fVar34 * fVar34;
      auVar24._12_4_ = fVar34 * fVar34;
      auVar32._0_4_ = fVar33 * fVar33 + auVar24._0_4_;
      auVar32._4_4_ = fVar33 * fVar33 + auVar24._4_4_;
      auVar32._8_4_ = fVar35 * fVar35 + auVar24._8_4_;
      auVar32._12_4_ = fVar35 * fVar35 + auVar24._12_4_;
      auVar5._4_4_ = fVar38;
      auVar5._0_4_ = fVar36;
      auVar5._8_4_ = fVar39;
      auVar5._12_4_ = fVar40;
      auVar28 = divps(auVar32,auVar5);
      auVar28 = sqrtps(auVar24,auVar28);
      fVar41 = (float)((uint)(0.5 - auVar28._0_4_ * 0.5) & -(uint)(1e-38 < fVar36)) * fVar41;
      fVar43 = (float)((uint)(0.5 - auVar28._4_4_ * 0.5) & -(uint)(1e-38 < fVar38)) * fVar43;
      fVar44 = (float)((uint)(0.5 - auVar28._8_4_ * 0.5) & -(uint)(1e-38 < fVar39)) * fVar44;
      fVar45 = (float)((uint)(0.5 - auVar28._12_4_ * 0.5) & -(uint)(1e-38 < fVar40)) * fVar45;
      pfVar12 = (float *)((longlong)pfVar19 + lVar13);
      *pfVar12 = fVar41;
      pfVar12[1] = fVar43;
      pfVar12[2] = fVar44;
      pfVar12[3] = fVar45;
      *pfVar18 = fVar48 - fVar41;
      pfVar18[1] = fVar47 - fVar43;
      pfVar18[2] = fVar6 - fVar44;
      pfVar18[3] = fVar7 - fVar45;
      pfVar18 = pfVar18 + 4;
      *pfVar19 = fVar42 - fVar41;
      pfVar19[1] = fVar37 - fVar43;
      pfVar19[2] = fVar26 - fVar44;
      pfVar19[3] = fVar46 - fVar45;
      pfVar19 = pfVar19 + 4;
    } while (pfVar18 < pfVar9);
  }
LAB_1455720da:
  uVar1 = *param_2;
  uVar14 = (uint)uVar10;
  if (uVar14 < uVar11) {
    lVar16 = *param_4 - uVar1;
    lVar13 = *param_3 - uVar1;
    uVar15 = uVar10;
    if (3 < uVar11 - uVar14) {
      pfVar9 = (float *)(uVar1 + 0xc + uVar10 * 8);
      uVar8 = ((uVar11 - uVar14) - 4 >> 2) + 1;
      uVar17 = (ulonglong)uVar8;
      uVar14 = uVar14 + uVar8 * 4;
      uVar15 = (ulonglong)uVar14;
      uVar10 = uVar10 + (ulonglong)uVar8 * 4;
      do {
        fVar42 = *(float *)((longlong)pfVar9 + lVar13 + -0xc);
        fVar46 = 0.0;
        fVar37 = *(float *)((longlong)pfVar9 + lVar13 + -8);
        fVar47 = fVar42 + pfVar9[-3];
        fVar48 = fVar37 + pfVar9[-2];
        fVar37 = pfVar9[-2] - fVar37;
        fVar42 = pfVar9[-3] - fVar42;
        fVar26 = fVar48 * fVar48 + fVar47 * fVar47;
        if (1e-38 < fVar26) {
          fVar46 = 0.5 - SQRT((fVar37 * fVar37 + fVar42 * fVar42) / fVar26) * 0.5;
        }
        fVar48 = fVar46 * fVar48;
        fVar46 = fVar46 * fVar47;
        *(float *)((longlong)pfVar9 + lVar16 + -8) = fVar48;
        *(float *)((longlong)pfVar9 + lVar16 + -0xc) = fVar46;
        pfVar9[-2] = pfVar9[-2] - fVar48;
        pfVar9[-3] = pfVar9[-3] - fVar46;
        fVar47 = 0.0;
        *(float *)((longlong)pfVar9 + lVar13 + -8) =
             *(float *)((longlong)pfVar9 + lVar13 + -8) - fVar48;
        *(float *)((longlong)pfVar9 + lVar13 + -0xc) =
             *(float *)((longlong)pfVar9 + lVar13 + -0xc) - fVar46;
        fVar42 = *(float *)((longlong)pfVar9 + lVar13 + -4);
        fVar48 = fVar42 + pfVar9[-1];
        fVar46 = *(float *)(lVar13 + (longlong)pfVar9) + *pfVar9;
        fVar26 = *pfVar9 - *(float *)(lVar13 + (longlong)pfVar9);
        fVar42 = pfVar9[-1] - fVar42;
        fVar37 = fVar46 * fVar46 + fVar48 * fVar48;
        if (1e-38 < fVar37) {
          fVar47 = 0.5 - SQRT((fVar26 * fVar26 + fVar42 * fVar42) / fVar37) * 0.5;
        }
        fVar46 = fVar47 * fVar46;
        fVar47 = fVar47 * fVar48;
        *(float *)(lVar16 + (longlong)pfVar9) = fVar46;
        *(float *)((longlong)pfVar9 + lVar16 + -4) = fVar47;
        *pfVar9 = *pfVar9 - fVar46;
        pfVar9[-1] = pfVar9[-1] - fVar47;
        fVar48 = 0.0;
        *(float *)(lVar13 + (longlong)pfVar9) = *(float *)(lVar13 + (longlong)pfVar9) - fVar46;
        *(float *)((longlong)pfVar9 + lVar13 + -4) =
             *(float *)((longlong)pfVar9 + lVar13 + -4) - fVar47;
        fVar42 = *(float *)((longlong)pfVar9 + lVar13 + 4);
        fVar37 = *(float *)(lVar13 + 8 + (longlong)pfVar9);
        fVar47 = fVar42 + pfVar9[1];
        fVar46 = fVar37 + pfVar9[2];
        fVar37 = pfVar9[2] - fVar37;
        fVar42 = pfVar9[1] - fVar42;
        fVar26 = fVar46 * fVar46 + fVar47 * fVar47;
        if (1e-38 < fVar26) {
          fVar48 = 0.5 - SQRT((fVar37 * fVar37 + fVar42 * fVar42) / fVar26) * 0.5;
        }
        fVar46 = fVar48 * fVar46;
        fVar48 = fVar48 * fVar47;
        *(float *)(lVar16 + 8 + (longlong)pfVar9) = fVar46;
        *(float *)((longlong)pfVar9 + lVar16 + 4) = fVar48;
        pfVar9[2] = pfVar9[2] - fVar46;
        pfVar9[1] = pfVar9[1] - fVar48;
        fVar47 = 0.0;
        *(float *)(lVar13 + 8 + (longlong)pfVar9) =
             *(float *)(lVar13 + 8 + (longlong)pfVar9) - fVar46;
        *(float *)((longlong)pfVar9 + lVar13 + 4) =
             *(float *)((longlong)pfVar9 + lVar13 + 4) - fVar48;
        fVar42 = *(float *)((longlong)pfVar9 + lVar13 + 0xc);
        fVar37 = *(float *)(lVar13 + 0x10 + (longlong)pfVar9);
        fVar48 = fVar42 + pfVar9[3];
        fVar46 = fVar37 + pfVar9[4];
        fVar37 = pfVar9[4] - fVar37;
        fVar42 = pfVar9[3] - fVar42;
        fVar26 = fVar46 * fVar46 + fVar48 * fVar48;
        if (1e-38 < fVar26) {
          fVar47 = 0.5 - SQRT((fVar37 * fVar37 + fVar42 * fVar42) / fVar26) * 0.5;
        }
        fVar46 = fVar47 * fVar46;
        fVar47 = fVar47 * fVar48;
        *(float *)(lVar16 + 0x10 + (longlong)pfVar9) = fVar46;
        *(float *)((longlong)pfVar9 + lVar16 + 0xc) = fVar47;
        pfVar9[4] = pfVar9[4] - fVar46;
        pfVar9[3] = pfVar9[3] - fVar47;
        *(float *)(lVar13 + 0x10 + (longlong)pfVar9) =
             *(float *)(lVar13 + 0x10 + (longlong)pfVar9) - fVar46;
        *(float *)((longlong)pfVar9 + lVar13 + 0xc) =
             *(float *)((longlong)pfVar9 + lVar13 + 0xc) - fVar47;
        pfVar9 = pfVar9 + 8;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if (uVar11 <= uVar14) {
        return;
      }
    }
    pfVar9 = (float *)(uVar1 + 4 + uVar10 * 8);
    uVar10 = (ulonglong)(uVar11 - (int)uVar15);
    do {
      fVar42 = *(float *)((longlong)pfVar9 + lVar13 + -4);
      fVar46 = 0.0;
      fVar47 = fVar42 + pfVar9[-1];
      fVar48 = *(float *)(lVar13 + (longlong)pfVar9) + *pfVar9;
      fVar26 = *pfVar9 - *(float *)(lVar13 + (longlong)pfVar9);
      fVar42 = pfVar9[-1] - fVar42;
      fVar37 = fVar48 * fVar48 + fVar47 * fVar47;
      if (1e-38 < fVar37) {
        fVar46 = 0.5 - SQRT((fVar26 * fVar26 + fVar42 * fVar42) / fVar37) * 0.5;
      }
      fVar48 = fVar46 * fVar48;
      fVar46 = fVar46 * fVar47;
      *(float *)(lVar16 + (longlong)pfVar9) = fVar48;
      *(float *)((longlong)pfVar9 + lVar16 + -4) = fVar46;
      *pfVar9 = *pfVar9 - fVar48;
      pfVar9[-1] = pfVar9[-1] - fVar46;
      *(float *)((longlong)pfVar9 + lVar13 + -4) =
           *(float *)((longlong)pfVar9 + lVar13 + -4) - fVar46;
      *(float *)(lVar13 + (longlong)pfVar9) = *(float *)(lVar13 + (longlong)pfVar9) - fVar48;
      pfVar9 = pfVar9 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 145572540 FUN_145572540 body=559 status=ok
// SIG undefined FUN_145572540(void)

void FUN_145572540(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_2[1];
  uVar5 = (ulonglong)(*(uint *)(param_1 + 8) >> 1);
  fVar2 = *param_2;
  fVar3 = param_2[uVar5 * 2];
  fVar4 = param_2[uVar5 * 2 + 1];
  FUN_145572be0();
  fVar6 = -1.5707964;
  *param_2 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar2 == 0.0) {
    if (fVar1 <= 0.0) {
      if (fVar1 == 0.0) {
        if ((int)fVar2 < 0) {
          fVar7 = 3.1415927;
        }
        else {
          fVar7 = 0.0;
        }
      }
      else {
        fVar7 = -1.5707964;
      }
    }
    else {
      fVar7 = 1.5707964;
    }
  }
  else {
    fVar7 = fVar1 / fVar2;
    if (1.0 <= ABS(fVar7)) {
      fVar7 = 1.5707964 - fVar7 / (fVar7 * fVar7 + 0.28);
      if (fVar1 < 0.0) {
        fVar7 = fVar7 - 3.1415927;
      }
    }
    else {
      fVar7 = fVar7 / (fVar7 * 0.28 * fVar7 + 1.0);
      if (fVar2 < 0.0) {
        if (0.0 <= fVar1) {
          fVar7 = fVar7 + 3.1415927;
        }
        else {
          fVar7 = fVar7 - 3.1415927;
        }
      }
    }
  }
  param_2[1] = fVar7;
  param_2[uVar5 * 2] = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar3 == 0.0) {
    if (fVar4 <= 0.0) {
      if (fVar4 == 0.0) {
        if ((int)fVar3 < 0) {
          fVar6 = 3.1415927;
        }
        else {
          fVar6 = 0.0;
        }
      }
    }
    else {
      fVar6 = 1.5707964;
    }
    goto LAB_14557272d;
  }
  fVar6 = fVar4 / fVar3;
  if (1.0 <= ABS(fVar6)) {
    fVar6 = 1.5707964 - fVar6 / (fVar6 * fVar6 + 0.28);
    if (0.0 <= fVar4) goto LAB_14557272d;
  }
  else {
    fVar6 = fVar6 / (fVar6 * 0.28 * fVar6 + 1.0);
    if (0.0 <= fVar3) goto LAB_14557272d;
    if (0.0 <= fVar4) {
      fVar6 = fVar6 + 3.1415927;
      goto LAB_14557272d;
    }
  }
  fVar6 = fVar6 - 3.1415927;
LAB_14557272d:
  param_2[uVar5 * 2 + 1] = fVar6;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



// FUNCTION 145572770 FUN_145572770 body=476 status=ok
// SIG undefined FUN_145572770(void)

void FUN_145572770(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_2[1];
  uVar3 = (ulonglong)(*(uint *)(param_1 + 8) >> 1);
  fVar1 = param_2[uVar3 * 2];
  fVar6 = param_2[uVar3 * 2 + 1];
  fVar2 = *param_2;
  FUN_145572950();
  fVar7 = -4.712389;
  if (fVar5 <= 1.5707964) {
    fVar4 = 1.5707964;
  }
  else {
    fVar4 = -4.712389;
  }
  fVar4 = fVar4 + fVar5;
  fVar4 = fVar4 * 1.2732395 - ABS(fVar4) * fVar4 * 0.4052847;
  fVar5 = fVar5 * 1.2732395 - ABS(fVar5) * fVar5 * 0.4052847;
  *param_2 = ((ABS(fVar4) * fVar4 - fVar4) * 0.225 + fVar4) * fVar2;
  param_2[1] = ((ABS(fVar5) * fVar5 - fVar5) * 0.225 + fVar5) * fVar2;
  if (fVar6 <= 1.5707964) {
    fVar7 = 1.5707964;
  }
  fVar7 = fVar7 + fVar6;
  fVar5 = fVar7 * 1.2732395 - ABS(fVar7) * fVar7 * 0.4052847;
  fVar6 = fVar6 * 1.2732395 - ABS(fVar6) * fVar6 * 0.4052847;
  param_2[uVar3 * 2] = ((ABS(fVar5) * fVar5 - fVar5) * 0.225 + fVar5) * fVar1;
  param_2[uVar3 * 2 + 1] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 145572950 FUN_145572950 body=651 status=ok
// SIG undefined FUN_145572950(void)

void FUN_145572950(undefined8 param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = param_2 + (uint)(param_3 * 2);
  if (param_2 < pfVar1) {
    if (0x3f < ((ulonglong)(uint)(param_3 * 2) * 4 + 0xf & 0xfffffffffffffff0)) {
      do {
        fVar2 = *param_2;
        fVar6 = param_2[1];
        fVar3 = param_2[2];
        fVar7 = param_2[3];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar7 - 1.5707964);
        fVar8 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar9 = fVar7 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar6 = (ABS(fVar6 + 0.0) * -0.4052847 + 1.2732395) * (fVar6 + 0.0);
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        fVar7 = (ABS(fVar7 + 0.0) * -0.4052847 + 1.2732395) * (fVar7 + 0.0);
        *param_2 = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar2;
        param_2[1] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[2] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        param_2[3] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar3;
        fVar2 = param_2[4];
        fVar6 = param_2[5];
        fVar3 = param_2[6];
        fVar7 = param_2[7];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar7 - 1.5707964);
        fVar8 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar9 = fVar7 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar6 = (ABS(fVar6 + 0.0) * -0.4052847 + 1.2732395) * (fVar6 + 0.0);
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        fVar7 = (ABS(fVar7 + 0.0) * -0.4052847 + 1.2732395) * (fVar7 + 0.0);
        param_2[4] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar2;
        param_2[5] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[6] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        param_2[7] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar3;
        fVar2 = param_2[8];
        fVar6 = param_2[9];
        fVar3 = param_2[10];
        fVar7 = param_2[0xb];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar7 - 1.5707964);
        fVar8 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar9 = fVar7 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar6 = (ABS(fVar6 + 0.0) * -0.4052847 + 1.2732395) * (fVar6 + 0.0);
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        fVar7 = (ABS(fVar7 + 0.0) * -0.4052847 + 1.2732395) * (fVar7 + 0.0);
        param_2[8] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar2;
        param_2[9] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[10] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        param_2[0xb] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar3;
        fVar2 = param_2[0xc];
        fVar6 = param_2[0xd];
        fVar3 = param_2[0xe];
        fVar7 = param_2[0xf];
        uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
        uVar5 = -(uint)(0.0 <= fVar7 - 1.5707964);
        fVar8 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
        fVar9 = fVar7 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
        fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
        fVar6 = (ABS(fVar6 + 0.0) * -0.4052847 + 1.2732395) * (fVar6 + 0.0);
        fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
        fVar7 = (ABS(fVar7 + 0.0) * -0.4052847 + 1.2732395) * (fVar7 + 0.0);
        param_2[0xc] = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar2;
        param_2[0xd] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
        param_2[0xe] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
        param_2[0xf] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar3;
        param_2 = param_2 + 0x10;
      } while (param_2 < pfVar1 + -0xc);
      if (pfVar1 <= param_2) {
        return;
      }
    }
    do {
      fVar2 = *param_2;
      fVar6 = param_2[1];
      fVar3 = param_2[2];
      fVar7 = param_2[3];
      uVar4 = -(uint)(0.0 <= fVar6 - 1.5707964);
      uVar5 = -(uint)(0.0 <= fVar7 - 1.5707964);
      fVar8 = fVar6 + (float)(uVar4 & 0xc096cbe4 | ~uVar4 & 0x3fc90fdb);
      fVar9 = fVar7 + (float)(uVar5 & 0xc096cbe4 | ~uVar5 & 0x3fc90fdb);
      fVar8 = (ABS(fVar8) * -0.4052847 + 1.2732395) * fVar8;
      fVar6 = (ABS(fVar6 + 0.0) * -0.4052847 + 1.2732395) * (fVar6 + 0.0);
      fVar9 = (ABS(fVar9) * -0.4052847 + 1.2732395) * fVar9;
      fVar7 = (ABS(fVar7 + 0.0) * -0.4052847 + 1.2732395) * (fVar7 + 0.0);
      *param_2 = ((ABS(fVar8) * fVar8 - fVar8) * 0.225 + fVar8) * fVar2;
      param_2[1] = ((ABS(fVar6) * fVar6 - fVar6) * 0.225 + fVar6) * fVar2;
      param_2[2] = ((ABS(fVar9) * fVar9 - fVar9) * 0.225 + fVar9) * fVar3;
      param_2[3] = ((ABS(fVar7) * fVar7 - fVar7) * 0.225 + fVar7) * fVar3;
      param_2 = param_2 + 4;
    } while (param_2 < pfVar1);
  }
  return;
}



// FUNCTION 145572be0 FUN_145572be0 body=465 status=ok
// SIG undefined FUN_145572be0(void)

void FUN_145572be0(undefined8 param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  
  pfVar1 = param_2 + (uint)(param_3 * 2);
  for (; param_2 < pfVar1; param_2 = param_2 + 8) {
    fVar2 = param_2[5];
    fVar3 = param_2[7];
    fVar4 = param_2[1];
    fVar5 = param_2[3];
    auVar20._4_4_ = fVar5;
    auVar20._0_4_ = fVar4;
    auVar20._8_4_ = fVar2;
    auVar20._12_4_ = fVar3;
    uVar6 = -(uint)(ABS(*param_2) <= 1e-18);
    uVar7 = -(uint)(ABS(param_2[2]) <= 1e-18);
    uVar8 = -(uint)(ABS(param_2[4]) <= 1e-18);
    uVar11 = -(uint)(ABS(param_2[6]) <= 1e-18);
    auVar22._0_8_ = CONCAT44(uVar7,uVar6) & 0x219392ef219392ef;
    auVar22._8_4_ = uVar8 & 0x219392ef;
    auVar22._12_4_ = uVar11 & 0x219392ef;
    auVar24._0_4_ = ~uVar6 & (uint)*param_2;
    auVar24._4_4_ = ~uVar7 & (uint)param_2[2];
    auVar24._8_4_ = ~uVar8 & (uint)param_2[4];
    auVar24._12_4_ = ~uVar11 & (uint)param_2[6];
    auVar24 = auVar24 | auVar22;
    auVar21 = divps(auVar20,auVar24);
    fVar23 = auVar24._0_4_;
    fVar25 = auVar24._4_4_;
    fVar26 = auVar24._8_4_;
    fVar27 = auVar24._12_4_;
    fVar16 = auVar21._0_4_;
    fVar17 = auVar21._4_4_;
    fVar18 = auVar21._8_4_;
    fVar19 = auVar21._12_4_;
    uVar6 = -(uint)(ABS(fVar16) <= 1.0);
    uVar8 = -(uint)(ABS(fVar17) <= 1.0);
    uVar9 = -(uint)(ABS(fVar18) <= 1.0);
    uVar12 = -(uint)(ABS(fVar19) <= 1.0);
    fVar16 = ((float)(uVar6 & 0x40649249 | ~uVar6 & 0x3e8f5c29) + fVar16 * fVar16) *
             (float)(uVar6 & 0x3e8f5c29 | ~uVar6 & 0xbf800000);
    fVar17 = ((float)(uVar8 & 0x40649249 | ~uVar8 & 0x3e8f5c29) + fVar17 * fVar17) *
             (float)(uVar8 & 0x3e8f5c29 | ~uVar8 & 0xbf800000);
    fVar18 = ((float)(uVar9 & 0x40649249 | ~uVar9 & 0x3e8f5c29) + fVar18 * fVar18) *
             (float)(uVar9 & 0x3e8f5c29 | ~uVar9 & 0xbf800000);
    fVar19 = ((float)(uVar12 & 0x40649249 | ~uVar12 & 0x3e8f5c29) + fVar19 * fVar19) *
             (float)(uVar12 & 0x3e8f5c29 | ~uVar12 & 0xbf800000);
    uVar7 = -(uint)(ABS(fVar16) <= 1e-18);
    uVar11 = -(uint)(ABS(fVar17) <= 1e-18);
    uVar10 = -(uint)(ABS(fVar18) <= 1e-18);
    uVar13 = -(uint)(ABS(fVar19) <= 1e-18);
    auVar14._0_4_ = ~uVar7 & (uint)fVar16;
    auVar14._4_4_ = ~uVar11 & (uint)fVar17;
    auVar14._8_4_ = ~uVar10 & (uint)fVar18;
    auVar14._12_4_ = ~uVar13 & (uint)fVar19;
    auVar15._0_8_ = CONCAT44(uVar11,uVar7) & 0x219392ef219392ef;
    auVar15._8_4_ = uVar10 & 0x219392ef;
    auVar15._12_4_ = uVar13 & 0x219392ef;
    auVar22 = divps(auVar21,auVar14 | auVar15);
    auVar21._4_4_ = fVar5 * fVar5 + fVar25 * fVar25;
    auVar21._0_4_ = fVar4 * fVar4 + fVar23 * fVar23;
    auVar21._8_4_ = fVar2 * fVar2 + fVar26 * fVar26;
    auVar21._12_4_ = fVar3 * fVar3 + fVar27 * fVar27;
    auVar21 = sqrtps(auVar14 | auVar15,auVar21);
    *param_2 = auVar21._0_4_;
    param_2[1] = (float)(~-(uint)(0.0 <= fVar23) & 0x40490fdb & uVar6 | ~uVar6 & 0x3fc90fdb) *
                 (float)(-(uint)(0.0 <= fVar4) & 0x3f800000 | ~-(uint)(0.0 <= fVar4) & 0xbf800000) +
                 auVar22._0_4_;
    param_2[2] = auVar21._4_4_;
    param_2[3] = (float)(~-(uint)(0.0 <= fVar25) & 0x40490fdb & uVar8 | ~uVar8 & 0x3fc90fdb) *
                 (float)(-(uint)(0.0 <= fVar5) & 0x3f800000 | ~-(uint)(0.0 <= fVar5) & 0xbf800000) +
                 auVar22._4_4_;
    param_2[4] = auVar21._8_4_;
    param_2[5] = (float)(~-(uint)(0.0 <= fVar26) & 0x40490fdb & uVar9 | ~uVar9 & 0x3fc90fdb) *
                 (float)(-(uint)(0.0 <= fVar2) & 0x3f800000 | ~-(uint)(0.0 <= fVar2) & 0xbf800000) +
                 auVar22._8_4_;
    param_2[6] = auVar21._12_4_;
    param_2[7] = (float)(~-(uint)(0.0 <= fVar27) & 0x40490fdb & uVar12 | ~uVar12 & 0x3fc90fdb) *
                 (float)(-(uint)(0.0 <= fVar3) & 0x3f800000 | ~-(uint)(0.0 <= fVar3) & 0xbf800000) +
                 auVar22._12_4_;
  }
  return;
}



// FUNCTION 145572dc0 FUN_145572dc0 body=219 status=ok
// SIG undefined FUN_145572dc0(void)

undefined4 FUN_145572dc0(longlong *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 1) = param_3;
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,(ulonglong)param_3 << 3,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\Plugins\\Common\\FreqWindowPVDR.cpp"
                     ,0x68);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    return 0x34;
  }
  param_1[2] = (longlong)param_2;
  uVar3 = (*(uint *)(param_1 + 1) >> 1) + 1;
  param_1[5] = (longlong)param_2;
  if ((*(uint *)((longlong)param_1 + 0x24) < uVar3) &&
     (cVar1 = FUN_145574b20(param_1 + 2,uVar3 - *(uint *)((longlong)param_1 + 0x24)), cVar1 == '\0')
     ) {
    return 0x34;
  }
  if (*(uint *)((longlong)param_1 + 0x3c) < uVar3) {
    if (*(uint *)((longlong)param_1 + 0x3c) != 0) {
      return 0x1f;
    }
    cVar1 = FUN_145574c80(param_1 + 5,uVar3);
    if (cVar1 == '\0') {
      return 0x34;
    }
  }
  param_1[8] = param_4;
  return 1;
}



// FUNCTION 145572ea0 FUN_145572ea0 body=115 status=ok
// SIG undefined FUN_145572ea0(void)

void FUN_145572ea0(longlong *param_1,longlong *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    *param_1 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 145572f20 FUN_145572f20 body=7164 status=ok
// SIG undefined FUN_145572f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145572f20(longlong *param_1,float *param_2,float *param_3,longlong param_4,
                  undefined4 *param_5,longlong param_6,uint param_7,uint param_8,char param_9,
                  float param_10)

{
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  void *pvVar4;
  void *pvVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  short sVar23;
  longlong lVar24;
  ulonglong uVar25;
  float *pfVar26;
  short sVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
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
  undefined8 auStack_150 [4];
  float fStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar17 = *(uint *)(param_1 + 1) >> 1;
  uVar1 = uVar17 + 1;
  fVar63 = 1.0 / (float)param_7;
  local_120 = *param_1;
  local_f8 = fVar63;
  fStack_f4 = fVar63;
  fStack_f0 = fVar63;
  fStack_ec = fVar63;
  local_108 = (ulonglong)(uVar1 * 4);
  uVar12 = (ulonglong)(uVar1 * 4) + 0xf;
  fVar45 = 1.0 / (float)*(uint *)(param_1 + 1);
  if (uVar12 <= local_108) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_150[0] = 0x145573026;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = local_108 + 0xf;
  uVar29 = (longlong)&local_128 + lVar7;
  if (uVar12 <= local_108) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar7) = 0x145573043;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  local_128 = (longlong)&local_128 + lVar8 + lVar7;
  uVar12 = 0;
  if (uVar1 != 0) {
    if (7 < uVar1) {
      fVar62 = fVar45 * 6.2831855;
      fVar46 = (float)(param_7 >> 8) * 256.0 + (float)(param_7 & 0xff);
      fVar47 = (float)(param_7 >> 8) * 256.0 + (float)(param_7 & 0xff);
      fVar48 = (float)(param_7 >> 8) * 256.0 + (float)(param_7 & 0xff);
      fVar49 = (float)(param_7 >> 8) * 256.0 + (float)(param_7 & 0xff);
      do {
        uVar32 = (uint)uVar12;
        uVar11 = uVar32 + 4;
        fVar42 = fVar45 * 6.2831855;
        pfVar15 = (float *)(uVar29 + uVar12 * 4);
        *pfVar15 = ((float)(uVar32 >> 8) * 256.0 + (float)(uVar32 & 0xff)) * fVar42 * fVar46;
        pfVar15[1] = ((float)(uVar32 + 1 >> 8) * 256.0 + (float)(uVar32 + 1 & 0xff)) * fVar42 *
                     fVar47;
        pfVar15[2] = ((float)(uVar32 + 2 >> 8) * 256.0 + (float)(uVar32 + 2 & 0xff)) * fVar42 *
                     fVar48;
        pfVar15[3] = ((float)(uVar32 + 3 >> 8) * 256.0 + (float)(uVar32 + 3 & 0xff)) * fVar42 *
                     fVar49;
        uVar14 = uVar32 + 8;
        uVar12 = (ulonglong)uVar14;
        pfVar15 = (float *)(uVar29 + (ulonglong)uVar11 * 4);
        *pfVar15 = ((float)(uVar11 >> 8) * 256.0 + (float)(uVar11 & 0xff)) * fVar62 * fVar46;
        pfVar15[1] = ((float)(uVar32 + 5 >> 8) * 256.0 + (float)(uVar32 + 5 & 0xff)) * fVar62 *
                     fVar47;
        pfVar15[2] = ((float)(uVar32 + 6 >> 8) * 256.0 + (float)(uVar32 + 6 & 0xff)) * fVar62 *
                     fVar48;
        pfVar15[3] = ((float)(uVar32 + 7 >> 8) * 256.0 + (float)(uVar32 + 7 & 0xff)) * fVar62 *
                     fVar49;
      } while (uVar14 < (uVar1 & 0xfffffff8));
      if (uVar1 <= uVar14) goto LAB_14557317d;
    }
    pfVar15 = (float *)(uVar29 + uVar12 * 4);
    do {
      uVar11 = (int)uVar12 + 1;
      *pfVar15 = (float)uVar12 * 6.2831855 * (float)param_7 * fVar45;
      uVar12 = (ulonglong)uVar11;
      pfVar15 = pfVar15 + 1;
    } while (uVar11 < uVar1);
  }
LAB_14557317d:
  fVar45 = -0.5;
  if ((param_9 == '\0') || (uVar12 = 0, uVar1 == 0)) {
LAB_14557374d:
    if (uVar1 != 0) goto LAB_145573759;
  }
  else {
    if (3 < uVar1) {
      uVar11 = 2;
      do {
        pfVar15 = (float *)(uVar29 + uVar12 * 4);
        fVar46 = *pfVar15;
        fVar47 = pfVar15[1];
        fVar48 = pfVar15[2];
        fVar49 = pfVar15[3];
        uVar19 = (ulonglong)(uVar11 + 1);
        uVar13 = (ulonglong)uVar11;
        uVar31 = (ulonglong)(uVar11 - 1);
        uVar11 = uVar11 + 4;
        fVar58 = param_2[uVar12 * 2 + 1] - fVar46;
        fVar59 = param_2[uVar31 * 2 + 1] - fVar47;
        fVar60 = param_2[uVar13 * 2 + 1] - fVar48;
        fVar61 = param_2[uVar19 * 2 + 1] - fVar49;
        fVar50 = fVar58 * 0.15915494;
        fVar51 = fVar59 * 0.15915494;
        fVar52 = fVar60 * 0.15915494;
        fVar53 = fVar61 * 0.15915494;
        fVar54 = (param_3[uVar12 * 2 + 1] - param_2[uVar12 * 2 + 1]) - fVar46;
        fVar55 = (param_3[uVar31 * 2 + 1] - param_2[uVar31 * 2 + 1]) - fVar47;
        fVar56 = (param_3[uVar13 * 2 + 1] - param_2[uVar13 * 2 + 1]) - fVar48;
        fVar57 = (param_3[uVar19 * 2 + 1] - param_2[uVar19 * 2 + 1]) - fVar49;
        uVar32 = -(uint)(0.0 < fVar50);
        uVar33 = -(uint)(0.0 < fVar51);
        uVar35 = -(uint)(0.0 < fVar52);
        uVar37 = -(uint)(0.0 < fVar53);
        fVar62 = fVar54 * 0.15915494;
        fVar42 = fVar55 * 0.15915494;
        fVar43 = fVar56 * 0.15915494;
        fVar44 = fVar57 * 0.15915494;
        uVar14 = -(uint)(0.0 < fVar62);
        uVar34 = -(uint)(0.0 < fVar42);
        uVar36 = -(uint)(0.0 < fVar43);
        uVar38 = -(uint)(0.0 < fVar44);
        pfVar15 = (float *)(param_5 + uVar12);
        *pfVar15 = ((fVar54 - (float)(int)((float)(uVar14 & 0x3f000000 | ~uVar14 & 0xbf000000) +
                                          fVar62) * 6.2831855) + fVar46 +
                   (fVar58 - (float)(int)((float)(uVar32 & 0x3f000000 | ~uVar32 & 0xbf000000) +
                                         fVar50) * 6.2831855) + fVar46) * local_f8 * 0.5;
        pfVar15[1] = ((fVar55 - (float)(int)((float)(uVar34 & 0x3f000000 | ~uVar34 & 0xbf000000) +
                                            fVar42) * 6.2831855) + fVar47 +
                     (fVar59 - (float)(int)((float)(uVar33 & 0x3f000000 | ~uVar33 & 0xbf000000) +
                                           fVar51) * 6.2831855) + fVar47) * fStack_f4 * 0.5;
        pfVar15[2] = ((fVar56 - (float)(int)((float)(uVar36 & 0x3f000000 | ~uVar36 & 0xbf000000) +
                                            fVar43) * 6.2831855) + fVar48 +
                     (fVar60 - (float)(int)((float)(uVar35 & 0x3f000000 | ~uVar35 & 0xbf000000) +
                                           fVar52) * 6.2831855) + fVar48) * fStack_f0 * 0.5;
        pfVar15[3] = ((fVar57 - (float)(int)((float)(uVar38 & 0x3f000000 | ~uVar38 & 0xbf000000) +
                                            fVar44) * 6.2831855) + fVar49 +
                     (fVar61 - (float)(int)((float)(uVar37 & 0x3f000000 | ~uVar37 & 0xbf000000) +
                                           fVar53) * 6.2831855) + fVar49) * fStack_ec * 0.5;
        fVar46 = param_2[uVar19 * 2 + 1];
        fVar47 = param_2[uVar13 * 2 + 1];
        fVar48 = param_2[uVar31 * 2 + 1];
        pfVar15 = (float *)(param_6 + uVar12 * 4);
        *pfVar15 = param_2[uVar12 * 2 + 1];
        pfVar15[1] = fVar48;
        pfVar15[2] = fVar47;
        pfVar15[3] = fVar46;
        uVar32 = (int)uVar12 + 4;
        uVar12 = (ulonglong)uVar32;
      } while (uVar32 < (uVar1 & 0xfffffffc));
    }
    uVar11 = (uint)uVar12;
    if (uVar1 <= uVar11) goto LAB_14557374d;
    uStack_110 = uVar12;
    lVar28 = (longlong)param_3 - (longlong)param_2;
    lVar24 = uVar29 - (longlong)param_5;
    lVar30 = param_6 - (longlong)param_5;
    if (uVar1 - uVar11 < 4) {
LAB_145573677:
      pfVar15 = (float *)(param_5 + uVar12);
      pfVar20 = param_2 + uVar12 * 2 + 1;
      uVar31 = (ulonglong)(uVar1 - uVar11);
      do {
        fVar46 = *(float *)((longlong)pfVar15 + lVar24);
        fVar48 = *pfVar20 - fVar46;
        fVar47 = fVar48 * 0.15915494;
        if (fVar47 <= 0.0) {
          fVar49 = -0.5;
        }
        else {
          fVar49 = 0.5;
        }
        fVar62 = (*(float *)((longlong)pfVar20 + lVar28) - *pfVar20) - fVar46;
        fVar42 = fVar62 * 0.15915494;
        if (fVar42 <= 0.0) {
          fVar43 = -0.5;
        }
        else {
          fVar43 = 0.5;
        }
        *pfVar15 = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                   (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 * fVar63;
        fVar46 = *pfVar20;
        pfVar20 = pfVar20 + 2;
        *(float *)((longlong)pfVar15 + lVar30) = fVar46;
        pfVar15 = pfVar15 + 1;
        uVar31 = uVar31 - 1;
        uStack_110 = uVar12;
      } while (uVar31 != 0);
    }
    else {
      pfVar15 = (float *)(param_5 + uVar12 + 1);
      pfVar20 = param_2 + uVar12 * 2 + 1;
      uVar32 = ((uVar1 - uVar11) - 4 >> 2) + 1;
      local_118 = (ulonglong)uVar32;
      uVar11 = uVar11 + uVar32 * 4;
      uVar12 = uVar12 + (ulonglong)uVar32 * 4;
      uStack_110 = uVar12;
      do {
        fVar46 = *(float *)((longlong)pfVar15 + lVar24 + -4);
        fVar48 = *pfVar20 - fVar46;
        fVar47 = fVar48 * 0.15915494;
        if (fVar47 <= 0.0) {
          fVar49 = -0.5;
        }
        else {
          fVar49 = 0.5;
        }
        fVar62 = (*(float *)(lVar28 + (longlong)pfVar20) - *pfVar20) - fVar46;
        fVar42 = fVar62 * 0.15915494;
        if (fVar42 <= 0.0) {
          fVar43 = -0.5;
        }
        else {
          fVar43 = 0.5;
        }
        pfVar15[-1] = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                      (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 * fVar63;
        *(float *)((longlong)pfVar15 + lVar30 + -4) = *pfVar20;
        fVar46 = *(float *)(lVar24 + (longlong)pfVar15);
        fVar48 = pfVar20[2] - fVar46;
        fVar47 = fVar48 * 0.15915494;
        if (fVar47 <= 0.0) {
          fVar49 = -0.5;
        }
        else {
          fVar49 = 0.5;
        }
        fVar62 = (*(float *)((longlong)pfVar20 + lVar28 + 8) - pfVar20[2]) - fVar46;
        fVar42 = fVar62 * 0.15915494;
        if (fVar42 <= 0.0) {
          fVar43 = -0.5;
        }
        else {
          fVar43 = 0.5;
        }
        *pfVar15 = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                   (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 * fVar63;
        *(float *)(lVar30 + (longlong)pfVar15) = pfVar20[2];
        fVar46 = *(float *)((longlong)pfVar15 + lVar24 + 4);
        fVar48 = pfVar20[4] - fVar46;
        fVar47 = fVar48 * 0.15915494;
        if (fVar47 <= 0.0) {
          fVar49 = -0.5;
        }
        else {
          fVar49 = 0.5;
        }
        fVar62 = (*(float *)((longlong)pfVar20 + lVar28 + 0x10) - pfVar20[4]) - fVar46;
        fVar42 = fVar62 * 0.15915494;
        if (fVar42 <= 0.0) {
          fVar43 = -0.5;
        }
        else {
          fVar43 = 0.5;
        }
        pfVar15[1] = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                     (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 * fVar63;
        *(float *)((longlong)pfVar15 + lVar30 + 4) = pfVar20[4];
        fVar46 = *(float *)((longlong)pfVar15 + lVar24 + 8);
        fVar48 = pfVar20[6] - fVar46;
        fVar47 = fVar48 * 0.15915494;
        if (fVar47 <= 0.0) {
          fVar49 = -0.5;
        }
        else {
          fVar49 = 0.5;
        }
        fVar62 = (*(float *)((longlong)pfVar20 + lVar28 + 0x18) - pfVar20[6]) - fVar46;
        fVar42 = fVar62 * 0.15915494;
        if (fVar42 <= 0.0) {
          fVar43 = -0.5;
        }
        else {
          fVar43 = 0.5;
        }
        pfVar15[2] = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                     (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 * fVar63;
        pfVar21 = pfVar20 + 6;
        pfVar20 = pfVar20 + 8;
        *(float *)((longlong)pfVar15 + lVar30 + 8) = *pfVar21;
        pfVar15 = pfVar15 + 4;
        local_118 = local_118 - 1;
      } while (local_118 != 0);
      if (uVar11 < uVar1) goto LAB_145573677;
    }
LAB_145573759:
    uVar12 = 0;
    if (3 < uVar1) {
      uVar12 = 0;
      if ((uVar29 + (ulonglong)uVar17 * 4 < local_128) ||
         ((ulonglong)uVar17 * 4 + local_128 < uVar29)) {
        uVar11 = 2;
        uVar31 = uVar12;
        do {
          uVar25 = (ulonglong)(uVar11 + 1);
          uVar13 = (ulonglong)(uVar11 - 1);
          uVar19 = (ulonglong)uVar11;
          uVar32 = (int)uVar31 + 4;
          uVar12 = (ulonglong)uVar32;
          pfVar15 = (float *)(uVar29 + uVar31 * 4);
          fVar46 = *pfVar15;
          fVar47 = pfVar15[1];
          fVar48 = pfVar15[2];
          fVar49 = pfVar15[3];
          uVar11 = uVar11 + 4;
          fVar58 = (param_3[uVar31 * 2 + 1] - param_2[uVar31 * 2 + 1]) - fVar46;
          fVar59 = (param_3[uVar13 * 2 + 1] - param_2[uVar13 * 2 + 1]) - fVar47;
          fVar60 = (param_3[uVar19 * 2 + 1] - param_2[uVar19 * 2 + 1]) - fVar48;
          fVar61 = (param_3[uVar25 * 2 + 1] - param_2[uVar25 * 2 + 1]) - fVar49;
          fVar54 = (*(float *)(param_4 + 4 + uVar31 * 8) - param_3[uVar31 * 2 + 1]) - fVar46;
          fVar55 = (*(float *)(param_4 + 4 + uVar13 * 8) - param_3[uVar13 * 2 + 1]) - fVar47;
          fVar56 = (*(float *)(param_4 + 4 + uVar19 * 8) - param_3[uVar19 * 2 + 1]) - fVar48;
          fVar57 = (*(float *)(param_4 + 4 + uVar25 * 8) - param_3[uVar25 * 2 + 1]) - fVar49;
          fVar50 = fVar58 * 0.15915494;
          fVar51 = fVar59 * 0.15915494;
          fVar52 = fVar60 * 0.15915494;
          fVar53 = fVar61 * 0.15915494;
          fVar62 = fVar54 * 0.15915494;
          fVar42 = fVar55 * 0.15915494;
          fVar43 = fVar56 * 0.15915494;
          fVar44 = fVar57 * 0.15915494;
          uVar14 = -(uint)(0.0 < fVar50);
          uVar34 = -(uint)(0.0 < fVar51);
          uVar36 = -(uint)(0.0 < fVar52);
          uVar38 = -(uint)(0.0 < fVar53);
          uVar33 = -(uint)(0.0 < fVar62);
          uVar35 = -(uint)(0.0 < fVar42);
          uVar37 = -(uint)(0.0 < fVar43);
          uVar39 = -(uint)(0.0 < fVar44);
          pfVar15 = (float *)(local_128 + uVar31 * 4);
          *pfVar15 = ((fVar58 - (float)(int)((float)(~uVar14 & 0xbf000000 | uVar14 & 0x3f000000) +
                                            fVar50) * 6.2831855) + fVar46 +
                     (fVar54 - (float)(int)((float)(~uVar33 & 0xbf000000 | uVar33 & 0x3f000000) +
                                           fVar62) * 6.2831855) + fVar46) * local_f8 * 0.5;
          pfVar15[1] = ((fVar59 - (float)(int)((float)(~uVar34 & 0xbf000000 | uVar34 & 0x3f000000) +
                                              fVar51) * 6.2831855) + fVar47 +
                       (fVar55 - (float)(int)((float)(~uVar35 & 0xbf000000 | uVar35 & 0x3f000000) +
                                             fVar42) * 6.2831855) + fVar47) * fStack_f4 * 0.5;
          pfVar15[2] = ((fVar60 - (float)(int)((float)(~uVar36 & 0xbf000000 | uVar36 & 0x3f000000) +
                                              fVar52) * 6.2831855) + fVar48 +
                       (fVar56 - (float)(int)((float)(~uVar37 & 0xbf000000 | uVar37 & 0x3f000000) +
                                             fVar43) * 6.2831855) + fVar48) * fStack_f0 * 0.5;
          pfVar15[3] = ((fVar61 - (float)(int)((float)(~uVar38 & 0xbf000000 | uVar38 & 0x3f000000) +
                                              fVar53) * 6.2831855) + fVar49 +
                       (fVar57 - (float)(int)((float)(~uVar39 & 0xbf000000 | uVar39 & 0x3f000000) +
                                             fVar44) * 6.2831855) + fVar49) * fStack_ec * 0.5;
          uVar31 = uVar12;
        } while (uVar32 < (uVar1 & 0xfffffffc));
      }
    }
    uVar11 = (uint)uVar12;
    if (uVar11 < uVar1) {
      lVar28 = (longlong)param_3 - (longlong)param_2;
      param_4 = param_4 - (longlong)param_2;
      lVar24 = uVar29 - local_128;
      if (3 < uVar1 - uVar11) {
        pfVar15 = param_2 + uVar12 * 2 + 1;
        pfVar20 = (float *)(uVar12 * 4 + 4 + local_128);
        uVar32 = ((uVar1 - uVar11) - 4 >> 2) + 1;
        uVar29 = (ulonglong)uVar32;
        uVar11 = uVar11 + uVar32 * 4;
        uVar12 = uVar12 + (ulonglong)uVar32 * 4;
        do {
          fVar46 = *(float *)(lVar24 + -4 + (longlong)pfVar20);
          fVar48 = (*(float *)((longlong)pfVar15 + lVar28) - *pfVar15) - fVar46;
          fVar47 = fVar48 * 0.15915494;
          if (fVar47 <= 0.0) {
            fVar49 = -0.5;
          }
          else {
            fVar49 = 0.5;
          }
          fVar62 = (*(float *)((longlong)pfVar15 + param_4) - *(float *)((longlong)pfVar15 + lVar28)
                   ) - fVar46;
          fVar42 = fVar62 * 0.15915494;
          if (fVar42 <= 0.0) {
            fVar43 = -0.5;
          }
          else {
            fVar43 = 0.5;
          }
          pfVar20[-1] = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                        (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 *
                        fVar63;
          fVar46 = *(float *)((longlong)pfVar15 + lVar28 + 8);
          fVar47 = *(float *)((longlong)pfVar20 + lVar24);
          fVar49 = (fVar46 - pfVar15[2]) - fVar47;
          fVar48 = fVar49 * 0.15915494;
          if (fVar48 <= 0.0) {
            fVar62 = -0.5;
          }
          else {
            fVar62 = 0.5;
          }
          fVar46 = (*(float *)(param_4 + 8 + (longlong)pfVar15) - fVar46) - fVar47;
          fVar42 = fVar46 * 0.15915494;
          if (fVar42 <= 0.0) {
            fVar43 = -0.5;
          }
          else {
            fVar43 = 0.5;
          }
          *pfVar20 = ((fVar46 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar47 +
                     (fVar49 - (float)(int)(fVar62 + fVar48) * 6.2831855) + fVar47) * 0.5 * fVar63;
          fVar46 = *(float *)((longlong)pfVar15 + lVar28 + 0x10);
          fVar47 = *(float *)(lVar24 + 4 + (longlong)pfVar20);
          fVar49 = (fVar46 - pfVar15[4]) - fVar47;
          fVar48 = fVar49 * 0.15915494;
          if (fVar48 <= 0.0) {
            fVar62 = -0.5;
          }
          else {
            fVar62 = 0.5;
          }
          fVar46 = (*(float *)(param_4 + 0x10 + (longlong)pfVar15) - fVar46) - fVar47;
          fVar42 = fVar46 * 0.15915494;
          if (fVar42 <= 0.0) {
            fVar43 = -0.5;
          }
          else {
            fVar43 = 0.5;
          }
          pfVar20[1] = ((fVar46 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar47 +
                       (fVar49 - (float)(int)(fVar62 + fVar48) * 6.2831855) + fVar47) * 0.5 * fVar63
          ;
          fVar46 = *(float *)((longlong)pfVar15 + lVar28 + 0x18);
          fVar47 = *(float *)(lVar24 + 8 + (longlong)pfVar20);
          fVar49 = (fVar46 - pfVar15[6]) - fVar47;
          fVar48 = fVar49 * 0.15915494;
          if (fVar48 <= 0.0) {
            fVar62 = -0.5;
          }
          else {
            fVar62 = 0.5;
          }
          fVar46 = (*(float *)(param_4 + 0x18 + (longlong)pfVar15) - fVar46) - fVar47;
          fVar42 = fVar46 * 0.15915494;
          if (fVar42 <= 0.0) {
            fVar43 = -0.5;
          }
          else {
            fVar43 = 0.5;
          }
          pfVar15 = pfVar15 + 8;
          pfVar20[2] = ((fVar46 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar47 +
                       (fVar49 - (float)(int)(fVar62 + fVar48) * 6.2831855) + fVar47) * 0.5 * fVar63
          ;
          pfVar20 = pfVar20 + 4;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        if (uVar1 <= uVar11) goto LAB_145573cc7;
      }
      pfVar20 = (float *)(uVar12 * 4 + local_128);
      uVar29 = (ulonglong)(uVar1 - uVar11);
      pfVar15 = param_2 + uVar12 * 2 + 1;
      do {
        fVar46 = *(float *)((longlong)pfVar20 + lVar24);
        fVar48 = (*(float *)((longlong)pfVar15 + lVar28) - *pfVar15) - fVar46;
        fVar47 = fVar48 * 0.15915494;
        if (fVar47 <= 0.0) {
          fVar49 = -0.5;
        }
        else {
          fVar49 = 0.5;
        }
        fVar62 = (*(float *)((longlong)pfVar15 + param_4) - *(float *)((longlong)pfVar15 + lVar28))
                 - fVar46;
        fVar42 = fVar62 * 0.15915494;
        if (fVar42 <= 0.0) {
          fVar43 = -0.5;
        }
        else {
          fVar43 = 0.5;
        }
        pfVar15 = pfVar15 + 2;
        *pfVar20 = ((fVar62 - (float)(int)(fVar43 + fVar42) * 6.2831855) + fVar46 +
                   (fVar48 - (float)(int)(fVar49 + fVar47) * 6.2831855) + fVar46) * 0.5 * fVar63;
        pfVar20 = pfVar20 + 1;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
  }
LAB_145573cc7:
  uVar12 = local_108 + 0xf;
  if (uVar12 <= local_108) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar8 + lVar7) = 0x145573ce7;
  fVar46 = param_3[1];
  lVar24 = -(uVar12 & 0xfffffffffffffff0);
  pfVar15 = (float *)((longlong)&local_128 + lVar24 + lVar8 + lVar7);
  if (fVar46 * 0.15915494 <= 0.0) {
    fVar47 = -0.5;
  }
  else {
    fVar47 = 0.5;
  }
  fVar48 = (param_3[3] - fVar46) * 0.15915494;
  if (fVar48 <= 0.0) {
    fVar49 = -0.5;
  }
  else {
    fVar49 = 0.5;
  }
  uVar12 = 1;
  *pfVar15 = (((param_3[3] - fVar46) - (float)(int)(fVar49 + fVar48) * 6.2831855) +
             (fVar46 - (float)(int)(fVar47 + fVar46 * 0.15915494) * 6.2831855)) * 0.5 * fVar63;
  fVar49 = fStack_ec;
  fVar48 = fStack_f0;
  fVar47 = fStack_f4;
  fVar46 = local_f8;
  if (1 < uVar17) {
    if (7 < uVar17 - 1) {
      uVar11 = 2;
      do {
        fVar62 = param_3[uVar12 * 2 + 1];
        fVar42 = param_3[(ulonglong)(uVar11 + 1) * 2 + 1];
        fVar43 = param_3[(ulonglong)uVar11 * 2 + 1];
        uVar32 = uVar11 + 2;
        fVar44 = param_3[(ulonglong)uVar32 * 2 + 1];
        uVar14 = uVar11 + 3;
        fVar50 = param_3[(ulonglong)uVar14 * 2 + 1];
        fVar55 = (fVar62 - param_3[(ulonglong)(uVar11 - 2) * 2 + 1]) * 0.15915494;
        fVar56 = (fVar43 - fVar62) * 0.15915494;
        fVar57 = (fVar42 - fVar43) * 0.15915494;
        fVar58 = (fVar44 - fVar42) * 0.15915494;
        fVar51 = (fVar43 - fVar62) * 0.15915494;
        fVar52 = (fVar42 - fVar43) * 0.15915494;
        fVar53 = (fVar44 - fVar42) * 0.15915494;
        fVar54 = (fVar50 - fVar44) * 0.15915494;
        uVar33 = -(uint)(0.0 < fVar55);
        uVar35 = -(uint)(0.0 < fVar56);
        uVar37 = -(uint)(0.0 < fVar57);
        uVar39 = -(uint)(0.0 < fVar58);
        uVar34 = -(uint)(0.0 < fVar51);
        uVar36 = -(uint)(0.0 < fVar52);
        uVar38 = -(uint)(0.0 < fVar53);
        uVar40 = -(uint)(0.0 < fVar54);
        pfVar20 = pfVar15 + uVar12;
        *pfVar20 = (((fVar62 - param_3[(ulonglong)(uVar11 - 2) * 2 + 1]) -
                    (float)(int)((float)(~uVar33 & 0xbf000000 | uVar33 & 0x3f000000) + fVar55) *
                    6.2831855) +
                   ((fVar43 - fVar62) -
                   (float)(int)((float)(~uVar34 & 0xbf000000 | uVar34 & 0x3f000000) + fVar51) *
                   6.2831855)) * fVar46 * 0.5;
        pfVar20[1] = (((fVar43 - fVar62) -
                      (float)(int)((float)(~uVar35 & 0xbf000000 | uVar35 & 0x3f000000) + fVar56) *
                      6.2831855) +
                     ((fVar42 - fVar43) -
                     (float)(int)((float)(~uVar36 & 0xbf000000 | uVar36 & 0x3f000000) + fVar52) *
                     6.2831855)) * fVar47 * 0.5;
        pfVar20[2] = (((fVar42 - fVar43) -
                      (float)(int)((float)(~uVar37 & 0xbf000000 | uVar37 & 0x3f000000) + fVar57) *
                      6.2831855) +
                     ((fVar44 - fVar42) -
                     (float)(int)((float)(~uVar38 & 0xbf000000 | uVar38 & 0x3f000000) + fVar53) *
                     6.2831855)) * fVar48 * 0.5;
        pfVar20[3] = (((fVar44 - fVar42) -
                      (float)(int)((float)(~uVar39 & 0xbf000000 | uVar39 & 0x3f000000) + fVar58) *
                      6.2831855) +
                     ((fVar50 - fVar44) -
                     (float)(int)((float)(~uVar40 & 0xbf000000 | uVar40 & 0x3f000000) + fVar54) *
                     6.2831855)) * fVar49 * 0.5;
        fVar62 = param_3[(ulonglong)(uVar11 + 6) * 2 + 1];
        fVar42 = param_3[(ulonglong)(uVar11 + 5) * 2 + 1];
        fVar43 = param_3[(ulonglong)uVar14 * 2 + 1];
        fVar44 = param_3[(ulonglong)(uVar11 + 4) * 2 + 1];
        fVar50 = param_3[(ulonglong)(uVar11 + 7) * 2 + 1];
        fVar55 = (fVar43 - param_3[(ulonglong)uVar32 * 2 + 1]) * 0.15915494;
        fVar56 = (fVar44 - fVar43) * 0.15915494;
        fVar57 = (fVar42 - fVar44) * 0.15915494;
        fVar58 = (fVar62 - fVar42) * 0.15915494;
        uVar33 = (int)uVar12 + 8;
        uVar12 = (ulonglong)uVar33;
        uVar11 = uVar11 + 8;
        fVar51 = (fVar44 - fVar43) * 0.15915494;
        fVar52 = (fVar42 - fVar44) * 0.15915494;
        fVar53 = (fVar62 - fVar42) * 0.15915494;
        fVar54 = (fVar50 - fVar62) * 0.15915494;
        uVar34 = -(uint)(0.0 < fVar55);
        uVar36 = -(uint)(0.0 < fVar56);
        uVar38 = -(uint)(0.0 < fVar57);
        uVar40 = -(uint)(0.0 < fVar58);
        uVar35 = -(uint)(0.0 < fVar51);
        uVar37 = -(uint)(0.0 < fVar52);
        uVar39 = -(uint)(0.0 < fVar53);
        uVar41 = -(uint)(0.0 < fVar54);
        pfVar20 = pfVar15 + uVar14;
        *pfVar20 = (((fVar44 - fVar43) -
                    (float)(int)((float)(~uVar35 & 0xbf000000 | uVar35 & 0x3f000000) + fVar51) *
                    6.2831855) +
                   ((fVar43 - param_3[(ulonglong)uVar32 * 2 + 1]) -
                   (float)(int)((float)(~uVar34 & 0xbf000000 | uVar34 & 0x3f000000) + fVar55) *
                   6.2831855)) * fVar46 * 0.5;
        pfVar20[1] = (((fVar42 - fVar44) -
                      (float)(int)((float)(~uVar37 & 0xbf000000 | uVar37 & 0x3f000000) + fVar52) *
                      6.2831855) +
                     ((fVar44 - fVar43) -
                     (float)(int)((float)(~uVar36 & 0xbf000000 | uVar36 & 0x3f000000) + fVar56) *
                     6.2831855)) * fVar47 * 0.5;
        pfVar20[2] = (((fVar62 - fVar42) -
                      (float)(int)((float)(~uVar39 & 0xbf000000 | uVar39 & 0x3f000000) + fVar53) *
                      6.2831855) +
                     ((fVar42 - fVar44) -
                     (float)(int)((float)(~uVar38 & 0xbf000000 | uVar38 & 0x3f000000) + fVar57) *
                     6.2831855)) * fVar48 * 0.5;
        pfVar20[3] = (((fVar50 - fVar62) -
                      (float)(int)((float)(~uVar41 & 0xbf000000 | uVar41 & 0x3f000000) + fVar54) *
                      6.2831855) +
                     ((fVar62 - fVar42) -
                     (float)(int)((float)(~uVar40 & 0xbf000000 | uVar40 & 0x3f000000) + fVar58) *
                     6.2831855)) * fVar49 * 0.5;
      } while (uVar33 < uVar17 - (uVar17 - 1 & 7));
    }
    uVar11 = (uint)uVar12;
    if (uVar11 < uVar17) {
      uVar29 = uVar12;
      if (3 < uVar17 - uVar11) {
        pfVar20 = (float *)((longlong)&local_120 + uVar12 * 4 + lVar24 + lVar8 + lVar7);
        pfVar21 = param_3 + uVar12 * 2 + 3;
        uVar32 = uVar11 + 2;
        uVar29 = uVar12 + (ulonglong)((((uVar17 - 3) - uVar11) - 1 >> 2) + 1) * 4;
        do {
          fVar47 = pfVar21[-2] - param_3[(ulonglong)((int)uVar12 - 1) * 2 + 1];
          fVar46 = fVar47 * 0.15915494;
          if (fVar46 <= 0.0) {
            fVar48 = -0.5;
          }
          else {
            fVar48 = 0.5;
          }
          fVar49 = param_3[(ulonglong)(uVar32 - 1) * 2 + 1] - pfVar21[-2];
          fVar62 = fVar49 * 0.15915494;
          if (fVar62 <= 0.0) {
            fVar42 = -0.5;
          }
          else {
            fVar42 = 0.5;
          }
          pfVar20[-2] = ((fVar49 - (float)(int)(fVar42 + fVar62) * 6.2831855) +
                        (fVar47 - (float)(int)(fVar48 + fVar46) * 6.2831855)) * 0.5 * fVar63;
          fVar47 = *pfVar21 - param_3[uVar12 * 2 + 1];
          fVar46 = fVar47 * 0.15915494;
          if (fVar46 <= 0.0) {
            fVar48 = -0.5;
          }
          else {
            fVar48 = 0.5;
          }
          fVar49 = param_3[(ulonglong)uVar32 * 2 + 1] - *pfVar21;
          fVar62 = fVar49 * 0.15915494;
          if (fVar62 <= 0.0) {
            fVar42 = -0.5;
          }
          else {
            fVar42 = 0.5;
          }
          pfVar20[-1] = ((fVar49 - (float)(int)(fVar42 + fVar62) * 6.2831855) +
                        (fVar47 - (float)(int)(fVar48 + fVar46) * 6.2831855)) * 0.5 * fVar63;
          fVar47 = pfVar21[2] - param_3[(ulonglong)(uVar32 - 1) * 2 + 1];
          fVar46 = fVar47 * 0.15915494;
          if (fVar46 <= 0.0) {
            fVar48 = -0.5;
          }
          else {
            fVar48 = 0.5;
          }
          fVar49 = param_3[(ulonglong)(uVar32 + 1) * 2 + 1] - pfVar21[2];
          fVar62 = fVar49 * 0.15915494;
          if (fVar62 <= 0.0) {
            fVar42 = -0.5;
          }
          else {
            fVar42 = 0.5;
          }
          *pfVar20 = ((fVar49 - (float)(int)(fVar42 + fVar62) * 6.2831855) +
                     (fVar47 - (float)(int)(fVar48 + fVar46) * 6.2831855)) * 0.5 * fVar63;
          fVar47 = pfVar21[4] - param_3[(ulonglong)uVar32 * 2 + 1];
          fVar46 = fVar47 * 0.15915494;
          if (fVar46 <= 0.0) {
            fVar48 = -0.5;
          }
          else {
            fVar48 = 0.5;
          }
          fVar49 = param_3[(ulonglong)(uVar32 + 2) * 2 + 1] - pfVar21[4];
          fVar62 = fVar49 * 0.15915494;
          if (fVar62 <= 0.0) {
            fVar42 = -0.5;
          }
          else {
            fVar42 = 0.5;
          }
          pfVar21 = pfVar21 + 8;
          uVar11 = (int)uVar12 + 4;
          uVar12 = (ulonglong)uVar11;
          uVar32 = uVar32 + 4;
          pfVar20[1] = ((fVar49 - (float)(int)(fVar42 + fVar62) * 6.2831855) +
                       (fVar47 - (float)(int)(fVar48 + fVar46) * 6.2831855)) * 0.5 * fVar63;
          pfVar20 = pfVar20 + 4;
        } while (uVar11 < uVar17 - 3);
        if (uVar17 <= uVar11) goto LAB_145574358;
      }
      pfVar20 = param_3 + uVar29 * 2 + 1;
      pfVar21 = pfVar15 + uVar29;
      do {
        fVar47 = *pfVar20 - param_3[(ulonglong)((int)uVar12 - 1) * 2 + 1];
        fVar46 = fVar47 * 0.15915494;
        if (fVar46 <= 0.0) {
          fVar48 = -0.5;
        }
        else {
          fVar48 = 0.5;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        fVar49 = param_3[(ulonglong)uVar11 * 2 + 1] - *pfVar20;
        fVar62 = fVar49 * 0.15915494;
        if (fVar62 <= 0.0) {
          fVar42 = -0.5;
        }
        else {
          fVar42 = 0.5;
        }
        pfVar20 = pfVar20 + 2;
        *pfVar21 = ((fVar49 - (float)(int)(fVar42 + fVar62) * 6.2831855) +
                   (fVar47 - (float)(int)(fVar48 + fVar46) * 6.2831855)) * 0.5 * fVar63;
        pfVar21 = pfVar21 + 1;
      } while (uVar11 < uVar17);
    }
  }
LAB_145574358:
  uVar12 = (ulonglong)uVar17;
  pfVar20 = param_3 + uVar12 * 2;
  fVar46 = param_3[uVar12 * 2 + 1] - param_3[(ulonglong)(uVar17 - 1) * 2 + 1];
  fVar47 = fVar46 * 0.15915494;
  if (fVar47 <= 0.0) {
    fVar48 = -0.5;
  }
  else {
    fVar48 = 0.5;
  }
  fVar62 = -param_3[uVar12 * 2 + 1];
  fVar49 = fVar62 * 0.15915494;
  if (0.0 < fVar49) {
    fVar45 = 0.5;
  }
  pfVar15[uVar12] =
       ((fVar62 - (float)(int)(fVar45 + fVar49) * 6.2831855) +
       (fVar46 - (float)(int)(fVar48 + fVar47) * 6.2831855)) * 0.5 * fVar63;
  pfVar22 = pfVar20;
  pfVar26 = param_3;
  pfVar21 = param_3;
  if (param_3 != pfVar20) {
    while (pfVar22 = pfVar26, pfVar21 = pfVar21 + 2, pfVar21 != pfVar20) {
      pfVar26 = pfVar22;
      if (*pfVar22 < *pfVar21) {
        pfVar26 = pfVar21;
      }
    }
  }
  pfVar20 = param_2 + uVar12 * 2;
  pfVar26 = pfVar20;
  pfVar9 = param_2;
  pfVar21 = param_2;
  if (param_2 != pfVar20) {
    while (pfVar26 = pfVar9, pfVar21 = pfVar21 + 2, pfVar21 != pfVar20) {
      pfVar9 = pfVar26;
      if (*pfVar26 < *pfVar21) {
        pfVar9 = pfVar21;
      }
    }
  }
  uVar17 = 0;
  fVar45 = *pfVar26;
  if (*pfVar26 <= *pfVar22) {
    fVar45 = *pfVar22;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (uVar1 != 0) {
    lVar28 = local_120 - (longlong)param_3;
    pfVar20 = param_3;
    do {
      if (*pfVar20 <= fVar45 * param_10 && fVar45 * param_10 != *pfVar20) {
        uVar11 = *(uint *)param_1[8] * 0x343fd + 0x269ec3;
        *(uint *)param_1[8] = uVar11;
        *(float *)(lVar28 + 4 + (longlong)pfVar20) = (float)uVar11 * 4.595893e-09 - 3.1415927;
      }
      else {
        uVar11 = *(uint *)(param_1 + 7);
        if (uVar11 < *(uint *)((longlong)param_1 + 0x3c)) {
          *(uint *)(param_1 + 7) = uVar11 + 1;
          puVar3 = (undefined2 *)(param_1[6] + (ulonglong)uVar11 * 2);
          if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = (short)uVar17;
          }
        }
        uVar11 = *(uint *)(param_1 + 4);
        fVar63 = -*(float *)(((longlong)param_2 - (longlong)param_3) + (longlong)pfVar20);
        uVar32 = *(uint *)((longlong)param_1 + 0x24);
        if (uVar32 <= uVar11) {
          if (uVar32 == 0) {
            iVar18 = 1;
          }
          else {
            iVar18 = (uVar32 >> 1) + uVar32;
          }
          *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x145574507;
          cVar10 = FUN_145574b20(param_1 + 2,iVar18);
          if (cVar10 == '\0') goto LAB_145574579;
        }
        if (uVar11 < *(uint *)((longlong)param_1 + 0x24)) {
          uVar11 = *(uint *)(param_1 + 4);
          *(uint *)(param_1 + 4) = uVar11 + 1;
          if (param_1[3] + (ulonglong)uVar11 * 8 != 0) {
            for (; uVar11 != 0; uVar11 = uVar11 - 1 >> 1) {
              lVar30 = param_1[3];
              uVar12 = (ulonglong)(uVar11 - 1 >> 1);
              if (*(float *)(lVar30 + uVar12 * 8) <= fVar63) break;
              *(undefined8 *)(lVar30 + (longlong)(int)uVar11 * 8) =
                   *(undefined8 *)(lVar30 + uVar12 * 8);
            }
            lVar30 = param_1[3];
            lVar16 = (longlong)(int)uVar11;
            *(float *)(lVar30 + lVar16 * 8) = fVar63;
            *(undefined2 *)(lVar30 + 4 + lVar16 * 8) = 0xffff;
            *(short *)(lVar30 + 6 + lVar16 * 8) = (short)uVar17;
          }
        }
      }
LAB_145574579:
      uVar17 = uVar17 + 1;
      pfVar20 = pfVar20 + 2;
    } while (uVar17 < uVar1);
  }
  plVar2 = param_1 + 2;
  *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x14557459c;
  FUN_145574bf0(param_1 + 2);
  iVar18 = (int)param_1[7];
  lVar28 = local_120;
joined_r0x0001455745a0:
  local_120 = lVar28;
  if ((iVar18 == 0) || ((int)param_1[4] == 0)) {
    if (uVar1 != 0) {
      lVar30 = local_128 - (longlong)param_5;
      pfVar15 = (float *)(lVar28 + 4);
      uVar12 = (ulonglong)uVar1;
      param_6 = param_6 - (longlong)param_5;
      do {
        fVar45 = *pfVar15;
        pfVar15[-1] = *(float *)((longlong)param_3 + (-4 - lVar28) + (longlong)pfVar15);
        *param_5 = *(undefined4 *)(lVar30 + (longlong)param_5);
        *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x145574a91;
        fVar45 = fmodf(fVar45 + 3.1415927,6.2831855);
        if (fVar45 < 0.0) {
          fVar45 = fVar45 + 6.2831855;
        }
        *pfVar15 = fVar45 - 3.1415927;
        pfVar15 = pfVar15 + 2;
        *(float *)((longlong)param_5 + param_6) = fVar45 - 3.1415927;
        param_5 = param_5 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
    return;
  }
  sVar27 = *(short *)(param_1[3] + 4);
  sVar23 = *(short *)(param_1[3] + 6);
  lVar28 = (longlong)sVar23;
  if (*(uint *)(param_1 + 4) < 2) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined8 *)param_1[3] = ((undefined8 *)param_1[3])[*(uint *)(param_1 + 4) - 1];
    *(int *)(param_1 + 4) = (int)param_1[4] + -1;
    *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x14557462e;
    FUN_145574bf0(plVar2);
  }
  if (sVar27 != -1) {
    if (sVar27 != 0) goto LAB_145574a1e;
    sVar27 = sVar23 + 1;
    lVar30 = param_1[6];
    uVar17 = *(uint *)(param_1 + 7);
    while (uVar17 != 0) {
      sVar6 = *(short *)(lVar30 + (ulonglong)(uVar17 >> 1) * 2);
      pvVar4 = (void *)(lVar30 + (ulonglong)(uVar17 >> 1) * 2);
      if (sVar27 == sVar6) {
        uVar17 = *(uint *)(param_1 + 7);
        lVar30 = param_1[6];
        if (pvVar4 == (void *)(lVar30 + (ulonglong)uVar17 * 2)) break;
        *(float *)(local_120 + 0xc + lVar28 * 8) =
             (*(float *)((longlong)&local_128 + lVar28 * 4 + lVar24 + lVar8 + lVar7 + 4) +
             pfVar15[lVar28]) * (float)param_8 * 0.5 + *(float *)(local_120 + 4 + lVar28 * 8);
        pvVar5 = (void *)(lVar30 + (ulonglong)(uVar17 - 1) * 2);
        if (pvVar4 < pvVar5) {
          *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x14557482c;
          memmove(pvVar4,(void *)((longlong)pvVar4 + 2),
                  (ulonglong)(uint)((int)((longlong)pvVar5 - (longlong)pvVar4 >> 1) * 2));
        }
        *(int *)(param_1 + 7) = (int)param_1[7] + -1;
        fVar45 = param_3[lVar28 * 2 + 2];
        uVar17 = *(uint *)(param_1 + 4);
        uVar11 = *(uint *)((longlong)param_1 + 0x24);
        if (uVar11 <= uVar17) {
          iVar18 = (uVar11 >> 1) + uVar11;
          if (uVar11 == 0) {
            iVar18 = 1;
          }
          *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x14557485e;
          cVar10 = FUN_145574b20(plVar2,iVar18);
          if (cVar10 == '\0') break;
        }
        if (uVar17 < *(uint *)((longlong)param_1 + 0x24)) {
          uVar17 = *(uint *)(param_1 + 4);
          *(uint *)(param_1 + 4) = uVar17 + 1;
          if (param_1[3] + (ulonglong)uVar17 * 8 != 0) goto joined_r0x000145574885;
        }
        break;
      }
      if (sVar6 < sVar27) {
        lVar30 = (longlong)pvVar4 + 2;
      }
      uVar11 = uVar17 - 1;
      if (sVar27 < sVar6) {
        uVar11 = uVar17;
      }
      uVar17 = uVar11 >> 1;
    }
    goto LAB_1455748ce;
  }
  lVar30 = param_1[6];
  uVar17 = *(uint *)(param_1 + 7);
  while (uVar17 != 0) {
    sVar27 = *(short *)(lVar30 + (ulonglong)(uVar17 >> 1) * 2);
    pvVar4 = (void *)(lVar30 + (ulonglong)(uVar17 >> 1) * 2);
    if (sVar23 == sVar27) {
      uVar17 = *(uint *)(param_1 + 7);
      lVar30 = param_1[6];
      if (pvVar4 == (void *)(lVar30 + (ulonglong)uVar17 * 2)) break;
      *(float *)(local_120 + 4 + lVar28 * 8) =
           (*(float *)(local_128 + lVar28 * 4) + (float)param_5[lVar28]) * (float)param_8 * 0.5 +
           *(float *)(param_6 + lVar28 * 4);
      pvVar5 = (void *)(lVar30 + (ulonglong)(uVar17 - 1) * 2);
      if (pvVar4 < pvVar5) {
        *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x1455746e3;
        memmove(pvVar4,(void *)((longlong)pvVar4 + 2),
                (ulonglong)(uint)((int)((longlong)pvVar5 - (longlong)pvVar4 >> 1) * 2));
      }
      *(int *)(param_1 + 7) = (int)param_1[7] + -1;
      uVar17 = *(uint *)(param_1 + 4);
      fVar45 = -param_3[lVar28 * 2];
      uVar11 = *(uint *)((longlong)param_1 + 0x24);
      if (uVar11 <= uVar17) {
        iVar18 = (uVar11 >> 1) + uVar11;
        if (uVar11 == 0) {
          iVar18 = 1;
        }
        *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x145574714;
        cVar10 = FUN_145574b20(plVar2,iVar18);
        if (cVar10 == '\0') break;
      }
      if (uVar17 < *(uint *)((longlong)param_1 + 0x24)) {
        uVar17 = *(uint *)(param_1 + 4);
        *(uint *)(param_1 + 4) = uVar17 + 1;
        if (param_1[3] + (ulonglong)uVar17 * 8 != 0) goto joined_r0x000145574747;
      }
      break;
    }
    if (sVar27 < sVar23) {
      lVar30 = (longlong)pvVar4 + 2;
    }
    uVar11 = uVar17 - 1;
    if (sVar23 < sVar27) {
      uVar11 = uVar17;
    }
    uVar17 = uVar11 >> 1;
  }
  goto LAB_145574a1e;
joined_r0x000145574885:
  if (uVar17 == 0) goto LAB_1455748b3;
  lVar30 = param_1[3];
  uVar12 = (ulonglong)(uVar17 - 1 >> 1);
  if (*(float *)(lVar30 + uVar12 * 8) <= -fVar45) goto LAB_1455748b3;
  *(undefined8 *)(lVar30 + (longlong)(int)uVar17 * 8) = *(undefined8 *)(lVar30 + uVar12 * 8);
  uVar17 = uVar17 - 1 >> 1;
  goto joined_r0x000145574885;
LAB_1455748b3:
  lVar16 = (longlong)(int)uVar17;
  lVar30 = param_1[3];
  *(float *)(lVar30 + lVar16 * 8) = -fVar45;
  *(undefined2 *)(lVar30 + 4 + lVar16 * 8) = 0;
  *(short *)(lVar30 + 6 + lVar16 * 8) = sVar23 + 1;
LAB_1455748ce:
  sVar27 = sVar23 + -1;
  lVar30 = param_1[6];
  uVar17 = *(uint *)(param_1 + 7);
  while (uVar17 != 0) {
    sVar6 = *(short *)(lVar30 + (ulonglong)(uVar17 >> 1) * 2);
    pvVar4 = (void *)(lVar30 + (ulonglong)(uVar17 >> 1) * 2);
    if (sVar27 == sVar6) {
      uVar17 = *(uint *)(param_1 + 7);
      lVar30 = param_1[6];
      if (pvVar4 == (void *)(lVar30 + (ulonglong)uVar17 * 2)) break;
      *(float *)(local_120 + -4 + lVar28 * 8) =
           *(float *)(local_120 + 4 + lVar28 * 8) -
           (pfVar15[lVar28] +
           *(float *)((longlong)&fStack_12c + lVar28 * 4 + lVar24 + lVar8 + lVar7)) *
           (float)param_8 * 0.5;
      pvVar5 = (void *)(lVar30 + (ulonglong)(uVar17 - 1) * 2);
      if (pvVar4 < pvVar5) {
        *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x145574983;
        memmove(pvVar4,(void *)((longlong)pvVar4 + 2),
                (ulonglong)(uint)((int)((longlong)pvVar5 - (longlong)pvVar4 >> 1) * 2));
      }
      *(int *)(param_1 + 7) = (int)param_1[7] + -1;
      uVar17 = *(uint *)(param_1 + 4);
      fVar45 = -param_3[lVar28 * 2 + -2];
      uVar11 = *(uint *)((longlong)param_1 + 0x24);
      if (uVar11 <= uVar17) {
        iVar18 = (uVar11 >> 1) + uVar11;
        if (uVar11 == 0) {
          iVar18 = 1;
        }
        *(undefined8 *)((longlong)auStack_150 + lVar24 + lVar8 + lVar7) = 0x1455749b5;
        cVar10 = FUN_145574b20(plVar2,iVar18);
        if (cVar10 == '\0') break;
      }
      if (uVar17 < *(uint *)((longlong)param_1 + 0x24)) {
        uVar17 = *(uint *)(param_1 + 4);
        *(uint *)(param_1 + 4) = uVar17 + 1;
        if (param_1[3] + (ulonglong)uVar17 * 8 != 0) goto joined_r0x0001455749dc;
      }
      break;
    }
    if (sVar6 < sVar27) {
      lVar30 = (longlong)pvVar4 + 2;
    }
    uVar11 = uVar17 - 1;
    if (sVar27 < sVar6) {
      uVar11 = uVar17;
    }
    uVar17 = uVar11 >> 1;
  }
LAB_145574a1e:
  iVar18 = (int)param_1[7];
  lVar28 = local_120;
  goto joined_r0x0001455745a0;
joined_r0x0001455749dc:
  if (uVar17 == 0) goto LAB_145574a03;
  lVar28 = param_1[3];
  uVar12 = (ulonglong)(uVar17 - 1 >> 1);
  if (*(float *)(lVar28 + uVar12 * 8) <= fVar45) goto LAB_145574a03;
  *(undefined8 *)(lVar28 + (longlong)(int)uVar17 * 8) = *(undefined8 *)(lVar28 + uVar12 * 8);
  uVar17 = uVar17 - 1 >> 1;
  goto joined_r0x0001455749dc;
LAB_145574a03:
  sVar23 = sVar23 + -1;
LAB_145574a08:
  lVar28 = param_1[3];
  lVar30 = (longlong)(int)uVar17;
  *(float *)(lVar28 + lVar30 * 8) = fVar45;
  *(short *)(lVar28 + 6 + lVar30 * 8) = sVar23;
  *(undefined2 *)(lVar28 + 4 + lVar30 * 8) = 0;
  goto LAB_145574a1e;
joined_r0x000145574747:
  if (uVar17 == 0) goto LAB_145574a08;
  lVar28 = param_1[3];
  uVar12 = (ulonglong)(uVar17 - 1 >> 1);
  if (*(float *)(lVar28 + uVar12 * 8) <= fVar45) goto LAB_145574a08;
  *(undefined8 *)(lVar28 + (longlong)(int)uVar17 * 8) = *(undefined8 *)(lVar28 + uVar12 * 8);
  uVar17 = uVar17 - 1 >> 1;
  goto joined_r0x000145574747;
}



// FUNCTION 145574b20 FUN_145574b20 body=207 status=ok
// SIG undefined FUN_145574b20(void)

undefined8 FUN_145574b20(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0x14) + param_2;
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = (longlong *)*param_1;
  lVar3 = (ulonglong)uVar5 << 3;
  if (param_1[1] == 0) {
    lVar3 = (**(code **)(*plVar2 + 8))
                      (plVar2,lVar3,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcc);
    if (lVar3 == 0) {
      return 0;
    }
    if ((param_1[1] != 0) && (param_1[1] != lVar3)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)(lVar3 + uVar4 * 8) = *(undefined8 *)(param_1[1] + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
    }
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,param_1[1],lVar3,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcd);
    if (lVar3 == 0) {
      return 0;
    }
  }
  param_1[1] = lVar3;
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  return 1;
}



// FUNCTION 145574bf0 FUN_145574bf0 body=130 status=ok
// SIG undefined FUN_145574bf0(void)

void FUN_145574bf0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  while( true ) {
    iVar4 = (uint)uVar5 * 2;
    uVar6 = iVar4 + 1;
    uVar1 = iVar4 + 2;
    uVar7 = uVar5;
    if ((uVar6 < *(uint *)(param_1 + 0x10)) &&
       (*(float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 8) <
        *(float *)(*(longlong *)(param_1 + 8) + uVar5 * 8))) {
      uVar7 = (ulonglong)uVar6;
    }
    uVar6 = (uint)uVar7;
    if ((uVar1 < *(uint *)(param_1 + 0x10)) &&
       (*(float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8) <
        *(float *)(*(longlong *)(param_1 + 8) + uVar7 * 8))) {
      uVar6 = uVar1;
    }
    if (uVar6 == (uint)uVar5) break;
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = *(undefined8 *)(lVar2 + uVar5 * 8);
    *(undefined8 *)(lVar2 + uVar5 * 8) = *(undefined8 *)(lVar2 + (ulonglong)uVar6 * 8);
    uVar5 = (ulonglong)uVar6;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 8) = uVar3;
  }
  return;
}



// FUNCTION 145574c80 FUN_145574c80 body=207 status=ok
// SIG undefined FUN_145574c80(void)

undefined8 FUN_145574c80(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0x14) + param_2;
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = (longlong *)*param_1;
  lVar3 = (ulonglong)uVar5 * 2;
  if (param_1[1] == 0) {
    lVar3 = (**(code **)(*plVar2 + 8))
                      (plVar2,lVar3,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcc);
    if (lVar3 == 0) {
      return 0;
    }
    if ((param_1[1] != 0) && (param_1[1] != lVar3)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined2 *)(lVar3 + uVar4 * 2) = *(undefined2 *)(param_1[1] + uVar4 * 2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
    }
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,param_1[1],lVar3,
                       "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                       ,0xcd);
    if (lVar3 == 0) {
      return 0;
    }
  }
  param_1[1] = lVar3;
  *(uint *)((longlong)param_1 + 0x14) = uVar5;
  return 1;
}



// FUNCTION 145574d50 FUN_145574d50 body=236 status=ok
// SIG undefined FUN_145574d50(void)

undefined8 FUN_145574d50(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    ppuVar9 = &PTR_s_Default_14c746790;
    *param_1 = param_2[2];
    uVar8 = 0;
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 5) = uVar6;
    uVar1 = param_2[0xb];
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    param_1[7] = param_2[10];
    param_1[8] = uVar1;
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    uVar1 = param_2[0xf];
    uVar2 = param_2[0x10];
    uVar3 = param_2[0x11];
    param_1[0xb] = param_2[0xe];
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x12);
    param_1[0x10] = *param_2;
    param_1[0x12] = 6;
    do {
      lVar4 = 0;
      while( true ) {
        lVar5 = lVar4 + 1;
        if ("Default"[lVar4] != (*ppuVar9)[lVar4]) break;
        lVar4 = lVar5;
        if (lVar5 == 8) {
          uVar6 = FUN_145574ea0(param_1,&DAT_149dab434 + uVar8 * 0x54,(&DAT_149dab430)[uVar8 * 0x15]
                                ,param_3);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          param_1[0x11] = 3;
          return uVar6;
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      ppuVar9 = ppuVar9 + 1;
      if (uVar7 != 0) {
        return 0x80800006;
      }
    } while( true );
  }
  return 0x80260201;
}



// FUNCTION 145574e40 FUN_145574e40 body=81 status=ok
// SIG undefined FUN_145574e40(void)

undefined8 FUN_145574e40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    param_1 = param_1 + 0x4c;
    lVar2 = 6;
    do {
      uVar1 = FUN_1455fb230(param_1,param_2);
      param_1 = param_1 + 0xd8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 145574ea0 FUN_145574ea0 body=546 status=ok
// SIG undefined FUN_145574ea0(void)

undefined8 FUN_145574ea0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  if ((*param_2 + 0xfeff0000U & 0xfffeffff) == 0) {
    iVar1 = param_2[2];
    uVar4 = 0;
    param_1[0x12] = iVar1;
    local_38 = 0x1011000;
    local_34 = 0x18;
    if (iVar1 != 0) {
      do {
        local_28 = CONCAT44(param_2[uVar4 * 4 + 7],param_2[uVar4 * 4 + 6]);
        local_30 = CONCAT44(param_2[uVar4 * 4 + 5],param_2[uVar4 * 4 + 4]);
        uVar2 = FUN_1455fb090(&local_38,param_1 + uVar4 * 0x36 + 0x13,*param_1,param_1[0x10],param_3
                              ,param_4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < (uint)param_1[0x12]);
    }
    for (uVar3 = param_2[2]; uVar3 < 6; uVar3 = uVar3 + 1) {
      local_30 = 0;
      local_28 = 0;
      uVar2 = FUN_1455fb090(&local_38,param_1 + (ulonglong)uVar3 * 0x36 + 0x13,*param_1,
                            param_1[0x10],param_3,param_4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  else {
    if (*param_2 != 0x2010000) {
      return 0x80260202;
    }
    iVar1 = param_2[2];
    uVar4 = 0;
    param_1[0x12] = iVar1;
    if (iVar1 != 0) {
      do {
        local_20 = param_2[uVar4 * 5 + 7];
        local_30 = CONCAT44(param_2[uVar4 * 5 + 4],param_2[uVar4 * 5 + 3]);
        local_28 = CONCAT44(param_2[uVar4 * 5 + 6],param_2[uVar4 * 5 + 5]);
        local_38 = 0x2011000;
        local_34 = 0x1c;
        uVar2 = FUN_1455fb090(&local_38,param_1 + uVar4 * 0x36 + 0x13,*param_1,param_1[0x10],param_3
                              ,param_4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < (uint)param_1[0x12]);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1455750d0 FUN_1455750d0 body=488 status=ok
// SIG undefined FUN_1455750d0(void)

int FUN_1455750d0(undefined4 *param_1,void *param_2,void *param_3,undefined8 *param_4,int param_5)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  int local_res8;
  int local_68;
  
  local_68 = 0;
  iVar3 = 0;
  local_res8 = 0;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (void *)0x0)) || (param_3 == (void *)0x0)) ||
     (0xff < param_5 - 1U)) {
    return -0x7fd9fdff;
  }
  uVar6 = param_1[0x11];
  pvVar1 = (void *)*param_4;
  pvVar4 = pvVar1;
  if ((param_1[0x12] & 1) != 0) {
    pvVar4 = param_3;
  }
  if ((uVar6 & 1) == 0) {
    local_68 = -0x7fd9fdfd;
  }
  else {
    if ((uVar6 & 2) != 0) {
      param_1[0x11] = uVar6 & 0xfffffffd;
    }
    uVar7 = 0;
    pvVar5 = param_2;
    if (param_1[0x12] != 0) {
      do {
        lVar2 = (longlong)(int)uVar7;
        if (((((float)param_1[lVar2 * 0x36 + 0x16] != 1.0) ||
             ((float)param_1[lVar2 * 0x36 + 0x17] != 0.0)) ||
            (((float)param_1[lVar2 * 0x36 + 0x18] != 0.0 ||
             (((float)param_1[lVar2 * 0x36 + 0x13] != 1.0 ||
              ((float)param_1[lVar2 * 0x36 + 0x14] != 0.0)))))) ||
           ((float)param_1[lVar2 * 0x36 + 0x15] != 0.0)) {
          iVar3 = iVar3 + 1;
          if ((pvVar5 != param_2) &&
             (bVar8 = pvVar4 == param_3, pvVar4 = param_3, pvVar5 = pvVar1, bVar8)) {
            pvVar4 = pvVar1;
            pvVar5 = param_3;
          }
          local_68 = FUN_1455fb240(param_1 + uVar7 * 0x36 + 0x13,pvVar5,pvVar4,param_4[2],*param_1,
                                   param_1[1],param_5);
          local_res8 = iVar3;
          if (local_68 != 0) break;
          if (pvVar5 == param_2) {
            pvVar5 = pvVar1;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < (uint)param_1[0x12]);
      if ((local_res8 != 0) && (param_2 = pvVar4, param_3 == pvVar4)) {
        return local_68;
      }
    }
    memcpy(param_3,param_2,(ulonglong)(uint)(param_5 * param_1[1] * 4));
  }
  return local_68;
}



// FUNCTION 1455752c0 FUN_1455752c0 body=566 status=ok
// SIG undefined FUN_1455752c0(void)

undefined8 FUN_1455752c0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0x80260201;
  }
  iVar7 = *param_1;
  if (iVar7 == 0x1010000) {
    if (param_1[1] != 0x50) {
      return 0x80260202;
    }
  }
  else {
    if (iVar7 != 0x1020000) {
      return 0x80260202;
    }
    if (param_1[1] != 0x70) {
      return 0x80260202;
    }
  }
  iVar5 = *param_2;
  if ((iVar5 != 0x1010000) && (iVar5 != 0x1020000)) {
    *param_2 = iVar7;
    param_2[1] = param_1[1];
    iVar5 = iVar7;
  }
  uVar6 = param_1[2];
  uVar4 = 4;
  if (*param_1 != 0x1010000) {
    uVar4 = 6;
  }
  if ((uVar6 - 1 < 6) &&
     (((iVar5 != 0x1010000 || (uVar6 < 5)) && (param_2[2] = uVar6, param_1[3] == 0)))) {
    uVar3 = 0;
    param_2[3] = 0;
    uVar1 = 0;
    if (uVar6 != 0) {
      do {
        if (7 < (uint)param_1[uVar3 * 4 + 4]) goto LAB_1455754e0;
        param_2[uVar3 * 4 + 4] = param_1[uVar3 * 4 + 4];
        iVar7 = FUN_1455fb7a0(param_1[uVar3 * 4 + 5],0x41200000,0x46bb8000);
        param_2[uVar3 * 4 + 5] = iVar7;
        iVar7 = FUN_1455fb7a0(param_1[uVar3 * 4 + 7],0xc1a00000,0x41a00000);
        param_2[uVar3 * 4 + 7] = iVar7;
        iVar7 = FUN_1455fb7a0(param_1[uVar3 * 4 + 6],0x3dcccccd,0x41400000);
        param_2[uVar3 * 4 + 6] = iVar7;
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        uVar1 = param_2[2];
      } while (uVar6 < uVar1);
    }
    uVar3 = (ulonglong)uVar1;
    if (uVar1 < uVar4) {
      param_2 = param_2 + uVar3 * 4 + 5;
      do {
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        param_2[-1] = 0;
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2 = param_2 + 4;
      } while (uVar6 < uVar4);
    }
    uVar2 = 0;
  }
  else {
LAB_1455754e0:
    uVar2 = 0x80800008;
  }
  return uVar2;
}



// FUNCTION 145575500 FUN_145575500 body=1026 status=ok
// SIG undefined FUN_145575500(void)

undefined8 FUN_145575500(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  float fVar4;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0x80260201;
  }
  else {
    puVar3 = param_1 + 0x482;
    lVar2 = 0xc;
    *param_1 = param_2[2];
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x12);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 6) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    param_1[0x10] = *param_2;
    *(undefined8 *)(param_1 + 0x12) = 4;
    *(undefined8 *)(param_1 + 0x14) = 0x42c80000;
    param_1[0x16] = 0;
    do {
      puVar3[-0xa8] = 0;
      puVar3[-0x9c] = 0x3f800000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[-0x108] = 0xc1a00000;
      puVar3[-0xfc] = 0x40000000;
      puVar3[-0xb4] = 1.0 - fVar4;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[-0xf0] = 1.0 - fVar4;
      fVar4 = expf(-22.0 / (float)(uint)param_1[0x10]);
      puVar3[-0xd8] = 0x3f800000;
      puVar3[-0xcc] = 0;
      puVar3[-0xc0] = 0x3f000000;
      puVar3[-0x90] = 0xc1a00000;
      puVar3[-0xe4] = 1.0 - fVar4;
      puVar3[-0xc] = 0;
      *puVar3 = 0x3f800000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[-0x18] = 1.0 - fVar4;
      puVar3[-0x6c] = 0xc1a00000;
      puVar3[-0x60] = 0x40000000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[-0x54] = 1.0 - fVar4;
      fVar4 = expf(-22.0 / (float)(uint)param_1[0x10]);
      puVar3[-0x48] = 1.0 - fVar4;
      puVar3[-0x3c] = 0x3f800000;
      puVar3[-0x30] = 0;
      puVar3[-0x24] = 0x3f000000;
      puVar3[0xc] = 0xc1a00000;
      puVar3[0x90] = 0;
      puVar3[0x9c] = 0x3f800000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[0x84] = 1.0 - fVar4;
      puVar3[0x30] = 0xc1a00000;
      puVar3[0x3c] = 0x40000000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[0x48] = 1.0 - fVar4;
      fVar4 = expf(-22.0 / (float)(uint)param_1[0x10]);
      puVar3[0x54] = 1.0 - fVar4;
      puVar3[0x60] = 0x3f800000;
      puVar3[0x6c] = 0;
      puVar3[0x78] = 0x3f000000;
      puVar3[0xa8] = 0xc1a00000;
      puVar3[300] = 0;
      puVar3[0x138] = 0x3f800000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[0x120] = 1.0 - fVar4;
      puVar3[0xcc] = 0xc1a00000;
      puVar3[0xd8] = 0x40000000;
      fVar4 = expf(-440.0 / (float)(uint)param_1[0x10]);
      puVar3[0xe4] = 1.0 - fVar4;
      fVar4 = expf(-22.0 / (float)(uint)param_1[0x10]);
      puVar3[0xf0] = 1.0 - fVar4;
      puVar3[0xfc] = 0x3f800000;
      puVar3[0x108] = 0;
      puVar3[0x114] = 0x3f000000;
      puVar3[0x144] = 0xc1a00000;
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    uVar1 = FUN_1455759a0(param_1,&DAT_149dab494,0xffff,param_3);
    if (-1 < (int)uVar1) {
      param_1[0x11] = 3;
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 145575910 FUN_145575910 body=132 status=ok
// SIG undefined FUN_145575910(void)

int FUN_145575910(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = 0;
  if (param_1 == 0) {
    return -0x7fd9fdff;
  }
  param_1 = param_1 + 100;
  lVar4 = 4;
  do {
    lVar3 = 4;
    do {
      iVar1 = FUN_1455fb230(param_1,param_2);
      if (iVar2 == 0) {
        iVar2 = iVar1;
      }
      param_1 = param_1 + 0xd8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return iVar2;
}


