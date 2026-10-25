// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145bf0dfc FUN_145bf0dfc body=47 status=ok
// SIG undefined FUN_145bf0dfc(void)

void FUN_145bf0dfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xa8,0x10);
  FUN_145bf0e2c(uVar1,param_1,param_2);
  return;
}



// FUNCTION 145bf0e2c FUN_145bf0e2c body=203 status=ok
// SIG undefined FUN_145bf0e2c(void)

undefined8 * FUN_145bf0e2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_149e05090;
  param_1[1] = param_2;
  FUN_140056680(param_1 + 2,param_3);
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  *(undefined2 *)(param_1 + 0x14) = 0;
  if (DAT_14c758618 != 0) {
    cVar1 = FUN_144a38768(param_1 + 2,L".pak",4,1);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 145bf0ef8 FUN_145bf0ef8 body=59 status=ok
// SIG undefined FUN_145bf0ef8(void)

void FUN_145bf0ef8(longlong param_1)

{
  FUN_14490df4a();
  FUN_145bf0f34(param_1 + 0x248);
  FUN_145bf0ff0(param_1 + 0x658);
  FUN_144725486(param_1 + 0x288);
  *(byte *)(param_1 + -8) = *(byte *)(param_1 + -8) & 0xfc;
  return;
}



// FUNCTION 145bf0f34 FUN_145bf0f34 body=70 status=ok
// SIG undefined FUN_145bf0f34(void)

void FUN_145bf0f34(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar2 = DAT_14c760db4;
  }
  if ((2 < (int)uVar2) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_145bf0f7a(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145bf0f7a FUN_145bf0f7a body=117 status=ok
// SIG undefined FUN_145bf0f7a(void)

void FUN_145bf0f7a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = 0x50;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x10);
  *param_1 = &PTR_LAB_14a217b60;
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
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



// FUNCTION 145bf0ff0 FUN_145bf0ff0 body=192 status=ok
// SIG undefined FUN_145bf0ff0(void)

void FUN_145bf0ff0(undefined4 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 1) = 0x3f80000000000000;
  param_1[3] = 0;
  bVar5 = true;
  do {
    bVar8 = bVar5;
    puVar2 = *(undefined8 **)(param_1 + lVar7 * 2 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + lVar7 * 2 + 8) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    plVar3 = *(longlong **)(param_1 + lVar7 * 2 + 4);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + lVar7 * 2 + 4) = 0;
      (**(code **)(*plVar3 + 0x38))();
    }
    lVar7 = 1;
    bVar5 = false;
  } while (bVar8);
  iVar6 = param_1[0xe];
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xc) + lVar7 * 8);
      if (lVar4 != 0) {
        FUN_14003821a(lVar4);
        FUN_1400020a8(lVar4);
        *(undefined8 *)(*(longlong *)(param_1 + 0xc) + lVar7 * 8) = 0;
        iVar6 = param_1[0xe];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  return;
}



// FUNCTION 145bf10b0 FUN_145bf10b0 body=63 status=ok
// SIG undefined FUN_145bf10b0(void)

void FUN_145bf10b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145bf10f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145bf10f0 FUN_145bf10f0 body=83 status=ok
// SIG undefined FUN_145bf10f0(void)

ulonglong FUN_145bf10f0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 145bf1144 FUN_145bf1144 body=40 status=ok
// SIG undefined FUN_145bf1144(void)

undefined8 FUN_145bf1144(undefined8 param_1,int param_2)

{
  FUN_145bf116c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf116c FUN_145bf116c body=127 status=ok
// SIG undefined FUN_145bf116c(void)

void FUN_145bf116c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5169d0;
  param_1[5] = &PTR_FUN_14a516cf0;
  plVar3 = (longlong *)param_1[0x32];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145bf11ec FUN_145bf11ec body=40 status=ok
// SIG undefined FUN_145bf11ec(void)

undefined8 FUN_145bf11ec(undefined8 param_1,int param_2)

{
  FUN_145bf1214();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf1214 FUN_145bf1214 body=127 status=ok
// SIG undefined FUN_145bf1214(void)

void FUN_145bf1214(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a51dee0;
  param_1[5] = &PTR_FUN_14a51e200;
  plVar3 = (longlong *)param_1[0x31];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145bf1294 FUN_145bf1294 body=40 status=ok
// SIG undefined FUN_145bf1294(void)

undefined8 FUN_145bf1294(undefined8 param_1,int param_2)

{
  FUN_145bf12bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf12bc FUN_145bf12bc body=127 status=ok
// SIG undefined FUN_145bf12bc(void)

void FUN_145bf12bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a522a10;
  param_1[5] = &PTR_FUN_14a522d30;
  plVar3 = (longlong *)param_1[0x35];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145bf133c FUN_145bf133c body=40 status=ok
// SIG undefined FUN_145bf133c(void)

undefined8 FUN_145bf133c(undefined8 param_1,int param_2)

{
  FUN_145bf1364();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf1364 FUN_145bf1364 body=127 status=ok
// SIG undefined FUN_145bf1364(void)

void FUN_145bf1364(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5253f0;
  param_1[5] = &PTR_FUN_14a525710;
  plVar3 = (longlong *)param_1[0x32];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145bf13e4 FUN_145bf13e4 body=40 status=ok
// SIG undefined FUN_145bf13e4(void)

undefined8 FUN_145bf13e4(undefined8 param_1,int param_2)

{
  FUN_145bf140c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf140c FUN_145bf140c body=127 status=ok
// SIG undefined FUN_145bf140c(void)

void FUN_145bf140c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a526180;
  param_1[5] = &PTR_FUN_14a5264a0;
  plVar3 = (longlong *)param_1[0x33];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145bf148c FUN_145bf148c body=40 status=ok
// SIG undefined FUN_145bf148c(void)

undefined8 FUN_145bf148c(undefined8 param_1,int param_2)

{
  FUN_145bf14b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf14b4 FUN_145bf14b4 body=127 status=ok
// SIG undefined FUN_145bf14b4(void)

void FUN_145bf14b4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a533a00;
  param_1[5] = &PTR_FUN_14a533d20;
  plVar3 = (longlong *)param_1[0x34];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145bf1533 FUN_145bf1533 body=57 status=ok
// SIG undefined FUN_145bf1533(void)

void FUN_145bf1533(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145bf156c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5c8a50;
  puVar1[5] = &PTR_FUN_14a5c9040;
  puVar1[6] = &PTR_LAB_14a5c9080;
  return;
}



// FUNCTION 145bf156c FUN_145bf156c body=110 status=ok
// SIG undefined FUN_145bf156c(void)

undefined8 * FUN_145bf156c(undefined8 *param_1)

{
  FUN_14114c36c();
  *param_1 = &PTR_FUN_14a83db60;
  param_1[5] = &PTR_FUN_14a83e150;
  param_1[6] = &PTR_LAB_14a83e190;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xbf;
  *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xf8;
  return param_1;
}



// FUNCTION 145bf15da FUN_145bf15da body=40 status=ok
// SIG undefined FUN_145bf15da(void)

undefined8 FUN_145bf15da(undefined8 param_1,int param_2)

{
  FUN_145bf1602();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf1602 FUN_145bf1602 body=127 status=ok
// SIG undefined FUN_145bf1602(void)

void FUN_145bf1602(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa2f130;
  param_1[5] = &PTR_FUN_14aa2f710;
  param_1[6] = &PTR_LAB_14aa2f750;
  FUN_1449db362(param_1 + 0x67);
  FUN_1449db362(param_1 + 0x65);
  FUN_1449db362(param_1 + 99);
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145bf1682 FUN_145bf1682 body=40 status=ok
// SIG undefined FUN_145bf1682(void)

undefined8 FUN_145bf1682(undefined8 param_1,int param_2)

{
  FUN_145bf16aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf16aa FUN_145bf16aa body=127 status=ok
// SIG undefined FUN_145bf16aa(void)

void FUN_145bf16aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acfedf0;
  param_1[5] = &PTR_LAB_14acff090;
  param_1[6] = &PTR_FUN_14acff1a0;
  if (*(char *)(param_1 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2dc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2dc) = 0;
  }
  FUN_140a076b8(param_1 + 0x53);
  FUN_1409f5ace(param_1 + 0x42);
  FUN_140a076f8(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf172a FUN_145bf172a body=263 status=ok
// SIG undefined FUN_145bf172a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bf172a(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14cbf4530 = 0;
  DAT_14cbf4538 = 0;
  DAT_14cbf4510 = 0;
  _DAT_14cbf4518 = 0;
  _DAT_14cbf453c = 0xffffffff00000080;
  DAT_14cbf4544 = 0;
  DAT_14cbf4550 = 0;
  DAT_14cbf4558 = 0;
  uVar5 = (ulonglong)(param_1[1] - *param_1) >> 4;
  uVar4 = (uint)uVar5;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145bf1cce(uVar5 & 0xffffffff);
    if (uVar4 < 4) {
      iVar2 = 1;
    }
    else {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14cbf4558 == 0) || (DAT_14cbf4558 < iVar2)) {
      DAT_14cbf4558 = iVar2;
      FUN_145bf1af4();
    }
  }
  puVar3 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      local_40 = *puVar3;
      uStack_3c = puVar3[1];
      uStack_38 = puVar3[2];
      uStack_34 = puVar3[3];
      FUN_145bf1832(local_2c,&local_40);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf1832 FUN_145bf1832 body=288 status=ok
// SIG undefined FUN_145bf1832(void)

undefined4 * FUN_145bf1832(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bf19e6(local_40);
  puVar2 = (undefined4 *)param_2[1];
  bVar1 = *(byte *)*param_2;
  *local_38 = bVar1;
  *(undefined4 *)(local_38 + 4) = *puVar2;
  local_38[8] = 0xff;
  local_38[9] = 0xff;
  local_38[10] = 0xff;
  local_38[0xb] = 0xff;
  local_44 = local_40[0];
  cVar5 = FUN_145bf1954(bVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14cbf4518 - DAT_14cbf4544;
    iVar9 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14cbf4558)) {
      uVar8 = DAT_14cbf4558 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 0xc) = uVar8;
      puVar7 = DAT_14cbf4550;
      if (DAT_14cbf4550 == (undefined *)0x0) {
        puVar7 = &DAT_14cbf4548;
      }
      *(undefined4 *)(local_38 + 8) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cbf4558 - 1U & uVar8) * 4);
      puVar7 = DAT_14cbf4550;
      if (DAT_14cbf4550 == (undefined *)0x0) {
        puVar7 = &DAT_14cbf4548;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cbf4558 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14cbf4558 = iVar9;
      FUN_145bf1af4();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf1954 FUN_145bf1954 body=145 status=ok
// SIG undefined FUN_145bf1954(void)

undefined8 FUN_145bf1954(uint param_1,char *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14cbf4518 - DAT_14cbf4544 != 1) && (DAT_14cbf4518 != DAT_14cbf4544)) {
    puVar3 = &DAT_14cbf4548;
    if (DAT_14cbf4550 != (undefined *)0x0) {
      puVar3 = DAT_14cbf4550;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cbf4558 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (undefined8 *)(DAT_14cbf4510 + (longlong)iVar2 * 0x10);
        if (*(char *)(DAT_14cbf4510 + (longlong)iVar2 * 0x10) == *param_2) {
          *puVar1 = *(undefined8 *)param_2;
          FUN_148f96efa(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(puVar1 + 1);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145bf19e6 FUN_145bf19e6 body=269 status=ok
// SIG undefined FUN_145bf19e6(void)

int * FUN_145bf19e6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbf4540;
  iVar4 = DAT_14cbf4518;
  if (DAT_14cbf4544 == 0) {
    iVar2 = DAT_14cbf4518 + 1;
    bVar7 = DAT_14cbf451c == DAT_14cbf4518;
    DAT_14cbf4518 = iVar2;
    if (bVar7) {
      FUN_144869a3c(&DAT_14cbf4510,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cbf4520,1);
    puVar3 = DAT_14cbf4530;
    if (DAT_14cbf4530 == (undefined *)0x0) {
      puVar3 = &DAT_14cbf4520;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cbf4540;
    DAT_14cbf4540 = *(int *)(DAT_14cbf4510 + 4 + lVar6 * 0x10);
    DAT_14cbf4544 = DAT_14cbf4544 + -1;
    iVar4 = iVar2;
    if (DAT_14cbf4544 != 0) {
      *(undefined4 *)(DAT_14cbf4510 + (longlong)DAT_14cbf4540 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cbf4520;
  if (DAT_14cbf4530 != (undefined *)0x0) {
    puVar3 = DAT_14cbf4530;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14cbf4510;
  return param_1;
}



// FUNCTION 145bf1af4 FUN_145bf1af4 body=472 status=ok
// SIG undefined FUN_145bf1af4(void)

void FUN_145bf1af4(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf4550 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbf4550,0,0,4);
  }
  uVar7 = DAT_14cbf4558;
  uVar2 = local_50;
  if (DAT_14cbf4558 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cbf4548,0,DAT_14cbf4558,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cbf4550;
        if (DAT_14cbf4550 == (undefined *)0x0) {
          puVar4 = &DAT_14cbf4548;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cbf4558 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbf4520;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbf4538 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbf4510;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = DAT_14cbf4558 - 1 & (uint)*(byte *)(lVar1 + lVar5);
        *(uint *)(lVar1 + 0xc + lVar5) = uVar7;
        puVar4 = DAT_14cbf4550;
        if (DAT_14cbf4550 == (undefined *)0x0) {
          puVar4 = &DAT_14cbf4548;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cbf4558 - 1 & uVar7) * 4);
        puVar4 = DAT_14cbf4550;
        if (DAT_14cbf4550 == (undefined *)0x0) {
          puVar4 = &DAT_14cbf4548;
        }
        *(int *)(puVar4 + (ulonglong)(DAT_14cbf4558 - 1 & uVar7) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf1cce FUN_145bf1cce body=481 status=ok
// SIG undefined FUN_145bf1cce(void)

void FUN_145bf1cce(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar3 = DAT_14cbf4518;
  uVar9 = param_1 - DAT_14cbf4518;
  if (uVar9 != 0 && DAT_14cbf4518 <= (int)param_1) {
    iVar8 = DAT_14cbf4518;
    if (DAT_14cbf451c < (int)param_1) {
      FUN_14472eb64(&DAT_14cbf4510);
      iVar8 = DAT_14cbf4518;
    }
    DAT_14cbf4518 = iVar8 + uVar9;
    if ((uint)(DAT_14cbf451c - iVar8) < uVar9) {
      FUN_144869a3c(&DAT_14cbf4510);
    }
    lVar2 = DAT_14cbf4510;
    if (iVar8 < (int)param_1) {
      piVar7 = (int *)((ulonglong)param_1 * 0x10 + DAT_14cbf4510 + -0xc);
      uVar12 = (ulonglong)param_1;
      do {
        uVar1 = uVar12 - 1;
        if (DAT_14cbf4544 == 0) {
          iVar11 = (int)uVar12 + -1;
        }
        else {
          *(int *)(lVar2 + (longlong)DAT_14cbf4540 * 0x10) = (int)uVar12 + -1;
          iVar11 = (int)uVar1;
        }
        piVar7[-1] = -1;
        iVar13 = -1;
        if (0 < DAT_14cbf4544) {
          iVar13 = DAT_14cbf4540;
        }
        *piVar7 = iVar13;
        DAT_14cbf4544 = DAT_14cbf4544 + 1;
        piVar7 = piVar7 + -4;
        uVar12 = uVar1;
        DAT_14cbf4540 = iVar11;
      } while ((longlong)iVar8 < (longlong)uVar1);
    }
    if (iVar3 == 0) {
      uVar10 = uVar9 + 0x1f >> 5;
      DAT_14cbf4538 = uVar9;
      if (DAT_14cbf453c + 0x1f >> 5 < uVar10) {
        FUN_14499171c(&DAT_14cbf4520,0,uVar10,4);
        DAT_14cbf453c = uVar9 + 0x1f & 0xffffffe0;
      }
      puVar6 = DAT_14cbf4530;
      if (DAT_14cbf4530 == (undefined *)0x0) {
        puVar6 = &DAT_14cbf4520;
      }
      if (uVar9 < 0x101) {
        uVar10 = uVar10 + (uVar10 == 0);
      }
      memset(puVar6,0,(ulonglong)(uVar10 << 2));
      uVar9 = DAT_14cbf4538 + 0x1f;
      if (-1 < (int)DAT_14cbf4538) {
        uVar9 = DAT_14cbf4538;
      }
      if ((int)DAT_14cbf4538 % 0x20 != 0) {
        puVar6 = &DAT_14cbf4520;
        if (DAT_14cbf4530 != (undefined *)0x0) {
          puVar6 = DAT_14cbf4530;
        }
        bVar5 = -(char)((int)DAT_14cbf4538 % 0x20);
        *(uint *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
             (uint)(*(int *)(puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else if (-1 < (int)uVar9) {
      uVar4 = FUN_144a54ea4(&DAT_14cbf4520,uVar9);
      FUN_1447c6044(&DAT_14cbf4520,uVar4,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 145bf1eb0 FUN_145bf1eb0 body=40 status=ok
// SIG undefined FUN_145bf1eb0(void)

undefined8 FUN_145bf1eb0(undefined8 param_1,int param_2)

{
  FUN_145bf1ed8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf1ed8 FUN_145bf1ed8 body=149 status=ok
// SIG undefined FUN_145bf1ed8(void)

void FUN_145bf1ed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bac98a0;
  FUN_145bf22f8();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf1f6e(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf1fa6(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf1f6e FUN_145bf1f6e body=55 status=ok
// SIG undefined FUN_145bf1f6e(void)

void FUN_145bf1f6e(longlong *param_1)

{
  FUN_145bf215e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf1fa6 FUN_145bf1fa6 body=55 status=ok
// SIG undefined FUN_145bf1fa6(void)

void FUN_145bf1fa6(longlong *param_1)

{
  FUN_145bf1fde(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf1fde FUN_145bf1fde body=383 status=ok
// SIG undefined FUN_145bf1fde(void)

void FUN_145bf1fde(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145bf215e FUN_145bf215e body=409 status=ok
// SIG undefined FUN_145bf215e(void)

void FUN_145bf215e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf22f8 FUN_145bf22f8 body=410 status=ok
// SIG undefined FUN_145bf22f8(void)

void FUN_145bf22f8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar4 = 0;
  local_58 = lVar2;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_60);
    iVar4 = *(int *)(param_1 + 0x60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar4) || (local_58 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (((iStack_6c != iVar4) || (local_78 != lVar2)) || (local_88 != plVar1));
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    FUN_1490f0cdc(plVar1);
    FUN_1490f0e20(plVar1);
  }
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    FUN_1490f0f3e(param_1 + 0x88);
    FUN_1490f1082(param_1 + 0x88);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf2494 FUN_145bf2494 body=72 status=ok
// SIG undefined FUN_145bf2494(void)

void FUN_145bf2494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab18770;
  FUN_145bf2512();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf24dc(param_1 + 1);
  return;
}



// FUNCTION 145bf24dc FUN_145bf24dc body=53 status=ok
// SIG undefined FUN_145bf24dc(void)

void FUN_145bf24dc(longlong *param_1)

{
  FUN_145bf25e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf2512 FUN_145bf2512 body=142 status=ok
// SIG undefined FUN_145bf2512(void)

void FUN_145bf2512(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined2 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145bf25a0(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145bf25a0 FUN_145bf25a0 body=63 status=ok
// SIG undefined FUN_145bf25a0(void)

void FUN_145bf25a0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145bf25e0(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140195ce8(param_1);
    return;
  }
  FUN_147dbb042(param_1);
  FUN_145bf25e0(param_1);
  return;
}



// FUNCTION 145bf25e0 FUN_145bf25e0 body=88 status=ok
// SIG undefined FUN_145bf25e0(void)

void FUN_145bf25e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 145bf2638 FUN_145bf2638 body=40 status=ok
// SIG undefined FUN_145bf2638(void)

undefined8 FUN_145bf2638(undefined8 param_1,int param_2)

{
  FUN_145bf2660();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf2660 FUN_145bf2660 body=46 status=ok
// SIG undefined FUN_145bf2660(void)

void FUN_145bf2660(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae425a0;
  param_1[5] = &PTR_FUN_14ae428f0;
  if (*(char *)((longlong)param_1 + 0x22c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
    FUN_145bf268e();
    return;
  }
  *param_1 = &PTR_FUN_14ae43210;
  param_1[5] = &PTR_FUN_14ae43560;
  plVar3 = (longlong *)param_1[0x42];
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
  plVar3 = (longlong *)param_1[0x40];
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
  plVar3 = (longlong *)param_1[0x3e];
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
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145807312(param_1);
  return;
}



// FUNCTION 145bf268e FUN_145bf268e body=332 status=ok
// SIG undefined FUN_145bf268e(void)

void FUN_145bf268e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae43210;
  param_1[5] = &PTR_FUN_14ae43560;
  plVar3 = (longlong *)param_1[0x42];
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
  plVar3 = (longlong *)param_1[0x40];
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
  plVar3 = (longlong *)param_1[0x3e];
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
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_145807312(param_1);
  return;
}



// FUNCTION 145bf27da FUN_145bf27da body=40 status=ok
// SIG undefined FUN_145bf27da(void)

undefined8 FUN_145bf27da(undefined8 param_1,int param_2)

{
  FUN_145bf2802();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf2802 FUN_145bf2802 body=83 status=ok
// SIG undefined FUN_145bf2802(void)

void FUN_145bf2802(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac74090;
  param_1[0x72] = &PTR_FUN_14ac746d0;
  FUN_140cbb40e(param_1 + 0xed);
  FUN_140cbb262(param_1 + 0x77);
  FUN_145bf2856(param_1 + 0x73,1);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145bf2856 FUN_145bf2856 body=128 status=ok
// SIG undefined FUN_145bf2856(void)

void FUN_145bf2856(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145bf28d6 FUN_145bf28d6 body=40 status=ok
// SIG undefined FUN_145bf28d6(void)

undefined8 FUN_145bf28d6(undefined8 param_1,int param_2)

{
  FUN_145bf28fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf28fe FUN_145bf28fe body=83 status=ok
// SIG undefined FUN_145bf28fe(void)

void FUN_145bf28fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b081130;
  FUN_145bf2952(param_1 + 0x7b,1);
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145bf2952 FUN_145bf2952 body=128 status=ok
// SIG undefined FUN_145bf2952(void)

void FUN_145bf2952(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145bf29d2 FUN_145bf29d2 body=40 status=ok
// SIG undefined FUN_145bf29d2(void)

undefined8 FUN_145bf29d2(undefined8 param_1,int param_2)

{
  FUN_145bf29fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf29fa FUN_145bf29fa body=94 status=ok
// SIG undefined FUN_145bf29fa(void)

void FUN_145bf29fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1cf290;
  param_1[0x80] = &PTR_FUN_14b1cf900;
  FUN_144a2da94(param_1 + 0xab);
  FUN_145bf2a58(param_1[0xa3],*(undefined4 *)(param_1 + 0xa4));
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf2a84(param_1);
  return;
}



// FUNCTION 145bf2a58 FUN_145bf2a58 body=43 status=ok
// SIG undefined FUN_145bf2a58(void)

void FUN_145bf2a58(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486ddbd2(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 145bf2a84 FUN_145bf2a84 body=74 status=ok
// SIG undefined FUN_145bf2a84(void)

void FUN_145bf2a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b178000;
  param_1[0x80] = &PTR_LAB_14b178670;
  FUN_14063ace6(param_1 + 0x87);
  FUN_14063a6a6(param_1 + 0x80);
  FUN_145837d3e(param_1);
  return;
}



// FUNCTION 145bf2ace FUN_145bf2ace body=159 status=ok
// SIG undefined FUN_145bf2ace(void)

undefined8 * FUN_145bf2ace(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145bf2b6e(&local_38,param_3);
  FUN_145bf2bec(param_1 + 8,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf2b6e FUN_145bf2b6e body=124 status=ok
// SIG undefined FUN_145bf2b6e(void)

void FUN_145bf2b6e(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf2bec FUN_145bf2bec body=216 status=ok
// SIG undefined FUN_145bf2bec(void)

undefined8 * FUN_145bf2bec(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf2cc6 FUN_145bf2cc6 body=274 status=ok
// SIG undefined FUN_145bf2cc6(void)

undefined4 * FUN_145bf2cc6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bf2fac(param_1,local_48);
  FUN_145bf2dda(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_145bf2ef0(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145bf3284(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf2dda FUN_145bf2dda body=151 status=ok
// SIG undefined FUN_145bf2dda(void)

undefined8 * FUN_145bf2dda(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_145bf2e72(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14580fc1a(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf2e72 FUN_145bf2e72 body=125 status=ok
// SIG undefined FUN_145bf2e72(void)

undefined8 * FUN_145bf2e72(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145bf30a8();
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



// FUNCTION 145bf2ef0 FUN_145bf2ef0 body=188 status=ok
// SIG undefined FUN_145bf2ef0(void)

undefined8 FUN_145bf2ef0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14580fc1a((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148e2c344(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145bf2fac FUN_145bf2fac body=251 status=ok
// SIG undefined FUN_145bf2fac(void)

int * FUN_145bf2fac(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 145bf30a8 FUN_145bf30a8 body=475 status=ok
// SIG undefined FUN_145bf30a8(void)

longlong * FUN_145bf30a8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_1411347f0(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145bf3284 FUN_145bf3284 body=478 status=ok
// SIG undefined FUN_145bf3284(void)

void FUN_145bf3284(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x5c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
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



// FUNCTION 145bf3464 FUN_145bf3464 body=364 status=ok
// SIG undefined FUN_145bf3464(void)

undefined1 * FUN_145bf3464(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [43];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  puVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffff3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[100] = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x1000000000000;
  param_1[0x70] = 0;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffff00000100;
  local_4c = 0x473b8000;
  local_4d = 0;
  local_48 = &local_4d;
  local_40 = &local_4c;
  FUN_145bf35d2(puVar1,local_34,&local_48);
  local_4c = 0x46fa0000;
  local_4d = 1;
  local_48 = &local_4d;
  local_40 = &local_4c;
  FUN_145bf35d2(puVar1,local_34,&local_48);
  local_4c = 0x46bb8000;
  local_4d = 2;
  local_48 = &local_4d;
  local_40 = &local_4c;
  FUN_145bf35d2(puVar1,local_34,&local_48);
  local_4c = 0x463b8000;
  local_4d = 3;
  local_48 = &local_4d;
  local_40 = &local_4c;
  FUN_145bf35d2(puVar1,local_34,&local_48);
  local_4c = 0x45fa0000;
  local_4d = 4;
  local_48 = &local_4d;
  local_40 = &local_4c;
  FUN_145bf35d2(puVar1,local_34,&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf35d2 FUN_145bf35d2 body=277 status=ok
// SIG undefined FUN_145bf35d2(void)

undefined4 * FUN_145bf35d2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
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
  FUN_145bf3768(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  *(undefined4 *)(local_40 + 4) = *puVar2;
  local_40[8] = 0xff;
  local_40[9] = 0xff;
  local_40[10] = 0xff;
  local_40[0xb] = 0xff;
  local_4c = local_48[0];
  cVar4 = FUN_145bf36e8(param_1,bVar1,local_40,&local_4c);
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
      *(uint *)(local_40 + 0xc) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1414dc4e8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf36e8 FUN_145bf36e8 body=127 status=ok
// SIG undefined FUN_145bf36e8(void)

undefined8 FUN_145bf36e8(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(char *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147964cb0(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 145bf3768 FUN_145bf3768 body=230 status=ok
// SIG undefined FUN_145bf3768(void)

int * FUN_145bf3768(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 145bf384e FUN_145bf384e body=158 status=ok
// SIG undefined FUN_145bf384e(void)

bool FUN_145bf384e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf38ee FUN_145bf38ee body=586 status=ok
// SIG undefined FUN_145bf38ee(void)

void FUN_145bf38ee(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14a8bc3e0;
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
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14ab2dc10;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar2[4] = FUN_1408e4ee6;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_145bf3bbe(&local_30,&DAT_149e063b2,&local_40);
    *(undefined8 *)(param_1 + 0x240) = local_30;
    FUN_1449db362(&local_40);
    lVar4 = FUN_144a126be(param_1);
    bVar3 = *(byte *)(lVar4 + 0x152);
    if ((bVar3 == 1) || ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) {
      *(undefined4 *)(param_1 + 0x248) = DAT_14c7614c0;
      *(undefined4 *)(param_1 + 0x24c) = DAT_14c7614c8;
      DAT_14c7614c0 = DAT_14c761f14;
      DAT_14c7614c8 = 0;
    }
  }
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    FUN_1459b40c6(param_2);
  }
  if ((param_2 != (undefined8 *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_145bf3b3a((longlong *)(param_1 + 0x48),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = param_2;
  if (DAT_14c950c29 == 1 && param_2 != (undefined8 *)0x0) {
    FUN_1456cec3c(param_2);
  }
  local_40 = param_2;
  if ((param_2 != (undefined8 *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  FUN_145bf3ee4(param_1 + 0xa8,&local_30,&local_40);
  bVar3 = FUN_1400900b4(param_2);
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + (uint)bVar3;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf3b3a FUN_145bf3b3a body=132 status=ok
// SIG undefined FUN_145bf3b3a(void)

void FUN_145bf3b3a(longlong param_1,int param_2)

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



// FUNCTION 145bf3bbe FUN_145bf3bbe body=304 status=ok
// SIG undefined FUN_145bf3bbe(void)

undefined8 * FUN_145bf3bbe(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_140f36250(param_2);
  *param_1 = 0;
  if (iVar2 != -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad5ad8);
    iVar1 = DAT_14cad5b08;
    lVar5 = (longlong)DAT_14cad5b08;
    if (DAT_14cad5b08 <= iVar2) {
      uVar4 = (iVar2 - DAT_14cad5b08) + 1;
      uVar3 = DAT_14cad5b0c - DAT_14cad5b08;
      DAT_14cad5b08 = iVar2 + 1;
      if (uVar3 < uVar4) {
        FUN_145bf3e48(iVar1);
      }
      memset((void *)(lVar5 * 0x18 + DAT_14cad5b00),0,(longlong)(int)uVar4 * 0x18);
    }
    lVar5 = (longlong)iVar2 * 0x18 + DAT_14cad5b00;
    local_48 = 0;
    local_40 = 0;
    FUN_145bf3cf0(&local_48,param_3);
    FUN_145bf3d6e(lVar5,param_1,&local_48);
    FUN_1449db362(&local_48);
    FUN_140de397a(&DAT_14cad5b10,iVar2,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad5ad8);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf3cf0 FUN_145bf3cf0 body=124 status=ok
// SIG undefined FUN_145bf3cf0(void)

void FUN_145bf3cf0(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf3d6e FUN_145bf3d6e body=216 status=ok
// SIG undefined FUN_145bf3d6e(void)

undefined8 * FUN_145bf3d6e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf3e48 FUN_145bf3e48 body=155 status=ok
// SIG undefined FUN_145bf3e48(void)

void FUN_145bf3e48(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cad5b08;
  if (param_1 <= (int)DAT_14cad5b08) {
    if (DAT_14cad5b0c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cad5b08) {
        uVar2 = DAT_14cad5b08;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cad5b08 * 3) >> 3) + (longlong)(int)DAT_14cad5b08 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    DAT_14cad5b0c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cad5b00,param_1,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145bf3ee4 FUN_145bf3ee4 body=380 status=ok
// SIG undefined FUN_145bf3ee4(void)

undefined4 * FUN_145bf3ee4(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bf4106(param_1,local_40);
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
  cVar3 = FUN_145bf4062(param_1,uVar4,local_38,&local_44);
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
      FUN_145bf41ec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf4062 FUN_145bf4062 body=162 status=ok
// SIG undefined FUN_145bf4062(void)

undefined8 FUN_145bf4062(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_147dd86be(param_1,param_2,&local_30);
    if (iVar1 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_145bf4924(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_145bf4086;
    }
  }
  uVar2 = 0;
LAB_145bf4086:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf4106 FUN_145bf4106 body=230 status=ok
// SIG undefined FUN_145bf4106(void)

int * FUN_145bf4106(longlong *param_1,int *param_2)

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



// FUNCTION 145bf41ec FUN_145bf41ec body=517 status=ok
// SIG undefined FUN_145bf41ec(void)

void FUN_145bf41ec(longlong *param_1)

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



// FUNCTION 145bf43f2 FUN_145bf43f2 body=920 status=ok
// SIG undefined FUN_145bf43f2(void)

void FUN_145bf43f2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong local_98 [2];
  longlong local_88;
  longlong local_78;
  longlong local_70;
  longlong *local_68 [2];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98[0] = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_68[0] = local_98;
  FUN_145bf4998(param_1 + 0x48);
  local_70 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_145bf478c(param_1 + 0xa8,&local_70);
  local_78 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_145bf478c(param_1 + 0x58,&local_78);
  lVar10 = FUN_144a126be(param_1);
  bVar5 = *(byte *)(lVar10 + 0x152);
  if ((bVar5 == 1) || ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))) {
    uVar11 = FUN_144a7757c();
    lVar12 = FUN_144a78ede(param_2,uVar11);
    if (lVar12 != lVar10) {
      FUN_1400bbfc4(local_98,param_2);
      iVar1 = *(int *)(lVar10 + 0x90);
      if ((longlong)iVar1 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x88);
        local_a8 = param_1 + 0x250;
        lVar12 = 0;
        bVar15 = false;
        do {
          lVar2 = *(longlong *)(lVar10 + lVar12);
          if (lVar2 != 0) {
            lVar13 = FUN_14048957e();
            if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) &&
               (cVar6 = FUN_144a7afa6(lVar2 + 0x1d8,local_98), cVar6 != '\0')) {
              if (!bVar15) {
                FUN_1400bbfc4(local_68,param_2);
                uVar4 = (uint)((ulonglong)local_68[1] >> 0x10);
                uVar17 = (uint)local_68[1] & 0xffff;
                uVar7 = (uint)((ulonglong)local_68[0] >> 0x10);
                uVar16 = (uint)local_68[0] & 0xffff;
                uVar7 = ((uint)local_68[0] << 0x10 | uVar16) + (int)((ulonglong)local_68[0] >> 0x20)
                        + (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar16 >> 4);
                uVar8 = FUN_144a78877(0,(uVar7 >> 2) +
                                        ((uint)local_68[1] << 0x10 | uVar17) +
                                        (int)((ulonglong)local_68[1] >> 0x20) +
                                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar17 >> 4) +
                                        uVar7 * 0x40 + 0x9e3779b9 ^ uVar7);
                puVar14 = &DAT_149dfb77a;
                if (local_50 != 0) {
                  puVar14 = local_58;
                }
                iVar3 = local_50 + -1;
                if (local_50 == 0) {
                  iVar3 = 0;
                }
                uVar9 = FUN_144a49b4a(iVar3,puVar14);
                uVar8 = FUN_144a78877(uVar8,uVar9);
                local_b0 = FUN_147dd435a(local_a8,uVar8,local_68);
                if (local_58 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_68[0] = (longlong *)0x0;
              FUN_14485c47a(local_68,lVar2);
              FUN_147dd878e(local_b0,local_9c,local_68);
              bVar15 = true;
            }
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)iVar1 * 8 != lVar12);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  bVar5 = FUN_1400900b4(param_2);
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) - (uint)bVar5;
  if (*(int *)(param_1 + 0x50) == 0) {
    lVar10 = FUN_144a126be(param_1);
    bVar5 = *(byte *)(lVar10 + 0x152);
    if ((bVar5 == 1) || ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))) {
      DAT_14c7614c0 = *(undefined4 *)(param_1 + 0x248);
      DAT_14c7614c8 = *(undefined4 *)(param_1 + 0x24c);
    }
    if (*(longlong *)(param_1 + 0x240) != 0) {
      FUN_1414dc69c();
      *(undefined8 *)(param_1 + 0x240) = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf478c FUN_145bf478c body=318 status=ok
// SIG undefined FUN_145bf478c(void)

void FUN_145bf478c(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_145bf48ca(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[1];
        puVar8 = puVar7 + 1;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 145bf48ca FUN_145bf48ca body=89 status=ok
// SIG undefined FUN_145bf48ca(void)

void FUN_145bf48ca(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_145bf4924();
  return;
}



// FUNCTION 145bf4924 FUN_145bf4924 body=116 status=ok
// SIG undefined FUN_145bf4924(void)

void FUN_145bf4924(longlong *param_1,int param_2)

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



// FUNCTION 145bf4998 FUN_145bf4998 body=358 status=ok
// SIG undefined FUN_145bf4998(void)

void FUN_145bf4998(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = 0;
    bVar10 = *plVar2 == lVar5;
    iVar7 = 0;
    do {
      lVar12 = (longlong)iVar7;
      iVar8 = iVar7;
      lVar5 = lVar12;
      iVar4 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar9 = iVar4;
        if (lVar11 <= lVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar9 = iVar8 + 1;
        iVar8 = iVar9;
      } while (bVar10 == (plVar2[lVar5] == lVar3));
      if (bVar10 == false) {
        if (iVar6 != iVar7) {
          memmove(plVar2 + iVar6,plVar2 + lVar12,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar6 = iVar6 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar5 < lVar11);
    *(int *)(param_1 + 1) = iVar6;
  }
  return;
}



// FUNCTION 145bf4b0a FUN_145bf4b0a body=273 status=ok
// SIG undefined FUN_145bf4b0a(void)

undefined8 * FUN_145bf4b0a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad7a9c0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1414dc74c(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xf) = 1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14ad7f3b0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_38 = FUN_1446f8646();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar2 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf4c1c FUN_145bf4c1c body=130 status=ok
// SIG undefined FUN_145bf4c1c(void)

void FUN_145bf4c1c(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1414dc77e();
  uVar3 = FUN_1447210f0(param_1);
  lVar4 = FUN_1406f612e(uVar3);
  if (lVar4 != 0) {
    uVar2 = FUN_1408966e4(param_1);
    FUN_145bf4c9e(lVar4,uVar2);
    FUN_140d176d6(lVar4,uVar2);
  }
  cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_140d27aa0(param_1);
    FUN_140d27c2e(uVar3,1,0);
    FUN_1414dc7b2(param_1);
    return;
  }
  return;
}



// FUNCTION 145bf4c9e FUN_145bf4c9e body=255 status=ok
// SIG undefined FUN_145bf4c9e(void)

void FUN_145bf4c9e(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar1 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x418);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x3d8);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar3 * 0x60) == param_2) {
          FUN_1414dc8fa(param_1,param_2);
          FUN_1414dca92(param_1,param_2);
          FUN_145bf4d9e((longlong *)(param_1 + 0x3d8),param_2);
          FUN_1414dc822(param_1 + 0x100,param_2);
          FUN_1414dce3c(param_1,param_2);
          if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
            return;
          }
          *(undefined1 *)(param_1 + 0x90) = 0;
          plVar2 = (longlong *)FUN_140a68038(0);
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          if (*(longlong *)(param_1 + 0x750) == 0) {
            return;
          }
          (**(code **)(*plVar2 + 0x178))(plVar2,(undefined8 *)(param_1 + 0x750));
          *(undefined8 *)(param_1 + 0x750) = 0;
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x60 + lVar1 + 0x58);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 145bf4d9e FUN_145bf4d9e body=107 status=ok
// SIG undefined FUN_145bf4d9e(void)

undefined8 FUN_145bf4d9e(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_145bf4e0a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145bf4e0a FUN_145bf4e0a body=94 status=ok
// SIG undefined FUN_145bf4e0a(void)

void FUN_145bf4e0a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145bf4e68();
  return;
}



// FUNCTION 145bf4e68 FUN_145bf4e68 body=84 status=ok
// SIG undefined FUN_145bf4e68(void)

void FUN_145bf4e68(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145a0ce7a(lVar1 + lVar2 + 8);
  FUN_145bf4ebc(param_1,param_2);
  return;
}



// FUNCTION 145bf4ebc FUN_145bf4ebc body=124 status=ok
// SIG undefined FUN_145bf4ebc(void)

void FUN_145bf4ebc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 145bf4f38 FUN_145bf4f38 body=85 status=ok
// SIG undefined FUN_145bf4f38(void)

void FUN_145bf4f38(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_145bf4f8e(param_1);
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 145bf4f8e FUN_145bf4f8e body=382 status=ok
// SIG undefined FUN_145bf4f8e(void)

void FUN_145bf4f8e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x29c) == '\x01') && (lVar3 = FUN_1407f4ede(), lVar3 != 0)) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30 && (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))))) {
      uVar2 = (uint)((ulonglong)DAT_14cbe05e0 >> 0x10);
      uVar5 = (uint)DAT_14cbe05e0 & 0xffff;
      lVar3 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
      }
      iVar6 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x120) - 1U &
                               (int)((ulonglong)DAT_14cbe05e0 >> 0x20) +
                               ((uint)DAT_14cbe05e0 << 0x10 | uVar5) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
          if (*plVar1 == DAT_14cbe05e0) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              local_20 = 0;
              FUN_14485c47a(&local_20,plVar1[1]);
              FUN_1412e3bcc(param_1,local_20);
              *(undefined1 *)(param_1 + 0x29c) = 0;
              if (*(longlong *)(param_1 + 0x1a8) != 0) {
                *(undefined4 *)(param_1 + 0x148) =
                     *(undefined4 *)(*(longlong *)(param_1 + 0x1a8) + 0xec);
              }
              lVar3 = FUN_14479d2ce(param_1 + 0x30);
              if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
              }
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf511c FUN_145bf511c body=259 status=ok
// SIG undefined FUN_145bf511c(void)

void FUN_145bf511c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x54);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x210))();
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_145bf5220(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"enemies");
        *(undefined8 *)(param_1 + 0xf8) = local_28;
        local_38 = FUN_145bf5220(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"iconentries");
        *(undefined8 *)(param_1 + 0x100) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf5220 FUN_145bf5220 body=83 status=ok
// SIG undefined FUN_145bf5220(void)

void FUN_145bf5220(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_145bf5273(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145bf526f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 145bf5273 FUN_145bf5273 body=105 status=ok
// SIG undefined FUN_145bf5273(void)

void FUN_145bf5273(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_145bf52dc();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_145bf52dc();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bf52c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 145bf52dc FUN_145bf52dc body=55 status=ok
// SIG undefined FUN_145bf52dc(void)

void FUN_145bf52dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8818 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8818 = FUN_140002ddd(FUN_1466044f3,uVar1,L"OakUIData_EnemyRadar");
  }
  return;
}



// FUNCTION 145bf5314 FUN_145bf5314 body=320 status=ok
// SIG undefined FUN_145bf5314(void)

void FUN_145bf5314(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x54);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x210))();
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_145bf5456(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"waypoints");
        *(undefined8 *)(param_1 + 0x408) = local_28;
        local_38 = FUN_145bf5456(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"dangers");
        *(undefined8 *)(param_1 + 0x410) = local_28;
        local_38 = FUN_145bf5456(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"itemicon");
        *(undefined8 *)(param_1 + 0x418) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf5456 FUN_145bf5456 body=83 status=ok
// SIG undefined FUN_145bf5456(void)

void FUN_145bf5456(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_145bf54a9(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145bf54a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 145bf54a9 FUN_145bf54a9 body=105 status=ok
// SIG undefined FUN_145bf54a9(void)

void FUN_145bf54a9(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_145bf5512();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_145bf5512();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bf54fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 145bf5512 FUN_145bf5512 body=57 status=ok
// SIG undefined FUN_145bf5512(void)

void FUN_145bf5512(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc8d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc8d0 = FUN_140002ddd(FUN_14660b4b8,uVar1,L"OakWidgetData_WorldIcons");
  }
  return;
}



// FUNCTION 145bf554c FUN_145bf554c body=62 status=ok
// SIG undefined FUN_145bf554c(void)

undefined8 * FUN_145bf554c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad60dc0;
  FUN_145bf558a(param_1 + 9);
  thunk_FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf558a FUN_145bf558a body=81 status=ok
// SIG undefined FUN_145bf558a(void)

void FUN_145bf558a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf55dc(param_1 + 2);
  FUN_145bf5613(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf55dc FUN_145bf55dc body=55 status=ok
// SIG undefined FUN_145bf55dc(void)

void FUN_145bf55dc(longlong *param_1)

{
  FUN_145bf5652(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5613 FUN_145bf5613 body=63 status=ok
// SIG undefined FUN_145bf5613(void)

void FUN_145bf5613(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bf5652 FUN_145bf5652 body=409 status=ok
// SIG undefined FUN_145bf5652(void)

void FUN_145bf5652(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf57ec FUN_145bf57ec body=40 status=ok
// SIG undefined FUN_145bf57ec(void)

undefined8 FUN_145bf57ec(undefined8 param_1,int param_2)

{
  FUN_145bf5814();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5814 FUN_145bf5814 body=69 status=ok
// SIG undefined FUN_145bf5814(void)

void FUN_145bf5814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d4b00;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf585a(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf585a FUN_145bf585a body=53 status=ok
// SIG undefined FUN_145bf585a(void)

void FUN_145bf585a(longlong *param_1)

{
  FUN_145bf5890();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5890 FUN_145bf5890 body=90 status=ok
// SIG undefined FUN_145bf5890(void)

void FUN_145bf5890(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14074f60a(param_1,0);
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



// FUNCTION 145bf58f0 FUN_145bf58f0 body=79 status=ok
// SIG undefined FUN_145bf58f0(void)

void FUN_145bf58f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459dc438(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5759e0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0xd),4000);
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 145bf5940 FUN_145bf5940 body=40 status=ok
// SIG undefined FUN_145bf5940(void)

undefined8 FUN_145bf5940(undefined8 param_1,int param_2)

{
  FUN_145bf5968();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5968 FUN_145bf5968 body=69 status=ok
// SIG undefined FUN_145bf5968(void)

void FUN_145bf5968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a610990;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf59ae(param_1 + 9);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf59ae FUN_145bf59ae body=53 status=ok
// SIG undefined FUN_145bf59ae(void)

void FUN_145bf59ae(longlong *param_1)

{
  FUN_145bf59e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf59e4 FUN_145bf59e4 body=90 status=ok
// SIG undefined FUN_145bf59e4(void)

void FUN_145bf59e4(longlong param_1)

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



// FUNCTION 145bf5a4a FUN_145bf5a4a body=73 status=ok
// SIG undefined FUN_145bf5a4a(void)

undefined8 * FUN_145bf5a4a(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e5a40;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x82;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
  return param_1;
}



// FUNCTION 145bf5a94 FUN_145bf5a94 body=40 status=ok
// SIG undefined FUN_145bf5a94(void)

undefined8 FUN_145bf5a94(undefined8 param_1,int param_2)

{
  FUN_145bf5abc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5abc FUN_145bf5abc body=69 status=ok
// SIG undefined FUN_145bf5abc(void)

void FUN_145bf5abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d9180;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf5b02(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf5b02 FUN_145bf5b02 body=53 status=ok
// SIG undefined FUN_145bf5b02(void)

void FUN_145bf5b02(longlong *param_1)

{
  FUN_145bf5b38();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5b38 FUN_145bf5b38 body=90 status=ok
// SIG undefined FUN_145bf5b38(void)

void FUN_145bf5b38(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145bf5b92 FUN_145bf5b92 body=40 status=ok
// SIG undefined FUN_145bf5b92(void)

undefined8 FUN_145bf5b92(undefined8 param_1,int param_2)

{
  FUN_145bf5bba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5bba FUN_145bf5bba body=69 status=ok
// SIG undefined FUN_145bf5bba(void)

void FUN_145bf5bba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d9cb0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf5c00(param_1 + 10);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf5c00 FUN_145bf5c00 body=53 status=ok
// SIG undefined FUN_145bf5c00(void)

void FUN_145bf5c00(longlong *param_1)

{
  FUN_145bf5c36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5c36 FUN_145bf5c36 body=90 status=ok
// SIG undefined FUN_145bf5c36(void)

void FUN_145bf5c36(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145bf5c90 FUN_145bf5c90 body=40 status=ok
// SIG undefined FUN_145bf5c90(void)

undefined8 FUN_145bf5c90(undefined8 param_1,int param_2)

{
  FUN_145bf5cb8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5cb8 FUN_145bf5cb8 body=69 status=ok
// SIG undefined FUN_145bf5cb8(void)

void FUN_145bf5cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8da300;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf5cfe(param_1 + 10);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf5cfe FUN_145bf5cfe body=53 status=ok
// SIG undefined FUN_145bf5cfe(void)

void FUN_145bf5cfe(longlong *param_1)

{
  FUN_145bf5d34();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5d34 FUN_145bf5d34 body=90 status=ok
// SIG undefined FUN_145bf5d34(void)

void FUN_145bf5d34(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 145bf5d8e FUN_145bf5d8e body=40 status=ok
// SIG undefined FUN_145bf5d8e(void)

undefined8 FUN_145bf5d8e(undefined8 param_1,int param_2)

{
  FUN_145bf5db6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5db6 FUN_145bf5db6 body=69 status=ok
// SIG undefined FUN_145bf5db6(void)

void FUN_145bf5db6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8da960;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf5dfc(param_1 + 0xb);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf5dfc FUN_145bf5dfc body=53 status=ok
// SIG undefined FUN_145bf5dfc(void)

void FUN_145bf5dfc(longlong *param_1)

{
  FUN_145bf5e32();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5e32 FUN_145bf5e32 body=90 status=ok
// SIG undefined FUN_145bf5e32(void)

void FUN_145bf5e32(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145bf5e8c FUN_145bf5e8c body=40 status=ok
// SIG undefined FUN_145bf5e8c(void)

undefined8 FUN_145bf5e8c(undefined8 param_1,int param_2)

{
  FUN_145bf5eb4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf5eb4 FUN_145bf5eb4 body=69 status=ok
// SIG undefined FUN_145bf5eb4(void)

void FUN_145bf5eb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ade1b80;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf5efa(param_1 + 8);
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145bf5efa FUN_145bf5efa body=53 status=ok
// SIG undefined FUN_145bf5efa(void)

void FUN_145bf5efa(longlong *param_1)

{
  FUN_145bf5f30();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf5f30 FUN_145bf5f30 body=90 status=ok
// SIG undefined FUN_145bf5f30(void)

void FUN_145bf5f30(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145bf5f96 FUN_145bf5f96 body=73 status=ok
// SIG undefined FUN_145bf5f96(void)

void FUN_145bf5f96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR_FUN_14afbeed0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined2 *)(puVar1 + 8) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0x42) = 1;
  return;
}



// FUNCTION 145bf5fe8 FUN_145bf5fe8 body=76 status=ok
// SIG undefined FUN_145bf5fe8(void)

undefined8 * FUN_145bf5fe8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b11c7d0;
  param_1[7] = 0x3f00000041200000;
  param_1[8] = 0x447a00003e800000;
  param_1[9] = 0x4480000044800000;
  param_1[10] = 0x3e99999a46000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 145bf603c FUN_145bf603c body=76 status=ok
// SIG undefined FUN_145bf603c(void)

undefined8 * FUN_145bf603c(undefined8 *param_1)

{
  FUN_140e3421a();
  *param_1 = &PTR_FUN_14b45dad0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 145bf6088 FUN_145bf6088 body=40 status=ok
// SIG undefined FUN_145bf6088(void)

undefined8 FUN_145bf6088(undefined8 param_1,int param_2)

{
  FUN_145bf60b0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf60b0 FUN_145bf60b0 body=69 status=ok
// SIG undefined FUN_145bf60b0(void)

void FUN_145bf60b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b54e630;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf60f6(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf60f6 FUN_145bf60f6 body=53 status=ok
// SIG undefined FUN_145bf60f6(void)

void FUN_145bf60f6(longlong *param_1)

{
  FUN_145bf612c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf612c FUN_145bf612c body=90 status=ok
// SIG undefined FUN_145bf612c(void)

void FUN_145bf612c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 145bf618e FUN_145bf618e body=286 status=ok
// SIG undefined FUN_145bf618e(void)

undefined8 * FUN_145bf618e(undefined8 *param_1)

{
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b831660;
  param_1[6] = &PTR_FUN_14b831920;
  param_1[7] = &PTR_FUN_14b8319b0;
  param_1[9] = 0;
  memset(param_1 + 0xd,0,0xd8);
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xf;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  memset(param_1 + 0x28,0,0xd8);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0xf;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x441600003d4ccccd;
  param_1[0x48] = 0x42c80000;
  return param_1;
}



// FUNCTION 145bf62b8 FUN_145bf62b8 body=73 status=ok
// SIG undefined FUN_145bf62b8(void)

undefined8 * FUN_145bf62b8(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b93c980;
  lVar1 = 0x28;
  do {
    FUN_144928b90((longlong)param_1 + lVar1,0);
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0xd0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145bf6302 FUN_145bf6302 body=158 status=ok
// SIG undefined FUN_145bf6302(void)

bool FUN_145bf6302(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf63a2 FUN_145bf63a2 body=135 status=ok
// SIG undefined FUN_145bf63a2(void)

void FUN_145bf63a2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x5d8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x3e0), lVar1 != 0)) {
        lVar2 = FUN_144a2f878();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_141118d3c(param_1,lVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145bf6442 FUN_145bf6442 body=332 status=ok
// SIG undefined FUN_145bf6442(void)

void FUN_145bf6442(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1414dd1fe();
  local_50 = *(undefined8 *)(param_2 + 0x218);
  local_48 = *(undefined4 *)(param_2 + 0x220);
  uStack_44 = *(undefined4 *)(param_2 + 0x224);
  uStack_40 = *(undefined4 *)(param_2 + 0x228);
  uStack_3c = *(undefined4 *)(param_2 + 0x22c);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 0x238);
  lVar5 = (longlong)local_30;
  pvVar3 = *(void **)(param_2 + 0x230);
  if (lVar5 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar3,lVar5 * 2);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1406f071e(param_1,iVar2);
  }
  pvVar3 = local_38;
  lVar5 = *param_1;
  lVar6 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar5 + lVar6);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  *(undefined8 *)(lVar5 + 0x10 + lVar6) = 0;
  lVar4 = (longlong)local_30;
  *(int *)(lVar5 + 0x18 + lVar6) = local_30;
  if (lVar4 == 0) {
    *(undefined4 *)(lVar5 + lVar6 + 0x1c) = 0;
  }
  else {
    puVar7 = (undefined8 *)(lVar6 + lVar5 + 0x10);
    FUN_1446dd670(puVar7,local_30,0);
    memcpy((void *)*puVar7,pvVar3,lVar4 * 2);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf6590 FUN_145bf6590 body=158 status=ok
// SIG undefined FUN_145bf6590(void)

bool FUN_145bf6590(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf6642 FUN_145bf6642 body=76 status=ok
// SIG undefined FUN_145bf6642(void)

undefined8 * FUN_145bf6642(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bd2e880;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  return param_1;
}



// FUNCTION 145bf6696 FUN_145bf6696 body=1518 status=ok
// SIG undefined FUN_145bf6696(void)

undefined8 * FUN_145bf6696(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 local_3c [16];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145880092();
  *param_1 = &PTR_FUN_14a9c5b80;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xfe;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfe;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfe;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) & 0xfe;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0xfe;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  lVar5 = 0x3b8;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar5 + -0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar5 + -0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar5 + -0x10) = 0;
    pbVar2 = (byte *)((longlong)param_1 + lVar5 + -8);
    *pbVar2 = *pbVar2 & 0xfe;
    *(undefined8 *)((longlong)param_1 + lVar5 + -4) = 0;
    lVar5 = lVar5 + 0x38;
  } while (lVar5 != 0x578);
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xb3] = 0;
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0xfe;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xff808080;
  lVar5 = FUN_1414dd2d0(6);
  *(float *)((longlong)param_1 + 0x9c) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(7);
  *(float *)((longlong)param_1 + 0xcc) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(8);
  *(float *)((longlong)param_1 + 0xfc) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(9);
  *(float *)((longlong)param_1 + 300) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(10);
  dVar3 = *(double *)(lVar5 + 0x20);
  dVar4 = *(double *)(lVar5 + 0x18);
  *(float *)((longlong)param_1 + 0x15c) = (float)*(double *)(lVar5 + 0x10);
  *(float *)(param_1 + 0x2c) = (float)dVar4;
  *(float *)((longlong)param_1 + 0x164) = (float)dVar3;
  lVar5 = FUN_1414dd2d0(0xb);
  dVar3 = *(double *)(lVar5 + 0x20);
  dVar4 = *(double *)(lVar5 + 0x18);
  *(float *)((longlong)param_1 + 0x194) = (float)*(double *)(lVar5 + 0x10);
  *(float *)(param_1 + 0x33) = (float)dVar4;
  *(float *)((longlong)param_1 + 0x19c) = (float)dVar3;
  lVar5 = FUN_1414dd2d0(0);
  local_4c = (float)*(double *)(lVar5 + 0x28);
  local_50 = (float)*(double *)(lVar5 + 0x20);
  local_54 = (float)*(double *)(lVar5 + 0x18);
  local_58 = (float)*(double *)(lVar5 + 0x10);
  FUN_1414dd342(local_3c,&local_58);
  FUN_1411ab38a(local_3c,&local_2c);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = local_2c;
  lVar5 = FUN_1414dd2d0(1);
  *(float *)((longlong)param_1 + 0x1fc) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(2);
  *(float *)((longlong)param_1 + 0x22c) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(0xc);
  dVar3 = *(double *)(lVar5 + 0x20);
  dVar4 = *(double *)(lVar5 + 0x18);
  *(float *)((longlong)param_1 + 0x25c) = (float)*(double *)(lVar5 + 0x10);
  *(float *)(param_1 + 0x4c) = (float)dVar4;
  *(float *)((longlong)param_1 + 0x264) = (float)dVar3;
  lVar5 = FUN_1414dd2d0(0x20);
  *(float *)((longlong)param_1 + 0x294) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(0xf);
  local_4c = (float)*(double *)(lVar5 + 0x28);
  local_50 = (float)*(double *)(lVar5 + 0x20);
  local_54 = (float)*(double *)(lVar5 + 0x18);
  local_58 = (float)*(double *)(lVar5 + 0x10);
  FUN_1414dd342(local_3c,&local_58);
  FUN_1411ab38a(local_3c,&local_2c);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = local_2c;
  lVar5 = FUN_1414dd2d0(0x10);
  *(float *)((longlong)param_1 + 0x2f4) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(0x11);
  *(float *)((longlong)param_1 + 0x324) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(0x12);
  *(float *)((longlong)param_1 + 0x354) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(0x13);
  *(float *)((longlong)param_1 + 900) = (float)*(double *)(lVar5 + 0x10);
  lVar5 = FUN_1414dd2d0(0x1f);
  *(float *)((longlong)param_1 + 0x604) = (float)*(double *)(lVar5 + 0x10);
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf6c86 FUN_145bf6c86 body=40 status=ok
// SIG undefined FUN_145bf6c86(void)

undefined8 FUN_145bf6c86(undefined8 param_1,int param_2)

{
  FUN_145bf6cae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf6cae FUN_145bf6cae body=204 status=ok
// SIG undefined FUN_145bf6cae(void)

void FUN_145bf6cae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14af18e10;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf6d7c(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf6db2(param_1 + 0x15);
  plVar3 = (longlong *)param_1[0x12];
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
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf6de8(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bf6d7c FUN_145bf6d7c body=53 status=ok
// SIG undefined FUN_145bf6d7c(void)

void FUN_145bf6d7c(longlong *param_1)

{
  FUN_145bf6ed2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf6db2 FUN_145bf6db2 body=53 status=ok
// SIG undefined FUN_145bf6db2(void)

void FUN_145bf6db2(longlong *param_1)

{
  FUN_145bf6e1e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf6de8 FUN_145bf6de8 body=53 status=ok
// SIG undefined FUN_145bf6de8(void)

void FUN_145bf6de8(longlong *param_1)

{
  FUN_145bf6e78();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf6e1e FUN_145bf6e1e body=90 status=ok
// SIG undefined FUN_145bf6e1e(void)

void FUN_145bf6e1e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145bf6e78 FUN_145bf6e78 body=90 status=ok
// SIG undefined FUN_145bf6e78(void)

void FUN_145bf6e78(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145bf6ed2 FUN_145bf6ed2 body=90 status=ok
// SIG undefined FUN_145bf6ed2(void)

void FUN_145bf6ed2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145bf6f2c FUN_145bf6f2c body=209 status=ok
// SIG undefined FUN_145bf6f2c(void)

void FUN_145bf6f2c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  longlong lVar6;
  
  if (DAT_14cad0508 != DAT_14cad0534) {
    puVar4 = &DAT_14cad0538;
    if (DAT_14cad0540 != (undefined *)0x0) {
      puVar4 = DAT_14cad0540;
    }
    for (iVar2 = *(int *)(puVar4 + ((longlong)
                                    ((int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) &
                                   (longlong)DAT_14cad0548 - 1U) * 4); iVar2 != -1;
        iVar2 = *(int *)(DAT_14cad0500 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(longlong *)(DAT_14cad0500 + (longlong)iVar2 * 0x18) == param_1) {
        puVar4 = &DAT_14cad0538;
        if (DAT_14cad0540 != (undefined *)0x0) {
          puVar4 = DAT_14cad0540;
        }
        lVar1 = DAT_14cad0500 + (longlong)iVar2 * 0x18;
        lVar6 = (longlong)*(int *)(lVar1 + 0x14);
        iVar3 = *(int *)(puVar4 + lVar6 * 4);
        if (iVar3 == iVar2) {
          piVar5 = (int *)(puVar4 + lVar6 * 4);
        }
        else {
          do {
            piVar5 = (int *)(DAT_14cad0500 + (longlong)iVar3 * 0x18 + 0x10);
            iVar3 = *piVar5;
          } while (iVar3 != iVar2);
        }
        *piVar5 = *(int *)(lVar1 + 0x10);
        FUN_145bf6ffe();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bf6ffe FUN_145bf6ffe body=128 status=ok
// SIG undefined FUN_145bf6ffe(void)

void FUN_145bf6ffe(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cad0500;
  if (DAT_14cad0534 != 0) {
    *(int *)(DAT_14cad0500 + (longlong)DAT_14cad0530 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cad0534) {
    iVar4 = DAT_14cad0530;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cad0534 = DAT_14cad0534 + 1;
  puVar3 = &DAT_14cad0510;
  if (DAT_14cad0520 != (undefined *)0x0) {
    puVar3 = DAT_14cad0520;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cad0530 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145bf707e FUN_145bf707e body=274 status=ok
// SIG undefined FUN_145bf707e(void)

undefined8 FUN_145bf707e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  uVar9 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      do {
        lVar3 = *param_1;
        lVar11 = (longlong)iVar6 * 0x20;
        puVar4 = *(undefined8 **)(lVar3 + lVar11);
        plVar7 = *(longlong **)(lVar3 + 8 + lVar11);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        cVar5 = '\x01';
        if (puVar4 != (undefined8 *)*param_2) {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          FUN_145bf7190(param_1,*puVar10);
          uVar9 = 1;
          break;
        }
        iVar6 = *(int *)(lVar3 + lVar11 + 0x18);
        puVar10 = (undefined4 *)(lVar3 + lVar11 + 0x18);
      } while (iVar6 != -1);
    }
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
  return uVar9;
}



// FUNCTION 145bf7190 FUN_145bf7190 body=95 status=ok
// SIG undefined FUN_145bf7190(void)

void FUN_145bf7190(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145bf71f0(param_1,param_2,1);
  return;
}



// FUNCTION 145bf71f0 FUN_145bf71f0 body=119 status=ok
// SIG undefined FUN_145bf71f0(void)

void FUN_145bf71f0(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_145bf7268(param_1,param_2,param_3);
  return;
}



// FUNCTION 145bf7268 FUN_145bf7268 body=144 status=ok
// SIG undefined FUN_145bf7268(void)

void FUN_145bf7268(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145bf72f8 FUN_145bf72f8 body=107 status=ok
// SIG undefined FUN_145bf72f8(void)

void FUN_145bf72f8(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_14482b126(lVar2,0x40000000);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    DAT_14cb0d2b0 = 0;
    (**(code **)(*param_1 + 0x2d8))(param_1);
    FUN_145bf7364();
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 145bf7364 FUN_145bf7364 body=28 status=ok
// SIG undefined FUN_145bf7364(void)

void FUN_145bf7364(void)

{
  FUN_145bf73a6(&DAT_14cb0f148);
  DAT_14cb0db68 = 0;
  return;
}



// FUNCTION 145bf7380 FUN_145bf7380 body=37 status=ok
// SIG undefined FUN_145bf7380(void)

void FUN_145bf7380(longlong param_1)

{
  FUN_1457944f0(param_1 + 0xf58);
  *(undefined8 *)(param_1 + 0xf50) = 0;
  return;
}



// FUNCTION 145bf73a6 FUN_145bf73a6 body=81 status=ok
// SIG undefined FUN_145bf73a6(void)

void FUN_145bf73a6(longlong param_1)

{
  FUN_14020fad6(param_1,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x10,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x20,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x30,&DAT_149dfb77a);
  FUN_14020fad6(param_1 + 0x40,&DAT_149dfb77a);
  return;
}



// FUNCTION 145bf73f8 FUN_145bf73f8 body=165 status=ok
// SIG undefined FUN_145bf73f8(void)

bool FUN_145bf73f8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf749e FUN_145bf749e body=87 status=ok
// SIG undefined FUN_145bf749e(void)

void FUN_145bf749e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_145bd3c28(*(longlong *)(param_1 + 0x110),param_2,param_3);
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_148e821f6(*(longlong *)(param_1 + 0x120),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 145bf74f6 FUN_145bf74f6 body=208 status=ok
// SIG undefined FUN_145bf74f6(void)

void FUN_145bf74f6(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*(ulonglong *)*plVar3 == param_2) {
          if (plVar3 != (longlong *)0x0) {
            puVar1 = (ulonglong *)*plVar3 + 0x1a;
            *(byte *)puVar1 = (byte)*puVar1 | 8;
            FUN_140ae3264(param_1 + 0x1e,local_c);
          }
          break;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf75c8 FUN_145bf75c8 body=57 status=ok
// SIG undefined FUN_145bf75c8(void)

uint FUN_145bf75c8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_145bf7602();
  if ((char)uVar1 == '\0') {
    FUN_14793cba8(param_1,param_2,&DAT_14cacd708);
  }
  return uVar1 ^ 1;
}



// FUNCTION 145bf7602 FUN_145bf7602 body=154 status=ok
// SIG undefined FUN_145bf7602(void)

undefined8 FUN_145bf7602(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x290) != *(int *)(param_1 + 700)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x2c0;
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x2c8);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x2d0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar6 * 0x18) == lVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 145bf769c FUN_145bf769c body=88 status=ok
// SIG undefined FUN_145bf769c(void)

undefined8 * FUN_145bf769c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145bf76f4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145bf76f4 FUN_145bf76f4 body=102 status=ok
// SIG undefined FUN_145bf76f4(void)

void FUN_145bf76f4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145bf775a FUN_145bf775a body=40 status=ok
// SIG undefined FUN_145bf775a(void)

undefined8 FUN_145bf775a(undefined8 param_1,int param_2)

{
  FUN_145bf7782();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf7782 FUN_145bf7782 body=82 status=ok
// SIG undefined FUN_145bf7782(void)

void FUN_145bf7782(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad00530;
  param_1[0x1f] = &PTR_FUN_14ad008a0;
  FUN_145bf77d4(param_1[0xfc],*(undefined4 *)(param_1 + 0xfd));
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  FUN_14129c886(param_1);
  return;
}



// FUNCTION 145bf77d4 FUN_145bf77d4 body=47 status=ok
// SIG undefined FUN_145bf77d4(void)

void FUN_145bf77d4(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      FUN_1404dbc70(param_1);
      param_1 = param_1 + 0x138;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bf780e FUN_145bf780e body=106 status=ok
// SIG undefined FUN_145bf780e(void)

undefined8 * FUN_145bf780e(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ae7a1e0;
  *(undefined2 *)(param_1 + 0x3f) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1fa) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  FUN_145bf7878(param_1,0);
  return param_1;
}



// FUNCTION 145bf7878 FUN_145bf7878 body=52 status=ok
// SIG undefined FUN_145bf7878(void)

void FUN_145bf7878(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfffffffe | (uint)param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x4a) != '\x03') {
      *(undefined1 *)(param_1 + 0x4a) = 3;
    }
    *(undefined1 *)(param_1 + 0xf9) = 4;
  }
  else if (*(char *)(param_1 + 0x4a) == '\x03') {
    *(undefined1 *)(param_1 + 0x4a) = 2;
    return;
  }
  return;
}



// FUNCTION 145bf78ac FUN_145bf78ac body=897 status=ok
// SIG undefined FUN_145bf78ac(void)

void FUN_145bf78ac(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined1 local_1d8 [8];
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (DAT_14c75861c != 0) {
    FUN_1405d5a96(&local_1d0);
    FUN_1446f470e(local_1d8,L"LogMemory",1);
    FUN_144a81018(local_148,"Windows");
    local_1f8 = (double)local_40;
    FUN_145bf7c2e(param_1,local_1d8,5,L"Platform Memory Stats for %s");
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    local_1f0 = (double)((float)local_170 * 9.536743e-07);
    local_1f8 = (double)((float)local_178 * 9.536743e-07);
    FUN_145bf7c2e(param_1,local_1d8,5,L"Process Physical Memory: %.2f MB used, %.2f MB peak");
    local_1f0 = (double)((float)local_160 * 9.536743e-07);
    local_1f8 = (double)((float)local_168 * 9.536743e-07);
    FUN_145bf7c2e(param_1,local_1d8,5,L"Process Virtual Memory: %.2f MB used, %.2f MB peak");
    local_1e8 = (double)((float)local_1d0 * 9.536743e-07);
    local_1f0 = (double)((float)local_188 * 9.536743e-07);
    local_1f8 = (double)((float)(local_1d0 - local_188) * 9.536743e-07);
    FUN_145bf7c2e(param_1,local_1d8,5,L"Physical Memory: %.2f MB used,  %.2f MB free, %.2f MB total"
                 );
    local_1e8 = (double)((float)local_1c8 * 9.536743e-07);
    local_1f0 = (double)((float)local_180 * 9.536743e-07);
    local_1f8 = (double)((float)(local_1c8 - local_180) * 9.536743e-07);
    FUN_145bf7c2e(param_1,local_1d8,5,L"Virtual Memory: %.2f MB used,  %.2f MB free, %.2f MB total")
    ;
  }
  if ((local_30 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf7c2e FUN_145bf7c2e body=339 status=ok
// SIG undefined FUN_145bf7c2e(void)

void FUN_145bf7c2e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined1 *local_470;
  uint local_45c;
  ulonglong local_458;
  undefined1 *local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_450 = &stack0x00000028;
  puVar3 = (undefined8 *)FUN_144737586();
  local_478 = 0;
  local_470 = &stack0x00000028;
  uVar2 = __stdio_common_vswprintf(*puVar3,local_448,0x200,param_4);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 < 0x200) {
    _Memory = (undefined1 *)0x0;
    puVar4 = local_448;
  }
  else {
    local_45c = 0x400;
    _Memory = (undefined1 *)0x0;
    do {
      free(_Memory);
      local_458 = (ulonglong)local_45c;
      _Memory = malloc(local_458 * 2);
      if (_Memory == (undefined1 *)0x0) goto LAB_145bf7cd3;
      local_450 = &stack0x00000028;
      puVar3 = (undefined8 *)FUN_144737586();
      uVar1 = local_458;
      local_478 = 0;
      local_470 = &stack0x00000028;
      uVar2 = __stdio_common_vswprintf(*puVar3,_Memory,local_458,param_4);
      local_45c = (int)uVar1 * 2;
    } while (((int)uVar2 < 0) || (puVar4 = _Memory, (int)local_458 <= (int)uVar2));
  }
  *(undefined2 *)(puVar4 + (ulonglong)uVar2 * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,puVar4,param_3,param_2);
  free(_Memory);
LAB_145bf7cd3:
  if ((local_48 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf7d82 FUN_145bf7d82 body=133 status=ok
// SIG undefined FUN_145bf7d82(void)

void FUN_145bf7d82(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  FUN_145bf7e4e();
  if (param_1[0xa1] != 0) {
    lVar4 = FUN_140dd10c4();
    plVar1 = (longlong *)param_1[0xa1];
    if (plVar1 != (longlong *)0x0) {
      if ((((lVar4 != 0) && (lVar2 = plVar1[2], lVar2 != 0)) &&
          (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30 && ((**(code **)(*plVar1 + 0x300))(), param_1[0xa1] == 0)))) {
        return;
      }
      cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
      if (cVar3 != '\0') {
        FUN_145bf7e08(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bf7e08 FUN_145bf7e08 body=69 status=ok
// SIG undefined FUN_145bf7e08(void)

void FUN_145bf7e08(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar1 = FUN_1458485da(lVar1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x48), lVar1 != 0)) {
      FUN_145bf804e(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145bf7e4e FUN_145bf7e4e body=94 status=ok
// SIG undefined FUN_145bf7e4e(void)

void FUN_145bf7e4e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_145bf7eac();
  if (*(longlong *)(param_1 + 0x508) != 0) {
    lVar2 = FUN_1459cbe9a();
    if ((((*(longlong *)(param_1 + 0x508) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_1488915aa();
      return;
    }
  }
  return;
}



// FUNCTION 145bf7eac FUN_145bf7eac body=229 status=ok
// SIG undefined FUN_145bf7eac(void)

void FUN_145bf7eac(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0xa1] == 0) {
    lVar1 = param_1[0xe4];
    if ((((lVar1 == 0) || (lVar2 = FUN_140415bba(), lVar2 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30 || (lVar1 = param_1[0xe4], lVar1 == 0)))) {
      lVar1 = FUN_145bf8646();
    }
    lVar1 = FUN_145bf7f91(param_1,lVar1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[0xa1] = lVar1;
  }
  (**(code **)(*param_1 + 0xdb0))(param_1);
  *(char *)((longlong)param_1 + 0x669) = (char)param_1[0xcd];
  *(undefined1 *)((longlong)param_1 + 0x66b) = *(undefined1 *)((longlong)param_1 + 0x66a);
  lVar1 = FUN_1447210f0(param_1);
  FUN_145bf8432(*(undefined8 *)(lVar1 + 0x30),param_1);
                    /* WARNING: Could not recover jumptable at 0x000145bf7f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xdd0))(param_1);
  return;
}



// FUNCTION 145bf7f91 FUN_145bf7f91 body=187 status=ok
// SIG undefined FUN_145bf7f91(void)

undefined8 FUN_145bf7f91(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf804e FUN_145bf804e body=397 status=ok
// SIG undefined FUN_145bf804e(void)

void FUN_145bf804e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ushort local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    lVar3 = FUN_1449f3324();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      lVar3 = FUN_1449f3324();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (lVar5 = param_2,
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) {
        lVar5 = 0;
      }
      cVar1 = FUN_1414dd394(lVar5);
      if (cVar1 != '\0') goto LAB_145bf8187;
    }
    plVar4 = (longlong *)FUN_14122506a(param_1,param_2);
    if ((plVar4 == (longlong *)0x0) || (*plVar4 == 0)) {
      local_98 = 0;
      FUN_1414dd38a();
      local_60 = 0;
      local_58 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_54 = 0xffffffff00000080;
      local_4c = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0xff;
      FUN_145bf8224(&local_a8,param_2);
      uStack_90 = local_a8;
      uStack_8c = uStack_a4;
      uStack_88 = uStack_a0;
      uStack_84 = uStack_9c;
      uVar2 = FUN_1405af626(&local_98);
      local_30 = CONCAT11(local_30._1_1_,uVar2);
      FUN_14005eae2(&local_80);
      local_30 = local_30 & 0xff;
      FUN_145bf8266(param_1 + 3,&local_98);
      FUN_145bf81dc(&local_98);
    }
    else {
      FUN_145bf8224(&local_98,param_2);
      *(undefined4 *)(plVar4 + 1) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar4 + 0xc) = local_98._4_4_;
      *(undefined4 *)(plVar4 + 2) = uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x14) = uStack_8c;
    }
    (**(code **)(*param_1 + 0x70))(param_1,param_2,0xfffffffe);
  }
LAB_145bf8187:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf81dc FUN_145bf81dc body=71 status=ok
// SIG undefined FUN_145bf81dc(void)

void FUN_145bf81dc(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 3);
  if (*param_1 != 0) {
    FUN_140113f3a();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 145bf8224 FUN_145bf8224 body=65 status=ok
// SIG undefined FUN_145bf8224(void)

undefined8 * FUN_145bf8224(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14485c47a(0,*(undefined8 *)(param_2 + 0x430));
  uVar1 = FUN_1447210f0(param_2);
  FUN_14485c47a(param_1 + 1,uVar1);
  return param_1;
}



// FUNCTION 145bf8266 FUN_145bf8266 body=79 status=ok
// SIG undefined FUN_145bf8266(void)

void FUN_145bf8266(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_145bf82b6();
  if (iVar1 == -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_145bf83a2(param_1,iVar1);
    }
    FUN_145bf8328((longlong)iVar1 * 0x70 + *param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145bf82b6 FUN_145bf82b6 body=113 status=ok
// SIG undefined FUN_145bf82b6(void)

int FUN_145bf82b6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      lVar3 = FUN_140059518(lVar1 + 8 + uVar5);
      lVar4 = FUN_140059518(param_2 + 8);
      if (lVar3 == lVar4) {
        return (int)(uVar5 >> 4) * -0x49249249;
      }
      uVar5 = uVar5 + 0x70;
    } while ((longlong)(int)lVar2 * 0x70 - uVar5 != 0);
  }
  return -1;
}



// FUNCTION 145bf8328 FUN_145bf8328 body=121 status=ok
// SIG undefined FUN_145bf8328(void)

longlong * FUN_145bf8328(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_1401924dc(lVar1);
    *param_1 = lVar1;
  }
  lVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_140816cc4(param_1 + 3,param_2 + 3);
  *(short *)(param_1 + 0xd) = (short)param_2[0xd];
  return param_1;
}



// FUNCTION 145bf83a2 FUN_145bf83a2 body=143 status=ok
// SIG undefined FUN_145bf83a2(void)

void FUN_145bf83a2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145bf8432 FUN_145bf8432 body=531 status=ok
// SIG undefined FUN_145bf8432(void)

void FUN_145bf8432(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_1447210f0(param_2);
  if (0 < *(int *)(lVar7 + 0x238)) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      lVar8 = FUN_14479d2ce(*(longlong *)(lVar7 + 0x230) + lVar12);
      if (lVar8 == param_2) {
        local_58 = 0;
        uStack_50 = 0;
        uVar10 = (ulonglong)*(int *)(param_1 + 0x3b0);
        if (0 < (longlong)uVar10) {
          iVar11 = -*(int *)(param_1 + 0x3b0);
          lVar7 = uVar10 * 0xc;
          do {
            lVar7 = lVar7 + -0xc;
            lVar12 = *(longlong *)(param_1 + 0x3a8);
            if (*(int *)(lVar12 + 8 + lVar7) == (int)lVar9) {
              lVar12 = lVar12 + lVar7;
              cVar5 = FUN_144729dda(lVar12);
              if (cVar5 != '\0') {
                local_60 = FUN_14479d2ce(lVar12);
                uVar4 = uStack_50;
                lVar12 = (longlong)(int)uStack_50;
                uVar6 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
                if (uStack_50._4_4_ < uVar6) {
                  FUN_1447d05f2(&local_58,uVar4 & 0xffffffff);
                }
                *(undefined8 *)(local_58 + lVar12 * 8) = local_60;
              }
              uVar6 = *(uint *)(param_1 + 0x3b0);
              if (uVar10 != uVar6) {
                iVar3 = iVar11 + uVar6;
                if (0 < (int)(iVar11 + uVar6)) {
                  iVar3 = 1;
                }
                memmove((void *)(*(longlong *)(param_1 + 0x3a8) + lVar7),
                        (void *)(*(longlong *)(param_1 + 0x3a8) +
                                (longlong)(int)(uVar6 - iVar3) * 0xc),(longlong)iVar3 * 0xc);
                uVar6 = *(uint *)(param_1 + 0x3b0);
              }
              *(uint *)(param_1 + 0x3b0) = uVar6 - 1;
              FUN_147b9743a((longlong *)(param_1 + 0x3a8));
            }
            iVar11 = iVar11 + 1;
            bVar2 = 1 < uVar10;
            uVar10 = uVar10 - 1;
          } while (bVar2);
          if (0 < (longlong)(int)uStack_50) {
            uVar10 = (longlong)(int)uStack_50 + 1;
            do {
              lVar7 = *(longlong *)(local_58 + -0x10 + uVar10 * 8);
              if (lVar7 == 0) {
LAB_145bf8558:
                plVar1 = *(longlong **)(local_58 + -0x10 + uVar10 * 8);
                (**(code **)(*plVar1 + 0x308))(plVar1,param_2);
              }
              else {
                lVar9 = FUN_144a7cbb2();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_145bf8558;
                FUN_1414b167c(param_2,lVar7);
              }
              uVar10 = uVar10 - 1;
            } while (1 < uVar10);
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 8;
    } while (lVar9 < *(int *)(lVar7 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf8646 FUN_145bf8646 body=975 status=ok
// SIG undefined FUN_145bf8646(void)

longlong FUN_145bf8646(void)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_140389788();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  local_48 = *(undefined8 *)(lVar4 + 0xc0);
  local_40 = *(undefined4 *)(lVar4 + 200);
  uStack_3c = *(undefined4 *)(lVar4 + 0xcc);
  uStack_38 = *(undefined4 *)(lVar4 + 0xd0);
  uStack_34 = *(undefined4 *)(lVar4 + 0xd4);
  local_30 = (void *)0x0;
  local_28 = *(int *)(lVar4 + 0xe0);
  lVar6 = (longlong)local_28;
  _Src = *(void **)(lVar4 + 0xd8);
  if (lVar6 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,_Src,lVar6 * 2);
  }
  lVar4 = FUN_14479d2ce(&local_48);
  if ((lVar4 == 0) && (CONCAT44(uStack_3c,local_40) != 0)) {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(&local_48,lVar4);
      if (lVar4 == 0) goto LAB_145bf873d;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_48,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_145bf8718:
      lVar6 = FUN_144a797b2();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_140415bba();
      }
    }
  }
  else if (lVar4 != 0) goto LAB_145bf8718;
LAB_145bf873d:
  lVar4 = FUN_14479d2ce(&local_48);
  if ((lVar4 == 0) && (CONCAT44(uStack_3c,local_40) != 0)) {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(&local_48,lVar4);
      if (lVar4 == 0) goto LAB_145bf89dc;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_48,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_145bf8764:
      lVar6 = FUN_144a797b2();
      if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
          (lVar6 = FUN_140415bba(), lVar6 != 0)) &&
         ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)))) {
        lVar4 = FUN_14479d2ce(&local_48);
        if ((lVar4 == 0) && (CONCAT44(uStack_3c,local_40) != 0)) {
          lVar4 = FUN_140007850();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar4 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(&local_48,lVar4);
            if (lVar4 == 0) goto LAB_145bf8a0f;
          }
          else {
            uVar1 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(&local_48,lVar4);
            }
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_145bf87e0:
            lVar6 = FUN_144a797b2();
            if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                (lVar6 = FUN_140415bba(), lVar6 != 0)) &&
               (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) {
              lVar5 = 0;
              if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  == lVar6 + 0x30) {
                lVar5 = lVar4;
              }
              goto LAB_145bf8835;
            }
          }
        }
        else if (lVar4 != 0) goto LAB_145bf87e0;
LAB_145bf8a0f:
        lVar5 = 0;
        goto LAB_145bf8835;
      }
    }
  }
  else if (lVar4 != 0) goto LAB_145bf8764;
LAB_145bf89dc:
  lVar5 = FUN_140415bba();
LAB_145bf8835:
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 145bf8a16 FUN_145bf8a16 body=1017 status=ok
// SIG undefined FUN_145bf8a16(void)

void FUN_145bf8a16(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  longlong *plStack_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[0x86] == 0) goto LAB_145bf8a8b;
  lVar6 = FUN_1449db7f2();
  lVar2 = param_1[0x86];
  if (((((lVar2 == 0) || (lVar6 == 0)) || (lVar10 = *(longlong *)(lVar2 + 0x10), lVar10 == 0)) ||
      ((*(int *)(lVar10 + 0x38) < *(int *)(lVar6 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)))) ||
     ((*(longlong *)(lVar2 + 0x78) == 0 || (cVar5 = FUN_145bf8e10(), cVar5 == '\0'))))
  goto LAB_145bf8a8b;
  lVar6 = param_1[0xe1];
  if (lVar6 != 0) {
    if (param_1[0x86] == 0) {
      lVar10 = 0;
    }
    else {
      lVar7 = FUN_1449db7f2();
      lVar6 = param_1[0x86];
      if (lVar6 == 0) {
LAB_145bf8e09:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((lVar7 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)) {
          if (*(int *)(lVar3 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_145bf8e09;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar10 = lVar6;
          }
        }
      }
      lVar6 = param_1[0xe1];
    }
    plVar8 = *(longlong **)(lVar10 + 0x78);
    plVar4 = (longlong *)param_1[0xe2];
    local_48 = lVar6;
    if (plVar4 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      (**(code **)(*plVar8 + 0x2e0))();
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_40 = plVar4;
      (**(code **)(*plVar8 + 0x2e0))();
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  if (param_1[0xe3] == 0) {
    plVar8 = (longlong *)FUN_140389788();
    lVar6 = plVar8[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar6 = plVar8[0x22];
    }
    local_68 = *(longlong *)(lVar6 + 0x110);
    plStack_60 = *(longlong **)(lVar6 + 0x118);
    local_58 = (void *)0x0;
    local_50 = *(int *)(lVar6 + 0x128);
    lVar10 = (longlong)local_50;
    _Src = *(void **)(lVar6 + 0x120);
    if (lVar10 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar10 * 2);
    }
    if (local_68 != 0) {
      FUN_14475cc44(&local_68,&local_78);
      puVar11 = local_78;
      if (local_70 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      uVar9 = FUN_14594accc();
      local_90 = 0;
      local_a0 = 0;
      local_98 = 1;
      local_a8 = 0;
      lVar6 = FUN_1412ecd05(uVar9,0,puVar11,0);
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      param_1[0xe3] = lVar6;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (param_1[0xe3] == 0) goto LAB_145bf8a8b;
  }
  (**(code **)(*param_1 + 0xcd8))(param_1,&local_68);
  plVar8 = plStack_60;
  if (param_1 + 0xe1 != &local_68) {
    param_1[0xe1] = local_68;
    local_68 = 0;
    plVar4 = (longlong *)param_1[0xe2];
    if (plStack_60 != plVar4) {
      plStack_60 = (longlong *)0x0;
      param_1[0xe2] = (longlong)plVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
  }
  plVar8 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = *(longlong **)(lVar2 + 0x78);
  local_88 = param_1[0xe1];
  plVar4 = (longlong *)param_1[0xe2];
  if (plVar4 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    (**(code **)(*plVar8 + 0x2d8))(plVar8,&local_88,0);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_80 = plVar4;
    (**(code **)(*plVar8 + 0x2d8))(plVar8,&local_88,0);
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  (**(code **)(*param_1 + 0xca0))(param_1,param_1[0xe3]);
LAB_145bf8a8b:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf8e10 FUN_145bf8e10 body=118 status=ok
// SIG undefined FUN_145bf8e10(void)

undefined8 FUN_145bf8e10(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_11 = '\0';
  local_28 = &DAT_14c872ae8;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.InputSettings",L"bAlwaysShowTouchInterface",&local_11
               );
  if (local_11 == '\0') {
    uVar1 = FUN_1414dd3b0(DAT_14c98e618);
  }
  else {
    uVar1 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf8e88 FUN_145bf8e88 body=179 status=ok
// SIG undefined FUN_145bf8e88(void)

void FUN_145bf8e88(int *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145bf8f3c(param_2,param_1);
  if (*param_1 < 0x11) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  else {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_24 = (uint)*(byte *)(param_1 + 1);
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      if (1 < local_24) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 1) = local_24 != 0;
    }
    else {
      *(bool *)(param_1 + 1) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf8f3c FUN_145bf8f3c body=299 status=ok
// SIG undefined FUN_145bf8f3c(void)

bool FUN_145bf8f3c(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x717f9ee7;
  iStack_24 = -0x164fb6c6;
  iStack_20 = -0x774c6ece;
  iStack_1c = 0x1b388107;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = 0;
  }
  FUN_1402ac1b3(param_1,&local_28);
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    bVar3 = false;
    if ((((local_28 == 0x717f9ee7) && (iStack_24 == -0x164fb6c6)) && (iStack_20 == -0x774c6ece)) &&
       (bVar3 = false, iStack_1c == 0x1b388107)) {
      local_2c = *param_2;
      puVar2 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
        }
        else {
          FUN_14572512c(param_1,&local_2c);
        }
      }
      else {
        local_2c = *(undefined4 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      *param_2 = local_2c;
      FUN_1446f470e(&local_38,L"AssetRegistry",1);
      FUN_1414dd3d2(param_1,&local_28,local_2c,local_38);
      bVar3 = (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
    }
  }
  else {
    bVar3 = false;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9068 FUN_145bf9068 body=71 status=ok
// SIG undefined FUN_145bf9068(void)

void FUN_145bf9068(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  (**(code **)(*param_1 + 0x20))(param_1,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf90b0 FUN_145bf90b0 body=55 status=ok
// SIG undefined FUN_145bf90b0(void)

size_t FUN_145bf90b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong _Size;
  
  _Size = *(int *)(param_1 + 0x10) - param_3;
  if ((ulonglong)(longlong)*(int *)(param_2 + 1) <= _Size) {
    _Size = (longlong)*(int *)(param_2 + 1);
  }
  if (_Size != 0) {
    memcpy((void *)*param_2,(void *)(param_3 + *(longlong *)(param_1 + 8)),_Size);
  }
  return _Size;
}



// FUNCTION 145bf90e8 FUN_145bf90e8 body=40 status=ok
// SIG undefined FUN_145bf90e8(void)

undefined8 FUN_145bf90e8(undefined8 param_1,int param_2)

{
  FUN_145bf9110();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf9110 FUN_145bf9110 body=105 status=ok
// SIG undefined FUN_145bf9110(void)

void FUN_145bf9110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7f3b30;
  FUN_145bf9179(param_1[0x85],*(undefined4 *)(param_1 + 0x86));
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf91aa(param_1[0x83],*(undefined4 *)(param_1 + 0x84));
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145bf9179 FUN_145bf9179 body=49 status=ok
// SIG undefined FUN_145bf9179(void)

void FUN_145bf9179(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bf91aa FUN_145bf91aa body=60 status=ok
// SIG undefined FUN_145bf91aa(void)

void FUN_145bf91aa(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1458793b1(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bf91e6 FUN_145bf91e6 body=179 status=ok
// SIG undefined FUN_145bf91e6(void)

void FUN_145bf91e6(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = FUN_140f7ad96(uVar1);
  if (*(int *)(lVar4 + 0x68) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(lVar4 + 0x60);
  }
  iVar3 = FUN_144a8a8b6(puVar5,"Gamepad");
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else {
    if (*(int *)(lVar4 + 0x68) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(lVar4 + 0x60);
    }
    iVar3 = FUN_144a8a8b6(puVar5,"Touch");
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    else {
      if (*(int *)(lVar4 + 0x68) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(lVar4 + 0x60);
      }
      iVar3 = FUN_144a8a8b6(puVar5,"MouseAndKeyboard");
      if (iVar3 != 0) goto LAB_145bf926d;
      uVar2 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x40) = uVar2;
LAB_145bf926d:
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(lVar4 + 0x70);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(lVar4 + 0x71);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(lVar4 + 0x72);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(lVar4 + 0x73);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  return;
}



// FUNCTION 145bf929a FUN_145bf929a body=104 status=ok
// SIG undefined FUN_145bf929a(void)

undefined8 FUN_145bf929a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145bf9304(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9304 FUN_145bf9304 body=22 status=ok
// SIG undefined FUN_145bf9304(void)

undefined8 FUN_145bf9304(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb8cf88;
  if (DAT_14cb8cf88 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8cf88 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8cf88 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8cf88[0x3a] <= *(int *)((longlong)DAT_14cb8cf88 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb8cf88 + 0x300))(DAT_14cb8cf88);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145bf931a FUN_145bf931a body=104 status=ok
// SIG undefined FUN_145bf931a(void)

undefined8 FUN_145bf931a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145bf9384(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9384 FUN_145bf9384 body=22 status=ok
// SIG undefined FUN_145bf9384(void)

undefined8 FUN_145bf9384(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb8d0a8;
  if (DAT_14cb8d0a8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8d0a8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8d0a8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8d0a8[0x3a] <= *(int *)((longlong)DAT_14cb8d0a8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb8d0a8 + 0x300))(DAT_14cb8d0a8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145bf93a8 FUN_145bf93a8 body=40 status=ok
// SIG undefined FUN_145bf93a8(void)

undefined8 FUN_145bf93a8(undefined8 param_1,int param_2)

{
  FUN_145bf93d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf93d0 FUN_145bf93d0 body=73 status=ok
// SIG undefined FUN_145bf93d0(void)

void FUN_145bf93d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6a0f60;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145bf941a FUN_145bf941a body=104 status=ok
// SIG undefined FUN_145bf941a(void)

undefined8 FUN_145bf941a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145bf9484(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9484 FUN_145bf9484 body=22 status=ok
// SIG undefined FUN_145bf9484(void)

undefined8 FUN_145bf9484(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cbe61a8;
  if (DAT_14cbe61a8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbe61a8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe61a8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbe61a8[0x3a] <= *(int *)((longlong)DAT_14cbe61a8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cbe61a8 + 0x300))(DAT_14cbe61a8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145bf949a FUN_145bf949a body=122 status=ok
// SIG undefined FUN_145bf949a(void)

void FUN_145bf949a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_1407052fc(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145bf9514(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 145bf9514 FUN_145bf9514 body=132 status=ok
// SIG undefined FUN_145bf9514(void)

void FUN_145bf9514(longlong param_1,int param_2)

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



// FUNCTION 145bf9598 FUN_145bf9598 body=223 status=ok
// SIG undefined FUN_145bf9598(void)

bool FUN_145bf9598(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined6 uStack_46;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar5 = CONCAT62(uStack_46,local_48);
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_1 + 0x20);
    local_48 = *param_3;
    local_40 = *(longlong *)(param_3 + 4);
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (*pcVar2)(iVar1 + lVar4,param_2,&local_48);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf967e FUN_145bf967e body=948 status=ok
// SIG undefined FUN_145bf967e(void)

void FUN_145bf967e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  char local_88 [4];
  longlong local_84;
  uint local_7c;
  longlong *local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_1[0x2c] != '\0') goto LAB_145bf96a4;
  if ((((int)param_1[0x30] == 0) || (plVar3 = (longlong *)param_1[0x2f], plVar3 == (longlong *)0x0))
     || (cVar6 = (**(code **)(*plVar3 + 0x30))(), cVar6 == '\0')) {
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar5 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_68[2] = lVar10;
    *local_68 = &PTR_FUN_14b9b8890;
    local_68[3] = 0;
    FUN_14485c47a(local_68 + 3,param_1);
    puVar5[4] = FUN_1462565c8;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_144a450dc(param_1 + 0x2f,&local_68);
    FUN_1449db362(&local_68);
  }
  lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar7 == 0) goto LAB_145bf96a4;
  local_78 = param_1;
  local_70 = lVar7;
  FUN_1402815f4(param_1,&local_68);
  puVar4 = (uint *)local_68[0x7c];
  AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 0x30));
  puVar4[0x2e] = puVar4[0x2e] + 1;
  plVar3 = (longlong *)CONCAT44(uStack_5c,local_60);
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
  FUN_1414ae211(&local_68);
  FUN_1414dd4b8(&local_78,local_88,&local_68);
  if (local_88[0] == '\x03') {
    bVar11 = local_84 == 0;
LAB_145bf9791:
    uVar9 = (uint)!bVar11;
  }
  else {
    uVar9 = local_7c;
    if (local_88[0] != '\x02') {
      if (local_88[0] == '\x01') {
        bVar11 = local_7c == 0;
        goto LAB_145bf9791;
      }
      uVar9 = 0;
    }
  }
  if (uVar9 == *puVar4) {
    if (puVar4[1] == 0) {
      uVar8 = 1;
      goto LAB_145bf996d;
    }
  }
  else {
    uVar8 = puVar4[1] + 1;
LAB_145bf996d:
    *puVar4 = uVar9;
    puVar4[1] = uVar8;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1414ae1a9(&local_68);
  FUN_1414dd4b8(&local_78,local_88,&local_68);
  if (local_88[0] == '\x03') {
    bVar11 = local_84 == 0;
LAB_145bf97ee:
    uVar9 = (uint)!bVar11;
  }
  else {
    uVar9 = local_7c;
    if (local_88[0] != '\x02') {
      if (local_88[0] == '\x01') {
        bVar11 = local_7c == 0;
        goto LAB_145bf97ee;
      }
      uVar9 = 0;
    }
  }
  if (uVar9 == puVar4[2]) {
    if (puVar4[3] == 0) {
      uVar8 = 1;
      goto LAB_145bf997e;
    }
  }
  else {
    uVar8 = puVar4[3] + 1;
LAB_145bf997e:
    puVar4[2] = uVar9;
    puVar4[3] = uVar8;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_145bf9a33(&local_68);
  FUN_1414dd4b8(&local_78,local_88,&local_68);
  if (local_88[0] == '\x01') {
    cVar6 = local_7c != 0;
  }
  else {
    cVar6 = FUN_140321d1a(local_88);
  }
  if ((char)puVar4[0xc] == cVar6) {
    if (puVar4[0xd] == 0) {
      uVar9 = 1;
      goto LAB_145bf9990;
    }
  }
  else {
    uVar9 = puVar4[0xd] + 1;
LAB_145bf9990:
    *(char *)(puVar4 + 0xc) = cVar6;
    puVar4[0xd] = uVar9;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 0x30));
LAB_145bf96a4:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bf9a33 FUN_145bf9a33 body=103 status=ok
// SIG undefined FUN_145bf9a33(void)

longlong FUN_145bf9a33(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144928b90(param_1,2);
  local_20 = DAT_14cbca680;
  local_18 = DAT_14cbca688;
  FUN_144928d62(param_1 + 0x10,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9a9c FUN_145bf9a9c body=36 status=ok
// SIG undefined FUN_145bf9a9c(void)

void FUN_145bf9a9c(undefined8 param_1)

{
  FUN_1414dd5aa();
  FUN_145812e9c(param_1,1);
  FUN_145812e48(param_1);
  return;
}



// FUNCTION 145bf9ac0 FUN_145bf9ac0 body=40 status=ok
// SIG undefined FUN_145bf9ac0(void)

undefined8 FUN_145bf9ac0(undefined8 param_1,int param_2)

{
  FUN_145bf9ae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bf9ae8 FUN_145bf9ae8 body=66 status=ok
// SIG undefined FUN_145bf9ae8(void)

void FUN_145bf9ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b612800;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d048(param_1);
  return;
}



// FUNCTION 145bf9b34 FUN_145bf9b34 body=97 status=ok
// SIG undefined FUN_145bf9b34(void)

void FUN_145bf9b34(longlong param_1)

{
  FUN_140368b56(param_1 + 0x58);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145d24fc7(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bf9b96 FUN_145bf9b96 body=427 status=ok
// SIG undefined FUN_145bf9b96(void)

void FUN_145bf9b96(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_48 = FUN_14591a86e;
    local_40 = 0;
    FUN_145bfa042(&local_38,lVar1);
    *(undefined8 *)(param_1 + 0x30) = local_38;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_48 = FUN_140e5be9e;
    local_40 = 0;
    FUN_145bf9d42(&DAT_14cbd0b78,&local_38,lVar1);
    *(undefined8 *)(param_1 + 0x48) = local_38;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_48 = FUN_140e5be40;
    local_40 = 0;
    FUN_145bf9d42(&DAT_14cbd0a38,&local_38,lVar1);
    *(undefined8 *)(param_1 + 0x38) = local_38;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_48 = FUN_14143395c;
    local_40 = 0;
    FUN_145bf9e42(&local_38,lVar1);
    *(undefined8 *)(param_1 + 0x40) = local_38;
  }
  lVar6 = FUN_140495e96(param_1);
  if (lVar6 != 0) {
    lVar6 = FUN_1403ca91c(lVar6);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x80);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0x78);
        lVar7 = 0;
        do {
          if ((*(int *)(lVar3 + 8 + lVar7) != 0) &&
             (plVar4 = *(longlong **)(lVar3 + lVar7), plVar4 != (longlong *)0x0)) {
            cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,lVar1);
            if (cVar5 != '\0') goto LAB_145bf9d1f;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar7);
      }
      local_48 = FUN_14141f5fc;
      local_40 = 0;
      FUN_145bfa13c(lVar6 + 0x78,&local_38,lVar1);
    }
  }
LAB_145bf9d1f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9d42 FUN_145bf9d42 body=254 status=ok
// SIG undefined FUN_145bf9d42(void)

undefined8
FUN_145bf9d42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b961ce0;
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
  *local_48 = &PTR_FUN_14b9bcb40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127be6a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9e42 FUN_145bf9e42 body=241 status=ok
// SIG undefined FUN_145bf9e42(void)

undefined8 FUN_145bf9e42(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b9bcc20;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9bcbb0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145bf9f34(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bf9f34 FUN_145bf9f34 body=233 status=ok
// SIG undefined FUN_145bf9f34(void)

undefined8 * FUN_145bf9f34(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cbd0a50,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cbd0a58;
      lVar6 = (longlong)(int)DAT_14cbd0a58;
      DAT_14cbd0a58 = DAT_14cbd0a58 + 1;
      if (DAT_14cbd0a5c < DAT_14cbd0a58) {
        FUN_1447a71f6(&DAT_14cbd0a50,uVar3);
      }
      lVar2 = DAT_14cbd0a50;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cbd0a50 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfa02a FUN_145bfa02a body=24 status=ok
// SIG undefined FUN_145bfa02a(void)

bool FUN_145bfa02a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145bfa042 FUN_145bfa042 body=248 status=ok
// SIG undefined FUN_145bfa042(void)

undefined8 FUN_145bfa042(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b982300;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9bcad0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14112c702(&DAT_14cbd0a20,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfa13c FUN_145bfa13c body=254 status=ok
// SIG undefined FUN_145bfa13c(void)

undefined8
FUN_145bfa13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9bcc90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfa23c FUN_145bfa23c body=239 status=ok
// SIG undefined FUN_145bfa23c(void)

void FUN_145bfa23c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
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
  FUN_145bfa32c(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfa32c FUN_145bfa32c body=166 status=ok
// SIG undefined FUN_145bfa32c(void)

void FUN_145bfa32c(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30 && (*(longlong *)(param_1 + 0x50) == 0)) &&
        (*(longlong *)(lVar1 + 0xc38) != 0)))) {
      local_30 = FUN_144271d0e;
      local_28 = 0;
      FUN_1414dd76e(*(longlong *)(lVar1 + 0xc38),&local_20,param_1);
      *(undefined8 *)(param_1 + 0x50) = local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bfa3d4 FUN_145bfa3d4 body=59 status=ok
// SIG undefined FUN_145bfa3d4(void)

void FUN_145bfa3d4(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a617d4(DAT_14ca85550,1);
  if (cVar1 != '\0') {
    FUN_145bfa410(param_1 + 0x10);
    FUN_145bfa410(param_1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 145bfa410 FUN_145bfa410 body=111 status=ok
// SIG undefined FUN_145bfa410(void)

void FUN_145bfa410(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    param_1[1] = 0;
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



// FUNCTION 145bfa480 FUN_145bfa480 body=40 status=ok
// SIG undefined FUN_145bfa480(void)

undefined8 FUN_145bfa480(undefined8 param_1,int param_2)

{
  FUN_145bfa4a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfa4a8 FUN_145bfa4a8 body=45 status=ok
// SIG undefined FUN_145bfa4a8(void)

void FUN_145bfa4a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8ad2e0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bfa4d6 FUN_145bfa4d6 body=40 status=ok
// SIG undefined FUN_145bfa4d6(void)

undefined8 FUN_145bfa4d6(undefined8 param_1,int param_2)

{
  FUN_145bfa4fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfa4fe FUN_145bfa4fe body=72 status=ok
// SIG undefined FUN_145bfa4fe(void)

void FUN_145bfa4fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab20eb0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfa546(param_1 + 0x7f);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145bfa546 FUN_145bfa546 body=53 status=ok
// SIG undefined FUN_145bfa546(void)

void FUN_145bfa546(longlong *param_1)

{
  FUN_145bfa57c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bfa57c FUN_145bfa57c body=90 status=ok
// SIG undefined FUN_145bfa57c(void)

void FUN_145bfa57c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145bfa5d6 FUN_145bfa5d6 body=80 status=ok
// SIG undefined FUN_145bfa5d6(void)

undefined8 * FUN_145bfa5d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14abcee90;
  param_1[5] = &PTR_LAB_14abcf130;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfa626 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bfa62c FUN_145bfa62c body=40 status=ok
// SIG undefined FUN_145bfa62c(void)

undefined8 FUN_145bfa62c(undefined8 param_1,int param_2)

{
  FUN_145bfa654();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bfa654 FUN_145bfa654 body=669 status=ok
// SIG undefined FUN_145bfa654(void)

void FUN_145bfa654(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14aeeb870;
  param_1[5] = &PTR_FUN_14aeec520;
  param_1[6] = &PTR_LAB_14aeec560;
  param_1[0x55] = &PTR_FUN_14aeec5b0;
  param_1[0x56] = &PTR_FUN_14aeec630;
  param_1[0x57] = &PTR_FUN_14aeec640;
  param_1[0xca] = &PTR_FUN_14aeec670;
  param_1[0xcb] = &PTR_FUN_14aeec680;
  param_1[0xcc] = &PTR_FUN_14aeec6a0;
  param_1[0xcd] = &PTR_FUN_14aeec6c0;
  param_1[0xd7] = &PTR_FUN_14aeec6e0;
  if (param_1[0x139] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7d10(param_1 + 0x129);
  FUN_145bfa9de(param_1 + 0x110);
  plVar5 = (longlong *)param_1[0x10e];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  FUN_145bfa8f2(param_1 + 0x101);
  FUN_144760e21(param_1[0xfd],*(undefined4 *)(param_1 + 0xfe));
  if (param_1[0xfd] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0xfc];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xfb];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  lVar4 = param_1[0xfa];
  if (lVar4 != 0) {
    FUN_1484c0380(lVar4);
    FUN_1400020a8(lVar4);
  }
  if (param_1[0xf2] != 0) {
    plVar5 = param_1 + 0xf6;
    if ((longlong *)param_1[0xf4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xf4];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (param_1[0xea] != 0) {
    plVar5 = param_1 + 0xee;
    if ((longlong *)param_1[0xec] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xec];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (param_1[0xe2] != 0) {
    plVar5 = param_1 + 0xe6;
    if ((longlong *)param_1[0xe4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0xe4];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_144760e21(param_1[0xdc],*(undefined4 *)(param_1 + 0xdd));
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd9],*(undefined4 *)(param_1 + 0xda));
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfa934(param_1);
  return;
}



// FUNCTION 145bfa8f2 FUN_145bfa8f2 body=65 status=ok
// SIG undefined FUN_145bfa8f2(void)

void FUN_145bfa8f2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


