// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458e4102 FUN_1458e4102 body=147 status=ok
// SIG undefined FUN_1458e4102(void)

void FUN_1458e4102(longlong param_1,int param_2)

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



// FUNCTION 1458e41a0 FUN_1458e41a0 body=94 status=ok
// SIG undefined FUN_1458e41a0(void)

undefined8 FUN_1458e41a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (((cVar2 != '\0') && (param_2 != 0)) &&
       (((int)((longlong *)*param_1)[1] != 0 &&
        (plVar1 = *(longlong **)*param_1, plVar1 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001458e41f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1458e41fe FUN_1458e41fe body=91 status=ok
// SIG undefined FUN_1458e41fe(void)

bool FUN_1458e41fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1458e422e;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1458e422e:
  return lVar6 == param_2;
}



// FUNCTION 1458e425a FUN_1458e425a body=50 status=ok
// SIG undefined FUN_1458e425a(void)

void FUN_1458e425a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b095090;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14078b1f4(param_1 + 0x10);
  }
  FUN_141313ea4(param_1 + 0x10);
  return;
}



// FUNCTION 1458e428c FUN_1458e428c body=121 status=ok
// SIG undefined FUN_1458e428c(void)

undefined8 * FUN_1458e428c(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  uStack_18 = param_3[1];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = param_2;
  if (param_2 != 0) {
    uVar1 = FUN_140ca0cfc(&local_28);
    FUN_1458e475c(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458e4306 FUN_1458e4306 body=231 status=ok
// SIG undefined FUN_1458e4306(void)

void FUN_1458e4306(longlong param_1,int param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  local_1c = param_2;
  if (param_3 == '\x01') {
    lVar1 = *param_4;
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *param_4;
      }
    }
    *(longlong *)(lVar2 + 0x18) = lVar1;
    FUN_141314ea8(lVar2 + 0x20,param_4 + 1);
    *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 3;
  }
  else if (param_3 == '\x02') {
    if ((*(byte *)(lVar2 + 0x48) & 1) == 0) {
      lVar1 = *param_4;
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *param_4;
        }
      }
      *(longlong *)(lVar2 + 0x18) = lVar1;
      FUN_141314ea8(lVar2 + 0x20,param_4 + 1);
      *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
    }
    else {
      FUN_14767d35e(param_1 + 0xa0,&local_1c,param_4);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e43ee FUN_1458e43ee body=239 status=ok
// SIG undefined FUN_1458e43ee(void)

int * FUN_1458e43ee(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1458e44de FUN_1458e44de body=302 status=ok
// SIG undefined FUN_1458e44de(void)

undefined4 * FUN_1458e44de(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458e4674(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *puVar2;
  local_40[7] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_141314d5a(local_40);
  cVar6 = FUN_1458e460e(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[8] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[7] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1458e48e0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e460e FUN_1458e460e body=102 status=ok
// SIG undefined FUN_1458e460e(void)

undefined8 FUN_1458e460e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar8 = FUN_141314cde(), iVar8 != -1)) {
    lVar2 = *param_1;
    lVar9 = (longlong)iVar8;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar3 = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar2 + 0x18 + lVar9 * 0x24) = param_3[6];
    *(undefined8 *)(lVar2 + 0x10 + lVar9 * 0x24) = uVar3;
    puVar1 = (undefined4 *)(lVar2 + lVar9 * 0x24);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    FUN_145ccf94a(param_1,*param_4);
    *param_4 = iVar8;
    return 1;
  }
  return 0;
}



// FUNCTION 1458e4674 FUN_1458e4674 body=231 status=ok
// SIG undefined FUN_1458e4674(void)

int * FUN_1458e4674(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 1458e475c FUN_1458e475c body=387 status=ok
// SIG undefined FUN_1458e475c(void)

void FUN_1458e475c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c76101e == '\x01') {
    if (param_2 == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      if (*(int *)((longlong)param_1 + 0x2c) < 0) {
        FUN_1446f8c06(param_1 + 4,0);
      }
      puVar2 = (undefined2 *)param_1[4];
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
      }
    }
    else {
      FUN_1400bbfae(&local_48,param_2);
      *(undefined4 *)(param_1 + 2) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
      *(undefined4 *)(param_1 + 3) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
      if (param_1 + 2 == (longlong *)&local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[4] != 0) {
          FUN_1400020a8();
        }
        param_1[4] = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 5) = local_30;
        *(undefined4 *)((longlong)param_1 + 0x2c) = local_2c;
      }
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if (cVar3 != '\0') {
        uVar1 = *(uint *)(param_2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
          param_1[1] = 0;
          goto LAB_1458e47ff;
        }
      }
      FUN_14485c47a(param_1 + 1,param_2);
    }
  }
  else {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *param_1 = param_2;
  }
LAB_1458e47ff:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e48e0 FUN_1458e48e0 body=447 status=ok
// SIG undefined FUN_1458e48e0(void)

void FUN_1458e48e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x24;
        iVar6 = FUN_141314d5a(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x20) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1c) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e4aa0 FUN_1458e4aa0 body=192 status=ok
// SIG undefined FUN_1458e4aa0(void)

void FUN_1458e4aa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = (int)((ulonglong)(param_2[1] - *param_2) >> 3) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1458e4ce4(param_1,uVar4);
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
      FUN_141315252(param_1);
    }
  }
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if (lVar5 != lVar1) {
    do {
      FUN_1458e4b62(param_1,local_2c,lVar5);
      lVar5 = lVar5 + 8;
    } while (lVar5 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e4b62 FUN_1458e4b62 body=384 status=ok
// SIG undefined FUN_1458e4b62(void)

undefined4 * FUN_1458e4b62(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_141315070(param_1,local_40);
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
  cVar3 = FUN_141314f00(param_1,uVar4,local_38,&local_44);
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
      FUN_141315252(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e4ce4 FUN_1458e4ce4 body=441 status=ok
// SIG undefined FUN_1458e4ce4(void)

void FUN_1458e4ce4(longlong *param_1,uint param_2)

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
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1458e4e9e FUN_1458e4e9e body=40 status=ok
// SIG undefined FUN_1458e4e9e(void)

undefined8 FUN_1458e4e9e(undefined8 param_1,int param_2)

{
  FUN_1458e4ec6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458e4ec6 FUN_1458e4ec6 body=198 status=ok
// SIG undefined FUN_1458e4ec6(void)

void FUN_1458e4ec6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a529030;
  param_1[5] = &PTR_FUN_14a529350;
  plVar3 = (longlong *)param_1[0x168];
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
  if (param_1[0x164] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd8aa(param_1 + 0x90);
  FUN_1458e4f8c(param_1 + 0x32);
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 1458e4f8c FUN_1458e4f8c body=238 status=ok
// SIG undefined FUN_1458e4f8c(void)

void FUN_1458e4f8c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb8d0;
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x0001458e5076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458e507a FUN_1458e507a body=244 status=ok
// SIG undefined FUN_1458e507a(void)

undefined8
FUN_1458e507a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_FUN_14b9e1100;
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



// FUNCTION 1458e5170 FUN_1458e5170 body=63 status=ok
// SIG undefined FUN_1458e5170(void)

void FUN_1458e5170(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458e520a(param_1);
    FUN_1458e51b0(param_1);
    return;
  }
  FUN_1458e51b0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14860a54c(param_1);
  return;
}



// FUNCTION 1458e51b0 FUN_1458e51b0 body=90 status=ok
// SIG undefined FUN_1458e51b0(void)

void FUN_1458e51b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1407f13e6(param_1,0);
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



// FUNCTION 1458e520a FUN_1458e520a body=335 status=ok
// SIG undefined FUN_1458e520a(void)

void FUN_1458e520a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x20 + (longlong)iVar4 * 0x24) * 4) =
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



// FUNCTION 1458e535a FUN_1458e535a body=121 status=ok
// SIG undefined FUN_1458e535a(void)

void FUN_1458e535a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1458e5452(param_1,iVar1);
    }
    FUN_1458e556c((longlong)iVar1 * 0x100 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1487d46ca(param_1,param_2,iVar1 - param_2);
    FUN_1487d4724(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1458e53d4 FUN_1458e53d4 body=125 status=ok
// SIG undefined FUN_1458e53d4(void)

void FUN_1458e53d4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1458e54d6(param_1,iVar1);
    }
    FUN_1458e561a((longlong)iVar1 * 0x108 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1487d45a8(param_1,param_2,iVar1 - param_2);
    FUN_1487d4616(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1458e5452 FUN_1458e5452 body=132 status=ok
// SIG undefined FUN_1458e5452(void)

void FUN_1458e5452(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_var;
  longlong lVar3;
  int iVar4;
  
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
      lVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    FUN_144a3809e(lVar3 << 8,8);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= extraout_var) {
      iVar4 = extraout_var;
    }
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,param_2,iVar4,0x100,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e54d6 FUN_1458e54d6 body=150 status=ok
// SIG undefined FUN_1458e54d6(void)

void FUN_1458e54d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x108,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x108)) {
      uVar5 = uVar4 / 0x108 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x108,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e556c FUN_1458e556c body=174 status=ok
// SIG undefined FUN_1458e556c(void)

void FUN_1458e556c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141315e2a(param_1);
    *param_1 = &PTR_FUN_14b0a4df0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0x47efffffe0000000;
    param_1[0x17] = 0x47efffffe0000000;
    param_1[0x18] = 0x47efffffe0000000;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1458e561a FUN_1458e561a body=190 status=ok
// SIG undefined FUN_1458e561a(void)

void FUN_1458e561a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141315ec0(param_1);
    *param_1 = &PTR_FUN_14b0a5020;
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0x14] = 0x47efffffe0000000;
    param_1[0x15] = 0x47efffffe0000000;
    param_1[0x16] = 0x47efffffe0000000;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined2 *)(param_1 + 0x1b) = 0x101;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    param_1 = param_1 + 0x21;
  }
  return;
}



// FUNCTION 1458e56d8 FUN_1458e56d8 body=368 status=ok
// SIG undefined FUN_1458e56d8(void)

undefined8 FUN_1458e56d8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [72];
  undefined8 *local_50;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar4 = FUN_144729dda(param_1 + 8);
    if ((cVar4 != '\0') && (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
      FUN_1458e584a(local_98,param_3);
      if ((longlong)(int)param_2[1] != 0) {
        lVar8 = *param_2;
        lVar10 = (longlong)(int)param_2[1] * 0x18;
        do {
          plVar5 = (longlong *)FUN_14058d91e(lVar8);
          if (plVar5 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
            uVar7 = FUN_14479d2ce(param_1);
            lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar7,lVar6 + 0xb0);
            uVar3 = local_48;
            if (lVar6 != 0) {
              lVar9 = (longlong)(int)local_48;
              local_48 = local_48 + 1;
              if (local_44 < local_48) {
                FUN_14058da88(&local_50,uVar3);
              }
              local_50[lVar9] = lVar6;
            }
          }
          lVar8 = lVar8 + 0x18;
          lVar10 = lVar10 + -0x18;
        } while (lVar10 != 0);
      }
      if (local_48 == 0) {
        uVar7 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
          FUN_1458e595a(param_1 + 0x60,iVar1);
        }
        FUN_1458e584a((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x60),local_98);
        *(undefined1 *)(param_1 + 0x5c) = 1;
        uVar7 = *local_50;
      }
      FUN_144a80376(local_98);
      goto LAB_1458e5807;
    }
  }
  uVar7 = 0;
LAB_1458e5807:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e584a FUN_1458e584a body=272 status=ok
// SIG undefined FUN_1458e584a(void)

undefined4 * FUN_1458e584a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *_Src_00;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  uVar2 = *(undefined8 *)(param_2 + 4);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1448020ba(param_1 + 4,iVar1,0);
    FUN_144801e9b(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  puVar6 = *(undefined4 **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 4;
  }
  else {
    _Src_00 = param_2 + 8;
    if (puVar6 != (undefined4 *)0x0) {
      _Src_00 = puVar6;
    }
    FUN_144801f00(param_1 + 8,iVar1,0);
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
      puVar6 = param_1 + 8;
    }
    memcpy(puVar6,_Src_00,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  _Src = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_144801f7c(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1458e595a FUN_1458e595a body=143 status=ok
// SIG undefined FUN_1458e595a(void)

void FUN_1458e595a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e59ea FUN_1458e59ea body=44 status=ok
// SIG undefined FUN_1458e59ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458e59ea(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8bc8c = _DAT_14cb8bc8c + -1;
  *param_1 = DAT_14cb8bc80;
  DAT_14cb8bc80 = param_1;
  return;
}



// FUNCTION 1458e5a16 FUN_1458e5a16 body=44 status=ok
// SIG undefined FUN_1458e5a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458e5a16(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8bb9c = _DAT_14cb8bb9c + -1;
  *param_1 = DAT_14cb8bb90;
  DAT_14cb8bb90 = param_1;
  return;
}



// FUNCTION 1458e5a42 FUN_1458e5a42 body=312 status=ok
// SIG undefined FUN_1458e5a42(void)

undefined4 FUN_1458e5a42(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar2 = FUN_1413162e0();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  lVar5 = *(longlong *)(param_1 + 0x268);
  if (lVar5 == 0) {
    return uVar2;
  }
  lVar3 = FUN_1458f0ae6();
  if ((lVar3 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar3 != 0) goto LAB_1458e5a90;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_1458e5a90:
    lVar4 = FUN_1458f0ae6();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      lVar4 = FUN_1458f0ae6();
      if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar6 = lVar3;
        }
      }
      lVar5 = FUN_1458e5b7a(lVar5,lVar6);
      if (lVar5 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar5);
      }
      bVar1 = DAT_14c950c29;
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x268) + 0x30);
      *(longlong *)(param_1 + 0x538) = lVar5;
      if ((lVar5 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1456cec3c(lVar5);
        lVar5 = *(longlong *)(param_1 + 0x538);
      }
      goto LAB_1458e5b1f;
    }
  }
  *(undefined8 *)(param_1 + 0x538) = 0;
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x268) + 0x30);
  lVar5 = 0;
LAB_1458e5b1f:
  *plVar7 = lVar5;
  return uVar2;
}



// FUNCTION 1458e5b7a FUN_1458e5b7a body=187 status=ok
// SIG undefined FUN_1458e5b7a(void)

undefined8 FUN_1458e5b7a(undefined8 param_1,undefined8 param_2)

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
  uStack_a0 = 8;
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



// FUNCTION 1458e5c37 FUN_1458e5c37 body=209 status=ok
// SIG undefined FUN_1458e5c37(void)

undefined8 FUN_1458e5c37(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
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
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1412864c6();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 1458e5d12 FUN_1458e5d12 body=178 status=ok
// SIG undefined FUN_1458e5d12(void)

undefined8 * FUN_1458e5d12(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14afb4500;
  param_1[0x72] = 0;
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 8;
  uVar2 = DAT_14cb51510;
  uVar3 = FUN_1458e5dc4();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar4;
  if ((lVar4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_14689c22e(lVar4);
    lVar4 = param_1[0x72];
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 1458e5dc4 FUN_1458e5dc4 body=228 status=ok
// SIG undefined FUN_1458e5dc4(void)

longlong FUN_1458e5dc4(void)

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
  if (DAT_14cb512d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463bf012;
    local_38 = &LAB_1485ef659;
    local_40 = &LAB_1458da390;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6c0;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineComponent",&DAT_14cb512d0,&DAT_1485ef658);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb512d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e5eaa FUN_1458e5eaa body=71 status=ok
// SIG undefined FUN_1458e5eaa(void)

void FUN_1458e5eaa(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  lVar1 = param_1[1];
  uVar2 = (int)lVar1 + 1;
  *(uint *)(param_1 + 1) = uVar2;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
    FUN_1458e5ef2(param_1);
  }
  memset((void *)((longlong)(int)lVar1 * 0xf8 + *param_1),0,0xf8);
  return;
}



// FUNCTION 1458e5ef2 FUN_1458e5ef2 body=150 status=ok
// SIG undefined FUN_1458e5ef2(void)

void FUN_1458e5ef2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458e5f88 FUN_1458e5f88 body=45 status=ok
// SIG undefined FUN_1458e5f88(void)

undefined8 FUN_1458e5f88(undefined8 param_1,int param_2)

{
  FUN_1458e5fb6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x430);
  }
  return param_1;
}



// FUNCTION 1458e5fb6 FUN_1458e5fb6 body=94 status=ok
// SIG undefined FUN_1458e5fb6(void)

void FUN_1458e5fb6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b603d30;
  plVar3 = (longlong *)param_1[0x85];
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
  if (*(char *)(param_1 + 0x82) == '\x01') {
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  FUN_141318aa6(param_1);
  return;
}



// FUNCTION 1458e601a FUN_1458e601a body=221 status=ok
// SIG undefined FUN_1458e601a(void)

longlong FUN_1458e601a(void)

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
  if (DAT_14c99e780 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147043d27;
    local_40 = FUN_146296e37;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"AudioEndpointSettingsBase",&DAT_14c99e780,
                  &DAT_147043d26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e60fe FUN_1458e60fe body=221 status=ok
// SIG undefined FUN_1458e60fe(void)

longlong FUN_1458e60fe(void)

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
  if (DAT_14c99f4f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_142af8fac;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147051a09;
    local_40 = &LAB_145ec6133;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x948;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"TypedElementRegistry",&DAT_14c99f4f8,
                  FUN_14629b44a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f4f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e61e8 FUN_1458e61e8 body=221 status=ok
// SIG undefined FUN_1458e61e8(void)

longlong FUN_1458e61e8(void)

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
  if (DAT_14caa13c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14744579f;
    local_40 = &LAB_146321766;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x4c0;
    FUN_14081cfa3(L"/Script/Foliage",L"FoliageType",&DAT_14caa13c8,&DAT_14744579e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa13c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e62cc FUN_1458e62cc body=221 status=ok
// SIG undefined FUN_1458e62cc(void)

longlong FUN_1458e62cc(void)

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
  if (DAT_14caa1a88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14744fd93;
    local_40 = &LAB_140f8f71f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeGrassType",&DAT_14caa1a88,&DAT_14744fd92);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1a88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e63b0 FUN_1458e63b0 body=221 status=ok
// SIG undefined FUN_1458e63b0(void)

longlong FUN_1458e63b0(void)

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
  if (DAT_14caabc68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14750bef5;
    local_40 = FUN_146336537;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/SlateRHIRenderer",L"SlateRHIPostBufferProcessor",&DAT_14caabc68,
                  &DAT_14750bef4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caabc68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6494 FUN_1458e6494 body=221 status=ok
// SIG undefined FUN_1458e6494(void)

longlong FUN_1458e6494(void)

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
  if (DAT_14cad89f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a955c7;
    local_40 = FUN_1463c7ebe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"TimecodeProvider",&DAT_14cad89f0,FUN_1463c7e9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad89f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6578 FUN_1458e6578 body=221 status=ok
// SIG undefined FUN_1458e6578(void)

longlong FUN_1458e6578(void)

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
  if (DAT_14cab4110 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147592a43;
    local_40 = FUN_146343fcb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Constraints",L"ConstraintsManager",&DAT_14cab4110,&DAT_147592a42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e665c FUN_1458e665c body=221 status=ok
// SIG undefined FUN_1458e665c(void)

longlong FUN_1458e665c(void)

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
  if (DAT_14cab6de8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1476cba31;
    local_40 = FUN_14634ff52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetBinaryStateRegistration",&DAT_14cab6de8,&DAT_1476cba30);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6744 FUN_1458e6744 body=221 status=ok
// SIG undefined FUN_1458e6744(void)

longlong FUN_1458e6744(void)

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
  if (DAT_14cac0f60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14786c851;
    local_40 = FUN_1463778c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/Engine",L"ForceFeedbackAttenuation",&DAT_14cac0f60,&DAT_14786c850);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac0f60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6828 FUN_1458e6828 body=221 status=ok
// SIG undefined FUN_1458e6828(void)

longlong FUN_1458e6828(void)

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
  if (DAT_14cac4cb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147884bef;
    local_40 = &LAB_145a5ef6f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"MorphTarget",&DAT_14cac4cb0,&DAT_147884bee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4cb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e690c FUN_1458e690c body=221 status=ok
// SIG undefined FUN_1458e690c(void)

longlong FUN_1458e690c(void)

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
  if (DAT_14cac8680 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a88e9;
    local_40 = FUN_146397fe7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"StereoLayerShape",&DAT_14cac8680,&DAT_1478a88e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8680;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e69f0 FUN_1458e69f0 body=221 status=ok
// SIG undefined FUN_1458e69f0(void)

longlong FUN_1458e69f0(void)

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
  if (DAT_14cacb360 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478e1d75;
    local_40 = FUN_1463a20da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AnimCurveCompressionCodec",&DAT_14cacb360,&DAT_1478e1d74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb360;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6ad4 FUN_1458e6ad4 body=221 status=ok
// SIG undefined FUN_1458e6ad4(void)

longlong FUN_1458e6ad4(void)

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
  if (DAT_14cad7bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a7fabb;
    local_40 = FUN_1463c552e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AssetImportData",&DAT_14cad7bc8,&DAT_147a7faba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad7bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6bb8 FUN_1458e6bb8 body=221 status=ok
// SIG undefined FUN_1458e6bb8(void)

longlong FUN_1458e6bb8(void)

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
  if (DAT_14caf2830 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be3c5d;
    local_40 = FUN_1463ed791;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkMetricsBaseListener",&DAT_14caf2830,&DAT_147be3c5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2830;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6c9c FUN_1458e6c9c body=221 status=ok
// SIG undefined FUN_1458e6c9c(void)

longlong FUN_1458e6c9c(void)

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
  if (DAT_14caf7bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147c7d6cf;
    local_40 = FUN_1463f6005;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicalMaterialMask",&DAT_14caf7bc8,&DAT_147c7d6ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf7bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6d80 FUN_1458e6d80 body=221 status=ok
// SIG undefined FUN_1458e6d80(void)

longlong FUN_1458e6d80(void)

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
  if (DAT_14cb11580 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147dbe699;
    local_40 = &LAB_145cbb2d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"HLODLayer",&DAT_14cb11580,&DAT_147dbe698);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11580;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6e64 FUN_1458e6e64 body=221 status=ok
// SIG undefined FUN_1458e6e64(void)

longlong FUN_1458e6e64(void)

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
  if (DAT_14cb1a9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e1c0a5;
    local_40 = FUN_146419368;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnerStyle",&DAT_14cb1a9a0,&DAT_147e1c0a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e6f48 FUN_1458e6f48 body=221 status=ok
// SIG undefined FUN_1458e6f48(void)

longlong FUN_1458e6f48(void)

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
  if (DAT_14cb29370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fd2fad;
    local_40 = FUN_146457617;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraDirector",&DAT_14cb29370,&DAT_147fd2fac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e702c FUN_1458e702c body=221 status=ok
// SIG undefined FUN_1458e702c(void)

longlong FUN_1458e702c(void)

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
  if (DAT_14cb39660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1480d7d8f;
    local_40 = FUN_14646bc88;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraBakerOutput",&DAT_14cb39660,&DAT_1480d7d8e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb39660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7110 FUN_1458e7110 body=221 status=ok
// SIG undefined FUN_1458e7110(void)

longlong FUN_1458e7110(void)

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
  if (DAT_14cb3e178 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481bbc95;
    local_40 = FUN_143a7b7ae;
    local_48 = L"Niagara";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEffectType",&DAT_14cb3e178,&DAT_1481bbc94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3e178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e71f4 FUN_1458e71f4 body=221 status=ok
// SIG undefined FUN_1458e71f4(void)

longlong FUN_1458e71f4(void)

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
  if (DAT_14cb42368 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481d0245;
    local_40 = FUN_1464770e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraBaselineController",&DAT_14cb42368,FUN_1464770c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e72d8 FUN_1458e72d8 body=221 status=ok
// SIG undefined FUN_1458e72d8(void)

longlong FUN_1458e72d8(void)

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
  if (DAT_14cb42660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481d111d;
    local_40 = FUN_146477818;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraPreviewAxis",&DAT_14cb42660,FUN_1464777f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e73bc FUN_1458e73bc body=221 status=ok
// SIG undefined FUN_1458e73bc(void)

longlong FUN_1458e73bc(void)

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
  if (DAT_14cb44dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148220ba9;
    local_40 = &LAB_146022491;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0x6b0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonButtonStyle",&DAT_14cb44dd0,FUN_14647fb9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e74a0 FUN_1458e74a0 body=221 status=ok
// SIG undefined FUN_1458e74a0(void)

longlong FUN_1458e74a0(void)

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
  if (DAT_14cb91938 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f30ed;
    local_40 = FUN_14656a762;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconBehavior",&DAT_14cb91938,&DAT_1489f30ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91938;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7584 FUN_1458e7584 body=221 status=ok
// SIG undefined FUN_1458e7584(void)

longlong FUN_1458e7584(void)

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
  if (DAT_14cbf7e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14907bbc3;
    local_40 = FUN_14667a353;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomCache",&DAT_14cbf7e80,&DAT_14907bbc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf7e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7668 FUN_1458e7668 body=221 status=ok
// SIG undefined FUN_1458e7668(void)

longlong FUN_1458e7668(void)

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
  if (DAT_14cc0b520 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492dc1d5;
    local_40 = FUN_14671a422;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkFrameTranslator",&DAT_14cc0b520,
                  &DAT_1492dc1d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b520;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e774c FUN_1458e774c body=221 status=ok
// SIG undefined FUN_1458e774c(void)

longlong FUN_1458e774c(void)

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
  if (DAT_14cc0bd88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ec981;
    local_40 = FUN_14671cbe2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeResultsContainer",&DAT_14cc0bd88,
                  &DAT_1492ec980);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bd88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7830 FUN_1458e7830 body=221 status=ok
// SIG undefined FUN_1458e7830(void)

longlong FUN_1458e7830(void)

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
  if (DAT_14cc170f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14944f615;
    local_40 = &LAB_145cbb8ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/USDStage",L"UsdPrimTwin",&DAT_14cc170f0,&DAT_14944f614);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc170f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7914 FUN_1458e7914 body=221 status=ok
// SIG undefined FUN_1458e7914(void)

longlong FUN_1458e7914(void)

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
  if (DAT_14cc22438 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1496e513d;
    local_40 = FUN_14674dbc8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/ChaosCaching",L"ChaosCacheCollection",&DAT_14cc22438,&DAT_1496e513c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc22438;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e79f8 FUN_1458e79f8 body=221 status=ok
// SIG undefined FUN_1458e79f8(void)

longlong FUN_1458e79f8(void)

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
  if (DAT_14cc2dce8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14987f6dd;
    local_40 = FUN_14676a2e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRigDefinition",&DAT_14cc2dce8,&DAT_14987f6dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2dce8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7ad6 FUN_1458e7ad6 body=41 status=ok
// SIG undefined FUN_1458e7ad6(void)

void FUN_1458e7ad6(longlong param_1,undefined8 param_2)

{
  FUN_1458e7b00();
  FUN_1458e7b4c(param_1 + 0x21e8,param_2);
  return;
}



// FUNCTION 1458e7b00 FUN_1458e7b00 body=75 status=ok
// SIG undefined FUN_1458e7b00(void)

void FUN_1458e7b00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    if (lVar1 != param_2 && *(longlong **)(lVar1 + 0x188) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x188) + 0x490))();
    }
  }
  FUN_14131911e(param_1,param_2);
  return;
}



// FUNCTION 1458e7b4c FUN_1458e7b4c body=114 status=ok
// SIG undefined FUN_1458e7b4c(void)

void FUN_1458e7b4c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 == 0) || (*param_1 == 0)) || (*(char *)(param_2 + 0x178) == '\x03')) {
    return;
  }
  lVar1 = FUN_144a2f878();
  if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
       == lVar1 + 0x30)) && (*(longlong *)(*param_1 + 0xf48) != param_2)) {
    FUN_148dc026a(param_1,param_2);
    return;
  }
  FUN_1458e7bbe(param_1);
  return;
}



// FUNCTION 1458e7bbe FUN_1458e7bbe body=491 status=ok
// SIG undefined FUN_1458e7bbe(void)

void FUN_1458e7bbe(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined *local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) goto LAB_1458e7bed;
  plVar1 = param_1 + 1;
  lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x1118) + 0x20))(lVar2 + 0x1118);
  if (lVar2 != 0) {
    FUN_140ba2af2(lVar2,&DAT_14cbcffec);
  }
  lVar2 = *(longlong *)(*plVar1 + 0x858);
  if (lVar2 != 0) {
    FUN_14035bd78(lVar2,1,1);
    if (0 < *(int *)(lVar2 + 0x14b8)) {
      local_78[0] = &DAT_14cbcffec;
      FUN_140b042ce(lVar2 + 0x1430);
    }
    FUN_14483674a(lVar2 + 0x1288);
  }
  if ((*(longlong *)(*param_1 + 0xf48) != 0) &&
     (*(char *)(*(longlong *)(*param_1 + 0xf48) + 0x178) == '\x03')) {
    FUN_1414b167c();
  }
  lVar2 = FUN_144a782da(*plVar1 + 0x1808,&DAT_14cb72620);
  if (lVar2 != 0) {
    local_80 = 0;
    FUN_14485c47a(&local_80,*(undefined8 *)(*plVar1 + 0x858));
    FUN_143cbb0bc(local_78,&local_80);
    FUN_1406ebff6(lVar2,4,local_78);
  }
  FUN_140dc8e1a(*plVar1 + 0x60e8,0);
  if (0 < *(int *)(*plVar1 + 0x6190)) {
    lVar2 = *(longlong *)(*(longlong *)(*plVar1 + 0x6188) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_1458e7d70;
    lVar3 = FUN_144a7a5f4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_148f176a4(lVar2,*param_1);
    }
  }
LAB_1458e7d70:
  FUN_148dc0470(param_1);
  FUN_1400bc8c2(param_1[1] + 0x28b0,&DAT_14cbcffec);
  FUN_148bf6fac(param_1[1] + 0x89b8,*param_1);
  *plVar1 = 0;
  param_1[2] = 0;
LAB_1458e7bed:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e7db8 FUN_1458e7db8 body=441 status=ok
// SIG undefined FUN_1458e7db8(void)

void FUN_1458e7db8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined1 auStack_a8 [39];
  byte local_81;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (longlong)*(int *)(param_1 + 0x18);
  local_70 = param_2;
  if (lVar3 != 0) {
    plVar11 = *(longlong **)(param_1 + 0x10);
    uVar12 = 0;
    local_80 = lVar3;
    local_60 = param_1;
    if ((int)plVar11[1] == 0) {
      lVar3 = 0;
    }
    else {
      plVar1 = (longlong *)*plVar11;
      lVar3 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
        lVar3 = local_50;
      }
    }
    bVar13 = lVar3 == local_70;
    local_58 = plVar11 + 3;
    lVar3 = local_80;
    iVar8 = 0;
    local_78 = plVar11;
    do {
      local_81 = bVar13 ^ 1;
      lVar4 = (longlong)iVar8;
      iVar7 = iVar8 + 1;
      if (iVar8 + 1 < (int)lVar3) {
        iVar7 = (int)lVar3;
      }
      plVar11 = local_58 + lVar4 * 2;
      iVar9 = iVar8;
      lVar5 = lVar4;
      local_68 = uVar12;
      do {
        lVar5 = lVar5 + 1;
        iVar10 = iVar7;
        if (lVar3 <= lVar5) break;
        if ((int)*plVar11 == 0) {
          lVar6 = 0;
        }
        else {
          plVar1 = (longlong *)plVar11[-1];
          lVar6 = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
            lVar6 = local_50;
          }
        }
        iVar9 = iVar9 + 1;
        plVar11 = plVar11 + 2;
        lVar3 = local_80;
        iVar10 = iVar9;
      } while ((bool)(bVar13 & 1) == (lVar6 == local_70));
      bVar2 = local_81;
      iVar7 = iVar10 - iVar8;
      if ((bVar13 & 1) == 0) {
        iVar9 = (int)local_68;
        if (iVar9 != iVar8) {
          memmove(local_78 + (longlong)iVar9 * 2,local_78 + lVar4 * 2,(longlong)iVar7 << 4);
          lVar3 = local_80;
        }
        uVar12 = (ulonglong)(uint)(iVar9 + iVar7);
        bVar13 = bVar2;
      }
      else {
        FUN_1458e7f7d(local_78 + lVar4 * 2,iVar7);
        lVar3 = local_80;
        uVar12 = local_68;
        bVar13 = local_81;
      }
      iVar8 = iVar10;
    } while (lVar5 < lVar3);
    *(int *)(local_60 + 0x18) = (int)uVar12;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e7f7d FUN_1458e7f7d body=38 status=ok
// SIG undefined FUN_1458e7f7d(void)

void FUN_1458e7f7d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1458e7fa3 FUN_1458e7fa3 body=42 status=ok
// SIG undefined FUN_1458e7fa3(void)

void FUN_1458e7fa3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458e7fce(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc9bde0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1458e7fce FUN_1458e7fce body=59 status=ok
// SIG undefined FUN_1458e7fce(void)

undefined8 * FUN_1458e7fce(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14bc22f00;
  return param_1;
}



// FUNCTION 1458e800a FUN_1458e800a body=294 status=ok
// SIG undefined FUN_1458e800a(void)

void FUN_1458e800a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  uStack_38 = (undefined4)local_18;
  uStack_34 = local_18._4_4_;
  FUN_1458e8132(&local_48,uVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8132 FUN_1458e8132 body=127 status=ok
// SIG undefined FUN_1458e8132(void)

void FUN_1458e8132(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  FUN_1458e81c2(param_1,&local_30);
  FUN_1458e8256(local_30,&local_20);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e81c2 FUN_1458e81c2 body=144 status=ok
// SIG undefined FUN_1458e81c2(void)

undefined8 * FUN_1458e81c2(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8256 FUN_1458e8256 body=461 status=ok
// SIG undefined FUN_1458e8256(void)

void FUN_1458e8256(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  longlong local_148;
  longlong *local_138;
  longlong local_128 [4];
  int local_108;
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  int local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar4 = FUN_14479d2ce(param_1 + 0x70);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1447210f0(lVar4);
    }
    lVar4 = thunk_FUN_1412af310(uVar5);
    if (lVar4 != 0) {
      uVar3 = FUN_1458e8696(param_1);
      uVar5 = FUN_14479d2ce(param_1 + 0x70);
      FUN_1458e852c(lVar4,local_98,uVar5);
      FUN_1458e842a(local_98,local_f8);
      FUN_1458e84aa(local_98,local_158);
      if (local_a8 != local_108) {
        do {
          cVar1 = FUN_1413192c8(local_f8);
          cVar2 = FUN_1413192c8(local_158);
          if (cVar1 == cVar2) break;
          if ((local_a0 != 0) && (*(longlong *)(local_a0 + 0x2ec) == *param_2)) {
            FUN_148dcc2d6(param_1,local_a0,uVar3);
          }
          local_a8 = local_a8 + 1;
          FUN_14131935c(local_f8);
        } while (local_a8 != local_108);
      }
      if (local_148 != 0) {
        if (local_138 == (longlong *)0x0) {
          local_138 = local_128;
        }
        (**(code **)(*local_138 + 0x10))();
      }
      if (local_e8 != 0) {
        if (local_d8 == (longlong *)0x0) {
          local_d8 = local_c8;
        }
        (**(code **)(*local_d8 + 0x10))();
      }
      if (local_88 != 0) {
        if (local_78 == (longlong *)0x0) {
          local_78 = local_68;
        }
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e8424 thunk_FUN_1412af310 body=5 status=ok
// SIG undefined thunk_FUN_1412af310(void)

ulonglong thunk_FUN_1412af310(ulonglong param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined1 auStack_168 [40];
  ulonglong uStack_140;
  ulonglong uStack_138;
  undefined1 auStack_12c [4];
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_88;
  longlong *plStack_78;
  longlong alStack_68 [5];
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uStack_138 = param_1;
  if (param_1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x152);
    if (bVar2 != 1) {
      uVar7 = 0;
      if ((6 < bVar2) || (uVar7 = 0, (0x68U >> (bVar2 & 0x1f) & 1) == 0)) goto LAB_1412af4c2;
    }
    if ((*(byte *)(param_1 + 0x155) & 0x20) == 0) {
      if (DAT_14cb7f9f0 != DAT_14cb7fa1c) {
        uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        puVar9 = &DAT_14cb7fa20;
        if (DAT_14cb7fa28 != (undefined *)0x0) {
          puVar9 = DAT_14cb7fa28;
        }
        iVar5 = *(int *)(puVar9 + (ulonglong)(DAT_14cb7fa30 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        while (iVar5 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb7f9e8 + (longlong)iVar5 * 0x18);
          if (*puVar1 == param_1) {
            if ((puVar1 != (ulonglong *)0x0) && (uVar7 = puVar1[1], puVar1[1] != 0))
            goto LAB_1412af4c2;
            break;
          }
          iVar5 = (int)puVar1[2];
        }
      }
      iVar5 = FUN_14490d72a(param_1);
      if ((iVar5 != 3) && (cVar3 = FUN_144a61b4f(), cVar3 != '\0')) {
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        lStack_88 = 0;
        plStack_78 = (longlong *)0x0;
        uStack_98 = 0x4800080101;
        uVar6 = FUN_1458c3b02();
        puStack_128 = (ulonglong *)0x0;
        puStack_120 = (ulonglong *)0x0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0x3ff00000;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e4 = 0x3ff00000;
        uStack_e0 = 0;
        uStack_dc = 0x3ff00000;
        uStack_d8 = 0x3ff0000000000000;
        uStack_d0 = 0;
        uStack_140 = FUN_141037e38(param_1,uVar6,&puStack_128,&uStack_c8);
        puStack_120 = &uStack_140;
        puStack_128 = &uStack_138;
        FUN_14589108a(auStack_12c,&puStack_128);
        uVar7 = uStack_140;
        if (lStack_88 != 0) {
          plVar8 = plStack_78;
          if (plStack_78 == (longlong *)0x0) {
            plVar8 = alStack_68;
          }
          (**(code **)(*plVar8 + 0x10))();
          uVar7 = uStack_140;
        }
        goto LAB_1412af4c2;
      }
    }
  }
  uVar7 = 0;
LAB_1412af4c2:
  if ((uStack_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e842a FUN_1458e842a body=126 status=ok
// SIG undefined FUN_1458e842a(void)

undefined8 FUN_1458e842a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = param_1[2];
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar1 = param_1 + 6;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[4];
    }
    (**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_1413192e0(param_2,*param_1,local_58,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e84aa FUN_1458e84aa body=129 status=ok
// SIG undefined FUN_1458e84aa(void)

undefined8 FUN_1458e84aa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = param_1[2];
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar1 = param_1 + 6;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[4];
    }
    (**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_1413192e0(param_2,*param_1,local_58,0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e852c FUN_1458e852c body=103 status=ok
// SIG undefined FUN_1458e852c(void)

undefined8 FUN_1458e852c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_38 = &PTR_DAT_14b414cb0;
  local_58[0] = &LAB_143dcca28;
  local_30 = param_3;
  FUN_1458e8594(param_1,param_2,local_58);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8594 FUN_1458e8594 body=157 status=ok
// SIG undefined FUN_1458e8594(void)

undefined8 FUN_1458e8594(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  FUN_1458e8632(param_2,param_1,local_68);
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8632 FUN_1458e8632 body=99 status=ok
// SIG undefined FUN_1458e8632(void)

undefined8 * FUN_1458e8632(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = param_2;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 1458e8696 FUN_1458e8696 body=307 status=ok
// SIG undefined FUN_1458e8696(void)

undefined4 FUN_1458e8696(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [40];
  undefined4 local_88;
  undefined1 local_80 [56];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar3 = FUN_14479d2ce(param_1 + 0x80);
    if (lVar3 != 0) {
      uVar4 = FUN_14108b142(*(longlong *)(param_1 + 0x198) + 0x2a8);
      FUN_14108b31e(lVar3,local_80,uVar4);
      local_b0[0] = 0;
      local_88 = 0;
      FUN_14575a19a(local_b0,0);
      FUN_1447c3578(local_80,local_48,local_b0);
      uVar2 = FUN_14005fbd2(local_48,0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = local_48;
        if (0x18 < local_30) {
          pppuVar5 = (undefined8 ***)local_48[0];
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(local_48[0]);
      }
      FUN_144a5ac3a(local_b0);
      FUN_144a2da94(local_80);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e87ca FUN_1458e87ca body=85 status=ok
// SIG undefined FUN_1458e87ca(void)

undefined * FUN_1458e87ca(longlong *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)FUN_140a2b044();
    if (plVar1 != (longlong *)0x0) {
      FUN_141319416();
                    /* WARNING: Could not recover jumptable at 0x0001458e8809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (undefined *)(**(code **)(*plVar1 + 0x58))(plVar1,param_1[1],0,&DAT_14c979d70);
      return puVar2;
    }
  }
  FUN_141319416();
  return &DAT_14c979d70;
}



// FUNCTION 1458e8820 FUN_1458e8820 body=175 status=ok
// SIG undefined FUN_1458e8820(void)

bool FUN_1458e8820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e88de FUN_1458e88de body=295 status=ok
// SIG undefined FUN_1458e88de(void)

undefined8 * FUN_1458e88de(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140056680(local_48,&DAT_149e01eac);
  FUN_140056680(local_58,&DAT_149e0209e);
  local_38 = local_58;
  local_30 = local_48;
  FUN_1411f1c38(param_1,local_24,&local_38,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,&DAT_149e014fa);
  FUN_140056680(local_58,&DAT_149e01ea4);
  local_38 = local_58;
  local_30 = local_48;
  FUN_1411f1c38(param_1,local_24,&local_38,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8a1a FUN_1458e8a1a body=170 status=ok
// SIG undefined FUN_1458e8a1a(void)

void FUN_1458e8a1a(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_50 = DAT_14cb86e08;
    local_58 = DAT_14cb86e00;
    FUN_1448075d0(local_48);
    puVar3 = (undefined8 *)FUN_144a06846(param_3,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    pbVar1 = (byte *)*puVar3;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) != 0)) {
      if ((*pbVar1 & 3) == 1) {
        uVar4 = *(undefined8 *)(pbVar1 + 8);
      }
      else {
        uVar4 = 0;
      }
      uVar2 = FUN_148923b88(uVar4);
      *(undefined1 *)(param_1 + 8) = uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8ada FUN_1458e8ada body=304 status=ok
// SIG undefined FUN_1458e8ada(void)

void FUN_1458e8ada(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *in_RCX;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_3 + 8) == '\x01') && ((longlong)*(int *)(param_3 + 0x18) != 0)) {
    lVar5 = (longlong)*(int *)(param_3 + 0x18) * 0x50;
    lVar3 = *(longlong *)(param_3 + 0x10) + 0x28;
    do {
      param_1 = FUN_14131a58a(param_1,param_2,lVar3);
      lVar3 = lVar3 + 0x50;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_30 = 0xffff;
  if ((*(uint *)(in_RCX + 1) & 0x10) == 0) {
    lVar5 = in_RCX[4];
  }
  else {
    lVar5 = 0;
  }
  FUN_140fe4ff6(lVar5,in_RCX,local_48);
  if (local_48[0] != 0) {
    plVar1 = *(longlong **)(local_48[0] + 0x1b0);
    if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar1);
    }
    else if (plVar1 == (longlong *)0x0) goto LAB_1458e8beb;
    cVar2 = (**(code **)(*plVar1 + 0x4b8))(plVar1);
    uVar4 = 3;
    if (cVar2 != '\0') goto LAB_1458e8b9c;
  }
LAB_1458e8beb:
  uVar4 = 9;
LAB_1458e8b9c:
  FUN_1458e8c12(in_RCX,local_48,param_2,uVar4);
  (**(code **)(*in_RCX + 0x2b0))(in_RCX);
  if ((*(char *)((longlong)in_RCX + 0x91) == '\x01') && ((int)in_RCX[0x13] == 0)) {
    FUN_14623ce6e(in_RCX);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8c12 FUN_1458e8c12 body=215 status=ok
// SIG undefined FUN_1458e8c12(void)

void FUN_1458e8c12(longlong param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_14009b010(&local_48,3,0);
  }
  else {
    FUN_14131aef2(&local_48,param_3);
  }
  FUN_1446dcc2e(param_1 + 0x68,&local_48);
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
  if ((param_4 & 1) != 0) {
    FUN_1458e8df6(param_1,param_2);
  }
  FUN_1458e8cea(param_1,param_2,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8cea FUN_1458e8cea body=266 status=ok
// SIG undefined FUN_1458e8cea(void)

void FUN_1458e8cea(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar4 = 0x60;
    lVar3 = 0xc;
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*param_2 + 0x1f0) + lVar3) == 0) {
        local_88 = param_3;
        FUN_1458e8fd2(param_1,param_2,param_1 + 0x68,uVar5 & 0xffffffff);
        plVar1 = *(longlong **)(*param_2 + 0x1b0);
        if (plVar1 != (longlong *)0x0) {
          local_78 = 0;
          uStack_70 = 0;
          (**(code **)(*plVar1 + 0x4b0))
                    (plVar1,*(longlong *)(param_1 + 0x78) + lVar4 + -0x50,
                     *(longlong *)(param_1 + 0x78) + lVar4,&local_78);
        }
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x70;
      lVar3 = lVar3 + 0x50;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x80));
  }
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x2f0))(param_2,param_1);
  }
  *(undefined1 *)(param_1 + 0x8c) = uVar2;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8df6 FUN_1458e8df6 body=475 status=ok
// SIG undefined FUN_1458e8df6(void)

void FUN_1458e8df6(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [8];
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
  lVar5 = *(longlong *)(param_1 + 0x38);
  plVar3 = (longlong *)(lVar5 + 0xf8);
  lVar4 = lVar5 + 0x108;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar4;
  if (*(int *)(lVar5 + 0x120) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(lVar5 + 0x120);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar3;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar4)) {
    do {
      puVar7 = (undefined8 *)(*local_90 + (longlong)iStack_74 * 0x18);
      local_68 = *puVar7;
      lVar5 = puVar7[1];
      uStack_60 = lVar5;
      if (*(longlong *)(param_1 + 0x68) == 0) {
        puVar7 = &DAT_14c9a1308;
      }
      else {
        puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x68),&local_68);
      }
      FUN_14131aef2(local_b0,puVar7);
      local_b8 = param_2;
      FUN_14131af3e(lVar5,local_a0,local_b0,param_1);
      if (*(longlong *)(param_1 + 0x68) != 0) {
        local_b8 = local_b8 & 0xffffffffffffff00;
        FUN_140516f2a(*(longlong *)(param_1 + 0x68),&local_68,local_a0,0);
      }
      plVar6 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar3 || (CONCAT44(uStack_7c,uStack_80) != lVar4 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e8fd2 FUN_1458e8fd2 body=1688 status=ok
// SIG undefined FUN_1458e8fd2(void)

void FUN_1458e8fd2(int *param_1,longlong *param_2,longlong *param_3,int param_4,byte param_5)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  int *piVar4;
  byte *pbVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  byte local_d8;
  int local_c4;
  int *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  byte *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = param_3;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) goto LAB_1458e9234;
  plVar12 = (longlong *)((longlong)param_4 * 0x50 + *(longlong *)(*param_2 + 0x1f0));
  puVar16 = (undefined8 *)((longlong)param_4 * 0x70 + *(longlong *)(param_1 + 0x1e));
  local_c4 = param_4;
  if (((param_5 & 8) == 0) && ((char)plVar12[1] == '\x02')) {
    local_c0 = param_1;
    plVar10 = (longlong *)FUN_144a06846(param_3,plVar12 + 5);
    if (*plVar10 == 0) {
      piVar11 = &DAT_14c9a12e0;
    }
    else {
      piVar11 = (int *)FUN_140625092(*plVar10,&DAT_14c9a12e0);
    }
    if (((*piVar11 != 0) && (piVar11[1] != 0)) && (*piVar11 != DAT_14c948000)) {
      local_98 = DAT_14cb8dcf8;
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,DAT_14cb8dd00);
      FUN_1448075d0(&local_78);
      iVar15 = *piVar11;
      iVar8 = (int)local_78;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (iVar15 != iVar8) {
        FUN_1447715ec(puVar16 + 2,piVar11);
        param_1 = local_c0;
        goto LAB_1458e9110;
      }
    }
    local_78 = (longlong *)0x0;
    uStack_70 = (byte *)0x0;
    FUN_14009b010(&local_78,1,0);
    if (local_78 != (longlong *)0x0) {
      FUN_1402afb64(local_78,puVar16 + 2);
    }
    if (*local_b8 != 0) {
      local_d8 = 0;
      FUN_14014191c(*local_b8,plVar12 + 5,&local_78,0);
    }
    pbVar5 = uStack_70;
    param_1 = local_c0;
    if (uStack_70 != (byte *)0x0) {
      LOCK();
      pbVar2 = uStack_70 + 8;
      *(int *)pbVar2 = *(int *)pbVar2 + -1;
      UNLOCK();
      if (*(int *)pbVar2 == 0) {
        (*(code *)**(undefined8 **)uStack_70)(uStack_70);
        LOCK();
        pbVar2 = pbVar5 + 0xc;
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        UNLOCK();
        param_1 = local_c0;
        if (*(int *)pbVar2 == 0) {
          (**(code **)(*(longlong *)pbVar5 + 0x10))(pbVar5);
          param_1 = local_c0;
        }
      }
    }
  }
LAB_1458e9110:
  iVar15 = local_c4;
  FUN_1446dcdd4(&local_78,plVar12);
  FUN_1458e966b(&local_98,local_b8,&local_78);
  FUN_1446dcc2e(puVar16,&local_98);
  plVar10 = uStack_90;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar11 = (int *)((longlong)plVar10 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((byte)((char)plVar12[1] - 1U) < 2) {
    piVar11 = (int *)(puVar16 + 2);
    if (((*(int *)(puVar16 + 2) == 0) || (*(int *)((longlong)puVar16 + 0x14) == 0)) ||
       (*(int *)(puVar16 + 2) == DAT_14c948000)) {
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,DAT_14cb8dd00);
      local_98 = DAT_14cb8dcf8;
      FUN_1448075d0(&local_78);
      FUN_1404e49fa(piVar11,&local_78);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if ((param_5 & 8) == 0) {
        pbVar5 = (byte *)*puVar16;
        plVar10 = &DAT_14c9a1288;
        if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
          plVar10 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
        }
        plVar1 = plVar10 + 3;
        local_98 = &DAT_100000000;
        local_88 = 0xffffffff;
        uStack_80 = 0;
        local_c0 = piVar11;
        local_b0 = param_2;
        uStack_90 = plVar1;
        if ((int)plVar10[6] == 0) {
          iVar8 = 0;
        }
        else {
          FUN_1449c0562(&local_98);
          iVar8 = (int)plVar10[6];
        }
        uStack_58 = CONCAT44(uStack_7c,uStack_80);
        local_60 = local_88;
        lVar17 = local_60;
        uStack_70 = local_98;
        uStack_68 = (undefined4)uStack_90;
        uStack_64 = uStack_90._4_4_;
        local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
        iVar9 = local_60._4_4_;
        local_78 = plVar10;
        if ((local_60._4_4_ != iVar8) ||
           (piVar11 = local_c0, param_2 = local_b0, local_60 = lVar17, iVar15 = local_c4,
           uStack_90 != plVar1)) {
          do {
            local_60 = lVar17;
            lVar17 = *local_78;
            local_d8 = 0;
            FUN_1401412e0((longlong)iVar9 * 0x40 + lVar17 + 0x28,&local_98,0,0);
            plVar6 = uStack_90;
            piVar11 = local_c0;
            if ((local_98 != (byte *)0x0) && ((*local_98 & 0x6b) == 3)) {
              lVar17 = lVar17 + (longlong)iVar9 * 0x40;
              if ((char)plVar12[1] == '\x02') {
                local_a8 = 0;
                plStack_a0 = (longlong *)0x0;
                FUN_14009b010(&local_a8,1,0);
                if (local_a8 != 0) {
                  FUN_1402afb64(local_a8,lVar17);
                }
                if (*local_b8 != 0) {
                  local_d8 = 0;
                  FUN_14014191c(*local_b8,plVar12 + 5,&local_a8,0);
                }
                plVar10 = plStack_a0;
                if (plStack_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_a0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_a0)(plStack_a0);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar10 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
              }
              FUN_1447715ec(piVar11,lVar17);
              plVar10 = uStack_90;
              piVar11 = local_c0;
              param_2 = local_b0;
              iVar15 = local_c4;
              if (uStack_90 != (longlong *)0x0) {
                LOCK();
                plVar1 = uStack_90 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*uStack_90)(uStack_90);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar10 + 0xc);
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  piVar11 = local_c0;
                  param_2 = local_b0;
                  iVar15 = local_c4;
                  if (*piVar4 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                    piVar11 = local_c0;
                    param_2 = local_b0;
                    iVar15 = local_c4;
                  }
                }
              }
              break;
            }
            if (uStack_90 != (longlong *)0x0) {
              LOCK();
              plVar3 = uStack_90 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*uStack_90)(uStack_90);
                LOCK();
                piVar11 = (int *)((longlong)plVar6 + 0xc);
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                if (*piVar11 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_70._4_4_);
            FUN_1449c0562(&uStack_70);
            piVar11 = local_c0;
            param_2 = local_b0;
            iVar9 = local_60._4_4_;
            lVar17 = local_60;
            iVar15 = local_c4;
          } while (local_78 != plVar10 ||
                   ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar8))
          ;
        }
      }
    }
    if (((*piVar11 != 0) && (*(int *)((longlong)puVar16 + 0x14) != 0)) &&
       (*piVar11 != DAT_14c948000)) {
      FUN_1458e966b(&local_78,puVar16,piVar11);
      FUN_1446dcc2e(puVar16 + 0xc,&local_78);
      pbVar5 = uStack_70;
      if (uStack_70 != (byte *)0x0) {
        LOCK();
        pbVar2 = uStack_70 + 8;
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        UNLOCK();
        if (*(int *)pbVar2 == 0) {
          (*(code *)**(undefined8 **)uStack_70)(uStack_70);
          LOCK();
          pbVar2 = pbVar5 + 0xc;
          *(int *)pbVar2 = *(int *)pbVar2 + -1;
          UNLOCK();
          if (*(int *)pbVar2 == 0) {
            (**(code **)(*(longlong *)pbVar5 + 0x10))(pbVar5);
          }
        }
      }
    }
  }
  if ((((param_5 & 6) != 2) || (*(char *)((longlong)plVar12 + 0x14) == '\0')) ||
     (cVar7 = FUN_14131b65e(param_1,iVar15), cVar7 == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x8d) = 0;
    if ((param_5 & 1) != 0) {
      FUN_14131ab28(param_1,param_2,iVar15,0);
    }
    puVar13 = puVar16 + 0xc;
    if (1 < (byte)((char)plVar12[1] - 1U)) {
      puVar13 = puVar16;
    }
    iVar8 = param_1[0x20];
    if (iVar15 + 1 < iVar8) {
      uVar14 = (ulonglong)(iVar15 + 1);
      lVar17 = uVar14 * 0x50 + 0xc;
      do {
        if (*(longlong *)(*(longlong *)(*param_2 + 0x1f0) + lVar17) == *plVar12) {
          local_d8 = param_5 & 0xfb;
          FUN_1458e8fd2(param_1,param_2,puVar13,uVar14 & 0xffffffff);
          iVar8 = param_1[0x20];
        }
        uVar14 = uVar14 + 1;
        lVar17 = lVar17 + 0x50;
      } while ((longlong)uVar14 < (longlong)iVar8);
    }
  }
LAB_1458e9234:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e966b FUN_1458e966b body=101 status=ok
// SIG undefined FUN_1458e966b(void)

undefined8 * FUN_1458e966b(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar1 = FUN_14131a924(param_2,param_1,param_3,0,0);
  if (cVar1 == '\0') {
    FUN_14009b010(param_1,3,0);
    if (*param_2 != 0) {
      FUN_14014191c(*param_2,param_3,param_1,0,0);
    }
  }
  return param_1;
}



// FUNCTION 1458e96dc FUN_1458e96dc body=261 status=ok
// SIG undefined FUN_1458e96dc(void)

undefined8 * FUN_1458e96dc(undefined8 *param_1)

{
  FUN_1458e97e2();
  *param_1 = &PTR_FUN_14b7b43b0;
  param_1[7] = &PTR_FUN_14b7b46a0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = &PTR_FUN_14b1d7d10;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x169) = 0;
  *(undefined8 *)((longlong)param_1 + 0x171) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_1458e9854(param_1 + 0x32);
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x395) = 0x304;
  param_1[0x73] = 0;
  FUN_144a6ccf8(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x77) = 0xbf800000;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 4;
  return param_1;
}



// FUNCTION 1458e97e2 FUN_1458e97e2 body=113 status=ok
// SIG undefined FUN_1458e97e2(void)

undefined8 * FUN_1458e97e2(undefined8 *param_1)

{
  FUN_14131b9ca();
  *param_1 = &PTR_FUN_14b1ce410;
  param_1[7] = &PTR_FUN_14b1ce700;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 1458e9854 FUN_1458e9854 body=300 status=ok
// SIG undefined FUN_1458e9854(void)

void FUN_1458e9854(undefined8 *param_1)

{
  *param_1 = 0x44fa00003fa00000;
  param_1[1] = 0x3e80000045bb8000;
  *(undefined4 *)(param_1 + 2) = 0x461c4000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0x4120000041a00000;
  param_1[0x35] = 0x4120000041a00000;
  param_1[0x36] = 0x4120000041a00000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x40800000;
  return;
}



// FUNCTION 1458e9980 FUN_1458e9980 body=52 status=ok
// SIG undefined FUN_1458e9980(void)

void FUN_1458e9980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458e99b4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b74f5f0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  return;
}



// FUNCTION 1458e99b4 FUN_1458e99b4 body=32 status=ok
// SIG undefined FUN_1458e99b4(void)

undefined8 * FUN_1458e99b4(undefined8 *param_1)

{
  FUN_1458e99d4();
  *param_1 = &PTR_FUN_14b45a9b0;
  return param_1;
}



// FUNCTION 1458e99d4 FUN_1458e99d4 body=163 status=ok
// SIG undefined FUN_1458e99d4(void)

undefined8 * FUN_1458e99d4(undefined8 *param_1)

{
  FUN_1458e9a78();
  *param_1 = &PTR_FUN_14acc55a0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 1458e9a78 FUN_1458e9a78 body=32 status=ok
// SIG undefined FUN_1458e9a78(void)

undefined8 * FUN_1458e9a78(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8deb70;
  return param_1;
}



// FUNCTION 1458e9a98 FUN_1458e9a98 body=70 status=ok
// SIG undefined FUN_1458e9a98(void)

void FUN_1458e9a98(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x200);
  FUN_1458e9ade(param_2);
  *param_2 = &PTR_FUN_14b0c4460;
  FUN_14126e142(param_2 + 0x1b);
  *(undefined4 *)(param_2 + 0x3f) = 2;
  return;
}



// FUNCTION 1458e9ade FUN_1458e9ade body=190 status=ok
// SIG undefined FUN_1458e9ade(void)

void FUN_1458e9ade(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b0bc170;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffdf959d00000000;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  param_1[0x16] = 0x4040000000000000;
  param_1[0x17] = 0x4040000000000000;
  param_1[0x18] = 0x4040000000000000;
  param_1[0x19] = 0x4230000041b00000;
  *(undefined4 *)(param_1 + 0x1a) = 0x41b00000;
  return;
}



// FUNCTION 1458e9b9c FUN_1458e9b9c body=202 status=ok
// SIG undefined FUN_1458e9b9c(void)

void FUN_1458e9b9c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x58) != 0) && (local_38 = FUN_1458b3fe4(), local_38 != 0)) {
    local_40 = &local_38;
    FUN_1458e9c68(param_1,0x3f800000,0);
    FUN_14131bb82(&local_40,*(longlong *)(param_1 + 0x58) + 0x80,0);
    lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x78);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x70);
      lVar1 = lVar1 * 0x18;
      do {
        FUN_14131bb82(&local_40,lVar2,0x3f800000);
        lVar2 = lVar2 + 0x18;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458e9c68 FUN_1458e9c68 body=254 status=ok
// SIG undefined FUN_1458e9c68(void)

void FUN_1458e9c68(longlong param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  
  if (0.0 < param_2) {
    if (*(char *)(param_1 + 0x162) == '\x01') {
      iVar1 = *(int *)(param_1 + 0xd8);
      lVar5 = (longlong)iVar1;
      *(uint *)(param_1 + 0xd8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xdc) < iVar1 + 1U) {
        FUN_148dd6d48((longlong *)(param_1 + 0xd0),iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0xd0);
      *(float *)(lVar2 + lVar5 * 8) = param_2;
      *(undefined1 *)(lVar2 + 4 + lVar5 * 8) = 1;
      *(char *)(lVar2 + 5 + lVar5 * 8) = (char)param_3;
    }
    else {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_1442215d0(*(longlong *)(param_1 + 0xe8),param_2,param_3);
        return;
      }
      param_1 = param_1 + 0x118;
      cVar3 = FUN_14486ea84(param_1);
      if (cVar3 != '\0') {
        if ((char)param_3 == '\x01') {
          uVar4 = FUN_14008e0ae(param_1);
          fVar6 = (float)FUN_143d46e5a(uVar4);
          param_2 = param_2 * fVar6;
        }
        uVar4 = FUN_14008e0ae(param_1);
        FUN_1414daa56(uVar4,param_2,0x3f800000);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458e9d66 FUN_1458e9d66 body=311 status=ok
// SIG undefined FUN_1458e9d66(void)

void FUN_1458e9d66(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_338 [40];
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [4];
  undefined8 local_2fc;
  undefined8 local_2f4;
  undefined1 local_2e8 [720];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_308 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_308);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_308);
  }
  local_310 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_310);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_310);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1458e9f46(local_300,local_308,local_310);
  *param_3 = local_300[0];
  *(undefined8 *)(param_3 + 4) = local_2fc;
  *(undefined8 *)(param_3 + 0xc) = local_2f4;
  FUN_1458e9e9e(param_3 + 0x18,local_2e8);
  FUN_1407acd04(local_2e8);
  if ((local_18 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458e9e9e FUN_1458e9e9e body=168 status=ok
// SIG undefined FUN_1458e9e9e(void)

void * FUN_1458e9e9e(void *param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_1 != param_2) {
    pvVar1 = *(void **)((longlong)param_1 + 0x2c0);
    if (*(void **)((longlong)param_1 + 0x2c0) == (void *)0x0) {
      pvVar1 = param_1;
    }
    FUN_1407acd41(pvVar1,*(undefined4 *)((longlong)param_1 + 0x2c8));
    if (*(longlong *)((longlong)param_2 + 0x2c0) == 0) {
      memmove(param_1,param_2,0x2c0);
    }
    if (*(longlong *)((longlong)param_1 + 0x2c0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x2c0) = *(undefined8 *)((longlong)param_2 + 0x2c0);
    *(undefined8 *)((longlong)param_2 + 0x2c0) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c8) = *(undefined4 *)((longlong)param_2 + 0x2c8);
    *(undefined4 *)((longlong)param_1 + 0x2cc) = *(undefined4 *)((longlong)param_2 + 0x2cc);
    *(undefined8 *)((longlong)param_2 + 0x2c8) = 0x800000000;
  }
  return param_1;
}



// FUNCTION 1458e9f46 FUN_1458e9f46 body=617 status=ok
// SIG undefined FUN_1458e9f46(void)

undefined1 * FUN_1458e9f46(undefined1 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0x800000000;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  local_38 = param_2;
  local_30 = param_3;
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1447210f0(param_3);
    }
    FUN_14485c47a(param_1 + 4,uVar4);
  }
  else {
    uVar4 = FUN_1447210f0(param_2);
    FUN_14485c47a(param_1 + 4,uVar4);
    lVar5 = FUN_140316ff8();
    lVar1 = *(longlong *)(lVar5 + 0x1b0);
    local_50 = lVar1;
    uVar4 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x1b8));
    local_48 = FUN_14477b664(uVar4);
    lVar5 = *(longlong *)(lVar5 + 0x1c0);
    local_40 = lVar5;
    if (local_48 == 0) {
      uVar4 = FUN_140490c9a();
      local_48 = FUN_14477b664(uVar4);
    }
    if (lVar5 == 0) {
      local_40 = 0;
      if ((((lVar1 != 0) && (local_48 != 0)) &&
          (plVar2 = *(longlong **)(local_48 + 0xb8), plVar2 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_40 = FUN_144aff482(uVar4,&local_50);
        if (local_40 != 0) goto LAB_1458e9fff;
      }
    }
    else {
LAB_1458e9fff:
      FUN_14131bcbe(param_1,&local_50,&local_38);
    }
  }
  if (param_3 == 0) goto LAB_1458ea06f;
  lVar5 = FUN_140316ff8();
  lVar1 = *(longlong *)(lVar5 + 0x198);
  local_50 = lVar1;
  uVar4 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x1a0));
  local_48 = FUN_14477b664(uVar4);
  lVar5 = *(longlong *)(lVar5 + 0x1a8);
  local_40 = lVar5;
  if (local_48 == 0) {
    uVar4 = FUN_140490c9a();
    local_48 = FUN_14477b664(uVar4);
  }
  if (lVar5 == 0) {
    local_40 = 0;
    if (((lVar1 == 0) || (local_48 == 0)) ||
       ((plVar2 = *(longlong **)(local_48 + 0xb8), plVar2 == (longlong *)0x0 ||
        (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')))) goto LAB_1458ea06f;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_40 = FUN_144aff482(uVar4,&local_50);
    if (local_40 == 0) goto LAB_1458ea06f;
  }
  FUN_14131bcbe(param_1,&local_50,&local_30);
LAB_1458ea06f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458ea1b6 FUN_1458ea1b6 body=122 status=ok
// SIG undefined FUN_1458ea1b6(void)

void FUN_1458ea1b6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14ad90b00;
  puVar1[0x21] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x22,&DAT_14cb42160);
  *(undefined4 *)(puVar1 + 0x22) = uVar2;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *puVar1 = &PTR_FUN_14ad904d0;
  puVar1[0x25] = &PTR_FUN_14ad90820;
  return;
}



// FUNCTION 1458ea230 FUN_1458ea230 body=104 status=ok
// SIG undefined FUN_1458ea230(void)

undefined8 FUN_1458ea230(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_1458ea29a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ea29a FUN_1458ea29a body=22 status=ok
// SIG undefined FUN_1458ea29a(void)

ulonglong FUN_1458ea29a(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbe6a88;
  if (DAT_14cbe6a88 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbe6a88 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe6a88 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbe6a88 + 0x1fc) < (int)DAT_14cbe6a88[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbe6a88 + 0x300))(DAT_14cbe6a88);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1458ea2b0 FUN_1458ea2b0 body=40 status=ok
// SIG undefined FUN_1458ea2b0(void)

undefined8 FUN_1458ea2b0(undefined8 param_1,int param_2)

{
  FUN_1458ea2d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ea2d8 FUN_1458ea2d8 body=70 status=ok
// SIG undefined FUN_1458ea2d8(void)

void FUN_1458ea2d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4d5a20;
  param_1[0xd] = &PTR_FUN_14a4d5d00;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea34e(param_1 + 0xe);
  FUN_1458ea31e(param_1);
  return;
}



// FUNCTION 1458ea31e FUN_1458ea31e body=47 status=ok
// SIG undefined FUN_1458ea31e(void)

void FUN_1458ea31e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a470110;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458ea34e FUN_1458ea34e body=155 status=ok
// SIG undefined FUN_1458ea34e(void)

void FUN_1458ea34e(longlong *param_1)

{
  FUN_1458ea44b(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea41a(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea3e9(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea3e9(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea3e9(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458ea3e9 FUN_1458ea3e9 body=49 status=ok
// SIG undefined FUN_1458ea3e9(void)

void FUN_1458ea3e9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458ea41a FUN_1458ea41a body=49 status=ok
// SIG undefined FUN_1458ea41a(void)

void FUN_1458ea41a(longlong param_1,int param_2)

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



// FUNCTION 1458ea44b FUN_1458ea44b body=60 status=ok
// SIG undefined FUN_1458ea44b(void)

void FUN_1458ea44b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_147664d95(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458ea488 FUN_1458ea488 body=21 status=ok
// SIG undefined FUN_1458ea488(void)

undefined8 FUN_1458ea488(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458ea49e FUN_1458ea49e body=49 status=ok
// SIG undefined FUN_1458ea49e(void)

void FUN_1458ea49e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144a7ae82();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458ea4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2,*(code **)(*plVar1 + 0x2a0));
    return;
  }
  return;
}



// FUNCTION 1458ea4da FUN_1458ea4da body=74 status=ok
// SIG undefined FUN_1458ea4da(void)

undefined8 * FUN_1458ea4da(undefined8 *param_1)

{
  FUN_1458ea524();
  *param_1 = &PTR_FUN_14b7e4f10;
  param_1[5] = &PTR_FUN_14b7e5200;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 1458ea524 FUN_1458ea524 body=53 status=ok
// SIG undefined FUN_1458ea524(void)

undefined8 * FUN_1458ea524(undefined8 *param_1)

{
  FUN_1458ea55a();
  *param_1 = &PTR_FUN_14b4fc0a0;
  param_1[5] = &PTR_FUN_14b4fc390;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 1458ea55a FUN_1458ea55a body=66 status=ok
// SIG undefined FUN_1458ea55a(void)

undefined8 * FUN_1458ea55a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b425280;
  param_1[5] = &PTR_FUN_14b425560;
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
  return param_1;
}



// FUNCTION 1458ea59c FUN_1458ea59c body=62 status=ok
// SIG undefined FUN_1458ea59c(void)

void FUN_1458ea59c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458ea5da(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9ed960;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_140e2938c(puVar1 + 8);
  FUN_140e2938c(puVar1 + 0xc);
  return;
}



// FUNCTION 1458ea5da FUN_1458ea5da body=40 status=ok
// SIG undefined FUN_1458ea5da(void)

undefined8 * FUN_1458ea5da(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b9e6bc0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1458ea602 FUN_1458ea602 body=40 status=ok
// SIG undefined FUN_1458ea602(void)

undefined8 FUN_1458ea602(undefined8 param_1,int param_2)

{
  FUN_1458ea62a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ea62a FUN_1458ea62a body=87 status=ok
// SIG undefined FUN_1458ea62a(void)

void FUN_1458ea62a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba57ae0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1458ea681(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458ea681 FUN_1458ea681 body=38 status=ok
// SIG undefined FUN_1458ea681(void)

void FUN_1458ea681(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458ea6a8(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1458ea6a8 FUN_1458ea6a8 body=90 status=ok
// SIG undefined FUN_1458ea6a8(void)

void FUN_1458ea6a8(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
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



// FUNCTION 1458ea702 FUN_1458ea702 body=29 status=ok
// SIG undefined FUN_1458ea702(void)

undefined8 FUN_1458ea702(longlong param_1,undefined8 param_2)

{
  FUN_1458ea720(param_1 + 0x6b8);
  return param_2;
}



// FUNCTION 1458ea720 FUN_1458ea720 body=823 status=ok
// SIG undefined FUN_1458ea720(void)

undefined8 * FUN_1458ea720(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == 0) || (lVar3 = FUN_14479d2ce(param_1 + 0x50), lVar3 == 0)) {
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
    goto LAB_1458ea896;
  }
  local_48 = 0;
  lVar4 = FUN_1403b0700(lVar3);
  lVar6 = *(longlong *)(lVar4 + 0x40);
  if (lVar6 == 0) {
    uVar5 = FUN_140355b7c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x40) = lVar6;
  }
  lVar7 = *(longlong *)(lVar4 + 0x48);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar4 + 0x38) != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x38));
    }
    *(longlong *)(lVar4 + 0x48) = lVar7;
  }
  uVar5 = DAT_14cbcfbd8;
  if (lVar7 == param_3) {
LAB_1458ea881:
    local_48 = uVar5;
  }
  else {
    uVar5 = FUN_1458eaa58();
    cVar2 = FUN_1448093f4(param_3,uVar5);
    uVar5 = DAT_14cbcfbd8;
    if (cVar2 != '\0') goto LAB_1458ea881;
    uVar5 = FUN_1458eaa92();
    cVar2 = FUN_1448093f4(param_3,uVar5);
    uVar5 = DAT_14cbcfbe0;
    if (cVar2 != '\0') goto LAB_1458ea881;
    lVar4 = FUN_1403ca227();
    lVar6 = *(longlong *)(lVar4 + 0x28);
    if (lVar6 == 0) {
      uVar5 = FUN_14121240e();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x28) = lVar6;
    }
    lVar7 = *(longlong *)(lVar4 + 0x30);
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar4 + 0x20) != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x20));
      }
      *(longlong *)(lVar4 + 0x30) = lVar7;
    }
    uVar5 = DAT_14cbcfbe0;
    if (lVar7 == param_3) goto LAB_1458ea881;
    uVar5 = FUN_1458eaacc();
    cVar2 = FUN_1448093f4(param_3,uVar5);
    uVar5 = DAT_14cbcfbe8;
    if (cVar2 != '\0') goto LAB_1458ea881;
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 != 0) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_140a9b590(lVar3 + 0x3910,&local_60,0);
        if (local_58 == 0) {
          uVar5 = FUN_14037df6e();
          local_58 = FUN_14477b664(uVar5);
        }
        if (((local_50 == 0) && (local_50 = 0, local_58 != 0)) && (local_60 != 0)) {
          plVar1 = *(longlong **)(local_58 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            local_50 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            local_50 = FUN_144aff482(uVar5,&local_60);
          }
        }
        uVar5 = DAT_14cbcfbe8;
        if (local_50 == param_3) goto LAB_1458ea881;
      }
    }
  }
  FUN_14131c9ee(param_1,param_2,&local_48);
LAB_1458ea896:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458eaa58 FUN_1458eaa58 body=57 status=ok
// SIG undefined FUN_1458eaa58(void)

void FUN_1458eaa58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8b50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8b50 = FUN_140002ddd(FUN_1465d1a22,uVar1,L"OakCharacterStandInDef");
  }
  return;
}



// FUNCTION 1458eaa92 FUN_1458eaa92 body=57 status=ok
// SIG undefined FUN_1458eaa92(void)

void FUN_1458eaa92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ea0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ea0 = FUN_140002ddd(FUN_1465d6304,uVar1,L"OakEcho4StandInDef");
  }
  return;
}



// FUNCTION 1458eaacc FUN_1458eaacc body=57 status=ok
// SIG undefined FUN_1458eaacc(void)

void FUN_1458eaacc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcfb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcfb8 = FUN_140002ddd(FUN_14660d76c,uVar1,L"OakVehicleStandInDef");
  }
  return;
}



// FUNCTION 1458eab06 FUN_1458eab06 body=144 status=ok
// SIG undefined FUN_1458eab06(void)

bool FUN_1458eab06(longlong param_1)

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



// FUNCTION 1458eaba4 FUN_1458eaba4 body=704 status=ok
// SIG undefined FUN_1458eaba4(void)

void FUN_1458eaba4(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  int local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = (**(code **)(*param_1 + 0x2f0))();
  FUN_14131cafa(param_1,&local_90);
  if ((longlong)local_88 == 0) {
    local_88 = 0;
  }
  else {
    plVar4 = local_90 + (longlong)local_88 * 2;
    plVar1 = param_1 + 0x29;
    plVar3 = local_90;
    do {
      if (cVar2 == '\0') {
        local_80 = 0x100000000;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = plVar1;
        if ((int)param_1[0x2c] != 0) {
          FUN_1449c0562(&local_80);
        }
        local_a0 = local_70;
        local_98 = local_68;
        local_94 = local_64;
        local_b0 = local_80;
        local_a8 = local_78;
        local_b8 = param_1 + 0x27;
        while (local_a0._4_4_ < (int)local_a8[3]) {
          FUN_1458eaf94(param_1,plVar3,
                        *(undefined8 *)(*local_b8 + 0x10 + (longlong)local_a0._4_4_ * 0x28));
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
          FUN_1449c0562(&local_b0);
        }
        local_c8 = 0;
        uStack_c0 = 0;
        FUN_1458eae66(param_1,plVar3,&local_c8);
      }
      else if (*(int *)(*plVar3 + 0x28) - 1U < 2) {
        if (*(int *)(*plVar3 + 0x28) == 2) {
          local_80 = 0x100000000;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_78 = plVar1;
          if ((int)param_1[0x2c] != 0) {
            FUN_1449c0562(&local_80);
          }
          local_a0 = local_70;
          local_98 = local_68;
          local_94 = local_64;
          local_b0 = local_80;
          local_a8 = local_78;
          local_b8 = param_1 + 0x27;
          while (local_a0._4_4_ < (int)local_a8[3]) {
            if (*(char *)(*(longlong *)(*local_b8 + 0x10 + (longlong)local_a0._4_4_ * 0x28) + 0x100)
                == '\x01') {
              FUN_14131d470(param_1,plVar3);
            }
            else {
              FUN_1458eaf94(param_1,plVar3);
            }
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
            FUN_1449c0562(&local_b0);
          }
        }
      }
      else {
        FUN_14131d8bc(param_1,plVar3);
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
  }
  FUN_14131cf14(local_90,local_88);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458eae66 FUN_1458eae66 body=301 status=ok
// SIG undefined FUN_1458eae66(void)

void FUN_1458eae66(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(*param_2 + 0xa9) = 0;
  *(undefined8 *)(*param_2 + 0xc0) = 0;
  lVar2 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x28);
  if (iVar1 == 2) {
    *(undefined4 *)(lVar2 + 0x28) = 3;
    plVar3 = *(longlong **)(*param_2 + 0x38);
    FUN_1458eb5e6(local_30,param_1,*param_2 + 0x30,param_3);
    (**(code **)(*plVar3 + 0xa8))(plVar3,local_30);
    FUN_1449db362(local_30);
  }
  else if (iVar1 - 1U < 2) {
    *(undefined1 *)(lVar2 + 0xaa) = 1;
    lVar2 = *param_2;
    iVar1 = *(int *)(lVar2 + 0xb8);
    *(uint *)(lVar2 + 0xb8) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xbc) < iVar1 + 1U) {
      FUN_148ab421a((longlong *)(lVar2 + 0xb0),iVar1);
    }
    lVar2 = *(longlong *)(lVar2 + 0xb0);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = 0;
    FUN_140146ccc(lVar2 + lVar4,param_3);
  }
  else if (((iVar1 == 0) && ((int)param_3[1] != 0)) &&
          (plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined4 *)(lVar2 + 0x30));
  }
  FUN_1449db362(param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458eaf94 FUN_1458eaf94 body=419 status=ok
// SIG undefined FUN_1458eaf94(void)

void FUN_1458eaf94(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined4 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14131d034(param_1,&local_68);
  lVar2 = *param_2;
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    cVar5 = FUN_1458eb138(local_68,*(undefined4 *)(lVar2 + 0x30));
    if (cVar5 != '\0') {
      local_58 = (undefined8 *)(lVar2 + 0x30);
      local_50 = &local_6c;
      local_6c = 3;
      FUN_145ca1206(local_68 + 0x10,local_44,&local_58);
      lVar2 = *param_2;
      plVar3 = *(longlong **)(lVar2 + 0x38);
      local_58 = (undefined8 *)0x0;
      local_50 = (undefined4 *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar4 = local_58;
      local_50 = (undefined4 *)CONCAT44(local_50._4_4_,3);
      *local_58 = &PTR_LAB_14b4f6bc0;
      *(undefined4 *)(local_58 + 1) = *(undefined4 *)(lVar2 + 0x30);
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_58[2] = lVar6;
      *local_58 = &PTR_FUN_14b4f6b50;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar4[4] = FUN_1416606a4;
      (**(code **)(*plVar3 + 0xf0))(plVar3,param_3,&local_58);
      FUN_1449db362(&local_58);
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458eb138 FUN_1458eb138 body=106 status=ok
// SIG undefined FUN_1458eb138(void)

undefined4 FUN_1458eb138(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x10,
            *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x10) != param_2) {
        iVar3 = *(int *)(lVar2 + 8);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (lVar2 == 0) {
        return 0;
      }
      if ((int *)(lVar2 + 4) == (int *)0x0) {
        return 0;
      }
      uVar1 = *(int *)(lVar2 + 4) - 1;
      return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
    }
  }
  return 0;
}



// FUNCTION 1458eb1a2 FUN_1458eb1a2 body=157 status=ok
// SIG undefined FUN_1458eb1a2(void)

void FUN_1458eb1a2(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}



// FUNCTION 1458eb240 FUN_1458eb240 body=152 status=ok
// SIG undefined FUN_1458eb240(void)

bool FUN_1458eb240(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 1458eb2e0 FUN_1458eb2e0 body=316 status=ok
// SIG undefined FUN_1458eb2e0(void)

undefined4 * FUN_1458eb2e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458eb4fe(param_1,local_48);
  FUN_1458eb48c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1458eb41e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1458eb6b2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458eb41e FUN_1458eb41e body=109 status=ok
// SIG undefined FUN_1458eb41e(void)

undefined8 FUN_1458eb41e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_14131d216(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_145cc7df2(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_145cc7e3e(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1458eb48c FUN_1458eb48c body=113 status=ok
// SIG undefined FUN_1458eb48c(void)

undefined8 * FUN_1458eb48c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1458eb4fe FUN_1458eb4fe body=231 status=ok
// SIG undefined FUN_1458eb4fe(void)

int * FUN_1458eb4fe(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1458eb5e6 FUN_1458eb5e6 body=204 status=ok
// SIG undefined FUN_1458eb5e6(void)

longlong *
FUN_1458eb5e6(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b4f6890;
  *(undefined4 *)(puVar1 + 1) = *param_3;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_140146ccc(puVar1 + 2,param_4);
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
  puVar1[4] = lVar3;
  *puVar1 = &PTR_FUN_14b4f6820;
  puVar1[5] = 0;
  FUN_14485c47a(puVar1 + 5,param_2);
  puVar1[6] = FUN_141642e30;
  return param_1;
}



// FUNCTION 1458eb6b2 FUN_1458eb6b2 body=485 status=ok
// SIG undefined FUN_1458eb6b2(void)

void FUN_1458eb6b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458eb898 FUN_1458eb898 body=108 status=ok
// SIG undefined FUN_1458eb898(void)

undefined4 FUN_1458eb898(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  if (*(int *)(param_2 + 0x1b8) != -1) {
    GetCurrentThreadId();
  }
  DVar2 = GetCurrentThreadId();
  uVar1 = *(undefined4 *)(param_2 + 0x1b8);
  *(DWORD *)(param_2 + 0x1b8) = DVar2;
  FUN_1415abe48(param_1);
  FUN_145fa1232(param_1);
  if (*(int *)(param_1 + 0x1f8) != 0) {
    FUN_1415abc8a(param_1);
    FUN_14131dbb0(param_1,param_2);
  }
  *(undefined4 *)(param_2 + 0x1b8) = uVar1;
  return 1;
}



// FUNCTION 1458eb904 FUN_1458eb904 body=61 status=ok
// SIG undefined FUN_1458eb904(void)

void FUN_1458eb904(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1412dab16(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1490ef2f6(param_1);
  return;
}



// FUNCTION 1458eb942 FUN_1458eb942 body=131 status=ok
// SIG undefined FUN_1458eb942(void)

void FUN_1458eb942(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1b4) < 0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_1459747b8(param_1 + 0x1a8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x214);
  FUN_1401f9f9f(*(undefined8 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x210));
  *(undefined4 *)(param_1 + 0x210) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x214) != 0)) {
    FUN_1490ee65e(param_1 + 0x208,0);
    return;
  }
  return;
}



// FUNCTION 1458eb9c6 FUN_1458eb9c6 body=135 status=ok
// SIG undefined FUN_1458eb9c6(void)

void FUN_1458eb9c6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1490ef64e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x60 + *param_1),0,(longlong)(param_2 - iVar1) * 0x60);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1490ef6e2(param_1,param_2,iVar1 - param_2);
    FUN_1490ef74a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1458eba4e FUN_1458eba4e body=359 status=ok
// SIG undefined FUN_1458eba4e(void)

void FUN_1458eba4e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x128);
  iVar2 = *(int *)(param_1 + 0x134);
  FUN_1401f9f1c(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
    FUN_1490ef402(plVar1,0);
  }
  FUN_14115695c(plVar1,*(undefined4 *)(param_1 + 0x120),1);
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar4 = 0x18;
    lVar5 = 0;
    lVar3 = 0;
    do {
      FUN_1490f5fd2(local_58);
      FUN_145814950(*plVar1 + lVar5,local_58);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x118) + -0x18 + lVar4);
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x2d0))) {
        FUN_14581504c(local_58,*(undefined8 *)
                                (*(longlong *)(param_1 + 0x2c8) + 8 + (longlong)iVar2 * 0x28),
                      *(longlong *)(param_1 + 0x118) + lVar4);
        FUN_145814950(*(longlong *)(param_1 + 0x128) + lVar5,local_58);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + 0x28;
    } while (lVar3 < *(int *)(param_1 + 0x130));
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458ebbb6 FUN_1458ebbb6 body=40 status=ok
// SIG undefined FUN_1458ebbb6(void)

undefined8 FUN_1458ebbb6(undefined8 param_1,int param_2)

{
  FUN_1458ebbde();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ebbde FUN_1458ebbde body=88 status=ok
// SIG undefined FUN_1458ebbde(void)

void FUN_1458ebbde(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b92f250;
  param_1[5] = &PTR_FUN_14b92f6e0;
  param_1[6] = &PTR_LAB_14b92f720;
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1458ebc36 FUN_1458ebc36 body=524 status=ok
// SIG undefined FUN_1458ebc36(void)

void FUN_1458ebc36(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14132047a(param_1,0,0);
  FUN_1458ebe44(param_1);
  lVar1 = param_1 + 8;
  cVar4 = FUN_144729dda(lVar1);
  if ((cVar4 != '\0') && (0.0001 < *(float *)(param_1 + 0x188))) {
    FUN_14132047a(param_1,1,1);
    uVar5 = FUN_14479d2ce(lVar1);
    uVar5 = FUN_1401b4c98(uVar5);
    puVar2 = (undefined8 *)(param_1 + 400);
    lVar8 = *(longlong *)(param_1 + 400);
    if (lVar8 != 0) {
      lVar7 = FUN_144a61814(uVar5,puVar2);
      if (lVar7 != 0) {
        FUN_1405a424c(uVar5,lVar8);
      }
    }
    *puVar2 = 0;
    uVar6 = FUN_14479d2ce(lVar1);
    local_b8 = 0;
    FUN_14485c47a(&local_b8,uVar6);
    uVar6 = local_b8;
    local_c8 = (undefined8 *)0x0;
    local_c0 = 0;
    FUN_1446efa72(&local_c8,0,3,0x10);
    local_c0 = 3;
    *local_c8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_c8[2] = lVar8;
    *local_c8 = &PTR_FUN_14b97ad90;
    local_c8[3] = param_1;
    local_c8[4] = uVar6;
    uVar3 = *(undefined4 *)(param_1 + 0x188);
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_c8);
    local_68 = 1;
    local_d8 = local_b0;
    local_b0[0] = 0;
    local_ac = 0xbf800000;
    FUN_1406f4044(uVar5,puVar2,&local_a8,uVar3);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_c8);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ebe44 FUN_1458ebe44 body=321 status=ok
// SIG undefined FUN_1458ebe44(void)

void FUN_1458ebe44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong *plVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  FUN_141320700();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x150) == '\0') {
      uVar8 = FUN_14479d2ce(param_1 + 8);
      lVar9 = FUN_1447210f0(uVar8);
      dVar3 = *(double *)(lVar9 + 0x6d0);
      bVar6 = FUN_144729dda(param_1 + 0xa8);
      dVar3 = (double)(*(float *)(*(longlong *)(param_1 + 0x20) + 0x154 + (ulonglong)(bVar6 ^ 1) * 4
                                 ) * *(float *)(param_1 + 0xc4)) + dVar3;
    }
    else {
      dVar3 = 0.0;
    }
    *(double *)(param_1 + 0x38) = dVar3;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x148);
    if (plVar4 != (longlong *)0x0) {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_1458ebf08;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      if ((*(longlong *)(param_1 + 0x140) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
        FUN_14480f766(*(longlong *)(param_1 + 0x140) + 0x18);
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
LAB_1458ebf08:
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  plVar4 = *(longlong **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}



// FUNCTION 1458ebf86 FUN_1458ebf86 body=148 status=ok
// SIG undefined FUN_1458ebf86(void)

bool FUN_1458ebf86(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 1458ec01c FUN_1458ec01c body=159 status=ok
// SIG undefined FUN_1458ec01c(void)

void FUN_1458ec01c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = *(char *)((longlong)param_1 + 0x422c);
  *(undefined1 *)((longlong)param_1 + 0x422b) = 0;
  (**(code **)(*param_1 + 0xef8))();
  if ((cVar2 == '\x01') && (*(char *)((longlong)param_1 + 0x422c) == '\0')) {
    FUN_140fb2b78(param_1,0x20000,3);
  }
  if ((param_1[0x841] != 0) &&
     (plVar1 = *(longlong **)(param_1[0x841] + 0x3c0), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if (cVar2 == '\0') {
        FUN_1458ec0bc(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458ec0bc FUN_1458ec0bc body=47 status=ok
// SIG undefined FUN_1458ec0bc(void)

void FUN_1458ec0bc(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba8908);
                    /* WARNING: Could not recover jumptable at 0x0001458ec0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1458ec0ec FUN_1458ec0ec body=277 status=ok
// SIG undefined FUN_1458ec0ec(void)

void FUN_1458ec0ec(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((param_1[0x842] == 0) || (*(char *)(param_1[0x842] + 0x51e) == '\0')) {
    lVar4 = param_1[0x841];
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(lVar4 + 0x568) < 2) goto LAB_1458ec175;
  }
  cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = (double)param_1[0x27] <= 0.0 && (double)param_1[0x27] != 0.0;
  }
  *(bool *)((longlong)param_1 + 0x422b) = bVar3;
  cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
  if ((cVar2 != '\0') && (cVar2 = FUN_140b89c26(param_1), cVar2 != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x422b) = 1;
  }
  (**(code **)(*param_1 + 0xef8))(param_1);
  lVar4 = param_1[0x841];
  if (lVar4 == 0) {
    return;
  }
LAB_1458ec175:
  plVar1 = *(longlong **)(lVar4 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_144a5dd5e();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && (cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1), cVar2 == '\0')) {
      FUN_1458ec202(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1458ec202 FUN_1458ec202 body=47 status=ok
// SIG undefined FUN_1458ec202(void)

void FUN_1458ec202(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba8918);
                    /* WARNING: Could not recover jumptable at 0x0001458ec22e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1458ec23e FUN_1458ec23e body=66 status=ok
// SIG undefined FUN_1458ec23e(void)

void FUN_1458ec23e(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined2 **)plVar1[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458ec269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,2);
    return;
  }
  FUN_1457251a8();
  return;
}



// FUNCTION 1458ec280 FUN_1458ec280 body=40 status=ok
// SIG undefined FUN_1458ec280(void)

undefined8 FUN_1458ec280(undefined8 param_1,int param_2)

{
  FUN_1458ec2a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ec2a8 FUN_1458ec2a8 body=120 status=ok
// SIG undefined FUN_1458ec2a8(void)

void FUN_1458ec2a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a57b440;
  param_1[6] = &PTR_FUN_14a57b720;
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[9];
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
  FUN_1410891e4(param_1);
  return;
}



// FUNCTION 1458ec320 FUN_1458ec320 body=9 status=ok
// SIG undefined FUN_1458ec320(void)

void FUN_1458ec320(longlong param_1)

{
  FUN_1458ec334(param_1 + 0x10);
  return;
}



// FUNCTION 1458ec32a FUN_1458ec32a body=9 status=ok
// SIG undefined FUN_1458ec32a(void)

void FUN_1458ec32a(longlong param_1)

{
  FUN_1458ec362(param_1 + 0x10);
  return;
}



// FUNCTION 1458ec334 FUN_1458ec334 body=46 status=ok
// SIG undefined FUN_1458ec334(void)

void FUN_1458ec334(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1458ec353;
  while( true ) {
    FUN_1400020a8();
LAB_1458ec353:
    if (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0) break;
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1458ec362 FUN_1458ec362 body=86 status=ok
// SIG undefined FUN_1458ec362(void)

void FUN_1458ec362(longlong param_1)

{
  FUN_1458ec3b8(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1458ec3b8(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1458ec406(param_1);
  return;
}



// FUNCTION 1458ec3b8 FUN_1458ec3b8 body=77 status=ok
// SIG undefined FUN_1458ec3b8(void)

void FUN_1458ec3b8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x20);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar2 = (longlong *)plVar3[-2];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458ec406 FUN_1458ec406 body=75 status=ok
// SIG undefined FUN_1458ec406(void)

void FUN_1458ec406(longlong param_1)

{
  FUN_1458ec451(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  while (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1458ec451 FUN_1458ec451 body=77 status=ok
// SIG undefined FUN_1458ec451(void)

void FUN_1458ec451(longlong param_1,int param_2)

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



// FUNCTION 1458ec49e FUN_1458ec49e body=148 status=ok
// SIG undefined FUN_1458ec49e(void)

bool FUN_1458ec49e(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 1458ec53a FUN_1458ec53a body=254 status=ok
// SIG undefined FUN_1458ec53a(void)

longlong *
FUN_1458ec53a(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_1458ec63c(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1458ec6b4(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ec63c FUN_1458ec63c body=120 status=ok
// SIG undefined FUN_1458ec63c(void)

undefined8 * FUN_1458ec63c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99c680;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99c6a0;
  param_1[6] = &PTR_FUN_14b99c6e0;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1458ec6b4 FUN_1458ec6b4 body=162 status=ok
// SIG undefined FUN_1458ec6b4(void)

void FUN_1458ec6b4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_1458ec6f3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_1458ec6f3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458ec6f3:
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
                    /* WARNING: Could not recover jumptable at 0x0001458ec752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458ec756 FUN_1458ec756 body=40 status=ok
// SIG undefined FUN_1458ec756(void)

undefined8 FUN_1458ec756(undefined8 param_1,int param_2)

{
  FUN_1458ec77e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ec77e FUN_1458ec77e body=109 status=ok
// SIG undefined FUN_1458ec77e(void)

void FUN_1458ec77e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bed3910;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458ec7ec thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1458ec7f2 FUN_1458ec7f2 body=43 status=ok
// SIG undefined FUN_1458ec7f2(void)

undefined8 FUN_1458ec7f2(undefined8 param_1,int param_2)

{
  FUN_1458ec81e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x608);
  }
  return param_1;
}



// FUNCTION 1458ec81e FUN_1458ec81e body=972 status=ok
// SIG undefined FUN_1458ec81e(void)

void FUN_1458ec81e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ad180;
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  FUN_1413215d9(param_1[0xb5],*(undefined4 *)(param_1 + 0xb6));
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  FUN_141321572(param_1 + 0x9e);
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_141321572(param_1 + 0x86);
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e631a3(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_140e631a3(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_140e631a3(param_1[0x6f],*(undefined4 *)(param_1 + 0x70));
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_140e631a3(param_1[0x6b],*(undefined4 *)(param_1 + 0x6c));
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e631a3(param_1[0x67],*(undefined4 *)(param_1 + 0x68));
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_141321572(param_1 + 0x37);
  if ((longlong *)param_1[0x32] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x32] + 0x10))();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 1458ecbea FUN_1458ecbea body=40 status=ok
// SIG undefined FUN_1458ecbea(void)

undefined8 FUN_1458ecbea(undefined8 param_1,int param_2)

{
  FUN_1458ecc12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ecc12 FUN_1458ecc12 body=122 status=ok
// SIG undefined FUN_1458ecc12(void)

void FUN_1458ecc12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9285e0;
  param_1[0x79] = &PTR_FUN_14b928c50;
  param_1[0x7a] = &PTR_FUN_14b928c70;
  param_1[0x7b] = &PTR_FUN_14b928d10;
  param_1[0x7c] = &PTR_FUN_14b928d60;
  FUN_1405d7ab2(param_1[0xc4],*(undefined4 *)(param_1 + 0xc5));
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_140ce0512(param_1);
  return;
}



// FUNCTION 1458ecc8c FUN_1458ecc8c body=89 status=ok
// SIG undefined FUN_1458ecc8c(void)

void FUN_1458ecc8c(longlong *param_1,int param_2)

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
  FUN_1458ecce6();
  return;
}



// FUNCTION 1458ecce6 FUN_1458ecce6 body=54 status=ok
// SIG undefined FUN_1458ecce6(void)

void FUN_1458ecce6(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1458ecd1c(param_1,param_2);
  return;
}



// FUNCTION 1458ecd1c FUN_1458ecd1c body=114 status=ok
// SIG undefined FUN_1458ecd1c(void)

void FUN_1458ecd1c(longlong *param_1,int param_2)

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



// FUNCTION 1458ecd8e FUN_1458ecd8e body=254 status=ok
// SIG undefined FUN_1458ecd8e(void)

void FUN_1458ecd8e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458ece8e();
  local_48 = 0;
  FUN_14485c47a(&local_48,param_3);
  local_40 = param_4;
  iVar2 = FUN_1458ed042(param_1 + 0xf8,&local_48);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    FUN_1458ecef4(param_2);
    plVar3 = (longlong *)FUN_140bede9a(param_2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x420))(plVar3,0);
    }
    if (param_2 != (longlong *)0x0) {
      uVar4 = FUN_140501a92();
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
      if (plVar3 != (longlong *)0x0) {
        uVar4 = FUN_140501a92();
        plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
        if ((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,0,lVar1 + 0xd8);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ece8e FUN_1458ece8e body=100 status=ok
// SIG undefined FUN_1458ece8e(void)

void FUN_1458ece8e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30,param_3);
  local_28 = param_4;
  FUN_1458ed1e4(param_1 + 0x68,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ecef4 FUN_1458ecef4 body=102 status=ok
// SIG undefined FUN_1458ecef4(void)

void FUN_1458ecef4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458ecf5c();
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



// FUNCTION 1458ecf5c FUN_1458ecf5c body=228 status=ok
// SIG undefined FUN_1458ecf5c(void)

longlong FUN_1458ecf5c(void)

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
  if (DAT_14cb612d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1486d8e3f;
    local_40 = &LAB_145c99c93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x428;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMovingPlatformInstanceConfigComponent",&DAT_14cb612d0,
                  &DAT_1486d8e3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb612d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ed042 FUN_1458ed042 body=235 status=ok
// SIG undefined FUN_1458ed042(void)

undefined8 FUN_1458ed042(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x88) << 4;
    iVar3 = 1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar6,param_2), cVar1 != '\0')) {
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x88);
        iVar3 = iVar2 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          lVar6 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar6 = param_1;
          }
          memmove((void *)((lVar4 >> 0x20) * 0x10 + lVar6),
                  (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar6),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        FUN_1458ed12e(param_1);
        return 1;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 1458ed12e FUN_1458ed12e body=73 status=ok
// SIG undefined FUN_1458ed12e(void)

void FUN_1458ed12e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458ed178(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14866cae0(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 1458ed178 FUN_1458ed178 body=108 status=ok
// SIG undefined FUN_1458ed178(void)

ulonglong FUN_1458ed178(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1458ed1e4 FUN_1458ed1e4 body=238 status=ok
// SIG undefined FUN_1458ed1e4(void)

void FUN_1458ed1e4(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x88) << 4;
    iVar3 = 1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar6 + 8) == *(longlong *)(param_2 + 8)) &&
         (cVar1 = FUN_14038330a(lVar6,param_2), cVar1 != '\0')) {
        if (iVar3 == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x88);
        iVar3 = iVar2 - iVar3;
        if (iVar3 != 0) {
          iVar5 = 1;
          if (iVar3 < 1) {
            iVar5 = iVar3;
          }
          lVar6 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar6 = param_1;
          }
          memmove((void *)((lVar4 >> 0x20) * 0x10 + lVar6),
                  (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar6),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        FUN_1458ed2d2(param_1);
        return;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 1458ed2d2 FUN_1458ed2d2 body=73 status=ok
// SIG undefined FUN_1458ed2d2(void)

void FUN_1458ed2d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458ed31c(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14866b752(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,0x10);
  return;
}



// FUNCTION 1458ed31c FUN_1458ed31c body=108 status=ok
// SIG undefined FUN_1458ed31c(void)

ulonglong FUN_1458ed31c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1458ed388 FUN_1458ed388 body=1129 status=ok
// SIG undefined FUN_1458ed388(void)

void FUN_1458ed388(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  char *_Str;
  size_t sVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_1e8 [36];
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8 [3];
  int local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188;
  undefined1 local_17c [4];
  undefined8 local_178 [2];
  undefined8 local_168 [30];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar16 = *(longlong *)(param_1 + 0x10);
  plVar7 = *(longlong **)(lVar16 + 0x380);
  plVar8 = *(longlong **)(lVar16 + 0x390);
  local_1c0 = param_1;
  plVar14 = (longlong *)FUN_1458eda58(lVar16 + 0x398,*(undefined4 *)(param_1 + 0x18),param_1 + 0x18)
  ;
  iVar12 = (**(code **)(*plVar8 + 0x18))(plVar8,4);
  FUN_1458ed8ac(plVar14,iVar12);
  local_1c4 = iVar12;
  if (0 < iVar12) {
    iVar12 = 0;
    do {
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_198,iVar12,4);
      _Str = (char *)(**(code **)(*plVar8 + 0x38))(plVar8,local_198);
      local_78 = 0;
      if (_Str == (char *)0x0) {
        local_70 = 0;
        local_68 = 0;
      }
      else {
        sVar15 = strlen(_Str);
        FUN_1446e6fe8(local_178,_Str,sVar15 & 0xffffffff,1);
      }
      FUN_140056680(local_1b8 + 2,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      bVar11 = 0;
      local_178[0] = 0;
      local_168[0] = 0;
      (**(code **)(*plVar8 + 0x40))(plVar8,local_198,local_178);
      iVar13 = (**(code **)(*plVar8 + 0x30))(plVar8,local_198);
      uVar18 = (uint)local_178[0] & 0xffffff;
      uVar5 = *(uint *)((longlong)plVar7 + 0xdc);
      if (uVar18 == uVar5) {
        bVar11 = FUN_1458ed9e4(local_168);
      }
      if (local_1a0 - 2U < 0x7fffffff) {
        iVar6 = *(int *)(local_1c0 + 0x1c);
        if (iVar6 == 1) {
          if (0 < iVar13) goto LAB_1458ed513;
        }
        else if (iVar6 == 3) {
          if ((0 < iVar13) && ((uVar18 == uVar5 & bVar11) != 0)) goto LAB_1458ed513;
        }
        else if ((iVar6 != 2) || (0 < iVar13 && uVar18 == uVar5)) {
LAB_1458ed513:
          lVar16 = FUN_14001cc68(0x68,0x10);
          FUN_1458ed7f2(lVar16,&local_198);
          plVar17 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar17[1] = (longlong)&DAT_100000001;
          *plVar17 = (longlong)&PTR_FUN_14ba45b00;
          plVar17[2] = lVar16;
          iVar13 = (int)plVar14[1];
          *(uint *)(plVar14 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar14 + 0xc) < iVar13 + 1U) {
            FUN_148fb9ac8(plVar14,iVar13);
          }
          lVar9 = *plVar14;
          *(longlong *)(lVar9 + (longlong)iVar13 * 0x10) = lVar16;
          *(longlong **)(lVar9 + 8 + (longlong)iVar13 * 0x10) = plVar17;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
          }
          FUN_140056680(local_1b8,L"nickname");
          local_188 = local_1b8 + 2;
          local_190 = local_1b8;
          FUN_1413216f2(lVar16 + 0x18,local_17c,&local_190,0);
          if (local_1b8[0] != 0) {
            FUN_1400020a8();
          }
          (**(code **)(*plVar7 + 200))(plVar7,&local_190);
          plVar10 = local_188;
          plVar1 = local_190;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_188 + 1) = (int)local_188[1] + 1;
            plVar3 = local_188;
            UNLOCK();
            if (local_188 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_188 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar4 = (int *)((longlong)plVar3 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_14132161e(&local_190,&local_198);
            local_1b8[0] = 0;
            local_1b8[1] = 0;
            (**(code **)(*plVar1 + 0x20))(plVar1,local_190,local_1b8);
            FUN_1449db362(local_1b8);
            plVar1 = local_188;
            if (local_188 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_188 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar4 = (int *)((longlong)plVar1 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar4 = (int *)((longlong)plVar10 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar4 = (int *)((longlong)plVar17 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
      }
      if (local_1b8[2] != 0) {
        FUN_1400020a8();
      }
      iVar12 = iVar12 + 1;
    } while (local_1c4 != iVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458ed7f2 FUN_1458ed7f2 body=184 status=ok
// SIG undefined FUN_1458ed7f2(void)

undefined8 * FUN_1458ed7f2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14ba42370;
  FUN_14132161e(&local_28);
  param_1[1] = local_28;
  param_1[2] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ed8ac FUN_1458ed8ac body=68 status=ok
// SIG undefined FUN_1458ed8ac(void)

void FUN_1458ed8ac(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1458ed8f1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1458edb14(param_1,param_2);
  return;
}



// FUNCTION 1458ed8f1 FUN_1458ed8f1 body=73 status=ok
// SIG undefined FUN_1458ed8f1(void)

void FUN_1458ed8f1(longlong param_1,int param_2)

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



// FUNCTION 1458ed93a FUN_1458ed93a body=24 status=ok
// SIG undefined FUN_1458ed93a(void)

void FUN_1458ed93a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458ed94e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458ed952 FUN_1458ed952 body=38 status=ok
// SIG undefined FUN_1458ed952(void)

undefined8 FUN_1458ed952(undefined8 param_1,int param_2)

{
  FUN_1458ed978();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ed978 FUN_1458ed978 body=107 status=ok
// SIG undefined FUN_1458ed978(void)

void FUN_1458ed978(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba42370;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 3);
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
                    /* WARNING: Could not recover jumptable at 0x0001458ed9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458ed9e4 FUN_1458ed9e4 body=116 status=ok
// SIG undefined FUN_1458ed9e4(void)

undefined8 FUN_1458ed9e4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = uVar1 >> 0x14 & 0xf;
  if ((uVar2 - 0xb < 0xfffffff6) || (((int)uVar1 >> 0x18) - 5U < 0xfffffffc)) {
LAB_1458eda43:
    uVar4 = 0;
  }
  else {
    if (uVar2 == 1) {
      if ((uVar1 & 0xfffff) != 1) {
        return 0;
      }
      if (*param_1 == 0) {
        return 0;
      }
    }
    uVar2 = uVar1 & 0xf00000;
    uVar3 = (ulonglong)uVar2;
    if (uVar2 == 0x300000) {
      if (*param_1 == 0) goto LAB_1458eda43;
    }
    else if (uVar2 == 0x700000) {
      uVar3 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        return 0;
      }
      if (*param_1 == 0) {
        return 0;
      }
    }
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1458eda58 FUN_1458eda58 body=186 status=ok
// SIG undefined FUN_1458eda58(void)

longlong FUN_1458eda58(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar2 != 0) goto LAB_1458edae8;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1458edb74(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x20 + *param_1;
LAB_1458edae8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1458edb14 FUN_1458edb14 body=95 status=ok
// SIG undefined FUN_1458edb14(void)

void FUN_1458edb14(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1458edb74 FUN_1458edb74 body=281 status=ok
// SIG undefined FUN_1458edb74(void)

undefined4 * FUN_1458edb74(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458edd42(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  FUN_1458ed8f1(0,0);
  local_40[6] = 0xffffffff;
  cVar1 = FUN_1458edc8e(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_1458ede28(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458edc8e FUN_1458edc8e body=179 status=ok
// SIG undefined FUN_1458edc8e(void)

undefined8 FUN_1458edc8e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1458ed8f1(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148fb9a56(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458edd42 FUN_1458edd42 body=230 status=ok
// SIG undefined FUN_1458edd42(void)

int * FUN_1458edd42(longlong *param_1,int *param_2)

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



// FUNCTION 1458ede28 FUN_1458ede28 body=431 status=ok
// SIG undefined FUN_1458ede28(void)

void FUN_1458ede28(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1458edfd8 FUN_1458edfd8 body=132 status=ok
// SIG undefined FUN_1458edfd8(void)

void FUN_1458edfd8(longlong param_1,int param_2)

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



// FUNCTION 1458ee05e FUN_1458ee05e body=40 status=ok
// SIG undefined FUN_1458ee05e(void)

undefined8 FUN_1458ee05e(undefined8 param_1,int param_2)

{
  FUN_1458ee086();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ee086 FUN_1458ee086 body=121 status=ok
// SIG undefined FUN_1458ee086(void)

void FUN_1458ee086(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aadbb60;
  FUN_1400d0e10(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
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
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458ee100 FUN_1458ee100 body=115 status=ok
// SIG undefined FUN_1458ee100(void)

void FUN_1458ee100(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  *param_2 = &PTR_FUN_14ac4f5c0;
  FUN_141321d98(param_2 + 0x26);
  *param_2 = &PTR_FUN_14b0d29b0;
  return;
}



// FUNCTION 1458ee174 FUN_1458ee174 body=139 status=ok
// SIG undefined FUN_1458ee174(void)

undefined8 * FUN_1458ee174(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140d1f164(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458ee195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)(**(code **)(lVar1 + 0x38))();
    return puVar2;
  }
  puVar2 = (undefined8 *)FUN_1458ee270(&DAT_14cbc8cd0);
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *puVar2 = &PTR_FUN_14b748bc0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_144a5dc74(puVar2 + 8);
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  return puVar2;
}



// FUNCTION 1458ee200 FUN_1458ee200 body=112 status=ok
// SIG undefined FUN_1458ee200(void)

undefined8 * FUN_1458ee200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1458ee270(&DAT_14cbc8cd0);
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_FUN_14b748bc0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_144a5dc74(puVar1 + 8);
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return puVar1;
}



// FUNCTION 1458ee270 FUN_1458ee270 body=84 status=ok
// SIG undefined FUN_1458ee270(void)

void FUN_1458ee270(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x780,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0xf;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1458ee2c4 FUN_1458ee2c4 body=151 status=ok
// SIG undefined FUN_1458ee2c4(void)

void FUN_1458ee2c4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1458ee35c(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ee35c FUN_1458ee35c body=90 status=ok
// SIG undefined FUN_1458ee35c(void)

void FUN_1458ee35c(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    FUN_1458ee3b6();
    if (param_2 == '\0') {
      FUN_1458ee444(param_1);
      uVar2 = 2;
    }
    else {
      uVar2 = 4;
    }
    *(undefined1 *)(param_1 + 0x5c) = uVar2;
    if (((*(char *)(param_1 + 0x5d) == '\0') && (*(int *)(param_1 + 0x30) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001458ee3af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1458ee3b6 FUN_1458ee3b6 body=67 status=ok
// SIG undefined FUN_1458ee3b6(void)

void FUN_1458ee3b6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1458ee3fa();
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x70);
    lVar2 = FUN_144a61814(lVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(lVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 1458ee3fa FUN_1458ee3fa body=74 status=ok
// SIG undefined FUN_1458ee3fa(void)

undefined8 FUN_1458ee3fa(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x40) != 0)) &&
     (lVar1 = FUN_1447210f0(), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      puVar2 = (undefined8 *)(lVar1 + 0x458);
    }
    else {
      puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
    }
    return *puVar2;
  }
  return 0;
}



// FUNCTION 1458ee444 FUN_1458ee444 body=155 status=ok
// SIG undefined FUN_1458ee444(void)

void FUN_1458ee444(longlong param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar1 = FUN_14109b67c();
    if (lVar1 != 0) {
      local_48 = (undefined ***)0x0;
      local_38 = &PTR_LAB_14b42a310;
      local_58[0] = &LAB_143e2db54;
      local_30 = param_1;
      (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))(lVar1 + 8,local_58);
      if (local_58[0] != (undefined1 *)0x0) {
        pppuVar2 = local_48;
        if (local_48 == (undefined ***)0x0) {
          pppuVar2 = &local_38;
        }
        (*(code *)(*pppuVar2)[2])();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ee4e0 FUN_1458ee4e0 body=183 status=ok
// SIG undefined FUN_1458ee4e0(void)

bool FUN_1458ee4e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = CONCAT44(uStack_2c,local_30);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    uStack_2c = CONCAT31(uStack_2c._1_3_,*(char *)(param_1 + 0xc));
    if (*(char *)(param_1 + 0xc) == '\x01') {
      local_30 = *(undefined4 *)(param_1 + 8);
    }
    (**(code **)(param_1 + 0x20))(lVar2,param_2,&local_30);
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



// FUNCTION 1458ee598 FUN_1458ee598 body=249 status=ok
// SIG undefined FUN_1458ee598(void)

void FUN_1458ee598(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_3 + 1) == '\x01') {
    local_20 = 0xffffffff;
    FUN_14106236a(param_1,*param_3,3);
  }
  else {
    if (*(int *)(param_2 + 0x54) == -1) {
      local_28 = 0xffffffff;
    }
    else {
      local_28 = *(undefined8 *)(param_2 + 0x54);
    }
    local_58 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_50 = 0x8000000000;
    local_48 = 0xffffffff;
    local_88 = &local_28;
    FUN_140f71c20(0,*(undefined4 *)(param_2 + 0x50),&local_78,3);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_78);
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ee692 FUN_1458ee692 body=40 status=ok
// SIG undefined FUN_1458ee692(void)

undefined8 FUN_1458ee692(undefined8 param_1,int param_2)

{
  FUN_1458ee6ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ee6ba FUN_1458ee6ba body=89 status=ok
// SIG undefined FUN_1458ee6ba(void)

void FUN_1458ee6ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abd6250;
  param_1[5] = &PTR_FUN_14abd66d0;
  param_1[6] = &PTR_LAB_14abd6710;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 1458ee714 FUN_1458ee714 body=299 status=ok
// SIG undefined FUN_1458ee714(void)

void FUN_1458ee714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c069a4();
  FUN_1446f470e(&local_58,L"bIsUsing",1);
  uVar1 = FUN_141322e0c();
  FUN_141322e0c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"AttachState",1);
  uVar1 = FUN_141322e0c();
  FUN_141322e0c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumberOfCharges",1);
  uVar1 = FUN_141322e0c();
  FUN_141322e0c();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ee840 FUN_1458ee840 body=161 status=ok
// SIG undefined FUN_1458ee840(void)

void FUN_1458ee840(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x364);
  FUN_141323308(*(undefined8 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x360));
  *(undefined4 *)(param_1 + 0x360) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x364) != 0)) {
    FUN_148a67dce(param_1 + 0x358,0);
  }
  local_20 = &local_30;
  local_28 = FUN_143eff754;
  local_30 = param_1;
  bifrost::social::friends::list(*(undefined8 *)(param_1 + 0x2b8),4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ee8e2 FUN_1458ee8e2 body=265 status=ok
// SIG undefined FUN_1458ee8e2(void)

void FUN_1458ee8e2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = FUN_1458ee9ec();
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) != 0)) {
    FUN_1458eeaea(local_e8);
    memset(local_d8,0,0xa0);
    uVar2 = FUN_14479d2ce(param_1 + 0x18);
    local_f8 = local_e8;
    FUN_141323de6(param_1 + 0x50,lVar1 + 8,uVar2,local_d8);
    if (local_78 != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_b8 != 0) {
      if (local_a8 == (longlong *)0x0) {
        local_a8 = local_98;
      }
      (**(code **)(*local_a8 + 0x10))();
    }
    FUN_1449db362(local_e8);
    FUN_1458eea74(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ee9ec FUN_1458ee9ec body=78 status=ok
// SIG undefined FUN_1458ee9ec(void)

longlong * FUN_1458ee9ec(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1458eea3a();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1458eea3a FUN_1458eea3a body=57 status=ok
// SIG undefined FUN_1458eea3a(void)

void FUN_1458eea3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf60 = FUN_140002ddd(FUN_14652fbb8,uVar1,L"MissionDependencyCondition_FactExpression");
  }
  return;
}



// FUNCTION 1458eea74 FUN_1458eea74 body=117 status=ok
// SIG undefined FUN_1458eea74(void)

void FUN_1458eea74(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  char local_28 [12];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141323e14(param_1 + 0x50,local_28);
  if (local_28[0] == '\x01') {
    cVar1 = local_1c != 0;
  }
  else {
    cVar1 = FUN_140321d1a(local_28);
  }
  if (*(char *)(param_1 + 0x38) != cVar1) {
    *(char *)(param_1 + 0x38) = cVar1;
    FUN_1447f69b6(param_1 + 0x20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458eeaea FUN_1458eeaea body=423 status=ok
// SIG undefined FUN_1458eeaea(void)

longlong * FUN_1458eeaea(longlong *param_1,longlong param_2)

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
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1458eebc1:
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
    *puVar3 = &PTR_FUN_14b41a9e0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1458eea74;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1458eebc1;
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
    uVar5 = *(undefined8 *)(param_2 + 8);
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
    *puVar3 = &PTR_FUN_14b41a9e0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1458eea74;
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



// FUNCTION 1458eec92 FUN_1458eec92 body=248 status=ok
// SIG undefined FUN_1458eec92(void)

undefined8 * FUN_1458eec92(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x120);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97d3a0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x110);
  FUN_1457a2efc(plVar1);
  plVar4[2] = (longlong)&PTR_FUN_14b6aee80;
  plVar4[0x21] = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1458eed8e(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = plVar1;
  param_2[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458eed8e FUN_1458eed8e body=157 status=ok
// SIG undefined FUN_1458eed8e(void)

void FUN_1458eed8e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1458eedc8;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1458eedc8;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458eedc8:
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
                    /* WARNING: Could not recover jumptable at 0x0001458eee27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458eee2c FUN_1458eee2c body=21 status=ok
// SIG undefined FUN_1458eee2c(void)

undefined8 FUN_1458eee2c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1458eee4a FUN_1458eee4a body=1098 status=ok
// SIG undefined FUN_1458eee4a(void)

undefined8 * FUN_1458eee4a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b272610;
  param_1[0x72] = &PTR_FUN_14b272cc0;
  param_1[0x73] = &PTR_FUN_14b272d30;
  param_1[0x74] = &PTR_FUN_14b272d60;
  param_1[0x75] = &PTR_FUN_14b272d90;
  param_1[0x76] = &PTR_FUN_14b272e00;
  param_1[0x77] = &PTR_FUN_14b272e30;
  param_1[0x78] = &PTR_FUN_14b272e60;
  param_1[0x79] = &PTR_FUN_14b272ed0;
  param_1[0x7a] = &PTR_FUN_14b272ef0;
  param_1[0x7b] = &PTR_FUN_14b272f10;
  param_1[0x7c] = &PTR_FUN_14b272f60;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = DAT_14caa8578;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 1;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 2;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x573) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0;
  param_1[199] = 2;
  FUN_1458ef296(param_1 + 200);
  param_1[300] = 0;
  param_1[0x12d] = 0;
  *(undefined4 *)(param_1 + 0x12e) = 2;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  *(undefined4 *)(param_1 + 0x152) = 2;
  *(undefined8 *)((longlong)param_1 + 0xa94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xaac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xab4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xabc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xacc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 0;
  param_1[0x15c] = 2;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0;
  param_1[0x168] = 0;
  *(undefined4 *)(param_1 + 0x169) = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb54) = 0;
  param_1[0x16c] = 0;
  *(undefined4 *)(param_1 + 0x16d) = 0;
  *(undefined1 *)(param_1 + 0x174) = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x177] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  FUN_1446f470e(&local_48,L"Root",1);
  uVar1 = FUN_144a799b0();
  local_50 = 1;
  local_58 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_48,uVar1,uVar1);
  if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_1458ef242;
  }
  else {
    FUN_1456cec3c(plVar2);
    param_1[0x39] = plVar2;
  }
  (**(code **)(*plVar2 + 0x588))(plVar2,2);
LAB_1458ef242:
  uVar1 = FUN_14007ca06();
  FUN_141323f6e(param_1 + 0x8a,uVar1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458ef296 FUN_1458ef296 body=192 status=ok
// SIG undefined FUN_1458ef296(void)

undefined8 * FUN_1458ef296(undefined8 *param_1)

{
  FUN_1411c3dfa();
  *param_1 = &PTR_FUN_14b276690;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  return param_1;
}



// FUNCTION 1458ef356 FUN_1458ef356 body=9 status=ok
// SIG undefined FUN_1458ef356(void)

void FUN_1458ef356(longlong param_1)

{
  FUN_1458ef360(param_1 + 0x10);
  return;
}



// FUNCTION 1458ef360 FUN_1458ef360 body=81 status=ok
// SIG undefined FUN_1458ef360(void)

void FUN_1458ef360(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ba40e48;
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



// FUNCTION 1458ef3be FUN_1458ef3be body=73 status=ok
// SIG undefined FUN_1458ef3be(void)

undefined8 * FUN_1458ef3be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba40e60;
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458ef408 FUN_1458ef408 body=63 status=ok
// SIG undefined FUN_1458ef408(void)

undefined1 FUN_1458ef408(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458ef448(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 1458ef448 FUN_1458ef448 body=113 status=ok
// SIG undefined FUN_1458ef448(void)

longlong FUN_1458ef448(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_1458ef4ba(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 1458ef4ba FUN_1458ef4ba body=79 status=ok
// SIG undefined FUN_1458ef4ba(void)

undefined8 * FUN_1458ef4ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1458ef50a(param_1,iVar1);
      FUN_141323f85(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}


