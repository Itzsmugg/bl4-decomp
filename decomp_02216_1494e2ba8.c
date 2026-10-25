// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1494e2ba8 FUN_1494e2ba8 body=124 status=ok
// SIG undefined FUN_1494e2ba8(void)

int FUN_1494e2ba8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar4 + 8 + lVar5) == *(int *)(param_3 + 1)) {
          cVar2 = FUN_14000b9e1(*(undefined8 *)(lVar4 + lVar5),*param_3);
          if (cVar2 != '\0') {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        iVar1 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1494e2c24 FUN_1494e2c24 body=397 status=ok
// SIG undefined FUN_1494e2c24(void)

undefined4 * FUN_1494e2c24(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1494e2db2(param_1,local_48);
  FUN_1494e2f0a(param_3);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = 0;
  if ((longlong)(int)local_40[1] != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar4 = *(ulonglong *)(*local_40 + lVar6);
      uVar3 = (uint)(uVar4 >> 0x10);
      uVar7 = uVar7 ^ (int)(uVar4 >> 0x20) + (int)(uVar4 & 0xffff) +
                      (uVar7 >> 2) + uVar7 * 0x40 + (int)uVar4 * 0x10000 +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (int)((uVar4 & 0xffff) >> 4) + 0x9e3779b9;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)local_40[1] * 8 != lVar6);
  }
  cVar2 = FUN_1494e2e98(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1494e2fe2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e2db2 FUN_1494e2db2 body=229 status=ok
// SIG undefined FUN_1494e2db2(void)

int * FUN_1494e2db2(longlong *param_1,int *param_2)

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



// FUNCTION 1494e2e98 FUN_1494e2e98 body=114 status=ok
// SIG undefined FUN_1494e2e98(void)

undefined8 FUN_1494e2e98(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1494e2ba8(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1494e2f70(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1494e2f0a FUN_1494e2f0a body=101 status=ok
// SIG undefined FUN_1494e2f0a(void)

undefined8 * FUN_1494e2f0a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1494e2f70 FUN_1494e2f70 body=114 status=ok
// SIG undefined FUN_1494e2f70(void)

void FUN_1494e2f70(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1494e2fe2 FUN_1494e2fe2 body=539 status=ok
// SIG undefined FUN_1494e2fe2(void)

void FUN_1494e2fe2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    local_6c = local_4c;
    local_90 = param_1;
    while (local_78._4_4_ < (int)local_80[3]) {
      lVar2 = *local_90;
      lVar5 = (longlong)local_78._4_4_ * 0x20;
      lVar9 = (longlong)*(int *)(lVar2 + 8 + lVar5);
      if (lVar9 == 0) {
        uVar6 = 0;
      }
      else {
        lVar11 = 0;
        uVar6 = 0;
        do {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + lVar5) + lVar11);
          uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
          uVar12 = (uint)uVar3 & 0xffff;
          uVar6 = uVar6 ^ (uVar12 >> 4) +
                          (int)((ulonglong)uVar3 >> 0x20) + uVar12 +
                          (uVar6 >> 2) + uVar6 * 0x40 + (uint)uVar3 * 0x10000 +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + 0x9e3779b9;
          lVar11 = lVar11 + 8;
        } while (lVar9 * 8 != lVar11);
      }
      uVar10 = (longlong)(int)uVar6 & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + lVar5 + 0x1c) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + lVar5 + 0x18) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) =
           local_78._4_4_;
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494e31fe FUN_1494e31fe body=132 status=ok
// SIG undefined FUN_1494e31fe(void)

void FUN_1494e31fe(longlong param_1,int param_2)

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



// FUNCTION 1494e3283 FUN_1494e3283 body=23 status=ok
// SIG undefined FUN_1494e3283(void)

void FUN_1494e3283(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 1494e329a FUN_1494e329a body=63 status=ok
// SIG undefined FUN_1494e329a(void)

void FUN_1494e329a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141136190(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1494e2fe2(param_1);
    return;
  }
  FUN_1494e32da(param_1);
  FUN_141136190(param_1);
  return;
}



// FUNCTION 1494e32da FUN_1494e32da body=322 status=ok
// SIG undefined FUN_1494e32da(void)

void FUN_1494e32da(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1494e341e FUN_1494e341e body=96 status=ok
// SIG undefined FUN_1494e341e(void)

void FUN_1494e341e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1494e347e FUN_1494e347e body=132 status=ok
// SIG undefined FUN_1494e347e(void)

void FUN_1494e347e(longlong param_1,int param_2)

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



// FUNCTION 1494e3504 FUN_1494e3504 body=9 status=ok
// SIG undefined FUN_1494e3504(void)

void FUN_1494e3504(longlong param_1)

{
  FUN_14947d522(param_1 + 0x10);
  return;
}



// FUNCTION 1494e350e FUN_1494e350e body=29 status=ok
// SIG undefined FUN_1494e350e(void)

undefined8 FUN_1494e350e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e352c FUN_1494e352c body=303 status=ok
// SIG undefined FUN_1494e352c(void)

void FUN_1494e352c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 1494e365c FUN_1494e365c body=284 status=ok
// SIG undefined FUN_1494e365c(void)

void FUN_1494e365c(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e377a FUN_1494e377a body=9 status=ok
// SIG undefined FUN_1494e377a(void)

void FUN_1494e377a(longlong param_1)

{
  FUN_14947d766(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3784 FUN_1494e3784 body=29 status=ok
// SIG undefined FUN_1494e3784(void)

undefined8 FUN_1494e3784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e37a2 FUN_1494e37a2 body=62 status=ok
// SIG undefined FUN_1494e37a2(void)

void FUN_1494e37a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494e37e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1494e37e0 FUN_1494e37e0 body=93 status=ok
// SIG undefined FUN_1494e37e0(void)

ulonglong FUN_1494e37e0(uint param_1,uint param_2)

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



// FUNCTION 1494e383e FUN_1494e383e body=132 status=ok
// SIG undefined FUN_1494e383e(void)

void FUN_1494e383e(longlong param_1,int param_2)

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



// FUNCTION 1494e38c4 FUN_1494e38c4 body=359 status=ok
// SIG undefined FUN_1494e38c4(void)

undefined4 * FUN_1494e38c4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1494d5d42(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1494d5e28(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1494d5f3c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e3a2c FUN_1494e3a2c body=98 status=ok
// SIG undefined FUN_1494e3a2c(void)

void FUN_1494e3a2c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1494e3a8e FUN_1494e3a8e body=107 status=ok
// SIG undefined FUN_1494e3a8e(void)

void FUN_1494e3a8e(longlong *param_1,longlong *param_2)

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
    FUN_1494db69c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1494e3afa FUN_1494e3afa body=107 status=ok
// SIG undefined FUN_1494e3afa(void)

void FUN_1494e3afa(longlong *param_1,longlong *param_2)

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
    FUN_1494e3b66(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1494e3b66 FUN_1494e3b66 body=132 status=ok
// SIG undefined FUN_1494e3b66(void)

void FUN_1494e3b66(longlong param_1,int param_2)

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



// FUNCTION 1494e3bec FUN_1494e3bec body=107 status=ok
// SIG undefined FUN_1494e3bec(void)

void FUN_1494e3bec(longlong *param_1,longlong *param_2)

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
    FUN_1494e3c58(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1494e3c58 FUN_1494e3c58 body=132 status=ok
// SIG undefined FUN_1494e3c58(void)

void FUN_1494e3c58(longlong param_1,int param_2)

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



// FUNCTION 1494e3cde FUN_1494e3cde body=9 status=ok
// SIG undefined FUN_1494e3cde(void)

void FUN_1494e3cde(longlong param_1)

{
  FUN_14947d9e4(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3ce8 FUN_1494e3ce8 body=29 status=ok
// SIG undefined FUN_1494e3ce8(void)

undefined8 FUN_1494e3ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3d06 FUN_1494e3d06 body=9 status=ok
// SIG undefined FUN_1494e3d06(void)

void FUN_1494e3d06(longlong param_1)

{
  FUN_14947e0d6(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3d10 FUN_1494e3d10 body=29 status=ok
// SIG undefined FUN_1494e3d10(void)

undefined8 FUN_1494e3d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3d2e FUN_1494e3d2e body=9 status=ok
// SIG undefined FUN_1494e3d2e(void)

void FUN_1494e3d2e(longlong param_1)

{
  FUN_14947e3a6(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3d38 FUN_1494e3d38 body=29 status=ok
// SIG undefined FUN_1494e3d38(void)

undefined8 FUN_1494e3d38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3d8a FUN_1494e3d8a body=29 status=ok
// SIG undefined FUN_1494e3d8a(void)

undefined8 FUN_1494e3d8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3da8 FUN_1494e3da8 body=9 status=ok
// SIG undefined FUN_1494e3da8(void)

void FUN_1494e3da8(longlong param_1)

{
  FUN_14947ea48(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3db2 FUN_1494e3db2 body=29 status=ok
// SIG undefined FUN_1494e3db2(void)

undefined8 FUN_1494e3db2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3dd0 FUN_1494e3dd0 body=9 status=ok
// SIG undefined FUN_1494e3dd0(void)

void FUN_1494e3dd0(longlong param_1)

{
  FUN_14947f1d0(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3dda FUN_1494e3dda body=29 status=ok
// SIG undefined FUN_1494e3dda(void)

undefined8 FUN_1494e3dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3df8 FUN_1494e3df8 body=149 status=ok
// SIG undefined FUN_1494e3df8(void)

undefined8 * FUN_1494e3df8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14bd1e240;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
    UNLOCK();
  }
  FUN_149461b16(param_1 + 2,&local_30,&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e3e8e FUN_1494e3e8e body=9 status=ok
// SIG undefined FUN_1494e3e8e(void)

void FUN_1494e3e8e(longlong param_1)

{
  FUN_14947ec22(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3e98 FUN_1494e3e98 body=29 status=ok
// SIG undefined FUN_1494e3e98(void)

undefined8 FUN_1494e3e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3eb6 FUN_1494e3eb6 body=9 status=ok
// SIG undefined FUN_1494e3eb6(void)

void FUN_1494e3eb6(longlong param_1)

{
  FUN_14947e634(param_1 + 0x10);
  return;
}



// FUNCTION 1494e3ec0 FUN_1494e3ec0 body=29 status=ok
// SIG undefined FUN_1494e3ec0(void)

undefined8 FUN_1494e3ec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e3ede FUN_1494e3ede body=326 status=ok
// SIG undefined FUN_1494e3ede(void)

undefined4 * FUN_1494e3ede(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1494e4026(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1494e410c(param_1,uVar4,local_40,&local_4c);
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
      FUN_1494e41fe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e4026 FUN_1494e4026 body=230 status=ok
// SIG undefined FUN_1494e4026(void)

int * FUN_1494e4026(longlong *param_1,int *param_2)

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



// FUNCTION 1494e410c FUN_1494e410c body=128 status=ok
// SIG undefined FUN_1494e410c(void)

undefined8 FUN_1494e410c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1494e418c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1494e418c FUN_1494e418c body=114 status=ok
// SIG undefined FUN_1494e418c(void)

void FUN_1494e418c(longlong *param_1,int param_2)

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



// FUNCTION 1494e41fe FUN_1494e41fe body=474 status=ok
// SIG undefined FUN_1494e41fe(void)

void FUN_1494e41fe(longlong *param_1)

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



// FUNCTION 1494e43da FUN_1494e43da body=193 status=ok
// SIG undefined FUN_1494e43da(void)

void FUN_1494e43da(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1494e449e(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_1494e463c(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_1494e481a(param_1,local_2c,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e449e FUN_1494e449e body=413 status=ok
// SIG undefined FUN_1494e449e(void)

void FUN_1494e449e(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 1494e463c FUN_1494e463c body=477 status=ok
// SIG undefined FUN_1494e463c(void)

void FUN_1494e463c(longlong *param_1)

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



// FUNCTION 1494e481a FUN_1494e481a body=312 status=ok
// SIG undefined FUN_1494e481a(void)

undefined4 * FUN_1494e481a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1494e4954(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1494e4a3a(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1494e463c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e4954 FUN_1494e4954 body=229 status=ok
// SIG undefined FUN_1494e4954(void)

int * FUN_1494e4954(longlong *param_1,int *param_2)

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



// FUNCTION 1494e4a3a FUN_1494e4a3a body=124 status=ok
// SIG undefined FUN_1494e4a3a(void)

undefined8 FUN_1494e4a3a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1494e4ab6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1494e4ab6 FUN_1494e4ab6 body=114 status=ok
// SIG undefined FUN_1494e4ab6(void)

void FUN_1494e4ab6(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1494e4b28 FUN_1494e4b28 body=52 status=ok
// SIG undefined FUN_1494e4b28(void)

void FUN_1494e4b28(longlong *param_1)

{
  FUN_1494e4b5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494e4b5c FUN_1494e4b5c body=89 status=ok
// SIG undefined FUN_1494e4b5c(void)

void FUN_1494e4b5c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1494e4bb6 FUN_1494e4bb6 body=132 status=ok
// SIG undefined FUN_1494e4bb6(void)

void FUN_1494e4bb6(longlong param_1,int param_2)

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



// FUNCTION 1494e4c3c FUN_1494e4c3c body=323 status=ok
// SIG undefined FUN_1494e4c3c(void)

undefined4 * FUN_1494e4c3c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1494e4d80(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1494e4e66(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1494e4f58(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e4d80 FUN_1494e4d80 body=230 status=ok
// SIG undefined FUN_1494e4d80(void)

int * FUN_1494e4d80(longlong *param_1,int *param_2)

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



// FUNCTION 1494e4e66 FUN_1494e4e66 body=128 status=ok
// SIG undefined FUN_1494e4e66(void)

undefined8 FUN_1494e4e66(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1494e4ee6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1494e4ee6 FUN_1494e4ee6 body=114 status=ok
// SIG undefined FUN_1494e4ee6(void)

void FUN_1494e4ee6(longlong *param_1,int param_2)

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



// FUNCTION 1494e4f58 FUN_1494e4f58 body=474 status=ok
// SIG undefined FUN_1494e4f58(void)

void FUN_1494e4f58(longlong *param_1)

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



// FUNCTION 1494e5134 FUN_1494e5134 body=132 status=ok
// SIG undefined FUN_1494e5134(void)

void FUN_1494e5134(longlong param_1,int param_2)

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



// FUNCTION 1494e51ba FUN_1494e51ba body=147 status=ok
// SIG undefined FUN_1494e51ba(void)

void FUN_1494e51ba(longlong param_1,int param_2)

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



// FUNCTION 1494e524e FUN_1494e524e body=89 status=ok
// SIG undefined FUN_1494e524e(void)

void FUN_1494e524e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1494e52a8 FUN_1494e52a8 body=132 status=ok
// SIG undefined FUN_1494e52a8(void)

void FUN_1494e52a8(longlong param_1,int param_2)

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



// FUNCTION 1494e532e FUN_1494e532e body=62 status=ok
// SIG undefined FUN_1494e532e(void)

void FUN_1494e532e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494e536c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1494e536c FUN_1494e536c body=93 status=ok
// SIG undefined FUN_1494e536c(void)

ulonglong FUN_1494e536c(uint param_1,uint param_2)

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



// FUNCTION 1494e53ca FUN_1494e53ca body=132 status=ok
// SIG undefined FUN_1494e53ca(void)

void FUN_1494e53ca(longlong param_1,int param_2)

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



// FUNCTION 1494e5450 FUN_1494e5450 body=132 status=ok
// SIG undefined FUN_1494e5450(void)

void FUN_1494e5450(longlong param_1,int param_2)

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



// FUNCTION 1494e54d6 FUN_1494e54d6 body=143 status=ok
// SIG undefined FUN_1494e54d6(void)

void FUN_1494e54d6(longlong param_1,int param_2)

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



// FUNCTION 1494e5566 FUN_1494e5566 body=98 status=ok
// SIG undefined FUN_1494e5566(void)

undefined8 FUN_1494e5566(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 1494e55c8 FUN_1494e55c8 body=63 status=ok
// SIG undefined FUN_1494e55c8(void)

void FUN_1494e55c8(longlong param_1,longlong param_2,int param_3)

{
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  do {
    *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
    FUN_149499536(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1494e5608 FUN_1494e5608 body=327 status=ok
// SIG undefined FUN_1494e5608(void)

undefined4 * FUN_1494e5608(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1494e5750(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1494e5836(param_1,uVar2,local_40);
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
      FUN_1494d6a98(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e5750 FUN_1494e5750 body=229 status=ok
// SIG undefined FUN_1494e5750(void)

int * FUN_1494e5750(longlong *param_1,int *param_2)

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



// FUNCTION 1494e5836 FUN_1494e5836 body=144 status=ok
// SIG undefined FUN_1494e5836(void)

void FUN_1494e5836(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1494e58c6(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1494e58a1;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1494e58a1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1494e58c6 FUN_1494e58c6 body=138 status=ok
// SIG undefined FUN_1494e58c6(void)

void FUN_1494e58c6(longlong *param_1,int param_2,int param_3)

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
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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



// FUNCTION 1494e5950 FUN_1494e5950 body=146 status=ok
// SIG undefined FUN_1494e5950(void)

longlong * FUN_1494e5950(longlong *param_1,longlong *param_2)

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



// FUNCTION 1494e59e2 FUN_1494e59e2 body=62 status=ok
// SIG undefined FUN_1494e59e2(void)

void FUN_1494e59e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494e5a20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1494e5a20 FUN_1494e5a20 body=93 status=ok
// SIG undefined FUN_1494e5a20(void)

ulonglong FUN_1494e5a20(uint param_1,uint param_2)

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



// FUNCTION 1494e5a7e FUN_1494e5a7e body=62 status=ok
// SIG undefined FUN_1494e5a7e(void)

void FUN_1494e5a7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494e5abc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1494e5abc FUN_1494e5abc body=93 status=ok
// SIG undefined FUN_1494e5abc(void)

ulonglong FUN_1494e5abc(uint param_1,uint param_2)

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



// FUNCTION 1494e5b1a FUN_1494e5b1a body=52 status=ok
// SIG undefined FUN_1494e5b1a(void)

void FUN_1494e5b1a(longlong *param_1)

{
  FUN_1494e5b4e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494e5b4e FUN_1494e5b4e body=89 status=ok
// SIG undefined FUN_1494e5b4e(void)

void FUN_1494e5b4e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1494e5ba8 FUN_1494e5ba8 body=312 status=ok
// SIG undefined FUN_1494e5ba8(void)

undefined4 * FUN_1494e5ba8(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1494e5ce2(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1494e5dc8(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1494e5eb6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e5ce2 FUN_1494e5ce2 body=229 status=ok
// SIG undefined FUN_1494e5ce2(void)

int * FUN_1494e5ce2(longlong *param_1,int *param_2)

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



// FUNCTION 1494e5dc8 FUN_1494e5dc8 body=124 status=ok
// SIG undefined FUN_1494e5dc8(void)

undefined8 FUN_1494e5dc8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1494e5e44(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1494e5e44 FUN_1494e5e44 body=114 status=ok
// SIG undefined FUN_1494e5e44(void)

void FUN_1494e5e44(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1494e5eb6 FUN_1494e5eb6 body=477 status=ok
// SIG undefined FUN_1494e5eb6(void)

void FUN_1494e5eb6(longlong *param_1)

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



// FUNCTION 1494e6094 FUN_1494e6094 body=192 status=ok
// SIG undefined FUN_1494e6094(void)

void FUN_1494e6094(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_1494e612a;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1494e612a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1494e6154 FUN_1494e6154 body=132 status=ok
// SIG undefined FUN_1494e6154(void)

void FUN_1494e6154(longlong param_1,int param_2)

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



// FUNCTION 1494e61da FUN_1494e61da body=85 status=ok
// SIG undefined FUN_1494e61da(void)

void FUN_1494e61da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd020b0;
  plVar3 = (longlong *)param_1[6];
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494e6230 FUN_1494e6230 body=99 status=ok
// SIG undefined FUN_1494e6230(void)

void FUN_1494e6230(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd02100;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
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
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494e6294 FUN_1494e6294 body=89 status=ok
// SIG undefined FUN_1494e6294(void)

void FUN_1494e6294(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1494e62ed FUN_1494e62ed body=77 status=ok
// SIG undefined FUN_1494e62ed(void)

void FUN_1494e62ed(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
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
  return;
}



// FUNCTION 1494e6342 FUN_1494e6342 body=36 status=ok
// SIG undefined FUN_1494e6342(void)

undefined8 FUN_1494e6342(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
  if ((lVar1 == param_2) && (*(longlong *)(param_1 + 0x30) == param_3)) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else if (lVar1 == param_3) {
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x30) == param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1494e6366 FUN_1494e6366 body=17 status=ok
// SIG undefined FUN_1494e6366(void)

bool FUN_1494e6366(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != param_2) {
    return *(longlong *)(param_1 + 0x30) == param_2;
  }
  return true;
}



// FUNCTION 1494e6378 FUN_1494e6378 body=25 status=ok
// SIG undefined FUN_1494e6378(void)

longlong FUN_1494e6378(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x30) == param_2) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  if (*(longlong *)(param_1 + 0x28) == param_2) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  return lVar1;
}



// FUNCTION 1494e639c FUN_1494e639c body=57 status=ok
// SIG undefined FUN_1494e639c(void)

longlong FUN_1494e639c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14113d446();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1494e63d6 FUN_1494e63d6 body=57 status=ok
// SIG undefined FUN_1494e63d6(void)

longlong FUN_1494e63d6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14113d446();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1494e6410 FUN_1494e6410 body=223 status=ok
// SIG undefined FUN_1494e6410(void)

undefined8 FUN_1494e6410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar2 = FUN_14113d446();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar4 == 0) {
LAB_1494e6477:
        lVar4 = 0;
      }
      else {
        lVar2 = FUN_14113d446();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_1494e6477;
      }
      plVar5 = (longlong *)(lVar4 + 0xa0);
      piVar6 = (int *)(lVar4 + 0xa8);
      goto LAB_1494e6487;
    }
  }
  lVar4 = FUN_1494e64f0(param_1);
  plVar5 = (longlong *)(lVar4 + 0x50);
  piVar6 = (int *)(lVar4 + 0x58);
LAB_1494e6487:
  iVar1 = *piVar6;
  lVar4 = *plVar5;
  if (*(longlong *)(lVar4 + (longlong)(iVar1 + -1) * 8) == param_1) {
    uVar3 = 0;
  }
  else {
    if (iVar1 != 0) {
      lVar7 = 0;
      lVar2 = 0x100000000;
      do {
        if (*(longlong *)(lVar4 + lVar7) == param_1) {
          lVar2 = lVar2 >> 0x20;
          goto LAB_1494e64c5;
        }
        lVar2 = lVar2 + 0x100000000;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    lVar2 = 0;
LAB_1494e64c5:
    uVar3 = *(undefined8 *)(lVar4 + lVar2 * 8);
  }
  return uVar3;
}



// FUNCTION 1494e64f0 FUN_1494e64f0 body=106 status=ok
// SIG undefined FUN_1494e64f0(void)

longlong FUN_1494e64f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  do {
    lVar2 = param_1;
    param_1 = *(longlong *)(lVar2 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar1 = FUN_14113d446();
  } while ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30));
  lVar2 = *(longlong *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_140f7d9ac();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1494e655a FUN_1494e655a body=63 status=ok
// SIG undefined FUN_1494e655a(void)

longlong FUN_1494e655a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  while( true ) {
    lVar2 = param_1;
    param_1 = *(longlong *)(lVar2 + 0x20);
    if (param_1 == 0) {
      return lVar2;
    }
    lVar1 = FUN_14113d446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30) {
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1494e659a FUN_1494e659a body=304 status=ok
// SIG undefined FUN_1494e659a(void)

longlong * FUN_1494e659a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1494e8cb2();
  if (param_1 != 0) {
    while( true ) {
      uVar4 = uStack_50;
      lVar5 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1494e31fe(&local_58,uVar4 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar5 * 8) = param_1;
      param_1 = *(longlong *)(param_1 + 0x20);
      if (param_1 == 0) break;
      lVar5 = FUN_14113d446();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) break;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_50 & 0xffffffff);
  }
  if ((uStack_50 & 0xffffffff) != 0) {
    FUN_1402191ca(param_2);
    if (0 < (longlong)(int)uStack_50) {
      uVar4 = (longlong)(int)uStack_50 + 1;
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(local_58 + -0x10 + uVar4 * 8) + 0x18);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494e66cc FUN_1494e66cc body=286 status=ok
// SIG undefined FUN_1494e66cc(void)

undefined8 FUN_1494e66cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1494e659a(param_1,&local_78);
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  if ((longlong)local_70 != 0) {
    lVar5 = (longlong)local_70 << 3;
    bVar2 = true;
    lVar4 = local_78;
    do {
      if (!bVar2) {
        FUN_1400020e8(&local_68,&DAT_149e0635c,1);
      }
      FUN_1400021e4(lVar4,&local_50);
      iVar1 = local_48 + -1;
      if (local_48 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_68,local_50,iVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 8;
      bVar2 = false;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    puVar3 = local_68;
    if ((int)uStack_60 != 0) goto LAB_1494e6796;
  }
  puVar3 = &DAT_149dfb77a;
LAB_1494e6796:
  FUN_1446f470e(param_2,puVar3,1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494e67ec FUN_1494e67ec body=223 status=ok
// SIG undefined FUN_1494e67ec(void)

undefined8 FUN_1494e67ec(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined1 local_40 [8];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1494e66cc(param_1,local_40);
  FUN_1400021e4(local_40,local_38);
  lVar1 = FUN_1494e64f0(param_1);
  local_60[0] = *(longlong *)(lVar1 + 0x18);
  FUN_1400021e4(local_60,local_50);
  uVar2 = FUN_1494e64f0(param_1);
  lVar1 = FUN_149494c46(uVar2);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,local_60);
  FUN_1494bd7c2(param_2,local_60,local_50,local_38);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e68cc FUN_1494e68cc body=589 status=ok
// SIG undefined FUN_1494e68cc(void)

longlong * FUN_1494e68cc(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined8 local_98 [8];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined8 *)0x0;
  local_50 = 0x400000000;
  lVar9 = *param_2;
  uVar7 = *(uint *)(param_2 + 1);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_a8 = lVar9;
  local_a0 = uVar7;
  local_9c = uVar1;
  iVar4 = FUN_144aff2e5(&local_a8,0x2e,0);
  iVar11 = 0;
  if (iVar4 != -1) {
    do {
      uVar3 = local_50;
      if (0 < iVar4) {
        uVar8 = (int)uVar7 >> 0x1f & uVar7;
        iVar11 = uVar7 - uVar8;
        if (iVar4 < iVar11) {
          iVar11 = iVar4;
        }
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        lVar12 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_1494dc67e(local_98,uVar3 & 0xffffffff);
        }
        puVar6 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          puVar6 = local_98;
        }
        puVar6[lVar12 * 2] = lVar9 + (longlong)(int)uVar8 * 2;
        *(int *)(puVar6 + lVar12 * 2 + 1) = iVar11;
      }
      uVar8 = iVar4 + 1;
      uVar5 = (int)uVar8 >> 0x1f & uVar8;
      uVar8 = uVar8 - uVar5;
      uVar5 = uVar5 + 0x7fffffff;
      if ((int)uVar7 <= (int)uVar8) {
        uVar8 = uVar7;
      }
      uVar7 = uVar7 - uVar8;
      if ((int)uVar5 < (int)uVar7) {
        uVar7 = uVar5;
      }
      if ((int)uVar7 < 1) {
        uVar7 = 0;
      }
      lVar9 = lVar9 + (longlong)(int)uVar8 * 2;
      local_a8 = lVar9;
      local_a0 = uVar7;
      local_9c = uVar1;
      iVar4 = FUN_144aff2e5(&local_a8,0x2e,0);
    } while (iVar4 != -1);
    iVar11 = (int)local_50;
  }
  if (uVar7 != 0) {
    local_50 = CONCAT44(local_50._4_4_,iVar11 + 1U);
    if (local_50._4_4_ < iVar11 + 1U) {
      FUN_1494dc67e(local_98,iVar11);
    }
    puVar6 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      puVar6 = local_98;
    }
    lVar12 = (longlong)iVar11;
    puVar6[lVar12 * 2] = lVar9;
    *(uint *)(puVar6 + lVar12 * 2 + 1) = uVar7;
    *(undefined4 *)((longlong)puVar6 + lVar12 * 0x10 + 0xc) = uVar1;
    iVar11 = (int)local_50;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < iVar11) {
    if (iVar11 != 0) {
      FUN_1402191ca(param_1,iVar11);
      puVar6 = local_98;
      if (local_58 != (undefined8 *)0x0) {
        puVar6 = local_58;
      }
      if ((longlong)(int)local_50 != 0) {
        puVar10 = puVar6 + (longlong)(int)local_50 * 2;
        do {
          uVar2 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          iVar11 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar11 + 1U) {
            FUN_1446f84a2(param_1,iVar11);
          }
          lVar9 = *param_1;
          FUN_1446f82e2(&local_a8,uVar1,uVar2,0);
          *(longlong *)(lVar9 + (longlong)iVar11 * 8) = local_a8;
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar10);
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar11);
}



// FUNCTION 1494e6b1c FUN_1494e6b1c body=57 status=ok
// SIG undefined FUN_1494e6b1c(void)

undefined8 FUN_1494e6b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494e64f0();
  uVar1 = FUN_149494c46(uVar1);
  FUN_14949fd3e(uVar1,param_2,param_1,param_3);
  return param_2;
}



// FUNCTION 1494e6b56 FUN_1494e6b56 body=277 status=ok
// SIG undefined FUN_1494e6b56(void)

undefined8 * FUN_1494e6b56(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1494e6c6c(param_1,&local_a0,1);
  lVar2 = local_a0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if ((longlong)local_98 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar4);
      uVar3 = FUN_1494e64f0(uVar1);
      uVar3 = FUN_149494c46(uVar3);
      FUN_14949fd3e(uVar3,local_90,uVar1,param_3);
      FUN_1494e6de8(param_2,local_90);
      local_48 = 0;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_1494d6142(local_90);
      lVar4 = lVar4 + 8;
    } while ((longlong)local_98 * 8 != lVar4);
  }
  if (local_a0 != 0) {
    FUN_1400020a8(local_a0);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494e6c6c FUN_1494e6c6c body=380 status=ok
// SIG undefined FUN_1494e6c6c(void)

longlong * FUN_1494e6c6c(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *local_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  puVar5[1] = param_1;
  local_48 = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar4 = puVar5;
    local_48 = puVar5;
  }
  if (param_3 != '\0') {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_149482de0(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = param_1;
  }
  while (puVar5 = (undefined8 *)*puVar4, puVar5 != (undefined8 *)0x0) {
    lVar2 = puVar5[1];
    puVar5[1] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      thunk_FUN_1400020a8(puVar4,0x10);
    }
    lVar7 = (longlong)*(int *)(lVar2 + 0xa8);
    puVar4 = puVar5;
    if (lVar7 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0xa0);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_149482de0(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
        if (*(int *)(lVar3 + 0xa8) != 0) {
          puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar5 = 0;
          puVar5[1] = lVar3;
          if (puVar5 != (undefined8 *)0x0) {
            *local_48 = puVar5;
            local_48 = puVar5;
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
  }
  while (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
    thunk_FUN_1400020a8(puVar4,0x10);
    puVar4 = puVar5;
  }
  return param_2;
}



// FUNCTION 1494e6de8 FUN_1494e6de8 body=366 status=ok
// SIG undefined FUN_1494e6de8(void)

void FUN_1494e6de8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1494d68ea(param_1,uVar4);
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
      FUN_1494d6a98(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (local_48 != plVar1)) {
    do {
      FUN_1494e8d88(param_1,&local_50,(longlong)iStack_5c * 0x10 + *local_78);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 || (local_68 != plVar1 || iStack_5c != iVar3));
  }
  FUN_1494e8d44(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e6f58 FUN_1494e6f58 body=232 status=ok
// SIG undefined FUN_1494e6f58(void)

longlong FUN_1494e6f58(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1494e64f0();
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  FUN_1494e659a(param_1,&local_30);
  if (local_28 < 1) {
LAB_1494e700e:
    lVar1 = 0;
  }
  else {
    uVar3 = 0;
    do {
      lVar1 = FUN_144a87586(uVar4,*(undefined8 *)(local_30 + uVar3 * 8));
      if (lVar1 == 0) goto LAB_1494e700e;
      if (uVar3 == local_28 - 1) break;
      lVar5 = *(longlong *)(lVar1 + 8);
      lVar2 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar2 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar2) break;
          } while (lVar5 != 0);
        }
        if (!bVar6) goto LAB_1494e700e;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1494e700e;
      uVar4 = *(undefined8 *)(lVar1 + 0x70);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)local_28);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1494e7042 FUN_1494e7042 body=275 status=ok
// SIG undefined FUN_1494e7042(void)

longlong FUN_1494e7042(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14690032e(&local_48,4);
  if (param_1 != 0) {
    lVar3 = param_1;
    while( true ) {
      lVar2 = FUN_1494e6f58(lVar3);
      uVar4 = uStack_40;
      if (lVar2 == 0) goto LAB_1494e7124;
      lVar5 = (longlong)(int)uStack_40;
      uVar1 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
      if (uStack_40._4_4_ < uVar1) {
        FUN_14000e500(&local_48,uVar4 & 0xffffffff);
      }
      *(longlong *)(local_48 + lVar5 * 8) = lVar2;
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 == 0) break;
      lVar2 = FUN_14113d446();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) break;
    }
  }
  lVar3 = FUN_1494e64f0(param_1);
  if ((longlong)(int)uStack_40 < 1) {
LAB_1494e7124:
    lVar2 = 0;
  }
  else {
    uVar4 = (longlong)(int)uStack_40 + 1;
    lVar2 = 0;
    do {
      if (lVar2 == 0) {
        lVar2 = lVar3;
      }
      lVar2 = lVar2 + *(int *)(*(longlong *)(local_48 + -0x10 + uVar4 * 8) + 0x44);
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1494e7156 FUN_1494e7156 body=223 status=ok
// SIG undefined FUN_1494e7156(void)

bool FUN_1494e7156(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  bool bVar7;
  
  plVar2 = (longlong *)FUN_1494e6f58();
  lVar3 = FUN_1494e7042(param_1);
  if (lVar3 == 0 || plVar2 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    uVar4 = FUN_1494e64f0(param_1);
    uVar5 = DAT_14c872be8;
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    bVar7 = false;
    cVar1 = FUN_140d50488(plVar2,0,DAT_14c872be8);
    if (puVar6 != (undefined2 *)0x0 && cVar1 == '\x01') {
      lVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,puVar6,lVar3,0,uVar4,0x8000000,uVar5);
      bVar7 = lVar3 != 0;
    }
    uVar5 = FUN_1494e64f0(param_1);
    uVar5 = FUN_149494c46(uVar5);
    FUN_1494bdf80(uVar5,10,param_1);
  }
  return bVar7;
}



// FUNCTION 1494e7236 FUN_1494e7236 body=43 status=ok
// SIG undefined FUN_1494e7236(void)

void FUN_1494e7236(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494e64f0();
  uVar1 = FUN_149494c46(uVar1);
  FUN_1494bdf80(uVar1,param_2,param_1);
  return;
}



// FUNCTION 1494e7262 FUN_1494e7262 body=62 status=ok
// SIG undefined FUN_1494e7262(void)

undefined8 * FUN_1494e7262(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1494e64f0();
  lVar2 = FUN_149494c46(uVar1);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1494aca06(lVar2,param_2,param_1);
  }
  return param_2;
}



// FUNCTION 1494e72a0 FUN_1494e72a0 body=57 status=ok
// SIG undefined FUN_1494e72a0(void)

undefined8 FUN_1494e72a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494e64f0();
  uVar1 = FUN_149494c46(uVar1);
  FUN_1494cc8a0(uVar1,param_2,param_1,param_3);
  return param_2;
}



// FUNCTION 1494e72da FUN_1494e72da body=949 status=ok
// SIG undefined FUN_1494e72da(void)

ulonglong FUN_1494e72da(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    if (param_3 != (longlong *)0x0) {
      FUN_14020fad6(param_3,L"No pin given.");
    }
  }
  else {
    uVar5 = FUN_1494e64f0();
    cVar3 = FUN_1494bd97c(uVar5,param_1,param_2,param_3);
    if (cVar3 != '\0') {
      uVar5 = FUN_1494e64f0(param_2);
      cVar3 = FUN_1494bd97c(uVar5,param_2,param_1,param_3);
      if (cVar3 != '\0') {
        if ((*(char *)(param_1 + 0x28) != '\0') || (*(char *)(param_2 + 0x28) == '\x01')) {
          uVar5 = FUN_140f4f540();
          uVar6 = FUN_1411c55ba();
          FUN_14949555e(uVar5,&local_58,uVar6);
          local_98 = local_58;
          local_90 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          FUN_140e6511c(&local_88,&local_98);
          if (*(longlong *)(param_1 + 0x70) == local_88) {
            cVar3 = FUN_144a7afa6(param_1 + 0x80,local_78);
            uVar11 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
            if (cVar3 == '\0') goto LAB_1494e740d;
          }
          else {
LAB_1494e740d:
            local_d8 = local_58;
            local_d0 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            FUN_140e6511c(&local_c8,&local_d8);
            if (*(longlong *)(param_2 + 0x70) == local_c8) {
              uVar4 = FUN_144a7afa6(param_2 + 0x80,local_b8);
              uVar11 = (ulonglong)uVar4;
            }
            else {
              uVar11 = 0;
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
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
          goto LAB_1494e731d;
        }
        lVar13 = param_2;
        if (*(char *)(param_1 + 0x29) == '\x02') {
          lVar13 = param_1;
        }
        lVar14 = param_2;
        if (*(char *)(param_1 + 0x29) == '\x01') {
          lVar14 = param_1;
        }
        plVar2 = (longlong *)(param_1 + 0x70);
        lVar7 = FUN_149466e92(plVar2);
        if (*(longlong *)(lVar7 + 0x18) != 0) {
          lVar7 = FUN_149466e92(param_2 + 0x70);
          if (*(longlong *)(lVar7 + 0x18) != 0) {
            lVar7 = FUN_149466e92(plVar2);
            lVar9 = FUN_149466e92(param_2 + 0x70);
            if (*(longlong *)(lVar7 + 0x18) == *(longlong *)(lVar9 + 0x18)) goto LAB_1494e750e;
          }
        }
        if ((*plVar2 == *(longlong *)(param_2 + 0x70)) &&
           (cVar3 = FUN_144a7afa6(param_1 + 0x80,param_2 + 0x80), cVar3 != '\0')) {
LAB_1494e750e:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
        }
        if (param_3 != (longlong *)0x0) {
          FUN_1494947ba(lVar14 + 0x70,&local_c8);
          puVar8 = (undefined8 *)FUN_1447a1f4a(local_c8 + 8);
          puVar10 = &DAT_149dfb77a;
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(puVar8 + 1) != 0) {
            puVar12 = (undefined2 *)*puVar8;
          }
          FUN_1494947ba(lVar13 + 0x70,&local_58);
          puVar8 = (undefined8 *)FUN_1447a1f4a(local_58 + 8);
          if (*(int *)(puVar8 + 1) != 0) {
            puVar10 = (undefined2 *)*puVar8;
          }
          FUN_140002266(&local_88,L"Incompatible pin types (%s vs %s).",puVar10,puVar12);
          if (&local_88 == param_3) {
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_3 != 0) {
              FUN_1400020a8();
            }
            *param_3 = local_88;
            local_88 = 0;
            *(undefined4 *)(param_3 + 1) = (undefined4)local_80;
            *(undefined4 *)((longlong)param_3 + 0xc) = local_80._4_4_;
            local_80 = 0;
          }
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
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_c0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar1 = (int *)((longlong)local_c0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_c0 + 0x10))(local_c0);
              }
            }
          }
        }
      }
    }
  }
  uVar11 = 0;
LAB_1494e731d:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1494e76b2 FUN_1494e76b2 body=36 status=ok
// SIG undefined FUN_1494e76b2(void)

void FUN_1494e76b2(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494e64f0();
  FUN_1494bedd2(uVar1,param_1,param_2);
  return;
}



// FUNCTION 1494e76d6 FUN_1494e76d6 body=29 status=ok
// SIG undefined FUN_1494e76d6(void)

void FUN_1494e76d6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494e64f0();
  FUN_1494bef3e(uVar1,param_1);
  return;
}



// FUNCTION 1494e76f4 FUN_1494e76f4 body=153 status=ok
// SIG undefined FUN_1494e76f4(void)

void FUN_1494e76f4(longlong param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x29) = param_2;
  *(undefined4 *)(param_1 + 0x30) = *param_3;
  FUN_1406fa324(param_1 + 0x38,param_3 + 2);
  *(undefined4 *)(param_1 + 0x48) = param_3[6];
  FUN_144a787a6(param_1 + 0x50,param_3 + 8);
  FUN_1406fa324(param_1 + 0x60,param_3 + 0xc);
  *(undefined8 *)(param_1 + 0x70) = *param_4;
  *(undefined8 *)(param_1 + 0x78) = param_4[1];
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar2 = *(undefined4 *)(param_4 + 3);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  FUN_144a787a6(param_1 + 0x90,param_4 + 4);
  FUN_14121c54c(param_3);
  if (param_4[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494e778e FUN_1494e778e body=8 status=ok
// SIG undefined FUN_1494e778e(void)

void FUN_1494e778e(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x29) = param_2;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 1494e7796 FUN_1494e7796 body=201 status=ok
// SIG undefined FUN_1494e7796(void)

void FUN_1494e7796(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0xa8);
  uVar4 = (ulonglong)uVar1;
  if ((param_3 != 0) && (uVar4 = 0, uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    uVar3 = (longlong)(int)uVar1 * 8;
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar5) == param_3) {
        uVar4 = (ulonglong)uVar1;
        if ((int)(~uVar5 >> 3) != 0) {
          uVar4 = 0;
          goto LAB_1494e7843;
        }
        break;
      }
      uVar5 = uVar5 + 8;
      uVar4 = (ulonglong)uVar1;
    } while (uVar3 != uVar5);
  }
  goto LAB_1494e77c4;
  while( true ) {
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 - 8;
    if (uVar3 == 0) break;
LAB_1494e7843:
    if (*(longlong *)(lVar2 + uVar4 * 8) == param_3) goto LAB_1494e77c4;
  }
  uVar4 = 0xffffffff;
LAB_1494e77c4:
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1494be444((longlong *)(param_1 + 0xa0),&local_20,uVar4 & 0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494e7860 FUN_1494e7860 body=111 status=ok
// SIG undefined FUN_1494e7860(void)

void FUN_1494e7860(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = 0;
    do {
      FUN_1494acfa0(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (-1 < *(int *)(param_1 + 0xac)) {
    return;
  }
  FUN_1494e341e(param_1 + 0xa0,0);
  return;
}



// FUNCTION 1494e78d0 FUN_1494e78d0 body=289 status=ok
// SIG undefined FUN_1494e78d0(void)

ulonglong FUN_1494e78d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1494947ba(param_2,&local_40);
  if (local_40 != 0) {
    FUN_1494947ba(param_1 + 0x70,&local_50);
    lVar6 = local_40;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if ((lVar6 != local_50) &&
       (((*(int *)(param_1 + 0x30) == 0 && (*(int *)(param_1 + 0x40) == 0)) ||
        ((*(byte *)(local_40 + 0x48) & 1) != 0)))) {
      *(undefined8 *)(param_1 + 0x70) = *param_2;
      *(undefined8 *)(param_1 + 0x78) = param_2[1];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar4 = *(undefined4 *)(param_2 + 3);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 0x84) = uVar3;
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      *(undefined4 *)(param_1 + 0x8c) = uVar5;
      FUN_144a787a6(param_1 + 0x90,param_2 + 4);
      uVar7 = CONCAT71((int7)((ulonglong)(param_1 + 0x90) >> 8),1);
      goto LAB_1494e795d;
    }
  }
  uVar7 = 0;
LAB_1494e795d:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e79f2 FUN_1494e79f2 body=190 status=ok
// SIG undefined FUN_1494e79f2(void)

bool FUN_1494e79f2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[3];
  local_30 = param_2;
  if (lVar1 != param_2) {
    FUN_1400021e4(&local_30,&local_40);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    (**(code **)(*param_1 + 0x170))(param_1,puVar3,0,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = FUN_1494e64f0(param_1);
    uVar2 = FUN_149494c46(uVar2);
    FUN_1494bdf80(uVar2,0xb,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 != param_2;
}



// FUNCTION 1494e7adc FUN_1494e7adc body=47 status=ok
// SIG undefined FUN_1494e7adc(void)

undefined8 FUN_1494e7adc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1494e7b0c(param_1,1);
  if (lVar1 != 0) {
    uVar2 = FUN_1494a358a(lVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1494e7b0c FUN_1494e7b0c body=108 status=ok
// SIG undefined FUN_1494e7b0c(void)

longlong FUN_1494e7b0c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar4 = FUN_145ba6e90();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(int *)(lVar3 + 0x128) == param_2)) {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 1494e7b7c FUN_1494e7b7c body=17 status=ok
// SIG undefined FUN_1494e7b7c(void)

undefined8 FUN_1494e7b7c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20);
  }
  return 0;
}



// FUNCTION 1494e7b8e FUN_1494e7b8e body=578 status=ok
// SIG undefined FUN_1494e7b8e(void)

void FUN_1494e7b8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446e0b6e();
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_1 + 0x68);
    FUN_1406fa324(lVar3 + 0x38,param_1 + 0x70);
    *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(param_1 + 0x80);
    FUN_144a787a6(lVar3 + 0x50,param_1 + 0x88);
    FUN_1406fa324(lVar3 + 0x60,param_1 + 0x98);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x70) = *(undefined8 *)(param_1 + 0x60);
  }
  uVar5 = FUN_140f4f540();
  uVar6 = FUN_144a64e42();
  FUN_14949035a(uVar5,&local_30,uVar6);
  uVar5 = FUN_140f4f540();
  uVar6 = FUN_144a49fc8();
  FUN_14949035a(uVar5,&local_40,uVar6);
  local_80 = local_40;
  local_78 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_70,&local_80);
  if (*(longlong *)(param_1 + 0x30) == local_70) {
    cVar4 = FUN_144a7afa6(param_1 + 0x40,&local_60);
  }
  else {
    cVar4 = '\0';
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\0') {
    local_90 = local_30;
    local_88 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_140e6511c(&local_70,&local_90);
    *(longlong *)(param_1 + 0x30) = local_70;
    *(undefined8 *)(param_1 + 0x38) = local_68;
    *(undefined4 *)(param_1 + 0x40) = local_60;
    *(undefined4 *)(param_1 + 0x44) = uStack_5c;
    *(undefined4 *)(param_1 + 0x48) = uStack_58;
    *(undefined4 *)(param_1 + 0x4c) = uStack_54;
    if ((undefined8 *)(param_1 + 0x38) == &local_68) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x50) = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x58) = local_48;
      *(undefined4 *)(param_1 + 0x5c) = local_44;
    }
    FUN_14282b7b8(param_1);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e7dd6 FUN_1494e7dd6 body=33 status=ok
// SIG undefined FUN_1494e7dd6(void)

undefined8 FUN_1494e7dd6(undefined8 param_1,undefined8 param_2)

{
  FUN_14010318a(param_1,param_2,0);
  FUN_1494bd26d(param_2);
  return param_2;
}



// FUNCTION 1494e7df8 FUN_1494e7df8 body=244 status=ok
// SIG undefined FUN_1494e7df8(void)

ulonglong FUN_1494e7df8(undefined8 *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_48,6);
  if (uVar1 == (local_48 & 0xffffffff)) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),param_1);
  }
  else {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_48,0xd);
    param_2 = 0;
    if (uVar1 != (local_48 & 0xffffffff)) goto LAB_1494e7e4e;
    local_48 = 0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_48);
    uVar1 = (ulonglong)((int)uStack_40 - 1);
    if ((int)uStack_40 == 0) {
      uVar1 = param_2;
    }
    FUN_1446f82e2(&local_38,uVar1,local_48,1);
    *param_1 = local_38;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  param_2 = CONCAT71((int7)(param_2 >> 8),1);
LAB_1494e7e4e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e7ef6 FUN_1494e7ef6 body=28 status=ok
// SIG undefined FUN_1494e7ef6(void)

void FUN_1494e7ef6(undefined8 param_1)

{
  thunk_FUN_1446f1718();
  FUN_1408a750e(param_1,1);
  return;
}



// FUNCTION 1494e7f12 FUN_1494e7f12 body=90 status=ok
// SIG undefined FUN_1494e7f12(void)

void FUN_1494e7f12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1446e0b6e();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  lVar2 = FUN_144a7a812();
  lVar1 = *(longlong *)(lVar1 + 0x10);
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return;
  }
  uVar3 = FUN_144b00ba4(param_1);
  FUN_14949aac9(*(undefined8 *)(param_1 + 0x10),0,uVar3);
  return;
}



// FUNCTION 1494e7f6c FUN_1494e7f6c body=379 status=ok
// SIG undefined FUN_1494e7f6c(void)

undefined8 FUN_1494e7f6c(longlong param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  int local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [48];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_141215e22(param_2);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar2 = FUN_145ba740c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1494e7fc6;
  }
  lVar3 = 0;
LAB_1494e7fc6:
  lVar3 = *(longlong *)(lVar3 + 0x70);
  FUN_1494e80e8(param_1,&local_68);
  if (lVar3 != 0) {
    cVar1 = FUN_14945fc10(&local_68);
    if (cVar1 != '\0') {
      iVar4 = *(int *)(lVar3 + 0x34) * *(int *)(lVar3 + 0x30);
      param_1 = param_1 + *(int *)(lVar3 + 0x44);
      FUN_1494947ba(&local_68,local_a8);
      FUN_140e6511c(local_98,local_a8);
      FUN_1494e817e(param_2,local_98);
      _Src = local_48;
      local_e8 = local_68;
      uStack_e4 = uStack_64;
      uStack_e0 = uStack_60;
      uStack_dc = uStack_5c;
      local_d8 = local_58;
      uStack_d4 = uStack_54;
      uStack_d0 = uStack_50;
      uStack_cc = uStack_4c;
      local_c8 = (void *)0x0;
      local_c0 = local_40;
      local_b8 = param_1;
      local_b0 = iVar4;
      if ((longlong)local_40 == 0) {
        local_bc = 0;
      }
      else {
        FUN_1446dd670(&local_c8,local_40,0);
        memcpy(local_c8,_Src,(longlong)local_40 * 2);
      }
      FUN_1494e8230(param_2,&local_e8,&local_b8);
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e80e8 FUN_1494e80e8 body=147 status=ok
// SIG undefined FUN_1494e80e8(void)

undefined8 FUN_1494e80e8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar2 = FUN_145ba740c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14945f130(param_2,lVar1 + 0x250);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e817e FUN_1494e817e body=177 status=ok
// SIG undefined FUN_1494e817e(void)

void FUN_1494e817e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401f9f5c();
  uVar1 = FUN_149466e92(param_2);
  FUN_1446f470e(&local_38,L"Value",1);
  uVar1 = FUN_149499e14(uVar1,0,local_38);
  FUN_1446f470e(&local_40,L"Value",1);
  FUN_14688ec08(param_1,local_40,uVar1);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e8230 FUN_1494e8230 body=172 status=ok
// SIG undefined FUN_1494e8230(void)

void FUN_1494e8230(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  void *_Src;
  void *_Dst;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_145814b44();
  plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0xc0) + 0x28);
  uVar4 = FUN_149466e92(param_2);
  uVar4 = FUN_149499e14(uVar4,0,0);
  cVar2 = (**(code **)(*plVar1 + 0x1b0))(plVar1,uVar4);
  if (cVar2 != '\0') {
    _Src = (void *)*param_3;
    _Dst = *(void **)(param_1 + 8);
    if (_Dst != _Src) {
      if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*plVar1 + 0x100))(plVar1,_Dst,_Src,(int)plVar1[6]);
      }
      else {
        memcpy(_Dst,_Src,(longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
      }
    }
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494e82dc FUN_1494e82dc body=20 status=ok
// SIG undefined FUN_1494e82dc(void)

bool FUN_1494e82dc(void)

{
  int iVar1;
  
  iVar1 = FUN_14688e954();
  return iVar1 == 1;
}



// FUNCTION 1494e82f0 FUN_1494e82f0 body=210 status=ok
// SIG undefined FUN_1494e82f0(void)

undefined8 * FUN_1494e82f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_145814b44();
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xc0) + 0x28);
  cVar4 = FUN_14945fc10(param_3);
  if ((cVar4 != '\0') && (lVar5 != 0)) {
    iVar1 = *(int *)(lVar5 + 0x34);
    iVar2 = *(int *)(lVar5 + 0x30);
    iVar3 = *(int *)(lVar5 + 0x44);
    lVar5 = *(longlong *)(param_1 + 8);
    uVar6 = FUN_149466e92(param_3);
    FUN_1494ab178(uVar6,param_2);
    uVar6 = FUN_149466e92(param_3);
    local_40 = iVar3 + lVar5;
    local_38 = iVar1 * iVar2;
    cVar4 = FUN_1494ab092(uVar6,&local_40,param_2);
    if (cVar4 != '\0') goto LAB_1494e833d;
    FUN_145b26c5e(param_2);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_1494e833d:
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e83c4 FUN_1494e83c4 body=98 status=ok
// SIG undefined FUN_1494e83c4(void)

undefined8 * FUN_1494e83c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_145814b44();
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0xc0) + 0x28);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,*(undefined8 *)(param_1 + 8),1,0,0,0,0);
  }
  return param_2;
}



// FUNCTION 1494e842a FUN_1494e842a body=203 status=ok
// SIG undefined FUN_1494e842a(void)

void FUN_1494e842a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [48];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *param_2;
  if (lVar5 == *(longlong *)(param_1 + 0x40)) {
    cVar3 = FUN_144a7afa6(param_2 + 2,param_1 + 0x50);
    if (cVar3 == '\0') {
      lVar5 = *param_2;
      goto LAB_1494e84ad;
    }
    iVar4 = FUN_14688e954(param_1 + 0x70);
    if (iVar4 == 1) goto LAB_1494e8477;
    puVar6 = local_80;
  }
  else {
LAB_1494e84ad:
    *(longlong *)(param_1 + 0x40) = lVar5;
    *(longlong *)(param_1 + 0x48) = param_2[1];
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar5 = param_2[3];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x50) = (int)param_2[2];
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(int *)(param_1 + 0x58) = (int)lVar5;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    FUN_144a787a6(param_1 + 0x60,param_2 + 4);
    puVar6 = local_50;
  }
  FUN_14945f130(puVar6,param_2);
  FUN_1494e817e(param_1 + 0x70,puVar6);
LAB_1494e8477:
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e84f6 FUN_1494e84f6 body=17 status=ok
// SIG undefined FUN_1494e84f6(void)

undefined8 FUN_1494e84f6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20);
  }
  return 0;
}



// FUNCTION 1494e8508 FUN_1494e8508 body=782 status=ok
// SIG undefined FUN_1494e8508(void)

void FUN_1494e8508(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138 [48];
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_f0 [48];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1446e0b6e();
  local_88 = 0x93ede1aa;
  uStack_84 = 0x10ca7375;
  uStack_80 = 0x4df98a28;
  uStack_7c = 0x49b157a0;
  iVar5 = FUN_1448a256a(param_1);
  if ((iVar5 < 10) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    FUN_1400337aa();
    FUN_1494e7f6c(*(undefined8 *)(param_1 + 0xb0),&local_78);
    if ((ulonglong *)(param_1 + 0x70) != &local_78) {
      FUN_1401f9f5c();
      if ((local_78 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_78);
      }
      *(ulonglong *)(param_1 + 0x70) = local_78;
      *(undefined8 *)(param_1 + 0x78) = uStack_70;
      local_78 = 0;
      uStack_70 = 0;
    }
    FUN_1401f9f5c(&local_78);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  uVar6 = FUN_140f4f540();
  uVar7 = FUN_144a64e42();
  FUN_14949035a(uVar6,&local_98,uVar7);
  uVar6 = FUN_140f4f540();
  uVar7 = FUN_144a49fc8();
  FUN_14949035a(uVar6,&local_a8,uVar7);
  local_b8 = local_98;
  local_b0 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  FUN_140e6511c(&local_78,&local_b8);
  if (*(ulonglong *)(param_1 + 0x40) == local_78) {
    cVar4 = FUN_144a7afa6(param_1 + 0x50,local_68);
  }
  else {
    cVar4 = '\0';
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\0') {
    FUN_1446f470e(&local_c0,L"Value",1);
    FUN_14688ef52(param_1 + 0x70,&local_78,local_c0);
    local_100 = local_a8;
    local_f8 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    FUN_140e6511c(local_f0,&local_100);
    FUN_1494e842a(param_1,local_f0);
    if ((&DAT_14bd222f0)[local_78 >> 0x20 & 0xff] == '\x01') {
      dVar3 = (double)(float)local_78;
      FUN_1446f470e(&local_108,L"Value",1);
      FUN_14688f194(param_1 + 0x70,local_108,SUB84(dVar3,0));
    }
  }
  iVar5 = FUN_14688e954(param_1 + 0x70);
  if (iVar5 != 1) {
    FUN_14945f130(local_138,(ulonglong *)(param_1 + 0x40));
    FUN_1494e842a(param_1,local_138);
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e8818 FUN_1494e8818 body=45 status=ok
// SIG undefined FUN_1494e8818(void)

longlong FUN_1494e8818(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b08fde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e8846 FUN_1494e8846 body=48 status=ok
// SIG undefined FUN_1494e8846(void)

longlong FUN_1494e8846(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x90;
  FUN_145b08fde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494e8876 FUN_1494e8876 body=83 status=ok
// SIG undefined FUN_1494e8876(void)

undefined8 * FUN_1494e8876(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
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



// FUNCTION 1494e894a FUN_1494e894a body=59 status=ok
// SIG undefined FUN_1494e894a(void)

undefined8 FUN_1494e894a(longlong *param_1)

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



// FUNCTION 1494e8a20 FUN_1494e8a20 body=63 status=ok
// SIG undefined FUN_1494e8a20(void)

undefined1 FUN_1494e8a20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1401fa0f0(param_2,*param_3,param_3[1]);
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1494e8a88 FUN_1494e8a88 body=59 status=ok
// SIG undefined FUN_1494e8a88(void)

undefined8 FUN_1494e8a88(longlong *param_1)

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



// FUNCTION 1494e8ace FUN_1494e8ace body=32 status=ok
// SIG undefined FUN_1494e8ace(void)

void FUN_1494e8ace(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_1401f9f5c(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1494e8b82 FUN_1494e8b82 body=75 status=ok
// SIG undefined FUN_1494e8b82(void)

undefined8 FUN_1494e8b82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494e8bf6 FUN_1494e8bf6 body=59 status=ok
// SIG undefined FUN_1494e8bf6(void)

undefined8 FUN_1494e8bf6(longlong *param_1)

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



// FUNCTION 1494e8c3c FUN_1494e8c3c body=38 status=ok
// SIG undefined FUN_1494e8c3c(void)

void FUN_1494e8c3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1494e8cb2 FUN_1494e8cb2 body=145 status=ok
// SIG undefined FUN_1494e8cb2(void)

void FUN_1494e8cb2(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x20;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e02];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x20,8);
  }
  uVar2 = 0x7fffffff;
  if (3 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1494e8d44 FUN_1494e8d44 body=68 status=ok
// SIG undefined FUN_1494e8d44(void)

void FUN_1494e8d44(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1494e8ed0();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1494e8d88 FUN_1494e8d88 body=327 status=ok
// SIG undefined FUN_1494e8d88(void)

undefined4 * FUN_1494e8d88(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1494e5750(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1494e5836(param_1,uVar2,local_40);
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
      FUN_1494d6a98(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e8ed0 FUN_1494e8ed0 body=322 status=ok
// SIG undefined FUN_1494e8ed0(void)

void FUN_1494e8ed0(longlong *param_1)

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



// FUNCTION 1494e9038 FUN_1494e9038 body=32 status=ok
// SIG undefined FUN_1494e9038(void)

undefined8 FUN_1494e9038(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Groom");
  return param_2;
}



// FUNCTION 1494e9058 FUN_1494e9058 body=3958 status=ok
// SIG undefined FUN_1494e9058(void)

longlong * FUN_1494e9058(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined1 local_280 [16];
  undefined1 local_270 [16];
  undefined8 local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  uVar5 = DAT_14cc1daa0;
  uVar4 = DAT_14cc1da98;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"NumControlPoints",1);
  FUN_1400b22c2(local_88,"ReadNumControlPoints");
  FUN_14946b838(&local_70,local_78,local_88,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_70;
  puVar2[1] = 0;
  puVar2[1] = local_68;
  local_68 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_60._4_4_;
  local_60 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_44;
  *(undefined4 *)(puVar2 + 5) = local_48;
  FUN_14946649a(&local_70);
  FUN_1446ddc76(&local_90,"NumCurves",1);
  FUN_1400b22c2(local_a0,"ReadNumCurves");
  FUN_14946b838(&local_70,local_90,local_a0,1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_a8,"Position",1);
  FUN_1400b22c2(local_b8,"ReadPosition");
  FUN_1400b22c2(local_c8,"ReadPosition");
  local_2b0 = 1;
  local_2b8 = local_c8;
  FUN_149466350(&local_70,local_a8,local_b8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_d0,"Radius",1);
  FUN_1400b22c2(local_e0,"ReadRadius");
  FUN_1400b22c2(local_f0,"ReadRadius");
  local_2b0 = 1;
  local_2b8 = local_f0;
  FUN_149466350(&local_70,local_d0,local_e0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_f8,"CoordU",1);
  FUN_1400b22c2(local_108,"ReadCoordU");
  FUN_1400b22c2(local_118,"ReadCoordU");
  local_2b0 = 1;
  local_2b8 = local_118;
  FUN_149466350(&local_70,local_f8,local_108,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_120,"Length",1);
  FUN_1400b22c2(local_130,"ReadLength");
  FUN_1400b22c2(local_140,"ReadLength");
  local_2b0 = 1;
  local_2b8 = local_140;
  FUN_149466350(&local_70,local_120,local_130,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_148,"RootUV",1);
  FUN_1400b22c2(local_158,"ReadRootUV");
  FUN_1400b22c2(local_168,"ReadRootUV");
  local_2b0 = 1;
  local_2b8 = local_168;
  FUN_149466350(&local_70,local_148,local_158,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_170,&DAT_149e53a28,1);
  FUN_1400b22c2(local_180,"ReadSeed");
  FUN_1400b22c2(local_190,"ReadSeed");
  local_2b0 = 1;
  local_2b8 = local_190;
  FUN_149466350(&local_70,local_170,local_180,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_198,"ClumpId",1);
  FUN_1400b22c2(local_1a8,"ReadClumpId");
  FUN_1400b22c2(local_1b8,"ReadClumpId");
  local_2b0 = 1;
  local_2b8 = local_1b8;
  FUN_149466350(&local_70,local_198,local_1a8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_1c0,"Color",1);
  FUN_1400b22c2(local_1d0,"ReadColor");
  FUN_1400b22c2(local_1e0,"ReadColor");
  local_2b0 = 1;
  local_2b8 = local_1e0;
  FUN_149466350(&local_70,local_1c0,local_1d0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_1e8,"Roughness",1);
  FUN_1400b22c2(local_1f8,"ReadRoughness");
  FUN_1400b22c2(local_208,"ReadRoughness");
  local_2b0 = 1;
  local_2b8 = local_208;
  FUN_149466350(&local_70,local_1e8,local_1f8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_210,&DAT_14bd249dd,1);
  FUN_1400b22c2(local_220,"ReadAO");
  FUN_1400b22c2(local_230,"ReadAO");
  local_2b0 = 1;
  local_2b8 = local_230;
  FUN_149466350(&local_70,local_210,local_220,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_238,"CurveOffsetPoint",1);
  FUN_1400b22c2(local_248,"ReadCurveOffsetPoint");
  FUN_1400b22c2(local_258,"ReadCurveOffsetPoint");
  local_2b0 = 1;
  local_2b8 = local_258;
  FUN_149466350(&local_70,local_238,local_248,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_260,"CurveNumPoint",1);
  FUN_1400b22c2(local_270,"ReadCurveNumPoint");
  FUN_1400b22c2(local_280,"ReadCurveNumPoint");
  local_2b0 = 1;
  local_2b8 = local_280;
  FUN_149466350(&local_70,local_260,local_270,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_288,"GuideIndex",1);
  FUN_1400b22c2(local_298,"ReadGuideIndex");
  FUN_1400b22c2(local_2a8,"ReadGuideIndex");
  local_2b0 = 1;
  local_2b8 = local_2a8;
  FUN_149466350(&local_70,local_288,local_298,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494e9fd0 FUN_1494e9fd0 body=47 status=ok
// SIG undefined FUN_1494e9fd0(void)

longlong * FUN_1494e9fd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14586a468();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 1494ea000 FUN_1494ea000 body=1253 status=ok
// SIG undefined FUN_1494ea000(void)

void FUN_1494ea000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumControlPoints");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadNumCurves");
  uVar1 = FUN_149459122(uVar1,local_48);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadPosition");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadRadius");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadCoordU");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_88,L"ReadLength");
  uVar1 = FUN_149459122(uVar1,local_88);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_98,L"ReadRootUV");
  uVar1 = FUN_149459122(uVar1,local_98);
  uVar1 = FUN_1494593ba(uVar1,3,2,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_a8,L"ReadSeed");
  uVar1 = FUN_149459122(uVar1,local_a8);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_b8,L"ReadClumpId");
  uVar1 = FUN_149459122(uVar1,local_b8);
  uVar1 = FUN_1494593ba(uVar1,2,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_c8,L"ReadColor");
  uVar1 = FUN_149459122(uVar1,local_c8);
  uVar1 = FUN_1494593ba(uVar1,3);
  local_128 = 0;
  FUN_149459206(uVar1,2);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_d8,L"ReadRoughnes");
  uVar1 = FUN_149459122(uVar1,local_d8);
  uVar1 = FUN_1494593ba(uVar1,3);
  local_128 = 0;
  FUN_149459206(uVar1,2);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_e8,L"ReadAO");
  uVar1 = FUN_149459122(uVar1,local_e8);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_f8,L"ReadCurveOffsetPoint");
  uVar1 = FUN_149459122(uVar1,local_f8);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_108,L"ReadCurveNumPoint");
  uVar1 = FUN_149459122(uVar1,local_108);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_118,L"ReadGuideIndex");
  uVar1 = FUN_149459122(uVar1,local_118);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_128 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ea4ee FUN_1494ea4ee body=154 status=ok
// SIG undefined FUN_1494ea4ee(void)

void FUN_1494ea4ee(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494ee664();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1dab0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x170;
  return;
}



// FUNCTION 1494ea590 FUN_1494ea590 body=43 status=ok
// SIG undefined FUN_1494ea590(void)

void FUN_1494ea590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroom.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 1494ea5bc FUN_1494ea5bc body=438 status=ok
// SIG undefined FUN_1494ea5bc(void)

void FUN_1494ea5bc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroom.ush",0,&local_d8,0)
  ;
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ea774 FUN_1494ea774 body=100 status=ok
// SIG undefined FUN_1494ea774(void)

longlong FUN_1494ea774(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_1494ea7d8(uVar3);
  if (*param_2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = FUN_14586a468();
    cVar2 = FUN_144a7ca96(param_2,uVar3);
    lVar1 = *param_2;
    lVar5 = 0;
    if (cVar2 != '\0') {
      lVar5 = lVar1;
    }
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
      lVar5 = lVar1;
    }
  }
  *(longlong *)(lVar4 + 0x28) = lVar5;
  return lVar4;
}



// FUNCTION 1494ea7d8 FUN_1494ea7d8 body=148 status=ok
// SIG undefined FUN_1494ea7d8(void)

undefined8 FUN_1494ea7d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba75e0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ea86e FUN_1494ea86e body=53 status=ok
// SIG undefined FUN_1494ea86e(void)

void FUN_1494ea86e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bd24c30;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[1] = uVar1;
  return;
}



// FUNCTION 1494ea8a4 FUN_1494ea8a4 body=127 status=ok
// SIG undefined FUN_1494ea8a4(void)

ulonglong FUN_1494ea8a4(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (((param_2[1] == 0x170) && (*(longlong *)(param_1 + 8) != 0)) &&
     (uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0x850), *param_2 == uVar2)) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((ulonglong)uVar2 != 0) {
      uVar5 = 0;
      do {
        if (((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x850) <= (longlong)uVar5) ||
           (puVar3 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x848) + uVar5 * 8)
           , puVar3 == (undefined8 *)0x0)) goto LAB_1494ea915;
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  else {
LAB_1494ea915:
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1494ea924 FUN_1494ea924 body=729 status=ok
// SIG undefined FUN_1494ea924(void)

void FUN_1494ea924(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1494eecec(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (uVar6 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x850), uVar6 != 0)) {
    local_80 = (longlong *)(param_1 + 0x30);
    uVar8 = 0;
    local_70 = param_1 + 0x20;
    lVar7 = param_2 + 0x198;
    local_88 = param_2 + 0x70;
    do {
      if (((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(*(longlong *)(param_1 + 8) + 0x850))) &&
         (puVar2 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x848) + uVar8 * 8),
         puVar2 != (undefined8 *)0x0)) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_78 = lVar7;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        puVar3 = (undefined8 *)FUN_1494eabfe(param_1 + 0x10);
        uVar4 = FUN_14716d181(param_2,puVar2[8] + 0x50);
        *puVar3 = uVar4;
        uVar4 = FUN_14716d181(param_2,puVar2[8] + 0x70);
        puVar3[1] = uVar4;
        uVar4 = FUN_14716d181(param_2,puVar2[8] + 0x110);
        puVar3[2] = uVar4;
        uVar4 = FUN_14716d181(param_2,puVar2[8] + 0xf0);
        puVar3[3] = uVar4;
        uVar4 = FUN_14716d181(param_2,puVar2[8] + 0xd0);
        puVar3[4] = uVar4;
        uVar4 = FUN_14716d181(param_2,puVar2[8] + 0xb0);
        puVar3[5] = uVar4;
        puVar3 = (undefined8 *)FUN_1494eac3e(local_70);
        if (puVar2[10] == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_14716d181(param_2,puVar2[10] + 0x50);
        }
        *puVar3 = uVar4;
        if (puVar2[10] == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_14716d181(param_2,puVar2[10] + 0x70);
        }
        lVar7 = local_78;
        puVar3[1] = uVar4;
        if (*local_80 == 0) {
          local_50 = FUN_14018b826(&DAT_14ca63b10,param_2,0x10);
          local_68[0] = 0;
          local_64 = 0xffffffff00000000;
          local_58 = 0;
          if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
            local_68[0] = 0x1c;
          }
          lVar5 = FUN_14475683e(lVar7,local_88,local_50 + 8,local_68);
          *local_80 = lVar5;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) {
          local_50 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
          local_68[0] = 0;
          local_64 = 0xffffffff00000000;
          local_58 = 0;
          if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
            local_68[0] = 0x1c;
          }
          uVar4 = FUN_14475683e(lVar7,local_88,local_50 + 8,local_68);
          *(undefined8 *)(param_1 + 0x38) = uVar4;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494eabfe FUN_1494eabfe body=63 status=ok
// SIG undefined FUN_1494eabfe(void)

longlong FUN_1494eabfe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494eed2c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1494eed1c(lVar2);
  return lVar2;
}



// FUNCTION 1494eac3e FUN_1494eac3e body=59 status=ok
// SIG undefined FUN_1494eac3e(void)

longlong FUN_1494eac3e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494eedc8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1494eedc0(lVar2);
  return lVar2;
}



// FUNCTION 1494eac7a FUN_1494eac7a body=409 status=ok
// SIG undefined FUN_1494eac7a(void)

void FUN_1494eac7a(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_458 [40];
  undefined8 *local_430;
  undefined1 local_428 [576];
  undefined1 local_1e8 [416];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  iVar3 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar3) {
    iVar4 = *(int *)(param_2 + 0x14);
    puVar14 = (undefined8 *)
              ((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18) + 0x168);
    lVar15 = 0;
    lVar13 = 0;
    lVar16 = 0;
    do {
      puVar14[-0x28] = 0;
      puVar14[-7] = *(undefined8 *)(param_1 + 0x30);
      puVar14[-6] = *(undefined8 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      puVar14[-3] = uVar5;
      puVar14[-2] = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      puVar14[-4] = uVar5;
      puVar14[-5] = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      puVar14[-1] = uVar5;
      *puVar14 = uVar5;
      if ((lVar16 < *(int *)(*(longlong *)(param_1 + 8) + 0x850)) &&
         (puVar6 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x848) + lVar13),
         puVar6 != (undefined8 *)0x0)) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        local_430 = puVar14 + -0x2d;
        FUN_14909b914(local_428,puVar6,0);
        memcpy(local_430,local_1e8,0x130);
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar15 * 2) != 0) {
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + lVar15 * 2);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          uVar5 = *(undefined8 *)(puVar2 + 4);
          uVar11 = *(undefined8 *)(puVar2 + 6);
          uVar12 = *(undefined8 *)(puVar2 + 10);
          puVar14[-3] = *(undefined8 *)(puVar2 + 8);
          puVar14[-2] = uVar12;
          puVar14[-5] = uVar5;
          puVar14[-4] = uVar11;
          *(undefined4 *)(puVar14 + -7) = uVar7;
          *(undefined4 *)((longlong)puVar14 + -0x34) = uVar8;
          *(undefined4 *)(puVar14 + -6) = uVar9;
          *(undefined4 *)((longlong)puVar14 + -0x2c) = uVar10;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar13 * 2) != 0) {
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar13 * 2);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined4 *)(puVar14 + -1) = *puVar2;
          *(undefined4 *)((longlong)puVar14 + -4) = uVar7;
          *(undefined4 *)puVar14 = uVar8;
          *(undefined4 *)((longlong)puVar14 + 4) = uVar9;
        }
        FUN_1490846d2(local_428);
      }
      lVar16 = lVar16 + 1;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 0x18;
      puVar14 = (undefined8 *)((longlong)puVar14 + (longlong)iVar4);
    } while ((longlong)iVar3 * 8 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494eae14 FUN_1494eae14 body=32 status=ok
// SIG undefined FUN_1494eae14(void)

undefined8 FUN_1494eae14(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Execute Groom");
  return param_2;
}



// FUNCTION 1494eae42 FUN_1494eae42 body=244 status=ok
// SIG undefined FUN_1494eae42(void)

longlong * FUN_1494eae42(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_58,"NumThreads",1);
  FUN_1400b22c2(local_68,"ReadNumThreads");
  FUN_14946b838(&local_50,local_58,local_68,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = local_50;
  puVar1[1] = 0;
  puVar1[1] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar1 + 2) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar1 + 0x14) = local_40._4_4_;
  local_40 = 0;
  puVar1[3] = 0;
  puVar1[3] = local_38;
  local_38 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_30._4_4_;
  local_30 = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = local_24;
  *(undefined4 *)(puVar1 + 5) = local_28;
  FUN_14946649a(&local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494eaf38 FUN_1494eaf38 body=47 status=ok
// SIG undefined FUN_1494eaf38(void)

longlong * FUN_1494eaf38(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14586a468();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 1494eaf68 FUN_1494eaf68 body=111 status=ok
// SIG undefined FUN_1494eaf68(void)

void FUN_1494eaf68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_28,L"ReadNumThreads");
  uVar1 = FUN_149459122(uVar1,local_28);
  FUN_1494593ba(uVar1,1,3,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494eafe0 FUN_1494eafe0 body=151 status=ok
// SIG undefined FUN_1494eafe0(void)

void FUN_1494eafe0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494eee4e();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1dbc0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 1494eb080 FUN_1494eb080 body=43 status=ok
// SIG undefined FUN_1494eb080(void)

void FUN_1494eb080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroomExec.ush",0)
  ;
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 1494eb0ac FUN_1494eb0ac body=438 status=ok
// SIG undefined FUN_1494eb0ac(void)

void FUN_1494eb0ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroomExec.ush",0,
                &local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494eb264 FUN_1494eb264 body=111 status=ok
// SIG undefined FUN_1494eb264(void)

longlong FUN_1494eb264(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_1494eb2d3(uVar3);
  if (*param_2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = FUN_14586a468();
    cVar2 = FUN_144a7ca96(param_2,uVar3);
    lVar1 = *param_2;
    lVar5 = 0;
    if (cVar2 != '\0') {
      lVar5 = lVar1;
    }
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
      lVar5 = lVar1;
    }
  }
  *(longlong *)(lVar4 + 0x28) = lVar5;
  *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(param_1 + 0x30);
  return lVar4;
}



// FUNCTION 1494eb2d3 FUN_1494eb2d3 body=148 status=ok
// SIG undefined FUN_1494eb2d3(void)

undefined8 FUN_1494eb2d3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba77b4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494eb392 FUN_1494eb392 body=39 status=ok
// SIG undefined FUN_1494eb392(void)

void FUN_1494eb392(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0x28);
  FUN_1494eb3ba(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1494eb3ba FUN_1494eb3ba body=229 status=ok
// SIG undefined FUN_1494eb3ba(void)

undefined8 * FUN_1494eb3ba(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  *param_1 = &PTR_FUN_14bd24d30;
  plVar1 = param_1 + 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  FUN_1494eb4a0(plVar1);
  if (param_1[1] != 0) {
    uVar3 = *(uint *)(param_1[1] + 0x850);
    uVar6 = (ulonglong)uVar3;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    if (*(int *)((longlong)param_1 + 0x1c) < (int)uVar3) {
      FUN_1494ef1de(plVar1,uVar3);
    }
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (((int)uVar7 < *(int *)(param_1[1] + 0x850)) &&
           (puVar5 = *(undefined8 **)(*(longlong *)(param_1[1] + 0x848) + uVar7 * 8),
           puVar5 != (undefined8 *)0x0)) {
          LOCK();
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)(puVar5 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          iVar4 = *(int *)(param_1 + 3);
          *(uint *)(param_1 + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
            FUN_1494ef0bc(plVar1,iVar4);
          }
          *(undefined8 **)(*plVar1 + (longlong)iVar4 * 8) = puVar5;
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1494eb4a0 FUN_1494eb4a0 body=116 status=ok
// SIG undefined FUN_1494eb4a0(void)

void FUN_1494eb4a0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_1494ef0bc(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)(uint)-iVar1 << 3);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1494ef142(param_1);
  return;
}



// FUNCTION 1494eb514 FUN_1494eb514 body=258 status=ok
// SIG undefined FUN_1494eb514(void)

int FUN_1494eb514(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146ea3024(param_2,0);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_146ea3024(param_2);
    iVar5 = *(int *)(param_1 + 0x18);
  }
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar7 = 0;
    iVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x40), lVar4 != 0)) {
        uVar1 = *(undefined4 *)
                 (*(longlong *)(lVar4 + 0x130) + 8 +
                 (ulonglong)(*(char *)(param_1 + 0x20) == '\x01') * 4);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146ddc768(param_2,iVar2);
        }
        lVar4 = *param_2;
        *(undefined4 *)(lVar4 + (longlong)iVar2 * 0xc) = uVar1;
        *(undefined1 **)(lVar4 + 4 + (longlong)iVar2 * 0xc) = &DAT_100000001;
        iVar6 = iVar6 + 1;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar5 * 8 != lVar7);
  }
  return iVar6;
}



// FUNCTION 1494eb632 FUN_1494eb632 body=97 status=ok
// SIG undefined FUN_1494eb632(void)

void FUN_1494eb632(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    iVar2 = *(int *)(param_2 + 0x14);
    lVar3 = *(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_2 + 0x10) + 8;
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + -8) =
           *(undefined4 *)
            (*(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar4 * 8) + 0x40) +
              0x130) + 8 + (ulonglong)(*(char *)(param_1 + 0x20) == '\x01') * 4);
      *(undefined1 **)(lVar3 + -4) = &DAT_100000001;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + iVar2;
    } while (iVar1 != lVar4);
  }
  return;
}



// FUNCTION 1494eb694 FUN_1494eb694 body=32 status=ok
// SIG undefined FUN_1494eb694(void)

undefined8 FUN_1494eb694(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Guides");
  return param_2;
}



// FUNCTION 1494eb6b4 FUN_1494eb6b4 body=1306 status=ok
// SIG undefined FUN_1494eb6b4(void)

longlong * FUN_1494eb6b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  uVar5 = DAT_14cc1daa0;
  uVar4 = DAT_14cc1da98;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"NumGuidePoints",1);
  FUN_1400b22c2(local_88,"ReadNumGuidePoints");
  FUN_14946b838(&local_70,local_78,local_88,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_70;
  puVar2[1] = 0;
  puVar2[1] = local_68;
  local_68 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_60._4_4_;
  local_60 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_44;
  *(undefined4 *)(puVar2 + 5) = local_48;
  FUN_14946649a(&local_70);
  FUN_1446ddc76(&local_90,"NumGuideCurves",1);
  FUN_1400b22c2(local_a0,"ReadNumGuideCurves");
  FUN_14946b838(&local_70,local_90,local_a0,1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_a8,"Position",1);
  FUN_1400b22c2(local_b8,"ReadPosition");
  FUN_1400b22c2(local_c8,"ReadPosition");
  local_120 = 1;
  local_128 = local_c8;
  FUN_149466350(&local_70,local_a8,local_b8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_d0,"CurveOffsetPoint",1);
  FUN_1400b22c2(local_e0,"ReadCurveOffsetPoint");
  FUN_1400b22c2(local_f0,"ReadCurveOffsetPoint");
  local_120 = 1;
  local_128 = local_f0;
  FUN_149466350(&local_70,local_d0,local_e0,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_f8,"CurveNumPoint",1);
  FUN_1400b22c2(local_108,"ReadCurveNumPoint");
  FUN_1400b22c2(local_118,"ReadCurveNumPoint");
  local_120 = 1;
  local_128 = local_118;
  FUN_149466350(&local_70,local_f8,local_108,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ebbd0 FUN_1494ebbd0 body=47 status=ok
// SIG undefined FUN_1494ebbd0(void)

longlong * FUN_1494ebbd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14586a468();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 1494ebc00 FUN_1494ebc00 body=427 status=ok
// SIG undefined FUN_1494ebc00(void)

void FUN_1494ebc00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumGuidePoints");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadNumGuideCurves");
  uVar1 = FUN_149459122(uVar1,local_48);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadPosition");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadCurveOffsetPoint");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadCurveNumPoint");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ebdb4 FUN_1494ebdb4 body=154 status=ok
// SIG undefined FUN_1494ebdb4(void)

void FUN_1494ebdb4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494ef23e();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1dc48;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x160;
  return;
}



// FUNCTION 1494ebe56 FUN_1494ebe56 body=43 status=ok
// SIG undefined FUN_1494ebe56(void)

void FUN_1494ebe56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroomGuide.ush",0
                       );
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 1494ebe82 FUN_1494ebe82 body=438 status=ok
// SIG undefined FUN_1494ebe82(void)

void FUN_1494ebe82(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroomGuide.ush",0,
                &local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ec03a FUN_1494ec03a body=100 status=ok
// SIG undefined FUN_1494ec03a(void)

longlong FUN_1494ec03a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_1494ec09e(uVar3);
  if (*param_2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = FUN_14586a468();
    cVar2 = FUN_144a7ca96(param_2,uVar3);
    lVar1 = *param_2;
    lVar5 = 0;
    if (cVar2 != '\0') {
      lVar5 = lVar1;
    }
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
      lVar5 = lVar1;
    }
  }
  *(longlong *)(lVar4 + 0x28) = lVar5;
  return lVar4;
}



// FUNCTION 1494ec09e FUN_1494ec09e body=148 status=ok
// SIG undefined FUN_1494ec09e(void)

undefined8 FUN_1494ec09e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba7988();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ec134 FUN_1494ec134 body=49 status=ok
// SIG undefined FUN_1494ec134(void)

void FUN_1494ec134(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bd24ea0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[1] = uVar1;
  return;
}



// FUNCTION 1494ec166 FUN_1494ec166 body=127 status=ok
// SIG undefined FUN_1494ec166(void)

ulonglong FUN_1494ec166(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (((param_2[1] == 0x160) && (*(longlong *)(param_1 + 8) != 0)) &&
     (uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0x850), *param_2 == uVar2)) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((ulonglong)uVar2 != 0) {
      uVar5 = 0;
      do {
        if (((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x850) <= (longlong)uVar5) ||
           (puVar3 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x848) + uVar5 * 8)
           , puVar3 == (undefined8 *)0x0)) goto LAB_1494ec1d7;
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  else {
LAB_1494ec1d7:
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1494ec1e6 FUN_1494ec1e6 body=589 status=ok
// SIG undefined FUN_1494ec1e6(void)

void FUN_1494ec1e6(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1494eecec(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x850), uVar7 != 0)) {
    local_70 = (longlong *)(param_1 + 0x20);
    uVar6 = 0;
    local_78 = param_2 + 0x198;
    local_80 = param_2 + 0x70;
    do {
      if (((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(*(longlong *)(param_1 + 8) + 0x850))) &&
         (puVar2 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x848) + uVar6 * 8),
         puVar2 != (undefined8 *)0x0)) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        puVar3 = (undefined8 *)FUN_1494eabfe(param_1 + 0x10);
        if (puVar2[3] != 0) {
          uVar4 = FUN_14716d181(param_2,puVar2[3] + 0x50);
          *puVar3 = uVar4;
          uVar4 = FUN_14716d181(param_2,puVar2[3] + 0x70);
          puVar3[1] = uVar4;
          uVar4 = FUN_14716d181(param_2,puVar2[3] + 0x110);
          puVar3[2] = uVar4;
          uVar4 = FUN_14716d181(param_2,puVar2[3] + 0xf0);
          puVar3[3] = uVar4;
        }
        if (*local_70 == 0) {
          local_50 = FUN_14018b826(&DAT_14ca63b10,param_2,0x10);
          local_68[0] = 0;
          local_64 = 0xffffffff00000000;
          local_58 = 0;
          if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
            local_68[0] = 0x1c;
          }
          lVar5 = FUN_14475683e(local_78,local_80,local_50 + 8,local_68);
          *local_70 = lVar5;
        }
        if (*(longlong *)(param_1 + 0x28) == 0) {
          local_50 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
          local_68[0] = 0;
          local_64 = 0xffffffff00000000;
          local_58 = 0;
          if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
            local_68[0] = 0x1c;
          }
          uVar4 = FUN_14475683e(local_78,local_80,local_50 + 8,local_68);
          *(undefined8 *)(param_1 + 0x28) = uVar4;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ec434 FUN_1494ec434 body=430 status=ok
// SIG undefined FUN_1494ec434(void)

void FUN_1494ec434(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
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
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_458 [40];
  void *local_430;
  undefined1 local_428 [576];
  undefined1 local_1e8 [416];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  iVar3 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar3) {
    lVar21 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18);
    iVar4 = *(int *)(param_2 + 0x14);
    lVar19 = 0;
    do {
      lVar20 = lVar19 * iVar4;
      *(undefined8 *)(lVar21 + 0x28 + lVar20) = 0;
      *(undefined8 *)(lVar21 + 0x130 + lVar20) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(lVar21 + 0x138 + lVar20) = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(lVar21 + 0x148 + lVar20) = uVar5;
      *(undefined8 *)(lVar21 + 0x140 + lVar20) = uVar5;
      if ((lVar19 < *(int *)(*(longlong *)(param_1 + 8) + 0x850)) &&
         (puVar6 = *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x848) + lVar19 * 8),
         puVar6 != (undefined8 *)0x0)) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        lVar22 = lVar19 * 0x30;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar22) != 0) {
          local_430 = (void *)(lVar20 + lVar21);
          FUN_14909b914(local_428,puVar6,0);
          memcpy(local_430,local_1e8,0x130);
          uVar18 = 0;
          if (puVar6[3] != 0) {
            uVar18 = *(undefined4 *)(*(longlong *)(puVar6[3] + 0x130) + 0xc);
          }
          *(undefined4 *)((longlong)local_430 + 0x28) = uVar18;
          uVar18 = 0;
          if (puVar6[3] != 0) {
            uVar18 = *(undefined4 *)(*(longlong *)(puVar6[3] + 0x130) + 8);
          }
          lVar20 = lVar20 + lVar21;
          *(undefined4 *)((longlong)local_430 + 0x2c) = uVar18;
          lVar7 = *(longlong *)(param_1 + 0x10);
          puVar2 = (undefined4 *)(lVar7 + lVar22);
          uVar18 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar2 = (undefined4 *)(lVar7 + 0x10 + lVar22);
          uVar11 = *puVar2;
          uVar12 = puVar2[1];
          uVar13 = puVar2[2];
          uVar14 = puVar2[3];
          puVar2 = (undefined4 *)(lVar7 + 0x20 + lVar22);
          uVar15 = puVar2[1];
          uVar16 = puVar2[2];
          uVar17 = puVar2[3];
          *(undefined4 *)(lVar20 + 0x150) = *puVar2;
          *(undefined4 *)(lVar20 + 0x154) = uVar15;
          *(undefined4 *)(lVar20 + 0x158) = uVar16;
          *(undefined4 *)(lVar20 + 0x15c) = uVar17;
          *(undefined4 *)(lVar20 + 0x140) = uVar11;
          *(undefined4 *)(lVar20 + 0x144) = uVar12;
          *(undefined4 *)(lVar20 + 0x148) = uVar13;
          *(undefined4 *)(lVar20 + 0x14c) = uVar14;
          *(undefined4 *)(lVar20 + 0x130) = uVar18;
          *(undefined4 *)(lVar20 + 0x134) = uVar8;
          *(undefined4 *)(lVar20 + 0x138) = uVar9;
          *(undefined4 *)(lVar20 + 0x13c) = uVar10;
          FUN_1490846d2(local_428);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ec5e4 FUN_1494ec5e4 body=32 status=ok
// SIG undefined FUN_1494ec5e4(void)

undefined8 FUN_1494ec5e4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Write Groom");
  return param_2;
}



// FUNCTION 1494ec612 FUN_1494ec612 body=2444 status=ok
// SIG undefined FUN_1494ec612(void)

longlong * FUN_1494ec612(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  uVar5 = DAT_14cc1daa0;
  uVar4 = DAT_14cc1da98;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_80,"Position",1);
  FUN_1400b22c2(local_90,"WritePosition");
  FUN_1400b22c2(local_a0,"ReadNumControlPoints");
  local_1f0 = 1;
  local_1f8 = local_a0;
  FUN_149466350(&local_78,local_80,local_90,uVar4);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_78;
  puVar2[1] = 0;
  puVar2[1] = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_68._4_4_;
  local_68 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_60;
  local_60 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_4c;
  *(undefined4 *)(puVar2 + 5) = local_50;
  FUN_14946649a(&local_78);
  FUN_1446ddc76(&local_a8,"Radius",1);
  FUN_1400b22c2(local_b8,"WriteRadius");
  FUN_1400b22c2(local_c8,"ReadNumControlPoints");
  local_1f0 = 1;
  local_1f8 = local_c8;
  FUN_149466350(&local_78,local_a8,local_b8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_d0,"PositionAndRadius",1);
  FUN_1400b22c2(local_e0,"WritePositionAndRadius");
  FUN_1400b22c2(local_f0,"ReadNumControlPoints");
  local_1f0 = 1;
  local_1f8 = local_f0;
  FUN_149466350(&local_78,local_d0,local_e0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_f8,"RootUV",1);
  FUN_1400b22c2(local_108,"WriteRootUV");
  FUN_1400b22c2(local_118,"ReadNumCurves");
  local_1f0 = 1;
  local_1f8 = local_118;
  FUN_149466350(&local_78,local_f8,local_108,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_120,&DAT_149e53a28,1);
  FUN_1400b22c2(local_130,"WriteSeed");
  FUN_1400b22c2(local_140,"ReadNumCurves");
  local_1f0 = 1;
  local_1f8 = local_140;
  FUN_149466350(&local_78,local_120,local_130,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_148,"ClumpId",1);
  FUN_1400b22c2(local_158,"WriteClumpId");
  FUN_1400b22c2(local_168,"ReadNumCurves");
  local_1f0 = 1;
  local_1f8 = local_168;
  FUN_149466350(&local_78,local_148,local_158,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_170,"Color",1);
  FUN_1400b22c2(local_180,"WriteColor");
  FUN_1400b22c2(local_190,"ReadNumControlPoints");
  local_1f0 = 1;
  local_1f8 = local_190;
  FUN_149466350(&local_78,local_170,local_180,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_198,"Roughness",1);
  FUN_1400b22c2(local_1a8,"WriteRoughness");
  FUN_1400b22c2(local_1b8,"ReadNumControlPoints");
  local_1f0 = 1;
  local_1f8 = local_1b8;
  FUN_149466350(&local_78,local_198,local_1a8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  FUN_1446ddc76(&local_1c0,&DAT_14bd249dd,1);
  FUN_1400b22c2(local_1d0,"WriteAO");
  FUN_1400b22c2(local_1e0,"ReadNumControlPoints");
  local_1f0 = 1;
  local_1f8 = local_1e0;
  FUN_149466350(&local_78,local_1c0,local_1d0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_78;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_68;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_4c;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_50;
  FUN_14946649a();
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ecfa0 FUN_1494ecfa0 body=47 status=ok
// SIG undefined FUN_1494ecfa0(void)

longlong * FUN_1494ecfa0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14586a468();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 1494ecfd0 FUN_1494ecfd0 body=171 status=ok
// SIG undefined FUN_1494ecfd0(void)

void FUN_1494ecfd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_30,L"ReadNumControlPoints");
  uVar1 = FUN_149459122(uVar1,local_30);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"ReadNumCurves");
  uVar1 = FUN_149459122(uVar1,local_40);
  FUN_1494593ba(uVar1,2,0,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ed07c FUN_1494ed07c body=851 status=ok
// SIG undefined FUN_1494ed07c(void)

void FUN_1494ed07c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"WritePosition");
  uVar1 = FUN_149459122(uVar1,local_38);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,3,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"WriteRadius");
  uVar1 = FUN_149459122(uVar1,local_48);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"WritePositionAndRadius");
  uVar1 = FUN_149459122(uVar1,local_58);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,4,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"WriteRootUV");
  uVar1 = FUN_149459122(uVar1,local_68);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,2,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"WriteSeed");
  uVar1 = FUN_149459122(uVar1,local_78);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_88,L"WriteClumpId");
  uVar1 = FUN_149459122(uVar1,local_88);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_98,L"WriteColor");
  uVar1 = FUN_149459122(uVar1,local_98);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,3,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_a8,L"WriteRoughness");
  uVar1 = FUN_149459122(uVar1,local_a8);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_b8,L"WriteAO");
  uVar1 = FUN_149459122(uVar1,local_b8);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,3,0,0);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ed3d8 FUN_1494ed3d8 body=154 status=ok
// SIG undefined FUN_1494ed3d8(void)

void FUN_1494ed3d8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494ef540();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1dcd0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x160;
  return;
}



// FUNCTION 1494ed47a FUN_1494ed47a body=43 status=ok
// SIG undefined FUN_1494ed47a(void)

void FUN_1494ed47a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroomWrite.ush",0
                       );
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 1494ed4a6 FUN_1494ed4a6 body=438 status=ok
// SIG undefined FUN_1494ed4a6(void)

void FUN_1494ed4a6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Runtime/HairStrands/Private/DeformerDataInterfaceGroomWrite.ush",0,
                &local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ed65e FUN_1494ed65e body=109 status=ok
// SIG undefined FUN_1494ed65e(void)

longlong FUN_1494ed65e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_1409ffe1d();
  lVar4 = FUN_1494ed6cb(uVar3);
  if (*param_2 == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = FUN_14586a468();
    cVar2 = FUN_144a7ca96(param_2,uVar3);
    lVar1 = *param_2;
    lVar5 = 0;
    if (cVar2 != '\0') {
      lVar5 = lVar1;
    }
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
      lVar5 = lVar1;
    }
  }
  *(longlong *)(lVar4 + 0x28) = lVar5;
  *(undefined8 *)(lVar4 + 0x30) = param_4;
  return lVar4;
}



// FUNCTION 1494ed6cb FUN_1494ed6cb body=148 status=ok
// SIG undefined FUN_1494ed6cb(void)

undefined8 FUN_1494ed6cb(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba7b5c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ed760 FUN_1494ed760 body=39 status=ok
// SIG undefined FUN_1494ed760(void)

void FUN_1494ed760(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0x30);
  FUN_1494ed788(uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1494ed788 FUN_1494ed788 body=207 status=ok
// SIG undefined FUN_1494ed788(void)

undefined8 * FUN_1494ed788(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14bd250d0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[3] = param_3;
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 0x850), (ulonglong)uVar2 != 0)) {
    uVar4 = 0;
    do {
      if ((((int)uVar4 < 0) || (*(int *)(param_2 + 0x850) <= (int)uVar4)) ||
         (puVar5 = *(undefined8 **)(*(longlong *)(param_2 + 0x848) + uVar4 * 8),
         puVar5 == (undefined8 *)0x0)) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      iVar3 = *(int *)(param_1 + 2);
      *(uint *)(param_1 + 2) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x14) < iVar3 + 1U) {
        FUN_1494ef0bc(param_1 + 1,iVar3);
      }
      *(undefined8 **)(param_1[1] + (longlong)iVar3 * 8) = puVar5;
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  return param_1;
}



// FUNCTION 1494ed86e FUN_1494ed86e body=1830 status=ok
// SIG undefined FUN_1494ed86e(void)

void FUN_1494ed86e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  wchar_t **local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  wchar_t *local_80 [2];
  undefined8 local_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_1 + 0x10);
  local_d0 = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    local_a0 = param_1 + 0x20;
    local_c8 = param_2 + 0x198;
    lVar13 = param_2 + 0x70;
    local_b8 = param_2 + 0x188;
    lVar12 = 0;
    local_c0 = param_1;
    local_a8 = lVar13;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar12);
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)FUN_1494edf96(local_a0);
        local_50 = FUN_14018b826(&DAT_14ca63b10,local_d0,0x10);
        local_68 = 0;
        iStack_64 = 0;
        uStack_60 = 0xffffffff;
        local_58 = 0;
        if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
          local_68 = 0x1c;
        }
        uVar8 = FUN_14475683e(local_c8,lVar13,local_50 + 8,&local_68);
        puVar7[3] = uVar8;
        local_98 = 0;
        local_80[0] = L"Groom.Deformer.FallbackDeformedPositionBuffer";
        uStack_60 = 0x10119;
        local_58 = 0;
        uVar6 = DAT_14ca84e48;
        if (3 < DAT_14ca84e48) {
          uVar6 = 4;
        }
        iStack_64 = uVar6 + (uVar6 == 0);
        local_68 = (undefined1)iStack_64;
        uStack_67 = (undefined1)((uint)iStack_64 >> 8);
        uStack_66 = (undefined1)((uint)iStack_64 >> 0x10);
        uStack_65 = (undefined1)((uint)iStack_64 >> 0x18);
        local_d8 = (wchar_t **)&local_98;
        local_b0 = puVar7;
        lVar9 = FUN_144738de6(local_b8,lVar13,local_80,&local_68);
        local_68 = 0;
        uStack_67 = 0;
        uStack_66 = 0;
        uStack_60 = (undefined4)lVar9;
        uStack_5c = (undefined4)((ulonglong)lVar9 >> 0x20);
        if ((*(byte *)(lVar9 + 0x68) & 0x80) != 0) {
          local_68 = 0x1c;
        }
        local_80[0] = (wchar_t *)CONCAT71(local_80[0]._1_7_,1);
        local_d8 = local_80;
        uVar8 = FUN_144a23c98(local_c8,lVar13,lVar9 + 8,&local_68);
        local_b0[4] = uVar8;
        local_98 = 0;
        local_80[0] = L"Groom.Deformer.FallbackDeformedAttributeBuffer";
        uStack_60 = 0x10119;
        local_58 = 0;
        uVar6 = DAT_14ca84e48;
        if (3 < DAT_14ca84e48) {
          uVar6 = 4;
        }
        iStack_64 = uVar6 + (uVar6 == 0);
        local_68 = (undefined1)iStack_64;
        uStack_67 = (undefined1)((uint)iStack_64 >> 8);
        uStack_66 = (undefined1)((uint)iStack_64 >> 0x10);
        uStack_65 = (undefined1)((uint)iStack_64 >> 0x18);
        local_d8 = (wchar_t **)&local_98;
        lVar10 = FUN_144738de6(local_b8,lVar13,local_80,&local_68);
        lVar9 = local_c8;
        local_68 = 0;
        uStack_67 = 0;
        uStack_66 = 0;
        uStack_60 = (undefined4)lVar10;
        uStack_5c = (undefined4)((ulonglong)lVar10 >> 0x20);
        if ((*(byte *)(lVar10 + 0x68) & 0x80) != 0) {
          local_68 = 0x1c;
        }
        local_80[0] = (wchar_t *)CONCAT71(local_80[0]._1_7_,1);
        local_d8 = local_80;
        uVar8 = FUN_144a23c98(local_c8,lVar13,lVar10 + 8,&local_68);
        puVar7 = local_b0;
        lVar10 = local_d0;
        local_b0[7] = uVar8;
        if ((*(byte *)(local_c0 + 0x18) & 7) == 0) {
          local_50 = FUN_144735828(&DAT_14ca63b10,local_d0,0x10);
          local_68 = 1;
          iStack_64 = 0;
          uStack_60 = 0xffffffff;
          local_58 = 0;
          uVar8 = FUN_14475683e(lVar9,lVar13,local_50 + 8,&local_68);
          *puVar7 = uVar8;
          local_50 = FUN_14018b826(&DAT_14ca63b10,local_d0,0x10);
          local_68 = 0;
          iStack_64 = 0;
          uStack_60 = 0xffffffff;
          local_58 = 0;
          if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
            local_68 = 0x1c;
          }
          uVar8 = FUN_14475683e(local_c8,lVar13,local_50 + 8,&local_68);
          puVar7 = local_b0;
          local_b0[1] = uVar8;
          local_98 = 0;
          local_80[0] = L"Hair.Deformer.DummyBuffer";
          uStack_60 = 0x10119;
          local_58 = 0;
          uVar6 = DAT_14ca84e48;
          if (3 < DAT_14ca84e48) {
            uVar6 = 4;
          }
          iStack_64 = uVar6 + (uVar6 == 0);
          local_68 = (undefined1)iStack_64;
          uStack_67 = (undefined1)((uint)iStack_64 >> 8);
          uStack_66 = (undefined1)((uint)iStack_64 >> 0x10);
          uStack_65 = (undefined1)((uint)iStack_64 >> 0x18);
          local_d8 = (wchar_t **)&local_98;
          lVar10 = FUN_144738de6(local_b8,lVar13,local_80,&local_68);
          lVar9 = local_c0;
          local_68 = 0;
          uStack_67 = 0;
          uStack_66 = 0;
          uStack_60 = (undefined4)lVar10;
          uStack_5c = (undefined4)((ulonglong)lVar10 >> 0x20);
          if ((*(byte *)(lVar10 + 0x68) & 0x80) != 0) {
            local_68 = 0x1c;
          }
          local_80[0] = (wchar_t *)((ulonglong)local_80[0] & 0xffffffffffffff00);
          local_d8 = local_80;
          uVar8 = FUN_144a23c98(local_c8,lVar13,lVar10 + 8,&local_68);
          puVar7[2] = uVar8;
        }
        else {
          local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
          FUN_14716cfd3(&local_68,local_d0,*(longlong *)(lVar3 + 0x40) + 0x70,1);
          *puVar7 = CONCAT44(uStack_5c,uStack_60);
          local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
          FUN_14716cfd3(&local_68,lVar10,*(longlong *)(lVar3 + 0x40) + 0x50,1);
          puVar7[1] = CONCAT44(uStack_5c,uStack_60);
          uVar8 = FUN_14908f6a4(*(undefined8 *)(lVar3 + 0x48),lVar10);
          lVar13 = local_a8;
          local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
          FUN_14716cfd3(&local_68,lVar10,uVar8,2);
          puVar7[2] = local_58;
          lVar9 = local_c0;
        }
        if ((*(byte *)(lVar9 + 0x18) & 0x38) != 0) {
          plVar11 = (longlong *)FUN_14908f70c(*(undefined8 *)(lVar3 + 0x48),local_d0);
          lVar5 = local_d0;
          lVar10 = *plVar11;
          local_68 = (undefined1)lVar10;
          uStack_67 = (undefined1)((ulonglong)lVar10 >> 8);
          uStack_66 = (undefined1)((ulonglong)lVar10 >> 0x10);
          uStack_65 = (undefined1)((ulonglong)lVar10 >> 0x18);
          iStack_64 = (int)((ulonglong)lVar10 >> 0x20);
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
          lVar4 = plVar11[1];
          uStack_60 = (undefined4)lVar4;
          uStack_5c = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          local_58 = plVar11[2];
          if (local_58 != 0) {
            LOCK();
            *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
            UNLOCK();
          }
          local_50 = CONCAT71(local_50._1_7_,(char)plVar11[3]);
          if (lVar10 != 0) {
            local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
            FUN_14716cfd3(local_80,local_d0,&local_68,2);
            local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_98,lVar5,*(longlong *)(lVar3 + 0x40) + 0xd0,0);
            if (CONCAT71(uStack_97,local_98) != 0) {
              FUN_14742ba28(local_d0,local_80[0]);
            }
            puVar7[6] = local_70;
          }
          FUN_14908489c(&local_68);
        }
        if (puVar7[6] == 0) {
          puVar7[6] = puVar7[7];
        }
        if ((*(ushort *)(lVar9 + 0x18) & 0x1c0) != 0) {
          plVar11 = (longlong *)FUN_14908f796(*(undefined8 *)(lVar3 + 0x48),local_d0);
          lVar10 = local_d0;
          lVar9 = *plVar11;
          local_68 = (undefined1)lVar9;
          uStack_67 = (undefined1)((ulonglong)lVar9 >> 8);
          uStack_66 = (undefined1)((ulonglong)lVar9 >> 0x10);
          uStack_65 = (undefined1)((ulonglong)lVar9 >> 0x18);
          iStack_64 = (int)((ulonglong)lVar9 >> 0x20);
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          lVar5 = plVar11[1];
          uStack_60 = (undefined4)lVar5;
          uStack_5c = (undefined4)((ulonglong)lVar5 >> 0x20);
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          local_58 = plVar11[2];
          if (local_58 != 0) {
            LOCK();
            *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
            UNLOCK();
          }
          local_50 = CONCAT71(local_50._1_7_,(char)plVar11[3]);
          if (lVar9 != 0) {
            local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
            FUN_14716cfd3(local_80,local_d0,&local_68,2);
            local_d8 = (wchar_t **)((ulonglong)local_d8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_98,lVar10,*(longlong *)(lVar3 + 0x40) + 0xb0,0);
            FUN_14742ba28(lVar10,local_80[0],CONCAT71(uStack_97,local_98));
            puVar7[5] = local_70;
          }
          FUN_14908489c(&local_68);
        }
        if (puVar7[5] == 0) {
          puVar7[5] = puVar7[7];
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar1 * 8 != lVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494edf96 FUN_1494edf96 body=59 status=ok
// SIG undefined FUN_1494edf96(void)

longlong FUN_1494edf96(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494efaf6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_1494efae3(lVar2);
  return lVar2;
}



// FUNCTION 1494edfd2 FUN_1494edfd2 body=390 status=ok
// SIG undefined FUN_1494edfd2(void)

void FUN_1494edfd2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_468 [44];
  uint local_43c;
  longlong *local_438;
  undefined8 *local_430;
  undefined1 local_428 [576];
  undefined1 local_1e8 [416];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  iVar2 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar2) {
    iVar3 = *(int *)(param_2 + 0x14);
    puVar11 = (undefined8 *)
              ((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18) + 0x158);
    lVar12 = 0;
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar12);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x20);
        local_43c = 0;
        if ((*(longlong *)(lVar5 + 0x10 + lVar10) != 0) && (*(longlong *)(lVar5 + 8 + lVar10) != 0))
        {
          local_43c = (uint)(*(longlong *)(lVar5 + lVar10) != 0);
        }
        local_430 = (undefined8 *)(lVar5 + lVar10 + 0x10);
        local_438 = (longlong *)(lVar5 + lVar10 + 8);
        FUN_14909b914(local_428,lVar4,0);
        memcpy(puVar11 + -0x2b,local_1e8,0x130);
        *(undefined4 *)(puVar11 + -5) = 0;
        plVar6 = (longlong *)(lVar5 + lVar10 + 0x18);
        bVar13 = (local_43c & 1) != 0;
        plVar8 = (longlong *)(lVar5 + lVar10);
        if (!bVar13) {
          plVar8 = plVar6;
        }
        puVar11[-4] = *plVar8;
        plVar8 = local_438;
        if (!bVar13) {
          plVar8 = plVar6;
        }
        puVar11[-3] = *plVar8;
        puVar7 = (undefined8 *)(lVar5 + 0x20 + lVar10);
        if (bVar13) {
          puVar7 = local_430;
        }
        puVar1 = (undefined8 *)(lVar5 + 0x38 + lVar10);
        puVar9 = (undefined8 *)(lVar5 + 0x28 + lVar10);
        if (!bVar13) {
          puVar9 = puVar1;
        }
        puVar11[-2] = *puVar7;
        *puVar11 = *puVar9;
        puVar7 = (undefined8 *)(lVar5 + 0x30 + lVar10);
        if (!bVar13) {
          puVar7 = puVar1;
        }
        puVar11[-1] = *puVar7;
        FUN_1490846d2();
      }
      lVar10 = lVar10 + 0x40;
      puVar11 = (undefined8 *)((longlong)puVar11 + (longlong)iVar3);
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar2 * 0x40 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494ee15a FUN_1494ee15a body=152 status=ok
// SIG undefined FUN_1494ee15a(void)

undefined8 FUN_1494ee15a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"GroomComponent";
  local_28 = 0xe;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"DeformersGroomComponentSource";
  local_28 = 0x1d;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Groom Component");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ee1f4 FUN_1494ee1f4 body=47 status=ok
// SIG undefined FUN_1494ee1f4(void)

longlong * FUN_1494ee1f4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14586a468();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 1494ee224 FUN_1494ee224 body=153 status=ok
// SIG undefined FUN_1494ee224(void)

undefined8 FUN_1494ee224(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_18);
  lVar2 = local_18;
  if ((((local_18 == 0) || (lVar1 = FUN_144a78d6a(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (lVar4 = local_18,
     *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
     lVar1 + 0x30)) {
    lVar4 = 0;
  }
  lVar2 = FUN_14586a468();
  if ((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                     lVar2 + 0x30);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1494ee2be FUN_1494ee2be body=75 status=ok
// SIG undefined FUN_1494ee2be(void)

longlong * FUN_1494ee2be(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = DAT_14cc1daa0;
  uVar2 = DAT_14cc1da98;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 2;
  FUN_1401b309e(param_2,2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return param_2;
}



// FUNCTION 1494ee30e FUN_1494ee30e body=63 status=ok
// SIG undefined FUN_1494ee30e(void)

undefined4 FUN_1494ee30e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_14586a468();
    uVar2 = 0;
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = *(undefined4 *)(param_2 + 0x850);
    }
  }
  return uVar2;
}



// FUNCTION 1494ee34e FUN_1494ee34e body=382 status=ok
// SIG undefined FUN_1494ee34e(void)

ulonglong FUN_1494ee34e(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_3 != 0) {
    lVar6 = FUN_14586a468();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      uVar2 = *(uint *)(param_3 + 0x850);
      uVar7 = (ulonglong)uVar2;
      if (uVar7 != 0) {
        uVar9 = 0;
        do {
          if (((longlong)*(int *)(param_3 + 0x850) <= (longlong)uVar9) ||
             (puVar5 = *(undefined8 **)(*(longlong *)(param_3 + 0x848) + uVar9 * 8),
             puVar5 == (undefined8 *)0x0)) goto LAB_1494ee389;
          LOCK();
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          uVar9 = uVar9 + 1;
        } while (uVar7 != uVar9);
      }
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < 0) {
        FUN_14481578e(param_5,0);
      }
      if ((DAT_14cc1da98 == param_2) || (DAT_14cc1daa0 == param_2)) {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar7);
        }
        if (*(int *)((longlong)param_5 + 0xc) < (int)uVar2) {
          FUN_14481578e(param_5,uVar2);
        }
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (uVar7 != 0) {
          uVar8 = 0;
          do {
            if (((longlong)uVar8 < (longlong)*(int *)(param_3 + 0x850)) &&
               (puVar5 = *(undefined8 **)(*(longlong *)(param_3 + 0x848) + uVar8 * 8),
               puVar5 != (undefined8 *)0x0)) {
              LOCK();
              *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
              UNLOCK();
              LOCK();
              piVar1 = (int *)(puVar5 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar5)(puVar5,1);
              }
              uVar3 = *(undefined4 *)
                       (*(longlong *)(puVar5[8] + 0x130) + 8 +
                       (ulonglong)(DAT_14cc1da98 == param_2) * 4);
              iVar4 = (int)param_5[1];
              *(uint *)(param_5 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
                FUN_1446f48e2(param_5,iVar4);
              }
              *(undefined4 *)(*param_5 + (longlong)iVar4 * 4) = uVar3;
            }
            uVar8 = uVar8 + 1;
          } while (uVar7 != uVar8);
        }
        goto LAB_1494ee38b;
      }
    }
  }
LAB_1494ee389:
  uVar9 = 0;
LAB_1494ee38b:
  return uVar9 & 0xffffffff;
}



// FUNCTION 1494ee4e6 FUN_1494ee4e6 body=45 status=ok
// SIG undefined FUN_1494ee4e6(void)

longlong FUN_1494ee4e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494ee52a FUN_1494ee52a body=38 status=ok
// SIG undefined FUN_1494ee52a(void)

undefined8 FUN_1494ee52a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Groom",1);
  return param_2;
}



// FUNCTION 1494ee550 FUN_1494ee550 body=76 status=ok
// SIG undefined FUN_1494ee550(void)

undefined8 * FUN_1494ee550(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd24c30;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1494ee59c FUN_1494ee59c body=62 status=ok
// SIG undefined FUN_1494ee59c(void)

undefined8 * FUN_1494ee59c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd24d30;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1494ee5da FUN_1494ee5da body=62 status=ok
// SIG undefined FUN_1494ee5da(void)

undefined8 * FUN_1494ee5da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd24ea0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1494ee618 FUN_1494ee618 body=76 status=ok
// SIG undefined FUN_1494ee618(void)

undefined8 * FUN_1494ee618(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd250d0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1494ee664 FUN_1494ee664 body=258 status=ok
// SIG undefined FUN_1494ee664(void)

void FUN_1494ee664(void)

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
              0x110) < DAT_14cc1db30) {
    FUN_144b3d300(&DAT_14cc1db30);
    if (DAT_14cc1db30 == -1) {
      FUN_1494ee768(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGroomDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x81;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1dab0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144535e7d);
      _Init_thread_footer(&DAT_14cc1db30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ee768 FUN_1494ee768 body=226 status=ok
// SIG undefined FUN_1494ee768(void)

longlong * FUN_1494ee768(longlong *param_1)

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
  pcVar13 = FUN_1494ee84c;
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



// FUNCTION 1494ee84c FUN_1494ee84c body=144 status=ok
// SIG undefined FUN_1494ee84c(void)

code * FUN_1494ee84c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1494ee8dc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Interpolation";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsInstanceInterpolationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16000000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc1db38;
  return FUN_1494ee9e0;
}



// FUNCTION 1494ee8dc FUN_1494ee8dc body=258 status=ok
// SIG undefined FUN_1494ee8dc(void)

void FUN_1494ee8dc(void)

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
              0x110) < DAT_14cc1dbb8) {
    FUN_144b3d300(&DAT_14cc1dbb8);
    if (DAT_14cc1dbb8 == -1) {
      FUN_1494eea6e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceInterpolationParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x5b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1db38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144535e89);
      _Init_thread_footer(&DAT_14cc1dbb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ee9e0 FUN_1494ee9e0 body=142 status=ok
// SIG undefined FUN_1494ee9e0(void)

code * FUN_1494ee9e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf5782();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Resources";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceResourceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x13000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1494eec60;
}



// FUNCTION 1494eea6e FUN_1494eea6e body=226 status=ok
// SIG undefined FUN_1494eea6e(void)

longlong * FUN_1494eea6e(longlong *param_1)

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
  pcVar13 = FUN_1494eeb52;
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



// FUNCTION 1494eeb52 FUN_1494eeb52 body=136 status=ok
// SIG undefined FUN_1494eeb52(void)

code * FUN_1494eeb52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointInterpolationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494eebda;
}



// FUNCTION 1494eebda FUN_1494eebda body=130 status=ok
// SIG undefined FUN_1494eebda(void)

undefined1 * FUN_1494eebda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveInterpolationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1494eec5c;
}



// FUNCTION 1494eec60 FUN_1494eec60 body=136 status=ok
// SIG undefined FUN_1494eec60(void)

undefined1 * FUN_1494eec60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf55e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x82;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1494eece8;
}



// FUNCTION 1494eecec FUN_1494eecec body=48 status=ok
// SIG undefined FUN_1494eecec(void)

void FUN_1494eecec(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,0x10);
  }
  return;
}



// FUNCTION 1494eed1c FUN_1494eed1c body=15 status=ok
// SIG undefined FUN_1494eed1c(void)

void FUN_1494eed1c(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1494eed2c FUN_1494eed2c body=147 status=ok
// SIG undefined FUN_1494eed2c(void)

void FUN_1494eed2c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494eedc0 FUN_1494eedc0 body=7 status=ok
// SIG undefined FUN_1494eedc0(void)

void FUN_1494eedc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1494eedc8 FUN_1494eedc8 body=132 status=ok
// SIG undefined FUN_1494eedc8(void)

void FUN_1494eedc8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494eee4e FUN_1494eee4e body=258 status=ok
// SIG undefined FUN_1494eee4e(void)

void FUN_1494eee4e(void)

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
              0x110) < DAT_14cc1dc40) {
    FUN_144b3d300(&DAT_14cc1dc40);
    if (DAT_14cc1dc40 == -1) {
      FUN_1494eef52(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGroomExecDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x2c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1dbc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144535e95);
      _Init_thread_footer(&DAT_14cc1dc40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494eef52 FUN_1494eef52 body=226 status=ok
// SIG undefined FUN_1494eef52(void)

longlong * FUN_1494eef52(longlong *param_1)

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
  pcVar13 = FUN_1494ef036;
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



// FUNCTION 1494ef036 FUN_1494ef036 body=130 status=ok
// SIG undefined FUN_1494ef036(void)

undefined1 * FUN_1494ef036(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumThreads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1494ef0b8;
}



// FUNCTION 1494ef0bc FUN_1494ef0bc body=132 status=ok
// SIG undefined FUN_1494ef0bc(void)

void FUN_1494ef0bc(longlong param_1,int param_2)

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



// FUNCTION 1494ef142 FUN_1494ef142 body=62 status=ok
// SIG undefined FUN_1494ef142(void)

void FUN_1494ef142(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494ef180(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1494ef180 FUN_1494ef180 body=93 status=ok
// SIG undefined FUN_1494ef180(void)

ulonglong FUN_1494ef180(uint param_1,uint param_2)

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


