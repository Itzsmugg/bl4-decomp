// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b2cc00 FUN_146b2cc00 body=99 status=ok
// SIG undefined FUN_146b2cc00(void)

undefined8 * FUN_146b2cc00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_149f2c840;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 146b2cc64 FUN_146b2cc64 body=52 status=ok
// SIG undefined FUN_146b2cc64(void)

void FUN_146b2cc64(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x88) & 1) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    FUN_1400020a8();
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 146b2cc98 FUN_146b2cc98 body=29 status=ok
// SIG undefined FUN_146b2cc98(void)

undefined8 FUN_146b2cc98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2ccb6 FUN_146b2ccb6 body=9 status=ok
// SIG undefined FUN_146b2ccb6(void)

void FUN_146b2ccb6(longlong param_1)

{
  FUN_146b2ccde(param_1 + 0x10);
  return;
}



// FUNCTION 146b2ccc0 FUN_146b2ccc0 body=29 status=ok
// SIG undefined FUN_146b2ccc0(void)

undefined8 FUN_146b2ccc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2ccde FUN_146b2ccde body=110 status=ok
// SIG undefined FUN_146b2ccde(void)

void FUN_146b2ccde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x30);
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
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000146b2cd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b2cd4c FUN_146b2cd4c body=133 status=ok
// SIG undefined FUN_146b2cd4c(void)

undefined8 * FUN_146b2cd4c(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149f2c880;
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1);
  }
  return puVar2;
}



// FUNCTION 146b2cdd2 FUN_146b2cdd2 body=14 status=ok
// SIG undefined FUN_146b2cdd2(void)

void FUN_146b2cdd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 146b2cde0 FUN_146b2cde0 body=29 status=ok
// SIG undefined FUN_146b2cde0(void)

undefined8 FUN_146b2cde0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b2cdfe FUN_146b2cdfe body=62 status=ok
// SIG undefined FUN_146b2cdfe(void)

void FUN_146b2cdfe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b2ce3c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146b2ce3c FUN_146b2ce3c body=93 status=ok
// SIG undefined FUN_146b2ce3c(void)

ulonglong FUN_146b2ce3c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146b2ce9a FUN_146b2ce9a body=147 status=ok
// SIG undefined FUN_146b2ce9a(void)

void FUN_146b2ce9a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b2cf2e FUN_146b2cf2e body=282 status=ok
// SIG undefined FUN_146b2cf2e(void)

undefined4 * FUN_146b2cf2e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b2d04a(param_1,local_48);
  FUN_146b2d1b6(param_3,local_40);
  local_40[0xe] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_146b2d130(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0xf] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0xe] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146b2d314(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2d04a FUN_146b2d04a body=229 status=ok
// SIG undefined FUN_146b2d04a(void)

int * FUN_146b2d04a(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 146b2d130 FUN_146b2d130 body=133 status=ok
// SIG undefined FUN_146b2d130(void)

undefined8 FUN_146b2d130(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_146b2d230(), iVar14 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x40);
    if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar14 * 0x40) != 0) {
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
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
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
    FUN_146b2d2a2(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 146b2d1b6 FUN_146b2d1b6 body=122 status=ok
// SIG undefined FUN_146b2d1b6(void)

undefined4 * FUN_146b2d1b6(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  param_2[4] = puVar2[4];
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *param_2 = *puVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *(undefined8 *)(param_2 + 6) = 0;
  iVar1 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  param_2[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[9] = 0;
  }
  else {
    FUN_146b2c52a(param_2 + 6,iVar1);
    memcpy(*(void **)(param_2 + 6),_Src,(longlong)iVar1 * 0xc);
  }
  uVar7 = puVar3[3];
  *(undefined8 *)(param_2 + 10) = puVar3[2];
  *(undefined8 *)(param_2 + 0xc) = uVar7;
  return param_2;
}



// FUNCTION 146b2d230 FUN_146b2d230 body=113 status=ok
// SIG undefined FUN_146b2d230(void)

int FUN_146b2d230(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

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
        lVar4 = (longlong)iVar1 * 0x40;
        if (*(int *)(lVar2 + 0x10 + lVar4) == *(int *)param_3[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar4) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b2d2a2 FUN_146b2d2a2 body=114 status=ok
// SIG undefined FUN_146b2d2a2(void)

void FUN_146b2d2a2(longlong *param_1,int param_2)

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



// FUNCTION 146b2d314 FUN_146b2d314 body=422 status=ok
// SIG undefined FUN_146b2d314(void)

void FUN_146b2d314(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 146b2d4bc FUN_146b2d4bc body=116 status=ok
// SIG undefined FUN_146b2d4bc(void)

void FUN_146b2d4bc(longlong *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)*param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x40;
        if (*(int *)(lVar2 + 0x10 + lVar3) == *(int *)param_2[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar3) == *param_2) {
          FUN_146b2d530();
          return;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b2d530 FUN_146b2d530 body=90 status=ok
// SIG undefined FUN_146b2d530(void)

void FUN_146b2d530(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_146b2d58a();
  return;
}



// FUNCTION 146b2d58a FUN_146b2d58a body=52 status=ok
// SIG undefined FUN_146b2d58a(void)

void FUN_146b2d58a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146b2d2a2(param_1,param_2);
  return;
}



// FUNCTION 146b2d5be FUN_146b2d5be body=220 status=ok
// SIG undefined FUN_146b2d5be(void)

void FUN_146b2d5be(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_48 = param_2[4];
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_146b2d668;
          goto LAB_146b2d677;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146b2d668:
    FUN_14474d06a(param_1,0);
  }
LAB_146b2d677:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2d69c FUN_146b2d69c body=112 status=ok
// SIG undefined FUN_146b2d69c(void)

void FUN_146b2d69c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 146b2d70c FUN_146b2d70c body=147 status=ok
// SIG undefined FUN_146b2d70c(void)

void FUN_146b2d70c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
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



// FUNCTION 146b2d7a0 FUN_146b2d7a0 body=112 status=ok
// SIG undefined FUN_146b2d7a0(void)

void FUN_146b2d7a0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146b2d810 FUN_146b2d810 body=67 status=ok
// SIG undefined FUN_146b2d810(void)

void FUN_146b2d810(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146b2c344(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b2d314(param_1);
    return;
  }
  FUN_146b2d854(param_1);
  FUN_146b2c344(param_1,0);
  return;
}



// FUNCTION 146b2d854 FUN_146b2d854 body=322 status=ok
// SIG undefined FUN_146b2d854(void)

void FUN_146b2d854(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 146b2d997 FUN_146b2d997 body=559 status=ok
// SIG undefined FUN_146b2d997(void)

void FUN_146b2d997(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar9 = &local_348;
    do {
      piVar3 = (int *)*plVar9;
      piVar10 = (int *)plVar9[1];
      iVar12 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar3) >> 3);
      piVar8 = piVar3;
      piVar14 = piVar10;
      if (iVar12 != 0) {
LAB_146b2da58:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = (ulonglong)(iVar5 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar3 + uVar6 * 2);
          *(undefined8 *)(piVar3 + uVar6 * 2) = *(undefined8 *)piVar3;
          *(undefined8 *)piVar3 = uVar1;
          piVar7 = piVar10 + 2;
          piVar4 = piVar3;
          do {
            piVar2 = piVar4 + 2;
            piVar11 = piVar4 + 2;
            do {
              piVar4 = piVar11;
              piVar15 = piVar2;
              if (piVar10 < piVar4) break;
              piVar2 = piVar15 + 2;
              piVar11 = piVar4 + 2;
            } while (*piVar4 <= *piVar3);
            piVar2 = piVar7 + -4;
            do {
              piVar11 = piVar7;
              piVar16 = piVar2;
              piVar7 = piVar11 + -2;
              if (piVar7 <= piVar3) break;
              piVar2 = piVar16 + -2;
            } while (*piVar3 <= *piVar7);
            if (piVar7 < piVar4) goto LAB_146b2dad2;
            uVar1 = *(undefined8 *)piVar4;
            *(undefined8 *)piVar4 = *(undefined8 *)piVar7;
            *(undefined8 *)piVar7 = uVar1;
          } while( true );
        }
        if (piVar3 < piVar10) {
          do {
            piVar8 = piVar3;
            if (piVar3 + 2 <= piVar10) {
              piVar14 = piVar3 + 2;
              iVar12 = *piVar3;
              do {
                iVar5 = *piVar14;
                iVar13 = iVar12;
                if (iVar12 <= iVar5) {
                  iVar13 = iVar5;
                }
                if (iVar12 < iVar5) {
                  piVar8 = piVar14;
                }
                piVar14 = piVar14 + 2;
                iVar12 = iVar13;
              } while (piVar14 <= piVar10);
            }
            uVar1 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = *(undefined8 *)piVar10;
            *(undefined8 *)piVar10 = uVar1;
            piVar10 = piVar10 + -2;
          } while (piVar3 < piVar10);
        }
        goto LAB_146b2dba5;
      }
LAB_146b2dbba:
      FUN_146b2dbc7(piVar3);
LAB_146b2dba5:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146b2dad2:
  uVar1 = *(undefined8 *)piVar3;
  *(undefined8 *)piVar3 = *(undefined8 *)piVar7;
  *(undefined8 *)piVar7 = uVar1;
  iVar12 = iVar12 + -1;
  piVar11 = piVar11 + -4;
  if ((longlong)piVar16 - (longlong)piVar8 < (longlong)piVar14 - (longlong)piVar15) {
    if (piVar4 < piVar10) {
      *plVar9 = (longlong)piVar4;
      plVar9[1] = (longlong)piVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar15 = piVar3;
    if (piVar7 <= piVar3 + 2) goto LAB_146b2dba5;
  }
  else {
    if (piVar3 + 2 < piVar7) {
      *plVar9 = (longlong)piVar3;
      plVar9[1] = (longlong)piVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar3 = piVar4;
    piVar11 = piVar10;
    piVar16 = piVar10;
    if (piVar10 <= piVar4) goto LAB_146b2dba5;
  }
  iVar5 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar15) >> 3);
  piVar8 = piVar15;
  piVar10 = piVar11;
  piVar14 = piVar16;
  if (iVar12 == 0) goto LAB_146b2dbba;
  goto LAB_146b2da58;
}



// FUNCTION 146b2dbc7 FUN_146b2dbc7 body=297 status=ok
// SIG undefined FUN_146b2dbc7(void)

void FUN_146b2dbc7(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000146b2dbe8:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(int *)(param_1 + iVar5) <= *(int *)(param_1 + iVar6))) {
          iVar5 = iVar6;
        }
        if (*(int *)(param_1 + iVar2) < *(int *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000146b2dbe8;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(int *)(param_1 + iVar5) <= *(int *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(int *)(param_1 + iVar6) <= *(int *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 146b2dcf0 FUN_146b2dcf0 body=98 status=ok
// SIG undefined FUN_146b2dcf0(void)

void FUN_146b2dcf0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
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



// FUNCTION 146b2dd52 FUN_146b2dd52 body=565 status=ok
// SIG undefined FUN_146b2dd52(void)

void FUN_146b2dd52(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      puVar4 = (undefined8 *)*plVar10;
      puVar11 = (undefined8 *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3);
      puVar9 = puVar4;
      puVar14 = puVar11;
      if (iVar13 != 0) {
LAB_146b2de13:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          uVar2 = puVar4[uVar7];
          puVar4[uVar7] = *puVar4;
          *puVar4 = uVar2;
          puVar8 = puVar11 + 1;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 1;
            puVar12 = puVar5 + 1;
            do {
              puVar5 = puVar12;
              puVar15 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar15 + 1;
              puVar12 = puVar5 + 1;
            } while (*(int *)((longlong)puVar4 + 4) <= *(int *)((longlong)puVar5 + 4));
            puVar3 = puVar8 + -2;
            do {
              puVar12 = puVar8;
              puVar16 = puVar3;
              puVar8 = puVar12 + -1;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar16 + -1;
            } while (*(int *)((longlong)puVar12 + -4) <= *(int *)((longlong)puVar4 + 4));
            if (puVar8 < puVar5) goto LAB_146b2de91;
            uVar2 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar2;
          } while( true );
        }
        for (; puVar9 = puVar4, puVar14 = puVar4, puVar4 < puVar11; puVar11 = puVar11 + -1) {
          while (puVar8 = puVar9, puVar9 = puVar14 + 1, puVar9 <= puVar11) {
            piVar1 = (int *)((longlong)puVar14 + 0xc);
            puVar14 = puVar9;
            if (*(int *)((longlong)puVar8 + 4) <= *piVar1) {
              puVar9 = puVar8;
            }
          }
          uVar2 = *puVar8;
          *puVar8 = *puVar11;
          *puVar11 = uVar2;
        }
        goto LAB_146b2df66;
      }
LAB_146b2df7b:
      FUN_146b2df88(puVar4);
LAB_146b2df66:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146b2de91:
  uVar2 = *puVar4;
  *puVar4 = *puVar8;
  *puVar8 = uVar2;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar16 - (longlong)puVar9 < (longlong)puVar14 - (longlong)puVar15) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar15 = puVar4;
    if (puVar8 <= puVar4 + 1) goto LAB_146b2df66;
  }
  else {
    if (puVar4 + 1 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar16 = puVar11;
    if (puVar11 <= puVar5) goto LAB_146b2df66;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar15) >> 3);
  puVar9 = puVar15;
  puVar11 = puVar12;
  puVar14 = puVar16;
  if (iVar13 == 0) goto LAB_146b2df7b;
  goto LAB_146b2de13;
}



// FUNCTION 146b2df88 FUN_146b2df88 body=309 status=ok
// SIG undefined FUN_146b2df88(void)

void FUN_146b2df88(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x000146b2dfa9:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar7 * 8 + 4) <=
            *(int *)((longlong)param_1 + (longlong)iVar5 * 8 + 4))) {
          iVar5 = iVar7;
        }
        lVar9 = (longlong)iVar2;
        lVar6 = (longlong)iVar5;
        if (*(int *)((longlong)param_1 + lVar6 * 8 + 4) <
            *(int *)((longlong)param_1 + lVar9 * 8 + 4)) {
          uVar1 = param_1[lVar9];
          param_1[lVar9] = param_1[lVar6];
          param_1[lVar6] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000146b2dfa9;
        }
      }
      bVar10 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(int *)((longlong)param_1 + (longlong)iVar2 * 8 + 4) <=
                *(int *)((longlong)param_1 + (longlong)iVar5 * 8 + 4))) {
              iVar7 = iVar2;
            }
            lVar6 = (longlong)iVar8;
            lVar9 = (longlong)iVar7;
            if (*(int *)((longlong)param_1 + lVar6 * 8 + 4) <=
                *(int *)((longlong)param_1 + lVar9 * 8 + 4)) break;
            uVar1 = param_1[lVar6];
            param_1[lVar6] = param_1[lVar9];
            param_1[lVar9] = uVar1;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 146b2e0be FUN_146b2e0be body=114 status=ok
// SIG undefined FUN_146b2e0be(void)

int FUN_146b2e0be(longlong *param_1,uint param_2,undefined1 (*param_3) [16])

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
        lVar4 = (longlong)iVar1;
        if (*(int *)(lVar2 + 0x10 + lVar4 * 0x28) == *(int *)param_3[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar4 * 0x28) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b2e130 FUN_146b2e130 body=117 status=ok
// SIG undefined FUN_146b2e130(void)

void FUN_146b2e130(longlong *param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)*param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1;
        if (*(int *)(lVar2 + 0x10 + lVar3 * 0x28) == *(int *)param_2[1] &&
            *(undefined1 (*) [16])(lVar2 + lVar3 * 0x28) == *param_2) {
          FUN_146b2e1a6();
          return;
        }
        iVar1 = *(int *)(lVar2 + lVar3 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146b2e1a6 FUN_146b2e1a6 body=87 status=ok
// SIG undefined FUN_146b2e1a6(void)

void FUN_146b2e1a6(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_146b2e1fe();
  return;
}



// FUNCTION 146b2e1fe FUN_146b2e1fe body=45 status=ok
// SIG undefined FUN_146b2e1fe(void)

void FUN_146b2e1fe(longlong *param_1,int param_2)

{
  FUN_146b2e29e(*(undefined8 *)(*param_1 + 0x18 + (longlong)param_2 * 0x28));
  FUN_146b2e22c(param_1,param_2);
  return;
}



// FUNCTION 146b2e22c FUN_146b2e22c body=114 status=ok
// SIG undefined FUN_146b2e22c(void)

void FUN_146b2e22c(longlong *param_1,int param_2)

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



// FUNCTION 146b2e29e FUN_146b2e29e body=74 status=ok
// SIG undefined FUN_146b2e29e(void)

void FUN_146b2e29e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146b2e2e8 FUN_146b2e2e8 body=304 status=ok
// SIG undefined FUN_146b2e2e8(void)

undefined4 * FUN_146b2e2e8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b2e41a(param_1,local_48);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[4] = puVar1[4];
  uVar7 = puVar1[1];
  uVar6 = puVar1[2];
  uVar3 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar7;
  local_40[2] = uVar6;
  local_40[3] = uVar3;
  *(undefined8 *)(local_40 + 6) = *puVar2;
  *puVar2 = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  cVar5 = FUN_146b2e500(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146b2e570(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2e41a FUN_146b2e41a body=230 status=ok
// SIG undefined FUN_146b2e41a(void)

int * FUN_146b2e41a(longlong *param_1,int *param_2)

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



// FUNCTION 146b2e500 FUN_146b2e500 body=112 status=ok
// SIG undefined FUN_146b2e500(void)

undefined8 FUN_146b2e500(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_146b2e0be(), iVar10 != -1)) {
    lVar2 = *param_1;
    lVar11 = (longlong)iVar10;
    FUN_146b2e29e(*(undefined8 *)(lVar2 + 0x18 + lVar11 * 0x28));
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar11 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + lVar11 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146b2e22c(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 146b2e570 FUN_146b2e570 body=419 status=ok
// SIG undefined FUN_146b2e570(void)

void FUN_146b2e570(longlong *param_1)

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



// FUNCTION 146b2e714 FUN_146b2e714 body=371 status=ok
// SIG undefined FUN_146b2e714(void)

longlong * FUN_146b2e714(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146b2bfea(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146b2d7a0(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1429271cb(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146b2bc8e(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146b2e888(param_2);
        FUN_1429271cb(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b2e888 FUN_146b2e888 body=63 status=ok
// SIG undefined FUN_146b2e888(void)

longlong FUN_146b2e888(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b2d70c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_146b2eb2a(lVar2);
  return lVar2;
}



// FUNCTION 146b2e8c8 FUN_146b2e8c8 body=200 status=ok
// SIG undefined FUN_146b2e8c8(void)

void FUN_146b2e8c8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_146b2c7ae(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_146b2c7ae(param_1 + 0x20,0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(PSRWLOCK *)(param_1 + 0x48) = SRWLock;
  if (lVar2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2e990 FUN_146b2e990 body=409 status=ok
// SIG undefined FUN_146b2e990(void)

longlong * FUN_146b2e990(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146b2c7ae(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1429272f0(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_146b2c7ae(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146b2c17a(param_2,iVar2);
        }
        FUN_1429272f0(param_1,(longlong)iVar2 * 8 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b2eb2a FUN_146b2eb2a body=72 status=ok
// SIG undefined FUN_146b2eb2a(void)

void FUN_146b2eb2a(undefined4 *param_1)

{
  PSRWLOCK SRWLock;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  *(PSRWLOCK *)(param_1 + 0x12) = SRWLock;
  return;
}



// FUNCTION 146b2eb72 FUN_146b2eb72 body=131 status=ok
// SIG undefined FUN_146b2eb72(void)

longlong FUN_146b2eb72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146b2ebf5();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146b2d314(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146b2ebf5 FUN_146b2ebf5 body=858 status=ok
// SIG undefined FUN_146b2ebf5(void)

longlong * FUN_146b2ebf5(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar8 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar5 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar5 + 1;
    if ((int *)puVar5[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar5;
      *puVar5 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar9 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar11 = local_88._4_4_;
      local_88 = uVar9;
      do {
        lVar6 = *local_a0;
        lVar12 = (longlong)iVar11 * 0x40;
        FUN_144aa0c38(param_1,lVar6 + lVar12);
        FUN_146b2ef50(param_1,lVar6 + lVar12 + 0x18);
        FUN_1408383eb(param_1,lVar6 + lVar12 + 0x30);
        puVar10 = (undefined4 *)(lVar6 + lVar12 + 0x28);
        puVar7 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar10,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          *puVar10 = *puVar7;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar11 = local_88._4_4_;
        uVar9 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar5 = (ulonglong *)param_1[1];
    puVar7 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar7) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar8,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar7;
    }
    FUN_146b2c344(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar9 = local_88;
    if (0 < (int)local_70) {
      iVar11 = 0;
      do {
        FUN_146b2d04a(param_2,&local_a0);
        *local_98 = 0;
        local_98[1] = 0;
        *(undefined4 *)(local_98 + 2) = 0;
        puVar2 = local_98 + 3;
        puVar3 = local_98 + 5;
        puVar4 = local_98 + 6;
        local_98[3] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[6] = 0;
        *(undefined4 *)(local_98 + 7) = 0xffffffff;
        FUN_144aa0c38(param_1);
        FUN_146b2ef50(param_1,puVar2);
        FUN_1408383eb(param_1,puVar4);
        puVar7 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
          }
          else {
            FUN_14572512c(param_1,puVar3);
          }
        }
        else {
          *(undefined4 *)puVar3 = *puVar7;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar11 = iVar11 + 1;
        uVar9 = local_88;
      } while (iVar11 < (int)local_70);
    }
  }
  local_88 = uVar9;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b2ef50 FUN_146b2ef50 body=377 status=ok
// SIG undefined FUN_146b2ef50(void)

longlong * FUN_146b2ef50(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146b2d69c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_142927398(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146b2d69c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146b2f0ca(param_2);
        FUN_142927398(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b2f0ca FUN_146b2f0ca body=54 status=ok
// SIG undefined FUN_146b2f0ca(void)

longlong FUN_146b2f0ca(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b2ce9a(param_1,iVar1);
  }
  return (longlong)iVar1 * 0xc + *param_1;
}



// FUNCTION 146b2f100 FUN_146b2f100 body=199 status=ok
// SIG undefined FUN_146b2f100(void)

undefined8 FUN_146b2f100(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x150))(param_2);
  FUN_146b4422a(&local_50,param_3);
  iVar2 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(local_40,&local_50,iVar2 + 1 + (uint)(local_48 == 0));
  FUN_1401aebe8(local_40,*puVar1,iVar2);
  FUN_144a882a8(param_1,local_40,L".delta");
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b2f1c8 FUN_146b2f1c8 body=495 status=ok
// SIG undefined FUN_146b2f1c8(void)

longlong * FUN_146b2f1c8(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)*param_2 + 0x120))((longlong *)*param_2,&local_58);
  plVar5 = local_50;
  lVar4 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if ((longlong)*(int *)(local_58 + 0x100) != 0) {
    lVar8 = *(longlong *)(local_58 + 0xf8);
    lVar9 = (longlong)*(int *)(local_58 + 0x100) * 0x60;
    do {
      lVar7 = (**(code **)(*(longlong *)*param_3 + 0x1f8))((longlong *)*param_3,lVar8);
      if (lVar7 != 0) {
        FUN_146b41a74(lVar8 + 0x48,lVar7 + 0x48);
      }
      lVar8 = lVar8 + 0x60;
      lVar9 = lVar9 + -0x60;
    } while (lVar9 != 0);
  }
  lVar8 = *param_2;
  local_50 = (longlong *)param_2[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  lVar9 = local_58 + 0xf8;
  lVar7 = local_58 + 0xe8;
  local_68 = *param_3;
  plVar3 = (longlong *)param_3[1];
  local_60 = plVar3;
  local_58 = lVar8;
  if (plVar3 == (longlong *)0x0) {
    cVar6 = FUN_142934dcd(lVar9,&local_68,&local_58,lVar7);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    cVar6 = FUN_142934dcd(lVar9,&local_68,&local_58,lVar7);
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
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (cVar6 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar5 == (longlong *)0x0) goto LAB_146b2f373;
  }
  else {
    FUN_146b377ca(lVar4);
    *param_1 = lVar4;
    param_1[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_146b2f373;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar3 = plVar5 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_146b2f373:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b2f3b8 FUN_146b2f3b8 body=1025 status=ok
// SIG undefined FUN_146b2f3b8(void)

longlong FUN_146b2f3b8(longlong *param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158 [2];
  undefined1 local_148 [16];
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1410b2022(&local_b8,param_4);
  if ((int)uStack_b0 == local_84) {
    (**(code **)(*(longlong *)*param_2 + 0xc0))((longlong *)*param_2,&local_b8);
  }
  FUN_140056680(local_108,&DAT_149dfb77a);
  FUN_140e830ae(&local_b8,local_158,local_108,0);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  (**(code **)(*(longlong *)*param_2 + 0x1d0))((longlong *)*param_2,&local_b8,local_108);
  local_188 = 0;
  uStack_180 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_1e8 = local_158;
  (**(code **)(*(longlong *)*param_2 + 0x130))((longlong *)*param_2,*param_1);
  if ((*param_3 == 1) && (*param_1 != 0)) {
    local_1b0 = &local_178;
    FUN_146b4d79c(local_158);
    FUN_14482b9e8(local_158);
    local_178 = 0x100000000;
    local_168 = 0xffffffff;
    uStack_160 = 0;
    uStack_170 = local_148;
    if (local_130 == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_178);
      iVar8 = local_130;
    }
    local_1a8 = (undefined4)local_178;
    uStack_1a4 = local_178._4_4_;
    uStack_1a0 = (undefined4)uStack_170;
    uStack_19c = uStack_170._4_4_;
    uStack_190 = CONCAT44(uStack_15c,uStack_160);
    local_198 = local_168;
    uVar2 = local_198;
    local_198._4_4_ = (int)((ulonglong)local_168 >> 0x20);
    local_1b0 = local_158;
    if ((local_198._4_4_ == iVar8) && (uStack_170 == local_148)) {
      lVar4 = 0;
      local_198 = local_168;
    }
    else {
      lVar4 = 0;
      lVar7 = 0;
      iVar3 = local_198._4_4_;
      local_1e0 = param_1;
      local_1d8 = param_2;
      local_198 = uVar2;
      do {
        lVar1 = *local_1b0;
        lVar5 = (longlong)iVar3;
        local_1c0 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x18);
        local_1b8 = iVar3 + -1;
        if (iVar3 == 0) {
          local_1b8 = 0;
        }
        lVar6 = (**(code **)(*(longlong *)*local_1d8 + 0xb0))((longlong *)*local_1d8,&local_1c0);
        lVar6 = lVar6 + lVar7;
        if (lVar4 <= lVar6) {
          lVar4 = lVar6;
        }
        local_1d0 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x18);
        local_1c8 = iVar3 + -1;
        if (iVar3 == 0) {
          local_1c8 = 0;
        }
        lVar7 = (**(code **)(*(longlong *)*local_1e0 + 0xb0))((longlong *)*local_1e0,&local_1d0);
        lVar7 = lVar6 - lVar7;
        local_198 = CONCAT44(local_198._4_4_,(uint)local_198 & ~uStack_1a4);
        FUN_1449c0562(&local_1a8);
        iVar3 = local_198._4_4_;
      } while (local_1b0 != local_158 ||
               ((undefined1 *)CONCAT44(uStack_19c,uStack_1a0) != local_148 ||
               local_198._4_4_ != iVar8));
    }
  }
  else {
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0xa0))((longlong *)*param_2,local_158);
  }
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_158);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0;
  if (0 < lVar4) {
    lVar7 = lVar4;
  }
  FUN_1408910a4(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 146b2f7ba FUN_146b2f7ba body=812 status=ok
// SIG undefined FUN_146b2f7ba(void)

undefined8 *
FUN_146b2f7ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  undefined8 *local_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_149f2cb30;
  FUN_146b2fae8(param_1 + 1);
  iVar9 = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_3;
  param_1[0x17] = param_4;
  param_1[0x18] = param_5;
  param_1[0x19] = param_6;
  param_1[0x1a] = param_7;
  param_1[0x1b] = param_8;
  param_1[0x1c] = param_9;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x40000000000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  uVar3 = *(uint *)(param_1 + 9);
  uVar10 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  plVar1 = param_1 + 0x14;
  iVar11 = 0;
  if (uVar10 != 0) {
    FUN_1408be2c4(plVar1);
    iVar11 = *(int *)(param_1 + 0x15);
    iVar9 = *(int *)((longlong)param_1 + 0xac);
  }
  *(uint *)(param_1 + 0x15) = uVar3 + iVar11;
  if ((uint)(iVar9 - iVar11) < uVar3) {
    FUN_1447a1bd6(plVar1);
  }
  plVar2 = param_1 + 0x2f;
  local_c0 = param_2;
  memset((void *)((longlong)iVar11 * 0x10 + param_1[0x14]),0,uVar10 * 0x10);
  if (*(int *)((longlong)param_1 + 0x184) < (int)uVar3) {
    FUN_14481578e(plVar2,uVar3);
  }
  if (uVar10 != 0) {
    lVar12 = uVar10 * 0x10 - 0x10;
    lVar8 = 0;
    iVar9 = 0;
    do {
      lVar4 = param_1[8];
      lVar6 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],lVar4 + lVar8);
      if (lVar6 != 0) {
        param_1[0x1d] = param_1[0x1d] + *(longlong *)(lVar6 + 0x58);
        iVar9 = iVar9 + *(int *)(lVar6 + 0x50);
        iVar11 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar11 + 1U;
        if (*(uint *)((longlong)param_1 + 0x184) < iVar11 + 1U) {
          FUN_1446f48e2(plVar2,iVar11);
        }
        *(int *)(*plVar2 + (longlong)iVar11 * 4) = iVar9;
      }
      FUN_144a787a6(*plVar1 + lVar12,lVar4 + lVar8);
      lVar12 = lVar12 + -0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar12 != -0x10);
  }
  uVar5 = local_c0;
  iVar9 = *(int *)((longlong)param_1 + 0x14c);
  if (-1 < iVar9) {
    if (*(int *)((longlong)param_1 + 0x134) < iVar9) {
      FUN_144893a1c(param_1 + 0x25);
      iVar9 = *(int *)((longlong)param_1 + 0x14c);
      if (iVar9 < 0) goto LAB_146b2fad7;
    }
    if (*(int *)((longlong)param_1 + 0x144) < iVar9) {
      FUN_144893a1c(param_1 + 0x27);
    }
    uVar7 = (**(code **)(*(longlong *)param_1[0xb] + 8))();
    param_1[0x24] = uVar7;
    uVar7 = FUN_1405d8a54(0);
    param_1[0x2a] = uVar7;
    uVar7 = FUN_1405d8a54(0);
    param_1[0x2b] = uVar7;
    local_a8 = 0;
    local_98 = &PTR_LAB_149f2ede0;
    local_b8 = FUN_142938e52;
    local_90 = param_1;
    (**(code **)(*(longlong *)param_1[0x24] + 8))();
    FUN_146b2fb92(uVar5);
    if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_146b2fad7:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 146b2fae8 FUN_146b2fae8 body=170 status=ok
// SIG undefined FUN_146b2fae8(void)

void FUN_146b2fae8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  return;
}



// FUNCTION 146b2fb92 FUN_146b2fb92 body=88 status=ok
// SIG undefined FUN_146b2fb92(void)

void FUN_146b2fb92(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b2fbea FUN_146b2fbea body=296 status=ok
// SIG undefined FUN_146b2fbea(void)

void FUN_146b2fbea(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  ppuVar1 = &PTR_FUN_149f2cb30;
  *param_1 = &PTR_FUN_149f2cb30;
  if (*(char *)((longlong)param_1 + 0x171) == '\x01') {
    uVar2 = FUN_144a82cde();
    FUN_1468161aa(uVar2,
                  L"FBuildPatchFileConstructor: Write job active during destruction! Very bad.");
    ppuVar1 = (undefined **)*param_1;
  }
  (*(code *)ppuVar1[2])(param_1);
  (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  (**(code **)(*(longlong *)param_1[0x2a] + 0x20))((longlong *)param_1[0x2a],0xffffffff,0);
  FUN_14018802a(param_1[0x2a]);
  param_1[0x2a] = 0;
  FUN_14018802a(param_1[0x2b]);
  param_1[0x2b] = 0;
  (**(code **)(*(longlong *)param_1[0xb] + 0x10))((longlong *)param_1[0xb],param_1[0x24]);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3 + 0x138) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  FUN_144760e21(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  FUN_146b2fb92(param_1 + 1);
  return;
}



// FUNCTION 146b2fd12 FUN_146b2fd12 body=1014 status=ok
// SIG undefined FUN_146b2fd12(void)

undefined8 *
FUN_146b2fd12(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_dc [4];
  undefined8 *local_d8;
  ulonglong uStack_d0;
  longlong local_c8 [6];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar4 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  *(int *)(param_1 + 3) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar4,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar4 * 2);
  }
  puVar1 = param_1 + 4;
  param_1[4] = 0;
  iVar4 = *(int *)(param_5 + 1);
  pvVar2 = (void *)*param_5;
  *(int *)(param_1 + 5) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    bVar12 = true;
  }
  else {
    FUN_1446dd670(puVar1,iVar4,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar4 * 2);
    bVar12 = *(int *)(param_1 + 5) == 0;
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  if (bVar12) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*puVar1;
  }
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,puVar7);
  *(undefined1 *)(param_1 + 0x2e) = uVar3;
  uVar6 = FUN_144a82cde();
  pwVar10 = L"false";
  if (*(char *)(param_1 + 0x2e) != '\0') {
    pwVar10 = L"true";
  }
  FUN_140047918(uVar6,L"BuildPatchResumeData file found: %s",pwVar10);
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    if (*(int *)(param_1 + 5) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*puVar1;
    }
    puVar1 = param_1 + 6;
    (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,puVar7,local_c8);
    local_e8 = 1;
    FUN_144a38a52(local_c8,&local_d8,&PTR_DAT_14c7585f0,3);
    local_98 = 0;
    local_90 = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],local_c8 + 2,1);
    uVar9 = (uint)uStack_d0;
    if ((uint)(*(int *)(param_1 + 7) - *(int *)((longlong)param_1 + 100)) < (uint)uStack_d0) {
      if ((int)(uint)uStack_d0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)(uint)uStack_d0);
      }
      FUN_140e83416(puVar1,uStack_d0 & 0xffffffff);
      iVar4 = 1;
      if (3 < uVar9) {
        uVar9 = (uVar9 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((*(int *)(param_1 + 0xf) == 0) || (*(int *)(param_1 + 0xf) < iVar4)) {
        *(int *)(param_1 + 0xf) = iVar4;
        FUN_14482b9e8(puVar1);
      }
    }
    if ((uint)uStack_d0 != 0) {
      lVar11 = (longlong)(int)(uint)uStack_d0 << 4;
      puVar8 = local_d8;
      do {
        FUN_14033cb48(puVar8);
        FUN_14482b35e(puVar1,local_dc,puVar8,0);
        puVar7 = &DAT_149dfb77a;
        iVar4 = 0;
        if (*(int *)(puVar8 + 1) != 0) {
          puVar7 = (undefined2 *)*puVar8;
          iVar4 = *(int *)(puVar8 + 1) + -1;
        }
        uVar5 = FUN_144a49b4a(iVar4,puVar7);
        iVar4 = FUN_1456cf568(local_c8 + 2,uVar5,puVar8);
        if (iVar4 != -1) {
          *(undefined1 *)(param_1 + 0x2e) = 1;
          uVar6 = FUN_144a82cde();
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(puVar8 + 1) != 0) {
            puVar7 = (undefined2 *)*puVar8;
          }
          FUN_140047918(uVar6,L"BuildPatchResumeData version matched %s",puVar7);
        }
        puVar8 = puVar8 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(local_c8 + 2);
    FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3010a FUN_146b3010a body=532 status=ok
// SIG undefined FUN_146b3010a(void)

void FUN_146b3010a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  int local_108;
  undefined2 *local_100;
  int local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [8];
  int local_e0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x2e) != '\x01') goto LAB_146b30136;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  local_108 = iVar5 + 1 + (uint)(*(int *)(param_1 + 3) == 0);
  local_100 = (undefined2 *)0x0;
  FUN_14125bce8(&local_100,param_1[2],*(int *)(param_1 + 3),0);
  FUN_1401aebe8(&local_100,*param_2,iVar5);
  puVar4 = local_100;
  if (local_f8 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,puVar4,&local_f0);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],param_2,&local_98,1);
  FUN_146b3de84(param_1 + 6,local_e8,&local_98);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_e8);
  if (local_b4 < local_e0) {
    lVar2 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],param_2);
    if (cVar1 == '\x01' && lVar2 != 0) {
      if ((local_f0 != 0) && (local_f0 <= *(ulonglong *)(lVar2 + 0x58))) {
        FUN_14482b35e(param_1 + 0x10,local_e8,param_2,0);
      }
      uVar3 = *(ulonglong *)(lVar2 + 0x58);
      if (local_f0 == uVar3) {
        FUN_14482b35e(param_1 + 0x1a,local_e8,param_2,0);
        uVar3 = *(ulonglong *)(lVar2 + 0x58);
      }
      if (uVar3 < local_f0) goto LAB_146b302c3;
    }
  }
  else if (cVar1 != '\0') {
LAB_146b302c3:
    FUN_14482b35e(param_1 + 0x24,local_e8,param_2,0);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if (local_100 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_146b30136:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b30320 FUN_146b30320 body=122 status=ok
// SIG undefined FUN_146b30320(void)

void FUN_146b30320(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  FUN_146b47854(local_28,param_2,&DAT_149e01f72);
  if (*(int *)(param_1 + 5) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)param_1[4];
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3039c FUN_146b3039c body=161 status=ok
// SIG undefined FUN_146b3039c(void)

ulonglong FUN_146b3039c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < (longlong)iVar1) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
    lVar6 = (longlong)iVar1 * 0x10;
    lVar5 = *(longlong *)(lVar4 + -0x10 + lVar6);
    *(undefined8 *)(lVar4 + -0x10 + lVar6) = 0;
    uVar2 = *(undefined4 *)(lVar4 + -8 + lVar6);
    uVar3 = *(undefined4 *)(lVar4 + -4 + lVar6);
    *(undefined8 *)(lVar4 + -8 + lVar6) = 0;
    FUN_14101da94(param_1 + 0xa0,*(int *)(param_1 + 0xa8) + -1);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = lVar5;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),0 < iVar1) & 0xffffffff;
}



// FUNCTION 146b3043e FUN_146b3043e body=210 status=ok
// SIG undefined FUN_146b3043e(void)

void FUN_146b3043e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b30510 FUN_146b30510 body=217 status=ok
// SIG undefined FUN_146b30510(void)

longlong FUN_146b30510(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    param_3 = *(longlong *)(param_2 + 0x58) - param_3;
    lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2);
    lVar5 = param_3;
    if (lVar1 != 0) {
      lVar5 = param_3 - *(longlong *)(lVar1 + 0x58);
    }
    lVar1 = (longlong)*(int *)(param_1 + 0xa8);
    if (0 < lVar1) {
      uVar4 = lVar1 + 1;
      lVar1 = lVar1 << 4;
      do {
        lVar1 = lVar1 + -0x10;
        lVar3 = *(longlong *)(param_1 + 0xa0) + lVar1;
        lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                          (*(longlong **)(param_1 + 8),lVar3);
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                          (*(longlong **)(param_1 + 8),lVar3);
        lVar5 = lVar5 + *(longlong *)(lVar2 + 0x58);
        if (param_3 <= lVar5) {
          param_3 = lVar5;
        }
        if (lVar3 != 0) {
          lVar5 = lVar5 - *(longlong *)(lVar3 + 0x58);
        }
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                      (*(longlong **)(param_1 + 8),param_1 + 0xa0);
    param_3 = (lVar5 - param_3) + *(longlong *)(param_2 + 0x58);
  }
  return param_3;
}



// FUNCTION 146b305ea FUN_146b305ea body=162 status=ok
// SIG undefined FUN_146b305ea(void)

longlong FUN_146b305ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x178,local_38);
    local_48 = uVar2;
    uVar3 = FUN_146b3068e(param_1 + 0x40,~*(uint *)(param_2 + 8) + *(int *)(param_1 + 0x48),
                          *(undefined8 *)(param_1 + 8),local_38);
    lVar4 = 0;
    if (uVar2 <= uVar3) {
      lVar4 = uVar3 - uVar2;
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3068e FUN_146b3068e body=230 status=ok
// SIG undefined FUN_146b3068e(void)

ulonglong FUN_146b3068e(longlong *param_1,int param_2,longlong *param_3,longlong *param_4,
                       longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_58;
  
  if (param_2 < (int)param_1[1]) {
    lVar7 = (longlong)param_2;
    lVar4 = lVar7 << 4;
    uVar5 = 0;
    local_58 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_4 + lVar7 * 8);
      lVar2 = (**(code **)(*param_3 + 0x68))(param_3,*param_1 + lVar4);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x58);
      }
      local_58 = local_58 + lVar2;
      uVar6 = (param_5 + local_58) - uVar5;
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
      if ((ulonglong)(param_5 + local_58) <= uVar5) {
        uVar6 = uVar3;
      }
      uVar3 = uVar6;
      lVar2 = (**(code **)(*param_3 + 0x60))(param_3,*param_1 + lVar4);
      if (lVar2 != 0) {
        uVar5 = uVar5 + *(longlong *)(lVar2 + 0x58);
      }
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x10;
      param_5 = lVar1;
    } while (lVar7 < (int)param_1[1]);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 146b30774 FUN_146b30774 body=236 status=ok
// SIG undefined FUN_146b30774(void)

bool FUN_146b30774(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9912d0) {
    FUN_144b3d300(&DAT_14c9912d0);
    if (DAT_14c9912d0 == -1) {
      local_1c = 0x4b;
      local_28 = &DAT_14c872ce8;
      FUN_1414d73b6(DAT_14c872ce0,L"BuildPatchServices",L"MaxScannerBacklog",&local_1c);
      iVar1 = 500;
      if (local_1c < 500) {
        iVar1 = local_1c;
      }
      DAT_14c9912cc = 5;
      if (5 < iVar1) {
        DAT_14c9912cc = iVar1;
      }
      _Init_thread_footer(&DAT_14c9912d0);
    }
  }
  iVar1 = FUN_146b6702e();
  iVar2 = FUN_146b629d2();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14c9912cc <= *(int *)(param_1 + 8) || iVar2 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b30862 FUN_146b30862 body=31 status=ok
// SIG undefined FUN_146b30862(void)

void FUN_146b30862(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x148,0x10);
  FUN_146b45a7a(uVar1);
  return;
}



// FUNCTION 146b30882 FUN_146b30882 body=60 status=ok
// SIG undefined FUN_146b30882(void)

undefined8 * FUN_146b30882(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149f2e800;
  uVar2 = FUN_14054d1d4();
  puVar1[1] = uVar2;
  uVar2 = FUN_140e92164();
  puVar1[2] = uVar2;
  return puVar1;
}



// FUNCTION 146b308be FUN_146b308be body=234 status=ok
// SIG undefined FUN_146b308be(void)

undefined8 * FUN_146b308be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b309a8 FUN_146b309a8 body=312 status=ok
// SIG undefined FUN_146b309a8(void)

longlong * FUN_146b309a8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_14480809c(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447808da(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar2 * 0xc + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b30ae2 FUN_146b30ae2 body=170 status=ok
// SIG undefined FUN_146b30ae2(void)

ulonglong FUN_146b30ae2(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  param_1 = (longlong *)*param_1;
  if (param_3 == 0 || param_1 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    do {
      lVar1 = param_1[1];
      uVar3 = uVar3 + lVar1;
      if (param_2 < uVar3) {
        lVar2 = 0;
        if (uVar4 <= param_2) {
          lVar2 = param_2 - uVar4;
        }
        uVar6 = param_3 - uVar5;
        if ((ulonglong)(lVar1 - lVar2) < param_3 - uVar5) {
          uVar6 = lVar1 - lVar2;
        }
        FUN_146b31154(param_4,lVar2 + *param_1,uVar6,1);
        uVar5 = uVar5 + uVar6;
        lVar1 = param_1[1];
      }
      param_1 = (longlong *)param_1[3];
    } while ((param_1 != (longlong *)0x0) && (uVar4 = uVar4 + lVar1, uVar5 < param_3));
  }
  return uVar5;
}



// FUNCTION 146b30b8c FUN_146b30b8c body=44 status=ok
// SIG undefined FUN_146b30b8c(void)

void FUN_146b30b8c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    param_1[1] = *(longlong *)(lVar1 + 0x18);
    FUN_1400020a8();
    lVar1 = param_1[1];
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 146b30bb8 FUN_146b30bb8 body=169 status=ok
// SIG undefined FUN_146b30bb8(void)

undefined8 * FUN_146b30bb8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 != (undefined8 *)0x0 && *param_1 != 0) {
    do {
      FUN_146b31154(param_2,*puVar3,puVar3[1],0);
      puVar3 = (undefined8 *)puVar3[3];
    } while (puVar3 != (undefined8 *)0x0);
    for (plVar4 = (longlong *)*param_1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[3]) {
      plVar1 = (longlong *)plVar4[2];
      if (plVar1 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = plVar1[1] + *plVar1;
      }
      FUN_146b46d18(param_2,lVar2,*plVar4 - lVar2);
    }
    if ((ulonglong)(((longlong *)param_1[1])[1] + *(longlong *)param_1[1]) <
        (ulonglong)(((longlong *)param_3[1])[1] + *(longlong *)param_3[1])) {
      FUN_146b46d18(param_2);
    }
  }
  return param_2;
}



// FUNCTION 146b30c62 FUN_146b30c62 body=56 status=ok
// SIG undefined FUN_146b30c62(void)

void FUN_146b30c62(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
      param_2 = (undefined8 *)param_2[3]) {
    FUN_146b31154(param_1,*param_2,param_2[1],param_3);
  }
  return;
}



// FUNCTION 146b30c9a FUN_146b30c9a body=710 status=ok
// SIG undefined FUN_146b30c9a(void)

void FUN_146b30c9a(longlong *param_1,longlong *param_2,void *param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((ulonglong *)param_1[1] == (ulonglong *)0x0) ||
     (*(ulonglong *)param_1[1] <= *(ulonglong *)*param_2)) {
    iVar12 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar12 + param_4;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar12) < param_4) {
      FUN_1447403be(param_1 + 2,iVar12);
    }
    else if (param_4 == 0) goto LAB_146b30d14;
    memcpy((void *)((longlong)iVar12 + param_1[2]),param_3,(longlong)(int)param_4);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    iVar12 = param_4 + (int)param_1[3];
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    local_78 = param_2;
    if (iVar12 != 0) {
      FUN_144893a1c(&local_58,iVar12);
    }
    plVar1 = param_1 + 2;
    local_68 = 0;
    uStack_60 = 0;
    puVar10 = (undefined8 *)*param_1;
    local_70 = param_1;
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = 0;
      do {
        uVar6 = uStack_60;
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        lVar11 = *plVar1;
        lVar8 = (longlong)(int)uStack_60;
        uVar7 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
        if (uStack_60._4_4_ < uVar7) {
          FUN_146b4f56e(&local_68,uVar6 & 0xffffffff);
        }
        lVar8 = lVar8 * 0x20;
        *(undefined8 *)(local_68 + lVar8) = uVar4;
        *(longlong *)(local_68 + 8 + lVar8) = lVar9;
        *(undefined8 *)(local_68 + 0x10 + lVar8) = uVar5;
        *(longlong *)(local_68 + 0x18 + lVar8) = lVar11;
        lVar9 = lVar9 + puVar10[1];
        puVar10 = (undefined8 *)puVar10[3];
      } while (puVar10 != (undefined8 *)0x0);
    }
    puVar10 = (undefined8 *)*local_78;
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = 0;
      do {
        uVar6 = uStack_60;
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        lVar11 = (longlong)(int)uStack_60;
        uVar7 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
        if (uStack_60._4_4_ < uVar7) {
          FUN_146b4f56e(&local_68,uVar6 & 0xffffffff);
        }
        lVar11 = lVar11 * 0x20;
        *(undefined8 *)(local_68 + lVar11) = uVar4;
        *(longlong *)(local_68 + 8 + lVar11) = lVar9;
        *(undefined8 *)(local_68 + 0x10 + lVar11) = uVar5;
        *(void **)(local_68 + 0x18 + lVar11) = param_3;
        lVar9 = lVar9 + puVar10[1];
        puVar10 = (undefined8 *)puVar10[3];
      } while (puVar10 != (undefined8 *)0x0);
    }
    FUN_146b4f5f3(local_68,uStack_60 & 0xffffffff);
    lVar9 = local_68;
    param_1 = local_70;
    lVar11 = (longlong)(int)uStack_60;
    if (lVar11 != 0) {
      lVar8 = 0;
      do {
        uVar6 = uStack_50;
        lVar2 = *(longlong *)(lVar9 + 0x18 + lVar8);
        lVar3 = *(longlong *)(lVar9 + 8 + lVar8);
        iVar12 = (int)uStack_50;
        lVar13 = (longlong)(int)uStack_50;
        uVar7 = (uint)*(undefined8 *)(lVar9 + 0x10 + lVar8);
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + uVar7);
        if ((uint)(uStack_50._4_4_ - iVar12) < uVar7) {
          FUN_1447403be(&local_58,uVar6 & 0xffffffff);
LAB_146b30e13:
          memcpy((void *)(lVar13 + local_58),(void *)(lVar2 + lVar3),(longlong)(int)uVar7);
        }
        else if (uVar7 != 0) goto LAB_146b30e13;
        lVar8 = lVar8 + 0x20;
      } while (lVar11 * 0x20 != lVar8);
    }
    if (plVar1 != &local_58) {
      if (param_1[2] != 0) {
        FUN_1400020a8();
      }
      param_1[2] = local_58;
      local_58 = 0;
      *(int *)(param_1 + 3) = (int)uStack_50;
      *(int *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
      uStack_50 = 0;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    param_2 = local_78;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_146b30d14:
  for (puVar10 = (undefined8 *)*param_2; puVar10 != (undefined8 *)0x0;
      puVar10 = (undefined8 *)puVar10[3]) {
    FUN_146b31154(param_1,*puVar10,puVar10[1],0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b30f62 FUN_146b30f62 body=31 status=ok
// SIG undefined FUN_146b30f62(void)

undefined8 * FUN_146b30f62(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146b31154();
  return param_1;
}



// FUNCTION 146b30f82 FUN_146b30f82 body=203 status=ok
// SIG undefined FUN_146b30f82(void)

void FUN_146b30f82(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b46d99(local_50,param_1);
  plVar6 = local_50[0];
  if (local_50[0] != (longlong *)0x0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar4 = *plVar6;
      iVar2 = (int)param_2[1];
      uVar5 = (uint)plVar6[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar5;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar5) {
        FUN_1447403be(param_2,iVar2);
LAB_146b30fef:
        memcpy((void *)((longlong)iVar2 + *param_2),(void *)(lVar3 + lVar4),(longlong)(int)uVar5);
      }
      else if (uVar5 != 0) goto LAB_146b30fef;
      plVar1 = plVar6 + 3;
      plVar6 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    do {
      plVar6 = (longlong *)local_50[0][3];
      FUN_1400020a8(local_50[0]);
      local_50[0] = plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b3104e FUN_146b3104e body=251 status=ok
// SIG undefined FUN_146b3104e(void)

void FUN_146b3104e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b46d99(&local_38,param_1,param_2);
  FUN_146b30bb8(param_1,local_48,param_2);
  while (local_48[0] != 0) {
    local_48[0] = *(longlong *)(local_48[0] + 0x18);
    FUN_1400020a8();
  }
  for (; local_30 != (undefined8 *)0x0; local_30 = (undefined8 *)local_30[2]) {
    if (local_30[1] != 0) {
      iVar3 = *(int *)(param_1 + 0x18);
      iVar2 = (int)local_30[1];
      iVar4 = iVar3 - ((int)*local_30 + iVar2);
      if (iVar4 != 0) {
        _Dst = (void *)((longlong)(int)*local_30 + *(longlong *)(param_1 + 0x10));
        memmove(_Dst,(void *)((longlong)iVar2 + (longlong)_Dst),(longlong)iVar4);
        iVar3 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar3 - iVar2;
    }
  }
  for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
      param_2 = (undefined8 *)param_2[3]) {
    FUN_146b46d18(param_1,*param_2,param_2[1]);
  }
  while (local_38 != 0) {
    lVar1 = *(longlong *)(local_38 + 0x18);
    FUN_1400020a8();
    local_38 = lVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3114a FUN_146b3114a body=5 status=ok
// SIG undefined FUN_146b3114a(void)

undefined8 FUN_146b3114a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 146b31150 FUN_146b31150 body=4 status=ok
// SIG undefined FUN_146b31150(void)

undefined8 FUN_146b31150(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 146b31154 FUN_146b31154 body=451 status=ok
// SIG undefined FUN_146b31154(void)

void FUN_146b31154(ulonglong *param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    puVar4 = (ulonglong *)*param_1;
    if (puVar4 == (ulonglong *)0x0) {
      puVar4 = (ulonglong *)FUN_14001cc68(0x20,0x10);
      *puVar4 = param_2;
      puVar4[1] = param_3;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *param_1 = (ulonglong)puVar4;
      param_1[1] = (ulonglong)puVar4;
    }
    else if (param_4 == 0) {
      uVar6 = param_3 + param_2;
      puVar5 = puVar4;
      do {
        uVar2 = *puVar5;
        if (uVar6 < uVar2) goto LAB_146b311be;
        uVar7 = puVar5[1] + uVar2;
        if (param_2 <= uVar7) {
          if (uVar2 < param_2) {
            param_2 = uVar2;
          }
          if (uVar6 < uVar7) {
            uVar6 = uVar7;
          }
          *puVar5 = param_2;
          puVar5[1] = uVar6 - param_2;
          param_4 = 0;
          goto LAB_146b312e2;
        }
        puVar5 = (ulonglong *)puVar5[3];
      } while (puVar5 != (ulonglong *)0x0);
      uVar6 = param_1[1];
      puVar5 = (ulonglong *)FUN_14001cc68(0x20,0x10);
      *puVar5 = param_2;
      puVar5[1] = param_3;
      puVar5[2] = uVar6;
      uVar2 = *(ulonglong *)(uVar6 + 0x18);
      puVar5[3] = uVar2;
      puVar4 = (ulonglong *)(uVar2 + 0x10);
      if (uVar2 == 0) {
        puVar4 = param_1 + 1;
      }
      *puVar4 = (ulonglong)puVar5;
      *(ulonglong **)(uVar6 + 0x18) = puVar5;
    }
    else if ((ulonglong *)param_1[1] != (ulonglong *)0x0) {
      uVar6 = param_3 + param_2;
      puVar3 = (ulonglong *)param_1[1];
      do {
        puVar5 = puVar3;
        uVar2 = *puVar5;
        uVar7 = puVar5[1] + uVar2;
        if (uVar7 < param_2) {
          puVar3 = (ulonglong *)FUN_14001cc68(0x20,0x10);
          *puVar3 = param_2;
          puVar3[1] = param_3;
          puVar3[2] = (ulonglong)puVar5;
          uVar6 = puVar5[3];
          puVar3[3] = uVar6;
          puVar4 = (ulonglong *)(uVar6 + 0x10);
          if (uVar6 == 0) {
            puVar4 = param_1 + 1;
          }
          *puVar4 = (ulonglong)puVar3;
          puVar5[3] = (ulonglong)puVar3;
          return;
        }
        if (uVar2 <= uVar6) {
          if (uVar2 < param_2) {
            param_2 = uVar2;
          }
          if (uVar6 < uVar7) {
            uVar6 = uVar7;
          }
          *puVar5 = param_2;
          puVar5[1] = uVar6 - param_2;
LAB_146b312e2:
          FUN_146b46c12(param_1,puVar5,param_4);
          return;
        }
        puVar1 = puVar5 + 2;
        puVar5 = puVar4;
        puVar3 = (ulonglong *)*puVar1;
      } while ((ulonglong *)*puVar1 != (ulonglong *)0x0);
LAB_146b311be:
      puVar3 = (ulonglong *)FUN_14001cc68(0x20,0x10);
      *puVar3 = param_2;
      puVar3[1] = param_3;
      uVar6 = puVar5[2];
      puVar3[2] = uVar6;
      puVar3[3] = (ulonglong)puVar5;
      puVar4 = (ulonglong *)(uVar6 + 0x18);
      if (uVar6 == 0) {
        puVar4 = param_1;
      }
      *puVar4 = (ulonglong)puVar3;
      puVar5[2] = (ulonglong)puVar3;
    }
  }
  return;
}



// FUNCTION 146b31318 FUN_146b31318 body=60 status=ok
// SIG undefined FUN_146b31318(void)

undefined8 * FUN_146b31318(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  for (param_2 = (undefined8 *)*param_2; param_2 != (undefined8 *)0x0;
      param_2 = (undefined8 *)param_2[3]) {
    FUN_146b31154(param_1,*param_2,param_2[1],1);
  }
  return param_1;
}



// FUNCTION 146b31354 FUN_146b31354 body=191 status=ok
// SIG undefined FUN_146b31354(void)

undefined4 *
FUN_146b31354(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined8 *)(param_1 + 6) = param_5;
  *(undefined8 *)(param_1 + 8) = 0;
  *(longlong *)(param_1 + 8) = *param_6;
  *param_6 = 0;
  param_1[10] = (int)param_6[1];
  param_1[0xb] = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  *(longlong *)(param_1 + 0xc) = *param_7;
  *(longlong *)(param_1 + 0xe) = param_7[1];
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = FUN_146b67036(param_8,param_1 + 8,param_9,param_10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_7;
  while (lVar2 != 0) {
    param_7[1] = *(longlong *)(lVar2 + 0x18);
    FUN_1400020a8();
    lVar2 = param_7[1];
    *param_7 = lVar2;
  }
  return param_1;
}



// FUNCTION 146b31414 FUN_146b31414 body=384 status=ok
// SIG undefined FUN_146b31414(void)

void FUN_146b31414(longlong param_1,longlong *param_2)

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
    FUN_146b51732(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
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
      FUN_146b518d0(param_1);
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
      local_58 = *local_80 + (longlong)iStack_64 * 0x20;
      uStack_50 = (longlong *)((longlong)iStack_64 * 0x20 + *local_80 + 0x10);
      FUN_146b51a92(param_1,local_34,&local_58,0);
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



// FUNCTION 146b31596 FUN_146b31596 body=591 status=ok
// SIG undefined FUN_146b31596(void)

undefined8 * FUN_146b31596(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
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
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar2 = ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34)) +
          ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_1462841aa(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_1457adf2c(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_1457adc9c(param_2,&local_58,(longlong)iStack_64 * 0x18 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  local_50 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_3;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_1457adc9c(param_2,&local_58,(longlong)iStack_64 * 0x18 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b317e8 FUN_146b317e8 body=384 status=ok
// SIG undefined FUN_146b317e8(void)

void FUN_146b317e8(longlong param_1,longlong *param_2)

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
    FUN_146b51e34(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
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
      FUN_146b506d0(param_1);
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
      local_58 = *local_80 + (longlong)iStack_64 * 0x2c;
      uStack_50 = (longlong *)((longlong)iStack_64 * 0x2c + *local_80 + 0x10);
      FUN_146b50322(param_1,local_34,&local_58,0);
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



// FUNCTION 146b3196a FUN_146b3196a body=368 status=ok
// SIG undefined FUN_146b3196a(void)

void FUN_146b3196a(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar20);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar20) {
    FUN_146b52578(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar18 = iStack_5c;
      lVar19 = *local_78;
      iVar20 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar20 + 1U) {
        FUN_146b55398(param_2,iVar20);
      }
      lVar19 = (longlong)iVar18 * 0x58 + lVar19;
      lVar2 = *param_2;
      lVar21 = (longlong)iVar20 * 0x40;
      uVar3 = *(undefined4 *)(lVar19 + 0x10);
      uVar4 = *(undefined4 *)(lVar19 + 0x14);
      uVar5 = *(undefined4 *)(lVar19 + 0x18);
      uVar6 = *(undefined4 *)(lVar19 + 0x1c);
      uVar7 = *(undefined4 *)(lVar19 + 0x20);
      uVar8 = *(undefined4 *)(lVar19 + 0x24);
      uVar9 = *(undefined4 *)(lVar19 + 0x28);
      uVar10 = *(undefined4 *)(lVar19 + 0x2c);
      uVar11 = *(undefined4 *)(lVar19 + 0x30);
      uVar12 = *(undefined4 *)(lVar19 + 0x34);
      uVar13 = *(undefined4 *)(lVar19 + 0x38);
      uVar14 = *(undefined4 *)(lVar19 + 0x3c);
      uVar15 = *(undefined4 *)(lVar19 + 0x44);
      uVar16 = *(undefined4 *)(lVar19 + 0x48);
      uVar17 = *(undefined4 *)(lVar19 + 0x4c);
      puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar21);
      *puVar1 = *(undefined4 *)(lVar19 + 0x40);
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar21);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar21);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar2 + lVar21);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b31adc FUN_146b31adc body=129 status=ok
// SIG undefined FUN_146b31adc(void)

void FUN_146b31adc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_146b485a4(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146b48100(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146b4803c(param_1 + 8);
  return;
}



// FUNCTION 146b31b5e FUN_146b31b5e body=61 status=ok
// SIG undefined FUN_146b31b5e(void)

void FUN_146b31b5e(longlong *param_1)

{
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



// FUNCTION 146b31b9c FUN_146b31b9c body=253 status=ok
// SIG undefined FUN_146b31b9c(void)

void FUN_146b31b9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  FUN_146b48822(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_146b489f4(param_1 + 200);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b31c9a FUN_146b31c9a body=51 status=ok
// SIG undefined FUN_146b31c9a(void)

void FUN_146b31c9a(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  memset(*(void **)(param_1 + 0x20),0,(ulonglong)*(uint *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 146b31cce FUN_146b31cce body=5 status=ok
// SIG undefined FUN_146b31cce(void)

undefined8 FUN_146b31cce(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 146b31cd4 FUN_146b31cd4 body=5 status=ok
// SIG undefined FUN_146b31cd4(void)

longlong FUN_146b31cd4(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 146b31cda FUN_146b31cda body=3 status=ok
// SIG undefined FUN_146b31cda(void)

undefined4 FUN_146b31cda(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 146b31cde FUN_146b31cde body=6 status=ok
// SIG undefined FUN_146b31cde(void)

int FUN_146b31cde(int *param_1)

{
  return *param_1 - param_1[4];
}



// FUNCTION 146b31ce4 FUN_146b31ce4 body=114 status=ok
// SIG undefined FUN_146b31ce4(void)

void FUN_146b31ce4(longlong param_1,longlong param_2,uint *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*param_3 != 0) {
    uVar5 = *(uint *)(param_1 + 0x2c);
    uVar6 = 0;
    do {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      uVar1 = *(undefined1 *)(param_2 + uVar6);
      *(uint *)(param_1 + 0x2c) = uVar5 + 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar5) = uVar1;
      uVar2 = *(uint *)(param_1 + 0x18);
      uVar5 = *(uint *)(param_1 + 0x2c) % uVar2;
      *(uint *)(param_1 + 0x2c) = uVar5;
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
      uVar3 = *(int *)(param_1 + 0x28) + 1;
      if (uVar2 <= uVar3) {
        uVar3 = uVar2;
      }
      *(uint *)(param_1 + 0x28) = uVar3;
      uVar4 = *(longlong *)(param_1 + 8) << 1 | (ulonglong)(*(longlong *)(param_1 + 8) < 0);
      *(ulonglong *)(param_1 + 8) = uVar4;
      *(ulonglong *)(param_1 + 8) = uVar4 ^ (&DAT_14c9912e0)[*(byte *)(param_2 + uVar6)];
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_3);
  }
  return;
}



// FUNCTION 146b31d56 FUN_146b31d56 body=155 status=ok
// SIG undefined FUN_146b31d56(void)

void FUN_146b31d56(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar5 = (ulonglong)
            *(byte *)(*(longlong *)(param_1 + 0x20) +
                     (ulonglong)((uVar3 - iVar2) + uVar4) % (ulonglong)uVar4);
    uVar6 = iVar2 - 1U;
    if (uVar4 <= iVar2 - 1U) {
      uVar6 = uVar4;
    }
    *(uint *)(param_1 + 0x28) = uVar6;
  }
  bVar1 = *param_2;
  *(uint *)(param_1 + 0x2c) = uVar3 + 1;
  *(byte *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3) = bVar1;
  uVar3 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) % uVar3;
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
  uVar4 = *(int *)(param_1 + 0x28) + 1U;
  if (uVar3 <= *(int *)(param_1 + 0x28) + 1U) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 0x28) = uVar4;
  uVar5 = (*(longlong *)(param_1 + 8) << 1 | (ulonglong)(*(longlong *)(param_1 + 8) < 0)) ^
          ((&DAT_14c9912e0)[uVar5] << (*param_1 & 0x3f) |
          (ulonglong)(&DAT_14c9912e0)[uVar5] >> 0x40 - (*param_1 & 0x3f));
  *(ulonglong *)(param_1 + 8) = uVar5;
  *(ulonglong *)(param_1 + 8) = uVar5 ^ (&DAT_14c9912e0)[*param_2];
  return;
}



// FUNCTION 146b31df2 FUN_146b31df2 body=73 status=ok
// SIG undefined FUN_146b31df2(void)

uint * FUN_146b31df2(uint *param_1,uint param_2)

{
  void *_Dst;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_2;
  _Dst = (void *)FUN_144a7d36f((ulonglong)param_2);
  *(void **)(param_1 + 8) = _Dst;
  memset(_Dst,0,(ulonglong)param_2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 146b31e3b FUN_146b31e3b body=207 status=ok
// SIG undefined FUN_146b31e3b(void)

void FUN_146b31e3b(void)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991ae4) {
    FUN_144b3d300(&DAT_14c991ae4);
    if (DAT_14c991ae4 == -1) {
      local_14 = 10.0;
      local_28 = &DAT_14c872ce8;
      FUN_14153841e(DAT_14c872ce0,L"Portal.BuildPatch",L"DownloadSpeedAverageTime",&local_14);
      DAT_14c991ae0 = local_14;
      if (30.0 <= local_14) {
        DAT_14c991ae0 = 30.0;
      }
      if (DAT_14c991ae0 <= 1.0) {
        DAT_14c991ae0 = 1.0;
      }
      _Init_thread_footer(&DAT_14c991ae4);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(DAT_14c991ae0);
}



// FUNCTION 146b31f0b FUN_146b31f0b body=207 status=ok
// SIG undefined FUN_146b31f0b(void)

int FUN_146b31f0b(void)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991aec) {
    FUN_144b3d300(&DAT_14c991aec);
    if (DAT_14c991aec == -1) {
      local_14 = 5;
      local_28 = &DAT_14c872ce8;
      FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"NumFileMoveRetries",&local_14);
      iVar1 = 0x32;
      if (local_14 < 0x32) {
        iVar1 = local_14;
      }
      DAT_14c991ae8 = 1;
      if (1 < iVar1) {
        DAT_14c991ae8 = iVar1;
      }
      _Init_thread_footer(&DAT_14c991aec);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14c991ae8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b31fdb FUN_146b31fdb body=207 status=ok
// SIG undefined FUN_146b31fdb(void)

int FUN_146b31fdb(void)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991af4) {
    FUN_144b3d300(&DAT_14c991af4);
    if (DAT_14c991af4 == -1) {
      local_14 = 5;
      local_28 = &DAT_14c872ce8;
      FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"NumInstallerRetries",&local_14);
      iVar1 = 0x32;
      if (local_14 < 0x32) {
        iVar1 = local_14;
      }
      DAT_14c991af0 = 1;
      if (1 < iVar1) {
        DAT_14c991af0 = iVar1;
      }
      _Init_thread_footer(&DAT_14c991af4);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14c991af0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b320ab FUN_146b320ab body=360 status=ok
// SIG undefined FUN_146b320ab(void)

undefined8 * FUN_146b320ab(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar9 = *(longlong *)(param_3 + 0xa8) != 0;
  lVar7 = param_3 + 0xa8;
  if (!bVar9) {
    lVar7 = param_3 + 0x98;
  }
  local_48 = *(undefined8 *)((ulonglong)bVar9 * 0x10 + 0x98 + param_3);
  local_40 = *(longlong *)(lVar7 + 8);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_146b9011e(param_1,&local_48);
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  plVar4 = *(longlong **)(param_3 + 0xa0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = plVar4;
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140bee9ec(param_1 + 4,param_2 + 0x68);
  if ((1 < *(int *)(param_3 + 0x88)) && ((longlong)*(int *)(param_1 + 5) != 0)) {
    lVar7 = param_1[4];
    lVar8 = (longlong)*(int *)(param_1 + 5) << 4;
    do {
      iVar6 = *(int *)(param_3 + 0x88) + -1;
      if (*(int *)(param_3 + 0x88) == 0) {
        iVar6 = 0;
      }
      FUN_1401aebe8(lVar7,*(undefined8 *)(param_3 + 0x80),iVar6);
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x78);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b32214 FUN_146b32214 body=126 status=ok
// SIG undefined FUN_146b32214(void)

void FUN_146b32214(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146b32286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b32292 FUN_146b32292 body=643 status=ok
// SIG undefined FUN_146b32292(void)

undefined8 * FUN_146b32292(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_158 [40];
  longlong *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 *local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  (**(code **)(*param_2 + 0x48))(param_2,local_e8);
  local_100 = local_d8;
  local_108 = 0x100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  local_f0 = 0;
  iVar5 = 0;
  if (local_c0 != 0) {
    FUN_1449c0562(&local_108);
    iVar5 = local_c0;
  }
  local_118 = local_f8;
  iStack_114 = iStack_f4;
  local_110 = local_f0;
  local_10c = local_ec;
  local_128 = local_108;
  local_120 = local_100;
  local_130 = local_e8;
  if ((iStack_f4 != iVar5) || (local_100 != local_d8)) {
    do {
      lVar3 = (**(code **)(*param_2 + 0x68))(param_2,(longlong)iStack_114 * 0x18 + *local_130);
      if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x50) != 0)) {
        lVar6 = *(longlong *)(lVar3 + 0x48);
        lVar3 = (longlong)*(int *)(lVar3 + 0x50) * 0x18;
        do {
          uVar1 = FUN_1447addd0(lVar6,0x10);
          iVar2 = FUN_140f5cb3a(&local_98,uVar1,lVar6);
          puVar4 = param_1;
          if (iVar2 == -1) {
            puVar4 = &local_98;
          }
          FUN_1457adc9c(puVar4,&local_108,lVar6,0);
          lVar6 = lVar6 + 0x18;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
      }
      local_118 = local_118 & ~local_128._4_4_;
      FUN_1449c0562(&local_128);
    } while (local_130 != local_e8 || (local_120 != local_d8 || iStack_114 != iVar5));
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_98);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b32516 FUN_146b32516 body=3467 status=ok
// SIG undefined FUN_146b32516(void)

undefined8 *
FUN_146b32516(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_158 [32];
  int local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108 [2];
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  undefined1 local_ac [4];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  undefined8 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_149f2cf90;
  param_1[1] = &PTR_FUN_149f2d070;
  param_1[4] = 0;
  param_1[5] = 0;
  CoCreateGuid((GUID *)(param_1 + 4));
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_146b4e00c(param_1 + 7,param_6);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_146b4e00c(param_1 + 9,param_7);
  local_130 = param_2;
  FUN_146b332a4(param_1 + 0xb,param_2);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_138 = (*(int *)(param_1 + 0x12) == 0) + 10;
  param_1[0x1e] = 0;
  FUN_14125bce8(param_1 + 0x1e,param_1[0x11],*(int *)(param_1 + 0x12),0);
  FUN_1401aebe8(param_1 + 0x1e,L"PatchData",9);
  local_138 = (*(int *)(param_1 + 0x12) == 0) + 8;
  param_1[0x20] = 0;
  FUN_14125bce8(param_1 + 0x20,param_1[0x11],*(int *)(param_1 + 0x12),0);
  FUN_1401aebe8(param_1 + 0x20,L"Install",7);
  local_138 = (*(int *)(param_1 + 0x12) == 0) + 5;
  param_1[0x22] = 0;
  FUN_14125bce8(param_1 + 0x22,param_1[0x11],*(int *)(param_1 + 0x12),0);
  FUN_1401aebe8(param_1 + 0x22,L"Meta",4);
  local_138 = (*(int *)(param_1 + 0x10) == 0) + 0xd;
  param_1[0x24] = 0;
  FUN_14125bce8(param_1 + 0x24,param_1[0xf],*(int *)(param_1 + 0x10),0);
  FUN_1401aebe8(param_1 + 0x24,L"$movedMarker",0xc);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x26),4000);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 1;
  param_1[0x2d] = 0;
  FUN_146b333b0(param_1 + 0x2e);
  puVar1 = param_1 + 0x5c;
  FUN_146b3347c(puVar1);
  *(undefined2 *)(param_1 + 0x71) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  local_120 = param_1 + 0x9c;
  local_128 = param_3;
  FUN_146b48a2a(local_120,param_3);
  param_1[0xa6] = 0;
  iVar4 = *(int *)(param_4 + 1);
  pvVar5 = (void *)*param_4;
  *(int *)(param_1 + 0xa7) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xa6,iVar4,0);
    memcpy((void *)param_1[0xa6],pvVar5,(longlong)iVar4 * 2);
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar10 = &PTR_FUN_149f2e8a8;
  uVar11 = FUN_141054386();
  puVar10[1] = uVar11;
  param_1[0xa8] = puVar10;
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar10 = &PTR_FUN_149f2e800;
  uVar11 = FUN_14054d1d4();
  puVar10[1] = uVar11;
  uVar11 = FUN_140e92164();
  puVar10[2] = uVar11;
  param_1[0xa9] = puVar10;
  puVar10 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar10 = &PTR_FUN_149f2f710;
  param_1[0xaa] = puVar10;
  uVar11 = FUN_146b8d88c();
  param_1[0xab] = uVar11;
  param_1[0xac] = *param_5;
  param_1[0xad] = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  uVar11 = FUN_146b8bea8(param_1[0xac]);
  param_1[0xae] = uVar11;
  if (*(char *)((longlong)param_1 + 0xde) == '\x01') {
    uVar11 = FUN_1401cb356();
    uVar11 = FUN_146b92f36(uVar11);
  }
  else {
    uVar11 = FUN_146b92f5e();
  }
  param_1[0xaf] = uVar11;
  uVar11 = FUN_146b93500(uVar11);
  param_1[0xb0] = uVar11;
  uVar11 = FUN_146b9091e(param_1[0xae],param_1[0xaf]);
  param_1[0xb1] = uVar11;
  uVar11 = FUN_14001cc68(0x90,0x10);
  FUN_146b4533a(uVar11);
  param_1[0xb2] = uVar11;
  uVar11 = FUN_14001cc68(0x90,0x10);
  FUN_146b4533a(uVar11);
  param_1[0xb3] = uVar11;
  uVar11 = FUN_14001cc68(0x90,0x10);
  FUN_146b4533a(uVar11);
  param_1[0xb4] = uVar11;
  uVar11 = FUN_14001cc68(0x90,0x10);
  FUN_146b4533a(uVar11);
  param_1[0xb5] = uVar11;
  puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  *puVar10 = &PTR_FUN_149f2ece0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar10 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar10 + 3),4000);
  param_1[0xb6] = puVar10;
  uVar11 = FUN_146b91144(param_1[0xb2],puVar10,param_1[0xae]);
  param_1[0xb7] = uVar11;
  uVar11 = FUN_146b9025c(param_1[0xb5],param_1[0xaf]);
  param_1[0xb8] = uVar11;
  uVar11 = FUN_146b931a2(param_1[0xb3],param_1[0xae],param_1[0xaf]);
  param_1[0xb9] = uVar11;
  uVar11 = FUN_146b906de(param_1[0xae],puVar1,param_1[0xaf]);
  param_1[0xba] = uVar11;
  uVar11 = FUN_146b91960(param_1[0xb3],param_1[0xb4],puVar1,param_1[0xaf]);
  param_1[0xbb] = uVar11;
  uVar11 = FUN_146b93ada(param_1[0xb3],puVar1,param_1[0xaf]);
  param_1[0xbc] = uVar11;
  uVar11 = FUN_146b89276(param_1[0xa8],param_1[0xa9],param_1[0xb7],param_1[0xae]);
  param_1[0xbd] = uVar11;
  uVar11 = FUN_146b8fc9c();
  param_1[0xbe] = uVar11;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc3),4000);
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xcb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xcb),4000);
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd3),4000);
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined2 *)(param_1 + 0xda) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xdb),4000);
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined2 *)(param_1 + 0xe2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe3),4000);
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined2 *)(param_1 + 0xea) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xeb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xeb),4000);
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined2 *)(param_1 + 0xf2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf3),4000);
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined2 *)(param_1 + 0xfa) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xfb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xfb),4000);
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *(undefined2 *)(param_1 + 0x102) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x103));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x103),4000);
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined2 *)(param_1 + 0x10a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10b),4000);
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined2 *)(param_1 + 0x112) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0;
  param_1[0x11b] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_149f2ee00;
  local_a8 = &LAB_142938fbc;
  local_80 = param_1;
  (**(code **)(*(longlong *)param_1[0xab] + 0x40))();
  iVar4 = *(int *)(param_1 + 0xc2);
  *(uint *)(param_1 + 0xc2) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x614) < iVar4 + 1U) {
    FUN_146b48fbe(param_1 + 0xc1,iVar4);
  }
  *(undefined8 **)(param_1[0xc1] + (longlong)iVar4 * 8) = puVar1;
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_1 + 0x10);
  lVar12 = (longlong)local_c8;
  pvVar5 = (void *)param_1[0xf];
  if (lVar12 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,pvVar5,lVar12 * 2);
  }
  FUN_140e4328c(&local_d0);
  FUN_1448b5552(&local_d0);
  local_e8 = 0;
  uStack_e0 = 0;
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4 * 2);
  }
  if (iVar4 != 0) {
    FUN_146b52740(&local_e8);
    if ((longlong)*(int *)(param_1 + 0xc) != 0) {
      lVar12 = param_1[0xb];
      lVar14 = (longlong)*(int *)(param_1 + 0xc) * 0x98;
      do {
        iVar4 = *(int *)(param_1 + 0x1d);
        *(uint *)(param_1 + 0x1d) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xec) < iVar4 + 1U) {
          FUN_146b52992(param_1 + 0x1c,iVar4);
        }
        lVar6 = param_1[0x1c];
        lVar16 = lVar6 + (longlong)iVar4 * 0x158;
        FUN_146b527a0(lVar16,lVar12);
        lVar6 = *(longlong *)(lVar6 + 0x98 + (longlong)iVar4 * 0x158);
        if (lVar6 == 0) {
          plVar13 = *(longlong **)(lVar16 + 0xa0);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
LAB_146b32eae:
            LOCK();
            plVar2 = plVar13 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        else {
          local_f0 = *(longlong **)(lVar16 + 0xa0);
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
            UNLOCK();
          }
          iVar4 = *(int *)(lVar16 + 0x78) + -1;
          if (*(int *)(lVar16 + 0x78) == 0) {
            iVar4 = 0;
          }
          local_138 = iVar4 + 1 + (uint)(local_c8 == 0);
          local_108[0] = 0;
          local_f8 = lVar6;
          FUN_14125bce8(local_108,local_d0,local_c8,0);
          FUN_1401aebe8(local_108,*(undefined8 *)(lVar16 + 0x70),iVar4);
          local_b8 = &local_f8;
          local_c0 = local_108;
          FUN_146b52afe(local_120,local_ac,&local_c0);
          if (local_108[0] != 0) {
            FUN_1400020a8();
          }
          plVar13 = local_f0;
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_f0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          uVar7 = uStack_e0;
          lVar6 = *(longlong *)(lVar16 + 0x98);
          plVar13 = *(longlong **)(lVar16 + 0xa0);
          if (plVar13 == (longlong *)0x0) {
            if (lVar6 == 0) goto LAB_146b33015;
          }
          else {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            if (lVar6 == 0) goto LAB_146b32eae;
          }
          lVar15 = (longlong)(int)uStack_e0;
          uVar8 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
          if (uStack_e0._4_4_ < uVar8) {
            FUN_146b52f04(&local_e8,uVar7 & 0xffffffff);
          }
          *(longlong *)(local_e8 + lVar15 * 0x10) = lVar6;
          *(longlong **)(local_e8 + 8 + lVar15 * 0x10) = plVar13;
        }
LAB_146b33015:
        uVar7 = uStack_e0;
        lVar6 = *(longlong *)(lVar16 + 0xa8);
        plVar13 = *(longlong **)(lVar16 + 0xb0);
        if (plVar13 == (longlong *)0x0) {
          if (lVar6 != 0) {
LAB_146b33057:
            lVar16 = (longlong)(int)uStack_e0;
            uVar8 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
            if (uStack_e0._4_4_ < uVar8) {
              FUN_146b52f04(&local_e8,uVar7 & 0xffffffff);
            }
            *(longlong *)(local_e8 + lVar16 * 0x10) = lVar6;
            *(longlong **)(local_e8 + 8 + lVar16 * 0x10) = plVar13;
          }
        }
        else {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          if (lVar6 != 0) goto LAB_146b33057;
          LOCK();
          plVar2 = plVar13 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar3 = (int *)((longlong)plVar13 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        lVar12 = lVar12 + 0x98;
        lVar14 = lVar14 + -0x98;
      } while (lVar14 != 0);
    }
  }
  local_118 = local_e8;
  local_110 = (int)uStack_e0;
  (**(code **)(*(longlong *)param_1[0xb6] + 0x18))();
  if (param_1[0xd] != 0) goto LAB_146b33154;
  FUN_146b8de1e(&local_c0,L"BuildPatchInstaller");
  plVar2 = local_b8;
  plVar13 = local_c0;
  if (local_b8 == (longlong *)0x0) {
    param_1[0xd] = local_c0;
    plVar13 = (longlong *)param_1[0xe];
    if (plVar13 != (longlong *)0x0) {
      param_1[0xe] = 0;
LAB_146b33262:
      LOCK();
      plVar2 = plVar13 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000146b33252:
        if (iVar4 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
    param_1[0xd] = plVar13;
    plVar13 = (longlong *)param_1[0xe];
    if (plVar2 == plVar13) {
      LOCK();
      plVar13 = plVar2 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar13 = plVar2;
        goto joined_r0x000146b33252;
      }
    }
    else {
      param_1[0xe] = plVar2;
      if (plVar13 != (longlong *)0x0) goto LAB_146b33262;
    }
  }
  plVar13 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  uVar9 = (**(code **)(*(longlong *)param_1[0xd] + 0x20))
                    ((longlong *)param_1[0xd],*(int *)(param_1 + 0x16) != 0);
  (**(code **)(*(longlong *)param_1[0xd] + 0x18))((longlong *)param_1[0xd],uVar9);
LAB_146b33154:
  FUN_146b526f7(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  lVar12 = local_128;
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b335de(local_130);
  *(undefined4 *)(lVar12 + 0x48) = 0;
  if (*(longlong *)(lVar12 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146173b74(lVar12);
  plVar13 = (longlong *)param_5[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_1449db362(param_6);
  FUN_1449db362(param_7);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b332a4 FUN_146b332a4 body=267 status=ok
// SIG undefined FUN_146b332a4(void)

void FUN_146b332a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  uVar1 = param_2[0xf];
  *(undefined8 *)((longlong)param_1 + 0x7f) = *(undefined8 *)((longlong)param_2 + 0x7f);
  param_1[0xf] = uVar1;
  return;
}



// FUNCTION 146b333b0 FUN_146b333b0 body=204 status=ok
// SIG undefined FUN_146b333b0(void)

undefined8 * FUN_146b333b0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 9;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_144a5dc74(param_1 + 0x24);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



// FUNCTION 146b3347c FUN_146b3347c body=180 status=ok
// SIG undefined FUN_146b3347c(void)

undefined8 * FUN_146b3347c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  
  *param_1 = &PTR_FUN_149f2f730;
  *(undefined4 *)(param_1 + 0xf) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0xf) = 0;
  UNLOCK();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = 0xe;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 * 4);
    *puVar1 = &DAT_3f8000003f800000;
    puVar1[1] = &DAT_3f8000003f800000;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x1a);
  *(undefined4 *)(param_1 + 0xd) = 0;
  fVar3 = 0.0;
  lVar2 = 0;
  do {
    if ((&DAT_149f2dff4)[lVar2] == '\x01') {
      fVar3 = fVar3 + *(float *)((longlong)param_1 + lVar2 * 4 + 0x38);
      *(float *)(param_1 + 0xd) = fVar3;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xc);
  FUN_146b41ace(param_1);
  return param_1;
}



// FUNCTION 146b33530 FUN_146b33530 body=51 status=ok
// SIG undefined FUN_146b33530(void)

undefined8 * FUN_146b33530(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = &PTR_FUN_149f2e8a8;
  uVar2 = FUN_141054386();
  puVar1[1] = uVar2;
  return puVar1;
}



// FUNCTION 146b33564 FUN_146b33564 body=31 status=ok
// SIG undefined FUN_146b33564(void)

void FUN_146b33564(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x90,0x10);
  FUN_146b4533a(uVar1);
  return;
}



// FUNCTION 146b33584 FUN_146b33584 body=90 status=ok
// SIG undefined FUN_146b33584(void)

undefined8 * FUN_146b33584(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_149f2ece0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 3),4000);
  return puVar1;
}



// FUNCTION 146b335de FUN_146b335de body=179 status=ok
// SIG undefined FUN_146b335de(void)

void FUN_146b335de(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447a1747(param_1[0xd],(int)param_1[0xe]);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  FUN_146b4dfe3(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b33692 FUN_146b33692 body=1213 status=ok
// SIG undefined FUN_146b33692(void)

void FUN_146b33692(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f2cf90;
  param_1[1] = &PTR_FUN_149f2d070;
  FUN_146b33b50();
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_146b48cac(param_1 + 0x113);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10b));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x103));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xfb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf3));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xeb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe3));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd3));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xcb));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc3));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0xc0];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xbf];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xbe];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xbd];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xbc];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xbb];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xba];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb9];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb8];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb7];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb6];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb4];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb3];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb2];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb1];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xb0];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xaf];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xae];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0xad];
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
  puVar3 = (undefined8 *)param_1[0xab];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xaa];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xa9];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0xa8];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  FUN_146173b74(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x91) = 0;
  if (param_1[0x90] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x7e);
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x74);
  FUN_1447a1747(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  param_1[0x5c] = &PTR_FUN_149f2f730;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6c));
  FUN_146b33c04(param_1 + 0x2e);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b52611(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_146b335de(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b33b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146b33b50 FUN_146b33b50 body=179 status=ok
// SIG undefined FUN_146b33b50(void)

void FUN_146b33b50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong **local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x15c) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x558);
    plVar2 = (longlong *)FUN_140e82300();
    local_30 = (longlong *)*plVar2;
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
    local_28 = (undefined4)plVar2[1];
    local_38 = &local_30;
    (**(code **)(*plVar1 + 0x38))(plVar1,5,&DAT_149f2f964,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))
            (*(longlong **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong **)(param_1 + 0x570) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x570) + 0x38))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b33c04 FUN_146b33c04 body=107 status=ok
// SIG undefined FUN_146b33c04(void)

void FUN_146b33c04(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b33c70 FUN_146b33c70 body=81 status=ok
// SIG undefined FUN_146b33c70(void)

uint FUN_146b33c70(longlong *param_1)

{
  uint uVar1;
  
  (**(code **)(*(longlong *)param_1[0xbe] + 0x20))();
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((char)uVar1 != '\0') {
    FUN_146b33cc2(param_1);
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))((longlong *)param_1[0xd],param_1[6]);
    param_1[6] = 0;
  }
  return uVar1 ^ 1;
}



// FUNCTION 146b33cc2 FUN_146b33cc2 body=683 status=ok
// SIG undefined FUN_146b33cc2(void)

void FUN_146b33cc2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  lVar8 = (**(code **)(*param_1 + 0x60))(param_1);
  param_1[0x3b] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb2] + 0x10))((longlong *)param_1[0xb2],0x7f7fffff);
  param_1[0x39] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb2] + 0x18))();
  param_1[0x3a] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb3] + 0x10))((longlong *)param_1[0xb3],0x7f7fffff);
  param_1[0x3e] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb3] + 0x18))();
  param_1[0x3f] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb4] + 0x10))();
  param_1[0x41] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb4] + 0x18))();
  param_1[0x42] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb7] + 0x20))();
  param_1[0x37] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xb9] + 0x28))();
  param_1[0x3d] = lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xbc] + 0x38))();
  param_1[0x3d] = param_1[0x3d] + lVar8;
  lVar8 = (**(code **)(*(longlong *)param_1[0xbb] + 0x88))();
  param_1[0x40] = lVar8;
  uVar6 = (**(code **)(*(longlong *)param_1[0xbb] + 0x90))();
  *(undefined4 *)(param_1 + 0x43) = uVar6;
  fVar10 = 0.0;
  if (0.0 < (double)param_1[0x39]) {
    fVar10 = (float)((((double)CONCAT44(0x43300000,(int)param_1[0x37]) - 4503599627370496.0) +
                     ((double)CONCAT44(0x45300000,(int)((ulonglong)param_1[0x37] >> 0x20)) -
                     1.9342813113834067e+25)) / (double)param_1[0x39]);
  }
  *(float *)(param_1 + 0x3c) = fVar10;
  uVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x50))();
  *(undefined4 *)((longlong)param_1 + 700) = uVar6;
  uVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x58))();
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  uVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x60))();
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar6;
  uVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x68))();
  *(undefined4 *)(param_1 + 0x59) = uVar6;
  uVar6 = (**(code **)(*(longlong *)param_1[0xb0] + 0x48))();
  *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar6;
  FUN_14292bbe8();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  plStack_40 = (longlong *)param_1[3];
  if (plStack_40 == (longlong *)0x0) {
LAB_146b33eda:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar7 = (int)plStack_40[1];
    do {
      if (iVar7 == 0) goto LAB_146b33eda;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plStack_40 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_48 = param_1[2];
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  plVar4 = plStack_40;
  if (((int)param_1[10] != 0) && (plVar3 = (longlong *)param_1[9], plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
  }
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b33f6e FUN_146b33f6e body=8 status=ok
// SIG undefined FUN_146b33f6e(void)

undefined8 FUN_146b33f6e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x578);
}



// FUNCTION 146b33f76 FUN_146b33f76 body=8 status=ok
// SIG undefined FUN_146b33f76(void)

undefined8 FUN_146b33f76(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x590);
}



// FUNCTION 146b33f7e FUN_146b33f7e body=8 status=ok
// SIG undefined FUN_146b33f7e(void)

undefined8 FUN_146b33f7e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x598);
}



// FUNCTION 146b33f86 FUN_146b33f86 body=8 status=ok
// SIG undefined FUN_146b33f86(void)

undefined8 FUN_146b33f86(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5a8);
}



// FUNCTION 146b33f8e FUN_146b33f8e body=8 status=ok
// SIG undefined FUN_146b33f8e(void)

undefined8 FUN_146b33f8e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5a0);
}



// FUNCTION 146b33f96 FUN_146b33f96 body=8 status=ok
// SIG undefined FUN_146b33f96(void)

undefined8 FUN_146b33f96(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5b8);
}



// FUNCTION 146b33f9e FUN_146b33f9e body=8 status=ok
// SIG undefined FUN_146b33f9e(void)

undefined8 FUN_146b33f9e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5c8);
}



// FUNCTION 146b33fa6 FUN_146b33fa6 body=8 status=ok
// SIG undefined FUN_146b33fa6(void)

undefined8 FUN_146b33fa6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5d8);
}



// FUNCTION 146b33fae FUN_146b33fae body=8 status=ok
// SIG undefined FUN_146b33fae(void)

undefined8 FUN_146b33fae(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5e0);
}



// FUNCTION 146b33fb6 FUN_146b33fb6 body=8 status=ok
// SIG undefined FUN_146b33fb6(void)

undefined8 FUN_146b33fb6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x580);
}



// FUNCTION 146b33fc4 FUN_146b33fc4 body=301 status=ok
// SIG undefined FUN_146b33fc4(void)

bool FUN_146b33fc4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong *plStack_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar7 = true;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
    *(longlong **)(param_1 + 0x30) = plVar6;
    local_58 = 0;
    local_48 = &PTR_LAB_149f2ee20;
    local_68 = &LAB_142939012;
    local_40 = param_1;
    (**(code **)(*plVar6 + 8))(plVar6);
    plStack_70 = *(longlong **)(param_1 + 0x18);
    if (plStack_70 == (longlong *)0x0) {
LAB_146b34075:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar7 = true;
    }
    else {
      iVar5 = (int)plStack_70[1];
      do {
        if (iVar5 == 0) goto LAB_146b34075;
        LOCK();
        iVar4 = (int)plStack_70[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plStack_70 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
      local_78 = *(ulonglong *)(param_1 + 0x10);
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      bVar7 = false;
    }
    plVar6 = plStack_70;
    if ((*(int *)(param_1 + 0x40) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x38), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_78);
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar7) {
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    bVar7 = *(longlong *)(param_1 + 0x30) != 0;
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 146b340f2 FUN_146b340f2 body=164 status=ok
// SIG undefined FUN_146b340f2(void)

void FUN_146b340f2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x90) != 1) {
    return;
  }
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0xb0);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_146b34168;
    }
    *(longlong **)(param_1 + 0xb0) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_146b34168:
                    /* WARNING: Could not recover jumptable at 0x000146b34174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 146b34196 FUN_146b34196 body=72 status=ok
// SIG undefined FUN_146b34196(void)

undefined8 FUN_146b34196(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_146b40e3e(uVar1,param_1);
  FUN_146b52611(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 146b341de FUN_146b341de body=105 status=ok
// SIG undefined FUN_146b341de(void)

void FUN_146b341de(LPCRITICAL_SECTION param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection(param_1);
  if ((*(char *)&param_1[1].OwningThread == '\0') &&
     (*(undefined1 *)&param_1[1].OwningThread = 1,
     *(char *)((longlong)&param_1[1].OwningThread + 1) == '\0')) {
    QueryPerformanceCounter(&local_20);
    *(LARGE_INTEGER *)(param_1 + 1) = local_20;
  }
  LeaveCriticalSection(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b34248 FUN_146b34248 body=89 status=ok
// SIG undefined FUN_146b34248(void)

void FUN_146b34248(longlong param_1,uint *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  fVar1 = *(float *)(param_1 + 8 + (ulonglong)*param_2 * 4);
  fVar2 = *param_3;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    *(float *)(param_1 + 8 + (ulonglong)*param_2 * 4) = fVar2;
    FUN_146b41ace(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b3428a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}



// FUNCTION 146b342a2 FUN_146b342a2 body=375 status=ok
// SIG undefined FUN_146b342a2(void)

void FUN_146b342a2(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8 [6];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8[0] = 0;
  local_b8[1] = 0;
  plVar1 = (longlong *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0xd0) != 0) {
    plVar1 = local_b8;
  }
  FUN_146b341de(param_1 + 0x6d8);
  local_88 = 0;
  local_80 = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_1410b2022(local_b8 + 2,param_1 + 0x440);
  local_f8 = plVar1;
  local_f0 = param_1 + 0x2e0;
  plVar1 = (longlong *)
           FUN_146b89b32(*(undefined8 *)(param_1 + 0x548),*(undefined8 *)(param_1 + 0x5f8),
                         local_b8 + 2,param_1 + 0x78);
  local_c0 = param_1 + 0x389;
  local_c8 = param_1 + 0x388;
  local_e0 = param_1 + 0x608;
  local_e8 = param_1 + 0x130;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_146b35454(&local_e8,plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  FUN_146b3441a(param_1 + 0x6d8);
  FUN_146b3550c(&local_e8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1,1);
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3441a FUN_146b3441a body=109 status=ok
// SIG undefined FUN_146b3441a(void)

void FUN_146b3441a(LPCRITICAL_SECTION param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection(param_1);
  if ((*(char *)&param_1[1].OwningThread == '\x01') &&
     (*(undefined1 *)&param_1[1].OwningThread = 0,
     *(char *)((longlong)&param_1[1].OwningThread + 1) == '\0')) {
    QueryPerformanceCounter(&local_20);
    *(longlong *)&param_1[1].LockCount =
         *(longlong *)&param_1[1].LockCount + (local_20.QuadPart - (longlong)param_1[1].DebugInfo);
  }
  LeaveCriticalSection(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b34488 FUN_146b34488 body=59 status=ok
// SIG undefined FUN_146b34488(void)

undefined4 FUN_146b34488(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return uVar1;
}



// FUNCTION 146b344ca FUN_146b344ca body=166 status=ok
// SIG undefined FUN_146b344ca(void)

undefined4 FUN_146b344ca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_146b8e66c(param_1 + 0x530,1);
  plVar3 = (longlong *)
           FUN_146b901b8(puVar2,*(undefined8 *)(param_1 + 0x570),*(undefined8 *)(param_1 + 0x558),
                         *(undefined8 *)(param_1 + 0x548),*(undefined8 *)(param_1 + 0x550));
  uVar1 = (**(code **)(*plVar3 + 8))
                    (plVar3,*(undefined8 *)(param_1 + 0x5f8),param_1 + 0x58,param_1 + 0x100,
                     param_1 + 0x2e0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)*plVar3)(plVar3,1);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return uVar1;
}



// FUNCTION 146b34570 FUN_146b34570 body=184 status=ok
// SIG undefined FUN_146b34570(void)

double FUN_146b34570(LPCRITICAL_SECTION param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection(param_1);
  uVar1 = param_1[1].LockCount;
  uVar2 = param_1[1].RecursionCount;
  dVar3 = (((double)CONCAT44(0x43300000,uVar1) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,uVar2) - 1.9342813113834067e+25)) * DAT_14c83f418;
  if ((*(char *)&param_1[1].OwningThread == '\x01') &&
     (*(char *)((longlong)&param_1[1].OwningThread + 1) == '\0')) {
    QueryPerformanceCounter(&local_38);
    lVar4 = local_38.QuadPart - (longlong)param_1[1].DebugInfo;
    auVar5._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
    auVar5._0_8_ = lVar4;
    auVar5._12_4_ = 0x45300000;
    dVar3 = dVar3 + (((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
                    (auVar5._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
  }
  LeaveCriticalSection(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return dVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3462a FUN_146b3462a body=542 status=ok
// SIG undefined FUN_146b3462a(void)

ulonglong FUN_146b3462a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x128) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x120);
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x80))
                    (*(longlong **)(param_1 + 0x548),puVar9);
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  uVar5 = local_78;
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x98))();
    iVar11 = 0;
    uVar10 = 0;
    uVar5 = local_78;
    if (cVar6 == '\0') {
      local_98 = param_2 + 2;
      local_68 = (undefined2 *)0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = local_98;
      if ((int)param_2[5] != 0) {
        FUN_1449c0562(&local_68);
        iVar11 = (int)param_2[5];
      }
      local_88 = local_68;
      local_80 = local_60;
      local_78 = local_58;
      uVar5 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = param_2;
      if ((local_78._4_4_ != iVar11) || (uVar10 = 0, local_60 != local_98)) {
        iVar7 = local_78._4_4_;
        local_78 = uVar5;
        do {
          lVar2 = *local_90;
          iVar1 = *(int *)(lVar2 + 8 + (longlong)iVar7 * 0x18);
          iVar4 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar4 = 0;
          }
          plVar3 = *(longlong **)(param_1 + 0x548);
          local_a8 = iVar4 + 1 + (uint)(*(int *)(param_1 + 0x80) == 0);
          local_68 = (undefined2 *)0x0;
          FUN_14125bce8(&local_68,*(undefined8 *)(param_1 + 0x78),*(int *)(param_1 + 0x80),0);
          FUN_1401aebe8(&local_68,*(undefined8 *)(lVar2 + (longlong)iVar7 * 0x18),iVar4);
          puVar9 = &DAT_149dfb77a;
          if ((int)local_60 != 0) {
            puVar9 = local_68;
          }
          uVar8 = (**(code **)(*plVar3 + 0x80))(plVar3,puVar9);
          uVar10 = (ulonglong)uVar8;
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar5 = local_78;
          if ((char)uVar8 != '\0') break;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar7 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != param_2 || (local_80 != local_98 || local_78._4_4_ != iVar11));
      }
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 146b3484a FUN_146b3484a body=347 status=ok
// SIG undefined FUN_146b3484a(void)

longlong FUN_146b3484a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  iVar2 = *(int *)(param_1 + 0xb0);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  local_38 = iVar2;
  if (iVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_140b856de(&local_40,iVar2,0);
    FUN_140b8566a(local_40,uVar1,iVar2);
  }
  FUN_146b349a6(param_2,&local_40);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x68);
  local_48 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDbSourcePreFetchMinimum",param_2 + 0x10);
  local_48 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDbSourcePreFetchMaximum",param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x10);
  if (999 < iVar2) {
    iVar2 = 1000;
  }
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = 1000;
  if (*(int *)(param_2 + 0x14) < 1000) {
    iVar2 = *(int *)(param_2 + 0x14);
  }
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  *(int *)(param_2 + 0x10) = iVar3;
  *(int *)(param_2 + 0x14) = iVar2;
  local_48 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDbSourceChunkDbOpenRetryTime",
                param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x18);
  if (60.0 <= fVar4) {
    fVar4 = 60.0;
  }
  if (fVar4 <= 0.5) {
    fVar4 = 0.5;
  }
  *(float *)(param_2 + 0x18) = fVar4;
  *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_1 + 0xb8);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b349a6 FUN_146b349a6 body=109 status=ok
// SIG undefined FUN_146b349a6(void)

longlong * FUN_146b349a6(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0x280000000a;
  *(undefined4 *)(param_1 + 3) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b34a14 FUN_146b34a14 body=253 status=ok
// SIG undefined FUN_146b34a14(void)

undefined8 * FUN_146b34a14(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0x280000000a;
  FUN_14681b5ea();
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"InstallSourceBatchFetchMinimum",param_1 + 10,
                &DAT_14c872ce8);
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"InstallSourceBatchFetchMaximum",
                (longlong)param_1 + 0x54,&DAT_14c872ce8);
  iVar1 = *(int *)(param_1 + 10);
  if (999 < iVar1) {
    iVar1 = 1000;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    iVar2 = iVar1;
  }
  iVar1 = 1000;
  if (*(int *)((longlong)param_1 + 0x54) < 1000) {
    iVar1 = *(int *)((longlong)param_1 + 0x54);
  }
  *(int *)(param_1 + 10) = iVar2;
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)((longlong)param_1 + 0x54) = iVar1;
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_2);
  return param_1;
}



// FUNCTION 146b34b12 FUN_146b34b12 body=1051 status=ok
// SIG undefined FUN_146b34b12(void)

longlong FUN_146b34b12(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Str;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_90 = 0;
  iVar3 = *(int *)(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  local_88 = iVar3;
  if (iVar3 == 0) {
    local_84 = 0;
  }
  else {
    FUN_140b856de(&local_90,iVar3,0);
    FUN_140b8566a(local_90,uVar1,iVar3);
  }
  FUN_146b34f2e(param_2,&local_90);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x68);
  local_d8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkRetries",param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0x10);
  if (999 < iVar3) {
    iVar3 = 1000;
  }
  iVar4 = -1;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_2 + 0x10) = iVar4;
  local_d8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"CloudSourcePreFetchMinimum",param_2 + 0x14);
  local_d8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"CloudSourcePreFetchMaximum",param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x14);
  if (999 < iVar3) {
    iVar3 = 1000;
  }
  iVar4 = 1;
  if (1 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_2 + 0x14) = iVar4;
  iVar3 = 1000;
  if (*(int *)(param_2 + 0x18) < 1000) {
    iVar3 = *(int *)(param_2 + 0x18);
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  *(int *)(param_2 + 0x18) = iVar3;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"Portal.BuildPatch",L"RetryTimes",&local_a8);
  iVar3 = (int)uStack_a0;
  lVar5 = (longlong)(int)uStack_a0;
  local_b8 = (void *)0x0;
  uStack_b0 = uStack_a0 & 0xffffffff;
  if (lVar5 != 0) {
    FUN_14475e4ac(&local_b8);
    memset(local_b8,0,lVar5 * 4);
    if ((iVar3 < 1) || ((int)uStack_a0 < 1)) {
      if (iVar3 < 1) goto LAB_146b34d7e;
    }
    else {
      lVar5 = 8;
      lVar6 = 0;
      do {
        _Str = L"";
        if (*(int *)(local_a8 + lVar5) != 0) {
          _Str = *(wchar_t **)(local_a8 + -8 + lVar5);
        }
        dVar8 = _wtof(_Str);
        fVar7 = (float)dVar8;
        if (fVar7 <= 0.0) goto LAB_146b34d7e;
        if (300.0 <= fVar7) {
          fVar7 = 300.0;
        }
        if (fVar7 <= 0.5) {
          fVar7 = 0.5;
        }
        *(float *)((longlong)local_b8 + lVar6 * 4) = fVar7;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < (int)uStack_a0);
    }
    if ((void **)(param_2 + 0x20) != &local_b8) {
      if (*(longlong *)(param_2 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_2 + 0x20) = local_b8;
      local_b8 = (void *)0x0;
      *(undefined4 *)(param_2 + 0x28) = (undefined4)uStack_b0;
      *(undefined4 *)(param_2 + 0x2c) = uStack_b0._4_4_;
      uStack_b0 = 0;
    }
  }
LAB_146b34d7e:
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 5;
  FUN_14475e4ac(&local_c8,0);
  *local_c8 = 0;
  local_c8[1] = 0;
  *(undefined4 *)(local_c8 + 2) = 0;
  local_d8 = &DAT_14c872ce8;
  cVar2 = FUN_14153841e(DAT_14c872ce0,L"Portal.BuildPatch",L"OKHealth",local_c8 + 1);
  if (cVar2 != '\0') {
    local_d8 = &DAT_14c872ce8;
    cVar2 = FUN_14153841e(DAT_14c872ce0,L"Portal.BuildPatch",L"GoodHealth",(longlong)local_c8 + 0xc)
    ;
    if (cVar2 != '\0') {
      local_d8 = &DAT_14c872ce8;
      cVar2 = FUN_14153841e(DAT_14c872ce0,L"Portal.BuildPatch",L"ExcellentHealth",local_c8 + 2);
      if ((cVar2 != '\0') && ((undefined8 **)(param_2 + 0x30) != &local_c8)) {
        if (*(longlong *)(param_2 + 0x30) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 **)(param_2 + 0x30) = local_c8;
        local_c8 = (undefined8 *)0x0;
        *(undefined4 *)(param_2 + 0x38) = (undefined4)uStack_c0;
        *(undefined4 *)(param_2 + 0x3c) = uStack_c0._4_4_;
        uStack_c0 = 0;
      }
    }
  }
  local_d8 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"Portal.BuildPatch",L"DisconnectedDelay",param_2 + 0x40);
  fVar7 = *(float *)(param_2 + 0x40);
  if (30.0 <= fVar7) {
    fVar7 = 30.0;
  }
  if (fVar7 <= 1.0) {
    fVar7 = 1.0;
  }
  *(float *)(param_2 + 0x40) = fVar7;
  *(undefined1 *)(param_2 + 0x44) = 1;
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b34f2e FUN_146b34f2e body=327 status=ok
// SIG undefined FUN_146b34f2e(void)

longlong * FUN_146b34f2e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0x1000000006;
  *(undefined4 *)(param_1 + 3) = 0x20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x41a00000;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  FUN_14482f6fa(param_1 + 4,10);
  iVar5 = (int)param_1[5];
  lVar7 = (longlong)iVar5;
  *(int *)(param_1 + 5) = iVar5 + 10;
  if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar5) < 10) {
    FUN_14475e4ac(param_1 + 4,iVar5);
  }
  plVar1 = param_1 + 6;
  lVar4 = param_1[4];
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar7 * 4);
  *puVar3 = 0x4120000040400000;
  puVar3[1] = 0x41a0000041200000;
  puVar2 = (undefined4 *)(lVar4 + lVar7 * 4);
  *puVar2 = 0x3f000000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0x3f800000;
  puVar2[3] = 0x40400000;
  *(undefined8 *)(lVar4 + 0x20 + lVar7 * 4) = 0x41f0000041a00000;
  *(undefined4 *)(param_1 + 7) = 0;
  iVar5 = 5;
  if (*(int *)((longlong)param_1 + 0x3c) != 5) {
    FUN_14482f6fa(plVar1,5);
    iVar6 = (int)param_1[7];
    iVar5 = *(int *)((longlong)param_1 + 0x3c);
  }
  *(int *)(param_1 + 7) = iVar6 + 5;
  if ((uint)(iVar5 - iVar6) < 5) {
    FUN_14475e4ac(plVar1,iVar6);
  }
  lVar7 = *plVar1;
  puVar2 = (undefined4 *)(lVar7 + (longlong)iVar6 * 4);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0x3f666666;
  puVar2[3] = 0x3f7d70a4;
  *(undefined4 *)(lVar7 + 0x10 + (longlong)iVar6 * 4) = 0x3f800000;
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b35076 FUN_146b35076 body=72 status=ok
// SIG undefined FUN_146b35076(void)

void FUN_146b35076(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b350be FUN_146b350be body=102 status=ok
// SIG undefined FUN_146b350be(void)

void FUN_146b350be(longlong param_1,uint *param_2,float *param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((&DAT_149f2dff4)[*param_2] == '\x01') {
    *(float *)(param_1 + 0x68) =
         (*param_3 - *(float *)(param_1 + 0x38 + (ulonglong)*param_2 * 4)) +
         *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x38 + (ulonglong)*param_2 * 4) = *param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000146b3511d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}



// FUNCTION 146b35124 FUN_146b35124 body=480 status=ok
// SIG undefined FUN_146b35124(void)

undefined8 * FUN_146b35124(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = param_3;
  if ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1;
    param_1 = param_3;
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1462841aa(param_2,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_1457adf2c(param_2);
    }
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar5 = (longlong)iStack_5c * 0x18 + *local_78;
      uVar1 = FUN_1447addd0(lVar5,0x10);
      iVar2 = FUN_140f5cb3a(plVar4,uVar1,lVar5);
      if (iVar2 != -1) {
        FUN_1457adc9c(param_2,&local_50,(longlong)iStack_5c * 0x18 + *local_78,0);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b35306 FUN_146b35306 body=333 status=ok
// SIG undefined FUN_146b35306(void)

undefined8 * FUN_146b35306(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar3 = param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140b856de(param_1 + 7,iVar1,0);
    FUN_140b8566a(param_1[7],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  return param_1;
}



// FUNCTION 146b35454 FUN_146b35454 body=183 status=ok
// SIG undefined FUN_146b35454(void)

void FUN_146b35454(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(lpCriticalSection);
  plVar2 = (longlong *)param_1[1];
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_146b48fbe(plVar2,iVar1);
  }
  *(longlong **)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  iVar1 = *(int *)(param_1 + 3);
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_146b48fbe(param_1 + 2,iVar1);
  }
  *(longlong **)(param_1[2] + (longlong)iVar1 * 8) = param_2;
  if (*(char *)param_1[5] == '\x01') {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else {
    (**(code **)(*param_2 + 8))(param_2,*(undefined1 *)param_1[4]);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b354dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 146b3550c FUN_146b3550c body=176 status=ok
// SIG undefined FUN_146b3550c(void)

void FUN_146b3550c(undefined8 *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 3);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[2];
    lVar3 = 0;
    do {
      local_50 = *(undefined8 *)(lVar2 + lVar3);
      local_48 = &local_50;
      FUN_146b49044(param_1[1],&local_48);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b355be FUN_146b355be body=429 status=ok
// SIG undefined FUN_146b355be(void)

void FUN_146b355be(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined2 *local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = param_3 + 2;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_78 = local_50;
  local_74 = local_4c;
  local_90 = local_68;
  local_88 = local_60;
  local_98 = param_3;
  local_70 = param_3;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_98;
      lVar6 = (longlong)iStack_7c;
      iVar1 = *(int *)(lVar2 + 8 + lVar6 * 0x18);
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      plVar3 = *(longlong **)(param_1 + 0x548);
      local_a8 = iVar4 + 1 + (uint)(*(int *)(param_2 + 1) == 0);
      local_68 = (undefined2 *)0x0;
      FUN_14125bce8(&local_68,*param_2,*(int *)(param_2 + 1),0);
      FUN_1401aebe8(&local_68,*(undefined8 *)(lVar2 + lVar6 * 0x18),iVar4);
      puVar7 = &DAT_149dfb77a;
      if ((int)local_60 != 0) {
        puVar7 = local_68;
      }
      cVar5 = (**(code **)(*plVar3 + 0x80))(plVar3,puVar7);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (cVar5 == '\0') {
        FUN_1411a5a1c(local_70,iStack_7c);
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < (int)local_88[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3576c FUN_146b3576c body=285 status=ok
// SIG undefined FUN_146b3576c(void)

undefined4
FUN_146b3576c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_c0 = param_2;
  local_b8 = param_3;
  local_b0 = param_4;
  FUN_14096c7c0(&local_88,&local_78);
  local_98 = 0;
  local_90 = 0;
  FUN_14096c7c0(&local_98,&local_68);
  local_a8 = 0;
  local_a0 = 0;
  FUN_140328a42(&local_a8,&local_58);
  local_d8 = &local_a8;
  local_d0 = &local_98;
  local_c8 = &local_88;
  uVar1 = FUN_146b442d0(param_1,local_c0,local_b8,local_b0);
  FUN_1449db362(&local_78);
  FUN_1449db362(&local_68);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3588a FUN_146b3588a body=38 status=ok
// SIG undefined FUN_146b3588a(void)

void FUN_146b3588a(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x590);
  uVar2 = FUN_146b31e3b();
                    /* WARNING: Could not recover jumptable at 0x000146b358ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
  return;
}



// FUNCTION 146b358b0 FUN_146b358b0 body=37 status=ok
// SIG undefined FUN_146b358b0(void)

longlong FUN_146b358b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x60))();
  return lVar1 + *(longlong *)(param_1 + 0x168);
}



// FUNCTION 146b358fe FUN_146b358fe body=53 status=ok
// SIG undefined FUN_146b358fe(void)

bool FUN_146b358fe(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  iVar1 = *(int *)(param_1 + 600);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return iVar1 == 7;
}



// FUNCTION 146b35934 FUN_146b35934 body=51 status=ok
// SIG undefined FUN_146b35934(void)

ulonglong FUN_146b35934(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  uVar1 = *(undefined1 *)(param_1 + 0x388);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}



// FUNCTION 146b35968 FUN_146b35968 body=67 status=ok
// SIG undefined FUN_146b35968(void)

ulonglong FUN_146b35968(longlong param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  if (*(int *)(param_1 + 600) == 10) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0x250)) ^ 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return uVar1 & 0xffffffff;
}



// FUNCTION 146b359f2 FUN_146b359f2 body=39 status=ok
// SIG undefined FUN_146b359f2(void)

undefined4 FUN_146b359f2(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)(int)param_1[0x2b] >> 8),(int)param_1[0x2b] != 0);
  }
  return uVar2;
}



// FUNCTION 146b35a1a FUN_146b35a1a body=67 status=ok
// SIG undefined FUN_146b35a1a(void)

ulonglong FUN_146b35a1a(longlong param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  if (*(int *)(param_1 + 600) == 7) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0x250)) ^ 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return uVar1 & 0xffffffff;
}



// FUNCTION 146b35a5e FUN_146b35a5e body=49 status=ok
// SIG undefined FUN_146b35a5e(void)

undefined4 FUN_146b35a5e(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  uVar1 = *(undefined4 *)(param_1 + 600);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return uVar1;
}



// FUNCTION 146b35a90 FUN_146b35a90 body=121 status=ok
// SIG undefined FUN_146b35a90(void)

undefined8 * FUN_146b35a90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x278);
  _Src = *(void **)(param_1 + 0x270);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return param_2;
}



// FUNCTION 146b35b0a FUN_146b35b0a body=443 status=ok
// SIG undefined FUN_146b35b0a(void)

undefined8 * FUN_146b35b0a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  wchar_t *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991b98) {
    FUN_144b3d300(&DAT_14c991b98);
    if (DAT_14c991b98 == -1) {
      local_50 = L"BuildPatchInstaller_GenericProgress";
      local_48 = 0x23;
      FUN_1446e940c(&local_68,&local_50);
      local_50 = L"BuildPatchInstaller";
      local_48 = 0x13;
      FUN_1446e940c(local_34,&local_50);
      FUN_140208bae(&DAT_14c991b88,local_34,&local_68,L"Please Wait");
      atexit((_func_5014 *)&LAB_142934b68);
      _Init_thread_footer(&DAT_14c991b98);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  fVar4 = (float)(**(code **)(*param_1 + 0x90))(param_1);
  plVar3 = DAT_14c991b88;
  if (fVar4 * 100.0 <= 0.0) {
    *param_2 = DAT_14c991b88;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = DAT_14c991b90;
  }
  else {
    FUN_141366fce(&local_50);
    local_40 = 0;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    uVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    FUN_1467d068c(param_2,uVar5,&local_50,&local_68);
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b35cc6 FUN_146b35cc6 body=1295 status=ok
// SIG undefined FUN_146b35cc6(void)

undefined8 FUN_146b35cc6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [16];
  longlong local_d8 [2];
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8 [2];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  longlong *local_80 [2];
  wchar_t *local_70;
  undefined4 local_68;
  longlong *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991bb0) {
    FUN_144b3d300(&DAT_14c991bb0);
    if (DAT_14c991bb0 == -1) {
      local_70 = L"BuildPatchInstaller_DownloadSpeedFormat";
      local_68 = 0x27;
      FUN_1446e940c(local_98,&local_70);
      local_70 = L"BuildPatchInstaller";
      local_68 = 0x13;
      FUN_1446e940c(local_80,&local_70);
      FUN_140208bae(&DAT_14c991ba0,local_80,local_98,L"{Current} / {Total} ({Speed}/sec)");
      atexit((_func_5014 *)&LAB_142934b7c);
      _Init_thread_footer(&DAT_14c991bb0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  FUN_144a5dc74(local_80);
  dVar7 = (double)(**(code **)(*param_1 + 0x60))(param_1);
  lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
  lVar5 = (**(code **)(*param_1 + 0x78))(param_1);
  if (0.0 <= dVar7) {
    FUN_141366fce(local_98);
    local_88 = &DAT_100000001;
    local_a8 = 0;
    uStack_a0 = 0;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    local_f8 = 0;
    FUN_14023326e(local_b8,(longlong)(dVar7 - 9.223372036854776e+18) & (longlong)dVar7 >> 0x3f |
                           (longlong)dVar7,local_98);
    local_70 = (wchar_t *)CONCAT44(local_70._4_4_,4);
    FUN_14023423e(&local_60,local_b8);
    FUN_140056680(local_d8,L"Speed");
    FUN_140233eec(&local_a8,local_d8,&local_70);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
      local_60 = (longlong *)0x0;
      local_58 = 0;
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    uVar6 = (ulonglong)(double)lVar4;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    local_f8 = 0;
    FUN_14023326e(local_b8,(longlong)((double)lVar4 - 9.223372036854776e+18) &
                           (longlong)uVar6 >> 0x3f | uVar6,local_98);
    local_70 = (wchar_t *)CONCAT44(local_70._4_4_,4);
    FUN_14023423e(&local_60,local_b8);
    FUN_140056680(local_d8,L"Total");
    FUN_140233eec(&local_a8,local_d8,&local_70);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
      local_60 = (longlong *)0x0;
      local_58 = 0;
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    uVar6 = (ulonglong)(double)lVar5;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    local_f8 = 0;
    FUN_14023326e(local_b8,(longlong)((double)lVar5 - 9.223372036854776e+18) &
                           (longlong)uVar6 >> 0x3f | uVar6,local_98);
    local_70 = (wchar_t *)CONCAT44(local_70._4_4_,4);
    FUN_14023423e(&local_60,local_b8);
    FUN_140056680(local_d8,L"Current");
    FUN_140233eec(&local_a8,local_d8,&local_70);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
      local_60 = (longlong *)0x0;
      local_58 = 0;
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    plVar3 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_14023409e(local_e8,&DAT_14c991ba0,1);
    FUN_140233c04(param_2,local_e8,&local_a8);
    FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_144a5dc74(param_2);
  }
  if (local_80[0] != (longlong *)0x0) {
    (**(code **)(*local_80[0] + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b361d6 FUN_146b361d6 body=49 status=ok
// SIG undefined FUN_146b361d6(void)

undefined4 FUN_146b361d6(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x360));
  uVar1 = *(undefined4 *)(param_1 + 0x350);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x360));
  return uVar1;
}



// FUNCTION 146b36208 FUN_146b36208 body=46 status=ok
// SIG undefined FUN_146b36208(void)

undefined4 FUN_146b36208(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return uVar1;
}



// FUNCTION 146b36236 FUN_146b36236 body=103 status=ok
// SIG undefined FUN_146b36236(void)

longlong * FUN_146b36236(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = (**(code **)(*param_1 + 0x80))();
  plVar2 = (longlong *)FUN_146b3629e();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3629e FUN_146b3629e body=2102 status=ok
// SIG undefined FUN_146b3629e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146b3629e(uint *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991c40) {
    FUN_144b3d300(&DAT_14c991c40);
    if (DAT_14c991c40 == -1) {
      local_30 = L"EBuildPatchProgress_Queued";
      local_28 = 0x1a;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991c30,local_38,local_34,L"Queued");
      atexit((_func_5014 *)&LAB_142937349);
      _Init_thread_footer(&DAT_14c991c40);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991c58) {
    FUN_144b3d300(&DAT_14c991c58);
    if (DAT_14c991c58 == -1) {
      local_30 = L"EBuildPatchProgress_Initialising";
      local_28 = 0x20;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991c48,local_38,local_34,L"Initializing");
      atexit((_func_5014 *)&LAB_14293735d);
      _Init_thread_footer(&DAT_14c991c58);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991c70) {
    FUN_144b3d300(&DAT_14c991c70);
    if (DAT_14c991c70 == -1) {
      local_30 = L"EBuildPatchProgress_Resuming";
      local_28 = 0x1c;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991c60,local_38,local_34,L"Resuming");
      atexit((_func_5014 *)&LAB_142937371);
      _Init_thread_footer(&DAT_14c991c70);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991c88) {
    FUN_144b3d300(&DAT_14c991c88);
    if (DAT_14c991c88 == -1) {
      local_30 = L"EBuildPatchProgress_Downloading";
      local_28 = 0x1f;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991c78,local_38,local_34,L"Downloading");
      atexit((_func_5014 *)&LAB_142937385);
      _Init_thread_footer(&DAT_14c991c88);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991ca0) {
    FUN_144b3d300(&DAT_14c991ca0);
    if (DAT_14c991ca0 == -1) {
      local_30 = L"EBuildPatchProgress_Installing";
      local_28 = 0x1e;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991c90,local_38,local_34,L"Installing");
      atexit((_func_5014 *)&LAB_142937399);
      _Init_thread_footer(&DAT_14c991ca0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991cb8) {
    FUN_144b3d300(&DAT_14c991cb8);
    if (DAT_14c991cb8 == -1) {
      local_30 = L"EBuildPatchProgress_BuildVerification";
      local_28 = 0x25;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991ca8,local_38,local_34,L"Verifying");
      atexit((_func_5014 *)&LAB_1429373ad);
      _Init_thread_footer(&DAT_14c991cb8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991cd0) {
    FUN_144b3d300(&DAT_14c991cd0);
    if (DAT_14c991cd0 == -1) {
      local_30 = L"EBuildPatchProgress_CleanUp";
      local_28 = 0x1b;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991cc0,local_38,local_34,L"Cleaning up");
      atexit((_func_5014 *)&LAB_1429373c1);
      _Init_thread_footer(&DAT_14c991cd0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991ce8) {
    FUN_144b3d300(&DAT_14c991ce8);
    if (DAT_14c991ce8 == -1) {
      local_30 = L"EBuildPatchProgress_PrerequisitesInstall";
      local_28 = 0x28;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991cd8,local_38,local_34,L"Prerequisites");
      atexit((_func_5014 *)&LAB_1429373d5);
      _Init_thread_footer(&DAT_14c991ce8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991d00) {
    FUN_144b3d300(&DAT_14c991d00);
    if (DAT_14c991d00 == -1) {
      local_30 = L"EBuildPatchProgress_Complete";
      local_28 = 0x1c;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991cf0,local_38,local_34,L"Complete");
      atexit((_func_5014 *)&LAB_1429373e9);
      _Init_thread_footer(&DAT_14c991d00);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991d18) {
    FUN_144b3d300(&DAT_14c991d18);
    if (DAT_14c991d18 == -1) {
      local_30 = L"EBuildPatchProgress_Paused";
      local_28 = 0x1a;
      FUN_1446e940c(local_34,&local_30);
      local_30 = L"BuildPatchInstallProgress";
      local_28 = 0x19;
      FUN_1446e940c(local_38,&local_30);
      FUN_140208bae(&DAT_14c991d08,local_38,local_34,L"Paused");
      atexit((_func_5014 *)&LAB_1429373fd);
      _Init_thread_footer(&DAT_14c991d18);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991d30) {
    FUN_144b3d300(&DAT_14c991d30);
    if (DAT_14c991d30 == -1) {
      plVar2 = (longlong *)FUN_140e82300();
      DAT_14c991d20 = (longlong *)*plVar2;
      if (DAT_14c991d20 != (longlong *)0x0) {
        (**(code **)(*DAT_14c991d20 + 8))();
      }
      _DAT_14c991d28 = (undefined4)plVar2[1];
      atexit((_func_5014 *)&LAB_142937411);
      _Init_thread_footer(&DAT_14c991d30);
    }
  }
  if ((ulonglong)*param_1 < 0xc) {
    puVar1 = (undefined8 *)(&PTR_DAT_149f2f9f0)[*param_1];
  }
  else {
    puVar1 = &DAT_14c991d20;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b36ad6 FUN_146b36ad6 body=91 status=ok
// SIG undefined FUN_146b36ad6(void)

undefined4 FUN_146b36ad6(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x360));
  if ((&DAT_149f2e000)[*(uint *)(param_1 + 0x350)] == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x354);
  }
  else {
    uVar1 = 0xbf800000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x360));
  return uVar1;
}



// FUNCTION 146b36b32 FUN_146b36b32 body=85 status=ok
// SIG undefined FUN_146b36b32(void)

undefined4 FUN_146b36b32(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((&DAT_149f2e000)[*(uint *)(param_1 + 0x70)] == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x74);
  }
  else {
    uVar1 = 0xbf800000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return uVar1;
}



// FUNCTION 146b36b88 FUN_146b36b88 body=67 status=ok
// SIG undefined FUN_146b36b88(void)

undefined8 FUN_146b36b88(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  FUN_146b36bcc(param_2,param_1 + 0x170);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return param_2;
}



// FUNCTION 146b36bcc FUN_146b36bcc body=405 status=ok
// SIG undefined FUN_146b36bcc(void)

void * FUN_146b36bcc(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  memcpy(param_1,param_2,0xec);
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xf8);
  pvVar2 = *(void **)((longlong)param_2 + 0xf0);
  *(int *)((longlong)param_1 + 0xf8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_146b491fe((undefined8 *)((longlong)param_1 + 0xf0),iVar1);
    memcpy(*(void **)((longlong)param_1 + 0xf0),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x108);
  pvVar2 = *(void **)((longlong)param_2 + 0x100);
  *(int *)((longlong)param_1 + 0x108) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)((longlong)param_1 + 0x100),iVar1,0);
    memcpy(*(void **)((longlong)param_1 + 0x100),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x118);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x110);
  *(int *)((longlong)param_1 + 0x118) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_140b856de((undefined8 *)((longlong)param_1 + 0x110),iVar1,0);
    FUN_140b8566a(*(undefined8 *)((longlong)param_1 + 0x110),uVar3,iVar1);
  }
  plVar4 = *(longlong **)((longlong)param_2 + 0x120);
  *(longlong **)((longlong)param_1 + 0x120) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)((longlong)param_1 + 0x128) = *(undefined4 *)((longlong)param_2 + 0x128);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x138);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x140);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x148);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x150);
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x158);
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x160);
  uVar10 = *(undefined8 *)((longlong)param_2 + 0x168);
  *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
  *(undefined8 *)((longlong)param_1 + 0x138) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x148) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x150) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x158) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x160) = uVar9;
  *(undefined8 *)((longlong)param_1 + 0x168) = uVar10;
  return param_1;
}



// FUNCTION 146b36d74 FUN_146b36d74 body=30 status=ok
// SIG undefined FUN_146b36d74(void)

undefined8 FUN_146b36d74(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x558) + 0x30))();
  return param_2;
}



// FUNCTION 146b36d92 FUN_146b36d92 body=235 status=ok
// SIG undefined FUN_146b36d92(void)

void FUN_146b36d92(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong **local_48;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)param_1[0xab];
  plVar5 = (longlong *)FUN_140e82300();
  local_38 = (longlong *)*plVar5;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_30 = (undefined4)plVar5[1];
  local_48 = &local_38;
  (**(code **)(*plVar1 + 0x38))(plVar1,7,&DAT_149f2f964,0);
  cVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0xc0))(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  *(undefined1 *)((longlong)param_1 + 0x389) = 1;
  lVar3 = param_1[0xc2];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = param_1[0xc1];
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x10))();
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x26));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b36e7e FUN_146b36e7e body=318 status=ok
// SIG undefined FUN_146b36e7e(void)

ulonglong FUN_146b36e7e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  uVar5 = 0;
  if (*(char *)(param_1 + 0x388) == '\0') {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x558) + 8))();
    uVar6 = (ulonglong)uVar4 ^ 1;
    uVar5 = uVar6;
    if (*(char *)(param_1 + 0x388) != '\x01') {
      if ((char)uVar4 == '\0') {
        FUN_146b341de(param_1 + 0x7d8);
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      }
      else {
        uVar5 = 0;
      }
      goto LAB_146b36ed8;
    }
  }
  FUN_146b3441a(param_1 + 0x7d8);
  uVar6 = uVar5;
LAB_146b36ed8:
  *(char *)(param_1 + 0x388) = (char)uVar6;
  iVar1 = *(int *)(param_1 + 0x610);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x608);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      (**(code **)(*plVar3 + 8))(plVar3,uVar5 & 0xffffffff);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    uVar6 = CONCAT71((int7)(uVar6 >> 8),*(undefined1 *)(param_1 + 0x388));
  }
  FUN_146b36fbc(param_1 + 0x658,uVar6 & 0xffffffffffffff01);
  FUN_146b36fbc(param_1 + 0x698,*(undefined1 *)(param_1 + 0x388));
  FUN_146b36fbc(param_1 + 0x6d8,*(undefined1 *)(param_1 + 0x388));
  FUN_146b36fbc(param_1 + 0x718,*(undefined1 *)(param_1 + 0x388));
  FUN_146b36fbc(param_1 + 0x758,*(undefined1 *)(param_1 + 0x388));
  FUN_146b36fbc(param_1 + 0x818,*(undefined1 *)(param_1 + 0x388));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  return uVar5 & 0xffffffff;
}



// FUNCTION 146b36fbc FUN_146b36fbc body=153 status=ok
// SIG undefined FUN_146b36fbc(void)

void FUN_146b36fbc(LPCRITICAL_SECTION param_1,char param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection(param_1);
  if (*(char *)((longlong)&param_1[1].OwningThread + 1) != param_2) {
    *(char *)((longlong)&param_1[1].OwningThread + 1) = param_2;
    if (param_2 == '\0') {
      if (*(char *)&param_1[1].OwningThread != '\0') {
        QueryPerformanceCounter(&local_28);
        ((LARGE_INTEGER *)(param_1 + 1))->QuadPart = (LONGLONG)local_28;
      }
    }
    else if (*(char *)&param_1[1].OwningThread != '\0') {
      QueryPerformanceCounter(&local_28);
      *(longlong *)&param_1[1].LockCount =
           *(longlong *)&param_1[1].LockCount + (local_28.QuadPart - (longlong)param_1[1].DebugInfo)
      ;
      param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
  }
  LeaveCriticalSection(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3707a FUN_146b3707a body=83 status=ok
// SIG undefined FUN_146b3707a(void)

undefined8 * FUN_146b3707a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
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



// FUNCTION 146b370ce FUN_146b370ce body=81 status=ok
// SIG undefined FUN_146b370ce(void)

void FUN_146b370ce(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_1467acd1a(param_1 + 8,&local_10,8);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10);
  }
  return;
}



// FUNCTION 146b37120 FUN_146b37120 body=79 status=ok
// SIG undefined FUN_146b37120(void)

undefined8 FUN_146b37120(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_1467acd1a(param_1 + 8,&local_10,8);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_10;
}



// FUNCTION 146b37170 FUN_146b37170 body=302 status=ok
// SIG undefined FUN_146b37170(void)

undefined8 * FUN_146b37170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2db00;
  FUN_146b5ae72(param_1 + 1);
  FUN_146b5b2b0(param_1 + 0x1d);
  FUN_146b5b6c4(param_1 + 0x1f);
  FUN_146b5c272(param_1 + 0x21);
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2b) = (undefined1  [16])0x0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 (*) [16])(param_1 + 0x36) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined1 (*) [16])(param_1 + 0x4a) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x56) = 0;
  return param_1;
}



// FUNCTION 146b3729e FUN_146b3729e body=482 status=ok
// SIG undefined FUN_146b3729e(void)

undefined8 * FUN_146b3729e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_149f2db00;
  FUN_146b37480(param_1 + 1,param_2 + 8);
  param_1[0x1d] = 0;
  iVar1 = *(int *)(param_2 + 0xf0);
  _Src = *(void **)(param_2 + 0xe8);
  *(int *)(param_1 + 0x1e) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  else {
    FUN_146b49258(param_1 + 0x1d,iVar1);
    memcpy((void *)param_1[0x1d],_Src,(longlong)iVar1 << 6);
  }
  FUN_146b3777c(param_1 + 0x1f,param_2 + 0xf8);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_14058acb2(param_1 + 0x21,param_2 + 0x108);
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = *(undefined8 *)(param_2 + 0x2a0);
  param_1[0x55] = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x2b0);
  FUN_146b377ca(param_1);
  return param_1;
}



// FUNCTION 146b37480 FUN_146b37480 body=763 status=ok
// SIG undefined FUN_146b37480(void)

undefined8 * FUN_146b37480(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1410b2022(param_1 + 10,param_2 + 10);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  pvVar2 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0x17);
  pvVar2 = (void *)param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  pvVar2 = (void *)param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar2 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b3777c FUN_146b3777c body=77 status=ok
// SIG undefined FUN_146b3777c(void)

undefined8 * FUN_146b3777c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146b492b0(param_1,iVar1,0);
    FUN_146b49323(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146b377ca FUN_146b377ca body=777 status=ok
// SIG undefined FUN_146b377ca(void)

void FUN_146b377ca(longlong param_1)

{
  undefined8 ****ppppuVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 ***local_88;
  longlong local_80;
  undefined8 ***local_78;
  int local_70;
  undefined8 ***local_68;
  undefined1 local_5c [4];
  undefined8 ***local_58;
  undefined8 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  local_90 = param_1 + 0x160;
  uVar5 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar5 = uVar2;
  }
  FUN_146b5338e(local_90,uVar5);
  local_80 = param_1 + 0x1b0;
  FUN_146b53702(local_80,uVar2);
  lVar9 = param_1 + 0x200;
  FUN_146b53a76(lVar9);
  local_98 = param_1;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    ppppuVar11 = *(undefined8 *****)(param_1 + 0xf8);
    local_88 = ppppuVar11 + (longlong)*(int *)(param_1 + 0x100) * 0xc;
    do {
      local_78 = *ppppuVar11;
      local_70 = *(int *)(ppppuVar11 + 1) + -1;
      if (*(int *)(ppppuVar11 + 1) == 0) {
        local_70 = 0;
      }
      local_58 = &local_78;
      local_50 = &local_68;
      local_68 = ppppuVar11;
      FUN_146b5414c(local_80,local_5c,&local_58);
      if (*(char *)(local_98 + 0xc) == '\x01') {
        local_58 = ppppuVar11[9];
        local_50 = &local_78;
        local_78 = ppppuVar11;
        FUN_146b54432(local_90,&local_68,&local_58);
      }
      if ((longlong)*(int *)(ppppuVar11 + 8) == 0) {
        FUN_140056680(&local_58,&DAT_149dfb77a);
        iVar4 = (int)local_50 + -1;
        ppppuVar1 = (undefined8 ****)local_58;
        if ((int)local_50 == 0) {
          iVar4 = 0;
          ppppuVar1 = (undefined8 ****)&DAT_149dfb77a;
        }
        uVar2 = FUN_144a49b4a(iVar4,ppppuVar1);
        plVar3 = (longlong *)FUN_146b5478e(lVar9,uVar2);
        iVar4 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar4 + 1U) {
          FUN_146b54be6(plVar3,iVar4);
        }
        *(undefined8 *****)(*plVar3 + (longlong)iVar4 * 8) = ppppuVar11;
        if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        pppuVar10 = ppppuVar11[7];
        lVar7 = (longlong)*(int *)(ppppuVar11 + 8) << 4;
        do {
          ppuVar6 = (undefined8 **)&DAT_149dfb77a;
          iVar4 = 0;
          if (*(int *)(pppuVar10 + 1) != 0) {
            ppuVar6 = *pppuVar10;
            iVar4 = *(int *)(pppuVar10 + 1) + -1;
          }
          uVar2 = FUN_144a49b4a(iVar4,ppuVar6);
          plVar3 = (longlong *)FUN_146b54c6c(lVar9,uVar2);
          iVar4 = (int)plVar3[1];
          *(uint *)(plVar3 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar3 + 0xc) < iVar4 + 1U) {
            FUN_146b54be6(plVar3,iVar4);
          }
          *(undefined8 *****)(*plVar3 + (longlong)iVar4 * 8) = ppppuVar11;
          pppuVar10 = pppuVar10 + 2;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
      ppppuVar11 = ppppuVar11 + 0xc;
    } while (ppppuVar11 != (undefined8 ****)local_88);
  }
  lVar7 = local_98;
  lVar9 = local_98 + 0x250;
  FUN_146b53dd8(lVar9,*(undefined4 *)(local_98 + 0xf0));
  if ((longlong)*(int *)(lVar7 + 0xf0) != 0) {
    ppppuVar11 = *(undefined8 *****)(lVar7 + 0xe8);
    lVar8 = (longlong)*(int *)(lVar7 + 0xf0) << 6;
    do {
      local_78 = ppppuVar11;
      local_58 = ppppuVar11;
      local_50 = &local_78;
      FUN_146b54e62(lVar9,&local_68);
      ppppuVar11 = ppppuVar11 + 8;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
  }
  *(undefined8 *)(lVar7 + 0x2a0) = 0;
  *(undefined8 *)(lVar7 + 0x2a8) = 0;
  if ((longlong)*(int *)(lVar7 + 0x100) != 0) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar8 = lVar8 + *(longlong *)(*(longlong *)(lVar7 + 0xf8) + 0x58 + lVar9);
      *(longlong *)(lVar7 + 0x2a0) = lVar8;
      lVar9 = lVar9 + 0x60;
    } while ((longlong)*(int *)(lVar7 + 0x100) * 0x60 != lVar9);
  }
  if ((longlong)*(int *)(lVar7 + 0xf0) != 0) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar8 = lVar8 + *(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x38 + lVar9);
      *(longlong *)(lVar7 + 0x2a8) = lVar8;
      lVar9 = lVar9 + 0x40;
    } while ((longlong)*(int *)(lVar7 + 0xf0) * 0x40 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b37ad4 FUN_146b37ad4 body=304 status=ok
// SIG undefined FUN_146b37ad4(void)

void FUN_146b37ad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2db00;
  FUN_146b37c04();
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_146b49518(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_146b495d0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b49758(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146b49810(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x21);
  FUN_146b498c7(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_146b37d7e(param_1 + 1);
  return;
}



// FUNCTION 146b37c04 FUN_146b37c04 body=377 status=ok
// SIG undefined FUN_146b37c04(void)

void FUN_146b37c04(longlong param_1)

{
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146b5ae72(&local_f8);
  FUN_146b3816c(param_1 + 8,&local_f8);
  FUN_146b37d7e(&local_f8);
  FUN_146b5b2b0(&local_f8);
  if ((longlong *)(param_1 + 0xe8) == &local_f8) {
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xe8) = local_f8;
    local_f8 = 0;
    *(undefined4 *)(param_1 + 0xf0) = local_f0;
    *(undefined4 *)(param_1 + 0xf4) = local_ec;
  }
  FUN_146b5b6c4(&local_f8);
  FUN_146b498ee(param_1 + 0xf8,&local_f8);
  FUN_146b498c7(local_f8,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b5c272(&local_f8);
  FUN_146b4993e(param_1 + 0x108,&local_f8);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_f8);
  FUN_146b5338e(param_1 + 0x160,0);
  FUN_146b53702(param_1 + 0x1b0,0);
  FUN_146b53a76(param_1 + 0x200);
  FUN_146b53dd8(param_1 + 0x250,0);
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b37d7e FUN_146b37d7e body=186 status=ok
// SIG undefined FUN_146b37d7e(void)

void FUN_146b37d7e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x50);
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



// FUNCTION 146b37e38 FUN_146b37e38 body=391 status=ok
// SIG undefined FUN_146b37e38(void)

byte FUN_146b37e38(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  size_t sVar5;
  undefined2 *puVar6;
  wchar_t *_Str;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = (**(code **)(*param_1 + 0x180))();
  if (param_3 < iVar3) {
    bVar2 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    bVar2 = 0;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,puVar6,0);
    if (plVar4 != (longlong *)0x0) {
      if (param_3 < 0xe) {
        local_d8 = (wchar_t *)0x0;
        uStack_d0 = 0;
        (**(code **)(*param_1 + 0x178))(param_1,&local_d8);
        _Str = local_d8;
        if ((int)uStack_d0 == 0) {
          _Str = L"";
        }
        local_40 = 0;
        if (_Str == (wchar_t *)0x0) {
          local_38 = 0;
          local_30 = 0;
          lVar7 = 0;
        }
        else {
          sVar5 = wcslen(_Str);
          FUN_1446fe5a4(local_c0,_Str,sVar5 & 0xffffffff,1);
          lVar7 = (longlong)local_30;
        }
        (**(code **)(*plVar4 + 0x170))(plVar4,local_38,lVar7);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        bVar1 = 1;
      }
      else {
        bVar1 = FUN_146b5c7a6(plVar4,param_1,param_3);
      }
      bVar2 = (**(code **)(*plVar4 + 0x1f8))(plVar4);
      bVar2 = bVar2 & bVar1;
      (**(code **)*plVar4)(plVar4,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 146b37fc0 FUN_146b37fc0 body=134 status=ok
// SIG undefined FUN_146b37fc0(void)

undefined4 FUN_146b37fc0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  uVar2 = 0;
  cVar1 = FUN_14158b496(local_28,puVar3,0);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x160))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b38048 FUN_146b38048 body=291 status=ok
// SIG undefined FUN_146b38048(void)

undefined4 FUN_146b38048(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  undefined8 uStack_c0;
  byte local_a0;
  byte local_9f;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = (int)param_2[1];
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (0 < iVar1) {
      uVar2 = 3;
      if (iVar1 - 1U < 3) {
        uVar2 = iVar1 - 1U;
      }
      uVar4 = 0;
      do {
        if (*(char *)(*param_2 + uVar4) == '{') {
          local_c8 = (undefined **)0x0;
          uStack_c0 = 0;
          FUN_14170ac0e(&local_c8);
          uVar3 = (**(code **)(*param_1 + 0x168))(param_1,&local_c8);
          if (local_c8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_146b3810e;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 + 1 != uVar4);
    }
    memset(&local_c8,0,0x90);
    FUN_144869430(&local_c8);
    local_38 = 0;
    local_c8 = &PTR_FUN_149e1e050;
    local_28 = 0x7fffffffffffffff;
    local_a0 = local_a0 | 1;
    local_9f = local_9f & 0xfe;
    local_30 = param_2;
    uVar3 = FUN_146b5c7a6(&local_c8,param_1,0x12);
    FUN_144a7fc42(&local_c8);
  }
LAB_146b3810e:
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3816c FUN_146b3816c body=533 status=ok
// SIG undefined FUN_146b3816c(void)

undefined8 * FUN_146b3816c(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  if (param_1 == param_2) {
    FUN_146b3e088(param_1 + 10,param_2 + 10);
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
    FUN_146b3e088(param_1 + 10,param_2 + 10);
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    param_1[0x14] = param_2[0x14];
    param_2[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
    param_2[0x15] = 0;
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    param_1[0x16] = param_2[0x16];
    param_2[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
    param_2[0x17] = 0;
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x18] = param_2[0x18];
    param_2[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
    param_2[0x19] = 0;
    if (param_1[0x1a] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1a] = param_2[0x1a];
    param_2[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
    param_2[0x1b] = 0;
  }
  return param_1;
}



// FUNCTION 146b38382 FUN_146b38382 body=3844 status=ok
// SIG undefined FUN_146b38382(void)

void FUN_146b38382(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_238 [40];
  undefined8 *local_210;
  longlong local_208;
  undefined8 *local_200;
  void *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  void *local_178;
  uint local_170;
  undefined1 local_168 [16];
  void *local_158;
  int local_150;
  undefined4 local_14c;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  uint local_100;
  int iStack_fc;
  undefined8 uStack_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_145fe0690(&local_90,param_2,0);
  FUN_145928344(local_90);
  plVar10 = local_90;
  local_118 = (longlong *)CONCAT44(local_118._4_4_,*(undefined4 *)(param_1 + 8));
  FUN_142746ad6(local_a0,&local_118,4);
  FUN_146b39288(plVar10,local_a0);
  FUN_146b39304(local_90,*(undefined1 *)(param_1 + 0xc));
  plVar10 = local_90;
  FUN_142746ad6(local_b0,param_1 + 0x10,4);
  FUN_146b39382(plVar10,local_b0);
  plVar10 = local_90;
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_1 + 0x20);
  lVar9 = (longlong)local_b8;
  pvVar3 = *(void **)(param_1 + 0x18);
  if (lVar9 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar3,lVar9 * 2);
  }
  FUN_146b393fe(plVar10,L"AppNameString",&local_c0);
  plVar10 = local_90;
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_1 + 0x30);
  lVar9 = (longlong)local_c8;
  pvVar3 = *(void **)(param_1 + 0x28);
  if (lVar9 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,pvVar3,lVar9 * 2);
  }
  FUN_146b39472(plVar10,L"BuildVersionString",&local_d0);
  plVar10 = local_90;
  local_e0 = (void *)0x0;
  local_d8 = *(int *)(param_1 + 0x40);
  lVar9 = (longlong)local_d8;
  pvVar3 = *(void **)(param_1 + 0x38);
  if (lVar9 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_1446dd670(&local_e0,local_d8,0);
    memcpy(local_e0,pvVar3,lVar9 * 2);
  }
  FUN_146b394e6(plVar10,&local_e0);
  plVar10 = local_90;
  local_f0 = (void *)0x0;
  local_e8 = *(int *)(param_1 + 0x50);
  lVar9 = (longlong)local_e8;
  pvVar3 = *(void **)(param_1 + 0x48);
  if (lVar9 == 0) {
    local_e4 = 0;
  }
  else {
    FUN_1446dd670(&local_f0,local_e8,0);
    memcpy(local_f0,pvVar3,lVar9 * 2);
  }
  FUN_146b393fe(plVar10,L"LaunchCommand",&local_f0);
  FUN_146b39562(local_90);
  plVar10 = (longlong *)(param_1 + 0x58);
  lVar9 = param_1 + 0x68;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  iVar8 = 0;
  lStack_78 = lVar9;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_80);
    iVar8 = *(int *)(param_1 + 0x80);
  }
  local_100 = local_70;
  iStack_fc = iStack_6c;
  uStack_f8 = CONCAT44(uStack_64,uStack_68);
  uStack_110 = local_80;
  local_108 = lStack_78;
  local_118 = plVar10;
  if ((iStack_6c != iVar8) || (lStack_78 != lVar9)) {
    do {
      FUN_145927f78(local_90,(longlong)iStack_fc * 0x18 + *local_118);
      local_100 = local_100 & ~uStack_110._4_4_;
      FUN_1449c0562(&uStack_110);
    } while (local_118 != plVar10 || (local_108 != lVar9 || iStack_fc != iVar8));
  }
  FUN_1459282dc(local_90);
  plVar10 = local_90;
  local_128 = (void *)0x0;
  local_120 = *(int *)(param_1 + 0xb0);
  lVar9 = (longlong)local_120;
  pvVar3 = *(void **)(param_1 + 0xa8);
  if (lVar9 == 0) {
    local_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,local_120,0);
    memcpy(local_128,pvVar3,lVar9 * 2);
  }
  FUN_146b395f0(plVar10,L"PrereqName",&local_128);
  plVar10 = local_90;
  local_138 = (void *)0x0;
  local_130 = *(int *)(param_1 + 0xc0);
  lVar9 = (longlong)local_130;
  pvVar3 = *(void **)(param_1 + 0xb8);
  if (lVar9 == 0) {
    local_12c = 0;
  }
  else {
    FUN_1446dd670(&local_138,local_130,0);
    memcpy(local_138,pvVar3,lVar9 * 2);
  }
  FUN_146b395f0(plVar10,L"PrereqPath",&local_138);
  plVar10 = local_90;
  local_148 = (void *)0x0;
  local_140 = *(int *)(param_1 + 0xd0);
  lVar9 = (longlong)local_140;
  pvVar3 = *(void **)(param_1 + 200);
  if (lVar9 == 0) {
    local_13c = 0;
  }
  else {
    FUN_1446dd670(&local_148,local_140,0);
    memcpy(local_148,pvVar3,lVar9 * 2);
  }
  FUN_146b395f0(plVar10,L"PrereqArgs",&local_148);
  FUN_146b39664(local_90,L"FileManifestList");
  local_208 = param_1;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0xf8);
    local_200 = puVar11 + (longlong)*(int *)(param_1 + 0x100) * 0xc;
    do {
      FUN_145928344(local_90);
      plVar10 = local_90;
      local_158 = (void *)0x0;
      local_150 = *(int *)(puVar11 + 1);
      lVar9 = (longlong)local_150;
      pvVar3 = (void *)*puVar11;
      local_210 = puVar11;
      if (lVar9 == 0) {
        local_14c = 0;
      }
      else {
        FUN_1446dd670(&local_158,local_150,0);
        memcpy(local_158,pvVar3,lVar9 * 2);
      }
      puVar11 = local_210;
      FUN_146b396ec(plVar10,L"Filename",&local_158);
      plVar10 = local_90;
      FUN_142746ad6(local_168,puVar11 + 4,0x14);
      FUN_146b396ec(plVar10,L"FileHash",local_168);
      plVar10 = local_90;
      bVar5 = *(byte *)((longlong)puVar11 + 0x34);
      if ((bVar5 & 4) != 0) {
        FUN_146b551be(local_90,L"bIsUnixExecutable");
        local_118 = (longlong *)&DAT_149e06346;
        uStack_110 = CONCAT44(uStack_110._4_4_,4);
        FUN_145d3640c(plVar10[1],&local_118);
        *(undefined4 *)(plVar10 + 4) = 9;
        bVar5 = *(byte *)((longlong)puVar11 + 0x34);
      }
      plVar10 = local_90;
      if ((bVar5 & 1) != 0) {
        FUN_146b551be(local_90,L"bIsReadOnly");
        local_118 = (longlong *)&DAT_149e06346;
        uStack_110 = CONCAT44(uStack_110._4_4_,4);
        FUN_145d3640c(plVar10[1],&local_118);
        *(undefined4 *)(plVar10 + 4) = 9;
        bVar5 = *(byte *)((longlong)puVar11 + 0x34);
      }
      plVar10 = local_90;
      if ((bVar5 & 2) != 0) {
        FUN_146b551be(local_90,L"bIsCompressed");
        local_118 = (longlong *)&DAT_149e06346;
        uStack_110 = CONCAT44(uStack_110._4_4_,4);
        FUN_145d3640c(plVar10[1],&local_118);
        *(undefined4 *)(plVar10 + 4) = 9;
      }
      plVar10 = local_90;
      uVar2 = *(uint *)(puVar11 + 3);
      if ((int)uVar2 < 2) {
        FUN_146b39760(local_90);
        if ((longlong)*(int *)(puVar11 + 10) != 0) {
          lVar6 = local_210[9];
          lVar9 = lVar6 + (longlong)*(int *)(puVar11 + 10) * 0x18;
          do {
            FUN_145928344(local_90);
            plVar10 = local_90;
            local_188 = 0;
            uStack_180 = 0;
            FUN_1407c869a(lVar6,&local_188,0);
            FUN_146b397ee(plVar10,L"Guid",&local_188);
            plVar10 = local_90;
            FUN_142746ad6(local_198,lVar6 + 0x10,4);
            FUN_146b39862(plVar10,local_198);
            plVar10 = local_90;
            FUN_142746ad6(local_1a8,lVar6 + 0x14,4);
            FUN_146b397ee(plVar10,L"Size",local_1a8);
            plVar10 = local_90;
            *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
            local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
            (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118);
            *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
            FUN_14047c610(plVar10 + 2);
            *(undefined4 *)(plVar10 + 4) = 3;
            lVar6 = lVar6 + 0x18;
          } while (lVar6 != lVar9);
        }
        FUN_1459282dc(local_90);
        puVar11 = local_210;
      }
      else {
        local_178 = (void *)0x0;
        pvVar3 = (void *)puVar11[2];
        local_170 = uVar2;
        FUN_1446dd670(&local_178,(ulonglong)uVar2,0);
        memcpy(local_178,pvVar3,(ulonglong)uVar2 * 2);
        FUN_146b393fe(plVar10,L"SymlinkTarget",&local_178);
      }
      if (0 < *(int *)(puVar11 + 8)) {
        FUN_146b398de(local_90);
        if ((longlong)*(int *)(puVar11 + 8) != 0) {
          lVar9 = puVar11[7];
          lVar6 = (longlong)*(int *)(puVar11 + 8) << 4;
          do {
            FUN_145927f78(local_90,lVar9);
            lVar9 = lVar9 + 0x10;
            lVar6 = lVar6 + -0x10;
          } while (lVar6 != 0);
        }
        FUN_1459282dc(local_90);
      }
      plVar10 = local_90;
      *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
      local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
      (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118);
      *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
      FUN_14047c610(plVar10 + 2);
      *(undefined4 *)(plVar10 + 4) = 3;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != local_200);
  }
  FUN_1459282dc(local_90);
  FUN_146b3996c(local_90,L"ChunkHashList");
  lVar9 = local_208;
  if ((longlong)*(int *)(local_208 + 0xf0) != 0) {
    lVar6 = *(longlong *)(local_208 + 0xe8);
    lVar12 = (longlong)*(int *)(local_208 + 0xf0) << 6;
    do {
      plVar10 = local_90;
      FUN_142746ad6(local_1b8,lVar6 + 0x10,8);
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_1407c869a(lVar6,&local_118,0);
      FUN_146b399f4(plVar10,&local_118,local_1b8);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
  }
  plVar10 = local_90;
  *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
  local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
  (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118,2);
  *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
  FUN_14047c610(plVar10 + 2);
  *(undefined4 *)(plVar10 + 4) = 3;
  FUN_146b39aec(local_90,L"ChunkShaList");
  if ((longlong)*(int *)(lVar9 + 0xf0) != 0) {
    lVar6 = *(longlong *)(lVar9 + 0xe8);
    lVar12 = (longlong)*(int *)(lVar9 + 0xf0) << 6;
    do {
      plVar10 = local_90;
      local_1c8 = 0;
      uStack_1c0 = 0;
      FUN_1407c8a86(lVar6 + 0x18,0x14,&local_1c8);
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_1407c869a(lVar6,&local_118,0);
      FUN_146b399f4(plVar10,&local_118,&local_1c8);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
  }
  plVar10 = local_90;
  *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
  local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
  (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118,2);
  *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
  FUN_14047c610(plVar10 + 2);
  *(undefined4 *)(plVar10 + 4) = 3;
  FUN_146b3996c(local_90,L"DataGroupList");
  if ((longlong)*(int *)(lVar9 + 0xf0) != 0) {
    lVar6 = *(longlong *)(lVar9 + 0xe8);
    lVar12 = (longlong)*(int *)(lVar9 + 0xf0) << 6;
    do {
      plVar10 = local_90;
      FUN_142746ad6(local_1d8,lVar6 + 0x2c,1);
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_1407c869a(lVar6,&local_118,0);
      FUN_146b399f4(plVar10,&local_118,local_1d8);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
  }
  plVar10 = local_90;
  *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
  local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
  (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118,2);
  *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
  FUN_14047c610(plVar10 + 2);
  *(undefined4 *)(plVar10 + 4) = 3;
  FUN_146b39b74(local_90);
  if ((longlong)*(int *)(lVar9 + 0xf0) != 0) {
    lVar6 = *(longlong *)(lVar9 + 0xe8);
    lVar12 = (longlong)*(int *)(lVar9 + 0xf0) << 6;
    do {
      plVar10 = local_90;
      FUN_142746ad6(local_1e8,lVar6 + 0x38,8);
      local_118 = (longlong *)0x0;
      uStack_110 = 0;
      FUN_1407c869a(lVar6,&local_118,0);
      FUN_146b399f4(plVar10,&local_118,local_1e8);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x40;
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != 0);
  }
  plVar10 = local_90;
  *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
  local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
  (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118,2);
  *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
  FUN_14047c610(plVar10 + 2);
  *(undefined4 *)(plVar10 + 4) = 3;
  FUN_146b39aec(local_90,L"CustomFields");
  plVar10 = (longlong *)(lVar9 + 0x108);
  lVar6 = lVar9 + 0x118;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  lStack_78 = lVar6;
  if (*(int *)(lVar9 + 0x130) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar8 = *(int *)(lVar9 + 0x130);
  }
  uStack_f8 = CONCAT44(uStack_64,uStack_68);
  local_100 = local_70;
  iStack_fc = iStack_6c;
  uStack_110 = local_80;
  local_108 = lStack_78;
  local_118 = plVar10;
  if ((iStack_6c != iVar8) || (lStack_78 != lVar6)) {
    do {
      plVar4 = local_90;
      lVar9 = *local_118;
      lVar12 = (longlong)iStack_fc;
      local_1f8 = (void *)0x0;
      local_1f0 = *(int *)(lVar9 + 0x18 + lVar12 * 0x28);
      lVar7 = (longlong)local_1f0;
      pvVar3 = *(void **)(lVar9 + 0x10 + lVar12 * 0x28);
      if (lVar7 == 0) {
        local_1ec = 0;
      }
      else {
        FUN_1446dd670(&local_1f8,local_1f0,0);
        memcpy(local_1f8,pvVar3,lVar7 * 2);
      }
      FUN_146b39c02(plVar4,lVar9 + lVar12 * 0x28,&local_1f8);
      local_100 = local_100 & ~uStack_110._4_4_;
      FUN_1449c0562(&uStack_110);
    } while (local_118 != plVar10 || (local_108 != lVar6 || iStack_fc != iVar8));
  }
  plVar10 = local_90;
  *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
  local_118._0_2_ = 0x7d;
  (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118,2);
  *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
  FUN_14047c610(plVar10 + 2);
  plVar4 = local_90;
  *(undefined4 *)(plVar10 + 4) = 3;
  *(int *)((longlong)local_90 + 0x24) = *(int *)((longlong)local_90 + 0x24) + -1;
  local_118 = (longlong *)CONCAT62(local_118._2_6_,0x7d);
  (**(code **)(*(longlong *)local_90[1] + 0x170))((longlong *)local_90[1],&local_118,2);
  *(int *)(plVar4 + 3) = (int)plVar4[3] + -1;
  FUN_14047c610(plVar4 + 2);
  *(undefined4 *)(plVar4 + 4) = 3;
  (**(code **)(*local_90 + 8))();
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_88 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39288 FUN_146b39288 body=122 status=ok
// SIG undefined FUN_146b39288(void)

void FUN_146b39288(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_2;
  local_20 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39304 FUN_146b39304 body=125 status=ok
// SIG undefined FUN_146b39304(void)

void FUN_146b39304(longlong param_1,byte param_2)

{
  undefined1 auStack_58 [40];
  wchar_t *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146b551be(param_1,L"bIsFileData");
  local_30 = L"false";
  if (param_2 != 0) {
    local_30 = L"true";
  }
  local_28 = param_2 ^ 5;
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  *(uint *)(param_1 + 0x20) = 10 - (uint)param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39382 FUN_146b39382 body=122 status=ok
// SIG undefined FUN_146b39382(void)

void FUN_146b39382(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_2;
  local_20 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b393fe FUN_146b393fe body=115 status=ok
// SIG undefined FUN_146b393fe(void)

void FUN_146b393fe(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_3;
  local_20 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39472 FUN_146b39472 body=115 status=ok
// SIG undefined FUN_146b39472(void)

void FUN_146b39472(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_3;
  local_20 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b394e6 FUN_146b394e6 body=122 status=ok
// SIG undefined FUN_146b394e6(void)

void FUN_146b394e6(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_2;
  local_20 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39562 FUN_146b39562 body=141 status=ok
// SIG undefined FUN_146b39562(void)

void FUN_146b39562(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"PrereqIds");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b395f0 FUN_146b395f0 body=115 status=ok
// SIG undefined FUN_146b395f0(void)

void FUN_146b395f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_3;
  local_20 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39664 FUN_146b39664 body=134 status=ok
// SIG undefined FUN_146b39664(void)

void FUN_146b39664(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b396ec FUN_146b396ec body=115 status=ok
// SIG undefined FUN_146b396ec(void)

void FUN_146b396ec(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_3;
  local_20 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39760 FUN_146b39760 body=141 status=ok
// SIG undefined FUN_146b39760(void)

void FUN_146b39760(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"FileChunkParts");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b397ee FUN_146b397ee body=115 status=ok
// SIG undefined FUN_146b397ee(void)

void FUN_146b397ee(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_3;
  local_20 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39862 FUN_146b39862 body=122 status=ok
// SIG undefined FUN_146b39862(void)

void FUN_146b39862(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_2;
  local_20 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b398de FUN_146b398de body=141 status=ok
// SIG undefined FUN_146b398de(void)

void FUN_146b398de(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"InstallTags");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3996c FUN_146b3996c body=134 status=ok
// SIG undefined FUN_146b3996c(void)

void FUN_146b3996c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b399f4 FUN_146b399f4 body=246 status=ok
// SIG undefined FUN_146b399f4(void)

void FUN_146b399f4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_68 [38];
  undefined2 local_42;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_40 = CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  }
  local_40 = *param_2;
  local_38 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_38 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_40);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_38 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_38 = 0;
  }
  local_40 = *param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_40);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39aec FUN_146b39aec body=134 status=ok
// SIG undefined FUN_146b39aec(void)

void FUN_146b39aec(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39b74 FUN_146b39b74 body=141 status=ok
// SIG undefined FUN_146b39b74(void)

void FUN_146b39b74(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"ChunkFilesizeList");
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39c02 FUN_146b39c02 body=246 status=ok
// SIG undefined FUN_146b39c02(void)

void FUN_146b39c02(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_68 [38];
  undefined2 local_42;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_40 = CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  }
  local_40 = *param_2;
  local_38 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_38 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_40);
  local_42 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_42,2);
  local_38 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_38 = 0;
  }
  local_40 = *param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&local_40);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b39cfa FUN_146b39cfa body=13304 status=ok
// SIG undefined FUN_146b39cfa(void)

/* WARNING: Removing unreachable block (ram,0x000146b3bca6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146b39cfa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  void *_Src;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puVar15;
  byte bVar16;
  char cVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined2 *puVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint7 uVar35;
  longlong *plVar34;
  undefined7 uVar36;
  int iVar37;
  longlong lVar38;
  longlong *plVar39;
  longlong *plVar40;
  longlong lVar41;
  longlong lVar42;
  bool bVar43;
  undefined1 auVar44 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_368 [40];
  longlong local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  int local_2a0;
  wchar_t *local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined4 local_280;
  wchar_t *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  undefined4 local_260;
  wchar_t *local_258;
  undefined4 local_250;
  wchar_t *local_248;
  undefined4 local_240;
  wchar_t *local_238;
  undefined4 local_230;
  wchar_t *local_228;
  undefined4 local_220;
  undefined1 local_218 [16];
  wchar_t *local_200;
  undefined4 local_1f8;
  wchar_t *local_1f0;
  undefined4 local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  int local_18c;
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *plStack_170;
  undefined1 local_168 [12];
  uint uStack_15c;
  undefined1 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_138 [12];
  uint uStack_12c;
  undefined1 *local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined1 *puStack_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_178 = (longlong *)0x0;
  plStack_170 = (longlong *)0x0;
  FUN_14047afda(&local_188);
  FUN_146b37c04(param_1);
  plVar23 = (longlong *)0x0;
  bVar16 = FUN_14047b282(local_188,&local_178,0);
  plVar24 = local_178;
  uVar33 = 0;
  if ((local_178 != (longlong *)0x0 & bVar16) != 1) goto LAB_146b39d7a;
  local_b8 = 0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_18c = 0;
  FUN_140056680(local_138,L"ManifestFileVersion");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  plVar25 = (longlong *)(ulonglong)(local_138._8_4_ - 1);
  if (local_138._8_4_ == 0) {
    plVar25 = plVar23;
  }
  uVar19 = FUN_144a49b4a(plVar25,puVar30);
  iVar20 = FUN_14047c88e(plVar24,uVar19,local_138);
  lVar32 = 0;
  if (iVar20 != -1) {
    lVar31 = (longlong)iVar20 * 0x28 + *plVar24;
    if (lVar31 == 0) {
      plVar23 = (longlong *)0x0;
      lVar32 = 0;
    }
    else {
      lVar32 = *(longlong *)(lVar31 + 0x10);
      plVar23 = *(longlong **)(lVar31 + 0x18);
      if (plVar23 == (longlong *)0x0) {
        plVar23 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
      }
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_340 = param_1;
  if (lVar32 == 0) {
LAB_146b39ec2:
    *(undefined4 *)(local_340 + 8) = 1;
  }
  else {
    FUN_14047e026(lVar32,local_138);
    cVar17 = FUN_1467acd1a(local_138,&local_18c,4);
    if (local_138._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (cVar17 == '\0') goto LAB_146b39ec2;
    iVar20 = 8;
    if (local_18c != 0xff) {
      iVar20 = local_18c;
    }
    *(int *)(local_340 + 8) = iVar20;
  }
  local_2d8 = local_340 + 8;
  FUN_140056680(local_138,L"AppID");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  iVar20 = FUN_14047c88e(plVar24,uVar19,local_138);
  if ((iVar20 == -1) || (lVar32 = (longlong)iVar20 * 0x28 + *plVar24, lVar32 == 0)) {
    plVar25 = (longlong *)0x0;
    local_330 = (longlong *)0x0;
  }
  else {
    local_330 = *(longlong **)(lVar32 + 0x10);
    plVar25 = *(longlong **)(lVar32 + 0x18);
    if (plVar25 == (longlong *)0x0) {
      plVar25 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"AppNameString");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  iVar20 = FUN_14047c88e(plVar24,uVar19,local_138);
  if ((iVar20 == -1) || (lVar32 = (longlong)iVar20 * 0x28 + *plVar24, lVar32 == 0)) {
    plVar39 = (longlong *)0x0;
    local_318 = (longlong *)0x0;
  }
  else {
    local_318 = *(longlong **)(lVar32 + 0x10);
    plVar39 = *(longlong **)(lVar32 + 0x18);
    if (plVar39 == (longlong *)0x0) {
      plVar39 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar39 + 1) = (int)plVar39[1] + 1;
      UNLOCK();
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"BuildVersionString");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  iVar20 = FUN_14047c88e(plVar24,uVar19,local_138);
  if ((iVar20 == -1) || (lVar32 = (longlong)iVar20 * 0x28 + *plVar24, lVar32 == 0)) {
    plVar34 = (longlong *)0x0;
    local_310 = (longlong *)0x0;
  }
  else {
    local_310 = *(longlong **)(lVar32 + 0x10);
    plVar34 = *(longlong **)(lVar32 + 0x18);
    if (plVar34 == (longlong *)0x0) {
      plVar34 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
      UNLOCK();
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"LaunchExeString");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  iVar20 = FUN_14047c88e(plVar24,uVar19,local_138);
  if ((iVar20 == -1) || (lVar32 = (longlong)iVar20 * 0x28 + *plVar24, lVar32 == 0)) {
    plVar40 = (longlong *)0x0;
    local_320 = (longlong *)0x0;
  }
  else {
    local_320 = *(longlong **)(lVar32 + 0x10);
    plVar40 = *(longlong **)(lVar32 + 0x18);
    if (plVar40 == (longlong *)0x0) {
      plVar40 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
      UNLOCK();
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"LaunchCommand");
  local_338 = plVar24;
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  plVar24 = local_338;
  iVar20 = FUN_14047c88e(local_338,uVar19,local_138);
  if ((iVar20 == -1) || (lVar32 = (longlong)iVar20 * 0x28 + *plVar24, lVar32 == 0)) {
    plVar24 = (longlong *)0x0;
    local_328 = (longlong *)0x0;
  }
  else {
    local_328 = *(longlong **)(lVar32 + 0x10);
    plVar24 = *(longlong **)(lVar32 + 0x18);
    if (plVar24 == (longlong *)0x0) {
      plVar24 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"PrereqName");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  local_2f0 = (longlong *)0x0;
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  plVar3 = local_338;
  iVar20 = FUN_14047c88e(local_338,uVar19,local_138);
  if (iVar20 == -1) {
LAB_146b3a26a:
    lVar31 = 0;
  }
  else {
    lVar32 = (longlong)iVar20 * 0x28 + *plVar3;
    if (lVar32 == 0) {
      local_2f0 = (longlong *)0x0;
      goto LAB_146b3a26a;
    }
    lVar31 = *(longlong *)(lVar32 + 0x10);
    local_2f0 = *(longlong **)(lVar32 + 0x18);
    if (local_2f0 == (longlong *)0x0) {
      local_2f0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
    }
  }
  local_2d0 = plVar40;
  local_2c8 = plVar34;
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"PrereqPath");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  local_2f8 = (longlong *)0x0;
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  plVar34 = local_338;
  iVar20 = FUN_14047c88e(local_338,uVar19,local_138);
  lVar32 = local_340;
  if (iVar20 == -1) {
    lVar42 = 0;
  }
  else {
    lVar41 = (longlong)iVar20 * 0x28 + *plVar34;
    if (lVar41 == 0) {
      local_2f8 = (longlong *)0x0;
      lVar42 = 0;
    }
    else {
      lVar42 = *(longlong *)(lVar41 + 0x10);
      local_2f8 = *(longlong **)(lVar41 + 0x18);
      if (local_2f8 == (longlong *)0x0) {
        local_2f8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
        UNLOCK();
      }
    }
  }
  local_2e0 = plVar24;
  local_2b8 = plVar25;
  local_2b0 = plVar23;
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_138,L"PrereqArgs");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  local_300 = (longlong *)0x0;
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  plVar23 = local_338;
  iVar20 = FUN_14047c88e(local_338,uVar19,local_138);
  if (iVar20 == -1) {
LAB_146b3a3bb:
    lVar38 = 0;
  }
  else {
    lVar41 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar41 == 0) {
      local_300 = (longlong *)0x0;
      goto LAB_146b3a3bb;
    }
    lVar38 = *(longlong *)(lVar41 + 0x10);
    local_300 = *(longlong **)(lVar41 + 0x18);
    if (local_300 == (longlong *)0x0) {
      local_300 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_300 + 1) = (int)local_300[1] + 1;
      UNLOCK();
    }
  }
  local_2c0 = plVar39;
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_330 == (longlong *)0x0) {
    bVar16 = 0;
    uVar36 = 0;
  }
  else {
    lVar41 = lVar32 + 0x10;
    FUN_14047e026(local_330,local_138);
    bVar16 = FUN_1467acd1a(local_138,lVar41,4);
    if (local_138._0_8_ != 0) {
      FUN_1400020a8();
    }
    if ((bVar16 & local_318 != (longlong *)0x0) == 1) {
      FUN_14047e026(local_318,local_138);
      if ((undefined1 *)(local_340 + 0x18) == local_138) {
        bVar43 = local_138._0_8_ != 0;
        if (bVar43) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(local_340 + 0x18) != 0) {
          FUN_1400020a8();
        }
        auVar45 = _local_138;
        *(undefined8 *)(local_340 + 0x18) = local_138._0_8_;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = stack0xfffffffffffffed0;
        _local_138 = auVar9 << 0x40;
        auVar9 = _local_138;
        local_138._8_4_ = auVar45._8_4_;
        *(undefined4 *)(local_340 + 0x20) = local_138._8_4_;
        uStack_12c = auVar45._12_4_;
        *(uint *)(local_340 + 0x24) = uStack_12c;
        _local_138 = auVar9;
      }
      if (local_310 != (longlong *)0x0) {
        FUN_14047e026(local_310,local_138);
        if ((undefined1 *)(local_340 + 0x28) == local_138) {
          bVar43 = local_138._0_8_ != 0;
          if (bVar43) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(local_340 + 0x28) != 0) {
            FUN_1400020a8();
          }
          auVar9 = _local_138;
          *(undefined8 *)(local_340 + 0x28) = local_138._0_8_;
          auVar45._8_8_ = 0;
          auVar45._0_8_ = stack0xfffffffffffffed0;
          _local_138 = auVar45 << 0x40;
          auVar45 = _local_138;
          local_138._8_4_ = auVar9._8_4_;
          *(undefined4 *)(local_340 + 0x30) = local_138._8_4_;
          uStack_12c = auVar9._12_4_;
          *(uint *)(local_340 + 0x34) = uStack_12c;
          _local_138 = auVar45;
        }
        if (local_320 != (longlong *)0x0) {
          FUN_14047e026(local_320,local_138);
          if ((undefined1 *)(local_340 + 0x38) == local_138) {
            bVar43 = local_138._0_8_ != 0;
            if (bVar43) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(local_340 + 0x38) != 0) {
              FUN_1400020a8();
            }
            auVar9 = _local_138;
            *(undefined8 *)(local_340 + 0x38) = local_138._0_8_;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = stack0xfffffffffffffed0;
            _local_138 = auVar10 << 0x40;
            auVar45 = _local_138;
            local_138._8_4_ = auVar9._8_4_;
            *(undefined4 *)(local_340 + 0x40) = local_138._8_4_;
            uStack_12c = auVar9._12_4_;
            *(uint *)(local_340 + 0x44) = uStack_12c;
            _local_138 = auVar45;
          }
          if (local_328 != (longlong *)0x0) {
            FUN_14047e026(local_328,local_138);
            lVar32 = local_340;
            if ((undefined1 *)(local_340 + 0x48) == local_138) {
              bVar43 = local_138._0_8_ != 0;
              if (bVar43) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(local_340 + 0x48) != 0) {
                FUN_1400020a8();
              }
              auVar9 = _local_138;
              *(undefined8 *)(lVar32 + 0x48) = local_138._0_8_;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = stack0xfffffffffffffed0;
              _local_138 = auVar11 << 0x40;
              auVar45 = _local_138;
              local_138._8_4_ = auVar9._8_4_;
              *(undefined4 *)(lVar32 + 0x50) = local_138._8_4_;
              uStack_12c = auVar9._12_4_;
              *(uint *)(lVar32 + 0x54) = uStack_12c;
              _local_138 = auVar45;
            }
            uVar36 = (undefined7)((ulonglong)lVar41 >> 8);
            bVar16 = 1;
            goto LAB_146b3a3dc;
          }
        }
      }
    }
    bVar16 = 0;
    uVar36 = 0;
    lVar32 = local_340;
  }
LAB_146b3a3dc:
  if (lVar31 == 0) {
    _local_138 = (undefined1  [16])0x0;
  }
  else {
    FUN_14047e026(lVar31,local_138);
  }
  if ((undefined1 *)(lVar32 + 0xa8) == local_138) {
    bVar43 = local_138._0_8_ != 0;
    if (bVar43) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar32 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    auVar9 = _local_138;
    *(undefined8 *)(lVar32 + 0xa8) = local_138._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = stack0xfffffffffffffed0;
    _local_138 = auVar5 << 0x40;
    auVar45 = _local_138;
    local_138._8_4_ = auVar9._8_4_;
    *(undefined4 *)(lVar32 + 0xb0) = local_138._8_4_;
    uStack_12c = auVar9._12_4_;
    *(uint *)(lVar32 + 0xb4) = uStack_12c;
    _local_138 = auVar45;
  }
  if (lVar42 == 0) {
    _local_138 = (undefined1  [16])0x0;
  }
  else {
    FUN_14047e026(lVar42,local_138);
  }
  if ((undefined1 *)(lVar32 + 0xb8) == local_138) {
    bVar43 = local_138._0_8_ != 0;
    if (bVar43) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar32 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    auVar9 = _local_138;
    *(undefined8 *)(lVar32 + 0xb8) = local_138._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = stack0xfffffffffffffed0;
    _local_138 = auVar6 << 0x40;
    auVar45 = _local_138;
    local_138._8_4_ = auVar9._8_4_;
    *(undefined4 *)(lVar32 + 0xc0) = local_138._8_4_;
    uStack_12c = auVar9._12_4_;
    *(uint *)(lVar32 + 0xc4) = uStack_12c;
    _local_138 = auVar45;
  }
  if (lVar38 == 0) {
    _local_138 = (undefined1  [16])0x0;
  }
  else {
    FUN_14047e026(lVar38,local_138);
  }
  plVar23 = local_338;
  if ((undefined1 *)(lVar32 + 200) == local_138) {
    bVar43 = local_138._0_8_ != 0;
    if (bVar43) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar32 + 200) != 0) {
      FUN_1400020a8();
    }
    auVar9 = _local_138;
    *(undefined8 *)(lVar32 + 200) = local_138._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = stack0xfffffffffffffed0;
    _local_138 = auVar7 << 0x40;
    auVar45 = _local_138;
    local_138._8_4_ = auVar9._8_4_;
    *(undefined4 *)(lVar32 + 0xd0) = local_138._8_4_;
    uStack_12c = auVar9._12_4_;
    *(uint *)(lVar32 + 0xd4) = uStack_12c;
    _local_138 = auVar45;
  }
  FUN_140056680(local_138,L"FileManifestList");
  if (local_138._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_138._0_8_;
  }
  local_2e8 = (longlong *)0x0;
  iVar20 = local_138._8_4_ + -1;
  if (local_138._8_4_ == 0) {
    iVar20 = 0;
  }
  uVar19 = FUN_144a49b4a(iVar20,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_138);
  if (iVar20 == -1) {
LAB_146b3a68c:
    lVar41 = 0;
  }
  else {
    lVar31 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar31 == 0) {
      local_2e8 = (longlong *)0x0;
      goto LAB_146b3a68c;
    }
    lVar41 = *(longlong *)(lVar31 + 0x10);
    local_2e8 = *(longlong **)(lVar31 + 0x18);
    if (local_2e8 == (longlong *)0x0) {
      local_2e8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
      UNLOCK();
    }
  }
  if (local_138._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((bool)(bVar16 & lVar41 != 0)) {
    puVar22 = (undefined8 *)FUN_140482996(lVar41);
    iVar20 = *(int *)(puVar22 + 1);
    uVar4 = *puVar22;
    auVar12._4_4_ = uStack_15c;
    auVar12._0_4_ = iVar20;
    auVar12._8_8_ = 0;
    _local_168 = auVar12 << 0x40;
    if (iVar20 == 0) {
      _local_168 = ZEXT416(0) << 0x40;
      uVar19 = (undefined4)CONCAT71(uVar36,1);
      lVar32 = local_340;
      iVar20 = 0;
    }
    else {
      FUN_14047d15e(local_168,iVar20,0);
      FUN_14047cdb6(local_168._0_8_,uVar4);
      uVar19 = (undefined4)CONCAT71(uVar36,1);
      lVar32 = local_340;
      iVar20 = local_168._8_4_;
      if (0 < (int)local_168._8_4_) {
        local_328 = (longlong *)(local_340 + 0xf8);
        lVar31 = 0;
        do {
          local_310 = (longlong *)lVar31;
          plVar23 = (longlong *)(**(code **)**(undefined8 **)(local_168._0_8_ + lVar31 * 0x10))();
          lVar31 = *plVar23;
          local_320 = (longlong *)plVar23[1];
          if (local_320 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_320 + 1) = (int)local_320[1] + 1;
            UNLOCK();
          }
          FUN_146b5b6a0(local_138);
          iVar20 = *(int *)(lVar32 + 0x100);
          *(uint *)(lVar32 + 0x100) = iVar20 + 1U;
          if (*(uint *)(lVar32 + 0x104) < iVar20 + 1U) {
            FUN_146b55270(local_328,iVar20);
          }
          plVar23 = local_328;
          lVar41 = *local_328;
          lVar42 = (longlong)iVar20 * 0x60;
          *(undefined8 *)(lVar41 + lVar42) = 0;
          *(undefined8 *)(lVar41 + lVar42) = local_138._0_8_;
          *(undefined4 *)(lVar41 + 8 + lVar42) = local_138._8_4_;
          *(uint *)(lVar41 + 0xc + lVar42) = uStack_12c;
          _local_138 = ZEXT816(0);
          *(undefined8 *)(lVar41 + 0x10 + lVar42) = 0;
          *(undefined1 **)(lVar41 + 0x10 + lVar42) = local_128;
          local_128 = (undefined1 *)0x0;
          *(uint *)(lVar41 + 0x18 + lVar42) = (uint)local_120;
          *(int *)(lVar41 + 0x1c + lVar42) = local_120._4_4_;
          local_120 = (undefined1 *)0x0;
          *(ulonglong *)(lVar41 + 0x2d + lVar42) =
               CONCAT17((undefined1)local_104,CONCAT43(uStack_108,uStack_10c._1_3_));
          puVar22 = (undefined8 *)(lVar41 + 0x20 + lVar42);
          *puVar22 = local_118;
          puVar22[1] = CONCAT44(uStack_10c,uStack_110);
          *(undefined8 *)(lVar41 + 0x38 + lVar42) = 0;
          *(undefined8 *)(lVar41 + 0x38 + lVar42) = local_100;
          local_100 = 0;
          *(undefined4 *)(lVar41 + 0x40 + lVar42) = (undefined4)local_f8;
          *(undefined4 *)(lVar41 + 0x44 + lVar42) = local_f8._4_4_;
          local_f8 = 0;
          *(undefined8 *)(lVar41 + 0x48 + lVar42) = 0;
          *(ulonglong *)(lVar41 + 0x48 + lVar42) = local_f0;
          local_f0 = 0;
          *(undefined4 *)(lVar41 + 0x50 + lVar42) = (undefined4)local_e8;
          *(undefined4 *)(lVar41 + 0x54 + lVar42) = local_e8._4_4_;
          local_e8 = 0;
          *(undefined8 *)(lVar41 + 0x58 + lVar42) = local_e0;
          FUN_146b3d0f4(local_138);
          plVar23 = (longlong *)(lVar42 + *plVar23);
          local_1a0 = L"Filename";
          local_198 = 8;
          FUN_14047df9c(lVar31,local_138,&local_1a0);
          if (plVar23 != (longlong *)local_138) {
            if (*plVar23 != 0) {
              FUN_1400020a8();
            }
            *plVar23 = local_138._0_8_;
            *(undefined4 *)(plVar23 + 1) = local_138._8_4_;
            *(uint *)((longlong)plVar23 + 0xc) = uStack_12c;
            _local_138 = ZEXT816(0);
          }
          if (local_138._0_8_ != 0) {
            FUN_1400020a8();
          }
          local_1b0 = L"FileHash";
          local_1a8 = 8;
          FUN_14047df9c(lVar31,local_138,&local_1b0);
          uVar19 = FUN_1467acd1a(local_138,plVar23 + 4,0x14);
          if (local_138._0_8_ != 0) {
            FUN_1400020a8();
          }
          local_1c0 = L"FileChunkParts";
          local_1b8 = 0xe;
          local_318 = (longlong *)lVar31;
          puVar22 = (undefined8 *)FUN_14571608c(lVar31,&local_1c0);
          local_88 = (undefined8 *)0x0;
          iVar20 = *(int *)(puVar22 + 1);
          uVar4 = *puVar22;
          puStack_80 = (undefined1 *)CONCAT44(puStack_80._4_4_,iVar20);
          if (iVar20 == 0) {
            puStack_80 = (undefined1 *)0x0;
          }
          else {
            FUN_14047d15e(&local_88,iVar20,0);
            FUN_14047cdb6(local_88,uVar4,iVar20);
            if ((char)uVar19 == '\x01' && 0 < (int)puStack_80) {
              local_330 = plVar23 + 9;
              iVar20 = 1;
              lVar31 = 0;
              do {
                iVar37 = (int)plVar23[10];
                *(uint *)(plVar23 + 10) = iVar37 + 1U;
                if (*(uint *)((longlong)plVar23 + 0x54) < iVar37 + 1U) {
                  FUN_146b55304(local_330,iVar37);
                }
                lVar32 = *local_330;
                lVar41 = (longlong)iVar37 * 0x18;
                puVar22 = (undefined8 *)(lVar32 + lVar41);
                *puVar22 = 0;
                puVar22[1] = 0;
                *(undefined8 *)(lVar32 + 0x10 + lVar41) = 0;
                lVar41 = lVar41 + *local_330;
                puVar22 = (undefined8 *)
                          (**(code **)**(undefined8 **)((longlong)local_88 + lVar31))();
                uVar4 = *puVar22;
                plVar24 = (longlong *)puVar22[1];
                if (plVar24 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
                  UNLOCK();
                }
                local_1d0 = L"Guid";
                local_1c8 = 4;
                FUN_14047df9c(uVar4,local_138,&local_1d0);
                cVar17 = FUN_140b10a34(local_138,lVar41);
                if (local_138._0_8_ != 0) {
                  FUN_1400020a8();
                }
                if (cVar17 == '\0') {
LAB_146b3baa1:
                  uVar19 = 0;
                }
                else {
                  local_1e0 = L"Offset";
                  local_1d8 = 6;
                  FUN_14047df9c(uVar4,local_138,&local_1e0);
                  cVar17 = FUN_1467acd1a(local_138,lVar41 + 0x10,4);
                  if (local_138._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                  if (cVar17 == '\0') goto LAB_146b3baa1;
                  local_1f0 = L"Size";
                  local_1e8 = 4;
                  FUN_14047df9c(uVar4,local_138,&local_1f0);
                  uVar19 = FUN_1467acd1a(local_138,lVar41 + 0x14,4);
                  if (local_138._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                }
                lVar32 = local_340;
                FUN_1457adc9c(local_d8,local_138,lVar41,0);
                if (plVar24 != (longlong *)0x0) {
                  LOCK();
                  plVar25 = plVar24 + 1;
                  *(int *)plVar25 = (int)*plVar25 + -1;
                  UNLOCK();
                  if ((int)*plVar25 == 0) {
                    (**(code **)*plVar24)(plVar24);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar24 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar24 + 0x10))(plVar24);
                    }
                  }
                }
                bVar43 = iVar20 < (int)puStack_80;
                iVar20 = iVar20 + 1;
                lVar31 = lVar31 + 0x10;
              } while (((byte)uVar19 & bVar43) != 0);
            }
          }
          plVar24 = local_318;
          local_138._8_4_ = 0xb;
          local_138._0_8_ = L"InstallTags";
          cVar17 = FUN_146843260(local_318,local_138);
          if (cVar17 != '\0') {
            local_200 = L"InstallTags";
            local_1f8 = 0xb;
            puVar22 = (undefined8 *)FUN_14571608c(plVar24,&local_200);
            iVar20 = *(int *)(puVar22 + 1);
            uVar4 = *puVar22;
            auVar14._4_4_ = uStack_12c;
            auVar14._0_4_ = iVar20;
            auVar14._8_8_ = 0;
            _local_138 = auVar14 << 0x40;
            if (iVar20 == 0) {
              _local_138 = ZEXT416(0) << 0x40;
              iVar20 = 0;
            }
            else {
              FUN_14047d15e(local_138,iVar20,0);
              FUN_14047cdb6(local_138._0_8_,uVar4);
              iVar20 = local_138._8_4_;
              if ((byte)uVar19 == 1 && 0 < (int)local_138._8_4_) {
                lVar31 = 0;
                iVar37 = 0;
                do {
                  FUN_14047e026(*(undefined8 *)(local_138._0_8_ + lVar31));
                  lVar41 = plVar23[8];
                  uVar21 = (int)lVar41 + 1;
                  *(uint *)(plVar23 + 8) = uVar21;
                  if (*(uint *)((longlong)plVar23 + 0x44) < uVar21) {
                    FUN_1447a1bd6(plVar23 + 7);
                  }
                  lVar42 = plVar23[7];
                  lVar41 = (longlong)(int)lVar41 * 0x10;
                  *(undefined8 *)(lVar42 + lVar41) = 0;
                  *(undefined8 *)(lVar42 + lVar41) = local_218._0_8_;
                  *(undefined4 *)(lVar42 + 8 + lVar41) = local_218._8_4_;
                  *(undefined4 *)(lVar42 + 0xc + lVar41) = local_218._12_4_;
                  local_218 = ZEXT816(0);
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
                  iVar37 = iVar37 + 1;
                  lVar31 = lVar31 + 0x10;
                  iVar20 = local_138._8_4_;
                } while (iVar37 < (int)local_138._8_4_);
              }
            }
            FUN_14047c710(local_138._0_8_,iVar20);
            plVar24 = local_318;
            if (local_138._0_8_ != 0) {
              FUN_1400020a8();
              plVar24 = local_318;
            }
          }
          local_228 = L"bIsUnixExecutable";
          local_220 = 0x11;
          cVar17 = FUN_1469de206(plVar24,&local_228);
          if (cVar17 != '\0') {
            local_238 = L"bIsUnixExecutable";
            local_230 = 0x11;
            cVar17 = FUN_140b87380(plVar24,&local_238);
            if (cVar17 != '\0') {
              *(byte *)((longlong)plVar23 + 0x34) = *(byte *)((longlong)plVar23 + 0x34) | 4;
            }
          }
          local_248 = L"bIsReadOnly";
          local_240 = 0xb;
          cVar17 = FUN_1469de206(plVar24,&local_248);
          if (cVar17 != '\0') {
            local_258 = L"bIsReadOnly";
            local_250 = 0xb;
            cVar17 = FUN_140b87380(plVar24,&local_258);
            if (cVar17 != '\0') {
              *(byte *)((longlong)plVar23 + 0x34) = *(byte *)((longlong)plVar23 + 0x34) | 1;
            }
          }
          local_268 = L"bIsCompressed";
          local_260 = 0xd;
          cVar17 = FUN_1469de206(plVar24,&local_268);
          if (cVar17 != '\0') {
            local_278 = L"bIsCompressed";
            local_270 = 0xd;
            cVar17 = FUN_140b87380(plVar24,&local_278);
            if (cVar17 != '\0') {
              *(byte *)((longlong)plVar23 + 0x34) = *(byte *)((longlong)plVar23 + 0x34) | 2;
            }
          }
          local_288 = L"SymlinkTarget";
          local_280 = 0xd;
          cVar17 = FUN_1469de206(plVar24,&local_288);
          if (cVar17 == '\0') {
            FUN_140056680(local_138,&DAT_149dfb77a);
          }
          else {
            local_298 = L"SymlinkTarget";
            local_290 = 0xd;
            FUN_14047df9c(plVar24,local_138);
          }
          plVar24 = local_320;
          if (plVar23 + 2 != (longlong *)local_138) {
            if (plVar23[2] != 0) {
              FUN_1400020a8();
            }
            plVar23[2] = local_138._0_8_;
            *(undefined4 *)(plVar23 + 3) = local_138._8_4_;
            *(uint *)((longlong)plVar23 + 0x1c) = uStack_12c;
            _local_138 = ZEXT816(0);
          }
          if (local_138._0_8_ != 0) {
            FUN_1400020a8();
          }
          FUN_14047c710(local_88,(ulonglong)puStack_80 & 0xffffffff);
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar24 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          lVar31 = (longlong)local_310 + 1;
          iVar20 = local_168._8_4_;
        } while (((byte)uVar19 & (int)lVar31 < (int)local_168._8_4_) != 0);
      }
    }
    FUN_14047c710(local_168._0_8_,iVar20);
    if (local_168._0_8_ != 0) {
      FUN_1400020a8();
    }
    local_330 = (longlong *)CONCAT44(local_330._4_4_,uVar19);
  }
  else {
    local_330 = (longlong *)((ulonglong)local_330 & 0xffffffff00000000);
  }
  if ((longlong)*(int *)(lVar32 + 0x100) != 0) {
    puVar22 = *(undefined8 **)(local_340 + 0xf8);
    puVar27 = puVar22 + (longlong)*(int *)(lVar32 + 0x100) * 0xc;
    lVar32 = local_340 + 0x1b0;
    do {
      iVar20 = *(int *)(puVar22 + 1) + -1;
      if (*(int *)(puVar22 + 1) == 0) {
        iVar20 = 0;
      }
      local_168._8_4_ = iVar20;
      local_168._0_8_ = *puVar22;
      stack0xfffffffffffffed0 = (ulonglong)&local_88;
      local_138._0_8_ = local_168;
      local_88 = puVar22;
      FUN_146b5414c(lVar32,local_218,local_138);
      puVar22 = puVar22 + 0xc;
    } while (puVar22 != puVar27);
  }
  stack0xfffffffffffffea0 = local_c8;
  local_168._0_8_ = 0x100000000;
  local_158 = &DAT_ffffffff;
  local_150 = (ulonglong)local_150._4_4_ << 0x20;
  iVar20 = 0;
  if (local_b0 != 0) {
    FUN_1449c0562(local_168);
    iVar20 = local_b0;
  }
  lVar32 = local_340;
  local_120 = local_158;
  puVar15 = local_120;
  local_118 = local_150;
  local_128 = stack0xfffffffffffffea0;
  stack0xfffffffffffffed0 = local_168._0_8_;
  local_138._0_8_ = local_d8;
  local_120._4_4_ = (int)((ulonglong)local_158 >> 0x20);
  if ((local_120._4_4_ != iVar20) || (stack0xfffffffffffffea0 != local_c8)) {
    plVar23 = (longlong *)(local_340 + 0xe8);
    plVar24 = local_d8;
    iVar37 = local_120._4_4_;
    local_120 = puVar15;
    do {
      puVar22 = (undefined8 *)((longlong)iVar37 * 0x18 + *plVar24);
      iVar37 = *(int *)(lVar32 + 0xf0);
      *(uint *)(lVar32 + 0xf0) = iVar37 + 1U;
      if (*(uint *)(lVar32 + 0xf4) < iVar37 + 1U) {
        FUN_146b55398(plVar23,iVar37);
      }
      lVar31 = *plVar23;
      lVar41 = (longlong)iVar37 * 0x40;
      puVar27 = (undefined8 *)(lVar31 + 0x1d + lVar41);
      *puVar27 = 0;
      puVar27[1] = 0;
      puVar27 = (undefined8 *)(lVar31 + 0x10 + lVar41);
      *puVar27 = 0;
      puVar27[1] = 0;
      *(undefined8 *)(lVar31 + lVar41) = 0;
      ((undefined8 *)(lVar31 + lVar41))[1] = 0;
      *(undefined4 *)(lVar31 + 0x30 + lVar41) = 0x100000;
      *(undefined8 *)(lVar31 + 0x38 + lVar41) = 0;
      lVar31 = *plVar23;
      uVar4 = puVar22[1];
      *(undefined8 *)(lVar31 + lVar41) = *puVar22;
      ((undefined8 *)(lVar31 + lVar41))[1] = uVar4;
      local_120 = (undefined1 *)CONCAT44(local_120._4_4_,(uint)local_120 & ~uStack_12c);
      FUN_1449c0562(local_138 + 8);
      plVar24 = (longlong *)local_138._0_8_;
      iVar37 = local_120._4_4_;
      puVar15 = local_120;
    } while ((longlong *)local_138._0_8_ != local_d8 ||
             (local_128 != local_c8 || local_120._4_4_ != iVar20));
  }
  local_120 = puVar15;
  local_118 = 0;
  uStack_110 = 0;
  _local_138 = (undefined1  [16])0x0;
  uStack_10c = 0x80;
  uStack_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = local_f0 & 0xffffffff00000000;
  if ((longlong)*(int *)(lVar32 + 0xf0) != 0) {
    puVar22 = *(undefined8 **)(local_340 + 0xe8);
    lVar32 = (longlong)*(int *)(lVar32 + 0xf0) << 6;
    do {
      stack0xfffffffffffffea0 = (undefined1 *)&local_88;
      local_168._0_8_ = puVar22;
      local_88 = puVar22;
      FUN_146b5541e(local_138,local_218,local_168);
      puVar22 = puVar22 + 8;
      lVar32 = lVar32 + -0x40;
    } while (lVar32 != 0);
  }
  FUN_140056680(local_168,L"ChunkHashList");
  plVar23 = local_338;
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  puVar22 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)(ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    puVar27 = puVar22;
  }
  uVar19 = FUN_144a49b4a(puVar27,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  uVar33 = (ulonglong)local_330;
  if (iVar20 == -1) {
    local_318 = (longlong *)0x0;
  }
  else {
    lVar32 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar32 == 0) {
      puVar22 = (undefined8 *)0x0;
    }
    else {
      puVar22 = *(undefined8 **)(lVar32 + 0x10);
      local_318 = *(longlong **)(lVar32 + 0x18);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_318 + 1) = (int)local_318[1] + 1;
        UNLOCK();
        goto LAB_146b3aab0;
      }
    }
    local_318 = (longlong *)0x0;
  }
LAB_146b3aab0:
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (((byte)uVar33 & puVar22 != (undefined8 *)0x0) == 0) {
    local_330 = (longlong *)((ulonglong)local_330 & 0xffffffff00000000);
    uVar33 = 0;
  }
  else {
    plVar23 = (longlong *)(**(code **)*puVar22)(puVar22);
    lVar32 = *plVar23;
    plVar24 = (longlong *)plVar23[1];
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    puStack_80 = (undefined1 *)(lVar32 + 0x10);
    local_88 = (undefined8 *)&DAT_100000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    if (*(int *)(lVar32 + 0x28) != 0) {
      FUN_1449c0562(&local_88);
    }
    local_150 = local_78;
    uVar26 = local_150;
    local_148 = local_70;
    local_144 = local_6c;
    local_158 = puStack_80;
    stack0xfffffffffffffea0 = (undefined1 *)local_88;
    local_168._0_8_ = lVar32;
    local_150._4_4_ = (uint)(local_78 >> 0x20);
    if ((int)local_150._4_4_ < *(int *)(puStack_80 + 0x18)) {
      local_330 = (longlong *)((ulonglong)local_330._4_4_ << 0x20);
      iVar20 = local_150._4_4_;
      local_150 = uVar26;
      do {
        local_88 = (undefined8 *)0x0;
        puStack_80 = (undefined1 *)0x0;
        local_2a8 = 0;
        cVar17 = FUN_140b10a34((longlong)iVar20 * 0x28 + *(longlong *)local_168._0_8_,&local_88);
        if (cVar17 == '\0') {
LAB_146b3ac4a:
          uVar33 = 0;
        }
        else {
          FUN_14047e026(*(undefined8 *)
                         (*(longlong *)local_168._0_8_ + 0x10 +
                         (longlong)(int)local_150._4_4_ * 0x28),local_218);
          uVar19 = FUN_1467acd1a(local_218,&local_2a8,8);
          if (local_218._0_8_ != 0) {
            FUN_1400020a8();
          }
          if ((char)uVar19 == '\0') goto LAB_146b3ac4a;
          uVar33 = ((ulonglong)
                    ((longlong)local_88 +
                    ((longlong)puStack_80 << 0x1b | (ulonglong)puStack_80 >> 0x25) *
                    -0x651e95c4d06fbf91 + -0x651e95c4d06fbfb1) ^
                   (longlong)
                   (puStack_80 +
                   ((longlong)local_88 + -0x651e95c4d06fbfb1 << 0x27 |
                   (ulonglong)((longlong)local_88 + -0x651e95c4d06fbfb1) >> 0x19)) *
                   -0x651e95c4d06fbf91) * -0x651e95c4d06fbf91;
          lVar32 = (uVar33 >> 0x2f ^
                   (longlong)
                   (puStack_80 +
                   ((longlong)local_88 + -0x651e95c4d06fbfb1 << 0x27 |
                   (ulonglong)((longlong)local_88 + -0x651e95c4d06fbfb1) >> 0x19)) *
                   -0x651e95c4d06fbf91 ^ uVar33) * -0x651e95c4d06fbf91;
          iVar20 = FUN_146b55694(local_138,
                                 ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) * 0x2f90406f,
                                 &local_88);
          uVar35 = (uint7)(uint3)((uint)uVar19 >> 8);
          if (iVar20 == -1) {
            uVar33 = CONCAT71(uVar35,1);
          }
          else {
            lVar32 = *(longlong *)(local_138._0_8_ + 0x10 + (longlong)iVar20 * 0x20);
            *(longlong *)(lVar32 + 0x10) = local_2a8;
            uVar33 = CONCAT71(uVar35,1);
            local_330 = (longlong *)
                        CONCAT44(local_330._4_4_,(int)CONCAT71((int7)((ulonglong)lVar32 >> 8),1));
          }
        }
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_15c);
        FUN_1449c0562(local_168 + 8);
        uVar26 = local_150;
      } while (((int)local_150._4_4_ < *(int *)(local_158 + 0x18)) &&
              (iVar20 = local_150._4_4_, (char)uVar33 != '\0'));
    }
    else {
      uVar33 = CONCAT71((int7)((ulonglong)lVar32 >> 8),1);
      local_330 = (longlong *)((ulonglong)local_330._4_4_ << 0x20);
    }
    local_150 = uVar26;
    plVar23 = local_338;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar25 = plVar24 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
  }
  FUN_140056680(local_168,L"ChunkShaList");
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  puVar22 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)(ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    puVar27 = puVar22;
  }
  uVar19 = FUN_144a49b4a(puVar27,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  if (iVar20 == -1) {
LAB_146b3adb2:
    local_310 = (longlong *)0x0;
  }
  else {
    lVar32 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar32 == 0) {
      puVar22 = (undefined8 *)0x0;
      goto LAB_146b3adb2;
    }
    puVar22 = *(undefined8 **)(lVar32 + 0x10);
    local_310 = *(longlong **)(lVar32 + 0x18);
    if (local_310 == (longlong *)0x0) goto LAB_146b3adb2;
    LOCK();
    *(int *)(local_310 + 1) = (int)local_310[1] + 1;
    UNLOCK();
  }
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (puVar22 != (undefined8 *)0x0) {
    plVar23 = (longlong *)(**(code **)*puVar22)(puVar22);
    lVar32 = *plVar23;
    plVar24 = (longlong *)plVar23[1];
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    puStack_80 = (undefined1 *)(lVar32 + 0x10);
    local_88 = (undefined8 *)&DAT_100000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    if (*(int *)(lVar32 + 0x28) != 0) {
      FUN_1449c0562(&local_88);
    }
    local_150 = local_78;
    uVar26 = local_150;
    local_148 = local_70;
    local_144 = local_6c;
    local_158 = puStack_80;
    stack0xfffffffffffffea0 = (undefined1 *)local_88;
    local_168._0_8_ = lVar32;
    local_150._4_4_ = (uint)(local_78 >> 0x20);
    if (((int)local_150._4_4_ < *(int *)(puStack_80 + 0x18) & (byte)uVar33) == 1) {
      iVar20 = local_150._4_4_;
      local_150 = uVar26;
      do {
        local_218 = ZEXT816(0);
        local_88 = (undefined8 *)0x0;
        puStack_80 = (undefined1 *)0x0;
        local_78 = local_78 & 0xffffffff00000000;
        cVar17 = FUN_140b10a34((longlong)iVar20 * 0x28 + *(longlong *)local_168._0_8_,local_218);
        if (cVar17 == '\0') {
LAB_146b3af9e:
          uVar33 = 0;
        }
        else {
          FUN_14047e026(*(undefined8 *)
                         (*(longlong *)local_168._0_8_ + 0x10 +
                         (longlong)(int)local_150._4_4_ * 0x28),&local_2a8);
          iVar20 = local_2a0;
          if (local_2a0 == 0x29) {
            FUN_1467ad1e7(&local_2a8,&local_88);
          }
          if (local_2a8 != 0) {
            FUN_1400020a8();
          }
          if (iVar20 != 0x29) goto LAB_146b3af9e;
          uVar33 = ((local_218._0_8_ + 0x9ae16a3b2f90404f << 0x27 |
                    local_218._0_8_ + 0x9ae16a3b2f90404f >> 0x19) + local_218._8_8_) *
                   -0x651e95c4d06fbf91;
          uVar26 = ((local_218._8_8_ << 0x1b | (ulonglong)local_218._8_8_ >> 0x25) *
                    -0x651e95c4d06fbf91 + local_218._0_8_ + 0x9ae16a3b2f90404f ^ uVar33) *
                   -0x651e95c4d06fbf91;
          lVar32 = (uVar26 >> 0x2f ^ uVar33 ^ uVar26) * -0x651e95c4d06fbf91;
          iVar20 = FUN_146b55694(local_138,
                                 ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) * 0x2f90406f,
                                 local_218);
          uVar33 = 1;
          if (iVar20 != -1) {
            lVar32 = *(longlong *)(local_138._0_8_ + 0x10 + (longlong)iVar20 * 0x20);
            *(undefined4 *)(lVar32 + 0x28) = (undefined4)local_78;
            *(undefined8 **)(lVar32 + 0x18) = local_88;
            *(undefined1 **)(lVar32 + 0x20) = puStack_80;
          }
        }
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_15c);
        FUN_1449c0562(local_168 + 8);
        uVar26 = local_150;
      } while (((int)local_150._4_4_ < *(int *)(local_158 + 0x18)) &&
              (iVar20 = local_150._4_4_, (char)uVar33 != '\0'));
    }
    local_150 = uVar26;
    plVar23 = local_338;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar25 = plVar24 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
  }
  FUN_140056680(local_168,L"PrereqIds");
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  uVar26 = 0;
  uVar28 = (ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    uVar28 = uVar26;
  }
  uVar19 = FUN_144a49b4a(uVar28,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  lVar32 = local_340;
  if (iVar20 == -1) {
    local_320 = (longlong *)0x0;
  }
  else {
    lVar31 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar31 == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = *(ulonglong *)(lVar31 + 0x10);
      local_320 = *(longlong **)(lVar31 + 0x18);
      if (local_320 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_320 + 1) = (int)local_320[1] + 1;
        UNLOCK();
        goto LAB_146b3b0c0;
      }
    }
    local_320 = (longlong *)0x0;
  }
LAB_146b3b0c0:
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  cVar17 = (char)uVar33;
  if ((cVar17 == '\0') || (uVar26 == 0)) {
    local_88 = (undefined8 *)0x0;
    uVar21 = *(uint *)(lVar32 + 0xc0);
    _Src = *(void **)(lVar32 + 0xb8);
    puStack_80 = (undefined1 *)CONCAT44(puStack_80._4_4_,uVar21);
    if ((longlong)(int)uVar21 == 0) {
      puStack_80 = (undefined1 *)(ulonglong)uVar21;
    }
    else {
      FUN_1446dd670(&local_88,uVar21,0);
      memcpy(local_88,_Src,(longlong)(int)uVar21 * 2);
    }
    FUN_1448097c4(&local_88,&DAT_149e01f64,&DAT_149e065c6,1);
    plVar24 = (longlong *)(local_340 + 0x1b0);
    iVar20 = (int)puStack_80 + -1;
    if ((int)puStack_80 == 0) {
      iVar20 = 0;
    }
    local_168._8_4_ = iVar20;
    local_168._0_8_ = local_88;
    uVar19 = FUN_144a49b4a();
    iVar20 = FUN_146b4bb82(plVar24,uVar19,local_168);
    puVar22 = local_88;
    if ((iVar20 != -1) &&
       (lVar32 = (longlong)iVar20 * 0x20 + *plVar24, plVar24 = (longlong *)(lVar32 + 0x10),
       plVar24 != (longlong *)0x0 && lVar32 != 0)) {
      lVar32 = *plVar24;
      local_158 = (undefined1 *)
                  CONCAT44((int)((ulonglong)local_158 >> 0x20),*(undefined4 *)(lVar32 + 0x30));
      in_XMM1 = *(undefined1 (*) [16])(lVar32 + 0x20);
      lVar32 = local_340 + 0x58;
      local_218 = (undefined1  [16])0x0;
      _local_168 = in_XMM1;
      FUN_1407c8a86(local_168,0x14,local_218);
      FUN_140e830ae(lVar32,&local_2a8,local_218,0);
      puVar22 = local_88;
      if (local_218._0_8_ != 0) {
        FUN_1400020a8();
        puVar22 = local_88;
      }
    }
  }
  else {
    puVar22 = (undefined8 *)FUN_140482996(uVar26);
    iVar20 = *(int *)(puVar22 + 1);
    uVar4 = *puVar22;
    auVar13._4_4_ = uStack_15c;
    auVar13._0_4_ = iVar20;
    auVar13._8_8_ = 0;
    _local_168 = auVar13 << 0x40;
    if (iVar20 == 0) {
      _local_168 = ZEXT416(0) << 0x40;
      puVar22 = (undefined8 *)0x0;
      uVar19 = 0;
    }
    else {
      FUN_14047d15e(local_168,iVar20,0);
      FUN_14047cdb6(local_168._0_8_,uVar4,iVar20);
      puVar22 = (undefined8 *)local_168._0_8_;
      uVar19 = 0;
      if ((longlong)(int)local_168._8_4_ != 0) {
        puVar27 = (undefined8 *)(local_168._0_8_ + (longlong)(int)local_168._8_4_ * 2 * 8);
        lVar32 = local_340 + 0x58;
        do {
          uVar4 = *puVar22;
          plVar24 = (longlong *)puVar22[1];
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
            UNLOCK();
          }
          FUN_14047e026(uVar4,&local_88);
          FUN_140e830ae(lVar32,local_218,&local_88,0);
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            plVar25 = plVar24 + 1;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)*plVar25 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar1 = (int *)((longlong)plVar24 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          puVar22 = puVar22 + 2;
        } while (puVar22 != puVar27);
        puVar22 = (undefined8 *)local_168._0_8_;
        uVar19 = local_168._8_4_;
      }
    }
    FUN_14047c710(puVar22,uVar19);
    puVar22 = (undefined8 *)local_168._0_8_;
  }
  if (puVar22 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_168,L"DataGroupList");
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  puVar22 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)(ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    puVar27 = puVar22;
  }
  uVar19 = FUN_144a49b4a(puVar27,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  if (iVar20 == -1) {
LAB_146b3bf08:
    local_328 = (longlong *)0x0;
  }
  else {
    lVar32 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar32 == 0) {
      puVar22 = (undefined8 *)0x0;
      goto LAB_146b3bf08;
    }
    puVar22 = *(undefined8 **)(lVar32 + 0x10);
    local_328 = *(longlong **)(lVar32 + 0x18);
    if (local_328 == (longlong *)0x0) goto LAB_146b3bf08;
    LOCK();
    *(int *)(local_328 + 1) = (int)local_328[1] + 1;
    UNLOCK();
  }
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (puVar22 == (undefined8 *)0x0) {
    if ((cVar17 != '\0') && ((longlong)*(int *)(local_340 + 0xf0) != 0)) {
      lVar32 = *(longlong *)(local_340 + 0xe8);
      lVar31 = (longlong)*(int *)(local_340 + 0xf0) * 0x40 + lVar32;
      do {
        uVar21 = FUN_1448eb174(lVar32,0x10,0);
        *(char *)(lVar32 + 0x2c) = (char)uVar21 + (char)(uVar21 / 100) * -100;
        lVar32 = lVar32 + 0x40;
      } while (lVar32 != lVar31);
    }
  }
  else {
    plVar23 = (longlong *)(**(code **)*puVar22)(puVar22);
    lVar32 = *plVar23;
    plVar24 = (longlong *)plVar23[1];
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    puStack_80 = (undefined1 *)(lVar32 + 0x10);
    local_88 = (undefined8 *)&DAT_100000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    if (*(int *)(lVar32 + 0x28) != 0) {
      FUN_1449c0562(&local_88);
    }
    local_150 = local_78;
    uVar26 = local_150;
    local_148 = local_70;
    local_144 = local_6c;
    local_158 = puStack_80;
    stack0xfffffffffffffea0 = (undefined1 *)local_88;
    local_168._0_8_ = lVar32;
    local_150._4_4_ = (uint)(local_78 >> 0x20);
    if ((int)local_150._4_4_ < *(int *)(puStack_80 + 0x18) && cVar17 == '\x01') {
      iVar20 = local_150._4_4_;
      local_150 = uVar26;
      do {
        local_88 = (undefined8 *)0x0;
        puStack_80 = (undefined1 *)0x0;
        local_2a8 = CONCAT71(local_2a8._1_7_,0xff);
        cVar17 = FUN_140b10a34((longlong)iVar20 * 0x28 + *(longlong *)local_168._0_8_,&local_88);
        if (cVar17 == '\0') {
LAB_146b3c11d:
          uVar33 = 0;
        }
        else {
          FUN_14047e026(*(undefined8 *)
                         (*(longlong *)local_168._0_8_ + 0x10 +
                         (longlong)(int)local_150._4_4_ * 0x28),local_218);
          uVar19 = FUN_1467acd1a(local_218,&local_2a8,1);
          if (local_218._0_8_ != 0) {
            FUN_1400020a8();
          }
          if ((char)uVar19 == '\0') goto LAB_146b3c11d;
          uVar33 = ((ulonglong)
                    ((longlong)local_88 +
                    ((longlong)puStack_80 << 0x1b | (ulonglong)puStack_80 >> 0x25) *
                    -0x651e95c4d06fbf91 + -0x651e95c4d06fbfb1) ^
                   (longlong)
                   (puStack_80 +
                   ((longlong)local_88 + -0x651e95c4d06fbfb1 << 0x27 |
                   (ulonglong)((longlong)local_88 + -0x651e95c4d06fbfb1) >> 0x19)) *
                   -0x651e95c4d06fbf91) * -0x651e95c4d06fbf91;
          lVar32 = (uVar33 >> 0x2f ^
                   (longlong)
                   (puStack_80 +
                   ((longlong)local_88 + -0x651e95c4d06fbfb1 << 0x27 |
                   (ulonglong)((longlong)local_88 + -0x651e95c4d06fbfb1) >> 0x19)) *
                   -0x651e95c4d06fbf91 ^ uVar33) * -0x651e95c4d06fbf91;
          iVar20 = FUN_146b55694(local_138,
                                 ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) * 0x2f90406f,
                                 &local_88);
          uVar33 = CONCAT71((uint7)(uint3)((uint)uVar19 >> 8),1);
          if (iVar20 != -1) {
            *(undefined1 *)(*(longlong *)(local_138._0_8_ + 0x10 + (longlong)iVar20 * 0x20) + 0x2c)
                 = (undefined1)local_2a8;
          }
        }
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_15c);
        FUN_1449c0562(local_168 + 8);
        uVar26 = local_150;
      } while (((int)local_150._4_4_ < *(int *)(local_158 + 0x18)) &&
              (iVar20 = local_150._4_4_, (char)uVar33 != '\0'));
    }
    local_150 = uVar26;
    plVar23 = local_338;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar25 = plVar24 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
  }
  FUN_140056680(local_168,L"ChunkFilesizeList");
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  puVar22 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)(ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    puVar27 = puVar22;
  }
  uVar19 = FUN_144a49b4a(puVar27,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  lVar32 = local_340;
  if (iVar20 == -1) {
    local_308 = (longlong *)0x0;
  }
  else {
    lVar31 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar31 == 0) {
      puVar22 = (undefined8 *)0x0;
    }
    else {
      puVar22 = *(undefined8 **)(lVar31 + 0x10);
      local_308 = *(longlong **)(lVar31 + 0x18);
      if (local_308 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_308 + 1) = (int)local_308[1] + 1;
        UNLOCK();
        goto LAB_146b3c267;
      }
    }
    local_308 = (longlong *)0x0;
  }
LAB_146b3c267:
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (puVar22 == (undefined8 *)0x0) {
LAB_146b3c282:
    auVar9 = _DAT_149931e80;
    if ((longlong)*(int *)(lVar32 + 0xf0) != 0) {
      uVar26 = (longlong)*(int *)(lVar32 + 0xf0) + 0x3ffffffffffffff;
      uVar28 = uVar26 & 0x3ffffffffffffff;
      auVar44._8_4_ = (int)uVar28;
      auVar44._0_8_ = uVar28;
      auVar44._12_4_ = (int)(uVar28 >> 0x20);
      puVar22 = (undefined8 *)(*(longlong *)(lVar32 + 0xe8) + 0x78);
      uVar29 = 0;
      auVar45 = pmovsxbq(in_XMM1,0x100);
      auVar44 = auVar44 | _DAT_149931e80;
      do {
        if ((bool)(~(auVar44._0_8_ < (longlong)(uVar29 ^ auVar9._0_8_)) & 1)) {
          puVar22[-8] = 0x100000;
        }
        auVar46._8_4_ = (int)uVar29;
        auVar46._0_8_ = uVar29;
        auVar46._12_4_ = (int)(uVar29 >> 0x20);
        if ((longlong)((auVar46._8_8_ | auVar45._8_8_) ^ auVar9._8_8_) <= auVar44._8_8_) {
          *puVar22 = 0x100000;
        }
        uVar29 = uVar29 + 2;
        puVar22 = puVar22 + 0x10;
      } while ((uVar28 - ((uint)uVar26 & 1)) + 2 != uVar29);
    }
  }
  else {
    plVar23 = (longlong *)(**(code **)*puVar22)(puVar22);
    lVar32 = *plVar23;
    plVar23 = (longlong *)plVar23[1];
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
    }
    puStack_80 = (undefined1 *)(lVar32 + 0x10);
    local_88 = (undefined8 *)&DAT_100000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    if (*(int *)(lVar32 + 0x28) != 0) {
      FUN_1449c0562(&local_88);
    }
    local_150 = local_78;
    uVar26 = local_150;
    local_148 = local_70;
    local_144 = local_6c;
    local_158 = puStack_80;
    stack0xfffffffffffffea0 = (undefined1 *)local_88;
    local_168._0_8_ = lVar32;
    local_150._4_4_ = (uint)(local_78 >> 0x20);
    local_150 = uVar26;
    if ((int)local_150._4_4_ < *(int *)(puStack_80 + 0x18)) {
      bVar43 = false;
      iVar20 = local_150._4_4_;
      do {
        local_88 = (undefined8 *)0x0;
        puStack_80 = (undefined1 *)0x0;
        local_2a8 = 0;
        cVar17 = FUN_140b10a34((longlong)iVar20 * 0x28 + *(longlong *)local_168._0_8_,&local_88);
        if (cVar17 != '\0') {
          FUN_14047e026(*(undefined8 *)
                         (*(longlong *)local_168._0_8_ + 0x10 +
                         (longlong)(int)local_150._4_4_ * 0x28),local_218);
          FUN_1467acd1a(local_218,&local_2a8,8);
          if (local_218._0_8_ != 0) {
            FUN_1400020a8();
          }
          uVar26 = ((ulonglong)
                    ((longlong)local_88 +
                    ((longlong)puStack_80 << 0x1b | (ulonglong)puStack_80 >> 0x25) *
                    -0x651e95c4d06fbf91 + -0x651e95c4d06fbfb1) ^
                   (longlong)
                   (puStack_80 +
                   ((longlong)local_88 + -0x651e95c4d06fbfb1 << 0x27 |
                   (ulonglong)((longlong)local_88 + -0x651e95c4d06fbfb1) >> 0x19)) *
                   -0x651e95c4d06fbf91) * -0x651e95c4d06fbf91;
          lVar32 = (uVar26 >> 0x2f ^
                   (longlong)
                   (puStack_80 +
                   ((longlong)local_88 + -0x651e95c4d06fbfb1 << 0x27 |
                   (ulonglong)((longlong)local_88 + -0x651e95c4d06fbfb1) >> 0x19)) *
                   -0x651e95c4d06fbf91 ^ uVar26) * -0x651e95c4d06fbf91;
          iVar20 = FUN_146b55694(local_138,
                                 ((uint)((ulonglong)lVar32 >> 0x2f) ^ (uint)lVar32) * 0x2f90406f,
                                 &local_88);
          if (iVar20 != -1) {
            *(longlong *)(*(longlong *)(local_138._0_8_ + 0x10 + (longlong)iVar20 * 0x20) + 0x38) =
                 local_2a8;
            bVar43 = true;
          }
        }
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_15c);
        FUN_1449c0562(local_168 + 8);
        iVar20 = local_150._4_4_;
      } while ((int)local_150._4_4_ < *(int *)(local_158 + 0x18));
    }
    else {
      bVar43 = false;
    }
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar24 = plVar23 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
    lVar32 = local_340;
    plVar23 = local_338;
    if (!bVar43) goto LAB_146b3c282;
  }
  FUN_140056680(local_168,L"bIsFileData");
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  uVar26 = 0;
  uVar28 = (ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    uVar28 = uVar26;
  }
  uVar19 = FUN_144a49b4a(uVar28,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  lVar32 = local_340;
  if (iVar20 == -1) {
    local_338 = (longlong *)0x0;
  }
  else {
    lVar31 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar31 == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = *(ulonglong *)(lVar31 + 0x10);
      local_338 = *(longlong **)(lVar31 + 0x18);
      if (local_338 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_338 + 1) = (int)local_338[1] + 1;
        UNLOCK();
        goto LAB_146b3c606;
      }
    }
    local_338 = (longlong *)0x0;
  }
LAB_146b3c606:
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((uVar26 == 0) || (*(int *)(uVar26 + 8) != 4)) {
    *(byte *)(lVar32 + 0xc) = ~(byte)local_330 & 1;
  }
  else {
    uVar18 = FUN_140b87404(uVar26);
    *(undefined1 *)(lVar32 + 0xc) = uVar18;
  }
  FUN_140056680(local_168,L"CustomFields");
  if (local_168._8_4_ == 0) {
    puVar30 = &DAT_149dfb77a;
  }
  else {
    puVar30 = (undefined2 *)local_168._0_8_;
  }
  puVar22 = (undefined8 *)0x0;
  puVar27 = (undefined8 *)(ulonglong)(local_168._8_4_ - 1);
  if (local_168._8_4_ == 0) {
    puVar27 = puVar22;
  }
  uVar19 = FUN_144a49b4a(puVar27,puVar30);
  iVar20 = FUN_14047c88e(plVar23,uVar19,local_168);
  if (iVar20 == -1) {
LAB_146b3c6b7:
    local_330 = (longlong *)0x0;
  }
  else {
    lVar31 = (longlong)iVar20 * 0x28 + *plVar23;
    if (lVar31 == 0) {
      puVar22 = (undefined8 *)0x0;
      goto LAB_146b3c6b7;
    }
    puVar22 = *(undefined8 **)(lVar31 + 0x10);
    local_330 = *(longlong **)(lVar31 + 0x18);
    if (local_330 == (longlong *)0x0) goto LAB_146b3c6b7;
    LOCK();
    *(int *)(local_330 + 1) = (int)local_330[1] + 1;
    UNLOCK();
  }
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (puVar22 != (undefined8 *)0x0) {
    plVar23 = (longlong *)(**(code **)*puVar22)(puVar22);
    lVar32 = *plVar23;
    plVar23 = (longlong *)plVar23[1];
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
    }
    puStack_80 = (undefined1 *)(lVar32 + 0x10);
    local_88 = (undefined8 *)&DAT_100000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    if (*(int *)(lVar32 + 0x28) != 0) {
      FUN_1449c0562(&local_88);
    }
    local_150 = local_78;
    uVar26 = local_150;
    local_148 = local_70;
    local_144 = local_6c;
    local_158 = puStack_80;
    stack0xfffffffffffffea0 = (undefined1 *)local_88;
    local_168._0_8_ = lVar32;
    local_150._4_4_ = (uint)(local_78 >> 0x20);
    if (((int)local_150._4_4_ < *(int *)(puStack_80 + 0x18)) && ((char)uVar33 != '\0')) {
      lVar32 = local_340 + 0x108;
      iVar20 = local_150._4_4_;
      local_150 = uVar26;
      do {
        FUN_14047e026(*(undefined8 *)(*(longlong *)local_168._0_8_ + 0x10 + (longlong)iVar20 * 0x28)
                      ,local_218);
        local_88 = (undefined8 *)
                   ((longlong)(int)local_150._4_4_ * 0x28 + *(longlong *)local_168._0_8_);
        puStack_80 = local_218;
        FUN_140dbdf0c(lVar32,&local_2a8,&local_88,0);
        if (local_218._0_8_ != 0) {
          FUN_1400020a8();
        }
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_15c);
        FUN_1449c0562(local_168 + 8);
        iVar20 = local_150._4_4_;
        uVar26 = local_150;
      } while ((int)local_150._4_4_ < *(int *)(local_158 + 0x18));
    }
    local_150 = uVar26;
    lVar32 = local_340;
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar24 = plVar23 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
  }
  if ((*(char *)(lVar32 + 0xc) == '\x01') && ((longlong)*(int *)(lVar32 + 0x100) != 0)) {
    puVar22 = *(undefined8 **)(lVar32 + 0xf8);
    lVar31 = lVar32 + 0x160;
    lVar41 = (longlong)*(int *)(lVar32 + 0x100) * 0x60;
    do {
      if (*(int *)(puVar22 + 10) == 1) {
        uVar4 = puVar22[9];
        stack0xfffffffffffffea0 = (undefined1 *)&local_88;
        local_168._0_8_ = uVar4;
        local_88 = puVar22;
        FUN_146b54432(lVar31,local_218,local_168);
        uVar19 = FUN_1447addd0(uVar4,0x10);
        iVar20 = FUN_146b55694(local_138,uVar19,uVar4);
        lVar32 = local_340;
        if (iVar20 != -1) {
          lVar42 = *(longlong *)(local_138._0_8_ + 0x10 + (longlong)iVar20 * 0x20);
          *(undefined8 *)(lVar42 + 0x38) = puVar22[0xb];
          uVar4 = puVar22[5];
          *(undefined8 *)(lVar42 + 0x18) = puVar22[4];
          *(undefined8 *)(lVar42 + 0x20) = uVar4;
          *(undefined4 *)(lVar42 + 0x28) = *(undefined4 *)(puVar22 + 6);
        }
      }
      else {
        uVar33 = 0;
      }
      puVar22 = puVar22 + 0xc;
      lVar41 = lVar41 + -0x60;
    } while (lVar41 != 0);
  }
  FUN_146b3d180(local_168,local_2d8);
  plVar40 = local_2b0;
  plVar34 = local_2b8;
  plVar39 = local_2c0;
  plVar25 = local_2c8;
  plVar24 = local_2d0;
  plVar23 = local_2e0;
  if ((undefined1 *)(lVar32 + 0xd8) == local_168) {
    bVar43 = local_168._0_8_ != 0;
    if (bVar43) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar32 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    auVar9 = _local_168;
    *(undefined8 *)(local_340 + 0xd8) = local_168._0_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = stack0xfffffffffffffea0;
    _local_168 = auVar8 << 0x40;
    auVar45 = _local_168;
    local_168._8_4_ = auVar9._8_4_;
    *(undefined4 *)(local_340 + 0xe0) = local_168._8_4_;
    uStack_15c = auVar9._12_4_;
    *(uint *)(local_340 + 0xe4) = uStack_15c;
    _local_168 = auVar45;
  }
  FUN_146b5b6ce(lVar32 + 0xf8);
  lVar32 = local_340;
  *(undefined1 *)(local_340 + 0x2b0) = 1;
  FUN_146b377ca(local_340);
  if ((uVar33 & 1) == 0) {
    FUN_146b37c04(lVar32);
  }
  plVar3 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_330 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_2e8;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_338 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar1 = (int *)((longlong)local_338 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_338 + 0x10))();
      }
    }
  }
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_308 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar1 = (int *)((longlong)local_308 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_308 + 0x10))();
      }
    }
  }
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_328 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar1 = (int *)((longlong)local_328 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_328 + 0x10))();
      }
    }
  }
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_320 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar1 = (int *)((longlong)local_320 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_320 + 0x10))();
      }
    }
  }
  if (local_310 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_310 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar1 = (int *)((longlong)local_310 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_310 + 0x10))();
      }
    }
  }
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_318 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_318)(local_318);
      LOCK();
      piVar1 = (int *)((longlong)local_318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_318 + 0x10))();
      }
    }
  }
  local_f0 = local_f0 & 0xffffffff00000000;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b4999c(local_138);
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
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_300 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_300 + 0x10))();
      }
    }
  }
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar1 = (int *)((longlong)local_2f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f8 + 0x10))();
      }
    }
  }
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar1 = (int *)((longlong)local_2f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f0 + 0x10))();
      }
    }
  }
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar23 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar24 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
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
  if (plVar39 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar39 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar39)(plVar39);
      LOCK();
      piVar1 = (int *)((longlong)plVar39 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar39 + 0x10))(plVar39);
      }
    }
  }
  if (plVar34 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar34 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar34)(plVar34);
      LOCK();
      piVar1 = (int *)((longlong)plVar34 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
      }
    }
  }
  if (plVar40 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar40 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar40)(plVar40);
      LOCK();
      piVar1 = (int *)((longlong)plVar40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar40 + 0x10))(plVar40);
      }
    }
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_d8);
LAB_146b39d7a:
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar23 = local_180 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)local_180 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_180 + 0x10))(local_180);
      }
    }
  }
  plVar23 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_170 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar33 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3d0f4 FUN_146b3d0f4 body=87 status=ok
// SIG undefined FUN_146b3d0f4(void)

void FUN_146b3d0f4(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
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



// FUNCTION 146b3d14c FUN_146b3d14c body=18 status=ok
// SIG undefined FUN_146b3d14c(void)

undefined8 * FUN_146b3d14c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 146b3d15e FUN_146b3d15e body=33 status=ok
// SIG undefined FUN_146b3d15e(void)

undefined8 * FUN_146b3d15e(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0x100000;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 146b3d180 FUN_146b3d180 body=844 status=ok
// SIG undefined FUN_146b3d180(void)

undefined8 FUN_146b3d180(undefined8 param_1,longlong param_2)

{
  size_t sVar1;
  wchar_t *pwVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [128];
  longlong local_2a8;
  undefined8 local_2a0;
  int local_298;
  undefined1 local_290 [128];
  longlong local_210;
  undefined8 local_208;
  int local_200;
  undefined1 local_1f8 [128];
  longlong local_178;
  undefined8 local_170;
  int local_168;
  undefined1 local_160 [128];
  longlong local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_b0 = 0xefcdab8967452301;
  uStack_a8 = 0x1032547698badcfe;
  local_a0 = 0xc3d2e1f0;
  local_98 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  FUN_140c54e34(&local_b0,param_2 + 8,4);
  if (*(int *)(param_2 + 0x18) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)(param_2 + 0x10);
  }
  local_e0 = 0;
  if (pwVar2 == (wchar_t *)0x0) {
    local_d8 = 0;
    local_d0 = 0;
  }
  else {
    sVar1 = wcslen(pwVar2);
    FUN_1446fe5a4(local_160,pwVar2,sVar1 & 0xffffffff,1);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)(param_2 + 0x20);
  }
  local_178 = 0;
  if (pwVar2 == (wchar_t *)0x0) {
    local_170 = 0;
    local_168 = 0;
  }
  else {
    sVar1 = wcslen(pwVar2);
    FUN_1446fe5a4(local_1f8,pwVar2,sVar1 & 0xffffffff,1);
  }
  if (*(int *)(param_2 + 0x38) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)(param_2 + 0x30);
  }
  local_210 = 0;
  if (pwVar2 == (wchar_t *)0x0) {
    local_208 = 0;
    local_200 = 0;
  }
  else {
    sVar1 = wcslen(pwVar2);
    FUN_1446fe5a4(local_290,pwVar2,sVar1 & 0xffffffff,1);
  }
  if (*(int *)(param_2 + 0x48) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = *(wchar_t **)(param_2 + 0x40);
  }
  local_2a8 = 0;
  if (pwVar2 == (wchar_t *)0x0) {
    local_2a0 = 0;
    local_298 = 0;
  }
  else {
    sVar1 = wcslen(pwVar2);
    FUN_1446fe5a4(local_328,pwVar2,sVar1 & 0xffffffff,1);
  }
  FUN_140c54e34(&local_b0,local_d8,(longlong)local_d0);
  FUN_140c54e34(&local_b0,local_170,(longlong)local_168);
  FUN_140c54e34(&local_b0,local_208,(longlong)local_200);
  FUN_140c54e34(&local_b0,local_2a0,(longlong)local_298);
  FUN_140c54d7a(&local_b0);
  local_b8 = local_3c;
  FUN_1468028f2(param_1,&local_c8,0x14,0);
  FUN_1448097c4(param_1,&DAT_149e06124,&DAT_149e1419a,0);
  FUN_1448097c4(param_1,&DAT_149e065c6,&DAT_149e01f60,0);
  FUN_1448097c4(param_1,&DAT_149e06162,&DAT_149dfb77a,0);
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  if (local_210 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3d4d2 FUN_146b3d4d2 body=340 status=ok
// SIG undefined FUN_146b3d4d2(void)

void FUN_146b3d4d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar3 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar3) || (uStack_60 != plVar1)) {
    do {
      lVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,(longlong)iStack_74 * 0x18 + *local_90);
      if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x50) != 0)) {
        lVar4 = *(longlong *)(lVar2 + 0x48);
        lVar2 = (longlong)*(int *)(lVar2 + 0x50) * 0x18;
        do {
          FUN_1457adc9c(param_3,&local_68,lVar4,0);
          lVar4 = lVar4 + 0x18;
          lVar2 = lVar2 + -0x18;
        } while (lVar2 != 0);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar3));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3d630 FUN_146b3d630 body=787 status=ok
// SIG undefined FUN_146b3d630(void)

longlong FUN_146b3d630(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  char local_e1;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_78 = 0;
  iVar10 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar12 = param_2 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = plVar12;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar10 = (int)param_2[5];
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_2;
  if ((iStack_a4 == iVar10) && (local_b0 == plVar12)) {
    local_50 = 0;
    lVar6 = 0;
  }
  else {
    local_f8 = (longlong *)(param_1 + 0x200);
    local_100 = (longlong *)(param_1 + 0x250);
    local_110 = 0;
    local_f0 = param_2;
    do {
      plVar1 = local_f8;
      lVar6 = *local_e0;
      lVar5 = (longlong)iStack_c4;
      iVar4 = *(int *)(lVar6 + 8 + lVar5 * 0x18);
      puVar9 = &DAT_149dfb77a;
      if (iVar4 != 0) {
        puVar9 = *(undefined2 **)(lVar6 + lVar5 * 0x18);
      }
      iVar2 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar2 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar2,puVar9);
      iVar4 = FUN_146b54816(plVar1,uVar3,lVar6 + lVar5 * 0x18);
      if (iVar4 != -1) {
        lVar6 = *plVar1;
        if ((lVar6 + (longlong)iVar4 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar6 = lVar6 + (longlong)iVar4 * 0x28;
          lVar5 = (longlong)*(int *)(lVar6 + 0x18);
          if (lVar5 != 0) {
            plVar11 = *(longlong **)(lVar6 + 0x10);
            plVar1 = plVar11 + lVar5;
            local_108 = plVar12;
            do {
              lVar6 = (longlong)*(int *)(*plVar11 + 0x50);
              if (lVar6 != 0) {
                lVar5 = *(longlong *)(*plVar11 + 0x48);
                lVar6 = lVar6 * 0x18;
                do {
                  FUN_1457adc9c(&local_98,&local_b8,lVar5,&local_e1);
                  if (local_e1 == '\0') {
                    uVar3 = FUN_1447addd0(lVar5,0x10);
                    plVar8 = local_100;
                    iVar4 = FUN_146b550d8(local_100,uVar3,lVar5);
                    plVar12 = local_108;
                    if ((iVar4 != -1) &&
                       (lVar7 = (longlong)iVar4 * 0x20 + *plVar8,
                       plVar8 = (longlong *)(lVar7 + 0x10), plVar8 != (longlong *)0x0 && lVar7 != 0)
                       ) {
                      local_110 = local_110 + *(longlong *)(*plVar8 + 0x38);
                    }
                  }
                  lVar5 = lVar5 + 0x18;
                  lVar6 = lVar6 + -0x18;
                } while (lVar6 != 0);
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar1);
          }
        }
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_f0 || (local_d0 != plVar12 || iStack_c4 != iVar10));
    local_50 = 0;
    lVar6 = local_110;
    if (local_58 != 0) {
      FUN_1400020a8();
      lVar6 = local_110;
    }
  }
  FUN_140149fc2(&local_98);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 146b3d952 FUN_146b3d952 body=1329 status=ok
// SIG undefined FUN_146b3d952(void)

undefined8
FUN_146b3d952(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_378 [40];
  longlong *local_350;
  longlong local_348 [2];
  undefined1 local_338 [64];
  longlong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  longlong local_2a8;
  undefined4 local_2a0;
  longlong *local_298;
  longlong *plStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1410b2022();
  plVar3 = (longlong *)*param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_1410b2022(&local_108,param_4);
  if ((int)uStack_b0 == local_84) {
    (**(code **)(*param_1 + 0xc0))(param_1,&local_b8);
  }
  local_350 = plVar4;
  if ((int)uStack_100 == local_d4) {
    (**(code **)(*plVar3 + 0xc0))(plVar3,&local_108);
  }
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1cc = 0xffffffff00000080;
  local_1c4 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  (**(code **)(*plVar3 + 0x1d0))(plVar3,&local_108,&local_158);
  (**(code **)(*plVar3 + 0x188))(plVar3,&local_158,&local_1a8);
  (**(code **)(*plVar3 + 0x228))(plVar3,&local_108,&local_1a8,&local_1f8);
  plVar4 = local_350;
  local_348[0] = 0;
  local_348[1] = 0;
  local_228 = 0;
  local_220 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_21c = 0xffffffff00000080;
  local_214 = 0;
  local_208 = 0;
  local_200 = 0;
  plStack_290 = local_350;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_350 + 1) = (int)local_350[1] + 1;
    UNLOCK();
  }
  local_298 = plVar3;
  (**(code **)(*param_1 + 0x140))(param_1,&local_298,local_348,&local_248);
  plVar3 = plStack_290;
  if (plStack_290 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_290 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_290)(plStack_290);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_278 = 0;
  local_270 = 0;
  local_298 = (longlong *)0x0;
  plStack_290 = (longlong *)0x0;
  local_26c = 0xffffffff00000080;
  local_264 = 0;
  local_258 = 0;
  local_250 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2bc = 0xffffffff00000080;
  local_2b4 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  (**(code **)(*param_1 + 0x1d0))(param_1,&local_b8,&local_298);
  FUN_146b3de84(&local_248,local_338,&local_298);
  FUN_146b3e088(&local_298,local_338);
  local_2f0 = 0;
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_338);
  (**(code **)(*param_1 + 0x188))(param_1,&local_298,&local_2e8);
  FUN_1461c8dd4(&local_2e8,local_338,&local_1f8);
  FUN_14681b5ea(&local_2e8,local_338);
  local_2f0 = 0;
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_338);
  uVar5 = (**(code **)(*param_1 + 0x198))(param_1,&local_2e8);
  local_2a0 = 0;
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_2e8);
  local_250 = 0;
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_298);
  local_200 = 0;
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_248);
  if (local_348[0] != 0) {
    FUN_1400020a8();
  }
  local_1b0 = 0;
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_1f8);
  local_160 = 0;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_1a8);
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_158);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_108);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3de84 FUN_146b3de84 body=513 status=ok
// SIG undefined FUN_146b3de84(void)

undefined8 * FUN_146b3de84(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = param_3;
  if ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1;
    param_1 = param_3;
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_140e83416(param_2,uVar7);
    iVar3 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar3)) {
      *(int *)(param_2 + 9) = iVar3;
      FUN_14482b9e8(param_2);
    }
  }
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if (iStack_4c < (int)local_58[3]) {
    do {
      lVar1 = *local_88;
      lVar4 = (longlong)iStack_6c;
      iVar3 = *(int *)(lVar1 + 8 + lVar4 * 0x18);
      puVar6 = &DAT_149dfb77a;
      if (iVar3 != 0) {
        puVar6 = *(undefined2 **)(lVar1 + lVar4 * 0x18);
      }
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar5,puVar6);
      iVar3 = FUN_1456cf568(plVar8,uVar2,lVar1 + lVar4 * 0x18);
      if (iVar3 != -1) {
        FUN_14482b35e(param_2,&local_60,(longlong)iStack_6c * 0x18 + *local_88,0);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b3e088 FUN_146b3e088 body=93 status=ok
// SIG undefined FUN_146b3e088(void)

longlong FUN_146b3e088(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145aeb624(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146b3e0ee FUN_146b3e0ee body=633 status=ok
// SIG undefined FUN_146b3e0ee(void)

longlong FUN_146b3e0ee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  undefined1 local_e8 [7];
  char local_e1;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  iVar11 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f8 = param_2 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = local_f8;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar11 = (int)param_2[5];
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_2;
  if ((iStack_a4 == iVar11) && (local_b0 == local_f8)) {
    local_50 = 0;
    lVar9 = 0;
  }
  else {
    local_f0 = (longlong *)(param_1 + 0x200);
    lVar9 = 0;
    do {
      plVar4 = local_f0;
      lVar1 = *local_e0;
      lVar7 = (longlong)iStack_c4;
      iVar6 = *(int *)(lVar1 + 8 + lVar7 * 0x18);
      puVar8 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar8 = *(undefined2 **)(lVar1 + lVar7 * 0x18);
      }
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar3,puVar8);
      iVar6 = FUN_146b54816(plVar4,uVar5,lVar1 + lVar7 * 0x18);
      if (iVar6 != -1) {
        lVar1 = *plVar4;
        if ((lVar1 + (longlong)iVar6 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar1 = lVar1 + (longlong)iVar6 * 0x28;
          lVar7 = (longlong)*(int *)(lVar1 + 0x18);
          if (lVar7 != 0) {
            lVar1 = *(longlong *)(lVar1 + 0x10);
            lVar10 = 0;
            do {
              lVar2 = *(longlong *)(lVar1 + lVar10);
              local_b8 = lVar2;
              FUN_146b559ca(&local_98,local_e8,&local_b8,&local_e1);
              if (local_e1 == '\0') {
                lVar9 = lVar9 + *(longlong *)(lVar2 + 0x58);
              }
              lVar10 = lVar10 + 8;
            } while (lVar7 * 8 != lVar10);
          }
        }
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != param_2 || (local_d0 != local_f8 || iStack_c4 != iVar11));
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146b5593c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3e368 FUN_146b3e368 body=32 status=ok
// SIG undefined FUN_146b3e368(void)

undefined8 * FUN_146b3e368(longlong *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x1c8))();
  return param_2;
}



// FUNCTION 146b3e388 FUN_146b3e388 body=32 status=ok
// SIG undefined FUN_146b3e388(void)

undefined8 * FUN_146b3e388(longlong *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x1c0))();
  return param_2;
}



// FUNCTION 146b3e3a8 FUN_146b3e3a8 body=38 status=ok
// SIG undefined FUN_146b3e3a8(void)

undefined8 * FUN_146b3e3a8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x1e0))(0,param_3,param_2);
  return param_2;
}



// FUNCTION 146b3e3ce FUN_146b3e3ce body=38 status=ok
// SIG undefined FUN_146b3e3ce(void)

undefined8 * FUN_146b3e3ce(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x1d8))(0,param_3,param_2);
  return param_2;
}



// FUNCTION 146b3e3f4 FUN_146b3e3f4 body=155 status=ok
// SIG undefined FUN_146b3e3f4(void)

longlong FUN_146b3e3f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_2[1] == 0) {
    lVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)*param_2;
    puVar4 = puVar3 + (longlong)(int)param_2[1] * 2;
    lVar2 = 0;
    do {
      local_48 = *puVar3;
      local_40 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        local_40 = 0;
      }
      lVar1 = (**(code **)(*param_1 + 0xb0))(param_1,&local_48);
      lVar2 = lVar2 + lVar1;
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 146b3e490 FUN_146b3e490 body=319 status=ok
// SIG undefined FUN_146b3e490(void)

longlong FUN_146b3e490(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 == iVar6) && (uStack_60 == plVar1)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      local_68 = *(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x18);
      iVar2 = *(int *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      iVar3 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,iVar3);
      lVar4 = (**(code **)(*param_1 + 0xb0))(param_1,&local_68);
      lVar5 = lVar5 + lVar4;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3e5d0 FUN_146b3e5d0 body=89 status=ok
// SIG undefined FUN_146b3e5d0(void)

undefined8 FUN_146b3e5d0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar2 = FUN_146b4bb82((longlong *)(param_1 + 0x1b0),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x1b0),
     plVar4 = (longlong *)(lVar3 + 0x10), plVar4 == (longlong *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar4 + 0x58);
  }
  return uVar5;
}



// FUNCTION 146b3e62a FUN_146b3e62a body=213 status=ok
// SIG undefined FUN_146b3e62a(void)

undefined8 FUN_146b3e62a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b550d8(param_1 + 0x4a,uVar1,param_2);
  if (iVar2 == -1) {
    uVar3 = 0x100000;
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      iVar2 = FUN_146b546a8(param_1 + 0x2c,uVar1,param_2);
      if (iVar2 == -1) {
        lVar4 = 0;
      }
      else {
        lVar4 = (longlong)iVar2 * 0x20 + param_1[0x2c];
      }
      local_38 = **(undefined8 **)(lVar4 + 0x10);
      iVar2 = *(int *)(*(undefined8 **)(lVar4 + 0x10) + 1);
      local_30 = iVar2 + -1;
      if (iVar2 == 0) {
        local_30 = 0;
      }
      uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1[0x4a] + 0x10 + (longlong)iVar2 * 0x20) + 0x38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3e700 FUN_146b3e700 body=75 status=ok
// SIG undefined FUN_146b3e700(void)

longlong FUN_146b3e700(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_2[1] == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *param_2;
    lVar4 = (longlong)(int)param_2[1] << 4;
    lVar3 = 0;
    do {
      lVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,lVar2);
      lVar3 = lVar3 + lVar1;
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return lVar3;
}



// FUNCTION 146b3e74c FUN_146b3e74c body=280 status=ok
// SIG undefined FUN_146b3e74c(void)

longlong FUN_146b3e74c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 == iVar4) && (uStack_50 == plVar1)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,(longlong)iStack_64 * 0x18 + *local_80);
      lVar3 = lVar3 + lVar2;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3e86e FUN_146b3e86e body=182 status=ok
// SIG undefined FUN_146b3e86e(void)

void FUN_146b3e86e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xf8);
    lVar6 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar5 = *param_2;
      lVar7 = (longlong)iVar3 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar7);
      *(undefined8 *)(lVar5 + lVar7) = 0;
      iVar3 = *(int *)(lVar4 + 8 + lVar6);
      _Src = *(void **)(lVar4 + lVar6);
      *(int *)(lVar5 + 8 + lVar7) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar3,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
      }
      lVar6 = lVar6 + 0x60;
    } while ((longlong)iVar2 * 0x60 != lVar6);
  }
  return;
}



// FUNCTION 146b3e924 FUN_146b3e924 body=133 status=ok
// SIG undefined FUN_146b3e924(void)

void FUN_146b3e924(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0xf8);
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 0x100) * 0xc;
    do {
      uVar2 = *puVar4;
      iVar5 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        iVar5 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146874c22(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar2;
      *(int *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = iVar5;
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != puVar6);
  }
  return;
}



// FUNCTION 146b3e9aa FUN_146b3e9aa body=118 status=ok
// SIG undefined FUN_146b3e9aa(void)

void FUN_146b3e9aa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    lVar2 = (longlong)*(int *)(param_1 + 0x100) * 0x60;
    do {
      FUN_14482b35e(param_2,local_2c,lVar1,0);
      lVar1 = lVar1 + 0x60;
      lVar2 = lVar2 + -0x60;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3ea22 FUN_146b3ea22 body=68 status=ok
// SIG undefined FUN_146b3ea22(void)

undefined8 * FUN_146b3ea22(longlong *param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  (**(code **)(*param_1 + 0xc0))(0,param_2);
  return param_2;
}



// FUNCTION 146b3ea66 FUN_146b3ea66 body=291 status=ok
// SIG undefined FUN_146b3ea66(void)

void FUN_146b3ea66(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x200);
  lVar2 = param_1 + 0x210;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x228) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x228);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      FUN_14482b35e(param_2,&local_58,(longlong)iStack_64 * 0x28 + *local_80,0);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3eb8a FUN_146b3eb8a body=577 status=ok
// SIG undefined FUN_146b3eb8a(void)

void FUN_146b3eb8a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_b0 = param_1;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar8) || (uStack_60 != plVar1)) {
    local_b0 = local_b0 + 0x40;
    local_a4 = iVar8;
    local_a0 = plVar1;
    local_98 = param_2;
    do {
      lVar3 = *local_90;
      lVar9 = (longlong)iStack_74;
      iVar8 = *(int *)(lVar3 + 8 + lVar9 * 0x18);
      puVar10 = &DAT_149dfb77a;
      if (iVar8 != 0) {
        puVar10 = *(undefined2 **)(lVar3 + lVar9 * 0x18);
      }
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = 0;
      }
      uVar7 = FUN_144a49b4a(iVar6,puVar10);
      iVar8 = FUN_146b54816(local_b0,uVar7,lVar3 + lVar9 * 0x18);
      if (iVar8 != -1) {
        if ((*local_b0 + (longlong)iVar8 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar3 = *local_b0 + (longlong)iVar8 * 0x28;
          lVar9 = (longlong)*(int *)(lVar3 + 0x18);
          if (lVar9 != 0) {
            lVar3 = *(longlong *)(lVar3 + 0x10);
            lVar11 = 0;
            do {
              puVar4 = *(undefined8 **)(lVar3 + lVar11);
              iVar8 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                FUN_1447a1bd6(param_3,iVar8);
              }
              lVar5 = *param_3;
              lVar12 = (longlong)iVar8 * 0x10;
              puVar2 = (undefined8 *)(lVar5 + lVar12);
              *(undefined8 *)(lVar5 + lVar12) = 0;
              iVar8 = *(int *)(puVar4 + 1);
              _Src = (void *)*puVar4;
              *(int *)(lVar5 + 8 + lVar12) = iVar8;
              if ((longlong)iVar8 == 0) {
                *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar2,iVar8,0);
                memcpy((void *)*puVar2,_Src,(longlong)iVar8 * 2);
              }
              lVar11 = lVar11 + 8;
            } while (lVar9 * 8 != lVar11);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_98 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_a0 || iStack_74 != local_a4));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b3edcc FUN_146b3edcc body=530 status=ok
// SIG undefined FUN_146b3edcc(void)

void FUN_146b3edcc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  int local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_b0 = param_1;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar7) || (uStack_60 != plVar1)) {
    local_b0 = local_b0 + 0x40;
    local_a4 = iVar7;
    local_a0 = plVar1;
    local_98 = param_2;
    do {
      lVar2 = *local_90;
      lVar8 = (longlong)iStack_74;
      iVar7 = *(int *)(lVar2 + 8 + lVar8 * 0x18);
      puVar9 = &DAT_149dfb77a;
      if (iVar7 != 0) {
        puVar9 = *(undefined2 **)(lVar2 + lVar8 * 0x18);
      }
      iVar10 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar10 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar10,puVar9);
      iVar7 = FUN_146b54816(local_b0,uVar6,lVar2 + lVar8 * 0x18);
      if (iVar7 != -1) {
        if ((*local_b0 + (longlong)iVar7 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar2 = *local_b0 + (longlong)iVar7 * 0x28;
          lVar8 = (longlong)*(int *)(lVar2 + 0x18);
          if (lVar8 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x10);
            lVar11 = 0;
            do {
              puVar3 = *(undefined8 **)(lVar2 + lVar11);
              uVar4 = *puVar3;
              iVar7 = *(int *)(puVar3 + 1);
              iVar10 = iVar7 + -1;
              if (iVar7 == 0) {
                iVar10 = 0;
              }
              iVar7 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
                FUN_146874c22(param_3,iVar7);
              }
              lVar5 = *param_3;
              *(undefined8 *)(lVar5 + (longlong)iVar7 * 0x10) = uVar4;
              *(int *)(lVar5 + 8 + (longlong)iVar7 * 0x10) = iVar10;
              lVar11 = lVar11 + 8;
            } while (lVar8 * 8 != lVar11);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != local_98 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_a0 || iStack_74 != local_a4));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b3efe0 FUN_146b3efe0 body=429 status=ok
// SIG undefined FUN_146b3efe0(void)

void FUN_146b3efe0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_98 = param_1;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar9) || (uStack_60 != plVar1)) {
    local_98 = local_98 + 0x40;
    do {
      lVar2 = *local_90;
      lVar6 = (longlong)iStack_74;
      iVar5 = *(int *)(lVar2 + 8 + lVar6 * 0x18);
      puVar7 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar6 * 0x18);
      }
      iVar3 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar3,puVar7);
      iVar5 = FUN_146b54816(local_98,uVar4,lVar2 + lVar6 * 0x18);
      if (iVar5 != -1) {
        if ((*local_98 + (longlong)iVar5 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar2 = *local_98 + (longlong)iVar5 * 0x28;
          lVar6 = (longlong)*(int *)(lVar2 + 0x18);
          if (lVar6 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x10);
            lVar8 = 0;
            do {
              FUN_14482b35e(param_3,&local_68,*(undefined8 *)(lVar2 + lVar8),0);
              lVar8 = lVar8 + 8;
            } while (lVar6 * 8 != lVar8);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3f18e FUN_146b3f18e body=104 status=ok
// SIG undefined FUN_146b3f18e(void)

void FUN_146b3f18e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0xf0);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xe8);
    lVar9 = 0;
    do {
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_140c60952(param_2,iVar4);
      }
      puVar1 = (undefined4 *)(lVar5 + lVar9);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      lVar9 = lVar9 + 0x40;
    } while ((longlong)iVar3 * 0x40 != lVar9);
  }
  return;
}



// FUNCTION 146b3f1f6 FUN_146b3f1f6 body=114 status=ok
// SIG undefined FUN_146b3f1f6(void)

void FUN_146b3f1f6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xe8);
    lVar2 = (longlong)*(int *)(param_1 + 0xf0) << 6;
    do {
      FUN_1457adc9c(param_2,local_2c,lVar1,0);
      lVar1 = lVar1 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3f26a FUN_146b3f26a body=141 status=ok
// SIG undefined FUN_146b3f26a(void)

undefined8 FUN_146b3f26a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_20 = 0;
  }
  uVar1 = FUN_144a49b4a(local_20,local_28);
  iVar2 = FUN_146b4bb82((longlong *)(param_1 + 0x1b0),uVar1,&local_28);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x1b0),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3f2fc FUN_146b3f2fc body=107 status=ok
// SIG undefined FUN_146b3f2fc(void)

undefined8 FUN_146b3f2fc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b550d8((longlong *)(param_1 + 0x250),uVar1,param_2);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x250);
  }
  plVar4 = (longlong *)(lVar3 + 0x10);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar4 + 0x10);
    *param_3 = lVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),plVar4 != (longlong *)0x0);
}



// FUNCTION 146b3f368 FUN_146b3f368 body=115 status=ok
// SIG undefined FUN_146b3f368(void)

undefined8 FUN_146b3f368(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_146b550d8((longlong *)(param_1 + 0x250),uVar2,param_2);
  if ((iVar3 == -1) ||
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x250),
     plVar5 = (longlong *)(lVar4 + 0x10), plVar5 == (longlong *)0x0 || lVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    lVar4 = *plVar5;
    uVar6 = *(ulonglong *)(lVar4 + 0x20);
    *param_3 = *(ulonglong *)(lVar4 + 0x18);
    param_3[1] = uVar6;
    uVar1 = *(uint *)(lVar4 + 0x28);
    *(uint *)(param_3 + 2) = uVar1;
    uVar6 = (ulonglong)uVar1 | *param_3 | param_3[1];
    uVar7 = CONCAT71((int7)(uVar6 >> 8),uVar6 != 0);
  }
  return uVar7;
}



// FUNCTION 146b3f3dc FUN_146b3f3dc body=87 status=ok
// SIG undefined FUN_146b3f3dc(void)

undefined8 FUN_146b3f3dc(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b550d8((longlong *)(param_1 + 0x250),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x250),
     puVar4 = (undefined8 *)(lVar3 + 0x10), puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 146b3f434 FUN_146b3f434 body=122 status=ok
// SIG undefined FUN_146b3f434(void)

undefined8 FUN_146b3f434(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b546a8(param_1 + 0x2c,uVar1,param_2);
  if ((iVar2 != -1) &&
     (lVar3 = (longlong)iVar2 * 0x20 + param_1[0x2c], puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 != (undefined8 *)0x0 && lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000146b3f4ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0xb8))(param_1,*puVar4,param_3);
    return uVar5;
  }
  return 0;
}



// FUNCTION 146b3f4ae FUN_146b3f4ae body=170 status=ok
// SIG undefined FUN_146b3f4ae(void)

undefined8 FUN_146b3f4ae(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar8 = 0;
  uVar7 = (ulonglong)(*(int *)(param_2 + 1) - 1);
  if (*(int *)(param_2 + 1) == 0) {
    uVar7 = uVar8;
  }
  local_30 = (undefined4)uVar7;
  uVar4 = FUN_144a49b4a(uVar7,local_38);
  iVar5 = FUN_146b4bb82((longlong *)(param_1 + 0x1b0),uVar4,&local_38);
  if (iVar5 != -1) {
    uVar8 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x1b0);
  }
  plVar6 = (longlong *)(uVar8 + 0x10);
  if (uVar8 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *plVar6;
    param_3[4] = *(undefined4 *)(lVar1 + 0x30);
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    uVar2 = *(undefined4 *)(lVar1 + 0x28);
    uVar3 = *(undefined4 *)(lVar1 + 0x2c);
    *param_3 = *(undefined4 *)(lVar1 + 0x20);
    param_3[1] = uVar4;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar6 >> 8),plVar6 != (longlong *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3f55a FUN_146b3f55a body=107 status=ok
// SIG undefined FUN_146b3f55a(void)

undefined8 FUN_146b3f55a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b550d8((longlong *)(param_1 + 0x250),uVar1,param_2);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x250);
  }
  plVar4 = (longlong *)(lVar3 + 0x10);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar4 + 0x10);
    *param_3 = lVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),plVar4 != (longlong *)0x0);
}



// FUNCTION 146b3f608 FUN_146b3f608 body=103 status=ok
// SIG undefined FUN_146b3f608(void)

undefined8 * FUN_146b3f608(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x2b8,0x10);
  FUN_146b3729e(uVar1,param_1);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149f2f9a0;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}


